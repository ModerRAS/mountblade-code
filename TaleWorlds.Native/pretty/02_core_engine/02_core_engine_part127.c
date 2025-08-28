#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part127.c - 15 个函数

// 函数: void Engine_SetStateFlags(uint32_t state_flags)
void Engine_SetStateFlags(uint32_t state_flags)

{
  longlong context_ptr;
  char flag_result;
  undefined1 state_enable;
  longlong engine_base;
  longlong state_struct;
  
  // 设置状态标志到引擎上下文
  *(uint32_t *)(context_ptr + 0xd8) = state_flags;
  
  // 检查条件状态
  if ((*(int *)(state_struct + 0xd8) < 1) && (*(int *)(state_struct + 0xdc) < 1)) {
    flag_result = 0;
  }
  else {
    flag_result = 1;
  }
  *(char *)(state_struct + 0xb6) = flag_result;
  
  // 复杂条件检查以确定是否启用状态
  if ((((*(char *)(state_struct + 0xb2) == 0) &&
       (*(char *)(state_struct + 0xaf) != 0)) && (flag_result == 0)) ||
     (((0 < *(int *)(state_struct + 0xc4) || (0 < *(int *)(state_struct + 200))) ||
      (0 < *(int *)(state_struct + 0xdc))))) {
    state_enable = 0;
  }
  else {
    state_enable = 1;
  }
  *(uint8_t *)(state_struct + 0xb4) = state_enable;
  
  // 调用引擎内部处理函数（不返回）
  Engine_Internal_ProcessState(*(ulonglong *)(engine_base + 0x90) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_CleanupResources(void)
void Engine_CleanupResources(void)

{
  char *log_buffer;
  int *resource_count;
  float transform_y;
  longlong context_obj;
  longlong engine_instance;
  uint object_flags;
  longlong file_handle;
  longlong temp_ptr;
  longlong result_ptr;
  longlong transform_obj;
  float scale_factor;
  
  engine_instance = g_EngineInstance;
  if ((1 < *(int *)(g_EngineInstance + 0x1ad0)) || (*(char *)(g_EngineInstance + 2) == 0)) {
    context_obj = *(longlong *)(g_EngineInstance + 0x1af8);
    if (*(longlong *)(context_obj + 0x210) != 0) {
      Engine_ReleaseTextureData();
    }
    object_flags = *(uint *)(context_obj + 0xc);
    if ((object_flags >> 0x1d & 1) == 0) {
      Engine_InitializeObjectState();
      object_flags = *(uint *)(context_obj + 0xc);
    }
    temp_ptr = g_EngineInstance;
    result_ptr = 0;
    if (((object_flags >> 0x18 & 1) == 0) && (log_buffer = (char *)(g_EngineInstance + 0x2e38), *log_buffer != 0))
    {
      Engine_ProcessLogBuffer(&g_LogBufferPtr);
      if (*(longlong *)(temp_ptr + 0x2e40) != 0) {
        file_handle = __acrt_iob_func(1);
        if (*(longlong *)(temp_ptr + 0x2e40) == file_handle) {
          fflush();
        }
        else {
          fclose();
        }
        *(uint64_t *)(temp_ptr + 0x2e40) = 0;
      }
      resource_count = (int *)(temp_ptr + 0x2e48);
      file_handle = *(longlong *)(temp_ptr + 0x2e50);
      if ((file_handle != 0) && (1 < *resource_count + -1)) {
        if (*(code **)(g_EngineInstance + 0x100) != (code *)0x0) {
          (**(code **)(g_EngineInstance + 0x100))(*(undefined8 *)(g_EngineInstance + 0x108),file_handle);
          file_handle = *(longlong *)(temp_ptr + 0x2e50);
        }
        temp_ptr = g_EngineInstance;
        if (file_handle != 0) {
          resource_count[0] = 0;
          resource_count[1] = 0;
          if (temp_ptr != 0) {
            resource_count = (int *)(temp_ptr + 0x3a8);
            *resource_count = *resource_count + -1;
          }
          // 释放资源（不返回）
          Engine_FreeResource(file_handle,g_MemoryAllocator);
        }
      }
      temp_ptr = g_EngineInstance;
      *log_buffer = 0;
    }
    // 更新变换数据
    if (((*(longlong *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
       (file_handle = *(longlong *)(*(longlong *)(context_obj + 0x408) + 0x68), file_handle != 0)) {
      transform_y = *(float *)(context_obj + 0x11c);
      scale_factor = *(float *)(context_obj + 0x74);
      *(float *)(file_handle + 0x118) =
           (*(float *)(context_obj + 0x118) + *(float *)(context_obj + 0x70)) - *(float *)(file_handle + 0x70);
      *(float *)(file_handle + 0x11c) = (transform_y + scale_factor) - *(float *)(file_handle + 0x74);
    }
    // 减少引用计数
    *(int *)(engine_instance + 0x1ad0) = *(int *)(engine_instance + 0x1ad0) + -1;
    if ((*(uint *)(context_obj + 0xc) & 0x4000000) != 0) {
      *(int *)(engine_instance + 0x1bc0) = *(int *)(engine_instance + 0x1bc0) + -1;
    }
    if (*(int *)(engine_instance + 0x1ad0) != 0) {
      result_ptr = *(longlong *)
               (*(longlong *)(engine_instance + 0x1ad8) + -8 + (longlong)*(int *)(engine_instance + 0x1ad0) * 8);
    }
    *(longlong *)(temp_ptr + 0x1af8) = result_ptr;
    if (result_ptr != 0) {
      scale_factor = *(float *)(temp_ptr + 0x19fc) * *(float *)(result_ptr + 0x2d8) * *(float *)(result_ptr + 0x2dc);
      *(float *)(temp_ptr + 0x1a10) = scale_factor;
      *(float *)(temp_ptr + 0x19f8) = scale_factor;
    }
    // 更新当前对象
    if (*(longlong *)(engine_instance + 0x1af8) != 0) {
      engine_instance = *(longlong *)(*(longlong *)(engine_instance + 0x1af8) + 0x28);
      if (engine_instance != 0) {
        *(uint32_t *)(engine_instance + 0x54) = *(uint32_t *)(temp_ptr + 0x1a90);
      }
      if (((*(longlong *)(temp_ptr + 0x1c78) != engine_instance) &&
          (*(longlong *)(temp_ptr + 0x1c78) = engine_instance, engine_instance != 0)) &&
         (*(code **)(temp_ptr + 0x15c0) != (code *)0x0)) {
        // 调用对象更新回调函数
        (**(code **)(temp_ptr + 0x15c0))();
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_CleanupResourcesWithParams(void)
void Engine_CleanupResourcesWithParams(void)

{
  char *log_buffer;
  int *resource_count;
  float transform_y;
  longlong context_obj;
  longlong temp_ptr;
  uint object_flags;
  longlong file_handle;
  longlong engine_instance;
  longlong result_ptr;
  longlong engine_params;
  longlong target_instance;
  float scale_factor;
  
  context_obj = *(longlong *)(engine_params + 0x1af8);
  if (*(longlong *)(context_obj + 0x210) != 0) {
    Engine_ReleaseTextureData();
    engine_params = g_EngineInstance;
  }
  object_flags = *(uint *)(context_obj + 0xc);
  if ((object_flags >> 0x1d & 1) == 0) {
    Engine_InitializeObjectState();
    object_flags = *(uint *)(context_obj + 0xc);
    engine_params = g_EngineInstance;
  }
  result_ptr = 0;
  if (((object_flags >> 0x18 & 1) == 0) && (log_buffer = (char *)(engine_params + 0x2e38), *log_buffer != 0)) {
    Engine_ProcessLogBuffer(&g_LogBufferPtr);
    if (*(longlong *)(engine_params + 0x2e40) != 0) {
      file_handle = __acrt_iob_func(1);
      if (*(longlong *)(engine_params + 0x2e40) == file_handle) {
        fflush();
      }
      else {
        fclose();
      }
      *(uint64_t *)(engine_params + 0x2e40) = 0;
    }
    resource_count = (int *)(engine_params + 0x2e48);
    file_handle = *(longlong *)(engine_params + 0x2e50);
    if ((file_handle != 0) && (1 < *resource_count + -1)) {
      if (*(code **)(g_EngineInstance + 0x100) != (code *)0x0) {
        (**(code **)(g_EngineInstance + 0x100))(*(undefined8 *)(g_EngineInstance + 0x108),file_handle);
        file_handle = *(longlong *)(engine_params + 0x2e50);
      }
      temp_ptr = g_EngineInstance;
      if (file_handle != 0) {
        resource_count[0] = 0;
        resource_count[1] = 0;
        if (temp_ptr != 0) {
          resource_count = (int *)(temp_ptr + 0x3a8);
          *resource_count = *resource_count + -1;
        }
        // 释放资源（不返回）
        Engine_FreeResource(file_handle,g_MemoryAllocator);
      }
    }
    engine_params = g_EngineInstance;
    *log_buffer = 0;
  }
  // 更新变换数据
  if (((*(longlong *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (file_handle = *(longlong *)(*(longlong *)(context_obj + 0x408) + 0x68), file_handle != 0)) {
    transform_y = *(float *)(context_obj + 0x11c);
    scale_factor = *(float *)(context_obj + 0x74);
    *(float *)(file_handle + 0x118) =
         (*(float *)(context_obj + 0x118) + *(float *)(context_obj + 0x70)) - *(float *)(file_handle + 0x70);
    *(float *)(file_handle + 0x11c) = (transform_y + scale_factor) - *(float *)(file_handle + 0x74);
  }
  // 减少引用计数
  *(int *)(target_instance + 0x1ad0) = *(int *)(target_instance + 0x1ad0) + -1;
  if ((*(uint *)(context_obj + 0xc) & 0x4000000) != 0) {
    *(int *)(target_instance + 0x1bc0) = *(int *)(target_instance + 0x1bc0) + -1;
  }
  if (*(int *)(target_instance + 0x1ad0) != 0) {
    result_ptr = *(longlong *)
             (*(longlong *)(target_instance + 0x1ad8) + -8 + (longlong)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(longlong *)(engine_params + 0x1af8) = result_ptr;
  if (result_ptr != 0) {
    scale_factor = *(float *)(engine_params + 0x19fc) * *(float *)(result_ptr + 0x2d8) * *(float *)(result_ptr + 0x2dc);
    *(float *)(engine_params + 0x1a10) = scale_factor;
    *(float *)(engine_params + 0x19f8) = scale_factor;
  }
  // 更新当前对象
  if (*(longlong *)(target_instance + 0x1af8) != 0) {
    context_obj = *(longlong *)(*(longlong *)(target_instance + 0x1af8) + 0x28);
    if (context_obj != 0) {
      *(uint32_t *)(context_obj + 0x54) = *(uint32_t *)(engine_params + 0x1a90);
    }
    if (((*(longlong *)(engine_params + 0x1c78) != context_obj) &&
        (*(longlong *)(engine_params + 0x1c78) = context_obj, context_obj != 0)) &&
       (*(code **)(engine_params + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_params + 0x15c0))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_ProcessLogBufferAndCleanupResources(longlong engine_instance, longlong context_obj, longlong target_instance, longlong log_buffer_state, longlong resource_handle)
void Engine_ProcessLogBufferAndCleanupResources(longlong engine_instance, longlong context_obj, longlong target_instance, longlong log_buffer_state, longlong resource_handle)

{
  char *log_buffer_ptr;
  int *resource_counter;
  float transform_offset_y;
  float scale_factor;
  longlong file_handle;
  longlong log_file_handle;
  longlong current_context;
  longlong result_ptr;
  float computed_scale;
  
  // 获取日志缓冲区指针
  log_buffer_ptr = (char *)(engine_instance + 0x2e38);
  if (*log_buffer_ptr != (char)log_buffer_state) {
    // 处理日志缓冲区
    Engine_ProcessLogBuffer(&g_LogBufferPtr);
    
    // 检查并关闭日志文件
    if (*(longlong *)(engine_instance + 0x2e40) != log_buffer_state) {
      log_file_handle = __acrt_iob_func((int)log_buffer_state + 1);
      if (*(longlong *)(engine_instance + 0x2e40) == log_file_handle) {
        fflush();
      }
      else {
        fclose();
      }
      *(longlong *)(engine_instance + 0x2e40) = log_buffer_state;
    }
    
    // 释放资源句柄
    file_handle = *(longlong *)(engine_instance + 0x2e50);
    if ((file_handle != 0) && (1 < *(int *)(engine_instance + 0x2e48) + -1)) {
      if (*(code **)(g_EngineInstance + 0x100) != (code *)0x0) {
        // 调用资源处理回调函数
        (**(code **)(g_EngineInstance + 0x100))(*(undefined8 *)(g_EngineInstance + 0x108), file_handle);
        file_handle = *(longlong *)(engine_instance + 0x2e50);
      }
      current_context = g_EngineInstance;
      if (file_handle != 0) {
        // 重置资源计数器
        *(longlong *)(engine_instance + 0x2e48) = log_buffer_state;
        if (current_context != 0) {
          resource_counter = (int *)(current_context + 0x3a8);
          *resource_counter = *resource_counter + -1;
        }
        // 释放资源（不返回）
        Engine_FreeResource(file_handle, g_MemoryAllocator);
      }
    }
    engine_instance = g_EngineInstance;
    *log_buffer_ptr = (char)log_buffer_state;
  }
  
  // 更新变换数据
  if (((*(longlong *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (file_handle = *(longlong *)(*(longlong *)(context_obj + 0x408) + 0x68), file_handle != 0)) {
    transform_offset_y = *(float *)(context_obj + 0x11c);
    scale_factor = *(float *)(context_obj + 0x74);
    // 计算并设置新的变换位置
    *(float *)(file_handle + 0x118) =
         (*(float *)(context_obj + 0x118) + *(float *)(context_obj + 0x70)) - *(float *)(file_handle + 0x70);
    *(float *)(file_handle + 0x11c) = (transform_offset_y + scale_factor) - *(float *)(file_handle + 0x74);
  }
  
  // 减少引用计数
  *(int *)(target_instance + 0x1ad0) = *(int *)(target_instance + 0x1ad0) + -1;
  if ((*(uint *)(context_obj + 0xc) & 0x4000000) != 0) {
    *(int *)(target_instance + 0x1bc0) = *(int *)(target_instance + 0x1bc0) + -1;
  }
  
  // 获取当前上下文对象
  if (*(int *)(target_instance + 0x1ad0) != 0) {
    resource_handle = *(longlong *)
                 (*(longlong *)(target_instance + 0x1ad8) + -8 +
                 (longlong)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(longlong *)(engine_instance + 0x1af8) = resource_handle;
  
  // 计算缩放因子
  if (resource_handle != 0) {
    computed_scale = *(float *)(engine_instance + 0x19fc) * *(float *)(resource_handle + 0x2d8) *
                   *(float *)(resource_handle + 0x2dc);
    *(float *)(engine_instance + 0x1a10) = computed_scale;
    *(float *)(engine_instance + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(longlong *)(target_instance + 0x1af8) != 0) {
    current_context = *(longlong *)(*(longlong *)(target_instance + 0x1af8) + 0x28);
    if (current_context != 0) {
      *(uint32_t *)(current_context + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
    }
    if (((*(longlong *)(engine_instance + 0x1c78) != current_context) &&
        (*(longlong *)(engine_instance + 0x1c78) = current_context, current_context != 0)) &&
       (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_instance + 0x15c0))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_UpdateStateAndManageResources(longlong engine_instance, longlong context_obj, longlong target_instance, longlong log_buffer_state, char *log_buffer_flag)
void Engine_UpdateStateAndManageResources(longlong engine_instance, longlong context_obj, longlong target_instance, longlong log_buffer_state, char *log_buffer_flag)

{
  int *resource_counter;
  float transform_offset_y;
  float scale_factor;
  longlong file_handle;
  longlong log_file_handle;
  longlong current_context;
  longlong result_context;
  float computed_scale;
  
  // 处理日志缓冲区
  Engine_ProcessLogBuffer(&g_LogBufferPtr);
  
  // 检查并关闭日志文件
  if (*(longlong *)(engine_instance + 0x2e40) != log_buffer_state) {
    log_file_handle = __acrt_iob_func((int)log_buffer_state + 1);
    if (*(longlong *)(engine_instance + 0x2e40) == log_file_handle) {
      fflush();
    }
    else {
      fclose();
    }
    *(longlong *)(engine_instance + 0x2e40) = log_buffer_state;
  }
  
  // 释放资源句柄
  file_handle = *(longlong *)(engine_instance + 0x2e50);
  if ((file_handle != 0) && (1 < *(int *)(engine_instance + 0x2e48) + -1)) {
    if (*(code **)(g_EngineInstance + 0x100) != (code *)0x0) {
      // 调用资源处理回调函数
      (**(code **)(g_EngineInstance + 0x100))(*(undefined8 *)(g_EngineInstance + 0x108), file_handle);
      file_handle = *(longlong *)(engine_instance + 0x2e50);
    }
    current_context = g_EngineInstance;
    if (file_handle != 0) {
      // 重置资源计数器
      *(longlong *)(engine_instance + 0x2e48) = log_buffer_state;
      if (current_context != 0) {
        resource_counter = (int *)(current_context + 0x3a8);
        *resource_counter = *resource_counter + -1;
      }
      // 释放资源（不返回）
      Engine_FreeResource(file_handle, g_MemoryAllocator);
    }
  }
  
  current_context = g_EngineInstance;
  *log_buffer_flag = (char)log_buffer_state;
  
  // 更新变换数据
  if (((*(longlong *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (result_context = *(longlong *)(*(longlong *)(context_obj + 0x408) + 0x68), result_context != 0)) {
    transform_offset_y = *(float *)(context_obj + 0x11c);
    scale_factor = *(float *)(context_obj + 0x74);
    // 计算并设置新的变换位置
    *(float *)(result_context + 0x118) =
         (*(float *)(context_obj + 0x118) + *(float *)(context_obj + 0x70)) - *(float *)(result_context + 0x70);
    *(float *)(result_context + 0x11c) = (transform_offset_y + scale_factor) - *(float *)(result_context + 0x74);
  }
  
  // 减少引用计数
  *(int *)(target_instance + 0x1ad0) = *(int *)(target_instance + 0x1ad0) + -1;
  if ((*(uint *)(context_obj + 0xc) & 0x4000000) != 0) {
    *(int *)(target_instance + 0x1bc0) = *(int *)(target_instance + 0x1bc0) + -1;
  }
  
  // 获取当前上下文对象
  if (*(int *)(target_instance + 0x1ad0) != 0) {
    log_buffer_state = *(longlong *)
                 (*(longlong *)(target_instance + 0x1ad8) + -8 +
                 (longlong)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(longlong *)(current_context + 0x1af8) = log_buffer_state;
  
  // 计算缩放因子
  if (log_buffer_state != 0) {
    computed_scale = *(float *)(current_context + 0x19fc) * *(float *)(log_buffer_state + 0x2d8) *
                   *(float *)(log_buffer_state + 0x2dc);
    *(float *)(current_context + 0x1a10) = computed_scale;
    *(float *)(current_context + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(longlong *)(target_instance + 0x1af8) != 0) {
    result_context = *(longlong *)(*(longlong *)(target_instance + 0x1af8) + 0x28);
    if (result_context != 0) {
      *(uint32_t *)(result_context + 0x54) = *(uint32_t *)(current_context + 0x1a90);
    }
    if (((*(longlong *)(current_context + 0x1c78) != result_context) &&
        (*(longlong *)(current_context + 0x1c78) = result_context, result_context != 0)) &&
       (*(code **)(current_context + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(current_context + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void Engine_UpdateTransformDataAndRefCount(longlong engine_instance, longlong context_obj, longlong target_instance)
void Engine_UpdateTransformDataAndRefCount(longlong engine_instance, longlong context_obj, longlong target_instance)

{
  float transform_offset_y;
  float scale_factor;
  longlong transform_handle;
  longlong current_context;
  longlong result_context;
  float computed_scale;
  
  // 更新变换数据
  if (((*(longlong *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (transform_handle = *(longlong *)(*(longlong *)(context_obj + 0x408) + 0x68), transform_handle != 0)) {
    transform_offset_y = *(float *)(context_obj + 0x11c);
    scale_factor = *(float *)(context_obj + 0x74);
    // 计算并设置新的变换位置
    *(float *)(transform_handle + 0x118) =
         (*(float *)(context_obj + 0x118) + *(float *)(context_obj + 0x70)) - *(float *)(transform_handle + 0x70);
    *(float *)(transform_handle + 0x11c) = (transform_offset_y + scale_factor) - *(float *)(transform_handle + 0x74);
  }
  
  // 减少引用计数
  *(int *)(target_instance + 0x1ad0) = *(int *)(target_instance + 0x1ad0) + -1;
  if ((*(uint *)(context_obj + 0xc) & 0x4000000) != 0) {
    *(int *)(target_instance + 0x1bc0) = *(int *)(target_instance + 0x1bc0) + -1;
  }
  
  // 获取当前上下文对象
  if (*(int *)(target_instance + 0x1ad0) != 0) {
    current_context = *(longlong *)
                 (*(longlong *)(target_instance + 0x1ad8) + -8 +
                 (longlong)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(longlong *)(engine_instance + 0x1af8) = current_context;
  
  // 计算缩放因子
  if (current_context != 0) {
    computed_scale = *(float *)(engine_instance + 0x19fc) * *(float *)(current_context + 0x2d8) *
                   *(float *)(current_context + 0x2dc);
    *(float *)(engine_instance + 0x1a10) = computed_scale;
    *(float *)(engine_instance + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(longlong *)(target_instance + 0x1af8) != 0) {
    result_context = *(longlong *)(*(longlong *)(target_instance + 0x1af8) + 0x28);
    if (result_context != 0) {
      *(uint32_t *)(result_context + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
    }
    if (((*(longlong *)(engine_instance + 0x1c78) != result_context) &&
        (*(longlong *)(engine_instance + 0x1c78) = result_context, result_context != 0)) &&
       (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_instance + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void Engine_ApplyTransformAndDecrementRefCount(longlong engine_instance, longlong context_obj, longlong target_instance)
void Engine_ApplyTransformAndDecrementRefCount(longlong engine_instance, longlong context_obj, longlong target_instance)

{
  float transform_offset_y;
  float scale_factor;
  longlong transform_handle;
  longlong current_context;
  longlong result_context;
  float computed_scale;
  
  // 应用变换数据
  if (((*(longlong *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (transform_handle = *(longlong *)(*(longlong *)(context_obj + 0x408) + 0x68), transform_handle != 0)) {
    transform_offset_y = *(float *)(context_obj + 0x11c);
    scale_factor = *(float *)(context_obj + 0x74);
    // 计算并设置新的变换位置
    *(float *)(transform_handle + 0x118) =
         (*(float *)(context_obj + 0x118) + *(float *)(context_obj + 0x70)) - *(float *)(transform_handle + 0x70);
    *(float *)(transform_handle + 0x11c) = (transform_offset_y + scale_factor) - *(float *)(transform_handle + 0x74);
  }
  
  // 减少引用计数
  *(int *)(target_instance + 0x1ad0) = *(int *)(target_instance + 0x1ad0) + -1;
  if ((*(uint *)(context_obj + 0xc) & 0x4000000) != 0) {
    *(int *)(target_instance + 0x1bc0) = *(int *)(target_instance + 0x1bc0) + -1;
  }
  
  // 获取当前上下文对象
  if (*(int *)(target_instance + 0x1ad0) != 0) {
    current_context = *(longlong *)
                 (*(longlong *)(target_instance + 0x1ad8) + -8 +
                 (longlong)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(longlong *)(engine_instance + 0x1af8) = current_context;
  
  // 计算缩放因子
  if (current_context != 0) {
    computed_scale = *(float *)(engine_instance + 0x19fc) * *(float *)(current_context + 0x2d8) *
                   *(float *)(current_context + 0x2dc);
    *(float *)(engine_instance + 0x1a10) = computed_scale;
    *(float *)(engine_instance + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(longlong *)(target_instance + 0x1af8) != 0) {
    result_context = *(longlong *)(*(longlong *)(target_instance + 0x1af8) + 0x28);
    if (result_context != 0) {
      *(uint32_t *)(result_context + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
    }
    if (((*(longlong *)(engine_instance + 0x1c78) != result_context) &&
        (*(longlong *)(engine_instance + 0x1c78) = result_context, result_context != 0)) &&
       (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_instance + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void Engine_DecrementBatchCountAndProcessContext(int batch_index, longlong engine_instance, longlong target_instance)
void Engine_DecrementBatchCountAndProcessContext(int batch_index, longlong engine_instance, longlong target_instance)

{
  longlong context_handle;
  longlong current_context;
  longlong result_context;
  float computed_scale;
  
  // 减少批次计数
  *(int *)(target_instance + 0x1bc0) = *(int *)(target_instance + 0x1bc0) + -1;
  
  // 获取上下文句柄
  if (batch_index != 0) {
    current_context = *(longlong *)(*(longlong *)(target_instance + 0x1ad8) + -8 + (longlong)batch_index * 8);
  }
  *(longlong *)(engine_instance + 0x1af8) = current_context;
  
  // 计算缩放因子
  if (current_context != 0) {
    computed_scale = *(float *)(engine_instance + 0x19fc) * *(float *)(current_context + 0x2d8) *
                   *(float *)(current_context + 0x2dc);
    *(float *)(engine_instance + 0x1a10) = computed_scale;
    *(float *)(engine_instance + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(longlong *)(target_instance + 0x1af8) != 0) {
    context_handle = *(longlong *)(*(longlong *)(target_instance + 0x1af8) + 0x28);
    if (context_handle != 0) {
      *(uint32_t *)(context_handle + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
    }
    if (((*(longlong *)(engine_instance + 0x1c78) != context_handle) &&
        (*(longlong *)(engine_instance + 0x1c78) = context_handle, context_handle != 0)) &&
       (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_instance + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void Engine_SetObjectPropertiesAndTriggerCallback(longlong render_obj, longlong engine_instance)
void Engine_SetObjectPropertiesAndTriggerCallback(longlong render_obj, longlong engine_instance)

{
  longlong object_data;
  
  // 设置对象属性
  object_data = *(longlong *)(render_obj + 0x28);
  if (object_data != 0) {
    *(uint32_t *)(object_data + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
  }
  
  // 触发回调函数
  if (((*(longlong *)(engine_instance + 0x1c78) != object_data) &&
      (*(longlong *)(engine_instance + 0x1c78) = object_data, object_data != 0)) &&
     (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
    // 调用对象更新回调函数
    (**(code **)(engine_instance + 0x15c0))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d230(longlong param_1)
void FUN_18012d230(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1aa8);
  lVar2 = *(longlong *)(lVar1 + -8 + (longlong)*(int *)(_DAT_180c8a9b0 + 0x1aa0) * 8);
  if (((lVar2 != param_1) && (*(longlong *)(lVar2 + 0x3a0) != param_1)) &&
     (iVar4 = *(int *)(_DAT_180c8a9b0 + 0x1aa0) + -2, -1 < iVar4)) {
    lVar2 = (longlong)iVar4;
    plVar3 = (longlong *)(lVar1 + lVar2 * 8);
    do {
      if (*plVar3 == param_1) {
                    // WARNING: Subroutine does not return
        memmove(lVar1 + (longlong)iVar4 * 8,lVar1 + (longlong)(iVar4 + 1) * 8,
                (longlong)((*(int *)(_DAT_180c8a9b0 + 0x1aa0) - iVar4) + -1) << 3);
      }
      iVar4 = iVar4 + -1;
      plVar3 = plVar3 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d2e0(longlong param_1)
void FUN_18012d2e0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = _DAT_180c8a9b0;
  uVar2 = 0;
  if (*(longlong *)(_DAT_180c8a9b0 + 0x1c98) != param_1) {
    *(longlong *)(_DAT_180c8a9b0 + 0x1c98) = param_1;
    if ((param_1 != 0) && (*(char *)(lVar1 + 0x1d07) != '\0')) {
      *(undefined1 *)(lVar1 + 0x1d05) = 1;
    }
    *(undefined1 *)(lVar1 + 0x1d09) = 0;
    if (param_1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x3c8);
    }
    *(undefined4 *)(lVar1 + 0x1ca0) = uVar2;
    *(undefined1 *)(lVar1 + 0x1d04) = 0;
    *(undefined4 *)(lVar1 + 0x1cfc) = 0;
  }
  if (param_1 != 0) {
    if ((*(longlong *)(param_1 + 0x408) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x30), lVar3 != 0)) {
      *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 8);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x30);
      *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(lVar3 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x3a0) != 0) {
      param_1 = *(longlong *)(param_1 + 0x3a0);
    }
    if (((((*(uint *)(param_1 + 0xc) & 0x4000000) != 0) && (*(int *)(lVar1 + 0x1b2c) != 0)) &&
        (*(longlong *)(lVar1 + 0x1b50) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x1b50) + 0x3a0) != param_1)) {
      *(undefined2 *)(lVar1 + 0x1b3c) = 1;
      *(undefined4 *)(lVar1 + 0x1b38) = 0;
      *(undefined1 *)(lVar1 + 0x1b3e) = 0;
      *(undefined4 *)(lVar1 + 0x1b2c) = 0;
      *(undefined4 *)(lVar1 + 0x1b44) = 0;
      *(undefined8 *)(lVar1 + 0x1b50) = 0;
    }
    if ((*(longlong *)(*(longlong *)(lVar1 + 0x1ab8) + -8 + (longlong)*(int *)(lVar1 + 0x1ab0) * 8)
         != param_1) && (iVar5 = *(int *)(lVar1 + 0x1ab0) + -2, -1 < iVar5)) {
      lVar3 = (longlong)iVar5;
      plVar4 = (longlong *)(*(longlong *)(lVar1 + 0x1ab8) + lVar3 * 8);
      do {
        if (*plVar4 == param_1) {
                    // WARNING: Subroutine does not return
          memmove(*(longlong *)(lVar1 + 0x1ab8) + (longlong)iVar5 * 8,
                  *(longlong *)(lVar1 + 0x1ab8) + (longlong)(iVar5 + 1) * 8,
                  (longlong)((*(int *)(lVar1 + 0x1ab0) - iVar5) + -1) << 3);
        }
        iVar5 = iVar5 + -1;
        plVar4 = plVar4 + -1;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    if ((*(uint *)(param_1 + 0xc) & 0x2000) == 0) {
      FUN_18012d230(param_1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d4c0(int param_1)
void FUN_18012d4c0(int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fStackX_10;
  
  lVar8 = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar2 = *(longlong *)(lVar8 + 0x1af8);
  fVar9 = (float)func_0x00018012d6a0();
  uVar6 = param_1 - 1;
  fVar10 = (float)(int)((fVar9 - (float)(int)uVar6 * *(float *)(lVar8 + 0x1674)) / (float)param_1);
  if (fVar10 <= 1.0) {
    fVar10 = 1.0;
  }
  fStackX_10 = (float)(int)(fVar9 - (fVar10 + *(float *)(lVar8 + 0x1674)) * (float)(int)uVar6);
  if (fStackX_10 <= 1.0) {
    fStackX_10 = 1.0;
  }
  piVar1 = (int *)(lVar2 + 0x1c8);
  iVar5 = *piVar1;
  iVar4 = *(int *)(lVar2 + 0x1cc);
  if (iVar5 == iVar4) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar3 = iVar5 + 1;
    if (iVar5 + 1 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_18011dbd0(piVar1,iVar3);
    iVar5 = *piVar1;
  }
  *(float *)(*(longlong *)(lVar2 + 0x1d0) + (longlong)iVar5 * 4) = fStackX_10;
  iVar5 = *piVar1 + 1;
  *piVar1 = iVar5;
  if (0 < (int)uVar6) {
    uVar7 = (ulonglong)uVar6;
    do {
      iVar4 = *(int *)(lVar2 + 0x1cc);
      if (iVar5 == iVar4) {
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        iVar3 = iVar5 + 1;
        if (iVar5 + 1 < iVar4) {
          iVar3 = iVar4;
        }
        FUN_18011dbd0(piVar1,iVar3);
        iVar5 = *piVar1;
      }
      *(float *)(*(longlong *)(lVar2 + 0x1d0) + (longlong)iVar5 * 4) = fVar10;
      iVar5 = *piVar1 + 1;
      *piVar1 = iVar5;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(undefined4 *)(lVar2 + 0x1ac) =
       *(undefined4 *)(*(longlong *)(lVar2 + 0x1d0) + -4 + (longlong)iVar5 * 4);
  return;
}





// 函数: void FUN_18012d5bc(void)
void FUN_18012d5bc(void)

{
  int in_EAX;
  uint unaff_EBX;
  longlong unaff_RBP;
  ulonglong uVar1;
  int *unaff_RDI;
  undefined4 in_stack_00000040;
  
  uVar1 = (ulonglong)unaff_EBX;
  do {
    if (in_EAX == unaff_RDI[1]) {
      FUN_18011dbd0();
      in_EAX = *unaff_RDI;
    }
    *(undefined4 *)(*(longlong *)(unaff_RDI + 2) + (longlong)in_EAX * 4) = in_stack_00000040;
    in_EAX = *unaff_RDI + 1;
    *unaff_RDI = in_EAX;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  *(undefined4 *)(unaff_RBP + 0x1ac) =
       *(undefined4 *)(*(longlong *)(unaff_RBP + 0x1d0) + -4 + (longlong)in_EAX * 4);
  return;
}





// 函数: void FUN_18012d615(void)
void FUN_18012d615(void)

{
  int in_EAX;
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x1ac) =
       *(undefined4 *)(*(longlong *)(unaff_RBP + 0x1d0) + -4 + (longlong)in_EAX * 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012d7c0(longlong param_1)
void FUN_18012d7c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  longlong lStackX_8;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  lVar8 = _DAT_180c8a9b0;
  lStackX_8 = param_1;
  if ((param_1 == 0) && (lStackX_8 = *(longlong *)(_DAT_180c8a9b0 + 0xb0), lStackX_8 == 0)) {
    lStackX_8 = **(longlong **)(*(longlong *)(_DAT_180c8a9b0 + 0xa0) + 0x48);
  }
  lVar4 = lStackX_8;
  func_0x00018012d740(lStackX_8);
  FUN_18013d860(lVar8 + 0x1ba0,&lStackX_8);
  uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 0x58) + 8);
  piVar3 = *(int **)(*(longlong *)(lVar8 + 0x1af8) + 0x2e8);
  iVar10 = piVar3[0x1c];
  if (iVar10 == piVar3[0x1d]) {
    FUN_18011dc70(piVar3 + 0x1c);
    iVar10 = piVar3[0x1c];
  }
  *(undefined8 *)(*(longlong *)(piVar3 + 0x1e) + (longlong)iVar10 * 8) = uVar2;
  piVar3[0x1c] = piVar3[0x1c] + 1;
  piVar16 = (int *)0x0;
  if (piVar3[0x1c] != 0) {
    piVar16 = *(int **)(*(longlong *)(piVar3 + 0x1e) + -8 + (longlong)piVar3[0x1c] * 8);
  }
  iVar10 = *piVar3;
  if (iVar10 != 0) {
    piVar15 = (int *)(*(longlong *)(piVar3 + 2) + -0x30 + (longlong)iVar10 * 0x30);
    if ((piVar15 != (int *)0x0) &&
       (((*piVar15 == 0 || (*(int **)(piVar15 + 6) == piVar16)) && (*(longlong *)(piVar15 + 8) == 0)
        ))) {
      piVar14 = piVar15 + -0xc;
      if (iVar10 < 2) {
        piVar14 = (int *)0x0;
      }
      if (((*piVar15 == 0) && (piVar14 != (int *)0x0)) && (*(int **)(piVar14 + 6) == piVar16)) {
        if (piVar3[0x18] == 0) {
          plVar13 = (longlong *)(*(longlong *)(piVar3 + 0xe) + 0x18);
        }
        else {
          plVar13 = (longlong *)
                    ((longlong)(piVar3[0x18] + -1) * 0x10 + *(longlong *)(piVar3 + 0x1a));
        }
        if (((*(longlong *)(piVar14 + 1) == *plVar13) && (*(longlong *)(piVar14 + 3) == plVar13[1]))
           && (*(longlong *)(piVar14 + 8) == 0)) {
          *piVar3 = iVar10 + -1;
          return;
        }
      }
      *(int **)(piVar15 + 6) = piVar16;
      return;
    }
  }
  if (piVar3[0x18] == 0) {
    puVar12 = (uint *)(*(longlong *)(piVar3 + 0xe) + 0x18);
  }
  else {
    puVar12 = (uint *)((longlong)(piVar3[0x18] + -1) * 0x10 + *(longlong *)(piVar3 + 0x1a));
  }
  uVar6 = *puVar12;
  lVar8 = *(longlong *)(puVar12 + 1);
  uVar7 = puVar12[3];
  if (piVar3[0x1c] == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(undefined8 *)(*(longlong *)(piVar3 + 0x1e) + -8 + (longlong)piVar3[0x1c] * 8);
  }
  iVar10 = *piVar3;
  iVar9 = piVar3[1];
  if (iVar10 == iVar9) {
    if (iVar9 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar9 / 2 + iVar9;
    }
    iVar5 = iVar10 + 1;
    if (iVar10 + 1 < iVar9) {
      iVar5 = iVar9;
    }
    FUN_18013e760(piVar3,iVar5);
    iVar10 = *piVar3;
  }
  lVar11 = (longlong)iVar10;
  lVar4 = *(longlong *)(piVar3 + 2);
  plVar13 = (longlong *)(lVar4 + lVar11 * 0x30);
  *plVar13 = (ulonglong)uVar6 << 0x20;
  plVar13[1] = lVar8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar11 * 0x30);
  *puVar1 = CONCAT44(uStack_24,uVar7);
  puVar1[1] = uStack_20;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar11 * 0x30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *piVar3 = *piVar3 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



