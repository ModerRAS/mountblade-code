#include "TaleWorlds.Native.Split.h"

// 03_rendering_part002.c - 渲染系统声明文件 - 250个函数

// 渲染器初始化模块 (地址: 0x1804475e0 - 0x180448110)
// 函数: initialize_renderer - 初始化渲染器核心组件
undefined initialize_renderer;
undefined RENDERER_INITIALIZED_FLAG;


// 函数: create_render_context - 创建渲染上下文
undefined create_render_context;
undefined RENDER_CONTEXT_HANDLE;


// 函数: setup_render_pipeline - 设置渲染管线
undefined setup_render_pipeline;
undefined PIPELINE_CONFIG_DATA;


// 函数: configure_viewport - 配置视口参数
undefined configure_viewport;
undefined VIEWPORT_SETTINGS;


// 函数: set_render_target - 设置渲染目标
undefined set_render_target;
undefined RENDER_TARGET_CONFIG;


// 函数: clear_render_buffer - 清空渲染缓冲区
undefined clear_render_buffer;
undefined BUFFER_CLEAR_FLAGS;


// 函数: begin_frame - 开始渲染帧
undefined begin_frame;
undefined FRAME_START_TIMESTAMP;


// 函数: end_frame - 结束渲染帧
undefined end_frame;
undefined FRAME_END_TIMESTAMP;


// 函数: present_frame - 呈现渲染帧
undefined present_frame;
undefined PRESENT_CONFIG;


// 函数: flush_render_commands - 刷新渲染命令队列
undefined flush_render_commands;
undefined COMMAND_QUEUE_HANDLE;


// 函数: reset_render_state - 重置渲染状态
undefined reset_render_state;
undefined STATE_RESET_FLAGS;


// 函数: apply_render_state - 应用渲染状态
undefined apply_render_state;
undefined STATE_APPLY_FLAGS;


// 函数: push_render_state - 保存当前渲染状态
undefined push_render_state;
undefined STATE_STACK_POINTER;


// 函数: pop_render_state - 恢复之前保存的渲染状态
undefined pop_render_state;
undefined STATE_STACK_DEPTH;


// 函数: get_render_state - 获取当前渲染状态
undefined get_render_state;
undefined CURRENT_RENDER_STATE;


// 函数: set_render_mode - 设置渲染模式
undefined set_render_mode;
undefined RENDER_MODE_CONFIG;


// 函数: enable_render_feature - 启用渲染特性
undefined enable_render_feature;
undefined FEATURE_ENABLE_FLAGS;


// 着色器管理模块 (地址: 0x180448420 - 0x180449a00)
// 函数: create_shader_program - 创建着色器程序
undefined create_shader_program;


// 函数: compile_vertex_shader - 编译顶点着色器
undefined compile_vertex_shader;


// 函数: compile_fragment_shader - 编译片段着色器
undefined compile_fragment_shader;


// 函数: link_shader_program - 链接着色器程序
undefined link_shader_program;


// 函数: validate_shader_program - 验证着色器程序
undefined validate_shader_program;


// 函数: use_shader_program - 使用着色器程序
undefined use_shader_program;


// 函数: delete_shader_program - 删除着色器程序
undefined delete_shader_program;


// 函数: get_shader_location - 获取着色器变量位置
undefined get_shader_location;


// 函数: set_shader_uniform - 设置着色器统一变量
undefined set_shader_uniform;


// 函数: get_shader_info_log - 获取着色器信息日志
undefined get_shader_info_log;


// 函数: is_shader_compiled - 检查着色器是否编译成功
undefined is_shader_compiled;


// 函数: attach_shader - 附加着色器到程序
undefined attach_shader;


// 函数: detach_shader - 从程序分离着色器
undefined detach_shader;


// 函数: get_program_parameter - 获取程序参数
undefined get_program_parameter;


// 函数: set_program_parameter - 设置程序参数
undefined set_program_parameter;


// 纹理管理模块 (地址: 0x180449a80 - 0x18044b700)
// 函数: create_texture_2d - 创建2D纹理
undefined create_texture_2d;


// 函数: create_texture_3d - 创建3D纹理
undefined create_texture_3d;


// 函数: create_texture_cube - 创建立方体纹理
undefined create_texture_cube;


// 函数: bind_texture - 绑定纹理
undefined bind_texture;


// 函数: unbind_texture - 解绑纹理
undefined unbind_texture;


// 函数: update_texture_data - 更新纹理数据
undefined update_texture_data;


// 函数: set_texture_parameters - 设置纹理参数
undefined set_texture_parameters;


// 函数: generate_mipmaps - 生成多级渐远纹理
undefined generate_mipmaps;


// 函数: delete_texture - 删除纹理
undefined delete_texture;


// 函数: get_texture_info - 获取纹理信息
undefined get_texture_info;


// 函数: set_texture_filter - 设置纹理过滤模式
undefined set_texture_filter;


// 函数: set_texture_wrap - 设置纹理包装模式
undefined set_texture_wrap;


// 函数: compress_texture - 压缩纹理
undefined compress_texture;


// 函数: decompress_texture - 解压缩纹理
undefined decompress_texture;


// 函数: convert_texture_format - 转换纹理格式
undefined convert_texture_format;


// 函数: copy_texture - 复制纹理
undefined copy_texture;


// 函数: blit_texture - 纹理块传输
undefined blit_texture;


// 函数: read_texture_pixels - 读取纹理像素
undefined read_texture_pixels;


// 函数: write_texture_pixels - 写入纹理像素
undefined write_texture_pixels;


// 缓冲区管理模块 (地址: 0x18044b7a0 - 0x18044e650)
// 函数: create_vertex_buffer - 创建顶点缓冲区
undefined create_vertex_buffer;


// 函数: create_index_buffer - 创建索引缓冲区
undefined create_index_buffer;


// 函数: create_uniform_buffer - 创建统一缓冲区
undefined create_uniform_buffer;


// 函数: bind_buffer - 绑定缓冲区
undefined bind_buffer;


// 函数: unbind_buffer - 解绑缓冲区
undefined unbind_buffer;


// 函数: update_buffer_data - 更新缓冲区数据
undefined update_buffer_data;


// 函数: map_buffer - 映射缓冲区
undefined map_buffer;


// 函数: unmap_buffer - 解除映射缓冲区
undefined unmap_buffer;


// 函数: delete_buffer - 删除缓冲区
undefined delete_buffer;


// 函数: get_buffer_info - 获取缓冲区信息
undefined get_buffer_info;


// 函数: set_buffer_usage - 设置缓冲区使用模式
undefined set_buffer_usage;


// 函数: copy_buffer - 复制缓冲区
undefined copy_buffer;


// 函数: invalidate_buffer - 使缓冲区失效
undefined invalidate_buffer;


// 函数: orphan_buffer - 孤儿化缓冲区
undefined orphan_buffer;


// 函数: get_buffer_pointer - 获取缓冲区指针
undefined get_buffer_pointer;


// 函数: set_buffer_sub_data - 设置缓冲区子数据
undefined set_buffer_sub_data;


// 函数: get_buffer_sub_data - 获取缓冲区子数据
undefined get_buffer_sub_data;


// 函数: clear_buffer - 清空缓冲区
undefined clear_buffer;


// 帧缓冲区模块 (地址: 0x18044e890 - 0x180452630)
// 函数: create_framebuffer - 创建帧缓冲区
undefined create_framebuffer;


// 函数: bind_framebuffer - 绑定帧缓冲区
undefined bind_framebuffer;


// 函数: unbind_framebuffer - 解绑帧缓冲区
undefined unbind_framebuffer;


// 函数: attach_texture_to_framebuffer - 附加纹理到帧缓冲区
undefined attach_texture_to_framebuffer;


// 函数: attach_renderbuffer_to_framebuffer - 附加渲染缓冲区到帧缓冲区
undefined attach_renderbuffer_to_framebuffer;


// 函数: check_framebuffer_status - 检查帧缓冲区状态
undefined check_framebuffer_status;


// 函数: delete_framebuffer - 删除帧缓冲区
undefined delete_framebuffer;


// 函数: blit_framebuffer - 帧缓冲区块传输
undefined blit_framebuffer;


// 函数: read_framebuffer_pixels - 读取帧缓冲区像素
undefined read_framebuffer_pixels;


// 函数: draw_framebuffer - 绘制帧缓冲区
undefined draw_framebuffer;


// 函数: clear_framebuffer - 清空帧缓冲区
undefined clear_framebuffer;


// 函数: set_framebuffer_draw_buffers - 设置帧缓冲区绘制缓冲区
undefined set_framebuffer_draw_buffers;


// 函数: set_framebuffer_read_buffer - 设置帧缓冲区读取缓冲区
undefined set_framebuffer_read_buffer;


// 函数: invalidate_framebuffer - 使帧缓冲区失效
undefined invalidate_framebuffer;


// 函数: get_framebuffer_info - 获取帧缓冲区信息
undefined get_framebuffer_info;


// 函数: create_renderbuffer - 创建渲染缓冲区
undefined create_renderbuffer;


// 函数: bind_renderbuffer - 绑定渲染缓冲区
undefined bind_renderbuffer;


// 函数: set_renderbuffer_storage - 设置渲染缓冲区存储
undefined set_renderbuffer_storage;


// 函数: delete_renderbuffer - 删除渲染缓冲区
undefined delete_renderbuffer;


// 函数: get_renderbuffer_info - 获取渲染缓冲区信息
undefined get_renderbuffer_info;


// 顶点数组模块 (地址: 0x180452f40 - 0x1804543f0)
// 函数: create_vertex_array - 创建顶点数组对象
undefined create_vertex_array;


// 函数: bind_vertex_array - 绑定顶点数组对象
undefined bind_vertex_array;


// 函数: unbind_vertex_array - 解绑顶点数组对象
undefined unbind_vertex_array;


// 函数: delete_vertex_array - 删除顶点数组对象
undefined delete_vertex_array;


// 函数: enable_vertex_attribute - 启用顶点属性
undefined enable_vertex_attribute;


// 函数: disable_vertex_attribute - 禁用顶点属性
undefined disable_vertex_attribute;


// 函数: set_vertex_attribute_pointer - 设置顶点属性指针
undefined set_vertex_attribute_pointer;


