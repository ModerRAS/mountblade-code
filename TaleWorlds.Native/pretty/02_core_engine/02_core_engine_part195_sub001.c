#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part195_sub001.c - 核心引擎模块第195部分子文件1
// 包含18个函数，主要负责游戏引擎的核心功能处理

// 全局变量定义
uint64_t *g_engine_context;              // 引擎上下文指针
uint64_t *g_resource_manager;           // 资源管理器指针
uint64_t *g_memory_allocator;           // 内存分配器指针
int g_engine_status;                      // 引擎状态标志
int64_t g_engine_config;                 // 引擎配置数据

// 函数: 处理引擎初始化配置
// 原始函数名: FUN_1801781f0
void process_engine_initialization(uint64_t param_1, uint64_t *param_2, int param_3)
{
  int64_t config_offset;
  int64_t resource_count;
  uint64_t resource_type;
  int64_t resource_ptr;
  int64_t *resource_list;
  int resource_index;
  int32_t resource_flag;
  int engine_mode;
  void *resource_name;
  int64_t resource_id;
  int8_t buffer_temp[32];
  uint64_t buffer_size;
  int64_t **resource_handle;
  void *resource_path;
  int64_t resource_data;
  int32_t resource_size;
  uint64_t resource_checksum;
  int64_t *resource_cache;
  uint64_t *resource_metadata;
  uint64_t resource_info;
  int64_t resource_offset;
  uint64_t *resource_buffer;
  void *resource_type_ptr;
  void *resource_format;
  int resource_format_id;
  uint8_t resource_data_temp[136];
  int8_t resource_large_buffer[2048];
  uint64_t security_hash;
  
  config_offset = g_engine_config;
  resource_info = 0xfffffffffffffffe;
  security_hash = g_memory_allocator ^ (uint64_t)buffer_temp;
  resource_index = (int)(*(int64_t *)(g_engine_config + 200) - *(int64_t *)(g_engine_config + 0xc0) >> 3);
  resource_metadata = param_2;
  if (0 < resource_index) {
    resource_id = 0;
    do {
      resource_count = *(int64_t *)(*(int64_t *)(config_offset + 0xc0) + resource_id * 8);
      resource_type = *(uint64_t *)(config_offset + 0xf8);
      resource_ptr = resource_count + 8;
      resource_data = resource_ptr;
      engine_mode = _Mtx_lock();
      if (engine_mode != 0) {
        __Throw_C_error_std__YAXH_Z();
      }
      resource_type_ptr = &g_resource_manager;
      resource_format = resource_data_temp;
      resource_format_id = 0;
      resource_data_temp[0] = 0;
      initialize_resource_manager(&resource_type_ptr, &g_engine_context, resource_metadata);
      resource_path = &g_resource_manager;
      resource_checksum = 0;
      resource_offset = 0;
      resource_size = 0;
      resource_name = &g_default_resource_path;
      if (resource_format != (void *)0x0) {
        resource_name = resource_format;
      }
      process_resource_loading(&resource_path, &g_engine_context, resource_name, param_3);
      resource_cache = (int64_t *)0x0;
      resource_name = &g_default_resource_path;
      if (resource_format != (void *)0x0) {
        resource_name = resource_format;
      }
      convert_resource_path(resource_large_buffer, resource_name, (int64_t)(resource_format_id + 1));
      resource_handle = &resource_cache;
      buffer_size = resource_type;
      engine_mode = (**(code **)(**(int64_t **)(resource_count + 0x148) + 0x160))
                        (*(int64_t **)(resource_count + 0x148), resource_large_buffer, param_3, 4);
      resource_list = resource_cache;
      if ((engine_mode == 0) && (resource_cache != (int64_t *)0x0)) {
        (**(code **)(*resource_cache + 0x80))(resource_cache, 0);
        resource_metadata = (uint64_t *)allocate_resource_memory(g_memory_allocator, 0x50, 8, 3);
        resource_metadata[2] = 0;
        resource_buffer = resource_metadata + 4;
        *resource_buffer = &g_resource_cache;
        resource_metadata[5] = 0;
        *(int32_t *)(resource_metadata + 6) = 0;
        *resource_buffer = &g_resource_manager;
        resource_metadata[7] = 0;
        resource_metadata[5] = 0;
        *(int32_t *)(resource_metadata + 6) = 0;
        *resource_metadata = resource_list;
        resource_metadata[1] = resource_count;
        resource_flag = 0x14;
        if (param_3 != 1) {
          resource_flag = 0x12;
        }
        *(int32_t *)(resource_metadata + 3) = resource_flag;
        *(int32_t *)((int64_t)resource_metadata + 0x4c) = 0x10;
        *(uint64_t *)((int64_t)resource_metadata + 0x44) = 0xffffffffffffffff;
        *(int32_t *)(resource_metadata + 8) = 0;
        resource_path = &g_resource_manager;
        if (resource_offset != 0) {
                    // WARNING: Subroutine does not return
          validate_resource_integrity();
        }
        resource_offset = 0;
        resource_checksum = resource_checksum & 0xffffffff00000000;
        resource_path = &g_resource_cache;
        resource_type_ptr = &g_resource_cache;
        resource_index = _Mtx_unlock(resource_ptr);
        if (resource_index != 0) {
          __Throw_C_error_std__YAXH_Z(resource_index);
        }
        break;
      }
      resource_path = &g_resource_manager;
      if (resource_offset != 0) {
                    // WARNING: Subroutine does not return
        validate_resource_integrity();
      }
      resource_offset = 0;
      resource_checksum = resource_checksum & 0xffffffff00000000;
      resource_path = &g_resource_cache;
      resource_type_ptr = &g_resource_cache;
      engine_mode = _Mtx_unlock(resource_ptr);
      if (engine_mode != 0) {
        __Throw_C_error_std__YAXH_Z(engine_mode);
      }
      resource_id = resource_id + 1;
    } while (resource_id < resource_index);
  }
                    // WARNING: Subroutine does not return
  perform_security_check(security_hash ^ (uint64_t)buffer_temp);
}

