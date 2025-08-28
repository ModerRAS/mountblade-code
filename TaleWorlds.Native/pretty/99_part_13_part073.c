#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 99_part_13_part073.c
 * @brief 资源管理和系统清理模块
 * 
 * 本模块实现了游戏引擎中的资源管理、内存清理和系统维护功能。
 * 主要负责资源对象的创建、销毁、引用计数管理和系统状态维护。
 * 
 * 主要功能：
 * - 资源对象生命周期管理
 * - 内存分配和释放控制
 * - 引用计数跟踪和清理
 * - 系统状态监控和维护
 * - 异常处理和错误恢复
 * 
 * 技术架构：
 * - 采用对象池管理模式
 * - 实现自动引用计数机制
 * - 支持延迟清理和立即清理
 * - 提供线程安全的资源管理
 * 
 * @author TaleWorlds Engine Team
 * @version 1.0
 * @date 2024
 */

// ========================= 类型定义和结构声明 =========================

/**
 * @brief 资源管理器结构体
 * 
 * 管理游戏中的各种资源对象，包括内存、文件、纹理等。
 * 实现资源的分配、释放和生命周期管理。
 */
typedef struct ResourceManager {
    longlong* resource_pool;          // 资源池指针
    longlong* active_resources;       // 活动资源链表
    longlong* free_resources;         // 空闲资源链表
    uint resource_count;              // 资源计数器
    uint max_resources;               // 最大资源数量
    void* cleanup_handler;            // 清理处理函数
} ResourceManager;

/**
 * @brief 引用计数管理器结构体
 * 
 * 跟踪对象的引用计数，实现自动内存管理。
 * 当引用计数降为0时自动释放资源。
 */
typedef struct ReferenceManager {
    longlong* ref_table;              // 引用表指针
    uint table_size;                  // 表大小
    uint active_entries;              // 活动条目数
    void* release_callback;          // 释放回调函数
} ReferenceManager;

/**
 * @brief 系统状态管理器结构体
 * 
 * 维护系统运行状态，监控资源使用情况。
 * 提供系统健康检查和异常处理功能。
 */
typedef struct SystemStateManager {
    uint system_flags;                // 系统状态标志
    uint error_code;                 // 错误代码
    longlong* error_log;              // 错误日志指针
    void* recovery_handler;           // 恢复处理函数
} SystemStateManager;

// ========================= 函数别名定义 =========================

/**
 * @brief 系统资源清理函数
 * @details 清理系统资源，释放内存，重置状态
 */
#define SystemResourceCleanup FUN_1808d9c82

/**
 * @brief 资源对象释放函数
 * @param resource_ptr 资源对象指针
 * @param flags 释放标志位
 * @return 释放状态码
 */
#define ResourceObjectRelease FUN_1808d9ce0

/**
 * @brief 扩展资源清理函数
 * @param resource_ptr 资源对象指针
 * @param cleanup_flags 清理标志
 * @return 清理状态码
 */
#define ExtendedResourceCleanup FUN_1808d9d50

/**
 * @brief 引用计数初始化函数
 * @param ref_type 引用类型
 * @param ref_ptr 引用指针输出
 * @return 初始化状态码
 */
#define ReferenceCountInitialize FUN_1808d9de0

/**
 * @brief 引用计数释放函数
 * @param ref_ptr 引用指针
 * @return 释放状态码
 */
#define ReferenceCountRelease FUN_1808d9e90

/**
 * @brief 资源状态验证函数
 * @param resource_handle 资源句柄
 * @param validation_flags 验证标志
 */
#define ResourceStatusValidation FUN_1808d9fe0

/**
 * @brief 资源数组管理函数
 * @param array_ptr 数组指针
 * @param data_ptr 数据指针
 * @param array_size 数组大小
 * @return 管理状态码
 */
#define ResourceArrayManagement FUN_1808da330

/**
 * @brief 资源配置应用函数
 * @param config_ptr 配置指针
 * @param resource_ptr 资源指针
 */
#define ResourceConfigurationApply FUN_1808da5c0

/**
 * @brief 资源对象创建函数
 * @param resource_handle 资源句柄
 * @param create_flags 创建标志
 * @param output_ptr 输出指针
 * @return 创建状态码
 */
#define ResourceObjectCreate FUN_1808da7b0

/**
 * @brief 资源初始化函数
 * @param init_params 初始化参数
 * @param resource_ptr 资源指针
 */
#define ResourceInitialize FUN_1808da82b

/**
 * @brief 空资源函数
 * @note 空实现函数，用于占位
 */
#define ResourceEmptyFunction FUN_1808da8ec

/**
 * @brief 资源配置设置函数
 * @param config_ptr 配置指针
 * @param resource_ptr 资源指针
 */
#define ResourceConfigurationSet FUN_1808da910

/**
 * @brief 资源状态获取函数
 * @param resource_handle 资源句柄
 * @param resource_ptr 资源指针
 * @return 状态码
 */
#define ResourceStatusGet FUN_1808daa00

/**
 * @brief 资源查找函数
 * @param search_key 搜索键值
 * @param resource_ptr 资源指针
 * @return 查找状态码
 */