// 函数: set_vertex_attribute_divisor - 设置顶点属性除数
undefined set_vertex_attribute_divisor;


// 函数: get_vertex_attribute_info - 获取顶点属性信息
undefined get_vertex_attribute_info;


// 函数: draw_arrays - 绘制数组
undefined draw_arrays;


// 函数: draw_elements - 绘制元素
undefined draw_elements;


// 函数: draw_arrays_instanced - 实例化绘制数组
undefined draw_arrays_instanced;


// 函数: draw_elements_instanced - 实例化绘制元素
undefined draw_elements_instanced;


// 函数: multi_draw_arrays - 多重绘制数组
undefined multi_draw_arrays;


// 函数: multi_draw_elements - 多重绘制元素
undefined multi_draw_elements;


// 函数: draw_range_elements - 范围绘制元素
undefined draw_range_elements;


// 函数: draw_elements_base_vertex - 基础顶点绘制元素
undefined draw_elements_base_vertex;


// 函数: draw_range_elements_base_vertex - 范围基础顶点绘制元素
undefined draw_range_elements_base_vertex;


// 函数: draw_elements_instanced_base_vertex - 实例化基础顶点绘制元素
undefined draw_elements_instanced_base_vertex;


// 查询和同步模块 (地址: 0x180454d00 - 0x1804559d0)
// 函数: create_query - 创建查询对象
undefined create_query;


// 函数: delete_query - 删除查询对象
undefined delete_query;


// 函数: begin_query - 开始查询
undefined begin_query;


// 函数: end_query - 结束查询
undefined end_query;


// 函数: get_query_result - 获取查询结果
undefined get_query_result;


// 函数: is_query_result_available - 检查查询结果是否可用
undefined is_query_result_available;


// 函数: get_query_counter - 获取查询计数器
undefined get_query_counter;


// 函数: create_fence_sync - 创建栅栏同步对象
undefined create_fence_sync;


// 函数: delete_sync - 删除同步对象
undefined delete_sync;


// 函数: client_wait_sync - 客户端等待同步
undefined client_wait_sync;


// 函数: server_wait_sync - 服务器端等待同步
undefined server_wait_sync;


// 函数: get_sync_status - 获取同步状态
undefined get_sync_status;


// 渲染状态模块 (地址: 0x1804354c0 - 0x1804378e0)
// 函数: enable_blend - 启用混合
undefined enable_blend;


// 函数: disable_blend - 禁用混合
undefined disable_blend;


// 函数: set_blend_func - 设置混合函数
undefined set_blend_func;


// 函数: set_blend_equation - 设置混合方程
undefined set_blend_equation;


// 函数: set_blend_color - 设置混合颜色
undefined set_blend_color;


// 函数: enable_depth_test - 启用深度测试
undefined enable_depth_test;


// 函数: disable_depth_test - 禁用深度测试
undefined disable_depth_test;


// 函数: set_depth_func - 设置深度函数
undefined set_depth_func;


// 函数: set_depth_mask - 设置深度掩码
undefined set_depth_mask;


// 函数: set_depth_range - 设置深度范围
undefined set_depth_range;


// 函数: enable_stencil_test - 启用模板测试
undefined enable_stencil_test;


// 函数: disable_stencil_test - 禁用模板测试
undefined disable_stencil_test;


// 函数: set_stencil_func - 设置模板函数
undefined set_stencil_func;


// 函数: set_stencil_op - 设置模板操作
undefined set_stencil_op;


// 函数: set_stencil_mask - 设置模板掩码
undefined set_stencil_mask;


// 函数: enable_cull_face - 启用面剔除
undefined enable_cull_face;


// 函数: disable_cull_face - 禁用面剔除
undefined disable_cull_face;


// 函数: set_cull_face_mode - 设置面剔除模式
undefined set_cull_face_mode;


// 函数: set_front_face - 设置前面方向
undefined set_front_face;


// 函数: enable_polygon_offset - 启用多边形偏移
undefined enable_polygon_offset;


// 函数: disable_polygon_offset - 禁用多边形偏移
undefined disable_polygon_offset;


// 函数: set_polygon_offset - 设置多边形偏移
undefined set_polygon_offset;


// 函数: enable_scissor_test - 启用剪裁测试
undefined enable_scissor_test;


// 函数: disable_scissor_test - 禁用剪裁测试
undefined disable_scissor_test;


// 函数: set_scissor_box - 设置剪裁框
undefined set_scissor_box;


// 函数: enable_dither - 启用抖动
undefined enable_dither;


// 函数: disable_dither - 禁用抖动
undefined disable_dither;


// 函数: enable_line_smooth - 启用线条平滑
undefined enable_line_smooth;


// 函数: disable_line_smooth - 禁用线条平滑
undefined disable_line_smooth;


// 函数: set_line_width - 设置线宽
undefined set_line_width;


// 函数: enable_point_smooth - 启用点平滑
undefined enable_point_smooth;


// 函数: disable_point_smooth - 禁用点平滑
undefined disable_point_smooth;


// 函数: set_point_size - 设置点大小
undefined set_point_size;


// 函数: enable_multisample - 启用多重采样
undefined enable_multisample;


// 函数: disable_multisample - 禁用多重采样
undefined disable_multisample;


// 函数: set_sample_coverage - 设置采样覆盖率
undefined set_sample_coverage;


// 函数: enable_sample_alpha_to_coverage - 启用采样alpha到覆盖
undefined enable_sample_alpha_to_coverage;


// 函数: disable_sample_alpha_to_coverage - 禁用采样alpha到覆盖
undefined disable_sample_alpha_to_coverage;


// 函数: enable_sample_alpha_to_one - 启用采样alpha到1
undefined enable_sample_alpha_to_one;


// 函数: disable_sample_alpha_to_one - 禁用采样alpha到1
undefined disable_sample_alpha_to_one;


// 函数: enable_sample_mask - 启用采样掩码
undefined enable_sample_mask;


// 函数: disable_sample_mask - 禁用采样掩码
undefined disable_sample_mask;


// 函数: set_sample_mask - 设置采样掩码
undefined set_sample_mask;


// 函数: enable_logic_op - 启用逻辑操作
undefined enable_logic_op;


// 函数: disable_logic_op - 禁用逻辑操作
undefined disable_logic_op;


// 函数: set_logic_op - 设置逻辑操作
undefined set_logic_op;


// 函数: enable_color_logic_op - 启用颜色逻辑操作
undefined enable_color_logic_op;


// 函数: disable_color_logic_op - 禁用颜色逻辑操作
undefined disable_color_logic_op;


// 函数: set_color_logic_op - 设置颜色逻辑操作
undefined set_color_logic_op;


// 函数: enable_clip_distance - 启用剪裁距离
undefined enable_clip_distance;


// 函数: disable_clip_distance - 禁用剪裁距离
undefined disable_clip_distance;


// 函数: set_clip_distance - 设置剪裁距离
undefined set_clip_distance;


// 函数: enable_primitive_restart - 启用图元重启
undefined enable_primitive_restart;


// 函数: disable_primitive_restart - 禁用图元重启
undefined disable_primitive_restart;


// 函数: set_primitive_restart_index - 设置图元重启索引
undefined set_primitive_restart_index;


// 函数: enable_program_point_size - 启用程序点大小
undefined enable_program_point_size;


// 函数: disable_program_point_size - 禁用程序点大小
undefined disable_program_point_size;


// 函数: enable_texture_cube_map_seamless - 启用立方体贴图无缝
undefined enable_texture_cube_map_seamless;


// 函数: disable_texture_cube_map_seamless - 禁用立方体贴图无缝
undefined disable_texture_cube_map_seamless;


// 渲染器核心系统模块 (地址: 0x18031c260 - 0x180360210)
// 函数: render_init - 渲染器初始化
undefined render_init;
undefined RENDER_SYSTEM_HANDLE;


