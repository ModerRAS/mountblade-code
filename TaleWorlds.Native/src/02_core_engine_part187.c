#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part187.c - 4 个函数

/**
 * 初始化引擎核心模块并设置默认配置
 * @param module_config 模块配置指针
 */
void initialize_engine_core_module(undefined8 *module_config)

{
  undefined4 *config_data;
  undefined1 temp_buffer_1 [32];
  undefined4 init_status;
  undefined8 stack_guard_1;
  undefined8 *module_ptr;
  undefined1 *buffer_ptr;
  undefined1 temp_buffer_2 [32];
  undefined *resource_ptr;
  undefined1 *string_ptr;
  undefined4 buffer_size;
  undefined1 name_buffer [16];
  ulonglong stack_guard_2;
  
  stack_guard_1 = 0xfffffffffffffffe;
  stack_guard_2 = _DAT_180bf00a8 ^ (ulonglong)temp_buffer_1;
  init_status = 0;
  buffer_ptr = temp_buffer_2;
  resource_ptr = &UNK_1809fdc18;
  string_ptr = name_buffer;
  name_buffer[0] = 0;
  buffer_size = 0;
  module_ptr = module_config;
  strcpy_s(name_buffer,0x10,&DAT_18098bc73);
  initialize_resource_buffer(temp_buffer_2,&resource_ptr);
  initialize_engine_system();
  resource_ptr = &UNK_18098bcb0;
  *module_config = &UNK_18098bcb0;
  module_config[1] = 0;
  *(undefined4 *)(module_config + 2) = 0;
  *module_config = &UNK_180a3c3e0;
  module_config[3] = 0;
  module_config[1] = 0;
  *(undefined4 *)(module_config + 2) = 0;
  create_engine_instance(module_config,4);
  config_data = (undefined4 *)module_config[1];
  *config_data = 0x656e6f44;
  *(undefined1 *)(config_data + 1) = 0;
  *(undefined4 *)(module_config + 2) = 4;
  init_status = 1;
                    // WARNING: Subroutine does not return
  execute_engine_initialization(stack_guard_2 ^ (ulonglong)temp_buffer_1);
}



/**
 * 配置引擎参数并创建默认实例
 * @param config_ptr 配置指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 配置指针
 */
undefined8 *
configure_engine_parameters(undefined8 *config_ptr,undefined8 param2,undefined8 param3,undefined8 param4)

{
  undefined4 *instance_data;
  
  *(undefined4 *)(_DAT_180c8a980 + 0x2f8) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  *config_ptr = &UNK_18098bcb0;
  config_ptr[1] = 0;
  *(undefined4 *)(config_ptr + 2) = 0;
  *config_ptr = &UNK_180a3c3e0;
  config_ptr[3] = 0;
  config_ptr[1] = 0;
  *(undefined4 *)(config_ptr + 2) = 0;
  create_engine_instance(config_ptr,4,param3,param4,0,0xfffffffffffffffe);
  instance_data = (undefined4 *)config_ptr[1];
  *instance_data = 0x656e6f44;
  *(undefined1 *)(instance_data + 1) = 0;
  *(undefined4 *)(config_ptr + 2) = 4;
  return config_ptr;
}



/**
 * 执行引擎初始化序列并返回状态
 * @param engine_handle 引擎句柄
 * @param param2 参数2
 * @param init_params 初始化参数
 * @return 引擎句柄
 */
undefined8 execute_engine_initialization_sequence(undefined8 engine_handle,undefined8 param2,undefined8 init_params)

{
  initialize_engine_components(engine_handle,engine_handle,init_params,init_params,0,0xfffffffffffffffe);
  return engine_handle;
}



/**
 * 启动引擎核心系统并初始化组件
 * @param system_ptr 系统指针
 * @param param2 参数2
 * @param startup_params 启动参数
 * @return 系统指针
 */
undefined8 start_engine_core_system(undefined8 system_ptr,undefined8 param2,undefined8 startup_params)

{
  initialize_core_system_components(system_ptr,system_ptr,startup_params,startup_params,0,0xfffffffffffffffe);
  return system_ptr;
}



