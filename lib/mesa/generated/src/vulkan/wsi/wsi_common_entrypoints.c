
/* Copyright © 2015-2021 Intel Corporation
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
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/* This file generated from vk_entrypoints_gen.py, don't edit directly. */

#include "wsi_common_entrypoints.h"

/* Weak aliases for all potential implementations. These will resolve to
 * NULL if they're not defined, which lets the resolve_entrypoint() function
 * either pick the correct entry point.
 *
 * MSVC uses different decorated names for 32-bit versus 64-bit. Declare
 * all argument sizes for 32-bit because computing the actual size would be
 * difficult.
 */




#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateInstance@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateInstance=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyInstance@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyInstance=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDevices@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumeratePhysicalDevices=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetInstanceProcAddr@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetInstanceProcAddr=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL wsi_GetInstanceProcAddr(VkInstance instance, const char* pName) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceVersion@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumerateInstanceVersion=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumerateInstanceVersion(uint32_t* pApiVersion) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceLayerProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumerateInstanceLayerProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateInstanceExtensionProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumerateInstanceExtensionProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAndroidSurfaceKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateAndroidSurfaceKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateAndroidSurfaceKHR(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayPlaneSurfaceKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDisplayPlaneSurfaceKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySurfaceKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroySurfaceKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_VI_NN
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateViSurfaceNN@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateViSurfaceNN=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateViSurfaceNN(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_VI_NN
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWaylandSurfaceKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateWaylandSurfaceKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateWin32SurfaceKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateWin32SurfaceKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXlibSurfaceKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateXlibSurfaceKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateXcbSurfaceKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateXcbSurfaceKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDirectFBSurfaceEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDirectFBSurfaceEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDirectFBSurfaceEXT(VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImagePipeSurfaceFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateImagePipeSurfaceFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateImagePipeSurfaceFUCHSIA(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_GGP
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateStreamDescriptorSurfaceGGP@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateStreamDescriptorSurfaceGGP=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateStreamDescriptorSurfaceGGP(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_GGP
#ifdef VK_USE_PLATFORM_SCREEN_QNX
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateScreenSurfaceQNX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateScreenSurfaceQNX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateScreenSurfaceQNX(VkInstance instance, const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_SCREEN_QNX
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugReportCallbackEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDebugReportCallbackEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugReportCallbackEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyDebugReportCallbackEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugReportMessageEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DebugReportMessageEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroups@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumeratePhysicalDeviceGroups=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceGroupsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumeratePhysicalDeviceGroupsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumeratePhysicalDeviceGroupsKHR(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_IOS_MVK
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIOSSurfaceMVK@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateIOSSurfaceMVK=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateIOSSurfaceMVK(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMacOSSurfaceMVK@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateMacOSSurfaceMVK=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateMacOSSurfaceMVK(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_MACOS_MVK
#ifdef VK_USE_PLATFORM_METAL_EXT
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateMetalSurfaceEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateMetalSurfaceEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateMetalSurfaceEXT(VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_METAL_EXT
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDebugUtilsMessengerEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDebugUtilsMessengerEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDebugUtilsMessengerEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyDebugUtilsMessengerEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SubmitDebugUtilsMessageEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SubmitDebugUtilsMessageEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_SubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateHeadlessSurfaceEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateHeadlessSurfaceEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) __attribute__ ((weak));
#endif

const struct vk_instance_entrypoint_table wsi_instance_entrypoints = {
    .CreateInstance = wsi_CreateInstance,
    .DestroyInstance = wsi_DestroyInstance,
    .EnumeratePhysicalDevices = wsi_EnumeratePhysicalDevices,
    .GetInstanceProcAddr = wsi_GetInstanceProcAddr,
    .EnumerateInstanceVersion = wsi_EnumerateInstanceVersion,
    .EnumerateInstanceLayerProperties = wsi_EnumerateInstanceLayerProperties,
    .EnumerateInstanceExtensionProperties = wsi_EnumerateInstanceExtensionProperties,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .CreateAndroidSurfaceKHR = wsi_CreateAndroidSurfaceKHR,
#elif defined(_MSC_VER)
    .CreateAndroidSurfaceKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_ANDROID_KHR
    .CreateDisplayPlaneSurfaceKHR = wsi_CreateDisplayPlaneSurfaceKHR,
    .DestroySurfaceKHR = wsi_DestroySurfaceKHR,
#ifdef VK_USE_PLATFORM_VI_NN
    .CreateViSurfaceNN = wsi_CreateViSurfaceNN,
#elif defined(_MSC_VER)
    .CreateViSurfaceNN = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_VI_NN
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    .CreateWaylandSurfaceKHR = wsi_CreateWaylandSurfaceKHR,
#elif defined(_MSC_VER)
    .CreateWaylandSurfaceKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .CreateWin32SurfaceKHR = wsi_CreateWin32SurfaceKHR,
#elif defined(_MSC_VER)
    .CreateWin32SurfaceKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
    .CreateXlibSurfaceKHR = wsi_CreateXlibSurfaceKHR,
#elif defined(_MSC_VER)
    .CreateXlibSurfaceKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    .CreateXcbSurfaceKHR = wsi_CreateXcbSurfaceKHR,
#elif defined(_MSC_VER)
    .CreateXcbSurfaceKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    .CreateDirectFBSurfaceEXT = wsi_CreateDirectFBSurfaceEXT,
#elif defined(_MSC_VER)
    .CreateDirectFBSurfaceEXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_FUCHSIA
    .CreateImagePipeSurfaceFUCHSIA = wsi_CreateImagePipeSurfaceFUCHSIA,
#elif defined(_MSC_VER)
    .CreateImagePipeSurfaceFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_GGP
    .CreateStreamDescriptorSurfaceGGP = wsi_CreateStreamDescriptorSurfaceGGP,
#elif defined(_MSC_VER)
    .CreateStreamDescriptorSurfaceGGP = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_GGP
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    .CreateScreenSurfaceQNX = wsi_CreateScreenSurfaceQNX,
#elif defined(_MSC_VER)
    .CreateScreenSurfaceQNX = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_SCREEN_QNX
    .CreateDebugReportCallbackEXT = wsi_CreateDebugReportCallbackEXT,
    .DestroyDebugReportCallbackEXT = wsi_DestroyDebugReportCallbackEXT,
    .DebugReportMessageEXT = wsi_DebugReportMessageEXT,
    .EnumeratePhysicalDeviceGroups = wsi_EnumeratePhysicalDeviceGroups,
    .EnumeratePhysicalDeviceGroupsKHR = wsi_EnumeratePhysicalDeviceGroupsKHR,
#ifdef VK_USE_PLATFORM_IOS_MVK
    .CreateIOSSurfaceMVK = wsi_CreateIOSSurfaceMVK,
#elif defined(_MSC_VER)
    .CreateIOSSurfaceMVK = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_IOS_MVK
#ifdef VK_USE_PLATFORM_MACOS_MVK
    .CreateMacOSSurfaceMVK = wsi_CreateMacOSSurfaceMVK,
#elif defined(_MSC_VER)
    .CreateMacOSSurfaceMVK = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_MACOS_MVK
#ifdef VK_USE_PLATFORM_METAL_EXT
    .CreateMetalSurfaceEXT = wsi_CreateMetalSurfaceEXT,
#elif defined(_MSC_VER)
    .CreateMetalSurfaceEXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_METAL_EXT
    .CreateDebugUtilsMessengerEXT = wsi_CreateDebugUtilsMessengerEXT,
    .DestroyDebugUtilsMessengerEXT = wsi_DestroyDebugUtilsMessengerEXT,
    .SubmitDebugUtilsMessageEXT = wsi_SubmitDebugUtilsMessageEXT,
    .CreateHeadlessSurfaceEXT = wsi_CreateHeadlessSurfaceEXT,
};


#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceQueueFamilyProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceMemoryProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceFeatures=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceFormatProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceImageFormatProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDevice@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDevice=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceLayerProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumerateDeviceLayerProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumerateDeviceExtensionProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumerateDeviceExtensionProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSparseImageFormatProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceDisplayPropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneSupportedDisplaysKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDisplayPlaneSupportedDisplaysKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModePropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDisplayModePropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDisplayModeKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDisplayModeKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilitiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDisplayPlaneCapabilitiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceSupportKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSurfaceSupportKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormatsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSurfaceFormatsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSurfacePresentModesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWaylandPresentationSupportKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceWaylandPresentationSupportKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL wsi_GetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceWin32PresentationSupportKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceWin32PresentationSupportKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL wsi_GetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXlibPresentationSupportKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceXlibPresentationSupportKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL wsi_GetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceXcbPresentationSupportKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceXcbPresentationSupportKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL wsi_GetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceScreenPresentationSupportQNX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceScreenPresentationSupportQNX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkBool32 VKAPI_CALL wsi_GetPhysicalDeviceScreenPresentationSupportQNX(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window* window) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_SCREEN_QNX
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceFeatures2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFeatures2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceFeatures2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceProperties2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceFormatProperties2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFormatProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceFormatProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceImageFormatProperties2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceImageFormatProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceImageFormatProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceQueueFamilyProperties2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceQueueFamilyProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceMemoryProperties2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMemoryProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceMemoryProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSparseImageFormatProperties2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceExternalBufferProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalBufferPropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceExternalBufferPropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceExternalBufferPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphoreProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceExternalSemaphoreProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFenceProperties@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceExternalFenceProperties=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceExternalFencePropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceExternalFencePropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceExternalFencePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseDisplayEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ReleaseDisplayEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireXlibDisplayEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquireXlibDisplayEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRandROutputDisplayEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetRandROutputDisplayEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireWinrtDisplayNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquireWinrtDisplayNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetWinrtDisplayNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetWinrtDisplayNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2EXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSurfaceCapabilities2EXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDevicePresentRectanglesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDevicePresentRectanglesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceMultisamplePropertiesEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceMultisamplePropertiesEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceCapabilities2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSurfaceCapabilities2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfaceFormats2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSurfaceFormats2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceDisplayProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayModeProperties2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDisplayModeProperties2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDisplayPlaneCapabilities2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDisplayPlaneCapabilities2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSurfacePresentModes2EXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSurfacePresentModes2EXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceToolPropertiesEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceToolPropertiesEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceToolPropertiesEXT(VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolPropertiesEXT* pToolProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceFragmentShadingRatesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceFragmentShadingRatesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) __attribute__ ((weak));
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoCapabilitiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceVideoCapabilitiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceVideoCapabilitiesKHR(VkPhysicalDevice physicalDevice, const VkVideoProfileKHR* pVideoProfile, VkVideoCapabilitiesKHR* pCapabilities) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPhysicalDeviceVideoFormatPropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPhysicalDeviceVideoFormatPropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPhysicalDeviceVideoFormatPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo, uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireDrmDisplayEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquireDrmDisplayEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquireDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, VkDisplayKHR display) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDrmDisplayEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDrmDisplayEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, uint32_t connectorId, VkDisplayKHR* display) __attribute__ ((weak));
#endif

const struct vk_physical_device_entrypoint_table wsi_physical_device_entrypoints = {
    .GetPhysicalDeviceProperties = wsi_GetPhysicalDeviceProperties,
    .GetPhysicalDeviceQueueFamilyProperties = wsi_GetPhysicalDeviceQueueFamilyProperties,
    .GetPhysicalDeviceMemoryProperties = wsi_GetPhysicalDeviceMemoryProperties,
    .GetPhysicalDeviceFeatures = wsi_GetPhysicalDeviceFeatures,
    .GetPhysicalDeviceFormatProperties = wsi_GetPhysicalDeviceFormatProperties,
    .GetPhysicalDeviceImageFormatProperties = wsi_GetPhysicalDeviceImageFormatProperties,
    .CreateDevice = wsi_CreateDevice,
    .EnumerateDeviceLayerProperties = wsi_EnumerateDeviceLayerProperties,
    .EnumerateDeviceExtensionProperties = wsi_EnumerateDeviceExtensionProperties,
    .GetPhysicalDeviceSparseImageFormatProperties = wsi_GetPhysicalDeviceSparseImageFormatProperties,
    .GetPhysicalDeviceDisplayPropertiesKHR = wsi_GetPhysicalDeviceDisplayPropertiesKHR,
    .GetPhysicalDeviceDisplayPlanePropertiesKHR = wsi_GetPhysicalDeviceDisplayPlanePropertiesKHR,
    .GetDisplayPlaneSupportedDisplaysKHR = wsi_GetDisplayPlaneSupportedDisplaysKHR,
    .GetDisplayModePropertiesKHR = wsi_GetDisplayModePropertiesKHR,
    .CreateDisplayModeKHR = wsi_CreateDisplayModeKHR,
    .GetDisplayPlaneCapabilitiesKHR = wsi_GetDisplayPlaneCapabilitiesKHR,
    .GetPhysicalDeviceSurfaceSupportKHR = wsi_GetPhysicalDeviceSurfaceSupportKHR,
    .GetPhysicalDeviceSurfaceCapabilitiesKHR = wsi_GetPhysicalDeviceSurfaceCapabilitiesKHR,
    .GetPhysicalDeviceSurfaceFormatsKHR = wsi_GetPhysicalDeviceSurfaceFormatsKHR,
    .GetPhysicalDeviceSurfacePresentModesKHR = wsi_GetPhysicalDeviceSurfacePresentModesKHR,
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    .GetPhysicalDeviceWaylandPresentationSupportKHR = wsi_GetPhysicalDeviceWaylandPresentationSupportKHR,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetPhysicalDeviceWin32PresentationSupportKHR = wsi_GetPhysicalDeviceWin32PresentationSupportKHR,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
    .GetPhysicalDeviceXlibPresentationSupportKHR = wsi_GetPhysicalDeviceXlibPresentationSupportKHR,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_XLIB_KHR
#ifdef VK_USE_PLATFORM_XCB_KHR
    .GetPhysicalDeviceXcbPresentationSupportKHR = wsi_GetPhysicalDeviceXcbPresentationSupportKHR,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    .GetPhysicalDeviceDirectFBPresentationSupportEXT = wsi_GetPhysicalDeviceDirectFBPresentationSupportEXT,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    .GetPhysicalDeviceScreenPresentationSupportQNX = wsi_GetPhysicalDeviceScreenPresentationSupportQNX,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_SCREEN_QNX
    .GetPhysicalDeviceExternalImageFormatPropertiesNV = wsi_GetPhysicalDeviceExternalImageFormatPropertiesNV,
    .GetPhysicalDeviceFeatures2 = wsi_GetPhysicalDeviceFeatures2,
    .GetPhysicalDeviceFeatures2KHR = wsi_GetPhysicalDeviceFeatures2KHR,
    .GetPhysicalDeviceProperties2 = wsi_GetPhysicalDeviceProperties2,
    .GetPhysicalDeviceProperties2KHR = wsi_GetPhysicalDeviceProperties2KHR,
    .GetPhysicalDeviceFormatProperties2 = wsi_GetPhysicalDeviceFormatProperties2,
    .GetPhysicalDeviceFormatProperties2KHR = wsi_GetPhysicalDeviceFormatProperties2KHR,
    .GetPhysicalDeviceImageFormatProperties2 = wsi_GetPhysicalDeviceImageFormatProperties2,
    .GetPhysicalDeviceImageFormatProperties2KHR = wsi_GetPhysicalDeviceImageFormatProperties2KHR,
    .GetPhysicalDeviceQueueFamilyProperties2 = wsi_GetPhysicalDeviceQueueFamilyProperties2,
    .GetPhysicalDeviceQueueFamilyProperties2KHR = wsi_GetPhysicalDeviceQueueFamilyProperties2KHR,
    .GetPhysicalDeviceMemoryProperties2 = wsi_GetPhysicalDeviceMemoryProperties2,
    .GetPhysicalDeviceMemoryProperties2KHR = wsi_GetPhysicalDeviceMemoryProperties2KHR,
    .GetPhysicalDeviceSparseImageFormatProperties2 = wsi_GetPhysicalDeviceSparseImageFormatProperties2,
    .GetPhysicalDeviceSparseImageFormatProperties2KHR = wsi_GetPhysicalDeviceSparseImageFormatProperties2KHR,
    .GetPhysicalDeviceExternalBufferProperties = wsi_GetPhysicalDeviceExternalBufferProperties,
    .GetPhysicalDeviceExternalBufferPropertiesKHR = wsi_GetPhysicalDeviceExternalBufferPropertiesKHR,
    .GetPhysicalDeviceExternalSemaphoreProperties = wsi_GetPhysicalDeviceExternalSemaphoreProperties,
    .GetPhysicalDeviceExternalSemaphorePropertiesKHR = wsi_GetPhysicalDeviceExternalSemaphorePropertiesKHR,
    .GetPhysicalDeviceExternalFenceProperties = wsi_GetPhysicalDeviceExternalFenceProperties,
    .GetPhysicalDeviceExternalFencePropertiesKHR = wsi_GetPhysicalDeviceExternalFencePropertiesKHR,
    .ReleaseDisplayEXT = wsi_ReleaseDisplayEXT,
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    .AcquireXlibDisplayEXT = wsi_AcquireXlibDisplayEXT,
#elif defined(_MSC_VER)
    .AcquireXlibDisplayEXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    .GetRandROutputDisplayEXT = wsi_GetRandROutputDisplayEXT,
#elif defined(_MSC_VER)
    .GetRandROutputDisplayEXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_XLIB_XRANDR_EXT
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .AcquireWinrtDisplayNV = wsi_AcquireWinrtDisplayNV,
#elif defined(_MSC_VER)
    .AcquireWinrtDisplayNV = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetWinrtDisplayNV = wsi_GetWinrtDisplayNV,
#elif defined(_MSC_VER)
    .GetWinrtDisplayNV = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .GetPhysicalDeviceSurfaceCapabilities2EXT = wsi_GetPhysicalDeviceSurfaceCapabilities2EXT,
    .GetPhysicalDevicePresentRectanglesKHR = wsi_GetPhysicalDevicePresentRectanglesKHR,
    .GetPhysicalDeviceMultisamplePropertiesEXT = wsi_GetPhysicalDeviceMultisamplePropertiesEXT,
    .GetPhysicalDeviceSurfaceCapabilities2KHR = wsi_GetPhysicalDeviceSurfaceCapabilities2KHR,
    .GetPhysicalDeviceSurfaceFormats2KHR = wsi_GetPhysicalDeviceSurfaceFormats2KHR,
    .GetPhysicalDeviceDisplayProperties2KHR = wsi_GetPhysicalDeviceDisplayProperties2KHR,
    .GetPhysicalDeviceDisplayPlaneProperties2KHR = wsi_GetPhysicalDeviceDisplayPlaneProperties2KHR,
    .GetDisplayModeProperties2KHR = wsi_GetDisplayModeProperties2KHR,
    .GetDisplayPlaneCapabilities2KHR = wsi_GetDisplayPlaneCapabilities2KHR,
    .GetPhysicalDeviceCalibrateableTimeDomainsEXT = wsi_GetPhysicalDeviceCalibrateableTimeDomainsEXT,
    .GetPhysicalDeviceCooperativeMatrixPropertiesNV = wsi_GetPhysicalDeviceCooperativeMatrixPropertiesNV,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetPhysicalDeviceSurfacePresentModes2EXT = wsi_GetPhysicalDeviceSurfacePresentModes2EXT,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = wsi_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR,
    .GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = wsi_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR,
    .GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = wsi_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV,
    .GetPhysicalDeviceToolPropertiesEXT = wsi_GetPhysicalDeviceToolPropertiesEXT,
    .GetPhysicalDeviceFragmentShadingRatesKHR = wsi_GetPhysicalDeviceFragmentShadingRatesKHR,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .GetPhysicalDeviceVideoCapabilitiesKHR = wsi_GetPhysicalDeviceVideoCapabilitiesKHR,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .GetPhysicalDeviceVideoFormatPropertiesKHR = wsi_GetPhysicalDeviceVideoFormatPropertiesKHR,
#elif defined(_MSC_VER)
    .GetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
    .AcquireDrmDisplayEXT = wsi_AcquireDrmDisplayEXT,
    .GetDrmDisplayEXT = wsi_GetDrmDisplayEXT,
};


#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceProcAddr@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceProcAddr=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL wsi_GetDeviceProcAddr(VkDevice device, const char* pName) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDevice@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyDevice=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceQueue=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueSubmit=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_QueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueWaitIdle@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueWaitIdle=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_QueueWaitIdle(VkQueue queue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeviceWaitIdle@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DeviceWaitIdle=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_DeviceWaitIdle(VkDevice device) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateMemory@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AllocateMemory=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeMemory@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_FreeMemory=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_FreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MapMemory@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_MapMemory=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_MapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UnmapMemory@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_UnmapMemory=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_UnmapMemory(VkDevice device, VkDeviceMemory memory) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FlushMappedMemoryRanges@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_FlushMappedMemoryRanges=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_FlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InvalidateMappedMemoryRanges@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_InvalidateMappedMemoryRanges=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_InvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryCommitment@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceMemoryCommitment=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferMemoryRequirements=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BindBufferMemory=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageMemoryRequirements=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BindImageMemory=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageSparseMemoryRequirements=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBindSparse@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueBindSparse=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_QueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFence@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateFence=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFence@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyFence=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetFences@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ResetFences=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceStatus@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetFenceStatus=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetFenceStatus(VkDevice device, VkFence fence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForFences@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_WaitForFences=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_WaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSemaphore@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateSemaphore=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySemaphore@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroySemaphore=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateEvent@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateEvent=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyEvent@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyEvent=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetEventStatus@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetEventStatus=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetEventStatus(VkDevice device, VkEvent event) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetEvent@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetEvent=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_SetEvent(VkDevice device, VkEvent event) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetEvent@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ResetEvent=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ResetEvent(VkDevice device, VkEvent event) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateQueryPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateQueryPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyQueryPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyQueryPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueryPoolResults@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetQueryPoolResults=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ResetQueryPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_ResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetQueryPoolEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ResetQueryPoolEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_ResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferView@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateBufferView=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateBufferView(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferView@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyBufferView=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImage@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateImage=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImage@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyImage=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSubresourceLayout@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageSubresourceLayout=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateImageView@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateImageView=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyImageView@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyImageView=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateShaderModule@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateShaderModule=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyShaderModule@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyShaderModule=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineCache@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreatePipelineCache=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineCache@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyPipelineCache=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineCacheData@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPipelineCacheData=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergePipelineCaches@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_MergePipelineCaches=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_MergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateGraphicsPipelines@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateGraphicsPipelines=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateComputePipelines@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateComputePipelines=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkDevice device, VkRenderPass renderpass, VkExtent2D* pMaxWorkgroupSize) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipeline@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyPipeline=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePipelineLayout@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreatePipelineLayout=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPipelineLayout@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyPipelineLayout=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSampler@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateSampler=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySampler@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroySampler=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorSetLayout@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDescriptorSetLayout=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorSetLayout@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyDescriptorSetLayout=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDescriptorPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyDescriptorPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetDescriptorPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ResetDescriptorPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateDescriptorSets@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AllocateDescriptorSets=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeDescriptorSets@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_FreeDescriptorSets=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_FreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSets@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_UpdateDescriptorSets=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_UpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateFramebuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateFramebuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyFramebuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyFramebuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateRenderPass=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateRenderPass(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyRenderPass@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyRenderPass=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRenderAreaGranularity@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetRenderAreaGranularity=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCommandPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateCommandPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCommandPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyCommandPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ResetCommandPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AllocateCommandBuffers@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AllocateCommandBuffers=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_FreeCommandBuffers@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_FreeCommandBuffers=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_FreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BeginCommandBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BeginCommandBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_EndCommandBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_EndCommandBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_EndCommandBuffer(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ResetCommandBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ResetCommandBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipeline@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindPipeline=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewport@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetViewport=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissor@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetScissor=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineWidth@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetLineWidth=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBias@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDepthBias=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetBlendConstants@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetBlendConstants=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4]) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBounds@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDepthBounds=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilCompareMask@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetStencilCompareMask=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilWriteMask@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetStencilWriteMask=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilReference@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetStencilReference=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindDescriptorSets@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindDescriptorSets=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindIndexBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindIndexBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindVertexBuffers=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDraw@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDraw=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexed@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndexed=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawMultiEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawMultiEXT(VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawInfoEXT* pVertexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMultiIndexedEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawMultiIndexedEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawMultiIndexedEXT(VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawIndexedInfoEXT* pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride, const int32_t* pVertexOffset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirect@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndirect=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirect@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndexedIndirect=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatch@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDispatch=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchIndirect@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDispatchIndirect=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSubpassShadingHUAWEI@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSubpassShadingHUAWEI=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSubpassShadingHUAWEI(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyImage=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBlitImage=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyBufferToImage=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyImageToBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdUpdateBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdUpdateBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdFillBuffer@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdFillBuffer=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearColorImage@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdClearColorImage=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearDepthStencilImage@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdClearDepthStencilImage=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdClearAttachments@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdClearAttachments=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdResolveImage=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetEvent=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdResetEvent=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdWaitEvents=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdPipelineBarrier=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQuery@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginQuery=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQuery@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndQuery=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginConditionalRenderingEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginConditionalRenderingEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndConditionalRenderingEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndConditionalRenderingEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetQueryPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdResetQueryPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdWriteTimestamp=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyQueryPoolResults@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyQueryPoolResults=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushConstants@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdPushConstants=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginRenderPass=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdNextSubpass=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndRenderPass=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndRenderPass(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteCommands@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdExecuteCommands=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSharedSwapchainsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateSharedSwapchainsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSwapchainKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateSwapchainKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySwapchainKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroySwapchainKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainImagesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSwapchainImagesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImageKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquireNextImageKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueuePresentKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueuePresentKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_QueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectNameEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DebugMarkerSetObjectNameEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_DebugMarkerSetObjectNameEXT(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DebugMarkerSetObjectTagEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DebugMarkerSetObjectTagEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_DebugMarkerSetObjectTagEXT(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerBeginEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDebugMarkerBeginEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerEndEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDebugMarkerEndEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDebugMarkerInsertEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDebugMarkerInsertEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryWin32HandleNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdExecuteGeneratedCommandsNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdExecuteGeneratedCommandsNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPreprocessGeneratedCommandsNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdPreprocessGeneratedCommandsNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindPipelineShaderGroupNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindPipelineShaderGroupNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetGeneratedCommandsMemoryRequirementsNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetGeneratedCommandsMemoryRequirementsNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetGeneratedCommandsMemoryRequirementsNV(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateIndirectCommandsLayoutNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateIndirectCommandsLayoutNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateIndirectCommandsLayoutNV(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyIndirectCommandsLayoutNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyIndirectCommandsLayoutNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyIndirectCommandsLayoutNV(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdPushDescriptorSetKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPool@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_TrimCommandPool=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_TrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_TrimCommandPoolKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_TrimCommandPoolKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_TrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandleKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryWin32HandleKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryWin32HandleKHR(VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryWin32HandlePropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryWin32HandlePropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryFdKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryFdPropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryFdPropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandleFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryZirconHandleFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryZirconHandleFUCHSIA(VkDevice device, const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryZirconHandlePropertiesFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryZirconHandlePropertiesFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryZirconHandlePropertiesFUCHSIA(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryRemoteAddressNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryRemoteAddressNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryRemoteAddressNV(VkDevice device, const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo, VkRemoteAddressNV* pAddress) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreWin32HandleKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSemaphoreWin32HandleKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSemaphoreWin32HandleKHR(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreWin32HandleKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ImportSemaphoreWin32HandleKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreFdKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSemaphoreFdKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreFdKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ImportSemaphoreFdKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreZirconHandleFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSemaphoreZirconHandleFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSemaphoreZirconHandleFUCHSIA(VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportSemaphoreZirconHandleFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ImportSemaphoreZirconHandleFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ImportSemaphoreZirconHandleFUCHSIA(VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceWin32HandleKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetFenceWin32HandleKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetFenceWin32HandleKHR(VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceWin32HandleKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ImportFenceWin32HandleKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetFenceFdKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetFenceFdKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ImportFenceFdKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ImportFenceFdKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DisplayPowerControlEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DisplayPowerControlEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_DisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDeviceEventEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_RegisterDeviceEventEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_RegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_RegisterDisplayEventEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_RegisterDisplayEventEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_RegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainCounterEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSwapchainCounterEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeatures@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceGroupPeerMemoryFeatures=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPeerMemoryFeaturesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceGroupPeerMemoryFeaturesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceGroupPeerMemoryFeaturesKHR(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BindBufferMemory2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindBufferMemory2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BindBufferMemory2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BindImageMemory2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindImageMemory2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BindImageMemory2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMask@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDeviceMask=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDeviceMaskKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDeviceMaskKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupPresentCapabilitiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceGroupPresentCapabilitiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceGroupSurfacePresentModesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireNextImage2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquireNextImage2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBase@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDispatchBase=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDispatchBaseKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDispatchBaseKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplate@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDescriptorUpdateTemplate=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDescriptorUpdateTemplateKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDescriptorUpdateTemplateKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDescriptorUpdateTemplateKHR(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplate@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyDescriptorUpdateTemplate=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDescriptorUpdateTemplateKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyDescriptorUpdateTemplateKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyDescriptorUpdateTemplateKHR(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplate@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_UpdateDescriptorSetWithTemplate=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_UpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateDescriptorSetWithTemplateKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_UpdateDescriptorSetWithTemplateKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_UpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPushDescriptorSetWithTemplateKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdPushDescriptorSetWithTemplateKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetHdrMetadataEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetHdrMetadataEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_SetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainStatusKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSwapchainStatusKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRefreshCycleDurationGOOGLE@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetRefreshCycleDurationGOOGLE=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPastPresentationTimingGOOGLE@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPastPresentationTimingGOOGLE=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWScalingNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetViewportWScalingNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDiscardRectangleEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDiscardRectangleEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetSampleLocationsEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetSampleLocationsEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferMemoryRequirements2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferMemoryRequirements2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferMemoryRequirements2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetBufferMemoryRequirements2KHR(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageMemoryRequirements2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageMemoryRequirements2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageMemoryRequirements2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetImageMemoryRequirements2KHR(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageSparseMemoryRequirements2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceBufferMemoryRequirementsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceBufferMemoryRequirementsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceBufferMemoryRequirementsKHR(VkDevice device, const VkDeviceBufferMemoryRequirementsKHR* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageMemoryRequirementsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceImageMemoryRequirementsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceImageMemoryRequirementsKHR(VkDevice device, const VkDeviceImageMemoryRequirementsKHR* pInfo, VkMemoryRequirements2* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceImageSparseMemoryRequirementsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceImageSparseMemoryRequirementsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceImageSparseMemoryRequirementsKHR(VkDevice device, const VkDeviceImageMemoryRequirementsKHR* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageSparseMemoryRequirements2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageSparseMemoryRequirements2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetImageSparseMemoryRequirements2KHR(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversion@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateSamplerYcbcrConversion=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateSamplerYcbcrConversionKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateSamplerYcbcrConversionKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateSamplerYcbcrConversionKHR(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversion@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroySamplerYcbcrConversion=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroySamplerYcbcrConversionKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroySamplerYcbcrConversionKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceQueue2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceQueue2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateValidationCacheEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateValidationCacheEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateValidationCacheEXT(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyValidationCacheEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyValidationCacheEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetValidationCacheDataEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetValidationCacheDataEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_MergeValidationCachesEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_MergeValidationCachesEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_MergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupport@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDescriptorSetLayoutSupport=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDescriptorSetLayoutSupportKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDescriptorSetLayoutSupportKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDescriptorSetLayoutSupportKHR(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsageANDROID@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSwapchainGrallocUsageANDROID=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSwapchainGrallocUsageANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, int* grallocUsage) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSwapchainGrallocUsage2ANDROID@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSwapchainGrallocUsage2ANDROID=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSwapchainGrallocUsage2ANDROID(VkDevice device, VkFormat format, VkImageUsageFlags imageUsage, VkSwapchainImageUsageFlagsANDROID swapchainImageUsage, uint64_t* grallocConsumerUsage, uint64_t* grallocProducerUsage) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireImageANDROID@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquireImageANDROID=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquireImageANDROID(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSignalReleaseImageANDROID@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueSignalReleaseImageANDROID=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_QueueSignalReleaseImageANDROID(VkQueue queue, uint32_t waitSemaphoreCount, const VkSemaphore* pWaitSemaphores, VkImage image, int* pNativeFenceFd) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetShaderInfoAMD@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetShaderInfoAMD=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetShaderInfoAMD(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetLocalDimmingAMD@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetLocalDimmingAMD=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_SetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetCalibratedTimestampsEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetCalibratedTimestampsEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectNameEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetDebugUtilsObjectNameEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_SetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDebugUtilsObjectTagEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetDebugUtilsObjectTagEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_SetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueBeginDebugUtilsLabelEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueBeginDebugUtilsLabelEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_QueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueEndDebugUtilsLabelEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueEndDebugUtilsLabelEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_QueueEndDebugUtilsLabelEXT(VkQueue queue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueInsertDebugUtilsLabelEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueInsertDebugUtilsLabelEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_QueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginDebugUtilsLabelEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginDebugUtilsLabelEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndDebugUtilsLabelEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndDebugUtilsLabelEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdInsertDebugUtilsLabelEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdInsertDebugUtilsLabelEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryHostPointerPropertiesEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryHostPointerPropertiesEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarkerAMD@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdWriteBufferMarkerAMD=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateRenderPass2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRenderPass2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateRenderPass2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginRenderPass2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginRenderPass2(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginRenderPass2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginRenderPass2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo*      pRenderPassBegin, const VkSubpassBeginInfo*      pSubpassBeginInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdNextSubpass2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdNextSubpass2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdNextSubpass2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdNextSubpass2KHR(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo*      pSubpassBeginInfo, const VkSubpassEndInfo*        pSubpassEndInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndRenderPass2=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndRenderPass2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndRenderPass2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfo*        pSubpassEndInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValue@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSemaphoreCounterValue=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetSemaphoreCounterValueKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetSemaphoreCounterValueKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetSemaphoreCounterValueKHR(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphores@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_WaitSemaphores=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_WaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitSemaphoresKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_WaitSemaphoresKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_WaitSemaphoresKHR(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphore@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SignalSemaphore=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_SignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SignalSemaphoreKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SignalSemaphoreKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_SignalSemaphoreKHR(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAndroidHardwareBufferPropertiesANDROID@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetAndroidHardwareBufferPropertiesANDROID=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetAndroidHardwareBufferPropertiesANDROID(VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetMemoryAndroidHardwareBufferANDROID@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetMemoryAndroidHardwareBufferANDROID=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetMemoryAndroidHardwareBufferANDROID(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCount@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndirectCount=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndirectCountKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectCountAMD@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndirectCountAMD=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCount@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndexedIndirectCount=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndexedIndirectCountKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndexedIndirectCountAMD@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndexedIndirectCountAMD=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCheckpointNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetCheckpointNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void* pCheckpointMarker) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointDataNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetQueueCheckpointDataNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetQueueCheckpointDataNV(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindTransformFeedbackBuffersEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindTransformFeedbackBuffersEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginTransformFeedbackEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginTransformFeedbackEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndTransformFeedbackEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndTransformFeedbackEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginQueryIndexedEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginQueryIndexedEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndQueryIndexedEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndQueryIndexedEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawIndirectByteCountEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawIndirectByteCountEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetExclusiveScissorNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetExclusiveScissorNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindShadingRateImageNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindShadingRateImageNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportShadingRatePaletteNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetViewportShadingRatePaletteNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCoarseSampleOrderNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetCoarseSampleOrderNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawMeshTasksNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawMeshTasksIndirectNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDrawMeshTasksIndirectCountNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDrawMeshTasksIndirectCountNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CompileDeferredNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CompileDeferredNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateAccelerationStructureNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindInvocationMaskHUAWEI@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindInvocationMaskHUAWEI=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindInvocationMaskHUAWEI(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyAccelerationStructureKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyAccelerationStructureKHR(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyAccelerationStructureNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyAccelerationStructureNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureMemoryRequirementsNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetAccelerationStructureMemoryRequirementsNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetAccelerationStructureMemoryRequirementsNV(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindAccelerationStructureMemoryNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BindAccelerationStructureMemoryNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyAccelerationStructureNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyAccelerationStructureKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CopyAccelerationStructureKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CopyAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyAccelerationStructureToMemoryKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyAccelerationStructureToMemoryKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyAccelerationStructureToMemoryKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyAccelerationStructureToMemoryKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CopyAccelerationStructureToMemoryKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CopyAccelerationStructureToMemoryKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyMemoryToAccelerationStructureKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyMemoryToAccelerationStructureKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyMemoryToAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CopyMemoryToAccelerationStructureKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CopyMemoryToAccelerationStructureKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CopyMemoryToAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdWriteAccelerationStructuresPropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdWriteAccelerationStructuresPropertiesKHR(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteAccelerationStructuresPropertiesNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdWriteAccelerationStructuresPropertiesNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructureNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBuildAccelerationStructureNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WriteAccelerationStructuresPropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_WriteAccelerationStructuresPropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_WriteAccelerationStructuresPropertiesKHR(VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType  queryType, size_t       dataSize, void* pData, size_t stride) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdTraceRaysKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdTraceRaysKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdTraceRaysNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetRayTracingShaderGroupHandlesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupHandlesNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetRayTracingShaderGroupHandlesNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetRayTracingShaderGroupHandlesNV(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureHandleNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetAccelerationStructureHandleNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetAccelerationStructureHandleNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateRayTracingPipelinesNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateRayTracingPipelinesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateRayTracingPipelinesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateRayTracingPipelinesKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdTraceRaysIndirectKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdTraceRaysIndirectKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceAccelerationStructureCompatibilityKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceAccelerationStructureCompatibilityKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetDeviceAccelerationStructureCompatibilityKHR(VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetRayTracingShaderGroupStackSizeKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetRayTracingShaderGroupStackSizeKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkDeviceSize VKAPI_CALL wsi_GetRayTracingShaderGroupStackSizeKHR(VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRayTracingPipelineStackSizeKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetRayTracingPipelineStackSizeKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewHandleNVX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageViewHandleNVX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR uint32_t VKAPI_CALL wsi_GetImageViewHandleNVX(VkDevice device, const VkImageViewHandleInfoNVX* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageViewAddressNVX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageViewAddressNVX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetImageViewAddressNVX(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceGroupSurfacePresentModes2EXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceGroupSurfacePresentModes2EXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireFullScreenExclusiveModeEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquireFullScreenExclusiveModeEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseFullScreenExclusiveModeEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ReleaseFullScreenExclusiveModeEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquireProfilingLockKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquireProfilingLockKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleaseProfilingLockKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ReleaseProfilingLockKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_ReleaseProfilingLockKHR(VkDevice device) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetImageDrmFormatModifierPropertiesEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetImageDrmFormatModifierPropertiesEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddress@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferOpaqueCaptureAddress=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR uint64_t VKAPI_CALL wsi_GetBufferOpaqueCaptureAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferOpaqueCaptureAddressKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferOpaqueCaptureAddressKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR uint64_t VKAPI_CALL wsi_GetBufferOpaqueCaptureAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddress@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferDeviceAddress=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkDeviceAddress VKAPI_CALL wsi_GetBufferDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferDeviceAddressKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkDeviceAddress VKAPI_CALL wsi_GetBufferDeviceAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferDeviceAddressEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferDeviceAddressEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkDeviceAddress VKAPI_CALL wsi_GetBufferDeviceAddressEXT(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_InitializePerformanceApiINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_InitializePerformanceApiINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_InitializePerformanceApiINTEL(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UninitializePerformanceApiINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_UninitializePerformanceApiINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_UninitializePerformanceApiINTEL(VkDevice device) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceMarkerINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetPerformanceMarkerINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceStreamMarkerINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetPerformanceStreamMarkerINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPerformanceOverrideINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetPerformanceOverrideINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_AcquirePerformanceConfigurationINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_AcquirePerformanceConfigurationINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_AcquirePerformanceConfigurationINTEL(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_ReleasePerformanceConfigurationINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_ReleasePerformanceConfigurationINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_ReleasePerformanceConfigurationINTEL(VkDevice device, VkPerformanceConfigurationINTEL configuration) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSetPerformanceConfigurationINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueSetPerformanceConfigurationINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_QueueSetPerformanceConfigurationINTEL(VkQueue queue, VkPerformanceConfigurationINTEL configuration) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPerformanceParameterINTEL@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPerformanceParameterINTEL=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPerformanceParameterINTEL(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddress@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceMemoryOpaqueCaptureAddress=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR uint64_t VKAPI_CALL wsi_GetDeviceMemoryOpaqueCaptureAddress(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeviceMemoryOpaqueCaptureAddressKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeviceMemoryOpaqueCaptureAddressKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR uint64_t VKAPI_CALL wsi_GetDeviceMemoryOpaqueCaptureAddressKHR(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutablePropertiesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPipelineExecutablePropertiesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPipelineExecutablePropertiesKHR(VkDevice                        device, const VkPipelineInfoKHR*        pPipelineInfo, uint32_t* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableStatisticsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPipelineExecutableStatisticsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPipelineExecutableStatisticsKHR(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPipelineExecutableInternalRepresentationsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPipelineExecutableInternalRepresentationsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetPipelineExecutableInternalRepresentationsKHR(VkDevice                        device, const VkPipelineExecutableInfoKHR*  pExecutableInfo, uint32_t* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLineStippleEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetLineStippleEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateAccelerationStructureKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateAccelerationStructureKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateAccelerationStructureKHR(VkDevice                                           device, const VkAccelerationStructureCreateInfoKHR*        pCreateInfo, const VkAllocationCallbacks*       pAllocator, VkAccelerationStructureKHR*                        pAccelerationStructure) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBuildAccelerationStructuresKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBuildAccelerationStructuresKHR(VkCommandBuffer                                    commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBuildAccelerationStructuresIndirectKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBuildAccelerationStructuresIndirectKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBuildAccelerationStructuresIndirectKHR(VkCommandBuffer                  commandBuffer, uint32_t                                           infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress*             pIndirectDeviceAddresses, const uint32_t*                    pIndirectStrides, const uint32_t* const*             ppMaxPrimitiveCounts) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BuildAccelerationStructuresKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BuildAccelerationStructuresKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BuildAccelerationStructuresKHR(VkDevice                                           device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureDeviceAddressKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetAccelerationStructureDeviceAddressKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkDeviceAddress VKAPI_CALL wsi_GetAccelerationStructureDeviceAddressKHR(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateDeferredOperationKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateDeferredOperationKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateDeferredOperationKHR(VkDevice device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyDeferredOperationKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyDeferredOperationKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyDeferredOperationKHR(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationMaxConcurrencyKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeferredOperationMaxConcurrencyKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR uint32_t VKAPI_CALL wsi_GetDeferredOperationMaxConcurrencyKHR(VkDevice device, VkDeferredOperationKHR operation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetDeferredOperationResultKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetDeferredOperationResultKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetDeferredOperationResultKHR(VkDevice device, VkDeferredOperationKHR operation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DeferredOperationJoinKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DeferredOperationJoinKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_DeferredOperationJoinKHR(VkDevice device, VkDeferredOperationKHR operation) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetCullModeEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetCullModeEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFrontFaceEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetFrontFaceEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveTopologyEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetPrimitiveTopologyEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetViewportWithCountEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetViewportWithCountEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetScissorWithCountEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetScissorWithCountEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBindVertexBuffers2EXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBindVertexBuffers2EXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthTestEnableEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDepthTestEnableEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthWriteEnableEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDepthWriteEnableEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthCompareOpEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDepthCompareOpEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBoundsTestEnableEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDepthBoundsTestEnableEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilTestEnableEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetStencilTestEnableEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetStencilOpEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetStencilOpEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPatchControlPointsEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetPatchControlPointsEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetPatchControlPointsEXT(VkCommandBuffer commandBuffer, uint32_t patchControlPoints) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetRasterizerDiscardEnableEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetRasterizerDiscardEnableEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetRasterizerDiscardEnableEXT(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetDepthBiasEnableEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetDepthBiasEnableEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetDepthBiasEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetLogicOpEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetLogicOpEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetLogicOpEXT(VkCommandBuffer commandBuffer, VkLogicOp logicOp) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetPrimitiveRestartEnableEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetPrimitiveRestartEnableEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetPrimitiveRestartEnableEXT(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreatePrivateDataSlotEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreatePrivateDataSlotEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyPrivateDataSlotEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyPrivateDataSlotEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetPrivateDataEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetPrivateDataEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_SetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetPrivateDataEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetPrivateDataEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBuffer2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyBuffer2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImage2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyImage2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBlitImage2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBlitImage2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyBufferToImage2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyBufferToImage2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCopyImageToBuffer2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCopyImageToBuffer2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResolveImage2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdResolveImage2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetFragmentShadingRateKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetFragmentShadingRateKHR(VkCommandBuffer           commandBuffer, const VkExtent2D*                           pFragmentSize, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetFragmentShadingRateEnumNV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetFragmentShadingRateEnumNV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetFragmentShadingRateEnumNV(VkCommandBuffer           commandBuffer, VkFragmentShadingRateNV                     shadingRate, const VkFragmentShadingRateCombinerOpKHR    combinerOps[2]) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetAccelerationStructureBuildSizesKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetAccelerationStructureBuildSizesKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetAccelerationStructureBuildSizesKHR(VkDevice                                            device, VkAccelerationStructureBuildTypeKHR                 buildType, const VkAccelerationStructureBuildGeometryInfoKHR*  pBuildInfo, const uint32_t*  pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR*           pSizeInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetVertexInputEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetVertexInputEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetVertexInputEXT(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetColorWriteEnableEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetColorWriteEnableEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetColorWriteEnableEXT(VkCommandBuffer       commandBuffer, uint32_t                                attachmentCount, const VkBool32*   pColorWriteEnables) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdSetEvent2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdSetEvent2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdSetEvent2KHR(VkCommandBuffer                   commandBuffer, VkEvent                                             event, const VkDependencyInfoKHR*                          pDependencyInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdResetEvent2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdResetEvent2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdResetEvent2KHR(VkCommandBuffer                   commandBuffer, VkEvent                                             event, VkPipelineStageFlags2KHR                            stageMask) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWaitEvents2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdWaitEvents2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdWaitEvents2KHR(VkCommandBuffer                   commandBuffer, uint32_t                                            eventCount, const VkEvent*                     pEvents, const VkDependencyInfoKHR*         pDependencyInfos) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdPipelineBarrier2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdPipelineBarrier2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdPipelineBarrier2KHR(VkCommandBuffer                   commandBuffer, const VkDependencyInfoKHR*                                pDependencyInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_QueueSubmit2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_QueueSubmit2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_QueueSubmit2KHR(VkQueue                           queue, uint32_t                            submitCount, const VkSubmitInfo2KHR*           pSubmits, VkFence           fence) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteTimestamp2KHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdWriteTimestamp2KHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdWriteTimestamp2KHR(VkCommandBuffer                   commandBuffer, VkPipelineStageFlags2KHR                            stage, VkQueryPool                                         queryPool, uint32_t                                            query) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdWriteBufferMarker2AMD@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdWriteBufferMarker2AMD=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdWriteBufferMarker2AMD(VkCommandBuffer                   commandBuffer, VkPipelineStageFlags2KHR                            stage, VkBuffer                                            dstBuffer, VkDeviceSize                                        dstOffset, uint32_t                                            marker) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetQueueCheckpointData2NV@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetQueueCheckpointData2NV=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_GetQueueCheckpointData2NV(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData) __attribute__ ((weak));
#endif
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateVideoSessionKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateVideoSessionKHR(VkDevice device, const VkVideoSessionCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionKHR* pVideoSession) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyVideoSessionKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyVideoSessionKHR(VkDevice device, VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateVideoSessionParametersKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateVideoSessionParametersKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateVideoSessionParametersKHR(VkDevice device, const VkVideoSessionParametersCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionParametersKHR* pVideoSessionParameters) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_UpdateVideoSessionParametersKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_UpdateVideoSessionParametersKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_UpdateVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyVideoSessionParametersKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyVideoSessionParametersKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetVideoSessionMemoryRequirementsKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetVideoSessionMemoryRequirementsKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetVideoSessionMemoryRequirementsKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t* pVideoSessionMemoryRequirementsCount, VkVideoGetMemoryPropertiesKHR* pVideoSessionMemoryRequirements) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_BindVideoSessionMemoryKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_BindVideoSessionMemoryKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_BindVideoSessionMemoryKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t videoSessionBindMemoryCount, const VkVideoBindMemoryKHR* pVideoSessionBindMemories) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdDecodeVideoKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdDecodeVideoKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdDecodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pFrameInfo) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdBeginVideoCodingKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdBeginVideoCodingKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdBeginVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdControlVideoCodingKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdControlVideoCodingKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdControlVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoCodingControlInfoKHR* pCodingControlInfo) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEndVideoCodingKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEndVideoCodingKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEndVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoEndCodingInfoKHR* pEndCodingInfo) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdEncodeVideoKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdEncodeVideoKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdEncodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo) __attribute__ ((weak));
#endif
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuModuleNVX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateCuModuleNVX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateCuModuleNVX(VkDevice device, const VkCuModuleCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCuModuleNVX* pModule) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateCuFunctionNVX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateCuFunctionNVX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateCuFunctionNVX(VkDevice device, const VkCuFunctionCreateInfoNVX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCuFunctionNVX* pFunction) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuModuleNVX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyCuModuleNVX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyCuModuleNVX(VkDevice device, VkCuModuleNVX module, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyCuFunctionNVX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyCuFunctionNVX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyCuFunctionNVX(VkDevice device, VkCuFunctionNVX function, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CmdCuLaunchKernelNVX@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CmdCuLaunchKernelNVX=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_CmdCuLaunchKernelNVX(VkCommandBuffer commandBuffer, const VkCuLaunchInfoNVX* pLaunchInfo) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetDeviceMemoryPriorityEXT@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetDeviceMemoryPriorityEXT=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_SetDeviceMemoryPriorityEXT(VkDevice       device, VkDeviceMemory memory, float          priority) __attribute__ ((weak));
#endif
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_WaitForPresentKHR@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_WaitForPresentKHR=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_WaitForPresentKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout) __attribute__ ((weak));
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_CreateBufferCollectionFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_CreateBufferCollectionFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_CreateBufferCollectionFUCHSIA(VkDevice device, const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferCollectionFUCHSIA* pCollection) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionBufferConstraintsFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetBufferCollectionBufferConstraintsFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_SetBufferCollectionBufferConstraintsFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_SetBufferCollectionImageConstraintsFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_SetBufferCollectionImageConstraintsFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_SetBufferCollectionImageConstraintsFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_DestroyBufferCollectionFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_DestroyBufferCollectionFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR void VKAPI_CALL wsi_DestroyBufferCollectionFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkAllocationCallbacks* pAllocator) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
#ifdef _MSC_VER
#ifdef _M_IX86
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@4=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@8=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@12=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@16=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@20=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@24=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@28=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@32=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@36=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@40=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@44=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@48=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@60=_vk_entrypoint_stub@0")
    #pragma comment(linker, "/alternatename:_wsi_GetBufferCollectionPropertiesFUCHSIA@104=_vk_entrypoint_stub@0")
#else
    #pragma comment(linker, "/alternatename:wsi_GetBufferCollectionPropertiesFUCHSIA=vk_entrypoint_stub")
#endif
#else
    VKAPI_ATTR VkResult VKAPI_CALL wsi_GetBufferCollectionPropertiesFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, VkBufferCollectionPropertiesFUCHSIA* pProperties) __attribute__ ((weak));