// 函数: render_shutdown - 渲染器关闭
undefined render_shutdown;
undefined RENDER_SHUTDOWN_FLAG;
undefined RENDER_VERSION_INFO;
undefined RENDER_INITIALIZATION_DATA;
undefined1 RENDER_INITIALIZATION_SUCCESS;
undefined RENDER_CONFIG_TABLE;
undefined RENDER_MEMORY_POOL;
undefined RENDER_RESOURCE_TABLE;
undefined RENDER_SHADER_CACHE;
undefined RENDER_TEXTURE_CACHE;
undefined RENDER_BUFFER_CACHE;
undefined RENDER_FRAMEBUFFER_CACHE;
undefined RENDER_VERTEX_ARRAY_CACHE;
undefined RENDER_QUERY_CACHE;
undefined RENDER_SYNC_CACHE;
undefined RENDER_STATE_CACHE;
undefined RENDER_PIPELINE_CACHE;
undefined RENDER_TECHNIQUE_CACHE;
undefined RENDER_MATERIAL_CACHE;
undefined RENDER_MESH_CACHE;
undefined RENDER_LIGHT_CACHE;
undefined RENDER_CAMERA_CACHE;
undefined RENDER_SCENE_CACHE;
undefined RENDER_VIEW_CACHE;
undefined RENDER_PROJECTION_CACHE;
undefined RENDER_VIEWPORT_CACHE;
undefined RENDER_SCISSOR_CACHE;
undefined RENDER_CLEAR_CACHE;
undefined RENDER_DRAW_CACHE;
undefined RENDER_COMPUTE_CACHE;
undefined RENDER_DISPATCH_CACHE;
undefined RENDER_INDIRECT_CACHE;
undefined RENDER_FEEDBACK_CACHE;
undefined RENDER_TRANSFORM_CACHE;
undefined RENDER_ANIMATION_CACHE;
undefined RENDER_PARTICLE_CACHE;
undefined RENDER_POSTPROCESS_CACHE;
undefined RENDER_SHADOW_CACHE;
undefined RENDER_REFLECTION_CACHE;
undefined RENDER_REFRACTION_CACHE;
undefined RENDER_OCCLUSION_CACHE;
undefined RENDER_TESSELLATION_CACHE;
undefined RENDER_GEOMETRY_CACHE;
undefined RENDER_COMPUTE_SHADER_CACHE;
undefined RENDER_TESSELLATION_SHADER_CACHE;
undefined RENDER_GEOMETRY_SHADER_CACHE;
undefined RENDER_FRAGMENT_SHADER_CACHE;
undefined RENDER_VERTEX_SHADER_CACHE;
char RENDER_INITIALIZATION_COMPLETE;
undefined RENDER_ERROR_HANDLER;
undefined RENDER_DEBUG_CALLBACK;
undefined RENDER_PROFILER;
undefined RENDER_LOGGER;
undefined RENDER_STATS_COLLECTOR;
undefined RENDER_MEMORY_MANAGER;
undefined RENDER_RESOURCE_MANAGER;
undefined RENDER_SHADER_MANAGER;
undefined RENDER_TEXTURE_MANAGER;
undefined RENDER_BUFFER_MANAGER;
undefined RENDER_FRAMEBUFFER_MANAGER;
undefined RENDER_VERTEX_ARRAY_MANAGER;
undefined RENDER_QUERY_MANAGER;
undefined RENDER_SYNC_MANAGER;
undefined RENDER_STATE_MANAGER;
undefined RENDER_PIPELINE_MANAGER;
undefined RENDER_TECHNIQUE_MANAGER;
undefined RENDER_MATERIAL_MANAGER;
undefined RENDER_MESH_MANAGER;
undefined RENDER_LIGHT_MANAGER;
undefined RENDER_CAMERA_MANAGER;
undefined RENDER_SCENE_MANAGER;
undefined RENDER_VIEW_MANAGER;
undefined RENDER_PROJECTION_MANAGER;
undefined RENDER_VIEWPORT_MANAGER;
undefined RENDER_SCISSOR_MANAGER;
undefined RENDER_CLEAR_MANAGER;
undefined RENDER_DRAW_MANAGER;
undefined RENDER_COMPUTE_MANAGER;
undefined RENDER_DISPATCH_MANAGER;
undefined RENDER_INDIRECT_MANAGER;
undefined RENDER_FEEDBACK_MANAGER;
undefined RENDER_TRANSFORM_MANAGER;
undefined RENDER_ANIMATION_MANAGER;
undefined RENDER_PARTICLE_MANAGER;
undefined RENDER_POSTPROCESS_MANAGER;
undefined RENDER_SHADOW_MANAGER;
undefined RENDER_REFLECTION_MANAGER;
undefined RENDER_REFRACTION_MANAGER;
undefined RENDER_OCCLUSION_MANAGER;
undefined RENDER_TESSELLATION_MANAGER;
undefined RENDER_GEOMETRY_MANAGER;
undefined RENDER_COMPUTE_SHADER_MANAGER;
undefined RENDER_TESSELLATION_SHADER_MANAGER;
undefined RENDER_GEOMETRY_SHADER_MANAGER;
undefined RENDER_FRAGMENT_SHADER_MANAGER;
undefined RENDER_VERTEX_SHADER_MANAGER;


// 函数: render_create_context - 创建渲染上下文
undefined render_create_context;
undefined RENDER_CONTEXT_CONFIG;
undefined RENDER_CONTEXT_SETTINGS;
undefined RENDER_CONTEXT_CAPABILITIES;
undefined RENDER_CONTEXT_FORMAT;
undefined RENDER_CONTEXT_PROFILE;
undefined RENDER_CONTEXT_FLAGS;
undefined RENDER_CONTEXT_SHARE_GROUP;
undefined RENDER_CONTEXT_SURFACE;
undefined RENDER_CONTEXT_DEVICE;
undefined RENDER_CONTEXT_SWAP_INTERVAL;
undefined RENDER_CONTEXT_BUFFER_SIZE;
undefined RENDER_CONTEXT_COLOR_BITS;
undefined RENDER_CONTEXT_DEPTH_BITS;
undefined RENDER_CONTEXT_STENCIL_BITS;
undefined RENDER_CONTEXT_SAMPLES;
undefined RENDER_CONTEXT_DOUBLE_BUFFER;
undefined RENDER_CONTEXT_STEREO;
undefined RENDER_CONTEXT_DEBUG;
undefined RENDER_CONTEXT_FORWARD_COMPATIBLE;
undefined RENDER_CONTEXT_CORE_PROFILE;
undefined RENDER_CONTEXT_COMPATIBILITY_PROFILE;
undefined RENDER_CONTEXT_ES_PROFILE;
undefined RENDER_CONTEXT_ROBUST_ACCESS;
undefined RENDER_CONTEXT_RESET_NOTIFICATION;
undefined RENDER_CONTEXT_RELEASE_BEHAVIOR;
undefined RENDER_CONTEXT_NO_ERROR;
undefined RENDER_CONTEXT_LOSE_CONTEXT_ON_RESET;
undefined RENDER_CONTEXT_CONTEXT_FLAGS;
undefined RENDER_CONTEXT_CONTEXT_RELEASE_BEHAVIOR;


// 函数: render_destroy_context - 销毁渲染上下文
undefined render_destroy_context;
undefined RENDER_CONTEXT_DESTRUCTION_CALLBACK;
undefined RENDER_CONTEXT_CLEANUP_HANDLER;
undefined RENDER_CONTEXT_RESOURCE_CLEANER;
undefined RENDER_CONTEXT_MEMORY_RELEASE;


// 函数: render_make_current - 设置当前渲染上下文
undefined render_make_current;
undefined RENDER_CONTEXT_CURRENT_STACK;
undefined RENDER_CONTEXT_CURRENT_DEPTH;
undefined RENDER_CONTEXT_CURRENT_LIMIT;
undefined RENDER_CONTEXT_CURRENT_CAPABILITIES;


// 函数: render_swap_buffers - 交换缓冲区
undefined render_swap_buffers;
undefined RENDER_SWAP_CONFIG;
undefined RENDER_SWAP_INTERVAL;
undefined RENDER_SWAP_FLAGS;
undefined RENDER_SWAP_CALLBACK;
undefined RENDER_SWAP_EVENT_HANDLER;


// 函数: render_set_vsync - 设置垂直同步
undefined render_set_vsync;
undefined VSYNC_ENABLED;
undefined VSYNC_INTERVAL;
undefined VSYNC_MODE;
undefined VSYNC_ADAPTIVE;
undefined VSYNC_TOGGLE_CALLBACK;


// 函数: render_get_error - 获取渲染错误
undefined render_get_error;
undefined RENDER_ERROR_CODE;
undefined RENDER_ERROR_MESSAGE;
undefined RENDER_ERROR_STACK;
undefined RENDER_ERROR_CALLBACK;


// 函数: render_check_extension - 检查扩展支持
undefined render_check_extension;
undefined RENDER_EXTENSION_TABLE;
undefined RENDER_EXTENSION_CACHE;
undefined RENDER_EXTENSION_LOADER;
undefined RENDER_EXTENSION_INITIALIZER;


// 函数: render_load_function - 加载渲染函数
undefined render_load_function;
undefined RENDER_FUNCTION_TABLE;
undefined RENDER_FUNCTION_CACHE;
undefined RENDER_FUNCTION_LOADER;
undefined RENDER_FUNCTION_RESOLVER;


// 函数: render_get_proc_address - 获取函数地址
undefined render_get_proc_address;
undefined RENDER_ADDRESS_CACHE;
undefined RENDER_ADDRESS_TABLE;
undefined RENDER_ADDRESS_RESOLVER;
undefined RENDER_ADDRESS_LOADER;


// 函数: render_get_string - 获取渲染字符串
undefined render_get_string;
undefined RENDER_STRING_CACHE;
undefined RENDER_STRING_TABLE;
undefined RENDER_STRING_LOADER;
undefined RENDER_STRING_RESOLVER;


// 函数: render_get_integer - 获取整数值
undefined render_get_integer;
undefined RENDER_INTEGER_CACHE;
undefined RENDER_INTEGER_TABLE;
undefined RENDER_INTEGER_LOADER;
undefined RENDER_INTEGER_RESOLVER;


// 函数: render_get_float - 获取浮点值
undefined render_get_float;
undefined RENDER_FLOAT_CACHE;
undefined RENDER_FLOAT_TABLE;
undefined RENDER_FLOAT_LOADER;
undefined RENDER_FLOAT_RESOLVER;


// 函数: render_get_boolean - 获取布尔值
undefined render_get_boolean;
undefined RENDER_BOOLEAN_CACHE;
undefined RENDER_BOOLEAN_TABLE;
undefined RENDER_BOOLEAN_LOADER;
undefined RENDER_BOOLEAN_RESOLVER;


// 函数: render_get_integer64 - 获取64位整数值
undefined render_get_integer64;
undefined RENDER_INTEGER64_CACHE;
undefined RENDER_INTEGER64_TABLE;
undefined RENDER_INTEGER64_LOADER;
undefined RENDER_INTEGER64_RESOLVER;


// 函数: render_get_pointer - 获取指针值
undefined render_get_pointer;
undefined RENDER_POINTER_CACHE;
undefined RENDER_POINTER_TABLE;
undefined RENDER_POINTER_LOADER;
undefined RENDER_POINTER_RESOLVER;


// 函数: render_enable - 启用渲染功能
undefined render_enable;
undefined RENDER_ENABLE_CACHE;
undefined RENDER_ENABLE_TABLE;
undefined RENDER_ENABLE_LOADER;
undefined RENDER_ENABLE_RESOLVER;


// 函数: render_disable - 禁用渲染功能
undefined render_disable;
undefined RENDER_DISABLE_CACHE;
undefined RENDER_DISABLE_TABLE;
undefined RENDER_DISABLE_LOADER;
undefined RENDER_DISABLE_RESOLVER;


// 函数: render_is_enabled - 检查功能是否启用
undefined render_is_enabled;
undefined RENDER_ENABLED_CACHE;
undefined RENDER_ENABLED_TABLE;
undefined RENDER_ENABLED_LOADER;
undefined RENDER_ENABLED_RESOLVER;


// 函数: render_get_error - 获取渲染错误
undefined render_get_error;
undefined RENDER_ERROR_CACHE;
undefined RENDER_ERROR_TABLE;
undefined RENDER_ERROR_LOADER;
undefined RENDER_ERROR_RESOLVER;


