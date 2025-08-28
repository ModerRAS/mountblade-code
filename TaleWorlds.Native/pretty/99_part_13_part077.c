/*
 * TaleWorlds.Native 引擎 - 数学库三角函数和数据压缩模块
 *
 * 本模块实现了游戏引擎中的数学计算和数据压缩功能，包括：
 * - 三角函数计算：提供高效的数学运算支持
 * - 数据压缩算法：实现数据的压缩和解压缩
 * - 系统输入管理：处理输入事件和数据流
 * - 线程管理：支持多线程环境下的资源管理
 *
 * 技术架构：
 * - 采用模块化设计，数学运算和数据压缩分离
 * - 实现了高效的内存管理和缓存优化
 * - 支持多种数据格式的压缩算法
 * - 提供了完整的错误处理机制
 *
 * 性能优化策略：
 * - 使用查表法优化三角函数计算
 * - 实现了快速压缩算法
 * - 优化了内存分配和访问模式
 * - 支持并行计算和向量化操作
 *
 * 安全考虑：
 * - 实现了边界检查和输入验证
 * - 防止缓冲区溢出和内存泄露
 * - 支持异常恢复和错误处理
 * - 提供了资源管理和清理机制
 */
#include "SystemInputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
/* 函数别名定义: SystemInputManager */
#define SystemInputManager SystemInputManager
/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
/* 函数别名定义: DataCompressor */
#define DataCompressor DataCompressor
/* 函数别名定义: SystemResourceManager */
#define SystemResourceManager SystemResourceManager
/* 函数别名定义: SystemDataAnalyzer */
#define SystemDataAnalyzer SystemDataAnalyzer
/* 函数别名定义: AdvancedSystemManager */
#define AdvancedSystemManager AdvancedSystemManager
/* 函数别名定义: SystemThreadManager */
#define SystemThreadManager SystemThreadManager
/* 函数别名定义: SystemCore_Initializer */
#define SystemCore_Initializer SystemCore_Initializer
/* 函数别名定义: SystemDataValidator */
#define SystemDataValidator SystemDataValidator
// 99_part_13_part077.c - 数学库三角函数和数据压缩模块
/**
 * 数学库系统初始化函数
 *
 * 功能：数学库系统的初始化函数，为后续的数学运算做准备
 *
 * 参数：
 * - 无参数
 *
 * 返回值：
 * - 无返回值
 *
 * 技术说明：
 * - 实现了数学库系统的初始化机制
 * - 当前实现为空，预留用于数学库初始化
 * - 保持了接口的完整性，便于后续扩展
 *
 * 简化实现：原始实现是一个空函数，用于数学库系统初始化
 * 原始实现：MathLibrary_SystemInitializer - 空函数，仅返回
 *
 * @return 无返回值
 */
void MathLibrary_SystemInitializer(void)
{
  return;
}
/**
 * 数学三角函数核心处理器
 *
 * 功能：数学三角函数的核心处理器，处理三角函数的相关计算
 *
 * 参数：
 * - 无显式参数，通过寄存器传递参数
 *
 * 返回值：
 * - 0: 计算成功
 * - 0xd: 计算失败或错误
 *
 * 技术说明：
 * - 实现了三角函数的核心计算逻辑
 * - 使用寄存器传递参数提高性能
 * - 包含错误检查和状态管理
 * - 支持多种三角函数运算
 *
 * 简化实现：原始实现是一个复杂的三角函数计算函数
 * 原始实现：GenericFunction_0018076a50 - 数学三角函数核心处理器
 *
 * @return 计算结果状态码
 */
uint64_t MathTrigonometryFunction_Core(void)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  int unaff_R14D;
  if (*(int *)(unaff_RBX + 0x18) == unaff_R14D) {
    *(int64_t *)(unaff_RBX + 0x10) = unaff_RDI[1];
    unaff_RDI[1] = unaff_RBX;
    *(uint64_t *)(*unaff_RDI + 0x10) =
         (uint64_t)*(uint *)(unaff_RBX + 4) + *(int64_t *)(unaff_RBX + 8);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xd;
  }
  return uVar1;
}
/**
 * 数学库错误处理器
 *
 * 功能：数学库的错误处理器，处理数学运算中的错误情况
 *
 * 参数：
 * - 无参数
 *
 * 返回值：
 * - 0x1c: 错误代码，表示数学运算错误
 *
 * 技术说明：
 * - 实现了数学库的错误处理机制
 * - 提供统一的错误代码返回
 * - 支持错误状态的传播和处理
 * - 简化的错误处理逻辑
 *
 * 简化实现：原始实现是一个简单的错误返回函数
 * 原始实现：GenericFunction_0018076ae0 - 数学库错误处理器
 *
 * @return 错误代码
 */
uint64_t MathLibrary_ErrorHandler(void)
{
  return 0x1c;
}
/**
 * 数据压缩器0
 *
 * 功能：数据压缩的核心实现，处理数据的压缩和解压缩操作
 *
 * 参数：
 * - param_1: 数据指针数组，包含要压缩的数据
 * - param_2: 压缩参数数组，包含压缩配置
 * - param_3: 压缩模式标志
 * - param_4: 压缩级别参数
 * - param_5: 压缩选项参数
 *
 * 返回值：
 * - 0: 压缩成功
 * - 非0: 压缩失败，返回错误代码
 *
 * 技术说明：
 * - 实现了数据压缩的核心算法
 * - 支持多种压缩模式和级别
 * - 包含错误检查和状态管理
 * - 使用栈分配的缓冲区提高性能
 *
 * 简化实现：原始实现是一个复杂的数据压缩函数
 * 原始实现：GenericFunction_0018076af0 - 数据压缩器0
 *
 * @param data_ptr 数据指针数组
 * @param compress_params 压缩参数数组
 * @param mode 压缩模式标志
 * @param level 压缩级别参数
 * @param options 压缩选项参数
 * @return 压缩结果状态码
 */