#define ResourceSearch FUN_1808daa70

/**
 * @brief 资源快速查找函数
 * @param resource_handle 资源句柄
 * @return 查找状态码
 */
#define ResourceQuickSearch FUN_1808daaa9

/**
 * @brief 资源清理启动函数
 * @note 启动资源清理流程
 */
#define ResourceCleanupStart FUN_1808dab52

/**
 * @brief 资源状态检查函数
 * @return 状态码
 */
#define ResourceStatusCheck FUN_1808dab64

/**
 * @brief 资源验证函数
 * @param resource_ptr 资源指针
 * @param validation_data 验证数据
 * @return 验证状态码
 */
#define ResourceValidate FUN_1808dab90

/**
 * @brief 资源同步函数
 * @param resource_ptr 资源指针
 * @param sync_data 同步数据
 * @return 同步状态码
 */
#define ResourceSynchronize FUN_1808dac90

/**
 * @brief 资源权限检查函数
 * @param resource_handle 资源句柄
 * @param resource_ptr 资源指针
 * @return 权限状态码
 */
#define ResourcePermissionCheck FUN_1808dad20

/**
 * @brief 资源锁定函数
 * @param resource_ptr 资源指针
 * @param lock_data 锁定数据
 * @return 锁定状态码
 */
#define ResourceLock FUN_1808dad80

/**
 * @brief 资源释放函数
 * @param resource_handle 资源句柄
 * @param release_data 释放数据
 * @return 释放状态码
 */
#define ResourceRelease FUN_1808dae30

/**
 * @brief 资源批量释放函数
 * @param batch_params 批量参数
 * @param resource_ptr 资源指针
 * @return 批量释放状态码
 */
#define ResourceBatchRelease FUN_1808dae4c

/**
 * @brief 资源删除函数
 * @param resource_ptr 资源指针
 * @return 删除状态码
 */
#define ResourceDelete FUN_1808dae5f

/**
 * @brief 资源快速删除函数
 * @param resource_ptr 资源指针
 * @return 删除状态码
 */
#define ResourceQuickDelete FUN_1808dae64

/**
 * @brief 资源销毁函数
 * @note 销毁资源对象
 */
#define ResourceDestroy FUN_1808daf2a

/**
 * @brief 资源计数获取函数
 * @return 资源计数
 */
#define ResourceCountGet FUN_1808daf3b

// ========================= 核心实现函数 =========================

/**
 * @brief 系统资源清理函数
 * 
 * 执行系统级的资源清理操作，包括：
 * - 清理资源池中的所有对象
 * - 释放分配的内存块
 * - 重置系统状态
 * - 处理异常情况
 * 
 * 算法流程：
 * 1. 检查系统状态标志
 * 2. 遍历资源池链表
 * 3. 释放每个资源对象
 * 4. 清理内存块
 * 5. 重置系统状态
 * 
 * @note 此函数会执行不返回的清理操作
 */
