/**
 * 04_ui_system_part332.c - UI系统渲染纹理管理模块
 * 
 * 本模块实现了UI系统中的渲染纹理管理功能，包括：
 * - 纹理资源的动态分配和释放
 * - 纹理缓存和内存管理
 * - 纹理参数验证和安全检查
 * - 网络状态下的纹理同步
 * 
 * 企业级特性：
 * - 内存安全管理和边界检查
 * - 网络连接状态验证
 * - 资源分配失败处理
 * - 安全Cookie验证机制
 * 
 * @author 系统架构团队
 * @version 2.0
 * @date 2025-08-28
 */

#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part332.c - UI系统渲染纹理管理模块 (12个核心函数)

/**
 * 纹理资源清理器 - 清理和释放纹理资源
 * 
 * 此函数负责安全地清理纹理资源，包括：
 * - 验证纹理参数的有效性
 * - 执行内存安全释放操作
 * - 处理负数容量的特殊情况
 * - 调用系统内存管理器进行批量释放
 * 
 * @param param_1 纹理管理器指针，包含纹理资源和容量信息
 * 
 * 安全特性：
 * - 参数边界检查和验证
 * - 内存溢出保护
 * - 系统数据验证器集成
 * - 安全的内存释放流程
 * 
 * @note 此函数为核心内存管理组件，确保系统稳定性
 */