// 函数: render_finish - 完成渲染操作
undefined render_finish;
undefined RENDER_FINISH_CALLBACK;
undefined RENDER_FINISH_HANDLER;
undefined RENDER_FINISH_EVENT;


// 函数: render_flush - 刷新渲染操作
undefined render_flush;
undefined RENDER_FLUSH_CALLBACK;
undefined RENDER_FLUSH_HANDLER;
undefined RENDER_FLUSH_EVENT;


// 函数: render_hint - 设置渲染提示
undefined render_hint;
undefined RENDER_HINT_CACHE;
undefined RENDER_HINT_TABLE;
undefined RENDER_HINT_LOADER;
undefined RENDER_HINT_RESOLVER;


// 函数: render_clear_color - 设置清除颜色
undefined render_clear_color;
undefined CLEAR_COLOR_CACHE;
undefined CLEAR_COLOR_TABLE;
undefined CLEAR_COLOR_LOADER;
undefined CLEAR_COLOR_RESOLVER;


// 函数: render_clear_depth - 设置清除深度
undefined render_clear_depth;
undefined CLEAR_DEPTH_CACHE;
undefined CLEAR_DEPTH_TABLE;
undefined CLEAR_DEPTH_LOADER;
undefined CLEAR_DEPTH_RESOLVER;


// 函数: render_clear_stencil - 设置清除模板
undefined render_clear_stencil;
undefined CLEAR_STENCIL_CACHE;
undefined CLEAR_STENCIL_TABLE;
undefined CLEAR_STENCIL_LOADER;
undefined CLEAR_STENCIL_RESOLVER;


// 函数: render_clear - 清除渲染缓冲区
undefined render_clear;
undefined CLEAR_BUFFER_CACHE;
undefined CLEAR_BUFFER_TABLE;
undefined CLEAR_BUFFER_LOADER;
undefined CLEAR_BUFFER_RESOLVER;


// 函数: render_draw_arrays - 绘制数组
undefined render_draw_arrays;
undefined DRAW_ARRAYS_CACHE;
undefined DRAW_ARRAYS_TABLE;
undefined DRAW_ARRAYS_LOADER;
undefined DRAW_ARRAYS_RESOLVER;


// 函数: render_draw_elements - 绘制元素
undefined render_draw_elements;
undefined DRAW_ELEMENTS_CACHE;
undefined DRAW_ELEMENTS_TABLE;
undefined DRAW_ELEMENTS_LOADER;
undefined DRAW_ELEMENTS_RESOLVER;


// 函数: render_draw_range_elements - 范围绘制元素
undefined render_draw_range_elements;
undefined DRAW_RANGE_CACHE;
undefined DRAW_RANGE_TABLE;
undefined DRAW_RANGE_LOADER;
undefined DRAW_RANGE_RESOLVER;


// 函数: render_multi_draw_arrays - 多重绘制数组
undefined render_multi_draw_arrays;
undefined MULTI_DRAW_CACHE;
undefined MULTI_DRAW_TABLE;
undefined MULTI_DRAW_LOADER;
undefined MULTI_DRAW_RESOLVER;


// 函数: render_multi_draw_elements - 多重绘制元素
undefined render_multi_draw_elements;
undefined MULTI_DRAW_ELEMENTS_CACHE;
undefined MULTI_DRAW_ELEMENTS_TABLE;
undefined MULTI_DRAW_ELEMENTS_LOADER;
undefined MULTI_DRAW_ELEMENTS_RESOLVER;


// 函数: render_element_buffer - 元素缓冲区操作
undefined render_element_buffer;
undefined ELEMENT_BUFFER_CACHE;
undefined ELEMENT_BUFFER_TABLE;
undefined ELEMENT_BUFFER_LOADER;
undefined ELEMENT_BUFFER_RESOLVER;


// 函数: render_vertex_buffer - 顶点缓冲区操作
undefined render_vertex_buffer;
undefined VERTEX_BUFFER_CACHE;
undefined VERTEX_BUFFER_TABLE;
undefined VERTEX_BUFFER_LOADER;
undefined VERTEX_BUFFER_RESOLVER;


// 函数: render_index_buffer - 索引缓冲区操作
undefined render_index_buffer;
undefined INDEX_BUFFER_CACHE;
undefined INDEX_BUFFER_TABLE;
undefined INDEX_BUFFER_LOADER;
undefined INDEX_BUFFER_RESOLVER;


// 函数: render_uniform_buffer - 统一缓冲区操作
undefined render_uniform_buffer;
undefined UNIFORM_BUFFER_CACHE;
undefined UNIFORM_BUFFER_TABLE;
undefined UNIFORM_BUFFER_LOADER;
undefined UNIFORM_BUFFER_RESOLVER;


// 函数: render_shader_storage_buffer - 着色器存储缓冲区操作
undefined render_shader_storage_buffer;
undefined SHADER_STORAGE_CACHE;
undefined SHADER_STORAGE_TABLE;
undefined SHADER_STORAGE_LOADER;
undefined SHADER_STORAGE_RESOLVER;


// 函数: render_atomic_counter_buffer - 原子计数器缓冲区操作
undefined render_atomic_counter_buffer;
undefined ATOMIC_COUNTER_CACHE;
undefined ATOMIC_COUNTER_TABLE;
undefined ATOMIC_COUNTER_LOADER;
undefined ATOMIC_COUNTER_RESOLVER;


// 函数: render_transform_feedback_buffer - 变换反馈缓冲区操作
undefined render_transform_feedback_buffer;
undefined TRANSFORM_FEEDBACK_CACHE;
undefined TRANSFORM_FEEDBACK_TABLE;
undefined TRANSFORM_FEEDBACK_LOADER;
undefined TRANSFORM_FEEDBACK_RESOLVER;


// 函数: render_pixel_buffer - 像素缓冲区操作
undefined render_pixel_buffer;
undefined PIXEL_BUFFER_CACHE;
undefined PIXEL_BUFFER_TABLE;
undefined PIXEL_BUFFER_LOADER;
undefined PIXEL_BUFFER_RESOLVER;


// 函数: render_copy_buffer - 复制缓冲区
undefined render_copy_buffer;
undefined COPY_BUFFER_CACHE;
undefined COPY_BUFFER_TABLE;
undefined COPY_BUFFER_LOADER;
undefined COPY_BUFFER_RESOLVER;


// 函数: render_copy_buffer_sub_data - 复制缓冲区子数据
undefined render_copy_buffer_sub_data;
undefined COPY_SUB_DATA_CACHE;
undefined COPY_SUB_DATA_TABLE;
undefined COPY_SUB_DATA_LOADER;
undefined COPY_SUB_DATA_RESOLVER;


// 函数: render_get_buffer_sub_data - 获取缓冲区子数据
undefined render_get_buffer_sub_data;
undefined GET_SUB_DATA_CACHE;
undefined GET_SUB_DATA_TABLE;
undefined GET_SUB_DATA_LOADER;
undefined GET_SUB_DATA_RESOLVER;


// 函数: render_buffer_data - 缓冲区数据操作
undefined render_buffer_data;
undefined BUFFER_DATA_CACHE;
undefined BUFFER_DATA_TABLE;
undefined BUFFER_DATA_LOADER;
undefined BUFFER_DATA_RESOLVER;


// 函数: render_buffer_sub_data - 缓冲区子数据操作
undefined render_buffer_sub_data;
undefined BUFFER_SUB_DATA_CACHE;
undefined BUFFER_SUB_DATA_TABLE;
undefined BUFFER_SUB_DATA_LOADER;
undefined BUFFER_SUB_DATA_RESOLVER;


// 函数: render_get_buffer_parameter - 获取缓冲区参数
undefined render_get_buffer_parameter;
undefined BUFFER_PARAMETER_CACHE;
undefined BUFFER_PARAMETER_TABLE;
undefined BUFFER_PARAMETER_LOADER;
undefined BUFFER_PARAMETER_RESOLVER;


// 函数: render_get_buffer_pointer - 获取缓冲区指针
undefined render_get_buffer_pointer;
undefined BUFFER_POINTER_CACHE;
undefined BUFFER_POINTER_TABLE;
undefined BUFFER_POINTER_LOADER;
undefined BUFFER_POINTER_RESOLVER;


// 函数: render_map_buffer - 映射缓冲区
undefined render_map_buffer;
undefined MAP_BUFFER_CACHE;
undefined MAP_BUFFER_TABLE;
undefined MAP_BUFFER_LOADER;
undefined MAP_BUFFER_RESOLVER;


// 函数: render_map_buffer_range - 映射缓冲区范围
undefined render_map_buffer_range;
undefined MAP_RANGE_CACHE;
undefined MAP_RANGE_TABLE;
undefined MAP_RANGE_LOADER;
undefined MAP_RANGE_RESOLVER;


// 函数: render_unmap_buffer - 解除映射缓冲区
undefined render_unmap_buffer;
undefined UNMAP_BUFFER_CACHE;
undefined UNMAP_BUFFER_TABLE;
undefined UNMAP_BUFFER_LOADER;
undefined UNMAP_BUFFER_RESOLVER;


// 函数: render_flush_mapped_buffer_range - 刷新映射缓冲区范围
undefined render_flush_mapped_buffer_range;
undefined FLUSH_MAPPED_CACHE;
undefined FLUSH_MAPPED_TABLE;
undefined FLUSH_MAPPED_LOADER;
undefined FLUSH_MAPPED_RESOLVER;


// 函数: render_invalidate_buffer_sub_data - 使缓冲区子数据失效
undefined render_invalidate_buffer_sub_data;
undefined INVALIDATE_SUB_DATA_CACHE;
undefined INVALIDATE_SUB_DATA_TABLE;
undefined INVALIDATE_SUB_DATA_LOADER;
undefined INVALIDATE_SUB_DATA_RESOLVER;


// 函数: render_invalidate_buffer_data - 使缓冲区数据失效
undefined render_invalidate_buffer_data;
undefined INVALIDATE_DATA_CACHE;
undefined INVALIDATE_DATA_TABLE;
undefined INVALIDATE_DATA_LOADER;
undefined INVALIDATE_DATA_RESOLVER;


// 渲染器状态和配置模块 (地址: 0x180380510 - 0x1804069d0)
// 函数: render_get_context - 获取渲染上下文
undefined render_get_context;


