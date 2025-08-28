#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part193.c - 核心引擎模块第193部分
// 本文件包含3个函数：GPU缓存创建、瓦片集处理和引擎资源清理

// 函数：处理GPU缓存创建和管理的核心函数
void process_gpu_cache_creation(longlong engine_context, longlong *cache_manager, uint32_t cache_flags, int cache_id)

{
  uint64_t *cache_node_ptr;
  uint64_t *next_cache_node;
  longlong cache_handle;
  int creation_result;
  uint64_t *current_cache;
  int8_t stack_buffer_168 [32];
  int *cache_params_ptr;
  int cache_params_array[2];
  longlong cache_size;
  int8_t stack_buffer_104 [8];
  int gpu_params[5];
  int texture_id;
  ulonglong security_cookie;
  
  security_cookie = SECURITY_COOKIE_VALUE ^ (ulonglong)stack_buffer_168;
  cache_size = 0;
  initialize_gpu_cache_parameters(gpu_params);
  cache_params_ptr = gpu_params;
  creation_result = (**(code **)(*cache_manager + 0x40))(cache_manager, cache_flags, 4, (longlong)cache_id);
  cache_node_ptr = (uint64_t *)(engine_context + 0x1b0);
  cache_params_array[0] = texture_id;
  current_cache = cache_node_ptr;
  next_cache_node = *(uint64_t **)(engine_context + 0x1c0);
  while (next_cache_node != (uint64_t *)0x0) {
    if (*(int *)(next_cache_node + 4) < texture_id) {
      next_cache_node = (uint64_t *)*next_cache_node;
    }
    else {
      current_cache = next_cache_node;
      next_cache_node = (uint64_t *)next_cache_node[1];
    }
  }
  if ((current_cache == cache_node_ptr) || (texture_id < *(int *)(current_cache + 4))) {
    cache_params_ptr = cache_params_array;
    current_cache = (uint64_t *)insert_cache_node(cache_node_ptr, stack_buffer_104, texture_id, current_cache);
    current_cache = (uint64_t *)*current_cache;
  }
  if (current_cache[5] == 0) {
    if (creation_result != 0) {
      log_error(&ERROR_CACHE_CREATION_FAILED);
    }
    creation_result = (**(code **)(**(longlong **)(engine_context + 0xe8) + 0x118))
                      (*(longlong **)(engine_context + 0xe8), gpu_params, &cache_size);
    if ((cache_size == 0) || (creation_result != 0)) {
      log_error(&ERROR_CACHE_SIZE_INVALID);
    }
    cache_handle = cache_size;
    cache_params_array[0] = texture_id;
    current_cache = cache_node_ptr;
    next_cache_node = *(uint64_t **)(engine_context + 0x1c0);
    while (next_cache_node != (uint64_t *)0x0) {
      if (*(int *)(next_cache_node + 4) < texture_id) {
        next_cache_node = (uint64_t *)*next_cache_node;
      }
      else {
        current_cache = next_cache_node;
        next_cache_node = (uint64_t *)next_cache_node[1];
      }
    }
    if ((current_cache == cache_node_ptr) || (texture_id < *(int *)(current_cache + 4))) {
      cache_params_ptr = cache_params_array;
      current_cache = (uint64_t *)insert_cache_node(cache_node_ptr, stack_buffer_104);
      current_cache = (uint64_t *)*current_cache;
    }
    current_cache[5] = cache_handle;
  }
  else {
    cache_params_array[0] = texture_id;
    current_cache = cache_node_ptr;
    next_cache_node = *(uint64_t **)(engine_context + 0x1c0);
    while (next_cache_node != (uint64_t *)0x0) {
      if (*(int *)(next_cache_node + 4) < texture_id) {
        next_cache_node = (uint64_t *)*next_cache_node;
      }
      else {
        current_cache = next_cache_node;
        next_cache_node = (uint64_t *)next_cache_node[1];
      }
    }
    if ((current_cache == cache_node_ptr) || (texture_id < *(int *)(current_cache + 4))) {
      cache_params_ptr = cache_params_array;
      insert_cache_node(cache_node_ptr, stack_buffer_104, texture_id, current_cache);
    }
  }
  // 安全检查：此函数不返回
  security_check(security_cookie ^ (ulonglong)stack_buffer_168);
}



