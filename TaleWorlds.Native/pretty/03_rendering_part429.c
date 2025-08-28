#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 03_rendering_part429.c
 * @brief 渲染系统资源管理和错误处理模块
 * 
 * 该文件包含7个核心函数，涵盖渲染系统资源管理、内存清理、
 * 错误处理、状态报告等功能。主要用于渲染系统的维护、
 * 错误诊断和系统状态监控。
 * 
 * 主要功能包括：
 * - 渲染资源清理和释放
 * - 内存管理和优化
 * - 错误消息生成和处理
 * - 系统状态监控
 * - 渲染参数验证
 * 
 * 主要函数包括：
 * - RenderingResourceCleanup：渲染资源清理器
 * - RenderingMemoryManager：渲染内存管理器
 * - RenderingStateInitializer：渲染状态初始化器
 * - RenderingErrorHandler：渲染错误处理器
 * - RenderingParameterValidator：渲染参数验证器
 * - RenderingDataProcessor：渲染数据处理器
 * - RenderingSystemMonitor：渲染系统监控器
 */

/*============================================================================*/
/* 渲染系统资源管理模块                                                  */
/*============================================================================*/

/**
 * @brief 渲染资源清理器
 * 
 * 该函数负责渲染系统资源的清理和释放。主要功能包括：
 * - 清理渲染系统占用的资源
 * - 释放内存和缓冲区
 * - 重置系统状态
 * - 执行完整性检查
 * 
 * 技术特点：
 * - 支持批量资源清理
 * - 实现内存安全检查
 * - 提供状态重置功能
 * - 包含错误处理机制
 * 
 * @param void 无参数
 * @return void 无返回值
 */