// 函数: 初始化引擎核心系统
// 原始函数名: FUN_180178500
void initialize_engine_core_system(void)
{
  int64_t *system_handle;
  uint64_t system_config[2];
  
  system_config[0] = 0;
  system_handle = *(int64_t **)(*(int64_t *)(g_engine_context + 0x1cd8) + 0x8400);
  (**(code **)(*system_handle + 0x40))(system_handle, 0x2f, 1, system_config);
  return;
}

// 函数: 设置引擎配置参数
// 原始函数名: FUN_180178540
void setup_engine_configuration(void)
{
  int64_t config_base;
  int32_t config_value;
  uint64_t *config_ptr;
  uint64_t config_data;
  uint64_t runtime_param;
  void *config_source;
  uint64_t *config_target;
  int32_t config_size;
  uint64_t config_flag;
  
  config_base = g_engine_config;
  if (*(int64_t *)(g_engine_config + 0xf0) == 0) {
    config_source = &g_resource_manager;
    config_flag = 0;
    config_target = (uint64_t *)0x0;
    config_size = 0;
    config_ptr = (uint64_t *)allocate_config_memory(g_memory_allocator, 0x10, 0x13, runtime_param, 0xfffffffffffffffe);
    *(int8_t *)config_ptr = 0;
    config_target = config_ptr;
    config_value = validate_config_parameters(config_ptr);
    config_flag = CONCAT44(config_flag._4_4_, config_value);
    *config_ptr = 0x6f6c72656e6e6142;  // "Baronnel" (引擎名称标识)
    *(int16_t *)(config_ptr + 1) = 0x6472;  // "rd" (可能表示"render"或"road")
    *(int8_t *)((int64_t)config_ptr + 10) = 0;
    config_size = 10;
    config_data = apply_engine_settings(config_base, &config_source);
    *(uint64_t *)(config_base + 0xf0) = config_data;
    config_source = &g_resource_manager;
                    // WARNING: Subroutine does not return
    free_config_memory(config_ptr);
  }
  return;
}

// 函数: 处理引擎资源加载
// 原始函数名: FUN_180178650
void process_engine_resource_loading(uint64_t param_1, int64_t param_2)
{
  int64_t *resource_manager;
  int64_t config_offset;
  uint resource_count;
  uint64_t resource_handle;
  uint resource_index;
  uint64_t *resource_array;
  int8_t security_buffer[32];
  uint64_t resource_data;
  uint64_t resource_temp[4];
  uint64_t resource_checksum;
  
  config_offset = g_engine_config;
  resource_checksum = g_memory_allocator ^ (uint64_t)security_buffer;
  resource_count = (**(code **)(**(int64_t **)(param_2 + 0x148) + 0x20))();
  resource_index = 0;
  if (resource_count != 0) {
    resource_array = resource_temp;
    do {
      resource_handle = (**(code **)(**(int64_t **)(param_2 + 0x148) + 0xa0))
                        (*(int64_t **)(param_2 + 0x148), resource_index);
      resource_handle = process_resource_data(config_offset + 0x228, resource_handle, 0);
      resource_index = resource_index + 1;
      *resource_array = resource_handle;
      resource_array = resource_array + 1;
    } while (resource_index < resource_count);
  }
  resource_manager = *(int64_t **)(*(int64_t *)(g_engine_context + 0x1cd8) + 0x8400);
  (**(code **)(*resource_manager + 0x40))(resource_manager, 0x2c, resource_count, resource_temp);
  resource_handle = (**(code **)(**(int64_t **)(param_2 + 0x148) + 0xb0))(*(int64_t **)(param_2 + 0x148), 0);
  resource_data = process_resource_data(config_offset + 0x228, resource_handle, 0);
  resource_manager = *(int64_t **)(*(int64_t *)(g_engine_context + 0x1cd8) + 0x8400);
  (**(code **)(*resource_manager + 0x40))(resource_manager, 0x2f, 1, &resource_data);
                    // WARNING: Subroutine does not return
  perform_security_check(resource_checksum ^ (uint64_t)security_buffer);
}

