/*
 * Copyright (c) 2011 Matthieu Herrb
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifdef HAVE_DIX_CONFIG_H
#include <dix-config.h>
#endif

#include <sys/ioctl.h>
#include <sys/time.h>
#include <dev/wscons/wsconsio.h>
#include <dev/wscons/wsksymdef.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

#include "input.h"
#include "inputstr.h"
#include "os.h"
#include "config-backends.h"

#define WSCONS_KBD_DEVICE "/dev/wskbd"
#define WSCONS_MOUSE_PREFIX "/dev/wsmouse"

#define KB_OVRENC \
        { KB_UK,        "gb" }, \
        { KB_SV,        "se" }, \
        { KB_SG,        "ch" }, \
        { KB_SF,        "ch" }, \
        { KB_LA,        "latam" }, \
        { KB_CF,        "ca" }

struct nameint {
    int val;
    const char *name;
} kbdenc[] = {
    KB_OVRENC,
    KB_ENCTAB,
    {0}
};

struct nameint kbdvar[] = {
    {KB_NODEAD | KB_SG, "de_nodeadkeys"},
    {KB_NODEAD | KB_SF, "fr_nodeadkeys"},
    {KB_SF, "fr"},
    {KB_DVORAK | KB_CF, "fr-dvorak"},
    {KB_DVORAK | KB_FR, "bepo"},
    {KB_DVORAK, "dvorak"},
    {KB_COLEMAK, "colemak"},
    {KB_CF, "fr-legacy"},
    {KB_NODEAD, "nodeadkeys"},
    {0}
};

struct nameint kbdopt[] = {
    {KB_SWAPCTRLCAPS, "ctrl:swapcaps"},
    {0}
};

struct nameint kbdmodel[] = {
    {WSKBD_TYPE_ADB, "macintosh" },
    {0}
};

static void
wscons_add_keyboard(void)
{
    InputAttributes attrs = { };
    DeviceIntPtr dev = NULL;
    InputOption *input_options = NULL;
    char *config_info = NULL;
    int fd, i, rc;
    unsigned int type;
    kbd_t wsenc = 0;

    /* Find keyboard configuration */
    fd = priv_open_device(WSCONS_KBD_DEVICE);
    if (fd == -1) {
        LogMessage(X_ERROR, "wskbd: open %s: %s\n",
                   WSCONS_KBD_DEVICE, strerror(errno));
        return;
    }
    if (ioctl(fd, WSKBDIO_GETENCODING, &wsenc) == -1) {
        LogMessage(X_WARNING, "wskbd: ioctl(WSKBDIO_GETENCODING) "
                   "failed: %s\n", strerror(errno));
        close(fd);
        return;
    }
    if (ioctl(fd, WSKBDIO_GTYPE, &type) == -1) {
        LogMessage(X_WARNING, "wskbd: ioctl(WSKBDIO_GTYPE) "
                   "failed: %s\n", strerror(errno));
        close(fd);
        return;
    }
    close(fd);

    input_options = input_option_new(input_options, "_source", "server/wscons");
    if (input_options == NULL)
        return;

    LogMessage(X_INFO, "config/wscons: checking input device %s\n",
               WSCONS_KBD_DEVICE);
    input_options = input_option_new(input_options, "name", WSCONS_KBD_DEVICE);
    input_options = input_option_new(input_options, "driver", "kbd");

    if (asprintf(&config_info, "wscons:%s", WSCONS_KBD_DEVICE) < 0)
        goto unwind;
    if (!config_info)
        goto unwind;
    if (KB_ENCODING(wsenc) == KB_USER) {
        /* Ignore wscons "user" layout */
        LogMessageVerb(X_INFO, 3, "wskbd: ignoring \"user\" layout\n");
        goto kbd_config_done;
    }
    for (i = 0; kbdenc[i].val; i++)
        if (KB_ENCODING(wsenc) == kbdenc[i].val) {
            LogMessageVerb(X_INFO, 3, "wskbd: using layout %s\n",
                           kbdenc[i].name);
            input_options = input_option_new(input_options,
                                             "xkb_layout", kbdenc[i].name);
            break;
        }
    for (i = 0; kbdvar[i].val; i++)
        if ((wsenc & kbdvar[i].val) == kbdvar[i].val &&
            (KB_ENCODING(wsenc) == KB_ENCODING(kbdvar[i].val) ||
            !KB_ENCODING(kbdvar[i].val))) {
            LogMessageVerb(X_INFO, 3, "wskbd: using variant %s\n",
                           kbdvar[i].name);
            input_options = input_option_new(input_options,
                                             "xkb_variant", kbdvar[i].name);
            break;
        }
    for (i = 0; kbdopt[i].val; i++)
        if (KB_VARIANT(wsenc) & kbdopt[i].val) {
            LogMessageVerb(X_INFO, 3, "wskbd: using option %s\n",
                           kbdopt[i].name);
            input_options = input_option_new(input_options,
                                             "xkb_options", kbdopt[i].name);
            break;
        }
    for (i = 0; kbdmodel[i].val; i++)
        if (type == kbdmodel[i].val) {
            LogMessageVerb(X_INFO, 3, "wskbd: using model %s\n",
                           kbdmodel[i].name);
            input_options = input_option_new(input_options,
                                             "xkb_model", kbdmodel[i].name);
            break;
        }

 kbd_config_done:
    attrs.flags |= ATTR_KEY | ATTR_KEYBOARD;
    rc = NewInputDeviceRequest(input_options, &attrs, &dev);
    if (rc != Success)
        goto unwind;

    for (; dev; dev = dev->next) {
        free(dev->config_info);
        dev->config_info = strdup(config_info);
    }
 unwind:
    input_option_free_list(&input_options);
}