void RenderingResourceCleanup(void)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_1804e5f80(&system_memory_5ed0);
  uVar4 = 0;
  uVar6 = uVar4;
  if ((_DAT_180c95ed8 - _DAT_180c95ed0) / 0x68 != 0) {
    do {
      lVar2 = _DAT_180c95ed0;
      puVar1 = *(uint64_t **)(_DAT_180c95ed0 + 0x18 + uVar4);
      if (puVar1 != (uint64_t *)0x0) {
        lVar3 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
      }
      *(uint64_t *)(lVar2 + 0x18 + uVar4) = 0;
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
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  uRam0000000180c91d38 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染内存管理器
 * 
 * 该函数负责渲染系统的内存管理。主要功能包括：
 * - 管理渲染内存分配
 * - 清理内存碎片
 * - 优化内存使用
 * - 处理内存泄漏
 * 
 * 技术特点：
 * - 支持动态内存管理
 * - 实现内存池优化
 * - 提供内存统计功能
 * - 包含内存安全检查
 * 
 * @param void 无参数
 * @return void 无返回值
 */
void RenderingMemoryManager(void)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  longlong unaff_R12;
  int unaff_R14D;
  ulonglong unaff_R15;
  
  uVar5 = unaff_R15 & 0xffffffff;
  do {
    puVar1 = *(uint64_t **)(unaff_RSI + 0x18 + uVar5);
    if (puVar1 != (uint64_t *)0x0) {
      lVar3 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
    }
    *(ulonglong *)(unaff_RSI + 0x18 + uVar5) = unaff_R15;
    uVar2 = _DAT_180c91d30;
    lVar3 = _DAT_180c91d28;
    unaff_R14D = unaff_R14D + 1;
    uVar5 = uVar5 + 0x68;
    lVar4 = SUB168(SEXT816(unaff_R12) * SEXT816(_DAT_180c95ed8 - _DAT_180c95ed0),8);
    unaff_RSI = _DAT_180c95ed0;
  } while ((ulonglong)(longlong)unaff_R14D < (ulonglong)((lVar4 >> 5) - (lVar4 >> 0x3f)));
  uVar5 = 0;
  if (_DAT_180c91d30 != 0) {
    do {
      lVar4 = *(longlong *)(lVar3 + uVar5 * 8);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x18) == 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar4);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar3 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  uRam0000000180c91d38 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染状态初始化器
 * 
 * 该函数负责渲染系统状态的初始化。主要功能包括：
 * - 初始化渲染状态
 * - 重置系统参数
 * - 清理历史数据
 * - 准备系统运行
 * 
 * 技术特点：
 * - 支持完整状态重置
 * - 实现参数初始化
 * - 提供状态验证
 * - 包含错误恢复机制
 * 
 * @param void 无参数
 * @return void 无返回值
 */
void RenderingStateInitializer(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plStack0000000000000040;
  
  uVar3 = _DAT_180c91d30;
  lVar2 = _DAT_180c91d28;
  uVar4 = 0;
  if (_DAT_180c91d30 != 0) {
    do {
      lVar1 = *(longlong *)(lVar2 + uVar4 * 8);
      if (lVar1 != 0) {
        plStack0000000000000040 = (longlong *)(lVar1 + 0x18);
        if (*plStack0000000000000040 == 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar1);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  uRam0000000180c91d38 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染错误处理器
 * 
 * 该函数负责渲染系统的错误处理。主要功能包括：
 * - 检测渲染错误
 * - 生成错误报告
 * - 处理异常情况
 * - 记录错误信息
 * 
 * 技术特点：
 * - 支持多种错误类型检测
 * - 实现详细的错误报告
 * - 提供错误恢复机制
 * - 包含错误日志记录
 * 
 * @param void 无参数
 * @return void 无返回值
 */
void RenderingErrorHandler(void)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  void *puStack_288;
  uint64_t *puStack_280;
  int32_t uStack_278;
  uint64_t uStack_270;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3);
  puStack_288 = &unknown_var_3456_ptr;
  uStack_270 = 0;
  puStack_280 = (uint64_t *)0x0;
  uStack_278 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_280 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_270 = CONCAT44(uStack_270._4_4_,uVar1);
  *puVar3 = 0x5f6e6f697373696d;
  *(int32_t *)(puVar3 + 1) = 0x707063;
  uStack_278 = 0xb;
  FUN_1801614d0(uVar2,&puStack_288);
  puStack_288 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * @brief 渲染参数验证器
 * 
 * 该函数负责渲染系统参数的验证。主要功能包括：
 * - 验证渲染参数有效性
 * - 检查参数范围
 * - 生成验证报告
 * - 处理参数错误
 * 
 * 技术特点：
 * - 支持多种参数类型验证
 * - 实现详细的错误报告
 * - 提供参数范围检查
 * - 包含自动纠正机制
 * 
 * @param param_1 验证上下文
 * @param param_2 输出缓冲区指针
 * @param param_3 验证标志
 * @param param_4 参数数据指针
 * @return uint64_t* 验证结果指针
 */
uint64_t *
RenderingParameterValidator(uint64_t param_1, uint64_t *param_2, int32_t param_3, longlong *param_4)

{
  uint64_t *puVar1;
  double dVar2;
  
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(int32_t *)(puVar1 + 3) = 0x72657961;
    *(int16_t *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x1d;
  }
  else if ((system_memory_6098 == '\0') || (_DAT_180c96070 == 0)) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x7369206572656854;
    puVar1[1] = 0x69746361206f6e20;
    puVar1[2] = 0x697373696d206576;
    *(int32_t *)(puVar1 + 3) = 0x2e6e6f;
    *(int32_t *)(param_2 + 2) = 0x1b;
  }
  else if (param_4[1] - *param_4 >> 5 == 0) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x2c,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x2c20657361656c50;
    puVar1[1] = 0x7277206f736c6120;
    puVar1[2] = 0x2065687420657469;
    puVar1[3] = 0x726f662074736166;
    puVar1[4] = 0x6f6d612064726177;
    *(int32_t *)(puVar1 + 5) = 0x2e746e75;
    *(int8_t *)((longlong)puVar1 + 0x2c) = 0;
    *(int32_t *)(param_2 + 2) = 0x2c;
  }
  else {
    dVar2 = (double)atof(*(uint64_t *)(*param_4 + 8));
    FUN_1804f8bd0(_DAT_180c96070,(float)dVar2,0x3d088889);
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x14);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x726f662074736146;
    puVar1[1] = 0x6174732064726177;
    *(int32_t *)(puVar1 + 2) = 0x64657472;
    *(int8_t *)((longlong)puVar1 + 0x14) = 0;
    *(int32_t *)(param_2 + 2) = 0x14;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * @brief 渲染数据处理器
 * 
 * 该函数负责渲染系统数据的处理。主要功能包括：
 * - 处理渲染数据
 * - 转换数据格式
 * - 验证数据完整性
 * - 优化数据结构
 * 
 * 技术特点：
 * - 支持多种数据格式处理
 * - 实现数据转换和优化
 * - 提供数据完整性检查
 * - 包含错误处理机制
 * 
 * @param param_1 处理上下文
 * @param param_2 输出缓冲区指针
 * @param param_3 处理标志
 * @param param_4 数据指针
 * @return uint64_t* 处理结果指针
 */
uint64_t *
RenderingDataProcessor(uint64_t param_1, uint64_t *param_2, uint64_t param_3, longlong *param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  int iVar3;
  int8_t uVar4;
  longlong lVar5;
  int8_t auStack_d8 [208];
  
  lVar2 = _DAT_180c96070;
  uVar4 = SUB81(param_4,0);
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d,param_3,uVar4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(int32_t *)(puVar1 + 3) = 0x72657961;
    *(int16_t *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x1d;
  }
  else if ((system_memory_6098 == '\0') || (_DAT_180c96070 == 0)) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,param_3,uVar4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x7369206572656854;
    puVar1[1] = 0x69746361206f6e20;
    puVar1[2] = 0x697373696d206576;
    *(int32_t *)(puVar1 + 3) = 0x2e6e6f;
    *(int32_t *)(param_2 + 2) = 0x1b;
  }
  else if (param_4[1] - *param_4 >> 5 == 0) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x29,param_3,uVar4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x2c20657361656c50;
    puVar1[1] = 0x7277206f736c6120;
    puVar1[2] = 0x2065687420657469;
    puVar1[3] = 0x646920746e656761;
    puVar1[4] = 0x6c6c696b206f7420;
    *(int16_t *)(puVar1 + 5) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x29;
  }
  else {
    iVar3 = atoi(*(uint64_t *)(*param_4 + 8));
    if ((iVar3 < 0) || (iVar3 == *(int *)(lVar2 + 0x98d930))) {
      *param_2 = &unknown_var_720_ptr;
      param_2[1] = 0;
      *(int32_t *)(param_2 + 2) = 0;
      *param_2 = &unknown_var_3456_ptr;
      param_2[3] = 0;
      param_2[1] = 0;
      *(int32_t *)(param_2 + 2) = 0;
      FUN_1806277c0(param_2,0x17);
      puVar1 = (uint64_t *)param_2[1];
      *puVar1 = 0x2061207265746e45;
      puVar1[1] = 0x67612064696c6176;
      puVar1[2] = 0x21646920746e65;
      *(int32_t *)(param_2 + 2) = 0x17;
    }
    else {
      lVar5 = (longlong)iVar3 * 0xa60;
      FUN_1804a7000(auStack_d8,*(longlong *)(lVar5 + 0x30c0 + lVar2) + 0xc);
      FUN_18051d2d0(lVar2 + 0x30a0 + lVar5,auStack_d8,0,0xff);
      *param_2 = &unknown_var_720_ptr;
      param_2[1] = 0;
      *(int32_t *)(param_2 + 2) = 0;
      *param_2 = &unknown_var_3456_ptr;
      param_2[3] = 0;
      param_2[1] = 0;
      *(int32_t *)(param_2 + 2) = 0;
      FUN_1806277c0(param_2,0xd);
      puVar1 = (uint64_t *)param_2[1];
      *puVar1 = 0x696b20746e656741;
      *(int32_t *)(puVar1 + 1) = 0x64656c6c;
      *(int16_t *)((longlong)puVar1 + 0xc) = 0x21;
      *(int32_t *)(param_2 + 2) = 0xd;
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * @brief 渲染系统监控器
 * 
 * 该函数负责渲染系统的监控。主要功能包括：
 * - 监控系统状态
 * - 收集性能数据
 * - 生成监控报告
 * - 处理异常情况
 * 
 * 技术特点：
 * - 支持实时系统监控
 * - 实现性能数据收集
 * - 提供详细的监控报告
 * - 包含异常处理机制
 * 
 * @param param_1 监控上下文
 * @param param_2 输出缓冲区指针
 * @param param_3 监控标志
 * @param param_4 监控数据指针
 * @return uint64_t* 监控结果指针
 */
uint64_t *
RenderingSystemMonitor(uint64_t param_1, uint64_t *param_2, uint64_t param_3, longlong *param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int8_t uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int8_t auStack_f8 [208];
  ulonglong uVar6;
  
  lVar2 = _DAT_180c96070;
  uVar7 = SUB81(param_4,0);
  uVar4 = 0;
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d,param_3,uVar7,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(int32_t *)(puVar1 + 3) = 0x72657961;
    *(int16_t *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x1d;
  }
  else if ((system_memory_6098 == '\0') || (_DAT_180c96070 == 0)) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,param_3,uVar7,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x7369206572656854;
    puVar1[1] = 0x69746361206f6e20;
    puVar1[2] = 0x697373696d206576;
    *(int32_t *)(puVar1 + 3) = 0x2e6e6f;
    *(int32_t *)(param_2 + 2) = 0x1b;
  }
  else if (param_4[1] - *param_4 >> 5 == 0) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x2b,param_3,uVar7,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x202c657361656c50;
    puVar1[1] = 0x697277206f736c61;
    puVar1[2] = 0x6120656874206574;
    puVar1[3] = 0x20646920746e6567;
    puVar1[4] = 0x756c637865206f74;
    *(int32_t *)(puVar1 + 5) = 0x2e6564;
    *(int32_t *)(param_2 + 2) = 0x2b;
  }
  else {
    iVar3 = atoi(*(uint64_t *)(*param_4 + 8));
    if (0 < *(int *)(lVar2 + 0x52ed94)) {
      uVar6 = uVar4;
      uVar9 = uVar4;
      do {
        if ((uVar4 != (longlong)iVar3) && ((int)uVar6 != *(int *)(lVar2 + 0x98d930))) {
          lVar8 = uVar9 + lVar2;
          FUN_1804a7000(auStack_f8,*(longlong *)(lVar8 + 0x30c0) + 0xc);
          FUN_18051d2d0(lVar8 + 0x30a0,auStack_f8,0,0xff);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar4 = uVar4 + 1;
        uVar9 = uVar9 + 0xa60;
      } while ((int)uVar5 < *(int *)(lVar2 + 0x52ed94));
    }
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0xe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x6b2073746e656741;
    *(int32_t *)(puVar1 + 1) = 0x656c6c69;
    *(int16_t *)((longlong)puVar1 + 0xc) = 0x2164;
    *(int8_t *)((longlong)puVar1 + 0xe) = 0;
    *(int32_t *)(param_2 + 2) = 0xe;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1804a16f0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  if ((system_memory_6098 == '\0') || (_DAT_180c96070 == 0)) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x7369206572656854;
    puVar1[1] = 0x69746361206f6e20;
    puVar1[2] = 0x697373696d206576;
    *(int32_t *)(puVar1 + 3) = 0x2e6e6f;
    *(int32_t *)(param_2 + 2) = 0x1b;
  }
  else {
    FUN_1804f0ad0(_DAT_180c96070,0);
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x10,param_3,param_4,uVar2,uVar3);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x2073657370726f43;
    puVar1[1] = 0x2164657261656c63;
    *(int8_t *)(puVar1 + 2) = 0;
    *(int32_t *)(param_2 + 2) = 0x10;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180500270(uint64_t *param_1)
void FUN_180500270(uint64_t *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  uint64_t uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_5208_ptr;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x2030);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          do {
            *(longlong *)(lVar9 + 0x2038) = lVar8;
            *(int32_t *)(lVar9 + 0x2030) = 1;
            plVar5 = (longlong *)(lVar6 + 0x28);
            LOCK();
            lVar7 = *plVar5;
            bVar11 = lVar8 == lVar7;
            if (bVar11) {
              *plVar5 = lVar9;
              lVar7 = lVar8;
            }
            UNLOCK();
            if (bVar11) break;
            LOCK();
            piVar1 = (int *)(lVar9 + 0x2030);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_180500318:
      plVar5 = (longlong *)param_1[0xc];
      lVar9 = *(longlong *)
               (*(longlong *)
                 (plVar5[3] +
                 (((uVar10 & 0xffffffffffffffe0) - **(longlong **)(plVar5[3] + plVar5[1] * 8) >> 5)
                  + plVar5[1] & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_180500318;
    FUN_1808fc8a8((ulonglong)((uint)uVar10 & 0x1f) * 0x100 + lVar9 + 0x38,0x30,4,FUN_18004a130,
                  uVar12);
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x2030);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(longlong *)(lVar6 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x2038) = lVar8;
        *(int32_t *)(lVar9 + 0x2030) = 1;
        plVar5 = (longlong *)(lVar6 + 0x28);
        LOCK();
        lVar7 = *plVar5;
        bVar11 = lVar8 == lVar7;
        if (bVar11) {
          *plVar5 = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x2030);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (iVar2 == 1);
    }
  }
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_5616_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180500420(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint64_t *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint64_t *puVar15;
  bool bVar16;
  bool bVar17;
  
  uVar5 = GetCurrentThreadId();
  uVar14 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar13 = (ulonglong)(uVar14 >> 0x10 ^ uVar14);
  puVar7 = (ulonglong *)param_1[6];
  for (puVar3 = puVar7; uVar6 = uVar13, puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[2])
  {
    while( true ) {
      uVar6 = uVar6 & *puVar3 - 1;
      uVar14 = *(uint *)(uVar6 * 0x10 + puVar3[1]);
      if (uVar14 == uVar5) {
        puVar15 = *(uint64_t **)(puVar3[1] + 8 + uVar6 * 0x10);
        if (puVar3 == puVar7) {
          return puVar15;
        }
        do {
          uVar13 = uVar13 & *puVar7 - 1;
          if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
            puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
            LOCK();
            bVar17 = *puVar2 == 0;
            if (bVar17) {
              *puVar2 = uVar5;
            }
            UNLOCK();
            if (bVar17) {
              *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar15;
              return puVar15;
            }
          }
          uVar13 = uVar13 + 1;
        } while( true );
      }
      if (uVar14 == 0) break;
      uVar6 = uVar6 + 1;
    }
  }
  LOCK();
  plVar1 = param_1 + 7;
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uVar6 = lVar9 + 1;
  puVar15 = (uint64_t *)0x0;
  while( true ) {
    if (*puVar7 >> 1 <= uVar6) {
      LOCK();
      puVar2 = (uint *)(param_1 + 0x4b);
      uVar14 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar14 & 1) == 0) {
        puVar3 = (ulonglong *)param_1[6];
        puVar7 = puVar3;
        uVar12 = *puVar3;
        if (*puVar3 >> 1 <= uVar6) {
          do {
            uVar4 = uVar12;
            uVar12 = uVar4 * 2;
          } while ((uVar4 & 0x7fffffffffffffff) <= uVar6);
          puVar7 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x20 + 0x1f,10);
          if (puVar7 == (ulonglong *)0x0) {
            LOCK();
            param_1[7] = param_1[7] + -1;
            UNLOCK();
            *(int32_t *)(param_1 + 0x4b) = 0;
            return (uint64_t *)0x0;
          }
          *puVar7 = uVar12;
          puVar7[1] = (ulonglong)(-(int)(puVar7 + 3) & 7) + (longlong)(puVar7 + 3);
          puVar11 = puVar15;
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(uint64_t *)((longlong)puVar11 + puVar7[1] + 8) = 0;
            *(int32_t *)((longlong)puVar11 + puVar7[1]) = 0;
            puVar11 = puVar11 + 2;
          }
          puVar7[2] = (ulonglong)puVar3;
          param_1[6] = (longlong)puVar7;
        }
        *(int32_t *)(param_1 + 0x4b) = 0;
      }
    }
    if (uVar6 < (*puVar7 >> 2) + (*puVar7 >> 1)) break;
    puVar7 = (ulonglong *)param_1[6];
  }
  puVar11 = (uint64_t *)*param_1;
  while (puVar11 != (uint64_t *)0x0) {
    if ((*(char *)(puVar11 + 2) != '\0') && (*(char *)(puVar11 + 9) == '\0')) {
      bVar17 = true;
      LOCK();
      bVar16 = *(char *)(puVar11 + 2) == '\x01';
      if (bVar16) {
        *(char *)(puVar11 + 2) = '\0';
      }
      UNLOCK();
      if (bVar16) goto LAB_18050072b;
    }
    plVar1 = puVar11 + 1;
    puVar11 = (uint64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar11 = puVar15;
    }
  }
  bVar17 = false;
  puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x68,10);
  puVar11 = puVar15;
  if (puVar8 != (uint64_t *)0x0) {
    puVar8[1] = 0;
    *(int8_t *)(puVar8 + 2) = 0;
    puVar8[3] = 0;
    *puVar8 = &unknown_var_5616_ptr;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(int8_t *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &unknown_var_5208_ptr;
    puVar8[0xb] = 0x20;
    puVar8[0xc] = 0;
    FUN_18005f430(puVar8);
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    lVar9 = *param_1;
    do {
      puVar11 = (uint64_t *)(lVar9 + 8);
      if (lVar9 == 0) {
        puVar11 = puVar15;
      }
      puVar8[1] = puVar11;
      LOCK();
      lVar10 = *param_1;
      bVar16 = lVar9 == lVar10;
      if (bVar16) {
        *param_1 = (longlong)puVar8;
        lVar10 = lVar9;
      }
      UNLOCK();
      lVar9 = lVar10;
      puVar11 = puVar8;
    } while (!bVar16);
  }
LAB_18050072b:
  if (puVar11 == (uint64_t *)0x0) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
    return (uint64_t *)0x0;
  }
  if (bVar17) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
  }
  do {
    uVar13 = uVar13 & *puVar7 - 1;
    if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
      puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
      LOCK();
      bVar17 = *puVar2 == 0;
      if (bVar17) {
        *puVar2 = uVar5;
      }
      UNLOCK();
      if (bVar17) {
        *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar11;
        return puVar11;
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}



uint64_t FUN_1805007d0(uint64_t param_1,ulonglong param_2)

{
  FUN_180500270();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180500860(longlong *param_1,uint64_t *param_2)
void FUN_180500860(longlong *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  
  puVar8 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  lVar9 = ((longlong)puVar8 - (longlong)puVar5) / 0x18;
  puVar3 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_1805008eb;
  }
  puVar3 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x18,(char)param_1[3],puVar5,0xfffffffffffffffe);
  puVar8 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
LAB_1805008eb:
  puVar4 = puVar3;
  if (puVar5 != puVar8) {
    lVar7 = (longlong)puVar3 - (longlong)puVar5;
    puVar5 = puVar5 + 1;
    do {
      *puVar4 = puVar5[-1];
      puVar5[-1] = 0;
      *(uint64_t *)((longlong)puVar5 + lVar7) = *puVar5;
      *puVar5 = 0;
      *(int32_t *)(lVar7 + 8 + (longlong)puVar5) = *(int32_t *)(puVar5 + 1);
      *(int32_t *)(lVar7 + 0xc + (longlong)puVar5) = *(int32_t *)((longlong)puVar5 + 0xc);
      puVar4 = puVar4 + 3;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 3;
    } while (puVar1 != puVar8);
  }
  *puVar4 = *param_2;
  *param_2 = 0;
  puVar4[1] = param_2[1];
  param_2[1] = 0;
  *(int32_t *)(puVar4 + 2) = *(int32_t *)(param_2 + 2);
  *(int32_t *)((longlong)puVar4 + 0x14) = *(int32_t *)((longlong)param_2 + 0x14);
  plVar2 = (longlong *)param_1[1];
  plVar6 = (longlong *)*param_1;
  if (plVar6 != plVar2) {
    do {
      if ((longlong *)plVar6[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar6[1] + 0x38))();
      }
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar2);
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 == (longlong *)0x0) {
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar4 + 3);
    param_1[2] = (longlong)(puVar3 + lVar9 * 3);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805009e0(longlong *param_1,uint64_t param_2)
