#include "TaleWorlds.Native.Split.h"

// 03_rendering_part025.c - 渲染系统资源清理模块 - 2个函数

// 函数别名定义
#define cleanup_rendering_resource_array FUN_18027f4d0
#define cleanup_rendering_resource_array_alt FUN_18027f4f0

/**
 * 清理渲染资源数组
 * 清理渲染资源数组中的所有资源，包括内存释放和资源销毁
 * 
 * @param param_1 资源数组控制块指针
 */
void cleanup_rendering_resource_array(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  // 获取资源数组信息
  uVar3 = *(ulonglong *)(param_1 + 0x10);  // 数组元素数量
  lVar1 = *(longlong *)(param_1 + 8);      // 数组基地址
  uVar4 = 0;
  
  // 遍历数组元素
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      // 检查资源是否有效
      if (lVar2 != 0) {
        FUN_180285080();
        // 释放资源内存（此函数不返回）
        FUN_18064e900(lVar2);
      }
      // 清空数组元素指针
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  
  // 重置数组状态
  *(undefined8 *)(param_1 + 0x18) = 0;
  
  // 检查是否需要清理数组本身
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
    // 清理数组内存（此函数不返回）
    FUN_18064e900();
  }
  return;
}

/**
 * 清理渲染资源数组（替代版本）
 * 清理渲染资源数组中的所有资源，包括内存释放和资源销毁
 * 此函数为cleanup_rendering_resource_array的替代实现
 * 
 * @param param_1 资源数组控制块指针
 */
void cleanup_rendering_resource_array_alt(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  // 获取资源数组信息
  uVar3 = *(ulonglong *)(param_1 + 0x10);  // 数组元素数量
  lVar1 = *(longlong *)(param_1 + 8);      // 数组基地址
  uVar4 = 0;
  
  // 遍历数组元素
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      // 检查资源是否有效
      if (lVar2 != 0) {
        FUN_180285080();
        // 释放资源内存（此函数不返回）
        FUN_18064e900(lVar2);
      }
      // 清空数组元素指针
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  
  // 重置数组状态
  *(undefined8 *)(param_1 + 0x18) = 0;
  
  // 检查是否需要清理数组本身
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
    // 清理数组内存（此函数不返回）
    FUN_18064e900();
  }
  return;
}


// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

