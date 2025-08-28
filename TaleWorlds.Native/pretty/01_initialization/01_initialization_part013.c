#include "TaleWorlds.Native.Split.h"

// 01_initialization_part013.c - 初始化模块第13部分
// 本文件包含28个函数，主要负责系统初始化、字符串处理、线程管理等功能

// 函数: void initialize_string_processor_016(void)
// 初始化字符串处理器016
void initialize_string_processor_016(void)

{
  uint64_t in_R9;
  void *string_processor_ptr;
  int8_t *buffer_ptr;
  int32_t buffer_size;
  int8_t buffer[136];
  
  string_processor_ptr = &STRING_PROCESSOR_BASE_016;
  buffer_ptr = buffer;
  buffer[0] = 0;
  buffer_size = 0x10;
  strcpy_s(buffer,0x80,&STRING_CONSTANT_016,in_R9,0xfffffffffffffffe);
  global_string_processor_016 = create_string_processor(&string_processor_ptr);
  return;
}

// 函数: uint64_t setup_thread_local_storage(void)
// 设置线程本地存储
uint64_t setup_thread_local_storage(void)

{
  int64_t tls_ptr;
  int *thread_data_ptr;
  
  tls_ptr = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  *(uint64_t *)(tls_ptr + 0x18) = &TLS_STORAGE_BASE_001;
  *(uint64_t *)(tls_ptr + 0x20) = 0;
  *(int32_t *)(tls_ptr + 0x28) = 0;
  *(uint64_t *)(tls_ptr + 0x18) = &TLS_STORAGE_BASE_002;
  *(uint64_t *)(tls_ptr + 0x30) = 0;
  *(uint64_t *)(tls_ptr + 0x20) = 0;
  *(int32_t *)(tls_ptr + 0x28) = 0;
  tls_ptr = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  thread_data_ptr = *(int **)(tls_ptr + 0x50);
  if (thread_data_ptr == (int *)0x0) {
    thread_data_ptr = (int *)(tls_ptr + 0x60);
  }
  else {
    if (*thread_data_ptr != 0x1e) goto LAB_THREAD_STORAGE_INIT;
    thread_data_ptr = (int *)malloc(0x100);
    free(0);
    if (thread_data_ptr == (int *)0x0) {
      return 0xffffffff;
    }
    *(uint64_t *)(thread_data_ptr + 2) = *(uint64_t *)(tls_ptr + 0x50);
  }
  *thread_data_ptr = 0;
  *(int **)(tls_ptr + 0x50) = thread_data_ptr;
LAB_THREAD_STORAGE_INIT:
  *(code **)(thread_data_ptr + (int64_t)*thread_data_ptr * 2 + 4) = THREAD_CALLBACK_HANDLER;
  *thread_data_ptr = *thread_data_ptr + 1;
  return 0;
}

// 函数: void initialize_string_processor_023(void)
// 初始化字符串处理器023
void initialize_string_processor_023(void)

{
  uint64_t in_R9;
  void *string_processor_ptr;
  int8_t *buffer_ptr;
  int32_t buffer_size;
  int8_t buffer[136];
  
  string_processor_ptr = &STRING_PROCESSOR_BASE_023;
  buffer_ptr = buffer;
  buffer[0] = 0;
  buffer_size = 0x17;
  strcpy_s(buffer,0x80,&STRING_CONSTANT_023,in_R9,0xfffffffffffffffe);
  global_string_processor_023 = create_string_processor(&string_processor_ptr);
  return;
}

// 函数: void initialize_string_processor_017(void)
// 初始化字符串处理器017
void initialize_string_processor_017(void)

{
  uint64_t in_R9;
  void *string_processor_ptr;
  int8_t *buffer_ptr;
  int32_t buffer_size;
  int8_t buffer[136];
  
  string_processor_ptr = &STRING_PROCESSOR_BASE_017;
  buffer_ptr = buffer;
  buffer[0] = 0;
  buffer_size = 0x11;
  strcpy_s(buffer,0x80,&STRING_CONSTANT_017,in_R9,0xfffffffffffffffe);
  global_string_processor_017 = create_string_processor(&string_processor_ptr);
  return;
}

// 函数: int initialize_system_components_001(void)
// 初始化系统组件001
int initialize_system_components_001(void)

{
  int64_t result;
  
  global_system_status_001 = 3;
  global_component_ptr_001 = &COMPONENT_DATA_001;
  global_component_ptr_002 = &COMPONENT_DATA_001;
  global_component_flag_001 = 0;
  global_component_flag_002 = 0;
  global_component_flag_003 = 0;
  result = register_system_callback(SYSTEM_CALLBACK_001);
  return (result != 0) - 1;
}

// 函数: int initialize_system_components_002(void)
// 初始化系统组件002
int initialize_system_components_002(void)

{
  int64_t result;
  int index;
  
  global_system_config_001 = 0x100;
  index = 0;
  do {
    configure_system_component(index,0x4000000000000000,0xffff7fff,0);
    index = index + 1;
  } while (index < 0xd);
  *(uint *)(global_system_base_001 + 0x330) = *(uint *)(global_system_base_001 + 0x330) | 4;
  global_system_flag_001 = 0xffffffff;
  result = register_system_callback(&SYSTEM_CALLBACK_002);
  return (result != 0) - 1;
}

// 函数: int initialize_system_components_003(void)
// 初始化系统组件003
int initialize_system_components_003(void)