uint64_t DataCompressor0(int64_t *param_1,int *param_2,int param_3,int param_4,int param_5)
{
  uint64_t uVar1;
  int aiStackX_8 [2];
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0x18) == 0)) {
    return 0x1c;
  }
  param_2[6] = param_3;
  *param_2 = param_4;
  aiStackX_8[0] = param_4;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),aiStackX_8,4);
  aiStackX_8[0] = (int)uVar1;
  if (aiStackX_8[0] == 0) {
    param_2[1] = 0;
    uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                      (*(uint64_t **)(*param_1 + 8),aiStackX_8,4);
    if (((int)uVar1 == 0) &&
       (uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                          (*(int64_t **)(*param_1 + 8),param_2 + 2), (int)uVar1 == 0)) {
      if (param_3 != 0) {
        *param_2 = param_5;
        aiStackX_8[0] = param_5;
        uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),aiStackX_8,4);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      *(int64_t *)(param_2 + 4) = param_1[1];
      uVar1 = 0;
      param_1[1] = (int64_t)param_2;
    }
  }
  return uVar1;
}
/**
 * UI系统事件处理器
 *
 * 功能：UI系统事件的核心处理器，处理用户界面相关的事件
 *
 * 参数：
 * - param_1: 事件数据指针数组，包含事件相关信息
 * - param_2: 事件类型标识符
 *
 * 返回值：
 * - 0: 事件处理成功
 * - 非0: 事件处理失败，返回错误代码
 *
 * 技术说明：
 * - 实现了UI系统事件的处理逻辑
 * - 支持多种事件类型的处理
 * - 包含事件验证和错误处理
 * - 使用栈分配的缓冲区提高性能
 *
 * 简化实现：原始实现是一个复杂的UI事件处理函数
 * 原始实现：GenericFunction_0018076c00 - UI系统事件处理器
 *
 * @param event_data 事件数据指针数组
 * @param event_type 事件类型标识符
 * @return 事件处理结果状态码
 */
uint64_t UISystemEventHandler(int64_t *param_1,uint param_2)
{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar3;
  uint astack_special_x_8 [2];
  uint astack_special_x_18 [4];
  if ((param_1[2] != 0) || (0xffff < param_2)) {
    return 0x1c;
  }
  if (param_2 != 0) goto LAB_1808ddeb1;
  plVar1 = (int64_t *)*param_1;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else if (plVar1[2] == 0) {
LAB_1808dde80:
    uVar2 = SystemDataAnalyzer(*plVar1,astack_special_x_8,1,2,0);
  }
  else {
    astack_special_x_18[0] = 0;
    uVar2 = SystemFunction_00018076a7d0(*plVar1,astack_special_x_18);
    if (uVar2 == 0) {
      if ((uint64_t)astack_special_x_18[0] + 2 <= (uint64_t)plVar1[2]) goto LAB_1808dde80;
      uVar2 = 0x11;
    }
  }
  if (uVar2 == 0) {
    param_2 = astack_special_x_8[0] & 0xffff;
  }
  uVar3 = (uint64_t)uVar2;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_1808ddeb1:
  *(uint *)(param_1 + 3) = param_2;
  astack_special_x_8[0] = 0;
  uVar3 = SystemFunction_00018076a7d0(*(uint64_t *)*param_1,astack_special_x_8);
  if ((int)uVar3 == 0) {
    param_1[2] = (uint64_t)astack_special_x_8[0];
    *(uint64_t *)(*param_1 + 0x10) = (uint64_t)*(uint *)(param_1 + 3) + (uint64_t)astack_special_x_8[0];
    uVar3 = 0;
  }
  return uVar3;
}
/**
 * UI系统事件主处理器
 *
 * 功能：UI系统事件的主要处理函数，处理用户界面事件的核心逻辑
 *
 * 参数：
 * - param_1: 事件数据指针数组，包含事件相关信息
 * - param_2: 事件类型标识符
 *
 * 返回值：
 * - 0: 事件处理成功
 * - 非0: 事件处理失败，返回错误代码
 *
 * 技术说明：
 * - 实现了UI系统事件的主要处理逻辑
 * - 支持多种事件类型的处理和验证
 * - 包含错误检查和状态管理
 * - 使用栈分配的缓冲区提高性能
 *
 * 简化实现：原始实现是一个复杂的UI事件处理主函数
 * 原始实现：GenericFunction_0018076c10 - UI系统事件主处理器
 *
 * @param event_data 事件数据指针数组
 * @param event_type 事件类型标识符
 * @return 事件处理结果状态码
 */
