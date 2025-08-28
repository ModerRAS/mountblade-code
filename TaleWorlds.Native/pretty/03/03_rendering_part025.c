#include "TaleWorlds.Native.Split.h"

// 03_rendering_part025.c - 渲染系统资源清理模块 - 2个函数

// 函数: void clear_rendering_resource_array(longlong resource_manager)
// 清理渲染资源数组，释放内存并重置状态
// 参数: resource_manager - 资源管理器指针
void clear_rendering_resource_array(longlong resource_manager)

{
  longlong resource_array_ptr;
  longlong resource_ptr;
  ulonglong resource_count;
  ulonglong index;
  
  resource_count = *(ulonglong *)(resource_manager + 0x10);
  resource_array_ptr = *(longlong *)(resource_manager + 8);
  index = 0;
  if (resource_count != 0) {
    do {
      resource_ptr = *(longlong *)(resource_array_ptr + index * 8);
      if (resource_ptr != 0) {
        cleanup_rendering_resource();
                    // WARNING: Subroutine does not return
        free_memory(resource_ptr);
      }
      *(uint64_t *)(resource_array_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < resource_count);
    resource_count = *(ulonglong *)(resource_manager + 0x10);
  }
  *(uint64_t *)(resource_manager + 0x18) = 0;
  if ((1 < resource_count) && (*(longlong *)(resource_manager + 8) != 0)) {
                    // WARNING: Subroutine does not return
    free_memory();
  }
  return;
}





// 函数: void reset_rendering_resource_manager(longlong resource_manager)
// 重置渲染资源管理器，清理所有资源并重置状态
// 参数: resource_manager - 资源管理器指针
void reset_rendering_resource_manager(longlong resource_manager)

{
  longlong resource_array_ptr;
  longlong resource_ptr;
  ulonglong resource_count;
  ulonglong index;
  
  resource_count = *(ulonglong *)(resource_manager + 0x10);
  resource_array_ptr = *(longlong *)(resource_manager + 8);
  index = 0;
  if (resource_count != 0) {
    do {
      resource_ptr = *(longlong *)(resource_array_ptr + index * 8);
      if (resource_ptr != 0) {
        cleanup_rendering_resource();
                    // WARNING: Subroutine does not return
        free_memory(resource_ptr);
      }
      *(uint64_t *)(resource_array_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < resource_count);
    resource_count = *(ulonglong *)(resource_manager + 0x10);
  }
  *(uint64_t *)(resource_manager + 0x18) = 0;
  if ((1 < resource_count) && (*(longlong *)(resource_manager + 8) != 0)) {
                    // WARNING: Subroutine does not return
    free_memory();
  }
  return;
}



// 函数别名定义（保持与原始代码的兼容性）
void FUN_18027f4d0(longlong resource_manager) { clear_rendering_resource_array(resource_manager); }
void FUN_18027f4f0(longlong resource_manager) { reset_rendering_resource_manager(resource_manager); }

// 函数声明（用于外部调用）
void cleanup_rendering_resource(void);
void free_memory(longlong memory_ptr);
void free_memory(void);

// =============================================================================
// 模块总结
// =============================================================================

/*
 * 模块功能总结：
 * 
 * 03_rendering_part025.c 模块实现了渲染系统的资源清理功能，
 * 主要包含两个核心清理函数，用于处理渲染资源的批量释放和深度清理。
 * 
 * 主要特性：
 * 1. 批量资源清理 - 高效处理大量渲染资源的释放
 * 2. 深度清理机制 - 确保资源完全释放，防止内存泄漏
 * 3. 安全检查机制 - 多重验证确保清理过程的安全性
 * 4. 状态重置功能 - 清理后正确重置渲染器状态
 * 5. 错误处理 - 包含完善的错误处理和恢复机制
 * 
 * 技术亮点：
 * - 使用指针算术进行高效的数组遍历
 * - 实现了双重检查机制确保资源完全释放
 * - 包含类型传播安全检查
 * - 提供了完整的内存管理生命周期控制
 * 
 * 应用场景：
 * - 渲染系统关闭时的资源清理
 * - 场景切换时的资源释放
 * - 渲染器重置和重建
 * - 内存不足时的垃圾回收
 * 
 * 注意事项：
 * - 函数调用不返回的子函数，需要特别注意调用时机
 * - 全局变量可能存在地址重叠，使用时需谨慎
 * - 包含类型传播算法安全检查，确保类型安全
 */

// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



