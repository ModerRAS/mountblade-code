#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part193.c - 核心引擎模块第193部分
// 本文件包含3个函数：GPU缓存创建、瓦片集处理和引擎资源清理

// 函数：处理GPU缓存创建和管理的核心函数
void process_gpu_cache_creation(longlong engine_context, longlong *cache_manager, uint32_t cache_flags, int cache_id)

{
  undefined8 *cache_node_ptr;
  undefined8 *next_cache_node;
  longlong cache_handle;
  int creation_result;
  undefined8 *current_cache;
  undefined1 stack_buffer_168 [32];
  int *cache_params_ptr;
  int cache_params_array[2];
  longlong cache_size;
  undefined1 stack_buffer_104 [8];
  int gpu_params[5];
  int texture_id;
  ulonglong security_cookie;
  
  security_cookie = SECURITY_COOKIE_VALUE ^ (ulonglong)stack_buffer_168;
  cache_size = 0;
  initialize_gpu_cache_parameters(gpu_params);
  cache_params_ptr = gpu_params;
  creation_result = (**(code **)(*cache_manager + 0x40))(cache_manager, cache_flags, 4, (longlong)cache_id);
  cache_node_ptr = (undefined8 *)(engine_context + 0x1b0);
  cache_params_array[0] = texture_id;
  current_cache = cache_node_ptr;
  next_cache_node = *(undefined8 **)(engine_context + 0x1c0);
  while (next_cache_node != (undefined8 *)0x0) {
    if (*(int *)(next_cache_node + 4) < texture_id) {
      next_cache_node = (undefined8 *)*next_cache_node;
    }
    else {
      current_cache = next_cache_node;
      next_cache_node = (undefined8 *)next_cache_node[1];
    }
  }
  if ((current_cache == cache_node_ptr) || (texture_id < *(int *)(current_cache + 4))) {
    cache_params_ptr = cache_params_array;
    current_cache = (undefined8 *)insert_cache_node(cache_node_ptr, stack_buffer_104, texture_id, current_cache);
    current_cache = (undefined8 *)*current_cache;
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
    next_cache_node = *(undefined8 **)(engine_context + 0x1c0);
    while (next_cache_node != (undefined8 *)0x0) {
      if (*(int *)(next_cache_node + 4) < texture_id) {
        next_cache_node = (undefined8 *)*next_cache_node;
      }
      else {
        current_cache = next_cache_node;
        next_cache_node = (undefined8 *)next_cache_node[1];
      }
    }
    if ((current_cache == cache_node_ptr) || (texture_id < *(int *)(current_cache + 4))) {
      cache_params_ptr = cache_params_array;
      current_cache = (undefined8 *)insert_cache_node(cache_node_ptr, stack_buffer_104);
      current_cache = (undefined8 *)*current_cache;
    }
    current_cache[5] = cache_handle;
  }
  else {
    cache_params_array[0] = texture_id;
    current_cache = cache_node_ptr;
    next_cache_node = *(undefined8 **)(engine_context + 0x1c0);
    while (next_cache_node != (undefined8 *)0x0) {
      if (*(int *)(next_cache_node + 4) < texture_id) {
        next_cache_node = (undefined8 *)*next_cache_node;
      }
      else {
        current_cache = next_cache_node;
        next_cache_node = (undefined8 *)next_cache_node[1];
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
void process_tileset_creation(longlong engine_context, undefined **texture_array, longlong tileset_params, undefined **output_buffer)

{
  undefined **texture_ptr1;
  undefined **texture_ptr2;
  uint texture_width;
  int operation_result;
  longlong texture_handle;
  undefined **tileset_ptr;
  longlong *cache_manager;
  undefined *texture_data;
  undefined1 *texture_buffer;
  longlong *memory_pool;
  ulonglong data_size;
  longlong *resource_ptr;
  undefined *resource_data;
  undefined1 stack_buffer_1816 [32];
  undefined *string_buffer;
  undefined1 *char_buffer;
  int buffer_length;
  ulonglong buffer_capacity;
  longlong tileset_id;
  undefined4 creation_flags;
  undefined **output_ptr;
  undefined4 format_flags;
  longlong *cpu_cache_params;
  longlong *gpu_cache_params;
  undefined *texture_manager;
  longlong *data_buffer;
  uint texture_height;
  undefined8 dimension_info;
  undefined4 quality_flags;
  undefined **texture_array_ptr [2];
  undefined8 pool_size;
  undefined *texture_cache [68];
  undefined *wchar_buffer [128];
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
    char_buffer = (undefined1 *)0x0;
    buffer_length = 0;
    allocate_string_buffer(&string_buffer, *(undefined4 *)(texture_handle + 0xb8));
    if (*(int *)(texture_handle + 0xb8) != 0) {
      // 警告：此函数不返回
      memcpy(char_buffer, *(undefined8 *)(texture_handle + 0xb0), *(int *)(texture_handle + 0xb8) + 1);
    }
    if (*(longlong *)(texture_handle + 0xb0) != 0) {
      buffer_length = 0;
      if (char_buffer != (undefined1 *)0x0) {
        *char_buffer = 0;
      }
      buffer_capacity = buffer_capacity & 0xffffffff;
    }
    creation_flags = 0;
    string_buffer = &EMPTY_STRING;
    if (char_buffer != (undefined1 *)0x0) {
      // 警告：此函数不返回
      free_memory_buffer();
    }
    char_buffer = (undefined1 *)0x0;
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
  char_buffer = (undefined1 *)0x0;
  buffer_length = 0;
  allocate_string_buffer(&string_buffer, *(undefined4 *)(texture_handle + 0x10));
  if (0 < *(int *)(texture_handle + 0x10)) {
    texture_data = &DEFAULT_TEXTURE_DATA;
    if (*(undefined **)(texture_handle + 8) != (undefined *)0x0) {
      texture_data = *(undefined **)(texture_handle + 8);
    }
    // 警告：此函数不返回
    memcpy(char_buffer, texture_data, (longlong)(*(int *)(texture_handle + 0x10) + 1));
  }
  if ((*(longlong *)(texture_handle + 8) != 0) && (buffer_length = 0, char_buffer != (undefined1 *)0x0)) {
    *char_buffer = 0;
  }
  texture_cache[0] = &EMPTY_WSTRING;
  texture_buffer = &DEFAULT_TEXTURE_DATA;
  if (char_buffer != (undefined1 *)0x0) {
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
      if (texture_ptr1[1] != (undefined *)0x0) {
        texture_data = texture_ptr1[1];
      }
      resource_data = &DEFAULT_TEXTURE_DATA;
      if (*(undefined **)(tileset_params + 8) != (undefined *)0x0) {
        resource_data = *(undefined **)(tileset_params + 8);
      }
      log_texture_error(&ERROR_TEXTURE_LOADING, resource_data, texture_data);
    }
    string_buffer = &EMPTY_STRING;
    if (char_buffer != (undefined1 *)0x0) {
      // 警告：此函数不返回
      free_memory_buffer();
    }
    char_buffer = (undefined1 *)0x0;
    buffer_capacity = buffer_capacity & 0xffffffff00000000;
    string_buffer = &EMPTY_WSTRING;
    goto CLEANUP_AND_EXIT;
  }
  string_buffer = &EMPTY_STRING;
  if (char_buffer != (undefined1 *)0x0) {
    // 警告：此函数不返回
    free_memory_buffer();
  }
  char_buffer = (undefined1 *)0x0;
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
    memcpy(data_buffer, *(undefined8 *)(tileset_params + 8), data_size);
  }
  if (data_buffer != (longlong *)0x0) {
    *(undefined1 *)(data_size + (longlong)data_buffer) = 0;
  }
  dimension_info = CONCAT44(*(undefined4 *)(tileset_params + 0x1c), (undefined4)dimension_info);
  quality_flags = (undefined4)(*(longlong *)(engine_context + 200) - *(longlong *)(engine_context + 0xc0) >> 3);
  texture_height = texture_width;
  tileset_ptr = (undefined **)allocate_memory_pool(MEMORY_POOL_ID, 0x1c0, 8, 3);
  output_ptr = tileset_ptr + 1;
  texture_array_ptr[0] = tileset_ptr;
  initialize_mutex(output_ptr, 2);
  output_ptr = tileset_ptr + 0xb;
  initialize_mutex(output_ptr, 2);
  texture_width = texture_height;
  texture_ptr1 = tileset_ptr + 0x15;
  *texture_ptr1 = &EMPTY_WSTRING;
  tileset_ptr[0x16] = (undefined *)0x0;
  *(undefined4 *)(tileset_ptr + 0x17) = 0;
  *texture_ptr1 = &EMPTY_STRING;
  tileset_ptr[0x18] = (undefined *)0x0;
  tileset_ptr[0x16] = (undefined *)0x0;
  *(undefined4 *)(tileset_ptr + 0x17) = 0;
  texture_ptr2 = tileset_ptr + 0x2a;
  tileset_ptr[0x2d] = (undefined *)0x0;
  *(undefined4 *)(tileset_ptr + 0x2f) = 3;
  *texture_ptr2 = (undefined *)texture_ptr2;
  tileset_ptr[0x2b] = (undefined *)texture_ptr2;
  tileset_ptr[0x2c] = (undefined *)0x0;
  *(undefined1 *)(tileset_ptr + 0x2d) = 0;
  tileset_ptr[0x2e] = (undefined *)0x0;
  output_ptr = tileset_ptr + 0x30;
  tileset_ptr[0x33] = (undefined *)0x0;
  *(undefined4 *)(tileset_ptr + 0x35) = 3;
  *output_ptr = (undefined *)output_ptr;
  tileset_ptr[0x31] = (undefined *)output_ptr;
  tileset_ptr[0x32] = (undefined *)0x0;
  *(undefined1 *)(tileset_ptr + 0x33) = 0;
  tileset_ptr[0x34] = (undefined *)0x0;
  tileset_ptr[0x29] = (undefined *)gpu_cache_params;
  data_size = (ulonglong)texture_height;
  if (data_buffer != (longlong *)0x0) {
    allocate_data_buffer(texture_ptr1, data_size);
  }
  if (texture_width != 0) {
    // 警告：此函数不返回
    memcpy(tileset_ptr[0x16], data_buffer, data_size);
  }
  *(undefined4 *)(tileset_ptr + 0x17) = 0;
  if (tileset_ptr[0x16] != (undefined *)0x0) {
    tileset_ptr[0x16][data_size] = 0;
  }
  *(undefined4 *)((longlong)tileset_ptr + 0xc4) = dimension_info._4_4_;
  *(undefined4 *)tileset_ptr = quality_flags;
  *(undefined4 *)(tileset_ptr + 0x36) = *(undefined4 *)output_buffer;
  *(undefined4 *)((longlong)tileset_ptr + 0x1b4) = *(undefined4 *)((longlong)output_buffer + 4);
  *(undefined4 *)(tileset_ptr + 0x37) = *(undefined4 *)(output_buffer + 1);
  *(undefined4 *)((longlong)tileset_ptr + 0x1bc) = *(undefined4 *)((longlong)output_buffer + 0xc);
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
      cache_manager = (longlong *)expand_memory_pool(MEMORY_POOL_ID, texture_handle * 8, *(undefined1 *)(engine_context + 0xd8));
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
    texture_ptr1 = (undefined **)(texture_handle + 0x58);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801769e0(longlong param_1)
void FUN_1801769e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_c8 [32];
  uint uStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  undefined4 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_5c;
  ulonglong uStack_58;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_68 = param_1;
  FUN_180176060();
  plStack_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  plStack_88 = (longlong *)0x0;
  uStack_80 = 3;
  plStack_a0 = *(longlong **)(param_1 + 0xc0);
  plStack_78 = *(longlong **)(param_1 + 200);
  plVar9 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  plVar8 = plVar9;
  plVar15 = plVar5;
  if (plStack_a0 != plStack_78) {
    do {
      uVar11 = 0;
      plVar1 = *(longlong **)(*plStack_a0 + 0x148);
      uStack_a8 = 0;
      iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar9 = plVar8;
      plVar5 = plVar15;
      if (iVar2 != 0) {
        do {
          lVar4 = (**(code **)(*plVar1 + 0x140))(plVar1,uVar11);
          plVar9 = plVar8;
          plVar5 = plVar15;
          if (lVar4 != 0) {
            if (plVar8 < plVar10) {
              plVar9 = plVar8 + 1;
              *plVar8 = lVar4;
              plStack_90 = plVar9;
            }
            else {
              lVar16 = (longlong)plVar8 - (longlong)plVar15 >> 3;
              if (lVar16 == 0) {
                lVar16 = 1;
LAB_180176af7:
                plVar5 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar16 * 8,3);
              }
              else {
                lVar16 = lVar16 * 2;
                if (lVar16 != 0) goto LAB_180176af7;
                plVar5 = (longlong *)0x0;
              }
              if (plVar15 != plVar8) {
                    // WARNING: Subroutine does not return
                memmove(plVar5,plVar15,(longlong)plVar8 - (longlong)plVar15);
              }
              *plVar5 = lVar4;
              plVar9 = plVar5 + 1;
              if (plVar15 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar15);
              }
              plVar10 = plVar5 + lVar16;
              plStack_98 = plVar5;
              plStack_90 = plVar9;
              plStack_88 = plVar10;
              uVar11 = uStack_a8;
            }
          }
          (**(code **)(*plVar1 + 0x128))(plVar1,uVar11,0);
          uVar11 = uVar11 + 1;
          uStack_a8 = uVar11;
          uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
          plVar8 = plVar9;
          plVar15 = plVar5;
        } while (uVar11 < uVar3);
      }
      plStack_a0 = plStack_a0 + 1;
      plVar8 = plVar9;
      plVar15 = plVar5;
      param_1 = uStack_68;
    } while (plStack_a0 != plStack_78);
  }
  uVar12 = 0;
  uVar13 = (ulonglong)((longlong)plVar9 + (7 - (longlong)plVar5)) >> 3;
  if (plVar9 < plVar5) {
    uVar13 = uVar12;
  }
  plVar10 = plVar5;
  if (uVar13 != 0) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x128))
                (*(longlong **)(param_1 + 0xe8),*plVar10);
      uVar12 = uVar12 + 1;
      plVar10 = plVar10 + 1;
    } while (uVar12 != uVar13);
  }
  lVar4 = param_1 + 0x1b0;
  puVar14 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar14 != (undefined8 *)0x0) {
    FUN_18004b790(lVar4,*puVar14);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar14);
  }
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x1b8) = lVar4;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  plVar10 = *(longlong **)(param_1 + 200);
  plVar9 = *(longlong **)(param_1 + 0xc0);
  do {
    if (plVar9 == plVar10) {
      if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar5);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_c8);
    }
    lVar4 = *plVar9;
    iVar2 = *(int *)(_DAT_180c86920 + 0x380);
    if (iVar2 == 3) {
      iVar7 = 0x138;
    }
    else if (iVar2 == 2) {
      iVar7 = 0x9c;
    }
    else {
      iVar7 = 0x4e;
      if ((iVar2 != 1) && (iVar7 = 0x4e, iVar2 == 0)) {
        iVar7 = 0x4e;
      }
    }
    iVar2 = *(int *)(_DAT_180c86920 + 0x3f0);
    if (iVar2 == 2) {
      uVar17 = 0;
LAB_180176cb5:
      (**(code **)(**(longlong **)(lVar4 + 0x148) + 0xd0))(*(longlong **)(lVar4 + 0x148),uVar17);
    }
    else {
      if (iVar2 == 1) {
        uVar17 = 0x3f800000;
        goto LAB_180176cb5;
      }
      if (iVar2 == 0) {
        uVar17 = 0x40000000;
        goto LAB_180176cb5;
      }
    }
    plVar5 = *(longlong **)(lVar4 + 0x148);
    fVar18 = (float)(iVar7 << 0x14);
    uStack_68 = CONCAT44((int)(fVar18 * *(float *)(lVar4 + 0x1b4)),
                         (int)(fVar18 * *(float *)(lVar4 + 0x1b0)));
    iStack_60 = (int)(fVar18 * *(float *)(lVar4 + 0x1b8));
    iStack_5c = (int)(fVar18 * *(float *)(lVar4 + 0x1bc));
    uVar11 = (**(code **)(*plVar5 + 0x20))(plVar5);
    uVar3 = 0;
    if (uVar11 != 0) {
      puVar14 = &uStack_68;
      do {
        uVar6 = FUN_1801760d0(param_1,plVar5,uVar3,*(undefined4 *)puVar14);
        iVar2 = (**(code **)(*plVar5 + 0x128))(plVar5,uVar3,uVar6);
        if (iVar2 != 0) {
          FUN_180626ee0(&UNK_180a09248);
        }
        uVar3 = uVar3 + 1;
        puVar14 = (undefined8 *)((longlong)puVar14 + 4);
      } while (uVar3 < uVar11);
    }
    plVar9 = plVar9 + 1;
    plVar5 = plStack_98;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00018017747d)