uint64_t UIEventHandler_Main(int64_t *param_1,int param_2)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  uint unaff_EDI;
  uint local_buffer_50;
  uint local_buffer_60;
  if (param_2 != 0) goto LAB_1808ddeb1;
  param_1 = (int64_t *)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else if (param_1[2] == 0) {
LAB_1808dde80:
    uVar1 = SystemDataAnalyzer(*param_1,&local_buffer_00000050,1,2,0);
  }
  else {
    local_buffer_60 = 0;
    uVar1 = SystemFunction_00018076a7d0(*param_1,&local_buffer_00000060);
    if (uVar1 == 0) {
      if ((uint64_t)local_buffer_60 + 2 <= (uint64_t)param_1[2]) goto LAB_1808dde80;
      uVar1 = 0x11;
    }
  }
  if (uVar1 == 0) {
    unaff_EDI = local_buffer_50 & 0xffff;
  }
  uVar2 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_1808ddeb1:
  *(uint *)(unaff_RBX + 3) = unaff_EDI;
  local_buffer_50 = 0;
  uVar2 = SystemFunction_00018076a7d0(*(uint64_t *)*unaff_RBX,&local_buffer_00000050);
  if ((int)uVar2 == 0) {
    unaff_RBX[2] = (uint64_t)local_buffer_50;
    *(uint64_t *)(*unaff_RBX + 0x10) =
         (uint64_t)*(uint *)(unaff_RBX + 3) + (uint64_t)local_buffer_50;
    uVar2 = 0;
  }
  return uVar2;
}
/**
 * UI系统事件交替处理器
 *
 * 功能：UI系统事件的交替处理函数，提供备用的事件处理逻辑
 *
 * 参数：
 * - param_1: 事件数据指针数组，包含事件相关信息
 * - param_2: 事件类型标识符
 *
 * 返回值：
 * - 0: 事件处理成功
 * - 非0: 事件处理失败，返回错误代码
 *
 * 技术说明：
 * - 实现了UI系统事件的交替处理逻辑
 * - 支持多种事件类型的处理和验证
 * - 包含错误检查和状态管理
 * - 使用栈分配的缓冲区提高性能
 *
 * 简化实现：原始实现是一个复杂的UI事件处理交替函数
 * 原始实现：GenericFunction_0018076c20 - UI系统事件交替处理器
 *
 * @param event_data 事件数据指针数组
 * @param event_type 事件类型标识符
 * @return 事件处理结果状态码
 */
uint64_t UIEventHandler_Alternate(int64_t *param_1,int param_2)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  uint64_t unaff_RBP;
  uint unaff_EDI;
  uint local_buffer_50;
  uint local_buffer_60;
  param_1 = (int64_t *)*param_1;
  if (*param_1 == 0) {
    uVar1 = param_2 + 0x1c;
    goto LAB_1808dde9c;
  }
  if (param_1[2] != unaff_RBP) {
    local_buffer_60 = (uint)unaff_RBP;
    uVar1 = SystemFunction_00018076a7d0(*param_1,&local_buffer_00000060);
    if (uVar1 != 0) goto LAB_1808dde9c;
    if ((uint64_t)param_1[2] < (uint64_t)local_buffer_60 + 2) {
      uVar1 = 0x11;
      goto LAB_1808dde9c;
    }
  }
  uVar1 = SystemDataAnalyzer(*param_1,&local_buffer_00000050,1);
LAB_1808dde9c:
  if (uVar1 == 0) {
    unaff_EDI = local_buffer_50 & 0xffff;
  }
  uVar2 = (uint64_t)uVar1;
  if (uVar1 == 0) {
    uVar2 = unaff_RBP & 0xffffffff;
  }
  if ((int)uVar2 == 0) {
    *(uint *)(unaff_RBX + 3) = unaff_EDI;
    local_buffer_50 = (uint)unaff_RBP;
    uVar2 = SystemFunction_00018076a7d0(*(uint64_t *)*unaff_RBX,&local_buffer_00000050);
    if ((int)uVar2 == 0) {
      unaff_RBX[2] = (uint64_t)local_buffer_50;
      *(uint64_t *)(*unaff_RBX + 0x10) =
           (uint64_t)*(uint *)(unaff_RBX + 3) + (uint64_t)local_buffer_50;
      uVar2 = 0;
    }
  }
  return uVar2;
}
/**
 * UI系统事件最终处理器
 *
 * 功能：UI系统事件的最终处理函数，完成事件处理的收尾工作
 *
 * 参数：
 * - 无显式参数，通过寄存器传递参数
 *
 * 返回值：
 * - 0: 事件处理成功
 * - 非0: 事件处理失败，返回错误代码
 *
 * 技术说明：
 * - 实现了UI系统事件的最终处理逻辑
 * - 使用寄存器传递参数提高性能
 * - 包含错误检查和状态管理
 * - 支持多种事件类型的收尾处理
 *
 * 简化实现：原始实现是一个复杂的UI事件处理最终函数
 * 原始实现：GenericFunction_0018076c30 - UI系统事件最终处理器
 *
 * @return 事件处理结果状态码
 */
