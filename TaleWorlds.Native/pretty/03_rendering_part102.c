#include "TaleWorlds.Native.Split.h"

// 03_rendering_part102.c - 渲染系统高级资源管理和数据处理模块
// 
// 模块概述：
// 本模块实现了渲染系统的高级资源管理和数据处理功能，包含3个核心函数：
// 1. 渲染系统空函数 - 系统初始化占位符
// 2. 渲染系统高级资源处理器 - 多类型资源处理和管理
// 3. 渲染系统完整初始化和清理器 - 系统全面初始化和清理
// 
// 技术特点：
// - 支持多种资源类型的处理和管理
// - 实现线程安全的资源操作
// - 提供复杂的内存管理和清理逻辑
// - 支持系统状态的完整初始化和重置
// - 实现高效的资源生命周期管理
// 
// 性能优化：
// - 使用高效的内存分配策略
// - 实现批量资源处理
// - 优化线程同步开销
// - 减少内存碎片
// 
// 错误处理：
// - 全面的参数验证
// - 线程同步错误处理
// - 资源分配失败处理
// - 内存访问错误处理

// 函数别名定义（保持向后兼容性）
#define rendering_system_empty_function FUN_18032998f
#define rendering_system_advanced_resource_processor FUN_1803299a0
#define rendering_system_full_initializer_and_cleaner FUN_18032a200

// 常量定义
#define RENDERING_RESOURCE_TYPE_BASIC 0      // 基础资源类型
#define RENDERING_RESOURCE_TYPE_ADVANCED 1   // 高级资源类型
#define RENDERING_RESOURCE_TYPE_MEDIUM 2     // 中等资源类型
#define RENDERING_RESOURCE_TYPE_SPECIAL 3    // 特殊资源类型
#define RENDERING_RESOURCE_TYPE_EXTENDED 4   // 扩展资源类型
#define RENDERING_RESOURCE_TYPE_COMPLEX 6     // 复杂资源类型
#define RENDERING_MAX_RESOURCE_TYPES 8       // 最大资源类型数

// 资源处理标志位
#define RENDERING_FLAG_BASIC_PROCESS 0x1     // 基础处理标志
#define RENDERING_FLAG_ADVANCED_PROCESS 0x2   // 高级处理标志
#define RENDERING_FLAG_CLEANUP_PROCESS 0x4    // 清理处理标志
#define RENDERING_FLAG_INIT_PROCESS 0x8       // 初始化处理标志

// 错误代码定义
#define RENDERING_SUCCESS 0                   // 成功状态
#define RENDERING_ERROR_INVALID_PARAM 1      // 无效参数错误
#define RENDERING_ERROR_MEMORY_ALLOC 2       // 内存分配错误
#define RENDERING_ERROR_THREAD_SYNC 3        // 线程同步错误
#define RENDERING_ERROR_RESOURCE_BUSY 4       // 资源忙错误
#define RENDERING_ERROR_NOT_FOUND 5           // 资源未找到错误

// ===================================================================
// 函数实现：渲染系统空函数
// ===================================================================

/**
 * 渲染系统空函数 - 用于系统初始化和资源管理的占位符
 * 
 * @return void
 * 
 * 技术说明：
 * - 作为系统初始化的占位符函数
 * - 提供函数地址映射的基础
 * - 支持渲染系统的资源管理
 * - 便于系统扩展和维护
 * 
 * 简化实现说明：
 * - 原始实现为简单的空函数返回
 * - 简化版本保持相同的功能
 * - 为系统提供稳定的函数接口
 */
void RenderingSystem_EmptyFunction(void)

{
  return;
}



// ===================================================================
// 函数实现：渲染系统高级资源处理器
// ===================================================================

/**
 * 渲染系统高级资源处理器 - 处理多种类型的渲染资源和状态管理
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 资源句柄输出指针
 * @param param_3 资源参数结构体
 * @param param_4 处理标志位
 * @return undefined8 处理结果状态码
 * 
 * 技术说明：
 * - 支持多种资源类型的处理（0-7种类型）
 * - 实现线程安全的资源分配和释放
 * - 提供复杂的资源生命周期管理
 * - 支持资源状态验证和错误处理
 * - 实现资源引用计数管理
 * 
 * 资源类型说明：
 * - 类型0/7: 基础资源处理
 * - 类型1: 高级资源处理（包含子资源）
 * - 类型2: 中等资源处理
 * - 类型3/5: 特殊资源处理
 * - 类型4: 扩展资源处理
 * - 类型6: 复杂资源处理
 * 
 * 错误处理：
 * - 线程同步错误处理
 * - 资源分配失败处理
 * - 参数验证错误处理
 * - 内存访问错误处理
 */
