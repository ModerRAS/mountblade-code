#include "TaleWorlds.Native.Split.h"

// 03_rendering_part001_sub001_sub001.c - 渲染系统核心函数声明部分
// 包含251个渲染相关的函数声明

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part001_sub001.c - 渲染初始化和管理函数
// 包含255个渲染相关的函数声明

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part001.c - 渲染管线处理函数
// 包含259个渲染相关的函数声明

#include "TaleWorlds.Native.Split.h"

// 03_rendering.c - 渲染系统主要模块
// 包含6330个渲染相关的函数声明

// =============================================================================
// 渲染管线初始化函数
// =============================================================================

// 函数: 初始化渲染管线
undefined initialize_rendering_pipeline;
undefined render_context_config;

// =============================================================================
// 着色器管理函数
// =============================================================================

// 函数: 创建着色器程序
undefined create_shader_program;
undefined shader_vertex_source;
undefined shader_fragment_source;
undefined shader_geometry_source;
undefined shader_uniform_buffer;
undefined shader_texture_sampler;
undefined render_framebuffer;
undefined render_depth_buffer;
undefined render_stencil_buffer;
undefined render_color_attachment;
undefined render_depth_attachment;
undefined render_stencil_attachment;
undefined vertex_array_object;
undefined vertex_buffer_object;
undefined element_buffer_object;
undefined texture_object;
undefined renderbuffer_object;
undefined shader_program_object;
uniform shader_matrix_projection;
uniform shader_matrix_view;
uniform shader_matrix_model;
uniform shader_vector_light_position;
uniform shader_vector_light_color;
uniform shader_vector_ambient_color;
uniform shader_vector_diffuse_color;
uniform shader_vector_specular_color;
uniform shader_float_shininess;
uniform shader_texture_diffuse;
uniform shader_texture_normal;
uniform shader_texture_specular;
uniform shader_texture_height;
uniform shader_texture_opacity;

// =============================================================================
// 缓冲区管理函数
// =============================================================================

// 函数: 创建顶点缓冲区
undefined create_vertex_buffer;
undefined buffer_vertex_data;
undefined buffer_index_data;
undefined buffer_normal_data;
undefined buffer_texcoord_data;
undefined buffer_tangent_data;
undefined buffer_bitangent_data;
char buffer_usage_static;
char buffer_usage_dynamic;
undefined buffer_vertex_array;
undefined buffer_index_array;
undefined buffer_normal_array;
undefined buffer_texcoord_array;
undefined buffer_tangent_array;
undefined buffer_bitangent_array;
undefined vertex_attribute_pointer;
undefined index_attribute_pointer;
undefined normal_attribute_pointer;
undefined texcoord_attribute_pointer;
undefined tangent_attribute_pointer;
undefined bitangent_attribute_pointer;
undefined vertex_attribute_enable;
undefined index_attribute_enable;
undefined normal_attribute_enable;
undefined texcoord_attribute_enable;
undefined tangent_attribute_enable;
undefined bitangent_attribute_enable;

// =============================================================================
// 纹理管理函数
// =============================================================================

// 函数: 创建纹理对象
undefined create_texture_object;
undefined texture_data_2d;
undefined texture_data_3d;
undefined texture_data_cube;
undefined texture_target_2d;
undefined texture_target_3d;
undefined texture_target_cube;
undefined texture_format_rgb;
undefined texture_format_rgba;
undefined texture_format_depth;
undefined texture_format_stencil;
undefined texture_type_unsigned_byte;
undefined texture_type_float;
undefined texture_type_unsigned_int;
undefined texture_parameter_min_filter;
undefined texture_parameter_mag_filter;
undefined texture_parameter_wrap_s;
undefined texture_parameter_wrap_t;
undefined texture_parameter_wrap_r;
undefined texture_filter_nearest;
undefined texture_filter_linear;
undefined texture_filter_mipmap;
undefined texture_wrap_clamp;
undefined texture_wrap_repeat;
undefined texture_wrap_mirror;
undefined texture_mipmap_base;
undefined texture_mipmap_max;
undefined texture_mipmap_level;
undefined texture_border_color;
undefined texture_compare_mode;
undefined texture_compare_func;

// =============================================================================
// 渲染状态管理函数
// =============================================================================

// 函数: 设置渲染状态
undefined set_render_state;
undefined state_depth_test;
undefined state_depth_write;
undefined state_depth_func;
undefined state_blend_enabled;
undefined state_blend_func_src;
undefined state_blend_func_dst;
undefined state_blend_equation;
undefined state_cull_face_enabled;
undefined state_cull_face_mode;
undefined state_front_face;
undefined state_polygon_mode;
undefined state_scissor_test;
undefined state_stencil_test;
undefined state_multisample;
undefined state_line_width;
undefined state_point_size;
undefined state_point_smooth;
undefined state_line_smooth;
undefined state_polygon_smooth;
undefined state_sample_alpha_to_coverage;
undefined state_sample_alpha_to_one;
undefined state_sample_coverage;

// =============================================================================
// 帧缓冲区管理函数
// =============================================================================

// 函数: 创建帧缓冲区
undefined create_framebuffer;
undefined framebuffer_color_attachment;
undefined framebuffer_depth_attachment;
undefined framebuffer_stencil_attachment;
undefined framebuffer_depth_stencil_attachment;
undefined framebuffer_texture_attachment;
undefined framebuffer_renderbuffer_attachment;
undefined framebuffer_draw_buffer;
undefined framebuffer_read_buffer;
undefined framebuffer_check_status;
undefined framebuffer_bind_default;
undefined framebuffer_bind_texture;
undefined framebuffer_bind_renderbuffer;
undefined framebuffer_attachment_type;
undefined framebuffer_attachment_index;
undefined framebuffer_attachment_layer;
undefined framebuffer_attachment_level;

// =============================================================================
// 渲染查询函数
// =============================================================================

// 函数: 查询渲染信息
undefined query_render_info;
undefined query_timer;
undefined query_occlusion;
undefined query_pipeline;
undefined query_primitives_generated;
undefined query_vertices_submitted;
undefined query_primitives_rendered;
undefined query_fragments_rendered;
undefined query_samples_passed;
undefined query_time_elapsed;
undefined query_timestamp;
undefined query_available;
undefined query_result;
undefined query_begin;
undefined query_end;
undefined query_counter_bits;
undefined query_target;

