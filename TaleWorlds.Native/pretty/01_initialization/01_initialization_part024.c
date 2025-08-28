#include "TaleWorlds.Native.Split.h"

// 01_initialization_part024.c - 30 个函数

/**
 * 执行资源清理并调用销毁函数
 * @param param_1 上下文参数
 * @param param_2 资源数组指针
 * @param param_3 清理参数
 * @param param_4 销毁参数
 * 
 * 该函数递归清理资源，并在清理完成后调用销毁函数。
 * 如果资源数组中的第0x17个元素不为空，则调用其虚函数表中的销毁函数。
 */
void cleanup_and_destroy_resources(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
  if (param_2 != (undefined8 *)0x0) {
    cleanup_and_destroy_resources(param_1, *param_2, param_3, param_4, 0xfffffffffffffffe);
    if ((longlong *)param_2[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0x17] + 0x38))();
    }
    param_2[4] = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
    // 警告：子函数不返回
    deallocate_resource_memory(param_2);
  }
  return;
}

/**
 * 执行资源释放和重置操作
 * @param param_1 上下文参数
 * @param param_2 资源数组指针
 * @param param_3 释放参数
 * @param param_4 重置参数
 * 
 * 该函数递归释放资源，然后调用资源清理函数，最后重置资源状态。
 * 包含对资源引用计数的检查和清理。
 */
void release_and_reset_resources(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  release_and_reset_resources(param_1, *param_2, param_3, param_4, 0xfffffffffffffffe);
  cleanup_resource_array(param_2 + 8);
  param_2[4] = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if (param_2[5] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  // 警告：子函数不返回
  deallocate_resource_memory(param_2);
}

/**
 * 执行资源初始化后的清理操作
 * @param param_1 上下文参数
 * @param param_2 资源数组指针
 * @param param_3 清理参数
 * @param param_4 重置参数
 * 
 * 该函数在资源初始化完成后执行清理，重置资源状态并释放内存。
 */
void post_init_cleanup(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  post_init_cleanup(param_1, *param_2, param_3, param_4, 0xfffffffffffffffe);
  param_2[4] = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if (param_2[5] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  // 警告：子函数不返回
  deallocate_resource_memory(param_2);
}

/**
 * 执行资源验证和清理操作
 * @param param_1 上下文参数
 * @param param_2 资源数组指针
 * @param param_3 验证参数
 * @param param_4 清理参数
 * 
 * 该函数验证资源状态，然后执行清理操作。
 * 特别检查第8个元素的状态。
 */
void validate_and_cleanup_resources(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  validate_and_cleanup_resources(param_1, *param_2, param_3, param_4, 0xfffffffffffffffe);
  if (param_2[8] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  param_2[4] = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if (param_2[5] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  // 警告：子函数不返回
  deallocate_resource_memory(param_2);
}

// 警告：以'_'开头的全局变量与同一地址处的较小符号重叠

/**
 * 重新分配和复制资源数组
 * @param param_1 资源数组管理结构
 * @param param_2 新资源数据
 * 
 * 该函数重新分配资源数组内存，并将现有资源复制到新的内存位置。
 * 支持动态扩容，容量按需增长。
 */
void reallocate_and_copy_resources(undefined8 *param_1, longlong param_2)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
  lVar5 = ((longlong)puVar7 - (longlong)puVar4) / 0x28;
  puVar2 = (undefined8 *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_18005856a;
  }
  puVar2 = (undefined8 *)
           allocate_memory_block(GLOBAL_MEMORY_ALLOCATOR, lVar5 * 0x28, *(undefined1 *)(param_1 + 3), puVar4,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
LAB_18005856a:
  puVar3 = puVar2;
  if (puVar4 != puVar7) {
    lVar6 = (longlong)puVar2 - (longlong)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar3 = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
      *(undefined8 *)(lVar6 + (longlong)puVar4) = 0;
      *(undefined4 *)(lVar6 + 8 + (longlong)puVar4) = 0;
      *puVar3 = &GLOBAL_RESOURCE_RELEASE_HANDLER;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)puVar4) = 0;
      *(undefined8 *)(lVar6 + (longlong)puVar4) = 0;
      *(undefined4 *)(lVar6 + 8 + (longlong)puVar4) = 0;
      *(undefined4 *)(lVar6 + 8 + (longlong)puVar4) = *(undefined4 *)(puVar4 + 1);
      *(undefined8 *)(lVar6 + (longlong)puVar4) = *puVar4;
      *(undefined4 *)(lVar6 + 0x14 + (longlong)puVar4) = *(undefined4 *)((longlong)puVar4 + 0x14);
      *(undefined4 *)(lVar6 + 0x10 + (longlong)puVar4) = *(undefined4 *)(puVar4 + 2);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      puVar4[2] = 0;
      *(undefined4 *)(lVar6 + 0x18 + (longlong)puVar4) = *(undefined4 *)(puVar4 + 3);
      puVar3 = puVar3 + 5;
      puVar1 = puVar4 + 4;
      puVar4 = puVar4 + 5;
    } while (puVar1 != puVar7);
  }
  *puVar3 = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  *puVar3 = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  puVar3[3] = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar3[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)((longlong)puVar3 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 0x20);
  puVar7 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != puVar7) {
    do {
      *puVar4 = &GLOBAL_RESOURCE_RELEASE_HANDLER;
      if (puVar4[1] != 0) {
        // 警告：子函数不返回
        deallocate_resource_memory();
      }
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      *puVar4 = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar7);
    puVar4 = (undefined8 *)*param_1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar3 + 5;
    param_1[2] = puVar2 + lVar5 * 5;
    return;
  }
  // 警告：子函数不返回
  deallocate_resource_memory(puVar4);
}