// 函数: 启动引擎主循环
// 原始函数名: FUN_180178770
void start_engine_main_loop(void)
{
                    // WARNING: Subroutine does not return
  initialize_main_loop();
}

// 函数: 处理引擎事件队列
// 原始函数名: FUN_1790a0
uint64_t process_engine_event_queue(uint64_t param_1, uint64_t *param_2)
{
  uint64_t event_result;
  int64_t *event_handler;
  int64_t *event_data;
  int64_t *event_context;
  
  if (*(int *)(g_engine_config + 0x380) == 0) {
    event_handler = (int64_t *)allocate_event_memory(g_memory_allocator, 200, 8, 3, 0xfffffffffffffffe);
    event_data = event_handler;
    initialize_event_system(event_handler);
    *event_handler = (int64_t)&g_event_dispatcher;
    event_handler[0x18] = (int64_t)param_2;
    event_handler[3] = -4;
    event_context = event_handler;
    (**(code **)(*event_handler + 0x28))(event_handler);
    event_result = g_engine_status;
    event_data = event_handler;
    (**(code **)(*event_handler + 0x28))(event_handler);
    dispatch_event(event_result, &event_data);
    (**(code **)(*event_handler + 0x38))(event_handler);
    return 1;
  }
  (**(code **)*param_2)(param_2);
  return 1;
}

// 函数: 管理引擎资源池
// 原始函数名: FUN_179180
uint64_t manage_engine_resource_pool(int64_t param_1, int64_t *param_2, uint64_t param_3, uint64_t param_4,
                                     uint64_t param_5, int64_t param_6, uint64_t param_7, uint64_t *param_8)
{
  uint64_t *resource_pool;
  uint64_t *resource_manager;
  uint pool_size;
  uint64_t allocation_result;
  uint64_t *resource_cache;
  int64_t *resource_data;
  uint64_t resource_info;
  int64_t *resource_handle;
  int8_t temp_buffer[8];
  uint64_t resource_size;
  int32_t resource_flags;
  
  allocation_result = (**(code **)(*param_2 + 0x28))(param_2, param_3, param_4, param_8);
  if ((int)allocation_result == 0) {
    resource_data = (int64_t *)*param_8;
    allocation_result = allocation_result & 0xffffffff;
    resource_handle = resource_data;
    if (param_6 != 0) {
      resource_info = 0;
      pool_size = (**(code **)(*param_2 + 0x38))(param_2, resource_data, param_6, &resource_info);
      allocation_result = (uint64_t)pool_size;
      resource_pool = (uint64_t *)(param_1 + 8);
      resource_size = resource_info;
      resource_flags = *(int32_t *)(param_6 + 8);
      resource_cache = resource_pool;
      resource_manager = *(uint64_t **)(param_1 + 0x18);
      while (resource_manager != (uint64_t *)0x0) {
        if ((int64_t *)resource_manager[4] < resource_data) {
          resource_manager = (uint64_t *)*resource_manager;
        }
        else {
          resource_cache = resource_manager;
          resource_manager = (uint64_t *)resource_manager[1];
        }
      }
      if ((resource_cache == resource_pool) || (resource_data < (int64_t *)resource_cache[4])) {
        resource_cache = (uint64_t *)allocate_resource_chunk(resource_pool, temp_buffer, resource_pool, resource_cache, &resource_handle);
        resource_cache = (uint64_t *)*resource_cache;
        resource_data = resource_handle;
      }
      update_resource_cache(resource_cache + 5, &resource_size);
    }
    (**(code **)(*resource_data + 0x28))(resource_data, &g_system_event_handler, 7, &g_default_allocator);
  }
  return allocation_result;
}

// 函数: 更新引擎状态
// 原始函数名: FUN_1791c0
int32_t update_engine_status(void)
{
  uint64_t *status_manager;
  uint64_t *status_cache;
  uint64_t *status_handler;
  int64_t *engine_context;
  int64_t config_data;
  int32_t status_flags;
  int64_t *resource_manager;
  uint64_t runtime_param1;
  int32_t runtime_param2;
  int64_t runtime_param3;
  
  if (runtime_param3 != 0) {
    status_flags = (**(code **)(*resource_manager + 0x38))();
    status_manager = (uint64_t *)(config_data + 8);
    runtime_param1 = 0;
    runtime_param2 = *(int32_t *)(runtime_param3 + 8);
    status_handler = status_manager;
    status_cache = *(uint64_t **)(config_data + 0x18);
    while (status_cache != (uint64_t *)0x0) {
      if ((int64_t *)status_cache[4] < engine_context) {
        status_cache = (uint64_t *)*status_cache;
      }
      else {
        status_handler = status_cache;
        status_cache = (uint64_t *)status_cache[1];
      }
    }
    if ((status_handler == status_manager) || (engine_context < (int64_t *)status_handler[4])) {
      status_handler = (uint64_t *)allocate_status_cache(status_manager, &stack0x00000038, status_manager, status_handler, &stack0x00000030);
      status_handler = (uint64_t *)*status_handler;
    }
    update_status_info(status_handler + 5, &stack0x00000040);
  }
  (**(code **)(*engine_context + 0x28))(engine_context, &g_system_event_handler, 7, &g_default_allocator);
  return status_flags;
}