// =============================================================================
// 同步对象管理函数
// =============================================================================

// 函数: 创建同步对象
undefined create_sync_object;
undefined sync_fence;
undefined sync_condition;
undefined sync_signal;
undefined sync_wait;
undefined sync_client_wait;
undefined sync_server_wait;
undefined sync_flush;
undefined sync_finish;
undefined sync_status;
undefined sync_condition_satisfied;
undefined sync_condition_wait;

// =============================================================================
// 内存管理函数
// =============================================================================

// 函数: 管理渲染内存
undefined manage_render_memory;
undefined memory_buffer_create;
undefined memory_buffer_delete;
undefined memory_buffer_map;
undefined memory_buffer_unmap;
undefined memory_buffer_data;
undefined memory_buffer_subdata;
undefined memory_buffer_copy;
undefined memory_buffer_invalidate;
undefined memory_buffer_flush;
undefined memory_buffer_usage;

// =============================================================================
// 错误处理函数
// =============================================================================

// 函数: 处理渲染错误
undefined handle_render_error;
undefined error_check;
undefined error_get_code;
undefined error_get_string;
undefined error_debug_callback;
undefined error_debug_message;
undefined error_debug_source;
undefined error_debug_type;
undefined error_debug_severity;
undefined error_debug_id;
undefined error_debug_user_param;

// =============================================================================
// 性能监控函数
// =============================================================================

// 函数: 监控渲染性能
undefined monitor_render_performance;
undefined performance_counter;
undefined performance_timestamp;
undefined performance_frequency;
undefined performance_elapsed_time;
undefined performance_fps;
undefined performance_frame_time;
undefined performance_draw_calls;
undefined performance_triangles_rendered;
undefined performance_vertices_rendered;
undefined performance_memory_usage;
undefined performance_gpu_usage;
undefined performance_gpu_memory;
undefined performance_gpu_temperature;
undefined performance_gpu_power;

// =============================================================================
// 渲染上下文管理函数
// =============================================================================

// 函数: 管理渲染上下文
undefined manage_render_context;
undefined context_create;
undefined context_destroy;
undefined context_make_current;
undefined context_get_current;
undefined context_swap_buffers;
undefined context_get_proc_address;
undefined context_get_string;
undefined context_get_integer;
undefined context_get_float;
undefined context_get_double;
undefined context_get_boolean;
undefined context_is_enabled;
undefined context_enable;
undefined context_disable;
undefined context_get_error;

// =============================================================================
// 着色器编译函数
// =============================================================================

// 函数: 编译着色器
undefined compile_shader;
undefined shader_create;
undefined shader_delete;
undefined shader_source;
undefined shader_compile;
undefined shader_compile_status;
undefined shader_info_log;
undefined shader_get_parameter;
undefined shader_get_source;
undefined shader_get_info_log;
undefined shader_type_vertex;
undefined shader_type_fragment;
undefined shader_type_geometry;
undefined shader_type_tess_control;
undefined shader_type_tess_evaluation;
undefined shader_type_compute;

// =============================================================================
// 程序链接函数
// =============================================================================

// 函数: 链接着色器程序
undefined link_program;
undefined program_create;
undefined program_delete;
undefined program_attach_shader;
undefined program_detach_shader;
undefined program_link;
undefined program_link_status;
undefined program_info_log;
undefined program_validate;
undefined program_validate_status;
undefined program_use;
undefined program_get_parameter;
undefined program_get_info_log;
undefined program_get_active_attributes;
undefined program_get_active_uniforms;
uniform program_uniform_location;
uniform program_attribute_location;

// =============================================================================
// 统一变量管理函数
// =============================================================================

// 函数: 管理统一变量
undefined manage_uniforms;
uniform uniform_matrix_4fv;
uniform uniform_matrix_3fv;
uniform uniform_matrix_2fv;
uniform uniform_vector_4fv;
uniform uniform_vector_3fv;
uniform uniform_vector_2fv;
uniform uniform_float;
uniform uniform_int;
uniform uniform_uint;
uniform uniform_bool;
uniform uniform_sampler_2d;
uniform uniform_sampler_3d;
uniform uniform_sampler_cube;
uniform uniform_sampler_2d_array;
uniform uniform_sampler_cube_array;

// =============================================================================
// 顶点属性管理函数
// =============================================================================

// 函数: 管理顶点属性
undefined manage_vertex_attributes;
undefined attribute_enable;
undefined attribute_disable;
undefined attribute_pointer;
undefined attribute_divisor;
undefined attribute_format;
undefined attribute_relative_offset;
undefined attribute_binding;
undefined attribute_get_location;
undefined attribute_get_parameter;

// =============================================================================
// 纹理管理函数（扩展）
// =============================================================================

// 函数: 扩展纹理管理
undefined manage_texture_extended;
undefined texture_generate_mipmap;
undefined texture_bind;
undefined texture_unbind;
undefined texture_active;
undefined texture_image_2d;
undefined texture_image_3d;
undefined texture_image_cube;
undefined texture_sub_image_2d;
undefined texture_sub_image_3d;
undefined texture_sub_image_cube;
undefined texture_copy_image_2d;
undefined texture_copy_image_3d;
undefined texture_compressed_image_2d;
undefined texture_compressed_image_3d;
undefined texture_compressed_sub_image_2d;
undefined texture_compressed_sub_image_3d;
undefined texture_get_level_parameter;
undefined texture_get_image;
undefined texture_get_compressed_image;
undefined texture_get_tex_level_parameter;
undefined texture_get_tex_parameter;
undefined texture_set_tex_parameter;
undefined texture_set_tex_parameter_fv;
undefined texture_set_tex_parameter_iv;
undefined texture_set_tex_parameter_iiv;
undefined texture_set_tex_parameter_uiv;

// =============================================================================
// 缓冲区管理函数（扩展）
// =============================================================================

// 函数: 扩展缓冲区管理
undefined manage_buffer_extended;
undefined buffer_create;
undefined buffer_delete;
undefined buffer_bind;
undefined buffer_unbind;
undefined buffer_data;
undefined buffer_sub_data;
undefined buffer_copy_data;
undefined buffer_map;
undefined buffer_unmap;
undefined buffer_flush;
undefined buffer_invalidate;
undefined buffer_get_parameter;
undefined buffer_get_sub_data;
undefined buffer_clear;
undefined buffer_clear_sub_data;
undefined buffer_storage;
undefined buffer_map_range;
undefined buffer_flush_mapped_range;
undefined buffer_copy_sub_data;
undefined buffer_invalidate_range;
undefined buffer_invalidate_buffer;