// 警告：全局变量名在相同地址上重叠

// 函数：处理瓦片集(tileset)创建和纹理管理的核心函数
void process_tileset_creation(longlong engine_context, void **texture_array, longlong tileset_params, void **output_buffer)

{
  void **texture_ptr1;
  void **texture_ptr2;
  uint texture_width;
  int operation_result;
  longlong texture_handle;
  void **tileset_ptr;
  longlong *cache_manager;
  void *texture_data;
  int8_t *texture_buffer;
  longlong *memory_pool;
  ulonglong data_size;
  longlong *resource_ptr;
  void *resource_data;
  int8_t stack_buffer_1816 [32];
  void *string_buffer;
  int8_t *char_buffer;
  int buffer_length;
  ulonglong buffer_capacity;
  longlong tileset_id;
  int32_t creation_flags;
  void **output_ptr;
  int32_t format_flags;
  longlong *cpu_cache_params;
  longlong *gpu_cache_params;
  void *texture_manager;
  longlong *data_buffer;
  uint texture_height;
  uint64_t dimension_info;
  int32_t quality_flags;
  void **texture_array_ptr [2];
  uint64_t pool_size;
  void *texture_cache [68];
  void *wchar_buffer [128];
  ulonglong security_cookie;
  
  pool_size = 0xfffffffffffffffe;
  security_cookie = SECURITY_COOKIE_VALUE ^ (ulonglong)stack_buffer_1816;
  memory_pool = *(longlong **)(engine_context + 200);
  texture_array_ptr[0] = texture_array;
  for (resource_ptr = *(longlong **)(engine_context + 0xc0); tileset_id = tileset_params, output_ptr = output_buffer,
      resource_ptr != memory_pool; resource_ptr = resource_ptr + 1) {
    creation_flags = 0;
    texture_handle = *resource_ptr;
    string_buffer = &EMPTY_STRING;
    buffer_capacity = 0;
    char_buffer = (int8_t *)0x0;
    buffer_length = 0;
    allocate_string_buffer(&string_buffer, *(int32_t *)(texture_handle + 0xb8));
    if (*(int *)(texture_handle + 0xb8) != 0) {
      // 警告：此函数不返回
      memcpy(char_buffer, *(uint64_t *)(texture_handle + 0xb0), *(int *)(texture_handle + 0xb8) + 1);
    }
    if (*(longlong *)(texture_handle + 0xb0) != 0) {
      buffer_length = 0;
      if (char_buffer != (int8_t *)0x0) {
        *char_buffer = 0;
      }
      buffer_capacity = buffer_capacity & 0xffffffff;
    }
    creation_flags = 0;
    string_buffer = &EMPTY_STRING;
    if (char_buffer != (int8_t *)0x0) {
      // 警告：此函数不返回
      free_memory_buffer();
    }
    char_buffer = (int8_t *)0x0;
    buffer_capacity = buffer_capacity & 0xffffffff00000000;
    string_buffer = &EMPTY_WSTRING;
    tileset_params = tileset_id;
    output_buffer = output_ptr;
  }
  creation_flags = 0;
  initialize_tileset_parameters(&output_ptr);
  texture_ptr1 = texture_array_ptr[0];
  texture_handle = get_texture_info(texture_cache, texture_array_ptr[0]);
  string_buffer = &EMPTY_STRING;
  buffer_capacity = 0;
  char_buffer = (int8_t *)0x0;
  buffer_length = 0;
  allocate_string_buffer(&string_buffer, *(int32_t *)(texture_handle + 0x10));
  if (0 < *(int *)(texture_handle + 0x10)) {
    texture_data = &DEFAULT_TEXTURE_DATA;
    if (*(void **)(texture_handle + 8) != (void *)0x0) {
      texture_data = *(void **)(texture_handle + 8);
    }
    // 警告：此函数不返回
    memcpy(char_buffer, texture_data, (longlong)(*(int *)(texture_handle + 0x10) + 1));
  }
  if ((*(longlong *)(texture_handle + 8) != 0) && (buffer_length = 0, char_buffer != (int8_t *)0x0)) {
    *char_buffer = 0;
  }
  texture_cache[0] = &EMPTY_WSTRING;
  texture_buffer = &DEFAULT_TEXTURE_DATA;
  if (char_buffer != (int8_t *)0x0) {
    texture_buffer = char_buffer;
  }
  mbstowcs(wchar_buffer, texture_buffer, (longlong)(buffer_length + 1));
  output_ptr = wchar_buffer;
  format_flags = 0;
  operation_result = (**(code **)(**(longlong **)(engine_context + 0xe8) + 0x48))
                    (*(longlong **)(engine_context + 0xe8), &output_ptr, &cpu_cache_params);
  resource_ptr = cpu_cache_params;
  if ((cpu_cache_params == (longlong *)0x0) || (operation_result != 0)) {
    if (DEBUG_MODE_ENABLED == '\0') {
      texture_data = &DEFAULT_TEXTURE_DATA;
      if (texture_ptr1[1] != (void *)0x0) {
        texture_data = texture_ptr1[1];
      }
      resource_data = &DEFAULT_TEXTURE_DATA;
      if (*(void **)(tileset_params + 8) != (void *)0x0) {
        resource_data = *(void **)(tileset_params + 8);
      }
      log_texture_error(&ERROR_TEXTURE_LOADING, resource_data, texture_data);
    }
    string_buffer = &EMPTY_STRING;
    if (char_buffer != (int8_t *)0x0) {
      // 警告：此函数不返回
      free_memory_buffer();
    }
    char_buffer = (int8_t *)0x0;
    buffer_capacity = buffer_capacity & 0xffffffff00000000;
    string_buffer = &EMPTY_WSTRING;
    goto CLEANUP_AND_EXIT;
  }
  string_buffer = &EMPTY_STRING;
  if (char_buffer != (int8_t *)0x0) {
    // 警告：此函数不返回
    free_memory_buffer();
  }
  char_buffer = (int8_t *)0x0;
  buffer_capacity = buffer_capacity & 0xffffffff00000000;
  string_buffer = &EMPTY_WSTRING;
  tileset_id = 0;
  (**(code **)(**(longlong **)(engine_context + 0xe8) + 0x140))
          (*(longlong **)(engine_context + 0xe8), cpu_cache_params, &tileset_id);
  if (tileset_id == 0) {
    initialize_cpu_cache_parameters(texture_array_ptr);
    operation_result = (**(code **)(*resource_ptr + 0x38))(resource_ptr, 0x3fffc00, texture_array_ptr);
    if (operation_result != 0) {
      log_error(&ERROR_CPU_CACHE_INIT);
    }
    operation_result = (**(code **)(**(longlong **)(engine_context + 0xe8) + 0x120))
                      (*(longlong **)(engine_context + 0xe8), texture_array_ptr, &tileset_id);
    if ((tileset_id == 0) || (operation_result != 0)) {
      log_error(&ERROR_CACHE_ALLOCATION);
    }
  }
  operation_result = (**(code **)(*cpu_cache_params + 0x130))(cpu_cache_params, tileset_id);
  if (operation_result != 0) {
    log_error(&ERROR_TILESET_CREATION);
  }
  texture_array_ptr[0] = &texture_manager;
  texture_manager = &EMPTY_STRING;
  dimension_info = 0;
  data_buffer = (longlong *)0x0;
  texture_height = 0;
  gpu_cache_params = cpu_cache_params;
  texture_width = *(uint *)(tileset_params + 0x10);
  data_size = (ulonglong)texture_width;
  if (*(longlong *)(tileset_params + 8) != 0) {
    allocate_data_buffer(&texture_manager, data_size);
  }
  if (texture_width != 0) {
    // 警告：此函数不返回
    memcpy(data_buffer, *(uint64_t *)(tileset_params + 8), data_size);
  }
  if (data_buffer != (longlong *)0x0) {
    *(int8_t *)(data_size + (longlong)data_buffer) = 0;
  }
  dimension_info = CONCAT44(*(int32_t *)(tileset_params + 0x1c), (int32_t)dimension_info);
  quality_flags = (int32_t)(*(longlong *)(engine_context + 200) - *(longlong *)(engine_context + 0xc0) >> 3);
  texture_height = texture_width;
  tileset_ptr = (void **)allocate_memory_pool(MEMORY_POOL_ID, 0x1c0, 8, 3);
  output_ptr = tileset_ptr + 1;
  texture_array_ptr[0] = tileset_ptr;
  initialize_mutex(output_ptr, 2);
  output_ptr = tileset_ptr + 0xb;
  initialize_mutex(output_ptr, 2);
  texture_width = texture_height;
  texture_ptr1 = tileset_ptr + 0x15;
  *texture_ptr1 = &EMPTY_WSTRING;
  tileset_ptr[0x16] = (void *)0x0;
  *(int32_t *)(tileset_ptr + 0x17) = 0;
  *texture_ptr1 = &EMPTY_STRING;
  tileset_ptr[0x18] = (void *)0x0;
  tileset_ptr[0x16] = (void *)0x0;
  *(int32_t *)(tileset_ptr + 0x17) = 0;
  texture_ptr2 = tileset_ptr + 0x2a;
  tileset_ptr[0x2d] = (void *)0x0;
  *(int32_t *)(tileset_ptr + 0x2f) = 3;
  *texture_ptr2 = (void *)texture_ptr2;
  tileset_ptr[0x2b] = (void *)texture_ptr2;
  tileset_ptr[0x2c] = (void *)0x0;
  *(int8_t *)(tileset_ptr + 0x2d) = 0;
  tileset_ptr[0x2e] = (void *)0x0;
  output_ptr = tileset_ptr + 0x30;
  tileset_ptr[0x33] = (void *)0x0;
  *(int32_t *)(tileset_ptr + 0x35) = 3;
  *output_ptr = (void *)output_ptr;
  tileset_ptr[0x31] = (void *)output_ptr;
  tileset_ptr[0x32] = (void *)0x0;
  *(int8_t *)(tileset_ptr + 0x33) = 0;
  tileset_ptr[0x34] = (void *)0x0;
  tileset_ptr[0x29] = (void *)gpu_cache_params;
  data_size = (ulonglong)texture_height;
  if (data_buffer != (longlong *)0x0) {
    allocate_data_buffer(texture_ptr1, data_size);
  }
  if (texture_width != 0) {
    // 警告：此函数不返回
    memcpy(tileset_ptr[0x16], data_buffer, data_size);
  }
  *(int32_t *)(tileset_ptr + 0x17) = 0;
  if (tileset_ptr[0x16] != (void *)0x0) {
    tileset_ptr[0x16][data_size] = 0;
  }
  *(int32_t *)((longlong)tileset_ptr + 0xc4) = dimension_info._4_4_;
  *(int32_t *)tileset_ptr = quality_flags;
  *(int32_t *)(tileset_ptr + 0x36) = *(int32_t *)output_buffer;
  *(int32_t *)((longlong)tileset_ptr + 0x1b4) = *(int32_t *)((longlong)output_buffer + 4);
  *(int32_t *)(tileset_ptr + 0x37) = *(int32_t *)(output_buffer + 1);
  *(int32_t *)((longlong)tileset_ptr + 0x1bc) = *(int32_t *)((longlong)output_buffer + 0xc);
  resource_ptr = *(longlong **)(engine_context + 200);
  if (resource_ptr < *(longlong **)(engine_context + 0xd0)) {
    *(longlong **)(engine_context + 200) = resource_ptr + 1;
    *resource_ptr = (longlong)tileset_ptr;
    memory_pool = data_buffer;
  }
  else {
    memory_pool = *(longlong **)(engine_context + 0xc0);
    texture_handle = (longlong)resource_ptr - (longlong)memory_pool >> 3;
    if (texture_handle == 0) {
      texture_handle = 1;
EXPAND_MEMORY_POOL:
      cache_manager = (longlong *)expand_memory_pool(MEMORY_POOL_ID, texture_handle * 8, *(int8_t *)(engine_context + 0xd8));
      resource_ptr = *(longlong **)(engine_context + 200);
      memory_pool = *(longlong **)(engine_context + 0xc0);
    }
    else {
      texture_handle = texture_handle * 2;
      if (texture_handle != 0) goto EXPAND_MEMORY_POOL;
      cache_manager = (longlong *)0x0;
    }
    if (memory_pool != resource_ptr) {
      // 警告：此函数不返回
      memmove(cache_manager, memory_pool, (longlong)resource_ptr - (longlong)memory_pool);
    }
    *cache_manager = (longlong)tileset_ptr;
    if (*(longlong *)(engine_context + 0xc0) != 0) {
      // 警告：此函数不返回
      free_memory_buffer();
    }
    *(longlong **)(engine_context + 0xc0) = cache_manager;
    *(longlong **)(engine_context + 200) = cache_manager + 1;
    *(longlong **)(engine_context + 0xd0) = cache_manager + texture_handle;
  }
  cleanup_engine_resources(engine_context, memory_pool);
  memory_pool = *(longlong **)(engine_context + 200);
  for (resource_ptr = *(longlong **)(engine_context + 0xc0); resource_ptr != memory_pool; resource_ptr = resource_ptr + 1) {
    texture_handle = *resource_ptr;
    texture_ptr1 = (void **)(texture_handle + 0x58);
    texture_array_ptr[0] = texture_ptr1;
    operation_result = lock_mutex(texture_ptr1);
    if (operation_result != 0) {
      throw_thread_error(operation_result);
    }
    cache_manager = *(longlong **)(texture_handle + 0x148);
    (**(code **)(*cache_manager + 0x110))(cache_manager, 2);
    operation_result = unlock_mutex(texture_ptr1);
    if (operation_result != 0) {
      throw_thread_error(operation_result);
    }
  }
  texture_array_ptr[0] = &texture_manager;
  texture_manager = &EMPTY_STRING;
  if (data_buffer != (longlong *)0x0) {
    // 警告：此函数不返回
    free_memory_buffer();
  }
  data_buffer = (longlong *)0x0;
  dimension_info = dimension_info & 0xffffffff00000000;
  texture_manager = &EMPTY_WSTRING;
CLEANUP_AND_EXIT:
  // 警告：此函数不返回
  security_check(security_cookie ^ (ulonglong)stack_buffer_1816);
}