// 函数: 空操作函数（占位符）
// 原始函数名: FUN_179296
void placeholder_function(void)
{
  return;
}

// 函数: 清理引擎资源
// 原始函数名: FUN_1792c0
void cleanup_engine_resources(int64_t param_1, int64_t *param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t *resource_pool;
  uint64_t *resource_manager;
  uint64_t *resource_cache;
  int64_t resource_data;
  int cleanup_index;
  int64_t resource_offset;
  uint64_t resource_handle;
  
  resource_handle = 0xfffffffffffffffe;
  resource_pool = (uint64_t *)(param_1 + 8);
  resource_manager = *(uint64_t **)(param_1 + 0x18);
  resource_cache = resource_pool;
  if (resource_manager != (uint64_t *)0x0) {
    do {
      if ((int64_t *)resource_manager[4] < param_2) {
        resource_manager = (uint64_t *)*resource_manager;
      }
      else {
        resource_cache = resource_manager;
        resource_manager = (uint64_t *)resource_manager[1];
      }
    } while (resource_manager != (uint64_t *)0x0);
    if ((resource_cache != resource_pool) && ((int64_t *)resource_cache[4] <= param_2)) goto cleanup_complete;
  }
  resource_cache = resource_pool;
cleanup_complete:
  if (resource_cache != resource_pool) {
    cleanup_index = 0;
    resource_data = resource_cache[5];
    if (resource_cache[6] - resource_data >> 4 != 0) {
      resource_offset = 0;
      do {
        (**(code **)(**(int64_t **)(resource_offset + resource_data) + 0x10))();
        cleanup_index = cleanup_index + 1;
        resource_offset = resource_offset + 0x10;
        resource_data = resource_cache[5];
      } while ((uint64_t)(int64_t)cleanup_index < (uint64_t)(resource_cache[6] - resource_data >> 4));
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  resource_cache = resource_pool;
  resource_manager = *(uint64_t **)(param_1 + 0x18);
  while (resource_manager != (uint64_t *)0x0) {
    if ((int64_t *)resource_manager[4] < param_2) {
      resource_manager = (uint64_t *)*resource_manager;
    }
    else {
      resource_cache = resource_manager;
      resource_manager = (uint64_t *)resource_manager[1];
    }
  }
  if ((resource_cache == resource_pool) || (param_2 < (int64_t *)resource_cache[4])) {
    resource_cache = resource_pool;
  }
  if (resource_cache != resource_pool) {
    *(int64_t *)(param_1 + 0x28) = *(int64_t *)(param_1 + 0x28) + -1;
    release_resource_memory(resource_cache);
    deallocate_resource_chunk(resource_cache, resource_pool, param_3, param_4, resource_handle);
    if (resource_cache[5] != 0) {
                    // WARNING: Subroutine does not return
      validate_resource_integrity();
    }
    if (resource_cache != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      free_resource_memory(resource_cache);
    }
  }
  return;
}

// 函数: 处理引擎渲染请求
// 原始函数名: FUN_179410
int32_t
process_engine_render_request(uint64_t param_1, int64_t *param_2, uint64_t param_3, uint64_t param_4,
                               uint64_t *param_5)
{
  int32_t render_result;
  
  render_result = (**(code **)(*param_2 + 0x18))(param_2, param_3, param_4, param_5);
  (**(code **)(*(int64_t *)*param_5 + 0x28))((int64_t *)*param_5, &g_system_event_handler, 7, &g_default_allocator);
  return render_result;
}

// 函数: 处理引擎资源数据
// 原始函数名: FUN_179480
void process_engine_resource_data(int64_t param_1, uint64_t param_2, int64_t param_3)
{
  int64_t *resource_manager;
  uint64_t *resource_pool;
  uint64_t *resource_cache;
  uint64_t *resource_data;
  int *resource_type;
  int resource_index;
  uint64_t *resource_allocator;
  uint64_t resource_count;
  int8_t temp_buffer[32];
  int64_t **resource_handle;
  int64_t *resource_info;
  uint64_t resource_size;
  uint64_t resource_capacity;
  int32_t resource_format;
  int8_t resource_metadata[48];
  uint64_t resource_checksum;
  
  resource_checksum = g_memory_allocator ^ (uint64_t)temp_buffer;
  resource_manager = (int64_t *)(**(code **)(**(int64_t **)(param_1 + 0x38) + 0xc0))();
  resource_allocator = (uint64_t *)(param_1 + 8);
  resource_data = *(uint64_t **)(param_1 + 0x18);
  resource_pool = resource_allocator;
  if (*(uint64_t **)(param_1 + 0x18) != (uint64_t *)0x0) {
    do {
      if ((int64_t *)resource_data[4] < resource_manager) {
        resource_cache = (uint64_t *)*resource_data;
      }
      else {
        resource_cache = (uint64_t *)resource_data[1];
        resource_pool = resource_data;
      }
      resource_data = resource_cache;
    } while (resource_cache != (uint64_t *)0x0);
    if ((resource_pool != resource_allocator) && ((int64_t *)resource_pool[4] <= resource_manager)) goto resource_found;
  }
  resource_pool = resource_allocator;
resource_found:
  resource_info = resource_manager;
  if (resource_pool == resource_allocator) {
    resource_capacity = 0;
    (**(code **)(**(int64_t **)(g_engine_context + 0x1d78) + 0x38))
              (*(int64_t **)(g_engine_context + 0x1d78), resource_manager, 0, &resource_capacity);
    resource_size = resource_capacity;
    if (param_3 == 0) {
      resource_format = 0;
    }
    else {
      resource_format = *(int32_t *)(param_3 + 8);
    }
    resource_pool = resource_allocator;
    resource_data = *(uint64_t **)(param_1 + 0x18);
    while (resource_data != (uint64_t *)0x0) {
      if ((int64_t *)resource_data[4] < resource_manager) {
        resource_data = (uint64_t *)*resource_data;
      }
      else {
        resource_pool = resource_data;
        resource_data = (uint64_t *)resource_data[1];
      }
    }
    if ((resource_pool == resource_allocator) || (resource_manager < (int64_t *)resource_pool[4])) {
      resource_handle = &resource_info;
      resource_pool = (uint64_t *)allocate_resource_chunk(resource_allocator, temp_buffer);
      resource_pool = (uint64_t *)*resource_pool;
      resource_manager = resource_info;
    }
    update_resource_cache(resource_pool + 5, &resource_size);
  }
  else {
    resource_index = 0;
    resource_count = (int64_t)(resource_pool[6] - resource_pool[5]) >> 4;
    if (resource_count != 0) {
      resource_type = (int *)(resource_pool[5] + 8);
      do {
        if ((param_3 == 0) || (*resource_type == *(int *)(param_3 + 8))) goto resource_processed;
        resource_index = resource_index + 1;
        resource_type = resource_type + 4;
      } while ((uint64_t)(int64_t)resource_index < resource_count);
    }
  }
  resource_size = 0;
  resource_data = resource_allocator;
  if (param_3 == 0) {
    (**(code **)(**(int64_t **)(g_engine_context + 0x1d78) + 0x38))
              (*(int64_t **)(g_engine_context + 0x1d78), resource_manager, 0, &resource_size);
    resource_size = resource_size;
    resource_format = 0;
    resource_pool = *(uint64_t **)(param_1 + 0x18);
    while (resource_pool != (uint64_t *)0x0) {
      if ((int64_t *)resource_pool[4] < resource_manager) {
        resource_pool = (uint64_t *)*resource_pool;
      }
      else {
        resource_data = resource_pool;
        resource_pool = (uint64_t *)resource_pool[1];
      }
    }
  }
  else {
    (**(code **)(*resource_manager + 0x50))(resource_manager, resource_metadata);
    resource_cache = resource_allocator;
    resource_pool = *(uint64_t **)(param_1 + 0x18);
    while (resource_pool != (uint64_t *)0x0) {
      if ((int64_t *)resource_pool[4] < resource_manager) {
        resource_pool = (uint64_t *)*resource_pool;
      }
      else {
        resource_cache = resource_pool;
        resource_pool = (uint64_t *)resource_pool[1];
      }
    }
    if ((resource_cache == resource_allocator) || (resource_manager < (int64_t *)resource_cache[4])) {
      resource_handle = &resource_info;
      resource_cache = (uint64_t *)allocate_resource_chunk(resource_allocator, temp_buffer);
      resource_cache = (uint64_t *)*resource_cache;
      resource_manager = resource_info;
    }
    (**(code **)(**(int64_t **)resource_cache[5] + 0x40))(*(int64_t **)resource_cache[5], temp_buffer);
    resource_format = *(int32_t *)(param_3 + 8);
    resource_format = 0xffffffff;
    (**(code **)(**(int64_t **)(g_engine_context + 0x1d78) + 0x38))
              (*(int64_t **)(g_engine_context + 0x1d78), resource_manager, temp_buffer, &resource_size);
    resource_size = resource_size;
    resource_format = *(int32_t *)(param_3 + 8);
    resource_pool = *(uint64_t **)(param_1 + 0x18);
    while (resource_pool != (uint64_t *)0x0) {
      if ((int64_t *)resource_pool[4] < resource_manager) {
        resource_pool = (uint64_t *)*resource_pool;
      }
      else {
        resource_data = resource_pool;
        resource_pool = (uint64_t *)resource_pool[1];
      }
    }
  }
  resource_size = resource_size;
  if ((resource_data == resource_allocator) || (resource_manager < (int64_t *)resource_data[4])) {
    resource_handle = &resource_info;
    resource_data = (uint64_t *)allocate_resource_chunk(resource_allocator, temp_buffer);
    resource_data = (uint64_t *)*resource_data;
  }
  update_resource_cache(resource_data + 5, &resource_size);
resource_processed:
                    // WARNING: Subroutine does not return
  perform_security_check(resource_checksum ^ (uint64_t)temp_buffer);
}

// 函数: 分配引擎资源块
// 原始函数名: FUN_179770
uint64_t *
allocate_engine_resource_chunk(int64_t *param_1, uint64_t *param_2, uint64_t param_3, int64_t *param_4,
                               uint64_t *param_5)
{
  int64_t *resource_head;
  int64_t *resource_next;
  uint64_t resource_key;
  int64_t resource_data;
  uint64_t allocation_flag;
  bool insert_before;
  
  resource_head = (int64_t *)*param_1;
  if ((param_4 == resource_head) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = resource_head, (uint64_t)resource_head[4] < *param_5)) {
insert_here:
      allocation_flag = 0;
      goto perform_insertion;
    }
  }
  else {
    resource_head = (int64_t *)get_previous_resource(param_4);
    if (((uint64_t)param_4[4] < *param_5) && (*param_5 < (uint64_t)resource_head[4])) {
      if (*param_4 == 0) goto insert_here;
      allocation_flag = 1;
      param_4 = resource_head;
perform_insertion:
      if (param_4 != (int64_t *)0x0) {
        insert_resource_chunk(param_1, param_2, param_4, allocation_flag, param_5);
        return param_2;
      }
    }
  }
  insert_before = true;
  resource_head = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    resource_next = (int64_t *)param_1[2];
    do {
      resource_head = resource_next;
      insert_before = *param_5 < (uint64_t)resource_head[4];
      if (insert_before) {
        resource_next = (int64_t *)resource_head[1];
      }
      else {
        resource_next = (int64_t *)*resource_head;
      }
    } while (resource_next != (int64_t *)0x0);
  }
  resource_next = resource_head;
  if (insert_before) {
    if (resource_head == (int64_t *)param_1[1]) {
      resource_key = *param_5;
      goto allocate_new_chunk;
    }
    resource_next = (int64_t *)get_next_resource(resource_head);
  }
  resource_key = *param_5;
  if (resource_key <= (uint64_t)resource_next[4]) {
    *param_2 = resource_next;
    return param_2;
  }
