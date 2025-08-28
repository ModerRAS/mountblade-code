#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part127.c - 15 个函数

// 函数: void Engine_SetStateFlags(uint32_t state_flags)
void Engine_SetStateFlags(uint32_t state_flags)

{
  int64_t context_ptr;
  char flag_result;
  int8_t state_enable;
  int64_t engine_base;
  int64_t state_struct;
  
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
  Engine_Internal_ProcessState(*(uint64_t *)(engine_base + 0x90) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_CleanupResources(void)
void Engine_CleanupResources(void)

{
  char *log_buffer;
  int *resource_count;
  float transform_y;
  int64_t context_obj;
  int64_t engine_instance;
  uint object_flags;
  int64_t file_handle;
  int64_t temp_ptr;
  int64_t result_ptr;
  int64_t transform_obj;
  float scale_factor;
  
  engine_instance = g_EngineInstance;
  if ((1 < *(int *)(g_EngineInstance + 0x1ad0)) || (*(char *)(g_EngineInstance + 2) == 0)) {
    context_obj = *(int64_t *)(g_EngineInstance + 0x1af8);
    if (*(int64_t *)(context_obj + 0x210) != 0) {
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
      if (*(int64_t *)(temp_ptr + 0x2e40) != 0) {
        file_handle = __acrt_iob_func(1);
        if (*(int64_t *)(temp_ptr + 0x2e40) == file_handle) {
          fflush();
        }
        else {
          fclose();
        }
        *(uint64_t *)(temp_ptr + 0x2e40) = 0;
      }
      resource_count = (int *)(temp_ptr + 0x2e48);
      file_handle = *(int64_t *)(temp_ptr + 0x2e50);
      if ((file_handle != 0) && (1 < *resource_count + -1)) {
        if (*(code **)(g_EngineInstance + 0x100) != (code *)0x0) {
          (**(code **)(g_EngineInstance + 0x100))(*(uint64_t *)(g_EngineInstance + 0x108),file_handle);
          file_handle = *(int64_t *)(temp_ptr + 0x2e50);
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
    if (((*(int64_t *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
       (file_handle = *(int64_t *)(*(int64_t *)(context_obj + 0x408) + 0x68), file_handle != 0)) {
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
      result_ptr = *(int64_t *)
               (*(int64_t *)(engine_instance + 0x1ad8) + -8 + (int64_t)*(int *)(engine_instance + 0x1ad0) * 8);
    }
    *(int64_t *)(temp_ptr + 0x1af8) = result_ptr;
    if (result_ptr != 0) {
      scale_factor = *(float *)(temp_ptr + 0x19fc) * *(float *)(result_ptr + 0x2d8) * *(float *)(result_ptr + 0x2dc);
      *(float *)(temp_ptr + 0x1a10) = scale_factor;
      *(float *)(temp_ptr + 0x19f8) = scale_factor;
    }
    // 更新当前对象
    if (*(int64_t *)(engine_instance + 0x1af8) != 0) {
      engine_instance = *(int64_t *)(*(int64_t *)(engine_instance + 0x1af8) + 0x28);
      if (engine_instance != 0) {
        *(uint32_t *)(engine_instance + 0x54) = *(uint32_t *)(temp_ptr + 0x1a90);
      }
      if (((*(int64_t *)(temp_ptr + 0x1c78) != engine_instance) &&
          (*(int64_t *)(temp_ptr + 0x1c78) = engine_instance, engine_instance != 0)) &&
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
  int64_t context_obj;
  int64_t temp_ptr;
  uint object_flags;
  int64_t file_handle;
  int64_t engine_instance;
  int64_t result_ptr;
  int64_t engine_params;
  int64_t target_instance;
  float scale_factor;
  
  context_obj = *(int64_t *)(engine_params + 0x1af8);
  if (*(int64_t *)(context_obj + 0x210) != 0) {
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
    if (*(int64_t *)(engine_params + 0x2e40) != 0) {
      file_handle = __acrt_iob_func(1);
      if (*(int64_t *)(engine_params + 0x2e40) == file_handle) {
        fflush();
      }
      else {
        fclose();
      }
      *(uint64_t *)(engine_params + 0x2e40) = 0;
    }
    resource_count = (int *)(engine_params + 0x2e48);
    file_handle = *(int64_t *)(engine_params + 0x2e50);
    if ((file_handle != 0) && (1 < *resource_count + -1)) {
      if (*(code **)(g_EngineInstance + 0x100) != (code *)0x0) {
        (**(code **)(g_EngineInstance + 0x100))(*(uint64_t *)(g_EngineInstance + 0x108),file_handle);
        file_handle = *(int64_t *)(engine_params + 0x2e50);
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
  if (((*(int64_t *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (file_handle = *(int64_t *)(*(int64_t *)(context_obj + 0x408) + 0x68), file_handle != 0)) {
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
    result_ptr = *(int64_t *)
             (*(int64_t *)(target_instance + 0x1ad8) + -8 + (int64_t)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(int64_t *)(engine_params + 0x1af8) = result_ptr;
  if (result_ptr != 0) {
    scale_factor = *(float *)(engine_params + 0x19fc) * *(float *)(result_ptr + 0x2d8) * *(float *)(result_ptr + 0x2dc);
    *(float *)(engine_params + 0x1a10) = scale_factor;
    *(float *)(engine_params + 0x19f8) = scale_factor;
  }
  // 更新当前对象
  if (*(int64_t *)(target_instance + 0x1af8) != 0) {
    context_obj = *(int64_t *)(*(int64_t *)(target_instance + 0x1af8) + 0x28);
    if (context_obj != 0) {
      *(uint32_t *)(context_obj + 0x54) = *(uint32_t *)(engine_params + 0x1a90);
    }
    if (((*(int64_t *)(engine_params + 0x1c78) != context_obj) &&
        (*(int64_t *)(engine_params + 0x1c78) = context_obj, context_obj != 0)) &&
       (*(code **)(engine_params + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_params + 0x15c0))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_ProcessLogBufferAndCleanupResources(int64_t engine_instance, int64_t context_obj, int64_t target_instance, int64_t log_buffer_state, int64_t resource_handle)
void Engine_ProcessLogBufferAndCleanupResources(int64_t engine_instance, int64_t context_obj, int64_t target_instance, int64_t log_buffer_state, int64_t resource_handle)

{
  char *log_buffer_ptr;
  int *resource_counter;
  float transform_offset_y;
  float scale_factor;
  int64_t file_handle;
  int64_t log_file_handle;
  int64_t current_context;
  int64_t result_ptr;
  float computed_scale;
  
  // 获取日志缓冲区指针
  log_buffer_ptr = (char *)(engine_instance + 0x2e38);
  if (*log_buffer_ptr != (char)log_buffer_state) {
    // 处理日志缓冲区
    Engine_ProcessLogBuffer(&g_LogBufferPtr);
    
    // 检查并关闭日志文件
    if (*(int64_t *)(engine_instance + 0x2e40) != log_buffer_state) {
      log_file_handle = __acrt_iob_func((int)log_buffer_state + 1);
      if (*(int64_t *)(engine_instance + 0x2e40) == log_file_handle) {
        fflush();
      }
      else {
        fclose();
      }
      *(int64_t *)(engine_instance + 0x2e40) = log_buffer_state;
    }
    
    // 释放资源句柄
    file_handle = *(int64_t *)(engine_instance + 0x2e50);
    if ((file_handle != 0) && (1 < *(int *)(engine_instance + 0x2e48) + -1)) {
      if (*(code **)(g_EngineInstance + 0x100) != (code *)0x0) {
        // 调用资源处理回调函数
        (**(code **)(g_EngineInstance + 0x100))(*(uint64_t *)(g_EngineInstance + 0x108), file_handle);
        file_handle = *(int64_t *)(engine_instance + 0x2e50);
      }
      current_context = g_EngineInstance;
      if (file_handle != 0) {
        // 重置资源计数器
        *(int64_t *)(engine_instance + 0x2e48) = log_buffer_state;
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
  if (((*(int64_t *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (file_handle = *(int64_t *)(*(int64_t *)(context_obj + 0x408) + 0x68), file_handle != 0)) {
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
    resource_handle = *(int64_t *)
                 (*(int64_t *)(target_instance + 0x1ad8) + -8 +
                 (int64_t)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(int64_t *)(engine_instance + 0x1af8) = resource_handle;
  
  // 计算缩放因子
  if (resource_handle != 0) {
    computed_scale = *(float *)(engine_instance + 0x19fc) * *(float *)(resource_handle + 0x2d8) *
                   *(float *)(resource_handle + 0x2dc);
    *(float *)(engine_instance + 0x1a10) = computed_scale;
    *(float *)(engine_instance + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(int64_t *)(target_instance + 0x1af8) != 0) {
    current_context = *(int64_t *)(*(int64_t *)(target_instance + 0x1af8) + 0x28);
    if (current_context != 0) {
      *(uint32_t *)(current_context + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
    }
    if (((*(int64_t *)(engine_instance + 0x1c78) != current_context) &&
        (*(int64_t *)(engine_instance + 0x1c78) = current_context, current_context != 0)) &&
       (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_instance + 0x15c0))();
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_UpdateStateAndManageResources(int64_t engine_instance, int64_t context_obj, int64_t target_instance, int64_t log_buffer_state, char *log_buffer_flag)
void Engine_UpdateStateAndManageResources(int64_t engine_instance, int64_t context_obj, int64_t target_instance, int64_t log_buffer_state, char *log_buffer_flag)

{
  int *resource_counter;
  float transform_offset_y;
  float scale_factor;
  int64_t file_handle;
  int64_t log_file_handle;
  int64_t current_context;
  int64_t result_context;
  float computed_scale;
  
  // 处理日志缓冲区
  Engine_ProcessLogBuffer(&g_LogBufferPtr);
  
  // 检查并关闭日志文件
  if (*(int64_t *)(engine_instance + 0x2e40) != log_buffer_state) {
    log_file_handle = __acrt_iob_func((int)log_buffer_state + 1);
    if (*(int64_t *)(engine_instance + 0x2e40) == log_file_handle) {
      fflush();
    }
    else {
      fclose();
    }
    *(int64_t *)(engine_instance + 0x2e40) = log_buffer_state;
  }
  
  // 释放资源句柄
  file_handle = *(int64_t *)(engine_instance + 0x2e50);
  if ((file_handle != 0) && (1 < *(int *)(engine_instance + 0x2e48) + -1)) {
    if (*(code **)(g_EngineInstance + 0x100) != (code *)0x0) {
      // 调用资源处理回调函数
      (**(code **)(g_EngineInstance + 0x100))(*(uint64_t *)(g_EngineInstance + 0x108), file_handle);
      file_handle = *(int64_t *)(engine_instance + 0x2e50);
    }
    current_context = g_EngineInstance;
    if (file_handle != 0) {
      // 重置资源计数器
      *(int64_t *)(engine_instance + 0x2e48) = log_buffer_state;
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
  if (((*(int64_t *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (result_context = *(int64_t *)(*(int64_t *)(context_obj + 0x408) + 0x68), result_context != 0)) {
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
    log_buffer_state = *(int64_t *)
                 (*(int64_t *)(target_instance + 0x1ad8) + -8 +
                 (int64_t)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(int64_t *)(current_context + 0x1af8) = log_buffer_state;
  
  // 计算缩放因子
  if (log_buffer_state != 0) {
    computed_scale = *(float *)(current_context + 0x19fc) * *(float *)(log_buffer_state + 0x2d8) *
                   *(float *)(log_buffer_state + 0x2dc);
    *(float *)(current_context + 0x1a10) = computed_scale;
    *(float *)(current_context + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(int64_t *)(target_instance + 0x1af8) != 0) {
    result_context = *(int64_t *)(*(int64_t *)(target_instance + 0x1af8) + 0x28);
    if (result_context != 0) {
      *(uint32_t *)(result_context + 0x54) = *(uint32_t *)(current_context + 0x1a90);
    }
    if (((*(int64_t *)(current_context + 0x1c78) != result_context) &&
        (*(int64_t *)(current_context + 0x1c78) = result_context, result_context != 0)) &&
       (*(code **)(current_context + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(current_context + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void Engine_UpdateTransformDataAndRefCount(int64_t engine_instance, int64_t context_obj, int64_t target_instance)
void Engine_UpdateTransformDataAndRefCount(int64_t engine_instance, int64_t context_obj, int64_t target_instance)

{
  float transform_offset_y;
  float scale_factor;
  int64_t transform_handle;
  int64_t current_context;
  int64_t result_context;
  float computed_scale;
  
  // 更新变换数据
  if (((*(int64_t *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (transform_handle = *(int64_t *)(*(int64_t *)(context_obj + 0x408) + 0x68), transform_handle != 0)) {
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
    current_context = *(int64_t *)
                 (*(int64_t *)(target_instance + 0x1ad8) + -8 +
                 (int64_t)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(int64_t *)(engine_instance + 0x1af8) = current_context;
  
  // 计算缩放因子
  if (current_context != 0) {
    computed_scale = *(float *)(engine_instance + 0x19fc) * *(float *)(current_context + 0x2d8) *
                   *(float *)(current_context + 0x2dc);
    *(float *)(engine_instance + 0x1a10) = computed_scale;
    *(float *)(engine_instance + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(int64_t *)(target_instance + 0x1af8) != 0) {
    result_context = *(int64_t *)(*(int64_t *)(target_instance + 0x1af8) + 0x28);
    if (result_context != 0) {
      *(uint32_t *)(result_context + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
    }
    if (((*(int64_t *)(engine_instance + 0x1c78) != result_context) &&
        (*(int64_t *)(engine_instance + 0x1c78) = result_context, result_context != 0)) &&
       (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_instance + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void Engine_ApplyTransformAndDecrementRefCount(int64_t engine_instance, int64_t context_obj, int64_t target_instance)
void Engine_ApplyTransformAndDecrementRefCount(int64_t engine_instance, int64_t context_obj, int64_t target_instance)

{
  float transform_offset_y;
  float scale_factor;
  int64_t transform_handle;
  int64_t current_context;
  int64_t result_context;
  float computed_scale;
  
  // 应用变换数据
  if (((*(int64_t *)(context_obj + 0x408) != 0) && ((*(byte *)(context_obj + 0x432) & 2) != 0)) &&
     (transform_handle = *(int64_t *)(*(int64_t *)(context_obj + 0x408) + 0x68), transform_handle != 0)) {
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
    current_context = *(int64_t *)
                 (*(int64_t *)(target_instance + 0x1ad8) + -8 +
                 (int64_t)*(int *)(target_instance + 0x1ad0) * 8);
  }
  *(int64_t *)(engine_instance + 0x1af8) = current_context;
  
  // 计算缩放因子
  if (current_context != 0) {
    computed_scale = *(float *)(engine_instance + 0x19fc) * *(float *)(current_context + 0x2d8) *
                   *(float *)(current_context + 0x2dc);
    *(float *)(engine_instance + 0x1a10) = computed_scale;
    *(float *)(engine_instance + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(int64_t *)(target_instance + 0x1af8) != 0) {
    result_context = *(int64_t *)(*(int64_t *)(target_instance + 0x1af8) + 0x28);
    if (result_context != 0) {
      *(uint32_t *)(result_context + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
    }
    if (((*(int64_t *)(engine_instance + 0x1c78) != result_context) &&
        (*(int64_t *)(engine_instance + 0x1c78) = result_context, result_context != 0)) &&
       (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_instance + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void Engine_DecrementBatchCountAndProcessContext(int batch_index, int64_t engine_instance, int64_t target_instance)
void Engine_DecrementBatchCountAndProcessContext(int batch_index, int64_t engine_instance, int64_t target_instance)

{
  int64_t context_handle;
  int64_t current_context;
  int64_t result_context;
  float computed_scale;
  
  // 减少批次计数
  *(int *)(target_instance + 0x1bc0) = *(int *)(target_instance + 0x1bc0) + -1;
  
  // 获取上下文句柄
  if (batch_index != 0) {
    current_context = *(int64_t *)(*(int64_t *)(target_instance + 0x1ad8) + -8 + (int64_t)batch_index * 8);
  }
  *(int64_t *)(engine_instance + 0x1af8) = current_context;
  
  // 计算缩放因子
  if (current_context != 0) {
    computed_scale = *(float *)(engine_instance + 0x19fc) * *(float *)(current_context + 0x2d8) *
                   *(float *)(current_context + 0x2dc);
    *(float *)(engine_instance + 0x1a10) = computed_scale;
    *(float *)(engine_instance + 0x19f8) = computed_scale;
  }
  
  // 更新当前对象并触发回调
  if (*(int64_t *)(target_instance + 0x1af8) != 0) {
    context_handle = *(int64_t *)(*(int64_t *)(target_instance + 0x1af8) + 0x28);
    if (context_handle != 0) {
      *(uint32_t *)(context_handle + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
    }
    if (((*(int64_t *)(engine_instance + 0x1c78) != context_handle) &&
        (*(int64_t *)(engine_instance + 0x1c78) = context_handle, context_handle != 0)) &&
       (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
      // 调用对象更新回调函数
      (**(code **)(engine_instance + 0x15c0))();
      return;
    }
  }
  return;
}





// 函数: void Engine_SetObjectPropertiesAndTriggerCallback(int64_t render_obj, int64_t engine_instance)
void Engine_SetObjectPropertiesAndTriggerCallback(int64_t render_obj, int64_t engine_instance)

{
  int64_t object_data;
  
  // 设置对象属性
  object_data = *(int64_t *)(render_obj + 0x28);
  if (object_data != 0) {
    *(uint32_t *)(object_data + 0x54) = *(uint32_t *)(engine_instance + 0x1a90);
  }
  
  // 触发回调函数
  if (((*(int64_t *)(engine_instance + 0x1c78) != object_data) &&
      (*(int64_t *)(engine_instance + 0x1c78) = object_data, object_data != 0)) &&
     (*(code **)(engine_instance + 0x15c0) != (code *)0x0)) {
    // 调用对象更新回调函数
    (**(code **)(engine_instance + 0x15c0))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_RemoveObjectFromBatchList(int64_t target_object)
void Engine_RemoveObjectFromBatchList(int64_t target_object)

{
  int64_t batch_list_base;
  int64_t current_object;
  int64_t *object_ptr;
  int search_index;
  int batch_count;
  
  // 获取批次列表基础地址
  batch_list_base = *(int64_t *)(g_EngineInstance + 0x1aa8);
  current_object = *(int64_t *)(batch_list_base + -8 + (int64_t)*(int *)(g_EngineInstance + 0x1aa0) * 8);
  
  // 检查目标对象是否在批次列表中
  if (((current_object != target_object) && (*(int64_t *)(current_object + 0x3a0) != target_object)) &&
     (search_index = *(int *)(g_EngineInstance + 0x1aa0) + -2, -1 < search_index)) {
    
    // 从后向前搜索目标对象
    current_object = (int64_t)search_index;
    object_ptr = (int64_t *)(batch_list_base + current_object * 8);
    do {
      if (*object_ptr == target_object) {
        // 找到目标对象，从列表中移除（不返回）
        memmove(batch_list_base + (int64_t)search_index * 8,
                batch_list_base + (int64_t)(search_index + 1) * 8,
                (int64_t)((*(int *)(g_EngineInstance + 0x1aa0) - search_index) + -1) << 3);
      }
      search_index = search_index + -1;
      object_ptr = object_ptr + -1;
      current_object = current_object + -1;
    } while (-1 < current_object);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_UpdateObjectStateAndRemoveFromLists(int64_t target_object)
void Engine_UpdateObjectStateAndRemoveFromLists(int64_t target_object)

{
  int64_t engine_instance;
  uint object_flags;
  int64_t transform_data;
  int64_t *object_list_ptr;
  int search_index;
  
  engine_instance = g_EngineInstance;
  object_flags = 0;
  
  // 更新对象状态
  if (*(int64_t *)(g_EngineInstance + 0x1c98) != target_object) {
    *(int64_t *)(g_EngineInstance + 0x1c98) = target_object;
    if ((target_object != 0) && (*(char *)(engine_instance + 0x1d07) != '\0')) {
      *(uint8_t *)(engine_instance + 0x1d05) = 1;
    }
    *(uint8_t *)(engine_instance + 0x1d09) = 0;
    if (target_object != 0) {
      object_flags = *(uint *)(target_object + 0x3c8);
    }
    *(uint *)(engine_instance + 0x1ca0) = object_flags;
    *(uint8_t *)(engine_instance + 0x1d04) = 0;
    *(uint *)(engine_instance + 0x1cfc) = 0;
  }
  
  if (target_object != 0) {
    // 更新变换数据
    if ((*(int64_t *)(target_object + 0x408) != 0) &&
       (transform_data = *(int64_t *)(*(int64_t *)(target_object + 0x408) + 0x30), transform_data != 0)) {
      *(uint *)(transform_data + 0x18) = *(uint *)(target_object + 8);
      transform_data = *(int64_t *)(*(int64_t *)(target_object + 0x408) + 0x30);
      *(uint *)(transform_data + 0x14) = *(uint *)(transform_data + 0x18);
    }
    
    // 获取关联对象
    if (*(int64_t *)(target_object + 0x3a0) != 0) {
      target_object = *(int64_t *)(target_object + 0x3a0);
    }
    
    // 重置相关状态
    if (((((*(uint *)(target_object + 0xc) & 0x4000000) != 0) && (*(int *)(engine_instance + 0x1b2c) != 0)) &&
        (*(int64_t *)(engine_instance + 0x1b50) != 0)) &&
       (*(int64_t *)(*(int64_t *)(engine_instance + 0x1b50) + 0x3a0) != target_object)) {
      *(uint16_t *)(engine_instance + 0x1b3c) = 1;
      *(uint *)(engine_instance + 0x1b38) = 0;
      *(uint8_t *)(engine_instance + 0x1b3e) = 0;
      *(uint *)(engine_instance + 0x1b2c) = 0;
      *(uint *)(engine_instance + 0x1b44) = 0;
      *(int64_t *)(engine_instance + 0x1b50) = 0;
    }
    
    // 从对象列表中移除
    if ((*(int64_t *)(*(int64_t *)(engine_instance + 0x1ab8) + -8 + (int64_t)*(int *)(engine_instance + 0x1ab0) * 8)
         != target_object) && (search_index = *(int *)(engine_instance + 0x1ab0) + -2, -1 < search_index)) {
      transform_data = (int64_t)search_index;
      object_list_ptr = (int64_t *)(*(int64_t *)(engine_instance + 0x1ab8) + transform_data * 8);
      do {
        if (*object_list_ptr == target_object) {
          // 找到目标对象，从列表中移除（不返回）
          memmove(*(int64_t *)(engine_instance + 0x1ab8) + (int64_t)search_index * 8,
                  *(int64_t *)(engine_instance + 0x1ab8) + (int64_t)(search_index + 1) * 8,
                  (int64_t)((*(int *)(engine_instance + 0x1ab0) - search_index) + -1) << 3);
        }
        search_index = search_index + -1;
        object_list_ptr = object_list_ptr + -1;
        transform_data = transform_data + -1;
      } while (-1 < transform_data);
    }
    
    // 如果对象标志符合条件，从批次列表中移除
    if ((*(uint *)(target_object + 0xc) & 0x2000) == 0) {
      Engine_RemoveObjectFromBatchList(target_object);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_GenerateInterpolatedFloatValues(int segment_count)
void Engine_GenerateInterpolatedFloatValues(int segment_count)

{
  int *array_capacity;
  int64_t context_obj;
  int new_capacity;
  int current_capacity;
  int array_size;
  uint segment_index;
  uint64_t remaining_segments;
  int64_t engine_instance;
  float start_value;
  float step_value;
  float first_value;
  
  engine_instance = g_EngineInstance;
  *(uint8_t *)(*(int64_t *)(g_EngineInstance + 0x1af8) + 0xb1) = 1;
  context_obj = *(int64_t *)(engine_instance + 0x1af8);
  
  // 获取起始值
  start_value = (float)Engine_GetCurrentValue();
  segment_index = segment_count - 1;
  
  // 计算步长值
  step_value = (float)(int)((start_value - (float)(int)segment_index * *(float *)(engine_instance + 0x1674)) / (float)segment_count);
  if (step_value <= 1.0) {
    step_value = 1.0;
  }
  
  // 计算第一个值
  first_value = (float)(int)(start_value - (step_value + *(float *)(engine_instance + 0x1674)) * (float)(int)segment_index);
  if (first_value <= 1.0) {
    first_value = 1.0;
  }
  
  // 获取数组指针和容量
  array_capacity = (int *)(context_obj + 0x1c8);
  array_size = *array_capacity;
  current_capacity = *(int *)(context_obj + 0x1cc);
  
  // 检查是否需要扩展数组
  if (array_size == current_capacity) {
    if (current_capacity == 0) {
      current_capacity = 8;
    }
    else {
      current_capacity = current_capacity / 2 + current_capacity;
    }
    new_capacity = array_size + 1;
    if (array_size + 1 < current_capacity) {
      new_capacity = current_capacity;
    }
    Engine_ResizeArray(array_capacity, new_capacity);
    array_size = *array_capacity;
  }
  
  // 存储第一个值
  *(float *)(*(int64_t *)(context_obj + 0x1d0) + (int64_t)array_size * 4) = first_value;
  array_size = *array_capacity + 1;
  *array_capacity = array_size;
  
  // 生成剩余的插值
  if (0 < (int)segment_index) {
    remaining_segments = (uint64_t)segment_index;
    do {
      current_capacity = *(int *)(context_obj + 0x1cc);
      if (array_size == current_capacity) {
        if (current_capacity == 0) {
          current_capacity = 8;
        }
        else {
          current_capacity = current_capacity / 2 + current_capacity;
        }
        new_capacity = array_size + 1;
        if (array_size + 1 < current_capacity) {
          new_capacity = current_capacity;
        }
        Engine_ResizeArray(array_capacity, new_capacity);
        array_size = *array_capacity;
      }
      *(float *)(*(int64_t *)(context_obj + 0x1d0) + (int64_t)array_size * 4) = step_value;
      array_size = *array_capacity + 1;
      *array_capacity = array_size;
      remaining_segments = remaining_segments - 1;
    } while (remaining_segments != 0);
  }
  
  // 设置最后的值
  *(uint *)(context_obj + 0x1ac) = *(uint *)(*(int64_t *)(context_obj + 0x1d0) + -4 + (int64_t)array_size * 4);
  return;
}





// 函数: void Engine_PopulateFloatArrayWithBatchValues(uint batch_count, int64_t array_info, int64_t context_obj, uint value)
void Engine_PopulateFloatArrayWithBatchValues(uint batch_count, int64_t array_info, int64_t context_obj, uint value)

{
  int array_index;
  uint current_batch;
  int64_t target_context;
  uint64_t remaining_batches;
  int *array_capacity;
  
  remaining_batches = (uint64_t)batch_count;
  do {
    // 检查是否需要扩展数组
    if (array_index == array_capacity[1]) {
      Engine_ResizeArray(array_capacity);
      array_index = *array_capacity;
    }
    
    // 设置数组值
    *(uint *)(*(int64_t *)(array_capacity + 2) + (int64_t)array_index * 4) = value;
    array_index = *array_capacity + 1;
    *array_capacity = array_index;
    remaining_batches = remaining_batches - 1;
  } while (remaining_batches != 0);
  
  // 设置最后的值
  *(uint *)(target_context + 0x1ac) = *(uint *)(*(int64_t *)(target_context + 0x1d0) + -4 + (int64_t)array_index * 4);
  return;
}





// 函数: void Engine_UpdateArrayFinalValue(int array_index, int64_t context_obj)
void Engine_UpdateArrayFinalValue(int array_index, int64_t context_obj)

{
  // 更新数组的最终值
  *(uint *)(context_obj + 0x1ac) = *(uint *)(*(int64_t *)(context_obj + 0x1d0) + -4 + (int64_t)array_index * 4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Engine_AddRenderDataToBuffer(int64_t render_data)
void Engine_AddRenderDataToBuffer(int64_t render_data)

{
  uint64_t *data_ptr;
  uint64_t data_value;
  int *buffer_info;
  int64_t render_context;
  int buffer_index;
  uint texture_flags;
  uint render_flags;
  int64_t texture_handle;
  int buffer_capacity;
  int max_capacity;
  int64_t data_offset;
  uint *texture_data;
  int64_t *render_buffer;
  int *buffer_entry;
  int *prev_entry;
  int *next_entry;
  int64_t current_data;
  int32_t render_mode;
  uint64_t render_params;
  
  texture_handle = g_EngineInstance;
  current_data = render_data;
  if ((render_data == 0) && (current_data = *(int64_t *)(g_EngineInstance + 0xb0), current_data == 0)) {
    current_data = **(int64_t **)(*(int64_t *)(g_EngineInstance + 0xa0) + 0x48);
  }
  render_context = current_data;
  Engine_InitializeRenderContext(current_data);
  Engine_UpdateRenderState(texture_handle + 0x1ba0, &current_data);
  data_value = *(uint64_t *)(*(int64_t *)(render_context + 0x58) + 8);
  buffer_info = *(int **)(*(int64_t *)(texture_handle + 0x1af8) + 0x2e8);
  buffer_capacity = buffer_info[0x1c];
  if (buffer_capacity == buffer_info[0x1d]) {
    Engine_ExpandRenderBuffer(buffer_info + 0x1c);
    buffer_capacity = buffer_info[0x1c];
  }
  *(uint64_t *)(*(int64_t *)(buffer_info + 0x1e) + (int64_t)buffer_capacity * 8) = data_value;
  buffer_info[0x1c] = buffer_info[0x1c] + 1;
  next_entry = (int *)0x0;
  if (buffer_info[0x1c] != 0) {
    next_entry = *(int **)(*(int64_t *)(buffer_info + 0x1e) + -8 + (int64_t)buffer_info[0x1c] * 8);
  }
  buffer_capacity = *buffer_info;
  if (buffer_capacity != 0) {
    buffer_entry = (int *)(*(int64_t *)(buffer_info + 2) + -0x30 + (int64_t)buffer_capacity * 0x30);
    if ((buffer_entry != (int *)0x0) &&
       (((*buffer_entry == 0 || (*(int **)(buffer_entry + 6) == next_entry)) && (*(int64_t *)(buffer_entry + 8) == 0)
        ))) {
      prev_entry = buffer_entry + -0xc;
      if (buffer_capacity < 2) {
        prev_entry = (int *)0x0;
      }
      if (((*buffer_entry == 0) && (prev_entry != (int *)0x0)) && (*(int **)(prev_entry + 6) == next_entry)) {
        if (buffer_info[0x18] == 0) {
          render_buffer = (int64_t *)(*(int64_t *)(buffer_info + 0xe) + 0x18);
        }
        else {
          render_buffer = (int64_t *)
                    ((int64_t)(buffer_info[0x18] + -1) * 0x10 + *(int64_t *)(buffer_info + 0x1a));
        }
        if (((*(int64_t *)(prev_entry + 1) == *render_buffer) && (*(int64_t *)(prev_entry + 3) == render_buffer[1]))
           && (*(int64_t *)(prev_entry + 8) == 0)) {
          *buffer_info = buffer_capacity + -1;
          return;
        }
      }
      *(int **)(buffer_entry + 6) = next_entry;
      return;
    }
  }
  if (buffer_info[0x18] == 0) {
    texture_data = (uint *)(*(int64_t *)(buffer_info + 0xe) + 0x18);
  }
  else {
    texture_data = (uint *)((int64_t)(buffer_info[0x18] + -1) * 0x10 + *(int64_t *)(buffer_info + 0x1a));
  }
  texture_flags = *texture_data;
  texture_handle = *(int64_t *)(texture_data + 1);
  render_flags = texture_data[3];
  if (buffer_info[0x1c] == 0) {
    render_params = 0;
  }
  else {
    render_params = *(uint64_t *)(*(int64_t *)(buffer_info + 0x1e) + -8 + (int64_t)buffer_info[0x1c] * 8);
  }
  buffer_capacity = *buffer_info;
  max_capacity = buffer_info[1];
  if (buffer_capacity == max_capacity) {
    if (max_capacity == 0) {
      max_capacity = 8;
    }
    else {
      max_capacity = max_capacity / 2 + max_capacity;
    }
    buffer_index = buffer_capacity + 1;
    if (buffer_capacity + 1 < max_capacity) {
      buffer_index = max_capacity;
    }
    Engine_ExpandRenderBuffer(buffer_info, buffer_index);
    buffer_capacity = *buffer_info;
  }
  current_data = (int64_t)buffer_capacity;
  render_context = *(int64_t *)(buffer_info + 2);
  render_buffer = (int64_t *)(render_context + current_data * 0x30);
  *render_buffer = (uint64_t)texture_flags << 0x20;
  render_buffer[1] = render_context;
  data_ptr = (uint64_t *)(render_context + 0x10 + current_data * 0x30);
  *data_ptr = CONCAT44(render_mode, render_flags);
  data_ptr[1] = render_params;
  data_ptr = (uint64_t *)(render_context + 0x20 + current_data * 0x30);
  *data_ptr = 0;
  data_ptr[1] = 0;
  *buffer_info = *buffer_info + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