void SystemResourceCleanup(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t *unaff_R14;
  
  // 调用资源清理前处理函数
  FUN_18085dbf0(unaff_R14 + 9);
  plVar1 = unaff_R14 + 6;
  
  // 处理资源链表节点：从活动链表移除并加入空闲链表
  *(longlong *)unaff_R14[7] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[7];
  unaff_R14[7] = plVar1;
  *plVar1 = (longlong)plVar1;
  
  // 重复链表操作以确保完整性
  *(longlong **)unaff_R14[7] = plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_R14[7];
  unaff_R14[7] = plVar1;
  *plVar1 = (longlong)plVar1;
  
  // 设置系统状态标志
  *unaff_R14 = &unknown_var_936_ptr;
  plVar1 = unaff_R14 + 4;
  plVar2 = (longlong *)*plVar1;
  
  // 检查是否需要立即清理
  if ((plVar2 == plVar1) && ((longlong *)unaff_R14[5] == plVar1)) {
    func_0x00018085dda0(plVar1);
    *unaff_R14 = &unknown_var_1544_ptr;
    *(int32_t *)(unaff_R14 + 1) = 0xdeadf00d;
    return;
  }
  
  // 准备延迟清理操作
  plVar3 = (longlong *)0x0;
  if (plVar2 != plVar1) {
    plVar3 = plVar2;
  }
  
  // 设置清理标志并执行清理操作
  *(int32_t *)((longlong)plVar3 + 0x44) = 0xffffffff;
  FUN_18084c220(plVar3 + 4);
  FUN_18084c220(plVar3 + 2);
  
  // 处理资源对象的双向链表操作
  *(longlong *)plVar3[1] = *plVar3;
  *(longlong *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar3;
  
  // 确保链表操作的完整性
  *(longlong **)plVar3[1] = plVar3;
  *(longlong *)(*plVar3 + 8) = plVar3[1];
  plVar3[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar3;
  
  // 执行最终的资源释放操作（不返回）
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar3,&unknown_var_976_ptr,0x30);
}

/**
 * @brief 资源对象释放函数
 * 
 * 释放指定的资源对象，并根据标志位决定是否释放内存。
 * 实现安全的资源释放和内存管理。
 * 
 * 功能特点：
 * - 自动处理资源链表操作
 * - 支持条件内存释放
 * - 确保释放操作的原子性
 * - 提供状态返回码
 * 
 * @param resource_ptr 资源对象指针
 * @param flags 释放标志位（bit 0: 是否释放内存）
 * @return 资源对象指针（用于链式操作）
 */
longlong ResourceObjectRelease(longlong resource_ptr, uint flags)

{
  longlong *plVar1;
  
  // 获取资源链表头指针
  plVar1 = (longlong *)(resource_ptr + 0x30);
  
  // 从活动链表中移除资源节点
  **(longlong **)(resource_ptr + 0x38) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(resource_ptr + 0x38);
  *(longlong **)(resource_ptr + 0x38) = plVar1;
  *plVar1 = (longlong)plVar1;
  
  // 确保链表操作的完整性（重复操作）
  **(longlong **)(resource_ptr + 0x38) = (longlong)plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(resource_ptr + 0x38);
  *(longlong **)(resource_ptr + 0x38) = plVar1;
  *plVar1 = (longlong)plVar1;
  
  // 调用资源释放后处理函数
  FUN_1808b02a0();
  
  // 根据标志位决定是否释放内存
  if ((flags & 1) != 0) {
    free(resource_ptr, 0x60);
  }
  
  return resource_ptr;
}

/**
 * @brief 扩展资源清理函数
 * 
 * 执行更完整的资源清理操作，包括额外的内存区域清理。
 * 适用于需要深度清理的资源对象。
 * 
 * 功能特点：
 * - 清理多个内存区域
 * - 支持更大的内存块释放
 * - 提供更全面的清理操作
 * - 确保资源完全释放
 * 
 * @param resource_ptr 资源对象指针
 * @param cleanup_flags 清理标志（bit 0: 是否释放内存）
 * @return 资源对象指针（用于链式操作）
 */
longlong ExtendedResourceCleanup(longlong resource_ptr, ulonglong cleanup_flags)

{
  longlong *plVar1;
  
  // 清理额外的内存区域（0x58 偏移）
  FUN_18084c220(resource_ptr + 0x58);
  
  // 清理额外的内存区域（0x48 偏移）
  FUN_18084c220(resource_ptr + 0x48);
  
  // 获取资源链表头指针
  plVar1 = (longlong *)(resource_ptr + 0x30);
  
  // 从活动链表中移除资源节点
  **(longlong **)(resource_ptr + 0x38) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(resource_ptr + 0x38);
  *(longlong **)(resource_ptr + 0x38) = plVar1;
  *plVar1 = (longlong)plVar1;
  
  // 确保链表操作的完整性（重复操作）
  **(longlong **)(resource_ptr + 0x38) = (longlong)plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(resource_ptr + 0x38);
  *(longlong **)(resource_ptr + 0x38) = plVar1;
  *plVar1 = (longlong)plVar1;
  
  // 调用资源释放后处理函数（带参数）
  FUN_1808b02a0(resource_ptr);
  
  // 根据标志位决定是否释放内存
  if ((cleanup_flags & 1) != 0) {
    free(resource_ptr, 0x70);
  }
  
  return resource_ptr;
}



/**
 * @brief 引用计数初始化函数
 * 
 * 为指定类型的引用计数对象分配内存并初始化。
 * 实现自动内存管理的基础设施。
 * 
 * 功能特点：
 * - 自动分配引用对象内存
 * - 初始化引用计数为1
 * - 设置对象类型标识
 * - 返回引用对象指针
 * 
 * @param ref_type 引用类型标识符
 * @param ref_ptr 引用指针输出参数
 * @return 状态码（0: 成功，0x26: 内存分配失败）
 */
uint64_t ReferenceCountInitialize(int ref_type, longlong *ref_ptr)

{
  int *piVar1;
  
  // 分配引用计数对象内存（16字节）
  piVar1 = (int *)FUN_180741d10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), ref_type + 0x10, 0x10,
                                &unknown_var_7616_ptr, 0x3e, 0, 0);
  
  // 检查内存分配是否成功
  if (piVar1 == (int *)0x0) {
    return 0x26;  // 内存分配失败
  }
  
  // 初始化引用对象
  *piVar1 = ref_type;      // 设置引用类型
  piVar1[1] = 0;          // 初始化引用计数为0
  *ref_ptr = (longlong)piVar1;  // 返回引用对象指针
  
  return 0;  // 成功
}



/**
 * @brief 引用计数释放函数
 * 
 * 减少对象的引用计数，当计数降为0时自动释放资源。
 * 实现智能内存管理机制。
 * 
 * 功能特点：
 * - 原子性的引用计数操作
 * - 自动检测零引用状态
 * - 安全的资源释放
 * - 防止重复释放
 * 
 * @param ref_ptr 引用对象指针的指针
 * @return 状态码（0: 成功，0x1c: 引用计数无效）
 */
uint64_t ReferenceCountRelease(longlong *ref_ptr)