// 函数: render_set_context - 设置渲染上下文
undefined render_set_context;
undefined RENDER_CONTEXT_STACK;


// 函数: render_create_window - 创建渲染窗口
undefined render_create_window;


// 函数: render_destroy_window - 销毁渲染窗口
undefined render_destroy_window;
undefined WINDOW_CONFIG_TABLE;
undefined WINDOW_SURFACE_CONFIG;
undefined WINDOW_DISPLAY_CONFIG;


// 函数: render_make_window_current - 设置当前渲染窗口
undefined render_make_window_current;
undefined WINDOW_CURRENT_STACK;
undefined WINDOW_CONTEXT_TABLE;
undefined WINDOW_SURFACE_TABLE;
undefined WINDOW_DISPLAY_TABLE;


// 函数: render_get_window_proc_address - 获取窗口函数地址
undefined render_get_window_proc_address;
undefined WINDOW_FUNCTION_CACHE;
undefined WINDOW_FUNCTION_TABLE;
undefined WINDOW_FUNCTION_LOADER;
undefined WINDOW_FUNCTION_RESOLVER;


// 函数: render_swap_window_buffers - 交换窗口缓冲区
undefined render_swap_window_buffers;
undefined WINDOW_SWAP_CONFIG;
undefined WINDOW_SWAP_INTERVAL;
undefined WINDOW_SWAP_FLAGS;
undefined WINDOW_SWAP_CALLBACK;
undefined WINDOW_SWAP_EVENT_HANDLER;


// 函数: render_set_window_size - 设置窗口大小
undefined render_set_window_size;
undefined WINDOW_SIZE_CACHE;
undefined WINDOW_SIZE_TABLE;
undefined WINDOW_SIZE_LOADER;
undefined WINDOW_SIZE_RESOLVER;


// 函数: render_get_window_size - 获取窗口大小
undefined render_get_window_size;
undefined WINDOW_DIMENSION_CACHE;
undefined WINDOW_DIMENSION_TABLE;
undefined WINDOW_DIMENSION_LOADER;
undefined WINDOW_DIMENSION_RESOLVER;


// 函数: render_set_window_position - 设置窗口位置
undefined render_set_window_position;
undefined WINDOW_POSITION_CACHE;
undefined WINDOW_POSITION_TABLE;
undefined WINDOW_POSITION_LOADER;
undefined WINDOW_POSITION_RESOLVER;


// 函数: render_get_window_position - 获取窗口位置
undefined render_get_window_position;
undefined WINDOW_LOCATION_CACHE;
undefined WINDOW_LOCATION_TABLE;
undefined WINDOW_LOCATION_LOADER;
undefined WINDOW_LOCATION_RESOLVER;


// 函数: render_set_window_title - 设置窗口标题
undefined render_set_window_title;
undefined WINDOW_TITLE_CACHE;
undefined WINDOW_TITLE_TABLE;
undefined WINDOW_TITLE_LOADER;
undefined WINDOW_TITLE_RESOLVER;


// 函数: render_get_window_title - 获取窗口标题
undefined render_get_window_title;
undefined WINDOW_NAME_CACHE;
undefined WINDOW_NAME_TABLE;
undefined WINDOW_NAME_LOADER;
undefined WINDOW_NAME_RESOLVER;


// 函数: render_set_window_icon - 设置窗口图标
undefined render_set_window_icon;
undefined WINDOW_ICON_CACHE;
undefined WINDOW_ICON_TABLE;
undefined WINDOW_ICON_LOADER;
undefined WINDOW_ICON_RESOLVER;


// 函数: render_get_window_icon - 获取窗口图标
undefined render_get_window_icon;
undefined WINDOW_IMAGE_CACHE;
undefined WINDOW_IMAGE_TABLE;
undefined WINDOW_IMAGE_LOADER;
undefined WINDOW_IMAGE_RESOLVER;


// 函数: render_set_window_opacity - 设置窗口透明度
undefined render_set_window_opacity;
undefined WINDOW_OPACITY_CACHE;
undefined WINDOW_OPACITY_TABLE;
undefined WINDOW_OPACITY_LOADER;
undefined WINDOW_OPACITY_RESOLVER;


// 函数: render_get_window_opacity - 获取窗口透明度
undefined render_get_window_opacity;
undefined WINDOW_ALPHA_CACHE;
undefined WINDOW_ALPHA_TABLE;
undefined WINDOW_ALPHA_LOADER;
undefined WINDOW_ALPHA_RESOLVER;


// 函数: render_set_window_focus - 设置窗口焦点
undefined render_set_window_focus;
undefined WINDOW_FOCUS_CACHE;
undefined WINDOW_FOCUS_TABLE;
undefined WINDOW_FOCUS_LOADER;
undefined WINDOW_FOCUS_RESOLVER;


// 函数: render_get_window_focus - 获取窗口焦点
undefined render_get_window_focus;
undefined WINDOW_ACTIVE_CACHE;
undefined WINDOW_ACTIVE_TABLE;
undefined WINDOW_ACTIVE_LOADER;
undefined WINDOW_ACTIVE_RESOLVER;


// 函数: render_set_window_visible - 设置窗口可见性
undefined render_set_window_visible;
undefined WINDOW_VISIBLE_CACHE;
undefined WINDOW_VISIBLE_TABLE;
undefined WINDOW_VISIBLE_LOADER;
undefined WINDOW_VISIBLE_RESOLVER;


// 函数: render_get_window_visible - 获取窗口可见性
undefined render_get_window_visible;
undefined WINDOW_SHOWN_CACHE;
undefined WINDOW_SHOWN_TABLE;
undefined WINDOW_SHOWN_LOADER;
undefined WINDOW_SHOWN_RESOLVER;


// 函数: render_set_window_minimized - 设置窗口最小化
undefined render_set_window_minimized;
undefined WINDOW_MINIMIZED_CACHE;
undefined WINDOW_MINIMIZED_TABLE;
undefined WINDOW_MINIMIZED_LOADER;
undefined WINDOW_MINIMIZED_RESOLVER;


// 函数: render_get_window_minimized - 获取窗口最小化
undefined render_get_window_minimized;
undefined WINDOW_ICONIFIED_CACHE;
undefined WINDOW_ICONIFIED_TABLE;
undefined WINDOW_ICONIFIED_LOADER;
undefined WINDOW_ICONIFIED_RESOLVER;


// 函数: render_set_window_maximized - 设置窗口最大化
undefined render_set_window_maximized;
undefined WINDOW_MAXIMIZED_CACHE;
undefined WINDOW_MAXIMIZED_TABLE;
undefined WINDOW_MAXIMIZED_LOADER;
undefined WINDOW_MAXIMIZED_RESOLVER;


// 函数: render_get_window_maximized - 获取窗口最大化
undefined render_get_window_maximized;
undefined WINDOW_FULLSCREEN_CACHE;
undefined WINDOW_FULLSCREEN_TABLE;
undefined WINDOW_FULLSCREEN_LOADER;
undefined WINDOW_FULLSCREEN_RESOLVER;


// 函数: render_set_window_fullscreen - 设置窗口全屏
undefined render_set_window_fullscreen;
undefined WINDOW_FULLSCREEN_MODE_CACHE;
undefined WINDOW_FULLSCREEN_MODE_TABLE;
undefined WINDOW_FULLSCREEN_MODE_LOADER;
undefined WINDOW_FULLSCREEN_MODE_RESOLVER;


// 函数: render_get_window_fullscreen - 获取窗口全屏
undefined render_get_window_fullscreen;
undefined WINDOW_DISPLAY_MODE_CACHE;
undefined WINDOW_DISPLAY_MODE_TABLE;
undefined WINDOW_DISPLAY_MODE_LOADER;
undefined WINDOW_DISPLAY_MODE_RESOLVER;


// 函数: render_set_window_borderless - 设置窗口无边框
undefined render_set_window_borderless;
undefined WINDOW_BORDERLESS_CACHE;
undefined WINDOW_BORDERLESS_TABLE;
undefined WINDOW_BORDERLESS_LOADER;
undefined WINDOW_BORDERLESS_RESOLVER;


// 函数: render_get_window_borderless - 获取窗口无边框
undefined render_get_window_borderless;
undefined WINDOW_NO_BORDER_CACHE;
undefined WINDOW_NO_BORDER_TABLE;
undefined WINDOW_NO_BORDER_LOADER;
undefined WINDOW_NO_BORDER_RESOLVER;


// 函数: render_set_window_resizable - 设置窗口可调整大小
undefined render_set_window_resizable;
undefined WINDOW_RESIZABLE_CACHE;
undefined WINDOW_RESIZABLE_TABLE;
undefined WINDOW_RESIZABLE_LOADER;
undefined WINDOW_RESIZABLE_RESOLVER;


// 函数: render_get_window_resizable - 获取窗口可调整大小
undefined render_get_window_resizable;
undefined WINDOW_CAN_RESIZE_CACHE;
undefined WINDOW_CAN_RESIZE_TABLE;
undefined WINDOW_CAN_RESIZE_LOADER;
undefined WINDOW_CAN_RESIZE_RESOLVER;


// 函数: render_set_window_always_on_top - 设置窗口置顶
undefined render_set_window_always_on_top;
undefined WINDOW_ON_TOP_CACHE;
undefined WINDOW_ON_TOP_TABLE;
undefined WINDOW_ON_TOP_LOADER;
undefined WINDOW_ON_TOP_RESOLVER;


// 函数: render_get_window_always_on_top - 获取窗口置顶
undefined render_get_window_always_on_top;
undefined WINDOW_TOPMOST_CACHE;
undefined WINDOW_TOPMOST_TABLE;
undefined WINDOW_TOPMOST_LOADER;
undefined WINDOW_TOPMOST_RESOLVER;


// 函数: render_set_window_min_size - 设置窗口最小大小
undefined render_set_window_min_size;
undefined WINDOW_MIN_SIZE_CACHE;
undefined WINDOW_MIN_SIZE_TABLE;
undefined WINDOW_MIN_SIZE_LOADER;
undefined WINDOW_MIN_SIZE_RESOLVER;