#endif
#endif // VK_USE_PLATFORM_FUCHSIA

const struct vk_device_entrypoint_table wsi_device_entrypoints = {
    .GetDeviceProcAddr = wsi_GetDeviceProcAddr,
    .DestroyDevice = wsi_DestroyDevice,
    .GetDeviceQueue = wsi_GetDeviceQueue,
    .QueueSubmit = wsi_QueueSubmit,
    .QueueWaitIdle = wsi_QueueWaitIdle,
    .DeviceWaitIdle = wsi_DeviceWaitIdle,
    .AllocateMemory = wsi_AllocateMemory,
    .FreeMemory = wsi_FreeMemory,
    .MapMemory = wsi_MapMemory,
    .UnmapMemory = wsi_UnmapMemory,
    .FlushMappedMemoryRanges = wsi_FlushMappedMemoryRanges,
    .InvalidateMappedMemoryRanges = wsi_InvalidateMappedMemoryRanges,
    .GetDeviceMemoryCommitment = wsi_GetDeviceMemoryCommitment,
    .GetBufferMemoryRequirements = wsi_GetBufferMemoryRequirements,
    .BindBufferMemory = wsi_BindBufferMemory,
    .GetImageMemoryRequirements = wsi_GetImageMemoryRequirements,
    .BindImageMemory = wsi_BindImageMemory,
    .GetImageSparseMemoryRequirements = wsi_GetImageSparseMemoryRequirements,
    .QueueBindSparse = wsi_QueueBindSparse,
    .CreateFence = wsi_CreateFence,
    .DestroyFence = wsi_DestroyFence,
    .ResetFences = wsi_ResetFences,
    .GetFenceStatus = wsi_GetFenceStatus,
    .WaitForFences = wsi_WaitForFences,
    .CreateSemaphore = wsi_CreateSemaphore,
    .DestroySemaphore = wsi_DestroySemaphore,
    .CreateEvent = wsi_CreateEvent,
    .DestroyEvent = wsi_DestroyEvent,
    .GetEventStatus = wsi_GetEventStatus,
    .SetEvent = wsi_SetEvent,
    .ResetEvent = wsi_ResetEvent,
    .CreateQueryPool = wsi_CreateQueryPool,
    .DestroyQueryPool = wsi_DestroyQueryPool,
    .GetQueryPoolResults = wsi_GetQueryPoolResults,
    .ResetQueryPool = wsi_ResetQueryPool,
    .ResetQueryPoolEXT = wsi_ResetQueryPoolEXT,
    .CreateBuffer = wsi_CreateBuffer,
    .DestroyBuffer = wsi_DestroyBuffer,
    .CreateBufferView = wsi_CreateBufferView,
    .DestroyBufferView = wsi_DestroyBufferView,
    .CreateImage = wsi_CreateImage,
    .DestroyImage = wsi_DestroyImage,
    .GetImageSubresourceLayout = wsi_GetImageSubresourceLayout,
    .CreateImageView = wsi_CreateImageView,
    .DestroyImageView = wsi_DestroyImageView,
    .CreateShaderModule = wsi_CreateShaderModule,
    .DestroyShaderModule = wsi_DestroyShaderModule,
    .CreatePipelineCache = wsi_CreatePipelineCache,
    .DestroyPipelineCache = wsi_DestroyPipelineCache,
    .GetPipelineCacheData = wsi_GetPipelineCacheData,
    .MergePipelineCaches = wsi_MergePipelineCaches,
    .CreateGraphicsPipelines = wsi_CreateGraphicsPipelines,
    .CreateComputePipelines = wsi_CreateComputePipelines,
    .GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = wsi_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI,
    .DestroyPipeline = wsi_DestroyPipeline,
    .CreatePipelineLayout = wsi_CreatePipelineLayout,
    .DestroyPipelineLayout = wsi_DestroyPipelineLayout,
    .CreateSampler = wsi_CreateSampler,
    .DestroySampler = wsi_DestroySampler,
    .CreateDescriptorSetLayout = wsi_CreateDescriptorSetLayout,
    .DestroyDescriptorSetLayout = wsi_DestroyDescriptorSetLayout,
    .CreateDescriptorPool = wsi_CreateDescriptorPool,
    .DestroyDescriptorPool = wsi_DestroyDescriptorPool,
    .ResetDescriptorPool = wsi_ResetDescriptorPool,
    .AllocateDescriptorSets = wsi_AllocateDescriptorSets,
    .FreeDescriptorSets = wsi_FreeDescriptorSets,
    .UpdateDescriptorSets = wsi_UpdateDescriptorSets,
    .CreateFramebuffer = wsi_CreateFramebuffer,
    .DestroyFramebuffer = wsi_DestroyFramebuffer,
    .CreateRenderPass = wsi_CreateRenderPass,
    .DestroyRenderPass = wsi_DestroyRenderPass,
    .GetRenderAreaGranularity = wsi_GetRenderAreaGranularity,
    .CreateCommandPool = wsi_CreateCommandPool,
    .DestroyCommandPool = wsi_DestroyCommandPool,
    .ResetCommandPool = wsi_ResetCommandPool,
    .AllocateCommandBuffers = wsi_AllocateCommandBuffers,
    .FreeCommandBuffers = wsi_FreeCommandBuffers,
    .BeginCommandBuffer = wsi_BeginCommandBuffer,
    .EndCommandBuffer = wsi_EndCommandBuffer,
    .ResetCommandBuffer = wsi_ResetCommandBuffer,
    .CmdBindPipeline = wsi_CmdBindPipeline,
    .CmdSetViewport = wsi_CmdSetViewport,
    .CmdSetScissor = wsi_CmdSetScissor,
    .CmdSetLineWidth = wsi_CmdSetLineWidth,
    .CmdSetDepthBias = wsi_CmdSetDepthBias,
    .CmdSetBlendConstants = wsi_CmdSetBlendConstants,
    .CmdSetDepthBounds = wsi_CmdSetDepthBounds,
    .CmdSetStencilCompareMask = wsi_CmdSetStencilCompareMask,
    .CmdSetStencilWriteMask = wsi_CmdSetStencilWriteMask,
    .CmdSetStencilReference = wsi_CmdSetStencilReference,
    .CmdBindDescriptorSets = wsi_CmdBindDescriptorSets,
    .CmdBindIndexBuffer = wsi_CmdBindIndexBuffer,
    .CmdBindVertexBuffers = wsi_CmdBindVertexBuffers,
    .CmdDraw = wsi_CmdDraw,
    .CmdDrawIndexed = wsi_CmdDrawIndexed,
    .CmdDrawMultiEXT = wsi_CmdDrawMultiEXT,
    .CmdDrawMultiIndexedEXT = wsi_CmdDrawMultiIndexedEXT,
    .CmdDrawIndirect = wsi_CmdDrawIndirect,
    .CmdDrawIndexedIndirect = wsi_CmdDrawIndexedIndirect,
    .CmdDispatch = wsi_CmdDispatch,
    .CmdDispatchIndirect = wsi_CmdDispatchIndirect,
    .CmdSubpassShadingHUAWEI = wsi_CmdSubpassShadingHUAWEI,
    .CmdCopyBuffer = wsi_CmdCopyBuffer,
    .CmdCopyImage = wsi_CmdCopyImage,
    .CmdBlitImage = wsi_CmdBlitImage,
    .CmdCopyBufferToImage = wsi_CmdCopyBufferToImage,
    .CmdCopyImageToBuffer = wsi_CmdCopyImageToBuffer,
    .CmdUpdateBuffer = wsi_CmdUpdateBuffer,
    .CmdFillBuffer = wsi_CmdFillBuffer,
    .CmdClearColorImage = wsi_CmdClearColorImage,
    .CmdClearDepthStencilImage = wsi_CmdClearDepthStencilImage,
    .CmdClearAttachments = wsi_CmdClearAttachments,
    .CmdResolveImage = wsi_CmdResolveImage,
    .CmdSetEvent = wsi_CmdSetEvent,
    .CmdResetEvent = wsi_CmdResetEvent,
    .CmdWaitEvents = wsi_CmdWaitEvents,
    .CmdPipelineBarrier = wsi_CmdPipelineBarrier,
    .CmdBeginQuery = wsi_CmdBeginQuery,
    .CmdEndQuery = wsi_CmdEndQuery,
    .CmdBeginConditionalRenderingEXT = wsi_CmdBeginConditionalRenderingEXT,
    .CmdEndConditionalRenderingEXT = wsi_CmdEndConditionalRenderingEXT,
    .CmdResetQueryPool = wsi_CmdResetQueryPool,
    .CmdWriteTimestamp = wsi_CmdWriteTimestamp,
    .CmdCopyQueryPoolResults = wsi_CmdCopyQueryPoolResults,
    .CmdPushConstants = wsi_CmdPushConstants,
    .CmdBeginRenderPass = wsi_CmdBeginRenderPass,
    .CmdNextSubpass = wsi_CmdNextSubpass,
    .CmdEndRenderPass = wsi_CmdEndRenderPass,
    .CmdExecuteCommands = wsi_CmdExecuteCommands,
    .CreateSharedSwapchainsKHR = wsi_CreateSharedSwapchainsKHR,
    .CreateSwapchainKHR = wsi_CreateSwapchainKHR,
    .DestroySwapchainKHR = wsi_DestroySwapchainKHR,
    .GetSwapchainImagesKHR = wsi_GetSwapchainImagesKHR,
    .AcquireNextImageKHR = wsi_AcquireNextImageKHR,
    .QueuePresentKHR = wsi_QueuePresentKHR,
    .DebugMarkerSetObjectNameEXT = wsi_DebugMarkerSetObjectNameEXT,
    .DebugMarkerSetObjectTagEXT = wsi_DebugMarkerSetObjectTagEXT,
    .CmdDebugMarkerBeginEXT = wsi_CmdDebugMarkerBeginEXT,
    .CmdDebugMarkerEndEXT = wsi_CmdDebugMarkerEndEXT,
    .CmdDebugMarkerInsertEXT = wsi_CmdDebugMarkerInsertEXT,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandleNV = wsi_GetMemoryWin32HandleNV,
#elif defined(_MSC_VER)
    .GetMemoryWin32HandleNV = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .CmdExecuteGeneratedCommandsNV = wsi_CmdExecuteGeneratedCommandsNV,
    .CmdPreprocessGeneratedCommandsNV = wsi_CmdPreprocessGeneratedCommandsNV,
    .CmdBindPipelineShaderGroupNV = wsi_CmdBindPipelineShaderGroupNV,
    .GetGeneratedCommandsMemoryRequirementsNV = wsi_GetGeneratedCommandsMemoryRequirementsNV,
    .CreateIndirectCommandsLayoutNV = wsi_CreateIndirectCommandsLayoutNV,
    .DestroyIndirectCommandsLayoutNV = wsi_DestroyIndirectCommandsLayoutNV,
    .CmdPushDescriptorSetKHR = wsi_CmdPushDescriptorSetKHR,
    .TrimCommandPool = wsi_TrimCommandPool,
    .TrimCommandPoolKHR = wsi_TrimCommandPoolKHR,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandleKHR = wsi_GetMemoryWin32HandleKHR,
#elif defined(_MSC_VER)
    .GetMemoryWin32HandleKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandlePropertiesKHR = wsi_GetMemoryWin32HandlePropertiesKHR,
#elif defined(_MSC_VER)
    .GetMemoryWin32HandlePropertiesKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryFdKHR = wsi_GetMemoryFdKHR,
    .GetMemoryFdPropertiesKHR = wsi_GetMemoryFdPropertiesKHR,
#ifdef VK_USE_PLATFORM_FUCHSIA
    .GetMemoryZirconHandleFUCHSIA = wsi_GetMemoryZirconHandleFUCHSIA,
#elif defined(_MSC_VER)
    .GetMemoryZirconHandleFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
    .GetMemoryZirconHandlePropertiesFUCHSIA = wsi_GetMemoryZirconHandlePropertiesFUCHSIA,
#elif defined(_MSC_VER)
    .GetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
    .GetMemoryRemoteAddressNV = wsi_GetMemoryRemoteAddressNV,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetSemaphoreWin32HandleKHR = wsi_GetSemaphoreWin32HandleKHR,
#elif defined(_MSC_VER)
    .GetSemaphoreWin32HandleKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ImportSemaphoreWin32HandleKHR = wsi_ImportSemaphoreWin32HandleKHR,
#elif defined(_MSC_VER)
    .ImportSemaphoreWin32HandleKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .GetSemaphoreFdKHR = wsi_GetSemaphoreFdKHR,
    .ImportSemaphoreFdKHR = wsi_ImportSemaphoreFdKHR,
#ifdef VK_USE_PLATFORM_FUCHSIA
    .GetSemaphoreZirconHandleFUCHSIA = wsi_GetSemaphoreZirconHandleFUCHSIA,
#elif defined(_MSC_VER)
    .GetSemaphoreZirconHandleFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
    .ImportSemaphoreZirconHandleFUCHSIA = wsi_ImportSemaphoreZirconHandleFUCHSIA,
#elif defined(_MSC_VER)
    .ImportSemaphoreZirconHandleFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetFenceWin32HandleKHR = wsi_GetFenceWin32HandleKHR,
#elif defined(_MSC_VER)
    .GetFenceWin32HandleKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ImportFenceWin32HandleKHR = wsi_ImportFenceWin32HandleKHR,
#elif defined(_MSC_VER)
    .ImportFenceWin32HandleKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .GetFenceFdKHR = wsi_GetFenceFdKHR,
    .ImportFenceFdKHR = wsi_ImportFenceFdKHR,
    .DisplayPowerControlEXT = wsi_DisplayPowerControlEXT,
    .RegisterDeviceEventEXT = wsi_RegisterDeviceEventEXT,
    .RegisterDisplayEventEXT = wsi_RegisterDisplayEventEXT,
    .GetSwapchainCounterEXT = wsi_GetSwapchainCounterEXT,
    .GetDeviceGroupPeerMemoryFeatures = wsi_GetDeviceGroupPeerMemoryFeatures,
    .GetDeviceGroupPeerMemoryFeaturesKHR = wsi_GetDeviceGroupPeerMemoryFeaturesKHR,
    .BindBufferMemory2 = wsi_BindBufferMemory2,
    .BindBufferMemory2KHR = wsi_BindBufferMemory2KHR,
    .BindImageMemory2 = wsi_BindImageMemory2,
    .BindImageMemory2KHR = wsi_BindImageMemory2KHR,
    .CmdSetDeviceMask = wsi_CmdSetDeviceMask,
    .CmdSetDeviceMaskKHR = wsi_CmdSetDeviceMaskKHR,
    .GetDeviceGroupPresentCapabilitiesKHR = wsi_GetDeviceGroupPresentCapabilitiesKHR,
    .GetDeviceGroupSurfacePresentModesKHR = wsi_GetDeviceGroupSurfacePresentModesKHR,
    .AcquireNextImage2KHR = wsi_AcquireNextImage2KHR,
    .CmdDispatchBase = wsi_CmdDispatchBase,
    .CmdDispatchBaseKHR = wsi_CmdDispatchBaseKHR,
    .CreateDescriptorUpdateTemplate = wsi_CreateDescriptorUpdateTemplate,
    .CreateDescriptorUpdateTemplateKHR = wsi_CreateDescriptorUpdateTemplateKHR,
    .DestroyDescriptorUpdateTemplate = wsi_DestroyDescriptorUpdateTemplate,
    .DestroyDescriptorUpdateTemplateKHR = wsi_DestroyDescriptorUpdateTemplateKHR,
    .UpdateDescriptorSetWithTemplate = wsi_UpdateDescriptorSetWithTemplate,
    .UpdateDescriptorSetWithTemplateKHR = wsi_UpdateDescriptorSetWithTemplateKHR,
    .CmdPushDescriptorSetWithTemplateKHR = wsi_CmdPushDescriptorSetWithTemplateKHR,
    .SetHdrMetadataEXT = wsi_SetHdrMetadataEXT,
    .GetSwapchainStatusKHR = wsi_GetSwapchainStatusKHR,
    .GetRefreshCycleDurationGOOGLE = wsi_GetRefreshCycleDurationGOOGLE,
    .GetPastPresentationTimingGOOGLE = wsi_GetPastPresentationTimingGOOGLE,
    .CmdSetViewportWScalingNV = wsi_CmdSetViewportWScalingNV,
    .CmdSetDiscardRectangleEXT = wsi_CmdSetDiscardRectangleEXT,
    .CmdSetSampleLocationsEXT = wsi_CmdSetSampleLocationsEXT,
    .GetBufferMemoryRequirements2 = wsi_GetBufferMemoryRequirements2,
    .GetBufferMemoryRequirements2KHR = wsi_GetBufferMemoryRequirements2KHR,
    .GetImageMemoryRequirements2 = wsi_GetImageMemoryRequirements2,
    .GetImageMemoryRequirements2KHR = wsi_GetImageMemoryRequirements2KHR,
    .GetImageSparseMemoryRequirements2 = wsi_GetImageSparseMemoryRequirements2,
    .GetDeviceBufferMemoryRequirementsKHR = wsi_GetDeviceBufferMemoryRequirementsKHR,
    .GetDeviceImageMemoryRequirementsKHR = wsi_GetDeviceImageMemoryRequirementsKHR,
    .GetDeviceImageSparseMemoryRequirementsKHR = wsi_GetDeviceImageSparseMemoryRequirementsKHR,
    .GetImageSparseMemoryRequirements2KHR = wsi_GetImageSparseMemoryRequirements2KHR,
    .CreateSamplerYcbcrConversion = wsi_CreateSamplerYcbcrConversion,
    .CreateSamplerYcbcrConversionKHR = wsi_CreateSamplerYcbcrConversionKHR,
    .DestroySamplerYcbcrConversion = wsi_DestroySamplerYcbcrConversion,
    .DestroySamplerYcbcrConversionKHR = wsi_DestroySamplerYcbcrConversionKHR,
    .GetDeviceQueue2 = wsi_GetDeviceQueue2,
    .CreateValidationCacheEXT = wsi_CreateValidationCacheEXT,
    .DestroyValidationCacheEXT = wsi_DestroyValidationCacheEXT,
    .GetValidationCacheDataEXT = wsi_GetValidationCacheDataEXT,
    .MergeValidationCachesEXT = wsi_MergeValidationCachesEXT,
    .GetDescriptorSetLayoutSupport = wsi_GetDescriptorSetLayoutSupport,
    .GetDescriptorSetLayoutSupportKHR = wsi_GetDescriptorSetLayoutSupportKHR,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetSwapchainGrallocUsageANDROID = wsi_GetSwapchainGrallocUsageANDROID,
#elif defined(_MSC_VER)
    .GetSwapchainGrallocUsageANDROID = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetSwapchainGrallocUsage2ANDROID = wsi_GetSwapchainGrallocUsage2ANDROID,
#elif defined(_MSC_VER)
    .GetSwapchainGrallocUsage2ANDROID = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .AcquireImageANDROID = wsi_AcquireImageANDROID,
#elif defined(_MSC_VER)
    .AcquireImageANDROID = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .QueueSignalReleaseImageANDROID = wsi_QueueSignalReleaseImageANDROID,
#elif defined(_MSC_VER)
    .QueueSignalReleaseImageANDROID = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_ANDROID_KHR
    .GetShaderInfoAMD = wsi_GetShaderInfoAMD,
    .SetLocalDimmingAMD = wsi_SetLocalDimmingAMD,
    .GetCalibratedTimestampsEXT = wsi_GetCalibratedTimestampsEXT,
    .SetDebugUtilsObjectNameEXT = wsi_SetDebugUtilsObjectNameEXT,
    .SetDebugUtilsObjectTagEXT = wsi_SetDebugUtilsObjectTagEXT,
    .QueueBeginDebugUtilsLabelEXT = wsi_QueueBeginDebugUtilsLabelEXT,
    .QueueEndDebugUtilsLabelEXT = wsi_QueueEndDebugUtilsLabelEXT,
    .QueueInsertDebugUtilsLabelEXT = wsi_QueueInsertDebugUtilsLabelEXT,
    .CmdBeginDebugUtilsLabelEXT = wsi_CmdBeginDebugUtilsLabelEXT,
    .CmdEndDebugUtilsLabelEXT = wsi_CmdEndDebugUtilsLabelEXT,
    .CmdInsertDebugUtilsLabelEXT = wsi_CmdInsertDebugUtilsLabelEXT,
    .GetMemoryHostPointerPropertiesEXT = wsi_GetMemoryHostPointerPropertiesEXT,
    .CmdWriteBufferMarkerAMD = wsi_CmdWriteBufferMarkerAMD,
    .CreateRenderPass2 = wsi_CreateRenderPass2,
    .CreateRenderPass2KHR = wsi_CreateRenderPass2KHR,
    .CmdBeginRenderPass2 = wsi_CmdBeginRenderPass2,
    .CmdBeginRenderPass2KHR = wsi_CmdBeginRenderPass2KHR,
    .CmdNextSubpass2 = wsi_CmdNextSubpass2,
    .CmdNextSubpass2KHR = wsi_CmdNextSubpass2KHR,
    .CmdEndRenderPass2 = wsi_CmdEndRenderPass2,
    .CmdEndRenderPass2KHR = wsi_CmdEndRenderPass2KHR,
    .GetSemaphoreCounterValue = wsi_GetSemaphoreCounterValue,
    .GetSemaphoreCounterValueKHR = wsi_GetSemaphoreCounterValueKHR,
    .WaitSemaphores = wsi_WaitSemaphores,
    .WaitSemaphoresKHR = wsi_WaitSemaphoresKHR,
    .SignalSemaphore = wsi_SignalSemaphore,
    .SignalSemaphoreKHR = wsi_SignalSemaphoreKHR,
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetAndroidHardwareBufferPropertiesANDROID = wsi_GetAndroidHardwareBufferPropertiesANDROID,
#elif defined(_MSC_VER)
    .GetAndroidHardwareBufferPropertiesANDROID = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetMemoryAndroidHardwareBufferANDROID = wsi_GetMemoryAndroidHardwareBufferANDROID,
#elif defined(_MSC_VER)
    .GetMemoryAndroidHardwareBufferANDROID = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_ANDROID_KHR
    .CmdDrawIndirectCount = wsi_CmdDrawIndirectCount,
    .CmdDrawIndirectCountKHR = wsi_CmdDrawIndirectCountKHR,
    .CmdDrawIndirectCountAMD = wsi_CmdDrawIndirectCountAMD,
    .CmdDrawIndexedIndirectCount = wsi_CmdDrawIndexedIndirectCount,
    .CmdDrawIndexedIndirectCountKHR = wsi_CmdDrawIndexedIndirectCountKHR,
    .CmdDrawIndexedIndirectCountAMD = wsi_CmdDrawIndexedIndirectCountAMD,
    .CmdSetCheckpointNV = wsi_CmdSetCheckpointNV,
    .GetQueueCheckpointDataNV = wsi_GetQueueCheckpointDataNV,
    .CmdBindTransformFeedbackBuffersEXT = wsi_CmdBindTransformFeedbackBuffersEXT,
    .CmdBeginTransformFeedbackEXT = wsi_CmdBeginTransformFeedbackEXT,
    .CmdEndTransformFeedbackEXT = wsi_CmdEndTransformFeedbackEXT,
    .CmdBeginQueryIndexedEXT = wsi_CmdBeginQueryIndexedEXT,
    .CmdEndQueryIndexedEXT = wsi_CmdEndQueryIndexedEXT,
    .CmdDrawIndirectByteCountEXT = wsi_CmdDrawIndirectByteCountEXT,
    .CmdSetExclusiveScissorNV = wsi_CmdSetExclusiveScissorNV,
    .CmdBindShadingRateImageNV = wsi_CmdBindShadingRateImageNV,
    .CmdSetViewportShadingRatePaletteNV = wsi_CmdSetViewportShadingRatePaletteNV,
    .CmdSetCoarseSampleOrderNV = wsi_CmdSetCoarseSampleOrderNV,
    .CmdDrawMeshTasksNV = wsi_CmdDrawMeshTasksNV,
    .CmdDrawMeshTasksIndirectNV = wsi_CmdDrawMeshTasksIndirectNV,
    .CmdDrawMeshTasksIndirectCountNV = wsi_CmdDrawMeshTasksIndirectCountNV,
    .CompileDeferredNV = wsi_CompileDeferredNV,
    .CreateAccelerationStructureNV = wsi_CreateAccelerationStructureNV,
    .CmdBindInvocationMaskHUAWEI = wsi_CmdBindInvocationMaskHUAWEI,
    .DestroyAccelerationStructureKHR = wsi_DestroyAccelerationStructureKHR,
    .DestroyAccelerationStructureNV = wsi_DestroyAccelerationStructureNV,
    .GetAccelerationStructureMemoryRequirementsNV = wsi_GetAccelerationStructureMemoryRequirementsNV,
    .BindAccelerationStructureMemoryNV = wsi_BindAccelerationStructureMemoryNV,
    .CmdCopyAccelerationStructureNV = wsi_CmdCopyAccelerationStructureNV,
    .CmdCopyAccelerationStructureKHR = wsi_CmdCopyAccelerationStructureKHR,
    .CopyAccelerationStructureKHR = wsi_CopyAccelerationStructureKHR,
    .CmdCopyAccelerationStructureToMemoryKHR = wsi_CmdCopyAccelerationStructureToMemoryKHR,
    .CopyAccelerationStructureToMemoryKHR = wsi_CopyAccelerationStructureToMemoryKHR,
    .CmdCopyMemoryToAccelerationStructureKHR = wsi_CmdCopyMemoryToAccelerationStructureKHR,
    .CopyMemoryToAccelerationStructureKHR = wsi_CopyMemoryToAccelerationStructureKHR,
    .CmdWriteAccelerationStructuresPropertiesKHR = wsi_CmdWriteAccelerationStructuresPropertiesKHR,
    .CmdWriteAccelerationStructuresPropertiesNV = wsi_CmdWriteAccelerationStructuresPropertiesNV,
    .CmdBuildAccelerationStructureNV = wsi_CmdBuildAccelerationStructureNV,
    .WriteAccelerationStructuresPropertiesKHR = wsi_WriteAccelerationStructuresPropertiesKHR,
    .CmdTraceRaysKHR = wsi_CmdTraceRaysKHR,
    .CmdTraceRaysNV = wsi_CmdTraceRaysNV,
    .GetRayTracingShaderGroupHandlesKHR = wsi_GetRayTracingShaderGroupHandlesKHR,
    .GetRayTracingShaderGroupHandlesNV = wsi_GetRayTracingShaderGroupHandlesNV,
    .GetRayTracingCaptureReplayShaderGroupHandlesKHR = wsi_GetRayTracingCaptureReplayShaderGroupHandlesKHR,
    .GetAccelerationStructureHandleNV = wsi_GetAccelerationStructureHandleNV,
    .CreateRayTracingPipelinesNV = wsi_CreateRayTracingPipelinesNV,
    .CreateRayTracingPipelinesKHR = wsi_CreateRayTracingPipelinesKHR,
    .CmdTraceRaysIndirectKHR = wsi_CmdTraceRaysIndirectKHR,
    .GetDeviceAccelerationStructureCompatibilityKHR = wsi_GetDeviceAccelerationStructureCompatibilityKHR,
    .GetRayTracingShaderGroupStackSizeKHR = wsi_GetRayTracingShaderGroupStackSizeKHR,
    .CmdSetRayTracingPipelineStackSizeKHR = wsi_CmdSetRayTracingPipelineStackSizeKHR,
    .GetImageViewHandleNVX = wsi_GetImageViewHandleNVX,
    .GetImageViewAddressNVX = wsi_GetImageViewAddressNVX,
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetDeviceGroupSurfacePresentModes2EXT = wsi_GetDeviceGroupSurfacePresentModes2EXT,
#elif defined(_MSC_VER)
    .GetDeviceGroupSurfacePresentModes2EXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .AcquireFullScreenExclusiveModeEXT = wsi_AcquireFullScreenExclusiveModeEXT,
#elif defined(_MSC_VER)
    .AcquireFullScreenExclusiveModeEXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ReleaseFullScreenExclusiveModeEXT = wsi_ReleaseFullScreenExclusiveModeEXT,
#elif defined(_MSC_VER)
    .ReleaseFullScreenExclusiveModeEXT = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_WIN32_KHR
    .AcquireProfilingLockKHR = wsi_AcquireProfilingLockKHR,
    .ReleaseProfilingLockKHR = wsi_ReleaseProfilingLockKHR,
    .GetImageDrmFormatModifierPropertiesEXT = wsi_GetImageDrmFormatModifierPropertiesEXT,
    .GetBufferOpaqueCaptureAddress = wsi_GetBufferOpaqueCaptureAddress,
    .GetBufferOpaqueCaptureAddressKHR = wsi_GetBufferOpaqueCaptureAddressKHR,
    .GetBufferDeviceAddress = wsi_GetBufferDeviceAddress,
    .GetBufferDeviceAddressKHR = wsi_GetBufferDeviceAddressKHR,
    .GetBufferDeviceAddressEXT = wsi_GetBufferDeviceAddressEXT,
    .InitializePerformanceApiINTEL = wsi_InitializePerformanceApiINTEL,
    .UninitializePerformanceApiINTEL = wsi_UninitializePerformanceApiINTEL,
    .CmdSetPerformanceMarkerINTEL = wsi_CmdSetPerformanceMarkerINTEL,
    .CmdSetPerformanceStreamMarkerINTEL = wsi_CmdSetPerformanceStreamMarkerINTEL,
    .CmdSetPerformanceOverrideINTEL = wsi_CmdSetPerformanceOverrideINTEL,
    .AcquirePerformanceConfigurationINTEL = wsi_AcquirePerformanceConfigurationINTEL,
    .ReleasePerformanceConfigurationINTEL = wsi_ReleasePerformanceConfigurationINTEL,
    .QueueSetPerformanceConfigurationINTEL = wsi_QueueSetPerformanceConfigurationINTEL,
    .GetPerformanceParameterINTEL = wsi_GetPerformanceParameterINTEL,
    .GetDeviceMemoryOpaqueCaptureAddress = wsi_GetDeviceMemoryOpaqueCaptureAddress,
    .GetDeviceMemoryOpaqueCaptureAddressKHR = wsi_GetDeviceMemoryOpaqueCaptureAddressKHR,
    .GetPipelineExecutablePropertiesKHR = wsi_GetPipelineExecutablePropertiesKHR,
    .GetPipelineExecutableStatisticsKHR = wsi_GetPipelineExecutableStatisticsKHR,
    .GetPipelineExecutableInternalRepresentationsKHR = wsi_GetPipelineExecutableInternalRepresentationsKHR,
    .CmdSetLineStippleEXT = wsi_CmdSetLineStippleEXT,
    .CreateAccelerationStructureKHR = wsi_CreateAccelerationStructureKHR,
    .CmdBuildAccelerationStructuresKHR = wsi_CmdBuildAccelerationStructuresKHR,
    .CmdBuildAccelerationStructuresIndirectKHR = wsi_CmdBuildAccelerationStructuresIndirectKHR,
    .BuildAccelerationStructuresKHR = wsi_BuildAccelerationStructuresKHR,
    .GetAccelerationStructureDeviceAddressKHR = wsi_GetAccelerationStructureDeviceAddressKHR,
    .CreateDeferredOperationKHR = wsi_CreateDeferredOperationKHR,
    .DestroyDeferredOperationKHR = wsi_DestroyDeferredOperationKHR,
    .GetDeferredOperationMaxConcurrencyKHR = wsi_GetDeferredOperationMaxConcurrencyKHR,
    .GetDeferredOperationResultKHR = wsi_GetDeferredOperationResultKHR,
    .DeferredOperationJoinKHR = wsi_DeferredOperationJoinKHR,
    .CmdSetCullModeEXT = wsi_CmdSetCullModeEXT,
    .CmdSetFrontFaceEXT = wsi_CmdSetFrontFaceEXT,
    .CmdSetPrimitiveTopologyEXT = wsi_CmdSetPrimitiveTopologyEXT,
    .CmdSetViewportWithCountEXT = wsi_CmdSetViewportWithCountEXT,
    .CmdSetScissorWithCountEXT = wsi_CmdSetScissorWithCountEXT,
    .CmdBindVertexBuffers2EXT = wsi_CmdBindVertexBuffers2EXT,
    .CmdSetDepthTestEnableEXT = wsi_CmdSetDepthTestEnableEXT,
    .CmdSetDepthWriteEnableEXT = wsi_CmdSetDepthWriteEnableEXT,
    .CmdSetDepthCompareOpEXT = wsi_CmdSetDepthCompareOpEXT,
    .CmdSetDepthBoundsTestEnableEXT = wsi_CmdSetDepthBoundsTestEnableEXT,
    .CmdSetStencilTestEnableEXT = wsi_CmdSetStencilTestEnableEXT,
    .CmdSetStencilOpEXT = wsi_CmdSetStencilOpEXT,
    .CmdSetPatchControlPointsEXT = wsi_CmdSetPatchControlPointsEXT,
    .CmdSetRasterizerDiscardEnableEXT = wsi_CmdSetRasterizerDiscardEnableEXT,
    .CmdSetDepthBiasEnableEXT = wsi_CmdSetDepthBiasEnableEXT,
    .CmdSetLogicOpEXT = wsi_CmdSetLogicOpEXT,
    .CmdSetPrimitiveRestartEnableEXT = wsi_CmdSetPrimitiveRestartEnableEXT,
    .CreatePrivateDataSlotEXT = wsi_CreatePrivateDataSlotEXT,
    .DestroyPrivateDataSlotEXT = wsi_DestroyPrivateDataSlotEXT,
    .SetPrivateDataEXT = wsi_SetPrivateDataEXT,
    .GetPrivateDataEXT = wsi_GetPrivateDataEXT,
    .CmdCopyBuffer2KHR = wsi_CmdCopyBuffer2KHR,
    .CmdCopyImage2KHR = wsi_CmdCopyImage2KHR,
    .CmdBlitImage2KHR = wsi_CmdBlitImage2KHR,
    .CmdCopyBufferToImage2KHR = wsi_CmdCopyBufferToImage2KHR,
    .CmdCopyImageToBuffer2KHR = wsi_CmdCopyImageToBuffer2KHR,
    .CmdResolveImage2KHR = wsi_CmdResolveImage2KHR,
    .CmdSetFragmentShadingRateKHR = wsi_CmdSetFragmentShadingRateKHR,
    .CmdSetFragmentShadingRateEnumNV = wsi_CmdSetFragmentShadingRateEnumNV,
    .GetAccelerationStructureBuildSizesKHR = wsi_GetAccelerationStructureBuildSizesKHR,
    .CmdSetVertexInputEXT = wsi_CmdSetVertexInputEXT,
    .CmdSetColorWriteEnableEXT = wsi_CmdSetColorWriteEnableEXT,
    .CmdSetEvent2KHR = wsi_CmdSetEvent2KHR,
    .CmdResetEvent2KHR = wsi_CmdResetEvent2KHR,
    .CmdWaitEvents2KHR = wsi_CmdWaitEvents2KHR,
    .CmdPipelineBarrier2KHR = wsi_CmdPipelineBarrier2KHR,
    .QueueSubmit2KHR = wsi_QueueSubmit2KHR,
    .CmdWriteTimestamp2KHR = wsi_CmdWriteTimestamp2KHR,
    .CmdWriteBufferMarker2AMD = wsi_CmdWriteBufferMarker2AMD,
    .GetQueueCheckpointData2NV = wsi_GetQueueCheckpointData2NV,
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .CreateVideoSessionKHR = wsi_CreateVideoSessionKHR,
#elif defined(_MSC_VER)
    .CreateVideoSessionKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .DestroyVideoSessionKHR = wsi_DestroyVideoSessionKHR,
#elif defined(_MSC_VER)
    .DestroyVideoSessionKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .CreateVideoSessionParametersKHR = wsi_CreateVideoSessionParametersKHR,
#elif defined(_MSC_VER)
    .CreateVideoSessionParametersKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .UpdateVideoSessionParametersKHR = wsi_UpdateVideoSessionParametersKHR,
#elif defined(_MSC_VER)
    .UpdateVideoSessionParametersKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .DestroyVideoSessionParametersKHR = wsi_DestroyVideoSessionParametersKHR,
#elif defined(_MSC_VER)
    .DestroyVideoSessionParametersKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .GetVideoSessionMemoryRequirementsKHR = wsi_GetVideoSessionMemoryRequirementsKHR,
#elif defined(_MSC_VER)
    .GetVideoSessionMemoryRequirementsKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .BindVideoSessionMemoryKHR = wsi_BindVideoSessionMemoryKHR,
#elif defined(_MSC_VER)
    .BindVideoSessionMemoryKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .CmdDecodeVideoKHR = wsi_CmdDecodeVideoKHR,
#elif defined(_MSC_VER)
    .CmdDecodeVideoKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .CmdBeginVideoCodingKHR = wsi_CmdBeginVideoCodingKHR,
#elif defined(_MSC_VER)
    .CmdBeginVideoCodingKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .CmdControlVideoCodingKHR = wsi_CmdControlVideoCodingKHR,
#elif defined(_MSC_VER)
    .CmdControlVideoCodingKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .CmdEndVideoCodingKHR = wsi_CmdEndVideoCodingKHR,
#elif defined(_MSC_VER)
    .CmdEndVideoCodingKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
    .CmdEncodeVideoKHR = wsi_CmdEncodeVideoKHR,
#elif defined(_MSC_VER)
    .CmdEncodeVideoKHR = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_ENABLE_BETA_EXTENSIONS
    .CreateCuModuleNVX = wsi_CreateCuModuleNVX,
    .CreateCuFunctionNVX = wsi_CreateCuFunctionNVX,
    .DestroyCuModuleNVX = wsi_DestroyCuModuleNVX,
    .DestroyCuFunctionNVX = wsi_DestroyCuFunctionNVX,
    .CmdCuLaunchKernelNVX = wsi_CmdCuLaunchKernelNVX,
    .SetDeviceMemoryPriorityEXT = wsi_SetDeviceMemoryPriorityEXT,
    .WaitForPresentKHR = wsi_WaitForPresentKHR,
#ifdef VK_USE_PLATFORM_FUCHSIA
    .CreateBufferCollectionFUCHSIA = wsi_CreateBufferCollectionFUCHSIA,
#elif defined(_MSC_VER)
    .CreateBufferCollectionFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
    .SetBufferCollectionBufferConstraintsFUCHSIA = wsi_SetBufferCollectionBufferConstraintsFUCHSIA,
#elif defined(_MSC_VER)
    .SetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
    .SetBufferCollectionImageConstraintsFUCHSIA = wsi_SetBufferCollectionImageConstraintsFUCHSIA,
#elif defined(_MSC_VER)
    .SetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
    .DestroyBufferCollectionFUCHSIA = wsi_DestroyBufferCollectionFUCHSIA,
#elif defined(_MSC_VER)
    .DestroyBufferCollectionFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
#ifdef VK_USE_PLATFORM_FUCHSIA
    .GetBufferCollectionPropertiesFUCHSIA = wsi_GetBufferCollectionPropertiesFUCHSIA,
#elif defined(_MSC_VER)
    .GetBufferCollectionPropertiesFUCHSIA = (PFN_vkVoidFunction)vk_entrypoint_stub,
#endif // VK_USE_PLATFORM_FUCHSIA
};