static void
wscons_add_pointer(const char *path, const char *driver, int flags)
{
    InputAttributes attrs = { };
    DeviceIntPtr dev = NULL;
    InputOption *input_options = NULL;
    char *config_info = NULL;
    int rc;

    if (asprintf(&config_info, "wscons:%s", path) < 0)
        return;
    if (!config_info)
        return;

    input_options = input_option_new(input_options, "_source", "server/wscons");
    if (input_options == NULL)
        return;

    input_options = input_option_new(input_options, "name", strdup(path));
    input_options = input_option_new(input_options, "driver", strdup(driver));
    input_options = input_option_new(input_options, "device", strdup(path));
    LogMessage(X_INFO, "config/wscons: checking input device %s\n", path);
    attrs.flags |= flags;
    rc = NewInputDeviceRequest(input_options, &attrs, &dev);
    if (rc != Success)
        goto unwind;

    for (; dev; dev = dev->next) {
        free(dev->config_info);
        dev->config_info = strdup(config_info);
    }
 unwind:
    input_option_free_list(&input_options);
}

static void
wscons_add_pointers(void)
{
    char devnam[256];
    int fd, i, wsmouse_type;

    /* Check pointing devices */
    for (i = 0; i <= 9; i++) {
        snprintf(devnam, sizeof(devnam), "%s%d", WSCONS_MOUSE_PREFIX, i);
        LogMessageVerb(X_INFO, 10, "wsmouse: checking %s\n", devnam);
        fd = priv_open_device(devnam);
        if (fd == -1) {
            LogMessageVerb(X_WARNING, 10, "%s: %s\n", devnam, strerror(errno));
            continue;
        }
        if (ioctl(fd, WSMOUSEIO_GTYPE, &wsmouse_type) != 0) {
            LogMessageVerb(X_WARNING, 10,
                           "%s: WSMOUSEIO_GTYPE failed\n", devnam);
            close(fd);
            continue;
        }
        close(fd);
        switch (wsmouse_type) {
          case WSMOUSE_TYPE_SYNAPTICS:
          case WSMOUSE_TYPE_ALPS:
          case WSMOUSE_TYPE_ELANTECH:
          case WSMOUSE_TYPE_SYNAP_SBTN:
          case WSMOUSE_TYPE_TOUCHPAD:
            wscons_add_pointer(devnam, "ws",
                               ATTR_TOUCHPAD);
            break;
          case WSMOUSE_TYPE_TPANEL:
            wscons_add_pointer(devnam, "ws", ATTR_TOUCHSCREEN);
            break;
          default:
            break;
        }
    }
    /* Add a default entry catching all other mux elements as "ws" */
    wscons_add_pointer(WSCONS_MOUSE_PREFIX, "ws", ATTR_POINTER);
}

int
config_wscons_init(void)
{
    wscons_add_keyboard();
    wscons_add_pointers();
    return 1;
}

void
config_wscons_fini(void)
{
    /* Not much to do ? */
}