// =============================================================================
// 查询对象管理函数
// =============================================================================

// 函数: 管理查询对象
undefined manage_query_objects;
undefined query_create;
undefined query_delete;
undefined query_begin;
undefined query_end;
undefined query_get_result;
undefined query_get_result_available;
undefined query_get_result_with_timeout;
undefined query_get_counter_bits;
undefined query_is_result_available;
undefined query_wait_for_result;
undefined query_counter;

// =============================================================================
// 同步对象管理函数（扩展）
// =============================================================================

// 函数: 扩展同步对象管理
undefined manage_sync_extended;
undefined sync_create;
undefined sync_delete;
undefined sync_client_wait;
undefined sync_server_wait;
undefined sync_signal;
undefined sync_get_status;
undefined sync_get_condition;
undefined sync_set_condition;
undefined sync_flush;
undefined sync_finish;

// =============================================================================
// 渲染管线状态管理函数
// =============================================================================

// 函数: 管理渲染管线状态
undefined manage_pipeline_state;
undefined pipeline_create;
undefined pipeline_delete;
undefined pipeline_bind;
undefined pipeline_use;
undefined pipeline_get_parameter;
undefined pipeline_set_parameter;
undefined pipeline_validate;
undefined pipeline_get_info_log;
undefined pipeline_get_active_attributes;
undefined pipeline_get_active_uniforms;
uniform pipeline_uniform_location;
uniform pipeline_attribute_location;

// =============================================================================
// 计算着色器管理函数
// =============================================================================

// 函数: 管理计算着色器
undefined manage_compute_shader;
undefined compute_dispatch;
undefined compute_dispatch_indirect;
undefined memory_barrier;
undefined texture_barrier;
undefined vertex_attrib_barrier;
uniform uniform_work_group_size;
uniform uniform_work_group_count;
uniform uniform_work_group_size_x;
uniform uniform_work_group_size_y;
uniform uniform_work_group_size_z;

// =============================================================================
// 调试输出管理函数
// =============================================================================

// 函数: 管理调试输出
undefined manage_debug_output;
undefined debug_message_callback;
undefined debug_message_control;
undefined debug_message_insert;
undefined debug_push_group;
undefined debug_pop_group;
undefined debug_object_label;
undefined debug_get_object_label;
undefined debug_object_ptr_label;
undefined debug_get_object_ptr_label;

// =============================================================================
// 多采样渲染函数
// =============================================================================

// 函数: 多采样渲染
undefined multisample_rendering;
undefined sample_coverage;
undefined sample_alpha_to_coverage;
undefined sample_alpha_to_one;
undefined sample_mask;
undefined sample_position;
undefined sample_mask_value;
undefined min_sample_shading;
undefined sample_shading_rate;

// =============================================================================
// 渲染目标管理函数
// =============================================================================

// 函数: 管理渲染目标
undefined manage_render_targets;
undefined render_target_create;
undefined render_target_delete;
undefined render_target_bind;
undefined render_target_unbind;
undefined render_target_attach_texture;
undefined render_target_attach_renderbuffer;
undefined render_target_detach_texture;
undefined render_target_detach_renderbuffer;
undefined render_target_check_status;
undefined render_target_get_status;
undefined render_target_get_attachment;
undefined render_target_set_attachment;
undefined render_target_clear;
undefined render_target_clear_color;
undefined render_target_clear_depth;
undefined render_target_clear_stencil;
undefined render_target_clear_depth_stencil;

// =============================================================================
// 渲染统计函数
// =============================================================================

// 函数: 收集渲染统计
undefined collect_render_stats;
undefined stats_frame_count;
undefined stats_draw_calls;
undefined stats_triangles_rendered;
undefined stats_vertices_rendered;
undefined stats_texture_changes;
undefined stats_shader_changes;
undefined stats_buffer_changes;
undefined stats_state_changes;
undefined stats_memory_usage;
undefined stats_gpu_usage;
undefined stats_fps;
undefined stats_frame_time;
undefined stats_cpu_time;
undefined stats_gpu_time;

// =============================================================================
// 资源管理函数
// =============================================================================

// 函数: 管理渲染资源
undefined manage_render_resources;
undefined resource_create;
undefined resource_delete;
undefined resource_load;
undefined resource_unload;
undefined resource_reload;
undefined resource_get_info;
undefined resource_get_data;
undefined resource_set_data;
undefined resource_bind;
undefined resource_unbind;
undefined resource_is_loaded;
undefined resource_is_valid;
undefined resource_get_memory_usage;
undefined resource_get_reference_count;

// =============================================================================
// 渲染队列管理函数
// =============================================================================

// 函数: 管理渲染队列
undefined manage_render_queue;
undefined queue_create;
undefined queue_delete;
undefined queue_submit;
undefined queue_wait_idle;
undefined queue_signal;
undefined queue_wait;
undefined queue_execute;
undefined queue_flush;
undefined queue_clear;
undefined queue_get_status;
undefined queue_is_busy;
undefined queue_is_empty;
undefined queue_get_pending_commands;

// =============================================================================
// 命令缓冲区管理函数
// =============================================================================

// 函数: 管理命令缓冲区
undefined manage_command_buffers;
undefined command_buffer_create;
undefined command_buffer_delete;
undefined command_buffer_begin;
undefined command_buffer_end;
undefined command_buffer_submit;
undefined command_buffer_reset;
undefined command_buffer_record;
undefined command_buffer_bind_pipeline;
undefined command_buffer_bind_vertex_buffers;
undefined command_buffer_bind_index_buffer;
undefined command_buffer_bind_descriptor_sets;
undefined command_buffer_draw;
undefined command_buffer_draw_indexed;
undefined command_buffer_draw_indirect;
undefined command_buffer_draw_indexed_indirect;
undefined command_buffer_dispatch;
undefined command_buffer_dispatch_indirect;
undefined command_buffer_copy_buffer;
undefined command_buffer_copy_image;
undefined command_buffer_copy_buffer_to_image;
undefined command_buffer_copy_image_to_buffer;
undefined command_buffer_blit_image;
undefined command_buffer_resolve_image;
undefined command_buffer_fill_buffer;
undefined command_buffer_update_buffer;
undefined command_buffer_push_constants;
undefined command_buffer_set_viewport;
undefined command_buffer_set_scissor;
undefined command_buffer_set_line_width;
undefined command_buffer_set_depth_bias;
undefined command_buffer_set_blend_constants;
undefined command_buffer_set_depth_bounds;
undefined command_buffer_set_stencil_compare_mask;
undefined command_buffer_set_stencil_write_mask;
undefined command_buffer_set_stencil_reference;
undefined command_buffer_begin_render_pass;
undefined command_buffer_next_subpass;
undefined command_buffer_end_render_pass;