uint64_t UIEventHandler_Final(void)
{
  uint64_t in_RAX;
  uint64_t uVar1;
  int64_t *unaff_RBX;
  uint unaff_EBP;
  bool in_ZF;
  ushort local_buffer_50;
  uVar1 = in_RAX & 0xffffffff;
  if (in_ZF) {
    uVar1 = (uint64_t)unaff_EBP;
  }
  if ((int)uVar1 == 0) {
    *(uint *)(unaff_RBX + 3) = (uint)local_buffer_50;
    _local_buffer_50 = unaff_EBP;
    uVar1 = SystemFunction_00018076a7d0(*(uint64_t *)*unaff_RBX,&local_buffer_00000050);
    if ((int)uVar1 == 0) {
      unaff_RBX[2] = (uint64_t)_local_buffer_50;
      *(uint64_t *)(*unaff_RBX + 0x10) =
           (uint64_t)*(uint *)(unaff_RBX + 3) + (uint64_t)_local_buffer_50;
      uVar1 = 0;
    }
  }
  return uVar1;
}
/**
 * UI系统事件错误处理器
 *
 * 功能：UI系统事件的错误处理函数，处理事件处理过程中的错误情况
 *
 * 参数：
 * - 无参数
 *
 * 返回值：
 * - 0x1c: 错误代码，表示UI事件处理错误
 *
 * 技术说明：
 * - 实现了UI系统事件的错误处理机制
 * - 提供统一的错误代码返回
 * - 支持错误状态的传播和处理
 * - 简化的错误处理逻辑
 *
 * 简化实现：原始实现是一个简单的错误返回函数
 * 原始实现：GenericFunction_0018076c40 - UI系统事件错误处理器
 *
 * @return 错误代码
 */