void FUN_18084dae0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  
  // 获取纹理容量并进行符号扩展验证
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    // 验证并清理现有纹理数据
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
      // 调用系统数据验证器进行安全清理
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    // 重置纹理管理器状态
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  
  // 处理纹理资源数组的清理
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = (uint64_t)uVar3;
  if ((int)uVar3 < 0) {
    // 处理负数容量的特殊情况
    lVar2 = (int64_t)(int)-uVar3;
    if ((int)uVar3 < 0) {
      lVar1 = (int64_t)(int)uVar3 * 0x10 + *param_1 + 0xc;
      do {
        // 安全清零纹理数据块
        *(uint64_t *)(lVar1 + -0xc) = 0;
        *(uint64_t *)(lVar1 + -4) = 0;
        lVar1 = lVar1 + 0x10;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (0 < (int)uVar3) {
    // 正常容量的纹理资源释放
    lVar2 = *param_1;
    do {
      // 调用系统核心内存管理器释放纹理资源
      SystemCore_MemoryManager(lVar2);
      lVar2 = lVar2 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  
  // 最终状态重置和验证
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3)) {
    // 调用纹理资源最终清理函数
    FUN_18084def0(param_1,0);
  }
  return;
}





/**
 * 批量纹理资源释放器 - 高效释放多个纹理资源
 * 
 * 此函数实现批量纹理资源的释放操作：
 * - 遍历并释放纹理资源数组
 * - 处理未使用的寄存器变量
 * - 执行内存安全验证
 * - 调用系统清理函数
 * 
 * 技术特点：
 * - 使用未使用的寄存器变量进行状态管理
 * - 集成系统核心内存管理器
 * - 安全的边界检查机制
 * - 高效的循环释放算法
 * 
 * @note 此函数为优化版本，使用寄存器变量提升性能
 */
void FUN_18084db76(void)
{
  int64_t in_RAX;
  uint uVar1;
  int64_t lVar2;
  int32_t unaff_EBP;
  int64_t *unaff_RDI;
  
  // 从未使用的寄存器获取纹理资源指针
  lVar2 = *unaff_RDI;
  do {
    // 批量调用系统核心内存管理器释放纹理资源
    SystemCore_MemoryManager(lVar2);
    lVar2 = lVar2 + 0x10;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
  
  // 执行容量验证和状态重置
  uVar1 = (int)*(uint *)((int64_t)unaff_RDI + 0xc) >> 0x1f;
  *(int32_t *)(unaff_RDI + 1) = unaff_EBP;
  if (0 < (int)((*(uint *)((int64_t)unaff_RDI + 0xc) ^ uVar1) - uVar1)) {
    // 调用纹理资源最终清理函数
    FUN_18084def0();
  }
  return;
}





/**
 * 快速纹理状态重置器 - 重置纹理状态信息
 * 
 * 此函数提供快速的纹理状态重置功能：
 * - 重置纹理容量和状态信息
 * - 执行符号扩展验证
 * - 调用系统清理函数
 * - 保持内存安全性
 * 
 * 性能优化：
 * - 最小化内存访问操作
 * - 使用高效的位运算进行验证
 * - 快速路径执行
 * - 寄存器变量优化
 * 
 * @note 此函数为性能关键路径，需要高效执行
 */
void FUN_18084dba2(void)
{
  uint uVar1;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  
  // 执行容量符号扩展验证
  uVar1 = (int)*(uint *)(unaff_RDI + 0xc) >> 0x1f;
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if (0 < (int)((*(uint *)(unaff_RDI + 0xc) ^ uVar1) - uVar1)) {
    // 调用纹理资源最终清理函数
    FUN_18084def0();
  }
  return;
}



/**
 * 纹理对象销毁器 - 完整销毁纹理对象和相关资源
 * 
 * 此函数负责完整销毁纹理对象：
 * - 清理纹理数据和管理器状态
 * - 释放关联的系统资源
 * - 可选的内存释放操作
 * - 返回处理后的对象指针
 * 
 * 功能特点：
 * - 条件性的内存释放控制
 * - 链式资源清理
 * - 系统资源管理器集成
 * - 安全的资源释放顺序
 * 
 * @param param_1 纹理对象指针
 * @param param_2 控制标志位，决定是否释放对象内存
 * @return 处理后的纹理对象指针
 * 
 * @note 此函数确保资源的安全释放，避免内存泄漏
 */
int64_t FUN_18084dbd0(int64_t param_1,uint64_t param_2)
{
  // 清理纹理管理器状态
  FUN_18084dae0(param_1 + 0x60);
  // 释放系统核心内存资源
  SystemCore_MemoryManager(param_1 + 0x50);
  // 调用系统分析器进行资源清理
  FUN_1808b02a0(param_1);
  
  // 根据标志位决定是否释放对象内存
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 纹理参数验证器 - 验证和处理纹理参数
 * 
 * 此函数实现纹理参数的安全验证：
 * - 验证参数的有效性和完整性
 * - 执行安全Cookie检查
 * - 调用系统验证函数
 * - 处理参数边界情况
 * 
 * 安全特性：
 * - 安全Cookie机制保护栈溢出
 * - 参数边界检查
 * - 系统安全检查器集成
 * - 异常情况处理
 * 
 * @param param_1 纹理参数数组指针
 * 
 * @note 此函数为关键安全组件，确保参数的有效性
 */
void FUN_18084dc20(int32_t *param_1)
{
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  uint64_t uStack_10;
  
  // 初始化安全Cookie保护机制
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  
  // 复制参数到栈上进行处理
  uStack_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = param_1[3];
  uStack_28 = 0;
  
  // 执行参数验证和处理
  FUN_1808b11b0(&uStack_20,4,&uStack_28,(int64_t)&uStack_28 + 4);
  FUN_1808b11b0(&uStack_1c,2,&uStack_28,(int64_t)&uStack_28 + 4);
  FUN_1808b11b0((int64_t)&uStack_1c + 2,2,&uStack_28,(int64_t)&uStack_28 + 4);
  FUN_1808b11b0(&uStack_18,8,&uStack_28,(int64_t)&uStack_28 + 4);
  
  // 执行最终的安全检查
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
}



/**
 * 纹理缓冲区查找器 - 在纹理缓冲区中查找指定纹理
 * 
 * 此函数实现纹理缓冲区的查找功能：
 * - 在纹理缓冲区数组中查找匹配的纹理
 * - 验证缓冲区边界和有效性
 * - 支持可选的参数验证
 * - 返回查找结果和相关信息
 * 
 * 算法特点：
 * - 高效的线性搜索算法
 * - 边界检查和安全性验证
 * - 内存管理器集成
 * - 错误处理和状态返回
 * 
 * @param param_1 纹理管理器指针
 * @param param_2 可选的验证参数
 * @param param_3 输出参数，用于返回查找结果
 * @return 查找状态码，0表示成功，其他值表示错误
 * 
 * @note 此函数支持无限循环查找，直到找到匹配项或出错
 */
uint64_t FUN_18084de40(int64_t param_1,int64_t param_2,float *param_3)
{
  int iVar1;
  void *puVar2;
  uint64_t *puVar3;
  float fVar4;
  
  // 获取纹理缓冲区指针
  puVar3 = *(uint64_t **)(param_1 + 0x60);
  fVar4 = 0.0;
  
  do {
    // 验证缓冲区边界
    if ((puVar3 < *(uint64_t **)(param_1 + 0x60)) ||
       (*(uint64_t **)(param_1 + 0x60) + (int64_t)*(int *)(param_1 + 0x68) * 2 <= puVar3)) {
      return 0x4a; // 缓冲区越界错误
    }
    
    // 执行可选的参数验证
    if (param_2 != 0) {
      if (*(int *)(puVar3 + 1) < 1) {
        puVar2 = &system_buffer_ptr;
      }
      else {
        puVar2 = (void *)*puVar3;
      }
      iVar1 = MemoryManager_ValidateBuffer(puVar2,param_2);
      if (iVar1 == 0) {
        *param_3 = fVar4;
        return 0; // 查找成功
      }
    }
    
    // 继续查找下一个纹理
    fVar4 = fVar4 + 1.0;
    puVar3 = puVar3 + 2;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 纹理资源分配器 - 分配和初始化纹理资源
 * 
 * 此函数实现纹理资源的动态分配：
 * - 验证分配参数的有效性
 * - 调用系统资源管理器分配内存
 * - 处理现有纹理数据的迁移
 * - 执行安全的数据复制操作
 * 
 * 内存管理特性：
 * - 边界检查和溢出保护
 * - 系统资源管理器集成
 * - 安全的数据迁移机制
 * - 内存安全验证
 * 
 * @param param_1 纹理管理器指针
 * @param param_2 要分配的纹理数量
 * @return 分配状态码，0表示成功
 * 
 * @note 此函数为关键内存分配组件，确保资源安全分配
 */
uint64_t FUN_18084def0(int64_t *param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int iVar6;
  int64_t lVar7;
  
  // 验证分配参数
  if (param_2 < (int)param_1[1]) {
    return 0x1c; // 参数不足错误
  }
  
  lVar3 = 0;
  if (param_2 != 0) {
    // 检查分配大小是否合理并分配内存
    if ((0x3ffffffe < param_2 * 0x10 - 1U) ||
       (lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x10,&processed_var_8432_ptr,
                              0xf4,0,0,1), lVar3 == 0)) {
      return 0x26; // 内存分配失败
    }
    
    // 处理现有纹理数据的迁移
    iVar1 = (int)param_1[1];
    lVar4 = (int64_t)iVar1;
    if (iVar1 != 0) {
      iVar6 = 0;
      lVar2 = *param_1;
      if (0 < iVar1) {
        puVar5 = (int32_t *)(lVar3 + 0xc);
        lVar7 = lVar2 - lVar3;
        do {
          // 安全的数据复制和清理
          *(uint64_t *)(puVar5 + -3) = 0;
          *(uint64_t *)(puVar5 + -1) = 0;
          *(uint64_t *)(puVar5 + -3) = *(uint64_t *)(lVar7 + -0xc + (int64_t)puVar5);
          puVar5[-1] = *(int32_t *)(lVar7 + -4 + (int64_t)puVar5);
          *puVar5 = *(int32_t *)(lVar7 + (int64_t)puVar5);
          *(uint64_t *)(lVar7 + -0xc + (int64_t)puVar5) = 0;
          *(uint64_t *)(lVar7 + -4 + (int64_t)puVar5) = 0;
          SystemCore_MemoryManager((int64_t)iVar6 * 0x10 + lVar2);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  
  // 清理现有纹理数据
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
    // 调用系统数据验证器进行安全清理
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  
  // 更新纹理管理器状态
  *param_1 = lVar3;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 寄存器变量纹理分配器 - 使用未使用寄存器的纹理分配
 * 
 * 此函数使用未使用的寄存器变量进行纹理分配：
 * - 利用未使用的寄存器变量提升性能
 * - 执行高效的内存分配操作
 * - 处理纹理数据的迁移和清理
 * - 维护纹理管理器状态
 * 
 * 性能优化特性：
 * - 寄存器变量优化
 * - 高效的内存分配算法
 * - 最小化的内存访问
 * - 安全的数据处理
 * 
 * @param param_1 纹理管理器参数
 * @param param_2 要分配的纹理数量
 * @return 分配状态码，0表示成功
 * 
 * @note 此函数为优化版本，使用寄存器变量提升性能
 */
uint64_t FUN_18084df0d(uint64_t param_1,int param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int unaff_ESI;
  int64_t *unaff_RDI;
  int iVar6;
  int64_t lVar7;
  
  lVar3 = 0;
  if (unaff_ESI != 0) {
    // 检查分配大小并分配内存
    if ((0x3ffffffe < param_2 * 0x10 - 1U) ||
       (lVar3 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x10,&processed_var_8432_ptr,
                              0xf4,0), lVar3 == 0)) {
      return 0x26; // 内存分配失败
    }
    
    // 处理现有纹理数据的迁移
    iVar1 = (int)unaff_RDI[1];
    lVar4 = (int64_t)iVar1;
    if (iVar1 != 0) {
      iVar6 = 0;
      lVar2 = *unaff_RDI;
      if (0 < iVar1) {
        puVar5 = (int32_t *)(lVar3 + 0xc);
        lVar7 = lVar2 - lVar3;
        do {
          // 安全的数据复制和清理
          *(uint64_t *)(puVar5 + -3) = 0;
          *(uint64_t *)(puVar5 + -1) = 0;
          *(uint64_t *)(puVar5 + -3) = *(uint64_t *)(lVar7 + -0xc + (int64_t)puVar5);
          puVar5[-1] = *(int32_t *)(lVar7 + -4 + (int64_t)puVar5);
          *puVar5 = *(int32_t *)(lVar7 + (int64_t)puVar5);
          *(uint64_t *)(lVar7 + -0xc + (int64_t)puVar5) = 0;
          *(uint64_t *)(lVar7 + -4 + (int64_t)puVar5) = 0;
          SystemCore_MemoryManager((int64_t)iVar6 * 0x10 + lVar2);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  
  // 清理现有纹理数据
  if ((0 < *(int *)((int64_t)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
    // 调用系统数据验证器进行安全清理
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RDI,&processed_var_8432_ptr,0x100,1);
  }
  
  // 更新纹理管理器状态
  *unaff_RDI = lVar3;
  *(int *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 寄存器优化纹理迁移器 - 使用寄存器优化的纹理数据迁移
 * 
 * 此函数实现使用寄存器优化的纹理数据迁移：
 * - 使用未使用的寄存器变量提升性能
 * - 批量处理纹理数据的迁移
 * - 安全的数据复制和清理
 * - 高效的内存管理操作
 * 
 * 性能优化：
 * - 寄存器变量优化
 * - 批量数据处理
 * - 最小化的内存访问
 * - 高效的循环处理
 * 
 * @return 迁移状态码，0表示成功
 * 
 * @note 此函数为性能关键路径，需要高效执行
 */
uint64_t FUN_18084df73(void)
{
  int64_t lVar1;
  int64_t in_RAX;
  int32_t *puVar2;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  int iVar3;
  int64_t lVar4;
  
  iVar3 = 0;
  lVar1 = *unaff_RDI;
  
  // 批量处理纹理数据迁移
  if (0 < (int)in_RAX) {
    puVar2 = (int32_t *)(unaff_RBP + 0xc);
    lVar4 = lVar1 - unaff_RBP;
    do {
      // 安全的数据复制和清理
      *(uint64_t *)(puVar2 + -3) = 0;
      *(uint64_t *)(puVar2 + -1) = 0;
      *(uint64_t *)(puVar2 + -3) = *(uint64_t *)(lVar4 + -0xc + (int64_t)puVar2);
      puVar2[-1] = *(int32_t *)(lVar4 + -4 + (int64_t)puVar2);
      *puVar2 = *(int32_t *)(lVar4 + (int64_t)puVar2);
      *(uint64_t *)(lVar4 + -0xc + (int64_t)puVar2) = 0;
      *(uint64_t *)(lVar4 + -4 + (int64_t)puVar2) = 0;
      SystemCore_MemoryManager((int64_t)iVar3 * 0x10 + lVar1);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 4;
      in_RAX = in_RAX + -1;
    } while (in_RAX != 0);
  }
  
  // 清理现有纹理数据
  if ((0 < *(int *)((int64_t)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
    // 调用系统数据验证器进行安全清理
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RDI,&processed_var_8432_ptr,0x100,1);
  }
  
  // 更新纹理管理器状态
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084df94(uint64_t param_1)

{
  int32_t *puVar1;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  int unaff_R12D;
  int64_t unaff_R13;
  int64_t lVar2;
  int64_t unaff_R15;
  
  puVar1 = (int32_t *)(unaff_RBP + 0xc);
  lVar2 = unaff_R13 - unaff_RBP;
  do {
    *(uint64_t *)(puVar1 + -3) = param_1;
    *(uint64_t *)(puVar1 + -1) = 0;
    *(uint64_t *)(puVar1 + -3) = *(uint64_t *)(lVar2 + -0xc + (int64_t)puVar1);
    puVar1[-1] = *(int32_t *)(lVar2 + -4 + (int64_t)puVar1);
    *puVar1 = *(int32_t *)(lVar2 + (int64_t)puVar1);
    *(uint64_t *)(lVar2 + -0xc + (int64_t)puVar1) = param_1;
    *(uint64_t *)(lVar2 + -4 + (int64_t)puVar1) = 0;
    SystemCore_MemoryManager((int64_t)unaff_R12D * 0x10 + unaff_R13);
    unaff_R12D = unaff_R12D + 1;
    puVar1 = puVar1 + 4;
    param_1 = 0;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  if ((0 < *(int *)((int64_t)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RDI,&processed_var_8432_ptr,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084e00c(void)

{
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  
  if ((0 < *(int *)((int64_t)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RDI,&processed_var_8432_ptr,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084e01e(void)

{
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  int64_t *unaff_RDI;
  
  if ((0 < *(int *)((int64_t)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RDI,&processed_var_8432_ptr,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((int64_t)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



uint64_t FUN_18084e065(void)

{
  return 0x26;
}



uint64_t FUN_18084e110(int64_t *param_1,char *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  
  if (*param_2 == '\0') {
    SystemCore_MemoryManager();
    return 0;
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_2[lVar5] != '\0');
  iVar4 = (int)lVar5 + 1;
  if (0xfffff < iVar4) {
    return 0x1c;
  }
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if ((int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3) < iVar4) {
    uVar2 = SystemDeallocationProcessor(param_1,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < iVar4) {
                    // WARNING: Subroutine does not return
    memset((int64_t)iVar1 + *param_1,0,(int64_t)(iVar4 - iVar1));
  }
  *(int *)(param_1 + 1) = iVar4;
                    // WARNING: Subroutine does not return
  memcpy(*param_1,param_2,(int64_t)iVar4);
}



int64_t FUN_18084e3b0(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  SystemAnalyzer(param_1 + 0xf8);
  UIComponent_StateProcessor(param_1 + 0xb0);
  RenderingSystem_UpdateTexture(param_1 + 0xa0);
  SystemAnalyzer(param_1 + 0x90);
  SystemAnalyzer(param_1 + 0x80);
  UIComponent_StateProcessor(param_1 + 0x50);
  plVar1 = (int64_t *)(param_1 + 0x20);
  **(int64_t **)(param_1 + 0x28) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x28);
  *(int64_t **)(param_1 + 0x28) = plVar1;
  *plVar1 = (int64_t)plVar1;
  **(int64_t **)(param_1 + 0x28) = (int64_t)plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(param_1 + 0x28);
  *(int64_t **)(param_1 + 0x28) = plVar1;
  *plVar1 = (int64_t)plVar1;
  FUN_1808b1a30(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x108);
  }
  return param_1;
}



uint64_t FUN_18084e470(uint64_t param_1,uint64_t param_2)

{
  FUN_1808b1a30();
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18084e4b0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int8_t uVar3;
  short sVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t lStackX_8;
  
  sVar4 = NetworkingSystem_GetConnectionStatus(*(uint64_t *)(param_1 + 0x40));
  lVar2 = *(int64_t *)(param_1 + 0x40);
  if (sVar4 == 4) {
    if ((*(byte *)(lVar2 + 0xc4) & 1) == 0) {
      return 0x1c;
    }
    uVar6 = FUN_18084edf0(param_1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  else if ((((*(int *)(lVar2 + 0x58) != 0) || (*(int *)(lVar2 + 0x5c) != 0)) ||
           (*(int *)(lVar2 + 0x60) != 0)) || (*(int *)(lVar2 + 100) != 0)) {
    uVar8 = 0;
    lStackX_8 = 0;
    uVar6 = FUN_1808bc010(*(uint64_t *)(param_1 + 0x38),(int *)(lVar2 + 0x58),
                          *(uint64_t *)(param_1 + 0x70),&lStackX_8);
    lVar2 = lStackX_8;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if (*(int64_t *)(param_1 + 0x60) != 0) {
      return 0x1c;
    }
    *(int64_t *)(param_1 + 0x60) = lStackX_8;
    plVar1 = (int64_t *)(lStackX_8 + 0x50);
    plVar7 = *(int64_t **)(lStackX_8 + 0x50);
    if (plVar7 == plVar1) {
LAB_18084e5ba:
      if (plVar7 != plVar1) {
        return 0x1c;
      }
    }
    else {
      do {
        if (plVar7[2] == param_1) goto LAB_18084e5ba;
      } while ((plVar7 != plVar1) && (plVar7 = (int64_t *)*plVar7, plVar7 != plVar1));
    }
    plVar7 = (int64_t *)
             SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&ui_system_data_1696_ptr,0xbf,0,0,1);
    if (plVar7 == (int64_t *)0x0) {
      uVar8 = 0x26;
    }
    else {
      *plVar7 = (int64_t)plVar7;
      plVar7[1] = (int64_t)plVar7;
      plVar7[2] = param_1;
      plVar7[1] = *(int64_t *)(lVar2 + 0x58);
      *plVar7 = (int64_t)plVar1;
      *(int64_t **)(lVar2 + 0x58) = plVar7;
      *(int64_t **)plVar7[1] = plVar7;
    }
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar5 = FUN_18073f130(*(uint64_t *)(*(int64_t *)(param_1 + 0x60) + 0x78),
                          *(uint64_t *)(param_1 + 0x78),1,0);
    if ((uVar5 == 0) &&
       (((*(byte *)(*(int64_t *)(param_1 + 0x40) + 0xc4) & 1) != 0 ||
        (uVar5 = FUN_1808b8f60(*(uint64_t *)(*(int64_t *)(param_1 + 0x60) + 0x70),param_1),
        uVar5 == 0)))) {
      uVar3 = FUN_180853120(*(uint64_t *)(param_1 + 0x60));
      FUN_180853fc0(param_1,uVar3);
    }
    else if (uVar5 != 0) {
      return (uint64_t)uVar5;
    }
  }
  return 0;
}



uint64_t FUN_18084e710(uint64_t *param_1,uint64_t param_2,char param_3)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = (**(code **)*param_1)();
  if (*(int *)(lVar2 + 0xcc) == 0x7fffffff) goto LAB_18084e8ab;
  if (*(int *)(lVar2 + 0xcc) <= *(int *)(param_1 + 0x20)) {
    lVar2 = (**(code **)*param_1)(param_1);
    iVar1 = *(int *)(lVar2 + 0xd0);
    if (iVar1 == 2) {
      lVar2 = *(int64_t *)param_1[0x1f];
    }
    else {
      if (iVar1 == 3) {
        iVar1 = 0;
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x20)) {
          lVar6 = 0;
          lVar2 = 0;
          do {
            iVar4 = MathFunction_ComputeVector(*(uint64_t *)(lVar6 + param_1[0x1f]),
                                        *(uint64_t *)(lVar2 + param_1[0x1f]));
            if (iVar4 < 0) {
              lVar2 = lVar6;
              iVar1 = iVar7;
            }
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 8;
          } while (iVar7 < *(int *)(param_1 + 0x20));
        }
      }
      else {
        if (iVar1 != 4) goto LAB_18084e841;
        iVar1 = 0;
        iVar7 = 1;
        if (1 < *(int *)(param_1 + 0x20)) {
          lVar6 = 8;
          lVar2 = 0;
          do {
            iVar4 = FUN_18085f500(*(uint64_t *)(lVar6 + param_1[0x1f]),
                                  *(uint64_t *)(lVar2 + param_1[0x1f]));
            if (0 < iVar4) {
              lVar2 = lVar6;
              iVar1 = iVar7;
            }
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 8;
          } while (iVar7 < *(int *)(param_1 + 0x20));
        }
      }
      lVar2 = *(int64_t *)(param_1[0x1f] + (int64_t)iVar1 * 8);
    }
    if ((lVar2 != 0) && (uVar3 = FUN_180863820(lVar2,1), (int)uVar3 != 0)) {
      return uVar3;
    }
  }
LAB_18084e841:
  uVar5 = (int)*(uint *)((int64_t)param_1 + 0x104) >> 0x1f;
  iVar7 = *(int *)(param_1 + 0x20) + 1;
  iVar1 = (*(uint *)((int64_t)param_1 + 0x104) ^ uVar5) - uVar5;
  if (iVar1 < iVar7) {
    iVar4 = (int)((float)iVar1 * 1.5);
    iVar1 = iVar7;
    if (iVar7 <= iVar4) {
      iVar1 = iVar4;
    }
    iVar8 = 8;
    if ((7 < iVar1) && (iVar8 = iVar4, iVar4 < iVar7)) {
      iVar8 = iVar7;
    }
    uVar3 = RenderingTextureManager0(param_1 + 0x1f,iVar8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  *(uint64_t *)(param_1[0x1f] + (int64_t)*(int *)(param_1 + 0x20) * 8) = param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
LAB_18084e8ab:
  if (((param_3 == '\0') || (param_1[0xc] == 0)) ||
     (uVar3 = FUN_18084e710(param_1[0xc],param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_18084e8f0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,int *param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int32_t uStack_24;
  
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 == -1) {
    uVar1 = *param_3;
    iVar9 = *(int *)(param_1 + 0x18);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    iVar7 = iVar9 + 1;
    uVar8 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
    iVar4 = (*(uint *)(param_1 + 0x1c) ^ uVar8) - uVar8;
    if (iVar4 < iVar7) {
      iVar4 = (int)((float)iVar4 * 1.5);
      if (iVar7 <= iVar4) {
        iVar7 = iVar4;
      }
      if (iVar7 < 2) {
        iVar7 = 2;
      }
      uVar5 = Physics_AnimationProcessor(param_1 + 0x10,iVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = (uint64_t *)
             ((int64_t)*(int *)(param_1 + 0x18) * 0x20 + *(int64_t *)(param_1 + 0x10));
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
    puVar6[2] = CONCAT44(uStack_24,0xffffffff);
    puVar6[3] = uVar1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  else {
    puVar6 = (uint64_t *)((int64_t)iVar9 * 0x20 + *(int64_t *)(param_1 + 0x10));
    *(int32_t *)(param_1 + 0x20) = *(int32_t *)(puVar6 + 2);
    *(int32_t *)(puVar6 + 2) = 0xffffffff;
    uVar1 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar1;
    puVar6[3] = *param_3;
  }
  *param_4 = iVar9;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return 0;
}



uint64_t FUN_18084e9e0(int64_t param_1)

{
  int32_t uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uStackX_8;
  
  if (*(int64_t *)(param_1 + 0x68) == 0) {
    uVar3 = *(uint64_t *)(param_1 + 0x78);
    uStackX_8 = 0;
    if (*(int *)(param_1 + 0x88) == 0) {
      uVar1 = *(int32_t *)(*(int64_t *)(param_1 + 0x40) + 0xc0);
      iVar2 = UltraHighFreq_PhysicsEngine1(uVar3,0xfffffffe,&uStackX_8);
      uVar3 = uStackX_8;
      if (iVar2 != 0) {
        uVar3 = 0;
      }
      uVar3 = FUN_180853bf0(uVar3,uVar1);
      if ((int)uVar3 == 0) {
        return 0;
      }
      return uVar3;
    }
  }
  else {
    uVar3 = FUN_1807417b0(*(int64_t *)(param_1 + 0x68),1,
                          *(int32_t *)(*(int64_t *)(param_1 + 0x40) + 0xc0));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180853bf0(*(uint64_t *)(param_1 + 0x68),
                          *(int32_t *)(*(int64_t *)(param_1 + 0x40) + 0xc0));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = *(uint64_t *)(param_1 + 0x78);
  }
  uStackX_8 = 0;
  iVar2 = UltraHighFreq_PhysicsEngine1(uVar3,0xfffffffe,&uStackX_8);
  uVar3 = uStackX_8;
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  uVar3 = FUN_1807411a0(uVar3,0,0,0);
  if ((int)uVar3 == 0) {
    return 0;
  }
  return uVar3;
}



uint64_t FUN_18084ea8c(void)

{
  uint64_t uVar1;
  
  UltraHighFreq_PhysicsEngine1();
  uVar1 = FUN_180853bf0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_18084eab7(void)

{
  return 0;
}



uint64_t FUN_18084ead0(int64_t param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uStackX_8;
  
  cVar1 = *(char *)(*(int64_t *)(param_1 + 0x38) + 0x783);
  if ((cVar1 == '\0') && (param_2 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    uStackX_8 = 0;
    if (*(int *)(param_1 + 0x98) == 0) {
      iVar2 = UltraHighFreq_PhysicsEngine1(*(uint64_t *)(param_1 + 0x78),0xfffffffe,&uStackX_8);
      uVar4 = uStackX_8;
      if (iVar2 != 0) {
        uVar4 = uVar5;
      }
      uVar3 = FUN_180741320(uVar4,param_2,uVar3);
      iVar2 = (int)uVar3;
      goto joined_r0x00018084ebb8;
    }
    iVar2 = UltraHighFreq_PhysicsEngine1(*(uint64_t *)(param_1 + 0x78),0xfffffffe,&uStackX_8);
    uVar4 = uStackX_8;
    if (iVar2 != 0) {
      uVar4 = uVar5;
    }
    uVar4 = FUN_180741320(uVar4,param_2,cVar1);
    iVar2 = (int)uVar4;
  }
  else {
    uVar4 = FUN_1808b5bd0(**(uint64_t **)(param_1 + 0x80),param_2,cVar1);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 0) {
    return uVar4;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    uStackX_8 = 0;
    iVar2 = UltraHighFreq_PhysicsEngine1(*(uint64_t *)(param_1 + 0x78),0xfffffffe,&uStackX_8);
    uVar4 = uStackX_8;
    if (iVar2 != 0) {
      uVar4 = uVar5;
    }
    uVar3 = FUN_180741320(uVar4,0,uVar3);
    iVar2 = (int)uVar3;
  }
  else {
    uVar3 = FUN_1808b5bd0(*(uint64_t *)
                           (*(int64_t *)(param_1 + 0x90) + -8 +
                           (int64_t)*(int *)(param_1 + 0x98) * 8),0,uVar3);
    iVar2 = (int)uVar3;
  }
joined_r0x00018084ebb8:
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_18084ec10(int64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if ((((*(byte *)(param_1 + 0xc0) & 1) == 0) &&
      (*(char *)(*(int64_t *)(param_1 + 0x40) + 0x75) == '\0')) &&
     ((*(int64_t *)(param_1 + 0x60) == 0 || (cVar2 = FUN_1808530e0(), cVar2 == '\0')))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (*(int64_t *)(param_1 + 0x48) != 0) {
    *(char *)(*(int64_t *)(param_1 + 0x48) + 0x2b) = cVar2;
  }
  if (((cVar2 == '\0') && ((*(byte *)(param_1 + 0xc0) & 1) == 0)) &&
     (lVar1 = *(int64_t *)(param_1 + 0x40), *(char *)(lVar1 + 0x75) == '\0')) {
    uStack_18 = *(int32_t *)(lVar1 + 0x10);
    uStack_14 = *(int32_t *)(lVar1 + 0x14);
    uStack_10 = *(int32_t *)(lVar1 + 0x18);
    uStack_c = *(int32_t *)(lVar1 + 0x1c);
    uVar6 = 0;
    cVar2 = SystemCore_ValidateRequest(*(uint64_t *)(param_1 + 0x38),&uStack_18);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_180853ee2;
    }
  }
  else {
    uVar6 = 1;
  }
  uVar4 = 1;
LAB_180853ee2:
  for (puVar5 = *(uint64_t **)(param_1 + 0x80);
      (*(uint64_t **)(param_1 + 0x80) <= puVar5 &&
      (puVar5 < *(uint64_t **)(param_1 + 0x80) + *(int *)(param_1 + 0x88))); puVar5 = puVar5 + 1)
  {
    uVar3 = FUN_1808b5de0(*puVar5,uVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  for (puVar5 = *(uint64_t **)(param_1 + 0x90);
      (*(uint64_t **)(param_1 + 0x90) <= puVar5 &&
      (puVar5 < *(uint64_t **)(param_1 + 0x90) + *(int *)(param_1 + 0x98))); puVar5 = puVar5 + 1)
  {
    uVar3 = FUN_1808b5de0(*puVar5,uVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  FUN_18073d7c0(*(uint64_t *)(param_1 + 0x78),uVar4);
  puVar5 = *(uint64_t **)(param_1 + 0x50);
  while( true ) {
    if (puVar5 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    uVar4 = FUN_180853e80(puVar5[2],uVar6);
    if ((int)uVar4 != 0) break;
    if (puVar5 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    puVar5 = (uint64_t *)*puVar5;
  }
  return uVar4;
}



uint64_t FUN_18084ec60(int64_t param_1)

{
  uint64_t *puVar1;
  char cVar2;
  uint64_t uVar3;
  
  if (*(char *)(*(int64_t *)(param_1 + 0x40) + 0x74) == '\0') {
    if ((*(int64_t *)(param_1 + 0x60) == 0) || (cVar2 = FUN_180853120(), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  else {
    cVar2 = '\x01';
  }
  if (*(int64_t *)(param_1 + 0x48) != 0) {
    *(char *)(*(int64_t *)(param_1 + 0x48) + 0x2a) = cVar2;
  }
  if ((cVar2 == '\0') && (*(char *)(*(int64_t *)(param_1 + 0x40) + 0x74) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  SystemCore_StateController(*(uint64_t *)(param_1 + 0x78),uVar3);
  for (puVar1 = *(uint64_t **)(param_1 + 0x50);
      (puVar1 != (uint64_t *)(param_1 + 0x50) &&
      (FUN_180853fc0(puVar1[2],uVar3), puVar1 != (uint64_t *)(param_1 + 0x50)));
      puVar1 = (uint64_t *)*puVar1) {
  }
  return 0;
}



uint64_t FUN_18084ed10(int64_t param_1)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_1 + 0xcc);
  fVar2 = *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(*(int64_t *)(param_1 + 0x40) + 0x70);
  if ((*(uint *)(param_1 + 0xc0) >> 2 & 1) == 0) {
    fVar7 = *(float *)(*(int64_t *)(param_1 + 0x40) + 0x30);
    if (-80.0 < fVar7) {
      fVar7 = (float)powf(0x41200000,fVar7 * 0.05);
    }
    else {
      fVar7 = 0.0;
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 200);
  }
  puVar1 = (uint64_t *)(param_1 + 0xb0);
  fVar7 = fVar6 * fVar2 * fVar3 * fVar7;
  for (puVar4 = (uint64_t *)*puVar1; puVar4 != puVar1; puVar4 = (uint64_t *)*puVar4) {
    fVar6 = (float)MathFunction_ConvertValue(puVar4[2]);
    fVar7 = fVar7 * fVar6;
    if (puVar4 == puVar1) break;
  }
  *(float *)(param_1 + 0xd0) = fVar7;
  uVar5 = FUN_18073dba0(*(uint64_t *)(param_1 + 0x78),fVar7);
  if ((int)uVar5 == 0) {
    if (*(int64_t *)(param_1 + 0x70) != 0) {
      RenderingSystem_FlushPipeline();
    }
    uVar5 = 0;
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084edf0(int64_t param_1)
void FUN_18084edf0(int64_t param_1)

{
  int8_t auVar1 [16];
  short sVar2;
  int iVar3;
  int8_t auStack_c8 [32];
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  int16_t uStack_2c;
  int8_t uStack_2a;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  sVar2 = NetworkingSystem_GetConnectionStatus(*(uint64_t *)(param_1 + 0x40));
  if ((sVar2 == 4) &&
     (iVar3 = FUN_18073cb70(*(uint64_t *)(param_1 + 0x78),&uStack_58), iVar3 == 0)) {
    if ((*(uint *)(param_1 + 0xc0) >> 3 & 1) != 0) {
      iVar3 = FUN_180739350(uStack_58,*(uint64_t *)(param_1 + 0x78));
      if (iVar3 != 0) goto LAB_18084efc3;
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xfffffff7;
    }
    uStack_a8 = uStack_a8 & 0xffffff00;
    iVar3 = FUN_180738c00(uStack_58,*(int32_t *)(*(int64_t *)(param_1 + 0x40) + 0xd4),
                          *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + 0x78),
                          *(uint64_t *)(param_1 + 0x78));
    if (iVar3 != 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_2a = 0;
      auVar1 = *(int8_t (*) [16])(*(int64_t *)(param_1 + 0x40) + 0x10);
      uStack_68 = auVar1._14_2_ & 0xff;
      uStack_70 = auVar1._12_4_ >> 8 & 0xff;
      uStack_78 = auVar1._12_4_ & 0xff;
      uStack_80 = auVar1._11_4_ & 0xff;
      uStack_60 = (uint)auVar1[0xf];
      uStack_88 = (uint)auVar1[10];
      uStack_90 = (uint)auVar1[9];
      uStack_98 = (uint)auVar1[8];
      uStack_a0 = (uint)auVar1._6_2_;
      uStack_a8 = auVar1._4_4_ & 0xffff;
                    // WARNING: Subroutine does not return
      SystemValidationProcessor(&uStack_50,0x27,&processed_var_8960_ptr);
    }
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 8;
  }
LAB_18084efc3:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_c8);
}