/**
 * 执行系统清理操作
 * @param param_1 系统上下文指针
 * 
 * 该函数调用系统清理函数，清理系统资源。
 * 检查系统上下文中的清理函数指针并调用。
 */
void perform_system_cleanup(longlong param_1)
{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  return;
}

/**
 * 执行资源验证和系统清理
 * @param param_1 上下文参数
 * @param param_2 资源数组指针
 * @param param_3 验证参数
 * @param param_4 清理参数
 * 
 * 该函数验证资源状态，然后执行系统清理操作。
 */
void validate_and_system_cleanup(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4)
{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  validate_and_system_cleanup(param_1, *param_2, param_3, param_4, 0xfffffffffffffffe);
  if (param_2[8] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  param_2[4] = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if (param_2[5] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  // 警告：子函数不返回
  deallocate_resource_memory(param_2);
}

/**
 * 执行资源释放和回调清理
 * @param param_1 上下文参数
 * @param param_2 资源数组指针
 * 
 * 该函数递归释放资源，并调用回调清理函数。
 */
void release_and_callback_cleanup(undefined8 param_1, undefined8 *param_2)
{
  if (param_2 != (undefined8 *)0x0) {
    release_and_callback_cleanup(param_1, *param_2);
    cleanup_callback_function(param_2);
    // 警告：子函数不返回
    deallocate_resource_memory(param_2);
  }
  return;
}

/**
 * 执行资源回调清理的包装函数
 * @param param_1 上下文参数
 * 
 * 该函数是资源回调清理的包装器，使用未绑定的寄存器变量。
 */
void callback_cleanup_wrapper(undefined8 param_1)
{
  undefined8 *unaff_RBX;
  
  release_and_callback_cleanup(param_1, *unaff_RBX);
  cleanup_callback_function();
  // 警告：子函数不返回
  deallocate_resource_memory();
}

/**
 * 空操作函数
 * 
 * 该函数不执行任何操作，直接返回。
 */
void empty_operation(void)
{
  return;
}

/**
 * 执行内存块清理操作
 * @param param_1 清理参数
 * @param param_2 内存块指针
 * 
 * 该函数清理内存块，重置相关指针和计数器。
 */
void cleanup_memory_block(undefined8 param_1, longlong param_2)
{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  *(undefined8 *)(param_2 + 0x20) = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x20) = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  if (param_2 != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory(param_2);
  }
  return;
}

// 警告：以'_'开头的全局变量与同一地址处的较小符号重叠

/**
 * 批量处理资源数组
 * @param param_1 资源数组管理结构
 * @param param_2 起始索引
 * @param param_3 结束索引
 * 
 * 该函数批量处理资源数组中的元素，支持动态扩容和内存重分配。
 */
void batch_process_resource_array(longlong *param_1, longlong param_2, longlong param_3)
{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = param_3 - param_2 >> 5;
  if ((ulonglong)(param_1[2] - *param_1 >> 5) < uVar6) {
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = allocate_memory_block(GLOBAL_MEMORY_ALLOCATOR, uVar6 << 5, (char)param_1[3]);
    }
    if (param_2 != param_3) {
      lVar7 = lVar2 - param_2;
      do {
        copy_memory_block(lVar7 + param_2, param_2);
        param_2 = param_2 + 0x20;
      } while (param_2 != param_3);
    }
    puVar1 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)*param_1;
    if (puVar4 != puVar1) {
      do {
        (**(code **)*puVar4)(puVar4, 0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar1);
      puVar4 = (undefined8 *)*param_1;
    }
    if (puVar4 != (undefined8 *)0x0) {
      // 警告：子函数不返回
      deallocate_resource_memory(puVar4);
    }
    *param_1 = lVar2;
    lVar2 = uVar6 * 0x20 + lVar2;
    param_1[2] = lVar2;
    param_1[1] = lVar2;
  }
  else {
    uVar5 = param_1[1] - *param_1 >> 5;
    if (uVar5 < uVar6) {
      lVar2 = uVar5 * 0x20 + param_2;
      process_resource_range(param_2, lVar2);
      lVar2 = finalize_resource_processing(lVar2, param_3, param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      puVar3 = (undefined8 *)process_resource_range(param_2, param_3);
      puVar1 = (undefined8 *)param_1[1];
      for (puVar4 = puVar3; puVar4 != puVar1; puVar4 = puVar4 + 4) {
        (**(code **)*puVar4)(puVar4, 0);
      }
      param_1[1] = (longlong)puVar3;
    }
  }
  return;
}

// 警告：以'_'开头的全局变量与同一地址处的较小符号重叠

/**
 * 重新分配资源内存块
 * @param param_1 资源管理结构
 * 
 * 该函数重新分配资源内存块，使用未绑定的寄存器变量。
 */
void reallocate_resource_memory_block(longlong param_1)
{
  undefined8 *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  undefined8 *puVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong unaff_R15;
  
  if (unaff_RSI == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = allocate_memory_block(GLOBAL_MEMORY_ALLOCATOR, unaff_RSI << 5, *(undefined1 *)(param_1 + 0x18));
  }
  if (unaff_RBX != unaff_R15) {
    lVar4 = lVar2 - unaff_RBX;
    do {
      copy_memory_block(lVar4 + unaff_RBX, unaff_RBX);
      unaff_RBX = unaff_RBX + 0x20;
    } while (unaff_RBX != unaff_R15);
  }
  puVar1 = (undefined8 *)unaff_RDI[1];
  puVar3 = (undefined8 *)*unaff_RDI;
  if (puVar3 != puVar1) {
    do {
      (**(code **)*puVar3)(puVar3, 0);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
    puVar3 = (undefined8 *)*unaff_RDI;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *unaff_RDI = lVar2;
    lVar2 = unaff_RSI * 0x20 + lVar2;
    unaff_RDI[2] = lVar2;
    unaff_RDI[1] = lVar2;
    return;
  }
  // 警告：子函数不返回
  deallocate_resource_memory(puVar3);
}

/**
 * 执行资源复制操作
 * @param 
 * 
 * 该函数执行资源复制操作，使用未绑定的寄存器变量。
 */
void execute_resource_copy(void)
{
  undefined8 *puVar1;
  longlong unaff_RBX;
  undefined8 *puVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R12;
  longlong lVar3;
  longlong unaff_R15;
  
  lVar3 = unaff_R12 - unaff_RBX;
  do {
    copy_memory_block(lVar3 + unaff_RBX, unaff_RBX);
    unaff_RBX = unaff_RBX + 0x20;
  } while (unaff_RBX != unaff_R15);
  puVar1 = (undefined8 *)unaff_RDI[1];
  puVar2 = (undefined8 *)*unaff_RDI;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2, 0);
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    puVar2 = (undefined8 *)*unaff_RDI;
  }
  if (puVar2 != (undefined8 *)0x0) {
    // 警告：子函数不返回
    deallocate_resource_memory(puVar2);
  }
  *unaff_RDI = unaff_R12;
  lVar3 = unaff_RSI * 0x20 + unaff_R12;
  unaff_RDI[2] = lVar3;
  unaff_RDI[1] = lVar3;
  return;
}