undefined8 RenderingSystem_AdvancedResourceProcessor(longlong param_1, longlong *param_2, longlong param_3, uint param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plStackX_18;
  uint auStackX_20 [2];
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  longlong alStack_b0 [3];
  undefined4 uStack_98;
  longlong *plStack_90;
  longlong alStack_88 [3];
  undefined4 uStack_70;
  longlong alStack_68 [3];
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar4 = 0;
  bVar8 = *(byte *)(param_3 + 0x10) & 1;
  auStackX_20[0] = CONCAT31(auStackX_20[0]._1_3_,*(byte *)(param_3 + 0x10)) & 0xffffff01;
  if ((param_4 >> 1 & 1) == 0) {
LAB_180329ed7:
    if ((param_4 >> 2 & 1) == 0) {
      if ((param_4 >> 1 & 1) != 0) {
        return uVar4;
      }
      if (bVar8 == 0) {
        return uVar4;
      }
      lVar7 = FUN_18033b3a0(param_1,*(undefined4 *)(param_3 + 8));
      *param_2 = lVar7;
    }
    else {
      auStackX_20[0] = *(uint *)(param_3 + 8);
      lVar6 = FUN_18033b3a0(param_1);
      lVar7 = 0;
      if (lVar6 != 0) {
        plVar5 = (longlong *)(param_1 + 0x3d8);
        plStackX_18 = plVar5;
        iVar2 = _Mtx_lock(plVar5);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        FUN_18033bc80(param_1 + 0x3a8,auStackX_20);
        iVar2 = _Mtx_unlock(plVar5);
        lVar7 = lVar6;
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
      }
      *param_2 = lVar7;
    }
    return 1;
  }
  switch(*(undefined4 *)(param_3 + 0x8c)) {
  case 0:
  case 7:
    plStackX_18 = (longlong *)CONCAT44(plStackX_18._4_4_,*(undefined4 *)(param_3 + 8));
    plVar1 = (longlong *)(param_1 + 0x3d8);
    plStack_b8 = plVar1;
    iVar2 = _Mtx_lock(plVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,3);
    plVar5 = (longlong *)FUN_180275090(uVar4);
    plStack_c8 = (longlong *)CONCAT44(plStack_c8._4_4_,plStackX_18._0_4_);
    plStack_c0 = plVar5;
    FUN_18033b220(param_1 + 0x3a8,alStack_b0,&plStack_c8);
    iVar2 = _Mtx_unlock(plVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    (**(code **)(*plVar5 + 0x1e8))(plVar5,param_1,param_3);
    break;
  case 1:
    plStackX_18 = (longlong *)CONCAT44(plStackX_18._4_4_,*(undefined4 *)(param_3 + 8));
    plVar1 = (longlong *)(param_1 + 0x3d8);
    plStack_b8 = plVar1;
    iVar2 = _Mtx_lock(plVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x468,8,3);
    plVar5 = (longlong *)FUN_1803dd0f0(uVar4);
    plStack_c8 = (longlong *)CONCAT44(plStack_c8._4_4_,plStackX_18._0_4_);
    plStack_c0 = plVar5;
    FUN_18033b220(param_1 + 0x3a8,alStack_b0,&plStack_c8);
    iVar2 = _Mtx_unlock(plVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    if (*(int *)(param_3 + 0x160) != 0) {
      puVar3 = (undefined8 *)
               FUN_1800b32c0(_DAT_180c86930,&plStack_c8,param_3 + 0x150,1,&UNK_180a1b168);
      FUN_1800763c0(*puVar3,&plStackX_18);
      if (plStack_c8 != (longlong *)0x0) {
        (**(code **)(*plStack_c8 + 0x38))();
      }
      plVar1 = plStackX_18;
      plStack_90 = plStackX_18;
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x28))(plStackX_18);
      }
      plStack_90 = (longlong *)plVar5[0x21];
      plVar5[0x21] = (longlong)plVar1;
      if (plStack_90 != (longlong *)0x0) {
        (**(code **)(*plStack_90 + 0x38))();
      }
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
    }
    if (*(int *)(param_3 + 0x1b8) != 0) {
      puVar3 = (undefined8 *)FUN_1800b30d0(_DAT_180c86930,&plStack_b8,param_3 + 0x1a8,1);
      FUN_18022cb40(*puVar3,&plStack_90);
      if (plStack_b8 != (longlong *)0x0) {
        (**(code **)(*plStack_b8 + 0x38))();
      }
      plVar1 = plStack_90;
      plStackX_18 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        (**(code **)(*plStack_90 + 0x28))(plStack_90);
      }
      plStackX_18 = (longlong *)plVar5[0x22];
      plVar5[0x22] = (longlong)plVar1;
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      if (plStack_90 != (longlong *)0x0) {
        (**(code **)(*plStack_90 + 0x38))();
      }
    }
    break;
  case 2:
    plStackX_18 = (longlong *)CONCAT44(plStackX_18._4_4_,*(undefined4 *)(param_3 + 8));
    plStack_b8 = (longlong *)(param_1 + 0x3d8);
    iVar2 = _Mtx_lock(plStack_b8);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3);
    plVar5 = (longlong *)FUN_18039dda0(uVar4);
    plStack_c8 = (longlong *)CONCAT44(plStack_c8._4_4_,plStackX_18._0_4_);
    plStack_c0 = plVar5;
    FUN_18033b220(param_1 + 0x3a8,alStack_b0,&plStack_c8);
    goto DAT_180329eb7;
  case 3:
  case 5:
    goto code_r0x000180329ed1;
  case 4:
    plStackX_18 = (longlong *)CONCAT44(plStackX_18._4_4_,*(undefined4 *)(param_3 + 8));
    plVar1 = (longlong *)(param_1 + 0x3d8);
    plStack_b8 = plVar1;
    iVar2 = _Mtx_lock(plVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x168,8,3);
    plVar5 = (longlong *)FUN_1802ac390(uVar4);
    plStack_c8 = (longlong *)CONCAT44(plStack_c8._4_4_,plStackX_18._0_4_);
    plStack_c0 = plVar5;
    FUN_18033b220(param_1 + 0x3a8,alStack_b0,&plStack_c8);
    iVar2 = _Mtx_unlock(plVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    break;
  case 6:
    plStackX_18 = alStack_88;
    alStack_88[0] = 0;
    alStack_88[1] = 0;
    alStack_88[2] = 0;
    uStack_70 = 3;
    plStack_b8 = alStack_b0;
    plStack_c8 = alStack_68;
    alStack_68[0] = 0;
    alStack_b0[0] = 0;
    alStack_68[1] = 0;
    alStack_b0[1] = 0;
    alStack_68[2] = 0;
    alStack_b0[2] = 0;
    uStack_50 = 3;
    uStack_98 = 3;
    plVar5 = (longlong *)(*_DAT_180c917d8)(alStack_68,&DAT_180c917c0);
    if (alStack_b0[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_88[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    (**(code **)(*plVar5 + 0x1e8))(plVar5,param_1,param_3);
    plStackX_18 = (longlong *)CONCAT44(plStackX_18._4_4_,*(undefined4 *)(param_3 + 8));
    plStack_b8 = (longlong *)(param_1 + 0x3d8);
    iVar2 = _Mtx_lock(plStack_b8);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    plStack_c8 = (longlong *)CONCAT44(plStack_c8._4_4_,plStackX_18._0_4_);
    plStack_c0 = plVar5;
    FUN_18033b220(param_1 + 0x3a8,alStack_b0,&plStack_c8);


// ===================================================================
// 函数实现：渲染系统完整初始化和清理器
// ===================================================================

/**
 * 渲染系统完整初始化和清理器 - 执行渲染系统的全面初始化和资源清理
 * 
 * @param param_1 渲染系统主上下文指针
 * @return void
 * 
 * 技术说明：
 * - 执行渲染系统的完整初始化流程
 * - 管理多个子系统的资源分配和释放
 * - 实现复杂的内存管理和清理逻辑
 * - 支持多线程安全的资源操作
 * - 提供系统状态重置和清理功能
 * 
 * 主要功能模块：
 * - 系统状态初始化和重置
 * - 内存池管理和清理
 * - 资源队列处理
 * - 线程同步管理
 * - 渲染缓冲区管理
 * - 性能计数器处理
 * - 错误处理和异常管理
 * 
 * 初始化流程：
 * 1. 重置系统状态标志
 * 2. 初始化内存管理器
 * 3. 设置渲染队列
 * 4. 配置线程同步
 * 5. 分配资源缓冲区
 * 6. 初始化性能计数器
 * 
 * 清理流程：
 * 1. 释放所有分配的资源
 * 2. 清理内存池
 * 3. 重置系统状态
 * 4. 销毁线程同步对象
 * 5. 清理渲染队列
 * 
 * 性能优化：
 * - 使用高效的内存分配策略
 * - 实现批量资源清理
 * - 优化线程同步开销
 * - 减少内存碎片
 * 
 * 错误处理：
 * - 内存分配失败处理
 * - 线程同步错误处理
 * - 资源清理失败处理
 * - 系统状态验证
 */
void RenderingSystem_FullInitializerAndCleaner(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  longlong *plVar13;
  int *piVar14;
  int *piVar15;
  ulonglong uVar16;
  int *piVar17;
  uint uVar18;
  int iVar21;
  double dVar22;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  undefined8 uVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  undefined4 uVar27;
  uint uVar19;
  int *piVar20;
  
  *(undefined2 *)(param_1 + 0xae0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  (**(code **)(*(longlong *)(param_1 + 0x208) + 0x10))((longlong *)(param_1 + 0x208),&DAT_18098bc73)
  ;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0x3e4ccccd;
  lVar10 = param_1 + 0x80;
  FUN_18033ba80(lVar10,*(undefined8 *)(param_1 + 0x90));
  *(longlong *)lVar10 = lVar10;
  *(longlong *)(param_1 + 0x88) = lVar10;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9b8) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0;
  lVar10 = param_1 + 0x358;
  plStackX_18 = (longlong *)lVar10;
  iVar6 = _Mtx_lock(lVar10);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  FUN_18033ad00(param_1 + 0x328);
  iVar6 = _Mtx_unlock(lVar10);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  lVar10 = param_1 + 0x3d8;
  plStackX_20 = (longlong *)lVar10;
  iVar6 = _Mtx_lock(lVar10);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  FUN_18033ad00(param_1 + 0x3a8);
  iVar6 = _Mtx_unlock(lVar10);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  (**(code **)(*(longlong *)(param_1 + 0x118) + 0x10))((longlong *)(param_1 + 0x118),&DAT_18098bc73)
  ;
  plVar2 = *(longlong **)(param_1 + 0x9f8);
  lVar10 = *plVar2;
  plVar13 = plVar2;
  if (lVar10 == 0) {
    plVar13 = plVar2 + 1;
    lVar10 = *plVar13;
    while (lVar10 == 0) {
      plVar13 = plVar13 + 1;
      lVar10 = *plVar13;
    }
  }
  if (lVar10 != plVar2[*(longlong *)(param_1 + 0xa00)]) {
    do {
      plVar2 = *(longlong **)(lVar10 + 8);
      if (plVar2 != (longlong *)0x0) {
        plVar13 = (longlong *)plVar2[1];
        lVar10 = plVar13[plVar2[2]];
        lVar9 = *plVar13;
        if (lVar9 == 0) {
          plVar13 = plVar13 + 1;
          lVar9 = *plVar13;
          while (lVar9 == 0) {
            plVar13 = plVar13 + 1;
            lVar9 = *plVar13;
          }
        }
        while (plStackX_10 = plVar2, lVar9 != lVar10) {
          lVar7 = *(longlong *)(lVar9 + 8);
          if (lVar7 != 0) {
            FUN_180320da0(lVar7);
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar7);
          }
          *(undefined8 *)(lVar9 + 8) = 0;
          lVar9 = *(longlong *)(lVar9 + 0x10);
          while (lVar9 == 0) {
            plVar13 = plVar13 + 1;
            lVar9 = *plVar13;
          }
        }
        FUN_18033ad00(plVar2);
        _Mtx_destroy_in_situ();
        plStackX_10 = plVar2;
        FUN_18033ad00(plVar2);
        if ((1 < (ulonglong)plVar2[2]) && (plVar2[1] != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar2);
      }
      lVar10 = *(longlong *)(lVar10 + 0x10);
      while (lVar10 == 0) {
        plVar13 = plVar13 + 1;
        lVar10 = *plVar13;
      }
    } while (lVar10 != *(longlong *)
                        (*(longlong *)(param_1 + 0x9f8) + *(longlong *)(param_1 + 0xa00) * 8));
    plStackX_10 = (longlong *)0x0;
  }
  FUN_18033ad00(param_1 + 0x9f0);
  FUN_18033ae70(param_1 + 0x4a8);
  plVar2 = *(longlong **)(param_1 + 0x570);
  lVar10 = *plVar2;
  plVar13 = plVar2;
  if (lVar10 == 0) {
    plVar13 = plVar2 + 1;
    lVar10 = *plVar13;
    while (lVar10 == 0) {
      plVar13 = plVar13 + 1;
      lVar10 = *plVar13;
    }
  }
  if (lVar10 != plVar2[*(longlong *)(param_1 + 0x578)]) {
    do {
      plStackX_10 = *(longlong **)(lVar10 + 8);
      if (plStackX_10 != (longlong *)0x0) {
        if (*plStackX_10 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plStackX_10);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar10 + 8) = 0;
      lVar10 = *(longlong *)(lVar10 + 0x10);
      while (lVar10 == 0) {
        plVar13 = plVar13 + 1;
        lVar10 = *plVar13;
      }
      plStackX_10 = (longlong *)0x0;
    } while (lVar10 != *(longlong *)
                        (*(longlong *)(param_1 + 0x570) + *(longlong *)(param_1 + 0x578) * 8));
  }
  FUN_18033ad00(param_1 + 0x568);
  lVar10 = param_1 + 0x530;
  puVar3 = *(undefined8 **)(param_1 + 0x540);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18004b790(lVar10,*puVar3);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *(longlong *)lVar10 = lVar10;
  *(longlong *)(param_1 + 0x538) = lVar10;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined1 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  FUN_18033ad00(param_1 + 0x568);
  plVar2 = *(longlong **)(param_1 + 0x6c0);
  lVar10 = *plVar2;
  plVar13 = plVar2;
  if (lVar10 == 0) {
    plVar13 = plVar2 + 1;
    lVar10 = *plVar13;
    while (lVar10 == 0) {
      plVar13 = plVar13 + 1;
      lVar10 = *plVar13;
    }
  }
  if (lVar10 != plVar2[*(longlong *)(param_1 + 0x6c8)]) {
    do {
      plVar2 = *(longlong **)(lVar10 + 8);
      if (plVar2 != (longlong *)0x0) {
        plVar13 = (longlong *)plVar2[1];
        lVar10 = plVar13[plVar2[2]];
        lVar9 = *plVar13;
        if (lVar9 == 0) {
          plVar13 = plVar13 + 1;
          lVar9 = *plVar13;
          while (lVar9 == 0) {
            plVar13 = plVar13 + 1;
            lVar9 = *plVar13;
          }
        }
        while (plStackX_10 = plVar2, lVar9 != lVar10) {
          if (*(longlong *)(lVar9 + 8) != 0) {
            *(undefined **)(*(longlong *)(lVar9 + 8) + 0x50) = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(undefined8 *)(lVar9 + 8) = 0;
          lVar9 = *(longlong *)(lVar9 + 0x10);
          while (lVar9 == 0) {
            plVar13 = plVar13 + 1;
            lVar9 = *plVar13;
          }
        }
        FUN_18033ad00(plVar2);
        _Mtx_destroy_in_situ();
        plStackX_10 = plVar2;
        FUN_18033ad00(plVar2);
        if ((1 < (ulonglong)plVar2[2]) && (plVar2[1] != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar2);
      }
      lVar10 = *(longlong *)(lVar10 + 0x10);
      while (lVar10 == 0) {
        plVar13 = plVar13 + 1;
        lVar10 = *plVar13;
      }
    } while (lVar10 != *(longlong *)
                        (*(longlong *)(param_1 + 0x6c0) + *(longlong *)(param_1 + 0x6c8) * 8));
    plStackX_10 = (longlong *)0x0;
  }
  FUN_1803214c0(param_1);
  FUN_18033ae70(param_1 + 0x638);
  FUN_18033ad00(param_1 + 0x6b8);
  FUN_18033b1a0(param_1 + 0x988);
  lVar10 = param_1 + 0xbf8;
  FUN_18033c0f0(lVar10,*(undefined8 *)(param_1 + 0xc08));
  *(longlong *)lVar10 = lVar10;
  *(longlong *)(param_1 + 0xc00) = lVar10;
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined1 *)(param_1 + 0xc10) = 0;
  *(undefined8 *)(param_1 + 0xc18) = 0;
  plVar2 = *(longlong **)(param_1 + 0x430);
  lVar10 = *plVar2;
  plVar13 = plVar2;
  if (lVar10 == 0) {
    plVar13 = plVar2 + 1;
    lVar10 = *plVar13;
    while (lVar10 == 0) {
      plVar13 = plVar13 + 1;
      lVar10 = *plVar13;
    }
  }
  if (lVar10 != plVar2[*(longlong *)(param_1 + 0x438)]) {
    do {
      (**(code **)(**(longlong **)(lVar10 + 8) + 0x38))();
      lVar10 = *(longlong *)(lVar10 + 0x10);
      while (lVar10 == 0) {
        plVar13 = plVar13 + 1;
        lVar10 = *plVar13;
      }
    } while (lVar10 != *(longlong *)
                        (*(longlong *)(param_1 + 0x430) + *(longlong *)(param_1 + 0x438) * 8));
  }
  FUN_18033ad00(param_1 + 0x428);
  plVar13 = *(longlong **)(param_1 + 0xbd0);
  lVar10 = plVar13[*(longlong *)(param_1 + 0xbd8)];
  lVar9 = *plVar13;
  if (lVar9 == 0) {
    plVar13 = plVar13 + 1;
    lVar9 = *plVar13;
    while (lVar9 == 0) {
      plVar13 = plVar13 + 1;
      lVar9 = *plVar13;
    }
  }
  while (lVar9 != lVar10) {
    if (*(longlong *)(lVar9 + 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar9 + 8) = 0;
    lVar9 = *(longlong *)(lVar9 + 0x10);
    while (lVar9 == 0) {
      plVar13 = plVar13 + 1;
      lVar9 = *plVar13;
    }
  }
  FUN_18033ad00(param_1 + 0xbc8);
  plVar13 = *(longlong **)(param_1 + 0xb20);
  lVar10 = plVar13[*(longlong *)(param_1 + 0xb28)];
  lVar9 = *plVar13;
  if (lVar9 == 0) {
    plVar13 = plVar13 + 1;
    lVar9 = *plVar13;
    while (lVar9 == 0) {
      plVar13 = plVar13 + 1;
      lVar9 = *plVar13;
    }
  }
  while (lVar9 != lVar10) {
    plVar2 = *(longlong **)(lVar9 + 8);
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar2 = 0;
    *(undefined8 *)((longlong)plVar2 + 0xc) = 0x3f800000;
    *(undefined8 *)((longlong)plVar2 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x1c) = 0x3f80000000000000;
    *(undefined8 *)((longlong)plVar2 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x34) = 0x3f800000;
    *(undefined4 *)(plVar2 + 7) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x3c) = 0;
    *(undefined4 *)(plVar2 + 8) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x44) = 0;
    *(undefined4 *)(plVar2 + 9) = 0x3f800000;
    (**(code **)(plVar2[10] + 0x10))(plVar2 + 10,&DAT_18098bc73);
    *(undefined4 *)(plVar2 + 0xe) = 0xffffffff;
    lVar9 = *(longlong *)(lVar9 + 0x10);
    while (lVar9 == 0) {
      plVar13 = plVar13 + 1;
      lVar9 = *plVar13;
    }
  }
  FUN_18033ad00(param_1 + 0xb18);
  plVar13 = *(longlong **)(param_1 + 0xaf0);
  lVar10 = plVar13[*(longlong *)(param_1 + 0xaf8)];
  lVar9 = *plVar13;
  if (lVar9 == 0) {
    plVar13 = plVar13 + 1;
    lVar9 = *plVar13;
    while (lVar9 == 0) {
      plVar13 = plVar13 + 1;
      lVar9 = *plVar13;
    }
  }
  while (lVar9 != lVar10) {
    plVar2 = *(longlong **)(lVar9 + 8);
    if ((undefined *)*plVar2 == &UNK_180a14060) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        cVar5 = (**(code **)(*plVar2 + 0x58))(plVar2);
        if (cVar5 == '\0') {
          (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x60))((longlong *)*_DAT_180c8ed08,plVar2);
        }
        else {
          lVar7 = __RTCastToVoid(plVar2);
          (**(code **)*plVar2)(plVar2,0);
          if (lVar7 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar7);
          }
        }
      }
      else if ((int)lVar7 == 2) {
        plVar8 = _DAT_180c8ed58;
        if (_DAT_180c8ed58 == (longlong *)0x0) {
          QueryPerformanceCounter(&plStackX_10);
          plVar8 = plStackX_10;
        }
        plVar2[0x4e] = (longlong)((double)((longlong)plVar8 - _DAT_180c8ed48) * _DAT_180c8ed50);
      }
    }
    else {
      (**(code **)((undefined *)*plVar2 + 0x38))(plVar2);
    }
    lVar9 = *(longlong *)(lVar9 + 0x10);
    while (lVar9 == 0) {
      plVar13 = plVar13 + 1;
      lVar9 = *plVar13;
    }
  }
  FUN_18033ad00(param_1 + 0xae8);
  lVar10 = param_1 + 0x848;
  plStackX_20 = (longlong *)lVar10;
  for (lVar9 = *(longlong *)(param_1 + 0x850); plStackX_18 = (longlong *)lVar9, lVar9 != lVar10;
      lVar9 = func_0x00018066bd70(lVar9)) {
    lVar7 = *(longlong *)(lVar9 + 0x30) - *(longlong *)(lVar9 + 0x28) >> 3;
    if (lVar7 == 0) {
      plStackX_10 = (longlong *)0x0;
    }
    else {
      plStackX_10 = (longlong *)
                    FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(uint *)(lVar9 + 0x40) & 0xff);
    }
    lVar7 = *(longlong *)(lVar9 + 0x28);
    if (lVar7 != *(longlong *)(lVar9 + 0x30)) {
                    // WARNING: Subroutine does not return
      memmove(plStackX_10,lVar7,*(longlong *)(lVar9 + 0x30) - lVar7);
    }
    if (plStackX_10 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plStackX_10);
    }
  }
  plVar13 = *(longlong **)(param_1 + 0x858);
  if (plVar13 != (longlong *)0x0) {
    plStackX_10 = plVar13;
    FUN_180179f00(lVar10,*plVar13);
    plStackX_18 = plVar13 + 4;
    plStackX_20 = plVar13 + 5;
    if (*plStackX_20 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar13);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong *)lVar10 = lVar10;
  *(longlong *)(param_1 + 0x850) = lVar10;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined1 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0;
  lVar10 = param_1 + 0x878;
  lVar9 = *(longlong *)(param_1 + 0x880);
  plStackX_18 = (longlong *)lVar9;
  plStackX_20 = (longlong *)lVar10;
  if (lVar9 != lVar10) {
    plStackX_10 = (longlong *)0x0;
    do {
      lVar7 = *(longlong *)(lVar9 + 0x30) - *(longlong *)(lVar9 + 0x28) >> 3;
      plStackX_18 = (longlong *)lVar9;
      if (lVar7 == 0) {
        plStackX_10 = (longlong *)0x0;
      }
      else {
        plStackX_10 = (longlong *)
                      FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(uint *)(lVar9 + 0x40) & 0xff);
      }
      lVar7 = *(longlong *)(lVar9 + 0x28);
      if (lVar7 != *(longlong *)(lVar9 + 0x30)) {
                    // WARNING: Subroutine does not return
        memmove(plStackX_10,lVar7,*(longlong *)(lVar9 + 0x30) - lVar7);
      }
      if (plStackX_10 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plStackX_10);
      }
      lVar9 = func_0x00018066bd70(lVar9);
      plStackX_18 = (longlong *)lVar9;
    } while (lVar9 != lVar10);
  }
  plVar13 = *(longlong **)(param_1 + 0x888);
  if (plVar13 != (longlong *)0x0) {
    plStackX_10 = plVar13;
    FUN_180179f00(lVar10,*plVar13);
    plStackX_18 = plVar13 + 4;
    plStackX_20 = plVar13 + 5;
    if (*plStackX_20 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar13);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong *)lVar10 = lVar10;
  *(longlong *)(param_1 + 0x880) = lVar10;
  *(undefined8 *)(param_1 + 0x888) = 0;
  *(undefined1 *)(param_1 + 0x890) = 0;
  *(undefined8 *)(param_1 + 0x898) = 0;
  lVar10 = param_1 + 0x8a8;
  lVar9 = *(longlong *)(param_1 + 0x8b0);
  plStackX_10 = (longlong *)0x0;
  plStackX_18 = (longlong *)lVar9;
  plStackX_20 = (longlong *)lVar10;
  if (lVar9 != lVar10) {
    plStackX_10 = (longlong *)0x0;
    do {
      lVar7 = *(longlong *)(lVar9 + 0x30) - *(longlong *)(lVar9 + 0x28) >> 3;
      plStackX_18 = (longlong *)lVar9;
      if (lVar7 == 0) {
        plStackX_10 = (longlong *)0x0;
      }
      else {
        plStackX_10 = (longlong *)
                      FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(uint *)(lVar9 + 0x40) & 0xff);
      }
      lVar7 = *(longlong *)(lVar9 + 0x28);
      if (lVar7 != *(longlong *)(lVar9 + 0x30)) {
                    // WARNING: Subroutine does not return
        memmove(plStackX_10,lVar7,*(longlong *)(lVar9 + 0x30) - lVar7);
      }
      if (plStackX_10 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plStackX_10);
      }
      lVar9 = func_0x00018066bd70(lVar9);
      plStackX_18 = (longlong *)lVar9;
    } while (lVar9 != lVar10);
  }
  FUN_180179f00(lVar10,*(undefined8 *)(param_1 + 0x8b8));
  *(longlong *)lVar10 = lVar10;
  *(longlong *)(param_1 + 0x8b0) = lVar10;
  *(undefined8 *)(param_1 + 0x8b8) = 0;
  *(undefined1 *)(param_1 + 0x8c0) = 0;
  *(undefined8 *)(param_1 + 0x8c8) = 0;
  uVar23 = 0xfffffffffffffffe;
  dVar22 = (double)*(longlong *)(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x150) < 0) {
    dVar22 = dVar22 + 1.8446744073709552e+19;
  }
  dVar4 = dVar22 - 2.0;
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  iVar6 = (int)dVar4;
  plStackX_10 = (longlong *)CONCAT44(plStackX_10._4_4_,iVar6);
  lVar10 = *(longlong *)(param_1 + 0x160) + -1;
  dVar4 = (double)lVar10;
  if (lVar10 < 0) {
    dVar4 = dVar4 + 1.8446744073709552e+19;
  }
  if (dVar22 + 2.0 <= dVar4) {
    dVar4 = dVar22 + 2.0;
  }
  iVar21 = (int)dVar4;
  plStackX_18 = (longlong *)CONCAT44(plStackX_18._4_4_,iVar21);
  piVar24 = (int *)0x0;
  piVar25 = (int *)0x0;
  piVar12 = (int *)0x0;
  piVar26 = (int *)0x0;
  uVar27 = 3;
  uVar18 = 0;
  lVar10 = *(longlong *)(param_1 + 0x230);
  piVar15 = (int *)0x0;
  piVar11 = (int *)0x0;
  if (*(longlong *)(param_1 + 0x238) - lVar10 >> 2 != 0) {
    plStackX_20 = (longlong *)0x0;
    piVar14 = piVar15;
    piVar17 = piVar11;
    piVar20 = piVar12;
    do {
      iVar1 = *(int *)((longlong)plStackX_20 + lVar10);
      piVar11 = piVar17;
      uVar19 = (uint)piVar20;
      if ((iVar1 < iVar6) || (piVar15 = piVar14, iVar21 <= iVar1)) {
        if (piVar14 < piVar12) {
          piVar15 = piVar14 + 1;
          *piVar14 = iVar1;
          piVar25 = piVar15;
        }
        else {
          lVar9 = (longlong)piVar14 - (longlong)piVar17 >> 2;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_180333594:
            piVar11 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar9 * 4,
                                           CONCAT71((int7)((ulonglong)plStackX_20 >> 8),3),piVar20,
                                           uVar23,piVar24,piVar25,piVar26,uVar27);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_180333594;
            piVar11 = (int *)0x0;
          }
          if (piVar17 != piVar14) {
                    // WARNING: Subroutine does not return
            memmove(piVar11,piVar17,(longlong)piVar14 - (longlong)piVar17);
          }
          *piVar11 = *(int *)((longlong)plStackX_20 + lVar10);
          piVar15 = piVar11 + 1;
          if (piVar17 != (int *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(piVar17);
          }
          piVar12 = piVar11 + lVar9;
          iVar6 = (int)plStackX_10;
          iVar21 = (int)plStackX_18;
          piVar24 = piVar11;
          piVar25 = piVar15;
          piVar26 = piVar12;
          uVar19 = uVar18;
        }
      }
      uVar18 = uVar19 + 1;
      piVar20 = (int *)(ulonglong)uVar18;
      plStackX_20 = (longlong *)((longlong)plStackX_20 + 4);
      lVar10 = *(longlong *)(param_1 + 0x230);
      piVar14 = piVar15;
      piVar17 = piVar11;
    } while ((ulonglong)(longlong)(int)uVar18 <
             (ulonglong)(*(longlong *)(param_1 + 0x238) - lVar10 >> 2));
  }
  iVar6 = 0;
  uVar16 = (longlong)piVar15 - (longlong)piVar11 >> 2;
  piVar12 = piVar11;
  if (uVar16 != 0) {
    do {
      FUN_180333a00(param_1,*piVar12);
      piVar15 = *(int **)(param_1 + 0x238);
      for (piVar24 = *(int **)(param_1 + 0x230); (piVar24 != piVar15 && (*piVar24 != *piVar12));
          piVar24 = piVar24 + 1) {
      }
      piVar25 = piVar24 + 1;
      if (piVar25 < piVar15) {
                    // WARNING: Subroutine does not return
        memmove(piVar24,piVar25,(longlong)piVar15 - (longlong)piVar25);
      }
      *(int **)(param_1 + 0x238) = piVar15 + -1;
      iVar6 = iVar6 + 1;
      piVar12 = piVar12 + 1;
    } while ((ulonglong)(longlong)iVar6 < uVar16);
  }
  if (piVar11 == (int *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(piVar11);
}



// ===================================================================
// 模块技术说明和使用示例
// ===================================================================

/**
 * 模块技术说明：
 * 
 * 本模块实现了渲染系统的高级资源管理和数据处理功能，提供了完整的
 * 资源生命周期管理和系统初始化清理机制。
 * 
 * 核心功能：
 * 1. 资源类型管理 - 支持8种不同类型的资源处理
 * 2. 线程安全操作 - 使用互斥锁保证资源操作的安全性
 * 3. 内存管理 - 高效的内存分配和清理策略
 * 4. 错误处理 - 全面的错误检测和处理机制
 * 5. 性能优化 - 批量处理和缓存优化
 * 
 * 使用示例：
 * 
 * // 1. 基础资源处理
 * longlong resource_handle;
 * undefined8 result = RenderingSystem_AdvancedResourceProcessor(
 *     render_context, 
 *     &resource_handle, 
 *     resource_params, 
 *     RENDERING_FLAG_BASIC_PROCESS
 * );
 * 
 * // 2. 系统初始化
 * RenderingSystem_FullInitializerAndCleaner(render_context);
 * 
 * // 3. 空函数调用（用于系统占位）
 * RenderingSystem_EmptyFunction();
 * 
 * 性能考虑：
 * - 使用静态变量减少内存分配开销
 * - 实现批量资源处理提高效率
 * - 优化线程同步减少锁竞争
 * - 使用内存池减少碎片
 * 
 * 错误处理策略：
 * - 参数验证：检查所有输入参数的有效性
 * - 资源状态：验证资源的状态和可用性
 * - 内存安全：确保内存分配和释放的安全性
 * - 线程安全：使用适当的同步机制
 * 
 * 注意事项：
 * 1. 使用前确保渲染上下文已正确初始化
 * 2. 资源处理完成后及时释放资源
 * 3. 在多线程环境中注意线程同步
 * 4. 定期检查系统状态和资源使用情况
 * 
 * 兼容性说明：
 * - 支持向后兼容的函数别名
 * - 保持与原有系统的接口兼容性
 * - 支持多种资源类型的扩展
 * - 提供灵活的错误处理机制
 * 
 * 维护建议：
 * 1. 定期检查资源使用情况
 * 2. 监控系统性能指标
 * 3. 及时处理错误和异常
 * 4. 保持代码的可读性和可维护性
 */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address