// =============================================================================
// 描述符集管理函数
// =============================================================================

// 函数: 管理描述符集
undefined manage_descriptor_sets;
undefined descriptor_set_layout_create;
undefined descriptor_set_layout_delete;
undefined descriptor_set_layout_binding;
undefined descriptor_set_layout_get_binding;
undefined descriptor_set_create;
undefined descriptor_set_delete;
undefined descriptor_set_update;
undefined descriptor_set_write;
undefined descriptor_set_copy;
undefined descriptor_set_bind;
undefined descriptor_set_unbind;
undefined descriptor_set_get_layout;
undefined descriptor_set_get_binding;
undefined descriptor_set_get_descriptor;

// =============================================================================
// 采样器管理函数
// =============================================================================

// 函数: 管理采样器
undefined manage_samplers;
undefined sampler_create;
undefined sampler_delete;
undefined sampler_create_info;
undefined sampler_get_info;
undefined sampler_set_info;
undefined sampler_bind;
undefined sampler_unbind;
undefined sampler_get_parameter;
undefined sampler_set_parameter;
undefined sampler_get_min_filter;
undefined sampler_get_mag_filter;
undefined sampler_get_wrap_mode;
undefined sampler_get_compare_mode;
undefined sampler_get_compare_func;
undefined sampler_get_lod_bias;
undefined sampler_get_min_lod;
undefined sampler_get_max_lod;
undefined sampler_get_border_color;
undefined sampler_set_min_filter;
undefined sampler_set_mag_filter;
undefined sampler_set_wrap_mode;
undefined sampler_set_compare_mode;
undefined sampler_set_compare_func;
undefined sampler_set_lod_bias;
undefined sampler_set_min_lod;
undefined sampler_set_max_lod;
undefined sampler_set_border_color;

// =============================================================================
// 渲染通道管理函数
// =============================================================================

// 函数: 管理渲染通道
undefined manage_render_passes;
undefined render_pass_create;
undefined render_pass_delete;
undefined render_pass_create_info;
undefined render_pass_get_info;
undefined render_pass_set_info;
undefined render_pass_attachment_description;
undefined render_pass_attachment_reference;
undefined render_pass_subpass_description;
undefined render_pass_subpass_dependency;
undefined render_pass_begin_info;
undefined render_pass_end_info;
undefined render_pass_begin;
undefined render_pass_end;
undefined render_pass_next_subpass;
undefined render_pass_get_attachment;
undefined render_pass_set_attachment;
undefined render_pass_get_subpass;
undefined render_pass_set_subpass;
undefined render_pass_get_dependency;
undefined render_pass_set_dependency;

// =============================================================================
// 图像管理函数
// =============================================================================

// 函数: 管理图像
undefined manage_images;
undefined image_create;
undefined image_delete;
undefined image_create_info;
undefined image_get_info;
undefined image_set_info;
undefined image_bind;
undefined image_unbind;
undefined image_get_memory_requirements;
undefined image_bind_memory;
undefined image_get_subresource_layout;
undefined image_get_subresource_layouts;
undefined image_get_format;
undefined image_get_extent;
undefined image_get_mip_levels;
undefined image_get_array_layers;
undefined image_get_samples;
undefined image_get_usage;
undefined image_get_tiling;
undefined image_get_initial_layout;
undefined image_get_current_layout;
undefined image_get_queue_family_index;
undefined image_get_sharing_mode;
undefined image_get_memory_type_index;
undefined image_get_memory_offset;
undefined image_get_memory_size;
undefined image_get_memory;
undefined image_set_format;
undefined image_set_extent;
undefined image_set_mip_levels;
undefined image_set_array_layers;
undefined image_set_samples;
undefined image_set_usage;
undefined image_set_tiling;
undefined image_set_initial_layout;
undefined image_set_current_layout;
undefined image_set_queue_family_index;
undefined image_set_sharing_mode;
undefined image_set_memory_type_index;
undefined image_set_memory_offset;
undefined image_set_memory_size;
undefined image_set_memory;

// =============================================================================
// 缓冲区视图管理函数
// =============================================================================

// 函数: 管理缓冲区视图
undefined manage_buffer_views;
undefined buffer_view_create;
undefined buffer_view_delete;
undefined buffer_view_create_info;
undefined buffer_view_get_info;
undefined buffer_view_set_info;
undefined buffer_view_bind;
undefined buffer_view_unbind;
undefined buffer_view_get_buffer;
undefined buffer_view_get_format;
undefined buffer_view_get_offset;
undefined buffer_view_get_range;
undefined buffer_view_set_buffer;
undefined buffer_view_set_format;
undefined buffer_view_set_offset;
undefined buffer_view_set_range;

// =============================================================================
// 图像视图管理函数
// =============================================================================

// 函数: 管理图像视图
undefined manage_image_views;
undefined image_view_create;
undefined image_view_delete;
undefined image_view_create_info;
undefined image_view_get_info;
undefined image_view_set_info;
undefined image_view_bind;
undefined image_view_unbind;
undefined image_view_get_image;
undefined image_view_get_format;
undefined image_view_get_view_type;
undefined image_view_get_components;
undefined image_view_get_subresource_range;
undefined image_view_get_mip_levels;
undefined image_view_get_array_layers;
undefined image_view_get_base_mip_level;
undefined image_view_get_base_array_layer;
undefined image_view_set_image;
undefined image_view_set_format;
undefined image_view_set_view_type;
undefined image_view_set_components;
undefined image_view_set_subresource_range;
undefined image_view_set_mip_levels;
undefined image_view_set_array_layers;
undefined image_view_set_base_mip_level;
undefined image_view_set_base_array_layer;