allocate_new_chunk:
  if ((resource_head == param_1) || (resource_key < (uint64_t)resource_head[4])) {
    allocation_flag = 0;
  }
  else {
    allocation_flag = 1;
  }
  resource_data = allocate_resource_memory(g_memory_allocator, 0x48, (char)param_1[5]);
  *(uint64_t *)(resource_data + 0x20) = *param_5;
  *(uint64_t *)(resource_data + 0x28) = 0;
  *(uint64_t *)(resource_data + 0x30) = 0;
  *(uint64_t *)(resource_data + 0x38) = 0;
  *(int32_t *)(resource_data + 0x40) = 3;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data, resource_head, param_1, allocation_flag);
}

// 函数: 按名称分配引擎资源
// 原始函数名: FUN_1798f0
uint64_t *
allocate_engine_resource_by_name(int64_t *param_1, uint64_t *param_2, uint64_t param_3, int64_t *param_4,
                                 int32_t *param_5)
{
  int32_t name_part1;
  int32_t name_part2;
  int32_t name_part3;
  int64_t *resource_current;
  int name_compare;
  int64_t *resource_next;
  int64_t resource_data;
  uint64_t allocation_flag;
  bool insert_before;
  
  resource_current = (int64_t *)*param_1;
  if ((param_4 == resource_current) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (name_compare = memcmp(resource_current + 4, param_5, 0x10), param_4 = resource_current, name_compare < 0))
    {
insert_by_name:
      allocation_flag = 0;
      goto perform_name_insertion;
    }
  }
  else {
    resource_current = (int64_t *)get_previous_resource(param_4);
    name_compare = memcmp(param_4 + 4, param_5, 0x10);
    if ((name_compare < 0) && (name_compare = memcmp(param_5, resource_current + 4, 0x10), name_compare < 0)) {
      if (*param_4 == 0) goto insert_by_name;
      allocation_flag = 1;
      param_4 = resource_current;
perform_name_insertion:
      if (param_4 != (int64_t *)0x0) {
        insert_resource_by_name(param_1, param_2, param_4, allocation_flag, param_5);
        return param_2;
      }
    }
  }
  insert_before = true;
  resource_current = (int64_t *)param_1[2];
  resource_next = param_1;
  while (resource_current != (int64_t *)0x0) {
    name_compare = memcmp(param_5, resource_current + 4, 0x10);
    insert_before = name_compare < 0;
    resource_next = resource_current;
    if (insert_before) {
      resource_current = (int64_t *)resource_current[1];
    }
    else {
      resource_current = (int64_t *)*resource_current;
    }
  }
  resource_current = resource_next;
  if (insert_before) {
    if (resource_next == (int64_t *)param_1[1]) goto allocate_by_name;
    resource_current = (int64_t *)get_next_resource(resource_next);
  }
  name_compare = memcmp(resource_current + 4, param_5, 0x10);
  if (-1 < name_compare) {
    *param_2 = resource_current;
    return param_2;
  }
