#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统资源清理模块
 * 
 * 本文件包含1个核心函数，主要用于渲染资源的清理和释放。
 * 该函数负责清理渲染系统中的各种资源，包括指针清理、内存释放等。
 * 
 * 主要功能：
 * - 清理多个指针资源
 * - 释放内存资源
 * - 重置状态标志
 * - 调用相关的清理函数
 */

// 资源状态标志常量
#define RESOURCE_FLAG_ACTIVE 0x20000000
#define RESOURCE_FLAG_MASK 0x20000000

// 内存偏移量常量
#define OFFSET_POINTER_ARRAY_START 0x100
#define OFFSET_POINTER_ARRAY_END 0x128
#define OFFSET_POINTER_ARRAY_STEP 0x08

#define OFFSET_RESOURCE_GROUP_1 0x30
#define OFFSET_RESOURCE_GROUP_2 0x38
#define OFFSET_RESOURCE_GROUP_3 0x40
#define OFFSET_RESOURCE_GROUP_4 0x18
#define OFFSET_RESOURCE_GROUP_5 0x20
#define OFFSET_RESOURCE_GROUP_6 0x28

#define OFFSET_STATUS_FLAG 0x10
#define OFFSET_RESOURCE_FLAG_CHECK 0x328

// 函数指针偏移量
#define FUNCTION_POINTER_OFFSET 0x38

/**
 * 渲染系统资源清理函数
 * 
 * @param render_context 渲染上下文指针
 * 
 * 功能说明：
 * 1. 清理指针数组资源（0x100-0x128）
 * 2. 清理多个资源组（0x30, 0x38, 0x40, 0x18, 0x20, 0x28）
 * 3. 检查资源状态标志
 * 4. 调用相应的清理函数
 * 5. 重置状态标志
 * 
 * 资源清理流程：
 * - 检查指针是否有效
 * - 调用资源清理函数
 * - 清空指针引用
 * - 重置状态标志
 */
void rendering_system_cleanup_resources(longlong render_context)
{
  longlong **resource_pointer_array;
  longlong resource_object;
  int i;
  
  // 清理指针数组资源（从0x100到0x128，步长为0x08）
  for (i = 0; i < 6; i++) {
    resource_pointer_array = *(longlong ***)(render_context + OFFSET_POINTER_ARRAY_START + i * OFFSET_POINTER_ARRAY_STEP);
    *(undefined8 *)(render_context + OFFSET_POINTER_ARRAY_START + i * OFFSET_POINTER_ARRAY_STEP) = 0;
    
    if (resource_pointer_array != (longlong **)0x0) {
      // 调用资源对象的清理函数（函数指针位于对象地址+0x38）
      (**(code **)(*resource_pointer_array + FUNCTION_POINTER_OFFSET))();
    }
  }
  
  // 检查并清理资源组1（偏移0x30）
  resource_object = *(longlong *)(render_context + OFFSET_RESOURCE_GROUP_1);
  if ((resource_object != 0) && ((*(uint *)(resource_object + OFFSET_RESOURCE_FLAG_CHECK) & RESOURCE_FLAG_ACTIVE) == 0)) {
    FUN_18023b050(resource_object, 0);
  }
  
  // 检查并清理资源组2（偏移0x38）
  resource_object = *(longlong *)(render_context + OFFSET_RESOURCE_GROUP_2);
  if ((resource_object != 0) && ((*(uint *)(resource_object + OFFSET_RESOURCE_FLAG_CHECK) & RESOURCE_FLAG_ACTIVE) == 0)) {
    FUN_18023b050(resource_object, 0);
  }
  
  // 检查并清理资源组3（偏移0x18）
  resource_object = *(longlong *)(render_context + OFFSET_RESOURCE_GROUP_3);
  if ((resource_object != 0) && ((*(uint *)(resource_object + OFFSET_RESOURCE_FLAG_CHECK) & RESOURCE_FLAG_ACTIVE) == 0)) {
    FUN_18023b050(resource_object, 0);
  }
  
  // 检查并清理资源组4（偏移0x20）
  resource_object = *(longlong *)(render_context + OFFSET_RESOURCE_GROUP_4);
  if ((resource_object != 0) && ((*(uint *)(resource_object + OFFSET_RESOURCE_FLAG_CHECK) & RESOURCE_FLAG_ACTIVE) == 0)) {
    FUN_18023b050(resource_object, 0);
  }
  
  // 清理剩余的资源组
  longlong **cleanup_pointers[] = {
    (longlong **)(render_context + OFFSET_RESOURCE_GROUP_1),
    (longlong **)(render_context + OFFSET_RESOURCE_GROUP_2),
    (longlong **)(render_context + OFFSET_RESOURCE_GROUP_3),
    (longlong **)(render_context + OFFSET_RESOURCE_GROUP_4),
    (longlong **)(render_context + OFFSET_RESOURCE_GROUP_5),
    (longlong **)(render_context + OFFSET_RESOURCE_GROUP_6)
  };
  
  for (i = 0; i < 6; i++) {
    resource_pointer_array = *cleanup_pointers[i];
    *cleanup_pointers[i] = 0;
    
    if (resource_pointer_array != (longlong **)0x0) {
      // 调用资源对象的清理函数
      (**(code **)(*resource_pointer_array + FUNCTION_POINTER_OFFSET))();
    }
  }
  
  // 重置状态标志
  *(undefined4 *)(render_context + OFFSET_STATUS_FLAG) = 0;
  
  return;
}

// 函数别名定义
#define render_system_cleanup_resource_pools rendering_system_cleanup_resources
#define render_system_release_rendering_resources rendering_system_cleanup_resources
#define render_system_cleanup_render_context rendering_system_cleanup_resources