/**
 * 清理和重置资源数组
 * @param 
 * 
 * 该函数清理并重置资源数组，使用未绑定的寄存器变量。
 */
void cleanup_and_reset_resource_array(void)
{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R12;
  
  puVar2 = (undefined8 *)unaff_RDI[1];
  puVar3 = (undefined8 *)*unaff_RDI;
  if (puVar3 != puVar2) {
    do {
      (**(code **)*puVar3)(puVar3, 0);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2);
    puVar3 = (undefined8 *)*unaff_RDI;
  }
  if (puVar3 != (undefined8 *)0x0) {
    // 警告：子函数不返回
    deallocate_resource_memory(puVar3);
  }
  *unaff_RDI = unaff_R12;
  lVar1 = unaff_RSI * 0x20 + unaff_R12;
  unaff_RDI[2] = lVar1;
  unaff_RDI[1] = lVar1;
  return;
}

/**
 * 处理资源范围操作
 * @param param_1 资源管理结构
 * @param param_2 操作参数
 * @param param_3 范围参数
 * 
 * 该函数处理指定范围内的资源操作。
 */
void process_resource_range_operation(longlong param_1, undefined8 param_2, longlong param_3)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong unaff_RBX;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  uVar5 = *(longlong *)(param_1 + 8) - param_3 >> 5;
  if (uVar5 < unaff_RSI) {
    process_resource_range();
    uVar3 = finalize_resource_processing(uVar5 * 0x20 + unaff_RBX);
    *(undefined8 *)(unaff_RDI + 8) = uVar3;
  }
  else {
    puVar2 = (undefined8 *)process_resource_range();
    puVar1 = *(undefined8 **)(unaff_RDI + 8);
    for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(puVar4, 0);
    }
    *(undefined8 **)(unaff_RDI + 8) = puVar2;
  }
  return;
}