allocate_by_name:
  if ((resource_next == param_1) || (name_compare = memcmp(param_5, resource_next + 4, 0x10), name_compare < 0)) {
    allocation_flag = 0;
  }
  else {
    allocation_flag = 1;
  }
  resource_data = allocate_resource_memory(g_memory_allocator, 0x40, (char)param_1[5]);
  name_part1 = param_5[1];
  name_part2 = param_5[2];
  name_part3 = param_5[3];
  *(int32_t *)(resource_data + 0x20) = *param_5;
  *(int32_t *)(resource_data + 0x24) = name_part1;
  *(int32_t *)(resource_data + 0x28) = name_part2;
  *(int32_t *)(resource_data + 0x2c) = name_part3;
  *(uint64_t *)(resource_data + 0x30) = 0;
  *(uint64_t *)(resource_data + 0x38) = 0;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data, resource_next, param_1, allocation_flag);
}

// 函数: 处理引擎资源名称
// 原始函数名: FUN_179a0a
void process_engine_resource_name(int32_t param_1)
{
  int32_t name_part1;
  int32_t name_part2;
  int32_t name_part3;
  int64_t resource_data;
  int64_t resource_context;
  int32_t *resource_name;
  int64_t resource_manager;
  
  if (resource_context != resource_manager) {
    memcmp(param_1, resource_context + 0x20, 0x10);
  }
  resource_data = allocate_resource_memory(g_memory_allocator, 0x40, *(int8_t *)(resource_manager + 0x28));
  name_part1 = resource_name[1];
  name_part2 = resource_name[2];
  name_part3 = resource_name[3];
  *(int32_t *)(resource_data + 0x20) = *resource_name;
  *(int32_t *)(resource_data + 0x24) = name_part1;
  *(int32_t *)(resource_data + 0x28) = name_part2;
  *(int32_t *)(resource_data + 0x2c) = name_part3;
  *(uint64_t *)(resource_data + 0x30) = 0;
  *(uint64_t *)(resource_data + 0x38) = 0;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data);
}