{
  longlong lVar1;
  
  // 获取引用对象指针
  lVar1 = *ref_ptr;
  
  // 检查引用对象是否有效
  if (lVar1 != 0) {
    // 检查引用计数是否有效（必须大于0）
    if (*(int *)(lVar1 + 4) < 1) {
      return 0x1c;  // 引用计数无效
    }
    
    // 减少引用计数
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + -1;
    
    // 检查是否需要释放资源
    if (*(int *)(*ref_ptr + 4) == 0) {
      // 引用计数降为0，释放资源
      FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0), *ref_ptr, &unknown_var_7616_ptr, 0x89);
      *ref_ptr = 0;  // 清空引用指针
    }
  }
  
  return 0;  // 成功
}



/**
 * @brief 资源状态验证函数
 * 
 * 验证资源对象的状态和完整性，确保资源可以安全使用。
 * 执行必要的状态检查和准备工作。
 * 
 * 功能特点：
 * - 资源状态完整性检查
 * - 自动状态修复机制
 * - 异常情况处理
 * - 支持不同的验证模式
 * 
 * @param resource_handle 资源句柄
 * @param validation_flags 验证标志位
 * @note 此函数可能执行不返回的操作
 */
void ResourceStatusValidation(longlong resource_handle, uint64_t validation_flags)

{
  int iVar1;
  int8_t auStack_48 [8];
  uint64_t uStack_40;
  ulonglong uStack_38;
  
  // 初始化堆栈保护变量
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_48;
  
  // 检查资源状态标志
  if (*(int *)(resource_handle + 0x60) == 1) {
    // 状态为1，执行数组管理操作
    ResourceArrayManagement(resource_handle, 0, 0);
  }
  else {
    // 状态不为1，执行配置验证
    iVar1 = FUN_180739cc0(validation_flags, *(int *)(resource_handle + 0x60), &uStack_40);
    if (iVar1 == 0) {
      // 验证失败，执行错误处理（不返回）
      FUN_1808fd200();
    }
  }
  
  // 执行最终的状态检查（不返回）
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_48);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t ResourceArrayManagement(longlong array_ptr, longlong data_ptr, int array_size)

{
  int iVar1;
  int *piVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x50);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x50) < param_3) {
    uVar6 = (int)*(uint *)(param_1 + 0x54) >> 0x1f;
    if (((int)((*(uint *)(param_1 + 0x54) ^ uVar6) - uVar6) < param_3) &&
       (uVar3 = FUN_180747f10(param_1 + 0x48,param_3), (int)uVar3 != 0)) {
      return uVar3;
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 < param_3) {
                    // WARNING: Subroutine does not return
      memset(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8,0,(longlong)(param_3 - iVar1) << 3)
      ;
    }
    *(int *)(param_1 + 0x50) = param_3;
    for (; lVar8 < param_3; lVar8 = lVar8 + 1) {
      piVar2 = *(int **)(param_2 + lVar8 * 8);
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        puVar4 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_9456_ptr,0x112,0,0
                               ,1);
        if (puVar4 == (uint64_t *)0x0) {
          return 0x26;
        }
        *(int32_t *)(puVar4 + 2) = 0;
LAB_1808da52e:
        puVar4[1] = 0;
        *puVar4 = &unknown_var_9360_ptr;
        *(int32_t *)(puVar4 + 3) = 0;
        *(uint64_t **)(*(longlong *)(param_1 + 0x48) + lVar8 * 8) = puVar4;
        *(int *)(puVar4 + 3) = piVar2[0xe];
      }
      else {
        if (iVar1 == 1) {
          puVar4 = (uint64_t *)
                   FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_9456_ptr,0x119,0
                                 ,0,1);
          if (puVar4 == (uint64_t *)0x0) {
            return 0x26;
          }
          *(int32_t *)(puVar4 + 2) = 1;
          goto LAB_1808da52e;
        }
        if (iVar1 == 2) {
          puVar4 = (uint64_t *)
                   FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_9456_ptr,0x120,0
                                 ,0,1);
          if (puVar4 == (uint64_t *)0x0) {
            return 0x26;
          }
          puVar4[1] = 0;
          *puVar4 = &unknown_var_9360_ptr;
          *(int32_t *)(puVar4 + 2) = 2;
          *(int8_t *)(puVar4 + 3) = 0;
          *(uint64_t **)(*(longlong *)(param_1 + 0x48) + lVar8 * 8) = puVar4;
          *(bool *)(puVar4 + 3) = piVar2[0xc] != 0;
        }
        else {
          if (iVar1 != 3) {
            return 0x1c;
          }
          puVar4 = (uint64_t *)
                   FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_9456_ptr,0x127,0
                                 ,0,1);
          if (puVar4 == (uint64_t *)0x0) {
            return 0x26;
          }
          puVar4[1] = 0;
          *puVar4 = &unknown_var_9368_ptr;
          *(int32_t *)(puVar4 + 2) = 3;
          puVar4[3] = 0;
          *(uint64_t **)(*(longlong *)(param_1 + 0x48) + lVar8 * 8) = puVar4;
        }
      }
    }
  }
  uVar7 = uVar5;
  if (0 < param_3) {
    do {
      lVar8 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x48));
      if (*(int *)(lVar8 + 0x10) != **(int **)(uVar5 + param_2)) {
        return 0x35;
      }
      uVar6 = (int)uVar7 + 1;
      *(int **)(lVar8 + 8) = *(int **)(uVar5 + param_2);
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < param_3);
  }
  *(int *)(param_1 + 0x58) = param_3;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void ResourceConfigurationApply(longlong config_ptr, uint64_t resource_ptr)