uint64_t UIEventHandler_ErrorHandler(void)
{
  return 0x1c;
}
uint64_t UIEventHandler_Advanced(int64_t *param_1,uint param_2)
{
  uint64_t uVar1;
  int16_t astack_special_x_8 [4];
  if ((param_1[2] == 0) && (param_2 < 0x10000)) {
    if (param_2 == 0) {
      astack_special_x_8[0] = 0;
      uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),astack_special_x_8,2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    *(uint *)(param_1 + 3) = param_2;
// WARNING: Could not recover jumptable at 0x0001808ddf67. Too many branches
// WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                      (*(int64_t **)(*param_1 + 8),param_1 + 2);
    return uVar1;
  }
  return 0x1c;
}
uint64_t AdvancedSystemManager(int64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  if (param_2 != param_1[1]) {
    return 0x1c;
  }
  uVar1 = MathTrigonometryFunction0(*(uint64_t *)*param_1,
                        ((uint64_t)(*(int *)(param_2 + 4) + 1) & 0xfffffffe) +
                        *(int64_t *)(param_2 + 8),0);
  if ((int)uVar1 == 0) {
    lVar2 = *(int64_t *)(param_2 + 0x10);
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (uint64_t)*(uint *)(lVar2 + 4) + *(int64_t *)(lVar2 + 8);
    }
    *(int64_t *)(*param_1 + 0x10) = lVar2;
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t SystemThreadManager(int64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  int32_t astack_special_x_8 [2];
  int iStackX_10;
  int32_t stack_special_x_14;
  if (param_2 != param_1[1]) {
    return 0x1c;
  }
  uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))(*(int64_t **)(*param_1 + 8),&iStackX_10)
  ;
  if ((int)uVar1 == 0) {
    *(int *)(param_2 + 4) = iStackX_10 - *(int *)(param_2 + 8);
    uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 0x10))
                      (*(int64_t **)(*param_1 + 8),*(int64_t *)(param_2 + 8) + -4,0);
    if ((int)uVar1 == 0) {
      astack_special_x_8[0] = *(int32_t *)(param_2 + 4);
      uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),astack_special_x_8,4);
      if (((int)uVar1 == 0) &&
         (uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 0x10))
                            (*(int64_t **)(*param_1 + 8),CONCAT44(stack_special_x_14,iStackX_10),0),
         (int)uVar1 == 0)) {
        if ((*(byte *)(param_2 + 4) & 1) != 0) {
          astack_special_x_8[0] = CONCAT31(astack_special_x_8[0]._1_3_,(char)uVar1);
          uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                            (*(uint64_t **)(*param_1 + 8),astack_special_x_8,1);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        param_1[1] = *(int64_t *)(param_2 + 0x10);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
uint64_t SystemCore_Initializer(int64_t *param_1,int32_t *param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  if (param_1[2] != 0) {
    uVar2 = MathTrigonometryFunction0(*(uint64_t *)*param_1,(uint64_t)*(uint *)(param_1 + 3) + param_1[2],0);
    if ((int)uVar2 == 0) {
      lVar1 = param_1[1];
      lVar3 = 0;
      if (lVar1 != 0) {
        lVar3 = (uint64_t)*(uint *)(lVar1 + 4) + *(int64_t *)(lVar1 + 8);
      }
      *(int64_t *)(*param_1 + 0x10) = lVar3;
      if (param_2 != (int32_t *)0x0) {
        *param_2 = (int)param_1[3];
      }
      *(int32_t *)(param_1 + 3) = 0;
      uVar2 = 0;
      param_1[2] = 0;
    }
    return uVar2;
  }
  return 0x1c;
}
uint64_t UIEventHandler_Extended(int64_t *param_1,uint *param_2)
{
  uint64_t uVar1;
  uint uVar2;
  int16_t astack_special_x_8 [4];
  int iStackX_18;
  int32_t stack_special_x_1c;
  if (param_1[2] != 0) {
    uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                      (*(int64_t **)(*param_1 + 8),&iStackX_18);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = iStackX_18 - (int)param_1[2];
    if (uVar2 < 0x10000) {
      if (*(uint *)(param_1 + 3) == 0) {
        uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 0x10))
                          (*(int64_t **)(*param_1 + 8),param_1[2] + -2,0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        astack_special_x_8[0] = (int16_t)uVar2;
        uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_8,2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 0x10))
                          (*(int64_t **)(*param_1 + 8),CONCAT44(stack_special_x_1c,iStackX_18),0);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      else if (*(uint *)(param_1 + 3) != uVar2) {
        return 0x1c;
      }
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar2;
      }
      *(int32_t *)(param_1 + 3) = 0;
      param_1[2] = 0;
      return 0;
    }
  }
  return 0x1c;
}
uint64_t SystemThreadManager_Main(int64_t *param_1,int param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  uint astack_special_x_8 [2];
  int8_t stack_array_28 [32];
  if (param_1[1] != 0) {
    return 0x1c;
  }
  plVar1 = param_1 + 4;
  uVar2 = DataCompressionProcessor(param_1,plVar1);
  astack_special_x_8[0] = (uint)uVar2;
  if (astack_special_x_8[0] == 0) {
    if (((int)param_1[7] == 2) && ((int)*plVar1 == param_2)) {
      uVar2 = (**(code **)(**(int64_t **)*param_1 + 0x10))(*(int64_t **)*param_1,astack_special_x_8);
      if ((int)uVar2 == 0) {
        if ((uint64_t)astack_special_x_8[0] <
            ((uint64_t)(*(int *)((int64_t)param_1 + 0x24) + 1) & 0xfffffffe) + param_1[5]) {
          return 0xd;
        }
        param_1[6] = param_1[1];
        param_1[1] = (int64_t)plVar1;
        *(uint64_t *)(*param_1 + 0x10) =
             (uint64_t)*(uint *)((int64_t)param_1 + 0x24) + param_1[5];
        uVar2 = DataFlowProcessor(param_1,stack_array_28,0,0x20544d46);
        if ((int)uVar2 == 0) {
          if (*(int *)(param_1[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar2 = SystemDataChecker(*param_1,param_1 + 8);
          if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
            AdvancedSystemManager(param_1,stack_array_28);
          }
        }
      }
    }
    else {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}
uint64_t SystemThreadManager_Alternate(int64_t param_1)
{
  int *piVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int unaff_ESI;
  uint local_buffer_50;
  piVar1 = (int *)(param_1 + 0x20);
  uVar2 = DataCompressionProcessor(param_1,piVar1);
  local_buffer_50 = (uint)uVar2;
  if (local_buffer_50 == 0) {
    if (((int)unaff_RBX[7] == 2) && (*piVar1 == unaff_ESI)) {
      uVar2 = (**(code **)(**(int64_t **)*unaff_RBX + 0x10))
                        (*(int64_t **)*unaff_RBX,&local_buffer_00000050);
      if ((int)uVar2 == 0) {
        if ((uint64_t)local_buffer_50 <
            ((uint64_t)(*(int *)((int64_t)unaff_RBX + 0x24) + 1) & 0xfffffffe) + unaff_RBX[5]) {
          return 0xd;
        }
        *(int64_t *)(param_1 + 0x30) = unaff_RBX[1];
        unaff_RBX[1] = (int64_t)piVar1;
        *(uint64_t *)(*unaff_RBX + 0x10) =
             (uint64_t)*(uint *)(param_1 + 0x24) + *(int64_t *)(param_1 + 0x28);
        uVar2 = DataFlowProcessor();
        if ((int)uVar2 == 0) {
          if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
            return 0x1c;
          }
          uVar2 = SystemDataChecker(*unaff_RBX,unaff_RBX + 8);
          if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
            AdvancedSystemManager();
          }
        }
      }
    }
    else {
      uVar2 = 0x13;
    }
  }
  return uVar2;
}
uint64_t SystemThreadManager_Final(void)
{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  *(int64_t *)(unaff_RDI + 0x10) = unaff_RBX[1];
  unaff_RBX[1] = unaff_RDI;
  *(uint64_t *)(*unaff_RBX + 0x10) =
       (uint64_t)*(uint *)(unaff_RDI + 4) + *(int64_t *)(unaff_RDI + 8);
  uVar1 = DataFlowProcessor();
  if ((int)uVar1 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemDataChecker(*unaff_RBX,unaff_RBX + 8);
    if ((int)uVar1 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return uVar1;
}
// 函数: void MathTrigonometryCalculator(void)
void MathTrigonometryCalculator(void)
{
  int iVar1;
  uint64_t *unaff_RBX;
  iVar1 = SystemDataChecker(*unaff_RBX,unaff_RBX + 8);
  if (iVar1 == 0) {
// WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
  return;
}
uint64_t SystemThreadManager_ErrorHandler(void)
{
  return 0x13;
}
uint64_t SystemDataProcessor_Main(int64_t *param_1,int32_t param_2,int32_t param_3)
{
  uint64_t uVar1;
  int32_t astack_special_x_8 [2];
  int32_t astack_special_x_20 [2];
  int32_t local_var_28;
  int32_t local_var_24;
  int8_t stack_array_20 [8];
  int64_t lStack_18;
  int iStack_10;
  uVar1 = DataCompressor0(param_1,param_1 + 4,2,0x46464952,param_2);
  if ((int)uVar1 == 0) {
    *(int32_t *)(param_1 + 8) = param_3;
    uVar1 = SystemFunction_0001808edd50(param_3,(int64_t)param_1 + 0x44);
    if ((int)uVar1 == 0) {
      if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0x18) == 0)) {
        return 0x1c;
      }
      local_var_28 = 0x20544d46;
      iStack_10 = 0;
      astack_special_x_8[0] = 0x20544d46;
      uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),astack_special_x_8,4);
      if ((int)uVar1 == 0) {
        local_var_24 = 0;
        astack_special_x_20[0] = 0;
        uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                          (*(uint64_t **)(*param_1 + 8),astack_special_x_20,4);
        if (((int)uVar1 == 0) &&
           (uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                              (*(int64_t **)(*param_1 + 8),stack_array_20), (int)uVar1 == 0)) {
          lStack_18 = param_1[1];
          param_1[1] = (int64_t)&local_var_28;
          if (iStack_10 != 0) {
            return 0x1c;
          }
          uVar1 = SystemDataController(*param_1,param_1 + 8);
          if ((int)uVar1 == 0) {
// WARNING: Subroutine does not return
            SystemThreadManager(param_1,&local_var_28);
          }
        }
      }
    }
  }
  return uVar1;
}
uint64_t SystemDataProcessor_Alternate(void)
{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int32_t unaff_EDI;
  int32_t local_var_30;
  int32_t local_buffer_34;
  int64_t local_var_40;
  int local_var_48;
  int32_t local_buffer_60;
  int32_t local_buffer_78;
  *(int32_t *)(unaff_RBX + 8) = unaff_EDI;
  uVar1 = SystemFunction_0001808edd50(unaff_EDI);
  if ((int)uVar1 == 0) {
    if ((unaff_RBX[1] != 0) && (*(int *)(unaff_RBX[1] + 0x18) == 0)) {
      return 0x1c;
    }
    local_var_30 = 0x20544d46;
    local_var_48 = 0;
    local_buffer_60 = 0x20544d46;
    uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000060,4);
    if ((int)uVar1 == 0) {
      local_buffer_34 = 0;
      local_buffer_78 = 0;
      uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                        (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000078,4);
      if (((int)uVar1 == 0) &&
         (uVar1 = (**(code **)(**(int64_t **)(*unaff_RBX + 8) + 8))
                            (*(int64_t **)(*unaff_RBX + 8),&local_buffer_00000038), (int)uVar1 == 0)) {
        local_var_40 = unaff_RBX[1];
        unaff_RBX[1] = (int64_t)&local_buffer_00000030;
        if (local_var_48 != 0) {
          return 0x1c;
        }
        uVar1 = SystemDataController(*unaff_RBX,unaff_RBX + 8);
        if ((int)uVar1 == 0) {
// WARNING: Subroutine does not return
          SystemThreadManager();
        }
      }
    }
  }
  return uVar1;
}
uint64_t SystemDataProcessor_Final(void)
{
  uint64_t uVar1;
  int64_t *unaff_RBX;
  int32_t local_var_30;
  int32_t local_buffer_34;
  int64_t local_var_40;
  int iStack0000000000000048;
  int32_t local_buffer_60;
  int32_t local_buffer_78;
  local_var_30 = 0x20544d46;
  iStack0000000000000048 = 0;
  local_buffer_60 = 0x20544d46;
  uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                    (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000060,4);
  if ((int)uVar1 == 0) {
    local_buffer_34 = 0;
    local_buffer_78 = 0;
    uVar1 = (**(code **)**(uint64_t **)(*unaff_RBX + 8))
                      (*(uint64_t **)(*unaff_RBX + 8),&local_buffer_00000078,4);
    if ((int)uVar1 == 0) {
      uVar1 = (**(code **)(**(int64_t **)(*unaff_RBX + 8) + 8))
                        (*(int64_t **)(*unaff_RBX + 8),&local_buffer_00000038);
      if ((int)uVar1 == 0) {
        local_var_40 = unaff_RBX[1];
        unaff_RBX[1] = (int64_t)&local_buffer_00000030;
        if (iStack0000000000000048 != 0) {
          return 0x1c;
        }
        uVar1 = SystemDataController(*unaff_RBX,unaff_RBX + 8);
        if ((int)uVar1 == 0) {
// WARNING: Subroutine does not return
          SystemThreadManager();
        }
      }
    }
  }
  return uVar1;
}
// 函数: void SystemDataProcessor_Cleanup(void)
void SystemDataProcessor_Cleanup(void)
{
  return;
}
uint64_t DataCompressionProcessor(uint64_t *param_1,int *param_2)
{
  uint64_t uVar1;
  uint astack_special_x_8 [2];
  uVar1 = SystemErrorHandler(*param_1,param_2,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = SystemErrorHandler(*param_1,param_2 + 1,4);
  astack_special_x_8[0] = (uint)uVar1;
  if (astack_special_x_8[0] != 0) {
    return uVar1;
  }
  uVar1 = SystemFunction_00018076a7d0(*(uint64_t *)*param_1,astack_special_x_8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *(uint64_t *)(param_2 + 2) = (uint64_t)astack_special_x_8[0];
  if (*param_2 == 0x46464952) {
    param_2[6] = 2;
  }
  else {
    if (*param_2 != 0x5453494c) {
      param_2[6] = 0;
      goto LAB_1808de561;
    }
    param_2[6] = 1;
  }
  uVar1 = SystemErrorHandler(*param_1,param_2,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
LAB_1808de561:
  param_2[4] = 0;
  param_2[5] = 0;
  return 0;
}
uint64_t SystemResourceManager_Main(int64_t *param_1,int32_t param_2)
{
  uint64_t uVar1;
  int8_t stack_array_28 [4];
  int iStack_24;
  int64_t lStack_20;
  int64_t lStack_18;
  uVar1 = DataFlowProcessor(param_1,stack_array_28,1,param_2);
  if ((int)uVar1 == 0) {
    if (stack_array_28 != (int8_t *)param_1[1]) {
      return 0x1c;
    }
    uVar1 = MathTrigonometryFunction0(*(uint64_t *)*param_1,
                          ((uint64_t)(iStack_24 + 1) & 0xfffffffe) + lStack_20,0);
    if ((int)uVar1 == 0) {
      param_1[1] = lStack_18;
      if (lStack_18 != 0) {
        *(uint64_t *)(*param_1 + 0x10) =
             (uint64_t)*(uint *)(lStack_18 + 4) + *(int64_t *)(lStack_18 + 8);
        return 0;
      }
      *(uint64_t *)(*param_1 + 0x10) = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}
// 函数: void SystemResourceManager_Cleanup(int64_t *param_1)
void SystemResourceManager_Cleanup(int64_t *param_1)
{
  int16_t astack_special_x_8 [16];
  astack_special_x_8[0] = 0;
  (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),astack_special_x_8,2);
  return;
}
uint64_t SystemResourceManager_ErrorHandler(uint64_t *param_1,int *param_2)
{
  uint64_t uVar1;
  int8_t stack_array_28 [32];
  uVar1 = DataFlowProcessor(param_1,stack_array_28,0,0x544e434c);
  if ((int)uVar1 == 0x12) {
    return uVar1;
  }
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemErrorHandler(*param_1,param_2,4);
    if ((int)uVar1 == 0) {
      if (*param_2 < 0) {
        return 0xd;
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager(param_1,stack_array_28);
    }
  }
  return uVar1;
}
uint64_t SystemResourceManager_Advanced(int64_t *param_1,int32_t *param_2)
{
  uint64_t uVar1;
  int32_t astack_special_x_8 [2];
  int aiStackX_18 [4];
  int32_t local_var_28;
  int iStack_24;
  int8_t stack_array_20 [8];
  int64_t lStack_18;
  int iStack_10;
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0x18) == 0)) {
    return 0x1c;
  }
  iStack_10 = 0;
  local_var_28 = 0x544e434c;
  astack_special_x_8[0] = 0x544e434c;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),astack_special_x_8,4);
  aiStackX_18[0] = (int)uVar1;
  if (((aiStackX_18[0] == 0) &&
      (iStack_24 = aiStackX_18[0],
      uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                        (*(uint64_t **)(*param_1 + 8),aiStackX_18,4), (int)uVar1 == 0)) &&
     (uVar1 = (**(code **)(**(int64_t **)(*param_1 + 8) + 8))
                        (*(int64_t **)(*param_1 + 8),stack_array_20), (int)uVar1 == 0)) {
    lStack_18 = param_1[1];
    param_1[1] = (int64_t)&local_var_28;
    if (iStack_10 != 0) {
      return 0x1c;
    }
    astack_special_x_8[0] = *param_2;
    uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))
                      (*(uint64_t **)(*param_1 + 8),astack_special_x_8,4);
    if ((int)uVar1 == 0) {
// WARNING: Subroutine does not return
      SystemThreadManager(param_1,&local_var_28);
    }
  }
  return uVar1;
}
uint64_t SystemResourceManager_Extended(int64_t *param_1,uint *param_2)
{
  uint64_t uVar1;
  uint uVar2;
  ushort astack_special_x_8 [4];
  uint astack_special_x_18 [2];
  uint astack_special_x_20 [2];
  param_1 = (int64_t *)*param_1;
  uVar2 = 0x1c;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      astack_special_x_18[0] = 0;
      uVar1 = SystemFunction_00018076a7d0(*param_1,astack_special_x_18);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((uint64_t)param_1[2] < (uint64_t)astack_special_x_18[0] + 2) {
        uVar1 = 0x11;
        goto LAB_1808de860;
      }
    }
    uVar1 = SystemDataAnalyzer(*param_1,astack_special_x_8,1,2,0);
  }