// 警告：以'_'开头的全局变量与同一地址处的较小符号重叠

/**
 * 重新分配和管理资源数组
 * @param param_1 资源数组管理结构
 * @param param_2 源起始位置
 * @param param_3 目标起始位置
 * @param param_4 结束位置
 * 
 * 该函数重新分配资源数组内存，并管理资源的复制和移动。
 */
void reallocate_and_manage_resource_array(longlong *param_1, longlong param_2, longlong param_3, longlong param_4)
{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 == param_4) {
    return;
  }
  lVar2 = param_1[1];
  uVar5 = param_4 - param_3 >> 3;
  if ((ulonglong)(param_1[2] - lVar2 >> 3) < uVar5) {
    lVar3 = *param_1;
    lVar2 = lVar2 - lVar3 >> 3;
    uVar4 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= lVar2 + uVar5) {
      uVar4 = lVar2 + uVar5;
    }
    if (uVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = allocate_memory_block(GLOBAL_MEMORY_ALLOCATOR, uVar4 * 8, (char)param_1[3]);
      lVar3 = *param_1;
    }
    if (lVar3 != param_2) {
      // 警告：子函数不返回
      move_memory(uVar1, lVar3, param_2 - lVar3);
    }
    // 警告：子函数不返回
    move_memory(uVar1, param_3, param_4 - param_3);
  }
  uVar4 = lVar2 - param_2 >> 3;
  if (uVar5 < uVar4) {
    lVar3 = lVar2 + uVar5 * -8;
    if (lVar3 != lVar2) {
      // 警告：子函数不返回
      move_memory(lVar2, lVar3, uVar5 * 8);
    }
    // 警告：子函数不返回
    move_memory(lVar2 - ((lVar2 + uVar5 * -8) - param_2 & 0xfffffffffffffff8), param_2);
  }
  lVar3 = param_3 + uVar4 * 8;
  if (lVar3 != param_4) {
    // 警告：子函数不返回
    move_memory(lVar2, lVar3, param_4 - lVar3);
  }
  if (param_2 != lVar2) {
    // 警告：子函数不返回
    move_memory(lVar2 + (uVar5 - uVar4) * 8, param_2, lVar2 - param_2);
  }
  // 警告：子函数不返回
  move_memory(param_2 + (uVar4 - (lVar3 - param_3 >> 3)) * 8, param_3, lVar3 - param_3);
}