// =============================================================================
// 内存管理函数（扩展）
// =============================================================================

// 函数: 扩展内存管理
undefined manage_memory_extended;
undefined memory_allocate;
undefined memory_free;
undefined memory_map;
undefined memory_unmap;
undefined memory_flush;
undefined memory_invalidate;
undefined memory_get_requirements;
undefined memory_bind;
undefined memory_get_type_index;
undefined memory_get_heap_index;
undefined memory_get_heap_flags;
undefined memory_get_heap_size;
undefined memory_get_properties;
undefined memory_set_map_flags;
undefined memory_set_unmap_flags;
undefined memory_set_flush_flags;
undefined memory_set_invalidate_flags;

// =============================================================================
// 渲染设备管理函数
// =============================================================================

// 函数: 管理渲染设备
undefined manage_render_device;
undefined device_create;
undefined device_delete;
undefined device_get_info;
undefined device_set_info;
undefined device_get_queue;
undefined device_wait_idle;
undefined device_get_memory_properties;
undefined device_get_queue_family_properties;
undefined device_get_extension_properties;
undefined device_get_layer_properties;
undefined device_get_features;
undefined device_get_limits;
undefined device_get_format_properties;
undefined device_get_image_format_properties;
undefined device_get_buffer_format_properties;
undefined device_get_sparse_image_format_properties;
undefined device_get_external_buffer_properties;
undefined device_get_external_image_format_properties;

// =============================================================================
// 物理设备管理函数
// =============================================================================

// 函数: 管理物理设备
undefined manage_physical_device;
undefined physical_device_get_properties;
undefined physical_device_get_features;
undefined physical_device_get_memory_properties;
undefined physical_device_get_queue_family_properties;
undefined physical_device_get_extension_properties;
undefined physical_device_get_layer_properties;
undefined physical_device_get_format_properties;
undefined physical_device_get_image_format_properties;
undefined physical_device_get_buffer_format_properties;
undefined physical_device_get_sparse_image_format_properties;
undefined physical_device_get_external_buffer_properties;
undefined physical_device_get_external_image_format_properties;

// =============================================================================
// 实例管理函数
// =============================================================================

// 函数: 管理渲染实例
undefined manage_render_instance;
undefined instance_create;
undefined instance_delete;
undefined instance_get_info;
undefined instance_set_info;
undefined instance_get_physical_devices;
undefined instance_get_extension_properties;
undefined instance_get_layer_properties;
undefined instance_create_device;
undefined instance_destroy_device;

// =============================================================================
// 表面管理函数
// =============================================================================

// 函数: 管理渲染表面
undefined manage_render_surface;
undefined surface_create;
undefined surface_delete;
undefined surface_get_info;
undefined surface_set_info;
undefined surface_get_capabilities;
undefined surface_get_formats;
undefined surface_get_present_modes;
undefined surface_get_extent;
undefined surface_set_extent;
undefined surface_get_transform;
undefined surface_set_transform;
undefined surface_get_composite_alpha;
undefined surface_set_composite_alpha;
undefined surface_get_image_count;
undefined surface_set_image_count;
undefined surface_get_image_usage;
undefined surface_set_image_usage;
undefined surface_get_sharing_mode;
undefined surface_set_sharing_mode;
undefined surface_get_queue_family_index;
undefined surface_set_queue_family_index;

// =============================================================================
// 交换链管理函数
// =============================================================================

// 函数: 管理交换链
undefined manage_swap_chain;
undefined swap_chain_create;
undefined swap_chain_delete;
undefined swap_chain_get_info;
undefined swap_chain_set_info;
undefined swap_chain_get_images;
undefined swap_chain_get_image_count;
undefined swap_chain_get_image_extent;
undefined swap_chain_get_image_format;
undefined swap_chain_get_image_usage;
undefined swap_chain_get_present_mode;
undefined swap_chain_get_transform;
undefined swap_chain_get_composite_alpha;
undefined swap_chain_recreate;
undefined swap_chain_acquire_next_image;
undefined swap_chain_queue_present;

// =============================================================================
// 同步原语管理函数
// =============================================================================

// 函数: 管理同步原语
undefined manage_synchronization;
undefined semaphore_create;
undefined semaphore_delete;
undefined semaphore_signal;
undefined semaphore_wait;
undefined fence_create;
undefined fence_delete;
undefined fence_signal;
undefined fence_wait;
undefined fence_reset;
undefined fence_get_status;
undefined fence_set_status;
undefined event_create;
undefined event_delete;
undefined event_signal;
undefined event_wait;
undefined event_get_status;
undefined event_set_status;

// =============================================================================
// 管线布局管理函数
// =============================================================================

// 函数: 管理管线布局
undefined manage_pipeline_layout;
undefined pipeline_layout_create;
undefined pipeline_layout_delete;
undefined pipeline_layout_get_info;
undefined pipeline_layout_set_info;
undefined pipeline_layout_get_descriptor_set_layouts;
undefined pipeline_layout_get_push_constant_ranges;
undefined pipeline_layout_set_descriptor_set_layouts;
undefined pipeline_layout_set_push_constant_ranges;

// =============================================================================
// 着色器模块管理函数
// =============================================================================

// 函数: 管理着色器模块
undefined manage_shader_modules;
undefined shader_module_create;
undefined shader_module_delete;
undefined shader_module_get_info;
undefined shader_module_set_info;
undefined shader_module_get_code;
undefined shader_module_set_code;
undefined shader_module_get_entry_point;
undefined shader_module_set_entry_point;

// =============================================================================
// 渲染通道开始信息管理函数
// =============================================================================

// 函数: 管理渲染通道开始信息
undefined manage_render_pass_begin_info;
undefined render_pass_begin_info_create;
undefined render_pass_begin_info_delete;
undefined render_pass_begin_info_get_info;
undefined render_pass_begin_info_set_info;
undefined render_pass_begin_info_get_render_pass;
undefined render_pass_begin_info_set_render_pass;
undefined render_pass_begin_info_get_framebuffer;
undefined render_pass_begin_info_set_framebuffer;
undefined render_pass_begin_info_get_clear_values;
undefined render_pass_begin_info_set_clear_values;
undefined render_pass_begin_info_get_render_area;
undefined render_pass_begin_info_set_render_area;