/**
 * 设置引擎运行环境并配置系统参数
 * @param env_ptr 环境指针
 * @param param2 参数2
 * @param env_config 环境配置
 * @return 环境指针
 */
undefined8 setup_engine_environment(undefined8 env_ptr,undefined8 param2,undefined8 env_config)

{
  configure_engine_environment(env_ptr,env_ptr,env_config,env_config,0,0xfffffffffffffffe);
  return env_ptr;
}



/**
 * 创建引擎实例并初始化基本配置
 * @param param_1 配置指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 配置指针
 */
undefined8 *
create_engine_instance_with_config(undefined8 *param_1,undefined8 param2,undefined8 param3,undefined8 param4)

{
  undefined4 *instance_data;
  
  *(undefined4 *)(engine_global_config + 0x2f8) = *(undefined4 *)(engine_context + 0x224);
  *param_1 = &default_engine_config;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &engine_resource_table;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  create_engine_instance(param_1,4,param3,param4,0,0xfffffffffffffffe);
  instance_data = (undefined4 *)param_1[1];
  *instance_data = 0x656e6f44;
  *(undefined1 *)(instance_data + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化引擎系统组件并设置默认值
 * @param param_1 系统指针
 * @return 初始化状态
 */
void initialize_engine_system_components(undefined8 *param_1)

{
  longlong *system_ptr;
  undefined4 *status_ptr;
  longlong config_offset;
  longlong max_entries;
  uint entry_count;
  ulonglong valid_entries;
  ulonglong current_index;
  undefined1 temp_buffer_1 [32];
  undefined4 init_status;
  undefined8 stack_guard;
  undefined8 *system_config;
  ulonglong stack_guard_2;
  
  config_offset = engine_system_config;
  stack_guard = 0xfffffffffffffffe;
  stack_guard_2 = engine_stack_guard ^ (ulonglong)temp_buffer_1;
  valid_entries = 0;
  init_status = 0;
  max_entries = *(longlong *)(engine_system_config + 0x1868);
  current_index = valid_entries;
  system_config = param_1;
  if (*(longlong *)(engine_system_config + 0x1870) - max_entries >> 3 != 0) {
    do {
      system_ptr = *(longlong **)(current_index + max_entries);
      if ((((*(char *)((longlong)system_ptr + 0xde) == '\0') &&
           (*(char *)((longlong)system_ptr + 0xdd) != '\0')) &&
          (*(float *)((longlong)system_ptr + 0x24) == 1920.0)) &&
         (max_entries = (**(code **)(*system_ptr + 0xb8))(system_ptr), max_entries != 0)) {
        valid_entries = (ulonglong)((int)valid_entries + 1);
      }
      entry_count = (int)valid_entries + 1;
      valid_entries = (ulonglong)entry_count;
      max_entries = *(longlong *)(config_offset + 0x1868);
      current_index = current_index + 8;
    } while ((ulonglong)(longlong)(int)entry_count <
             (ulonglong)(*(longlong *)(config_offset + 0x1870) - max_entries >> 3));
    if (1 < (int)valid_entries) {
                    // WARNING: Subroutine does not return
      report_engine_error(engine_error_handler,&engine_error_message);
    }
  }
  *param_1 = &default_engine_config;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &engine_resource_table;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  create_engine_instance(param_1,4);
  status_ptr = (undefined4 *)param_1[1];
  *status_ptr = 0x656e6f44;
  *(undefined1 *)(status_ptr + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  init_status = 1;
                    // WARNING: Subroutine does not return
  finalize_engine_initialization(stack_guard_2 ^ (ulonglong)temp_buffer_1);
}



/**
 * 执行引擎组件初始化序列
 * @param engine_handle 引擎句柄
 * @param param2 参数2
 * @param init_params 初始化参数
 * @return 引擎句柄
 */
undefined8 execute_engine_component_initialization(undefined8 engine_handle,undefined8 param2,undefined8 init_params)

{
  initialize_engine_components(engine_handle,engine_handle,init_params,init_params,0,0xfffffffffffffffe);
  return engine_handle;
}



/**
 * 初始化引擎配置并创建实例
 * @param param_1 配置指针
 * @return 配置指针
 */
undefined8 * initialize_engine_configuration(undefined8 *param_1)

{
  longlong config_base;
  undefined8 *instance_ptr;
  longlong mutex_addr;
  int lock_status;
  
  initialize_engine_manager(engine_manager_config);
  mutex_addr = engine_manager_config;
  config_base = engine_manager_config + 0x100;
  lock_status = acquire_mutex(mutex_addr);
  if (lock_status != 0) {
    throw_mutex_error(lock_status);
  }
  (**(code **)(**(longlong **)(mutex_addr + 0xe8) + 0xe0))();
  if (*(char *)(mutex_addr + 0x1f0) != '\0') {
    (**(code **)(**(longlong **)(mutex_addr + 0xe8) + 0xc0))();
  }
  lock_status = release_mutex(mutex_addr);
  if (lock_status != 0) {
    throw_mutex_error(lock_status);
  }
  *param_1 = &default_engine_config;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &engine_resource_table;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  create_engine_instance(param_1,0xe);
  instance_ptr = (undefined8 *)param_1[1];
  *instance_ptr = 0x6c63206568636143;
  *(undefined4 *)(instance_ptr + 1) = 0x65726165;
  *(undefined2 *)((longlong)instance_ptr + 0xc) = 0x2e64;
  *(undefined1 *)((longlong)instance_ptr + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = 0xe;
  return param_1;
}



/**
 * 创建引擎资源实例并初始化参数
 * @param param_1 配置指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 配置指针
 */
undefined8 *
create_engine_resource_instance(undefined8 *param_1,undefined8 param2,undefined8 param3,undefined8 param4)

{
  undefined4 *instance_data;
  undefined *resource_table;
  undefined1 *resource_ptr;
  undefined4 resource_size;
  undefined8 resource_handle;
  
  resource_table = &engine_resource_table;
  resource_handle = 0;
  resource_ptr = (undefined1 *)0x0;
  resource_size = 0;
  initialize_resource_table(&resource_table,0,param3,param4,0,0xfffffffffffffffe);
  resource_size = 0;
  if (resource_ptr != (undefined1 *)0x0) {
    *resource_ptr = 0;
  }
  cleanup_resource_manager();
  *param_1 = &default_engine_config;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &engine_resource_table;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  create_engine_instance(param_1,4);
  instance_data = (undefined4 *)param_1[1];
  *instance_data = 0x656e6f44;
  *(undefined1 *)(instance_data + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 初始化引擎系统并配置参数
 * @param param_1 配置指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 配置指针
 */
undefined8 *
initialize_engine_system_with_params(undefined8 *param_1,undefined8 param2,undefined8 param3,undefined8 param4)

{
  undefined4 *instance_data;
  undefined4 init_status;
  undefined8 stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  init_status = 0;
  prepare_engine_system();
  *param_1 = &default_engine_config;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &engine_resource_table;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  create_engine_instance(param_1,4,param3,param4,init_status,stack_guard);
  instance_data = (undefined4 *)param_1[1];
  *instance_data = 0x656e6f44;
  *(undefined1 *)(instance_data + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 执行引擎系统初始化流程
 * @param system_handle 系统句柄
 * @param param2 参数2
 * @param init_params 初始化参数
 * @return 系统句柄
 */
undefined8 execute_engine_system_initialization(undefined8 system_handle,undefined8 param2,undefined8 init_params)

{
  initialize_engine_system_flow(system_handle,system_handle,init_params,init_params,0,0xfffffffffffffffe);
  return system_handle;
}



/**
 * 启动引擎核心服务
 * @param service_handle 服务句柄
 * @param param2 参数2
 * @param startup_params 启动参数
 * @return 服务句柄
 */
undefined8 start_engine_core_services(undefined8 service_handle,undefined8 param2,undefined8 startup_params)

{
  initialize_core_services(service_handle,service_handle,startup_params,startup_params,0,0xfffffffffffffffe);
  return service_handle;
}



/**
 * 配置引擎环境并设置参数
 * @param env_ptr 环境指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 环境指针
 */
undefined8
configure_engine_environment_params(undefined8 env_ptr,undefined8 param2,undefined8 param3,undefined8 param4)

{
  undefined8 config_handle;
  undefined4 config_status;
  undefined8 stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  config_status = 0;
  config_handle = get_engine_config_handle();
  setup_engine_configuration(env_ptr,config_handle,param3,param4,config_status,stack_guard);
  return env_ptr;
}



/**
 * 处理引擎事件并更新状态
 * @param param_1 事件处理器指针
 * @param param2 参数2
 * @param param_3 事件参数指针
 * @param param_4 事件数据指针
 * @return 事件处理器指针
 */
undefined8 *
process_engine_event_and_update_status(undefined8 *param_1,undefined8 param2,undefined8 *param_3,longlong *param_4)

{
  undefined4 *instance_data;
  undefined8 event_handler;
  undefined8 event_context;
  undefined8 event_data;
  longlong *event_info;
  undefined *event_buffer;
  longlong buffer_status;
  undefined4 buffer_size;
  undefined *resource_ptr;
  longlong resource_status;
  undefined4 resource_size;
  undefined8 resource_handle;
  undefined1 *data_ptr;
  undefined8 *data_buffer;
  undefined8 buffer_length;
  undefined1 temp_buffer_1 [32];
  undefined1 temp_buffer_2 [32];
  
  event_data = engine_event_config;
  resource_handle = 0xfffffffffffffffe;
  event_info = param_4;
  initialize_event_buffer(&resource_ptr,*param_3,param_3,(char)param_4,0);
  process_event_data(&event_buffer,&resource_ptr);
  event_handler = engine_memory_pool;
  event_context = create_event_context(engine_event_database,0xe0,8,3);
  data_ptr = temp_buffer_2;
  data_buffer = &buffer_length;
  buffer_length = event_data;
  process_event_buffer(temp_buffer_1,&event_buffer);
  event_data = handle_event_processing(temp_buffer_2,&buffer_length);
  event_info = (longlong *)register_event_handler(event_context,event_data);
  if (event_info != (longlong *)0x0) {
    (**(code **)(*event_info + 0x28))(event_info);
  }
  cleanup_event_handler(event_handler,&event_info);
  event_buffer = &engine_resource_table;
  if (buffer_status != 0) {
                    // WARNING: Subroutine does not return
    handle_resource_error();
  }
  buffer_status = 0;
  buffer_size = 0;
  event_buffer = &default_engine_config;
  resource_ptr = &engine_resource_table;
  if (resource_status != 0) {
                    // WARNING: Subroutine does not return
    handle_resource_error();
  }
  resource_status = 0;
  resource_size = 0;
  resource_ptr = &default_engine_config;
  *param_1 = &default_engine_config;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &engine_resource_table;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  create_engine_instance(param_1,4);
  instance_data = (undefined4 *)param_1[1];
  *instance_data = 0x656e6f44;
  *(undefined1 *)(instance_data + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 初始化引擎核心模块
 * @param module_ptr 模块指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 模块指针
 */
undefined8
initialize_engine_core_module(undefined8 module_ptr,undefined8 param2,undefined8 param3,undefined8 param4)

{
  undefined8 core_handle;
  undefined4 init_status;
  undefined8 stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  init_status = 0;
  core_handle = get_engine_core_handle();
  configure_core_module(module_ptr,core_handle,param3,param4,init_status,stack_guard);
  return module_ptr;
}



/**
 * 启动引擎渲染系统
 * @param render_ptr 渲染系统指针
 * @param param2 参数2
 * @param render_params 渲染参数
 * @return 渲染系统指针
 */
undefined8 start_engine_rendering_system(undefined8 render_ptr,undefined8 param2,undefined8 render_params)

{
  initialize_rendering_system(render_ptr,render_ptr,render_params,render_params,0,0xfffffffffffffffe);
  return render_ptr;
}



/**
 * 遍历引擎组件并初始化每个组件
 * @param param_1 组件管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 组件管理器指针
 */
undefined8 *
traverse_and_initialize_engine_components(undefined8 *param_1,undefined8 param2,undefined8 param3,undefined8 param4)

{
  undefined4 *instance_data;
  longlong component_list;
  longlong current_component;
  int component_index;
  undefined4 component_id;
  undefined8 stack_guard;
  
  component_list = engine_component_list;
  stack_guard = 0xfffffffffffffffe;
  component_id = 0;
  for (current_component = *(longlong *)(engine_component_list + 8); current_component != component_list; current_component = get_next_component(current_component)
      ) {
    component_index = 0;
    if (*(longlong *)(current_component + 0x30) - *(longlong *)(current_component + 0x28) >> 3 != 0) {
      do {
        initialize_component(component_list,*(undefined4 *)(current_component + 0x20),component_index,param_4,component_id,stack_guard);
        component_index = component_index + 1;
      } while ((ulonglong)(longlong)component_index <
               (ulonglong)(*(longlong *)(current_component + 0x30) - *(longlong *)(current_component + 0x28) >> 3));
    }
  }
  *param_1 = &default_engine_config;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &engine_resource_table;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  create_engine_instance(param_1,4);
  instance_data = (undefined4 *)param_1[1];
  *instance_data = 0x656e6f44;
  *(undefined1 *)(instance_data + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



/**
 * 执行引擎系统诊断
 * @param system_ptr 系统指针
 * @param param2 参数2
 * @param diagnostic_params 诊断参数
 * @return 系统指针
 */
undefined8 execute_engine_system_diagnostics(undefined8 system_ptr,undefined8 param2,undefined8 diagnostic_params)

{
  run_system_diagnostics(system_ptr,system_ptr,diagnostic_params,diagnostic_params,0,0xfffffffffffffffe);
  return system_ptr;
}



/**
 * 配置引擎性能参数
 * @param perf_ptr 性能配置指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 性能配置指针
 */
undefined8
configure_engine_performance_params(undefined8 perf_ptr,undefined8 param2,undefined8 param3,undefined8 param_4)

{
  setup_performance_settings(perf_ptr,perf_ptr,param_3,param_4,0,0xfffffffffffffffe);
  return perf_ptr;
}



/**
 * 初始化引擎内存管理器
 * @param memory_ptr 内存管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 内存管理器指针
 */
undefined8
initialize_engine_memory_manager(undefined8 memory_ptr,undefined8 param2,undefined8 param3,undefined8 param_4)

{
  setup_memory_management(memory_ptr,memory_ptr,param_3,param_4,0,0xfffffffffffffffe);
  return memory_ptr;
}



/**
 * 获取引擎配置信息
 * @param config_ptr 配置指针
 * @param param2 参数2
 * @param param_3 配置参数指针
 * @return 配置指针
 */
undefined8 get_engine_configuration_info(undefined8 config_ptr,undefined8 param2,longlong *param_3)

{
  undefined *config_info;
  
  if (param_3[1] - *param_3 >> 5 == 0) {
    config_info = &default_config_info;
  }
  else {
    process_engine_config(*(undefined8 *)(engine_context + 0x3d8));
    config_info = &extended_config_info;
  }
  setup_configuration(config_ptr,config_info);
  return config_ptr;
}



/**
 * 处理引擎配置参数并应用设置
 * @param config_ptr 配置指针
 * @param param2 参数2
 * @param param_3 配置参数指针
 * @param param4 参数4
 * @return 配置指针
 */
undefined8 process_engine_config_params(undefined8 config_ptr,undefined8 param2,longlong *param_3,undefined8 param4)

{
  longlong context_ptr;
  uint config_value;
  int lock_status;
  undefined *config_data;
  undefined *resource_table;
  undefined *resource_ptr;
  undefined4 resource_size;
  ulonglong resource_handle;
  
  if (param_3[1] - *param_3 >> 5 == 0) {
    resource_table = &engine_resource_table;
    resource_handle = 0;
    resource_ptr = (undefined *)0x0;
    resource_size = 0;
    setup_config_resource(&resource_table,*(undefined4 *)(*(longlong *)(engine_context + 0x3d8) + 0x160),param_3
                  ,param_4,0,0xfffffffffffffffe);
    config_data = &default_config_string;
    if (resource_ptr != (undefined *)0x0) {
      config_data = resource_ptr;
    }
    resource_table = &engine_resource_table;
    if (resource_ptr != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      handle_resource_error();
    }
    resource_ptr = (undefined *)0x0;
    resource_handle = resource_handle & 0xffffffff00000000;
    resource_table = &default_engine_config;
  }
  else {
    context_ptr = *(longlong *)(engine_context + 0x3d8);
    config_value = atoi(*(undefined8 *)(*param_3 + 8));
    if (*(int *)(context_ptr + 0x110) == 3) {
      initialize_config_manager(context_ptr);
    }
    if ((ulonglong)config_value < *(longlong *)(context_ptr + 0x160) - 2U) {
      setup_config_buffers(context_ptr,4,2);
      *(undefined8 *)(context_ptr + 0x158) = 0xffffffffffffffff;
      *(undefined8 *)(context_ptr + 0xb0) = 0;
      *(undefined4 *)(context_ptr + 0xb8) = 0;
      lock_status = acquire_mutex(context_ptr + 0x3d8);
      if (lock_status != 0) {
        throw_mutex_error(lock_status);
      }
      process_config_data(context_ptr + 0x3a8);
      lock_status = release_mutex(context_ptr + 0x3d8);
      if (lock_status != 0) {
        throw_mutex_error(lock_status);
      }
      *(longlong *)(context_ptr + 0x150) = (longlong)(int)config_value;
      apply_config_settings(context_ptr);
      *(undefined4 *)(context_ptr + 0x144) = 0;
      finalize_config_setup(context_ptr,10);
    }
    config_data = &extended_config_info;
  }
  setup_configuration(config_ptr,config_data);
  return config_ptr;
}



/**
 * 设置引擎渲染参数并创建实例
 * @param param_1 渲染配置指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 渲染配置指针
 */
undefined8 *
setup_engine_rendering_params(undefined8 *param_1,undefined8 param2,undefined8 param3,undefined8 param4)

{
  undefined4 *render_data;
  
  configure_rendering_settings(*(longlong *)(engine_context + 0x3d8),
                1.0 / *(float *)(*(longlong *)(engine_context + 0x3d8) + 0x13c),param_3,param_4,0,
                0xfffffffffffffffe);
  *param_1 = &default_engine_config;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &engine_resource_table;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  create_engine_instance(param_1,6);
  render_data = (undefined4 *)param_1[1];
  *render_data = 0x65766153;
  *(undefined2 *)(render_data + 1) = 0x2164;
  *(undefined1 *)((longlong)render_data + 6) = 0;
  *(undefined4 *)(param_1 + 2) = 6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016ef90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined *puStack_28;
  longlong lStack_20;
  undefined4 uStack_10;
  
  FUN_18032c0b0(*(undefined8 *)(_DAT_180c86870 + 0x3d8),&puStack_28,param_3,param_4,0,
                0xfffffffffffffffe);
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_20 = 0;
  uStack_10 = 0;
  puStack_28 = &UNK_18098bcb0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,6);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x65766153;
  *(undefined2 *)(puVar1 + 1) = 0x2164;
  *(undefined1 *)((longlong)puVar1 + 6) = 0;
  *(undefined4 *)(param_1 + 2) = 6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f090(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uStackX_20;
  
  iVar7 = 0;
  uStackX_20 = param_4;
  if ((param_3[1] - *param_3 & 0xffffffffffffffe0U) == 0) {
    *(bool *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0xae0) =
         *(char *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0xae0) == '\0';
  }
  else {
    iVar5 = atoi(*(undefined8 *)(*param_3 + 8));
    uStackX_20 = CONCAT44(uStackX_20._4_4_,iVar5);
    lVar2 = *(longlong *)(_DAT_180c86870 + 0x3d8);
    piVar3 = *(int **)(lVar2 + 0xac8);
    piVar6 = *(int **)(lVar2 + 0xac0);
    uVar8 = (longlong)piVar3 - (longlong)piVar6 >> 2;
    if (uVar8 != 0) {
      do {
        if (*piVar6 == iVar5) {
          for (piVar6 = *(int **)(lVar2 + 0xac0); (piVar6 != piVar3 && (*piVar6 != iVar5));
              piVar6 = piVar6 + 1) {
          }
          piVar1 = piVar6 + 1;
          if ((piVar1 < piVar3) && (piVar1 != piVar3)) {
                    // WARNING: Subroutine does not return
            memmove(piVar6,piVar1,(longlong)piVar3 - (longlong)piVar1);
          }
          *(int **)(lVar2 + 0xac8) = piVar3 + -1;
          goto LAB_18016f158;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while ((ulonglong)(longlong)iVar7 < uVar8);
    }
    FUN_1800571e0(lVar2 + 0xac0,&uStackX_20);
  }
LAB_18016f158:
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar4 = (undefined4 *)param_1[1];
  *puVar4 = 0x656e6f44;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 FUN_18016f240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180166580(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016f2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1801661b0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016f340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180165f80(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016f3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180165bb0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f440(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  *(undefined1 *)(_DAT_180c86950 + 0x1610) = 1;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f4f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = _DAT_180c8a988;
  FUN_180058370(_DAT_180c8a988,*(undefined8 *)(_DAT_180c8a988 + 0x10),param_3,param_4,0,
                0xfffffffffffffffe);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f5d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  *(undefined1 *)(_DAT_180c86870 + 0x2a) = 0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8
FUN_18016f680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_180a089e8;
  if (*(int *)*param_4 != 0) {
    puVar1 = &DAT_180a08120;
  }
  FUN_180627910(param_1,puVar1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  uVar1 = 0;
  if (*(longlong **)(_DAT_180c8ed08 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(_DAT_180c8ed08 + 0x18) + 0x50))();
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0,param_3,param_4,uVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  return param_1;
}



undefined8
FUN_18016f7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = FUN_1801659e0();
  FUN_180627910(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18016f840(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong alStack_40 [2];
  undefined *puStack_30;
  code *pcStack_28;
  
  plStackX_18 = param_3;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3,0,0xfffffffffffffffe);
  plStackX_18 = alStack_40;
  alStack_40[0] = *param_4;
  puStack_30 = &UNK_18016f9b0;
  pcStack_28 = FUN_18016f990;
  plVar2 = (longlong *)FUN_18006b640(uVar1,alStack_40);
  plStackX_20 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *(undefined4 *)*param_4 = 1;
  uVar1 = _DAT_180c82868;
  plStackX_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_18005e110(uVar1,&plStackX_18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  FUN_180627910(param_1,&DAT_18098bc73);
  return param_1;
}





// 函数: void FUN_18016f990(undefined8 *param_1)
void FUN_18016f990(undefined8 *param_1)

{
  FUN_1800547b0();
  *(undefined4 *)*param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_18016f9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (*(int *)(_DAT_180c86908 + 0x3f0) == 0) {
    puVar1 = &UNK_180a080d8;
  }
  else {
    FUN_180170ac0(0,&UNK_180a08100,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = &DAT_180a080cc;
  }
  FUN_180627910(param_1,puVar1);
  return param_1;
}



undefined8
FUN_18016fa80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180165950(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016fb00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  if (*(int *)(_DAT_180c86890 + 8) == 1) {
    *(undefined4 *)(_DAT_180c86890 + 8) = 2;
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f64;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 *
FUN_18016fbe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  FUN_1800da9b0();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,uVar2,uVar3);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f64;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 *
FUN_18016fcc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined *puStack_28;
  longlong lStack_20;
  
  lVar1 = (*(code *)*param_4)(&puStack_28);
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar1 + 0x10);
  param_1[1] = *(undefined8 *)(lVar1 + 8);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}



undefined8 *
FUN_18016fdf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{


// 函数: void FUN_18016ff6f(void)
void FUN_18016ff6f(void)

{
  return;
}





