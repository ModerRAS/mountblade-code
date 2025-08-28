#include "TaleWorlds.Native.Split.h"
// 03_rendering_part002.c - 渲染系统声明文件 - 250个函数
// 渲染器初始化模块 (地址: 0x1804475e0 - 0x180448110)
// 函数: initialize_renderer - 初始化渲染器核心组件
uint8_t initialize_renderer;
uint8_t RENDERER_INITIALIZED_FLAG;
// 函数: create_render_context - 创建渲染上下文
uint8_t create_render_context;
uint8_t RENDER_CONTEXT_HANDLE;
// 函数: setup_render_pipeline - 设置渲染管线
uint8_t setup_render_pipeline;
uint8_t PIPELINE_CONFIG_DATA;
// 函数: configure_viewport - 配置视口参数
uint8_t configure_viewport;
uint8_t VIEWPORT_SETTINGS;
// 函数: set_render_target - 设置渲染目标
uint8_t set_render_target;
uint8_t RENDER_TARGET_CONFIG;
// 函数: clear_render_buffer - 清空渲染缓冲区
uint8_t clear_render_buffer;
uint8_t BUFFER_CLEAR_FLAGS;
// 函数: begin_frame - 开始渲染帧
uint8_t begin_frame;
uint8_t FRAME_START_TIMESTAMP;
// 函数: end_frame - 结束渲染帧
uint8_t end_frame;
uint8_t FRAME_END_TIMESTAMP;
// 函数: present_frame - 呈现渲染帧
uint8_t present_frame;
uint8_t PRESENT_CONFIG;
// 函数: flush_render_commands - 刷新渲染命令队列
uint8_t flush_render_commands;
uint8_t COMMAND_QUEUE_HANDLE;
// 函数: reset_render_state - 重置渲染状态
uint8_t reset_render_state;
uint8_t STATE_RESET_FLAGS;
// 函数: apply_render_state - 应用渲染状态
uint8_t apply_render_state;
uint8_t STATE_APPLY_FLAGS;
// 函数: push_render_state - 保存当前渲染状态
uint8_t push_render_state;
uint8_t STATE_STACK_POINTER;
// 函数: pop_render_state - 恢复之前保存的渲染状态
uint8_t pop_render_state;
uint8_t STATE_STACK_DEPTH;
// 函数: get_render_state - 获取当前渲染状态
uint8_t get_render_state;
uint8_t CURRENT_RENDER_STATE;
// 函数: set_render_mode - 设置渲染模式
uint8_t set_render_mode;
uint8_t RENDER_MODE_CONFIG;
// 函数: enable_render_feature - 启用渲染特性
uint8_t enable_render_feature;
uint8_t FEATURE_ENABLE_FLAGS;
// 着色器管理模块 (地址: 0x180448420 - 0x180449a00)
// 函数: create_shader_program - 创建着色器程序
uint8_t create_shader_program;
// 函数: compile_vertex_shader - 编译顶点着色器
uint8_t compile_vertex_shader;
// 函数: compile_fragment_shader - 编译片段着色器
uint8_t compile_fragment_shader;
// 函数: link_shader_program - 链接着色器程序
uint8_t link_shader_program;
// 函数: validate_shader_program - 验证着色器程序
uint8_t validate_shader_program;
// 函数: use_shader_program - 使用着色器程序
uint8_t use_shader_program;
// 函数: delete_shader_program - 删除着色器程序
uint8_t delete_shader_program;
// 函数: get_shader_location - 获取着色器变量位置
uint8_t get_shader_location;
// 函数: set_shader_uniform - 设置着色器统一变量
uint8_t set_shader_uniform;
// 函数: get_shader_info_log - 获取着色器信息日志
uint8_t get_shader_info_log;
// 函数: is_shader_compiled - 检查着色器是否编译成功
uint8_t is_shader_compiled;
// 函数: attach_shader - 附加着色器到程序
uint8_t attach_shader;
// 函数: detach_shader - 从程序分离着色器
uint8_t detach_shader;
// 函数: get_program_parameter - 获取程序参数
uint8_t get_program_parameter;
// 函数: set_program_parameter - 设置程序参数
uint8_t set_program_parameter;
// 纹理管理模块 (地址: 0x180449a80 - 0x18044b700)
// 函数: create_texture_2d - 创建2D纹理
uint8_t create_texture_2d;
// 函数: create_texture_3d - 创建3D纹理
uint8_t create_texture_3d;
// 函数: create_texture_cube - 创建立方体纹理
uint8_t create_texture_cube;
// 函数: bind_texture - 绑定纹理
uint8_t bind_texture;
// 函数: unbind_texture - 解绑纹理
uint8_t unbind_texture;
// 函数: update_texture_data - 更新纹理数据
uint8_t update_texture_data;
// 函数: set_texture_parameters - 设置纹理参数
uint8_t set_texture_parameters;
// 函数: generate_mipmaps - 生成多级渐远纹理
uint8_t generate_mipmaps;
// 函数: delete_texture - 删除纹理
uint8_t delete_texture;
// 函数: get_texture_info - 获取纹理信息
uint8_t get_texture_info;
// 函数: set_texture_filter - 设置纹理过滤模式
uint8_t set_texture_filter;
// 函数: set_texture_wrap - 设置纹理包装模式
uint8_t set_texture_wrap;
// 函数: compress_texture - 压缩纹理
uint8_t compress_texture;
// 函数: decompress_texture - 解压缩纹理
uint8_t decompress_texture;
// 函数: convert_texture_format - 转换纹理格式
uint8_t convert_texture_format;
// 函数: copy_texture - 复制纹理
uint8_t copy_texture;
// 函数: blit_texture - 纹理块传输
uint8_t blit_texture;
// 函数: read_texture_pixels - 读取纹理像素
uint8_t read_texture_pixels;
// 函数: write_texture_pixels - 写入纹理像素
uint8_t write_texture_pixels;
// 缓冲区管理模块 (地址: 0x18044b7a0 - 0x18044e650)
// 函数: create_vertex_buffer - 创建顶点缓冲区
uint8_t create_vertex_buffer;
// 函数: create_index_buffer - 创建索引缓冲区
uint8_t create_index_buffer;
// 函数: create_uniform_buffer - 创建统一缓冲区
uint8_t create_uniform_buffer;
// 函数: bind_buffer - 绑定缓冲区
uint8_t bind_buffer;
// 函数: unbind_buffer - 解绑缓冲区
uint8_t unbind_buffer;
// 函数: update_buffer_data - 更新缓冲区数据
uint8_t update_buffer_data;
// 函数: map_buffer - 映射缓冲区
uint8_t map_buffer;
// 函数: unmap_buffer - 解除映射缓冲区
uint8_t unmap_buffer;
// 函数: delete_buffer - 删除缓冲区
uint8_t delete_buffer;
// 函数: get_buffer_info - 获取缓冲区信息
uint8_t get_buffer_info;
// 函数: set_buffer_usage - 设置缓冲区使用模式
uint8_t set_buffer_usage;
// 函数: copy_buffer - 复制缓冲区
uint8_t copy_buffer;
// 函数: invalidate_buffer - 使缓冲区失效
uint8_t invalidate_buffer;
// 函数: orphan_buffer - 孤儿化缓冲区
uint8_t orphan_buffer;
// 函数: get_buffer_pointer - 获取缓冲区指针
uint8_t get_buffer_pointer;
// 函数: set_buffer_sub_data - 设置缓冲区子数据
uint8_t set_buffer_sub_data;
// 函数: get_buffer_sub_data - 获取缓冲区子数据
uint8_t get_buffer_sub_data;
// 函数: clear_buffer - 清空缓冲区
uint8_t clear_buffer;
// 帧缓冲区模块 (地址: 0x18044e890 - 0x180452630)
// 函数: create_framebuffer - 创建帧缓冲区
uint8_t create_framebuffer;
// 函数: bind_framebuffer - 绑定帧缓冲区
uint8_t bind_framebuffer;
// 函数: unbind_framebuffer - 解绑帧缓冲区
uint8_t unbind_framebuffer;
// 函数: attach_texture_to_framebuffer - 附加纹理到帧缓冲区
uint8_t attach_texture_to_framebuffer;
// 函数: attach_renderbuffer_to_framebuffer - 附加渲染缓冲区到帧缓冲区
uint8_t attach_renderbuffer_to_framebuffer;
// 函数: check_framebuffer_status - 检查帧缓冲区状态
uint8_t check_framebuffer_status;
// 函数: delete_framebuffer - 删除帧缓冲区
uint8_t delete_framebuffer;
// 函数: blit_framebuffer - 帧缓冲区块传输
uint8_t blit_framebuffer;
// 函数: read_framebuffer_pixels - 读取帧缓冲区像素
uint8_t read_framebuffer_pixels;
// 函数: draw_framebuffer - 绘制帧缓冲区
uint8_t draw_framebuffer;
// 函数: clear_framebuffer - 清空帧缓冲区
uint8_t clear_framebuffer;
// 函数: set_framebuffer_draw_buffers - 设置帧缓冲区绘制缓冲区
uint8_t set_framebuffer_draw_buffers;
// 函数: set_framebuffer_read_buffer - 设置帧缓冲区读取缓冲区
uint8_t set_framebuffer_read_buffer;
// 函数: invalidate_framebuffer - 使帧缓冲区失效
uint8_t invalidate_framebuffer;
// 函数: get_framebuffer_info - 获取帧缓冲区信息
uint8_t get_framebuffer_info;
// 函数: create_renderbuffer - 创建渲染缓冲区
uint8_t create_renderbuffer;
// 函数: bind_renderbuffer - 绑定渲染缓冲区
uint8_t bind_renderbuffer;
// 函数: set_renderbuffer_storage - 设置渲染缓冲区存储
uint8_t set_renderbuffer_storage;
// 函数: delete_renderbuffer - 删除渲染缓冲区
uint8_t delete_renderbuffer;
// 函数: get_renderbuffer_info - 获取渲染缓冲区信息
uint8_t get_renderbuffer_info;
// 顶点数组模块 (地址: 0x180452f40 - 0x1804543f0)
// 函数: create_vertex_array - 创建顶点数组对象
uint8_t create_vertex_array;
// 函数: bind_vertex_array - 绑定顶点数组对象
uint8_t bind_vertex_array;
// 函数: unbind_vertex_array - 解绑顶点数组对象
uint8_t unbind_vertex_array;
// 函数: delete_vertex_array - 删除顶点数组对象
uint8_t delete_vertex_array;
// 函数: enable_vertex_attribute - 启用顶点属性
uint8_t enable_vertex_attribute;
// 函数: disable_vertex_attribute - 禁用顶点属性
uint8_t disable_vertex_attribute;
// 函数: set_vertex_attribute_pointer - 设置顶点属性指针
uint8_t set_vertex_attribute_pointer;
// 函数: set_vertex_attribute_divisor - 设置顶点属性除数
uint8_t set_vertex_attribute_divisor;
// 函数: get_vertex_attribute_info - 获取顶点属性信息
uint8_t get_vertex_attribute_info;
// 函数: draw_arrays - 绘制数组
uint8_t draw_arrays;
// 函数: draw_elements - 绘制元素
uint8_t draw_elements;
// 函数: draw_arrays_instanced - 实例化绘制数组
uint8_t draw_arrays_instanced;
// 函数: draw_elements_instanced - 实例化绘制元素
uint8_t draw_elements_instanced;
// 函数: multi_draw_arrays - 多重绘制数组
uint8_t multi_draw_arrays;
// 函数: multi_draw_elements - 多重绘制元素
uint8_t multi_draw_elements;
// 函数: draw_range_elements - 范围绘制元素
uint8_t draw_range_elements;
// 函数: draw_elements_base_vertex - 基础顶点绘制元素
uint8_t draw_elements_base_vertex;
// 函数: draw_range_elements_base_vertex - 范围基础顶点绘制元素
uint8_t draw_range_elements_base_vertex;
// 函数: draw_elements_instanced_base_vertex - 实例化基础顶点绘制元素
uint8_t draw_elements_instanced_base_vertex;
// 查询和同步模块 (地址: 0x180454d00 - 0x1804559d0)
// 函数: create_query - 创建查询对象
uint8_t create_query;
// 函数: delete_query - 删除查询对象
uint8_t delete_query;
// 函数: begin_query - 开始查询
uint8_t begin_query;
// 函数: end_query - 结束查询
uint8_t end_query;
// 函数: get_query_result - 获取查询结果
uint8_t get_query_result;
// 函数: is_query_result_available - 检查查询结果是否可用
uint8_t is_query_result_available;
// 函数: get_query_counter - 获取查询计数器
uint8_t get_query_counter;
// 函数: create_fence_sync - 创建栅栏同步对象
uint8_t create_fence_sync;
// 函数: delete_sync - 删除同步对象
uint8_t delete_sync;
// 函数: client_wait_sync - 客户端等待同步
uint8_t client_wait_sync;
// 函数: server_wait_sync - 服务器端等待同步
uint8_t server_wait_sync;
// 函数: get_sync_status - 获取同步状态
uint8_t get_sync_status;
// 渲染状态模块 (地址: 0x1804354c0 - 0x1804378e0)
// 函数: enable_blend - 启用混合
uint8_t enable_blend;
// 函数: disable_blend - 禁用混合
uint8_t disable_blend;
// 函数: set_blend_func - 设置混合函数
uint8_t set_blend_func;
// 函数: set_blend_equation - 设置混合方程
uint8_t set_blend_equation;
// 函数: set_blend_color - 设置混合颜色
uint8_t set_blend_color;
// 函数: enable_depth_test - 启用深度测试
uint8_t enable_depth_test;
// 函数: disable_depth_test - 禁用深度测试
uint8_t disable_depth_test;
// 函数: set_depth_func - 设置深度函数
uint8_t set_depth_func;
// 函数: set_depth_mask - 设置深度掩码
uint8_t set_depth_mask;
// 函数: set_depth_range - 设置深度范围
uint8_t set_depth_range;
// 函数: enable_stencil_test - 启用模板测试
uint8_t enable_stencil_test;
// 函数: disable_stencil_test - 禁用模板测试
uint8_t disable_stencil_test;
// 函数: set_stencil_func - 设置模板函数
uint8_t set_stencil_func;
// 函数: set_stencil_op - 设置模板操作
uint8_t set_stencil_op;
// 函数: set_stencil_mask - 设置模板掩码
uint8_t set_stencil_mask;
// 函数: enable_cull_face - 启用面剔除
uint8_t enable_cull_face;
// 函数: disable_cull_face - 禁用面剔除
uint8_t disable_cull_face;
// 函数: set_cull_face_mode - 设置面剔除模式
uint8_t set_cull_face_mode;
// 函数: set_front_face - 设置前面方向
uint8_t set_front_face;
// 函数: enable_polygon_offset - 启用多边形偏移
uint8_t enable_polygon_offset;
// 函数: disable_polygon_offset - 禁用多边形偏移
uint8_t disable_polygon_offset;
// 函数: set_polygon_offset - 设置多边形偏移
uint8_t set_polygon_offset;
// 函数: enable_scissor_test - 启用剪裁测试
uint8_t enable_scissor_test;
// 函数: disable_scissor_test - 禁用剪裁测试
uint8_t disable_scissor_test;
// 函数: set_scissor_box - 设置剪裁框
uint8_t set_scissor_box;
// 函数: enable_dither - 启用抖动
uint8_t enable_dither;
// 函数: disable_dither - 禁用抖动
uint8_t disable_dither;
// 函数: enable_line_smooth - 启用线条平滑
uint8_t enable_line_smooth;
// 函数: disable_line_smooth - 禁用线条平滑
uint8_t disable_line_smooth;
// 函数: set_line_width - 设置线宽
uint8_t set_line_width;
// 函数: enable_point_smooth - 启用点平滑
uint8_t enable_point_smooth;
// 函数: disable_point_smooth - 禁用点平滑
uint8_t disable_point_smooth;
// 函数: set_point_size - 设置点大小
uint8_t set_point_size;
// 函数: enable_multisample - 启用多重采样
uint8_t enable_multisample;
// 函数: disable_multisample - 禁用多重采样
uint8_t disable_multisample;
// 函数: set_sample_coverage - 设置采样覆盖率
uint8_t set_sample_coverage;
// 函数: enable_sample_alpha_to_coverage - 启用采样alpha到覆盖
uint8_t enable_sample_alpha_to_coverage;
// 函数: disable_sample_alpha_to_coverage - 禁用采样alpha到覆盖
uint8_t disable_sample_alpha_to_coverage;
// 函数: enable_sample_alpha_to_one - 启用采样alpha到1
uint8_t enable_sample_alpha_to_one;
// 函数: disable_sample_alpha_to_one - 禁用采样alpha到1
uint8_t disable_sample_alpha_to_one;
// 函数: enable_sample_mask - 启用采样掩码
uint8_t enable_sample_mask;
// 函数: disable_sample_mask - 禁用采样掩码
uint8_t disable_sample_mask;
// 函数: set_sample_mask - 设置采样掩码
uint8_t set_sample_mask;
// 函数: enable_logic_op - 启用逻辑操作
uint8_t enable_logic_op;
// 函数: disable_logic_op - 禁用逻辑操作
uint8_t disable_logic_op;
// 函数: set_logic_op - 设置逻辑操作
uint8_t set_logic_op;
// 函数: enable_color_logic_op - 启用颜色逻辑操作
uint8_t enable_color_logic_op;
// 函数: disable_color_logic_op - 禁用颜色逻辑操作
uint8_t disable_color_logic_op;
// 函数: set_color_logic_op - 设置颜色逻辑操作
uint8_t set_color_logic_op;
// 函数: enable_clip_distance - 启用剪裁距离
uint8_t enable_clip_distance;
// 函数: disable_clip_distance - 禁用剪裁距离
uint8_t disable_clip_distance;
// 函数: set_clip_distance - 设置剪裁距离
uint8_t set_clip_distance;
// 函数: enable_primitive_restart - 启用图元重启
uint8_t enable_primitive_restart;
// 函数: disable_primitive_restart - 禁用图元重启
uint8_t disable_primitive_restart;
// 函数: set_primitive_restart_index - 设置图元重启索引
uint8_t set_primitive_restart_index;
// 函数: enable_program_point_size - 启用程序点大小
uint8_t enable_program_point_size;
// 函数: disable_program_point_size - 禁用程序点大小
uint8_t disable_program_point_size;
// 函数: enable_texture_cube_map_seamless - 启用立方体贴图无缝
uint8_t enable_texture_cube_map_seamless;
// 函数: disable_texture_cube_map_seamless - 禁用立方体贴图无缝
uint8_t disable_texture_cube_map_seamless;
// 渲染器核心系统模块 (地址: 0x18031c260 - 0x180360210)
// 函数: render_init - 渲染器初始化
uint8_t render_init;
uint8_t RENDER_SYSTEM_HANDLE;
// 函数: render_shutdown - 渲染器关闭
uint8_t render_shutdown;
uint8_t RENDER_SHUTDOWN_FLAG;
uint8_t RENDER_VERSION_INFO;
uint8_t RENDER_INITIALIZATION_DATA;
int8_t RENDER_INITIALIZATION_SUCCESS;
uint8_t RENDER_CONFIG_TABLE;
uint8_t RENDER_MEMORY_POOL;
uint8_t RENDER_RESOURCE_TABLE;
uint8_t RENDER_SHADER_CACHE;
uint8_t RENDER_TEXTURE_CACHE;
uint8_t RENDER_BUFFER_CACHE;
uint8_t RENDER_FRAMEBUFFER_CACHE;
uint8_t RENDER_VERTEX_ARRAY_CACHE;
uint8_t RENDER_QUERY_CACHE;
uint8_t RENDER_SYNC_CACHE;
uint8_t RENDER_STATE_CACHE;
uint8_t RENDER_PIPELINE_CACHE;
uint8_t RENDER_TECHNIQUE_CACHE;
uint8_t RENDER_MATERIAL_CACHE;
uint8_t RENDER_MESH_CACHE;
uint8_t RENDER_LIGHT_CACHE;
uint8_t RENDER_CAMERA_CACHE;
uint8_t RENDER_SCENE_CACHE;
uint8_t RENDER_VIEW_CACHE;
uint8_t RENDER_PROJECTION_CACHE;
uint8_t RENDER_VIEWPORT_CACHE;
uint8_t RENDER_SCISSOR_CACHE;
uint8_t RENDER_CLEAR_CACHE;
uint8_t RENDER_DRAW_CACHE;
uint8_t RENDER_COMPUTE_CACHE;
uint8_t RENDER_DISPATCH_CACHE;
uint8_t RENDER_INDIRECT_CACHE;
uint8_t RENDER_FEEDBACK_CACHE;
uint8_t RENDER_TRANSFORM_CACHE;
uint8_t RENDER_ANIMATION_CACHE;
uint8_t RENDER_PARTICLE_CACHE;
uint8_t RENDER_POSTPROCESS_CACHE;
uint8_t RENDER_SHADOW_CACHE;
uint8_t RENDER_REFLECTION_CACHE;
uint8_t RENDER_REFRACTION_CACHE;
uint8_t RENDER_OCCLUSION_CACHE;
uint8_t RENDER_TESSELLATION_CACHE;
uint8_t RENDER_GEOMETRY_CACHE;
uint8_t RENDER_COMPUTE_SHADER_CACHE;
uint8_t RENDER_TESSELLATION_SHADER_CACHE;
uint8_t RENDER_GEOMETRY_SHADER_CACHE;
uint8_t RENDER_FRAGMENT_SHADER_CACHE;
uint8_t RENDER_VERTEX_SHADER_CACHE;
char RENDER_INITIALIZATION_COMPLETE;
uint8_t RENDER_ERROR_HANDLER;
uint8_t RENDER_DEBUG_CALLBACK;
uint8_t RENDER_PROFILER;
uint8_t RENDER_LOGGER;
uint8_t RENDER_STATS_COLLECTOR;
uint8_t RENDER_MEMORY_MANAGER;
uint8_t RENDER_RESOURCE_MANAGER;
uint8_t RENDER_SHADER_MANAGER;
uint8_t RENDER_TEXTURE_MANAGER;
uint8_t RENDER_BUFFER_MANAGER;
uint8_t RENDER_FRAMEBUFFER_MANAGER;
uint8_t RENDER_VERTEX_ARRAY_MANAGER;
uint8_t RENDER_QUERY_MANAGER;
uint8_t RENDER_SYNC_MANAGER;
uint8_t RENDER_STATE_MANAGER;
uint8_t RENDER_PIPELINE_MANAGER;
uint8_t RENDER_TECHNIQUE_MANAGER;
uint8_t RENDER_MATERIAL_MANAGER;
uint8_t RENDER_MESH_MANAGER;
uint8_t RENDER_LIGHT_MANAGER;
uint8_t RENDER_CAMERA_MANAGER;
uint8_t RENDER_SCENE_MANAGER;
uint8_t RENDER_VIEW_MANAGER;
uint8_t RENDER_PROJECTION_MANAGER;
uint8_t RENDER_VIEWPORT_MANAGER;
uint8_t RENDER_SCISSOR_MANAGER;
uint8_t RENDER_CLEAR_MANAGER;
uint8_t RENDER_DRAW_MANAGER;
uint8_t RENDER_COMPUTE_MANAGER;
uint8_t RENDER_DISPATCH_MANAGER;
uint8_t RENDER_INDIRECT_MANAGER;
uint8_t RENDER_FEEDBACK_MANAGER;
uint8_t RENDER_TRANSFORM_MANAGER;
uint8_t RENDER_ANIMATION_MANAGER;
uint8_t RENDER_PARTICLE_MANAGER;
uint8_t RENDER_POSTPROCESS_MANAGER;
uint8_t RENDER_SHADOW_MANAGER;
uint8_t RENDER_REFLECTION_MANAGER;
uint8_t RENDER_REFRACTION_MANAGER;
uint8_t RENDER_OCCLUSION_MANAGER;
uint8_t RENDER_TESSELLATION_MANAGER;
uint8_t RENDER_GEOMETRY_MANAGER;
uint8_t RENDER_COMPUTE_SHADER_MANAGER;
uint8_t RENDER_TESSELLATION_SHADER_MANAGER;
uint8_t RENDER_GEOMETRY_SHADER_MANAGER;
uint8_t RENDER_FRAGMENT_SHADER_MANAGER;
uint8_t RENDER_VERTEX_SHADER_MANAGER;
// 函数: render_create_context - 创建渲染上下文
uint8_t render_create_context;
uint8_t RENDER_CONTEXT_CONFIG;
uint8_t RENDER_CONTEXT_SETTINGS;
uint8_t RENDER_CONTEXT_CAPABILITIES;
uint8_t RENDER_CONTEXT_FORMAT;
uint8_t RENDER_CONTEXT_PROFILE;
uint8_t RENDER_CONTEXT_FLAGS;
uint8_t RENDER_CONTEXT_SHARE_GROUP;
uint8_t RENDER_CONTEXT_SURFACE;
uint8_t RENDER_CONTEXT_DEVICE;
uint8_t RENDER_CONTEXT_SWAP_INTERVAL;
uint8_t RENDER_CONTEXT_BUFFER_SIZE;
uint8_t RENDER_CONTEXT_COLOR_BITS;
uint8_t RENDER_CONTEXT_DEPTH_BITS;
uint8_t RENDER_CONTEXT_STENCIL_BITS;
uint8_t RENDER_CONTEXT_SAMPLES;
uint8_t RENDER_CONTEXT_DOUBLE_BUFFER;
uint8_t RENDER_CONTEXT_STEREO;
uint8_t RENDER_CONTEXT_DEBUG;
uint8_t RENDER_CONTEXT_FORWARD_COMPATIBLE;
uint8_t RENDER_CONTEXT_CORE_PROFILE;
uint8_t RENDER_CONTEXT_COMPATIBILITY_PROFILE;
uint8_t RENDER_CONTEXT_ES_PROFILE;
uint8_t RENDER_CONTEXT_ROBUST_ACCESS;
uint8_t RENDER_CONTEXT_RESET_NOTIFICATION;
uint8_t RENDER_CONTEXT_RELEASE_BEHAVIOR;
uint8_t RENDER_CONTEXT_NO_ERROR;
uint8_t RENDER_CONTEXT_LOSE_CONTEXT_ON_RESET;
uint8_t RENDER_CONTEXT_CONTEXT_FLAGS;
uint8_t RENDER_CONTEXT_CONTEXT_RELEASE_BEHAVIOR;
// 函数: render_destroy_context - 销毁渲染上下文
uint8_t render_destroy_context;
uint8_t RENDER_CONTEXT_DESTRUCTION_CALLBACK;
uint8_t RENDER_CONTEXT_CLEANUP_HANDLER;
uint8_t RENDER_CONTEXT_RESOURCE_CLEANER;
uint8_t RENDER_CONTEXT_MEMORY_RELEASE;
// 函数: render_make_current - 设置当前渲染上下文
uint8_t render_make_current;
uint8_t RENDER_CONTEXT_CURRENT_STACK;
uint8_t RENDER_CONTEXT_CURRENT_DEPTH;
uint8_t RENDER_CONTEXT_CURRENT_LIMIT;
uint8_t RENDER_CONTEXT_CURRENT_CAPABILITIES;
// 函数: render_swap_buffers - 交换缓冲区
uint8_t render_swap_buffers;
uint8_t RENDER_SWAP_CONFIG;
uint8_t RENDER_SWAP_INTERVAL;
uint8_t RENDER_SWAP_FLAGS;
uint8_t RENDER_SWAP_CALLBACK;
uint8_t RENDER_SWAP_EVENT_HANDLER;
// 函数: render_set_vsync - 设置垂直同步
uint8_t render_set_vsync;
uint8_t VSYNC_ENABLED;
uint8_t VSYNC_INTERVAL;
uint8_t VSYNC_MODE;
uint8_t VSYNC_ADAPTIVE;
uint8_t VSYNC_TOGGLE_CALLBACK;
// 函数: render_get_error - 获取渲染错误
uint8_t render_get_error;
uint8_t RENDER_ERROR_CODE;
uint8_t RENDER_ERROR_MESSAGE;
uint8_t RENDER_ERROR_STACK;
uint8_t RENDER_ERROR_CALLBACK;
// 函数: render_check_extension - 检查扩展支持
uint8_t render_check_extension;
uint8_t RENDER_EXTENSION_TABLE;
uint8_t RENDER_EXTENSION_CACHE;
uint8_t RENDER_EXTENSION_LOADER;
uint8_t RENDER_EXTENSION_INITIALIZER;
// 函数: render_load_function - 加载渲染函数
uint8_t render_load_function;
uint8_t RENDER_FUNCTION_TABLE;
uint8_t RENDER_FUNCTION_CACHE;
uint8_t RENDER_FUNCTION_LOADER;
uint8_t RENDER_FUNCTION_RESOLVER;
// 函数: render_get_proc_address - 获取函数地址
uint8_t render_get_proc_address;
uint8_t RENDER_ADDRESS_CACHE;
uint8_t RENDER_ADDRESS_TABLE;
uint8_t RENDER_ADDRESS_RESOLVER;
uint8_t RENDER_ADDRESS_LOADER;
// 函数: render_get_string - 获取渲染字符串
uint8_t render_get_string;
uint8_t RENDER_STRING_CACHE;
uint8_t RENDER_STRING_TABLE;
uint8_t RENDER_STRING_LOADER;
uint8_t RENDER_STRING_RESOLVER;
// 函数: render_get_integer - 获取整数值
uint8_t render_get_integer;
uint8_t RENDER_INTEGER_CACHE;
uint8_t RENDER_INTEGER_TABLE;
uint8_t RENDER_INTEGER_LOADER;
uint8_t RENDER_INTEGER_RESOLVER;
// 函数: render_get_float - 获取浮点值
uint8_t render_get_float;
uint8_t RENDER_FLOAT_CACHE;
uint8_t RENDER_FLOAT_TABLE;
uint8_t RENDER_FLOAT_LOADER;
uint8_t RENDER_FLOAT_RESOLVER;
// 函数: render_get_boolean - 获取布尔值
uint8_t render_get_boolean;
uint8_t RENDER_BOOLEAN_CACHE;
uint8_t RENDER_BOOLEAN_TABLE;
uint8_t RENDER_BOOLEAN_LOADER;
uint8_t RENDER_BOOLEAN_RESOLVER;
// 函数: render_get_integer64 - 获取64位整数值
uint8_t render_get_integer64;
uint8_t RENDER_INTEGER64_CACHE;
uint8_t RENDER_INTEGER64_TABLE;
uint8_t RENDER_INTEGER64_LOADER;
uint8_t RENDER_INTEGER64_RESOLVER;
// 函数: render_get_pointer - 获取指针值
uint8_t render_get_pointer;
uint8_t RENDER_POINTER_CACHE;
uint8_t RENDER_POINTER_TABLE;
uint8_t RENDER_POINTER_LOADER;
uint8_t RENDER_POINTER_RESOLVER;
// 函数: render_enable - 启用渲染功能
uint8_t render_enable;
uint8_t RENDER_ENABLE_CACHE;
uint8_t RENDER_ENABLE_TABLE;
uint8_t RENDER_ENABLE_LOADER;
uint8_t RENDER_ENABLE_RESOLVER;
// 函数: render_disable - 禁用渲染功能
uint8_t render_disable;
uint8_t RENDER_DISABLE_CACHE;
uint8_t RENDER_DISABLE_TABLE;
uint8_t RENDER_DISABLE_LOADER;
uint8_t RENDER_DISABLE_RESOLVER;
// 函数: render_is_enabled - 检查功能是否启用
uint8_t render_is_enabled;
uint8_t RENDER_ENABLED_CACHE;
uint8_t RENDER_ENABLED_TABLE;
uint8_t RENDER_ENABLED_LOADER;
uint8_t RENDER_ENABLED_RESOLVER;
// 函数: render_get_error - 获取渲染错误
uint8_t render_get_error;
uint8_t RENDER_ERROR_CACHE;
uint8_t RENDER_ERROR_TABLE;
uint8_t RENDER_ERROR_LOADER;
uint8_t RENDER_ERROR_RESOLVER;
// 函数: render_finish - 完成渲染操作
uint8_t render_finish;
uint8_t RENDER_FINISH_CALLBACK;
uint8_t RENDER_FINISH_HANDLER;
uint8_t RENDER_FINISH_EVENT;
// 函数: render_flush - 刷新渲染操作
uint8_t render_flush;
uint8_t RENDER_FLUSH_CALLBACK;
uint8_t RENDER_FLUSH_HANDLER;
uint8_t RENDER_FLUSH_EVENT;
// 函数: render_hint - 设置渲染提示
uint8_t render_hint;
uint8_t RENDER_HINT_CACHE;
uint8_t RENDER_HINT_TABLE;
uint8_t RENDER_HINT_LOADER;
uint8_t RENDER_HINT_RESOLVER;
// 函数: render_clear_color - 设置清除颜色
uint8_t render_clear_color;
uint8_t CLEAR_COLOR_CACHE;
uint8_t CLEAR_COLOR_TABLE;
uint8_t CLEAR_COLOR_LOADER;
uint8_t CLEAR_COLOR_RESOLVER;
// 函数: render_clear_depth - 设置清除深度
uint8_t render_clear_depth;
uint8_t CLEAR_DEPTH_CACHE;
uint8_t CLEAR_DEPTH_TABLE;
uint8_t CLEAR_DEPTH_LOADER;
uint8_t CLEAR_DEPTH_RESOLVER;
// 函数: render_clear_stencil - 设置清除模板
uint8_t render_clear_stencil;
uint8_t CLEAR_STENCIL_CACHE;
uint8_t CLEAR_STENCIL_TABLE;
uint8_t CLEAR_STENCIL_LOADER;
uint8_t CLEAR_STENCIL_RESOLVER;
// 函数: render_clear - 清除渲染缓冲区
uint8_t render_clear;
uint8_t CLEAR_BUFFER_CACHE;
uint8_t CLEAR_BUFFER_TABLE;
uint8_t CLEAR_BUFFER_LOADER;
uint8_t CLEAR_BUFFER_RESOLVER;
// 函数: render_draw_arrays - 绘制数组
uint8_t render_draw_arrays;
uint8_t DRAW_ARRAYS_CACHE;
uint8_t DRAW_ARRAYS_TABLE;
uint8_t DRAW_ARRAYS_LOADER;
uint8_t DRAW_ARRAYS_RESOLVER;
// 函数: render_draw_elements - 绘制元素
uint8_t render_draw_elements;
uint8_t DRAW_ELEMENTS_CACHE;
uint8_t DRAW_ELEMENTS_TABLE;
uint8_t DRAW_ELEMENTS_LOADER;
uint8_t DRAW_ELEMENTS_RESOLVER;
// 函数: render_draw_range_elements - 范围绘制元素
uint8_t render_draw_range_elements;
uint8_t DRAW_RANGE_CACHE;
uint8_t DRAW_RANGE_TABLE;
uint8_t DRAW_RANGE_LOADER;
uint8_t DRAW_RANGE_RESOLVER;
// 函数: render_multi_draw_arrays - 多重绘制数组
uint8_t render_multi_draw_arrays;
uint8_t MULTI_DRAW_CACHE;
uint8_t MULTI_DRAW_TABLE;
uint8_t MULTI_DRAW_LOADER;
uint8_t MULTI_DRAW_RESOLVER;
// 函数: render_multi_draw_elements - 多重绘制元素
uint8_t render_multi_draw_elements;
uint8_t MULTI_DRAW_ELEMENTS_CACHE;
uint8_t MULTI_DRAW_ELEMENTS_TABLE;
uint8_t MULTI_DRAW_ELEMENTS_LOADER;
uint8_t MULTI_DRAW_ELEMENTS_RESOLVER;
// 函数: render_element_buffer - 元素缓冲区操作
uint8_t render_element_buffer;
uint8_t ELEMENT_BUFFER_CACHE;
uint8_t ELEMENT_BUFFER_TABLE;
uint8_t ELEMENT_BUFFER_LOADER;
uint8_t ELEMENT_BUFFER_RESOLVER;
// 函数: render_vertex_buffer - 顶点缓冲区操作
uint8_t render_vertex_buffer;
uint8_t VERTEX_BUFFER_CACHE;
uint8_t VERTEX_BUFFER_TABLE;
uint8_t VERTEX_BUFFER_LOADER;
uint8_t VERTEX_BUFFER_RESOLVER;
// 函数: render_index_buffer - 索引缓冲区操作
uint8_t render_index_buffer;
uint8_t INDEX_BUFFER_CACHE;
uint8_t INDEX_BUFFER_TABLE;
uint8_t INDEX_BUFFER_LOADER;
uint8_t INDEX_BUFFER_RESOLVER;
// 函数: render_uniform_buffer - 统一缓冲区操作
uint8_t render_uniform_buffer;
uint8_t UNIFORM_BUFFER_CACHE;
uint8_t UNIFORM_BUFFER_TABLE;
uint8_t UNIFORM_BUFFER_LOADER;
uint8_t UNIFORM_BUFFER_RESOLVER;
// 函数: render_shader_storage_buffer - 着色器存储缓冲区操作
uint8_t render_shader_storage_buffer;
uint8_t SHADER_STORAGE_CACHE;
uint8_t SHADER_STORAGE_TABLE;
uint8_t SHADER_STORAGE_LOADER;
uint8_t SHADER_STORAGE_RESOLVER;
// 函数: render_atomic_counter_buffer - 原子计数器缓冲区操作
uint8_t render_atomic_counter_buffer;
uint8_t ATOMIC_COUNTER_CACHE;
uint8_t ATOMIC_COUNTER_TABLE;
uint8_t ATOMIC_COUNTER_LOADER;
uint8_t ATOMIC_COUNTER_RESOLVER;
// 函数: render_transform_feedback_buffer - 变换反馈缓冲区操作
uint8_t render_transform_feedback_buffer;
uint8_t TRANSFORM_FEEDBACK_CACHE;
uint8_t TRANSFORM_FEEDBACK_TABLE;
uint8_t TRANSFORM_FEEDBACK_LOADER;
uint8_t TRANSFORM_FEEDBACK_RESOLVER;
// 函数: render_pixel_buffer - 像素缓冲区操作
uint8_t render_pixel_buffer;
uint8_t PIXEL_BUFFER_CACHE;
uint8_t PIXEL_BUFFER_TABLE;
uint8_t PIXEL_BUFFER_LOADER;
uint8_t PIXEL_BUFFER_RESOLVER;
// 函数: render_copy_buffer - 复制缓冲区
uint8_t render_copy_buffer;
uint8_t COPY_BUFFER_CACHE;
uint8_t COPY_BUFFER_TABLE;
uint8_t COPY_BUFFER_LOADER;
uint8_t COPY_BUFFER_RESOLVER;
// 函数: render_copy_buffer_sub_data - 复制缓冲区子数据
uint8_t render_copy_buffer_sub_data;
uint8_t COPY_SUB_DATA_CACHE;
uint8_t COPY_SUB_DATA_TABLE;
uint8_t COPY_SUB_DATA_LOADER;
uint8_t COPY_SUB_DATA_RESOLVER;
// 函数: render_get_buffer_sub_data - 获取缓冲区子数据
uint8_t render_get_buffer_sub_data;
uint8_t GET_SUB_DATA_CACHE;
uint8_t GET_SUB_DATA_TABLE;
uint8_t GET_SUB_DATA_LOADER;
uint8_t GET_SUB_DATA_RESOLVER;
// 函数: render_buffer_data - 缓冲区数据操作
uint8_t render_buffer_data;
uint8_t BUFFER_DATA_CACHE;
uint8_t BUFFER_DATA_TABLE;
uint8_t BUFFER_DATA_LOADER;
uint8_t BUFFER_DATA_RESOLVER;
// 函数: render_buffer_sub_data - 缓冲区子数据操作
uint8_t render_buffer_sub_data;
uint8_t BUFFER_SUB_DATA_CACHE;
uint8_t BUFFER_SUB_DATA_TABLE;
uint8_t BUFFER_SUB_DATA_LOADER;
uint8_t BUFFER_SUB_DATA_RESOLVER;
// 函数: render_get_buffer_parameter - 获取缓冲区参数
uint8_t render_get_buffer_parameter;
uint8_t BUFFER_PARAMETER_CACHE;
uint8_t BUFFER_PARAMETER_TABLE;
uint8_t BUFFER_PARAMETER_LOADER;
uint8_t BUFFER_PARAMETER_RESOLVER;
// 函数: render_get_buffer_pointer - 获取缓冲区指针
uint8_t render_get_buffer_pointer;
uint8_t BUFFER_POINTER_CACHE;
uint8_t BUFFER_POINTER_TABLE;
uint8_t BUFFER_POINTER_LOADER;
uint8_t BUFFER_POINTER_RESOLVER;
// 函数: render_map_buffer - 映射缓冲区
uint8_t render_map_buffer;
uint8_t MAP_BUFFER_CACHE;
uint8_t MAP_BUFFER_TABLE;
uint8_t MAP_BUFFER_LOADER;
uint8_t MAP_BUFFER_RESOLVER;
// 函数: render_map_buffer_range - 映射缓冲区范围
uint8_t render_map_buffer_range;
uint8_t MAP_RANGE_CACHE;
uint8_t MAP_RANGE_TABLE;
uint8_t MAP_RANGE_LOADER;
uint8_t MAP_RANGE_RESOLVER;
// 函数: render_unmap_buffer - 解除映射缓冲区
uint8_t render_unmap_buffer;
uint8_t UNMAP_BUFFER_CACHE;
uint8_t UNMAP_BUFFER_TABLE;
uint8_t UNMAP_BUFFER_LOADER;
uint8_t UNMAP_BUFFER_RESOLVER;
// 函数: render_flush_mapped_buffer_range - 刷新映射缓冲区范围
uint8_t render_flush_mapped_buffer_range;
uint8_t FLUSH_MAPPED_CACHE;
uint8_t FLUSH_MAPPED_TABLE;
uint8_t FLUSH_MAPPED_LOADER;
uint8_t FLUSH_MAPPED_RESOLVER;
// 函数: render_invalidate_buffer_sub_data - 使缓冲区子数据失效
uint8_t render_invalidate_buffer_sub_data;
uint8_t INVALIDATE_SUB_DATA_CACHE;
uint8_t INVALIDATE_SUB_DATA_TABLE;
uint8_t INVALIDATE_SUB_DATA_LOADER;
uint8_t INVALIDATE_SUB_DATA_RESOLVER;
// 函数: render_invalidate_buffer_data - 使缓冲区数据失效
uint8_t render_invalidate_buffer_data;
uint8_t INVALIDATE_DATA_CACHE;
uint8_t INVALIDATE_DATA_TABLE;
uint8_t INVALIDATE_DATA_LOADER;
uint8_t INVALIDATE_DATA_RESOLVER;
// 渲染器状态和配置模块 (地址: 0x180380510 - 0x1804069d0)
// 函数: render_get_context - 获取渲染上下文
uint8_t render_get_context;
// 函数: render_set_context - 设置渲染上下文
uint8_t render_set_context;
uint8_t RENDER_CONTEXT_STACK;
// 函数: render_create_window - 创建渲染窗口
uint8_t render_create_window;
// 函数: render_destroy_window - 销毁渲染窗口
uint8_t render_destroy_window;
uint8_t WINDOW_CONFIG_TABLE;
uint8_t WINDOW_SURFACE_CONFIG;
uint8_t WINDOW_DISPLAY_CONFIG;
// 函数: render_make_window_current - 设置当前渲染窗口
uint8_t render_make_window_current;
uint8_t WINDOW_CURRENT_STACK;
uint8_t WINDOW_CONTEXT_TABLE;
uint8_t WINDOW_SURFACE_TABLE;
uint8_t WINDOW_DISPLAY_TABLE;
// 函数: render_get_window_proc_address - 获取窗口函数地址
uint8_t render_get_window_proc_address;
uint8_t WINDOW_FUNCTION_CACHE;
uint8_t WINDOW_FUNCTION_TABLE;
uint8_t WINDOW_FUNCTION_LOADER;
uint8_t WINDOW_FUNCTION_RESOLVER;
// 函数: render_swap_window_buffers - 交换窗口缓冲区
uint8_t render_swap_window_buffers;
uint8_t WINDOW_SWAP_CONFIG;
uint8_t WINDOW_SWAP_INTERVAL;
uint8_t WINDOW_SWAP_FLAGS;
uint8_t WINDOW_SWAP_CALLBACK;
uint8_t WINDOW_SWAP_EVENT_HANDLER;
// 函数: render_set_window_size - 设置窗口大小
uint8_t render_set_window_size;
uint8_t WINDOW_SIZE_CACHE;
uint8_t WINDOW_SIZE_TABLE;
uint8_t WINDOW_SIZE_LOADER;
uint8_t WINDOW_SIZE_RESOLVER;
// 函数: render_get_window_size - 获取窗口大小
uint8_t render_get_window_size;
uint8_t WINDOW_DIMENSION_CACHE;
uint8_t WINDOW_DIMENSION_TABLE;
uint8_t WINDOW_DIMENSION_LOADER;
uint8_t WINDOW_DIMENSION_RESOLVER;
// 函数: render_set_window_position - 设置窗口位置
uint8_t render_set_window_position;
uint8_t WINDOW_POSITION_CACHE;
uint8_t WINDOW_POSITION_TABLE;
uint8_t WINDOW_POSITION_LOADER;
uint8_t WINDOW_POSITION_RESOLVER;
// 函数: render_get_window_position - 获取窗口位置
uint8_t render_get_window_position;
uint8_t WINDOW_LOCATION_CACHE;
uint8_t WINDOW_LOCATION_TABLE;
uint8_t WINDOW_LOCATION_LOADER;
uint8_t WINDOW_LOCATION_RESOLVER;
// 函数: render_set_window_title - 设置窗口标题
uint8_t render_set_window_title;
uint8_t WINDOW_TITLE_CACHE;
uint8_t WINDOW_TITLE_TABLE;
uint8_t WINDOW_TITLE_LOADER;
uint8_t WINDOW_TITLE_RESOLVER;
// 函数: render_get_window_title - 获取窗口标题
uint8_t render_get_window_title;
uint8_t WINDOW_NAME_CACHE;
uint8_t WINDOW_NAME_TABLE;
uint8_t WINDOW_NAME_LOADER;
uint8_t WINDOW_NAME_RESOLVER;
// 函数: render_set_window_icon - 设置窗口图标
uint8_t render_set_window_icon;
uint8_t WINDOW_ICON_CACHE;
uint8_t WINDOW_ICON_TABLE;
uint8_t WINDOW_ICON_LOADER;
uint8_t WINDOW_ICON_RESOLVER;
// 函数: render_get_window_icon - 获取窗口图标
uint8_t render_get_window_icon;
uint8_t WINDOW_IMAGE_CACHE;
uint8_t WINDOW_IMAGE_TABLE;
uint8_t WINDOW_IMAGE_LOADER;
uint8_t WINDOW_IMAGE_RESOLVER;
// 函数: render_set_window_opacity - 设置窗口透明度
uint8_t render_set_window_opacity;
uint8_t WINDOW_OPACITY_CACHE;
uint8_t WINDOW_OPACITY_TABLE;
uint8_t WINDOW_OPACITY_LOADER;
uint8_t WINDOW_OPACITY_RESOLVER;
// 函数: render_get_window_opacity - 获取窗口透明度
uint8_t render_get_window_opacity;
uint8_t WINDOW_ALPHA_CACHE;
uint8_t WINDOW_ALPHA_TABLE;
uint8_t WINDOW_ALPHA_LOADER;
uint8_t WINDOW_ALPHA_RESOLVER;
// 函数: render_set_window_focus - 设置窗口焦点
uint8_t render_set_window_focus;
uint8_t WINDOW_FOCUS_CACHE;
uint8_t WINDOW_FOCUS_TABLE;
uint8_t WINDOW_FOCUS_LOADER;
uint8_t WINDOW_FOCUS_RESOLVER;
// 函数: render_get_window_focus - 获取窗口焦点
uint8_t render_get_window_focus;
uint8_t WINDOW_ACTIVE_CACHE;
uint8_t WINDOW_ACTIVE_TABLE;
uint8_t WINDOW_ACTIVE_LOADER;
uint8_t WINDOW_ACTIVE_RESOLVER;
// 函数: render_set_window_visible - 设置窗口可见性
uint8_t render_set_window_visible;
uint8_t WINDOW_VISIBLE_CACHE;
uint8_t WINDOW_VISIBLE_TABLE;
uint8_t WINDOW_VISIBLE_LOADER;
uint8_t WINDOW_VISIBLE_RESOLVER;
// 函数: render_get_window_visible - 获取窗口可见性
uint8_t render_get_window_visible;
uint8_t WINDOW_SHOWN_CACHE;
uint8_t WINDOW_SHOWN_TABLE;
uint8_t WINDOW_SHOWN_LOADER;
uint8_t WINDOW_SHOWN_RESOLVER;
// 函数: render_set_window_minimized - 设置窗口最小化
uint8_t render_set_window_minimized;
uint8_t WINDOW_MINIMIZED_CACHE;
uint8_t WINDOW_MINIMIZED_TABLE;
uint8_t WINDOW_MINIMIZED_LOADER;
uint8_t WINDOW_MINIMIZED_RESOLVER;
// 函数: render_get_window_minimized - 获取窗口最小化
uint8_t render_get_window_minimized;
uint8_t WINDOW_ICONIFIED_CACHE;
uint8_t WINDOW_ICONIFIED_TABLE;
uint8_t WINDOW_ICONIFIED_LOADER;
uint8_t WINDOW_ICONIFIED_RESOLVER;
// 函数: render_set_window_maximized - 设置窗口最大化
uint8_t render_set_window_maximized;
uint8_t WINDOW_MAXIMIZED_CACHE;
uint8_t WINDOW_MAXIMIZED_TABLE;
uint8_t WINDOW_MAXIMIZED_LOADER;
uint8_t WINDOW_MAXIMIZED_RESOLVER;
// 函数: render_get_window_maximized - 获取窗口最大化
uint8_t render_get_window_maximized;
uint8_t WINDOW_FULLSCREEN_CACHE;
uint8_t WINDOW_FULLSCREEN_TABLE;
uint8_t WINDOW_FULLSCREEN_LOADER;
uint8_t WINDOW_FULLSCREEN_RESOLVER;
// 函数: render_set_window_fullscreen - 设置窗口全屏
uint8_t render_set_window_fullscreen;
uint8_t WINDOW_FULLSCREEN_MODE_CACHE;
uint8_t WINDOW_FULLSCREEN_MODE_TABLE;
uint8_t WINDOW_FULLSCREEN_MODE_LOADER;
uint8_t WINDOW_FULLSCREEN_MODE_RESOLVER;
// 函数: render_get_window_fullscreen - 获取窗口全屏
uint8_t render_get_window_fullscreen;
uint8_t WINDOW_DISPLAY_MODE_CACHE;
uint8_t WINDOW_DISPLAY_MODE_TABLE;
uint8_t WINDOW_DISPLAY_MODE_LOADER;
uint8_t WINDOW_DISPLAY_MODE_RESOLVER;
// 函数: render_set_window_borderless - 设置窗口无边框
uint8_t render_set_window_borderless;
uint8_t WINDOW_BORDERLESS_CACHE;
uint8_t WINDOW_BORDERLESS_TABLE;
uint8_t WINDOW_BORDERLESS_LOADER;
uint8_t WINDOW_BORDERLESS_RESOLVER;
// 函数: render_get_window_borderless - 获取窗口无边框
uint8_t render_get_window_borderless;
uint8_t WINDOW_NO_BORDER_CACHE;
uint8_t WINDOW_NO_BORDER_TABLE;
uint8_t WINDOW_NO_BORDER_LOADER;
uint8_t WINDOW_NO_BORDER_RESOLVER;
// 函数: render_set_window_resizable - 设置窗口可调整大小
uint8_t render_set_window_resizable;
uint8_t WINDOW_RESIZABLE_CACHE;
uint8_t WINDOW_RESIZABLE_TABLE;
uint8_t WINDOW_RESIZABLE_LOADER;
uint8_t WINDOW_RESIZABLE_RESOLVER;
// 函数: render_get_window_resizable - 获取窗口可调整大小
uint8_t render_get_window_resizable;
uint8_t WINDOW_CAN_RESIZE_CACHE;
uint8_t WINDOW_CAN_RESIZE_TABLE;
uint8_t WINDOW_CAN_RESIZE_LOADER;
uint8_t WINDOW_CAN_RESIZE_RESOLVER;
// 函数: render_set_window_always_on_top - 设置窗口置顶
uint8_t render_set_window_always_on_top;
uint8_t WINDOW_ON_TOP_CACHE;
uint8_t WINDOW_ON_TOP_TABLE;
uint8_t WINDOW_ON_TOP_LOADER;
uint8_t WINDOW_ON_TOP_RESOLVER;
// 函数: render_get_window_always_on_top - 获取窗口置顶
uint8_t render_get_window_always_on_top;
uint8_t WINDOW_TOPMOST_CACHE;
uint8_t WINDOW_TOPMOST_TABLE;
uint8_t WINDOW_TOPMOST_LOADER;
uint8_t WINDOW_TOPMOST_RESOLVER;
// 函数: render_set_window_min_size - 设置窗口最小大小
uint8_t render_set_window_min_size;
uint8_t WINDOW_MIN_SIZE_CACHE;
uint8_t WINDOW_MIN_SIZE_TABLE;
uint8_t WINDOW_MIN_SIZE_LOADER;
uint8_t WINDOW_MIN_SIZE_RESOLVER;
// 函数: render_get_window_min_size - 获取窗口最小大小
uint8_t render_get_window_min_size;
uint8_t WINDOW_MINIMUM_SIZE_CACHE;
uint8_t WINDOW_MINIMUM_SIZE_TABLE;
uint8_t WINDOW_MINIMUM_SIZE_LOADER;
uint8_t WINDOW_MINIMUM_SIZE_RESOLVER;
// 函数: render_set_window_max_size - 设置窗口最大大小
uint8_t render_set_window_max_size;
uint8_t WINDOW_MAX_SIZE_CACHE;
uint8_t WINDOW_MAX_SIZE_TABLE;
uint8_t WINDOW_MAX_SIZE_LOADER;
uint8_t WINDOW_MAX_SIZE_RESOLVER;
// 函数: render_get_window_max_size - 获取窗口最大大小
uint8_t render_get_window_max_size;
uint8_t WINDOW_MAXIMUM_SIZE_CACHE;
uint8_t WINDOW_MAXIMUM_SIZE_TABLE;
uint8_t WINDOW_MAXIMUM_SIZE_LOADER;
uint8_t WINDOW_MAXIMUM_SIZE_RESOLVER;
// 函数: render_set_window_aspect_ratio - 设置窗口宽高比
uint8_t render_set_window_aspect_ratio;
uint8_t WINDOW_ASPECT_CACHE;
uint8_t WINDOW_ASPECT_TABLE;
uint8_t WINDOW_ASPECT_LOADER;
uint8_t WINDOW_ASPECT_RESOLVER;
// 函数: render_get_window_aspect_ratio - 获取窗口宽高比
uint8_t render_get_window_aspect_ratio;
uint8_t WINDOW_RATIO_CACHE;
uint8_t WINDOW_RATIO_TABLE;
uint8_t WINDOW_RATIO_LOADER;
uint8_t WINDOW_RATIO_RESOLVER;
// 函数: render_set_window_gamma - 设置窗口伽马值
uint8_t render_set_window_gamma;
uint8_t WINDOW_GAMMA_CACHE;
uint8_t WINDOW_GAMMA_TABLE;
uint8_t WINDOW_GAMMA_LOADER;
uint8_t WINDOW_GAMMA_RESOLVER;
// 函数: render_get_window_gamma - 获取窗口伽马值
uint8_t render_get_window_gamma;
uint8_t WINDOW_GAMMA_VALUE_CACHE;
uint8_t WINDOW_GAMMA_VALUE_TABLE;
uint8_t WINDOW_GAMMA_VALUE_LOADER;
uint8_t WINDOW_GAMMA_VALUE_RESOLVER;
// 函数: render_set_window_brightness - 设置窗口亮度
uint8_t render_set_window_brightness;
uint8_t WINDOW_BRIGHTNESS_CACHE;
uint8_t WINDOW_BRIGHTNESS_TABLE;
uint8_t WINDOW_BRIGHTNESS_LOADER;
uint8_t WINDOW_BRIGHTNESS_RESOLVER;
// 函数: render_get_window_brightness - 获取窗口亮度
uint8_t render_get_window_brightness;
uint8_t WINDOW_BRIGHTNESS_VALUE_CACHE;
uint8_t WINDOW_BRIGHTNESS_VALUE_TABLE;
uint8_t WINDOW_BRIGHTNESS_VALUE_LOADER;
uint8_t WINDOW_BRIGHTNESS_VALUE_RESOLVER;
// 函数: render_set_window_contrast - 设置窗口对比度
uint8_t render_set_window_contrast;
uint8_t WINDOW_CONTRAST_CACHE;
uint8_t WINDOW_CONTRAST_TABLE;
uint8_t WINDOW_CONTRAST_LOADER;
uint8_t WINDOW_CONTRAST_RESOLVER;
// 函数: render_get_window_contrast - 获取窗口对比度
uint8_t render_get_window_contrast;
uint8_t WINDOW_CONTRAST_VALUE_CACHE;
uint8_t WINDOW_CONTRAST_VALUE_TABLE;
uint8_t WINDOW_CONTRAST_VALUE_LOADER;
uint8_t WINDOW_CONTRAST_VALUE_RESOLVER;
// 函数: render_set_window_saturation - 设置窗口饱和度
uint8_t render_set_window_saturation;
uint8_t WINDOW_SATURATION_CACHE;
uint8_t WINDOW_SATURATION_TABLE;
uint8_t WINDOW_SATURATION_LOADER;
uint8_t WINDOW_SATURATION_RESOLVER;
// 函数: render_get_window_saturation - 获取窗口饱和度
uint8_t render_get_window_saturation;
uint8_t WINDOW_SATURATION_VALUE_CACHE;
uint8_t WINDOW_SATURATION_VALUE_TABLE;
uint8_t WINDOW_SATURATION_VALUE_LOADER;
uint8_t WINDOW_SATURATION_VALUE_RESOLVER;
// 函数: render_set_window_hue - 设置窗口色调
uint8_t render_set_window_hue;
uint8_t WINDOW_HUE_CACHE;
uint8_t WINDOW_HUE_TABLE;
uint8_t WINDOW_HUE_LOADER;
uint8_t WINDOW_HUE_RESOLVER;
// 函数: render_get_window_hue - 获取窗口色调
uint8_t render_get_window_hue;
uint8_t WINDOW_HUE_VALUE_CACHE;
uint8_t WINDOW_HUE_VALUE_TABLE;
uint8_t WINDOW_HUE_VALUE_LOADER;
uint8_t WINDOW_HUE_VALUE_RESOLVER;
// 函数: render_set_window_color_correction - 设置窗口颜色校正
uint8_t render_set_window_color_correction;
uint8_t WINDOW_COLOR_CORRECTION_CACHE;
uint8_t WINDOW_COLOR_CORRECTION_TABLE;
uint8_t WINDOW_COLOR_CORRECTION_LOADER;
uint8_t WINDOW_COLOR_CORRECTION_RESOLVER;
// 函数: render_get_window_color_correction - 获取窗口颜色校正
uint8_t render_get_window_color_correction;
uint8_t WINDOW_COLOR_CORRECT_CACHE;
uint8_t WINDOW_COLOR_CORRECT_TABLE;
uint8_t WINDOW_COLOR_CORRECT_LOADER;
uint8_t WINDOW_COLOR_CORRECT_RESOLVER;
// 渲染器设备和硬件管理模块 (地址: 0x180407960 - 0x18041b4d0)
// 函数: render_create_device - 创建渲染设备
uint8_t render_create_device;
uint8_t DEVICE_ADAPTER_TABLE;
uint8_t DEVICE_FEATURE_TABLE;
uint8_t DEVICE_CAPABILITY_TABLE;
uint8_t DEVICE_MEMORY_TABLE;
uint8_t DEVICE_RESOURCE_TABLE;
uint8_t DEVICE_QUEUE_TABLE;
uint8_t DEVICE_COMMAND_TABLE;
uint8_t DEVICE_STATE_TABLE;
uint8_t DEVICE_PIPELINE_TABLE;
uint8_t DEVICE_SHADER_TABLE;
uint8_t DEVICE_TEXTURE_TABLE;
uint8_t DEVICE_BUFFER_TABLE;
uint8_t DEVICE_FRAMEBUFFER_TABLE;
uint8_t DEVICE_RENDERPASS_TABLE;
uint8_t DEVICE_DESCRIPTOR_TABLE;
uint8_t DEVICE_SYNCHRONIZATION_TABLE;
uint8_t DEVICE_QUERY_TABLE;
uint8_t DEVICE_EVENT_TABLE;
uint8_t DEVICE_FENCE_TABLE;
uint8_t DEVICE_SEMAPHORE_TABLE;
uint8_t DEVICE_BARRIER_TABLE;
uint8_t DEVICE_MEMORY_POOL;
uint8_t DEVICE_DESCRIPTOR_POOL;
uint8_t DEVICE_COMMAND_POOL;
uint8_t DEVICE_QUEUE_FAMILY;
uint8_t DEVICE_QUEUE_INDEX;
uint8_t DEVICE_QUEUE_COUNT;
uint8_t DEVICE_QUEUE_PRIORITY;
uint8_t DEVICE_QUEUE_FLAGS;
uint8_t DEVICE_QUEUE_CAPABILITIES;
uint8_t DEVICE_QUEUE_PROPERTIES;
uint8_t DEVICE_QUEUE_CREATE_INFO;
uint8_t DEVICE_QUEUE_CREATE_FLAGS;
uint8_t DEVICE_QUEUE_CREATE_COUNT;
uint8_t DEVICE_QUEUE_CREATE_PRIORITY;
uint8_t DEVICE_QUEUE_CREATE_INDEX;
uint8_t DEVICE_QUEUE_CREATE_FAMILY;
uint8_t DEVICE_QUEUE_CREATE_PROPERTIES;
uint8_t DEVICE_QUEUE_CREATE_CAPABILITIES;
uint8_t DEVICE_QUEUE_CREATE_FLAGS;
int8_t DEVICE_ADAPTER_INFO;
uint8_t DEVICE_ADAPTER_NAME;
uint8_t DEVICE_ADAPTER_VENDOR;
uint8_t DEVICE_ADAPTER_DRIVER;
uint8_t DEVICE_ADAPTER_VERSION;
uint8_t DEVICE_ADAPTER_DATE;
uint8_t DEVICE_ADAPTER_TYPE;
uint8_t DEVICE_ADAPTER_FLAGS;
uint8_t DEVICE_ADAPTER_PROPERTIES;
uint8_t DEVICE_ADAPTER_CAPABILITIES;
uint8_t DEVICE_ADAPTER_FEATURES;
uint8_t DEVICE_ADAPTER_EXTENSIONS;
uint8_t DEVICE_ADAPTER_LAYERS;
uint8_t DEVICE_ADAPTER_FORMATS;
uint8_t DEVICE_ADAPTER_MEMORY_TYPES;
uint8_t DEVICE_ADAPTER_MEMORY_HEAPS;
uint8_t DEVICE_ADAPTER_QUEUE_FAMILIES;
uint8_t DEVICE_ADAPTER_PRESENTATION;
uint8_t DEVICE_ADAPTER_SURFACE;
uint8_t DEVICE_ADAPTER_DISPLAY;
uint8_t DEVICE_ADAPTER_MONITOR;
uint8_t DEVICE_ADAPTER_MODE;
uint8_t DEVICE_ADAPTER_REFRESH_RATE;
uint8_t DEVICE_ADAPTER_RESOLUTION;
uint8_t DEVICE_ADAPTER_COLOR_DEPTH;
uint8_t DEVICE_ADAPTER_COLOR_FORMAT;
uint8_t DEVICE_ADAPTER_COLOR_SPACE;
uint8_t DEVICE_ADAPTER_HDR_SUPPORT;
uint8_t DEVICE_ADAPTER_VSYNC_SUPPORT;
uint8_t DEVICE_ADAPTER_FULLSCREEN_SUPPORT;
uint8_t DEVICE_ADAPTER_WINDOWED_SUPPORT;
uint8_t DEVICE_ADAPTER_BORDERLESS_SUPPORT;
uint8_t DEVICE_ADAPTER_RESIZABLE_SUPPORT;
uint8_t DEVICE_ADAPTER_MINIMIZED_SUPPORT;
uint8_t DEVICE_ADAPTER_MAXIMIZED_SUPPORT;
uint8_t DEVICE_ADAPTER_EXCLUSIVE_FULLSCREEN_SUPPORT;
uint8_t DEVICE_ADAPTER_BORDERLESS_FULLSCREEN_SUPPORT;
uint8_t DEVICE_ADAPTER_STRETCHED_FULLSCREEN_SUPPORT;
uint8_t DEVICE_ADAPTER_CENTERED_FULLSCREEN_SUPPORT;
uint8_t DEVICE_ADAPTER_ASPECT_RATIO_SUPPORT;
uint8_t DEVICE_ADAPTER_REFRESH_RATE_SUPPORT;
uint8_t DEVICE_ADAPTER_RESOLUTION_SUPPORT;
uint8_t DEVICE_ADAPTER_COLOR_DEPTH_SUPPORT;
uint8_t DEVICE_ADAPTER_COLOR_FORMAT_SUPPORT;
uint8_t DEVICE_ADAPTER_COLOR_SPACE_SUPPORT;
uint8_t DEVICE_ADAPTER_HDR_SUPPORT;
uint8_t DEVICE_ADAPTER_VSYNC_SUPPORT;
uint8_t DEVICE_ADAPTER_MULTISAMPLE_SUPPORT;
uint8_t DEVICE_ADAPTER_ANISOTROPY_SUPPORT;
uint8_t DEVICE_ADAPTER_MIPMAP_SUPPORT;
uint8_t DEVICE_ADAPTER_COMPRESSION_SUPPORT;
uint8_t DEVICE_ADAPTER_FLOAT_SUPPORT;
uint8_t DEVICE_ADAPTER_HALF_SUPPORT;
uint8_t DEVICE_ADAPTER_DOUBLE_SUPPORT;
uint8_t DEVICE_ADAPTER_INT_SUPPORT;
uint8_t DEVICE_ADAPTER_UINT_SUPPORT;
uint8_t DEVICE_ADAPTER_SINT_SUPPORT;
uint8_t DEVICE_ADAPTER_DEPTH_SUPPORT;
uint8_t DEVICE_ADAPTER_STENCIL_SUPPORT;
uint8_t DEVICE_ADAPTER_BLEND_SUPPORT;
uint8_t DEVICE_ADAPTER_CULL_SUPPORT;
uint8_t DEVICE_ADAPTER_SCISSOR_SUPPORT;
uint8_t DEVICE_ADAPTER_STENCIL_SUPPORT;
uint8_t DEVICE_ADAPTER_DEPTH_SUPPORT;
uint8_t DEVICE_ADAPTER_MULTISAMPLE_SUPPORT;
uint8_t DEVICE_ADAPTER_SAMPLE_SHADING_SUPPORT;
uint8_t DEVICE_ADAPTER_SAMPLE_MASK_SUPPORT;
uint8_t DEVICE_ADAPTER_ALPHA_TO_COVERAGE_SUPPORT;
uint8_t DEVICE_ADAPTER_ALPHA_TO_ONE_SUPPORT;
uint8_t DEVICE_ADAPTER_DEPTH_CLAMP_SUPPORT;
uint8_t DEVICE_ADAPTER_DEPTH_BIAS_SUPPORT;
uint8_t DEVICE_ADAPTER_FILL_MODE_SUPPORT;
uint8_t DEVICE_ADAPTER_CULL_MODE_SUPPORT;
uint8_t DEVICE_ADAPTER_FRONT_FACE_SUPPORT;
uint8_t DEVICE_ADAPTER_PRIMITIVE_RESTART_SUPPORT;
uint8_t DEVICE_ADAPTER_PRIMITIVE_TOPOLOGY_SUPPORT;
uint8_t DEVICE_ADAPTER_VERTEX_INPUT_SUPPORT;
uint8_t DEVICE_ADAPTER_VERTEX_ATTRIBUTE_SUPPORT;
uint8_t DEVICE_ADAPTER_VERTEX_BINDING_SUPPORT;
uint8_t DEVICE_ADAPTER_VERTEX_DIVISOR_SUPPORT;
uint8_t DEVICE_ADAPTER_INPUT_ASSEMBLY_SUPPORT;
uint8_t DEVICE_ADAPTER_TESSELLATION_SUPPORT;
uint8_t DEVICE_ADAPTER_GEOMETRY_SUPPORT;
uint8_t DEVICE_ADAPTER_FRAGMENT_SUPPORT;
uint8_t DEVICE_ADAPTER_COMPUTE_SUPPORT;
uint8_t DEVICE_ADAPTER_RAYTRACING_SUPPORT;
uint8_t DEVICE_ADAPTER_MESH_SUPPORT;
uint8_t DEVICE_ADAPTER_TASK_SUPPORT;
uint8_t DEVICE_ADAPTER_COLLISION_SUPPORT;
uint8_t DEVICE_ADAPTER_OCCLUSION_SUPPORT;
uint8_t DEVICE_ADAPTER_CONDITIONAL_SUPPORT;
uint8_t DEVICE_ADAPTER_TRANSFORM_SUPPORT;
uint8_t DEVICE_ADAPTER_FEEDBACK_SUPPORT;
uint8_t DEVICE_ADAPTER_INDIRECT_SUPPORT;
uint8_t DEVICE_ADAPTER_DRAW_SUPPORT;
uint8_t DEVICE_ADAPTER_DISPATCH_SUPPORT;
uint8_t DEVICE_ADAPTER_CLEAR_SUPPORT;
uint8_t DEVICE_ADAPTER_COPY_SUPPORT;
uint8_t DEVICE_ADAPTER_BLIT_SUPPORT;
uint8_t DEVICE_ADAPTER_RESOLVE_SUPPORT;
uint8_t DEVICE_ADAPTER_GENERATE_SUPPORT;
uint8_t DEVICE_ADAPTER_INVALIDATE_SUPPORT;
uint8_t DEVICE_ADAPTER_FLUSH_SUPPORT;
uint8_t DEVICE_ADAPTER_FINISH_SUPPORT;
uint8_t DEVICE_ADAPTER_FENCE_SUPPORT;
uint8_t DEVICE_ADAPTER_SEMAPHORE_SUPPORT;
uint8_t DEVICE_ADAPTER_EVENT_SUPPORT;
uint8_t DEVICE_ADAPTER_QUERY_SUPPORT;
uint8_t DEVICE_ADAPTER_TIMER_SUPPORT;
uint8_t DEVICE_ADAPTER_PIPELINE_SUPPORT;
uint8_t DEVICE_ADAPTER_DESCRIPTOR_SUPPORT;
uint8_t DEVICE_ADAPTER_RENDER_PASS_SUPPORT;
uint8_t DEVICE_ADAPTER_FRAMEBUFFER_SUPPORT;
uint8_t DEVICE_ADAPTER_TEXTURE_SUPPORT;
uint8_t DEVICE_ADAPTER_BUFFER_SUPPORT;
uint8_t DEVICE_ADAPTER_IMAGE_SUPPORT;
uint8_t DEVICE_ADAPTER_SAMPLER_SUPPORT;
uint8_t DEVICE_ADAPTER_SHADER_SUPPORT;
uint8_t DEVICE_ADAPTER_SPIRV_SUPPORT;
uint8_t DEVICE_ADAPTER_GLSL_SUPPORT;
uint8_t DEVICE_ADAPTER_HLSL_SUPPORT;
uint8_t DEVICE_ADAPTER_MSL_SUPPORT;
uint8_t DEVICE_ADAPTER_DXC_SUPPORT;
uint8_t DEVICE_ADAPTER_GLSLANG_SUPPORT;
uint8_t DEVICE_ADAPTER_SHADERC_SUPPORT;
uint8_t DEVICE_ADAPTER_SPIRV_CROSS_SUPPORT;
uint8_t DEVICE_ADAPTER_SPIRV_TOOLS_SUPPORT;
uint8_t DEVICE_ADAPTER_VULKAN_SUPPORT;
uint8_t DEVICE_ADAPTER_DIRECTX_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGLES_SUPPORT;
uint8_t DEVICE_ADAPTER_METAL_SUPPORT;
uint8_t DEVICE_ADAPTER_D3D12_SUPPORT;
uint8_t DEVICE_ADAPTER_D3D11_SUPPORT;
uint8_t DEVICE_ADAPTER_D3D10_SUPPORT;
uint8_t DEVICE_ADAPTER_D3D9_SUPPORT;
uint8_t DEVICE_ADAPTER_VULKAN_1_0_SUPPORT;
uint8_t DEVICE_ADAPTER_VULKAN_1_1_SUPPORT;
uint8_t DEVICE_ADAPTER_VULKAN_1_2_SUPPORT;
uint8_t DEVICE_ADAPTER_VULKAN_1_3_SUPPORT;
uint8_t DEVICE_ADAPTER_DIRECTX_12_SUPPORT;
uint8_t DEVICE_ADAPTER_DIRECTX_11_SUPPORT;
uint8_t DEVICE_ADAPTER_DIRECTX_10_SUPPORT;
uint8_t DEVICE_ADAPTER_DIRECTX_9_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_3_0_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_3_1_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_3_2_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_3_3_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_4_0_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_4_1_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_4_2_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_4_3_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_4_4_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_4_5_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGL_4_6_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGLES_2_0_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGLES_3_0_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGLES_3_1_SUPPORT;
uint8_t DEVICE_ADAPTER_OPENGLES_3_2_SUPPORT;
uint8_t DEVICE_ADAPTER_METAL_SUPPORT;
uint8_t DEVICE_ADAPTER_METAL_2_SUPPORT;
uint8_t DEVICE_ADAPTER_METAL_3_SUPPORT;
// 函数: render_destroy_device - 销毁渲染设备
uint8_t render_destroy_device;
uint8_t DEVICE_DESTRUCTION_CALLBACK;
uint8_t DEVICE_CLEANUP_HANDLER;
uint8_t DEVICE_RESOURCE_CLEANER;
uint8_t DEVICE_MEMORY_RELEASE;
uint8_t DEVICE_QUEUE_RELEASE;
uint8_t DEVICE_COMMAND_RELEASE;
uint8_t DEVICE_DESCRIPTOR_RELEASE;
uint8_t DEVICE_PIPELINE_RELEASE;
uint8_t DEVICE_SHADER_RELEASE;
uint8_t DEVICE_TEXTURE_RELEASE;
uint8_t DEVICE_BUFFER_RELEASE;
uint8_t DEVICE_FRAMEBUFFER_RELEASE;
uint8_t DEVICE_RENDERPASS_RELEASE;
uint8_t DEVICE_SYNCHRONIZATION_RELEASE;
uint8_t DEVICE_QUERY_RELEASE;
uint8_t DEVICE_EVENT_RELEASE;
uint8_t DEVICE_FENCE_RELEASE;
uint8_t DEVICE_SEMAPHORE_RELEASE;
uint8_t DEVICE_BARRIER_RELEASE;
uint8_t DEVICE_POOL_RELEASE;
uint8_t DEVICE_HEAP_RELEASE;
uint8_t DEVICE_ALLOCATOR_RELEASE;
uint8_t DEVICE_CONTEXT_RELEASE;
uint8_t DEVICE_SURFACE_RELEASE;
uint8_t DEVICE_SWAPCHAIN_RELEASE;
uint8_t DEVICE_PRESENT_RELEASE;
uint8_t DEVICE_DISPLAY_RELEASE;
uint8_t DEVICE_ADAPTER_RELEASE;
uint8_t DEVICE_DRIVER_RELEASE;
uint8_t DEVICE_INSTANCE_RELEASE;
uint8_t DEVICE_LAYER_RELEASE;
uint8_t DEVICE_EXTENSION_RELEASE;
uint8_t DEVICE_FEATURE_RELEASE;
uint8_t DEVICE_CAPABILITY_RELEASE;
uint8_t DEVICE_LIMIT_RELEASE;
uint8_t DEVICE_PROPERTY_RELEASE;
uint8_t DEVICE_FORMAT_RELEASE;
uint8_t DEVICE_MEMORY_RELEASE;
uint8_t DEVICE_QUEUE_RELEASE;
uint8_t DEVICE_COMMAND_RELEASE;
uint8_t DEVICE_PIPELINE_RELEASE;
uint8_t DEVICE_SHADER_RELEASE;
uint8_t DEVICE_TEXTURE_RELEASE;
uint8_t DEVICE_BUFFER_RELEASE;
uint8_t DEVICE_FRAMEBUFFER_RELEASE;
uint8_t DEVICE_RENDERPASS_RELEASE;
uint8_t DEVICE_DESCRIPTOR_RELEASE;
uint8_t DEVICE_SYNCHRONIZATION_RELEASE;
uint8_t DEVICE_QUERY_RELEASE;
uint8_t DEVICE_EVENT_RELEASE;
uint8_t DEVICE_FENCE_RELEASE;
uint8_t DEVICE_SEMAPHORE_RELEASE;
uint8_t DEVICE_BARRIER_RELEASE;
uint8_t DEVICE_POOL_RELEASE;
uint8_t DEVICE_HEAP_RELEASE;
uint8_t DEVICE_ALLOCATOR_RELEASE;
uint8_t DEVICE_CONTEXT_RELEASE;
uint8_t DEVICE_SURFACE_RELEASE;
uint8_t DEVICE_SWAPCHAIN_RELEASE;
uint8_t DEVICE_PRESENT_RELEASE;
uint8_t DEVICE_DISPLAY_RELEASE;
uint8_t DEVICE_ADAPTER_RELEASE;
uint8_t DEVICE_DRIVER_RELEASE;
uint8_t DEVICE_INSTANCE_RELEASE;
uint8_t DEVICE_LAYER_RELEASE;
uint8_t DEVICE_EXTENSION_RELEASE;
uint8_t DEVICE_FEATURE_RELEASE;
uint8_t DEVICE_CAPABILITY_RELEASE;
uint8_t DEVICE_LIMIT_RELEASE;
uint8_t DEVICE_PROPERTY_RELEASE;
uint8_t DEVICE_FORMAT_RELEASE;
uint8_t DEVICE_MEMORY_TYPE_RELEASE;
uint8_t DEVICE_MEMORY_HEAP_RELEASE;
uint8_t DEVICE_MEMORY_POOL_RELEASE;
uint8_t DEVICE_MEMORY_ALLOCATOR_RELEASE;
uint8_t DEVICE_QUEUE_FAMILY_RELEASE;
uint8_t DEVICE_QUEUE_INDEX_RELEASE;
uint8_t DEVICE_QUEUE_COUNT_RELEASE;
uint8_t DEVICE_QUEUE_PRIORITY_RELEASE;
uint8_t DEVICE_QUEUE_FLAGS_RELEASE;
uint8_t DEVICE_QUEUE_CAPABILITIES_RELEASE;
uint8_t DEVICE_QUEUE_PROPERTIES_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_INFO_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_FLAGS_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_COUNT_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_PRIORITY_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_INDEX_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_FAMILY_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_PROPERTIES_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_CAPABILITIES_RELEASE;
uint8_t DEVICE_QUEUE_CREATE_FLAGS_RELEASE;
uint8_t DEVICE_ADAPTER_INFO_RELEASE;
uint8_t DEVICE_ADAPTER_NAME_RELEASE;
uint8_t DEVICE_ADAPTER_VENDOR_RELEASE;
uint8_t DEVICE_ADAPTER_DRIVER_RELEASE;
uint8_t DEVICE_ADAPTER_VERSION_RELEASE;
uint8_t DEVICE_ADAPTER_DATE_RELEASE;
uint8_t DEVICE_ADAPTER_TYPE_RELEASE;
uint8_t DEVICE_ADAPTER_FLAGS_RELEASE;
uint8_t DEVICE_ADAPTER_PROPERTIES_RELEASE;
uint8_t DEVICE_ADAPTER_CAPABILITIES_RELEASE;
uint8_t DEVICE_ADAPTER_FEATURES_RELEASE;
uint8_t DEVICE_ADAPTER_EXTENSIONS_RELEASE;
uint8_t DEVICE_ADAPTER_LAYERS_RELEASE;
uint8_t DEVICE_ADAPTER_FORMATS_RELEASE;
uint8_t DEVICE_ADAPTER_MEMORY_TYPES_RELEASE;
uint8_t DEVICE_ADAPTER_MEMORY_HEAPS_RELEASE;
uint8_t DEVICE_ADAPTER_QUEUE_FAMILIES_RELEASE;
uint8_t DEVICE_ADAPTER_PRESENTATION_RELEASE;
uint8_t DEVICE_ADAPTER_SURFACE_RELEASE;
uint8_t DEVICE_ADAPTER_DISPLAY_RELEASE;
uint8_t DEVICE_ADAPTER_MONITOR_RELEASE;
uint8_t DEVICE_ADAPTER_MODE_RELEASE;
uint8_t DEVICE_ADAPTER_REFRESH_RATE_RELEASE;
uint8_t DEVICE_ADAPTER_RESOLUTION_RELEASE;
uint8_t DEVICE_ADAPTER_COLOR_DEPTH_RELEASE;
uint8_t DEVICE_ADAPTER_COLOR_FORMAT_RELEASE;
uint8_t DEVICE_ADAPTER_COLOR_SPACE_RELEASE;
uint8_t DEVICE_ADAPTER_HDR_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VSYNC_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FULLSCREEN_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_WINDOWED_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_BORDERLESS_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_RESIZABLE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_MINIMIZED_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_MAXIMIZED_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_EXCLUSIVE_FULLSCREEN_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_BORDERLESS_FULLSCREEN_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_STRETCHED_FULLSCREEN_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_CENTERED_FULLSCREEN_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_ASPECT_RATIO_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_REFRESH_RATE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_RESOLUTION_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_COLOR_DEPTH_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_COLOR_FORMAT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_COLOR_SPACE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_HDR_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VSYNC_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_MULTISAMPLE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_ANISOTROPY_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_MIPMAP_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_COMPRESSION_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FLOAT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_HALF_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DOUBLE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_INT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_UINT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SINT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DEPTH_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_STENCIL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_BLEND_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_CULL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SCISSOR_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_STENCIL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DEPTH_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_MULTISAMPLE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SAMPLE_SHADING_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SAMPLE_MASK_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_ALPHA_TO_COVERAGE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_ALPHA_TO_ONE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DEPTH_CLAMP_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DEPTH_BIAS_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FILL_MODE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_CULL_MODE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FRONT_FACE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_PRIMITIVE_RESTART_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_PRIMITIVE_TOPOLOGY_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VERTEX_INPUT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VERTEX_ATTRIBUTE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VERTEX_BINDING_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VERTEX_DIVISOR_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_INPUT_ASSEMBLY_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_TESSELLATION_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_GEOMETRY_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FRAGMENT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_COMPUTE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_RAYTRACING_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_MESH_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_TASK_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_COLLISION_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OCCLUSION_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_CONDITIONAL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_TRANSFORM_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FEEDBACK_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_INDIRECT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DRAW_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DISPATCH_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_CLEAR_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_COPY_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_BLIT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_RESOLVE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_GENERATE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_INVALIDATE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FLUSH_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FINISH_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FENCE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SEMAPHORE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_EVENT_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_QUERY_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_TIMER_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_PIPELINE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DESCRIPTOR_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_RENDER_PASS_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_FRAMEBUFFER_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_TEXTURE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_BUFFER_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_IMAGE_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SAMPLER_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SHADER_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SPIRV_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_GLSL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_HLSL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_MSL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DXC_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_GLSLANG_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SHADERC_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SPIRV_CROSS_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_SPIRV_TOOLS_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VULKAN_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DIRECTX_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGLES_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_METAL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_D3D12_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_D3D11_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_D3D10_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_D3D9_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VULKAN_1_0_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VULKAN_1_1_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VULKAN_1_2_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_VULKAN_1_3_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DIRECTX_12_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DIRECTX_11_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DIRECTX_10_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_DIRECTX_9_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_3_0_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_3_1_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_3_2_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_3_3_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_4_0_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_4_1_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_4_2_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_4_3_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_4_4_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_4_5_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGL_4_6_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGLES_2_0_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGLES_3_0_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGLES_3_1_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_OPENGLES_3_2_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_METAL_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_METAL_2_SUPPORT_RELEASE;
uint8_t DEVICE_ADAPTER_METAL_3_SUPPORT_RELEASE;