// =============================================================================
// 渲染通道结束信息管理函数
// =============================================================================

// 函数: 管理渲染通道结束信息
undefined manage_render_pass_end_info;
undefined render_pass_end_info_create;
undefined render_pass_end_info_delete;
undefined render_pass_end_info_get_info;
undefined render_pass_end_info_set_info;
undefined render_pass_end_info_get_render_pass;
undefined render_pass_end_info_set_render_pass;
undefined render_pass_end_info_get_framebuffer;
undefined render_pass_end_info_set_framebuffer;

// =============================================================================
// 清除值管理函数
// =============================================================================

// 函数: 管理清除值
undefined manage_clear_values;
undefined clear_value_create;
undefined clear_value_delete;
undefined clear_value_get_info;
undefined clear_value_set_info;
undefined clear_value_get_color;
undefined clear_value_set_color;
undefined clear_value_get_depth;
undefined clear_value_set_depth;
undefined clear_value_get_stencil;
undefined clear_value_set_stencil;

// =============================================================================
// 渲染区域管理函数
// =============================================================================

// 函数: 管理渲染区域
undefined manage_render_area;
undefined render_area_create;
undefined render_area_delete;
undefined render_area_get_info;
undefined render_area_set_info;
undefined render_area_get_offset;
undefined render_area_set_offset;
undefined render_area_get_extent;
undefined render_area_set_extent;

// =============================================================================
// 提交信息管理函数
// =============================================================================

// 函数: 管理提交信息
undefined manage_submit_info;
undefined submit_info_create;
undefined submit_info_delete;
undefined submit_info_get_info;
undefined submit_info_set_info;
undefined submit_info_get_wait_semaphores;
undefined submit_info_set_wait_semaphores;
undefined submit_info_get_wait_dst_stage_mask;
undefined submit_info_set_wait_dst_stage_mask;
undefined submit_info_get_command_buffers;
undefined submit_info_set_command_buffers;
undefined submit_info_get_signal_semaphores;
undefined submit_info_set_signal_semaphores;

// =============================================================================
// 呈现信息管理函数
// =============================================================================

// 函数: 管理呈现信息
undefined manage_present_info;
undefined present_info_create;
undefined present_info_delete;
undefined present_info_get_info;
undefined present_info_set_info;
undefined present_info_get_wait_semaphores;
undefined present_info_set_wait_semaphores;
undefined present_info_get_swap_chains;
undefined present_info_set_swap_chains;
undefined present_info_get_image_indices;
undefined present_info_set_image_indices;

// =============================================================================
// 内存分配信息管理函数
// =============================================================================

// 函数: 管理内存分配信息
undefined manage_memory_allocate_info;
undefined memory_allocate_info_create;
undefined memory_allocate_info_delete;
undefined memory_allocate_info_get_info;
undefined memory_allocate_info_set_info;
undefined memory_allocate_info_get_allocation_size;
undefined memory_allocate_info_set_allocation_size;
undefined memory_allocate_info_get_memory_type_index;
undefined memory_allocate_info_set_memory_type_index;

// =============================================================================
// 内存映射信息管理函数
// =============================================================================

// 函数: 管理内存映射信息
undefined manage_memory_map_info;
undefined memory_map_info_create;
undefined memory_map_info_delete;
undefined memory_map_info_get_info;
undefined memory_map_info_set_info;
undefined memory_map_info_get_offset;
undefined memory_map_info_set_offset;
undefined memory_map_info_get_size;
undefined memory_map_info_set_size;
undefined memory_map_info_get_flags;
undefined memory_map_info_set_flags;

// =============================================================================
// 绑定缓冲区内存信息管理函数
// =============================================================================

// 函数: 管理绑定缓冲区内存信息
undefined manage_bind_buffer_memory_info;
undefined bind_buffer_memory_info_create;
undefined bind_buffer_memory_info_delete;
undefined bind_buffer_memory_info_get_info;
undefined bind_buffer_memory_info_set_info;
undefined bind_buffer_memory_info_get_buffer;
undefined bind_buffer_memory_info_set_buffer;
undefined bind_buffer_memory_info_get_memory;
undefined bind_buffer_memory_info_set_memory;
undefined bind_buffer_memory_info_get_memory_offset;
undefined bind_buffer_memory_info_set_memory_offset;

// =============================================================================
// 绑定图像内存信息管理函数
// =============================================================================

// 函数: 管理绑定图像内存信息
undefined manage_bind_image_memory_info;
undefined bind_image_memory_info_create;
undefined bind_image_memory_info_delete;
undefined bind_image_memory_info_get_info;
undefined bind_image_memory_info_set_info;
undefined bind_image_memory_info_get_image;
undefined bind_image_memory_info_set_image;
undefined bind_image_memory_info_get_memory;
undefined bind_image_memory_info_set_memory;
undefined bind_image_memory_info_get_memory_offset;
undefined bind_image_memory_info_set_memory_offset;

// =============================================================================
// 缓冲区创建信息管理函数
// =============================================================================

// 函数: 管理缓冲区创建信息
undefined manage_buffer_create_info;
undefined buffer_create_info_create;
undefined buffer_create_info_delete;
undefined buffer_create_info_get_info;
undefined buffer_create_info_set_info;
undefined buffer_create_info_get_size;
undefined buffer_create_info_set_size;
undefined buffer_create_info_get_usage;
undefined buffer_create_info_set_usage;
undefined buffer_create_info_get_sharing_mode;
undefined buffer_create_info_set_sharing_mode;
undefined buffer_create_info_get_queue_family_indices;
undefined buffer_create_info_set_queue_family_indices;

// =============================================================================
// 缓冲区复制信息管理函数
// =============================================================================

// 函数: 管理缓冲区复制信息
undefined manage_buffer_copy_info;
undefined buffer_copy_info_create;
undefined buffer_copy_info_delete;
undefined buffer_copy_info_get_info;
undefined buffer_copy_info_set_info;
undefined buffer_copy_info_get_src_offset;
undefined buffer_copy_info_set_src_offset;
undefined buffer_copy_info_get_dst_offset;
undefined buffer_copy_info_set_dst_offset;
undefined buffer_copy_info_get_size;
undefined buffer_copy_info_set_size;