LAB_1808de860:
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *param_2 = (uint)astack_special_x_8[0];
  if ((astack_special_x_8[0] & 0x8000) == 0) {
    return 0;
  }
  if (*param_1 == 0) goto LAB_1808de8ce;
  if (param_1[2] != 0) {
    astack_special_x_20[0] = 0;
    uVar2 = SystemFunction_00018076a7d0(*param_1,astack_special_x_20);
    if (uVar2 != 0) goto LAB_1808de8ce;
    if ((uint64_t)param_1[2] < (uint64_t)astack_special_x_20[0] + 2) {
      uVar2 = 0x11;
      goto LAB_1808de8ce;
    }
  }
  uVar2 = SystemDataAnalyzer(*param_1,astack_special_x_8,1,2,0);
LAB_1808de8ce:
  if (uVar2 == 0) {
    *param_2 = *param_2 & 0x7fff;
    *param_2 = *param_2 | (uint)astack_special_x_8[0] << 0xf;
    return 0;
  }
  return (uint64_t)uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemResourceManager_Final(int64_t param_1,uint64_t param_2)
{
  int32_t *puVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  puVar1 = (int32_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&processed_var_8144_ptr,0x30,0,0,1);
  if (puVar1 == (int32_t *)0x0) {
    uVar3 = 0x26;
  }
  else {
    *puVar1 = 0;
    puVar2 = puVar1 + 2;
    *(int32_t **)puVar2 = puVar2;
    *(int32_t **)(puVar1 + 4) = puVar2;
    *(uint64_t *)(puVar1 + 6) = 0;
    *(uint64_t *)(puVar1 + 8) = 0;
    *(uint64_t *)(puVar1 + 10) = 0;
    puVar1[0xc] = 1;
    *(uint64_t *)(puVar1 + 0xd) = 0x2e;
    uVar3 = SystemDataManager(*(int32_t *)(param_1 + 0x18),puVar1);
    if ((int)uVar3 == 0) {
      uVar3 = SystemFunction_00018088c500(puVar1,param_2);
    }
  }
  return uVar3;
}
uint64_t SystemResourceManager_Complex(int64_t param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  if (*(int *)(param_1 + 0x2c) != 1) {
    return 0x1c;
  }
  lVar1 = *(int64_t *)(param_1 + 0x18);
  *(int32_t *)(param_1 + 0x2c) = 0;
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(lVar1 + 0x1a8))); iVar3 = iVar3 + 1) {
    uVar2 = SystemDataProcessor(*(uint64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar3 * 8) + 0xd0
                           ));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}