// 函数: 更新引擎资源引用
// 原始函数名: FUN_179a7a
void update_engine_resource_reference(void)
{
  uint64_t resource_data;
  uint64_t *resource_pointer;
  
  *resource_pointer = resource_data;
  return;
}

// 函数: 按类型分配引擎资源
// 原始函数名: FUN_179aa0
uint64_t *
allocate_engine_resource_by_type(int64_t *param_1, uint64_t *param_2, uint64_t param_3, int64_t *param_4,
                                 int *param_5)
{
  bool insert_before;
  int type_compare;
  int64_t *resource_current;
  int64_t *resource_next;
  int64_t resource_data;
  uint64_t allocation_flag;
  
  resource_current = (int64_t *)*param_1;
  if ((param_4 == resource_current) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = resource_current, *(int *)(resource_current + 4) < *param_5)) {
insert_by_type:
      allocation_flag = 0;
      goto perform_type_insertion;
    }
  }
  else {
    resource_current = (int64_t *)get_previous_resource(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)resource_current[4])) {
      if (*param_4 == 0) goto insert_by_type;
      allocation_flag = 1;
      param_4 = resource_current;
perform_type_insertion:
      if (param_4 != (int64_t *)0x0) {
        insert_resource_by_type(param_1, param_2, param_4, allocation_flag, param_5);
        return param_2;
      }
    }
  }
  insert_before = true;
  resource_current = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    resource_next = (int64_t *)param_1[2];
    do {
      resource_current = resource_next;
      insert_before = *param_5 < (int)resource_current[4];
      if (*param_5 < (int)resource_current[4]) {
        resource_next = (int64_t *)resource_current[1];
      }
      else {
        resource_next = (int64_t *)*resource_current;
      }
    } while (resource_next != (int64_t *)0x0);
  }
  resource_next = resource_current;
  if (insert_before) {
    if (resource_current == (int64_t *)param_1[1]) {
      type_compare = *param_5;
      goto allocate_by_type;
    }
    resource_next = (int64_t *)get_next_resource(resource_current);
  }
  type_compare = *param_5;
  if (type_compare <= (int)resource_next[4]) {
    *param_2 = resource_next;
    return param_2;
  }
allocate_by_type:
  if ((resource_current == param_1) || (type_compare < (int)resource_current[4])) {
    allocation_flag = 0;
  }
  else {
    allocation_flag = 1;
  }
  resource_data = allocate_resource_memory(g_memory_allocator, 0x30, (char)param_1[5]);
  *(int *)(resource_data + 0x20) = *param_5;
  *(uint64_t *)(resource_data + 0x28) = 0;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data, resource_current, param_1, allocation_flag);
}

