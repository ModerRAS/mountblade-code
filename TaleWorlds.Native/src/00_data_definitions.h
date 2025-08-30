#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 系统常量定义
#define MAX_SYSTEM_VALUE 0x7fffffffffffffff
#define THREAD_POOL_DEFAULT_FLAG THREAD_POOL_DEFAULT_FLAG
#define RESOURCE_BUFFER_SIZE 16
#define RESOURCE_TYPE_TEXTURE 13
#define RESOURCE_TYPE_SHADER 15
#define RESOURCE_TYPE_AUDIO 12

// 资源类型常量定义
#define RESOURCE_TYPE_FONT 12
#define RESOURCE_TYPE_MODEL 28
#define RESOURCE_TYPE_ANIMATION 19
#define RESOURCE_TYPE_PARTICLE 18
#define RESOURCE_TYPE_CONFIG 23
#define RESOURCE_TYPE_SAVE_GAME 20
#define RESOURCE_TYPE_STRING_MANAGER 28
#define RESOURCE_TYPE_PHYSICS 23
#define RESOURCE_TYPE_AI 31
#define RESOURCE_TYPE_UI 17
#define RESOURCE_TYPE_SCRIPT 25
#define RESOURCE_TYPE_NETWORK 35
#define RESOURCE_TYPE_SECURITY 29
#define RESOURCE_TYPE_AUTH 30
#define RESOURCE_TYPE_PERMISSION 26
#define RESOURCE_TYPE_SESSION 24
#define RESOURCE_TYPE_USER_CONFIG 33
#define RESOURCE_TYPE_SAVE 21
#define RESOURCE_TYPE_ACHIEVEMENT 27
#define RESOURCE_TYPE_STATISTICS 28
#define RESOURCE_TYPE_ANALYTICS 29
#define RESOURCE_TYPE_DEBUG 17
#define RESOURCE_TYPE_PERFORMANCE_ANALYSIS 25
#define RESOURCE_TYPE_CRASH_HANDLER 21
#define RESOURCE_TYPE_ERROR_REPORT 19
#define RESOURCE_TYPE_UPDATE 33
#define RESOURCE_TYPE_PATCH 35
#define RESOURCE_TYPE_DIAGNOSTICS 21
#define RESOURCE_TYPE_MONITORING 21
#define RESOURCE_TYPE_HEALTH_CHECK 15
#define RESOURCE_TYPE_BACKUP 21
#define RESOURCE_TYPE_RECOVERY 21
#define RESOURCE_TYPE_MAINTENANCE 24
#define RESOURCE_TYPE_OPTIMIZATION 27
#define RESOURCE_TYPE_PERFORMANCE_MONITOR 20
#define RESOURCE_TYPE_LOAD_BALANCING 18
#define RESOURCE_TYPE_EXTENSION 15

// 系统状态码
#define SYSTEM_STATUS_SUCCESS 0
#define SYSTEM_STATUS_FAILURE -1

// 线程池互斥锁地址定义
#define MAIN_THREAD_POOL_MUTEX_ADDR 0x180c91970
#define RENDER_THREAD_POOL_MUTEX_ADDR 0x180c91970
#define NETWORK_THREAD_POOL_MUTEX_ADDR 0x180c91970
#define IO_THREAD_POOL_MUTEX_ADDR 0x180c91970
#define STRING_BUFFER_SIZE_1 0x80
#define STRING_BUFFER_SIZE_2 0x80
#define THREAD_STACK_SIZE 0x1fff
#define NETWORK_BUFFER_SIZE 0xe8
#define SYSTEM_CONFIG_BUFFER_SIZE 0x238
#define SYSTEM_CONFIG_BUFFER_SIZE_0 0
#define SYSTEM_CONFIG_BUFFER_SIZE_4 4
#define SYSTEM_CONFIG_BUFFER_SIZE_8 8
#define SYSTEM_CONFIG_BUFFER_SIZE_C 0xc
#define SYSTEM_CONFIG_BUFFER_SIZE_000000 0x000000
#define SYSTEM_CONFIG_BUFFER_SIZE_00 0x00
#define MAX_THREAD_STACK_SIZE 0x1fff

// 资源标志常量定义
#define FLAG_INITIALIZED 0x13
#define FLAG_TEXTURE_RESOURCE 0xd
#define FLAG_SHADER_RESOURCE 0x17
#define FLAG_AUDIO_RESOURCE 0xd
#define FLAG_FONT_RESOURCE 0xc
#define FLAG_MODEL_RESOURCE 0x1f
#define FLAG_ANIMATION_RESOURCE 0x17
#define FLAG_PARTICLE_RESOURCE 0x13
#define FLAG_CONFIG_RESOURCE 0x14
#define FLAG_SAVE_GAME_RESOURCE 0x1b
#define FLAG_STRING_MANAGER_RESOURCE 0x19
#define FLAG_PHYSICS_RESOURCE 0x12
#define FLAG_AI_RESOURCE 0x19
#define FLAG_UI_RESOURCE 0x11
#define FLAG_SCRIPT_RESOURCE 0x18
#define FLAG_NETWORK_RESOURCE 0x13
#define FLAG_SECURITY_RESOURCE 0x16
#define FLAG_AUTH_RESOURCE 0xf
#define FLAG_PERMISSION_RESOURCE 0x14
#define FLAG_SESSION_RESOURCE 0x16
#define FLAG_USER_CONFIG_RESOURCE 0xf
#define FLAG_SAVE_RESOURCE 0xb
#define FLAG_ACHIEVEMENT_RESOURCE 0x13
#define FLAG_STATISTICS_RESOURCE 0xd
#define FLAG_ANALYTICS_RESOURCE 0x17
#define FLAG_DEBUG_RESOURCE 0xd
#define FLAG_PERFORMANCE_ANALYSIS_RESOURCE 0xc
#define FLAG_CRASH_HANDLER_RESOURCE 0x16
#define FLAG_ERROR_REPORT_RESOURCE 0x13
#define FLAG_UPDATE_RESOURCE 0xf
#define FLAG_PATCH_RESOURCE 0xb
#define FLAG_DIAGNOSTICS_RESOURCE 0x1b
#define FLAG_MONITORING_RESOURCE 0x19
#define FLAG_HEALTH_CHECK_RESOURCE 0x1f
#define FLAG_BACKUP_RESOURCE 0x1b
#define FLAG_RECOVERY_RESOURCE 0x13
#define FLAG_MAINTENANCE_RESOURCE 0xe
#define FLAG_OPTIMIZATION_RESOURCE 0xe
#define FLAG_PERFORMANCE_MONITOR_RESOURCE 0xf
#define FLAG_LOAD_BALANCING_RESOURCE 0xd
#define FLAG_EXTENSION_RESOURCE 0x13

// 浮点数常量定义
#define FLOAT_ONE 0x3f800000
#define FLOAT_MAX_NORMAL 0x7f7fffff
#define FLOAT_PI_DIV_4 0x3d088889

// 整数常量定义
#define UINT32_MAX 0xffffffff
#define UINT64_MAX 0xffffffffffffffff
#define INT32_MASK 0xffffffff
#define INT64_MASK 0xffffffff00000000

// 系统互斥锁和条件变量地址
#define MAIN_MUTEX_ADDR 0x180c91970
#define CONDITION_VARIABLE_ADDR 0x180c91240
#define CLEANUP_FUNCTION_ADDR 0x180c911a0
#define SECOND_MUTEX_ADDR 0x180c91f70
#define THIRD_MUTEX_ADDR 0x180c91ff0
#define STRING_OFFSET_ADDR 0x180c82871

// 核心系统函数地址
#define RENDER_ENGINE_FUNCTION 0x00018005c480
#define SYSTEM_INIT_FUNCTION 0x00018024f7f0
#define FLAG_HANDLER_FUNCTION 0x0001800e2850
#define MEMORY_ALLOC_FUNCTION 0x00018066bd70
#define FLOAT_CONVERT_FUNCTION 0x0001800adf40
#define MUTEX_SET_FUNCTION 0x000180220c90
#define THREAD_HANDLER_FUNCTION 0x0001800ab000
#define MODULE_LOAD_FUNCTION 0x00018013d940
#define DATA_HANDLER_FUNCTION 0x0001804ca2d0
#define SYSTEM_VALIDATE_FUNCTION 0x0001800a1eb0

// 内存管理相关地址
#define MEMORY_POOL_ADDR_1 0x180d496e0
#define MEMORY_POOL_ADDR_2 0x180d497e0
#define MODULE_DATA_ADDR 0x180c95bf8
#define MODULE_MUTEX_ADDR 0x180c95d70
#define MODULE_HANDLER_ADDR 0x180c95de0
#define MODULE_CONFIG_ADDR 0x180c95fc8

// 系统模块类型定义
#define MODULE_TYPE_AUDIO 0xb
#define MODULE_TYPE_VIDEO 0xc
#define MODULE_TYPE_INPUT 0xd
#define MODULE_TYPE_NETWORK 0xe
#define MODULE_TYPE_PHYSICS 0x11
#define MODULE_TYPE_AI 0x13
#define MODULE_TYPE_UI 0x14
#define MODULE_TYPE_SCRIPT 0x15
#define MODULE_TYPE_CONFIG 0x16
#define MODULE_TYPE_RESOURCE_CACHE 0x17
#define MODULE_TYPE_RESOURCE_LOADER 0x18
#define MODULE_TYPE_SHADER 0x19
#define MODULE_TYPE_TEXTURE 0x1a
#define MODULE_TYPE_MESH 0x1b
#define MODULE_TYPE_ANIMATION 0x1c
#define MODULE_TYPE_PARTICLE 0x1d
#define MODULE_TYPE_PHYSICS_ENGINE 0x1e
#define MODULE_TYPE_COLLISION 0x1f
#define MODULE_TYPE_AI_SYSTEM 0x21
#define MODULE_TYPE_NAVIGATION 0x23
#define MODULE_TYPE_UI_FRAMEWORK 0x25
#define MODULE_TYPE_SCRIPT_ENGINE 0x27
#define MODULE_TYPE_DATABASE 0x28
#define MODULE_TYPE_NETWORK_MANAGER 0x2a
#define MODULE_TYPE_SECURITY 0x2c
#define MODULE_TYPE_ENCRYPTION 0x2d
#define MODULE_TYPE_AUTH 0x2e
#define MODULE_TYPE_PERMISSION 0x2f
#define MODULE_TYPE_SESSION 0x30
#define MODULE_TYPE_USER_CONFIG 0x31
#define MODULE_TYPE_SAVE 0x32
#define MODULE_TYPE_ACHIEVEMENT 0x33
#define MODULE_TYPE_STATISTICS 0x34
#define MODULE_TYPE_ANALYTICS 0x35
#define MODULE_TYPE_DEBUG 0x36
#define MODULE_TYPE_PERFORMANCE_ANALYSIS 0x37
#define MODULE_TYPE_CRASH_HANDLER 0x38
#define MODULE_TYPE_ERROR_REPORT 0x39
#define MODULE_TYPE_UPDATE 0x3a
#define MODULE_TYPE_PATCH 0x3b
#define MODULE_TYPE_DIAGNOSTICS 0x3c
#define MODULE_TYPE_MONITORING 0x3d
#define MODULE_TYPE_HEALTH_CHECK 0x3e

// 全局系统数据定义
void* g_global_system_data;
void* g_system_config_data;

// 系统核心组件地址定义
// 原始名称: system_180a1b368 - 句柄管理器地址
void* g_handle_manager_addr_180a1b368 = (void*)0x180a1b368;
// 原始名称: system_180a1b3f0 - 内存管理器地址
void* g_memory_manager_addr_180a1b3f0 = (void*)0x180a1b3f0;
// 原始名称: system_180a02fc8 - UI互斥锁属性地址
void* g_ui_mutex_attr_addr_180a02fc8 = (void*)0x180a02fc8;
// 原始名称: system_180a02fa0 - UI互斥锁类型地址
void* g_ui_mutex_type_addr_180a02fa0 = (void*)0x180a02fa0;
// 原始名称: system_18045f210 - 栈数据地址1
void* g_stack_data_addr_18045f210 = (void*)0x18045f210;
// 原始名称: system_18045f200 - 栈数据地址2
void* g_stack_data_addr_18045f200 = (void*)0x18045f200;

// 初始化系统配置
int initialize_system_config(void)
{
  int is_system_enabled = 1;
  int operation_count = 0;
  long long max_allowed_value = MAX_SYSTEM_VALUE;
  int system_status = SYSTEM_STATUS_SUCCESS;
  int system_init_result = initialize_system(system_configuration_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化核心数据结构
int initialize_core_data_structure(void)
{
  long long system_init_result;
  void* system_buffer_ptr = &g_systemDataBuffer;
  void* core_data_ptr = &g_core_data_value;
  int data_offset = 0;
  g_core_data_value = 0;
  system_init_result = initialize_system(core_data_structure_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化网络缓冲区系统
int initialize_network_buffer_system(void)
{
  long long system_init_result;
  void* network_buffer_ptr = &g_network_data_buffer;
  void* network_value_ptr = &network_buffer_current_value;
  int buffer_offset = 0;
  network_buffer_current_value = 0;
  system_init_result = initialize_system(network_buffer_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化渲染上下文系统
int initialize_rendering_context_system(void)
{
  long long system_init_result;
  void* render_buffer_ptr = &g_render_data_buffer;
  void* render_value_ptr = &g_render_buffer_value;
  int context_offset = 0;
  g_render_buffer_value = 0;
  system_init_result = initialize_system(rendering_context_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化模块系统
int initialize_module_system(void)
{
  long long system_init_result;
  void* module_buffer_ptr = &g_moduleDataBuffer;
  void* module_value_ptr = &g_module_data_value;
  void* null_ptr = 0;
  g_module_data_value = 0;
  system_init_result = execute_function(module_system_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化输入系统
int initialize_input_system(void)
{
  long long system_init_result;
  void* input_shared_buffer_ptr = &g_shared_data_buffer;
  void* input_value_ptr = &input_buffer_current_value;
  int buffer_offset = 0;
  input_buffer_current_value = 0;
  system_init_result = execute_function(input_system_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化物理系统
int initialize_physics_system(void)
{
  long long system_init_result;
  void* physics_shared_buffer_ptr = &g_shared_data_buffer;
  void* physics_value_ptr = &physics_buffer_current_value;
  int physics_data_offset = 0;
  physics_buffer_current_value = 0;
  system_init_result = execute_function(physics_system_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化主线程池
int initialize_main_thread_pool(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long system_init_result;
  unsigned long long pool_flags = THREAD_POOL_DEFAULT_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(MAIN_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_flags);
  main_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_init_result = execute_function(main_thread_pool_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化渲染线程池
int initialize_rendering_thread_pool(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long system_init_result;
  unsigned long long pool_flags = THREAD_POOL_DEFAULT_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(RENDER_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_flags);
  render_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_init_result = execute_function(rendering_thread_pool_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化网络线程池
int initialize_network_thread_pool(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long system_init_result;
  unsigned long long pool_flags = THREAD_POOL_DEFAULT_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(NETWORK_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_flags);
  network_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_init_result = execute_function(network_thread_pool_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化IO线程池
int initialize_io_thread_pool(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long system_init_result;
  unsigned long long pool_flags = THREAD_POOL_DEFAULT_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(IO_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_flags);
  io_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_init_result = execute_function(io_thread_pool_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化基础资源管理器
int initialize_base_resource_manager(void)
{
  long long system_init_result;
  unsigned long long str_length;
  g_resource_string_1 = 0;
  g_resource_id_1 = 6;
  strcpy_s(&g_resource_string_1,STRING_BUFFER_SIZE,&string_source_001,str_length,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(base_resource_manager_init_function);
  return (system_init_result != 0) - 1;
}
// 初始化纹理资源管理器
int initialize_texture_resource_manager(void)
{
  long long system_init_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_1;
  resource_buffer_1 = 0;
  resource_type_1 = RESOURCE_TYPE_TEXTURE;
  strcpy_s(&resource_buffer_1, RESOURCE_BUFFER_SIZE, &string_source_002, str_length, THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(texture_resource_manager_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_shader_resource_manager_1(void)
{
  long long system_init_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_2;
  resource_buffer_2 = 0;
  resource_type_2 = RESOURCE_TYPE_SHADER;
  strcpy_s(&resource_buffer_2, RESOURCE_BUFFER_SIZE, &string_source_003, str_length, THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(shader_resource_manager_1_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_shader_resource_manager_2(void)
{
  long long system_init_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_3;
  resource_buffer_3 = 0;
  resource_type_3 = RESOURCE_TYPE_SHADER;
  strcpy_s(&resource_buffer_3, RESOURCE_BUFFER_SIZE, &string_source_004, str_length, THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(shader_resource_manager_2_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_audio_resource_manager(void)
{
  long long initialization_result;
  unsigned long long string_length_parameter;
  void* resource_data_buffer_pointer = &g_resource_data_buffer;
  void* resource_buffer_value_pointer = &resource_buffer_4;
  resource_buffer_4 = 0;
  resource_type_4 = RESOURCE_TYPE_AUDIO;
  strcpy_s(&resource_buffer_4, RESOURCE_BUFFER_SIZE, &string_source_005, string_length_parameter, THREAD_POOL_DEFAULT_FLAG);
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
  resource_type_5 = RESOURCE_TYPE_AUDIO;
  strcpy_s(&resource_buffer_5, RESOURCE_BUFFER_SIZE, &string_source_006, string_length_parameter, THREAD_POOL_DEFAULT_FLAG);
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
  strcpy_s(&resource_buffer_6, RESOURCE_BUFFER_SIZE, &string_source_007, string_length_parameter, THREAD_POOL_DEFAULT_FLAG);
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
  strcpy_s(&g_system_name_buffer, RESOURCE_BUFFER_SIZE, &g_system_name_string, string_length_parameter, THREAD_POOL_DEFAULT_FLAG);
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
  strcpy_s(&g_system_version_buffer, RESOURCE_BUFFER_SIZE, &g_system_version_string, string_length_parameter, THREAD_POOL_DEFAULT_FLAG);
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
  g_config_resource_type = RESOURCE_TYPE_TEXTURE;
  strcpy_s(&g_config_file_path, CONFIG_PATH_BUFFER_SIZE, &g_config_path_string, string_length_parameter, THREAD_POOL_DEFAULT_FLAG);
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
  strcpy_s(&g_save_file_path, CONFIG_PATH_BUFFER_SIZE, &g_save_path_string, string_length_parameter, THREAD_POOL_DEFAULT_FLAG);
  initialization_result = execute_function(savegame_string_buffer_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化互斥锁1
int initialize_main_mutex(void* handle, void* flags, void* mutex_attr, int mutex_type)
{
  long long initialization_result;
  _Mtx_init_in_situ(MAIN_THREAD_POOL_MUTEX_ADDR, STRING_BUFFER_SIZE_2, mutex_attr, mutex_type, THREAD_POOL_DEFAULT_FLAG);
  initialization_result = execute_function(main_mutex_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化数据缓冲区系统
int initialize_data_buffer_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  g_system_config_buffer = 0;
  g_system_config_flags = FLAG_INITIALIZED;
  strcpy_s(&g_system_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemConfigString,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  g_resource_template_ptr_1 = &g_defaultDataTemplate;
  g_texture_resource_ptr = &texture_resource_data;
  texture_resource_data = 0;
  g_resource_type_1 = FLAG_TEXTURE_RESOURCE;
  strcpy_s(&texture_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string);
  g_resource_template_ptr_2 = &g_defaultDataTemplate;
  g_shader_resource_ptr = &shader_resource_data;
  shader_resource_data = 0;
  system_global_data_ = FLAG_SHADER_RESOURCE;
  strcpy_s(&shader_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string);
  system_global_data_ = &g_defaultDataTemplate;
  g_audio_resource_ptr = &audio_resource_data;
  audio_resource_data = 0;
  system_global_data_ = FLAG_AUDIO_RESOURCE;
  strcpy_s(&audio_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string);
  system_global_data_ = &g_defaultDataTemplate;
  g_font_resource_ptr = &font_resource_data;
  font_resource_data = 0;
  system_global_data_ = FLAG_FONT_RESOURCE;
  strcpy_s(&font_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_font_resource_string);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &resource_data_5;
  resource_data_5 = 0;
  system_global_data_ = FLAG_FONT_RESOURCE;
  strcpy_s(&resource_data_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString5);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &resource_font_name_buffer;
  resource_font_name_buffer = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&resource_font_name_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &g_resourceString6);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &resource_model_name_buffer;
  resource_model_name_buffer = 0;
  system_global_data_ = FLAG_MODEL_RESOURCE;
  strcpy_s(&resource_model_name_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString7);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &resource_animation_name_buffer;
  resource_animation_name_buffer = 0;
  system_global_data_ = FLAG_SHADER_RESOURCE;
  strcpy_s(&resource_animation_name_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString8);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6a80;
  data_180bf6a80 = 0;
  system_global_data_ = FLAG_PARTICLE_RESOURCE;
  strcpy_s(&data_180bf6a80,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString9);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6ad8;
  data_180bf6ad8 = 0;
  system_global_data_ = FLAG_CONFIG_RESOURCE;
  strcpy_s(&data_180bf6ad8,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string0);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6b30;
  data_180bf6b30 = 0;
  system_global_data_ = 0;
  strcpy_s(&data_180bf6b30,SYSTEM_CONFIG_BUFFER_SIZE,&data_18098bc73);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6b88;
  data_180bf6b88 = 0;
  system_global_data_ = FLAG_SAVE_GAME_RESOURCE;
  strcpy_s(&data_180bf6b88,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string1);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6be0;
  data_180bf6be0 = 0;
  system_global_data_ = 7;
  strcpy_s(&data_180bf6be0,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string2);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6c38;
  data_180bf6c38 = 0;
  system_global_data_ = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&data_180bf6c38,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string3);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6c90;
  data_180bf6c90 = 0;
  system_global_data_ = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&data_180bf6c90,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string4);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6ce8;
  data_180bf6ce8 = 0;
  system_global_data_ = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&data_180bf6ce8,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string5);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6d40;
  data_180bf6d40 = 0;
  system_global_data_ = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&data_180bf6d40,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string6);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6d98;
  data_180bf6d98 = 0;
  system_global_data_ = FLAG_UI_RESOURCE;
  strcpy_s(&data_180bf6d98,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string7);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6df0;
  data_180bf6df0 = 0;
  system_global_data_ = FLAG_SCRIPT_RESOURCE;
  strcpy_s(&data_180bf6df0,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string8);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6e48;
  data_180bf6e48 = 0;
  system_global_data_ = FLAG_NETWORK_RESOURCE;
  strcpy_s(&data_180bf6e48,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string9);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6ea0;
  data_180bf6ea0 = 0;
  system_global_data_ = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&data_180bf6ea0,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string0);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6ef8;
  data_180bf6ef8 = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf6ef8,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string1);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6f50;
  data_180bf6f50 = 0;
  system_global_data_ = FLAG_CONFIG_RESOURCE;
  strcpy_s(&data_180bf6f50,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string2);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf6fa8;
  data_180bf6fa8 = 0;
  system_global_data_ = FLAG_AUTH_RESOURCE;
  strcpy_s(&data_180bf6fa8,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string3);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7000;
  data_180bf7000 = 0;
  system_global_data_ = FLAG_SECURITY_RESOURCE;
  strcpy_s(&data_180bf7000,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string4);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7058;
  data_180bf7058 = 0;
  system_global_data_ = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&data_180bf7058,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string5);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf70b0;
  data_180bf70b0 = 0;
  system_global_data_ = FLAG_CONFIG_RESOURCE;
  strcpy_s(&data_180bf70b0,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string6);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7108;
  data_180bf7108 = 0;
  system_global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bf7108,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string7);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7160;
  data_180bf7160 = 0;
  system_global_data_ = FLAG_NETWORK_RESOURCE;
  strcpy_s(&data_180bf7160,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string8);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf71b8;
  data_180bf71b8 = 0;
  system_global_data_ = FLAG_SECURITY_RESOURCE;
  strcpy_s(&data_180bf71b8,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string9);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7210;
  data_180bf7210 = 0;
  system_global_data_ = 0xf;
  strcpy_s(&data_180bf7210,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string0);
  system_init_result = execute_function(&g_systemInitFunction1);
  return (system_init_result != 0) - 1;
}
int initialize_audio_module(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7268;
  data_180bf7268 = 0;
  system_global_data_ = 0xb;
  strcpy_s(&data_180bf7268,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString1,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(data_buffer_system_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_video_module(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf72c8;
  data_180bf72c8 = 0;
  system_global_data_ = 9;
  strcpy_s(&data_180bf72c8,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString2,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(memory_manager_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_input_module(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7328;
  data_180bf7328 = 0;
  system_global_data_ = 9;
  strcpy_s(&data_180bf7328,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString3,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(thread_manager_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_network_module(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7388;
  data_180bf7388 = 0;
  system_global_data_ = 0xb;
  strcpy_s(&data_180bf7388,0x80,&g_memoryString1,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7420;
  data_180bf7420 = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf7420,STRING_BUFFER_SIZE_1,&g_memoryString2);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf74b8;
  data_180bf74b8 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf74b8,STRING_BUFFER_SIZE_1,&g_memoryString3);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7550;
  data_180bf7550 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf7550,STRING_BUFFER_SIZE_1,&g_memoryString4);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf75e8;
  data_180bf75e8 = 0;
  system_global_data_ = 0xc;
  strcpy_s(&data_180bf75e8,STRING_BUFFER_SIZE_1,&g_memoryString5);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7680;
  data_180bf7680 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf7680,STRING_BUFFER_SIZE_1,&g_memoryString6);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7718;
  data_180bf7718 = 0;
  system_global_data_ = 10;
  strcpy_s(&data_180bf7718,STRING_BUFFER_SIZE_1,&g_memoryString7);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf77b0;
  data_180bf77b0 = 0;
  system_global_data_ = 0xc;
  strcpy_s(&data_180bf77b0,STRING_BUFFER_SIZE_1,&g_memoryString8);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7848;
  data_180bf7848 = 0;
  system_global_data_ = 0x11;
  strcpy_s(&data_180bf7848,STRING_BUFFER_SIZE_1,&g_memoryString9);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf78e0;
  data_180bf78e0 = 0;
  system_global_data_ = 0x11;
  strcpy_s(&data_180bf78e0,STRING_BUFFER_SIZE_1,&g_memoryString10);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7978;
  data_180bf7978 = 0;
  system_global_data_ = 0x19;
  strcpy_s(&data_180bf7978,STRING_BUFFER_SIZE_1,&g_memoryString11);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7a10;
  data_180bf7a10 = 0;
  system_global_data_ = 0x1a;
  strcpy_s(&data_180bf7a10,STRING_BUFFER_SIZE_1,&g_memoryString12);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7aa8;
  data_180bf7aa8 = 0;
  system_global_data_ = 0x1b;
  strcpy_s(&data_180bf7aa8,STRING_BUFFER_SIZE_1,&g_memoryString13);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7b40;
  data_180bf7b40 = 0;
  system_global_data_ = 0xc;
  strcpy_s(&data_180bf7b40,STRING_BUFFER_SIZE_1,&g_memoryString14);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7bd8;
  data_180bf7bd8 = 0;
  system_global_data_ = 0x11;
  strcpy_s(&data_180bf7bd8,STRING_BUFFER_SIZE_1,&g_memoryString15);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bf7c70;
  data_180bf7c70 = 0;
  system_global_data_ = 0x11;
  strcpy_s(&data_180bf7c70,STRING_BUFFER_SIZE_1,&g_memoryString16);
  system_init_result = execute_function(&g_systemInitFunction2);
  return (system_init_result != 0) - 1;
}
  data_180bf7ea8 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf7ea8,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemConfigString,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7f00;
  data_180bf7f00 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf7f00,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7f58;
  data_180bf7f58 = 0;
  system_global_data_ = 0x17;
  strcpy_s(&data_180bf7f58,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf7fb0;
  data_180bf7fb0 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf7fb0,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8008;
  data_180bf8008 = 0;
  system_global_data_ = 0xc;
  strcpy_s(&data_180bf8008,SYSTEM_CONFIG_BUFFER_SIZE,&g_font_resource_string);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8060;
  data_180bf8060 = 0;
  system_global_data_ = 0xc;
  strcpy_s(&data_180bf8060,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString5);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf80b8;
  data_180bf80b8 = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf80b8,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString6);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8110;
  data_180bf8110 = 0;
  system_global_data_ = 0x1f;
  strcpy_s(&data_180bf8110,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString7);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8168;
  data_180bf8168 = 0;
  system_global_data_ = 0x17;
  strcpy_s(&data_180bf8168,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString8);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf81c0;
  data_180bf81c0 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf81c0,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString9);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8218;
  data_180bf8218 = 0;
  system_global_data_ = 0x14;
  strcpy_s(&data_180bf8218,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string0);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8270;
  data_180bf8270 = 0;
  system_global_data_ = 0;
  strcpy_s(&data_180bf8270,SYSTEM_CONFIG_BUFFER_SIZE,&data_18098bc73);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf82c8;
  data_180bf82c8 = 0;
  system_global_data_ = 0x1b;
  strcpy_s(&data_180bf82c8,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string1);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8320;
  data_180bf8320 = 0;
  system_global_data_ = 7;
  strcpy_s(&data_180bf8320,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string2);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8378;
  data_180bf8378 = 0;
  system_global_data_ = 0x19;
  strcpy_s(&data_180bf8378,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string3);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf83d0;
  data_180bf83d0 = 0;
  system_global_data_ = 0x12;
  strcpy_s(&data_180bf83d0,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string4);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8428;
  data_180bf8428 = 0;
  system_global_data_ = 0x12;
  strcpy_s(&data_180bf8428,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string5);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8480;
  data_180bf8480 = 0;
  system_global_data_ = 0x19;
  strcpy_s(&data_180bf8480,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string6);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf84d8;
  data_180bf84d8 = 0;
  system_global_data_ = 0x11;
  strcpy_s(&data_180bf84d8,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string7);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8530;
  data_180bf8530 = 0;
  system_global_data_ = 0x18;
  strcpy_s(&data_180bf8530,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string8);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8588;
  data_180bf8588 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf8588,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string9);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf85e0;
  data_180bf85e0 = 0;
  system_global_data_ = 0x19;
  strcpy_s(&data_180bf85e0,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string0);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8638;
  data_180bf8638 = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf8638,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string1);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8690;
  data_180bf8690 = 0;
  system_global_data_ = 0x14;
  strcpy_s(&data_180bf8690,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string2);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf86e8;
  data_180bf86e8 = 0;
  system_global_data_ = 0xf;
  strcpy_s(&data_180bf86e8,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string3);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8740;
  data_180bf8740 = 0;
  system_global_data_ = 0x16;
  strcpy_s(&data_180bf8740,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string4);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8798;
  data_180bf8798 = 0;
  system_global_data_ = 0x12;
  strcpy_s(&data_180bf8798,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string5);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf87f0;
  data_180bf87f0 = 0;
  system_global_data_ = 0x14;
  strcpy_s(&data_180bf87f0,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string6);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8848;
  data_180bf8848 = 0;
  system_global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bf8848,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string7);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf88a0;
  data_180bf88a0 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf88a0,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string8);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf88f8;
  data_180bf88f8 = 0;
  system_global_data_ = 0x16;
  strcpy_s(&data_180bf88f8,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string9);
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf8950;
  data_180bf8950 = 0;
  system_global_data_ = 0xf;
  strcpy_s(&data_180bf8950,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string0);
  system_init_result = execute_function(&g_systemInitFunction3);
  return (system_init_result != 0) - 1;
}
  data_180bf90c8 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf90c8,CONFIG_PATH_BUFFER_SIZE,&g_configString1,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(event_system_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_physics_module(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_alternateDataTemplate;
  system_global_data_ = &data_180bf5ba0;
  data_180bf5ba0 = 0;
  system_global_data_ = 9;
  strcpy_s(&data_180bf5ba0,CONFIG_PATH_BUFFER_SIZE,&g_configString2,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(time_system_init_callback);
  return (system_init_result != 0) - 1;
}
  data_180bf91c8 = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf91c8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString1,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(file_system_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_ai_module(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9228;
  data_180bf9228 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf9228,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString2,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(debug_system_init_callback);
  return (system_init_result != 0) - 1;
}
int initialize_ui_module(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9288;
  data_180bf9288 = 0;
  system_global_data_ = 0x12;
  strcpy_s(&data_180bf9288,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString3,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_7_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_scripting_module(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf92e8;
  data_180bf92e8 = 0;
  system_global_data_ = 0x12;
  strcpy_s(&data_180bf92e8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString4,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_8_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_audio_engine(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9348;
  data_180bf9348 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf9348,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString5,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_9_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_video_subsystem(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf93a8;
  data_180bf93a8 = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf93a8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString6,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_10_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_input_handler(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9408;
  data_180bf9408 = 0;
  system_global_data_ = 0x17;
  strcpy_s(&data_180bf9408,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString7,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_11_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_network_stack(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9468;
  data_180bf9468 = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bf9468,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString8,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_12_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_file_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf94c8;
  data_180bf94c8 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf94c8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString9,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_13_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_memory_manager(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9528;
  data_180bf9528 = 0;
  system_global_data_ = 0xc;
  strcpy_s(&data_180bf9528,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString10,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_14_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_thread_manager(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9588;
  data_180bf9588 = 0;
  system_global_data_ = 0x16;
  strcpy_s(&data_180bf9588,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString11,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_15_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_event_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf95e8;
  data_180bf95e8 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf95e8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString12,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_16_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_timer_service(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9648;
  data_180bf9648 = 0;
  system_global_data_ = 0x14;
  strcpy_s(&data_180bf9648,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString13,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_17_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_logger_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf96a8;
  data_180bf96a8 = 0;
  system_global_data_ = 0x17;
  strcpy_s(&data_180bf96a8,SYSTEM_CONFIG_BUFFER_SIZE,&data_180a22cb0,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_18_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_config_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9708;
  data_180bf9708 = 0;
  system_global_data_ = 0x17;
  strcpy_s(&data_180bf9708,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString14,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_19_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_resource_cache(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9768;
  data_180bf9768 = 0;
  system_global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bf9768,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString15,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_20_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_asset_loader(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf97c8;
  data_180bf97c8 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf97c8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString16,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_21_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_shader_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9828;
  data_180bf9828 = 0;
  system_global_data_ = 0x1e;
  strcpy_s(&data_180bf9828,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString17,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_22_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_texture_manager(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9888;
  data_180bf9888 = 0;
  system_global_data_ = 0x1b;
  strcpy_s(&data_180bf9888,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString18,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_23_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_mesh_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf98e8;
  data_180bf98e8 = 0;
  system_global_data_ = 0x1b;
  strcpy_s(&data_180bf98e8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString19,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_24_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_animation_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9948;
  data_180bf9948 = 0;
  system_global_data_ = 0x1c;
  strcpy_s(&data_180bf9948,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString20,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_25_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_particle_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf99a8;
  data_180bf99a8 = 0;
  system_global_data_ = 0x1d;
  strcpy_s(&data_180bf99a8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString21,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_26_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_physics_engine(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9a08;
  data_180bf9a08 = 0;
  system_global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bf9a08,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString22,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_27_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_collision_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9a68;
  data_180bf9a68 = 0;
  system_global_data_ = 0x1d;
  strcpy_s(&data_180bf9a68,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString23,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_28_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_ai_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  g_string_manager_ptr_180bf9ab0 = &g_defaultDataTemplate;
  g_string_manager_ptr_180bf9ab8 = &g_string_buffer_180bf9ac8;
  g_string_buffer_180bf9ac8 = 0;
  g_string_manager_type_180bf9ac0 = 0x1c;
  strcpy_s(&g_string_buffer_180bf9ac8,SYSTEM_CONFIG_BUFFER_SIZE,&data_180a22d48,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_29_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_navigation_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9b28;
  data_180bf9b28 = 0;
  system_global_data_ = 0x17;
  strcpy_s(&data_180bf9b28,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString24,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_30_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_ui_framework(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9b88;
  data_180bf9b88 = 0;
  system_global_data_ = 0x1f;
  strcpy_s(&data_180bf9b88,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString25,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_31_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_scripting_engine(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9be8;
  data_180bf9be8 = 0;
  system_global_data_ = 0x21;
  strcpy_s(&data_180bf9be8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString26,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_32_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_database_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9c48;
  data_180bf9c48 = 0;
  system_global_data_ = 0x25;
  strcpy_s(&data_180bf9c48,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString27,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_33_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_network_manager(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9ca8;
  data_180bf9ca8 = 0;
  system_global_data_ = 0x23;
  strcpy_s(&data_180bf9ca8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString28,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_34_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_security_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9d08;
  data_180bf9d08 = 0;
  system_global_data_ = 0x1e;
  strcpy_s(&data_180bf9d08,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString29,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_35_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_encryption_service(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9d68;
  data_180bf9d68 = 0;
  system_global_data_ = 0x1e;
  strcpy_s(&data_180bf9d68,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString30,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_36_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_authentication_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9dc8;
  data_180bf9dc8 = 0;
  system_global_data_ = 0x12;
  strcpy_s(&data_180bf9dc8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString31,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_37_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_permission_manager(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9e28;
  data_180bf9e28 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf9e28,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString32,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_38_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_session_manager(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9e88;
  data_180bf9e88 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bf9e88,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString33,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_39_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_user_profile_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9ee8;
  data_180bf9ee8 = 0;
  system_global_data_ = 0x16;
  strcpy_s(&data_180bf9ee8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString34,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_40_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_save_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9f48;
  data_180bf9f48 = 0;
  system_global_data_ = 0x1a;
  strcpy_s(&data_180bf9f48,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString35,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_41_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_achievement_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bf9fa8;
  data_180bf9fa8 = 0;
  system_global_data_ = 0x15;
  strcpy_s(&data_180bf9fa8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString36,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_42_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_statistics_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bfa008;
  data_180bfa008 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bfa008,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString37,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_43_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_analytics_service(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bfa068;
  data_180bfa068 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bfa068,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString38,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_44_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_debug_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bfa0c8;
  data_180bfa0c8 = 0;
  system_global_data_ = 0x1b;
  strcpy_s(&data_180bfa0c8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString39,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_45_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_profiling_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bfa128;
  data_180bfa128 = 0;
  system_global_data_ = 0x19;
  strcpy_s(&data_180bfa128,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString40,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_46_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_crash_handler(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bfa188;
  data_180bfa188 = 0;
  system_global_data_ = 0x15;
  strcpy_s(&data_180bfa188,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString41,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_47_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_error_reporting(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bfa1e8;
  data_180bfa1e8 = 0;
  system_global_data_ = 0x28;
  strcpy_s(&data_180bfa1e8,SYSTEM_CONFIG_BUFFER_SIZE,&data_180a22fd0,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_48_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_update_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bfa248;
  data_180bfa248 = 0;
  system_global_data_ = 0x23;
  strcpy_s(&data_180bfa248,SYSTEM_CONFIG_BUFFER_SIZE,&data_180a22fa8,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_49_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_patch_manager(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_defaultDataTemplate;
  system_global_data_ = &data_180bfa2a8;
  data_180bfa2a8 = 0;
  system_global_data_ = 0x17;
  strcpy_s(&data_180bfa2a8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString42,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_50_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_diagnostics_system(void)
{
  long long system_init_result;
  system_init_result = execute_function(resource_manager_51_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_monitoring_service(void)
{
  long long system_init_result;
  system_init_result = execute_function(resource_manager_52_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_health_checker(void)
{
  long long system_init_result;
  system_init_result = execute_function(resource_manager_53_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_worker_thread_pool(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long system_init_result;
  _Mtx_init_in_situ(SECOND_MUTEX_ADDR,2,mutex_attr,mutex_type,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_54_init_function);
  return (system_init_result != 0) - 1;
}
  data_180bfa368 = 0;
  system_global_data_ = 7;
  strcpy_s(&data_180bfa368,STRING_BUFFER_SIZE_1,&g_bufferString1,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa400;
  data_180bfa400 = 0;
  system_global_data_ = 9;
  strcpy_s(&data_180bfa400,STRING_BUFFER_SIZE_1,&g_bufferString2);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa498;
  data_180bfa498 = 0;
  system_global_data_ = 0xb;
  strcpy_s(&data_180bfa498,STRING_BUFFER_SIZE_1,&g_bufferString3);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa530;
  data_180bfa530 = 0;
  system_global_data_ = 7;
  strcpy_s(&data_180bfa530,STRING_BUFFER_SIZE_1,&g_bufferString4);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa5c8;
  data_180bfa5c8 = 0;
  system_global_data_ = 0xc;
  strcpy_s(&data_180bfa5c8,STRING_BUFFER_SIZE_1,&g_bufferString5);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa660;
  data_180bfa660 = 0;
  system_global_data_ = 9;
  strcpy_s(&data_180bfa660,STRING_BUFFER_SIZE_1,&g_bufferString6);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa6f8;
  data_180bfa6f8 = 0;
  system_global_data_ = 0xc;
  strcpy_s(&data_180bfa6f8,STRING_BUFFER_SIZE_1,&g_bufferString7);
  system_init_result = execute_function(&g_systemInitFunction4);
  return (system_init_result != 0) - 1;
}
int initialize_io_thread_pool(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa798;
  data_180bfa798 = 0;
  system_global_data_ = 0x1b;
  strcpy_s(&data_180bfa798,STRING_BUFFER_SIZE_1,&g_bufferString8,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa830;
  data_180bfa830 = 0;
  system_global_data_ = 0x19;
  strcpy_s(&data_180bfa830,STRING_BUFFER_SIZE_1,&g_bufferString9);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa8c8;
  data_180bfa8c8 = 0;
  system_global_data_ = 0x1f;
  strcpy_s(&data_180bfa8c8,STRING_BUFFER_SIZE_1,&g_bufferString10);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa960;
  data_180bfa960 = 0;
  system_global_data_ = 0x1b;
  strcpy_s(&data_180bfa960,STRING_BUFFER_SIZE_1,&g_bufferString11);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfa9f8;
  data_180bfa9f8 = 0;
  system_global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bfa9f8,STRING_BUFFER_SIZE_1,&g_bufferString12);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfaa90;
  data_180bfaa90 = 0;
  system_global_data_ = CONFIG_PATH_BUFFER_SIZE;
  strcpy_s(&data_180bfaa90,STRING_BUFFER_SIZE_1,&g_bufferString13);
  system_init_result = execute_function(&g_systemInitFunction5);
  return (system_init_result != 0) - 1;
}
int initialize_background_thread_pool(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfab28;
  data_180bfab28 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bfab28,STRING_BUFFER_SIZE_1,&g_bufferString14,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfabc0;
  data_180bfabc0 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bfabc0,STRING_BUFFER_SIZE_1,&g_bufferString14);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfac58;
  data_180bfac58 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bfac58,STRING_BUFFER_SIZE_1,&g_bufferString14);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfacf0;
  data_180bfacf0 = 0;
  system_global_data_ = 0x13;
  strcpy_s(&data_180bfacf0,STRING_BUFFER_SIZE_1,&g_bufferString14);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfad88;
  data_180bfad88 = 0;
  system_global_data_ = 0xe;
  strcpy_s(&data_180bfad88,STRING_BUFFER_SIZE_1,&g_bufferString15);
  system_global_data_ = &g_memoryAllocationFlag;
  system_global_data_ = &data_180bfae20;
  data_180bfae20 = 0;
  system_global_data_ = 0xe;
  strcpy_s(&data_180bfae20,STRING_BUFFER_SIZE_1,&g_bufferString15);
  system_init_result = execute_function(&g_systemInitFunction6);
  return (system_init_result != 0) - 1;
}
int initialize_backup_system(void)
{
  long long system_init_result;
  system_global_data_ = 0;
  uRam0000000180bfc158 = 0xf;
  data_180bfc140 = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_init_result = execute_function(resource_manager_55_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_recovery_system(void)
{
  long long system_init_result;
  system_global_data_ = 3;
  system_global_data_ = &data_180bfaec0;
  system_global_data_ = &data_180bfaec0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_init_result = execute_function(resource_manager_56_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_priority_thread_pool(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long system_init_result;
  _Mtx_init_in_situ(THIRD_MUTEX_ADDR,2,mutex_attr,mutex_type,THREAD_POOL_DEFAULT_FLAG);
  system_global_data_ = &g_shared_data_buffer;
  system_global_data_ = &data_180c92068;
  system_global_data_ = 0;
  data_180c92068 = 0;
  system_init_result = execute_function(resource_manager_57_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_maintenance_service(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_shared_data_buffer;
  system_global_data_ = &data_180bfaf08;
  data_180bfaf08 = 0;
  system_global_data_ = STRING_BUFFER_SIZE;
  strcpy_s(&data_180bfaf08,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString1,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_58_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_optimization_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_shared_data_buffer;
  system_global_data_ = &data_180bfb328;
  data_180bfb328 = 0;
  system_global_data_ = 3;
  strcpy_s(&data_180bfb328,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString2,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_59_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_performance_monitor(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_shared_data_buffer;
  system_global_data_ = &data_180bfb748;
  data_180bfb748 = 0;
  system_global_data_ = 5;
  strcpy_s(&data_180bfb748,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString3,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_60_init_function);
  return (system_init_result != 0) - 1;
}
  data_180bf6060 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf6060,CONFIG_PATH_BUFFER_SIZE,&g_configString1,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_61_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_load_balancer(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_alternateDataTemplate;
  system_global_data_ = &data_180bf64b0;
  data_180bf64b0 = 0;
  system_global_data_ = 9;
  strcpy_s(&data_180bf64b0,CONFIG_PATH_BUFFER_SIZE,&g_configString2,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_62_init_function);
  return (system_init_result != 0) - 1;
}
  data_180bf6510 = 0;
  system_global_data_ = 0xd;
  strcpy_s(&data_180bf6510,CONFIG_PATH_BUFFER_SIZE,&g_configString1,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_63_init_function);
  return (system_init_result != 0) - 1;
}
int initialize_scaling_system(void)
{
  long long system_init_result;
  unsigned long long str_len_param;
  system_global_data_ = &g_alternateDataTemplate;
  system_global_data_ = &data_180bf6570;
  data_180bf6570 = 0;
  system_global_data_ = 9;
  strcpy_s(&data_180bf6570,CONFIG_PATH_BUFFER_SIZE,&g_configString2,str_len_param,THREAD_POOL_DEFAULT_FLAG);
  system_init_result = execute_function(resource_manager_64_init_function);
  return (system_init_result != 0) - 1;
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
  uint_var_ = system_function_(system_global_data_,THREAD_STACK_SIZE,8,3);
  system_global_data_ = create_event_handle(uint_var_);
  create_thread_context(&system_stack_pointer,handle);
  uint_var_ = allocate_thread_stack(&system_stack_pointer,&g_threadString1);
  uint_var_ = (ulong long)(int)uint_var_;
  if (uint_var_ < stack_var_) {
    char_system_pointer_variable = (char *)(system_stack_long + uint_var_);
    do {
      int_var_ = (int)uint_var_;
      if (*char_system_pointer_variable == ' ') goto label_;
      uint_var_ = (ulong long)(int_var_ + 1U);
      char_system_pointer_variable = char_system_pointer_variable + 1;
    } while (int_var_ + 1U < stack_var_);
  }
  int_var_ = -1;
label_:
  uint_var_ = int_var_ + 1;
  uint_var_ = (ulong long)(int)uint_var_;
  if (uint_var_ < stack_var_) {
    char_system_pointer_variable = (char *)(system_stack_long + uint_var_);
    do {
      if (*char_system_pointer_variable == ' ') goto label_;
      uint_var_ = (int)uint_var_ + 1;
      uint_var_ = (ulong long)uint_var_;
      char_system_pointer_variable = char_system_pointer_variable + 1;
    } while (uint_var_ < stack_var_);
  }
  uint_var_ = UINT32_MAX;
label_:
  if (int_var_ != -1) {
    setup_thread_parameters(&thread_system_stack_pointer98,&thread_system_stack_pointer78,uint_var_,uint_var_);
    thread_name_ptr = &data_18098bc73;
    if (thread_system_stack_pointer70 != (void *)0x0) {
      thread_name_ptr = thread_system_stack_pointer70;
    }
    uint_var_ = atoi(thread_name_ptr);
    *(unsigned int *)(system_global_data_ + 0x7b4) = uint_var_;
    thread_system_stack_pointer78 = &g_threadString2;
    if (thread_system_stack_pointer70 != (void *)0x0) {
      handle_system_error();
    }
    thread_system_stack_pointer70 = (void *)0x0;
    thread_stack_var_60 = 0;
    thread_system_stack_pointer78 = &g_threadString4;
  }
  initialize_event_system();
  uint_var_ = system_function_(system_global_data_,NETWORK_BUFFER_SIZE,8,10);
  system_global_data_ = system_function_(uint_var_);
  thread_data_ptr = (long long *)system_function_(system_global_data_,0xe8,8,3);
  thread_system_stack_pointer10 = thread_data_ptr;
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
  thread_system_stack_pointer48 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + 0x28))(thread_data_ptr);
  system_data_ptr = system_global_data_;
  thread_stack_pptr_18 = &thread_system_stack_pointer10;
  thread_system_stack_pointer10 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + 0x28))(thread_data_ptr);
  register_event_callback(system_data_ptr,&thread_system_stack_pointer10);
  while( true ) {
    if ((void *)*thread_data_ptr == &g_threadString3) {
      cVar16 = (char)thread_data_ptr[2] != '\0';
    }
    else {
      cVar16 = (**(code **)((void *)*thread_data_ptr + 0x68))(thread_data_ptr);
    }
    if (cVar16 != '\0') break;
    Sleep(1);
  }
  (**(code **)(*thread_data_ptr + 0x38))(thread_data_ptr);
  thread_system_stack_pointer98 = &g_threadString2;
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
  system_data_manager_001(system_global_data_,0,0xd,&g_systemDataString1,data_180c82852);
  if (thread_system_stack_pointer28 == (void *)0x0) {
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
  create_thread_context(&thread_system_stack_pointer48,handle);
  system_function_(&thread_stack_var_68,&thread_system_stack_pointer48);
  thread_system_stack_pointer48 = &g_threadString2;
  if (thread_stack_var_40 != 0) {
    handle_system_error();
  }
  thread_stack_var_40 = 0;
  thread_stack_var_30 = 0;
  thread_system_stack_pointer48 = &g_threadString4;
  thread_stack_var_88 = 0;
  thread_stack_var_80 = 0;
  thread_stack_var_78 = 0;
  thread_stack_var_70 = 3;
  system_function_(&thread_stack_var_88,&thread_stack_var_68);
  system_function_(&thread_stack_var_88,thread_stack_array_a8);
  if (MAX_THREAD_STACK_SIZE < thread_stack_var_98) {
    thread_stack_var_98 = MAX_THREAD_STACK_SIZE;
  }
  thread_name_ptr = &data_18098bc73;
  if (thread_system_stack_pointera0 != (void *)0x0) {
    thread_name_ptr = thread_system_stack_pointera0;
  }
  memcpy(&data_180c82870,thread_name_ptr,(long long)(int)thread_stack_var_98);
}
    data_180c84870 = 0;
    return;
  }
  system_long_variable = -1;
  do {
    system_long_variable = system_long_variable + 1;
  } while (*(char *)(handle + system_long_variable) != '\0');
  uint_var_ = (uint)system_long_variable;
  if (MAX_THREAD_STACK_SIZE < uint_var_) {
    uint_var_ = MAX_THREAD_STACK_SIZE;
  }
  memcpy(&data_180c84870,handle,(long long)(int)uint_var_);
}
          data_180c82860 = 1;
          data_180c82853 = 0;
          *(unsigned char *)(system_global_data_ + 0x1f0) = 0;
          system_stack_pointer2c8 = &g_threadString2;
          stack_var_2b0 = 0;
          system_stack_pointer2c0 = (unsigned char *)0x0;
          stack_var_2b8 = 0;
          if (string_ptr_17 != (void *)0x0) {
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
              buffer_ptr = (unsigned char *)system_function_(system_global_data_,(long long)alloc_size,0x13);
              *buffer_ptr = 0;
              system_stack_pointer2c0 = buffer_ptr;
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
          system_long_variable = strstr(system_pointer_variable,&g_systemDataString8);
          if (system_long_variable == 0) {
            system_long_variable = strstr(system_pointer_variable,&g_systemDataString9);
            if ((((((system_long_variable == 0) && (system_long_variable = strstr(system_pointer_variable,&g_systemDataString10), system_long_variable == 0)) &&
                  (system_long_variable = strstr(system_pointer_variable,&g_systemDataString11), system_long_variable == 0)) &&
                 ((system_long_variable = strstr(system_pointer_variable,&g_systemDataString12), system_long_variable == 0 &&
                  (system_long_variable = strstr(system_pointer_variable,&g_systemDataString13), system_long_variable == 0)))) &&
                ((system_long_variable = strstr(system_pointer_variable,&g_systemDataString14), system_long_variable == 0 &&
                 ((system_long_variable = strstr(system_pointer_variable,&g_systemDataString15), system_long_variable == 0 &&
                  (system_long_variable = strstr(system_pointer_variable,&g_systemDataString16), system_long_variable == 0)))))) &&
               (system_long_variable = strstr(system_pointer_variable,&g_systemDataString17), system_long_variable == 0)) {
              *(unsigned short *)(system_long_variable + 0x24) = STRING_BUFFER_SIZE_1;
              *(unsigned char *)(system_long_variable + 0x28) = 1;
            }
            else {
              data_180c82851 = 1;
            }
          }
          else {
            *(unsigned short *)(system_long_variable + 0x24) = 0;
          }
          system_stack_pointer = (unsigned char *)0x0;
          stack_var_ = stack_var_ & INT64_MASK;
          system_stack_pointer = &g_threadString4;
        }
        else if (uint_var_ == 0xb) {
          int_var_ = strcmp(system_pointer_variable,&g_systemDataString18);
          if (int_var_ != 0) goto label_;
          data_180c82860 = 1;
          data_180c82853 = 0;
          data_180c82842 = 1;
          system_long_variable = strstr(system_pointer_variable,&g_systemDataString19);
          if (system_long_variable != 0) {
            system_pointer_variable = &g_systemDataString20;
            goto label_;
          }
        }
        else {
          if (uint_var_ == 0xc) {
            int_var_ = strcmp(system_pointer_variable,&g_systemDataString21);
            bVar31 = int_var_ == 0;
          }
          else {
label_:
            bVar31 = false;
          }
          if (bVar31) {
            create_thread_context(&system_stack_pointer,system_pointer_variable);
            uint_var_ = allocate_thread_stack(&system_stack_pointer,&g_systemDataString21);
            flags1 = (ulong long)(int)uint_var_;
            if (uint_var_ < stack_var_) {
              char_system_pointer_variable = (char *)(system_stack_long + flags1);
              do {
                int_var_ = (int)flags1;
                if (*char_system_pointer_variable == ' ') goto label_;
                flags1 = (ulong long)(int_var_ + 1U);
                char_system_pointer_variable = char_system_pointer_variable + 1;
              } while (int_var_ + 1U < stack_var_);
            }
            int_var_ = -1;
label_:
            uint_var_ = int_var_ + 1;
            flags1 = (ulong long)(int)uint_var_;
            if (uint_var_ < stack_var_) {
              char_system_pointer_variable = (char *)(system_stack_long + flags1);
              do {
                if (*char_system_pointer_variable == ' ') goto label_;
                flags6 = (int)flags1 + 1;
                flags1 = (ulong long)flags6;
                char_system_pointer_variable = char_system_pointer_variable + 1;
              } while (flags6 < stack_var_);
            }
            flags1 = UINT32_MAX;
label_:
            if (int_var_ != -1) {
              setup_thread_parameters(&system_stack_pointer,&system_stack_pointer,uint_var_,flags1);
              int_var_ = stack_int_;
              int_var_ = 0;
              system_long_variable = strchr(system_stack_pointer,0x2e);
              if (system_long_variable != 0) {
                do {
                  int_var_ = int_var_ + 1;
                  system_long_variable = strchr(system_long_variable + 1,0x2e);
                } while (system_long_variable != 0);
                if ((int_var_ == 3) && (int_var_ - 7U < 9)) {
                  thread_name_ptr = &data_18098bc73;
                  if (thread_system_stack_pointer1b0 != (void *)0x0) {
                    thread_name_ptr = thread_system_stack_pointer1b0;
                  }
                  (**(code **)(*(long long *)(system_long_variable + 400) + STRING_BUFFER_SIZE))
                            ((long long *)(system_long_variable + 400),thread_name_ptr);
                }
              }
              thread_system_stack_pointer1b8 = &g_threadString2;
              if (thread_system_stack_pointer1b0 != (void *)0x0) {
                handle_system_error();
              }
              thread_system_stack_pointer1b0 = (void *)0x0;
              thread_stack_var_1a0 = 0;
              thread_system_stack_pointer1b8 = &g_threadString4;
            }
            thread_system_stack_pointer238 = &g_threadString2;
            if (thread_stack_var_230 != 0) {
              handle_system_error();
            }
            thread_stack_var_230 = 0;
            thread_stack_var_220 = 0;
            thread_system_stack_pointer238 = &g_threadString4;
          }
          else {
            if (uint_var_ == 0x11) {
              int_var_ = strcmp(system_pointer_variable,&g_systemDataString22);
              bVar31 = int_var_ == 0;
            }
            else {
              bVar31 = false;
            }
            if (bVar31) {
              create_thread_context(&system_stack_pointer,system_pointer_variable);
              uint_var_ = allocate_thread_stack(&system_stack_pointer,&g_systemDataString22);
              flags1 = (ulong long)(int)uint_var_;
              if (uint_var_ < stack_var_) {
                char_system_pointer_variable = (char *)(system_stack_long + flags1);
                do {
                  int_var_ = (int)flags1;
                  if (*char_system_pointer_variable == ' ') goto label_;
                  flags1 = (ulong long)(int_var_ + 1U);
                  char_system_pointer_variable = char_system_pointer_variable + 1;
                } while (int_var_ + 1U < stack_var_);
              }
              int_var_ = -1;
label_:
              uint_var_ = int_var_ + 1;
              flags1 = (ulong long)(int)uint_var_;
              if (uint_var_ < stack_var_) {
                char_system_pointer_variable = (char *)(system_stack_long + flags1);
                do {
                  if (*char_system_pointer_variable == ' ') goto label_;
                  flags6 = (int)flags1 + 1;
                  flags1 = (ulong long)flags6;
                  char_system_pointer_variable = char_system_pointer_variable + 1;
                } while (flags6 < stack_var_);
              }
              flags1 = UINT32_MAX;
label_:
              if (int_var_ != -1) {
                setup_thread_parameters(&system_stack_pointer,&system_stack_pointer,uint_var_,flags1);
                int_var_ = stack_int_;
                int_var_ = 0;
                system_long_variable = strchr(system_stack_pointer,0x2e);
                if (system_long_variable != 0) {
                  do {
                    int_var_ = int_var_ + 1;
                    system_long_variable = strchr(system_long_variable + 1,0x2e);
                  } while (system_long_variable != 0);
                  if ((int_var_ == 3) && (int_var_ - 7U < 9)) {
                    thread_name_ptr = &data_18098bc73;
                    if (thread_system_stack_pointer190 != (void *)0x0) {
                      thread_name_ptr = thread_system_stack_pointer190;
                    }
                    (**(code **)(module_pointer_010 + STRING_BUFFER_SIZE))(&data_180bf5bc0,thread_name_ptr);
                  }
                }
                thread_system_stack_pointer198 = &g_threadString2;
                if (thread_system_stack_pointer190 != (void *)0x0) {
                  handle_system_error();
                }
                thread_system_stack_pointer190 = (void *)0x0;
                thread_stack_var_180 = 0;
                thread_system_stack_pointer198 = &g_threadString4;
              }
              thread_system_stack_pointer218 = &g_threadString2;
              if (thread_stack_var_210 != 0) {
                handle_system_error();
              }
              thread_stack_var_210 = 0;
              thread_stack_var_200 = 0;
              thread_system_stack_pointer218 = &g_threadString4;
            }
            else {
              if (uint_var_ == 0xe) {
                int_var_ = strcmp(system_pointer_variable,&g_systemDataString23);
                bVar31 = int_var_ == 0;
              }
              else {
                bVar31 = false;
              }
              if (bVar31) {
                create_thread_context(&system_stack_pointer,system_pointer_variable);
                uint_var_ = allocate_thread_stack(&system_stack_pointer,&g_systemDataString23);
                flags1 = (ulong long)(int)uint_var_;
                if (uint_var_ < stack_var_) {
                  char_system_pointer_variable = (char *)(system_stack_long + flags1);
                  do {
                    if (*char_system_pointer_variable == ' ') goto label_;
                    uint_var_ = (int)flags1 + 1;
                    flags1 = (ulong long)uint_var_;
                    char_system_pointer_variable = char_system_pointer_variable + 1;
                  } while (uint_var_ < stack_var_);
                }
                flags1 = UINT32_MAX;
label_:
                uint_var_ = (int)flags1 + 1;
                flags8 = (ulong long)(int)uint_var_;
                if (uint_var_ < stack_var_) {
                  char_system_pointer_variable = (char *)(system_stack_long + flags8);
                  do {
                    if (*char_system_pointer_variable == ' ') goto label_;
                    flags6 = (int)flags8 + 1;
                    flags8 = (ulong long)flags6;
                    char_system_pointer_variable = char_system_pointer_variable + 1;
                  } while (flags6 < stack_var_);
                }
                flags8 = UINT32_MAX;
label_:
                if ((int)flags1 != -1) {
                  setup_thread_parameters(&system_stack_pointer,&system_stack_pointer,uint_var_,flags8);
                  system_thread_manager_011(&system_stack_pointer);
                  if (stack_var_ != 0) {
                    int_var_ = 0;
                    system_long_variable = (long long)(int)(stack_var_ - 1);
                    if (0 < (int)(stack_var_ - 1)) {
                      do {
                        if (system_stack_pointer[system_long_variable] != '\"') break;
                        int_var_ = int_var_ + 1;
                        system_long_variable = system_long_variable + -1;
                      } while (0 < system_long_variable);
                    }
                    stack_var_ = stack_var_ - int_var_;
                    system_stack_pointer[stack_var_] = 0;
                  }
                  system_thread_manager_012(&system_stack_pointer,1);
                  system_pointer_variable = &data_18098bc73;
                  if (system_stack_pointer != (void *)0x0) {
                    system_pointer_variable = system_stack_pointer;
                  }
                  system_long_variable = -1;
                  do {
                    system_long_variable = system_long_variable + 1;
                  } while (system_pointer_variable[system_long_variable] != '\0');
                  if ((int)system_long_variable < SYSTEM_CONFIG_BUFFER_SIZE) {
                    input_offset_value = (int)system_long_variable;
                    strcpy_s(input_buffer_pointer,SYSTEM_CONFIG_BUFFER_SIZE);
                  }
                  else {
                    system_thread_003(&g_systemDataString29,SYSTEM_CONFIG_BUFFER_SIZE);
                    input_offset_value = 0;
                    *input_buffer_pointer = 0;
                  }
                  uint_var_ = stack_var_;
                  flags1 = (ulong long)stack_var_;
                  if (system_stack_pointer != (void *)0x0) {
                    system_thread_manager_001(system_long_variable + 0x170,flags1);
                  }
                  if (uint_var_ != 0) {
                    memcpy(*(unsigned long long *)(system_long_variable + 0x178),system_stack_pointer,flags1);
                  }
                  *(unsigned int *)(system_long_variable + 0x180) = 0;
                  if (*(long long *)(system_long_variable + 0x178) != 0) {
                    *(unsigned char *)(flags1 + *(long long *)(system_long_variable + 0x178)) = 0;
                  }
                  *(unsigned int *)(system_long_variable + 0x18c) = stack_var_;
                  system_stack_pointer = &g_threadString2;
                  if (system_stack_pointer != (void *)0x0) {
                    handle_system_error(system_stack_pointer,system_stack_pointer);
                  }
                  system_stack_pointer = (void *)0x0;
                  stack_var_ = 0;
                  system_stack_pointer = &g_threadString4;
                  flags1 = 0;
                }
                system_stack_pointer = &g_threadString2;
                if (system_stack_long != 0) {
                  handle_system_error(system_stack_long,flags1);
                }
                system_stack_long = 0;
                stack_var_ = 0;
                system_stack_pointer = &g_threadString4;
              }
              else {
                if (uint_var_ == 0x16) {
                  int_var_ = strcmp(system_pointer_variable,&g_systemDataString24);
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
                  int_var_ = strcmp(system_pointer_variable,&g_systemDataString25);
                  bVar31 = int_var_ == 0;
                }
                if (bVar31) {
                  create_thread_context(&system_stack_pointer,system_pointer_variable);
                  uint_var_ = allocate_thread_stack(&system_stack_pointer,&g_systemDataString25);
                  flags1 = (ulong long)(int)uint_var_;
                  if (uint_var_ < stack_var_) {
                    char_system_pointer_variable = (char *)(system_stack_long + flags1);
                    do {
                      if (*char_system_pointer_variable == ' ') goto label_;
                      uint_var_ = (int)flags1 + 1;
                      flags1 = (ulong long)uint_var_;
                      char_system_pointer_variable = char_system_pointer_variable + 1;
                    } while (uint_var_ < stack_var_);
                  }
                  flags1 = UINT32_MAX;
label_:
                  uint_var_ = (int)flags1 + 1;
                  flags8 = (ulong long)(int)uint_var_;
                  if (uint_var_ < stack_var_) {
                    char_system_pointer_variable = (char *)(system_stack_long + flags8);
                    do {
                      if (*char_system_pointer_variable == ' ') goto label_;
                      flags6 = (int)flags8 + 1;
                      flags8 = (ulong long)flags6;
                      char_system_pointer_variable = char_system_pointer_variable + 1;
                    } while (flags6 < stack_var_);
                  }
                  flags8 = UINT32_MAX;
label_:
                  if ((int)flags1 != -1) {
                    setup_thread_parameters(&system_stack_pointer,&system_stack_pointer,uint_var_,flags8);
                    system_thread_manager_012(&system_stack_pointer,1);
                    uint_var_ = stack_var_;
                    flags1 = (ulong long)stack_var_;
                    if (system_stack_long != 0) {
                      system_thread_manager_001(system_long_variable + 0x170,flags1);
                    }
                    if (uint_var_ != 0) {
                      memcpy(*(unsigned long long *)(system_long_variable + 0x178),system_stack_long,flags1);
                    }
                    *(unsigned int *)(system_long_variable + 0x180) = 0;
                    if (*(long long *)(system_long_variable + 0x178) != 0) {
                      *(unsigned char *)(flags1 + *(long long *)(system_long_variable + 0x178)) = 0;
                    }
                    *(unsigned int *)(system_long_variable + 0x18c) = stack_var_;
                    *(unsigned char *)(system_long_variable + 0x168) = 1;
                    system_stack_pointer = &g_threadString2;
                    if (system_stack_long != 0) {
                      handle_system_error(system_stack_long,system_stack_long);
                    }
                    system_stack_long = 0;
                    stack_var_ = 0;
                    system_stack_pointer = &g_threadString4;
                    flags1 = 0;
                  }
                  system_stack_pointer = &g_threadString2;
                  if (system_stack_long != 0) {
                    handle_system_error(system_stack_long,flags1);
                  }
                  system_stack_long = 0;
                  stack_var_ = 0;
                  system_stack_pointer = &g_threadString4;
                }
                else {
                  if (uint_var_ == 0x17) {
                    int_var_ = strcmp(system_pointer_variable,&g_systemDataString26);
                    if (int_var_ == 0) {
                      data_180c82842 = 1;
                      goto label_;
                    }
label_:
                    bVar31 = false;
                  }
                  else {
                    if (uint_var_ != 0xb) goto label_;
                    int_var_ = strcmp(system_pointer_variable,&g_systemDataString27);
                    bVar31 = int_var_ == 0;
                  }
                  if (bVar31) {
                    create_thread_context(&system_stack_pointer,system_pointer_variable);
                    system_thread_manager_005(&system_stack_pointer);
                    system_thread_manager_006(&system_stack_pointer);
                    system_event_handler_002(&data_180bf5770,&system_stack_pointer);
                    data_180c82842 = 1;
                    system_stack_pointer = &g_threadString2;
                    if (system_stack_long != 0) {
                      handle_system_error();
                    }
                    system_stack_long = 0;
                    stack_var_ = 0;
                    system_stack_pointer = &g_threadString4;
                  }
                  else {
                    system_pointer_variable = &data_18098bc73;
                    if (system_pointer_variable != (unsigned char *)0x0) {
                      system_pointer_variable = system_pointer_variable;
                    }
                    system_long_variable = strstr(system_pointer_variable);
                    if (system_long_variable != 0) {
                      flags9 = 0;
                      system_stack_pointer = &g_threadString2;
                      stack_var_ = 0;
                      system_stack_pointer = (unsigned int *)0x0;
                      stack_var_ = 0;
                      system_pointer_variable = (unsigned int *)system_function_(system_global_data_,STRING_BUFFER_SIZE,0x13);
                      *(unsigned char *)system_pointer_variable = 0;
                      system_stack_pointer = system_pointer_variable;
                      uint_var_ = allocate_helper_buffer(system_pointer_variable);
                      stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
                      *system_pointer_variable = 0x726f662f;
                      system_pointer_variable[1] = 0x5f646563;
                      system_pointer_variable[2] = 0x666e6f63;
                      system_pointer_variable[3] = 0x3a6769;
                      stack_var_ = 0xf;
                      flags1 = flags9;
                      flags8 = flags9;
                      if (0 < (int)(uint_var_ - 0xe)) goto label_;
                      goto label_;
                    }
                    if (uint_var_ == 0xf) {
                      int_var_ = strcmp(system_pointer_variable);
                      if (int_var_ == 0) {
                        cStack_338 = '\x01';
                        *(unsigned char *)(system_global_data_ + 0x22) = 1;
                        goto label_;
                      }
label_:
                      bVar31 = false;
                    }
                    else {
                      if (uint_var_ == 0xc) {
                        int_var_ = strcmp(system_pointer_variable);
                        if (int_var_ == 0) {
                          system_pointer_variable = &g_systemDataString28;
label_:
                          system_data_manager_002(system_global_data_,system_pointer_variable);
                        }
                        goto label_;
                      }
                      if (uint_var_ == 0x1a) {
                        int_var_ = strcmp(system_pointer_variable);
                        if (int_var_ == 0) {
                          *(unsigned char *)(system_global_data_ + 0x21) = 1;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (uint_var_ == STRING_BUFFER_SIZE) {
                        int_var_ = strcmp(system_pointer_variable);
                        if (int_var_ == 0) {
                          data_180bf0101 = 0;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (uint_var_ == 0x18) {
                        int_var_ = strcmp(system_pointer_variable);
                        if (int_var_ == 0) {
                          data_180c8ecec = 1;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (uint_var_ != 0x14) goto label_;
                      int_var_ = strcmp(system_pointer_variable);
                      bVar31 = int_var_ == 0;
                    }
                    system_long_variable = system_global_data_;
                    if (bVar31) {
                      create_thread_context(&system_stack_pointer,system_pointer_variable);
                      system_thread_manager_005(&system_stack_pointer);
                      uint_var_ = 0;
                      char_system_pointer_variable = pcStack_328;
                      if (stack_var_ != 0) {
                        do {
                          if (*char_system_pointer_variable == '/') goto label_;
                          uint_var_ = uint_var_ + 1;
                          char_system_pointer_variable = char_system_pointer_variable + 1;
                        } while (uint_var_ < stack_var_);
                      }
                      uint_var_ = UINT32_MAX;
label_:
                      if (uint_var_ != 0xffffffff) {
                        system_long_variable = setup_thread_parameters(&system_stack_pointer,&system_stack_pointer,0);
                        if (pcStack_328 != (char *)0x0) {
                          handle_system_error();
                        }
                        stack_var_ = *(uint *)(system_long_variable + STRING_BUFFER_SIZE);
                        pcStack_328 = *(char **)(system_long_variable + 8);
                        stack_var_ = *(long long *)(system_long_variable + 0x18);
                        *(unsigned int *)(system_long_variable + STRING_BUFFER_SIZE) = 0;
                        *(unsigned long long *)(system_long_variable + 8) = 0;
                        *(unsigned long long *)(system_long_variable + 0x18) = 0;
                        system_stack_pointer = &g_threadString2;
                        if (system_stack_long != 0) {
                          handle_system_error();
                        }
                        system_stack_long = 0;
                        stack_var_ = 0;
                        system_stack_pointer = &g_threadString4;
                      }
                      system_thread_manager_006(&system_stack_pointer);
                      uint_var_ = stack_var_;
                      system_long_variable = system_global_data_;
                      *(unsigned char *)(system_global_data_ + 0x48) = 1;
                      flags1 = (ulong long)stack_var_;
                      if (pcStack_328 != (char *)0x0) {
                        system_thread_manager_001(system_long_variable + 0x50,flags1);
                      }
                      if (uint_var_ != 0) {
                        memcpy(*(unsigned long long *)(system_long_variable + 0x58),pcStack_328,flags1);
                      }
                      *(unsigned int *)(system_long_variable + 0x60) = 0;
                      if (*(long long *)(system_long_variable + 0x58) != 0) {
                        *(unsigned char *)(flags1 + *(long long *)(system_long_variable + 0x58)) = 0;
                      }
                      *(uint *)(system_long_variable + 0x6c) = stack_var_._4_4_;
                      system_stack_pointer = &g_threadString2;
                      if (pcStack_328 != (char *)0x0) {
                        handle_system_error(pcStack_328,pcStack_328);
                      }
                      pcStack_328 = (char *)0x0;
                      stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
                      system_stack_pointer = &g_threadString4;
                    }
                    else if (cStack_338 == '\0') {
                      flags7 = system_thread_manager_007();
                      system_pointer_variable = (unsigned char *)0x0;
                      system_stack_pointer = &g_threadString2;
                      stack_var_ = 0;
                      system_stack_pointer = (unsigned char *)0x0;
                      stack_var_ = 0;
                      flags6 = stack_var_ | 1;
                      system_pointer_variable = system_pointer_variable;
                      system_pointer_variable = system_pointer_variable;
                      stack_var_ = flags6;
                      stack_var_ = flags7;
                      if (uint_var_ != 0) {
                        int_var_ = uint_var_ + 1;
                        if (int_var_ < STRING_BUFFER_SIZE) {
                          int_var_ = STRING_BUFFER_SIZE;
                        }
                        system_pointer_variable = (unsigned char *)system_function_(system_global_data_,(long long)int_var_,0x13);
                        *system_pointer_variable = 0;
                        system_stack_pointer = system_pointer_variable;
                        system_pointer_variable = (unsigned char *)allocate_helper_buffer(system_pointer_variable);
                        stack_var_ = CONCAT44(stack_var_._4_4_,(int)system_pointer_variable);
                      }
                      system_long_variable = 1;
                      uint_var_ = 1;
                      if (1 < (int)uint_var_) {
                        flags1 = 0;
                        do {
                          flags7 = stack_var_;
                          flags6 = stack_var_;
                          if (uint_var_ <= uint_var_) break;
                          flags = system_stack_pointer[system_long_variable];
                          int_var_ = (int)flags1;
                          flags3 = int_var_ + 1;
                          flags1 = (ulong long)flags3;
                          if (flags3 != 0) {
                            flags6 = int_var_ + 2;
                            if (system_pointer_variable == (unsigned char *)0x0) {
                              if ((int)flags6 < STRING_BUFFER_SIZE) {
                                flags6 = STRING_BUFFER_SIZE;
                              }
                              system_pointer_variable = (unsigned char *)
                                        system_function_(system_global_data_,(long long)(int)flags6,0x13);
                              *system_pointer_variable = 0;
                            }
                            else {
                              if (flags6 <= (uint)system_pointer_variable) goto label_;
                              stack_var_ = 0x13;
                              system_pointer_variable = (unsigned char *)
                                        system_function_(system_global_data_,system_pointer_variable,flags6,STRING_BUFFER_SIZE);
                            }
                            system_stack_pointer = system_pointer_variable;
                            flags6 = allocate_helper_buffer(system_pointer_variable);
                            stack_var_ = CONCAT44(stack_var_._4_4_,flags6);
                            system_pointer_variable = (unsigned char *)(ulong long)flags6;
                          }
label_:
                          system_pointer_variable[(long long)system_pointer_variable] = flags;
                          system_pointer_variable[flags1] = 0;
                          system_pointer_variable = (unsigned char *)(ulong long)flags3;
                          uint_var_ = uint_var_ + 1;
                          system_long_variable = system_long_variable + 1;
                          flags7 = stack_var_;
                          flags6 = stack_var_;
                          stack_var_ = flags3;
                        } while (system_long_variable < (int)uint_var_);
                      }
                      system_event_handler_007(system_pointer_variable,&system_stack_pointer,flags7);
                      stack_var_ = flags6 & 0xfffffffe;
                      system_stack_pointer = &g_threadString2;
                      if (system_pointer_variable != (unsigned char *)0x0) {
                        handle_system_error(system_pointer_variable);
                      }
                      system_stack_pointer = (unsigned char *)0x0;
                      stack_var_ = stack_var_ & INT64_MASK;
                      system_stack_pointer = &g_threadString4;
                      system_pointer_variable = system_stack_pointer;
                      system_pointer_variable = system_stack_pointer;
                    }
                    else {
                      cStack_338 = '\0';
                      if (system_pointer_variable != (unsigned char *)0x0) {
                        system_thread_manager_001(system_global_data_ + 0x28,system_pointer_variable);
                      }
                      if (uint_var_ != 0) {
                        memcpy(*(unsigned long long *)(system_long_variable + 0x30),system_pointer_variable,system_pointer_variable);
                      }
                      *(unsigned int *)(system_long_variable + 0x38) = 0;
                      if (*(long long *)(system_long_variable + 0x30) != 0) {
                        system_pointer_variable[*(long long *)(system_long_variable + 0x30)] = 0;
                      }
                      *(unsigned int *)(system_long_variable + 0x44) = stack_var_._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
label_:
        system_pointer_variable = (unsigned char *)0x0;
        stack_var_ = 0;
        system_long_variable = system_stack_long;
        if (system_pointer_variable != (unsigned char *)0x0) {
          *system_pointer_variable = 0;
        }
      }
      else {
        system_thread_manager_001(&system_stack_pointer,uint_var_ + 1);
        system_stack_pointer[stack_var_] = bVar1;
        stack_var_ = stack_var_ + 1;
        system_pointer_variable = (unsigned char *)(ulong long)stack_var_;
        system_pointer_variable[(long long)system_stack_pointer] = 0;
        system_pointer_variable = system_stack_pointer;
      }
      stack_var_ = stack_var_ + 1;
    } while (stack_var_ < stack_var_);
  }
  system_stack_pointer = &g_defaultDataTemplate;
  system_stack_pointer = auStack_80;
  auStack_80[0] = 0;
  stack_var_ = STRING_BUFFER_SIZE;
  strcpy_s(auStack_80, SYSTEM_CONFIG_BUFFER_SIZE, &systemConfigStringBuffer);
  cVar5 = system_handle_manager_003(system_long_variable,&system_stack_pointer);
  system_stack_pointer = &g_threadString4;
  if (cVar5 != '\0') {
    *(unsigned int *)(system_long_variable + CONFIG_PATH_BUFFER_SIZE) = 1;
  }
  (**(code **)(**(long long **)(system_global_data_ + 0x18) + 0x30))
            (*(long long **)(system_global_data_ + 0x18),data_180c8ecec);
  system_stack_pointer = &g_threadString2;
  if (system_pointer_variable != (unsigned char *)0x0) {
    handle_system_error(system_pointer_variable);
  }
  system_stack_pointer = (unsigned char *)0x0;
  stack_var_ = stack_var_ & INT64_MASK;
  system_stack_pointer = &g_threadString4;
  system_crypto_001(stack_var_ ^ (ulong long)auStack_368);
  while (byte_system_pointer_variable = byte_system_pointer_variable + 1, uint_var_ != 0) {
label_:
    bVar1 = *byte_system_pointer_variable;
    uint_var_ = (uint)byte_system_pointer_variable[system_long_variable];
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
  system_helper_003(system_long_variable,system_init_result0,system_long_variable,flags7);
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
      if (system_pointer_variable[flags8 + flags1] != *(char *)(flags5 + (long long)system_pointer_variable)) break;
      flags6 = flags6 + 1;
      flags5 = (ulong long)flags6;
      flags8 = flags8 + 1;
    } while ((long long)flags8 < 0xf);
    if (flags6 == 0xf) goto label_;
  }
label_:
  int_var_ = -1;
label_:
  setup_thread_parameters(&system_stack_pointer,&system_stack_pointer,int_var_ + 0xf,system_pointer_variable);
  system_stack_pointer = (unsigned long long *)0x0;
  system_stack_pointer = (unsigned long long *)0x0;
  stack_var_ = 0;
  stack_var_ = 3;
  if (system_stack_long != 0) {
    system_event_handler_003(&system_stack_pointer,&system_stack_pointer,&systemEventHandlerConfig);
  }
  system_pointer_variable = system_stack_pointer;
  system_thread_manager_004(&system_stack_pointer,system_stack_pointer);
  system_thread_manager_004(&system_stack_pointer,system_pointer_variable + 4);
  system_pointer_variable = system_stack_pointer;
  if (((long long)system_stack_pointer - (long long)system_pointer_variable & 0xffffffffffffffe0U) != SYSTEM_CONFIG_BUFFER_SIZE) {
label_:
    system_stack_pointer = &g_threadString2;
    if (system_stack_long != 0) {
      handle_system_error();
    }
    system_stack_long = 0;
    stack_var_ = 0;
    system_stack_pointer = &g_threadString4;
    system_stack_pointer = &g_threadString2;
    if (system_stack_long != 0) {
      handle_system_error();
    }
    system_stack_long = 0;
    stack_var_ = 0;
    system_stack_pointer = &g_threadString4;
    for (pflags2 = system_pointer_variable; pflags2 != system_pointer_variable; pflags2 = pflags2 + 4) {
      (**(code **)*pflags2)(pflags2,0);
    }
    if (system_pointer_variable != (unsigned long long *)0x0) {
      handle_system_error(system_pointer_variable);
    }
    system_stack_pointer = &g_threadString2;
    if (system_stack_long != 0) {
      handle_system_error();
    }
    system_stack_long = 0;
    stack_var_ = 0;
    system_stack_pointer = &g_threadString4;
    system_stack_pointer = &g_threadString2;
    handle_system_error(system_pointer_variable);
  }
  system_ui_002(system_global_data_,&system_stack_pointer,&system_stack_pointer);
  system_long_variable = system_global_data_ + 0x90;
  system_long_variable = system_function_(system_global_data_, SYSTEM_CONFIG_BUFFER_SIZE,*(unsigned char *)(system_global_data_ + 0xb8));
  system_thread_manager_003(system_long_variable + CONFIG_PATH_BUFFER_SIZE,&system_stack_pointer);
  system_long_variable = system_event_handler_005(system_long_variable,acStack_336,system_long_variable + CONFIG_PATH_BUFFER_SIZE);
  if (acStack_336[0] == '\0') {
    system_event_handler_009(extraout_XMM0_Da_00,system_long_variable);
    goto label_;
  }
  if (system_long_variable != system_long_variable) {
    if (*(int *)(system_long_variable + 0x30) == 0) {
label_:
      flags7 = 1;
      goto label_;
    }
    if (*(int *)(system_long_variable + 0x30) != 0) {
      byte_system_pointer_variable = *(byte **)(system_long_variable + 0x28);
      system_init_result0 = *(long long *)(system_long_variable + 0x28) - (long long)byte_system_pointer_variable;
      do {
        bVar1 = *byte_system_pointer_variable;
        uint_var_ = (uint)byte_system_pointer_variable[system_init_result0];
        if (bVar1 != uint_var_) break;
        byte_system_pointer_variable = byte_system_pointer_variable + 1;
      } while (uint_var_ != 0);
      if ((int)(bVar1 - uint_var_) < 1) goto label_;
    }
  }
  flags7 = 0;
label_:
  system_helper_003(system_long_variable,system_long_variable,system_long_variable,flags7);
}
    thread_pool_4_status_code = 1;
    int_var_ = _Cnd_broadcast(CONDITION_VARIABLE_ADDR);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    int_var_ = _Mtx_unlock(IO_THREAD_POOL_MUTEX_ADDR);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    system_cleanup_001(ADDR_CLEANUP_FUNC);
  }
  *(unsigned int *)(system_global_data_ + 4) = 0;
  if (*(char *)(system_long_variable + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(system_long_variable + 0x2b0) + 0xe0))();
    *(int *)(system_long_variable + 0x224) = *(int *)(system_long_variable + 0x224) + 1;
    if (*(int *)(system_global_data_ + 0xe0) == 0) {
      if (*(char *)(system_long_variable + 0x264) == '\0') {
        int_var_ = 10;
        if (10 < *(int *)(system_global_data_ + 0xbd0)) {
          int_var_ = *(int *)(system_global_data_ + 0xbd0);
        }
        fVar14 = (float)*(double *)(system_long_variable + CONFIG_PATH_BUFFER_SIZE8);
        if (1.0 / (float)int_var_ <= (float)*(double *)(system_long_variable + CONFIG_PATH_BUFFER_SIZE8)) {
          fVar14 = 1.0 / (float)int_var_;
        }
      }
      else {
        fVar14 = *(float *)(system_long_variable + 0x268);
      }
      *(float *)(system_long_variable + 0x220) = fVar14;
    }
    else {
      *(unsigned int *)(system_long_variable + 0x220) = FLOAT_PI_OVER_4;
      fVar14 = 0.033333335;
    }
    system_handle_manager_004(system_long_variable,fVar14);
    uint_var_ = system_global_data_;
    if ((system_global_data_ != 0) &&
       (psystem_init_result = *(long long **)(system_global_data_ + 0x228), psystem_init_result != (long long *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = psystem_init_result;
      (**(code **)(*psystem_init_result + 0x28))();
      system_event_handler_013(uint_var_,&plStackX_10);
    }
    uint_var_ = system_global_data_;
    if (*(char *)(system_global_data_ + 0xa0) == '\0') {
      if ((system_global_data_ != 0) &&
         (psystem_init_result = *(long long **)(system_global_data_ + 0x228), psystem_init_result != (long long *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = psystem_init_result;
        (**(code **)(*psystem_init_result + 0x28))();
        system_event_handler_016(uint_var_,&plStackX_18,0);
        psystem_init_result = *(long long **)(system_global_data_ + 0x228);
        *(unsigned long long *)(system_global_data_ + 0x228) = 0;
        if (psystem_init_result != (long long *)0x0) {
          (**(code **)(*psystem_init_result + 0x38))();
        }
      }
      func_0x00018005c480(system_global_data_);
      psystem_init_result = system_global_data_;
      if (*(code **)(*system_global_data_ + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(system_global_data_ + 9) = 0;
        system_pointer_variable = (unsigned char *)psystem_init_result[8];
        if (system_pointer_variable != (unsigned char *)0x0) {
          *system_pointer_variable = 0;
        }
        *(unsigned int *)((long long)psystem_init_result + 0x54) = 0;
      }
      else {
        (**(code **)(*system_global_data_ + 8))();
      }
    }
    else {
      if (*(char *)(system_long_variable + 0x22c) != '\0') {
        system_event_handler_001();
      }
      *(unsigned int *)(system_long_variable + 0x228) = *(unsigned int *)(system_long_variable + 0x224);
      system_graphics_001();
      system_graphics_002();
    }
    QueryPerformanceCounter(&system_stack_long);
    dVar15 = (double)system_stack_long * system_global_data_;
    system_global_data_ = system_global_data_ + 1;
    dVar16 = dVar15 - system_global_data_;
    if (1.0 < dVar16) {
      *(float *)(system_long_variable + 500) = (float)((double)system_global_data_ / dVar16);
      system_global_data_ = 0;
      system_global_data_ = dVar15;
      *(float *)(system_long_variable + 0x1f8) = (float)(1000.0 / *(double *)(system_long_variable + 0x70));
    }
    if (0.0 < *(double *)(system_global_data_ + 0x1510)) {
      system_handle_manager_005(system_long_variable,(float)*(double *)(system_global_data_ + 0x1510));
    }
    if (*(char *)(system_long_variable + 0x1ee) == '\0') {
      fVar14 = *(float *)(system_long_variable + CONFIG_PATH_BUFFER_SIZE0);
      dVar15 = *(double *)(system_long_variable + 0x218);
      do {
        QueryPerformanceCounter(&system_stack_long);
      } while ((double)system_stack_long * system_global_data_ < (double)fVar14 + dVar15);
      QueryPerformanceCounter(&system_stack_long);
      system_long_variable = system_stack_long - system_global_data_;
      system_global_data_ = system_stack_long;
      *(double *)(system_long_variable + CONFIG_PATH_BUFFER_SIZE8) = (double)system_long_variable * system_global_data_;
      QueryPerformanceCounter(&system_stack_long);
      *(double *)(system_long_variable + 0x218) = (double)system_stack_long * system_global_data_;
    }
  }
  return;
}
    thread_pool_4_status_code = 1;
    int_var_ = _Cnd_broadcast(CONDITION_VARIABLE_ADDR);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    int_var_ = _Mtx_unlock(IO_THREAD_POOL_MUTEX_ADDR);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    system_cleanup_001(ADDR_CLEANUP_FUNC);
  }
  *(unsigned int *)(system_global_data_ + 4) = 0;
  if (*(char *)(handle + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(handle + 0x2b0) + 0xe0))();
    *(int *)(handle + 0x224) = *(int *)(handle + 0x224) + 1;
    if (*(int *)(system_global_data_ + 0xe0) == 0) {
      if (*(char *)(handle + 0x264) == '\0') {
        int_var_ = 10;
        if (10 < *(int *)(system_global_data_ + 0xbd0)) {
          int_var_ = *(int *)(system_global_data_ + 0xbd0);
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
      *(unsigned int *)(handle + 0x220) = FLOAT_PI_OVER_4;
      fVar13 = 0.033333335;
    }
    system_handle_manager_004(handle,fVar13);
    uint_var_ = system_global_data_;
    if ((system_global_data_ != 0) &&
       (psystem_init_result = *(long long **)(system_global_data_ + 0x228), psystem_init_result != (long long *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = psystem_init_result;
      (**(code **)(*psystem_init_result + 0x28))();
      system_event_handler_013(uint_var_,&plStackX_10);
    }
    uint_var_ = system_global_data_;
    if (*(char *)(system_global_data_ + 0xa0) == '\0') {
      if ((system_global_data_ != 0) &&
         (psystem_init_result = *(long long **)(system_global_data_ + 0x228), psystem_init_result != (long long *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = psystem_init_result;
        (**(code **)(*psystem_init_result + 0x28))();
        system_event_handler_016(uint_var_,&plStackX_18,0);
        psystem_init_result = *(long long **)(system_global_data_ + 0x228);
        *(unsigned long long *)(system_global_data_ + 0x228) = 0;
        if (psystem_init_result != (long long *)0x0) {
          (**(code **)(*psystem_init_result + 0x38))();
        }
      }
      func_0x00018005c480(system_global_data_);
      psystem_init_result = system_global_data_;
      if (*(code **)(*system_global_data_ + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(system_global_data_ + 9) = 0;
        system_pointer_variable = (unsigned char *)psystem_init_result[8];
        if (system_pointer_variable != (unsigned char *)0x0) {
          *system_pointer_variable = 0;
        }
        *(unsigned int *)((long long)psystem_init_result + 0x54) = 0;
      }
      else {
        (**(code **)(*system_global_data_ + 8))();
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
    QueryPerformanceCounter(&system_stack_long);
    dVar14 = (double)system_stack_long * system_global_data_;
    system_global_data_ = system_global_data_ + 1;
    dVar15 = dVar14 - system_global_data_;
    if (1.0 < dVar15) {
      *(float *)(handle + 500) = (float)((double)system_global_data_ / dVar15);
      system_global_data_ = 0;
      system_global_data_ = dVar14;
      *(float *)(handle + 0x1f8) = (float)(1000.0 / *(double *)(handle + 0x70));
    }
    if (0.0 < *(double *)(system_global_data_ + 0x1510)) {
      system_handle_manager_005(handle,(float)*(double *)(system_global_data_ + 0x1510));
    }
    if (*(char *)(handle + 0x1ee) == '\0') {
      fVar13 = *(float *)(handle + CONFIG_PATH_BUFFER_SIZE0);
      dVar14 = *(double *)(handle + 0x218);
      do {
        QueryPerformanceCounter(&system_stack_long);
      } while ((double)system_stack_long * system_global_data_ < (double)fVar13 + dVar14);
      QueryPerformanceCounter(&system_stack_long);
      system_long_variable = system_stack_long - system_global_data_;
      system_global_data_ = system_stack_long;
      *(double *)(handle + CONFIG_PATH_BUFFER_SIZE8) = (double)system_long_variable * system_global_data_;
      QueryPerformanceCounter(&system_stack_long);
      *(double *)(handle + 0x218) = (double)system_stack_long * system_global_data_;
    }
  }
  return;
}
    data_180c82862 = data_180c82862 == '\0';
  }
  system_long_variable = 0xe0;
  system_pointer_variable = system_global_data_;
  do {
    system_pointer_variable = system_pointer_variable + 0x18;
    *system_pointer_variable = 1;
    system_long_variable = system_long_variable + -1;
  } while (system_long_variable != 0);
label_:
  system_pointer_variable = (unsigned long long *)system_global_data_[1];
  int_var_ = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  psystem_init_result4 = system_global_data_;
  stack_var_ = system_global_data_;
  system_global_data_ = (long long *)*system_pointer_variable;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  uint_var_ = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_var_ = 3;
  system_function_(auStack_2a8);
  system_handle_manager_002((long long)system_global_data_ * 0x238 + system_global_data_ + 0x1598,auStack_2a8);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_system_error();
  }
  system_global_data_ = psystem_init_result4;
  int_var_ = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  psystem_init_result4 = (long long *)*system_global_data_;
  int_var_ = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  psystem_init_result = system_global_data_;
  stack_var_ = system_global_data_;
  system_global_data_ = (long long *)*psystem_init_result4;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_var_ = 3;
  system_function_(auStack_2a8);
  system_function_(auStack_2a8);
  *(float *)((long long)system_global_data_ + 0x18) = system_global_data_;
  system_initializer_001();
  system_long_variable = (long long)system_global_data_;
  system_pointer_variable = system_global_data_;
  system_pointer_variable = system_global_data_;
  if (*(char *)(system_global_data_ + 7) != '\0') {
    if ((((*(char *)(system_global_data_ + 0xe) != '\0') ||
         (*(char *)((long long)system_global_data_ + 0x38c) != '\0')) ||
        (*(char *)((long long)system_global_data_ + 0x38d) != '\0')) ||
       (*(char *)((long long)system_global_data_ + 0x38e) != '\0')) {
      system_global_data_[0x1518] = 1;
      system_pointer_variable[0x1530] = 1;
      system_pointer_variable[0x1590] = 1;
      system_pointer_variable[0x15a8] = 1;
      system_pointer_variable[0x1710] = 1;
    }
    if (((*(char *)((long long)system_pointer_variable + 0x71) != '\0') || (*(char *)(system_long_variable + 0x38d) != '\0')) ||
       (*(char *)(system_long_variable + 0x38e) != '\0')) {
      do {
        system_pointer_variable = system_pointer_variable + 0x18;
        *system_pointer_variable = 1;
        system_init_result2 = system_init_result2 + -1;
      } while (system_init_result2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_system_error();
  }
  system_global_data_ = psystem_init_result;
  int_var_ = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  if (*(int *)(system_global_data_ + 0x161c) == 0x11) {
    system_pointer_variable = (unsigned long long *)*system_global_data_;
    int_var_ = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    psystem_init_result4 = system_global_data_;
    plStack_2c0 = system_global_data_;
    system_global_data_ = (long long *)*system_pointer_variable;
    system_initializer_003(&systemConfigData1,0,0);
    system_config_001(&systemConfigData2);
    stack_var_ = SYSTEM_CONFIG_BUFFER_SIZE_000000;
    auStack_2c8[0] = FLOAT_ONE;
    stack_var_ = CONFIG_PATH_BUFFER_SIZE000;
    system_stack_pointer = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_var_;
    system_config_002(&systemConfigData3,4,system_global_data_ + 0x167c,auStack_2c8);
    plStack_2f8 = (long long *)CONCAT44(plStack_2f8._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_000000);
    stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,FLOAT_ONE);
    stack_var_ = CONFIG_PATH_BUFFER_SIZE000;
    system_stack_pointer = &systemConfigBufferPtr;
    pplStack_328 = &plStack_2f8;
    system_config_002(&systemConfigData4,4,system_global_data_ + 0x1680,&stack_var_);
    system_initializer_004();
    system_global_data_ = psystem_init_result4;
    int_var_ = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
  }
  if (*(int *)(system_global_data_ + 0x161c) == 0xc) {
    system_pointer_variable = (unsigned long long *)*system_global_data_;
    int_var_ = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    psystem_init_result4 = system_global_data_;
    plStack_2c0 = system_global_data_;
    system_global_data_ = (long long *)*system_pointer_variable;
    system_initializer_003(&systemConfigData6,0,0);
    stack_var_ = (long long *)CONCAT44(stack_var_._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_000000);
    plStack_2f8 = (long long *)CONCAT44(plStack_2f8._4_4_,FLOAT_ONE);
    stack_var_ = CONFIG_PATH_BUFFER_SIZE000;
    system_stack_pointer = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_var_;
    system_config_002(&systemConfigData5,4,system_global_data_ + 0x1688,&plStack_2f8);
    system_initializer_004();
    system_global_data_ = psystem_init_result4;
    int_var_ = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
  }
  if (*(int *)(system_global_data_ + 0x161c) == 0xd) {
    system_pointer_variable = (unsigned long long *)*system_global_data_;
    int_var_ = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    psystem_init_result4 = system_global_data_;
    plStack_2c0 = system_global_data_;
    system_global_data_ = (long long *)*system_pointer_variable;
    system_initializer_003(&systemConfigData7,0,0);
    stack_var_ = (long long *)CONCAT44(stack_var_._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_000000);
    plStack_2f8 = (long long *)CONCAT44(plStack_2f8._4_4_,FLOAT_ONE);
    stack_var_ = CONFIG_PATH_BUFFER_SIZE000;
    system_stack_pointer = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_var_;
    system_config_002(&systemConfigData5,4,system_global_data_ + 0x168c,&plStack_2f8);
    if (*(float *)(system_global_data_ + 0x168c) == 0.0) {
      *(unsigned int *)(system_global_data_ + 0x168c) = FLOAT_ONE;
    }
    system_initializer_004();
    system_global_data_ = psystem_init_result4;
    int_var_ = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
  }
  system_pointer_variable = (unsigned long long *)*system_global_data_;
  if (system_pointer_variable != (unsigned long long *)0x0) {
    if ((void *)*system_pointer_variable == &systemValidationFunction) {
      NVGSDK_Poll(system_pointer_variable[1]);
    }
    else {
      (**(code **)((void *)*system_pointer_variable + 8))();
    }
  }
  *system_global_data_ = fVar15;
  system_long_variable = (long long)*(int *)(system_global_data_ + 0x1d40) * 0xd0;
  system_init_result2 = *(long long *)(system_long_variable + 0xb0 + *(long long *)(system_global_data_ + 0x1d20));
  fVar17 = (float)system_init_result2;
  if (system_init_result2 < 0) {
    fVar17 = fVar17 + 1.8446744e+19;
  }
  if (fVar17 * 8.5830686e-07 < (float)*(int *)(system_global_data_ + 4)) {
    *(float *)(system_global_data_ + STRING_BUFFER_SIZE) = fVar15 + *(float *)(system_global_data_ + STRING_BUFFER_SIZE);
    fVar15 = (float)fmodf(system_long_variable,FLOAT_ONE);
    if (0.5 < fVar15) {
      system_stack_pointer = &g_threadString2;
      stack_var_ = 0;
      system_stack_pointer = (unsigned long long *)0x0;
      stack_var_ = 0;
      system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,0x1c,0x13);
      *(unsigned char *)system_pointer_variable = 0;
      system_stack_pointer = system_pointer_variable;
      uint_var_ = allocate_helper_buffer(system_pointer_variable);
      stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      *system_pointer_variable = 0x6f6d654d20555047;
      system_pointer_variable[1] = 0x6567617375207972;
      system_pointer_variable[2] = 0x6163697469726320;
      *(unsigned int *)(system_pointer_variable + 3) = 0x2e2e6c;
      stack_var_ = 0x1b;
      system_stack_pointer = &g_threadString2;
      handle_system_error(system_pointer_variable);
    }
  }
  psystem_init_result4 = system_global_data_;
  if ((char)system_global_data_[0x42] == '\0') {
    (**(code **)(*system_global_data_ + 0xb0))(system_global_data_,*(unsigned int *)(system_global_data_ + 0x1340));
    (**(code **)(*psystem_init_result4 + 0xb8))(psystem_init_result4,*(unsigned int *)(system_global_data_ + 0x1500));
    (**(code **)(*psystem_init_result4 + 0xc0))(psystem_init_result4,*(unsigned int *)(system_global_data_ + 0x13b0));
    (**(code **)(*psystem_init_result4 + 200))(psystem_init_result4,*(unsigned int *)(system_global_data_ + 0x1490));
    (**(code **)(*psystem_init_result4 + 0x50))(psystem_init_result4);
  }
  system_pointer_variable = system_global_data_;
  psystem_init_result4 = *(long long **)(system_global_data_ + 0x17ec);
  *system_global_data_ = 0;
  stack_var_._0_4_ = SUB84(psystem_init_result4,0);
  *(unsigned int *)(system_pointer_variable + 1) = (unsigned int)stack_var_;
  stack_var_._4_4_ = (unsigned int)((ulong long)psystem_init_result4 >> CONFIG_PATH_BUFFER_SIZE);
  *(unsigned int *)((long long)system_pointer_variable + 0xc) = stack_var_._4_4_;
  *(unsigned int *)(system_pointer_variable + 8) = 0;
  stack_var_ = psystem_init_result4;
  system_finalizer_001();
  system_finalizer_002();
  if (((*(int *)(handle + 0x340) != 0) && (system_global_data_ != (long long *)0x0)) &&
     (cVar2 = (**(code **)(*system_global_data_ + 0x28))(), cVar2 != '\0')) {
    (**(code **)(system_global_data_ + 0x98))();
  }
  (**(code **)(**(long long **)(handle + 0x2b0) + 0x30))(*(long long **)(handle + 0x2b0),flags);
  if (((*(int *)(handle + 0x340) != 0) && (system_global_data_ != (long long *)0x0)) &&
     (cVar2 = (**(code **)(*system_global_data_ + 0x28))(), cVar2 != '\0')) {
    (*(code *)system_global_data_[7])();
  }
  if (((*(int *)(handle + 0x340) != 0) && (system_global_data_ != (long long *)0x0)) &&
     (cVar2 = (**(code **)(*system_global_data_ + 0x28))(), cVar2 != '\0')) {
    *(unsigned long long *)(*(long long *)(handle + 0x3c0) + 0x18) =
         *(unsigned long long *)(*(long long *)(handle + 0x3c0) + STRING_BUFFER_SIZE);
    psystem_init_result4 = (long long *)(system_global_data_ + CONFIG_PATH_BUFFER_SIZE30);
    uint_var_ = uint_var_;
    if (*(long long *)(system_global_data_ + CONFIG_PATH_BUFFER_SIZE38) - *psystem_init_result4 >> 2 != 0) {
      do {
        stack_var_ = *(unsigned int *)(uint_var_ + *psystem_init_result4);
        system_init_result2 = *(long long *)(handle + 0x3c0) + STRING_BUFFER_SIZE;
        system_function_(system_init_result2,&stack_var_);
        system_function_(system_init_result2,(long long)&stack_var_ + 1);
        system_function_(system_init_result2,(long long)&stack_var_ + 2);
        system_function_(system_init_result2,(long long)&stack_var_ + 3);
        uint_var_ = (int)uint_var_ + 1;
        uint_var_ = (ulong long)uint_var_;
        psystem_init_result4 = (long long *)(system_global_data_ + CONFIG_PATH_BUFFER_SIZE30);
        uint_var_ = uint_var_ + 4;
      } while ((ulong long)(long long)(int)uint_var_ <
               (ulong long)(*(long long *)(system_global_data_ + CONFIG_PATH_BUFFER_SIZE38) - *psystem_init_result4 >> 2));
    }
    (**(code **)(system_global_data_ + 0xa8))();
  }
  (**(code **)(**(long long **)(handle + 0x2b0) + 0x38))(*(long long **)(handle + 0x2b0),flags);
  (**(code **)(**(long long **)(handle + 0x2b0) + SYSTEM_CONFIG_BUFFER_SIZE))(*(long long **)(handle + 0x2b0),flags);
  system_function_();
  if (data_180c82862 != '\0') {
    system_stack_pointer = &g_threadString2;
    stack_var_ = 0;
    system_stack_pointer = (unsigned long long *)0x0;
    stack_var_ = 0;
    system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,0x19,0x13);
    *(unsigned char *)system_pointer_variable = 0;
    system_stack_pointer = system_pointer_variable;
    uint_var_ = allocate_helper_buffer(system_pointer_variable);
    stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
    *system_pointer_variable = 0x6d6d6f43204c4752;
    system_pointer_variable[1] = 0x656e696c20646e61;
    system_pointer_variable[2] = 0x656c6f736e6f6320;
    *(unsigned char *)(system_pointer_variable + 3) = 0;
    system_init_result2 = system_global_data_;
    stack_var_ = 0x18;
    system_pointer_variable = (unsigned long long *)*system_global_data_;
    int_var_ = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    psystem_init_result4 = system_global_data_;
    plStack_2c0 = system_global_data_;
    system_global_data_ = (long long *)*system_pointer_variable;
    plStack_2f8 = (long long *)0x0;
    stack_var_ = (long long *)0x0;
    pplStack_328 = (long long **)&cStack_300;
    system_processor_002(system_init_result2,&system_stack_pointer,&plStack_2f8,&stack_var_);
    if (*(char *)(system_init_result2 + 0x60) != '\0') {
      system_processor_003(system_init_result2,&plStack_2f8,&stack_var_,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(unsigned char *)(system_init_result2 + 0x60) = 0;
    }
    system_global_data_ = psystem_init_result4;
    int_var_ = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    system_stack_pointer = &g_threadString2;
    handle_system_error(system_pointer_variable);
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
    system_long_variable = system_long_variable + 1;
    char_system_pointer_variable = (char *)(system_long_variable + ADDR_STRING_OFFSET);
    system_long_variable = system_long_variable;
  } while (*char_system_pointer_variable != '\0');
  if (system_long_variable != 0) {
    fwrite(&data_1809fcc18,1,1,system_long_variable);
    fwrite(&data_180c82870,system_long_variable,1,system_long_variable);
    system_cleanup_010(0);
  }
  if (system_long_variable != 0) {
    fclose(system_long_variable);
    system_stack_long = 0;
    LOCK();
    system_global_data_ = system_global_data_ + -1;
    UNLOCK();
    system_long_variable = 0;
  }
  system_stack_pointer = &g_threadString2;
  if (system_stack_pointer == (void *)0x0) {
    system_stack_pointer = (void *)0x0;
    stack_var_ = 0;
    system_stack_pointer = &g_threadString4;
    if (system_long_variable != 0) {
      fclose(system_long_variable);
      LOCK();
      system_global_data_ = system_global_data_ + -1;
      UNLOCK();
    }
    return;
  }
  handle_system_error();
}
  data_180c8ecee = 1;
  system_event_handler_015(system_global_data_);
  system_cleanup_002();
  system_cleanup_008(0);
  if (data_180c82853 != '\0') {
    LOCK();
    *(unsigned int *)(*(long long *)(system_global_data_ + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  system_function_();
  if ((data_180c82860 == '\0') &&
     (psystem_init_result = *(long long **)(system_global_data_ + 0x18), psystem_init_result != (long long *)0x0)) {
    cVar3 = (**(code **)*psystem_init_result)(psystem_init_result);
    if (cVar3 != '\0') {
      (**(code **)(*psystem_init_result + 0x28))(psystem_init_result);
    }
  }
  system_cleanup_009();
  system_long_variable = system_global_data_;
  if (system_global_data_ != 0) {
    system_cleanup_011(system_global_data_);
    handle_system_error(system_long_variable);
  }
  system_global_data_ = 0;
  system_thread_manager_008(system_global_data_);
  system_long_variable = system_global_data_;
  if (system_global_data_ != 0) {
    system_thread_manager_008(system_global_data_);
    _Mtx_destroy_in_situ();
    handle_system_error(system_long_variable);
  }
  system_global_data_ = 0;
  return;
}
unsigned long long *
system_function_(unsigned long long *handle,ulong long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  unsigned long long uint_var_;
  uint_var_ = THREAD_POOL_DEFAULT_FLAG;
  *handle = &systemHandleData;
  system_cleanup_004();
  if ((flags & 1) != 0) {
    free(handle,0xc0,mutex_attr,mutex_type,uint_var_);
  }
  return handle;
}
      data_180c82850 = '\x01';
      do {
        int_var_ = ReleaseSemaphore(system_global_data_,1);
      } while (int_var_ == 0);
      system_stack_pointer = &g_threadString2;
      if (system_stack_pointer != (unsigned char *)0x0) {
        handle_system_error();
      }
      system_stack_pointer = (unsigned char *)0x0;
      stack_var_ = stack_var_ & INT64_MASK;
      system_stack_pointer = &g_threadString4;
      system_stack_pointer = &g_threadString2;
      if (system_pointer_variable != (void *)0x0) {
        handle_system_error(system_pointer_variable);
      }
      system_stack_pointer = (unsigned char *)0x0;
      stack_var_ = stack_var_ & INT64_MASK;
      system_stack_pointer = &g_threadString4;
    }
  }
  system_stack_pointer = &g_threadString2;
  if (system_stack_pointer != (void *)0x0) {
    handle_system_error();
  }
  system_stack_pointer = (void *)0x0;
  stack_var_ = 0;
  system_stack_pointer = &g_threadString4;
label_:
  system_crypto_001(stack_var_ ^ (ulong long)auStack_168);
}
uint validate_system_mutex_lock(void)
{
  uint in_EAX;
  int int_var_;
  long long system_long_variable;
  if (system_global_data_ != 0) {
    system_long_variable = system_global_data_ + 0x110;
    int_var_ = _Mtx_lock(system_long_variable);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    in_EAX = _Mtx_unlock(system_long_variable);
    if (in_EAX != 0) {
      in_EAX = __Throw_C_error_std__YAXH_Z(in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}
      data_180d49178 = 0;
      system_global_data_ = 0;
      strcpy_s(&data_180d49178,0x80,&data_18098bc73,mutex_type,uint_var_);
      system_crypto_002(system_function_);
      system_crypto_003(&data_180d49158);
      return &data_180d49160;
    }
  }
  return &data_180d49160;
}
    data_180d48d40 = '\x01';
    system_thread_manager_012(handle,CONCAT71((int7)((ulong long)system_pointer_variable >> 8),1));
  }
  system_crypto_001(stack_var_ ^ (ulong long)auStack_298);
}
    thread_pool_2_status_code = '\0';
    if ((cStack_208 != '\0') && (int_var_ = _Mtx_unlock(stack_var_), int_var_ != 0)) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    if (cVar23 != '\0') goto label_;
    *(unsigned char *)(*(long long *)(*(long long *)(system_global_data_ + 8) + 0x140) + CONFIG_PATH_BUFFER_SIZE8) = 1;
  }
  thread_pool_2_status_code = '\0';
  int_var_ = _Mtx_unlock(RENDER_THREAD_POOL_MUTEX_ADDR);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
label_:
  if (*(char *)(system_global_data_ + 0xa0) != '\0') {
    uint_var_ = system_ui_007(system_init_result6);
    *(unsigned long long *)(system_global_data_ + 0xa8) = uint_var_;
    uint_var_ = system_ui_008(system_init_result6);
    *(unsigned long long *)(system_global_data_ + 0xb0) = uint_var_;
  }
  char_system_pointer_variable = system_global_data_;
  if (*system_global_data_ != '\0') {
    system_pointer_variable = (unsigned long long *)*system_global_data_;
    int_var_ = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    uint_var_ = system_global_data_;
    pplStack_1b8 = (long long **)system_global_data_;
    system_global_data_ = *system_pointer_variable;
    system_initializer_003(&systemInitData1,0,0);
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    uint_var_ = flags0;
    flags2 = flags0;
    if (*(long long *)(char_system_pointer_variable + STRING_BUFFER_SIZE) - *(long long *)(char_system_pointer_variable + 8) >> 3 != 0) {
      do {
        dVar1 = *(double *)(*(long long *)(uint_var_ + *(long long *)(char_system_pointer_variable + 8)) + CONFIG_PATH_BUFFER_SIZE0);
        dVar7 = dVar2 + dVar1;
        dVar2 = *(double *)(*(long long *)(uint_var_ + *(long long *)(char_system_pointer_variable + 8)) + 0x1f8);
        dVar8 = dVar9 + dVar2;
        system_config_001(&systemInitData2,flags2,dVar1 / dVar2);
        flags1 = (int)flags2 + 1;
        uint_var_ = uint_var_ + 8;
        flags2 = (ulong long)flags1;
        dVar2 = dVar7;
        dVar9 = dVar8;
      } while ((ulong long)(long long)(int)flags1 <
               (ulong long)(*(long long *)(char_system_pointer_variable + STRING_BUFFER_SIZE) - *(long long *)(char_system_pointer_variable + 8) >> 3));
    }
    system_config_001(&systemConfigData8,dVar7 / dVar8);
    system_initializer_004();
    system_global_data_ = uint_var_;
    int_var_ = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
  }
  if (*(char *)(system_global_data_ + 0x1626) != '\0') {
    uint_var_ = *(unsigned long long *)(system_global_data_ + 0x138);
    *(unsigned long long *)(system_global_data_ + 0x138) = 0;
    system_stack_pointer = &g_defaultDataTemplate;
    system_stack_pointer = auStack_a0;
    auStack_a0[0] = 0;
    stack_var_ = 0x18;
    flags4 = strcpy_s(auStack_a0, SYSTEM_CONFIG_BUFFER_SIZE, &systemConfigStringBuffer2);
    system_ui_001(flags4,&system_stack_pointer,uint_var_,1);
    system_stack_pointer = &g_threadString4;
  }
  if (*(int *)(system_global_data_ + 0x60) == 1) {
    system_finalizer_003();
  }
  else if (*(int *)(system_global_data_ + 0x60) == 2) {
    system_finalizer_004();
  }
  system_init_result8 = *(long long *)(system_global_data_ + 0x1870) - *(long long *)(system_global_data_ + 0x1868) >> 3;
  uint_var_ = flags0;
  if (0 < (int)system_init_result8) {
    do {
      system_pointer_variable = (unsigned long long *)system_validator_002(system_init_result8,&plStack_1d0,(long long)(int)uint_var_);
      (**(code **)(*(long long *)*system_pointer_variable + 0x98))();
      if (plStack_1d0 != (long long *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      flags1 = (int)uint_var_ + 1;
      system_init_result8 = *(long long *)(system_global_data_ + 0x1870) - *(long long *)(system_global_data_ + 0x1868) >> 3;
      uint_var_ = (ulong long)flags1;
    } while ((int)flags1 < (int)system_init_result8);
  }
  system_processor_001();
  func_0x00018024f7f0();
  flags4 = func_0x0001800e2850(system_init_result6);
  system_ui_004(flags4,1,0);
  if (*(char *)(system_init_result6 + 0xf18) != '\0') {
    system_ui_009(system_init_result6);
    *(unsigned char *)(system_init_result6 + 0xf18) = 0;
  }
  system_long_variable = system_global_data_;
  system_init_result8 = system_global_data_;
  uint_var_ = *(unsigned long long *)(system_global_data_ + 0x161c);
  *(unsigned long long *)(system_global_data_ + 0x12d0) = *(unsigned long long *)(system_global_data_ + 0x1614);
  *(unsigned long long *)(system_init_result8 + 0x12d8) = uint_var_;
  uint_var_ = *(unsigned long long *)(system_long_variable + 0x162c);
  *(unsigned long long *)(system_init_result8 + 0x12e0) = *(unsigned long long *)(system_long_variable + 0x1624);
  *(unsigned long long *)(system_init_result8 + 0x12e8) = uint_var_;
  uint_var_ = *(unsigned long long *)(system_long_variable + 0x163c);
  *(unsigned long long *)(system_init_result8 + 0x12f0) = *(unsigned long long *)(system_long_variable + 0x1634);
  *(unsigned long long *)(system_init_result8 + 0x12f8) = uint_var_;
  uint_var_ = *(unsigned long long *)(system_long_variable + 0x164c);
  *(unsigned long long *)(system_init_result8 + 0x1300) = *(unsigned long long *)(system_long_variable + 0x1644);
  *(unsigned long long *)(system_init_result8 + 0x1308) = uint_var_;
  uint_var_ = *(unsigned long long *)(system_long_variable + 0x165c);
  *(unsigned long long *)(system_init_result8 + 0x1310) = *(unsigned long long *)(system_long_variable + 0x1654);
  *(unsigned long long *)(system_init_result8 + 0x1318) = uint_var_;
  uint_var_ = *(unsigned long long *)(system_long_variable + 0x166c);
  *(unsigned long long *)(system_init_result8 + 0x1320) = *(unsigned long long *)(system_long_variable + 0x1664);
  *(unsigned long long *)(system_init_result8 + 0x1328) = uint_var_;
  flags4 = *(unsigned int *)(system_long_variable + 0x1678);
  uint_var_ = *(unsigned int *)(system_long_variable + 0x167c);
  uint_var_ = *(unsigned int *)(system_long_variable + 0x1680);
  *(unsigned int *)(system_init_result8 + 0x1330) = *(unsigned int *)(system_long_variable + 0x1674);
  *(unsigned int *)(system_init_result8 + 0x1334) = flags4;
  *(unsigned int *)(system_init_result8 + 0x1338) = uint_var_;
  *(unsigned int *)(system_init_result8 + 0x133c) = uint_var_;
  flags4 = *(unsigned int *)(system_long_variable + 0x1688);
  uint_var_ = *(unsigned int *)(system_long_variable + 0x168c);
  uint_var_ = *(unsigned int *)(system_long_variable + 0x1690);
  *(unsigned int *)(system_init_result8 + 0x1340) = *(unsigned int *)(system_long_variable + 0x1684);
  *(unsigned int *)(system_init_result8 + 0x1344) = flags4;
  *(unsigned int *)(system_init_result8 + 0x1348) = uint_var_;
  *(unsigned int *)(system_init_result8 + 0x134c) = uint_var_;
  *(unsigned short *)(system_long_variable + 0x1637) = 0;
  *(unsigned char *)(system_long_variable + 0x162c) = 0;
  system_finalizer_001();
  system_finalizer_002();
  *(uint *)(system_global_data_ + 0x1590) = system_global_data_;
  system_global_data_ = system_global_data_ + 1 & 0x80000001;
  if ((int)system_global_data_ < 0) {
    system_global_data_ = (system_global_data_ - 1 | 0xfffffffe) + 1;
  }
  system_pointer_variable = (unsigned long long *)*system_global_data_;
  int_var_ = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  uint_var_ = system_global_data_;
  pplStack_220 = (long long **)system_global_data_;
  system_global_data_ = *system_pointer_variable;
  system_init_result8 = *(long long *)(system_global_data_ + 0x1a08 + (long long)(int)system_global_data_ * 8);
  if (system_init_result8 != 0) {
    uint_var_ = flags0;
    flags2 = flags0;
    if (0 < *(int *)(system_init_result8 + STRING_BUFFER_SIZE)) {
      do {
        system_network_003(*(unsigned long long *)(flags2 + *(long long *)(system_init_result8 + 8)));
        system_long_variable = *(long long *)(*(long long *)(system_init_result8 + 8) + flags2);
        if (system_long_variable != 0) {
          system_function_(system_long_variable);
          handle_system_error(system_long_variable);
        }
        *(unsigned long long *)(*(long long *)(system_init_result8 + 8) + flags2) = 0;
        flags1 = (int)uint_var_ + 1;
        uint_var_ = (ulong long)flags1;
        flags2 = flags2 + 8;
      } while ((int)flags1 < *(int *)(system_init_result8 + STRING_BUFFER_SIZE));
    }
    if (*(long long *)(system_init_result8 + 8) != 0) {
      handle_system_error();
    }
    *(unsigned long long *)(system_init_result8 + 8) = 0;
    system_pointer_variable = *(unsigned char **)(system_global_data_ + 0x1a08 + (long long)(int)system_global_data_ * 8);
    if (system_pointer_variable != (unsigned char *)0x0) {
      *system_pointer_variable = 0;
      *(unsigned long long *)(system_pointer_variable + 8) = 0;
      *(unsigned long long *)(system_pointer_variable + 0x14) = 0;
      *(unsigned int *)(system_pointer_variable + STRING_BUFFER_SIZE) = 0;
      *(unsigned long long *)(system_pointer_variable + 0x24) = 0;
      *(unsigned long long *)(system_pointer_variable + 0x1c) = 0;
      handle_system_error();
    }
    *(unsigned long long *)(system_global_data_ + 0x1a08 + (long long)(int)system_global_data_ * 8) = 0;
    flags = stack_var_;
  }
  system_initializer_002();
  system_global_data_ = uint_var_;
  int_var_ = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  if (*(int *)(system_init_result6 + 8) == 2) {
    *(unsigned char *)(*(long long *)(system_init_result6 + STRING_BUFFER_SIZE) + 0xc0) = 0;
    while( true ) {
      system_pointer_variable = (void *)**(unsigned long long **)(system_init_result6 + STRING_BUFFER_SIZE);
      if (system_pointer_variable == &systemValidationData1) {
        cVar23 = *(char *)(*(unsigned long long **)(system_init_result6 + STRING_BUFFER_SIZE) + 2) != '\0';
      }
      else {
        cVar23 = (**(code **)(system_pointer_variable + 0x68))();
      }
      if (cVar23 != '\0') break;
      system_pointer_variable = (void *)**(unsigned long long **)(system_init_result6 + STRING_BUFFER_SIZE);
      if (system_pointer_variable == &systemValidationData1) {
        system_cleanup_005(*(unsigned long long **)(system_init_result6 + STRING_BUFFER_SIZE) + 4);
      }
      else {
        (**(code **)(system_pointer_variable + 0x80))();
      }
    }
    plStack_1c0 = *(long long **)(system_init_result6 + STRING_BUFFER_SIZE);
    *(unsigned long long *)(system_init_result6 + STRING_BUFFER_SIZE) = 0;
    if (plStack_1c0 != (long long *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(unsigned int *)(system_init_result6 + 8) = 0;
    if (_data_00000010 != (long long *)0x0) {
      (**(code **)(*_data_00000010 + STRING_BUFFER_SIZE))();
    }
    (**(code **)(_data_00000000 + CONFIG_PATH_BUFFER_SIZE))(0);
    _data_00000008 = UINT64_MAX;
  }
  else if (*(int *)(system_init_result6 + 8) != 0) goto label_;
  *(uint *)(system_global_data_ + 0x1614) =
       (*(int *)(system_global_data_ + 0x1614) + 1U) % *(uint *)(system_global_data_ + 0x1d4c);
label_:
  pplStack_220 = (long long **)&system_stack_pointer;
  system_stack_pointer = &g_memoryAllocationFlag;
  system_stack_pointer = auStack_180;
  stack_var_ = 0;
  auStack_180[0] = 0;
  stack_var_ = 0x19;
  stack_var_ = flags;
  pplStack_220 = (long long **)system_function_(system_global_data_,CONFIG_PATH_BUFFER_SIZE,8,3);
  *pplStack_220 = (long long *)&g_threadString4;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (long long *)&g_threadString2;
  pplStack_220[3] = (long long *)0x0;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  psystem_init_result7 = system_global_data_;
  stack_var_ = 0;
  flags4 = *(unsigned int *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)system_global_data_[10];
  *(unsigned int *)(psystem_init_result7 + 10) = flags4;
  system_init_result6 = (long long)pplStack_220[1];
  pplStack_220[1] = (long long *)psystem_init_result7[8];
  psystem_init_result7[8] = system_init_result6;
  flags4 = *(unsigned int *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)psystem_init_result7[9];
  *(unsigned int *)(psystem_init_result7 + 9) = flags4;
  flags4 = *(unsigned int *)((long long)pplStack_220 + 0x1c);
  *(unsigned int *)((long long)pplStack_220 + 0x1c) = *(unsigned int *)((long long)psystem_init_result7 + 0x54);
  *(unsigned int *)((long long)psystem_init_result7 + 0x54) = flags4;
  system_stack_pointer = pplStack_220;
  if (*(code **)(*psystem_init_result7 + 8) == (code *)&system_180639070) {
    *(unsigned int *)(psystem_init_result7 + 9) = 0;
    if ((unsigned char *)psystem_init_result7[8] != (unsigned char *)0x0) {
      *(unsigned char *)psystem_init_result7[8] = 0;
    }
    *(unsigned int *)((long long)psystem_init_result7 + 0x54) = 0;
  }
  else {
    (**(code **)(*psystem_init_result7 + 8))(psystem_init_result7);
  }
  if (0x960 < *(int *)(system_stack_pointer + 2)) {
    *(unsigned int *)(system_stack_pointer + 2) = 0x960;
    *(unsigned char *)(system_stack_pointer[1] + 0x960) = 0;
  }
  stack_var_ = 0;
  system_stack_long = 0;
  system_stack_long = 0;
  stack_var_ = 0;
  stack_var_ = 3;
  system_function_(system_global_data_,flags,&system_stack_long);
  system_init_result6 = system_stack_long;
  system_init_result8 = system_stack_long;
  uint_var_ = flags0;
  if (system_stack_long - system_stack_long >> 3 != 0) {
    do {
      system_long_variable = system_global_data_;
      if ((0 < *(int *)(*(long long *)(uint_var_ + system_init_result6) + 0x124ec)) &&
         ((*(uint *)(*(long long *)(uint_var_ + system_init_result6) + 4) & STRING_BUFFER_SIZE000) != 0)) {
        while (char_system_pointer_variable = system_global_data_, system_init_result6 = system_stack_long, system_init_result8 = system_stack_long,
              *(int *)(system_long_variable + 0x30c) != 0) {
          system_init_result6 = system_event_handler_017(system_global_data_);
          if (system_init_result6 != 0) {
            psystem_init_result7 = (long long *)system_event_handler_017(char_system_pointer_variable);
            (**(code **)(*psystem_init_result7 + CONFIG_PATH_BUFFER_SIZE))(psystem_init_result7,0);
          }
        }
      }
      flags1 = (int)flags0 + 1;
      flags0 = (ulong long)flags1;
      uint_var_ = uint_var_ + 8;
    } while ((ulong long)(long long)(int)flags1 < (ulong long)(system_init_result8 - system_init_result6 >> 3));
  }
  uint_var_ = system_function_(system_global_data_,STRING_BUFFER_SIZE0,8,3);
  psystem_init_result7 = (long long *)system_event_handler_008(uint_var_,&system_stack_pointer);
  ppuStack_1b0 = (void **)psystem_init_result7;
  if (psystem_init_result7 != (long long *)0x0) {
    (**(code **)(*psystem_init_result7 + 0x28))(psystem_init_result7);
  }
  char_system_pointer_variable = system_global_data_;
  pplStack_220 = &plStack_228;
  plStack_228 = psystem_init_result7;
  if (psystem_init_result7 != (long long *)0x0) {
    (**(code **)(*psystem_init_result7 + 0x28))(psystem_init_result7);
  }
  pplStack_1b8 = &plStack_228;
  system_pointer_variable = *(unsigned long long **)(*(long long *)(char_system_pointer_variable + 8) + 8);
  char_system_pointer_variable = *(code **)*system_pointer_variable;
  pplStack_220 = &plStack_218;
  plStack_218 = plStack_228;
  if (plStack_228 != (long long *)0x0) {
    (**(code **)(*plStack_228 + 0x28))();
  }
  (*char_system_pointer_variable)(system_pointer_variable,&plStack_218);
  if (plStack_228 != (long long *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  if (psystem_init_result7 != (long long *)0x0) {
    (**(code **)(*psystem_init_result7 + 0x38))(psystem_init_result7);
  }
  if (system_stack_long == 0) {
    ppuStack_1b0 = &system_stack_pointer;
    system_stack_pointer = &g_threadString4;
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
  char_system_pointer_variable = *(code **)*pflags;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = *(long long **)(*handle + STRING_BUFFER_SIZE);
  if (plStackX_8 != (long long *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*char_system_pointer_variable)(pflags,&plStackX_8);
  return;
}
      data_180d492a8 = 0;
      system_global_data_ = 6;
      strcpy_s(&data_180d492a8, SYSTEM_CONFIG_BUFFER_SIZE, &data_180a06998, mutex_type, uint_var_);
      system_global_data_ = &g_defaultDataTemplate;
      system_global_data_ = &data_180d49300;
      data_180d49300 = 0;
      system_global_data_ = 4;
      strcpy_s(&data_180d49300, SYSTEM_CONFIG_BUFFER_SIZE, &data_180a06990);
      system_global_data_ = &g_defaultDataTemplate;
      system_global_data_ = &data_180d49358;
      data_180d49358 = 0;
      system_global_data_ = 6;
      strcpy_s(&data_180d49358, SYSTEM_CONFIG_BUFFER_SIZE, &data_180a069a8);
      system_global_data_ = &g_defaultDataTemplate;
      system_global_data_ = &data_180d493b0;
      data_180d493b0 = 0;
      system_global_data_ = 6;
      strcpy_s(&data_180d493b0, SYSTEM_CONFIG_BUFFER_SIZE, &data_180a069a0);
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
  system_thread_manager_001(handle, 3, mutex_attr, mutex_type, 0, THREAD_POOL_DEFAULT_FLAG);
  *(unsigned int *)handle[1] = 0x2e6b4f;
  *(unsigned int *)(handle + 2) = 3;
  return handle;
}
long long process_memory_block(long long handle,long long flags,long long mutex_attr)
{
  unsigned long long *system_pointer_variable;
  unsigned long long *pflags;
  long long system_long_variable;
  long long system_long_variable;
  system_long_variable = flags - handle >> 5;
  if (0 < system_long_variable) {
    system_long_variable = mutex_attr - flags;
    mutex_attr = mutex_attr + system_long_variable * -CONFIG_PATH_BUFFER_SIZE;
    pflags = (unsigned long long *)(flags + 8);
    do {
      system_pointer_variable = pflags + -4;
      if (*(long long *)(system_long_variable + -CONFIG_PATH_BUFFER_SIZE + (long long)pflags) != 0) {
        handle_system_error();
      }
      *(unsigned long long *)(system_long_variable + STRING_BUFFER_SIZE + (long long)system_pointer_variable) = 0;
      system_long_variable = system_long_variable + -1;
      *(unsigned long long *)(system_long_variable + (long long)system_pointer_variable) = 0;
      *(unsigned int *)(system_long_variable + 8 + (long long)system_pointer_variable) = 0;
      *(unsigned int *)(system_long_variable + 8 + (long long)system_pointer_variable) = *(unsigned int *)(pflags + -3);
      *(unsigned long long *)(system_long_variable + (long long)system_pointer_variable) = *system_pointer_variable;
      *(unsigned int *)(system_long_variable + 0x14 + (long long)system_pointer_variable) = *(unsigned int *)((long long)pflags + -0xc);
      *(unsigned int *)(system_long_variable + STRING_BUFFER_SIZE + (long long)system_pointer_variable) = *(unsigned int *)(pflags + -2);
      *(unsigned int *)(pflags + -3) = 0;
      *system_pointer_variable = 0;
      pflags[-2] = 0;
      pflags = system_pointer_variable;
    } while (0 < system_long_variable);
  }
  return mutex_attr;
}
long long process_memory_with_flags(unsigned long long handle,long long flags,long long mutex_attr)
{
  unsigned long long *system_pointer_variable;
  long long system_long_variable;
  unsigned long long *system_pointer_variable;
  long long unaff_RBP;
  long long unaff_RDI;
  mutex_attr = mutex_attr - flags;
  system_long_variable = unaff_RDI * -CONFIG_PATH_BUFFER_SIZE;
  system_pointer_variable = (unsigned long long *)(flags + 8);
  do {
    system_pointer_variable = system_pointer_variable + -4;
    if (*(long long *)(mutex_attr + -CONFIG_PATH_BUFFER_SIZE + (long long)system_pointer_variable) != 0) {
      handle_system_error();
    }
    *(unsigned long long *)(mutex_attr + STRING_BUFFER_SIZE + (long long)system_pointer_variable) = 0;
    unaff_RDI = unaff_RDI + -1;
    *(unsigned long long *)(mutex_attr + (long long)system_pointer_variable) = 0;
    *(unsigned int *)(mutex_attr + 8 + (long long)system_pointer_variable) = 0;
    *(unsigned int *)(mutex_attr + 8 + (long long)system_pointer_variable) = *(unsigned int *)(system_pointer_variable + -3);
    *(unsigned long long *)(mutex_attr + (long long)system_pointer_variable) = *system_pointer_variable;
    *(unsigned int *)(mutex_attr + 0x14 + (long long)system_pointer_variable) = *(unsigned int *)((long long)system_pointer_variable + -0xc);
    *(unsigned int *)(mutex_attr + STRING_BUFFER_SIZE + (long long)system_pointer_variable) = *(unsigned int *)(system_pointer_variable + -2);
    *(unsigned int *)(system_pointer_variable + -3) = 0;
    *system_pointer_variable = 0;
    system_pointer_variable[-2] = 0;
    system_pointer_variable = system_pointer_variable;
  } while (0 < unaff_RDI);
  return unaff_RBP + system_long_variable;
}
      data_180d48d64 = data_180d48d64 == '\0';
    }
    if (data_180d48d64 != '\0') {
      (*(code *)(*in_RCX[0xc170])[9])(in_RCX[0xc170],alStackX_10[0] + 0x120);
    }
  }
  system_init_result0 = alStackX_10[0];
  if ((*(int *)(*(long long *)(alStackX_10[0] + 0x3580) + 0x110) != 0) &&
     (uint_var_ = uint_var_, uint_var_ = uint_var_, (long long)in_RCX[0x1d] - (long long)in_RCX[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(long long **)(uint_var_ + (long long)in_RCX[0x1c]) + 0x60))
                (*(long long **)(uint_var_ + (long long)in_RCX[0x1c]),in_RCX,system_init_result0);
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
        *(char *)(system_global_data_ + 0xf8) != '\0')) &&
       (stack_var_ = (long long *)CONCAT44(stack_var_._4_4_,(unsigned int)stack_var_),
       6 < *(int *)(in_RCX + 0x4f8))) {
      uint_var_ = system_function_(system_global_data_,0xe0,8,3);
      ppplStackX_8 = (long long ***)&stack_var_;
      plStack_68 = alStackX_10;
      system_stack_pointer = &systemThreadData1;
      system_stack_pointer = &systemThreadData2;
      stack_var_._0_4_ = SUB84(in_RCX,0);
      stack_var_._4_4_ = (unsigned int)((ulong long)in_RCX >> CONFIG_PATH_BUFFER_SIZE);
      stack_var_._0_4_ = (unsigned int)stack_var_;
      stack_var_._4_4_ = stack_var_._4_4_;
      stack_var_ = in_RCX;
      stack_var_ = plStack_68;
      ppplStack_b8 = (long long ***)system_function_(uint_var_,&stack_var_);
      if (ppplStack_b8 != (long long ***)0x0) {
        ppplStack_80 = ppplStack_b8;
        (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
      }
      uint_var_ = system_global_data_;
      ppplStack_80 = (long long ***)0x0;
      if (*(int *)(system_global_data_ + 0x380) == 0) {
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
    uint_var_ = system_global_data_;
    if (((in_RCX[0x89] != (long long ****)0x0) && (*(char *)(system_global_data_ + 0xfa) != '\0')) &&
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
        uint_var_ = system_global_data_;
        if (cVar6 != '\0') break;
        system_init_result0 = system_event_handler_017(system_global_data_);
        if (system_init_result0 != 0) {
          psystem_init_result1 = (long long *)system_event_handler_017(uint_var_);
          (**(code **)(*psystem_init_result1 + CONFIG_PATH_BUFFER_SIZE))(psystem_init_result1,0);
        }
      }
    }
    system_init_result0 = alStackX_10[0];
    psystem_init_result1 = *(long long **)(*(long long *)(alStackX_10[0] + 0x3580) + 0x630);
    if (psystem_init_result1 != (long long *)0x0) {
      plStack_78 = psystem_init_result1;
      (**(code **)(*psystem_init_result1 + 0x28))(psystem_init_result1);
    }
    plStack_78 = *(long long **)(system_init_result0 + 0x12498);
    *(long long **)(system_init_result0 + 0x12498) = psystem_init_result1;
    if (plStack_78 != (long long *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    ppppsystem_init_result3 = in_RCX[99];
    if (ppppsystem_init_result3 != (long long ****)0x0) {
      (*(code *)(*ppppsystem_init_result3)[0x1f])(ppppsystem_init_result3,alStackX_10[0]);
    }
    if (in_RCX[0x22] != (long long ****)0x0) {
      (*(code *)in_RCX[0x23])(alStackX_10[0]);
    }
    if ((*(char *)(in_RCX + 0xb74) != '\0') &&
       (system_init_result0 = *(long long *)(*(long long *)(alStackX_10[0] + 0x3580) + 0x530), system_init_result0 != 0)) {
      *(unsigned int *)(system_init_result0 + SYSTEM_CONFIG_BUFFER_SIZE) = 0x41200000;
    }
    if (*(int *)(in_RCX + 0xa3a) != 0) {
      uint_var_ = *(unsigned int *)(in_RCX + 0xa3a);
      pppppsystem_init_result7 = in_RCX + (long long)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(unsigned int *)pppppsystem_init_result7 = 0;
      UNLOCK();
      system_processor_008(pppppsystem_init_result7,uint_var_);
      if (*(int *)(in_RCX + 0xa3a) == 0) {
        int_var_ = 0;
      }
      else {
        int_var_ = (*(int *)(in_RCX + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (int_var_ != 0) {
        memcpy(pppppsystem_init_result7[1], in_RCX[0xa3b], CONFIG_PATH_BUFFER_SIZE_000);
      }
      system_init_result0 = *(long long *)(*(long long *)(alStackX_10[0] + 0x3580) + 0x118);
      if (system_init_result0 != 0) {
        *(long long ******)(system_init_result0 + 0x98c8) =
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
    ppppsystem_init_result3 = in_RCX[(uint_var_ >> 10) + 0xb5c] +
                 (ulong long)(uint)(int_var_ + (int)(uint_var_ >> 10) * -SYSTEM_CONFIG_BUFFER_SIZE_0) * 0x18;
    system_resource_001(*ppppsystem_init_result3);
    system_function_(*ppppsystem_init_result3,ppppsystem_init_result3[1],ppppsystem_init_result3 + 2,0,ppppsystem_init_result3 + 10);
    uint_var_ = (ulong long)(int_var_ + 1);
  }
  uint_var_ = (ulong long)*(uint *)(in_RCX + 0xb5b);
  LOCK();
  *(unsigned int *)(in_RCX + 0xb5b) = 0;
  uint_var_ = system_global_data_;
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
  unsigned int *system_pointer_variable;
  unsigned int uint_var_;
  *handle = &g_threadString4;
  handle[1] = 0;
  *(unsigned int *)(handle + 2) = 0;
  *handle = &g_threadString2;
  handle[3] = 0;
  handle[1] = 0;
  *(unsigned int *)(handle + 2) = 0;
  system_thread_manager_001(handle, 9, mutex_attr, mutex_type, 0, THREAD_POOL_DEFAULT_FLAG);
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
  system_pointer_variable = (unsigned int *)((ulong long)*(uint *)(handle + 2) + handle[1]);
  *system_pointer_variable = 0x6563732f;
  *(unsigned short *)(system_pointer_variable + 1) = 0x656e;
  *(unsigned char *)((long long)system_pointer_variable + 6) = 0;
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
  system_long_variable = *(long long *)(*psystem_init_result3 + 0x890) - *(long long *)(*psystem_init_result3 + 0x888) >> 5;
  system_stack_long = system_long_variable;
  ppppppplStackX_8 = (long long *******)((ulong long)ppppppplStackX_8 & INT64_MASK);
  if (0 < (int)system_long_variable) {
    do {
      if (int_var_ < 0) {
label_:
        system_init_result9 = system_thread_manager_007();
      }
      else {
        system_init_result9 = *(long long *)(*psystem_init_result3 + 0x888);
        if ((ulong long)(*(long long *)(*psystem_init_result3 + 0x890) - system_init_result9 >> 5) <=
            (ulong long)(long long)int_var_) goto label_;
        system_init_result9 = (long long)int_var_ * CONFIG_PATH_BUFFER_SIZE + system_init_result9;
      }
      system_stack_pointer = &g_threadString2;
      stack_var_ = 0;
      system_stack_pointer = (unsigned char *)0x0;
      stack_var_ = 0;
      system_thread_manager_001(&system_stack_pointer,*(unsigned int *)(system_init_result9 + STRING_BUFFER_SIZE));
      if (*(int *)(system_init_result9 + STRING_BUFFER_SIZE) != 0) {
        memcpy(system_stack_pointer,*(unsigned long long *)(system_init_result9 + 8),*(int *)(system_init_result9 + STRING_BUFFER_SIZE) + 1);
      }
      if (*(long long *)(system_init_result9 + 8) != 0) {
        stack_var_ = 0;
        if (system_stack_pointer != (unsigned char *)0x0) {
          *system_stack_pointer = 0;
        }
        stack_var_ = stack_var_ & UINT32_MAX;
      }
      int_var_ = stack_var_ + 8;
      system_thread_manager_001(&system_stack_pointer,int_var_);
      *(unsigned long long *)(system_stack_pointer + stack_var_) = 0x6a624f656e656353;
      *(unsigned char *)((long long)(system_stack_pointer + stack_var_) + 8) = 0;
      stack_var_ = int_var_;
      cVar5 = system_thread_001(&system_stack_pointer);
      if (cVar5 == '\0') {
        system_stack_pointer = &g_threadString2;
        if (system_stack_pointer != (unsigned char *)0x0) {
          handle_system_error();
        }
      }
      else {
        pppppuStack_d0 = (unsigned long long *****)0x0;
        pppppuStack_c8 = (unsigned long long *****)0x0;
        stack_var_ = 0;
        stack_var_ = 3;
        system_function_(&system_stack_pointer,&pppppuStack_d0);
        pppppflags6 = pppppuStack_c8;
        pppppflags3 = pppppuStack_d0;
        system_init_result9 = (long long)pppppuStack_c8 - (long long)pppppuStack_d0;
        ppppppuVar12 = (unsigned long long ******)system_function_(system_global_data_,CONFIG_PATH_BUFFER_SIZE,8,3);
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
          system_pointer_variable = (unsigned long long *)system_function_(&pppppppuStack_188,auStack_90);
          pppppppuVar6 = (unsigned long long *******)*system_pointer_variable;
        }
        pppppppuVar6[5] = ppppppuVar12;
        int_var_ = (int)(system_init_result9 >> 5);
        system_init_result9 = (long long)int_var_;
        pppppflags5 = pppppflags3;
        if (0 < int_var_) {
          pppppflags2 = pppppflags3 + 1;
          do {
            system_stack_pointer = &g_threadString2;
            stack_var_._0_4_ = 0;
            stack_var_._4_4_ = 0;
            system_stack_pointer = (unsigned char *)0x0;
            stack_var_ = 0;
            system_thread_manager_001(&system_stack_pointer,*(unsigned int *)(pppppflags2 + 1));
            if (*(int *)(pppppflags2 + 1) != 0) {
              memcpy(system_stack_pointer,*pppppflags2,*(int *)(pppppflags2 + 1) + 1);
            }
            if (*pppppflags2 != (unsigned long long ****)0x0) {
              stack_var_ = 0;
              if (system_stack_pointer != (unsigned char *)0x0) {
                *system_stack_pointer = 0;
              }
              stack_var_._4_4_ = 0;
            }
            int_var_ = stack_var_ + 0xd;
            system_thread_manager_001(&system_stack_pointer,int_var_);
            system_pointer_variable = (unsigned long long *)(system_stack_pointer + stack_var_);
            *system_pointer_variable = 0x782e656e6563732f;
            *(unsigned int *)(system_pointer_variable + 1) = 0x6e656373;
            *(unsigned short *)((long long)system_pointer_variable + 0xc) = 0x65;
            stack_var_ = int_var_;
            cVar5 = system_thread_002(&system_stack_pointer);
            if (cVar5 == '\0') {
              stack_var_ = 0;
              if (system_stack_pointer != (unsigned char *)0x0) {
                *system_stack_pointer = 0;
              }
              uint_var_ = *(uint *)(pppppflags2 + 1);
              flags0 = (ulong long)uint_var_;
              if (*pppppflags2 != (unsigned long long ****)0x0) {
                system_thread_manager_001(&system_stack_pointer,flags0);
              }
              if (uint_var_ != 0) {
                memcpy(system_stack_pointer,*pppppflags2,flags0);
              }
              if (system_stack_pointer != (unsigned char *)0x0) {
                system_stack_pointer[flags0] = 0;
              }
              stack_var_._4_4_ = *(uint *)((long long)pppppflags2 + 0x14);
              stack_var_ = uint_var_;
              system_thread_manager_001(&system_stack_pointer,0x12);
              system_pointer_variable = (unsigned int *)(system_stack_pointer + stack_var_);
              *system_pointer_variable = 0x6563732f;
              system_pointer_variable[1] = 0x782e656e;
              system_pointer_variable[2] = 0x2e6f6373;
              system_pointer_variable[3] = 0x65637378;
              *(unsigned short *)(system_pointer_variable + 4) = 0x656e;
              *(unsigned char *)((long long)system_pointer_variable + 0x12) = 0;
              stack_var_ = 0x12;
              cVar5 = system_thread_002(&system_stack_pointer);
              if (cVar5 != '\0') goto label_;
              system_stack_pointer = &g_threadString2;
              if (system_stack_pointer != (unsigned char *)0x0) {
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
                system_pointer_variable = (unsigned long long *)system_function_(&pppppppuStack_188,&ppppppuStack_a0);
                pppppppuVar6 = (unsigned long long *******)*system_pointer_variable;
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
                  memcpy(ppppppflags[1],system_stack_pointer,stack_var_ + 1);
                }
                if (system_stack_pointer != (unsigned char *)0x0) {
                  *(unsigned int *)(ppppppflags + 2) = 0;
                  if (ppppppflags[1] != (unsigned long long *****)0x0) {
                    *(unsigned char *)ppppppflags[1] = 0;
                  }
                  *(unsigned int *)((long long)ppppppflags + 0x1c) = 0;
                }
              }
              else {
                system_event_handler_006(ppppppuVar12,&system_stack_pointer);
              }
              system_stack_pointer = &g_threadString2;
              if (system_stack_pointer != (unsigned char *)0x0) {
                handle_system_error();
              }
            }
            stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
            system_stack_pointer = (unsigned char *)0x0;
            system_stack_pointer = &g_threadString4;
            pppppflags2 = pppppflags2 + 4;
            system_init_result9 = system_init_result9 + -1;
            pppppflags3 = pppppuStack_d0;
            pppppflags6 = pppppuStack_c8;
            pppppflags5 = pppppuStack_d0;
            system_long_variable = system_stack_long;
          } while (system_init_result9 != 0);
        }
        for (; pppppflags3 != pppppflags6; pppppflags3 = pppppflags3 + 4) {
          (*(code *)**pppppflags3)(pppppflags3,0);
        }
        if (pppppflags5 != (unsigned long long *****)0x0) {
          handle_system_error(pppppflags5);
        }
        system_stack_pointer = &g_threadString2;
        if (system_stack_pointer != (unsigned char *)0x0) {
          handle_system_error();
        }
      }
      stack_var_ = stack_var_ & INT64_MASK;
      system_stack_pointer = (unsigned char *)0x0;
      system_stack_pointer = &g_threadString4;
      int_var_ = int_var_ + 1;
      ppppppplStackX_8 = (long long *******)CONCAT44(ppppppplStackX_8._4_4_,int_var_);
      psystem_init_result3 = system_global_data_;
      mutex_attr = pppppppuStackX_18;
      system_init_result9 = system_stack_long;
      mutex_type = uStackX_20;
    } while (int_var_ < (int)system_long_variable);
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
        system_pointer_variable = (unsigned long long *)system_function_(&pppppppuStack_138,&pppppppuStackX_18);
        pppppppuVar8 = (unsigned long long *******)*system_pointer_variable;
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
        system_pointer_variable = (unsigned long long *)system_function_(&pppppppuStack_188,&ppppppplStackX_8);
        pppppppuVar8 = (unsigned long long *******)*system_pointer_variable;
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
        system_pointer_variable = (unsigned long long *)system_function_(&pppppppuStack_188,&ppppppuStack_d8);
        pppppppuVar8 = (unsigned long long *******)*system_pointer_variable;
      }
      pppppppuVar8[5] = (unsigned long long ******)0x0;
      pppppppuVar9 = (unsigned long long *******)func_0x00018066bd70(pppppppuVar9);
    } while ((unsigned long long ********)pppppppuVar9 != &pppppppuStack_188);
  }
  pppppppuVar9 = pppppppuStack_178;
  if (pppppppuStack_178 != (unsigned long long *******)0x0) {
    system_function_(&pppppppuStack_188,*pppppppuStack_178);
    handle_system_error(pppppppuVar9);
  }
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (unsigned long long *******)0x0;
  stack_var_ = stack_var_ & 0xffffffffffffff00;
  stack_var_ = 0;
  uint_var_ = system_function_(system_global_data_,0x150,8,3);
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
  pppppppuStackX_18 = *(unsigned long long ********)(system_init_result9 + SYSTEM_CONFIG_BUFFER_SIZE);
  *(unsigned long long *******)(system_init_result9 + SYSTEM_CONFIG_BUFFER_SIZE) = ppppppuVar12;
  if (pppppppuStackX_18 != (unsigned long long *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[7])();
  }
  uint_var_ = system_global_data_;
  pppppppuStackX_10 = &pppppppuStackX_18;
  pppppppuStackX_18 = *(unsigned long long ********)(system_init_result9 + SYSTEM_CONFIG_BUFFER_SIZE);
  if (pppppppuStackX_18 != (unsigned long long *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[5])();
  }
  system_event_handler_013(uint_var_,&pppppppuStackX_18);
  pppppppuVar6 = pppppppuStack_128;
  pppppppuVar9 = pppppppuStack_178;
  pppppppuStackX_18 = pppppppuStack_128;
  if (pppppppuStack_128 == (unsigned long long *******)0x0) {
    if (pppppppuStack_178 != (unsigned long long *******)0x0) {
      system_function_(&pppppppuStack_188,*pppppppuStack_178);
      handle_system_error(pppppppuVar9);
    }
    system_stack_pointer = &g_threadString2;
    if (system_stack_pointer == (void *)0x0) {
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
      system_init_result0 = (long long)int_var_ << 4;
      do {
        if ((int)(fVar12 - 12582912.0) <= (int)plVar9) {
          data_180c91d14 = 0;
          return plVar7;
        }
        system_long_variable = *(long long *)(system_init_result0 + (long long)system_global_data_);
        plVar7 = (long long *)(ulong long)*(uint *)(system_long_variable + 0xe0);
        if ((*(uint *)(system_long_variable + 0xe0) == 2) &&
           (plVar7 = (long long *)(ulong long)*(uint *)(system_long_variable + 0xd8), *(uint *)(system_long_variable + 0xd8) == 0))
        {
          LOCK();
          uint_var_ = *(uint *)(system_long_variable + 0xd8);
          if (uint_var_ == 0) {
            *(uint *)(system_long_variable + 0xd8) = UINT32_MAX;
          }
          else {
            plVar7 = (long long *)(ulong long)uint_var_;
          }
          UNLOCK();
          if (uint_var_ == 0) {
            *(unsigned char *)(system_long_variable + 0xdc) = 0;
            system_hardware_001(system_long_variable + 0xe8);
            uint_var_ = *(unsigned long long *)(system_long_variable + 0x88);
            int_var_ = *(int *)(system_long_variable + 0x80);
            *(unsigned long long *)(system_long_variable + 0x88) = 0;
            *(unsigned int *)(system_long_variable + 0x80) = 0;
            *(unsigned int *)(system_long_variable + 0xe0) = 0;
            *(unsigned int *)(system_long_variable + 0xd8) = 0;
            system_hardware_002(uint_var_);
            LOCK();
            uint_var_ = system_global_data_ - int_var_;
            plVar7 = (long long *)(ulong long)system_global_data_;
            UNLOCK();
            system_global_data_ = uint_var_;
            if (0 < int_var_) {
              plVar9 = (long long *)(ulong long)(uint)((int)plVar9 + int_var_);
              plVar7 = system_global_data_ + (long long)int_var_ * 2 + 2;
              if (plVar7 < system_global_data_) {
                memmove(system_global_data_ + (long long)int_var_ * 2,plVar7,
                        (long long)system_global_data_ - (long long)plVar7);
              }
              plVar7 = system_global_data_ + -2;
              system_global_data_ = plVar7;
            }
          }
        }
        system_init_result0 = system_init_result0 + -STRING_BUFFER_SIZE;
        int_var_ = int_var_ + -1;
      } while (-1 < int_var_);
      data_180c91d14 = 0;
      return plVar7;
    }
    flags = *(unsigned int *)(system_init_result0 + 0x84);
    uint_var_ = *(unsigned int *)(system_init_result0 + 0x80);
    if (plVar7 < system_global_data_) {
      system_global_data_ = plVar7 + 2;
      *plVar7 = system_init_result0;
      plVar7[1] = CONCAT44(uint_var_,flags);
    }
    else {
      system_long_variable = (long long)plVar7 - (long long)system_global_data_ >> 4;
      if (system_long_variable == 0) {
        system_long_variable = 1;
label_:
        plVar7 = (long long *)system_function_(system_global_data_,system_long_variable << 4,data_180c91d08);
      }
      else {
        system_long_variable = system_long_variable * 2;
        plVar7 = plVar9;
        if (system_long_variable != 0) goto label_;
      }
      if (system_global_data_ != system_global_data_) {
        memmove(plVar7,system_global_data_,(long long)system_global_data_ - (long long)system_global_data_);
      }
      *plVar7 = system_init_result0;
      plVar7[1] = CONCAT44(uint_var_,flags);
      if (system_global_data_ != (long long *)0x0) {
        handle_system_error();
      }
      system_global_data_ = plVar7 + system_long_variable * 2;
      system_global_data_ = plVar7;
      system_global_data_ = plVar7 + 2;
    }
    cVar6 = system_validator_001(0x180c919f0,&lStackX_20);
    plVar7 = system_global_data_;
    system_init_result0 = lStackX_20;
  } while( true );
}
      data_180c91d14 = uint_var_;
      return;
    }
    system_long_variable = *(long long *)(system_long_variable + system_global_data_);
    if ((*(int *)(system_long_variable + 0xe0) == 2) && (*(int *)(system_long_variable + 0xd8) == 0)) {
      LOCK();
      bVar8 = *(int *)(system_long_variable + 0xd8) == 0;
      if (bVar8) {
        *(int *)(system_long_variable + 0xd8) = -1;
      }
      UNLOCK();
      if (bVar8) {
        *(unsigned char *)(system_long_variable + 0xdc) = uint_var_;
        system_hardware_001(system_long_variable + 0xe8);
        uint_var_ = *(unsigned long long *)(system_long_variable + 0x88);
        int_var_ = *(int *)(system_long_variable + 0x80);
        *(unsigned long long *)(system_long_variable + 0x88) = unaff_R12;
        uint_var_ = (unsigned int)unaff_R12;
        *(unsigned int *)(system_long_variable + 0x80) = uint_var_;
        *(unsigned int *)(system_long_variable + 0xe0) = uint_var_;
        *(unsigned int *)(system_long_variable + 0xd8) = uint_var_;
        system_hardware_002(uint_var_);
        LOCK();
        system_global_data_ = system_global_data_ - int_var_;
        UNLOCK();
        if (0 < int_var_) {
          unaff_EBP = unaff_EBP + int_var_;
          system_long_variable = (long long)unaff_EDI * STRING_BUFFER_SIZE + system_global_data_;
          uint_var_ = system_long_variable + STRING_BUFFER_SIZE;
          if (uint_var_ < system_global_data_) {
            memmove(system_long_variable,uint_var_,system_global_data_ - uint_var_);
          }
          system_global_data_ = system_global_data_ - STRING_BUFFER_SIZE;
        }
      }
    }
    system_long_variable = system_long_variable + -STRING_BUFFER_SIZE;
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
        system_function_(auStack_258,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3);
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
    system_handler_007(system_init_result0,&stack_var_,handle,&uStackX_18);
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
    system_pointer_variable = (unsigned short *)system_handler_008(system_init_result0,&stack_var_,handle,&uStackX_18);
    fVar16 = (float)func_0x0001800adf40(system_pointer_variable[2]);
    fVar17 = (float)func_0x0001800adf40(system_pointer_variable[1]);
    fVar14 = (float)func_0x0001800adf40(*system_pointer_variable);
    fVar15 = (float)func_0x0001800adf40(system_pointer_variable[3]);
    flags[3] = fVar15;
    *flags = fVar14;
    flags[1] = fVar17;
    flags[2] = fVar16;
    break;
  case CONFIG_PATH_BUFFER_SIZE:
    stack_int_ = mutex_type;
    system_handler_002(system_init_result0,&stack_var_,handle,&uStackX_18);
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
      system_pointer_variable = (unsigned long long *)
               ((long long)(int)(int_var_ * (uint)*(ushort *)((long long)handle + 0x5c) + int_var_) * STRING_BUFFER_SIZE
               + *handle);
      flags = system_pointer_variable[1];
      *(unsigned long long *)flags = *system_pointer_variable;
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
    system_handler_005(system_init_result0,&stack_var_,handle,&uStackX_18);
    fVar16 = 1.5259022e-05;
    *flags = (float)(ushort)stack_var_ * 1.5259022e-05;
    uint_var_ = (uint)stack_var_._2_2_;
    uint_var_ = stack_var_._4_2_;
    goto code_r0x0001802a16a1;
  case 0x28:
    stack_int_ = mutex_type;
    system_handler_006(system_init_result0,&stack_var_,handle,&uStackX_18);
    fVar16 = 0.003921569;
    *flags = (float)(byte)stack_var_ * 0.003921569;
    uint_var_ = (uint)stack_var_._1_1_;
    uint_var_ = (ushort)stack_var_._2_1_;
    goto code_r0x0001802a16a1;
  case 0x29:
    stack_int_ = mutex_type;
    system_handler_006(system_init_result0,&stack_var_,handle,&uStackX_18);
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
    system_handler_004(system_init_result0,abStack_2b8,handle,&uStackX_18);
    flags[1] = 0.0;
    flags[2] = 0.0;
    flags[3] = 0.0;
    *flags = (float)abStack_2b8[0];
    break;
  case 0x2c:
    uint_var_ = system_handler_003(system_init_result0,handle,&uStackX_18);
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
    system_function_(unaff_RBP + -0x70,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3,0x786);
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
  system_function_(unaff_RBP + -0x70,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3,0x786);
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
        system_stack_long = CONCAT44(system_stack_long._4_4_,0x4ea);
        system_function_(auStack_238,&systemFunctionData1,&systemFunctionData4,&systemFunctionData5);
        OutputDebugStringA(auStack_238);
      }
      goto label_;
    }
    uint_var_ = system_function_(&system_stack_pointer,handle);
    system_thread_manager_012(uint_var_,1);
    system_stack_pointer = &g_threadString2;
    if (system_stack_pointer != (void *)0x0) {
      handle_system_error();
    }
    system_stack_pointer = (void *)0x0;
    stack_var_ = 0;
    system_stack_pointer = &g_threadString4;
    system_long_variable = *flags;
    uint_var_ = *(unsigned short *)((long long)flags + 0x5e);
    flags = *(unsigned short *)((long long)flags + 0x5c);
    system_pointer_variable = &data_18098bc73;
    if (*(void **)(handle + 8) != (void *)0x0) {
      system_pointer_variable = *(void **)(handle + 8);
    }
    int_var_ = fopen_s(&system_stack_pointer,system_pointer_variable,&fileOpenModeString);
    system_stack_pointer = system_stack_pointer;
    if (int_var_ != 0) {
      system_stack_pointer = (void *)0x0;
    }
    system_stack_pointer = &fileHandleData;
    if (system_stack_pointer == (void *)0x0) goto label_;
    system_pointer_variable = system_stack_pointer;
    if (system_long_variable != 0) {
      system_stack_long = system_long_variable;
      system_hardware_003(&system_stack_pointer,flags,uint_var_,int_var_);
      system_pointer_variable = system_stack_pointer;
    }
  }
  fclose(system_pointer_variable);
label_:
  system_crypto_001(stack_var_ ^ (ulong long)auStack_298);
}
        data_180d48daa = '\x01';
        system_stack_pointer = (void *)CONCAT44(system_stack_pointer._4_4_,0xc88);
        system_function_(auStack_228,&systemFunctionData1,&system_180a17a68,&systemFunctionData5);
        OutputDebugStringA(auStack_228);
      }
      system_pointer_variable = &data_18098bc73;
      if (*(void **)(handle + 8) != (void *)0x0) {
        system_pointer_variable = *(void **)(handle + 8);
      }
      system_data_manager_002(system_global_data_,&systemDataManagerData,system_pointer_variable);
    }
  }
  cVar3 = handle_system_event(mutex_attr);
  if (cVar3 == '\0') {
    system_pointer_variable = &data_18098bc73;
    if (*(void **)(handle + 8) != (void *)0x0) {
      system_pointer_variable = *(void **)(handle + 8);
    }
    system_thread_003(&systemThreadData3,system_pointer_variable);
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
    strcpy_s(mutex_attr + 0x14, SYSTEM_CONFIG_BUFFER_SIZE, uint_var_);
  }
label_:
  system_processor_012(auStack_260);
  system_crypto_001(stack_var_ ^ (ulong long)auStack_2f8);
}
      data_180d48dab = '\x01';
      stack_var_ = 0xac7;
      system_function_(auStack_218,&systemFunctionData1,&systemFunctionData6,&systemFunctionData5);
      OutputDebugStringA(auStack_218);
    }
  }
  else {
    system_thread_003(&system_180a17a38);
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
      flags = system_function_(system_global_data_,handle[1],3);
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
        flags = system_function_(system_global_data_,handle[1],3);
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
    flags = system_function_(system_global_data_,handle[1],3);
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
  ushort *system_pointer_variable;
  float *pfVar7;
  ulong long uint_var_;
  byte *byte_system_pointer_variable;
  float fVar10;
  float fVar11;
  unsigned char auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  switch(*(int *)((long long)handle + 0x54) + -1) {
  case 0:
  case 1:
    byte_system_pointer_variable = (byte *)*handle;
    pfVar4 = (float *)((ulong long)handle[1] >> 2);
    if (0 < (int)pfVar4) {
      uint_var_ = (ulong long)pfVar4 & UINT32_MAX;
      do {
        fVar14 = (float)byte_system_pointer_variable[1] * 0.007843138 - 1.0;
        fVar13 = (float)*byte_system_pointer_variable * 0.007843138 - 1.0;
        fVar15 = (float)byte_system_pointer_variable[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *byte_system_pointer_variable = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        byte_system_pointer_variable[1] = (byte)(int)((fVar10 * fVar14 + 1.0) * 127.5);
        int_var_ = (int)((fVar10 * fVar15 + 1.0) * 127.5);
        byte_system_pointer_variable[2] = (byte)int_var_;
        byte_system_pointer_variable = byte_system_pointer_variable + 4;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
      return CONCAT71((uint7)(uint3)((uint)int_var_ >> 8),1);
    }
    break;
  default:
    return 0;
  case 8:
    system_pointer_variable = (ushort *)*handle;
    pfVar4 = (float *)((ulong long)handle[1] >> 3);
    if (0 < (int)pfVar4) {
      uint_var_ = (ulong long)pfVar4 & UINT32_MAX;
      do {
        fVar14 = (float)system_pointer_variable[1] * 3.0518044e-05 - 1.0;
        fVar13 = (float)*system_pointer_variable * 3.0518044e-05 - 1.0;
        fVar15 = (float)system_pointer_variable[2] * 3.0518044e-05 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *system_pointer_variable = (ushort)(int)((fVar10 * fVar13 + 1.0) * 32767.5);
        system_pointer_variable[1] = (ushort)(int)((fVar10 * fVar14 + 1.0) * 32767.5);
        int_var_ = (int)((fVar10 * fVar15 + 1.0) * 32767.5);
        system_pointer_variable[2] = (ushort)int_var_;
        system_pointer_variable = system_pointer_variable + 4;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
      return CONCAT71((uint7)(uint3)((uint)int_var_ >> 8),1);
    }
    break;
  case 0x1f:
    pfVar4 = (float *)*handle;
    if (0 < (int)((ulong long)handle[1] / 0xc)) {
      uint_var_ = (ulong long)handle[1] / 0xc & UINT32_MAX;
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
      uint_var_ = (ulong long)pfVar4 & UINT32_MAX;
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
    system_pointer_variable = (ushort *)*handle;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = handle[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
    uint_var_ = (ulong long)handle[1] / 6;
    if (0 < (int)uint_var_) {
      uint_var_ = uint_var_ & UINT32_MAX;
      do {
        fVar14 = (float)system_pointer_variable[1] * 0.007843138 - 1.0;
        fVar13 = (float)*system_pointer_variable * 0.007843138 - 1.0;
        fVar15 = (float)system_pointer_variable[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *system_pointer_variable = (ushort)(int)((fVar13 * fVar10 + 1.0) * 127.5);
        system_pointer_variable[1] = (ushort)(int)((fVar14 * fVar10 + 1.0) * 127.5);
        int_var_ = (int)((fVar15 * fVar10 + 1.0) * 127.5);
        system_pointer_variable[2] = (ushort)int_var_;
        system_pointer_variable = system_pointer_variable + 3;
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
      return CONCAT71((uint7)(uint3)((uint)int_var_ >> 8),1);
    }
    break;
  case 0x27:
  case 0x28:
    byte_system_pointer_variable = (byte *)*handle;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = handle[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar12,0);
    uint_var_ = (ulong long)handle[1] / 3;
    if (0 < (int)uint_var_) {
      uint_var_ = uint_var_ & UINT32_MAX;
      do {
        fVar14 = (float)byte_system_pointer_variable[1] * 0.007843138 - 1.0;
        fVar13 = (float)*byte_system_pointer_variable * 0.007843138 - 1.0;
        fVar15 = (float)byte_system_pointer_variable[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *byte_system_pointer_variable = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        byte_system_pointer_variable[1] = (byte)(int)((fVar10 * fVar14 + 1.0) * 127.5);
        uint_var_ = (uint)((fVar10 * fVar15 + 1.0) * 127.5);
        pfVar4 = (float *)(ulong long)uint_var_;
        byte_system_pointer_variable[2] = (byte)uint_var_;
        byte_system_pointer_variable = byte_system_pointer_variable + 3;
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
  long long system_long_variable;
  double dVar21;
  if (*(int *)((long long)handle + 0x54) == CONFIG_PATH_BUFFER_SIZE) {
    pfVar14 = (float *)*handle;
    int_var_ = 0;
    dVar21 = 0.0;
    system_long_variable = 0;
    int_var_ = 0;
    int_var_ = (int)((ulong long)handle[1] / 0xc);
    pfVar15 = pfVar14;
    if (3 < int_var_) {
      uint_var_ = (int_var_ - 4U >> 2) + 1;
      uint_var_ = (ulong long)uint_var_;
      system_long_variable = (ulong long)uint_var_ * 4;
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
      system_long_variable = system_long_variable + uint_var_;
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
    dVar21 = 1.0 / (dVar21 / (double)system_long_variable);
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
    system_long_variable = 0;
    int_var_ = 0;
    int_var_ = (int)((ulong long)handle[1] >> 4);
    pfVar15 = pfVar14;
    if (3 < int_var_) {
      uint_var_ = (int_var_ - 4U >> 2) + 1;
      uint_var_ = (ulong long)uint_var_;
      system_long_variable = (ulong long)uint_var_ * 4;
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
      system_long_variable = system_long_variable + uint_var_;
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
    dVar21 = 1.0 / (dVar21 / (double)system_long_variable);
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
  *(unsigned int *)(system_init_result + 0x4c) = 0;
  system_network_001(*(unsigned long long *)(system_init_result + STRING_BUFFER_SIZE8));
  system_stack_pointer = &g_alternateDataTemplate;
  system_stack_pointer = auStack_38;
  auStack_38[0] = 0;
  stack_var_ = 0x12;
  strcpy_s(auStack_38,CONFIG_PATH_BUFFER_SIZE,&system_180a1a918);
  system_network_002();
  system_stack_pointer = &g_threadString4;
  system_crypto_001(stack_var_ ^ (ulong long)auStack_78);
}
        data_180d48e78 = 0;
        system_global_data_ = 0;
        system_global_data_ = 0;
        uRam0000000180d48ec8 = 0;
        system_global_data_ = 3;
        system_global_data_ = 0;
        system_crypto_002(&system_180941dc0);
        system_crypto_003(&data_180d48e24);
      }
      system_pointer_variable = (uint *)&data_180d48e30;
      if (uint_var_ < (ulong long)
                  ((*(long long *)(mutex_attr + 0x1c) - *(long long *)(mutex_attr + 0x1a)) / 0xb0)) {
        system_pointer_variable = (uint *)(uint_var_ + *(long long *)(mutex_attr + 0x1a));
      }
      if ((*(int *)(system_init_result0 + 0x48) < system_global_data_) &&
         (system_crypto_004(&data_180d48e24), system_global_data_ == -1)) {
        system_global_data_ = &g_defaultDataTemplate;
        system_global_data_ = &data_180d48e78;
        system_global_data_ = 0;
        data_180d48e78 = 0;
        system_global_data_ = 0;
        system_global_data_ = 0;
        uRam0000000180d48ec8 = 0;
        system_global_data_ = 3;
        system_global_data_ = 0;
        system_crypto_002(&system_180941dc0);
        system_crypto_003(&data_180d48e24);
      }
      system_pointer_variable = &data_180d48e30;
      if (uint_var_ < (ulong long)
                  ((*(long long *)(flags + 0x1c) - *(long long *)(flags + 0x1a)) / 0xb0)) {
        system_pointer_variable = (void *)(uint_var_ + *(long long *)(flags + 0x1a));
      }
      if ((((0.0001 <= ABS(*(float *)(system_pointer_variable + 0x14) - (float)system_pointer_variable[5])) ||
           (0.0001 <= ABS(*(float *)(system_pointer_variable + 0x18) - (float)system_pointer_variable[6]))) ||
          (0.0001 <= ABS(*(float *)(system_pointer_variable + 0x1c) - (float)system_pointer_variable[7]))) ||
         (((0.0001 <= ABS(*(float *)(system_pointer_variable + STRING_BUFFER_SIZE) - (float)system_pointer_variable[4]) ||
           (0.0001 <= ABS(*(float *)(system_pointer_variable + CONFIG_PATH_BUFFER_SIZE) - (float)system_pointer_variable[8]))) ||
          ((0.0001 <= ABS(*(float *)(system_pointer_variable + 0x24) - (float)system_pointer_variable[9]) ||
           (0.0001 <= ABS(*(float *)(system_pointer_variable + 0x28) - (float)system_pointer_variable[10]))))))) {
        *system_pointer_variable = *system_pointer_variable | 8;
      }
      uint_var_ = system_allocator_001(handle,system_pointer_variable + 0x88,system_pointer_variable + 0x22);
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
  long long *psystem_init_result;
  byte bVar2;
  int int_var_;
  unsigned long long *system_pointer_variable;
  unsigned long long uint_var_;
  long long *plVar6;
  long long system_long_variable;
  long long *plStackX_18;
  unsigned int auStackX_20 [2];
  long long *plStack_80;
  long long *plStack_78;
  unsigned long long stack_var_;
  long long **pplStack_68;
  long long *plStack_60;
  unsigned char auStack_58 [32];
  stack_var_ = THREAD_POOL_DEFAULT_FLAG;
  uint_var_ = 0;
  bVar2 = *(byte *)(mutex_attr + 2);
  if ((mutex_type >> 1 & 1) != 0) {
    system_ui_003(system_global_data_,&plStack_78,mutex_attr + 0x14,1);
    system_pointer_variable = (unsigned long long *)system_ui_006();
    system_resource_002(*system_pointer_variable,&plStackX_18);
    if (plStack_80 != (long long *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
    }
    system_resource_003(plStackX_18,&plStack_78);
    *(uint *)(plStackX_18 + CONFIG_PATH_BUFFER_SIZE) = *(uint *)(plStackX_18 + CONFIG_PATH_BUFFER_SIZE) | SYSTEM_CONFIG_BUFFER_SIZE_000000;
    auStackX_20[0] = *mutex_attr;
    psystem_init_result = (long long *)(handle + 0x3d8);
    plStack_80 = psystem_init_result;
    int_var_ = _Mtx_lock(psystem_init_result);
    if (int_var_ != 0) {
      __Throw_C_error_std__YAXH_Z(int_var_);
    }
    uint_var_ = system_function_(system_global_data_,0x298,8,3);
    plVar6 = (long long *)system_memory_001(uint_var_);
    pplStack_68 = (long long **)CONCAT44(pplStack_68._4_4_,auStackX_20[0]);
    plStack_60 = plVar6;
    system_memory_manager_006(handle + 0x3a8,auStack_58,&pplStack_68);
    int_var_ = _Mtx_unlock(psystem_init_result);
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
    system_function_(uint_var_,&plStack_80);
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
      system_long_variable = system_memory_manager_007(handle,*mutex_attr);
      *flags = system_long_variable;
      uint_var_ = 1;
    }
  }
  else {
    auStackX_20[0] = *mutex_attr;
    system_long_variable = system_memory_manager_007(handle);
    if (system_long_variable == 0) {
      *flags = 0;
      uint_var_ = 1;
    }
    else {
      psystem_init_result = (long long *)(handle + 0x3d8);
      plStackX_18 = psystem_init_result;
      int_var_ = _Mtx_lock(psystem_init_result);
      if (int_var_ != 0) {
        __Throw_C_error_std__YAXH_Z(int_var_);
      }
      system_memory_manager_008(handle + 0x3a8,auStackX_20);
      int_var_ = _Mtx_unlock(psystem_init_result);
      if (int_var_ != 0) {
        __Throw_C_error_std__YAXH_Z(int_var_);
      }
      *flags = system_long_variable;
      *(unsigned char *)(system_long_variable + 0x39) = 1;
      uint_var_ = 1;
    }
  }
  return uint_var_;
}
    data_180d49748 = 0;
    system_memory_002(0x180d496e0);
    system_crypto_002(system_function_);
    system_crypto_003(&data_180d496d0);
  }
  int_var_ = _Mtx_lock(handle + 0x6e8);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  if ((ulong long)mutex_attr <= *(ulong long *)(handle + 0x160)) {
    for (system_pointer_variable = *(uint **)(*(long long *)(handle + 0x6c0) +
                            ((ulong long)flags % (ulong long)*(uint *)(handle + 0x6c8)) * 8);
        system_pointer_variable != (uint *)0x0; system_pointer_variable = *(uint **)(system_pointer_variable + 4)) {
      if (flags == *system_pointer_variable) goto label_;
    }
    system_pointer_variable = *(uint **)(*(long long *)(handle + 0x6c0) + *(long long *)(handle + 0x6c8) * 8);
label_:
    system_long_variable = *(long long *)(system_pointer_variable + 2);
    system_init_result = *(long long *)(system_long_variable + 8);
    for (system_pointer_variable = *(uint **)(system_init_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(system_long_variable + STRING_BUFFER_SIZE)) * 8);
        system_pointer_variable != (uint *)0x0; system_pointer_variable = *(uint **)(system_pointer_variable + 4)) {
      if (mutex_attr == *system_pointer_variable) {
        system_long_variable = *(long long *)(system_long_variable + STRING_BUFFER_SIZE);
        goto label_;
      }
    }
    system_long_variable = *(long long *)(system_long_variable + STRING_BUFFER_SIZE);
    system_pointer_variable = *(uint **)(system_init_result + system_long_variable * 8);
label_:
    if ((system_pointer_variable != *(uint **)(system_init_result + system_long_variable * 8)) && (system_long_variable = *(long long *)(system_pointer_variable + 2), system_long_variable != 0)
       ) goto label_;
  }
  system_memory_002(0x180d496e0);
  system_long_variable = 0x180d496e0;
label_:
  int_var_ = _Mtx_unlock(handle + 0x6e8);
  if (int_var_ != 0) {
    __Throw_C_error_std__YAXH_Z(int_var_);
  }
  return system_long_variable;
}
long long allocate_with_flags(long long handle,uint flags,uint mutex_attr)
{
  long long system_init_result;
  long long system_long_variable;
  uint *system_pointer_variable;
  if ((*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
               0x48) < system_global_data_) && (system_crypto_004(&data_180d497d0), system_global_data_ == -1)) {
    system_memory_004(0x180d497e0);
    system_crypto_002(system_function_);
    system_crypto_003(&data_180d497d0);
  }
  if ((ulong long)mutex_attr <= *(ulong long *)(handle + 0x160)) {
    for (system_pointer_variable = *(uint **)(*(long long *)(handle + 0x9f8) +
                            ((ulong long)flags % (ulong long)*(uint *)(handle + 0xa00)) * 8);
        system_pointer_variable != (uint *)0x0; system_pointer_variable = *(uint **)(system_pointer_variable + 4)) {
      if (flags == *system_pointer_variable) goto label_;
    }
    system_pointer_variable = *(uint **)(*(long long *)(handle + 0x9f8) + *(long long *)(handle + 0xa00) * 8);
label_:
    system_long_variable = *(long long *)(system_pointer_variable + 2);
    system_init_result = *(long long *)(system_long_variable + 8);
    for (system_pointer_variable = *(uint **)(system_init_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(system_long_variable + STRING_BUFFER_SIZE)) * 8);
        system_pointer_variable != (uint *)0x0; system_pointer_variable = *(uint **)(system_pointer_variable + 4)) {
      if (mutex_attr == *system_pointer_variable) {
        system_long_variable = *(long long *)(system_long_variable + STRING_BUFFER_SIZE);
        goto label_;
      }
    }
    system_long_variable = *(long long *)(system_long_variable + STRING_BUFFER_SIZE);
    system_pointer_variable = *(uint **)(system_init_result + system_long_variable * 8);
label_:
    if ((system_pointer_variable != *(uint **)(system_init_result + system_long_variable * 8)) && (*(long long *)(system_pointer_variable + 2) != 0)) {
      return *(long long *)(system_pointer_variable + 2);
    }
  }
  system_memory_005(0x180d497e0);
  return 0x180d497e0;
}
long long allocate_system_buffer(unsigned long long handle,long long *flags,long long mutex_attr)
{
  long long system_init_result;
  uint flags;
  ulong long uint_var_;
  unsigned long long uint_var_;
  unsigned long long *system_pointer_variable;
  uint uint_var_;
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              0x48) < system_global_data_) {
    system_crypto_004(&data_180d49990);
    if (system_global_data_ == -1) {
      uint_var_ = system_function_(system_global_data_,0x1c8,8,3);
      system_global_data_ = system_memory_manager_001(uint_var_);
      uint_var_ = system_function_(system_global_data_,CONFIG_PATH_BUFFER_SIZE0,8,3);
      system_global_data_ = system_memory_manager_002(uint_var_);
      system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,0xf8,8,3);
      system_memory_003(system_pointer_variable);
      // Original name: system_180a1b368
      *system_pointer_variable = &g_handle_manager_address_180a1b368;
      system_memory_manager_004(system_pointer_variable);
      system_global_data_ = system_pointer_variable;
      system_global_data_ = system_function_();
      system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,0xb0,8,3);
      system_memory_003(system_pointer_variable);
      // Original name: system_180a1b3f0
      *system_pointer_variable = &g_memory_manager_address_180a1b3f0;
      system_global_data_ = system_pointer_variable;
      system_global_data_ = system_memory_manager_005();
      system_global_data_ = (*system_global_data_)(&data_180c918c0);
      system_global_data_ = 0;
      system_crypto_003(&data_180d49990);
    }
  }
  uint_var_ = 0;
  uint_var_ = (uint)(flags[1] - *flags >> 3);
  if (uint_var_ != 0) {
    do {
      system_init_result = *(long long *)(*flags + uint_var_ * 8);
      if (*(int *)(system_init_result + 8) == *(int *)(mutex_attr + 8)) {
        return system_init_result;
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
  long long system_init_result;
  ulong long flags;
  long long system_long_variable;
  unsigned long long uint_var_;
  long long system_long_variable;
  long long system_long_variable;
  uint *system_pointer_variable;
  uint_var_ = 0;
  flags = flags[1] - *flags >> 2;
  if ((int)flags != 0) {
    system_long_variable = 0;
    flags = flags & UINT32_MAX;
    do {
      system_pointer_variable = (uint *)*mutex_attr;
      system_init_result = *flags;
      system_long_variable = (long long)mutex_attr[1] - (long long)system_pointer_variable >> 2;
      if (0 < system_long_variable) {
        do {
          system_long_variable = system_long_variable >> 1;
          if (system_pointer_variable[system_long_variable] < *(uint *)(system_init_result + system_long_variable)) {
            system_pointer_variable = system_pointer_variable + system_long_variable + 1;
            system_long_variable = system_long_variable + (-1 - system_long_variable);
          }
          system_long_variable = system_long_variable;
        } while (0 < system_long_variable);
      }
      if ((system_pointer_variable == (uint *)mutex_attr[1]) || (*(uint *)(system_init_result + system_long_variable) < *system_pointer_variable)) {
        uint_var_ = allocate_with_flags(handle,*(unsigned int *)(system_init_result + system_long_variable),mutex_type);
        system_allocator_002(handle,uint_var_,param_5,mutex_type,param_6);
        uint_var_ = 1;
      }
      system_long_variable = system_long_variable + 4;
      flags = flags - 1;
    } while (flags != 0);
  }
  return uint_var_;
}
unsigned char check_memory_status(void)
{
  uint in_EAX;
  long long system_init_result;
  long long system_long_variable;
  long long system_long_variable;
  unsigned char unaff_SIL;
  ulong long uint_var_;
  uint *system_pointer_variable;
  unsigned long long *unaff_R14;
  long long *unaff_R15;
  system_long_variable = 0;
  uint_var_ = (ulong long)in_EAX;
  do {
    system_pointer_variable = (uint *)*unaff_R14;
    system_init_result = (long long)unaff_R14[1] - (long long)system_pointer_variable >> 2;
    if (0 < system_init_result) {
      do {
        system_long_variable = system_init_result >> 1;
        if (system_pointer_variable[system_long_variable] < *(uint *)(*unaff_R15 + system_long_variable)) {
          system_pointer_variable = system_pointer_variable + system_long_variable + 1;
          system_long_variable = system_init_result + (-1 - system_long_variable);
        }
        system_init_result = system_long_variable;
      } while (0 < system_long_variable);
    }
    if ((system_pointer_variable == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + system_long_variable) < *system_pointer_variable)) {
      allocate_with_flags();
      system_allocator_002();
      unaff_SIL = 1;
    }
    system_long_variable = system_long_variable + 4;
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
  long long system_init_result;
  long long system_long_variable;
  uint uint_var_;
  ulong long uint_var_;
  ulong long uint_var_;
  long long system_long_variable;
  uint uint_var_;
  unsigned long long uint_var_;
  long long system_long_variable;
  long long system_init_result0;
  uint_var_ = 0;
  system_init_result = mutex_attr[1];
  system_long_variable = *mutex_attr;
  uint_var_ = flags[1] - *flags >> 3;
  if ((int)uint_var_ != 0) {
    system_long_variable = 0;
    uint_var_ = uint_var_ & UINT32_MAX;
    do {
      uint_var_ = 0;
      uint_var_ = (uint)(system_init_result - system_long_variable >> 3);
      if (uint_var_ != 0) {
        do {
          if (*(int *)(*(long long *)(*flags + system_long_variable) + 8) ==
              *(int *)(*(long long *)(*mutex_attr + uint_var_ * 8) + 8)) goto label_;
          uint_var_ = (int)uint_var_ + 1;
          uint_var_ = (ulong long)uint_var_;
        } while (uint_var_ < uint_var_);
      }
      system_long_variable = *(long long *)(system_long_variable + *flags);
      *(uint *)(system_long_variable + STRING_BUFFER_SIZE) = *(uint *)(system_long_variable + STRING_BUFFER_SIZE) | mutex_type;
      if (((param_5 != '\0') && (*(int *)(system_long_variable + 0x8c) == 2)) &&
         (uint_var_ = *(long long *)(system_long_variable + 0xc0) - *(long long *)(system_long_variable + 0xb8) >> 3, (int)uint_var_ != 0))
      {
        system_init_result0 = 0;
        uint_var_ = uint_var_ & UINT32_MAX;
        do {
          system_allocator_003(handle,*(unsigned long long *)(*(long long *)(system_long_variable + 0xb8) + system_init_result0),mutex_type,
                        param_5);
          system_init_result0 = system_init_result0 + 8;
          uint_var_ = uint_var_ - 1;
        } while (uint_var_ != 0);
      }
      uint_var_ = 1;
label_:
      system_long_variable = system_long_variable + 8;
      uint_var_ = uint_var_ - 1;
    } while (uint_var_ != 0);
  }
  return uint_var_;
}
unsigned char allocate_with_mutex(unsigned long long handle,unsigned long long flags,long long *mutex_attr)
{
  long long system_init_result;
  uint flags;
  ulong long in_RAX;
  ulong long uint_var_;
  long long system_long_variable;
  uint unaff_EDI;
  unsigned char in_R10B;
  long long *unaff_R13;
  uint unaff_R14D;
  ulong long uint_var_;
  long long *in_stack_00000060;
  char in_stack_00000070;
  system_long_variable = 0;
  uint_var_ = in_RAX & UINT32_MAX;
  do {
    uint_var_ = 0;
    if (unaff_EDI != 0) {
      do {
        if (*(int *)(*(long long *)(*unaff_R13 + system_long_variable) + 8) ==
            *(int *)(*(long long *)(*mutex_attr + uint_var_ * 8) + 8)) goto label_;
        flags = (int)uint_var_ + 1;
        uint_var_ = (ulong long)flags;
      } while (flags < unaff_EDI);
    }
    system_init_result = *(long long *)(system_long_variable + *unaff_R13);
    *(uint *)(system_init_result + STRING_BUFFER_SIZE) = *(uint *)(system_init_result + STRING_BUFFER_SIZE) | unaff_R14D;
    if (((in_stack_00000070 != '\0') && (*(int *)(system_init_result + 0x8c) == 2)) &&
       (uint_var_ = *(long long *)(system_init_result + 0xc0) - *(long long *)(system_init_result + 0xb8) >> 3, (int)uint_var_ != 0)) {
      uint_var_ = uint_var_ & UINT32_MAX;
      do {
        system_allocator_003();
        uint_var_ = uint_var_ - 1;
      } while (uint_var_ != 0);
    }
    in_R10B = 1;
label_:
    system_long_variable = system_long_variable + 8;
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
  long long system_long_variable;
  long long system_long_variable;
  long long system_long_variable;
  long long system_long_variable;
  unsigned long long uint_var_;
  uint *system_pointer_variable;
  uint_var_ = 0;
  uint_var_ = flags[1] - *flags >> 2;
  if ((int)uint_var_ != 0) {
    system_long_variable = 0;
    uint_var_ = uint_var_ & UINT32_MAX;
    do {
      system_pointer_variable = (uint *)*mutex_attr;
      system_long_variable = *flags;
      system_long_variable = (long long)mutex_attr[1] - (long long)system_pointer_variable >> 2;
      if (0 < system_long_variable) {
        do {
          system_long_variable = system_long_variable >> 1;
          if (system_pointer_variable[system_long_variable] < *(uint *)(system_long_variable + system_long_variable)) {
            system_pointer_variable = system_pointer_variable + system_long_variable + 1;
            system_long_variable = system_long_variable + (-1 - system_long_variable);
          }
          system_long_variable = system_long_variable;
        } while (0 < system_long_variable);
      }
      if ((system_pointer_variable == (uint *)mutex_attr[1]) || (*(uint *)(system_long_variable + system_long_variable) < *system_pointer_variable)) {
        system_long_variable = system_allocator_006(handle,*(unsigned int *)(system_long_variable + system_long_variable),mutex_type);
        uint_var_ = 1;
        *(uint *)(system_long_variable + 8) = *(uint *)(system_long_variable + 8) | param_5;
      }
      system_long_variable = system_long_variable + 4;
      uint_var_ = uint_var_ - 1;
    } while (uint_var_ != 0);
  }
  return uint_var_;
}
unsigned char validate_buffer_allocation(void)
{
  uint in_EAX;
  long long system_init_result;
  long long system_long_variable;
  long long system_long_variable;
  unsigned char unaff_SIL;
  ulong long uint_var_;
  uint *system_pointer_variable;
  unsigned long long *unaff_R14;
  long long *unaff_R15;
  uint in_stack_00000070;
  system_long_variable = 0;
  uint_var_ = (ulong long)in_EAX;
  do {
    system_pointer_variable = (uint *)*unaff_R14;
    system_init_result = (long long)unaff_R14[1] - (long long)system_pointer_variable >> 2;
    if (0 < system_init_result) {
      do {
        system_long_variable = system_init_result >> 1;
        if (system_pointer_variable[system_long_variable] < *(uint *)(*unaff_R15 + system_long_variable)) {
          system_pointer_variable = system_pointer_variable + system_long_variable + 1;
          system_long_variable = system_init_result + (-1 - system_long_variable);
        }
        system_init_result = system_long_variable;
      } while (0 < system_long_variable);
    }
    if ((system_pointer_variable == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + system_long_variable) < *system_pointer_variable)) {
      system_init_result = system_allocator_006();
      unaff_SIL = 1;
      *(uint *)(system_init_result + 8) = *(uint *)(system_init_result + 8) | in_stack_00000070;
    }
    system_long_variable = system_long_variable + 4;
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
  char_system_pointer_variable = (char *)((ulong long)uint_var_ + 0x1c0042ed);
  *char_system_pointer_variable = *char_system_pointer_variable + (char)unaff_RDI + '\x04';
  out(uint_var_,(char)uint_var_);
  char_system_pointer_variable = (char *)((ulong long)uint_var_ - 0x12);
  *char_system_pointer_variable = *char_system_pointer_variable + (char)flags;
  char_system_pointer_variable = (code *)swi(3);
  (*char_system_pointer_variable)();
  return;
}
      data_180d499e8 = 0;
      system_global_data_ = 6;
      strcpy_s(&data_180d499e8,CONFIG_PATH_BUFFER_SIZE0,&data_180a3c074,str_len_param,uint_var_);
      system_crypto_002(system_function_);
      system_crypto_003(&data_180d499c8);
    }
  }
  (**(code **)(*system_global_data_ + 0x70))(system_global_data_,&data_180d499d0);
  return;
}
unsigned int
system_finalizer_005(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *char_system_pointer_variable;
  unsigned int flags;
  unsigned long long uint_var_;
  void *system_stack_pointer;
  long long system_stack_long;
  char_system_pointer_variable = *(code **)(*system_global_data_ + 0x70);
  // Original name: system_180a02fc8
      uint_var_ = system_ui_005(&system_stack_pointer, &g_ui_mutex_property_address_180a02fc8, mutex_attr, mutex_type, 0, THREAD_POOL_DEFAULT_FLAG);
  flags = (*char_system_pointer_variable)(system_global_data_,uint_var_,mutex_attr,mutex_type,1);
  system_stack_pointer = &g_threadString2;
  if (system_stack_long != 0) {
    handle_system_error();
  }
  return flags;
}
unsigned int
system_finalizer_006(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *char_system_pointer_variable;
  unsigned int flags;
  unsigned long long uint_var_;
  void *system_stack_pointer;
  long long system_stack_long;
  char_system_pointer_variable = *(code **)(*system_global_data_ + 0x70);
  // Original name: system_180a02fa0
      uint_var_ = system_ui_005(&system_stack_pointer, &g_ui_mutex_type_address_180a02fa0, mutex_attr, mutex_type, 0, THREAD_POOL_DEFAULT_FLAG);
  flags = (*char_system_pointer_variable)(system_global_data_,uint_var_,mutex_attr,mutex_type,1);
  system_stack_pointer = &g_threadString2;
  if (system_stack_long != 0) {
    handle_system_error();
  }
  return flags;
}
unsigned int
system_finalizer_007(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *char_system_pointer_variable;
  unsigned int flags;
  unsigned long long uint_var_;
  unsigned long long uint_var_;
  void *system_stack_pointer;
  long long system_stack_long;
  uint_var_ = THREAD_POOL_DEFAULT_FLAG;
  char_system_pointer_variable = *(code **)(*system_global_data_ + 0x70);
  uint_var_ = system_cleanup_007(&system_stack_pointer);
  flags = (*char_system_pointer_variable)(system_global_data_,uint_var_,mutex_attr,mutex_type,uint_var_);
  system_stack_pointer = &g_threadString2;
  if (system_stack_long != 0) {
    handle_system_error();
  }
  return flags;
}
    data_180d49c08 = 0;
    if (handle != 0) {
      system_long_variable = -1;
      do {
        system_long_variable = system_long_variable + 1;
      } while (*(char *)(handle + system_long_variable) != '\0');
      system_global_data_ = (unsigned int)system_long_variable;
      strcpy_s(&data_180d49c08,STRING_BUFFER_SIZE0,handle);
    }
    system_crypto_002(system_function_);
    system_crypto_003(&data_180d49d08);
  }
  uint_var_ = system_function_(system_global_data_,0xe0,8,3,uint_var_);
  plStackX_10 = alStack_30;
  // Original name: system_18045f210
      system_stack_pointer = &g_stack_data_address_18045f210;
  system_stack_pointer = &system_18045f200;
  psystem_init_result = (long long *)system_function_(uint_var_,alStack_30);
  plStackX_18 = psystem_init_result;
  if (psystem_init_result != (long long *)0x0) {
    (**(code **)(*psystem_init_result + 0x28))(psystem_init_result);
  }
  uint_var_ = system_global_data_;
  pplStackX_20 = &plStackX_10;
  plStackX_10 = psystem_init_result;
  if (psystem_init_result != (long long *)0x0) {
    (**(code **)(*psystem_init_result + 0x28))(psystem_init_result);
  }
  register_event_callback(uint_var_,&plStackX_10);
  if (psystem_init_result != (long long *)0x0) {
    (**(code **)(*psystem_init_result + 0x38))(psystem_init_result);
  }
  return;
}
  data_180c95f28 = 1;
  system_global_data_ = STRING_BUFFER_SIZE0;
  system_global_data_ = &g_threadString2;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = &g_threadString2;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  data_180c92588 = 1;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_finalizer_009();
  system_init_result = 0x180c95bf8;
  system_long_variable = 0x17;
  do {
    func_0x00018013d940(system_init_result);
    system_init_result = system_init_result + STRING_BUFFER_SIZE;
    system_long_variable = system_long_variable + -1;
  } while (system_long_variable != 0);
  data_180c95bf0 = 0;
  _Mtx_init_in_situ(0x180c95d70,2,mutex_attr,mutex_type,uint_var_);
  system_global_data_ = UINT32_MAX;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0xffdc;
  data_180c95dd8 = 1;
  system_finalizer_008(&data_180c924d0);
  system_global_data_ = 3;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  network_system_initialized = 1;
  system_global_data_ = 0;
  system_global_data_ = 0;
  render_system_initialized = 1;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 3;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 3;
  audio_system_initialized = 1;
  system_function_(0x180c95de0);
  input_system_initialized = 1;
  system_global_data_ = 3;
  system_global_data_ = SYSTEM_CONFIG_BUFFER_SIZE_000000;
  system_global_data_ = 0x3f800000;
  system_global_data_ = 0;
  system_global_data_ = 1;
  system_global_data_ = &data_180be0000;
  system_global_data_ = 0;
  physics_system_initialized = 1;
  system_global_data_ = 0;
  system_global_data_ = 3;
  system_global_data_ = 0;
  thread_pool_backup_flag = 0;
  system_global_data_ = 0;
  ui_system_initialized = 1;
  system_global_data_ = 3;
  system_global_data_ = SYSTEM_CONFIG_BUFFER_SIZE_000000;
  system_global_data_ = 0x3f800000;
  system_global_data_ = 0;
  system_global_data_ = 1;
  system_global_data_ = &data_180be0000;
  system_global_data_ = 4;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 3;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  module_system_initialized = 1;
  system_global_data_ = 0;
  thread_pool_initialized = 1;
  system_global_data_ = 0;
  memory_system_initialized = 1;
  system_global_data_ = 0;
  config_system_initialized = 1;
  system_global_data_ = 0;
  resource_system_initialized = 1;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 3;
  network_system_backup_flag = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 3;
  render_system_backup_flag = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 4;
  system_global_data_ = SYSTEM_CONFIG_BUFFER_SIZE_000000;
  system_global_data_ = 0x3f800000;
  system_global_data_ = 0;
  system_global_data_ = 1;
  system_global_data_ = &data_180be0000;
  script_system_initialized = 1;
  system_global_data_ = 3;
  system_global_data_ = 0;
  system_global_data_ = 0;
  system_global_data_ = 0;
  security_system_initialized = 1;
  data_180c96098 = 1;
  system_global_data_ = 0;
  data_180c960b8 = 1;
  return;
}
    thread_system_flag = '\x01';
    system_long_variable = system_thread_manager_004(&system_stack_pointer,system_global_data_ + 0x2c0);
    system_pointer_variable = &data_18098bc73;
    if (*(void **)(system_long_variable + 8) != (void *)0x0) {
      system_pointer_variable = *(void **)(system_long_variable + 8);
    }
    (**(code **)(system_init_result + 0x330))(*(unsigned int *)(system_global_data_ + STRING_BUFFER_SIZE),system_pointer_variable);
    system_stack_pointer = &g_threadString2;
    if (system_stack_long != 0) {
      handle_system_error();
    }
    system_stack_long = 0;
    stack_var_ = 0;
    system_stack_pointer = &g_threadString4;
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
  *(float *)(system_global_data_ + CONFIG_PATH_BUFFER_SIZE0) = 1.0 / (float)(int)handle[1];
  system_stack_pointer = &g_threadString2;
  if (system_stack_pointer != (void *)0x0) {
    handle_system_error();
  }
  return;
}
unsigned long long * system_function_(unsigned long long *handle,int flags)
{
  long long *psystem_init_result;
  int int_var_;
  unsigned long long uint_var_;
  long long system_long_variable;
  int int_var_;
  unsigned long long *system_pointer_variable;
  ulong long uint_var_;
  long long system_long_variable;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  *handle = &system_180a1a2f0;
  system_long_variable = 0;
  handle[1] = 0;
  handle[2] = 0;
  handle[3] = 0;
  *(unsigned int *)(handle + 4) = 3;
  *handle = &system_180a2fc20;
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
  psystem_init_result = handle + 0x31;
  *psystem_init_result = 0;
  handle[0x32] = 0;
  handle[0x33] = 0;
  *(unsigned int *)(handle + 0x34) = 3;
  system_pointer_variable = handle + 0x35;
  system_long_variable = 8;
  system_function_(system_pointer_variable,0x28,8,&system_1804ce1a0,system_function_);
  _Mtx_init_in_situ(handle + 0x5d, STRING_BUFFER_SIZE_2);
  int_var_ = func_0x0001804ca2d0(&data_180c95fc8);
  if (flags < int_var_) {
    int_var_ = flags;
  }
  *(int *)(handle + 0x67) = int_var_;
  handle[0x11] = (long long)int_var_;
  system_function_(handle + 0xd);
  handle[0x16] = (long long)*(int *)(handle + 0x67);
  if (handle[0x12] != 0) {
    handle_system_error();
  }
  handle[0x12] = 0;
  handle[0x14] = 1;
  handle[0x13] = 0;
  handle[0x15] = 0xffffffff;
  uint_var_ = system_function_(system_global_data_,(long long)*(int *)(handle + 0x67) * 0x48,0x18);
  handle[0x12] = uint_var_;
  handle[0x1b] = (long long)*(int *)(handle + 0x67);
  if (handle[0x17] != 0) {
    handle_system_error();
  }
  handle[0x17] = 0;
  handle[0x19] = 1;
  handle[0x18] = 0;
  handle[0x1a] = 0xffffffff;
  uint_var_ = system_function_(system_global_data_,(long long)*(int *)(handle + 0x67) * 0xc0,0x18);
  handle[0x17] = uint_var_;
  handle[0x2a] = (long long)*(int *)(handle + 0x67);
  if (handle[0x26] == 0) {
    handle[0x26] = 0;
    handle[0x28] = 1;
    handle[0x27] = 0;
    handle[0x29] = 0xffffffff;
    uint_var_ = system_function_(system_global_data_,(long long)*(int *)(handle + 0x67) << 4,0x18);
    handle[0x26] = uint_var_;
    handle[CONFIG_PATH_BUFFER_SIZE] = (long long)*(int *)(handle + 0x67);
    system_function_(handle + 0x1c);
    handle[0x2f] = (long long)*(int *)(handle + 0x67);
    if (handle[0x2b] != 0) {
      handle_system_error();
    }
    handle[0x2b] = 0;
    handle[0x2d] = 1;
    handle[0x2c] = 0;
    handle[0x2e] = 0xffffffff;
    uint_var_ = system_function_(system_global_data_,(long long)*(int *)(handle + 0x67) << 4,0x18);
    handle[0x2b] = uint_var_;
    do {
      system_pointer_variable[4] = (long long)*(int *)(handle + 0x67);
      system_function_(system_pointer_variable);
      system_pointer_variable = system_pointer_variable + 5;
      system_long_variable = system_long_variable + -1;
    } while (system_long_variable != 0);
    handle[0x25] = (long long)*(int *)(handle + 0x67);
    if (handle[0x21] == 0) {
      handle[0x21] = 0;
      handle[0x23] = 1;
      handle[0x22] = 0;
      handle[0x24] = 0xffffffff;
      uint_var_ = system_function_(system_global_data_,(long long)*(int *)(handle + 0x67) * 0x88,0x18);
      handle[0x21] = uint_var_;
      uint_var_ = (ulong long)*(int *)(handle + 0x67);
      system_long_variable = *psystem_init_result;
      if ((ulong long)(handle[0x33] - system_long_variable >> 3) < uint_var_) {
        if (uint_var_ != 0) {
          system_long_variable = system_function_(system_global_data_,uint_var_ * 8,*(unsigned char *)(handle + 0x34));
          system_long_variable = *psystem_init_result;
        }
        if (system_long_variable != handle[0x32]) {
          memmove(system_long_variable,system_long_variable,handle[0x32] - system_long_variable);
        }
        if (system_long_variable != 0) {
          handle_system_error();
        }
        *psystem_init_result = system_long_variable;
        handle[0x32] = system_long_variable;
        handle[0x33] = system_long_variable + uint_var_ * 8;
      }
      int_var_ = *(int *)(system_global_data_ + 0xe00) + -1;
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
  system_function_();
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
      aplStackX_18[0] = system_global_data_;
      if (system_global_data_ != (long long *)0x0) {
        (**(code **)(*system_global_data_ + 0x28))();
      }
      uint_var_ = system_function_(uint_var_,aplStackX_18);
    }
  }
  return uint_var_;
}
    data_180d49f6c = '\0';
    system_crypto_003(&data_180d49f68);
  }
  flags = *(unsigned long long *)(*(long long *)(*(long long *)(handle + 0x8a8) + 0x260) + CONFIG_PATH_BUFFER_SIZE8);
  system_pointer_variable = (unsigned int *)system_function_(flags,0,flags);
  stack_var_ = *system_pointer_variable;
  stack_var_ = system_pointer_variable[1];
  stack_var_ = system_pointer_variable[2];
  stack_var_ = system_pointer_variable[3];
  fVar4 = *(float *)(flags + SYSTEM_CONFIG_BUFFER_SIZE_0);
  fVar5 = *(float *)(flags + SYSTEM_CONFIG_BUFFER_SIZE_4);
  fVar6 = *(float *)(flags + SYSTEM_CONFIG_BUFFER_SIZE_8);
  stack_var_ = *(unsigned int *)(flags + SYSTEM_CONFIG_BUFFER_SIZE_C);
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
  system_init_result1 = (long long)int_var_;
  fVar14 = -1e+08;
  fVar15 = -1e+08;
  fVar16 = -1e+08;
  uint_var_ = 0;
  uint_var_ = 0;
  if (-1 < int_var_) {
    stack_var_ = 0x7f7fffff;
    stack_var_ = 0x7f7fffff;
    system_init_result2 = system_init_result1 * 0x30;
    fStack_108 = fVar4;
    fStack_104 = fVar5;
    fStack_100 = fVar6;
    do {
      system_init_result0 = *(long long *)(handle + 0x850) + system_init_result2;
      cVar1 = *(char *)(system_init_result0 + 0x2c);
      system_pointer_variable = (unsigned int *)system_function_(flags,cVar1,flags);
      stack_var_ = *system_pointer_variable;
      stack_var_ = system_pointer_variable[1];
      stack_var_ = system_pointer_variable[2];
      stack_var_ = system_pointer_variable[3];
      pfVar9 = (float *)(flags + ((long long)cVar1 + SYSTEM_CONFIG_BUFFER_SIZE) * STRING_BUFFER_SIZE);
      fVar18 = *pfVar9;
      fVar13 = pfVar9[1];
      fVar14 = pfVar9[2];
      fStack_cc = pfVar9[3];
      fStack_d8 = fVar18;
      fStack_d4 = fVar13;
      fStack_d0 = fVar14;
      pfVar9 = (float *)system_function_(&stack_var_,auStack_c8,system_init_result0);
      fStack_170 = (fVar14 + pfVar9[2]) - fVar6;
      fStack_174 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_178 = (fVar18 + *pfVar9) - fVar4;
      system_function_(&stack_var_,&fStack_138,&fStack_178);
      pfVar9 = (float *)system_function_(&stack_var_,auStack_b8,system_init_result0 + STRING_BUFFER_SIZE);
      fStack_160 = (fVar14 + pfVar9[2]) - fVar6;
      fStack_164 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_168 = (fVar18 + *pfVar9) - fVar4;
      system_function_(&stack_var_,&fStack_128,&fStack_168);
      fVar14 = *(float *)(system_init_result0 + 0x24);
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
      system_init_result2 = system_init_result2 + -0x30;
      system_init_result1 = system_init_result1 + -1;
      fVar14 = fStack_198;
      fVar15 = fStack_194;
      fVar16 = fStack_190;
      uint_var_ = stack_var_;
      uint_var_ = stack_var_;
      fStack_158 = fVar18;
      fStack_154 = fVar13;
    } while (-1 < system_init_result1);
  }
  *(unsigned long long *)(handle + 0x870) = 0x4cbebc204cbebc20;
  *(unsigned long long *)(handle + 0x878) = 0x7f7fffff4cbebc20;
  *(unsigned long long *)(handle + 0x880) = 0xccbebc20ccbebc20;
  *(unsigned long long *)(handle + 0x888) = 0x7f7fffffccbebc20;
  system_init_result1 = 0;
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
    system_init_result1 = *(long long *)(*(long long *)(handle + 0x8a8) + 0x260);
  }
  *(float *)(system_init_result1 + 0x218) = fVar18;
  *(float *)(system_init_result1 + 0x21c) = fVar13;
  *(float *)(system_init_result1 + 0x220) = fStack_180;
  *(unsigned int *)(system_init_result1 + 0x224) = uint_var_;
  *(float *)(system_init_result1 + 0x228) = fVar14;
  *(float *)(system_init_result1 + 0x22c) = fVar15;
  *(float *)(system_init_result1 + 0x230) = fVar16;
  *(unsigned int *)(system_init_result1 + 0x234) = uint_var_;
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
        system_global_data_ = 8;
        strcpy_s(&data_180d49f98, SYSTEM_CONFIG_BUFFER_SIZE, &system_180a353b8);
        system_crypto_002(system_function_);
        system_crypto_003(&data_180d49f70);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(system_global_data_,&data_180d49f80);
    return;
  }
  if (-1 < handle) {
    if (handle < (int)((system_global_data_ - system_global_data_) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(system_global_data_,(long long)handle * 0x68 + system_global_data_);
      return;
    }
  }
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              0x48) < system_global_data_) {
    system_crypto_004(&data_180d49fd8);
    if (system_global_data_ == -1) {
      system_global_data_ = &g_defaultDataTemplate;
      system_global_data_ = &data_180d49ff8;
      data_180d49ff8 = 0;
      system_global_data_ = 0;
      strcpy_s(&data_180d49ff8, SYSTEM_CONFIG_BUFFER_SIZE, &data_18098bc73);
      system_crypto_002(system_function_);
      system_crypto_003(&data_180d49fd8);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(system_global_data_,&data_180d49fe0);
  return;
}
// 处理配置参数验证函数
int validate_config_parameters(unsigned long long handle,unsigned long long flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  int int_var_;
  long long system_long_variable;
  long long system_long_variable;
  void *system_pointer_variable;
  void *system_stack_pointer;
  long long system_stack_long;
  int stack_int_;
  create_thread_context(&system_stack_pointer,handle,mutex_attr,mutex_type,THREAD_POOL_DEFAULT_FLAG);
  system_long_variable = system_stack_long;
  if (stack_int_ == STRING_BUFFER_SIZE) {
    int_var_ = strcmp(system_stack_long,&g_empty_string_const);
    if (int_var_ == 0) goto label_;
    int_var_ = strcmp(system_long_variable,&g_null_string_const);
    if (int_var_ == 0) {
      int_var_ = 100;
      goto label_;
    }
    system_pointer_variable = &g_string_buffer_ptr;
label_:
    int_var_ = strcmp(system_long_variable,system_pointer_variable);
    if (int_var_ != 0) {
label_:
      int_var_ = 0;
      goto label_;
    }
  }
  else {
    if (stack_int_ == 0x15) {
      int_var_ = strcmp(system_stack_long,&system_180a389d8g_config_path_string);
      if (int_var_ == 0) {
        int_var_ = 0x30;
        goto label_;
      }
label_:
      int_var_ = strcmp(system_long_variable,&system_180a38aa8g_system_path_string);
      if (int_var_ == 0) {
        int_var_ = 0xb0;
        goto label_;
      }
label_:
      int_var_ = strcmp(system_long_variable,&system_180a38ac0g_temp_path_string);
      if (int_var_ == 0) {
        int_var_ = 0xd4;
        goto label_;
      }
label_:
      system_pointer_variable = &system_180a38ba0;
      goto label_;
    }
    if (stack_int_ == 0x1b) {
      system_pointer_variable = &system_180a38a20;
      goto label_;
    }
    if (stack_int_ == 0xd) {
      int_var_ = strcmp(system_stack_long,&system_180a38978);
      if (int_var_ == 0) {
        int_var_ = 4;
        goto label_;
      }
label_:
      system_pointer_variable = &system_180a38c98;
      goto label_;
    }
    if (stack_int_ == 0x1a) {
      int_var_ = strcmp(system_stack_long,&system_180a38958g_log_path_string);
      if (int_var_ == 0) {
        int_var_ = 0x1c;
        goto label_;
      }
label_:
      int_var_ = strcmp(system_long_variable,&system_180a38c08);
      if (int_var_ == 0) {
        int_var_ = 0x18;
        goto label_;
      }
label_:
      int_var_ = strcmp(system_long_variable,&system_180a38ea0);
      if (int_var_ == 0) {
        int_var_ = 0x554;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == CONFIG_PATH_BUFFER_SIZE) {
      int_var_ = strcmp(system_stack_long,&system_180a389b0g_save_path_string);
      if (int_var_ == 0) {
        int_var_ = 0x30;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == 0x24) {
      int_var_ = strcmp(system_stack_long,&system_180a38988);
      if (int_var_ == 0) {
        int_var_ = 0x12;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == 0x15) goto label_;
    if (stack_int_ == 0x1f) {
      int_var_ = strcmp(system_stack_long,&system_180a38a88g_data_path_string);
      if (int_var_ == 0) {
        int_var_ = 0x48;
        goto label_;
      }
label_:
      int_var_ = strcmp(system_long_variable,&system_180a38d38);
      if (int_var_ == 0) {
        int_var_ = 1;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == 10) {
      int_var_ = strcmp(system_stack_long,&system_180a38ad8);
      if (int_var_ == 0) {
        int_var_ = 8;
        goto label_;
      }
label_:
      int_var_ = strcmp(system_long_variable,&system_180a38a78);
      if (int_var_ == 0) {
        int_var_ = 4;
        goto label_;
      }
label_:
      system_pointer_variable = &system_180a38ec0;
      goto label_;
    }
    if (stack_int_ == 0x15) goto label_;
    if (stack_int_ == 0x16) {
      int_var_ = strcmp(system_stack_long,&system_180a38a48);
      if (int_var_ == 0) {
        int_var_ = 0x14;
        goto label_;
      }
label_:
      int_var_ = strcmp(system_long_variable,&system_180a38b48);
      if (int_var_ == 0) {
        int_var_ = 0x568;
        goto label_;
      }
      int_var_ = strcmp(system_long_variable,&system_180a38c40);
      if (int_var_ == 0) {
        int_var_ = STRING_BUFFER_SIZE;
        goto label_;
      }
      int_var_ = strcmp(system_long_variable,&system_180a38ca8);
      if (int_var_ == 0) {
        int_var_ = 0x28;
        goto label_;
      }
      int_var_ = strcmp(system_long_variable,&system_180a38e38);
      if (int_var_ == 0) {
        int_var_ = SYSTEM_CONFIG_BUFFER_SIZE;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ == 4) {
      system_long_variable = 0;
      do {
        system_long_variable = system_long_variable + 1;
        if (*(char *)(system_stack_long + system_long_variable) != (&system_180a38a3c)[system_long_variable]) goto label_;
        system_long_variable = system_long_variable;
      } while (system_long_variable != 5);
      int_var_ = 200;
      goto label_;
    }
    if (stack_int_ == 10) goto label_;
    if (stack_int_ == 0x12) {
      int_var_ = strcmp(system_stack_long,&system_180a38a60);
      if (int_var_ == 0) {
        int_var_ = 0x58;
        goto label_;
      }
      goto label_;
    }
    if (stack_int_ != 0x13) {
      if (stack_int_ == 0x17) {
        int_var_ = strcmp(system_stack_long,&system_180a38bb8);
        if (int_var_ == 0) {
          int_var_ = 1;
          goto label_;
        }
label_:
        system_pointer_variable = &system_180a38e78;
label_:
        int_var_ = strcmp(system_long_variable,system_pointer_variable);
        if (int_var_ == 0) {
label_:
          int_var_ = 0xc;
          goto label_;
        }
      }
      else {
        if (stack_int_ == 0x15) goto label_;
        if (stack_int_ == 0x26) {
          int_var_ = strcmp(system_stack_long,&system_180a38b20);
          if (int_var_ == 0) {
            int_var_ = 0xa8;
            goto label_;
          }
        }
        else if (stack_int_ == 0x34) {
          int_var_ = strcmp(system_stack_long,&system_180a38ae8);
          if (int_var_ == 0) {
            int_var_ = 0x14;
            goto label_;
          }
        }
        else {
          if (stack_int_ != 0xf) {
            if (stack_int_ == 0x16) goto label_;
            if (stack_int_ == 0x18) {
              int_var_ = strcmp(system_stack_long,&system_180a38c78);
              if ((int_var_ == 0) || (int_var_ = strcmp(system_long_variable,&system_180a38c58), int_var_ == 0))
              goto label_;
              int_var_ = strcmp(system_long_variable,&system_180a38be8);
              if (int_var_ != 0) {
                system_pointer_variable = &system_180a38d98;
                goto label_;
              }
              goto label_;
            }
            if (stack_int_ == 7) {
              system_long_variable = 0;
              do {
                system_long_variable = system_long_variable;
                if (*(char *)(system_stack_long + system_long_variable) != (&system_180a38be0)[system_long_variable]) goto label_;
                system_long_variable = system_long_variable + 1;
              } while (system_long_variable + 1 != 8);
              int_var_ = (int)system_long_variable + -6;
              goto label_;
            }
            if (stack_int_ == 0xc) {
              int_var_ = strcmp(system_stack_long,&system_180a38bd0);
              if (int_var_ == 0) {
                int_var_ = 0x68;
                goto label_;
              }
label_:
              int_var_ = strcmp(system_long_variable,&system_180a38e50);
              if (int_var_ == 0) {
                int_var_ = 4;
                goto label_;
              }
              int_var_ = strcmp(system_long_variable,&system_180a38f30);
              if (int_var_ == 0) {
                int_var_ = 8;
                goto label_;
              }
              goto label_;
            }
            if (stack_int_ == 0x1a) goto label_;
            if (stack_int_ == 3) {
              int_var_ = 4;
              system_long_variable = 0;
              do {
                system_long_variable = system_long_variable + 1;
                if (*(char *)(system_stack_long + system_long_variable) != (&system_180a29944)[system_long_variable]) goto label_;
                system_long_variable = system_long_variable;
              } while (system_long_variable != 4);
              goto label_;
            }
            if (stack_int_ == 0xf) goto label_;
            if (stack_int_ == 0x23) {
              int_var_ = strcmp(system_stack_long,&system_180a38d58);
              if (int_var_ == 0) {
                int_var_ = 0x28;
                goto label_;
              }
label_:
              int_var_ = strcmp(system_long_variable,&system_180a38cc0);
              if (int_var_ == 0) {
                int_var_ = 0x18;
                goto label_;
              }
              goto label_;
            }
            if (stack_int_ == 0x1f) goto label_;
            if (stack_int_ == 0xd) goto label_;
            if (stack_int_ == 0x21) {
              system_pointer_variable = &system_180a38ce8;
              goto label_;
            }
            if (stack_int_ == 0x23) goto label_;
            if (stack_int_ == 0xf) goto label_;
            if (stack_int_ == 0xb) {
              int_var_ = strcmp(system_stack_long,&system_180a38dd8);
              if (int_var_ == 0) {
                int_var_ = 0x248;
                goto label_;
              }
label_:
              int_var_ = strcmp(system_long_variable,&system_180a38dc8);
              if (int_var_ == 0) {
                int_var_ = 4;
                goto label_;
              }
label_:
              int_var_ = strcmp(system_long_variable,&system_180a38e90);
              if (int_var_ == 0) {
                int_var_ = 4;
                goto label_;
              }
            }
            else {
              if (stack_int_ == 0x11) {
                int_var_ = strcmp(system_stack_long,&system_180a38e10);
                if (int_var_ == 0) goto label_;
                int_var_ = strcmp(system_long_variable,&system_180a38df8);
                if (int_var_ == 0) {
                  int_var_ = 0xa0;
                  goto label_;
                }
                system_pointer_variable = &system_180a38d80;
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
                system_pointer_variable = &system_180a38f10;
                goto label_;
              }
            }
            system_pointer_variable = &system_180a38e28;
            goto label_;
          }
          int_var_ = strcmp(system_stack_long,&system_180a38b60);
          if (int_var_ == 0) {
            int_var_ = 0x214;
            goto label_;
          }
label_:
          int_var_ = strcmp(system_long_variable,&system_180a38d10);
          if (int_var_ == 0) {
            int_var_ = CONFIG_PATH_BUFFER_SIZE28;
            goto label_;
          }
label_:
          int_var_ = strcmp(system_long_variable,&system_180a38de8);
          if (int_var_ == 0) {
            int_var_ = 4;
            goto label_;
          }
label_:
          int_var_ = strcmp(system_long_variable,&system_180a38db8);
          if (int_var_ == 0) {
            int_var_ = 0x50;
            goto label_;
          }
        }
      }
      goto label_;
    }
    int_var_ = strcmp(system_stack_long,&system_180a38b88);
    if (int_var_ == 0) {
      int_var_ = 1;
      goto label_;
    }
    int_var_ = strcmp(system_long_variable,&system_180a38b70);
    if (int_var_ == 0) {
      int_var_ = 3;
      goto label_;
    }
    int_var_ = strcmp(system_long_variable,&system_180a38d20);
    if (int_var_ != 0) {
      system_pointer_variable = &system_180a38e60;
      goto label_;
    }
  }
label_:
  int_var_ = 4;
label_:
  system_stack_pointer = &g_threadString2;
  if (system_stack_long == 0) {
    return int_var_;
  }
  handle_system_error();
}
unsigned long long
system_function_(unsigned long long handle,unsigned long long flags,unsigned char mutex_attr,unsigned long long mutex_type)
{
  char cVar1;
  void *pflags;
  unsigned long long uint_var_;
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [40];
  create_thread_context(auStack_30,handle,mutex_attr,mutex_type,THREAD_POOL_DEFAULT_FLAG);
  create_thread_context(auStack_50,flags);
  cVar1 = validate_handle_parameters(auStack_30,&system_180a389d8g_config_path_string,1);
  if (cVar1 == '\0') {
    cVar1 = validate_handle_parameters(auStack_30,&system_180a38a08,1);
    if (cVar1 == '\0') {
      cVar1 = validate_handle_parameters(auStack_30,&system_180a38958g_log_path_string,1);
      if (cVar1 == '\0') {
        cVar1 = validate_handle_parameters(auStack_30,&system_180a389b0g_save_path_string,1);
        if (cVar1 == '\0') {
          cVar1 = validate_handle_parameters(auStack_30,&system_180a38988,1);
          if (cVar1 == '\0') {
            cVar1 = validate_handle_parameters(auStack_30,&system_180a38aa8g_system_path_string,1);
            if (cVar1 == '\0') {
              cVar1 = validate_handle_parameters(auStack_30,&system_180a38a88g_data_path_string,1);
              if (cVar1 == '\0') {
                cVar1 = validate_handle_parameters(auStack_30,&system_180a38ac0g_temp_path_string,1);
                if (cVar1 == '\0') {
                  cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38a48);
                  if (cVar1 == '\0') {
                    cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38a3c);
                    if (cVar1 == '\0') {
                      cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38a60);
                      if (cVar1 == '\0') {
                        cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38b70);
                        if (cVar1 == '\0') {
                          cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38b20);
                          if (cVar1 == '\0') {
                            cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38ae8);
                            if (cVar1 == '\0') {
                              cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38b60);
                              if (cVar1 == '\0') {
                                cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38b48);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38c40);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38c78);
                                    if (cVar1 == '\0') {
                                      cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38c58);
                                      if (cVar1 == '\0') {
                                        cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38bd0);
                                        if (cVar1 == '\0') {
                                          cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38c08);
                                          if (cVar1 == '\0') {
                                            cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a29944);
                                            if (cVar1 == '\0') {
                                              cVar1 = func_0x0001800a1eb0(auStack_30,&system_180a38d10)
                                              ;
                                              if (cVar1 == '\0') {
                                                cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                            &system_180a38d58);
                                                if (cVar1 == '\0') {
                                                  cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                              &system_180a38ca8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                &system_180a38ce8);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &system_180a38cc0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &system_180a38dd8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                    &system_180a38df8);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                      &system_180a38db8
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                        &
                                                  system_180a38e78);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                &system_180a38ea0);
                                                    if (cVar1 != '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ac00);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3acf8);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3acd8);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ad30);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &data_180a06a48);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ad18);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ac90);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ac80);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3acc8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x21c;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3aca8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x41c;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ade8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x41d;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3add0);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x420;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ae18);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x424;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ae00);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x428;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ad88);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x430;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a29da8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x438;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ad60);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x439;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3adb8);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x43c;
                                                          goto label_;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ada0);
                                                        if (cVar1 != '\0') {
                                                          uint_var_ = 0x440;
                                                          goto label_;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3abe0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a1029c);
                                                      if (cVar1 == '\0') {
                                                        pflags = &system_180a3ac10;
                                                        goto label_;
                                                      }
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3ac48);
                                                    if (cVar1 == '\0') {
                                                      pflags = &system_180a3abe8;
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a960);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab28);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a39f78);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab18);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a39fb0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab50);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab38);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 100;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aae8);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aad8);
                                                      if (cVar1 != '\0') {
label_:
                                                        uint_var_ = 0x6c;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab08);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aaf8);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x74;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3abb0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aba0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3abd0);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3abc0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x84;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab70);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab60);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab90);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab80);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ac30);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x96;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ac18);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ac68);
                                                      if (cVar1 != '\0') goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a8b0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a850);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a830);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a870);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a860);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a04be8);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a938);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a920);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a960);
                                                      if (cVar1 != '\0') goto label_;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a948);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0xf8;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a8f0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0xfc;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a8d8);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = STRING_BUFFER_SIZE0;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a910);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x110;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a900);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x114;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9d8);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x118;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9c8);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x11c;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9f0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x11e;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9e0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x120;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a988);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x130;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a2a000);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x170;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a21a30);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x174;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a970);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x178;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9b0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x188;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a998);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x198;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa98);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x19c;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa70);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x1a0;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aac0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x220;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aab0);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x230;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa20);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x234;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa08);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x238;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa50);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x23c;
                                                        goto label_;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa38);
                                                      if (cVar1 != '\0') {
                                                        uint_var_ = 0x240;
                                                        goto label_;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a650);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a640);
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
                                                                                &system_180a3a800);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a7a8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3a798);
                                                        if (cVar1 != '\0') goto label_;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3a7d0);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &system_180a3a7b8
                                                                                     );
                                                          if (cVar1 != '\0') goto label_;
                                                          cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &system_180a3a898
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                        &
                                                  system_180a3a880);
                                                  if (cVar1 != '\0') goto label_;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a8c0);
                                                  if (cVar1 != '\0') goto label_;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &data_180a0ba58);
                                                  if (cVar1 != '\0') goto label_;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a5a8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a2e2bc);
                                                    if (cVar1 != '\0') goto label_;
                                                    pflags = &system_180a2e9e0;
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
                                                                              &system_180a3a720);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a754);
                                                    if (cVar1 != '\0') goto label_;
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a748);
                                                    if (cVar1 != '\0') {
label_:
                                                      uint_var_ = 0xc;
                                                      goto label_;
                                                    }
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a7f0);
                                                    if (cVar1 != '\0') {
label_:
                                                      uint_var_ = 0x14;
                                                      goto label_;
                                                    }
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a7e0);
                                                    if (cVar1 != '\0') {
label_:
                                                      uint_var_ = 0x1c;
                                                      goto label_;
                                                    }
                                                    pflags = &system_180a3a820;
label_:
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                                                    if (cVar1 != '\0') goto label_;
                                                  }
                                                }
                                              }
                                              else {
                                                cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                            &system_180a1a470);
                                                if (cVar1 == '\0') {
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a758);
                                                  if (cVar1 != '\0') {
                                                    uint_var_ = CONFIG_PATH_BUFFER_SIZE00;
                                                    goto label_;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a788);
                                                  if (cVar1 != '\0') {
                                                    uint_var_ = CONFIG_PATH_BUFFER_SIZE10;
                                                    goto label_;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a778);
                                                  if (cVar1 != '\0') {
                                                    uint_var_ = CONFIG_PATH_BUFFER_SIZE20;
                                                    goto label_;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a738);
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
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a650);
                                            if (cVar1 == '\0') {
                                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a640)
                                              ;
                                              if (cVar1 == '\0') {
                                                pflags = &system_180a3a5c0;
                                                goto label_;
                                              }
                                              goto label_;
                                            }
                                          }
                                        }
                                        else {
                                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a6c0);
                                          if (cVar1 == '\0') {
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a708);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a6f8);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ee0);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x24;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39e48);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39dd0);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x2c;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39df0);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39fb0);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x34;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a670);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a660);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x3c;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a6a0);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x50;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a688);
                                            if (cVar1 != '\0') goto label_;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39d58);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x5c;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f18);
                                            if (cVar1 != '\0') {
label_:
                                              uint_var_ = 0x60;
                                              goto label_;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a768);
                                            if (cVar1 != '\0') {
                                              uint_var_ = 0x61;
                                              goto label_;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a650);
                                        if (cVar1 == '\0') {
                                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a640);
                                          if (cVar1 == '\0') {
label_:
                                            pflags = &system_180a3a5c0;
                                            goto label_;
                                          }
                                          goto label_;
                                        }
                                      }
                                    }
                                    else {
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a600);
                                      if (cVar1 == '\0') {
                                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a5e0);
                                        if (cVar1 != '\0') goto label_;
                                        pflags = &system_180a3a6e0;
label_:
                                        cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                                        if (cVar1 != '\0') goto label_;
                                      }
                                    }
                                  }
                                  else {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a650);
                                    if (cVar1 == '\0') {
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a640);
                                      if (cVar1 != '\0') goto label_;
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a5d0);
                                      if (cVar1 != '\0') goto label_;
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a5c0);
                                      if (cVar1 != '\0') goto label_;
                                    }
                                  }
                                }
                                else {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a2f8);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a2e8);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a310);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a300);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a418);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a408);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a440);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a428);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a3d0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a3c0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a3f8);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a3e8);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a4c0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a4a8);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a4e0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a4d0);
                                    if (cVar1 != '\0') goto label_;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a468);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x53c;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a458);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x540;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a498);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x544;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a478);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x548;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a560);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x54c;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a540);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x550;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a5a8);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x554;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a580);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x558;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a508);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x55c;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a4f8);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x560;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a530);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x564;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a520);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x565;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a630);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x566;
                                      goto label_;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a620);
                                    if (cVar1 != '\0') {
                                      uint_var_ = 0x567;
                                      goto label_;
                                    }
                                  }
                                }
                              }
                              else {
                                cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a2e1d8);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a2e1e8);
                                  if (cVar1 != '\0') goto label_;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a2e158);
                                  if (cVar1 != '\0') goto label_;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a2e150);
                                  if (cVar1 != '\0') goto label_;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a0696c);
                                  if (cVar1 != '\0') goto label_;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a0ae28);
                                  if (cVar1 != '\0') goto label_;
                                }
                              }
                            }
                            else {
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a260);
                              if (cVar1 == '\0') {
                                cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a348);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a320);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a398);
                                    if (cVar1 == '\0') {
                                      pflags = &system_180a3a370;
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
                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a068);
                            if (cVar1 == '\0') {
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a058);
                              if (cVar1 != '\0') {
label_:
                                uint_var_ = 4;
                                goto label_;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39fe0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39fc0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a018);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ff8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a118);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a0f0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a158);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a140);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a098);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a078);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a0d0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a0b8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a1e8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a1c8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a220);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a208);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a188);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a178);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a1b8);
                              if (cVar1 != '\0') {
label_:
                                uint_var_ = 0x70;
                                goto label_;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a1a8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a2b0);
                              if (cVar1 != '\0') {
label_:
                                uint_var_ = 0x80;
                                goto label_;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a298);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a2d8);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a2c0);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a250);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a240);
                              if (cVar1 != '\0') goto label_;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a278);
                              if (cVar1 != '\0') goto label_;
                            }
                          }
                        }
                        else {
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f50);
                          if (cVar1 == '\0') {
                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a048);
                            if (cVar1 != '\0') goto label_;
                            cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a3a038);
                            if (cVar1 != '\0') goto label_;
                          }
                        }
                      }
                      else {
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39e78);
                        if (cVar1 == '\0') {
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39eb8);
                          if (cVar1 != '\0') goto label_;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ea8);
                          if (cVar1 != '\0') goto label_;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f88);
                          if (cVar1 != '\0') goto label_;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f78);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 0x38;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39fb0);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = SYSTEM_CONFIG_BUFFER_SIZE;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f98);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 0x44;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f28);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 0x48;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a1029c);
                          if (cVar1 != '\0') {
label_:
                            uint_var_ = 0x4c;
                            goto label_;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f18);
                          if (cVar1 != '\0') goto label_;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f60);
                          if (cVar1 != '\0') {
                            uint_var_ = 0x51;
                            goto label_;
                          }
                        }
                      }
                    }
                    else {
                      cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39d98);
                      if (cVar1 == '\0') {
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39dc0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x58;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a35198);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x68;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39db0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x78;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39d58);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x88;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39d40);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x8c;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39d88);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x90;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39d70);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x94;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39e30);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x98;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39e18);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0x9c;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39e58);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xa0;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a34948);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xa4;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39e48);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xa8;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39de0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xac;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39dd0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xb0;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39e08);
                        if (cVar1 != '\0') {
                          uint_var_ = 0xb4;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39df0);
                        if (cVar1 != '\0') {
                          uint_var_ = 0xb5;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ee0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xb8;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ed0);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xbc;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39f00);
                        if (cVar1 != '\0') {
                          uint_var_ = 0xbd;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ef0);
                        if (cVar1 != '\0') {
                          uint_var_ = 0xbe;
                          goto label_;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39e90);
                        if (cVar1 != '\0') {
label_:
                          uint_var_ = 0xc0;
                          goto label_;
                        }
                      }
                    }
                  }
                  else {
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39cd0);
                    if (cVar1 == '\0') {
                      cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ccc);
                      if (cVar1 != '\0') goto label_;
                      cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39cd8);
                      if (cVar1 != '\0') goto label_;
                      cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39cd4);
                      if (cVar1 != '\0') goto label_;
                      pflags = &system_180a39da8;
label_:
                      cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                      if (cVar1 != '\0') goto label_;
                    }
                  }
                }
                else {
                  cVar1 = validate_handle_parameters(auStack_50,&system_180a39920,1);
                  if (cVar1 == '\0') {
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39988);
                    if (cVar1 != '\0') {
label_:
                      uint_var_ = 1;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39970);
                    if (cVar1 != '\0') {
label_:
                      uint_var_ = 2;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a398d8);
                    if (cVar1 != '\0') {
                      uint_var_ = 3;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a398b8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39910);
                    if (cVar1 != '\0') {
                      uint_var_ = 5;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a398f0);
                    if (cVar1 != '\0') {
                      uint_var_ = 6;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39a28);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39a18);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39a60);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39a40);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a399c0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a399a8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a399f0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a399e0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39af0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ad8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39b18);
                    if (cVar1 != '\0') {
                      uint_var_ = 0x1d;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39b00);
                    if (cVar1 != '\0') {
                      uint_var_ = 0x1e;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39a88);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39a70);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ab8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39aa0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ba0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39b88);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39bd8);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39bc0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39b48);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39b30);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39b78);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39b68);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39c80);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39c60);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39cb8);
                    if (cVar1 != '\0') {
label_:
                      uint_var_ = 0x7c;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39c98);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39c10);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39bf0);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39c50);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39c30);
                    if (cVar1 != '\0') goto label_;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39cf8);
                    if (cVar1 != '\0') {
                      uint_var_ = 0xc4;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39ce0);
                    if (cVar1 != '\0') {
                      uint_var_ = 200;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39d28);
                    if (cVar1 != '\0') {
                      uint_var_ = 0xcc;
                      goto label_;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&system_180a39d10);
                    if (cVar1 != '\0') {
                      uint_var_ = 0xd0;
                      goto label_;
                    }
                  }
                }
              }
              else {
                cVar1 = validate_handle_parameters(auStack_50,&system_180a39888,1);
                if (cVar1 == '\0') {
                  cVar1 = validate_handle_parameters(auStack_50,&system_180a397f8,1);
                  if (cVar1 != '\0') {
label_:
                    uint_var_ = STRING_BUFFER_SIZE;
                    goto label_;
                  }
                  cVar1 = validate_handle_parameters(auStack_50,&system_180a397e8,1);
                  if (cVar1 != '\0') {
label_:
                    uint_var_ = CONFIG_PATH_BUFFER_SIZE;
                    goto label_;
                  }
                  cVar1 = validate_handle_parameters(auStack_50,&system_180a39850,1);
                  if (cVar1 != '\0') goto label_;
                  cVar1 = validate_handle_parameters(auStack_50,&system_180a39820,1);
                  if (cVar1 != '\0') {
label_:
                    uint_var_ = 0x30;
                    goto label_;
                  }
                  cVar1 = validate_handle_parameters(auStack_50,&system_180a39940,1);
                  if (cVar1 != '\0') {
                    uint_var_ = 0x31;
                    goto label_;
                  }
                  cVar1 = validate_handle_parameters(auStack_50,&system_180a19c8c,1);
                  if (cVar1 != '\0') {
                    uint_var_ = 0x32;
                    goto label_;
                  }
                }
              }
            }
            else {
              cVar1 = validate_handle_parameters(auStack_50,&system_180a397d8,1);
              if (cVar1 == '\0') {
                cVar1 = validate_handle_parameters(auStack_50,&system_180a397c8,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&system_180a39740,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&system_180a39728,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&system_180a39768,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&system_180a39758,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&system_180a39870,1);
                if (cVar1 != '\0') goto label_;
                cVar1 = validate_handle_parameters(auStack_50,&system_180a19c8c,1);
                if (cVar1 != '\0') {
label_:
                  uint_var_ = 0x19;
                  goto label_;
                }
                cVar1 = validate_handle_parameters(auStack_50,&system_180a39864,1);
                if (cVar1 != '\0') {
                  uint_var_ = 0x35;
                  goto label_;
                }
                cVar1 = validate_handle_parameters(auStack_50,&system_180a398a8,1);
                if (cVar1 != '\0') goto label_;
              }
            }
          }
          else {
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39568,1);
            if (cVar1 == '\0') {
              cVar1 = validate_handle_parameters(auStack_50,&system_180a39538,1);
              if (cVar1 != '\0') {
label_:
                uint_var_ = 7;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&system_180a396c8,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&system_180a396b0,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&system_180a39710,1);
              if (cVar1 != '\0') {
label_:
                uint_var_ = 10;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&system_180a396f0,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&system_180a39640,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&system_180a39628,1);
              if (cVar1 != '\0') {
                uint_var_ = 0xd;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&system_180a39688,1);
              if (cVar1 != '\0') {
                uint_var_ = 0xe;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&system_180a39660,1);
              if (cVar1 != '\0') {
                uint_var_ = 0xf;
                goto label_;
              }
              cVar1 = validate_handle_parameters(auStack_50,&system_180a397a8,1);
              if (cVar1 != '\0') goto label_;
              cVar1 = validate_handle_parameters(auStack_50,&system_180a39788,1);
              if (cVar1 != '\0') goto label_;
            }
          }
        }
        else {
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39270,1);
          if (cVar1 == '\0') {
            cVar1 = validate_handle_parameters(auStack_50,&system_180a393a8,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39390,1);
            if (cVar1 != '\0') {
label_:
              uint_var_ = 9;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a393f0,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&system_180a393d0,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39348,1);
            if (cVar1 != '\0') {
label_:
              uint_var_ = 0x17;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39328,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39378,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39360,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x21;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a394a0,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x22;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39480,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x23;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a394e0,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&system_180a394b8,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x25;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39428,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x26;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39408,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x27;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39468,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39450,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x29;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a395c0,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2a;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39598,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2b;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39600,1);
            if (cVar1 != '\0') goto label_;
            cVar1 = validate_handle_parameters(auStack_50,&system_180a395e0,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2d;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39518,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2e;
              goto label_;
            }
            cVar1 = validate_handle_parameters(auStack_50,&system_180a39500,1);
            if (cVar1 != '\0') {
              uint_var_ = 0x2f;
              goto label_;
            }
          }
        }
      }
      else {
        cVar1 = validate_handle_parameters(auStack_50,&system_180a391b8,1);
        if (cVar1 == '\0') {
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39188,1);
          if (cVar1 != '\0') {
label_:
            uint_var_ = 0xb;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39210,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&system_180a391e8,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39128,1);
          if (cVar1 != '\0') {
label_:
            uint_var_ = 0x11;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39110,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x12;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39170,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x13;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39148,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&system_180a392d0,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x15;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&system_180a392b8,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x16;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39308,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&system_180a392e8,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39250,1);
          if (cVar1 != '\0') goto label_;
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39230,1);
          if (cVar1 != '\0') {
label_:
            uint_var_ = 0x1a;
            goto label_;
          }
          cVar1 = validate_handle_parameters(auStack_50,&system_180a39298,1);
          if (cVar1 != '\0') {
            uint_var_ = 0x1b;
            goto label_;
          }
        }
      }
    }
    else {
      cVar1 = validate_handle_parameters(auStack_50,&system_180a38ef0,1);
      if (cVar1 == '\0') {
        cVar1 = validate_handle_parameters(auStack_50,&system_180a38fd8,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a1029c,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a38fc0,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a39008,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a38ff0,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a38f78,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a38f60,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a38fa8,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a38f90,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a390b8,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a39090,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a390f0,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a390d0,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a39030,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a34c20,1);
        if (cVar1 != '\0') {
          uint_var_ = 0x54;
          goto label_;
        }
        cVar1 = validate_handle_parameters(auStack_50,&system_180a39020,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a39078,1);
        if (cVar1 != '\0') goto label_;
        cVar1 = validate_handle_parameters(auStack_50,&system_180a39058,1);
        if (cVar1 != '\0') goto label_;
      }
    }
  }
  else {
    cVar1 = validate_handle_parameters(auStack_50,&system_180a0ee38,1);
    if (cVar1 == '\0') {
      cVar1 = validate_handle_parameters(auStack_50,&system_180a38f50,1);
      if (cVar1 != '\0') {
label_:
        uint_var_ = 8;
        goto label_;
      }
      cVar1 = validate_handle_parameters(auStack_50,&system_180a38f40,1);
      if (cVar1 != '\0') goto label_;
      cVar1 = validate_handle_parameters(auStack_50,&system_180a38ee0,1);
      if (cVar1 != '\0') {
label_:
        uint_var_ = 0x18;
        goto label_;
      }
      cVar1 = validate_handle_parameters(auStack_50,&system_180a38ed0,1);
      if (cVar1 != '\0') goto label_;
      cVar1 = validate_handle_parameters(auStack_50,&system_180a38f00,1);
      if (cVar1 != '\0') {
label_:
        uint_var_ = 0x28;
        goto label_;
      }
    }
  }
  uint_var_ = 0;
label_:
  system_function_(auStack_50);
  system_function_(auStack_30);
  return uint_var_;
}
  data_180bf66d8 = 0;
  system_crypto_002(system_function_);
  system_function_(&system_18064ffc0);
  system_long_variable = 0;
  system_global_data_ = system_function_;
  pflags = (unsigned int *)&data_180bfbd80;
  system_long_variable = 0x16;
  do {
    if (pflags[1] == 0) {
      system_function_(pflags);
    }
    if (system_long_variable != 2) {
      system_function_(&system_180a3db60,*(unsigned long long *)(pflags + 4),*pflags);
    }
    system_long_variable = system_long_variable + 1;
    pflags = pflags + 6;
    system_long_variable = system_long_variable + -1;
  } while (system_long_variable != 0);
  if (system_global_data_ == 0) {
    system_function_(&data_180bfbf60);
  }
  system_global_data_ = (long long)system_global_data_;
  if (system_global_data_ == 0) {
    system_function_(&data_180bfbf78);
  }
  system_global_data_ = (long long)system_global_data_;
  system_function_();
  if (data_180c8efc8 != '\0') {
    system_function_(&system_180a3d970);
  }
  return;
}
double calculate_system_performance(void)
{
  long long system_init_result;
  long long alStackX_8 [4];
  system_init_result = system_global_data_;
  if (system_global_data_ == 0) {
    QueryPerformanceCounter(alStackX_8);
    system_init_result = alStackX_8[0];
  }
  return (double)(system_init_result - system_global_data_) * system_global_data_;
}
bool validate_handle_parameters(long long handle,long long flags,char mutex_attr)
{
  char cVar1;
  char cVar2;
  int int_var_;
  long long system_long_variable;
  char *char_system_pointer_variable;
  system_long_variable = -1;
  do {
    system_long_variable = system_long_variable + 1;
  } while (*(char *)(flags + system_long_variable) != '\0');
  int_var_ = *(int *)(handle + STRING_BUFFER_SIZE);
  if (int_var_ == (int)system_long_variable) {
    if (int_var_ != 0) {
      char_system_pointer_variable = *(char **)(handle + 8);
      if (mutex_attr == '\0') {
        int_var_ = _stricmp(char_system_pointer_variable,flags);
        return int_var_ == 0;
      }
      flags = flags - (long long)char_system_pointer_variable;
      do {
        cVar1 = *char_system_pointer_variable;
        cVar2 = char_system_pointer_variable[flags];
        if (cVar1 != cVar2) break;
        char_system_pointer_variable = char_system_pointer_variable + 1;
      } while (cVar2 != '\0');
      return cVar1 == cVar2;
    }
  }
  else if (int_var_ != 0) {
    return false;
  }
  if ((int)system_long_variable != 0) {
    return false;
  }
  return true;
}
// 查找字符串在句柄中的位置
int find_string_index_in_array(long long handle)
{
  int int_var_;
  long long system_long_variable;
  int int_var_;
  ulong long uint_var_;
  long long system_long_variable;
  void *system_stack_pointer;
  long long system_stack_long;
  int stack_int_;
  create_thread_context(&system_stack_pointer);
  int_var_ = (*(int *)(handle + STRING_BUFFER_SIZE) - stack_int_) + 1;
  int_var_ = 0;
  if (0 < int_var_) {
    system_long_variable = 0;
    do {
      uint_var_ = 0;
      system_long_variable = 0;
      if (0 < stack_int_) {
        do {
          if (*(char *)(*(long long *)(handle + 8) + system_long_variable + system_long_variable) != *(char *)(uint_var_ + system_stack_long))
          break;
          uint_var_ = (ulong long)((int)uint_var_ + 1);
          system_long_variable = system_long_variable + 1;
        } while (system_long_variable < stack_int_);
      }
      if ((int)uint_var_ == stack_int_) goto label_;
      int_var_ = int_var_ + 1;
      system_long_variable = system_long_variable + 1;
    } while (system_long_variable < int_var_);
  }
  int_var_ = -1;
label_:
  system_stack_pointer = &g_threadString2;
  if (system_stack_long != 0) {
    handle_system_error();
  }
  return int_var_;
}
// 处理句柄和标志位
int process_handle_parameters(long long handle,long long flags)
{
  int int_var_;
  long long system_long_variable;
  int int_var_;
  long long system_long_variable;
  ulong long uint_var_;
  int_var_ = *(int *)(flags + STRING_BUFFER_SIZE);
  int_var_ = *(int *)(handle + STRING_BUFFER_SIZE) - int_var_;
  if (-1 < int_var_) {
    system_long_variable = (long long)int_var_;
    do {
      uint_var_ = 0;
      system_long_variable = 0;
      if (0 < int_var_) {
        do {
          if (*(char *)(*(long long *)(handle + 8) + system_long_variable + system_long_variable) !=
              *(char *)(uint_var_ + *(long long *)(flags + 8))) break;
          uint_var_ = (ulong long)((int)uint_var_ + 1);
          system_long_variable = system_long_variable + 1;
        } while (system_long_variable < int_var_);
      }
      if ((int)uint_var_ == int_var_) {
        return int_var_;
      }
      int_var_ = int_var_ + -1;
      system_long_variable = system_long_variable + -1;
    } while (-1 < system_long_variable);
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
  system_thread_manager_001(flags,int_var_ + 1,mutex_attr,mutex_type,1,THREAD_POOL_DEFAULT_FLAG);
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
  system_stack_pointer = &g_threadString2;
  stack_var_ = 0;
  system_stack_pointer = (unsigned long long *)0x0;
  stack_var_ = 0;
  system_pointer_variable = (unsigned long long *)
           system_function_(system_global_data_,STRING_BUFFER_SIZE,CONCAT71((int7)((ulong long)char_system_pointer_variable >> 8),0x13));
  *(unsigned char *)system_pointer_variable = 0;
  system_stack_pointer = system_pointer_variable;
  uint_var_ = allocate_helper_buffer(system_pointer_variable);
  *system_pointer_variable = 0x7265206573726150;
  *(unsigned int *)(system_pointer_variable + 1) = 0x3a726f72;
  *(unsigned short *)((long long)system_pointer_variable + 0xc) = 0x2720;
  *(unsigned char *)((long long)system_pointer_variable + 0xe) = 0;
  stack_var_ = 0xe;
  system_init_result0 = -1;
  stack_var_._0_4_ = uint_var_;
  if (handle != 0) {
    do {
      system_long_variable = system_init_result0;
      system_init_result0 = system_long_variable + 1;
    } while (*(char *)(system_init_result0 + handle) != '\0');
    if (0 < (int)system_init_result0) {
      int_var_ = (int)system_long_variable;
      if ((int_var_ != -0xf) && (uint_var_ < int_var_ + STRING_BUFFER_SIZEU)) {
        stack_var_ = 0x13;
        system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,system_pointer_variable,int_var_ + STRING_BUFFER_SIZEU,STRING_BUFFER_SIZE);
        system_stack_pointer = system_pointer_variable;
        stack_var_._0_4_ = allocate_helper_buffer(system_pointer_variable);
      }
      memcpy((unsigned char *)((long long)system_pointer_variable + 0xe),handle,(long long)(int_var_ + 2));
    }
  }
  if (system_pointer_variable == (unsigned long long *)0x0) {
    system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,0x19,0x13);
    *(unsigned char *)system_pointer_variable = 0;
label_:
    system_stack_pointer = system_pointer_variable;
    uint_var_ = allocate_helper_buffer(system_pointer_variable);
  }
  else if (uint_var_ < 0x19) {
    stack_var_ = 0x13;
    system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,system_pointer_variable,0x19,STRING_BUFFER_SIZE);
    goto label_;
  }
  *(unsigned long long *)((long long)system_pointer_variable + 0xe) = 0x6e696c2074612027;
  *(unsigned short *)((long long)system_pointer_variable + 0x16) = CONFIG_PATH_BUFFER_SIZE65;
  *(unsigned char *)(system_pointer_variable + 3) = 0;
  stack_var_ = 0x18;
  stack_var_._0_4_ = uint_var_;
  system_function_(acStack_40,&system_1809fd0a0,int_var_);
  system_init_result0 = -1;
  do {
    system_long_variable = system_init_result0;
    system_init_result0 = system_long_variable + 1;
  } while (acStack_40[system_long_variable + 1] != '\0');
  int_var_ = (int)(system_long_variable + 1);
  if (int_var_ < 1) {
    if (data_180c8eced != '\0') {
      _Exit(5);
    }
    system_stack_pointer = &g_threadString2;
    if (system_pointer_variable != (unsigned long long *)0x0) {
      handle_system_error(system_pointer_variable);
    }
    system_stack_pointer = (unsigned long long *)0x0;
    stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
    system_stack_pointer = &g_threadString4;
    system_crypto_001(stack_var_ ^ (ulong long)auStack_98);
  }
  if (int_var_ != -0x18) {
    uint_var_ = int_var_ + 0x19;
    if (system_pointer_variable == (unsigned long long *)0x0) {
      if ((int)uint_var_ < STRING_BUFFER_SIZE) {
        uint_var_ = STRING_BUFFER_SIZE;
      }
      system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,(long long)(int)uint_var_,0x13);
      *(unsigned char *)system_pointer_variable = 0;
    }
    else {
      if (uint_var_ <= uint_var_) goto label_;
      stack_var_ = 0x13;
      system_pointer_variable = (unsigned long long *)system_function_(system_global_data_,system_pointer_variable,uint_var_,STRING_BUFFER_SIZE);
    }
    system_stack_pointer = system_pointer_variable;
    stack_var_._0_4_ = allocate_helper_buffer(system_pointer_variable);
  }
label_:
  memcpy(system_pointer_variable + 3,acStack_40,(long long)((int)system_long_variable + 2));
}
char * system_function_(unsigned int handle,unsigned long long flags,char *mutex_attr,unsigned long long mutex_type,
                    long long *param_5,long long param_6,ulong long param_7,unsigned long long *param_8,
                    int *param_9,unsigned long long *handle0)
{
  char cVar1;
  unsigned int flags;
  unsigned int uint_var_;
  void *system_pointer_variable;
  int int_var_;
  unsigned int uint_var_;
  uint uint_var_;
  long long system_long_variable;
  char *char_system_pointer_variable;
  unsigned int *system_pointer_variable;
  unsigned int *system_pointer_variable;
  unsigned char *system_pointer_variable;
  void *system_pointer_variable;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  ulong long uint_var_;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  char *char_system_pointer_variable;
  void *system_stack_pointer;
  void *system_stack_pointer;
  uint stack_var_;
  unsigned long long stack_var_;
  long long *plStack_120;
  void *system_stack_pointer;
  void *system_stack_pointer;
  unsigned int stack_var_;
  ulong long stack_var_;
  void *system_stack_pointer;
  unsigned int *system_stack_pointer;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  ulong long stack_var_;
  long long system_stack_long;
  unsigned long long *system_stack_pointer;
  void *system_stack_pointer;
  unsigned int *system_stack_pointer;
  unsigned int stack_var_;
  ulong long stack_var_;
  unsigned long long *system_stack_pointer;
  void *system_stack_pointer;
  unsigned int *system_stack_pointer;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  int *piStack_78;
  char *pcStack_70;
  unsigned long long stack_var_;
  void *system_stack_pointer;
  unsigned long long stack_var_;
  unsigned long long *system_stack_pointer;
  ulong long uint_var_;
  stack_var_ = THREAD_POOL_DEFAULT_FLAG;
  plStack_120 = param_5;
  system_stack_long = param_6;
  stack_var_ = param_7;
  system_stack_pointer = param_8;
  piStack_78 = param_9;
  system_stack_pointer = handle0;
  system_stack_pointer = handle0;
  system_stack_pointer = &g_threadString2;
  stack_var_ = 0;
  system_stack_pointer = (void *)0x0;
  stack_var_ = 0;
  pcStack_70 = mutex_attr;
  stack_var_ = flags;
  system_long_variable = process_system_configuration(&system_stack_pointer,mutex_type,handle,param_5);
  stack_var_ = *(unsigned int *)(system_long_variable + STRING_BUFFER_SIZE);
  system_stack_pointer = *(void **)(system_long_variable + 8);
  stack_var_ = *(ulong long *)(system_long_variable + 0x18);
  *(unsigned int *)(system_long_variable + STRING_BUFFER_SIZE) = 0;
  *(unsigned long long *)(system_long_variable + 8) = 0;
  *(unsigned long long *)(system_long_variable + 0x18) = 0;
  system_stack_pointer = &g_threadString2;
  system_stack_pointer = system_stack_pointer;
  if (system_stack_pointer != (unsigned int *)0x0) {
    handle_system_error();
  }
  system_stack_pointer = (unsigned int *)0x0;
  stack_var_ = (char *)((ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE);
  system_stack_pointer = &g_threadString4;
  system_pointer_variable = &data_18098bc73;
  if (system_stack_pointer != (void *)0x0) {
    system_pointer_variable = system_stack_pointer;
  }
  system_function_(&system_180a3cac0,system_pointer_variable);
  *param_9 = 0;
  system_long_variable = *param_5;
  int_var_ = 0;
  if (system_long_variable != param_5[1]) {
    do {
      if (0xf < int_var_) {
        system_function_(&system_180a3ca70,STRING_BUFFER_SIZE);
      }
      system_pointer_variable = &data_18098bc73;
      if (*(void **)(system_long_variable + 8) != (void *)0x0) {
        system_pointer_variable = *(void **)(system_long_variable + 8);
      }
      system_function_(&system_180a3ca20,system_pointer_variable);
      int_var_ = *param_9;
      system_long_variable = (long long)int_var_ * 0x3088 + system_stack_long;
      system_pointer_variable = &data_18098bc73;
      if (*(void **)(system_long_variable + 8) != (void *)0x0) {
        system_pointer_variable = *(void **)(system_long_variable + 8);
      }
      system_stack_pointer = &g_threadString2;
      stack_var_ = 0;
      system_stack_pointer = (void *)0x0;
      stack_var_ = 0;
      uint_var_ = *(uint *)(system_stack_pointer + 2);
      uint_var_ = (ulong long)uint_var_;
      if (system_stack_pointer[1] != 0) {
        system_thread_manager_001(&system_stack_pointer,uint_var_);
      }
      system_pointer_variable = system_stack_pointer;
      if (uint_var_ != 0) {
        memcpy(system_stack_pointer,system_stack_pointer[1],uint_var_);
      }
      if (system_stack_pointer != (void *)0x0) {
        system_stack_pointer[uint_var_] = 0;
      }
      stack_var_ = uint_var_;
      stack_var_._4_4_ = *(uint *)((long long)system_stack_pointer + 0x1c);
      if (system_pointer_variable != (void *)0x0) {
        uint_var_ = 0xffffffffffffffff;
        do {
          uint_var_ = uint_var_;
          uint_var_ = uint_var_ + 1;
        } while (system_pointer_variable[uint_var_] != '\0');
        param_5 = plStack_120;
        if (0 < (int)uint_var_) {
          system_thread_manager_001(&system_stack_pointer,uint_var_ & 0xffffffff);
          memcpy(system_stack_pointer + stack_var_,system_pointer_variable,(long long)((int)uint_var_ + 2));
        }
      }
      system_pointer_variable = &data_18098bc73;
      if (system_stack_pointer != (void *)0x0) {
        system_pointer_variable = system_stack_pointer;
      }
      system_function_(system_pointer_variable,system_long_variable,(long long)int_var_ * CONFIG_PATH_BUFFER_SIZE + param_7);
      system_stack_pointer = &g_threadString2;
      if (system_pointer_variable != (void *)0x0) {
        handle_system_error(system_pointer_variable);
      }
      system_stack_pointer = (void *)0x0;
      stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
      system_stack_pointer = &g_threadString4;
      system_long_variable = system_long_variable + CONFIG_PATH_BUFFER_SIZE;
      int_var_ = *piStack_78 + 1;
      *piStack_78 = int_var_;
      param_7 = stack_var_;
      mutex_attr = pcStack_70;
      param_6 = system_stack_long;
      param_9 = piStack_78;
    } while (system_long_variable != param_5[1]);
  }
  char_system_pointer_variable = (char *)0x0;
  stack_var_ = stack_var_ & INT64_MASK;
  plStack_120 = (long long *)((ulong long)plStack_120 & 0xffffffff00000000);
  char_system_pointer_variable = char_system_pointer_variable;
  if (0 < int_var_) {
    do {
      char_system_pointer_variable = "base";
      do {
        char_system_pointer_variable = char_system_pointer_variable;
        char_system_pointer_variable = char_system_pointer_variable + 1;
      } while (*char_system_pointer_variable != '\0');
      for (char_system_pointer_variable = *(char **)(param_6 + 0x30); char_system_pointer_variable = char_system_pointer_variable, char_system_pointer_variable != (char *)0x0;
          char_system_pointer_variable = *(char **)(char_system_pointer_variable + 0x58)) {
        char_system_pointer_variable = *(char **)char_system_pointer_variable;
        if (char_system_pointer_variable == (char *)0x0) {
          char_system_pointer_variable = (char *)0x180d48d24;
          char_system_pointer_variable = char_system_pointer_variable;
        }
        else {
          char_system_pointer_variable = *(char **)(char_system_pointer_variable + STRING_BUFFER_SIZE);
        }
        if (char_system_pointer_variable == char_system_pointer_variable + -0x180a04ee3) {
          char_system_pointer_variable = char_system_pointer_variable + (long long)char_system_pointer_variable;
          char_system_pointer_variable = char_system_pointer_variable;
          if (char_system_pointer_variable <= char_system_pointer_variable) break;
          system_long_variable = (long long)&data_180a04ee4 - (long long)char_system_pointer_variable;
          while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
            char_system_pointer_variable = char_system_pointer_variable + 1;
            if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
          }
        }
      }
label_:
      *system_stack_pointer = char_system_pointer_variable;
      if (char_system_pointer_variable != (char *)0x0) {
        if (mutex_attr == (char *)0x0) {
          char_system_pointer_variable = *(char **)(char_system_pointer_variable + 0x30);
        }
        else {
          cVar1 = *mutex_attr;
          char_system_pointer_variable = mutex_attr;
          while (cVar1 != '\0') {
            char_system_pointer_variable = char_system_pointer_variable + 1;
            cVar1 = *char_system_pointer_variable;
          }
          for (char_system_pointer_variable = *(char **)(char_system_pointer_variable + 0x30); char_system_pointer_variable = char_system_pointer_variable, char_system_pointer_variable != (char *)0x0;
              char_system_pointer_variable = *(char **)(char_system_pointer_variable + 0x58)) {
            char_system_pointer_variable = *(char **)char_system_pointer_variable;
            if (char_system_pointer_variable == (char *)0x0) {
              char_system_pointer_variable = (char *)0x180d48d24;
              char_system_pointer_variable = char_system_pointer_variable;
            }
            else {
              char_system_pointer_variable = *(char **)(char_system_pointer_variable + STRING_BUFFER_SIZE);
            }
            if (char_system_pointer_variable == char_system_pointer_variable + -(long long)mutex_attr) {
              char_system_pointer_variable = char_system_pointer_variable + (long long)char_system_pointer_variable;
              char_system_pointer_variable = char_system_pointer_variable;
              if (char_system_pointer_variable <= char_system_pointer_variable) break;
              system_long_variable = (long long)mutex_attr - (long long)char_system_pointer_variable;
              while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
                char_system_pointer_variable = char_system_pointer_variable + 1;
                if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
              }
            }
          }
        }
label_:
        *system_stack_pointer = char_system_pointer_variable;
        if (char_system_pointer_variable == (char *)0x0) {
          system_stack_pointer = &g_threadString2;
          system_stack_pointer = (unsigned int *)0x0;
          stack_var_ = 0;
          stack_var_ = char_system_pointer_variable;
          system_pointer_variable = (unsigned int *)system_function_(system_global_data_,0x15,0x13);
          *(unsigned char *)system_pointer_variable = 0;
          system_stack_pointer = system_pointer_variable;
          uint_var_ = allocate_helper_buffer(system_pointer_variable);
          stack_var_ = (char *)CONCAT44(stack_var_._4_4_,uint_var_);
          *system_pointer_variable = CONFIG_PATH_BUFFER_SIZE4c4d58;
          system_pointer_variable[1] = 0x65646f6e;
          system_pointer_variable[2] = 0x74697720;
          system_pointer_variable[3] = 0x616e2068;
          system_pointer_variable[4] = 0x2220656d;
          *(unsigned char *)(system_pointer_variable + 5) = 0;
          stack_var_ = 0x14;
          system_stack_pointer = &g_threadString2;
          stack_var_ = 0;
          system_stack_pointer = (unsigned int *)0x0;
          stack_var_ = 0;
          system_pointer_variable = (unsigned int *)system_function_(system_global_data_,0x15,0x13);
          *(unsigned char *)system_pointer_variable = 0;
          system_stack_pointer = system_pointer_variable;
          uint_var_ = allocate_helper_buffer(system_pointer_variable);
          uint_var_ = system_pointer_variable[1];
          flags = system_pointer_variable[2];
          uint_var_ = system_pointer_variable[3];
          *system_pointer_variable = *system_pointer_variable;
          system_pointer_variable[1] = uint_var_;
          system_pointer_variable[2] = flags;
          system_pointer_variable[3] = uint_var_;
          system_pointer_variable[4] = system_pointer_variable[4];
          stack_var_ = 0x14;
          *(unsigned char *)(system_pointer_variable + 5) = 0;
          stack_var_ = (ulong long)uint_var_;
          if (mutex_attr != (char *)0x0) {
            system_long_variable = -1;
            do {
              system_long_variable = system_long_variable;
              system_long_variable = system_long_variable + 1;
            } while (mutex_attr[system_long_variable] != '\0');
            if (0 < (int)system_long_variable) {
              int_var_ = (int)system_long_variable;
              if ((int_var_ != -0x15) && (uint_var_ < int_var_ + 0x16U)) {
                system_pointer_variable = (unsigned int *)
                          system_function_(system_global_data_,system_pointer_variable,int_var_ + 0x16U,STRING_BUFFER_SIZE,0x13);
                system_stack_pointer = system_pointer_variable;
                uint_var_ = allocate_helper_buffer(system_pointer_variable);
                stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
              }
              memcpy(system_pointer_variable + 5,mutex_attr,(long long)(int_var_ + 2));
            }
          }
          system_pointer_variable = (unsigned char *)0x0;
          system_stack_pointer = &g_threadString2;
          stack_var_ = 0;
          system_stack_pointer = (unsigned int *)0x0;
          stack_var_ = 0;
          system_pointer_variable = (unsigned int *)system_function_(system_global_data_,0x16,0x13);
          *(unsigned char *)system_pointer_variable = 0;
          system_stack_pointer = system_pointer_variable;
          uint_var_ = allocate_helper_buffer(system_pointer_variable);
          stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
          *system_pointer_variable = 0x6f632022;
          system_pointer_variable[1] = CONFIG_PATH_BUFFER_SIZE646c75;
          system_pointer_variable[2] = CONFIG_PATH_BUFFER_SIZE746f6e;
          system_pointer_variable[3] = 0x66206562;
          system_pointer_variable[4] = 0x646e756f;
          *(unsigned short *)(system_pointer_variable + 5) = 0x21;
          stack_var_ = 0x15;
          system_stack_pointer = &g_threadString2;
          stack_var_ = 0;
          system_stack_pointer = (unsigned char *)0x0;
          stack_var_ = 0;
          if (system_pointer_variable != (unsigned int *)0x0) {
            system_pointer_variable = (unsigned char *)system_function_(system_global_data_,0x15,0x13);
            *system_pointer_variable = 0;
            system_stack_pointer = system_pointer_variable;
            uint_var_ = allocate_helper_buffer(system_pointer_variable);
            stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
          }
          memcpy(system_pointer_variable,system_pointer_variable,0x14);
        }
        int_var_ = validate_config_handle(char_system_pointer_variable,stack_var_);
        uint_var_ = (int)char_system_pointer_variable + int_var_;
        char_system_pointer_variable = (char *)(ulong long)uint_var_;
        stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      }
      int_var_ = (int)plStack_120 + 1;
      plStack_120 = (long long *)CONCAT44(plStack_120._4_4_,int_var_);
      param_6 = param_6 + 0x3088;
      mutex_attr = pcStack_70;
      system_stack_long = param_6;
    } while (int_var_ < *param_9);
  }
  system_stack_pointer = &g_threadString2;
  if (system_stack_pointer != (void *)0x0) {
    handle_system_error();
  }
  system_stack_pointer = (void *)0x0;
  stack_var_ = stack_var_ & INT64_MASK;
  system_stack_pointer = &g_threadString4;
  *system_stack_pointer = &g_threadString2;
  if (system_stack_pointer[1] != 0) {
    handle_system_error();
  }
  system_stack_pointer[1] = 0;
  *(unsigned int *)(system_stack_pointer + 3) = 0;
  *system_stack_pointer = &g_threadString4;
  return char_system_pointer_variable;
}
char * system_function_(unsigned long long handle,unsigned long long flags,unsigned long long *mutex_attr,long long mutex_type,
                    unsigned long long param_5,unsigned long long *param_6,unsigned long long *param_7)
{
  unsigned int uint_var_;
  unsigned int flags;
  unsigned int uint_var_;
  uint uint_var_;
  long long system_long_variable;
  char *char_system_pointer_variable;
  unsigned int *system_pointer_variable;
  unsigned int *system_pointer_variable;
  char *char_system_pointer_variable;
  void *system_pointer_variable;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  void *system_stack_pointer;
  unsigned int *system_stack_pointer;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  void *system_stack_pointer;
  unsigned int *system_stack_pointer;
  unsigned int stack_var_;
  ulong long stack_var_;
  void *system_stack_pointer;
  unsigned int *system_stack_pointer;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  void *system_stack_pointer;
  long long system_stack_long;
  unsigned int stack_var_;
  unsigned long long stack_var_;
  unsigned long long *system_stack_pointer;
  unsigned long long *system_stack_pointer;
  stack_var_ = THREAD_POOL_DEFAULT_FLAG;
  system_stack_pointer = param_7;
  char_system_pointer_variable = (char *)0x0;
  system_stack_pointer = mutex_attr;
  system_long_variable = system_function_(param_7,&system_stack_pointer);
  system_pointer_variable = &data_18098bc73;
  if (*(void **)(system_long_variable + 8) != (void *)0x0) {
    system_pointer_variable = *(void **)(system_long_variable + 8);
  }
  system_function_(system_pointer_variable,mutex_type,param_5);
  system_stack_pointer = &g_threadString2;
  if (system_stack_pointer != (unsigned int *)0x0) {
    handle_system_error();
  }
  system_stack_pointer = (unsigned int *)0x0;
  stack_var_ = (ulong long)stack_var_._4_4_ << CONFIG_PATH_BUFFER_SIZE;
  system_stack_pointer = &g_threadString4;
  char_system_pointer_variable = "base";
  do {
    char_system_pointer_variable = char_system_pointer_variable;
    char_system_pointer_variable = char_system_pointer_variable + 1;
  } while (*char_system_pointer_variable != '\0');
  for (char_system_pointer_variable = *(char **)(mutex_type + 0x30); char_system_pointer_variable = char_system_pointer_variable, char_system_pointer_variable != (char *)0x0;
      char_system_pointer_variable = *(char **)(char_system_pointer_variable + 0x58)) {
    char_system_pointer_variable = *(char **)char_system_pointer_variable;
    if (char_system_pointer_variable == (char *)0x0) {
      char_system_pointer_variable = (char *)0x180d48d24;
      char_system_pointer_variable = char_system_pointer_variable;
    }
    else {
      char_system_pointer_variable = *(char **)(char_system_pointer_variable + STRING_BUFFER_SIZE);
    }
    if (char_system_pointer_variable == char_system_pointer_variable + -0x180a04ee3) {
      char_system_pointer_variable = char_system_pointer_variable + (long long)char_system_pointer_variable;
      char_system_pointer_variable = char_system_pointer_variable;
      if (char_system_pointer_variable <= char_system_pointer_variable) break;
      system_long_variable = (long long)&data_180a04ee4 - (long long)char_system_pointer_variable;
      while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
        char_system_pointer_variable = char_system_pointer_variable + 1;
        if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
      }
    }
  }
label_:
  *param_6 = char_system_pointer_variable;
  if (char_system_pointer_variable != (char *)0x0) {
    char_system_pointer_variable = "decal_textures";
    do {
      char_system_pointer_variable = char_system_pointer_variable;
      char_system_pointer_variable = char_system_pointer_variable + 1;
    } while (*char_system_pointer_variable != '\0');
    for (char_system_pointer_variable = *(char **)(char_system_pointer_variable + 0x30); char_system_pointer_variable = char_system_pointer_variable, char_system_pointer_variable != (char *)0x0;
        char_system_pointer_variable = *(char **)(char_system_pointer_variable + 0x58)) {
      char_system_pointer_variable = *(char **)char_system_pointer_variable;
      if (char_system_pointer_variable == (char *)0x0) {
        char_system_pointer_variable = (char *)0x180d48d24;
        char_system_pointer_variable = char_system_pointer_variable;
      }
      else {
        char_system_pointer_variable = *(char **)(char_system_pointer_variable + STRING_BUFFER_SIZE);
      }
      if (char_system_pointer_variable == char_system_pointer_variable + -0x180a12dff) {
        char_system_pointer_variable = char_system_pointer_variable + (long long)char_system_pointer_variable;
        char_system_pointer_variable = char_system_pointer_variable;
        if (char_system_pointer_variable <= char_system_pointer_variable) break;
        system_long_variable = (long long)&data_180a12e00 - (long long)char_system_pointer_variable;
        while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
          char_system_pointer_variable = char_system_pointer_variable + 1;
          if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
        }
      }
    }
label_:
    *param_6 = char_system_pointer_variable;
    if (char_system_pointer_variable == (char *)0x0) {
      system_stack_pointer = &g_threadString2;
      stack_var_ = 0;
      system_stack_pointer = (unsigned int *)0x0;
      stack_var_ = 0;
      system_pointer_variable = (unsigned int *)system_function_(system_global_data_,0x15,0x13);
      *(unsigned char *)system_pointer_variable = 0;
      system_stack_pointer = system_pointer_variable;
      uint_var_ = allocate_helper_buffer(system_pointer_variable);
      stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      *system_pointer_variable = CONFIG_PATH_BUFFER_SIZE4c4d58;
      system_pointer_variable[1] = 0x65646f6e;
      system_pointer_variable[2] = 0x74697720;
      system_pointer_variable[3] = 0x616e2068;
      system_pointer_variable[4] = 0x2220656d;
      *(unsigned char *)(system_pointer_variable + 5) = 0;
      stack_var_ = 0x14;
      system_stack_pointer = &g_threadString2;
      stack_var_ = 0;
      system_stack_pointer = (unsigned int *)0x0;
      stack_var_ = 0;
      system_pointer_variable = (unsigned int *)system_function_(system_global_data_,0x15,0x13);
      *(unsigned char *)system_pointer_variable = 0;
      system_stack_pointer = system_pointer_variable;
      uint_var_ = allocate_helper_buffer(system_pointer_variable);
      uint_var_ = system_pointer_variable[1];
      uint_var_ = system_pointer_variable[2];
      flags = system_pointer_variable[3];
      *system_pointer_variable = *system_pointer_variable;
      system_pointer_variable[1] = uint_var_;
      system_pointer_variable[2] = uint_var_;
      system_pointer_variable[3] = flags;
      system_pointer_variable[4] = system_pointer_variable[4];
      stack_var_ = 0x14;
      *(unsigned char *)(system_pointer_variable + 5) = 0;
      stack_var_ = (ulong long)uint_var_;
      if (uint_var_ < 0x23) {
        system_pointer_variable = (unsigned int *)system_function_(system_global_data_,system_pointer_variable,0x23,STRING_BUFFER_SIZE,0x13);
        system_stack_pointer = system_pointer_variable;
        uint_var_ = allocate_helper_buffer(system_pointer_variable);
        stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      }
      *(unsigned long long *)(system_pointer_variable + 5) = 0x65745f6c61636564;
      system_pointer_variable[7] = 0x72757478;
      *(unsigned short *)(system_pointer_variable + 8) = 0x7365;
      *(unsigned char *)((long long)system_pointer_variable + 0x22) = 0;
      stack_var_ = 0x22;
      system_stack_pointer = &g_threadString2;
      stack_var_ = 0;
      system_stack_pointer = (unsigned int *)0x0;
      stack_var_ = 0;
      system_pointer_variable = (unsigned int *)system_function_(system_global_data_,0x16,0x13);
      *(unsigned char *)system_pointer_variable = 0;
      system_stack_pointer = system_pointer_variable;
      uint_var_ = allocate_helper_buffer(system_pointer_variable);
      stack_var_ = CONCAT44(stack_var_._4_4_,uint_var_);
      *system_pointer_variable = 0x6f632022;
      system_pointer_variable[1] = CONFIG_PATH_BUFFER_SIZE646c75;
      system_pointer_variable[2] = CONFIG_PATH_BUFFER_SIZE746f6e;
      system_pointer_variable[3] = 0x66206562;
      system_pointer_variable[4] = 0x646e756f;
      *(unsigned short *)(system_pointer_variable + 5) = 0x21;
      stack_var_ = 0x15;
      system_long_variable = system_function_(&system_stack_pointer,&system_stack_pointer,&system_stack_pointer);
      system_pointer_variable = &data_18098bc73;
      if (*(void **)(system_long_variable + 8) != (void *)0x0) {
        system_pointer_variable = *(void **)(system_long_variable + 8);
      }
      system_thread_003(system_pointer_variable);
      system_stack_pointer = &g_threadString2;
      if (system_stack_long != 0) {
        handle_system_error();
      }
      system_stack_long = 0;
      stack_var_ = 0;
      system_stack_pointer = &g_threadString4;
      system_stack_pointer = &g_threadString2;
      handle_system_error(system_pointer_variable);
    }
    uint_var_ = validate_config_handle(char_system_pointer_variable,&system_180a12e10);
    char_system_pointer_variable = (char *)(ulong long)uint_var_;
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
  return char_system_pointer_variable;
}
long long process_system_configuration(long long handle,long long flags,unsigned int mutex_attr,long long mutex_type)
{
  char cVar1;
  char cVar2;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  unsigned long long *system_pointer_variable;
  char *char_system_pointer_variable;
  unsigned long long *system_pointer_variable;
  char *char_system_pointer_variable;
  char *char_system_pointer_variable;
  bool bVar12;
  unsigned int uint_var_;
  unsigned long long uint_var_;
  void *system_stack_pointer;
  long long system_stack_long;
  int stack_int_;
  ulong long stack_var_;
  void *system_stack_pointer;
  char *pcStack_48;
  int stack_int_;
  unsigned long long stack_var_;
  uint_var_ = THREAD_POOL_DEFAULT_FLAG;
  char_system_pointer_variable = (char *)0x0;
  system_function_(mutex_type);
  system_function_(handle,mutex_attr);
  uint_var_ = 1;
  char_system_pointer_variable = "base";
  do {
    char_system_pointer_variable = char_system_pointer_variable;
    char_system_pointer_variable = char_system_pointer_variable + 1;
  } while (*char_system_pointer_variable != '\0');
  for (char_system_pointer_variable = *(char **)(flags + 0x30); char_system_pointer_variable = char_system_pointer_variable, char_system_pointer_variable != (char *)0x0;
      char_system_pointer_variable = *(char **)(char_system_pointer_variable + 0x58)) {
    char_system_pointer_variable = *(char **)char_system_pointer_variable;
    if (char_system_pointer_variable == (char *)0x0) {
      char_system_pointer_variable = (char *)0x180d48d24;
      char_system_pointer_variable = char_system_pointer_variable;
    }
    else {
      char_system_pointer_variable = *(char **)(char_system_pointer_variable + STRING_BUFFER_SIZE);
    }
    if (char_system_pointer_variable == char_system_pointer_variable + -0x180a04ee3) {
      char_system_pointer_variable = char_system_pointer_variable + (long long)char_system_pointer_variable;
      char_system_pointer_variable = char_system_pointer_variable;
      if (char_system_pointer_variable <= char_system_pointer_variable) break;
      system_long_variable = (long long)&data_180a04ee4 - (long long)char_system_pointer_variable;
      while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
        char_system_pointer_variable = char_system_pointer_variable + 1;
        if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
      }
    }
  }
label_:
  char_system_pointer_variable = "file";
  do {
    char_system_pointer_variable = char_system_pointer_variable;
    char_system_pointer_variable = char_system_pointer_variable + 1;
  } while (*char_system_pointer_variable != '\0');
  system_pointer_variable = *(unsigned long long **)(char_system_pointer_variable + 0x30);
  do {
    if (system_pointer_variable == (unsigned long long *)0x0) {
      return handle;
    }
    char_system_pointer_variable = (char *)*system_pointer_variable;
    if (char_system_pointer_variable == (char *)0x0) {
      char_system_pointer_variable = (char *)0x180d48d24;
      char_system_pointer_variable = char_system_pointer_variable;
    }
    else {
      char_system_pointer_variable = (char *)system_pointer_variable[2];
    }
    if (char_system_pointer_variable == char_system_pointer_variable + -0x180a0794b) {
      char_system_pointer_variable = char_system_pointer_variable + (long long)char_system_pointer_variable;
      if (char_system_pointer_variable <= char_system_pointer_variable) break;
      system_long_variable = (long long)&system_180a0794c - (long long)char_system_pointer_variable;
      while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
        char_system_pointer_variable = char_system_pointer_variable + 1;
        if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
      }
    }
    system_pointer_variable = (unsigned long long *)system_pointer_variable[0xb];
  } while( true );
label_:
  system_stack_pointer = &g_threadString2;
  stack_var_ = 0;
  pcStack_48 = (char *)0x0;
  stack_int_ = 0;
  char_system_pointer_variable = "type";
  do {
    char_system_pointer_variable = char_system_pointer_variable;
    char_system_pointer_variable = char_system_pointer_variable + 1;
  } while (*char_system_pointer_variable != '\0');
  for (system_pointer_variable = (unsigned long long *)system_pointer_variable[8]; system_pointer_variable != (unsigned long long *)0x0;
      system_pointer_variable = (unsigned long long *)system_pointer_variable[6]) {
    char_system_pointer_variable = (char *)*system_pointer_variable;
    if (char_system_pointer_variable == (char *)0x0) {
      char_system_pointer_variable = (char *)0x180d48d24;
      char_system_pointer_variable = char_system_pointer_variable;
    }
    else {
      char_system_pointer_variable = (char *)system_pointer_variable[2];
    }
    if (char_system_pointer_variable == char_system_pointer_variable + -0x180a0ee2f) {
      char_system_pointer_variable = char_system_pointer_variable + (long long)char_system_pointer_variable;
      if (char_system_pointer_variable <= char_system_pointer_variable) {
label_:
        system_long_variable = 0x180d48d24;
        if (system_pointer_variable[1] != 0) {
          system_long_variable = system_pointer_variable[1];
        }
        system_function_(&system_stack_pointer,system_long_variable,char_system_pointer_variable,system_pointer_variable,uint_var_,uint_var_);
        break;
      }
      system_long_variable = (long long)&system_180a0ee30 - (long long)char_system_pointer_variable;
      while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
        char_system_pointer_variable = char_system_pointer_variable + 1;
        if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
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
      char_system_pointer_variable = pcStack_48;
      do {
        cVar1 = *char_system_pointer_variable;
        cVar2 = char_system_pointer_variable[*(long long *)(handle + 8) - (long long)pcStack_48];
        if (cVar1 != cVar2) break;
        char_system_pointer_variable = char_system_pointer_variable + 1;
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
    system_stack_pointer = &g_threadString2;
    stack_var_ = 0;
    system_stack_long = 0;
    stack_int_ = 0;
    char_system_pointer_variable = "name";
    do {
      char_system_pointer_variable = char_system_pointer_variable;
      char_system_pointer_variable = char_system_pointer_variable + 1;
    } while (*char_system_pointer_variable != '\0');
    for (system_pointer_variable = (unsigned long long *)system_pointer_variable[8]; system_pointer_variable != (unsigned long long *)0x0;
        system_pointer_variable = (unsigned long long *)system_pointer_variable[6]) {
      char_system_pointer_variable = (char *)*system_pointer_variable;
      if (char_system_pointer_variable == (char *)0x0) {
        char_system_pointer_variable = (char *)0x180d48d24;
        char_system_pointer_variable = char_system_pointer_variable;
      }
      else {
        char_system_pointer_variable = (char *)system_pointer_variable[2];
      }
      if (char_system_pointer_variable == char_system_pointer_variable + -0x180a03a83) {
        char_system_pointer_variable = char_system_pointer_variable + (long long)char_system_pointer_variable;
        if (char_system_pointer_variable <= char_system_pointer_variable) {
label_:
          system_long_variable = 0x180d48d24;
          if (system_pointer_variable[1] != 0) {
            system_long_variable = system_pointer_variable[1];
          }
          system_function_(&system_stack_pointer,system_long_variable);
          break;
        }
        system_long_variable = (long long)&data_180a03a84 - (long long)char_system_pointer_variable;
        while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
          char_system_pointer_variable = char_system_pointer_variable + 1;
          if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
        }
      }
    }
    system_pointer_variable = *(unsigned long long **)(mutex_type + 8);
    if (system_pointer_variable < *(unsigned long long **)(mutex_type + STRING_BUFFER_SIZE)) {
      *(unsigned long long **)(mutex_type + 8) = system_pointer_variable + 4;
      *system_pointer_variable = &g_threadString4;
      system_pointer_variable[1] = 0;
      *(unsigned int *)(system_pointer_variable + 2) = 0;
      *system_pointer_variable = &g_threadString2;
      system_pointer_variable[3] = 0;
      system_pointer_variable[1] = 0;
      *(unsigned int *)(system_pointer_variable + 2) = 0;
      system_thread_manager_001(system_pointer_variable,stack_int_);
      if (stack_int_ != 0) {
        memcpy(system_pointer_variable[1],system_stack_long,stack_int_ + 1);
      }
      if (system_stack_long != 0) {
        *(unsigned int *)(system_pointer_variable + 2) = 0;
        if ((unsigned char *)system_pointer_variable[1] != (unsigned char *)0x0) {
          *(unsigned char *)system_pointer_variable[1] = 0;
        }
        *(unsigned int *)((long long)system_pointer_variable + 0x1c) = 0;
      }
    }
    else {
      system_event_handler_006(mutex_type,&system_stack_pointer);
    }
    system_stack_pointer = &g_threadString2;
    if (system_stack_long != 0) {
      handle_system_error();
    }
    system_stack_long = 0;
    stack_var_ = stack_var_ & INT64_MASK;
    system_stack_pointer = &g_threadString4;
  }
  system_pointer_variable = (unsigned long long *)system_pointer_variable[0xb];
  system_stack_pointer = &g_threadString2;
  if (pcStack_48 != (char *)0x0) {
    handle_system_error();
  }
  if (system_pointer_variable == (unsigned long long *)0x0) {
    return handle;
  }
  goto label_;
}
  data_180c95fea = 0;
  if (cVar1 != '\0') {
    system_thread_003(&system_180a3cc28,handle);
  }
  if (system_long_variable != -1) {
    LOCK();
    system_global_data_ = system_global_data_ + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    alStack_3d0[0] = -1;
  }
  system_stack_pointer = &g_threadString2;
  if (system_stack_pointer == (void *)0x0) {
    system_stack_pointer = (void *)0x0;
    stack_var_ = 0;
    system_stack_pointer = &g_threadString4;
    system_crypto_001(stack_var_ ^ (ulong long)auStack_408);
  }
  handle_system_error();
}
int validate_config_handle(unsigned long long handle,char *flags)
{
  char *char_system_pointer_variable;
  char cVar2;
  unsigned long long *system_pointer_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  char *char_system_pointer_variable;
  int int_var_;
  system_pointer_variable = (unsigned long long *)system_function_(handle,flags,0);
  int_var_ = 0;
  if (system_pointer_variable == (unsigned long long *)0x0) {
    return 0;
  }
  while (int_var_ = int_var_ + 1, flags == (char *)0x0) {
    system_pointer_variable = (unsigned long long *)system_pointer_variable[0xb];
label_:
    if (system_pointer_variable == (unsigned long long *)0x0) {
      return int_var_;
    }
  }
  cVar2 = *flags;
  char_system_pointer_variable = flags;
  while (cVar2 != '\0') {
    char_system_pointer_variable = char_system_pointer_variable + 1;
    cVar2 = *char_system_pointer_variable;
  }
  system_pointer_variable = (unsigned long long *)system_pointer_variable[0xb];
  if (system_pointer_variable == (unsigned long long *)0x0) {
    return int_var_;
  }
  do {
    char_system_pointer_variable = (char *)*system_pointer_variable;
    if (char_system_pointer_variable == (char *)0x0) {
      system_long_variable = 0;
      char_system_pointer_variable = (char *)0x180d48d24;
    }
    else {
      system_long_variable = system_pointer_variable[2];
    }
    if (system_long_variable == (long long)char_system_pointer_variable - (long long)flags) {
      char_system_pointer_variable = char_system_pointer_variable + system_long_variable;
      if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
      system_long_variable = (long long)flags - (long long)char_system_pointer_variable;
      while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
        char_system_pointer_variable = char_system_pointer_variable + 1;
        if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
      }
    }
    system_pointer_variable = (unsigned long long *)system_pointer_variable[0xb];
    if (system_pointer_variable == (unsigned long long *)0x0) {
      return int_var_;
    }
  } while( true );
}
int process_config_with_mutex(unsigned long long handle,unsigned long long flags,unsigned long long *mutex_attr)
{
  char *char_system_pointer_variable;
  char cVar2;
  char *char_system_pointer_variable;
  char *unaff_RBX;
  long long system_long_variable;
  char *char_system_pointer_variable;
  int in_R11D;
  while (in_R11D = in_R11D + 1, unaff_RBX == (char *)0x0) {
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
label_:
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  }
  cVar2 = *unaff_RBX;
  char_system_pointer_variable = unaff_RBX;
  while (cVar2 != '\0') {
    char_system_pointer_variable = char_system_pointer_variable + 1;
    cVar2 = *char_system_pointer_variable;
  }
  mutex_attr = (unsigned long long *)mutex_attr[0xb];
  if (mutex_attr == (unsigned long long *)0x0) {
    return in_R11D;
  }
  do {
    char_system_pointer_variable = (char *)*mutex_attr;
    if (char_system_pointer_variable == (char *)0x0) {
      system_long_variable = 0;
      char_system_pointer_variable = (char *)0x180d48d24;
    }
    else {
      system_long_variable = mutex_attr[2];
    }
    if (system_long_variable == (long long)char_system_pointer_variable - (long long)unaff_RBX) {
      char_system_pointer_variable = char_system_pointer_variable + system_long_variable;
      if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
      system_long_variable = (long long)unaff_RBX - (long long)char_system_pointer_variable;
      while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
        char_system_pointer_variable = char_system_pointer_variable + 1;
        if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
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
  char *char_system_pointer_variable;
  char cVar2;
  char *char_system_pointer_variable;
  char *unaff_RBX;
  char *unaff_RDI;
  long long system_long_variable;
  char *char_system_pointer_variable;
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
  char_system_pointer_variable = unaff_RBX;
  while (cVar2 != '\0') {
    char_system_pointer_variable = char_system_pointer_variable + 1;
    cVar2 = *char_system_pointer_variable;
  }
  mutex_attr = (unsigned long long *)mutex_attr[0xb];
  if (mutex_attr == (unsigned long long *)0x0) {
    return in_R11D;
  }
  do {
    if ((char *)*mutex_attr == (char *)0x0) {
      system_long_variable = 0;
      char_system_pointer_variable = unaff_RDI;
    }
    else {
      system_long_variable = mutex_attr[2];
      char_system_pointer_variable = (char *)*mutex_attr;
    }
    if (system_long_variable == (long long)char_system_pointer_variable - (long long)unaff_RBX) {
      char_system_pointer_variable = char_system_pointer_variable + system_long_variable;
      if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
      system_long_variable = (long long)unaff_RBX - (long long)char_system_pointer_variable;
      while (*char_system_pointer_variable == char_system_pointer_variable[system_long_variable]) {
        char_system_pointer_variable = char_system_pointer_variable + 1;
        if (char_system_pointer_variable <= char_system_pointer_variable) goto label_;
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
  long long system_init_result;
  long long system_long_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  unsigned long long uint_var_;
  void *system_stack_pointer;
  char *pcStack_28;
  uint_var_ = THREAD_POOL_DEFAULT_FLAG;
  system_init_result = system_function_();
  if (system_init_result == 0) {
    return 0;
  }
  system_long_variable = 0x180d48d24;
  if (*(long long *)(system_init_result + 8) != 0) {
    system_long_variable = *(long long *)(system_init_result + 8);
  }
  create_thread_context(&system_stack_pointer,system_long_variable);
  if (*pcStack_28 != '\0') {
    system_init_result = 0;
    do {
      system_long_variable = strchr(&system_180a3cc48,(int)pcStack_28[system_init_result]);
      if (system_long_variable != 0) {
        pcStack_28[system_init_result] = ' ';
      }
      system_init_result = system_init_result + 1;
    } while (pcStack_28[system_init_result] != '\0');
  }
  char_system_pointer_variable = "";
  if (pcStack_28 != (char *)0x0) {
    char_system_pointer_variable = pcStack_28;
  }
  system_function_(char_system_pointer_variable,&system_180a3cbe0,mutex_attr,mutex_attr + 4,uint_var_);
  system_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return system_long_variable;
}
long long allocate_thread_resources(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long system_init_result;
  long long system_long_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  void *system_stack_pointer;
  char *pcStack_28;
  system_init_result = system_function_();
  if (system_init_result == 0) {
    return 0;
  }
  system_long_variable = 0x180d48d24;
  if (*(long long *)(system_init_result + 8) != 0) {
    system_long_variable = *(long long *)(system_init_result + 8);
  }
  create_thread_context(&system_stack_pointer,system_long_variable);
  if (*pcStack_28 != '\0') {
    system_init_result = 0;
    do {
      system_long_variable = strchr(&system_180a3c9ec,(int)pcStack_28[system_init_result]);
      if (system_long_variable != 0) {
        pcStack_28[system_init_result] = ' ';
      }
      system_init_result = system_init_result + 1;
    } while (pcStack_28[system_init_result] != '\0');
  }
  char_system_pointer_variable = "";
  if (pcStack_28 != (char *)0x0) {
    char_system_pointer_variable = pcStack_28;
  }
  system_function_(char_system_pointer_variable,&system_180a3cc0c,mutex_attr,mutex_attr + 4,mutex_attr + 8);
  system_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return system_long_variable;
}
long long initialize_thread_pool_resources(unsigned long long handle,unsigned long long flags,long long mutex_attr,unsigned long long mutex_type)
{
  long long system_init_result;
  long long system_long_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  void *system_stack_pointer;
  char *pcStack_28;
  system_init_result = system_function_(handle,&system_180a0696c,mutex_attr,mutex_type,THREAD_POOL_DEFAULT_FLAG);
  if (system_init_result == 0) {
    return 0;
  }
  system_long_variable = 0x180d48d24;
  if (*(long long *)(system_init_result + 8) != 0) {
    system_long_variable = *(long long *)(system_init_result + 8);
  }
  create_thread_context(&system_stack_pointer,system_long_variable);
  if (*pcStack_28 != '\0') {
    system_init_result = 0;
    do {
      system_long_variable = strchr(&system_180a3cc04,(int)pcStack_28[system_init_result]);
      if (system_long_variable != 0) {
        pcStack_28[system_init_result] = ' ';
      }
      system_init_result = system_init_result + 1;
    } while (pcStack_28[system_init_result] != '\0');
  }
  char_system_pointer_variable = "";
  if (pcStack_28 != (char *)0x0) {
    char_system_pointer_variable = pcStack_28;
  }
  system_function_(char_system_pointer_variable,&system_180a3cc1c,mutex_attr,mutex_attr + 4);
  system_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return system_long_variable;
}
long long validate_thread_configuration(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  int int_var_;
  long long system_long_variable;
  long long system_long_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  unsigned long long uint_var_;
  void *system_stack_pointer;
  char *pcStack_28;
  uint_var_ = THREAD_POOL_DEFAULT_FLAG;
  system_long_variable = system_function_();
  if (system_long_variable == 0) {
    return 0;
  }
  system_long_variable = 0x180d48d24;
  if (*(long long *)(system_long_variable + 8) != 0) {
    system_long_variable = *(long long *)(system_long_variable + 8);
  }
  create_thread_context(&system_stack_pointer,system_long_variable);
  if (*pcStack_28 != '\0') {
    system_long_variable = 0;
    do {
      system_long_variable = strchr(&system_180a3c9ec,(int)pcStack_28[system_long_variable]);
      if (system_long_variable != 0) {
        pcStack_28[system_long_variable] = ' ';
      }
      system_long_variable = system_long_variable + 1;
    } while (pcStack_28[system_long_variable] != '\0');
  }
  char_system_pointer_variable = "";
  if (pcStack_28 != (char *)0x0) {
    char_system_pointer_variable = pcStack_28;
  }
  int_var_ = system_function_(char_system_pointer_variable,&system_180a3c9f8,mutex_attr,mutex_attr + 4,mutex_attr + 8,
                        (unsigned int *)(mutex_attr + 0xc),uint_var_);
  if (int_var_ == 3) {
    *(unsigned int *)(mutex_attr + 0xc) = 0x3f800000;
  }
  system_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return system_long_variable;
}
long long process_thread_initialization(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long system_init_result;
  long long system_long_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  unsigned long long uint_var_;
  void *system_stack_pointer;
  char *pcStack_28;
  uint_var_ = THREAD_POOL_DEFAULT_FLAG;
  system_init_result = system_function_(handle,&system_180a16818);
  if (system_init_result == 0) {
    return 0;
  }
  system_long_variable = 0x180d48d24;
  if (*(long long *)(system_init_result + 8) != 0) {
    system_long_variable = *(long long *)(system_init_result + 8);
  }
  create_thread_context(&system_stack_pointer,system_long_variable);
  if (*pcStack_28 != '\0') {
    system_init_result = 0;
    do {
      system_long_variable = strchr(&system_180a3cc04,(int)pcStack_28[system_init_result]);
      if (system_long_variable != 0) {
        pcStack_28[system_init_result] = ' ';
      }
      system_init_result = system_init_result + 1;
    } while (pcStack_28[system_init_result] != '\0');
  }
  char_system_pointer_variable = "";
  if (pcStack_28 != (char *)0x0) {
    char_system_pointer_variable = pcStack_28;
  }
  system_function_(char_system_pointer_variable,&system_180a3c9f8,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr,uint_var_);
  system_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return system_long_variable;
}
long long initialize_thread_synchronization(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long *psystem_init_result;
  long long system_long_variable;
  long long system_long_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  void *system_stack_pointer;
  char *pcStack_28;
  system_long_variable = system_function_();
  if (system_long_variable != 0) {
    psystem_init_result = (long long *)(system_long_variable + 8);
    system_long_variable = 0x180d48d24;
    if (*psystem_init_result != 0) {
      system_long_variable = *psystem_init_result;
    }
    create_thread_context(&system_stack_pointer,system_long_variable);
    if (*pcStack_28 != '\0') {
      system_long_variable = 0;
      do {
        system_long_variable = strchr(&system_180a3cc04,(int)pcStack_28[system_long_variable]);
        if (system_long_variable != 0) {
          pcStack_28[system_long_variable] = ' ';
        }
        system_long_variable = system_long_variable + 1;
      } while (pcStack_28[system_long_variable] != '\0');
    }
    char_system_pointer_variable = "";
    if (pcStack_28 != (char *)0x0) {
      char_system_pointer_variable = pcStack_28;
    }
    system_function_(char_system_pointer_variable,&system_180a3ccc8,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + STRING_BUFFER_SIZE,
                  mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + CONFIG_PATH_BUFFER_SIZE,mutex_attr + 0x24,mutex_attr + 0x28);
    system_stack_pointer = &g_threadString2;
    if (pcStack_28 != (char *)0x0) {
      handle_system_error();
    }
  }
  return system_long_variable;
}
long long setup_thread_communication(unsigned long long handle,unsigned long long flags,long long mutex_attr)
{
  long long *psystem_init_result;
  long long system_long_variable;
  long long system_long_variable;
  char *char_system_pointer_variable;
  long long system_long_variable;
  unsigned long long uint_var_;
  void *system_stack_pointer;
  char *pcStack_50;
  uint_var_ = THREAD_POOL_DEFAULT_FLAG;
  system_long_variable = system_function_();
  if (system_long_variable != 0) {
    psystem_init_result = (long long *)(system_long_variable + 8);
    system_long_variable = 0x180d48d24;
    if (*psystem_init_result != 0) {
      system_long_variable = *psystem_init_result;
    }
    create_thread_context(&system_stack_pointer,system_long_variable);
    if (*pcStack_50 != '\0') {
      system_long_variable = 0;
      do {
        system_long_variable = strchr(&system_180a3cc04,(int)pcStack_50[system_long_variable]);
        if (system_long_variable != 0) {
          pcStack_50[system_long_variable] = ' ';
        }
        system_long_variable = system_long_variable + 1;
      } while (pcStack_50[system_long_variable] != '\0');
    }
    char_system_pointer_variable = "";
    if (pcStack_50 != (char *)0x0) {
      char_system_pointer_variable = pcStack_50;
    }
    system_function_(char_system_pointer_variable,&system_180a3cca0,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr + STRING_BUFFER_SIZE
                  ,mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + 0x1c,mutex_attr + CONFIG_PATH_BUFFER_SIZE,mutex_attr + 0x24,
                  mutex_attr + 0x28,mutex_attr + 0x2c,mutex_attr + 0x30,mutex_attr + 0x34,mutex_attr + 0x38,
                  mutex_attr + 0x3c,system_long_variable,uint_var_);
    system_stack_pointer = &g_threadString2;
    if (pcStack_50 != (char *)0x0) {
      handle_system_error();
    }
  }
  return system_long_variable;
}
long long create_thread_with_attributes(unsigned long long handle,unsigned long long flags,unsigned long long *mutex_attr)
{
  unsigned long long uint_var_;
  long long system_long_variable;
  unsigned long long *system_pointer_variable;
  long long system_long_variable;
  unsigned char auStack_18 [16];
  system_long_variable = system_function_();
  if (system_long_variable != 0) {
    system_long_variable = 0x180d48d24;
    if (*(long long *)(system_long_variable + 8) != 0) {
      system_long_variable = *(long long *)(system_long_variable + 8);
    }
    system_pointer_variable = (unsigned long long *)system_function_(auStack_18,system_long_variable);
    uint_var_ = system_pointer_variable[1];
    *mutex_attr = *system_pointer_variable;
    mutex_attr[1] = uint_var_;
    return system_long_variable;
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
  pflags = (unsigned long long *)system_function_(auStackX_20,uint_var_);
  uint_var_ = pflags[1];
  *unaff_RDI = *pflags;
  unaff_RDI[1] = uint_var_;
  return uint_var_;
}
  data_180bf66d8 = 0;
  system_crypto_002(system_function_);
  system_function_(&system_18064ffc0);
  system_long_variable = 0;
  system_global_data_ = system_function_;
  system_pointer_variable = (unsigned int *)&data_180bfbd80;
  system_long_variable = 0x16;
  do {
    if (system_pointer_variable[1] == 0) {
      system_function_(system_pointer_variable);
    }
    if (system_long_variable != 2) {
      system_function_(&system_180a3db60,*(unsigned long long *)(system_pointer_variable + 4),*system_pointer_variable);
    }
    system_long_variable = system_long_variable + 1;
    system_pointer_variable = system_pointer_variable + 6;
    system_long_variable = system_long_variable + -1;
  } while (system_long_variable != 0);
  if (system_global_data_ == 0) {
    system_function_(&data_180bfbf60);
  }
  system_global_data_ = (long long)system_global_data_;
  if (system_global_data_ == 0) {
    system_function_(&data_180bfbf78);
  }
  system_global_data_ = (long long)system_global_data_;
  system_function_();
  if (data_180c8efc8 != '\0') {
    system_function_(&system_180a3d970);
  }
  return;
}
  data_180c8ecef = 1;
  if (data_180d49130 == '\0') {
    data_180d49130 = '\x01';
    flags = FlsAlloc(&system_18064f970);
    system_global_data_ = flags;
    *(unsigned long long *)
     (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) + STRING_BUFFER_SIZE) =
         0x180bf4000;
    FlsSetValue(flags);
  }
  system_function_(&system_180a3d988,&ExceptionList);
  system_init_result = cpuid_Extended_Feature_Enumeration_info(7);
  data_180c8f000 = (byte)(*(uint *)(system_init_result + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (stack_var_ != 0) {
    system_global_data_ = (ulong long)stack_var_;
  }
  system_function_();
  system_function_(&system_180a3d940,0);
  system_function_();
  plVar3 = (long long *)system_function_();
  if ((void *)(*plVar3 + 0x3d8) == &data_180c8ed80) {
    memset(&data_180c8ed80,0,0x240);
  }
  memset((void *)(*plVar3 + 0x3d8),0,0x240);
}
  data_180d49131 = 1;
  FlsSetValue(system_global_data_,0);
  FlsFree(system_global_data_);
  system_function_(*(unsigned long long *)
                 (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
                 STRING_BUFFER_SIZE),1);
  if (system_global_data_ == 0) {
    system_function_(&data_180bfbd98);
  }
  if (system_global_data_ == 0) {
    if (system_global_data_ == 0) {
      system_function_(&data_180bfbdb0);
    }
    if (system_global_data_ == 0) goto label_;
  }
  psystem_init_result = (long long *)system_function_();
  pflags = (void *)(*psystem_init_result + 0x3d8);
  if (pflags != &data_180c8ed80) {
    system_function_();
    memset(pflags,0,0x240);
  }
  system_function_();
label_:
  system_function_(&system_180a3d958,system_global_data_);
  data_180bf66d8 = 1;
  return;
}
unsigned int validate_resource_handle(int handle)
{
  if (*(int *)(&data_180bfbd84 + (long long)handle * 0x18) == 0) {
    system_function_(&data_180bfbd80 + (long long)handle * 0x18);
  }
  return *(unsigned int *)(&data_180bfbd80 + (long long)handle * 0x18);
}
    data_180c8f020 = 0;
    return;
  }
  system_long_variable = -1;
  do {
    system_long_variable = system_long_variable + 1;
  } while (*(char *)(handle + system_long_variable) != '\0');
  uint_var_ = (uint)system_long_variable;
  if (MAX_THREAD_STACK_SIZE < uint_var_) {
    uint_var_ = MAX_THREAD_STACK_SIZE;
  }
  memcpy(&data_180c8f020,handle,(long long)(int)uint_var_);
}
  data_180c8f020 = 0;
  return;
}
unsigned long long initialize_system_context(unsigned long long handle)
{
  unsigned long long uint_var_;
  long long system_long_variable;
  uint_var_ = system_function_(system_global_data_,handle,0x19);
  system_long_variable = allocate_helper_buffer(uint_var_);
  LOCK();
  system_global_data_ = system_global_data_ + system_long_variable;
  UNLOCK();
  return uint_var_;
}
unsigned long long setup_context_with_flags(unsigned long long handle,unsigned long long flags)
{
  long long system_init_result;
  unsigned long long flags;
  system_init_result = allocate_helper_buffer();
  flags = system_function_(system_global_data_,handle,flags,0x19);
  LOCK();
  system_global_data_ = system_global_data_ - system_init_result;
  UNLOCK();
  system_init_result = allocate_helper_buffer(flags);
  LOCK();
  system_global_data_ = system_global_data_ + system_init_result;
  UNLOCK();
  return flags;
}
long long process_context_handle(long long *handle)
{
  int *piVar1;
  long long system_long_variable;
  long long system_long_variable;
  ulong long uint_var_;
  system_long_variable = allocate_helper_buffer();
  system_long_variable = system_global_data_;
  LOCK();
  system_long_variable = system_global_data_ - system_long_variable;
  system_global_data_ = system_long_variable;
  UNLOCK();
  if (handle == (long long *)0x0) {
    return system_long_variable;
  }
  uint_var_ = (ulong long)handle & 0xffffffffffc00000;
  if (uint_var_ != 0) {
    system_long_variable = uint_var_ + 0x80 + ((long long)handle - uint_var_ >> STRING_BUFFER_SIZE) * 0x50;
    system_long_variable = system_long_variable - (ulong long)*(uint *)(system_long_variable + 4);
    if ((*(void ***)(uint_var_ + 0x70) == &ExceptionList) && (*(char *)(system_long_variable + 0xe) == '\0')) {
      system_long_variable = *(long long *)(system_long_variable + CONFIG_PATH_BUFFER_SIZE);
      *handle = system_long_variable;
      *(long long **)(system_long_variable + CONFIG_PATH_BUFFER_SIZE) = handle;
      piVar1 = (int *)(system_long_variable + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        system_long_variable = system_function_();
        return system_long_variable;
      }
    }
    else {
      system_long_variable = func_0x00018064e870(uint_var_,CONCAT71(0xff000000,
                                                 *(void ***)(uint_var_ + 0x70) == &ExceptionList),
                                  handle,uint_var_,THREAD_POOL_DEFAULT_FLAG);
    }
  }
  return system_long_variable;
}
      data_180d4913c = '\x01';
      handle = stack_var_;
    }
    pfVar3 = afStack_2e8;
    system_long_variable = 0;
    system_long_variable = CONFIG_PATH_BUFFER_SIZE;
    system_long_variable = CONFIG_PATH_BUFFER_SIZE;
    do {
      fVar28 = param_5 * *(float *)(system_long_variable + 0x180d4a0a8);
      fVar24 = param_5 * *(float *)(system_long_variable + 0x180d4a0a4);
      fVar30 = param_5 * *(float *)(system_long_variable + 0x180d4a0a0);
      fVar20 = fVar30 * *mutex_attr + fVar24 * mutex_attr[4] + fVar28 * mutex_attr[8] + mutex_attr[0xc];
      fVar21 = fVar30 * mutex_attr[1] + fVar24 * mutex_attr[5] + fVar28 * mutex_attr[9] + mutex_attr[0xd];
      fVar22 = fVar30 * mutex_attr[2] + fVar24 * mutex_attr[6] + fVar28 * mutex_attr[10] + mutex_attr[0xe];
      fVar24 = fVar30 * mutex_attr[3] + fVar24 * mutex_attr[7] + fVar28 * mutex_attr[0xb] + mutex_attr[0xf];
      *(float *)((long long)afStack_2e8 + system_long_variable) = fVar20;
      *(float *)((long long)afStack_2e8 + system_long_variable + 4) = fVar21;
      *(float *)((long long)&stack_var_ + system_long_variable) = fVar22;
      *(float *)((long long)&stack_var_ + system_long_variable + 4) = fVar24;
      if (flags != 0) {
        stack_var_ = stack_var_ & INT64_MASK;
        if (*(long long *)(flags + 0x2908) == 0) {
          system_function_(flags,pfVar3,0x31b189,&stack_var_);
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
          system_function_(flags,&stack_var_,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *(float *)((long long)&stack_var_ + system_long_variable) = fVar20 + 0.01;
      }
      pfVar3 = pfVar3 + 4;
      system_long_variable = system_long_variable + STRING_BUFFER_SIZE;
      system_long_variable = system_long_variable + -1;
    } while (system_long_variable != 0);
    fVar20 = mutex_attr[0xe];
    fVar21 = mutex_attr[0xd];
    fVar22 = mutex_attr[0xc];
    fVar24 = mutex_attr[9];
    fVar28 = mutex_attr[8];
    fVar30 = mutex_attr[10];
    stack_var_ = 0x7f7fffff;
    pfVar3 = afStack_2e8;
    system_long_variable = CONFIG_PATH_BUFFER_SIZE;
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
      system_long_variable = system_long_variable + -1;
    } while (system_long_variable != 0);
    if (flags != 0) {
      pfVar3 = (float *)&stack_var_;
      pfVar5 = afStack_2e8;
      do {
        stack_var_ = stack_var_ & INT64_MASK;
        if (*(long long *)(flags + 0x2908) == 0) {
          system_function_(flags,pfVar5,0x31b189,&stack_var_);
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
          system_function_(flags,&stack_var_,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *pfVar3 = fVar20 + 0.01;
        pfVar5 = pfVar5 + 4;
        pfVar3 = pfVar3 + 4;
        system_long_variable = system_long_variable + -1;
      } while (system_long_variable != 0);
    }
    uint_var_ = 0;
    system_long_variable = 0;
    do {
      system_long_variable = 0;
      if (uint_var_ != 0x1f) {
        system_long_variable = system_long_variable + 1;
      }
      if (((handle2 == '\0') || ((uint_var_ & 1) != 0)) &&
         (cVar1 = system_function_((double)((float)(int)uint_var_ * 0.19634955),SUB84((double)param_6,0),
                                (double)param_7), cVar1 != '\0')) {
        fStack_370 = *(float *)(&stack_var_ + system_long_variable * 2) - *(float *)(&stack_var_ + system_long_variable * 2);
        stack_var_ = CONCAT44(afStack_2e8[system_long_variable * 4 + 1] - afStack_2e8[system_long_variable * 4 + 1],
                              afStack_2e8[system_long_variable * 4] - afStack_2e8[system_long_variable * 4]);
        stack_var_ = 0x7f7fffff;
        stack_var_ = 0;
        stack_var_ = CONCAT31(stack_var_._1_3_,handle1);
        system_function_(handle,afStack_2e8 + system_long_variable * 4,&stack_var_,param_8);
      }
      uint_var_ = uint_var_ + 1;
      system_long_variable = system_long_variable + 1;
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
                pflags6 = system_pointer_variable;
                *(void **)((long long)pflags6 + -8) = &system_18076804b;
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
            piVar2 = (int *)(((ulong long)in_RAX & UINT32_MAXffffff20) - 0x75);
            *piVar2 = *piVar2 + (int)handle;
            *(int *)(((ulong long)in_RAX & UINT32_MAXffffff20) - 0x17ffffff) = (int)pflags3;
            halt_baddata();
          }
        }
      }
    }
  }
  mutex_type = 0x266;
  *(unsigned char *)((long long)register0x00000020 + CONFIG_PATH_BUFFER_SIZE) = 1;
label_:
  uint_var_ = *(unsigned long long *)(char_system_pointer_variable + 0x1a0);
  *(unsigned char **)((long long)register0x00000020 + -8) = &label_;
  system_function_(uint_var_,char_system_pointer_variable,mutex_attr,mutex_type);
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
  long long system_long_variable;
  float *pfVar5;
  int int_var_;
  float *pfVar7;
  uint uint_var_;
  ulong long uint_var_;
  ulong long uint_var_;
  int *piVar12;
  uint uint_var_;
  long long *psystem_init_result4;
  long long system_init_result5;
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
  psystem_init_result4 = (long long *)&data_180be5740;
  int_var_ = 0;
  do {
    uint_var_ = 0;
    system_init_result5 = *psystem_init_result4;
    uint_var_ = STRING_BUFFER_SIZE >> ((byte)int_var_ & 0x1f);
    uint_var_ = SYSTEM_CONFIG_BUFFER_SIZE >> ((byte)int_var_ & 0x1f);
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
        *(unsigned char (*) [16])(system_init_result5 + uint_var_ * 4) = in_XMM2;
        uint_var_ = uint_var_ + 4;
        uint_var_ = uint_var_;
      } while ((int)uint_var_ < (int)(uint_var_ - uint_var_));
    }
    if ((int)uint_var_ < (int)uint_var_) {
      pfVar7 = (float *)(system_init_result5 + uint_var_ * 4);
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
    psystem_init_result4 = psystem_init_result4 + 1;
  } while (int_var_ < 5);
  piVar12 = (int *)0x180be5774;
  pfVar7 = (float *)0x180c2e040;
  system_global_data_ = 0x180c2e040;
  handle = -handle;
  int_var_ = 2;
  int_var_ = STRING_BUFFER_SIZE0;
  system_init_result5 = 0x140;
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
    system_long_variable = -0xefc;
    if (uint_var_ != 0x1f) {
      system_long_variable = STRING_BUFFER_SIZE0;
    }
    pfVar7 = (float *)(system_long_variable + (long long)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      system_long_variable = -0xebc;
      if (uint_var_ != 0x1f) {
        system_long_variable = system_init_result5;
      }
      fVar24 = (float)piVar12[1] * 1.5258789e-05 * (float)int_var_;
      *pfVar7 = fVar24;
      *(float *)(system_long_variable + (long long)pfVar5) = fVar24;
    }
    if ((bVar1 & 0x1f) == 0x1f) {
      system_long_variable = -0x1ef8;
      if (uint_var_ != 0x1f) {
        system_long_variable = -0xefc;
      }
      pfVar7 = (float *)(system_long_variable + (long long)pfVar5);
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
    system_long_variable = -0xefc;
    int_var_ = -int_var_;
    if (((byte)(int_var_ + 1U) & 0x3f) != 0x3f) {
      int_var_ = int_var_;
    }
    if (uint_var_ != 0x1f) {
      system_long_variable = STRING_BUFFER_SIZE0;
    }
    pfVar5 = (float *)(system_long_variable + (long long)pfVar7);
    if (pfVar5 < (float *)0x180c2e880) {
      system_long_variable = -0xebc;
      if (uint_var_ != 0x1f) {
        system_long_variable = system_init_result5;
      }
      fVar24 = (float)piVar12[3] * 1.5258789e-05 * (float)int_var_;
      *pfVar5 = fVar24;
      *(float *)(system_long_variable + (long long)pfVar7) = fVar24;
    }
    if ((bVar1 + 2 & 0x1f) == 0x1f) {
      system_long_variable = -0x1ef8;
      if (uint_var_ != 0x1f) {
        system_long_variable = -0xefc;
      }
      pfVar5 = (float *)(system_long_variable + (long long)pfVar7);
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
    system_long_variable = -0xefc;
    int_var_ = -int_var_;
    if (((byte)(int_var_ + 3U) & 0x3f) != 0x3f) {
      int_var_ = int_var_;
    }
    if (uint_var_ != 0x1f) {
      system_long_variable = STRING_BUFFER_SIZE0;
    }
    pfVar7 = (float *)(system_long_variable + (long long)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      system_long_variable = -0xebc;
      if (uint_var_ != 0x1f) {
        system_long_variable = system_init_result5;
      }
      fVar24 = (float)piVar12[5] * 1.5258789e-05 * (float)int_var_;
      *pfVar7 = fVar24;
      *(float *)(system_long_variable + (long long)pfVar5) = fVar24;
    }
    if ((bVar1 + 4 & 0x1f) == 0x1f) {
      system_long_variable = -0x1ef8;
      if (uint_var_ != 0x1f) {
        system_long_variable = -0xefc;
      }
      pfVar7 = (float *)(system_long_variable + (long long)pfVar5);
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
    system_long_variable = -0xefc;
    if ((bVar1 + 5 & 0x1f) != 0x1f) {
      system_long_variable = STRING_BUFFER_SIZE0;
    }
    uint_var_ = uint_var_ + 8;
    pfVar7 = (float *)(system_long_variable + (long long)pfVar7);
    int_var_ = int_var_ + 8;
    piVar12 = piVar12 + 8;
  } while (int_var_ < STRING_BUFFER_SIZE_2);
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
        system_long_variable = -0xefc;
        if (uint_var_ != 0x1f) {
          system_long_variable = STRING_BUFFER_SIZE0;
        }
        pfVar7 = (float *)(system_long_variable + (long long)pfVar5);
        if (pfVar7 < (float *)0x180c2e880) {
          system_long_variable = -0xebc;
          if (uint_var_ != 0x1f) {
            system_long_variable = system_init_result5;
          }
          fVar24 = (float)*piVar12 * 1.5258789e-05 * (float)int_var_;
          *pfVar7 = fVar24;
          *(float *)(system_long_variable + (long long)pfVar5) = fVar24;
        }
        uint_var_ = uint_var_ & 0x8000001f;
        if ((int)uint_var_ < 0) {
          uint_var_ = (uint_var_ - 1 | 0xffffffe0) + 1;
        }
        if (uint_var_ == 0x1f) {
          system_long_variable = -0x1ef8;
          if (uint_var_ != 0x1f) {
            system_long_variable = -0xefc;
          }
          pfVar7 = (float *)(system_long_variable + (long long)pfVar5);
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
        system_long_variable = -0xefc;
        if (uint_var_ != 0x1f) {
          system_long_variable = STRING_BUFFER_SIZE0;
        }
        piVar12 = piVar12 + -4;
        pfVar7 = (float *)(system_long_variable + (long long)pfVar7);
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
    int_var_ = system_function_(*(unsigned long long *)(unaff_RBX + 0x170),*(unsigned int *)(unaff_RBX + 0x110),0);
    if ((int_var_ != 0) ||
       (int_var_ = system_function_(*(unsigned long long *)(unaff_RBX + 0x170),0x180c2ea70,1,
                              iStack0000000000000030 + 4), int_var_ != 0)) goto label_;
    pflags = (uint *)(unaff_RBX + 0x1cc);
    int_var_ = system_function_();
    if (int_var_ == 0) {
      *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + iStack0000000000000030 + 4;
      int_var_ = system_function_(*(unsigned long long *)(unaff_RBX + 0x170),0x180c2ea70,1);
      if (int_var_ != 0) goto label_;
    }
    uint_var_ = *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 8);
    *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 8) = 2;
    system_function_();
    *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 8) = uint_var_;
    int_var_ = system_function_(*(unsigned long long *)(unaff_RBX + 0x170),*(unsigned int *)(unaff_RBX + 0x110),0);
    if (int_var_ == 0) {
      if (*(int *)(unaff_RBX + 0x1c4) == int_var_) {
        *(unsigned int *)(unaff_RBX + 0x1c4) = 0x480;
      }
      uint_var_ = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaff_R12D & SYSTEM_CONFIG_BUFFER_SIZE_00) == 0) ||
         ((*(uint *)(*(long long *)(unaff_RBX + 0x170) + 0x194) & 1) == 0)) {
        system_long_variable = *(long long *)(unaff_RBX + 8);
        if (*(int *)(system_long_variable + 0x14) == -1) {
          *(unsigned int *)(system_long_variable + 0x18) = 0xffffffff;
        }
        else if (*(char *)(unaff_RBX + 0x23c) == (char)unaff_R15) {
          *(uint *)(system_long_variable + 0x18) =
               ((*(int *)(system_long_variable + 0x14) + -1 + uint_var_) / uint_var_ + 1) * *(int *)(unaff_RBX + 0x1c4);
          *(uint *)(unaff_RBX + 0x2c) = *(uint *)(unaff_RBX + 0x2c) & 0xfffffffe;
        }
        else {
          *(uint *)(system_long_variable + 0x18) = *pflags * 0x480;
        }
        goto label_;
      }
      system_function_(*(unsigned long long *)(unaff_RBX + 0x170),*(unsigned int *)(unaff_RBX + 0x110),0);
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
    int_var_ = system_function_();
    if ((int_var_ == 0) &&
       (in_stack_00000040._4_4_ + uint_var_ < *(uint *)(*(long long *)(unaff_RBX + 8) + 0x14))) {
      if (*pflags <= (uint)unaff_R15) {
        uint_var_ = *pflags + 1000;
        *pflags = uint_var_;
        system_long_variable = system_function_(*(unsigned long long *)(system_global_data_ + 0x1a0),
                              *(unsigned long long *)(unaff_RBX + 0x1d0),uint_var_ * 4,&system_18097c490,0x113);
        *(long long *)(unaff_RBX + 0x1d0) = system_long_variable;
        if (system_long_variable == 0) goto label_;
      }
      uint_var_ = unaff_R15 & 0xffffffff;
      unaff_R15 = (ulong long)((uint)unaff_R15 + 1);
      *(uint *)(*(long long *)(unaff_RBX + 0x1d0) + uint_var_ * 4) = uint_var_;
      piVar1 = (int *)(*(long long *)(unaff_RBX + 8) + 0x18);
      *piVar1 = *piVar1 + int_var_;
      uint_var_ = uint_var_ + 4 + in_stack_00000040._4_4_;
      int_var_ = system_function_(*(unsigned long long *)(unaff_RBX + 0x170),in_stack_00000040._4_4_,1);
      if (int_var_ != 0) break;
    }
    else {
      system_function_(*(unsigned long long *)(unaff_RBX + 0x170),0xfffffffd,1);
    }
    if (*(uint *)(*(long long *)(unaff_RBX + 8) + 0x14) <= uint_var_) break;
label_:
    int_var_ = system_function_(*(unsigned long long *)(unaff_RBX + 0x170),&stack0x0000004c,1,4,0);
    if (int_var_ != 0) break;
  }
label_:
  int_var_ = system_function_(*(unsigned long long *)(unaff_RBX + 0x170),in_stack_00000050,0);
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
    if ((*(long long *)(unaff_RBX + 0x1d0) != 0) && ((unaff_R12D & SYSTEM_CONFIG_BUFFER_SIZE_00) == 0)) {
      system_function_(*(unsigned long long *)(system_global_data_ + 0x1a0),*(long long *)(unaff_RBX + 0x1d0),
                    &system_18097c490,0x282,1);
    }
    *(ulong long *)(unaff_RBX + 0x178) = unaff_R15;
    *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 8) = 2;
    *(unsigned int *)(*(long long *)(unaff_RBX + 8) + 0x1c) = 0x480;
    system_function_();
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
       (int_var_ = system_function_(*(unsigned long long *)(unaff_RDI + 0x170),*(unsigned int *)(unaff_RDI + 0x110),
                              0), int_var_ == 0)) {
      memset(unaff_RDI + 0x178,0,0x330);
    }
  }
system_function_:
  system_crypto_001(*(ulong long *)(unaff_RBP + 0x218) ^ (ulong long)&stack0x00000000);
}
      data_180c4f4e8 = 0;
      system_global_data_ = uint_var_;
      system_crypto_003(&data_180c4f4f0);
    }
  }
  return &data_180c4f4a0;
}
unsigned long long initialize_system_mutex(unsigned long long *handle,long long flags,char mutex_attr,char mutex_type)
{
  int int_var_;
  uint flags;
  uint *system_pointer_variable;
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
  system_pointer_variable = (uint *)system_function_();
  stack_var_ = 0;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  auStack_28[0] = *system_pointer_variable;
  uint_var_ = system_function_(handle,*(unsigned long long *)(flags + STRING_BUFFER_SIZE),auStack_28,&stack_var_,&uStackX_10);
  if ((int)uint_var_ != 0) {
    return uint_var_;
  }
  if ((char)uStackX_10 == (char)uint_var_) {
    return 0;
  }
  uStackX_10 = 0;
  system_pointer_variable = (uint *)system_function_();
  flags = *(uint *)((long long)handle + 0xc);
  if (((flags != *system_pointer_variable) && (*(uint *)(handle + 4) <= flags)) &&
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
  system_function_();
  if (mutex_attr != '\0') {
    uint_var_ = system_function_(handle,flags,flags + CONFIG_PATH_BUFFER_SIZE,&stack_var_,&uStackX_10,uint_var_,0);
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
  uint_var_ = system_function_(handle,flags,flags + 0x28,&stack_var_,&uStackX_10,uint_var_,1);
  if ((int)uint_var_ == 0) {
    *(int *)(flags + 0x18) = *(int *)(flags + 0x18) + 1;
    return 0;
  }
  return uint_var_;
}
unsigned long long
system_function_(long long handle,long long flags,long long *mutex_attr,long long *mutex_type,
             unsigned long long *param_5,char param_6,char param_7)
{
  uint uint_var_;
  long long system_long_variable;
  byte bVar3;
  unsigned int *system_pointer_variable;
  unsigned long long uint_var_;
  unsigned long long uint_var_;
  long long system_long_variable;
  long long system_long_variable;
  unsigned int uint_var_;
  long long lStackX_8;
  unsigned char auStack_28 [16];
  uint_var_ = *(unsigned long long *)(handle + 0x28);
  system_pointer_variable = (unsigned int *)system_function_();
  system_long_variable = *mutex_type;
  uint_var_ = *system_pointer_variable;
  system_long_variable = system_long_variable;
  if ((*(uint *)(flags + 0x1c) >> 1 & 1) != 0) {
    system_long_variable = *mutex_attr;
    system_long_variable = system_long_variable - system_long_variable;
    uint_var_ = *(unsigned long long *)(handle + 0x30);
    if (-1 < system_long_variable) {
      if (system_long_variable < 1) {
        uint_var_ = 0;
        system_long_variable = system_long_variable;
      }
      else {
        uint_var_ = *(uint *)(*(long long *)(*(long long *)(handle + 0x38) + 8) + 0x774);
        if (uint_var_ != 48000) {
          system_long_variable = (system_long_variable * 48000) / (long long)(ulong long)uint_var_;
        }
        if (0xffffffff < system_long_variable) {
          system_long_variable = 0xffffffff;
        }
        uint_var_ = (unsigned int)system_long_variable;
        system_long_variable = system_long_variable;
      }
    }
  }
  if (param_6 != '\0') {
    (**(code **)(**(long long **)(flags + STRING_BUFFER_SIZE) + 0x30))(*(long long **)(flags + STRING_BUFFER_SIZE),auStack_28)
    ;
    uint_var_ = system_function_(uint_var_,auStack_28,system_long_variable,
                          *(unsigned int *)(*(long long *)(flags + STRING_BUFFER_SIZE) + 0xb4));
    if ((int)uint_var_ != 0) {
      return uint_var_;
    }
  }
  uint_var_ = system_function_(uint_var_,*(unsigned long long *)(flags + STRING_BUFFER_SIZE),system_long_variable,*param_5,uint_var_,0,0,&lStackX_8);
  if ((int)uint_var_ == 0) {
    if (param_7 != (char)uint_var_) {
      func_0x0001808cf230(lStackX_8,system_long_variable);
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
  cVar1 = system_function_();
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
  int_var_ = system_function_();
  if (int_var_ != 0) {
    return 0x809200ff;
  }
  int_var_ = system_function_(handle,auStack_18);
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
  long long system_init_result;
  uint flags;
  uint uint_var_;
  char cVar4;
  byte bVar5;
  int int_var_;
  uint uint_var_;
  unsigned short *system_pointer_variable;
  unsigned short *system_pointer_variable;
  byte abStackX_18 [8];
  long long lStackX_20;
  if (data_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (flags == (uint *)0x0) {
    return 0x80920001;
  }
  int_var_ = system_function_();
  if (int_var_ != 0) {
    return 0x809200ff;
  }
  int_var_ = func_0x0001808f0200(handle);
  if (int_var_ < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  system_function_(flags);
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
        system_init_result = *(long long *)(lStackX_20 + 0x160);
        uint_var_ = *(uint *)(system_init_result + 0x74);
        flags = *(uint *)(system_init_result + 0x78);
        uint_var_ = *(uint *)(system_init_result + 0x7c);
        flags[3] = *(uint *)(system_init_result + 0x70);
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
      system_init_result = *(long long *)(lStackX_20 + 0x160);
      bVar5 = *(byte *)(system_init_result + 0x19);
      if (2 < *(byte *)(system_init_result + 0x19)) {
        bVar5 = 2;
      }
      int_var_ = 0;
      *(byte *)(flags + 0xd) = bVar5;
      if (*(char *)(system_init_result + 0x19) != '\0') {
        system_pointer_variable = (unsigned short *)((long long)flags + 0x3e);
        system_pointer_variable = (unsigned short *)(system_init_result + 0x1e);
        do {
          int_var_ = int_var_ + 1;
          system_pointer_variable[-1] = system_pointer_variable[-1];
          *system_pointer_variable = *system_pointer_variable;
          *(unsigned char *)(system_pointer_variable + 1) = *(unsigned char *)(system_pointer_variable + -2);
          system_pointer_variable = system_pointer_variable + 4;
          system_pointer_variable = system_pointer_variable + 3;
        } while (int_var_ < (int)(uint)*(byte *)(system_init_result + 0x19));
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
  long long system_long_variable;
  if (data_180c4f818 == '\0') {
    return -0x7f6dfffb;
  }
  if (flags == (byte *)0x0) {
    return -0x7f6dffff;
  }
  int_var_ = system_function_();
  if (int_var_ != 0) {
    return -0x7f6dff01;
  }
  int_var_ = func_0x0001808f0200(handle);
  if (int_var_ < 0) {
    func_0x0001808f6ce0();
    return -0x7f6dfffd;
  }
  system_long_variable = func_0x0001808f0dd0(handle,0);
  if (system_long_variable != 0) {
    cVar1 = func_0x0001808f0e30(*(unsigned short *)(system_long_variable + 2),*(unsigned short *)(system_long_variable + 4));
    if ((((cVar1 == '\0') && (*flags < 0xd)) && (flags[1] < 0xd)) && (flags[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    int_var_ = system_function_(handle,flags);
    if (-1 < int_var_) {
      *(byte *)(system_long_variable + 0x23e8) = *flags;
      *(byte *)(system_long_variable + 0x23e9) = flags[1];
      *(byte *)(system_long_variable + 0x23ea) = flags[2];
      *(byte *)(system_long_variable + 0x23ec) = *flags;
      *(byte *)(system_long_variable + 0x23ed) = flags[1];
      *(byte *)(system_long_variable + 0x23ee) = flags[2];
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
  long long system_long_variable;
  byte *unaff_RBX;
  unsigned int unaff_ESI;
  system_long_variable = func_0x0001808f0dd0(unaff_ESI);
  if (system_long_variable != 0) {
    cVar1 = func_0x0001808f0e30(*(unsigned short *)(system_long_variable + 2),*(unsigned short *)(system_long_variable + 4));
    if ((((cVar1 == '\0') && (*unaff_RBX < 0xd)) && (unaff_RBX[1] < 0xd)) && (unaff_RBX[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    int_var_ = system_function_(unaff_ESI);
    if (-1 < int_var_) {
      *(byte *)(system_long_variable + 0x23e8) = *unaff_RBX;
      *(byte *)(system_long_variable + 0x23e9) = unaff_RBX[1];
      *(byte *)(system_long_variable + 0x23ea) = unaff_RBX[2];
      *(byte *)(system_long_variable + 0x23ec) = *unaff_RBX;
      *(byte *)(system_long_variable + 0x23ed) = unaff_RBX[1];
      *(byte *)(system_long_variable + 0x23ee) = unaff_RBX[2];
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
  int_var_ = system_function_(unaff_ESI);
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
          *(int *)(system_long_variable + STRING_BUFFER_SIZE) = int_var_;
          *(int *)(system_long_variable + 0x18) = int_var_;
          func_0x0001808f0b40(system_long_variable);
          return 0;
        }
        system_long_variable = system_long_variable + 0x2408;
      } while (system_long_variable < 0x180c58840);
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
  system_global_data_ = _beginthread(system_function_,0,0);
  if ((system_global_data_ != -1) &&
     (system_global_data_ = _beginthread(system_function_,0,0), system_global_data_ != -1)) {
    return 1;
  }
  return 0;
}
  data_180c69e20 = 1;
  return;
}
unsigned int validate_timer_parameters(byte handle,byte *flags,int mutex_attr)
{
  uint *system_pointer_variable;
  byte bVar2;
  uint uint_var_;
  mutex_attr = mutex_attr + -4;
  system_pointer_variable = (uint *)(flags + mutex_attr);
  uint_var_ = *(uint *)(&system_18098a100 + (ulong long)(byte)~handle * 4) ^ 0xffffff;
  for (; 0 < mutex_attr; mutex_attr = mutex_attr + -1) {
    bVar2 = *flags;
    flags = flags + 1;
    uint_var_ = *(uint *)(&system_18098a100 + (ulong long)(byte)(bVar2 ^ (byte)uint_var_) * 4) ^ uint_var_ >> 8;
  }
  return CONCAT31((int3)(~uint_var_ >> 8),*system_pointer_variable != ~uint_var_);
}
float * system_function_(float *handle,float *flags,float *mutex_attr)
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
  long long system_init_result;
  system_init_result = func_0x0001808f0dd0(handle,0);
  if (system_init_result != 0) {
    *flags = *(unsigned int *)(system_init_result + 100);
    return 0;
  }
  return 0x8001002d;
}
      data_180bf0080 = '\0';
      if (system_global_data_ == 0) {
        system_long_variable = system_function_(&system_18098ab30);
        if (system_long_variable != 0) {
          system_long_variable = LoadLibraryExW(system_long_variable,0,0);
        }
        LocalFree(system_long_variable);
        system_global_data_ = system_long_variable;
        if (system_long_variable == 0) goto label_;
      }
      if ((((system_global_data_ == (code *)0x0) &&
           (system_global_data_ = (code *)GetProcAddress(system_global_data_,&system_18098aef8),
           system_global_data_ == (code *)0x0)) ||
          ((system_global_data_ == 0 &&
           (system_global_data_ = GetProcAddress(system_global_data_,&system_18098af08), system_global_data_ == 0))))
         || ((system_global_data_ == 0 &&
             (system_global_data_ = GetProcAddress(system_global_data_,&system_18098af18), system_global_data_ == 0)))
         ) goto label_;
      if ((system_global_data_ == 0) &&
         (system_global_data_ = system_function_(&system_18098af28,0), system_global_data_ != 0)) {
        system_global_data_ = (code *)GetProcAddress(system_global_data_,&system_18098af40);
      }
      char_system_pointer_variable = system_global_data_;
      if (system_global_data_ == (code *)0x0) goto label_;
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
      _guard_check_icall(system_global_data_);
      int_var_ = (*char_system_pointer_variable)(&stack_var_,&stack_var_,0x27);
      if (int_var_ != 0x27) goto label_;
      for (system_pointer_variable = auStack_1c0; char_system_pointer_variable = system_global_data_, uint_var_ = *system_pointer_variable, uint_var_ != 0;
          system_pointer_variable = system_pointer_variable + 1) {
        stack_var_ = 0;
        _guard_check_icall(system_global_data_);
        system_stack_pointer = &stack_var_;
        int_var_ = (*char_system_pointer_variable)(0xffffffff80000002,&system_18098af50,0,uint_var_ | CONFIG_PATH_BUFFER_SIZE019);
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
  OutputDebugStringW(&system_18098afa0);
  SetLastError(0);
label_:
  system_crypto_001(stack_var_ ^ (ulong long)auStack_228);
}
          data_180c6a14c = int_var_ == 1;
          SetConsoleTitleA(&system_18098b4e0);
        }
      }
      data_180c6a14d = data_180c6a14c == '\0';
      if (system_global_data_ == 0) {
        system_long_variable = _wfsopen(handle,&system_18098b51c,SYSTEM_CONFIG_BUFFER_SIZE);
        if (system_long_variable == 0) {
          system_function_(&system_18098b490,0xc1,&system_18098b470,&system_18098b520,handle);
          bVar10 = false;
        }
        else {
          fclose(system_long_variable);
          system_function_(&system_18098b490,200,&system_18098b470,&system_18098b580,handle);
          system_long_variable = _wcsdup(handle);
          system_long_variable = -1;
          if (system_long_variable != 0) {
            do {
              system_long_variable = system_long_variable;
              system_long_variable = system_long_variable + 1;
            } while (*(short *)(handle + 2 + system_long_variable * 2) != 0);
            system_long_variable = system_long_variable;
            while( true ) {
              system_long_variable = 0;
              if (((system_long_variable == 0) || (sVar1 = *(short *)(system_long_variable + system_long_variable * 2), system_long_variable = 0, sVar1 == 0x2f)
                  ) || (system_long_variable = 0, sVar1 == 0x5c)) goto label_;
              if (sVar1 == 0x2e) break;
              system_long_variable = system_long_variable + -1;
            }
            *(unsigned short *)(system_long_variable + system_long_variable * 2) = 0;
            system_long_variable = system_long_variable + 2 + system_long_variable * 2;
label_:
            system_long_variable = system_long_variable + 9;
            system_long_variable = malloc(system_long_variable * 2);
            if (system_long_variable == 0) {
              free(system_long_variable);
              return false;
            }
            int_var_ = 1;
            system_long_variable = system_global_data_;
            do {
              system_global_data_ = system_long_variable;
              if (system_long_variable == 0) {
                system_function_(system_long_variable,system_long_variable,&system_18098b5f8,system_long_variable,int_var_);
              }
              else {
                system_function_(system_long_variable,system_long_variable,&system_18098b5d8,system_long_variable,int_var_,system_long_variable);
              }
              system_global_data_ = _wfsopen(system_long_variable,system_pointer_variable,CONFIG_PATH_BUFFER_SIZE);
              if (system_global_data_ != 0) {
                system_pointer_variable = &system_18098b610;
                uint_var_ = 0xeb;
                handle = system_long_variable;
                goto label_;
              }
              int_var_ = int_var_ + 1;
              system_long_variable = 0;
            } while (int_var_ < 9);
            system_pointer_variable = &system_18098b640;
            uint_var_ = 0xef;
label_:
            system_function_(&system_18098b490,uint_var_,&system_18098b470,system_pointer_variable,handle);
            free(system_long_variable);
            free(system_long_variable);
          }
          bVar10 = system_global_data_ != 0;
        }
      }
      else {
        system_function_(&system_18098b490,0xb4,&system_18098b470,&system_18098b4e8,handle);
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
  long long system_long_variable;
  uint uint_var_;
  int int_var_;
  long long system_long_variable;
  unsigned long long uint_var_;
  long long system_long_variable;
  long long system_long_variable;
  long long system_long_variable;
  char unaff_SIL;
  long long unaff_RDI;
  short sVar10;
  long long unaff_R12;
  void *system_pointer_variable;
  bool bVar12;
  uint in_stack_00000090;
  uint in_stack_00000098;
  if (unaff_RDI != 0) {
    system_long_variable = -1;
    do {
      system_long_variable = system_long_variable + 1;
      sVar10 = (short)unaff_R12;
    } while (*(short *)(unaff_RDI + system_long_variable * 2) != sVar10);
    if (system_long_variable != 0) {
      system_pointer_variable = &system_18098b464;
      if (unaff_SIL != '\0') {
        system_pointer_variable = &system_18098b45c;
      }
      system_global_data_ = _wfsopen();
      if ((1 < system_global_data_) && ((uint)unaff_R12 < in_stack_00000090)) {
        uint_var_ = GetConsoleWindow();
        in_stack_00000098 = (uint)unaff_R12;
        GetWindowThreadProcessId(uint_var_,&stack0x00000098);
        uint_var_ = GetCurrentProcessId();
        if (uint_var_ != in_stack_00000098) {
          int_var_ = AllocConsole();
          data_180c6a14c = int_var_ == 1;
          SetConsoleTitleA(&system_18098b4e0);
        }
      }
      data_180c6a14d = data_180c6a14c == (char)unaff_R12;
      if (system_global_data_ == unaff_R12) {
        system_long_variable = _wfsopen();
        if (system_long_variable == 0) {
          system_function_(&system_18098b490,0xc1,&system_18098b470,&system_18098b520);
          bVar12 = false;
        }
        else {
          fclose(system_long_variable);
          system_function_(&system_18098b490,200,&system_18098b470,&system_18098b580);
          system_long_variable = _wcsdup();
          system_long_variable = -1;
          if (system_long_variable != 0) {
            do {
              system_long_variable = system_long_variable;
              system_long_variable = system_long_variable + 1;
              system_long_variable = system_long_variable;
            } while (*(short *)(unaff_RDI + 2 + system_long_variable * 2) != sVar10);
            while( true ) {
              system_long_variable = unaff_R12;
              if (((system_long_variable == 0) || (sVar1 = *(short *)(system_long_variable + system_long_variable * 2), sVar1 == 0x2f)) ||
                 (sVar1 == 0x5c)) goto label_;
              if (sVar1 == 0x2e) break;
              system_long_variable = system_long_variable + -1;
            }
            *(short *)(system_long_variable + system_long_variable * 2) = sVar10;
            system_long_variable = system_long_variable + 2 + system_long_variable * 2;
label_:
            system_long_variable = system_long_variable + 9;
            system_long_variable = malloc(system_long_variable * 2);
            if (system_long_variable == 0) {
              free(system_long_variable);
              return false;
            }
            int_var_ = 1;
            system_long_variable = system_global_data_;
            do {
              system_global_data_ = system_long_variable;
              if (system_long_variable == 0) {
                system_function_(system_long_variable,system_long_variable,&system_18098b5f8,system_long_variable,int_var_);
              }
              else {
                system_function_(system_long_variable,system_long_variable,&system_18098b5d8,system_long_variable,int_var_);
              }
              system_global_data_ = _wfsopen(system_long_variable,system_pointer_variable,CONFIG_PATH_BUFFER_SIZE);
              if (system_global_data_ != 0) {
                system_pointer_variable = &system_18098b610;
                uint_var_ = 0xeb;
                goto label_;
              }
              int_var_ = int_var_ + 1;
              system_long_variable = 0;
            } while (int_var_ < 9);
            system_pointer_variable = &system_18098b640;
            uint_var_ = 0xef;
label_:
            system_function_(&system_18098b490,uint_var_,&system_18098b470,system_pointer_variable);
            free(system_long_variable);
            free(system_long_variable);
          }
          bVar12 = system_global_data_ != unaff_R12;
        }
      }
      else {
        system_function_(&system_18098b490,0xb4,&system_18098b470,&system_18098b4e8);
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
  long long system_long_variable;
  long long system_long_variable;
  long long system_long_variable;
  unsigned long long uint_var_;
  int int_var_;
  long long unaff_RBX;
  long long system_long_variable;
  long long unaff_RDI;
  void *system_pointer_variable;
  long long unaff_R12;
  long long system_long_variable;
  fclose();
  system_function_(&system_18098b490,200,&system_18098b470,&system_18098b580);
  system_long_variable = _wcsdup();
  if (system_long_variable != 0) {
    do {
      system_long_variable = unaff_RBX;
      unaff_RBX = system_long_variable + 1;
      system_long_variable = system_long_variable;
    } while (*(short *)(unaff_RDI + 2 + system_long_variable * 2) != (short)unaff_R12);
    while( true ) {
      system_long_variable = unaff_R12;
      if (((system_long_variable == 0) || (sVar1 = *(short *)(system_long_variable + system_long_variable * 2), sVar1 == 0x2f)) ||
         (sVar1 == 0x5c)) goto label_;
      if (sVar1 == 0x2e) break;
      system_long_variable = system_long_variable + -1;
    }
    *(short *)(system_long_variable + system_long_variable * 2) = (short)unaff_R12;
    system_long_variable = system_long_variable + 2 + system_long_variable * 2;
label_:
    system_long_variable = system_long_variable + 9;
    system_long_variable = malloc(system_long_variable * 2);
    if (system_long_variable == 0) {
      free(system_long_variable);
      return false;
    }
    int_var_ = 1;
    system_long_variable = system_global_data_;
    do {
      system_global_data_ = system_long_variable;
      if (system_long_variable == 0) {
        system_function_(system_long_variable,system_long_variable,&system_18098b5f8,system_long_variable,int_var_);
      }
      else {
        system_function_(system_long_variable,system_long_variable,&system_18098b5d8,system_long_variable,int_var_);
      }
      system_global_data_ = _wfsopen(system_long_variable);
      if (system_global_data_ != 0) {
        system_pointer_variable = &system_18098b610;
        uint_var_ = 0xeb;
        goto label_;
      }
      int_var_ = int_var_ + 1;
      system_long_variable = 0;
    } while (int_var_ < 9);
    system_pointer_variable = &system_18098b640;
    uint_var_ = 0xef;
label_:
    system_function_(&system_18098b490,uint_var_,&system_18098b470,system_pointer_variable);
    free(system_long_variable);
    free(system_long_variable);
  }
  return system_global_data_ != unaff_R12;
}
  data_180c6a14d = data_180c6a14c == unaff_R12B;
  return 1;
}
    data_180bf0082 = '\x01';
    wcscpy_s(auStack_228,STRING_BUFFER_SIZE4,handle);
    if ((data_180bf0082 != '\0') && (wcscat_s(auStack_228,STRING_BUFFER_SIZE4,flags), data_180bf0082 != '\0')) {
      system_function_(auStack_228,0);
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
      system_function_(auStackX_20,0);
    }
  }
  _set_invalid_parameter_handler(uint_var_);
  system_crypto_001(in_stack_00000230 ^ (ulong long)&stack0x00000000);
}
    data_180c821d8 = 1;
  }
  system_function_();
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
  code *char_system_pointer_variable;
  byte bVar2;
  int int_var_;
  unsigned long long uint_var_;
  if (data_180c821d9 == '\0') {
    if (1 < handle) {
      system_function_(5);
      char_system_pointer_variable = (code *)swi(3);
      uint_var_ = (*char_system_pointer_variable)();
      return uint_var_;
    }
    int_var_ = func_0x0001808fd8d4();
    if ((int_var_ == 0) || (handle != 0)) {
      bVar2 = SYSTEM_CONFIG_BUFFER_SIZE - ((byte)system_global_data_ & 0x3f) & 0x3f;
      system_global_data_ = (0xffffffffffffffffU >> bVar2 | -1L << SYSTEM_CONFIG_BUFFER_SIZE - bVar2) ^ system_global_data_;
      uRam0000000180c821e8 = system_global_data_;
      system_global_data_ = system_global_data_;
      system_global_data_ = system_global_data_;
      uRam0000000180c82200 = system_global_data_;
      system_global_data_ = system_global_data_;
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_1800002a0; pIVar3 != (IMAGE_SECTION_HEADER *)&system_1800003e0;
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
    script_system_initialized = '\0';
  }
  return;
}
    config_system_initialized = '\0';
  }
  return;
}
    memory_system_initialized = '\0';
  }
  return;
}
    thread_pool_initialized = '\0';
  }
  return;
}
    module_system_initialized = '\0';
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
    audio_system_initialized = '\0';
  }
  return;
}
    render_system_initialized = '\0';
  }
  return;
}
    physics_system_initialized = '\0';
  }
  return;
}
    data_180c95f28 = '\0';
  }
  return;
}
    network_system_initialized = '\0';
  }
  return;
}
    input_system_initialized = '\0';
  }
  return;
}

#endif // DATA_DEFINITIONS_H