// WARNING: Removing unreachable block (ram,0x000180177a18)
// WARNING: Removing unreachable block (ram,0x000180177a22)
// WARNING: Removing unreachable block (ram,0x000180177a2e)
// WARNING: Removing unreachable block (ram,0x000180177a35)
// WARNING: Removing unreachable block (ram,0x000180177581)
// WARNING: Removing unreachable block (ram,0x000180177590)
// WARNING: Removing unreachable block (ram,0x00018017759c)
// WARNING: Removing unreachable block (ram,0x0001801775a3)
// WARNING: Removing unreachable block (ram,0x0001801775b3)
// WARNING: Removing unreachable block (ram,0x0001801775c0)
// WARNING: Removing unreachable block (ram,0x0001801775cc)
// WARNING: Removing unreachable block (ram,0x0001801775d3)
// WARNING: Removing unreachable block (ram,0x000180177263)
// WARNING: Removing unreachable block (ram,0x000180177296)
// WARNING: Removing unreachable block (ram,0x00018017726a)
// WARNING: Removing unreachable block (ram,0x000180177274)
// WARNING: Removing unreachable block (ram,0x000180177280)
// WARNING: Removing unreachable block (ram,0x000180177287)
// WARNING: Removing unreachable block (ram,0x000180177290)
// WARNING: Removing unreachable block (ram,0x000180177298)
// WARNING: Removing unreachable block (ram,0x00018017753a)
// WARNING: Removing unreachable block (ram,0x000180177540)
// WARNING: Removing unreachable block (ram,0x000180177550)
// WARNING: Removing unreachable block (ram,0x00018017755c)
// WARNING: Removing unreachable block (ram,0x000180177563)
// WARNING: Removing unreachable block (ram,0x0001801772c2)
// WARNING: Removing unreachable block (ram,0x0001801772d0)
// WARNING: Removing unreachable block (ram,0x0001801772dc)
// WARNING: Removing unreachable block (ram,0x0001801772e3)
// WARNING: Removing unreachable block (ram,0x00018017764c)
// WARNING: Removing unreachable block (ram,0x00018017749a)
// WARNING: Removing unreachable block (ram,0x0001801774a8)
// WARNING: Removing unreachable block (ram,0x0001801774aa)
// WARNING: Removing unreachable block (ram,0x000180176fc3)
// WARNING: Removing unreachable block (ram,0x000180177722)
// WARNING: Removing unreachable block (ram,0x00018017729d)
// WARNING: Removing unreachable block (ram,0x00018017766b)
// WARNING: Removing unreachable block (ram,0x000180177677)
// WARNING: Removing unreachable block (ram,0x000180177679)
// WARNING: Removing unreachable block (ram,0x00018017739f)
// WARNING: Removing unreachable block (ram,0x0001801773a6)
// WARNING: Removing unreachable block (ram,0x0001801773b0)
// WARNING: Removing unreachable block (ram,0x0001801773bc)
// WARNING: Removing unreachable block (ram,0x0001801773c3)
// WARNING: Removing unreachable block (ram,0x00018017731b)
// WARNING: Removing unreachable block (ram,0x000180177321)
// WARNING: Removing unreachable block (ram,0x000180177330)
// WARNING: Removing unreachable block (ram,0x00018017733c)
// WARNING: Removing unreachable block (ram,0x000180177343)
// WARNING: Removing unreachable block (ram,0x00018017734b)
// WARNING: Removing unreachable block (ram,0x000180177356)
// WARNING: Removing unreachable block (ram,0x000180177360)
// WARNING: Removing unreachable block (ram,0x00018017736c)
// WARNING: Removing unreachable block (ram,0x000180177373)
// WARNING: Removing unreachable block (ram,0x00018017737b)
// WARNING: Removing unreachable block (ram,0x000180177385)
// WARNING: Removing unreachable block (ram,0x0001801773cb)
// WARNING: Removing unreachable block (ram,0x000180177381)
// WARNING: Removing unreachable block (ram,0x0001801773cd)
// WARNING: Removing unreachable block (ram,0x0001801773d6)
// WARNING: Removing unreachable block (ram,0x0001801773da)
// WARNING: Removing unreachable block (ram,0x0001801773e4)
// WARNING: Removing unreachable block (ram,0x0001801773eb)
// WARNING: Removing unreachable block (ram,0x000180177400)
// WARNING: Removing unreachable block (ram,0x00018017740c)
// WARNING: Removing unreachable block (ram,0x000180177413)
// WARNING: Removing unreachable block (ram,0x00018017741e)
// WARNING: Removing unreachable block (ram,0x000180177417)
// WARNING: Removing unreachable block (ram,0x000180177420)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