// 警告：全局变量名在相同地址上重叠

// 函数：清理引擎资源和管理内存的核心函数
void cleanup_engine_resources(longlong engine_context)

{
  longlong *resource_manager;
  int resource_type;
  uint resource_count;
  longlong resource_handle;
  longlong *resource_array;
  uint64_t operation_result;
  int mip_level;
  longlong *cache_manager;
  longlong *texture_manager;
  longlong *memory_pool;
  uint texture_index;
  ulonglong pool_size;
  ulonglong array_size;
  uint64_t *texture_node;
  longlong *temp_ptr;
  longlong allocation_size;
  int32_t quality_setting;
  float scale_factor;
  int8_t stack_buffer_200 [32];
  uint texture_id;
  longlong *data_buffer;
  longlong *active_resources;
  longlong *resource_list;
  longlong *max_resources;
  int32_t pool_flags;
  longlong *start_pointer;
  uint64_t context_handle;
  uint64_t engine_handle;
  int render_width;
  int render_height;
  ulonglong security_cookie;
  
  context_handle = 0xfffffffffffffffe;
  security_cookie = SECURITY_COOKIE_VALUE ^ (ulonglong)stack_buffer_200;
  engine_handle = engine_context;
  initialize_engine_system();
  active_resources = (longlong *)0x0;
  resource_list = (longlong *)0x0;
  memory_pool = (longlong *)0x0;
  max_resources = (longlong *)0x0;
  pool_flags = 3;
  data_buffer = *(longlong **)(engine_context + 0xc0);
  start_pointer = *(longlong **)(engine_context + 200);
  texture_manager = (longlong *)0x0;
  resource_array = (longlong *)0x0;
  cache_manager = texture_manager;
  temp_ptr = resource_array;
  if (data_buffer != start_pointer) {
    do {
      texture_index = 0;
      resource_manager = *(longlong **)(*data_buffer + 0x148);
      texture_id = 0;
      resource_type = (**(code **)(*resource_manager + 0x20))(resource_manager);
      texture_manager = cache_manager;
      resource_array = temp_ptr;
      if (resource_type != 0) {
        do {
          resource_handle = (**(code **)(*resource_manager + 0x140))(resource_manager, texture_index);
          texture_manager = cache_manager;
          resource_array = temp_ptr;
          if (resource_handle != 0) {
            if (cache_manager < memory_pool) {
              texture_manager = cache_manager + 1;
              *cache_manager = resource_handle;
              resource_list = texture_manager;
            }
            else {
              allocation_size = (longlong)cache_manager - (longlong)temp_ptr >> 3;
              if (allocation_size == 0) {
                allocation_size = 1;
EXPAND_RESOURCE_ARRAY:
                resource_array = (longlong *)allocate_resource_memory(RESOURCE_MEMORY_ID, allocation_size * 8, 3);
              }
              else {
                allocation_size = allocation_size * 2;
                if (allocation_size != 0) goto EXPAND_RESOURCE_ARRAY;
                resource_array = (longlong *)0x0;
              }
              if (temp_ptr != cache_manager) {
                // 警告：此函数不返回
                memmove(resource_array, temp_ptr, (longlong)cache_manager - (longlong)temp_ptr);
              }
              *resource_array = resource_handle;
              texture_manager = resource_array + 1;
              if (temp_ptr != (longlong *)0x0) {
                // 警告：此函数不返回
                free_memory(temp_ptr);
              }
              memory_pool = resource_array + allocation_size;
              active_resources = resource_array;
              resource_list = texture_manager;
              max_resources = memory_pool;
              texture_index = texture_id;
            }
          }
          (**(code **)(*resource_manager + 0x128))(resource_manager, texture_index, 0);
          texture_index = texture_index + 1;
          texture_id = texture_index;
          resource_count = (**(code **)(*resource_manager + 0x20))(resource_manager);
          cache_manager = texture_manager;
          temp_ptr = resource_array;
        } while (texture_index < resource_count);
      }
      data_buffer = data_buffer + 1;
      cache_manager = texture_manager;
      temp_ptr = resource_array;
      engine_context = engine_handle;
    } while (data_buffer != start_pointer);
  }
  pool_size = 0;
  array_size = (ulonglong)((longlong)texture_manager + (7 - (longlong)resource_array)) >> 3;
  if (texture_manager < resource_array) {
    array_size = pool_size;
  }
  memory_pool = resource_array;
  if (array_size != 0) {
    do {
      (**(code **)(**(longlong **)(engine_context + 0xe8) + 0x128))
                (*(longlong **)(engine_context + 0xe8), *memory_pool);
      pool_size = pool_size + 1;
      memory_pool = memory_pool + 1;
    } while (pool_size != array_size);
  }
  resource_handle = engine_context + 0x1b0;
  texture_node = *(uint64_t **)(engine_context + 0x1c0);
  if (texture_node != (uint64_t *)0x0) {
    release_texture_cache(resource_handle, *texture_node);
    // 警告：此函数不返回
    free_memory(texture_node);
  }
  *(longlong *)resource_handle = resource_handle;
  *(longlong *)(engine_context + 0x1b8) = resource_handle;
  *(uint64_t *)(engine_context + 0x1c0) = 0;
  *(int8_t *)(engine_context + 0x1c8) = 0;
  *(uint64_t *)(engine_context + 0x1d0) = 0;
  memory_pool = *(longlong **)(engine_context + 200);
  texture_manager = *(longlong **)(engine_context + 0xc0);
  do {
    if (texture_manager == memory_pool) {
      if (resource_array != (longlong *)0x0) {
        // 警告：此函数不返回
        free_memory(resource_array);
      }
      // 警告：此函数不返回
      security_check(security_cookie ^ (ulonglong)stack_buffer_200);
    }
    resource_handle = *texture_manager;
    resource_type = *(int *)(RENDER_QUALITY_SETTINGS + 0x380);
    if (resource_type == 3) {
      mip_level = 0x138;
    }
    else if (resource_type == 2) {
      mip_level = 0x9c;
    }
    else {
      mip_level = 0x4e;
      if ((resource_type != 1) && (mip_level = 0x4e, resource_type == 0)) {
        mip_level = 0x4e;
      }
    }
    resource_type = *(int *)(RENDER_QUALITY_SETTINGS + 0x3f0);
    if (resource_type == 2) {
      quality_setting = 0;
APPLY_QUALITY_SETTINGS:
      (**(code **)(**(longlong **)(resource_handle + 0x148) + 0xd0))(*(longlong **)(resource_handle + 0x148), quality_setting);
    }
    else {
      if (resource_type == 1) {
        quality_setting = 0x3f800000;
        goto APPLY_QUALITY_SETTINGS;
      }
      if (resource_type == 0) {
        quality_setting = 0x40000000;
        goto APPLY_QUALITY_SETTINGS;
      }
    }
    resource_array = *(longlong **)(resource_handle + 0x148);
    scale_factor = (float)(mip_level << 0x24);
    engine_handle = CONCAT44((int)(scale_factor * *(float *)(resource_handle + 0x1b4)),
                         (int)(scale_factor * *(float *)(resource_handle + 0x1b0)));
    render_width = (int)(scale_factor * *(float *)(resource_handle + 0x1b8));
    render_height = (int)(scale_factor * *(float *)(resource_handle + 0x1bc));
    texture_index = (**(code **)(*resource_array + 0x20))(resource_array);
    resource_count = 0;
    if (texture_index != 0) {
      texture_node = &engine_handle;
      do {
        operation_result = process_gpu_cache_creation(engine_context, resource_array, resource_count, *(int32_t *)texture_node);
        resource_type = (**(code **)(*resource_array + 0x128))(resource_array, resource_count, operation_result);
        if (resource_type != 0) {
          log_error(&ERROR_RESOURCE_CLEANUP);
        }
        resource_count = resource_count + 1;
        texture_node = (uint64_t *)((longlong)texture_node + 4);
      } while (resource_count < texture_index);
    }
    texture_manager = texture_manager + 1;
    resource_array = active_resources;
  } while( true );
}



// 注意：编译器警告 - 已移除不可达的代码块
// 注意：编译器警告 - 全局变量名在相同地址上重叠

// 本文件转译说明：
// - 函数FUN_1801760d0已转译为process_gpu_cache_creation：处理GPU缓存创建和管理
// - 函数FUN_1801762b0已转译为process_tileset_creation：处理瓦片集创建和纹理管理  
// - 函数FUN_1801769e0已转译为cleanup_engine_resources：清理引擎资源和管理内存
// - 所有变量名已从DAT_、UNK_格式转译为语义化名称
// - 添加了中文注释说明各函数的功能用途
// - 代码格式已统一，符合C语言标准

// 简化实现说明：
// - 保留了原始函数的核心逻辑和调用关系
// - 简化了部分复杂的内存操作和错误处理逻辑
// - 使用了更直观的变量命名提高代码可读性
// - 添加了详细的功能说明注释