// 警告：以'_'开头的全局变量与同一地址处的较小符号重叠

/**
 * 管理资源数组内存分配
 * @param param_1 资源数组管理结构
 * @param param_2 源起始位置
 * @param param_3 目标起始位置
 * @param param_4 结束位置
 * 
 * 该函数管理资源数组的内存分配和移动操作。
 */
void manage_resource_array_allocation(longlong *param_1, longlong param_2, longlong param_3, longlong param_4)
{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  uVar5 = param_4 - param_3 >> 3;
  if ((ulonglong)(param_1[2] - lVar2 >> 3) < uVar5) {
    lVar3 = *param_1;
    lVar2 = lVar2 - lVar3 >> 3;
    uVar4 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= lVar2 + uVar5) {
      uVar4 = lVar2 + uVar5;
    }
    if (uVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = allocate_memory_block(GLOBAL_MEMORY_ALLOCATOR, uVar4 * 8, (char)param_1[3]);
      lVar3 = *param_1;
    }
    if (lVar3 != param_2) {
      // 警告：子函数不返回
      move_memory(uVar1, lVar3, param_2 - lVar3);
    }
    // 警告：子函数不返回
    move_memory(uVar1, param_3, param_4 - param_3);
  }
  uVar4 = lVar2 - param_2 >> 3;
  if (uVar5 < uVar4) {
    lVar3 = lVar2 + uVar5 * -8;
    if (lVar3 != lVar2) {
      // 警告：子函数不返回
      move_memory(lVar2, lVar3, uVar5 * 8);
    }
    // 警告：子函数不返回
    move_memory(lVar2 - ((lVar2 + uVar5 * -8) - param_2 & 0xfffffffffffffff8), param_2);
  }
  lVar3 = param_3 + uVar4 * 8;
  if (lVar3 != param_4) {
    // 警告：子函数不返回
    move_memory(lVar2, lVar3, param_4 - lVar3);
  }
  if (param_2 != lVar2) {
    // 警告：子函数不返回
    move_memory(lVar2 + (uVar5 - uVar4) * 8, param_2, lVar2 - param_2);
  }
  // 警告：子函数不返回
  move_memory(param_2 + (uVar4 - (lVar3 - param_3 >> 3)) * 8, param_3, lVar3 - param_3);
}

// 警告：以'_'开头的全局变量与同一地址处的较小符号重叠

/**
 * 扩展资源数组容量
 * @param param_1 扩展参数
 * @param param_2 源位置
 * 
 * 该函数扩展资源数组的容量，使用未绑定的寄存器变量。
 */
void expand_resource_array_capacity(longlong param_1, longlong param_2)
{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar2;
  
  param_1 = param_1 >> 3;
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 <= (ulonglong)(param_1 + unaff_RBP)) {
    uVar2 = param_1 + unaff_RBP;
  }
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocate_memory_block(GLOBAL_MEMORY_ALLOCATOR, uVar2 * 8, (char)unaff_RDI[3]);
    param_2 = *unaff_RDI;
  }
  if (param_2 != unaff_RSI) {
    // 警告：子函数不返回
    move_memory(uVar1, param_2, unaff_RSI - param_2);
  }
  // 警告：子函数不返回
  move_memory(uVar1);
}

/**
 * 空操作函数2
 * 
 * 该函数不执行任何操作，直接返回。
 */
void empty_operation2(void)
{
  return;
}

/**
 * 空操作函数3
 * 
 * 该函数不执行任何操作，直接返回。
 */
void empty_operation3(void)
{
  return;
}

/**
 * 清理内存块状态
 * @param param_1 内存块指针
 * 
 * 该函数清理内存块的状态，重置相关指针和计数器。
 */
void cleanup_memory_block_state(longlong param_1)
{
  initialize_memory_block();
  *(undefined8 *)(param_1 + 8) = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  return;
}