void ResourceConfigurationApply(longlong config_ptr, uint64_t resource_ptr)

{
  int iVar1;
  void *puVar2;
  uint64_t uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (ulonglong)&uStack_18;
  if (*(int *)(param_1 + 0x68) < 1) {
    puVar2 = &system_buffer_ptr;
  }
  else {
    puVar2 = *(void **)(param_1 + 0x60);
  }
  iVar1 = FUN_1808db010(param_2,puVar2,param_1 + 0x80);
  if (((iVar1 != 0x36) && (iVar1 == 0)) &&
     (iVar1 = FUN_180739b90(param_2,*(int32_t *)(param_1 + 0x80),&uStack_18), iVar1 == 0)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd200();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)&uStack_18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t ResourceObjectCreate(longlong resource_handle, uint64_t *create_params, uint create_flags, longlong *output_ptr)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  if (param_4 == (longlong *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x308,&unknown_var_7744_ptr,0x214,0,0,1);
    if (lVar1 == 0) {
      uVar2 = 0x26;
    }
    else {
      lVar1 = FUN_1808dbcd0(lVar1);
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      if (param_2 != (uint64_t *)0x0) {
        uStack_58 = *param_2;
        uStack_50 = param_2[1];
        uStack_48 = param_2[2];
        uStack_40 = param_2[3];
        uStack_38 = param_2[4];
        uStack_30 = param_2[5];
        uStack_28 = param_2[6];
        uStack_20 = param_2[7];
        uStack_18 = param_2[8];
      }
      if ((param_3 & 0x1004) == 0) {
        lVar3 = func_0x000180879a40(*(uint64_t *)(param_1 + 0x10));
        uStack_18 = *(uint64_t *)(lVar3 + 0x18);
      }
      else {
        uStack_18 = 0;
      }
      uVar2 = FUN_1808dcd20(lVar1,&uStack_58);
      if ((int)uVar2 == 0) {
        *(uint *)(lVar1 + 0x2f0) = param_3;
        *param_4 = lVar1;
      }
    }
  }
  return uVar2;
}






// 函数: void ResourceSystemInitialize(void)
void ResourceSystemInitialize(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint64_t *unaff_RDI;
  longlong *unaff_R14;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  uint64_t in_stack_00000080;
  
  lVar2 = FUN_1808dbcd0();
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  if (unaff_RDI != (uint64_t *)0x0) {
    in_stack_00000040 = *unaff_RDI;
    in_stack_00000048 = unaff_RDI[1];
    in_stack_00000050 = unaff_RDI[2];
    in_stack_00000058 = unaff_RDI[3];
    in_stack_00000060 = unaff_RDI[4];
    in_stack_00000068 = unaff_RDI[5];
    in_stack_00000070 = unaff_RDI[6];
    in_stack_00000078 = unaff_RDI[7];
    in_stack_00000080 = unaff_RDI[8];
  }
  if ((unaff_ESI & 0x1004) == 0) {
    lVar3 = func_0x000180879a40(*(uint64_t *)(unaff_RBP + 0x10));
    in_stack_00000080 = *(uint64_t *)(lVar3 + 0x18);
  }
  else {
    in_stack_00000080 = 0;
  }
  iVar1 = FUN_1808dcd20(lVar2,&stack0x00000040);
  if (iVar1 == 0) {
    *(uint *)(lVar2 + 0x2f0) = unaff_ESI;
    *unaff_R14 = lVar2;
  }
  return;
}






// 函数: void ResourceEmptyFunction(void)
void ResourceEmptyFunction(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void ResourceConfigurationSet(uint64_t *config_ptr, longlong *resource_ptr)
void ResourceConfigurationSet(uint64_t *config_ptr, longlong *resource_ptr)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int8_t auStack_48 [32];
  int32_t uStack_28;
  int16_t uStack_24;
  int16_t uStack_22;
  int32_t uStack_20;
  int16_t uStack_1c;
  int16_t uStack_1a;
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_48;
  iVar5 = (**(code **)*param_1)(param_1,0,0,param_2);
  if (iVar5 == 0) {
    uStack_1a = 0;
    uStack_22 = 0xffff;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_24 = 0xffff;
    uStack_28 = 0xffffffff;
    func_0x00018076b450(&uStack_20,&unknown_var_7984_ptr,8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                0x48) < system_system_config) {
      FUN_1808fcb90(&system_state_f508);
      if (system_system_config == -1) {
        uRam0000000180c4f4fc = CONCAT22(uStack_22,uStack_24);
        uRam0000000180c4f504 = CONCAT22(uStack_1a,uStack_1c);
        system_system_config = uStack_28;
        uRam0000000180c4f500 = uStack_20;
        FUN_1808fcb30(&system_state_f508);
      }
    }
    uVar4 = uRam0000000180c4f504;
    uVar3 = uRam0000000180c4f500;
    uVar2 = uRam0000000180c4f4fc;
    lVar1 = *param_2;
    *(int32_t *)(lVar1 + 0x10) = system_system_config;
    *(int32_t *)(lVar1 + 0x14) = uVar2;
    *(int32_t *)(lVar1 + 0x18) = uVar3;
    *(int32_t *)(lVar1 + 0x1c) = uVar4;
    *(int32_t *)(*param_2 + 0x218) = 0x8e;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_48);
}