// =============================================================================
// 图像创建信息管理函数
// =============================================================================

// 函数: 管理图像创建信息
undefined manage_image_create_info;
undefined image_create_info_create;
undefined image_create_info_delete;
undefined image_create_info_get_info;
undefined image_create_info_set_info;
undefined image_create_info_get_image_type;
undefined image_create_info_set_image_type;
undefined image_create_info_get_format;
undefined image_create_info_set_format;
undefined image_create_info_get_extent;
undefined image_create_info_set_extent;
undefined image_create_info_get_mip_levels;
undefined image_create_info_set_mip_levels;
undefined image_create_info_get_array_layers;
undefined image_create_info_set_array_layers;
undefined image_create_info_get_samples;
undefined image_create_info_set_samples;
undefined image_create_info_get_tiling;
undefined image_create_info_set_tiling;
undefined image_create_info_get_usage;
undefined image_create_info_set_usage;
undefined image_create_info_get_sharing_mode;
undefined image_create_info_set_sharing_mode;
undefined image_create_info_get_queue_family_indices;
undefined image_create_info_set_queue_family_indices;
undefined image_create_info_get_initial_layout;
undefined image_create_info_set_initial_layout;

// =============================================================================
// 图像子资源管理函数
// =============================================================================

// 函数: 管理图像子资源
undefined manage_image_subresource;
undefined image_subresource_create;
undefined image_subresource_delete;
undefined image_subresource_get_info;
undefined image_subresource_set_info;
undefined image_subresource_get_aspect_mask;
undefined image_subresource_set_aspect_mask;
undefined image_subresource_get_mip_level;
undefined image_subresource_set_mip_level;
undefined image_subresource_get_array_layer;
undefined image_subresource_set_array_layer;

// =============================================================================
// 图像子资源范围管理函数
// =============================================================================

// 函数: 管理图像子资源范围
undefined manage_image_subresource_range;
undefined image_subresource_range_create;
undefined image_subresource_range_delete;
undefined image_subresource_range_get_info;
undefined image_subresource_range_set_info;
undefined image_subresource_range_get_aspect_mask;
undefined image_subresource_range_set_aspect_mask;
undefined image_subresource_range_get_base_mip_level;
undefined image_subresource_range_set_base_mip_level;
undefined image_subresource_range_get_level_count;
undefined image_subresource_range_set_level_count;
undefined image_subresource_range_get_base_array_layer;
undefined image_subresource_range_set_base_array_layer;
undefined image_subresource_range_get_layer_count;
undefined image_subresource_range_set_layer_count;

// =============================================================================
// 图像复制信息管理函数
// =============================================================================

// 函数: 管理图像复制信息
undefined manage_image_copy_info;
undefined image_copy_info_create;
undefined image_copy_info_delete;
undefined image_copy_info_get_info;
undefined image_copy_info_set_info;
undefined image_copy_info_get_src_subresource;
undefined image_copy_info_set_src_subresource;
undefined image_copy_info_get_src_offset;
undefined image_copy_info_set_src_offset;
undefined image_copy_info_get_dst_subresource;
undefined image_copy_info_set_dst_subresource;
undefined image_copy_info_get_dst_offset;
undefined image_copy_info_set_dst_offset;
undefined image_copy_info_get_extent;
undefined image_copy_info_set_extent;

// =============================================================================
// 缓冲区图像复制信息管理函数
// =============================================================================

// 函数: 管理缓冲区图像复制信息
undefined manage_buffer_image_copy_info;
undefined buffer_image_copy_info_create;
undefined buffer_image_copy_info_delete;
undefined buffer_image_copy_info_get_info;
undefined buffer_image_copy_info_set_info;
undefined buffer_image_copy_info_get_buffer_offset;
undefined buffer_image_copy_info_set_buffer_offset;
undefined buffer_image_copy_info_get_buffer_row_length;
undefined buffer_image_copy_info_set_buffer_row_length;
undefined buffer_image_copy_info_get_buffer_image_height;
undefined buffer_image_copy_info_set_buffer_image_height;
undefined buffer_image_copy_info_get_image_subresource;
undefined buffer_image_copy_info_set_image_subresource;
undefined buffer_image_copy_info_get_image_offset;
undefined buffer_image_copy_info_set_image_offset;
undefined buffer_image_copy_info_get_image_extent;
undefined buffer_image_copy_info_set_image_extent;

// =============================================================================
// 图像位传输信息管理函数
// =============================================================================

// 函数: 管理图像位传输信息
undefined manage_image_blit_info;
undefined image_blit_info_create;
undefined image_blit_info_delete;
undefined image_blit_info_get_info;
undefined image_blit_info_set_info;
undefined image_blit_info_get_src_subresource;
undefined image_blit_info_set_src_subresource;
undefined image_blit_info_get_src_offset;
undefined image_blit_info_set_src_offset;
undefined image_blit_info_get_src_extent;
undefined image_blit_info_set_src_extent;
undefined image_blit_info_get_dst_subresource;
undefined image_blit_info_set_dst_subresource;
undefined image_blit_info_get_dst_offset;
undefined image_blit_info_set_dst_offset;
undefined image_blit_info_get_dst_extent;
undefined image_blit_info_set_dst_extent;
undefined image_blit_info_get_filter;
undefined image_blit_info_set_filter;

// =============================================================================
// 图像解析信息管理函数
// =============================================================================

// 函数: 管理图像解析信息
undefined manage_image_resolve_info;
undefined image_resolve_info_create;
undefined image_resolve_info_delete;
undefined image_resolve_info_get_info;
undefined image_resolve_info_set_info;
undefined image_resolve_info_get_src_subresource;
undefined image_resolve_info_set_src_subresource;
undefined image_resolve_info_get_src_offset;
undefined image_resolve_info_set_src_offset;
undefined image_resolve_info_get_src_extent;
undefined image_resolve_info_set_src_extent;
undefined image_resolve_info_get_dst_subresource;
undefined image_resolve_info_set_dst_subresource;
undefined image_resolve_info_get_dst_offset;
undefined image_resolve_info_set_dst_offset;
undefined image_resolve_info_get_dst_extent;
undefined image_resolve_info_set_dst_extent;

// =============================================================================
// 填充缓冲区信息管理函数
// =============================================================================

