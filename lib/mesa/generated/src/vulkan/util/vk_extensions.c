/*
 * Copyright 2017 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL VMWARE AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "vk_object.h"

#include "vk_extensions.h"

const VkExtensionProperties vk_instance_extensions[VK_INSTANCE_EXTENSION_COUNT] = {
   {"VK_KHR_android_surface", 6},
   {"VK_KHR_device_group_creation", 1},
   {"VK_KHR_display", 23},
   {"VK_KHR_external_fence_capabilities", 1},
   {"VK_KHR_external_memory_capabilities", 1},
   {"VK_KHR_external_semaphore_capabilities", 1},
   {"VK_KHR_get_display_properties2", 1},
   {"VK_KHR_get_physical_device_properties2", 2},
   {"VK_KHR_get_surface_capabilities2", 1},
   {"VK_KHR_surface", 25},
   {"VK_KHR_surface_protected_capabilities", 1},
   {"VK_KHR_wayland_surface", 6},
   {"VK_KHR_win32_surface", 6},
   {"VK_KHR_xcb_surface", 6},
   {"VK_KHR_xlib_surface", 6},
   {"VK_EXT_acquire_drm_display", 1},
   {"VK_EXT_acquire_xlib_display", 1},
   {"VK_EXT_debug_report", 10},
   {"VK_EXT_debug_utils", 2},
   {"VK_EXT_direct_mode_display", 1},
   {"VK_EXT_directfb_surface", 1},
   {"VK_EXT_display_surface_counter", 1},
   {"VK_EXT_headless_surface", 1},
   {"VK_EXT_metal_surface", 1},
   {"VK_EXT_swapchain_colorspace", 4},
   {"VK_EXT_validation_features", 5},
   {"VK_EXT_validation_flags", 2},
   {"VK_FUCHSIA_imagepipe_surface", 1},
   {"VK_GGP_stream_descriptor_surface", 1},
   {"VK_MVK_ios_surface", 3},
   {"VK_MVK_macos_surface", 3},
   {"VK_NN_vi_surface", 1},
   {"VK_NV_external_memory_capabilities", 1},
   {"VK_QNX_screen_surface", 1},
};

const VkExtensionProperties vk_device_extensions[VK_DEVICE_EXTENSION_COUNT] = {
   {"VK_KHR_8bit_storage", 1},
   {"VK_KHR_16bit_storage", 1},
   {"VK_KHR_acceleration_structure", 13},
   {"VK_KHR_bind_memory2", 1},
   {"VK_KHR_buffer_device_address", 1},
   {"VK_KHR_copy_commands2", 1},
   {"VK_KHR_create_renderpass2", 1},
   {"VK_KHR_dedicated_allocation", 3},
   {"VK_KHR_deferred_host_operations", 4},
   {"VK_KHR_depth_stencil_resolve", 1},
   {"VK_KHR_descriptor_update_template", 1},
   {"VK_KHR_device_group", 4},
   {"VK_KHR_display_swapchain", 10},
   {"VK_KHR_draw_indirect_count", 1},
   {"VK_KHR_driver_properties", 1},
   {"VK_KHR_external_fence", 1},
   {"VK_KHR_external_fence_fd", 1},
   {"VK_KHR_external_fence_win32", 1},
   {"VK_KHR_external_memory", 1},
   {"VK_KHR_external_memory_fd", 1},
   {"VK_KHR_external_memory_win32", 1},
   {"VK_KHR_external_semaphore", 1},
   {"VK_KHR_external_semaphore_fd", 1},
   {"VK_KHR_external_semaphore_win32", 1},
   {"VK_KHR_format_feature_flags2", 1},
   {"VK_KHR_fragment_shading_rate", 2},
   {"VK_KHR_get_memory_requirements2", 1},
   {"VK_KHR_image_format_list", 1},
   {"VK_KHR_imageless_framebuffer", 1},
   {"VK_KHR_incremental_present", 2},
   {"VK_KHR_maintenance1", 2},
   {"VK_KHR_maintenance2", 1},
   {"VK_KHR_maintenance3", 1},
   {"VK_KHR_maintenance4", 1},
   {"VK_KHR_multiview", 1},
   {"VK_KHR_performance_query", 1},
   {"VK_KHR_pipeline_executable_properties", 1},
   {"VK_KHR_pipeline_library", 1},
   {"VK_KHR_portability_subset", 1},
   {"VK_KHR_present_id", 1},
   {"VK_KHR_present_wait", 1},
   {"VK_KHR_push_descriptor", 2},
   {"VK_KHR_ray_query", 1},
   {"VK_KHR_ray_tracing_pipeline", 1},
   {"VK_KHR_relaxed_block_layout", 1},
   {"VK_KHR_sampler_mirror_clamp_to_edge", 3},
   {"VK_KHR_sampler_ycbcr_conversion", 14},
   {"VK_KHR_separate_depth_stencil_layouts", 1},
   {"VK_KHR_shader_atomic_int64", 1},
   {"VK_KHR_shader_clock", 1},
   {"VK_KHR_shader_draw_parameters", 1},
   {"VK_KHR_shader_float16_int8", 1},
   {"VK_KHR_shader_float_controls", 4},
   {"VK_KHR_shader_integer_dot_product", 1},
   {"VK_KHR_shader_non_semantic_info", 1},
   {"VK_KHR_shader_subgroup_extended_types", 1},
   {"VK_KHR_shader_subgroup_uniform_control_flow", 1},
   {"VK_KHR_shader_terminate_invocation", 1},
   {"VK_KHR_shared_presentable_image", 1},
   {"VK_KHR_spirv_1_4", 1},
   {"VK_KHR_storage_buffer_storage_class", 1},
   {"VK_KHR_swapchain", 70},
   {"VK_KHR_swapchain_mutable_format", 1},
   {"VK_KHR_synchronization2", 1},
   {"VK_KHR_timeline_semaphore", 2},
   {"VK_KHR_uniform_buffer_standard_layout", 1},
   {"VK_KHR_variable_pointers", 1},
   {"VK_KHR_video_decode_queue", 2},
   {"VK_KHR_video_encode_queue", 3},
   {"VK_KHR_video_queue", 2},
   {"VK_KHR_vulkan_memory_model", 3},
   {"VK_KHR_win32_keyed_mutex", 1},
   {"VK_KHR_workgroup_memory_explicit_layout", 1},
   {"VK_KHR_zero_initialize_workgroup_memory", 1},
   {"VK_EXT_4444_formats", 1},
   {"VK_EXT_astc_decode_mode", 1},
   {"VK_EXT_blend_operation_advanced", 2},
   {"VK_EXT_buffer_device_address", 2},
   {"VK_EXT_calibrated_timestamps", 2},
   {"VK_EXT_color_write_enable", 1},
   {"VK_EXT_conditional_rendering", 2},
   {"VK_EXT_conservative_rasterization", 1},
   {"VK_EXT_custom_border_color", 12},
   {"VK_EXT_debug_marker", 4},
   {"VK_EXT_depth_clip_enable", 1},
   {"VK_EXT_depth_range_unrestricted", 1},
   {"VK_EXT_descriptor_indexing", 2},
   {"VK_EXT_device_memory_report", 2},
   {"VK_EXT_discard_rectangles", 1},
   {"VK_EXT_display_control", 1},
   {"VK_EXT_extended_dynamic_state", 1},
   {"VK_EXT_extended_dynamic_state2", 1},
   {"VK_EXT_external_memory_dma_buf", 1},
   {"VK_EXT_external_memory_host", 1},
   {"VK_EXT_filter_cubic", 3},
   {"VK_EXT_fragment_density_map", 2},
   {"VK_EXT_fragment_density_map2", 1},
   {"VK_EXT_fragment_shader_interlock", 1},
   {"VK_EXT_full_screen_exclusive", 4},
   {"VK_EXT_global_priority", 2},
   {"VK_EXT_global_priority_query", 1},
   {"VK_EXT_hdr_metadata", 2},
   {"VK_EXT_host_query_reset", 1},
   {"VK_EXT_image_drm_format_modifier", 2},
   {"VK_EXT_image_robustness", 1},
   {"VK_EXT_index_type_uint8", 1},
   {"VK_EXT_inline_uniform_block", 1},
   {"VK_EXT_line_rasterization", 1},
   {"VK_EXT_load_store_op_none", 1},
   {"VK_EXT_memory_budget", 1},
   {"VK_EXT_memory_priority", 1},
   {"VK_EXT_multi_draw", 1},
   {"VK_EXT_pageable_device_local_memory", 1},
   {"VK_EXT_pci_bus_info", 2},
   {"VK_EXT_physical_device_drm", 1},
   {"VK_EXT_pipeline_creation_cache_control", 3},
   {"VK_EXT_pipeline_creation_feedback", 1},
   {"VK_EXT_post_depth_coverage", 1},
   {"VK_EXT_primitive_topology_list_restart", 1},
   {"VK_EXT_private_data", 1},
   {"VK_EXT_provoking_vertex", 1},
   {"VK_EXT_queue_family_foreign", 1},
   {"VK_EXT_rgba10x6_formats", 1},
   {"VK_EXT_robustness2", 1},
   {"VK_EXT_sample_locations", 1},
   {"VK_EXT_sampler_filter_minmax", 2},
   {"VK_EXT_scalar_block_layout", 1},
   {"VK_EXT_separate_stencil_usage", 1},
   {"VK_EXT_shader_atomic_float", 1},
   {"VK_EXT_shader_atomic_float2", 1},
   {"VK_EXT_shader_demote_to_helper_invocation", 1},
   {"VK_EXT_shader_image_atomic_int64", 1},
   {"VK_EXT_shader_stencil_export", 1},
   {"VK_EXT_shader_subgroup_ballot", 1},
   {"VK_EXT_shader_subgroup_vote", 1},
   {"VK_EXT_shader_viewport_index_layer", 1},
   {"VK_EXT_subgroup_size_control", 2},
   {"VK_EXT_texel_buffer_alignment", 1},
   {"VK_EXT_texture_compression_astc_hdr", 1},
   {"VK_EXT_tooling_info", 1},
   {"VK_EXT_transform_feedback", 1},
   {"VK_EXT_validation_cache", 1},
   {"VK_EXT_vertex_attribute_divisor", 3},
   {"VK_EXT_vertex_input_dynamic_state", 2},
   {"VK_EXT_video_decode_h264", 3},
   {"VK_EXT_video_decode_h265", 1},
   {"VK_EXT_video_encode_h264", 2},
   {"VK_EXT_ycbcr_2plane_444_formats", 1},
   {"VK_EXT_ycbcr_image_arrays", 1},
   {"VK_AMD_buffer_marker", 1},
   {"VK_AMD_device_coherent_memory", 1},
   {"VK_AMD_display_native_hdr", 1},
   {"VK_AMD_draw_indirect_count", 2},
   {"VK_AMD_gcn_shader", 1},
   {"VK_AMD_gpu_shader_half_float", 2},
   {"VK_AMD_gpu_shader_int16", 2},
   {"VK_AMD_memory_overallocation_behavior", 1},
   {"VK_AMD_mixed_attachment_samples", 1},
   {"VK_AMD_negative_viewport_height", 1},
   {"VK_AMD_pipeline_compiler_control", 1},
   {"VK_AMD_rasterization_order", 1},
   {"VK_AMD_shader_ballot", 1},
   {"VK_AMD_shader_core_properties", 2},
   {"VK_AMD_shader_core_properties2", 1},
   {"VK_AMD_shader_explicit_vertex_parameter", 1},
   {"VK_AMD_shader_fragment_mask", 1},
   {"VK_AMD_shader_image_load_store_lod", 1},
   {"VK_AMD_shader_info", 1},
   {"VK_AMD_shader_trinary_minmax", 1},
   {"VK_AMD_texture_gather_bias_lod", 1},
   {"VK_ANDROID_external_memory_android_hardware_buffer", 4},
   {"VK_ANDROID_native_buffer", 8},
   {"VK_FUCHSIA_buffer_collection", 2},
   {"VK_FUCHSIA_external_memory", 1},
   {"VK_FUCHSIA_external_semaphore", 1},
   {"VK_GGP_frame_token", 1},
   {"VK_GOOGLE_decorate_string", 1},
   {"VK_GOOGLE_display_timing", 1},
   {"VK_GOOGLE_hlsl_functionality1", 1},
   {"VK_GOOGLE_user_type", 1},
   {"VK_HUAWEI_invocation_mask", 1},
   {"VK_HUAWEI_subpass_shading", 2},
   {"VK_IMG_filter_cubic", 1},
   {"VK_IMG_format_pvrtc", 1},
   {"VK_INTEL_performance_query", 2},
   {"VK_INTEL_shader_integer_functions2", 1},
   {"VK_NVX_binary_import", 1},
   {"VK_NVX_image_view_handle", 2},
   {"VK_NVX_multiview_per_view_attributes", 1},
   {"VK_NV_acquire_winrt_display", 1},
   {"VK_NV_clip_space_w_scaling", 1},
   {"VK_NV_compute_shader_derivatives", 1},
   {"VK_NV_cooperative_matrix", 1},
   {"VK_NV_corner_sampled_image", 2},
   {"VK_NV_coverage_reduction_mode", 1},
   {"VK_NV_dedicated_allocation", 1},
   {"VK_NV_dedicated_allocation_image_aliasing", 1},
   {"VK_NV_device_diagnostic_checkpoints", 2},
   {"VK_NV_device_diagnostics_config", 1},
   {"VK_NV_device_generated_commands", 3},
   {"VK_NV_external_memory", 1},
   {"VK_NV_external_memory_rdma", 1},
   {"VK_NV_external_memory_win32", 1},
   {"VK_NV_fill_rectangle", 1},
   {"VK_NV_fragment_coverage_to_color", 1},
   {"VK_NV_fragment_shader_barycentric", 1},
   {"VK_NV_fragment_shading_rate_enums", 1},
   {"VK_NV_framebuffer_mixed_samples", 1},
   {"VK_NV_geometry_shader_passthrough", 1},
   {"VK_NV_glsl_shader", 1},
   {"VK_NV_inherited_viewport_scissor", 1},
   {"VK_NV_mesh_shader", 1},
   {"VK_NV_ray_tracing", 3},
   {"VK_NV_ray_tracing_motion_blur", 1},
   {"VK_NV_representative_fragment_test", 2},
   {"VK_NV_sample_mask_override_coverage", 1},
   {"VK_NV_scissor_exclusive", 1},
   {"VK_NV_shader_image_footprint", 2},
   {"VK_NV_shader_sm_builtins", 1},
   {"VK_NV_shader_subgroup_partitioned", 1},
   {"VK_NV_shading_rate_image", 3},
   {"VK_NV_viewport_array2", 1},
   {"VK_NV_viewport_swizzle", 1},
   {"VK_NV_win32_keyed_mutex", 2},
   {"VK_QCOM_render_pass_shader_resolve", 4},
   {"VK_QCOM_render_pass_store_ops", 2},
   {"VK_QCOM_render_pass_transform", 2},
   {"VK_QCOM_rotated_copy_commands", 1},
   {"VK_VALVE_mutable_descriptor_type", 1},
};

#ifdef ANDROID
const struct vk_instance_extension_table vk_android_allowed_instance_extensions = {
   .KHR_android_surface = ANDROID_API_LEVEL >= 26,
   .KHR_device_group_creation = ANDROID_API_LEVEL >= 28,
   .KHR_display = ANDROID_API_LEVEL >= 26,
   .KHR_external_fence_capabilities = ANDROID_API_LEVEL >= 28,
   .KHR_external_memory_capabilities = ANDROID_API_LEVEL >= 28,
   .KHR_external_semaphore_capabilities = ANDROID_API_LEVEL >= 28,
   .KHR_get_display_properties2 = ANDROID_API_LEVEL >= 29,
   .KHR_get_physical_device_properties2 = ANDROID_API_LEVEL >= 26,
   .KHR_get_surface_capabilities2 = ANDROID_API_LEVEL >= 26,
   .KHR_surface = ANDROID_API_LEVEL >= 26,
   .KHR_surface_protected_capabilities = ANDROID_API_LEVEL >= 29,
   .KHR_wayland_surface = ANDROID_API_LEVEL >= 26,
   .KHR_win32_surface = ANDROID_API_LEVEL >= 26,
   .KHR_xcb_surface = ANDROID_API_LEVEL >= 26,
   .KHR_xlib_surface = ANDROID_API_LEVEL >= 26,
   .EXT_acquire_drm_display = true,
   .EXT_acquire_xlib_display = true,
   .EXT_debug_report = true,
   .EXT_debug_utils = true,
   .EXT_direct_mode_display = true,
   .EXT_directfb_surface = true,
   .EXT_display_surface_counter = true,
   .EXT_headless_surface = true,
   .EXT_metal_surface = true,
   .EXT_swapchain_colorspace = true,
   .EXT_validation_features = true,
   .EXT_validation_flags = true,
   .FUCHSIA_imagepipe_surface = true,
   .GGP_stream_descriptor_surface = true,
   .MVK_ios_surface = true,
   .MVK_macos_surface = true,
   .NN_vi_surface = true,
   .NV_external_memory_capabilities = true,
   .QNX_screen_surface = true,
};

extern const struct vk_device_extension_table vk_android_allowed_device_extensions = {
   .KHR_8bit_storage = ANDROID_API_LEVEL >= 29,
   .KHR_16bit_storage = ANDROID_API_LEVEL >= 28,
   .KHR_acceleration_structure = false,
   .KHR_bind_memory2 = ANDROID_API_LEVEL >= 28,
   .KHR_buffer_device_address = false,
   .KHR_copy_commands2 = false,
   .KHR_create_renderpass2 = ANDROID_API_LEVEL >= 28,
   .KHR_dedicated_allocation = ANDROID_API_LEVEL >= 28,
   .KHR_deferred_host_operations = false,
   .KHR_depth_stencil_resolve = ANDROID_API_LEVEL >= 29,
   .KHR_descriptor_update_template = ANDROID_API_LEVEL >= 26,
   .KHR_device_group = ANDROID_API_LEVEL >= 28,
   .KHR_display_swapchain = ANDROID_API_LEVEL >= 26,
   .KHR_draw_indirect_count = ANDROID_API_LEVEL >= 28,
   .KHR_driver_properties = ANDROID_API_LEVEL >= 28,
   .KHR_external_fence = ANDROID_API_LEVEL >= 28,
   .KHR_external_fence_fd = ANDROID_API_LEVEL >= 28,
   .KHR_external_fence_win32 = ANDROID_API_LEVEL >= 28,
   .KHR_external_memory = ANDROID_API_LEVEL >= 28,
   .KHR_external_memory_fd = ANDROID_API_LEVEL >= 28,
   .KHR_external_memory_win32 = ANDROID_API_LEVEL >= 28,
   .KHR_external_semaphore = ANDROID_API_LEVEL >= 28,
   .KHR_external_semaphore_fd = ANDROID_API_LEVEL >= 28,
   .KHR_external_semaphore_win32 = ANDROID_API_LEVEL >= 28,
   .KHR_format_feature_flags2 = false,
   .KHR_fragment_shading_rate = false,
   .KHR_get_memory_requirements2 = ANDROID_API_LEVEL >= 28,
   .KHR_image_format_list = ANDROID_API_LEVEL >= 28,
   .KHR_imageless_framebuffer = false,
   .KHR_incremental_present = ANDROID_API_LEVEL >= 26,
   .KHR_maintenance1 = ANDROID_API_LEVEL >= 26,
   .KHR_maintenance2 = ANDROID_API_LEVEL >= 28,
   .KHR_maintenance3 = ANDROID_API_LEVEL >= 28,
   .KHR_maintenance4 = false,
   .KHR_multiview = ANDROID_API_LEVEL >= 28,
   .KHR_performance_query = ANDROID_API_LEVEL >= 30,
   .KHR_pipeline_executable_properties = false,
   .KHR_pipeline_library = false,
   .KHR_portability_subset = false,
   .KHR_present_id = false,
   .KHR_present_wait = false,
   .KHR_push_descriptor = ANDROID_API_LEVEL >= 26,
   .KHR_ray_query = false,
   .KHR_ray_tracing_pipeline = false,
   .KHR_relaxed_block_layout = ANDROID_API_LEVEL >= 28,
   .KHR_sampler_mirror_clamp_to_edge = ANDROID_API_LEVEL >= 26,
   .KHR_sampler_ycbcr_conversion = ANDROID_API_LEVEL >= 28,
   .KHR_separate_depth_stencil_layouts = false,
   .KHR_shader_atomic_int64 = ANDROID_API_LEVEL >= 29,
   .KHR_shader_clock = false,
   .KHR_shader_draw_parameters = ANDROID_API_LEVEL >= 26,
   .KHR_shader_float16_int8 = ANDROID_API_LEVEL >= 29,
   .KHR_shader_float_controls = ANDROID_API_LEVEL >= 29,
   .KHR_shader_integer_dot_product = false,
   .KHR_shader_non_semantic_info = false,
   .KHR_shader_subgroup_extended_types = false,
   .KHR_shader_subgroup_uniform_control_flow = false,
   .KHR_shader_terminate_invocation = false,
   .KHR_shared_presentable_image = ANDROID_API_LEVEL >= 26,
   .KHR_spirv_1_4 = false,
   .KHR_storage_buffer_storage_class = ANDROID_API_LEVEL >= 28,
   .KHR_swapchain = ANDROID_API_LEVEL >= 26,
   .KHR_swapchain_mutable_format = ANDROID_API_LEVEL >= 29,
   .KHR_synchronization2 = false,
   .KHR_timeline_semaphore = false,
   .KHR_uniform_buffer_standard_layout = false,
   .KHR_variable_pointers = ANDROID_API_LEVEL >= 28,
   .KHR_video_decode_queue = false,
   .KHR_video_encode_queue = false,
   .KHR_video_queue = false,
   .KHR_vulkan_memory_model = ANDROID_API_LEVEL >= 29,
   .KHR_win32_keyed_mutex = ANDROID_API_LEVEL >= 28,
   .KHR_workgroup_memory_explicit_layout = false,
   .KHR_zero_initialize_workgroup_memory = false,
   .EXT_4444_formats = true,
   .EXT_astc_decode_mode = true,
   .EXT_blend_operation_advanced = true,
   .EXT_buffer_device_address = true,
   .EXT_calibrated_timestamps = true,
   .EXT_color_write_enable = true,
   .EXT_conditional_rendering = true,
   .EXT_conservative_rasterization = true,
   .EXT_custom_border_color = true,
   .EXT_debug_marker = true,
   .EXT_depth_clip_enable = true,
   .EXT_depth_range_unrestricted = true,
   .EXT_descriptor_indexing = true,
   .EXT_device_memory_report = true,
   .EXT_discard_rectangles = true,
   .EXT_display_control = true,
   .EXT_extended_dynamic_state = true,
   .EXT_extended_dynamic_state2 = true,
   .EXT_external_memory_dma_buf = true,
   .EXT_external_memory_host = true,
   .EXT_filter_cubic = true,
   .EXT_fragment_density_map = true,
   .EXT_fragment_density_map2 = true,
   .EXT_fragment_shader_interlock = true,
   .EXT_full_screen_exclusive = true,
   .EXT_global_priority = true,
   .EXT_global_priority_query = true,
   .EXT_hdr_metadata = true,
   .EXT_host_query_reset = true,
   .EXT_image_drm_format_modifier = true,
   .EXT_image_robustness = true,
   .EXT_index_type_uint8 = true,
   .EXT_inline_uniform_block = true,
   .EXT_line_rasterization = true,
   .EXT_load_store_op_none = true,
   .EXT_memory_budget = true,
   .EXT_memory_priority = true,
   .EXT_multi_draw = true,
   .EXT_pageable_device_local_memory = true,
   .EXT_pci_bus_info = true,
   .EXT_physical_device_drm = true,
   .EXT_pipeline_creation_cache_control = true,
   .EXT_pipeline_creation_feedback = true,
   .EXT_post_depth_coverage = true,
   .EXT_primitive_topology_list_restart = true,
   .EXT_private_data = true,
   .EXT_provoking_vertex = true,
   .EXT_queue_family_foreign = true,
   .EXT_rgba10x6_formats = true,
   .EXT_robustness2 = true,
   .EXT_sample_locations = true,
   .EXT_sampler_filter_minmax = true,
   .EXT_scalar_block_layout = true,
   .EXT_separate_stencil_usage = true,
   .EXT_shader_atomic_float = true,
   .EXT_shader_atomic_float2 = true,
   .EXT_shader_demote_to_helper_invocation = true,
   .EXT_shader_image_atomic_int64 = true,
   .EXT_shader_stencil_export = true,
   .EXT_shader_subgroup_ballot = true,
   .EXT_shader_subgroup_vote = true,
   .EXT_shader_viewport_index_layer = true,
   .EXT_subgroup_size_control = true,
   .EXT_texel_buffer_alignment = true,
   .EXT_texture_compression_astc_hdr = true,
   .EXT_tooling_info = true,
   .EXT_transform_feedback = true,
   .EXT_validation_cache = true,
   .EXT_vertex_attribute_divisor = true,
   .EXT_vertex_input_dynamic_state = true,
   .EXT_video_decode_h264 = true,
   .EXT_video_decode_h265 = true,
   .EXT_video_encode_h264 = true,
   .EXT_ycbcr_2plane_444_formats = true,
   .EXT_ycbcr_image_arrays = true,
   .AMD_buffer_marker = true,
   .AMD_device_coherent_memory = true,
   .AMD_display_native_hdr = true,
   .AMD_draw_indirect_count = true,
   .AMD_gcn_shader = true,
   .AMD_gpu_shader_half_float = true,
   .AMD_gpu_shader_int16 = true,
   .AMD_memory_overallocation_behavior = true,
   .AMD_mixed_attachment_samples = true,
   .AMD_negative_viewport_height = true,
   .AMD_pipeline_compiler_control = true,
   .AMD_rasterization_order = true,
   .AMD_shader_ballot = true,
   .AMD_shader_core_properties = true,
   .AMD_shader_core_properties2 = true,
   .AMD_shader_explicit_vertex_parameter = true,
   .AMD_shader_fragment_mask = true,
   .AMD_shader_image_load_store_lod = true,
   .AMD_shader_info = true,
   .AMD_shader_trinary_minmax = true,
   .AMD_texture_gather_bias_lod = true,
   .ANDROID_external_memory_android_hardware_buffer = ANDROID_API_LEVEL >= 28,
   .ANDROID_native_buffer = ANDROID_API_LEVEL >= 26,
   .FUCHSIA_buffer_collection = true,
   .FUCHSIA_external_memory = true,
   .FUCHSIA_external_semaphore = true,
   .GGP_frame_token = true,
   .GOOGLE_decorate_string = false,
   .GOOGLE_display_timing = ANDROID_API_LEVEL >= 26,
   .GOOGLE_hlsl_functionality1 = false,
   .GOOGLE_user_type = false,
   .HUAWEI_invocation_mask = true,
   .HUAWEI_subpass_shading = true,
   .IMG_filter_cubic = true,
   .IMG_format_pvrtc = true,
   .INTEL_performance_query = true,
   .INTEL_shader_integer_functions2 = true,
   .NVX_binary_import = true,
   .NVX_image_view_handle = true,
   .NVX_multiview_per_view_attributes = true,
   .NV_acquire_winrt_display = true,
   .NV_clip_space_w_scaling = true,
   .NV_compute_shader_derivatives = true,
   .NV_cooperative_matrix = true,
   .NV_corner_sampled_image = true,
   .NV_coverage_reduction_mode = true,
   .NV_dedicated_allocation = true,
   .NV_dedicated_allocation_image_aliasing = true,
   .NV_device_diagnostic_checkpoints = true,
   .NV_device_diagnostics_config = true,
   .NV_device_generated_commands = true,
   .NV_external_memory = true,
   .NV_external_memory_rdma = true,
   .NV_external_memory_win32 = true,
   .NV_fill_rectangle = true,
   .NV_fragment_coverage_to_color = true,
   .NV_fragment_shader_barycentric = true,
   .NV_fragment_shading_rate_enums = true,
   .NV_framebuffer_mixed_samples = true,
   .NV_geometry_shader_passthrough = true,
   .NV_glsl_shader = true,
   .NV_inherited_viewport_scissor = true,
   .NV_mesh_shader = true,
   .NV_ray_tracing = true,
   .NV_ray_tracing_motion_blur = true,
   .NV_representative_fragment_test = true,
   .NV_sample_mask_override_coverage = true,
   .NV_scissor_exclusive = true,
   .NV_shader_image_footprint = true,
   .NV_shader_sm_builtins = true,
   .NV_shader_subgroup_partitioned = true,
   .NV_shading_rate_image = true,
   .NV_viewport_array2 = true,
   .NV_viewport_swizzle = true,
   .NV_win32_keyed_mutex = true,
   .QCOM_render_pass_shader_resolve = true,
   .QCOM_render_pass_store_ops = true,
   .QCOM_render_pass_transform = true,
   .QCOM_rotated_copy_commands = true,
   .VALVE_mutable_descriptor_type = true,
};
#endif