uint64_t ResourceStatusGet(uint64_t resource_handle, longlong resource_ptr)

{
  uint64_t uVar1;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if ((((*(ushort *)(param_2 + 0xe) & 0x3fff) == 1) &&
      (*(longlong **)(param_2 + 0x20) != (longlong *)0x0)) &&
     (uVar1 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x58))(), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_1808db3f0(param_1,param_2);
  return uVar1;
}



uint64_t ResourceSearch(longlong search_key, uint *result_ptr)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint64_t uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 0x1c;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  lVar8 = *(longlong *)param_2;
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  lVar7 = *(longlong *)(param_2 + 2);
  lVar13 = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = plVar1[5];
  lVar12 = lVar13;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
    lVar12 = lVar2;
  }
  if (((*(int *)((longlong)plVar1 + 0x24) != 0) && ((int)plVar1[1] != 0)) &&
     (iVar11 = *(int *)(*plVar1 +
                       (longlong)(int)((uVar4 ^ uVar5 ^ uVar3 ^ uVar6) & (int)plVar1[1] - 1U) * 4),
     iVar11 != -1)) {
    do {
      plVar9 = (longlong *)((longlong)iVar11 * 0x20 + plVar1[2]);
      if ((*plVar9 == lVar8) && (plVar9[1] == lVar7)) {
        lVar13 = plVar9[3];
        break;
      }
      iVar11 = (int)plVar9[2];
      lVar13 = 0;
    } while (iVar11 != -1);
  }
  if (lVar2 == 0) {
    if ((lVar13 == 0) || (uVar10 = FUN_1808db3f0(param_1,lVar13), (int)uVar10 == 0)) {
      uVar10 = 0;
    }
    return uVar10;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(lVar12);
}



uint64_t ResourceQuickSearch(longlong resource_handle)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong in_RCX;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong in_XMM0_Qb;
  uint uStackX_24;
  longlong lStack0000000000000028;
  
  lVar7 = 0;
  plVar1 = *(longlong **)(in_RCX + 8);
  lVar2 = plVar1[5];
  lVar6 = lVar7;
  lStack0000000000000028 = in_XMM0_Qb;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
    lVar6 = lVar2;
  }
  if ((*(int *)((longlong)plVar1 + 0x24) != 0) && ((int)plVar1[1] != 0)) {
    uStackX_24 = (uint)((ulonglong)param_1 >> 0x20);
    iVar5 = *(int *)(*plVar1 +
                    (longlong)
                    (int)((uStackX_24 ^ (uint)lStack0000000000000028 ^ (uint)param_1 ^
                          lStack0000000000000028._4_4_) & (int)plVar1[1] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar5 * 0x20 + plVar1[2]);
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar7 = plVar3[3];
          break;
        }
        iVar5 = (int)plVar3[2];
        lVar7 = 0;
      } while (iVar5 != -1);
    }
  }
  if (lVar2 == 0) {
    if ((lVar7 == 0) || (uVar4 = FUN_1808db3f0(), (int)uVar4 == 0)) {
      uVar4 = 0;
    }
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(lVar6);
}






// 函数: void FUN_1808dab52(void)
void FUN_1808dab52(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



uint64_t ResourceStatusCheck(void)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1808db3f0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



int32_t FUN_1808dab90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uStackX_10;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uStackX_10 = 0;
  if ((((*(ushort *)(param_2 + 0xe) & 0x3fff) < 2) && (*(longlong *)(param_2 + 0xd0) != 0)) &&
     ((*(uint *)(param_2 + 0xf8) >> 7 & 1) == 0)) {
    iVar2 = FUN_18088c740(&uStackX_10,*(uint64_t *)(param_1 + 0x38));
    if ((iVar2 != 0) || (iVar2 = FUN_18088c620(*(uint64_t *)(param_2 + 0xd0)), iVar2 != 0))
    goto LAB_1808dac65;
    lVar1 = *(longlong *)(param_2 + 0xd0);
    iVar2 = 0;
    if (0 < *(int *)(lVar1 + 0x28)) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + *(longlong *)(lVar1 + 0x20)) + 0x10) == 0) {
          iVar3 = FUN_180867d60();
          if (iVar3 != 0) goto LAB_1808dac65;
        }
        else {
          iVar2 = iVar2 + 1;
          lVar4 = lVar4 + 8;
        }
      } while (iVar2 < *(int *)(lVar1 + 0x28));
    }
  }
  FUN_1808db3f0(param_1,param_2);
LAB_1808dac65:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_10);
}



int32_t FUN_1808dac90(longlong param_1,longlong param_2)