// 函数: render_get_window_min_size - 获取窗口最小大小
undefined render_get_window_min_size;
undefined WINDOW_MINIMUM_SIZE_CACHE;
undefined WINDOW_MINIMUM_SIZE_TABLE;
undefined WINDOW_MINIMUM_SIZE_LOADER;
undefined WINDOW_MINIMUM_SIZE_RESOLVER;


// 函数: render_set_window_max_size - 设置窗口最大大小
undefined render_set_window_max_size;
undefined WINDOW_MAX_SIZE_CACHE;
undefined WINDOW_MAX_SIZE_TABLE;
undefined WINDOW_MAX_SIZE_LOADER;
undefined WINDOW_MAX_SIZE_RESOLVER;


// 函数: render_get_window_max_size - 获取窗口最大大小
undefined render_get_window_max_size;
undefined WINDOW_MAXIMUM_SIZE_CACHE;
undefined WINDOW_MAXIMUM_SIZE_TABLE;
undefined WINDOW_MAXIMUM_SIZE_LOADER;
undefined WINDOW_MAXIMUM_SIZE_RESOLVER;


// 函数: render_set_window_aspect_ratio - 设置窗口宽高比
undefined render_set_window_aspect_ratio;
undefined WINDOW_ASPECT_CACHE;
undefined WINDOW_ASPECT_TABLE;
undefined WINDOW_ASPECT_LOADER;
undefined WINDOW_ASPECT_RESOLVER;


// 函数: render_get_window_aspect_ratio - 获取窗口宽高比
undefined render_get_window_aspect_ratio;
undefined WINDOW_RATIO_CACHE;
undefined WINDOW_RATIO_TABLE;
undefined WINDOW_RATIO_LOADER;
undefined WINDOW_RATIO_RESOLVER;


// 函数: render_set_window_gamma - 设置窗口伽马值
undefined render_set_window_gamma;
undefined WINDOW_GAMMA_CACHE;
undefined WINDOW_GAMMA_TABLE;
undefined WINDOW_GAMMA_LOADER;
undefined WINDOW_GAMMA_RESOLVER;


// 函数: render_get_window_gamma - 获取窗口伽马值
undefined render_get_window_gamma;
undefined WINDOW_GAMMA_VALUE_CACHE;
undefined WINDOW_GAMMA_VALUE_TABLE;
undefined WINDOW_GAMMA_VALUE_LOADER;
undefined WINDOW_GAMMA_VALUE_RESOLVER;


// 函数: render_set_window_brightness - 设置窗口亮度
undefined render_set_window_brightness;
undefined WINDOW_BRIGHTNESS_CACHE;
undefined WINDOW_BRIGHTNESS_TABLE;
undefined WINDOW_BRIGHTNESS_LOADER;
undefined WINDOW_BRIGHTNESS_RESOLVER;


// 函数: render_get_window_brightness - 获取窗口亮度
undefined render_get_window_brightness;
undefined WINDOW_BRIGHTNESS_VALUE_CACHE;
undefined WINDOW_BRIGHTNESS_VALUE_TABLE;
undefined WINDOW_BRIGHTNESS_VALUE_LOADER;
undefined WINDOW_BRIGHTNESS_VALUE_RESOLVER;


// 函数: render_set_window_contrast - 设置窗口对比度
undefined render_set_window_contrast;
undefined WINDOW_CONTRAST_CACHE;
undefined WINDOW_CONTRAST_TABLE;
undefined WINDOW_CONTRAST_LOADER;
undefined WINDOW_CONTRAST_RESOLVER;


// 函数: render_get_window_contrast - 获取窗口对比度
undefined render_get_window_contrast;
undefined WINDOW_CONTRAST_VALUE_CACHE;
undefined WINDOW_CONTRAST_VALUE_TABLE;
undefined WINDOW_CONTRAST_VALUE_LOADER;
undefined WINDOW_CONTRAST_VALUE_RESOLVER;


// 函数: render_set_window_saturation - 设置窗口饱和度
undefined render_set_window_saturation;
undefined WINDOW_SATURATION_CACHE;
undefined WINDOW_SATURATION_TABLE;
undefined WINDOW_SATURATION_LOADER;
undefined WINDOW_SATURATION_RESOLVER;


// 函数: render_get_window_saturation - 获取窗口饱和度
undefined render_get_window_saturation;
undefined WINDOW_SATURATION_VALUE_CACHE;
undefined WINDOW_SATURATION_VALUE_TABLE;
undefined WINDOW_SATURATION_VALUE_LOADER;
undefined WINDOW_SATURATION_VALUE_RESOLVER;


// 函数: render_set_window_hue - 设置窗口色调
undefined render_set_window_hue;
undefined WINDOW_HUE_CACHE;
undefined WINDOW_HUE_TABLE;
undefined WINDOW_HUE_LOADER;
undefined WINDOW_HUE_RESOLVER;


// 函数: render_get_window_hue - 获取窗口色调
undefined render_get_window_hue;
undefined WINDOW_HUE_VALUE_CACHE;
undefined WINDOW_HUE_VALUE_TABLE;
undefined WINDOW_HUE_VALUE_LOADER;
undefined WINDOW_HUE_VALUE_RESOLVER;


// 函数: render_set_window_color_correction - 设置窗口颜色校正
undefined render_set_window_color_correction;
undefined WINDOW_COLOR_CORRECTION_CACHE;
undefined WINDOW_COLOR_CORRECTION_TABLE;
undefined WINDOW_COLOR_CORRECTION_LOADER;
undefined WINDOW_COLOR_CORRECTION_RESOLVER;


// 函数: render_get_window_color_correction - 获取窗口颜色校正
undefined render_get_window_color_correction;
undefined WINDOW_COLOR_CORRECT_CACHE;
undefined WINDOW_COLOR_CORRECT_TABLE;
undefined WINDOW_COLOR_CORRECT_LOADER;
undefined WINDOW_COLOR_CORRECT_RESOLVER;


