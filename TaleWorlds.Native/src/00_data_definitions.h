#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 系统常量定义
#define MAX_SYSTEM_VALUE 0x7fffffffffffffff
#define DEFAULT_THREAD_POOL_FLAG DEFAULT_THREAD_POOL_FLAG
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
#define PRIMARY_STRING_BUFFER_SIZE 0x80
#define STRING_BUFFER_SIZE_SECONDARY 0x80
#define THREAD_STACK_SIZE 0x1fff
#define NETWORK_BUFFER_SIZE 0xe8
#define SYSTEM_CONFIG_BUFFER_SIZE 0x238
#define SYSTEM_CONFIG_BUFFER_SIZE_ZERO 0
#define SYSTEM_CONFIG_BUFFER_SIZE_FOUR 4
#define SYSTEM_CONFIG_BUFFER_SIZE_EIGHT 8
#define SYSTEM_CONFIG_BUFFER_SIZE_TWELVE 0xc
#define SYSTEM_CONFIG_BUFFER_SIZE_MIN 0x000000
#define SYSTEM_CONFIG_BUFFER_SIZE_EMPTY 0x00
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
#define MAIN_MUTEX_ADDRESS 0x180c91970
#define CONDITION_VARIABLE_ADDR 0x180c91240
#define CLEANUP_FUNCTION_ADDR 0x180c911a0
#define SECOND_MUTEX_ADDRESS 0x180c91f70
#define THIRD_MUTEX_ADDRESS 0x180c91ff0
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
#define MEMORY_POOL_ADDR_PRIMARY 0x180d496e0
#define MEMORY_POOL_ADDR_SECONDARY 0x180d497e0
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
void* g_handle_manager_address = (void*)0x180a1b368;
// 原始名称: system_180a1b3f0 - 内存管理器地址
void* g_memory_manager_address = (void*)0x180a1b3f0;
// 原始名称: system_180a02fc8 - UI互斥锁属性地址
void* g_ui_mutex_attribute_address = (void*)0x180a02fc8;
// 原始名称: system_180a02fa0 - UI互斥锁类型地址
void* g_ui_mutex_type_address = (void*)0x180a02fa0;
// 原始名称: system_18045f210 - 栈数据地址1
void* g_stack_data_primary_address = (void*)0x18045f210;
// 原始名称: system_18045f200 - 栈数据地址2
void* g_stack_data_secondary_address = (void*)0x18045f200;

// 初始化系统配置
int initialize_system_configuration(void)
{
  int is_system_enabled = 1;
  int operation_count = 0;
  long long max_allowed_value = MAX_SYSTEM_VALUE;
  int system_status = SYSTEM_STATUS_SUCCESS;
  int system_initialization_result = system_initialize(system_init_config_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化核心数据结构
int initialize_core_data_structure(void)
{
  long long system_initialization_result;
  void* system_memory_buffer_ptr = &g_system_data_buffer;
  void* core_data_ptr = &g_core_system_data_value;
  int data_offset = 0;
  g_core_system_data_value = 0;
  system_initialization_result = system_initialize(system_init_core_data_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化网络缓冲区系统
int initialize_network_buffer(void)
{
  long long system_initialization_result;
  void* network_buffer_ptr = &g_network_system_data_buffer;
  void* network_value_ptr = &g_network_buffer_current_data;
  int buffer_offset = 0;
  g_network_buffer_current_data = 0;
  system_initialization_result = system_initialize(system_init_network_buffer_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化渲染上下文系统
int initialize_rendering_context(void)
{
  long long system_initialization_result;
  void* render_buffer_ptr = &g_render_system_data_buffer;
  void* render_value_ptr = &g_render_buffer_current_data;
  int context_offset = 0;
  g_render_buffer_current_data = 0;
  system_initialization_result = system_initialize(system_init_rendering_context_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化模块系统
int initialize_module_system(void)
{
  long long system_initialization_result;
  void* module_buffer_ptr = &g_module_system_data_buffer;
  void* module_value_ptr = &g_module_system_data_value;
  void* null_ptr = 0;
  g_module_system_data_value = 0;
  system_initialization_result = system_execute_function(system_init_module_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化输入系统
int initialize_input_system(void)
{
  long long system_initialization_result;
  void* input_shared_buffer_ptr = &g_shared_system_data_buffer;
  void* input_value_ptr = &g_input_buffer_current_data;
  int buffer_offset = 0;
  g_input_buffer_current_data = 0;
  system_initialization_result = system_execute_function(system_init_input_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化物理系统
int initialize_physics_system(void)
{
  long long system_initialization_result;
  void* physics_shared_buffer_ptr = &g_shared_system_data_buffer;
  void* physics_value_ptr = &g_physics_buffer_current_data;
  int physics_data_offset = 0;
  g_physics_buffer_current_data = 0;
  system_initialization_result = system_execute_function(system_init_physics_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化主线程池
int initialize_main_thread_pool(void* handle, void* thread_operation_flags, void* mutex_attr, int mutex_type)
{
  long long system_initialization_result;
  unsigned long long pool_thread_operation_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(MAIN_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_operation_flags);
  main_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_initialization_result = system_execute_function(main_thread_pool_init_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化渲染线程池
int initialize_rendering_thread_pool(void* handle, void* thread_operation_flags, void* mutex_attr, int mutex_type)
{
  long long system_initialization_result;
  unsigned long long pool_thread_operation_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(RENDER_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_operation_flags);
  render_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_initialization_result = system_execute_function(rendering_thread_pool_init_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化网络线程池
int initialize_network_thread_pool(void* handle, void* thread_operation_flags, void* mutex_attr, int mutex_type)
{
  long long system_initialization_result;
  unsigned long long pool_thread_operation_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(NETWORK_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_operation_flags);
  network_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_initialization_result = system_execute_function(network_thread_pool_init_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化IO线程池
int initialize_io_thread_pool(void* handle, void* thread_operation_flags, void* mutex_attr, int mutex_type)
{
  long long system_initialization_result;
  unsigned long long pool_thread_operation_flags = DEFAULT_THREAD_POOL_FLAG;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(IO_THREAD_POOL_MUTEX_ADDR, 2, mutex_attr, mutex_type, pool_thread_operation_flags);
  io_thread_pool_status = SYSTEM_STATUS_SUCCESS;
  system_initialization_result = system_execute_function(io_thread_pool_init_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化基础资源管理器
int initialize_base_resource_manager(void)
{
  long long system_initialization_result;
  unsigned long long str_length;
  g_resource_string_1 = 0;
  g_resource_id_1 = 6;
  strcpy_s(&g_resource_string_1,STRING_BUFFER_SIZE,&string_source_001,str_length,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(base_resource_manager_init_function);
  return (system_initialization_result != 0) - 1;
}
// 初始化纹理资源管理器
int initialize_texture_resource_manager(void)
{
  long long system_initialization_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_1;
  resource_buffer_1 = 0;
  resource_type_1 = RESOURCE_TYPE_TEXTURE;
  strcpy_s(&resource_buffer_1, RESOURCE_BUFFER_SIZE, &string_source_002, str_length, DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(texture_resource_manager_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_primary_shader_resource_manager(void)
{
  long long system_initialization_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_2;
  resource_buffer_2 = 0;
  resource_type_2 = RESOURCE_TYPE_SHADER;
  strcpy_s(&resource_buffer_2, RESOURCE_BUFFER_SIZE, &string_source_003, str_length, DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(shader_resource_manager_1_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_secondary_shader_resource_manager(void)
{
  long long system_initialization_result;
  unsigned long long str_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_value_ptr = &resource_buffer_3;
  resource_buffer_3 = 0;
  resource_type_3 = RESOURCE_TYPE_SHADER;
  strcpy_s(&resource_buffer_3, RESOURCE_BUFFER_SIZE, &string_source_004, str_length, DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(shader_resource_manager_2_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_audio_resource_manager(void)
{
  long long initialization_result;
  unsigned long long string_length;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_buffer_pointer = &resource_buffer_4;
  resource_buffer_4 = 0;
  resource_type_4 = RESOURCE_TYPE_AUDIO;
  strcpy_s(&resource_buffer_4, RESOURCE_BUFFER_SIZE, &string_source_005, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execute_function(audio_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_font_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_buffer_value_pointer = &resource_buffer_5;
  resource_buffer_5 = 0;
  resource_type_5 = RESOURCE_TYPE_AUDIO;
  strcpy_s(&resource_buffer_5, RESOURCE_BUFFER_SIZE, &string_source_006, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execute_function(font_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_model_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* resource_buffer_value_pointer = &resource_buffer_6;
  resource_buffer_6 = 0;
  resource_type_6 = 4;
  strcpy_s(&resource_buffer_6, RESOURCE_BUFFER_SIZE, &string_source_007, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execute_function(model_resource_manager_init_function);
  return (initialization_result != 0) - 1;
}
int initialize_animation_resource_manager(void)
{
  long long initialization_result;
  size_t string_length_parameter;
  void* resource_buffer_ptr = &g_resource_data_buffer;
  void* system_global_data_pointer = &g_system_name_data;
  g_system_name_data = 0;
  int resource_type = 5;
  strcpy_s(&g_system_name_buffer, RESOURCE_BUFFER_SIZE, &g_system_name_string, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execute_function(animation_resource_manager_init_function);
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
  strcpy_s(&g_system_version_buffer, RESOURCE_BUFFER_SIZE, &g_system_version_string, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execute_function(particle_resource_manager_init_function);
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
  strcpy_s(&g_config_file_path, config_path_buffer_size, &g_config_path_string, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execute_function(config_string_buffer_init_callback);
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
  strcpy_s(&g_save_file_path, config_path_buffer_size, &g_save_path_string, string_length_parameter, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execute_function(savegame_string_buffer_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化互斥锁1
int initialize_main_mutex(void* handle, void* thread_operation_flags, void* mutex_attr, int mutex_type)
{
  long long initialization_result;
  _Mtx_init_in_situ(MAIN_THREAD_POOL_MUTEX_ADDR, STRING_BUFFER_SIZE_SECONDARY, mutex_attr, mutex_type, DEFAULT_THREAD_POOL_FLAG);
  initialization_result = system_execute_function(main_mutex_init_callback);
  return (initialization_result != 0) - 1;
}
// 初始化数据缓冲区系统
int initialize_data_buffer_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  g_system_config_buffer = 0;
  g_system_config_thread_operation_flags = FLAG_INITIALIZED;
  strcpy_s(&g_system_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemConfigString,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  g_resource_template_ptr_1 = &g_defaultDataTemplate;
  g_texture_resource_ptr = &texture_resource_data;
  texture_resource_data = 0;
  g_resource_type_1 = FLAG_TEXTURE_RESOURCE;
  strcpy_s(&texture_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string);
  g_resource_template_ptr_2 = &g_defaultDataTemplate;
  g_shader_resource_ptr = &shader_resource_data;
  shader_resource_data = 0;
  system_global_data_pointer = FLAG_SHADER_RESOURCE;
  strcpy_s(&shader_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  g_audio_resource_ptr = &audio_resource_data;
  audio_resource_data = 0;
  system_global_data_pointer = FLAG_AUDIO_RESOURCE;
  strcpy_s(&audio_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  g_font_resource_ptr = &font_resource_data;
  font_resource_data = 0;
  system_global_data_pointer = FLAG_FONT_RESOURCE;
  strcpy_s(&font_resource_data,SYSTEM_CONFIG_BUFFER_SIZE,&g_font_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &resource_data_5;
  resource_data_5 = 0;
  system_global_data_pointer = FLAG_FONT_RESOURCE;
  strcpy_s(&resource_data_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString5);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &resource_font_name_buffer;
  resource_font_name_buffer = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&resource_font_name_buffer, SYSTEM_CONFIG_BUFFER_SIZE, &g_resourceString6);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &resource_model_name_buffer;
  resource_model_name_buffer = 0;
  system_global_data_pointer = FLAG_MODEL_RESOURCE;
  strcpy_s(&resource_model_name_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString7);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &resource_animation_name_buffer;
  resource_animation_name_buffer = 0;
  system_global_data_pointer = FLAG_SHADER_RESOURCE;
  strcpy_s(&resource_animation_name_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString8);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_0;
  g_resource_string_buffer_0 = 0;
  system_global_data_pointer = FLAG_PARTICLE_RESOURCE;
  strcpy_s(&g_resource_string_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString9);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_1;
  g_resource_string_buffer_1 = 0;
  system_global_data_pointer = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_resource_string_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string0);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_2;
  g_resource_string_buffer_2 = 0;
  system_global_data_pointer = 0;
  strcpy_s(&g_resource_string_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&default_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_3;
  g_resource_string_buffer_3 = 0;
  system_global_data_pointer = FLAG_SAVE_GAME_RESOURCE;
  strcpy_s(&g_resource_string_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string1);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_4;
  g_resource_string_buffer_4 = 0;
  system_global_data_pointer = 7;
  strcpy_s(&g_resource_string_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string2);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_5;
  g_resource_string_buffer_5 = 0;
  system_global_data_pointer = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_resource_string_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string3);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_6;
  g_resource_string_buffer_6 = 0;
  system_global_data_pointer = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_resource_string_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string4);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_7;
  g_resource_string_buffer_7 = 0;
  system_global_data_pointer = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_resource_string_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string5);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_8;
  g_resource_string_buffer_8 = 0;
  system_global_data_pointer = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_resource_string_buffer_8,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string6);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_9;
  g_resource_string_buffer_9 = 0;
  system_global_data_pointer = FLAG_UI_RESOURCE;
  strcpy_s(&g_resource_string_buffer_9,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string7);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_10;
  g_resource_string_buffer_10 = 0;
  system_global_data_pointer = FLAG_SCRIPT_RESOURCE;
  strcpy_s(&g_resource_string_buffer_10,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string8);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_11;
  g_resource_string_buffer_11 = 0;
  system_global_data_pointer = FLAG_NETWORK_RESOURCE;
  strcpy_s(&g_resource_string_buffer_11,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string9);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_12;
  g_resource_string_buffer_12 = 0;
  system_global_data_pointer = FLAG_STRING_MANAGER_RESOURCE;
  strcpy_s(&g_resource_string_buffer_12,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string0);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_13;
  g_resource_string_buffer_13 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&g_resource_string_buffer_13,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string1);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_resource_string_buffer_14;
  g_resource_string_buffer_14 = 0;
  system_global_data_pointer = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_resource_string_buffer_14,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string2);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &data_180bf6fa8;
  data_180bf6fa8 = 0;
  system_global_data_pointer = FLAG_AUTH_RESOURCE;
  strcpy_s(&data_180bf6fa8,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string3);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_string_buffer_0;
  g_shader_string_buffer_0 = 0;
  system_global_data_pointer = FLAG_SECURITY_RESOURCE;
  strcpy_s(&g_shader_string_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string4);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_string_buffer_1;
  g_shader_string_buffer_1 = 0;
  system_global_data_pointer = FLAG_PHYSICS_RESOURCE;
  strcpy_s(&g_shader_string_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string5);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_string_buffer_2;
  g_shader_string_buffer_2 = 0;
  system_global_data_pointer = FLAG_CONFIG_RESOURCE;
  strcpy_s(&g_shader_string_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string6);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_string_buffer_3;
  g_shader_string_buffer_3 = 0;
  system_global_data_pointer = config_path_buffer_size;
  strcpy_s(&g_shader_string_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string7);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_string_buffer_4;
  g_shader_string_buffer_4 = 0;
  system_global_data_pointer = FLAG_NETWORK_RESOURCE;
  strcpy_s(&g_shader_string_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string8);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_string_buffer_5;
  g_shader_string_buffer_5 = 0;
  system_global_data_pointer = FLAG_SECURITY_RESOURCE;
  strcpy_s(&g_shader_string_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string9);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_string_buffer_6;
  g_shader_string_buffer_6 = 0;
  system_global_data_pointer = 0xf;
  strcpy_s(&g_shader_string_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string0);
  system_initialization_result = system_execute_function(&g_systemInitFunction1);
  return (system_initialization_result != 0) - 1;
}
int initialize_audio_module(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_string_buffer_7;
  g_shader_string_buffer_7 = 0;
  system_global_data_pointer = 0xb;
  strcpy_s(&g_shader_string_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(data_buffer_system_init_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_video_module(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_system_string_buffer_0;
  g_system_string_buffer_0 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&g_system_string_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(memory_manager_init_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_input_module(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_system_string_buffer_1;
  g_system_string_buffer_1 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&g_system_string_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemString3,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(thread_manager_init_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_network_module(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_system_string_buffer_2;
  g_system_string_buffer_2 = 0;
  system_global_data_pointer = 0xb;
  strcpy_s(&g_system_string_buffer_2,0x80,&g_memoryString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_system_string_buffer_3;
  g_system_string_buffer_3 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&g_system_string_buffer_3,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString2);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_0;
  g_memory_string_buffer_0 = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&g_memory_string_buffer_0,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString3);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_1;
  g_memory_string_buffer_1 = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&g_memory_string_buffer_1,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString4);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_2;
  g_memory_string_buffer_2 = 0;
  system_global_data_pointer = 0xc;
  strcpy_s(&g_memory_string_buffer_2,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString5);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_3;
  g_memory_string_buffer_3 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&g_memory_string_buffer_3,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString6);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_4;
  g_memory_string_buffer_4 = 0;
  system_global_data_pointer = 10;
  strcpy_s(&g_memory_string_buffer_4,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString7);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_5;
  g_memory_string_buffer_5 = 0;
  system_global_data_pointer = 0xc;
  strcpy_s(&g_memory_string_buffer_5,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString8);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_6;
  g_memory_string_buffer_6 = 0;
  system_global_data_pointer = 0x11;
  strcpy_s(&g_memory_string_buffer_6,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString9);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_7;
  g_memory_string_buffer_7 = 0;
  system_global_data_pointer = 0x11;
  strcpy_s(&g_memory_string_buffer_7,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString10);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_8;
  g_memory_string_buffer_8 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&g_memory_string_buffer_8,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString11);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_9;
  g_memory_string_buffer_9 = 0;
  system_global_data_pointer = 0x1a;
  strcpy_s(&g_memory_string_buffer_9,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString12);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_10;
  g_memory_string_buffer_10 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&g_memory_string_buffer_10,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString13);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_11;
  g_memory_string_buffer_11 = 0;
  system_global_data_pointer = 0xc;
  strcpy_s(&g_memory_string_buffer_11,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString14);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_12;
  g_memory_string_buffer_12 = 0;
  system_global_data_pointer = 0x11;
  strcpy_s(&g_memory_string_buffer_12,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString15);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &g_memory_string_buffer_13;
  g_memory_string_buffer_13 = 0;
  system_global_data_pointer = 0x11;
  strcpy_s(&g_memory_string_buffer_13,PRIMARY_STRING_BUFFER_SIZE,&g_memoryString16);
  system_initialization_result = system_execute_function(&g_systemInitFunction2);
  return (system_initialization_result != 0) - 1;
}
  g_system_config_buffer = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&g_system_config_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_systemConfigString,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_texture_resource_buffer;
  g_texture_resource_buffer = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&g_texture_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_shader_resource_buffer;
  g_shader_resource_buffer = 0;
  system_global_data_pointer = 0x17;
  strcpy_s(&g_shader_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_audio_resource_buffer;
  g_audio_resource_buffer = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&g_audio_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_font_resource_buffer;
  g_font_resource_buffer = 0;
  system_global_data_pointer = 0xc;
  strcpy_s(&g_font_resource_buffer,SYSTEM_CONFIG_BUFFER_SIZE,&g_font_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_resource_buffer_0;
  g_misc_resource_buffer_0 = 0;
  system_global_data_pointer = 0xc;
  strcpy_s(&g_misc_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString5);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_resource_buffer_1;
  g_misc_resource_buffer_1 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&g_misc_resource_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString6);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_resource_buffer_2;
  g_misc_resource_buffer_2 = 0;
  system_global_data_pointer = 0x1f;
  strcpy_s(&g_misc_resource_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString7);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_resource_buffer_3;
  g_misc_resource_buffer_3 = 0;
  system_global_data_pointer = 0x17;
  strcpy_s(&g_misc_resource_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString8);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &g_misc_resource_buffer_4;
  g_misc_resource_buffer_4 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&g_misc_resource_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&g_resourceString9);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_0;
  texture_resource_buffer_0 = 0;
  system_global_data_pointer = 0x14;
  strcpy_s(&texture_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string0);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_1;
  texture_resource_buffer_1 = 0;
  system_global_data_pointer = 0;
  strcpy_s(&texture_resource_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&default_resource_string);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_2;
  texture_resource_buffer_2 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&texture_resource_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string1);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_3;
  texture_resource_buffer_3 = 0;
  system_global_data_pointer = 7;
  strcpy_s(&texture_resource_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string2);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_4;
  texture_resource_buffer_4 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&texture_resource_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string3);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_5;
  texture_resource_buffer_5 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&texture_resource_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string4);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_6;
  texture_resource_buffer_6 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&texture_resource_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string5);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_7;
  texture_resource_buffer_7 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&texture_resource_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string6);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_8;
  texture_resource_buffer_8 = 0;
  system_global_data_pointer = 0x11;
  strcpy_s(&texture_resource_buffer_8,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string7);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &texture_resource_buffer_9;
  texture_resource_buffer_9 = 0;
  system_global_data_pointer = 0x18;
  strcpy_s(&texture_resource_buffer_9,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string8);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_0;
  shader_resource_buffer_0 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&shader_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&g_texture_resource_string9);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_1;
  shader_resource_buffer_1 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&shader_resource_buffer_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string0);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_2;
  shader_resource_buffer_2 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&shader_resource_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string1);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_3;
  shader_resource_buffer_3 = 0;
  system_global_data_pointer = 0x14;
  strcpy_s(&shader_resource_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string2);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_4;
  shader_resource_buffer_4 = 0;
  system_global_data_pointer = 0xf;
  strcpy_s(&shader_resource_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string3);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_5;
  shader_resource_buffer_5 = 0;
  system_global_data_pointer = 0x16;
  strcpy_s(&shader_resource_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string4);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_6;
  shader_resource_buffer_6 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&shader_resource_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string5);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_7;
  shader_resource_buffer_7 = 0;
  system_global_data_pointer = 0x14;
  strcpy_s(&shader_resource_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string6);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_8;
  shader_resource_buffer_8 = 0;
  system_global_data_pointer = config_path_buffer_size;
  strcpy_s(&shader_resource_buffer_8,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string7);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &shader_resource_buffer_9;
  shader_resource_buffer_9 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&shader_resource_buffer_9,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string8);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &audio_resource_buffer_0;
  audio_resource_buffer_0 = 0;
  system_global_data_pointer = 0x16;
  strcpy_s(&audio_resource_buffer_0,SYSTEM_CONFIG_BUFFER_SIZE,&g_shader_resource_string9);
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &data_180bf8950;
  data_180bf8950 = 0;
  system_global_data_pointer = 0xf;
  strcpy_s(&data_180bf8950,SYSTEM_CONFIG_BUFFER_SIZE,&g_audio_resource_string0);
  system_initialization_result = system_execute_function(&g_systemInitFunction3);
  return (system_initialization_result != 0) - 1;
}
  module_string_buffer_1 = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&module_string_buffer_1,config_path_buffer_size,&g_configString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(event_system_init_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_physics_module(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_alternateDataTemplate;
  system_global_data_pointer = &config_data_buffer_1;
  config_data_buffer_1 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&config_data_buffer_1,config_path_buffer_size,&g_configString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(time_system_init_callback);
  return (system_initialization_result != 0) - 1;
}
  module_string_buffer_2 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&module_string_buffer_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(file_system_init_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_ai_module(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_3;
  module_string_buffer_3 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&module_string_buffer_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(debug_system_init_callback);
  return (system_initialization_result != 0) - 1;
}
int initialize_ui_module(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_4;
  module_string_buffer_4 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&module_string_buffer_4,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString3,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_7_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_scripting_module(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_5;
  module_string_buffer_5 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&module_string_buffer_5,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString4,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_8_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_audio_engine(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_6;
  module_string_buffer_6 = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&module_string_buffer_6,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString5,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_9_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_video_subsystem(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_7;
  module_string_buffer_7 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&module_string_buffer_7,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString6,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_10_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_input_handler(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_8;
  module_string_buffer_8 = 0;
  system_global_data_pointer = 0x17;
  strcpy_s(&module_string_buffer_8,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString7,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_11_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_network_stack(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_9;
  module_string_buffer_9 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&module_string_buffer_9,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString8,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_12_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_file_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_10;
  module_string_buffer_10 = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&module_string_buffer_10,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString9,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_13_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_memory_manager(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_11;
  module_string_buffer_11 = 0;
  system_global_data_pointer = 0xc;
  strcpy_s(&module_string_buffer_11,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString10,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_14_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_thread_manager(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_12;
  module_string_buffer_12 = 0;
  system_global_data_pointer = 0x16;
  strcpy_s(&module_string_buffer_12,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString11,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_15_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_event_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_13;
  module_string_buffer_13 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&module_string_buffer_13,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString12,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_16_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_timer_service(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_14;
  module_string_buffer_14 = 0;
  system_global_data_pointer = 0x14;
  strcpy_s(&module_string_buffer_14,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString13,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_17_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_logger_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_15;
  module_string_buffer_15 = 0;
  system_global_data_pointer = 0x17;
  strcpy_s(&module_string_buffer_15,SYSTEM_CONFIG_BUFFER_SIZE,&data_180a22cb0,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_18_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_config_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_16;
  module_string_buffer_16 = 0;
  system_global_data_pointer = 0x17;
  strcpy_s(&module_string_buffer_16,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString14,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_19_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_resource_cache(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_17;
  module_string_buffer_17 = 0;
  system_global_data_pointer = config_path_buffer_size;
  strcpy_s(&module_string_buffer_17,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString15,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_20_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_asset_loader(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_18;
  module_string_buffer_18 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&module_string_buffer_18,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString16,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_21_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_shader_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_19;
  module_string_buffer_19 = 0;
  system_global_data_pointer = 0x1e;
  strcpy_s(&module_string_buffer_19,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString17,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_22_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_texture_manager(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_20;
  module_string_buffer_20 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&module_string_buffer_20,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString18,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_23_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_mesh_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_21;
  module_string_buffer_21 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&module_string_buffer_21,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString19,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_24_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_animation_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_22;
  module_string_buffer_22 = 0;
  system_global_data_pointer = 0x1c;
  strcpy_s(&module_string_buffer_22,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString20,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_25_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_particle_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_23;
  module_string_buffer_23 = 0;
  system_global_data_pointer = 0x1d;
  strcpy_s(&module_string_buffer_23,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString21,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_26_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_physics_engine(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_24;
  module_string_buffer_24 = 0;
  system_global_data_pointer = config_path_buffer_size;
  strcpy_s(&module_string_buffer_24,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString22,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_27_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_collision_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_25;
  module_string_buffer_25 = 0;
  system_global_data_pointer = 0x1d;
  strcpy_s(&module_string_buffer_25,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString23,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_28_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_ai_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  g_string_manager_ptr_180bf9ab0 = &g_defaultDataTemplate;
  g_string_manager_ptr_180bf9ab8 = &g_string_buffer_180bf9ac8;
  g_string_buffer_180bf9ac8 = 0;
  g_string_manager_type_180bf9ac0 = 0x1c;
  strcpy_s(&g_string_buffer_180bf9ac8,SYSTEM_CONFIG_BUFFER_SIZE,&data_180a22d48,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_29_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_navigation_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_27;
  module_string_buffer_27 = 0;
  system_global_data_pointer = 0x17;
  strcpy_s(&module_string_buffer_27,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString24,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_30_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_ui_framework(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_28;
  module_string_buffer_28 = 0;
  system_global_data_pointer = 0x1f;
  strcpy_s(&module_string_buffer_28,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString25,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_31_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_scripting_engine(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_29;
  module_string_buffer_29 = 0;
  system_global_data_pointer = 0x21;
  strcpy_s(&module_string_buffer_29,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString26,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_32_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_database_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_30;
  module_string_buffer_30 = 0;
  system_global_data_pointer = 0x25;
  strcpy_s(&module_string_buffer_30,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString27,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_33_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_network_manager(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_31;
  module_string_buffer_31 = 0;
  system_global_data_pointer = 0x23;
  strcpy_s(&module_string_buffer_31,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString28,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_34_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_security_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_32;
  module_string_buffer_32 = 0;
  system_global_data_pointer = 0x1e;
  strcpy_s(&module_string_buffer_32,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString29,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_35_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_encryption_service(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_33;
  module_string_buffer_33 = 0;
  system_global_data_pointer = 0x1e;
  strcpy_s(&module_string_buffer_33,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString30,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_36_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_authentication_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_34;
  module_string_buffer_34 = 0;
  system_global_data_pointer = 0x12;
  strcpy_s(&module_string_buffer_34,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString31,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_37_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_permission_manager(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_35;
  module_string_buffer_35 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&module_string_buffer_35,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString32,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_38_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_session_manager(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_36;
  module_string_buffer_36 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&module_string_buffer_36,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString33,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_39_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_user_profile_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_37;
  module_string_buffer_37 = 0;
  system_global_data_pointer = 0x16;
  strcpy_s(&module_string_buffer_37,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString34,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_40_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_save_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_38;
  module_string_buffer_38 = 0;
  system_global_data_pointer = 0x1a;
  strcpy_s(&module_string_buffer_38,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString35,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_41_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_achievement_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_39;
  module_string_buffer_39 = 0;
  system_global_data_pointer = 0x15;
  strcpy_s(&module_string_buffer_39,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString36,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_42_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_statistics_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_40;
  module_string_buffer_40 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&module_string_buffer_40,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString37,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_43_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_analytics_service(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_41;
  module_string_buffer_41 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&module_string_buffer_41,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString38,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_44_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_debug_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_42;
  module_string_buffer_42 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&module_string_buffer_42,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString39,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_45_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_profiling_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_43;
  module_string_buffer_43 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&module_string_buffer_43,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString40,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_46_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_crash_handler(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_44;
  module_string_buffer_44 = 0;
  system_global_data_pointer = 0x15;
  strcpy_s(&module_string_buffer_44,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString41,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_47_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_error_reporting(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_45;
  module_string_buffer_45 = 0;
  system_global_data_pointer = 0x28;
  strcpy_s(&module_string_buffer_45,SYSTEM_CONFIG_BUFFER_SIZE,&data_180a22fd0,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_48_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_update_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_46;
  module_string_buffer_46 = 0;
  system_global_data_pointer = 0x23;
  strcpy_s(&module_string_buffer_46,SYSTEM_CONFIG_BUFFER_SIZE,&data_180a22fa8,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_49_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_patch_manager(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  resource_template_ptr = &g_defaultDataTemplate;
  system_global_data_pointer = &module_string_buffer_47;
  module_string_buffer_47 = 0;
  system_global_data_pointer = 0x17;
  strcpy_s(&module_string_buffer_47,SYSTEM_CONFIG_BUFFER_SIZE,&g_moduleString42,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_50_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_diagnostics_system(void)
{
  long long system_initialization_result;
  system_initialization_result = system_execute_function(resource_manager_51_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_monitoring_service(void)
{
  long long system_initialization_result;
  system_initialization_result = system_execute_function(resource_manager_52_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_health_checker(void)
{
  long long system_initialization_result;
  system_initialization_result = system_execute_function(resource_manager_53_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_worker_thread_pool(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long system_initialization_result;
  _Mtx_init_in_situ(SECOND_MUTEX_ADDRESS,2,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_54_init_function);
  return (system_initialization_result != 0) - 1;
}
  system_memory_buffer_1 = 0;
  system_global_data_pointer = 7;
  strcpy_s(&system_memory_buffer_1,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_2;
  system_memory_buffer_2 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&system_memory_buffer_2,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString2);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_3;
  system_memory_buffer_3 = 0;
  system_global_data_pointer = 0xb;
  strcpy_s(&system_memory_buffer_3,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString3);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_4;
  system_memory_buffer_4 = 0;
  system_global_data_pointer = 7;
  strcpy_s(&system_memory_buffer_4,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString4);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_5;
  system_memory_buffer_5 = 0;
  system_global_data_pointer = 0xc;
  strcpy_s(&system_memory_buffer_5,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString5);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_6;
  system_memory_buffer_6 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&system_memory_buffer_6,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString6);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_7;
  system_memory_buffer_7 = 0;
  system_global_data_pointer = 0xc;
  strcpy_s(&system_memory_buffer_7,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString7);
  system_initialization_result = system_execute_function(&g_systemInitFunction4);
  return (system_initialization_result != 0) - 1;
}
int initialize_io_thread_pool(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_8;
  system_memory_buffer_8 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&system_memory_buffer_8,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString8,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_9;
  system_memory_buffer_9 = 0;
  system_global_data_pointer = 0x19;
  strcpy_s(&system_memory_buffer_9,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString9);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_10;
  system_memory_buffer_10 = 0;
  system_global_data_pointer = 0x1f;
  strcpy_s(&system_memory_buffer_10,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString10);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_11;
  system_memory_buffer_11 = 0;
  system_global_data_pointer = 0x1b;
  strcpy_s(&system_memory_buffer_11,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString11);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_12;
  system_memory_buffer_12 = 0;
  system_global_data_pointer = config_path_buffer_size;
  strcpy_s(&system_memory_buffer_12,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString12);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_13;
  system_memory_buffer_13 = 0;
  system_global_data_pointer = config_path_buffer_size;
  strcpy_s(&system_memory_buffer_13,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString13);
  system_initialization_result = system_execute_function(&g_systemInitFunction5);
  return (system_initialization_result != 0) - 1;
}
int initialize_background_thread_pool(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_14;
  system_memory_buffer_14 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&system_memory_buffer_14,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_15;
  system_memory_buffer_15 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&system_memory_buffer_15,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_16;
  system_memory_buffer_16 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&system_memory_buffer_16,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_17;
  system_memory_buffer_17 = 0;
  system_global_data_pointer = 0x13;
  strcpy_s(&system_memory_buffer_17,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString14);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_18;
  system_memory_buffer_18 = 0;
  system_global_data_pointer = 0xe;
  strcpy_s(&system_memory_buffer_18,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString15);
  system_global_data_pointer = &g_memoryAllocationFlag;
  system_global_data_pointer = &system_memory_buffer_19;
  system_memory_buffer_19 = 0;
  system_global_data_pointer = 0xe;
  strcpy_s(&system_memory_buffer_19,PRIMARY_STRING_BUFFER_SIZE,&g_bufferString15);
  system_initialization_result = system_execute_function(&g_systemInitFunction6);
  return (system_initialization_result != 0) - 1;
}
int initialize_backup_system(void)
{
  long long system_initialization_result;
  system_global_data_pointer = 0;
  system_ram_flag_1 = 0xf;
  system_global_flag_2 = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_initialization_result = system_execute_function(resource_manager_55_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_recovery_system(void)
{
  long long system_initialization_result;
  system_global_data_pointer = 3;
  system_global_data_pointer = &system_data_buffer;
  system_global_data_pointer = &system_data_buffer;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_initialization_result = system_execute_function(resource_manager_56_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_priority_thread_pool(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  long long system_initialization_result;
  _Mtx_init_in_situ(THIRD_MUTEX_ADDRESS,2,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  system_global_data_pointer = &g_shared_system_data_buffer;
  system_global_data_pointer = &system_thread_data_buffer;
  system_global_data_pointer = 0;
  system_thread_data_buffer = 0;
  system_initialization_result = system_execute_function(resource_manager_57_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_maintenance_service(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_shared_system_data_buffer;
  system_global_data_pointer = &system_large_string_1;
  system_large_string_1 = 0;
  system_global_data_pointer = STRING_BUFFER_SIZE;
  strcpy_s(&system_large_string_1,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_58_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_optimization_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_shared_system_data_buffer;
  system_global_data_pointer = &system_large_string_2;
  system_large_string_2 = 0;
  system_global_data_pointer = 3;
  strcpy_s(&system_large_string_2,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_59_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_performance_monitor(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_shared_system_data_buffer;
  system_global_data_pointer = &system_large_string_3;
  system_large_string_3 = 0;
  system_global_data_pointer = 5;
  strcpy_s(&system_large_string_3,SYSTEM_CONFIG_BUFFER_SIZE,&g_largeString3,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_60_init_function);
  return (system_initialization_result != 0) - 1;
}
  config_path_buffer_1 = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&config_path_buffer_1,config_path_buffer_size,&g_configString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_61_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_load_balancer(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_alternateDataTemplate;
  system_global_data_pointer = &config_path_buffer_2;
  config_path_buffer_2 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&config_path_buffer_2,config_path_buffer_size,&g_configString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_62_init_function);
  return (system_initialization_result != 0) - 1;
}
  config_path_buffer_3 = 0;
  system_global_data_pointer = 0xd;
  strcpy_s(&config_path_buffer_3,config_path_buffer_size,&g_configString1,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_63_init_function);
  return (system_initialization_result != 0) - 1;
}
int initialize_scaling_system(void)
{
  long long system_initialization_result;
  unsigned long long string_length;
  system_global_data_pointer = &g_alternateDataTemplate;
  system_global_data_pointer = &config_path_buffer_4;
  config_path_buffer_4 = 0;
  system_global_data_pointer = 9;
  strcpy_s(&config_path_buffer_4,config_path_buffer_size,&g_configString2,str_len_param,DEFAULT_THREAD_POOL_FLAG);
  system_initialization_result = system_execute_function(resource_manager_64_init_function);
  return (system_initialization_result != 0) - 1;
}
  system_thread_flag_2 = 1;
  system_thread_flag_1 = 0;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNativeSDLL(unsigned long long handle)
{
  unsigned long long temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 0;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
  system_status_flag_3 = 0;
  buffer_allocation_result = system_execute_function(system_global_data_pointer,THREAD_STACK_SIZE,8,3);
  system_global_data_pointer = create_event_handle(buffer_allocation_result);
  create_thread_context(&thread_stack_pointer,handle);
  buffer_allocation_result = allocate_thread_stack(&thread_stack_pointer,&g_threadString1);
  buffer_allocation_result = (ulong long)(int)buffer_allocation_result;
  if (buffer_allocation_result < stack_size_limit) {
    character_scan_pointer = (char *)(thread_stack_base_address + buffer_allocation_result);
    do {
      thread_result_index = (int)buffer_allocation_result;
      if (*character_scan_pointer == ' ') goto label_;
      buffer_allocation_result = (ulong long)(thread_result_index + 1U);
      character_scan_pointer = character_scan_pointer + 1;
    } while (thread_result_index + 1U < stack_size_limit);
  }
  thread_result_index = -1;
label_:
  buffer_allocation_result = thread_result_index + 1;
  buffer_allocation_result = (ulong long)(int)buffer_allocation_result;
  if (buffer_allocation_result < stack_size_limit) {
    character_scan_pointer = (char *)(thread_stack_base_address + buffer_allocation_result);
    do {
      if (*character_scan_pointer == ' ') goto label_;
      buffer_allocation_result = (int)buffer_allocation_result + 1;
      buffer_allocation_result = (ulong long)buffer_allocation_result;
      character_scan_pointer = character_scan_pointer + 1;
    } while (buffer_allocation_result < stack_size_limit);
  }
  buffer_allocation_result = UINT32_MAX;
label_:
  if (thread_result_index != -1) {
    setup_thread_parameters(&thread_stack98,&thread_stack78,buffer_allocation_result,buffer_allocation_result);
    thread_name_pointer = &default_resource_string;
    if (thread_stack70 != (void *)0x0) {
      thread_name_pointer = thread_stack70;
    }
    buffer_allocation_result = atoi(thread_name_pointer);
    *(unsigned int *)(system_global_data_pointer + 0x7b4) = buffer_allocation_result;
    thread_stack78 = &g_threadString2;
    if (thread_stack70 != (void *)0x0) {
      handle_system_error();
    }
    thread_stack70 = (void *)0x0;
    thread_stack_size_limit60 = 0;
    thread_stack78 = &g_threadString4;
  }
  initialize_event_system();
  buffer_allocation_result = system_execute_function(system_global_data_pointer,NETWORK_BUFFER_SIZE,8,10);
  system_global_data_pointer = system_execute_function(buffer_allocation_result);
  thread_data_ptr = (long long *)system_execute_function(system_global_data_pointer,0xe8,8,3);
  thread_stack10 = thread_data_ptr;
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
  thread_data_ptr[0x1c] = thread_operation_flags;
  thread_stack48 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + 0x28))(thread_data_ptr);
  system_data_ptr = system_global_data_pointer;
  thread_stack_pptr_18 = &thread_stack10;
  thread_stack10 = thread_data_ptr;
  (**(code **)(*thread_data_ptr + 0x28))(thread_data_ptr);
  register_event_callback(system_data_ptr,&thread_stack10);
  while( true ) {
    if ((void *)*thread_data_ptr == &g_threadString3) {
      system_char_variable = (char)thread_data_ptr[2] != '\0';
    }
    else {
      system_char_variable = (**(code **)((void *)*thread_data_ptr + 0x68))(thread_data_ptr);
    }
    if (system_char_variable != '\0') break;
    Sleep(1);
  }
  (**(code **)(*thread_data_ptr + 0x38))(thread_data_ptr);
  thread_stack98 = &g_threadString2;
  if (thread_stack_size_limit90 == 0) {
    return;
  }
  handle_system_error();
}
  system_thread_flag_2 = 1;
  system_thread_flag_1 = 0;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNative(unsigned long long handle)
{
  unsigned long long temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 0;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
void WotsMainNativeCoreCLR(unsigned long long handle)
{
  unsigned long long temp_stack_array [2];
  system_thread_flag_2 = 0;
  system_thread_flag_1 = 1;
  temp_stack_array[0] = GetModuleHandleA(0);
  initialize_core_system(handle,temp_stack_array);
  initialize_subsystem_modules();
  initialize_service_layer();
  return;
}
    system_config_flag = thread_result_index != 0xb7;
  }
  system_data_manager_001(system_global_data_pointer,0,0xd,&g_systemDataString1,system_config_flag);
  if (thread_stack28 == (void *)0x0) {
    return;
  }
  handle_system_error();
}
    system_thread_name_buffer = 0;
  }
  thread_stack_size_limit68 = 0;
  thread_stack_size_limit60 = 0;
  thread_stack_size_limit58 = 0;
  thread_stack_size_limit50 = 3;
  create_thread_context(&thread_stack48,handle);
  system_execute_function(&thread_stack_size_limit68,&thread_stack48);
  thread_stack48 = &g_threadString2;
  if (thread_stack_size_limit40 != 0) {
    handle_system_error();
  }
  thread_stack_size_limit40 = 0;
  thread_stack_size_limit30 = 0;
  thread_stack48 = &g_threadString4;
  thread_stack_size_limit88 = 0;
  thread_stack_size_limit80 = 0;
  thread_stack_size_limit78 = 0;
  thread_stack_size_limit70 = 3;
  system_execute_function(&thread_stack_size_limit88,&thread_stack_size_limit68);
  system_execute_function(&thread_stack_size_limit88,thread_stack_array_a8);
  if (MAX_THREAD_STACK_SIZE < thread_stack_size_limit98) {
    thread_stack_size_limit98 = MAX_THREAD_STACK_SIZE;
  }
  thread_name_pointer = &default_resource_string;
  if (thread_stacka0 != (void *)0x0) {
    thread_name_pointer = thread_stacka0;
  }
  memcpy(&system_thread_name_buffer,thread_name_pointer,(long long)(int)thread_stack_size_limit98);
}
    system_handle_buffer = 0;
    return;
  }
  string_length_counter = -1;
  do {
    string_length_counter = string_length_counter + 1;
  } while (*(char *)(handle + string_length_counter) != '\0');
  buffer_allocation_result = (uint)string_length_counter;
  if (MAX_THREAD_STACK_SIZE < buffer_allocation_result) {
    buffer_allocation_result = MAX_THREAD_STACK_SIZE;
  }
  memcpy(&system_handle_buffer,handle,(long long)(int)buffer_allocation_result);
}
          system_operation_flag = 1;
          system_thread_sync_flag = 0;
          *(unsigned char *)(system_global_data_pointer + 0x1f0) = 0;
          thread_stack_pointer2c8 = &g_threadString2;
          stack_size_limit2b0 = 0;
          thread_stack_pointer2c0 = (unsigned char *)0x0;
          stack_size_limit2b8 = 0;
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
              buffer_ptr = (unsigned char *)system_execute_function(system_global_data_pointer,(long long)alloc_size,0x13);
              *buffer_ptr = 0;
              thread_stack_pointer2c0 = buffer_ptr;
              buffer_handle = allocate_temporary_buffer(buffer_ptr);
              stack_size_limit2b0 = merge_32bit_values(stack_size_limit2b0._4_4_,buffer_handle);
              memcpy(buffer_ptr,string_ptr_17,buffer_size);
            }
          }
          stack_size_limit2b8 = 0;
          strstr(&default_resource_string,&g_systemDataString2);
          strstr(&default_resource_string,&g_systemDataString3);
          strstr(&default_resource_string,&g_systemDataString4);
          strstr(&default_resource_string,&g_systemDataString5);
          strstr(&default_resource_string,&g_systemDataString6);
          strstr(&default_resource_string,&g_systemDataString7);
          system_initialization_flag = 1;
          system_crash_handler_flag = 1;
          string_length_counter = strstr(input_string_pointer,&g_systemDataString8);
          if (string_length_counter == 0) {
            string_length_counter = strstr(input_string_pointer,&g_systemDataString9);
            if ((((((string_length_counter == 0) && (string_length_counter = strstr(input_string_pointer,&g_systemDataString10), string_length_counter == 0)) &&
                  (string_length_counter = strstr(input_string_pointer,&g_systemDataString11), string_length_counter == 0)) &&
                 ((string_length_counter = strstr(input_string_pointer,&g_systemDataString12), string_length_counter == 0 &&
                  (string_length_counter = strstr(input_string_pointer,&g_systemDataString13), string_length_counter == 0)))) &&
                ((string_length_counter = strstr(input_string_pointer,&g_systemDataString14), string_length_counter == 0 &&
                 ((string_length_counter = strstr(input_string_pointer,&g_systemDataString15), string_length_counter == 0 &&
                  (string_length_counter = strstr(input_string_pointer,&g_systemDataString16), string_length_counter == 0)))))) &&
               (string_length_counter = strstr(input_string_pointer,&g_systemDataString17), string_length_counter == 0)) {
              *(unsigned short *)(string_length_counter + 0x24) = PRIMARY_STRING_BUFFER_SIZE;
              *(unsigned char *)(string_length_counter + 0x28) = 1;
            }
            else {
              system_event_flag = 1;
            }
          }
          else {
            *(unsigned short *)(string_length_counter + 0x24) = 0;
          }
          thread_stack_pointer = (unsigned char *)0x0;
          stack_size_limit = stack_size_limit & INT64_MASK;
          thread_stack_pointer = &g_threadString4;
        }
        else if (buffer_allocation_result == 0xb) {
          thread_result_index = strcmp(input_string_pointer,&g_systemDataString18);
          if (thread_result_index != 0) goto label_;
          system_operation_flag = 1;
          system_thread_sync_flag = 0;
          system_initialization_flag = 1;
          string_length_counter = strstr(input_string_pointer,&g_systemDataString19);
          if (string_length_counter != 0) {
            input_string_pointer = &g_systemDataString20;
            goto label_;
          }
        }
        else {
          if (buffer_allocation_result == 0xc) {
            thread_result_index = strcmp(input_string_pointer,&g_systemDataString21);
            string_match_found = thread_result_index == 0;
          }
          else {
label_:
            string_match_found = false;
          }
          if (string_match_found) {
            create_thread_context(&thread_stack_pointer,input_string_pointer);
            buffer_allocation_result = allocate_thread_stack(&thread_stack_pointer,&g_systemDataString21);
            thread_operation_flags = (ulong long)(int)buffer_allocation_result;
            if (buffer_allocation_result < stack_size_limit) {
              character_scan_pointer = (char *)(thread_stack_base_address + thread_operation_flags);
              do {
                thread_result_index = (int)thread_operation_flags;
                if (*character_scan_pointer == ' ') goto label_;
                thread_operation_flags = (ulong long)(thread_result_index + 1U);
                character_scan_pointer = character_scan_pointer + 1;
              } while (thread_result_index + 1U < stack_size_limit);
            }
            thread_result_index = -1;
label_:
            buffer_allocation_result = thread_result_index + 1;
            thread_operation_flags = (ulong long)(int)buffer_allocation_result;
            if (buffer_allocation_result < stack_size_limit) {
              character_scan_pointer = (char *)(thread_stack_base_address + thread_operation_flags);
              do {
                if (*character_scan_pointer == ' ') goto label_;
                thread_operation_flags = (int)thread_operation_flags + 1;
                thread_operation_flags = (ulong long)thread_operation_flags;
                character_scan_pointer = character_scan_pointer + 1;
              } while (thread_operation_flags < stack_size_limit);
            }
            thread_operation_flags = UINT32_MAX;
label_:
            if (thread_result_index != -1) {
              setup_thread_parameters(&thread_stack_pointer,&thread_stack_pointer,buffer_allocation_result,thread_operation_flags);
              thread_result_index = thread_priority_level;
              thread_result_index = 0;
              string_length_counter = strchr(thread_stack_pointer,0x2e);
              if (string_length_counter != 0) {
                do {
                  thread_result_index = thread_result_index + 1;
                  string_length_counter = strchr(string_length_counter + 1,0x2e);
                } while (string_length_counter != 0);
                if ((thread_result_index == 3) && (thread_result_index - 7U < 9)) {
                  thread_name_pointer = &default_resource_string;
                  if (thread_stack1b0 != (void *)0x0) {
                    thread_name_pointer = thread_stack1b0;
                  }
                  (**(code **)(*(long long *)(string_length_counter + 400) + STRING_BUFFER_SIZE))
                            ((long long *)(string_length_counter + 400),thread_name_pointer);
                }
              }
              thread_stack1b8 = &g_threadString2;
              if (thread_stack1b0 != (void *)0x0) {
                handle_system_error();
              }
              thread_stack1b0 = (void *)0x0;
              thread_stack_size_limit1a0 = 0;
              thread_stack1b8 = &g_threadString4;
            }
            thread_stack238 = &g_threadString2;
            if (thread_stack_size_limit230 != 0) {
              handle_system_error();
            }
            thread_stack_size_limit230 = 0;
            thread_stack_size_limit220 = 0;
            thread_stack238 = &g_threadString4;
          }
          else {
            if (buffer_allocation_result == 0x11) {
              thread_result_index = strcmp(input_string_pointer,&g_systemDataString22);
              string_match_found = thread_result_index == 0;
            }
            else {
              string_match_found = false;
            }
            if (string_match_found) {
              create_thread_context(&thread_stack_pointer,input_string_pointer);
              buffer_allocation_result = allocate_thread_stack(&thread_stack_pointer,&g_systemDataString22);
              thread_operation_flags = (ulong long)(int)buffer_allocation_result;
              if (buffer_allocation_result < stack_size_limit) {
                character_scan_pointer = (char *)(thread_stack_base_address + thread_operation_flags);
                do {
                  thread_result_index = (int)thread_operation_flags;
                  if (*character_scan_pointer == ' ') goto label_;
                  thread_operation_flags = (ulong long)(thread_result_index + 1U);
                  character_scan_pointer = character_scan_pointer + 1;
                } while (thread_result_index + 1U < stack_size_limit);
              }
              thread_result_index = -1;
label_:
              buffer_allocation_result = thread_result_index + 1;
              thread_operation_flags = (ulong long)(int)buffer_allocation_result;
              if (buffer_allocation_result < stack_size_limit) {
                character_scan_pointer = (char *)(thread_stack_base_address + thread_operation_flags);
                do {
                  if (*character_scan_pointer == ' ') goto label_;
                  thread_operation_flags = (int)thread_operation_flags + 1;
                  thread_operation_flags = (ulong long)thread_operation_flags;
                  character_scan_pointer = character_scan_pointer + 1;
                } while (thread_operation_flags < stack_size_limit);
              }
              thread_operation_flags = UINT32_MAX;
label_:
              if (thread_result_index != -1) {
                setup_thread_parameters(&thread_stack_pointer,&thread_stack_pointer,buffer_allocation_result,thread_operation_flags);
                thread_result_index = thread_priority_level;
                thread_result_index = 0;
                string_length_counter = strchr(thread_stack_pointer,0x2e);
                if (string_length_counter != 0) {
                  do {
                    thread_result_index = thread_result_index + 1;
                    string_length_counter = strchr(string_length_counter + 1,0x2e);
                  } while (string_length_counter != 0);
                  if ((thread_result_index == 3) && (thread_result_index - 7U < 9)) {
                    thread_name_pointer = &default_resource_string;
                    if (thread_stack190 != (void *)0x0) {
                      thread_name_pointer = thread_stack190;
                    }
                    (**(code **)(module_handle_pointer + STRING_BUFFER_SIZE))(&module_data_buffer,thread_name_pointer);
                  }
                }
                thread_stack198 = &g_threadString2;
                if (thread_stack190 != (void *)0x0) {
                  handle_system_error();
                }
                thread_stack190 = (void *)0x0;
                thread_stack_size_limit180 = 0;
                thread_stack198 = &g_threadString4;
              }
              thread_stack218 = &g_threadString2;
              if (thread_stack_size_limit210 != 0) {
                handle_system_error();
              }
              thread_stack_size_limit210 = 0;
              thread_stack_size_limit200 = 0;
              thread_stack218 = &g_threadString4;
            }
            else {
              if (buffer_allocation_result == 0xe) {
                thread_result_index = strcmp(input_string_pointer,&g_systemDataString23);
                string_match_found = thread_result_index == 0;
              }
              else {
                string_match_found = false;
              }
              if (string_match_found) {
                create_thread_context(&thread_stack_pointer,input_string_pointer);
                buffer_allocation_result = allocate_thread_stack(&thread_stack_pointer,&g_systemDataString23);
                thread_operation_flags = (ulong long)(int)buffer_allocation_result;
                if (buffer_allocation_result < stack_size_limit) {
                  character_scan_pointer = (char *)(thread_stack_base_address + thread_operation_flags);
                  do {
                    if (*character_scan_pointer == ' ') goto label_;
                    buffer_allocation_result = (int)thread_operation_flags + 1;
                    thread_operation_flags = (ulong long)buffer_allocation_result;
                    character_scan_pointer = character_scan_pointer + 1;
                  } while (buffer_allocation_result < stack_size_limit);
                }
                thread_operation_flags = UINT32_MAX;
label_:
                buffer_allocation_result = (int)thread_operation_flags + 1;
                thread_operation_flags = (ulong long)(int)buffer_allocation_result;
                if (buffer_allocation_result < stack_size_limit) {
                  character_scan_pointer = (char *)(thread_stack_base_address + thread_operation_flags);
                  do {
                    if (*character_scan_pointer == ' ') goto label_;
                    thread_operation_flags = (int)thread_operation_flags + 1;
                    thread_operation_flags = (ulong long)thread_operation_flags;
                    character_scan_pointer = character_scan_pointer + 1;
                  } while (thread_operation_flags < stack_size_limit);
                }
                thread_operation_flags = UINT32_MAX;
label_:
                if ((int)thread_operation_flags != -1) {
                  setup_thread_parameters(&thread_stack_pointer,&thread_stack_pointer,buffer_allocation_result,thread_operation_flags);
                  system_thread_manager_011(&thread_stack_pointer);
                  if (stack_size_limit != 0) {
                    thread_result_index = 0;
                    string_length_counter = (long long)(int)(stack_size_limit - 1);
                    if (0 < (int)(stack_size_limit - 1)) {
                      do {
                        if (thread_stack_pointer[string_length_counter] != '\"') break;
                        thread_result_index = thread_result_index + 1;
                        string_length_counter = string_length_counter + -1;
                      } while (0 < string_length_counter);
                    }
                    stack_size_limit = stack_size_limit - thread_result_index;
                    thread_stack_pointer[stack_size_limit] = 0;
                  }
                  system_thread_manager_012(&thread_stack_pointer,1);
                  input_string_pointer = &default_resource_string;
                  if (thread_stack_pointer != (void *)0x0) {
                    input_string_pointer = thread_stack_pointer;
                  }
                  string_length_counter = -1;
                  do {
                    string_length_counter = string_length_counter + 1;
                  } while (input_string_pointer[string_length_counter] != '\0');
                  if ((int)string_length_counter < SYSTEM_CONFIG_BUFFER_SIZE) {
                    input_offset_value = (int)string_length_counter;
                    strcpy_s(input_buffer_pointer,SYSTEM_CONFIG_BUFFER_SIZE);
                  }
                  else {
                    system_thread_003(&g_systemDataString29,SYSTEM_CONFIG_BUFFER_SIZE);
                    input_offset_value = 0;
                    *input_buffer_pointer = 0;
                  }
                  buffer_allocation_result = stack_size_limit;
                  thread_operation_flags = (ulong long)stack_size_limit;
                  if (thread_stack_pointer != (void *)0x0) {
                    system_thread_manager_001(string_length_counter + 0x170,thread_operation_flags);
                  }
                  if (buffer_allocation_result != 0) {
                    memcpy(*(unsigned long long *)(string_length_counter + 0x178),thread_stack_pointer,thread_operation_flags);
                  }
                  *(unsigned int *)(string_length_counter + 0x180) = 0;
                  if (*(long long *)(string_length_counter + 0x178) != 0) {
                    *(unsigned char *)(thread_operation_flags + *(long long *)(string_length_counter + 0x178)) = 0;
                  }
                  *(unsigned int *)(string_length_counter + 0x18c) = stack_size_limit;
                  thread_stack_pointer = &g_threadString2;
                  if (thread_stack_pointer != (void *)0x0) {
                    handle_system_error(thread_stack_pointer,thread_stack_pointer);
                  }
                  thread_stack_pointer = (void *)0x0;
                  stack_size_limit = 0;
                  thread_stack_pointer = &g_threadString4;
                  thread_operation_flags = 0;
                }
                thread_stack_pointer = &g_threadString2;
                if (thread_stack_base_address != 0) {
                  handle_system_error(thread_stack_base_address,thread_operation_flags);
                }
                thread_stack_base_address = 0;
                stack_size_limit = 0;
                thread_stack_pointer = &g_threadString4;
              }
              else {
                if (buffer_allocation_result == 0x16) {
                  thread_result_index = strcmp(input_string_pointer,&g_systemDataString24);
                  if (thread_result_index == 0) {
                    system_resource_flag = 1;
                    system_mutex_flag = 1;
                    goto label_;
                  }
label_:
                  string_match_found = false;
                }
                else {
                  if (buffer_allocation_result != 0x12) goto label_;
                  thread_result_index = strcmp(input_string_pointer,&g_systemDataString25);
                  string_match_found = thread_result_index == 0;
                }
                if (string_match_found) {
                  create_thread_context(&thread_stack_pointer,input_string_pointer);
                  buffer_allocation_result = allocate_thread_stack(&thread_stack_pointer,&g_systemDataString25);
                  thread_operation_flags = (ulong long)(int)buffer_allocation_result;
                  if (buffer_allocation_result < stack_size_limit) {
                    character_scan_pointer = (char *)(thread_stack_base_address + thread_operation_flags);
                    do {
                      if (*character_scan_pointer == ' ') goto label_;
                      buffer_allocation_result = (int)thread_operation_flags + 1;
                      thread_operation_flags = (ulong long)buffer_allocation_result;
                      character_scan_pointer = character_scan_pointer + 1;
                    } while (buffer_allocation_result < stack_size_limit);
                  }
                  thread_operation_flags = UINT32_MAX;
label_:
                  buffer_allocation_result = (int)thread_operation_flags + 1;
                  thread_operation_flags = (ulong long)(int)buffer_allocation_result;
                  if (buffer_allocation_result < stack_size_limit) {
                    character_scan_pointer = (char *)(thread_stack_base_address + thread_operation_flags);
                    do {
                      if (*character_scan_pointer == ' ') goto label_;
                      thread_operation_flags = (int)thread_operation_flags + 1;
                      thread_operation_flags = (ulong long)thread_operation_flags;
                      character_scan_pointer = character_scan_pointer + 1;
                    } while (thread_operation_flags < stack_size_limit);
                  }
                  thread_operation_flags = UINT32_MAX;
label_:
                  if ((int)thread_operation_flags != -1) {
                    setup_thread_parameters(&thread_stack_pointer,&thread_stack_pointer,buffer_allocation_result,thread_operation_flags);
                    system_thread_manager_012(&thread_stack_pointer,1);
                    buffer_allocation_result = stack_size_limit;
                    thread_operation_flags = (ulong long)stack_size_limit;
                    if (thread_stack_base_address != 0) {
                      system_thread_manager_001(string_length_counter + 0x170,thread_operation_flags);
                    }
                    if (buffer_allocation_result != 0) {
                      memcpy(*(unsigned long long *)(string_length_counter + 0x178),thread_stack_base_address,thread_operation_flags);
                    }
                    *(unsigned int *)(string_length_counter + 0x180) = 0;
                    if (*(long long *)(string_length_counter + 0x178) != 0) {
                      *(unsigned char *)(thread_operation_flags + *(long long *)(string_length_counter + 0x178)) = 0;
                    }
                    *(unsigned int *)(string_length_counter + 0x18c) = stack_size_limit;
                    *(unsigned char *)(string_length_counter + 0x168) = 1;
                    thread_stack_pointer = &g_threadString2;
                    if (thread_stack_base_address != 0) {
                      handle_system_error(thread_stack_base_address,thread_stack_base_address);
                    }
                    thread_stack_base_address = 0;
                    stack_size_limit = 0;
                    thread_stack_pointer = &g_threadString4;
                    thread_operation_flags = 0;
                  }
                  thread_stack_pointer = &g_threadString2;
                  if (thread_stack_base_address != 0) {
                    handle_system_error(thread_stack_base_address,thread_operation_flags);
                  }
                  thread_stack_base_address = 0;
                  stack_size_limit = 0;
                  thread_stack_pointer = &g_threadString4;
                }
                else {
                  if (buffer_allocation_result == 0x17) {
                    thread_result_index = strcmp(input_string_pointer,&g_systemDataString26);
                    if (thread_result_index == 0) {
                      system_initialization_flag = 1;
                      goto label_;
                    }
label_:
                    string_match_found = false;
                  }
                  else {
                    if (buffer_allocation_result != 0xb) goto label_;
                    thread_result_index = strcmp(input_string_pointer,&g_systemDataString27);
                    string_match_found = thread_result_index == 0;
                  }
                  if (string_match_found) {
                    create_thread_context(&thread_stack_pointer,input_string_pointer);
                    system_thread_manager_005(&thread_stack_pointer);
                    system_thread_manager_006(&thread_stack_pointer);
                    system_event_handler_002(&event_data_buffer,&thread_stack_pointer);
                    system_initialization_flag = 1;
                    thread_stack_pointer = &g_threadString2;
                    if (thread_stack_base_address != 0) {
                      handle_system_error();
                    }
                    thread_stack_base_address = 0;
                    stack_size_limit = 0;
                    thread_stack_pointer = &g_threadString4;
                  }
                  else {
                    input_string_pointer = &default_resource_string;
                    if (input_string_pointer != (unsigned char *)0x0) {
                      input_string_pointer = input_string_pointer;
                    }
                    string_length_counter = strstr(input_string_pointer);
                    if (string_length_counter != 0) {
                      thread_operation_flags = 0;
                      thread_stack_pointer = &g_threadString2;
                      stack_size_limit = 0;
                      thread_stack_pointer = (unsigned int *)0x0;
                      stack_size_limit = 0;
                      input_string_pointer = (unsigned int *)system_execute_function(system_global_data_pointer,STRING_BUFFER_SIZE,0x13);
                      *(unsigned char *)input_string_pointer = 0;
                      thread_stack_pointer = input_string_pointer;
                      buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
                      stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
                      *input_string_pointer = 0x726f662f;
                      input_string_pointer[1] = 0x5f646563;
                      input_string_pointer[2] = 0x666e6f63;
                      input_string_pointer[3] = 0x3a6769;
                      stack_size_limit = 0xf;
                      thread_operation_flags = thread_operation_flags;
                      thread_operation_flags = thread_operation_flags;
                      if (0 < (int)(buffer_allocation_result - 0xe)) goto label_;
                      goto label_;
                    }
                    if (buffer_allocation_result == 0xf) {
                      thread_result_index = strcmp(input_string_pointer);
                      if (thread_result_index == 0) {
                        cStack_338 = '\x01';
                        *(unsigned char *)(system_global_data_pointer + 0x22) = 1;
                        goto label_;
                      }
label_:
                      string_match_found = false;
                    }
                    else {
                      if (buffer_allocation_result == 0xc) {
                        thread_result_index = strcmp(input_string_pointer);
                        if (thread_result_index == 0) {
                          input_string_pointer = &g_systemDataString28;
label_:
                          system_data_manager_002(system_global_data_pointer,input_string_pointer);
                        }
                        goto label_;
                      }
                      if (buffer_allocation_result == 0x1a) {
                        thread_result_index = strcmp(input_string_pointer);
                        if (thread_result_index == 0) {
                          *(unsigned char *)(system_global_data_pointer + 0x21) = 1;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (buffer_allocation_result == STRING_BUFFER_SIZE) {
                        thread_result_index = strcmp(input_string_pointer);
                        if (thread_result_index == 0) {
                          system_status_flag_2 = 0;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (buffer_allocation_result == 0x18) {
                        thread_result_index = strcmp(input_string_pointer);
                        if (thread_result_index == 0) {
                          system_crash_handler_flag = 1;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (buffer_allocation_result != 0x14) goto label_;
                      thread_result_index = strcmp(input_string_pointer);
                      string_match_found = thread_result_index == 0;
                    }
                    string_length_counter = system_global_data_pointer;
                    if (string_match_found) {
                      create_thread_context(&thread_stack_pointer,input_string_pointer);
                      system_thread_manager_005(&thread_stack_pointer);
                      buffer_allocation_result = 0;
                      character_scan_pointer = pcStack_328;
                      if (stack_size_limit != 0) {
                        do {
                          if (*character_scan_pointer == '/') goto label_;
                          buffer_allocation_result = buffer_allocation_result + 1;
                          character_scan_pointer = character_scan_pointer + 1;
                        } while (buffer_allocation_result < stack_size_limit);
                      }
                      buffer_allocation_result = UINT32_MAX;
label_:
                      if (buffer_allocation_result != 0xffffffff) {
                        string_length_counter = setup_thread_parameters(&thread_stack_pointer,&thread_stack_pointer,0);
                        if (pcStack_328 != (char *)0x0) {
                          handle_system_error();
                        }
                        stack_size_limit = *(uint *)(string_length_counter + STRING_BUFFER_SIZE);
                        pcStack_328 = *(char **)(string_length_counter + 8);
                        stack_size_limit = *(long long *)(string_length_counter + 0x18);
                        *(unsigned int *)(string_length_counter + STRING_BUFFER_SIZE) = 0;
                        *(unsigned long long *)(string_length_counter + 8) = 0;
                        *(unsigned long long *)(string_length_counter + 0x18) = 0;
                        thread_stack_pointer = &g_threadString2;
                        if (thread_stack_base_address != 0) {
                          handle_system_error();
                        }
                        thread_stack_base_address = 0;
                        stack_size_limit = 0;
                        thread_stack_pointer = &g_threadString4;
                      }
                      system_thread_manager_006(&thread_stack_pointer);
                      buffer_allocation_result = stack_size_limit;
                      string_length_counter = system_global_data_pointer;
                      *(unsigned char *)(system_global_data_pointer + 0x48) = 1;
                      thread_operation_flags = (ulong long)stack_size_limit;
                      if (pcStack_328 != (char *)0x0) {
                        system_thread_manager_001(string_length_counter + 0x50,thread_operation_flags);
                      }
                      if (buffer_allocation_result != 0) {
                        memcpy(*(unsigned long long *)(string_length_counter + 0x58),pcStack_328,thread_operation_flags);
                      }
                      *(unsigned int *)(string_length_counter + 0x60) = 0;
                      if (*(long long *)(string_length_counter + 0x58) != 0) {
                        *(unsigned char *)(thread_operation_flags + *(long long *)(string_length_counter + 0x58)) = 0;
                      }
                      *(uint *)(string_length_counter + 0x6c) = stack_size_limit._4_4_;
                      thread_stack_pointer = &g_threadString2;
                      if (pcStack_328 != (char *)0x0) {
                        handle_system_error(pcStack_328,pcStack_328);
                      }
                      pcStack_328 = (char *)0x0;
                      stack_size_limit = (ulong long)stack_size_limit._4_4_ << config_path_buffer_size;
                      thread_stack_pointer = &g_threadString4;
                    }
                    else if (cStack_338 == '\0') {
                      thread_operation_flags = system_thread_manager_007();
                      input_string_pointer = (unsigned char *)0x0;
                      thread_stack_pointer = &g_threadString2;
                      stack_size_limit = 0;
                      thread_stack_pointer = (unsigned char *)0x0;
                      stack_size_limit = 0;
                      thread_operation_flags = stack_size_limit | 1;
                      input_string_pointer = input_string_pointer;
                      input_string_pointer = input_string_pointer;
                      stack_size_limit = thread_operation_flags;
                      stack_size_limit = thread_operation_flags;
                      if (buffer_allocation_result != 0) {
                        thread_result_index = buffer_allocation_result + 1;
                        if (thread_result_index < STRING_BUFFER_SIZE) {
                          thread_result_index = STRING_BUFFER_SIZE;
                        }
                        input_string_pointer = (unsigned char *)system_execute_function(system_global_data_pointer,(long long)thread_result_index,0x13);
                        *input_string_pointer = 0;
                        thread_stack_pointer = input_string_pointer;
                        input_string_pointer = (unsigned char *)allocate_temporary_buffer(input_string_pointer);
                        stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,(int)input_string_pointer);
                      }
                      string_length_counter = 1;
                      buffer_allocation_result = 1;
                      if (1 < (int)buffer_allocation_result) {
                        thread_operation_flags = 0;
                        do {
                          thread_operation_flags = stack_size_limit;
                          thread_operation_flags = stack_size_limit;
                          if (buffer_allocation_result <= buffer_allocation_result) break;
                          thread_operation_flags = thread_stack_pointer[string_length_counter];
                          thread_result_index = (int)thread_operation_flags;
                          thread_operation_flags = thread_result_index + 1;
                          thread_operation_flags = (ulong long)thread_operation_flags;
                          if (thread_operation_flags != 0) {
                            thread_operation_flags = thread_result_index + 2;
                            if (input_string_pointer == (unsigned char *)0x0) {
                              if ((int)thread_operation_flags < STRING_BUFFER_SIZE) {
                                thread_operation_flags = STRING_BUFFER_SIZE;
                              }
                              input_string_pointer = (unsigned char *)
                                        system_execute_function(system_global_data_pointer,(long long)(int)thread_operation_flags,0x13);
                              *input_string_pointer = 0;
                            }
                            else {
                              if (thread_operation_flags <= (uint)input_string_pointer) goto label_;
                              stack_size_limit = 0x13;
                              input_string_pointer = (unsigned char *)
                                        system_execute_function(system_global_data_pointer,input_string_pointer,thread_operation_flags,STRING_BUFFER_SIZE);
                            }
                            thread_stack_pointer = input_string_pointer;
                            thread_operation_flags = allocate_temporary_buffer(input_string_pointer);
                            stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,thread_operation_flags);
                            input_string_pointer = (unsigned char *)(ulong long)thread_operation_flags;
                          }
label_:
                          input_string_pointer[(long long)input_string_pointer] = thread_operation_flags;
                          input_string_pointer[thread_operation_flags] = 0;
                          input_string_pointer = (unsigned char *)(ulong long)thread_operation_flags;
                          buffer_allocation_result = buffer_allocation_result + 1;
                          string_length_counter = string_length_counter + 1;
                          thread_operation_flags = stack_size_limit;
                          thread_operation_flags = stack_size_limit;
                          stack_size_limit = thread_operation_flags;
                        } while (string_length_counter < (int)buffer_allocation_result);
                      }
                      system_event_handler_main(input_string_pointer,&thread_stack_pointer,thread_operation_flags);
                      stack_size_limit = thread_operation_flags & 0xfffffffe;
                      thread_stack_pointer = &g_threadString2;
                      if (input_string_pointer != (unsigned char *)0x0) {
                        handle_system_error(input_string_pointer);
                      }
                      thread_stack_pointer = (unsigned char *)0x0;
                      stack_size_limit = stack_size_limit & INT64_MASK;
                      thread_stack_pointer = &g_threadString4;
                      input_string_pointer = thread_stack_pointer;
                      input_string_pointer = thread_stack_pointer;
                    }
                    else {
                      cStack_338 = '\0';
                      if (input_string_pointer != (unsigned char *)0x0) {
                        system_thread_manager_001(system_global_data_pointer + 0x28,input_string_pointer);
                      }
                      if (buffer_allocation_result != 0) {
                        memcpy(*(unsigned long long *)(string_length_counter + 0x30),input_string_pointer,input_string_pointer);
                      }
                      *(unsigned int *)(string_length_counter + 0x38) = 0;
                      if (*(long long *)(string_length_counter + 0x30) != 0) {
                        input_string_pointer[*(long long *)(string_length_counter + 0x30)] = 0;
                      }
                      *(unsigned int *)(string_length_counter + 0x44) = stack_size_limit._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
label_:
        input_string_pointer = (unsigned char *)0x0;
        stack_size_limit = 0;
        string_length_counter = thread_stack_base_address;
        if (input_string_pointer != (unsigned char *)0x0) {
          *input_string_pointer = 0;
        }
      }
      else {
        system_thread_manager_001(&thread_stack_pointer,buffer_allocation_result + 1);
        thread_stack_pointer[stack_size_limit] = byte_check_result;
        stack_size_limit = stack_size_limit + 1;
        input_string_pointer = (unsigned char *)(ulong long)stack_size_limit;
        input_string_pointer[(long long)thread_stack_pointer] = 0;
        input_string_pointer = thread_stack_pointer;
      }
      stack_size_limit = stack_size_limit + 1;
    } while (stack_size_limit < stack_size_limit);
  }
  thread_stack_pointer = &g_defaultDataTemplate;
  thread_stack_pointer = auStack_80;
  auStack_80[0] = 0;
  stack_size_limit = STRING_BUFFER_SIZE;
  strcpy_s(auStack_80, SYSTEM_CONFIG_BUFFER_SIZE, &systemConfigStringBuffer);
  system_char_variable = system_handle_manager_003(string_length_counter,&thread_stack_pointer);
  thread_stack_pointer = &g_threadString4;
  if (system_char_variable != '\0') {
    *(unsigned int *)(string_length_counter + config_path_buffer_size) = 1;
  }
  (**(code **)(**(long long **)(system_global_data_pointer + 0x18) + 0x30))
            (*(long long **)(system_global_data_pointer + 0x18),system_crash_handler_flag);
  thread_stack_pointer = &g_threadString2;
  if (input_string_pointer != (unsigned char *)0x0) {
    handle_system_error(input_string_pointer);
  }
  thread_stack_pointer = (unsigned char *)0x0;
  stack_size_limit = stack_size_limit & INT64_MASK;
  thread_stack_pointer = &g_threadString4;
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_368);
  while (byte_input_string_pointer = byte_input_string_pointer + 1, buffer_allocation_result != 0) {
label_:
    byte_check_result = *byte_input_string_pointer;
    buffer_allocation_result = (uint)byte_input_string_pointer[string_length_counter];
    if (byte_check_result != buffer_allocation_result) break;
  }
  if ((int)(byte_check_result - buffer_allocation_result) < 1) {
label_:
    thread_operation_flags = 1;
  }
  else {
label_:
    thread_operation_flags = 0;
  }
  system_helper_003(string_length_counter,system_initialization_result0,string_length_counter,thread_operation_flags);
  while( true ) {
    thread_operation_flags = (ulong long)(thread_result_index + 1);
    thread_operation_flags = thread_operation_flags + 1;
    if ((long long)(int)(buffer_allocation_result - 0xe) <= (long long)thread_operation_flags) break;
label_:
    thread_result_index = (int)thread_operation_flags;
    thread_operation_flags = thread_operation_flags;
    thread_operation_flags = thread_operation_flags;
    do {
      thread_operation_flags = (uint)thread_operation_flags;
      if (input_string_pointer[thread_operation_flags + thread_operation_flags] != *(char *)(thread_operation_flags + (long long)input_string_pointer)) break;
      thread_operation_flags = thread_operation_flags + 1;
      thread_operation_flags = (ulong long)thread_operation_flags;
      thread_operation_flags = thread_operation_flags + 1;
    } while ((long long)thread_operation_flags < 0xf);
    if (thread_operation_flags == 0xf) goto label_;
  }
label_:
  thread_result_index = -1;
label_:
  setup_thread_parameters(&thread_stack_pointer,&thread_stack_pointer,thread_result_index + 0xf,input_string_pointer);
  thread_stack_pointer = (unsigned long long *)0x0;
  thread_stack_pointer = (unsigned long long *)0x0;
  stack_size_limit = 0;
  stack_size_limit = 3;
  if (thread_stack_base_address != 0) {
    system_event_handler_003(&thread_stack_pointer,&thread_stack_pointer,&systemEventHandlerConfig);
  }
  input_string_pointer = thread_stack_pointer;
  system_thread_manager_004(&thread_stack_pointer,thread_stack_pointer);
  system_thread_manager_004(&thread_stack_pointer,input_string_pointer + 4);
  input_string_pointer = thread_stack_pointer;
  if (((long long)thread_stack_pointer - (long long)input_string_pointer & 0xffffffffffffffe0U) != SYSTEM_CONFIG_BUFFER_SIZE) {
label_:
    thread_stack_pointer = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_limit = 0;
    thread_stack_pointer = &g_threadString4;
    thread_stack_pointer = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_limit = 0;
    thread_stack_pointer = &g_threadString4;
    for (pthread_operation_flags = input_string_pointer; pthread_operation_flags != input_string_pointer; pthread_operation_flags = pthread_operation_flags + 4) {
      (**(code **)*pthread_operation_flags)(pthread_operation_flags,0);
    }
    if (input_string_pointer != (unsigned long long *)0x0) {
      handle_system_error(input_string_pointer);
    }
    thread_stack_pointer = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_limit = 0;
    thread_stack_pointer = &g_threadString4;
    thread_stack_pointer = &g_threadString2;
    handle_system_error(input_string_pointer);
  }
  system_ui_002(system_global_data_pointer,&thread_stack_pointer,&thread_stack_pointer);
  string_length_counter = system_global_data_pointer + 0x90;
  string_length_counter = system_execute_function(system_global_data_pointer, SYSTEM_CONFIG_BUFFER_SIZE,*(unsigned char *)(system_global_data_pointer + 0xb8));
  system_thread_manager_003(string_length_counter + config_path_buffer_size,&thread_stack_pointer);
  string_length_counter = system_event_handler_005(string_length_counter,acStack_336,string_length_counter + config_path_buffer_size);
  if (acStack_336[0] == '\0') {
    system_event_handler_009(extraout_XMM0_Da_00,string_length_counter);
    goto label_;
  }
  if (string_length_counter != string_length_counter) {
    if (*(int *)(string_length_counter + 0x30) == 0) {
label_:
      thread_operation_flags = 1;
      goto label_;
    }
    if (*(int *)(string_length_counter + 0x30) != 0) {
      byte_input_string_pointer = *(byte **)(string_length_counter + 0x28);
      system_initialization_result0 = *(long long *)(string_length_counter + 0x28) - (long long)byte_input_string_pointer;
      do {
        byte_check_result = *byte_input_string_pointer;
        buffer_allocation_result = (uint)byte_input_string_pointer[system_initialization_result0];
        if (byte_check_result != buffer_allocation_result) break;
        byte_input_string_pointer = byte_input_string_pointer + 1;
      } while (buffer_allocation_result != 0);
      if ((int)(byte_check_result - buffer_allocation_result) < 1) goto label_;
    }
  }
  thread_operation_flags = 0;
label_:
  system_helper_003(string_length_counter,string_length_counter,string_length_counter,thread_operation_flags);
}
    thread_pool_4_status_code = 1;
    thread_result_index = _Cnd_broadcast(CONDITION_VARIABLE_ADDR);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    thread_result_index = _Mtx_unlock(IO_THREAD_POOL_MUTEX_ADDR);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    system_cleanup_001(ADDR_CLEANUP_FUNC);
  }
  *(unsigned int *)(system_global_data_pointer + 4) = 0;
  if (*(char *)(string_length_counter + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(string_length_counter + 0x2b0) + 0xe0))();
    *(int *)(string_length_counter + 0x224) = *(int *)(string_length_counter + 0x224) + 1;
    if (*(int *)(system_global_data_pointer + 0xe0) == 0) {
      if (*(char *)(string_length_counter + 0x264) == '\0') {
        thread_result_index = 10;
        if (10 < *(int *)(system_global_data_pointer + 0xbd0)) {
          thread_result_index = *(int *)(system_global_data_pointer + 0xbd0);
        }
        float_variable = (float)*(double *)(string_length_counter + config_path_buffer_size8);
        if (1.0 / (float)thread_result_index <= (float)*(double *)(string_length_counter + config_path_buffer_size8)) {
          float_variable = 1.0 / (float)thread_result_index;
        }
      }
      else {
        float_variable = *(float *)(string_length_counter + 0x268);
      }
      *(float *)(string_length_counter + 0x220) = float_variable;
    }
    else {
      *(unsigned int *)(string_length_counter + 0x220) = FLOAT_PI_OVER_4;
      float_variable = 0.033333335;
    }
    system_handle_manager_004(string_length_counter,float_variable);
    buffer_allocation_result = system_global_data_pointer;
    if ((system_global_data_pointer != 0) &&
       (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228), psystem_initialization_result != (long long *)0x0)) {
      pplong_stack_variable = &plong_stack_variable;
      plong_stack_variable = psystem_initialization_result;
      (**(code **)(*psystem_initialization_result + 0x28))();
      system_event_handler_013(buffer_allocation_result,&plong_stack_variable);
    }
    buffer_allocation_result = system_global_data_pointer;
    if (*(char *)(system_global_data_pointer + 0xa0) == '\0') {
      if ((system_global_data_pointer != 0) &&
         (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228), psystem_initialization_result != (long long *)0x0)) {
        pplong_stack_variable = &plong_stack_variable;
        plong_stack_variable = psystem_initialization_result;
        (**(code **)(*psystem_initialization_result + 0x28))();
        system_event_handler_016(buffer_allocation_result,&plong_stack_variable,0);
        psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228);
        *(unsigned long long *)(system_global_data_pointer + 0x228) = 0;
        if (psystem_initialization_result != (long long *)0x0) {
          (**(code **)(*psystem_initialization_result + 0x38))();
        }
      }
      func_0x00018005c480(system_global_data_pointer);
      psystem_initialization_result = system_global_data_pointer;
      if (*(code **)(*system_global_data_pointer + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(system_global_data_pointer + 9) = 0;
        input_string_pointer = (unsigned char *)psystem_initialization_result[8];
        if (input_string_pointer != (unsigned char *)0x0) {
          *input_string_pointer = 0;
        }
        *(unsigned int *)((long long)psystem_initialization_result + 0x54) = 0;
      }
      else {
        (**(code **)(*system_global_data_pointer + 8))();
      }
    }
    else {
      if (*(char *)(string_length_counter + 0x22c) != '\0') {
        system_event_handler_001();
      }
      *(unsigned int *)(string_length_counter + 0x228) = *(unsigned int *)(string_length_counter + 0x224);
      system_graphics_001();
      system_graphics_002();
    }
    QueryPerformanceCounter(&thread_stack_base_address);
    dVar15 = (double)thread_stack_base_address * system_global_data_pointer;
    system_global_data_pointer = system_global_data_pointer + 1;
    dVar16 = dVar15 - system_global_data_pointer;
    if (1.0 < dVar16) {
      *(float *)(string_length_counter + 500) = (float)((double)system_global_data_pointer / dVar16);
      system_global_data_pointer = 0;
      system_global_data_pointer = dVar15;
      *(float *)(string_length_counter + 0x1f8) = (float)(1000.0 / *(double *)(string_length_counter + 0x70));
    }
    if (0.0 < *(double *)(system_global_data_pointer + 0x1510)) {
      system_handle_manager_005(string_length_counter,(float)*(double *)(system_global_data_pointer + 0x1510));
    }
    if (*(char *)(string_length_counter + 0x1ee) == '\0') {
      float_variable = *(float *)(string_length_counter + config_path_buffer_size0);
      dVar15 = *(double *)(string_length_counter + 0x218);
      do {
        QueryPerformanceCounter(&thread_stack_base_address);
      } while ((double)thread_stack_base_address * system_global_data_pointer < (double)float_variable + dVar15);
      QueryPerformanceCounter(&thread_stack_base_address);
      string_length_counter = thread_stack_base_address - system_global_data_pointer;
      system_global_data_pointer = thread_stack_base_address;
      *(double *)(string_length_counter + config_path_buffer_size8) = (double)string_length_counter * system_global_data_pointer;
      QueryPerformanceCounter(&thread_stack_base_address);
      *(double *)(string_length_counter + 0x218) = (double)thread_stack_base_address * system_global_data_pointer;
    }
  }
  return;
}
    thread_pool_4_status_code = 1;
    thread_result_index = _Cnd_broadcast(CONDITION_VARIABLE_ADDR);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    thread_result_index = _Mtx_unlock(IO_THREAD_POOL_MUTEX_ADDR);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    system_cleanup_001(ADDR_CLEANUP_FUNC);
  }
  *(unsigned int *)(system_global_data_pointer + 4) = 0;
  if (*(char *)(handle + 0x1ee) == '\0') {
    (**(code **)(**(long long **)(handle + 0x2b0) + 0xe0))();
    *(int *)(handle + 0x224) = *(int *)(handle + 0x224) + 1;
    if (*(int *)(system_global_data_pointer + 0xe0) == 0) {
      if (*(char *)(handle + 0x264) == '\0') {
        thread_result_index = 10;
        if (10 < *(int *)(system_global_data_pointer + 0xbd0)) {
          thread_result_index = *(int *)(system_global_data_pointer + 0xbd0);
        }
        float_variable = (float)*(double *)(handle + config_path_buffer_size8);
        if (1.0 / (float)thread_result_index <= (float)*(double *)(handle + config_path_buffer_size8)) {
          float_variable = 1.0 / (float)thread_result_index;
        }
      }
      else {
        float_variable = *(float *)(handle + 0x268);
      }
      *(float *)(handle + 0x220) = float_variable;
    }
    else {
      *(unsigned int *)(handle + 0x220) = FLOAT_PI_OVER_4;
      float_variable = 0.033333335;
    }
    system_handle_manager_004(handle,float_variable);
    buffer_allocation_result = system_global_data_pointer;
    if ((system_global_data_pointer != 0) &&
       (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228), psystem_initialization_result != (long long *)0x0)) {
      pplong_stack_variable = &plong_stack_variable;
      plong_stack_variable = psystem_initialization_result;
      (**(code **)(*psystem_initialization_result + 0x28))();
      system_event_handler_013(buffer_allocation_result,&plong_stack_variable);
    }
    buffer_allocation_result = system_global_data_pointer;
    if (*(char *)(system_global_data_pointer + 0xa0) == '\0') {
      if ((system_global_data_pointer != 0) &&
         (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228), psystem_initialization_result != (long long *)0x0)) {
        pplong_stack_variable = &plong_stack_variable;
        plong_stack_variable = psystem_initialization_result;
        (**(code **)(*psystem_initialization_result + 0x28))();
        system_event_handler_016(buffer_allocation_result,&plong_stack_variable,0);
        psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x228);
        *(unsigned long long *)(system_global_data_pointer + 0x228) = 0;
        if (psystem_initialization_result != (long long *)0x0) {
          (**(code **)(*psystem_initialization_result + 0x38))();
        }
      }
      func_0x00018005c480(system_global_data_pointer);
      psystem_initialization_result = system_global_data_pointer;
      if (*(code **)(*system_global_data_pointer + 8) == (code *)&systemInitializationCheckFunction) {
        *(unsigned int *)(system_global_data_pointer + 9) = 0;
        input_string_pointer = (unsigned char *)psystem_initialization_result[8];
        if (input_string_pointer != (unsigned char *)0x0) {
          *input_string_pointer = 0;
        }
        *(unsigned int *)((long long)psystem_initialization_result + 0x54) = 0;
      }
      else {
        (**(code **)(*system_global_data_pointer + 8))();
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
    QueryPerformanceCounter(&thread_stack_base_address);
    dVar14 = (double)thread_stack_base_address * system_global_data_pointer;
    system_global_data_pointer = system_global_data_pointer + 1;
    dVar15 = dVar14 - system_global_data_pointer;
    if (1.0 < dVar15) {
      *(float *)(handle + 500) = (float)((double)system_global_data_pointer / dVar15);
      system_global_data_pointer = 0;
      system_global_data_pointer = dVar14;
      *(float *)(handle + 0x1f8) = (float)(1000.0 / *(double *)(handle + 0x70));
    }
    if (0.0 < *(double *)(system_global_data_pointer + 0x1510)) {
      system_handle_manager_005(handle,(float)*(double *)(system_global_data_pointer + 0x1510));
    }
    if (*(char *)(handle + 0x1ee) == '\0') {
      float_variable = *(float *)(handle + config_path_buffer_size0);
      dVar14 = *(double *)(handle + 0x218);
      do {
        QueryPerformanceCounter(&thread_stack_base_address);
      } while ((double)thread_stack_base_address * system_global_data_pointer < (double)float_variable + dVar14);
      QueryPerformanceCounter(&thread_stack_base_address);
      string_length_counter = thread_stack_base_address - system_global_data_pointer;
      system_global_data_pointer = thread_stack_base_address;
      *(double *)(handle + config_path_buffer_size8) = (double)string_length_counter * system_global_data_pointer;
      QueryPerformanceCounter(&thread_stack_base_address);
      *(double *)(handle + 0x218) = (double)thread_stack_base_address * system_global_data_pointer;
    }
  }
  return;
}
    data_180c82862 = data_180c82862 == '\0';
  }
  string_length_counter = 0xe0;
  input_string_pointer = system_global_data_pointer;
  do {
    input_string_pointer = input_string_pointer + 0x18;
    *input_string_pointer = 1;
    string_length_counter = string_length_counter + -1;
  } while (string_length_counter != 0);
label_:
  input_string_pointer = (unsigned long long *)system_global_data_pointer[1];
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_initialization_result4 = system_global_data_pointer;
  stack_size_limit = system_global_data_pointer;
  system_global_data_pointer = (long long *)*input_string_pointer;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  buffer_allocation_result = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_size_limit = 3;
  system_execute_function(auStack_2a8);
  system_handle_manager_002((long long)system_global_data_pointer * 0x238 + system_global_data_pointer + 0x1598,auStack_2a8);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_system_error();
  }
  system_global_data_pointer = psystem_initialization_result4;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_initialization_result4 = (long long *)*system_global_data_pointer;
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  psystem_initialization_result = system_global_data_pointer;
  stack_size_limit = system_global_data_pointer;
  system_global_data_pointer = (long long *)*psystem_initialization_result4;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  stack_size_limit = 3;
  system_execute_function(auStack_2a8);
  system_execute_function(auStack_2a8);
  *(float *)((long long)system_global_data_pointer + 0x18) = system_global_data_pointer;
  system_initializer_001();
  string_length_counter = (long long)system_global_data_pointer;
  input_string_pointer = system_global_data_pointer;
  input_string_pointer = system_global_data_pointer;
  if (*(char *)(system_global_data_pointer + 7) != '\0') {
    if ((((*(char *)(system_global_data_pointer + 0xe) != '\0') ||
         (*(char *)((long long)system_global_data_pointer + 0x38c) != '\0')) ||
        (*(char *)((long long)system_global_data_pointer + 0x38d) != '\0')) ||
       (*(char *)((long long)system_global_data_pointer + 0x38e) != '\0')) {
      system_global_data_pointer[0x1518] = 1;
      input_string_pointer[0x1530] = 1;
      input_string_pointer[0x1590] = 1;
      input_string_pointer[0x15a8] = 1;
      input_string_pointer[0x1710] = 1;
    }
    if (((*(char *)((long long)input_string_pointer + 0x71) != '\0') || (*(char *)(string_length_counter + 0x38d) != '\0')) ||
       (*(char *)(string_length_counter + 0x38e) != '\0')) {
      do {
        input_string_pointer = input_string_pointer + 0x18;
        *input_string_pointer = 1;
        system_initialization_result2 = system_initialization_result2 + -1;
      } while (system_initialization_result2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    handle_system_error();
  }
  system_global_data_pointer = psystem_initialization_result;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  if (*(int *)(system_global_data_pointer + 0x161c) == 0x11) {
    input_string_pointer = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_initialization_result4 = system_global_data_pointer;
    plStack_2c0 = system_global_data_pointer;
    system_global_data_pointer = (long long *)*input_string_pointer;
    system_initializer_003(&systemConfigData1,0,0);
    system_config_001(&systemConfigData2);
    stack_size_limit = SYSTEM_CONFIG_BUFFER_SIZE_ZERO00000;
    auStack_2c8[0] = FLOAT_ONE;
    stack_size_limit = config_path_buffer_size000;
    thread_stack_pointer = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_limit;
    system_config_002(&systemConfigData3,4,system_global_data_pointer + 0x167c,auStack_2c8);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO00000);
    stack_size_limit = (long long *)merge_32bit_values(stack_size_limit._4_4_,FLOAT_ONE);
    stack_size_limit = config_path_buffer_size000;
    thread_stack_pointer = &systemConfigBufferPtr;
    pplStack_328 = &plStack_2f8;
    system_config_002(&systemConfigData4,4,system_global_data_pointer + 0x1680,&stack_size_limit);
    system_initializer_004();
    system_global_data_pointer = psystem_initialization_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(int *)(system_global_data_pointer + 0x161c) == 0xc) {
    input_string_pointer = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_initialization_result4 = system_global_data_pointer;
    plStack_2c0 = system_global_data_pointer;
    system_global_data_pointer = (long long *)*input_string_pointer;
    system_initializer_003(&systemConfigData6,0,0);
    stack_size_limit = (long long *)merge_32bit_values(stack_size_limit._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO00000);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_,FLOAT_ONE);
    stack_size_limit = config_path_buffer_size000;
    thread_stack_pointer = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_limit;
    system_config_002(&systemConfigData5,4,system_global_data_pointer + 0x1688,&plStack_2f8);
    system_initializer_004();
    system_global_data_pointer = psystem_initialization_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(int *)(system_global_data_pointer + 0x161c) == 0xd) {
    input_string_pointer = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_initialization_result4 = system_global_data_pointer;
    plStack_2c0 = system_global_data_pointer;
    system_global_data_pointer = (long long *)*input_string_pointer;
    system_initializer_003(&systemConfigData7,0,0);
    stack_size_limit = (long long *)merge_32bit_values(stack_size_limit._4_4_, SYSTEM_CONFIG_BUFFER_SIZE_ZERO00000);
    plStack_2f8 = (long long *)merge_32bit_values(plStack_2f8._4_4_,FLOAT_ONE);
    stack_size_limit = config_path_buffer_size000;
    thread_stack_pointer = &systemConfigBufferPtr;
    pplStack_328 = (long long **)&stack_size_limit;
    system_config_002(&systemConfigData5,4,system_global_data_pointer + 0x168c,&plStack_2f8);
    if (*(float *)(system_global_data_pointer + 0x168c) == 0.0) {
      *(unsigned int *)(system_global_data_pointer + 0x168c) = FLOAT_ONE;
    }
    system_initializer_004();
    system_global_data_pointer = psystem_initialization_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  input_string_pointer = (unsigned long long *)*system_global_data_pointer;
  if (input_string_pointer != (unsigned long long *)0x0) {
    if ((void *)*input_string_pointer == &systemValidationFunction) {
      NVGSDK_Poll(input_string_pointer[1]);
    }
    else {
      (**(code **)((void *)*input_string_pointer + 8))();
    }
  }
  *system_global_data_pointer = float_variable;
  string_length_counter = (long long)*(int *)(system_global_data_pointer + 0x1d40) * 0xd0;
  system_initialization_result2 = *(long long *)(string_length_counter + 0xb0 + *(long long *)(system_global_data_pointer + 0x1d20));
  float_variable = (float)system_initialization_result2;
  if (system_initialization_result2 < 0) {
    float_variable = float_variable + 1.8446744e+19;
  }
  if (float_variable * 8.5830686e-07 < (float)*(int *)(system_global_data_pointer + 4)) {
    *(float *)(system_global_data_pointer + STRING_BUFFER_SIZE) = float_variable + *(float *)(system_global_data_pointer + STRING_BUFFER_SIZE);
    float_variable = (float)fmodf(string_length_counter,FLOAT_ONE);
    if (0.5 < float_variable) {
      thread_stack_pointer = &g_threadString2;
      stack_size_limit = 0;
      thread_stack_pointer = (unsigned long long *)0x0;
      stack_size_limit = 0;
      input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,0x1c,0x13);
      *(unsigned char *)input_string_pointer = 0;
      thread_stack_pointer = input_string_pointer;
      buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
      stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
      *input_string_pointer = 0x6f6d654d20555047;
      input_string_pointer[1] = 0x6567617375207972;
      input_string_pointer[2] = 0x6163697469726320;
      *(unsigned int *)(input_string_pointer + 3) = 0x2e2e6c;
      stack_size_limit = 0x1b;
      thread_stack_pointer = &g_threadString2;
      handle_system_error(input_string_pointer);
    }
  }
  psystem_initialization_result4 = system_global_data_pointer;
  if ((char)system_global_data_pointer[0x42] == '\0') {
    (**(code **)(*system_global_data_pointer + 0xb0))(system_global_data_pointer,*(unsigned int *)(system_global_data_pointer + 0x1340));
    (**(code **)(*psystem_initialization_result4 + 0xb8))(psystem_initialization_result4,*(unsigned int *)(system_global_data_pointer + 0x1500));
    (**(code **)(*psystem_initialization_result4 + 0xc0))(psystem_initialization_result4,*(unsigned int *)(system_global_data_pointer + 0x13b0));
    (**(code **)(*psystem_initialization_result4 + 200))(psystem_initialization_result4,*(unsigned int *)(system_global_data_pointer + 0x1490));
    (**(code **)(*psystem_initialization_result4 + 0x50))(psystem_initialization_result4);
  }
  input_string_pointer = system_global_data_pointer;
  psystem_initialization_result4 = *(long long **)(system_global_data_pointer + 0x17ec);
  *system_global_data_pointer = 0;
  stack_size_limit._0_4_ = SUB84(psystem_initialization_result4,0);
  *(unsigned int *)(input_string_pointer + 1) = (unsigned int)stack_size_limit;
  stack_size_limit._4_4_ = (unsigned int)((ulong long)psystem_initialization_result4 >> config_path_buffer_size);
  *(unsigned int *)((long long)input_string_pointer + 0xc) = stack_size_limit._4_4_;
  *(unsigned int *)(input_string_pointer + 8) = 0;
  stack_size_limit = psystem_initialization_result4;
  system_finalizer_001();
  system_finalizer_002();
  if (((*(int *)(handle + 0x340) != 0) && (system_global_data_pointer != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*system_global_data_pointer + 0x28))(), system_char_variable != '\0')) {
    (**(code **)(system_global_data_pointer + 0x98))();
  }
  (**(code **)(**(long long **)(handle + 0x2b0) + 0x30))(*(long long **)(handle + 0x2b0),thread_operation_flags);
  if (((*(int *)(handle + 0x340) != 0) && (system_global_data_pointer != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*system_global_data_pointer + 0x28))(), system_char_variable != '\0')) {
    (*(code *)system_global_data_pointer[7])();
  }
  if (((*(int *)(handle + 0x340) != 0) && (system_global_data_pointer != (long long *)0x0)) &&
     (system_char_variable = (**(code **)(*system_global_data_pointer + 0x28))(), system_char_variable != '\0')) {
    *(unsigned long long *)(*(long long *)(handle + 0x3c0) + 0x18) =
         *(unsigned long long *)(*(long long *)(handle + 0x3c0) + STRING_BUFFER_SIZE);
    psystem_initialization_result4 = (long long *)(system_global_data_pointer + config_path_buffer_size30);
    buffer_allocation_result = buffer_allocation_result;
    if (*(long long *)(system_global_data_pointer + config_path_buffer_size38) - *psystem_initialization_result4 >> 2 != 0) {
      do {
        stack_size_limit = *(unsigned int *)(buffer_allocation_result + *psystem_initialization_result4);
        system_initialization_result2 = *(long long *)(handle + 0x3c0) + STRING_BUFFER_SIZE;
        system_execute_function(system_initialization_result2,&stack_size_limit);
        system_execute_function(system_initialization_result2,(long long)&stack_size_limit + 1);
        system_execute_function(system_initialization_result2,(long long)&stack_size_limit + 2);
        system_execute_function(system_initialization_result2,(long long)&stack_size_limit + 3);
        buffer_allocation_result = (int)buffer_allocation_result + 1;
        buffer_allocation_result = (ulong long)buffer_allocation_result;
        psystem_initialization_result4 = (long long *)(system_global_data_pointer + config_path_buffer_size30);
        buffer_allocation_result = buffer_allocation_result + 4;
      } while ((ulong long)(long long)(int)buffer_allocation_result <
               (ulong long)(*(long long *)(system_global_data_pointer + config_path_buffer_size38) - *psystem_initialization_result4 >> 2));
    }
    (**(code **)(system_global_data_pointer + 0xa8))();
  }
  (**(code **)(**(long long **)(handle + 0x2b0) + 0x38))(*(long long **)(handle + 0x2b0),thread_operation_flags);
  (**(code **)(**(long long **)(handle + 0x2b0) + SYSTEM_CONFIG_BUFFER_SIZE))(*(long long **)(handle + 0x2b0),thread_operation_flags);
  system_execute_function();
  if (data_180c82862 != '\0') {
    thread_stack_pointer = &g_threadString2;
    stack_size_limit = 0;
    thread_stack_pointer = (unsigned long long *)0x0;
    stack_size_limit = 0;
    input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,0x19,0x13);
    *(unsigned char *)input_string_pointer = 0;
    thread_stack_pointer = input_string_pointer;
    buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
    stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
    *input_string_pointer = 0x6d6d6f43204c4752;
    input_string_pointer[1] = 0x656e696c20646e61;
    input_string_pointer[2] = 0x656c6f736e6f6320;
    *(unsigned char *)(input_string_pointer + 3) = 0;
    system_initialization_result2 = system_global_data_pointer;
    stack_size_limit = 0x18;
    input_string_pointer = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    psystem_initialization_result4 = system_global_data_pointer;
    plStack_2c0 = system_global_data_pointer;
    system_global_data_pointer = (long long *)*input_string_pointer;
    plStack_2f8 = (long long *)0x0;
    stack_size_limit = (long long *)0x0;
    pplStack_328 = (long long **)&cStack_300;
    system_processor_002(system_initialization_result2,&thread_stack_pointer,&plStack_2f8,&stack_size_limit);
    if (*(char *)(system_initialization_result2 + 0x60) != '\0') {
      system_processor_003(system_initialization_result2,&plStack_2f8,&stack_size_limit,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(unsigned char *)(system_initialization_result2 + 0x60) = 0;
    }
    system_global_data_pointer = psystem_initialization_result4;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    thread_stack_pointer = &g_threadString2;
    handle_system_error(input_string_pointer);
  }
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_348);
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
    system_handle_buffer = 0;
  }
  do {
    string_length_counter = string_length_counter + 1;
    character_scan_pointer = (char *)(string_length_counter + ADDR_STRING_OFFSET);
    string_length_counter = string_length_counter;
  } while (*character_scan_pointer != '\0');
  if (string_length_counter != 0) {
    fwrite(&data_1809fcc18,1,1,string_length_counter);
    fwrite(&system_thread_name_buffer,string_length_counter,1,string_length_counter);
    system_cleanup_010(0);
  }
  if (string_length_counter != 0) {
    fclose(string_length_counter);
    thread_stack_base_address = 0;
    LOCK();
    system_global_data_pointer = system_global_data_pointer + -1;
    UNLOCK();
    string_length_counter = 0;
  }
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_pointer == (void *)0x0) {
    thread_stack_pointer = (void *)0x0;
    stack_size_limit = 0;
    thread_stack_pointer = &g_threadString4;
    if (string_length_counter != 0) {
      fclose(string_length_counter);
      LOCK();
      system_global_data_pointer = system_global_data_pointer + -1;
      UNLOCK();
    }
    return;
  }
  handle_system_error();
}
  data_180c8ecee = 1;
  system_event_handler_015(system_global_data_pointer);
  system_cleanup_002();
  system_cleanup_008(0);
  if (system_thread_sync_flag != '\0') {
    LOCK();
    *(unsigned int *)(*(long long *)(system_global_data_pointer + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  system_execute_function();
  if ((system_operation_flag == '\0') &&
     (psystem_initialization_result = *(long long **)(system_global_data_pointer + 0x18), psystem_initialization_result != (long long *)0x0)) {
    system_char_variable = (**(code **)*psystem_initialization_result)(psystem_initialization_result);
    if (system_char_variable != '\0') {
      (**(code **)(*psystem_initialization_result + 0x28))(psystem_initialization_result);
    }
  }
  system_cleanup_009();
  string_length_counter = system_global_data_pointer;
  if (system_global_data_pointer != 0) {
    system_cleanup_011(system_global_data_pointer);
    handle_system_error(string_length_counter);
  }
  system_global_data_pointer = 0;
  system_thread_manager_008(system_global_data_pointer);
  string_length_counter = system_global_data_pointer;
  if (system_global_data_pointer != 0) {
    system_thread_manager_008(system_global_data_pointer);
    _Mtx_destroy_in_situ();
    handle_system_error(string_length_counter);
  }
  system_global_data_pointer = 0;
  return;
}
unsigned long long *
system_execute_function(unsigned long long *handle,ulong long thread_operation_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  unsigned long long buffer_allocation_result;
  buffer_allocation_result = DEFAULT_THREAD_POOL_FLAG;
  *handle = &systemHandleData;
  system_cleanup_004();
  if ((thread_operation_flags & 1) != 0) {
    free(handle,0xc0,mutex_attr,mutex_type,buffer_allocation_result);
  }
  return handle;
}
      data_180c82850 = '\x01';
      do {
        thread_result_index = ReleaseSemaphore(system_global_data_pointer,1);
      } while (thread_result_index == 0);
      thread_stack_pointer = &g_threadString2;
      if (thread_stack_pointer != (unsigned char *)0x0) {
        handle_system_error();
      }
      thread_stack_pointer = (unsigned char *)0x0;
      stack_size_limit = stack_size_limit & INT64_MASK;
      thread_stack_pointer = &g_threadString4;
      thread_stack_pointer = &g_threadString2;
      if (input_string_pointer != (void *)0x0) {
        handle_system_error(input_string_pointer);
      }
      thread_stack_pointer = (unsigned char *)0x0;
      stack_size_limit = stack_size_limit & INT64_MASK;
      thread_stack_pointer = &g_threadString4;
    }
  }
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_pointer != (void *)0x0) {
    handle_system_error();
  }
  thread_stack_pointer = (void *)0x0;
  stack_size_limit = 0;
  thread_stack_pointer = &g_threadString4;
label_:
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_168);
}
uint validate_system_mutex_lock(void)
{
  uint in_EAX;
  int thread_result_index;
  long long string_length_counter;
  if (system_global_data_pointer != 0) {
    string_length_counter = system_global_data_pointer + 0x110;
    thread_result_index = _Mtx_lock(string_length_counter);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    in_EAX = _Mtx_unlock(string_length_counter);
    if (in_EAX != 0) {
      in_EAX = __Throw_C_error_std__YAXH_Z(in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}
      data_180d49178 = 0;
      system_global_data_pointer = 0;
      strcpy_s(&data_180d49178,0x80,&default_resource_string,mutex_type,buffer_allocation_result);
      system_crypto_002(system_execute_function);
      system_initialize_crypto_module(&data_180d49158);
      return &data_180d49160;
    }
  }
  return &data_180d49160;
}
    data_180d48d40 = '\x01';
    system_thread_manager_012(handle,CONCAT71((int7)((ulong long)input_string_pointer >> 8),1));
  }
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_298);
}
    thread_pool_2_status_code = '\0';
    if ((cStack_208 != '\0') && (thread_result_index = _Mtx_unlock(stack_size_limit), thread_result_index != 0)) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    if (system_char_variable != '\0') goto label_;
    *(unsigned char *)(*(long long *)(*(long long *)(system_global_data_pointer + 8) + 0x140) + config_path_buffer_size8) = 1;
  }
  thread_pool_2_status_code = '\0';
  thread_result_index = _Mtx_unlock(RENDER_THREAD_POOL_MUTEX_ADDR);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
label_:
  if (*(char *)(system_global_data_pointer + 0xa0) != '\0') {
    buffer_allocation_result = system_ui_007(system_initialization_result6);
    *(unsigned long long *)(system_global_data_pointer + 0xa8) = buffer_allocation_result;
    buffer_allocation_result = system_ui_008(system_initialization_result6);
    *(unsigned long long *)(system_global_data_pointer + 0xb0) = buffer_allocation_result;
  }
  character_scan_pointer = system_global_data_pointer;
  if (*system_global_data_pointer != '\0') {
    input_string_pointer = (unsigned long long *)*system_global_data_pointer;
    thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    buffer_allocation_result = system_global_data_pointer;
    pplStack_1b8 = (long long **)system_global_data_pointer;
    system_global_data_pointer = *input_string_pointer;
    system_initializer_003(&systemInitData1,0,0);
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    buffer_allocation_result = thread_operation_flags;
    thread_operation_flags = thread_operation_flags;
    if (*(long long *)(character_scan_pointer + STRING_BUFFER_SIZE) - *(long long *)(character_scan_pointer + 8) >> 3 != 0) {
      do {
        dVar1 = *(double *)(*(long long *)(buffer_allocation_result + *(long long *)(character_scan_pointer + 8)) + config_path_buffer_size0);
        dVar7 = dVar2 + dVar1;
        dVar2 = *(double *)(*(long long *)(buffer_allocation_result + *(long long *)(character_scan_pointer + 8)) + 0x1f8);
        dVar8 = dVar9 + dVar2;
        system_config_001(&systemInitData2,thread_operation_flags,dVar1 / dVar2);
        thread_operation_flags = (int)thread_operation_flags + 1;
        buffer_allocation_result = buffer_allocation_result + 8;
        thread_operation_flags = (ulong long)thread_operation_flags;
        dVar2 = dVar7;
        dVar9 = dVar8;
      } while ((ulong long)(long long)(int)thread_operation_flags <
               (ulong long)(*(long long *)(character_scan_pointer + STRING_BUFFER_SIZE) - *(long long *)(character_scan_pointer + 8) >> 3));
    }
    system_config_001(&systemConfigData8,dVar7 / dVar8);
    system_initializer_004();
    system_global_data_pointer = buffer_allocation_result;
    thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
  }
  if (*(char *)(system_global_data_pointer + 0x1626) != '\0') {
    buffer_allocation_result = *(unsigned long long *)(system_global_data_pointer + 0x138);
    *(unsigned long long *)(system_global_data_pointer + 0x138) = 0;
    thread_stack_pointer = &g_defaultDataTemplate;
    thread_stack_pointer = auStack_a0;
    auStack_a0[0] = 0;
    stack_size_limit = 0x18;
    thread_operation_flags = strcpy_s(auStack_a0, SYSTEM_CONFIG_BUFFER_SIZE, &systemConfigStringBuffer2);
    system_ui_001(thread_operation_flags,&thread_stack_pointer,buffer_allocation_result,1);
    thread_stack_pointer = &g_threadString4;
  }
  if (*(int *)(system_global_data_pointer + 0x60) == 1) {
    system_finalizer_003();
  }
  else if (*(int *)(system_global_data_pointer + 0x60) == 2) {
    system_finalizer_004();
  }
  system_initialization_result8 = *(long long *)(system_global_data_pointer + 0x1870) - *(long long *)(system_global_data_pointer + 0x1868) >> 3;
  buffer_allocation_result = thread_operation_flags;
  if (0 < (int)system_initialization_result8) {
    do {
      input_string_pointer = (unsigned long long *)system_validator_002(system_initialization_result8,&plStack_1d0,(long long)(int)buffer_allocation_result);
      (**(code **)(*(long long *)*input_string_pointer + 0x98))();
      if (plStack_1d0 != (long long *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      thread_operation_flags = (int)buffer_allocation_result + 1;
      system_initialization_result8 = *(long long *)(system_global_data_pointer + 0x1870) - *(long long *)(system_global_data_pointer + 0x1868) >> 3;
      buffer_allocation_result = (ulong long)thread_operation_flags;
    } while ((int)thread_operation_flags < (int)system_initialization_result8);
  }
  system_processor_001();
  func_0x00018024f7f0();
  thread_operation_flags = func_0x0001800e2850(system_initialization_result6);
  system_ui_004(thread_operation_flags,1,0);
  if (*(char *)(system_initialization_result6 + 0xf18) != '\0') {
    system_ui_009(system_initialization_result6);
    *(unsigned char *)(system_initialization_result6 + 0xf18) = 0;
  }
  string_length_counter = system_global_data_pointer;
  system_initialization_result8 = system_global_data_pointer;
  buffer_allocation_result = *(unsigned long long *)(system_global_data_pointer + 0x161c);
  *(unsigned long long *)(system_global_data_pointer + 0x12d0) = *(unsigned long long *)(system_global_data_pointer + 0x1614);
  *(unsigned long long *)(system_initialization_result8 + 0x12d8) = buffer_allocation_result;
  buffer_allocation_result = *(unsigned long long *)(string_length_counter + 0x162c);
  *(unsigned long long *)(system_initialization_result8 + 0x12e0) = *(unsigned long long *)(string_length_counter + 0x1624);
  *(unsigned long long *)(system_initialization_result8 + 0x12e8) = buffer_allocation_result;
  buffer_allocation_result = *(unsigned long long *)(string_length_counter + 0x163c);
  *(unsigned long long *)(system_initialization_result8 + 0x12f0) = *(unsigned long long *)(string_length_counter + 0x1634);
  *(unsigned long long *)(system_initialization_result8 + 0x12f8) = buffer_allocation_result;
  buffer_allocation_result = *(unsigned long long *)(string_length_counter + 0x164c);
  *(unsigned long long *)(system_initialization_result8 + 0x1300) = *(unsigned long long *)(string_length_counter + 0x1644);
  *(unsigned long long *)(system_initialization_result8 + 0x1308) = buffer_allocation_result;
  buffer_allocation_result = *(unsigned long long *)(string_length_counter + 0x165c);
  *(unsigned long long *)(system_initialization_result8 + 0x1310) = *(unsigned long long *)(string_length_counter + 0x1654);
  *(unsigned long long *)(system_initialization_result8 + 0x1318) = buffer_allocation_result;
  buffer_allocation_result = *(unsigned long long *)(string_length_counter + 0x166c);
  *(unsigned long long *)(system_initialization_result8 + 0x1320) = *(unsigned long long *)(string_length_counter + 0x1664);
  *(unsigned long long *)(system_initialization_result8 + 0x1328) = buffer_allocation_result;
  thread_operation_flags = *(unsigned int *)(string_length_counter + 0x1678);
  buffer_allocation_result = *(unsigned int *)(string_length_counter + 0x167c);
  buffer_allocation_result = *(unsigned int *)(string_length_counter + 0x1680);
  *(unsigned int *)(system_initialization_result8 + 0x1330) = *(unsigned int *)(string_length_counter + 0x1674);
  *(unsigned int *)(system_initialization_result8 + 0x1334) = thread_operation_flags;
  *(unsigned int *)(system_initialization_result8 + 0x1338) = buffer_allocation_result;
  *(unsigned int *)(system_initialization_result8 + 0x133c) = buffer_allocation_result;
  thread_operation_flags = *(unsigned int *)(string_length_counter + 0x1688);
  buffer_allocation_result = *(unsigned int *)(string_length_counter + 0x168c);
  buffer_allocation_result = *(unsigned int *)(string_length_counter + 0x1690);
  *(unsigned int *)(system_initialization_result8 + 0x1340) = *(unsigned int *)(string_length_counter + 0x1684);
  *(unsigned int *)(system_initialization_result8 + 0x1344) = thread_operation_flags;
  *(unsigned int *)(system_initialization_result8 + 0x1348) = buffer_allocation_result;
  *(unsigned int *)(system_initialization_result8 + 0x134c) = buffer_allocation_result;
  *(unsigned short *)(string_length_counter + 0x1637) = 0;
  *(unsigned char *)(string_length_counter + 0x162c) = 0;
  system_finalizer_001();
  system_finalizer_002();
  *(uint *)(system_global_data_pointer + 0x1590) = system_global_data_pointer;
  system_global_data_pointer = system_global_data_pointer + 1 & 0x80000001;
  if ((int)system_global_data_pointer < 0) {
    system_global_data_pointer = (system_global_data_pointer - 1 | 0xfffffffe) + 1;
  }
  input_string_pointer = (unsigned long long *)*system_global_data_pointer;
  thread_result_index = _Mtx_lock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  buffer_allocation_result = system_global_data_pointer;
  pplStack_220 = (long long **)system_global_data_pointer;
  system_global_data_pointer = *input_string_pointer;
  system_initialization_result8 = *(long long *)(system_global_data_pointer + 0x1a08 + (long long)(int)system_global_data_pointer * 8);
  if (system_initialization_result8 != 0) {
    buffer_allocation_result = thread_operation_flags;
    thread_operation_flags = thread_operation_flags;
    if (0 < *(int *)(system_initialization_result8 + STRING_BUFFER_SIZE)) {
      do {
        system_network_003(*(unsigned long long *)(thread_operation_flags + *(long long *)(system_initialization_result8 + 8)));
        string_length_counter = *(long long *)(*(long long *)(system_initialization_result8 + 8) + thread_operation_flags);
        if (string_length_counter != 0) {
          system_execute_function(string_length_counter);
          handle_system_error(string_length_counter);
        }
        *(unsigned long long *)(*(long long *)(system_initialization_result8 + 8) + thread_operation_flags) = 0;
        thread_operation_flags = (int)buffer_allocation_result + 1;
        buffer_allocation_result = (ulong long)thread_operation_flags;
        thread_operation_flags = thread_operation_flags + 8;
      } while ((int)thread_operation_flags < *(int *)(system_initialization_result8 + STRING_BUFFER_SIZE));
    }
    if (*(long long *)(system_initialization_result8 + 8) != 0) {
      handle_system_error();
    }
    *(unsigned long long *)(system_initialization_result8 + 8) = 0;
    input_string_pointer = *(unsigned char **)(system_global_data_pointer + 0x1a08 + (long long)(int)system_global_data_pointer * 8);
    if (input_string_pointer != (unsigned char *)0x0) {
      *input_string_pointer = 0;
      *(unsigned long long *)(input_string_pointer + 8) = 0;
      *(unsigned long long *)(input_string_pointer + 0x14) = 0;
      *(unsigned int *)(input_string_pointer + STRING_BUFFER_SIZE) = 0;
      *(unsigned long long *)(input_string_pointer + 0x24) = 0;
      *(unsigned long long *)(input_string_pointer + 0x1c) = 0;
      handle_system_error();
    }
    *(unsigned long long *)(system_global_data_pointer + 0x1a08 + (long long)(int)system_global_data_pointer * 8) = 0;
    thread_operation_flags = stack_size_limit;
  }
  system_initializer_002();
  system_global_data_pointer = buffer_allocation_result;
  thread_result_index = _Mtx_unlock(ADDR_MAIN_MUTEX);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  if (*(int *)(system_initialization_result6 + 8) == 2) {
    *(unsigned char *)(*(long long *)(system_initialization_result6 + STRING_BUFFER_SIZE) + 0xc0) = 0;
    while( true ) {
      input_string_pointer = (void *)**(unsigned long long **)(system_initialization_result6 + STRING_BUFFER_SIZE);
      if (input_string_pointer == &systemValidationData1) {
        system_char_variable = *(char *)(*(unsigned long long **)(system_initialization_result6 + STRING_BUFFER_SIZE) + 2) != '\0';
      }
      else {
        system_char_variable = (**(code **)(input_string_pointer + 0x68))();
      }
      if (system_char_variable != '\0') break;
      input_string_pointer = (void *)**(unsigned long long **)(system_initialization_result6 + STRING_BUFFER_SIZE);
      if (input_string_pointer == &systemValidationData1) {
        system_cleanup_005(*(unsigned long long **)(system_initialization_result6 + STRING_BUFFER_SIZE) + 4);
      }
      else {
        (**(code **)(input_string_pointer + 0x80))();
      }
    }
    plStack_1c0 = *(long long **)(system_initialization_result6 + STRING_BUFFER_SIZE);
    *(unsigned long long *)(system_initialization_result6 + STRING_BUFFER_SIZE) = 0;
    if (plStack_1c0 != (long long *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(unsigned int *)(system_initialization_result6 + 8) = 0;
    if (_data_00000010 != (long long *)0x0) {
      (**(code **)(*_data_00000010 + STRING_BUFFER_SIZE))();
    }
    (**(code **)(_data_00000000 + config_path_buffer_size))(0);
    _data_00000008 = UINT64_MAX;
  }
  else if (*(int *)(system_initialization_result6 + 8) != 0) goto label_;
  *(uint *)(system_global_data_pointer + 0x1614) =
       (*(int *)(system_global_data_pointer + 0x1614) + 1U) % *(uint *)(system_global_data_pointer + 0x1d4c);
label_:
  pplStack_220 = (long long **)&thread_stack_pointer;
  thread_stack_pointer = &g_memoryAllocationFlag;
  thread_stack_pointer = auStack_180;
  stack_size_limit = 0;
  auStack_180[0] = 0;
  stack_size_limit = 0x19;
  stack_size_limit = thread_operation_flags;
  pplStack_220 = (long long **)system_execute_function(system_global_data_pointer,config_path_buffer_size,8,3);
  *pplStack_220 = (long long *)&g_threadString4;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (long long *)&g_threadString2;
  pplStack_220[3] = (long long *)0x0;
  pplStack_220[1] = (long long *)0x0;
  *(unsigned int *)(pplStack_220 + 2) = 0;
  psystem_initialization_result7 = system_global_data_pointer;
  stack_size_limit = 0;
  thread_operation_flags = *(unsigned int *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)system_global_data_pointer[10];
  *(unsigned int *)(psystem_initialization_result7 + 10) = thread_operation_flags;
  system_initialization_result6 = (long long)pplStack_220[1];
  pplStack_220[1] = (long long *)psystem_initialization_result7[8];
  psystem_initialization_result7[8] = system_initialization_result6;
  thread_operation_flags = *(unsigned int *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)psystem_initialization_result7[9];
  *(unsigned int *)(psystem_initialization_result7 + 9) = thread_operation_flags;
  thread_operation_flags = *(unsigned int *)((long long)pplStack_220 + 0x1c);
  *(unsigned int *)((long long)pplStack_220 + 0x1c) = *(unsigned int *)((long long)psystem_initialization_result7 + 0x54);
  *(unsigned int *)((long long)psystem_initialization_result7 + 0x54) = thread_operation_flags;
  thread_stack_pointer = pplStack_220;
  if (*(code **)(*psystem_initialization_result7 + 8) == (code *)&system_180639070) {
    *(unsigned int *)(psystem_initialization_result7 + 9) = 0;
    if ((unsigned char *)psystem_initialization_result7[8] != (unsigned char *)0x0) {
      *(unsigned char *)psystem_initialization_result7[8] = 0;
    }
    *(unsigned int *)((long long)psystem_initialization_result7 + 0x54) = 0;
  }
  else {
    (**(code **)(*psystem_initialization_result7 + 8))(psystem_initialization_result7);
  }
  if (0x960 < *(int *)(thread_stack_pointer + 2)) {
    *(unsigned int *)(thread_stack_pointer + 2) = 0x960;
    *(unsigned char *)(thread_stack_pointer[1] + 0x960) = 0;
  }
  stack_size_limit = 0;
  thread_stack_base_address = 0;
  thread_stack_base_address = 0;
  stack_size_limit = 0;
  stack_size_limit = 3;
  system_execute_function(system_global_data_pointer,thread_operation_flags,&thread_stack_base_address);
  system_initialization_result6 = thread_stack_base_address;
  system_initialization_result8 = thread_stack_base_address;
  buffer_allocation_result = thread_operation_flags;
  if (thread_stack_base_address - thread_stack_base_address >> 3 != 0) {
    do {
      string_length_counter = system_global_data_pointer;
      if ((0 < *(int *)(*(long long *)(buffer_allocation_result + system_initialization_result6) + 0x124ec)) &&
         ((*(uint *)(*(long long *)(buffer_allocation_result + system_initialization_result6) + 4) & string_buffer_size_constant00) != 0)) {
        while (character_scan_pointer = system_global_data_pointer, system_initialization_result6 = thread_stack_base_address, system_initialization_result8 = thread_stack_base_address,
              *(int *)(string_length_counter + 0x30c) != 0) {
          system_initialization_result6 = system_event_handler_017(system_global_data_pointer);
          if (system_initialization_result6 != 0) {
            psystem_initialization_result7 = (long long *)system_event_handler_017(character_scan_pointer);
            (**(code **)(*psystem_initialization_result7 + config_path_buffer_size))(psystem_initialization_result7,0);
          }
        }
      }
      thread_operation_flags = (int)thread_operation_flags + 1;
      thread_operation_flags = (ulong long)thread_operation_flags;
      buffer_allocation_result = buffer_allocation_result + 8;
    } while ((ulong long)(long long)(int)thread_operation_flags < (ulong long)(system_initialization_result8 - system_initialization_result6 >> 3));
  }
  buffer_allocation_result = system_execute_function(system_global_data_pointer,string_buffer_size_constant,8,3);
  psystem_initialization_result7 = (long long *)system_event_handler_008(buffer_allocation_result,&thread_stack_pointer);
  ppuStack_1b0 = (void **)psystem_initialization_result7;
  if (psystem_initialization_result7 != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result7 + 0x28))(psystem_initialization_result7);
  }
  character_scan_pointer = system_global_data_pointer;
  pplStack_220 = &plStack_228;
  plStack_228 = psystem_initialization_result7;
  if (psystem_initialization_result7 != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result7 + 0x28))(psystem_initialization_result7);
  }
  pplStack_1b8 = &plStack_228;
  input_string_pointer = *(unsigned long long **)(*(long long *)(character_scan_pointer + 8) + 8);
  character_scan_pointer = *(code **)*input_string_pointer;
  pplStack_220 = &plStack_218;
  plStack_218 = plStack_228;
  if (plStack_228 != (long long *)0x0) {
    (**(code **)(*plStack_228 + 0x28))();
  }
  (*character_scan_pointer)(input_string_pointer,&plStack_218);
  if (plStack_228 != (long long *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  if (psystem_initialization_result7 != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result7 + 0x38))(psystem_initialization_result7);
  }
  if (thread_stack_base_address == 0) {
    ppuStack_1b0 = &thread_stack_pointer;
    thread_stack_pointer = &g_threadString4;
    system_crypto_001(stack_size_limit ^ (ulong long)auStack_248);
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
  pthread_operation_flags = *(unsigned long long **)(*handle + 0x18);
  character_scan_pointer = *(code **)*pthread_operation_flags;
  pplong_stack_variable = &plong_stack_variable;
  plong_stack_variable = *(long long **)(*handle + STRING_BUFFER_SIZE);
  if (plong_stack_variable != (long long *)0x0) {
    (**(code **)(*plong_stack_variable + 0x28))();
  }
  (*character_scan_pointer)(pthread_operation_flags,&plong_stack_variable);
  return;
}
      data_180d492a8 = 0;
      system_global_data_pointer = 6;
      strcpy_s(&data_180d492a8, SYSTEM_CONFIG_BUFFER_SIZE, &data_180a06998, mutex_type, buffer_allocation_result);
      resource_template_ptr = &g_defaultDataTemplate;
      system_global_data_pointer = &data_180d49300;
      data_180d49300 = 0;
      system_global_data_pointer = 4;
      strcpy_s(&data_180d49300, SYSTEM_CONFIG_BUFFER_SIZE, &data_180a06990);
      resource_template_ptr = &g_defaultDataTemplate;
      system_global_data_pointer = &data_180d49358;
      data_180d49358 = 0;
      system_global_data_pointer = 6;
      strcpy_s(&data_180d49358, SYSTEM_CONFIG_BUFFER_SIZE, &data_180a069a8);
      resource_template_ptr = &g_defaultDataTemplate;
      system_global_data_pointer = &data_180d493b0;
      data_180d493b0 = 0;
      system_global_data_pointer = 6;
      strcpy_s(&data_180d493b0, SYSTEM_CONFIG_BUFFER_SIZE, &data_180a069a0);
      system_crypto_002(&systemCryptoData1);
      system_initialize_crypto_module(&data_180d49288);
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
  system_thread_manager_001(handle, 3, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  *(unsigned int *)handle[1] = 0x2e6b4f;
  *(unsigned int *)(handle + 2) = 3;
  return handle;
}
long long process_memory_block(long long handle,long long thread_operation_flags,long long mutex_attr)
{
  unsigned long long *input_string_pointer;
  unsigned long long *pthread_operation_flags;
  long long string_length_counter;
  long long string_length_counter;
  string_length_counter = thread_operation_flags - handle >> 5;
  if (0 < string_length_counter) {
    string_length_counter = mutex_attr - thread_operation_flags;
    mutex_attr = mutex_attr + string_length_counter * -config_path_buffer_size;
    pthread_operation_flags = (unsigned long long *)(thread_operation_flags + 8);
    do {
      input_string_pointer = pthread_operation_flags + -4;
      if (*(long long *)(string_length_counter + -config_path_buffer_size + (long long)pthread_operation_flags) != 0) {
        handle_system_error();
      }
      *(unsigned long long *)(string_length_counter + STRING_BUFFER_SIZE + (long long)input_string_pointer) = 0;
      string_length_counter = string_length_counter + -1;
      *(unsigned long long *)(string_length_counter + (long long)input_string_pointer) = 0;
      *(unsigned int *)(string_length_counter + 8 + (long long)input_string_pointer) = 0;
      *(unsigned int *)(string_length_counter + 8 + (long long)input_string_pointer) = *(unsigned int *)(pthread_operation_flags + -3);
      *(unsigned long long *)(string_length_counter + (long long)input_string_pointer) = *input_string_pointer;
      *(unsigned int *)(string_length_counter + 0x14 + (long long)input_string_pointer) = *(unsigned int *)((long long)pthread_operation_flags + -0xc);
      *(unsigned int *)(string_length_counter + STRING_BUFFER_SIZE + (long long)input_string_pointer) = *(unsigned int *)(pthread_operation_flags + -2);
      *(unsigned int *)(pthread_operation_flags + -3) = 0;
      *input_string_pointer = 0;
      pthread_operation_flags[-2] = 0;
      pthread_operation_flags = input_string_pointer;
    } while (0 < string_length_counter);
  }
  return mutex_attr;
}
long long process_memory_with_thread_operation_flags(unsigned long long handle,long long thread_operation_flags,long long mutex_attr)
{
  unsigned long long *input_string_pointer;
  long long string_length_counter;
  unsigned long long *input_string_pointer;
  long long unaffected_registerBP;
  long long unaffected_registerDI;
  mutex_attr = mutex_attr - thread_operation_flags;
  string_length_counter = unaffected_registerDI * -config_path_buffer_size;
  input_string_pointer = (unsigned long long *)(thread_operation_flags + 8);
  do {
    input_string_pointer = input_string_pointer + -4;
    if (*(long long *)(mutex_attr + -config_path_buffer_size + (long long)input_string_pointer) != 0) {
      handle_system_error();
    }
    *(unsigned long long *)(mutex_attr + STRING_BUFFER_SIZE + (long long)input_string_pointer) = 0;
    unaffected_registerDI = unaffected_registerDI + -1;
    *(unsigned long long *)(mutex_attr + (long long)input_string_pointer) = 0;
    *(unsigned int *)(mutex_attr + 8 + (long long)input_string_pointer) = 0;
    *(unsigned int *)(mutex_attr + 8 + (long long)input_string_pointer) = *(unsigned int *)(input_string_pointer + -3);
    *(unsigned long long *)(mutex_attr + (long long)input_string_pointer) = *input_string_pointer;
    *(unsigned int *)(mutex_attr + 0x14 + (long long)input_string_pointer) = *(unsigned int *)((long long)input_string_pointer + -0xc);
    *(unsigned int *)(mutex_attr + STRING_BUFFER_SIZE + (long long)input_string_pointer) = *(unsigned int *)(input_string_pointer + -2);
    *(unsigned int *)(input_string_pointer + -3) = 0;
    *input_string_pointer = 0;
    input_string_pointer[-2] = 0;
    input_string_pointer = input_string_pointer;
  } while (0 < unaffected_registerDI);
  return unaffected_registerBP + string_length_counter;
}
      data_180d48d64 = data_180d48d64 == '\0';
    }
    if (data_180d48d64 != '\0') {
      (*(code *)(*in_RCX[0xc170])[9])(in_RCX[0xc170],along_stack_variable[0] + 0x120);
    }
  }
  system_initialization_result0 = along_stack_variable[0];
  if ((*(int *)(*(long long *)(along_stack_variable[0] + 0x3580) + 0x110) != 0) &&
     (buffer_allocation_result = buffer_allocation_result, buffer_allocation_result = buffer_allocation_result, (long long)in_RCX[0x1d] - (long long)in_RCX[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(long long **)(buffer_allocation_result + (long long)in_RCX[0x1c]) + 0x60))
                (*(long long **)(buffer_allocation_result + (long long)in_RCX[0x1c]),in_RCX,system_initialization_result0);
      buffer_allocation_result = (int)buffer_allocation_result + 1;
      buffer_allocation_result = buffer_allocation_result + 8;
      buffer_allocation_result = (ulong long)buffer_allocation_result;
    } while ((ulong long)(long long)(int)buffer_allocation_result <
             (ulong long)((long long)in_RCX[0x1d] - (long long)in_RCX[0x1c] >> 3));
  }
  ppplStack_b8 = (long long ***)0x0;
  stack_size_limit = (long long *)merge_32bit_values(stack_size_limit._4_4_,(unsigned int)stack_size_limit);
  if (*(int *)(*(long long *)(along_stack_variable[0] + 0x3580) + 0x110) != 0) {
    stack_size_limit = (long long *)merge_32bit_values(stack_size_limit._4_4_,(unsigned int)stack_size_limit);
    if ((((*(byte *)(along_stack_variable[0] + 0x1bd8) & config_path_buffer_size) != 0) &&
        (stack_size_limit = (long long *)merge_32bit_values(stack_size_limit._4_4_,(unsigned int)stack_size_limit),
        *(char *)(system_global_data_pointer + 0xf8) != '\0')) &&
       (stack_size_limit = (long long *)merge_32bit_values(stack_size_limit._4_4_,(unsigned int)stack_size_limit),
       6 < *(int *)(in_RCX + 0x4f8))) {
      buffer_allocation_result = system_execute_function(system_global_data_pointer,0xe0,8,3);
      ppplong_stack_variable = (long long ***)&stack_size_limit;
      plStack_68 = along_stack_variable;
      thread_stack_pointer = &systemThreadData1;
      thread_stack_pointer = &systemThreadData2;
      stack_size_limit._0_4_ = SUB84(in_RCX,0);
      stack_size_limit._4_4_ = (unsigned int)((ulong long)in_RCX >> config_path_buffer_size);
      stack_size_limit._0_4_ = (unsigned int)stack_size_limit;
      stack_size_limit._4_4_ = stack_size_limit._4_4_;
      stack_size_limit = in_RCX;
      stack_size_limit = plStack_68;
      ppplStack_b8 = (long long ***)system_execute_function(buffer_allocation_result,&stack_size_limit);
      if (ppplStack_b8 != (long long ***)0x0) {
        ppplStack_80 = ppplStack_b8;
        (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
      }
      buffer_allocation_result = system_global_data_pointer;
      ppplStack_80 = (long long ***)0x0;
      if (*(int *)(system_global_data_pointer + 0x380) == 0) {
        pppplong_stack_variable = &ppplong_stack_variable;
        ppplong_stack_variable = ppplStack_b8;
        if (ppplStack_b8 != (long long ***)0x0) {
          (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
        }
        system_event_handler_013(buffer_allocation_result,&ppplong_stack_variable);
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
    system_processor_007(in_RCX,along_stack_variable[0]);
    buffer_allocation_result = system_global_data_pointer;
    if (((in_RCX[0x89] != (long long ****)0x0) && (*(char *)(system_global_data_pointer + 0xfa) != '\0')) &&
       ((*(long long *)(along_stack_variable[0] + 0x3580) != 0 &&
        (*(int *)(*(long long *)(along_stack_variable[0] + 0x3580) + 0x110) != 0)))) {
      stack_size_limit = &pppplong_stack_variable;
      pppplong_stack_variable = (long long ****)in_RCX[0x89][0x461];
      if (pppplong_stack_variable != (long long ****)0x0) {
        (*(code *)(*pppplong_stack_variable)[5])();
      }
      system_event_handler_016(buffer_allocation_result,&pppplong_stack_variable,0);
    }
    if ((*(char *)((long long)in_RCX + 0x563) != '\0') &&
       (0 < (int)(((long long)in_RCX[0xb6] - (long long)in_RCX[0xb5]) / 0xc))) {
      system_cleanup_001(in_RCX + 0x4cf);
      while( true ) {
        ppplVar3 = *in_RCX[0x4ce];
        if (ppplVar3 == (long long ***)&systemThreadManagerData) {
          system_char_variable = *(char *)(in_RCX[0x4ce] + 2) != '\0';
        }
        else {
          system_char_variable = (*(code *)ppplVar3[0xd])();
        }
        buffer_allocation_result = system_global_data_pointer;
        if (system_char_variable != '\0') break;
        system_initialization_result0 = system_event_handler_017(system_global_data_pointer);
        if (system_initialization_result0 != 0) {
          psystem_initialization_result1 = (long long *)system_event_handler_017(buffer_allocation_result);
          (**(code **)(*psystem_initialization_result1 + config_path_buffer_size))(psystem_initialization_result1,0);
        }
      }
    }
    system_initialization_result0 = along_stack_variable[0];
    psystem_initialization_result1 = *(long long **)(*(long long *)(along_stack_variable[0] + 0x3580) + 0x630);
    if (psystem_initialization_result1 != (long long *)0x0) {
      plStack_78 = psystem_initialization_result1;
      (**(code **)(*psystem_initialization_result1 + 0x28))(psystem_initialization_result1);
    }
    plStack_78 = *(long long **)(system_initialization_result0 + 0x12498);
    *(long long **)(system_initialization_result0 + 0x12498) = psystem_initialization_result1;
    if (plStack_78 != (long long *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    ppppsystem_initialization_result3 = in_RCX[99];
    if (ppppsystem_initialization_result3 != (long long ****)0x0) {
      (*(code *)(*ppppsystem_initialization_result3)[0x1f])(ppppsystem_initialization_result3,along_stack_variable[0]);
    }
    if (in_RCX[0x22] != (long long ****)0x0) {
      (*(code *)in_RCX[0x23])(along_stack_variable[0]);
    }
    if ((*(char *)(in_RCX + 0xb74) != '\0') &&
       (system_initialization_result0 = *(long long *)(*(long long *)(along_stack_variable[0] + 0x3580) + 0x530), system_initialization_result0 != 0)) {
      *(unsigned int *)(system_initialization_result0 + SYSTEM_CONFIG_BUFFER_SIZE) = 0x41200000;
    }
    if (*(int *)(in_RCX + 0xa3a) != 0) {
      buffer_allocation_result = *(unsigned int *)(in_RCX + 0xa3a);
      pppppsystem_initialization_result7 = in_RCX + (long long)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(unsigned int *)pppppsystem_initialization_result7 = 0;
      UNLOCK();
      system_processor_008(pppppsystem_initialization_result7,buffer_allocation_result);
      if (*(int *)(in_RCX + 0xa3a) == 0) {
        thread_result_index = 0;
      }
      else {
        thread_result_index = (*(int *)(in_RCX + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (thread_result_index != 0) {
        memcpy(pppppsystem_initialization_result7[1], in_RCX[0xa3b], config_path_buffer_size_000);
      }
      system_initialization_result0 = *(long long *)(*(long long *)(along_stack_variable[0] + 0x3580) + 0x118);
      if (system_initialization_result0 != 0) {
        *(long long ******)(system_initialization_result0 + 0x98c8) =
             in_RCX + (long long)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      }
    }
    buffer_allocation_result = *(int *)(in_RCX + 0xa39) + 1U & 0x80000001;
    if ((int)buffer_allocation_result < 0) {
      buffer_allocation_result = (buffer_allocation_result - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(in_RCX + 0xa39) = buffer_allocation_result;
  }
  while (thread_result_index = (int)buffer_allocation_result, (ulong long)(long long)thread_result_index < (ulong long)*(uint *)(in_RCX + 0xb5b)) {
    ppppsystem_initialization_result3 = in_RCX[(buffer_allocation_result >> 10) + 0xb5c] +
                 (ulong long)(uint)(thread_result_index + (int)(buffer_allocation_result >> 10) * -SYSTEM_CONFIG_BUFFER_SIZE_ZERO) * 0x18;
    system_resource_001(*ppppsystem_initialization_result3);
    system_execute_function(*ppppsystem_initialization_result3,ppppsystem_initialization_result3[1],ppppsystem_initialization_result3 + 2,0,ppppsystem_initialization_result3 + 10);
    buffer_allocation_result = (ulong long)(thread_result_index + 1);
  }
  buffer_allocation_result = (ulong long)*(uint *)(in_RCX + 0xb5b);
  LOCK();
  *(unsigned int *)(in_RCX + 0xb5b) = 0;
  buffer_allocation_result = system_global_data_pointer;
  UNLOCK();
  if (ppplStack_b8 != (long long ***)0x0) {
    ppplong_stack_variable = (long long ***)&ppplStack_b0;
    ppplStack_b0 = ppplStack_b8;
    (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
    system_event_handler_016(buffer_allocation_result,&ppplStack_b0,0);
    buffer_allocation_result = (*(code *)(*ppplStack_b8)[7])(ppplStack_b8);
  }
  return buffer_allocation_result;
}
unsigned long long *
system_processor_006(unsigned long long *handle,long long thread_operation_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  int thread_result_index;
  unsigned long long *pthread_operation_flags;
  unsigned int *input_string_pointer;
  unsigned int buffer_allocation_result;
  *handle = &g_threadString4;
  handle[1] = 0;
  *(unsigned int *)(handle + 2) = 0;
  *handle = &g_threadString2;
  handle[3] = 0;
  handle[1] = 0;
  *(unsigned int *)(handle + 2) = 0;
  system_thread_manager_001(handle, 9, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  pthread_operation_flags = (unsigned long long *)handle[1];
  *pthread_operation_flags = 0x6a624f656e656353;
  *(unsigned short *)(pthread_operation_flags + 1) = 0x2f;
  *(unsigned int *)(handle + 2) = 9;
  buffer_allocation_result = 1;
  thread_result_index = *(int *)(handle + 2);
  if (0 < *(int *)(thread_operation_flags + STRING_BUFFER_SIZE)) {
    system_thread_manager_001(handle,thread_result_index + *(int *)(thread_operation_flags + STRING_BUFFER_SIZE));
    memcpy((ulong long)*(uint *)(handle + 2) + handle[1],*(unsigned long long *)(thread_operation_flags + 8),
           (long long)(*(int *)(thread_operation_flags + STRING_BUFFER_SIZE) + 1),mutex_type,buffer_allocation_result);
  }
  system_thread_manager_001(handle,thread_result_index + 6);
  input_string_pointer = (unsigned int *)((ulong long)*(uint *)(handle + 2) + handle[1]);
  *input_string_pointer = 0x6563732f;
  *(unsigned short *)(input_string_pointer + 1) = 0x656e;
  *(unsigned char *)((long long)input_string_pointer + 6) = 0;
  *(int *)(handle + 2) = thread_result_index + 6;
  system_thread_manager_001(handle,thread_result_index + 0xd);
  *(unsigned long long *)((ulong long)*(uint *)(handle + 2) + handle[1]) = 0x656e656373782e;
  *(int *)(handle + 2) = thread_result_index + 0xd;
  return handle;
}
  system_initialization_flag = 1;
  stack_size_limit = 3;
  multi_level_stack_pointer_188 = &multi_level_stack_pointer_188;
  pppppppuStack_180 = &multi_level_stack_pointer_188;
  multi_level_stack_pointer_178 = (unsigned long long *******)0x0;
  stack_size_limit = 0;
  stack_size_limit = 0;
  stack_size_limit = 0;
  stack_size_limit = 0;
  stack_size_limit = 0;
  stack_size_limit = 3;
  string_length_counter = *(long long *)(*psystem_initialization_result3 + 0x890) - *(long long *)(*psystem_initialization_result3 + 0x888) >> 5;
  thread_stack_base_address = string_length_counter;
  multi_level_stack_long_variable = (long long *******)((ulong long)multi_level_stack_long_variable & INT64_MASK);
  if (0 < (int)string_length_counter) {
    do {
      if (thread_result_index < 0) {
label_:
        system_initialization_result9 = system_thread_manager_007();
      }
      else {
        system_initialization_result9 = *(long long *)(*psystem_initialization_result3 + 0x888);
        if ((ulong long)(*(long long *)(*psystem_initialization_result3 + 0x890) - system_initialization_result9 >> 5) <=
            (ulong long)(long long)thread_result_index) goto label_;
        system_initialization_result9 = (long long)thread_result_index * config_path_buffer_size + system_initialization_result9;
      }
      thread_stack_pointer = &g_threadString2;
      stack_size_limit = 0;
      thread_stack_pointer = (unsigned char *)0x0;
      stack_size_limit = 0;
      system_thread_manager_001(&thread_stack_pointer,*(unsigned int *)(system_initialization_result9 + STRING_BUFFER_SIZE));
      if (*(int *)(system_initialization_result9 + STRING_BUFFER_SIZE) != 0) {
        memcpy(thread_stack_pointer,*(unsigned long long *)(system_initialization_result9 + 8),*(int *)(system_initialization_result9 + STRING_BUFFER_SIZE) + 1);
      }
      if (*(long long *)(system_initialization_result9 + 8) != 0) {
        stack_size_limit = 0;
        if (thread_stack_pointer != (unsigned char *)0x0) {
          *thread_stack_pointer = 0;
        }
        stack_size_limit = stack_size_limit & UINT32_MAX;
      }
      thread_result_index = stack_size_limit + 8;
      system_thread_manager_001(&thread_stack_pointer,thread_result_index);
      *(unsigned long long *)(thread_stack_pointer + stack_size_limit) = 0x6a624f656e656353;
      *(unsigned char *)((long long)(thread_stack_pointer + stack_size_limit) + 8) = 0;
      stack_size_limit = thread_result_index;
      system_char_variable = system_thread_001(&thread_stack_pointer);
      if (system_char_variable == '\0') {
        thread_stack_pointer = &g_threadString2;
        if (thread_stack_pointer != (unsigned char *)0x0) {
          handle_system_error();
        }
      }
      else {
        pppppuStack_d0 = (unsigned long long *****)0x0;
        pppppuStack_c8 = (unsigned long long *****)0x0;
        stack_size_limit = 0;
        stack_size_limit = 3;
        system_execute_function(&thread_stack_pointer,&pppppuStack_d0);
        pppppthread_operation_flags = pppppuStack_c8;
        pppppthread_operation_flags = pppppuStack_d0;
        system_initialization_result9 = (long long)pppppuStack_c8 - (long long)pppppuStack_d0;
        ppppppuVar12 = (unsigned long long ******)system_execute_function(system_global_data_pointer,config_path_buffer_size,8,3);
        ppppppuStack_d8 = ppppppuVar12;
        *ppppppuVar12 = (unsigned long long *****)0x0;
        ppppppuVar12[1] = (unsigned long long *****)0x0;
        ppppppuVar12[2] = (unsigned long long *****)0x0;
        *(unsigned int *)(ppppppuVar12 + 3) = 3;
        multi_level_pointer_array_6 = &multi_level_stack_pointer_188;
        multi_level_pointer_array_9 = multi_level_stack_pointer_178;
        while (multi_level_pointer_array_9 != (unsigned long long *******)0x0) {
          if (*(int *)(multi_level_pointer_array_9 + 4) < thread_result_index) {
            multi_level_pointer_array_9 = (unsigned long long *******)*multi_level_pointer_array_9;
          }
          else {
            multi_level_pointer_array_6 = multi_level_pointer_array_9;
            multi_level_pointer_array_9 = (unsigned long long *******)multi_level_pointer_array_9[1];
          }
        }
        if (((unsigned long long ********)multi_level_pointer_array_6 == &multi_level_stack_pointer_188) ||
           (thread_result_index < *(int *)(multi_level_pointer_array_6 + 4))) {
          input_string_pointer = (unsigned long long *)system_execute_function(&multi_level_stack_pointer_188,auStack_90);
          multi_level_pointer_array_6 = (unsigned long long *******)*input_string_pointer;
        }
        multi_level_pointer_array_6[5] = ppppppuVar12;
        thread_result_index = (int)(system_initialization_result9 >> 5);
        system_initialization_result9 = (long long)thread_result_index;
        pppppthread_operation_flags = pppppthread_operation_flags;
        if (0 < thread_result_index) {
          pppppthread_operation_flags = pppppthread_operation_flags + 1;
          do {
            thread_stack_pointer = &g_threadString2;
            stack_size_limit._0_4_ = 0;
            stack_size_limit._4_4_ = 0;
            thread_stack_pointer = (unsigned char *)0x0;
            stack_size_limit = 0;
            system_thread_manager_001(&thread_stack_pointer,*(unsigned int *)(pppppthread_operation_flags + 1));
            if (*(int *)(pppppthread_operation_flags + 1) != 0) {
              memcpy(thread_stack_pointer,*pppppthread_operation_flags,*(int *)(pppppthread_operation_flags + 1) + 1);
            }
            if (*pppppthread_operation_flags != (unsigned long long ****)0x0) {
              stack_size_limit = 0;
              if (thread_stack_pointer != (unsigned char *)0x0) {
                *thread_stack_pointer = 0;
              }
              stack_size_limit._4_4_ = 0;
            }
            thread_result_index = stack_size_limit + 0xd;
            system_thread_manager_001(&thread_stack_pointer,thread_result_index);
            input_string_pointer = (unsigned long long *)(thread_stack_pointer + stack_size_limit);
            *input_string_pointer = 0x782e656e6563732f;
            *(unsigned int *)(input_string_pointer + 1) = 0x6e656373;
            *(unsigned short *)((long long)input_string_pointer + 0xc) = 0x65;
            stack_size_limit = thread_result_index;
            system_char_variable = system_thread_002(&thread_stack_pointer);
            if (system_char_variable == '\0') {
              stack_size_limit = 0;
              if (thread_stack_pointer != (unsigned char *)0x0) {
                *thread_stack_pointer = 0;
              }
              buffer_allocation_result = *(uint *)(pppppthread_operation_flags + 1);
              thread_operation_flags = (ulong long)buffer_allocation_result;
              if (*pppppthread_operation_flags != (unsigned long long ****)0x0) {
                system_thread_manager_001(&thread_stack_pointer,thread_operation_flags);
              }
              if (buffer_allocation_result != 0) {
                memcpy(thread_stack_pointer,*pppppthread_operation_flags,thread_operation_flags);
              }
              if (thread_stack_pointer != (unsigned char *)0x0) {
                thread_stack_pointer[thread_operation_flags] = 0;
              }
              stack_size_limit._4_4_ = *(uint *)((long long)pppppthread_operation_flags + 0x14);
              stack_size_limit = buffer_allocation_result;
              system_thread_manager_001(&thread_stack_pointer,0x12);
              input_string_pointer = (unsigned int *)(thread_stack_pointer + stack_size_limit);
              *input_string_pointer = 0x6563732f;
              input_string_pointer[1] = 0x782e656e;
              input_string_pointer[2] = 0x2e6f6373;
              input_string_pointer[3] = 0x65637378;
              *(unsigned short *)(input_string_pointer + 4) = 0x656e;
              *(unsigned char *)((long long)input_string_pointer + 0x12) = 0;
              stack_size_limit = 0x12;
              system_char_variable = system_thread_002(&thread_stack_pointer);
              if (system_char_variable != '\0') goto label_;
              thread_stack_pointer = &g_threadString2;
              if (thread_stack_pointer != (unsigned char *)0x0) {
                handle_system_error();
              }
            }
            else {
label_:
              multi_level_pointer_array_6 = &multi_level_stack_pointer_188;
              multi_level_pointer_array_9 = multi_level_stack_pointer_178;
              while (multi_level_pointer_array_9 != (unsigned long long *******)0x0) {
                if (*(int *)(multi_level_pointer_array_9 + 4) < thread_result_index) {
                  multi_level_pointer_array_9 = (unsigned long long *******)*multi_level_pointer_array_9;
                }
                else {
                  multi_level_pointer_array_6 = multi_level_pointer_array_9;
                  multi_level_pointer_array_9 = (unsigned long long *******)multi_level_pointer_array_9[1];
                }
              }
              if (((unsigned long long ********)multi_level_pointer_array_6 == &multi_level_stack_pointer_188) ||
                 (thread_result_index < *(int *)(multi_level_pointer_array_6 + 4))) {
                input_string_pointer = (unsigned long long *)system_execute_function(&multi_level_stack_pointer_188,&ppppppuStack_a0);
                multi_level_pointer_array_6 = (unsigned long long *******)*input_string_pointer;
              }
              ppppppuVar12 = multi_level_pointer_array_6[5];
              ppppppthread_operation_flags = (unsigned long long ******)ppppppuVar12[1];
              if (ppppppthread_operation_flags < ppppppuVar12[2]) {
                ppppppuVar12[1] = ppppppthread_operation_flags + 4;
                *ppppppthread_operation_flags = (unsigned long long *****)&g_threadString4;
                ppppppthread_operation_flags[1] = (unsigned long long *****)0x0;
                *(unsigned int *)(ppppppthread_operation_flags + 2) = 0;
                *ppppppthread_operation_flags = (unsigned long long *****)&g_threadString2;
                ppppppthread_operation_flags[3] = (unsigned long long *****)0x0;
                ppppppthread_operation_flags[1] = (unsigned long long *****)0x0;
                *(unsigned int *)(ppppppthread_operation_flags + 2) = 0;
                ppppppuStack_d8 = ppppppthread_operation_flags;
                system_thread_manager_001(ppppppthread_operation_flags,stack_size_limit);
                if (stack_size_limit != 0) {
                  memcpy(ppppppthread_operation_flags[1],thread_stack_pointer,stack_size_limit + 1);
                }
                if (thread_stack_pointer != (unsigned char *)0x0) {
                  *(unsigned int *)(ppppppthread_operation_flags + 2) = 0;
                  if (ppppppthread_operation_flags[1] != (unsigned long long *****)0x0) {
                    *(unsigned char *)ppppppthread_operation_flags[1] = 0;
                  }
                  *(unsigned int *)((long long)ppppppthread_operation_flags + 0x1c) = 0;
                }
              }
              else {
                system_event_handler_006(ppppppuVar12,&thread_stack_pointer);
              }
              thread_stack_pointer = &g_threadString2;
              if (thread_stack_pointer != (unsigned char *)0x0) {
                handle_system_error();
              }
            }
            stack_size_limit = (ulong long)stack_size_limit._4_4_ << config_path_buffer_size;
            thread_stack_pointer = (unsigned char *)0x0;
            thread_stack_pointer = &g_threadString4;
            pppppthread_operation_flags = pppppthread_operation_flags + 4;
            system_initialization_result9 = system_initialization_result9 + -1;
            pppppthread_operation_flags = pppppuStack_d0;
            pppppthread_operation_flags = pppppuStack_c8;
            pppppthread_operation_flags = pppppuStack_d0;
            string_length_counter = thread_stack_base_address;
          } while (system_initialization_result9 != 0);
        }
        for (; pppppthread_operation_flags != pppppthread_operation_flags; pppppthread_operation_flags = pppppthread_operation_flags + 4) {
          (*(code *)**pppppthread_operation_flags)(pppppthread_operation_flags,0);
        }
        if (pppppthread_operation_flags != (unsigned long long *****)0x0) {
          handle_system_error(pppppthread_operation_flags);
        }
        thread_stack_pointer = &g_threadString2;
        if (thread_stack_pointer != (unsigned char *)0x0) {
          handle_system_error();
        }
      }
      stack_size_limit = stack_size_limit & INT64_MASK;
      thread_stack_pointer = (unsigned char *)0x0;
      thread_stack_pointer = &g_threadString4;
      thread_result_index = thread_result_index + 1;
      multi_level_stack_long_variable = (long long *******)merge_32bit_values(multi_level_stack_long_variable._4_4_,thread_result_index);
      psystem_initialization_result3 = system_global_data_pointer;
      mutex_attr = multi_level_stack_x_18;
      system_initialization_result9 = thread_stack_base_address;
      mutex_type = uStackX_20;
    } while (thread_result_index < (int)string_length_counter);
  }
  stack_size_limit = 3;
  multi_level_stack_pointer_138 = &multi_level_stack_pointer_138;
  pppppppuStack_130 = &multi_level_stack_pointer_138;
  multi_level_stack_pointer_128 = (unsigned long long *******)0x0;
  stack_size_limit = 0;
  stack_size_limit = 0;
  multi_level_pointer_array_9 = pppppppuStack_180;
  if ((unsigned long long ********)pppppppuStack_180 != &multi_level_stack_pointer_188) {
    do {
      multi_level_pointer_temp2 = (unsigned long long *******)multi_level_pointer_array_9[5];
      multi_level_pointer_array_6 = multi_level_pointer_array_9 + 4;
      multi_level_pointer_current = &multi_level_stack_pointer_138;
      if (multi_level_stack_pointer_128 != (unsigned long long *******)0x0) {
        multi_level_pointer_temp1 = multi_level_stack_pointer_128;
        do {
          if (*(int *)(multi_level_pointer_temp1 + 4) < *(int *)multi_level_pointer_array_6) {
            multi_level_pointer_temp1 = (unsigned long long *******)*multi_level_pointer_temp1;
          }
          else {
            multi_level_pointer_current = multi_level_pointer_temp1;
            multi_level_pointer_temp1 = (unsigned long long *******)multi_level_pointer_temp1[1];
          }
        } while (multi_level_pointer_temp1 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)multi_level_pointer_current == &multi_level_stack_pointer_138) ||
         (*(int *)multi_level_pointer_array_6 < *(int *)(multi_level_pointer_current + 4))) {
        input_string_pointer = (unsigned long long *)system_execute_function(&multi_level_stack_pointer_138,&multi_level_stack_x_18);
        multi_level_pointer_current = (unsigned long long *******)*input_string_pointer;
      }
      if (multi_level_pointer_current + 5 != multi_level_pointer_temp2) {
        system_event_handler_004(multi_level_pointer_current + 5,*multi_level_pointer_temp2,multi_level_pointer_temp2[1]);
      }
      multi_level_pointer_current = &multi_level_stack_pointer_188;
      if (multi_level_stack_pointer_178 != (unsigned long long *******)0x0) {
        multi_level_pointer_temp2 = multi_level_stack_pointer_178;
        do {
          if (*(int *)(multi_level_pointer_temp2 + 4) < *(int *)multi_level_pointer_array_6) {
            multi_level_pointer_temp2 = (unsigned long long *******)*multi_level_pointer_temp2;
          }
          else {
            multi_level_pointer_current = multi_level_pointer_temp2;
            multi_level_pointer_temp2 = (unsigned long long *******)multi_level_pointer_temp2[1];
          }
        } while (multi_level_pointer_temp2 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)multi_level_pointer_current == &multi_level_stack_pointer_188) ||
         (*(int *)multi_level_pointer_array_6 < *(int *)(multi_level_pointer_current + 4))) {
        input_string_pointer = (unsigned long long *)system_execute_function(&multi_level_stack_pointer_188,&multi_level_stack_long_variable);
        multi_level_pointer_current = (unsigned long long *******)*input_string_pointer;
      }
      ppppppuVar12 = multi_level_pointer_current[5];
      ppppppuStack_a0 = ppppppuVar12;
      if (ppppppuVar12 != (unsigned long long ******)0x0) {
        system_event_handler_010(ppppppuVar12);
        handle_system_error(ppppppuVar12);
      }
      multi_level_pointer_current = &multi_level_stack_pointer_188;
      if (multi_level_stack_pointer_178 != (unsigned long long *******)0x0) {
        multi_level_pointer_temp2 = multi_level_stack_pointer_178;
        do {
          if (*(int *)(multi_level_pointer_temp2 + 4) < *(int *)multi_level_pointer_array_6) {
            multi_level_pointer_temp2 = (unsigned long long *******)*multi_level_pointer_temp2;
          }
          else {
            multi_level_pointer_current = multi_level_pointer_temp2;
            multi_level_pointer_temp2 = (unsigned long long *******)multi_level_pointer_temp2[1];
          }
        } while (multi_level_pointer_temp2 != (unsigned long long *******)0x0);
      }
      if (((unsigned long long ********)multi_level_pointer_current == &multi_level_stack_pointer_188) ||
         (*(int *)multi_level_pointer_array_6 < *(int *)(multi_level_pointer_current + 4))) {
        input_string_pointer = (unsigned long long *)system_execute_function(&multi_level_stack_pointer_188,&ppppppuStack_d8);
        multi_level_pointer_current = (unsigned long long *******)*input_string_pointer;
      }
      multi_level_pointer_current[5] = (unsigned long long ******)0x0;
      multi_level_pointer_array_9 = (unsigned long long *******)func_0x00018066bd70(multi_level_pointer_array_9);
    } while ((unsigned long long ********)multi_level_pointer_array_9 != &multi_level_stack_pointer_188);
  }
  multi_level_pointer_array_9 = multi_level_stack_pointer_178;
  if (multi_level_stack_pointer_178 != (unsigned long long *******)0x0) {
    system_execute_function(&multi_level_stack_pointer_188,*multi_level_stack_pointer_178);
    handle_system_error(multi_level_pointer_array_9);
  }
  multi_level_stack_pointer_188 = &multi_level_stack_pointer_188;
  pppppppuStack_180 = &multi_level_stack_pointer_188;
  multi_level_stack_pointer_178 = (unsigned long long *******)0x0;
  stack_size_limit = stack_size_limit & 0xffffffffffffff00;
  stack_size_limit = 0;
  buffer_allocation_result = system_execute_function(system_global_data_pointer,0x150,8,3);
  multi_level_stack_x_18 = (unsigned long long *******)&pppppuStack_d0;
  buffer_allocation_result = system_thread_manager_003(&pppppuStack_d0,mutex_type);
  multi_level_stack_long_variable = (long long *******)&ppppppplStack_108;
  stack_size_limit = 0;
  stack_size_limit = 0;
  stack_size_limit = 0;
  stack_size_limit = stack_size_limit;
  ppppppplStack_108 = (long long *******)&ppppppplStack_108;
  ppppppplStack_100 = (long long *******)&ppppppplStack_108;
  ppppppplStack_f8 = (long long *******)0x0;
  stack_size_limit = 0;
  stack_size_limit = 0;
  if (multi_level_stack_pointer_128 != (unsigned long long *******)0x0) {
    ppppppplStack_f8 =
         (long long *******)system_processor_009(&ppppppplStack_108,multi_level_stack_pointer_128,&ppppppplStack_108);
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
    stack_size_limit = stack_size_limit;
  }
  ppppppuVar12 = (unsigned long long ******)
                 system_processor_010(buffer_allocation_result,&ppppppplStack_108,buffer_allocation_result,pppppppuStackX_10,mutex_attr);
  if (ppppppuVar12 != (unsigned long long ******)0x0) {
    multi_level_stack_x_18 = (unsigned long long *******)ppppppuVar12;
    (*(code *)(*ppppppuVar12)[5])(ppppppuVar12);
  }
  multi_level_stack_x_18 = *(unsigned long long ********)(system_initialization_result9 + SYSTEM_CONFIG_BUFFER_SIZE);
  *(unsigned long long *******)(system_initialization_result9 + SYSTEM_CONFIG_BUFFER_SIZE) = ppppppuVar12;
  if (multi_level_stack_x_18 != (unsigned long long *******)0x0) {
    (*(code *)(*multi_level_stack_x_18)[7])();
  }
  buffer_allocation_result = system_global_data_pointer;
  pppppppuStackX_10 = &multi_level_stack_x_18;
  multi_level_stack_x_18 = *(unsigned long long ********)(system_initialization_result9 + SYSTEM_CONFIG_BUFFER_SIZE);
  if (multi_level_stack_x_18 != (unsigned long long *******)0x0) {
    (*(code *)(*multi_level_stack_x_18)[5])();
  }
  system_event_handler_013(buffer_allocation_result,&multi_level_stack_x_18);
  multi_level_pointer_array_6 = multi_level_stack_pointer_128;
  multi_level_pointer_array_9 = multi_level_stack_pointer_178;
  multi_level_stack_x_18 = multi_level_stack_pointer_128;
  if (multi_level_stack_pointer_128 == (unsigned long long *******)0x0) {
    if (multi_level_stack_pointer_178 != (unsigned long long *******)0x0) {
      system_execute_function(&multi_level_stack_pointer_188,*multi_level_stack_pointer_178);
      handle_system_error(multi_level_pointer_array_9);
    }
    thread_stack_pointer = &g_threadString2;
    if (thread_stack_pointer == (void *)0x0) {
      return;
    }
    handle_system_error();
  }
  system_processor_011(&multi_level_stack_pointer_138,*multi_level_stack_pointer_128);
  pppppppuStackX_10 = multi_level_pointer_array_6 + 4;
  multi_level_stack_long_variable = multi_level_pointer_array_6 + 5;
  system_event_handler_010();
  handle_system_error(multi_level_pointer_array_6);
}
        data_180c91d14 = 0;
        return plVar7;
      }
      system_initialization_result0 = (long long)thread_result_index << 4;
      do {
        if ((int)(float_variable - 12582912.0) <= (int)plVar9) {
          data_180c91d14 = 0;
          return plVar7;
        }
        string_length_counter = *(long long *)(system_initialization_result0 + (long long)system_global_data_pointer);
        plVar7 = (long long *)(ulong long)*(uint *)(string_length_counter + 0xe0);
        if ((*(uint *)(string_length_counter + 0xe0) == 2) &&
           (plVar7 = (long long *)(ulong long)*(uint *)(string_length_counter + 0xd8), *(uint *)(string_length_counter + 0xd8) == 0))
        {
          LOCK();
          buffer_allocation_result = *(uint *)(string_length_counter + 0xd8);
          if (buffer_allocation_result == 0) {
            *(uint *)(string_length_counter + 0xd8) = UINT32_MAX;
          }
          else {
            plVar7 = (long long *)(ulong long)buffer_allocation_result;
          }
          UNLOCK();
          if (buffer_allocation_result == 0) {
            *(unsigned char *)(string_length_counter + 0xdc) = 0;
            system_hardware_001(string_length_counter + 0xe8);
            buffer_allocation_result = *(unsigned long long *)(string_length_counter + 0x88);
            thread_result_index = *(int *)(string_length_counter + 0x80);
            *(unsigned long long *)(string_length_counter + 0x88) = 0;
            *(unsigned int *)(string_length_counter + 0x80) = 0;
            *(unsigned int *)(string_length_counter + 0xe0) = 0;
            *(unsigned int *)(string_length_counter + 0xd8) = 0;
            system_hardware_002(buffer_allocation_result);
            LOCK();
            buffer_allocation_result = system_global_data_pointer - thread_result_index;
            plVar7 = (long long *)(ulong long)system_global_data_pointer;
            UNLOCK();
            system_global_data_pointer = buffer_allocation_result;
            if (0 < thread_result_index) {
              plVar9 = (long long *)(ulong long)(uint)((int)plVar9 + thread_result_index);
              plVar7 = system_global_data_pointer + (long long)thread_result_index * 2 + 2;
              if (plVar7 < system_global_data_pointer) {
                memmove(system_global_data_pointer + (long long)thread_result_index * 2,plVar7,
                        (long long)system_global_data_pointer - (long long)plVar7);
              }
              plVar7 = system_global_data_pointer + -2;
              system_global_data_pointer = plVar7;
            }
          }
        }
        system_initialization_result0 = system_initialization_result0 + -STRING_BUFFER_SIZE;
        thread_result_index = thread_result_index + -1;
      } while (-1 < thread_result_index);
      data_180c91d14 = 0;
      return plVar7;
    }
    thread_operation_flags = *(unsigned int *)(system_initialization_result0 + 0x84);
    buffer_allocation_result = *(unsigned int *)(system_initialization_result0 + 0x80);
    if (plVar7 < system_global_data_pointer) {
      system_global_data_pointer = plVar7 + 2;
      *plVar7 = system_initialization_result0;
      plVar7[1] = merge_32bit_values(buffer_allocation_result,thread_operation_flags);
    }
    else {
      string_length_counter = (long long)plVar7 - (long long)system_global_data_pointer >> 4;
      if (string_length_counter == 0) {
        string_length_counter = 1;
label_:
        plVar7 = (long long *)system_execute_function(system_global_data_pointer,string_length_counter << 4,data_180c91d08);
      }
      else {
        string_length_counter = string_length_counter * 2;
        plVar7 = plVar9;
        if (string_length_counter != 0) goto label_;
      }
      if (system_global_data_pointer != system_global_data_pointer) {
        memmove(plVar7,system_global_data_pointer,(long long)system_global_data_pointer - (long long)system_global_data_pointer);
      }
      *plVar7 = system_initialization_result0;
      plVar7[1] = merge_32bit_values(buffer_allocation_result,thread_operation_flags);
      if (system_global_data_pointer != (long long *)0x0) {
        handle_system_error();
      }
      system_global_data_pointer = plVar7 + string_length_counter * 2;
      system_global_data_pointer = plVar7;
      system_global_data_pointer = plVar7 + 2;
    }
    system_char_variable = system_validator_001(0x180c919f0,&long_stack_variable);
    plVar7 = system_global_data_pointer;
    system_initialization_result0 = long_stack_variable;
  } while( true );
}
      data_180c91d14 = buffer_allocation_result;
      return;
    }
    string_length_counter = *(long long *)(string_length_counter + system_global_data_pointer);
    if ((*(int *)(string_length_counter + 0xe0) == 2) && (*(int *)(string_length_counter + 0xd8) == 0)) {
      LOCK();
      byte_validation_flag = *(int *)(string_length_counter + 0xd8) == 0;
      if (byte_validation_flag) {
        *(int *)(string_length_counter + 0xd8) = -1;
      }
      UNLOCK();
      if (byte_validation_flag) {
        *(unsigned char *)(string_length_counter + 0xdc) = buffer_allocation_result;
        system_hardware_001(string_length_counter + 0xe8);
        buffer_allocation_result = *(unsigned long long *)(string_length_counter + 0x88);
        thread_result_index = *(int *)(string_length_counter + 0x80);
        *(unsigned long long *)(string_length_counter + 0x88) = unaffected_register;
        buffer_allocation_result = (unsigned int)unaffected_register;
        *(unsigned int *)(string_length_counter + 0x80) = buffer_allocation_result;
        *(unsigned int *)(string_length_counter + 0xe0) = buffer_allocation_result;
        *(unsigned int *)(string_length_counter + 0xd8) = buffer_allocation_result;
        system_hardware_002(buffer_allocation_result);
        LOCK();
        system_global_data_pointer = system_global_data_pointer - thread_result_index;
        UNLOCK();
        if (0 < thread_result_index) {
          unaff_EBP = unaff_EBP + thread_result_index;
          string_length_counter = (long long)unaff_EDI * STRING_BUFFER_SIZE + system_global_data_pointer;
          buffer_allocation_result = string_length_counter + STRING_BUFFER_SIZE;
          if (buffer_allocation_result < system_global_data_pointer) {
            memmove(string_length_counter,buffer_allocation_result,system_global_data_pointer - buffer_allocation_result);
          }
          system_global_data_pointer = system_global_data_pointer - STRING_BUFFER_SIZE;
        }
      }
    }
    string_length_counter = string_length_counter + -STRING_BUFFER_SIZE;
    unaff_EDI = unaff_EDI + -1;
  } while (-1 < unaff_EDI);
  data_180c91d14 = buffer_allocation_result;
  return;
}
  data_180c91d14 = unaff_BPL;
  return;
}
        data_180d48da8 = '\x01';
        thread_priority_level = 0x786;
        system_execute_function(auStack_258,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3);
        OutputDebugStringA(auStack_258);
      }
      float_variable = (float)modff((float)(int)(*(ushort *)((long long)handle + 0x5e) - 1) *
                            uStackX_18._4_4_,&stack_size_limit);
      float_variable = (float)modff();
      fStack_298 = (fStack_28c - fStack_298) * float_variable + fStack_298;
      fStack_294 = (fStack_288 - fStack_294) * float_variable + fStack_294;
      fStack_290 = (fStack_284 - fStack_290) * float_variable + fStack_290;
      float_variable = (((fStack_270 - fStack_27c) * float_variable + fStack_27c) - fStack_294) * float_variable +
               fStack_294;
      float_variable = (((fStack_26c - fStack_278) * float_variable + fStack_278) - fStack_290) * float_variable +
               fStack_290;
      float_variable = (((fStack_274 - fStack_280) * float_variable + fStack_280) - fStack_298) * float_variable +
               fStack_298;
    }
    else {
      float_variable = (float)stack_size_limit;
      float_variable = (float)stack_size_limit;
      float_variable = (float)stack_size_limit;
    }
    *thread_operation_flags = float_variable;
    thread_operation_flags[1] = float_variable;
    thread_operation_flags[2] = float_variable;
    thread_operation_flags[3] = 1.0;
    break;
  case 0x16:
    thread_priority_level = mutex_type;
    system_handler_007(system_initialization_result0,&stack_size_limit,handle,&uStackX_18);
code_r0x0001802a14f5:
    *thread_operation_flags = (float)stack_size_limit._2_1_ * 0.003921569;
    byte_check_result = (byte)stack_size_limit;
code_r0x0001802a151f:
    float_variable = 0.003921569;
    buffer_allocation_result = (ushort)stack_size_limit._1_1_;
    buffer_allocation_result = (ushort)byte_check_result;
    buffer_allocation_result = (ushort)stack_size_limit._3_1_;
code_r0x0001802a1528:
    thread_operation_flags[1] = (float)buffer_allocation_result * float_variable;
    thread_operation_flags[2] = (float)buffer_allocation_result * float_variable;
    thread_operation_flags[3] = (float)buffer_allocation_result * float_variable;
    break;
  case 0x1e:
    thread_priority_level = mutex_type;
    input_string_pointer = (unsigned short *)system_handler_008(system_initialization_result0,&stack_size_limit,handle,&uStackX_18);
    float_variable = (float)func_0x0001800adf40(input_string_pointer[2]);
    float_variable = (float)func_0x0001800adf40(input_string_pointer[1]);
    float_variable = (float)func_0x0001800adf40(*input_string_pointer);
    float_variable = (float)func_0x0001800adf40(input_string_pointer[3]);
    thread_operation_flags[3] = float_variable;
    *thread_operation_flags = float_variable;
    thread_operation_flags[1] = float_variable;
    thread_operation_flags[2] = float_variable;
    break;
  case config_path_buffer_size:
    thread_priority_level = mutex_type;
    system_handler_002(system_initialization_result0,&stack_size_limit,handle,&uStackX_18);
    *thread_operation_flags = (float)stack_size_limit;
    thread_operation_flags[2] = (float)stack_size_limit;
code_r0x0001802a1ad1:
    thread_operation_flags[3] = 1.0;
    float_variable = stack_size_limit._4_4_;
code_r0x0001802a1ade:
    thread_operation_flags[1] = float_variable;
    break;
  case 0x21:
    if (mutex_type == 0) {
      thread_result_index = *(ushort *)((long long)handle + 0x5e) - 1;
      thread_result_index = *(ushort *)((long long)handle + 0x5c) - 1;
      uStackX_18._0_4_ = (float)mutex_attr;
      if ((int)((float)thread_result_index * (float)uStackX_18) <= thread_result_index) {
        thread_result_index = (int)((float)thread_result_index * (float)uStackX_18);
      }
      uStackX_18._4_4_ = (float)((ulong long)mutex_attr >> config_path_buffer_size);
      if ((int)((float)thread_result_index * uStackX_18._4_4_) <= thread_result_index) {
        thread_result_index = (int)((float)thread_result_index * uStackX_18._4_4_);
      }
      thread_result_index = 0;
      if (-1 < thread_result_index) {
        thread_result_index = thread_result_index;
      }
      thread_result_index = 0;
      if (-1 < thread_result_index) {
        thread_result_index = thread_result_index;
      }
      input_string_pointer = (unsigned long long *)
               ((long long)(int)(thread_result_index * (uint)*(ushort *)((long long)handle + 0x5c) + thread_result_index) * STRING_BUFFER_SIZE
               + *handle);
      thread_operation_flags = input_string_pointer[1];
      *(unsigned long long *)thread_operation_flags = *input_string_pointer;
      *(unsigned long long *)(thread_operation_flags + 2) = thread_operation_flags;
    }
    else if (mutex_type == 1) {
      system_handler_009(handle,&uStackX_18,mutex_attr,&fStack_298);
      float_variable = (float)modff((float)(int)(*(ushort *)((long long)handle + 0x5e) - 1) *
                            uStackX_18._4_4_,&stack_size_limit);
      float_variable = (float)modff();
      fStack_298 = (fStack_288 - fStack_298) * float_variable + fStack_298;
      fStack_294 = (fStack_284 - fStack_294) * float_variable + fStack_294;
      fStack_290 = (fStack_280 - fStack_290) * float_variable + fStack_290;
      *thread_operation_flags = (((fStack_268 - fStack_278) * float_variable + fStack_278) - fStack_298) * float_variable +
                 fStack_298;
      thread_operation_flags[1] = (((fStack_264 - fStack_274) * float_variable + fStack_274) - fStack_294) * float_variable +
                   fStack_294;
      thread_operation_flags[2] = (((fStack_260 - fStack_270) * float_variable + fStack_270) - fStack_290) * float_variable +
                   fStack_290;
      thread_operation_flags[3] = 3.4028235e+38;
    }
    else {
      stack_size_limit = 0;
      stack_size_limit = 0;
      thread_operation_flags[0] = 0.0;
      thread_operation_flags[1] = 0.0;
      thread_operation_flags[2] = 0.0;
      thread_operation_flags[3] = 0.0;
    }
    break;
  case 0x27:
    thread_priority_level = mutex_type;
    system_handler_005(system_initialization_result0,&stack_size_limit,handle,&uStackX_18);
    float_variable = 1.5259022e-05;
    *thread_operation_flags = (float)(ushort)stack_size_limit * 1.5259022e-05;
    buffer_allocation_result = (uint)stack_size_limit._2_2_;
    buffer_allocation_result = stack_size_limit._4_2_;
    goto code_r0x0001802a16a1;
  case 0x28:
    thread_priority_level = mutex_type;
    system_handler_006(system_initialization_result0,&stack_size_limit,handle,&uStackX_18);
    float_variable = 0.003921569;
    *thread_operation_flags = (float)(byte)stack_size_limit * 0.003921569;
    buffer_allocation_result = (uint)stack_size_limit._1_1_;
    buffer_allocation_result = (ushort)stack_size_limit._2_1_;
    goto code_r0x0001802a16a1;
  case 0x29:
    thread_priority_level = mutex_type;
    system_handler_006(system_initialization_result0,&stack_size_limit,handle,&uStackX_18);
code_r0x0001802a1677:
    float_variable = 0.003921569;
    *thread_operation_flags = (float)stack_size_limit._2_1_ * 0.003921569;
    buffer_allocation_result = (uint)((ulong long)stack_size_limit >> 8) & 0xff;
    buffer_allocation_result = (ushort)(byte)stack_size_limit;
code_r0x0001802a16a1:
    thread_operation_flags[3] = 1.0;
    thread_operation_flags[2] = (float)buffer_allocation_result * float_variable;
    thread_operation_flags[1] = (float)buffer_allocation_result * float_variable;
    break;
  case 0x2b:
    thread_priority_level = mutex_type;
    system_handler_004(system_initialization_result0,abStack_2b8,handle,&uStackX_18);
    thread_operation_flags[1] = 0.0;
    thread_operation_flags[2] = 0.0;
    thread_operation_flags[3] = 0.0;
    *thread_operation_flags = (float)abStack_2b8[0];
    break;
  case 0x2c:
    buffer_allocation_result = system_handler_003(system_initialization_result0,handle,&uStackX_18);
    float_variable = (float)buffer_allocation_result;
code_r0x0001802a1829:
    *thread_operation_flags = float_variable;
    thread_operation_flags[1] = 1.0;
    thread_operation_flags[2] = 1.0;
    thread_operation_flags[3] = 1.0;
  }
system_handler_001:
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_2e8);
}
    data_180d48da8 = '\x01';
    system_execute_function(unaffected_registerBP + -0x70,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3,0x786);
    OutputDebugStringA(unaffected_registerBP + -0x70);
  }
  buffer_allocation_result = *(ushort *)(unaffected_registerDI + 0x5c);
  float_variable = *(float *)(unaffected_registerBP + config_path_buffer_size0);
  float_variable = (float)modff((float)(int)(*(ushort *)(unaffected_registerDI + 0x5e) - 1) *
                       *(float *)(unaffected_registerBP + config_path_buffer_size4),&stack0x00000038);
  float_variable = (float)modff((float)(int)(buffer_allocation_result - 1) * float_variable,&stack0x00000038);
  float_variable = (fStack000000000000005c - fStack0000000000000050) * float_variable + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * float_variable + fStack0000000000000054;
  float_variable = (fStack0000000000000064 - fStack0000000000000058) * float_variable + fStack0000000000000058;
  *unaffected_registerBX = (((fStack000000000000007c - fStack0000000000000070) * float_variable + fStack0000000000000070)
               - float_variable) * float_variable + float_variable;
  unaffected_registerBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * float_variable +
                  fStack000000000000006c) - fStack0000000000000054) * float_variable + fStack0000000000000054
  ;
  unaffected_registerBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * float_variable +
                  fStack0000000000000068) - float_variable) * float_variable + float_variable;
  unaffected_registerBX[3] = 1.0;
  system_crypto_001(*(ulong long *)(unaffected_registerBP + 400) ^ (ulong long)&stack0x00000000);
}
  data_180d48da8 = 1;
  system_execute_function(unaffected_registerBP + -0x70,&systemFunctionData1,&systemFunctionData2,&systemFunctionData3,0x786);
  OutputDebugStringA(unaffected_registerBP + -0x70);
  buffer_allocation_result = *(ushort *)(unaffected_registerDI + 0x5c);
  float_variable = *(float *)(unaffected_registerBP + config_path_buffer_size0);
  float_variable = (float)modff((float)(int)(*(ushort *)(unaffected_registerDI + 0x5e) - 1) *
                       *(float *)(unaffected_registerBP + config_path_buffer_size4),&stack0x00000038);
  float_variable = (float)modff((float)(int)(buffer_allocation_result - 1) * float_variable,&stack0x00000038);
  float_variable = (fStack000000000000005c - fStack0000000000000050) * float_variable + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * float_variable + fStack0000000000000054;
  float_variable = (fStack0000000000000064 - fStack0000000000000058) * float_variable + fStack0000000000000058;
  *unaffected_registerBX = (((fStack000000000000007c - fStack0000000000000070) * float_variable + fStack0000000000000070)
               - float_variable) * float_variable + float_variable;
  unaffected_registerBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * float_variable +
                  fStack000000000000006c) - fStack0000000000000054) * float_variable + fStack0000000000000054
  ;
  unaffected_registerBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * float_variable +
                  fStack0000000000000068) - float_variable) * float_variable + float_variable;
  unaffected_registerBX[3] = 1.0;
  system_crypto_001(*(ulong long *)(unaffected_registerBP + 400) ^ (ulong long)&stack0x00000000);
}
        data_180d48dac = '\x01';
        thread_stack_base_address = merge_32bit_values(thread_stack_base_address._4_4_,0x4ea);
        system_execute_function(auStack_238,&systemFunctionData1,&systemFunctionData4,&systemFunctionData5);
        OutputDebugStringA(auStack_238);
      }
      goto label_;
    }
    buffer_allocation_result = system_execute_function(&thread_stack_pointer,handle);
    system_thread_manager_012(buffer_allocation_result,1);
    thread_stack_pointer = &g_threadString2;
    if (thread_stack_pointer != (void *)0x0) {
      handle_system_error();
    }
    thread_stack_pointer = (void *)0x0;
    stack_size_limit = 0;
    thread_stack_pointer = &g_threadString4;
    string_length_counter = *thread_operation_flags;
    buffer_allocation_result = *(unsigned short *)((long long)thread_operation_flags + 0x5e);
    thread_operation_flags = *(unsigned short *)((long long)thread_operation_flags + 0x5c);
    input_string_pointer = &default_resource_string;
    if (*(void **)(handle + 8) != (void *)0x0) {
      input_string_pointer = *(void **)(handle + 8);
    }
    thread_result_index = fopen_s(&thread_stack_pointer,input_string_pointer,&fileOpenModeString);
    thread_stack_pointer = thread_stack_pointer;
    if (thread_result_index != 0) {
      thread_stack_pointer = (void *)0x0;
    }
    thread_stack_pointer = &fileHandleData;
    if (thread_stack_pointer == (void *)0x0) goto label_;
    input_string_pointer = thread_stack_pointer;
    if (string_length_counter != 0) {
      thread_stack_base_address = string_length_counter;
      system_hardware_003(&thread_stack_pointer,thread_operation_flags,buffer_allocation_result,thread_result_index);
      input_string_pointer = thread_stack_pointer;
    }
  }
  fclose(input_string_pointer);
label_:
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_298);
}
        data_180d48daa = '\x01';
        thread_stack_pointer = (void *)merge_32bit_values(thread_stack_pointer._4_4_,0xc88);
        system_execute_function(auStack_228,&systemFunctionData1,&system_180a17a68,&systemFunctionData5);
        OutputDebugStringA(auStack_228);
      }
      input_string_pointer = &default_resource_string;
      if (*(void **)(handle + 8) != (void *)0x0) {
        input_string_pointer = *(void **)(handle + 8);
      }
      system_data_manager_002(system_global_data_pointer,&systemDataManagerData,input_string_pointer);
    }
  }
  system_char_variable = handle_system_event(mutex_attr);
  if (system_char_variable == '\0') {
    input_string_pointer = &default_resource_string;
    if (*(void **)(handle + 8) != (void *)0x0) {
      input_string_pointer = *(void **)(handle + 8);
    }
    system_thread_003(&systemThreadData3,input_string_pointer);
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
    buffer_allocation_result = func_0x000180220c90(*(unsigned int *)(mutex_attr + 0x54));
    strcpy_s(mutex_attr + 0x14, SYSTEM_CONFIG_BUFFER_SIZE, buffer_allocation_result);
  }
label_:
  system_processor_012(auStack_260);
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_2f8);
}
      data_180d48dab = '\x01';
      stack_size_limit = 0xac7;
      system_execute_function(auStack_218,&systemFunctionData1,&systemFunctionData6,&systemFunctionData5);
      OutputDebugStringA(auStack_218);
    }
  }
  else {
    system_thread_003(&system_180a17a38);
  }
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_248);
}
bool handle_system_event(unsigned long long *handle)
{
  int thread_result_index;
  unsigned long long thread_operation_flags;
  unsigned long long buffer_allocation_result;
  thread_result_index = *(int *)((long long)handle + 0x54);
  if (thread_result_index == 0x27) {
    if (handle[1] == 0) {
      thread_operation_flags = 0;
      buffer_allocation_result = 0;
    }
    else {
      thread_operation_flags = system_execute_function(system_global_data_pointer,handle[1],3);
      buffer_allocation_result = handle[1];
    }
    memcpy(thread_operation_flags,*handle,buffer_allocation_result);
  }
  if (thread_result_index != 0x28) {
    if (thread_result_index == 0x29) {
      if (handle[1] == 0) {
        thread_operation_flags = 0;
        buffer_allocation_result = 0;
      }
      else {
        thread_operation_flags = system_execute_function(system_global_data_pointer,handle[1],3);
        buffer_allocation_result = handle[1];
      }
      memcpy(thread_operation_flags,*handle,buffer_allocation_result);
    }
    thread_result_index = func_0x0001800ab000(*(unsigned int *)((long long)handle + 0x54));
    return thread_result_index != 0;
  }
  if (handle[1] == 0) {
    thread_operation_flags = 0;
    buffer_allocation_result = 0;
  }
  else {
    thread_operation_flags = system_execute_function(system_global_data_pointer,handle[1],3);
    buffer_allocation_result = handle[1];
  }
  memcpy(thread_operation_flags,*handle,buffer_allocation_result);
}
unsigned long long process_system_request(unsigned long long *handle)
{
  unsigned char temp_buffer_array [16];
  int thread_result_index;
  uint buffer_allocation_result;
  float *pfloat_variable;
  ulong long buffer_allocation_result;
  ushort *input_string_pointer;
  float *pfloat_variable;
  ulong long buffer_allocation_result;
  byte *byte_input_string_pointer;
  float float_variable;
  float float_variable;
  unsigned char temp_buffer_array2 [16];
  float float_variable;
  float float_variable;
  float float_variable;
  switch(*(int *)((long long)handle + 0x54) + -1) {
  case 0:
  case 1:
    byte_input_string_pointer = (byte *)*handle;
    pfloat_variable = (float *)((ulong long)handle[1] >> 2);
    if (0 < (int)pfloat_variable) {
      buffer_allocation_result = (ulong long)pfloat_variable & UINT32_MAX;
      do {
        float_variable = (float)byte_input_string_pointer[1] * 0.007843138 - 1.0;
        float_variable = (float)*byte_input_string_pointer * 0.007843138 - 1.0;
        float_variable = (float)byte_input_string_pointer[2] * 0.007843138 - 1.0;
        float_variable = float_variable * float_variable + float_variable * float_variable + float_variable * float_variable;
        temp_buffer_array2 = rsqrtss(zero_extension_float((uint)float_variable),zero_extension_float((uint)float_variable));
        float_variable = temp_buffer_array2._0_4_;
        float_variable = float_variable * 0.5 * (3.0 - float_variable * float_variable * float_variable);
        *byte_input_string_pointer = (byte)(int)((float_variable * float_variable + 1.0) * 127.5);
        byte_input_string_pointer[1] = (byte)(int)((float_variable * float_variable + 1.0) * 127.5);
        thread_result_index = (int)((float_variable * float_variable + 1.0) * 127.5);
        byte_input_string_pointer[2] = (byte)thread_result_index;
        byte_input_string_pointer = byte_input_string_pointer + 4;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
      return CONCAT71((uint7)(uint3)((uint)thread_result_index >> 8),1);
    }
    break;
  default:
    return 0;
  case 8:
    input_string_pointer = (ushort *)*handle;
    pfloat_variable = (float *)((ulong long)handle[1] >> 3);
    if (0 < (int)pfloat_variable) {
      buffer_allocation_result = (ulong long)pfloat_variable & UINT32_MAX;
      do {
        float_variable = (float)input_string_pointer[1] * 3.0518044e-05 - 1.0;
        float_variable = (float)*input_string_pointer * 3.0518044e-05 - 1.0;
        float_variable = (float)input_string_pointer[2] * 3.0518044e-05 - 1.0;
        float_variable = float_variable * float_variable + float_variable * float_variable + float_variable * float_variable;
        temp_buffer_array2 = rsqrtss(zero_extension_float((uint)float_variable),zero_extension_float((uint)float_variable));
        float_variable = temp_buffer_array2._0_4_;
        float_variable = float_variable * 0.5 * (3.0 - float_variable * float_variable * float_variable);
        *input_string_pointer = (ushort)(int)((float_variable * float_variable + 1.0) * 32767.5);
        input_string_pointer[1] = (ushort)(int)((float_variable * float_variable + 1.0) * 32767.5);
        thread_result_index = (int)((float_variable * float_variable + 1.0) * 32767.5);
        input_string_pointer[2] = (ushort)thread_result_index;
        input_string_pointer = input_string_pointer + 4;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
      return CONCAT71((uint7)(uint3)((uint)thread_result_index >> 8),1);
    }
    break;
  case 0x1f:
    pfloat_variable = (float *)*handle;
    if (0 < (int)((ulong long)handle[1] / 0xc)) {
      buffer_allocation_result = (ulong long)handle[1] / 0xc & UINT32_MAX;
      do {
        float_variable = (*pfloat_variable + *pfloat_variable) - 1.0;
        float_variable = (pfloat_variable[1] + pfloat_variable[1]) - 1.0;
        float_variable = (pfloat_variable[2] + pfloat_variable[2]) - 1.0;
        float_variable = float_variable * float_variable + float_variable * float_variable + float_variable * float_variable;
        temp_buffer_array2 = rsqrtss(zero_extension_float((uint)float_variable),zero_extension_float((uint)float_variable));
        float_variable = temp_buffer_array2._0_4_;
        float_variable = float_variable * 0.5 * (3.0 - float_variable * float_variable * float_variable);
        *pfloat_variable = (float_variable * float_variable + 1.0) * 0.5;
        pfloat_variable[1] = (float_variable * float_variable + 1.0) * 0.5;
        pfloat_variable[2] = (float_variable * float_variable + 1.0) * 0.5;
        pfloat_variable = pfloat_variable + 3;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
      return CONCAT71((int7)((ulong long)pfloat_variable >> 8),1);
    }
    break;
  case config_path_buffer_size:
    buffer_allocation_result = handle[1];
    pfloat_variable = (float *)*handle;
    pfloat_variable = (float *)(buffer_allocation_result >> 4);
    if (0 < (int)pfloat_variable) {
      buffer_allocation_result = (ulong long)pfloat_variable & UINT32_MAX;
      do {
        float_variable = (*pfloat_variable + *pfloat_variable) - 1.0;
        float_variable = (pfloat_variable[1] + pfloat_variable[1]) - 1.0;
        float_variable = (pfloat_variable[2] + pfloat_variable[2]) - 1.0;
        float_variable = float_variable * float_variable + float_variable * float_variable + float_variable * float_variable;
        temp_buffer_array2 = rsqrtss(zero_extension_float((uint)float_variable),zero_extension_float((uint)float_variable));
        float_variable = temp_buffer_array2._0_4_;
        float_variable = float_variable * 0.5 * (3.0 - float_variable * float_variable * float_variable);
        *pfloat_variable = (float_variable * float_variable + 1.0) * 0.5;
        pfloat_variable[2] = (float_variable * float_variable + 1.0) * 0.5;
        pfloat_variable[1] = (float_variable * float_variable + 1.0) * 0.5;
        pfloat_variable = pfloat_variable + 4;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
      return CONCAT71((uint7)(buffer_allocation_result >> 0xc),1);
    }
    break;
  case 0x26:
    input_string_pointer = (ushort *)*handle;
    temp_buffer_array._8_8_ = 0;
    temp_buffer_array._0_8_ = handle[1];
    pfloat_variable = subtraction_long_long(zero_extension_long_long(0xaaaaaaaaaaaaaaab) * temp_buffer_array,0);
    buffer_allocation_result = (ulong long)handle[1] / 6;
    if (0 < (int)buffer_allocation_result) {
      buffer_allocation_result = buffer_allocation_result & UINT32_MAX;
      do {
        float_variable = (float)input_string_pointer[1] * 0.007843138 - 1.0;
        float_variable = (float)*input_string_pointer * 0.007843138 - 1.0;
        float_variable = (float)input_string_pointer[2] * 0.007843138 - 1.0;
        float_variable = float_variable * float_variable + float_variable * float_variable + float_variable * float_variable;
        temp_buffer_array2 = rsqrtss(zero_extension_float((uint)float_variable),zero_extension_float((uint)float_variable));
        float_variable = temp_buffer_array2._0_4_;
        float_variable = float_variable * 0.5 * (3.0 - float_variable * float_variable * float_variable);
        *input_string_pointer = (ushort)(int)((float_variable * float_variable + 1.0) * 127.5);
        input_string_pointer[1] = (ushort)(int)((float_variable * float_variable + 1.0) * 127.5);
        thread_result_index = (int)((float_variable * float_variable + 1.0) * 127.5);
        input_string_pointer[2] = (ushort)thread_result_index;
        input_string_pointer = input_string_pointer + 3;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
      return CONCAT71((uint7)(uint3)((uint)thread_result_index >> 8),1);
    }
    break;
  case 0x27:
  case 0x28:
    byte_input_string_pointer = (byte *)*handle;
    temp_buffer_array2._8_8_ = 0;
    temp_buffer_array2._0_8_ = handle[1];
    pfloat_variable = subtraction_long_long(zero_extension_long_long(0xaaaaaaaaaaaaaaab) * temp_buffer_array2,0);
    buffer_allocation_result = (ulong long)handle[1] / 3;
    if (0 < (int)buffer_allocation_result) {
      buffer_allocation_result = buffer_allocation_result & UINT32_MAX;
      do {
        float_variable = (float)byte_input_string_pointer[1] * 0.007843138 - 1.0;
        float_variable = (float)*byte_input_string_pointer * 0.007843138 - 1.0;
        float_variable = (float)byte_input_string_pointer[2] * 0.007843138 - 1.0;
        float_variable = float_variable * float_variable + float_variable * float_variable + float_variable * float_variable;
        temp_buffer_array2 = rsqrtss(zero_extension_float((uint)float_variable),zero_extension_float((uint)float_variable));
        float_variable = temp_buffer_array2._0_4_;
        float_variable = float_variable * 0.5 * (3.0 - float_variable * float_variable * float_variable);
        *byte_input_string_pointer = (byte)(int)((float_variable * float_variable + 1.0) * 127.5);
        byte_input_string_pointer[1] = (byte)(int)((float_variable * float_variable + 1.0) * 127.5);
        buffer_allocation_result = (uint)((float_variable * float_variable + 1.0) * 127.5);
        pfloat_variable = (float *)(ulong long)buffer_allocation_result;
        byte_input_string_pointer[2] = (byte)buffer_allocation_result;
        byte_input_string_pointer = byte_input_string_pointer + 3;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
  }
  return CONCAT71((int7)((ulong long)pfloat_variable >> 8),1);
}
unsigned long long handle_system_callback(unsigned long long *handle)
{
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float *pfloat_variable;
  float float_variable;
  uint buffer_allocation_result;
  float *pfloat_variable;
  float *pfloat_variable;
  int thread_result_index;
  int thread_result_index;
  int thread_result_index;
  ulong long buffer_allocation_result;
  long long string_length_counter;
  double dVar21;
  if (*(int *)((long long)handle + 0x54) == config_path_buffer_size) {
    pfloat_variable = (float *)*handle;
    thread_result_index = 0;
    dVar21 = 0.0;
    string_length_counter = 0;
    thread_result_index = 0;
    thread_result_index = (int)((ulong long)handle[1] / 0xc);
    pfloat_variable = pfloat_variable;
    if (3 < thread_result_index) {
      buffer_allocation_result = (thread_result_index - 4U >> 2) + 1;
      buffer_allocation_result = (ulong long)buffer_allocation_result;
      string_length_counter = (ulong long)buffer_allocation_result * 4;
      thread_result_index = buffer_allocation_result * 4;
      do {
        pfloat_variable = pfloat_variable + 3;
        float_variable = *pfloat_variable;
        pfloat_variable = pfloat_variable + 6;
        pfloat_variable = pfloat_variable + 7;
        pfloat_variable = pfloat_variable + 5;
        pfloat_variable = pfloat_variable + 9;
        pfloat_variable = pfloat_variable + 10;
        pfloat_variable = pfloat_variable + 4;
        pfloat_variable = pfloat_variable + 1;
        pfloat_variable = pfloat_variable + 2;
        pfloat_variable = pfloat_variable + 8;
        pfloat_variable = pfloat_variable + 0xb;
        pfloat_variable = pfloat_variable + 0xc;
        dVar21 = dVar21 + (double)*pfloat_variable * 0.2126 + (double)float_variable * 0.2126 +
                          (double)*pfloat_variable * 0.2126 + (double)*pfloat_variable * 0.2126 +
                          (double)*pfloat_variable * 0.7152 +
                          (double)*pfloat_variable * 0.7152 + (double)*pfloat_variable * 0.7152 +
                          (double)*pfloat_variable * 0.7152 +
                          (double)*pfloat_variable * 0.0722 + (double)*pfloat_variable * 0.0722 +
                          (double)*pfloat_variable * 0.0722 + (double)*pfloat_variable * 0.0722;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
    if (thread_result_index < thread_result_index) {
      pfloat_variable = pfloat_variable + 2;
      buffer_allocation_result = (ulong long)(uint)(thread_result_index - thread_result_index);
      string_length_counter = string_length_counter + buffer_allocation_result;
      do {
        pfloat_variable = pfloat_variable + -1;
        pfloat_variable = pfloat_variable + -2;
        float_variable = *pfloat_variable;
        pfloat_variable = pfloat_variable + 3;
        dVar21 = dVar21 + (double)*pfloat_variable * 0.7152 + (double)*pfloat_variable * 0.2126 +
                          (double)float_variable * 0.0722;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)string_length_counter);
    if (3 < thread_result_index) {
      buffer_allocation_result = (thread_result_index - 4U >> 2) + 1;
      buffer_allocation_result = (ulong long)buffer_allocation_result;
      thread_result_index = buffer_allocation_result * 4;
      do {
        *pfloat_variable = (float)((double)*pfloat_variable * dVar21);
        pfloat_variable[1] = (float)((double)pfloat_variable[1] * dVar21);
        pfloat_variable[2] = (float)((double)pfloat_variable[2] * dVar21);
        pfloat_variable[3] = (float)((double)pfloat_variable[3] * dVar21);
        pfloat_variable[4] = (float)((double)pfloat_variable[4] * dVar21);
        pfloat_variable[5] = (float)((double)pfloat_variable[5] * dVar21);
        pfloat_variable[6] = (float)((double)pfloat_variable[6] * dVar21);
        pfloat_variable[7] = (float)((double)pfloat_variable[7] * dVar21);
        pfloat_variable[8] = (float)((double)pfloat_variable[8] * dVar21);
        pfloat_variable[9] = (float)((double)pfloat_variable[9] * dVar21);
        pfloat_variable[10] = (float)((double)pfloat_variable[10] * dVar21);
        pfloat_variable[0xb] = (float)((double)pfloat_variable[0xb] * dVar21);
        pfloat_variable = pfloat_variable + 0xc;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
    if (thread_result_index < thread_result_index) {
      pfloat_variable = pfloat_variable + 2;
      buffer_allocation_result = (ulong long)(uint)(thread_result_index - thread_result_index);
      do {
        pfloat_variable[-2] = (float)((double)pfloat_variable[-2] * dVar21);
        pfloat_variable[-1] = (float)((double)pfloat_variable[-1] * dVar21);
        *pfloat_variable = (float)((double)*pfloat_variable * dVar21);
        pfloat_variable = pfloat_variable + 3;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
  }
  else {
    if (*(int *)((long long)handle + 0x54) != 0x21) {
      return 0;
    }
    thread_result_index = 0;
    pfloat_variable = (float *)*handle;
    dVar21 = 0.0;
    string_length_counter = 0;
    thread_result_index = 0;
    thread_result_index = (int)((ulong long)handle[1] >> 4);
    pfloat_variable = pfloat_variable;
    if (3 < thread_result_index) {
      buffer_allocation_result = (thread_result_index - 4U >> 2) + 1;
      buffer_allocation_result = (ulong long)buffer_allocation_result;
      string_length_counter = (ulong long)buffer_allocation_result * 4;
      thread_result_index = buffer_allocation_result * 4;
      do {
        pfloat_variable = pfloat_variable + 4;
        float_variable = *pfloat_variable;
        pfloat_variable = pfloat_variable + 8;
        pfloat_variable = pfloat_variable + 9;
        pfloat_variable = pfloat_variable + 6;
        pfloat_variable = pfloat_variable + 0xc;
        pfloat_variable = pfloat_variable + 0xd;
        pfloat_variable = pfloat_variable + 5;
        pfloat_variable = pfloat_variable + 1;
        pfloat_variable = pfloat_variable + 2;
        pfloat_variable = pfloat_variable + 10;
        pfloat_variable = pfloat_variable + 0xe;
        pfloat_variable = pfloat_variable + STRING_BUFFER_SIZE;
        dVar21 = dVar21 + (double)*pfloat_variable * 0.2126 + (double)float_variable * 0.2126 +
                          (double)*pfloat_variable * 0.2126 + (double)*pfloat_variable * 0.2126 +
                          (double)*pfloat_variable * 0.7152 +
                          (double)*pfloat_variable * 0.7152 + (double)*pfloat_variable * 0.7152 +
                          (double)*pfloat_variable * 0.7152 +
                          (double)*pfloat_variable * 0.0722 + (double)*pfloat_variable * 0.0722 +
                          (double)*pfloat_variable * 0.0722 + (double)*pfloat_variable * 0.0722;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
    if (thread_result_index < thread_result_index) {
      pfloat_variable = pfloat_variable + 2;
      buffer_allocation_result = (ulong long)(uint)(thread_result_index - thread_result_index);
      string_length_counter = string_length_counter + buffer_allocation_result;
      do {
        pfloat_variable = pfloat_variable + -1;
        pfloat_variable = pfloat_variable + -2;
        float_variable = *pfloat_variable;
        pfloat_variable = pfloat_variable + 4;
        dVar21 = dVar21 + (double)*pfloat_variable * 0.7152 + (double)*pfloat_variable * 0.2126 +
                          (double)float_variable * 0.0722;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)string_length_counter);
    if (3 < thread_result_index) {
      buffer_allocation_result = (thread_result_index - 4U >> 2) + 1;
      buffer_allocation_result = (ulong long)buffer_allocation_result;
      thread_result_index = buffer_allocation_result * 4;
      do {
        *pfloat_variable = (float)((double)*pfloat_variable * dVar21);
        pfloat_variable[1] = (float)((double)pfloat_variable[1] * dVar21);
        pfloat_variable[2] = (float)((double)pfloat_variable[2] * dVar21);
        pfloat_variable[4] = (float)((double)pfloat_variable[4] * dVar21);
        pfloat_variable[5] = (float)((double)pfloat_variable[5] * dVar21);
        pfloat_variable[6] = (float)((double)pfloat_variable[6] * dVar21);
        pfloat_variable[8] = (float)((double)pfloat_variable[8] * dVar21);
        pfloat_variable[9] = (float)((double)pfloat_variable[9] * dVar21);
        pfloat_variable[10] = (float)((double)pfloat_variable[10] * dVar21);
        pfloat_variable[0xc] = (float)((double)pfloat_variable[0xc] * dVar21);
        pfloat_variable[0xd] = (float)((double)pfloat_variable[0xd] * dVar21);
        pfloat_variable[0xe] = (float)((double)pfloat_variable[0xe] * dVar21);
        pfloat_variable = pfloat_variable + STRING_BUFFER_SIZE;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
    if (thread_result_index < thread_result_index) {
      pfloat_variable = pfloat_variable + 2;
      buffer_allocation_result = (ulong long)(uint)(thread_result_index - thread_result_index);
      do {
        pfloat_variable[-2] = (float)((double)pfloat_variable[-2] * dVar21);
        pfloat_variable[-1] = (float)((double)pfloat_variable[-1] * dVar21);
        *pfloat_variable = (float)((double)*pfloat_variable * dVar21);
        pfloat_variable = pfloat_variable + 4;
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
  }
  return 1;
}
  data_180c8aa6a = 0;
  *(unsigned int *)(system_initialization_result + 0x4c) = 0;
  system_network_001(*(unsigned long long *)(system_initialization_result + STRING_BUFFER_SIZE8));
  thread_stack_pointer = &g_alternateDataTemplate;
  thread_stack_pointer = auStack_38;
  auStack_38[0] = 0;
  stack_size_limit = 0x12;
  strcpy_s(auStack_38,config_path_buffer_size,&system_180a1a918);
  system_network_002();
  thread_stack_pointer = &g_threadString4;
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_78);
}
        data_180d48e78 = 0;
        system_global_data_pointer = 0;
        system_global_data_pointer = 0;
        uRam0000000180d48ec8 = 0;
        system_global_data_pointer = 3;
        system_global_data_pointer = 0;
        system_crypto_002(&system_180941dc0);
        system_initialize_crypto_module(&data_180d48e24);
      }
      input_string_pointer = (uint *)&data_180d48e30;
      if (buffer_allocation_result < (ulong long)
                  ((*(long long *)(mutex_attr + 0x1c) - *(long long *)(mutex_attr + 0x1a)) / 0xb0)) {
        input_string_pointer = (uint *)(buffer_allocation_result + *(long long *)(mutex_attr + 0x1a));
      }
      if ((*(int *)(system_initialization_result0 + 0x48) < system_global_data_pointer) &&
         (system_crypto_004(&data_180d48e24), system_global_data_pointer == -1)) {
        resource_template_ptr = &g_defaultDataTemplate;
        system_global_data_pointer = &data_180d48e78;
        system_global_data_pointer = 0;
        data_180d48e78 = 0;
        system_global_data_pointer = 0;
        system_global_data_pointer = 0;
        uRam0000000180d48ec8 = 0;
        system_global_data_pointer = 3;
        system_global_data_pointer = 0;
        system_crypto_002(&system_180941dc0);
        system_initialize_crypto_module(&data_180d48e24);
      }
      input_string_pointer = &data_180d48e30;
      if (buffer_allocation_result < (ulong long)
                  ((*(long long *)(thread_operation_flags + 0x1c) - *(long long *)(thread_operation_flags + 0x1a)) / 0xb0)) {
        input_string_pointer = (void *)(buffer_allocation_result + *(long long *)(thread_operation_flags + 0x1a));
      }
      if ((((0.0001 <= ABS(*(float *)(input_string_pointer + 0x14) - (float)input_string_pointer[5])) ||
           (0.0001 <= ABS(*(float *)(input_string_pointer + 0x18) - (float)input_string_pointer[6]))) ||
          (0.0001 <= ABS(*(float *)(input_string_pointer + 0x1c) - (float)input_string_pointer[7]))) ||
         (((0.0001 <= ABS(*(float *)(input_string_pointer + STRING_BUFFER_SIZE) - (float)input_string_pointer[4]) ||
           (0.0001 <= ABS(*(float *)(input_string_pointer + config_path_buffer_size) - (float)input_string_pointer[8]))) ||
          ((0.0001 <= ABS(*(float *)(input_string_pointer + 0x24) - (float)input_string_pointer[9]) ||
           (0.0001 <= ABS(*(float *)(input_string_pointer + 0x28) - (float)input_string_pointer[10]))))))) {
        *input_string_pointer = *input_string_pointer | 8;
      }
      buffer_allocation_result = system_allocator_001(handle,input_string_pointer + 0x88,input_string_pointer + 0x22);
      buffer_allocation_result = buffer_allocation_result + 1;
      buffer_allocation_result = buffer_allocation_result + 0xb0;
      buffer_allocation_result = buffer_allocation_result - 1;
    } while (buffer_allocation_result != 0);
  }
label_:
  return buffer_allocation_result & 0xffffffffffffff00;
}
data_180329eb7:
    thread_result_index = _Mtx_unlock(handle + 0x3d8);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    break;
  default:
label_:
    buffer_allocation_result = 1;
    goto label_;
  }
  *thread_operation_flags = (long long)plVar5;
code_r0x000180329ed1:
  byte_validation_flag = (byte)temp_stack_array[0];
  goto label_;
}
unsigned long long allocate_system_memory(long long handle,long long *thread_operation_flags,unsigned int *mutex_attr,uint mutex_type)
{
  long long *psystem_initialization_result;
  byte byte_flag_value;
  int thread_result_index;
  unsigned long long *input_string_pointer;
  unsigned long long buffer_allocation_result;
  long long *plVar6;
  long long string_length_counter;
  long long *plong_stack_variable;
  unsigned int temp_stack_array [2];
  long long *plStack_80;
  long long *plStack_78;
  unsigned long long stack_size_limit;
  long long **pplStack_68;
  long long *plStack_60;
  unsigned char auStack_58 [32];
  stack_size_limit = DEFAULT_THREAD_POOL_FLAG;
  buffer_allocation_result = 0;
  byte_flag_value = *(byte *)(mutex_attr + 2);
  if ((mutex_type >> 1 & 1) != 0) {
    system_ui_003(system_global_data_pointer,&plStack_78,mutex_attr + 0x14,1);
    input_string_pointer = (unsigned long long *)system_ui_006();
    system_resource_002(*input_string_pointer,&plong_stack_variable);
    if (plStack_80 != (long long *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
    }
    system_resource_003(plong_stack_variable,&plStack_78);
    *(uint *)(plong_stack_variable + config_path_buffer_size) = *(uint *)(plong_stack_variable + config_path_buffer_size) | SYSTEM_CONFIG_BUFFER_SIZE_ZERO00000;
    temp_stack_array[0] = *mutex_attr;
    psystem_initialization_result = (long long *)(handle + 0x3d8);
    plStack_80 = psystem_initialization_result;
    thread_result_index = _Mtx_lock(psystem_initialization_result);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    buffer_allocation_result = system_execute_function(system_global_data_pointer,0x298,8,3);
    plVar6 = (long long *)system_memory_001(buffer_allocation_result);
    pplStack_68 = (long long **)merge_32bit_values(pplStack_68._4_4_,temp_stack_array[0]);
    plStack_60 = plVar6;
    system_memory_manager_006(handle + 0x3a8,auStack_58,&pplStack_68);
    thread_result_index = _Mtx_unlock(psystem_initialization_result);
    if (thread_result_index != 0) {
      __Throw_C_error_std__YAXH_Z(thread_result_index);
    }
    *thread_operation_flags = (long long)plVar6;
    buffer_allocation_result = *(unsigned long long *)(handle + 0x2d8);
    pplStack_68 = &plStack_80;
    plStack_80 = plVar6;
    if (plVar6 != (long long *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    system_execute_function(buffer_allocation_result,&plStack_80);
    *(int *)(handle + 0xb0) = *(int *)(handle + 0xb0) + 1;
    buffer_allocation_result = 1;
    if (plong_stack_variable != (long long *)0x0) {
      (**(code **)(*plong_stack_variable + 0x38))();
    }
    if (plStack_78 != (long long *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
  }
  if ((mutex_type >> 2 & 1) == 0) {
    if (((mutex_type >> 1 & 1) == 0) && ((byte_flag_value & 1) != 0)) {
      string_length_counter = system_memory_manager_007(handle,*mutex_attr);
      *thread_operation_flags = string_length_counter;
      buffer_allocation_result = 1;
    }
  }
  else {
    temp_stack_array[0] = *mutex_attr;
    string_length_counter = system_memory_manager_007(handle);
    if (string_length_counter == 0) {
      *thread_operation_flags = 0;
      buffer_allocation_result = 1;
    }
    else {
      psystem_initialization_result = (long long *)(handle + 0x3d8);
      plong_stack_variable = psystem_initialization_result;
      thread_result_index = _Mtx_lock(psystem_initialization_result);
      if (thread_result_index != 0) {
        __Throw_C_error_std__YAXH_Z(thread_result_index);
      }
      system_memory_manager_008(handle + 0x3a8,temp_stack_array);
      thread_result_index = _Mtx_unlock(psystem_initialization_result);
      if (thread_result_index != 0) {
        __Throw_C_error_std__YAXH_Z(thread_result_index);
      }
      *thread_operation_flags = string_length_counter;
      *(unsigned char *)(string_length_counter + 0x39) = 1;
      buffer_allocation_result = 1;
    }
  }
  return buffer_allocation_result;
}
    data_180d49748 = 0;
    system_memory_002(0x180d496e0);
    system_crypto_002(system_execute_function);
    system_initialize_crypto_module(&data_180d496d0);
  }
  thread_result_index = _Mtx_lock(handle + 0x6e8);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  if ((ulong long)mutex_attr <= *(ulong long *)(handle + 0x160)) {
    for (input_string_pointer = *(uint **)(*(long long *)(handle + 0x6c0) +
                            ((ulong long)thread_operation_flags % (ulong long)*(uint *)(handle + 0x6c8)) * 8);
        input_string_pointer != (uint *)0x0; input_string_pointer = *(uint **)(input_string_pointer + 4)) {
      if (thread_operation_flags == *input_string_pointer) goto label_;
    }
    input_string_pointer = *(uint **)(*(long long *)(handle + 0x6c0) + *(long long *)(handle + 0x6c8) * 8);
label_:
    string_length_counter = *(long long *)(input_string_pointer + 2);
    system_initialization_result = *(long long *)(string_length_counter + 8);
    for (input_string_pointer = *(uint **)(system_initialization_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(string_length_counter + STRING_BUFFER_SIZE)) * 8);
        input_string_pointer != (uint *)0x0; input_string_pointer = *(uint **)(input_string_pointer + 4)) {
      if (mutex_attr == *input_string_pointer) {
        string_length_counter = *(long long *)(string_length_counter + STRING_BUFFER_SIZE);
        goto label_;
      }
    }
    string_length_counter = *(long long *)(string_length_counter + STRING_BUFFER_SIZE);
    input_string_pointer = *(uint **)(system_initialization_result + string_length_counter * 8);
label_:
    if ((input_string_pointer != *(uint **)(system_initialization_result + string_length_counter * 8)) && (string_length_counter = *(long long *)(input_string_pointer + 2), string_length_counter != 0)
       ) goto label_;
  }
  system_memory_002(0x180d496e0);
  string_length_counter = 0x180d496e0;
label_:
  thread_result_index = _Mtx_unlock(handle + 0x6e8);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  return string_length_counter;
}
long long allocate_with_thread_operation_flags(long long handle,uint thread_operation_flags,uint mutex_attr)
{
  long long system_initialization_result;
  long long string_length_counter;
  uint *input_string_pointer;
  if ((*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
               0x48) < system_global_data_pointer) && (system_crypto_004(&data_180d497d0), system_global_data_pointer == -1)) {
    system_memory_004(0x180d497e0);
    system_crypto_002(system_execute_function);
    system_initialize_crypto_module(&data_180d497d0);
  }
  if ((ulong long)mutex_attr <= *(ulong long *)(handle + 0x160)) {
    for (input_string_pointer = *(uint **)(*(long long *)(handle + 0x9f8) +
                            ((ulong long)thread_operation_flags % (ulong long)*(uint *)(handle + 0xa00)) * 8);
        input_string_pointer != (uint *)0x0; input_string_pointer = *(uint **)(input_string_pointer + 4)) {
      if (thread_operation_flags == *input_string_pointer) goto label_;
    }
    input_string_pointer = *(uint **)(*(long long *)(handle + 0x9f8) + *(long long *)(handle + 0xa00) * 8);
label_:
    string_length_counter = *(long long *)(input_string_pointer + 2);
    system_initialization_result = *(long long *)(string_length_counter + 8);
    for (input_string_pointer = *(uint **)(system_initialization_result + ((ulong long)mutex_attr % (ulong long)*(uint *)(string_length_counter + STRING_BUFFER_SIZE)) * 8);
        input_string_pointer != (uint *)0x0; input_string_pointer = *(uint **)(input_string_pointer + 4)) {
      if (mutex_attr == *input_string_pointer) {
        string_length_counter = *(long long *)(string_length_counter + STRING_BUFFER_SIZE);
        goto label_;
      }
    }
    string_length_counter = *(long long *)(string_length_counter + STRING_BUFFER_SIZE);
    input_string_pointer = *(uint **)(system_initialization_result + string_length_counter * 8);
label_:
    if ((input_string_pointer != *(uint **)(system_initialization_result + string_length_counter * 8)) && (*(long long *)(input_string_pointer + 2) != 0)) {
      return *(long long *)(input_string_pointer + 2);
    }
  }
  system_memory_005(0x180d497e0);
  return 0x180d497e0;
}
long long allocate_system_buffer(unsigned long long handle,long long *thread_operation_flags,long long mutex_attr)
{
  long long system_initialization_result;
  uint thread_operation_flags;
  ulong long buffer_allocation_result;
  unsigned long long buffer_allocation_result;
  unsigned long long *input_string_pointer;
  uint buffer_allocation_result;
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              0x48) < system_global_data_pointer) {
    system_crypto_004(&data_180d49990);
    if (system_global_data_pointer == -1) {
      buffer_allocation_result = system_execute_function(system_global_data_pointer,0x1c8,8,3);
      system_global_data_pointer = system_memory_manager_001(buffer_allocation_result);
      buffer_allocation_result = system_execute_function(system_global_data_pointer,config_path_buffer_size0,8,3);
      system_global_data_pointer = system_allocate_memory_buffer(buffer_allocation_result);
      input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,0xf8,8,3);
      system_memory_003(input_string_pointer);
      // Original name: system_180a1b368
      *input_string_pointer = &g_handle_manager_address;
      system_register_memory_pointer(input_string_pointer);
      system_global_data_pointer = input_string_pointer;
      system_global_data_pointer = system_execute_function();
      input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,0xb0,8,3);
      system_memory_003(input_string_pointer);
      // Original name: system_180a1b3f0
      *input_string_pointer = &g_memory_manager_address;
      system_global_data_pointer = input_string_pointer;
      system_global_data_pointer = system_get_memory_manager_instance();
      system_global_data_pointer = (*system_global_data_pointer)(&data_180c918c0);
      system_global_data_pointer = 0;
      system_initialize_crypto_module(&data_180d49990);
    }
  }
  buffer_allocation_result = 0;
  buffer_allocation_result = (uint)(thread_operation_flags[1] - *thread_operation_flags >> 3);
  if (buffer_allocation_result != 0) {
    do {
      system_initialization_result = *(long long *)(*thread_operation_flags + buffer_allocation_result * 8);
      if (*(int *)(system_initialization_result + 8) == *(int *)(mutex_attr + 8)) {
        return system_initialization_result;
      }
      thread_operation_flags = (int)buffer_allocation_result + 1;
      buffer_allocation_result = (ulong long)thread_operation_flags;
    } while (thread_operation_flags < buffer_allocation_result);
  }
  (**(code **)(**(long long **)(&data_180d48de0 + (ulong long)*(uint *)(mutex_attr + 0x8c) * 8) + 8))();
  return *(long long *)(&data_180d48de0 + (ulong long)*(uint *)(mutex_attr + 0x8c) * 8);
}
unsigned long long
system_allocator_008(unsigned long long handle,long long *thread_operation_flags,unsigned long long *mutex_attr,unsigned int mutex_type,
             unsigned int param_5,unsigned char param_6)
{
  long long system_initialization_result;
  ulong long thread_operation_flags;
  long long string_length_counter;
  unsigned long long buffer_allocation_result;
  long long string_length_counter;
  long long string_length_counter;
  uint *input_string_pointer;
  buffer_allocation_result = 0;
  thread_operation_flags = thread_operation_flags[1] - *thread_operation_flags >> 2;
  if ((int)thread_operation_flags != 0) {
    string_length_counter = 0;
    thread_operation_flags = thread_operation_flags & UINT32_MAX;
    do {
      input_string_pointer = (uint *)*mutex_attr;
      system_initialization_result = *thread_operation_flags;
      string_length_counter = (long long)mutex_attr[1] - (long long)input_string_pointer >> 2;
      if (0 < string_length_counter) {
        do {
          string_length_counter = string_length_counter >> 1;
          if (input_string_pointer[string_length_counter] < *(uint *)(system_initialization_result + string_length_counter)) {
            input_string_pointer = input_string_pointer + string_length_counter + 1;
            string_length_counter = string_length_counter + (-1 - string_length_counter);
          }
          string_length_counter = string_length_counter;
        } while (0 < string_length_counter);
      }
      if ((input_string_pointer == (uint *)mutex_attr[1]) || (*(uint *)(system_initialization_result + string_length_counter) < *input_string_pointer)) {
        buffer_allocation_result = allocate_with_thread_operation_flags(handle,*(unsigned int *)(system_initialization_result + string_length_counter),mutex_type);
        system_allocator_002(handle,buffer_allocation_result,param_5,mutex_type,param_6);
        buffer_allocation_result = 1;
      }
      string_length_counter = string_length_counter + 4;
      thread_operation_flags = thread_operation_flags - 1;
    } while (thread_operation_flags != 0);
  }
  return buffer_allocation_result;
}
unsigned char check_memory_status(void)
{
  uint in_EAX;
  long long system_initialization_result;
  long long string_length_counter;
  long long string_length_counter;
  unsigned char unaff_SIL;
  ulong long buffer_allocation_result;
  uint *input_string_pointer;
  unsigned long long *unaffected_register;
  long long *unaffected_register;
  string_length_counter = 0;
  buffer_allocation_result = (ulong long)in_EAX;
  do {
    input_string_pointer = (uint *)*unaffected_register;
    system_initialization_result = (long long)unaffected_register[1] - (long long)input_string_pointer >> 2;
    if (0 < system_initialization_result) {
      do {
        string_length_counter = system_initialization_result >> 1;
        if (input_string_pointer[string_length_counter] < *(uint *)(*unaffected_register + string_length_counter)) {
          input_string_pointer = input_string_pointer + string_length_counter + 1;
          string_length_counter = system_initialization_result + (-1 - string_length_counter);
        }
        system_initialization_result = string_length_counter;
      } while (0 < string_length_counter);
    }
    if ((input_string_pointer == (uint *)unaffected_register[1]) || (*(uint *)(*unaffected_register + string_length_counter) < *input_string_pointer)) {
      allocate_with_thread_operation_flags();
      system_allocator_002();
      unaff_SIL = 1;
    }
    string_length_counter = string_length_counter + 4;
    buffer_allocation_result = buffer_allocation_result - 1;
  } while (buffer_allocation_result != 0);
  return unaff_SIL;
}
unsigned char validate_memory_allocation(void)
{
  unsigned char unaff_SIL;
  return unaff_SIL;
}
unsigned long long
system_allocator_011(unsigned long long handle,long long *thread_operation_flags,long long *mutex_attr,uint mutex_type,char param_5)
{
  long long system_initialization_result;
  long long string_length_counter;
  uint buffer_allocation_result;
  ulong long buffer_allocation_result;
  ulong long buffer_allocation_result;
  long long string_length_counter;
  uint buffer_allocation_result;
  unsigned long long buffer_allocation_result;
  long long string_length_counter;
  long long system_initialization_result0;
  buffer_allocation_result = 0;
  system_initialization_result = mutex_attr[1];
  string_length_counter = *mutex_attr;
  buffer_allocation_result = thread_operation_flags[1] - *thread_operation_flags >> 3;
  if ((int)buffer_allocation_result != 0) {
    string_length_counter = 0;
    buffer_allocation_result = buffer_allocation_result & UINT32_MAX;
    do {
      buffer_allocation_result = 0;
      buffer_allocation_result = (uint)(system_initialization_result - string_length_counter >> 3);
      if (buffer_allocation_result != 0) {
        do {
          if (*(int *)(*(long long *)(*thread_operation_flags + string_length_counter) + 8) ==
              *(int *)(*(long long *)(*mutex_attr + buffer_allocation_result * 8) + 8)) goto label_;
          buffer_allocation_result = (int)buffer_allocation_result + 1;
          buffer_allocation_result = (ulong long)buffer_allocation_result;
        } while (buffer_allocation_result < buffer_allocation_result);
      }
      string_length_counter = *(long long *)(string_length_counter + *thread_operation_flags);
      *(uint *)(string_length_counter + STRING_BUFFER_SIZE) = *(uint *)(string_length_counter + STRING_BUFFER_SIZE) | mutex_type;
      if (((param_5 != '\0') && (*(int *)(string_length_counter + 0x8c) == 2)) &&
         (buffer_allocation_result = *(long long *)(string_length_counter + 0xc0) - *(long long *)(string_length_counter + 0xb8) >> 3, (int)buffer_allocation_result != 0))
      {
        system_initialization_result0 = 0;
        buffer_allocation_result = buffer_allocation_result & UINT32_MAX;
        do {
          system_allocator_003(handle,*(unsigned long long *)(*(long long *)(string_length_counter + 0xb8) + system_initialization_result0),mutex_type,
                        param_5);
          system_initialization_result0 = system_initialization_result0 + 8;
          buffer_allocation_result = buffer_allocation_result - 1;
        } while (buffer_allocation_result != 0);
      }
      buffer_allocation_result = 1;
label_:
      string_length_counter = string_length_counter + 8;
      buffer_allocation_result = buffer_allocation_result - 1;
    } while (buffer_allocation_result != 0);
  }
  return buffer_allocation_result;
}
unsigned char allocate_with_mutex(unsigned long long handle,unsigned long long thread_operation_flags,long long *mutex_attr)
{
  long long system_initialization_result;
  uint thread_operation_flags;
  ulong long in_RAX;
  ulong long buffer_allocation_result;
  long long string_length_counter;
  uint unaff_EDI;
  unsigned char in_R10B;
  long long *unaffected_register;
  uint unaffected_registerD;
  ulong long buffer_allocation_result;
  long long *in_stack_00000060;
  char in_stack_00000070;
  string_length_counter = 0;
  buffer_allocation_result = in_RAX & UINT32_MAX;
  do {
    buffer_allocation_result = 0;
    if (unaff_EDI != 0) {
      do {
        if (*(int *)(*(long long *)(*unaffected_register + string_length_counter) + 8) ==
            *(int *)(*(long long *)(*mutex_attr + buffer_allocation_result * 8) + 8)) goto label_;
        thread_operation_flags = (int)buffer_allocation_result + 1;
        buffer_allocation_result = (ulong long)thread_operation_flags;
      } while (thread_operation_flags < unaff_EDI);
    }
    system_initialization_result = *(long long *)(string_length_counter + *unaffected_register);
    *(uint *)(system_initialization_result + STRING_BUFFER_SIZE) = *(uint *)(system_initialization_result + STRING_BUFFER_SIZE) | unaffected_registerD;
    if (((in_stack_00000070 != '\0') && (*(int *)(system_initialization_result + 0x8c) == 2)) &&
       (buffer_allocation_result = *(long long *)(system_initialization_result + 0xc0) - *(long long *)(system_initialization_result + 0xb8) >> 3, (int)buffer_allocation_result != 0)) {
      buffer_allocation_result = buffer_allocation_result & UINT32_MAX;
      do {
        system_allocator_003();
        buffer_allocation_result = buffer_allocation_result - 1;
      } while (buffer_allocation_result != 0);
    }
    in_R10B = 1;
label_:
    string_length_counter = string_length_counter + 8;
    buffer_allocation_result = buffer_allocation_result - 1;
    mutex_attr = in_stack_00000060;
    if (buffer_allocation_result == 0) {
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
system_allocator_014(unsigned long long handle,long long *thread_operation_flags,unsigned long long *mutex_attr,unsigned int mutex_type,
             uint param_5)
{
  ulong long buffer_allocation_result;
  long long string_length_counter;
  long long string_length_counter;
  long long string_length_counter;
  long long string_length_counter;
  unsigned long long buffer_allocation_result;
  uint *input_string_pointer;
  buffer_allocation_result = 0;
  buffer_allocation_result = thread_operation_flags[1] - *thread_operation_flags >> 2;
  if ((int)buffer_allocation_result != 0) {
    string_length_counter = 0;
    buffer_allocation_result = buffer_allocation_result & UINT32_MAX;
    do {
      input_string_pointer = (uint *)*mutex_attr;
      string_length_counter = *thread_operation_flags;
      string_length_counter = (long long)mutex_attr[1] - (long long)input_string_pointer >> 2;
      if (0 < string_length_counter) {
        do {
          string_length_counter = string_length_counter >> 1;
          if (input_string_pointer[string_length_counter] < *(uint *)(string_length_counter + string_length_counter)) {
            input_string_pointer = input_string_pointer + string_length_counter + 1;
            string_length_counter = string_length_counter + (-1 - string_length_counter);
          }
          string_length_counter = string_length_counter;
        } while (0 < string_length_counter);
      }
      if ((input_string_pointer == (uint *)mutex_attr[1]) || (*(uint *)(string_length_counter + string_length_counter) < *input_string_pointer)) {
        string_length_counter = system_allocator_006(handle,*(unsigned int *)(string_length_counter + string_length_counter),mutex_type);
        buffer_allocation_result = 1;
        *(uint *)(string_length_counter + 8) = *(uint *)(string_length_counter + 8) | param_5;
      }
      string_length_counter = string_length_counter + 4;
      buffer_allocation_result = buffer_allocation_result - 1;
    } while (buffer_allocation_result != 0);
  }
  return buffer_allocation_result;
}
unsigned char validate_buffer_allocation(void)
{
  uint in_EAX;
  long long system_initialization_result;
  long long string_length_counter;
  long long string_length_counter;
  unsigned char unaff_SIL;
  ulong long buffer_allocation_result;
  uint *input_string_pointer;
  unsigned long long *unaffected_register;
  long long *unaffected_register;
  uint in_stack_00000070;
  string_length_counter = 0;
  buffer_allocation_result = (ulong long)in_EAX;
  do {
    input_string_pointer = (uint *)*unaffected_register;
    system_initialization_result = (long long)unaffected_register[1] - (long long)input_string_pointer >> 2;
    if (0 < system_initialization_result) {
      do {
        string_length_counter = system_initialization_result >> 1;
        if (input_string_pointer[string_length_counter] < *(uint *)(*unaffected_register + string_length_counter)) {
          input_string_pointer = input_string_pointer + string_length_counter + 1;
          string_length_counter = system_initialization_result + (-1 - string_length_counter);
        }
        system_initialization_result = string_length_counter;
      } while (0 < string_length_counter);
    }
    if ((input_string_pointer == (uint *)unaffected_register[1]) || (*(uint *)(*unaffected_register + string_length_counter) < *input_string_pointer)) {
      system_initialization_result = system_allocator_006();
      unaff_SIL = 1;
      *(uint *)(system_initialization_result + 8) = *(uint *)(system_initialization_result + 8) | in_stack_00000070;
    }
    string_length_counter = string_length_counter + 4;
    buffer_allocation_result = buffer_allocation_result - 1;
  } while (buffer_allocation_result != 0);
  return unaff_SIL;
}
unsigned char check_memory_bounds(void)
{
  unsigned char unaff_SIL;
  return unaff_SIL;
}
  data_1dc4331ba = data_1dc4331ba + unaff_BL;
  buffer_allocation_result = in(buffer_allocation_result);
  character_scan_pointer = (char *)((ulong long)buffer_allocation_result + 0x1c0042ed);
  *character_scan_pointer = *character_scan_pointer + (char)unaffected_registerDI + '\x04';
  out(buffer_allocation_result,(char)buffer_allocation_result);
  character_scan_pointer = (char *)((ulong long)buffer_allocation_result - 0x12);
  *character_scan_pointer = *character_scan_pointer + (char)thread_operation_flags;
  character_scan_pointer = (code *)swi(3);
  (*character_scan_pointer)();
  return;
}
      data_180d499e8 = 0;
      system_global_data_pointer = 6;
      strcpy_s(&data_180d499e8,config_path_buffer_size0,&data_180a3c074,str_len_param,buffer_allocation_result);
      system_crypto_002(system_execute_function);
      system_initialize_crypto_module(&data_180d499c8);
    }
  }
  (**(code **)(*system_global_data_pointer + 0x70))(system_global_data_pointer,&data_180d499d0);
  return;
}
unsigned int
system_finalizer_005(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_operation_flags;
  unsigned long long buffer_allocation_result;
  void *thread_stack_pointer;
  long long thread_stack_base_address;
  character_scan_pointer = *(code **)(*system_global_data_pointer + 0x70);
  // Original name: system_180a02fc8
      buffer_allocation_result = system_ui_005(&thread_stack_pointer, &g_ui_mutex_property_address_180a02fc8, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  thread_operation_flags = (*character_scan_pointer)(system_global_data_pointer,buffer_allocation_result,mutex_attr,mutex_type,1);
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_system_error();
  }
  return thread_operation_flags;
}
unsigned int
system_finalizer_006(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_operation_flags;
  unsigned long long buffer_allocation_result;
  void *thread_stack_pointer;
  long long thread_stack_base_address;
  character_scan_pointer = *(code **)(*system_global_data_pointer + 0x70);
  // Original name: system_180a02fa0
      buffer_allocation_result = system_ui_005(&thread_stack_pointer, &g_ui_mutex_type_address_180a02fa0, mutex_attr, mutex_type, 0, DEFAULT_THREAD_POOL_FLAG);
  thread_operation_flags = (*character_scan_pointer)(system_global_data_pointer,buffer_allocation_result,mutex_attr,mutex_type,1);
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_system_error();
  }
  return thread_operation_flags;
}
unsigned int
system_finalizer_007(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  code *character_scan_pointer;
  unsigned int thread_operation_flags;
  unsigned long long buffer_allocation_result;
  unsigned long long buffer_allocation_result;
  void *thread_stack_pointer;
  long long thread_stack_base_address;
  buffer_allocation_result = DEFAULT_THREAD_POOL_FLAG;
  character_scan_pointer = *(code **)(*system_global_data_pointer + 0x70);
  buffer_allocation_result = system_cleanup_007(&thread_stack_pointer);
  thread_operation_flags = (*character_scan_pointer)(system_global_data_pointer,buffer_allocation_result,mutex_attr,mutex_type,buffer_allocation_result);
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_system_error();
  }
  return thread_operation_flags;
}
    data_180d49c08 = 0;
    if (handle != 0) {
      string_length_counter = -1;
      do {
        string_length_counter = string_length_counter + 1;
      } while (*(char *)(handle + string_length_counter) != '\0');
      system_global_data_pointer = (unsigned int)string_length_counter;
      strcpy_s(&data_180d49c08,string_buffer_size_constant,handle);
    }
    system_crypto_002(system_execute_function);
    system_initialize_crypto_module(&data_180d49d08);
  }
  buffer_allocation_result = system_execute_function(system_global_data_pointer,0xe0,8,3,buffer_allocation_result);
  plong_stack_variable = alStack_30;
  // Original name: system_18045f210
      thread_stack_pointer = &g_stack_data_address_18045f210;
  thread_stack_pointer = &system_18045f200;
  psystem_initialization_result = (long long *)system_execute_function(buffer_allocation_result,alStack_30);
  plong_stack_variable = psystem_initialization_result;
  if (psystem_initialization_result != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result + 0x28))(psystem_initialization_result);
  }
  buffer_allocation_result = system_global_data_pointer;
  pplong_stack_variable = &plong_stack_variable;
  plong_stack_variable = psystem_initialization_result;
  if (psystem_initialization_result != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result + 0x28))(psystem_initialization_result);
  }
  register_event_callback(buffer_allocation_result,&plong_stack_variable);
  if (psystem_initialization_result != (long long *)0x0) {
    (**(code **)(*psystem_initialization_result + 0x38))(psystem_initialization_result);
  }
  return;
}
  system_data_initialization_flag = 1;
  system_global_data_pointer = string_buffer_size_constant;
  system_global_data_pointer = &g_threadString2;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = &g_threadString2;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  data_180c92588 = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_finalizer_009();
  system_initialization_result = 0x180c95bf8;
  string_length_counter = 0x17;
  do {
    func_0x00018013d940(system_initialization_result);
    system_initialization_result = system_initialization_result + STRING_BUFFER_SIZE;
    string_length_counter = string_length_counter + -1;
  } while (string_length_counter != 0);
  data_180c95bf0 = 0;
  _Mtx_init_in_situ(0x180c95d70,2,mutex_attr,mutex_type,buffer_allocation_result);
  system_global_data_pointer = UINT32_MAX;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0xffdc;
  data_180c95dd8 = 1;
  system_finalizer_008(&data_180c924d0);
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  network_system_initialized = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  render_system_initialized = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  audio_system_initialized = 1;
  system_execute_function(0x180c95de0);
  input_system_initialized = 1;
  system_global_data_pointer = 3;
  system_global_data_pointer = SYSTEM_CONFIG_BUFFER_SIZE_ZERO00000;
  system_global_data_pointer = 0x3f800000;
  system_global_data_pointer = 0;
  system_global_data_pointer = 1;
  system_global_data_pointer = &data_180be0000;
  system_global_data_pointer = 0;
  physics_system_initialized = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  thread_pool_backup_flag = 0;
  system_global_data_pointer = 0;
  ui_system_initialized = 1;
  system_global_data_pointer = 3;
  system_global_data_pointer = SYSTEM_CONFIG_BUFFER_SIZE_ZERO00000;
  system_global_data_pointer = 0x3f800000;
  system_global_data_pointer = 0;
  system_global_data_pointer = 1;
  system_global_data_pointer = &data_180be0000;
  system_global_data_pointer = 4;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  module_system_initialized = 1;
  system_global_data_pointer = 0;
  thread_pool_system_initialized = 1;
  system_global_data_pointer = 0;
  memory_system_initialized = 1;
  system_global_data_pointer = 0;
  configuration_system_initialized = 1;
  system_global_data_pointer = 0;
  resource_system_initialized = 1;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  network_system_backup_flag = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 3;
  render_system_backup_flag = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 4;
  system_global_data_pointer = SYSTEM_CONFIG_BUFFER_SIZE_ZERO00000;
  system_global_data_pointer = 0x3f800000;
  system_global_data_pointer = 0;
  system_global_data_pointer = 1;
  system_global_data_pointer = &data_180be0000;
  script_system_initialized = 1;
  system_global_data_pointer = 3;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  system_global_data_pointer = 0;
  security_system_initialized = 1;
  system_data_status_flag = 1;
  system_global_data_pointer = 0;
  system_data_control_flag = 1;
  return;
}
    thread_system_flag = '\x01';
    string_length_counter = system_thread_manager_004(&thread_stack_pointer,system_global_data_pointer + 0x2c0);
    input_string_pointer = &default_resource_string;
    if (*(void **)(string_length_counter + 8) != (void *)0x0) {
      input_string_pointer = *(void **)(string_length_counter + 8);
    }
    (**(code **)(system_initialization_result + 0x330))(*(unsigned int *)(system_global_data_pointer + STRING_BUFFER_SIZE),input_string_pointer);
    thread_stack_pointer = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_limit = 0;
    thread_stack_pointer = &g_threadString4;
  }
  plVar2 = (long long *)*handle;
  if (plVar2 != (long long *)0x0) {
    *(unsigned char *)((long long)plVar2 + 0xdd) = 0;
    (**(code **)(*plVar2 + 0xc0))();
    plong_stack_variable = (long long *)*handle;
    *handle = 0;
    if (plong_stack_variable != (long long *)0x0) {
      (**(code **)(*plong_stack_variable + 0x38))();
    }
  }
  *(float *)(system_global_data_pointer + config_path_buffer_size0) = 1.0 / (float)(int)handle[1];
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_pointer != (void *)0x0) {
    handle_system_error();
  }
  return;
}
unsigned long long * system_execute_function(unsigned long long *handle,int thread_operation_flags)
{
  long long *psystem_initialization_result;
  int thread_result_index;
  unsigned long long buffer_allocation_result;
  long long string_length_counter;
  int thread_result_index;
  unsigned long long *input_string_pointer;
  ulong long buffer_allocation_result;
  long long string_length_counter;
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  *handle = &system_180a1a2f0;
  string_length_counter = 0;
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
  handle[config_path_buffer_size] = 0;
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
  psystem_initialization_result = handle + 0x31;
  *psystem_initialization_result = 0;
  handle[0x32] = 0;
  handle[0x33] = 0;
  *(unsigned int *)(handle + 0x34) = 3;
  input_string_pointer = handle + 0x35;
  string_length_counter = 8;
  system_execute_function(input_string_pointer,0x28,8,&system_1804ce1a0,system_execute_function);
  _Mtx_init_in_situ(handle + 0x5d, STRING_BUFFER_SIZE_SECONDARY);
  thread_result_index = func_0x0001804ca2d0(&data_180c95fc8);
  if (thread_operation_flags < thread_result_index) {
    thread_result_index = thread_operation_flags;
  }
  *(int *)(handle + 0x67) = thread_result_index;
  handle[0x11] = (long long)thread_result_index;
  system_execute_function(handle + 0xd);
  handle[0x16] = (long long)*(int *)(handle + 0x67);
  if (handle[0x12] != 0) {
    handle_system_error();
  }
  handle[0x12] = 0;
  handle[0x14] = 1;
  handle[0x13] = 0;
  handle[0x15] = 0xffffffff;
  buffer_allocation_result = system_execute_function(system_global_data_pointer,(long long)*(int *)(handle + 0x67) * 0x48,0x18);
  handle[0x12] = buffer_allocation_result;
  handle[0x1b] = (long long)*(int *)(handle + 0x67);
  if (handle[0x17] != 0) {
    handle_system_error();
  }
  handle[0x17] = 0;
  handle[0x19] = 1;
  handle[0x18] = 0;
  handle[0x1a] = 0xffffffff;
  buffer_allocation_result = system_execute_function(system_global_data_pointer,(long long)*(int *)(handle + 0x67) * 0xc0,0x18);
  handle[0x17] = buffer_allocation_result;
  handle[0x2a] = (long long)*(int *)(handle + 0x67);
  if (handle[0x26] == 0) {
    handle[0x26] = 0;
    handle[0x28] = 1;
    handle[0x27] = 0;
    handle[0x29] = 0xffffffff;
    buffer_allocation_result = system_execute_function(system_global_data_pointer,(long long)*(int *)(handle + 0x67) << 4,0x18);
    handle[0x26] = buffer_allocation_result;
    handle[config_path_buffer_size] = (long long)*(int *)(handle + 0x67);
    system_execute_function(handle + 0x1c);
    handle[0x2f] = (long long)*(int *)(handle + 0x67);
    if (handle[0x2b] != 0) {
      handle_system_error();
    }
    handle[0x2b] = 0;
    handle[0x2d] = 1;
    handle[0x2c] = 0;
    handle[0x2e] = 0xffffffff;
    buffer_allocation_result = system_execute_function(system_global_data_pointer,(long long)*(int *)(handle + 0x67) << 4,0x18);
    handle[0x2b] = buffer_allocation_result;
    do {
      input_string_pointer[4] = (long long)*(int *)(handle + 0x67);
      system_execute_function(input_string_pointer);
      input_string_pointer = input_string_pointer + 5;
      string_length_counter = string_length_counter + -1;
    } while (string_length_counter != 0);
    handle[0x25] = (long long)*(int *)(handle + 0x67);
    if (handle[0x21] == 0) {
      handle[0x21] = 0;
      handle[0x23] = 1;
      handle[0x22] = 0;
      handle[0x24] = 0xffffffff;
      buffer_allocation_result = system_execute_function(system_global_data_pointer,(long long)*(int *)(handle + 0x67) * 0x88,0x18);
      handle[0x21] = buffer_allocation_result;
      buffer_allocation_result = (ulong long)*(int *)(handle + 0x67);
      string_length_counter = *psystem_initialization_result;
      if ((ulong long)(handle[0x33] - string_length_counter >> 3) < buffer_allocation_result) {
        if (buffer_allocation_result != 0) {
          string_length_counter = system_execute_function(system_global_data_pointer,buffer_allocation_result * 8,*(unsigned char *)(handle + 0x34));
          string_length_counter = *psystem_initialization_result;
        }
        if (string_length_counter != handle[0x32]) {
          memmove(string_length_counter,string_length_counter,handle[0x32] - string_length_counter);
        }
        if (string_length_counter != 0) {
          handle_system_error();
        }
        *psystem_initialization_result = string_length_counter;
        handle[0x32] = string_length_counter;
        handle[0x33] = string_length_counter + buffer_allocation_result * 8;
      }
      thread_result_index = *(int *)(system_global_data_pointer + 0xe00) + -1;
      thread_result_index = 0;
      if ((-1 < thread_result_index) && (thread_result_index = thread_result_index, 3 < thread_result_index)) {
        thread_result_index = 3;
      }
      float_variable = (float)thread_result_index * 0.33333334;
      float_variable = float_variable * 10.05 + 4.9500003;
      float_variable = float_variable * 2.9999998 + 4.5;
      float_variable = float_variable + float_variable;
      float_variable = float_variable + float_variable;
      float_variable = float_variable * 13.5 + 4.5;
      float_variable = float_variable + float_variable;
      float_variable = float_variable + float_variable;
      float_variable = float_variable * 37.5 + 12.5 + float_variable;
      float_variable = float_variable * 45.0 + 15.0 + float_variable;
      *(float *)(handle + 0x68) = float_variable * float_variable;
      *(float *)((long long)handle + 0x344) = float_variable * float_variable;
      *(float *)(handle + 0x69) = float_variable * float_variable;
      *(float *)((long long)handle + 0x34c) = float_variable * float_variable;
      *(float *)(handle + 0x6a) = float_variable * float_variable;
      *(float *)((long long)handle + 0x354) = float_variable * float_variable;
      *(float *)(handle + 0x6b) = float_variable * float_variable;
      *(unsigned int *)((long long)handle + 0x35c) = 0x7f7fffff;
      *(unsigned int *)((long long)handle + 0x33c) = 0;
      *(unsigned int *)(handle + 0x30) = 0;
      return handle;
    }
    handle_system_error();
  }
  handle_system_error();
}
unsigned long long initialize_graphics_context(unsigned long long handle,ulong long thread_operation_flags)
{
  system_execute_function();
  if ((thread_operation_flags & 1) != 0) {
    free(handle,0x360);
  }
  return handle;
}
      data_180c91d14 = 1;
    }
    else {
      buffer_allocation_result = (ulong long)data_180c91d14;
    }
    UNLOCK();
    if (byte_system_status) {
      applong_stack_variable[0] = aplong_stack_variable;
      aplong_stack_variable[0] = system_global_data_pointer;
      if (system_global_data_pointer != (long long *)0x0) {
        (**(code **)(*system_global_data_pointer + 0x28))();
      }
      buffer_allocation_result = system_execute_function(buffer_allocation_result,aplong_stack_variable);
    }
  }
  return buffer_allocation_result;
}
    data_180d49f6c = '\0';
    system_initialize_crypto_module(&data_180d49f68);
  }
  thread_operation_flags = *(unsigned long long *)(*(long long *)(*(long long *)(handle + 0x8a8) + 0x260) + config_path_buffer_size8);
  input_string_pointer = (unsigned int *)system_execute_function(thread_operation_flags,0,thread_operation_flags);
  stack_size_limit = *input_string_pointer;
  stack_size_limit = input_string_pointer[1];
  stack_size_limit = input_string_pointer[2];
  stack_size_limit = input_string_pointer[3];
  float_variable = *(float *)(thread_operation_flags + SYSTEM_CONFIG_BUFFER_SIZE_ZERO);
  float_variable = *(float *)(thread_operation_flags + SYSTEM_CONFIG_BUFFER_SIZE_FOUR);
  float_variable = *(float *)(thread_operation_flags + SYSTEM_CONFIG_BUFFER_SIZE_EIGHT);
  stack_size_limit = *(unsigned int *)(thread_operation_flags + SYSTEM_CONFIG_BUFFER_SIZE_TWELVE);
  float_variable = 1e+08;
  float_variable = 1e+08;
  fStack_180 = 1e+08;
  fStack_158 = 1e+08;
  fStack_154 = 1e+08;
  fStack_150 = 1e+08;
  stack_size_limit = 0;
  fStack_148 = -1e+08;
  fStack_144 = -1e+08;
  fStack_140 = -1e+08;
  stack_size_limit = 0;
  thread_result_index = *(char *)(handle + 0x858) + -1;
  system_initialization_result1 = (long long)thread_result_index;
  float_variable = -1e+08;
  float_variable = -1e+08;
  float_variable = -1e+08;
  buffer_allocation_result = 0;
  buffer_allocation_result = 0;
  if (-1 < thread_result_index) {
    stack_size_limit = 0x7f7fffff;
    stack_size_limit = 0x7f7fffff;
    system_initialization_result2 = system_initialization_result1 * 0x30;
    fStack_108 = float_variable;
    fStack_104 = float_variable;
    fStack_100 = float_variable;
    do {
      system_initialization_result0 = *(long long *)(handle + 0x850) + system_initialization_result2;
      system_char_variable = *(char *)(system_initialization_result0 + 0x2c);
      input_string_pointer = (unsigned int *)system_execute_function(thread_operation_flags,system_char_variable,thread_operation_flags);
      stack_size_limit = *input_string_pointer;
      stack_size_limit = input_string_pointer[1];
      stack_size_limit = input_string_pointer[2];
      stack_size_limit = input_string_pointer[3];
      pfloat_variable = (float *)(thread_operation_flags + ((long long)system_char_variable + SYSTEM_CONFIG_BUFFER_SIZE) * STRING_BUFFER_SIZE);
      float_variable = *pfloat_variable;
      float_variable = pfloat_variable[1];
      float_variable = pfloat_variable[2];
      fStack_cc = pfloat_variable[3];
      fStack_d8 = float_variable;
      fStack_d4 = float_variable;
      fStack_d0 = float_variable;
      pfloat_variable = (float *)system_execute_function(&stack_size_limit,auStack_c8,system_initialization_result0);
      fStack_170 = (float_variable + pfloat_variable[2]) - float_variable;
      fStack_174 = (float_variable + pfloat_variable[1]) - float_variable;
      fStack_178 = (float_variable + *pfloat_variable) - float_variable;
      system_execute_function(&stack_size_limit,&fStack_138,&fStack_178);
      pfloat_variable = (float *)system_execute_function(&stack_size_limit,auStack_b8,system_initialization_result0 + STRING_BUFFER_SIZE);
      fStack_160 = (float_variable + pfloat_variable[2]) - float_variable;
      fStack_164 = (float_variable + pfloat_variable[1]) - float_variable;
      fStack_168 = (float_variable + *pfloat_variable) - float_variable;
      system_execute_function(&stack_size_limit,&fStack_128,&fStack_168);
      float_variable = *(float *)(system_initialization_result0 + 0x24);
      float_variable = fStack_128;
      fStack_198 = fStack_138;
      if (fStack_138 < fStack_128) {
        float_variable = fStack_138;
        fStack_198 = fStack_128;
      }
      float_variable = fStack_134;
      fStack_194 = fStack_124;
      if (fStack_134 < fStack_124) {
        float_variable = fStack_124;
        fStack_194 = fStack_134;
      }
      fStack_190 = fStack_130;
      fStack_180 = fStack_120;
      if (fStack_130 < fStack_120) {
        fStack_190 = fStack_120;
        fStack_180 = fStack_130;
      }
      fStack_190 = fStack_190 + float_variable;
      fStack_194 = fStack_194 + float_variable;
      fStack_198 = fStack_198 + float_variable;
      fStack_180 = fStack_180 - float_variable;
      float_variable = float_variable - float_variable;
      float_variable = float_variable - float_variable;
      if (fStack_158 < float_variable) {
        float_variable = fStack_158;
      }
      if (fStack_154 < float_variable) {
        float_variable = fStack_154;
      }
      if (fStack_150 < fStack_180) {
        fStack_180 = fStack_150;
      }
      fStack_150 = fStack_180;
      stack_size_limit = stack_size_limit;
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
      stack_size_limit = stack_size_limit;
      system_initialization_result2 = system_initialization_result2 + -0x30;
      system_initialization_result1 = system_initialization_result1 + -1;
      float_variable = fStack_198;
      float_variable = fStack_194;
      float_variable = fStack_190;
      buffer_allocation_result = stack_size_limit;
      buffer_allocation_result = stack_size_limit;
      fStack_158 = float_variable;
      fStack_154 = float_variable;
    } while (-1 < system_initialization_result1);
  }
  *(unsigned long long *)(handle + 0x870) = 0x4cbebc204cbebc20;
  *(unsigned long long *)(handle + 0x878) = 0x7f7fffff4cbebc20;
  *(unsigned long long *)(handle + 0x880) = 0xccbebc20ccbebc20;
  *(unsigned long long *)(handle + 0x888) = 0x7f7fffffccbebc20;
  system_initialization_result1 = 0;
  *(unsigned int *)(handle + 0x8a0) = 0;
  *(unsigned long long *)(handle + 0x890) = 0;
  *(unsigned long long *)(handle + 0x898) = 0x7f7fffff00000000;
  fStack_198 = float_variable;
  if (*(float *)(handle + 0x870) < float_variable) {
    fStack_198 = *(float *)(handle + 0x870);
  }
  fStack_194 = float_variable;
  if (*(float *)(handle + 0x874) < float_variable) {
    fStack_194 = *(float *)(handle + 0x874);
  }
  fStack_190 = fStack_180;
  if (*(float *)(handle + 0x878) < fStack_180) {
    fStack_190 = *(float *)(handle + 0x878);
  }
  *(ulong long *)(handle + 0x870) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle + 0x878) = merge_32bit_values(stack_size_limit,fStack_190);
  fStack_198 = float_variable;
  if (float_variable < *(float *)(handle + 0x880)) {
    fStack_198 = *(float *)(handle + 0x880);
  }
  fStack_194 = float_variable;
  if (float_variable < *(float *)(handle + 0x884)) {
    fStack_194 = *(float *)(handle + 0x884);
  }
  fStack_190 = fStack_180;
  if (fStack_180 < *(float *)(handle + 0x888)) {
    fStack_190 = *(float *)(handle + 0x888);
  }
  *(ulong long *)(handle + 0x880) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle + 0x888) = merge_32bit_values(stack_size_limit,fStack_190);
  fStack_198 = float_variable;
  if (*(float *)(handle + 0x870) < float_variable) {
    fStack_198 = *(float *)(handle + 0x870);
  }
  fStack_194 = float_variable;
  if (*(float *)(handle + 0x874) < float_variable) {
    fStack_194 = *(float *)(handle + 0x874);
  }
  fStack_190 = float_variable;
  if (*(float *)(handle + 0x878) < float_variable) {
    fStack_190 = *(float *)(handle + 0x878);
  }
  *(ulong long *)(handle + 0x870) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle + 0x878) = merge_32bit_values(stack_size_limit,fStack_190);
  fStack_198 = float_variable;
  if (float_variable < *(float *)(handle + 0x880)) {
    fStack_198 = *(float *)(handle + 0x880);
  }
  fStack_194 = float_variable;
  if (float_variable < *(float *)(handle + 0x884)) {
    fStack_194 = *(float *)(handle + 0x884);
  }
  fStack_190 = float_variable;
  if (float_variable < *(float *)(handle + 0x888)) {
    fStack_190 = *(float *)(handle + 0x888);
  }
  *(ulong long *)(handle + 0x880) = merge_32bit_values(fStack_194,fStack_198);
  *(ulong long *)(handle + 0x888) = merge_32bit_values(stack_size_limit,fStack_190);
  if (*(long long *)(handle + 0x8a8) != 0) {
    system_initialization_result1 = *(long long *)(*(long long *)(handle + 0x8a8) + 0x260);
  }
  *(float *)(system_initialization_result1 + 0x218) = float_variable;
  *(float *)(system_initialization_result1 + 0x21c) = float_variable;
  *(float *)(system_initialization_result1 + 0x220) = fStack_180;
  *(unsigned int *)(system_initialization_result1 + 0x224) = buffer_allocation_result;
  *(float *)(system_initialization_result1 + 0x228) = float_variable;
  *(float *)(system_initialization_result1 + 0x22c) = float_variable;
  *(float *)(system_initialization_result1 + 0x230) = float_variable;
  *(unsigned int *)(system_initialization_result1 + 0x234) = buffer_allocation_result;
  pfloat_variable = *(float **)(handle + 0x860);
  if ((pfloat_variable != (float *)0x0) && (*(long long *)(handle + 0x868) != 0)) {
    if ((pfloat_variable[4] <= float_variable && float_variable != pfloat_variable[4]) ||
       ((pfloat_variable[5] <= float_variable && float_variable != pfloat_variable[5] || (pfloat_variable[6] <= float_variable && float_variable != pfloat_variable[6]))
       )) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfloat_variable = *(float **)(handle + 0x860);
      fStack_198 = float_variable;
      if (*pfloat_variable < float_variable) {
        fStack_198 = *pfloat_variable;
      }
      fStack_194 = float_variable;
      if (pfloat_variable[1] < float_variable) {
        fStack_194 = pfloat_variable[1];
      }
      fStack_190 = float_variable;
      if (pfloat_variable[2] < float_variable) {
        fStack_190 = pfloat_variable[2];
      }
      *(ulong long *)pfloat_variable = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_variable + 2) = merge_32bit_values(stack_size_limit,fStack_190);
      fStack_198 = float_variable;
      if (float_variable < pfloat_variable[4]) {
        fStack_198 = pfloat_variable[4];
      }
      fStack_194 = float_variable;
      if (float_variable < pfloat_variable[5]) {
        fStack_194 = pfloat_variable[5];
      }
      fStack_190 = float_variable;
      if (float_variable < pfloat_variable[6]) {
        fStack_190 = pfloat_variable[6];
      }
      *(ulong long *)(pfloat_variable + 4) = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_variable + 6) = merge_32bit_values(stack_size_limit,fStack_190);
      data_180d49f6c = '\0';
    }
    if (((float_variable < *pfloat_variable) || (float_variable < pfloat_variable[1])) || (fStack_180 < pfloat_variable[2])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfloat_variable = *(float **)(handle + 0x860);
      fStack_198 = float_variable;
      if (*pfloat_variable < float_variable) {
        fStack_198 = *pfloat_variable;
      }
      fStack_194 = float_variable;
      if (pfloat_variable[1] < float_variable) {
        fStack_194 = pfloat_variable[1];
      }
      fStack_190 = fStack_180;
      if (pfloat_variable[2] < fStack_180) {
        fStack_190 = pfloat_variable[2];
      }
      *(ulong long *)pfloat_variable = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_variable + 2) = merge_32bit_values(stack_size_limit,fStack_190);
      fStack_198 = float_variable;
      if (float_variable < pfloat_variable[4]) {
        fStack_198 = pfloat_variable[4];
      }
      fStack_194 = float_variable;
      if (float_variable < pfloat_variable[5]) {
        fStack_194 = pfloat_variable[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfloat_variable[6]) {
        fStack_190 = pfloat_variable[6];
      }
      *(ulong long *)(pfloat_variable + 4) = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_variable + 6) = merge_32bit_values(stack_size_limit,fStack_190);
      data_180d49f6c = '\0';
    }
    pfloat_variable = *(float **)(handle + 0x868);
    if (((pfloat_variable[4] <= float_variable && float_variable != pfloat_variable[4]) ||
        (pfloat_variable[5] <= float_variable && float_variable != pfloat_variable[5])) ||
       (pfloat_variable[6] <= float_variable && float_variable != pfloat_variable[6])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfloat_variable = *(float **)(handle + 0x868);
      fStack_198 = float_variable;
      if (*pfloat_variable < float_variable) {
        fStack_198 = *pfloat_variable;
      }
      fStack_194 = float_variable;
      if (pfloat_variable[1] < float_variable) {
        fStack_194 = pfloat_variable[1];
      }
      fStack_190 = float_variable;
      if (pfloat_variable[2] < float_variable) {
        fStack_190 = pfloat_variable[2];
      }
      *(ulong long *)pfloat_variable = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_variable + 2) = merge_32bit_values(stack_size_limit,fStack_190);
      fStack_198 = float_variable;
      if (float_variable < pfloat_variable[4]) {
        fStack_198 = pfloat_variable[4];
      }
      fStack_194 = float_variable;
      if (float_variable < pfloat_variable[5]) {
        fStack_194 = pfloat_variable[5];
      }
      fStack_190 = float_variable;
      if (float_variable < pfloat_variable[6]) {
        fStack_190 = pfloat_variable[6];
      }
      *(ulong long *)(pfloat_variable + 4) = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_variable + 6) = merge_32bit_values(stack_size_limit,fStack_190);
      data_180d49f6c = '\0';
    }
    if (((float_variable < *pfloat_variable) || (float_variable < pfloat_variable[1])) || (fStack_180 < pfloat_variable[2])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfloat_variable = *(float **)(handle + 0x868);
      fStack_198 = float_variable;
      if (*pfloat_variable < float_variable) {
        fStack_198 = *pfloat_variable;
      }
      fStack_194 = float_variable;
      if (pfloat_variable[1] < float_variable) {
        fStack_194 = pfloat_variable[1];
      }
      fStack_190 = fStack_180;
      if (pfloat_variable[2] < fStack_180) {
        fStack_190 = pfloat_variable[2];
      }
      *(ulong long *)pfloat_variable = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_variable + 2) = merge_32bit_values(stack_size_limit,fStack_190);
      fStack_198 = float_variable;
      if (float_variable < pfloat_variable[4]) {
        fStack_198 = pfloat_variable[4];
      }
      fStack_194 = float_variable;
      if (float_variable < pfloat_variable[5]) {
        fStack_194 = pfloat_variable[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfloat_variable[6]) {
        fStack_190 = pfloat_variable[6];
      }
      *(ulong long *)(pfloat_variable + 4) = merge_32bit_values(fStack_194,fStack_198);
      *(ulong long *)(pfloat_variable + 6) = merge_32bit_values(stack_size_limit,fStack_190);
      data_180d49f6c = '\0';
    }
  }
  return;
}
        data_180d49f98 = 0;
        system_global_data_pointer = 8;
        strcpy_s(&data_180d49f98, SYSTEM_CONFIG_BUFFER_SIZE, &system_180a353b8);
        system_crypto_002(system_execute_function);
        system_initialize_crypto_module(&data_180d49f70);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(system_global_data_pointer,&data_180d49f80);
    return;
  }
  if (-1 < handle) {
    if (handle < (int)((system_global_data_pointer - system_global_data_pointer) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(system_global_data_pointer,(long long)handle * 0x68 + system_global_data_pointer);
      return;
    }
  }
  if (*(int *)(*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
              0x48) < system_global_data_pointer) {
    system_crypto_004(&data_180d49fd8);
    if (system_global_data_pointer == -1) {
      resource_template_ptr = &g_defaultDataTemplate;
      system_global_data_pointer = &data_180d49ff8;
      data_180d49ff8 = 0;
      system_global_data_pointer = 0;
      strcpy_s(&data_180d49ff8, SYSTEM_CONFIG_BUFFER_SIZE, &default_resource_string);
      system_crypto_002(system_execute_function);
      system_initialize_crypto_module(&data_180d49fd8);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(system_global_data_pointer,&data_180d49fe0);
  return;
}
// 处理配置参数验证函数
int validate_config_parameters(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long mutex_attr,unsigned long long mutex_type)
{
  int thread_result_index;
  long long string_length_counter;
  long long string_length_counter;
  void *input_string_pointer;
  void *thread_stack_pointer;
  long long thread_stack_base_address;
  int thread_priority_level;
  create_thread_context(&thread_stack_pointer,handle,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  string_length_counter = thread_stack_base_address;
  if (thread_priority_level == STRING_BUFFER_SIZE) {
    thread_result_index = strcmp(thread_stack_base_address,&g_empty_string_const);
    if (thread_result_index == 0) goto label_;
    thread_result_index = strcmp(string_length_counter,&g_null_string_const);
    if (thread_result_index == 0) {
      thread_result_index = 100;
      goto label_;
    }
    input_string_pointer = &g_string_buffer_ptr;
label_:
    thread_result_index = strcmp(string_length_counter,input_string_pointer);
    if (thread_result_index != 0) {
label_:
      thread_result_index = 0;
      goto label_;
    }
  }
  else {
    if (thread_priority_level == 0x15) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a389d8g_config_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0x30;
        goto label_;
      }
label_:
      thread_result_index = strcmp(string_length_counter,&system_180a38aa8g_system_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0xb0;
        goto label_;
      }
label_:
      thread_result_index = strcmp(string_length_counter,&system_180a38ac0g_temp_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0xd4;
        goto label_;
      }
label_:
      input_string_pointer = &system_180a38ba0;
      goto label_;
    }
    if (thread_priority_level == 0x1b) {
      input_string_pointer = &system_180a38a20;
      goto label_;
    }
    if (thread_priority_level == 0xd) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a38978);
      if (thread_result_index == 0) {
        thread_result_index = 4;
        goto label_;
      }
label_:
      input_string_pointer = &system_180a38c98;
      goto label_;
    }
    if (thread_priority_level == 0x1a) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a38958g_log_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0x1c;
        goto label_;
      }
label_:
      thread_result_index = strcmp(string_length_counter,&system_180a38c08);
      if (thread_result_index == 0) {
        thread_result_index = 0x18;
        goto label_;
      }
label_:
      thread_result_index = strcmp(string_length_counter,&system_180a38ea0);
      if (thread_result_index == 0) {
        thread_result_index = 0x554;
        goto label_;
      }
      goto label_;
    }
    if (thread_priority_level == config_path_buffer_size) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a389b0g_save_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0x30;
        goto label_;
      }
      goto label_;
    }
    if (thread_priority_level == 0x24) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a38988);
      if (thread_result_index == 0) {
        thread_result_index = 0x12;
        goto label_;
      }
      goto label_;
    }
    if (thread_priority_level == 0x15) goto label_;
    if (thread_priority_level == 0x1f) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a38a88g_data_path_string);
      if (thread_result_index == 0) {
        thread_result_index = 0x48;
        goto label_;
      }
label_:
      thread_result_index = strcmp(string_length_counter,&system_180a38d38);
      if (thread_result_index == 0) {
        thread_result_index = 1;
        goto label_;
      }
      goto label_;
    }
    if (thread_priority_level == 10) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a38ad8);
      if (thread_result_index == 0) {
        thread_result_index = 8;
        goto label_;
      }
label_:
      thread_result_index = strcmp(string_length_counter,&system_180a38a78);
      if (thread_result_index == 0) {
        thread_result_index = 4;
        goto label_;
      }
label_:
      input_string_pointer = &system_180a38ec0;
      goto label_;
    }
    if (thread_priority_level == 0x15) goto label_;
    if (thread_priority_level == 0x16) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a38a48);
      if (thread_result_index == 0) {
        thread_result_index = 0x14;
        goto label_;
      }
label_:
      thread_result_index = strcmp(string_length_counter,&system_180a38b48);
      if (thread_result_index == 0) {
        thread_result_index = 0x568;
        goto label_;
      }
      thread_result_index = strcmp(string_length_counter,&system_180a38c40);
      if (thread_result_index == 0) {
        thread_result_index = STRING_BUFFER_SIZE;
        goto label_;
      }
      thread_result_index = strcmp(string_length_counter,&system_180a38ca8);
      if (thread_result_index == 0) {
        thread_result_index = 0x28;
        goto label_;
      }
      thread_result_index = strcmp(string_length_counter,&system_180a38e38);
      if (thread_result_index == 0) {
        thread_result_index = SYSTEM_CONFIG_BUFFER_SIZE;
        goto label_;
      }
      goto label_;
    }
    if (thread_priority_level == 4) {
      string_length_counter = 0;
      do {
        string_length_counter = string_length_counter + 1;
        if (*(char *)(thread_stack_base_address + string_length_counter) != (&system_180a38a3c)[string_length_counter]) goto label_;
        string_length_counter = string_length_counter;
      } while (string_length_counter != 5);
      thread_result_index = 200;
      goto label_;
    }
    if (thread_priority_level == 10) goto label_;
    if (thread_priority_level == 0x12) {
      thread_result_index = strcmp(thread_stack_base_address,&system_180a38a60);
      if (thread_result_index == 0) {
        thread_result_index = 0x58;
        goto label_;
      }
      goto label_;
    }
    if (thread_priority_level != 0x13) {
      if (thread_priority_level == 0x17) {
        thread_result_index = strcmp(thread_stack_base_address,&system_180a38bb8);
        if (thread_result_index == 0) {
          thread_result_index = 1;
          goto label_;
        }
label_:
        input_string_pointer = &system_180a38e78;
label_:
        thread_result_index = strcmp(string_length_counter,input_string_pointer);
        if (thread_result_index == 0) {
label_:
          thread_result_index = 0xc;
          goto label_;
        }
      }
      else {
        if (thread_priority_level == 0x15) goto label_;
        if (thread_priority_level == 0x26) {
          thread_result_index = strcmp(thread_stack_base_address,&system_180a38b20);
          if (thread_result_index == 0) {
            thread_result_index = 0xa8;
            goto label_;
          }
        }
        else if (thread_priority_level == 0x34) {
          thread_result_index = strcmp(thread_stack_base_address,&system_180a38ae8);
          if (thread_result_index == 0) {
            thread_result_index = 0x14;
            goto label_;
          }
        }
        else {
          if (thread_priority_level != 0xf) {
            if (thread_priority_level == 0x16) goto label_;
            if (thread_priority_level == 0x18) {
              thread_result_index = strcmp(thread_stack_base_address,&system_180a38c78);
              if ((thread_result_index == 0) || (thread_result_index = strcmp(string_length_counter,&system_180a38c58), thread_result_index == 0))
              goto label_;
              thread_result_index = strcmp(string_length_counter,&system_180a38be8);
              if (thread_result_index != 0) {
                input_string_pointer = &system_180a38d98;
                goto label_;
              }
              goto label_;
            }
            if (thread_priority_level == 7) {
              string_length_counter = 0;
              do {
                string_length_counter = string_length_counter;
                if (*(char *)(thread_stack_base_address + string_length_counter) != (&system_180a38be0)[string_length_counter]) goto label_;
                string_length_counter = string_length_counter + 1;
              } while (string_length_counter + 1 != 8);
              thread_result_index = (int)string_length_counter + -6;
              goto label_;
            }
            if (thread_priority_level == 0xc) {
              thread_result_index = strcmp(thread_stack_base_address,&system_180a38bd0);
              if (thread_result_index == 0) {
                thread_result_index = 0x68;
                goto label_;
              }
label_:
              thread_result_index = strcmp(string_length_counter,&system_180a38e50);
              if (thread_result_index == 0) {
                thread_result_index = 4;
                goto label_;
              }
              thread_result_index = strcmp(string_length_counter,&system_180a38f30);
              if (thread_result_index == 0) {
                thread_result_index = 8;
                goto label_;
              }
              goto label_;
            }
            if (thread_priority_level == 0x1a) goto label_;
            if (thread_priority_level == 3) {
              thread_result_index = 4;
              string_length_counter = 0;
              do {
                string_length_counter = string_length_counter + 1;
                if (*(char *)(thread_stack_base_address + string_length_counter) != (&system_180a29944)[string_length_counter]) goto label_;
                string_length_counter = string_length_counter;
              } while (string_length_counter != 4);
              goto label_;
            }
            if (thread_priority_level == 0xf) goto label_;
            if (thread_priority_level == 0x23) {
              thread_result_index = strcmp(thread_stack_base_address,&system_180a38d58);
              if (thread_result_index == 0) {
                thread_result_index = 0x28;
                goto label_;
              }
label_:
              thread_result_index = strcmp(string_length_counter,&system_180a38cc0);
              if (thread_result_index == 0) {
                thread_result_index = 0x18;
                goto label_;
              }
              goto label_;
            }
            if (thread_priority_level == 0x1f) goto label_;
            if (thread_priority_level == 0xd) goto label_;
            if (thread_priority_level == 0x21) {
              input_string_pointer = &system_180a38ce8;
              goto label_;
            }
            if (thread_priority_level == 0x23) goto label_;
            if (thread_priority_level == 0xf) goto label_;
            if (thread_priority_level == 0xb) {
              thread_result_index = strcmp(thread_stack_base_address,&system_180a38dd8);
              if (thread_result_index == 0) {
                thread_result_index = 0x248;
                goto label_;
              }
label_:
              thread_result_index = strcmp(string_length_counter,&system_180a38dc8);
              if (thread_result_index == 0) {
                thread_result_index = 4;
                goto label_;
              }
label_:
              thread_result_index = strcmp(string_length_counter,&system_180a38e90);
              if (thread_result_index == 0) {
                thread_result_index = 4;
                goto label_;
              }
            }
            else {
              if (thread_priority_level == 0x11) {
                thread_result_index = strcmp(thread_stack_base_address,&system_180a38e10);
                if (thread_result_index == 0) goto label_;
                thread_result_index = strcmp(string_length_counter,&system_180a38df8);
                if (thread_result_index == 0) {
                  thread_result_index = 0xa0;
                  goto label_;
                }
                input_string_pointer = &system_180a38d80;
                goto label_;
              }
              if (thread_priority_level == 0xb) goto label_;
              if (thread_priority_level == 0xf) goto label_;
              if (thread_priority_level == 0xb) goto label_;
              if (thread_priority_level == 0x17) goto label_;
              if (thread_priority_level == 10) goto label_;
              if (thread_priority_level == 0x1a) goto label_;
              if (thread_priority_level != 0xb) {
                if (thread_priority_level == 0xc) goto label_;
                if (thread_priority_level != 0x19) goto label_;
                input_string_pointer = &system_180a38f10;
                goto label_;
              }
            }
            input_string_pointer = &system_180a38e28;
            goto label_;
          }
          thread_result_index = strcmp(thread_stack_base_address,&system_180a38b60);
          if (thread_result_index == 0) {
            thread_result_index = 0x214;
            goto label_;
          }
label_:
          thread_result_index = strcmp(string_length_counter,&system_180a38d10);
          if (thread_result_index == 0) {
            thread_result_index = config_path_buffer_size28;
            goto label_;
          }
label_:
          thread_result_index = strcmp(string_length_counter,&system_180a38de8);
          if (thread_result_index == 0) {
            thread_result_index = 4;
            goto label_;
          }
label_:
          thread_result_index = strcmp(string_length_counter,&system_180a38db8);
          if (thread_result_index == 0) {
            thread_result_index = 0x50;
            goto label_;
          }
        }
      }
      goto label_;
    }
    thread_result_index = strcmp(thread_stack_base_address,&system_180a38b88);
    if (thread_result_index == 0) {
      thread_result_index = 1;
      goto label_;
    }
    thread_result_index = strcmp(string_length_counter,&system_180a38b70);
    if (thread_result_index == 0) {
      thread_result_index = 3;
      goto label_;
    }
    thread_result_index = strcmp(string_length_counter,&system_180a38d20);
    if (thread_result_index != 0) {
      input_string_pointer = &system_180a38e60;
      goto label_;
    }
  }
label_:
  thread_result_index = 4;
label_:
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_base_address == 0) {
    return thread_result_index;
  }
  handle_system_error();
}
unsigned long long
system_execute_function(unsigned long long handle,unsigned long long thread_operation_flags,unsigned char mutex_attr,unsigned long long mutex_type)
{
  char system_char_variable;
  void *pthread_operation_flags;
  unsigned long long buffer_allocation_result;
  unsigned char auStack_50 [32];
  unsigned char auStack_30 [40];
  create_thread_context(auStack_30,handle,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  create_thread_context(auStack_50,thread_operation_flags);
  system_char_variable = validate_handle_parameters(auStack_30,&system_180a389d8g_config_path_string,1);
  if (system_char_variable == '\0') {
    system_char_variable = validate_handle_parameters(auStack_30,&system_180a38a08,1);
    if (system_char_variable == '\0') {
      system_char_variable = validate_handle_parameters(auStack_30,&system_180a38958g_log_path_string,1);
      if (system_char_variable == '\0') {
        system_char_variable = validate_handle_parameters(auStack_30,&system_180a389b0g_save_path_string,1);
        if (system_char_variable == '\0') {
          system_char_variable = validate_handle_parameters(auStack_30,&system_180a38988,1);
          if (system_char_variable == '\0') {
            system_char_variable = validate_handle_parameters(auStack_30,&system_180a38aa8g_system_path_string,1);
            if (system_char_variable == '\0') {
              system_char_variable = validate_handle_parameters(auStack_30,&system_180a38a88g_data_path_string,1);
              if (system_char_variable == '\0') {
                system_char_variable = validate_handle_parameters(auStack_30,&system_180a38ac0g_temp_path_string,1);
                if (system_char_variable == '\0') {
                  system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38a48);
                  if (system_char_variable == '\0') {
                    system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38a3c);
                    if (system_char_variable == '\0') {
                      system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38a60);
                      if (system_char_variable == '\0') {
                        system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38b70);
                        if (system_char_variable == '\0') {
                          system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38b20);
                          if (system_char_variable == '\0') {
                            system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38ae8);
                            if (system_char_variable == '\0') {
                              system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38b60);
                              if (system_char_variable == '\0') {
                                system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38b48);
                                if (system_char_variable == '\0') {
                                  system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38c40);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38c78);
                                    if (system_char_variable == '\0') {
                                      system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38c58);
                                      if (system_char_variable == '\0') {
                                        system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38bd0);
                                        if (system_char_variable == '\0') {
                                          system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38c08);
                                          if (system_char_variable == '\0') {
                                            system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a29944);
                                            if (system_char_variable == '\0') {
                                              system_char_variable = func_0x0001800a1eb0(auStack_30,&system_180a38d10)
                                              ;
                                              if (system_char_variable == '\0') {
                                                system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                            &system_180a38d58);
                                                if (system_char_variable == '\0') {
                                                  system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                              &system_180a38ca8);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                &system_180a38ce8);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                  &system_180a38cc0);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                  &system_180a38dd8);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                    &system_180a38df8);
                                                        if (system_char_variable == '\0') {
                                                          system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                      &system_180a38db8
                                                                                     );
                                                          if (system_char_variable == '\0') {
                                                            system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                        &
                                                  system_180a38e78);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_30,
                                                                                &system_180a38ea0);
                                                    if (system_char_variable != '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ac00);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3acf8);
                                                        if (system_char_variable != '\0') goto label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3acd8);
                                                        if (system_char_variable != '\0') goto label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ad30);
                                                        if (system_char_variable != '\0') goto label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &data_180a06a48);
                                                        if (system_char_variable != '\0') goto label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ad18);
                                                        if (system_char_variable != '\0') goto label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ac90);
                                                        if (system_char_variable != '\0') goto label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ac80);
                                                        if (system_char_variable != '\0') goto label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3acc8);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x21c;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3aca8);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x41c;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ade8);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x41d;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3add0);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x420;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ae18);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x424;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ae00);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x428;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ad88);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x430;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a29da8);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x438;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ad60);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x439;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3adb8);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x43c;
                                                          goto label_;
                                                        }
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3ada0);
                                                        if (system_char_variable != '\0') {
                                                          buffer_allocation_result = 0x440;
                                                          goto label_;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3abe0);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a1029c);
                                                      if (system_char_variable == '\0') {
                                                        pthread_operation_flags = &system_180a3ac10;
                                                        goto label_;
                                                      }
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3ac48);
                                                    if (system_char_variable == '\0') {
                                                      pthread_operation_flags = &system_180a3abe8;
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a960);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab28);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a39f78);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab18);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a39fb0);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab50);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab38);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 100;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aae8);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aad8);
                                                      if (system_char_variable != '\0') {
label_:
                                                        buffer_allocation_result = 0x6c;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab08);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aaf8);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x74;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3abb0);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aba0);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3abd0);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3abc0);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x84;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab70);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab60);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab90);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ab80);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ac30);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x96;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ac18);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3ac68);
                                                      if (system_char_variable != '\0') goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a8b0);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a850);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a830);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a870);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a860);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a04be8);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a938);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a920);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a960);
                                                      if (system_char_variable != '\0') goto label_;
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a948);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0xf8;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a8f0);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0xfc;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a8d8);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = string_buffer_size_constant;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a910);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x110;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a900);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x114;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9d8);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x118;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9c8);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x11c;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9f0);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x11e;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9e0);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x120;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a988);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x130;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a2a000);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x170;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a21a30);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x174;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a970);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x178;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a9b0);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x188;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a998);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x198;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa98);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x19c;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa70);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x1a0;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aac0);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x220;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aab0);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x230;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa20);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x234;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa08);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x238;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa50);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x23c;
                                                        goto label_;
                                                      }
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3aa38);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 0x240;
                                                        goto label_;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a650);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a640);
                                                      if (system_char_variable != '\0') {
                                                        buffer_allocation_result = 4;
                                                        goto label_;
                                                      }
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a800);
                                                    if (system_char_variable == '\0') {
                                                      system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                  &system_180a3a7a8);
                                                      if (system_char_variable == '\0') {
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3a798);
                                                        if (system_char_variable != '\0') goto label_;
                                                        system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                    &system_180a3a7d0);
                                                        if (system_char_variable == '\0') {
                                                          system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                      &system_180a3a7b8
                                                                                     );
                                                          if (system_char_variable != '\0') goto label_;
                                                          system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                      &system_180a3a898
                                                                                     );
                                                          if (system_char_variable == '\0') {
                                                            system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                        &
                                                  system_180a3a880);
                                                  if (system_char_variable != '\0') goto label_;
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a8c0);
                                                  if (system_char_variable != '\0') goto label_;
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &data_180a0ba58);
                                                  if (system_char_variable != '\0') goto label_;
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a5a8);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a2e2bc);
                                                    if (system_char_variable != '\0') goto label_;
                                                    pthread_operation_flags = &system_180a2e9e0;
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
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a720);
                                                  if (system_char_variable == '\0') {
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a754);
                                                    if (system_char_variable != '\0') goto label_;
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a748);
                                                    if (system_char_variable != '\0') {
label_:
                                                      buffer_allocation_result = 0xc;
                                                      goto label_;
                                                    }
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a7f0);
                                                    if (system_char_variable != '\0') {
label_:
                                                      buffer_allocation_result = 0x14;
                                                      goto label_;
                                                    }
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                                &system_180a3a7e0);
                                                    if (system_char_variable != '\0') {
label_:
                                                      buffer_allocation_result = 0x1c;
                                                      goto label_;
                                                    }
                                                    pthread_operation_flags = &system_180a3a820;
label_:
                                                    system_char_variable = func_0x0001800a1eb0(auStack_50,pthread_operation_flags);
                                                    if (system_char_variable != '\0') goto label_;
                                                  }
                                                }
                                              }
                                              else {
                                                system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                            &system_180a1a470);
                                                if (system_char_variable == '\0') {
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a758);
                                                  if (system_char_variable != '\0') {
                                                    buffer_allocation_result = config_path_buffer_size00;
                                                    goto label_;
                                                  }
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a788);
                                                  if (system_char_variable != '\0') {
                                                    buffer_allocation_result = config_path_buffer_size10;
                                                    goto label_;
                                                  }
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a778);
                                                  if (system_char_variable != '\0') {
                                                    buffer_allocation_result = config_path_buffer_size20;
                                                    goto label_;
                                                  }
                                                  system_char_variable = func_0x0001800a1eb0(auStack_50,
                                                                              &system_180a3a738);
                                                  if (system_char_variable != '\0') {
                                                    buffer_allocation_result = config_path_buffer_size24;
                                                    goto label_;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
label_:
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a650);
                                            if (system_char_variable == '\0') {
                                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a640)
                                              ;
                                              if (system_char_variable == '\0') {
                                                pthread_operation_flags = &system_180a3a5c0;
                                                goto label_;
                                              }
                                              goto label_;
                                            }
                                          }
                                        }
                                        else {
                                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a6c0);
                                          if (system_char_variable == '\0') {
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a708);
                                            if (system_char_variable != '\0') goto label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a6f8);
                                            if (system_char_variable != '\0') goto label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ee0);
                                            if (system_char_variable != '\0') {
label_:
                                              buffer_allocation_result = 0x24;
                                              goto label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39e48);
                                            if (system_char_variable != '\0') goto label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39dd0);
                                            if (system_char_variable != '\0') {
label_:
                                              buffer_allocation_result = 0x2c;
                                              goto label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39df0);
                                            if (system_char_variable != '\0') goto label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39fb0);
                                            if (system_char_variable != '\0') {
label_:
                                              buffer_allocation_result = 0x34;
                                              goto label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a670);
                                            if (system_char_variable != '\0') goto label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a660);
                                            if (system_char_variable != '\0') {
label_:
                                              buffer_allocation_result = 0x3c;
                                              goto label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a6a0);
                                            if (system_char_variable != '\0') {
label_:
                                              buffer_allocation_result = 0x50;
                                              goto label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a688);
                                            if (system_char_variable != '\0') goto label_;
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39d58);
                                            if (system_char_variable != '\0') {
label_:
                                              buffer_allocation_result = 0x5c;
                                              goto label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f18);
                                            if (system_char_variable != '\0') {
label_:
                                              buffer_allocation_result = 0x60;
                                              goto label_;
                                            }
                                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a768);
                                            if (system_char_variable != '\0') {
                                              buffer_allocation_result = 0x61;
                                              goto label_;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a650);
                                        if (system_char_variable == '\0') {
                                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a640);
                                          if (system_char_variable == '\0') {
label_:
                                            pthread_operation_flags = &system_180a3a5c0;
                                            goto label_;
                                          }
                                          goto label_;
                                        }
                                      }
                                    }
                                    else {
                                      system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a600);
                                      if (system_char_variable == '\0') {
                                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a5e0);
                                        if (system_char_variable != '\0') goto label_;
                                        pthread_operation_flags = &system_180a3a6e0;
label_:
                                        system_char_variable = func_0x0001800a1eb0(auStack_50,pthread_operation_flags);
                                        if (system_char_variable != '\0') goto label_;
                                      }
                                    }
                                  }
                                  else {
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a650);
                                    if (system_char_variable == '\0') {
                                      system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a640);
                                      if (system_char_variable != '\0') goto label_;
                                      system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a5d0);
                                      if (system_char_variable != '\0') goto label_;
                                      system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a5c0);
                                      if (system_char_variable != '\0') goto label_;
                                    }
                                  }
                                }
                                else {
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a2f8);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a2e8);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a310);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a300);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a418);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a408);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a440);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a428);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a3d0);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a3c0);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a3f8);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a3e8);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a4c0);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a4a8);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a4e0);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a4d0);
                                    if (system_char_variable != '\0') goto label_;
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a468);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x53c;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a458);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x540;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a498);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x544;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a478);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x548;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a560);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x54c;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a540);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x550;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a5a8);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x554;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a580);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x558;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a508);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x55c;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a4f8);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x560;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a530);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x564;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a520);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x565;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a630);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x566;
                                      goto label_;
                                    }
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a620);
                                    if (system_char_variable != '\0') {
                                      buffer_allocation_result = 0x567;
                                      goto label_;
                                    }
                                  }
                                }
                              }
                              else {
                                system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a2e1d8);
                                if (system_char_variable == '\0') {
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a2e1e8);
                                  if (system_char_variable != '\0') goto label_;
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a2e158);
                                  if (system_char_variable != '\0') goto label_;
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a2e150);
                                  if (system_char_variable != '\0') goto label_;
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a0696c);
                                  if (system_char_variable != '\0') goto label_;
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a0ae28);
                                  if (system_char_variable != '\0') goto label_;
                                }
                              }
                            }
                            else {
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a260);
                              if (system_char_variable == '\0') {
                                system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a348);
                                if (system_char_variable == '\0') {
                                  system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a320);
                                  if (system_char_variable == '\0') {
                                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a398);
                                    if (system_char_variable == '\0') {
                                      pthread_operation_flags = &system_180a3a370;
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
                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a068);
                            if (system_char_variable == '\0') {
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a058);
                              if (system_char_variable != '\0') {
label_:
                                buffer_allocation_result = 4;
                                goto label_;
                              }
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39fe0);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39fc0);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a018);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ff8);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a118);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a0f0);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a158);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a140);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a098);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a078);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a0d0);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a0b8);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a1e8);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a1c8);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a220);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a208);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a188);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a178);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a1b8);
                              if (system_char_variable != '\0') {
label_:
                                buffer_allocation_result = 0x70;
                                goto label_;
                              }
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a1a8);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a2b0);
                              if (system_char_variable != '\0') {
label_:
                                buffer_allocation_result = 0x80;
                                goto label_;
                              }
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a298);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a2d8);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a2c0);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a250);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a240);
                              if (system_char_variable != '\0') goto label_;
                              system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a278);
                              if (system_char_variable != '\0') goto label_;
                            }
                          }
                        }
                        else {
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f50);
                          if (system_char_variable == '\0') {
                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a048);
                            if (system_char_variable != '\0') goto label_;
                            system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a3a038);
                            if (system_char_variable != '\0') goto label_;
                          }
                        }
                      }
                      else {
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39e78);
                        if (system_char_variable == '\0') {
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39eb8);
                          if (system_char_variable != '\0') goto label_;
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ea8);
                          if (system_char_variable != '\0') goto label_;
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f88);
                          if (system_char_variable != '\0') goto label_;
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f78);
                          if (system_char_variable != '\0') {
label_:
                            buffer_allocation_result = 0x38;
                            goto label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39fb0);
                          if (system_char_variable != '\0') {
label_:
                            buffer_allocation_result = SYSTEM_CONFIG_BUFFER_SIZE;
                            goto label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f98);
                          if (system_char_variable != '\0') {
label_:
                            buffer_allocation_result = 0x44;
                            goto label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f28);
                          if (system_char_variable != '\0') {
label_:
                            buffer_allocation_result = 0x48;
                            goto label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a1029c);
                          if (system_char_variable != '\0') {
label_:
                            buffer_allocation_result = 0x4c;
                            goto label_;
                          }
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f18);
                          if (system_char_variable != '\0') goto label_;
                          system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f60);
                          if (system_char_variable != '\0') {
                            buffer_allocation_result = 0x51;
                            goto label_;
                          }
                        }
                      }
                    }
                    else {
                      system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39d98);
                      if (system_char_variable == '\0') {
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39dc0);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x58;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a35198);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x68;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39db0);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x78;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39d58);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x88;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39d40);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x8c;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39d88);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x90;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39d70);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x94;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39e30);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x98;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39e18);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0x9c;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39e58);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0xa0;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a34948);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0xa4;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39e48);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0xa8;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39de0);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0xac;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39dd0);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0xb0;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39e08);
                        if (system_char_variable != '\0') {
                          buffer_allocation_result = 0xb4;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39df0);
                        if (system_char_variable != '\0') {
                          buffer_allocation_result = 0xb5;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ee0);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0xb8;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ed0);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0xbc;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39f00);
                        if (system_char_variable != '\0') {
                          buffer_allocation_result = 0xbd;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ef0);
                        if (system_char_variable != '\0') {
                          buffer_allocation_result = 0xbe;
                          goto label_;
                        }
                        system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39e90);
                        if (system_char_variable != '\0') {
label_:
                          buffer_allocation_result = 0xc0;
                          goto label_;
                        }
                      }
                    }
                  }
                  else {
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39cd0);
                    if (system_char_variable == '\0') {
                      system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ccc);
                      if (system_char_variable != '\0') goto label_;
                      system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39cd8);
                      if (system_char_variable != '\0') goto label_;
                      system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39cd4);
                      if (system_char_variable != '\0') goto label_;
                      pthread_operation_flags = &system_180a39da8;
label_:
                      system_char_variable = func_0x0001800a1eb0(auStack_50,pthread_operation_flags);
                      if (system_char_variable != '\0') goto label_;
                    }
                  }
                }
                else {
                  system_char_variable = validate_handle_parameters(auStack_50,&system_180a39920,1);
                  if (system_char_variable == '\0') {
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39988);
                    if (system_char_variable != '\0') {
label_:
                      buffer_allocation_result = 1;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39970);
                    if (system_char_variable != '\0') {
label_:
                      buffer_allocation_result = 2;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a398d8);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 3;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a398b8);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39910);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 5;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a398f0);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 6;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39a28);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39a18);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39a60);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39a40);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a399c0);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a399a8);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a399f0);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a399e0);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39af0);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ad8);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39b18);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 0x1d;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39b00);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 0x1e;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39a88);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39a70);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ab8);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39aa0);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ba0);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39b88);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39bd8);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39bc0);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39b48);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39b30);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39b78);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39b68);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39c80);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39c60);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39cb8);
                    if (system_char_variable != '\0') {
label_:
                      buffer_allocation_result = 0x7c;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39c98);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39c10);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39bf0);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39c50);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39c30);
                    if (system_char_variable != '\0') goto label_;
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39cf8);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 0xc4;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39ce0);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 200;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39d28);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 0xcc;
                      goto label_;
                    }
                    system_char_variable = func_0x0001800a1eb0(auStack_50,&system_180a39d10);
                    if (system_char_variable != '\0') {
                      buffer_allocation_result = 0xd0;
                      goto label_;
                    }
                  }
                }
              }
              else {
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a39888,1);
                if (system_char_variable == '\0') {
                  system_char_variable = validate_handle_parameters(auStack_50,&system_180a397f8,1);
                  if (system_char_variable != '\0') {
label_:
                    buffer_allocation_result = STRING_BUFFER_SIZE;
                    goto label_;
                  }
                  system_char_variable = validate_handle_parameters(auStack_50,&system_180a397e8,1);
                  if (system_char_variable != '\0') {
label_:
                    buffer_allocation_result = config_path_buffer_size;
                    goto label_;
                  }
                  system_char_variable = validate_handle_parameters(auStack_50,&system_180a39850,1);
                  if (system_char_variable != '\0') goto label_;
                  system_char_variable = validate_handle_parameters(auStack_50,&system_180a39820,1);
                  if (system_char_variable != '\0') {
label_:
                    buffer_allocation_result = 0x30;
                    goto label_;
                  }
                  system_char_variable = validate_handle_parameters(auStack_50,&system_180a39940,1);
                  if (system_char_variable != '\0') {
                    buffer_allocation_result = 0x31;
                    goto label_;
                  }
                  system_char_variable = validate_handle_parameters(auStack_50,&system_180a19c8c,1);
                  if (system_char_variable != '\0') {
                    buffer_allocation_result = 0x32;
                    goto label_;
                  }
                }
              }
            }
            else {
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a397d8,1);
              if (system_char_variable == '\0') {
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a397c8,1);
                if (system_char_variable != '\0') goto label_;
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a39740,1);
                if (system_char_variable != '\0') goto label_;
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a39728,1);
                if (system_char_variable != '\0') goto label_;
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a39768,1);
                if (system_char_variable != '\0') goto label_;
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a39758,1);
                if (system_char_variable != '\0') goto label_;
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a39870,1);
                if (system_char_variable != '\0') goto label_;
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a19c8c,1);
                if (system_char_variable != '\0') {
label_:
                  buffer_allocation_result = 0x19;
                  goto label_;
                }
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a39864,1);
                if (system_char_variable != '\0') {
                  buffer_allocation_result = 0x35;
                  goto label_;
                }
                system_char_variable = validate_handle_parameters(auStack_50,&system_180a398a8,1);
                if (system_char_variable != '\0') goto label_;
              }
            }
          }
          else {
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39568,1);
            if (system_char_variable == '\0') {
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a39538,1);
              if (system_char_variable != '\0') {
label_:
                buffer_allocation_result = 7;
                goto label_;
              }
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a396c8,1);
              if (system_char_variable != '\0') goto label_;
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a396b0,1);
              if (system_char_variable != '\0') goto label_;
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a39710,1);
              if (system_char_variable != '\0') {
label_:
                buffer_allocation_result = 10;
                goto label_;
              }
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a396f0,1);
              if (system_char_variable != '\0') goto label_;
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a39640,1);
              if (system_char_variable != '\0') goto label_;
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a39628,1);
              if (system_char_variable != '\0') {
                buffer_allocation_result = 0xd;
                goto label_;
              }
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a39688,1);
              if (system_char_variable != '\0') {
                buffer_allocation_result = 0xe;
                goto label_;
              }
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a39660,1);
              if (system_char_variable != '\0') {
                buffer_allocation_result = 0xf;
                goto label_;
              }
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a397a8,1);
              if (system_char_variable != '\0') goto label_;
              system_char_variable = validate_handle_parameters(auStack_50,&system_180a39788,1);
              if (system_char_variable != '\0') goto label_;
            }
          }
        }
        else {
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39270,1);
          if (system_char_variable == '\0') {
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a393a8,1);
            if (system_char_variable != '\0') goto label_;
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39390,1);
            if (system_char_variable != '\0') {
label_:
              buffer_allocation_result = 9;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a393f0,1);
            if (system_char_variable != '\0') goto label_;
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a393d0,1);
            if (system_char_variable != '\0') goto label_;
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39348,1);
            if (system_char_variable != '\0') {
label_:
              buffer_allocation_result = 0x17;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39328,1);
            if (system_char_variable != '\0') goto label_;
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39378,1);
            if (system_char_variable != '\0') goto label_;
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39360,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x21;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a394a0,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x22;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39480,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x23;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a394e0,1);
            if (system_char_variable != '\0') goto label_;
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a394b8,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x25;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39428,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x26;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39408,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x27;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39468,1);
            if (system_char_variable != '\0') goto label_;
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39450,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x29;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a395c0,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x2a;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39598,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x2b;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39600,1);
            if (system_char_variable != '\0') goto label_;
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a395e0,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x2d;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39518,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x2e;
              goto label_;
            }
            system_char_variable = validate_handle_parameters(auStack_50,&system_180a39500,1);
            if (system_char_variable != '\0') {
              buffer_allocation_result = 0x2f;
              goto label_;
            }
          }
        }
      }
      else {
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a391b8,1);
        if (system_char_variable == '\0') {
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39188,1);
          if (system_char_variable != '\0') {
label_:
            buffer_allocation_result = 0xb;
            goto label_;
          }
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39210,1);
          if (system_char_variable != '\0') goto label_;
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a391e8,1);
          if (system_char_variable != '\0') goto label_;
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39128,1);
          if (system_char_variable != '\0') {
label_:
            buffer_allocation_result = 0x11;
            goto label_;
          }
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39110,1);
          if (system_char_variable != '\0') {
            buffer_allocation_result = 0x12;
            goto label_;
          }
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39170,1);
          if (system_char_variable != '\0') {
            buffer_allocation_result = 0x13;
            goto label_;
          }
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39148,1);
          if (system_char_variable != '\0') goto label_;
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a392d0,1);
          if (system_char_variable != '\0') {
            buffer_allocation_result = 0x15;
            goto label_;
          }
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a392b8,1);
          if (system_char_variable != '\0') {
            buffer_allocation_result = 0x16;
            goto label_;
          }
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39308,1);
          if (system_char_variable != '\0') goto label_;
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a392e8,1);
          if (system_char_variable != '\0') goto label_;
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39250,1);
          if (system_char_variable != '\0') goto label_;
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39230,1);
          if (system_char_variable != '\0') {
label_:
            buffer_allocation_result = 0x1a;
            goto label_;
          }
          system_char_variable = validate_handle_parameters(auStack_50,&system_180a39298,1);
          if (system_char_variable != '\0') {
            buffer_allocation_result = 0x1b;
            goto label_;
          }
        }
      }
    }
    else {
      system_char_variable = validate_handle_parameters(auStack_50,&system_180a38ef0,1);
      if (system_char_variable == '\0') {
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a38fd8,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a1029c,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a38fc0,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a39008,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a38ff0,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a38f78,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a38f60,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a38fa8,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a38f90,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a390b8,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a39090,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a390f0,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a390d0,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a39030,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a34c20,1);
        if (system_char_variable != '\0') {
          buffer_allocation_result = 0x54;
          goto label_;
        }
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a39020,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a39078,1);
        if (system_char_variable != '\0') goto label_;
        system_char_variable = validate_handle_parameters(auStack_50,&system_180a39058,1);
        if (system_char_variable != '\0') goto label_;
      }
    }
  }
  else {
    system_char_variable = validate_handle_parameters(auStack_50,&system_180a0ee38,1);
    if (system_char_variable == '\0') {
      system_char_variable = validate_handle_parameters(auStack_50,&system_180a38f50,1);
      if (system_char_variable != '\0') {
label_:
        buffer_allocation_result = 8;
        goto label_;
      }
      system_char_variable = validate_handle_parameters(auStack_50,&system_180a38f40,1);
      if (system_char_variable != '\0') goto label_;
      system_char_variable = validate_handle_parameters(auStack_50,&system_180a38ee0,1);
      if (system_char_variable != '\0') {
label_:
        buffer_allocation_result = 0x18;
        goto label_;
      }
      system_char_variable = validate_handle_parameters(auStack_50,&system_180a38ed0,1);
      if (system_char_variable != '\0') goto label_;
      system_char_variable = validate_handle_parameters(auStack_50,&system_180a38f00,1);
      if (system_char_variable != '\0') {
label_:
        buffer_allocation_result = 0x28;
        goto label_;
      }
    }
  }
  buffer_allocation_result = 0;
label_:
  system_execute_function(auStack_50);
  system_execute_function(auStack_30);
  return buffer_allocation_result;
}
  data_180bf66d8 = 0;
  system_crypto_002(system_execute_function);
  system_execute_function(&system_18064ffc0);
  string_length_counter = 0;
  system_global_data_pointer = system_execute_function;
  pthread_operation_flags = (unsigned int *)&data_180bfbd80;
  string_length_counter = 0x16;
  do {
    if (pthread_operation_flags[1] == 0) {
      system_execute_function(pthread_operation_flags);
    }
    if (string_length_counter != 2) {
      system_execute_function(&system_180a3db60,*(unsigned long long *)(pthread_operation_flags + 4),*pthread_operation_flags);
    }
    string_length_counter = string_length_counter + 1;
    pthread_operation_flags = pthread_operation_flags + 6;
    string_length_counter = string_length_counter + -1;
  } while (string_length_counter != 0);
  if (system_global_data_pointer == 0) {
    system_execute_function(&data_180bfbf60);
  }
  system_global_data_pointer = (long long)system_global_data_pointer;
  if (system_global_data_pointer == 0) {
    system_execute_function(&data_180bfbf78);
  }
  system_global_data_pointer = (long long)system_global_data_pointer;
  system_execute_function();
  if (data_180c8efc8 != '\0') {
    system_execute_function(&system_180a3d970);
  }
  return;
}
double calculate_system_performance(void)
{
  long long system_initialization_result;
  long long along_stack_variable [4];
  system_initialization_result = system_global_data_pointer;
  if (system_global_data_pointer == 0) {
    QueryPerformanceCounter(along_stack_variable);
    system_initialization_result = along_stack_variable[0];
  }
  return (double)(system_initialization_result - system_global_data_pointer) * system_global_data_pointer;
}
bool validate_handle_parameters(long long handle,long long thread_operation_flags,char mutex_attr)
{
  char system_char_variable;
  char system_char_variable;
  int thread_result_index;
  long long string_length_counter;
  char *character_scan_pointer;
  string_length_counter = -1;
  do {
    string_length_counter = string_length_counter + 1;
  } while (*(char *)(thread_operation_flags + string_length_counter) != '\0');
  thread_result_index = *(int *)(handle + STRING_BUFFER_SIZE);
  if (thread_result_index == (int)string_length_counter) {
    if (thread_result_index != 0) {
      character_scan_pointer = *(char **)(handle + 8);
      if (mutex_attr == '\0') {
        thread_result_index = _stricmp(character_scan_pointer,thread_operation_flags);
        return thread_result_index == 0;
      }
      thread_operation_flags = thread_operation_flags - (long long)character_scan_pointer;
      do {
        system_char_variable = *character_scan_pointer;
        system_char_variable = character_scan_pointer[thread_operation_flags];
        if (system_char_variable != system_char_variable) break;
        character_scan_pointer = character_scan_pointer + 1;
      } while (system_char_variable != '\0');
      return system_char_variable == system_char_variable;
    }
  }
  else if (thread_result_index != 0) {
    return false;
  }
  if ((int)string_length_counter != 0) {
    return false;
  }
  return true;
}
// 查找字符串在句柄中的位置
int find_string_index_in_array(long long handle)
{
  int thread_result_index;
  long long string_length_counter;
  int thread_result_index;
  ulong long buffer_allocation_result;
  long long string_length_counter;
  void *thread_stack_pointer;
  long long thread_stack_base_address;
  int thread_priority_level;
  create_thread_context(&thread_stack_pointer);
  thread_result_index = (*(int *)(handle + STRING_BUFFER_SIZE) - thread_priority_level) + 1;
  thread_result_index = 0;
  if (0 < thread_result_index) {
    string_length_counter = 0;
    do {
      buffer_allocation_result = 0;
      string_length_counter = 0;
      if (0 < thread_priority_level) {
        do {
          if (*(char *)(*(long long *)(handle + 8) + string_length_counter + string_length_counter) != *(char *)(buffer_allocation_result + thread_stack_base_address))
          break;
          buffer_allocation_result = (ulong long)((int)buffer_allocation_result + 1);
          string_length_counter = string_length_counter + 1;
        } while (string_length_counter < thread_priority_level);
      }
      if ((int)buffer_allocation_result == thread_priority_level) goto label_;
      thread_result_index = thread_result_index + 1;
      string_length_counter = string_length_counter + 1;
    } while (string_length_counter < thread_result_index);
  }
  thread_result_index = -1;
label_:
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_base_address != 0) {
    handle_system_error();
  }
  return thread_result_index;
}
// 处理句柄和标志位
int process_handle_parameters(long long handle,long long thread_operation_flags)
{
  int thread_result_index;
  long long string_length_counter;
  int thread_result_index;
  long long string_length_counter;
  ulong long buffer_allocation_result;
  thread_result_index = *(int *)(thread_operation_flags + STRING_BUFFER_SIZE);
  thread_result_index = *(int *)(handle + STRING_BUFFER_SIZE) - thread_result_index;
  if (-1 < thread_result_index) {
    string_length_counter = (long long)thread_result_index;
    do {
      buffer_allocation_result = 0;
      string_length_counter = 0;
      if (0 < thread_result_index) {
        do {
          if (*(char *)(*(long long *)(handle + 8) + string_length_counter + string_length_counter) !=
              *(char *)(buffer_allocation_result + *(long long *)(thread_operation_flags + 8))) break;
          buffer_allocation_result = (ulong long)((int)buffer_allocation_result + 1);
          string_length_counter = string_length_counter + 1;
        } while (string_length_counter < thread_result_index);
      }
      if ((int)buffer_allocation_result == thread_result_index) {
        return thread_result_index;
      }
      thread_result_index = thread_result_index + -1;
      string_length_counter = string_length_counter + -1;
    } while (-1 < string_length_counter);
  }
  return -1;
}
unsigned long long * setup_thread_parameters(long long handle,unsigned long long *thread_operation_flags,int mutex_attr,int mutex_type)
{
  unsigned char buffer_allocation_result;
  int thread_result_index;
  int thread_result_index;
  ulong long buffer_allocation_result;
  ulong long buffer_allocation_result;
  buffer_allocation_result = (ulong long)mutex_attr;
  thread_result_index = mutex_type;
  if (mutex_type < 0) {
    thread_result_index = *(int *)(handle + STRING_BUFFER_SIZE);
  }
  *thread_operation_flags = &g_threadString4;
  thread_operation_flags[1] = 0;
  *(unsigned int *)(thread_operation_flags + 2) = 0;
  *thread_operation_flags = &g_threadString2;
  thread_operation_flags[3] = 0;
  thread_operation_flags[1] = 0;
  *(unsigned int *)(thread_operation_flags + 2) = 0;
  thread_result_index = *(int *)(handle + STRING_BUFFER_SIZE) - mutex_attr;
  if (thread_result_index - mutex_attr < thread_result_index) {
    thread_result_index = thread_result_index - mutex_attr;
  }
  system_thread_manager_001(thread_operation_flags,thread_result_index + 1,mutex_attr,mutex_type,1,DEFAULT_THREAD_POOL_FLAG);
  for (buffer_allocation_result = buffer_allocation_result;
      ((long long)buffer_allocation_result < (long long)thread_result_index && ((uint)buffer_allocation_result < *(uint *)(handle + STRING_BUFFER_SIZE)));
      buffer_allocation_result = (ulong long)((uint)buffer_allocation_result + 1)) {
    buffer_allocation_result = *(unsigned char *)(buffer_allocation_result + *(long long *)(handle + 8));
    system_thread_manager_001(thread_operation_flags,*(int *)(thread_operation_flags + 2) + 1);
    *(unsigned char *)((ulong long)*(uint *)(thread_operation_flags + 2) + thread_operation_flags[1]) = buffer_allocation_result;
    *(unsigned char *)((ulong long)(*(int *)(thread_operation_flags + 2) + 1) + thread_operation_flags[1]) = 0;
    *(int *)(thread_operation_flags + 2) = *(int *)(thread_operation_flags + 2) + 1;
    buffer_allocation_result = buffer_allocation_result + 1;
  }
  return thread_operation_flags;
}
  data_180c95fea = 1;
  thread_stack_pointer = &g_threadString2;
  stack_size_limit = 0;
  thread_stack_pointer = (unsigned long long *)0x0;
  stack_size_limit = 0;
  input_string_pointer = (unsigned long long *)
           system_execute_function(system_global_data_pointer,STRING_BUFFER_SIZE,CONCAT71((int7)((ulong long)character_scan_pointer >> 8),0x13));
  *(unsigned char *)input_string_pointer = 0;
  thread_stack_pointer = input_string_pointer;
  buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
  *input_string_pointer = 0x7265206573726150;
  *(unsigned int *)(input_string_pointer + 1) = 0x3a726f72;
  *(unsigned short *)((long long)input_string_pointer + 0xc) = 0x2720;
  *(unsigned char *)((long long)input_string_pointer + 0xe) = 0;
  stack_size_limit = 0xe;
  system_initialization_result0 = -1;
  stack_size_limit._0_4_ = buffer_allocation_result;
  if (handle != 0) {
    do {
      string_length_counter = system_initialization_result0;
      system_initialization_result0 = string_length_counter + 1;
    } while (*(char *)(system_initialization_result0 + handle) != '\0');
    if (0 < (int)system_initialization_result0) {
      thread_result_index = (int)string_length_counter;
      if ((thread_result_index != -0xf) && (buffer_allocation_result < thread_result_index + STRING_BUFFER_SIZEU)) {
        stack_size_limit = 0x13;
        input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,input_string_pointer,thread_result_index + STRING_BUFFER_SIZEU,STRING_BUFFER_SIZE);
        thread_stack_pointer = input_string_pointer;
        stack_size_limit._0_4_ = allocate_temporary_buffer(input_string_pointer);
      }
      memcpy((unsigned char *)((long long)input_string_pointer + 0xe),handle,(long long)(thread_result_index + 2));
    }
  }
  if (input_string_pointer == (unsigned long long *)0x0) {
    input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,0x19,0x13);
    *(unsigned char *)input_string_pointer = 0;
label_:
    thread_stack_pointer = input_string_pointer;
    buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
  }
  else if (buffer_allocation_result < 0x19) {
    stack_size_limit = 0x13;
    input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,input_string_pointer,0x19,STRING_BUFFER_SIZE);
    goto label_;
  }
  *(unsigned long long *)((long long)input_string_pointer + 0xe) = 0x6e696c2074612027;
  *(unsigned short *)((long long)input_string_pointer + 0x16) = config_path_buffer_size65;
  *(unsigned char *)(input_string_pointer + 3) = 0;
  stack_size_limit = 0x18;
  stack_size_limit._0_4_ = buffer_allocation_result;
  system_execute_function(acStack_40,&system_1809fd0a0,thread_result_index);
  system_initialization_result0 = -1;
  do {
    string_length_counter = system_initialization_result0;
    system_initialization_result0 = string_length_counter + 1;
  } while (acStack_40[string_length_counter + 1] != '\0');
  thread_result_index = (int)(string_length_counter + 1);
  if (thread_result_index < 1) {
    if (data_180c8eced != '\0') {
      _Exit(5);
    }
    thread_stack_pointer = &g_threadString2;
    if (input_string_pointer != (unsigned long long *)0x0) {
      handle_system_error(input_string_pointer);
    }
    thread_stack_pointer = (unsigned long long *)0x0;
    stack_size_limit = (ulong long)stack_size_limit._4_4_ << config_path_buffer_size;
    thread_stack_pointer = &g_threadString4;
    system_crypto_001(stack_size_limit ^ (ulong long)auStack_98);
  }
  if (thread_result_index != -0x18) {
    buffer_allocation_result = thread_result_index + 0x19;
    if (input_string_pointer == (unsigned long long *)0x0) {
      if ((int)buffer_allocation_result < STRING_BUFFER_SIZE) {
        buffer_allocation_result = STRING_BUFFER_SIZE;
      }
      input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,(long long)(int)buffer_allocation_result,0x13);
      *(unsigned char *)input_string_pointer = 0;
    }
    else {
      if (buffer_allocation_result <= buffer_allocation_result) goto label_;
      stack_size_limit = 0x13;
      input_string_pointer = (unsigned long long *)system_execute_function(system_global_data_pointer,input_string_pointer,buffer_allocation_result,STRING_BUFFER_SIZE);
    }
    thread_stack_pointer = input_string_pointer;
    stack_size_limit._0_4_ = allocate_temporary_buffer(input_string_pointer);
  }
label_:
  memcpy(input_string_pointer + 3,acStack_40,(long long)((int)string_length_counter + 2));
}
char * system_execute_function(unsigned int handle,unsigned long long thread_operation_flags,char *mutex_attr,unsigned long long mutex_type,
                    long long *param_5,long long param_6,ulong long param_7,unsigned long long *param_8,
                    int *param_9,unsigned long long *handle0)
{
  char system_char_variable;
  unsigned int thread_operation_flags;
  unsigned int buffer_allocation_result;
  void *input_string_pointer;
  int thread_result_index;
  unsigned int buffer_allocation_result;
  uint buffer_allocation_result;
  long long string_length_counter;
  char *character_scan_pointer;
  unsigned int *input_string_pointer;
  unsigned int *input_string_pointer;
  unsigned char *input_string_pointer;
  void *input_string_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  ulong long buffer_allocation_result;
  char *character_scan_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  long long string_length_counter;
  char *character_scan_pointer;
  void *thread_stack_pointer;
  void *thread_stack_pointer;
  uint stack_size_limit;
  unsigned long long stack_size_limit;
  long long *plStack_120;
  void *thread_stack_pointer;
  void *thread_stack_pointer;
  unsigned int stack_size_limit;
  ulong long stack_size_limit;
  void *thread_stack_pointer;
  unsigned int *thread_stack_pointer;
  unsigned int stack_size_limit;
  unsigned long long stack_size_limit;
  ulong long stack_size_limit;
  long long thread_stack_base_address;
  unsigned long long *thread_stack_pointer;
  void *thread_stack_pointer;
  unsigned int *thread_stack_pointer;
  unsigned int stack_size_limit;
  ulong long stack_size_limit;
  unsigned long long *thread_stack_pointer;
  void *thread_stack_pointer;
  unsigned int *thread_stack_pointer;
  unsigned int stack_size_limit;
  unsigned long long stack_size_limit;
  int *piStack_78;
  char *pcStack_70;
  unsigned long long stack_size_limit;
  void *thread_stack_pointer;
  unsigned long long stack_size_limit;
  unsigned long long *thread_stack_pointer;
  ulong long buffer_allocation_result;
  stack_size_limit = DEFAULT_THREAD_POOL_FLAG;
  plStack_120 = param_5;
  thread_stack_base_address = param_6;
  stack_size_limit = param_7;
  thread_stack_pointer = param_8;
  piStack_78 = param_9;
  thread_stack_pointer = handle0;
  thread_stack_pointer = handle0;
  thread_stack_pointer = &g_threadString2;
  stack_size_limit = 0;
  thread_stack_pointer = (void *)0x0;
  stack_size_limit = 0;
  pcStack_70 = mutex_attr;
  stack_size_limit = thread_operation_flags;
  string_length_counter = process_system_configuration(&thread_stack_pointer,mutex_type,handle,param_5);
  stack_size_limit = *(unsigned int *)(string_length_counter + STRING_BUFFER_SIZE);
  thread_stack_pointer = *(void **)(string_length_counter + 8);
  stack_size_limit = *(ulong long *)(string_length_counter + 0x18);
  *(unsigned int *)(string_length_counter + STRING_BUFFER_SIZE) = 0;
  *(unsigned long long *)(string_length_counter + 8) = 0;
  *(unsigned long long *)(string_length_counter + 0x18) = 0;
  thread_stack_pointer = &g_threadString2;
  thread_stack_pointer = thread_stack_pointer;
  if (thread_stack_pointer != (unsigned int *)0x0) {
    handle_system_error();
  }
  thread_stack_pointer = (unsigned int *)0x0;
  stack_size_limit = (char *)((ulong long)stack_size_limit._4_4_ << config_path_buffer_size);
  thread_stack_pointer = &g_threadString4;
  input_string_pointer = &default_resource_string;
  if (thread_stack_pointer != (void *)0x0) {
    input_string_pointer = thread_stack_pointer;
  }
  system_execute_function(&system_180a3cac0,input_string_pointer);
  *param_9 = 0;
  string_length_counter = *param_5;
  thread_result_index = 0;
  if (string_length_counter != param_5[1]) {
    do {
      if (0xf < thread_result_index) {
        system_execute_function(&system_180a3ca70,STRING_BUFFER_SIZE);
      }
      input_string_pointer = &default_resource_string;
      if (*(void **)(string_length_counter + 8) != (void *)0x0) {
        input_string_pointer = *(void **)(string_length_counter + 8);
      }
      system_execute_function(&system_180a3ca20,input_string_pointer);
      thread_result_index = *param_9;
      string_length_counter = (long long)thread_result_index * 0x3088 + thread_stack_base_address;
      input_string_pointer = &default_resource_string;
      if (*(void **)(string_length_counter + 8) != (void *)0x0) {
        input_string_pointer = *(void **)(string_length_counter + 8);
      }
      thread_stack_pointer = &g_threadString2;
      stack_size_limit = 0;
      thread_stack_pointer = (void *)0x0;
      stack_size_limit = 0;
      buffer_allocation_result = *(uint *)(thread_stack_pointer + 2);
      buffer_allocation_result = (ulong long)buffer_allocation_result;
      if (thread_stack_pointer[1] != 0) {
        system_thread_manager_001(&thread_stack_pointer,buffer_allocation_result);
      }
      input_string_pointer = thread_stack_pointer;
      if (buffer_allocation_result != 0) {
        memcpy(thread_stack_pointer,thread_stack_pointer[1],buffer_allocation_result);
      }
      if (thread_stack_pointer != (void *)0x0) {
        thread_stack_pointer[buffer_allocation_result] = 0;
      }
      stack_size_limit = buffer_allocation_result;
      stack_size_limit._4_4_ = *(uint *)((long long)thread_stack_pointer + 0x1c);
      if (input_string_pointer != (void *)0x0) {
        buffer_allocation_result = 0xffffffffffffffff;
        do {
          buffer_allocation_result = buffer_allocation_result;
          buffer_allocation_result = buffer_allocation_result + 1;
        } while (input_string_pointer[buffer_allocation_result] != '\0');
        param_5 = plStack_120;
        if (0 < (int)buffer_allocation_result) {
          system_thread_manager_001(&thread_stack_pointer,buffer_allocation_result & 0xffffffff);
          memcpy(thread_stack_pointer + stack_size_limit,input_string_pointer,(long long)((int)buffer_allocation_result + 2));
        }
      }
      input_string_pointer = &default_resource_string;
      if (thread_stack_pointer != (void *)0x0) {
        input_string_pointer = thread_stack_pointer;
      }
      system_execute_function(input_string_pointer,string_length_counter,(long long)thread_result_index * config_path_buffer_size + param_7);
      thread_stack_pointer = &g_threadString2;
      if (input_string_pointer != (void *)0x0) {
        handle_system_error(input_string_pointer);
      }
      thread_stack_pointer = (void *)0x0;
      stack_size_limit = (ulong long)stack_size_limit._4_4_ << config_path_buffer_size;
      thread_stack_pointer = &g_threadString4;
      string_length_counter = string_length_counter + config_path_buffer_size;
      thread_result_index = *piStack_78 + 1;
      *piStack_78 = thread_result_index;
      param_7 = stack_size_limit;
      mutex_attr = pcStack_70;
      param_6 = thread_stack_base_address;
      param_9 = piStack_78;
    } while (string_length_counter != param_5[1]);
  }
  character_scan_pointer = (char *)0x0;
  stack_size_limit = stack_size_limit & INT64_MASK;
  plStack_120 = (long long *)((ulong long)plStack_120 & 0xffffffff00000000);
  character_scan_pointer = character_scan_pointer;
  if (0 < thread_result_index) {
    do {
      character_scan_pointer = "base";
      do {
        character_scan_pointer = character_scan_pointer;
        character_scan_pointer = character_scan_pointer + 1;
      } while (*character_scan_pointer != '\0');
      for (character_scan_pointer = *(char **)(param_6 + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
          character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
        character_scan_pointer = *(char **)character_scan_pointer;
        if (character_scan_pointer == (char *)0x0) {
          character_scan_pointer = (char *)0x180d48d24;
          character_scan_pointer = character_scan_pointer;
        }
        else {
          character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
        }
        if (character_scan_pointer == character_scan_pointer + -0x180a04ee3) {
          character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
          character_scan_pointer = character_scan_pointer;
          if (character_scan_pointer <= character_scan_pointer) break;
          string_length_counter = (long long)&data_180a04ee4 - (long long)character_scan_pointer;
          while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
            character_scan_pointer = character_scan_pointer + 1;
            if (character_scan_pointer <= character_scan_pointer) goto label_;
          }
        }
      }
label_:
      *thread_stack_pointer = character_scan_pointer;
      if (character_scan_pointer != (char *)0x0) {
        if (mutex_attr == (char *)0x0) {
          character_scan_pointer = *(char **)(character_scan_pointer + 0x30);
        }
        else {
          system_char_variable = *mutex_attr;
          character_scan_pointer = mutex_attr;
          while (system_char_variable != '\0') {
            character_scan_pointer = character_scan_pointer + 1;
            system_char_variable = *character_scan_pointer;
          }
          for (character_scan_pointer = *(char **)(character_scan_pointer + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
              character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
            character_scan_pointer = *(char **)character_scan_pointer;
            if (character_scan_pointer == (char *)0x0) {
              character_scan_pointer = (char *)0x180d48d24;
              character_scan_pointer = character_scan_pointer;
            }
            else {
              character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
            }
            if (character_scan_pointer == character_scan_pointer + -(long long)mutex_attr) {
              character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
              character_scan_pointer = character_scan_pointer;
              if (character_scan_pointer <= character_scan_pointer) break;
              string_length_counter = (long long)mutex_attr - (long long)character_scan_pointer;
              while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
                character_scan_pointer = character_scan_pointer + 1;
                if (character_scan_pointer <= character_scan_pointer) goto label_;
              }
            }
          }
        }
label_:
        *thread_stack_pointer = character_scan_pointer;
        if (character_scan_pointer == (char *)0x0) {
          thread_stack_pointer = &g_threadString2;
          thread_stack_pointer = (unsigned int *)0x0;
          stack_size_limit = 0;
          stack_size_limit = character_scan_pointer;
          input_string_pointer = (unsigned int *)system_execute_function(system_global_data_pointer,0x15,0x13);
          *(unsigned char *)input_string_pointer = 0;
          thread_stack_pointer = input_string_pointer;
          buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
          stack_size_limit = (char *)merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
          *input_string_pointer = config_path_buffer_size4c4d58;
          input_string_pointer[1] = 0x65646f6e;
          input_string_pointer[2] = 0x74697720;
          input_string_pointer[3] = 0x616e2068;
          input_string_pointer[4] = 0x2220656d;
          *(unsigned char *)(input_string_pointer + 5) = 0;
          stack_size_limit = 0x14;
          thread_stack_pointer = &g_threadString2;
          stack_size_limit = 0;
          thread_stack_pointer = (unsigned int *)0x0;
          stack_size_limit = 0;
          input_string_pointer = (unsigned int *)system_execute_function(system_global_data_pointer,0x15,0x13);
          *(unsigned char *)input_string_pointer = 0;
          thread_stack_pointer = input_string_pointer;
          buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
          buffer_allocation_result = input_string_pointer[1];
          thread_operation_flags = input_string_pointer[2];
          buffer_allocation_result = input_string_pointer[3];
          *input_string_pointer = *input_string_pointer;
          input_string_pointer[1] = buffer_allocation_result;
          input_string_pointer[2] = thread_operation_flags;
          input_string_pointer[3] = buffer_allocation_result;
          input_string_pointer[4] = input_string_pointer[4];
          stack_size_limit = 0x14;
          *(unsigned char *)(input_string_pointer + 5) = 0;
          stack_size_limit = (ulong long)buffer_allocation_result;
          if (mutex_attr != (char *)0x0) {
            string_length_counter = -1;
            do {
              string_length_counter = string_length_counter;
              string_length_counter = string_length_counter + 1;
            } while (mutex_attr[string_length_counter] != '\0');
            if (0 < (int)string_length_counter) {
              thread_result_index = (int)string_length_counter;
              if ((thread_result_index != -0x15) && (buffer_allocation_result < thread_result_index + 0x16U)) {
                input_string_pointer = (unsigned int *)
                          system_execute_function(system_global_data_pointer,input_string_pointer,thread_result_index + 0x16U,STRING_BUFFER_SIZE,0x13);
                thread_stack_pointer = input_string_pointer;
                buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
                stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
              }
              memcpy(input_string_pointer + 5,mutex_attr,(long long)(thread_result_index + 2));
            }
          }
          input_string_pointer = (unsigned char *)0x0;
          thread_stack_pointer = &g_threadString2;
          stack_size_limit = 0;
          thread_stack_pointer = (unsigned int *)0x0;
          stack_size_limit = 0;
          input_string_pointer = (unsigned int *)system_execute_function(system_global_data_pointer,0x16,0x13);
          *(unsigned char *)input_string_pointer = 0;
          thread_stack_pointer = input_string_pointer;
          buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
          stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
          *input_string_pointer = 0x6f632022;
          input_string_pointer[1] = config_path_buffer_size646c75;
          input_string_pointer[2] = config_path_buffer_size746f6e;
          input_string_pointer[3] = 0x66206562;
          input_string_pointer[4] = 0x646e756f;
          *(unsigned short *)(input_string_pointer + 5) = 0x21;
          stack_size_limit = 0x15;
          thread_stack_pointer = &g_threadString2;
          stack_size_limit = 0;
          thread_stack_pointer = (unsigned char *)0x0;
          stack_size_limit = 0;
          if (input_string_pointer != (unsigned int *)0x0) {
            input_string_pointer = (unsigned char *)system_execute_function(system_global_data_pointer,0x15,0x13);
            *input_string_pointer = 0;
            thread_stack_pointer = input_string_pointer;
            buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
            stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
          }
          memcpy(input_string_pointer,input_string_pointer,0x14);
        }
        thread_result_index = validate_config_handle(character_scan_pointer,stack_size_limit);
        buffer_allocation_result = (int)character_scan_pointer + thread_result_index;
        character_scan_pointer = (char *)(ulong long)buffer_allocation_result;
        stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
      }
      thread_result_index = (int)plStack_120 + 1;
      plStack_120 = (long long *)merge_32bit_values(plStack_120._4_4_,thread_result_index);
      param_6 = param_6 + 0x3088;
      mutex_attr = pcStack_70;
      thread_stack_base_address = param_6;
    } while (thread_result_index < *param_9);
  }
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_pointer != (void *)0x0) {
    handle_system_error();
  }
  thread_stack_pointer = (void *)0x0;
  stack_size_limit = stack_size_limit & INT64_MASK;
  thread_stack_pointer = &g_threadString4;
  *thread_stack_pointer = &g_threadString2;
  if (thread_stack_pointer[1] != 0) {
    handle_system_error();
  }
  thread_stack_pointer[1] = 0;
  *(unsigned int *)(thread_stack_pointer + 3) = 0;
  *thread_stack_pointer = &g_threadString4;
  return character_scan_pointer;
}
char * system_execute_function(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long *mutex_attr,long long mutex_type,
                    unsigned long long param_5,unsigned long long *param_6,unsigned long long *param_7)
{
  unsigned int buffer_allocation_result;
  unsigned int thread_operation_flags;
  unsigned int buffer_allocation_result;
  uint buffer_allocation_result;
  long long string_length_counter;
  char *character_scan_pointer;
  unsigned int *input_string_pointer;
  unsigned int *input_string_pointer;
  char *character_scan_pointer;
  void *input_string_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  void *thread_stack_pointer;
  unsigned int *thread_stack_pointer;
  unsigned int stack_size_limit;
  unsigned long long stack_size_limit;
  void *thread_stack_pointer;
  unsigned int *thread_stack_pointer;
  unsigned int stack_size_limit;
  ulong long stack_size_limit;
  void *thread_stack_pointer;
  unsigned int *thread_stack_pointer;
  unsigned int stack_size_limit;
  unsigned long long stack_size_limit;
  void *thread_stack_pointer;
  long long thread_stack_base_address;
  unsigned int stack_size_limit;
  unsigned long long stack_size_limit;
  unsigned long long *thread_stack_pointer;
  unsigned long long *thread_stack_pointer;
  stack_size_limit = DEFAULT_THREAD_POOL_FLAG;
  thread_stack_pointer = param_7;
  character_scan_pointer = (char *)0x0;
  thread_stack_pointer = mutex_attr;
  string_length_counter = system_execute_function(param_7,&thread_stack_pointer);
  input_string_pointer = &default_resource_string;
  if (*(void **)(string_length_counter + 8) != (void *)0x0) {
    input_string_pointer = *(void **)(string_length_counter + 8);
  }
  system_execute_function(input_string_pointer,mutex_type,param_5);
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_pointer != (unsigned int *)0x0) {
    handle_system_error();
  }
  thread_stack_pointer = (unsigned int *)0x0;
  stack_size_limit = (ulong long)stack_size_limit._4_4_ << config_path_buffer_size;
  thread_stack_pointer = &g_threadString4;
  character_scan_pointer = "base";
  do {
    character_scan_pointer = character_scan_pointer;
    character_scan_pointer = character_scan_pointer + 1;
  } while (*character_scan_pointer != '\0');
  for (character_scan_pointer = *(char **)(mutex_type + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
      character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
    character_scan_pointer = *(char **)character_scan_pointer;
    if (character_scan_pointer == (char *)0x0) {
      character_scan_pointer = (char *)0x180d48d24;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
    }
    if (character_scan_pointer == character_scan_pointer + -0x180a04ee3) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      character_scan_pointer = character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) break;
      string_length_counter = (long long)&data_180a04ee4 - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto label_;
      }
    }
  }
label_:
  *param_6 = character_scan_pointer;
  if (character_scan_pointer != (char *)0x0) {
    character_scan_pointer = "decal_textures";
    do {
      character_scan_pointer = character_scan_pointer;
      character_scan_pointer = character_scan_pointer + 1;
    } while (*character_scan_pointer != '\0');
    for (character_scan_pointer = *(char **)(character_scan_pointer + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
        character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
      character_scan_pointer = *(char **)character_scan_pointer;
      if (character_scan_pointer == (char *)0x0) {
        character_scan_pointer = (char *)0x180d48d24;
        character_scan_pointer = character_scan_pointer;
      }
      else {
        character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
      }
      if (character_scan_pointer == character_scan_pointer + -0x180a12dff) {
        character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
        character_scan_pointer = character_scan_pointer;
        if (character_scan_pointer <= character_scan_pointer) break;
        string_length_counter = (long long)&data_180a12e00 - (long long)character_scan_pointer;
        while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
          character_scan_pointer = character_scan_pointer + 1;
          if (character_scan_pointer <= character_scan_pointer) goto label_;
        }
      }
    }
label_:
    *param_6 = character_scan_pointer;
    if (character_scan_pointer == (char *)0x0) {
      thread_stack_pointer = &g_threadString2;
      stack_size_limit = 0;
      thread_stack_pointer = (unsigned int *)0x0;
      stack_size_limit = 0;
      input_string_pointer = (unsigned int *)system_execute_function(system_global_data_pointer,0x15,0x13);
      *(unsigned char *)input_string_pointer = 0;
      thread_stack_pointer = input_string_pointer;
      buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
      stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
      *input_string_pointer = config_path_buffer_size4c4d58;
      input_string_pointer[1] = 0x65646f6e;
      input_string_pointer[2] = 0x74697720;
      input_string_pointer[3] = 0x616e2068;
      input_string_pointer[4] = 0x2220656d;
      *(unsigned char *)(input_string_pointer + 5) = 0;
      stack_size_limit = 0x14;
      thread_stack_pointer = &g_threadString2;
      stack_size_limit = 0;
      thread_stack_pointer = (unsigned int *)0x0;
      stack_size_limit = 0;
      input_string_pointer = (unsigned int *)system_execute_function(system_global_data_pointer,0x15,0x13);
      *(unsigned char *)input_string_pointer = 0;
      thread_stack_pointer = input_string_pointer;
      buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
      buffer_allocation_result = input_string_pointer[1];
      buffer_allocation_result = input_string_pointer[2];
      thread_operation_flags = input_string_pointer[3];
      *input_string_pointer = *input_string_pointer;
      input_string_pointer[1] = buffer_allocation_result;
      input_string_pointer[2] = buffer_allocation_result;
      input_string_pointer[3] = thread_operation_flags;
      input_string_pointer[4] = input_string_pointer[4];
      stack_size_limit = 0x14;
      *(unsigned char *)(input_string_pointer + 5) = 0;
      stack_size_limit = (ulong long)buffer_allocation_result;
      if (buffer_allocation_result < 0x23) {
        input_string_pointer = (unsigned int *)system_execute_function(system_global_data_pointer,input_string_pointer,0x23,STRING_BUFFER_SIZE,0x13);
        thread_stack_pointer = input_string_pointer;
        buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
        stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
      }
      *(unsigned long long *)(input_string_pointer + 5) = 0x65745f6c61636564;
      input_string_pointer[7] = 0x72757478;
      *(unsigned short *)(input_string_pointer + 8) = 0x7365;
      *(unsigned char *)((long long)input_string_pointer + 0x22) = 0;
      stack_size_limit = 0x22;
      thread_stack_pointer = &g_threadString2;
      stack_size_limit = 0;
      thread_stack_pointer = (unsigned int *)0x0;
      stack_size_limit = 0;
      input_string_pointer = (unsigned int *)system_execute_function(system_global_data_pointer,0x16,0x13);
      *(unsigned char *)input_string_pointer = 0;
      thread_stack_pointer = input_string_pointer;
      buffer_allocation_result = allocate_temporary_buffer(input_string_pointer);
      stack_size_limit = merge_32bit_values(stack_size_limit._4_4_,buffer_allocation_result);
      *input_string_pointer = 0x6f632022;
      input_string_pointer[1] = config_path_buffer_size646c75;
      input_string_pointer[2] = config_path_buffer_size746f6e;
      input_string_pointer[3] = 0x66206562;
      input_string_pointer[4] = 0x646e756f;
      *(unsigned short *)(input_string_pointer + 5) = 0x21;
      stack_size_limit = 0x15;
      string_length_counter = system_execute_function(&thread_stack_pointer,&thread_stack_pointer,&thread_stack_pointer);
      input_string_pointer = &default_resource_string;
      if (*(void **)(string_length_counter + 8) != (void *)0x0) {
        input_string_pointer = *(void **)(string_length_counter + 8);
      }
      system_thread_003(input_string_pointer);
      thread_stack_pointer = &g_threadString2;
      if (thread_stack_base_address != 0) {
        handle_system_error();
      }
      thread_stack_base_address = 0;
      stack_size_limit = 0;
      thread_stack_pointer = &g_threadString4;
      thread_stack_pointer = &g_threadString2;
      handle_system_error(input_string_pointer);
    }
    buffer_allocation_result = validate_config_handle(character_scan_pointer,&system_180a12e10);
    character_scan_pointer = (char *)(ulong long)buffer_allocation_result;
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
  return character_scan_pointer;
}
long long process_system_configuration(long long handle,long long thread_operation_flags,unsigned int mutex_attr,long long mutex_type)
{
  char system_char_variable;
  char system_char_variable;
  char *character_scan_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  long long string_length_counter;
  unsigned long long *input_string_pointer;
  char *character_scan_pointer;
  unsigned long long *input_string_pointer;
  char *character_scan_pointer;
  char *character_scan_pointer;
  bool byte_check_result2;
  unsigned int buffer_allocation_result;
  unsigned long long buffer_allocation_result;
  void *thread_stack_pointer;
  long long thread_stack_base_address;
  int thread_priority_level;
  ulong long stack_size_limit;
  void *thread_stack_pointer;
  char *pcStack_48;
  int thread_priority_level;
  unsigned long long stack_size_limit;
  buffer_allocation_result = DEFAULT_THREAD_POOL_FLAG;
  character_scan_pointer = (char *)0x0;
  system_execute_function(mutex_type);
  system_execute_function(handle,mutex_attr);
  buffer_allocation_result = 1;
  character_scan_pointer = "base";
  do {
    character_scan_pointer = character_scan_pointer;
    character_scan_pointer = character_scan_pointer + 1;
  } while (*character_scan_pointer != '\0');
  for (character_scan_pointer = *(char **)(thread_operation_flags + 0x30); character_scan_pointer = character_scan_pointer, character_scan_pointer != (char *)0x0;
      character_scan_pointer = *(char **)(character_scan_pointer + 0x58)) {
    character_scan_pointer = *(char **)character_scan_pointer;
    if (character_scan_pointer == (char *)0x0) {
      character_scan_pointer = (char *)0x180d48d24;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = *(char **)(character_scan_pointer + STRING_BUFFER_SIZE);
    }
    if (character_scan_pointer == character_scan_pointer + -0x180a04ee3) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      character_scan_pointer = character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) break;
      string_length_counter = (long long)&data_180a04ee4 - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto label_;
      }
    }
  }
label_:
  character_scan_pointer = "file";
  do {
    character_scan_pointer = character_scan_pointer;
    character_scan_pointer = character_scan_pointer + 1;
  } while (*character_scan_pointer != '\0');
  input_string_pointer = *(unsigned long long **)(character_scan_pointer + 0x30);
  do {
    if (input_string_pointer == (unsigned long long *)0x0) {
      return handle;
    }
    character_scan_pointer = (char *)*input_string_pointer;
    if (character_scan_pointer == (char *)0x0) {
      character_scan_pointer = (char *)0x180d48d24;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = (char *)input_string_pointer[2];
    }
    if (character_scan_pointer == character_scan_pointer + -0x180a0794b) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) break;
      string_length_counter = (long long)&system_180a0794c - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto label_;
      }
    }
    input_string_pointer = (unsigned long long *)input_string_pointer[0xb];
  } while( true );
label_:
  thread_stack_pointer = &g_threadString2;
  stack_size_limit = 0;
  pcStack_48 = (char *)0x0;
  thread_priority_level = 0;
  character_scan_pointer = "type";
  do {
    character_scan_pointer = character_scan_pointer;
    character_scan_pointer = character_scan_pointer + 1;
  } while (*character_scan_pointer != '\0');
  for (input_string_pointer = (unsigned long long *)input_string_pointer[8]; input_string_pointer != (unsigned long long *)0x0;
      input_string_pointer = (unsigned long long *)input_string_pointer[6]) {
    character_scan_pointer = (char *)*input_string_pointer;
    if (character_scan_pointer == (char *)0x0) {
      character_scan_pointer = (char *)0x180d48d24;
      character_scan_pointer = character_scan_pointer;
    }
    else {
      character_scan_pointer = (char *)input_string_pointer[2];
    }
    if (character_scan_pointer == character_scan_pointer + -0x180a0ee2f) {
      character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
      if (character_scan_pointer <= character_scan_pointer) {
label_:
        string_length_counter = 0x180d48d24;
        if (input_string_pointer[1] != 0) {
          string_length_counter = input_string_pointer[1];
        }
        system_execute_function(&thread_stack_pointer,string_length_counter,character_scan_pointer,input_string_pointer,buffer_allocation_result,buffer_allocation_result);
        break;
      }
      string_length_counter = (long long)&system_180a0ee30 - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto label_;
      }
    }
  }
  if (thread_priority_level == *(int *)(handle + STRING_BUFFER_SIZE)) {
    if (thread_priority_level == 0) {
label_:
      if (*(int *)(handle + STRING_BUFFER_SIZE) != 0) goto label_;
      byte_check_result2 = true;
    }
    else {
      character_scan_pointer = pcStack_48;
      do {
        system_char_variable = *character_scan_pointer;
        system_char_variable = character_scan_pointer[*(long long *)(handle + 8) - (long long)pcStack_48];
        if (system_char_variable != system_char_variable) break;
        character_scan_pointer = character_scan_pointer + 1;
      } while (system_char_variable != '\0');
      byte_check_result2 = system_char_variable == system_char_variable;
    }
  }
  else {
    if (thread_priority_level == 0) goto label_;
label_:
    byte_check_result2 = false;
  }
  if (byte_check_result2) {
    thread_stack_pointer = &g_threadString2;
    stack_size_limit = 0;
    thread_stack_base_address = 0;
    thread_priority_level = 0;
    character_scan_pointer = "name";
    do {
      character_scan_pointer = character_scan_pointer;
      character_scan_pointer = character_scan_pointer + 1;
    } while (*character_scan_pointer != '\0');
    for (input_string_pointer = (unsigned long long *)input_string_pointer[8]; input_string_pointer != (unsigned long long *)0x0;
        input_string_pointer = (unsigned long long *)input_string_pointer[6]) {
      character_scan_pointer = (char *)*input_string_pointer;
      if (character_scan_pointer == (char *)0x0) {
        character_scan_pointer = (char *)0x180d48d24;
        character_scan_pointer = character_scan_pointer;
      }
      else {
        character_scan_pointer = (char *)input_string_pointer[2];
      }
      if (character_scan_pointer == character_scan_pointer + -0x180a03a83) {
        character_scan_pointer = character_scan_pointer + (long long)character_scan_pointer;
        if (character_scan_pointer <= character_scan_pointer) {
label_:
          string_length_counter = 0x180d48d24;
          if (input_string_pointer[1] != 0) {
            string_length_counter = input_string_pointer[1];
          }
          system_execute_function(&thread_stack_pointer,string_length_counter);
          break;
        }
        string_length_counter = (long long)&data_180a03a84 - (long long)character_scan_pointer;
        while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
          character_scan_pointer = character_scan_pointer + 1;
          if (character_scan_pointer <= character_scan_pointer) goto label_;
        }
      }
    }
    input_string_pointer = *(unsigned long long **)(mutex_type + 8);
    if (input_string_pointer < *(unsigned long long **)(mutex_type + STRING_BUFFER_SIZE)) {
      *(unsigned long long **)(mutex_type + 8) = input_string_pointer + 4;
      *input_string_pointer = &g_threadString4;
      input_string_pointer[1] = 0;
      *(unsigned int *)(input_string_pointer + 2) = 0;
      *input_string_pointer = &g_threadString2;
      input_string_pointer[3] = 0;
      input_string_pointer[1] = 0;
      *(unsigned int *)(input_string_pointer + 2) = 0;
      system_thread_manager_001(input_string_pointer,thread_priority_level);
      if (thread_priority_level != 0) {
        memcpy(input_string_pointer[1],thread_stack_base_address,thread_priority_level + 1);
      }
      if (thread_stack_base_address != 0) {
        *(unsigned int *)(input_string_pointer + 2) = 0;
        if ((unsigned char *)input_string_pointer[1] != (unsigned char *)0x0) {
          *(unsigned char *)input_string_pointer[1] = 0;
        }
        *(unsigned int *)((long long)input_string_pointer + 0x1c) = 0;
      }
    }
    else {
      system_event_handler_006(mutex_type,&thread_stack_pointer);
    }
    thread_stack_pointer = &g_threadString2;
    if (thread_stack_base_address != 0) {
      handle_system_error();
    }
    thread_stack_base_address = 0;
    stack_size_limit = stack_size_limit & INT64_MASK;
    thread_stack_pointer = &g_threadString4;
  }
  input_string_pointer = (unsigned long long *)input_string_pointer[0xb];
  thread_stack_pointer = &g_threadString2;
  if (pcStack_48 != (char *)0x0) {
    handle_system_error();
  }
  if (input_string_pointer == (unsigned long long *)0x0) {
    return handle;
  }
  goto label_;
}
  data_180c95fea = 0;
  if (system_char_variable != '\0') {
    system_thread_003(&system_180a3cc28,handle);
  }
  if (string_length_counter != -1) {
    LOCK();
    system_global_data_pointer = system_global_data_pointer + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    alStack_3d0[0] = -1;
  }
  thread_stack_pointer = &g_threadString2;
  if (thread_stack_pointer == (void *)0x0) {
    thread_stack_pointer = (void *)0x0;
    stack_size_limit = 0;
    thread_stack_pointer = &g_threadString4;
    system_crypto_001(stack_size_limit ^ (ulong long)auStack_408);
  }
  handle_system_error();
}
int validate_config_handle(unsigned long long handle,char *thread_operation_flags)
{
  char *character_scan_pointer;
  char system_char_variable;
  unsigned long long *input_string_pointer;
  char *character_scan_pointer;
  long long string_length_counter;
  char *character_scan_pointer;
  int thread_result_index;
  input_string_pointer = (unsigned long long *)system_execute_function(handle,thread_operation_flags,0);
  thread_result_index = 0;
  if (input_string_pointer == (unsigned long long *)0x0) {
    return 0;
  }
  while (thread_result_index = thread_result_index + 1, thread_operation_flags == (char *)0x0) {
    input_string_pointer = (unsigned long long *)input_string_pointer[0xb];
label_:
    if (input_string_pointer == (unsigned long long *)0x0) {
      return thread_result_index;
    }
  }
  system_char_variable = *thread_operation_flags;
  character_scan_pointer = thread_operation_flags;
  while (system_char_variable != '\0') {
    character_scan_pointer = character_scan_pointer + 1;
    system_char_variable = *character_scan_pointer;
  }
  input_string_pointer = (unsigned long long *)input_string_pointer[0xb];
  if (input_string_pointer == (unsigned long long *)0x0) {
    return thread_result_index;
  }
  do {
    character_scan_pointer = (char *)*input_string_pointer;
    if (character_scan_pointer == (char *)0x0) {
      string_length_counter = 0;
      character_scan_pointer = (char *)0x180d48d24;
    }
    else {
      string_length_counter = input_string_pointer[2];
    }
    if (string_length_counter == (long long)character_scan_pointer - (long long)thread_operation_flags) {
      character_scan_pointer = character_scan_pointer + string_length_counter;
      if (character_scan_pointer <= character_scan_pointer) goto label_;
      string_length_counter = (long long)thread_operation_flags - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto label_;
      }
    }
    input_string_pointer = (unsigned long long *)input_string_pointer[0xb];
    if (input_string_pointer == (unsigned long long *)0x0) {
      return thread_result_index;
    }
  } while( true );
}
int process_config_with_mutex(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long *mutex_attr)
{
  char *character_scan_pointer;
  char system_char_variable;
  char *character_scan_pointer;
  char *unaffected_registerBX;
  long long string_length_counter;
  char *character_scan_pointer;
  int in_R11D;
  while (in_R11D = in_R11D + 1, unaffected_registerBX == (char *)0x0) {
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
label_:
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  }
  system_char_variable = *unaffected_registerBX;
  character_scan_pointer = unaffected_registerBX;
  while (system_char_variable != '\0') {
    character_scan_pointer = character_scan_pointer + 1;
    system_char_variable = *character_scan_pointer;
  }
  mutex_attr = (unsigned long long *)mutex_attr[0xb];
  if (mutex_attr == (unsigned long long *)0x0) {
    return in_R11D;
  }
  do {
    character_scan_pointer = (char *)*mutex_attr;
    if (character_scan_pointer == (char *)0x0) {
      string_length_counter = 0;
      character_scan_pointer = (char *)0x180d48d24;
    }
    else {
      string_length_counter = mutex_attr[2];
    }
    if (string_length_counter == (long long)character_scan_pointer - (long long)unaffected_registerBX) {
      character_scan_pointer = character_scan_pointer + string_length_counter;
      if (character_scan_pointer <= character_scan_pointer) goto label_;
      string_length_counter = (long long)unaffected_registerBX - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto label_;
      }
    }
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
  } while( true );
}
int validate_mutex_attributes(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long *mutex_attr)
{
  char *character_scan_pointer;
  char system_char_variable;
  char *character_scan_pointer;
  char *unaffected_registerBX;
  char *unaffected_registerDI;
  long long string_length_counter;
  char *character_scan_pointer;
  int in_R11D;
  do {
    mutex_attr = (unsigned long long *)mutex_attr[0xb];
label_:
    if (mutex_attr == (unsigned long long *)0x0) {
      return in_R11D;
    }
    in_R11D = in_R11D + 1;
  } while (unaffected_registerBX == (char *)0x0);
  system_char_variable = *unaffected_registerBX;
  character_scan_pointer = unaffected_registerBX;
  while (system_char_variable != '\0') {
    character_scan_pointer = character_scan_pointer + 1;
    system_char_variable = *character_scan_pointer;
  }
  mutex_attr = (unsigned long long *)mutex_attr[0xb];
  if (mutex_attr == (unsigned long long *)0x0) {
    return in_R11D;
  }
  do {
    if ((char *)*mutex_attr == (char *)0x0) {
      string_length_counter = 0;
      character_scan_pointer = unaffected_registerDI;
    }
    else {
      string_length_counter = mutex_attr[2];
      character_scan_pointer = (char *)*mutex_attr;
    }
    if (string_length_counter == (long long)character_scan_pointer - (long long)unaffected_registerBX) {
      character_scan_pointer = character_scan_pointer + string_length_counter;
      if (character_scan_pointer <= character_scan_pointer) goto label_;
      string_length_counter = (long long)unaffected_registerBX - (long long)character_scan_pointer;
      while (*character_scan_pointer == character_scan_pointer[string_length_counter]) {
        character_scan_pointer = character_scan_pointer + 1;
        if (character_scan_pointer <= character_scan_pointer) goto label_;
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
long long system_initialize_resources(unsigned long long handle,unsigned long long thread_operation_flags,long long mutex_attr)
{
  long long system_initialization_result;
  long long string_length_counter;
  char *character_scan_pointer;
  long long string_length_counter;
  unsigned long long buffer_allocation_result;
  void *thread_stack_pointer;
  char *pcStack_28;
  buffer_allocation_result = DEFAULT_THREAD_POOL_FLAG;
  system_initialization_result = system_execute_function();
  if (system_initialization_result == 0) {
    return 0;
  }
  string_length_counter = 0x180d48d24;
  if (*(long long *)(system_initialization_result + 8) != 0) {
    string_length_counter = *(long long *)(system_initialization_result + 8);
  }
  create_thread_context(&thread_stack_pointer,string_length_counter);
  if (*pcStack_28 != '\0') {
    system_initialization_result = 0;
    do {
      string_length_counter = strchr(&system_180a3cc48,(int)pcStack_28[system_initialization_result]);
      if (string_length_counter != 0) {
        pcStack_28[system_initialization_result] = ' ';
      }
      system_initialization_result = system_initialization_result + 1;
    } while (pcStack_28[system_initialization_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execute_function(character_scan_pointer,&system_180a3cbe0,mutex_attr,mutex_attr + 4,buffer_allocation_result);
  thread_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return string_length_counter;
}
long long allocate_thread_resources(unsigned long long handle,unsigned long long thread_operation_flags,long long mutex_attr)
{
  long long system_initialization_result;
  long long string_length_counter;
  char *character_scan_pointer;
  long long string_length_counter;
  void *thread_stack_pointer;
  char *pcStack_28;
  system_initialization_result = system_execute_function();
  if (system_initialization_result == 0) {
    return 0;
  }
  string_length_counter = 0x180d48d24;
  if (*(long long *)(system_initialization_result + 8) != 0) {
    string_length_counter = *(long long *)(system_initialization_result + 8);
  }
  create_thread_context(&thread_stack_pointer,string_length_counter);
  if (*pcStack_28 != '\0') {
    system_initialization_result = 0;
    do {
      string_length_counter = strchr(&system_180a3c9ec,(int)pcStack_28[system_initialization_result]);
      if (string_length_counter != 0) {
        pcStack_28[system_initialization_result] = ' ';
      }
      system_initialization_result = system_initialization_result + 1;
    } while (pcStack_28[system_initialization_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execute_function(character_scan_pointer,&system_180a3cc0c,mutex_attr,mutex_attr + 4,mutex_attr + 8);
  thread_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return string_length_counter;
}
long long initialize_thread_pool_resources(unsigned long long handle,unsigned long long thread_operation_flags,long long mutex_attr,unsigned long long mutex_type)
{
  long long system_initialization_result;
  long long string_length_counter;
  char *character_scan_pointer;
  long long string_length_counter;
  void *thread_stack_pointer;
  char *pcStack_28;
  system_initialization_result = system_execute_function(handle,&system_180a0696c,mutex_attr,mutex_type,DEFAULT_THREAD_POOL_FLAG);
  if (system_initialization_result == 0) {
    return 0;
  }
  string_length_counter = 0x180d48d24;
  if (*(long long *)(system_initialization_result + 8) != 0) {
    string_length_counter = *(long long *)(system_initialization_result + 8);
  }
  create_thread_context(&thread_stack_pointer,string_length_counter);
  if (*pcStack_28 != '\0') {
    system_initialization_result = 0;
    do {
      string_length_counter = strchr(&system_180a3cc04,(int)pcStack_28[system_initialization_result]);
      if (string_length_counter != 0) {
        pcStack_28[system_initialization_result] = ' ';
      }
      system_initialization_result = system_initialization_result + 1;
    } while (pcStack_28[system_initialization_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execute_function(character_scan_pointer,&system_180a3cc1c,mutex_attr,mutex_attr + 4);
  thread_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return string_length_counter;
}
long long validate_thread_configuration(unsigned long long handle,unsigned long long thread_operation_flags,long long mutex_attr)
{
  int thread_result_index;
  long long string_length_counter;
  long long string_length_counter;
  char *character_scan_pointer;
  long long string_length_counter;
  unsigned long long buffer_allocation_result;
  void *thread_stack_pointer;
  char *pcStack_28;
  buffer_allocation_result = DEFAULT_THREAD_POOL_FLAG;
  string_length_counter = system_execute_function();
  if (string_length_counter == 0) {
    return 0;
  }
  string_length_counter = 0x180d48d24;
  if (*(long long *)(string_length_counter + 8) != 0) {
    string_length_counter = *(long long *)(string_length_counter + 8);
  }
  create_thread_context(&thread_stack_pointer,string_length_counter);
  if (*pcStack_28 != '\0') {
    string_length_counter = 0;
    do {
      string_length_counter = strchr(&system_180a3c9ec,(int)pcStack_28[string_length_counter]);
      if (string_length_counter != 0) {
        pcStack_28[string_length_counter] = ' ';
      }
      string_length_counter = string_length_counter + 1;
    } while (pcStack_28[string_length_counter] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  thread_result_index = system_execute_function(character_scan_pointer,&system_180a3c9f8,mutex_attr,mutex_attr + 4,mutex_attr + 8,
                        (unsigned int *)(mutex_attr + 0xc),buffer_allocation_result);
  if (thread_result_index == 3) {
    *(unsigned int *)(mutex_attr + 0xc) = 0x3f800000;
  }
  thread_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return string_length_counter;
}
long long process_thread_initialization(unsigned long long handle,unsigned long long thread_operation_flags,long long mutex_attr)
{
  long long system_initialization_result;
  long long string_length_counter;
  char *character_scan_pointer;
  long long string_length_counter;
  unsigned long long buffer_allocation_result;
  void *thread_stack_pointer;
  char *pcStack_28;
  buffer_allocation_result = DEFAULT_THREAD_POOL_FLAG;
  system_initialization_result = system_execute_function(handle,&system_180a16818);
  if (system_initialization_result == 0) {
    return 0;
  }
  string_length_counter = 0x180d48d24;
  if (*(long long *)(system_initialization_result + 8) != 0) {
    string_length_counter = *(long long *)(system_initialization_result + 8);
  }
  create_thread_context(&thread_stack_pointer,string_length_counter);
  if (*pcStack_28 != '\0') {
    system_initialization_result = 0;
    do {
      string_length_counter = strchr(&system_180a3cc04,(int)pcStack_28[system_initialization_result]);
      if (string_length_counter != 0) {
        pcStack_28[system_initialization_result] = ' ';
      }
      system_initialization_result = system_initialization_result + 1;
    } while (pcStack_28[system_initialization_result] != '\0');
  }
  character_scan_pointer = "";
  if (pcStack_28 != (char *)0x0) {
    character_scan_pointer = pcStack_28;
  }
  system_execute_function(character_scan_pointer,&system_180a3c9f8,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr,buffer_allocation_result);
  thread_stack_pointer = &g_threadString2;
  if (pcStack_28 != (char *)0x0) {
    handle_system_error();
  }
  return string_length_counter;
}
long long initialize_thread_synchronization(unsigned long long handle,unsigned long long thread_operation_flags,long long mutex_attr)
{
  long long *psystem_initialization_result;
  long long string_length_counter;
  long long string_length_counter;
  char *character_scan_pointer;
  long long string_length_counter;
  void *thread_stack_pointer;
  char *pcStack_28;
  string_length_counter = system_execute_function();
  if (string_length_counter != 0) {
    psystem_initialization_result = (long long *)(string_length_counter + 8);
    string_length_counter = 0x180d48d24;
    if (*psystem_initialization_result != 0) {
      string_length_counter = *psystem_initialization_result;
    }
    create_thread_context(&thread_stack_pointer,string_length_counter);
    if (*pcStack_28 != '\0') {
      string_length_counter = 0;
      do {
        string_length_counter = strchr(&system_180a3cc04,(int)pcStack_28[string_length_counter]);
        if (string_length_counter != 0) {
          pcStack_28[string_length_counter] = ' ';
        }
        string_length_counter = string_length_counter + 1;
      } while (pcStack_28[string_length_counter] != '\0');
    }
    character_scan_pointer = "";
    if (pcStack_28 != (char *)0x0) {
      character_scan_pointer = pcStack_28;
    }
    system_execute_function(character_scan_pointer,&system_180a3ccc8,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + STRING_BUFFER_SIZE,
                  mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + config_path_buffer_size,mutex_attr + 0x24,mutex_attr + 0x28);
    thread_stack_pointer = &g_threadString2;
    if (pcStack_28 != (char *)0x0) {
      handle_system_error();
    }
  }
  return string_length_counter;
}
long long setup_thread_communication(unsigned long long handle,unsigned long long thread_operation_flags,long long mutex_attr)
{
  long long *psystem_initialization_result;
  long long string_length_counter;
  long long string_length_counter;
  char *character_scan_pointer;
  long long string_length_counter;
  unsigned long long buffer_allocation_result;
  void *thread_stack_pointer;
  char *pcStack_50;
  buffer_allocation_result = DEFAULT_THREAD_POOL_FLAG;
  string_length_counter = system_execute_function();
  if (string_length_counter != 0) {
    psystem_initialization_result = (long long *)(string_length_counter + 8);
    string_length_counter = 0x180d48d24;
    if (*psystem_initialization_result != 0) {
      string_length_counter = *psystem_initialization_result;
    }
    create_thread_context(&thread_stack_pointer,string_length_counter);
    if (*pcStack_50 != '\0') {
      string_length_counter = 0;
      do {
        string_length_counter = strchr(&system_180a3cc04,(int)pcStack_50[string_length_counter]);
        if (string_length_counter != 0) {
          pcStack_50[string_length_counter] = ' ';
        }
        string_length_counter = string_length_counter + 1;
      } while (pcStack_50[string_length_counter] != '\0');
    }
    character_scan_pointer = "";
    if (pcStack_50 != (char *)0x0) {
      character_scan_pointer = pcStack_50;
    }
    system_execute_function(character_scan_pointer,&system_180a3cca0,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr + STRING_BUFFER_SIZE
                  ,mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + 0x1c,mutex_attr + config_path_buffer_size,mutex_attr + 0x24,
                  mutex_attr + 0x28,mutex_attr + 0x2c,mutex_attr + 0x30,mutex_attr + 0x34,mutex_attr + 0x38,
                  mutex_attr + 0x3c,string_length_counter,buffer_allocation_result);
    thread_stack_pointer = &g_threadString2;
    if (pcStack_50 != (char *)0x0) {
      handle_system_error();
    }
  }
  return string_length_counter;
}
long long create_thread_with_attributes(unsigned long long handle,unsigned long long thread_operation_flags,unsigned long long *mutex_attr)
{
  unsigned long long buffer_allocation_result;
  long long string_length_counter;
  unsigned long long *input_string_pointer;
  long long string_length_counter;
  unsigned char auStack_18 [16];
  string_length_counter = system_execute_function();
  if (string_length_counter != 0) {
    string_length_counter = 0x180d48d24;
    if (*(long long *)(string_length_counter + 8) != 0) {
      string_length_counter = *(long long *)(string_length_counter + 8);
    }
    input_string_pointer = (unsigned long long *)system_execute_function(auStack_18,string_length_counter);
    buffer_allocation_result = input_string_pointer[1];
    *mutex_attr = *input_string_pointer;
    mutex_attr[1] = buffer_allocation_result;
    return string_length_counter;
  }
  return 0;
}
unsigned long long get_thread_handle(unsigned long long handle)
{
  unsigned long long buffer_allocation_result;
  unsigned long long *pthread_operation_flags;
  unsigned long long buffer_allocation_result;
  unsigned long long *unaffected_registerDI;
  bool in_ZF;
  unsigned char temp_stack_array [8];
  buffer_allocation_result = 0x180d48d24;
  if (!in_ZF) {
    buffer_allocation_result = handle;
  }
  pthread_operation_flags = (unsigned long long *)system_execute_function(temp_stack_array,buffer_allocation_result);
  buffer_allocation_result = pthread_operation_flags[1];
  *unaffected_registerDI = *pthread_operation_flags;
  unaffected_registerDI[1] = buffer_allocation_result;
  return buffer_allocation_result;
}
  data_180bf66d8 = 0;
  system_crypto_002(system_execute_function);
  system_execute_function(&system_18064ffc0);
  string_length_counter = 0;
  system_global_data_pointer = system_execute_function;
  input_string_pointer = (unsigned int *)&data_180bfbd80;
  string_length_counter = 0x16;
  do {
    if (input_string_pointer[1] == 0) {
      system_execute_function(input_string_pointer);
    }
    if (string_length_counter != 2) {
      system_execute_function(&system_180a3db60,*(unsigned long long *)(input_string_pointer + 4),*input_string_pointer);
    }
    string_length_counter = string_length_counter + 1;
    input_string_pointer = input_string_pointer + 6;
    string_length_counter = string_length_counter + -1;
  } while (string_length_counter != 0);
  if (system_global_data_pointer == 0) {
    system_execute_function(&data_180bfbf60);
  }
  system_global_data_pointer = (long long)system_global_data_pointer;
  if (system_global_data_pointer == 0) {
    system_execute_function(&data_180bfbf78);
  }
  system_global_data_pointer = (long long)system_global_data_pointer;
  system_execute_function();
  if (data_180c8efc8 != '\0') {
    system_execute_function(&system_180a3d970);
  }
  return;
}
  data_180c8ecef = 1;
  if (data_180d49130 == '\0') {
    data_180d49130 = '\x01';
    thread_operation_flags = FlsAlloc(&system_18064f970);
    system_global_data_pointer = thread_operation_flags;
    *(unsigned long long *)
     (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) + STRING_BUFFER_SIZE) =
         0x180bf4000;
    FlsSetValue(thread_operation_flags);
  }
  system_execute_function(&system_180a3d988,&ExceptionList);
  system_initialization_result = cpuid_Extended_Feature_Enumeration_info(7);
  data_180c8f000 = (byte)(*(uint *)(system_initialization_result + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (stack_size_limit != 0) {
    system_global_data_pointer = (ulong long)stack_size_limit;
  }
  system_execute_function();
  system_execute_function(&system_180a3d940,0);
  system_execute_function();
  plVar3 = (long long *)system_execute_function();
  if ((void *)(*plVar3 + 0x3d8) == &data_180c8ed80) {
    memset(&data_180c8ed80,0,0x240);
  }
  memset((void *)(*plVar3 + 0x3d8),0,0x240);
}
  data_180d49131 = 1;
  FlsSetValue(system_global_data_pointer,0);
  FlsFree(system_global_data_pointer);
  system_execute_function(*(unsigned long long *)
                 (*(long long *)((long long)ThreadLocalStoragePointer + (ulong long)__tls_index * 8) +
                 STRING_BUFFER_SIZE),1);
  if (system_global_data_pointer == 0) {
    system_execute_function(&data_180bfbd98);
  }
  if (system_global_data_pointer == 0) {
    if (system_global_data_pointer == 0) {
      system_execute_function(&data_180bfbdb0);
    }
    if (system_global_data_pointer == 0) goto label_;
  }
  psystem_initialization_result = (long long *)system_execute_function();
  pthread_operation_flags = (void *)(*psystem_initialization_result + 0x3d8);
  if (pthread_operation_flags != &data_180c8ed80) {
    system_execute_function();
    memset(pthread_operation_flags,0,0x240);
  }
  system_execute_function();
label_:
  system_execute_function(&system_180a3d958,system_global_data_pointer);
  data_180bf66d8 = 1;
  return;
}
unsigned int validate_resource_handle(int handle)
{
  if (*(int *)(&data_180bfbd84 + (long long)handle * 0x18) == 0) {
    system_execute_function(&data_180bfbd80 + (long long)handle * 0x18);
  }
  return *(unsigned int *)(&data_180bfbd80 + (long long)handle * 0x18);
}
    data_180c8f020 = 0;
    return;
  }
  string_length_counter = -1;
  do {
    string_length_counter = string_length_counter + 1;
  } while (*(char *)(handle + string_length_counter) != '\0');
  buffer_allocation_result = (uint)string_length_counter;
  if (MAX_THREAD_STACK_SIZE < buffer_allocation_result) {
    buffer_allocation_result = MAX_THREAD_STACK_SIZE;
  }
  memcpy(&data_180c8f020,handle,(long long)(int)buffer_allocation_result);
}
  data_180c8f020 = 0;
  return;
}
unsigned long long system_initialize_context(unsigned long long handle)
{
  unsigned long long buffer_allocation_result;
  long long string_length_counter;
  buffer_allocation_result = system_execute_function(system_global_data_pointer,handle,0x19);
  string_length_counter = allocate_temporary_buffer(buffer_allocation_result);
  LOCK();
  system_global_data_pointer = system_global_data_pointer + string_length_counter;
  UNLOCK();
  return buffer_allocation_result;
}
unsigned long long setup_context_with_thread_operation_flags(unsigned long long handle,unsigned long long thread_operation_flags)
{
  long long system_initialization_result;
  unsigned long long thread_operation_flags;
  system_initialization_result = allocate_temporary_buffer();
  thread_operation_flags = system_execute_function(system_global_data_pointer,handle,thread_operation_flags,0x19);
  LOCK();
  system_global_data_pointer = system_global_data_pointer - system_initialization_result;
  UNLOCK();
  system_initialization_result = allocate_temporary_buffer(thread_operation_flags);
  LOCK();
  system_global_data_pointer = system_global_data_pointer + system_initialization_result;
  UNLOCK();
  return thread_operation_flags;
}
long long process_context_handle(long long *handle)
{
  int *piVar1;
  long long string_length_counter;
  long long string_length_counter;
  ulong long buffer_allocation_result;
  string_length_counter = allocate_temporary_buffer();
  string_length_counter = system_global_data_pointer;
  LOCK();
  string_length_counter = system_global_data_pointer - string_length_counter;
  system_global_data_pointer = string_length_counter;
  UNLOCK();
  if (handle == (long long *)0x0) {
    return string_length_counter;
  }
  buffer_allocation_result = (ulong long)handle & 0xffffffffffc00000;
  if (buffer_allocation_result != 0) {
    string_length_counter = buffer_allocation_result + 0x80 + ((long long)handle - buffer_allocation_result >> STRING_BUFFER_SIZE) * 0x50;
    string_length_counter = string_length_counter - (ulong long)*(uint *)(string_length_counter + 4);
    if ((*(void ***)(buffer_allocation_result + 0x70) == &ExceptionList) && (*(char *)(string_length_counter + 0xe) == '\0')) {
      string_length_counter = *(long long *)(string_length_counter + config_path_buffer_size);
      *handle = string_length_counter;
      *(long long **)(string_length_counter + config_path_buffer_size) = handle;
      piVar1 = (int *)(string_length_counter + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        string_length_counter = system_execute_function();
        return string_length_counter;
      }
    }
    else {
      string_length_counter = func_0x00018064e870(buffer_allocation_result,CONCAT71(0xff000000,
                                                 *(void ***)(buffer_allocation_result + 0x70) == &ExceptionList),
                                  handle,buffer_allocation_result,DEFAULT_THREAD_POOL_FLAG);
    }
  }
  return string_length_counter;
}
      data_180d4913c = '\x01';
      handle = stack_size_limit;
    }
    pfloat_variable = afStack_2e8;
    string_length_counter = 0;
    string_length_counter = config_path_buffer_size;
    string_length_counter = config_path_buffer_size;
    do {
      float_variable = param_5 * *(float *)(string_length_counter + 0x180d4a0a8);
      float_variable = param_5 * *(float *)(string_length_counter + 0x180d4a0a4);
      float_variable = param_5 * *(float *)(string_length_counter + 0x180d4a0a0);
      float_variable = float_variable * *mutex_attr + float_variable * mutex_attr[4] + float_variable * mutex_attr[8] + mutex_attr[0xc];
      float_variable = float_variable * mutex_attr[1] + float_variable * mutex_attr[5] + float_variable * mutex_attr[9] + mutex_attr[0xd];
      float_variable = float_variable * mutex_attr[2] + float_variable * mutex_attr[6] + float_variable * mutex_attr[10] + mutex_attr[0xe];
      float_variable = float_variable * mutex_attr[3] + float_variable * mutex_attr[7] + float_variable * mutex_attr[0xb] + mutex_attr[0xf];
      *(float *)((long long)afStack_2e8 + string_length_counter) = float_variable;
      *(float *)((long long)afStack_2e8 + string_length_counter + 4) = float_variable;
      *(float *)((long long)&stack_size_limit + string_length_counter) = float_variable;
      *(float *)((long long)&stack_size_limit + string_length_counter + 4) = float_variable;
      if (thread_operation_flags != 0) {
        stack_size_limit = stack_size_limit & INT64_MASK;
        if (*(long long *)(thread_operation_flags + 0x2908) == 0) {
          system_execute_function(thread_operation_flags,pfloat_variable,0x31b189,&stack_size_limit);
          float_variable = (float)stack_size_limit;
        }
        else {
          cStack_324 = '\0';
          stack_size_limit = 0;
          stack_size_limit = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          stack_size_limit = 0;
          stack_size_limit = 0;
          stack_size_limit = merge_32bit_values(float_variable,float_variable);
          stack_size_limit = merge_32bit_values(float_variable,float_variable);
          stack_size_limit = CONCAT31(stack_size_limit._1_3_,1);
          stack_size_limit = 0;
          system_execute_function(thread_operation_flags,&stack_size_limit,0,auStack_358);
          float_variable = fStack_328;
          if (cStack_324 == '\0') {
            float_variable = 0.0;
          }
        }
        *(float *)((long long)&stack_size_limit + string_length_counter) = float_variable + 0.01;
      }
      pfloat_variable = pfloat_variable + 4;
      string_length_counter = string_length_counter + STRING_BUFFER_SIZE;
      string_length_counter = string_length_counter + -1;
    } while (string_length_counter != 0);
    float_variable = mutex_attr[0xe];
    float_variable = mutex_attr[0xd];
    float_variable = mutex_attr[0xc];
    float_variable = mutex_attr[9];
    float_variable = mutex_attr[8];
    float_variable = mutex_attr[10];
    stack_size_limit = 0x7f7fffff;
    pfloat_variable = afStack_2e8;
    string_length_counter = config_path_buffer_size;
    do {
      float_variable = pfloat_variable[2] - float_variable;
      float_variable = pfloat_variable[1] - float_variable;
      float_variable = *pfloat_variable - float_variable;
      float_variable = float_variable * float_variable + float_variable * float_variable + float_variable * float_variable;
      float_variable = float_variable - float_variable * float_variable;
      float_variable = float_variable - float_variable * float_variable;
      float_variable = float_variable - float_variable * float_variable;
      float_variable = float_variable * float_variable + float_variable * float_variable + float_variable * float_variable;
      temp_buffer_array3 = rsqrtss(zero_extension_float((uint)float_variable),zero_extension_float((uint)float_variable));
      float_variable = temp_buffer_array3._0_4_;
      float_variable = float_variable * 0.5 * (3.0 - float_variable * float_variable * float_variable);
      fStack_370 = float_variable * float_variable * param_5 + float_variable;
      float_variable = float_variable * float_variable * param_5 + float_variable;
      float_variable = float_variable * float_variable * param_5 + float_variable;
      stack_size_limit = merge_32bit_values(float_variable,float_variable);
      *pfloat_variable = float_variable;
      pfloat_variable[1] = float_variable;
      pfloat_variable[2] = fStack_370;
      pfloat_variable[3] = 3.4028235e+38;
      pfloat_variable = pfloat_variable + 4;
      string_length_counter = string_length_counter + -1;
    } while (string_length_counter != 0);
    if (thread_operation_flags != 0) {
      pfloat_variable = (float *)&stack_size_limit;
      pfloat_variable = afStack_2e8;
      do {
        stack_size_limit = stack_size_limit & INT64_MASK;
        if (*(long long *)(thread_operation_flags + 0x2908) == 0) {
          system_execute_function(thread_operation_flags,pfloat_variable,0x31b189,&stack_size_limit);
          float_variable = (float)stack_size_limit;
        }
        else {
          cStack_324 = '\0';
          stack_size_limit = 0;
          stack_size_limit = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          stack_size_limit = 0;
          stack_size_limit = 0;
          stack_size_limit = *(unsigned long long *)(pfloat_variable + -2);
          stack_size_limit = *(unsigned long long *)pfloat_variable;
          stack_size_limit = CONCAT31(stack_size_limit._1_3_,1);
          stack_size_limit = 0;
          system_execute_function(thread_operation_flags,&stack_size_limit,0,auStack_358);
          float_variable = fStack_328;
          if (cStack_324 == '\0') {
            float_variable = 0.0;
          }
        }
        *pfloat_variable = float_variable + 0.01;
        pfloat_variable = pfloat_variable + 4;
        pfloat_variable = pfloat_variable + 4;
        string_length_counter = string_length_counter + -1;
      } while (string_length_counter != 0);
    }
    buffer_allocation_result = 0;
    string_length_counter = 0;
    do {
      string_length_counter = 0;
      if (buffer_allocation_result != 0x1f) {
        string_length_counter = string_length_counter + 1;
      }
      if (((handle2 == '\0') || ((buffer_allocation_result & 1) != 0)) &&
         (system_char_variable = system_execute_function((double)((float)(int)buffer_allocation_result * 0.19634955),SUB84((double)param_6,0),
                                (double)param_7), system_char_variable != '\0')) {
        fStack_370 = *(float *)(&stack_size_limit + string_length_counter * 2) - *(float *)(&stack_size_limit + string_length_counter * 2);
        stack_size_limit = merge_32bit_values(afStack_2e8[string_length_counter * 4 + 1] - afStack_2e8[string_length_counter * 4 + 1],
                              afStack_2e8[string_length_counter * 4] - afStack_2e8[string_length_counter * 4]);
        stack_size_limit = 0x7f7fffff;
        stack_size_limit = 0;
        stack_size_limit = CONCAT31(stack_size_limit._1_3_,handle1);
        system_execute_function(handle,afStack_2e8 + string_length_counter * 4,&stack_size_limit,param_8);
      }
      buffer_allocation_result = buffer_allocation_result + 1;
      string_length_counter = string_length_counter + 1;
    } while ((int)buffer_allocation_result < config_path_buffer_size);
  }
  thread_result_index = _Mtx_unlock(handle);
  if (thread_result_index != 0) {
    __Throw_C_error_std__YAXH_Z(thread_result_index);
  }
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_3a8);
}
                    system_data_character = system_data_character + system_char_variable;
                    if (system_data_character != '\0' && byte_flag_value7 == system_data_character < '\0') {
                      out((short)thread_operation_flags,thread_result_index);
                      halt_baddata();
                    }
                    in_OF = SCARRY1((char)*unaffected_registerDI,system_char_variable);
                    *unaffected_registerDI = (code)((char)*unaffected_registerDI + system_char_variable);
                    in_SF = (char)*unaffected_registerDI < '\0';
                    in_ZF = *unaffected_registerDI == (code)0x0;
                    goto label_;
                  }
                }
                pthread_operation_flags = input_string_pointer;
                *(void **)((long long)pthread_operation_flags + -8) = &system_18076804b;
                (*unaffected_registerDI)();
                *(unsigned long long *)((long long)pthread_operation_flags + -8) = 0x180768051;
                CoUninitialize();
label_:
                *(unsigned long long *)((long long)pthread_operation_flags + -8) = 0x180768059;
                _endthreadex(0);
                return;
              }
              system_char_variable = (char)*in_RAX;
            }
            in_RAX = (int *)CONCAT71((int7)((ulong long)in_RAX >> 8),system_char_variable + system_char_variable);
LAB_180768028_1:
            piVar2 = (int *)(((ulong long)in_RAX & UINT32_MAXffffff20) - 0x75);
            *piVar2 = *piVar2 + (int)handle;
            *(int *)(((ulong long)in_RAX & UINT32_MAXffffff20) - 0x17ffffff) = (int)pthread_operation_flags;
            halt_baddata();
          }
        }
      }
    }
  }
  mutex_type = 0x266;
  *(unsigned char *)((long long)register0x00000020 + config_path_buffer_size) = 1;
label_:
  buffer_allocation_result = *(unsigned long long *)(character_scan_pointer + 0x1a0);
  *(unsigned char **)((long long)register0x00000020 + -8) = &label_;
  system_execute_function(buffer_allocation_result,character_scan_pointer,mutex_attr,mutex_type);
}
    data_180c2e030 = '\x01';
  }
  if (mutex_attr != (int *)0x0) {
    *mutex_attr = ((thread_operation_flags + 1) / 2) * 0x48d0;
  }
  if (mutex_type != (unsigned int *)0x0) {
    *mutex_type = 0x480;
  }
  return 0;
}
unsigned long long allocate_resource_memory(int handle)
{
  byte byte_check_result;
  int thread_result_index;
  uint buffer_allocation_result;
  long long string_length_counter;
  float *pfloat_variable;
  int thread_result_index;
  float *pfloat_variable;
  uint buffer_allocation_result;
  ulong long buffer_allocation_result;
  ulong long buffer_allocation_result;
  int *piVar12;
  uint buffer_allocation_result;
  long long *psystem_initialization_result4;
  long long system_initialization_result5;
  uint buffer_allocation_result;
  int thread_result_index;
  int thread_result_index;
  float float_variable;
  unsigned long long thread_operation_flags;
  unsigned long long extraout_XMM0_Qb;
  float float_variable;
  unsigned char in_XMM2 [16];
  unsigned char athread_operation_flags [16];
  float float_variable;
  float float_variable;
  unsigned char unaff_XMM6 [16];
  unsigned char athread_operation_flags [16];
  ulong long buffer_allocation_result;
  psystem_initialization_result4 = (long long *)&data_180be5740;
  thread_result_index = 0;
  do {
    buffer_allocation_result = 0;
    system_initialization_result5 = *psystem_initialization_result4;
    buffer_allocation_result = STRING_BUFFER_SIZE >> ((byte)thread_result_index & 0x1f);
    buffer_allocation_result = SYSTEM_CONFIG_BUFFER_SIZE >> ((byte)thread_result_index & 0x1f);
    buffer_allocation_result = buffer_allocation_result;
    buffer_allocation_result = buffer_allocation_result;
    if ((buffer_allocation_result != 0) && (buffer_allocation_result = 0, 3 < buffer_allocation_result)) {
      athread_operation_flags._0_4_ = (float)(int)buffer_allocation_result;
      athread_operation_flags._4_4_ = athread_operation_flags._0_4_;
      athread_operation_flags._8_4_ = athread_operation_flags._0_4_;
      athread_operation_flags._12_4_ = athread_operation_flags._0_4_;
      buffer_allocation_result = buffer_allocation_result & 0x80000003;
      if ((int)buffer_allocation_result < 0) {
        buffer_allocation_result = (buffer_allocation_result - 1 | 0xfffffffc) + 1;
      }
      athread_operation_flags = rcpps(unaff_XMM6,athread_operation_flags);
      float_variable = athread_operation_flags._0_4_;
      float_variable = athread_operation_flags._4_4_;
      float_variable = athread_operation_flags._8_4_;
      float_variable = athread_operation_flags._12_4_;
      unaff_XMM6._0_4_ = (float_variable + float_variable) - float_variable * float_variable * athread_operation_flags._0_4_;
      unaff_XMM6._4_4_ = (float_variable + float_variable) - float_variable * float_variable * athread_operation_flags._0_4_;
      unaff_XMM6._8_4_ = (float_variable + float_variable) - float_variable * float_variable * athread_operation_flags._0_4_;
      unaff_XMM6._12_4_ = (float_variable + float_variable) - float_variable * float_variable * athread_operation_flags._0_4_;
      do {
        thread_operation_flags = GetSystemFlags();
        athread_operation_flags._0_4_ = (float)thread_operation_flags * 2.0;
        athread_operation_flags._4_4_ = (float)((ulong long)thread_operation_flags >> config_path_buffer_size) * 2.0;
        athread_operation_flags._8_4_ = (float)extraout_XMM0_Qb * 2.0;
        athread_operation_flags._12_4_ = (float)((ulong long)extraout_XMM0_Qb >> config_path_buffer_size) * 2.0;
        buffer_allocation_result = (int)buffer_allocation_result + 4;
        buffer_allocation_result = (ulong long)buffer_allocation_result;
        athread_operation_flags = rcpps(in_XMM2,athread_operation_flags);
        float_variable = athread_operation_flags._0_4_;
        float_variable = athread_operation_flags._4_4_;
        float_variable = athread_operation_flags._8_4_;
        float_variable = athread_operation_flags._12_4_;
        in_XMM2._0_4_ = (float_variable + float_variable) - float_variable * float_variable * athread_operation_flags._0_4_;
        in_XMM2._4_4_ = (float_variable + float_variable) - float_variable * float_variable * athread_operation_flags._4_4_;
        in_XMM2._8_4_ = (float_variable + float_variable) - float_variable * float_variable * athread_operation_flags._8_4_;
        in_XMM2._12_4_ = (float_variable + float_variable) - float_variable * float_variable * athread_operation_flags._12_4_;
        *(unsigned char (*) [16])(system_initialization_result5 + buffer_allocation_result * 4) = in_XMM2;
        buffer_allocation_result = buffer_allocation_result + 4;
        buffer_allocation_result = buffer_allocation_result;
      } while ((int)buffer_allocation_result < (int)(buffer_allocation_result - buffer_allocation_result));
    }
    if ((int)buffer_allocation_result < (int)buffer_allocation_result) {
      pfloat_variable = (float *)(system_initialization_result5 + buffer_allocation_result * 4);
      float_variable = 1.0 / (float)(int)buffer_allocation_result;
      unaff_XMM6 = zero_extension_float((uint)float_variable);
      do {
        float_variable = (float)cosf(((float)(int)buffer_allocation_result * 6.2831855 + 3.1415927) * float_variable);
        buffer_allocation_result = (int)buffer_allocation_result + 1;
        buffer_allocation_result = (ulong long)buffer_allocation_result;
        *pfloat_variable = 0.5 / float_variable;
        pfloat_variable = pfloat_variable + 1;
      } while ((int)buffer_allocation_result < (int)buffer_allocation_result);
    }
    thread_result_index = thread_result_index + 1;
    psystem_initialization_result4 = psystem_initialization_result4 + 1;
  } while (thread_result_index < 5);
  piVar12 = (int *)0x180be5774;
  pfloat_variable = (float *)0x180c2e040;
  system_global_data_pointer = 0x180c2e040;
  handle = -handle;
  thread_result_index = 2;
  thread_result_index = string_buffer_size_constant;
  system_initialization_result5 = 0x140;
  buffer_allocation_result = 0;
  do {
    buffer_allocation_result = buffer_allocation_result;
    if (pfloat_variable < (float *)0x180c2e880) {
      float_variable = (float)piVar12[-1] * 1.5258789e-05 * (float)handle;
      *pfloat_variable = float_variable;
      pfloat_variable[STRING_BUFFER_SIZE] = float_variable;
    }
    pfloat_variable = pfloat_variable + -0x3ff;
    if (((byte)buffer_allocation_result & 0x1f) != 0x1f) {
      pfloat_variable = pfloat_variable;
    }
    thread_result_index = -handle;
    if (((byte)buffer_allocation_result & 0x3f) != 0x3f) {
      thread_result_index = handle;
    }
    if (pfloat_variable + config_path_buffer_size < (float *)0x180c2e880) {
      float_variable = (float)*piVar12 * 1.5258789e-05 * (float)thread_result_index;
      pfloat_variable[config_path_buffer_size] = float_variable;
      pfloat_variable[0x30] = float_variable;
    }
    byte_check_result = (byte)thread_result_index;
    buffer_allocation_result = thread_result_index - 1U & 0x1f;
    thread_result_index = -thread_result_index;
    if ((byte_check_result - 1 & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    string_length_counter = -0xefc;
    if (buffer_allocation_result != 0x1f) {
      string_length_counter = string_buffer_size_constant;
    }
    pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
    if (pfloat_variable < (float *)0x180c2e880) {
      string_length_counter = -0xebc;
      if (buffer_allocation_result != 0x1f) {
        string_length_counter = system_initialization_result5;
      }
      float_variable = (float)piVar12[1] * 1.5258789e-05 * (float)thread_result_index;
      *pfloat_variable = float_variable;
      *(float *)(string_length_counter + (long long)pfloat_variable) = float_variable;
    }
    if ((byte_check_result & 0x1f) == 0x1f) {
      string_length_counter = -0x1ef8;
      if (buffer_allocation_result != 0x1f) {
        string_length_counter = -0xefc;
      }
      pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_variable + config_path_buffer_size < (float *)0x180c2e880) {
      float_variable = (float)piVar12[2] * 1.5258789e-05 * (float)thread_result_index;
      pfloat_variable[config_path_buffer_size] = float_variable;
      pfloat_variable[0x30] = float_variable;
    }
    buffer_allocation_result = thread_result_index + 1U & 0x1f;
    string_length_counter = -0xefc;
    thread_result_index = -thread_result_index;
    if (((byte)(thread_result_index + 1U) & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (buffer_allocation_result != 0x1f) {
      string_length_counter = string_buffer_size_constant;
    }
    pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
    if (pfloat_variable < (float *)0x180c2e880) {
      string_length_counter = -0xebc;
      if (buffer_allocation_result != 0x1f) {
        string_length_counter = system_initialization_result5;
      }
      float_variable = (float)piVar12[3] * 1.5258789e-05 * (float)thread_result_index;
      *pfloat_variable = float_variable;
      *(float *)(string_length_counter + (long long)pfloat_variable) = float_variable;
    }
    if ((byte_check_result + 2 & 0x1f) == 0x1f) {
      string_length_counter = -0x1ef8;
      if (buffer_allocation_result != 0x1f) {
        string_length_counter = -0xefc;
      }
      pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result + 2 & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_variable + config_path_buffer_size < (float *)0x180c2e880) {
      float_variable = (float)piVar12[4] * 1.5258789e-05 * (float)thread_result_index;
      pfloat_variable[config_path_buffer_size] = float_variable;
      pfloat_variable[0x30] = float_variable;
    }
    buffer_allocation_result = thread_result_index + 3U & 0x1f;
    string_length_counter = -0xefc;
    thread_result_index = -thread_result_index;
    if (((byte)(thread_result_index + 3U) & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (buffer_allocation_result != 0x1f) {
      string_length_counter = string_buffer_size_constant;
    }
    pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
    if (pfloat_variable < (float *)0x180c2e880) {
      string_length_counter = -0xebc;
      if (buffer_allocation_result != 0x1f) {
        string_length_counter = system_initialization_result5;
      }
      float_variable = (float)piVar12[5] * 1.5258789e-05 * (float)thread_result_index;
      *pfloat_variable = float_variable;
      *(float *)(string_length_counter + (long long)pfloat_variable) = float_variable;
    }
    if ((byte_check_result + 4 & 0x1f) == 0x1f) {
      string_length_counter = -0x1ef8;
      if (buffer_allocation_result != 0x1f) {
        string_length_counter = -0xefc;
      }
      pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
    }
    thread_result_index = -thread_result_index;
    if ((byte_check_result + 4 & 0x3f) != 0x3f) {
      thread_result_index = thread_result_index;
    }
    if (pfloat_variable + config_path_buffer_size < (float *)0x180c2e880) {
      float_variable = (float)piVar12[6] * 1.5258789e-05 * (float)thread_result_index;
      pfloat_variable[config_path_buffer_size] = float_variable;
      pfloat_variable[0x30] = float_variable;
    }
    handle = -thread_result_index;
    if ((byte_check_result + 5 & 0x3f) != 0x3f) {
      handle = thread_result_index;
    }
    string_length_counter = -0xefc;
    if ((byte_check_result + 5 & 0x1f) != 0x1f) {
      string_length_counter = string_buffer_size_constant;
    }
    buffer_allocation_result = buffer_allocation_result + 8;
    pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
    thread_result_index = thread_result_index + 8;
    piVar12 = piVar12 + 8;
  } while (thread_result_index < STRING_BUFFER_SIZE_SECONDARY);
  if ((int)buffer_allocation_result < config_path_buffer_size0) {
    if (3 < (int)(config_path_buffer_size0 - buffer_allocation_result)) {
      buffer_allocation_result = buffer_allocation_result + 10;
      piVar12 = (int *)0x180be5b68;
      thread_result_index = (0x3f - (0x1fc - buffer_allocation_result >> 2)) * 4;
      do {
        if (pfloat_variable < (float *)0x180c2e880) {
          float_variable = (float)piVar12[2] * 1.5258789e-05 * (float)handle;
          *pfloat_variable = float_variable;
          pfloat_variable[STRING_BUFFER_SIZE] = float_variable;
        }
        buffer_allocation_result = buffer_allocation_result & 0x8000001f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffe0) + 1;
        }
        pfloat_variable = pfloat_variable + -0x3ff;
        if (buffer_allocation_result != 0x1f) {
          pfloat_variable = pfloat_variable;
        }
        buffer_allocation_result = buffer_allocation_result & 0x8000003f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -handle;
        if (buffer_allocation_result != 0x3f) {
          thread_result_index = handle;
        }
        if (pfloat_variable + config_path_buffer_size < (float *)0x180c2e880) {
          float_variable = (float)piVar12[1] * 1.5258789e-05 * (float)thread_result_index;
          pfloat_variable[config_path_buffer_size] = float_variable;
          pfloat_variable[0x30] = float_variable;
        }
        buffer_allocation_result = buffer_allocation_result - 1 & 0x8000001f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffe0) + 1;
        }
        buffer_allocation_result = buffer_allocation_result - 1 & 0x8000003f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -thread_result_index;
        if (buffer_allocation_result != 0x3f) {
          thread_result_index = thread_result_index;
        }
        string_length_counter = -0xefc;
        if (buffer_allocation_result != 0x1f) {
          string_length_counter = string_buffer_size_constant;
        }
        pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
        if (pfloat_variable < (float *)0x180c2e880) {
          string_length_counter = -0xebc;
          if (buffer_allocation_result != 0x1f) {
            string_length_counter = system_initialization_result5;
          }
          float_variable = (float)*piVar12 * 1.5258789e-05 * (float)thread_result_index;
          *pfloat_variable = float_variable;
          *(float *)(string_length_counter + (long long)pfloat_variable) = float_variable;
        }
        buffer_allocation_result = buffer_allocation_result & 0x8000001f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffe0) + 1;
        }
        if (buffer_allocation_result == 0x1f) {
          string_length_counter = -0x1ef8;
          if (buffer_allocation_result != 0x1f) {
            string_length_counter = -0xefc;
          }
          pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
        }
        buffer_allocation_result = buffer_allocation_result & 0x8000003f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffc0) + 1;
        }
        thread_result_index = -thread_result_index;
        if (buffer_allocation_result != 0x3f) {
          thread_result_index = thread_result_index;
        }
        if (pfloat_variable + config_path_buffer_size < (float *)0x180c2e880) {
          float_variable = (float)piVar12[-1] * 1.5258789e-05 * (float)thread_result_index;
          pfloat_variable[config_path_buffer_size] = float_variable;
          pfloat_variable[0x30] = float_variable;
        }
        buffer_allocation_result = buffer_allocation_result + 1 & 0x8000003f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffc0) + 1;
        }
        handle = -thread_result_index;
        if (buffer_allocation_result != 0x3f) {
          handle = thread_result_index;
        }
        buffer_allocation_result = buffer_allocation_result + 1 & 0x8000001f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffe0) + 1;
        }
        string_length_counter = -0xefc;
        if (buffer_allocation_result != 0x1f) {
          string_length_counter = string_buffer_size_constant;
        }
        piVar12 = piVar12 + -4;
        pfloat_variable = (float *)(string_length_counter + (long long)pfloat_variable);
        buffer_allocation_result = buffer_allocation_result + 4;
        buffer_allocation_result = buffer_allocation_result + 4;
      } while ((int)buffer_allocation_result < 0x1ff);
    }
    if ((int)buffer_allocation_result < config_path_buffer_size0) {
      piVar12 = (int *)((long long)thread_result_index * 4 + 0x180be5770);
      do {
        if (pfloat_variable < (float *)0x180c2e880) {
          float_variable = (float)*piVar12 * 1.5258789e-05 * (float)handle;
          *pfloat_variable = float_variable;
          pfloat_variable[STRING_BUFFER_SIZE] = float_variable;
        }
        buffer_allocation_result = buffer_allocation_result & 0x8000003f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffc0) + 1;
        }
        buffer_allocation_result = buffer_allocation_result & 0x8000001f;
        if ((int)buffer_allocation_result < 0) {
          buffer_allocation_result = (buffer_allocation_result - 1 | 0xffffffe0) + 1;
        }
        pfloat_variable = pfloat_variable + -0x3ff;
        if (buffer_allocation_result != 0x1f) {
          pfloat_variable = pfloat_variable;
        }
        piVar12 = piVar12 + -1;
        buffer_allocation_result = buffer_allocation_result + 1;
        pfloat_variable = pfloat_variable + config_path_buffer_size;
        thread_result_index = -handle;
        if (buffer_allocation_result != 0x3f) {
          thread_result_index = handle;
        }
        handle = thread_result_index;
      } while ((int)buffer_allocation_result < config_path_buffer_size0);
    }
  }
  return 0;
}
      data_180c2e030 = '\x01';
    }
    thread_result_index = system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),*(unsigned int *)(unaffected_registerBX + 0x110),0);
    if ((thread_result_index != 0) ||
       (thread_result_index = system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),0x180c2ea70,1,
                              iStack0000000000000030 + 4), thread_result_index != 0)) goto label_;
    pthread_operation_flags = (uint *)(unaffected_registerBX + 0x1cc);
    thread_result_index = system_execute_function();
    if (thread_result_index == 0) {
      *(int *)(unaffected_registerBX + 0x110) = *(int *)(unaffected_registerBX + 0x110) + iStack0000000000000030 + 4;
      thread_result_index = system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),0x180c2ea70,1);
      if (thread_result_index != 0) goto label_;
    }
    buffer_allocation_result = *(unsigned int *)(*(long long *)(unaffected_registerBX + 8) + 8);
    *(unsigned int *)(*(long long *)(unaffected_registerBX + 8) + 8) = 2;
    system_execute_function();
    *(unsigned int *)(*(long long *)(unaffected_registerBX + 8) + 8) = buffer_allocation_result;
    thread_result_index = system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),*(unsigned int *)(unaffected_registerBX + 0x110),0);
    if (thread_result_index == 0) {
      if (*(int *)(unaffected_registerBX + 0x1c4) == thread_result_index) {
        *(unsigned int *)(unaffected_registerBX + 0x1c4) = 0x480;
      }
      buffer_allocation_result = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaffected_registerD & SYSTEM_CONFIG_BUFFER_SIZE_ZERO0) == 0) ||
         ((*(uint *)(*(long long *)(unaffected_registerBX + 0x170) + 0x194) & 1) == 0)) {
        string_length_counter = *(long long *)(unaffected_registerBX + 8);
        if (*(int *)(string_length_counter + 0x14) == -1) {
          *(unsigned int *)(string_length_counter + 0x18) = 0xffffffff;
        }
        else if (*(char *)(unaffected_registerBX + 0x23c) == (char)unaffected_register) {
          *(uint *)(string_length_counter + 0x18) =
               ((*(int *)(string_length_counter + 0x14) + -1 + buffer_allocation_result) / buffer_allocation_result + 1) * *(int *)(unaffected_registerBX + 0x1c4);
          *(uint *)(unaffected_registerBX + 0x2c) = *(uint *)(unaffected_registerBX + 0x2c) & 0xfffffffe;
        }
        else {
          *(uint *)(string_length_counter + 0x18) = *pthread_operation_flags * 0x480;
        }
        goto label_;
      }
      system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),*(unsigned int *)(unaffected_registerBX + 0x110),0);
      thread_result_index = *(int *)(unaffected_registerBX + 0x1c4);
      buffer_allocation_result = 0;
      thread_result_index = func_0x00018076a7d0(*(unsigned long long *)(unaffected_registerBX + 0x170),&stack0x00000050);
      if (thread_result_index == 0) {
        *pthread_operation_flags = 0;
        *(unsigned int *)(*(long long *)(unaffected_registerBX + 8) + 0x18) = 0;
        if (*(int *)(*(long long *)(unaffected_registerBX + 8) + 0x14) != 0) goto label_;
        goto label_;
      }
    }
  }
  goto label_;
label_:
  *(ulong long *)(unaffected_registerBX + 0x178) = unaffected_register;
  goto label_;
  while( true ) {
    thread_result_index = system_execute_function();
    if ((thread_result_index == 0) &&
       (in_stack_00000040._4_4_ + buffer_allocation_result < *(uint *)(*(long long *)(unaffected_registerBX + 8) + 0x14))) {
      if (*pthread_operation_flags <= (uint)unaffected_register) {
        buffer_allocation_result = *pthread_operation_flags + 1000;
        *pthread_operation_flags = buffer_allocation_result;
        string_length_counter = system_execute_function(*(unsigned long long *)(system_global_data_pointer + 0x1a0),
                              *(unsigned long long *)(unaffected_registerBX + 0x1d0),buffer_allocation_result * 4,&system_18097c490,0x113);
        *(long long *)(unaffected_registerBX + 0x1d0) = string_length_counter;
        if (string_length_counter == 0) goto label_;
      }
      buffer_allocation_result = unaffected_register & 0xffffffff;
      unaffected_register = (ulong long)((uint)unaffected_register + 1);
      *(uint *)(*(long long *)(unaffected_registerBX + 0x1d0) + buffer_allocation_result * 4) = buffer_allocation_result;
      piVar1 = (int *)(*(long long *)(unaffected_registerBX + 8) + 0x18);
      *piVar1 = *piVar1 + thread_result_index;
      buffer_allocation_result = buffer_allocation_result + 4 + in_stack_00000040._4_4_;
      thread_result_index = system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),in_stack_00000040._4_4_,1);
      if (thread_result_index != 0) break;
    }
    else {
      system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),0xfffffffd,1);
    }
    if (*(uint *)(*(long long *)(unaffected_registerBX + 8) + 0x14) <= buffer_allocation_result) break;
label_:
    thread_result_index = system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),&stack0x0000004c,1,4,0);
    if (thread_result_index != 0) break;
  }
label_:
  thread_result_index = system_execute_function(*(unsigned long long *)(unaffected_registerBX + 0x170),in_stack_00000050,0);
  if (thread_result_index == 0) {
    *pthread_operation_flags = (uint)unaffected_register;
    unaffected_register = 0;
label_:
    if (unaffected_registerB != '\0') {
      thread_result_index = *(int *)(*(long long *)(unaffected_registerBX + 8) + 0x14);
      if (thread_result_index != -1) {
        *(int *)(*(long long *)(unaffected_registerBX + 8) + 0x14) = thread_result_index - *(int *)(unaffected_registerBX + 0x110);
      }
    }
    if ((*(long long *)(unaffected_registerBX + 0x1d0) != 0) && ((unaffected_registerD & SYSTEM_CONFIG_BUFFER_SIZE_ZERO0) == 0)) {
      system_execute_function(*(unsigned long long *)(system_global_data_pointer + 0x1a0),*(long long *)(unaffected_registerBX + 0x1d0),
                    &system_18097c490,0x282,1);
    }
    *(ulong long *)(unaffected_registerBX + 0x178) = unaffected_register;
    *(unsigned int *)(*(long long *)(unaffected_registerBX + 8) + 8) = 2;
    *(unsigned int *)(*(long long *)(unaffected_registerBX + 8) + 0x1c) = 0x480;
    system_execute_function();
  }
label_:
  system_crypto_001(*(ulong long *)(unaffected_registerBP + 0x4ab0) ^ (ulong long)&stack0x00000000);
}
      data_180c30370 = '\x01';
    }
    if (((in_stack_00000040._4_4_ != unaffected_registerD) ||
        (thread_result_index = (**(code **)(**(long long **)(unaffected_registerDI + 0x170) + STRING_BUFFER_SIZE))
                           (*(long long **)(unaffected_registerDI + 0x170),(long long)&stack0x00000040 + 4),
        thread_result_index == 0)) &&
       (thread_result_index = system_execute_function(*(unsigned long long *)(unaffected_registerDI + 0x170),*(unsigned int *)(unaffected_registerDI + 0x110),
                              0), thread_result_index == 0)) {
      memset(unaffected_registerDI + 0x178,0,0x330);
    }
  }
system_execute_function:
  system_crypto_001(*(ulong long *)(unaffected_registerBP + 0x218) ^ (ulong long)&stack0x00000000);
}
      data_180c4f4e8 = 0;
      system_global_data_pointer = buffer_allocation_result;
      system_initialize_crypto_module(&data_180c4f4f0);
    }
  }
  return &data_180c4f4a0;
}
unsigned long long system_initialize_mutex(unsigned long long *handle,long long thread_operation_flags,char mutex_attr,char mutex_type)
{
  int thread_result_index;
  uint thread_operation_flags;
  uint *input_string_pointer;
  unsigned long long buffer_allocation_result;
  unsigned char buffer_allocation_result;
  ulong long uStackX_10;
  uint auStack_28 [2];
  ulong long stack_size_limit;
  if (*(int *)(thread_operation_flags + 0x18) < *(int *)(*(long long *)(thread_operation_flags + STRING_BUFFER_SIZE) + 0xb4)) {
label_:
    buffer_allocation_result = 0;
  }
  else {
    thread_result_index = *(int *)(*(long long *)(thread_operation_flags + STRING_BUFFER_SIZE) + 0xbc);
    if (thread_result_index == 0) {
      return 0;
    }
    if (thread_result_index != 2) goto label_;
    buffer_allocation_result = 1;
  }
  input_string_pointer = (uint *)system_execute_function();
  stack_size_limit = 0;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  auStack_28[0] = *input_string_pointer;
  buffer_allocation_result = system_execute_function(handle,*(unsigned long long *)(thread_operation_flags + STRING_BUFFER_SIZE),auStack_28,&stack_size_limit,&uStackX_10);
  if ((int)buffer_allocation_result != 0) {
    return buffer_allocation_result;
  }
  if ((char)uStackX_10 == (char)buffer_allocation_result) {
    return 0;
  }
  uStackX_10 = 0;
  input_string_pointer = (uint *)system_execute_function();
  thread_operation_flags = *(uint *)((long long)handle + 0xc);
  if (((thread_operation_flags != *input_string_pointer) && (*(uint *)(handle + 4) <= thread_operation_flags)) &&
     (thread_operation_flags < *(uint *)((long long)handle + 0x24))) {
    if (thread_operation_flags == auStack_28[0]) {
      return 0x1c;
    }
    thread_operation_flags = func_0x000180856540(*handle,thread_operation_flags - *(int *)(handle + 1));
    uStackX_10 = thread_operation_flags + stack_size_limit;
    if (uStackX_10 == stack_size_limit) {
      uStackX_10 = stack_size_limit + 1;
    }
  }
  system_execute_function();
  if (mutex_attr != '\0') {
    buffer_allocation_result = system_execute_function(handle,thread_operation_flags,thread_operation_flags + config_path_buffer_size,&stack_size_limit,&uStackX_10,buffer_allocation_result,0);
    if ((int)buffer_allocation_result != 0) {
      return buffer_allocation_result;
    }
    *(int *)(thread_operation_flags + 0x18) = *(int *)(thread_operation_flags + 0x18) + 1;
  }
  if (mutex_type == '\0') {
    return 0;
  }
  if (mutex_attr != '\0') {
    if (*(int *)(*(long long *)(thread_operation_flags + STRING_BUFFER_SIZE) + 0xb4) <= *(int *)(thread_operation_flags + 0x18)) {
      thread_result_index = *(int *)(*(long long *)(thread_operation_flags + STRING_BUFFER_SIZE) + 0xbc);
      if (thread_result_index == 0) {
        return 0;
      }
      if (thread_result_index == 2) {
        buffer_allocation_result = 1;
        goto label_;
      }
    }
    buffer_allocation_result = 0;
  }
label_:
  buffer_allocation_result = system_execute_function(handle,thread_operation_flags,thread_operation_flags + 0x28,&stack_size_limit,&uStackX_10,buffer_allocation_result,1);
  if ((int)buffer_allocation_result == 0) {
    *(int *)(thread_operation_flags + 0x18) = *(int *)(thread_operation_flags + 0x18) + 1;
    return 0;
  }
  return buffer_allocation_result;
}
unsigned long long
system_execute_function(long long handle,long long thread_operation_flags,long long *mutex_attr,long long *mutex_type,
             unsigned long long *param_5,char param_6,char param_7)
{
  uint buffer_allocation_result;
  long long string_length_counter;
  byte byte_system_flag;
  unsigned int *input_string_pointer;
  unsigned long long buffer_allocation_result;
  unsigned long long buffer_allocation_result;
  long long string_length_counter;
  long long string_length_counter;
  unsigned int buffer_allocation_result;
  long long long_stack_variable;
  unsigned char auStack_28 [16];
  buffer_allocation_result = *(unsigned long long *)(handle + 0x28);
  input_string_pointer = (unsigned int *)system_execute_function();
  string_length_counter = *mutex_type;
  buffer_allocation_result = *input_string_pointer;
  string_length_counter = string_length_counter;
  if ((*(uint *)(thread_operation_flags + 0x1c) >> 1 & 1) != 0) {
    string_length_counter = *mutex_attr;
    string_length_counter = string_length_counter - string_length_counter;
    buffer_allocation_result = *(unsigned long long *)(handle + 0x30);
    if (-1 < string_length_counter) {
      if (string_length_counter < 1) {
        buffer_allocation_result = 0;
        string_length_counter = string_length_counter;
      }
      else {
        buffer_allocation_result = *(uint *)(*(long long *)(*(long long *)(handle + 0x38) + 8) + 0x774);
        if (buffer_allocation_result != 48000) {
          string_length_counter = (string_length_counter * 48000) / (long long)(ulong long)buffer_allocation_result;
        }
        if (0xffffffff < string_length_counter) {
          string_length_counter = 0xffffffff;
        }
        buffer_allocation_result = (unsigned int)string_length_counter;
        string_length_counter = string_length_counter;
      }
    }
  }
  if (param_6 != '\0') {
    (**(code **)(**(long long **)(thread_operation_flags + STRING_BUFFER_SIZE) + 0x30))(*(long long **)(thread_operation_flags + STRING_BUFFER_SIZE),auStack_28)
    ;
    buffer_allocation_result = system_execute_function(buffer_allocation_result,auStack_28,string_length_counter,
                          *(unsigned int *)(*(long long *)(thread_operation_flags + STRING_BUFFER_SIZE) + 0xb4));
    if ((int)buffer_allocation_result != 0) {
      return buffer_allocation_result;
    }
  }
  buffer_allocation_result = system_execute_function(buffer_allocation_result,*(unsigned long long *)(thread_operation_flags + STRING_BUFFER_SIZE),string_length_counter,*param_5,buffer_allocation_result,0,0,&long_stack_variable);
  if ((int)buffer_allocation_result == 0) {
    if (param_7 != (char)buffer_allocation_result) {
      func_0x0001808cf230(long_stack_variable,string_length_counter);
    }
    byte_system_flag = (byte)(*(uint *)(thread_operation_flags + 0x1c) >> 4) & 1;
    *(uint *)(long_stack_variable + 0x4c) =
         ~((byte_system_flag ^ 1) * 2) & ((uint)byte_system_flag + (uint)byte_system_flag | *(uint *)(long_stack_variable + 0x4c));
    buffer_allocation_result = 0;
  }
  return buffer_allocation_result;
}
    data_180c4f818 = '\x01';
  }
  return 0;
}
unsigned long long get_system_global_state(void)
{
  char system_char_variable;
  int thread_result_index;
  uint buffer_allocation_result;
  unsigned long long in_stack_00000030;
  func_0x0001808f62c0();
  func_0x0001808f62a0(free_exref);
  thread_result_index = timeGetDevCaps(&stack0x00000030,8);
  buffer_allocation_result = 1;
  if (thread_result_index == 0) {
    buffer_allocation_result = 1;
    if (1 < (uint)in_stack_00000030) {
      buffer_allocation_result = (uint)in_stack_00000030;
    }
  }
  func_0x0001808f6640(buffer_allocation_result);
  system_char_variable = system_execute_function();
  if (system_char_variable == '\0') {
    return 0x809200ff;
  }
  data_180c4f818 = 1;
  return 0;
}
unsigned long long get_system_configuration(void)
{
  return 0x809200ff;
}
unsigned int validate_system_parameters(int handle,int thread_operation_flags,int mutex_attr)
{
  int thread_result_index;
  unsigned int thread_operation_flags;
  unsigned int auStack_18 [4];
  if (data_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (((thread_operation_flags != 0) || (mutex_attr != 0)) || (3 < handle - 1U)) {
    return 0x80920001;
  }
  thread_result_index = system_execute_function();
  if (thread_result_index != 0) {
    return 0x809200ff;
  }
  thread_result_index = system_execute_function(handle,auStack_18);
  if (thread_result_index < 0) {
    thread_operation_flags = 0x809200ff;
    if (thread_result_index == -0x7ffeffff) {
      thread_operation_flags = 0x80920004;
    }
    func_0x0001808f6ce0();
    return thread_operation_flags;
  }
  func_0x0001808f6ce0();
  return auStack_18[0];
}
unsigned long long initialize_parameter_block(unsigned int handle,uint *thread_operation_flags)
{
  long long system_initialization_result;
  uint thread_operation_flags;
  uint buffer_allocation_result;
  char system_char_variable;
  byte byte_init_result;
  int thread_result_index;
  uint buffer_allocation_result;
  unsigned short *input_string_pointer;
  unsigned short *input_string_pointer;
  byte abStackX_18 [8];
  long long long_stack_variable;
  if (data_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (thread_operation_flags == (uint *)0x0) {
    return 0x80920001;
  }
  thread_result_index = system_execute_function();
  if (thread_result_index != 0) {
    return 0x809200ff;
  }
  thread_result_index = func_0x0001808f0200(handle);
  if (thread_result_index < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  system_execute_function(thread_operation_flags);
  thread_result_index = func_0x0001808f0760(handle,&long_stack_variable);
  if (thread_result_index == 0) {
    initialize_timer_context(handle,abStackX_18);
    if (*(long long *)(long_stack_variable + 0x160) != 0) {
      system_char_variable = func_0x0001808f2030();
      buffer_allocation_result = *(uint *)(*(long long *)(long_stack_variable + 0x160) + 0xc);
      if (system_char_variable == '\0') {
        buffer_allocation_result = buffer_allocation_result & 0xffdefffe;
      }
      *thread_operation_flags = buffer_allocation_result;
      *(unsigned char *)(thread_operation_flags + 1) = *(unsigned char *)(*(long long *)(long_stack_variable + 0x160) + STRING_BUFFER_SIZE);
      *(unsigned char *)((long long)thread_operation_flags + 5) =
           *(unsigned char *)(*(long long *)(long_stack_variable + 0x160) + 0x11);
      *(unsigned char *)((long long)thread_operation_flags + 6) =
           *(unsigned char *)(*(long long *)(long_stack_variable + 0x160) + 0x12);
      *(unsigned char *)((long long)thread_operation_flags + 7) =
           *(unsigned char *)(*(long long *)(long_stack_variable + 0x160) + 0x13);
      *(unsigned char *)((long long)thread_operation_flags + 9) =
           *(unsigned char *)(*(long long *)(long_stack_variable + 0x160) + 0x15);
      *(unsigned char *)(thread_operation_flags + 2) = *(unsigned char *)(*(long long *)(long_stack_variable + 0x160) + 0x14);
      if ((*(char *)(long_stack_variable + 0x68) == '\x01') && ((abStackX_18[0] & 8) != 0)) {
        system_initialization_result = *(long long *)(long_stack_variable + 0x160);
        buffer_allocation_result = *(uint *)(system_initialization_result + 0x74);
        thread_operation_flags = *(uint *)(system_initialization_result + 0x78);
        buffer_allocation_result = *(uint *)(system_initialization_result + 0x7c);
        thread_operation_flags[3] = *(uint *)(system_initialization_result + 0x70);
        thread_operation_flags[4] = buffer_allocation_result;
        thread_operation_flags[5] = thread_operation_flags;
        thread_operation_flags[6] = buffer_allocation_result;
        thread_operation_flags[7] = *(uint *)(*(long long *)(long_stack_variable + 0x160) + 0x60);
        thread_operation_flags[8] = *(uint *)(*(long long *)(long_stack_variable + 0x160) + 100);
        thread_operation_flags[9] = *(uint *)(*(long long *)(long_stack_variable + 0x160) + 0x68);
        thread_operation_flags[10] = *(uint *)(*(long long *)(long_stack_variable + 0x160) + 0x54);
        thread_operation_flags[0xb] = *(uint *)(*(long long *)(long_stack_variable + 0x160) + 0x58);
        thread_operation_flags[0xc] = *(uint *)(*(long long *)(long_stack_variable + 0x160) + 0x5c);
      }
      else {
        func_0x0001808f6f90(thread_operation_flags + 3);
        func_0x0001808f6f70(thread_operation_flags + 7);
        func_0x0001808f6f80(thread_operation_flags + 10);
      }
      *(unsigned char *)(thread_operation_flags + 0x13) = 1;
      *(unsigned char *)(thread_operation_flags + 0x1a) = *(unsigned char *)(long_stack_variable + 1);
      *(unsigned long long *)(thread_operation_flags + 0x14) = **(unsigned long long **)(long_stack_variable + 0x160);
      system_initialization_result = *(long long *)(long_stack_variable + 0x160);
      byte_init_result = *(byte *)(system_initialization_result + 0x19);
      if (2 < *(byte *)(system_initialization_result + 0x19)) {
        byte_init_result = 2;
      }
      thread_result_index = 0;
      *(byte *)(thread_operation_flags + 0xd) = byte_init_result;
      if (*(char *)(system_initialization_result + 0x19) != '\0') {
        input_string_pointer = (unsigned short *)((long long)thread_operation_flags + 0x3e);
        input_string_pointer = (unsigned short *)(system_initialization_result + 0x1e);
        do {
          thread_result_index = thread_result_index + 1;
          input_string_pointer[-1] = input_string_pointer[-1];
          *input_string_pointer = *input_string_pointer;
          *(unsigned char *)(input_string_pointer + 1) = *(unsigned char *)(input_string_pointer + -2);
          input_string_pointer = input_string_pointer + 4;
          input_string_pointer = input_string_pointer + 3;
        } while (thread_result_index < (int)(uint)*(byte *)(system_initialization_result + 0x19));
      }
    }
  }
  func_0x0001808f6ce0();
  return 0;
}
int process_parameter_validation(unsigned int handle,byte *thread_operation_flags)
{
  char system_char_variable;
  int thread_result_index;
  long long string_length_counter;
  if (data_180c4f818 == '\0') {
    return -0x7f6dfffb;
  }
  if (thread_operation_flags == (byte *)0x0) {
    return -0x7f6dffff;
  }
  thread_result_index = system_execute_function();
  if (thread_result_index != 0) {
    return -0x7f6dff01;
  }
  thread_result_index = func_0x0001808f0200(handle);
  if (thread_result_index < 0) {
    func_0x0001808f6ce0();
    return -0x7f6dfffd;
  }
  string_length_counter = func_0x0001808f0dd0(handle,0);
  if (string_length_counter != 0) {
    system_char_variable = func_0x0001808f0e30(*(unsigned short *)(string_length_counter + 2),*(unsigned short *)(string_length_counter + 4));
    if ((((system_char_variable == '\0') && (*thread_operation_flags < 0xd)) && (thread_operation_flags[1] < 0xd)) && (thread_operation_flags[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    thread_result_index = system_execute_function(handle,thread_operation_flags);
    if (-1 < thread_result_index) {
      *(byte *)(string_length_counter + 0x23e8) = *thread_operation_flags;
      *(byte *)(string_length_counter + 0x23e9) = thread_operation_flags[1];
      *(byte *)(string_length_counter + 0x23ea) = thread_operation_flags[2];
      *(byte *)(string_length_counter + 0x23ec) = *thread_operation_flags;
      *(byte *)(string_length_counter + 0x23ed) = thread_operation_flags[1];
      *(byte *)(string_length_counter + 0x23ee) = thread_operation_flags[2];
      func_0x0001808f6ce0();
      return thread_result_index;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int check_system_readiness(void)
{
  char system_char_variable;
  int thread_result_index;
  long long string_length_counter;
  byte *unaffected_registerBX;
  unsigned int unaff_ESI;
  string_length_counter = func_0x0001808f0dd0(unaff_ESI);
  if (string_length_counter != 0) {
    system_char_variable = func_0x0001808f0e30(*(unsigned short *)(string_length_counter + 2),*(unsigned short *)(string_length_counter + 4));
    if ((((system_char_variable == '\0') && (*unaffected_registerBX < 0xd)) && (unaffected_registerBX[1] < 0xd)) && (unaffected_registerBX[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    thread_result_index = system_execute_function(unaff_ESI);
    if (-1 < thread_result_index) {
      *(byte *)(string_length_counter + 0x23e8) = *unaffected_registerBX;
      *(byte *)(string_length_counter + 0x23e9) = unaffected_registerBX[1];
      *(byte *)(string_length_counter + 0x23ea) = unaffected_registerBX[2];
      *(byte *)(string_length_counter + 0x23ec) = *unaffected_registerBX;
      *(byte *)(string_length_counter + 0x23ed) = unaffected_registerBX[1];
      *(byte *)(string_length_counter + 0x23ee) = unaffected_registerBX[2];
      func_0x0001808f6ce0();
      return thread_result_index;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int validate_system_state(void)
{
  int thread_result_index;
  unsigned char *unaffected_registerBX;
  unsigned int unaff_ESI;
  long long unaffected_registerDI;
  thread_result_index = system_execute_function(unaff_ESI);
  if (-1 < thread_result_index) {
    *(unsigned char *)(unaffected_registerDI + 0x23e8) = *unaffected_registerBX;
    *(unsigned char *)(unaffected_registerDI + 0x23e9) = unaffected_registerBX[1];
    *(unsigned char *)(unaffected_registerDI + 0x23ea) = unaffected_registerBX[2];
    *(unsigned char *)(unaffected_registerDI + 0x23ec) = *unaffected_registerBX;
    *(unsigned char *)(unaffected_registerDI + 0x23ed) = unaffected_registerBX[1];
    *(unsigned char *)(unaffected_registerDI + 0x23ee) = unaffected_registerBX[2];
    func_0x0001808f6ce0();
    return thread_result_index;
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
unsigned long long get_system_status_info(void)
{
  func_0x0001808f6ce0();
  return 0x809200ff;
}
          data_180c58840 = byte_check_result;
          *thread_operation_flags = thread_result_index;
          *(int *)(string_length_counter + STRING_BUFFER_SIZE) = thread_result_index;
          *(int *)(string_length_counter + 0x18) = thread_result_index;
          func_0x0001808f0b40(string_length_counter);
          return 0;
        }
        string_length_counter = string_length_counter + 0x2408;
      } while (string_length_counter < 0x180c58840);
      return 0x8001002d;
    }
  }
  byte_check_result = data_180c58840 + 1;
  if (byte_check_result == 0) {
    byte_check_result = data_180c58840 + 2;
  }
  thread_result_index = (uint)byte_check_result * string_buffer_size_constant + thread_result_index;
  data_180c58840 = byte_check_result;
  *thread_operation_flags = thread_result_index;
  *piVar2 = thread_result_index;
  piVar2[2] = thread_result_index;
  func_0x0001808f0b40(piVar2 + -4);
  return 0;
}
long long system_initialize_timer(void)
{
  uint buffer_allocation_result;
  buffer_allocation_result = timeGetTime();
  return (ulong long)buffer_allocation_result * 1000;
}
uint setup_timer_with_attributes(long long handle,int thread_operation_flags,int mutex_attr,char mutex_type)
{
  ulong long buffer_allocation_result;
  byte byte_flag_value;
  int thread_result_index;
  int thread_result_index;
  uint buffer_allocation_result;
  uint buffer_allocation_result;
  buffer_allocation_result = 0;
  buffer_allocation_result = 0;
  thread_result_index = 0;
  thread_result_index = thread_result_index;
  if (0 < mutex_attr) {
    do {
      byte_flag_value = (byte)thread_operation_flags & 7;
      thread_result_index = thread_operation_flags;
      if (thread_operation_flags < 0) {
        thread_result_index = thread_operation_flags + 7;
        byte_flag_value = byte_flag_value - 8;
      }
      thread_operation_flags = thread_operation_flags + 1;
      buffer_allocation_result = *(byte *)((thread_result_index >> 3) + handle) >> (byte_flag_value & 0x1f) & 1;
      thread_result_index = thread_result_index + 1;
      buffer_allocation_result = buffer_allocation_result | buffer_allocation_result << ((byte)thread_result_index & 0x1f);
      thread_result_index = thread_result_index;
    } while (thread_result_index < mutex_attr);
  }
  if (((mutex_type != '\0') && (buffer_allocation_result != 0)) && (thread_result_index < config_path_buffer_size)) {
    byte_flag_value = (byte)thread_result_index & 0x1f;
    buffer_allocation_result = 1 << byte_flag_value | 1U >> config_path_buffer_size - byte_flag_value;
    buffer_allocation_result = (ulong long)(config_path_buffer_size - thread_result_index);
    do {
      buffer_allocation_result = buffer_allocation_result | buffer_allocation_result;
      buffer_allocation_result = buffer_allocation_result << 1 | (uint)((int)buffer_allocation_result < 0);
      buffer_allocation_result = buffer_allocation_result - 1;
    } while (buffer_allocation_result != 0);
  }
  return buffer_allocation_result;
}
  data_180c58854 = 1;
  data_180c58853 = 1;
  data_180c58855 = 1;
  data_180c58850 = 1;
  system_global_data_pointer = _beginthread(system_execute_function,0,0);
  if ((system_global_data_pointer != -1) &&
     (system_global_data_pointer = _beginthread(system_execute_function,0,0), system_global_data_pointer != -1)) {
    return 1;
  }
  return 0;
}
  data_180c69e20 = 1;
  return;
}
unsigned int validate_timer_parameters(byte handle,byte *thread_operation_flags,int mutex_attr)
{
  uint *input_string_pointer;
  byte byte_flag_value;
  uint buffer_allocation_result;
  mutex_attr = mutex_attr + -4;
  input_string_pointer = (uint *)(thread_operation_flags + mutex_attr);
  buffer_allocation_result = *(uint *)(&system_lookup_table + (ulong long)(byte)~handle * 4) ^ 0xffffff;
  for (; 0 < mutex_attr; mutex_attr = mutex_attr + -1) {
    byte_flag_value = *thread_operation_flags;
    thread_operation_flags = thread_operation_flags + 1;
    buffer_allocation_result = *(uint *)(&system_lookup_table + (ulong long)(byte)(byte_flag_value ^ (byte)buffer_allocation_result) * 4) ^ buffer_allocation_result >> 8;
  }
  return CONCAT31((int3)(~buffer_allocation_result >> 8),*input_string_pointer != ~buffer_allocation_result);
}
float * system_execute_function(float *handle,float *thread_operation_flags,float *mutex_attr)
{
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  float float_variable;
  float_variable = *mutex_attr;
  float_variable = handle[3];
  float_variable = handle[1];
  float_variable = *handle;
  float_variable = mutex_attr[1];
  float_variable = handle[2];
  float_variable = mutex_attr[2];
  float_variable = mutex_attr[3];
  *thread_operation_flags = (float_variable * float_variable + float_variable * float_variable + float_variable * float_variable) - float_variable * float_variable;
  thread_operation_flags[1] = (float_variable * float_variable + float_variable * float_variable + float_variable * float_variable) - float_variable * float_variable;
  thread_operation_flags[3] = ((float_variable * float_variable - float_variable * float_variable) - float_variable * float_variable) - float_variable * float_variable;
  thread_operation_flags[2] = (float_variable * float_variable + float_variable * float_variable + float_variable * float_variable) - float_variable * float_variable;
  return thread_operation_flags;
}
unsigned long long initialize_timer_context(unsigned long long handle,unsigned int *thread_operation_flags)
{
  long long system_initialization_result;
  system_initialization_result = func_0x0001808f0dd0(handle,0);
  if (system_initialization_result != 0) {
    *thread_operation_flags = *(unsigned int *)(system_initialization_result + 100);
    return 0;
  }
  return 0x8001002d;
}
      data_180bf0080 = '\0';
      if (system_global_data_pointer == 0) {
        string_length_counter = system_execute_function(&system_18098ab30);
        if (string_length_counter != 0) {
          string_length_counter = LoadLibraryExW(string_length_counter,0,0);
        }
        LocalFree(string_length_counter);
        system_global_data_pointer = string_length_counter;
        if (string_length_counter == 0) goto label_;
      }
      if ((((system_global_data_pointer == (code *)0x0) &&
           (system_global_data_pointer = (code *)GetProcAddress(system_global_data_pointer,&system_18098aef8),
           system_global_data_pointer == (code *)0x0)) ||
          ((system_global_data_pointer == 0 &&
           (system_global_data_pointer = GetProcAddress(system_global_data_pointer,&system_18098af08), system_global_data_pointer == 0))))
         || ((system_global_data_pointer == 0 &&
             (system_global_data_pointer = GetProcAddress(system_global_data_pointer,&system_18098af18), system_global_data_pointer == 0)))
         ) goto label_;
      if ((system_global_data_pointer == 0) &&
         (system_global_data_pointer = system_execute_function(&system_18098af28,0), system_global_data_pointer != 0)) {
        system_global_data_pointer = (code *)GetProcAddress(system_global_data_pointer,&system_18098af40);
      }
      character_scan_pointer = system_global_data_pointer;
      if (system_global_data_pointer == (code *)0x0) goto label_;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      stack_size_limit = 0;
      _guard_check_icall(system_global_data_pointer);
      thread_result_index = (*character_scan_pointer)(&stack_size_limit,&stack_size_limit,0x27);
      if (thread_result_index != 0x27) goto label_;
      for (input_string_pointer = auStack_1c0; character_scan_pointer = system_global_data_pointer, buffer_allocation_result = *input_string_pointer, buffer_allocation_result != 0;
          input_string_pointer = input_string_pointer + 1) {
        stack_size_limit = 0;
        _guard_check_icall(system_global_data_pointer);
        thread_stack_pointer = &stack_size_limit;
        thread_result_index = (*character_scan_pointer)(0xffffffff80000002,&system_18098af50,0,buffer_allocation_result | config_path_buffer_size019);
        if (thread_result_index == 0) {
          stack_size_limit = 0x80;
          stack_size_limit = 4;
          memset(auStack_148,0,string_buffer_size_constant);
        }
      }
    }
    if (data_180c69ef8 == '\0') {
      SetLastError(thread_operation_flags & 0xffffffff);
      goto label_;
    }
  }
  OutputDebugStringW(&system_18098afa0);
  SetLastError(0);
label_:
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_228);
}
          data_180c6a14c = thread_result_index == 1;
          SetConsoleTitleA(&system_18098b4e0);
        }
      }
      data_180c6a14d = data_180c6a14c == '\0';
      if (system_global_data_pointer == 0) {
        string_length_counter = _wfsopen(handle,&system_18098b51c,SYSTEM_CONFIG_BUFFER_SIZE);
        if (string_length_counter == 0) {
          system_execute_function(&system_string_buffer_5,0xc1,&system_string_buffer_6,&system_18098b520,handle);
          byte_check_result0 = false;
        }
        else {
          fclose(string_length_counter);
          system_execute_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_18098b580,handle);
          string_length_counter = _wcsdup(handle);
          string_length_counter = -1;
          if (string_length_counter != 0) {
            do {
              string_length_counter = string_length_counter;
              string_length_counter = string_length_counter + 1;
            } while (*(short *)(handle + 2 + string_length_counter * 2) != 0);
            string_length_counter = string_length_counter;
            while( true ) {
              string_length_counter = 0;
              if (((string_length_counter == 0) || (sVar1 = *(short *)(string_length_counter + string_length_counter * 2), string_length_counter = 0, sVar1 == 0x2f)
                  ) || (string_length_counter = 0, sVar1 == 0x5c)) goto label_;
              if (sVar1 == 0x2e) break;
              string_length_counter = string_length_counter + -1;
            }
            *(unsigned short *)(string_length_counter + string_length_counter * 2) = 0;
            string_length_counter = string_length_counter + 2 + string_length_counter * 2;
label_:
            string_length_counter = string_length_counter + 9;
            string_length_counter = malloc(string_length_counter * 2);
            if (string_length_counter == 0) {
              free(string_length_counter);
              return false;
            }
            thread_result_index = 1;
            string_length_counter = system_global_data_pointer;
            do {
              system_global_data_pointer = string_length_counter;
              if (string_length_counter == 0) {
                system_execute_function(string_length_counter,string_length_counter,&system_string_buffer_1,string_length_counter,thread_result_index);
              }
              else {
                system_execute_function(string_length_counter,string_length_counter,&system_string_buffer_2,string_length_counter,thread_result_index,string_length_counter);
              }
              system_global_data_pointer = _wfsopen(string_length_counter,input_string_pointer,config_path_buffer_size);
              if (system_global_data_pointer != 0) {
                input_string_pointer = &system_string_buffer_3;
                buffer_allocation_result = 0xeb;
                handle = string_length_counter;
                goto label_;
              }
              thread_result_index = thread_result_index + 1;
              string_length_counter = 0;
            } while (thread_result_index < 9);
            input_string_pointer = &system_string_buffer_4;
            buffer_allocation_result = 0xef;
label_:
            system_execute_function(&system_string_buffer_5,buffer_allocation_result,&system_string_buffer_6,input_string_pointer,handle);
            free(string_length_counter);
            free(string_length_counter);
          }
          byte_check_result0 = system_global_data_pointer != 0;
        }
      }
      else {
        system_execute_function(&system_string_buffer_5,0xb4,&system_string_buffer_6,&system_18098b4e8,handle);
        byte_check_result0 = true;
      }
      return byte_check_result0;
    }
  }
  data_180c6a14d = data_180c6a14c == '\0';
  return true;
}
bool check_system_availability(void)
{
  short sVar1;
  long long string_length_counter;
  uint buffer_allocation_result;
  int thread_result_index;
  long long string_length_counter;
  unsigned long long buffer_allocation_result;
  long long string_length_counter;
  long long string_length_counter;
  long long string_length_counter;
  char unaff_SIL;
  long long unaffected_registerDI;
  short sVar10;
  long long unaffected_register;
  void *input_string_pointer;
  bool byte_check_result2;
  uint in_stack_00000090;
  uint in_stack_00000098;
  if (unaffected_registerDI != 0) {
    string_length_counter = -1;
    do {
      string_length_counter = string_length_counter + 1;
      sVar10 = (short)unaffected_register;
    } while (*(short *)(unaffected_registerDI + string_length_counter * 2) != sVar10);
    if (string_length_counter != 0) {
      input_string_pointer = &system_18098b464;
      if (unaff_SIL != '\0') {
        input_string_pointer = &system_18098b45c;
      }
      system_global_data_pointer = _wfsopen();
      if ((1 < system_global_data_pointer) && ((uint)unaffected_register < in_stack_00000090)) {
        buffer_allocation_result = GetConsoleWindow();
        in_stack_00000098 = (uint)unaffected_register;
        GetWindowThreadProcessId(buffer_allocation_result,&stack0x00000098);
        buffer_allocation_result = GetCurrentProcessId();
        if (buffer_allocation_result != in_stack_00000098) {
          thread_result_index = AllocConsole();
          data_180c6a14c = thread_result_index == 1;
          SetConsoleTitleA(&system_18098b4e0);
        }
      }
      data_180c6a14d = data_180c6a14c == (char)unaffected_register;
      if (system_global_data_pointer == unaffected_register) {
        string_length_counter = _wfsopen();
        if (string_length_counter == 0) {
          system_execute_function(&system_string_buffer_5,0xc1,&system_string_buffer_6,&system_18098b520);
          byte_check_result2 = false;
        }
        else {
          fclose(string_length_counter);
          system_execute_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_18098b580);
          string_length_counter = _wcsdup();
          string_length_counter = -1;
          if (string_length_counter != 0) {
            do {
              string_length_counter = string_length_counter;
              string_length_counter = string_length_counter + 1;
              string_length_counter = string_length_counter;
            } while (*(short *)(unaffected_registerDI + 2 + string_length_counter * 2) != sVar10);
            while( true ) {
              string_length_counter = unaffected_register;
              if (((string_length_counter == 0) || (sVar1 = *(short *)(string_length_counter + string_length_counter * 2), sVar1 == 0x2f)) ||
                 (sVar1 == 0x5c)) goto label_;
              if (sVar1 == 0x2e) break;
              string_length_counter = string_length_counter + -1;
            }
            *(short *)(string_length_counter + string_length_counter * 2) = sVar10;
            string_length_counter = string_length_counter + 2 + string_length_counter * 2;
label_:
            string_length_counter = string_length_counter + 9;
            string_length_counter = malloc(string_length_counter * 2);
            if (string_length_counter == 0) {
              free(string_length_counter);
              return false;
            }
            thread_result_index = 1;
            string_length_counter = system_global_data_pointer;
            do {
              system_global_data_pointer = string_length_counter;
              if (string_length_counter == 0) {
                system_execute_function(string_length_counter,string_length_counter,&system_string_buffer_1,string_length_counter,thread_result_index);
              }
              else {
                system_execute_function(string_length_counter,string_length_counter,&system_string_buffer_2,string_length_counter,thread_result_index);
              }
              system_global_data_pointer = _wfsopen(string_length_counter,input_string_pointer,config_path_buffer_size);
              if (system_global_data_pointer != 0) {
                input_string_pointer = &system_string_buffer_3;
                buffer_allocation_result = 0xeb;
                goto label_;
              }
              thread_result_index = thread_result_index + 1;
              string_length_counter = 0;
            } while (thread_result_index < 9);
            input_string_pointer = &system_string_buffer_4;
            buffer_allocation_result = 0xef;
label_:
            system_execute_function(&system_string_buffer_5,buffer_allocation_result,&system_string_buffer_6,input_string_pointer);
            free(string_length_counter);
            free(string_length_counter);
          }
          byte_check_result2 = system_global_data_pointer != unaffected_register;
        }
      }
      else {
        system_execute_function(&system_string_buffer_5,0xb4,&system_string_buffer_6,&system_18098b4e8);
        byte_check_result2 = true;
      }
      return byte_check_result2;
    }
  }
  data_180c6a14d = data_180c6a14c == (char)unaffected_register;
  return true;
}
bool validate_system_resources(void)
{
  short sVar1;
  long long string_length_counter;
  long long string_length_counter;
  long long string_length_counter;
  unsigned long long buffer_allocation_result;
  int thread_result_index;
  long long unaffected_registerBX;
  long long string_length_counter;
  long long unaffected_registerDI;
  void *input_string_pointer;
  long long unaffected_register;
  long long string_length_counter;
  fclose();
  system_execute_function(&system_string_buffer_5,200,&system_string_buffer_6,&system_18098b580);
  string_length_counter = _wcsdup();
  if (string_length_counter != 0) {
    do {
      string_length_counter = unaffected_registerBX;
      unaffected_registerBX = string_length_counter + 1;
      string_length_counter = string_length_counter;
    } while (*(short *)(unaffected_registerDI + 2 + string_length_counter * 2) != (short)unaffected_register);
    while( true ) {
      string_length_counter = unaffected_register;
      if (((string_length_counter == 0) || (sVar1 = *(short *)(string_length_counter + string_length_counter * 2), sVar1 == 0x2f)) ||
         (sVar1 == 0x5c)) goto label_;
      if (sVar1 == 0x2e) break;
      string_length_counter = string_length_counter + -1;
    }
    *(short *)(string_length_counter + string_length_counter * 2) = (short)unaffected_register;
    string_length_counter = string_length_counter + 2 + string_length_counter * 2;
label_:
    string_length_counter = string_length_counter + 9;
    string_length_counter = malloc(string_length_counter * 2);
    if (string_length_counter == 0) {
      free(string_length_counter);
      return false;
    }
    thread_result_index = 1;
    string_length_counter = system_global_data_pointer;
    do {
      system_global_data_pointer = string_length_counter;
      if (string_length_counter == 0) {
        system_execute_function(string_length_counter,string_length_counter,&system_string_buffer_1,string_length_counter,thread_result_index);
      }
      else {
        system_execute_function(string_length_counter,string_length_counter,&system_string_buffer_2,string_length_counter,thread_result_index);
      }
      system_global_data_pointer = _wfsopen(string_length_counter);
      if (system_global_data_pointer != 0) {
        input_string_pointer = &system_string_buffer_3;
        buffer_allocation_result = 0xeb;
        goto label_;
      }
      thread_result_index = thread_result_index + 1;
      string_length_counter = 0;
    } while (thread_result_index < 9);
    input_string_pointer = &system_string_buffer_4;
    buffer_allocation_result = 0xef;
label_:
    system_execute_function(&system_string_buffer_5,buffer_allocation_result,&system_string_buffer_6,input_string_pointer);
    free(string_length_counter);
    free(string_length_counter);
  }
  return system_global_data_pointer != unaffected_register;
}
  data_180c6a14d = data_180c6a14c == unaffected_registerB;
  return 1;
}
    data_180bf0082 = '\x01';
    wcscpy_s(auStack_228,STRING_BUFFER_SIZE4,handle);
    if ((data_180bf0082 != '\0') && (wcscat_s(auStack_228,STRING_BUFFER_SIZE4,thread_operation_flags), data_180bf0082 != '\0')) {
      system_execute_function(auStack_228,0);
    }
    _set_invalid_parameter_handler(buffer_allocation_result);
  }
  system_crypto_001(stack_size_limit ^ (ulong long)auStack_248);
}
  data_180bf0082 = '\x01';
  wcscpy_s(temp_stack_array,STRING_BUFFER_SIZE4);
  if (data_180bf0082 != '\0') {
    wcscat_s(temp_stack_array,STRING_BUFFER_SIZE4);
    if (data_180bf0082 != '\0') {
      system_execute_function(temp_stack_array,0);
    }
  }
  _set_invalid_parameter_handler(buffer_allocation_result);
  system_crypto_001(in_stack_00000230 ^ (ulong long)&stack0x00000000);
}
    data_180c821d8 = 1;
  }
  system_execute_function();
  system_char_variable = system_check_character_status();
  if (system_char_variable != '\0') {
    system_char_variable = system_check_character_status();
    if (system_char_variable != '\0') {
      return 1;
    }
    system_check_character_status(0);
  }
  return 0;
}
unsigned long long allocate_system_buffer(uint handle)
{
  code *system_code_pointer;
  byte flag_value;
  int system_status;
  unsigned long long allocation_result;
  if (system_memory_buffer_initialized == '\0') {
    if (1 < handle) {
      system_execute_function(5);
      system_code_pointer = (code *)swi(3);
      allocation_result = (*system_code_pointer)();
      return allocation_result;
    }
    system_status = system_get_stack_alignment();
    if ((system_status == 0) || (handle != 0)) {
      flag_value = SYSTEM_CONFIG_BUFFER_SIZE - ((byte)system_global_data_pointer & 0x3f) & 0x3f;
      system_global_data_pointer = (0xffffffffffffffffU >> flag_value | -1L << SYSTEM_CONFIG_BUFFER_SIZE - flag_value) ^ system_global_data_pointer;
      system_ram_pointer_1 = system_global_data_pointer;
      system_global_data_pointer = system_global_data_pointer;
      system_global_data_pointer = system_global_data_pointer;
      system_ram_pointer_2 = system_global_data_pointer;
      system_global_data_pointer = system_global_data_pointer;
    }
    else {
      system_status = _initialize_onexit_table(&system_onexit_table_1);
      if ((system_status != 0) || (system_status = _initialize_onexit_table(&system_onexit_table_2), system_status != 0)) {
        return 0;
      }
    }
    system_memory_buffer_initialized = '\x01';
  }
  return 1;
}
ulong long process_buffer_allocation(long long handle)
{
  ulong long buffer_allocation_result;
  uint7 thread_operation_flags;
  IMAGE_SECTION_HEADER *section_header_ptr;
  buffer_allocation_result = 0;
  for (section_header_ptr = &image_section_header_start; section_header_ptr != (IMAGE_SECTION_HEADER *)&system_section_end;
      section_header_ptr = section_header_ptr + 1) {
    if (((ulong long)(uint)section_header_ptr->VirtualAddress <= handle - 0x180000000U) &&
       (buffer_allocation_result = (ulong long)((section_header_ptr->Misc).PhysicalAddress + section_header_ptr->VirtualAddress),
       handle - 0x180000000U < buffer_allocation_result)) goto label_;
  }
  section_header_ptr = (IMAGE_SECTION_HEADER *)0x0;
label_:
  if (section_header_ptr == (IMAGE_SECTION_HEADER *)0x0) {
    buffer_allocation_result = buffer_allocation_result & 0xffffffffffffff00;
  }
  else {
    thread_operation_flags = (uint7)(buffer_allocation_result >> 8);
    if ((int)section_header_ptr->Characteristics < 0) {
      buffer_allocation_result = (ulong long)thread_operation_flags << 8;
    }
    else {
      buffer_allocation_result = CONCAT71(thread_operation_flags,1);
    }
  }
  return buffer_allocation_result;
}
    data_180c91d50 = '\0';
  }
  return;
}
  system_global_flag_1 = 0;
  return;
}
  system_global_flag_4 = 0;
  return;
}
    script_system_initialized = '\0';
  }
  return;
}
    configuration_system_initialized = '\0';
  }
  return;
}
    memory_system_initialized = '\0';
  }
  return;
}
    thread_pool_system_initialized = '\0';
  }
  return;
}
    module_system_initialized = '\0';
  }
  return;
}
    system_data_status_flag = '\0';
  }
  return;
}
    system_data_control_flag = '\0';
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
    system_data_initialization_flag = '\0';
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