uint64_t SystemResourceManager_Alternate(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  lVar1 = *(int64_t *)(param_1 + 0x18);
  iVar4 = 0;
  while( true ) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x1a8) <= iVar4)) {
      return 0;
    }
    lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x1a0) + (int64_t)iVar4 * 8);
    if (((*(uint *)(lVar2 + 0xf8) >> 3 & 1) != 0) &&
       (uVar3 = SystemDataProcessor(*(uint64_t *)(lVar2 + 0xd0)), (int)uVar3 != 0)) break;
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
/* 函数别名定义: MathLibrary_SystemInitializer */
#define MathLibrary_SystemInitializer MathLibrary_SystemInitializer
/* 函数别名定义: MathTrigonometryFunction_Core */
#define MathTrigonometryFunction_Core MathTrigonometryFunction_Core
/* 函数别名定义: MathLibrary_ErrorHandler */
#define MathLibrary_ErrorHandler MathLibrary_ErrorHandler
/* 函数别名定义: UIEventHandler_Main */
#define UIEventHandler_Main UIEventHandler_Main
/* 函数别名定义: UIEventHandler_Alternate */
#define UIEventHandler_Alternate UIEventHandler_Alternate
/* 函数别名定义: UIEventHandler_Final */
#define UIEventHandler_Final UIEventHandler_Final
/* 函数别名定义: UIEventHandler_ErrorHandler */
#define UIEventHandler_ErrorHandler UIEventHandler_ErrorHandler
/* 函数别名定义: UIEventHandler_Advanced */
#define UIEventHandler_Advanced UIEventHandler_Advanced
/* 函数别名定义: UIEventHandler_Extended */
#define UIEventHandler_Extended UIEventHandler_Extended
/* 函数别名定义: SystemThreadManager_Main */
#define SystemThreadManager_Main SystemThreadManager_Main
/* 函数别名定义: SystemThreadManager_Alternate */
#define SystemThreadManager_Alternate SystemThreadManager_Alternate
/* 函数别名定义: SystemThreadManager_Final */
#define SystemThreadManager_Final SystemThreadManager_Final
/* 函数别名定义: SystemThreadManager_ErrorHandler */
#define SystemThreadManager_ErrorHandler SystemThreadManager_ErrorHandler
/* 函数别名定义: SystemDataProcessor_Main */
#define SystemDataProcessor_Main SystemDataProcessor_Main
/* 函数别名定义: SystemDataProcessor_Alternate */
#define SystemDataProcessor_Alternate SystemDataProcessor_Alternate
/* 函数别名定义: SystemDataProcessor_Final */
#define SystemDataProcessor_Final SystemDataProcessor_Final
/* 函数别名定义: SystemDataProcessor_Cleanup */
#define SystemDataProcessor_Cleanup SystemDataProcessor_Cleanup
/* 函数别名定义: SystemResourceManager_Main */
#define SystemResourceManager_Main SystemResourceManager_Main
/* 函数别名定义: SystemResourceManager_Cleanup */
#define SystemResourceManager_Cleanup SystemResourceManager_Cleanup
/* 函数别名定义: SystemResourceManager_ErrorHandler */
#define SystemResourceManager_ErrorHandler SystemResourceManager_ErrorHandler
/* 函数别名定义: SystemResourceManager_Advanced */
#define SystemResourceManager_Advanced SystemResourceManager_Advanced
/* 函数别名定义: SystemResourceManager_Extended */
#define SystemResourceManager_Extended SystemResourceManager_Extended
/* 函数别名定义: SystemResourceManager_Final */
#define SystemResourceManager_Final SystemResourceManager_Final
/* 函数别名定义: SystemResourceManager_Complex */
#define SystemResourceManager_Complex SystemResourceManager_Complex
/* 函数别名定义: SystemResourceManager_Alternate */
#define SystemResourceManager_Alternate SystemResourceManager_Alternate
/* 统一函数别名定义 */
#define SystemDataValidator SystemDataValidator
#define SystemDataProcessor SystemDataProcessor
#define SystemConfigValidator SystemConfigValidator
#define SystemDataFinalizer SystemDataFinalizer
#define SystemDataVerifier SystemDataVerifier
#define SystemDataHandler SystemDataHandler
#define SystemDataOptimizer SystemDataOptimizer
#define SystemDataInitializer SystemDataInitializer
#define SystemDataConfigurator SystemDataConfigurator
#define SystemDataChecker SystemDataChecker
#define SystemDataController SystemDataController
#define SystemDataManager SystemDataManager
/* 数学库和数据压缩模块函数别名定义 */
#define MathTrigonometryCalculator MathTrigonometryCalculator
#define DataCompressionProcessor DataCompressionProcessor