{
  int64_t result;
  
  initialize_memory_pool_001(0x180c0c340);
  result = register_system_callback(&SYSTEM_CALLBACK_003);
  return (result != 0) - 1;
}

// 函数: void configure_display_adapter_001(void)
// 配置显示适配器001
void configure_display_adapter_001(void)

{
  int config_result;
  
  config_result = get_display_config(0);
  global_display_config_001 = 0x180be14a8;
  if (config_result != 0) {
    global_display_config_001 = 0x180be14c0;
  }
  return;
}

// 函数: void configure_display_adapter_002(void)
// 配置显示适配器002
void configure_display_adapter_002(void)

{
  int config_result;
  
  config_result = get_display_config(1);
  if (config_result != 0) {
    global_display_config_002 = 0x180be15c0;
    return;
  }
  config_result = get_display_config(0);
  global_display_config_002 = 0x180be14e0;
  if (config_result != 0) {
    global_display_config_002 = 0x180be1550;
  }
  return;
}

// 函数: void configure_display_adapter_003(void)
// 配置显示适配器003
void configure_display_adapter_003(void)

{
  int config_result;
  
  config_result = get_display_config(0);
  global_display_config_003 = 0x180be1c00;
  if (config_result != 0) {
    global_display_config_003 = 0x180be1c08;
  }
  return;
}

// 函数: void configure_display_adapter_004(void)
// 配置显示适配器004
void configure_display_adapter_004(void)

{
  int config_result;
  
  config_result = get_display_config(0);
  global_display_config_004 = 0x180be23a0;
  if (config_result != 0) {
    global_display_config_004 = 0x180be23c0;
  }
  return;
}

// 函数: void configure_display_adapter_005(void)
// 配置显示适配器005
void configure_display_adapter_005(void)

{
  int config_result;
  
  config_result = get_display_config(0);
  global_display_config_005 = 0x180be2ad8;
  if (config_result != 0) {
    global_display_config_005 = 0x180be2af8;
  }
  return;
}

// 函数: void configure_display_adapter_006(void)
// 配置显示适配器006
void configure_display_adapter_006(void)

{
  int config_result;
  
  config_result = get_display_config(0);
  global_display_config_006 = 0x180be4710;
  if (config_result != 0) {
    global_display_config_006 = 0x180be4728;
  }
  return;
}

// 函数: void configure_display_adapter_007(void)
// 配置显示适配器007
void configure_display_adapter_007(void)

{
  int config_result;
  
  config_result = get_display_config(1);
  if (config_result != 0) {
    global_display_config_007 = 0x180be6078;
    return;
  }
  config_result = get_display_config(0);
  global_display_config_007 = 0x180be6068;
  if (config_result != 0) {
    global_display_config_007 = 0x180be6070;
  }
  return;
}

// 函数: int initialize_system_components_004(void)
// 初始化系统组件004
int initialize_system_components_004(void)

{
  uint64_t *component_ptr;
  int64_t counter;
  
  component_ptr = (uint64_t *)0x180c35590;
  counter = 0x10;
  do {
    initialize_component(component_ptr);
    *component_ptr = &COMPONENT_BASE_001;
    component_ptr = component_ptr + 0x2b;
    counter = counter + -1;
  } while (counter != 0);
  counter = register_system_callback(&SYSTEM_CALLBACK_004);
  return (counter != 0) - 1;
}

// 函数: void configure_display_adapter_008(void)
// 配置显示适配器008
void configure_display_adapter_008(void)

{
  int config_result;
  
  config_result = get_display_config(0);
  global_display_config_008 = 0x180bebac8;
  if (config_result != 0) {
    global_display_config_008 = 0x180bebad8;
  }
  return;
}

// 函数: void configure_display_adapter_009(void)
// 配置显示适配器009
void configure_display_adapter_009(void)

{
  int config_result;
  
  config_result = get_display_config(3);
  if (config_result != 0) {
    global_display_config_009 = 0x180bebc10;
    return;
  }
  config_result = get_display_config(2);
  if (config_result != 0) {
    global_display_config_009 = 0x180bebbb0;
    return;
  }
  config_result = get_display_config(0);
  global_display_config_009 = 0x180bebaf0;
  if (config_result != 0) {
    global_display_config_009 = 0x180bebb50;
  }
  return;
}

// 函数: int initialize_system_components_005(void)
// 初始化系统组件005
int initialize_system_components_005(void)

{
  int64_t result;
  
  initialize_debug_system(0x180c4f510);
  result = register_system_callback(&SYSTEM_CALLBACK_005);
  return (result != 0) - 1;
}

// 函数: int initialize_system_components_006(void)
// 初始化系统组件006
int initialize_system_components_006(void)

{
  int64_t result;
  
  initialize_mutex(0x180c82170,2);
  result = register_system_callback(&SYSTEM_CALLBACK_006);
  return (result != 0) - 1;
}

// 函数: void wots_main_sdll(uint64_t param_1)
// Wots主SDL入口点
void wots_main_sdll(uint64_t param_1)

{
  uint64_t auStackX_18 [2];
  
  // SDL主函数实现
}

// 函数: void initialize_main_system(int64_t param_1)
// 初始化主系统
void initialize_main_system(int64_t param_1)