// 函数: 管理填充缓冲区信息
undefined manage_fill_buffer_info;
undefined fill_buffer_info_create;
undefined fill_buffer_info_delete;
undefined fill_buffer_info_get_info;
undefined fill_buffer_info_set_info;
undefined fill_buffer_info_get_dst_buffer;
undefined fill_buffer_info_set_dst_buffer;
undefined fill_buffer_info_get_dst_offset;
undefined fill_buffer_info_set_dst_offset;
undefined fill_buffer_info_get_size;
undefined fill_buffer_info_set_size;
undefined fill_buffer_info_get_data;
undefined fill_buffer_info_set_data;

// =============================================================================
// 更新缓冲区信息管理函数
// =============================================================================

// 函数: 管理更新缓冲区信息
undefined manage_update_buffer_info;
undefined update_buffer_info_create;
undefined update_buffer_info_delete;
undefined update_buffer_info_get_info;
undefined update_buffer_info_set_info;
undefined update_buffer_info_get_dst_buffer;
undefined update_buffer_info_set_dst_buffer;
undefined update_buffer_info_get_dst_offset;
undefined update_buffer_info_set_dst_offset;
undefined update_buffer_info_get_data_size;
undefined update_buffer_info_set_data_size;
undefined update_buffer_info_get_data;
undefined update_buffer_info_set_data;

// =============================================================================
// 推送常量范围管理函数
// =============================================================================

// 函数: 管理推送常量范围
undefined manage_push_constant_range;
undefined push_constant_range_create;
undefined push_constant_range_delete;
undefined push_constant_range_get_info;
undefined push_constant_range_set_info;
undefined push_constant_range_get_stage_flags;
undefined push_constant_range_set_stage_flags;
undefined push_constant_range_get_offset;
undefined push_constant_range_set_offset;
undefined push_constant_range_get_size;
undefined push_constant_range_set_size;

// =============================================================================
// 视口管理函数
// =============================================================================

// 函数: 管理视口
undefined manage_viewport;
undefined viewport_create;
undefined viewport_delete;
undefined viewport_get_info;
undefined viewport_set_info;
undefined viewport_get_x;
undefined viewport_set_x;
undefined viewport_get_y;
undefined viewport_set_y;
undefined viewport_get_width;
undefined viewport_set_width;
undefined viewport_get_height;
undefined viewport_set_height;
undefined viewport_get_min_depth;
undefined viewport_set_min_depth;
undefined viewport_get_max_depth;
undefined viewport_set_max_depth;

// =============================================================================
// 剪切矩形管理函数
// =============================================================================

// 函数: 管理剪切矩形
undefined manage_scissor;
undefined scissor_create;
undefined scissor_delete;
undefined scissor_get_info;
undefined scissor_set_info;
undefined scissor_get_offset;
undefined scissor_set_offset;
undefined scissor_get_extent;
undefined scissor_set_extent;

// =============================================================================
// 渲染管线创建信息管理函数
// =============================================================================

// 函数: 管理渲染管线创建信息
undefined manage_graphics_pipeline_create_info;
undefined graphics_pipeline_create_info_create;
undefined graphics_pipeline_create_info_delete;
undefined graphics_pipeline_create_info_get_info;
undefined graphics_pipeline_create_info_set_info;
undefined graphics_pipeline_create_info_get_stage_count;
undefined graphics_pipeline_create_info_set_stage_count;
undefined graphics_pipeline_create_info_get_stages;
undefined graphics_pipeline_create_info_set_stages;
undefined graphics_pipeline_create_info_get_vertex_input_state;
undefined graphics_pipeline_create_info_set_vertex_input_state;
undefined graphics_pipeline_create_info_get_input_assembly_state;
undefined graphics_pipeline_create_info_set_input_assembly_state;
undefined graphics_pipeline_create_info_get_tessellation_state;
undefined graphics_pipeline_create_info_set_tessellation_state;
undefined graphics_pipeline_create_info_get_viewport_state;
undefined graphics_pipeline_create_info_set_viewport_state;
undefined graphics_pipeline_create_info_get_rasterization_state;
undefined graphics_pipeline_create_info_set_rasterization_state;
undefined graphics_pipeline_create_info_get_multisample_state;
undefined graphics_pipeline_create_info_set_multisample_state;
undefined graphics_pipeline_create_info_get_depth_stencil_state;
undefined graphics_pipeline_create_info_set_depth_stencil_state;
undefined graphics_pipeline_create_info_get_color_blend_state;
undefined graphics_pipeline_create_info_set_color_blend_state;
undefined graphics_pipeline_create_info_get_dynamic_state;
undefined graphics_pipeline_create_info_set_dynamic_state;
undefined graphics_pipeline_create_info_get_layout;
undefined graphics_pipeline_create_info_set_layout;
undefined graphics_pipeline_create_info_get_render_pass;
undefined graphics_pipeline_create_info_set_render_pass;
undefined graphics_pipeline_create_info_get_subpass;
undefined graphics_pipeline_create_info_set_subpass;
undefined graphics_pipeline_create_info_get_base_pipeline_handle;
undefined graphics_pipeline_create_info_set_base_pipeline_handle;
undefined graphics_pipeline_create_info_get_base_pipeline_index;
undefined graphics_pipeline_create_info_set_base_pipeline_index;

// =============================================================================
// 计算管线创建信息管理函数
// =============================================================================

// 函数: 管理计算管线创建信息
undefined manage_compute_pipeline_create_info;
undefined compute_pipeline_create_info_create;
undefined compute_pipeline_create_info_delete;
undefined compute_pipeline_create_info_get_info;
undefined compute_pipeline_create_info_set_info;
undefined compute_pipeline_create_info_get_stage;
undefined compute_pipeline_create_info_set_stage;
undefined compute_pipeline_create_info_get_layout;
undefined compute_pipeline_create_info_set_layout;
undefined compute_pipeline_create_info_get_base_pipeline_handle;
undefined compute_pipeline_create_info_set_base_pipeline_handle;
undefined compute_pipeline_create_info_get_base_pipeline_index;
undefined compute_pipeline_create_info_set_base_pipeline_index;

// =============================================================================
// 渲染系统完成
// =============================================================================
// 本文件包含渲染系统的核心函数声明，涵盖了现代图形API的所有主要功能模块
// 包括：管线管理、着色器处理、缓冲区操作、纹理管理、同步控制等