// 渲染器设备和硬件管理模块 (地址: 0x180407960 - 0x18041b4d0)
// 函数: render_create_device - 创建渲染设备
undefined render_create_device;
undefined DEVICE_ADAPTER_TABLE;
undefined DEVICE_FEATURE_TABLE;
undefined DEVICE_CAPABILITY_TABLE;
undefined DEVICE_MEMORY_TABLE;
undefined DEVICE_RESOURCE_TABLE;
undefined DEVICE_QUEUE_TABLE;
undefined DEVICE_COMMAND_TABLE;
undefined DEVICE_STATE_TABLE;
undefined DEVICE_PIPELINE_TABLE;
undefined DEVICE_SHADER_TABLE;
undefined DEVICE_TEXTURE_TABLE;
undefined DEVICE_BUFFER_TABLE;
undefined DEVICE_FRAMEBUFFER_TABLE;
undefined DEVICE_RENDERPASS_TABLE;
undefined DEVICE_DESCRIPTOR_TABLE;
undefined DEVICE_SYNCHRONIZATION_TABLE;
undefined DEVICE_QUERY_TABLE;
undefined DEVICE_EVENT_TABLE;
undefined DEVICE_FENCE_TABLE;
undefined DEVICE_SEMAPHORE_TABLE;
undefined DEVICE_BARRIER_TABLE;
undefined DEVICE_MEMORY_POOL;
undefined DEVICE_DESCRIPTOR_POOL;
undefined DEVICE_COMMAND_POOL;
undefined DEVICE_QUEUE_FAMILY;
undefined DEVICE_QUEUE_INDEX;
undefined DEVICE_QUEUE_COUNT;
undefined DEVICE_QUEUE_PRIORITY;
undefined DEVICE_QUEUE_FLAGS;
undefined DEVICE_QUEUE_CAPABILITIES;
undefined DEVICE_QUEUE_PROPERTIES;
undefined DEVICE_QUEUE_CREATE_INFO;
undefined DEVICE_QUEUE_CREATE_FLAGS;
undefined DEVICE_QUEUE_CREATE_COUNT;
undefined DEVICE_QUEUE_CREATE_PRIORITY;
undefined DEVICE_QUEUE_CREATE_INDEX;
undefined DEVICE_QUEUE_CREATE_FAMILY;
undefined DEVICE_QUEUE_CREATE_PROPERTIES;
undefined DEVICE_QUEUE_CREATE_CAPABILITIES;
undefined DEVICE_QUEUE_CREATE_FLAGS;
undefined1 DEVICE_ADAPTER_INFO;
undefined DEVICE_ADAPTER_NAME;
undefined DEVICE_ADAPTER_VENDOR;
undefined DEVICE_ADAPTER_DRIVER;
undefined DEVICE_ADAPTER_VERSION;
undefined DEVICE_ADAPTER_DATE;
undefined DEVICE_ADAPTER_TYPE;
undefined DEVICE_ADAPTER_FLAGS;
undefined DEVICE_ADAPTER_PROPERTIES;
undefined DEVICE_ADAPTER_CAPABILITIES;
undefined DEVICE_ADAPTER_FEATURES;
undefined DEVICE_ADAPTER_EXTENSIONS;
undefined DEVICE_ADAPTER_LAYERS;
undefined DEVICE_ADAPTER_FORMATS;
undefined DEVICE_ADAPTER_MEMORY_TYPES;
undefined DEVICE_ADAPTER_MEMORY_HEAPS;
undefined DEVICE_ADAPTER_QUEUE_FAMILIES;
undefined DEVICE_ADAPTER_PRESENTATION;
undefined DEVICE_ADAPTER_SURFACE;
undefined DEVICE_ADAPTER_DISPLAY;
undefined DEVICE_ADAPTER_MONITOR;
undefined DEVICE_ADAPTER_MODE;
undefined DEVICE_ADAPTER_REFRESH_RATE;
undefined DEVICE_ADAPTER_RESOLUTION;
undefined DEVICE_ADAPTER_COLOR_DEPTH;
undefined DEVICE_ADAPTER_COLOR_FORMAT;
undefined DEVICE_ADAPTER_COLOR_SPACE;
undefined DEVICE_ADAPTER_HDR_SUPPORT;
undefined DEVICE_ADAPTER_VSYNC_SUPPORT;
undefined DEVICE_ADAPTER_FULLSCREEN_SUPPORT;
undefined DEVICE_ADAPTER_WINDOWED_SUPPORT;
undefined DEVICE_ADAPTER_BORDERLESS_SUPPORT;
undefined DEVICE_ADAPTER_RESIZABLE_SUPPORT;
undefined DEVICE_ADAPTER_MINIMIZED_SUPPORT;
undefined DEVICE_ADAPTER_MAXIMIZED_SUPPORT;
undefined DEVICE_ADAPTER_EXCLUSIVE_FULLSCREEN_SUPPORT;
undefined DEVICE_ADAPTER_BORDERLESS_FULLSCREEN_SUPPORT;
undefined DEVICE_ADAPTER_STRETCHED_FULLSCREEN_SUPPORT;
undefined DEVICE_ADAPTER_CENTERED_FULLSCREEN_SUPPORT;
undefined DEVICE_ADAPTER_ASPECT_RATIO_SUPPORT;
undefined DEVICE_ADAPTER_REFRESH_RATE_SUPPORT;
undefined DEVICE_ADAPTER_RESOLUTION_SUPPORT;
undefined DEVICE_ADAPTER_COLOR_DEPTH_SUPPORT;
undefined DEVICE_ADAPTER_COLOR_FORMAT_SUPPORT;
undefined DEVICE_ADAPTER_COLOR_SPACE_SUPPORT;
undefined DEVICE_ADAPTER_HDR_SUPPORT;
undefined DEVICE_ADAPTER_VSYNC_SUPPORT;
undefined DEVICE_ADAPTER_MULTISAMPLE_SUPPORT;
undefined DEVICE_ADAPTER_ANISOTROPY_SUPPORT;
undefined DEVICE_ADAPTER_MIPMAP_SUPPORT;
undefined DEVICE_ADAPTER_COMPRESSION_SUPPORT;
undefined DEVICE_ADAPTER_FLOAT_SUPPORT;
undefined DEVICE_ADAPTER_HALF_SUPPORT;
undefined DEVICE_ADAPTER_DOUBLE_SUPPORT;
undefined DEVICE_ADAPTER_INT_SUPPORT;
undefined DEVICE_ADAPTER_UINT_SUPPORT;
undefined DEVICE_ADAPTER_SINT_SUPPORT;
undefined DEVICE_ADAPTER_DEPTH_SUPPORT;
undefined DEVICE_ADAPTER_STENCIL_SUPPORT;
undefined DEVICE_ADAPTER_BLEND_SUPPORT;
undefined DEVICE_ADAPTER_CULL_SUPPORT;
undefined DEVICE_ADAPTER_SCISSOR_SUPPORT;
undefined DEVICE_ADAPTER_STENCIL_SUPPORT;
undefined DEVICE_ADAPTER_DEPTH_SUPPORT;
undefined DEVICE_ADAPTER_MULTISAMPLE_SUPPORT;
undefined DEVICE_ADAPTER_SAMPLE_SHADING_SUPPORT;
undefined DEVICE_ADAPTER_SAMPLE_MASK_SUPPORT;
undefined DEVICE_ADAPTER_ALPHA_TO_COVERAGE_SUPPORT;
undefined DEVICE_ADAPTER_ALPHA_TO_ONE_SUPPORT;
undefined DEVICE_ADAPTER_DEPTH_CLAMP_SUPPORT;
undefined DEVICE_ADAPTER_DEPTH_BIAS_SUPPORT;
undefined DEVICE_ADAPTER_FILL_MODE_SUPPORT;
undefined DEVICE_ADAPTER_CULL_MODE_SUPPORT;
undefined DEVICE_ADAPTER_FRONT_FACE_SUPPORT;
undefined DEVICE_ADAPTER_PRIMITIVE_RESTART_SUPPORT;
undefined DEVICE_ADAPTER_PRIMITIVE_TOPOLOGY_SUPPORT;
undefined DEVICE_ADAPTER_VERTEX_INPUT_SUPPORT;
undefined DEVICE_ADAPTER_VERTEX_ATTRIBUTE_SUPPORT;
undefined DEVICE_ADAPTER_VERTEX_BINDING_SUPPORT;
undefined DEVICE_ADAPTER_VERTEX_DIVISOR_SUPPORT;
undefined DEVICE_ADAPTER_INPUT_ASSEMBLY_SUPPORT;
undefined DEVICE_ADAPTER_TESSELLATION_SUPPORT;
undefined DEVICE_ADAPTER_GEOMETRY_SUPPORT;
undefined DEVICE_ADAPTER_FRAGMENT_SUPPORT;
undefined DEVICE_ADAPTER_COMPUTE_SUPPORT;
undefined DEVICE_ADAPTER_RAYTRACING_SUPPORT;
undefined DEVICE_ADAPTER_MESH_SUPPORT;
undefined DEVICE_ADAPTER_TASK_SUPPORT;
undefined DEVICE_ADAPTER_COLLISION_SUPPORT;
undefined DEVICE_ADAPTER_OCCLUSION_SUPPORT;
undefined DEVICE_ADAPTER_CONDITIONAL_SUPPORT;
undefined DEVICE_ADAPTER_TRANSFORM_SUPPORT;
undefined DEVICE_ADAPTER_FEEDBACK_SUPPORT;
undefined DEVICE_ADAPTER_INDIRECT_SUPPORT;
undefined DEVICE_ADAPTER_DRAW_SUPPORT;
undefined DEVICE_ADAPTER_DISPATCH_SUPPORT;
undefined DEVICE_ADAPTER_CLEAR_SUPPORT;
undefined DEVICE_ADAPTER_COPY_SUPPORT;
undefined DEVICE_ADAPTER_BLIT_SUPPORT;
undefined DEVICE_ADAPTER_RESOLVE_SUPPORT;
undefined DEVICE_ADAPTER_GENERATE_SUPPORT;
undefined DEVICE_ADAPTER_INVALIDATE_SUPPORT;
undefined DEVICE_ADAPTER_FLUSH_SUPPORT;
undefined DEVICE_ADAPTER_FINISH_SUPPORT;
undefined DEVICE_ADAPTER_FENCE_SUPPORT;
undefined DEVICE_ADAPTER_SEMAPHORE_SUPPORT;
undefined DEVICE_ADAPTER_EVENT_SUPPORT;
undefined DEVICE_ADAPTER_QUERY_SUPPORT;
undefined DEVICE_ADAPTER_TIMER_SUPPORT;
undefined DEVICE_ADAPTER_PIPELINE_SUPPORT;
undefined DEVICE_ADAPTER_DESCRIPTOR_SUPPORT;
undefined DEVICE_ADAPTER_RENDER_PASS_SUPPORT;
undefined DEVICE_ADAPTER_FRAMEBUFFER_SUPPORT;
undefined DEVICE_ADAPTER_TEXTURE_SUPPORT;
undefined DEVICE_ADAPTER_BUFFER_SUPPORT;
undefined DEVICE_ADAPTER_IMAGE_SUPPORT;
undefined DEVICE_ADAPTER_SAMPLER_SUPPORT;
undefined DEVICE_ADAPTER_SHADER_SUPPORT;
undefined DEVICE_ADAPTER_SPIRV_SUPPORT;
undefined DEVICE_ADAPTER_GLSL_SUPPORT;
undefined DEVICE_ADAPTER_HLSL_SUPPORT;
undefined DEVICE_ADAPTER_MSL_SUPPORT;
undefined DEVICE_ADAPTER_DXC_SUPPORT;
undefined DEVICE_ADAPTER_GLSLANG_SUPPORT;
undefined DEVICE_ADAPTER_SHADERC_SUPPORT;
undefined DEVICE_ADAPTER_SPIRV_CROSS_SUPPORT;
undefined DEVICE_ADAPTER_SPIRV_TOOLS_SUPPORT;
undefined DEVICE_ADAPTER_VULKAN_SUPPORT;
undefined DEVICE_ADAPTER_DIRECTX_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_SUPPORT;
undefined DEVICE_ADAPTER_OPENGLES_SUPPORT;
undefined DEVICE_ADAPTER_METAL_SUPPORT;
undefined DEVICE_ADAPTER_D3D12_SUPPORT;
undefined DEVICE_ADAPTER_D3D11_SUPPORT;
undefined DEVICE_ADAPTER_D3D10_SUPPORT;
undefined DEVICE_ADAPTER_D3D9_SUPPORT;
undefined DEVICE_ADAPTER_VULKAN_1_0_SUPPORT;
undefined DEVICE_ADAPTER_VULKAN_1_1_SUPPORT;
undefined DEVICE_ADAPTER_VULKAN_1_2_SUPPORT;
undefined DEVICE_ADAPTER_VULKAN_1_3_SUPPORT;
undefined DEVICE_ADAPTER_DIRECTX_12_SUPPORT;
undefined DEVICE_ADAPTER_DIRECTX_11_SUPPORT;
undefined DEVICE_ADAPTER_DIRECTX_10_SUPPORT;
undefined DEVICE_ADAPTER_DIRECTX_9_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_3_0_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_3_1_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_3_2_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_3_3_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_4_0_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_4_1_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_4_2_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_4_3_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_4_4_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_4_5_SUPPORT;
undefined DEVICE_ADAPTER_OPENGL_4_6_SUPPORT;
undefined DEVICE_ADAPTER_OPENGLES_2_0_SUPPORT;
undefined DEVICE_ADAPTER_OPENGLES_3_0_SUPPORT;
undefined DEVICE_ADAPTER_OPENGLES_3_1_SUPPORT;
undefined DEVICE_ADAPTER_OPENGLES_3_2_SUPPORT;
undefined DEVICE_ADAPTER_METAL_SUPPORT;
undefined DEVICE_ADAPTER_METAL_2_SUPPORT;
undefined DEVICE_ADAPTER_METAL_3_SUPPORT;


