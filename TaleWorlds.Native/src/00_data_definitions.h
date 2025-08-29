#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 系统常量定义
#define 最大系统值 0x7fffffffffffffff
#define 线程池默认标志 线程池默认标志
#define 资源缓冲区大小 16
#define 资源类型纹理 13
#define 资源类型着色器 15
#define 资源类型音频 12

// 新增常量定义
#define 资源类型字体 12
#define 资源类型模型 28
#define 资源类型动画 19
#define 资源类型粒子 18
#define 资源类型配置 23
#define 资源类型存档 20
#define 资源类型字符串管理器 28
#define 资源类型物理 23
#define 资源类型AI 31
#define 资源类型UI 17
#define 资源类型脚本 25
#define 资源类型网络 35
#define 资源类型安全 29
#define 资源类型认证 30
#define 资源类型权限 26
#define 资源类型会话 24
#define 资源类型用户配置 33
#define 资源类型保存 21
#define 资源类型成就 27
#define 资源类型统计 28
#define 资源类型分析 29
#define 资源类型调试 17
#define 资源类型性能分析 25
#define 资源类型崩溃处理 21
#define 资源类型错误报告 19
#define 资源类型更新 33
#define 资源类型补丁 35
#define 资源类型诊断 21
#define 资源类型监控 21
#define 资源类型健康检查 15
#define 资源类型备份 21
#define 资源类型恢复 21
#define 资源类型维护 24
#define 资源类型优化 27
#define 资源类型性能监控 20
#define 资源类型负载均衡 18
#define 资源类型扩展 15

// 系统状态码
#define 系统状态成功 0
#define 系统状态失败 -1

// 地址常量定义
#define 主线程池互斥锁地址 0x180c91970
#define 渲染线程池互斥锁地址 0x180c91970
#define 网络线程池互斥锁地址 0x180c91970
#define IO线程池互斥锁地址 0x180c91970
#define 字符串缓冲区大小1 0x80
#define 字符串缓冲区大小2 0x80
#define 线程栈大小 0x1fff
#define 网络缓冲区大小 0xe8
#define 系统配置缓冲区大小 0x238
#define MAX_线程栈大小 0x1fff

// 标志常量定义
#define 标志已初始化 0x13
#define 标志纹理资源 0xd
#define 标志着色器资源 0x17
#define 标志音频资源 0xd
#define 标志字体资源 0xc
#define 标志模型资源 0x1f
#define 标志动画资源 0x17
#define 标志粒子资源 0x13
#define 标志配置资源 0x14
#define 标志存档资源 0x1b
#define 标志字符串管理器资源 0x19
#define 标志物理资源 0x12
#define 标志AI资源 0x19
#define 标志UI资源 0x11
#define 标志脚本资源 0x18
#define 标志网络资源 0x13
#define 标志安全资源 0x16
#define 标志认证资源 0xf
#define 标志权限资源 0x14
#define 标志会话资源 0x16
#define 标志用户配置资源 0xf
#define 标志保存资源 0xb
#define 标志成就资源 0x13
#define 标志统计资源 0xd
#define 标志分析资源 0x17
#define 标志调试资源 0xd
#define 标志性能分析资源 0xc
#define 标志崩溃处理资源 0x16
#define 标志错误报告资源 0x13
#define 标志更新资源 0xf
#define 标志补丁资源 0xb
#define 标志诊断资源 0x1b
#define 标志监控资源 0x19
#define 标志健康检查资源 0x1f
#define 标志备份资源 0x1b
#define 标志恢复资源 0x13
#define 标志维护资源 0xe
#define 标志优化资源 0xe
#define 标志性能监控资源 0xf
#define 标志负载均衡资源 0xd
#define 标志扩展资源 0x13

// 浮点数常量
#define 浮点数一 0x3f800000
#define 浮点数最大正常值 0x7f7fffff
#define 浮点数PI除以4 0x3d088889

// 整数常量
#define 无符号32位整数最大值 0xffffffff
#define 无符号64位整数最大值 0xffffffffffffffff
#define 32位整数掩码 0xffffffff
#define 64位整数掩码 0xffffffff00000000

// 系统函数地址常量
#define 主互斥锁地址 0x180c91970
#define 条件变量地址 0x180c91240
#define 清理函数地址 0x180c911a0
#define 第二互斥锁地址 0x180c91f70
#define 第三互斥锁地址 0x180c91ff0
#define 字符串偏移地址 0x180c82871

// 函数地址常量
#define 渲染引擎函数 0x00018005c480
#define 系统初始化函数 0x00018024f7f0
#define 标志处理函数 0x0001800e2850
#define 内存分配函数 0x00018066bd70
#define 浮点数转换函数 0x0001800adf40
#define 互斥锁设置函数 0x000180220c90
#define 线程处理函数 0x0001800ab000
#define 模块加载函数 0x00018013d940
#define 数据处理函数 0x0001804ca2d0
#define 系统验证函数 0x0001800a1eb0

// 内存管理地址
#define 内存池地址1 0x180d496e0
#define 内存池地址2 0x180d497e0
#define 模块数据地址 0x180c95bf8
#define 模块互斥锁地址 0x180c95d70
#define 模块处理地址 0x180c95de0
#define 模块配置地址 0x180c95fc8

// 系统模块类型常量
#define 模块类型音频 0xb
#define 模块类型视频 0xc
#define 模块类型输入 0xd
#define 模块类型网络 0xe
#define 模块类型物理 0x11
#define 模块类型AI 0x13
#define 模块类型UI 0x14
#define 模块类型脚本 0x15
#define 模块类型配置 0x16
#define 模块类型资源缓存 0x17
#define 模块类型资源加载器 0x18
#define 模块类型着色器 0x19
#define 模块类型纹理 0x1a
#define 模块类型网格 0x1b
#define 模块类型动画 0x1c
#define 模块类型粒子 0x1d
#define 模块类型物理_ENGINE 0x1e
#define 模块类型碰撞 0x1f
#define 模块类型AI_SYSTEM 0x21
#define 模块类型导航 0x23
#define 模块类型UI_FRAMEWORK 0x25
#define 模块类型脚本_ENGINE 0x27
#define 模块类型数据库 0x28
#define 模块类型网络_MANAGER 0x2a
#define 模块类型安全 0x2c
#define 模块类型加密 0x2d
#define 模块类型认证 0x2e
#define 模块类型权限 0x2f
#define 模块类型会话 0x30
#define 模块类型用户配置 0x31
#define 模块类型保存 0x32
#define 模块类型成就 0x33
#define 模块类型统计 0x34
#define 模块类型分析 0x35
#define 模块类型调试 0x36
#define 模块类型性能分析 0x37
#define 模块类型崩溃处理 0x38
#define 模块类型错误报告 0x39
#define 模块类型更新 0x3a
#define 模块类型补丁 0x3b
#define 模块类型诊断 0x3c
#define 模块类型监控 0x3d
#define 模块类型健康检查 0x3e

// 全局数据定义 - 从原始文件中提取
void* g_全局系统数据;
void* g_系统配置数据;

// 初始化系统配置
int 初始化系统配置(void)
{
  int is_system_enabled = 1;
  int operation_count = 0;
  long long max_allowed_value = 最大系统值;
  int system_status = 系统状态成功;
  int init_result = initialize_system(system_configuration_init_function);
  return (init_result != 0) - 1;
}
// 初始化核心数据结构
int initialize_core_data_structure(void)
{
  long long init_result;
  void* system_buffer_ptr = &g_systemDataBuffer;
  void* core_data_ptr = &g_core_data_value;
  int data_offset = 0;
  g_core_data_value = 0;
  init_result = initialize_system(core_data_structure_init_function);
  return (init_result != 0) - 1;
}
// 初始化网络缓冲区系统
int initialize_network_buffer_system(void)
{
  long long init_result;
  void* network_buffer_ptr = &g_network_data_buffer;
  void* network_value_ptr = &network_buffer_current_value;
  int buffer_offset = 0;
  network_buffer_current_value = 0;
  init_result = initialize_system(network_buffer_init_function);
  return (init_result != 0) - 1;
}
// 初始化渲染上下文系统
int initialize_rendering_context_system(void)
{
  long long init_result;
  void* render_buffer_ptr = &g_render_data_buffer;
  void* render_value_ptr = &g_render_buffer_value;
  int context_offset = 0;
  g_render_buffer_value = 0;
  init_result = initialize_system(rendering_context_init_function);
  return (init_result != 0) - 1;
}
// 初始化模块系统
int initialize_module_system(void)
{
  long long init_result;
  void* module_buffer_ptr = &g_moduleDataBuffer;
  void* module_value_ptr = &g_module_data_value;
  void* null_ptr = 0;
  g_module_data_value = 0;
  init_result = execute_function(module_system_init_function);
  return (init_result != 0) - 1;
}
// 初始化输入系统
int initialize_input_system(void)
{
  long long init_result;
  void* input_shared_buffer_ptr = &g_shared_data_buffer;
  void* input_value_ptr = &input_buffer_current_value;
  int buffer_offset = 0;
  input_buffer_current_value = 0;
  init_result = execute_function(input_system_init_function);
  return (init_result != 0) - 1;
}
// 初始化物理系统
int initialize_physics_system(void)
{
  long long init_result;
  void* physics_shared_buffer_ptr = &g_shared_data_buffer;
  void* physics_value_ptr = &physics_buffer_current_value;
  int physics_data_offset = 0;
  physics_buffer_current_value = 0;
  init_result = execute_function(physics_system_init_function);
  return (init_result != 0) - 1;
}
// 初始化主线程池
int initialize_main_thread_pool(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long init_result;
  unsigned long long pool_flags = 线程池默认标志;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(主线程池互斥锁地址, 2, mutex_attr, mutex_type, pool_flags);
  main_thread_pool_status = 系统状态成功;
  init_result = execute_function(main_thread_pool_init_function);
  return (init_result != 0) - 1;
}
// 初始化渲染线程池
int initialize_rendering_thread_pool(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long init_result;
  unsigned long long pool_flags = 线程池默认标志;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(渲染线程池互斥锁地址, 2, mutex_attr, mutex_type, pool_flags);
  render_thread_pool_status = 系统状态成功;
  init_result = execute_function(rendering_thread_pool_init_function);
  return (init_result != 0) - 1;
}
// 初始化网络线程池
int initialize_network_thread_pool(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long init_result;
  unsigned long long pool_flags = 线程池默认标志;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(网络线程池互斥锁地址, 2, mutex_attr, mutex_type, pool_flags);
  network_thread_pool_status = 系统状态成功;
  init_result = execute_function(network_thread_pool_init_function);
  return (init_result != 0) - 1;
}
// 初始化IO线程池
int initialize_io_thread_pool(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long init_result;
  unsigned long long pool_flags = 线程池默认标志;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(IO线程池互斥锁地址, 2, mutex_attr, mutex_type, pool_flags);
  io_thread_pool_status = 系统状态成功;
  init_result = execute_function(io_thread_pool_init_function);
  return (init_result != 0) - 1;
}
// 初始化基础资源管理器
int initialize_base_resource_manager(void)
{
  long long init_result;
  unsigned long long str_length;
  g_resource_string_1 = 0;
  g_resource_id_1 = 6;
  strcpy_s(&g_resource_string_1,STRING_BUFFER_SIZE,&string_source_001,str_length,线程池默认标志);
  init_result = execute_function(base_resource_manager_init_function);
  return (init_result != 0) - 1;
}
// 初始化纹理资源管理器
int initialize_texture_resource_manager(void)
{
  long long init_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_1;
  resource_buffer_1 = 0;
  resource_type_1 = 资源类型纹理;
  strcpy_s(&resource_buffer_1, 资源缓冲区大小, &string_source_002, str_length, 线程池默认标志);
  init_result = execute_function(texture_resource_manager_init_function);
  return (init_result != 0) - 1;
}
int initialize_shader_resource_manager_1(void)
{
  long long init_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_2;
  resource_buffer_2 = 0;
  resource_type_2 = 资源类型着色器;
  strcpy_s(&resource_buffer_2, 资源缓冲区大小, &string_source_003, str_length, 线程池默认标志);
  init_result = execute_function(shader_resource_manager_1_init_function);
  return (init_result != 0) - 1;
}
int initialize_shader_resource_manager_2(void)
{
  long long init_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_3;
  resource_buffer_3 = 0;
  resource_type_3 = 资源类型着色器;
  strcpy_s(&resource_buffer_3, 资源缓冲区大小, &string_source_004, str_length, 线程池默认标志);
  init_result = execute_function(shader_resource_manager_2_init_function);
  return (init_result != 0) - 1;
}
int initialize_audio_resource_manager(void)
{
  long long initialization_result;
  unsigned long long string_length_parameter;
  void* resource_data_buffer_pointer = &g_resource_data_buffer;
  void* resource_buffer_value_pointer = &resource_buffer_4;
  resource_buffer_4 = 0;
  resource_type_4 = 资源类型音频;
  strcpy_s(&resource_buffer_4, 资源缓冲区大小, &string_source_005, string_length_parameter, 线程池默认标志);
  initialization_result = execute_function(audio_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_font_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_data_buffer_pointer = &g_resource_data_buffer;
  void* resource_buffer_value_pointer = &resource_buffer_5;
  resource_buffer_5 = 0;
  resource_type_5 = 资源类型音频;
  strcpy_s(&resource_buffer_5, 资源缓冲区大小, &string_source_006, string_length_parameter, 线程池默认标志);
  initialization_result = execute_function(font_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_model_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_data_buffer_pointer = &g_resource_data_buffer;
  void* resource_buffer_value_pointer = &resource_buffer_6;
  resource_buffer_6 = 0;
  resource_type_6 = 4;
  strcpy_s(&resource_buffer_6, 资源缓冲区大小, &string_source_007, string_length_parameter, 线程池默认标志);
  initialization_result = execute_function(model_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_animation_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_data_buffer_pointer = &g_resource_data_buffer;
  void* system_data_pointer = &g_system_name_data;
  g_system_name_data = 0;
  int resource_type = 5;
  strcpy_s(&g_system_name_buffer, 资源缓冲区大小, &g_system_name_string, string_length_parameter, 线程池默认标志);
  initialization_result = execute_function(animation_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
// 初始化资源管理器8
int initialize_particle_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_data_pointer = &g_resource_data_buffer;
  void* buffer_pointer = &g_system_version_data;
  g_system_version_data = 0;
  int resource_type = 5;
  strcpy_s(&g_system_version_buffer, 资源缓冲区大小, &g_system_version_string, string_length_parameter, 线程池默认标志);
  initialization_result = execute_function(particle_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
// 初始化字符串缓冲区1
int initialize_config_string_buffer(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  g_config_string_buffer_ptr = &g_empty_data_buffer;
  g_config_data_ptr = &g_config_data_value;
  g_config_data_value = 0;
  g_config_resource_type = 资源类型纹理;
  strcpy_s(&g_config_file_path, CONFIG_PATH_BUFFER_SIZE, &g_config_path_string, string_length_parameter, 线程池默认标志);
  initialization_result = execute_function(config_string_buffer_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化字符串缓冲区2
int initialize_savegame_string_buffer(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  g_savegame_string_buffer_ptr = &g_empty_data_buffer;
  g_savegame_data_ptr = &g_savegame_data_value;
  g_savegame_data_value = 0;
  g_savegame_resource_type = 9;
  strcpy_s(&g_save_file_path, CONFIG_PATH_BUFFER_SIZE, &g_save_path_string, string_length_parameter, 线程池默认标志);
  initialization_result = execute_function(savegame_string_buffer_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化互斥锁1
int initialize_main_mutex(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long initialization_result;
  _Mtx_init_in_situ(主线程池互斥锁地址, 字符串缓冲区大小2, mutex_attr, mutex_type, 线程池默认标志);
  initialization_result = execute_function(main_mutex_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化数据缓冲区系统
int initialize_data_buffer_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  g_system_config_buffer = 0;
  g_system_config_flags = 标志已初始化;
  strcpy_s(&g_system_config_buffer,系统配置缓冲区大小,&g_systemConfigString,str_len_param,线程池默认标志);
  g_resource_template_ptr_1 = &g_defaultDataTemplate;
  g_texture_resource_ptr = &texture_resource_data;
  texture_resource_data = 0;
  g_resource_type_1 = 标志纹理资源;
  strcpy_s(&texture_resource_data,系统配置缓冲区大小,&g_texture_resource_string);
  g_resource_template_ptr_2 = &g_defaultDataTemplate;
  g_shader_resource_ptr = &shader_resource_data;
  shader_resource_data = 0;
  global_data_ = 标志着色器资源;
  strcpy_s(&shader_resource_data,系统配置缓冲区大小,&g_shader_resource_string);
  global_data_ = &g_defaultDataTemplate;
  g_audio_resource_ptr = &audio_resource_data;
  audio_resource_data = 0;
  global_data_ = 标志音频资源;
  strcpy_s(&audio_resource_data,系统配置缓冲区大小,&g_audio_resource_string);
  global_data_ = &g_defaultDataTemplate;
  g_font_resource_ptr = &font_resource_data;
  font_resource_data = 0;
  global_data_ = 标志字体资源;
  strcpy_s(&font_resource_data,系统配置缓冲区大小,&g_font_resource_string);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &resource_data_5;
  resource_data_5 = 0;
  global_data_ = 标志字体资源;
  strcpy_s(&resource_data_5,系统配置缓冲区大小,&g_resourceString5);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6978;
  data_180bf6978 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf6978,系统配置缓冲区大小,&g_resourceString6);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf69d0;
  data_180bf69d0 = 0;
  global_data_ = 标志模型资源;
  strcpy_s(&data_180bf69d0,系统配置缓冲区大小,&g_resourceString7);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6a28;
  data_180bf6a28 = 0;
  global_data_ = 标志着色器资源;
  strcpy_s(&data_180bf6a28,系统配置缓冲区大小,&g_resourceString8);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6a80;
  data_180bf6a80 = 0;
  global_data_ = 标志粒子资源;
  strcpy_s(&data_180bf6a80,系统配置缓冲区大小,&g_resourceString9);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6ad8;
  data_180bf6ad8 = 0;
  global_data_ = 标志配置资源;
  strcpy_s(&data_180bf6ad8,系统配置缓冲区大小,&g_texture_resource_string0);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6b30;
  data_180bf6b30 = 0;
  global_data_ = 0;
  strcpy_s(&data_180bf6b30,系统配置缓冲区大小,&data_18098bc73);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6b88;
  data_180bf6b88 = 0;
  global_data_ = 标志存档资源;
  strcpy_s(&data_180bf6b88,系统配置缓冲区大小,&g_texture_resource_string1);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6be0;
  data_180bf6be0 = 0;
  global_data_ = 7;
  strcpy_s(&data_180bf6be0,系统配置缓冲区大小,&g_texture_resource_string2);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6c38;
  data_180bf6c38 = 0;
  global_data_ = 标志字符串管理器资源;
  strcpy_s(&data_180bf6c38,系统配置缓冲区大小,&g_texture_resource_string3);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6c90;
  data_180bf6c90 = 0;
  global_data_ = 标志物理资源;
  strcpy_s(&data_180bf6c90,系统配置缓冲区大小,&g_texture_resource_string4);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6ce8;
  data_180bf6ce8 = 0;
  global_data_ = 标志物理资源;
  strcpy_s(&data_180bf6ce8,系统配置缓冲区大小,&g_texture_resource_string5);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6d40;
  data_180bf6d40 = 0;
  global_data_ = 标志字符串管理器资源;
  strcpy_s(&data_180bf6d40,系统配置缓冲区大小,&g_texture_resource_string6);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6d98;
  data_180bf6d98 = 0;
  global_data_ = 标志UI资源;
  strcpy_s(&data_180bf6d98,系统配置缓冲区大小,&g_texture_resource_string7);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6df0;
  data_180bf6df0 = 0;
  global_data_ = 标志脚本资源;
  strcpy_s(&data_180bf6df0,系统配置缓冲区大小,&g_texture_resource_string8);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6e48;
  data_180bf6e48 = 0;
  global_data_ = 标志网络资源;
  strcpy_s(&data_180bf6e48,系统配置缓冲区大小,&g_texture_resource_string9);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6ea0;
  data_180bf6ea0 = 0;
  global_data_ = 标志字符串管理器资源;
  strcpy_s(&data_180bf6ea0,系统配置缓冲区大小,&g_shader_resource_string0);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6ef8;
  data_180bf6ef8 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf6ef8,系统配置缓冲区大小,&g_shader_resource_string1);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6f50;
  data_180bf6f50 = 0;
  global_data_ = 标志配置资源;
  strcpy_s(&data_180bf6f50,系统配置缓冲区大小,&g_shader_resource_string2);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf6fa8;
  data_180bf6fa8 = 0;
  global_data_ = 标志认证资源;
  strcpy_s(&data_180bf6fa8,系统配置缓冲区大小,&g_shader_resource_string3);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7000;
  data_180bf7000 = 0;
  global_data_ = 标志安全资源;
  strcpy_s(&data_180bf7000,系统配置缓冲区大小,&g_shader_resource_string4);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7058;
  data_180bf7058 = 0;
  global_data_ = 标志物理资源;
  strcpy_s(&data_180bf7058,系统配置缓冲区大小,&g_shader_resource_string5);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf70b0;
  data_180bf70b0 = 0;
  global_data_ = 标志配置资源;
  strcpy_s(&data_180bf70b0,系统配置缓冲区大小,&g_shader_resource_string6);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7108;
  data_180bf7108 = 0;
  global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bf7108,系统配置缓冲区大小,&g_shader_resource_string7);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7160;
  data_180bf7160 = 0;
  global_data_ = 标志网络资源;
  strcpy_s(&data_180bf7160,系统配置缓冲区大小,&g_shader_resource_string8);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf71b8;
  data_180bf71b8 = 0;
  global_data_ = 标志安全资源;
  strcpy_s(&data_180bf71b8,系统配置缓冲区大小,&g_shader_resource_string9);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7210;
  data_180bf7210 = 0;
  global_data_ = 0xf;
  strcpy_s(&data_180bf7210,系统配置缓冲区大小,&g_audio_resource_string0);
  init_result = execute_function(&g_systemInitFunction1);
  return (init_result != 0) - 1;
}
int initialize_audio_module(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7268;
  data_180bf7268 = 0;
  global_data_ = 0xb;
  strcpy_s(&data_180bf7268,系统配置缓冲区大小,&g_systemString1,str_len_param,线程池默认标志);
  init_result = execute_function(data_buffer_system_init_callback);
  return (init_result != 0) - 1;
}
int initialize_video_module(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf72c8;
  data_180bf72c8 = 0;
  global_data_ = 9;
  strcpy_s(&data_180bf72c8,系统配置缓冲区大小,&g_systemString2,str_len_param,线程池默认标志);
  init_result = execute_function(memory_manager_init_callback);
  return (init_result != 0) - 1;
}
int initialize_input_module(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7328;
  data_180bf7328 = 0;
  global_data_ = 9;
  strcpy_s(&data_180bf7328,系统配置缓冲区大小,&g_systemString3,str_len_param,线程池默认标志);
  init_result = execute_function(thread_manager_init_callback);
  return (init_result != 0) - 1;
}
int initialize_network_module(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7388;
  data_180bf7388 = 0;
  global_data_ = 0xb;
  strcpy_s(&data_180bf7388,0x80,&g_memoryString1,str_len_param,线程池默认标志);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7420;
  data_180bf7420 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf7420,0x80,&g_memoryString2);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf74b8;
  data_180bf74b8 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf74b8,0x80,&g_memoryString3);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7550;
  data_180bf7550 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf7550,0x80,&g_memoryString4);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf75e8;
  data_180bf75e8 = 0;
  global_data_ = 0xc;
  strcpy_s(&data_180bf75e8,0x80,&g_memoryString5);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7680;
  data_180bf7680 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf7680,0x80,&g_memoryString6);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7718;
  data_180bf7718 = 0;
  global_data_ = 10;
  strcpy_s(&data_180bf7718,0x80,&g_memoryString7);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf77b0;
  data_180bf77b0 = 0;
  global_data_ = 0xc;
  strcpy_s(&data_180bf77b0,0x80,&g_memoryString8);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7848;
  data_180bf7848 = 0;
  global_data_ = 0x11;
  strcpy_s(&data_180bf7848,0x80,&g_memoryString9);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf78e0;
  data_180bf78e0 = 0;
  global_data_ = 0x11;
  strcpy_s(&data_180bf78e0,0x80,&g_memoryString10);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7978;
  data_180bf7978 = 0;
  global_data_ = 0x19;
  strcpy_s(&data_180bf7978,0x80,&g_memoryString11);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7a10;
  data_180bf7a10 = 0;
  global_data_ = 0x1a;
  strcpy_s(&data_180bf7a10,0x80,&g_memoryString12);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7aa8;
  data_180bf7aa8 = 0;
  global_data_ = 0x1b;
  strcpy_s(&data_180bf7aa8,0x80,&g_memoryString13);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7b40;
  data_180bf7b40 = 0;
  global_data_ = 0xc;
  strcpy_s(&data_180bf7b40,0x80,&g_memoryString14);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7bd8;
  data_180bf7bd8 = 0;
  global_data_ = 0x11;
  strcpy_s(&data_180bf7bd8,0x80,&g_memoryString15);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bf7c70;
  data_180bf7c70 = 0;
  global_data_ = 0x11;
  strcpy_s(&data_180bf7c70,0x80,&g_memoryString16);
  init_result = execute_function(&g_systemInitFunction2);
  return (init_result != 0) - 1;
}
  data_180bf7ea8 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf7ea8,系统配置缓冲区大小,&g_systemConfigString,str_len_param,线程池默认标志);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7f00;
  data_180bf7f00 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf7f00,系统配置缓冲区大小,&g_texture_resource_string);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7f58;
  data_180bf7f58 = 0;
  global_data_ = 0x17;
  strcpy_s(&data_180bf7f58,系统配置缓冲区大小,&g_shader_resource_string);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf7fb0;
  data_180bf7fb0 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf7fb0,系统配置缓冲区大小,&g_audio_resource_string);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8008;
  data_180bf8008 = 0;
  global_data_ = 0xc;
  strcpy_s(&data_180bf8008,系统配置缓冲区大小,&g_font_resource_string);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8060;
  data_180bf8060 = 0;
  global_data_ = 0xc;
  strcpy_s(&data_180bf8060,系统配置缓冲区大小,&g_resourceString5);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf80b8;
  data_180bf80b8 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf80b8,系统配置缓冲区大小,&g_resourceString6);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8110;
  data_180bf8110 = 0;
  global_data_ = 0x1f;
  strcpy_s(&data_180bf8110,系统配置缓冲区大小,&g_resourceString7);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8168;
  data_180bf8168 = 0;
  global_data_ = 0x17;
  strcpy_s(&data_180bf8168,系统配置缓冲区大小,&g_resourceString8);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf81c0;
  data_180bf81c0 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf81c0,系统配置缓冲区大小,&g_resourceString9);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8218;
  data_180bf8218 = 0;
  global_data_ = 0x14;
  strcpy_s(&data_180bf8218,系统配置缓冲区大小,&g_texture_resource_string0);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8270;
  data_180bf8270 = 0;
  global_data_ = 0;
  strcpy_s(&data_180bf8270,系统配置缓冲区大小,&data_18098bc73);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf82c8;
  data_180bf82c8 = 0;
  global_data_ = 0x1b;
  strcpy_s(&data_180bf82c8,系统配置缓冲区大小,&g_texture_resource_string1);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8320;
  data_180bf8320 = 0;
  global_data_ = 7;
  strcpy_s(&data_180bf8320,系统配置缓冲区大小,&g_texture_resource_string2);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8378;
  data_180bf8378 = 0;
  global_data_ = 0x19;
  strcpy_s(&data_180bf8378,系统配置缓冲区大小,&g_texture_resource_string3);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf83d0;
  data_180bf83d0 = 0;
  global_data_ = 0x12;
  strcpy_s(&data_180bf83d0,系统配置缓冲区大小,&g_texture_resource_string4);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8428;
  data_180bf8428 = 0;
  global_data_ = 0x12;
  strcpy_s(&data_180bf8428,系统配置缓冲区大小,&g_texture_resource_string5);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8480;
  data_180bf8480 = 0;
  global_data_ = 0x19;
  strcpy_s(&data_180bf8480,系统配置缓冲区大小,&g_texture_resource_string6);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf84d8;
  data_180bf84d8 = 0;
  global_data_ = 0x11;
  strcpy_s(&data_180bf84d8,系统配置缓冲区大小,&g_texture_resource_string7);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8530;
  data_180bf8530 = 0;
  global_data_ = 0x18;
  strcpy_s(&data_180bf8530,系统配置缓冲区大小,&g_texture_resource_string8);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8588;
  data_180bf8588 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf8588,系统配置缓冲区大小,&g_texture_resource_string9);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf85e0;
  data_180bf85e0 = 0;
  global_data_ = 0x19;
  strcpy_s(&data_180bf85e0,系统配置缓冲区大小,&g_shader_resource_string0);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8638;
  data_180bf8638 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf8638,系统配置缓冲区大小,&g_shader_resource_string1);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8690;
  data_180bf8690 = 0;
  global_data_ = 0x14;
  strcpy_s(&data_180bf8690,系统配置缓冲区大小,&g_shader_resource_string2);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf86e8;
  data_180bf86e8 = 0;
  global_data_ = 0xf;
  strcpy_s(&data_180bf86e8,系统配置缓冲区大小,&g_shader_resource_string3);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8740;
  data_180bf8740 = 0;
  global_data_ = 0x16;
  strcpy_s(&data_180bf8740,系统配置缓冲区大小,&g_shader_resource_string4);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8798;
  data_180bf8798 = 0;
  global_data_ = 0x12;
  strcpy_s(&data_180bf8798,系统配置缓冲区大小,&g_shader_resource_string5);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf87f0;
  data_180bf87f0 = 0;
  global_data_ = 0x14;
  strcpy_s(&data_180bf87f0,系统配置缓冲区大小,&g_shader_resource_string6);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8848;
  data_180bf8848 = 0;
  global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bf8848,系统配置缓冲区大小,&g_shader_resource_string7);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf88a0;
  data_180bf88a0 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf88a0,系统配置缓冲区大小,&g_shader_resource_string8);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf88f8;
  data_180bf88f8 = 0;
  global_data_ = 0x16;
  strcpy_s(&data_180bf88f8,系统配置缓冲区大小,&g_shader_resource_string9);
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf8950;
  data_180bf8950 = 0;
  global_data_ = 0xf;
  strcpy_s(&data_180bf8950,系统配置缓冲区大小,&g_audio_resource_string0);
  init_result = execute_function(&g_systemInitFunction3);
  return (init_result != 0) - 1;
}
  data_180bf90c8 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf90c8,CONFIG_PATH_BUFFER_SIZE,&g_configString1,str_len_param,线程池默认标志);
  init_result = execute_function(event_system_init_callback);
  return (init_result != 0) - 1;
}
int initialize_physics_module(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_alternateDataTemplate;
  global_data_ = &data_180bf5ba0;
  data_180bf5ba0 = 0;
  global_data_ = 9;
  strcpy_s(&data_180bf5ba0,CONFIG_PATH_BUFFER_SIZE,&g_configString2,str_len_param,线程池默认标志);
  init_result = execute_function(time_system_init_callback);
  return (init_result != 0) - 1;
}
  data_180bf91c8 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf91c8,系统配置缓冲区大小,&g_moduleString1,str_len_param,线程池默认标志);
  init_result = execute_function(file_system_init_callback);
  return (init_result != 0) - 1;
}
int initialize_ai_module(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9228;
  data_180bf9228 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf9228,系统配置缓冲区大小,&g_moduleString2,str_len_param,线程池默认标志);
  init_result = execute_function(debug_system_init_callback);
  return (init_result != 0) - 1;
}
int initialize_ui_module(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9288;
  data_180bf9288 = 0;
  global_data_ = 0x12;
  strcpy_s(&data_180bf9288,系统配置缓冲区大小,&g_moduleString3,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_7_init_function);
  return (init_result != 0) - 1;
}
int initialize_scripting_module(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf92e8;
  data_180bf92e8 = 0;
  global_data_ = 0x12;
  strcpy_s(&data_180bf92e8,系统配置缓冲区大小,&g_moduleString4,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_8_init_function);
  return (init_result != 0) - 1;
}
int initialize_audio_engine(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9348;
  data_180bf9348 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf9348,系统配置缓冲区大小,&g_moduleString5,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_9_init_function);
  return (init_result != 0) - 1;
}
int initialize_video_subsystem(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf93a8;
  data_180bf93a8 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf93a8,系统配置缓冲区大小,&g_moduleString6,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_10_init_function);
  return (init_result != 0) - 1;
}
int initialize_input_handler(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9408;
  data_180bf9408 = 0;
  global_data_ = 0x17;
  strcpy_s(&data_180bf9408,系统配置缓冲区大小,&g_moduleString7,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_11_init_function);
  return (init_result != 0) - 1;
}
int initialize_network_stack(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9468;
  data_180bf9468 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf9468,系统配置缓冲区大小,&g_moduleString8,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_12_init_function);
  return (init_result != 0) - 1;
}
int initialize_file_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf94c8;
  data_180bf94c8 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf94c8,系统配置缓冲区大小,&g_moduleString9,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_13_init_function);
  return (init_result != 0) - 1;
}
int initialize_memory_manager(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9528;
  data_180bf9528 = 0;
  global_data_ = 0xc;
  strcpy_s(&data_180bf9528,系统配置缓冲区大小,&g_moduleString10,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_14_init_function);
  return (init_result != 0) - 1;
}
int initialize_thread_manager(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9588;
  data_180bf9588 = 0;
  global_data_ = 0x16;
  strcpy_s(&data_180bf9588,系统配置缓冲区大小,&g_moduleString11,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_15_init_function);
  return (init_result != 0) - 1;
}
int initialize_event_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf95e8;
  data_180bf95e8 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf95e8,系统配置缓冲区大小,&g_moduleString12,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_16_init_function);
  return (init_result != 0) - 1;
}
int initialize_timer_service(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9648;
  data_180bf9648 = 0;
  global_data_ = 0x14;
  strcpy_s(&data_180bf9648,系统配置缓冲区大小,&g_moduleString13,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_17_init_function);
  return (init_result != 0) - 1;
}
int initialize_logger_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf96a8;
  data_180bf96a8 = 0;
  global_data_ = 0x17;
  strcpy_s(&data_180bf96a8,系统配置缓冲区大小,&data_180a22cb0,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_18_init_function);
  return (init_result != 0) - 1;
}
int initialize_config_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9708;
  data_180bf9708 = 0;
  global_data_ = 0x17;
  strcpy_s(&data_180bf9708,系统配置缓冲区大小,&g_moduleString14,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_19_init_function);
  return (init_result != 0) - 1;
}
int initialize_resource_cache(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9768;
  data_180bf9768 = 0;
  global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bf9768,系统配置缓冲区大小,&g_moduleString15,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_20_init_function);
  return (init_result != 0) - 1;
}
int initialize_asset_loader(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf97c8;
  data_180bf97c8 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf97c8,系统配置缓冲区大小,&g_moduleString16,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_21_init_function);
  return (init_result != 0) - 1;
}
int initialize_shader_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9828;
  data_180bf9828 = 0;
  global_data_ = 0x1e;
  strcpy_s(&data_180bf9828,系统配置缓冲区大小,&g_moduleString17,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_22_init_function);
  return (init_result != 0) - 1;
}
int initialize_texture_manager(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9888;
  data_180bf9888 = 0;
  global_data_ = 0x1b;
  strcpy_s(&data_180bf9888,系统配置缓冲区大小,&g_moduleString18,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_23_init_function);
  return (init_result != 0) - 1;
}
int initialize_mesh_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf98e8;
  data_180bf98e8 = 0;
  global_data_ = 0x1b;
  strcpy_s(&data_180bf98e8,系统配置缓冲区大小,&g_moduleString19,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_24_init_function);
  return (init_result != 0) - 1;
}
int initialize_animation_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9948;
  data_180bf9948 = 0;
  global_data_ = 0x1c;
  strcpy_s(&data_180bf9948,系统配置缓冲区大小,&g_moduleString20,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_25_init_function);
  return (init_result != 0) - 1;
}
int initialize_particle_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf99a8;
  data_180bf99a8 = 0;
  global_data_ = 0x1d;
  strcpy_s(&data_180bf99a8,系统配置缓冲区大小,&g_moduleString21,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_26_init_function);
  return (init_result != 0) - 1;
}
int initialize_physics_engine(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9a08;
  data_180bf9a08 = 0;
  global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bf9a08,系统配置缓冲区大小,&g_moduleString22,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_27_init_function);
  return (init_result != 0) - 1;
}
int initialize_collision_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9a68;
  data_180bf9a68 = 0;
  global_data_ = 0x1d;
  strcpy_s(&data_180bf9a68,系统配置缓冲区大小,&g_moduleString23,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_28_init_function);
  return (init_result != 0) - 1;
}
int initialize_ai_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  g_string_manager_ptr_180bf9ab0 = &g_defaultDataTemplate;
  g_string_manager_ptr_180bf9ab8 = &g_string_buffer_180bf9ac8;
  g_string_buffer_180bf9ac8 = 0;
  g_string_manager_type_180bf9ac0 = 0x1c;
  strcpy_s(&g_string_buffer_180bf9ac8,系统配置缓冲区大小,&data_180a22d48,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_29_init_function);
  return (init_result != 0) - 1;
}
int initialize_navigation_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9b28;
  data_180bf9b28 = 0;
  global_data_ = 0x17;
  strcpy_s(&data_180bf9b28,系统配置缓冲区大小,&g_moduleString24,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_30_init_function);
  return (init_result != 0) - 1;
}
int initialize_ui_framework(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9b88;
  data_180bf9b88 = 0;
  global_data_ = 0x1f;
  strcpy_s(&data_180bf9b88,系统配置缓冲区大小,&g_moduleString25,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_31_init_function);
  return (init_result != 0) - 1;
}
int initialize_scripting_engine(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9be8;
  data_180bf9be8 = 0;
  global_data_ = 0x21;
  strcpy_s(&data_180bf9be8,系统配置缓冲区大小,&g_moduleString26,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_32_init_function);
  return (init_result != 0) - 1;
}
int initialize_database_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9c48;
  data_180bf9c48 = 0;
  global_data_ = 0x25;
  strcpy_s(&data_180bf9c48,系统配置缓冲区大小,&g_moduleString27,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_33_init_function);
  return (init_result != 0) - 1;
}
int initialize_network_manager(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9ca8;
  data_180bf9ca8 = 0;
  global_data_ = 0x23;
  strcpy_s(&data_180bf9ca8,系统配置缓冲区大小,&g_moduleString28,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_34_init_function);
  return (init_result != 0) - 1;
}
int initialize_security_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9d08;
  data_180bf9d08 = 0;
  global_data_ = 0x1e;
  strcpy_s(&data_180bf9d08,系统配置缓冲区大小,&g_moduleString29,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_35_init_function);
  return (init_result != 0) - 1;
}
int initialize_encryption_service(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9d68;
  data_180bf9d68 = 0;
  global_data_ = 0x1e;
  strcpy_s(&data_180bf9d68,系统配置缓冲区大小,&g_moduleString30,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_36_init_function);
  return (init_result != 0) - 1;
}
int initialize_authentication_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9dc8;
  data_180bf9dc8 = 0;
  global_data_ = 0x12;
  strcpy_s(&data_180bf9dc8,系统配置缓冲区大小,&g_moduleString31,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_37_init_function);
  return (init_result != 0) - 1;
}
int initialize_permission_manager(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9e28;
  data_180bf9e28 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf9e28,系统配置缓冲区大小,&g_moduleString32,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_38_init_function);
  return (init_result != 0) - 1;
}
int initialize_session_manager(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9e88;
  data_180bf9e88 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bf9e88,系统配置缓冲区大小,&g_moduleString33,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_39_init_function);
  return (init_result != 0) - 1;
}
int initialize_user_profile_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9ee8;
  data_180bf9ee8 = 0;
  global_data_ = 0x16;
  strcpy_s(&data_180bf9ee8,系统配置缓冲区大小,&g_moduleString34,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_40_init_function);
  return (init_result != 0) - 1;
}
int initialize_save_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9f48;
  data_180bf9f48 = 0;
  global_data_ = 0x1a;
  strcpy_s(&data_180bf9f48,系统配置缓冲区大小,&g_moduleString35,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_41_init_function);
  return (init_result != 0) - 1;
}
int initialize_achievement_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bf9fa8;
  data_180bf9fa8 = 0;
  global_data_ = 0x15;
  strcpy_s(&data_180bf9fa8,系统配置缓冲区大小,&g_moduleString36,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_42_init_function);
  return (init_result != 0) - 1;
}
int initialize_statistics_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bfa008;
  data_180bfa008 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bfa008,系统配置缓冲区大小,&g_moduleString37,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_43_init_function);
  return (init_result != 0) - 1;
}
int initialize_analytics_service(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bfa068;
  data_180bfa068 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bfa068,系统配置缓冲区大小,&g_moduleString38,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_44_init_function);
  return (init_result != 0) - 1;
}
int initialize_debug_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bfa0c8;
  data_180bfa0c8 = 0;
  global_data_ = 0x1b;
  strcpy_s(&data_180bfa0c8,系统配置缓冲区大小,&g_moduleString39,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_45_init_function);
  return (init_result != 0) - 1;
}
int initialize_profiling_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bfa128;
  data_180bfa128 = 0;
  global_data_ = 0x19;
  strcpy_s(&data_180bfa128,系统配置缓冲区大小,&g_moduleString40,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_46_init_function);
  return (init_result != 0) - 1;
}
int initialize_crash_handler(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bfa188;
  data_180bfa188 = 0;
  global_data_ = 0x15;
  strcpy_s(&data_180bfa188,系统配置缓冲区大小,&g_moduleString41,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_47_init_function);
  return (init_result != 0) - 1;
}
int initialize_error_reporting(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bfa1e8;
  data_180bfa1e8 = 0;
  global_data_ = 0x28;
  strcpy_s(&data_180bfa1e8,系统配置缓冲区大小,&data_180a22fd0,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_48_init_function);
  return (init_result != 0) - 1;
}
int initialize_update_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bfa248;
  data_180bfa248 = 0;
  global_data_ = 0x23;
  strcpy_s(&data_180bfa248,系统配置缓冲区大小,&data_180a22fa8,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_49_init_function);
  return (init_result != 0) - 1;
}
int initialize_patch_manager(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_defaultDataTemplate;
  global_data_ = &data_180bfa2a8;
  data_180bfa2a8 = 0;
  global_data_ = 0x17;
  strcpy_s(&data_180bfa2a8,系统配置缓冲区大小,&g_moduleString42,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_50_init_function);
  return (init_result != 0) - 1;
}
int initialize_diagnostics_system(void)
{
  long long init_result;
  init_result = execute_function(resource_manager_51_init_function);
  return (init_result != 0) - 1;
}
int initialize_monitoring_service(void)
{
  long long init_result;
  init_result = execute_function(resource_manager_52_init_function);
  return (init_result != 0) - 1;
}
int initialize_health_checker(void)
{
  long long init_result;
  init_result = execute_function(resource_manager_53_init_function);
  return (init_result != 0) - 1;
}
int initialize_worker_thread_pool(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long init_result;
  _Mtx_init_in_situ(第二互斥锁地址,2,mutex_attr,mutex_type,线程池默认标志);
  init_result = execute_function(resource_manager_54_init_function);
  return (init_result != 0) - 1;
}
  data_180bfa368 = 0;
  global_data_ = 7;
  strcpy_s(&data_180bfa368,0x80,&g_bufferString1,str_len_param,线程池默认标志);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa400;
  data_180bfa400 = 0;
  global_data_ = 9;
  strcpy_s(&data_180bfa400,0x80,&g_bufferString2);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa498;
  data_180bfa498 = 0;
  global_data_ = 0xb;
  strcpy_s(&data_180bfa498,0x80,&g_bufferString3);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa530;
  data_180bfa530 = 0;
  global_data_ = 7;
  strcpy_s(&data_180bfa530,0x80,&g_bufferString4);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa5c8;
  data_180bfa5c8 = 0;
  global_data_ = 0xc;
  strcpy_s(&data_180bfa5c8,0x80,&g_bufferString5);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa660;
  data_180bfa660 = 0;
  global_data_ = 9;
  strcpy_s(&data_180bfa660,0x80,&g_bufferString6);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa6f8;
  data_180bfa6f8 = 0;
  global_data_ = 0xc;
  strcpy_s(&data_180bfa6f8,0x80,&g_bufferString7);
  init_result = execute_function(&g_systemInitFunction4);
  return (init_result != 0) - 1;
}
int initialize_io_thread_pool(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa798;
  data_180bfa798 = 0;
  global_data_ = 0x1b;
  strcpy_s(&data_180bfa798,0x80,&g_bufferString8,str_len_param,线程池默认标志);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa830;
  data_180bfa830 = 0;
  global_data_ = 0x19;
  strcpy_s(&data_180bfa830,0x80,&g_bufferString9);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa8c8;
  data_180bfa8c8 = 0;
  global_data_ = 0x1f;
  strcpy_s(&data_180bfa8c8,0x80,&g_bufferString10);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa960;
  data_180bfa960 = 0;
  global_data_ = 0x1b;
  strcpy_s(&data_180bfa960,0x80,&g_bufferString11);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfa9f8;
  data_180bfa9f8 = 0;
  global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bfa9f8,0x80,&g_bufferString12);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfaa90;
  data_180bfaa90 = 0;
  global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bfaa90,0x80,&g_bufferString13);
  init_result = execute_function(&g_systemInitFunction5);
  return (init_result != 0) - 1;
}
int initialize_background_thread_pool(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfab28;
  data_180bfab28 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bfab28,0x80,&g_bufferString14,str_len_param,线程池默认标志);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfabc0;
  data_180bfabc0 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bfabc0,0x80,&g_bufferString14);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfac58;
  data_180bfac58 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bfac58,0x80,&g_bufferString14);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfacf0;
  data_180bfacf0 = 0;
  global_data_ = 0x13;
  strcpy_s(&data_180bfacf0,0x80,&g_bufferString14);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfad88;
  data_180bfad88 = 0;
  global_data_ = 0xe;
  strcpy_s(&data_180bfad88,0x80,&g_bufferString15);
  global_data_ = &g_memoryAllocationFlag;
  global_data_ = &data_180bfae20;
  data_180bfae20 = 0;
  global_data_ = 0xe;
  strcpy_s(&data_180bfae20,0x80,&g_bufferString15);
  init_result = execute_function(&g_systemInitFunction6);
  return (init_result != 0) - 1;
}
int initialize_backup_system(void)
{
  long long init_result;
  global_data_ = 0;
  uRam0000000180bfc158 = 0xf;
  data_180bfc140 = 0;
  global_data_ = 0;
  global_data_ = 0;
  init_result = execute_function(resource_manager_55_init_function);
  return (init_result != 0) - 1;
}
int initialize_recovery_system(void)
{
  long long init_result;
  global_data_ = 3;
  global_data_ = &data_180bfaec0;
  global_data_ = &data_180bfaec0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  init_result = execute_function(resource_manager_56_init_function);
  return (init_result != 0) - 1;
}
int initialize_priority_thread_pool(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long init_result;
  _Mtx_init_in_situ(第三互斥锁地址,2,mutex_attr,mutex_type,线程池默认标志);
  global_data_ = &g_shared_data_buffer;
  global_data_ = &data_180c92068;
  global_data_ = 0;
  data_180c92068 = 0;
  init_result = execute_function(resource_manager_57_init_function);
  return (init_result != 0) - 1;
}
int initialize_maintenance_service(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_shared_data_buffer;
  global_data_ = &data_180bfaf08;
  data_180bfaf08 = 0;
  global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bfaf08,系统配置缓冲区大小0,&g_largeString1,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_58_init_function);
  return (init_result != 0) - 1;
}
int initialize_optimization_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_shared_data_buffer;
  global_data_ = &data_180bfb328;
  data_180bfb328 = 0;
  global_data_ = 3;
  strcpy_s(&data_180bfb328,系统配置缓冲区大小0,&g_largeString2,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_59_init_function);
  return (init_result != 0) - 1;
}
int initialize_performance_monitor(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_shared_data_buffer;
  global_data_ = &data_180bfb748;
  data_180bfb748 = 0;
  global_data_ = 5;
  strcpy_s(&data_180bfb748,系统配置缓冲区大小0,&g_largeString3,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_60_init_function);
  return (init_result != 0) - 1;
}
  data_180bf6060 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf6060,CONFIG_PATH_BUFFER_SIZE,&g_configString1,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_61_init_function);
  return (init_result != 0) - 1;
}
int initialize_load_balancer(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_alternateDataTemplate;
  global_data_ = &data_180bf64b0;
  data_180bf64b0 = 0;
  global_data_ = 9;
  strcpy_s(&data_180bf64b0,CONFIG_PATH_BUFFER_SIZE,&g_configString2,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_62_init_function);
  return (init_result != 0) - 1;
}
  data_180bf6510 = 0;
  global_data_ = 0xd;
  strcpy_s(&data_180bf6510,CONFIG_PATH_BUFFER_SIZE,&g_configString1,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_63_init_function);
  return (init_result != 0) - 1;
}
int initialize_scaling_system(void)
{
  long long init_result;
  unsigned long long str_len_param;
  global_data_ = &g_alternateDataTemplate;
  global_data_ = &data_180bf6570;
  data_180bf6570 = 0;
  global_data_ = 9;
  strcpy_s(&data_180bf6570,CONFIG_PATH_BUFFER_SIZE,&g_configString2,str_len_param,线程池默认标志);
  init_result = execute_function(resource_manager_64_init_function);
  return (init_result != 0) - 1;
}
  data_180c82841 = 1;
  data_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  initialize_core_system(handle,auStackX_18);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNativeSDLL(unsigned long long handle)
{
  unsigned long long auStackX_18 [2];
  data_180c82841 = 0;
  data_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  initialize_core_system(handle,auStackX_18);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
  data_180bf0102 = 0;
  uint_var_ = function_(global_data_,线程栈大小,8,3);
  global_data_ = create_event_handle(uint_var_);
  create_thread_context(&stack_ptr_,handle);
  uint_var_ = allocate_thread_stack(&stack_ptr_,&g_threadString1);
  uint_var_ = (ulong long)(int)uint_var_;
  if (uint_var_ < stack_var_) {
    char_ptr_var_ = (char *)(stack_long_ + uint_var_);
    do {
      int_var_ = (int)uint_var_;
      if (*char_ptr_var_ == ' ') goto label_;
      uint_var_ = (ulong long)(int_var_ + 1U);
      char_ptr_var_ = char_ptr_var_ + 1;
    } while (int_var_ + 1U < stack_var_);
  }
  int_var_ = -1;
label_:
  uint_var_ = int_var_ + 1;
  uint_var_ = (ulong long)(int)uint_var_;
  if (uint_var_ < stack_var_) {
    char_ptr_var_ = (char *)(stack_long_ + uint_var_);
    do {
      if (*char_ptr_var_ == ' ') goto label_;
      uint_var_ = (int)uint_var_ + 1;
      uint_var_ = (ulong long)uint_var_;
      char_ptr_var_ = char_ptr_var_ + 1;
    } while (uint_var_ < stack_var_);
  }
  uint_var_ = 无符号32位整数最大值;
label_:
  if (int_var_ != -1) {
    setup_thread_parameters(&thread_stack_ptr_98,&thread_stack_ptr_78,uint_var_,uint_var_);
    thread_name_ptr = &data_18098bc73;
    if (thread_stack_ptr_70 != (undefined *)0x0) {
      thread_name_ptr = thread_stack_ptr_70;
    }
    uint_var_ = atoi(thread_name_ptr);
    *(unsigned int *)(global_data_ + 0x7b4) = uint_var_;
    thread_stack_ptr_78 = &g_threadString2;
    if (thread_stack_ptr_70 != (undefined *)0x0) {
      handle_system_error();
    }
    thread_stack_ptr_70 = (undefined *)0x0;
    thread_stack_var_60 = 0;
    thread_stack_ptr_78 = &g_threadString4;
  }
  initialize_event_system();
  uint_var_ = function_(global_data_,网络缓冲区大小,8,10);
  global_data_ = function_(uint_var_);
  thread_data_ptr = (long long *)function_(global_data_,0xe8,8,3);
  thread_stack_ptr_10 = thread_data_ptr;
  cleanup_thread_resources(thread_data_ptr);
  *thread_data_ptr = (long long)&g_threadString3;
  thread_stack_pptr_18 = (long long **)(thread_data_ptr + 0x18);
  *thread_stack_pptr_18 = (long long *)&g_threadString4;
  thread_data_ptr[0x19] = 0;
  *(unsigned int *)(thread_data_ptr + 0x1a) = 0;
  *thread_stack_pptr_18 = (long long *)&g_threadString2;
  thread_data_ptr[0x1b] = 0;
  thread_data_ptr[0x19] = 0;
  *(unsigned int *)(thread_data_ptr + 0x1a) = 0;
  (*(code *)(*thread_stack_pptr_18)[2])(thread_stack_pptr_18,handle);
  thread_data_ptr[0x1c] = flags;
  thread_stack_ptr_48 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + 0x28))(thread_data_ptr);
  system_data_ptr = global_data_;
  thread_stack_pptr_18 = &thread_stack_ptr_10;
  thread_stack_ptr_10 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + 0x28))(thread_data_ptr);
  register_event_callback(system_data_ptr,&thread_stack_ptr_10);
  while( true ) {
    if ((undefined *)*thread_data_ptr == &g_threadString3) {
      cVar16 = (char)thread_data_ptr[2] != '\0';
    }
    else {
      cVar16 = (**(code **)((undefined *)*thread_data_ptr + 0x68))(thread_data_ptr);
    }
    if (cVar16 != '\0') break;
    Sleep(1);
  }
  (**(code **)(*thread_data_ptr + 0x38))(thread_data_ptr);
  thread_stack_ptr_98 = &g_threadString2;
  if (thread_stack_var_90 == 0) {
    return;
  }
  handle_system_error();
}
  data_180c82841 = 1;
  data_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  initialize_core_system(handle,auStackX_18);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNative(unsigned long long handle)
{
  unsigned long long auStackX_18 [2];
  data_180c82841 = 0;
  data_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  initialize_core_system(handle,auStackX_18);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNativeCoreCLR(unsigned long long handle)
{
  unsigned long long auStackX_18 [2];
  data_180c82841 = 0;
  data_180c82840 = 1;
  auStackX_18[0] = GetModuleHandleA(0);
  initialize_core_system(handle,auStackX_18);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
    data_180c82852 = int_var_ != 0xb7;
  }
  system_data_manager_001(global_data_,0,0xd,&g_systemDataString1,data_180c82852);
  if (thread_stack_ptr_28 == (undefined *)0x0) {
    return;
  }
  handle_system_error();
}
    data_180c82870 = 0;
  }
  thread_stack_var_68 = 0;
  thread_stack_var_60 = 0;
  thread_stack_var_58 = 0;
  thread_stack_var_50 = 3;
  create_thread_context(&thread_stack_ptr_48,handle);
  function_(&thread_stack_var_68,&thread_stack_ptr_48);
  thread_stack_ptr_48 = &g_threadString2;
  if (thread_stack_var_40 != 0) {
    handle_system_error();
  }
  thread_stack_var_40 = 0;
  thread_stack_var_30 = 0;
  thread_stack_ptr_48 = &g_threadString4;
  thread_stack_var_88 = 0;
  thread_stack_var_80 = 0;
  thread_stack_var_78 = 0;
  thread_stack_var_70 = 3;
  function_(&thread_stack_var_88,&thread_stack_var_68);
  function_(&thread_stack_var_88,thread_stack_array_a8);
  if (0x1fff < thread_stack_var_98) {
    thread_stack_var_98 = 0x1fff;
  }
  thread_name_ptr = &data_18098bc73;
  if (thread_stack_ptr_a0 != (undefined *)0x0) {
    thread_name_ptr = thread_stack_ptr_a0;
  }
  memcpy(&data_180c82870,thread_name_ptr,(long long)(int)thread_stack_var_98);
}
    data_180c84870 = 0;
    return;
  }
  long_var_ = -1;
  do {
    long_var_ = long_var_ + 1;
  } while (*(char *)(handle + long_var_) != '\0');
  uint_var_ = (uint)long_var_;
  if (0x1fff < uint_var_) {
    uint_var_ = 0x1fff;
  }
  memcpy(&data_180c84870,handle,(long long)(int)uint_var_);
}
          data_180c82860 = 1;
          data_180c82853 = 0;
          *(unsigned char *)(global_data_ + 0x1f0) = 0;
          stack_ptr_2c8 = &g_threadString2;
          stack_var_2b0 = 0;
          stack_ptr_2c0 = (unsigned char *)0x0;
          stack_var_2b8 = 0;
          if (string_ptr_17 != (undefined *)0x0) {
            string_length = -1;
            do {
              prev_length = string_length;
              string_length = prev_length + 1;
            } while (string_ptr_17[string_length] != '\0');
            if ((int)string_length != 0) {
              buffer_size = (int)prev_length + 2;
              alloc_size = buffer_size;
              if (buffer_size < STRING_BUFFER_SIZE) {
                alloc_size = STRING_BUFFER_SIZE;
              }
              buffer_ptr = (unsigned char *)function_(global_data_,(long long)alloc_size,0x13);
              *buffer_ptr = 0;
              stack_ptr_2c0 = buffer_ptr;
              buffer_handle = allocate_helper_buffer(buffer_ptr);
              stack_var_2b0 = CONCAT44(stack_var_2b0._4_4_,buffer_handle);
              memcpy(buffer_ptr,string_ptr_17,buffer_size);
            }
          }
          stack_var_2b8 = 0;
          strstr(&data_18098bc73,&g_systemDataString2);
          strstr(&data_18098bc73,&g_systemDataString3);
          strstr(&data_18098bc73,&g_systemDataString4);
          strstr(&data_18098bc73,&g_systemDataString5);
          strstr(&data_18098bc73,&g_systemDataString6);
          strstr(&data_18098bc73,&g_systemDataString7);
          data_180c82842 = 1;
          data_180c8ecec = 1;
          long_var_ = strstr(ptr_var_,&g_systemDataString8);
          if (long_var_ == 0) {
            long_var_ = strstr(ptr_var_,&g_systemDataString9);
            if ((((((long_var_ == 0) && (long_var_ = strstr(ptr_var_,&g_systemDataString10), long_var_ == 0)) &&
                  (long_var_ = strstr(ptr_var_,&g_systemDataString11), long_var_ == 0)) &&
                 ((long_var_ = strstr(ptr_var_,&g_systemDataString12), long_var_ == 0 &&
                  (long_var_ = strstr(ptr_var_,&g_systemDataString13), long_var_ == 0)))) &&
                ((long_var_ = strstr(ptr_var_,&g_systemDataString14), long_var_ == 0 &&
                 ((long_var_ = strstr(ptr_var_,&g_systemDataString15), long_var_ == 0 &&
                  (long_var_ = strstr(ptr_var_,&g_systemDataString16), long_var_ == 0)))))) &&
               (long_var_ = strstr(ptr_var_,&g_systemDataString17), long_var_ == 0)) {
              *(unsigned short *)(long_var_ + 0x24) = 字符串缓冲区大小1;
              *(unsigned char *)(long_var_ + 0x28) = 1;
            }
            else {
              data_180c82851 = 1;
            }
          }
          else {
            *(unsigned short *)(long_var_ + 0x24) = 0;
          }
          stack_ptr_ = (unsigned char *)0x0;
          stack_var_ = stack_var_ & 64位整数掩码;
          stack_ptr_ = &g_threadString4;
        }
        else if (uint_var_ == 0xb) {
          int_var_ = strcmp(ptr_var_,&g_systemDataString18);
          if (int_var_ != 0) goto label_;
          data_180c82860 = 1;
          data_180c82853 = 0;
          data_180c82842 = 1;
          long_var_ = strstr(ptr_var_,&g_systemDataString19);
          if (long_var_ != 0) {
            ptr_var_ = &g_systemDataString20;
            goto label_;
          }
        }
        else {
          if (uint_var_ == 0xc) {
            int_var_ = strcmp(ptr_var_,&g_systemDataString21);
            bVar31 = int_var_ == 0;
          }
          else {
label_:
            bVar31 = false;
          }
          if (bVar31) {
            create_thread_context(&stack_ptr_,ptr_var_);
            uint_var_ = allocate_thread_stack(&stack_ptr_,&g_systemDataString21);
            flags1 = (ulong long)(int)uint_var_;
            if (uint_var_ < stack_var_) {
              char_ptr_var_ = (char *)(stack_long_ + flags1);
              do {
                int_var_ = (int)flags1;
                if (*char_ptr_var_ == ' ') goto label_;
                flags1 = (ulong long)(int_var_ + 1U);
                char_ptr_var_ = char_ptr_var_ + 1;
              } while (int_var_ + 1U < stack_var_);
            }
            int_var_ = -1;
label_:
            uint_var_ = int_var_ + 1;
            flags1 = (ulong long)(int)uint_var_;
            if (uint_var_ < stack_var_) {
              char_ptr_var_ = (char *)(stack_long_ + flags1);
              do {
                if (*char_ptr_var_ == ' ') goto label_;
                flags6 = (int)flags1 + 1;
                flags1 = (ulong long)flags6;
                char_ptr_var_ = char_ptr_var_ + 1;
              } while (flags6 < stack_var_);
            }
            flags1 = 无符号32位整数最大值;
label_:
            if (int_var_ != -1) {
              setup_thread_parameters(&stack_ptr_,&stack_ptr_,uint_var_,flags1);
              int_var_ = stack_int_;
              int_var_ = 0;
              long_var_ = strchr(stack_ptr_,0x2e);
              if (long_var_ != 0) {
                do {
                  int_var_ = int_var_ + 1;
                  long_var_ = strchr(long_var_ + 1,0x2e);
                } while (long_var_ != 0);
                if ((int_var_ == 3) && (int_var_ - 7U < 9)) {
                  thread_name_ptr = &data_18098bc73;
                  if (thread_stack_ptr_1b0 != (undefined *)0x0) {
                    thread_name_ptr = thread_stack_ptr_1b0;
                  }
                  (**(code **)(*(long long *)(long_var_ + 400) + STRING_BUFFER_SIZE))
                            ((long long *)(long_var_ + 400),thread_name_ptr);
                }
              }
              thread_stack_ptr_1b8 = &g_threadString2;
              if (thread_stack_ptr_1b0 != (undefined *)0x0) {
                handle_system_error();
              }
              thread_stack_ptr_1b0 = (undefined *)0x0;
              thread_stack_var_1a0 = 0;
              thread_stack_ptr_1b8 = &g_threadString4;
            }
            thread_stack_ptr_238 = &g_threadString2;
            if (thread_stack_var_230 != 0) {
              handle_system_error();
            }
            thread_stack_var_230 = 0;
            thread_stack_var_220 = 0;
            thread_stack_ptr_238 = &g_threadString4;
          }
          else {
            if (uint_var_ == 0x11) {
              int_var_ = strcmp(ptr_var_,&g_systemDataString22);
              bVar31 = int_var_ == 0;
            }
            else {
              bVar31 = false;
            }
            if (bVar31) {
              create_thread_context(&stack_ptr_,ptr_var_);
              uint_var_ = allocate_thread_stack(&stack_ptr_,&g_systemDataString22);
              flags1 = (ulong long)(int)uint_var_;
              if (uint_var_ < stack_var_) {
                char_ptr_var_ = (char *)(stack_long_ + flags1);
                do {
                  int_var_ = (int)flags1;
                  if (*char_ptr_var_ == ' ') goto label_;
                  flags1 = (ulong long)(int_var_ + 1U);
                  char_ptr_var_ = char_ptr_var_ + 1;
                } while (int_var_ + 1U < stack_var_);
              }
              int_var_ = -1;
label_:
              uint_var_ = int_var_ + 1;
              flags1 = (ulong long)(int)uint_var_;
              if (uint_var_ < stack_var_) {
                char_ptr_var_ = (char *)(stack_long_ + flags1);
                do {
                  if (*char_ptr_var_ == ' ') goto label_;
                  flags6 = (int)flags1 + 1;
                  flags1 = (ulong long)flags6;
                  char_ptr_var_ = char_ptr_var_ + 1;
                } while (flags6 < stack_var_);
              }
              flags1 = 无符号32位整数最大值;
label_:
              if (int_var_ != -1) {
                setup_thread_parameters(&stack_ptr_,&stack_ptr_,uint_var_,flags1);
                int_var_ = stack_int_;
                int_var_ = 0;
                long_var_ = strchr(stack_ptr_,0x2e);
                if (long_var_ != 0) {
                  do {
                    int_var_ = int_var_ + 1;
                    long_var_ = strchr(long_var_ + 1,0x2e);
                  } while (long_var_ != 0);
                  if ((int_var_ == 3) && (int_var_ - 7U < 9)) {
                    thread_name_ptr = &data_18098bc73;
                    if (thread_stack_ptr_190 != (undefined *)0x0) {
                      thread_name_ptr = thread_stack_ptr_190;
                    }
                    (**(code **)(module_pointer_010 + STRING_BUFFER_SIZE))(&data_180bf5bc0,thread_name_ptr);
                  }
                }
                thread_stack_ptr_198 = &g_threadString2;
                if (thread_stack_ptr_190 != (undefined *)0x0) {
                  handle_system_error();
                }
                thread_stack_ptr_190 = (undefined *)0x0;
                thread_stack_var_180 = 0;
                thread_stack_ptr_198 = &g_threadString4;
              }
              thread_stack_ptr_218 = &g_threadString2;
              if (thread_stack_var_210 != 0) {
                handle_system_error();
              }
              thread_stack_var_210 = 0;
              thread_stack_var_200 = 0;
              thread_stack_ptr_218 = &g_threadString4;
            }
            else {
              if (uint_var_ == 0xe) {
                int_var_ = strcmp(ptr_var_,&g_systemDataString23);
                bVar31 = int_var_ == 0;
              }
              else {
                bVar31 = false;
              }
              if (bVar31) {
                create_thread_context(&stack_ptr_,ptr_var_);
                uint_var_ = allocate_thread_stack(&stack_ptr_,&g_systemDataString23);
                flags1 = (ulong long)(int)uint_var_;
                if (uint_var_ < stack_var_) {
                  char_ptr_var_ = (char *)(stack_long_ + flags1);
                  do {
                    if (*char_ptr_var_ == ' ') goto label_;
                    uint_var_ = (int)flags1 + 1;
                    flags1 = (ulong long)uint_var_;
                    char_ptr_var_ = char_ptr_var_ + 1;
                  } while (uint_var_ < stack_var_);
                }
                flags1 = 无符号32位整数最大值;
label_:
                uint_var_ = (int)flags1 + 1;
                flags8 = (ulong long)(int)uint_var_;
                if (uint_var_ < stack_var_) {
                  char_ptr_var_ = (char *)(stack_long_ + flags8);
                  do {
                    if (*char_ptr_var_ == ' ') goto label_;
                    flags6 = (int)flags8 + 1;
                    flags8 = (ulong long)flags6;
                    char_ptr_var_ = char_ptr_var_ + 1;
                  } while (flags6 < stack_var_);
                }
                flags8 = 无符号32位整数最大值;
label_:
                if ((int)flags1 != -1) {
                  setup_thread_parameters(&stack_ptr_,&stack_ptr_,uint_var_,flags8);
                  system_thread_manager_011(&stack_ptr_);
                  if (stack_var_ != 0) {
                    int_var_ = 0;
                    long_var_ = (long long)(int)(stack_var_ - 1);
                    if (0 < (int)(stack_var_ - 1)) {
                      do {
                        if (stack_ptr_[long_var_] != '\"') break;
                        int_var_ = int_var_ + 1;
                        long_var_ = long_var_ + -1;
                      } while (0 < long_var_);
                    }
                    stack_var_ = stack_var_ - int_var_;
                    stack_ptr_[stack_var_] = 0;
                  }
                  system_thread_manager_012(&stack_ptr_,1);
                  ptr_var_ = &data_18098bc73;
                  if (stack_ptr_ != (undefined *)0x0) {
                    ptr_var_ = stack_ptr_;
                  }
                  long_var_ = -1;
                  do {
                    long_var_ = long_var_ + 1;
                  } while (ptr_var_[long_var_] != '\0');
                  if ((int)long_var_ < 系统配置缓冲区大小0) {
                    input_offset_value = (int)long_var_;
                    strcpy_s(input_buffer_pointer,系统配置缓冲区大小0);
                  }
                  else {
                    system_thread_003(&g_systemDataString29,系统配置缓冲区大小0);
                    input_offset_value = 0;
                    *input_buffer_pointer = 0;
                  }
                  uint_var_ = stack_var_;
                  flags1 = (ulong long)stack_var_;
                  if (stack_ptr_ != (undefined *)0x0) {
                    system_thread_manager_001(long_var_ + 0x170,flags1);
                  }
                  if (uint_var_ != 0) {
                    memcpy(*(unsigned long long *)(long_var_ + 0x178),stack_ptr_,flags1);
                  }
                  *(unsigned int *)(long_var_ + 0x180) = 0;
                  if (*(long long *)(long_var_ + 0x178) != 0) {
                    *(unsigned char *)(flags1 + *(long long *)(long_var_ + 0x178)) = 0;
                  }
                  *(unsigned int *)(long_var_ + 0x18c) = stack_var_;
                  stack_ptr_ = &g_threadString2;
                  if (stack_ptr_ != (undefined *)0x0) {
                    handle_system_error(stack_ptr_,stack_ptr_);
                  }
                  stack_ptr_ = (undefined *)0x0;
                  stack_var_ = 0;
                  stack_ptr_ = &g_threadString4;
                  flags1 = 0;
                }
                stack_ptr_ = &g_threadString2;
                if (stack_long_ != 0) {
                  handle_system_error(stack_long_,flags1);
                }
                stack_long_ = 0;
                stack_var_ = 0;
                stack_ptr_ = &g_threadString4;
              }
              else {
                if (uint_var_ == 0x16) {
                  int_var_ = strcmp(ptr_var_,&g_systemDataString24);
                  if (int_var_ == 0) {
                    data_180c82844 = 1;
                    data_180c82843 = 1;
                    goto label_;
                  }
label_:
                  bVar31 = false;
                }
                else {
                  if (uint_var_ != 0x12) goto label_;
                  int_var_ = strcmp(ptr_var_,&g_systemDataString25);
                  bVar31 = int_var_ == 0;
                }
                if (bVar31) {
                  create_thread_context(&stack_ptr_,ptr_var_);
                  uint_var_ = allocate_thread_stack(&stack_ptr_,&g_systemDataString25);
                  flags1 = (ulong long)(int)uint_var_;
                  if (uint_var_ < stack_var_) {
                    char_ptr_var_ = (char *)(stack_long_ + flags1);
                    do {
                      if (*char_ptr_var_ == ' ') goto label_;
                      uint_var_ = (int)flags1 + 1;
                      flags1 = (ulong long)uint_var_;
                      char_ptr_var_ = char_ptr_var_ + 1;
                    } while (uint_var_ < stack_var_);
                  }
                  flags1 = 无符号32位整数最大值;
label_:
                  uint_var_ = (int)flags1 + 1;
                  flags8 = (ulong long)(int)uint_var_;
                  if (uint_var_ < stack_var_) {
                    char_ptr_var_ = (char *)(stack_long_ + flags8);
                    do {
                      if (*char_ptr_var_ == ' ') goto label_;
                      flags6 = (int)flags8 + 1;
                      flags8 = (ulong long)flags6;
                      char_ptr_var_ = char_ptr_var_ + 1;
                    } while (flags6 < stack_var_);
                  }
                  flags8 = 无符号32位整数最大值;
label_:
                  if ((int)flags1 != -1) {
                    setup_thread_parameters(&stack_ptr_,&stack_ptr_,uint_var_,flags8);
                    system_thread_manager_012(&stack_ptr_,1);
                    uint_var_ = stack_var_;
                    flags1 = (ulong long)stack_var_;
                    if (stack_long_ != 0) {
                      system_thread_manager_001(long_var_ + 0x170,flags1);
                    }
                    if (uint_var_ != 0) {
                      memcpy(*(unsigned long long *)(long_var_ + 0x178),stack_long_,flags1);
                    }
                    *(unsigned int *)(long_var_ + 0x180) = 0;
                    if (*(long long *)(long_var_ + 0x178) != 0) {
                      *(unsigned char *)(flags1 + *(long long *)(long_var_ + 0x178)) = 0;
                    }
                    *(unsigned int *)(long_var_ + 0x18c) = stack_var_;
                    *(unsigned char *)(long_var_ + 0x168) = 1;
                    stack_ptr_ = &g_threadString2;
                    if (stack_long_ != 0) {
                      handle_system_error(stack_long_,stack_long_);
                    }
                    stack_long_ = 0;
                    stack_var_ = 0;
                    stack_ptr_ = &g_threadString4;
                    flags1 = 0;
                  }
                  stack_ptr_ = &g_threadString2;
                  if (stack_long_ != 0) {
                    handle_system_error(stack_long_,flags1);
                  }
                  stack_long_ = 0;
                  stack_var_ = 0;
                  stack_ptr_ = &g_threadString4;
                }
                else {
                  if (uint_var_ == 0x17) {
                    int_var_ = strcmp(ptr_var_,&g_systemDataString26);
                    if (int_var_ == 0) {
                      data_180c82842 = 1;
                      goto label_;
                    }
label_:
                    bVar31 = false;
                  }
                  else {
                    if (uint_var_ != 0xb) goto label_;
                    int_var_ = strcmp(ptr_var_,&g_systemDataString27);
                    bVar31 = int_var_ == 0;
                  }
                  if (bVar31) {
                    create_thread_context(&stack_ptr_,ptr_var_);
                    system_thread_manager_005(&stack_ptr_);
                    system_thread_manager_006(&stack_ptr_);
                    system_event_handler_002(&data_180bf5770,&stack_ptr_);
                    data_180c82842 = 1;
                    stack_ptr_ = &g_threadString2;
                    if (stack_long_ != 0) {
                      handle_system_error();
                    }
                    stack_long_ = 0;
                    stack_var_ = 0;
                    stack_ptr_ = &g_threadString4;
                  }
                  else {
                    ptr_var_ = &data_18098bc73;
                    if (ptr_var_ != (unsigned char *)0x0) {
                      ptr_var_ = ptr_var_;
                    }
                    long_var_ = strstr(ptr_var_);
                    if (long_var_ != 0) {
                      flags9 = 0;
                      stack_ptr_ = &g_threadString2;
                      stack_var_ = 0;
                      stack_ptr_ = (unsigned int *)0x0;
                      stack_var_ = 0;
                      ptr_var_ = (unsigned int *)function_(global_data_,STRING_BUFFER_SIZE,0x13);
                      *(unsigned char *)ptr_var_ = 0;
                      stack_ptr_ = ptr_var_;
                      uint_var_ = allocate_helper_buffer(ptr_var_);
                      stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
                      *ptr_var_ = 0x726f662f;
                      ptr_var_[1] = 0x5f646563;
                      ptr_var_[2] = 0x666e6f63;
                      ptr_var_[3] = 0x3a6769;
                      stack_var_ = 0xf;
                      flags1 = flags9;
                      flags8 = flags9;
                      if (0 < (int)(uint_var_ - 0xe)) goto label_;
                      goto label_;
                    }
                    if (uint_var_ == 0xf) {
                      int_var_ = strcmp(ptr_var_);
                      if (int_var_ == 0) {
                        cStack_338 = '\x01';
                        *(unsigned char *)(global_data_ + 0x22) = 1;
                        goto label_;
                      }
label_:
                      bVar31 = false;
                    }
                    else {
                      if (uint_var_ == 0xc) {
                        int_var_ = strcmp(ptr_var_);
                        if (int_var_ == 0) {
                          ptr_var_ = &g_systemDataString28;
label_:
                          system_data_manager_002(global_data_,ptr_var_);
                        }
                        goto label_;
                      }
                      if (uint_var_ == 0x1a) {
                        int_var_ = strcmp(ptr_var_);
                        if (int_var_ == 0) {
                          *(unsigned char *)(global_data_ + 0x21) = 1;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (uint_var_ == STRING_BUFFER_SIZE) {
                        int_var_ = strcmp(ptr_var_);
                        if (int_var_ == 0) {
                          data_180bf0101 = 0;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (uint_var_ == 0x18) {
                        int_var_ = strcmp(ptr_var_);
                        if (int_var_ == 0) {
                          data_180c8ecec = 1;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (uint_var_ != 0x14) goto label_;
                      int_var_ = strcmp(ptr_var_);
                      bVar31 = int_var_ == 0;
                    }
                    long_var_ = global_data_;
                    if (bVar31) {
                      create_thread_context(&stack_ptr_,ptr_var_);
                      system_thread_manager_005(&stack_ptr_);
                      uint_var_ = 0;
                      char_ptr_var_ = pcStack_328;
                      if (stack_var_ != 0) {
                        do {
                          if (*char_ptr_var_ == '/') goto label_;
                          uint_var_ = uint_var_ + 1;
                          char_ptr_var_ = char_ptr_var_ + 1;
                        } while (uint_var_ < stack_var_);
                      }
                      uint_var_ = 无符号32位整数最大值;
label_:
                      if (uint_var_ != 0xffffffff) {
                        long_var_ = setup_thread_parameters(&stack_ptr_,&stack_ptr_,0);
                        if (pcStack_328 != (char *)0x0) {
                          handle_system_error();
                        }
                        stack_var_ = *(uint *)(long_var_ + STRING_BUFFER_SIZE);
                        pcStack_328 = *(char **)(long_var_ + 8);
                        stack_var_ = *(long long *)(long_var_ + 0x18);
                        *(unsigned int *)(long_var_ + STRING_BUFFER_SIZE) = 0;
                        *(unsigned long long *)(long_var_ + 8) = 0;
                        *(unsigned long long *)(long_var_ + 0x18) = 0;
                        stack_ptr_ = &g_threadString2;
                        if (stack_long_ != 0) {
                          handle_system_error();
                        }
                        stack_long_ = 0;
                        stack_var_ = 0;
                        stack_ptr_ = &g_threadString4;
                      }
                      system_thread_manager_006(&stack_ptr_);
                      uint_var_ = stack_var_;
                      long_var_ = global_data_;
                      *(unsigned char *)(global_data_ + 0x48) = 1;
                      flags1 = (ulong long)stack_var_;
                      if (pcStack_328 != (char *)0x0) {
                        system_thread_manager_001(long_var_ + 0x50,flags1);
                      }
                      if (uint_var_ != 0) {
                        memcpy(*(unsigned long long *)(long_var_ + 0x58),pcStack_328,flags1);
                      }
                      *(unsigned int *)(long_var_ + 0x60) = 0;
                      if (*(long long *)(long_var_ + 0x58) != 0) {
                        *(unsigned char *)(flags1 + *(long long *)(long_var_ + 0x58)) = 0;
                      }
                      *(uint *)(long_var_ + 0x6c) = stack_var_._4_4_;
                      stack_ptr_ = &g_threadString2;
                      if (pcStack_328 != (char *)0x0) {
                        handle_system_error(pcStack_328,pcStack_328);
                      }
                      pcStack_328 = (char *)0x0;
                      stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
                      stack_ptr_ = &g_threadString4;
                    }
                    else if (cStack_338 == '\0') {
                      flags7 = system_thread_manager_007();
                      ptr_var_ = (unsigned char *)0x0;
                      stack_ptr_ = &g_threadString2;
                      stack_var_ = 0;
                      stack_ptr_ = (unsigned char *)0x0;
                      stack_var_ = 0;
                      flags6 = stack_var_ | 1;
                      ptr_var_ = ptr_var_;
                      ptr_var_ = ptr_var_;
                      stack_var_ = flags6;
                      stack_var_ = flags7;
                      if (uint_var_ != 0) {
                        int_var_ = uint_var_ + 1;
                        if (int_var_ < STRING_BUFFER_SIZE) {
                          int_var_ = STRING_BUFFER_SIZE;
                        }
                        ptr_var_ = (unsigned char *)function_(global_data_,(long long)int_var_,0x13);
                        *ptr_var_ = 0;
                        stack_ptr_ = ptr_var_;
                        ptr_var_ = (unsigned char *)allocate_helper_buffer(ptr_var_);
                        stack_var_ = CONCAT44(stack_var_._4_4_,(int)ptr_var_);
                      }
                      long_var_ = 1;
                      uint_var_ = 1;
                      if (1 < (int)uint_var_) {
                        flags1 = 0;
                        do {
                          flags7 = stack_var_;
                          flags6 = stack_var_;
                          if (uint_var_ <= uint_var_) break;
                          flags = stack_ptr_[long_var_];
                          int_var_ = (int)flags1;
                          flags3 = int_var_ + 1;
                          flags1 = (ulong long)flags3;
                          if (flags3 != 0) {
                            flags6 = int_var_ + 2;
                            if (ptr_var_ == (unsigned char *)0x0) {
                              if ((int)flags6 < STRING_BUFFER_SIZE) {
                                flags6 = STRING_BUFFER_SIZE;
                              }
                              ptr_var_ = (unsigned char *)
                                        function_(global_data_,(long long)(int)flags6,0x13);
                              *ptr_var_ = 0;
                            }
                            else {
                              if (flags6 <= (uint)ptr_var_) goto label_;
                              stack_var_ = 0x13;
                              ptr_var_ = (unsigned char *)
                                        function_(global_data_,ptr_var_,flags6,STRING_BUFFER_SIZE);
                            }
                            stack_ptr_ = ptr_var_;
                            flags6 = allocate_helper_buffer(ptr_var_);
                            stack_var_ = CONCAT44(stack_var_._4_4_,flags6);
                            ptr_var_ = (unsigned char *)(ulong long)flags6;
                          }
label_:
                          ptr_var_[(long long)ptr_var_] = flags;
                          ptr_var_[flags1] = 0;
                          ptr_var_ = (unsigned char *)(ulong long)flags3;
                          uint_var_ = uint_var_ + 1;
                          long_var_ = long_var_ + 1;
                          flags7 = stack_var_;
                          flags6 = stack_var_;
                          stack_var_ = flags3;
                        } while (long_var_ < (int)uint_var_);
                      }
                      system_event_handler_007(ptr_var_,&stack_ptr_,flags7);
                      stack_var_ = flags6 & 0xfffffffe;
                      stack_ptr_ = &g_threadString2;
                      if (ptr_var_ != (unsigned char *)0x0) {
                        handle_system_error(ptr_var_);
                      }
                      stack_ptr_ = (unsigned char *)0x0;
                      stack_var_ = stack_var_ & 64位整数掩码;
                      stack_ptr_ = &g_threadString4;
                      ptr_var_ = stack_ptr_;
                      ptr_var_ = stack_ptr_;
                    }
                    else {
                      cStack_338 = '\0';
                      if (ptr_var_ != (unsigned char *)0x0) {
                        system_thread_manager_001(global_data_ + 0x28,ptr_var_);
                      }
                      if (uint_var_ != 0) {
                        memcpy(*(unsigned long long *)(long_var_ + 0x30),ptr_var_,ptr_var_);
                      }
                      *(unsigned int *)(long_var_ + 0x38) = 0;
                      if (*(long long *)(long_var_ + 0x30) != 0) {
                        ptr_var_[*(long long *)(long_var_ + 0x30)] = 0;
                      }
                      *(unsigned int *)(long_var_ + 0x44) = stack_var_._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
label_:
        ptr_var_ = (unsigned char *)0x0;
        stack_var_ = 0;
        long_var_ = stack_long_;
        if (ptr_var_ != (unsigned char *)0x0) {
          *ptr_var_ = 0;
        }
      }
      else {
        system_thread_manager_001(&stack_ptr_,uint_var_ + 1);
        stack_ptr_[stack_var_] = bVar1;
        stack_var_ = stack_var_ + 1;
        ptr_var_ = (unsigned char *)(ulong long)stack_var_;
        ptr_var_[(long long)stack_ptr_] = 0;
        ptr_var_ = stack_ptr_;
      }
      stack_var_ = stack_var_ + 1;
    } while (stack_var_ < stack_var_);
  }
  stack_ptr_ = &g_defaultDataTemplate;
  stack_ptr_ = auStack_80;
  auStack_80[0] = 0;
  stack_var_ = STRING_BUFFER_SIZE;
  strcpy_s(auStack_80,系统配置缓冲区大小,&systemConfigStringBuffer);
  cVar5 = system_handle_manager_003(long_var_,&stack_ptr_);
  stack_ptr_ = &g_threadString4;
  if (cVar5 != '\0') {
    *(unsigned int *)(long_var_ + CONFIG_PATH_BUFFER_SIZE) = 1;
  }
  (**(code **)(**(long long **)(global_data_ + 0x18) + 0x30))
            (*(long long **)(global_data_ + 0x18),data_180c8ecec);
  stack_ptr_ = &g_threadString2;
  if (ptr_var_ != (unsigned char *)0x0) {
    handle_system_error(ptr_var_);
  }
  stack_ptr_ = (unsigned char *)0x0;
  stack_var_ = stack_var_ & 64位整数掩码;
  stack_ptr_ = &g_threadString4;
  system_crypto_001(stack_var_ ^ (ulong long)auStack_368);
  while (byte_ptr_var_ = byte_ptr_var_ + 1, uint_var_ != 0) {
label_:
    bVar1 = *byte_ptr_var_;
    uint_var_ = (uint)byte_ptr_var_[long_var_];
    if (bVar1 != uint_var_) break;
  }
  if ((int)(bVar1 - uint_var_) < 1) {
label_:
    flags7 = 1;
  }
  else {
label_:
    flags7 = 0;
  }
  system_helper_003(long_var_,init_result0,long_var_,flags7);
  while( true ) {
    flags8 = (ulong long)(int_var_ + 1);
    flags1 = flags1 + 1;
    if ((long long)(int)(uint_var_ - 0xe) <= (long long)flags1) break;
label_:
    int_var_ = (int)flags8;
    flags8 = flags9;
    flags5 = flags9;
    do {
      flags6 = (uint)flags5;
      if (ptr_var_[flags8 + flags1] != *(char *)(flags5 + (long long)ptr_var_)) break;
      flags6 = flags6 + 1;
      flags5 = (ulong long)flags6;
      flags8 = flags8 + 1;
    } while ((long long)flags8 < 0xf);
    if (flags6 == 0xf) goto label_;
  }
label_:
  int_var_ = -1;
label_:
  setup_thread_parameters(&stack_ptr_,&stack_ptr_,int_var_ + 0xf,ptr_var_);
  stack_ptr_ = (unsigned long long *)0x0;
  stack_ptr_ = (unsigned long long *)0x0;
  stack_var_ = 0;
  stack_var_ = 3;
  if (stack_long_ != 0) {
    system_event_handler_003(&stack_ptr_,&stack_ptr_,&systemEventHandlerConfig);
  }
  ptr_var_ = stack_ptr_;
  system_thread_manager_004(&stack_ptr_,stack_ptr_);
  system_thread_manager_004(&stack_ptr_,ptr_var_ + 4);
  ptr_var_ = stack_ptr_;
  if (((long long)stack_ptr_ - (long long)ptr_var_ & 0xffffffffffffffe0U) != 系统配置缓冲区大小) {
label_:
    stack_ptr_ = &g_threadString2;
    if (stack_long_ != 0) {
      handle_system_error();
    }
    stack_long_ = 0;
    stack_var_ = 0;
    stack_ptr_ = &g_threadString4;
    stack_ptr_ = &g_threadString2;
    if (stack_long_ != 0) {
      handle_system_error();
    }
    stack_long_ = 0;
    stack_var_ = 0;
    stack_ptr_ = &g_threadString4;
    for (pflags2 = ptr_var_; pflags2 != ptr_var_; pflags2 = pflags2 + 4) {
      (**(code **)*pflags2)(pflags2,0);
    }
    if (ptr_var_ != (unsigned long long *)0x0) {
      handle_system_error(ptr_var_);
    }
    stack_ptr_ = &g_threadString2;
    if (stack_long_ != 0) {
      handle_system_error();
    }
    stack_long_ = 0;
    stack_var_ = 0;
    stack_ptr_ = &g_threadString4;
    stack_ptr_ = &g_threadString2;
    handle_system_error(ptr_var_);
  }
  system_ui_002(global_data_,&stack_ptr_,&stack_ptr_);
  long_var_ = global_data_ + 0x90;
  long_var_ = function_(global_data_,系统配置缓冲区大小,*(unsigned char *)(global_data_ + 0xb8));
  system_thread_manager_003(long_var_ + CONFIG_PATH_BUFFER_SIZE,&stack_ptr_);
  long_var_ = system_event_handler_005(long_var_,acStack_336,long_var_ + CONFIG_PATH_BUFFER_SIZE);
  if (acStack_336[0] == '\0') {
    system_event_handler_009(extraout_XMM0_Da_00,long_var_);
    goto label_;
  }
  if (long_var_ != long_var_) {
    if (*(int *)(long_var_ + 0x30) == 0) {
label_:
      flags7 = 1;
      goto label_;
    }
    if (*(int *)(long_var_ + 0x30) != 0) {
      byte_ptr_var_ = *(byte **)(long_var_ + 0x28);
      init_result0 = *(long long *)(long_var_ + 0x28) - (long long)byte_ptr_var_;
      do {
        bVar1 = *byte_ptr_var_;
        uint_var_ = (uint)byte_ptr_var_[init_result0];
        if (bVar1 != uint_var_) break;
        byte_ptr_var_ = byte_ptr_var_ + 1;
      } while (uint_var_ != 0);
      if ((int)(bVar1 - uint_var_) < 1) goto label_;
    }
  }
  flags7 = 0;
label_:
  system_helper_003(long_var_,long_var_,long_var_,flags7);
}
    thread_pool_4_status_code = 1;
    int_var_ = _Cnd_broadcast(条件变量地址);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    int_var_ = _Mtx_unlock(IO线程池互斥锁地址);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    system_cleanup_001(0x180c911a0);
  }
  *(unsigned int *)(global_data_ + 4) = 0;
  if (*(char *)(long_var_ + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(long_var_ + 0x2b0) + 0xe0))();
    *(int *)(long_var_ + 0x224) = *(int *)(long_var_ + 0x224) + 1;
    if (*(int *)(global_data_ + 0xe0) == 0) {
      if (*(char *)(long_var_ + 0x264) == '\0') {
        int_var_ = 10;
        if (10 < *(int *)(global_data_ + 0xbd0)) {
          int_var_ = *(int *)(global_data_ + 0xbd0);
        }
        fVar14 = (float)*(double *)(long_var_ + CONFIG_PATH_BUFFER_SIZE8);
        if (1.0 / (float)int_var_ <= (float)*(double *)(long_var_ + CONFIG_PATH_BUFFER_SIZE8)) {
          fVar14 = 1.0 / (float)int_var_;
        }
      }
      else {
        fVar14 = *(float *)(long_var_ + 0x268);
      }
      *(float *)(long_var_ + 0x220) = fVar14;
    }
    else {
      *(unsigned int *)(long_var_ + 0x220) = 0x3d088889;
      fVar14 = 0.033333335;
    }
    system_handle_manager_004(long_var_,fVar14);
    uint_var_ = global_data_;
    if ((global_data_ != 0) &&
       (pinit_result = *(long long **)(global_data_ + 0x228), pinit_result != (long long *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = pinit_result;
      (**(code **)(*pinit_result + 0x28))();
      system_event_handler_013(uint_var_,&plStackX_10);
    }
    uint_var_ = global_data_;
    if (*(char *)(global_data_ + 0xa0) == '\0') {
      if ((global_data_ != 0) &&
         (pinit_result = *(long long **)(global_data_ + 0x228), pinit_result != (long long *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = pinit_result;
        (**(code **)(*pinit_result + 0x28))();
        system_event_handler_016(uint_var_,&plStackX_18,0);
        pinit_result = *(long long **)(global_data_ + 0x228);
        *(unsigned long long *)(global_data_ + 0x228) = 0;
        if (pinit_result != (long long *)0x0) {
          (**(code **)(*pinit_result + 0x38))();
        }
      }
      func_0x00018005c480(global_data_);
      pinit_result = global_data_;
      if (*(code **)(*global_data_ + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(global_data_ + 9) = 0;
        ptr_var_ = (unsigned char *)pinit_result[8];
        if (ptr_var_ != (unsigned char *)0x0) {
          *ptr_var_ = 0;
        }
        *(unsigned int *)((long long)pinit_result + 0x54) = 0;
      }
      else {
        (**(code **)(*global_data_ + 8))();
      }
    }
    else {
      if (*(char *)(long_var_ + 0x22c) != '\0') {
        system_event_handler_001();
      }
      *(unsigned int *)(long_var_ + 0x228) = *(unsigned int *)(long_var_ + 0x224);
      system_graphics_001();
      system_graphics_002();
    }
    QueryPerformanceCounter(&stack_long_);
    dVar15 = (double)stack_long_ * global_data_;
    global_data_ = global_data_ + 1;
    dVar16 = dVar15 - global_data_;
    if (1.0 < dVar16) {
      *(float *)(long_var_ + 500) = (float)((double)global_data_ / dVar16);
      global_data_ = 0;
      global_data_ = dVar15;
      *(float *)(long_var_ + 0x1f8) = (float)(1000.0 / *(double *)(long_var_ + 0x70));
    }
    if (0.0 < *(double *)(global_data_ + 0x1510)) {
      system_handle_manager_005(long_var_,(float)*(double *)(global_data_ + 0x1510));
    }
    if (*(char *)(long_var_ + 0x1ee) == '\0') {
      fVar14 = *(float *)(long_var_ + CONFIG_PATH_BUFFER_SIZE0);
      dVar15 = *(double *)(long_var_ + 0x218);
      do {
        QueryPerformanceCounter(&stack_long_);
      } while ((double)stack_long_ * global_data_ < (double)fVar14 + dVar15);
      QueryPerformanceCounter(&stack_long_);
      long_var_ = stack_long_ - global_data_;
      global_data_ = stack_long_;
      *(double *)(long_var_ + CONFIG_PATH_BUFFER_SIZE8) = (double)long_var_ * global_data_;
      QueryPerformanceCounter(&stack_long_);
      *(double *)(long_var_ + 0x218) = (double)stack_long_ * global_data_;
    }
  }
  return;
}
    thread_pool_4_status_code = 1;
    int_var_ = _Cnd_broadcast(条件变量地址);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    int_var_ = _Mtx_unlock(IO线程池互斥锁地址);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    system_cleanup_001(0x180c911a0);
  }
  *(unsigned int *)(global_data_ + 4) = 0;
  if (*(char *)(handle + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(handle + 0x2b0) + 0xe0))();
    *(int *)(handle + 0x224) = *(int *)(handle + 0x224) + 1;
    if (*(int *)(global_data_ + 0xe0) == 0) {
      if (*(char *)(handle + 0x264) == '\0') {
        int_var_ = 10;
        if (10 < *(int *)(global_data_ + 0xbd0)) {
          int_var_ = *(int *)(global_data_ + 0xbd0);
        }
        fVar13 = (float)*(double *)(handle + CONFIG_PATH_BUFFER_SIZE8);
        if (1.0 / (float)int_var_ <= (float)*(double *)(handle + CONFIG_PATH_BUFFER_SIZE8)) {
          fVar13 = 1.0 / (float)int_var_;
        }
      }
      else {
        fVar13 = *(float *)(handle + 0x268);
      }
      *(float *)(handle + 0x220) = fVar13;
    }
    else {
      *(unsigned int *)(handle + 0x220) = 0x3d088889;
      fVar13 = 0.033333335;
    }
    system_handle_manager_004(handle,fVar13);
    uint_var_ = global_data_;
    if ((global_data_ != 0) &&
       (pinit_result = *(long long **)(global_data_ + 0x228), pinit_result != (long long *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = pinit_result;
      (**(code **)(*pinit_result + 0x28))();
      system_event_handler_013(uint_var_,&plStackX_10);
    }
    uint_var_ = global_data_;
    if (*(char *)(global_data_ + 0xa0) == '\0') {
      if ((global_data_ != 0) &&
         (pinit_result = *(long long **)(global_data_ + 0x228), pinit_result != (long long *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = pinit_result;
        (**(code **)(*pinit_result + 0x28))();
        system_event_handler_016(uint_var_,&plStackX_18,0);
        pinit_result = *(long long **)(global_data_ + 0x228);
        *(unsigned long long *)(global_data_ + 0x228) = 0;
        if (pinit_result != (long long *)0x0) {
          (**(code **)(*pinit_result + 0x38))();
        }
      }
      func_0x00018005c480(global_data_);
      pinit_result = global_data_;
      if (*(code **)(*global_data_ + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(global_data_ + 9) = 0;
        ptr_var_ = (unsigned char *)pinit_result[8];
        if (ptr_var_ != (unsigned char *)0x0) {
          *ptr_var_ = 0;
        }
        *(unsigned int *)((long long)pinit_result + 0x54) = 0;
      }
      else {
        (**(code **)(*global_data_ + 8))();
      }
    }
    else {
      if (*(char *)(handle + 0x22c) != '\0') {
        system_event_handler_001();
      }
      *(unsigned int *)(handle + 0x228) = *(unsigned int *)(handle + 0x224);
      system_graphics_001();
      system_graphics_002();
    }
    QueryPerformanceCounter(&stack_long_);
    dVar14 = (double)stack_long_ * global_data_;
    global_data_ = global_data_ + 1;
    dVar15 = dVar14 - global_data_;
    if (1.0 < dVar15) {
      *(float *)(handle + 500) = (float)((double)global_data_ / dVar15);
      global_data_ = 0;
      global_data_ = dVar14;
      *(float *)(handle + 0x1f8) = (float)(1000.0 / *(double *)(handle + 0x70));
    }
    if (0.0 < *(double *)(global_data_ + 0x1510)) {
      system_handle_manager_005(handle,(float)*(double *)(global_data_ + 0x1510));
    }
    if (*(char *)(handle + 0x1ee) == '\0') {
      fVar13 = *(float *)(handle + CONFIG_PATH_BUFFER_SIZE0);
      dVar14 = *(double *)(handle + 0x218);
      do {
        QueryPerformanceCounter(&stack_long_);
      } while ((double)stack_long_ * global_data_ < (double)fVar13 + dVar14);
      QueryPerformanceCounter(&stack_long_);
      long_var_ = stack_long_ - global_data_;
      global_data_ = stack_long_;
      *(double *)(handle + CONFIG_PATH_BUFFER_SIZE8) = (double)long_var_ * global_data_;
      QueryPerformanceCounter(&stack_long_);
      *(double *)(handle + 0x218) = (double)stack_long_ * global_data_;
    }
  }
  return;
}
    data_180c82862 = data_180c82862 == '\0';
  }
  long_var_ = 0xe0;
  ptr_var_ = global_data_;
  do {
    ptr_var_ = ptr_var_ + 0x18;
    *ptr_var_ = 1;
    long_var_ = long_var_ + -1;
  } while (long_var_ != 0);
label_:
  ptr_var_ = (unsigned long long *)global_data_[1];
  int_var_ = _Mtx_lock(0x180c91970);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  pinit_result4 = global_data_;
  stack_var_ = global_data_;
  global_data_ = (long long *)*ptr_var_;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  uint_var_ = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_var_ = 3;
  function_(auStack_2a8);
  system_handle_manager_002((long long)global_data_ * 0x238 + global_data_ + 0x1598,auStack_2a8);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_system_error();
  }
  global_data_ = pinit_result4;
  int_var_ = _Mtx_unlock(0x180c91970);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  pinit_result4 = (long long *)*global_data_;
  int_var_ = _Mtx_lock(0x180c91970);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  pinit_result = global_data_;
  stack_var_ = global_data_;
  global_data_ = (long long *)*pinit_result4;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_var_ = 3;
  function_(auStack_2a8);
  function_(auStack_2a8);
  *(float *)((long long)global_data_ + 0x18) = global_data_;
  system_initializer_001();
  long_var_ = (long long)global_data_;
  ptr_var_ = global_data_;
  ptr_var_ = global_data_;
  if (*(char *)(global_data_ + 7) != '\0') {
    if ((((*(char *)(global_data_ + 0xe) != '\0') ||
         (*(char *)((long long)global_data_ + 0x38c) != '\0')) ||
        (*(char *)((long long)global_data_ + 0x38d) != '\0')) ||
       (*(char *)((long long)global_data_ + 0x38e) != '\0')) {
      global_data_[0x1518] = 1;
      ptr_var_[0x1530] = 1;
      ptr_var_[0x1590] = 1;
      ptr_var_[0x15a8] = 1;
      ptr_var_[0x1710] = 1;
    }
    if (((*(char *)((long long)ptr_var_ + 0x71) != '\0') || (*(char *)(long_var_ + 0x38d) != '\0')) ||
       (*(char *)(long_var_ + 0x38e) != '\0')) {
      do {
        ptr_var_ = ptr_var_ + 0x18;
        *ptr_var_ = 1;
        init_result2 = init_result2 + -1;
      } while (init_result2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_system_error();
  }
  global_data_ = pinit_result;
  int_var_ = _Mtx_unlock(0x180c91970);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  if (*(int *)(global_data_ + 0x161c) == 0x11) {
    ptr_var_ = (unsigned long long *)*global_data_;
    int_var_ = _Mtx_lock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    pinit_result4 = global_data_;
    plStack_2c0 = global_data_;
    global_data_ = (long long *)*ptr_var_;
    system_initializer_003(&systemConfigData1,0,0);
    system_config_001(&systemConfigData2);
    stack_var_ = 系统配置缓冲区大小000000;
    auStack_2c8[0] = 0x3f800000;
    stack_var_ = CONFIG_PATH_BUFFER_SIZE000;
    stack_ptr_ = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_var_;
    system_config_002(&systemConfigData3,4,global_data_ + 0x167c,auStack_2c8);
    plStack_2f8 = (long long *)CONCAT44(plStack_2f8._4_4_,系统配置缓冲区大小000000);
    stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,0x3f800000);
    stack_var_ = CONFIG_PATH_BUFFER_SIZE000;
    stack_ptr_ = &systemConfigBufferPtr;
    pplStack_328 = &plStack_2f8;
    system_config_002(&systemConfigData4,4,global_data_ + 0x1680,&stack_var_);
    system_initializer_004();
    global_data_ = pinit_result4;
    int_var_ = _Mtx_unlock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
  }
  if (*(int *)(global_data_ + 0x161c) == 0xc) {
    ptr_var_ = (unsigned long long *)*global_data_;
    int_var_ = _Mtx_lock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    pinit_result4 = global_data_;
    plStack_2c0 = global_data_;
    global_data_ = (long long *)*ptr_var_;
    system_initializer_003(&systemConfigData6,0,0);
    stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,系统配置缓冲区大小000000);
    plStack_2f8 = (long long *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    stack_var_ = CONFIG_PATH_BUFFER_SIZE000;
    stack_ptr_ = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_var_;
    system_config_002(&systemConfigData5,4,global_data_ + 0x1688,&plStack_2f8);
    system_initializer_004();
    global_data_ = pinit_result4;
    int_var_ = _Mtx_unlock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
  }
  if (*(int *)(global_data_ + 0x161c) == 0xd) {
    ptr_var_ = (unsigned long long *)*global_data_;
    int_var_ = _Mtx_lock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    pinit_result4 = global_data_;
    plStack_2c0 = global_data_;
    global_data_ = (long long *)*ptr_var_;
    system_initializer_003(&systemConfigData7,0,0);
    stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,系统配置缓冲区大小000000);
    plStack_2f8 = (long long *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    stack_var_ = CONFIG_PATH_BUFFER_SIZE000;
    stack_ptr_ = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_var_;
    system_config_002(&systemConfigData5,4,global_data_ + 0x168c,&plStack_2f8);
    if (*(float *)(global_data_ + 0x168c) == 0.0) {
      *(unsigned int *)(global_data_ + 0x168c) = 0x3f800000;
    }
    system_initializer_004();
    global_data_ = pinit_result4;
    int_var_ = _Mtx_unlock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
  }
  ptr_var_ = (unsigned long long *)*global_data_;
  if (ptr_var_ != (unsigned long long *)0x0) {
    if ((undefined *)*ptr_var_ == &systemValidationFunction) {
      NVGSDK_Poll(ptr_var_[1]);
    }
    else {
      (**(code **)((undefined *)*ptr_var_ + 8))();
    }
  }
  *global_data_ = fVar15;
  long_var_ = (long long)*(int *)(global_data_ + 0x1d40) * 0xd0;
  init_result2 = *(long long *)(long_var_ + 0xb0 + *(long long *)(global_data_ + 0x1d20));
  fVar17 = (float)init_result2;
  if (init_result2 < 0) {
    fVar17 = fVar17 + 1.8446744e+19;
  }
  if (fVar17 * 8.5830686e-07 < (float)*(int *)(global_data_ + 4)) {
    *(float *)(global_data_ + STRING_BUFFER_SIZE) = fVar15 + *(float *)(global_data_ + STRING_BUFFER_SIZE);
    fVar15 = (float)fmodf(long_var_,0x3f800000);
    if (0.5 < fVar15) {
      stack_ptr_ = &g_threadString2;
      stack_var_ = 0;
      stack_ptr_ = (unsigned long long *)0x0;
      stack_var_ = 0;
      ptr_var_ = (unsigned long long *)function_(global_data_,0x1c,0x13);
      *(unsigned char *)ptr_var_ = 0;
      stack_ptr_ = ptr_var_;
      uint_var_ = allocate_helper_buffer(ptr_var_);
      stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      *ptr_var_ = 0x6f6d654d20555047;
      ptr_var_[1] = 0x6567617375207972;
      ptr_var_[2] = 0x6163697469726320;
      *(unsigned int *)(ptr_var_ + 3) = 0x2e2e6c;
      stack_var_ = 0x1b;
      stack_ptr_ = &g_threadString2;
      handle_system_error(ptr_var_);
    }
  }
  pinit_result4 = global_data_;
  if ((char)global_data_[0x42] == '\0') {
    (**(code **)(*global_data_ + 0xb0))(global_data_,*(unsigned int *)(global_data_ + 0x1340));
    (**(code **)(*pinit_result4 + 0xb8))(pinit_result4,*(unsigned int *)(global_data_ + 0x1500));
    (**(code **)(*pinit_result4 + 0xc0))(pinit_result4,*(unsigned int *)(global_data_ + 0x13b0));
    (**(code **)(*pinit_result4 + 200))(pinit_result4,*(unsigned int *)(global_data_ + 0x1490));
    (**(code **)(*pinit_result4 + 0x50))(pinit_result4);
  }
  ptr_var_ = global_data_;
  pinit_result4 = *(long long **)(global_data_ + 0x17ec);
  *global_data_ = 0;
  stack_var_._0_4_ = SUB84(pinit_result4,0);
  *(unsigned int *)(ptr_var_ + 1) = (unsigned int)stack_var_;
  stack_var_._4_4_ = (unsigned int)((ulong long)pinit_result4 >> CONFIG_PATH_BUFFER_SIZE);
  *(unsigned int *)((long long)ptr_var_ + 0xc) = stack_var_._4_4_;
  *(unsigned int *)(ptr_var_ + 8) = 0;
  stack_var_ = pinit_result4;
  system_finalizer_001();
  system_finalizer_002();
  if (((*(int *)(handle + 0x340) != 0) && (global_data_ != (long long *)0x0)) &&
     (cVar2 = (**(code **)(*global_data_ + 0x28))(), cVar2 != '\0')) {
    (**(code **)(global_data_ + 0x98))();
  }
  (**(code **)(**(long long **)(handle + 0x2b0) + 0x30))(*(long long **)(handle + 0x2b0),flags);
  if (((*(int *)(handle + 0x340) != 0) && (global_data_ != (long long *)0x0)) &&
     (cVar2 = (**(code **)(*global_data_ + 0x28))(), cVar2 != '\0')) {
    (*(code *)global_data_[7])();
  }
  if (((*(int *)(handle + 0x340) != 0) && (global_data_ != (long long *)0x0)) &&
     (cVar2 = (**(code **)(*global_data_ + 0x28))(), cVar2 != '\0')) {
    *(unsigned long long *)(*(long long *)(handle + 0x3c0) + 0x18) =
         *(unsigned long long *)(*(long long *)(handle + 0x3c0) + STRING_BUFFER_SIZE);
    pinit_result4 = (long long *)(global_data_ + CONFIG_PATH_BUFFER_SIZE30);
    uint_var_ = uint_var_;
    if (*(long long *)(global_data_ + CONFIG_PATH_BUFFER_SIZE38) - *pinit_result4 >> 2 != 0) {
      do {
        stack_var_ = *(unsigned int *)(uint_var_ + *pinit_result4);
        init_result2 = *(long long *)(handle + 0x3c0) + STRING_BUFFER_SIZE;
        function_(init_result2,&stack_var_);
        function_(init_result2,(long long)&stack_var_ + 1);
        function_(init_result2,(long long)&stack_var_ + 2);
        function_(init_result2,(long long)&stack_var_ + 3);
        uint_var_ = (int)uint_var_ + 1;
        uint_var_ = (ulong long)uint_var_;
        pinit_result4 = (long long *)(global_data_ + CONFIG_PATH_BUFFER_SIZE30);
        uint_var_ = uint_var_ + 4;
      } while ((ulong long)(long long)(int)uint_var_ <
               (ulong long)(*(long long *)(global_data_ + CONFIG_PATH_BUFFER_SIZE38) - *pinit_result4 >> 2));
    }
    (**(code **)(global_data_ + 0xa8))();
  }
  (**(code **)(**(long long **)(handle + 0x2b0) + 0x38))(*(long long **)(handle + 0x2b0),flags);
  (**(code **)(**(long long **)(handle + 0x2b0) + 系统配置缓冲区大小))(*(long long **)(handle + 0x2b0),flags);
  function_();
  if (data_180c82862 != '\0') {
    stack_ptr_ = &g_threadString2;
    stack_var_ = 0;
    stack_ptr_ = (unsigned long long *)0x0;
    stack_var_ = 0;
    ptr_var_ = (unsigned long long *)function_(global_data_,0x19,0x13);
    *(unsigned char *)ptr_var_ = 0;
    stack_ptr_ = ptr_var_;
    uint_var_ = allocate_helper_buffer(ptr_var_);
    stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
    *ptr_var_ = 0x6d6d6f43204c4752;
    ptr_var_[1] = 0x656e696c20646e61;
    ptr_var_[2] = 0x656c6f736e6f6320;
    *(unsigned char *)(ptr_var_ + 3) = 0;
    init_result2 = global_data_;
    stack_var_ = 0x18;
    ptr_var_ = (unsigned long long *)*global_data_;
    int_var_ = _Mtx_lock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    pinit_result4 = global_data_;
    plStack_2c0 = global_data_;
    global_data_ = (long long *)*ptr_var_;
    plStack_2f8 = (long long *)0x0;
    stack_var_ = (long long *)0x0;
    pplStack_328 = (long long **)&cStack_300;
    system_processor_002(init_result2,&stack_ptr_,&plStack_2f8,&stack_var_);
    if (*(char *)(init_result2 + 0x60) != '\0') {
      system_processor_003(init_result2,&plStack_2f8,&stack_var_,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(unsigned char *)(init_result2 + 0x60) = 0;
    }
    global_data_ = pinit_result4;
    int_var_ = _Mtx_unlock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    stack_ptr_ = &g_threadString2;
    handle_system_error(ptr_var_);
  }
  system_crypto_001(stack_var_ ^ (ulong long)auStack_348);
}
unsigned long long * system_handle_manager_001(unsigned long long *handle)
{
  *handle = 0;
  handle[0x43] = 0;
  handle[0x44] = 0;
  handle[0x45] = 0;
  *(unsigned int *)(handle + 0x46) = 3;
  return handle;
}
    data_180c84870 = 0;
  }
  do {
    long_var_ = long_var_ + 1;
    char_ptr_var_ = (char *)(long_var_ + 0x180c82871);
    long_var_ = long_var_;
  } while (*char_ptr_var_ != '\0');
  if (long_var_ != 0) {
    fwrite(&data_1809fcc18,1,1,long_var_);
    fwrite(&data_180c82870,long_var_,1,long_var_);
    system_cleanup_010(0);
  }
  if (long_var_ != 0) {
    fclose(long_var_);
    stack_long_ = 0;
    LOCK();
    global_data_ = global_data_ + -1;
    UNLOCK();
    long_var_ = 0;
  }
  stack_ptr_ = &g_threadString2;
  if (stack_ptr_ == (undefined *)0x0) {
    stack_ptr_ = (undefined *)0x0;
    stack_var_ = 0;
    stack_ptr_ = &g_threadString4;
    if (long_var_ != 0) {
      fclose(long_var_);
      LOCK();
      global_data_ = global_data_ + -1;
      UNLOCK();
    }
    return;
  }
  handle_system_error();
}
  data_180c8ecee = 1;
  system_event_handler_015(global_data_);
  system_cleanup_002();
  system_cleanup_008(0);
  if (data_180c82853 != '\0') {
    LOCK();
    *(unsigned int *)(*(long long *)(global_data_ + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  function_();
  if ((data_180c82860 == '\0') &&
     (pinit_result = *(long long **)(global_data_ + 0x18), pinit_result != (long long *)0x0)) {
    cVar3 = (**(code **)*pinit_result)(pinit_result);
    if (cVar3 != '\0') {
      (**(code **)(*pinit_result + 0x28))(pinit_result);
    }
  }
  system_cleanup_009();
  long_var_ = global_data_;
  if (global_data_ != 0) {
    system_cleanup_011(global_data_);
    handle_system_error(long_var_);
  }
  global_data_ = 0;
  system_thread_manager_008(global_data_);
  long_var_ = global_data_;
  if (global_data_ != 0) {
    system_thread_manager_008(global_data_);
    _Mtx_destroy_in_situ();
    handle_system_error(long_var_);
  }
  global_data_ = 0;
  return;
}
unsigned long long *
function_(unsigned long long *handle,ulong long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  unsigned long long uint_var_;
  uint_var_ = 线程池默认标志;
  *handle = &systemHandleData;
  system_cleanup_004();
  if ((flags & 1) != 0) {
    free(handle,0xc0,mutex_attr,mutex_type,uint_var_);
  }
  return handle;
}
      data_180c82850 = '\x01';
      do {
        int_var_ = ReleaseSemaphore(global_data_,1);
      } while (int_var_ == 0);
      stack_ptr_ = &g_threadString2;
      if (stack_ptr_ != (unsigned char *)0x0) {
        handle_system_error();
      }
      stack_ptr_ = (unsigned char *)0x0;
      stack_var_ = stack_var_ & 64位整数掩码;
      stack_ptr_ = &g_threadString4;
      stack_ptr_ = &g_threadString2;
      if (ptr_var_ != (undefined *)0x0) {
        handle_system_error(ptr_var_);
      }
      stack_ptr_ = (unsigned char *)0x0;
      stack_var_ = stack_var_ & 64位整数掩码;
      stack_ptr_ = &g_threadString4;
    }
  }
  stack_ptr_ = &g_threadString2;
  if (stack_ptr_ != (undefined *)0x0) {
    handle_system_error();
  }
  stack_ptr_ = (undefined *)0x0;
  stack_var_ = 0;
  stack_ptr_ = &g_threadString4;
label_:
  system_crypto_001(stack_var_ ^ (ulong long)auStack_168);
}
uint validate_system_mutex_lock(void)
{
  uint in_EAX;
  int int_var_;
  long long long_var_;
  if (global_data_ != 0) {
    long_var_ = global_data_ + 0x110;
    int_var_ = _Mtx_lock(long_var_);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    in_EAX = _Mtx_unlock(long_var_);
    if (in_EAX != 0) {
      in_EAX = __Throw_C_error_std__YAXH_Z(in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}
      data_180d49178 = 0;
      global_data_ = 0;
      strcpy_s(&data_180d49178,0x80,&data_18098bc73,mutex_type,uint_var_);
      system_crypto_002(function_);
      system_crypto_003(&data_180d49158);
      return &data_180d49160;
    }
  }
  return &data_180d49160;
}
    data_180d48d40 = '\x01';
    system_thread_manager_012(handle,CONCAT71((int7)((ulong long)ptr_var_ >> 8),1));
  }
  system_crypto_001(stack_var_ ^ (ulong long)auStack_298);
}
    thread_pool_2_status_code = '\0';
    if ((cStack_208 != '\0') && (int_var_ = _Mtx_unlock(stack_var_), int_var_ != 0)) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    if (cVar23 != '\0') goto label_;
    *(unsigned char *)(*(long long *)(*(long long *)(global_data_ + 8) + 0x140) + CONFIG_PATH_BUFFER_SIZE8) = 1;
  }
  thread_pool_2_status_code = '\0';
  int_var_ = _Mtx_unlock(渲染线程池互斥锁地址);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
label_:
  if (*(char *)(global_data_ + 0xa0) != '\0') {
    uint_var_ = system_ui_007(init_result6);
    *(unsigned long long *)(global_data_ + 0xa8) = uint_var_;
    uint_var_ = system_ui_008(init_result6);
    *(unsigned long long *)(global_data_ + 0xb0) = uint_var_;
  }
  char_ptr_var_ = global_data_;
  if (*global_data_ != '\0') {
    ptr_var_ = (unsigned long long *)*global_data_;
    int_var_ = _Mtx_lock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    uint_var_ = global_data_;
    pplStack_1b8 = (long long **)global_data_;
    global_data_ = *ptr_var_;
    system_initializer_003(&systemInitData1,0,0);
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    uint_var_ = flags0;
    flags2 = flags0;
    if (*(long long *)(char_ptr_var_ + STRING_BUFFER_SIZE) - *(long long *)(char_ptr_var_ + 8) >> 3 != 0) {
      do {
        dVar1 = *(double *)(*(long long *)(uint_var_ + *(long long *)(char_ptr_var_ + 8)) + CONFIG_PATH_BUFFER_SIZE0);
        dVar7 = dVar2 + dVar1;
        dVar2 = *(double *)(*(long long *)(uint_var_ + *(long long *)(char_ptr_var_ + 8)) + 0x1f8);
        dVar8 = dVar9 + dVar2;
        system_config_001(&systemInitData2,flags2,dVar1 / dVar2);
        flags1 = (int)flags2 + 1;
        uint_var_ = uint_var_ + 8;
        flags2 = (ulong long)flags1;
        dVar2 = dVar7;
        dVar9 = dVar8;
      } while ((ulong long)(long long)(int)flags1 <
               (ulong long)(*(long long *)(char_ptr_var_ + STRING_BUFFER_SIZE) - *(long long *)(char_ptr_var_ + 8) >> 3));
    }
    system_config_001(&systemConfigData8,dVar7 / dVar8);
    system_initializer_004();
    global_data_ = uint_var_;
    int_var_ = _Mtx_unlock(0x180c91970);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
  }
  if (*(char *)(global_data_ + 0x1626) != '\0') {
    uint_var_ = *(unsigned long long *)(global_data_ + 0x138);
    *(unsigned long long *)(global_data_ + 0x138) = 0;
    stack_ptr_ = &g_defaultDataTemplate;
    stack_ptr_ = auStack_a0;
    auStack_a0[0] = 0;
    stack_var_ = 0x18;
    flags4 = strcpy_s(auStack_a0,系统配置缓冲区大小,&systemConfigStringBuffer2);
    system_ui_001(flags4,&stack_ptr_,uint_var_,1);
    stack_ptr_ = &g_threadString4;
  }
  if (*(int *)(global_data_ + 0x60) == 1) {
    system_finalizer_003();
  }
  else if (*(int *)(global_data_ + 0x60) == 2) {
    system_finalizer_004();
  }
  init_result8 = *(long long *)(global_data_ + 0x1870) - *(long long *)(global_data_ + 0x1868) >> 3;
  uint_var_ = flags0;
  if (0 < (int)init_result8) {
    do {
      ptr_var_ = (unsigned long long *)system_validator_002(init_result8,&plStack_1d0,(long long)(int)uint_var_);
      (**(code **)(*(long long *)*ptr_var_ + 0x98))();
      if (plStack_1d0 != (long long *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      flags1 = (int)uint_var_ + 1;
      init_result8 = *(long long *)(global_data_ + 0x1870) - *(long long *)(global_data_ + 0x1868) >> 3;
      uint_var_ = (ulong long)flags1;
    } while ((int)flags1 < (int)init_result8);
  }
  system_processor_001();
  func_0x00018024f7f0();
  flags4 = func_0x0001800e2850(init_result6);
  system_ui_004(flags4,1,0);
  if (*(char *)(init_result6 + 0xf18) != '\0') {
    system_ui_009(init_result6);
    *(unsigned char *)(init_result6 + 0xf18) = 0;
  }
  long_var_ = global_data_;
  init_result8 = global_data_;
  uint_var_ = *(unsigned long long *)(global_data_ + 0x161c);
  *(unsigned long long *)(global_data_ + 0x12d0) = *(unsigned long long *)(global_data_ + 0x1614);
  *(unsigned long long *)(init_result8 + 0x12d8) = uint_var_;
  uint_var_ = *(unsigned long long *)(long_var_ + 0x162c);
  *(unsigned long long *)(init_result8 + 0x12e0) = *(unsigned long long *)(long_var_ + 0x1624);
  *(unsigned long long *)(init_result8 + 0x12e8) = uint_var_;
  uint_var_ = *(unsigned long long *)(long_var_ + 0x163c);
  *(unsigned long long *)(init_result8 + 0x12f0) = *(unsigned long long *)(long_var_ + 0x1634);
  *(unsigned long long *)(init_result8 + 0x12f8) = uint_var_;
  uint_var_ = *(unsigned long long *)(long_var_ + 0x164c);
  *(unsigned long long *)(init_result8 + 0x1300) = *(unsigned long long *)(long_var_ + 0x1644);
  *(unsigned long long *)(init_result8 + 0x1308) = uint_var_;
  uint_var_ = *(unsigned long long *)(long_var_ + 0x165c);
  *(unsigned long long *)(init_result8 + 0x1310) = *(unsigned long long *)(long_var_ + 0x1654);
  *(unsigned long long *)(init_result8 + 0x1318) = uint_var_;
  uint_var_ = *(unsigned long long *)(long_var_ + 0x166c);
  *(unsigned long long *)(init_result8 + 0x1320) = *(unsigned long long *)(long_var_ + 0x1664);
  *(unsigned long long *)(init_result8 + 0x1328) = uint_var_;
  flags4 = *(unsigned int *)(long_var_ + 0x1678);
  uint_var_ = *(unsigned int *)(long_var_ + 0x167c);
  uint_var_ = *(unsigned int *)(long_var_ + 0x1680);
  *(unsigned int *)(init_result8 + 0x1330) = *(unsigned int *)(long_var_ + 0x1674);
  *(unsigned int *)(init_result8 + 0x1334) = flags4;
  *(unsigned int *)(init_result8 + 0x1338) = uint_var_;
  *(unsigned int *)(init_result8 + 0x133c) = uint_var_;
  flags4 = *(unsigned int *)(long_var_ + 0x1688);
  uint_var_ = *(unsigned int *)(long_var_ + 0x168c);
  uint_var_ = *(unsigned int *)(long_var_ + 0x1690);
  *(unsigned int *)(init_result8 + 0x1340) = *(unsigned int *)(long_var_ + 0x1684);
  *(unsigned int *)(init_result8 + 0x1344) = flags4;
  *(unsigned int *)(init_result8 + 0x1348) = uint_var_;
  *(unsigned int *)(init_result8 + 0x134c) = uint_var_;
  *(unsigned short *)(long_var_ + 0x1637) = 0;
  *(unsigned char *)(long_var_ + 0x162c) = 0;
  system_finalizer_001();
  system_finalizer_002();
  *(uint *)(global_data_ + 0x1590) = global_data_;
  global_data_ = global_data_ + 1 & 0x80000001;
  if ((int)global_data_ < 0) {
    global_data_ = (global_data_ - 1 | 0xfffffffe) + 1;
  }
  ptr_var_ = (unsigned long long *)*global_data_;
  int_var_ = _Mtx_lock(0x180c91970);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  uint_var_ = global_data_;
  pplStack_220 = (long long **)global_data_;
  global_data_ = *ptr_var_;
  init_result8 = *(long long *)(global_data_ + 0x1a08 + (long long)(int)global_data_ * 8);
  if (init_result8 != 0) {
    uint_var_ = flags0;
    flags2 = flags0;
    if (0 < *(int *)(init_result8 + STRING_BUFFER_SIZE)) {
      do {
        system_network_003(*(unsigned long long *)(flags2 + *(long long *)(init_result8 + 8)));
        long_var_ = *(long long *)(*(long long *)(init_result8 + 8) + flags2);
        if (long_var_ != 0) {
          function_(long_var_);
          handle_system_error(long_var_);
        }
        *(unsigned long long *)(*(long long *)(init_result8 + 8) + flags2) = 0;
        flags1 = (int)uint_var_ + 1;
        uint_var_ = (ulong long)flags1;
        flags2 = flags2 + 8;
      } while ((int)flags1 < *(int *)(init_result8 + STRING_BUFFER_SIZE));
    }
    if (*(long long *)(init_result8 + 8) != 0) {
      handle_system_error();
    }
    *(unsigned long long *)(init_result8 + 8) = 0;
    ptr_var_ = *(unsigned char **)(global_data_ + 0x1a08 + (long long)(int)global_data_ * 8);
    if (ptr_var_ != (unsigned char *)0x0) {
      *ptr_var_ = 0;
      *(unsigned long long *)(ptr_var_ + 8) = 0;
      *(unsigned long long *)(ptr_var_ + 0x14) = 0;
      *(unsigned int *)(ptr_var_ + STRING_BUFFER_SIZE) = 0;
      *(unsigned long long *)(ptr_var_ + 0x24) = 0;
      *(unsigned long long *)(ptr_var_ + 0x1c) = 0;
      handle_system_error();
    }
    *(unsigned long long *)(global_data_ + 0x1a08 + (long long)(int)global_data_ * 8) = 0;
    flags = stack_var_;
  }
  system_initializer_002();
  global_data_ = uint_var_;
  int_var_ = _Mtx_unlock(0x180c91970);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  if (*(int *)(init_result6 + 8) == 2) {
    *(unsigned char *)(*(long long *)(init_result6 + STRING_BUFFER_SIZE) + 0xc0) = 0;
    while( true ) {
      ptr_var_ = (undefined *)**(unsigned long long **)(init_result6 + STRING_BUFFER_SIZE);
      if (ptr_var_ == &systemValidationData1) {
        cVar23 = *(char *)(*(unsigned long long **)(init_result6 + STRING_BUFFER_SIZE) + 2) != '\0';
      }
      else {
        cVar23 = (**(code **)(ptr_var_ + 0x68))();
      }
      if (cVar23 != '\0') break;
      ptr_var_ = (undefined *)**(unsigned long long **)(init_result6 + STRING_BUFFER_SIZE);
      if (ptr_var_ == &systemValidationData1) {
        system_cleanup_005(*(unsigned long long **)(init_result6 + STRING_BUFFER_SIZE) + 4);
      }
      else {
        (**(code **)(ptr_var_ + 0x80))();
      }
    }
    plStack_1c0 = *(long long **)(init_result6 + STRING_BUFFER_SIZE);
    *(unsigned long long *)(init_result6 + STRING_BUFFER_SIZE) = 0;
    if (plStack_1c0 != (long long *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(unsigned int *)(init_result6 + 8) = 0;
    if (_data_00000010 != (long long *)0x0) {
      (**(code **)(*_data_00000010 + STRING_BUFFER_SIZE))();
    }
    (**(code **)(_data_00000000 + CONFIG_PATH_BUFFER_SIZE))(0);
    _data_00000008 = 0xffffffffffffffff;
  }
  else if (*(int *)(init_result6 + 8) != 0) goto label_;
  *(uint *)(global_data_ + 0x1614) =
       (*(int *)(global_data_ + 0x1614) + 1U) % *(uint *)(global_data_ + 0x1d4c);
label_:
  pplStack_220 = (long long **)&stack_ptr_;
  stack_ptr_ = &g_memoryAllocationFlag;
  stack_ptr_ = auStack_180;
  stack_var_ = 0;
  auStack_180[0] = 0;
  stack_var_ = 0x19;
  stack_var_ = flags;
  pplStack_220 = (long long **)function_(global_data_,CONFIG_PATH_BUFFER_SIZE,8,3);
  *pplStack_220 = (long long *)&g_threadString4;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (long long *)&g_threadString2;
  pplStack_220[3] = (long long *)0x0;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  pinit_result7 = global_data_;
  stack_var_ = 0;
  flags4 = *(unsigned int *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)global_data_[10];
  *(unsigned int *)(pinit_result7 + 10) = flags4;
  init_result6 = (long long)pplStack_220[1];
  pplStack_220[1] = (long long *)pinit_result7[8];
  pinit_result7[8] = init_result6;
  flags4 = *(unsigned int *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)pinit_result7[9];
  *(unsigned int *)(pinit_result7 + 9) = flags4;
  flags4 = *(unsigned int *)((long long)pplStack_220 + 0x1c);
  *(unsigned int *)((long long)pplStack_220 + 0x1c) = *(unsigned int *)((long long)pinit_result7 + 0x54);
  *(unsigned int *)((long long)pinit_result7 + 0x54) = flags4;
  stack_ptr_ = pplStack_220;
  if (*(code **)(*pinit_result7 + 8) == (code *)&unknown_180639070) {
    *(unsigned int *)(pinit_result7 + 9) = 0;
    if ((unsigned char *)pinit_result7[8] != (unsigned char *)0x0) {
      *(unsigned char *)pinit_result7[8] = 0;
    }
    *(unsigned int *)((long long)pinit_result7 + 0x54) = 0;
  }
  else {
    (**(code **)(*pinit_result7 + 8))(pinit_result7);
  }
  if (0x960 < *(int *)(stack_ptr_ + 2)) {
    *(unsigned int *)(stack_ptr_ + 2) = 0x960;
    *(unsigned char *)(stack_ptr_[1] + 0x960) = 0;
  }
  stack_var_ = 0;
  stack_long_ = 0;
  stack_long_ = 0;
  stack_var_ = 0;
  stack_var_ = 3;
  function_(global_data_,flags,&stack_long_);
  init_result6 = stack_long_;
  init_result8 = stack_long_;
  uint_var_ = flags0;
  if (stack_long_ - stack_long_ >> 3 != 0) {
    do {
      long_var_ = global_data_;
      if ((0 < *(int *)(*(long long *)(uint_var_ + init_result6) + 0x124ec)) &&
         ((*(uint *)(*(long long *)(uint_var_ + init_result6) + 4) & STRING_BUFFER_SIZE000) != 0)) {
        while (char_ptr_var_ = global_data_, init_result6 = stack_long_, init_result8 = stack_long_,
              *(int *)(long_var_ + 0x30c) != 0) {
          init_result6 = system_event_handler_017(global_data_);
          if (init_result6 != 0) {
            pinit_result7 = (long long *)system_event_handler_017(char_ptr_var_);
            (**(code **)(*pinit_result7 + CONFIG_PATH_BUFFER_SIZE))(pinit_result7,0);
          }
        }
      }
      flags1 = (int)flags0 + 1;
      flags0 = (ulong long)flags1;
      uint_var_ = uint_var_ + 8;
    } while ((ulong long)(long long)(int)flags1 < (ulong long)(init_result8 - init_result6 >> 3));
  }
  uint_var_ = function_(global_data_,STRING_BUFFER_SIZE0,8,3);
  pinit_result7 = (long long *)system_event_handler_008(uint_var_,&stack_ptr_);
  ppuStack_1b0 = (undefined **)pinit_result7;
  if (pinit_result7 != (long long *)0x0) {
    (**(code **)(*pinit_result7 + 0x28))(pinit_result7);
  }
  char_ptr_var_ = global_data_;
  pplStack_220 = &plStack_228;
  plStack_228 = pinit_result7;
  if (pinit_result7 != (long long *)0x0) {
    (**(code **)(*pinit_result7 + 0x28))(pinit_result7);
  }
  pplStack_1b8 = &plStack_228;
  ptr_var_ = *(unsigned long long **)(*(long long *)(char_ptr_var_ + 8) + 8);
  char_ptr_var_ = *(code **)*ptr_var_;
  pplStack_220 = &plStack_218;
  plStack_218 = plStack_228;
  if (plStack_228 != (long long *)0x0) {
    (**(code **)(*plStack_228 + 0x28))();
  }
  (*char_ptr_var_)(ptr_var_,&plStack_218);
  if (plStack_228 != (long long *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  if (pinit_result7 != (long long *)0x0) {
    (**(code **)(*pinit_result7 + 0x38))(pinit_result7);
  }
  if (stack_long_ == 0) {
    ppuStack_1b0 = &stack_ptr_;
    stack_ptr_ = &g_threadString4;
    system_crypto_001(stack_var_ ^ (ulong long)auStack_248);
  }
  handle_system_error();
}
    data_180bfc049 = '\0';
  }
  _data_00000010 = plVar4;
  (**(code **)(_data_00000000 + 0x18))(0);
  if (plVar4 != (long long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pflags = *(unsigned long long **)(*handle + 0x18);
  char_ptr_var_ = *(code **)*pflags;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = *(long long **)(*handle + STRING_BUFFER_SIZE);
  if (plStackX_8 != (long long *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*char_ptr_var_)(pflags,&plStackX_8);
  return;
}
      data_180d492a8 = 0;
      global_data_ = 6;
      strcpy_s(&data_180d492a8,系统配置缓冲区大小,&data_180a06998,mutex_type,uint_var_);
      global_data_ = &g_defaultDataTemplate;
      global_data_ = &data_180d49300;
      data_180d49300 = 0;
      global_data_ = 4;
      strcpy_s(&data_180d49300,系统配置缓冲区大小,&data_180a06990);
      global_data_ = &g_defaultDataTemplate;
      global_data_ = &data_180d49358;
      data_180d49358 = 0;
      global_data_ = 6;
      strcpy_s(&data_180d49358,系统配置缓冲区大小,&data_180a069a8);
      global_data_ = &g_defaultDataTemplate;
      global_data_ = &data_180d493b0;
      data_180d493b0 = 0;
      global_data_ = 6;
      strcpy_s(&data_180d493b0,系统配置缓冲区大小,&data_180a069a0);
      system_crypto_002(&systemCryptoData1);
      system_crypto_003(&data_180d49288);
    }
  }
  return &data_180d49290 + (long long)handle * 0x58;
}
  data_180c82862 = data_180c82862 == '\0';
  *handle = &g_threadString4;
  handle[1] = 0;
  *(unsigned int *)(handle + 2) = 0;
  *handle = &g_threadString2;
  handle[3] = 0;
  handle[1] = 0;
  *(unsigned int *)(handle + 2) = 0;
  system_thread_manager_001(handle,3,mutex_attr,mutex_type,0,线程池默认标志);
  *(unsigned int *)handle[1] = 0x2e6b4f;
  *(unsigned int *)(handle + 2) = 3;
  return handle;
}
long long process_memory_block(long long handle,long long flags,long long mutex_attr)
{
  unsigned long long *ptr_var_;
  unsigned long long *pflags;
  long long long_var_;
  long long long_var_;
  long_var_ = flags - handle >> 5;
  if (0 < long_var_) {
    long_var_ = mutex_attr - flags;
    mutex_attr = mutex_attr + long_var_ * -CONFIG_PATH_BUFFER_SIZE;
    pflags = (unsigned long long *)(flags + 8);
    do {
      ptr_var_ = pflags + -4;
      if (*(long long *)(long_var_ + -CONFIG_PATH_BUFFER_SIZE + (long long)pflags) != 0) {
        handle_system_error();
      }
      *(unsigned long long *)(long_var_ + STRING_BUFFER_SIZE + (long long)ptr_var_) = 0;
      long_var_ = long_var_ + -1;
      *(unsigned long long *)(long_var_ + (long long)ptr_var_) = 0;
      *(unsigned int *)(long_var_ + 8 + (long long)ptr_var_) = 0;
      *(unsigned int *)(long_var_ + 8 + (long long)ptr_var_) = *(unsigned int *)(pflags + -3);
      *(unsigned long long *)(long_var_ + (long long)ptr_var_) = *ptr_var_;
      *(unsigned int *)(long_var_ + 0x14 + (long long)ptr_var_) = *(unsigned int *)((long long)pflags + -0xc);
      *(unsigned int *)(long_var_ + STRING_BUFFER_SIZE + (long long)ptr_var_) = *(unsigned int *)(pflags + -2);
      *(unsigned int *)(pflags + -3) = 0;
      *ptr_var_ = 0;
      pflags[-2] = 0;
      pflags = ptr_var_;
    } while (0 < long_var_);
  }
  return mutex_attr;
}
long long process_memory_with_flags(unsigned long long handle,long long flags,long long mutex_attr)
{
  unsigned long long *ptr_var_;
  long long long_var_;
  unsigned long long *ptr_var_;
  long long unaff_RBP;
  long long unaff_RDI;
  mutex_attr = mutex_attr - flags;
  long_var_ = unaff_RDI * -CONFIG_PATH_BUFFER_SIZE;
  ptr_var_ = (unsigned long long *)(flags + 8);
  do {
    ptr_var_ = ptr_var_ + -4;
    if (*(long long *)(mutex_attr + -CONFIG_PATH_BUFFER_SIZE + (long long)ptr_var_) != 0) {
      handle_system_error();
    }
    *(unsigned long long *)(mutex_attr + STRING_BUFFER_SIZE + (long long)ptr_var_) = 0;
    unaff_RDI = unaff_RDI + -1;
    *(unsigned long long *)(mutex_attr + (long long)ptr_var_) = 0;
    *(unsigned int *)(mutex_attr + 8 + (long long)ptr_var_) = 0;
    *(unsigned int *)(mutex_attr + 8 + (long long)ptr_var_) = *(unsigned int *)(ptr_var_ + -3);
    *(unsigned long long *)(mutex_attr + (long long)ptr_var_) = *ptr_var_;
    *(unsigned int *)(mutex_attr + 0x14 + (long long)ptr_var_) = *(unsigned int *)((long long)ptr_var_ + -0xc);
    *(unsigned int *)(mutex_attr + STRING_BUFFER_SIZE + (long long)ptr_var_) = *(unsigned int *)(ptr_var_ + -2);
    *(unsigned int *)(ptr_var_ + -3) = 0;
    *ptr_var_ = 0;
    ptr_var_[-2] = 0;
    ptr_var_ = ptr_var_;
  } while (0 < unaff_RDI);
  return unaff_RBP + long_var_;
}
      data_180d48d64 = data_180d48d64 == '\0';
    }
    if (data_180d48d64 != '\0') {
      (*(code *)(*in_RCX[0xc170])[9])(in_RCX[0xc170],alStackX_10[0] + 0x120);
    }
  }
  init_result0 = alStackX_10[0];
  if ((*(int *)(*(long long *)(alStackX_10[0] + 0x3580) + 0x110) != 0) &&
     (uint_var_ = uint_var_, uint_var_ = uint_var_, (long long)in_RCX[0x1d] - (long long)in_RCX[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(long long **)(uint_var_ + (long long)in_RCX[0x1c]) + 0x60))
                (*(long long **)(uint_var_ + (long long)in_RCX[0x1c]),in_RCX,init_result0);
      uint_var_ = (int)uint_var_ + 1;
      uint_var_ = uint_var_ + 8;
      uint_var_ = (ulong long)uint_var_;
    } while ((ulong long)(long long)(int)uint_var_ <
             (ulong long)((long long)in_RCX[0x1d] - (long long)in_RCX[0x1c] >> 3));
  }
  ppplStack_b8 = (long long ***)0x0;
  stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,(unsigned int)stack_var_);
  if (*(int *)(*(long long *)(alStackX_10[0] + 0x3580) + 0x110) != 0) {
    stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,(unsigned int)stack_var_);
    if ((((*(byte *)(alStackX_10[0] + 0x1bd8) & CONFIG_PATH_BUFFER_SIZE) != 0) &&
        (stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,(unsigned int)stack_var_),
        *(char *)(global_data_ + 0xf8) != '\0')) &&
       (stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,(unsigned int)stack_var_),
       6 < *(int *)(in_RCX + 0x4f8))) {
      uint_var_ = function_(global_data_,0xe0,8,3);
      ppplStackX_8 = (long long ***)&stack_var_;
      plStack_68 = alStackX_10;
      stack_ptr_ = &systemThreadData1;
      stack_ptr_ = &systemThreadData2;
      stack_var_._0_4_ = SUB84(in_RCX,0);
      stack_var_._4_4_ = (unsigned int)((ulong long)in_RCX >> CONFIG_PATH_BUFFER_SIZE);
      stack_var_._0_4_ = (unsigned int)stack_var_;
      stack_var_._4_4_ = stack_var_._4_4_;
      stack_var_ = in_RCX;
      stack_var_ = plStack_68;
      ppplStack_b8 = (long long ***)function_(uint_var_,&stack_var_);
      if (ppplStack_b8 != (long long ***)0x0) {
        ppplStack_80 = ppplStack_b8;
        (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
      }
      uint_var_ = global_data_;
      ppplStack_80 = (long long ***)0x0;
      if (*(int *)(global_data_ + 0x380) == 0) {
        pppplStackX_20 = &ppplStackX_8;
        ppplStackX_8 = ppplStack_b8;
        if (ppplStack_b8 != (long long ***)0x0) {
          (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
        }
        system_event_handler_013(uint_var_,&ppplStackX_8);
      }
      else {
        (*(code *)(*ppplStack_b8)[0xc])(ppplStack_b8);
        if ((*ppplStack_b8)[0xe] == (long long *)&systemThreadCheckData) {
          LOCK();
          *(unsigned char *)(ppplStack_b8 + 2) = 1;
          UNLOCK();
          system_cleanup_003(ppplStack_b8 + 4);
        }
        else {
          (*(code *)(*ppplStack_b8)[0xe])(ppplStack_b8);
        }
      }
    }
    system_processor_007(in_RCX,alStackX_10[0]);
    uint_var_ = global_data_;
    if (((in_RCX[0x89] != (long long ****)0x0) && (*(char *)(global_data_ + 0xfa) != '\0')) &&
       ((*(long long *)(alStackX_10[0] + 0x3580) != 0 &&
        (*(int *)(*(long long *)(alStackX_10[0] + 0x3580) + 0x110) != 0)))) {
      stack_var_ = &pppplStackX_20;
      pppplStackX_20 = (long long ****)in_RCX[0x89][0x461];
      if (pppplStackX_20 != (long long ****)0x0) {
        (*(code *)(*pppplStackX_20)[5])();
      }
      system_event_handler_016(uint_var_,&pppplStackX_20,0);
    }
    if ((*(char *)((long long)in_RCX + 0x563) != '\0') &&
       (0 < (int)(((long long)in_RCX[0xb6] - (long long)in_RCX[0xb5]) / 0xc))) {
      system_cleanup_001(in_RCX + 0x4cf);
      while( true ) {
        ppplVar3 = *in_RCX[0x4ce];
        if (ppplVar3 == (long long ***)&systemThreadManagerData) {
          cVar6 = *(char *)(in_RCX[0x4ce] + 2) != '\0';
        }
        else {
          cVar6 = (*(code *)ppplVar3[0xd])();
        }
        uint_var_ = global_data_;
        if (cVar6 != '\0') break;
        init_result0 = system_event_handler_017(global_data_);
        if (init_result0 != 0) {
          pinit_result1 = (long long *)system_event_handler_017(uint_var_);
          (**(code **)(*pinit_result1 + CONFIG_PATH_BUFFER_SIZE))(pinit_result1,0);
        }
      }
    }
    init_result0 = alStackX_10[0];
    pinit_result1 = *(long long **)(*(long long *)(alStackX_10[0] + 0x3580) + 0x630);
    if (pinit_result1 != (long long *)0x0) {
      plStack_78 = pinit_result1;
      (**(code **)(*pinit_result1 + 0x28))(pinit_result1);
    }
    plStack_78 = *(long long **)(init_result0 + 0x12498);
    *(long long **)(init_result0 + 0x12498) = pinit_result1;
    if (plStack_78 != (long long *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    ppppinit_result3 = in_RCX[99];
    if (ppppinit_result3 != (long long ****)0x0) {
      (*(code *)(*ppppinit_result3)[0x1f])(ppppinit_result3,alStackX_10[0]);
    }
    if (in_RCX[0x22] != (long long ****)0x0) {
      (*(code *)in_RCX[0x23])(alStackX_10[0]);
    }
    if ((*(char *)(in_RCX + 0xb74) != '\0') &&
       (init_result0 = *(long long *)(*(long long *)(alStackX_10[0] + 0x3580) + 0x530), init_result0 != 0)) {
      *(unsigned int *)(init_result0 + 系统配置缓冲区大小) = 0x41200000;
    }
    if (*(int *)(in_RCX + 0xa3a) != 0) {
      uint_var_ = *(unsigned int *)(in_RCX + 0xa3a);
      pppppinit_result7 = in_RCX + (long long)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(unsigned int *)pppppinit_result7 = 0;
      UNLOCK();
      system_processor_008(pppppinit_result7,uint_var_);
      if (*(int *)(in_RCX + 0xa3a) == 0) {
        int_var_ = 0;
      }
      else {
        int_var_ = (*(int *)(in_RCX + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (int_var_ != 0) {
        memcpy(pppppinit_result7[1],in_RCX[0xa3b],CONFIG_PATH_BUFFER_SIZE000);
      }
      init_result0 = *(long long *)(*(long long *)(alStackX_10[0] + 0x3580) + 0x118);
      if (init_result0 != 0) {
        *(long long ******)(init_result0 + 0x98c8) =
             in_RCX + (long long)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      }
    }
    uint_var_ = *(int *)(in_RCX + 0xa39) + 1U & 0x80000001;
    if ((int)uint_var_ < 0) {
      uint_var_ = (uint_var_ - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(in_RCX + 0xa39) = uint_var_;
  }
  while (int_var_ = (int)uint_var_, (ulong long)(long long)int_var_ < (ulong long)*(uint *)(in_RCX + 0xb5b)) {
    ppppinit_result3 = in_RCX[(uint_var_ >> 10) + 0xb5c] +
                 (ulong long)(uint)(int_var_ + (int)(uint_var_ >> 10) * -系统配置缓冲区大小0) * 0x18;
    system_resource_001(*ppppinit_result3);
    function_(*ppppinit_result3,ppppinit_result3[1],ppppinit_result3 + 2,0,ppppinit_result3 + 10);
    uint_var_ = (ulong long)(int_var_ + 1);
  }
  uint_var_ = (ulong long)*(uint *)(in_RCX + 0xb5b);
  LOCK();
  *(unsigned int *)(in_RCX + 0xb5b) = 0;
  uint_var_ = global_data_;
  UNLOCK();
  if (ppplStack_b8 != (long long ***)0x0) {
    ppplStackX_8 = (long long ***)&ppplStack_b0;
    ppplStack_b0 = ppplStack_b8;
    (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
    system_event_handler_016(uint_var_,&ppplStack_b0,0);
    uint_var_ = (*(code *)(*ppplStack_b8)[7])(ppplStack_b8);
  }
  return uint_var_;
}
unsigned long long *
system_processor_006(unsigned long long *handle,long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  int int_var_;
  unsigned long long *pflags;
  unsigned int *ptr_var_;
  unsigned int uint_var_;
  *handle = &g_threadString4;
  handle[1] = 0;
  *(unsigned int *)(handle + 2) = 0;
  *handle = &g_threadString2;
  handle[3] = 0;
  handle[1] = 0;
  *(unsigned int *)(handle + 2) = 0;
  system_thread_manager_001(handle,9,mutex_attr,mutex_type,0,线程池默认标志);
  pflags = (unsigned long long *)handle[1];
  *pflags = 0x6a624f656e656353;
  *(unsigned short *)(pflags + 1) = 0x2f;
  *(unsigned int *)(handle + 2) = 9;
  uint_var_ = 1;
  int_var_ = *(int *)(handle + 2);
  if (0 < *(int *)(flags + STRING_BUFFER_SIZE)) {
    system_thread_manager_001(handle,int_var_ + *(int *)(flags + STRING_BUFFER_SIZE));
    memcpy((ulong long)*(uint *)(handle + 2) + handle[1],*(unsigned long long *)(flags + 8),
           (long long)(*(int *)(flags + STRING_BUFFER_SIZE) + 1),mutex_type,uint_var_);
  }
  system_thread_manager_001(handle,int_var_ + 6);
  ptr_var_ = (unsigned int *)((ulong long)*(uint *)(handle + 2) + handle[1]);
  *ptr_var_ = 0x6563732f;
  *(unsigned short *)(ptr_var_ + 1) = 0x656e;
  *(unsigned char *)((long long)ptr_var_ + 6) = 0;
  *(int *)(handle + 2) = int_var_ + 6;
  system_thread_manager_001(handle,int_var_ + 0xd);
  *(unsigned long long *)((ulong long)*(uint *)(handle + 2) + handle[1]) = 0x656e656373782e;
  *(int *)(handle + 2) = int_var_ + 0xd;
  return handle;
}
  data_180c82842 = 1;
  stack_var_ = 3;
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (unsigned long long *******)0x0;
  stack_var_ = 0;
  stack_var_ = 0;
  stack_var_ = 0;
  stack_var_ = 0;
  stack_var_ = 0;
  stack_var_ = 3;
  long_var_ = *(long long *)(*pinit_result3 + 0x890) - *(long long *)(*pinit_result3 + 0x888) >> 5;
  stack_long_ = long_var_;
  ppppppplStackX_8 = (long long *******)((ulong long)ppppppplStackX_8 & 0xffffffff00000000);
  if (0 < (int)long_var_) {
    do {
      if (int_var_ < 0) {
label_:
        init_result9 = system_thread_manager_007();
      }
      else {
        init_result9 = *(long long *)(*pinit_result3 + 0x888);
        if ((ulong long)(*(long long *)(*pinit_result3 + 0x890) - init_result9 >> 5) <=
            (ulong long)(long long)int_var_) goto label_;
        init_result9 = (long long)int_var_ * CONFIG_PATH_BUFFER_SIZE + init_result9;
      }
      stack_ptr_ = &g_threadString2;
      stack_var_ = 0;
      stack_ptr_ = (unsigned char *)0x0;
      stack_var_ = 0;
      system_thread_manager_001(&stack_ptr_,*(unsigned int *)(init_result9 + STRING_BUFFER_SIZE));
      if (*(int *)(init_result9 + STRING_BUFFER_SIZE) != 0) {
        memcpy(stack_ptr_,*(unsigned long long *)(init_result9 + 8),*(int *)(init_result9 + STRING_BUFFER_SIZE) + 1);
      }
      if (*(long long *)(init_result9 + 8) != 0) {
        stack_var_ = 0;
        if (stack_ptr_ != (unsigned char *)0x0) {
          *stack_ptr_ = 0;
        }
        stack_var_ = stack_var_ & 0xffffffff;
      }
      int_var_ = stack_var_ + 8;
      system_thread_manager_001(&stack_ptr_,int_var_);
      *(unsigned long long *)(stack_ptr_ + stack_var_) = 0x6a624f656e656353;
      *(unsigned char *)((long long)(stack_ptr_ + stack_var_) + 8) = 0;
      stack_var_ = int_var_;
      cVar5 = system_thread_001(&stack_ptr_);
      if (cVar5 == '\0') {
        stack_ptr_ = &g_threadString2;
        if (stack_ptr_ != (unsigned char *)0x0) {
          handle_system_error();
        }
      }
      else {
        pppppuStack_d0 = (unsigned long long *****)0x0;
        pppppuStack_c8 = (unsigned long long *****)0x0;
        stack_var_ = 0;
        stack_var_ = 3;
        function_(&stack_ptr_,&pppppuStack_d0);
        pppppflags6 = pppppuStack_c8;
        pppppflags3 = pppppuStack_d0;
        init_result9 = (long long)pppppuStack_c8 - (long long)pppppuStack_d0;
        ppppppuVar12 = (unsigned long long ******)function_(global_data_,CONFIG_PATH_BUFFER_SIZE,8,3);
        ppppppuStack_d8 = ppppppuVar12;
        *ppppppuVar12 = (unsigned long long *****)0x0;
        ppppppuVar12[1] = (unsigned long long *****)0x0;
        ppppppuVar12[2] = (unsigned long long *****)0x0;
        *(unsigned int *)(ppppppuVar12 + 3) = 3;
        pppppppuVar6 = &pppppppuStack_188;
        pppppppuVar9 = pppppppuStack_178;
        while (pppppppuVar9 != (unsigned long long *******)0x0) {
          if (*(int *)(pppppppuVar9 + 4) < int_var_) {
            pppppppuVar9 = (unsigned long long *******)*pppppppuVar9;
          }
          else {
            pppppppuVar6 = pppppppuVar9;
            pppppppuVar9 = (unsigned long long *******)pppppppuVar9[1];
          }
        }
        if (((unsigned long long ********)pppppppuVar6 == &pppppppuStack_188) ||
           (int_var_ < *(int *)(pppppppuVar6 + 4))) {
          ptr_var_ = (unsigned long long *)function_(&pppppppuStack_188,auStack_90);
          pppppppuVar6 = (unsigned long long *******)*ptr_var_;
        }
        pppppppuVar6[5] = ppppppuVar12;
        int_var_ = (int)(init_result9 >> 5);
        init_result9 = (long long)int_var_;
        pppppflags5 = pppppflags3;
        if (0 < int_var_) {
          pppppflags2 = pppppflags3 + 1;
          do {
            stack_ptr_ = &g_threadString2;
            stack_var_._0_4_ = 0;
            stack_var_._4_4_ = 0;
            stack_ptr_ = (unsigned char *)0x0;
            stack_var_ = 0;
            system_thread_manager_001(&stack_ptr_,*(unsigned int *)(pppppflags2 + 1));
            if (*(int *)(pppppflags2 + 1) != 0) {
              memcpy(stack_ptr_,*pppppflags2,*(int *)(pppppflags2 + 1) + 1);
            }
            if (*pppppflags2 != (unsigned long long ****)0x0) {
              stack_var_ = 0;
              if (stack_ptr_ != (unsigned char *)0x0) {
                *stack_ptr_ = 0;
              }
              stack_var_._4_4_ = 0;
            }
            int_var_ = stack_var_ + 0xd;
            system_thread_manager_001(&stack_ptr_,int_var_);
            ptr_var_ = (unsigned long long *)(stack_ptr_ + stack_var_);
            *ptr_var_ = 0x782e656e6563732f;
            *(unsigned int *)(ptr_var_ + 1) = 0x6e656373;
            *(unsigned short *)((long long)ptr_var_ + 0xc) = 0x65;
            stack_var_ = int_var_;
            cVar5 = system_thread_002(&stack_ptr_);
            if (cVar5 == '\0') {
              stack_var_ = 0;
              if (stack_ptr_ != (unsigned char *)0x0) {
                *stack_ptr_ = 0;
              }
              uint_var_ = *(uint *)(pppppflags2 + 1);
              flags0 = (ulong long)uint_var_;
              if (*pppppflags2 != (unsigned long long ****)0x0) {
                system_thread_manager_001(&stack_ptr_,flags0);
              }
              if (uint_var_ != 0) {
                memcpy(stack_ptr_,*pppppflags2,flags0);
              }
              if (stack_ptr_ != (unsigned char *)0x0) {
                stack_ptr_[flags0] = 0;
              }
              stack_var_._4_4_ = *(uint *)((long long)pppppflags2 + 0x14);
              stack_var_ = uint_var_;
              system_thread_manager_001(&stack_ptr_,0x12);
              ptr_var_ = (unsigned int *)(stack_ptr_ + stack_var_);
              *ptr_var_ = 0x6563732f;
              ptr_var_[1] = 0x782e656e;
              ptr_var_[2] = 0x2e6f6373;
              ptr_var_[3] = 0x65637378;
              *(unsigned short *)(ptr_var_ + 4) = 0x656e;
              *(unsigned char *)((long long)ptr_var_ + 0x12) = 0;
              stack_var_ = 0x12;
              cVar5 = system_thread_002(&stack_ptr_);
              if (cVar5 != '\0') goto label_;
              stack_ptr_ = &g_threadString2;
              if (stack_ptr_ != (unsigned char *)0x0) {
                handle_system_error();
              }
            }
            else {
label_:
              pppppppuVar6 = &pppppppuStack_188;
              pppppppuVar9 = pppppppuStack_178;
              while (pppppppuVar9 != (unsigned long long *******)0x0) {
                if (*(int *)(pppppppuVar9 + 4) < int_var_) {
                  pppppppuVar9 = (unsigned long long *******)*pppppppuVar9;
                }
                else {
                  pppppppuVar6 = pppppppuVar9;
                  pppppppuVar9 = (unsigned long long *******)pppppppuVar9[1];
                }
              }
              if (((unsigned long long ********)pppppppuVar6 == &pppppppuStack_188) ||
                 (int_var_ < *(int *)(pppppppuVar6 + 4))) {
                ptr_var_ = (unsigned long long *)function_(&pppppppuStack_188,&ppppppuStack_a0);
                pppppppuVar6 = (unsigned long long *******)*ptr_var_;
              }
              ppppppuVar12 = pppppppuVar6[5];
              ppppppflags = (unsigned long long ******)ppppppuVar12[1];
              if (ppppppflags < ppppppuVar12[2]) {
                ppppppuVar12[1] = ppppppflags + 4;
                *ppppppflags = (unsigned long long *****)&g_threadString4;
                ppppppflags[1] = (unsigned long long *****)0x0;
                *(unsigned int *)(ppppppflags + 2) = 0;
                *ppppppflags = (unsigned long long *****)&g_threadString2;
                ppppppflags[3] = (unsigned long long *****)0x0;
                ppppppflags[1] = (unsigned long long *****)0x0;
                *(unsigned int *)(ppppppflags + 2) = 0;
                ppppppuStack_d8 = ppppppflags;
                system_thread_manager_001(ppppppflags,stack_var_);
                if (stack_var_ != 0) {
                  memcpy(ppppppflags[1],stack_ptr_,stack_var_ + 1);
                }
                if (stack_ptr_ != (unsigned char *)0x0) {
                  *(unsigned int *)(ppppppflags + 2) = 0;
                  if (ppppppflags[1] != (unsigned long long *****)0x0) {
                    *(unsigned char *)ppppppflags[1] = 0;
                  }
                  *(unsigned int *)((long long)ppppppflags + 0x1c) = 0;
                }
              }
              else {
                system_event_handler_006(ppppppuVar12,&stack_ptr_);
              }
              stack_ptr_ = &g_threadString2;
              if (stack_ptr_ != (unsigned char *)0x0) {
                handle_system_error();
              }
            }
            stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
            stack_ptr_ = (unsigned char *)0x0;
            stack_ptr_ = &g_threadString4;
            pppppflags2 = pppppflags2 + 4;
            init_result9 = init_result9 + -1;
            pppppflags3 = pppppuStack_d0;
            pppppflags6 = pppppuStack_c8;
            pppppflags5 = pppppuStack_d0;
            long_var_ = stack_long_;
          } while (init_result9 != 0);
        }
        for (; pppppflags3 != pppppflags6; pppppflags3 = pppppflags3 + 4) {
          (*(code *)**pppppflags3)(pppppflags3,0);
        }
        if (pppppflags5 != (unsigned long long *****)0x0) {
          handle_system_error(pppppflags5);
        }
        stack_ptr_ = &g_threadString2;
        if (stack_ptr_ != (unsigned char *)0x0) {
          handle_system_error();
        }
      }
      stack_var_ = stack_var_ & 64位整数掩码;
      stack_ptr_ = (unsigned char *)0x0;
      stack_ptr_ = &g_threadString4;
      int_var_ = int_var_ + 1;
      ppppppplStackX_8 = (long long *******)CONCAT44(ppppppplStackX_8._4_4_,int_var_);
      pinit_result3 = global_data_;
      mutex_attr = pppppppuStackX_18;
      init_result9 = stack_long_;
      mutex_type = uStackX_20;
    } while (int_var_ < (int)long_var_);
  }
  stack_var_ = 3;
  pppppppuStack_138 = &pppppppuStack_138;
  pppppppuStack_130 = &pppppppuStack_138;
  pppppppuStack_128 = (unsigned long long *******)0x0;
  stack_var_ = 0;
  stack_var_ = 0;
  pppppppuVar9 = pppppppuStack_180;
  if ((unsigned long long ********)pppppppuStack_180 != &pppppppuStack_188) {
    do {
      pppppppuVar16 = (unsigned long long *******)pppppppuVar9[5];
      pppppppuVar6 = pppppppuVar9 + 4;
      pppppppuVar8 = &pppppppuStack_138;
      if (pppppppuStack_128 != (unsigned long long *******)0x0) {
        pppppppuVar15 = pppppppuStack_128;
        do {
          if (*(int *)(pppppppuVar15 + 4) < *(int *)pppppppuVar6) {
            pppppppuVar15 = (unsigned long long *******)*pppppppuVar15;
          }
          else {
            pppppppuVar8 = pppppppuVar15;
            pppppppuVar15 = (unsigned long long *******)pppppppuVar15[1];
          }
        } while (pppppppuVar15 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)pppppppuVar8 == &pppppppuStack_138) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        ptr_var_ = (unsigned long long *)function_(&pppppppuStack_138,&pppppppuStackX_18);
        pppppppuVar8 = (unsigned long long *******)*ptr_var_;
      }
      if (pppppppuVar8 + 5 != pppppppuVar16) {
        system_event_handler_004(pppppppuVar8 + 5,*pppppppuVar16,pppppppuVar16[1]);
      }
      pppppppuVar8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (unsigned long long *******)0x0) {
        pppppppuVar16 = pppppppuStack_178;
        do {
          if (*(int *)(pppppppuVar16 + 4) < *(int *)pppppppuVar6) {
            pppppppuVar16 = (unsigned long long *******)*pppppppuVar16;
          }
          else {
            pppppppuVar8 = pppppppuVar16;
            pppppppuVar16 = (unsigned long long *******)pppppppuVar16[1];
          }
        } while (pppppppuVar16 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)pppppppuVar8 == &pppppppuStack_188) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        ptr_var_ = (unsigned long long *)function_(&pppppppuStack_188,&ppppppplStackX_8);
        pppppppuVar8 = (unsigned long long *******)*ptr_var_;
      }
      ppppppuVar12 = pppppppuVar8[5];
      ppppppuStack_a0 = ppppppuVar12;
      if (ppppppuVar12 != (unsigned long long ******)0x0) {
        system_event_handler_010(ppppppuVar12);
        handle_system_error(ppppppuVar12);
      }
      pppppppuVar8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (unsigned long long *******)0x0) {
        pppppppuVar16 = pppppppuStack_178;
        do {
          if (*(int *)(pppppppuVar16 + 4) < *(int *)pppppppuVar6) {
            pppppppuVar16 = (unsigned long long *******)*pppppppuVar16;
          }
          else {
            pppppppuVar8 = pppppppuVar16;
            pppppppuVar16 = (unsigned long long *******)pppppppuVar16[1];
          }
        } while (pppppppuVar16 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)pppppppuVar8 == &pppppppuStack_188) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        ptr_var_ = (unsigned long long *)function_(&pppppppuStack_188,&ppppppuStack_d8);
        pppppppuVar8 = (unsigned long long *******)*ptr_var_;
      }
      pppppppuVar8[5] = (unsigned long long ******)0x0;
      pppppppuVar9 = (unsigned long long *******)func_0x00018066bd70(pppppppuVar9);
    } while ((unsigned long long ********)pppppppuVar9 != &pppppppuStack_188);
  }
  pppppppuVar9 = pppppppuStack_178;
  if (pppppppuStack_178 != (unsigned long long *******)0x0) {
    function_(&pppppppuStack_188,*pppppppuStack_178);
    handle_system_error(pppppppuVar9);
  }
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (unsigned long long *******)0x0;
  stack_var_ = stack_var_ & 0xffffffffffffff00;
  stack_var_ = 0;
  uint_var_ = function_(global_data_,0x150,8,3);
  pppppppuStackX_18 = (unsigned long long *******)&pppppuStack_d0;
  uint_var_ = system_thread_manager_003(&pppppuStack_d0,mutex_type);
  ppppppplStackX_8 = (long long *******)&ppppppplStack_108;
  stack_var_ = 0;
  stack_var_ = 0;
  stack_var_ = 0;
  stack_var_ = stack_var_;
  ppppppplStack_108 = (long long *******)&ppppppplStack_108;
  ppppppplStack_100 = (long long *******)&ppppppplStack_108;
  ppppppplStack_f8 = (long long *******)0x0;
  stack_var_ = 0;
  stack_var_ = 0;
  if (pppppppuStack_128 != (unsigned long long *******)0x0) {
    ppppppplStack_f8 =
         (long long *******)system_processor_009(&ppppppplStack_108,pppppppuStack_128,&ppppppplStack_108);
    ppppppplVar4 = (long long *******)*ppppppplStack_f8;
    ppppppplStack_108 = ppppppplStack_f8;
    while (ppppppplVar3 = ppppppplVar4, ppppppplVar3 != (long long *******)0x0) {
      ppppppplStack_108 = ppppppplVar3;
      ppppppplVar4 = (long long *******)*ppppppplVar3;
    }
    ppppppplVar4 = (long long *******)ppppppplStack_f8[1];
    ppppppplStack_100 = ppppppplStack_f8;
    while (ppppppplVar3 = ppppppplVar4, ppppppplVar3 != (long long *******)0x0) {
      ppppppplStack_100 = ppppppplVar3;
      ppppppplVar4 = (long long *******)ppppppplVar3[1];
    }
    stack_var_ = stack_var_;
  }
  ppppppuVar12 = (unsigned long long ******)
                 system_processor_010(uint_var_,&ppppppplStack_108,uint_var_,pppppppuStackX_10,mutex_attr);
  if (ppppppuVar12 != (unsigned long long ******)0x0) {
    pppppppuStackX_18 = (unsigned long long *******)ppppppuVar12;
    (*(code *)(*ppppppuVar12)[5])(ppppppuVar12);
  }
  pppppppuStackX_18 = *(unsigned long long ********)(init_result9 + 系统配置缓冲区大小);
  *(unsigned long long *******)(init_result9 + 系统配置缓冲区大小) = ppppppuVar12;
  if (pppppppuStackX_18 != (unsigned long long *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[7])();
  }
  uint_var_ = global_data_;
  pppppppuStackX_10 = &pppppppuStackX_18;
  pppppppuStackX_18 = *(unsigned long long ********)(init_result9 + 系统配置缓冲区大小);
  if (pppppppuStackX_18 != (unsigned long long *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[5])();
  }
  system_event_handler_013(uint_var_,&pppppppuStackX_18);
  pppppppuVar6 = pppppppuStack_128;
  pppppppuVar9 = pppppppuStack_178;
  pppppppuStackX_18 = pppppppuStack_128;
  if (pppppppuStack_128 == (unsigned long long *******)0x0) {
    if (pppppppuStack_178 != (unsigned long long *******)0x0) {
      function_(&pppppppuStack_188,*pppppppuStack_178);
      handle_system_error(pppppppuVar9);
    }
    stack_ptr_ = &g_threadString2;
    if (stack_ptr_ == (undefined *)0x0) {
      return;
    }
    handle_system_error();
  }
  system_processor_011(&pppppppuStack_138,*pppppppuStack_128);
  pppppppuStackX_10 = pppppppuVar6 + 4;
  ppppppplStackX_8 = pppppppuVar6 + 5;
  system_event_handler_010();
  handle_system_error(pppppppuVar6);
}
        data_180c91d14 = 0;
        return plVar7;
      }
      init_result0 = (long long)int_var_ << 4;
      do {
        if ((int)(fVar12 - 12582912.0) <= (int)plVar9) {
          data_180c91d14 = 0;
          return plVar7;
        }
        long_var_ = *(long long *)(init_result0 + (long long)global_data_);
        plVar7 = (long long *)(ulong long)*(uint *)(long_var_ + 0xe0);
        if ((*(uint *)(long_var_ + 0xe0) == 2) &&
           (plVar7 = (long long *)(ulong long)*(uint *)(long_var_ + 0xd8), *(uint *)(long_var_ + 0xd8) == 0))
        {
          LOCK();
          uint_var_ = *(uint *)(long_var_ + 0xd8);
          if (uint_var_ == 0) {
            *(uint *)(long_var_ + 0xd8) = 0xffffffff;
          }
          else {
            plVar7 = (long long *)(ulong long)uint_var_;
          }
          UNLOCK();
          if (uint_var_ == 0) {
            *(unsigned char *)(long_var_ + 0xdc) = 0;
            system_hardware_001(long_var_ + 0xe8);
            uint_var_ = *(unsigned long long *)(long_var_ + 0x88);
            int_var_ = *(int *)(long_var_ + 0x80);
            *(unsigned long long *)(long_var_ + 0x88) = 0;
            *(unsigned int *)(long_var_ + 0x80) = 0;
            *(unsigned int *)(long_var_ + 0xe0) = 0;
            *(unsigned int *)(long_var_ + 0xd8) = 0;
            system_hardware_002(uint_var_);
            LOCK();
            uint_var_ = global_data_ - int_var_;
            plVar7 = (long long *)(ulong long)global_data_;
            UNLOCK();
            global_data_ = uint_var_;
            if (0 < int_var_) {
              plVar9 = (long long *)(ulong long)(uint)((int)plVar9 + int_var_);
              plVar7 = global_data_ + (long long)int_var_ * 2 + 2;
              if (plVar7 < global_data_) {
                memmove(global_data_ + (long long)int_var_ * 2,plVar7,
                        (long long)global_data_ - (long long)plVar7);
              }
              plVar7 = global_data_ + -2;
              global_data_ = plVar7;
            }
          }
        }
        init_result0 = init_result0 + -STRING_BUFFER_SIZE;
        int_var_ = int_var_ + -1;
      } while (-1 < int_var_);
      data_180c91d14 = 0;
      return plVar7;
    }
    flags = *(unsigned int *)(init_result0 + 0x84);
    uint_var_ = *(unsigned int *)(init_result0 + 0x80);
    if (plVar7 < global_data_) {
      global_data_ = plVar7 + 2;
      *plVar7 = init_result0;
      plVar7[1] = CONCAT44(uint_var_,flags);
    }
    else {
      long_var_ = (long long)plVar7 - (long long)global_data_ >> 4;
      if (long_var_ == 0) {
        long_var_ = 1;
label_:
        plVar7 = (long long *)function_(global_data_,long_var_ << 4,data_180c91d08);
      }
      else {
        long_var_ = long_var_ * 2;
        plVar7 = plVar9;
        if (long_var_ != 0) goto label_;
      }
      if (global_data_ != global_data_) {
        memmove(plVar7,global_data_,(long long)global_data_ - (long long)global_data_);
      }
      *plVar7 = init_result0;
      plVar7[1] = CONCAT44(uint_var_,flags);
      if (global_data_ != (long long *)0x0) {
        handle_system_error();
      }
      global_data_ = plVar7 + long_var_ * 2;
      global_data_ = plVar7;
      global_data_ = plVar7 + 2;
    }
    cVar6 = system_validator_001(0x180c919f0,&lStackX_20);
    plVar7 = global_data_;
    init_result0 = lStackX_20;
  } while( true );
}
      data_180c91d14 = uint_var_;
      return;
    }
    long_var_ = *(long long *)(long_var_ + global_data_);
    if ((*(int *)(long_var_ + 0xe0) == 2) && (*(int *)(long_var_ + 0xd8) == 0)) {
      LOCK();
      bVar8 = *(int *)(long_var_ + 0xd8) == 0;
      if (bVar8) {
        *(int *)(long_var_ + 0xd8) = -1;
      }
      UNLOCK();
      if (bVar8) {
        *(unsigned char *)(long_var_ + 0xdc) = uint_var_;
        system_hardware_001(long_var_ + 0xe8);
        uint_var_ = *(unsigned long long *)(long_var_ + 0x88);
        int_var_ = *(int *)(long_var_ + 0x80);
        *(unsigned long long *)(long_var_ + 0x88) = unaff_R12;
        uint_var_ = (unsigned int)unaff_R12;
        *(unsigned int *)(long_var_ + 0x80) = uint_var_;
        *(unsigned int *)(long_var_ + 0xe0) = uint_var_;
        *(unsigned int *)(long_var_ + 0xd8) = uint_var_;
        system_hardware_002(uint_var_);
        LOCK();
        global_data_ = global_data_ - int_var_;
        UNLOCK();
        if (0 < int_var_) {
          unaff_EBP = unaff_EBP + int_var_;
          long_var_ = (long long)unaff_EDI * STRING_BUFFER_SIZE + global_data_;
          uint_var_ = long_var_ + STRING_BUFFER_SIZE;
          if (uint_var_ < global_data_) {
            memmove(long_var_,uint_var_,global_data_ - uint_var_);
          }
          global_data_ = global_data_ - STRING_BUFFER_SIZE;
        }
      }
    }
    long_var_ = long_var_ + -STRING_BUFFER_SIZE;
    unaff_EDI = unaff_EDI + -1;
  } while (-1 < unaff_EDI);
  data_180c91d14 = uint_var_;
  return;
}
  data_180c91d14 = unaff_BPL;
  return;
}
        data_180d48da8 = '\x01';
        stack_int_ = 0x786;
        function_(auStack_258,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3);
        OutputDebugStringA(auStack_258);
      }
      fVar14 = (float)modff((float)(int)(*(ushort *)((long long)handle + 0x5e) - 1) *
                            uStackX_18._4_4_,&stack_var_);
      fVar15 = (float)modff();
      fStack_298 = (fStack_28c - fStack_298) * fVar15 + fStack_298;
      fStack_294 = (fStack_288 - fStack_294) * fVar15 + fStack_294;
      fStack_290 = (fStack_284 - fStack_290) * fVar15 + fStack_290;
      fVar16 = (((fStack_270 - fStack_27c) * fVar15 + fStack_27c) - fStack_294) * fVar14 +
               fStack_294;
      fVar17 = (((fStack_26c - fStack_278) * fVar15 + fStack_278) - fStack_290) * fVar14 +
               fStack_290;
      fVar14 = (((fStack_274 - fStack_280) * fVar15 + fStack_280) - fStack_298) * fVar14 +
               fStack_298;
    }
    else {
      fVar16 = (float)stack_var_;
      fVar17 = (float)stack_var_;
      fVar14 = (float)stack_var_;
    }
    *flags = fVar17;
    flags[1] = fVar16;
    flags[2] = fVar14;
    flags[3] = 1.0;
    break;
  case 0x16:
    stack_int_ = mutex_type;
    system_handler_007(init_result0,&stack_var_,handle,&uStackX_18);
code_r0x0001802a14f5:
    *flags = (float)stack_var_._2_1_ * 0.003921569;
    bVar1 = (byte)stack_var_;
code_r0x0001802a151f:
    fVar16 = 0.003921569;
    uint_var_ = (ushort)stack_var_._1_1_;
    uint_var_ = (ushort)bVar1;
    uint_var_ = (ushort)stack_var_._3_1_;
code_r0x0001802a1528:
    flags[1] = (float)uint_var_ * fVar16;
    flags[2] = (float)uint_var_ * fVar16;
    flags[3] = (float)uint_var_ * fVar16;
    break;
  case 0x1e:
    stack_int_ = mutex_type;
    ptr_var_ = (unsigned short *)system_handler_008(init_result0,&stack_var_,handle,&uStackX_18);
    fVar16 = (float)func_0x0001800adf40(ptr_var_[2]);
    fVar17 = (float)func_0x0001800adf40(ptr_var_[1]);
    fVar14 = (float)func_0x0001800adf40(*ptr_var_);
    fVar15 = (float)func_0x0001800adf40(ptr_var_[3]);
    flags[3] = fVar15;
    *flags = fVar14;
    flags[1] = fVar17;
    flags[2] = fVar16;
    break;
  case CONFIG_PATH_BUFFER_SIZE:
    stack_int_ = mutex_type;
    system_handler_002(init_result0,&stack_var_,handle,&uStackX_18);
    *flags = (float)stack_var_;
    flags[2] = (float)stack_var_;
code_r0x0001802a1ad1:
    flags[3] = 1.0;
    fVar16 = stack_var_._4_4_;
code_r0x0001802a1ade:
    flags[1] = fVar16;
    break;
  case 0x21:
    if (mutex_type == 0) {
      int_var_ = *(ushort *)((long long)handle + 0x5e) - 1;
      int_var_ = *(ushort *)((long long)handle + 0x5c) - 1;
      uStackX_18._0_4_ = (float)mutex_attr;
      if ((int)((float)int_var_ * (float)uStackX_18) <= int_var_) {
        int_var_ = (int)((float)int_var_ * (float)uStackX_18);
      }
      uStackX_18._4_4_ = (float)((ulong long)mutex_attr >> CONFIG_PATH_BUFFER_SIZE);
      if ((int)((float)int_var_ * uStackX_18._4_4_) <= int_var_) {
        int_var_ = (int)((float)int_var_ * uStackX_18._4_4_);
      }
      int_var_ = 0;
      if (-1 < int_var_) {
        int_var_ = int_var_;
      }
      int_var_ = 0;
      if (-1 < int_var_) {
        int_var_ = int_var_;
      }
      ptr_var_ = (unsigned long long *)
               ((long long)(int)(int_var_ * (uint)*(ushort *)((long long)handle + 0x5c) + int_var_) * STRING_BUFFER_SIZE
               + *handle);
      flags = ptr_var_[1];
      *(unsigned long long *)flags = *ptr_var_;
      *(unsigned long long *)(flags + 2) = flags;
    }
    else if (mutex_type == 1) {
      system_handler_009(handle,&uStackX_18,mutex_attr,&fStack_298);
      fVar16 = (float)modff((float)(int)(*(ushort *)((long long)handle + 0x5e) - 1) *
                            uStackX_18._4_4_,&stack_var_);
      fVar17 = (float)modff();
      fStack_298 = (fStack_288 - fStack_298) * fVar17 + fStack_298;
      fStack_294 = (fStack_284 - fStack_294) * fVar17 + fStack_294;
      fStack_290 = (fStack_280 - fStack_290) * fVar17 + fStack_290;
      *flags = (((fStack_268 - fStack_278) * fVar17 + fStack_278) - fStack_298) * fVar16 +
                 fStack_298;
      flags[1] = (((fStack_264 - fStack_274) * fVar17 + fStack_274) - fStack_294) * fVar16 +
                   fStack_294;
      flags[2] = (((fStack_260 - fStack_270) * fVar17 + fStack_270) - fStack_290) * fVar16 +
                   fStack_290;
      flags[3] = 3.4028235e+38;
    }
    else {
      stack_var_ = 0;
      stack_var_ = 0;
      flags[0] = 0.0;
      flags[1] = 0.0;
      flags[2] = 0.0;
      flags[3] = 0.0;
    }
    break;
  case 0x27:
    stack_int_ = mutex_type;
    system_handler_005(init_result0,&stack_var_,handle,&uStackX_18);
    fVar16 = 1.5259022e-05;
    *flags = (float)(ushort)stack_var_ * 1.5259022e-05;
    uint_var_ = (uint)stack_var_._2_2_;
    uint_var_ = stack_var_._4_2_;
    goto code_r0x0001802a16a1;
  case 0x28:
    stack_int_ = mutex_type;
    system_handler_006(init_result0,&stack_var_,handle,&uStackX_18);
    fVar16 = 0.003921569;
    *flags = (float)(byte)stack_var_ * 0.003921569;
    uint_var_ = (uint)stack_var_._1_1_;
    uint_var_ = (ushort)stack_var_._2_1_;
    goto code_r0x0001802a16a1;
  case 0x29:
    stack_int_ = mutex_type;
    system_handler_006(init_result0,&stack_var_,handle,&uStackX_18);
code_r0x0001802a1677:
    fVar16 = 0.003921569;
    *flags = (float)stack_var_._2_1_ * 0.003921569;
    uint_var_ = (uint)((ulong long)stack_var_ >> 8) & 0xff;
    uint_var_ = (ushort)(byte)stack_var_;
code_r0x0001802a16a1:
    flags[3] = 1.0;
    flags[2] = (float)uint_var_ * fVar16;
    flags[1] = (float)uint_var_ * fVar16;
    break;
  case 0x2b:
    stack_int_ = mutex_type;
    system_handler_004(init_result0,abStack_2b8,handle,&uStackX_18);
    flags[1] = 0.0;
    flags[2] = 0.0;
    flags[3] = 0.0;
    *flags = (float)abStack_2b8[0];
    break;
  case 0x2c:
    uint_var_ = system_handler_003(init_result0,handle,&uStackX_18);
    fVar16 = (float)uint_var_;
code_r0x0001802a1829:
    *flags = fVar16;
    flags[1] = 1.0;
    flags[2] = 1.0;
    flags[3] = 1.0;
  }
system_handler_001:
  system_crypto_001(stack_var_ ^ (ulong long)auStack_2e8);
}
    data_180d48da8 = '\x01';
    function_(unaff_RBP + -0x70,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3,0x786);
    OutputDebugStringA(unaff_RBP + -0x70);
  }
  uint_var_ = *(ushort *)(unaff_RDI + 0x5c);
  fVar5 = *(float *)(unaff_RBP + CONFIG_PATH_BUFFER_SIZE0);
  fVar4 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + CONFIG_PATH_BUFFER_SIZE4),&stack0x00000038);
  fVar5 = (float)modff((float)(int)(uint_var_ - 1) * fVar5,&stack0x00000038);
  fVar6 = (fStack000000000000005c - fStack0000000000000050) * fVar5 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * fVar5 + fStack0000000000000054;
  fVar7 = (fStack0000000000000064 - fStack0000000000000058) * fVar5 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * fVar5 + fStack0000000000000070)
               - fVar7) * fVar4 + fVar7;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * fVar5 +
                  fStack000000000000006c) - fStack0000000000000054) * fVar4 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * fVar5 +
                  fStack0000000000000068) - fVar6) * fVar4 + fVar6;
  unaff_RBX[3] = 1.0;
  system_crypto_001(*(ulong long *)(unaff_RBP + 400) ^ (ulong long)&stack0x00000000);
}
  data_180d48da8 = 1;
  function_(unaff_RBP + -0x70,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3,0x786);
  OutputDebugStringA(unaff_RBP + -0x70);
  uint_var_ = *(ushort *)(unaff_RDI + 0x5c);
  fVar3 = *(float *)(unaff_RBP + CONFIG_PATH_BUFFER_SIZE0);
  fVar2 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + CONFIG_PATH_BUFFER_SIZE4),&stack0x00000038);
  fVar3 = (float)modff((float)(int)(uint_var_ - 1) * fVar3,&stack0x00000038);
  fVar4 = (fStack000000000000005c - fStack0000000000000050) * fVar3 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * fVar3 + fStack0000000000000054;
  fVar5 = (fStack0000000000000064 - fStack0000000000000058) * fVar3 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * fVar3 + fStack0000000000000070)
               - fVar5) * fVar2 + fVar5;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * fVar3 +
                  fStack000000000000006c) - fStack0000000000000054) * fVar2 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * fVar3 +
                  fStack0000000000000068) - fVar4) * fVar2 + fVar4;
  unaff_RBX[3] = 1.0;
  system_crypto_001(*(ulong long *)(unaff_RBP + 400) ^ (ulong long)&stack0x00000000);
}
        data_180d48dac = '\x01';
        stack_long_ = CONCAT44(stack_long_._4_4_,0x4ea);
        function_(auStack_238,&systemFunctionData1,&systemFunctionData4,&systemFunctionData5);
        OutputDebugStringA(auStack_238);
      }
      goto label_;
    }
    uint_var_ = function_(&stack_ptr_,handle);
    system_thread_manager_012(uint_var_,1);
    stack_ptr_ = &g_threadString2;
    if (stack_ptr_ != (undefined *)0x0) {
      handle_system_error();
    }
    stack_ptr_ = (undefined *)0x0;
    stack_var_ = 0;
    stack_ptr_ = &g_threadString4;
    long_var_ = *flags;
    uint_var_ = *(unsigned short *)((long long)flags + 0x5e);
    flags = *(unsigned short *)((long long)flags + 0x5c);
    ptr_var_ = &data_18098bc73;
    if (*(undefined **)(handle + 8) != (undefined *)0x0) {
      ptr_var_ = *(undefined **)(handle + 8);
    }
    int_var_ = fopen_s(&stack_ptr_,ptr_var_,&fileOpenModeString);
    stack_ptr_ = stack_ptr_;
    if (int_var_ != 0) {
      stack_ptr_ = (undefined *)0x0;
    }
    stack_ptr_ = &fileHandleData;
    if (stack_ptr_ == (undefined *)0x0) goto label_;
    ptr_var_ = stack_ptr_;
    if (long_var_ != 0) {
      stack_long_ = long_var_;
      system_hardware_003(&stack_ptr_,flags,uint_var_,int_var_);
      ptr_var_ = stack_ptr_;
    }
  }
  fclose(ptr_var_);
label_:
  system_crypto_001(stack_var_ ^ (ulong long)auStack_298);
}
        data_180d48daa = '\x01';
        stack_ptr_ = (undefined *)CONCAT44(stack_ptr_._4_4_,0xc88);
        function_(auStack_228,&systemFunctionData1,&unknown_180a17a68,&systemFunctionData5);
        OutputDebugStringA(auStack_228);
      }
      ptr_var_ = &data_18098bc73;
      if (*(undefined **)(handle + 8) != (undefined *)0x0) {
        ptr_var_ = *(undefined **)(handle + 8);
      }
      system_data_manager_002(global_data_,&systemDataManagerData,ptr_var_);
    }
  }
  cVar3 = handle_system_event(mutex_attr);
  if (cVar3 == '\0') {
    ptr_var_ = &data_18098bc73;
    if (*(undefined **)(handle + 8) != (undefined *)0x0) {
      ptr_var_ = *(undefined **)(handle + 8);
    }
    system_thread_003(&systemThreadData3,ptr_var_);
  }
  else {
    *(unsigned long long *)(mutex_attr + 0x14) = 0;
    *(unsigned long long *)(mutex_attr + 0x1c) = 0;
    *(unsigned long long *)(mutex_attr + 0x24) = 0;
    *(unsigned long long *)(mutex_attr + 0x2c) = 0;
    *(unsigned long long *)(mutex_attr + 0x34) = 0;
    *(unsigned long long *)(mutex_attr + 0x3c) = 0;
    *(unsigned long long *)(mutex_attr + 0x44) = 0;
    *(unsigned long long *)(mutex_attr + 0x4c) = 0;
    uint_var_ = func_0x000180220c90(*(unsigned int *)(mutex_attr + 0x54));
    strcpy_s(mutex_attr + 0x14,系统配置缓冲区大小,uint_var_);
  }
label_:
  system_processor_012(auStack_260);
  system_crypto_001(stack_var_ ^ (ulong long)auStack_2f8);
}
      data_180d48dab = '\x01';
      stack_var_ = 0xac7;
      function_(auStack_218,&systemFunctionData1,&systemFunctionData6,&systemFunctionData5);
      OutputDebugStringA(auStack_218);
    }
  }
  else {
    system_thread_003(&unknown_180a17a38);
  }
  system_crypto_001(stack_var_ ^ (ulong long)auStack_248);
}
bool handle_system_event(unsigned long long *handle)
{
  int int_var_;
  unsigned long long flags;
  unsigned long long uint_var_;
  int_var_ = *(int *)((long long)handle + 0x54);
  if (int_var_ == 0x27) {
    if (handle[1] == 0) {
      flags = 0;
      uint_var_ = 0;
    }
    else {
      flags = function_(global_data_,handle[1],3);
      uint_var_ = handle[1];
    }
    memcpy(flags,*handle,uint_var_);
  }
  if (int_var_ != 0x28) {
    if (int_var_ == 0x29) {
      if (handle[1] == 0) {
        flags = 0;
        uint_var_ = 0;
      }
      else {
        flags = function_(global_data_,handle[1],3);
        uint_var_ = handle[1];
      }
      memcpy(flags,*handle,uint_var_);
    }
    int_var_ = func_0x0001800ab000(*(unsigned int *)((long long)handle + 0x54));
    return int_var_ != 0;
  }
  if (handle[1] == 0) {
    flags = 0;
    uint_var_ = 0;
  }
  else {
    flags = function_(global_data_,handle[1],3);
    uint_var_ = handle[1];
  }
  memcpy(flags,*handle,uint_var_);
}
unsigned long long process_system_request(unsigned long long *handle)
{
  unsigned char auVar1 [16];
  int int_var_;
  uint uint_var_;
  float *pfVar4;
  ulong long uint_var_;
  ushort *ptr_var_;
  float *pfVar7;
  ulong long uint_var_;
  byte *byte_ptr_var_;
  float fVar10;
  float fVar11;
  unsigned char auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  switch(*(int *)((long long)handle + 0x54) + -1) {
  case 0:
  case 1:
    byte_ptr_var_ = (byte *)*handle;
    pfVar4 = (float *)((ulong long)handle[1] >> 2);
    if (0 < (int)pfVar4) {
      uint_var_ = (ulong long)pfVar4 & 0xffffffff;
      do {
        fVar14 = (float)byte_ptr_var_[1] * 0.007843138 - 1.0;
        fVar13 = (float)*byte_ptr_var_ * 0.007843138 - 1.0;
        fVar15 = (float)byte_ptr_var_[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *byte_ptr_var_ = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        byte_ptr_var_[1] = (byte)(int)((fVar10 * fVar14 + 1.0) * 127.5);
        int_var_ = (int)((fVar10 * fVar15 + 1.0) * 127.5);
        byte_ptr_var_[2] = (byte)int_var_;
        byte_ptr_var_ = byte_ptr_var_ + 4;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
      return CONCAT71((uint7)(uint3)((uint)int_var_ >> 8),1);
    }
    break;
  default:
    return 0;
  case 8:
    ptr_var_ = (ushort *)*handle;
    pfVar4 = (float *)((ulong long)handle[1] >> 3);
    if (0 < (int)pfVar4) {
      uint_var_ = (ulong long)pfVar4 & 0xffffffff;
      do {
        fVar14 = (float)ptr_var_[1] * 3.0518044e-05 - 1.0;
        fVar13 = (float)*ptr_var_ * 3.0518044e-05 - 1.0;
        fVar15 = (float)ptr_var_[2] * 3.0518044e-05 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *ptr_var_ = (ushort)(int)((fVar10 * fVar13 + 1.0) * 32767.5);
        ptr_var_[1] = (ushort)(int)((fVar10 * fVar14 + 1.0) * 32767.5);
        int_var_ = (int)((fVar10 * fVar15 + 1.0) * 32767.5);
        ptr_var_[2] = (ushort)int_var_;
        ptr_var_ = ptr_var_ + 4;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
      return CONCAT71((uint7)(uint3)((uint)int_var_ >> 8),1);
    }
    break;
  case 0x1f:
    pfVar4 = (float *)*handle;
    if (0 < (int)((ulong long)handle[1] / 0xc)) {
      uint_var_ = (ulong long)handle[1] / 0xc & 0xffffffff;
      do {
        fVar13 = (*pfVar4 + *pfVar4) - 1.0;
        fVar14 = (pfVar4[1] + pfVar4[1]) - 1.0;
        fVar15 = (pfVar4[2] + pfVar4[2]) - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pfVar4 = (fVar10 * fVar13 + 1.0) * 0.5;
        pfVar4[1] = (fVar10 * fVar14 + 1.0) * 0.5;
        pfVar4[2] = (fVar10 * fVar15 + 1.0) * 0.5;
        pfVar4 = pfVar4 + 3;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
      return CONCAT71((int7)((ulong long)pfVar4 >> 8),1);
    }
    break;
  case CONFIG_PATH_BUFFER_SIZE:
    uint_var_ = handle[1];
    pfVar7 = (float *)*handle;
    pfVar4 = (float *)(uint_var_ >> 4);
    if (0 < (int)pfVar4) {
      uint_var_ = (ulong long)pfVar4 & 0xffffffff;
      do {
        fVar13 = (*pfVar7 + *pfVar7) - 1.0;
        fVar14 = (pfVar7[1] + pfVar7[1]) - 1.0;
        fVar15 = (pfVar7[2] + pfVar7[2]) - 1.0;
        fVar10 = fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pfVar7 = (fVar10 * fVar13 + 1.0) * 0.5;
        pfVar7[2] = (fVar15 * fVar10 + 1.0) * 0.5;
        pfVar7[1] = (fVar10 * fVar14 + 1.0) * 0.5;
        pfVar7 = pfVar7 + 4;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
      return CONCAT71((uint7)(uint_var_ >> 0xc),1);
    }
    break;
  case 0x26:
    ptr_var_ = (ushort *)*handle;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = handle[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
    uint_var_ = (ulong long)handle[1] / 6;
    if (0 < (int)uint_var_) {
      uint_var_ = uint_var_ & 0xffffffff;
      do {
        fVar14 = (float)ptr_var_[1] * 0.007843138 - 1.0;
        fVar13 = (float)*ptr_var_ * 0.007843138 - 1.0;
        fVar15 = (float)ptr_var_[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *ptr_var_ = (ushort)(int)((fVar13 * fVar10 + 1.0) * 127.5);
        ptr_var_[1] = (ushort)(int)((fVar14 * fVar10 + 1.0) * 127.5);
        int_var_ = (int)((fVar15 * fVar10 + 1.0) * 127.5);
        ptr_var_[2] = (ushort)int_var_;
        ptr_var_ = ptr_var_ + 3;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
      return CONCAT71((uint7)(uint3)((uint)int_var_ >> 8),1);
    }
    break;
  case 0x27:
  case 0x28:
    byte_ptr_var_ = (byte *)*handle;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = handle[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar12,0);
    uint_var_ = (ulong long)handle[1] / 3;
    if (0 < (int)uint_var_) {
      uint_var_ = uint_var_ & 0xffffffff;
      do {
        fVar14 = (float)byte_ptr_var_[1] * 0.007843138 - 1.0;
        fVar13 = (float)*byte_ptr_var_ * 0.007843138 - 1.0;
        fVar15 = (float)byte_ptr_var_[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *byte_ptr_var_ = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        byte_ptr_var_[1] = (byte)(int)((fVar10 * fVar14 + 1.0) * 127.5);
        uint_var_ = (uint)((fVar10 * fVar15 + 1.0) * 127.5);
        pfVar4 = (float *)(ulong long)uint_var_;
        byte_ptr_var_[2] = (byte)uint_var_;
        byte_ptr_var_ = byte_ptr_var_ + 3;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
  }
  return CONCAT71((int7)((ulong long)pfVar4 >> 8),1);
}
unsigned long long handle_system_callback(unsigned long long *handle)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  uint uint_var_;
  float *pfVar14;
  float *pfVar15;
  int int_var_;
  int int_var_;
  int int_var_;
  ulong long uint_var_;
  long long long_var_;
  double dVar21;
  if (*(int *)((long long)handle + 0x54) == CONFIG_PATH_BUFFER_SIZE) {
    pfVar14 = (float *)*handle;
    int_var_ = 0;
    dVar21 = 0.0;
    long_var_ = 0;
    int_var_ = 0;
    int_var_ = (int)((ulong long)handle[1] / 0xc);
    pfVar15 = pfVar14;
    if (3 < int_var_) {
      uint_var_ = (int_var_ - 4U >> 2) + 1;
      uint_var_ = (ulong long)uint_var_;
      long_var_ = (ulong long)uint_var_ * 4;
      int_var_ = uint_var_ * 4;
      do {
        pfVar1 = pfVar15 + 3;
        fVar12 = *pfVar15;
        pfVar2 = pfVar15 + 6;
        pfVar3 = pfVar15 + 7;
        pfVar4 = pfVar15 + 5;
        pfVar5 = pfVar15 + 9;
        pfVar6 = pfVar15 + 10;
        pfVar7 = pfVar15 + 4;
        pfVar8 = pfVar15 + 1;
        pfVar9 = pfVar15 + 2;
        pfVar10 = pfVar15 + 8;
        pfVar11 = pfVar15 + 0xb;
        pfVar15 = pfVar15 + 0xc;
        dVar21 = dVar21 + (double)*pfVar1 * 0.2126 + (double)fVar12 * 0.2126 +
                          (double)*pfVar2 * 0.2126 + (double)*pfVar5 * 0.2126 +
                          (double)*pfVar6 * 0.7152 +
                          (double)*pfVar3 * 0.7152 + (double)*pfVar7 * 0.7152 +
                          (double)*pfVar8 * 0.7152 +
                          (double)*pfVar4 * 0.0722 + (double)*pfVar9 * 0.0722 +
                          (double)*pfVar10 * 0.0722 + (double)*pfVar11 * 0.0722;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
    if (int_var_ < int_var_) {
      pfVar15 = pfVar15 + 2;
      uint_var_ = (ulong long)(uint)(int_var_ - int_var_);
      long_var_ = long_var_ + uint_var_;
      do {
        pfVar1 = pfVar15 + -1;
        pfVar2 = pfVar15 + -2;
        fVar12 = *pfVar15;
        pfVar15 = pfVar15 + 3;
        dVar21 = dVar21 + (double)*pfVar1 * 0.7152 + (double)*pfVar2 * 0.2126 +
                          (double)fVar12 * 0.0722;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)long_var_);
    if (3 < int_var_) {
      uint_var_ = (int_var_ - 4U >> 2) + 1;
      uint_var_ = (ulong long)uint_var_;
      int_var_ = uint_var_ * 4;
      do {
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14[1] = (float)((double)pfVar14[1] * dVar21);
        pfVar14[2] = (float)((double)pfVar14[2] * dVar21);
        pfVar14[3] = (float)((double)pfVar14[3] * dVar21);
        pfVar14[4] = (float)((double)pfVar14[4] * dVar21);
        pfVar14[5] = (float)((double)pfVar14[5] * dVar21);
        pfVar14[6] = (float)((double)pfVar14[6] * dVar21);
        pfVar14[7] = (float)((double)pfVar14[7] * dVar21);
        pfVar14[8] = (float)((double)pfVar14[8] * dVar21);
        pfVar14[9] = (float)((double)pfVar14[9] * dVar21);
        pfVar14[10] = (float)((double)pfVar14[10] * dVar21);
        pfVar14[0xb] = (float)((double)pfVar14[0xb] * dVar21);
        pfVar14 = pfVar14 + 0xc;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
    if (int_var_ < int_var_) {
      pfVar14 = pfVar14 + 2;
      uint_var_ = (ulong long)(uint)(int_var_ - int_var_);
      do {
        pfVar14[-2] = (float)((double)pfVar14[-2] * dVar21);
        pfVar14[-1] = (float)((double)pfVar14[-1] * dVar21);
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14 = pfVar14 + 3;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
  }
  else {
    if (*(int *)((long long)handle + 0x54) != 0x21) {
      return 0;
    }
    int_var_ = 0;
    pfVar14 = (float *)*handle;
    dVar21 = 0.0;
    long_var_ = 0;
    int_var_ = 0;
    int_var_ = (int)((ulong long)handle[1] >> 4);
    pfVar15 = pfVar14;
    if (3 < int_var_) {
      uint_var_ = (int_var_ - 4U >> 2) + 1;
      uint_var_ = (ulong long)uint_var_;
      long_var_ = (ulong long)uint_var_ * 4;
      int_var_ = uint_var_ * 4;
      do {
        pfVar1 = pfVar15 + 4;
        fVar12 = *pfVar15;
        pfVar2 = pfVar15 + 8;
        pfVar3 = pfVar15 + 9;
        pfVar4 = pfVar15 + 6;
        pfVar5 = pfVar15 + 0xc;
        pfVar6 = pfVar15 + 0xd;
        pfVar7 = pfVar15 + 5;
        pfVar8 = pfVar15 + 1;
        pfVar9 = pfVar15 + 2;
        pfVar10 = pfVar15 + 10;
        pfVar11 = pfVar15 + 0xe;
        pfVar15 = pfVar15 + STRING_BUFFER_SIZE;
        dVar21 = dVar21 + (double)*pfVar1 * 0.2126 + (double)fVar12 * 0.2126 +
                          (double)*pfVar2 * 0.2126 + (double)*pfVar5 * 0.2126 +
                          (double)*pfVar6 * 0.7152 +
                          (double)*pfVar3 * 0.7152 + (double)*pfVar7 * 0.7152 +
                          (double)*pfVar8 * 0.7152 +
                          (double)*pfVar4 * 0.0722 + (double)*pfVar9 * 0.0722 +
                          (double)*pfVar10 * 0.0722 + (double)*pfVar11 * 0.0722;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
    if (int_var_ < int_var_) {
      pfVar15 = pfVar15 + 2;
      uint_var_ = (ulong long)(uint)(int_var_ - int_var_);
      long_var_ = long_var_ + uint_var_;
      do {
        pfVar1 = pfVar15 + -1;
        pfVar2 = pfVar15 + -2;
        fVar12 = *pfVar15;
        pfVar15 = pfVar15 + 4;
        dVar21 = dVar21 + (double)*pfVar1 * 0.7152 + (double)*pfVar2 * 0.2126 +
                          (double)fVar12 * 0.0722;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)long_var_);
    if (3 < int_var_) {
      uint_var_ = (int_var_ - 4U >> 2) + 1;
      uint_var_ = (ulong long)uint_var_;
      int_var_ = uint_var_ * 4;
      do {
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14[1] = (float)((double)pfVar14[1] * dVar21);
        pfVar14[2] = (float)((double)pfVar14[2] * dVar21);
        pfVar14[4] = (float)((double)pfVar14[4] * dVar21);
        pfVar14[5] = (float)((double)pfVar14[5] * dVar21);
        pfVar14[6] = (float)((double)pfVar14[6] * dVar21);
        pfVar14[8] = (float)((double)pfVar14[8] * dVar21);
        pfVar14[9] = (float)((double)pfVar14[9] * dVar21);
        pfVar14[10] = (float)((double)pfVar14[10] * dVar21);
        pfVar14[0xc] = (float)((double)pfVar14[0xc] * dVar21);
        pfVar14[0xd] = (float)((double)pfVar14[0xd] * dVar21);
        pfVar14[0xe] = (float)((double)pfVar14[0xe] * dVar21);
        pfVar14 = pfVar14 + STRING_BUFFER_SIZE;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
    if (int_var_ < int_var_) {
      pfVar14 = pfVar14 + 2;
      uint_var_ = (ulong long)(uint)(int_var_ - int_var_);
      do {
        pfVar14[-2] = (float)((double)pfVar14[-2] * dVar21);
        pfVar14[-1] = (float)((double)pfVar14[-1] * dVar21);
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14 = pfVar14 + 4;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
  }
  return 1;
}
  data_180c8aa6a = 0;
  *(unsigned int *)(init_result + 0x4c) = 0;
  system_network_001(*(unsigned long long *)(init_result + STRING_BUFFER_SIZE8));
  stack_ptr_ = &g_alternateDataTemplate;
  stack_ptr_ = auStack_38;
  auStack_38[0] = 0;
  stack_var_ = 0x12;
  strcpy_s(auStack_38,CONFIG_PATH_BUFFER_SIZE,&unknown_180a1a918);
  system_network_002();
  stack_ptr_ = &g_threadString4;
  system_crypto_001(stack_var_ ^ (ulong long)auStack_78);
}
        data_180d48e78 = 0;
        global_data_ = 0;
        global_data_ = 0;
        uRam0000000180d48ec8 = 0;
        global_data_ = 3;
        global_data_ = 0;
        system_crypto_002(&unknown_180941dc0);
        system_crypto_003(&data_180d48e24);
      }
      ptr_var_ = (uint *)&data_180d48e30;
      if (uint_var_ < (ulong long)
                  ((*(long long *)(mutex_attr + 0x1c) - *(long long *)(mutex_attr + 0x1a)) / 0xb0)) {
        ptr_var_ = (uint *)(uint_var_ + *(long long *)(mutex_attr + 0x1a));
      }
      if ((*(int *)(init_result0 + 0x48) < global_data_) &&
         (system_crypto_004(&data_180d48e24), global_data_ == -1)) {
        global_data_ = &g_defaultDataTemplate;
        global_data_ = &data_180d48e78;
        global_data_ = 0;
        data_180d48e78 = 0;
        global_data_ = 0;
        global_data_ = 0;
        uRam0000000180d48ec8 = 0;
        global_data_ = 3;
        global_data_ = 0;
        system_crypto_002(&unknown_180941dc0);
        system_crypto_003(&data_180d48e24);
      }
      ptr_var_ = &data_180d48e30;
      if (uint_var_ < (ulong long)
                  ((*(long long *)(flags + 0x1c) - *(long long *)(flags + 0x1a)) / 0xb0)) {
        ptr_var_ = (undefined *)(uint_var_ + *(long long *)(flags + 0x1a));
      }
      if ((((0.0001 <= ABS(*(float *)(ptr_var_ + 0x14) - (float)ptr_var_[5])) ||
           (0.0001 <= ABS(*(float *)(ptr_var_ + 0x18) - (float)ptr_var_[6]))) ||
          (0.0001 <= ABS(*(float *)(ptr_var_ + 0x1c) - (float)ptr_var_[7]))) ||
         (((0.0001 <= ABS(*(float *)(ptr_var_ + STRING_BUFFER_SIZE) - (float)ptr_var_[4]) ||
           (0.0001 <= ABS(*(float *)(ptr_var_ + CONFIG_PATH_BUFFER_SIZE) - (float)ptr_var_[8]))) ||
          ((0.0001 <= ABS(*(float *)(ptr_var_ + 0x24) - (float)ptr_var_[9]) ||
           (0.0001 <= ABS(*(float *)(ptr_var_ + 0x28) - (float)ptr_var_[10]))))))) {
        *ptr_var_ = *ptr_var_ | 8;
      }
      uint_var_ = system_allocator_001(handle,ptr_var_ + 0x88,ptr_var_ + 0x22);
      uint_var_ = uint_var_ + 1;
      uint_var_ = uint_var_ + 0xb0;
      uint_var_ = uint_var_ - 1;
    } while (uint_var_ != 0);
  }
label_:
  return uint_var_ & 0xffffffffffffff00;
}
data_180329eb7:
    int_var_ = _Mtx_unlock(handle + 0x3d8);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    break;
  default:
label_:
    uint_var_ = 1;
    goto label_;
  }
  *flags = (long long)plVar5;
code_r0x000180329ed1:
  bVar8 = (byte)auStackX_20[0];
  goto label_;
}
unsigned long long allocate_system_memory(long long handle,long long *flags,unsigned int *mutex_attr,uint mutex_type)
{
  long long *pinit_result;
  byte bVar2;
  int int_var_;
  unsigned long long *ptr_var_;
  unsigned long long uint_var_;
  long long *plVar6;
  long long long_var_;
  long long *plStackX_18;
  unsigned int auStackX_20 [2];
  long long *plStack_80;
  long long *plStack_78;
  unsigned long long stack_var_;
  long long **pplStack_68;
  long long *plStack_60;
  unsigned char auStack_58 [32];
  stack_var_ = 线程池默认标志;
  uint_var_ = 0;
  bVar2 = *(byte *)(mutex_attr + 2);
  if ((mutex_type >> 1 & 1) != 0) {
    system_ui_003(global_data_,&plStack_78,mutex_attr + 0x14,1);
    ptr_var_ = (unsigned long long *)system_ui_006();
    system_resource_002(*ptr_var_,&plStackX_18);
    if (plStack_80 != (long long *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
    }
    system_resource_003(plStackX_18,&plStack_78);
    *(uint *)(plStackX_18 + CONFIG_PATH_BUFFER_SIZE) = *(uint *)(plStackX_18 + CONFIG_PATH_BUFFER_SIZE) | 系统配置缓冲区大小000000;
    auStackX_20[0] = *mutex_attr;
    pinit_result = (long long *)(handle + 0x3d8);
    plStack_80 = pinit_result;
    int_var_ = _Mtx_lock(pinit_result);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    uint_var_ = function_(global_data_,0x298,8,3);
    plVar6 = (long long *)system_memory_001(uint_var_);
    pplStack_68 = (long long **)CONCAT44(pplStack_68._4_4_,auStackX_20[0]);
    plStack_60 = plVar6;
    system_memory_manager_006(handle + 0x3a8,auStack_58,&pplStack_68);
    int_var_ = _Mtx_unlock(pinit_result);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    *flags = (long long)plVar6;
    uint_var_ = *(unsigned long long *)(handle + 0x2d8);
    pplStack_68 = &plStack_80;
    plStack_80 = plVar6;
    if (plVar6 != (long long *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    function_(uint_var_,&plStack_80);
    *(int *)(handle + 0xb0) = *(int *)(handle + 0xb0) + 1;
    uint_var_ = 1;
    if (plStackX_18 != (long long *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (plStack_78 != (long long *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
  }
  if ((mutex_type >> 2 & 1) == 0) {
    if (((mutex_type >> 1 & 1) == 0) && ((bVar2 & 1) != 0)) {
      long_var_ = system_memory_manager_007(handle,*mutex_attr);
      *flags = long_var_;
      uint_var_ = 1;
    }
  }
  else {
    auStackX_20[0] = *mutex_attr;
    long_var_ = system_memory_manager_007(handle);
    if (long_var_ == 0) {
      *flags = 0;
      uint_var_ = 1;
    }
    else {
      pinit_result = (long long *)(handle + 0x3d8);
      plStackX_18 = pinit_result;
      int_var_ = _Mtx_lock(pinit_result);
      if (int_var_ != 0) {
        __Throw_C_error_std__YAXH_Z(int_var_);
      }
      system_memory_manager_008(handle + 0x3a8,auStackX_20);
      int_var_ = _Mtx_unlock(pinit_result);
      if (int_var_ != 0) {
        __Throw_C_error_std__YAXH_Z(int_var_);
      }
      *flags = long_var_;
      *(unsigned char *)(long_var_ + 0x39) = 1;
      uint_var_ = 1;
    }
  }
  return uint_var_;
}
    data_180d49748 = 0;
    system_memory_002(0x180d496e0);
    system_crypto_002(function_);
    system_crypto_003(&data_180d496d0);
  }
  int_var_ = _Mtx_lock(handle + 0x6e8);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  if ((ulong long)mutex_attr <= *(ulong long *)(handle + 0x160)) {
    for (ptr_var_ = *(uint **)(*(long long *)(handle + 0x6c0) +
                            ((ulong long)flags % (ulong long)*(uint *)(handle + 0x6c8)) * 8);
        ptr_var_ != (uint *)0x0; ptr_var_ = *(uint **)(ptr_var_ + 4)) {
      if (flags == *ptr_var_) goto label_;
    }
    ptr_var_ = *(uint **)(*(long long *)(handle + 0x6c0) + *(long long *)(handle + 0x6c8) * 8);
label_:
    long_var_ = *(long long *)(ptr_var_ + 2);
    init_result = *(long long *)(long_var_ + 8);
    for (ptr_var_ = *(uint **)(init_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(long_var_ + STRING_BUFFER_SIZE)) * 8);
        ptr_var_ != (uint *)0x0; ptr_var_ = *(uint **)(ptr_var_ + 4)) {
      if (mutex_attr == *ptr_var_) {
        long_var_ = *(long long *)(long_var_ + STRING_BUFFER_SIZE);
        goto label_;
      }
    }
    long_var_ = *(long long *)(long_var_ + STRING_BUFFER_SIZE);
    ptr_var_ = *(uint **)(init_result + long_var_ * 8);
label_:
    if ((ptr_var_ != *(uint **)(init_result + long_var_ * 8)) && (long_var_ = *(long long *)(ptr_var_ + 2), long_var_ != 0)
       ) goto label_;
  }
  system_memory_002(0x180d496e0);
  long_var_ = 0x180d496e0;
label_:
  int_var_ = _Mtx_unlock(handle + 0x6e8);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  return long_var_;
}
long long allocate_with_flags(long long handle,uint flags,uint mutex_attr)
{
  long long init_result;
  long long long_var_;
  uint *ptr_var_;
  if ((*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
               0x48) < global_data_) && (system_crypto_004(&data_180d497d0), global_data_ == -1)) {
    system_memory_004(0x180d497e0);
    system_crypto_002(function_);
    system_crypto_003(&data_180d497d0);
  }
  if ((ulong long)mutex_attr <= *(ulong long *)(handle + 0x160)) {
    for (ptr_var_ = *(uint **)(*(long long *)(handle + 0x9f8) +
                            ((ulong long)flags % (ulong long)*(uint *)(handle + 0xa00)) * 8);
        ptr_var_ != (uint *)0x0; ptr_var_ = *(uint **)(ptr_var_ + 4)) {
      if (flags == *ptr_var_) goto label_;
    }
    ptr_var_ = *(uint **)(*(long long *)(handle + 0x9f8) + *(long long *)(handle + 0xa00) * 8);
label_:
    long_var_ = *(long long *)(ptr_var_ + 2);
    init_result = *(long long *)(long_var_ + 8);
    for (ptr_var_ = *(uint **)(init_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(long_var_ + STRING_BUFFER_SIZE)) * 8);
        ptr_var_ != (uint *)0x0; ptr_var_ = *(uint **)(ptr_var_ + 4)) {
      if (mutex_attr == *ptr_var_) {
        long_var_ = *(long long *)(long_var_ + STRING_BUFFER_SIZE);
        goto label_;
      }
    }
    long_var_ = *(long long *)(long_var_ + STRING_BUFFER_SIZE);
    ptr_var_ = *(uint **)(init_result + long_var_ * 8);
label_:
    if ((ptr_var_ != *(uint **)(init_result + long_var_ * 8)) && (*(long long *)(ptr_var_ + 2) != 0)) {
      return *(long long *)(ptr_var_ + 2);
    }
  }
  system_memory_005(0x180d497e0);
  return 0x180d497e0;
}
long long allocate_system_buffer(unsigned long long handle,long long *flags,long long mutex_attr)
{
  long long init_result;
  uint flags;
  ulong long uint_var_;
  unsigned long long uint_var_;
  unsigned long long *ptr_var_;
  uint uint_var_;
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              0x48) < global_data_) {
    system_crypto_004(&data_180d49990);
    if (global_data_ == -1) {
      uint_var_ = function_(global_data_,0x1c8,8,3);
      global_data_ = system_memory_manager_001(uint_var_);
      uint_var_ = function_(global_data_,CONFIG_PATH_BUFFER_SIZE0,8,3);
      global_data_ = system_memory_manager_002(uint_var_);
      ptr_var_ = (unsigned long long *)function_(global_data_,0xf8,8,3);
      system_memory_003(ptr_var_);
      *ptr_var_ = &unknown_180a1b368;
      system_memory_manager_004(ptr_var_);
      global_data_ = ptr_var_;
      global_data_ = function_();
      ptr_var_ = (unsigned long long *)function_(global_data_,0xb0,8,3);
      system_memory_003(ptr_var_);
      *ptr_var_ = &unknown_180a1b3f0;
      global_data_ = ptr_var_;
      global_data_ = system_memory_manager_005();
      global_data_ = (*global_data_)(&data_180c918c0);
      global_data_ = 0;
      system_crypto_003(&data_180d49990);
    }
  }
  uint_var_ = 0;
  uint_var_ = (uint)(flags[1] - *flags >> 3);
  if (uint_var_ != 0) {
    do {
      init_result = *(long long *)(*flags + uint_var_ * 8);
      if (*(int *)(init_result + 8) == *(int *)(mutex_attr + 8)) {
        return init_result;
      }
      flags = (int)uint_var_ + 1;
      uint_var_ = (ulong long)flags;
    } while (flags < uint_var_);
  }
  (**(code **)(**(long long **)(&data_180d48de0 + (ulong long)*(uint *)(mutex_attr + 0x8c) * 8) + 8))();
  return *(long long *)(&data_180d48de0 + (ulong long)*(uint *)(mutex_attr + 0x8c) * 8);
}
unsigned long long
system_allocator_008(unsigned long long handle,long long *flags,unsigned long long *mutex_attr,unsigned int mutex_type,
             unsigned int param_5,unsigned char param_6)
{
  long long init_result;
  ulong long flags;
  long long long_var_;
  unsigned long long uint_var_;
  long long long_var_;
  long long long_var_;
  uint *ptr_var_;
  uint_var_ = 0;
  flags = flags[1] - *flags >> 2;
  if ((int)flags != 0) {
    long_var_ = 0;
    flags = flags & 0xffffffff;
    do {
      ptr_var_ = (uint *)*mutex_attr;
      init_result = *flags;
      long_var_ = (long long)mutex_attr[1] - (long long)ptr_var_ >> 2;
      if (0 < long_var_) {
        do {
          long_var_ = long_var_ >> 1;
          if (ptr_var_[long_var_] < *(uint *)(init_result + long_var_)) {
            ptr_var_ = ptr_var_ + long_var_ + 1;
            long_var_ = long_var_ + (-1 - long_var_);
          }
          long_var_ = long_var_;
        } while (0 < long_var_);
      }
      if ((ptr_var_ == (uint *)mutex_attr[1]) || (*(uint *)(init_result + long_var_) < *ptr_var_)) {
        uint_var_ = allocate_with_flags(handle,*(unsigned int *)(init_result + long_var_),mutex_type);
        system_allocator_002(handle,uint_var_,param_5,mutex_type,param_6);
        uint_var_ = 1;
      }
      long_var_ = long_var_ + 4;
      flags = flags - 1;
    } while (flags != 0);
  }
  return uint_var_;
}
unsigned char check_memory_status(void)
{
  uint in_EAX;
  long long init_result;
  long long long_var_;
  long long long_var_;
  unsigned char unaff_SIL;
  ulong long uint_var_;
  uint *ptr_var_;
  unsigned long long *unaff_R14;
  long long *unaff_R15;
  long_var_ = 0;
  uint_var_ = (ulong long)in_EAX;
  do {
    ptr_var_ = (uint *)*unaff_R14;
    init_result = (long long)unaff_R14[1] - (long long)ptr_var_ >> 2;
    if (0 < init_result) {
      do {
        long_var_ = init_result >> 1;
        if (ptr_var_[long_var_] < *(uint *)(*unaff_R15 + long_var_)) {
          ptr_var_ = ptr_var_ + long_var_ + 1;
          long_var_ = init_result + (-1 - long_var_);
        }
        init_result = long_var_;
      } while (0 < long_var_);
    }
    if ((ptr_var_ == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + long_var_) < *ptr_var_)) {
      allocate_with_flags();
      system_allocator_002();
      unaff_SIL = 1;
    }
    long_var_ = long_var_ + 4;
    uint_var_ = uint_var_ - 1;
  } while (uint_var_ != 0);
  return unaff_SIL;
}
unsigned char validate_memory_allocation(void)
{
  unsigned char unaff_SIL;
  return unaff_SIL;
}
unsigned long long
system_allocator_011(unsigned long long handle,long long *flags,long long *mutex_attr,uint mutex_type,char param_5)
{
  long long init_result;
  long long long_var_;
  uint uint_var_;
  ulong long uint_var_;
  ulong long uint_var_;
  long long long_var_;
  uint uint_var_;
  unsigned long long uint_var_;
  long long long_var_;
  long long init_result0;
  uint_var_ = 0;
  init_result = mutex_attr[1];
  long_var_ = *mutex_attr;
  uint_var_ = flags[1] - *flags >> 3;
  if ((int)uint_var_ != 0) {
    long_var_ = 0;
    uint_var_ = uint_var_ & 0xffffffff;
    do {
      uint_var_ = 0;
      uint_var_ = (uint)(init_result - long_var_ >> 3);
      if (uint_var_ != 0) {
        do {
          if (*(int *)(*(long long *)(*flags + long_var_) + 8) ==
              *(int *)(*(long long *)(*mutex_attr + uint_var_ * 8) + 8)) goto label_;
          uint_var_ = (int)uint_var_ + 1;
          uint_var_ = (ulong long)uint_var_;
        } while (uint_var_ < uint_var_);
      }
      long_var_ = *(long long *)(long_var_ + *flags);
      *(uint *)(long_var_ + STRING_BUFFER_SIZE) = *(uint *)(long_var_ + STRING_BUFFER_SIZE) | mutex_type;
      if (((param_5 != '\0') && (*(int *)(long_var_ + 0x8c) == 2)) &&
         (uint_var_ = *(long long *)(long_var_ + 0xc0) - *(long long *)(long_var_ + 0xb8) >> 3, (int)uint_var_ != 0))
      {
        init_result0 = 0;
        uint_var_ = uint_var_ & 0xffffffff;
        do {
          system_allocator_003(handle,*(unsigned long long *)(*(long long *)(long_var_ + 0xb8) + init_result0),mutex_type,
                        param_5);
          init_result0 = init_result0 + 8;
          uint_var_ = uint_var_ - 1;
        } while (uint_var_ != 0);
      }
      uint_var_ = 1;
label_:
      long_var_ = long_var_ + 8;
      uint_var_ = uint_var_ - 1;
    } while (uint_var_ != 0);
  }
  return uint_var_;
}
unsigned char allocate_with_mutex(unsigned long long handle,unsigned long long flags,long long *mutex_attr)
{
  long long init_result;
  uint flags;
  ulong long in_RAX;
  ulong long uint_var_;
  long long long_var_;
  uint unaff_EDI;
  unsigned char in_R10B;
  long long *unaff_R13;
  uint unaff_R14D;
  ulong long uint_var_;
  long long *in_stack_00000060;
  char in_stack_00000070;
  long_var_ = 0;
  uint_var_ = in_RAX & 0xffffffff;
  do {
    uint_var_ = 0;
    if (unaff_EDI != 0) {
      do {
        if (*(int *)(*(long long *)(*unaff_R13 + long_var_) + 8) ==
            *(int *)(*(long long *)(*mutex_attr + uint_var_ * 8) + 8)) goto label_;
        flags = (int)uint_var_ + 1;
        uint_var_ = (ulong long)flags;
      } while (flags < unaff_EDI);
    }
    init_result = *(long long *)(long_var_ + *unaff_R13);
    *(uint *)(init_result + STRING_BUFFER_SIZE) = *(uint *)(init_result + STRING_BUFFER_SIZE) | unaff_R14D;
    if (((in_stack_00000070 != '\0') && (*(int *)(init_result + 0x8c) == 2)) &&
       (uint_var_ = *(long long *)(init_result + 0xc0) - *(long long *)(init_result + 0xb8) >> 3, (int)uint_var_ != 0)) {
      uint_var_ = uint_var_ & 0xffffffff;
      do {
        system_allocator_003();
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
    in_R10B = 1;
label_:
    long_var_ = long_var_ + 8;
    uint_var_ = uint_var_ - 1;
    mutex_attr = in_stack_00000060;
    if (uint_var_ == 0) {
      return in_R10B;
    }
  } while( true );
}
unsigned char check_allocation_complete(void)
{
  unsigned char in_R10B;
  return in_R10B;
}
unsigned long long
system_allocator_014(unsigned long long handle,long long *flags,unsigned long long *mutex_attr,unsigned int mutex_type,
             uint param_5)
{
  ulong long uint_var_;
  long long long_var_;
  long long long_var_;
  long long long_var_;
  long long long_var_;
  unsigned long long uint_var_;
  uint *ptr_var_;
  uint_var_ = 0;
  uint_var_ = flags[1] - *flags >> 2;
  if ((int)uint_var_ != 0) {
    long_var_ = 0;
    uint_var_ = uint_var_ & 0xffffffff;
    do {
      ptr_var_ = (uint *)*mutex_attr;
      long_var_ = *flags;
      long_var_ = (long long)mutex_attr[1] - (long long)ptr_var_ >> 2;
      if (0 < long_var_) {
        do {
          long_var_ = long_var_ >> 1;
          if (ptr_var_[long_var_] < *(uint *)(long_var_ + long_var_)) {
            ptr_var_ = ptr_var_ + long_var_ + 1;
            long_var_ = long_var_ + (-1 - long_var_);
          }
          long_var_ = long_var_;
        } while (0 < long_var_);
      }
      if ((ptr_var_ == (uint *)mutex_attr[1]) || (*(uint *)(long_var_ + long_var_) < *ptr_var_)) {
        long_var_ = system_allocator_006(handle,*(unsigned int *)(long_var_ + long_var_),mutex_type);
        uint_var_ = 1;
        *(uint *)(long_var_ + 8) = *(uint *)(long_var_ + 8) | param_5;
      }
      long_var_ = long_var_ + 4;
      uint_var_ = uint_var_ - 1;
    } while (uint_var_ != 0);
  }
  return uint_var_;
}
unsigned char validate_buffer_allocation(void)
{
  uint in_EAX;
  long long init_result;
  long long long_var_;
  long long long_var_;
  unsigned char unaff_SIL;
  ulong long uint_var_;
  uint *ptr_var_;
  unsigned long long *unaff_R14;
  long long *unaff_R15;
  uint in_stack_00000070;
  long_var_ = 0;
  uint_var_ = (ulong long)in_EAX;
  do {
    ptr_var_ = (uint *)*unaff_R14;
    init_result = (long long)unaff_R14[1] - (long long)ptr_var_ >> 2;
    if (0 < init_result) {
      do {
        long_var_ = init_result >> 1;
        if (ptr_var_[long_var_] < *(uint *)(*unaff_R15 + long_var_)) {
          ptr_var_ = ptr_var_ + long_var_ + 1;
          long_var_ = init_result + (-1 - long_var_);
        }
        init_result = long_var_;
      } while (0 < long_var_);
    }
    if ((ptr_var_ == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + long_var_) < *ptr_var_)) {
      init_result = system_allocator_006();
      unaff_SIL = 1;
      *(uint *)(init_result + 8) = *(uint *)(init_result + 8) | in_stack_00000070;
    }
    long_var_ = long_var_ + 4;
    uint_var_ = uint_var_ - 1;
  } while (uint_var_ != 0);
  return unaff_SIL;
}
unsigned char check_memory_bounds(void)
{
  unsigned char unaff_SIL;
  return unaff_SIL;
}
  data_1dc4331ba = data_1dc4331ba + unaff_BL;
  uint_var_ = in(uint_var_);
  char_ptr_var_ = (char *)((ulong long)uint_var_ + 0x1c0042ed);
  *char_ptr_var_ = *char_ptr_var_ + (char)unaff_RDI + '\x04';
  out(uint_var_,(char)uint_var_);
  char_ptr_var_ = (char *)((ulong long)uint_var_ - 0x12);
  *char_ptr_var_ = *char_ptr_var_ + (char)flags;
  char_ptr_var_ = (code *)swi(3);
  (*char_ptr_var_)();
  return;
}
      data_180d499e8 = 0;
      global_data_ = 6;
      strcpy_s(&data_180d499e8,CONFIG_PATH_BUFFER_SIZE0,&data_180a3c074,str_len_param,uint_var_);
      system_crypto_002(function_);
      system_crypto_003(&data_180d499c8);
    }
  }
  (**(code **)(*global_data_ + 0x70))(global_data_,&data_180d499d0);
  return;
}
unsigned int
system_finalizer_005(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *char_ptr_var_;
  unsigned int flags;
  unsigned long long uint_var_;
  undefined *stack_ptr_;
  long long stack_long_;
  char_ptr_var_ = *(code **)(*global_data_ + 0x70);
  uint_var_ = system_ui_005(&stack_ptr_,&unknown_180a02fc8,mutex_attr,mutex_type,0,线程池默认标志);
  flags = (*char_ptr_var_)(global_data_,uint_var_,mutex_attr,mutex_type,1);
  stack_ptr_ = &g_threadString2;
  if (stack_long_ != 0) {
    handle_system_error();
  }
  return flags;
}
unsigned int
system_finalizer_006(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *char_ptr_var_;
  unsigned int flags;
  unsigned long long uint_var_;
  undefined *stack_ptr_;
  long long stack_long_;
  char_ptr_var_ = *(code **)(*global_data_ + 0x70);
  uint_var_ = system_ui_005(&stack_ptr_,&unknown_180a02fa0,mutex_attr,mutex_type,0,线程池默认标志);
  flags = (*char_ptr_var_)(global_data_,uint_var_,mutex_attr,mutex_type,1);
  stack_ptr_ = &g_threadString2;
  if (stack_long_ != 0) {
    handle_system_error();
  }
  return flags;
}
unsigned int
system_finalizer_007(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *char_ptr_var_;
  unsigned int flags;
  unsigned long long uint_var_;
  unsigned long long uint_var_;
  undefined *stack_ptr_;
  long long stack_long_;
  uint_var_ = 线程池默认标志;
  char_ptr_var_ = *(code **)(*global_data_ + 0x70);
  uint_var_ = system_cleanup_007(&stack_ptr_);
  flags = (*char_ptr_var_)(global_data_,uint_var_,mutex_attr,mutex_type,uint_var_);
  stack_ptr_ = &g_threadString2;
  if (stack_long_ != 0) {
    handle_system_error();
  }
  return flags;
}
    data_180d49c08 = 0;
    if (handle != 0) {
      long_var_ = -1;
      do {
        long_var_ = long_var_ + 1;
      } while (*(char *)(handle + long_var_) != '\0');
      global_data_ = (unsigned int)long_var_;
      strcpy_s(&data_180d49c08,STRING_BUFFER_SIZE0,handle);
    }
    system_crypto_002(function_);
    system_crypto_003(&data_180d49d08);
  }
  uint_var_ = function_(global_data_,0xe0,8,3,uint_var_);
  plStackX_10 = alStack_30;
  stack_ptr_ = &unknown_18045f210;
  stack_ptr_ = &unknown_18045f200;
  pinit_result = (long long *)function_(uint_var_,alStack_30);
  plStackX_18 = pinit_result;
  if (pinit_result != (long long *)0x0) {
    (**(code **)(*pinit_result + 0x28))(pinit_result);
  }
  uint_var_ = global_data_;
  pplStackX_20 = &plStackX_10;
  plStackX_10 = pinit_result;
  if (pinit_result != (long long *)0x0) {
    (**(code **)(*pinit_result + 0x28))(pinit_result);
  }
  register_event_callback(uint_var_,&plStackX_10);
  if (pinit_result != (long long *)0x0) {
    (**(code **)(*pinit_result + 0x38))(pinit_result);
  }
  return;
}
  data_180c95f28 = 1;
  global_data_ = STRING_BUFFER_SIZE0;
  global_data_ = &g_threadString2;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = &g_threadString2;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  data_180c92588 = 1;
  global_data_ = 0;
  global_data_ = 0;
  system_finalizer_009();
  init_result = 0x180c95bf8;
  long_var_ = 0x17;
  do {
    func_0x00018013d940(init_result);
    init_result = init_result + STRING_BUFFER_SIZE;
    long_var_ = long_var_ + -1;
  } while (long_var_ != 0);
  data_180c95bf0 = 0;
  _Mtx_init_in_situ(0x180c95d70,2,mutex_attr,mutex_type,uint_var_);
  global_data_ = 0xffffffff;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0xffdc;
  data_180c95dd8 = 1;
  system_finalizer_008(&data_180c924d0);
  global_data_ = 3;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  data_180c95fe8 = 1;
  global_data_ = 0;
  global_data_ = 0;
  data_180c96140 = 1;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 3;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 3;
  data_180c96100 = 1;
  function_(0x180c95de0);
  data_180c96210 = 1;
  global_data_ = 3;
  global_data_ = 系统配置缓冲区大小000000;
  global_data_ = 0x3f800000;
  global_data_ = 0;
  global_data_ = 1;
  global_data_ = &data_180be0000;
  global_data_ = 0;
  data_180c961d8 = 1;
  global_data_ = 0;
  global_data_ = 3;
  global_data_ = 0;
  uRam0000000180c961b8 = 0;
  global_data_ = 0;
  data_180c961a0 = 1;
  global_data_ = 3;
  global_data_ = 系统配置缓冲区大小000000;
  global_data_ = 0x3f800000;
  global_data_ = 0;
  global_data_ = 1;
  global_data_ = &data_180be0000;
  global_data_ = 4;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 3;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  data_180c96068 = 1;
  global_data_ = 0;
  data_180c96048 = 1;
  global_data_ = 0;
  data_180c96028 = 1;
  global_data_ = 0;
  data_180c96008 = 1;
  global_data_ = 0;
  data_180c95fc0 = 1;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 3;
  uRam0000000180c95f98 = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 3;
  uRam0000000180c95f78 = 0;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 4;
  global_data_ = 系统配置缓冲区大小000000;
  global_data_ = 0x3f800000;
  global_data_ = 0;
  global_data_ = 1;
  global_data_ = &data_180be0000;
  data_180c95ef0 = 1;
  global_data_ = 3;
  global_data_ = 0;
  global_data_ = 0;
  global_data_ = 0;
  data_180c95ec8 = 1;
  data_180c96098 = 1;
  global_data_ = 0;
  data_180c960b8 = 1;
  return;
}
    data_180c82845 = '\x01';
    long_var_ = system_thread_manager_004(&stack_ptr_,global_data_ + 0x2c0);
    ptr_var_ = &data_18098bc73;
    if (*(undefined **)(long_var_ + 8) != (undefined *)0x0) {
      ptr_var_ = *(undefined **)(long_var_ + 8);
    }
    (**(code **)(init_result + 0x330))(*(unsigned int *)(global_data_ + STRING_BUFFER_SIZE),ptr_var_);
    stack_ptr_ = &g_threadString2;
    if (stack_long_ != 0) {
      handle_system_error();
    }
    stack_long_ = 0;
    stack_var_ = 0;
    stack_ptr_ = &g_threadString4;
  }
  plVar2 = (long long *)*handle;
  if (plVar2 != (long long *)0x0) {
    *(unsigned char *)((long long)plVar2 + 0xdd) = 0;
    (**(code **)(*plVar2 + 0xc0))();
    plStackX_8 = (long long *)*handle;
    *handle = 0;
    if (plStackX_8 != (long long *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  *(float *)(global_data_ + CONFIG_PATH_BUFFER_SIZE0) = 1.0 / (float)(int)handle[1];
  stack_ptr_ = &g_threadString2;
  if (stack_ptr_ != (undefined *)0x0) {
    handle_system_error();
  }
  return;
}
unsigned long long * function_(unsigned long long *handle,int flags)
{
  long long *pinit_result;
  int int_var_;
  unsigned long long uint_var_;
  long long long_var_;
  int int_var_;
  unsigned long long *ptr_var_;
  ulong long uint_var_;
  long long long_var_;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  *handle = &unknown_180a1a2f0;
  long_var_ = 0;
  handle[1] = 0;
  handle[2] = 0;
  handle[3] = 0;
  *(unsigned int *)(handle + 4) = 3;
  *handle = &unknown_180a2fc20;
  handle[0xd] = 0;
  handle[0xe] = 0;
  handle[0xf] = 0;
  handle[STRING_BUFFER_SIZE] = 0;
  handle[0x11] = 0;
  handle[0x12] = 0;
  handle[0x13] = 0;
  handle[0x14] = 0;
  handle[0x15] = 0;
  handle[0x16] = 0;
  handle[0x17] = 0;
  handle[0x18] = 0;
  handle[0x19] = 0;
  handle[0x1a] = 0;
  handle[0x1b] = 0;
  handle[0x1c] = 0;
  handle[0x1d] = 0;
  handle[0x1e] = 0;
  handle[0x1f] = 0;
  handle[CONFIG_PATH_BUFFER_SIZE] = 0;
  handle[0x21] = 0;
  handle[0x22] = 0;
  handle[0x23] = 0;
  handle[0x24] = 0;
  handle[0x25] = 0;
  handle[0x26] = 0;
  handle[0x27] = 0;
  handle[0x28] = 0;
  handle[0x29] = 0;
  handle[0x2a] = 0;
  handle[0x2b] = 0;
  handle[0x2c] = 0;
  handle[0x2d] = 0;
  handle[0x2e] = 0;
  handle[0x2f] = 0;
  pinit_result = handle + 0x31;
  *pinit_result = 0;
  handle[0x32] = 0;
  handle[0x33] = 0;
  *(unsigned int *)(handle + 0x34) = 3;
  ptr_var_ = handle + 0x35;
  long_var_ = 8;
  function_(ptr_var_,0x28,8,&unknown_1804ce1a0,function_);
  _Mtx_init_in_situ(handle + 0x5d,字符串缓冲区大小2);
  int_var_ = func_0x0001804ca2d0(&data_180c95fc8);
  if (flags < int_var_) {
    int_var_ = flags;
  }
  *(int *)(handle + 0x67) = int_var_;
  handle[0x11] = (long long)int_var_;
  function_(handle + 0xd);
  handle[0x16] = (long long)*(int *)(handle + 0x67);
  if (handle[0x12] != 0) {
    handle_system_error();
  }
  handle[0x12] = 0;
  handle[0x14] = 1;
  handle[0x13] = 0;
  handle[0x15] = 0xffffffff;
  uint_var_ = function_(global_data_,(long long)*(int *)(handle + 0x67) * 0x48,0x18);
  handle[0x12] = uint_var_;
  handle[0x1b] = (long long)*(int *)(handle + 0x67);
  if (handle[0x17] != 0) {
    handle_system_error();
  }
  handle[0x17] = 0;
  handle[0x19] = 1;
  handle[0x18] = 0;
  handle[0x1a] = 0xffffffff;
  uint_var_ = function_(global_data_,(long long)*(int *)(handle + 0x67) * 0xc0,0x18);
  handle[0x17] = uint_var_;
  handle[0x2a] = (long long)*(int *)(handle + 0x67);
  if (handle[0x26] == 0) {
    handle[0x26] = 0;
    handle[0x28] = 1;
    handle[0x27] = 0;
    handle[0x29] = 0xffffffff;
    uint_var_ = function_(global_data_,(long long)*(int *)(handle + 0x67) << 4,0x18);
    handle[0x26] = uint_var_;
    handle[CONFIG_PATH_BUFFER_SIZE] = (long long)*(int *)(handle + 0x67);
    function_(handle + 0x1c);
    handle[0x2f] = (long long)*(int *)(handle + 0x67);
    if (handle[0x2b] != 0) {
      handle_system_error();
    }
    handle[0x2b] = 0;
    handle[0x2d] = 1;
    handle[0x2c] = 0;
    handle[0x2e] = 0xffffffff;
    uint_var_ = function_(global_data_,(long long)*(int *)(handle + 0x67) << 4,0x18);
    handle[0x2b] = uint_var_;
    do {
      ptr_var_[4] = (long long)*(int *)(handle + 0x67);
      function_(ptr_var_);
      ptr_var_ = ptr_var_ + 5;
      long_var_ = long_var_ + -1;
    } while (long_var_ != 0);
    handle[0x25] = (long long)*(int *)(handle + 0x67);
    if (handle[0x21] == 0) {
      handle[0x21] = 0;
      handle[0x23] = 1;
      handle[0x22] = 0;
      handle[0x24] = 0xffffffff;
      uint_var_ = function_(global_data_,(long long)*(int *)(handle + 0x67) * 0x88,0x18);
      handle[0x21] = uint_var_;
      uint_var_ = (ulong long)*(int *)(handle + 0x67);
      long_var_ = *pinit_result;
      if ((ulong long)(handle[0x33] - long_var_ >> 3) < uint_var_) {
        if (uint_var_ != 0) {
          long_var_ = function_(global_data_,uint_var_ * 8,*(unsigned char *)(handle + 0x34));
          long_var_ = *pinit_result;
        }
        if (long_var_ != handle[0x32]) {
          memmove(long_var_,long_var_,handle[0x32] - long_var_);
        }
        if (long_var_ != 0) {
          handle_system_error();
        }
        *pinit_result = long_var_;
        handle[0x32] = long_var_;
        handle[0x33] = long_var_ + uint_var_ * 8;
      }
      int_var_ = *(int *)(global_data_ + 0xe00) + -1;
      int_var_ = 0;
      if ((-1 < int_var_) && (int_var_ = int_var_, 3 < int_var_)) {
        int_var_ = 3;
      }
      fVar15 = (float)int_var_ * 0.33333334;
      fVar14 = fVar15 * 10.05 + 4.9500003;
      fVar9 = fVar15 * 2.9999998 + 4.5;
      fVar12 = fVar14 + fVar9;
      fVar9 = fVar12 + fVar9;
      fVar13 = fVar15 * 13.5 + 4.5;
      fVar11 = fVar9 + fVar13;
      fVar13 = fVar13 + fVar11;
      fVar10 = fVar15 * 37.5 + 12.5 + fVar13;
      fVar15 = fVar15 * 45.0 + 15.0 + fVar10;
      *(float *)(handle + 0x68) = fVar14 * fVar14;
      *(float *)((long long)handle + 0x344) = fVar12 * fVar12;
      *(float *)(handle + 0x69) = fVar9 * fVar9;
      *(float *)((long long)handle + 0x34c) = fVar11 * fVar11;
      *(float *)(handle + 0x6a) = fVar13 * fVar13;
      *(float *)((long long)handle + 0x354) = fVar10 * fVar10;
      *(float *)(handle + 0x6b) = fVar15 * fVar15;
      *(unsigned int *)((long long)handle + 0x35c) = 0x7f7fffff;
      *(unsigned int *)((long long)handle + 0x33c) = 0;
      *(unsigned int *)(handle + 0x30) = 0;
      return handle;
    }
    handle_system_error();
  }
  handle_system_error();
}
unsigned long long initialize_graphics_context(unsigned long long handle,ulong long flags)
{
  function_();
  if ((flags & 1) != 0) {
    free(handle,0x360);
  }
  return handle;
}
      data_180c91d14 = 1;
    }
    else {
      uint_var_ = (ulong long)data_180c91d14;
    }
    UNLOCK();
    if (bVar9) {
      applStackX_8[0] = aplStackX_18;
      aplStackX_18[0] = global_data_;
      if (global_data_ != (long long *)0x0) {
        (**(code **)(*global_data_ + 0x28))();
      }
      uint_var_ = function_(uint_var_,aplStackX_18);
    }
  }
  return uint_var_;
}
    data_180d49f6c = '\0';
    system_crypto_003(&data_180d49f68);
  }
  flags = *(unsigned long long *)(*(long long *)(*(long long *)(handle + 0x8a8) + 0x260) + CONFIG_PATH_BUFFER_SIZE8);
  ptr_var_ = (unsigned int *)function_(flags,0,flags);
  stack_var_ = *ptr_var_;
  stack_var_ = ptr_var_[1];
  stack_var_ = ptr_var_[2];
  stack_var_ = ptr_var_[3];
  fVar4 = *(float *)(flags + 系统配置缓冲区大小0);
  fVar5 = *(float *)(flags + 系统配置缓冲区大小4);
  fVar6 = *(float *)(flags + 系统配置缓冲区大小8);
  stack_var_ = *(unsigned int *)(flags + 系统配置缓冲区大小c);
  fVar18 = 1e+08;
  fVar13 = 1e+08;
  fStack_180 = 1e+08;
  fStack_158 = 1e+08;
  fStack_154 = 1e+08;
  fStack_150 = 1e+08;
  stack_var_ = 0;
  fStack_148 = -1e+08;
  fStack_144 = -1e+08;
  fStack_140 = -1e+08;
  stack_var_ = 0;
  int_var_ = *(char *)(handle + 0x858) + -1;
  init_result1 = (long long)int_var_;
  fVar14 = -1e+08;
  fVar15 = -1e+08;
  fVar16 = -1e+08;
  uint_var_ = 0;
  uint_var_ = 0;
  if (-1 < int_var_) {
    stack_var_ = 0x7f7fffff;
    stack_var_ = 0x7f7fffff;
    init_result2 = init_result1 * 0x30;
    fStack_108 = fVar4;
    fStack_104 = fVar5;
    fStack_100 = fVar6;
    do {
      init_result0 = *(long long *)(handle + 0x850) + init_result2;
      cVar1 = *(char *)(init_result0 + 0x2c);
      ptr_var_ = (unsigned int *)function_(flags,cVar1,flags);
      stack_var_ = *ptr_var_;
      stack_var_ = ptr_var_[1];
      stack_var_ = ptr_var_[2];
      stack_var_ = ptr_var_[3];
      pfVar9 = (float *)(flags + ((long long)cVar1 + 系统配置缓冲区大小) * STRING_BUFFER_SIZE);
      fVar18 = *pfVar9;
      fVar13 = pfVar9[1];
      fVar14 = pfVar9[2];
      fStack_cc = pfVar9[3];
      fStack_d8 = fVar18;
      fStack_d4 = fVar13;
      fStack_d0 = fVar14;
      pfVar9 = (float *)function_(&stack_var_,auStack_c8,init_result0);
      fStack_170 = (fVar14 + pfVar9[2]) - fVar6;
      fStack_174 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_178 = (fVar18 + *pfVar9) - fVar4;
      function_(&stack_var_,&fStack_138,&fStack_178);
      pfVar9 = (float *)function_(&stack_var_,auStack_b8,init_result0 + STRING_BUFFER_SIZE);
      fStack_160 = (fVar14 + pfVar9[2]) - fVar6;
      fStack_164 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_168 = (fVar18 + *pfVar9) - fVar4;
      function_(&stack_var_,&fStack_128,&fStack_168);
      fVar14 = *(float *)(init_result0 + 0x24);
      fVar18 = fStack_128;
      fStack_198 = fStack_138;
      if (fStack_138 < fStack_128) {
        fVar18 = fStack_138;
        fStack_198 = fStack_128;
      }
      fVar13 = fStack_134;
      fStack_194 = fStack_124;
      if (fStack_134 < fStack_124) {
        fVar13 = fStack_124;
        fStack_194 = fStack_134;
      }
      fStack_190 = fStack_130;
      fStack_180 = fStack_120;
      if (fStack_130 < fStack_120) {
        fStack_190 = fStack_120;
        fStack_180 = fStack_130;
      }
      fStack_190 = fStack_190 + fVar14;
      fStack_194 = fStack_194 + fVar14;
      fStack_198 = fStack_198 + fVar14;
      fStack_180 = fStack_180 - fVar14;
      fVar13 = fVar13 - fVar14;
      fVar18 = fVar18 - fVar14;
      if (fStack_158 < fVar18) {
        fVar18 = fStack_158;
      }
      if (fStack_154 < fVar13) {
        fVar13 = fStack_154;
      }
      if (fStack_150 < fStack_180) {
        fStack_180 = fStack_150;
      }
      fStack_150 = fStack_180;
      stack_var_ = stack_var_;
      if (fStack_198 < fStack_148) {
        fStack_198 = fStack_148;
      }
      if (fStack_194 < fStack_144) {
        fStack_194 = fStack_144;
      }
      if (fStack_190 < fStack_140) {
        fStack_190 = fStack_140;
      }
      fStack_148 = fStack_198;
      fStack_144 = fStack_194;
      fStack_140 = fStack_190;
      stack_var_ = stack_var_;
      init_result2 = init_result2 + -0x30;
      init_result1 = init_result1 + -1;
      fVar14 = fStack_198;
      fVar15 = fStack_194;
      fVar16 = fStack_190;
      uint_var_ = stack_var_;
      uint_var_ = stack_var_;
      fStack_158 = fVar18;
      fStack_154 = fVar13;
    } while (-1 < init_result1);
  }
  *(unsigned long long *)(handle + 0x870) = 0x4cbebc204cbebc20;
  *(unsigned long long *)(handle + 0x878) = 0x7f7fffff4cbebc20;
  *(unsigned long long *)(handle + 0x880) = 0xccbebc20ccbebc20;
  *(unsigned long long *)(handle + 0x888) = 0x7f7fffffccbebc20;
  init_result1 = 0;
  *(unsigned int *)(handle + 0x8a0) = 0;
  *(unsigned long long *)(handle + 0x890) = 0;
  *(unsigned long long *)(handle + 0x898) = 0x7f7fffff00000000;
  fStack_198 = fVar18;
  if (*(float *)(handle + 0x870) < fVar18) {
    fStack_198 = *(float *)(handle + 0x870);
  }
  fStack_194 = fVar13;
  if (*(float *)(handle + 0x874) < fVar13) {
    fStack_194 = *(float *)(handle + 0x874);
  }
  fStack_190 = fStack_180;
  if (*(float *)(handle + 0x878) < fStack_180) {
    fStack_190 = *(float *)(handle + 0x878);
  }
  *(ulong long *)(handle + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulong long *)(handle + 0x878) = CONCAT44(stack_var_,fStack_190);
  fStack_198 = fVar18;
  if (fVar18 < *(float *)(handle + 0x880)) {
    fStack_198 = *(float *)(handle + 0x880);
  }
  fStack_194 = fVar13;
  if (fVar13 < *(float *)(handle + 0x884)) {
    fStack_194 = *(float *)(handle + 0x884);
  }
  fStack_190 = fStack_180;
  if (fStack_180 < *(float *)(handle + 0x888)) {
    fStack_190 = *(float *)(handle + 0x888);
  }
  *(ulong long *)(handle + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulong long *)(handle + 0x888) = CONCAT44(stack_var_,fStack_190);
  fStack_198 = fVar14;
  if (*(float *)(handle + 0x870) < fVar14) {
    fStack_198 = *(float *)(handle + 0x870);
  }
  fStack_194 = fVar15;
  if (*(float *)(handle + 0x874) < fVar15) {
    fStack_194 = *(float *)(handle + 0x874);
  }
  fStack_190 = fVar16;
  if (*(float *)(handle + 0x878) < fVar16) {
    fStack_190 = *(float *)(handle + 0x878);
  }
  *(ulong long *)(handle + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulong long *)(handle + 0x878) = CONCAT44(stack_var_,fStack_190);
  fStack_198 = fVar14;
  if (fVar14 < *(float *)(handle + 0x880)) {
    fStack_198 = *(float *)(handle + 0x880);
  }
  fStack_194 = fVar15;
  if (fVar15 < *(float *)(handle + 0x884)) {
    fStack_194 = *(float *)(handle + 0x884);
  }
  fStack_190 = fVar16;
  if (fVar16 < *(float *)(handle + 0x888)) {
    fStack_190 = *(float *)(handle + 0x888);
  }
  *(ulong long *)(handle + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulong long *)(handle + 0x888) = CONCAT44(stack_var_,fStack_190);
  if (*(long long *)(handle + 0x8a8) != 0) {
    init_result1 = *(long long *)(*(long long *)(handle + 0x8a8) + 0x260);
  }
  *(float *)(init_result1 + 0x218) = fVar18;
  *(float *)(init_result1 + 0x21c) = fVar13;
  *(float *)(init_result1 + 0x220) = fStack_180;
  *(unsigned int *)(init_result1 + 0x224) = uint_var_;
  *(float *)(init_result1 + 0x228) = fVar14;
  *(float *)(init_result1 + 0x22c) = fVar15;
  *(float *)(init_result1 + 0x230) = fVar16;
  *(unsigned int *)(init_result1 + 0x234) = uint_var_;
  pfVar9 = *(float **)(handle + 0x860);
  if ((pfVar9 != (float *)0x0) && (*(long long *)(handle + 0x868) != 0)) {
    if ((pfVar9[4] <= fVar14 && fVar14 != pfVar9[4]) ||
       ((pfVar9[5] <= fVar15 && fVar15 != pfVar9[5] || (pfVar9[6] <= fVar16 && fVar16 != pfVar9[6]))
       )) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar3 = *(float **)(handle + 0x860);
      fStack_198 = fVar14;
      if (*pfVar3 < fVar14) {
        fStack_198 = *pfVar3;
      }
      fStack_194 = fVar15;
      if (pfVar3[1] < fVar15) {
        fStack_194 = pfVar3[1];
      }
      fStack_190 = fVar16;
      if (pfVar3[2] < fVar16) {
        fStack_190 = pfVar3[2];
      }
      *(ulong long *)pfVar3 = CONCAT44(fStack_194,fStack_198);
      *(ulong long *)(pfVar3 + 2) = CONCAT44(stack_var_,fStack_190);
      fStack_198 = fVar14;
      if (fVar14 < pfVar3[4]) {
        fStack_198 = pfVar3[4];
      }
      fStack_194 = fVar15;
      if (fVar15 < pfVar3[5]) {
        fStack_194 = pfVar3[5];
      }
      fStack_190 = fVar16;
      if (fVar16 < pfVar3[6]) {
        fStack_190 = pfVar3[6];
      }
      *(ulong long *)(pfVar3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulong long *)(pfVar3 + 6) = CONCAT44(stack_var_,fStack_190);
      data_180d49f6c = '\0';
    }
    if (((fVar18 < *pfVar9) || (fVar13 < pfVar9[1])) || (fStack_180 < pfVar9[2])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar9 = *(float **)(handle + 0x860);
      fStack_198 = fVar18;
      if (*pfVar9 < fVar18) {
        fStack_198 = *pfVar9;
      }
      fStack_194 = fVar13;
      if (pfVar9[1] < fVar13) {
        fStack_194 = pfVar9[1];
      }
      fStack_190 = fStack_180;
      if (pfVar9[2] < fStack_180) {
        fStack_190 = pfVar9[2];
      }
      *(ulong long *)pfVar9 = CONCAT44(fStack_194,fStack_198);
      *(ulong long *)(pfVar9 + 2) = CONCAT44(stack_var_,fStack_190);
      fStack_198 = fVar18;
      if (fVar18 < pfVar9[4]) {
        fStack_198 = pfVar9[4];
      }
      fStack_194 = fVar13;
      if (fVar13 < pfVar9[5]) {
        fStack_194 = pfVar9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfVar9[6]) {
        fStack_190 = pfVar9[6];
      }
      *(ulong long *)(pfVar9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulong long *)(pfVar9 + 6) = CONCAT44(stack_var_,fStack_190);
      data_180d49f6c = '\0';
    }
    pfVar9 = *(float **)(handle + 0x868);
    if (((pfVar9[4] <= fVar14 && fVar14 != pfVar9[4]) ||
        (pfVar9[5] <= fVar15 && fVar15 != pfVar9[5])) ||
       (pfVar9[6] <= fVar16 && fVar16 != pfVar9[6])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar3 = *(float **)(handle + 0x868);
      fStack_198 = fVar14;
      if (*pfVar3 < fVar14) {
        fStack_198 = *pfVar3;
      }
      fStack_194 = fVar15;
      if (pfVar3[1] < fVar15) {
        fStack_194 = pfVar3[1];
      }
      fStack_190 = fVar16;
      if (pfVar3[2] < fVar16) {
        fStack_190 = pfVar3[2];
      }
      *(ulong long *)pfVar3 = CONCAT44(fStack_194,fStack_198);
      *(ulong long *)(pfVar3 + 2) = CONCAT44(stack_var_,fStack_190);
      fStack_198 = fVar14;
      if (fVar14 < pfVar3[4]) {
        fStack_198 = pfVar3[4];
      }
      fStack_194 = fVar15;
      if (fVar15 < pfVar3[5]) {
        fStack_194 = pfVar3[5];
      }
      fStack_190 = fVar16;
      if (fVar16 < pfVar3[6]) {
        fStack_190 = pfVar3[6];
      }
      *(ulong long *)(pfVar3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulong long *)(pfVar3 + 6) = CONCAT44(stack_var_,fStack_190);
      data_180d49f6c = '\0';
    }
    if (((fVar18 < *pfVar9) || (fVar13 < pfVar9[1])) || (fStack_180 < pfVar9[2])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar9 = *(float **)(handle + 0x868);
      fStack_198 = fVar18;
      if (*pfVar9 < fVar18) {
        fStack_198 = *pfVar9;
      }
      fStack_194 = fVar13;
      if (pfVar9[1] < fVar13) {
        fStack_194 = pfVar9[1];
      }
      fStack_190 = fStack_180;
      if (pfVar9[2] < fStack_180) {
        fStack_190 = pfVar9[2];
      }
      *(ulong long *)pfVar9 = CONCAT44(fStack_194,fStack_198);
      *(ulong long *)(pfVar9 + 2) = CONCAT44(stack_var_,fStack_190);
      fStack_198 = fVar18;
      if (fVar18 < pfVar9[4]) {
        fStack_198 = pfVar9[4];
      }
      fStack_194 = fVar13;
      if (fVar13 < pfVar9[5]) {
        fStack_194 = pfVar9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfVar9[6]) {
        fStack_190 = pfVar9[6];
      }
      *(ulong long *)(pfVar9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulong long *)(pfVar9 + 6) = CONCAT44(stack_var_,fStack_190);
      data_180d49f6c = '\0';
    }
  }
  return;
}
        data_180d49f98 = 0;
        global_data_ = 8;
        strcpy_s(&data_180d49f98,系统配置缓冲区大小,&unknown_180a353b8);
        system_crypto_002(function_);
        system_crypto_003(&data_180d49f70);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(global_data_,&data_180d49f80);
    return;
  }
  if (-1 < handle) {
    if (handle < (int)((global_data_ - global_data_) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(global_data_,(long long)handle * 0x68 + global_data_);
      return;
    }
  }
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              0x48) < global_data_) {
    system_crypto_004(&data_180d49fd8);
    if (global_data_ == -1) {
      global_data_ = &g_defaultDataTemplate;
      global_data_ = &data_180d49ff8;
      data_180d49ff8 = 0;
      global_data_ = 0;
      strcpy_s(&data_180d49ff8,系统配置缓冲区大小,&data_18098bc73);
      system_crypto_002(function_);
      system_crypto_003(&data_180d49fd8);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(global_data_,&data_180d49fe0);
  return;
}
// 处理配置参数验证函数
int validate_config_parameters(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  int int_var_;
  long long long_var_;
  long long long_var_;
  undefined *ptr_var_;
  undefined *stack_ptr_;
  long long stack_long_;
  int stack_int_;
  create_thread_context(&stack_ptr_,handle,mutex_attr,mutex_type,线程池默认标志);
  long_var_ = stack_long_;
  if (stack_int_ == STRING_BUFFER_SIZE) {
    int_var_ = strcmp(stack_long_,&unknown_180a389f0);
    if (int_var_ == 0) goto label_;
    int_var_ = strcmp(long_var_,&unknown_180a38a08);
    if (int_var_ == 0) {
      int_var_ = 100;
      goto label_;
    }
    ptr_var_ = &unknown_180a38c28;
label_:
    int_var_ = strcmp(long_var_,ptr_var_);
    if (int_var_ != 0) {
label_:
      int_var_ = 0;
      goto label_;
    }
  }
  else {
    if (stack_int_ == 0x15) {
      int_var_ = strcmp(stack_long_,&unknown_180a389d8);
      if (int_var_ == 0) {
        int_var_ = 0x30;
        goto label_;
      }
label_:
      int_var_ = strcmp(long_var_,&unknown_180a38aa8);
      if (int_var_ == 0) {
        int_var_ = 0xb0;
        goto label_;
      }
label_:
      int_var_ = strcmp(long_var_,&unknown_180a38ac0);
      if (int_var_ == 0) {
        int_var_ = 0xd4;
        goto label_;
      }
label_:
      ptr_var_ = &unknown_180a38ba0;
      goto label_;
    }
    if (stack_int_ == 0x1b) {
      ptr_var_ = &unknown_180a38a20;
      goto label_;
    }
    if (stack_int_ == 0xd) {
      int_var_ = strcmp(stack_long_,&unknown_180a38978);
      if (int_var_ == 0) {
        int_var_ = 4;
        goto label_;
      }
label_:
      ptr_var_ = &unknown_180a38c98;
      goto label_;
    }
    if (stack_int_ == 0x1a) {
      int_var_ = strcmp(stack_long_,&unknown_180a38958);
      if (int_var_ == 0) {
        int_var_ = 0x1c;
        goto label_;
      }
label_:
      int_var_ = strcmp(long_var_,&unknown_180a38c08);
      if (int_var_ == 0) {
        int_var_ = 0x18;
        goto label_;
      }
label_:
      int_var_ = strcmp(long_var_,&unknown_180a38ea0);
      if (int_var_ == 0) {
        int_var_ = 0x554;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == CONFIG_PATH_BUFFER_SIZE) {
      int_var_ = strcmp(stack_long_,&unknown_180a389b0);
      if (int_var_ == 0) {
        int_var_ = 0x30;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == 0x24) {
      int_var_ = strcmp(stack_long_,&unknown_180a38988);
      if (int_var_ == 0) {
        int_var_ = 0x12;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == 0x15) goto label_;
    if (stack_int_ == 0x1f) {
      int_var_ = strcmp(stack_long_,&unknown_180a38a88);
      if (int_var_ == 0) {
        int_var_ = 0x48;
        goto label_;
      }
label_:
      int_var_ = strcmp(long_var_,&unknown_180a38d38);
      if (int_var_ == 0) {
        int_var_ = 1;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == 10) {
      int_var_ = strcmp(stack_long_,&unknown_180a38ad8);
      if (int_var_ == 0) {
        int_var_ = 8;
        goto label_;
      }
label_:
      int_var_ = strcmp(long_var_,&unknown_180a38a78);
      if (int_var_ == 0) {
        int_var_ = 4;
        goto label_;
      }
label_:
      ptr_var_ = &unknown_180a38ec0;
      goto label_;
    }
    if (stack_int_ == 0x15) goto label_;
    if (stack_int_ == 0x16) {
      int_var_ = strcmp(stack_long_,&unknown_180a38a48);
      if (int_var_ == 0) {
        int_var_ = 0x14;
        goto label_;
      }
label_:
      int_var_ = strcmp(long_var_,&unknown_180a38b48);
      if (int_var_ == 0) {
        int_var_ = 0x568;
        goto label_;
      }
      int_var_ = strcmp(long_var_,&unknown_180a38c40);
      if (int_var_ == 0) {
        int_var_ = STRING_BUFFER_SIZE;
        goto label_;
      }
      int_var_ = strcmp(long_var_,&unknown_180a38ca8);
      if (int_var_ == 0) {
        int_var_ = 0x28;
        goto label_;
      }
      int_var_ = strcmp(long_var_,&unknown_180a38e38);
      if (int_var_ == 0) {
        int_var_ = 系统配置缓冲区大小;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == 4) {
      long_var_ = 0;
      do {
        long_var_ = long_var_ + 1;
        if (*(char *)(stack_long_ + long_var_) != (&unknown_180a38a3c)[long_var_]) goto label_;
        long_var_ = long_var_;
      } while (long_var_ != 5);
      int_var_ = 200;
      goto label_;
    }
    if (stack_int_ == 10) goto label_;
    if (stack_int_ == 0x12) {
      int_var_ = strcmp(stack_long_,&unknown_180a38a60);
      if (int_var_ == 0) {
        int_var_ = 0x58;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ != 0x13) {
      if (stack_int_ == 0x17) {
        int_var_ = strcmp(stack_long_,&unknown_180a38bb8);
        if (int_var_ == 0) {
          int_var_ = 1;
          goto label_;
        }
label_:
        ptr_var_ = &unknown_180a38e78;
label_:
        int_var_ = strcmp(long_var_,ptr_var_);
        if (int_var_ == 0) {
label_:
          int_var_ = 0xc;
          goto label_;
        }
      }
      else {
        if (stack_int_ == 0x15) goto label_;
        if (stack_int_ == 0x26) {
          int_var_ = strcmp(stack_long_,&unknown_180a38b20);
          if (int_var_ == 0) {
            int_var_ = 0xa8;
            goto label_;
          }
        }
        else if (stack_int_ == 0x34) {
          int_var_ = strcmp(stack_long_,&unknown_180a38ae8);
          if (int_var_ == 0) {
            int_var_ = 0x14;
            goto label_;
          }
        }
        else {
          if (stack_int_ != 0xf) {
            if (stack_int_ == 0x16) goto label_;
            if (stack_int_ == 0x18) {
              int_var_ = strcmp(stack_long_,&unknown_180a38c78);
              if ((int_var_ == 0) || (int_var_ = strcmp(long_var_,&unknown_180a38c58), int_var_ == 0))
              goto label_;
              int_var_ = strcmp(long_var_,&unknown_180a38be8);
              if (int_var_ != 0) {
                ptr_var_ = &unknown_180a38d98;
                goto label_;
              }
              goto label_;
            }
            if (stack_int_ == 7) {
              long_var_ = 0;
              do {
                long_var_ = long_var_;
                if (*(char *)(stack_long_ + long_var_) != (&unknown_180a38be0)[long_var_]) goto label_;
                long_var_ = long_var_ + 1;
              } while (long_var_ + 1 != 8);
              int_var_ = (int)long_var_ + -6;
              goto label_;
            }
            if (stack_int_ == 0xc) {
              int_var_ = strcmp(stack_long_,&unknown_180a38bd0);
              if (int_var_ == 0) {
                int_var_ = 0x68;
                goto label_;
              }
label_:
              int_var_ = strcmp(long_var_,&unknown_180a38e50);
              if (int_var_ == 0) {
                int_var_ = 4;
                goto label_;
              }
              int_var_ = strcmp(long_var_,&unknown_180a38f30);
              if (int_var_ == 0) {
                int_var_ = 8;
                goto label_;
              }
              goto label_;
            }
            if (stack_int_ == 0x1a) goto label_;
            if (stack_int_ == 3) {
              int_var_ = 4;
              long_var_ = 0;
              do {
                long_var_ = long_var_ + 1;
                if (*(char *)(stack_long_ + long_var_) != (&unknown_180a29944)[long_var_]) goto label_;
                long_var_ = long_var_;
              } while (long_var_ != 4);
              goto label_;
            }
            if (stack_int_ == 0xf) goto label_;
            if (stack_int_ == 0x23) {
              int_var_ = strcmp(stack_long_,&unknown_180a38d58);
              if (int_var_ == 0) {
                int_var_ = 0x28;
                goto label_;
              }
label_:
              int_var_ = strcmp(long_var_,&unknown_180a38cc0);
              if (int_var_ == 0) {
                int_var_ = 0x18;
                goto label_;
              }
              goto label_;
            }
            if (stack_int_ == 0x1f) goto label_;
            if (stack_int_ == 0xd) goto label_;
            if (stack_int_ == 0x21) {
              ptr_var_ = &unknown_180a38ce8;
              goto label_;
            }
            if (stack_int_ == 0x23) goto label_;
            if (stack_int_ == 0xf) goto label_;
            if (stack_int_ == 0xb) {
              int_var_ = strcmp(stack_long_,&unknown_180a38dd8);
              if (int_var_ == 0) {
                int_var_ = 0x248;
                goto label_;
              }
label_:
              int_var_ = strcmp(long_var_,&unknown_180a38dc8);
              if (int_var_ == 0) {
                int_var_ = 4;
                goto label_;
              }
label_:
              int_var_ = strcmp(long_var_,&unknown_180a38e90);
              if (int_var_ == 0) {
                int_var_ = 4;
                goto label_;
              }
            }
            else {
              if (stack_int_ == 0x11) {
                int_var_ = strcmp(stack_long_,&unknown_180a38e10);
                if (int_var_ == 0) goto label_;
                int_var_ = strcmp(long_var_,&unknown_180a38df8);
                if (int_var_ == 0) {
                  int_var_ = 0xa0;
                  goto label_;
                }
                ptr_var_ = &unknown_180a38d80;
                goto label_;
              }
              if (stack_int_ == 0xb) goto label_;
              if (stack_int_ == 0xf) goto label_;
              if (stack_int_ == 0xb) goto label_;
              if (stack_int_ == 0x17) goto label_;
              if (stack_int_ == 10) goto label_;
              if (stack_int_ == 0x1a) goto label_;
              if (stack_int_ != 0xb) {
                if (stack_int_ == 0xc) goto label_;
                if (stack_int_ != 0x19) goto label_;
                ptr_var_ = &unknown_180a38f10;
                goto label_;
              }
            }
            ptr_var_ = &unknown_180a38e28;
            goto label_;
          }
          int_var_ = strcmp(stack_long_,&unknown_180a38b60);
          if (int_var_ == 0) {
            int_var_ = 0x214;
            goto label_;
          }
label_:
          int_var_ = strcmp(long_var_,&unknown_180a38d10);
          if (int_var_ == 0) {
            int_var_ = CONFIG_PATH_BUFFER_SIZE28;
            goto label_;
          }
label_:
          int_var_ = strcmp(long_var_,&unknown_180a38de8);
          if (int_var_ == 0) {
            int_var_ = 4;
            goto label_;
          }
label_:
          int_var_ = strcmp(long_var_,&unknown_180a38db8);
          if (int_var_ == 0) {
            int_var_ = 0x50;
            goto label_;
          }
        }
      }
      goto label_;
    }
    int_var_ = strcmp(stack_long_,&unknown_180a38b88);
    if (int_var_ == 0) {
      int_var_ = 1;
      goto label_;
    }
    int_var_ = strcmp(long_var_,&unknown_180a38b70);
    if (int_var_ == 0) {
      int_var_ = 3;
      goto label_;
    }
    int_var_ = strcmp(long_var_,&unknown_180a38d20);
    if (int_var_ != 0) {
      ptr_var_ = &unknown_180a38e60;
      goto label_;
    }
  }
label_:
  int_var_ = 4;
label_:
  stack_ptr_ = &g_threadString2;
  if (stack_long_ == 0) {
    return int_var_;
  }
  handle_system_error();
}
unsigned long long
function_(unsigned long long handle,unsigned long long flags,unsigned char mutex_attr,unsigned long long mutex_type)
{
  char cVar1;
  undefined *pflags;
  unsigned long long uint_var_;
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [40];
  create_thread_context(auStack_30,handle,mutex_attr,mutex_type,线程池默认标志);
  create_thread_context(auStack_50,flags);
  cVar1 = validate_handle_parameters(auStack_30,&unknown_180a389d8,1);
  if (cVar1 == '\0') {
    cVar1 = validate_handle_parameters(auStack_30,&unknown_180a38a08,1);
    if (cVar1 == '\0') {
      cVar1 = validate_handle_parameters(auStack_30,&unknown_180a38958,1);
      if (cVar1 == '\0') {
        cVar1 = validate_handle_parameters(auStack_30,&unknown_180a389b0,1);
        if (cVar1 == '\0') {
          cVar1 = validate_handle_parameters(auStack_30,&unknown_180a38988,1);
          if (cVar1 == '\0') {
            cVar1 = validate_handle_parameters(auStack_30,&unknown_180a38aa8,1);
            if (cVar1 == '\0') {
              cVar1 = validate_handle_parameters(auStack_30,&unknown_180a38a88,1);
              if (cVar1 == '\0') {
                cVar1 = validate_handle_parameters(auStack_30,&unknown_180a38ac0,1);
                if (cVar1 == '\0') {
                  cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38a48);
                  if (cVar1 == '\0') {
                    cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38a3c);
                    if (cVar1 == '\0') {
                      cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38a60);
                      if (cVar1 == '\0') {
                        cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38b70);
                        if (cVar1 == '\0') {
                          cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38b20);
                          if (cVar1 == '\0') {
                            cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38ae8);
                            if (cVar1 == '\0') {
                              cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38b60);
                              if (cVar1 == '\0') {
                                cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38b48);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38c40);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38c78);
                                    if (cVar1 == '\0') {
                                      cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38c58);
                                      if (cVar1 == '\0') {
                                        cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38bd0);
                                        if (cVar1 == '\0') {
                                          cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38c08);
                                          if (cVar1 == '\0') {
                                            cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a29944);
                                            if (cVar1 == '\0') {
                                              cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38d10)
                                              ;
                                              if (cVar1 == '\0') {
                                                cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                            &unknown_180a38d58);
                                                if (cVar1 == '\0') {
                                                  cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                              &unknown_180a38ca8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                &unknown_180a38ce8);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &unknown_180a38cc0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &unknown_180a38dd8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                    &unknown_180a38df8);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                      &unknown_180a38db8
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                        &
                                                  unknown_180a38e78);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                &unknown_180a38ea0);
                                                    if (cVar1 != '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ac00);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3acf8);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3acd8);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ad30);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &data_180a06a48);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ad18);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ac90);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ac80);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3acc8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x21c;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3aca8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x41c;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ade8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x41d;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3add0);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x420;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ae18);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x424;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ae00);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x428;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ad88);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x430;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a29da8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x438;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ad60);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x439;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3adb8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x43c;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ada0);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x440;
                                                          goto label_;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3abe0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a1029c);
                                                      if (cVar1 == '\0') {
                                                        pflags = &unknown_180a3ac10;
                                                        goto label_;
                                                      }
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3ac48);
                                                    if (cVar1 == '\0') {
                                                      pflags = &unknown_180a3abe8;
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a960);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab28);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a39f78);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab18);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a39fb0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab50);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab38);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 100;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aae8);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aad8);
                                                      if (cVar1 != '\0') {
label_:
                                                        uint_var_ = 0x6c;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab08);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aaf8);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x74;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3abb0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aba0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3abd0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3abc0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x84;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab70);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab60);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab90);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab80);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ac30);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x96;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ac18);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ac68);
                                                      if (cVar1 != '\0') goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a8b0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a850);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a830);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a870);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a860);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a04be8);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a938);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a920);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a960);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a948);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0xf8;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a8f0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0xfc;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a8d8);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = STRING_BUFFER_SIZE0;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a910);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x110;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a900);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x114;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9d8);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x118;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9c8);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x11c;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9f0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x11e;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9e0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x120;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a988);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x130;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a2a000);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x170;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a21a30);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x174;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a970);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x178;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9b0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x188;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a998);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x198;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa98);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x19c;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa70);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x1a0;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aac0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x220;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aab0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x230;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa20);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x234;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa08);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x238;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa50);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x23c;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa38);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x240;
                                                        goto label_;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a650);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a640);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 4;
                                                        goto label_;
                                                      }
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a800);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a7a8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3a798);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3a7d0);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &unknown_180a3a7b8
                                                                                     );
                                                          if (cVar1 != '\0') goto label_;
                                                          cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &unknown_180a3a898
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                        &
                                                  unknown_180a3a880);
                                                  if (cVar1 != '\0') goto label_;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a8c0);
                                                  if (cVar1 != '\0') goto label_;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &data_180a0ba58);
                                                  if (cVar1 != '\0') goto label_;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a5a8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a2e2bc);
                                                    if (cVar1 != '\0') goto label_;
                                                    pflags = &unknown_180a2e9e0;
                                                    goto label_;
                                                  }
                                                  goto label_;
                                                  }
                                                  goto label_;
                                                  }
                                                  goto label_;
                                                  }
                                                  goto label_;
                                                  }
                                                  }
                                                }
                                                else {
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a720);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a754);
                                                    if (cVar1 != '\0') goto label_;
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a748);
                                                    if (cVar1 != '\0') {
label_:
                                                      uint_var_ = 0xc;
                                                      goto label_;
                                                    }
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a7f0);
                                                    if (cVar1 != '\0') {
label_:
                                                      uint_var_ = 0x14;
                                                      goto label_;
                                                    }
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a7e0);
                                                    if (cVar1 != '\0') {
label_:
                                                      uint_var_ = 0x1c;
                                                      goto label_;
                                                    }
                                                    pflags = &unknown_180a3a820;
label_:
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                                                    if (cVar1 != '\0') goto label_;
                                                  }
                                                }
                                              }
                                              else {
                                                cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                            &unknown_180a1a470);
                                                if (cVar1 == '\0') {
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a758);
                                                  if (cVar1 != '\0') {
                                                    uint_var_ = CONFIG_PATH_BUFFER_SIZE00;
                                                    goto label_;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a788);
                                                  if (cVar1 != '\0') {
                                                    uint_var_ = CONFIG_PATH_BUFFER_SIZE10;
                                                    goto label_;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a778);
                                                  if (cVar1 != '\0') {
                                                    uint_var_ = CONFIG_PATH_BUFFER_SIZE20;
                                                    goto label_;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a738);
                                                  if (cVar1 != '\0') {
                                                    uint_var_ = CONFIG_PATH_BUFFER_SIZE24;
                                                    goto label_;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
label_:
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a650);
                                            if (cVar1 == '\0') {
                                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a640)
                                              ;
                                              if (cVar1 == '\0') {
                                                pflags = &unknown_180a3a5c0;
                                                goto label_;
                                              }
                                              goto label_;
                                            }
                                          }
                                        }
                                        else {
                                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a6c0);
                                          if (cVar1 == '\0') {
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a708);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a6f8);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ee0);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x24;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e48);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39dd0);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x2c;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39df0);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39fb0);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x34;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a670);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a660);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x3c;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a6a0);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x50;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a688);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d58);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x5c;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f18);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x60;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a768);
                                            if (cVar1 != '\0') {
                                              uint_var_ = 0x61;
                                              goto label_;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a650);
                                        if (cVar1 == '\0') {
                                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a640);
                                          if (cVar1 == '\0') {
label_:
                                            pflags = &unknown_180a3a5c0;
                                            goto label_;
                                          }
                                          goto label_;
                                        }
                                      }
                                    }
                                    else {
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a600);
                                      if (cVar1 == '\0') {
                                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a5e0);
                                        if (cVar1 != '\0') goto label_;
                                        pflags = &unknown_180a3a6e0;
label_:
                                        cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                                        if (cVar1 != '\0') goto label_;
                                      }
                                    }
                                  }
                                  else {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a650);
                                    if (cVar1 == '\0') {
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a640);
                                      if (cVar1 != '\0') goto label_;
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a5d0);
                                      if (cVar1 != '\0') goto label_;
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a5c0);
                                      if (cVar1 != '\0') goto label_;
                                    }
                                  }
                                }
                                else {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2f8);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2e8);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a310);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a300);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a418);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a408);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a440);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a428);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a3d0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a3c0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a3f8);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a3e8);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4c0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4a8);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4e0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4d0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a468);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x53c;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a458);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x540;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a498);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x544;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a478);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x548;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a560);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x54c;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a540);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x550;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a5a8);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x554;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a580);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x558;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a508);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x55c;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4f8);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x560;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a530);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x564;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a520);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x565;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a630);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x566;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a620);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x567;
                                      goto label_;
                                    }
                                  }
                                }
                              }
                              else {
                                cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a2e1d8);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a2e1e8);
                                  if (cVar1 != '\0') goto label_;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a2e158);
                                  if (cVar1 != '\0') goto label_;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a2e150);
                                  if (cVar1 != '\0') goto label_;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a0696c);
                                  if (cVar1 != '\0') goto label_;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a0ae28);
                                  if (cVar1 != '\0') goto label_;
                                }
                              }
                            }
                            else {
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a260);
                              if (cVar1 == '\0') {
                                cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a348);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a320);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a398);
                                    if (cVar1 == '\0') {
                                      pflags = &unknown_180a3a370;
                                      goto label_;
                                    }
                                    goto label_;
                                  }
                                  goto label_;
                                }
                                goto label_;
                              }
                            }
                          }
                          else {
                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a068);
                            if (cVar1 == '\0') {
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a058);
                              if (cVar1 != '\0') {
label_:
                                uint_var_ = 4;
                                goto label_;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39fe0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39fc0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a018);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ff8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a118);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a0f0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a158);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a140);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a098);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a078);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a0d0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a0b8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a1e8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a1c8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a220);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a208);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a188);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a178);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a1b8);
                              if (cVar1 != '\0') {
label_:
                                uint_var_ = 0x70;
                                goto label_;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a1a8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2b0);
                              if (cVar1 != '\0') {
label_:
                                uint_var_ = 0x80;
                                goto label_;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a298);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2d8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2c0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a250);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a240);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a278);
                              if (cVar1 != '\0') goto label_;
                            }
                          }
                        }
                        else {
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f50);
                          if (cVar1 == '\0') {
                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a048);
                            if (cVar1 != '\0') goto label_;
                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a038);
                            if (cVar1 != '\0') goto label_;
                          }
                        }
                      }
                      else {
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e78);
                        if (cVar1 == '\0') {
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39eb8);
                          if (cVar1 != '\0') goto label_;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ea8);
                          if (cVar1 != '\0') goto label_;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f88);
                          if (cVar1 != '\0') goto label_;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f78);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 0x38;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39fb0);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 系统配置缓冲区大小;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f98);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 0x44;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f28);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 0x48;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a1029c);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 0x4c;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f18);
                          if (cVar1 != '\0') goto label_;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f60);
                          if (cVar1 != '\0') {
                            uint_var_ = 0x51;
                            goto label_;
                          }
                        }
                      }
                    }
                    else {
                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d98);
                      if (cVar1 == '\0') {
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39dc0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x58;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a35198);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x68;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39db0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x78;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d58);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x88;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d40);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x8c;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d88);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x90;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d70);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x94;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e30);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x98;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e18);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x9c;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e58);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xa0;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a34948);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xa4;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e48);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xa8;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39de0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xac;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39dd0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xb0;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e08);
                        if (cVar1 != '\0') {
                          uint_var_ = 0xb4;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39df0);
                        if (cVar1 != '\0') {
                          uint_var_ = 0xb5;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ee0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xb8;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ed0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xbc;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f00);
                        if (cVar1 != '\0') {
                          uint_var_ = 0xbd;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ef0);
                        if (cVar1 != '\0') {
                          uint_var_ = 0xbe;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e90);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xc0;
                          goto label_;
                        }
                      }
                    }
                  }
                  else {
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cd0);
                    if (cVar1 == '\0') {
                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ccc);
                      if (cVar1 != '\0') goto label_;
                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cd8);
                      if (cVar1 != '\0') goto label_;
                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cd4);
                      if (cVar1 != '\0') goto label_;
                      pflags = &unknown_180a39da8;
label_:
                      cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                      if (cVar1 != '\0') goto label_;
                    }
                  }
                }
                else {
                  cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39920,1);
                  if (cVar1 == '\0') {
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39988);
                    if (cVar1 != '\0') {
label_:
                      uint_var_ = 1;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39970);
                    if (cVar1 != '\0') {
label_:
                      uint_var_ = 2;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a398d8);
                    if (cVar1 != '\0') {
                      uint_var_ = 3;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a398b8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39910);
                    if (cVar1 != '\0') {
                      uint_var_ = 5;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a398f0);
                    if (cVar1 != '\0') {
                      uint_var_ = 6;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a28);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a18);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a60);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a40);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a399c0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a399a8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a399f0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a399e0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39af0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ad8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b18);
                    if (cVar1 != '\0') {
                      uint_var_ = 0x1d;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b00);
                    if (cVar1 != '\0') {
                      uint_var_ = 0x1e;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a88);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a70);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ab8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39aa0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ba0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b88);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39bd8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39bc0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b48);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b30);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b78);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b68);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c80);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c60);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cb8);
                    if (cVar1 != '\0') {
label_:
                      uint_var_ = 0x7c;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c98);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c10);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39bf0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c50);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c30);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cf8);
                    if (cVar1 != '\0') {
                      uint_var_ = 0xc4;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ce0);
                    if (cVar1 != '\0') {
                      uint_var_ = 200;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d28);
                    if (cVar1 != '\0') {
                      uint_var_ = 0xcc;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d10);
                    if (cVar1 != '\0') {
                      uint_var_ = 0xd0;
                      goto label_;
                    }
                  }
                }
              }
              else {
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39888,1);
                if (cVar1 == '\0') {
                  cVar1 = validate_handle_parameters(auStack_50,&unknown_180a397f8,1);
                  if (cVar1 != '\0') {
label_:
                    uint_var_ = STRING_BUFFER_SIZE;
                    goto label_;
                  }
                  cVar1 = validate_handle_parameters(auStack_50,&unknown_180a397e8,1);
                  if (cVar1 != '\0') {
label_:
                    uint_var_ = CONFIG_PATH_BUFFER_SIZE;
                    goto label_;
                  }
                  cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39850,1);
                  if (cVar1 != '\0') goto label_;
                  cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39820,1);
                  if (cVar1 != '\0') {
label_:
                    uint_var_ = 0x30;
                    goto label_;
                  }
                  cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39940,1);
                  if (cVar1 != '\0') {
                    uint_var_ = 0x31;
                    goto label_;
                  }
                  cVar1 = validate_handle_parameters(auStack_50,&unknown_180a19c8c,1);
                  if (cVar1 != '\0') {
                    uint_var_ = 0x32;
                    goto label_;
                  }
                }
              }
            }
            else {
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a397d8,1);
              if (cVar1 == '\0') {
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a397c8,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39740,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39728,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39768,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39758,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39870,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a19c8c,1);
                if (cVar1 != '\0') {
label_:
                  uint_var_ = 0x19;
                  goto label_;
                }
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39864,1);
                if (cVar1 != '\0') {
                  uint_var_ = 0x35;
                  goto label_;
                }
                cVar1 = validate_handle_parameters(auStack_50,&unknown_180a398a8,1);
                if (cVar1 != '\0') goto label_;
              }
            }
          }
          else {
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39568,1);
            if (cVar1 == '\0') {
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39538,1);
              if (cVar1 != '\0') {
label_:
                uint_var_ = 7;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a396c8,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a396b0,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39710,1);
              if (cVar1 != '\0') {
label_:
                uint_var_ = 10;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a396f0,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39640,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39628,1);
              if (cVar1 != '\0') {
                uint_var_ = 0xd;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39688,1);
              if (cVar1 != '\0') {
                uint_var_ = 0xe;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39660,1);
              if (cVar1 != '\0') {
                uint_var_ = 0xf;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a397a8,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39788,1);
              if (cVar1 != '\0') goto label_;
            }
          }
        }
        else {
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39270,1);
          if (cVar1 == '\0') {
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a393a8,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39390,1);
            if (cVar1 != '\0') {
label_:
              uint_var_ = 9;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a393f0,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a393d0,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39348,1);
            if (cVar1 != '\0') {
label_:
              uint_var_ = 0x17;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39328,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39378,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39360,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x21;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a394a0,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x22;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39480,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x23;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a394e0,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a394b8,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x25;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39428,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x26;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39408,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x27;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39468,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39450,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x29;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a395c0,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2a;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39598,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2b;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39600,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a395e0,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2d;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39518,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2e;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39500,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2f;
              goto label_;
            }
          }
        }
      }
      else {
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a391b8,1);
        if (cVar1 == '\0') {
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39188,1);
          if (cVar1 != '\0') {
label_:
            uint_var_ = 0xb;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39210,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a391e8,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39128,1);
          if (cVar1 != '\0') {
label_:
            uint_var_ = 0x11;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39110,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x12;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39170,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x13;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39148,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a392d0,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x15;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a392b8,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x16;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39308,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a392e8,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39250,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39230,1);
          if (cVar1 != '\0') {
label_:
            uint_var_ = 0x1a;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39298,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x1b;
            goto label_;
          }
        }
      }
    }
    else {
      cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38ef0,1);
      if (cVar1 == '\0') {
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38fd8,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a1029c,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38fc0,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39008,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38ff0,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38f78,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38f60,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38fa8,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38f90,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a390b8,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39090,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a390f0,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a390d0,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39030,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a34c20,1);
        if (cVar1 != '\0') {
          uint_var_ = 0x54;
          goto label_;
        }
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39020,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39078,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&unknown_180a39058,1);
        if (cVar1 != '\0') goto label_;
      }
    }
  }
  else {
    cVar1 = validate_handle_parameters(auStack_50,&unknown_180a0ee38,1);
    if (cVar1 == '\0') {
      cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38f50,1);
      if (cVar1 != '\0') {
label_:
        uint_var_ = 8;
        goto label_;
      }
      cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38f40,1);
      if (cVar1 != '\0') goto label_;
      cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38ee0,1);
      if (cVar1 != '\0') {
label_:
        uint_var_ = 0x18;
        goto label_;
      }
      cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38ed0,1);
      if (cVar1 != '\0') goto label_;
      cVar1 = validate_handle_parameters(auStack_50,&unknown_180a38f00,1);
      if (cVar1 != '\0') {
label_:
        uint_var_ = 0x28;
        goto label_;
      }
    }
  }
  uint_var_ = 0;
label_:
  function_(auStack_50);
  function_(auStack_30);
  return uint_var_;
}
  data_180bf66d8 = 0;
  system_crypto_002(function_);
  function_(&unknown_18064ffc0);
  long_var_ = 0;
  global_data_ = function_;
  pflags = (unsigned int *)&data_180bfbd80;
  long_var_ = 0x16;
  do {
    if (pflags[1] == 0) {
      function_(pflags);
    }
    if (long_var_ != 2) {
      function_(&unknown_180a3db60,*(unsigned long long *)(pflags + 4),*pflags);
    }
    long_var_ = long_var_ + 1;
    pflags = pflags + 6;
    long_var_ = long_var_ + -1;
  } while (long_var_ != 0);
  if (global_data_ == 0) {
    function_(&data_180bfbf60);
  }
  global_data_ = (long long)global_data_;
  if (global_data_ == 0) {
    function_(&data_180bfbf78);
  }
  global_data_ = (long long)global_data_;
  function_();
  if (data_180c8efc8 != '\0') {
    function_(&unknown_180a3d970);
  }
  return;
}
double calculate_system_performance(void)
{
  long long init_result;
  long long alStackX_8 [4];
  init_result = global_data_;
  if (global_data_ == 0) {
    QueryPerformanceCounter(alStackX_8);
    init_result = alStackX_8[0];
  }
  return (double)(init_result - global_data_) * global_data_;
}
bool validate_handle_parameters(long long handle,long long flags,char mutex_attr)
{
  char cVar1;
  char cVar2;
  int int_var_;
  long long long_var_;
  char *char_ptr_var_;
  long_var_ = -1;
  do {
    long_var_ = long_var_ + 1;
  } while (*(char *)(flags + long_var_) != '\0');
  int_var_ = *(int *)(handle + STRING_BUFFER_SIZE);
  if (int_var_ == (int)long_var_) {
    if (int_var_ != 0) {
      char_ptr_var_ = *(char **)(handle + 8);
      if (mutex_attr == '\0') {
        int_var_ = _stricmp(char_ptr_var_,flags);
        return int_var_ == 0;
      }
      flags = flags - (long long)char_ptr_var_;
      do {
        cVar1 = *char_ptr_var_;
        cVar2 = char_ptr_var_[flags];
        if (cVar1 != cVar2) break;
        char_ptr_var_ = char_ptr_var_ + 1;
      } while (cVar2 != '\0');
      return cVar1 == cVar2;
    }
  }
  else if (int_var_ != 0) {
    return false;
  }
  if ((int)long_var_ != 0) {
    return false;
  }
  return true;
}
// 查找字符串在句柄中的位置
int find_string_index_in_array(long long handle)
{
  int int_var_;
  long long long_var_;
  int int_var_;
  ulong long uint_var_;
  long long long_var_;
  undefined *stack_ptr_;
  long long stack_long_;
  int stack_int_;
  create_thread_context(&stack_ptr_);
  int_var_ = (*(int *)(handle + STRING_BUFFER_SIZE) - stack_int_) + 1;
  int_var_ = 0;
  if (0 < int_var_) {
    long_var_ = 0;
    do {
      uint_var_ = 0;
      long_var_ = 0;
      if (0 < stack_int_) {
        do {
          if (*(char *)(*(long long *)(handle + 8) + long_var_ + long_var_) != *(char *)(uint_var_ + stack_long_))
          break;
          uint_var_ = (ulong long)((int)uint_var_ + 1);
          long_var_ = long_var_ + 1;
        } while (long_var_ < stack_int_);
      }
      if ((int)uint_var_ == stack_int_) goto label_;
      int_var_ = int_var_ + 1;
      long_var_ = long_var_ + 1;
    } while (long_var_ < int_var_);
  }
  int_var_ = -1;
label_:
  stack_ptr_ = &g_threadString2;
  if (stack_long_ != 0) {
    handle_system_error();
  }
  return int_var_;
}
// 处理句柄和标志位
int process_handle_parameters(long long handle,long long flags)
{
  int int_var_;
  long long long_var_;
  int int_var_;
  long long long_var_;
  ulong long uint_var_;
  int_var_ = *(int *)(flags + STRING_BUFFER_SIZE);
  int_var_ = *(int *)(handle + STRING_BUFFER_SIZE) - int_var_;
  if (-1 < int_var_) {
    long_var_ = (long long)int_var_;
    do {
      uint_var_ = 0;
      long_var_ = 0;
      if (0 < int_var_) {
        do {
          if (*(char *)(*(long long *)(handle + 8) + long_var_ + long_var_) !=
              *(char *)(uint_var_ + *(long long *)(flags + 8))) break;
          uint_var_ = (ulong long)((int)uint_var_ + 1);
          long_var_ = long_var_ + 1;
        } while (long_var_ < int_var_);
      }
      if ((int)uint_var_ == int_var_) {
        return int_var_;
      }
      int_var_ = int_var_ + -1;
      long_var_ = long_var_ + -1;
    } while (-1 < long_var_);
  }
  return -1;
}
unsigned long long * setup_thread_parameters(long long handle,unsigned long long *flags,int mutex_attr,int mutex_type)
{
  unsigned char uint_var_;
  int int_var_;
  int int_var_;
  ulong long uint_var_;
  ulong long uint_var_;
  uint_var_ = (ulong long)mutex_attr;
  int_var_ = mutex_type;
  if (mutex_type < 0) {
    int_var_ = *(int *)(handle + STRING_BUFFER_SIZE);
  }
  *flags = &g_threadString4;
  flags[1] = 0;
  *(unsigned int *)(flags + 2) = 0;
  *flags = &g_threadString2;
  flags[3] = 0;
  flags[1] = 0;
  *(unsigned int *)(flags + 2) = 0;
  int_var_ = *(int *)(handle + STRING_BUFFER_SIZE) - mutex_attr;
  if (int_var_ - mutex_attr < int_var_) {
    int_var_ = int_var_ - mutex_attr;
  }
  system_thread_manager_001(flags,int_var_ + 1,mutex_attr,mutex_type,1,线程池默认标志);
  for (uint_var_ = uint_var_;
      ((long long)uint_var_ < (long long)int_var_ && ((uint)uint_var_ < *(uint *)(handle + STRING_BUFFER_SIZE)));
      uint_var_ = (ulong long)((uint)uint_var_ + 1)) {
    uint_var_ = *(unsigned char *)(uint_var_ + *(long long *)(handle + 8));
    system_thread_manager_001(flags,*(int *)(flags + 2) + 1);
    *(unsigned char *)((ulong long)*(uint *)(flags + 2) + flags[1]) = uint_var_;
    *(unsigned char *)((ulong long)(*(int *)(flags + 2) + 1) + flags[1]) = 0;
    *(int *)(flags + 2) = *(int *)(flags + 2) + 1;
    uint_var_ = uint_var_ + 1;
  }
  return flags;
}
  data_180c95fea = 1;
  stack_ptr_ = &g_threadString2;
  stack_var_ = 0;
  stack_ptr_ = (unsigned long long *)0x0;
  stack_var_ = 0;
  ptr_var_ = (unsigned long long *)
           function_(global_data_,STRING_BUFFER_SIZE,CONCAT71((int7)((ulong long)char_ptr_var_ >> 8),0x13));
  *(unsigned char *)ptr_var_ = 0;
  stack_ptr_ = ptr_var_;
  uint_var_ = allocate_helper_buffer(ptr_var_);
  *ptr_var_ = 0x7265206573726150;
  *(unsigned int *)(ptr_var_ + 1) = 0x3a726f72;
  *(unsigned short *)((long long)ptr_var_ + 0xc) = 0x2720;
  *(unsigned char *)((long long)ptr_var_ + 0xe) = 0;
  stack_var_ = 0xe;
  init_result0 = -1;
  stack_var_._0_4_ = uint_var_;
  if (handle != 0) {
    do {
      long_var_ = init_result0;
      init_result0 = long_var_ + 1;
    } while (*(char *)(init_result0 + handle) != '\0');
    if (0 < (int)init_result0) {
      int_var_ = (int)long_var_;
      if ((int_var_ != -0xf) && (uint_var_ < int_var_ + STRING_BUFFER_SIZEU)) {
        stack_var_ = 0x13;
        ptr_var_ = (unsigned long long *)function_(global_data_,ptr_var_,int_var_ + STRING_BUFFER_SIZEU,STRING_BUFFER_SIZE);
        stack_ptr_ = ptr_var_;
        stack_var_._0_4_ = allocate_helper_buffer(ptr_var_);
      }
      memcpy((unsigned char *)((long long)ptr_var_ + 0xe),handle,(long long)(int_var_ + 2));
    }
  }
  if (ptr_var_ == (unsigned long long *)0x0) {
    ptr_var_ = (unsigned long long *)function_(global_data_,0x19,0x13);
    *(unsigned char *)ptr_var_ = 0;
label_:
    stack_ptr_ = ptr_var_;
    uint_var_ = allocate_helper_buffer(ptr_var_);
  }
  else if (uint_var_ < 0x19) {
    stack_var_ = 0x13;
    ptr_var_ = (unsigned long long *)function_(global_data_,ptr_var_,0x19,STRING_BUFFER_SIZE);
    goto label_;
  }
  *(unsigned long long *)((long long)ptr_var_ + 0xe) = 0x6e696c2074612027;
  *(unsigned short *)((long long)ptr_var_ + 0x16) = CONFIG_PATH_BUFFER_SIZE65;
  *(unsigned char *)(ptr_var_ + 3) = 0;
  stack_var_ = 0x18;
  stack_var_._0_4_ = uint_var_;
  function_(acStack_40,&unknown_1809fd0a0,int_var_);
  init_result0 = -1;
  do {
    long_var_ = init_result0;
    init_result0 = long_var_ + 1;
  } while (acStack_40[long_var_ + 1] != '\0');
  int_var_ = (int)(long_var_ + 1);
  if (int_var_ < 1) {
    if (data_180c8eced != '\0') {
      _Exit(5);
    }
    stack_ptr_ = &g_threadString2;
    if (ptr_var_ != (unsigned long long *)0x0) {
      handle_system_error(ptr_var_);
    }
    stack_ptr_ = (unsigned long long *)0x0;
    stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
    stack_ptr_ = &g_threadString4;
    system_crypto_001(stack_var_ ^ (ulong long)auStack_98);
  }
  if (int_var_ != -0x18) {
    uint_var_ = int_var_ + 0x19;
    if (ptr_var_ == (unsigned long long *)0x0) {
      if ((int)uint_var_ < STRING_BUFFER_SIZE) {
        uint_var_ = STRING_BUFFER_SIZE;
      }
      ptr_var_ = (unsigned long long *)function_(global_data_,(long long)(int)uint_var_,0x13);
      *(unsigned char *)ptr_var_ = 0;
    }
    else {
      if (uint_var_ <= uint_var_) goto label_;
      stack_var_ = 0x13;
      ptr_var_ = (unsigned long long *)function_(global_data_,ptr_var_,uint_var_,STRING_BUFFER_SIZE);
    }
    stack_ptr_ = ptr_var_;
    stack_var_._0_4_ = allocate_helper_buffer(ptr_var_);
  }
label_:
  memcpy(ptr_var_ + 3,acStack_40,(long long)((int)long_var_ + 2));
}
char * function_(unsigned int handle,unsigned long long flags,char *mutex_attr,unsigned long long mutex_type,
                    long long *param_5,long long param_6,ulong long param_7,unsigned long long *param_8,
                    int *param_9,unsigned long long *handle0)
{
  char cVar1;
  unsigned int flags;
  unsigned int uint_var_;
  undefined *ptr_var_;
  int int_var_;
  unsigned int uint_var_;
  uint uint_var_;
  long long long_var_;
  char *char_ptr_var_;
  unsigned int *ptr_var_;
  unsigned int *ptr_var_;
  unsigned char *ptr_var_;
  undefined *ptr_var_;
  char *char_ptr_var_;
  char *char_ptr_var_;
  ulong long uint_var_;
  char *char_ptr_var_;
  char *char_ptr_var_;
  char *char_ptr_var_;
  long long long_var_;
  char *char_ptr_var_;
  undefined *stack_ptr_;
  undefined *stack_ptr_;
  uint stack_var_;
  unsigned long long stack_var_;
  long long *plStack_120;
  undefined *stack_ptr_;
  undefined *stack_ptr_;
  unsigned int stack_var_;
  ulong long stack_var_;
  undefined *stack_ptr_;
  unsigned int *stack_ptr_;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  ulong long stack_var_;
  long long stack_long_;
  unsigned long long *stack_ptr_;
  undefined *stack_ptr_;
  unsigned int *stack_ptr_;
  unsigned int stack_var_;
  ulong long stack_var_;
  unsigned long long *stack_ptr_;
  undefined *stack_ptr_;
  unsigned int *stack_ptr_;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  int *piStack_78;
  char *pcStack_70;
  unsigned long long stack_var_;
  undefined *stack_ptr_;
  unsigned long long stack_var_;
  unsigned long long *stack_ptr_;
  ulong long uint_var_;
  stack_var_ = 线程池默认标志;
  plStack_120 = param_5;
  stack_long_ = param_6;
  stack_var_ = param_7;
  stack_ptr_ = param_8;
  piStack_78 = param_9;
  stack_ptr_ = handle0;
  stack_ptr_ = handle0;
  stack_ptr_ = &g_threadString2;
  stack_var_ = 0;
  stack_ptr_ = (undefined *)0x0;
  stack_var_ = 0;
  pcStack_70 = mutex_attr;
  stack_var_ = flags;
  long_var_ = process_system_configuration(&stack_ptr_,mutex_type,handle,param_5);
  stack_var_ = *(unsigned int *)(long_var_ + STRING_BUFFER_SIZE);
  stack_ptr_ = *(undefined **)(long_var_ + 8);
  stack_var_ = *(ulong long *)(long_var_ + 0x18);
  *(unsigned int *)(long_var_ + STRING_BUFFER_SIZE) = 0;
  *(unsigned long long *)(long_var_ + 8) = 0;
  *(unsigned long long *)(long_var_ + 0x18) = 0;
  stack_ptr_ = &g_threadString2;
  stack_ptr_ = stack_ptr_;
  if (stack_ptr_ != (unsigned int *)0x0) {
    handle_system_error();
  }
  stack_ptr_ = (unsigned int *)0x0;
  stack_var_ = (char *)((ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE);
  stack_ptr_ = &g_threadString4;
  ptr_var_ = &data_18098bc73;
  if (stack_ptr_ != (undefined *)0x0) {
    ptr_var_ = stack_ptr_;
  }
  function_(&unknown_180a3cac0,ptr_var_);
  *param_9 = 0;
  long_var_ = *param_5;
  int_var_ = 0;
  if (long_var_ != param_5[1]) {
    do {
      if (0xf < int_var_) {
        function_(&unknown_180a3ca70,STRING_BUFFER_SIZE);
      }
      ptr_var_ = &data_18098bc73;
      if (*(undefined **)(long_var_ + 8) != (undefined *)0x0) {
        ptr_var_ = *(undefined **)(long_var_ + 8);
      }
      function_(&unknown_180a3ca20,ptr_var_);
      int_var_ = *param_9;
      long_var_ = (long long)int_var_ * 0x3088 + stack_long_;
      ptr_var_ = &data_18098bc73;
      if (*(undefined **)(long_var_ + 8) != (undefined *)0x0) {
        ptr_var_ = *(undefined **)(long_var_ + 8);
      }
      stack_ptr_ = &g_threadString2;
      stack_var_ = 0;
      stack_ptr_ = (undefined *)0x0;
      stack_var_ = 0;
      uint_var_ = *(uint *)(stack_ptr_ + 2);
      uint_var_ = (ulong long)uint_var_;
      if (stack_ptr_[1] != 0) {
        system_thread_manager_001(&stack_ptr_,uint_var_);
      }
      ptr_var_ = stack_ptr_;
      if (uint_var_ != 0) {
        memcpy(stack_ptr_,stack_ptr_[1],uint_var_);
      }
      if (stack_ptr_ != (undefined *)0x0) {
        stack_ptr_[uint_var_] = 0;
      }
      stack_var_ = uint_var_;
      stack_var_._4_4_ = *(uint *)((long long)stack_ptr_ + 0x1c);
      if (ptr_var_ != (undefined *)0x0) {
        uint_var_ = 0xffffffffffffffff;
        do {
          uint_var_ = uint_var_;
          uint_var_ = uint_var_ + 1;
        } while (ptr_var_[uint_var_] != '\0');
        param_5 = plStack_120;
        if (0 < (int)uint_var_) {
          system_thread_manager_001(&stack_ptr_,uint_var_ & 0xffffffff);
          memcpy(stack_ptr_ + stack_var_,ptr_var_,(long long)((int)uint_var_ + 2));
        }
      }
      ptr_var_ = &data_18098bc73;
      if (stack_ptr_ != (undefined *)0x0) {
        ptr_var_ = stack_ptr_;
      }
      function_(ptr_var_,long_var_,(long long)int_var_ * CONFIG_PATH_BUFFER_SIZE + param_7);
      stack_ptr_ = &g_threadString2;
      if (ptr_var_ != (undefined *)0x0) {
        handle_system_error(ptr_var_);
      }
      stack_ptr_ = (undefined *)0x0;
      stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
      stack_ptr_ = &g_threadString4;
      long_var_ = long_var_ + CONFIG_PATH_BUFFER_SIZE;
      int_var_ = *piStack_78 + 1;
      *piStack_78 = int_var_;
      param_7 = stack_var_;
      mutex_attr = pcStack_70;
      param_6 = stack_long_;
      param_9 = piStack_78;
    } while (long_var_ != param_5[1]);
  }
  char_ptr_var_ = (char *)0x0;
  stack_var_ = stack_var_ & 64位整数掩码;
  plStack_120 = (long long *)((ulong long)plStack_120 & 0xffffffff00000000);
  char_ptr_var_ = char_ptr_var_;
  if (0 < int_var_) {
    do {
      char_ptr_var_ = "base";
      do {
        char_ptr_var_ = char_ptr_var_;
        char_ptr_var_ = char_ptr_var_ + 1;
      } while (*char_ptr_var_ != '\0');
      for (char_ptr_var_ = *(char **)(param_6 + 0x30); char_ptr_var_ = char_ptr_var_, char_ptr_var_ != (char *)0x0;
          char_ptr_var_ = *(char **)(char_ptr_var_ + 0x58)) {
        char_ptr_var_ = *(char **)char_ptr_var_;
        if (char_ptr_var_ == (char *)0x0) {
          char_ptr_var_ = (char *)0x180d48d24;
          char_ptr_var_ = char_ptr_var_;
        }
        else {
          char_ptr_var_ = *(char **)(char_ptr_var_ + STRING_BUFFER_SIZE);
        }
        if (char_ptr_var_ == char_ptr_var_ + -0x180a04ee3) {
          char_ptr_var_ = char_ptr_var_ + (long long)char_ptr_var_;
          char_ptr_var_ = char_ptr_var_;
          if (char_ptr_var_ <= char_ptr_var_) break;
          long_var_ = (long long)&data_180a04ee4 - (long long)char_ptr_var_;
          while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
            char_ptr_var_ = char_ptr_var_ + 1;
            if (char_ptr_var_ <= char_ptr_var_) goto label_;
          }
        }
      }
label_:
      *stack_ptr_ = char_ptr_var_;
      if (char_ptr_var_ != (char *)0x0) {
        if (mutex_attr == (char *)0x0) {
          char_ptr_var_ = *(char **)(char_ptr_var_ + 0x30);
        }
        else {
          cVar1 = *mutex_attr;
          char_ptr_var_ = mutex_attr;
          while (cVar1 != '\0') {
            char_ptr_var_ = char_ptr_var_ + 1;
            cVar1 = *char_ptr_var_;
          }
          for (char_ptr_var_ = *(char **)(char_ptr_var_ + 0x30); char_ptr_var_ = char_ptr_var_, char_ptr_var_ != (char *)0x0;
              char_ptr_var_ = *(char **)(char_ptr_var_ + 0x58)) {
            char_ptr_var_ = *(char **)char_ptr_var_;
            if (char_ptr_var_ == (char *)0x0) {
              char_ptr_var_ = (char *)0x180d48d24;
              char_ptr_var_ = char_ptr_var_;
            }
            else {
              char_ptr_var_ = *(char **)(char_ptr_var_ + STRING_BUFFER_SIZE);
            }
            if (char_ptr_var_ == char_ptr_var_ + -(long long)mutex_attr) {
              char_ptr_var_ = char_ptr_var_ + (long long)char_ptr_var_;
              char_ptr_var_ = char_ptr_var_;
              if (char_ptr_var_ <= char_ptr_var_) break;
              long_var_ = (long long)mutex_attr - (long long)char_ptr_var_;
              while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
                char_ptr_var_ = char_ptr_var_ + 1;
                if (char_ptr_var_ <= char_ptr_var_) goto label_;
              }
            }
          }
        }
label_:
        *stack_ptr_ = char_ptr_var_;
        if (char_ptr_var_ == (char *)0x0) {
          stack_ptr_ = &g_threadString2;
          stack_ptr_ = (unsigned int *)0x0;
          stack_var_ = 0;
          stack_var_ = char_ptr_var_;
          ptr_var_ = (unsigned int *)function_(global_data_,0x15,0x13);
          *(unsigned char *)ptr_var_ = 0;
          stack_ptr_ = ptr_var_;
          uint_var_ = allocate_helper_buffer(ptr_var_);
          stack_var_ = (char *)CONCAT44(stack_var_._4_4_,uint_var_);
          *ptr_var_ = CONFIG_PATH_BUFFER_SIZE4c4d58;
          ptr_var_[1] = 0x65646f6e;
          ptr_var_[2] = 0x74697720;
          ptr_var_[3] = 0x616e2068;
          ptr_var_[4] = 0x2220656d;
          *(unsigned char *)(ptr_var_ + 5) = 0;
          stack_var_ = 0x14;
          stack_ptr_ = &g_threadString2;
          stack_var_ = 0;
          stack_ptr_ = (unsigned int *)0x0;
          stack_var_ = 0;
          ptr_var_ = (unsigned int *)function_(global_data_,0x15,0x13);
          *(unsigned char *)ptr_var_ = 0;
          stack_ptr_ = ptr_var_;
          uint_var_ = allocate_helper_buffer(ptr_var_);
          uint_var_ = ptr_var_[1];
          flags = ptr_var_[2];
          uint_var_ = ptr_var_[3];
          *ptr_var_ = *ptr_var_;
          ptr_var_[1] = uint_var_;
          ptr_var_[2] = flags;
          ptr_var_[3] = uint_var_;
          ptr_var_[4] = ptr_var_[4];
          stack_var_ = 0x14;
          *(unsigned char *)(ptr_var_ + 5) = 0;
          stack_var_ = (ulong long)uint_var_;
          if (mutex_attr != (char *)0x0) {
            long_var_ = -1;
            do {
              long_var_ = long_var_;
              long_var_ = long_var_ + 1;
            } while (mutex_attr[long_var_] != '\0');
            if (0 < (int)long_var_) {
              int_var_ = (int)long_var_;
              if ((int_var_ != -0x15) && (uint_var_ < int_var_ + 0x16U)) {
                ptr_var_ = (unsigned int *)
                          function_(global_data_,ptr_var_,int_var_ + 0x16U,STRING_BUFFER_SIZE,0x13);
                stack_ptr_ = ptr_var_;
                uint_var_ = allocate_helper_buffer(ptr_var_);
                stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
              }
              memcpy(ptr_var_ + 5,mutex_attr,(long long)(int_var_ + 2));
            }
          }
          ptr_var_ = (unsigned char *)0x0;
          stack_ptr_ = &g_threadString2;
          stack_var_ = 0;
          stack_ptr_ = (unsigned int *)0x0;
          stack_var_ = 0;
          ptr_var_ = (unsigned int *)function_(global_data_,0x16,0x13);
          *(unsigned char *)ptr_var_ = 0;
          stack_ptr_ = ptr_var_;
          uint_var_ = allocate_helper_buffer(ptr_var_);
          stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
          *ptr_var_ = 0x6f632022;
          ptr_var_[1] = CONFIG_PATH_BUFFER_SIZE646c75;
          ptr_var_[2] = CONFIG_PATH_BUFFER_SIZE746f6e;
          ptr_var_[3] = 0x66206562;
          ptr_var_[4] = 0x646e756f;
          *(unsigned short *)(ptr_var_ + 5) = 0x21;
          stack_var_ = 0x15;
          stack_ptr_ = &g_threadString2;
          stack_var_ = 0;
          stack_ptr_ = (unsigned char *)0x0;
          stack_var_ = 0;
          if (ptr_var_ != (unsigned int *)0x0) {
            ptr_var_ = (unsigned char *)function_(global_data_,0x15,0x13);
            *ptr_var_ = 0;
            stack_ptr_ = ptr_var_;
            uint_var_ = allocate_helper_buffer(ptr_var_);
            stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
          }
          memcpy(ptr_var_,ptr_var_,0x14);
        }
        int_var_ = validate_config_handle(char_ptr_var_,stack_var_);
        uint_var_ = (int)char_ptr_var_ + int_var_;
        char_ptr_var_ = (char *)(ulong long)uint_var_;
        stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      }
      int_var_ = (int)plStack_120 + 1;
      plStack_120 = (long long *)CONCAT44(plStack_120._4_4_,int_var_);
      param_6 = param_6 + 0x3088;
      mutex_attr = pcStack_70;
      stack_long_ = param_6;
    } while (int_var_ < *param_9);
  }
  stack_ptr_ = &g_threadString2;
  if (stack_ptr_ != (undefined *)0x0) {
    handle_system_error();
  }
  stack_ptr_ = (undefined *)0x0;
  stack_var_ = stack_var_ & 64位整数掩码;
  stack_ptr_ = &g_threadString4;
  *stack_ptr_ = &g_threadString2;
  if (stack_ptr_[1] != 0) {
    handle_system_error();
  }
  stack_ptr_[1] = 0;
  *(unsigned int *)(stack_ptr_ + 3) = 0;
  *stack_ptr_ = &g_threadString4;
  return char_ptr_var_;
}
char * function_(unsigned long long handle,unsigned long long flags,unsigned long long *mutex_attr,long long mutex_type,
                    unsigned long long param_5,unsigned long long *param_6,unsigned long long *param_7)
{
  unsigned int uint_var_;
  unsigned int flags;
  unsigned int uint_var_;
  uint uint_var_;
  long long long_var_;
  char *char_ptr_var_;
  unsigned int *ptr_var_;
  unsigned int *ptr_var_;
  char *char_ptr_var_;
  undefined *ptr_var_;
  char *char_ptr_var_;
  char *char_ptr_var_;
  char *char_ptr_var_;
  char *char_ptr_var_;
  undefined *stack_ptr_;
  unsigned int *stack_ptr_;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  undefined *stack_ptr_;
  unsigned int *stack_ptr_;
  unsigned int stack_var_;
  ulong long stack_var_;
  undefined *stack_ptr_;
  unsigned int *stack_ptr_;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  undefined *stack_ptr_;
  long long stack_long_;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  unsigned long long *stack_ptr_;
  unsigned long long *stack_ptr_;
  stack_var_ = 线程池默认标志;
  stack_ptr_ = param_7;
  char_ptr_var_ = (char *)0x0;
  stack_ptr_ = mutex_attr;
  long_var_ = function_(param_7,&stack_ptr_);
  ptr_var_ = &data_18098bc73;
  if (*(undefined **)(long_var_ + 8) != (undefined *)0x0) {
    ptr_var_ = *(undefined **)(long_var_ + 8);
  }
  function_(ptr_var_,mutex_type,param_5);
  stack_ptr_ = &g_threadString2;
  if (stack_ptr_ != (unsigned int *)0x0) {
    handle_system_error();
  }
  stack_ptr_ = (unsigned int *)0x0;
  stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
  stack_ptr_ = &g_threadString4;
  char_ptr_var_ = "base";
  do {
    char_ptr_var_ = char_ptr_var_;
    char_ptr_var_ = char_ptr_var_ + 1;
  } while (*char_ptr_var_ != '\0');
  for (char_ptr_var_ = *(char **)(mutex_type + 0x30); char_ptr_var_ = char_ptr_var_, char_ptr_var_ != (char *)0x0;
      char_ptr_var_ = *(char **)(char_ptr_var_ + 0x58)) {
    char_ptr_var_ = *(char **)char_ptr_var_;
    if (char_ptr_var_ == (char *)0x0) {
      char_ptr_var_ = (char *)0x180d48d24;
      char_ptr_var_ = char_ptr_var_;
    }
    else {
      char_ptr_var_ = *(char **)(char_ptr_var_ + STRING_BUFFER_SIZE);
    }
    if (char_ptr_var_ == char_ptr_var_ + -0x180a04ee3) {
      char_ptr_var_ = char_ptr_var_ + (long long)char_ptr_var_;
      char_ptr_var_ = char_ptr_var_;
      if (char_ptr_var_ <= char_ptr_var_) break;
      long_var_ = (long long)&data_180a04ee4 - (long long)char_ptr_var_;
      while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
        char_ptr_var_ = char_ptr_var_ + 1;
        if (char_ptr_var_ <= char_ptr_var_) goto label_;
      }
    }
  }
label_:
  *param_6 = char_ptr_var_;
  if (char_ptr_var_ != (char *)0x0) {
    char_ptr_var_ = "decal_textures";
    do {
      char_ptr_var_ = char_ptr_var_;
      char_ptr_var_ = char_ptr_var_ + 1;
    } while (*char_ptr_var_ != '\0');
    for (char_ptr_var_ = *(char **)(char_ptr_var_ + 0x30); char_ptr_var_ = char_ptr_var_, char_ptr_var_ != (char *)0x0;
        char_ptr_var_ = *(char **)(char_ptr_var_ + 0x58)) {
      char_ptr_var_ = *(char **)char_ptr_var_;
      if (char_ptr_var_ == (char *)0x0) {
        char_ptr_var_ = (char *)0x180d48d24;
        char_ptr_var_ = char_ptr_var_;
      }
      else {
        char_ptr_var_ = *(char **)(char_ptr_var_ + STRING_BUFFER_SIZE);
      }
      if (char_ptr_var_ == char_ptr_var_ + -0x180a12dff) {
        char_ptr_var_ = char_ptr_var_ + (long long)char_ptr_var_;
        char_ptr_var_ = char_ptr_var_;
        if (char_ptr_var_ <= char_ptr_var_) break;
        long_var_ = (long long)&data_180a12e00 - (long long)char_ptr_var_;
        while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
          char_ptr_var_ = char_ptr_var_ + 1;
          if (char_ptr_var_ <= char_ptr_var_) goto label_;
        }
      }
    }
label_:
    *param_6 = char_ptr_var_;
    if (char_ptr_var_ == (char *)0x0) {
      stack_ptr_ = &g_threadString2;
      stack_var_ = 0;
      stack_ptr_ = (unsigned int *)0x0;
      stack_var_ = 0;
      ptr_var_ = (unsigned int *)function_(global_data_,0x15,0x13);
      *(unsigned char *)ptr_var_ = 0;
      stack_ptr_ = ptr_var_;
      uint_var_ = allocate_helper_buffer(ptr_var_);
      stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      *ptr_var_ = CONFIG_PATH_BUFFER_SIZE4c4d58;
      ptr_var_[1] = 0x65646f6e;
      ptr_var_[2] = 0x74697720;
      ptr_var_[3] = 0x616e2068;
      ptr_var_[4] = 0x2220656d;
      *(unsigned char *)(ptr_var_ + 5) = 0;
      stack_var_ = 0x14;
      stack_ptr_ = &g_threadString2;
      stack_var_ = 0;
      stack_ptr_ = (unsigned int *)0x0;
      stack_var_ = 0;
      ptr_var_ = (unsigned int *)function_(global_data_,0x15,0x13);
      *(unsigned char *)ptr_var_ = 0;
      stack_ptr_ = ptr_var_;
      uint_var_ = allocate_helper_buffer(ptr_var_);
      uint_var_ = ptr_var_[1];
      uint_var_ = ptr_var_[2];
      flags = ptr_var_[3];
      *ptr_var_ = *ptr_var_;
      ptr_var_[1] = uint_var_;
      ptr_var_[2] = uint_var_;
      ptr_var_[3] = flags;
      ptr_var_[4] = ptr_var_[4];
      stack_var_ = 0x14;
      *(unsigned char *)(ptr_var_ + 5) = 0;
      stack_var_ = (ulong long)uint_var_;
      if (uint_var_ < 0x23) {
        ptr_var_ = (unsigned int *)function_(global_data_,ptr_var_,0x23,STRING_BUFFER_SIZE,0x13);
        stack_ptr_ = ptr_var_;
        uint_var_ = allocate_helper_buffer(ptr_var_);
        stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      }
      *(unsigned long long *)(ptr_var_ + 5) = 0x65745f6c61636564;
      ptr_var_[7] = 0x72757478;
      *(unsigned short *)(ptr_var_ + 8) = 0x7365;
      *(unsigned char *)((long long)ptr_var_ + 0x22) = 0;
      stack_var_ = 0x22;
      stack_ptr_ = &g_threadString2;
      stack_var_ = 0;
      stack_ptr_ = (unsigned int *)0x0;
      stack_var_ = 0;
      ptr_var_ = (unsigned int *)function_(global_data_,0x16,0x13);
      *(unsigned char *)ptr_var_ = 0;
      stack_ptr_ = ptr_var_;
      uint_var_ = allocate_helper_buffer(ptr_var_);
      stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      *ptr_var_ = 0x6f632022;
      ptr_var_[1] = CONFIG_PATH_BUFFER_SIZE646c75;
      ptr_var_[2] = CONFIG_PATH_BUFFER_SIZE746f6e;
      ptr_var_[3] = 0x66206562;
      ptr_var_[4] = 0x646e756f;
      *(unsigned short *)(ptr_var_ + 5) = 0x21;
      stack_var_ = 0x15;
      long_var_ = function_(&stack_ptr_,&stack_ptr_,&stack_ptr_);
      ptr_var_ = &data_18098bc73;
      if (*(undefined **)(long_var_ + 8) != (undefined *)0x0) {
        ptr_var_ = *(undefined **)(long_var_ + 8);
      }
      system_thread_003(ptr_var_);
      stack_ptr_ = &g_threadString2;
      if (stack_long_ != 0) {
        handle_system_error();
      }
      stack_long_ = 0;
      stack_var_ = 0;
      stack_ptr_ = &g_threadString4;
      stack_ptr_ = &g_threadString2;
      handle_system_error(ptr_var_);
    }
    uint_var_ = validate_config_handle(char_ptr_var_,&unknown_180a12e10);
    char_ptr_var_ = (char *)(ulong long)uint_var_;
  }
  *mutex_attr = &g_threadString2;
  if (mutex_attr[1] != 0) {
    handle_system_error();
  }
  mutex_attr[1] = 0;
  *(unsigned int *)(mutex_attr + 3) = 0;
  *mutex_attr = &g_threadString4;
  *param_7 = &g_threadString2;
  if (param_7[1] != 0) {
    handle_system_error();
  }
  param_7[1] = 0;
  *(unsigned int *)(param_7 + 3) = 0;
  *param_7 = &g_threadString4;
  return char_ptr_var_;
}
long long process_system_configuration(long long handle,long long flags,unsigned int mutex_attr,long long mutex_type)
{
  char cVar1;
  char cVar2;
  char *char_ptr_var_;
  char *char_ptr_var_;
  char *char_ptr_var_;
  long long long_var_;
  unsigned long long *ptr_var_;
  char *char_ptr_var_;
  unsigned long long *ptr_var_;
  char *char_ptr_var_;
  char *char_ptr_var_;
  bool bVar12;
  unsigned int uint_var_;
  unsigned long long uint_var_;
  undefined *stack_ptr_;
  long long stack_long_;
  int stack_int_;
  ulong long stack_var_;
  undefined *stack_ptr_;
  char *pcStack_48;
  int stack_int_;
  unsigned long long stack_var_;
  uint_var_ = 线程池默认标志;
  char_ptr_var_ = (char *)0x0;
  function_(mutex_type);
  function_(handle,mutex_attr);
  uint_var_ = 1;
  char_ptr_var_ = "base";
  do {
    char_ptr_var_ = char_ptr_var_;
    char_ptr_var_ = char_ptr_var_ + 1;
  } while (*char_ptr_var_ != '\0');
  for (char_ptr_var_ = *(char **)(flags + 0x30); char_ptr_var_ = char_ptr_var_, char_ptr_var_ != (char *)0x0;
      char_ptr_var_ = *(char **)(char_ptr_var_ + 0x58)) {
    char_ptr_var_ = *(char **)char_ptr_var_;
    if (char_ptr_var_ == (char *)0x0) {
      char_ptr_var_ = (char *)0x180d48d24;
      char_ptr_var_ = char_ptr_var_;
    }
    else {
      char_ptr_var_ = *(char **)(char_ptr_var_ + STRING_BUFFER_SIZE);
    }
    if (char_ptr_var_ == char_ptr_var_ + -0x180a04ee3) {
      char_ptr_var_ = char_ptr_var_ + (long long)char_ptr_var_;
      char_ptr_var_ = char_ptr_var_;
      if (char_ptr_var_ <= char_ptr_var_) break;
      long_var_ = (long long)&data_180a04ee4 - (long long)char_ptr_var_;
      while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
        char_ptr_var_ = char_ptr_var_ + 1;
        if (char_ptr_var_ <= char_ptr_var_) goto label_;
      }
    }
  }
label_:
  char_ptr_var_ = "file";
  do {
    char_ptr_var_ = char_ptr_var_;
    char_ptr_var_ = char_ptr_var_ + 1;
  } while (*char_ptr_var_ != '\0');
  ptr_var_ = *(unsigned long long **)(char_ptr_var_ + 0x30);
  do {
    if (ptr_var_ == (unsigned long long *)0x0) {
      return handle;
    }
    char_ptr_var_ = (char *)*ptr_var_;
    if (char_ptr_var_ == (char *)0x0) {
      char_ptr_var_ = (char *)0x180d48d24;
      char_ptr_var_ = char_ptr_var_;
    }
    else {
      char_ptr_var_ = (char *)ptr_var_[2];
    }
    if (char_ptr_var_ == char_ptr_var_ + -0x180a0794b) {
      char_ptr_var_ = char_ptr_var_ + (long long)char_ptr_var_;
      if (char_ptr_var_ <= char_ptr_var_) break;
      long_var_ = (long long)&unknown_180a0794c - (long long)char_ptr_var_;
      while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
        char_ptr_var_ = char_ptr_var_ + 1;
        if (char_ptr_var_ <= char_ptr_var_) goto label_;
      }
    }
    ptr_var_ = (unsigned long long *)ptr_var_[0xb];
  } while( true );
label_:
  stack_ptr_ = &g_threadString2;
  stack_var_ = 0;
  pcStack_48 = (char *)0x0;
  stack_int_ = 0;
  char_ptr_var_ = "type";
  do {
    char_ptr_var_ = char_ptr_var_;
    char_ptr_var_ = char_ptr_var_ + 1;
  } while (*char_ptr_var_ != '\0');
  for (ptr_var_ = (unsigned long long *)ptr_var_[8]; ptr_var_ != (unsigned long long *)0x0;
      ptr_var_ = (unsigned long long *)ptr_var_[6]) {
    char_ptr_var_ = (char *)*ptr_var_;
    if (char_ptr_var_ == (char *)0x0) {
      char_ptr_var_ = (char *)0x180d48d24;
      char_ptr_var_ = char_ptr_var_;
    }
    else {
      char_ptr_var_ = (char *)ptr_var_[2];
    }
    if (char_ptr_var_ == char_ptr_var_ + -0x180a0ee2f) {
      char_ptr_var_ = char_ptr_var_ + (long long)char_ptr_var_;
      if (char_ptr_var_ <= char_ptr_var_) {
label_:
        long_var_ = 0x180d48d24;
        if (ptr_var_[1] != 0) {
          long_var_ = ptr_var_[1];
        }
        function_(&stack_ptr_,long_var_,char_ptr_var_,ptr_var_,uint_var_,uint_var_);
        break;
      }
      long_var_ = (long long)&unknown_180a0ee30 - (long long)char_ptr_var_;
      while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
        char_ptr_var_ = char_ptr_var_ + 1;
        if (char_ptr_var_ <= char_ptr_var_) goto label_;
      }
    }
  }
  if (stack_int_ == *(int *)(handle + STRING_BUFFER_SIZE)) {
    if (stack_int_ == 0) {
label_:
      if (*(int *)(handle + STRING_BUFFER_SIZE) != 0) goto label_;
      bVar12 = true;
    }
    else {
      char_ptr_var_ = pcStack_48;
      do {
        cVar1 = *char_ptr_var_;
        cVar2 = char_ptr_var_[*(long long *)(handle + 8) - (long long)pcStack_48];
        if (cVar1 != cVar2) break;
        char_ptr_var_ = char_ptr_var_ + 1;
      } while (cVar2 != '\0');
      bVar12 = cVar1 == cVar2;
    }
  }
  else {
    if (stack_int_ == 0) goto label_;
label_:
    bVar12 = false;
  }
  if (bVar12) {
    stack_ptr_ = &g_threadString2;
    stack_var_ = 0;
    stack_long_ = 0;
    stack_int_ = 0;
    char_ptr_var_ = "name";
    do {
      char_ptr_var_ = char_ptr_var_;
      char_ptr_var_ = char_ptr_var_ + 1;
    } while (*char_ptr_var_ != '\0');
    for (ptr_var_ = (unsigned long long *)ptr_var_[8]; ptr_var_ != (unsigned long long *)0x0;
        ptr_var_ = (unsigned long long *)ptr_var_[6]) {
      char_ptr_var_ = (char *)*ptr_var_;
      if (char_ptr_var_ == (char *)0x0) {
        char_ptr_var_ = (char *)0x180d48d24;
        char_ptr_var_ = char_ptr_var_;
      }
      else {
        char_ptr_var_ = (char *)ptr_var_[2];
      }
      if (char_ptr_var_ == char_ptr_var_ + -0x180a03a83) {
        char_ptr_var_ = char_ptr_var_ + (long long)char_ptr_var_;
        if (char_ptr_var_ <= char_ptr_var_) {
label_:
          long_var_ = 0x180d48d24;
          if (ptr_var_[1] != 0) {
            long_var_ = ptr_var_[1];
          }
          function_(&stack_ptr_,long_var_);
          break;
        }
        long_var_ = (long long)&data_180a03a84 - (long long)char_ptr_var_;
        while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
          char_ptr_var_ = char_ptr_var_ + 1;
          if (char_ptr_var_ <= char_ptr_var_) goto label_;
        }
      }
    }
    ptr_var_ = *(unsigned long long **)(mutex_type + 8);
    if (ptr_var_ < *(unsigned long long **)(mutex_type + STRING_BUFFER_SIZE)) {
      *(unsigned long long **)(mutex_type + 8) = ptr_var_ + 4;
      *ptr_var_ = &g_threadString4;
      ptr_var_[1] = 0;
      *(unsigned int *)(ptr_var_ + 2) = 0;
      *ptr_var_ = &g_threadString2;
      ptr_var_[3] = 0;
      ptr_var_[1] = 0;
      *(unsigned int *)(ptr_var_ + 2) = 0;
      system_thread_manager_001(ptr_var_,stack_int_);
      if (stack_int_ != 0) {
        memcpy(ptr_var_[1],stack_long_,stack_int_ + 1);
      }
      if (stack_long_ != 0) {
        *(unsigned int *)(ptr_var_ + 2) = 0;
        if ((unsigned char *)ptr_var_[1] != (unsigned char *)0x0) {
          *(unsigned char *)ptr_var_[1] = 0;
        }
        *(unsigned int *)((long long)ptr_var_ + 0x1c) = 0;
      }
    }
    else {
      system_event_handler_006(mutex_type,&stack_ptr_);
    }
    stack_ptr_ = &g_threadString2;
    if (stack_long_ != 0) {
      handle_system_error();
    }
    stack_long_ = 0;
    stack_var_ = stack_var_ & 64位整数掩码;
    stack_ptr_ = &g_threadString4;
  }
  ptr_var_ = (unsigned long long *)ptr_var_[0xb];
  stack_ptr_ = &g_threadString2;
  if (pcStack_48 != (char *)0x0) {
    handle_system_error();
  }
  if (ptr_var_ == (unsigned long long *)0x0) {
    return handle;
  }
  goto label_;
}
  data_180c95fea = 0;
  if (cVar1 != '\0') {
    system_thread_003(&unknown_180a3cc28,handle);
  }
  if (long_var_ != -1) {
    LOCK();
    global_data_ = global_data_ + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    alStack_3d0[0] = -1;
  }
  stack_ptr_ = &g_threadString2;
  if (stack_ptr_ == (undefined *)0x0) {
    stack_ptr_ = (undefined *)0x0;
    stack_var_ = 0;
    stack_ptr_ = &g_threadString4;
    system_crypto_001(stack_var_ ^ (ulong long)auStack_408);
  }
  handle_system_error();
}
int validate_config_handle(unsigned long long handle,char *flags)
{
  char *char_ptr_var_;
  char cVar2;
  unsigned long long *ptr_var_;
  char *char_ptr_var_;
  long long long_var_;
  char *char_ptr_var_;
  int int_var_;
  ptr_var_ = (unsigned long long *)function_(handle,flags,0);
  int_var_ = 0;
  if (ptr_var_ == (unsigned long long *)0x0) {
    return 0;
  }
  while (int_var_ = int_var_ + 1, flags == (char *)0x0) {
    ptr_var_ = (unsigned long long *)ptr_var_[0xb];
label_:
    if (ptr_var_ == (unsigned long long *)0x0) {
      return int_var_;
    }
  }
  cVar2 = *flags;
  char_ptr_var_ = flags;
  while (cVar2 != '\0') {
    char_ptr_var_ = char_ptr_var_ + 1;
    cVar2 = *char_ptr_var_;
  }
  ptr_var_ = (unsigned long long *)ptr_var_[0xb];
  if (ptr_var_ == (unsigned long long *)0x0) {
    return int_var_;
  }
  do {
    char_ptr_var_ = (char *)*ptr_var_;
    if (char_ptr_var_ == (char *)0x0) {
      long_var_ = 0;
      char_ptr_var_ = (char *)0x180d48d24;
    }
    else {
      long_var_ = ptr_var_[2];
    }
    if (long_var_ == (long long)char_ptr_var_ - (long long)flags) {
      char_ptr_var_ = char_ptr_var_ + long_var_;
      if (char_ptr_var_ <= char_ptr_var_) goto label_;
      long_var_ = (long long)flags - (long long)char_ptr_var_;
      while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
        char_ptr_var_ = char_ptr_var_ + 1;
        if (char_ptr_var_ <= char_ptr_var_) goto label_;
      }
    }
    ptr_var_ = (unsigned long long *)ptr_var_[0xb];
    if (ptr_var_ == (unsigned long long *)0x0) {
      return int_var_;
    }
  } while( true );
}
int process_config_with_mutex(unsigned long long handle,unsigned long long flags,unsigned long long *mutex_attr)
{
  char *char_ptr_var_;
  char cVar2;
  char *char_ptr_var_;
  char *unaff_RBX;
  long long long_var_;
  char *char_ptr_var_;
  int in_R11D;
  while (in_R11D = in_R11D + 1, unaff_RBX == (char *)0x0) {
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
label_:
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  }
  cVar2 = *unaff_RBX;
  char_ptr_var_ = unaff_RBX;
  while (cVar2 != '\0') {
    char_ptr_var_ = char_ptr_var_ + 1;
    cVar2 = *char_ptr_var_;
  }
  mutex_attr = (unsigned long long *)mutex_attr[0xb];
  if (mutex_attr == (unsigned long long *)0x0) {
    return in_R11D;
  }
  do {
    char_ptr_var_ = (char *)*mutex_attr;
    if (char_ptr_var_ == (char *)0x0) {
      long_var_ = 0;
      char_ptr_var_ = (char *)0x180d48d24;
    }
    else {
      long_var_ = mutex_attr[2];
    }
    if (long_var_ == (long long)char_ptr_var_ - (long long)unaff_RBX) {
      char_ptr_var_ = char_ptr_var_ + long_var_;
      if (char_ptr_var_ <= char_ptr_var_) goto label_;
      long_var_ = (long long)unaff_RBX - (long long)char_ptr_var_;
      while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
        char_ptr_var_ = char_ptr_var_ + 1;
        if (char_ptr_var_ <= char_ptr_var_) goto label_;
      }
    }
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  } while( true );
}
int validate_mutex_attributes(unsigned long long handle,unsigned long long flags,unsigned long long *mutex_attr)
{
  char *char_ptr_var_;
  char cVar2;
  char *char_ptr_var_;
  char *unaff_RBX;
  char *unaff_RDI;
  long long long_var_;
  char *char_ptr_var_;
  int in_R11D;
  do {
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
label_:
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
    in_R11D = in_R11D + 1;
  } while (unaff_RBX == (char *)0x0);
  cVar2 = *unaff_RBX;
  char_ptr_var_ = unaff_RBX;
  while (cVar2 != '\0') {
    char_ptr_var_ = char_ptr_var_ + 1;
    cVar2 = *char_ptr_var_;
  }
  mutex_attr = (unsigned long long *)mutex_attr[0xb];
  if (mutex_attr == (unsigned long long *)0x0) {
    return in_R11D;
  }
  do {
    if ((char *)*mutex_attr == (char *)0x0) {
      long_var_ = 0;
      char_ptr_var_ = unaff_RDI;
    }
    else {
      long_var_ = mutex_attr[2];
      char_ptr_var_ = (char *)*mutex_attr;
    }
    if (long_var_ == (long long)char_ptr_var_ - (long long)unaff_RBX) {
      char_ptr_var_ = char_ptr_var_ + long_var_;
      if (char_ptr_var_ <= char_ptr_var_) goto label_;
      long_var_ = (long long)unaff_RBX - (long long)char_ptr_var_;
      while (*char_ptr_var_ == char_ptr_var_[long_var_]) {
        char_ptr_var_ = char_ptr_var_ + 1;
        if (char_ptr_var_ <= char_ptr_var_) goto label_;
      }
    }
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  } while( true );
}
unsigned int get_system_status_code(void)
{
  unsigned int in_R11D;
  return in_R11D;
}
long long initialize_system_resources(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long init_result;
  long long long_var_;
  char *char_ptr_var_;
  long long long_var_;
  unsigned long long uint_var_;
  undefined *stack_ptr_;
  char *pcStack_28;
  uint_var_ = 线程池默认标志;
  init_result = function_();
  if (init_result == 0) {
    return 0;
  }
  long_var_ = 0x180d48d24;
  if (*(long long *)(init_result + 8) != 0) {
    long_var_ = *(long long *)(init_result + 8);
  }
  create_thread_context(&stack_ptr_,long_var_);
  if (*pcStack_28 != '\0') {
    init_result = 0;
    do {
      long_var_ = strchr(&unknown_180a3cc48,(int)pcStack_28[init_result]);
      if (long_var_ != 0) {
        pcStack_28[init_result] = ' ';
      }
      init_result = init_result + 1;
    } while (pcStack_28[init_result] != '\0');
  }
  char_ptr_var_ = "";
  if (pcStack_28 != (char *)0x0) {
    char_ptr_var_ = pcStack_28;
  }
  function_(char_ptr_var_,&unknown_180a3cbe0,mutex_attr,mutex_attr + 4,uint_var_);
  stack_ptr_ = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return long_var_;
}
long long allocate_thread_resources(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long init_result;
  long long long_var_;
  char *char_ptr_var_;
  long long long_var_;
  undefined *stack_ptr_;
  char *pcStack_28;
  init_result = function_();
  if (init_result == 0) {
    return 0;
  }
  long_var_ = 0x180d48d24;
  if (*(long long *)(init_result + 8) != 0) {
    long_var_ = *(long long *)(init_result + 8);
  }
  create_thread_context(&stack_ptr_,long_var_);
  if (*pcStack_28 != '\0') {
    init_result = 0;
    do {
      long_var_ = strchr(&unknown_180a3c9ec,(int)pcStack_28[init_result]);
      if (long_var_ != 0) {
        pcStack_28[init_result] = ' ';
      }
      init_result = init_result + 1;
    } while (pcStack_28[init_result] != '\0');
  }
  char_ptr_var_ = "";
  if (pcStack_28 != (char *)0x0) {
    char_ptr_var_ = pcStack_28;
  }
  function_(char_ptr_var_,&unknown_180a3cc0c,mutex_attr,mutex_attr + 4,mutex_attr + 8);
  stack_ptr_ = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return long_var_;
}
long long initialize_thread_pool_resources(unsigned long long handle,unsigned long long flags,long long mutex_attr,unsigned long long mutex_type)
{
  long long init_result;
  long long long_var_;
  char *char_ptr_var_;
  long long long_var_;
  undefined *stack_ptr_;
  char *pcStack_28;
  init_result = function_(handle,&unknown_180a0696c,mutex_attr,mutex_type,线程池默认标志);
  if (init_result == 0) {
    return 0;
  }
  long_var_ = 0x180d48d24;
  if (*(long long *)(init_result + 8) != 0) {
    long_var_ = *(long long *)(init_result + 8);
  }
  create_thread_context(&stack_ptr_,long_var_);
  if (*pcStack_28 != '\0') {
    init_result = 0;
    do {
      long_var_ = strchr(&unknown_180a3cc04,(int)pcStack_28[init_result]);
      if (long_var_ != 0) {
        pcStack_28[init_result] = ' ';
      }
      init_result = init_result + 1;
    } while (pcStack_28[init_result] != '\0');
  }
  char_ptr_var_ = "";
  if (pcStack_28 != (char *)0x0) {
    char_ptr_var_ = pcStack_28;
  }
  function_(char_ptr_var_,&unknown_180a3cc1c,mutex_attr,mutex_attr + 4);
  stack_ptr_ = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return long_var_;
}
long long validate_thread_configuration(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  int int_var_;
  long long long_var_;
  long long long_var_;
  char *char_ptr_var_;
  long long long_var_;
  unsigned long long uint_var_;
  undefined *stack_ptr_;
  char *pcStack_28;
  uint_var_ = 线程池默认标志;
  long_var_ = function_();
  if (long_var_ == 0) {
    return 0;
  }
  long_var_ = 0x180d48d24;
  if (*(long long *)(long_var_ + 8) != 0) {
    long_var_ = *(long long *)(long_var_ + 8);
  }
  create_thread_context(&stack_ptr_,long_var_);
  if (*pcStack_28 != '\0') {
    long_var_ = 0;
    do {
      long_var_ = strchr(&unknown_180a3c9ec,(int)pcStack_28[long_var_]);
      if (long_var_ != 0) {
        pcStack_28[long_var_] = ' ';
      }
      long_var_ = long_var_ + 1;
    } while (pcStack_28[long_var_] != '\0');
  }
  char_ptr_var_ = "";
  if (pcStack_28 != (char *)0x0) {
    char_ptr_var_ = pcStack_28;
  }
  int_var_ = function_(char_ptr_var_,&unknown_180a3c9f8,mutex_attr,mutex_attr + 4,mutex_attr + 8,
                        (unsigned int *)(mutex_attr + 0xc),uint_var_);
  if (int_var_ == 3) {
    *(unsigned int *)(mutex_attr + 0xc) = 0x3f800000;
  }
  stack_ptr_ = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return long_var_;
}
long long process_thread_initialization(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long init_result;
  long long long_var_;
  char *char_ptr_var_;
  long long long_var_;
  unsigned long long uint_var_;
  undefined *stack_ptr_;
  char *pcStack_28;
  uint_var_ = 线程池默认标志;
  init_result = function_(handle,&unknown_180a16818);
  if (init_result == 0) {
    return 0;
  }
  long_var_ = 0x180d48d24;
  if (*(long long *)(init_result + 8) != 0) {
    long_var_ = *(long long *)(init_result + 8);
  }
  create_thread_context(&stack_ptr_,long_var_);
  if (*pcStack_28 != '\0') {
    init_result = 0;
    do {
      long_var_ = strchr(&unknown_180a3cc04,(int)pcStack_28[init_result]);
      if (long_var_ != 0) {
        pcStack_28[init_result] = ' ';
      }
      init_result = init_result + 1;
    } while (pcStack_28[init_result] != '\0');
  }
  char_ptr_var_ = "";
  if (pcStack_28 != (char *)0x0) {
    char_ptr_var_ = pcStack_28;
  }
  function_(char_ptr_var_,&unknown_180a3c9f8,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr,uint_var_);
  stack_ptr_ = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return long_var_;
}
long long initialize_thread_synchronization(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long *pinit_result;
  long long long_var_;
  long long long_var_;
  char *char_ptr_var_;
  long long long_var_;
  undefined *stack_ptr_;
  char *pcStack_28;
  long_var_ = function_();
  if (long_var_ != 0) {
    pinit_result = (long long *)(long_var_ + 8);
    long_var_ = 0x180d48d24;
    if (*pinit_result != 0) {
      long_var_ = *pinit_result;
    }
    create_thread_context(&stack_ptr_,long_var_);
    if (*pcStack_28 != '\0') {
      long_var_ = 0;
      do {
        long_var_ = strchr(&unknown_180a3cc04,(int)pcStack_28[long_var_]);
        if (long_var_ != 0) {
          pcStack_28[long_var_] = ' ';
        }
        long_var_ = long_var_ + 1;
      } while (pcStack_28[long_var_] != '\0');
    }
    char_ptr_var_ = "";
    if (pcStack_28 != (char *)0x0) {
      char_ptr_var_ = pcStack_28;
    }
    function_(char_ptr_var_,&unknown_180a3ccc8,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + STRING_BUFFER_SIZE,
                  mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + CONFIG_PATH_BUFFER_SIZE,mutex_attr + 0x24,mutex_attr + 0x28);
    stack_ptr_ = &g_threadString2;
    if (pcStack_28 != (char *)0x0) {
      handle_system_error();
    }
  }
  return long_var_;
}
long long setup_thread_communication(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long *pinit_result;
  long long long_var_;
  long long long_var_;
  char *char_ptr_var_;
  long long long_var_;
  unsigned long long uint_var_;
  undefined *stack_ptr_;
  char *pcStack_50;
  uint_var_ = 线程池默认标志;
  long_var_ = function_();
  if (long_var_ != 0) {
    pinit_result = (long long *)(long_var_ + 8);
    long_var_ = 0x180d48d24;
    if (*pinit_result != 0) {
      long_var_ = *pinit_result;
    }
    create_thread_context(&stack_ptr_,long_var_);
    if (*pcStack_50 != '\0') {
      long_var_ = 0;
      do {
        long_var_ = strchr(&unknown_180a3cc04,(int)pcStack_50[long_var_]);
        if (long_var_ != 0) {
          pcStack_50[long_var_] = ' ';
        }
        long_var_ = long_var_ + 1;
      } while (pcStack_50[long_var_] != '\0');
    }
    char_ptr_var_ = "";
    if (pcStack_50 != (char *)0x0) {
      char_ptr_var_ = pcStack_50;
    }
    function_(char_ptr_var_,&unknown_180a3cca0,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr + STRING_BUFFER_SIZE
                  ,mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + 0x1c,mutex_attr + CONFIG_PATH_BUFFER_SIZE,mutex_attr + 0x24,
                  mutex_attr + 0x28,mutex_attr + 0x2c,mutex_attr + 0x30,mutex_attr + 0x34,mutex_attr + 0x38,
                  mutex_attr + 0x3c,long_var_,uint_var_);
    stack_ptr_ = &g_threadString2;
    if (pcStack_50 != (char *)0x0) {
      handle_system_error();
    }
  }
  return long_var_;
}
long long create_thread_with_attributes(unsigned long long handle,unsigned long long flags,unsigned long long *mutex_attr)
{
  unsigned long long uint_var_;
  long long long_var_;
  unsigned long long *ptr_var_;
  long long long_var_;
  unsigned char auStack_18 [16];
  long_var_ = function_();
  if (long_var_ != 0) {
    long_var_ = 0x180d48d24;
    if (*(long long *)(long_var_ + 8) != 0) {
      long_var_ = *(long long *)(long_var_ + 8);
    }
    ptr_var_ = (unsigned long long *)function_(auStack_18,long_var_);
    uint_var_ = ptr_var_[1];
    *mutex_attr = *ptr_var_;
    mutex_attr[1] = uint_var_;
    return long_var_;
  }
  return 0;
}
unsigned long long get_thread_handle(unsigned long long handle)
{
  unsigned long long uint_var_;
  unsigned long long *pflags;
  unsigned long long uint_var_;
  unsigned long long *unaff_RDI;
  bool in_ZF;
  unsigned char auStackX_20 [8];
  uint_var_ = 0x180d48d24;
  if (!in_ZF) {
    uint_var_ = handle;
  }
  pflags = (unsigned long long *)function_(auStackX_20,uint_var_);
  uint_var_ = pflags[1];
  *unaff_RDI = *pflags;
  unaff_RDI[1] = uint_var_;
  return uint_var_;
}
  data_180bf66d8 = 0;
  system_crypto_002(function_);
  function_(&unknown_18064ffc0);
  long_var_ = 0;
  global_data_ = function_;
  ptr_var_ = (unsigned int *)&data_180bfbd80;
  long_var_ = 0x16;
  do {
    if (ptr_var_[1] == 0) {
      function_(ptr_var_);
    }
    if (long_var_ != 2) {
      function_(&unknown_180a3db60,*(unsigned long long *)(ptr_var_ + 4),*ptr_var_);
    }
    long_var_ = long_var_ + 1;
    ptr_var_ = ptr_var_ + 6;
    long_var_ = long_var_ + -1;
  } while (long_var_ != 0);
  if (global_data_ == 0) {
    function_(&data_180bfbf60);
  }
  global_data_ = (long long)global_data_;
  if (global_data_ == 0) {
    function_(&data_180bfbf78);
  }
  global_data_ = (long long)global_data_;
  function_();
  if (data_180c8efc8 != '\0') {
    function_(&unknown_180a3d970);
  }
  return;
}
  data_180c8ecef = 1;
  if (data_180d49130 == '\0') {
    data_180d49130 = '\x01';
    flags = FlsAlloc(&unknown_18064f970);
    global_data_ = flags;
    *(unsigned long long *)
     (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) + STRING_BUFFER_SIZE) =
         0x180bf4000;
    FlsSetValue(flags);
  }
  function_(&unknown_180a3d988,&ExceptionList);
  init_result = cpuid_Extended_Feature_Enumeration_info(7);
  data_180c8f000 = (byte)(*(uint *)(init_result + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (stack_var_ != 0) {
    global_data_ = (ulong long)stack_var_;
  }
  function_();
  function_(&unknown_180a3d940,0);
  function_();
  plVar3 = (long long *)function_();
  if ((undefined *)(*plVar3 + 0x3d8) == &data_180c8ed80) {
    memset(&data_180c8ed80,0,0x240);
  }
  memset((undefined *)(*plVar3 + 0x3d8),0,0x240);
}
  data_180d49131 = 1;
  FlsSetValue(global_data_,0);
  FlsFree(global_data_);
  function_(*(unsigned long long *)
                 (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
                 STRING_BUFFER_SIZE),1);
  if (global_data_ == 0) {
    function_(&data_180bfbd98);
  }
  if (global_data_ == 0) {
    if (global_data_ == 0) {
      function_(&data_180bfbdb0);
    }
    if (global_data_ == 0) goto label_;
  }
  pinit_result = (long long *)function_();
  pflags = (undefined *)(*pinit_result + 0x3d8);
  if (pflags != &data_180c8ed80) {
    function_();
    memset(pflags,0,0x240);
  }
  function_();
label_:
  function_(&unknown_180a3d958,global_data_);
  data_180bf66d8 = 1;
  return;
}
unsigned int validate_resource_handle(int handle)
{
  if (*(int *)(&data_180bfbd84 + (long long)handle * 0x18) == 0) {
    function_(&data_180bfbd80 + (long long)handle * 0x18);
  }
  return *(unsigned int *)(&data_180bfbd80 + (long long)handle * 0x18);
}
    data_180c8f020 = 0;
    return;
  }
  long_var_ = -1;
  do {
    long_var_ = long_var_ + 1;
  } while (*(char *)(handle + long_var_) != '\0');
  uint_var_ = (uint)long_var_;
  if (0x1fff < uint_var_) {
    uint_var_ = 0x1fff;
  }
  memcpy(&data_180c8f020,handle,(long long)(int)uint_var_);
}
  data_180c8f020 = 0;
  return;
}
unsigned long long initialize_system_context(unsigned long long handle)
{
  unsigned long long uint_var_;
  long long long_var_;
  uint_var_ = function_(global_data_,handle,0x19);
  long_var_ = allocate_helper_buffer(uint_var_);
  LOCK();
  global_data_ = global_data_ + long_var_;
  UNLOCK();
  return uint_var_;
}
unsigned long long setup_context_with_flags(unsigned long long handle,unsigned long long flags)
{
  long long init_result;
  unsigned long long flags;
  init_result = allocate_helper_buffer();
  flags = function_(global_data_,handle,flags,0x19);
  LOCK();
  global_data_ = global_data_ - init_result;
  UNLOCK();
  init_result = allocate_helper_buffer(flags);
  LOCK();
  global_data_ = global_data_ + init_result;
  UNLOCK();
  return flags;
}
long long process_context_handle(long long *handle)
{
  int *piVar1;
  long long long_var_;
  long long long_var_;
  ulong long uint_var_;
  long_var_ = allocate_helper_buffer();
  long_var_ = global_data_;
  LOCK();
  long_var_ = global_data_ - long_var_;
  global_data_ = long_var_;
  UNLOCK();
  if (handle == (long long *)0x0) {
    return long_var_;
  }
  uint_var_ = (ulong long)handle & 0xffffffffffc00000;
  if (uint_var_ != 0) {
    long_var_ = uint_var_ + 0x80 + ((long long)handle - uint_var_ >> STRING_BUFFER_SIZE) * 0x50;
    long_var_ = long_var_ - (ulong long)*(uint *)(long_var_ + 4);
    if ((*(void ***)(uint_var_ + 0x70) == &ExceptionList) && (*(char *)(long_var_ + 0xe) == '\0')) {
      long_var_ = *(long long *)(long_var_ + CONFIG_PATH_BUFFER_SIZE);
      *handle = long_var_;
      *(long long **)(long_var_ + CONFIG_PATH_BUFFER_SIZE) = handle;
      piVar1 = (int *)(long_var_ + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        long_var_ = function_();
        return long_var_;
      }
    }
    else {
      long_var_ = func_0x00018064e870(uint_var_,CONCAT71(0xff000000,
                                                 *(void ***)(uint_var_ + 0x70) == &ExceptionList),
                                  handle,uint_var_,线程池默认标志);
    }
  }
  return long_var_;
}
      data_180d4913c = '\x01';
      handle = stack_var_;
    }
    pfVar3 = afStack_2e8;
    long_var_ = 0;
    long_var_ = CONFIG_PATH_BUFFER_SIZE;
    long_var_ = CONFIG_PATH_BUFFER_SIZE;
    do {
      fVar28 = param_5 * *(float *)(long_var_ + 0x180d4a0a8);
      fVar24 = param_5 * *(float *)(long_var_ + 0x180d4a0a4);
      fVar30 = param_5 * *(float *)(long_var_ + 0x180d4a0a0);
      fVar20 = fVar30 * *mutex_attr + fVar24 * mutex_attr[4] + fVar28 * mutex_attr[8] + mutex_attr[0xc];
      fVar21 = fVar30 * mutex_attr[1] + fVar24 * mutex_attr[5] + fVar28 * mutex_attr[9] + mutex_attr[0xd];
      fVar22 = fVar30 * mutex_attr[2] + fVar24 * mutex_attr[6] + fVar28 * mutex_attr[10] + mutex_attr[0xe];
      fVar24 = fVar30 * mutex_attr[3] + fVar24 * mutex_attr[7] + fVar28 * mutex_attr[0xb] + mutex_attr[0xf];
      *(float *)((long long)afStack_2e8 + long_var_) = fVar20;
      *(float *)((long long)afStack_2e8 + long_var_ + 4) = fVar21;
      *(float *)((long long)&stack_var_ + long_var_) = fVar22;
      *(float *)((long long)&stack_var_ + long_var_ + 4) = fVar24;
      if (flags != 0) {
        stack_var_ = stack_var_ & 64位整数掩码;
        if (*(long long *)(flags + 0x2908) == 0) {
          function_(flags,pfVar3,0x31b189,&stack_var_);
          fVar20 = (float)stack_var_;
        }
        else {
          cStack_324 = '\0';
          stack_var_ = 0;
          stack_var_ = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          stack_var_ = 0;
          stack_var_ = 0;
          stack_var_ = CONCAT44(fVar21,fVar20);
          stack_var_ = CONCAT44(fVar24,fVar22);
          stack_var_ = CONCAT31(stack_var_._1_3_,1);
          stack_var_ = 0;
          function_(flags,&stack_var_,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *(float *)((long long)&stack_var_ + long_var_) = fVar20 + 0.01;
      }
      pfVar3 = pfVar3 + 4;
      long_var_ = long_var_ + STRING_BUFFER_SIZE;
      long_var_ = long_var_ + -1;
    } while (long_var_ != 0);
    fVar20 = mutex_attr[0xe];
    fVar21 = mutex_attr[0xd];
    fVar22 = mutex_attr[0xc];
    fVar24 = mutex_attr[9];
    fVar28 = mutex_attr[8];
    fVar30 = mutex_attr[10];
    stack_var_ = 0x7f7fffff;
    pfVar3 = afStack_2e8;
    long_var_ = CONFIG_PATH_BUFFER_SIZE;
    do {
      fVar26 = pfVar3[2] - fVar20;
      fVar27 = pfVar3[1] - fVar21;
      fVar29 = *pfVar3 - fVar22;
      fVar23 = fVar29 * fVar28 + fVar27 * fVar24 + fVar26 * fVar30;
      fVar26 = fVar26 - fVar23 * fVar30;
      fVar27 = fVar27 - fVar23 * fVar24;
      fVar29 = fVar29 - fVar23 * fVar28;
      fVar23 = fVar26 * fVar26 + fVar27 * fVar27 + fVar29 * fVar29;
      auVar13 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar25 = auVar13._0_4_;
      fVar25 = fVar25 * 0.5 * (3.0 - fVar23 * fVar25 * fVar25);
      fStack_370 = fVar25 * fVar26 * param_5 + fVar20;
      fVar23 = fVar25 * fVar27 * param_5 + fVar21;
      fVar25 = fVar25 * fVar29 * param_5 + fVar22;
      stack_var_ = CONCAT44(fVar23,fVar25);
      *pfVar3 = fVar25;
      pfVar3[1] = fVar23;
      pfVar3[2] = fStack_370;
      pfVar3[3] = 3.4028235e+38;
      pfVar3 = pfVar3 + 4;
      long_var_ = long_var_ + -1;
    } while (long_var_ != 0);
    if (flags != 0) {
      pfVar3 = (float *)&stack_var_;
      pfVar5 = afStack_2e8;
      do {
        stack_var_ = stack_var_ & 64位整数掩码;
        if (*(long long *)(flags + 0x2908) == 0) {
          function_(flags,pfVar5,0x31b189,&stack_var_);
          fVar20 = (float)stack_var_;
        }
        else {
          cStack_324 = '\0';
          stack_var_ = 0;
          stack_var_ = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          stack_var_ = 0;
          stack_var_ = 0;
          stack_var_ = *(unsigned long long *)(pfVar3 + -2);
          stack_var_ = *(unsigned long long *)pfVar3;
          stack_var_ = CONCAT31(stack_var_._1_3_,1);
          stack_var_ = 0;
          function_(flags,&stack_var_,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *pfVar3 = fVar20 + 0.01;
        pfVar5 = pfVar5 + 4;
        pfVar3 = pfVar3 + 4;
        long_var_ = long_var_ + -1;
      } while (long_var_ != 0);
    }
    uint_var_ = 0;
    long_var_ = 0;
    do {
      long_var_ = 0;
      if (uint_var_ != 0x1f) {
        long_var_ = long_var_ + 1;
      }
      if (((handle2 == '\0') || ((uint_var_ & 1) != 0)) &&
         (cVar1 = function_((double)((float)(int)uint_var_ * 0.19634955),SUB84((double)param_6,0),
                                (double)param_7), cVar1 != '\0')) {
        fStack_370 = *(float *)(&stack_var_ + long_var_ * 2) - *(float *)(&stack_var_ + long_var_ * 2);
        stack_var_ = CONCAT44(afStack_2e8[long_var_ * 4 + 1] - afStack_2e8[long_var_ * 4 + 1],
                              afStack_2e8[long_var_ * 4] - afStack_2e8[long_var_ * 4]);
        stack_var_ = 0x7f7fffff;
        stack_var_ = 0;
        stack_var_ = CONCAT31(stack_var_._1_3_,handle1);
        function_(handle,afStack_2e8 + long_var_ * 4,&stack_var_,param_8);
      }
      uint_var_ = uint_var_ + 1;
      long_var_ = long_var_ + 1;
    } while ((int)uint_var_ < CONFIG_PATH_BUFFER_SIZE);
  }
  int_var_ = _Mtx_unlock(handle);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  system_crypto_001(stack_var_ ^ (ulong long)auStack_3a8);
}
                    data_1ac76f654 = data_1ac76f654 + cVar12;
                    if (data_1ac76f654 != '\0' && bVar27 == data_1ac76f654 < '\0') {
                      out((short)flags,int_var_);
                      halt_baddata();
                    }
                    in_OF = SCARRY1((char)*unaff_RDI,cVar14);
                    *unaff_RDI = (code)((char)*unaff_RDI + cVar14);
                    in_SF = (char)*unaff_RDI < '\0';
                    in_ZF = *unaff_RDI == (code)0x0;
                    goto label_;
                  }
                }
                pflags6 = ptr_var_;
                *(undefined **)((long long)pflags6 + -8) = &unknown_18076804b;
                (*unaff_RDI)();
                *(unsigned long long *)((long long)pflags6 + -8) = 0x180768051;
                CoUninitialize();
label_:
                *(unsigned long long *)((long long)pflags6 + -8) = 0x180768059;
                _endthreadex(0);
                return;
              }
              cVar14 = (char)*in_RAX;
            }
            in_RAX = (int *)CONCAT71((int7)((ulong long)in_RAX >> 8),cVar10 + cVar14);
LAB_180768028_1:
            piVar2 = (int *)(((ulong long)in_RAX & 0xffffffffffffff20) - 0x75);
            *piVar2 = *piVar2 + (int)handle;
            *(int *)(((ulong long)in_RAX & 0xffffffffffffff20) - 0x17ffffff) = (int)pflags3;
            halt_baddata();
          }
        }
      }
    }
  }
  mutex_type = 0x266;
  *(unsigned char *)((long long)register0x00000020 + CONFIG_PATH_BUFFER_SIZE) = 1;
label_:
  uint_var_ = *(unsigned long long *)(char_ptr_var_ + 0x1a0);
  *(unsigned char **)((long long)register0x00000020 + -8) = &label_;
  function_(uint_var_,char_ptr_var_,mutex_attr,mutex_type);
}
    data_180c2e030 = '\x01';
  }
  if (mutex_attr != (int *)0x0) {
    *mutex_attr = ((flags + 1) / 2) * 0x48d0;
  }
  if (mutex_type != (unsigned int *)0x0) {
    *mutex_type = 0x480;
  }
  return 0;
}
unsigned long long allocate_resource_memory(int handle)
{
  byte bVar1;
  int int_var_;
  uint uint_var_;
  long long long_var_;
  float *pfVar5;
  int int_var_;
  float *pfVar7;
  uint uint_var_;
  ulong long uint_var_;
  ulong long uint_var_;
  int *piVar12;
  uint uint_var_;
  long long *pinit_result4;
  long long init_result5;
  uint uint_var_;
  int int_var_;
  int int_var_;
  float fVar19;
  unsigned long long flags0;
  unsigned long long extraout_XMM0_Qb;
  float fVar22;
  unsigned char in_XMM2 [16];
  unsigned char aflags1 [16];
  float fVar23;
  float fVar24;
  unsigned char unaff_XMM6 [16];
  unsigned char aflags5 [16];
  ulong long uint_var_;
  pinit_result4 = (long long *)&data_180be5740;
  int_var_ = 0;
  do {
    uint_var_ = 0;
    init_result5 = *pinit_result4;
    uint_var_ = STRING_BUFFER_SIZE >> ((byte)int_var_ & 0x1f);
    uint_var_ = 系统配置缓冲区大小 >> ((byte)int_var_ & 0x1f);
    uint_var_ = uint_var_;
    uint_var_ = uint_var_;
    if ((uint_var_ != 0) && (uint_var_ = 0, 3 < uint_var_)) {
      aflags1._0_4_ = (float)(int)uint_var_;
      aflags1._4_4_ = aflags1._0_4_;
      aflags1._8_4_ = aflags1._0_4_;
      aflags1._12_4_ = aflags1._0_4_;
      uint_var_ = uint_var_ & 0x80000003;
      if ((int)uint_var_ < 0) {
        uint_var_ = (uint_var_ - 1 | 0xfffffffc) + 1;
      }
      aflags5 = rcpps(unaff_XMM6,aflags1);
      fVar24 = aflags5._0_4_;
      fVar19 = aflags5._4_4_;
      fVar22 = aflags5._8_4_;
      fVar23 = aflags5._12_4_;
      unaff_XMM6._0_4_ = (fVar24 + fVar24) - fVar24 * fVar24 * aflags1._0_4_;
      unaff_XMM6._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * aflags1._0_4_;
      unaff_XMM6._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * aflags1._0_4_;
      unaff_XMM6._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * aflags1._0_4_;
      do {
        flags0 = GetSystemFlags();
        aflags5._0_4_ = (float)flags0 * 2.0;
        aflags5._4_4_ = (float)((ulong long)flags0 >> CONFIG_PATH_BUFFER_SIZE) * 2.0;
        aflags5._8_4_ = (float)extraout_XMM0_Qb * 2.0;
        aflags5._12_4_ = (float)((ulong long)extraout_XMM0_Qb >> CONFIG_PATH_BUFFER_SIZE) * 2.0;
        uint_var_ = (int)uint_var_ + 4;
        uint_var_ = (ulong long)uint_var_;
        aflags1 = rcpps(in_XMM2,aflags5);
        fVar24 = aflags1._0_4_;
        fVar19 = aflags1._4_4_;
        fVar22 = aflags1._8_4_;
        fVar23 = aflags1._12_4_;
        in_XMM2._0_4_ = (fVar24 + fVar24) - fVar24 * fVar24 * aflags5._0_4_;
        in_XMM2._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * aflags5._4_4_;
        in_XMM2._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * aflags5._8_4_;
        in_XMM2._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * aflags5._12_4_;
        *(unsigned char (*) [16])(init_result5 + uint_var_ * 4) = in_XMM2;
        uint_var_ = uint_var_ + 4;
        uint_var_ = uint_var_;
      } while ((int)uint_var_ < (int)(uint_var_ - uint_var_));
    }
    if ((int)uint_var_ < (int)uint_var_) {
      pfVar7 = (float *)(init_result5 + uint_var_ * 4);
      fVar24 = 1.0 / (float)(int)uint_var_;
      unaff_XMM6 = ZEXT416((uint)fVar24);
      do {
        fVar19 = (float)cosf(((float)(int)uint_var_ * 6.2831855 + 3.1415927) * fVar24);
        uint_var_ = (int)uint_var_ + 1;
        uint_var_ = (ulong long)uint_var_;
        *pfVar7 = 0.5 / fVar19;
        pfVar7 = pfVar7 + 1;
      } while ((int)uint_var_ < (int)uint_var_);
    }
    int_var_ = int_var_ + 1;
    pinit_result4 = pinit_result4 + 1;
  } while (int_var_ < 5);
  piVar12 = (int *)0x180be5774;
  pfVar7 = (float *)0x180c2e040;
  global_data_ = 0x180c2e040;
  handle = -handle;
  int_var_ = 2;
  int_var_ = STRING_BUFFER_SIZE0;
  init_result5 = 0x140;
  uint_var_ = 0;
  do {
    uint_var_ = uint_var_;
    if (pfVar7 < (float *)0x180c2e880) {
      fVar24 = (float)piVar12[-1] * 1.5258789e-05 * (float)handle;
      *pfVar7 = fVar24;
      pfVar7[STRING_BUFFER_SIZE] = fVar24;
    }
    pfVar5 = pfVar7 + -0x3ff;
    if (((byte)uint_var_ & 0x1f) != 0x1f) {
      pfVar5 = pfVar7;
    }
    int_var_ = -handle;
    if (((byte)uint_var_ & 0x3f) != 0x3f) {
      int_var_ = handle;
    }
    if (pfVar5 + CONFIG_PATH_BUFFER_SIZE < (float *)0x180c2e880) {
      fVar24 = (float)*piVar12 * 1.5258789e-05 * (float)int_var_;
      pfVar5[CONFIG_PATH_BUFFER_SIZE] = fVar24;
      pfVar5[0x30] = fVar24;
    }
    bVar1 = (byte)int_var_;
    uint_var_ = int_var_ - 1U & 0x1f;
    int_var_ = -int_var_;
    if ((bVar1 - 1 & 0x3f) != 0x3f) {
      int_var_ = int_var_;
    }
    long_var_ = -0xefc;
    if (uint_var_ != 0x1f) {
      long_var_ = STRING_BUFFER_SIZE0;
    }
    pfVar7 = (float *)(long_var_ + (long long)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      long_var_ = -0xebc;
      if (uint_var_ != 0x1f) {
        long_var_ = init_result5;
      }
      fVar24 = (float)piVar12[1] * 1.5258789e-05 * (float)int_var_;
      *pfVar7 = fVar24;
      *(float *)(long_var_ + (long long)pfVar5) = fVar24;
    }
    if ((bVar1 & 0x1f) == 0x1f) {
      long_var_ = -0x1ef8;
      if (uint_var_ != 0x1f) {
        long_var_ = -0xefc;
      }
      pfVar7 = (float *)(long_var_ + (long long)pfVar5);
    }
    int_var_ = -int_var_;
    if ((bVar1 & 0x3f) != 0x3f) {
      int_var_ = int_var_;
    }
    if (pfVar7 + CONFIG_PATH_BUFFER_SIZE < (float *)0x180c2e880) {
      fVar24 = (float)piVar12[2] * 1.5258789e-05 * (float)int_var_;
      pfVar7[CONFIG_PATH_BUFFER_SIZE] = fVar24;
      pfVar7[0x30] = fVar24;
    }
    uint_var_ = int_var_ + 1U & 0x1f;
    long_var_ = -0xefc;
    int_var_ = -int_var_;
    if (((byte)(int_var_ + 1U) & 0x3f) != 0x3f) {
      int_var_ = int_var_;
    }
    if (uint_var_ != 0x1f) {
      long_var_ = STRING_BUFFER_SIZE0;
    }
    pfVar5 = (float *)(long_var_ + (long long)pfVar7);
    if (pfVar5 < (float *)0x180c2e880) {
      long_var_ = -0xebc;
      if (uint_var_ != 0x1f) {
        long_var_ = init_result5;
      }
      fVar24 = (float)piVar12[3] * 1.5258789e-05 * (float)int_var_;
      *pfVar5 = fVar24;
      *(float *)(long_var_ + (long long)pfVar7) = fVar24;
    }
    if ((bVar1 + 2 & 0x1f) == 0x1f) {
      long_var_ = -0x1ef8;
      if (uint_var_ != 0x1f) {
        long_var_ = -0xefc;
      }
      pfVar5 = (float *)(long_var_ + (long long)pfVar7);
    }
    int_var_ = -int_var_;
    if ((bVar1 + 2 & 0x3f) != 0x3f) {
      int_var_ = int_var_;
    }
    if (pfVar5 + CONFIG_PATH_BUFFER_SIZE < (float *)0x180c2e880) {
      fVar24 = (float)piVar12[4] * 1.5258789e-05 * (float)int_var_;
      pfVar5[CONFIG_PATH_BUFFER_SIZE] = fVar24;
      pfVar5[0x30] = fVar24;
    }
    uint_var_ = int_var_ + 3U & 0x1f;
    long_var_ = -0xefc;
    int_var_ = -int_var_;
    if (((byte)(int_var_ + 3U) & 0x3f) != 0x3f) {
      int_var_ = int_var_;
    }
    if (uint_var_ != 0x1f) {
      long_var_ = STRING_BUFFER_SIZE0;
    }
    pfVar7 = (float *)(long_var_ + (long long)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      long_var_ = -0xebc;
      if (uint_var_ != 0x1f) {
        long_var_ = init_result5;
      }
      fVar24 = (float)piVar12[5] * 1.5258789e-05 * (float)int_var_;
      *pfVar7 = fVar24;
      *(float *)(long_var_ + (long long)pfVar5) = fVar24;
    }
    if ((bVar1 + 4 & 0x1f) == 0x1f) {
      long_var_ = -0x1ef8;
      if (uint_var_ != 0x1f) {
        long_var_ = -0xefc;
      }
      pfVar7 = (float *)(long_var_ + (long long)pfVar5);
    }
    int_var_ = -int_var_;
    if ((bVar1 + 4 & 0x3f) != 0x3f) {
      int_var_ = int_var_;
    }
    if (pfVar7 + CONFIG_PATH_BUFFER_SIZE < (float *)0x180c2e880) {
      fVar24 = (float)piVar12[6] * 1.5258789e-05 * (float)int_var_;
      pfVar7[CONFIG_PATH_BUFFER_SIZE] = fVar24;
      pfVar7[0x30] = fVar24;
    }
    handle = -int_var_;
    if ((bVar1 + 5 & 0x3f) != 0x3f) {
      handle = int_var_;
    }
    long_var_ = -0xefc;
    if ((bVar1 + 5 & 0x1f) != 0x1f) {
      long_var_ = STRING_BUFFER_SIZE0;
    }
    uint_var_ = uint_var_ + 8;
    pfVar7 = (float *)(long_var_ + (long long)pfVar7);
    int_var_ = int_var_ + 8;
    piVar12 = piVar12 + 8;
  } while (int_var_ < 字符串缓冲区大小2);
  if ((int)uint_var_ < CONFIG_PATH_BUFFER_SIZE0) {
    if (3 < (int)(CONFIG_PATH_BUFFER_SIZE0 - uint_var_)) {
      uint_var_ = uint_var_ + 10;
      piVar12 = (int *)0x180be5b68;
      int_var_ = (0x3f - (0x1fc - uint_var_ >> 2)) * 4;
      do {
        if (pfVar7 < (float *)0x180c2e880) {
          fVar24 = (float)piVar12[2] * 1.5258789e-05 * (float)handle;
          *pfVar7 = fVar24;
          pfVar7[STRING_BUFFER_SIZE] = fVar24;
        }
        uint_var_ = uint_var_ & 0x8000001f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffe0) + 1;
        }
        pfVar5 = pfVar7 + -0x3ff;
        if (uint_var_ != 0x1f) {
          pfVar5 = pfVar7;
        }
        uint_var_ = uint_var_ & 0x8000003f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffc0) + 1;
        }
        int_var_ = -handle;
        if (uint_var_ != 0x3f) {
          int_var_ = handle;
        }
        if (pfVar5 + CONFIG_PATH_BUFFER_SIZE < (float *)0x180c2e880) {
          fVar24 = (float)piVar12[1] * 1.5258789e-05 * (float)int_var_;
          pfVar5[CONFIG_PATH_BUFFER_SIZE] = fVar24;
          pfVar5[0x30] = fVar24;
        }
        uint_var_ = uint_var_ - 1 & 0x8000001f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffe0) + 1;
        }
        uint_var_ = uint_var_ - 1 & 0x8000003f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffc0) + 1;
        }
        int_var_ = -int_var_;
        if (uint_var_ != 0x3f) {
          int_var_ = int_var_;
        }
        long_var_ = -0xefc;
        if (uint_var_ != 0x1f) {
          long_var_ = STRING_BUFFER_SIZE0;
        }
        pfVar7 = (float *)(long_var_ + (long long)pfVar5);
        if (pfVar7 < (float *)0x180c2e880) {
          long_var_ = -0xebc;
          if (uint_var_ != 0x1f) {
            long_var_ = init_result5;
          }
          fVar24 = (float)*piVar12 * 1.5258789e-05 * (float)int_var_;
          *pfVar7 = fVar24;
          *(float *)(long_var_ + (long long)pfVar5) = fVar24;
        }
        uint_var_ = uint_var_ & 0x8000001f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffe0) + 1;
        }
        if (uint_var_ == 0x1f) {
          long_var_ = -0x1ef8;
          if (uint_var_ != 0x1f) {
            long_var_ = -0xefc;
          }
          pfVar7 = (float *)(long_var_ + (long long)pfVar5);
        }
        uint_var_ = uint_var_ & 0x8000003f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffc0) + 1;
        }
        int_var_ = -int_var_;
        if (uint_var_ != 0x3f) {
          int_var_ = int_var_;
        }
        if (pfVar7 + CONFIG_PATH_BUFFER_SIZE < (float *)0x180c2e880) {
          fVar24 = (float)piVar12[-1] * 1.5258789e-05 * (float)int_var_;
          pfVar7[CONFIG_PATH_BUFFER_SIZE] = fVar24;
          pfVar7[0x30] = fVar24;
        }
        uint_var_ = uint_var_ + 1 & 0x8000003f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffc0) + 1;
        }
        handle = -int_var_;
        if (uint_var_ != 0x3f) {
          handle = int_var_;
        }
        uint_var_ = uint_var_ + 1 & 0x8000001f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffe0) + 1;
        }
        long_var_ = -0xefc;
        if (uint_var_ != 0x1f) {
          long_var_ = STRING_BUFFER_SIZE0;
        }
        piVar12 = piVar12 + -4;
        pfVar7 = (float *)(long_var_ + (long long)pfVar7);
        uint_var_ = uint_var_ + 4;
        uint_var_ = uint_var_ + 4;
      } while ((int)uint_var_ < 0x1ff);
    }
    if ((int)uint_var_ < CONFIG_PATH_BUFFER_SIZE0) {
      piVar12 = (int *)((long long)int_var_ * 4 + 0x180be5770);
      do {
        if (pfVar7 < (float *)0x180c2e880) {
          fVar24 = (float)*piVar12 * 1.5258789e-05 * (float)handle;
          *pfVar7 = fVar24;
          pfVar7[STRING_BUFFER_SIZE] = fVar24;
        }
        uint_var_ = uint_var_ & 0x8000003f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffc0) + 1;
        }
        uint_var_ = uint_var_ & 0x8000001f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffe0) + 1;
        }
        pfVar5 = pfVar7 + -0x3ff;
        if (uint_var_ != 0x1f) {
          pfVar5 = pfVar7;
        }
        piVar12 = piVar12 + -1;
        uint_var_ = uint_var_ + 1;
        pfVar7 = pfVar5 + CONFIG_PATH_BUFFER_SIZE;
        int_var_ = -handle;
        if (uint_var_ != 0x3f) {
          int_var_ = handle;
        }
        handle = int_var_;
      } while ((int)uint_var_ < CONFIG_PATH_BUFFER_SIZE0);
    }
  }
  return 0;
}
      data_180c2e030 = '\x01';
    }
    int_var_ = function_(*(unsigned long long *)(unaff_RBX + 0x170),*(unsigned int *)(unaff_RBX + 0x110),0);
    if ((int_var_ != 0) ||
       (int_var_ = function_(*(unsigned long long *)(unaff_RBX + 0x170),0x180c2ea70,1,
                              iStack0000000000000030 + 4), int_var_ != 0)) goto label_;
    pflags = (uint *)(unaff_RBX + 0x1cc);
    int_var_ = function_();
    if (int_var_ == 0) {
      *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + iStack0000000000000030 + 4;
      int_var_ = function_(*(unsigned long long *)(unaff_RBX + 0x170),0x180c2ea70,1);
      if (int_var_ != 0) goto label_;
    }
    uint_var_ = *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 8);
    *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 8) = 2;
    function_();
    *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 8) = uint_var_;
    int_var_ = function_(*(unsigned long long *)(unaff_RBX + 0x170),*(unsigned int *)(unaff_RBX + 0x110),0);
    if (int_var_ == 0) {
      if (*(int *)(unaff_RBX + 0x1c4) == int_var_) {
        *(unsigned int *)(unaff_RBX + 0x1c4) = 0x480;
      }
      uint_var_ = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaff_R12D & 系统配置缓冲区大小00) == 0) ||
         ((*(uint *)(*(long long *)(unaff_RBX + 0x170) + 0x194) & 1) == 0)) {
        long_var_ = *(long long *)(unaff_RBX + 8);
        if (*(int *)(long_var_ + 0x14) == -1) {
          *(unsigned int *)(long_var_ + 0x18) = 0xffffffff;
        }
        else if (*(char *)(unaff_RBX + 0x23c) == (char)unaff_R15) {
          *(uint *)(long_var_ + 0x18) =
               ((*(int *)(long_var_ + 0x14) + -1 + uint_var_) / uint_var_ + 1) * *(int *)(unaff_RBX + 0x1c4);
          *(uint *)(unaff_RBX + 0x2c) = *(uint *)(unaff_RBX + 0x2c) & 0xfffffffe;
        }
        else {
          *(uint *)(long_var_ + 0x18) = *pflags * 0x480;
        }
        goto label_;
      }
      function_(*(unsigned long long *)(unaff_RBX + 0x170),*(unsigned int *)(unaff_RBX + 0x110),0);
      int_var_ = *(int *)(unaff_RBX + 0x1c4);
      uint_var_ = 0;
      int_var_ = func_0x00018076a7d0(*(unsigned long long *)(unaff_RBX + 0x170),&stack0x00000050);
      if (int_var_ == 0) {
        *pflags = 0;
        *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 0x18) = 0;
        if (*(int *)(*(long long *)(unaff_RBX + 8) + 0x14) != 0) goto label_;
        goto label_;
      }
    }
  }
  goto label_;
label_:
  *(ulong long *)(unaff_RBX + 0x178) = unaff_R15;
  goto label_;
  while( true ) {
    int_var_ = function_();
    if ((int_var_ == 0) &&
       (in_stack_00000040._4_4_ + uint_var_ < *(uint *)(*(long long *)(unaff_RBX + 8) + 0x14))) {
      if (*pflags <= (uint)unaff_R15) {
        uint_var_ = *pflags + 1000;
        *pflags = uint_var_;
        long_var_ = function_(*(unsigned long long *)(global_data_ + 0x1a0),
                              *(unsigned long long *)(unaff_RBX + 0x1d0),uint_var_ * 4,&unknown_18097c490,0x113);
        *(long long *)(unaff_RBX + 0x1d0) = long_var_;
        if (long_var_ == 0) goto label_;
      }
      uint_var_ = unaff_R15 & 0xffffffff;
      unaff_R15 = (ulong long)((uint)unaff_R15 + 1);
      *(uint *)(*(long long *)(unaff_RBX + 0x1d0) + uint_var_ * 4) = uint_var_;
      piVar1 = (int *)(*(long long *)(unaff_RBX + 8) + 0x18);
      *piVar1 = *piVar1 + int_var_;
      uint_var_ = uint_var_ + 4 + in_stack_00000040._4_4_;
      int_var_ = function_(*(unsigned long long *)(unaff_RBX + 0x170),in_stack_00000040._4_4_,1);
      if (int_var_ != 0) break;
    }
    else {
      function_(*(unsigned long long *)(unaff_RBX + 0x170),0xfffffffd,1);
    }
    if (*(uint *)(*(long long *)(unaff_RBX + 8) + 0x14) <= uint_var_) break;
label_:
    int_var_ = function_(*(unsigned long long *)(unaff_RBX + 0x170),&stack0x0000004c,1,4,0);
    if (int_var_ != 0) break;
  }
label_:
  int_var_ = function_(*(unsigned long long *)(unaff_RBX + 0x170),in_stack_00000050,0);
  if (int_var_ == 0) {
    *pflags = (uint)unaff_R15;
    unaff_R15 = 0;
label_:
    if (unaff_R13B != '\0') {
      int_var_ = *(int *)(*(long long *)(unaff_RBX + 8) + 0x14);
      if (int_var_ != -1) {
        *(int *)(*(long long *)(unaff_RBX + 8) + 0x14) = int_var_ - *(int *)(unaff_RBX + 0x110);
      }
    }
    if ((*(long long *)(unaff_RBX + 0x1d0) != 0) && ((unaff_R12D & 系统配置缓冲区大小00) == 0)) {
      function_(*(unsigned long long *)(global_data_ + 0x1a0),*(long long *)(unaff_RBX + 0x1d0),
                    &unknown_18097c490,0x282,1);
    }
    *(ulong long *)(unaff_RBX + 0x178) = unaff_R15;
    *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 8) = 2;
    *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 0x1c) = 0x480;
    function_();
  }
label_:
  system_crypto_001(*(ulong long *)(unaff_RBP + 0x4ab0) ^ (ulong long)&stack0x00000000);
}
      data_180c30370 = '\x01';
    }
    if (((in_stack_00000040._4_4_ != unaff_R15D) ||
        (int_var_ = (**(code **)(**(long long **)(unaff_RDI + 0x170) + STRING_BUFFER_SIZE))
                           (*(long long **)(unaff_RDI + 0x170),(long long)&stack0x00000040 + 4),
        int_var_ == 0)) &&
       (int_var_ = function_(*(unsigned long long *)(unaff_RDI + 0x170),*(unsigned int *)(unaff_RDI + 0x110),
                              0), int_var_ == 0)) {
      memset(unaff_RDI + 0x178,0,0x330);
    }
  }
function_:
  system_crypto_001(*(ulong long *)(unaff_RBP + 0x218) ^ (ulong long)&stack0x00000000);
}
      data_180c4f4e8 = 0;
      global_data_ = uint_var_;
      system_crypto_003(&data_180c4f4f0);
    }
  }
  return &data_180c4f4a0;
}
unsigned long long initialize_system_mutex(unsigned long long *handle,long long flags,char mutex_attr,char mutex_type)
{
  int int_var_;
  uint flags;
  uint *ptr_var_;
  unsigned long long uint_var_;
  unsigned char uint_var_;
  ulong long uStackX_10;
  uint auStack_28 [2];
  ulong long stack_var_;
  if (*(int *)(flags + 0x18) < *(int *)(*(long long *)(flags + STRING_BUFFER_SIZE) + 0xb4)) {
label_:
    uint_var_ = 0;
  }
  else {
    int_var_ = *(int *)(*(long long *)(flags + STRING_BUFFER_SIZE) + 0xbc);
    if (int_var_ == 0) {
      return 0;
    }
    if (int_var_ != 2) goto label_;
    uint_var_ = 1;
  }
  ptr_var_ = (uint *)function_();
  stack_var_ = 0;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  auStack_28[0] = *ptr_var_;
  uint_var_ = function_(handle,*(unsigned long long *)(flags + STRING_BUFFER_SIZE),auStack_28,&stack_var_,&uStackX_10);
  if ((int)uint_var_ != 0) {
    return uint_var_;
  }
  if ((char)uStackX_10 == (char)uint_var_) {
    return 0;
  }
  uStackX_10 = 0;
  ptr_var_ = (uint *)function_();
  flags = *(uint *)((long long)handle + 0xc);
  if (((flags != *ptr_var_) && (*(uint *)(handle + 4) <= flags)) &&
     (flags < *(uint *)((long long)handle + 0x24))) {
    if (flags == auStack_28[0]) {
      return 0x1c;
    }
    flags = func_0x000180856540(*handle,flags - *(int *)(handle + 1));
    uStackX_10 = flags + stack_var_;
    if (uStackX_10 == stack_var_) {
      uStackX_10 = stack_var_ + 1;
    }
  }
  function_();
  if (mutex_attr != '\0') {
    uint_var_ = function_(handle,flags,flags + CONFIG_PATH_BUFFER_SIZE,&stack_var_,&uStackX_10,uint_var_,0);
    if ((int)uint_var_ != 0) {
      return uint_var_;
    }
    *(int *)(flags + 0x18) = *(int *)(flags + 0x18) + 1;
  }
  if (mutex_type == '\0') {
    return 0;
  }
  if (mutex_attr != '\0') {
    if (*(int *)(*(long long *)(flags + STRING_BUFFER_SIZE) + 0xb4) <= *(int *)(flags + 0x18)) {
      int_var_ = *(int *)(*(long long *)(flags + STRING_BUFFER_SIZE) + 0xbc);
      if (int_var_ == 0) {
        return 0;
      }
      if (int_var_ == 2) {
        uint_var_ = 1;
        goto label_;
      }
    }
    uint_var_ = 0;
  }
label_:
  uint_var_ = function_(handle,flags,flags + 0x28,&stack_var_,&uStackX_10,uint_var_,1);
  if ((int)uint_var_ == 0) {
    *(int *)(flags + 0x18) = *(int *)(flags + 0x18) + 1;
    return 0;
  }
  return uint_var_;
}
unsigned long long
function_(long long handle,long long flags,long long *mutex_attr,long long *mutex_type,
             unsigned long long *param_5,char param_6,char param_7)
{
  uint uint_var_;
  long long long_var_;
  byte bVar3;
  unsigned int *ptr_var_;
  unsigned long long uint_var_;
  unsigned long long uint_var_;
  long long long_var_;
  long long long_var_;
  unsigned int uint_var_;
  long long lStackX_8;
  unsigned char auStack_28 [16];
  uint_var_ = *(unsigned long long *)(handle + 0x28);
  ptr_var_ = (unsigned int *)function_();
  long_var_ = *mutex_type;
  uint_var_ = *ptr_var_;
  long_var_ = long_var_;
  if ((*(uint *)(flags + 0x1c) >> 1 & 1) != 0) {
    long_var_ = *mutex_attr;
    long_var_ = long_var_ - long_var_;
    uint_var_ = *(unsigned long long *)(handle + 0x30);
    if (-1 < long_var_) {
      if (long_var_ < 1) {
        uint_var_ = 0;
        long_var_ = long_var_;
      }
      else {
        uint_var_ = *(uint *)(*(long long *)(*(long long *)(handle + 0x38) + 8) + 0x774);
        if (uint_var_ != 48000) {
          long_var_ = (long_var_ * 48000) / (long long)(ulong long)uint_var_;
        }
        if (0xffffffff < long_var_) {
          long_var_ = 0xffffffff;
        }
        uint_var_ = (unsigned int)long_var_;
        long_var_ = long_var_;
      }
    }
  }
  if (param_6 != '\0') {
    (**(code **)(**(long long **)(flags + STRING_BUFFER_SIZE) + 0x30))(*(long long **)(flags + STRING_BUFFER_SIZE),auStack_28)
    ;
    uint_var_ = function_(uint_var_,auStack_28,long_var_,
                          *(unsigned int *)(*(long long *)(flags + STRING_BUFFER_SIZE) + 0xb4));
    if ((int)uint_var_ != 0) {
      return uint_var_;
    }
  }
  uint_var_ = function_(uint_var_,*(unsigned long long *)(flags + STRING_BUFFER_SIZE),long_var_,*param_5,uint_var_,0,0,&lStackX_8);
  if ((int)uint_var_ == 0) {
    if (param_7 != (char)uint_var_) {
      func_0x0001808cf230(lStackX_8,long_var_);
    }
    bVar3 = (byte)(*(uint *)(flags + 0x1c) >> 4) & 1;
    *(uint *)(lStackX_8 + 0x4c) =
         ~((bVar3 ^ 1) * 2) & ((uint)bVar3 + (uint)bVar3 | *(uint *)(lStackX_8 + 0x4c));
    uint_var_ = 0;
  }
  return uint_var_;
}
    data_180c4f818 = '\x01';
  }
  return 0;
}
unsigned long long get_system_global_state(void)
{
  char cVar1;
  int int_var_;
  uint uint_var_;
  unsigned long long in_stack_00000030;
  func_0x0001808f62c0();
  func_0x0001808f62a0(free_exref);
  int_var_ = timeGetDevCaps(&stack0x00000030,8);
  uint_var_ = 1;
  if (int_var_ == 0) {
    uint_var_ = 1;
    if (1 < (uint)in_stack_00000030) {
      uint_var_ = (uint)in_stack_00000030;
    }
  }
  func_0x0001808f6640(uint_var_);
  cVar1 = function_();
  if (cVar1 == '\0') {
    return 0x809200ff;
  }
  data_180c4f818 = 1;
  return 0;
}
unsigned long long get_system_configuration(void)
{
  return 0x809200ff;
}
unsigned int validate_system_parameters(int handle,int flags,int mutex_attr)
{
  int int_var_;
  unsigned int flags;
  unsigned int auStack_18 [4];
  if (data_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (((flags != 0) || (mutex_attr != 0)) || (3 < handle - 1U)) {
    return 0x80920001;
  }
  int_var_ = function_();
  if (int_var_ != 0) {
    return 0x809200ff;
  }
  int_var_ = function_(handle,auStack_18);
  if (int_var_ < 0) {
    flags = 0x809200ff;
    if (int_var_ == -0x7ffeffff) {
      flags = 0x80920004;
    }
    func_0x0001808f6ce0();
    return flags;
  }
  func_0x0001808f6ce0();
  return auStack_18[0];
}
unsigned long long initialize_parameter_block(unsigned int handle,uint *flags)
{
  long long init_result;
  uint flags;
  uint uint_var_;
  char cVar4;
  byte bVar5;
  int int_var_;
  uint uint_var_;
  unsigned short *ptr_var_;
  unsigned short *ptr_var_;
  byte abStackX_18 [8];
  long long lStackX_20;
  if (data_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (flags == (uint *)0x0) {
    return 0x80920001;
  }
  int_var_ = function_();
  if (int_var_ != 0) {
    return 0x809200ff;
  }
  int_var_ = func_0x0001808f0200(handle);
  if (int_var_ < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  function_(flags);
  int_var_ = func_0x0001808f0760(handle,&lStackX_20);
  if (int_var_ == 0) {
    initialize_timer_context(handle,abStackX_18);
    if (*(long long *)(lStackX_20 + 0x160) != 0) {
      cVar4 = func_0x0001808f2030();
      uint_var_ = *(uint *)(*(long long *)(lStackX_20 + 0x160) + 0xc);
      if (cVar4 == '\0') {
        uint_var_ = uint_var_ & 0xffdefffe;
      }
      *flags = uint_var_;
      *(unsigned char *)(flags + 1) = *(unsigned char *)(*(long long *)(lStackX_20 + 0x160) + STRING_BUFFER_SIZE);
      *(unsigned char *)((long long)flags + 5) =
           *(unsigned char *)(*(long long *)(lStackX_20 + 0x160) + 0x11);
      *(unsigned char *)((long long)flags + 6) =
           *(unsigned char *)(*(long long *)(lStackX_20 + 0x160) + 0x12);
      *(unsigned char *)((long long)flags + 7) =
           *(unsigned char *)(*(long long *)(lStackX_20 + 0x160) + 0x13);
      *(unsigned char *)((long long)flags + 9) =
           *(unsigned char *)(*(long long *)(lStackX_20 + 0x160) + 0x15);
      *(unsigned char *)(flags + 2) = *(unsigned char *)(*(long long *)(lStackX_20 + 0x160) + 0x14);
      if ((*(char *)(lStackX_20 + 0x68) == '\x01') && ((abStackX_18[0] & 8) != 0)) {
        init_result = *(long long *)(lStackX_20 + 0x160);
        uint_var_ = *(uint *)(init_result + 0x74);
        flags = *(uint *)(init_result + 0x78);
        uint_var_ = *(uint *)(init_result + 0x7c);
        flags[3] = *(uint *)(init_result + 0x70);
        flags[4] = uint_var_;
        flags[5] = flags;
        flags[6] = uint_var_;
        flags[7] = *(uint *)(*(long long *)(lStackX_20 + 0x160) + 0x60);
        flags[8] = *(uint *)(*(long long *)(lStackX_20 + 0x160) + 100);
        flags[9] = *(uint *)(*(long long *)(lStackX_20 + 0x160) + 0x68);
        flags[10] = *(uint *)(*(long long *)(lStackX_20 + 0x160) + 0x54);
        flags[0xb] = *(uint *)(*(long long *)(lStackX_20 + 0x160) + 0x58);
        flags[0xc] = *(uint *)(*(long long *)(lStackX_20 + 0x160) + 0x5c);
      }
      else {
        func_0x0001808f6f90(flags + 3);
        func_0x0001808f6f70(flags + 7);
        func_0x0001808f6f80(flags + 10);
      }
      *(unsigned char *)(flags + 0x13) = 1;
      *(unsigned char *)(flags + 0x1a) = *(unsigned char *)(lStackX_20 + 1);
      *(unsigned long long *)(flags + 0x14) = **(unsigned long long **)(lStackX_20 + 0x160);
      init_result = *(long long *)(lStackX_20 + 0x160);
      bVar5 = *(byte *)(init_result + 0x19);
      if (2 < *(byte *)(init_result + 0x19)) {
        bVar5 = 2;
      }
      int_var_ = 0;
      *(byte *)(flags + 0xd) = bVar5;
      if (*(char *)(init_result + 0x19) != '\0') {
        ptr_var_ = (unsigned short *)((long long)flags + 0x3e);
        ptr_var_ = (unsigned short *)(init_result + 0x1e);
        do {
          int_var_ = int_var_ + 1;
          ptr_var_[-1] = ptr_var_[-1];
          *ptr_var_ = *ptr_var_;
          *(unsigned char *)(ptr_var_ + 1) = *(unsigned char *)(ptr_var_ + -2);
          ptr_var_ = ptr_var_ + 4;
          ptr_var_ = ptr_var_ + 3;
        } while (int_var_ < (int)(uint)*(byte *)(init_result + 0x19));
      }
    }
  }
  func_0x0001808f6ce0();
  return 0;
}
int process_parameter_validation(unsigned int handle,byte *flags)
{
  char cVar1;
  int int_var_;
  long long long_var_;
  if (data_180c4f818 == '\0') {
    return -0x7f6dfffb;
  }
  if (flags == (byte *)0x0) {
    return -0x7f6dffff;
  }
  int_var_ = function_();
  if (int_var_ != 0) {
    return -0x7f6dff01;
  }
  int_var_ = func_0x0001808f0200(handle);
  if (int_var_ < 0) {
    func_0x0001808f6ce0();
    return -0x7f6dfffd;
  }
  long_var_ = func_0x0001808f0dd0(handle,0);
  if (long_var_ != 0) {
    cVar1 = func_0x0001808f0e30(*(unsigned short *)(long_var_ + 2),*(unsigned short *)(long_var_ + 4));
    if ((((cVar1 == '\0') && (*flags < 0xd)) && (flags[1] < 0xd)) && (flags[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    int_var_ = function_(handle,flags);
    if (-1 < int_var_) {
      *(byte *)(long_var_ + 0x23e8) = *flags;
      *(byte *)(long_var_ + 0x23e9) = flags[1];
      *(byte *)(long_var_ + 0x23ea) = flags[2];
      *(byte *)(long_var_ + 0x23ec) = *flags;
      *(byte *)(long_var_ + 0x23ed) = flags[1];
      *(byte *)(long_var_ + 0x23ee) = flags[2];
      func_0x0001808f6ce0();
      return int_var_;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int check_system_readiness(void)
{
  char cVar1;
  int int_var_;
  long long long_var_;
  byte *unaff_RBX;
  unsigned int unaff_ESI;
  long_var_ = func_0x0001808f0dd0(unaff_ESI);
  if (long_var_ != 0) {
    cVar1 = func_0x0001808f0e30(*(unsigned short *)(long_var_ + 2),*(unsigned short *)(long_var_ + 4));
    if ((((cVar1 == '\0') && (*unaff_RBX < 0xd)) && (unaff_RBX[1] < 0xd)) && (unaff_RBX[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    int_var_ = function_(unaff_ESI);
    if (-1 < int_var_) {
      *(byte *)(long_var_ + 0x23e8) = *unaff_RBX;
      *(byte *)(long_var_ + 0x23e9) = unaff_RBX[1];
      *(byte *)(long_var_ + 0x23ea) = unaff_RBX[2];
      *(byte *)(long_var_ + 0x23ec) = *unaff_RBX;
      *(byte *)(long_var_ + 0x23ed) = unaff_RBX[1];
      *(byte *)(long_var_ + 0x23ee) = unaff_RBX[2];
      func_0x0001808f6ce0();
      return int_var_;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int validate_system_state(void)
{
  int int_var_;
  unsigned char *unaff_RBX;
  unsigned int unaff_ESI;
  long long unaff_RDI;
  int_var_ = function_(unaff_ESI);
  if (-1 < int_var_) {
    *(unsigned char *)(unaff_RDI + 0x23e8) = *unaff_RBX;
    *(unsigned char *)(unaff_RDI + 0x23e9) = unaff_RBX[1];
    *(unsigned char *)(unaff_RDI + 0x23ea) = unaff_RBX[2];
    *(unsigned char *)(unaff_RDI + 0x23ec) = *unaff_RBX;
    *(unsigned char *)(unaff_RDI + 0x23ed) = unaff_RBX[1];
    *(unsigned char *)(unaff_RDI + 0x23ee) = unaff_RBX[2];
    func_0x0001808f6ce0();
    return int_var_;
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
unsigned long long get_system_status_info(void)
{
  func_0x0001808f6ce0();
  return 0x809200ff;
}
          data_180c58840 = bVar1;
          *flags = int_var_;
          *(int *)(long_var_ + STRING_BUFFER_SIZE) = int_var_;
          *(int *)(long_var_ + 0x18) = int_var_;
          func_0x0001808f0b40(long_var_);
          return 0;
        }
        long_var_ = long_var_ + 0x2408;
      } while (long_var_ < 0x180c58840);
      return 0x8001002d;
    }
  }
  bVar1 = data_180c58840 + 1;
  if (bVar1 == 0) {
    bVar1 = data_180c58840 + 2;
  }
  int_var_ = (uint)bVar1 * STRING_BUFFER_SIZE0 + int_var_;
  data_180c58840 = bVar1;
  *flags = int_var_;
  *piVar2 = int_var_;
  piVar2[2] = int_var_;
  func_0x0001808f0b40(piVar2 + -4);
  return 0;
}
long long initialize_system_timer(void)
{
  uint uint_var_;
  uint_var_ = timeGetTime();
  return (ulong long)uint_var_ * 1000;
}
uint setup_timer_with_attributes(long long handle,int flags,int mutex_attr,char mutex_type)
{
  ulong long uint_var_;
  byte bVar2;
  int int_var_;
  int int_var_;
  uint uint_var_;
  uint uint_var_;
  uint_var_ = 0;
  uint_var_ = 0;
  int_var_ = 0;
  int_var_ = int_var_;
  if (0 < mutex_attr) {
    do {
      bVar2 = (byte)flags & 7;
      int_var_ = flags;
      if (flags < 0) {
        int_var_ = flags + 7;
        bVar2 = bVar2 - 8;
      }
      flags = flags + 1;
      uint_var_ = *(byte *)((int_var_ >> 3) + handle) >> (bVar2 & 0x1f) & 1;
      int_var_ = int_var_ + 1;
      uint_var_ = uint_var_ | uint_var_ << ((byte)int_var_ & 0x1f);
      int_var_ = int_var_;
    } while (int_var_ < mutex_attr);
  }
  if (((mutex_type != '\0') && (uint_var_ != 0)) && (int_var_ < CONFIG_PATH_BUFFER_SIZE)) {
    bVar2 = (byte)int_var_ & 0x1f;
    uint_var_ = 1 << bVar2 | 1U >> CONFIG_PATH_BUFFER_SIZE - bVar2;
    uint_var_ = (ulong long)(CONFIG_PATH_BUFFER_SIZE - int_var_);
    do {
      uint_var_ = uint_var_ | uint_var_;
      uint_var_ = uint_var_ << 1 | (uint)((int)uint_var_ < 0);
      uint_var_ = uint_var_ - 1;
    } while (uint_var_ != 0);
  }
  return uint_var_;
}
  data_180c58854 = 1;
  data_180c58853 = 1;
  data_180c58855 = 1;
  data_180c58850 = 1;
  global_data_ = _beginthread(function_,0,0);
  if ((global_data_ != -1) &&
     (global_data_ = _beginthread(function_,0,0), global_data_ != -1)) {
    return 1;
  }
  return 0;
}
  data_180c69e20 = 1;
  return;
}
unsigned int validate_timer_parameters(byte handle,byte *flags,int mutex_attr)
{
  uint *ptr_var_;
  byte bVar2;
  uint uint_var_;
  mutex_attr = mutex_attr + -4;
  ptr_var_ = (uint *)(flags + mutex_attr);
  uint_var_ = *(uint *)(&unknown_18098a100 + (ulong long)(byte)~handle * 4) ^ 0xffffff;
  for (; 0 < mutex_attr; mutex_attr = mutex_attr + -1) {
    bVar2 = *flags;
    flags = flags + 1;
    uint_var_ = *(uint *)(&unknown_18098a100 + (ulong long)(byte)(bVar2 ^ (byte)uint_var_) * 4) ^ uint_var_ >> 8;
  }
  return CONCAT31((int3)(~uint_var_ >> 8),*ptr_var_ != ~uint_var_);
}
float * function_(float *handle,float *flags,float *mutex_attr)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  fVar1 = *mutex_attr;
  fVar2 = handle[3];
  fVar3 = handle[1];
  fVar4 = *handle;
  fVar5 = mutex_attr[1];
  fVar6 = handle[2];
  fVar7 = mutex_attr[2];
  fVar8 = mutex_attr[3];
  *flags = (fVar4 * fVar8 + fVar1 * fVar2 + fVar3 * fVar7) - fVar6 * fVar5;
  flags[1] = (fVar3 * fVar8 + fVar5 * fVar2 + fVar6 * fVar1) - fVar7 * fVar4;
  flags[3] = ((fVar8 * fVar2 - fVar4 * fVar1) - fVar5 * fVar3) - fVar6 * fVar7;
  flags[2] = (fVar6 * fVar8 + fVar7 * fVar2 + fVar5 * fVar4) - fVar3 * fVar1;
  return flags;
}
unsigned long long initialize_timer_context(unsigned long long handle,unsigned int *flags)
{
  long long init_result;
  init_result = func_0x0001808f0dd0(handle,0);
  if (init_result != 0) {
    *flags = *(unsigned int *)(init_result + 100);
    return 0;
  }
  return 0x8001002d;
}
      data_180bf0080 = '\0';
      if (global_data_ == 0) {
        long_var_ = function_(&unknown_18098ab30);
        if (long_var_ != 0) {
          long_var_ = LoadLibraryExW(long_var_,0,0);
        }
        LocalFree(long_var_);
        global_data_ = long_var_;
        if (long_var_ == 0) goto label_;
      }
      if ((((global_data_ == (code *)0x0) &&
           (global_data_ = (code *)GetProcAddress(global_data_,&unknown_18098aef8),
           global_data_ == (code *)0x0)) ||
          ((global_data_ == 0 &&
           (global_data_ = GetProcAddress(global_data_,&unknown_18098af08), global_data_ == 0))))
         || ((global_data_ == 0 &&
             (global_data_ = GetProcAddress(global_data_,&unknown_18098af18), global_data_ == 0)))
         ) goto label_;
      if ((global_data_ == 0) &&
         (global_data_ = function_(&unknown_18098af28,0), global_data_ != 0)) {
        global_data_ = (code *)GetProcAddress(global_data_,&unknown_18098af40);
      }
      char_ptr_var_ = global_data_;
      if (global_data_ == (code *)0x0) goto label_;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      stack_var_ = 0;
      _guard_check_icall(global_data_);
      int_var_ = (*char_ptr_var_)(&stack_var_,&stack_var_,0x27);
      if (int_var_ != 0x27) goto label_;
      for (ptr_var_ = auStack_1c0; char_ptr_var_ = global_data_, uint_var_ = *ptr_var_, uint_var_ != 0;
          ptr_var_ = ptr_var_ + 1) {
        stack_var_ = 0;
        _guard_check_icall(global_data_);
        stack_ptr_ = &stack_var_;
        int_var_ = (*char_ptr_var_)(0xffffffff80000002,&unknown_18098af50,0,uint_var_ | CONFIG_PATH_BUFFER_SIZE019);
        if (int_var_ == 0) {
          stack_var_ = 0x80;
          stack_var_ = 4;
          memset(auStack_148,0,STRING_BUFFER_SIZE0);
        }
      }
    }
    if (data_180c69ef8 == '\0') {
      SetLastError(flags & 0xffffffff);
      goto label_;
    }
  }
  OutputDebugStringW(&unknown_18098afa0);
  SetLastError(0);
label_:
  system_crypto_001(stack_var_ ^ (ulong long)auStack_228);
}
          data_180c6a14c = int_var_ == 1;
          SetConsoleTitleA(&unknown_18098b4e0);
        }
      }
      data_180c6a14d = data_180c6a14c == '\0';
      if (global_data_ == 0) {
        long_var_ = _wfsopen(handle,&unknown_18098b51c,系统配置缓冲区大小);
        if (long_var_ == 0) {
          function_(&unknown_18098b490,0xc1,&unknown_18098b470,&unknown_18098b520,handle);
          bVar10 = false;
        }
        else {
          fclose(long_var_);
          function_(&unknown_18098b490,200,&unknown_18098b470,&unknown_18098b580,handle);
          long_var_ = _wcsdup(handle);
          long_var_ = -1;
          if (long_var_ != 0) {
            do {
              long_var_ = long_var_;
              long_var_ = long_var_ + 1;
            } while (*(short *)(handle + 2 + long_var_ * 2) != 0);
            long_var_ = long_var_;
            while( true ) {
              long_var_ = 0;
              if (((long_var_ == 0) || (sVar1 = *(short *)(long_var_ + long_var_ * 2), long_var_ = 0, sVar1 == 0x2f)
                  ) || (long_var_ = 0, sVar1 == 0x5c)) goto label_;
              if (sVar1 == 0x2e) break;
              long_var_ = long_var_ + -1;
            }
            *(unsigned short *)(long_var_ + long_var_ * 2) = 0;
            long_var_ = long_var_ + 2 + long_var_ * 2;
label_:
            long_var_ = long_var_ + 9;
            long_var_ = malloc(long_var_ * 2);
            if (long_var_ == 0) {
              free(long_var_);
              return false;
            }
            int_var_ = 1;
            long_var_ = global_data_;
            do {
              global_data_ = long_var_;
              if (long_var_ == 0) {
                function_(long_var_,long_var_,&unknown_18098b5f8,long_var_,int_var_);
              }
              else {
                function_(long_var_,long_var_,&unknown_18098b5d8,long_var_,int_var_,long_var_);
              }
              global_data_ = _wfsopen(long_var_,ptr_var_,CONFIG_PATH_BUFFER_SIZE);
              if (global_data_ != 0) {
                ptr_var_ = &unknown_18098b610;
                uint_var_ = 0xeb;
                handle = long_var_;
                goto label_;
              }
              int_var_ = int_var_ + 1;
              long_var_ = 0;
            } while (int_var_ < 9);
            ptr_var_ = &unknown_18098b640;
            uint_var_ = 0xef;
label_:
            function_(&unknown_18098b490,uint_var_,&unknown_18098b470,ptr_var_,handle);
            free(long_var_);
            free(long_var_);
          }
          bVar10 = global_data_ != 0;
        }
      }
      else {
        function_(&unknown_18098b490,0xb4,&unknown_18098b470,&unknown_18098b4e8,handle);
        bVar10 = true;
      }
      return bVar10;
    }
  }
  data_180c6a14d = data_180c6a14c == '\0';
  return true;
}
bool check_system_availability(void)
{
  short sVar1;
  long long long_var_;
  uint uint_var_;
  int int_var_;
  long long long_var_;
  unsigned long long uint_var_;
  long long long_var_;
  long long long_var_;
  long long long_var_;
  char unaff_SIL;
  long long unaff_RDI;
  short sVar10;
  long long unaff_R12;
  undefined *ptr_var_;
  bool bVar12;
  uint in_stack_00000090;
  uint in_stack_00000098;
  if (unaff_RDI != 0) {
    long_var_ = -1;
    do {
      long_var_ = long_var_ + 1;
      sVar10 = (short)unaff_R12;
    } while (*(short *)(unaff_RDI + long_var_ * 2) != sVar10);
    if (long_var_ != 0) {
      ptr_var_ = &unknown_18098b464;
      if (unaff_SIL != '\0') {
        ptr_var_ = &unknown_18098b45c;
      }
      global_data_ = _wfsopen();
      if ((1 < global_data_) && ((uint)unaff_R12 < in_stack_00000090)) {
        uint_var_ = GetConsoleWindow();
        in_stack_00000098 = (uint)unaff_R12;
        GetWindowThreadProcessId(uint_var_,&stack0x00000098);
        uint_var_ = GetCurrentProcessId();
        if (uint_var_ != in_stack_00000098) {
          int_var_ = AllocConsole();
          data_180c6a14c = int_var_ == 1;
          SetConsoleTitleA(&unknown_18098b4e0);
        }
      }
      data_180c6a14d = data_180c6a14c == (char)unaff_R12;
      if (global_data_ == unaff_R12) {
        long_var_ = _wfsopen();
        if (long_var_ == 0) {
          function_(&unknown_18098b490,0xc1,&unknown_18098b470,&unknown_18098b520);
          bVar12 = false;
        }
        else {
          fclose(long_var_);
          function_(&unknown_18098b490,200,&unknown_18098b470,&unknown_18098b580);
          long_var_ = _wcsdup();
          long_var_ = -1;
          if (long_var_ != 0) {
            do {
              long_var_ = long_var_;
              long_var_ = long_var_ + 1;
              long_var_ = long_var_;
            } while (*(short *)(unaff_RDI + 2 + long_var_ * 2) != sVar10);
            while( true ) {
              long_var_ = unaff_R12;
              if (((long_var_ == 0) || (sVar1 = *(short *)(long_var_ + long_var_ * 2), sVar1 == 0x2f)) ||
                 (sVar1 == 0x5c)) goto label_;
              if (sVar1 == 0x2e) break;
              long_var_ = long_var_ + -1;
            }
            *(short *)(long_var_ + long_var_ * 2) = sVar10;
            long_var_ = long_var_ + 2 + long_var_ * 2;
label_:
            long_var_ = long_var_ + 9;
            long_var_ = malloc(long_var_ * 2);
            if (long_var_ == 0) {
              free(long_var_);
              return false;
            }
            int_var_ = 1;
            long_var_ = global_data_;
            do {
              global_data_ = long_var_;
              if (long_var_ == 0) {
                function_(long_var_,long_var_,&unknown_18098b5f8,long_var_,int_var_);
              }
              else {
                function_(long_var_,long_var_,&unknown_18098b5d8,long_var_,int_var_);
              }
              global_data_ = _wfsopen(long_var_,ptr_var_,CONFIG_PATH_BUFFER_SIZE);
              if (global_data_ != 0) {
                ptr_var_ = &unknown_18098b610;
                uint_var_ = 0xeb;
                goto label_;
              }
              int_var_ = int_var_ + 1;
              long_var_ = 0;
            } while (int_var_ < 9);
            ptr_var_ = &unknown_18098b640;
            uint_var_ = 0xef;
label_:
            function_(&unknown_18098b490,uint_var_,&unknown_18098b470,ptr_var_);
            free(long_var_);
            free(long_var_);
          }
          bVar12 = global_data_ != unaff_R12;
        }
      }
      else {
        function_(&unknown_18098b490,0xb4,&unknown_18098b470,&unknown_18098b4e8);
        bVar12 = true;
      }
      return bVar12;
    }
  }
  data_180c6a14d = data_180c6a14c == (char)unaff_R12;
  return true;
}
bool validate_system_resources(void)
{
  short sVar1;
  long long long_var_;
  long long long_var_;
  long long long_var_;
  unsigned long long uint_var_;
  int int_var_;
  long long unaff_RBX;
  long long long_var_;
  long long unaff_RDI;
  undefined *ptr_var_;
  long long unaff_R12;
  long long long_var_;
  fclose();
  function_(&unknown_18098b490,200,&unknown_18098b470,&unknown_18098b580);
  long_var_ = _wcsdup();
  if (long_var_ != 0) {
    do {
      long_var_ = unaff_RBX;
      unaff_RBX = long_var_ + 1;
      long_var_ = long_var_;
    } while (*(short *)(unaff_RDI + 2 + long_var_ * 2) != (short)unaff_R12);
    while( true ) {
      long_var_ = unaff_R12;
      if (((long_var_ == 0) || (sVar1 = *(short *)(long_var_ + long_var_ * 2), sVar1 == 0x2f)) ||
         (sVar1 == 0x5c)) goto label_;
      if (sVar1 == 0x2e) break;
      long_var_ = long_var_ + -1;
    }
    *(short *)(long_var_ + long_var_ * 2) = (short)unaff_R12;
    long_var_ = long_var_ + 2 + long_var_ * 2;
label_:
    long_var_ = long_var_ + 9;
    long_var_ = malloc(long_var_ * 2);
    if (long_var_ == 0) {
      free(long_var_);
      return false;
    }
    int_var_ = 1;
    long_var_ = global_data_;
    do {
      global_data_ = long_var_;
      if (long_var_ == 0) {
        function_(long_var_,long_var_,&unknown_18098b5f8,long_var_,int_var_);
      }
      else {
        function_(long_var_,long_var_,&unknown_18098b5d8,long_var_,int_var_);
      }
      global_data_ = _wfsopen(long_var_);
      if (global_data_ != 0) {
        ptr_var_ = &unknown_18098b610;
        uint_var_ = 0xeb;
        goto label_;
      }
      int_var_ = int_var_ + 1;
      long_var_ = 0;
    } while (int_var_ < 9);
    ptr_var_ = &unknown_18098b640;
    uint_var_ = 0xef;
label_:
    function_(&unknown_18098b490,uint_var_,&unknown_18098b470,ptr_var_);
    free(long_var_);
    free(long_var_);
  }
  return global_data_ != unaff_R12;
}
  data_180c6a14d = data_180c6a14c == unaff_R12B;
  return 1;
}
    data_180bf0082 = '\x01';
    wcscpy_s(auStack_228,STRING_BUFFER_SIZE4,handle);
    if ((data_180bf0082 != '\0') && (wcscat_s(auStack_228,STRING_BUFFER_SIZE4,flags), data_180bf0082 != '\0')) {
      function_(auStack_228,0);
    }
    _set_invalid_parameter_handler(uint_var_);
  }
  system_crypto_001(stack_var_ ^ (ulong long)auStack_248);
}
  data_180bf0082 = '\x01';
  wcscpy_s(auStackX_20,STRING_BUFFER_SIZE4);
  if (data_180bf0082 != '\0') {
    wcscat_s(auStackX_20,STRING_BUFFER_SIZE4);
    if (data_180bf0082 != '\0') {
      function_(auStackX_20,0);
    }
  }
  _set_invalid_parameter_handler(uint_var_);
  system_crypto_001(in_stack_00000230 ^ (ulong long)&stack0x00000000);
}
    data_180c821d8 = 1;
  }
  function_();
  cVar1 = func_0x0001800467e0();
  if (cVar1 != '\0') {
    cVar1 = func_0x0001800467e0();
    if (cVar1 != '\0') {
      return 1;
    }
    func_0x0001800467e0(0);
  }
  return 0;
}
unsigned long long allocate_system_buffer(uint handle)
{
  code *char_ptr_var_;
  byte bVar2;
  int int_var_;
  unsigned long long uint_var_;
  if (data_180c821d9 == '\0') {
    if (1 < handle) {
      function_(5);
      char_ptr_var_ = (code *)swi(3);
      uint_var_ = (*char_ptr_var_)();
      return uint_var_;
    }
    int_var_ = func_0x0001808fd8d4();
    if ((int_var_ == 0) || (handle != 0)) {
      bVar2 = 系统配置缓冲区大小 - ((byte)global_data_ & 0x3f) & 0x3f;
      global_data_ = (0xffffffffffffffffU >> bVar2 | -1L << 系统配置缓冲区大小 - bVar2) ^ global_data_;
      uRam0000000180c821e8 = global_data_;
      global_data_ = global_data_;
      global_data_ = global_data_;
      uRam0000000180c82200 = global_data_;
      global_data_ = global_data_;
    }
    else {
      int_var_ = _initialize_onexit_table(&data_180c821e0);
      if ((int_var_ != 0) || (int_var_ = _initialize_onexit_table(&data_180c821f8), int_var_ != 0)) {
        return 0;
      }
    }
    data_180c821d9 = '\x01';
  }
  return 1;
}
ulong long process_buffer_allocation(long long handle)
{
  ulong long uint_var_;
  uint7 flags;
  IMAGE_SECTION_HEADER *pIVar3;
  uint_var_ = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_1800002a0; pIVar3 != (IMAGE_SECTION_HEADER *)&unknown_1800003e0;
      pIVar3 = pIVar3 + 1) {
    if (((ulong long)(uint)pIVar3->VirtualAddress <= handle - 0x180000000U) &&
       (uint_var_ = (ulong long)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       handle - 0x180000000U < uint_var_)) goto label_;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
label_:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uint_var_ = uint_var_ & 0xffffffffffffff00;
  }
  else {
    flags = (uint7)(uint_var_ >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uint_var_ = (ulong long)flags << 8;
    }
    else {
      uint_var_ = CONCAT71(flags,1);
    }
  }
  return uint_var_;
}
    data_180c91d50 = '\0';
  }
  return;
}
  data_180bfc100 = 0;
  return;
}
  data_180bfc170 = 0;
  return;
}
    data_180c95ef0 = '\0';
  }
  return;
}
    data_180c96008 = '\0';
  }
  return;
}
    data_180c96028 = '\0';
  }
  return;
}
    data_180c96048 = '\0';
  }
  return;
}
    data_180c96068 = '\0';
  }
  return;
}
    data_180c96098 = '\0';
  }
  return;
}
    data_180c960b8 = '\0';
  }
  return;
}
    data_180c96100 = '\0';
  }
  return;
}
    data_180c96140 = '\0';
  }
  return;
}
    data_180c961d8 = '\0';
  }
  return;
}
    data_180c95f28 = '\0';
  }
  return;
}
    data_180c95fe8 = '\0';
  }
  return;
}
    data_180c96210 = '\0';
  }
  return;
}

#endif // DATA_DEFINITIONS_H
