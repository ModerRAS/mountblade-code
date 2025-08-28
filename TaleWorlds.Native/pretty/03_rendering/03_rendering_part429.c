/**
 * @file 03_rendering_part429.c
 * @brief 渲染系统高级资源管理和清理模块
 * 
 * 本模块是渲染系统的一部分，主要负责：
 * - 渲染系统高级资源管理和清理
 * - 内存分配和释放
 * - 对象生命周期管理
 * - 系统资源回收
 * - 渲染系统状态维护
 * 
 * 该文件作为渲染系统的一个子模块，提供了高级渲染资源管理的核心支持。
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author 反编译代码美化处理
 */

#include "TaleWorlds.Native.Split.h"

/* ============================================================================
 * 渲染系统高级资源管理和清理常量定义
 * ============================================================================ */

/**
 * @brief 渲染系统高级资源管理和清理接口
 * @details 定义渲染系统高级资源管理和清理的参数和接口函数
 * 
 * 功能：
 * - 处理渲染系统高级资源管理
 * - 管理渲染系统内存分配
 * - 控制渲染对象生命周期
 * - 清理和回收渲染资源
 * - 维护渲染系统状态
 * 
 * @note 该文件作为渲染系统的子模块，提供高级渲染资源管理支持
 */

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 渲染系统高级资源清理器
#define RenderingSystemAdvancedResourceCleaner FUN_18049f820

// 渲染系统内存管理器
#define RenderingSystemMemoryManager FUN_18049f8f0

// 渲染系统对象生命周期管理器
#define RenderingSystemObjectLifecycleManager FUN_18049f9c0

// 渲染系统资源回收器
#define RenderingSystemResourceRecycler FUN_18049fa90

// 渲染系统状态维护器
#define RenderingSystemStateManager FUN_18049fb60

// 渲染系统高级清理处理器
#define RenderingSystemAdvancedCleanupProcessor FUN_18049fc30

// 渲染系统内存释放器
#define RenderingSystemMemoryReleaser FUN_18049fd00

/* ============================================================================
 * 核心函数实现
 * ============================================================================ */

/**
 * @brief 渲染系统高级资源清理器
 * @details 负责清理和释放渲染系统的高级资源
 * 
 * 功能：
 * - 遍历和清理渲染系统资源数组
 * - 释放内存和对象引用
 * - 处理资源生命周期
 * - 维护系统状态一致性
 * - 执行深度清理操作
 * 
 * @note 这是渲染系统资源管理的核心函数
 */
void FUN_18049f820(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_1804e5f80(&DAT_180c95ed0);
  uVar4 = 0;
  uVar6 = uVar4;
  if ((_DAT_180c95ed8 - _DAT_180c95ed0) / 0x68 != 0) {
    do {
      lVar2 = _DAT_180c95ed0;
      puVar1 = *(undefined8 **)(_DAT_180c95ed0 + 0x18 + uVar4);
      if (puVar1 != (undefined8 *)0x0) {
        lVar3 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
      }
      *(undefined8 *)(lVar2 + 0x18 + uVar4) = 0;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x68;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)((_DAT_180c95ed8 - _DAT_180c95ed0) / 0x68)
            );
  }
  uVar6 = _DAT_180c91d30;
  lVar2 = _DAT_180c91d28;
  uVar4 = 0;
  if (_DAT_180c91d30 != 0) {
    do {
      lVar3 = *(longlong *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x18) == 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();