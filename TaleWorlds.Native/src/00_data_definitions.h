#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 数据定义头文件 - 包含游戏引擎核心数据结构和函数定义
// 简化实现：仅美化函数名和变量名，添加必要的注释，保持代码结构不变
// 原本实现：完全重构所有命名体系，建立统一的语义化命名规范

// 全局数据变量定义
void *global_system_data_ptr;
void *global_system_unknown_ptr;
int global_initialized_flag = 1;
int *global_config_ptr = 0;
longlong global_max_value = 0x7fffffffffffffff;
int global_status_flag = 0;

/**
 * @brief 初始化核心系统
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置核心系统的基本参数和回调函数
 */
int core_system_initialize(void)
{
  longlong initialization_result;
  initialization_result = system_initialize_callback(system_setup_function);
  return (initialization_result != 0) - 1;
}

/**
 * @brief 初始化渲染系统
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置渲染系统的基本参数和回调函数
 */
int graphics_system_initialize(void)
{
  longlong init_result;
  graphics_system_data_ptr = &global_graphics_data;
  graphics_system_callback_ptr = &graphics_system_callback;
  graphics_system_state = 0;
  graphics_system_callback = 0;
  init_result = system_initialize_callback(graphics_setup_function);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化音频系统
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置音频系统的基本参数和回调函数
 */
int audio_system_initialize(void)
{
  longlong init_result;
  audio_system_data_ptr = &global_graphics_data;
  audio_system_callback_ptr = &audio_system_callback;
  audio_system_state = 0;
  audio_system_callback = 0;
  init_result = system_initialize_callback(audio_setup_function);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化输入系统
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置输入系统的基本参数和回调函数
 */
int input_system_initialize(void)
{
  longlong init_result;
  input_system_data_ptr = &global_input_data;
  input_system_callback_ptr = &input_system_callback;
  input_system_state = 0;
  input_system_callback = 0;
  init_result = system_initialize_callback(input_setup_function);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化网络系统
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置网络系统的基本参数和回调函数
 */
int network_system_initialize(void)
{
  longlong init_result;
  network_system_data_ptr = &global_network_data;
  network_system_callback_ptr = &network_system_callback;
  network_system_state = 0;
  network_system_callback = 0;
  init_result = system_initialize_callback(network_setup_function);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化物理系统
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置物理系统的基本参数和回调函数
 */
int physics_system_initialize(void)
{
  longlong init_result;
  physics_system_data_ptr = &global_graphics_data;
  physics_system_callback_ptr = &physics_system_callback;
  physics_system_state = 0;
  physics_system_callback = 0;
  init_result = system_initialize_callback(physics_setup_function);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化AI系统
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置AI系统的基本参数和回调函数
 */
int ai_system_initialize(void)
{
  longlong init_result;
  ai_system_data_ptr = &global_graphics_data;
  ai_system_callback_ptr = &ai_system_callback;
  ai_system_state = 0;
  ai_system_callback = 0;
  init_result = system_initialize_callback(ai_setup_function);
  return (init_result != 0) - 1;
}
/**
 * @brief 初始化线程同步系统1
 * @param system_context 线程参数1
 * @param network_context 线程参数2
 * @param thread_context 线程参数3
 * @param memory_context 线程参数4
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责初始化第一个线程同步系统，包括条件变量和互斥锁
 */
int thread_sync_system_initialize_1(uint64_t system_context, uint64_t network_context, uint64_t thread_context, uint64_t memory_context)
{
  longlong init_result;
  uint64_t thread_sync_flags;
  thread_sync_flags = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c910a8, 2, thread_context, memory_context, thread_sync_flags);
  thread_sync_1_flag = 0;
  init_result = system_initialize_callback(thread_sync_setup_1);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化线程同步系统2
 * @param system_context 线程参数1
 * @param network_context 线程参数2
 * @param thread_context 线程参数3
 * @param memory_context 线程参数4
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责初始化第二个线程同步系统，包括条件变量和互斥锁
 */
int thread_sync_system_initialize_2(uint64_t system_context, uint64_t network_context, uint64_t thread_context, uint64_t memory_context)
{
  longlong init_result;
  uint64_t thread_sync_flags;
  thread_sync_flags = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c91148, 2, thread_context, memory_context, thread_sync_flags);
  thread_sync_2_flag = 0;
  init_result = system_initialize_callback(thread_sync_setup_2);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化线程同步系统3
 * @param system_context 线程参数1
 * @param network_context 线程参数2
 * @param thread_context 线程参数3
 * @param memory_context 线程参数4
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责初始化第三个线程同步系统，包括条件变量和互斥锁
 */
int thread_sync_system_initialize_3(uint64_t system_context, uint64_t network_context, uint64_t thread_context, uint64_t memory_context)
{
  longlong init_result;
  uint64_t thread_sync_flags;
  thread_sync_flags = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c911e8, 2, thread_context, memory_context, thread_sync_flags);
  thread_sync_3_flag = 0;
  init_result = system_initialize_callback(thread_sync_setup_3);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化线程同步系统4
 * @param system_context 线程参数1
 * @param network_context 线程参数2
 * @param thread_context 线程参数3
 * @param memory_context 线程参数4
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责初始化第四个线程同步系统，包括条件变量和互斥锁
 */
int thread_sync_system_initialize_4(uint64_t system_context, uint64_t network_context, uint64_t thread_context, uint64_t memory_context)
{
  longlong init_result;
  uint64_t thread_sync_flags;
  thread_sync_flags = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c91288, 2, thread_context, memory_context, thread_sync_flags);
  thread_sync_4_flag = 0;
  init_result = system_initialize_callback(thread_sync_setup_4);
  return (init_result != 0) - 1;
}
  graphics_system_flag = 0;
  graphics_system_config = 6;
  strcpy_s(&graphics_system_flag,0x10,&graphics_system_name,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(graphics_setup_callback);
  return (data_definitions_system_result != 0) - 1;
}
int system_initialize_graphics(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  audio_system_data_ptr = &global_system_data;
  audio_system_config_ptr = &audio_system_flag;
  audio_system_flag = 0;
  audio_system_config = 0xd;
  strcpy_s(&audio_system_flag,0x10,&audio_system_name,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(audio_setup_callback);
  return (data_definitions_system_result != 0) - 1;
}
int system_initialize_audio(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  input_system_data_ptr = &global_system_data;
  input_system_config_ptr = &input_system_flag;
  input_system_flag = 0;
  input_system_config = 0xf;
  strcpy_s(&input_system_flag,0x10,&input_system_name,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(input_setup_callback);
  return (data_definitions_system_result != 0) - 1;
}
int system_initialize_input(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  network_system_data_ptr = &global_system_data;
  network_system_config_ptr = &network_system_flag;
  network_system_flag = 0;
  network_system_config = 0xf;
  strcpy_s(&network_system_flag,0x10,&network_system_name,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(network_setup_callback);
  return (data_definitions_system_result != 0) - 1;
}
int system_initialize_network(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  physics_system_data_ptr = &global_system_data;
  physics_system_config_ptr = &physics_system_flag;
  physics_system_flag = 0;
  physics_system_config = 0xd;
  strcpy_s(&physics_system_flag,0x10,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &global_system_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x10,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &global_system_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 4;
  strcpy_s(&global_data,0x10,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &global_system_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 5;
  strcpy_s(&global_data,0x10,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
/**
 * @brief 初始化游戏界面字符串
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置游戏界面相关的字符串信息
 */
int game_ui_string_initialize(void)
{
  longlong init_result;
  uint64_t string_param;
  ui_string_data_ptr = &global_string_data;
  ui_string_callback_ptr = &ui_string_callback;
  ui_string_callback = 0;
  ui_string_length = 5;
  strcpy_s(&ui_string_callback, 0x10, &ui_string_template, string_param, 0xfffffffffffffffe);
  init_result = system_initialize_callback(ui_setup_function);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化游戏脚本字符串
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置游戏脚本相关的字符串信息
 */
int game_script_string_initialize(void)
{
  longlong init_result;
  uint64_t string_param;
  script_string_data_ptr = &global_input_data;
  script_string_callback_ptr = &script_string_callback;
  script_string_callback = 0;
  script_string_length = 0xd;
  strcpy_s(&script_string_callback, 0x20, &script_string_template, string_param, 0xfffffffffffffffe);
  init_result = system_initialize_callback(script_setup_function);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化游戏逻辑字符串
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责设置游戏逻辑相关的字符串信息
 */
int game_logic_string_initialize(void)
{
  longlong init_result;
  uint64_t string_param;
  logic_string_data_ptr = &global_input_data;
  logic_string_callback_ptr = &logic_string_callback;
  logic_string_callback = 0;
  logic_string_length = 9;
  strcpy_s(&logic_string_callback, 0x20, &logic_string_template, string_param, 0xfffffffffffffffe);
  init_result = system_initialize_callback(logic_setup_function);
  return (init_result != 0) - 1;
}

/**
 * @brief 初始化游戏渲染互斥锁
 * @param system_context 互斥锁参数1
 * @param network_context 互斥锁参数2
 * @param thread_context 互斥锁参数3
 * @param memory_context 互斥锁参数4
 * @return 成功返回0，失败返回-1
 * 
 * 该函数负责初始化游戏渲染系统的互斥锁
 */
int game_render_mutex_initialize(uint64_t system_context, uint64_t network_context, uint64_t thread_context, uint64_t memory_context)
{
  longlong init_result;
  _Mtx_init_in_situ(0x180c91970, 0x102, thread_context, memory_context, 0xfffffffffffffffe);
  init_result = system_initialize_callback(render_mutex_setup_function);
  return (init_result != 0) - 1;
}
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1f;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x14;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0;
  strcpy_s(&global_data,0x40,&global_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1b;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 7;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x11;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x18;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x14;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xf;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x16;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x14;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x20;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x16;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xf;
  strcpy_s(&global_data,0x40,&unknown_data);
  data_definitions_system_result = system_register_callback(&unknown_data);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xb;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 9;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 9;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xb;
  strcpy_s(&global_data,0x80,&unknown_data,register_param,0xfffffffffffffffe);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 10;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x11;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x11;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1a;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1b;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x11;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x11;
  strcpy_s(&global_data,0x80,&unknown_data);
  data_definitions_system_result = system_register_callback(&unknown_data);
  return (data_definitions_system_result != 0) - 1;
}
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1f;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x14;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0;
  strcpy_s(&global_data,0x40,&global_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1b;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 7;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x11;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x18;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x14;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xf;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x16;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x14;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x20;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x16;
  strcpy_s(&global_data,0x40,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xf;
  strcpy_s(&global_data,0x40,&unknown_data);
  data_definitions_system_result = system_register_callback(&unknown_data);
  return (data_definitions_system_result != 0) - 1;
}
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x20,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 9;
  strcpy_s(&global_data,0x20,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x16;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x14;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&global_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x20;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1e;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1b;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1b;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1c;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1d;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x20;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1d;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1c;
  strcpy_s(&global_data,0x40,&global_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1f;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x21;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x25;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x23;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1e;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1e;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x12;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x16;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1a;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x15;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1b;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x15;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x28;
  strcpy_s(&global_data,0x40,&global_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x23;
  strcpy_s(&global_data,0x40,&global_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x17;
  strcpy_s(&global_data,0x40,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(uint64_t system_context,uint64_t network_context,uint64_t thread_context,uint64_t memory_context)
{
  longlong data_definitions_system_result;
  _Mtx_init_in_situ(0x180c91f70,2,thread_context,memory_context,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
  global_data = 0;
  _global_data = 7;
  strcpy_s(&global_data,0x80,&unknown_data,register_param,0xfffffffffffffffe);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 9;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xb;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 7;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 9;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xc;
  strcpy_s(&global_data,0x80,&unknown_data);
  data_definitions_system_result = system_register_callback(&unknown_data);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1b;
  strcpy_s(&global_data,0x80,&unknown_data,register_param,0xfffffffffffffffe);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x19;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1f;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x1b;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x20;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x20;
  strcpy_s(&global_data,0x80,&unknown_data);
  data_definitions_system_result = system_register_callback(&unknown_data);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x80,&unknown_data,register_param,0xfffffffffffffffe);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x13;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xe;
  strcpy_s(&global_data,0x80,&unknown_data);
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0xe;
  strcpy_s(&global_data,0x80,&unknown_data);
  data_definitions_system_result = system_register_callback(&unknown_data);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  _global_data = 0;
  uRam0000000180bfc158 = 0xf;
  global_data = 0;
  _global_data = 0;
  _global_data = 0;
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  _global_data = 3;
  _global_data = &global_data;
  _global_data = &global_data;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(uint64_t system_context,uint64_t network_context,uint64_t thread_context,uint64_t memory_context)
{
  longlong data_definitions_system_result;
  _Mtx_init_in_situ(0x180c91ff0,2,thread_context,memory_context,0xfffffffffffffffe);
  _global_data = &unknown_data;
  _global_data = &global_data;
  _global_data = 0;
  global_data = 0;
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 0x10;
  strcpy_s(&global_data,0x400,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 3;
  strcpy_s(&global_data,0x400,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 5;
  strcpy_s(&global_data,0x400,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x20,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 9;
  strcpy_s(&global_data,0x20,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
  global_data = 0;
  _global_data = 0xd;
  strcpy_s(&global_data,0x20,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
int function_(void)
{
  longlong data_definitions_system_result;
  uint64_t register_param;
  _global_data = &unknown_data;
  _global_data = &global_data;
  global_data = 0;
  _global_data = 9;
  strcpy_s(&global_data,0x20,&unknown_data,register_param,0xfffffffffffffffe);
  data_definitions_system_result = system_register_callback(function_);
  return (data_definitions_system_result != 0) - 1;
}
  global_data = 1;
  global_data = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  function_(system_context,auStackX_18);
  function_();
  function_();
  return;
}
void WotsMainNativeSDLL(uint64_t system_context)
{
  uint64_t auStackX_18 [2];
  global_data = 0;
  global_data = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  function_(system_context,auStackX_18);
  function_();
  function_();
  return;
}
  global_data = 0;
  data_definitions_local_uint5 = function_(_global_data,0x7b8,8,3);
  _global_data = function_(data_definitions_local_uint5);
  function_(&puStack_98,system_context);
  data_definitions_local_uint3 = function_(&puStack_98,&unknown_data);
  data_definitions_local_uint14 = (ulonglong)(int)data_definitions_local_uint3;
  if (data_definitions_local_uint3 < uStack_88) {
    data_definitions_pointer_local_char12 = (char *)(lStack_90 + data_definitions_local_uint14);
    do {
      data_definitions_local_int2 = (int)data_definitions_local_uint14;
      if (*data_definitions_pointer_local_char12 == ' ') goto label_;
      data_definitions_local_uint14 = (ulonglong)(data_definitions_local_int2 + 1U);
      data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
    } while (data_definitions_local_int2 + 1U < uStack_88);
  }
  data_definitions_local_int2 = -1;
label_:
  data_definitions_local_uint3 = data_definitions_local_int2 + 1;
  data_definitions_local_uint14 = (ulonglong)(int)data_definitions_local_uint3;
  if (data_definitions_local_uint3 < uStack_88) {
    data_definitions_pointer_local_char12 = (char *)(lStack_90 + data_definitions_local_uint14);
    do {
      if (*data_definitions_pointer_local_char12 == ' ') goto label_;
      data_definitions_local_uint15 = (int)data_definitions_local_uint14 + 1;
      data_definitions_local_uint14 = (ulonglong)data_definitions_local_uint15;
      data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
    } while (data_definitions_local_uint15 < uStack_88);
  }
  data_definitions_local_uint14 = 0xffffffff;
label_:
  if (data_definitions_local_int2 != -1) {
    function_(&puStack_98,&puStack_78,data_definitions_local_uint3,data_definitions_local_uint14);
    data_definitions_local_pointer13 = &global_data;
    if (puStack_70 != (void *)0x0) {
      data_definitions_local_pointer13 = puStack_70;
    }
    local_uint4 = atoi(data_definitions_local_pointer13);
    *(uint32_t *)(_global_data + 0x7b4) = local_uint4;
    puStack_78 = &unknown_data;
    if (puStack_70 != (void *)0x0) {
      function_();
    }
    puStack_70 = (void *)0x0;
    uStack_60 = 0;
    puStack_78 = &unknown_data;
  }
  function_();
  data_definitions_local_uint5 = function_(_global_data,0x213458,8,10);
  _global_data = function_(data_definitions_local_uint5);
  pdata_definitions_local_long6 = (longlong *)function_(_global_data,0xe8,8,3);
  plStackX_10 = pdata_definitions_local_long6;
  function_(pdata_definitions_local_long6);
  *pdata_definitions_local_long6 = (longlong)&unknown_data;
  pplStackX_18 = (longlong **)(pdata_definitions_local_long6 + 0x18);
  *pplStackX_18 = (longlong *)&unknown_data;
  pdata_definitions_local_long6[0x19] = 0;
  *(uint32_t *)(pdata_definitions_local_long6 + 0x1a) = 0;
  *pplStackX_18 = (longlong *)&unknown_data;
  pdata_definitions_local_long6[0x1b] = 0;
  pdata_definitions_local_long6[0x19] = 0;
  *(uint32_t *)(pdata_definitions_local_long6 + 0x1a) = 0;
  (*(code *)(*pplStackX_18)[2])(pplStackX_18,system_context);
  pdata_definitions_local_long6[0x1c] = network_context;
  plStack_48 = pdata_definitions_local_long6;
  (**(code **)(*pdata_definitions_local_long6 + 0x28))(pdata_definitions_local_long6);
  local_long7 = _global_data;
  pplStackX_18 = &plStackX_10;
  plStackX_10 = pdata_definitions_local_long6;
  (**(code **)(*pdata_definitions_local_long6 + 0x28))(pdata_definitions_local_long6);
  function_(local_long7,&plStackX_10);
  while( true ) {
    if ((void *)*pdata_definitions_local_long6 == &unknown_data) {
      local_char16 = (char)pdata_definitions_local_long6[2] != '\0';
    }
    else {
      local_char16 = (**(code **)((void *)*pdata_definitions_local_long6 + 0x68))(pdata_definitions_local_long6);
    }
    if (local_char16 != '\0') break;
    Sleep(1);
  }
  (**(code **)(*pdata_definitions_local_long6 + 0x38))(pdata_definitions_local_long6);
  puStack_98 = &unknown_data;
  if (lStack_90 == 0) {
    return;
  }
  function_();
}
  global_data = 1;
  global_data = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  function_(system_context,auStackX_18);
  function_();
  function_();
  return;
}
void WotsMainNative(uint64_t system_context)
{
  uint64_t auStackX_18 [2];
  global_data = 0;
  global_data = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  function_(system_context,auStackX_18);
  function_();
  function_();
  return;
}
void WotsMainNativeCoreCLR(uint64_t system_context)
{
  uint64_t auStackX_18 [2];
  global_data = 0;
  global_data = 1;
  auStackX_18[0] = GetModuleHandleA(0);
  function_(system_context,auStackX_18);
  function_();
  function_();
  return;
}
    global_data = local_int8 != 0xb7;
  }
  function_(_global_data,0,0xd,&unknown_data,global_data);
  if (puStack_28 == (void *)0x0) {
    return;
  }
  function_();
}
    global_data = 0;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  function_(&puStack_48,system_context);
  function_(&uStack_68,&puStack_48);
  puStack_48 = &unknown_data;
  if (lStack_40 != 0) {
    function_();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &unknown_data;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  function_(&uStack_88,&uStack_68);
  function_(&uStack_88,auStack_a8);
  if (0x1fff < uStack_98) {
    uStack_98 = 0x1fff;
  }
  local_pointer1 = &global_data;
  if (puStack_a0 != (void *)0x0) {
    local_pointer1 = puStack_a0;
  }
  memcpy(&global_data,local_pointer1,(longlong)(int)uStack_98);
}
    global_data = 0;
    return;
  }
  local_long2 = -1;
  do {
    local_long2 = local_long2 + 1;
  } while (*(char *)(system_context + local_long2) != '\0');
  local_uint1 = (uint)local_long2;
  if (0x1fff < local_uint1) {
    local_uint1 = 0x1fff;
  }
  memcpy(&global_data,system_context,(longlong)(int)local_uint1);
}
          global_data = 1;
          global_data = 0;
          *(uint8_t *)(_global_data + 0x1f0) = 0;
          puStack_2c8 = &unknown_data;
          uStack_2b0 = 0;
          puStack_2c0 = (uint8_t *)0x0;
          uStack_2b8 = 0;
          if (local_pointer17 != (void *)0x0) {
            data_definitions_local_long20 = -1;
            do {
              data_definitions_local_long9 = data_definitions_local_long20;
              data_definitions_local_long20 = data_definitions_local_long9 + 1;
            } while (local_pointer17[data_definitions_local_long20] != '\0');
            if ((int)data_definitions_local_long20 != 0) {
              local_int19 = (int)data_definitions_local_long9 + 2;
              data_definitions_local_int6 = local_int19;
              if (local_int19 < 0x10) {
                data_definitions_local_int6 = 0x10;
              }
              local_pointer11 = (uint8_t *)function_(_global_data,(longlong)data_definitions_local_int6,0x13);
              *local_pointer11 = 0;
              puStack_2c0 = local_pointer11;
              local_uint7 = function_(local_pointer11);
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,local_uint7);
              memcpy(local_pointer11,local_pointer17,local_int19);
            }
          }
          uStack_2b8 = 0;
          strstr(&global_data,&unknown_data);
          strstr(&global_data,&unknown_data);
          strstr(&global_data,&unknown_data);
          strstr(&global_data,&unknown_data);
          strstr(&global_data,&unknown_data);
          strstr(&global_data,&unknown_data);
          global_data = 1;
          global_data = 1;
          data_definitions_local_long20 = strstr(local_pointer17,&unknown_data);
          if (data_definitions_local_long20 == 0) {
            data_definitions_local_long20 = strstr(local_pointer17,&unknown_data);
            if ((((((data_definitions_local_long20 == 0) && (data_definitions_local_long20 = strstr(local_pointer17,&unknown_data), data_definitions_local_long20 == 0)) &&
                  (data_definitions_local_long20 = strstr(local_pointer17,&unknown_data), data_definitions_local_long20 == 0)) &&
                 ((data_definitions_local_long20 = strstr(local_pointer17,&unknown_data), data_definitions_local_long20 == 0 &&
                  (data_definitions_local_long20 = strstr(local_pointer17,&unknown_data), data_definitions_local_long20 == 0)))) &&
                ((data_definitions_local_long20 = strstr(local_pointer17,&unknown_data), data_definitions_local_long20 == 0 &&
                 ((data_definitions_local_long20 = strstr(local_pointer17,&unknown_data), data_definitions_local_long20 == 0 &&
                  (data_definitions_local_long20 = strstr(local_pointer17,&unknown_data), data_definitions_local_long20 == 0)))))) &&
               (data_definitions_local_long20 = strstr(local_pointer17,&unknown_data), data_definitions_local_long20 == 0)) {
              *(uint16_t *)(data_definitions_local_long24 + 0x24) = 0x101;
              *(uint8_t *)(data_definitions_local_long24 + 0x28) = 1;
            }
            else {
              global_data = 1;
            }
          }
          else {
            *(uint16_t *)(data_definitions_local_long24 + 0x24) = 0;
          }
          puStack_2c0 = (uint8_t *)0x0;
          uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
          puStack_2c8 = &unknown_data;
        }
        else if (data_definitions_local_uint8 == 0xb) {
          data_definitions_local_int6 = strcmp(local_pointer11,&unknown_data);
          if (data_definitions_local_int6 != 0) goto label_;
          global_data = 1;
          global_data = 0;
          global_data = 1;
          data_definitions_local_long24 = strstr(local_pointer17,&unknown_data);
          if (data_definitions_local_long24 != 0) {
            local_pointer17 = &unknown_data;
            goto label_;
          }
        }
        else {
          if (data_definitions_local_uint8 == 0xc) {
            data_definitions_local_int6 = strcmp(local_pointer11,&unknown_data);
            local_bool31 = data_definitions_local_int6 == 0;
          }
          else {
label_:
            local_bool31 = false;
          }
          if (local_bool31) {
            function_(&puStack_238,local_pointer17);
            data_definitions_local_uint8 = function_(&puStack_238,&unknown_data);
            local_uint21 = (ulonglong)(int)data_definitions_local_uint8;
            if (data_definitions_local_uint8 < uStack_228) {
              data_definitions_pointer_local_char12 = (char *)(lStack_230 + local_uint21);
              do {
                data_definitions_local_int6 = (int)local_uint21;
                if (*data_definitions_pointer_local_char12 == ' ') goto label_;
                local_uint21 = (ulonglong)(data_definitions_local_int6 + 1U);
                data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
              } while (data_definitions_local_int6 + 1U < uStack_228);
            }
            data_definitions_local_int6 = -1;
label_:
            data_definitions_local_uint8 = data_definitions_local_int6 + 1;
            local_uint21 = (ulonglong)(int)data_definitions_local_uint8;
            if (data_definitions_local_uint8 < uStack_228) {
              data_definitions_pointer_local_char12 = (char *)(lStack_230 + local_uint21);
              do {
                if (*data_definitions_pointer_local_char12 == ' ') goto label_;
                local_uint26 = (int)local_uint21 + 1;
                local_uint21 = (ulonglong)local_uint26;
                data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
              } while (local_uint26 < uStack_228);
            }
            local_uint21 = 0xffffffff;
label_:
            if (data_definitions_local_int6 != -1) {
              function_(&puStack_238,&puStack_1b8,data_definitions_local_uint8,local_uint21);
              data_definitions_local_int6 = iStack_1a8;
              local_int19 = 0;
              data_definitions_local_long20 = strchr(puStack_1b0,0x2e);
              if (data_definitions_local_long20 != 0) {
                do {
                  local_int19 = local_int19 + 1;
                  data_definitions_local_long20 = strchr(data_definitions_local_long20 + 1,0x2e);
                } while (data_definitions_local_long20 != 0);
                if ((local_int19 == 3) && (data_definitions_local_int6 - 7U < 9)) {
                  local_pointer18 = &global_data;
                  if (puStack_1b0 != (void *)0x0) {
                    local_pointer18 = puStack_1b0;
                  }
                  (**(code **)(*(longlong *)(data_definitions_local_long24 + 400) + 0x10))
                            ((longlong *)(data_definitions_local_long24 + 400),local_pointer18);
                }
              }
              puStack_1b8 = &unknown_data;
              if (puStack_1b0 != (void *)0x0) {
                function_();
              }
              puStack_1b0 = (void *)0x0;
              uStack_1a0 = 0;
              puStack_1b8 = &unknown_data;
            }
            puStack_238 = &unknown_data;
            if (lStack_230 != 0) {
              function_();
            }
            lStack_230 = 0;
            uStack_220 = 0;
            puStack_238 = &unknown_data;
          }
          else {
            if (data_definitions_local_uint8 == 0x11) {
              data_definitions_local_int6 = strcmp(local_pointer11,&unknown_data);
              local_bool31 = data_definitions_local_int6 == 0;
            }
            else {
              local_bool31 = false;
            }
            if (local_bool31) {
              function_(&puStack_218,local_pointer17);
              data_definitions_local_uint8 = function_(&puStack_218,&unknown_data);
              local_uint21 = (ulonglong)(int)data_definitions_local_uint8;
              if (data_definitions_local_uint8 < uStack_208) {
                data_definitions_pointer_local_char12 = (char *)(lStack_210 + local_uint21);
                do {
                  data_definitions_local_int6 = (int)local_uint21;
                  if (*data_definitions_pointer_local_char12 == ' ') goto label_;
                  local_uint21 = (ulonglong)(data_definitions_local_int6 + 1U);
                  data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
                } while (data_definitions_local_int6 + 1U < uStack_208);
              }
              data_definitions_local_int6 = -1;
label_:
              data_definitions_local_uint8 = data_definitions_local_int6 + 1;
              local_uint21 = (ulonglong)(int)data_definitions_local_uint8;
              if (data_definitions_local_uint8 < uStack_208) {
                data_definitions_pointer_local_char12 = (char *)(lStack_210 + local_uint21);
                do {
                  if (*data_definitions_pointer_local_char12 == ' ') goto label_;
                  local_uint26 = (int)local_uint21 + 1;
                  local_uint21 = (ulonglong)local_uint26;
                  data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
                } while (local_uint26 < uStack_208);
              }
              local_uint21 = 0xffffffff;
label_:
              if (data_definitions_local_int6 != -1) {
                function_(&puStack_218,&puStack_198,data_definitions_local_uint8,local_uint21);
                data_definitions_local_int6 = iStack_188;
                local_int19 = 0;
                data_definitions_local_long24 = strchr(puStack_190,0x2e);
                if (data_definitions_local_long24 != 0) {
                  do {
                    local_int19 = local_int19 + 1;
                    data_definitions_local_long24 = strchr(data_definitions_local_long24 + 1,0x2e);
                  } while (data_definitions_local_long24 != 0);
                  if ((local_int19 == 3) && (data_definitions_local_int6 - 7U < 9)) {
                    local_pointer18 = &global_data;
                    if (puStack_190 != (void *)0x0) {
                      local_pointer18 = puStack_190;
                    }
                    (**(code **)(_global_data + 0x10))(&global_data,local_pointer18);
                  }
                }
                puStack_198 = &unknown_data;
                if (puStack_190 != (void *)0x0) {
                  function_();
                }
                puStack_190 = (void *)0x0;
                uStack_180 = 0;
                puStack_198 = &unknown_data;
              }
              puStack_218 = &unknown_data;
              if (lStack_210 != 0) {
                function_();
              }
              lStack_210 = 0;
              uStack_200 = 0;
              puStack_218 = &unknown_data;
            }
            else {
              if (data_definitions_local_uint8 == 0xe) {
                data_definitions_local_int6 = strcmp(local_pointer11,&unknown_data);
                local_bool31 = data_definitions_local_int6 == 0;
              }
              else {
                local_bool31 = false;
              }
              if (local_bool31) {
                function_(&puStack_1f8,local_pointer17);
                data_definitions_local_uint8 = function_(&puStack_1f8,&unknown_data);
                local_uint21 = (ulonglong)(int)data_definitions_local_uint8;
                if (data_definitions_local_uint8 < uStack_1e8) {
                  data_definitions_pointer_local_char12 = (char *)(lStack_1f0 + local_uint21);
                  do {
                    if (*data_definitions_pointer_local_char12 == ' ') goto label_;
                    data_definitions_local_uint8 = (int)local_uint21 + 1;
                    local_uint21 = (ulonglong)data_definitions_local_uint8;
                    data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
                  } while (data_definitions_local_uint8 < uStack_1e8);
                }
                local_uint21 = 0xffffffff;
label_:
                data_definitions_local_uint8 = (int)local_uint21 + 1;
                local_uint28 = (ulonglong)(int)data_definitions_local_uint8;
                if (data_definitions_local_uint8 < uStack_1e8) {
                  data_definitions_pointer_local_char12 = (char *)(lStack_1f0 + local_uint28);
                  do {
                    if (*data_definitions_pointer_local_char12 == ' ') goto label_;
                    local_uint26 = (int)local_uint28 + 1;
                    local_uint28 = (ulonglong)local_uint26;
                    data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
                  } while (local_uint26 < uStack_1e8);
                }
                local_uint28 = 0xffffffff;
label_:
                if ((int)local_uint21 != -1) {
                  function_(&puStack_1f8,&puStack_2a8,data_definitions_local_uint8,local_uint28);
                  function_(&puStack_2a8);
                  if (uStack_298 != 0) {
                    data_definitions_local_int6 = 0;
                    data_definitions_local_long20 = (longlong)(int)(uStack_298 - 1);
                    if (0 < (int)(uStack_298 - 1)) {
                      do {
                        if (puStack_2a0[data_definitions_local_long20] != '\"') break;
                        data_definitions_local_int6 = data_definitions_local_int6 + 1;
                        data_definitions_local_long20 = data_definitions_local_long20 + -1;
                      } while (0 < data_definitions_local_long20);
                    }
                    uStack_298 = uStack_298 - data_definitions_local_int6;
                    puStack_2a0[uStack_298] = 0;
                  }
                  function_(&puStack_2a8,1);
                  local_pointer18 = &global_data;
                  if (puStack_2a0 != (void *)0x0) {
                    local_pointer18 = puStack_2a0;
                  }
                  data_definitions_local_long20 = -1;
                  do {
                    data_definitions_local_long20 = data_definitions_local_long20 + 1;
                  } while (local_pointer18[data_definitions_local_long20] != '\0');
                  if ((int)data_definitions_local_long20 < 0x400) {
                    _global_data = (int)data_definitions_local_long20;
                    strcpy_s(_global_data,0x400);
                  }
                  else {
                    function_(&unknown_data,0x400);
                    _global_data = 0;
                    *_global_data = 0;
                  }
                  data_definitions_local_uint8 = uStack_298;
                  local_uint21 = (ulonglong)uStack_298;
                  if (puStack_2a0 != (void *)0x0) {
                    function_(data_definitions_local_long24 + 0x170,local_uint21);
                  }
                  if (data_definitions_local_uint8 != 0) {
                    memcpy(*(uint64_t *)(data_definitions_local_long24 + 0x178),puStack_2a0,local_uint21);
                  }
                  *(uint32_t *)(data_definitions_local_long24 + 0x180) = 0;
                  if (*(longlong *)(data_definitions_local_long24 + 0x178) != 0) {
                    *(uint8_t *)(local_uint21 + *(longlong *)(data_definitions_local_long24 + 0x178)) = 0;
                  }
                  *(uint32_t *)(data_definitions_local_long24 + 0x18c) = uStack_28c;
                  puStack_2a8 = &unknown_data;
                  if (puStack_2a0 != (void *)0x0) {
                    function_(puStack_2a0,puStack_2a0);
                  }
                  puStack_2a0 = (void *)0x0;
                  uStack_290 = 0;
                  puStack_2a8 = &unknown_data;
                  local_uint21 = 0;
                }
                puStack_1f8 = &unknown_data;
                if (lStack_1f0 != 0) {
                  function_(lStack_1f0,local_uint21);
                }
                lStack_1f0 = 0;
                uStack_1e0 = 0;
                puStack_1f8 = &unknown_data;
              }
              else {
                if (data_definitions_local_uint8 == 0x16) {
                  data_definitions_local_int6 = strcmp(local_pointer11,&unknown_data);
                  if (data_definitions_local_int6 == 0) {
                    global_data = 1;
                    global_data = 1;
                    goto label_;
                  }
label_:
                  local_bool31 = false;
                }
                else {
                  if (data_definitions_local_uint8 != 0x12) goto label_;
                  data_definitions_local_int6 = strcmp(local_pointer11,&unknown_data);
                  local_bool31 = data_definitions_local_int6 == 0;
                }
                if (local_bool31) {
                  function_(&puStack_1d8,local_pointer17);
                  data_definitions_local_uint8 = function_(&puStack_1d8,&unknown_data);
                  local_uint21 = (ulonglong)(int)data_definitions_local_uint8;
                  if (data_definitions_local_uint8 < uStack_1c8) {
                    data_definitions_pointer_local_char12 = (char *)(lStack_1d0 + local_uint21);
                    do {
                      if (*data_definitions_pointer_local_char12 == ' ') goto label_;
                      data_definitions_local_uint8 = (int)local_uint21 + 1;
                      local_uint21 = (ulonglong)data_definitions_local_uint8;
                      data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
                    } while (data_definitions_local_uint8 < uStack_1c8);
                  }
                  local_uint21 = 0xffffffff;
label_:
                  data_definitions_local_uint8 = (int)local_uint21 + 1;
                  local_uint28 = (ulonglong)(int)data_definitions_local_uint8;
                  if (data_definitions_local_uint8 < uStack_1c8) {
                    data_definitions_pointer_local_char12 = (char *)(lStack_1d0 + local_uint28);
                    do {
                      if (*data_definitions_pointer_local_char12 == ' ') goto label_;
                      local_uint26 = (int)local_uint28 + 1;
                      local_uint28 = (ulonglong)local_uint26;
                      data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
                    } while (local_uint26 < uStack_1c8);
                  }
                  local_uint28 = 0xffffffff;
label_:
                  if ((int)local_uint21 != -1) {
                    function_(&puStack_1d8,&puStack_258,data_definitions_local_uint8,local_uint28);
                    function_(&puStack_258,1);
                    data_definitions_local_uint8 = uStack_248;
                    local_uint21 = (ulonglong)uStack_248;
                    if (lStack_250 != 0) {
                      function_(data_definitions_local_long24 + 0x170,local_uint21);
                    }
                    if (data_definitions_local_uint8 != 0) {
                      memcpy(*(uint64_t *)(data_definitions_local_long24 + 0x178),lStack_250,local_uint21);
                    }
                    *(uint32_t *)(data_definitions_local_long24 + 0x180) = 0;
                    if (*(longlong *)(data_definitions_local_long24 + 0x178) != 0) {
                      *(uint8_t *)(local_uint21 + *(longlong *)(data_definitions_local_long24 + 0x178)) = 0;
                    }
                    *(uint32_t *)(data_definitions_local_long24 + 0x18c) = uStack_23c;
                    *(uint8_t *)(data_definitions_local_long24 + 0x168) = 1;
                    puStack_258 = &unknown_data;
                    if (lStack_250 != 0) {
                      function_(lStack_250,lStack_250);
                    }
                    lStack_250 = 0;
                    uStack_240 = 0;
                    puStack_258 = &unknown_data;
                    local_uint21 = 0;
                  }
                  puStack_1d8 = &unknown_data;
                  if (lStack_1d0 != 0) {
                    function_(lStack_1d0,local_uint21);
                  }
                  lStack_1d0 = 0;
                  uStack_1c0 = 0;
                  puStack_1d8 = &unknown_data;
                }
                else {
                  if (data_definitions_local_uint8 == 0x17) {
                    data_definitions_local_int6 = strcmp(local_pointer11,&unknown_data);
                    if (data_definitions_local_int6 == 0) {
                      global_data = 1;
                      goto label_;
                    }
label_:
                    local_bool31 = false;
                  }
                  else {
                    if (data_definitions_local_uint8 != 0xb) goto label_;
                    data_definitions_local_int6 = strcmp(local_pointer11,&unknown_data);
                    local_bool31 = data_definitions_local_int6 == 0;
                  }
                  if (local_bool31) {
                    function_(&puStack_178,local_pointer17);
                    function_(&puStack_178);
                    function_(&puStack_178);
                    function_(&global_data,&puStack_178);
                    global_data = 1;
                    puStack_178 = &unknown_data;
                    if (lStack_170 != 0) {
                      function_();
                    }
                    lStack_170 = 0;
                    uStack_160 = 0;
                    puStack_178 = &unknown_data;
                  }
                  else {
                    local_pointer16 = &global_data;
                    if (local_pointer11 != (uint8_t *)0x0) {
                      local_pointer16 = local_pointer11;
                    }
                    data_definitions_local_long24 = strstr(local_pointer16);
                    if (data_definitions_local_long24 != 0) {
                      local_uint29 = 0;
                      puStack_288 = &unknown_data;
                      uStack_270 = 0;
                      puStack_280 = (uint32_t *)0x0;
                      uStack_278 = 0;
                      data_definitions_local_pointer13 = (uint32_t *)function_(_global_data,0x10,0x13);
                      *(uint8_t *)data_definitions_local_pointer13 = 0;
                      puStack_280 = data_definitions_local_pointer13;
                      local_uint7 = function_(data_definitions_local_pointer13);
                      uStack_270 = CONCAT44(uStack_270._4_4_,local_uint7);
                      *data_definitions_local_pointer13 = 0x726f662f;
                      data_definitions_local_pointer13[1] = 0x5f646563;
                      data_definitions_local_pointer13[2] = 0x666e6f63;
                      data_definitions_local_pointer13[3] = 0x3a6769;
                      uStack_278 = 0xf;
                      local_uint21 = local_uint29;
                      local_uint28 = local_uint29;
                      if (0 < (int)(data_definitions_local_uint8 - 0xe)) goto label_;
                      goto label_;
                    }
                    if (data_definitions_local_uint8 == 0xf) {
                      data_definitions_local_int6 = strcmp(local_pointer11);
                      if (data_definitions_local_int6 == 0) {
                        cStack_338 = '\x01';
                        *(uint8_t *)(_global_data + 0x22) = 1;
                        goto label_;
                      }
label_:
                      local_bool31 = false;
                    }
                    else {
                      if (data_definitions_local_uint8 == 0xc) {
                        data_definitions_local_int6 = strcmp(local_pointer11);
                        if (data_definitions_local_int6 == 0) {
                          local_pointer17 = &unknown_data;
label_:
                          function_(_global_data,local_pointer17);
                        }
                        goto label_;
                      }
                      if (data_definitions_local_uint8 == 0x1a) {
                        data_definitions_local_int6 = strcmp(local_pointer11);
                        if (data_definitions_local_int6 == 0) {
                          *(uint8_t *)(_global_data + 0x21) = 1;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (data_definitions_local_uint8 == 0x10) {
                        data_definitions_local_int6 = strcmp(local_pointer11);
                        if (data_definitions_local_int6 == 0) {
                          global_data = 0;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (data_definitions_local_uint8 == 0x18) {
                        data_definitions_local_int6 = strcmp(local_pointer11);
                        if (data_definitions_local_int6 == 0) {
                          global_data = 1;
                          goto label_;
                        }
                        goto label_;
                      }
                      if (data_definitions_local_uint8 != 0x14) goto label_;
                      data_definitions_local_int6 = strcmp(local_pointer11);
                      local_bool31 = data_definitions_local_int6 == 0;
                    }
                    data_definitions_local_long24 = _global_data;
                    if (local_bool31) {
                      function_(&puStack_330,local_pointer17);
                      function_(&puStack_330);
                      data_definitions_local_uint8 = 0;
                      data_definitions_pointer_local_char12 = pcStack_328;
                      if (uStack_320 != 0) {
                        do {
                          if (*data_definitions_pointer_local_char12 == '/') goto label_;
                          data_definitions_local_uint8 = data_definitions_local_uint8 + 1;
                          data_definitions_pointer_local_char12 = data_definitions_pointer_local_char12 + 1;
                        } while (data_definitions_local_uint8 < uStack_320);
                      }
                      data_definitions_local_uint8 = 0xffffffff;
label_:
                      if (data_definitions_local_uint8 != 0xffffffff) {
                        data_definitions_local_long24 = function_(&puStack_330,&puStack_c8,0);
                        if (pcStack_328 != (char *)0x0) {
                          function_();
                        }
                        uStack_320 = *(uint *)(data_definitions_local_long24 + 0x10);
                        pcStack_328 = *(char **)(data_definitions_local_long24 + 8);
                        uStack_318 = *(longlong *)(data_definitions_local_long24 + 0x18);
                        *(uint32_t *)(data_definitions_local_long24 + 0x10) = 0;
                        *(uint64_t *)(data_definitions_local_long24 + 8) = 0;
                        *(uint64_t *)(data_definitions_local_long24 + 0x18) = 0;
                        puStack_c8 = &unknown_data;
                        if (lStack_c0 != 0) {
                          function_();
                        }
                        lStack_c0 = 0;
                        uStack_b0 = 0;
                        puStack_c8 = &unknown_data;
                      }
                      function_(&puStack_330);
                      data_definitions_local_uint8 = uStack_320;
                      data_definitions_local_long24 = _global_data;
                      *(uint8_t *)(_global_data + 0x48) = 1;
                      local_uint21 = (ulonglong)uStack_320;
                      if (pcStack_328 != (char *)0x0) {
                        function_(data_definitions_local_long24 + 0x50,local_uint21);
                      }
                      if (data_definitions_local_uint8 != 0) {
                        memcpy(*(uint64_t *)(data_definitions_local_long24 + 0x58),pcStack_328,local_uint21);
                      }
                      *(uint32_t *)(data_definitions_local_long24 + 0x60) = 0;
                      if (*(longlong *)(data_definitions_local_long24 + 0x58) != 0) {
                        *(uint8_t *)(local_uint21 + *(longlong *)(data_definitions_local_long24 + 0x58)) = 0;
                      }
                      *(uint *)(data_definitions_local_long24 + 0x6c) = uStack_318._4_4_;
                      puStack_330 = &unknown_data;
                      if (pcStack_328 != (char *)0x0) {
                        function_(pcStack_328,pcStack_328);
                      }
                      pcStack_328 = (char *)0x0;
                      uStack_318 = (ulonglong)uStack_318._4_4_ << 0x20;
                      puStack_330 = &unknown_data;
                    }
                    else if (cStack_338 == '\0') {
                      data_definitions_local_uint27 = function_();
                      local_pointer16 = (uint8_t *)0x0;
                      puStack_2e8 = &unknown_data;
                      uStack_2d0 = 0;
                      puStack_2e0 = (uint8_t *)0x0;
                      uStack_2d8 = 0;
                      local_uint26 = uStack_334 | 1;
                      local_pointer11 = local_pointer16;
                      local_pointer14 = local_pointer16;
                      uStack_334 = local_uint26;
                      uStack_158 = data_definitions_local_uint27;
                      if (data_definitions_local_uint8 != 0) {
                        data_definitions_local_int6 = data_definitions_local_uint8 + 1;
                        if (data_definitions_local_int6 < 0x10) {
                          data_definitions_local_int6 = 0x10;
                        }
                        local_pointer14 = (uint8_t *)function_(_global_data,(longlong)data_definitions_local_int6,0x13);
                        *local_pointer14 = 0;
                        puStack_2e0 = local_pointer14;
                        local_pointer11 = (uint8_t *)function_(local_pointer14);
                        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)local_pointer11);
                      }
                      data_definitions_local_long24 = 1;
                      data_definitions_local_uint30 = 1;
                      if (1 < (int)data_definitions_local_uint8) {
                        local_uint21 = 0;
                        do {
                          data_definitions_local_uint27 = uStack_158;
                          local_uint26 = uStack_334;
                          if (data_definitions_local_uint8 <= data_definitions_local_uint30) break;
                          local_uint2 = puStack_308[data_definitions_local_long24];
                          data_definitions_local_int6 = (int)local_uint21;
                          local_uint23 = data_definitions_local_int6 + 1;
                          local_uint21 = (ulonglong)local_uint23;
                          if (local_uint23 != 0) {
                            local_uint26 = data_definitions_local_int6 + 2;
                            if (local_pointer14 == (uint8_t *)0x0) {
                              if ((int)local_uint26 < 0x10) {
                                local_uint26 = 0x10;
                              }
                              local_pointer14 = (uint8_t *)
                                        function_(_global_data,(longlong)(int)local_uint26,0x13);
                              *local_pointer14 = 0;
                            }
                            else {
                              if (local_uint26 <= (uint)local_pointer11) goto label_;
                              uStack_348 = 0x13;
                              local_pointer14 = (uint8_t *)
                                        function_(_global_data,local_pointer14,local_uint26,0x10);
                            }
                            puStack_2e0 = local_pointer14;
                            local_uint26 = function_(local_pointer14);
                            uStack_2d0 = CONCAT44(uStack_2d0._4_4_,local_uint26);
                            local_pointer11 = (uint8_t *)(ulonglong)local_uint26;
                          }
label_:
                          local_pointer16[(longlong)local_pointer14] = local_uint2;
                          local_pointer14[local_uint21] = 0;
                          local_pointer16 = (uint8_t *)(ulonglong)local_uint23;
                          data_definitions_local_uint30 = data_definitions_local_uint30 + 1;
                          data_definitions_local_long24 = data_definitions_local_long24 + 1;
                          data_definitions_local_uint27 = uStack_158;
                          local_uint26 = uStack_334;
                          uStack_2d8 = local_uint23;
                        } while (data_definitions_local_long24 < (int)data_definitions_local_uint8);
                      }
                      function_(local_pointer11,&puStack_2e8,data_definitions_local_uint27);
                      uStack_334 = local_uint26 & 0xfffffffe;
                      puStack_2e8 = &unknown_data;
                      if (local_pointer14 != (uint8_t *)0x0) {
                        function_(local_pointer14);
                      }
                      puStack_2e0 = (uint8_t *)0x0;
                      uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                      puStack_2e8 = &unknown_data;
                      local_pointer11 = puStack_308;
                      local_pointer17 = puStack_268;
                    }
                    else {
                      cStack_338 = '\0';
                      if (local_pointer11 != (uint8_t *)0x0) {
                        function_(_global_data + 0x28,local_pointer14);
                      }
                      if (data_definitions_local_uint8 != 0) {
                        memcpy(*(uint64_t *)(data_definitions_local_long24 + 0x30),local_pointer11,local_pointer14);
                      }
                      *(uint32_t *)(data_definitions_local_long24 + 0x38) = 0;
                      if (*(longlong *)(data_definitions_local_long24 + 0x30) != 0) {
                        local_pointer14[*(longlong *)(data_definitions_local_long24 + 0x30)] = 0;
                      }
                      *(uint32_t *)(data_definitions_local_long24 + 0x44) = uStack_2f8._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
label_:
        local_pointer14 = (uint8_t *)0x0;
        uStack_300 = 0;
        data_definitions_local_long24 = lStack_260;
        if (local_pointer11 != (uint8_t *)0x0) {
          *local_pointer11 = 0;
        }
      }
      else {
        function_(&puStack_310,data_definitions_local_uint8 + 1);
        puStack_308[uStack_300] = data_definitions_local_bool1;
        uStack_300 = uStack_300 + 1;
        local_pointer14 = (uint8_t *)(ulonglong)uStack_300;
        local_pointer14[(longlong)puStack_308] = 0;
        local_pointer11 = puStack_308;
      }
      uStack_2f0 = uStack_2f0 + 1;
    } while (uStack_2f0 < uStack_150);
  }
  puStack_98 = &unknown_data;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x10;
  strcpy_s(auStack_80,0x40,&unknown_data);
  local_char5 = function_(data_definitions_local_long24,&puStack_98);
  puStack_98 = &unknown_data;
  if (local_char5 != '\0') {
    *(uint32_t *)(data_definitions_local_long24 + 0x20) = 1;
  }
  (**(code **)(**(longlong **)(_global_data + 0x18) + 0x30))
            (*(longlong **)(_global_data + 0x18),global_data);
  puStack_310 = &unknown_data;
  if (local_pointer11 != (uint8_t *)0x0) {
    function_(local_pointer11);
  }
  puStack_308 = (uint8_t *)0x0;
  uStack_2f8 = uStack_2f8 & 0xffffffff00000000;
  puStack_310 = &unknown_data;
  function_(uStack_38 ^ (ulonglong)auStack_368);
  while (pdata_definitions_data_definitions_local_bool15 = pdata_definitions_data_definitions_local_bool15 + 1, data_definitions_local_uint8 != 0) {
label_:
    data_definitions_local_bool1 = *pdata_definitions_data_definitions_local_bool15;
    data_definitions_local_uint8 = (uint)pdata_definitions_data_definitions_local_bool15[data_definitions_local_long24];
    if (data_definitions_local_bool1 != data_definitions_local_uint8) break;
  }
  if ((int)(data_definitions_local_bool1 - data_definitions_local_uint8) < 1) {
label_:
    data_definitions_local_uint27 = 1;
  }
  else {
label_:
    data_definitions_local_uint27 = 0;
  }
  function_(data_definitions_local_long9,data_definitions_system_result0,data_definitions_local_long20,data_definitions_local_uint27);
  while( true ) {
    local_uint28 = (ulonglong)(data_definitions_local_int6 + 1);
    local_uint21 = local_uint21 + 1;
    if ((longlong)(int)(data_definitions_local_uint8 - 0xe) <= (longlong)local_uint21) break;
label_:
    data_definitions_local_int6 = (int)local_uint28;
    local_uint28 = local_uint29;
    local_uint25 = local_uint29;
    do {
      local_uint26 = (uint)local_uint25;
      if (local_pointer11[local_uint28 + local_uint21] != *(char *)(local_uint25 + (longlong)data_definitions_local_pointer13)) break;
      local_uint26 = local_uint26 + 1;
      local_uint25 = (ulonglong)local_uint26;
      local_uint28 = local_uint28 + 1;
    } while ((longlong)local_uint28 < 0xf);
    if (local_uint26 == 0xf) goto label_;
  }
label_:
  data_definitions_local_int6 = -1;
label_:
  function_(&puStack_310,&puStack_128,data_definitions_local_int6 + 0xf,local_pointer14);
  puStack_e8 = (uint64_t *)0x0;
  puStack_e0 = (uint64_t *)0x0;
  uStack_d8 = 0;
  uStack_d0 = 3;
  if (lStack_120 != 0) {
    function_(&puStack_128,&puStack_e8,&unknown_data);
  }
  data_definitions_local_pointer3 = puStack_e8;
  function_(&puStack_148,puStack_e8);
  function_(&puStack_108,data_definitions_local_pointer3 + 4);
  data_definitions_local_pointer4 = puStack_e0;
  if (((longlong)puStack_e0 - (longlong)data_definitions_local_pointer3 & 0xffffffffffffffe0U) != 0x40) {
label_:
    puStack_108 = &unknown_data;
    if (lStack_100 != 0) {
      function_();
    }
    lStack_100 = 0;
    uStack_f0 = 0;
    puStack_108 = &unknown_data;
    puStack_148 = &unknown_data;
    if (lStack_140 != 0) {
      function_();
    }
    lStack_140 = 0;
    uStack_130 = 0;
    puStack_148 = &unknown_data;
    for (data_definitions_local_pointer22 = data_definitions_local_pointer3; data_definitions_local_pointer22 != data_definitions_local_pointer4; data_definitions_local_pointer22 = data_definitions_local_pointer22 + 4) {
      (**(code **)*data_definitions_local_pointer22)(data_definitions_local_pointer22,0);
    }
    if (data_definitions_local_pointer3 != (uint64_t *)0x0) {
      function_(data_definitions_local_pointer3);
    }
    puStack_128 = &unknown_data;
    if (lStack_120 != 0) {
      function_();
    }
    lStack_120 = 0;
    uStack_110 = 0;
    puStack_128 = &unknown_data;
    puStack_288 = &unknown_data;
    function_(data_definitions_local_pointer13);
  }
  function_(_global_data,&puStack_148,&puStack_108);
  data_definitions_local_long9 = _global_data + 0x90;
  data_definitions_local_long24 = function_(_global_data,0x40,*(uint8_t *)(_global_data + 0xb8));
  function_(data_definitions_local_long24 + 0x20,&puStack_148);
  data_definitions_local_long20 = function_(data_definitions_local_long9,data_definitions_stack_char_336,data_definitions_local_long24 + 0x20);
  if (data_definitions_stack_char_336[0] == '\0') {
    function_(data_definitions_extraout_xmm0,data_definitions_local_long24);
    goto label_;
  }
  if (data_definitions_local_long20 != data_definitions_local_long9) {
    if (*(int *)(data_definitions_local_long20 + 0x30) == 0) {
label_:
      data_definitions_local_uint27 = 1;
      goto label_;
    }
    if (*(int *)(data_definitions_local_long24 + 0x30) != 0) {
      pdata_definitions_data_definitions_local_bool15 = *(byte **)(data_definitions_local_long20 + 0x28);
      data_definitions_system_result0 = *(longlong *)(data_definitions_local_long24 + 0x28) - (longlong)pdata_definitions_data_definitions_local_bool15;
      do {
        data_definitions_local_bool1 = *pdata_definitions_data_definitions_local_bool15;
        data_definitions_local_uint8 = (uint)pdata_definitions_data_definitions_local_bool15[data_definitions_system_result0];
        if (data_definitions_local_bool1 != data_definitions_local_uint8) break;
        pdata_definitions_data_definitions_local_bool15 = pdata_definitions_data_definitions_local_bool15 + 1;
      } while (data_definitions_local_uint8 != 0);
      if ((int)(data_definitions_local_bool1 - data_definitions_local_uint8) < 1) goto label_;
    }
  }
  data_definitions_local_uint27 = 0;
label_:
  function_(data_definitions_local_long24,data_definitions_local_long20,data_definitions_local_long9,data_definitions_local_uint27);
}
    global_data = 1;
    data_definitions_local_int7 = _Cnd_broadcast(0x180c91240);
    if (data_definitions_local_int7 != 0) {
      __Throw_C_error_std__YAXH_Z(data_definitions_local_int7);
    }
    data_definitions_local_int7 = _Mtx_unlock(0x180c91288);
    if (data_definitions_local_int7 != 0) {
      __Throw_C_error_std__YAXH_Z(data_definitions_local_int7);
    }
    function_(0x180c911a0);
  }
  *(uint32_t *)(_global_data + 4) = 0;
  if (*(char *)(data_definitions_local_long6 + 0x1ee) == '\0') {
    (**(code **)(**(longlong **)(data_definitions_local_long6 + 0x2b0) + 0xe0))();
    *(int *)(data_definitions_local_long6 + 0x224) = *(int *)(data_definitions_local_long6 + 0x224) + 1;
    if (*(int *)(_global_data + 0xe0) == 0) {
      if (*(char *)(data_definitions_local_long6 + 0x264) == '\0') {
        data_definitions_local_int7 = 10;
        if (10 < *(int *)(_global_data + 0xbd0)) {
          data_definitions_local_int7 = *(int *)(_global_data + 0xbd0);
        }
        data_definitions_local_float14 = (float)*(double *)(data_definitions_local_long6 + 0x208);
        if (1.0 / (float)data_definitions_local_int7 <= (float)*(double *)(data_definitions_local_long6 + 0x208)) {
          data_definitions_local_float14 = 1.0 / (float)data_definitions_local_int7;
        }
      }
      else {
        data_definitions_local_float14 = *(float *)(data_definitions_local_long6 + 0x268);
      }
      *(float *)(data_definitions_local_long6 + 0x220) = data_definitions_local_float14;
    }
    else {
      *(uint32_t *)(data_definitions_local_long6 + 0x220) = 0x3d088889;
      data_definitions_local_float14 = 0.033333335;
    }
    function_(data_definitions_local_long6,data_definitions_local_float14);
    data_definitions_local_uint5 = _global_data;
    if ((_global_data != 0) &&
       (data_definitions_system_result = *(longlong **)(_global_data + 0x228), data_definitions_system_result != (longlong *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = data_definitions_system_result;
      (**(code **)(*data_definitions_system_result + 0x28))();
      function_(data_definitions_local_uint5,&plStackX_10);
    }
    data_definitions_local_uint5 = _global_data;
    if (*(char *)(_global_data + 0xa0) == '\0') {
      if ((_global_data != 0) &&
         (data_definitions_system_result = *(longlong **)(_global_data + 0x228), data_definitions_system_result != (longlong *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = data_definitions_system_result;
        (**(code **)(*data_definitions_system_result + 0x28))();
        function_(data_definitions_local_uint5,&plStackX_18,0);
        data_definitions_system_result = *(longlong **)(_global_data + 0x228);
        *(uint64_t *)(_global_data + 0x228) = 0;
        if (data_definitions_system_result != (longlong *)0x0) {
          (**(code **)(*data_definitions_system_result + 0x38))();
        }
      }
      func_0x00018005c480(_global_data);
      data_definitions_system_result = _global_data;
      if (*(code **)(*_global_data + 8) == (code *)&unknown_data) {
        *(uint32_t *)(_global_data + 9) = 0;
        data_definitions_local_pointer4 = (uint8_t *)data_definitions_system_result[8];
        if (data_definitions_local_pointer4 != (uint8_t *)0x0) {
          *data_definitions_local_pointer4 = 0;
        }
        *(uint32_t *)((longlong)data_definitions_system_result + 0x54) = 0;
      }
      else {
        (**(code **)(*_global_data + 8))();
      }
    }
    else {
      if (*(char *)(data_definitions_local_long6 + 0x22c) != '\0') {
        function_();
      }
      *(uint32_t *)(data_definitions_local_long6 + 0x228) = *(uint32_t *)(data_definitions_local_long6 + 0x224);
      function_();
      function_();
    }
    QueryPerformanceCounter(&lStack_90);
    dVar15 = (double)lStack_90 * _global_data;
    _global_data = _global_data + 1;
    dVar16 = dVar15 - _global_data;
    if (1.0 < dVar16) {
      *(float *)(data_definitions_local_long6 + 500) = (float)((double)_global_data / dVar16);
      _global_data = 0;
      _global_data = dVar15;
      *(float *)(data_definitions_local_long6 + 0x1f8) = (float)(1000.0 / *(double *)(data_definitions_local_long6 + 0x70));
    }
    if (0.0 < *(double *)(_global_data + 0x1510)) {
      function_(data_definitions_local_long6,(float)*(double *)(_global_data + 0x1510));
    }
    if (*(char *)(data_definitions_local_long6 + 0x1ee) == '\0') {
      data_definitions_local_float14 = *(float *)(data_definitions_local_long6 + 0x200);
      dVar15 = *(double *)(data_definitions_local_long6 + 0x218);
      do {
        QueryPerformanceCounter(&lStack_88);
      } while ((double)lStack_88 * _global_data < (double)data_definitions_local_float14 + dVar15);
      QueryPerformanceCounter(&lStack_80);
      data_definitions_local_long8 = lStack_80 - _global_data;
      _global_data = lStack_80;
      *(double *)(data_definitions_local_long6 + 0x208) = (double)data_definitions_local_long8 * _global_data;
      QueryPerformanceCounter(&lStack_78);
      *(double *)(data_definitions_local_long6 + 0x218) = (double)lStack_78 * _global_data;
    }
  }
  return;
}
    global_data = 1;
    data_definitions_local_int6 = _Cnd_broadcast(0x180c91240);
    if (data_definitions_local_int6 != 0) {
      __Throw_C_error_std__YAXH_Z(data_definitions_local_int6);
    }
    data_definitions_local_int6 = _Mtx_unlock(0x180c91288);
    if (data_definitions_local_int6 != 0) {
      __Throw_C_error_std__YAXH_Z(data_definitions_local_int6);
    }
    function_(0x180c911a0);
  }
  *(uint32_t *)(_global_data + 4) = 0;
  if (*(char *)(system_context + 0x1ee) == '\0') {
    (**(code **)(**(longlong **)(system_context + 0x2b0) + 0xe0))();
    *(int *)(system_context + 0x224) = *(int *)(system_context + 0x224) + 1;
    if (*(int *)(_global_data + 0xe0) == 0) {
      if (*(char *)(system_context + 0x264) == '\0') {
        data_definitions_local_int6 = 10;
        if (10 < *(int *)(_global_data + 0xbd0)) {
          data_definitions_local_int6 = *(int *)(_global_data + 0xbd0);
        }
        local_float13 = (float)*(double *)(system_context + 0x208);
        if (1.0 / (float)data_definitions_local_int6 <= (float)*(double *)(system_context + 0x208)) {
          local_float13 = 1.0 / (float)data_definitions_local_int6;
        }
      }
      else {
        local_float13 = *(float *)(system_context + 0x268);
      }
      *(float *)(system_context + 0x220) = local_float13;
    }
    else {
      *(uint32_t *)(system_context + 0x220) = 0x3d088889;
      local_float13 = 0.033333335;
    }
    function_(system_context,local_float13);
    data_definitions_local_uint5 = _global_data;
    if ((_global_data != 0) &&
       (data_definitions_system_result = *(longlong **)(_global_data + 0x228), data_definitions_system_result != (longlong *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = data_definitions_system_result;
      (**(code **)(*data_definitions_system_result + 0x28))();
      function_(data_definitions_local_uint5,&plStackX_10);
    }
    data_definitions_local_uint5 = _global_data;
    if (*(char *)(_global_data + 0xa0) == '\0') {
      if ((_global_data != 0) &&
         (data_definitions_system_result = *(longlong **)(_global_data + 0x228), data_definitions_system_result != (longlong *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = data_definitions_system_result;
        (**(code **)(*data_definitions_system_result + 0x28))();
        function_(data_definitions_local_uint5,&plStackX_18,0);
        data_definitions_system_result = *(longlong **)(_global_data + 0x228);
        *(uint64_t *)(_global_data + 0x228) = 0;
        if (data_definitions_system_result != (longlong *)0x0) {
          (**(code **)(*data_definitions_system_result + 0x38))();
        }
      }
      func_0x00018005c480(_global_data);
      data_definitions_system_result = _global_data;
      if (*(code **)(*_global_data + 8) == (code *)&unknown_data) {
        *(uint32_t *)(_global_data + 9) = 0;
        data_definitions_local_pointer4 = (uint8_t *)data_definitions_system_result[8];
        if (data_definitions_local_pointer4 != (uint8_t *)0x0) {
          *data_definitions_local_pointer4 = 0;
        }
        *(uint32_t *)((longlong)data_definitions_system_result + 0x54) = 0;
      }
      else {
        (**(code **)(*_global_data + 8))();
      }
    }
    else {
      if (*(char *)(system_context + 0x22c) != '\0') {
        function_();
      }
      *(uint32_t *)(system_context + 0x228) = *(uint32_t *)(system_context + 0x224);
      function_();
      function_();
    }
    QueryPerformanceCounter(&lStack_90);
    dVar14 = (double)lStack_90 * _global_data;
    _global_data = _global_data + 1;
    dVar15 = dVar14 - _global_data;
    if (1.0 < dVar15) {
      *(float *)(system_context + 500) = (float)((double)_global_data / dVar15);
      _global_data = 0;
      _global_data = dVar14;
      *(float *)(system_context + 0x1f8) = (float)(1000.0 / *(double *)(system_context + 0x70));
    }
    if (0.0 < *(double *)(_global_data + 0x1510)) {
      function_(system_context,(float)*(double *)(_global_data + 0x1510));
    }
    if (*(char *)(system_context + 0x1ee) == '\0') {
      local_float13 = *(float *)(system_context + 0x200);
      dVar14 = *(double *)(system_context + 0x218);
      do {
        QueryPerformanceCounter(&lStack_88);
      } while ((double)lStack_88 * _global_data < (double)local_float13 + dVar14);
      QueryPerformanceCounter(&lStack_80);
      local_long7 = lStack_80 - _global_data;
      _global_data = lStack_80;
      *(double *)(system_context + 0x208) = (double)local_long7 * _global_data;
      QueryPerformanceCounter(&lStack_78);
      *(double *)(system_context + 0x218) = (double)lStack_78 * _global_data;
    }
  }
  return;
}
    global_data = global_data == '\0';
  }
  data_definitions_local_long9 = 0xe0;
  local_pointer6 = _global_data;
  do {
    local_pointer6 = local_pointer6 + 0x18;
    *local_pointer6 = 1;
    data_definitions_local_long9 = data_definitions_local_long9 + -1;
  } while (data_definitions_local_long9 != 0);
label_:
  local_pointer7 = (uint64_t *)_global_data[1];
  local_int4 = _Mtx_lock(0x180c91970);
  if (local_int4 != 0) {
    __Throw_C_error_std__YAXH_Z(local_int4);
  }
  data_definitions_system_result4 = _global_data;
  uStack_308 = _global_data;
  _global_data = (longlong *)*local_pointer7;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  local_uint11 = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_78 = 3;
  function_(auStack_2a8);
  function_((longlong)_global_data * 0x238 + _global_data + 0x1598,auStack_2a8);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    function_();
  }
  _global_data = data_definitions_system_result4;
  local_int4 = _Mtx_unlock(0x180c91970);
  if (local_int4 != 0) {
    __Throw_C_error_std__YAXH_Z(local_int4);
  }
  data_definitions_system_result4 = (longlong *)*_global_data;
  local_int4 = _Mtx_lock(0x180c91970);
  if (local_int4 != 0) {
    __Throw_C_error_std__YAXH_Z(local_int4);
  }
  data_definitions_system_result = _global_data;
  uStack_308 = _global_data;
  _global_data = (longlong *)*data_definitions_system_result4;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_78 = 3;
  function_(auStack_2a8);
  function_(auStack_2a8);
  *(float *)((longlong)_global_data + 0x18) = _global_data;
  function_();
  data_definitions_local_long9 = (longlong)_global_data;
  local_pointer7 = _global_data;
  local_pointer6 = _global_data;
  if (*(char *)(_global_data + 7) != '\0') {
    if ((((*(char *)(_global_data + 0xe) != '\0') ||
         (*(char *)((longlong)_global_data + 0x38c) != '\0')) ||
        (*(char *)((longlong)_global_data + 0x38d) != '\0')) ||
       (*(char *)((longlong)_global_data + 0x38e) != '\0')) {
      _global_data[0x1518] = 1;
      local_pointer6[0x1530] = 1;
      local_pointer6[0x1590] = 1;
      local_pointer6[0x15a8] = 1;
      local_pointer6[0x1710] = 1;
    }
    if (((*(char *)((longlong)local_pointer7 + 0x71) != '\0') || (*(char *)(data_definitions_local_long9 + 0x38d) != '\0')) ||
       (*(char *)(data_definitions_local_long9 + 0x38e) != '\0')) {
      do {
        local_pointer6 = local_pointer6 + 0x18;
        *local_pointer6 = 1;
        data_definitions_system_result2 = data_definitions_system_result2 + -1;
      } while (data_definitions_system_result2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    function_();
  }
  _global_data = data_definitions_system_result;
  local_int4 = _Mtx_unlock(0x180c91970);
  if (local_int4 != 0) {
    __Throw_C_error_std__YAXH_Z(local_int4);
  }
  if (*(int *)(_global_data + 0x161c) == 0x11) {
    local_pointer7 = (uint64_t *)*_global_data;
    local_int4 = _Mtx_lock(0x180c91970);
    if (local_int4 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int4);
    }
    data_definitions_system_result4 = _global_data;
    plStack_2c0 = _global_data;
    _global_data = (longlong *)*local_pointer7;
    function_(&unknown_data,0,0);
    function_(&unknown_data);
    uStack_2f0 = 0x40000000;
    auStack_2c8[0] = 0x3f800000;
    uStack_318 = 0x20000;
    puStack_320 = &unknown_data;
    pplStack_328 = (longlong **)&uStack_2f0;
    function_(&unknown_data,4,_global_data + 0x167c,auStack_2c8);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x40000000);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &unknown_data;
    pplStack_328 = &plStack_2f8;
    function_(&unknown_data,4,_global_data + 0x1680,&uStack_308);
    function_();
    _global_data = data_definitions_system_result4;
    local_int4 = _Mtx_unlock(0x180c91970);
    if (local_int4 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int4);
    }
  }
  if (*(int *)(_global_data + 0x161c) == 0xc) {
    local_pointer7 = (uint64_t *)*_global_data;
    local_int4 = _Mtx_lock(0x180c91970);
    if (local_int4 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int4);
    }
    data_definitions_system_result4 = _global_data;
    plStack_2c0 = _global_data;
    _global_data = (longlong *)*local_pointer7;
    function_(&unknown_data,0,0);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x40000000);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &unknown_data;
    pplStack_328 = (longlong **)&uStack_308;
    function_(&unknown_data,4,_global_data + 0x1688,&plStack_2f8);
    function_();
    _global_data = data_definitions_system_result4;
    local_int4 = _Mtx_unlock(0x180c91970);
    if (local_int4 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int4);
    }
  }
  if (*(int *)(_global_data + 0x161c) == 0xd) {
    local_pointer7 = (uint64_t *)*_global_data;
    local_int4 = _Mtx_lock(0x180c91970);
    if (local_int4 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int4);
    }
    data_definitions_system_result4 = _global_data;
    plStack_2c0 = _global_data;
    _global_data = (longlong *)*local_pointer7;
    function_(&unknown_data,0,0);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x40000000);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &unknown_data;
    pplStack_328 = (longlong **)&uStack_308;
    function_(&unknown_data,4,_global_data + 0x168c,&plStack_2f8);
    if (*(float *)(_global_data + 0x168c) == 0.0) {
      *(uint32_t *)(_global_data + 0x168c) = 0x3f800000;
    }
    function_();
    _global_data = data_definitions_system_result4;
    local_int4 = _Mtx_unlock(0x180c91970);
    if (local_int4 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int4);
    }
  }
  local_pointer7 = (uint64_t *)*_global_data;
  if (local_pointer7 != (uint64_t *)0x0) {
    if ((void *)*local_pointer7 == &unknown_data) {
      NVGSDK_Poll(local_pointer7[1]);
    }
    else {
      (**(code **)((void *)*local_pointer7 + 8))();
    }
  }
  *_global_data = local_float15;
  data_definitions_local_long9 = (longlong)*(int *)(_global_data + 0x1d40) * 0xd0;
  data_definitions_system_result2 = *(longlong *)(data_definitions_local_long9 + 0xb0 + *(longlong *)(_global_data + 0x1d20));
  local_float17 = (float)data_definitions_system_result2;
  if (data_definitions_system_result2 < 0) {
    local_float17 = local_float17 + 1.8446744e+19;
  }
  if (local_float17 * 8.5830686e-07 < (float)*(int *)(_global_data + 4)) {
    *(float *)(_global_data + 0x10) = local_float15 + *(float *)(_global_data + 0x10);
    local_float15 = (float)fmodf(data_definitions_local_long9,0x3f800000);
    if (0.5 < local_float15) {
      puStack_2e8 = &unknown_data;
      uStack_2d0 = 0;
      puStack_2e0 = (uint64_t *)0x0;
      uStack_2d8 = 0;
      local_pointer7 = (uint64_t *)function_(_global_data,0x1c,0x13);
      *(uint8_t *)local_pointer7 = 0;
      puStack_2e0 = local_pointer7;
      data_definitions_local_uint5 = function_(local_pointer7);
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,data_definitions_local_uint5);
      *local_pointer7 = 0x6f6d654d20555047;
      local_pointer7[1] = 0x6567617375207972;
      local_pointer7[2] = 0x6163697469726320;
      *(uint32_t *)(local_pointer7 + 3) = 0x2e2e6c;
      uStack_2d8 = 0x1b;
      puStack_2e8 = &unknown_data;
      function_(local_pointer7);
    }
  }
  data_definitions_system_result4 = _global_data;
  if ((char)_global_data[0x42] == '\0') {
    (**(code **)(*_global_data + 0xb0))(_global_data,*(uint32_t *)(_global_data + 0x1340));
    (**(code **)(*data_definitions_system_result4 + 0xb8))(data_definitions_system_result4,*(uint32_t *)(_global_data + 0x1500));
    (**(code **)(*data_definitions_system_result4 + 0xc0))(data_definitions_system_result4,*(uint32_t *)(_global_data + 0x13b0));
    (**(code **)(*data_definitions_system_result4 + 200))(data_definitions_system_result4,*(uint32_t *)(_global_data + 0x1490));
    (**(code **)(*data_definitions_system_result4 + 0x50))(data_definitions_system_result4);
  }
  local_pointer7 = _global_data;
  data_definitions_system_result4 = *(longlong **)(_global_data + 0x17ec);
  *_global_data = 0;
  uStack_308._0_4_ = SUB84(data_definitions_system_result4,0);
  *(uint32_t *)(local_pointer7 + 1) = (uint32_t)uStack_308;
  uStack_308._4_4_ = (uint32_t)((ulonglong)data_definitions_system_result4 >> 0x20);
  *(uint32_t *)((longlong)local_pointer7 + 0xc) = uStack_308._4_4_;
  *(uint32_t *)(local_pointer7 + 8) = 0;
  uStack_308 = data_definitions_system_result4;
  function_();
  function_();
  if (((*(int *)(system_context + 0x340) != 0) && (_global_data != (longlong *)0x0)) &&
     (local_char2 = (**(code **)(*_global_data + 0x28))(), local_char2 != '\0')) {
    (**(code **)(_global_data + 0x98))();
  }
  (**(code **)(**(longlong **)(system_context + 0x2b0) + 0x30))(*(longlong **)(system_context + 0x2b0),network_context);
  if (((*(int *)(system_context + 0x340) != 0) && (_global_data != (longlong *)0x0)) &&
     (local_char2 = (**(code **)(*_global_data + 0x28))(), local_char2 != '\0')) {
    (*(code *)_global_data[7])();
  }
  if (((*(int *)(system_context + 0x340) != 0) && (_global_data != (longlong *)0x0)) &&
     (local_char2 = (**(code **)(*_global_data + 0x28))(), local_char2 != '\0')) {
    *(uint64_t *)(*(longlong *)(system_context + 0x3c0) + 0x18) =
         *(uint64_t *)(*(longlong *)(system_context + 0x3c0) + 0x10);
    data_definitions_system_result4 = (longlong *)(_global_data + 0x2030);
    local_uint13 = local_uint11;
    if (*(longlong *)(_global_data + 0x2038) - *data_definitions_system_result4 >> 2 != 0) {
      do {
        uStack_2f0 = *(uint32_t *)(local_uint13 + *data_definitions_system_result4);
        data_definitions_system_result2 = *(longlong *)(system_context + 0x3c0) + 0x10;
        function_(data_definitions_system_result2,&uStack_2f0);
        function_(data_definitions_system_result2,(longlong)&uStack_2f0 + 1);
        function_(data_definitions_system_result2,(longlong)&uStack_2f0 + 2);
        function_(data_definitions_system_result2,(longlong)&uStack_2f0 + 3);
        local_uint10 = (int)local_uint11 + 1;
        local_uint11 = (ulonglong)local_uint10;
        data_definitions_system_result4 = (longlong *)(_global_data + 0x2030);
        local_uint13 = local_uint13 + 4;
      } while ((ulonglong)(longlong)(int)local_uint10 <
               (ulonglong)(*(longlong *)(_global_data + 0x2038) - *data_definitions_system_result4 >> 2));
    }
    (**(code **)(_global_data + 0xa8))();
  }
  (**(code **)(**(longlong **)(system_context + 0x2b0) + 0x38))(*(longlong **)(system_context + 0x2b0),network_context);
  (**(code **)(**(longlong **)(system_context + 0x2b0) + 0x40))(*(longlong **)(system_context + 0x2b0),network_context);
  function_();
  if (global_data != '\0') {
    puStack_2e8 = &unknown_data;
    uStack_2d0 = 0;
    puStack_2e0 = (uint64_t *)0x0;
    uStack_2d8 = 0;
    local_pointer8 = (uint64_t *)function_(_global_data,0x19,0x13);
    *(uint8_t *)local_pointer8 = 0;
    puStack_2e0 = local_pointer8;
    data_definitions_local_uint5 = function_(local_pointer8);
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,data_definitions_local_uint5);
    *local_pointer8 = 0x6d6d6f43204c4752;
    local_pointer8[1] = 0x656e696c20646e61;
    local_pointer8[2] = 0x656c6f736e6f6320;
    *(uint8_t *)(local_pointer8 + 3) = 0;
    data_definitions_system_result2 = _global_data;
    uStack_2d8 = 0x18;
    local_pointer7 = (uint64_t *)*_global_data;
    local_int4 = _Mtx_lock(0x180c91970);
    if (local_int4 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int4);
    }
    data_definitions_system_result4 = _global_data;
    plStack_2c0 = _global_data;
    _global_data = (longlong *)*local_pointer7;
    plStack_2f8 = (longlong *)0x0;
    uStack_308 = (longlong *)0x0;
    pplStack_328 = (longlong **)&cStack_300;
    function_(data_definitions_system_result2,&puStack_2e8,&plStack_2f8,&uStack_308);
    if (*(char *)(data_definitions_system_result2 + 0x60) != '\0') {
      function_(data_definitions_system_result2,&plStack_2f8,&uStack_308,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(uint8_t *)(data_definitions_system_result2 + 0x60) = 0;
    }
    _global_data = data_definitions_system_result4;
    local_int4 = _Mtx_unlock(0x180c91970);
    if (local_int4 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int4);
    }
    puStack_2e8 = &unknown_data;
    function_(local_pointer8);
  }
  function_(uStack_68 ^ (ulonglong)auStack_348);
}
uint64_t * function_(uint64_t *system_context)
{
  *system_context = 0;
  system_context[0x43] = 0;
  system_context[0x44] = 0;
  system_context[0x45] = 0;
  *(uint32_t *)(system_context + 0x46) = 3;
  return system_context;
}
    global_data = 0;
  }
  do {
    local_long3 = local_long5 + 1;
    plocal_char1 = (char *)(local_long5 + 0x180c82871);
    local_long5 = local_long3;
  } while (*plocal_char1 != '\0');
  if (local_long3 != 0) {
    fwrite(&global_data,1,1,data_definitions_local_long6);
    fwrite(&global_data,local_long3,1,data_definitions_local_long6);
    function_(0);
  }
  if (data_definitions_local_long6 != 0) {
    fclose(data_definitions_local_long6);
    lStack_40 = 0;
    LOCK();
    _global_data = _global_data + -1;
    UNLOCK();
    data_definitions_local_long6 = 0;
  }
  puStack_30 = &unknown_data;
  if (puStack_28 == (void *)0x0) {
    puStack_28 = (void *)0x0;
    uStack_18 = 0;
    puStack_30 = &unknown_data;
    if (data_definitions_local_long6 != 0) {
      fclose(data_definitions_local_long6);
      LOCK();
      _global_data = _global_data + -1;
      UNLOCK();
    }
    return;
  }
  function_();
}
  global_data = 1;
  function_(_global_data);
  function_();
  function_(0);
  if (global_data != '\0') {
    LOCK();
    *(uint32_t *)(*(longlong *)(_global_data + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  function_();
  if ((global_data == '\0') &&
     (data_definitions_system_result = *(longlong **)(_global_data + 0x18), data_definitions_system_result != (longlong *)0x0)) {
    local_char3 = (**(code **)*data_definitions_system_result)(data_definitions_system_result);
    if (local_char3 != '\0') {
      (**(code **)(*data_definitions_system_result + 0x28))(data_definitions_system_result);
    }
  }
  function_();
  local_long2 = _global_data;
  if (_global_data != 0) {
    function_(_global_data);
    function_(local_long2);
  }
  _global_data = 0;
  function_(_global_data);
  local_long2 = _global_data;
  if (_global_data != 0) {
    function_(_global_data);
    _Mtx_destroy_in_situ();
    function_(local_long2);
  }
  _global_data = 0;
  return;
}
uint64_t *
function_(uint64_t *system_context,ulonglong network_context,uint64_t thread_context,uint64_t memory_context)
{
  uint64_t local_uint1;
  local_uint1 = 0xfffffffffffffffe;
  *system_context = &unknown_data;
  function_();
  if ((network_context & 1) != 0) {
    free(system_context,0xc0,thread_context,memory_context,local_uint1);
  }
  return system_context;
}
      global_data = '\x01';
      do {
        local_int3 = ReleaseSemaphore(_global_data,1);
      } while (local_int3 == 0);
      puStack_138 = &unknown_data;
      if (puStack_130 != (uint8_t *)0x0) {
        function_();
      }
      puStack_130 = (uint8_t *)0x0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_138 = &unknown_data;
      puStack_110 = &unknown_data;
      if (local_pointer10 != (void *)0x0) {
        function_(local_pointer10);
      }
      puStack_108 = (uint8_t *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &unknown_data;
    }
  }
  puStack_a8 = &unknown_data;
  if (puStack_a0 != (void *)0x0) {
    function_();
  }
  puStack_a0 = (void *)0x0;
  uStack_90 = 0;
  puStack_a8 = &unknown_data;
label_:
  function_(uStack_48 ^ (ulonglong)auStack_168);
}
uint function_(void)
{
  uint in_EAX;
  int local_int1;
  longlong local_long2;
  if (_global_data != 0) {
    local_long2 = _global_data + 0x110;
    local_int1 = _Mtx_lock(local_long2);
    if (local_int1 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int1);
    }
    in_EAX = _Mtx_unlock(local_long2);
    if (in_EAX != 0) {
      in_EAX = __Throw_C_error_std__YAXH_Z(in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}
      global_data = 0;
      _global_data = 0;
      strcpy_s(&global_data,0x80,&global_data,memory_context,local_uint1);
      function_(function_);
      function_(&global_data);
      return &global_data;
    }
  }
  return &global_data;
}
    global_data = '\x01';
    function_(system_context,system_concat_int7_byte1((int7)((ulonglong)data_definitions_local_pointer3 >> 8),1));
  }
  function_(uStack_18 ^ (ulonglong)auStack_298);
}
    global_data = '\0';
    if ((cStack_208 != '\0') && (local_int13 = _Mtx_unlock(uStack_210), local_int13 != 0)) {
      __Throw_C_error_std__YAXH_Z(local_int13);
    }
    if (local_char23 != '\0') goto label_;
    *(uint8_t *)(*(longlong *)(*(longlong *)(_global_data + 8) + 0x140) + 0x208) = 1;
  }
  global_data = '\0';
  local_int13 = _Mtx_unlock(0x180c91148);
  if (local_int13 != 0) {
    __Throw_C_error_std__YAXH_Z(local_int13);
  }
label_:
  if (*(char *)(_global_data + 0xa0) != '\0') {
    data_definitions_local_uint14 = function_(data_definitions_system_result6);
    *(uint64_t *)(_global_data + 0xa8) = data_definitions_local_uint14;
    data_definitions_local_uint14 = function_(data_definitions_system_result6);
    *(uint64_t *)(_global_data + 0xb0) = data_definitions_local_uint14;
  }
  data_definitions_pointer_local_char12 = _global_data;
  if (*_global_data != '\0') {
    local_pointer15 = (uint64_t *)*_global_data;
    local_int13 = _Mtx_lock(0x180c91970);
    if (local_int13 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int13);
    }
    data_definitions_local_uint14 = _global_data;
    pplStack_1b8 = (longlong **)_global_data;
    _global_data = *local_pointer15;
    function_(&unknown_data,0,0);
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    local_uint19 = local_uint20;
    local_uint22 = local_uint20;
    if (*(longlong *)(data_definitions_pointer_local_char12 + 0x10) - *(longlong *)(data_definitions_pointer_local_char12 + 8) >> 3 != 0) {
      do {
        dVar1 = *(double *)(*(longlong *)(local_uint19 + *(longlong *)(data_definitions_pointer_local_char12 + 8)) + 0x200);
        dVar7 = dVar2 + dVar1;
        dVar2 = *(double *)(*(longlong *)(local_uint19 + *(longlong *)(data_definitions_pointer_local_char12 + 8)) + 0x1f8);
        dVar8 = dVar9 + dVar2;
        function_(&unknown_data,local_uint22,dVar1 / dVar2);
        local_uint21 = (int)local_uint22 + 1;
        local_uint19 = local_uint19 + 8;
        local_uint22 = (ulonglong)local_uint21;
        dVar2 = dVar7;
        dVar9 = dVar8;
      } while ((ulonglong)(longlong)(int)local_uint21 <
               (ulonglong)(*(longlong *)(data_definitions_pointer_local_char12 + 0x10) - *(longlong *)(data_definitions_pointer_local_char12 + 8) >> 3));
    }
    function_(&unknown_data,dVar7 / dVar8);
    function_();
    _global_data = data_definitions_local_uint14;
    local_int13 = _Mtx_unlock(0x180c91970);
    if (local_int13 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int13);
    }
  }
  if (*(char *)(_global_data + 0x1626) != '\0') {
    data_definitions_local_uint14 = *(uint64_t *)(_global_data + 0x138);
    *(uint64_t *)(_global_data + 0x138) = 0;
    puStack_b8 = &unknown_data;
    puStack_b0 = auStack_a0;
    auStack_a0[0] = 0;
    uStack_a8 = 0x18;
    local_uint24 = strcpy_s(auStack_a0,0x40,&unknown_data);
    function_(local_uint24,&puStack_b8,data_definitions_local_uint14,1);
    puStack_b8 = &unknown_data;
  }
  if (*(int *)(_global_data + 0x60) == 1) {
    function_();
  }
  else if (*(int *)(_global_data + 0x60) == 2) {
    function_();
  }
  data_definitions_system_result8 = *(longlong *)(_global_data + 0x1870) - *(longlong *)(_global_data + 0x1868) >> 3;
  local_uint19 = local_uint20;
  if (0 < (int)data_definitions_system_result8) {
    do {
      local_pointer15 = (uint64_t *)function_(data_definitions_system_result8,&plStack_1d0,(longlong)(int)local_uint19);
      (**(code **)(*(longlong *)*local_pointer15 + 0x98))();
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      local_uint21 = (int)local_uint19 + 1;
      data_definitions_system_result8 = *(longlong *)(_global_data + 0x1870) - *(longlong *)(_global_data + 0x1868) >> 3;
      local_uint19 = (ulonglong)local_uint21;
    } while ((int)local_uint21 < (int)data_definitions_system_result8);
  }
  function_();
  func_0x00018024f7f0();
  local_uint24 = func_0x0001800e2850(data_definitions_system_result6);
  function_(local_uint24,1,0);
  if (*(char *)(data_definitions_system_result6 + 0xf18) != '\0') {
    function_(data_definitions_system_result6);
    *(uint8_t *)(data_definitions_system_result6 + 0xf18) = 0;
  }
  local_long3 = _global_data;
  data_definitions_system_result8 = _global_data;
  data_definitions_local_uint14 = *(uint64_t *)(_global_data + 0x161c);
  *(uint64_t *)(_global_data + 0x12d0) = *(uint64_t *)(_global_data + 0x1614);
  *(uint64_t *)(data_definitions_system_result8 + 0x12d8) = data_definitions_local_uint14;
  data_definitions_local_uint14 = *(uint64_t *)(local_long3 + 0x162c);
  *(uint64_t *)(data_definitions_system_result8 + 0x12e0) = *(uint64_t *)(local_long3 + 0x1624);
  *(uint64_t *)(data_definitions_system_result8 + 0x12e8) = data_definitions_local_uint14;
  data_definitions_local_uint14 = *(uint64_t *)(local_long3 + 0x163c);
  *(uint64_t *)(data_definitions_system_result8 + 0x12f0) = *(uint64_t *)(local_long3 + 0x1634);
  *(uint64_t *)(data_definitions_system_result8 + 0x12f8) = data_definitions_local_uint14;
  data_definitions_local_uint14 = *(uint64_t *)(local_long3 + 0x164c);
  *(uint64_t *)(data_definitions_system_result8 + 0x1300) = *(uint64_t *)(local_long3 + 0x1644);
  *(uint64_t *)(data_definitions_system_result8 + 0x1308) = data_definitions_local_uint14;
  data_definitions_local_uint14 = *(uint64_t *)(local_long3 + 0x165c);
  *(uint64_t *)(data_definitions_system_result8 + 0x1310) = *(uint64_t *)(local_long3 + 0x1654);
  *(uint64_t *)(data_definitions_system_result8 + 0x1318) = data_definitions_local_uint14;
  data_definitions_local_uint14 = *(uint64_t *)(local_long3 + 0x166c);
  *(uint64_t *)(data_definitions_system_result8 + 0x1320) = *(uint64_t *)(local_long3 + 0x1664);
  *(uint64_t *)(data_definitions_system_result8 + 0x1328) = data_definitions_local_uint14;
  local_uint24 = *(uint32_t *)(local_long3 + 0x1678);
  local_uint10 = *(uint32_t *)(local_long3 + 0x167c);
  local_uint11 = *(uint32_t *)(local_long3 + 0x1680);
  *(uint32_t *)(data_definitions_system_result8 + 0x1330) = *(uint32_t *)(local_long3 + 0x1674);
  *(uint32_t *)(data_definitions_system_result8 + 0x1334) = local_uint24;
  *(uint32_t *)(data_definitions_system_result8 + 0x1338) = local_uint10;
  *(uint32_t *)(data_definitions_system_result8 + 0x133c) = local_uint11;
  local_uint24 = *(uint32_t *)(local_long3 + 0x1688);
  local_uint10 = *(uint32_t *)(local_long3 + 0x168c);
  local_uint11 = *(uint32_t *)(local_long3 + 0x1690);
  *(uint32_t *)(data_definitions_system_result8 + 0x1340) = *(uint32_t *)(local_long3 + 0x1684);
  *(uint32_t *)(data_definitions_system_result8 + 0x1344) = local_uint24;
  *(uint32_t *)(data_definitions_system_result8 + 0x1348) = local_uint10;
  *(uint32_t *)(data_definitions_system_result8 + 0x134c) = local_uint11;
  *(uint16_t *)(local_long3 + 0x1637) = 0;
  *(uint8_t *)(local_long3 + 0x162c) = 0;
  function_();
  function_();
  *(uint *)(_global_data + 0x1590) = _global_data;
  _global_data = _global_data + 1 & 0x80000001;
  if ((int)_global_data < 0) {
    _global_data = (_global_data - 1 | 0xfffffffe) + 1;
  }
  local_pointer15 = (uint64_t *)*_global_data;
  local_int13 = _Mtx_lock(0x180c91970);
  if (local_int13 != 0) {
    __Throw_C_error_std__YAXH_Z(local_int13);
  }
  data_definitions_local_uint14 = _global_data;
  pplStack_220 = (longlong **)_global_data;
  _global_data = *local_pointer15;
  data_definitions_system_result8 = *(longlong *)(_global_data + 0x1a08 + (longlong)(int)_global_data * 8);
  if (data_definitions_system_result8 != 0) {
    local_uint19 = local_uint20;
    local_uint22 = local_uint20;
    if (0 < *(int *)(data_definitions_system_result8 + 0x10)) {
      do {
        function_(*(uint64_t *)(local_uint22 + *(longlong *)(data_definitions_system_result8 + 8)));
        local_long3 = *(longlong *)(*(longlong *)(data_definitions_system_result8 + 8) + local_uint22);
        if (local_long3 != 0) {
          function_(local_long3);
          function_(local_long3);
        }
        *(uint64_t *)(*(longlong *)(data_definitions_system_result8 + 8) + local_uint22) = 0;
        local_uint21 = (int)local_uint19 + 1;
        local_uint19 = (ulonglong)local_uint21;
        local_uint22 = local_uint22 + 8;
      } while ((int)local_uint21 < *(int *)(data_definitions_system_result8 + 0x10));
    }
    if (*(longlong *)(data_definitions_system_result8 + 8) != 0) {
      function_();
    }
    *(uint64_t *)(data_definitions_system_result8 + 8) = 0;
    data_definitions_local_pointer4 = *(uint8_t **)(_global_data + 0x1a08 + (longlong)(int)_global_data * 8);
    if (data_definitions_local_pointer4 != (uint8_t *)0x0) {
      *data_definitions_local_pointer4 = 0;
      *(uint64_t *)(data_definitions_local_pointer4 + 8) = 0;
      *(uint64_t *)(data_definitions_local_pointer4 + 0x14) = 0;
      *(uint32_t *)(data_definitions_local_pointer4 + 0x10) = 0;
      *(uint64_t *)(data_definitions_local_pointer4 + 0x24) = 0;
      *(uint64_t *)(data_definitions_local_pointer4 + 0x1c) = 0;
      function_();
    }
    *(uint64_t *)(_global_data + 0x1a08 + (longlong)(int)_global_data * 8) = 0;
    network_context = uStack_1c8;
  }
  function_();
  _global_data = data_definitions_local_uint14;
  local_int13 = _Mtx_unlock(0x180c91970);
  if (local_int13 != 0) {
    __Throw_C_error_std__YAXH_Z(local_int13);
  }
  if (*(int *)(data_definitions_system_result6 + 8) == 2) {
    *(uint8_t *)(*(longlong *)(data_definitions_system_result6 + 0x10) + 0xc0) = 0;
    while( true ) {
      local_pointer5 = (void *)**(uint64_t **)(data_definitions_system_result6 + 0x10);
      if (local_pointer5 == &unknown_data) {
        local_char23 = *(char *)(*(uint64_t **)(data_definitions_system_result6 + 0x10) + 2) != '\0';
      }
      else {
        local_char23 = (**(code **)(local_pointer5 + 0x68))();
      }
      if (local_char23 != '\0') break;
      local_pointer5 = (void *)**(uint64_t **)(data_definitions_system_result6 + 0x10);
      if (local_pointer5 == &unknown_data) {
        function_(*(uint64_t **)(data_definitions_system_result6 + 0x10) + 4);
      }
      else {
        (**(code **)(local_pointer5 + 0x80))();
      }
    }
    plStack_1c0 = *(longlong **)(data_definitions_system_result6 + 0x10);
    *(uint64_t *)(data_definitions_system_result6 + 0x10) = 0;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(uint32_t *)(data_definitions_system_result6 + 8) = 0;
    if (_global_data != (longlong *)0x0) {
      (**(code **)(*_global_data + 0x10))();
    }
    (**(code **)(_global_data + 0x20))(0);
    _global_data = 0xffffffffffffffff;
  }
  else if (*(int *)(data_definitions_system_result6 + 8) != 0) goto label_;
  *(uint *)(_global_data + 0x1614) =
       (*(int *)(_global_data + 0x1614) + 1U) % *(uint *)(_global_data + 0x1d4c);
label_:
  pplStack_220 = (longlong **)&puStack_198;
  puStack_198 = &unknown_data;
  puStack_190 = auStack_180;
  uStack_188 = 0;
  auStack_180[0] = 0;
  uStack_100 = 0x19;
  uStack_f8 = network_context;
  pplStack_220 = (longlong **)function_(_global_data,0x20,8,3);
  *pplStack_220 = (longlong *)&unknown_data;
  pplStack_220[1] = (longlong *)0x0;
  *(uint32_t *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (longlong *)&unknown_data;
  pplStack_220[3] = (longlong *)0x0;
  pplStack_220[1] = (longlong *)0x0;
  *(uint32_t *)(pplStack_220 + 2) = 0;
  data_definitions_system_result7 = _global_data;
  uStack_e0 = 0;
  local_uint24 = *(uint32_t *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)_global_data[10];
  *(uint32_t *)(data_definitions_system_result7 + 10) = local_uint24;
  data_definitions_system_result6 = (longlong)pplStack_220[1];
  pplStack_220[1] = (longlong *)data_definitions_system_result7[8];
  data_definitions_system_result7[8] = data_definitions_system_result6;
  local_uint24 = *(uint32_t *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)data_definitions_system_result7[9];
  *(uint32_t *)(data_definitions_system_result7 + 9) = local_uint24;
  local_uint24 = *(uint32_t *)((longlong)pplStack_220 + 0x1c);
  *(uint32_t *)((longlong)pplStack_220 + 0x1c) = *(uint32_t *)((longlong)data_definitions_system_result7 + 0x54);
  *(uint32_t *)((longlong)data_definitions_system_result7 + 0x54) = local_uint24;
  puStack_f0 = pplStack_220;
  if (*(code **)(*data_definitions_system_result7 + 8) == (code *)&unknown_data) {
    *(uint32_t *)(data_definitions_system_result7 + 9) = 0;
    if ((uint8_t *)data_definitions_system_result7[8] != (uint8_t *)0x0) {
      *(uint8_t *)data_definitions_system_result7[8] = 0;
    }
    *(uint32_t *)((longlong)data_definitions_system_result7 + 0x54) = 0;
  }
  else {
    (**(code **)(*data_definitions_system_result7 + 8))(data_definitions_system_result7);
  }
  if (0x960 < *(int *)(puStack_f0 + 2)) {
    *(uint32_t *)(puStack_f0 + 2) = 0x960;
    *(uint8_t *)(puStack_f0[1] + 0x960) = 0;
  }
  uStack_e8 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 3;
  function_(_global_data,network_context,&lStack_200);
  data_definitions_system_result6 = lStack_200;
  data_definitions_system_result8 = lStack_1f8;
  local_uint19 = local_uint20;
  if (lStack_1f8 - lStack_200 >> 3 != 0) {
    do {
      local_long3 = _global_data;
      if ((0 < *(int *)(*(longlong *)(local_uint19 + data_definitions_system_result6) + 0x124ec)) &&
         ((*(uint *)(*(longlong *)(local_uint19 + data_definitions_system_result6) + 4) & 0x10000) != 0)) {
        while (data_definitions_pointer_local_char12 = _global_data, data_definitions_system_result6 = lStack_200, data_definitions_system_result8 = lStack_1f8,
              *(int *)(local_long3 + 0x30c) != 0) {
          data_definitions_system_result6 = function_(_global_data);
          if (data_definitions_system_result6 != 0) {
            data_definitions_system_result7 = (longlong *)function_(data_definitions_pointer_local_char12);
            (**(code **)(*data_definitions_system_result7 + 0x20))(data_definitions_system_result7,0);
          }
        }
      }
      local_uint21 = (int)local_uint20 + 1;
      local_uint20 = (ulonglong)local_uint21;
      local_uint19 = local_uint19 + 8;
    } while ((ulonglong)(longlong)(int)local_uint21 < (ulonglong)(data_definitions_system_result8 - data_definitions_system_result6 >> 3));
  }
  data_definitions_local_uint14 = function_(_global_data,0x100,8,3);
  data_definitions_system_result7 = (longlong *)function_(data_definitions_local_uint14,&puStack_198);
  ppuStack_1b0 = (void **)data_definitions_system_result7;
  if (data_definitions_system_result7 != (longlong *)0x0) {
    (**(code **)(*data_definitions_system_result7 + 0x28))(data_definitions_system_result7);
  }
  data_definitions_pointer_local_char12 = _global_data;
  pplStack_220 = &plStack_228;
  plStack_228 = data_definitions_system_result7;
  if (data_definitions_system_result7 != (longlong *)0x0) {
    (**(code **)(*data_definitions_system_result7 + 0x28))(data_definitions_system_result7);
  }
  pplStack_1b8 = &plStack_228;
  local_pointer15 = *(uint64_t **)(*(longlong *)(data_definitions_pointer_local_char12 + 8) + 8);
  plocal_char6 = *(code **)*local_pointer15;
  pplStack_220 = &plStack_218;
  plStack_218 = plStack_228;
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x28))();
  }
  (*plocal_char6)(local_pointer15,&plStack_218);
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  if (data_definitions_system_result7 != (longlong *)0x0) {
    (**(code **)(*data_definitions_system_result7 + 0x38))(data_definitions_system_result7);
  }
  if (lStack_200 == 0) {
    ppuStack_1b0 = &puStack_198;
    puStack_198 = &unknown_data;
    function_(uStack_58 ^ (ulonglong)auStack_248);
  }
  function_();
}
    global_data = '\0';
  }
  _global_data = plocal_long4;
  (**(code **)(_global_data + 0x18))(0);
  if (plocal_long4 != (longlong *)0x0) {
    (**(code **)(*plocal_long4 + 8))(plocal_long4);
  }
  local_pointer2 = *(uint64_t **)(*system_context + 0x18);
  plocal_char3 = *(code **)*local_pointer2;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = *(longlong **)(*system_context + 0x10);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*plocal_char3)(local_pointer2,&plStackX_8);
  return;
}
      global_data = 0;
      _global_data = 6;
      strcpy_s(&global_data,0x40,&global_data,memory_context,local_uint1);
      _global_data = &unknown_data;
      _global_data = &global_data;
      global_data = 0;
      _global_data = 4;
      strcpy_s(&global_data,0x40,&global_data);
      _global_data = &unknown_data;
      _global_data = &global_data;
      global_data = 0;
      _global_data = 6;
      strcpy_s(&global_data,0x40,&global_data);
      _global_data = &unknown_data;
      _global_data = &global_data;
      global_data = 0;
      _global_data = 6;
      strcpy_s(&global_data,0x40,&global_data);
      function_(&unknown_data);
      function_(&global_data);
    }
  }
  return &global_data + (longlong)system_context * 0x58;
}
  global_data = global_data == '\0';
  *system_context = &unknown_data;
  system_context[1] = 0;
  *(uint32_t *)(system_context + 2) = 0;
  *system_context = &unknown_data;
  system_context[3] = 0;
  system_context[1] = 0;
  *(uint32_t *)(system_context + 2) = 0;
  function_(system_context,3,thread_context,memory_context,0,0xfffffffffffffffe);
  *(uint32_t *)system_context[1] = 0x2e6b4f;
  *(uint32_t *)(system_context + 2) = 3;
  return system_context;
}
longlong function_(longlong system_context,longlong network_context,longlong thread_context)
{
  uint64_t *local_pointer1;
  uint64_t *local_pointer2;
  longlong local_long3;
  longlong local_long4;
  local_long4 = network_context - system_context >> 5;
  if (0 < local_long4) {
    local_long3 = thread_context - network_context;
    thread_context = thread_context + local_long4 * -0x20;
    local_pointer2 = (uint64_t *)(network_context + 8);
    do {
      local_pointer1 = local_pointer2 + -4;
      if (*(longlong *)(local_long3 + -0x20 + (longlong)local_pointer2) != 0) {
        function_();
      }
      *(uint64_t *)(local_long3 + 0x10 + (longlong)local_pointer1) = 0;
      local_long4 = local_long4 + -1;
      *(uint64_t *)(local_long3 + (longlong)local_pointer1) = 0;
      *(uint32_t *)(local_long3 + 8 + (longlong)local_pointer1) = 0;
      *(uint32_t *)(local_long3 + 8 + (longlong)local_pointer1) = *(uint32_t *)(local_pointer2 + -3);
      *(uint64_t *)(local_long3 + (longlong)local_pointer1) = *local_pointer1;
      *(uint32_t *)(local_long3 + 0x14 + (longlong)local_pointer1) = *(uint32_t *)((longlong)local_pointer2 + -0xc);
      *(uint32_t *)(local_long3 + 0x10 + (longlong)local_pointer1) = *(uint32_t *)(local_pointer2 + -2);
      *(uint32_t *)(local_pointer2 + -3) = 0;
      *local_pointer1 = 0;
      local_pointer2[-2] = 0;
      local_pointer2 = local_pointer1;
    } while (0 < local_long4);
  }
  return thread_context;
}
longlong function_(uint64_t system_context,longlong network_context,longlong thread_context)
{
  uint64_t *local_pointer1;
  longlong local_long2;
  uint64_t *data_definitions_local_pointer3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  thread_context = thread_context - network_context;
  local_long2 = unaff_RDI * -0x20;
  data_definitions_local_pointer3 = (uint64_t *)(network_context + 8);
  do {
    local_pointer1 = data_definitions_local_pointer3 + -4;
    if (*(longlong *)(thread_context + -0x20 + (longlong)data_definitions_local_pointer3) != 0) {
      function_();
    }
    *(uint64_t *)(thread_context + 0x10 + (longlong)local_pointer1) = 0;
    unaff_RDI = unaff_RDI + -1;
    *(uint64_t *)(thread_context + (longlong)local_pointer1) = 0;
    *(uint32_t *)(thread_context + 8 + (longlong)local_pointer1) = 0;
    *(uint32_t *)(thread_context + 8 + (longlong)local_pointer1) = *(uint32_t *)(data_definitions_local_pointer3 + -3);
    *(uint64_t *)(thread_context + (longlong)local_pointer1) = *local_pointer1;
    *(uint32_t *)(thread_context + 0x14 + (longlong)local_pointer1) = *(uint32_t *)((longlong)data_definitions_local_pointer3 + -0xc);
    *(uint32_t *)(thread_context + 0x10 + (longlong)local_pointer1) = *(uint32_t *)(data_definitions_local_pointer3 + -2);
    *(uint32_t *)(data_definitions_local_pointer3 + -3) = 0;
    *local_pointer1 = 0;
    data_definitions_local_pointer3[-2] = 0;
    data_definitions_local_pointer3 = local_pointer1;
  } while (0 < unaff_RDI);
  return unaff_RBP + local_long2;
}
      global_data = global_data == '\0';
    }
    if (global_data != '\0') {
      (*(code *)(*in_RCX[0xc170])[9])(in_RCX[0xc170],alStackX_10[0] + 0x120);
    }
  }
  data_definitions_system_result0 = alStackX_10[0];
  if ((*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0) &&
     (local_uint12 = local_uint16, data_definitions_local_uint15 = local_uint16, (longlong)in_RCX[0x1d] - (longlong)in_RCX[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(longlong **)(local_uint12 + (longlong)in_RCX[0x1c]) + 0x60))
                (*(longlong **)(local_uint12 + (longlong)in_RCX[0x1c]),in_RCX,data_definitions_system_result0);
      data_definitions_local_uint14 = (int)data_definitions_local_uint15 + 1;
      local_uint12 = local_uint12 + 8;
      data_definitions_local_uint15 = (ulonglong)data_definitions_local_uint14;
    } while ((ulonglong)(longlong)(int)data_definitions_local_uint14 <
             (ulonglong)((longlong)in_RCX[0x1d] - (longlong)in_RCX[0x1c] >> 3));
  }
  ppplStack_b8 = (longlong ***)0x0;
  uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58);
  if (*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0) {
    uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58);
    if ((((*(byte *)(alStackX_10[0] + 0x1bd8) & 0x20) != 0) &&
        (uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58),
        *(char *)(_global_data + 0xf8) != '\0')) &&
       (uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58),
       6 < *(int *)(in_RCX + 0x4f8))) {
      local_uint9 = function_(_global_data,0xe0,8,3);
      ppplStackX_8 = (longlong ***)&uStack_60;
      plStack_68 = alStackX_10;
      puStack_50 = &unknown_data;
      puStack_48 = &unknown_data;
      uStack_70._0_4_ = SUB84(in_RCX,0);
      uStack_70._4_4_ = (uint32_t)((ulonglong)in_RCX >> 0x20);
      uStack_60._0_4_ = (uint32_t)uStack_70;
      uStack_60._4_4_ = uStack_70._4_4_;
      uStack_70 = in_RCX;
      uStack_58 = plStack_68;
      ppplStack_b8 = (longlong ***)function_(local_uint9,&uStack_60);
      if (ppplStack_b8 != (longlong ***)0x0) {
        ppplStack_80 = ppplStack_b8;
        (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
      }
      local_uint9 = _global_data;
      ppplStack_80 = (longlong ***)0x0;
      if (*(int *)(_global_data + 0x380) == 0) {
        pppplStackX_20 = &ppplStackX_8;
        ppplStackX_8 = ppplStack_b8;
        if (ppplStack_b8 != (longlong ***)0x0) {
          (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
        }
        function_(local_uint9,&ppplStackX_8);
      }
      else {
        (*(code *)(*ppplStack_b8)[0xc])(ppplStack_b8);
        if ((*ppplStack_b8)[0xe] == (longlong *)&unknown_data) {
          LOCK();
          *(uint8_t *)(ppplStack_b8 + 2) = 1;
          UNLOCK();
          function_(ppplStack_b8 + 4);
        }
        else {
          (*(code *)(*ppplStack_b8)[0xe])(ppplStack_b8);
        }
      }
    }
    function_(in_RCX,alStackX_10[0]);
    local_uint9 = _global_data;
    if (((in_RCX[0x89] != (longlong ****)0x0) && (*(char *)(_global_data + 0xfa) != '\0')) &&
       ((*(longlong *)(alStackX_10[0] + 0x3580) != 0 &&
        (*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0)))) {
      uStack_70 = &pppplStackX_20;
      pppplStackX_20 = (longlong ****)in_RCX[0x89][0x461];
      if (pppplStackX_20 != (longlong ****)0x0) {
        (*(code *)(*pppplStackX_20)[5])();
      }
      function_(local_uint9,&pppplStackX_20,0);
    }
    if ((*(char *)((longlong)in_RCX + 0x563) != '\0') &&
       (0 < (int)(((longlong)in_RCX[0xb6] - (longlong)in_RCX[0xb5]) / 0xc))) {
      function_(in_RCX + 0x4cf);
      while( true ) {
        ppplocal_long3 = *in_RCX[0x4ce];
        if (ppplocal_long3 == (longlong ***)&unknown_data) {
          local_char6 = *(char *)(in_RCX[0x4ce] + 2) != '\0';
        }
        else {
          local_char6 = (*(code *)ppplocal_long3[0xd])();
        }
        local_uint9 = _global_data;
        if (local_char6 != '\0') break;
        data_definitions_system_result0 = function_(_global_data);
        if (data_definitions_system_result0 != 0) {
          data_definitions_system_result1 = (longlong *)function_(local_uint9);
          (**(code **)(*data_definitions_system_result1 + 0x20))(data_definitions_system_result1,0);
        }
      }
    }
    data_definitions_system_result0 = alStackX_10[0];
    data_definitions_system_result1 = *(longlong **)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x630);
    if (data_definitions_system_result1 != (longlong *)0x0) {
      plStack_78 = data_definitions_system_result1;
      (**(code **)(*data_definitions_system_result1 + 0x28))(data_definitions_system_result1);
    }
    plStack_78 = *(longlong **)(data_definitions_system_result0 + 0x12498);
    *(longlong **)(data_definitions_system_result0 + 0x12498) = data_definitions_system_result1;
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    pppdata_definitions_system_result3 = in_RCX[99];
    if (pppdata_definitions_system_result3 != (longlong ****)0x0) {
      (*(code *)(*pppdata_definitions_system_result3)[0x1f])(pppdata_definitions_system_result3,alStackX_10[0]);
    }
    if (in_RCX[0x22] != (longlong ****)0x0) {
      (*(code *)in_RCX[0x23])(alStackX_10[0]);
    }
    if ((*(char *)(in_RCX + 0xb74) != '\0') &&
       (data_definitions_system_result0 = *(longlong *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x530), data_definitions_system_result0 != 0)) {
      *(uint32_t *)(data_definitions_system_result0 + 0x40) = 0x41200000;
    }
    if (*(int *)(in_RCX + 0xa3a) != 0) {
      local_uint1 = *(uint32_t *)(in_RCX + 0xa3a);
      ppppdata_definitions_system_result7 = in_RCX + (longlong)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(uint32_t *)ppppdata_definitions_system_result7 = 0;
      UNLOCK();
      function_(ppppdata_definitions_system_result7,local_uint1);
      if (*(int *)(in_RCX + 0xa3a) == 0) {
        data_definitions_local_int7 = 0;
      }
      else {
        data_definitions_local_int7 = (*(int *)(in_RCX + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (data_definitions_local_int7 != 0) {
        memcpy(ppppdata_definitions_system_result7[1],in_RCX[0xa3b],0x20000);
      }
      data_definitions_system_result0 = *(longlong *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x118);
      if (data_definitions_system_result0 != 0) {
        *(longlong ******)(data_definitions_system_result0 + 0x98c8) =
             in_RCX + (longlong)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      }
    }
    data_definitions_local_uint14 = *(int *)(in_RCX + 0xa39) + 1U & 0x80000001;
    if ((int)data_definitions_local_uint14 < 0) {
      data_definitions_local_uint14 = (data_definitions_local_uint14 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(in_RCX + 0xa39) = data_definitions_local_uint14;
  }
  while (data_definitions_local_int7 = (int)local_uint16, (ulonglong)(longlong)data_definitions_local_int7 < (ulonglong)*(uint *)(in_RCX + 0xb5b)) {
    pppdata_definitions_system_result3 = in_RCX[(local_uint16 >> 10) + 0xb5c] +
                 (ulonglong)(uint)(data_definitions_local_int7 + (int)(local_uint16 >> 10) * -0x400) * 0x18;
    function_(*pppdata_definitions_system_result3);
    function_(*pppdata_definitions_system_result3,pppdata_definitions_system_result3[1],pppdata_definitions_system_result3 + 2,0,pppdata_definitions_system_result3 + 10);
    local_uint16 = (ulonglong)(data_definitions_local_int7 + 1);
  }
  local_uint12 = (ulonglong)*(uint *)(in_RCX + 0xb5b);
  LOCK();
  *(uint32_t *)(in_RCX + 0xb5b) = 0;
  local_uint9 = _global_data;
  UNLOCK();
  if (ppplStack_b8 != (longlong ***)0x0) {
    ppplStackX_8 = (longlong ***)&ppplStack_b0;
    ppplStack_b0 = ppplStack_b8;
    (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
    function_(local_uint9,&ppplStack_b0,0);
    local_uint12 = (*(code *)(*ppplStack_b8)[7])(ppplStack_b8);
  }
  return local_uint12;
}
uint64_t *
function_(uint64_t *system_context,longlong network_context,uint64_t thread_context,uint64_t memory_context)
{
  int local_int1;
  uint64_t *local_pointer2;
  uint32_t *data_definitions_local_pointer3;
  uint32_t local_uint4;
  *system_context = &unknown_data;
  system_context[1] = 0;
  *(uint32_t *)(system_context + 2) = 0;
  *system_context = &unknown_data;
  system_context[3] = 0;
  system_context[1] = 0;
  *(uint32_t *)(system_context + 2) = 0;
  function_(system_context,9,thread_context,memory_context,0,0xfffffffffffffffe);
  local_pointer2 = (uint64_t *)system_context[1];
  *local_pointer2 = 0x6a624f656e656353;
  *(uint16_t *)(local_pointer2 + 1) = 0x2f;
  *(uint32_t *)(system_context + 2) = 9;
  local_uint4 = 1;
  local_int1 = *(int *)(system_context + 2);
  if (0 < *(int *)(network_context + 0x10)) {
    function_(system_context,local_int1 + *(int *)(network_context + 0x10));
    memcpy((ulonglong)*(uint *)(system_context + 2) + system_context[1],*(uint64_t *)(network_context + 8),
           (longlong)(*(int *)(network_context + 0x10) + 1),memory_context,local_uint4);
  }
  function_(system_context,local_int1 + 6);
  data_definitions_local_pointer3 = (uint32_t *)((ulonglong)*(uint *)(system_context + 2) + system_context[1]);
  *data_definitions_local_pointer3 = 0x6563732f;
  *(uint16_t *)(data_definitions_local_pointer3 + 1) = 0x656e;
  *(uint8_t *)((longlong)data_definitions_local_pointer3 + 6) = 0;
  *(int *)(system_context + 2) = local_int1 + 6;
  function_(system_context,local_int1 + 0xd);
  *(uint64_t *)((ulonglong)*(uint *)(system_context + 2) + system_context[1]) = 0x656e656373782e;
  *(int *)(system_context + 2) = local_int1 + 0xd;
  return system_context;
}
  global_data = 1;
  uStack_160 = 3;
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (uint64_t *******)0x0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  data_definitions_local_long24 = *(longlong *)(*data_definitions_system_result3 + 0x890) - *(longlong *)(*data_definitions_system_result3 + 0x888) >> 5;
  lStack_b0 = data_definitions_local_long24;
  ppppppplStackX_8 = (longlong *******)((ulonglong)ppppppplStackX_8 & 0xffffffff00000000);
  if (0 < (int)data_definitions_local_long24) {
    do {
      if (data_definitions_local_int21 < 0) {
label_:
        data_definitions_system_result9 = function_();
      }
      else {
        data_definitions_system_result9 = *(longlong *)(*data_definitions_system_result3 + 0x888);
        if ((ulonglong)(*(longlong *)(*data_definitions_system_result3 + 0x890) - data_definitions_system_result9 >> 5) <=
            (ulonglong)(longlong)data_definitions_local_int21) goto label_;
        data_definitions_system_result9 = (longlong)data_definitions_local_int21 * 0x20 + data_definitions_system_result9;
      }
      puStack_1a8 = &unknown_data;
      uStack_190 = 0;
      puStack_1a0 = (uint8_t *)0x0;
      uStack_198 = 0;
      function_(&puStack_1a8,*(uint32_t *)(data_definitions_system_result9 + 0x10));
      if (*(int *)(data_definitions_system_result9 + 0x10) != 0) {
        memcpy(puStack_1a0,*(uint64_t *)(data_definitions_system_result9 + 8),*(int *)(data_definitions_system_result9 + 0x10) + 1);
      }
      if (*(longlong *)(data_definitions_system_result9 + 8) != 0) {
        uStack_198 = 0;
        if (puStack_1a0 != (uint8_t *)0x0) {
          *puStack_1a0 = 0;
        }
        uStack_190 = uStack_190 & 0xffffffff;
      }
      local_int17 = uStack_198 + 8;
      function_(&puStack_1a8,local_int17);
      *(uint64_t *)(puStack_1a0 + uStack_198) = 0x6a624f656e656353;
      *(uint8_t *)((longlong)(puStack_1a0 + uStack_198) + 8) = 0;
      uStack_198 = local_int17;
      local_char5 = function_(&puStack_1a8);
      if (local_char5 == '\0') {
        puStack_1a8 = &unknown_data;
        if (puStack_1a0 != (uint8_t *)0x0) {
          function_();
        }
      }
      else {
        pppppuStack_d0 = (uint64_t *****)0x0;
        pppppuStack_c8 = (uint64_t *****)0x0;
        uStack_c0 = 0;
        uStack_b8 = 3;
        function_(&puStack_1a8,&pppppuStack_d0);
        pppplocal_pointer26 = pppppuStack_c8;
        pppplocal_pointer23 = pppppuStack_d0;
        data_definitions_system_result9 = (longlong)pppppuStack_c8 - (longlong)pppppuStack_d0;
        ppppplocal_pointer12 = (uint64_t ******)function_(_global_data,0x20,8,3);
        ppppppuStack_d8 = ppppplocal_pointer12;
        *ppppplocal_pointer12 = (uint64_t *****)0x0;
        ppppplocal_pointer12[1] = (uint64_t *****)0x0;
        ppppplocal_pointer12[2] = (uint64_t *****)0x0;
        *(uint32_t *)(ppppplocal_pointer12 + 3) = 3;
        pppppplocal_pointer6 = &pppppppuStack_188;
        pppppplocal_pointer9 = pppppppuStack_178;
        while (pppppplocal_pointer9 != (uint64_t *******)0x0) {
          if (*(int *)(pppppplocal_pointer9 + 4) < data_definitions_local_int21) {
            pppppplocal_pointer9 = (uint64_t *******)*pppppplocal_pointer9;
          }
          else {
            pppppplocal_pointer6 = pppppplocal_pointer9;
            pppppplocal_pointer9 = (uint64_t *******)pppppplocal_pointer9[1];
          }
        }
        if (((uint64_t ********)pppppplocal_pointer6 == &pppppppuStack_188) ||
           (data_definitions_local_int21 < *(int *)(pppppplocal_pointer6 + 4))) {
          local_pointer7 = (uint64_t *)function_(&pppppppuStack_188,auStack_90);
          pppppplocal_pointer6 = (uint64_t *******)*local_pointer7;
        }
        pppppplocal_pointer6[5] = ppppplocal_pointer12;
        local_int17 = (int)(data_definitions_system_result9 >> 5);
        data_definitions_system_result9 = (longlong)local_int17;
        pppplocal_pointer25 = pppplocal_pointer23;
        if (0 < local_int17) {
          ppppdata_definitions_local_pointer22 = pppplocal_pointer23 + 1;
          do {
            puStack_1c8 = &unknown_data;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            puStack_1c0 = (uint8_t *)0x0;
            uStack_1b8 = 0;
            function_(&puStack_1c8,*(uint32_t *)(ppppdata_definitions_local_pointer22 + 1));
            if (*(int *)(ppppdata_definitions_local_pointer22 + 1) != 0) {
              memcpy(puStack_1c0,*ppppdata_definitions_local_pointer22,*(int *)(ppppdata_definitions_local_pointer22 + 1) + 1);
            }
            if (*ppppdata_definitions_local_pointer22 != (uint64_t ****)0x0) {
              uStack_1b8 = 0;
              if (puStack_1c0 != (uint8_t *)0x0) {
                *puStack_1c0 = 0;
              }
              uStack_1b0._4_4_ = 0;
            }
            local_int17 = uStack_1b8 + 0xd;
            function_(&puStack_1c8,local_int17);
            local_pointer7 = (uint64_t *)(puStack_1c0 + uStack_1b8);
            *local_pointer7 = 0x782e656e6563732f;
            *(uint32_t *)(local_pointer7 + 1) = 0x6e656373;
            *(uint16_t *)((longlong)local_pointer7 + 0xc) = 0x65;
            uStack_1b8 = local_int17;
            local_char5 = function_(&puStack_1c8);
            if (local_char5 == '\0') {
              uStack_1b8 = 0;
              if (puStack_1c0 != (uint8_t *)0x0) {
                *puStack_1c0 = 0;
              }
              local_uint1 = *(uint *)(ppppdata_definitions_local_pointer22 + 1);
              local_uint20 = (ulonglong)local_uint1;
              if (*ppppdata_definitions_local_pointer22 != (uint64_t ****)0x0) {
                function_(&puStack_1c8,local_uint20);
              }
              if (local_uint1 != 0) {
                memcpy(puStack_1c0,*ppppdata_definitions_local_pointer22,local_uint20);
              }
              if (puStack_1c0 != (uint8_t *)0x0) {
                puStack_1c0[local_uint20] = 0;
              }
              uStack_1b0._4_4_ = *(uint *)((longlong)ppppdata_definitions_local_pointer22 + 0x14);
              uStack_1b8 = local_uint1;
              function_(&puStack_1c8,0x12);
              local_pointer14 = (uint32_t *)(puStack_1c0 + uStack_1b8);
              *local_pointer14 = 0x6563732f;
              local_pointer14[1] = 0x782e656e;
              local_pointer14[2] = 0x2e6f6373;
              local_pointer14[3] = 0x65637378;
              *(uint16_t *)(local_pointer14 + 4) = 0x656e;
              *(uint8_t *)((longlong)local_pointer14 + 0x12) = 0;
              uStack_1b8 = 0x12;
              local_char5 = function_(&puStack_1c8);
              if (local_char5 != '\0') goto label_;
              puStack_1c8 = &unknown_data;
              if (puStack_1c0 != (uint8_t *)0x0) {
                function_();
              }
            }
            else {
label_:
              pppppplocal_pointer6 = &pppppppuStack_188;
              pppppplocal_pointer9 = pppppppuStack_178;
              while (pppppplocal_pointer9 != (uint64_t *******)0x0) {
                if (*(int *)(pppppplocal_pointer9 + 4) < data_definitions_local_int21) {
                  pppppplocal_pointer9 = (uint64_t *******)*pppppplocal_pointer9;
                }
                else {
                  pppppplocal_pointer6 = pppppplocal_pointer9;
                  pppppplocal_pointer9 = (uint64_t *******)pppppplocal_pointer9[1];
                }
              }
              if (((uint64_t ********)pppppplocal_pointer6 == &pppppppuStack_188) ||
                 (data_definitions_local_int21 < *(int *)(pppppplocal_pointer6 + 4))) {
                local_pointer7 = (uint64_t *)function_(&pppppppuStack_188,&ppppppuStack_a0);
                pppppplocal_pointer6 = (uint64_t *******)*local_pointer7;
              }
              ppppplocal_pointer12 = pppppplocal_pointer6[5];
              ppppplocal_pointer2 = (uint64_t ******)ppppplocal_pointer12[1];
              if (ppppplocal_pointer2 < ppppplocal_pointer12[2]) {
                ppppplocal_pointer12[1] = ppppplocal_pointer2 + 4;
                *ppppplocal_pointer2 = (uint64_t *****)&unknown_data;
                ppppplocal_pointer2[1] = (uint64_t *****)0x0;
                *(uint32_t *)(ppppplocal_pointer2 + 2) = 0;
                *ppppplocal_pointer2 = (uint64_t *****)&unknown_data;
                ppppplocal_pointer2[3] = (uint64_t *****)0x0;
                ppppplocal_pointer2[1] = (uint64_t *****)0x0;
                *(uint32_t *)(ppppplocal_pointer2 + 2) = 0;
                ppppppuStack_d8 = ppppplocal_pointer2;
                function_(ppppplocal_pointer2,uStack_1b8);
                if (uStack_1b8 != 0) {
                  memcpy(ppppplocal_pointer2[1],puStack_1c0,uStack_1b8 + 1);
                }
                if (puStack_1c0 != (uint8_t *)0x0) {
                  *(uint32_t *)(ppppplocal_pointer2 + 2) = 0;
                  if (ppppplocal_pointer2[1] != (uint64_t *****)0x0) {
                    *(uint8_t *)ppppplocal_pointer2[1] = 0;
                  }
                  *(uint32_t *)((longlong)ppppplocal_pointer2 + 0x1c) = 0;
                }
              }
              else {
                function_(ppppplocal_pointer12,&puStack_1c8);
              }
              puStack_1c8 = &unknown_data;
              if (puStack_1c0 != (uint8_t *)0x0) {
                function_();
              }
            }
            uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
            puStack_1c0 = (uint8_t *)0x0;
            puStack_1c8 = &unknown_data;
            ppppdata_definitions_local_pointer22 = ppppdata_definitions_local_pointer22 + 4;
            data_definitions_system_result9 = data_definitions_system_result9 + -1;
            pppplocal_pointer23 = pppppuStack_d0;
            pppplocal_pointer26 = pppppuStack_c8;
            pppplocal_pointer25 = pppppuStack_d0;
            data_definitions_local_long24 = lStack_b0;
          } while (data_definitions_system_result9 != 0);
        }
        for (; pppplocal_pointer23 != pppplocal_pointer26; pppplocal_pointer23 = pppplocal_pointer23 + 4) {
          (*(code *)**pppplocal_pointer23)(pppplocal_pointer23,0);
        }
        if (pppplocal_pointer25 != (uint64_t *****)0x0) {
          function_(pppplocal_pointer25);
        }
        puStack_1a8 = &unknown_data;
        if (puStack_1a0 != (uint8_t *)0x0) {
          function_();
        }
      }
      uStack_190 = uStack_190 & 0xffffffff00000000;
      puStack_1a0 = (uint8_t *)0x0;
      puStack_1a8 = &unknown_data;
      data_definitions_local_int21 = data_definitions_local_int21 + 1;
      ppppppplStackX_8 = (longlong *******)CONCAT44(ppppppplStackX_8._4_4_,data_definitions_local_int21);
      data_definitions_system_result3 = _global_data;
      thread_context = pppppppuStackX_18;
      data_definitions_system_result9 = lStack_a8;
      memory_context = uStackX_20;
    } while (data_definitions_local_int21 < (int)data_definitions_local_long24);
  }
  uStack_110 = 3;
  pppppppuStack_138 = &pppppppuStack_138;
  pppppppuStack_130 = &pppppppuStack_138;
  pppppppuStack_128 = (uint64_t *******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  pppppplocal_pointer9 = pppppppuStack_180;
  if ((uint64_t ********)pppppppuStack_180 != &pppppppuStack_188) {
    do {
      pppppplocal_pointer16 = (uint64_t *******)pppppplocal_pointer9[5];
      pppppplocal_pointer6 = pppppplocal_pointer9 + 4;
      pppppplocal_pointer8 = &pppppppuStack_138;
      if (pppppppuStack_128 != (uint64_t *******)0x0) {
        pppppplocal_pointer15 = pppppppuStack_128;
        do {
          if (*(int *)(pppppplocal_pointer15 + 4) < *(int *)pppppplocal_pointer6) {
            pppppplocal_pointer15 = (uint64_t *******)*pppppplocal_pointer15;
          }
          else {
            pppppplocal_pointer8 = pppppplocal_pointer15;
            pppppplocal_pointer15 = (uint64_t *******)pppppplocal_pointer15[1];
          }
        } while (pppppplocal_pointer15 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppplocal_pointer8 == &pppppppuStack_138) ||
         (*(int *)pppppplocal_pointer6 < *(int *)(pppppplocal_pointer8 + 4))) {
        local_pointer7 = (uint64_t *)function_(&pppppppuStack_138,&pppppppuStackX_18);
        pppppplocal_pointer8 = (uint64_t *******)*local_pointer7;
      }
      if (pppppplocal_pointer8 + 5 != pppppplocal_pointer16) {
        function_(pppppplocal_pointer8 + 5,*pppppplocal_pointer16,pppppplocal_pointer16[1]);
      }
      pppppplocal_pointer8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (uint64_t *******)0x0) {
        pppppplocal_pointer16 = pppppppuStack_178;
        do {
          if (*(int *)(pppppplocal_pointer16 + 4) < *(int *)pppppplocal_pointer6) {
            pppppplocal_pointer16 = (uint64_t *******)*pppppplocal_pointer16;
          }
          else {
            pppppplocal_pointer8 = pppppplocal_pointer16;
            pppppplocal_pointer16 = (uint64_t *******)pppppplocal_pointer16[1];
          }
        } while (pppppplocal_pointer16 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppplocal_pointer8 == &pppppppuStack_188) ||
         (*(int *)pppppplocal_pointer6 < *(int *)(pppppplocal_pointer8 + 4))) {
        local_pointer7 = (uint64_t *)function_(&pppppppuStack_188,&ppppppplStackX_8);
        pppppplocal_pointer8 = (uint64_t *******)*local_pointer7;
      }
      ppppplocal_pointer12 = pppppplocal_pointer8[5];
      ppppppuStack_a0 = ppppplocal_pointer12;
      if (ppppplocal_pointer12 != (uint64_t ******)0x0) {
        function_(ppppplocal_pointer12);
        function_(ppppplocal_pointer12);
      }
      pppppplocal_pointer8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (uint64_t *******)0x0) {
        pppppplocal_pointer16 = pppppppuStack_178;
        do {
          if (*(int *)(pppppplocal_pointer16 + 4) < *(int *)pppppplocal_pointer6) {
            pppppplocal_pointer16 = (uint64_t *******)*pppppplocal_pointer16;
          }
          else {
            pppppplocal_pointer8 = pppppplocal_pointer16;
            pppppplocal_pointer16 = (uint64_t *******)pppppplocal_pointer16[1];
          }
        } while (pppppplocal_pointer16 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppplocal_pointer8 == &pppppppuStack_188) ||
         (*(int *)pppppplocal_pointer6 < *(int *)(pppppplocal_pointer8 + 4))) {
        local_pointer7 = (uint64_t *)function_(&pppppppuStack_188,&ppppppuStack_d8);
        pppppplocal_pointer8 = (uint64_t *******)*local_pointer7;
      }
      pppppplocal_pointer8[5] = (uint64_t ******)0x0;
      pppppplocal_pointer9 = (uint64_t *******)func_0x00018066bd70(pppppplocal_pointer9);
    } while ((uint64_t ********)pppppplocal_pointer9 != &pppppppuStack_188);
  }
  pppppplocal_pointer9 = pppppppuStack_178;
  if (pppppppuStack_178 != (uint64_t *******)0x0) {
    function_(&pppppppuStack_188,*pppppppuStack_178);
    function_(pppppplocal_pointer9);
  }
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (uint64_t *******)0x0;
  uStack_170 = uStack_170 & 0xffffffffffffff00;
  uStack_168 = 0;
  local_uint10 = function_(_global_data,0x150,8,3);
  pppppppuStackX_18 = (uint64_t *******)&pppppuStack_d0;
  local_uint11 = function_(&pppppuStack_d0,memory_context);
  ppppppplStackX_8 = (longlong *******)&ppppppplStack_108;
  uStack_ef = 0;
  uStack_eb = 0;
  uStack_e9 = 0;
  uStack_e0 = uStack_110;
  ppppppplStack_108 = (longlong *******)&ppppppplStack_108;
  ppppppplStack_100 = (longlong *******)&ppppppplStack_108;
  ppppppplStack_f8 = (longlong *******)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  if (pppppppuStack_128 != (uint64_t *******)0x0) {
    ppppppplStack_f8 =
         (longlong *******)function_(&ppppppplStack_108,pppppppuStack_128,&ppppppplStack_108);
    ppppppplocal_long4 = (longlong *******)*ppppppplStack_f8;
    ppppppplStack_108 = ppppppplStack_f8;
    while (ppppppplocal_long3 = ppppppplocal_long4, ppppppplocal_long3 != (longlong *******)0x0) {
      ppppppplStack_108 = ppppppplocal_long3;
      ppppppplocal_long4 = (longlong *******)*ppppppplocal_long3;
    }
    ppppppplocal_long4 = (longlong *******)ppppppplStack_f8[1];
    ppppppplStack_100 = ppppppplStack_f8;
    while (ppppppplocal_long3 = ppppppplocal_long4, ppppppplocal_long3 != (longlong *******)0x0) {
      ppppppplStack_100 = ppppppplocal_long3;
      ppppppplocal_long4 = (longlong *******)ppppppplocal_long3[1];
    }
    uStack_e8 = uStack_118;
  }
  ppppplocal_pointer12 = (uint64_t ******)
                 function_(local_uint10,&ppppppplStack_108,local_uint11,pppppppuStackX_10,thread_context);
  if (ppppplocal_pointer12 != (uint64_t ******)0x0) {
    pppppppuStackX_18 = (uint64_t *******)ppppplocal_pointer12;
    (*(code *)(*ppppplocal_pointer12)[5])(ppppplocal_pointer12);
  }
  pppppppuStackX_18 = *(uint64_t ********)(data_definitions_system_result9 + 0x40);
  *(uint64_t *******)(data_definitions_system_result9 + 0x40) = ppppplocal_pointer12;
  if (pppppppuStackX_18 != (uint64_t *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[7])();
  }
  local_uint10 = _global_data;
  pppppppuStackX_10 = &pppppppuStackX_18;
  pppppppuStackX_18 = *(uint64_t ********)(data_definitions_system_result9 + 0x40);
  if (pppppppuStackX_18 != (uint64_t *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[5])();
  }
  function_(local_uint10,&pppppppuStackX_18);
  pppppplocal_pointer6 = pppppppuStack_128;
  pppppplocal_pointer9 = pppppppuStack_178;
  pppppppuStackX_18 = pppppppuStack_128;
  if (pppppppuStack_128 == (uint64_t *******)0x0) {
    if (pppppppuStack_178 != (uint64_t *******)0x0) {
      function_(&pppppppuStack_188,*pppppppuStack_178);
      function_(pppppplocal_pointer9);
    }
    puStack_158 = &unknown_data;
    if (puStack_150 == (void *)0x0) {
      return;
    }
    function_();
  }
  function_(&pppppppuStack_138,*pppppppuStack_128);
  pppppppuStackX_10 = pppppplocal_pointer6 + 4;
  ppppppplStackX_8 = pppppplocal_pointer6 + 5;
  function_();
  function_(pppppplocal_pointer6);
}
        global_data = 0;
        return plocal_long7;
      }
      data_definitions_system_result0 = (longlong)local_int11 << 4;
      do {
        if ((int)(local_float12 - 12582912.0) <= (int)pdata_definitions_local_long9) {
          global_data = 0;
          return plocal_long7;
        }
        data_definitions_local_long8 = *(longlong *)(data_definitions_system_result0 + (longlong)_global_data);
        plocal_long7 = (longlong *)(ulonglong)*(uint *)(data_definitions_local_long8 + 0xe0);
        if ((*(uint *)(data_definitions_local_long8 + 0xe0) == 2) &&
           (plocal_long7 = (longlong *)(ulonglong)*(uint *)(data_definitions_local_long8 + 0xd8), *(uint *)(data_definitions_local_long8 + 0xd8) == 0))
        {
          LOCK();
          local_uint1 = *(uint *)(data_definitions_local_long8 + 0xd8);
          if (local_uint1 == 0) {
            *(uint *)(data_definitions_local_long8 + 0xd8) = 0xffffffff;
          }
          else {
            plocal_long7 = (longlong *)(ulonglong)local_uint1;
          }
          UNLOCK();
          if (local_uint1 == 0) {
            *(uint8_t *)(data_definitions_local_long8 + 0xdc) = 0;
            function_(data_definitions_local_long8 + 0xe8);
            data_definitions_local_uint5 = *(uint64_t *)(data_definitions_local_long8 + 0x88);
            local_int4 = *(int *)(data_definitions_local_long8 + 0x80);
            *(uint64_t *)(data_definitions_local_long8 + 0x88) = 0;
            *(uint32_t *)(data_definitions_local_long8 + 0x80) = 0;
            *(uint32_t *)(data_definitions_local_long8 + 0xe0) = 0;
            *(uint32_t *)(data_definitions_local_long8 + 0xd8) = 0;
            function_(data_definitions_local_uint5);
            LOCK();
            local_uint1 = _global_data - local_int4;
            plocal_long7 = (longlong *)(ulonglong)_global_data;
            UNLOCK();
            _global_data = local_uint1;
            if (0 < local_int4) {
              pdata_definitions_local_long9 = (longlong *)(ulonglong)(uint)((int)pdata_definitions_local_long9 + local_int4);
              plocal_long7 = _global_data + (longlong)local_int11 * 2 + 2;
              if (plocal_long7 < _global_data) {
                memmove(_global_data + (longlong)local_int11 * 2,plocal_long7,
                        (longlong)_global_data - (longlong)plocal_long7);
              }
              plocal_long7 = _global_data + -2;
              _global_data = plocal_long7;
            }
          }
        }
        data_definitions_system_result0 = data_definitions_system_result0 + -0x10;
        local_int11 = local_int11 + -1;
      } while (-1 < local_int11);
      global_data = 0;
      return plocal_long7;
    }
    local_uint2 = *(uint32_t *)(data_definitions_system_result0 + 0x84);
    data_definitions_local_uint3 = *(uint32_t *)(data_definitions_system_result0 + 0x80);
    if (plocal_long7 < _global_data) {
      _global_data = plocal_long7 + 2;
      *plocal_long7 = data_definitions_system_result0;
      plocal_long7[1] = CONCAT44(data_definitions_local_uint3,local_uint2);
    }
    else {
      data_definitions_local_long8 = (longlong)plocal_long7 - (longlong)_global_data >> 4;
      if (data_definitions_local_long8 == 0) {
        data_definitions_local_long8 = 1;
label_:
        plocal_long7 = (longlong *)function_(_global_data,data_definitions_local_long8 << 4,global_data);
      }
      else {
        data_definitions_local_long8 = data_definitions_local_long8 * 2;
        plocal_long7 = pdata_definitions_local_long9;
        if (data_definitions_local_long8 != 0) goto label_;
      }
      if (_global_data != _global_data) {
        memmove(plocal_long7,_global_data,(longlong)_global_data - (longlong)_global_data);
      }
      *plocal_long7 = data_definitions_system_result0;
      plocal_long7[1] = CONCAT44(data_definitions_local_uint3,local_uint2);
      if (_global_data != (longlong *)0x0) {
        function_();
      }
      _global_data = plocal_long7 + data_definitions_local_long8 * 2;
      _global_data = plocal_long7;
      _global_data = plocal_long7 + 2;
    }
    local_char6 = function_(0x180c919f0,&lStackX_20);
    plocal_long7 = _global_data;
    data_definitions_system_result0 = lStackX_20;
  } while( true );
}
      global_data = local_uint6;
      return;
    }
    local_long4 = *(longlong *)(local_long5 + _global_data);
    if ((*(int *)(local_long4 + 0xe0) == 2) && (*(int *)(local_long4 + 0xd8) == 0)) {
      LOCK();
      local_bool8 = *(int *)(local_long4 + 0xd8) == 0;
      if (local_bool8) {
        *(int *)(local_long4 + 0xd8) = -1;
      }
      UNLOCK();
      if (local_bool8) {
        *(uint8_t *)(local_long4 + 0xdc) = local_uint6;
        function_(local_long4 + 0xe8);
        data_definitions_local_uint3 = *(uint64_t *)(local_long4 + 0x88);
        data_definitions_local_int2 = *(int *)(local_long4 + 0x80);
        *(uint64_t *)(local_long4 + 0x88) = unaff_R12;
        local_uint7 = (uint32_t)unaff_R12;
        *(uint32_t *)(local_long4 + 0x80) = local_uint7;
        *(uint32_t *)(local_long4 + 0xe0) = local_uint7;
        *(uint32_t *)(local_long4 + 0xd8) = local_uint7;
        function_(data_definitions_local_uint3);
        LOCK();
        _global_data = _global_data - data_definitions_local_int2;
        UNLOCK();
        if (0 < data_definitions_local_int2) {
          unaff_EBP = unaff_EBP + data_definitions_local_int2;
          local_long4 = (longlong)unaff_EDI * 0x10 + _global_data;
          local_uint1 = local_long4 + 0x10;
          if (local_uint1 < _global_data) {
            memmove(local_long4,local_uint1,_global_data - local_uint1);
          }
          _global_data = _global_data - 0x10;
        }
      }
    }
    local_long5 = local_long5 + -0x10;
    unaff_EDI = unaff_EDI + -1;
  } while (-1 < unaff_EDI);
  global_data = local_uint6;
  return;
}
  global_data = unaff_BPL;
  return;
}
        global_data = '\x01';
        iStack_2c8 = 0x786;
        function_(auStack_258,&unknown_data,&unknown_data,&unknown_data);
        OutputDebugStringA(auStack_258);
      }
      data_definitions_local_float14 = (float)modff((float)(int)(*(ushort *)((longlong)system_context + 0x5e) - 1) *
                            uStackX_18._4_4_,&uStack_2b0);
      local_float15 = (float)modff();
      fStack_298 = (fStack_28c - fStack_298) * local_float15 + fStack_298;
      fStack_294 = (fStack_288 - fStack_294) * local_float15 + fStack_294;
      fStack_290 = (fStack_284 - fStack_290) * local_float15 + fStack_290;
      local_float16 = (((fStack_270 - fStack_27c) * local_float15 + fStack_27c) - fStack_294) * data_definitions_local_float14 +
               fStack_294;
      local_float17 = (((fStack_26c - fStack_278) * local_float15 + fStack_278) - fStack_290) * data_definitions_local_float14 +
               fStack_290;
      data_definitions_local_float14 = (((fStack_274 - fStack_280) * local_float15 + fStack_280) - fStack_298) * data_definitions_local_float14 +
               fStack_298;
    }
    else {
      local_float16 = (float)uStack_2b0;
      local_float17 = (float)uStack_2b0;
      data_definitions_local_float14 = (float)uStack_2b0;
    }
    *network_context = local_float17;
    network_context[1] = local_float16;
    network_context[2] = data_definitions_local_float14;
    network_context[3] = 1.0;
    break;
  case 0x16:
    iStack_2c8 = memory_context;
    function_(data_definitions_system_result0,&uStack_2b0,system_context,&uStackX_18);
code_r0x0001802a14f5:
    *network_context = (float)uStack_2b0._2_1_ * 0.003921569;
    data_definitions_local_bool1 = (byte)uStack_2b0;
code_r0x0001802a151f:
    local_float16 = 0.003921569;
    data_definitions_local_uint5 = (ushort)uStack_2b0._1_1_;
    data_definitions_local_uint3 = (ushort)data_definitions_local_bool1;
    local_uint4 = (ushort)uStack_2b0._3_1_;
code_r0x0001802a1528:
    network_context[1] = (float)data_definitions_local_uint5 * local_float16;
    network_context[2] = (float)data_definitions_local_uint3 * local_float16;
    network_context[3] = (float)local_uint4 * local_float16;
    break;
  case 0x1e:
    iStack_2c8 = memory_context;
    local_pointer8 = (uint16_t *)function_(data_definitions_system_result0,&uStack_2b0,system_context,&uStackX_18);
    local_float16 = (float)func_0x0001800adf40(local_pointer8[2]);
    local_float17 = (float)func_0x0001800adf40(local_pointer8[1]);
    data_definitions_local_float14 = (float)func_0x0001800adf40(*local_pointer8);
    local_float15 = (float)func_0x0001800adf40(local_pointer8[3]);
    network_context[3] = local_float15;
    *network_context = data_definitions_local_float14;
    network_context[1] = local_float17;
    network_context[2] = local_float16;
    break;
  case 0x20:
    iStack_2c8 = memory_context;
    function_(data_definitions_system_result0,&uStack_2b0,system_context,&uStackX_18);
    *network_context = (float)uStack_2b0;
    network_context[2] = (float)uStack_2a8;
code_r0x0001802a1ad1:
    network_context[3] = 1.0;
    local_float16 = uStack_2b0._4_4_;
code_r0x0001802a1ade:
    network_context[1] = local_float16;
    break;
  case 0x21:
    if (memory_context == 0) {
      local_int11 = *(ushort *)((longlong)system_context + 0x5e) - 1;
      local_int13 = *(ushort *)((longlong)system_context + 0x5c) - 1;
      uStackX_18._0_4_ = (float)thread_context;
      if ((int)((float)local_int13 * (float)uStackX_18) <= local_int13) {
        local_int13 = (int)((float)local_int13 * (float)uStackX_18);
      }
      uStackX_18._4_4_ = (float)((ulonglong)thread_context >> 0x20);
      if ((int)((float)local_int11 * uStackX_18._4_4_) <= local_int11) {
        local_int11 = (int)((float)local_int11 * uStackX_18._4_4_);
      }
      data_definitions_local_int7 = 0;
      if (-1 < local_int11) {
        data_definitions_local_int7 = local_int11;
      }
      local_int11 = 0;
      if (-1 < local_int13) {
        local_int11 = local_int13;
      }
      local_pointer9 = (uint64_t *)
               ((longlong)(int)(data_definitions_local_int7 * (uint)*(ushort *)((longlong)system_context + 0x5c) + local_int11) * 0x10
               + *system_context);
      local_uint2 = local_pointer9[1];
      *(uint64_t *)network_context = *local_pointer9;
      *(uint64_t *)(network_context + 2) = local_uint2;
    }
    else if (memory_context == 1) {
      function_(system_context,&uStackX_18,thread_context,&fStack_298);
      local_float16 = (float)modff((float)(int)(*(ushort *)((longlong)system_context + 0x5e) - 1) *
                            uStackX_18._4_4_,&uStack_2b0);
      local_float17 = (float)modff();
      fStack_298 = (fStack_288 - fStack_298) * local_float17 + fStack_298;
      fStack_294 = (fStack_284 - fStack_294) * local_float17 + fStack_294;
      fStack_290 = (fStack_280 - fStack_290) * local_float17 + fStack_290;
      *network_context = (((fStack_268 - fStack_278) * local_float17 + fStack_278) - fStack_298) * local_float16 +
                 fStack_298;
      network_context[1] = (((fStack_264 - fStack_274) * local_float17 + fStack_274) - fStack_294) * local_float16 +
                   fStack_294;
      network_context[2] = (((fStack_260 - fStack_270) * local_float17 + fStack_270) - fStack_290) * local_float16 +
                   fStack_290;
      network_context[3] = 3.4028235e+38;
    }
    else {
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      network_context[0] = 0.0;
      network_context[1] = 0.0;
      network_context[2] = 0.0;
      network_context[3] = 0.0;
    }
    break;
  case 0x27:
    iStack_2c8 = memory_context;
    function_(data_definitions_system_result0,&uStack_2b0,system_context,&uStackX_18);
    local_float16 = 1.5259022e-05;
    *network_context = (float)(ushort)uStack_2b0 * 1.5259022e-05;
    local_uint6 = (uint)uStack_2b0._2_2_;
    data_definitions_local_uint5 = uStack_2b0._4_2_;
    goto code_r0x0001802a16a1;
  case 0x28:
    iStack_2c8 = memory_context;
    function_(data_definitions_system_result0,&uStack_2b0,system_context,&uStackX_18);
    local_float16 = 0.003921569;
    *network_context = (float)(byte)uStack_2b0 * 0.003921569;
    local_uint6 = (uint)uStack_2b0._1_1_;
    data_definitions_local_uint5 = (ushort)uStack_2b0._2_1_;
    goto code_r0x0001802a16a1;
  case 0x29:
    iStack_2c8 = memory_context;
    function_(data_definitions_system_result0,&uStack_2b0,system_context,&uStackX_18);
code_r0x0001802a1677:
    local_float16 = 0.003921569;
    *network_context = (float)uStack_2b0._2_1_ * 0.003921569;
    local_uint6 = (uint)((ulonglong)uStack_2b0 >> 8) & 0xff;
    data_definitions_local_uint5 = (ushort)(byte)uStack_2b0;
code_r0x0001802a16a1:
    network_context[3] = 1.0;
    network_context[2] = (float)data_definitions_local_uint5 * local_float16;
    network_context[1] = (float)local_uint6 * local_float16;
    break;
  case 0x2b:
    iStack_2c8 = memory_context;
    function_(data_definitions_system_result0,abStack_2b8,system_context,&uStackX_18);
    network_context[1] = 0.0;
    network_context[2] = 0.0;
    network_context[3] = 0.0;
    *network_context = (float)abStack_2b8[0];
    break;
  case 0x2c:
    data_definitions_local_uint5 = function_(data_definitions_system_result0,system_context,&uStackX_18);
    local_float16 = (float)data_definitions_local_uint5;
code_r0x0001802a1829:
    *network_context = local_float16;
    network_context[1] = 1.0;
    network_context[2] = 1.0;
    network_context[3] = 1.0;
  }
function_:
  function_(uStack_58 ^ (ulonglong)auStack_2e8);
}
    global_data = '\x01';
    function_(unaff_RBP + -0x70,&unknown_data,&unknown_data,&unknown_data,0x786);
    OutputDebugStringA(unaff_RBP + -0x70);
  }
  local_uint1 = *(ushort *)(unaff_RDI + 0x5c);
  local_float5 = *(float *)(unaff_RBP + 0x200);
  local_float4 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + 0x204),&stack0x00000038);
  local_float5 = (float)modff((float)(int)(local_uint1 - 1) * local_float5,&stack0x00000038);
  local_float6 = (fStack000000000000005c - fStack0000000000000050) * local_float5 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * local_float5 + fStack0000000000000054;
  local_float7 = (fStack0000000000000064 - fStack0000000000000058) * local_float5 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * local_float5 + fStack0000000000000070)
               - local_float7) * local_float4 + local_float7;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * local_float5 +
                  fStack000000000000006c) - fStack0000000000000054) * local_float4 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * local_float5 +
                  fStack0000000000000068) - local_float6) * local_float4 + local_float6;
  unaff_RBX[3] = 1.0;
  function_(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}
  global_data = 1;
  function_(unaff_RBP + -0x70,&unknown_data,&unknown_data,&unknown_data,0x786);
  OutputDebugStringA(unaff_RBP + -0x70);
  local_uint1 = *(ushort *)(unaff_RDI + 0x5c);
  local_float3 = *(float *)(unaff_RBP + 0x200);
  local_float2 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + 0x204),&stack0x00000038);
  local_float3 = (float)modff((float)(int)(local_uint1 - 1) * local_float3,&stack0x00000038);
  local_float4 = (fStack000000000000005c - fStack0000000000000050) * local_float3 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * local_float3 + fStack0000000000000054;
  local_float5 = (fStack0000000000000064 - fStack0000000000000058) * local_float3 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * local_float3 + fStack0000000000000070)
               - local_float5) * local_float2 + local_float5;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * local_float3 +
                  fStack000000000000006c) - fStack0000000000000054) * local_float2 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * local_float3 +
                  fStack0000000000000068) - local_float4) * local_float2 + local_float4;
  unaff_RBX[3] = 1.0;
  function_(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}
        global_data = '\x01';
        lStack_278 = CONCAT44(lStack_278._4_4_,0x4ea);
        function_(auStack_238,&unknown_data,&unknown_data,&unknown_data);
        OutputDebugStringA(auStack_238);
      }
      goto label_;
    }
    data_definitions_local_uint5 = function_(&puStack_268,system_context);
    function_(data_definitions_local_uint5,1);
    puStack_268 = &unknown_data;
    if (puStack_260 != (void *)0x0) {
      function_();
    }
    puStack_260 = (void *)0x0;
    uStack_250 = 0;
    puStack_268 = &unknown_data;
    data_definitions_local_long6 = *network_context;
    local_uint1 = *(uint16_t *)((longlong)network_context + 0x5e);
    local_uint2 = *(uint16_t *)((longlong)network_context + 0x5c);
    local_pointer7 = &global_data;
    if (*(void **)(system_context + 8) != (void *)0x0) {
      local_pointer7 = *(void **)(system_context + 8);
    }
    local_int4 = fopen_s(&puStack_268,local_pointer7,&unknown_data);
    puStack_260 = puStack_268;
    if (local_int4 != 0) {
      puStack_260 = (void *)0x0;
    }
    puStack_268 = &unknown_data;
    if (puStack_260 == (void *)0x0) goto label_;
    local_pointer7 = puStack_260;
    if (data_definitions_local_long6 != 0) {
      lStack_278 = data_definitions_local_long6;
      function_(&puStack_268,local_uint2,local_uint1,local_int3);
      local_pointer7 = puStack_260;
    }
  }
  fclose(local_pointer7);
label_:
  function_(uStack_38 ^ (ulonglong)auStack_298);
}
        global_data = '\x01';
        puStack_2d8 = (void *)CONCAT44(puStack_2d8._4_4_,0xc88);
        function_(auStack_228,&unknown_data,&unknown_data,&unknown_data);
        OutputDebugStringA(auStack_228);
      }
      local_pointer7 = &global_data;
      if (*(void **)(system_context + 8) != (void *)0x0) {
        local_pointer7 = *(void **)(system_context + 8);
      }
      function_(_global_data,&unknown_data,local_pointer7);
    }
  }
  local_char3 = function_(thread_context);
  if (local_char3 == '\0') {
    local_pointer7 = &global_data;
    if (*(void **)(system_context + 8) != (void *)0x0) {
      local_pointer7 = *(void **)(system_context + 8);
    }
    function_(&unknown_data,local_pointer7);
  }
  else {
    *(uint64_t *)(thread_context + 0x14) = 0;
    *(uint64_t *)(thread_context + 0x1c) = 0;
    *(uint64_t *)(thread_context + 0x24) = 0;
    *(uint64_t *)(thread_context + 0x2c) = 0;
    *(uint64_t *)(thread_context + 0x34) = 0;
    *(uint64_t *)(thread_context + 0x3c) = 0;
    *(uint64_t *)(thread_context + 0x44) = 0;
    *(uint64_t *)(thread_context + 0x4c) = 0;
    local_uint4 = func_0x000180220c90(*(uint32_t *)(thread_context + 0x54));
    strcpy_s(thread_context + 0x14,0x40,local_uint4);
  }
label_:
  function_(auStack_260);
  function_(uStack_28 ^ (ulonglong)auStack_2f8);
}
      global_data = '\x01';
      uStack_228 = 0xac7;
      function_(auStack_218,&unknown_data,&unknown_data,&unknown_data);
      OutputDebugStringA(auStack_218);
    }
  }
  else {
    function_(&unknown_data);
  }
  function_(uStack_18 ^ (ulonglong)auStack_248);
}
bool function_(uint64_t *system_context)
{
  int local_int1;
  uint64_t local_uint2;
  uint64_t data_definitions_local_uint3;
  local_int1 = *(int *)((longlong)system_context + 0x54);
  if (local_int1 == 0x27) {
    if (system_context[1] == 0) {
      local_uint2 = 0;
      data_definitions_local_uint3 = 0;
    }
    else {
      local_uint2 = function_(_global_data,system_context[1],3);
      data_definitions_local_uint3 = system_context[1];
    }
    memcpy(local_uint2,*system_context,data_definitions_local_uint3);
  }
  if (local_int1 != 0x28) {
    if (local_int1 == 0x29) {
      if (system_context[1] == 0) {
        local_uint2 = 0;
        data_definitions_local_uint3 = 0;
      }
      else {
        local_uint2 = function_(_global_data,system_context[1],3);
        data_definitions_local_uint3 = system_context[1];
      }
      memcpy(local_uint2,*system_context,data_definitions_local_uint3);
    }
    local_int1 = func_0x0001800ab000(*(uint32_t *)((longlong)system_context + 0x54));
    return local_int1 != 0;
  }
  if (system_context[1] == 0) {
    local_uint2 = 0;
    data_definitions_local_uint3 = 0;
  }
  else {
    local_uint2 = function_(_global_data,system_context[1],3);
    data_definitions_local_uint3 = system_context[1];
  }
  memcpy(local_uint2,*system_context,data_definitions_local_uint3);
}
uint64_t function_(uint64_t *system_context)
{
  uint8_t alocal_uint1 [16];
  int data_definitions_local_int2;
  uint data_definitions_local_uint3;
  float *plocal_float4;
  ulonglong data_definitions_local_uint5;
  ushort *local_pointer6;
  float *plocal_float7;
  ulonglong data_definitions_local_uint8;
  byte *plocal_bool9;
  float local_float10;
  float local_float11;
  uint8_t alocal_uint12 [16];
  float local_float13;
  float data_definitions_local_float14;
  float local_float15;
  switch(*(int *)((longlong)system_context + 0x54) + -1) {
  case 0:
  case 1:
    plocal_bool9 = (byte *)*system_context;
    plocal_float4 = (float *)((ulonglong)system_context[1] >> 2);
    if (0 < (int)plocal_float4) {
      data_definitions_local_uint8 = (ulonglong)plocal_float4 & 0xffffffff;
      do {
        data_definitions_local_float14 = (float)plocal_bool9[1] * 0.007843138 - 1.0;
        local_float13 = (float)*plocal_bool9 * 0.007843138 - 1.0;
        local_float15 = (float)plocal_bool9[2] * 0.007843138 - 1.0;
        local_float10 = local_float13 * local_float13 + data_definitions_local_float14 * data_definitions_local_float14 + local_float15 * local_float15;
        alocal_uint12 = rsqrtss(ZEXT416((uint)local_float10),ZEXT416((uint)local_float10));
        local_float11 = alocal_uint12._0_4_;
        local_float10 = local_float11 * 0.5 * (3.0 - local_float10 * local_float11 * local_float11);
        *plocal_bool9 = (byte)(int)((local_float10 * local_float13 + 1.0) * 127.5);
        plocal_bool9[1] = (byte)(int)((local_float10 * data_definitions_local_float14 + 1.0) * 127.5);
        data_definitions_local_int2 = (int)((local_float10 * local_float15 + 1.0) * 127.5);
        plocal_bool9[2] = (byte)data_definitions_local_int2;
        plocal_bool9 = plocal_bool9 + 4;
        data_definitions_local_uint8 = data_definitions_local_uint8 - 1;
      } while (data_definitions_local_uint8 != 0);
      return system_concat_int7_byte1((uint7)(uint3)((uint)data_definitions_local_int2 >> 8),1);
    }
    break;
  default:
    return 0;
  case 8:
    local_pointer6 = (ushort *)*system_context;
    plocal_float4 = (float *)((ulonglong)system_context[1] >> 3);
    if (0 < (int)plocal_float4) {
      data_definitions_local_uint8 = (ulonglong)plocal_float4 & 0xffffffff;
      do {
        data_definitions_local_float14 = (float)local_pointer6[1] * 3.0518044e-05 - 1.0;
        local_float13 = (float)*local_pointer6 * 3.0518044e-05 - 1.0;
        local_float15 = (float)local_pointer6[2] * 3.0518044e-05 - 1.0;
        local_float10 = local_float13 * local_float13 + data_definitions_local_float14 * data_definitions_local_float14 + local_float15 * local_float15;
        alocal_uint12 = rsqrtss(ZEXT416((uint)local_float10),ZEXT416((uint)local_float10));
        local_float11 = alocal_uint12._0_4_;
        local_float10 = local_float11 * 0.5 * (3.0 - local_float10 * local_float11 * local_float11);
        *local_pointer6 = (ushort)(int)((local_float10 * local_float13 + 1.0) * 32767.5);
        local_pointer6[1] = (ushort)(int)((local_float10 * data_definitions_local_float14 + 1.0) * 32767.5);
        data_definitions_local_int2 = (int)((local_float10 * local_float15 + 1.0) * 32767.5);
        local_pointer6[2] = (ushort)data_definitions_local_int2;
        local_pointer6 = local_pointer6 + 4;
        data_definitions_local_uint8 = data_definitions_local_uint8 - 1;
      } while (data_definitions_local_uint8 != 0);
      return system_concat_int7_byte1((uint7)(uint3)((uint)data_definitions_local_int2 >> 8),1);
    }
    break;
  case 0x1f:
    plocal_float4 = (float *)*system_context;
    if (0 < (int)((ulonglong)system_context[1] / 0xc)) {
      data_definitions_local_uint8 = (ulonglong)system_context[1] / 0xc & 0xffffffff;
      do {
        local_float13 = (*plocal_float4 + *plocal_float4) - 1.0;
        data_definitions_local_float14 = (plocal_float4[1] + plocal_float4[1]) - 1.0;
        local_float15 = (plocal_float4[2] + plocal_float4[2]) - 1.0;
        local_float10 = local_float13 * local_float13 + data_definitions_local_float14 * data_definitions_local_float14 + local_float15 * local_float15;
        alocal_uint12 = rsqrtss(ZEXT416((uint)local_float10),ZEXT416((uint)local_float10));
        local_float11 = alocal_uint12._0_4_;
        local_float10 = local_float11 * 0.5 * (3.0 - local_float10 * local_float11 * local_float11);
        *plocal_float4 = (local_float10 * local_float13 + 1.0) * 0.5;
        plocal_float4[1] = (local_float10 * data_definitions_local_float14 + 1.0) * 0.5;
        plocal_float4[2] = (local_float10 * local_float15 + 1.0) * 0.5;
        plocal_float4 = plocal_float4 + 3;
        data_definitions_local_uint8 = data_definitions_local_uint8 - 1;
      } while (data_definitions_local_uint8 != 0);
      return system_concat_int7_byte1((int7)((ulonglong)plocal_float4 >> 8),1);
    }
    break;
  case 0x20:
    data_definitions_local_uint8 = system_context[1];
    plocal_float7 = (float *)*system_context;
    plocal_float4 = (float *)(data_definitions_local_uint8 >> 4);
    if (0 < (int)plocal_float4) {
      data_definitions_local_uint5 = (ulonglong)plocal_float4 & 0xffffffff;
      do {
        local_float13 = (*plocal_float7 + *plocal_float7) - 1.0;
        data_definitions_local_float14 = (plocal_float7[1] + plocal_float7[1]) - 1.0;
        local_float15 = (plocal_float7[2] + plocal_float7[2]) - 1.0;
        local_float10 = data_definitions_local_float14 * data_definitions_local_float14 + local_float13 * local_float13 + local_float15 * local_float15;
        alocal_uint12 = rsqrtss(ZEXT416((uint)local_float10),ZEXT416((uint)local_float10));
        local_float11 = alocal_uint12._0_4_;
        local_float10 = local_float11 * 0.5 * (3.0 - local_float10 * local_float11 * local_float11);
        *plocal_float7 = (local_float10 * local_float13 + 1.0) * 0.5;
        plocal_float7[2] = (local_float15 * local_float10 + 1.0) * 0.5;
        plocal_float7[1] = (local_float10 * data_definitions_local_float14 + 1.0) * 0.5;
        plocal_float7 = plocal_float7 + 4;
        data_definitions_local_uint5 = data_definitions_local_uint5 - 1;
      } while (data_definitions_local_uint5 != 0);
      return system_concat_int7_byte1((uint7)(data_definitions_local_uint8 >> 0xc),1);
    }
    break;
  case 0x26:
    local_pointer6 = (ushort *)*system_context;
    alocal_uint1._8_8_ = 0;
    alocal_uint1._0_8_ = system_context[1];
    plocal_float4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * alocal_uint1,0);
    data_definitions_local_uint8 = (ulonglong)system_context[1] / 6;
    if (0 < (int)data_definitions_local_uint8) {
      data_definitions_local_uint8 = data_definitions_local_uint8 & 0xffffffff;
      do {
        data_definitions_local_float14 = (float)local_pointer6[1] * 0.007843138 - 1.0;
        local_float13 = (float)*local_pointer6 * 0.007843138 - 1.0;
        local_float15 = (float)local_pointer6[2] * 0.007843138 - 1.0;
        local_float10 = local_float13 * local_float13 + data_definitions_local_float14 * data_definitions_local_float14 + local_float15 * local_float15;
        alocal_uint12 = rsqrtss(ZEXT416((uint)local_float10),ZEXT416((uint)local_float10));
        local_float11 = alocal_uint12._0_4_;
        local_float10 = local_float11 * 0.5 * (3.0 - local_float10 * local_float11 * local_float11);
        *local_pointer6 = (ushort)(int)((local_float13 * local_float10 + 1.0) * 127.5);
        local_pointer6[1] = (ushort)(int)((data_definitions_local_float14 * local_float10 + 1.0) * 127.5);
        data_definitions_local_int2 = (int)((local_float15 * local_float10 + 1.0) * 127.5);
        local_pointer6[2] = (ushort)data_definitions_local_int2;
        local_pointer6 = local_pointer6 + 3;
        data_definitions_local_uint8 = data_definitions_local_uint8 - 1;
      } while (data_definitions_local_uint8 != 0);
      return system_concat_int7_byte1((uint7)(uint3)((uint)data_definitions_local_int2 >> 8),1);
    }
    break;
  case 0x27:
  case 0x28:
    plocal_bool9 = (byte *)*system_context;
    alocal_uint12._8_8_ = 0;
    alocal_uint12._0_8_ = system_context[1];
    plocal_float4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * alocal_uint12,0);
    data_definitions_local_uint8 = (ulonglong)system_context[1] / 3;
    if (0 < (int)data_definitions_local_uint8) {
      data_definitions_local_uint8 = data_definitions_local_uint8 & 0xffffffff;
      do {
        data_definitions_local_float14 = (float)plocal_bool9[1] * 0.007843138 - 1.0;
        local_float13 = (float)*plocal_bool9 * 0.007843138 - 1.0;
        local_float15 = (float)plocal_bool9[2] * 0.007843138 - 1.0;
        local_float10 = local_float13 * local_float13 + data_definitions_local_float14 * data_definitions_local_float14 + local_float15 * local_float15;
        alocal_uint12 = rsqrtss(ZEXT416((uint)local_float10),ZEXT416((uint)local_float10));
        local_float11 = alocal_uint12._0_4_;
        local_float10 = local_float11 * 0.5 * (3.0 - local_float10 * local_float11 * local_float11);
        *plocal_bool9 = (byte)(int)((local_float10 * local_float13 + 1.0) * 127.5);
        plocal_bool9[1] = (byte)(int)((local_float10 * data_definitions_local_float14 + 1.0) * 127.5);
        data_definitions_local_uint3 = (uint)((local_float10 * local_float15 + 1.0) * 127.5);
        plocal_float4 = (float *)(ulonglong)data_definitions_local_uint3;
        plocal_bool9[2] = (byte)data_definitions_local_uint3;
        plocal_bool9 = plocal_bool9 + 3;
        data_definitions_local_uint8 = data_definitions_local_uint8 - 1;
      } while (data_definitions_local_uint8 != 0);
    }
  }
  return system_concat_int7_byte1((int7)((ulonglong)plocal_float4 >> 8),1);
}
uint64_t function_(uint64_t *system_context)
{
  float *plocal_float1;
  float *plocal_float2;
  float *plocal_float3;
  float *plocal_float4;
  float *plocal_float5;
  float *plocal_float6;
  float *plocal_float7;
  float *plocal_float8;
  float *plocal_float9;
  float *plocal_float10;
  float *plocal_float11;
  float local_float12;
  uint local_uint13;
  float *pdata_definitions_local_float14;
  float *plocal_float15;
  int local_int16;
  int local_int17;
  int local_int18;
  ulonglong local_uint19;
  longlong data_definitions_local_long20;
  double dVar21;
  if (*(int *)((longlong)system_context + 0x54) == 0x20) {
    pdata_definitions_local_float14 = (float *)*system_context;
    local_int18 = 0;
    dVar21 = 0.0;
    data_definitions_local_long20 = 0;
    local_int17 = 0;
    local_int16 = (int)((ulonglong)system_context[1] / 0xc);
    plocal_float15 = pdata_definitions_local_float14;
    if (3 < local_int16) {
      local_uint13 = (local_int16 - 4U >> 2) + 1;
      local_uint19 = (ulonglong)local_uint13;
      data_definitions_local_long20 = (ulonglong)local_uint13 * 4;
      local_int17 = local_uint13 * 4;
      do {
        plocal_float1 = plocal_float15 + 3;
        local_float12 = *plocal_float15;
        plocal_float2 = plocal_float15 + 6;
        plocal_float3 = plocal_float15 + 7;
        plocal_float4 = plocal_float15 + 5;
        plocal_float5 = plocal_float15 + 9;
        plocal_float6 = plocal_float15 + 10;
        plocal_float7 = plocal_float15 + 4;
        plocal_float8 = plocal_float15 + 1;
        plocal_float9 = plocal_float15 + 2;
        plocal_float10 = plocal_float15 + 8;
        plocal_float11 = plocal_float15 + 0xb;
        plocal_float15 = plocal_float15 + 0xc;
        dVar21 = dVar21 + (double)*plocal_float1 * 0.2126 + (double)local_float12 * 0.2126 +
                          (double)*plocal_float2 * 0.2126 + (double)*plocal_float5 * 0.2126 +
                          (double)*plocal_float6 * 0.7152 +
                          (double)*plocal_float3 * 0.7152 + (double)*plocal_float7 * 0.7152 +
                          (double)*plocal_float8 * 0.7152 +
                          (double)*plocal_float4 * 0.0722 + (double)*plocal_float9 * 0.0722 +
                          (double)*plocal_float10 * 0.0722 + (double)*plocal_float11 * 0.0722;
        local_uint19 = local_uint19 - 1;
      } while (local_uint19 != 0);
    }
    if (local_int17 < local_int16) {
      plocal_float15 = plocal_float15 + 2;
      local_uint19 = (ulonglong)(uint)(local_int16 - local_int17);
      data_definitions_local_long20 = data_definitions_local_long20 + local_uint19;
      do {
        plocal_float1 = plocal_float15 + -1;
        plocal_float2 = plocal_float15 + -2;
        local_float12 = *plocal_float15;
        plocal_float15 = plocal_float15 + 3;
        dVar21 = dVar21 + (double)*plocal_float1 * 0.7152 + (double)*plocal_float2 * 0.2126 +
                          (double)local_float12 * 0.0722;
        local_uint19 = local_uint19 - 1;
      } while (local_uint19 != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)data_definitions_local_long20);
    if (3 < local_int16) {
      local_uint13 = (local_int16 - 4U >> 2) + 1;
      local_uint19 = (ulonglong)local_uint13;
      local_int18 = local_uint13 * 4;
      do {
        *pdata_definitions_local_float14 = (float)((double)*pdata_definitions_local_float14 * dVar21);
        pdata_definitions_local_float14[1] = (float)((double)pdata_definitions_local_float14[1] * dVar21);
        pdata_definitions_local_float14[2] = (float)((double)pdata_definitions_local_float14[2] * dVar21);
        pdata_definitions_local_float14[3] = (float)((double)pdata_definitions_local_float14[3] * dVar21);
        pdata_definitions_local_float14[4] = (float)((double)pdata_definitions_local_float14[4] * dVar21);
        pdata_definitions_local_float14[5] = (float)((double)pdata_definitions_local_float14[5] * dVar21);
        pdata_definitions_local_float14[6] = (float)((double)pdata_definitions_local_float14[6] * dVar21);
        pdata_definitions_local_float14[7] = (float)((double)pdata_definitions_local_float14[7] * dVar21);
        pdata_definitions_local_float14[8] = (float)((double)pdata_definitions_local_float14[8] * dVar21);
        pdata_definitions_local_float14[9] = (float)((double)pdata_definitions_local_float14[9] * dVar21);
        pdata_definitions_local_float14[10] = (float)((double)pdata_definitions_local_float14[10] * dVar21);
        pdata_definitions_local_float14[0xb] = (float)((double)pdata_definitions_local_float14[0xb] * dVar21);
        pdata_definitions_local_float14 = pdata_definitions_local_float14 + 0xc;
        local_uint19 = local_uint19 - 1;
      } while (local_uint19 != 0);
    }
    if (local_int18 < local_int16) {
      pdata_definitions_local_float14 = pdata_definitions_local_float14 + 2;
      local_uint19 = (ulonglong)(uint)(local_int16 - local_int18);
      do {
        pdata_definitions_local_float14[-2] = (float)((double)pdata_definitions_local_float14[-2] * dVar21);
        pdata_definitions_local_float14[-1] = (float)((double)pdata_definitions_local_float14[-1] * dVar21);
        *pdata_definitions_local_float14 = (float)((double)*pdata_definitions_local_float14 * dVar21);
        pdata_definitions_local_float14 = pdata_definitions_local_float14 + 3;
        local_uint19 = local_uint19 - 1;
      } while (local_uint19 != 0);
    }
  }
  else {
    if (*(int *)((longlong)system_context + 0x54) != 0x21) {
      return 0;
    }
    local_int18 = 0;
    pdata_definitions_local_float14 = (float *)*system_context;
    dVar21 = 0.0;
    data_definitions_local_long20 = 0;
    local_int16 = 0;
    local_int17 = (int)((ulonglong)system_context[1] >> 4);
    plocal_float15 = pdata_definitions_local_float14;
    if (3 < local_int17) {
      local_uint13 = (local_int17 - 4U >> 2) + 1;
      local_uint19 = (ulonglong)local_uint13;
      data_definitions_local_long20 = (ulonglong)local_uint13 * 4;
      local_int16 = local_uint13 * 4;
      do {
        plocal_float1 = plocal_float15 + 4;
        local_float12 = *plocal_float15;
        plocal_float2 = plocal_float15 + 8;
        plocal_float3 = plocal_float15 + 9;
        plocal_float4 = plocal_float15 + 6;
        plocal_float5 = plocal_float15 + 0xc;
        plocal_float6 = plocal_float15 + 0xd;
        plocal_float7 = plocal_float15 + 5;
        plocal_float8 = plocal_float15 + 1;
        plocal_float9 = plocal_float15 + 2;
        plocal_float10 = plocal_float15 + 10;
        plocal_float11 = plocal_float15 + 0xe;
        plocal_float15 = plocal_float15 + 0x10;
        dVar21 = dVar21 + (double)*plocal_float1 * 0.2126 + (double)local_float12 * 0.2126 +
                          (double)*plocal_float2 * 0.2126 + (double)*plocal_float5 * 0.2126 +
                          (double)*plocal_float6 * 0.7152 +
                          (double)*plocal_float3 * 0.7152 + (double)*plocal_float7 * 0.7152 +
                          (double)*plocal_float8 * 0.7152 +
                          (double)*plocal_float4 * 0.0722 + (double)*plocal_float9 * 0.0722 +
                          (double)*plocal_float10 * 0.0722 + (double)*plocal_float11 * 0.0722;
        local_uint19 = local_uint19 - 1;
      } while (local_uint19 != 0);
    }
    if (local_int16 < local_int17) {
      plocal_float15 = plocal_float15 + 2;
      local_uint19 = (ulonglong)(uint)(local_int17 - local_int16);
      data_definitions_local_long20 = data_definitions_local_long20 + local_uint19;
      do {
        plocal_float1 = plocal_float15 + -1;
        plocal_float2 = plocal_float15 + -2;
        local_float12 = *plocal_float15;
        plocal_float15 = plocal_float15 + 4;
        dVar21 = dVar21 + (double)*plocal_float1 * 0.7152 + (double)*plocal_float2 * 0.2126 +
                          (double)local_float12 * 0.0722;
        local_uint19 = local_uint19 - 1;
      } while (local_uint19 != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)data_definitions_local_long20);
    if (3 < local_int17) {
      local_uint13 = (local_int17 - 4U >> 2) + 1;
      local_uint19 = (ulonglong)local_uint13;
      local_int18 = local_uint13 * 4;
      do {
        *pdata_definitions_local_float14 = (float)((double)*pdata_definitions_local_float14 * dVar21);
        pdata_definitions_local_float14[1] = (float)((double)pdata_definitions_local_float14[1] * dVar21);
        pdata_definitions_local_float14[2] = (float)((double)pdata_definitions_local_float14[2] * dVar21);
        pdata_definitions_local_float14[4] = (float)((double)pdata_definitions_local_float14[4] * dVar21);
        pdata_definitions_local_float14[5] = (float)((double)pdata_definitions_local_float14[5] * dVar21);
        pdata_definitions_local_float14[6] = (float)((double)pdata_definitions_local_float14[6] * dVar21);
        pdata_definitions_local_float14[8] = (float)((double)pdata_definitions_local_float14[8] * dVar21);
        pdata_definitions_local_float14[9] = (float)((double)pdata_definitions_local_float14[9] * dVar21);
        pdata_definitions_local_float14[10] = (float)((double)pdata_definitions_local_float14[10] * dVar21);
        pdata_definitions_local_float14[0xc] = (float)((double)pdata_definitions_local_float14[0xc] * dVar21);
        pdata_definitions_local_float14[0xd] = (float)((double)pdata_definitions_local_float14[0xd] * dVar21);
        pdata_definitions_local_float14[0xe] = (float)((double)pdata_definitions_local_float14[0xe] * dVar21);
        pdata_definitions_local_float14 = pdata_definitions_local_float14 + 0x10;
        local_uint19 = local_uint19 - 1;
      } while (local_uint19 != 0);
    }
    if (local_int18 < local_int17) {
      pdata_definitions_local_float14 = pdata_definitions_local_float14 + 2;
      local_uint19 = (ulonglong)(uint)(local_int17 - local_int18);
      do {
        pdata_definitions_local_float14[-2] = (float)((double)pdata_definitions_local_float14[-2] * dVar21);
        pdata_definitions_local_float14[-1] = (float)((double)pdata_definitions_local_float14[-1] * dVar21);
        *pdata_definitions_local_float14 = (float)((double)*pdata_definitions_local_float14 * dVar21);
        pdata_definitions_local_float14 = pdata_definitions_local_float14 + 4;
        local_uint19 = local_uint19 - 1;
      } while (local_uint19 != 0);
    }
  }
  return 1;
}
  global_data = 0;
  *(uint32_t *)(data_definitions_system_result + 0x4c) = 0;
  function_(*(uint64_t *)(data_definitions_system_result + 0x108));
  puStack_50 = &unknown_data;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0x12;
  strcpy_s(auStack_38,0x20,&unknown_data);
  function_();
  puStack_50 = &unknown_data;
  function_(uStack_18 ^ (ulonglong)auStack_78);
}
        global_data = 0;
        _global_data = 0;
        _global_data = 0;
        uRam0000000180d48ec8 = 0;
        _global_data = 3;
        _global_data = 0;
        function_(&unknown_data);
        function_(&global_data);
      }
      local_pointer7 = (uint *)&global_data;
      if (data_definitions_local_uint8 < (ulonglong)
                  ((*(longlong *)(thread_context + 0x1c) - *(longlong *)(thread_context + 0x1a)) / 0xb0)) {
        local_pointer7 = (uint *)(local_uint12 + *(longlong *)(thread_context + 0x1a));
      }
      if ((*(int *)(data_definitions_system_result0 + 0x48) < _global_data) &&
         (function_(&global_data), _global_data == -1)) {
        _global_data = &unknown_data;
        _global_data = &global_data;
        _global_data = 0;
        global_data = 0;
        _global_data = 0;
        _global_data = 0;
        uRam0000000180d48ec8 = 0;
        _global_data = 3;
        _global_data = 0;
        function_(&unknown_data);
        function_(&global_data);
      }
      local_pointer6 = &global_data;
      if (data_definitions_local_uint8 < (ulonglong)
                  ((*(longlong *)(network_context + 0x1c) - *(longlong *)(network_context + 0x1a)) / 0xb0)) {
        local_pointer6 = (void *)(local_uint12 + *(longlong *)(network_context + 0x1a));
      }
      if ((((0.0001 <= ABS(*(float *)(local_pointer6 + 0x14) - (float)local_pointer7[5])) ||
           (0.0001 <= ABS(*(float *)(local_pointer6 + 0x18) - (float)local_pointer7[6]))) ||
          (0.0001 <= ABS(*(float *)(local_pointer6 + 0x1c) - (float)local_pointer7[7]))) ||
         (((0.0001 <= ABS(*(float *)(local_pointer6 + 0x10) - (float)local_pointer7[4]) ||
           (0.0001 <= ABS(*(float *)(local_pointer6 + 0x20) - (float)local_pointer7[8]))) ||
          ((0.0001 <= ABS(*(float *)(local_pointer6 + 0x24) - (float)local_pointer7[9]) ||
           (0.0001 <= ABS(*(float *)(local_pointer6 + 0x28) - (float)local_pointer7[10]))))))) {
        *local_pointer7 = *local_pointer7 | 8;
      }
      data_definitions_local_uint3 = function_(system_context,local_pointer6 + 0x88,local_pointer7 + 0x22);
      data_definitions_local_uint8 = data_definitions_local_uint8 + 1;
      local_uint12 = local_uint12 + 0xb0;
      local_uint11 = local_uint11 - 1;
    } while (local_uint11 != 0);
  }
label_:
  return data_definitions_local_uint3 & 0xffffffffffffff00;
}
global_data:
    data_definitions_local_int2 = _Mtx_unlock(system_context + 0x3d8);
    if (data_definitions_local_int2 != 0) {
      __Throw_C_error_std__YAXH_Z(data_definitions_local_int2);
    }
    break;
  default:
label_:
    local_uint4 = 1;
    goto label_;
  }
  *network_context = (longlong)plocal_long5;
code_r0x000180329ed1:
  local_bool8 = (byte)auStackX_20[0];
  goto label_;
}
uint64_t function_(longlong system_context,longlong *network_context,uint32_t *thread_context,uint memory_context)
{
  longlong *data_definitions_system_result;
  byte local_bool2;
  int local_int3;
  uint64_t *data_definitions_local_pointer4;
  uint64_t data_definitions_local_uint5;
  longlong *pdata_definitions_local_long6;
  longlong local_long7;
  longlong *plStackX_18;
  uint32_t auStackX_20 [2];
  longlong *plStack_80;
  longlong *plStack_78;
  uint64_t uStack_70;
  longlong **pplStack_68;
  longlong *plStack_60;
  uint8_t auStack_58 [32];
  uStack_70 = 0xfffffffffffffffe;
  data_definitions_local_uint5 = 0;
  local_bool2 = *(byte *)(thread_context + 2);
  if ((memory_context >> 1 & 1) != 0) {
    function_(_global_data,&plStack_78,thread_context + 0x14,1);
    data_definitions_local_pointer4 = (uint64_t *)function_();
    function_(*data_definitions_local_pointer4,&plStackX_18);
    if (plStack_80 != (longlong *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
    }
    function_(plStackX_18,&plStack_78);
    *(uint *)(plStackX_18 + 0x20) = *(uint *)(plStackX_18 + 0x20) | 0x40000000;
    auStackX_20[0] = *thread_context;
    data_definitions_system_result = (longlong *)(system_context + 0x3d8);
    plStack_80 = data_definitions_system_result;
    local_int3 = _Mtx_lock(data_definitions_system_result);
    if (local_int3 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int3);
    }
    data_definitions_local_uint5 = function_(_global_data,0x298,8,3);
    pdata_definitions_local_long6 = (longlong *)function_(data_definitions_local_uint5);
    pplStack_68 = (longlong **)CONCAT44(pplStack_68._4_4_,auStackX_20[0]);
    plStack_60 = pdata_definitions_local_long6;
    function_(system_context + 0x3a8,auStack_58,&pplStack_68);
    local_int3 = _Mtx_unlock(data_definitions_system_result);
    if (local_int3 != 0) {
      __Throw_C_error_std__YAXH_Z(local_int3);
    }
    *network_context = (longlong)pdata_definitions_local_long6;
    data_definitions_local_uint5 = *(uint64_t *)(system_context + 0x2d8);
    pplStack_68 = &plStack_80;
    plStack_80 = pdata_definitions_local_long6;
    if (pdata_definitions_local_long6 != (longlong *)0x0) {
      (**(code **)(*pdata_definitions_local_long6 + 0x28))(pdata_definitions_local_long6);
    }
    function_(data_definitions_local_uint5,&plStack_80);
    *(int *)(system_context + 0xb0) = *(int *)(system_context + 0xb0) + 1;
    data_definitions_local_uint5 = 1;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
  }
  if ((memory_context >> 2 & 1) == 0) {
    if (((memory_context >> 1 & 1) == 0) && ((local_bool2 & 1) != 0)) {
      local_long7 = function_(system_context,*thread_context);
      *network_context = local_long7;
      data_definitions_local_uint5 = 1;
    }
  }
  else {
    auStackX_20[0] = *thread_context;
    local_long7 = function_(system_context);
    if (local_long7 == 0) {
      *network_context = 0;
      data_definitions_local_uint5 = 1;
    }
    else {
      data_definitions_system_result = (longlong *)(system_context + 0x3d8);
      plStackX_18 = data_definitions_system_result;
      local_int3 = _Mtx_lock(data_definitions_system_result);
      if (local_int3 != 0) {
        __Throw_C_error_std__YAXH_Z(local_int3);
      }
      function_(system_context + 0x3a8,auStackX_20);
      local_int3 = _Mtx_unlock(data_definitions_system_result);
      if (local_int3 != 0) {
        __Throw_C_error_std__YAXH_Z(local_int3);
      }
      *network_context = local_long7;
      *(uint8_t *)(local_long7 + 0x39) = 1;
      data_definitions_local_uint5 = 1;
    }
  }
  return data_definitions_local_uint5;
}
    global_data = 0;
    function_(0x180d496e0);
    function_(function_);
    function_(&global_data);
  }
  data_definitions_local_int2 = _Mtx_lock(system_context + 0x6e8);
  if (data_definitions_local_int2 != 0) {
    __Throw_C_error_std__YAXH_Z(data_definitions_local_int2);
  }
  if ((ulonglong)thread_context <= *(ulonglong *)(system_context + 0x160)) {
    for (data_definitions_local_pointer3 = *(uint **)(*(longlong *)(system_context + 0x6c0) +
                            ((ulonglong)network_context % (ulonglong)*(uint *)(system_context + 0x6c8)) * 8);
        data_definitions_local_pointer3 != (uint *)0x0; data_definitions_local_pointer3 = *(uint **)(data_definitions_local_pointer3 + 4)) {
      if (network_context == *data_definitions_local_pointer3) goto label_;
    }
    data_definitions_local_pointer3 = *(uint **)(*(longlong *)(system_context + 0x6c0) + *(longlong *)(system_context + 0x6c8) * 8);
label_:
    local_long4 = *(longlong *)(data_definitions_local_pointer3 + 2);
    data_definitions_system_result = *(longlong *)(local_long4 + 8);
    for (data_definitions_local_pointer3 = *(uint **)(data_definitions_system_result + ((ulonglong)thread_context % (ulonglong)*(uint *)(local_long4 + 0x10)) * 8);
        data_definitions_local_pointer3 != (uint *)0x0; data_definitions_local_pointer3 = *(uint **)(data_definitions_local_pointer3 + 4)) {
      if (thread_context == *data_definitions_local_pointer3) {
        local_long4 = *(longlong *)(local_long4 + 0x10);
        goto label_;
      }
    }
    local_long4 = *(longlong *)(local_long4 + 0x10);
    data_definitions_local_pointer3 = *(uint **)(data_definitions_system_result + local_long4 * 8);
label_:
    if ((data_definitions_local_pointer3 != *(uint **)(data_definitions_system_result + local_long4 * 8)) && (local_long4 = *(longlong *)(data_definitions_local_pointer3 + 2), local_long4 != 0)
       ) goto label_;
  }
  function_(0x180d496e0);
  local_long4 = 0x180d496e0;
label_:
  data_definitions_local_int2 = _Mtx_unlock(system_context + 0x6e8);
  if (data_definitions_local_int2 != 0) {
    __Throw_C_error_std__YAXH_Z(data_definitions_local_int2);
  }
  return local_long4;
}
longlong function_(longlong system_context,uint network_context,uint thread_context)
{
  longlong data_definitions_system_result;
  longlong local_long2;
  uint *data_definitions_local_pointer3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _global_data) && (function_(&global_data), _global_data == -1)) {
    function_(0x180d497e0);
    function_(function_);
    function_(&global_data);
  }
  if ((ulonglong)thread_context <= *(ulonglong *)(system_context + 0x160)) {
    for (data_definitions_local_pointer3 = *(uint **)(*(longlong *)(system_context + 0x9f8) +
                            ((ulonglong)network_context % (ulonglong)*(uint *)(system_context + 0xa00)) * 8);
        data_definitions_local_pointer3 != (uint *)0x0; data_definitions_local_pointer3 = *(uint **)(data_definitions_local_pointer3 + 4)) {
      if (network_context == *data_definitions_local_pointer3) goto label_;
    }
    data_definitions_local_pointer3 = *(uint **)(*(longlong *)(system_context + 0x9f8) + *(longlong *)(system_context + 0xa00) * 8);
label_:
    local_long2 = *(longlong *)(data_definitions_local_pointer3 + 2);
    data_definitions_system_result = *(longlong *)(local_long2 + 8);
    for (data_definitions_local_pointer3 = *(uint **)(data_definitions_system_result + ((ulonglong)thread_context % (ulonglong)*(uint *)(local_long2 + 0x10)) * 8);
        data_definitions_local_pointer3 != (uint *)0x0; data_definitions_local_pointer3 = *(uint **)(data_definitions_local_pointer3 + 4)) {
      if (thread_context == *data_definitions_local_pointer3) {
        local_long2 = *(longlong *)(local_long2 + 0x10);
        goto label_;
      }
    }
    local_long2 = *(longlong *)(local_long2 + 0x10);
    data_definitions_local_pointer3 = *(uint **)(data_definitions_system_result + local_long2 * 8);
label_:
    if ((data_definitions_local_pointer3 != *(uint **)(data_definitions_system_result + local_long2 * 8)) && (*(longlong *)(data_definitions_local_pointer3 + 2) != 0)) {
      return *(longlong *)(data_definitions_local_pointer3 + 2);
    }
  }
  function_(0x180d497e0);
  return 0x180d497e0;
}
longlong function_(uint64_t system_context,longlong *network_context,longlong thread_context)
{
  longlong data_definitions_system_result;
  uint local_uint2;
  ulonglong data_definitions_local_uint3;
  uint64_t local_uint4;
  uint64_t *local_pointer5;
  uint local_uint6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _global_data) {
    function_(&global_data);
    if (_global_data == -1) {
      local_uint4 = function_(_global_data,0x1c8,8,3);
      _global_data = function_(local_uint4);
      local_uint4 = function_(_global_data,0x200,8,3);
      _global_data = function_(local_uint4);
      local_pointer5 = (uint64_t *)function_(_global_data,0xf8,8,3);
      function_(local_pointer5);
      *local_pointer5 = &unknown_data;
      function_(local_pointer5);
      _global_data = local_pointer5;
      _global_data = function_();
      local_pointer5 = (uint64_t *)function_(_global_data,0xb0,8,3);
      function_(local_pointer5);
      *local_pointer5 = &unknown_data;
      _global_data = local_pointer5;
      _global_data = function_();
      _global_data = (*_global_data)(&global_data);
      _global_data = 0;
      function_(&global_data);
    }
  }
  data_definitions_local_uint3 = 0;
  local_uint6 = (uint)(network_context[1] - *network_context >> 3);
  if (local_uint6 != 0) {
    do {
      data_definitions_system_result = *(longlong *)(*network_context + data_definitions_local_uint3 * 8);
      if (*(int *)(data_definitions_system_result + 8) == *(int *)(thread_context + 8)) {
        return data_definitions_system_result;
      }
      local_uint2 = (int)data_definitions_local_uint3 + 1;
      data_definitions_local_uint3 = (ulonglong)local_uint2;
    } while (local_uint2 < local_uint6);
  }
  (**(code **)(**(longlong **)(&global_data + (ulonglong)*(uint *)(thread_context + 0x8c) * 8) + 8))();
  return *(longlong *)(&global_data + (ulonglong)*(uint *)(thread_context + 0x8c) * 8);
}
uint64_t
function_(uint64_t system_context,longlong *network_context,uint64_t *thread_context,uint32_t memory_context,
             uint32_t param_5,uint8_t param_6)
{
  longlong data_definitions_system_result;
  ulonglong local_uint2;
  longlong local_long3;
  uint64_t local_uint4;
  longlong local_long5;
  longlong data_definitions_local_long6;
  uint *local_pointer7;
  local_uint4 = 0;
  local_uint2 = network_context[1] - *network_context >> 2;
  if ((int)local_uint2 != 0) {
    data_definitions_local_long6 = 0;
    local_uint2 = local_uint2 & 0xffffffff;
    do {
      local_pointer7 = (uint *)*thread_context;
      data_definitions_system_result = *network_context;
      local_long3 = (longlong)thread_context[1] - (longlong)local_pointer7 >> 2;
      if (0 < local_long3) {
        do {
          local_long5 = local_long3 >> 1;
          if (local_pointer7[local_long5] < *(uint *)(data_definitions_system_result + data_definitions_local_long6)) {
            local_pointer7 = local_pointer7 + local_long5 + 1;
            local_long5 = local_long3 + (-1 - local_long5);
          }
          local_long3 = local_long5;
        } while (0 < local_long5);
      }
      if ((local_pointer7 == (uint *)thread_context[1]) || (*(uint *)(data_definitions_system_result + data_definitions_local_long6) < *local_pointer7)) {
        local_uint4 = function_(system_context,*(uint32_t *)(data_definitions_system_result + data_definitions_local_long6),memory_context);
        function_(system_context,local_uint4,param_5,memory_context,param_6);
        local_uint4 = 1;
      }
      data_definitions_local_long6 = data_definitions_local_long6 + 4;
      local_uint2 = local_uint2 - 1;
    } while (local_uint2 != 0);
  }
  return local_uint4;
}
uint8_t function_(void)
{
  uint in_EAX;
  longlong data_definitions_system_result;
  longlong local_long2;
  longlong local_long3;
  uint8_t unaff_SIL;
  ulonglong local_uint4;
  uint *local_pointer5;
  uint64_t *unaff_R14;
  longlong *unaff_R15;
  local_long3 = 0;
  local_uint4 = (ulonglong)in_EAX;
  do {
    local_pointer5 = (uint *)*unaff_R14;
    data_definitions_system_result = (longlong)unaff_R14[1] - (longlong)local_pointer5 >> 2;
    if (0 < data_definitions_system_result) {
      do {
        local_long2 = data_definitions_system_result >> 1;
        if (local_pointer5[local_long2] < *(uint *)(*unaff_R15 + local_long3)) {
          local_pointer5 = local_pointer5 + local_long2 + 1;
          local_long2 = data_definitions_system_result + (-1 - local_long2);
        }
        data_definitions_system_result = local_long2;
      } while (0 < local_long2);
    }
    if ((local_pointer5 == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + local_long3) < *local_pointer5)) {
      function_();
      function_();
      unaff_SIL = 1;
    }
    local_long3 = local_long3 + 4;
    local_uint4 = local_uint4 - 1;
  } while (local_uint4 != 0);
  return unaff_SIL;
}
uint8_t function_(void)
{
  uint8_t unaff_SIL;
  return unaff_SIL;
}
uint64_t
function_(uint64_t system_context,longlong *network_context,longlong *thread_context,uint memory_context,char param_5)
{
  longlong data_definitions_system_result;
  longlong local_long2;
  uint data_definitions_local_uint3;
  ulonglong local_uint4;
  ulonglong data_definitions_local_uint5;
  longlong data_definitions_local_long6;
  uint local_uint7;
  uint64_t data_definitions_local_uint8;
  longlong data_definitions_local_long9;
  longlong data_definitions_system_result0;
  data_definitions_local_uint8 = 0;
  data_definitions_system_result = thread_context[1];
  local_long2 = *thread_context;
  local_uint4 = network_context[1] - *network_context >> 3;
  if ((int)local_uint4 != 0) {
    data_definitions_local_long6 = 0;
    local_uint4 = local_uint4 & 0xffffffff;
    do {
      data_definitions_local_uint5 = 0;
      local_uint7 = (uint)(data_definitions_system_result - local_long2 >> 3);
      if (local_uint7 != 0) {
        do {
          if (*(int *)(*(longlong *)(*network_context + data_definitions_local_long6) + 8) ==
              *(int *)(*(longlong *)(*thread_context + data_definitions_local_uint5 * 8) + 8)) goto label_;
          data_definitions_local_uint3 = (int)data_definitions_local_uint5 + 1;
          data_definitions_local_uint5 = (ulonglong)data_definitions_local_uint3;
        } while (data_definitions_local_uint3 < local_uint7);
      }
      data_definitions_local_long9 = *(longlong *)(data_definitions_local_long6 + *network_context);
      *(uint *)(data_definitions_local_long9 + 0x10) = *(uint *)(data_definitions_local_long9 + 0x10) | memory_context;
      if (((param_5 != '\0') && (*(int *)(data_definitions_local_long9 + 0x8c) == 2)) &&
         (data_definitions_local_uint5 = *(longlong *)(data_definitions_local_long9 + 0xc0) - *(longlong *)(data_definitions_local_long9 + 0xb8) >> 3, (int)data_definitions_local_uint5 != 0))
      {
        data_definitions_system_result0 = 0;
        data_definitions_local_uint5 = data_definitions_local_uint5 & 0xffffffff;
        do {
          function_(system_context,*(uint64_t *)(*(longlong *)(data_definitions_local_long9 + 0xb8) + data_definitions_system_result0),memory_context,
                        param_5);
          data_definitions_system_result0 = data_definitions_system_result0 + 8;
          data_definitions_local_uint5 = data_definitions_local_uint5 - 1;
        } while (data_definitions_local_uint5 != 0);
      }
      data_definitions_local_uint8 = 1;
label_:
      data_definitions_local_long6 = data_definitions_local_long6 + 8;
      local_uint4 = local_uint4 - 1;
    } while (local_uint4 != 0);
  }
  return data_definitions_local_uint8;
}
uint8_t function_(uint64_t system_context,uint64_t network_context,longlong *thread_context)
{
  longlong data_definitions_system_result;
  uint local_uint2;
  ulonglong in_RAX;
  ulonglong data_definitions_local_uint3;
  longlong local_long4;
  uint unaff_EDI;
  uint8_t in_R10B;
  longlong *unaff_R13;
  uint unaff_R14D;
  ulonglong data_definitions_local_uint5;
  longlong *in_stack_00000060;
  char in_stack_00000070;
  local_long4 = 0;
  data_definitions_local_uint5 = in_RAX & 0xffffffff;
  do {
    data_definitions_local_uint3 = 0;
    if (unaff_EDI != 0) {
      do {
        if (*(int *)(*(longlong *)(*unaff_R13 + local_long4) + 8) ==
            *(int *)(*(longlong *)(*thread_context + data_definitions_local_uint3 * 8) + 8)) goto label_;
        local_uint2 = (int)data_definitions_local_uint3 + 1;
        data_definitions_local_uint3 = (ulonglong)local_uint2;
      } while (local_uint2 < unaff_EDI);
    }
    data_definitions_system_result = *(longlong *)(local_long4 + *unaff_R13);
    *(uint *)(data_definitions_system_result + 0x10) = *(uint *)(data_definitions_system_result + 0x10) | unaff_R14D;
    if (((in_stack_00000070 != '\0') && (*(int *)(data_definitions_system_result + 0x8c) == 2)) &&
       (data_definitions_local_uint3 = *(longlong *)(data_definitions_system_result + 0xc0) - *(longlong *)(data_definitions_system_result + 0xb8) >> 3, (int)data_definitions_local_uint3 != 0)) {
      data_definitions_local_uint3 = data_definitions_local_uint3 & 0xffffffff;
      do {
        function_();
        data_definitions_local_uint3 = data_definitions_local_uint3 - 1;
      } while (data_definitions_local_uint3 != 0);
    }
    in_R10B = 1;
label_:
    local_long4 = local_long4 + 8;
    data_definitions_local_uint5 = data_definitions_local_uint5 - 1;
    thread_context = in_stack_00000060;
    if (data_definitions_local_uint5 == 0) {
      return in_R10B;
    }
  } while( true );
}
uint8_t function_(void)
{
  uint8_t in_R10B;
  return in_R10B;
}
uint64_t
function_(uint64_t system_context,longlong *network_context,uint64_t *thread_context,uint32_t memory_context,
             uint param_5)
{
  ulonglong local_uint1;
  longlong local_long2;
  longlong local_long3;
  longlong local_long4;
  longlong local_long5;
  uint64_t local_uint6;
  uint *local_pointer7;
  local_uint6 = 0;
  local_uint1 = network_context[1] - *network_context >> 2;
  if ((int)local_uint1 != 0) {
    local_long5 = 0;
    local_uint1 = local_uint1 & 0xffffffff;
    do {
      local_pointer7 = (uint *)*thread_context;
      local_long3 = *network_context;
      local_long2 = (longlong)thread_context[1] - (longlong)local_pointer7 >> 2;
      if (0 < local_long2) {
        do {
          local_long4 = local_long2 >> 1;
          if (local_pointer7[local_long4] < *(uint *)(local_long3 + local_long5)) {
            local_pointer7 = local_pointer7 + local_long4 + 1;
            local_long4 = local_long2 + (-1 - local_long4);
          }
          local_long2 = local_long4;
        } while (0 < local_long4);
      }
      if ((local_pointer7 == (uint *)thread_context[1]) || (*(uint *)(local_long3 + local_long5) < *local_pointer7)) {
        local_long3 = function_(system_context,*(uint32_t *)(local_long3 + local_long5),memory_context);
        local_uint6 = 1;
        *(uint *)(local_long3 + 8) = *(uint *)(local_long3 + 8) | param_5;
      }
      local_long5 = local_long5 + 4;
      local_uint1 = local_uint1 - 1;
    } while (local_uint1 != 0);
  }
  return local_uint6;
}
uint8_t function_(void)
{
  uint in_EAX;
  longlong data_definitions_system_result;
  longlong local_long2;
  longlong local_long3;
  uint8_t unaff_SIL;
  ulonglong local_uint4;
  uint *local_pointer5;
  uint64_t *unaff_R14;
  longlong *unaff_R15;
  uint in_stack_00000070;
  local_long3 = 0;
  local_uint4 = (ulonglong)in_EAX;
  do {
    local_pointer5 = (uint *)*unaff_R14;
    data_definitions_system_result = (longlong)unaff_R14[1] - (longlong)local_pointer5 >> 2;
    if (0 < data_definitions_system_result) {
      do {
        local_long2 = data_definitions_system_result >> 1;
        if (local_pointer5[local_long2] < *(uint *)(*unaff_R15 + local_long3)) {
          local_pointer5 = local_pointer5 + local_long2 + 1;
          local_long2 = data_definitions_system_result + (-1 - local_long2);
        }
        data_definitions_system_result = local_long2;
      } while (0 < local_long2);
    }
    if ((local_pointer5 == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + local_long3) < *local_pointer5)) {
      data_definitions_system_result = function_();
      unaff_SIL = 1;
      *(uint *)(data_definitions_system_result + 8) = *(uint *)(data_definitions_system_result + 8) | in_stack_00000070;
    }
    local_long3 = local_long3 + 4;
    local_uint4 = local_uint4 - 1;
  } while (local_uint4 != 0);
  return unaff_SIL;
}
uint8_t function_(void)
{
  uint8_t unaff_SIL;
  return unaff_SIL;
}
  global_data = global_data + unaff_BL;
  data_definitions_local_uint5 = in(data_definitions_local_uint3);
  plocal_char1 = (char *)((ulonglong)data_definitions_local_uint5 + 0x1c0042ed);
  *plocal_char1 = *plocal_char1 + (char)unaff_RDI + '\x04';
  out(data_definitions_local_uint3,(char)data_definitions_local_uint5);
  plocal_char1 = (char *)((ulonglong)data_definitions_local_uint5 - 0x12);
  *plocal_char1 = *plocal_char1 + (char)network_context;
  plocal_char2 = (code *)swi(3);
  (*plocal_char2)();
  return;
}
      global_data = 0;
      _global_data = 6;
      strcpy_s(&global_data,0x200,&global_data,register_param,local_uint1);
      function_(function_);
      function_(&global_data);
    }
  }
  (**(code **)(*_global_data + 0x70))(_global_data,&global_data);
  return;
}
uint32_t
function_(uint64_t system_context,uint64_t network_context,uint64_t thread_context,uint64_t memory_context)
{
  code *plocal_char1;
  uint32_t local_uint2;
  uint64_t data_definitions_local_uint3;
  void *puStack_28;
  longlong lStack_20;
  plocal_char1 = *(code **)(*_global_data + 0x70);
  data_definitions_local_uint3 = function_(&puStack_28,&unknown_data,thread_context,memory_context,0,0xfffffffffffffffe);
  local_uint2 = (*plocal_char1)(_global_data,data_definitions_local_uint3,thread_context,memory_context,1);
  puStack_28 = &unknown_data;
  if (lStack_20 != 0) {
    function_();
  }
  return local_uint2;
}
uint32_t
function_(uint64_t system_context,uint64_t network_context,uint64_t thread_context,uint64_t memory_context)
{
  code *plocal_char1;
  uint32_t local_uint2;
  uint64_t data_definitions_local_uint3;
  void *puStack_28;
  longlong lStack_20;
  plocal_char1 = *(code **)(*_global_data + 0x70);
  data_definitions_local_uint3 = function_(&puStack_28,&unknown_data,thread_context,memory_context,0,0xfffffffffffffffe);
  local_uint2 = (*plocal_char1)(_global_data,data_definitions_local_uint3,thread_context,memory_context,1);
  puStack_28 = &unknown_data;
  if (lStack_20 != 0) {
    function_();
  }
  return local_uint2;
}
uint32_t
function_(uint64_t system_context,uint64_t network_context,uint64_t thread_context,uint64_t memory_context)
{
  code *plocal_char1;
  uint32_t local_uint2;
  uint64_t data_definitions_local_uint3;
  uint64_t local_uint4;
  void *puStack_30;
  longlong lStack_28;
  local_uint4 = 0xfffffffffffffffe;
  plocal_char1 = *(code **)(*_global_data + 0x70);
  data_definitions_local_uint3 = function_(&puStack_30);
  local_uint2 = (*plocal_char1)(_global_data,data_definitions_local_uint3,thread_context,memory_context,local_uint4);
  puStack_30 = &unknown_data;
  if (lStack_28 != 0) {
    function_();
  }
  return local_uint2;
}
    global_data = 0;
    if (system_context != 0) {
      local_long2 = -1;
      do {
        local_long2 = local_long2 + 1;
      } while (*(char *)(system_context + local_long2) != '\0');
      _global_data = (uint32_t)local_long2;
      strcpy_s(&global_data,0x100,system_context);
    }
    function_(function_);
    function_(&global_data);
  }
  data_definitions_local_uint3 = function_(_global_data,0xe0,8,3,data_definitions_local_uint3);
  plStackX_10 = alStack_30;
  puStack_20 = &unknown_data;
  puStack_18 = &unknown_data;
  data_definitions_system_result = (longlong *)function_(data_definitions_local_uint3,alStack_30);
  plStackX_18 = data_definitions_system_result;
  if (data_definitions_system_result != (longlong *)0x0) {
    (**(code **)(*data_definitions_system_result + 0x28))(data_definitions_system_result);
  }
  data_definitions_local_uint3 = _global_data;
  pplStackX_20 = &plStackX_10;
  plStackX_10 = data_definitions_system_result;
  if (data_definitions_system_result != (longlong *)0x0) {
    (**(code **)(*data_definitions_system_result + 0x28))(data_definitions_system_result);
  }
  function_(data_definitions_local_uint3,&plStackX_10);
  if (data_definitions_system_result != (longlong *)0x0) {
    (**(code **)(*data_definitions_system_result + 0x38))(data_definitions_system_result);
  }
  return;
}
  cleanup_flag_duodenary = 1;
  _global_data = 0x100;
  _global_data = &unknown_data;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = &unknown_data;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  global_data = 1;
  _global_data = 0;
  _global_data = 0;
  function_();
  data_definitions_system_result = 0x180c95bf8;
  local_long2 = 0x17;
  do {
    func_0x00018013d940(data_definitions_system_result);
    data_definitions_system_result = data_definitions_system_result + 0x10;
    local_long2 = local_long2 + -1;
  } while (local_long2 != 0);
  global_data = 0;
  _Mtx_init_in_situ(0x180c95d70,2,thread_context,memory_context,data_definitions_local_uint3);
  _global_data = 0xffffffff;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0xffdc;
  global_data = 1;
  function_(&global_data);
  _global_data = 3;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  cleanup_flag_terdenary = 1;
  _global_data = 0;
  _global_data = 0;
  cleanup_flag_denary = 1;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 3;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 3;
  cleanup_flag_nonary = 1;
  function_(0x180c95de0);
  cleanup_flag_quartodenary = 1;
  _global_data = 3;
  _global_data = 0x40000000;
  _global_data = 0x3f800000;
  _global_data = 0;
  _global_data = 1;
  _global_data = &global_data;
  _global_data = 0;
  cleanup_flag_undenary = 1;
  _global_data = 0;
  _global_data = 3;
  _global_data = 0;
  uRam0000000180c961b8 = 0;
  _global_data = 0;
  global_data = 1;
  _global_data = 3;
  _global_data = 0x40000000;
  _global_data = 0x3f800000;
  _global_data = 0;
  _global_data = 1;
  _global_data = &global_data;
  _global_data = 4;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 3;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  cleanup_flag_senary = 1;
  _global_data = 0;
  cleanup_flag_quinary = 1;
  _global_data = 0;
  cleanup_flag_quaternary = 1;
  _global_data = 0;
  cleanup_flag_tertiary = 1;
  _global_data = 0;
  global_data = 1;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 3;
  uRam0000000180c95f98 = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 3;
  uRam0000000180c95f78 = 0;
  _global_data = 0;
  _global_data = 0;
  _global_data = 4;
  _global_data = 0x40000000;
  _global_data = 0x3f800000;
  _global_data = 0;
  _global_data = 1;
  _global_data = &global_data;
  cleanup_flag_secondary = 1;
  _global_data = 3;
  _global_data = 0;
  _global_data = 0;
  _global_data = 0;
  global_data = 1;
  cleanup_flag_septenary = 1;
  _global_data = 0;
  cleanup_flag_octonary = 1;
  return;
}
    global_data = '\x01';
    local_long4 = function_(&puStack_48,_global_data + 0x2c0);
    local_pointer5 = &global_data;
    if (*(void **)(local_long4 + 8) != (void *)0x0) {
      local_pointer5 = *(void **)(local_long4 + 8);
    }
    (**(code **)(data_definitions_system_result + 0x330))(*(uint32_t *)(_global_data + 0x10),local_pointer5);
    puStack_48 = &unknown_data;
    if (lStack_40 != 0) {
      function_();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &unknown_data;
  }
  plocal_long2 = (longlong *)*system_context;
  if (plocal_long2 != (longlong *)0x0) {
    *(uint8_t *)((longlong)plocal_long2 + 0xdd) = 0;
    (**(code **)(*plocal_long2 + 0xc0))();
    plStackX_8 = (longlong *)*system_context;
    *system_context = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  *(float *)(_global_data + 0x200) = 1.0 / (float)(int)system_context[1];
  puStack_68 = &unknown_data;
  if (puStack_60 != (void *)0x0) {
    function_();
  }
  return;
}
uint64_t * function_(uint64_t *system_context,int network_context)
{
  longlong *data_definitions_system_result;
  int data_definitions_local_int2;
  uint64_t data_definitions_local_uint3;
  longlong local_long4;
  int local_int5;
  uint64_t *local_pointer6;
  ulonglong local_uint7;
  longlong data_definitions_local_long8;
  float local_float9;
  float local_float10;
  float local_float11;
  float local_float12;
  float local_float13;
  float data_definitions_local_float14;
  float local_float15;
  *system_context = &unknown_data;
  local_long4 = 0;
  system_context[1] = 0;
  system_context[2] = 0;
  system_context[3] = 0;
  *(uint32_t *)(system_context + 4) = 3;
  *system_context = &unknown_data;
  system_context[0xd] = 0;
  system_context[0xe] = 0;
  system_context[0xf] = 0;
  system_context[0x10] = 0;
  system_context[0x11] = 0;
  system_context[0x12] = 0;
  system_context[0x13] = 0;
  system_context[0x14] = 0;
  system_context[0x15] = 0;
  system_context[0x16] = 0;
  system_context[0x17] = 0;
  system_context[0x18] = 0;
  system_context[0x19] = 0;
  system_context[0x1a] = 0;
  system_context[0x1b] = 0;
  system_context[0x1c] = 0;
  system_context[0x1d] = 0;
  system_context[0x1e] = 0;
  system_context[0x1f] = 0;
  system_context[0x20] = 0;
  system_context[0x21] = 0;
  system_context[0x22] = 0;
  system_context[0x23] = 0;
  system_context[0x24] = 0;
  system_context[0x25] = 0;
  system_context[0x26] = 0;
  system_context[0x27] = 0;
  system_context[0x28] = 0;
  system_context[0x29] = 0;
  system_context[0x2a] = 0;
  system_context[0x2b] = 0;
  system_context[0x2c] = 0;
  system_context[0x2d] = 0;
  system_context[0x2e] = 0;
  system_context[0x2f] = 0;
  data_definitions_system_result = system_context + 0x31;
  *data_definitions_system_result = 0;
  system_context[0x32] = 0;
  system_context[0x33] = 0;
  *(uint32_t *)(system_context + 0x34) = 3;
  local_pointer6 = system_context + 0x35;
  data_definitions_local_long8 = 8;
  function_(local_pointer6,0x28,8,&unknown_data,function_);
  _Mtx_init_in_situ(system_context + 0x5d,0x102);
  data_definitions_local_int2 = func_0x0001804ca2d0(&global_data);
  if (network_context < data_definitions_local_int2) {
    data_definitions_local_int2 = network_context;
  }
  *(int *)(system_context + 0x67) = data_definitions_local_int2;
  system_context[0x11] = (longlong)data_definitions_local_int2;
  function_(system_context + 0xd);
  system_context[0x16] = (longlong)*(int *)(system_context + 0x67);
  if (system_context[0x12] != 0) {
    function_();
  }
  system_context[0x12] = 0;
  system_context[0x14] = 1;
  system_context[0x13] = 0;
  system_context[0x15] = 0xffffffff;
  data_definitions_local_uint3 = function_(_global_data,(longlong)*(int *)(system_context + 0x67) * 0x48,0x18);
  system_context[0x12] = data_definitions_local_uint3;
  system_context[0x1b] = (longlong)*(int *)(system_context + 0x67);
  if (system_context[0x17] != 0) {
    function_();
  }
  system_context[0x17] = 0;
  system_context[0x19] = 1;
  system_context[0x18] = 0;
  system_context[0x1a] = 0xffffffff;
  data_definitions_local_uint3 = function_(_global_data,(longlong)*(int *)(system_context + 0x67) * 0xc0,0x18);
  system_context[0x17] = data_definitions_local_uint3;
  system_context[0x2a] = (longlong)*(int *)(system_context + 0x67);
  if (system_context[0x26] == 0) {
    system_context[0x26] = 0;
    system_context[0x28] = 1;
    system_context[0x27] = 0;
    system_context[0x29] = 0xffffffff;
    data_definitions_local_uint3 = function_(_global_data,(longlong)*(int *)(system_context + 0x67) << 4,0x18);
    system_context[0x26] = data_definitions_local_uint3;
    system_context[0x20] = (longlong)*(int *)(system_context + 0x67);
    function_(system_context + 0x1c);
    system_context[0x2f] = (longlong)*(int *)(system_context + 0x67);
    if (system_context[0x2b] != 0) {
      function_();
    }
    system_context[0x2b] = 0;
    system_context[0x2d] = 1;
    system_context[0x2c] = 0;
    system_context[0x2e] = 0xffffffff;
    data_definitions_local_uint3 = function_(_global_data,(longlong)*(int *)(system_context + 0x67) << 4,0x18);
    system_context[0x2b] = data_definitions_local_uint3;
    do {
      local_pointer6[4] = (longlong)*(int *)(system_context + 0x67);
      function_(local_pointer6);
      local_pointer6 = local_pointer6 + 5;
      data_definitions_local_long8 = data_definitions_local_long8 + -1;
    } while (data_definitions_local_long8 != 0);
    system_context[0x25] = (longlong)*(int *)(system_context + 0x67);
    if (system_context[0x21] == 0) {
      system_context[0x21] = 0;
      system_context[0x23] = 1;
      system_context[0x22] = 0;
      system_context[0x24] = 0xffffffff;
      data_definitions_local_uint3 = function_(_global_data,(longlong)*(int *)(system_context + 0x67) * 0x88,0x18);
      system_context[0x21] = data_definitions_local_uint3;
      local_uint7 = (ulonglong)*(int *)(system_context + 0x67);
      data_definitions_local_long8 = *data_definitions_system_result;
      if ((ulonglong)(system_context[0x33] - data_definitions_local_long8 >> 3) < local_uint7) {
        if (local_uint7 != 0) {
          local_long4 = function_(_global_data,local_uint7 * 8,*(uint8_t *)(system_context + 0x34));
          data_definitions_local_long8 = *data_definitions_system_result;
        }
        if (data_definitions_local_long8 != system_context[0x32]) {
          memmove(local_long4,data_definitions_local_long8,system_context[0x32] - data_definitions_local_long8);
        }
        if (data_definitions_local_long8 != 0) {
          function_();
        }
        *data_definitions_system_result = local_long4;
        system_context[0x32] = local_long4;
        system_context[0x33] = local_long4 + local_uint7 * 8;
      }
      local_int5 = *(int *)(_global_data + 0xe00) + -1;
      data_definitions_local_int2 = 0;
      if ((-1 < local_int5) && (data_definitions_local_int2 = local_int5, 3 < local_int5)) {
        data_definitions_local_int2 = 3;
      }
      local_float15 = (float)data_definitions_local_int2 * 0.33333334;
      data_definitions_local_float14 = local_float15 * 10.05 + 4.9500003;
      local_float9 = local_float15 * 2.9999998 + 4.5;
      local_float12 = data_definitions_local_float14 + local_float9;
      local_float9 = local_float12 + local_float9;
      local_float13 = local_float15 * 13.5 + 4.5;
      local_float11 = local_float9 + local_float13;
      local_float13 = local_float13 + local_float11;
      local_float10 = local_float15 * 37.5 + 12.5 + local_float13;
      local_float15 = local_float15 * 45.0 + 15.0 + local_float10;
      *(float *)(system_context + 0x68) = data_definitions_local_float14 * data_definitions_local_float14;
      *(float *)((longlong)system_context + 0x344) = local_float12 * local_float12;
      *(float *)(system_context + 0x69) = local_float9 * local_float9;
      *(float *)((longlong)system_context + 0x34c) = local_float11 * local_float11;
      *(float *)(system_context + 0x6a) = local_float13 * local_float13;
      *(float *)((longlong)system_context + 0x354) = local_float10 * local_float10;
      *(float *)(system_context + 0x6b) = local_float15 * local_float15;
      *(uint32_t *)((longlong)system_context + 0x35c) = 0x7f7fffff;
      *(uint32_t *)((longlong)system_context + 0x33c) = 0;
      *(uint32_t *)(system_context + 0x30) = 0;
      return system_context;
    }
    function_();
  }
  function_();
}
uint64_t function_(uint64_t system_context,ulonglong network_context)
{
  function_();
  if ((network_context & 1) != 0) {
    free(system_context,0x360);
  }
  return system_context;
}
      global_data = 1;
    }
    else {
      local_uint7 = (ulonglong)global_data;
    }
    UNLOCK();
    if (local_bool9) {
      applStackX_8[0] = aplStackX_18;
      aplStackX_18[0] = _global_data;
      if (_global_data != (longlong *)0x0) {
        (**(code **)(*_global_data + 0x28))();
      }
      local_uint7 = function_(data_definitions_local_uint3,aplStackX_18);
    }
  }
  return local_uint7;
}
    global_data = '\0';
    function_(&global_data);
  }
  local_uint2 = *(uint64_t *)(*(longlong *)(*(longlong *)(system_context + 0x8a8) + 0x260) + 0x208);
  local_pointer8 = (uint32_t *)function_(network_context,0,local_uint2);
  uStack_118 = *local_pointer8;
  uStack_114 = local_pointer8[1];
  uStack_110 = local_pointer8[2];
  uStack_10c = local_pointer8[3];
  local_float4 = *(float *)(network_context + 0x400);
  local_float5 = *(float *)(network_context + 0x404);
  local_float6 = *(float *)(network_context + 0x408);
  uStack_fc = *(uint32_t *)(network_context + 0x40c);
  local_float18 = 1e+08;
  local_float13 = 1e+08;
  fStack_180 = 1e+08;
  fStack_158 = 1e+08;
  fStack_154 = 1e+08;
  fStack_150 = 1e+08;
  uStack_14c = 0;
  fStack_148 = -1e+08;
  fStack_144 = -1e+08;
  fStack_140 = -1e+08;
  uStack_13c = 0;
  data_definitions_local_int7 = *(char *)(system_context + 0x858) + -1;
  data_definitions_system_result1 = (longlong)data_definitions_local_int7;
  data_definitions_local_float14 = -1e+08;
  local_float15 = -1e+08;
  local_float16 = -1e+08;
  local_uint17 = 0;
  local_uint19 = 0;
  if (-1 < data_definitions_local_int7) {
    uStack_16c = 0x7f7fffff;
    uStack_15c = 0x7f7fffff;
    data_definitions_system_result2 = data_definitions_system_result1 * 0x30;
    fStack_108 = local_float4;
    fStack_104 = local_float5;
    fStack_100 = local_float6;
    do {
      data_definitions_system_result0 = *(longlong *)(system_context + 0x850) + data_definitions_system_result2;
      local_char1 = *(char *)(data_definitions_system_result0 + 0x2c);
      local_pointer8 = (uint32_t *)function_(network_context,local_char1,local_uint2);
      uStack_e8 = *local_pointer8;
      uStack_e4 = local_pointer8[1];
      uStack_e0 = local_pointer8[2];
      uStack_dc = local_pointer8[3];
      plocal_float9 = (float *)(network_context + ((longlong)local_char1 + 0x40) * 0x10);
      local_float18 = *plocal_float9;
      local_float13 = plocal_float9[1];
      data_definitions_local_float14 = plocal_float9[2];
      fStack_cc = plocal_float9[3];
      fStack_d8 = local_float18;
      fStack_d4 = local_float13;
      fStack_d0 = data_definitions_local_float14;
      plocal_float9 = (float *)function_(&uStack_e8,auStack_c8,data_definitions_system_result0);
      fStack_170 = (data_definitions_local_float14 + plocal_float9[2]) - local_float6;
      fStack_174 = (local_float13 + plocal_float9[1]) - local_float5;
      fStack_178 = (local_float18 + *plocal_float9) - local_float4;
      function_(&uStack_118,&fStack_138,&fStack_178);
      plocal_float9 = (float *)function_(&uStack_e8,auStack_b8,data_definitions_system_result0 + 0x10);
      fStack_160 = (data_definitions_local_float14 + plocal_float9[2]) - local_float6;
      fStack_164 = (local_float13 + plocal_float9[1]) - local_float5;
      fStack_168 = (local_float18 + *plocal_float9) - local_float4;
      function_(&uStack_118,&fStack_128,&fStack_168);
      data_definitions_local_float14 = *(float *)(data_definitions_system_result0 + 0x24);
      local_float18 = fStack_128;
      fStack_198 = fStack_138;
      if (fStack_138 < fStack_128) {
        local_float18 = fStack_138;
        fStack_198 = fStack_128;
      }
      local_float13 = fStack_134;
      fStack_194 = fStack_124;
      if (fStack_134 < fStack_124) {
        local_float13 = fStack_124;
        fStack_194 = fStack_134;
      }
      fStack_190 = fStack_130;
      fStack_180 = fStack_120;
      if (fStack_130 < fStack_120) {
        fStack_190 = fStack_120;
        fStack_180 = fStack_130;
      }
      fStack_190 = fStack_190 + data_definitions_local_float14;
      fStack_194 = fStack_194 + data_definitions_local_float14;
      fStack_198 = fStack_198 + data_definitions_local_float14;
      fStack_180 = fStack_180 - data_definitions_local_float14;
      local_float13 = local_float13 - data_definitions_local_float14;
      local_float18 = local_float18 - data_definitions_local_float14;
      if (fStack_158 < local_float18) {
        local_float18 = fStack_158;
      }
      if (fStack_154 < local_float13) {
        local_float13 = fStack_154;
      }
      if (fStack_150 < fStack_180) {
        fStack_180 = fStack_150;
      }
      fStack_150 = fStack_180;
      uStack_14c = uStack_17c;
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
      uStack_13c = uStack_18c;
      data_definitions_system_result2 = data_definitions_system_result2 + -0x30;
      data_definitions_system_result1 = data_definitions_system_result1 + -1;
      data_definitions_local_float14 = fStack_198;
      local_float15 = fStack_194;
      local_float16 = fStack_190;
      local_uint17 = uStack_18c;
      local_uint19 = uStack_17c;
      fStack_158 = local_float18;
      fStack_154 = local_float13;
    } while (-1 < data_definitions_system_result1);
  }
  *(uint64_t *)(system_context + 0x870) = 0x4cbebc204cbebc20;
  *(uint64_t *)(system_context + 0x878) = 0x7f7fffff4cbebc20;
  *(uint64_t *)(system_context + 0x880) = 0xccbebc20ccbebc20;
  *(uint64_t *)(system_context + 0x888) = 0x7f7fffffccbebc20;
  data_definitions_system_result1 = 0;
  *(uint32_t *)(system_context + 0x8a0) = 0;
  *(uint64_t *)(system_context + 0x890) = 0;
  *(uint64_t *)(system_context + 0x898) = 0x7f7fffff00000000;
  fStack_198 = local_float18;
  if (*(float *)(system_context + 0x870) < local_float18) {
    fStack_198 = *(float *)(system_context + 0x870);
  }
  fStack_194 = local_float13;
  if (*(float *)(system_context + 0x874) < local_float13) {
    fStack_194 = *(float *)(system_context + 0x874);
  }
  fStack_190 = fStack_180;
  if (*(float *)(system_context + 0x878) < fStack_180) {
    fStack_190 = *(float *)(system_context + 0x878);
  }
  *(ulonglong *)(system_context + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(system_context + 0x878) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = local_float18;
  if (local_float18 < *(float *)(system_context + 0x880)) {
    fStack_198 = *(float *)(system_context + 0x880);
  }
  fStack_194 = local_float13;
  if (local_float13 < *(float *)(system_context + 0x884)) {
    fStack_194 = *(float *)(system_context + 0x884);
  }
  fStack_190 = fStack_180;
  if (fStack_180 < *(float *)(system_context + 0x888)) {
    fStack_190 = *(float *)(system_context + 0x888);
  }
  *(ulonglong *)(system_context + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(system_context + 0x888) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = data_definitions_local_float14;
  if (*(float *)(system_context + 0x870) < data_definitions_local_float14) {
    fStack_198 = *(float *)(system_context + 0x870);
  }
  fStack_194 = local_float15;
  if (*(float *)(system_context + 0x874) < local_float15) {
    fStack_194 = *(float *)(system_context + 0x874);
  }
  fStack_190 = local_float16;
  if (*(float *)(system_context + 0x878) < local_float16) {
    fStack_190 = *(float *)(system_context + 0x878);
  }
  *(ulonglong *)(system_context + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(system_context + 0x878) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = data_definitions_local_float14;
  if (data_definitions_local_float14 < *(float *)(system_context + 0x880)) {
    fStack_198 = *(float *)(system_context + 0x880);
  }
  fStack_194 = local_float15;
  if (local_float15 < *(float *)(system_context + 0x884)) {
    fStack_194 = *(float *)(system_context + 0x884);
  }
  fStack_190 = local_float16;
  if (local_float16 < *(float *)(system_context + 0x888)) {
    fStack_190 = *(float *)(system_context + 0x888);
  }
  *(ulonglong *)(system_context + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(system_context + 0x888) = CONCAT44(uStack_18c,fStack_190);
  if (*(longlong *)(system_context + 0x8a8) != 0) {
    data_definitions_system_result1 = *(longlong *)(*(longlong *)(system_context + 0x8a8) + 0x260);
  }
  *(float *)(data_definitions_system_result1 + 0x218) = local_float18;
  *(float *)(data_definitions_system_result1 + 0x21c) = local_float13;
  *(float *)(data_definitions_system_result1 + 0x220) = fStack_180;
  *(uint32_t *)(data_definitions_system_result1 + 0x224) = local_uint19;
  *(float *)(data_definitions_system_result1 + 0x228) = data_definitions_local_float14;
  *(float *)(data_definitions_system_result1 + 0x22c) = local_float15;
  *(float *)(data_definitions_system_result1 + 0x230) = local_float16;
  *(uint32_t *)(data_definitions_system_result1 + 0x234) = local_uint17;
  plocal_float9 = *(float **)(system_context + 0x860);
  if ((plocal_float9 != (float *)0x0) && (*(longlong *)(system_context + 0x868) != 0)) {
    if ((plocal_float9[4] <= data_definitions_local_float14 && data_definitions_local_float14 != plocal_float9[4]) ||
       ((plocal_float9[5] <= local_float15 && local_float15 != plocal_float9[5] || (plocal_float9[6] <= local_float16 && local_float16 != plocal_float9[6]))
       )) {
      do {
      } while (global_data != '\0');
      LOCK();
      UNLOCK();
      plocal_float3 = *(float **)(system_context + 0x860);
      fStack_198 = data_definitions_local_float14;
      if (*plocal_float3 < data_definitions_local_float14) {
        fStack_198 = *plocal_float3;
      }
      fStack_194 = local_float15;
      if (plocal_float3[1] < local_float15) {
        fStack_194 = plocal_float3[1];
      }
      fStack_190 = local_float16;
      if (plocal_float3[2] < local_float16) {
        fStack_190 = plocal_float3[2];
      }
      *(ulonglong *)plocal_float3 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(plocal_float3 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = data_definitions_local_float14;
      if (data_definitions_local_float14 < plocal_float3[4]) {
        fStack_198 = plocal_float3[4];
      }
      fStack_194 = local_float15;
      if (local_float15 < plocal_float3[5]) {
        fStack_194 = plocal_float3[5];
      }
      fStack_190 = local_float16;
      if (local_float16 < plocal_float3[6]) {
        fStack_190 = plocal_float3[6];
      }
      *(ulonglong *)(plocal_float3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(plocal_float3 + 6) = CONCAT44(uStack_18c,fStack_190);
      global_data = '\0';
    }
    if (((local_float18 < *plocal_float9) || (local_float13 < plocal_float9[1])) || (fStack_180 < plocal_float9[2])) {
      do {
      } while (global_data != '\0');
      LOCK();
      UNLOCK();
      plocal_float9 = *(float **)(system_context + 0x860);
      fStack_198 = local_float18;
      if (*plocal_float9 < local_float18) {
        fStack_198 = *plocal_float9;
      }
      fStack_194 = local_float13;
      if (plocal_float9[1] < local_float13) {
        fStack_194 = plocal_float9[1];
      }
      fStack_190 = fStack_180;
      if (plocal_float9[2] < fStack_180) {
        fStack_190 = plocal_float9[2];
      }
      *(ulonglong *)plocal_float9 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(plocal_float9 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = local_float18;
      if (local_float18 < plocal_float9[4]) {
        fStack_198 = plocal_float9[4];
      }
      fStack_194 = local_float13;
      if (local_float13 < plocal_float9[5]) {
        fStack_194 = plocal_float9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < plocal_float9[6]) {
        fStack_190 = plocal_float9[6];
      }
      *(ulonglong *)(plocal_float9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(plocal_float9 + 6) = CONCAT44(uStack_18c,fStack_190);
      global_data = '\0';
    }
    plocal_float9 = *(float **)(system_context + 0x868);
    if (((plocal_float9[4] <= data_definitions_local_float14 && data_definitions_local_float14 != plocal_float9[4]) ||
        (plocal_float9[5] <= local_float15 && local_float15 != plocal_float9[5])) ||
       (plocal_float9[6] <= local_float16 && local_float16 != plocal_float9[6])) {
      do {
      } while (global_data != '\0');
      LOCK();
      UNLOCK();
      plocal_float3 = *(float **)(system_context + 0x868);
      fStack_198 = data_definitions_local_float14;
      if (*plocal_float3 < data_definitions_local_float14) {
        fStack_198 = *plocal_float3;
      }
      fStack_194 = local_float15;
      if (plocal_float3[1] < local_float15) {
        fStack_194 = plocal_float3[1];
      }
      fStack_190 = local_float16;
      if (plocal_float3[2] < local_float16) {
        fStack_190 = plocal_float3[2];
      }
      *(ulonglong *)plocal_float3 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(plocal_float3 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = data_definitions_local_float14;
      if (data_definitions_local_float14 < plocal_float3[4]) {
        fStack_198 = plocal_float3[4];
      }
      fStack_194 = local_float15;
      if (local_float15 < plocal_float3[5]) {
        fStack_194 = plocal_float3[5];
      }
      fStack_190 = local_float16;
      if (local_float16 < plocal_float3[6]) {
        fStack_190 = plocal_float3[6];
      }
      *(ulonglong *)(plocal_float3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(plocal_float3 + 6) = CONCAT44(uStack_18c,fStack_190);
      global_data = '\0';
    }
    if (((local_float18 < *plocal_float9) || (local_float13 < plocal_float9[1])) || (fStack_180 < plocal_float9[2])) {
      do {
      } while (global_data != '\0');
      LOCK();
      UNLOCK();
      plocal_float9 = *(float **)(system_context + 0x868);
      fStack_198 = local_float18;
      if (*plocal_float9 < local_float18) {
        fStack_198 = *plocal_float9;
      }
      fStack_194 = local_float13;
      if (plocal_float9[1] < local_float13) {
        fStack_194 = plocal_float9[1];
      }
      fStack_190 = fStack_180;
      if (plocal_float9[2] < fStack_180) {
        fStack_190 = plocal_float9[2];
      }
      *(ulonglong *)plocal_float9 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(plocal_float9 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = local_float18;
      if (local_float18 < plocal_float9[4]) {
        fStack_198 = plocal_float9[4];
      }
      fStack_194 = local_float13;
      if (local_float13 < plocal_float9[5]) {
        fStack_194 = plocal_float9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < plocal_float9[6]) {
        fStack_190 = plocal_float9[6];
      }
      *(ulonglong *)(plocal_float9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(plocal_float9 + 6) = CONCAT44(uStack_18c,fStack_190);
      global_data = '\0';
    }
  }
  return;
}
        global_data = 0;
        _global_data = 8;
        strcpy_s(&global_data,0x40,&unknown_data);
        function_(function_);
        function_(&global_data);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(_global_data,&global_data);
    return;
  }
  if (-1 < system_context) {
    if (system_context < (int)((_global_data - _global_data) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(_global_data,(longlong)system_context * 0x68 + _global_data);
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _global_data) {
    function_(&global_data);
    if (_global_data == -1) {
      _global_data = &unknown_data;
      _global_data = &global_data;
      global_data = 0;
      _global_data = 0;
      strcpy_s(&global_data,0x40,&global_data);
      function_(function_);
      function_(&global_data);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(_global_data,&global_data);
  return;
}
int function_(uint64_t system_context,uint64_t network_context,uint64_t thread_context,uint64_t memory_context)
{
  int local_int1;
  longlong local_long2;
  longlong local_long3;
  void *data_definitions_local_pointer4;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  function_(&puStack_30,system_context,thread_context,memory_context,0xfffffffffffffffe);
  local_long3 = lStack_28;
  if (iStack_20 == 0x10) {
    local_int1 = strcmp(lStack_28,&unknown_data);
    if (local_int1 == 0) goto label_;
    local_int1 = strcmp(local_long3,&unknown_data);
    if (local_int1 == 0) {
      local_int1 = 100;
      goto label_;
    }
    data_definitions_local_pointer4 = &unknown_data;
label_:
    local_int1 = strcmp(local_long3,data_definitions_local_pointer4);
    if (local_int1 != 0) {
label_:
      local_int1 = 0;
      goto label_;
    }
  }
  else {
    if (iStack_20 == 0x15) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x30;
        goto label_;
      }
label_:
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0xb0;
        goto label_;
      }
label_:
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0xd4;
        goto label_;
      }
label_:
      data_definitions_local_pointer4 = &unknown_data;
      goto label_;
    }
    if (iStack_20 == 0x1b) {
      data_definitions_local_pointer4 = &unknown_data;
      goto label_;
    }
    if (iStack_20 == 0xd) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 4;
        goto label_;
      }
label_:
      data_definitions_local_pointer4 = &unknown_data;
      goto label_;
    }
    if (iStack_20 == 0x1a) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x1c;
        goto label_;
      }
label_:
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x18;
        goto label_;
      }
label_:
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x554;
        goto label_;
      }
      goto label_;
    }
    if (iStack_20 == 0x20) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x30;
        goto label_;
      }
      goto label_;
    }
    if (iStack_20 == 0x24) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x12;
        goto label_;
      }
      goto label_;
    }
    if (iStack_20 == 0x15) goto label_;
    if (iStack_20 == 0x1f) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x48;
        goto label_;
      }
label_:
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 1;
        goto label_;
      }
      goto label_;
    }
    if (iStack_20 == 10) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 8;
        goto label_;
      }
label_:
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 4;
        goto label_;
      }
label_:
      data_definitions_local_pointer4 = &unknown_data;
      goto label_;
    }
    if (iStack_20 == 0x15) goto label_;
    if (iStack_20 == 0x16) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x14;
        goto label_;
      }
label_:
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x568;
        goto label_;
      }
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x10;
        goto label_;
      }
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x28;
        goto label_;
      }
      local_int1 = strcmp(local_long3,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x40;
        goto label_;
      }
      goto label_;
    }
    if (iStack_20 == 4) {
      local_long3 = 0;
      do {
        local_long2 = local_long3 + 1;
        if (*(char *)(lStack_28 + local_long3) != (&unknown_data)[local_long3]) goto label_;
        local_long3 = local_long2;
      } while (local_long2 != 5);
      local_int1 = 200;
      goto label_;
    }
    if (iStack_20 == 10) goto label_;
    if (iStack_20 == 0x12) {
      local_int1 = strcmp(lStack_28,&unknown_data);
      if (local_int1 == 0) {
        local_int1 = 0x58;
        goto label_;
      }
      goto label_;
    }
    if (iStack_20 != 0x13) {
      if (iStack_20 == 0x17) {
        local_int1 = strcmp(lStack_28,&unknown_data);
        if (local_int1 == 0) {
          local_int1 = 1;
          goto label_;
        }
label_:
        data_definitions_local_pointer4 = &unknown_data;
label_:
        local_int1 = strcmp(local_long3,data_definitions_local_pointer4);
        if (local_int1 == 0) {
label_:
          local_int1 = 0xc;
          goto label_;
        }
      }
      else {
        if (iStack_20 == 0x15) goto label_;
        if (iStack_20 == 0x26) {
          local_int1 = strcmp(lStack_28,&unknown_data);
          if (local_int1 == 0) {
            local_int1 = 0xa8;
            goto label_;
          }
        }
        else if (iStack_20 == 0x34) {
          local_int1 = strcmp(lStack_28,&unknown_data);
          if (local_int1 == 0) {
            local_int1 = 0x14;
            goto label_;
          }
        }
        else {
          if (iStack_20 != 0xf) {
            if (iStack_20 == 0x16) goto label_;
            if (iStack_20 == 0x18) {
              local_int1 = strcmp(lStack_28,&unknown_data);
              if ((local_int1 == 0) || (local_int1 = strcmp(local_long3,&unknown_data), local_int1 == 0))
              goto label_;
              local_int1 = strcmp(local_long3,&unknown_data);
              if (local_int1 != 0) {
                data_definitions_local_pointer4 = &unknown_data;
                goto label_;
              }
              goto label_;
            }
            if (iStack_20 == 7) {
              local_long3 = 0;
              do {
                local_long2 = local_long3;
                if (*(char *)(lStack_28 + local_long2) != (&unknown_data)[local_long2]) goto label_;
                local_long3 = local_long2 + 1;
              } while (local_long2 + 1 != 8);
              local_int1 = (int)local_long2 + -6;
              goto label_;
            }
            if (iStack_20 == 0xc) {
              local_int1 = strcmp(lStack_28,&unknown_data);
              if (local_int1 == 0) {
                local_int1 = 0x68;
                goto label_;
              }
label_:
              local_int1 = strcmp(local_long3,&unknown_data);
              if (local_int1 == 0) {
                local_int1 = 4;
                goto label_;
              }
              local_int1 = strcmp(local_long3,&unknown_data);
              if (local_int1 == 0) {
                local_int1 = 8;
                goto label_;
              }
              goto label_;
            }
            if (iStack_20 == 0x1a) goto label_;
            if (iStack_20 == 3) {
              local_int1 = 4;
              local_long3 = 0;
              do {
                local_long2 = local_long3 + 1;
                if (*(char *)(lStack_28 + local_long3) != (&unknown_data)[local_long3]) goto label_;
                local_long3 = local_long2;
              } while (local_long2 != 4);
              goto label_;
            }
            if (iStack_20 == 0xf) goto label_;
            if (iStack_20 == 0x23) {
              local_int1 = strcmp(lStack_28,&unknown_data);
              if (local_int1 == 0) {
                local_int1 = 0x28;
                goto label_;
              }
label_:
              local_int1 = strcmp(local_long3,&unknown_data);
              if (local_int1 == 0) {
                local_int1 = 0x18;
                goto label_;
              }
              goto label_;
            }
            if (iStack_20 == 0x1f) goto label_;
            if (iStack_20 == 0xd) goto label_;
            if (iStack_20 == 0x21) {
              data_definitions_local_pointer4 = &unknown_data;
              goto label_;
            }
            if (iStack_20 == 0x23) goto label_;
            if (iStack_20 == 0xf) goto label_;
            if (iStack_20 == 0xb) {
              local_int1 = strcmp(lStack_28,&unknown_data);
              if (local_int1 == 0) {
                local_int1 = 0x248;
                goto label_;
              }
label_:
              local_int1 = strcmp(local_long3,&unknown_data);
              if (local_int1 == 0) {
                local_int1 = 4;
                goto label_;
              }
label_:
              local_int1 = strcmp(local_long3,&unknown_data);
              if (local_int1 == 0) {
                local_int1 = 4;
                goto label_;
              }
            }
            else {
              if (iStack_20 == 0x11) {
                local_int1 = strcmp(lStack_28,&unknown_data);
                if (local_int1 == 0) goto label_;
                local_int1 = strcmp(local_long3,&unknown_data);
                if (local_int1 == 0) {
                  local_int1 = 0xa0;
                  goto label_;
                }
                data_definitions_local_pointer4 = &unknown_data;
                goto label_;
              }
              if (iStack_20 == 0xb) goto label_;
              if (iStack_20 == 0xf) goto label_;
              if (iStack_20 == 0xb) goto label_;
              if (iStack_20 == 0x17) goto label_;
              if (iStack_20 == 10) goto label_;
              if (iStack_20 == 0x1a) goto label_;
              if (iStack_20 != 0xb) {
                if (iStack_20 == 0xc) goto label_;
                if (iStack_20 != 0x19) goto label_;
                data_definitions_local_pointer4 = &unknown_data;
                goto label_;
              }
            }
            data_definitions_local_pointer4 = &unknown_data;
            goto label_;
          }
          local_int1 = strcmp(lStack_28,&unknown_data);
          if (local_int1 == 0) {
            local_int1 = 0x214;
            goto label_;
          }
label_:
          local_int1 = strcmp(local_long3,&unknown_data);
          if (local_int1 == 0) {
            local_int1 = 0x2028;
            goto label_;
          }
label_:
          local_int1 = strcmp(local_long3,&unknown_data);
          if (local_int1 == 0) {
            local_int1 = 4;
            goto label_;
          }
label_:
          local_int1 = strcmp(local_long3,&unknown_data);
          if (local_int1 == 0) {
            local_int1 = 0x50;
            goto label_;
          }
        }
      }
      goto label_;
    }
    local_int1 = strcmp(lStack_28,&unknown_data);
    if (local_int1 == 0) {
      local_int1 = 1;
      goto label_;
    }
    local_int1 = strcmp(local_long3,&unknown_data);
    if (local_int1 == 0) {
      local_int1 = 3;
      goto label_;
    }
    local_int1 = strcmp(local_long3,&unknown_data);
    if (local_int1 != 0) {
      data_definitions_local_pointer4 = &unknown_data;
      goto label_;
    }
  }
label_:
  local_int1 = 4;
label_:
  puStack_30 = &unknown_data;
  if (lStack_28 == 0) {
    return local_int1;
  }
  function_();
}
uint64_t
function_(uint64_t system_context,uint64_t network_context,uint8_t thread_context,uint64_t memory_context)
{
  char local_char1;
  void *local_pointer2;
  uint64_t data_definitions_local_uint3;
  uint8_t auStack_50 [32];
  uint8_t auStack_30 [40];
  function_(auStack_30,system_context,thread_context,memory_context,0xfffffffffffffffe);
  function_(auStack_50,network_context);
  local_char1 = function_(auStack_30,&unknown_data,1);
  if (local_char1 == '\0') {
    local_char1 = function_(auStack_30,&unknown_data,1);
    if (local_char1 == '\0') {
      local_char1 = function_(auStack_30,&unknown_data,1);
      if (local_char1 == '\0') {
        local_char1 = function_(auStack_30,&unknown_data,1);
        if (local_char1 == '\0') {
          local_char1 = function_(auStack_30,&unknown_data,1);
          if (local_char1 == '\0') {
            local_char1 = function_(auStack_30,&unknown_data,1);
            if (local_char1 == '\0') {
              local_char1 = function_(auStack_30,&unknown_data,1);
              if (local_char1 == '\0') {
                local_char1 = function_(auStack_30,&unknown_data,1);
                if (local_char1 == '\0') {
                  local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                  if (local_char1 == '\0') {
                    local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                    if (local_char1 == '\0') {
                      local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                      if (local_char1 == '\0') {
                        local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                        if (local_char1 == '\0') {
                          local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                          if (local_char1 == '\0') {
                            local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                            if (local_char1 == '\0') {
                              local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                              if (local_char1 == '\0') {
                                local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                                if (local_char1 == '\0') {
                                  local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                                  if (local_char1 == '\0') {
                                    local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                                    if (local_char1 == '\0') {
                                      local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                                      if (local_char1 == '\0') {
                                        local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                                        if (local_char1 == '\0') {
                                          local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                                          if (local_char1 == '\0') {
                                            local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data);
                                            if (local_char1 == '\0') {
                                              local_char1 = func_0x0001800a1eb0(auStack_30,&unknown_data)
                                              ;
                                              if (local_char1 == '\0') {
                                                local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                            &unknown_data);
                                                if (local_char1 == '\0') {
                                                  local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                              &unknown_data);
                                                  if (local_char1 == '\0') {
                                                    local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                                &unknown_data);
                                                    if (local_char1 == '\0') {
                                                      local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &unknown_data);
                                                      if (local_char1 == '\0') {
                                                        local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                                    &unknown_data);
                                                        if (local_char1 == '\0') {
                                                          local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                                      &unknown_data
                                                                                     );
                                                          if (local_char1 == '\0') {
                                                            local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                                        &
                                                  unknown_data);
                                                  if (local_char1 == '\0') {
                                                    local_char1 = func_0x0001800a1eb0(auStack_30,
                                                                                &unknown_data);
                                                    if (local_char1 != '\0') {
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 == '\0') {
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') goto label_;
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') goto label_;
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') goto label_;
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &global_data);
                                                        if (local_char1 != '\0') goto label_;
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') goto label_;
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') goto label_;
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') goto label_;
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x21c;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x41c;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x41d;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x420;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x424;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x428;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x430;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x438;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x439;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x43c;
                                                          goto label_;
                                                        }
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') {
                                                          data_definitions_local_uint3 = 0x440;
                                                          goto label_;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 == '\0') {
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 == '\0') {
                                                        local_pointer2 = &unknown_data;
                                                        goto label_;
                                                      }
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 == '\0') {
                                                      local_pointer2 = &unknown_data;
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 == '\0') {
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 100;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
label_:
                                                        data_definitions_local_uint3 = 0x6c;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x74;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x84;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x96;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 == '\0') {
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') goto label_;
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0xf8;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0xfc;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x100;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x110;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x114;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x118;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x11c;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x11e;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x120;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x130;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x170;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x174;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x178;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x188;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x198;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x19c;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x1a0;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x220;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x230;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x234;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x238;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x23c;
                                                        goto label_;
                                                      }
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 0x240;
                                                        goto label_;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 == '\0') {
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 != '\0') {
                                                        data_definitions_local_uint3 = 4;
                                                        goto label_;
                                                      }
                                                      goto label_;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 == '\0') {
                                                      local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_data);
                                                      if (local_char1 == '\0') {
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 != '\0') goto label_;
                                                        local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_data);
                                                        if (local_char1 == '\0') {
                                                          local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &unknown_data
                                                                                     );
                                                          if (local_char1 != '\0') goto label_;
                                                          local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &unknown_data
                                                                                     );
                                                          if (local_char1 == '\0') {
                                                            local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                        &
                                                  unknown_data);
                                                  if (local_char1 != '\0') goto label_;
                                                  local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_data);
                                                  if (local_char1 != '\0') goto label_;
                                                  local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                              &global_data);
                                                  if (local_char1 != '\0') goto label_;
                                                  local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_data);
                                                  if (local_char1 == '\0') {
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 != '\0') goto label_;
                                                    local_pointer2 = &unknown_data;
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
                                                  local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_data);
                                                  if (local_char1 == '\0') {
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 != '\0') goto label_;
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 != '\0') {
label_:
                                                      data_definitions_local_uint3 = 0xc;
                                                      goto label_;
                                                    }
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 != '\0') {
label_:
                                                      data_definitions_local_uint3 = 0x14;
                                                      goto label_;
                                                    }
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_data);
                                                    if (local_char1 != '\0') {
label_:
                                                      data_definitions_local_uint3 = 0x1c;
                                                      goto label_;
                                                    }
                                                    local_pointer2 = &unknown_data;
label_:
                                                    local_char1 = func_0x0001800a1eb0(auStack_50,local_pointer2);
                                                    if (local_char1 != '\0') goto label_;
                                                  }
                                                }
                                              }
                                              else {
                                                local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                            &unknown_data);
                                                if (local_char1 == '\0') {
                                                  local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_data);
                                                  if (local_char1 != '\0') {
                                                    data_definitions_local_uint3 = 0x2000;
                                                    goto label_;
                                                  }
                                                  local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_data);
                                                  if (local_char1 != '\0') {
                                                    data_definitions_local_uint3 = 0x2010;
                                                    goto label_;
                                                  }
                                                  local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_data);
                                                  if (local_char1 != '\0') {
                                                    data_definitions_local_uint3 = 0x2020;
                                                    goto label_;
                                                  }
                                                  local_char1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_data);
                                                  if (local_char1 != '\0') {
                                                    data_definitions_local_uint3 = 0x2024;
                                                    goto label_;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
label_:
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 == '\0') {
                                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data)
                                              ;
                                              if (local_char1 == '\0') {
                                                local_pointer2 = &unknown_data;
                                                goto label_;
                                              }
                                              goto label_;
                                            }
                                          }
                                        }
                                        else {
                                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                          if (local_char1 == '\0') {
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') goto label_;
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') goto label_;
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') {
label_:
                                              data_definitions_local_uint3 = 0x24;
                                              goto label_;
                                            }
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') goto label_;
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') {
label_:
                                              data_definitions_local_uint3 = 0x2c;
                                              goto label_;
                                            }
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') goto label_;
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') {
label_:
                                              data_definitions_local_uint3 = 0x34;
                                              goto label_;
                                            }
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') goto label_;
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') {
label_:
                                              data_definitions_local_uint3 = 0x3c;
                                              goto label_;
                                            }
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') {
label_:
                                              data_definitions_local_uint3 = 0x50;
                                              goto label_;
                                            }
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') goto label_;
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') {
label_:
                                              data_definitions_local_uint3 = 0x5c;
                                              goto label_;
                                            }
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') {
label_:
                                              data_definitions_local_uint3 = 0x60;
                                              goto label_;
                                            }
                                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                            if (local_char1 != '\0') {
                                              data_definitions_local_uint3 = 0x61;
                                              goto label_;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                        if (local_char1 == '\0') {
                                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                          if (local_char1 == '\0') {
label_:
                                            local_pointer2 = &unknown_data;
                                            goto label_;
                                          }
                                          goto label_;
                                        }
                                      }
                                    }
                                    else {
                                      local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                      if (local_char1 == '\0') {
                                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                        if (local_char1 != '\0') goto label_;
                                        local_pointer2 = &unknown_data;
label_:
                                        local_char1 = func_0x0001800a1eb0(auStack_50,local_pointer2);
                                        if (local_char1 != '\0') goto label_;
                                      }
                                    }
                                  }
                                  else {
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 == '\0') {
                                      local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                      if (local_char1 != '\0') goto label_;
                                      local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                      if (local_char1 != '\0') goto label_;
                                      local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                      if (local_char1 != '\0') goto label_;
                                    }
                                  }
                                }
                                else {
                                  local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                  if (local_char1 == '\0') {
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') goto label_;
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x53c;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x540;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x544;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x548;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x54c;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x550;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x554;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x558;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x55c;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x560;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x564;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x565;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x566;
                                      goto label_;
                                    }
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 != '\0') {
                                      data_definitions_local_uint3 = 0x567;
                                      goto label_;
                                    }
                                  }
                                }
                              }
                              else {
                                local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                if (local_char1 == '\0') {
                                  local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                  if (local_char1 != '\0') goto label_;
                                  local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                  if (local_char1 != '\0') goto label_;
                                  local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                  if (local_char1 != '\0') goto label_;
                                  local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                  if (local_char1 != '\0') goto label_;
                                  local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                  if (local_char1 != '\0') goto label_;
                                }
                              }
                            }
                            else {
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 == '\0') {
                                local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                if (local_char1 == '\0') {
                                  local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                  if (local_char1 == '\0') {
                                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                                    if (local_char1 == '\0') {
                                      local_pointer2 = &unknown_data;
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
                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                            if (local_char1 == '\0') {
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') {
label_:
                                data_definitions_local_uint3 = 4;
                                goto label_;
                              }
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') {
label_:
                                data_definitions_local_uint3 = 0x70;
                                goto label_;
                              }
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') {
label_:
                                data_definitions_local_uint3 = 0x80;
                                goto label_;
                              }
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                              local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                              if (local_char1 != '\0') goto label_;
                            }
                          }
                        }
                        else {
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 == '\0') {
                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                            if (local_char1 != '\0') goto label_;
                            local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                            if (local_char1 != '\0') goto label_;
                          }
                        }
                      }
                      else {
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 == '\0') {
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') goto label_;
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') goto label_;
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') goto label_;
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') {
label_:
                            data_definitions_local_uint3 = 0x38;
                            goto label_;
                          }
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') {
label_:
                            data_definitions_local_uint3 = 0x40;
                            goto label_;
                          }
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') {
label_:
                            data_definitions_local_uint3 = 0x44;
                            goto label_;
                          }
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') {
label_:
                            data_definitions_local_uint3 = 0x48;
                            goto label_;
                          }
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') {
label_:
                            data_definitions_local_uint3 = 0x4c;
                            goto label_;
                          }
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') goto label_;
                          local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                          if (local_char1 != '\0') {
                            data_definitions_local_uint3 = 0x51;
                            goto label_;
                          }
                        }
                      }
                    }
                    else {
                      local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                      if (local_char1 == '\0') {
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x58;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x68;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x78;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x88;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x8c;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x90;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x94;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x98;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0x9c;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0xa0;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0xa4;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0xa8;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0xac;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0xb0;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
                          data_definitions_local_uint3 = 0xb4;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
                          data_definitions_local_uint3 = 0xb5;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0xb8;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0xbc;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
                          data_definitions_local_uint3 = 0xbd;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
                          data_definitions_local_uint3 = 0xbe;
                          goto label_;
                        }
                        local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                        if (local_char1 != '\0') {
label_:
                          data_definitions_local_uint3 = 0xc0;
                          goto label_;
                        }
                      }
                    }
                  }
                  else {
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 == '\0') {
                      local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                      if (local_char1 != '\0') goto label_;
                      local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                      if (local_char1 != '\0') goto label_;
                      local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                      if (local_char1 != '\0') goto label_;
                      local_pointer2 = &unknown_data;
label_:
                      local_char1 = func_0x0001800a1eb0(auStack_50,local_pointer2);
                      if (local_char1 != '\0') goto label_;
                    }
                  }
                }
                else {
                  local_char1 = function_(auStack_50,&unknown_data,1);
                  if (local_char1 == '\0') {
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
label_:
                      data_definitions_local_uint3 = 1;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
label_:
                      data_definitions_local_uint3 = 2;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 3;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 5;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 6;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 0x1d;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 0x1e;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
label_:
                      data_definitions_local_uint3 = 0x7c;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') goto label_;
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 0xc4;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 200;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 0xcc;
                      goto label_;
                    }
                    local_char1 = func_0x0001800a1eb0(auStack_50,&unknown_data);
                    if (local_char1 != '\0') {
                      data_definitions_local_uint3 = 0xd0;
                      goto label_;
                    }
                  }
                }
              }
              else {
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 == '\0') {
                  local_char1 = function_(auStack_50,&unknown_data,1);
                  if (local_char1 != '\0') {
label_:
                    data_definitions_local_uint3 = 0x10;
                    goto label_;
                  }
                  local_char1 = function_(auStack_50,&unknown_data,1);
                  if (local_char1 != '\0') {
label_:
                    data_definitions_local_uint3 = 0x20;
                    goto label_;
                  }
                  local_char1 = function_(auStack_50,&unknown_data,1);
                  if (local_char1 != '\0') goto label_;
                  local_char1 = function_(auStack_50,&unknown_data,1);
                  if (local_char1 != '\0') {
label_:
                    data_definitions_local_uint3 = 0x30;
                    goto label_;
                  }
                  local_char1 = function_(auStack_50,&unknown_data,1);
                  if (local_char1 != '\0') {
                    data_definitions_local_uint3 = 0x31;
                    goto label_;
                  }
                  local_char1 = function_(auStack_50,&unknown_data,1);
                  if (local_char1 != '\0') {
                    data_definitions_local_uint3 = 0x32;
                    goto label_;
                  }
                }
              }
            }
            else {
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 == '\0') {
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') goto label_;
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') goto label_;
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') goto label_;
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') goto label_;
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') goto label_;
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') goto label_;
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') {
label_:
                  data_definitions_local_uint3 = 0x19;
                  goto label_;
                }
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') {
                  data_definitions_local_uint3 = 0x35;
                  goto label_;
                }
                local_char1 = function_(auStack_50,&unknown_data,1);
                if (local_char1 != '\0') goto label_;
              }
            }
          }
          else {
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 == '\0') {
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') {
label_:
                data_definitions_local_uint3 = 7;
                goto label_;
              }
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') goto label_;
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') goto label_;
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') {
label_:
                data_definitions_local_uint3 = 10;
                goto label_;
              }
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') goto label_;
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') goto label_;
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') {
                data_definitions_local_uint3 = 0xd;
                goto label_;
              }
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') {
                data_definitions_local_uint3 = 0xe;
                goto label_;
              }
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') {
                data_definitions_local_uint3 = 0xf;
                goto label_;
              }
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') goto label_;
              local_char1 = function_(auStack_50,&unknown_data,1);
              if (local_char1 != '\0') goto label_;
            }
          }
        }
        else {
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 == '\0') {
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') goto label_;
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
label_:
              data_definitions_local_uint3 = 9;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') goto label_;
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') goto label_;
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
label_:
              data_definitions_local_uint3 = 0x17;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') goto label_;
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') goto label_;
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x21;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x22;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x23;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') goto label_;
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x25;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x26;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x27;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') goto label_;
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x29;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x2a;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x2b;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') goto label_;
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x2d;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x2e;
              goto label_;
            }
            local_char1 = function_(auStack_50,&unknown_data,1);
            if (local_char1 != '\0') {
              data_definitions_local_uint3 = 0x2f;
              goto label_;
            }
          }
        }
      }
      else {
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 == '\0') {
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') {
label_:
            data_definitions_local_uint3 = 0xb;
            goto label_;
          }
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') goto label_;
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') goto label_;
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') {
label_:
            data_definitions_local_uint3 = 0x11;
            goto label_;
          }
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') {
            data_definitions_local_uint3 = 0x12;
            goto label_;
          }
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') {
            data_definitions_local_uint3 = 0x13;
            goto label_;
          }
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') goto label_;
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') {
            data_definitions_local_uint3 = 0x15;
            goto label_;
          }
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') {
            data_definitions_local_uint3 = 0x16;
            goto label_;
          }
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') goto label_;
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') goto label_;
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') goto label_;
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') {
label_:
            data_definitions_local_uint3 = 0x1a;
            goto label_;
          }
          local_char1 = function_(auStack_50,&unknown_data,1);
          if (local_char1 != '\0') {
            data_definitions_local_uint3 = 0x1b;
            goto label_;
          }
        }
      }
    }
    else {
      local_char1 = function_(auStack_50,&unknown_data,1);
      if (local_char1 == '\0') {
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') {
          data_definitions_local_uint3 = 0x54;
          goto label_;
        }
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
        local_char1 = function_(auStack_50,&unknown_data,1);
        if (local_char1 != '\0') goto label_;
      }
    }
  }
  else {
    local_char1 = function_(auStack_50,&unknown_data,1);
    if (local_char1 == '\0') {
      local_char1 = function_(auStack_50,&unknown_data,1);
      if (local_char1 != '\0') {
label_:
        data_definitions_local_uint3 = 8;
        goto label_;
      }
      local_char1 = function_(auStack_50,&unknown_data,1);
      if (local_char1 != '\0') goto label_;
      local_char1 = function_(auStack_50,&unknown_data,1);
      if (local_char1 != '\0') {
label_:
        data_definitions_local_uint3 = 0x18;
        goto label_;
      }
      local_char1 = function_(auStack_50,&unknown_data,1);
      if (local_char1 != '\0') goto label_;
      local_char1 = function_(auStack_50,&unknown_data,1);
      if (local_char1 != '\0') {
label_:
        data_definitions_local_uint3 = 0x28;
        goto label_;
      }
    }
  }
  data_definitions_local_uint3 = 0;
label_:
  function_(auStack_50);
  function_(auStack_30);
  return data_definitions_local_uint3;
}
  global_data = 0;
  function_(function_);
  function_(&unknown_data);
  local_long4 = 0;
  _global_data = function_;
  local_pointer2 = (uint32_t *)&global_data;
  local_long3 = 0x16;
  do {
    if (local_pointer2[1] == 0) {
      function_(local_pointer2);
    }
    if (local_long4 != 2) {
      function_(&unknown_data,*(uint64_t *)(local_pointer2 + 4),*local_pointer2);
    }
    local_long4 = local_long4 + 1;
    local_pointer2 = local_pointer2 + 6;
    local_long3 = local_long3 + -1;
  } while (local_long3 != 0);
  if (_global_data == 0) {
    function_(&global_data);
  }
  _global_data = (longlong)_global_data;
  if (_global_data == 0) {
    function_(&global_data);
  }
  _global_data = (longlong)_global_data;
  function_();
  if (global_data != '\0') {
    function_(&unknown_data);
  }
  return;
}
double function_(void)
{
  longlong data_definitions_system_result;
  longlong alStackX_8 [4];
  data_definitions_system_result = _global_data;
  if (_global_data == 0) {
    QueryPerformanceCounter(alStackX_8);
    data_definitions_system_result = alStackX_8[0];
  }
  return (double)(data_definitions_system_result - _global_data) * _global_data;
}
bool function_(longlong system_context,longlong network_context,char thread_context)
{
  char local_char1;
  char local_char2;
  int local_int3;
  longlong local_long4;
  char *plocal_char5;
  local_long4 = -1;
  do {
    local_long4 = local_long4 + 1;
  } while (*(char *)(network_context + local_long4) != '\0');
  local_int3 = *(int *)(system_context + 0x10);
  if (local_int3 == (int)local_long4) {
    if (local_int3 != 0) {
      plocal_char5 = *(char **)(system_context + 8);
      if (thread_context == '\0') {
        local_int3 = _stricmp(plocal_char5,network_context);
        return local_int3 == 0;
      }
      network_context = network_context - (longlong)plocal_char5;
      do {
        local_char1 = *plocal_char5;
        local_char2 = plocal_char5[network_context];
        if (local_char1 != local_char2) break;
        plocal_char5 = plocal_char5 + 1;
      } while (local_char2 != '\0');
      return local_char1 == local_char2;
    }
  }
  else if (local_int3 != 0) {
    return false;
  }
  if ((int)local_long4 != 0) {
    return false;
  }
  return true;
}
int function_(longlong system_context)
{
  int local_int1;
  longlong local_long2;
  int local_int3;
  ulonglong local_uint4;
  longlong local_long5;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  function_(&puStack_30);
  local_int1 = (*(int *)(system_context + 0x10) - iStack_20) + 1;
  local_int3 = 0;
  if (0 < local_int1) {
    local_long5 = 0;
    do {
      local_uint4 = 0;
      local_long2 = 0;
      if (0 < iStack_20) {
        do {
          if (*(char *)(*(longlong *)(system_context + 8) + local_long5 + local_long2) != *(char *)(local_uint4 + lStack_28))
          break;
          local_uint4 = (ulonglong)((int)local_uint4 + 1);
          local_long2 = local_long2 + 1;
        } while (local_long2 < iStack_20);
      }
      if ((int)local_uint4 == iStack_20) goto label_;
      local_int3 = local_int3 + 1;
      local_long5 = local_long5 + 1;
    } while (local_long5 < local_int1);
  }
  local_int3 = -1;
label_:
  puStack_30 = &unknown_data;
  if (lStack_28 != 0) {
    function_();
  }
  return local_int3;
}
int function_(longlong system_context,longlong network_context)
{
  int local_int1;
  longlong local_long2;
  int local_int3;
  longlong local_long4;
  ulonglong data_definitions_local_uint5;
  local_int1 = *(int *)(network_context + 0x10);
  local_int3 = *(int *)(system_context + 0x10) - local_int1;
  if (-1 < local_int3) {
    local_long4 = (longlong)local_int3;
    do {
      data_definitions_local_uint5 = 0;
      local_long2 = 0;
      if (0 < local_int1) {
        do {
          if (*(char *)(*(longlong *)(system_context + 8) + local_long4 + local_long2) !=
              *(char *)(data_definitions_local_uint5 + *(longlong *)(network_context + 8))) break;
          data_definitions_local_uint5 = (ulonglong)((int)data_definitions_local_uint5 + 1);
          local_long2 = local_long2 + 1;
        } while (local_long2 < local_int1);
      }
      if ((int)data_definitions_local_uint5 == local_int1) {
        return local_int3;
      }
      local_int3 = local_int3 + -1;
      local_long4 = local_long4 + -1;
    } while (-1 < local_long4);
  }
  return -1;
}
uint64_t * function_(longlong system_context,uint64_t *network_context,int thread_context,int memory_context)
{
  uint8_t local_uint1;
  int data_definitions_local_int2;
  int local_int3;
  ulonglong local_uint4;
  ulonglong data_definitions_local_uint5;
  local_uint4 = (ulonglong)thread_context;
  local_int3 = memory_context;
  if (memory_context < 0) {
    local_int3 = *(int *)(system_context + 0x10);
  }
  *network_context = &unknown_data;
  network_context[1] = 0;
  *(uint32_t *)(network_context + 2) = 0;
  *network_context = &unknown_data;
  network_context[3] = 0;
  network_context[1] = 0;
  *(uint32_t *)(network_context + 2) = 0;
  data_definitions_local_int2 = *(int *)(system_context + 0x10) - thread_context;
  if (local_int3 - thread_context < data_definitions_local_int2) {
    data_definitions_local_int2 = local_int3 - thread_context;
  }
  function_(network_context,data_definitions_local_int2 + 1,thread_context,memory_context,1,0xfffffffffffffffe);
  for (data_definitions_local_uint5 = local_uint4;
      ((longlong)local_uint4 < (longlong)local_int3 && ((uint)data_definitions_local_uint5 < *(uint *)(system_context + 0x10)));
      data_definitions_local_uint5 = (ulonglong)((uint)data_definitions_local_uint5 + 1)) {
    local_uint1 = *(uint8_t *)(local_uint4 + *(longlong *)(system_context + 8));
    function_(network_context,*(int *)(network_context + 2) + 1);
    *(uint8_t *)((ulonglong)*(uint *)(network_context + 2) + network_context[1]) = local_uint1;
    *(uint8_t *)((ulonglong)(*(int *)(network_context + 2) + 1) + network_context[1]) = 0;
    *(int *)(network_context + 2) = *(int *)(network_context + 2) + 1;
    local_uint4 = local_uint4 + 1;
  }
  return network_context;
}
  global_data = 1;
  puStack_68 = &unknown_data;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  local_pointer5 = (uint64_t *)
           function_(_global_data,0x10,system_concat_int7_byte1((int7)((ulonglong)plocal_char1 >> 8),0x13));
  *(uint8_t *)local_pointer5 = 0;
  puStack_60 = local_pointer5;
  data_definitions_local_uint3 = function_(local_pointer5);
  *local_pointer5 = 0x7265206573726150;
  *(uint32_t *)(local_pointer5 + 1) = 0x3a726f72;
  *(uint16_t *)((longlong)local_pointer5 + 0xc) = 0x2720;
  *(uint8_t *)((longlong)local_pointer5 + 0xe) = 0;
  uStack_58 = 0xe;
  data_definitions_system_result0 = -1;
  uStack_50._0_4_ = data_definitions_local_uint3;
  if (system_context != 0) {
    do {
      data_definitions_local_long9 = data_definitions_system_result0;
      data_definitions_system_result0 = data_definitions_local_long9 + 1;
    } while (*(char *)(data_definitions_system_result0 + system_context) != '\0');
    if (0 < (int)data_definitions_system_result0) {
      local_int8 = (int)data_definitions_local_long9;
      if ((local_int8 != -0xf) && (data_definitions_local_uint3 < local_int8 + 0x10U)) {
        uStack_78 = 0x13;
        local_pointer5 = (uint64_t *)function_(_global_data,local_pointer5,local_int8 + 0x10U,0x10);
        puStack_60 = local_pointer5;
        uStack_50._0_4_ = function_(local_pointer5);
      }
      memcpy((uint8_t *)((longlong)local_pointer5 + 0xe),system_context,(longlong)(local_int8 + 2));
    }
  }
  if (local_pointer5 == (uint64_t *)0x0) {
    local_pointer5 = (uint64_t *)function_(_global_data,0x19,0x13);
    *(uint8_t *)local_pointer5 = 0;
label_:
    puStack_60 = local_pointer5;
    data_definitions_local_uint3 = function_(local_pointer5);
  }
  else if (data_definitions_local_uint3 < 0x19) {
    uStack_78 = 0x13;
    local_pointer5 = (uint64_t *)function_(_global_data,local_pointer5,0x19,0x10);
    goto label_;
  }
  *(uint64_t *)((longlong)local_pointer5 + 0xe) = 0x6e696c2074612027;
  *(uint16_t *)((longlong)local_pointer5 + 0x16) = 0x2065;
  *(uint8_t *)(local_pointer5 + 3) = 0;
  uStack_58 = 0x18;
  uStack_50._0_4_ = data_definitions_local_uint3;
  function_(acStack_40,&unknown_data,local_int8);
  data_definitions_system_result0 = -1;
  do {
    data_definitions_local_long9 = data_definitions_system_result0;
    data_definitions_system_result0 = data_definitions_local_long9 + 1;
  } while (acStack_40[data_definitions_local_long9 + 1] != '\0');
  local_int8 = (int)(data_definitions_local_long9 + 1);
  if (local_int8 < 1) {
    if (global_data != '\0') {
      _Exit(5);
    }
    puStack_68 = &unknown_data;
    if (local_pointer5 != (uint64_t *)0x0) {
      function_(local_pointer5);
    }
    puStack_60 = (uint64_t *)0x0;
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    puStack_68 = &unknown_data;
    function_(uStack_30 ^ (ulonglong)auStack_98);
  }
  if (local_int8 != -0x18) {
    local_uint4 = local_int8 + 0x19;
    if (local_pointer5 == (uint64_t *)0x0) {
      if ((int)local_uint4 < 0x10) {
        local_uint4 = 0x10;
      }
      local_pointer5 = (uint64_t *)function_(_global_data,(longlong)(int)local_uint4,0x13);
      *(uint8_t *)local_pointer5 = 0;
    }
    else {
      if (local_uint4 <= data_definitions_local_uint3) goto label_;
      uStack_78 = 0x13;
      local_pointer5 = (uint64_t *)function_(_global_data,local_pointer5,local_uint4,0x10);
    }
    puStack_60 = local_pointer5;
    uStack_50._0_4_ = function_(local_pointer5);
  }
label_:
  memcpy(local_pointer5 + 3,acStack_40,(longlong)((int)data_definitions_local_long9 + 2));
}
char * function_(uint32_t system_context,uint64_t network_context,char *thread_context,uint64_t memory_context,
                    longlong *param_5,longlong param_6,ulonglong param_7,uint64_t *param_8,
                    int *param_9,uint64_t *system_context0)
{
  char local_char1;
  uint32_t local_uint2;
  uint32_t data_definitions_local_uint3;
  void *data_definitions_local_pointer4;
  int local_int5;
  uint32_t local_uint6;
  uint local_uint7;
  longlong data_definitions_local_long8;
  char *plocal_char9;
  uint32_t *local_pointer10;
  uint32_t *local_pointer11;
  uint8_t *local_pointer12;
  void *data_definitions_local_pointer13;
  char *plocal_char14;
  char *plocal_char15;
  ulonglong local_uint16;
  char *plocal_char18;
  char *plocal_char19;
  char *plocal_char20;
  longlong local_long21;
  char *plocal_char22;
  void *puStack_140;
  void *puStack_138;
  uint uStack_130;
  uint64_t uStack_128;
  longlong *plStack_120;
  void *puStack_118;
  void *puStack_110;
  uint32_t uStack_108;
  ulonglong uStack_100;
  void *puStack_f8;
  uint32_t *puStack_f0;
  uint32_t uStack_e8;
  uint64_t uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  uint64_t *puStack_c8;
  void *puStack_c0;
  uint32_t *puStack_b8;
  uint32_t uStack_b0;
  ulonglong uStack_a8;
  uint64_t *puStack_a0;
  void *puStack_98;
  uint32_t *puStack_90;
  uint32_t uStack_88;
  uint64_t uStack_80;
  int *piStack_78;
  char *pcStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  uint64_t uStack_58;
  uint64_t *puStack_50;
  ulonglong local_uint17;
  uStack_58 = 0xfffffffffffffffe;
  plStack_120 = param_5;
  lStack_d0 = param_6;
  uStack_d8 = param_7;
  puStack_a0 = param_8;
  piStack_78 = param_9;
  puStack_c8 = system_context0;
  puStack_50 = system_context0;
  puStack_118 = &unknown_data;
  uStack_100 = 0;
  puStack_110 = (void *)0x0;
  uStack_108 = 0;
  pcStack_70 = thread_context;
  uStack_68 = network_context;
  data_definitions_local_long8 = function_(&puStack_f8,memory_context,system_context,param_5);
  uStack_108 = *(uint32_t *)(data_definitions_local_long8 + 0x10);
  puStack_110 = *(void **)(data_definitions_local_long8 + 8);
  uStack_100 = *(ulonglong *)(data_definitions_local_long8 + 0x18);
  *(uint32_t *)(data_definitions_local_long8 + 0x10) = 0;
  *(uint64_t *)(data_definitions_local_long8 + 8) = 0;
  *(uint64_t *)(data_definitions_local_long8 + 0x18) = 0;
  puStack_f8 = &unknown_data;
  puStack_60 = puStack_110;
  if (puStack_f0 != (uint32_t *)0x0) {
    function_();
  }
  puStack_f0 = (uint32_t *)0x0;
  uStack_e0 = (char *)((ulonglong)uStack_e0._4_4_ << 0x20);
  puStack_f8 = &unknown_data;
  data_definitions_local_pointer13 = &global_data;
  if (puStack_110 != (void *)0x0) {
    data_definitions_local_pointer13 = puStack_110;
  }
  function_(&unknown_data,data_definitions_local_pointer13);
  *param_9 = 0;
  data_definitions_local_long8 = *param_5;
  local_int5 = 0;
  if (data_definitions_local_long8 != param_5[1]) {
    do {
      if (0xf < local_int5) {
        function_(&unknown_data,0x10);
      }
      data_definitions_local_pointer13 = &global_data;
      if (*(void **)(data_definitions_local_long8 + 8) != (void *)0x0) {
        data_definitions_local_pointer13 = *(void **)(data_definitions_local_long8 + 8);
      }
      function_(&unknown_data,data_definitions_local_pointer13);
      local_int5 = *param_9;
      local_long21 = (longlong)local_int5 * 0x3088 + lStack_d0;
      data_definitions_local_pointer13 = &global_data;
      if (*(void **)(data_definitions_local_long8 + 8) != (void *)0x0) {
        data_definitions_local_pointer13 = *(void **)(data_definitions_local_long8 + 8);
      }
      puStack_140 = &unknown_data;
      uStack_128 = 0;
      puStack_138 = (void *)0x0;
      uStack_130 = 0;
      local_uint7 = *(uint *)(puStack_c8 + 2);
      local_uint16 = (ulonglong)local_uint7;
      if (puStack_c8[1] != 0) {
        function_(&puStack_140,local_uint16);
      }
      data_definitions_local_pointer4 = puStack_138;
      if (local_uint7 != 0) {
        memcpy(puStack_138,puStack_c8[1],local_uint16);
      }
      if (puStack_138 != (void *)0x0) {
        puStack_138[local_uint16] = 0;
      }
      uStack_130 = local_uint7;
      uStack_128._4_4_ = *(uint *)((longlong)puStack_c8 + 0x1c);
      if (data_definitions_local_pointer13 != (void *)0x0) {
        local_uint16 = 0xffffffffffffffff;
        do {
          local_uint17 = local_uint16;
          local_uint16 = local_uint17 + 1;
        } while (data_definitions_local_pointer13[local_uint16] != '\0');
        param_5 = plStack_120;
        if (0 < (int)local_uint16) {
          function_(&puStack_140,local_uint16 & 0xffffffff);
          memcpy(puStack_138 + uStack_130,data_definitions_local_pointer13,(longlong)((int)local_uint17 + 2));
        }
      }
      data_definitions_local_pointer13 = &global_data;
      if (puStack_138 != (void *)0x0) {
        data_definitions_local_pointer13 = puStack_138;
      }
      function_(data_definitions_local_pointer13,local_long21,(longlong)local_int5 * 0x20 + param_7);
      puStack_140 = &unknown_data;
      if (data_definitions_local_pointer4 != (void *)0x0) {
        function_(data_definitions_local_pointer4);
      }
      puStack_138 = (void *)0x0;
      uStack_128 = (ulonglong)uStack_128._4_4_ << 0x20;
      puStack_140 = &unknown_data;
      data_definitions_local_long8 = data_definitions_local_long8 + 0x20;
      local_int5 = *piStack_78 + 1;
      *piStack_78 = local_int5;
      param_7 = uStack_d8;
      thread_context = pcStack_70;
      param_6 = lStack_d0;
      param_9 = piStack_78;
    } while (data_definitions_local_long8 != param_5[1]);
  }
  plocal_char22 = (char *)0x0;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  plStack_120 = (longlong *)((ulonglong)plStack_120 & 0xffffffff00000000);
  plocal_char15 = plocal_char22;
  if (0 < local_int5) {
    do {
      plocal_char19 = "base";
      do {
        plocal_char20 = plocal_char19;
        plocal_char19 = plocal_char20 + 1;
      } while (*plocal_char19 != '\0');
      for (plocal_char19 = *(char **)(param_6 + 0x30); plocal_char18 = plocal_char22, plocal_char19 != (char *)0x0;
          plocal_char19 = *(char **)(plocal_char19 + 0x58)) {
        plocal_char14 = *(char **)plocal_char19;
        if (plocal_char14 == (char *)0x0) {
          plocal_char14 = (char *)0x180d48d24;
          plocal_char9 = plocal_char22;
        }
        else {
          plocal_char9 = *(char **)(plocal_char19 + 0x10);
        }
        if (plocal_char9 == plocal_char20 + -0x180a04ee3) {
          plocal_char9 = plocal_char14 + (longlong)plocal_char9;
          plocal_char18 = plocal_char19;
          if (plocal_char9 <= plocal_char14) break;
          data_definitions_local_long8 = (longlong)&global_data - (longlong)plocal_char14;
          while (*plocal_char14 == plocal_char14[data_definitions_local_long8]) {
            plocal_char14 = plocal_char14 + 1;
            if (plocal_char9 <= plocal_char14) goto label_;
          }
        }
      }
label_:
      *puStack_a0 = plocal_char18;
      if (plocal_char18 != (char *)0x0) {
        if (thread_context == (char *)0x0) {
          plocal_char19 = *(char **)(plocal_char18 + 0x30);
        }
        else {
          local_char1 = *thread_context;
          plocal_char20 = thread_context;
          while (local_char1 != '\0') {
            plocal_char20 = plocal_char20 + 1;
            local_char1 = *plocal_char20;
          }
          for (plocal_char18 = *(char **)(plocal_char18 + 0x30); plocal_char19 = plocal_char22, plocal_char18 != (char *)0x0;
              plocal_char18 = *(char **)(plocal_char18 + 0x58)) {
            plocal_char14 = *(char **)plocal_char18;
            if (plocal_char14 == (char *)0x0) {
              plocal_char14 = (char *)0x180d48d24;
              plocal_char9 = plocal_char22;
            }
            else {
              plocal_char9 = *(char **)(plocal_char18 + 0x10);
            }
            if (plocal_char9 == plocal_char20 + -(longlong)thread_context) {
              plocal_char9 = plocal_char9 + (longlong)plocal_char14;
              plocal_char19 = plocal_char18;
              if (plocal_char9 <= plocal_char14) break;
              data_definitions_local_long8 = (longlong)thread_context - (longlong)plocal_char14;
              while (*plocal_char14 == plocal_char14[data_definitions_local_long8]) {
                plocal_char14 = plocal_char14 + 1;
                if (plocal_char9 <= plocal_char14) goto label_;
              }
            }
          }
        }
label_:
        *puStack_a0 = plocal_char19;
        if (plocal_char19 == (char *)0x0) {
          puStack_f8 = &unknown_data;
          puStack_f0 = (uint32_t *)0x0;
          uStack_e8 = 0;
          uStack_e0 = plocal_char19;
          local_pointer10 = (uint32_t *)function_(_global_data,0x15,0x13);
          *(uint8_t *)local_pointer10 = 0;
          puStack_f0 = local_pointer10;
          local_uint6 = function_(local_pointer10);
          uStack_e0 = (char *)CONCAT44(uStack_e0._4_4_,local_uint6);
          *local_pointer10 = 0x204c4d58;
          local_pointer10[1] = 0x65646f6e;
          local_pointer10[2] = 0x74697720;
          local_pointer10[3] = 0x616e2068;
          local_pointer10[4] = 0x2220656d;
          *(uint8_t *)(local_pointer10 + 5) = 0;
          uStack_e8 = 0x14;
          puStack_c0 = &unknown_data;
          uStack_a8 = 0;
          puStack_b8 = (uint32_t *)0x0;
          uStack_b0 = 0;
          local_pointer11 = (uint32_t *)function_(_global_data,0x15,0x13);
          *(uint8_t *)local_pointer11 = 0;
          puStack_b8 = local_pointer11;
          local_uint7 = function_(local_pointer11);
          local_uint6 = local_pointer10[1];
          local_uint2 = local_pointer10[2];
          data_definitions_local_uint3 = local_pointer10[3];
          *local_pointer11 = *local_pointer10;
          local_pointer11[1] = local_uint6;
          local_pointer11[2] = local_uint2;
          local_pointer11[3] = data_definitions_local_uint3;
          local_pointer11[4] = local_pointer10[4];
          uStack_b0 = 0x14;
          *(uint8_t *)(local_pointer11 + 5) = 0;
          uStack_a8 = (ulonglong)local_uint7;
          if (thread_context != (char *)0x0) {
            data_definitions_local_long8 = -1;
            do {
              local_long21 = data_definitions_local_long8;
              data_definitions_local_long8 = local_long21 + 1;
            } while (thread_context[data_definitions_local_long8] != '\0');
            if (0 < (int)data_definitions_local_long8) {
              local_int5 = (int)local_long21;
              if ((local_int5 != -0x15) && (local_uint7 < local_int5 + 0x16U)) {
                local_pointer11 = (uint32_t *)
                          function_(_global_data,local_pointer11,local_int5 + 0x16U,0x10,0x13);
                puStack_b8 = local_pointer11;
                local_uint6 = function_(local_pointer11);
                uStack_a8 = CONCAT44(uStack_a8._4_4_,local_uint6);
              }
              memcpy(local_pointer11 + 5,thread_context,(longlong)(local_int5 + 2));
            }
          }
          local_pointer12 = (uint8_t *)0x0;
          puStack_98 = &unknown_data;
          uStack_80 = 0;
          puStack_90 = (uint32_t *)0x0;
          uStack_88 = 0;
          local_pointer10 = (uint32_t *)function_(_global_data,0x16,0x13);
          *(uint8_t *)local_pointer10 = 0;
          puStack_90 = local_pointer10;
          local_uint6 = function_(local_pointer10);
          uStack_80 = CONCAT44(uStack_80._4_4_,local_uint6);
          *local_pointer10 = 0x6f632022;
          local_pointer10[1] = 0x20646c75;
          local_pointer10[2] = 0x20746f6e;
          local_pointer10[3] = 0x66206562;
          local_pointer10[4] = 0x646e756f;
          *(uint16_t *)(local_pointer10 + 5) = 0x21;
          uStack_88 = 0x15;
          puStack_140 = &unknown_data;
          uStack_128 = 0;
          puStack_138 = (uint8_t *)0x0;
          uStack_130 = 0;
          if (local_pointer11 != (uint32_t *)0x0) {
            local_pointer12 = (uint8_t *)function_(_global_data,0x15,0x13);
            *local_pointer12 = 0;
            puStack_138 = local_pointer12;
            local_uint6 = function_(local_pointer12);
            uStack_128 = CONCAT44(uStack_128._4_4_,local_uint6);
          }
          memcpy(local_pointer12,local_pointer11,0x14);
        }
        local_int5 = function_(plocal_char19,uStack_68);
        local_uint7 = (int)plocal_char15 + local_int5;
        plocal_char15 = (char *)(ulonglong)local_uint7;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,local_uint7);
      }
      local_int5 = (int)plStack_120 + 1;
      plStack_120 = (longlong *)CONCAT44(plStack_120._4_4_,local_int5);
      param_6 = param_6 + 0x3088;
      thread_context = pcStack_70;
      lStack_d0 = param_6;
    } while (local_int5 < *param_9);
  }
  puStack_118 = &unknown_data;
  if (puStack_60 != (void *)0x0) {
    function_();
  }
  puStack_110 = (void *)0x0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  puStack_118 = &unknown_data;
  *puStack_c8 = &unknown_data;
  if (puStack_c8[1] != 0) {
    function_();
  }
  puStack_c8[1] = 0;
  *(uint32_t *)(puStack_c8 + 3) = 0;
  *puStack_c8 = &unknown_data;
  return plocal_char15;
}
char * function_(uint64_t system_context,uint64_t network_context,uint64_t *thread_context,longlong memory_context,
                    uint64_t param_5,uint64_t *param_6,uint64_t *param_7)
{
  uint32_t local_uint1;
  uint32_t local_uint2;
  uint32_t data_definitions_local_uint3;
  uint local_uint4;
  longlong local_long5;
  char *plocal_char6;
  uint32_t *local_pointer7;
  uint32_t *local_pointer8;
  char *plocal_char9;
  void *local_pointer10;
  char *plocal_char11;
  char *data_definitions_pointer_local_char12;
  char *plocal_char13;
  char *plocal_char14;
  void *puStack_d0;
  uint32_t *puStack_c8;
  uint32_t uStack_c0;
  uint64_t uStack_b8;
  void *puStack_b0;
  uint32_t *puStack_a8;
  uint32_t uStack_a0;
  ulonglong uStack_98;
  void *puStack_90;
  uint32_t *puStack_88;
  uint32_t uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  longlong lStack_68;
  uint32_t uStack_58;
  uint64_t uStack_50;
  uint64_t *puStack_48;
  uint64_t *puStack_40;
  uStack_50 = 0xfffffffffffffffe;
  puStack_40 = param_7;
  plocal_char14 = (char *)0x0;
  puStack_48 = thread_context;
  local_long5 = function_(param_7,&puStack_d0);
  local_pointer10 = &global_data;
  if (*(void **)(local_long5 + 8) != (void *)0x0) {
    local_pointer10 = *(void **)(local_long5 + 8);
  }
  function_(local_pointer10,memory_context,param_5);
  puStack_d0 = &unknown_data;
  if (puStack_c8 != (uint32_t *)0x0) {
    function_();
  }
  puStack_c8 = (uint32_t *)0x0;
  uStack_b8 = (ulonglong)uStack_b8._4_4_ << 0x20;
  puStack_d0 = &unknown_data;
  data_definitions_pointer_local_char12 = "base";
  do {
    plocal_char13 = data_definitions_pointer_local_char12;
    data_definitions_pointer_local_char12 = plocal_char13 + 1;
  } while (*data_definitions_pointer_local_char12 != '\0');
  for (data_definitions_pointer_local_char12 = *(char **)(memory_context + 0x30); plocal_char11 = plocal_char14, data_definitions_pointer_local_char12 != (char *)0x0;
      data_definitions_pointer_local_char12 = *(char **)(data_definitions_pointer_local_char12 + 0x58)) {
    plocal_char9 = *(char **)data_definitions_pointer_local_char12;
    if (plocal_char9 == (char *)0x0) {
      plocal_char9 = (char *)0x180d48d24;
      plocal_char6 = plocal_char14;
    }
    else {
      plocal_char6 = *(char **)(data_definitions_pointer_local_char12 + 0x10);
    }
    if (plocal_char6 == plocal_char13 + -0x180a04ee3) {
      plocal_char6 = plocal_char6 + (longlong)plocal_char9;
      plocal_char11 = data_definitions_pointer_local_char12;
      if (plocal_char6 <= plocal_char9) break;
      local_long5 = (longlong)&global_data - (longlong)plocal_char9;
      while (*plocal_char9 == plocal_char9[local_long5]) {
        plocal_char9 = plocal_char9 + 1;
        if (plocal_char6 <= plocal_char9) goto label_;
      }
    }
  }
label_:
  *param_6 = plocal_char11;
  if (plocal_char11 != (char *)0x0) {
    data_definitions_pointer_local_char12 = "decal_textures";
    do {
      plocal_char13 = data_definitions_pointer_local_char12;
      data_definitions_pointer_local_char12 = plocal_char13 + 1;
    } while (*data_definitions_pointer_local_char12 != '\0');
    for (data_definitions_pointer_local_char12 = *(char **)(plocal_char11 + 0x30); plocal_char11 = plocal_char14, data_definitions_pointer_local_char12 != (char *)0x0;
        data_definitions_pointer_local_char12 = *(char **)(data_definitions_pointer_local_char12 + 0x58)) {
      plocal_char9 = *(char **)data_definitions_pointer_local_char12;
      if (plocal_char9 == (char *)0x0) {
        plocal_char9 = (char *)0x180d48d24;
        plocal_char6 = plocal_char14;
      }
      else {
        plocal_char6 = *(char **)(data_definitions_pointer_local_char12 + 0x10);
      }
      if (plocal_char6 == plocal_char13 + -0x180a12dff) {
        plocal_char6 = plocal_char6 + (longlong)plocal_char9;
        plocal_char11 = data_definitions_pointer_local_char12;
        if (plocal_char6 <= plocal_char9) break;
        local_long5 = (longlong)&global_data - (longlong)plocal_char9;
        while (*plocal_char9 == plocal_char9[local_long5]) {
          plocal_char9 = plocal_char9 + 1;
          if (plocal_char6 <= plocal_char9) goto label_;
        }
      }
    }
label_:
    *param_6 = plocal_char11;
    if (plocal_char11 == (char *)0x0) {
      puStack_90 = &unknown_data;
      uStack_78 = 0;
      puStack_88 = (uint32_t *)0x0;
      uStack_80 = 0;
      local_pointer7 = (uint32_t *)function_(_global_data,0x15,0x13);
      *(uint8_t *)local_pointer7 = 0;
      puStack_88 = local_pointer7;
      data_definitions_local_uint3 = function_(local_pointer7);
      uStack_78 = CONCAT44(uStack_78._4_4_,data_definitions_local_uint3);
      *local_pointer7 = 0x204c4d58;
      local_pointer7[1] = 0x65646f6e;
      local_pointer7[2] = 0x74697720;
      local_pointer7[3] = 0x616e2068;
      local_pointer7[4] = 0x2220656d;
      *(uint8_t *)(local_pointer7 + 5) = 0;
      uStack_80 = 0x14;
      puStack_b0 = &unknown_data;
      uStack_98 = 0;
      puStack_a8 = (uint32_t *)0x0;
      uStack_a0 = 0;
      local_pointer8 = (uint32_t *)function_(_global_data,0x15,0x13);
      *(uint8_t *)local_pointer8 = 0;
      puStack_a8 = local_pointer8;
      local_uint4 = function_(local_pointer8);
      data_definitions_local_uint3 = local_pointer7[1];
      local_uint1 = local_pointer7[2];
      local_uint2 = local_pointer7[3];
      *local_pointer8 = *local_pointer7;
      local_pointer8[1] = data_definitions_local_uint3;
      local_pointer8[2] = local_uint1;
      local_pointer8[3] = local_uint2;
      local_pointer8[4] = local_pointer7[4];
      uStack_a0 = 0x14;
      *(uint8_t *)(local_pointer8 + 5) = 0;
      uStack_98 = (ulonglong)local_uint4;
      if (local_uint4 < 0x23) {
        local_pointer8 = (uint32_t *)function_(_global_data,local_pointer8,0x23,0x10,0x13);
        puStack_a8 = local_pointer8;
        data_definitions_local_uint3 = function_(local_pointer8);
        uStack_98 = CONCAT44(uStack_98._4_4_,data_definitions_local_uint3);
      }
      *(uint64_t *)(local_pointer8 + 5) = 0x65745f6c61636564;
      local_pointer8[7] = 0x72757478;
      *(uint16_t *)(local_pointer8 + 8) = 0x7365;
      *(uint8_t *)((longlong)local_pointer8 + 0x22) = 0;
      uStack_a0 = 0x22;
      puStack_d0 = &unknown_data;
      uStack_b8 = 0;
      puStack_c8 = (uint32_t *)0x0;
      uStack_c0 = 0;
      local_pointer7 = (uint32_t *)function_(_global_data,0x16,0x13);
      *(uint8_t *)local_pointer7 = 0;
      puStack_c8 = local_pointer7;
      data_definitions_local_uint3 = function_(local_pointer7);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,data_definitions_local_uint3);
      *local_pointer7 = 0x6f632022;
      local_pointer7[1] = 0x20646c75;
      local_pointer7[2] = 0x20746f6e;
      local_pointer7[3] = 0x66206562;
      local_pointer7[4] = 0x646e756f;
      *(uint16_t *)(local_pointer7 + 5) = 0x21;
      uStack_c0 = 0x15;
      local_long5 = function_(&puStack_b0,&puStack_70,&puStack_d0);
      local_pointer10 = &global_data;
      if (*(void **)(local_long5 + 8) != (void *)0x0) {
        local_pointer10 = *(void **)(local_long5 + 8);
      }
      function_(local_pointer10);
      puStack_70 = &unknown_data;
      if (lStack_68 != 0) {
        function_();
      }
      lStack_68 = 0;
      uStack_58 = 0;
      puStack_70 = &unknown_data;
      puStack_d0 = &unknown_data;
      function_(local_pointer7);
    }
    local_uint4 = function_(plocal_char11,&unknown_data);
    plocal_char14 = (char *)(ulonglong)local_uint4;
  }
  *thread_context = &unknown_data;
  if (thread_context[1] != 0) {
    function_();
  }
  thread_context[1] = 0;
  *(uint32_t *)(thread_context + 3) = 0;
  *thread_context = &unknown_data;
  *param_7 = &unknown_data;
  if (param_7[1] != 0) {
    function_();
  }
  param_7[1] = 0;
  *(uint32_t *)(param_7 + 3) = 0;
  *param_7 = &unknown_data;
  return plocal_char14;
}
longlong function_(longlong system_context,longlong network_context,uint32_t thread_context,longlong memory_context)
{
  char local_char1;
  char local_char2;
  char *plocal_char3;
  char *plocal_char4;
  char *plocal_char5;
  longlong data_definitions_local_long6;
  uint64_t *local_pointer7;
  char *plocal_char8;
  uint64_t *local_pointer9;
  char *plocal_char10;
  char *plocal_char11;
  bool data_definitions_local_bool12;
  uint32_t local_uint13;
  uint64_t data_definitions_local_uint14;
  void *puStack_70;
  longlong lStack_68;
  int iStack_60;
  ulonglong uStack_58;
  void *puStack_50;
  char *pcStack_48;
  int iStack_40;
  uint64_t uStack_38;
  data_definitions_local_uint14 = 0xfffffffffffffffe;
  plocal_char11 = (char *)0x0;
  function_(memory_context);
  function_(system_context,thread_context);
  local_uint13 = 1;
  plocal_char10 = "base";
  do {
    plocal_char8 = plocal_char10;
    plocal_char10 = plocal_char8 + 1;
  } while (*plocal_char10 != '\0');
  for (plocal_char10 = *(char **)(network_context + 0x30); plocal_char4 = plocal_char11, plocal_char10 != (char *)0x0;
      plocal_char10 = *(char **)(plocal_char10 + 0x58)) {
    plocal_char5 = *(char **)plocal_char10;
    if (plocal_char5 == (char *)0x0) {
      plocal_char5 = (char *)0x180d48d24;
      plocal_char3 = plocal_char11;
    }
    else {
      plocal_char3 = *(char **)(plocal_char10 + 0x10);
    }
    if (plocal_char3 == plocal_char8 + -0x180a04ee3) {
      plocal_char3 = plocal_char3 + (longlong)plocal_char5;
      plocal_char4 = plocal_char10;
      if (plocal_char3 <= plocal_char5) break;
      data_definitions_local_long6 = (longlong)&global_data - (longlong)plocal_char5;
      while (*plocal_char5 == plocal_char5[data_definitions_local_long6]) {
        plocal_char5 = plocal_char5 + 1;
        if (plocal_char3 <= plocal_char5) goto label_;
      }
    }
  }
label_:
  plocal_char10 = "file";
  do {
    plocal_char8 = plocal_char10;
    plocal_char10 = plocal_char8 + 1;
  } while (*plocal_char10 != '\0');
  local_pointer7 = *(uint64_t **)(plocal_char4 + 0x30);
  do {
    if (local_pointer7 == (uint64_t *)0x0) {
      return system_context;
    }
    plocal_char10 = (char *)*local_pointer7;
    if (plocal_char10 == (char *)0x0) {
      plocal_char10 = (char *)0x180d48d24;
      plocal_char4 = plocal_char11;
    }
    else {
      plocal_char4 = (char *)local_pointer7[2];
    }
    if (plocal_char4 == plocal_char8 + -0x180a0794b) {
      plocal_char4 = plocal_char10 + (longlong)plocal_char4;
      if (plocal_char4 <= plocal_char10) break;
      data_definitions_local_long6 = (longlong)&unknown_data - (longlong)plocal_char10;
      while (*plocal_char10 == plocal_char10[data_definitions_local_long6]) {
        plocal_char10 = plocal_char10 + 1;
        if (plocal_char4 <= plocal_char10) goto label_;
      }
    }
    local_pointer7 = (uint64_t *)local_pointer7[0xb];
  } while( true );
label_:
  puStack_50 = &unknown_data;
  uStack_38 = 0;
  pcStack_48 = (char *)0x0;
  iStack_40 = 0;
  plocal_char10 = "type";
  do {
    plocal_char8 = plocal_char10;
    plocal_char10 = plocal_char8 + 1;
  } while (*plocal_char10 != '\0');
  for (local_pointer9 = (uint64_t *)local_pointer7[8]; local_pointer9 != (uint64_t *)0x0;
      local_pointer9 = (uint64_t *)local_pointer9[6]) {
    plocal_char10 = (char *)*local_pointer9;
    if (plocal_char10 == (char *)0x0) {
      plocal_char10 = (char *)0x180d48d24;
      plocal_char4 = plocal_char11;
    }
    else {
      plocal_char4 = (char *)local_pointer9[2];
    }
    if (plocal_char4 == plocal_char8 + -0x180a0ee2f) {
      plocal_char4 = plocal_char4 + (longlong)plocal_char10;
      if (plocal_char4 <= plocal_char10) {
label_:
        data_definitions_local_long6 = 0x180d48d24;
        if (local_pointer9[1] != 0) {
          data_definitions_local_long6 = local_pointer9[1];
        }
        function_(&puStack_50,data_definitions_local_long6,plocal_char4,local_pointer9,local_uint13,data_definitions_local_uint14);
        break;
      }
      data_definitions_local_long6 = (longlong)&unknown_data - (longlong)plocal_char10;
      while (*plocal_char10 == plocal_char10[data_definitions_local_long6]) {
        plocal_char10 = plocal_char10 + 1;
        if (plocal_char4 <= plocal_char10) goto label_;
      }
    }
  }
  if (iStack_40 == *(int *)(system_context + 0x10)) {
    if (iStack_40 == 0) {
label_:
      if (*(int *)(system_context + 0x10) != 0) goto label_;
      data_definitions_local_bool12 = true;
    }
    else {
      plocal_char10 = pcStack_48;
      do {
        local_char1 = *plocal_char10;
        local_char2 = plocal_char10[*(longlong *)(system_context + 8) - (longlong)pcStack_48];
        if (local_char1 != local_char2) break;
        plocal_char10 = plocal_char10 + 1;
      } while (local_char2 != '\0');
      data_definitions_local_bool12 = local_char1 == local_char2;
    }
  }
  else {
    if (iStack_40 == 0) goto label_;
label_:
    data_definitions_local_bool12 = false;
  }
  if (data_definitions_local_bool12) {
    puStack_70 = &unknown_data;
    uStack_58 = 0;
    lStack_68 = 0;
    iStack_60 = 0;
    plocal_char10 = "name";
    do {
      plocal_char8 = plocal_char10;
      plocal_char10 = plocal_char8 + 1;
    } while (*plocal_char10 != '\0');
    for (local_pointer9 = (uint64_t *)local_pointer7[8]; local_pointer9 != (uint64_t *)0x0;
        local_pointer9 = (uint64_t *)local_pointer9[6]) {
      plocal_char10 = (char *)*local_pointer9;
      if (plocal_char10 == (char *)0x0) {
        plocal_char10 = (char *)0x180d48d24;
        plocal_char4 = plocal_char11;
      }
      else {
        plocal_char4 = (char *)local_pointer9[2];
      }
      if (plocal_char4 == plocal_char8 + -0x180a03a83) {
        plocal_char4 = plocal_char4 + (longlong)plocal_char10;
        if (plocal_char4 <= plocal_char10) {
label_:
          data_definitions_local_long6 = 0x180d48d24;
          if (local_pointer9[1] != 0) {
            data_definitions_local_long6 = local_pointer9[1];
          }
          function_(&puStack_70,data_definitions_local_long6);
          break;
        }
        data_definitions_local_long6 = (longlong)&global_data - (longlong)plocal_char10;
        while (*plocal_char10 == plocal_char10[data_definitions_local_long6]) {
          plocal_char10 = plocal_char10 + 1;
          if (plocal_char4 <= plocal_char10) goto label_;
        }
      }
    }
    local_pointer9 = *(uint64_t **)(memory_context + 8);
    if (local_pointer9 < *(uint64_t **)(memory_context + 0x10)) {
      *(uint64_t **)(memory_context + 8) = local_pointer9 + 4;
      *local_pointer9 = &unknown_data;
      local_pointer9[1] = 0;
      *(uint32_t *)(local_pointer9 + 2) = 0;
      *local_pointer9 = &unknown_data;
      local_pointer9[3] = 0;
      local_pointer9[1] = 0;
      *(uint32_t *)(local_pointer9 + 2) = 0;
      function_(local_pointer9,iStack_60);
      if (iStack_60 != 0) {
        memcpy(local_pointer9[1],lStack_68,iStack_60 + 1);
      }
      if (lStack_68 != 0) {
        *(uint32_t *)(local_pointer9 + 2) = 0;
        if ((uint8_t *)local_pointer9[1] != (uint8_t *)0x0) {
          *(uint8_t *)local_pointer9[1] = 0;
        }
        *(uint32_t *)((longlong)local_pointer9 + 0x1c) = 0;
      }
    }
    else {
      function_(memory_context,&puStack_70);
    }
    puStack_70 = &unknown_data;
    if (lStack_68 != 0) {
      function_();
    }
    lStack_68 = 0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &unknown_data;
  }
  local_pointer7 = (uint64_t *)local_pointer7[0xb];
  puStack_50 = &unknown_data;
  if (pcStack_48 != (char *)0x0) {
    function_();
  }
  if (local_pointer7 == (uint64_t *)0x0) {
    return system_context;
  }
  goto label_;
}
  global_data = 0;
  if (local_char1 != '\0') {
    function_(&unknown_data,system_context);
  }
  if (local_long3 != -1) {
    LOCK();
    _global_data = _global_data + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    alStack_3d0[0] = -1;
  }
  puStack_3b0 = &unknown_data;
  if (puStack_3a8 == (void *)0x0) {
    puStack_3a8 = (void *)0x0;
    uStack_398 = 0;
    puStack_3b0 = &unknown_data;
    function_(uStack_48 ^ (ulonglong)auStack_408);
  }
  function_();
}
int function_(uint64_t system_context,char *network_context)
{
  char *plocal_char1;
  char local_char2;
  uint64_t *data_definitions_local_pointer3;
  char *plocal_char4;
  longlong local_long5;
  char *plocal_char6;
  int data_definitions_local_int7;
  data_definitions_local_pointer3 = (uint64_t *)function_(system_context,network_context,0);
  data_definitions_local_int7 = 0;
  if (data_definitions_local_pointer3 == (uint64_t *)0x0) {
    return 0;
  }
  while (data_definitions_local_int7 = data_definitions_local_int7 + 1, network_context == (char *)0x0) {
    data_definitions_local_pointer3 = (uint64_t *)data_definitions_local_pointer3[0xb];
label_:
    if (data_definitions_local_pointer3 == (uint64_t *)0x0) {
      return data_definitions_local_int7;
    }
  }
  local_char2 = *network_context;
  plocal_char6 = network_context;
  while (local_char2 != '\0') {
    plocal_char6 = plocal_char6 + 1;
    local_char2 = *plocal_char6;
  }
  data_definitions_local_pointer3 = (uint64_t *)data_definitions_local_pointer3[0xb];
  if (data_definitions_local_pointer3 == (uint64_t *)0x0) {
    return data_definitions_local_int7;
  }
  do {
    plocal_char4 = (char *)*data_definitions_local_pointer3;
    if (plocal_char4 == (char *)0x0) {
      local_long5 = 0;
      plocal_char4 = (char *)0x180d48d24;
    }
    else {
      local_long5 = data_definitions_local_pointer3[2];
    }
    if (local_long5 == (longlong)plocal_char6 - (longlong)network_context) {
      plocal_char1 = plocal_char4 + local_long5;
      if (plocal_char1 <= plocal_char4) goto label_;
      local_long5 = (longlong)network_context - (longlong)plocal_char4;
      while (*plocal_char4 == plocal_char4[local_long5]) {
        plocal_char4 = plocal_char4 + 1;
        if (plocal_char1 <= plocal_char4) goto label_;
      }
    }
    data_definitions_local_pointer3 = (uint64_t *)data_definitions_local_pointer3[0xb];
    if (data_definitions_local_pointer3 == (uint64_t *)0x0) {
      return data_definitions_local_int7;
    }
  } while( true );
}
int function_(uint64_t system_context,uint64_t network_context,uint64_t *thread_context)
{
  char *plocal_char1;
  char local_char2;
  char *plocal_char3;
  char *unaff_RBX;
  longlong local_long4;
  char *plocal_char5;
  int in_R11D;
  while (in_R11D = in_R11D + 1, unaff_RBX == (char *)0x0) {
    thread_context = (uint64_t *)thread_context[0xb];
label_:
    if (thread_context == (uint64_t *)0x0) {
      return in_R11D;
    }
  }
  local_char2 = *unaff_RBX;
  plocal_char5 = unaff_RBX;
  while (local_char2 != '\0') {
    plocal_char5 = plocal_char5 + 1;
    local_char2 = *plocal_char5;
  }
  thread_context = (uint64_t *)thread_context[0xb];
  if (thread_context == (uint64_t *)0x0) {
    return in_R11D;
  }
  do {
    plocal_char3 = (char *)*thread_context;
    if (plocal_char3 == (char *)0x0) {
      local_long4 = 0;
      plocal_char3 = (char *)0x180d48d24;
    }
    else {
      local_long4 = thread_context[2];
    }
    if (local_long4 == (longlong)plocal_char5 - (longlong)unaff_RBX) {
      plocal_char1 = plocal_char3 + local_long4;
      if (plocal_char1 <= plocal_char3) goto label_;
      local_long4 = (longlong)unaff_RBX - (longlong)plocal_char3;
      while (*plocal_char3 == plocal_char3[local_long4]) {
        plocal_char3 = plocal_char3 + 1;
        if (plocal_char1 <= plocal_char3) goto label_;
      }
    }
    thread_context = (uint64_t *)thread_context[0xb];
    if (thread_context == (uint64_t *)0x0) {
      return in_R11D;
    }
  } while( true );
}
int function_(uint64_t system_context,uint64_t network_context,uint64_t *thread_context)
{
  char *plocal_char1;
  char local_char2;
  char *plocal_char3;
  char *unaff_RBX;
  char *unaff_RDI;
  longlong local_long4;
  char *plocal_char5;
  int in_R11D;
  do {
    thread_context = (uint64_t *)thread_context[0xb];
label_:
    if (thread_context == (uint64_t *)0x0) {
      return in_R11D;
    }
    in_R11D = in_R11D + 1;
  } while (unaff_RBX == (char *)0x0);
  local_char2 = *unaff_RBX;
  plocal_char5 = unaff_RBX;
  while (local_char2 != '\0') {
    plocal_char5 = plocal_char5 + 1;
    local_char2 = *plocal_char5;
  }
  thread_context = (uint64_t *)thread_context[0xb];
  if (thread_context == (uint64_t *)0x0) {
    return in_R11D;
  }
  do {
    if ((char *)*thread_context == (char *)0x0) {
      local_long4 = 0;
      plocal_char3 = unaff_RDI;
    }
    else {
      local_long4 = thread_context[2];
      plocal_char3 = (char *)*thread_context;
    }
    if (local_long4 == (longlong)plocal_char5 - (longlong)unaff_RBX) {
      plocal_char1 = plocal_char3 + local_long4;
      if (plocal_char1 <= plocal_char3) goto label_;
      local_long4 = (longlong)unaff_RBX - (longlong)plocal_char3;
      while (*plocal_char3 == plocal_char3[local_long4]) {
        plocal_char3 = plocal_char3 + 1;
        if (plocal_char1 <= plocal_char3) goto label_;
      }
    }
    thread_context = (uint64_t *)thread_context[0xb];
    if (thread_context == (uint64_t *)0x0) {
      return in_R11D;
    }
  } while( true );
}
uint32_t function_(void)
{
  uint32_t in_R11D;
  return in_R11D;
}
longlong function_(uint64_t system_context,uint64_t network_context,longlong thread_context)
{
  longlong data_definitions_system_result;
  longlong local_long2;
  char *plocal_char3;
  longlong local_long4;
  uint64_t data_definitions_local_uint5;
  void *puStack_30;
  char *pcStack_28;
  data_definitions_local_uint5 = 0xfffffffffffffffe;
  data_definitions_system_result = function_();
  if (data_definitions_system_result == 0) {
    return 0;
  }
  local_long4 = 0x180d48d24;
  if (*(longlong *)(data_definitions_system_result + 8) != 0) {
    local_long4 = *(longlong *)(data_definitions_system_result + 8);
  }
  function_(&puStack_30,local_long4);
  if (*pcStack_28 != '\0') {
    data_definitions_system_result = 0;
    do {
      local_long2 = strchr(&unknown_data,(int)pcStack_28[data_definitions_system_result]);
      if (local_long2 != 0) {
        pcStack_28[data_definitions_system_result] = ' ';
      }
      data_definitions_system_result = data_definitions_system_result + 1;
    } while (pcStack_28[data_definitions_system_result] != '\0');
  }
  plocal_char3 = "";
  if (pcStack_28 != (char *)0x0) {
    plocal_char3 = pcStack_28;
  }
  function_(plocal_char3,&unknown_data,thread_context,thread_context + 4,data_definitions_local_uint5);
  puStack_30 = &unknown_data;
  if (pcStack_28 != (char *)0x0) {
    function_();
  }
  return local_long4;
}
longlong function_(uint64_t system_context,uint64_t network_context,longlong thread_context)
{
  longlong data_definitions_system_result;
  longlong local_long2;
  char *plocal_char3;
  longlong local_long4;
  void *puStack_30;
  char *pcStack_28;
  data_definitions_system_result = function_();
  if (data_definitions_system_result == 0) {
    return 0;
  }
  local_long4 = 0x180d48d24;
  if (*(longlong *)(data_definitions_system_result + 8) != 0) {
    local_long4 = *(longlong *)(data_definitions_system_result + 8);
  }
  function_(&puStack_30,local_long4);
  if (*pcStack_28 != '\0') {
    data_definitions_system_result = 0;
    do {
      local_long2 = strchr(&unknown_data,(int)pcStack_28[data_definitions_system_result]);
      if (local_long2 != 0) {
        pcStack_28[data_definitions_system_result] = ' ';
      }
      data_definitions_system_result = data_definitions_system_result + 1;
    } while (pcStack_28[data_definitions_system_result] != '\0');
  }
  plocal_char3 = "";
  if (pcStack_28 != (char *)0x0) {
    plocal_char3 = pcStack_28;
  }
  function_(plocal_char3,&unknown_data,thread_context,thread_context + 4,thread_context + 8);
  puStack_30 = &unknown_data;
  if (pcStack_28 != (char *)0x0) {
    function_();
  }
  return local_long4;
}
longlong function_(uint64_t system_context,uint64_t network_context,longlong thread_context,uint64_t memory_context)
{
  longlong data_definitions_system_result;
  longlong local_long2;
  char *plocal_char3;
  longlong local_long4;
  void *puStack_30;
  char *pcStack_28;
  data_definitions_system_result = function_(system_context,&unknown_data,thread_context,memory_context,0xfffffffffffffffe);
  if (data_definitions_system_result == 0) {
    return 0;
  }
  local_long4 = 0x180d48d24;
  if (*(longlong *)(data_definitions_system_result + 8) != 0) {
    local_long4 = *(longlong *)(data_definitions_system_result + 8);
  }
  function_(&puStack_30,local_long4);
  if (*pcStack_28 != '\0') {
    data_definitions_system_result = 0;
    do {
      local_long2 = strchr(&unknown_data,(int)pcStack_28[data_definitions_system_result]);
      if (local_long2 != 0) {
        pcStack_28[data_definitions_system_result] = ' ';
      }
      data_definitions_system_result = data_definitions_system_result + 1;
    } while (pcStack_28[data_definitions_system_result] != '\0');
  }
  plocal_char3 = "";
  if (pcStack_28 != (char *)0x0) {
    plocal_char3 = pcStack_28;
  }
  function_(plocal_char3,&unknown_data,thread_context,thread_context + 4);
  puStack_30 = &unknown_data;
  if (pcStack_28 != (char *)0x0) {
    function_();
  }
  return local_long4;
}
longlong function_(uint64_t system_context,uint64_t network_context,longlong thread_context)
{
  int local_int1;
  longlong local_long2;
  longlong local_long3;
  char *plocal_char4;
  longlong local_long5;
  uint64_t local_uint6;
  void *puStack_30;
  char *pcStack_28;
  local_uint6 = 0xfffffffffffffffe;
  local_long2 = function_();
  if (local_long2 == 0) {
    return 0;
  }
  local_long5 = 0x180d48d24;
  if (*(longlong *)(local_long2 + 8) != 0) {
    local_long5 = *(longlong *)(local_long2 + 8);
  }
  function_(&puStack_30,local_long5);
  if (*pcStack_28 != '\0') {
    local_long2 = 0;
    do {
      local_long3 = strchr(&unknown_data,(int)pcStack_28[local_long2]);
      if (local_long3 != 0) {
        pcStack_28[local_long2] = ' ';
      }
      local_long2 = local_long2 + 1;
    } while (pcStack_28[local_long2] != '\0');
  }
  plocal_char4 = "";
  if (pcStack_28 != (char *)0x0) {
    plocal_char4 = pcStack_28;
  }
  local_int1 = function_(plocal_char4,&unknown_data,thread_context,thread_context + 4,thread_context + 8,
                        (uint32_t *)(thread_context + 0xc),local_uint6);
  if (local_int1 == 3) {
    *(uint32_t *)(thread_context + 0xc) = 0x3f800000;
  }
  puStack_30 = &unknown_data;
  if (pcStack_28 != (char *)0x0) {
    function_();
  }
  return local_long5;
}
longlong function_(uint64_t system_context,uint64_t network_context,longlong thread_context)
{
  longlong data_definitions_system_result;
  longlong local_long2;
  char *plocal_char3;
  longlong local_long4;
  uint64_t data_definitions_local_uint5;
  void *puStack_30;
  char *pcStack_28;
  data_definitions_local_uint5 = 0xfffffffffffffffe;
  data_definitions_system_result = function_(system_context,&unknown_data);
  if (data_definitions_system_result == 0) {
    return 0;
  }
  local_long4 = 0x180d48d24;
  if (*(longlong *)(data_definitions_system_result + 8) != 0) {
    local_long4 = *(longlong *)(data_definitions_system_result + 8);
  }
  function_(&puStack_30,local_long4);
  if (*pcStack_28 != '\0') {
    data_definitions_system_result = 0;
    do {
      local_long2 = strchr(&unknown_data,(int)pcStack_28[data_definitions_system_result]);
      if (local_long2 != 0) {
        pcStack_28[data_definitions_system_result] = ' ';
      }
      data_definitions_system_result = data_definitions_system_result + 1;
    } while (pcStack_28[data_definitions_system_result] != '\0');
  }
  plocal_char3 = "";
  if (pcStack_28 != (char *)0x0) {
    plocal_char3 = pcStack_28;
  }
  function_(plocal_char3,&unknown_data,thread_context + 4,thread_context + 8,thread_context + 0xc,thread_context,data_definitions_local_uint5);
  puStack_30 = &unknown_data;
  if (pcStack_28 != (char *)0x0) {
    function_();
  }
  return local_long4;
}
longlong function_(uint64_t system_context,uint64_t network_context,longlong thread_context)
{
  longlong *data_definitions_system_result;
  longlong local_long2;
  longlong local_long3;
  char *plocal_char4;
  longlong local_long5;
  void *puStack_30;
  char *pcStack_28;
  local_long2 = function_();
  if (local_long2 != 0) {
    data_definitions_system_result = (longlong *)(local_long2 + 8);
    local_long2 = 0x180d48d24;
    if (*data_definitions_system_result != 0) {
      local_long2 = *data_definitions_system_result;
    }
    function_(&puStack_30,local_long2);
    if (*pcStack_28 != '\0') {
      local_long5 = 0;
      do {
        local_long3 = strchr(&unknown_data,(int)pcStack_28[local_long5]);
        if (local_long3 != 0) {
          pcStack_28[local_long5] = ' ';
        }
        local_long5 = local_long5 + 1;
      } while (pcStack_28[local_long5] != '\0');
    }
    plocal_char4 = "";
    if (pcStack_28 != (char *)0x0) {
      plocal_char4 = pcStack_28;
    }
    function_(plocal_char4,&unknown_data,thread_context,thread_context + 4,thread_context + 8,thread_context + 0x10,
                  thread_context + 0x14,thread_context + 0x18,thread_context + 0x20,thread_context + 0x24,thread_context + 0x28);
    puStack_30 = &unknown_data;
    if (pcStack_28 != (char *)0x0) {
      function_();
    }
  }
  return local_long2;
}
longlong function_(uint64_t system_context,uint64_t network_context,longlong thread_context)
{
  longlong *data_definitions_system_result;
  longlong local_long2;
  longlong local_long3;
  char *plocal_char4;
  longlong local_long5;
  uint64_t local_uint6;
  void *puStack_58;
  char *pcStack_50;
  local_uint6 = 0xfffffffffffffffe;
  local_long2 = function_();
  if (local_long2 != 0) {
    data_definitions_system_result = (longlong *)(local_long2 + 8);
    local_long2 = 0x180d48d24;
    if (*data_definitions_system_result != 0) {
      local_long2 = *data_definitions_system_result;
    }
    function_(&puStack_58,local_long2);
    if (*pcStack_50 != '\0') {
      local_long5 = 0;
      do {
        local_long3 = strchr(&unknown_data,(int)pcStack_50[local_long5]);
        if (local_long3 != 0) {
          pcStack_50[local_long5] = ' ';
        }
        local_long5 = local_long5 + 1;
      } while (pcStack_50[local_long5] != '\0');
    }
    plocal_char4 = "";
    if (pcStack_50 != (char *)0x0) {
      plocal_char4 = pcStack_50;
    }
    function_(plocal_char4,&unknown_data,thread_context,thread_context + 4,thread_context + 8,thread_context + 0xc,thread_context + 0x10
                  ,thread_context + 0x14,thread_context + 0x18,thread_context + 0x1c,thread_context + 0x20,thread_context + 0x24,
                  thread_context + 0x28,thread_context + 0x2c,thread_context + 0x30,thread_context + 0x34,thread_context + 0x38,
                  thread_context + 0x3c,local_long2,local_uint6);
    puStack_58 = &unknown_data;
    if (pcStack_50 != (char *)0x0) {
      function_();
    }
  }
  return local_long2;
}
longlong function_(uint64_t system_context,uint64_t network_context,uint64_t *thread_context)
{
  uint64_t local_uint1;
  longlong local_long2;
  uint64_t *data_definitions_local_pointer3;
  longlong local_long4;
  uint8_t auStack_18 [16];
  local_long2 = function_();
  if (local_long2 != 0) {
    local_long4 = 0x180d48d24;
    if (*(longlong *)(local_long2 + 8) != 0) {
      local_long4 = *(longlong *)(local_long2 + 8);
    }
    data_definitions_local_pointer3 = (uint64_t *)function_(auStack_18,local_long4);
    local_uint1 = data_definitions_local_pointer3[1];
    *thread_context = *data_definitions_local_pointer3;
    thread_context[1] = local_uint1;
    return local_long4;
  }
  return 0;
}
uint64_t function_(uint64_t system_context)
{
  uint64_t local_uint1;
  uint64_t *local_pointer2;
  uint64_t data_definitions_local_uint3;
  uint64_t *unaff_RDI;
  bool in_ZF;
  uint8_t auStackX_20 [8];
  data_definitions_local_uint3 = 0x180d48d24;
  if (!in_ZF) {
    data_definitions_local_uint3 = system_context;
  }
  local_pointer2 = (uint64_t *)function_(auStackX_20,data_definitions_local_uint3);
  local_uint1 = local_pointer2[1];
  *unaff_RDI = *local_pointer2;
  unaff_RDI[1] = local_uint1;
  return data_definitions_local_uint3;
}
  global_data = 0;
  function_(function_);
  function_(&unknown_data);
  local_long3 = 0;
  _global_data = function_;
  local_pointer1 = (uint32_t *)&global_data;
  local_long2 = 0x16;
  do {
    if (local_pointer1[1] == 0) {
      function_(local_pointer1);
    }
    if (local_long3 != 2) {
      function_(&unknown_data,*(uint64_t *)(local_pointer1 + 4),*local_pointer1);
    }
    local_long3 = local_long3 + 1;
    local_pointer1 = local_pointer1 + 6;
    local_long2 = local_long2 + -1;
  } while (local_long2 != 0);
  if (_global_data == 0) {
    function_(&global_data);
  }
  _global_data = (longlong)_global_data;
  if (_global_data == 0) {
    function_(&global_data);
  }
  _global_data = (longlong)_global_data;
  function_();
  if (global_data != '\0') {
    function_(&unknown_data);
  }
  return;
}
  global_data = 1;
  if (global_data == '\0') {
    global_data = '\x01';
    local_uint2 = FlsAlloc(&unknown_data);
    _global_data = local_uint2;
    *(uint64_t *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10) =
         0x180bf4000;
    FlsSetValue(local_uint2);
  }
  function_(&unknown_data,&ExceptionList);
  data_definitions_system_result = cpuid_Extended_Feature_Enumeration_info(7);
  global_data = (byte)(*(uint *)(data_definitions_system_result + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (uStack_3c != 0) {
    _global_data = (ulonglong)uStack_3c;
  }
  function_();
  function_(&unknown_data,0);
  function_();
  plocal_long3 = (longlong *)function_();
  if ((void *)(*plocal_long3 + 0x3d8) == &global_data) {
    memset(&global_data,0,0x240);
  }
  memset((void *)(*plocal_long3 + 0x3d8),0,0x240);
}
  global_data = 1;
  FlsSetValue(_global_data,0);
  FlsFree(_global_data);
  function_(*(uint64_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                 0x10),1);
  if (_global_data == 0) {
    function_(&global_data);
  }
  if (_global_data == 0) {
    if (_global_data == 0) {
      function_(&global_data);
    }
    if (_global_data == 0) goto label_;
  }
  data_definitions_system_result = (longlong *)function_();
  local_pointer2 = (void *)(*data_definitions_system_result + 0x3d8);
  if (local_pointer2 != &global_data) {
    function_();
    memset(local_pointer2,0,0x240);
  }
  function_();
label_:
  function_(&unknown_data,_global_data);
  global_data = 1;
  return;
}
uint32_t function_(int system_context)
{
  if (*(int *)(&global_data + (longlong)system_context * 0x18) == 0) {
    function_(&global_data + (longlong)system_context * 0x18);
  }
  return *(uint32_t *)(&global_data + (longlong)system_context * 0x18);
}
    global_data = 0;
    return;
  }
  local_long2 = -1;
  do {
    local_long2 = local_long2 + 1;
  } while (*(char *)(system_context + local_long2) != '\0');
  local_uint1 = (uint)local_long2;
  if (0x1fff < local_uint1) {
    local_uint1 = 0x1fff;
  }
  memcpy(&global_data,system_context,(longlong)(int)local_uint1);
}
  global_data = 0;
  return;
}
uint64_t function_(uint64_t system_context)
{
  uint64_t local_uint1;
  longlong local_long2;
  local_uint1 = function_(_global_data,system_context,0x19);
  local_long2 = function_(local_uint1);
  LOCK();
  _global_data = _global_data + local_long2;
  UNLOCK();
  return local_uint1;
}
uint64_t function_(uint64_t system_context,uint64_t network_context)
{
  longlong data_definitions_system_result;
  uint64_t local_uint2;
  data_definitions_system_result = function_();
  local_uint2 = function_(_global_data,system_context,network_context,0x19);
  LOCK();
  _global_data = _global_data - data_definitions_system_result;
  UNLOCK();
  data_definitions_system_result = function_(local_uint2);
  LOCK();
  _global_data = _global_data + data_definitions_system_result;
  UNLOCK();
  return local_uint2;
}
longlong function_(longlong *system_context)
{
  int *plocal_int1;
  longlong local_long2;
  longlong local_long3;
  ulonglong local_uint4;
  local_long2 = function_();
  local_long3 = _global_data;
  LOCK();
  local_long2 = _global_data - local_long2;
  _global_data = local_long2;
  UNLOCK();
  if (system_context == (longlong *)0x0) {
    return local_long3;
  }
  local_uint4 = (ulonglong)system_context & 0xffffffffffc00000;
  if (local_uint4 != 0) {
    local_long2 = local_uint4 + 0x80 + ((longlong)system_context - local_uint4 >> 0x10) * 0x50;
    local_long2 = local_long2 - (ulonglong)*(uint *)(local_long2 + 4);
    if ((*(void ***)(local_uint4 + 0x70) == &ExceptionList) && (*(char *)(local_long2 + 0xe) == '\0')) {
      local_long3 = *(longlong *)(local_long2 + 0x20);
      *system_context = local_long3;
      *(longlong **)(local_long2 + 0x20) = system_context;
      plocal_int1 = (int *)(local_long2 + 0x18);
      *plocal_int1 = *plocal_int1 + -1;
      if (*plocal_int1 == 0) {
        local_long3 = function_();
        return local_long3;
      }
    }
    else {
      local_long3 = func_0x00018064e870(local_uint4,system_concat_int7_byte1(0xff000000,
                                                 *(void ***)(local_uint4 + 0x70) == &ExceptionList),
                                  system_context,local_uint4,0xfffffffffffffffe);
    }
  }
  return local_long3;
}
      global_data = '\x01';
      system_context = uStack_378;
    }
    plocal_float3 = afStack_2e8;
    data_definitions_local_long6 = 0;
    data_definitions_local_long9 = 0x20;
    local_long7 = 0x20;
    do {
      local_float28 = param_5 * *(float *)(data_definitions_local_long6 + 0x180d4a0a8);
      local_float24 = param_5 * *(float *)(data_definitions_local_long6 + 0x180d4a0a4);
      local_float30 = param_5 * *(float *)(data_definitions_local_long6 + 0x180d4a0a0);
      local_float20 = local_float30 * *thread_context + local_float24 * thread_context[4] + local_float28 * thread_context[8] + thread_context[0xc];
      local_float21 = local_float30 * thread_context[1] + local_float24 * thread_context[5] + local_float28 * thread_context[9] + thread_context[0xd];
      local_float22 = local_float30 * thread_context[2] + local_float24 * thread_context[6] + local_float28 * thread_context[10] + thread_context[0xe];
      local_float24 = local_float30 * thread_context[3] + local_float24 * thread_context[7] + local_float28 * thread_context[0xb] + thread_context[0xf];
      *(float *)((longlong)afStack_2e8 + data_definitions_local_long6) = local_float20;
      *(float *)((longlong)afStack_2e8 + data_definitions_local_long6 + 4) = local_float21;
      *(float *)((longlong)&uStack_2e0 + data_definitions_local_long6) = local_float22;
      *(float *)((longlong)&uStack_2e0 + data_definitions_local_long6 + 4) = local_float24;
      if (network_context != 0) {
        uStack_378 = uStack_378 & 0xffffffff00000000;
        if (*(longlong *)(network_context + 0x2908) == 0) {
          function_(network_context,plocal_float3,0x31b189,&uStack_378);
          local_float20 = (float)uStack_378;
        }
        else {
          cStack_324 = '\0';
          uStack_348 = 0;
          uStack_340 = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          uStack_338 = 0;
          uStack_330 = 0;
          uStack_368 = CONCAT44(local_float21,local_float20);
          uStack_360 = CONCAT44(local_float24,local_float22);
          uStack_380 = CONCAT31(uStack_380._1_3_,1);
          uStack_388 = 0;
          function_(network_context,&uStack_368,0,auStack_358);
          local_float20 = fStack_328;
          if (cStack_324 == '\0') {
            local_float20 = 0.0;
          }
        }
        *(float *)((longlong)&uStack_2e0 + data_definitions_local_long6) = local_float20 + 0.01;
      }
      plocal_float3 = plocal_float3 + 4;
      data_definitions_local_long6 = data_definitions_local_long6 + 0x10;
      local_long7 = local_long7 + -1;
    } while (local_long7 != 0);
    local_float20 = thread_context[0xe];
    local_float21 = thread_context[0xd];
    local_float22 = thread_context[0xc];
    local_float24 = thread_context[9];
    local_float28 = thread_context[8];
    local_float30 = thread_context[10];
    uStack_36c = 0x7f7fffff;
    plocal_float3 = afStack_2e8;
    data_definitions_local_long6 = 0x20;
    do {
      local_float26 = plocal_float3[2] - local_float20;
      local_float27 = plocal_float3[1] - local_float21;
      local_float29 = *plocal_float3 - local_float22;
      local_float23 = local_float29 * local_float28 + local_float27 * local_float24 + local_float26 * local_float30;
      local_float26 = local_float26 - local_float23 * local_float30;
      local_float27 = local_float27 - local_float23 * local_float24;
      local_float29 = local_float29 - local_float23 * local_float28;
      local_float23 = local_float26 * local_float26 + local_float27 * local_float27 + local_float29 * local_float29;
      alocal_uint13 = rsqrtss(ZEXT416((uint)local_float23),ZEXT416((uint)local_float23));
      local_float25 = alocal_uint13._0_4_;
      local_float25 = local_float25 * 0.5 * (3.0 - local_float23 * local_float25 * local_float25);
      fStack_370 = local_float25 * local_float26 * param_5 + local_float20;
      local_float23 = local_float25 * local_float27 * param_5 + local_float21;
      local_float25 = local_float25 * local_float29 * param_5 + local_float22;
      uStack_378 = CONCAT44(local_float23,local_float25);
      *plocal_float3 = local_float25;
      plocal_float3[1] = local_float23;
      plocal_float3[2] = fStack_370;
      plocal_float3[3] = 3.4028235e+38;
      plocal_float3 = plocal_float3 + 4;
      data_definitions_local_long6 = data_definitions_local_long6 + -1;
    } while (data_definitions_local_long6 != 0);
    if (network_context != 0) {
      plocal_float3 = (float *)&uStack_2e0;
      plocal_float5 = afStack_2e8;
      do {
        uStack_378 = uStack_378 & 0xffffffff00000000;
        if (*(longlong *)(network_context + 0x2908) == 0) {
          function_(network_context,plocal_float5,0x31b189,&uStack_378);
          local_float20 = (float)uStack_378;
        }
        else {
          cStack_324 = '\0';
          uStack_348 = 0;
          uStack_340 = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          uStack_338 = 0;
          uStack_330 = 0;
          uStack_368 = *(uint64_t *)(plocal_float3 + -2);
          uStack_360 = *(uint64_t *)plocal_float3;
          uStack_380 = CONCAT31(uStack_380._1_3_,1);
          uStack_388 = 0;
          function_(network_context,&uStack_368,0,auStack_358);
          local_float20 = fStack_328;
          if (cStack_324 == '\0') {
            local_float20 = 0.0;
          }
        }
        *plocal_float3 = local_float20 + 0.01;
        plocal_float5 = plocal_float5 + 4;
        plocal_float3 = plocal_float3 + 4;
        data_definitions_local_long9 = data_definitions_local_long9 + -1;
      } while (data_definitions_local_long9 != 0);
    }
    local_uint4 = 0;
    data_definitions_local_long6 = 0;
    do {
      local_long7 = 0;
      if (local_uint4 != 0x1f) {
        local_long7 = data_definitions_local_long6 + 1;
      }
      if (((system_context2 == '\0') || ((local_uint4 & 1) != 0)) &&
         (local_char1 = function_((double)((float)(int)local_uint4 * 0.19634955),SUB84((double)param_6,0),
                                (double)param_7), local_char1 != '\0')) {
        fStack_370 = *(float *)(&uStack_2e0 + local_long7 * 2) - *(float *)(&uStack_2e0 + data_definitions_local_long6 * 2);
        uStack_378 = CONCAT44(afStack_2e8[local_long7 * 4 + 1] - afStack_2e8[data_definitions_local_long6 * 4 + 1],
                              afStack_2e8[local_long7 * 4] - afStack_2e8[data_definitions_local_long6 * 4]);
        uStack_36c = 0x7f7fffff;
        uStack_380 = 0;
        uStack_388 = CONCAT31(uStack_388._1_3_,system_context1);
        function_(system_context,afStack_2e8 + data_definitions_local_long6 * 4,&uStack_378,param_8);
      }
      local_uint4 = local_uint4 + 1;
      data_definitions_local_long6 = data_definitions_local_long6 + 1;
    } while ((int)local_uint4 < 0x20);
  }
  data_definitions_local_int2 = _Mtx_unlock(system_context);
  if (data_definitions_local_int2 != 0) {
    __Throw_C_error_std__YAXH_Z(data_definitions_local_int2);
  }
  function_(uStack_e8 ^ (ulonglong)auStack_3a8);
}
                    global_data = global_data + local_char12;
                    if (global_data != '\0' && local_bool27 == global_data < '\0') {
                      out((short)network_context,local_int11);
                      halt_baddata();
                    }
                    in_OF = SCARRY1((char)*unaff_RDI,local_char14);
                    *unaff_RDI = (code)((char)*unaff_RDI + local_char14);
                    in_SF = (char)*unaff_RDI < '\0';
                    in_ZF = *unaff_RDI == (code)0x0;
                    goto label_;
                  }
                }
                local_pointer26 = local_pointer9;
                *(void **)((longlong)local_pointer26 + -8) = &unknown_data;
                (*unaff_RDI)();
                *(uint64_t *)((longlong)local_pointer26 + -8) = 0x180768051;
                CoUninitialize();
label_:
                *(uint64_t *)((longlong)local_pointer26 + -8) = 0x180768059;
                _endthreadex(0);
                return;
              }
              local_char14 = (char)*in_RAX;
            }
            in_RAX = (int *)system_concat_int7_byte1((int7)((ulonglong)in_RAX >> 8),local_char10 + local_char14);
label__1:
            pdata_definitions_local_int2 = (int *)(((ulonglong)in_RAX & 0xffffffffffffff20) - 0x75);
            *pdata_definitions_local_int2 = *pdata_definitions_local_int2 + (int)system_context;
            *(int *)(((ulonglong)in_RAX & 0xffffffffffffff20) - 0x17ffffff) = (int)local_pointer23;
            halt_baddata();
          }
        }
      }
    }
  }
  memory_context = 0x266;
  *(uint8_t *)((longlong)register0x00000020 + 0x20) = 1;
label_:
  local_uint7 = *(uint64_t *)(plocal_char13 + 0x1a0);
  *(uint8_t **)((longlong)register0x00000020 + -8) = &label_;
  function_(local_uint7,plocal_char15,thread_context,memory_context);
}
    global_data = '\x01';
  }
  if (thread_context != (int *)0x0) {
    *thread_context = ((network_context + 1) / 2) * 0x48d0;
  }
  if (memory_context != (uint32_t *)0x0) {
    *memory_context = 0x480;
  }
  return 0;
}
uint64_t function_(int system_context)
{
  byte data_definitions_local_bool1;
  int data_definitions_local_int2;
  uint data_definitions_local_uint3;
  longlong local_long4;
  float *plocal_float5;
  int data_definitions_local_int6;
  float *plocal_float7;
  uint data_definitions_local_uint8;
  ulonglong local_uint10;
  ulonglong local_uint11;
  int *plocal_int12;
  uint local_uint13;
  longlong *data_definitions_system_result4;
  longlong data_definitions_system_result5;
  uint local_uint16;
  int local_int17;
  int local_int18;
  float local_float19;
  uint64_t local_uint20;
  uint64_t extraout_XMM0_Qb;
  float local_float22;
  uint8_t in_XMM2 [16];
  uint8_t alocal_uint21 [16];
  float local_float23;
  float local_float24;
  uint8_t unaff_XMM6 [16];
  uint8_t alocal_uint25 [16];
  ulonglong local_uint9;
  data_definitions_system_result4 = (longlong *)&global_data;
  local_int18 = 0;
  do {
    local_uint9 = 0;
    data_definitions_system_result5 = *data_definitions_system_result4;
    local_uint16 = 0x10 >> ((byte)local_int18 & 0x1f);
    local_uint13 = 0x40 >> ((byte)local_int18 & 0x1f);
    local_uint10 = local_uint9;
    local_uint11 = local_uint9;
    if ((local_uint16 != 0) && (local_uint10 = 0, 3 < local_uint16)) {
      alocal_uint21._0_4_ = (float)(int)local_uint13;
      alocal_uint21._4_4_ = alocal_uint21._0_4_;
      alocal_uint21._8_4_ = alocal_uint21._0_4_;
      alocal_uint21._12_4_ = alocal_uint21._0_4_;
      data_definitions_local_uint3 = local_uint16 & 0x80000003;
      if ((int)data_definitions_local_uint3 < 0) {
        data_definitions_local_uint3 = (data_definitions_local_uint3 - 1 | 0xfffffffc) + 1;
      }
      alocal_uint25 = rcpps(unaff_XMM6,alocal_uint21);
      local_float24 = alocal_uint25._0_4_;
      local_float19 = alocal_uint25._4_4_;
      local_float22 = alocal_uint25._8_4_;
      local_float23 = alocal_uint25._12_4_;
      unaff_XMM6._0_4_ = (local_float24 + local_float24) - local_float24 * local_float24 * alocal_uint21._0_4_;
      unaff_XMM6._4_4_ = (local_float19 + local_float19) - local_float19 * local_float19 * alocal_uint21._0_4_;
      unaff_XMM6._8_4_ = (local_float22 + local_float22) - local_float22 * local_float22 * alocal_uint21._0_4_;
      unaff_XMM6._12_4_ = (local_float23 + local_float23) - local_float23 * local_float23 * alocal_uint21._0_4_;
      do {
        local_uint20 = thunk_function_();
        alocal_uint25._0_4_ = (float)local_uint20 * 2.0;
        alocal_uint25._4_4_ = (float)((ulonglong)local_uint20 >> 0x20) * 2.0;
        alocal_uint25._8_4_ = (float)extraout_XMM0_Qb * 2.0;
        alocal_uint25._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * 2.0;
        data_definitions_local_uint8 = (int)local_uint9 + 4;
        local_uint9 = (ulonglong)data_definitions_local_uint8;
        alocal_uint21 = rcpps(in_XMM2,alocal_uint25);
        local_float24 = alocal_uint21._0_4_;
        local_float19 = alocal_uint21._4_4_;
        local_float22 = alocal_uint21._8_4_;
        local_float23 = alocal_uint21._12_4_;
        in_XMM2._0_4_ = (local_float24 + local_float24) - local_float24 * local_float24 * alocal_uint25._0_4_;
        in_XMM2._4_4_ = (local_float19 + local_float19) - local_float19 * local_float19 * alocal_uint25._4_4_;
        in_XMM2._8_4_ = (local_float22 + local_float22) - local_float22 * local_float22 * alocal_uint25._8_4_;
        in_XMM2._12_4_ = (local_float23 + local_float23) - local_float23 * local_float23 * alocal_uint25._12_4_;
        *(uint8_t (*) [16])(data_definitions_system_result5 + local_uint11 * 4) = in_XMM2;
        local_uint11 = local_uint11 + 4;
        local_uint10 = local_uint9;
      } while ((int)data_definitions_local_uint8 < (int)(local_uint16 - data_definitions_local_uint3));
    }
    if ((int)local_uint10 < (int)local_uint16) {
      plocal_float7 = (float *)(data_definitions_system_result5 + local_uint11 * 4);
      local_float24 = 1.0 / (float)(int)local_uint13;
      unaff_XMM6 = ZEXT416((uint)local_float24);
      do {
        local_float19 = (float)cosf(((float)(int)local_uint10 * 6.2831855 + 3.1415927) * local_float24);
        local_uint13 = (int)local_uint10 + 1;
        local_uint10 = (ulonglong)local_uint13;
        *plocal_float7 = 0.5 / local_float19;
        plocal_float7 = plocal_float7 + 1;
      } while ((int)local_uint13 < (int)local_uint16);
    }
    local_int18 = local_int18 + 1;
    data_definitions_system_result4 = data_definitions_system_result4 + 1;
  } while (local_int18 < 5);
  plocal_int12 = (int *)0x180be5774;
  plocal_float7 = (float *)0x180c2e040;
  _global_data = 0x180c2e040;
  system_context = -system_context;
  local_int18 = 2;
  local_int17 = 0x100;
  data_definitions_system_result5 = 0x140;
  local_uint13 = 0;
  do {
    local_uint16 = local_uint13;
    if (plocal_float7 < (float *)0x180c2e880) {
      local_float24 = (float)plocal_int12[-1] * 1.5258789e-05 * (float)system_context;
      *plocal_float7 = local_float24;
      plocal_float7[0x10] = local_float24;
    }
    plocal_float5 = plocal_float7 + -0x3ff;
    if (((byte)local_uint16 & 0x1f) != 0x1f) {
      plocal_float5 = plocal_float7;
    }
    data_definitions_local_int6 = -system_context;
    if (((byte)local_uint16 & 0x3f) != 0x3f) {
      data_definitions_local_int6 = system_context;
    }
    if (plocal_float5 + 0x20 < (float *)0x180c2e880) {
      local_float24 = (float)*plocal_int12 * 1.5258789e-05 * (float)data_definitions_local_int6;
      plocal_float5[0x20] = local_float24;
      plocal_float5[0x30] = local_float24;
    }
    data_definitions_local_bool1 = (byte)local_int18;
    local_uint13 = local_int18 - 1U & 0x1f;
    data_definitions_local_int2 = -data_definitions_local_int6;
    if ((data_definitions_local_bool1 - 1 & 0x3f) != 0x3f) {
      data_definitions_local_int2 = data_definitions_local_int6;
    }
    local_long4 = -0xefc;
    if (local_uint13 != 0x1f) {
      local_long4 = 0x100;
    }
    plocal_float7 = (float *)(local_long4 + (longlong)plocal_float5);
    if (plocal_float7 < (float *)0x180c2e880) {
      local_long4 = -0xebc;
      if (local_uint13 != 0x1f) {
        local_long4 = data_definitions_system_result5;
      }
      local_float24 = (float)plocal_int12[1] * 1.5258789e-05 * (float)data_definitions_local_int2;
      *plocal_float7 = local_float24;
      *(float *)(local_long4 + (longlong)plocal_float5) = local_float24;
    }
    if ((data_definitions_local_bool1 & 0x1f) == 0x1f) {
      local_long4 = -0x1ef8;
      if (local_uint13 != 0x1f) {
        local_long4 = -0xefc;
      }
      plocal_float7 = (float *)(local_long4 + (longlong)plocal_float5);
    }
    data_definitions_local_int6 = -data_definitions_local_int2;
    if ((data_definitions_local_bool1 & 0x3f) != 0x3f) {
      data_definitions_local_int6 = data_definitions_local_int2;
    }
    if (plocal_float7 + 0x20 < (float *)0x180c2e880) {
      local_float24 = (float)plocal_int12[2] * 1.5258789e-05 * (float)data_definitions_local_int6;
      plocal_float7[0x20] = local_float24;
      plocal_float7[0x30] = local_float24;
    }
    local_uint13 = local_int18 + 1U & 0x1f;
    local_long4 = -0xefc;
    data_definitions_local_int2 = -data_definitions_local_int6;
    if (((byte)(local_int18 + 1U) & 0x3f) != 0x3f) {
      data_definitions_local_int2 = data_definitions_local_int6;
    }
    if (local_uint13 != 0x1f) {
      local_long4 = 0x100;
    }
    plocal_float5 = (float *)(local_long4 + (longlong)plocal_float7);
    if (plocal_float5 < (float *)0x180c2e880) {
      local_long4 = -0xebc;
      if (local_uint13 != 0x1f) {
        local_long4 = data_definitions_system_result5;
      }
      local_float24 = (float)plocal_int12[3] * 1.5258789e-05 * (float)data_definitions_local_int2;
      *plocal_float5 = local_float24;
      *(float *)(local_long4 + (longlong)plocal_float7) = local_float24;
    }
    if ((data_definitions_local_bool1 + 2 & 0x1f) == 0x1f) {
      local_long4 = -0x1ef8;
      if (local_uint13 != 0x1f) {
        local_long4 = -0xefc;
      }
      plocal_float5 = (float *)(local_long4 + (longlong)plocal_float7);
    }
    data_definitions_local_int6 = -data_definitions_local_int2;
    if ((data_definitions_local_bool1 + 2 & 0x3f) != 0x3f) {
      data_definitions_local_int6 = data_definitions_local_int2;
    }
    if (plocal_float5 + 0x20 < (float *)0x180c2e880) {
      local_float24 = (float)plocal_int12[4] * 1.5258789e-05 * (float)data_definitions_local_int6;
      plocal_float5[0x20] = local_float24;
      plocal_float5[0x30] = local_float24;
    }
    local_uint13 = local_int18 + 3U & 0x1f;
    local_long4 = -0xefc;
    data_definitions_local_int2 = -data_definitions_local_int6;
    if (((byte)(local_int18 + 3U) & 0x3f) != 0x3f) {
      data_definitions_local_int2 = data_definitions_local_int6;
    }
    if (local_uint13 != 0x1f) {
      local_long4 = 0x100;
    }
    plocal_float7 = (float *)(local_long4 + (longlong)plocal_float5);
    if (plocal_float7 < (float *)0x180c2e880) {
      local_long4 = -0xebc;
      if (local_uint13 != 0x1f) {
        local_long4 = data_definitions_system_result5;
      }
      local_float24 = (float)plocal_int12[5] * 1.5258789e-05 * (float)data_definitions_local_int2;
      *plocal_float7 = local_float24;
      *(float *)(local_long4 + (longlong)plocal_float5) = local_float24;
    }
    if ((data_definitions_local_bool1 + 4 & 0x1f) == 0x1f) {
      local_long4 = -0x1ef8;
      if (local_uint13 != 0x1f) {
        local_long4 = -0xefc;
      }
      plocal_float7 = (float *)(local_long4 + (longlong)plocal_float5);
    }
    data_definitions_local_int6 = -data_definitions_local_int2;
    if ((data_definitions_local_bool1 + 4 & 0x3f) != 0x3f) {
      data_definitions_local_int6 = data_definitions_local_int2;
    }
    if (plocal_float7 + 0x20 < (float *)0x180c2e880) {
      local_float24 = (float)plocal_int12[6] * 1.5258789e-05 * (float)data_definitions_local_int6;
      plocal_float7[0x20] = local_float24;
      plocal_float7[0x30] = local_float24;
    }
    system_context = -data_definitions_local_int6;
    if ((data_definitions_local_bool1 + 5 & 0x3f) != 0x3f) {
      system_context = data_definitions_local_int6;
    }
    local_long4 = -0xefc;
    if ((data_definitions_local_bool1 + 5 & 0x1f) != 0x1f) {
      local_long4 = 0x100;
    }
    local_uint13 = local_uint16 + 8;
    plocal_float7 = (float *)(local_long4 + (longlong)plocal_float7);
    local_int18 = local_int18 + 8;
    plocal_int12 = plocal_int12 + 8;
  } while (local_int18 < 0x102);
  if ((int)local_uint13 < 0x200) {
    if (3 < (int)(0x200 - local_uint13)) {
      local_uint16 = local_uint16 + 10;
      plocal_int12 = (int *)0x180be5b68;
      local_int17 = (0x3f - (0x1fc - local_uint13 >> 2)) * 4;
      do {
        if (plocal_float7 < (float *)0x180c2e880) {
          local_float24 = (float)plocal_int12[2] * 1.5258789e-05 * (float)system_context;
          *plocal_float7 = local_float24;
          plocal_float7[0x10] = local_float24;
        }
        data_definitions_local_uint3 = local_uint13 & 0x8000001f;
        if ((int)data_definitions_local_uint3 < 0) {
          data_definitions_local_uint3 = (data_definitions_local_uint3 - 1 | 0xffffffe0) + 1;
        }
        plocal_float5 = plocal_float7 + -0x3ff;
        if (data_definitions_local_uint3 != 0x1f) {
          plocal_float5 = plocal_float7;
        }
        data_definitions_local_uint3 = local_uint13 & 0x8000003f;
        if ((int)data_definitions_local_uint3 < 0) {
          data_definitions_local_uint3 = (data_definitions_local_uint3 - 1 | 0xffffffc0) + 1;
        }
        local_int18 = -system_context;
        if (data_definitions_local_uint3 != 0x3f) {
          local_int18 = system_context;
        }
        if (plocal_float5 + 0x20 < (float *)0x180c2e880) {
          local_float24 = (float)plocal_int12[1] * 1.5258789e-05 * (float)local_int18;
          plocal_float5[0x20] = local_float24;
          plocal_float5[0x30] = local_float24;
        }
        data_definitions_local_uint3 = local_uint16 - 1 & 0x8000001f;
        if ((int)data_definitions_local_uint3 < 0) {
          data_definitions_local_uint3 = (data_definitions_local_uint3 - 1 | 0xffffffe0) + 1;
        }
        data_definitions_local_uint8 = local_uint16 - 1 & 0x8000003f;
        if ((int)data_definitions_local_uint8 < 0) {
          data_definitions_local_uint8 = (data_definitions_local_uint8 - 1 | 0xffffffc0) + 1;
        }
        data_definitions_local_int6 = -local_int18;
        if (data_definitions_local_uint8 != 0x3f) {
          data_definitions_local_int6 = local_int18;
        }
        local_long4 = -0xefc;
        if (data_definitions_local_uint3 != 0x1f) {
          local_long4 = 0x100;
        }
        plocal_float7 = (float *)(local_long4 + (longlong)plocal_float5);
        if (plocal_float7 < (float *)0x180c2e880) {
          local_long4 = -0xebc;
          if (data_definitions_local_uint3 != 0x1f) {
            local_long4 = data_definitions_system_result5;
          }
          local_float24 = (float)*plocal_int12 * 1.5258789e-05 * (float)data_definitions_local_int6;
          *plocal_float7 = local_float24;
          *(float *)(local_long4 + (longlong)plocal_float5) = local_float24;
        }
        data_definitions_local_uint8 = local_uint16 & 0x8000001f;
        if ((int)data_definitions_local_uint8 < 0) {
          data_definitions_local_uint8 = (data_definitions_local_uint8 - 1 | 0xffffffe0) + 1;
        }
        if (data_definitions_local_uint8 == 0x1f) {
          local_long4 = -0x1ef8;
          if (data_definitions_local_uint3 != 0x1f) {
            local_long4 = -0xefc;
          }
          plocal_float7 = (float *)(local_long4 + (longlong)plocal_float5);
        }
        data_definitions_local_uint3 = local_uint16 & 0x8000003f;
        if ((int)data_definitions_local_uint3 < 0) {
          data_definitions_local_uint3 = (data_definitions_local_uint3 - 1 | 0xffffffc0) + 1;
        }
        local_int18 = -data_definitions_local_int6;
        if (data_definitions_local_uint3 != 0x3f) {
          local_int18 = data_definitions_local_int6;
        }
        if (plocal_float7 + 0x20 < (float *)0x180c2e880) {
          local_float24 = (float)plocal_int12[-1] * 1.5258789e-05 * (float)local_int18;
          plocal_float7[0x20] = local_float24;
          plocal_float7[0x30] = local_float24;
        }
        data_definitions_local_uint3 = local_uint16 + 1 & 0x8000003f;
        if ((int)data_definitions_local_uint3 < 0) {
          data_definitions_local_uint3 = (data_definitions_local_uint3 - 1 | 0xffffffc0) + 1;
        }
        system_context = -local_int18;
        if (data_definitions_local_uint3 != 0x3f) {
          system_context = local_int18;
        }
        data_definitions_local_uint3 = local_uint16 + 1 & 0x8000001f;
        if ((int)data_definitions_local_uint3 < 0) {
          data_definitions_local_uint3 = (data_definitions_local_uint3 - 1 | 0xffffffe0) + 1;
        }
        local_long4 = -0xefc;
        if (data_definitions_local_uint3 != 0x1f) {
          local_long4 = 0x100;
        }
        plocal_int12 = plocal_int12 + -4;
        plocal_float7 = (float *)(local_long4 + (longlong)plocal_float7);
        local_uint13 = local_uint13 + 4;
        local_uint16 = local_uint16 + 4;
      } while ((int)local_uint16 < 0x1ff);
    }
    if ((int)local_uint13 < 0x200) {
      plocal_int12 = (int *)((longlong)local_int17 * 4 + 0x180be5770);
      do {
        if (plocal_float7 < (float *)0x180c2e880) {
          local_float24 = (float)*plocal_int12 * 1.5258789e-05 * (float)system_context;
          *plocal_float7 = local_float24;
          plocal_float7[0x10] = local_float24;
        }
        local_uint16 = local_uint13 & 0x8000003f;
        if ((int)local_uint16 < 0) {
          local_uint16 = (local_uint16 - 1 | 0xffffffc0) + 1;
        }
        data_definitions_local_uint3 = local_uint13 & 0x8000001f;
        if ((int)data_definitions_local_uint3 < 0) {
          data_definitions_local_uint3 = (data_definitions_local_uint3 - 1 | 0xffffffe0) + 1;
        }
        plocal_float5 = plocal_float7 + -0x3ff;
        if (data_definitions_local_uint3 != 0x1f) {
          plocal_float5 = plocal_float7;
        }
        plocal_int12 = plocal_int12 + -1;
        local_uint13 = local_uint13 + 1;
        plocal_float7 = plocal_float5 + 0x20;
        local_int18 = -system_context;
        if (local_uint16 != 0x3f) {
          local_int18 = system_context;
        }
        system_context = local_int18;
      } while ((int)local_uint13 < 0x200);
    }
  }
  return 0;
}
      global_data = '\x01';
    }
    local_int4 = function_(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
    if ((local_int4 != 0) ||
       (local_int4 = function_(*(uint64_t *)(unaff_RBX + 0x170),0x180c2ea70,1,
                              iStack0000000000000030 + 4), local_int4 != 0)) goto label_;
    local_pointer2 = (uint *)(unaff_RBX + 0x1cc);
    local_int4 = function_();
    if (local_int4 == 0) {
      *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + iStack0000000000000030 + 4;
      local_int4 = function_(*(uint64_t *)(unaff_RBX + 0x170),0x180c2ea70,1);
      if (local_int4 != 0) goto label_;
    }
    data_definitions_local_uint3 = *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8);
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    function_();
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = data_definitions_local_uint3;
    local_int4 = function_(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
    if (local_int4 == 0) {
      if (*(int *)(unaff_RBX + 0x1c4) == local_int5) {
        *(uint32_t *)(unaff_RBX + 0x1c4) = 0x480;
      }
      local_uint7 = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaff_R12D & 0x4000) == 0) ||
         ((*(uint *)(*(longlong *)(unaff_RBX + 0x170) + 0x194) & 1) == 0)) {
        data_definitions_local_long6 = *(longlong *)(unaff_RBX + 8);
        if (*(int *)(data_definitions_local_long6 + 0x14) == -1) {
          *(uint32_t *)(data_definitions_local_long6 + 0x18) = 0xffffffff;
        }
        else if (*(char *)(unaff_RBX + 0x23c) == (char)unaff_R15) {
          *(uint *)(data_definitions_local_long6 + 0x18) =
               ((*(int *)(data_definitions_local_long6 + 0x14) + -1 + local_uint7) / local_uint7 + 1) * *(int *)(unaff_RBX + 0x1c4);
          *(uint *)(unaff_RBX + 0x2c) = *(uint *)(unaff_RBX + 0x2c) & 0xfffffffe;
        }
        else {
          *(uint *)(data_definitions_local_long6 + 0x18) = *local_pointer2 * 0x480;
        }
        goto label_;
      }
      function_(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
      local_int4 = *(int *)(unaff_RBX + 0x1c4);
      local_uint7 = 0;
      local_int5 = func_0x00018076a7d0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x00000050);
      if (local_int5 == 0) {
        *local_pointer2 = 0;
        *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 0x18) = 0;
        if (*(int *)(*(longlong *)(unaff_RBX + 8) + 0x14) != 0) goto label_;
        goto label_;
      }
    }
  }
  goto label_;
label_:
  *(ulonglong *)(unaff_RBX + 0x178) = unaff_R15;
  goto label_;
  while( true ) {
    local_int5 = function_();
    if ((local_int5 == 0) &&
       (in_stack_00000040._4_4_ + local_uint7 < *(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14))) {
      if (*local_pointer2 <= (uint)unaff_R15) {
        local_uint9 = *local_pointer2 + 1000;
        *local_pointer2 = local_uint9;
        data_definitions_local_long6 = function_(*(uint64_t *)(_global_data + 0x1a0),
                              *(uint64_t *)(unaff_RBX + 0x1d0),local_uint9 * 4,&unknown_data,0x113);
        *(longlong *)(unaff_RBX + 0x1d0) = data_definitions_local_long6;
        if (data_definitions_local_long6 == 0) goto label_;
      }
      data_definitions_local_uint8 = unaff_R15 & 0xffffffff;
      unaff_R15 = (ulonglong)((uint)unaff_R15 + 1);
      *(uint *)(*(longlong *)(unaff_RBX + 0x1d0) + data_definitions_local_uint8 * 4) = local_uint7;
      plocal_int1 = (int *)(*(longlong *)(unaff_RBX + 8) + 0x18);
      *plocal_int1 = *plocal_int1 + local_int4;
      local_uint7 = local_uint7 + 4 + in_stack_00000040._4_4_;
      local_int5 = function_(*(uint64_t *)(unaff_RBX + 0x170),in_stack_00000040._4_4_,1);
      if (local_int5 != 0) break;
    }
    else {
      function_(*(uint64_t *)(unaff_RBX + 0x170),0xfffffffd,1);
    }
    if (*(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14) <= local_uint7) break;
label_:
    local_int5 = function_(*(uint64_t *)(unaff_RBX + 0x170),&stack0x0000004c,1,4,0);
    if (local_int5 != 0) break;
  }
label_:
  local_int4 = function_(*(uint64_t *)(unaff_RBX + 0x170),in_stack_00000050,0);
  if (local_int4 == 0) {
    *local_pointer2 = (uint)unaff_R15;
    unaff_R15 = 0;
label_:
    if (unaff_R13B != '\0') {
      local_int4 = *(int *)(*(longlong *)(unaff_RBX + 8) + 0x14);
      if (local_int4 != -1) {
        *(int *)(*(longlong *)(unaff_RBX + 8) + 0x14) = local_int4 - *(int *)(unaff_RBX + 0x110);
      }
    }
    if ((*(longlong *)(unaff_RBX + 0x1d0) != 0) && ((unaff_R12D & 0x4000) == 0)) {
      function_(*(uint64_t *)(_global_data + 0x1a0),*(longlong *)(unaff_RBX + 0x1d0),
                    &unknown_data,0x282,1);
    }
    *(ulonglong *)(unaff_RBX + 0x178) = unaff_R15;
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 0x1c) = 0x480;
    function_();
  }
label_:
  function_(*(ulonglong *)(unaff_RBP + 0x4ab0) ^ (ulonglong)&stack0x00000000);
}
      global_data = '\x01';
    }
    if (((in_stack_00000040._4_4_ != unaff_R15D) ||
        (local_int4 = (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x10))
                           (*(longlong **)(unaff_RDI + 0x170),(longlong)&stack0x00000040 + 4),
        local_int4 == 0)) &&
       (local_int4 = function_(*(uint64_t *)(unaff_RDI + 0x170),*(uint32_t *)(unaff_RDI + 0x110),
                              0), local_int4 == 0)) {
      memset(unaff_RDI + 0x178,0,0x330);
    }
  }
function_:
  function_(*(ulonglong *)(unaff_RBP + 0x218) ^ (ulonglong)&stack0x00000000);
}
      global_data = 0;
      _global_data = local_uint1;
      function_(&global_data);
    }
  }
  return &global_data;
}
uint64_t function_(uint64_t *system_context,longlong network_context,char thread_context,char memory_context)
{
  int local_int1;
  uint local_uint2;
  uint *data_definitions_local_pointer3;
  uint64_t local_uint4;
  uint8_t data_definitions_local_uint5;
  ulonglong uStackX_10;
  uint auStack_28 [2];
  ulonglong uStack_20;
  if (*(int *)(network_context + 0x18) < *(int *)(*(longlong *)(network_context + 0x10) + 0xb4)) {
label_:
    data_definitions_local_uint5 = 0;
  }
  else {
    local_int1 = *(int *)(*(longlong *)(network_context + 0x10) + 0xbc);
    if (local_int1 == 0) {
      return 0;
    }
    if (local_int1 != 2) goto label_;
    data_definitions_local_uint5 = 1;
  }
  data_definitions_local_pointer3 = (uint *)function_();
  uStack_20 = 0;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  auStack_28[0] = *data_definitions_local_pointer3;
  local_uint4 = function_(system_context,*(uint64_t *)(network_context + 0x10),auStack_28,&uStack_20,&uStackX_10);
  if ((int)local_uint4 != 0) {
    return local_uint4;
  }
  if ((char)uStackX_10 == (char)local_uint4) {
    return 0;
  }
  uStackX_10 = 0;
  data_definitions_local_pointer3 = (uint *)function_();
  local_uint2 = *(uint *)((longlong)system_context + 0xc);
  if (((local_uint2 != *data_definitions_local_pointer3) && (*(uint *)(system_context + 4) <= local_uint2)) &&
     (local_uint2 < *(uint *)((longlong)system_context + 0x24))) {
    if (local_uint2 == auStack_28[0]) {
      return 0x1c;
    }
    local_uint2 = func_0x000180856540(*system_context,local_uint2 - *(int *)(system_context + 1));
    uStackX_10 = local_uint2 + uStack_20;
    if (uStackX_10 == uStack_20) {
      uStackX_10 = uStack_20 + 1;
    }
  }
  function_();
  if (thread_context != '\0') {
    local_uint4 = function_(system_context,network_context,network_context + 0x20,&uStack_20,&uStackX_10,data_definitions_local_uint5,0);
    if ((int)local_uint4 != 0) {
      return local_uint4;
    }
    *(int *)(network_context + 0x18) = *(int *)(network_context + 0x18) + 1;
  }
  if (memory_context == '\0') {
    return 0;
  }
  if (thread_context != '\0') {
    if (*(int *)(*(longlong *)(network_context + 0x10) + 0xb4) <= *(int *)(network_context + 0x18)) {
      local_int1 = *(int *)(*(longlong *)(network_context + 0x10) + 0xbc);
      if (local_int1 == 0) {
        return 0;
      }
      if (local_int1 == 2) {
        data_definitions_local_uint5 = 1;
        goto label_;
      }
    }
    data_definitions_local_uint5 = 0;
  }
label_:
  local_uint4 = function_(system_context,network_context,network_context + 0x28,&uStack_20,&uStackX_10,data_definitions_local_uint5,1);
  if ((int)local_uint4 == 0) {
    *(int *)(network_context + 0x18) = *(int *)(network_context + 0x18) + 1;
    return 0;
  }
  return local_uint4;
}
uint64_t
function_(longlong system_context,longlong network_context,longlong *thread_context,longlong *memory_context,
             uint64_t *param_5,char param_6,char param_7)
{
  uint local_uint1;
  longlong local_long2;
  byte local_bool3;
  uint32_t *data_definitions_local_pointer4;
  uint64_t data_definitions_local_uint5;
  uint64_t local_uint6;
  longlong local_long7;
  longlong data_definitions_local_long8;
  uint32_t local_uint9;
  longlong lStackX_8;
  uint8_t auStack_28 [16];
  local_uint6 = *(uint64_t *)(system_context + 0x28);
  data_definitions_local_pointer4 = (uint32_t *)function_();
  local_long2 = *memory_context;
  local_uint9 = *data_definitions_local_pointer4;
  data_definitions_local_long8 = local_long2;
  if ((*(uint *)(network_context + 0x1c) >> 1 & 1) != 0) {
    data_definitions_local_long8 = *thread_context;
    local_long7 = local_long2 - data_definitions_local_long8;
    local_uint6 = *(uint64_t *)(system_context + 0x30);
    if (-1 < local_long7) {
      if (local_long7 < 1) {
        local_uint9 = 0;
        data_definitions_local_long8 = local_long2;
      }
      else {
        local_uint1 = *(uint *)(*(longlong *)(*(longlong *)(system_context + 0x38) + 8) + 0x774);
        if (local_uint1 != 48000) {
          local_long7 = (local_long7 * 48000) / (longlong)(ulonglong)local_uint1;
        }
        if (0xffffffff < local_long7) {
          local_long7 = 0xffffffff;
        }
        local_uint9 = (uint32_t)local_long7;
        data_definitions_local_long8 = local_long2;
      }
    }
  }
  if (param_6 != '\0') {
    (**(code **)(**(longlong **)(network_context + 0x10) + 0x30))(*(longlong **)(network_context + 0x10),auStack_28)
    ;
    data_definitions_local_uint5 = function_(local_uint6,auStack_28,data_definitions_local_long8,
                          *(uint32_t *)(*(longlong *)(network_context + 0x10) + 0xb4));
    if ((int)data_definitions_local_uint5 != 0) {
      return data_definitions_local_uint5;
    }
  }
  local_uint6 = function_(local_uint6,*(uint64_t *)(network_context + 0x10),data_definitions_local_long8,*param_5,local_uint9,0,0,&lStackX_8);
  if ((int)local_uint6 == 0) {
    if (param_7 != (char)local_uint6) {
      func_0x0001808cf230(lStackX_8,data_definitions_local_long8);
    }
    local_bool3 = (byte)(*(uint *)(network_context + 0x1c) >> 4) & 1;
    *(uint *)(lStackX_8 + 0x4c) =
         ~((local_bool3 ^ 1) * 2) & ((uint)local_bool3 + (uint)local_bool3 | *(uint *)(lStackX_8 + 0x4c));
    local_uint6 = 0;
  }
  return local_uint6;
}
    global_data = '\x01';
  }
  return 0;
}
uint64_t function_(void)
{
  char local_char1;
  int data_definitions_local_int2;
  uint data_definitions_local_uint3;
  uint64_t in_stack_00000030;
  func_0x0001808f62c0();
  func_0x0001808f62a0(free_exref);
  data_definitions_local_int2 = timeGetDevCaps(&stack0x00000030,8);
  data_definitions_local_uint3 = 1;
  if (data_definitions_local_int2 == 0) {
    data_definitions_local_uint3 = 1;
    if (1 < (uint)in_stack_00000030) {
      data_definitions_local_uint3 = (uint)in_stack_00000030;
    }
  }
  func_0x0001808f6640(data_definitions_local_uint3);
  local_char1 = function_();
  if (local_char1 == '\0') {
    return 0x809200ff;
  }
  global_data = 1;
  return 0;
}
uint64_t function_(void)
{
  return 0x809200ff;
}
uint32_t function_(int system_context,int network_context,int thread_context)
{
  int local_int1;
  uint32_t local_uint2;
  uint32_t auStack_18 [4];
  if (global_data == '\0') {
    return 0x80920005;
  }
  if (((network_context != 0) || (thread_context != 0)) || (3 < system_context - 1U)) {
    return 0x80920001;
  }
  local_int1 = function_();
  if (local_int1 != 0) {
    return 0x809200ff;
  }
  local_int1 = function_(system_context,auStack_18);
  if (local_int1 < 0) {
    local_uint2 = 0x809200ff;
    if (local_int1 == -0x7ffeffff) {
      local_uint2 = 0x80920004;
    }
    func_0x0001808f6ce0();
    return local_uint2;
  }
  func_0x0001808f6ce0();
  return auStack_18[0];
}
uint64_t function_(uint32_t system_context,uint *network_context)
{
  longlong data_definitions_system_result;
  uint local_uint2;
  uint data_definitions_local_uint3;
  char local_char4;
  byte local_bool5;
  int data_definitions_local_int6;
  uint local_uint7;
  uint16_t *local_pointer8;
  uint16_t *local_pointer9;
  byte abStackX_18 [8];
  longlong lStackX_20;
  if (global_data == '\0') {
    return 0x80920005;
  }
  if (network_context == (uint *)0x0) {
    return 0x80920001;
  }
  data_definitions_local_int6 = function_();
  if (data_definitions_local_int6 != 0) {
    return 0x809200ff;
  }
  data_definitions_local_int6 = func_0x0001808f0200(system_context);
  if (data_definitions_local_int6 < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  function_(network_context);
  data_definitions_local_int6 = func_0x0001808f0760(system_context,&lStackX_20);
  if (data_definitions_local_int6 == 0) {
    function_(system_context,abStackX_18);
    if (*(longlong *)(lStackX_20 + 0x160) != 0) {
      local_char4 = func_0x0001808f2030();
      local_uint7 = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0xc);
      if (local_char4 == '\0') {
        local_uint7 = local_uint7 & 0xffdefffe;
      }
      *network_context = local_uint7;
      *(uint8_t *)(network_context + 1) = *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x10);
      *(uint8_t *)((longlong)network_context + 5) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x11);
      *(uint8_t *)((longlong)network_context + 6) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x12);
      *(uint8_t *)((longlong)network_context + 7) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x13);
      *(uint8_t *)((longlong)network_context + 9) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x15);
      *(uint8_t *)(network_context + 2) = *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x14);
      if ((*(char *)(lStackX_20 + 0x68) == '\x01') && ((abStackX_18[0] & 8) != 0)) {
        data_definitions_system_result = *(longlong *)(lStackX_20 + 0x160);
        local_uint7 = *(uint *)(data_definitions_system_result + 0x74);
        local_uint2 = *(uint *)(data_definitions_system_result + 0x78);
        data_definitions_local_uint3 = *(uint *)(data_definitions_system_result + 0x7c);
        network_context[3] = *(uint *)(data_definitions_system_result + 0x70);
        network_context[4] = local_uint7;
        network_context[5] = local_uint2;
        network_context[6] = data_definitions_local_uint3;
        network_context[7] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x60);
        network_context[8] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 100);
        network_context[9] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x68);
        network_context[10] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x54);
        network_context[0xb] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x58);
        network_context[0xc] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x5c);
      }
      else {
        func_0x0001808f6f90(network_context + 3);
        func_0x0001808f6f70(network_context + 7);
        func_0x0001808f6f80(network_context + 10);
      }
      *(uint8_t *)(network_context + 0x13) = 1;
      *(uint8_t *)(network_context + 0x1a) = *(uint8_t *)(lStackX_20 + 1);
      *(uint64_t *)(network_context + 0x14) = **(uint64_t **)(lStackX_20 + 0x160);
      data_definitions_system_result = *(longlong *)(lStackX_20 + 0x160);
      local_bool5 = *(byte *)(data_definitions_system_result + 0x19);
      if (2 < *(byte *)(data_definitions_system_result + 0x19)) {
        local_bool5 = 2;
      }
      data_definitions_local_int6 = 0;
      *(byte *)(network_context + 0xd) = local_bool5;
      if (*(char *)(data_definitions_system_result + 0x19) != '\0') {
        local_pointer8 = (uint16_t *)((longlong)network_context + 0x3e);
        local_pointer9 = (uint16_t *)(data_definitions_system_result + 0x1e);
        do {
          data_definitions_local_int6 = data_definitions_local_int6 + 1;
          local_pointer8[-1] = local_pointer9[-1];
          *local_pointer8 = *local_pointer9;
          *(uint8_t *)(local_pointer8 + 1) = *(uint8_t *)(local_pointer9 + -2);
          local_pointer8 = local_pointer8 + 4;
          local_pointer9 = local_pointer9 + 3;
        } while (data_definitions_local_int6 < (int)(uint)*(byte *)(data_definitions_system_result + 0x19));
      }
    }
  }
  func_0x0001808f6ce0();
  return 0;
}
int function_(uint32_t system_context,byte *network_context)
{
  char local_char1;
  int data_definitions_local_int2;
  longlong local_long3;
  if (global_data == '\0') {
    return -0x7f6dfffb;
  }
  if (network_context == (byte *)0x0) {
    return -0x7f6dffff;
  }
  data_definitions_local_int2 = function_();
  if (data_definitions_local_int2 != 0) {
    return -0x7f6dff01;
  }
  data_definitions_local_int2 = func_0x0001808f0200(system_context);
  if (data_definitions_local_int2 < 0) {
    func_0x0001808f6ce0();
    return -0x7f6dfffd;
  }
  local_long3 = func_0x0001808f0dd0(system_context,0);
  if (local_long3 != 0) {
    local_char1 = func_0x0001808f0e30(*(uint16_t *)(local_long3 + 2),*(uint16_t *)(local_long3 + 4));
    if ((((local_char1 == '\0') && (*network_context < 0xd)) && (network_context[1] < 0xd)) && (network_context[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    data_definitions_local_int2 = function_(system_context,network_context);
    if (-1 < data_definitions_local_int2) {
      *(byte *)(local_long3 + 0x23e8) = *network_context;
      *(byte *)(local_long3 + 0x23e9) = network_context[1];
      *(byte *)(local_long3 + 0x23ea) = network_context[2];
      *(byte *)(local_long3 + 0x23ec) = *network_context;
      *(byte *)(local_long3 + 0x23ed) = network_context[1];
      *(byte *)(local_long3 + 0x23ee) = network_context[2];
      func_0x0001808f6ce0();
      return data_definitions_local_int2;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int function_(void)
{
  char local_char1;
  int data_definitions_local_int2;
  longlong local_long3;
  byte *unaff_RBX;
  uint32_t unaff_ESI;
  local_long3 = func_0x0001808f0dd0(unaff_ESI);
  if (local_long3 != 0) {
    local_char1 = func_0x0001808f0e30(*(uint16_t *)(local_long3 + 2),*(uint16_t *)(local_long3 + 4));
    if ((((local_char1 == '\0') && (*unaff_RBX < 0xd)) && (unaff_RBX[1] < 0xd)) && (unaff_RBX[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    data_definitions_local_int2 = function_(unaff_ESI);
    if (-1 < data_definitions_local_int2) {
      *(byte *)(local_long3 + 0x23e8) = *unaff_RBX;
      *(byte *)(local_long3 + 0x23e9) = unaff_RBX[1];
      *(byte *)(local_long3 + 0x23ea) = unaff_RBX[2];
      *(byte *)(local_long3 + 0x23ec) = *unaff_RBX;
      *(byte *)(local_long3 + 0x23ed) = unaff_RBX[1];
      *(byte *)(local_long3 + 0x23ee) = unaff_RBX[2];
      func_0x0001808f6ce0();
      return data_definitions_local_int2;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int function_(void)
{
  int local_int1;
  uint8_t *unaff_RBX;
  uint32_t unaff_ESI;
  longlong unaff_RDI;
  local_int1 = function_(unaff_ESI);
  if (-1 < local_int1) {
    *(uint8_t *)(unaff_RDI + 0x23e8) = *unaff_RBX;
    *(uint8_t *)(unaff_RDI + 0x23e9) = unaff_RBX[1];
    *(uint8_t *)(unaff_RDI + 0x23ea) = unaff_RBX[2];
    *(uint8_t *)(unaff_RDI + 0x23ec) = *unaff_RBX;
    *(uint8_t *)(unaff_RDI + 0x23ed) = unaff_RBX[1];
    *(uint8_t *)(unaff_RDI + 0x23ee) = unaff_RBX[2];
    func_0x0001808f6ce0();
    return local_int1;
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
uint64_t function_(void)
{
  func_0x0001808f6ce0();
  return 0x809200ff;
}
          global_data = data_definitions_local_bool1;
          *network_context = local_int3;
          *(int *)(local_long4 + 0x10) = local_int3;
          *(int *)(local_long4 + 0x18) = local_int5;
          func_0x0001808f0b40(local_long4);
          return 0;
        }
        local_long4 = local_long4 + 0x2408;
      } while (local_long4 < 0x180c58840);
      return 0x8001002d;
    }
  }
  data_definitions_local_bool1 = global_data + 1;
  if (data_definitions_local_bool1 == 0) {
    data_definitions_local_bool1 = global_data + 2;
  }
  local_int3 = (uint)data_definitions_local_bool1 * 0x100 + local_int5;
  global_data = data_definitions_local_bool1;
  *network_context = local_int3;
  *pdata_definitions_local_int2 = local_int3;
  pdata_definitions_local_int2[2] = local_int5;
  func_0x0001808f0b40(pdata_definitions_local_int2 + -4);
  return 0;
}
longlong function_(void)
{
  uint local_uint1;
  local_uint1 = timeGetTime();
  return (ulonglong)local_uint1 * 1000;
}
uint function_(longlong system_context,int network_context,int thread_context,char memory_context)
{
  ulonglong local_uint1;
  byte local_bool2;
  int local_int3;
  int local_int4;
  uint data_definitions_local_uint5;
  uint local_uint6;
  data_definitions_local_uint5 = 0;
  local_uint6 = 0;
  local_int3 = 0;
  local_int4 = local_int3;
  if (0 < thread_context) {
    do {
      local_bool2 = (byte)network_context & 7;
      local_int4 = network_context;
      if (network_context < 0) {
        local_int4 = network_context + 7;
        local_bool2 = local_bool2 - 8;
      }
      network_context = network_context + 1;
      local_uint6 = *(byte *)((local_int4 >> 3) + system_context) >> (local_bool2 & 0x1f) & 1;
      local_int4 = local_int3 + 1;
      data_definitions_local_uint5 = data_definitions_local_uint5 | local_uint6 << ((byte)local_int3 & 0x1f);
      local_int3 = local_int4;
    } while (local_int4 < thread_context);
  }
  if (((memory_context != '\0') && (local_uint6 != 0)) && (local_int4 < 0x20)) {
    local_bool2 = (byte)local_int4 & 0x1f;
    local_uint6 = 1 << local_bool2 | 1U >> 0x20 - local_bool2;
    local_uint1 = (ulonglong)(0x20 - local_int4);
    do {
      data_definitions_local_uint5 = data_definitions_local_uint5 | local_uint6;
      local_uint6 = local_uint6 << 1 | (uint)((int)local_uint6 < 0);
      local_uint1 = local_uint1 - 1;
    } while (local_uint1 != 0);
  }
  return data_definitions_local_uint5;
}
  global_data = 1;
  global_data = 1;
  global_data = 1;
  global_data = 1;
  _global_data = _beginthread(function_,0,0);
  if ((_global_data != -1) &&
     (_global_data = _beginthread(function_,0,0), _global_data != -1)) {
    return 1;
  }
  return 0;
}
  global_data = 1;
  return;
}
uint32_t function_(byte system_context,byte *network_context,int thread_context)
{
  uint *local_pointer1;
  byte local_bool2;
  uint data_definitions_local_uint3;
  thread_context = thread_context + -4;
  local_pointer1 = (uint *)(network_context + thread_context);
  data_definitions_local_uint3 = *(uint *)(&unknown_data + (ulonglong)(byte)~system_context * 4) ^ 0xffffff;
  for (; 0 < thread_context; thread_context = thread_context + -1) {
    local_bool2 = *network_context;
    network_context = network_context + 1;
    data_definitions_local_uint3 = *(uint *)(&unknown_data + (ulonglong)(byte)(local_bool2 ^ (byte)data_definitions_local_uint3) * 4) ^ data_definitions_local_uint3 >> 8;
  }
  return CONCAT31((int3)(~data_definitions_local_uint3 >> 8),*local_pointer1 != ~data_definitions_local_uint3);
}
float * function_(float *system_context,float *network_context,float *thread_context)
{
  float local_float1;
  float local_float2;
  float local_float3;
  float local_float4;
  float local_float5;
  float local_float6;
  float local_float7;
  float local_float8;
  local_float1 = *thread_context;
  local_float2 = system_context[3];
  local_float3 = system_context[1];
  local_float4 = *system_context;
  local_float5 = thread_context[1];
  local_float6 = system_context[2];
  local_float7 = thread_context[2];
  local_float8 = thread_context[3];
  *network_context = (local_float4 * local_float8 + local_float1 * local_float2 + local_float3 * local_float7) - local_float6 * local_float5;
  network_context[1] = (local_float3 * local_float8 + local_float5 * local_float2 + local_float6 * local_float1) - local_float7 * local_float4;
  network_context[3] = ((local_float8 * local_float2 - local_float4 * local_float1) - local_float5 * local_float3) - local_float6 * local_float7;
  network_context[2] = (local_float6 * local_float8 + local_float7 * local_float2 + local_float5 * local_float4) - local_float3 * local_float1;
  return network_context;
}
uint64_t function_(uint64_t system_context,uint32_t *network_context)
{
  longlong data_definitions_system_result;
  data_definitions_system_result = func_0x0001808f0dd0(system_context,0);
  if (data_definitions_system_result != 0) {
    *network_context = *(uint32_t *)(data_definitions_system_result + 100);
    return 0;
  }
  return 0x8001002d;
}
      global_data = '\0';
      if (_global_data == 0) {
        data_definitions_local_long6 = function_(&unknown_data);
        if (data_definitions_local_long6 != 0) {
          local_long7 = LoadLibraryExW(data_definitions_local_long6,0,0);
        }
        LocalFree(data_definitions_local_long6);
        _global_data = local_long7;
        if (local_long7 == 0) goto label_;
      }
      if ((((_global_data == (code *)0x0) &&
           (_global_data = (code *)GetProcAddress(_global_data,&unknown_data),
           _global_data == (code *)0x0)) ||
          ((_global_data == 0 &&
           (_global_data = GetProcAddress(_global_data,&unknown_data), _global_data == 0))))
         || ((_global_data == 0 &&
             (_global_data = GetProcAddress(_global_data,&unknown_data), _global_data == 0)))
         ) goto label_;
      if ((_global_data == 0) &&
         (_global_data = function_(&unknown_data,0), _global_data != 0)) {
        _global_data = (code *)GetProcAddress(_global_data,&unknown_data);
      }
      plocal_char2 = _global_data;
      if (_global_data == (code *)0x0) goto label_;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      _guard_check_icall(_global_data);
      local_int5 = (*plocal_char2)(&uStack_1d0,&uStack_198,0x27);
      if (local_int5 != 0x27) goto label_;
      for (local_pointer11 = auStack_1c0; plocal_char2 = _global_data, local_uint10 = *local_pointer11, local_uint10 != 0;
          local_pointer11 = local_pointer11 + 1) {
        uStack_1d8 = 0;
        _guard_check_icall(_global_data);
        puStack_208 = &uStack_1d8;
        local_int5 = (*plocal_char2)(0xffffffff80000002,&unknown_data,0,local_uint10 | 0x20019);
        if (local_int5 == 0) {
          uStack_1e8 = 0x80;
          uStack_1e4 = 4;
          memset(auStack_148,0,0x100);
        }
      }
    }
    if (global_data == '\0') {
      SetLastError(network_context & 0xffffffff);
      goto label_;
    }
  }
  OutputDebugStringW(&unknown_data);
  SetLastError(0);
label_:
  function_(uStack_48 ^ (ulonglong)auStack_228);
}
          file_operation_status = local_int3 == 1;
          SetConsoleTitleA(&unknown_data);
        }
      }
      file_operation_result = file_operation_status == '\0';
      if (file_handle_primary == 0) {
        local_long4 = _wfsopen(system_context,&unknown_data,0x40);
        if (local_long4 == 0) {
          system_handle_error(&file_error_handler,0xc1,&file_error_context,&unknown_data,system_context);
          data_definitions_local_bool10 = false;
        }
        else {
          fclose(local_long4);
          function_(&file_error_handler,200,&file_error_context,&unknown_data,system_context);
          data_definitions_local_long6 = _wcsdup(system_context);
          local_long4 = -1;
          if (data_definitions_local_long6 != 0) {
            do {
              local_long7 = local_long4;
              local_long4 = local_long7 + 1;
            } while (*(short *)(system_context + 2 + local_long7 * 2) != 0);
            local_long4 = local_long7;
            while( true ) {
              data_definitions_local_long9 = 0;
              if (((local_long4 == 0) || (sVar1 = *(short *)(data_definitions_local_long6 + local_long4 * 2), data_definitions_local_long9 = 0, sVar1 == 0x2f)
                  ) || (data_definitions_local_long9 = 0, sVar1 == 0x5c)) goto label_;
              if (sVar1 == 0x2e) break;
              local_long4 = local_long4 + -1;
            }
            *(uint16_t *)(data_definitions_local_long6 + local_long4 * 2) = 0;
            data_definitions_local_long9 = data_definitions_local_long6 + 2 + local_long4 * 2;
label_:
            local_long7 = local_long7 + 9;
            local_long4 = malloc(local_long7 * 2);
            if (local_long4 == 0) {
              free(data_definitions_local_long6);
              return false;
            }
            local_int3 = 1;
            local_long2 = file_handle_primary;
            do {
              file_handle_primary = local_long2;
              if (data_definitions_local_long9 == 0) {
                system_format_string(local_long4,local_long7,&file_path_template_primary,data_definitions_local_long6,local_int3);
              }
              else {
                system_format_string(local_long4,local_long7,&file_path_template_secondary,data_definitions_local_long6,local_int3,data_definitions_local_long9);
              }
              file_handle_primary = _wfsopen(local_long4,local_pointer8,0x20);
              if (file_handle_primary != 0) {
                local_pointer8 = &file_error_message_primary;
                data_definitions_local_uint5 = 0xeb;
                system_context = local_long4;
                goto label_;
              }
              local_int3 = local_int3 + 1;
              local_long2 = 0;
            } while (local_int3 < 9);
            local_pointer8 = &file_error_message_secondary;
            data_definitions_local_uint5 = 0xef;
label_:
            system_handle_error(&file_error_handler,data_definitions_local_uint5,&file_error_context,local_pointer8,system_context);
            free(data_definitions_local_long6);
            free(local_long4);
          }
          data_definitions_local_bool10 = file_handle_primary != 0;
        }
      }
      else {
        system_handle_error(&file_error_handler,0xb4,&file_error_context,&unknown_data,system_context);
        data_definitions_local_bool10 = true;
      }
      return data_definitions_local_bool10;
    }
  }
  file_operation_result = file_operation_status == '\0';
  return true;
}
bool function_(void)
{
  short sVar1;
  longlong local_long2;
  uint data_definitions_local_uint3;
  int local_int4;
  longlong local_long5;
  uint64_t local_uint6;
  longlong local_long7;
  longlong data_definitions_local_long8;
  longlong data_definitions_local_long9;
  char unaff_SIL;
  longlong unaff_RDI;
  short sVar10;
  longlong unaff_R12;
  void *local_pointer11;
  bool data_definitions_local_bool12;
  uint in_stack_00000090;
  uint in_stack_00000098;
  if (unaff_RDI != 0) {
    local_long5 = -1;
    do {
      local_long5 = local_long5 + 1;
      sVar10 = (short)unaff_R12;
    } while (*(short *)(unaff_RDI + local_long5 * 2) != sVar10);
    if (local_long5 != 0) {
      local_pointer11 = &unknown_data;
      if (unaff_SIL != '\0') {
        local_pointer11 = &unknown_data;
      }
      file_handle_primary = _wfsopen();
      if ((1 < _global_data) && ((uint)unaff_R12 < in_stack_00000090)) {
        local_uint6 = GetConsoleWindow();
        in_stack_00000098 = (uint)unaff_R12;
        GetWindowThreadProcessId(local_uint6,&stack0x00000098);
        data_definitions_local_uint3 = GetCurrentProcessId();
        if (data_definitions_local_uint3 != in_stack_00000098) {
          local_int4 = AllocConsole();
          file_operation_status = local_int4 == 1;
          SetConsoleTitleA(&unknown_data);
        }
      }
      file_operation_result = file_operation_status == (char)unaff_R12;
      if (file_handle_primary == unaff_R12) {
        local_long5 = _wfsopen();
        if (local_long5 == 0) {
          system_handle_error(&file_error_handler,0xc1,&file_error_context,&unknown_data);
          data_definitions_local_bool12 = false;
        }
        else {
          fclose(local_long5);
          function_(&file_error_handler,200,&file_error_context,&unknown_data);
          local_long7 = _wcsdup();
          local_long5 = -1;
          if (local_long7 != 0) {
            do {
              data_definitions_local_long9 = local_long5;
              local_long5 = data_definitions_local_long9 + 1;
              data_definitions_local_long8 = data_definitions_local_long9;
            } while (*(short *)(unaff_RDI + 2 + data_definitions_local_long9 * 2) != sVar10);
            while( true ) {
              local_long5 = unaff_R12;
              if (((data_definitions_local_long8 == 0) || (sVar1 = *(short *)(local_long7 + data_definitions_local_long8 * 2), sVar1 == 0x2f)) ||
                 (sVar1 == 0x5c)) goto label_;
              if (sVar1 == 0x2e) break;
              data_definitions_local_long8 = data_definitions_local_long8 + -1;
            }
            *(short *)(local_long7 + data_definitions_local_long8 * 2) = sVar10;
            local_long5 = local_long7 + 2 + data_definitions_local_long8 * 2;
label_:
            data_definitions_local_long9 = data_definitions_local_long9 + 9;
            data_definitions_local_long8 = malloc(data_definitions_local_long9 * 2);
            if (data_definitions_local_long8 == 0) {
              free(local_long7);
              return false;
            }
            local_int4 = 1;
            local_long2 = file_handle_primary;
            do {
              file_handle_primary = local_long2;
              if (local_long5 == 0) {
                system_format_string(data_definitions_local_long8,data_definitions_local_long9,&file_path_template_primary,local_long7,local_int4);
              }
              else {
                system_format_string(data_definitions_local_long8,data_definitions_local_long9,&file_path_template_secondary,local_long7,local_int4);
              }
              file_handle_primary = _wfsopen(data_definitions_local_long8,local_pointer11,0x20);
              if (file_handle_primary != 0) {
                local_pointer11 = &file_error_message_primary;
                local_uint6 = 0xeb;
                goto label_;
              }
              local_int4 = local_int4 + 1;
              local_long2 = 0;
            } while (local_int4 < 9);
            local_pointer11 = &file_error_message_secondary;
            local_uint6 = 0xef;
label_:
            system_handle_error(&file_error_handler,local_uint6,&file_error_context,local_pointer11);
            free(local_long7);
            free(data_definitions_local_long8);
          }
          data_definitions_local_bool12 = file_handle_primary != unaff_R12;
        }
      }
      else {
        system_handle_error(&file_error_handler,0xb4,&file_error_context,&unknown_data);
        data_definitions_local_bool12 = true;
      }
      return data_definitions_local_bool12;
    }
  }
  file_operation_result = file_operation_status == (char)unaff_R12;
  return true;
}
bool function_(void)
{
  short sVar1;
  longlong local_long2;
  longlong local_long3;
  longlong local_long4;
  uint64_t data_definitions_local_uint5;
  int data_definitions_local_int6;
  longlong unaff_RBX;
  longlong local_long7;
  longlong unaff_RDI;
  void *local_pointer8;
  longlong unaff_R12;
  longlong data_definitions_local_long9;
  fclose();
  function_(&file_error_handler,200,&file_error_context,&unknown_data);
  local_long3 = _wcsdup();
  if (local_long3 != 0) {
    do {
      local_long7 = unaff_RBX;
      unaff_RBX = local_long7 + 1;
      local_long4 = local_long7;
    } while (*(short *)(unaff_RDI + 2 + local_long7 * 2) != (short)unaff_R12);
    while( true ) {
      data_definitions_local_long9 = unaff_R12;
      if (((local_long4 == 0) || (sVar1 = *(short *)(local_long3 + local_long4 * 2), sVar1 == 0x2f)) ||
         (sVar1 == 0x5c)) goto label_;
      if (sVar1 == 0x2e) break;
      local_long4 = local_long4 + -1;
    }
    *(short *)(local_long3 + local_long4 * 2) = (short)unaff_R12;
    data_definitions_local_long9 = local_long3 + 2 + local_long4 * 2;
label_:
    local_long7 = local_long7 + 9;
    local_long4 = malloc(local_long7 * 2);
    if (local_long4 == 0) {
      free(local_long3);
      return false;
    }
    data_definitions_local_int6 = 1;
    local_long2 = file_handle_primary;
    do {
      file_handle_primary = local_long2;
      if (data_definitions_local_long9 == 0) {
        system_format_string(local_long4,local_long7,&file_path_template_primary,local_long3,data_definitions_local_int6);
      }
      else {
        system_format_string(local_long4,local_long7,&file_path_template_secondary,local_long3,data_definitions_local_int6);
      }
      file_handle_primary = _wfsopen(local_long4);
      if (file_handle_primary != 0) {
        local_pointer8 = &file_error_message_primary;
        data_definitions_local_uint5 = 0xeb;
        goto label_;
      }
      data_definitions_local_int6 = data_definitions_local_int6 + 1;
      local_long2 = 0;
    } while (data_definitions_local_int6 < 9);
    local_pointer8 = &file_error_message_secondary;
    data_definitions_local_uint5 = 0xef;
label_:
    system_handle_error(&file_error_handler,data_definitions_local_uint5,&file_error_context,local_pointer8);
    free(local_long3);
    free(local_long4);
  }
  return file_handle_primary != unaff_R12;
}
  file_operation_result = file_operation_status == unaff_R12B;
  return 1;
}
    string_operation_flag = '\x01';
    wcscpy_s(auStack_228,0x104,system_context);
    if ((string_operation_flag != '\0') && (wcscat_s(auStack_228,0x104,network_context), string_operation_flag != '\0')) {
      system_log_message(auStack_228,0);
    }
    _set_invalid_parameter_handler(local_uint1);
  }
  function_(uStack_18 ^ (ulonglong)auStack_248);
}
  string_operation_flag = '\x01';
  wcscpy_s(auStackX_20,0x104);
  if (string_operation_flag != '\0') {
    wcscat_s(auStackX_20,0x104);
    if (string_operation_flag != '\0') {
      system_log_message(auStackX_20,0);
    }
  }
  _set_invalid_parameter_handler(local_uint1);
  function_(in_stack_00000230 ^ (ulonglong)&stack0x00000000);
}
    system_runtime_flag = 1;
  }
  system_initialize_runtime();
  local_char1 = system_check_initialization();
  if (local_char1 != '\0') {
    local_char1 = system_check_initialization();
    if (local_char1 != '\0') {
      return 1;
    }
    system_check_initialization(0);
  }
  return 0;
}
uint64_t system_validate_parameter(uint system_context)
{
  code *plocal_char1;
  byte local_bool2;
  int local_int3;
  uint64_t local_uint4;
  if (system_initialized_flag == '\0') {
    if (1 < system_context) {
      system_raise_exception(5);
      plocal_char1 = (code *)swi(3);
      local_uint4 = (*plocal_char1)();
      return local_uint4;
    }
    local_int3 = func_0x0001808fd8d4();
    if ((local_int3 == 0) || (system_context != 0)) {
      local_bool2 = 0x40 - ((byte)system_config_mask & 0x3f) & 0x3f;
      system_exit_table_primary = (0xffffffffffffffffU >> local_bool2 | -1L << 0x40 - local_bool2) ^ system_config_mask;
      system_exit_table_secondary = system_exit_table_primary;
      system_exit_table_tertiary = system_exit_table_primary;
      system_exit_table_quaternary = system_exit_table_primary;
      system_exit_table_quinary = system_exit_table_primary;
      system_exit_table_senary = system_exit_table_primary;
    }
    else {
      local_int3 = system_initialize_exit_table(&global_data);
      if ((local_int3 != 0) || (local_int3 = system_initialize_exit_table(&global_data), local_int3 != 0)) {
        return 0;
      }
    }
    system_initialized_flag = '\x01';
  }
  return 1;
}
ulonglong system_get_section_info(longlong system_context)
{
  ulonglong local_uint1;
  uint7 local_uint2;
  IMAGE_SECTION_HEADER *pIVar3;
  local_uint1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_1800002a0; pIVar3 != (IMAGE_SECTION_HEADER *)&unknown_data;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= system_context - 0x180000000U) &&
       (local_uint1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       system_context - 0x180000000U < local_uint1)) goto label_;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
label_:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    local_uint1 = local_uint1 & 0xffffffffffffff00;
  }
  else {
    local_uint2 = (uint7)(local_uint1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      local_uint1 = (ulonglong)local_uint2 << 8;
    }
    else {
      local_uint1 = system_concat_int7_byte1(local_uint2,1);
    }
  }
  return local_uint1;
}

#endif // DATA_DEFINITIONS_H