{
  int64_t system_state;
  int64_t *system_ptr;
  char system_flag;
  int64_t *stack_ptr_8;
  int64_t **stack_ptr_10;
  int64_t *stack_ptr_18;
  int64_t *stack_ptr_20;
  uint64_t system_param;
  
  system_param = 0xfffffffffffffffe;
  initialize_system_base();
  global_system_counter = global_system_counter + 1;
  initialize_system_core();
  if (global_system_root != (int64_t *)0x0) {
    if ((void *)*global_system_root == &SYSTEM_BASE_VTABLE) {
      system_flag = (char)global_system_root[2] != '\0';
    }
    else {
      system_flag = (**(code **)((void *)*global_system_root + 0x68))();
    }
    if (system_flag == '\0') goto LAB_SYSTEM_INITIALIZED;
  }
  system_ptr = (int64_t *)allocate_system_memory(global_system_heap,0xc0,8,3,system_param);
  stack_ptr_20 = system_ptr;
  initialize_system_component(system_ptr);
  *system_ptr = (int64_t)&SYSTEM_BASE_VTABLE;
  system_ptr[3] = -4;
  stack_ptr_10 = (int64_t **)system_ptr;
  (**(code **)(*system_ptr + 0x28))(system_ptr);
  stack_ptr_10 = (int64_t **)global_system_root;
  if (global_system_root != (int64_t *)0x0) {
    system_state = *global_system_root;
    global_system_root = system_ptr;
    (**(code **)(system_state + 0x38))();
    system_ptr = global_system_root;
  }
  global_system_root = system_ptr;
  if ((void *)*global_system_root == &SYSTEM_BASE_VTABLE) {
    if (global_system_flag != 0) {
      initialize_system_extensions();
    }
  }
  else {
    (**(code **)((void *)*global_system_root + 0x60))();
  }
  system_ptr = global_system_root;
  stack_ptr_18 = global_system_root;
  global_system_root = (int64_t *)0x0;
  if (system_ptr != (int64_t *)0x0) {
    (**(code **)(*system_ptr + 0x38))();
  }
LAB_SYSTEM_INITIALIZED:
  cleanup_system_resources(*(uint64_t *)(param_1 + 0x20));
  if (*(char *)(global_system_base + 0x1ed) != '\0') {
    system_ptr = (int64_t *)allocate_system_memory(global_system_heap,0x28,8,3);
    *system_ptr = (int64_t)&EVENT_HANDLER_BASE_001;
    *system_ptr = (int64_t)&EVENT_HANDLER_BASE_002;
    *(int32_t *)(system_ptr + 1) = 0;
    *system_ptr = (int64_t)&THREAD_STORAGE_BASE_003;
    LOCK();
    *(int8_t *)(system_ptr + 2) = 0;
    UNLOCK();
    system_ptr[3] = -1;
    *system_ptr = (int64_t)&THREAD_STORAGE_BASE_004;
    system_ptr[4] = 0x180c91060;
    stack_ptr_20 = system_ptr;
    (**(code **)(*system_ptr + 0x28))(system_ptr);
    system_param = global_system_param;
    stack_ptr_10 = &stack_ptr_8;
    stack_ptr_8 = system_ptr;
    (**(code **)(*system_ptr + 0x28))(system_ptr);
    process_system_events(system_param,&stack_ptr_8);
    (**(code **)(*system_ptr + 0x38))(system_ptr);
  }
  return;
}