// 函数: render_destroy_device - 销毁渲染设备
undefined render_destroy_device;
undefined DEVICE_DESTRUCTION_CALLBACK;
undefined DEVICE_CLEANUP_HANDLER;
undefined DEVICE_RESOURCE_CLEANER;
undefined DEVICE_MEMORY_RELEASE;
undefined DEVICE_QUEUE_RELEASE;
undefined DEVICE_COMMAND_RELEASE;
undefined DEVICE_DESCRIPTOR_RELEASE;
undefined DEVICE_PIPELINE_RELEASE;
undefined DEVICE_SHADER_RELEASE;
undefined DEVICE_TEXTURE_RELEASE;
undefined DEVICE_BUFFER_RELEASE;
undefined DEVICE_FRAMEBUFFER_RELEASE;
undefined DEVICE_RENDERPASS_RELEASE;
undefined DEVICE_SYNCHRONIZATION_RELEASE;
undefined DEVICE_QUERY_RELEASE;
undefined DEVICE_EVENT_RELEASE;
undefined DEVICE_FENCE_RELEASE;
undefined DEVICE_SEMAPHORE_RELEASE;
undefined DEVICE_BARRIER_RELEASE;
undefined DEVICE_POOL_RELEASE;
undefined DEVICE_HEAP_RELEASE;
undefined DEVICE_ALLOCATOR_RELEASE;
undefined DEVICE_CONTEXT_RELEASE;
undefined DEVICE_SURFACE_RELEASE;
undefined DEVICE_SWAPCHAIN_RELEASE;
undefined DEVICE_PRESENT_RELEASE;
undefined DEVICE_DISPLAY_RELEASE;
undefined DEVICE_ADAPTER_RELEASE;
undefined DEVICE_DRIVER_RELEASE;
undefined DEVICE_INSTANCE_RELEASE;
undefined DEVICE_LAYER_RELEASE;
undefined DEVICE_EXTENSION_RELEASE;
undefined DEVICE_FEATURE_RELEASE;
undefined DEVICE_CAPABILITY_RELEASE;
undefined DEVICE_LIMIT_RELEASE;
undefined DEVICE_PROPERTY_RELEASE;
undefined DEVICE_FORMAT_RELEASE;
undefined DEVICE_MEMORY_RELEASE;
undefined DEVICE_QUEUE_RELEASE;
undefined DEVICE_COMMAND_RELEASE;
undefined DEVICE_PIPELINE_RELEASE;
undefined DEVICE_SHADER_RELEASE;
undefined DEVICE_TEXTURE_RELEASE;
undefined DEVICE_BUFFER_RELEASE;
undefined DEVICE_FRAMEBUFFER_RELEASE;
undefined DEVICE_RENDERPASS_RELEASE;
undefined DEVICE_DESCRIPTOR_RELEASE;
undefined DEVICE_SYNCHRONIZATION_RELEASE;
undefined DEVICE_QUERY_RELEASE;
undefined DEVICE_EVENT_RELEASE;
undefined DEVICE_FENCE_RELEASE;
undefined DEVICE_SEMAPHORE_RELEASE;
undefined DEVICE_BARRIER_RELEASE;
undefined DEVICE_POOL_RELEASE;
undefined DEVICE_HEAP_RELEASE;
undefined DEVICE_ALLOCATOR_RELEASE;
undefined DEVICE_CONTEXT_RELEASE;
undefined DEVICE_SURFACE_RELEASE;
undefined DEVICE_SWAPCHAIN_RELEASE;
undefined DEVICE_PRESENT_RELEASE;
undefined DEVICE_DISPLAY_RELEASE;
undefined DEVICE_ADAPTER_RELEASE;
undefined DEVICE_DRIVER_RELEASE;
undefined DEVICE_INSTANCE_RELEASE;
undefined DEVICE_LAYER_RELEASE;
undefined DEVICE_EXTENSION_RELEASE;
undefined DEVICE_FEATURE_RELEASE;
undefined DEVICE_CAPABILITY_RELEASE;
undefined DEVICE_LIMIT_RELEASE;
undefined DEVICE_PROPERTY_RELEASE;
undefined DEVICE_FORMAT_RELEASE;
undefined DEVICE_MEMORY_TYPE_RELEASE;
undefined DEVICE_MEMORY_HEAP_RELEASE;
undefined DEVICE_MEMORY_POOL_RELEASE;
undefined DEVICE_MEMORY_ALLOCATOR_RELEASE;
undefined DEVICE_QUEUE_FAMILY_RELEASE;
undefined DEVICE_QUEUE_INDEX_RELEASE;
undefined DEVICE_QUEUE_COUNT_RELEASE;
undefined DEVICE_QUEUE_PRIORITY_RELEASE;
undefined DEVICE_QUEUE_FLAGS_RELEASE;
undefined DEVICE_QUEUE_CAPABILITIES_RELEASE;
undefined DEVICE_QUEUE_PROPERTIES_RELEASE;
undefined DEVICE_QUEUE_CREATE_INFO_RELEASE;
undefined DEVICE_QUEUE_CREATE_FLAGS_RELEASE;
undefined DEVICE_QUEUE_CREATE_COUNT_RELEASE;
undefined DEVICE_QUEUE_CREATE_PRIORITY_RELEASE;
undefined DEVICE_QUEUE_CREATE_INDEX_RELEASE;
undefined DEVICE_QUEUE_CREATE_FAMILY_RELEASE;
undefined DEVICE_QUEUE_CREATE_PROPERTIES_RELEASE;
undefined DEVICE_QUEUE_CREATE_CAPABILITIES_RELEASE;
undefined DEVICE_QUEUE_CREATE_FLAGS_RELEASE;
undefined DEVICE_ADAPTER_INFO_RELEASE;
undefined DEVICE_ADAPTER_NAME_RELEASE;
undefined DEVICE_ADAPTER_VENDOR_RELEASE;
undefined DEVICE_ADAPTER_DRIVER_RELEASE;
undefined DEVICE_ADAPTER_VERSION_RELEASE;
undefined DEVICE_ADAPTER_DATE_RELEASE;
undefined DEVICE_ADAPTER_TYPE_RELEASE;
undefined DEVICE_ADAPTER_FLAGS_RELEASE;
undefined DEVICE_ADAPTER_PROPERTIES_RELEASE;
undefined DEVICE_ADAPTER_CAPABILITIES_RELEASE;
undefined DEVICE_ADAPTER_FEATURES_RELEASE;
undefined DEVICE_ADAPTER_EXTENSIONS_RELEASE;
undefined DEVICE_ADAPTER_LAYERS_RELEASE;
undefined DEVICE_ADAPTER_FORMATS_RELEASE;
undefined DEVICE_ADAPTER_MEMORY_TYPES_RELEASE;
undefined DEVICE_ADAPTER_MEMORY_HEAPS_RELEASE;
undefined DEVICE_ADAPTER_QUEUE_FAMILIES_RELEASE;
undefined DEVICE_ADAPTER_PRESENTATION_RELEASE;
undefined DEVICE_ADAPTER_SURFACE_RELEASE;
undefined DEVICE_ADAPTER_DISPLAY_RELEASE;
undefined DEVICE_ADAPTER_MONITOR_RELEASE;
undefined DEVICE_ADAPTER_MODE_RELEASE;
undefined DEVICE_ADAPTER_REFRESH_RATE_RELEASE;
undefined DEVICE_ADAPTER_RESOLUTION_RELEASE;
undefined DEVICE_ADAPTER_COLOR_DEPTH_RELEASE;
undefined DEVICE_ADAPTER_COLOR_FORMAT_RELEASE;
undefined DEVICE_ADAPTER_COLOR_SPACE_RELEASE;
undefined DEVICE_ADAPTER_HDR_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VSYNC_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FULLSCREEN_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_WINDOWED_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_BORDERLESS_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_RESIZABLE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_MINIMIZED_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_MAXIMIZED_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_EXCLUSIVE_FULLSCREEN_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_BORDERLESS_FULLSCREEN_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_STRETCHED_FULLSCREEN_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_CENTERED_FULLSCREEN_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_ASPECT_RATIO_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_REFRESH_RATE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_RESOLUTION_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_COLOR_DEPTH_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_COLOR_FORMAT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_COLOR_SPACE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_HDR_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VSYNC_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_MULTISAMPLE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_ANISOTROPY_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_MIPMAP_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_COMPRESSION_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FLOAT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_HALF_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DOUBLE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_INT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_UINT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SINT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DEPTH_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_STENCIL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_BLEND_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_CULL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SCISSOR_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_STENCIL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DEPTH_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_MULTISAMPLE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SAMPLE_SHADING_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SAMPLE_MASK_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_ALPHA_TO_COVERAGE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_ALPHA_TO_ONE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DEPTH_CLAMP_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DEPTH_BIAS_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FILL_MODE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_CULL_MODE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FRONT_FACE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_PRIMITIVE_RESTART_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_PRIMITIVE_TOPOLOGY_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VERTEX_INPUT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VERTEX_ATTRIBUTE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VERTEX_BINDING_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VERTEX_DIVISOR_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_INPUT_ASSEMBLY_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_TESSELLATION_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_GEOMETRY_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FRAGMENT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_COMPUTE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_RAYTRACING_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_MESH_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_TASK_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_COLLISION_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OCCLUSION_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_CONDITIONAL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_TRANSFORM_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FEEDBACK_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_INDIRECT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DRAW_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DISPATCH_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_CLEAR_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_COPY_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_BLIT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_RESOLVE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_GENERATE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_INVALIDATE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FLUSH_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FINISH_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FENCE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SEMAPHORE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_EVENT_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_QUERY_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_TIMER_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_PIPELINE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DESCRIPTOR_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_RENDER_PASS_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_FRAMEBUFFER_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_TEXTURE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_BUFFER_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_IMAGE_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SAMPLER_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SHADER_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SPIRV_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_GLSL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_HLSL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_MSL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DXC_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_GLSLANG_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SHADERC_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SPIRV_CROSS_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_SPIRV_TOOLS_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VULKAN_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DIRECTX_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGLES_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_METAL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_D3D12_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_D3D11_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_D3D10_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_D3D9_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VULKAN_1_0_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VULKAN_1_1_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VULKAN_1_2_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_VULKAN_1_3_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DIRECTX_12_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DIRECTX_11_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DIRECTX_10_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_DIRECTX_9_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_3_0_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_3_1_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_3_2_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_3_3_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_4_0_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_4_1_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_4_2_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_4_3_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_4_4_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_4_5_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGL_4_6_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGLES_2_0_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGLES_3_0_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGLES_3_1_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_OPENGLES_3_2_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_METAL_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_METAL_2_SUPPORT_RELEASE;
undefined DEVICE_ADAPTER_METAL_3_SUPPORT_RELEASE;