// 函数: 处理引擎资源类型（简化版本）
// 原始函数名: FUN_179b7a
void process_engine_resource_type(void)
{
  int64_t resource_data;
  int32_t *type_info;
  int64_t resource_manager;
  
  resource_data = allocate_resource_memory(g_memory_allocator, 0x30, *(int8_t *)(resource_manager + 0x28));
  *(int32_t *)(resource_data + 0x20) = *type_info;
  *(uint64_t *)(resource_data + 0x28) = 0;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data);
}

// 函数: 处理引擎资源类型（重复函数，可能是错误）
// 原始函数名: FUN_179b91
void process_engine_resource_type_duplicate(void)
{
  int64_t resource_data;
  int32_t *type_info;
  int64_t resource_manager;
  
  resource_data = allocate_resource_memory(g_memory_allocator, 0x30, *(int8_t *)(resource_manager + 0x28));
  *(int32_t *)(resource_data + 0x20) = *type_info;
  *(uint64_t *)(resource_data + 0x28) = 0;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data);
}

// 函数: 处理引擎资源类型（第三个重复函数）
// 原始函数名: FUN_179b95
void process_engine_resource_type_triplicate(void)
{
  int64_t resource_data;
  int32_t *type_info;
  int64_t resource_manager;
  
  resource_data = allocate_resource_memory(g_memory_allocator, 0x30, *(int8_t *)(resource_manager + 0x28));
  *(int32_t *)(resource_data + 0x20) = *type_info;
  *(uint64_t *)(resource_data + 0x28) = 0;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data);
}

// 函数: 更新引擎资源数据
// 原始函数名: FUN_179bd8
void update_engine_resource_data(void)
{
  uint64_t resource_value;
  uint64_t *resource_pointer;
  
  *resource_pointer = resource_value;
  return;
}

// 函数: 插入引擎资源块
// 原始函数名: FUN_179c00
void insert_engine_resource_chunk(int64_t param_1, uint64_t param_2, int64_t param_3, uint64_t param_4,
                                 uint64_t *param_5)
{
  int64_t resource_data;
  int32_t insert_flag;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) &&
     (*(uint64_t *)(param_3 + 0x20) <= *param_5)) {
    insert_flag = 1;
  }
  else {
    insert_flag = 0;
  }
  resource_data = allocate_resource_memory(g_memory_allocator, 0x48, *(int8_t *)(param_1 + 0x28), param_4,
                        0xfffffffffffffffe);
  *(uint64_t *)(resource_data + 0x20) = *param_5;
  *(uint64_t *)(resource_data + 0x28) = 0;
  *(uint64_t *)(resource_data + 0x30) = 0;
  *(uint64_t *)(resource_data + 0x38) = 0;
  *(int32_t *)(resource_data + 0x40) = 3;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data, param_3, param_1, insert_flag);
}

// 函数: 按名称插入引擎资源
// 原始函数名: FUN_179cd0
void insert_engine_resource_by_name(int64_t param_1, uint64_t param_2, int64_t param_3, char param_4,
                                    int32_t *param_5)
{
  int32_t name_part1;
  int32_t name_part2;
  int32_t name_part3;
  int name_compare;
  int64_t resource_data;
  int32_t insert_flag;
  
  if ((param_4 == '\0') && (param_3 != param_1)) {
    name_compare = memcmp(param_5, param_3 + 0x20, 0x10);
    if (-1 < name_compare) {
      insert_flag = 1;
      goto perform_insertion;
    }
  }
  insert_flag = 0;
perform_insertion:
  resource_data = allocate_resource_memory(g_memory_allocator, 0x40, *(int8_t *)(param_1 + 0x28));
  name_part1 = param_5[1];
  name_part2 = param_5[2];
  name_part3 = param_5[3];
  *(int32_t *)(resource_data + 0x20) = *param_5;
  *(int32_t *)(resource_data + 0x24) = name_part1;
  *(int32_t *)(resource_data + 0x28) = name_part2;
  *(int32_t *)(resource_data + 0x2c) = name_part3;
  *(uint64_t *)(resource_data + 0x30) = 0;
  *(uint64_t *)(resource_data + 0x38) = 0;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data, param_3, param_1, insert_flag);
}

// 函数: 按类型插入引擎资源
// 原始函数名: FUN_179d80
void insert_engine_resource_by_type(int64_t param_1, uint64_t param_2, int64_t param_3, char param_4, int *param_5)
{
  int64_t resource_data;
  int32_t insert_flag;
  
  if (((param_4 == '\0') && (param_3 != param_1)) && (*(int *)(param_3 + 0x20) <= *param_5)) {
    insert_flag = 1;
  }
  else {
    insert_flag = 0;
  }
  resource_data = allocate_resource_memory(g_memory_allocator, 0x30, *(int8_t *)(param_1 + 0x28));
  *(int *)(resource_data + 0x20) = *param_5;
  *(uint64_t *)(resource_data + 0x28) = 0;
                    // WARNING: Subroutine does not return
  initialize_resource_chunk(resource_data, param_3, param_1, insert_flag);
}