// 函数: uint64_t * cleanup_system_memory(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
// 清理系统内存
uint64_t * cleanup_system_memory(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &THREAD_STORAGE_BASE_004;
  *param_1 = &THREAD_STORAGE_BASE_003;
  *param_1 = &EVENT_HANDLER_BASE_002;
  *param_1 = &EVENT_HANDLER_BASE_001;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

// 函数: void system_exit_handler(void)
// 系统退出处理器
void system_exit_handler(void)

{
  // WARNING: 子函数不返回
  system_exit();
}

// 函数: void initialize_thread_callback(uint64_t *param_1)
// 初始化线程回调
void initialize_thread_callback(uint64_t *param_1)

{
  *param_1 = &TLS_STORAGE_BASE_001;
  return;
}

// 函数: void initialize_system_environment(void)
// 初始化系统环境
void initialize_system_environment(void)

{
  uint64_t *env_ptr;
  code *callback_func;
  int64_t env_state;
  int init_result;
  uint64_t env_param;
  int64_t *env_data;
  int8_t env_buffer[32];
  void *stack_ptr_228;
  void *stack_ptr_220;
  void *stack_ptr_218;
  int64_t *stack_ptr_208;
  int32_t stack_flag_200;
  void *stack_ptr_1f8;
  void *stack_ptr_1f0;
  int32_t stack_flag_1e8;
  uint64_t stack_param_1e0;
  void *stack_ptr_1d8;
  void *stack_ptr_1d0;
  int32_t stack_flag_1c8;
  uint64_t stack_param_1c0;
  void *stack_ptr_1b8;
  int64_t stack_param_1b0;
  int32_t stack_flag_1a0;
  uint64_t stack_param_198;
  int64_t *stack_ptr_190;
  void *stack_ptr_188;
  void *stack_ptr_180;
  int32_t stack_flag_178;
  uint8_t stack_buffer_170[32];
  int64_t **stack_callback_ptr[3];
  int8_t stack_buffer_138[272];
  uint64_t stack_checksum;
  
  stack_param_198 = 0xfffffffffffffffe;
  stack_checksum = global_system_checksum ^ (uint64_t)env_buffer;
  stack_flag_200 = 0;
  if (*(char *)(global_system_config + 0x18) == '\0') {
    initialize_system_config(&stack_ptr_1b8);
    (**(code **)(**(int64_t **)(global_system_base + 0x2b0) + 0x98))
              (*(int64_t **)(global_system_base + 0x2b0),&stack_ptr_1b8);
    initialize_system_runtime();
    env_state = global_system_config;
    env_param = allocate_system_memory(global_system_heap,0x70,8,3);
    env_data = (int64_t *)initialize_system_component(env_param,8,env_state);
    stack_ptr_190 = env_data;
    if (env_data != (int64_t *)0x0) {
      (**(code **)(*env_data + 0x28))(env_data);
    }
    *(int32_t *)(env_data + 0xd) = 0xbb80073;
    env_ptr = *(uint64_t **)(env_state + 400);
    callback_func = *(code **)*env_ptr;
    stack_callback_ptr[0] = &stack_ptr_208;
    stack_ptr_208 = env_data;
    (**(code **)(*env_data + 0x28))(env_data);
    (*callback_func)(env_ptr,&stack_ptr_208);
    (**(code **)(*env_data + 0x38))(env_data);
    cleanup_system_runtime();
    stack_ptr_1d8 = &TLS_STORAGE_BASE_002;
    stack_param_1c0 = 0;
    stack_ptr_1d0 = (void *)0x0;
    stack_flag_1c8 = 0;
    stack_ptr_1f8 = &TLS_STORAGE_BASE_002;
    stack_param_1e0 = 0;
    stack_ptr_1f0 = (void *)0x0;
    stack_flag_1e8 = 0;
    stack_ptr_208 = (int64_t *)CONCAT44(stack_ptr_208._4_4_,0x10);
    init_result = GetComputerNameA(stack_callback_ptr,&stack_ptr_208);
    if (init_result == 0) {
      handle_system_error(&SYSTEM_ERROR_001);
    }
    else {
      if (0xf < ((uint64_t)stack_ptr_208 & 0xffffffff)) goto LAB_ENV_INIT_ERROR;
      *(int8_t *)((int64_t)stack_callback_ptr + ((uint64_t)stack_ptr_208 & 0xffffffff)) = 0;
      (**(code **)(stack_ptr_1d8 + 0x10))(&stack_ptr_1d8,stack_callback_ptr);
    }
    stack_ptr_208 = (int64_t *)CONCAT44(stack_ptr_208._4_4_,0x101);
    init_result = GetUserNameA(stack_buffer_138,&stack_ptr_208);
    if (init_result == 0) {
      handle_system_error(&SYSTEM_ERROR_002);
    }
    else {
      if (0x100 < ((uint64_t)stack_ptr_208 & 0xffffffff)) {
        handle_system_error();
LAB_ENV_INIT_ERROR:
        handle_system_error();
        callback_func = (code *)swi(3);
        (*callback_func)();
        return;
      }
      stack_buffer_138[(uint64_t)stack_ptr_208 & 0xffffffff] = 0;
      (**(code **)(stack_ptr_1f8 + 0x10))(&stack_ptr_1f8,stack_buffer_138);
    }
    stack_ptr_218 = &SYSTEM_STRING_BASE_001;
    if (stack_ptr_1f0 != (void *)0x0) {
      stack_ptr_218 = stack_ptr_1f0;
    }
    stack_ptr_220 = &SYSTEM_STRING_BASE_001;
    if (stack_ptr_1d0 != (void *)0x0) {
      stack_ptr_220 = stack_ptr_1d0;
    }
    stack_ptr_228 = &SYSTEM_CONFIG_BASE_001;
    configure_system_component(global_system_config,5,0xffffffffffffffff,4);
    stack_ptr_188 = &SYSTEM_STRING_BASE_002;
    stack_ptr_180 = stack_buffer_170;
    stack_flag_178 = 0;
    stack_buffer_170[0] = 0;
    stack_flag_200 = 2;
    initialize_system_string(&stack_ptr_188,&SYSTEM_CONFIG_BASE_002,0x130a7);
    stack_ptr_220 = &SYSTEM_STRING_BASE_001;
    if (stack_ptr_180 != (void *)0x0) {
      stack_ptr_220 = stack_ptr_180;
    }
    stack_ptr_228 = &SYSTEM_CONFIG_BASE_003;
    configure_system_component(global_system_config,5,0xffffffffffffffff,4);
    stack_flag_200 = 0;
    stack_ptr_188 = &TLS_STORAGE_BASE_001;
    stack_ptr_1f8 = &TLS_STORAGE_BASE_002;
    if (stack_ptr_1f0 != (void *)0x0) {
      // WARNING: 子函数不返回
      handle_system_critical_error();
    }
    stack_ptr_1f0 = (void *)0x0;
    stack_param_1e0 = stack_param_1e0 & 0xffffffff00000000;
    stack_ptr_1f8 = &TLS_STORAGE_BASE_001;
    stack_ptr_1d8 = &TLS_STORAGE_BASE_002;
    if (stack_ptr_1d0 != (void *)0x0) {
      // WARNING: 子函数不返回
      handle_system_critical_error();
    }
    stack_ptr_1d0 = (void *)0x0;
    stack_param_1c0 = stack_param_1c0 & 0xffffffff00000000;
    stack_ptr_1d8 = &TLS_STORAGE_BASE_001;
    stack_ptr_1b8 = &TLS_STORAGE_BASE_002;
    if (stack_param_1b0 != 0) {
      // WARNING: 子函数不返回
      handle_system_critical_error();
    }
    stack_param_1b0 = 0;
    stack_flag_1a0 = 0;
    stack_ptr_1b8 = &TLS_STORAGE_BASE_001;
  }
  stack_flag_200 = 0;
  // WARNING: 子函数不返回
  system_exit_with_checksum(stack_checksum ^ (uint64_t)env_buffer);
}

// 函数: void initialize_debug_system_config(uint64_t param_1,int64_t param_2)
// 初始化调试系统配置
void initialize_debug_system_config(uint64_t param_1,int64_t param_2)

{
  int64_t **config_ptr;
  int mutex_result;
  uint debug_flag;
  int32_t debug_param;
  uint64_t system_handle;
  int64_t *debug_data;
  int64_t debug_state;
  uint64_t *debug_ptr;
  uint64_t *debug_ptr2;
  uint64_t *debug_ptr3;
  int8_t *debug_flag_ptr;
  char *debug_string;
  void *debug_param_ptr;
  uint64_t debug_size;
  uint debug_length;
  char debug_char;
  int64_t *stack_ptr_10;
  int64_t **stack_ptr_18;
  int64_t stack_param_20;
  void *stack_ptr_b8;
  void *stack_ptr_b0;
  int32_t stack_flag_a0;
  void *stack_ptr_98;
  int64_t stack_param_90;
  uint stack_flag_88;
  void *stack_ptr_78;
  void *stack_ptr_70;
  int32_t stack_flag_60;
  uint64_t stack_param_58;
  int64_t **stack_ptr_50;
  int64_t *stack_ptr_48;
  
  stack_param_58 = 0xfffffffffffffffe;
  system_handle = system_exit_handler();
  initialize_system_debug();
  debug_data = (int64_t *)allocate_system_memory(global_system_heap,0x68,8,3);
  config_ptr = (int64_t **)(debug_data + 1);
  stack_ptr_10 = debug_data;
  stack_ptr_18 = config_ptr;
  initialize_mutex(config_ptr,2);
  debug_data[0xb] = 0;
  debug_data[0xc] = 0;
  *(int16_t *)debug_data = 0;
  global_debug_config = debug_data;
  if ((char)*debug_data != '\0') goto LAB_DEBUG_INITIALIZED;
  stack_ptr_50 = config_ptr;
  mutex_result = lock_mutex(config_ptr);
  if (mutex_result != 0) {
    throw_system_error(mutex_result);
  }
  SymSetOptions(0x2017);
  initialize_debug_symbols(&stack_ptr_b8);
  debug_param_ptr = &SYSTEM_STRING_BASE_001;
  if (stack_ptr_b0 != (void *)0x0) {
    debug_param_ptr = stack_ptr_b0;
  }
  SymSetSearchPath(global_symbol_path,debug_param_ptr);
  debug_state = debug_data[0xb];
  if (debug_state == 0) {
    debug_state = LoadLibraryA(&DEBUG_LIBRARY_NAME);
    debug_data[0xb] = debug_state;
    if (debug_state != 0) goto LAB_DEBUG_LIBRARY_LOADED;
    stack_ptr_b8 = &TLS_STORAGE_BASE_002;
    if (stack_ptr_b0 != (void *)0x0) {
      // WARNING: 子函数不返回
      handle_system_critical_error();
    }
  }
  else {
LAB_DEBUG_LIBRARY_LOADED:
    if (debug_data[0xc] == 0) {
      debug_state = GetProcAddress(debug_state,&DEBUG_FUNCTION_NAME);
      debug_data[0xc] = debug_state;
      if (debug_state == 0) {
        stack_ptr_b8 = &TLS_STORAGE_BASE_002;
        if (stack_ptr_b0 != (void *)0x0) {
          // WARNING: 子函数不返回
          handle_system_critical_error();
        }
        goto LAB_DEBUG_INITIALIZED;
      }
    }
    debug_param_ptr = &SYSTEM_STRING_BASE_001;
    if (stack_ptr_b0 != (void *)0x0) {
      debug_param_ptr = stack_ptr_b0;
    }
    mutex_result = SymInitialize(global_symbol_path,debug_param_ptr,1);
    if (mutex_result == 0) {
      stack_ptr_b8 = &TLS_STORAGE_BASE_002;
      if (stack_ptr_b0 != (void *)0x0) {
        // WARNING: 子函数不返回
        handle_system_critical_error();
      }
    }
    else {
      *(char *)debug_data = '\x01';
      stack_ptr_b8 = &TLS_STORAGE_BASE_002;
      if (stack_ptr_b0 != (void *)0x0) {
        // WARNING: 子函数不返回
        handle_system_critical_error();
      }
    }
  }
LAB_DEBUG_INITIALIZED:
  stack_flag_a0 = 0;
  stack_ptr_b0 = (void *)0x0;
  stack_ptr_b8 = &TLS_STORAGE_BASE_001;
  mutex_result = unlock_mutex(config_ptr);
  if (mutex_result != 0) {
    throw_system_error(mutex_result);
  }
  debug_ptr = (uint64_t *)allocate_system_memory(global_system_heap,8,8,3);
  *debug_ptr = 0;
  debug_ptr2 = (uint64_t *)allocate_system_memory(global_system_heap,8,8,3);
  *debug_ptr = &DEBUG_CONFIG_BASE_001;
  *debug_ptr2 = &DEBUG_CONFIG_BASE_002;
  debug_ptr3 = (uint64_t *)allocate_system_memory(global_system_heap,0x20,8,3);
  debug_flag_ptr = (int8_t *)allocate_system_memory(global_system_heap,1,1,3);
  *debug_flag_ptr = 0;
  debug_ptr3[2] = debug_flag_ptr;
  global_debug_data = debug_ptr3;
  *debug_ptr3 = debug_ptr2;
  debug_ptr3[1] = debug_ptr;
  debug_ptr3[3] = system_handle;
  system_handle = allocate_system_memory(global_system_heap,0x198,8,3);
  global_debug_handler = initialize_debug_handler(system_handle);
  system_handle = allocate_system_memory(global_system_heap,0xa8,8,3);
  global_debug_system = initialize_debug_system(system_handle);
  allocate_system_memory(global_system_heap,1,1,3);
  mutex_result = QueryPerformanceFrequency(&stack_ptr_18);
  if (mutex_result == 0) {
    handle_system_error(&DEBUG_ERROR_001);
  }
  global_performance_frequency = 1.0 / (double)(int64_t)stack_ptr_18;
  timeBeginPeriod(1);
  QueryPerformanceCounter(&stack_param_20);
  if (global_performance_flag != '\0') {
    global_performance_counter = global_performance_counter + (stack_param_20 - global_performance_base);
  }
  global_performance_base = 0;
  global_performance_counter = stack_param_20;

  // 函数: void initialize_performance_monitor(void)
  // 初始化性能监视器
  void initialize_performance_monitor(void)

  {
    uint64_t system_handle;
    int32_t init_result;
    uint64_t *monitor_ptr;
    uint64_t in_R9;
    void *stack_ptr_68;
    uint64_t *stack_ptr_60;
    int32_t stack_flag_58;
    uint64_t stack_param_50;
    
    stack_ptr_68 = &TLS_STORAGE_BASE_002;
    stack_param_50 = 0;
    stack_ptr_60 = (uint64_t *)0x0;
    stack_flag_58 = 0;
    monitor_ptr = (uint64_t *)allocate_system_memory_with_flags(global_system_heap,0x10,0x13,in_R9,0xfffffffffffffffe);
    *(int8_t *)monitor_ptr = 0;
    stack_ptr_60 = monitor_ptr;
    init_result = initialize_monitor_object(monitor_ptr);
    stack_param_50 = CONCAT44(stack_param_50._4_4_,init_result);
    *monitor_ptr = 0x72657472617453; // "Starte"r
    stack_flag_58 = 7;
    system_handle = GetCurrentThread();
    set_thread_name(system_handle,&stack_ptr_68);
    stack_ptr_68 = &TLS_STORAGE_BASE_002;
    // WARNING: 子函数不返回
    cleanup_monitor_object(monitor_ptr);
  }

  // 函数: int32_t initialize_system_final(void)
  // 初始化系统最终步骤
  int32_t initialize_system_final(void)

  {
    uint64_t *system_ptr;
    code *system_func;
    int64_t **system_config;
    int32_t system_result;
    int system_status;
    int64_t ****system_data;
    uint64_t system_param;
    int64_t ****system_data2;
    int64_t ***system_component;
    int64_t system_state;
    char system_flag;
    int64_t ****stack_ptr_8;
    int64_t ***stack_ptr_10;
    int64_t **stack_ptr_18;
    int64_t ***stack_ptr_20;
    uint64_t system_handle;
    int64_t *****system_manager;
    int64_t ****system_data3;
    
    system_handle = 0xfffffffffffffffe;
    if (global_system_root != (uint64_t *)0x0) {
      while( true ) {
        if ((void *)*global_system_root == &SYSTEM_BASE_VTABLE) {
          system_flag = *(char *)(global_system_root + 2) != '\0';
        }
        else {
          system_flag = (**(code **)((void *)*global_system_root + 0x68))();
        }
        if (system_flag != '\0') break;
        Sleep(1);
      }
    }
    system_data = (int64_t ****)allocate_system_memory(global_system_heap,0xc0,8,3,system_handle);
    stack_ptr_8 = system_data;
    initialize_system_component(system_data);
    *system_data = (int64_t ***)&SYSTEM_VTABLE_001;
    stack_ptr_20 = (int64_t ***)system_data;
    (*(code *)(*system_data)[5])(system_data);
    system_state = global_system_param;
    system_manager = &stack_ptr_8;
    stack_ptr_8 = system_data;
    (*(code *)(*system_data)[5])(system_data);
    process_system_events(system_state,&stack_ptr_8);
    while( true ) {
      if (*system_data == (int64_t ***)&SYSTEM_VTABLE_001) {
        system_flag = *(char *)(system_data + 2) != '\0';
      }
      else {
        system_flag = (*(code *)(*system_data)[0xd])(system_data);
      }
      if (system_flag != '\0') break;
      Sleep(1);
    }
    cleanup_system_runtime();
    system_state = global_system_config;
    system_param = allocate_system_memory(global_system_heap,0x70,8,3);
    system_data2 = (int64_t ****)initialize_system_component(system_param,2,system_state);
    system_data3 = system_data2;
    if (system_data2 != (int64_t ****)0x0) {
      (*(code *)(*system_data2)[5])(system_data2);
    }
    system_ptr = *(uint64_t **)(system_state + 400);
    system_func = *(code **)*system_ptr;
    stack_ptr_8 = &stack_ptr_10;
    stack_ptr_10 = (int64_t ***)system_data2;
    if (system_data2 != (int64_t ****)0x0) {
      (*(code *)(*system_data2)[5])(system_data2);
    }
    (*system_func)(system_ptr,&stack_ptr_10);
    system_handle = allocate_system_memory(global_system_heap,0x70,8,3,system_handle,system_manager,system_data3);
    system_component = (int64_t ***)initialize_system_component(system_handle,0,system_state);
    if (system_component != (int64_t ***)0x0) {
      (*(code *)(*system_component)[5])(system_component);
    }
    system_ptr = *(uint64_t **)(system_state + 400);
    system_func = *(code **)*system_ptr;
    stack_ptr_8 = (int64_t ****)&stack_ptr_18;
    stack_ptr_18 = (int64_t **)system_component;
    if (system_component != (int64_t ***)0x0) {
      (*(code *)(*system_component)[5])(system_component);
    }
    (*system_func)(system_ptr,&stack_ptr_18);
    cleanup_system_object(*(uint64_t *)(system_state + 400));
    if (system_component != (int64_t ***)0x0) {
      (*(code *)(*system_component)[7])(system_component);
    }
    if (system_data2 != (int64_t ****)0x0) {
      (*(code *)(*system_data2)[7])(system_data2);
    }
    system_data3 = global_system_manager;
    *(int8_t *)(global_system_manager[1] + 0x80) = 1;
    while( true ) {
      system_config = *system_data3[1];
      if (system_config == (int64_t **)&SYSTEM_VTABLE_002) {
        system_flag = *(char *)(system_data3[1] + 2) != '\0';
      }
      else {
        system_flag = (*(code *)system_config[0xd])();
      }
      system_data2 = global_system_manager;
      if (system_flag != '\0') break;
      Sleep(1);
    }
    stack_ptr_8 = global_system_manager;
    if (global_system_manager != (int64_t ****)0x0) {
      system_state = __RTCastToVoid(global_system_manager);
      *system_data2 = (int64_t ***)&SYSTEM_VTABLE_003;
      PostQueuedCompletionStatus(system_data2[0x42686],0,0xffffffffffffffff);
      CloseHandle(system_data2[0x42686]);
      stack_ptr_10 = (int64_t ***)(system_data2 + 0x42687);
      if ((int64_t ***)*stack_ptr_10 != (int64_t ***)0x0) {
        // WARNING: 子函数不返回
        handle_system_critical_error();
      }
      stack_ptr_10 = (int64_t ***)(system_data2 + 0x4267c);
      destroy_mutex();
      stack_ptr_10 = (int64_t ***)(system_data2 + 0x40070);
      destroy_mutex();
      cleanup_system_data(system_data2);
      if (system_state != 0) {
        // WARNING: 子函数不返回
        handle_system_critical_error(system_state);
      }
    }
    system_data3 = global_system_manager2;
    system_state = global_system_param;
    global_system_manager = (int64_t ****)0x0;
    if (global_system_param != 0) {
      cleanup_system_memory(global_system_param);
      // WARNING: 子函数不返回
      handle_system_critical_error(system_state);
    }
    global_system_param = 0;
    *(int32_t *)(global_system_manager2 + 0x2d) = 2;
    stack_ptr_8 = system_data3;
    if (system_data3 == (int64_t ****)0x0) {
      global_system_manager2 = (int64_t ****)0x0;
      WaitForSingleObject(global_system_semaphore,0xffffffff);
      do {
        system_status = ReleaseSemaphore(global_system_semaphore,1);
      } while (system_status == 0);
      system_handle = __acrt_iob_func(1);
      fflush(system_handle);
      system_handle = __acrt_iob_func(2);
      fflush(system_handle);
      system_result = global_system_result;
      (*(code *)(*system_data)[7])(system_data);
      return system_result;
    }
    cleanup_system_component(system_data3 + 0x1e);
    cleanup_system_component(system_data3 + 0xf);
    cleanup_system_component(system_data3);
    // WARNING: 子函数不返回
    handle_system_critical_error(system_data3);
  }

  // 函数: void wots_main(uint64_t param_1)
  // Wots主函数
  void wots_main(uint64_t param_1)

  {
    uint64_t auStackX_18 [2];
    
    // 主函数实现
  }

  // 函数: void cleanup_system_object(int64_t *param_1)
  // 清理系统对象
  void cleanup_system_object(int64_t *param_1)

  {
    if ((int64_t *)*param_1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_1 + 0x38))();
    }
    return;
  }

  // 函数: void copy_string_data(int64_t param_1,int64_t param_2)
  // 复制字符串数据
  void copy_string_data(int64_t param_1,int64_t param_2)

  {
    int64_t string_length;
    
    if (param_2 == 0) {
      *(int32_t *)(param_1 + 0x10) = 0;
      **(int8_t **)(param_1 + 8) = 0;
      return;
    }
    string_length = -1;
    do {
      string_length = string_length + 1;
    } while (*(char *)(param_2 + string_length) != '\0');
    if ((int)string_length < 0x1000) {
      *(int *)(param_1 + 0x10) = (int)string_length;
      // WARNING: 无法恢复跳转表，分支过多
      // WARNING: 将间接跳转作为调用处理
      strcpy_s(*(uint64_t *)(param_1 + 8),0x1000);
      return;
    }
    handle_string_overflow_error(&SYSTEM_ERROR_003,0x1000,param_2);
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }

  // 函数: void copy_string_data_with_length(int64_t param_1,uint64_t param_2,int param_3)
  // 复制带长度的字符串数据
  void copy_string_data_with_length(int64_t param_1,uint64_t param_2,int param_3)

  {
    if (param_3 + 1 < 0x1000) {
      // WARNING: 子函数不返回
      memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
    }
    **(int8_t **)(param_1 + 8) = 0;
    *(int32_t *)(param_1 + 0x10) = 0;
    return;
  }

  // 函数: void memory_copy_handler(void)
  // 内存复制处理器
  void memory_copy_handler(void)

  {
    // WARNING: 子函数不返回
    memcpy();
  }

  // 函数: void reset_string_buffer(int8_t *param_1)
  // 重置字符串缓冲区
  void reset_string_buffer(int8_t *param_1)

  {
    int64_t buffer_param;
    
    *param_1 = 0;
    *(int32_t *)(buffer_param + 0x10) = 0;
    return;
  }

  // 函数: void system_cleanup_handler(void)
  // 系统清理处理器
  void system_cleanup_handler(void)

  {
    // WARNING: 子函数不返回
    system_exit();
  }

  // 函数: uint64_t * cleanup_system_object_extended(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
  // 扩展清理系统对象
  uint64_t * cleanup_system_object_extended(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

  {
    *param_1 = &TLS_STORAGE_BASE_001;
    if ((param_2 & 1) != 0) {
      free(param_1,0x1018,param_3,param_4,0xfffffffffffffffe);
    }
    return param_1;
  }

  // 函数: uint64_t * cleanup_completion_port(uint64_t *param_1,uint param_2)
  // 清理完成端口
  uint64_t * cleanup_completion_port(uint64_t *param_1,uint param_2)

  {
    *param_1 = &SYSTEM_VTABLE_003;
    PostQueuedCompletionStatus(param_1[0x42686],0,0xffffffffffffffff,0,0xfffffffffffffffe);
    CloseHandle(param_1[0x42686]);
    if (param_1[0x42687] != 0) {
      // WARNING: 子函数不返回
      handle_system_critical_error();
    }
    destroy_mutex();
    destroy_mutex();
    cleanup_system_data(param_1);
    if ((param_2 & 1) != 0) {
      free(param_1,0x213458);
    }
    return param_1;
  }

  // 函数: void guard_check_icall(void)
  // 检查间接调用
  void guard_check_icall(void)

  {
    return;
  }

  // 函数: uint64_t * cleanup_system_object_final(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
  // 最终清理系统对象
  uint64_t * cleanup_system_object_final(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

  {
    *param_1 = &TLS_STORAGE_BASE_001;
    if ((param_2 & 1) != 0) {
      free(param_1,0x418,param_3,param_4,0xfffffffffffffffe);
    }
    return param_1;
  }

  // 函数: void copy_string_data_short(int64_t param_1,int64_t param_2)
  // 复制短字符串数据
  void copy_string_data_short(int64_t param_1,int64_t param_2)

  {
    int64_t string_length;
    
    if (param_2 == 0) {
      *(int32_t *)(param_1 + 0x10) = 0;
      **(int8_t **)(param_1 + 8) = 0;
      return;
    }
    string_length = -1;
    do {
      string_length = string_length + 1;
    } while (*(char *)(param_2 + string_length) != '\0');
    if ((int)string_length < 0x400) {
      *(int *)(param_1 + 0x10) = (int)string_length;
      // WARNING: 无法恢复跳转表，分支过多
      // WARNING: 将间接跳转作为调用处理
      strcpy_s(*(uint64_t *)(param_1 + 8),0x400);
      return;
    }
    handle_string_overflow_error(&SYSTEM_ERROR_003,0x400,param_2);
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }

  // 函数: void copy_string_data_short_with_length(int64_t param_1,uint64_t param_2,int param_3)
  // 复制带长度的短字符串数据
  void copy_string_data_short_with_length(int64_t param_1,uint64_t param_2,int param_3)

  {
    if (param_3 + 1 < 0x400) {
      // WARNING: 子函数不返回
      memcpy(*(int8_t **)(param_1 + 8),param_2,(int64_t)param_3);
    }
    **(int8_t **)(param_1 + 8) = 0;
    *(int32_t *)(param_1 + 0x10) = 0;
    return;
  }

  // 函数: void memory_copy_handler_short(void)
  // 短内存复制处理器
  void memory_copy_handler_short(void)

  {
    // WARNING: 子函数不返回
    memcpy();
  }

  // 函数: void reset_string_buffer_short(int8_t *param_1)
  // 重置短字符串缓冲区
  void reset_string_buffer_short(int8_t *param_1)

  {
    int64_t buffer_param;
    
    *param_1 = 0;
    *(int32_t *)(buffer_param + 0x10) = 0;
    return;
  }

// 原始实现：
// - 函数名：FUN_180043690 到 FUN_180045fa6
// - 变量名：system_memory_67d0、unknown_var_3432 等
// - 常量名：unknown_var_384、unknown_var_1640 等
//
// 简化实现：
// - 函数名：initialize_string_processor_016、setup_thread_local_storage 等
// - 变量名：global_string_processor_016、STRING_PROCESSOR_BASE_016 等
// - 常量名：STRING_CONSTANT_016、STRING_CONSTANT_023 等
// 
// 代码文件：pretty/01_initialization/01_initialization_part013.c