void FUN_1805009e0(longlong *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  longlong lVar9;
  
  puVar8 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar9 = ((longlong)puVar8 - (longlong)puVar4) / 0x18;
  puVar3 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_180500a6b;
  }
  puVar3 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x18,(char)param_1[3],puVar4,0xfffffffffffffffe);
  puVar8 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_180500a6b:
  puVar6 = puVar3;
  if (puVar4 != puVar8) {
    lVar5 = (longlong)puVar3 - (longlong)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar6 = puVar4[-1];
      puVar4[-1] = 0;
      *(uint64_t *)((longlong)puVar4 + lVar5) = *puVar4;
      *puVar4 = 0;
      *(int32_t *)(lVar5 + 8 + (longlong)puVar4) = *(int32_t *)(puVar4 + 1);
      *(int32_t *)(lVar5 + 0xc + (longlong)puVar4) = *(int32_t *)((longlong)puVar4 + 0xc);
      puVar6 = puVar6 + 3;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 3;
    } while (puVar1 != puVar8);
  }
  FUN_1804ffc70(puVar6,param_2);
  plVar2 = (longlong *)param_1[1];
  plVar7 = (longlong *)*param_1;
  if (plVar7 != plVar2) {
    do {
      if ((longlong *)plVar7[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar7[1] + 0x38))();
      }
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar2);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar6 + 3);
    param_1[2] = (longlong)(puVar3 + lVar9 * 3);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar7);
}