/**
 * 清理资源结构
 * @param param_1 资源结构指针
 * 
 * 该函数清理资源结构，调用相关的清理函数。
 */
void cleanup_resource_structure(undefined8 *param_1)
{
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x38))();
  }
  *param_1 = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  return;
}

/**
 * 释放资源数组元素
 * @param param_1 资源数组指针
 * 
 * 该函数释放资源数组中的元素，清理相关资源。
 */
void release_resource_array_element(undefined8 *param_1)
{
  cleanup_resource_array(param_1 + 4);
  *param_1 = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if (param_1[1] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  return;
}

/**
 * 重置资源数组元素
 * @param param_1 资源数组指针
 * 
 * 该函数重置资源数组中的元素，清理相关资源。
 */
void reset_resource_array_element(undefined8 *param_1)
{
  if (param_1[4] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  *param_1 = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if (param_1[1] != 0) {
    // 警告：子函数不返回
    deallocate_resource_memory();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &GLOBAL_RESOURCE_CLEANUP_HANDLER;
  return;
}

/**
 * 清理资源块
 * @param param_1 资源块管理结构
 * 
 * 该函数清理资源块，遍历并清理所有资源。
 */
void cleanup_resource_block(longlong *param_1)
{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x548) {
    cleanup_single_resource(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
  // 警告：子函数不返回
  deallocate_resource_memory();
}

/**
 * 执行资源清理操作
 * @param param_1 资源上下文
 * @param param_2 清理参数
 * @param param_3 清理参数
 * @param param_4 清理参数
 * 
 * 该函数执行资源的清理操作，包括销毁互斥锁和清理各个资源层级。
 */
void execute_resource_cleanup(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  destroy_mutex_in_place();
  post_init_cleanup(param_1 + 0xf0, *(undefined8 *)(param_1 + 0x100), param_3, param_4, uVar1);
  post_init_cleanup(param_1 + 0xc0, *(undefined8 *)(param_1 + 0xd0));
  post_init_cleanup(param_1 + 0x90, *(undefined8 *)(param_1 + 0xa0));
  cleanup_resource_range(param_1 + 0x60, *(undefined8 *)(param_1 + 0x70));
  validate_and_system_cleanup(param_1 + 0x30, *(undefined8 *)(param_1 + 0x40));
  cleanup_resource_range(param_1, *(undefined8 *)(param_1 + 0x10));
  return;
}

/**
 * 执行资源范围清理
 * @param param_1 资源上下文
 * @param param_2 清理参数
 * @param param_3 清理参数
 * @param param_4 清理参数
 * 
 * 该函数执行指定范围内的资源清理操作。
 */
void cleanup_resource_range(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  cleanup_resource_range(param_1, *(undefined8 *)(param_1 + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}

/**
 * 执行资源状态清理
 * @param param_1 资源上下文
 * @param param_2 清理参数
 * @param param_3 清理参数
 * @param param_4 清理参数
 * 
 * 该函数执行资源状态的清理操作。
 */
void cleanup_resource_state(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  cleanup_resource_range(param_1, *(undefined8 *)(param_1 + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}

/**
 * 调用资源函数
 * @param param_1 调用参数
 * @param param_2 函数指针
 * 
 * 该函数调用指定的资源函数。
 */
void call_resource_function(undefined8 param_1, undefined8 *param_2)
{
  (*(code *)*param_2)();
  return;
}

// 警告：移除不可达的代码块 (ram,0x00018017747d)
// 警告：移除不可达的代码块 (ram,0x000180177a18)
// 警告：移除不可达的代码块 (ram,0x000180177a22)
// 警告：移除不可达的代码块 (ram,0x000180177a2e)
// 警告：移除不可达的代码块 (ram,0x000180177a35)
// 警告：移除不可达的代码块 (ram,0x000180177581)
// 警告：移除不可达的代码块 (ram,0x000180177590)
// 警告：移除不可达的代码块 (ram,0x00018017759c)
// 警告：移除不可达的代码块 (ram,0x0001801775a3)
// 警告：移除不可达的代码块 (ram,0x0001801775b3)
// 警告：移除不可达的代码块 (ram,0x0001801775c0)
// 警告：移除不可达的代码块 (ram,0x0001801775cc)
// 警告：移除不可达的代码块 (ram,0x0001801775d3)
// 警告：移除不可达的代码块 (ram,0x000180177263)
// 警告：移除不可达的代码块 (ram,0x000180177296)
// 警告：移除不可达的代码块 (ram,0x00018017726a)
// 警告：移除不可达的代码块 (ram,0x000180177274)
// 警告：移除不可达的代码块 (ram,0x000180177280)
// 警告：移除不可达的代码块 (ram,0x000180177287)
// 警告：移除不可达的代码块 (ram,0x000180177290)
// 警告：移除不可达的代码块 (ram,0x000180177298)
// 警告：移除不可达的代码块 (ram,0x00018017753a)
// 警告：移除不可达的代码块 (ram,0x000180177540)
// 警告：移除不可达的代码块 (ram,0x000180177550)
// 警告：移除不可达的代码块 (ram,0x00018017755c)
// 警告：移除不可达的代码块 (ram,0x000180177563)
// 警告：移除不可达的代码块 (ram,0x0001801772c2)
// 警告：移除不可达的代码块 (ram,0x0001801772d0)
// 警告：移除不可达的代码块 (ram,0x0001801772dc)
// 警告：移除不可达的代码块 (ram,0x0001801772e3)
// 警告：移除不可达的代码块 (ram,0x00018017764c)
// 警告：移除不可达的代码块 (ram,0x00018017749a)
// 警告：移除不可达的代码块 (ram,0x0001801774a8)
// 警告：移除不可达的代码块 (ram,0x0001801774aa)
// 警告：移除不可达的代码块 (ram,0x000180176fc3)
// 警告：移除不可达的代码块 (ram,0x000180177722)
// 警告：移除不可达的代码块 (ram,0x00018017729d)
// 警告：移除不可达的代码块 (ram,0x00018017766b)
// 警告：移除不可达的代码块 (ram,0x000180177677)
// 警告：移除不可达的代码块 (ram,0x000180177679)
// 警告：移除不可达的代码块 (ram,0x00018017739f)
// 警告：移除不可达的代码块 (ram,0x0001801773a6)
// 警告：移除不可达的代码块 (ram,0x0001801773b0)
// 警告：移除不可达的代码块 (ram,0x0001801773bc)
// 警告：移除不可达的代码块 (ram,0x0001801773c3)
// 警告：移除不可达的代码块 (ram,0x00018017731b)
// 警告：移除不可达的代码块 (ram,0x000180177321)
// 警告：移除不可达的代码块 (ram,0x000180177330)
// 警告：移除不可达的代码块 (ram,0x00018017733c)
// 警告：移除不可达的代码块 (ram,0x000180177343)
// 警告：移除不可达的代码块 (ram,0x00018017734b)
// 警告：移除不可达的代码块 (ram,0x000180177356)
// 警告：移除不可达的代码块 (ram,0x000180177360)
// 警告：移除不可达的代码块 (ram,0x00018017736c)
// 警告：移除不可达的代码块 (ram,0x000180177373)
// 警告：移除不可达的代码块 (ram,0x00018017737b)
// 警告：移除不可达的代码块 (ram,0x000180177385)
// 警告：移除不可达的代码块 (ram,0x0001801773cb)
// 警告：移除不可达的代码块 (ram,0x000180177381)
// 警告：移除不可达的代码块 (ram,0x0001801773cd)
// 警告：移除不可达的代码块 (ram,0x0001801773d6)
// 警告：移除不可达的代码块 (ram,0x0001801773da)
// 警告：移除不可达的代码块 (ram,0x0001801773e4)
// 警告：移除不可达的代码块 (ram,0x0001801773eb)
// 警告：移除不可达的代码块 (ram,0x000180177400)
// 警告：移除不可达的代码块 (ram,0x00018017740c)
// 警告：移除不可达的代码块 (ram,0x000180177413)
// 警告：移除不可达的代码块 (ram,0x00018017741e)
// 警告：移除不可达的代码块 (ram,0x000180177417)
// 警告：移除不可达的代码块 (ram,0x000180177420)
// 警告：以'_'开头的全局变量与同一地址处的较小符号重叠