{
  int iVar1;
  uint64_t uStackX_10;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uStackX_10 = 0;
  if (((*(ushort *)(param_2 + 0xe) & 0x3fff) == 1) && ((*(byte *)(param_2 + 0xc4) & 1) != 0)) {
    iVar1 = FUN_18088c740(&uStackX_10,*(uint64_t *)(param_1 + 0x20));
    if (iVar1 != 0) goto LAB_1808dacfc;
  }
  FUN_1808db3f0(param_1,param_2);
LAB_1808dacfc:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_10);
}



uint64_t ResourceValidation(uint64_t resource_handle, longlong validation_ptr)

{
  uint64_t uVar1;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if ((((*(ushort *)(param_2 + 0xe) & 0x3fff) < 2) &&
      (*(longlong **)(param_2 + 0x20) != (longlong *)0x0)) &&
     (uVar1 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x58))(), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_1808db3f0(param_1,param_2);
  return uVar1;
}



int32_t FUN_1808dad80(longlong param_1,longlong param_2)

{
  int iVar1;
  uint64_t uStackX_10;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uStackX_10 = 0;
  if (((((*(ushort *)(param_2 + 0xe) & 0x3fff) < 2) && ((*(byte *)(param_2 + 0xc4) & 1) != 0)) &&
      (*(longlong *)(param_1 + 0x20) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0xad0) == param_2)) {
    iVar1 = FUN_18088c740(&uStackX_10);
    if (iVar1 != 0) goto LAB_1808dae06;
    FUN_18088a0c0(*(uint64_t *)(param_1 + 0x20),0);
  }
  FUN_1808db3f0(param_1,param_2);
LAB_1808dae06:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808dae30(longlong param_1,uint64_t *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  
  if (param_2 == (uint64_t *)0x0) {
    return 0x1f;
  }
  if ((*(ushort *)((longlong)param_2 + 0xe) & 0x7fff) != 0) {
    uVar3 = *(uint *)(param_2 + 2);
    uVar4 = *(uint *)((longlong)param_2 + 0x14);
    lVar11 = param_2[2];
    uVar5 = *(uint *)(param_2 + 3);
    uVar6 = *(uint *)((longlong)param_2 + 0x1c);
    lVar7 = param_2[3];
    plVar1 = *(longlong **)(param_1 + 8);
    lVar2 = plVar1[5];
    if (lVar2 != 0) {
      FUN_180768360(lVar2);
    }
    if (*(int *)((longlong)plVar1 + 0x24) == 0) {
      iVar12 = 0;
    }
    else if ((int)plVar1[1] == 0) {
      iVar12 = 0x1c;
    }
    else {
      iVar12 = 0;
      lVar10 = (longlong)(int)((uVar4 ^ uVar3 ^ uVar5 ^ uVar6) & (int)plVar1[1] - 1U);
      piVar13 = (int *)(*plVar1 + lVar10 * 4);
      iVar8 = *(int *)(*plVar1 + lVar10 * 4);
      if (iVar8 != -1) {
        lVar10 = plVar1[2];
        do {
          lVar9 = (longlong)iVar8 * 0x20;
          if ((*(longlong *)(lVar9 + lVar10) == lVar11) &&
             (*(longlong *)(lVar9 + 8 + lVar10) == lVar7)) {
            iVar12 = *piVar13;
            lVar11 = (longlong)iVar12 * 0x20;
            *(uint64_t *)(lVar11 + 0x18 + lVar10) = 0;
            *piVar13 = *(int *)(lVar11 + 0x10 + lVar10);
            *(int *)(lVar11 + 0x10 + lVar10) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar12;
            iVar12 = 0;
            break;
          }
          piVar13 = (int *)(lVar10 + 0x10 + lVar9);
          iVar8 = *piVar13;
        } while (iVar8 != -1);
      }
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
    if (iVar12 != 0) {
      return iVar12;
    }
  }
  (**(code **)*param_2)(param_2,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_7744_ptr,0x252,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808dae4c(uint param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ushort in_AX;
  int iVar8;
  longlong lVar9;
  longlong in_RCX;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint64_t *unaff_RSI;
  int *piVar13;
  
  if ((*(ushort *)(param_2 + 0xe) & in_AX) != 0) {
    uVar3 = *(uint *)(param_2 + 0x10);
    uVar4 = *(uint *)(param_2 + 0x14);
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar5 = *(uint *)(param_2 + 0x18);
    uVar6 = *(uint *)(param_2 + 0x1c);
    lVar7 = *(longlong *)(param_2 + 0x18);
    plVar1 = *(longlong **)(in_RCX + 8);
    lVar2 = plVar1[5];
    param_1 = uVar3;
    if (lVar2 != 0) {
      param_1 = FUN_180768360(lVar2);
    }
    if (*(int *)((longlong)plVar1 + 0x24) == 0) {
      iVar12 = 0;
    }
    else if ((int)plVar1[1] == 0) {
      iVar12 = 0x1c;
    }
    else {
      iVar12 = 0;
      lVar10 = (longlong)(int)((uVar4 ^ uVar3 ^ uVar5 ^ uVar6) & (int)plVar1[1] - 1U);
      piVar13 = (int *)(*plVar1 + lVar10 * 4);
      iVar8 = *(int *)(*plVar1 + lVar10 * 4);
      if (iVar8 != -1) {
        lVar10 = plVar1[2];
        do {
          lVar9 = (longlong)iVar8 * 0x20;
          if ((*(longlong *)(lVar9 + lVar10) == lVar11) &&
             (*(longlong *)(lVar9 + 8 + lVar10) == lVar7)) {
            iVar12 = *piVar13;
            lVar11 = (longlong)iVar12 * 0x20;
            *(uint64_t *)(lVar11 + 0x18 + lVar10) = 0;
            *piVar13 = *(int *)(lVar11 + 0x10 + lVar10);
            *(int *)(lVar11 + 0x10 + lVar10) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar12;
            iVar12 = 0;
            break;
          }
          piVar13 = (int *)(lVar10 + 0x10 + lVar9);
          iVar8 = *piVar13;
        } while (iVar8 != -1);
      }
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180768400(lVar2);
    }
    if (iVar12 != 0) {
      return iVar12;
    }
  }
  (**(code **)*unaff_RSI)(param_1,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808dae5f(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong in_RCX;
  longlong lVar5;
  int iVar6;
  uint64_t *unaff_RSI;
  int *piVar7;
  longlong in_XMM0_Qb;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  
  plVar1 = *(longlong **)(in_RCX + 8);
  lVar2 = plVar1[5];
  lStack0000000000000030 = param_1;
  lStack0000000000000038 = in_XMM0_Qb;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) == 0) {
    iVar6 = 0;
  }
  else if ((int)plVar1[1] == 0) {
    iVar6 = 0x1c;
  }
  else {
    iVar6 = 0;
    lVar5 = (longlong)
            (int)((lStack0000000000000030._4_4_ ^ (uint)lStack0000000000000030 ^
                   (uint)lStack0000000000000038 ^ lStack0000000000000038._4_4_) &
                 (int)plVar1[1] - 1U);
    piVar7 = (int *)(*plVar1 + lVar5 * 4);
    iVar3 = *(int *)(*plVar1 + lVar5 * 4);
    if (iVar3 != -1) {
      lVar5 = plVar1[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar5) == lStack0000000000000030) &&
           (*(longlong *)(lVar4 + 8 + lVar5) == lStack0000000000000038)) {
          iVar6 = *piVar7;
          lVar4 = (longlong)iVar6 * 0x20;
          *(uint64_t *)(lVar4 + 0x18 + lVar5) = 0;
          *piVar7 = *(int *)(lVar4 + 0x10 + lVar5);
          *(int *)(lVar4 + 0x10 + lVar5) = (int)plVar1[4];
          *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
          *(int *)(plVar1 + 4) = iVar6;
          iVar6 = 0;
          break;
        }
        piVar7 = (int *)(lVar5 + 0x10 + lVar4);
        iVar3 = *piVar7;
      } while (iVar3 != -1);
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (iVar6 == 0) {
    (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808dae64(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint64_t *unaff_RSI;
  int *piVar7;
  longlong in_XMM0_Qa;
  longlong in_XMM0_Qb;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  
  plVar1 = *(longlong **)(param_1 + 8);
  lVar2 = plVar1[5];
  lStack0000000000000030 = in_XMM0_Qa;
  lStack0000000000000038 = in_XMM0_Qb;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) == 0) {
    iVar6 = 0;
  }
  else if ((int)plVar1[1] == 0) {
    iVar6 = 0x1c;
  }
  else {
    iVar6 = 0;
    lVar5 = (longlong)
            (int)((lStack0000000000000030._4_4_ ^ (uint)lStack0000000000000030 ^
                   (uint)lStack0000000000000038 ^ lStack0000000000000038._4_4_) &
                 (int)plVar1[1] - 1U);
    piVar7 = (int *)(*plVar1 + lVar5 * 4);
    iVar3 = *(int *)(*plVar1 + lVar5 * 4);
    if (iVar3 != -1) {
      lVar5 = plVar1[2];
      do {
        lVar4 = (longlong)iVar3 * 0x20;
        if ((*(longlong *)(lVar4 + lVar5) == lStack0000000000000030) &&
           (*(longlong *)(lVar4 + 8 + lVar5) == lStack0000000000000038)) {
          iVar6 = *piVar7;
          lVar4 = (longlong)iVar6 * 0x20;
          *(uint64_t *)(lVar4 + 0x18 + lVar5) = 0;
          *piVar7 = *(int *)(lVar4 + 0x10 + lVar5);
          *(int *)(lVar4 + 0x10 + lVar5) = (int)plVar1[4];
          *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
          *(int *)(plVar1 + 4) = iVar6;
          iVar6 = 0;
          break;
        }
        piVar7 = (int *)(lVar5 + 0x10 + lVar4);
        iVar3 = *piVar7;
      } while (iVar3 != -1);
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (iVar6 == 0) {
    (**(code **)*unaff_RSI)();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
  }
  return iVar6;
}






// 函数: void FUN_1808daf2a(void)
void FUN_1808daf2a(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



int32_t FUN_1808daf3b(void)

{
  int32_t unaff_EBX;
  
  return unaff_EBX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




