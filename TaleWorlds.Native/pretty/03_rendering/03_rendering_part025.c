#include "TaleWorlds.Native.Split.h"

// 03_rendering_part025.c - 渲染系统资源清理模块
// 本文件包含渲染系统的资源清理和释放功能
// 
// 主要功能：
// 1. 资源清理：清理渲染资源、内存释放、句柄重置
// 2. 批量处理：遍历资源数组进行批量清理操作
// 3. 安全检查：确保资源清理过程中的安全性
// 4. 状态重置：重置渲染系统状态到初始状态
//
// 文件包含2个核心函数，用于渲染资源的清理和释放

// 全局常量定义
// 渲染系统配置常量
#define RENDER_RESOURCE_COUNT_OFFSET    0x10
#define RENDER_RESOURCE_ARRAY_OFFSET   0x8
#define RENDER_STATUS_OFFSET           0x18

// 函数别名定义
#define cleanup_render_resource        FUN_180285080
#define release_render_memory          FUN_18064e900
#define cleanup_render_resources_internal FUN_18027f4d0
#define cleanup_render_resources_extended  FUN_18027f4f0

// 函数: void cleanup_render_resources_internal(longlong render_context)
// 内部渲染资源清理函数
// 参数: render_context - 渲染上下文指针
// 功能: 清理渲染资源数组中的所有资源，重置状态，执行内存释放
void cleanup_render_resources_internal(longlong render_context)

{
  longlong resource_array_ptr;
  longlong resource_handle;
  ulonglong resource_count;
  ulonglong resource_index;
  
  // 获取资源数量和资源数组指针
  resource_count = *(ulonglong *)(render_context + RENDER_RESOURCE_COUNT_OFFSET);
  resource_array_ptr = *(longlong *)(render_context + RENDER_RESOURCE_ARRAY_OFFSET);
  resource_index = 0;
  
  // 遍历资源数组进行清理
  if (resource_count != 0) {
    do {
      resource_handle = *(longlong *)(resource_array_ptr + resource_index * 8);
      if (resource_handle != 0) {
        // 准备清理资源
        cleanup_render_resource();
                    // WARNING: Subroutine does not return
        // 释放资源内存
        release_render_memory(resource_handle);
      }
      // 重置资源句柄
      *(undefined8 *)(resource_array_ptr + resource_index * 8) = 0;
      resource_index = resource_index + 1;
    } while (resource_index < resource_count);
    resource_count = *(ulonglong *)(render_context + RENDER_RESOURCE_COUNT_OFFSET);
  }
  
  // 重置渲染状态
  *(undefined8 *)(render_context + RENDER_STATUS_OFFSET) = 0;
  
  // 检查是否需要额外清理
  if ((1 < resource_count) && (*(longlong *)(render_context + RENDER_RESOURCE_ARRAY_OFFSET) != 0)) {
                    // WARNING: Subroutine does not return
    // 执行批量内存释放
    release_render_memory();
  }
  return;
}



// 函数: void cleanup_render_resources_extended(longlong render_context)
// 扩展渲染资源清理函数
// 参数: render_context - 渲染上下文指针
// 功能: 扩展的资源清理功能，包含更完整的清理流程和状态重置
void cleanup_render_resources_extended(longlong render_context)

{
  longlong resource_array_ptr;
  longlong resource_handle;
  ulonglong resource_count;
  ulonglong resource_index;
  
  // 获取资源数量和资源数组指针
  resource_count = *(ulonglong *)(render_context + RENDER_RESOURCE_COUNT_OFFSET);
  resource_array_ptr = *(longlong *)(render_context + RENDER_RESOURCE_ARRAY_OFFSET);
  resource_index = 0;
  
  // 遍历资源数组进行清理
  if (resource_count != 0) {
    do {
      resource_handle = *(longlong *)(resource_array_ptr + resource_index * 8);
      if (resource_handle != 0) {
        // 准备清理资源
        cleanup_render_resource();
                    // WARNING: Subroutine does not return
        // 释放资源内存
        release_render_memory(resource_handle);
      }
      // 重置资源句柄
      *(undefined8 *)(resource_array_ptr + resource_index * 8) = 0;
      resource_index = resource_index + 1;
    } while (resource_index < resource_count);
    resource_count = *(ulonglong *)(render_context + RENDER_RESOURCE_COUNT_OFFSET);
  }
  
  // 重置渲染状态
  *(undefined8 *)(render_context + RENDER_STATUS_OFFSET) = 0;
  
  // 检查是否需要额外清理
  if ((1 < resource_count) && (*(longlong *)(render_context + RENDER_RESOURCE_ARRAY_OFFSET) != 0)) {
                    // WARNING: Subroutine does not return
    // 执行批量内存释放
    release_render_memory();
  }
  return;
}


// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