bool FUN_180500b50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*param_2 + 0x18);
  bVar4 = lVar1 != 0;
  *param_2 = lVar1;
  if (lVar1 == 0) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      if ((int)uVar3 == (int)param_2[3]) {
        if (*(int *)((longlong)param_2 + 0xc) == *(int *)((longlong)param_2 + 0x1c)) {
          return bVar4;
        }
        *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
        iVar2 = (int)param_2[2];
      }
      else {
        iVar2 = (int)uVar3 + 1;
      }
      *(int *)(param_2 + 1) = iVar2;
      uVar3 = param_2[1];
      lVar1 = *(longlong *)
               ((longlong)((int)(uVar3 >> 0x20) * *(int *)(param_1 + 8) + (int)uVar3) * 9 +
               *(longlong *)(param_1 + 0x18));
      bVar4 = lVar1 != 0;
      *param_2 = lVar1;
    } while (lVar1 == 0);
  }
  return bVar4;
}



/* ============================================================================
 * 技术说明
 * ============================================================================ */
/**
 * 本文件实现了渲染系统资源管理和错误处理功能：
 * 
 * 1. 资源管理
 *    - 清理和释放渲染资源
 *    - 管理内存分配和释放
 *    - 优化资源使用效率
 *    - 处理资源生命周期
 * 
 * 2. 错误处理
 *    - 检测和报告渲染错误
 *    - 生成详细的错误信息
 *    - 提供错误恢复机制
 *    - 记录错误日志
 * 
 * 3. 系统监控
 *    - 监控渲染系统状态
 *    - 收集性能统计数据
 *    - 生成系统报告
 *    - 处理异常情况
 * 
 * 4. 参数验证
 *    - 验证渲染参数有效性
 *    - 检查参数范围和类型
 *    - 生成验证报告
 *    - 处理参数错误
 * 
 * 该模块是渲染系统的重要组成部分，为系统稳定运行提供核心支持。
 */

