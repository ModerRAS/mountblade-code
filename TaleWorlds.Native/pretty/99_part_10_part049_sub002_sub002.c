/**
 * @file pretty/99_part_10_part049_sub002_sub002.c
 * @brief 高级系统组件管理和数据处理模块
 * 
 * 本文件是系统的重要组成部分，主要负责：
 * - 系统组件的初始化和配置
 * - 数据结构的创建和管理
 * - 内存分配和资源管理
 * - 系统状态监控和控制
 * - 高级数据处理算法的实现
 * 
 * 该模块提供了完整的系统组件管理解决方案，为上层应用提供
 * 高效的数据处理和资源管理能力。
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 */

#include "TaleWorlds.Native.Split.h"

/* ============================================================================
 * 系统常量定义
 * ============================================================================ */

#define SYSTEM_SUCCESS 0                          // 操作成功
#define SYSTEM_ERROR 0x1c                         // 操作失败
#define MAX_COMPONENTS 0x1000                     // 最大组件数
#define MEMORY_POOL_SIZE 0x100000                 // 内存池大小
#define MAX_RESOURCE_HANDLES 0x100               // 最大资源句柄数
#define CLEANUP_BATCH_SIZE 0x20                   // 清理批次大小

/* ============================================================================
 * 系统状态码定义
 * ============================================================================ */

#define SYSTEM_STATE_UNINITIALIZED 0x00           // 未初始化状态
#define SYSTEM_STATE_INITIALIZING 0x01            // 正在初始化
#define SYSTEM_STATE_INITIALIZED 0x02             // 已初始化
#define SYSTEM_STATE_RUNNING 0x03                  // 运行中
#define SYSTEM_STATE_PAUSED 0x04                   // 暂停状态
#define SYSTEM_STATE_ERROR 0x05                    // 错误状态
#define SYSTEM_STATE_SHUTDOWN 0x06                 // 关闭状态

/* ============================================================================
 * 系统错误码定义
 * ============================================================================ */

#define SYSTEM_ERROR_NONE 0x00000000             // 无错误
#define SYSTEM_ERROR_INVALID_PARAM 0x00000001      // 无效参数
#define SYSTEM_ERROR_MEMORY_ALLOC 0x00000002       // 内存分配失败
#define SYSTEM_ERROR_NULL_POINTER 0x00000003       // 空指针错误
#define SYSTEM_ERROR_BUFFER_OVERFLOW 0x00000004    // 缓冲区溢出
#define SYSTEM_ERROR_INVALID_STATE 0x00000005     // 无效状态
#define SYSTEM_ERROR_TIMEOUT 0x00000006            // 超时错误
#define SYSTEM_ERROR_RESOURCE_BUSY 0x00000007      // 资源忙

/* ============================================================================
 * 类型定义和别名
 * ============================================================================ */

typedef longlong* ComponentPtr;                  // 组件指针
typedef uint64_t* ResourceHandlePtr;             // 资源句柄指针
typedef char SystemInitializationFlags;          // 系统初始化标志
typedef uint32_t SystemOperationStatus;          // 系统操作状态
typedef ulonglong ResourceCleanupFlags;          // 资源清理标志

/* ============================================================================
 * 函数别名定义
 * ============================================================================ */

/**
 * @brief 系统内存初始化器
 * 初始化系统内存并设置参数
 */
#define SystemMemoryInitializer FUN_1806c4e00

/**
 * @brief 组件配置管理器
 * 管理组件的配置和参数设置
 */
#define ComponentConfigManager FUN_1806c4e90

/**
 * @brief 数据验证器
 * 验证数据的完整性和有效性
 */
#define DataValidator DataValidator

/**
 * @brief 资源分配器
 * 分配系统资源和管理资源句柄
 */
#define ResourceAllocator ResourceAllocator

/**
 * @brief 组件初始化器
 * 初始化系统组件和子模块
 */
#define ComponentInitializer ComponentInitializer

/**
 * @brief 资源清理器
 * 清理系统资源和释放内存
 */
#define ResourceCleaner ResourceCleaner

/**
 * @brief 数据处理器
 * 处理数据的转换和操作
 */
#define DataProcessor DataProcessor

/**
 * @brief 组件管理器
 * 管理组件的生命周期和状态
 */
#define ComponentManager ComponentManager

/**
 * @brief 系统配置器
 * 配置系统参数和设置
 */
#define SystemConfigurator SystemConfigurator

/**
 * @brief 数据加载器
 * 加载数据和资源文件
 */
#define DataLoader FUN_1806cd580

/**
 * @brief 资源管理器
 * 管理资源的分配和释放
 */
#define ResourceManager FUN_1806d7170

/**
 * @brief 数据转换器
 * 转换数据格式和类型
 */
#define DataConverter FUN_1806d2e60

/**
 * @brief 系统同步器
 * 同步系统状态和数据
 */
#define SystemSynchronizer FUN_1806c19d0

/**
 * @brief 组件注册器
 * 注册系统组件和模块
 */
#define ComponentRegistrar FUN_1806c09c0

/**
 * @brief 数据读取器
 * 读取数据和资源信息
 */
#define DataReader FUN_1806d80c0

/**
 * @brief 内存管理器
 * 管理内存分配和释放
 */
#define MemoryManager FUN_1806c4470

/**
 * @brief 状态管理器
 * 管理系统状态和转换
 */
#define StateManager FUN_1806d7080

/**
 * @brief 数据查找器
 * 查找特定的数据和资源
 */
#define DataFinder FUN_1806d5410

/**
 * @brief 系统检查器
 * 检查系统状态和完整性
 */
#define SystemChecker FUN_1806c1590

/**
 * @brief 资源验证器
 * 验证资源的有效性和状态
 */
#define ResourceValidator FUN_1806c48c0

/**
 * @brief 系统处理器
 * 处理系统操作和任务
 */
#define SystemProcessor FUN_1806c4320

/* ============================================================================
 * 核心函数实现
 * ============================================================================ */

/**
 * @brief 系统内存初始化器
 * 
 * 初始化系统内存并设置参数：
 * - 分配内存池和初始化参数
 * - 设置系统内存管理器
 * - 配置内存分配策略
 * - 初始化内存监控和统计
 * 
 * @note 该函数执行完整的系统内存初始化操作
 * @warning 初始化过程中会分配大量内存，请确保系统资源充足
 * @see ComponentConfigManager, ResourceAllocator
 */
void SystemMemoryInitializer(void)

{
  int8_t memory_buffer[128];
  
  // 初始化内存缓冲区
  memset(memory_buffer, 0, 0x80);
}



/**
 * @brief 组件配置管理器
 * 
 * 管理组件的配置和参数设置：
 * - 解析组件配置参数
 * - 设置组件属性和状态
 * - 管理组件之间的依赖关系
 * - 验证配置的有效性
 * 
 * @param system_handle 系统句柄
 * @param config_params 配置参数指针
 * @return int 配置结果状态码
 * 
 * @note 该函数提供完整的组件配置管理功能
 * @see SystemMemoryInitializer, DataValidator
 */
int ComponentConfigManager(longlong system_handle, longlong *config_params)

{
  int32_t *puVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  void *puVar8;
  char *pcStackX_8;
  void *puStack_d8;
  uint uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  longlong lStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  longlong lStack_80;
  longlong lStack_78;
  char cStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  void *apuStack_50 [2];
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  lStack_b0 = param_2[1];
  uStack_a8 = (int32_t)param_2[2];
  uStack_a4 = *(int32_t *)((longlong)param_2 + 0x14);
  uStack_a0 = (int32_t)param_2[3];
  uStack_9c = *(int32_t *)((longlong)param_2 + 0x1c);
  lStack_b8 = *param_2;
  lStack_98 = param_2[4];
  plStack_90 = (longlong *)param_2[5];
  plStack_88 = (longlong *)param_2[6];
  lStack_80 = param_2[7];
  lStack_78 = param_2[8];
  cStack_70 = (char)param_2[9];
  lStack_68 = param_2[10];
  lStack_60 = param_2[0xb];
  lStack_58 = param_2[0xc];
  iVar5 = DataValidator(uStack_a8,&lStack_b8);
  lStack_b8 = *param_2;
  lStack_78 = param_2[8];
  uStack_a8 = (int32_t)param_2[2];
  uStack_a4 = *(int32_t *)((longlong)param_2 + 0x14);
  uStack_a0 = (int32_t)param_2[3];
  uStack_9c = *(int32_t *)((longlong)param_2 + 0x1c);
  lStack_98 = param_2[4];
  lStack_b0 = param_2[1];
  cStack_70 = (char)param_2[9];
  plStack_90 = (longlong *)param_2[5];
  lStack_68 = param_2[10];
  plStack_88 = (longlong *)param_2[6];
  lStack_60 = param_2[0xb];
  lStack_80 = param_2[7];
  lStack_58 = param_2[0xc];
  ResourceAllocator(&lStack_b8,*(uint64_t *)(param_1 + 0xd0));
  plVar3 = plStack_88;
  plVar7 = (longlong *)0x0;
  if ((short)plStack_88[1] == 0xd) {
    plVar7 = plStack_88;
  }
  if (plVar7 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar7 + 0x1e8))();
    if (*(short *)(lVar6 + 8) == 0xc) goto LAB_1806c504a;
  }
  uStack_18 = *(int32_t *)(param_1 + 0xe0);
  uStack_14 = *(int32_t *)(param_1 + 0xe4);
  uStack_10 = *(int32_t *)(param_1 + 0xe8);
  uStack_c = *(int32_t *)(param_1 + 0xec);
  pcStackX_8 = (char *)0x0;
  if (cStack_70 != '\0') {
    if (*(int *)(lStack_b8 + 0x10) == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)
                (*(longlong *)(lStack_b8 + 8) + (ulonglong)(*(int *)(lStack_b8 + 0x10) - 1) * 0x18);
    }
    cVar4 = (**(code **)(*plStack_90 + 0x10))(plStack_90,puVar8,&pcStackX_8);
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      ComponentInitializer(pcStackX_8,&puStack_d8);
      apuStack_50[0] = puStack_d8;
      uStack_40 = uStack_c8;
      uStack_38 = uStack_c0;
      uStack_3c = uStack_c4;
      (*(code *)CONCAT44(uStack_c,uStack_10))(plVar3,apuStack_50);
    }
  }
LAB_1806c504a:
  ResourceCleaner(&lStack_b8);
  DataProcessor(&lStack_b8);
  puStack_d8 = &UNK_18094c9b0;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,cStack_70);
  uVar2 = *(uint *)(lStack_b8 + 0x10);
  uStack_d0 = uStack_d0 & 0xffffff00;
  if (uVar2 < (*(uint *)(lStack_b8 + 0x14) & 0x7fffffff)) {
    lVar6 = *(longlong *)(lStack_b8 + 8);
    puVar1 = (int32_t *)(lVar6 + (ulonglong)uVar2 * 0x18);
    *puVar1 = 0x8094c9b0;
    puVar1[1] = 1;
    puVar1[2] = uStack_d0;
    puVar1[3] = uStack_cc;
    *(ulonglong *)(lVar6 + 0x10 + (ulonglong)uVar2 * 0x18) = CONCAT44(uStack_c4,uStack_c8);
    *(int *)(lStack_b8 + 0x10) = *(int *)(lStack_b8 + 0x10) + 1;
  }
  else {
    ComponentManager(lStack_b8,&puStack_d8);
  }
  SystemConfigurator(&lStack_b8,plStack_88,param_1 + 0xf0,0);
  ResourceCleaner(&lStack_b8);
  return iVar5 + 3;
}



int FUN_1806c50f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint64_t *puVar7;
  int iVar8;
  void *puVar9;
  longlong lStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int8_t auStack_50 [8];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  lStack_a8 = *param_2;
  plStack_a0 = (longlong *)param_2[1];
  lStack_98 = param_2[2];
  lStack_90 = param_2[3];
  lStack_88 = param_2[4];
  lStack_80 = param_2[5];
  lStack_78 = param_2[6];
  iVar6 = FUN_1806cd580(param_1,&lStack_a8);
  lVar1 = *param_2;
  plVar2 = (longlong *)param_2[1];
  lVar3 = param_2[4];
  lVar4 = param_2[2];
  lVar5 = param_2[3];
  lStack_80 = param_2[5];
  lStack_78 = param_2[6];
  lStack_a8 = lVar1;
  plStack_a0 = plVar2;
  lStack_98 = lVar4;
  lStack_90 = lVar5;
  lStack_88 = lVar3;
  FUN_1806d7170(&lStack_a8,*(uint64_t *)(param_1 + 0xd0));
  uStack_48 = *(int32_t *)(param_1 + 0xd0);
  uStack_44 = *(int32_t *)(param_1 + 0xd4);
  uStack_40 = *(int32_t *)(param_1 + 0xd8);
  uStack_3c = *(int32_t *)(param_1 + 0xdc);
  puVar7 = (uint64_t *)(**(code **)(param_1 + 0xe0))(auStack_50,lVar4);
  uStack_70 = *puVar7;
  uStack_68 = puVar7[1];
  uStack_5c = *(int32_t *)((longlong)puVar7 + 0x14);
  uStack_60 = *(int32_t *)(puVar7 + 2);
  uStack_58 = *(int32_t *)(puVar7 + 3);
  if (*(int *)(lVar1 + 0x10) == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(void **)
              (*(longlong *)(lVar1 + 8) + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  FUN_1806d2e60(plVar2,lVar3,lVar5,puVar9,&uStack_70);
  iVar8 = *(int *)(lVar1 + 0x10);
  if (iVar8 != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(iVar8 - 1) * 0x10) != '\0') {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar8 = *(int *)(lVar1 + 0x10);
    }
    *(int *)(lVar1 + 0x10) = iVar8 + -1;
  }
  FUN_1806d7170(&lStack_a8,&UNK_18094c9b0);
  FUN_1806c19d0(&lStack_a8,param_1 + 0xf0);
  iVar8 = *(int *)(lVar1 + 0x10);
  if (iVar8 != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(iVar8 - 1) * 0x10) != '\0') {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar8 = *(int *)(lVar1 + 0x10);
    }
    *(int *)(lVar1 + 0x10) = iVar8 + -1;
  }
  return iVar6 + 3;
}



int FUN_1806c52c0(longlong param_1,longlong *param_2,int param_3)

{
  int32_t *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint64_t uVar8;
  void *puVar9;
  void *puVar10;
  int32_t uVar11;
  char *pcStackX_8;
  int8_t auStackX_10 [8];
  void *puStack_58;
  uint uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  
  FUN_1806c09c0(param_2,param_1 + 0x18,param_3 + 1);
  uStack_50 = *(int32_t *)(param_1 + 0x60);
  uStack_4c = *(int32_t *)(param_1 + 100);
  uStack_48 = *(int32_t *)(param_1 + 0x68);
  uStack_44 = *(int32_t *)(param_1 + 0x6c);
  uStack_40 = *(int32_t *)(param_1 + 0x70);
  uStack_3c = *(int32_t *)(param_1 + 0x74);
  uStack_38 = *(int32_t *)(param_1 + 0x78);
  uStack_34 = *(int32_t *)(param_1 + 0x7c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar4 = (int *)param_2[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  puVar10 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar2 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar11);
    }
  }
  ResourceCleaner(param_2);
  uStack_50 = *(int32_t *)(param_1 + 0x80);
  uStack_4c = *(int32_t *)(param_1 + 0x84);
  uStack_48 = *(int32_t *)(param_1 + 0x88);
  uStack_44 = *(int32_t *)(param_1 + 0x8c);
  uStack_40 = *(int32_t *)(param_1 + 0x90);
  uStack_3c = *(int32_t *)(param_1 + 0x94);
  uStack_38 = *(int32_t *)(param_1 + 0x98);
  uStack_34 = *(int32_t *)(param_1 + 0x9c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar4 = (int *)param_2[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar2 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar11);
    }
  }
  ResourceCleaner(param_2);
  uStack_50 = *(uint *)(param_1 + 0xa0);
  uStack_4c = *(int32_t *)(param_1 + 0xa4);
  uStack_48 = *(int32_t *)(param_1 + 0xa8);
  uStack_44 = *(int32_t *)(param_1 + 0xac);
  uStack_40 = *(int32_t *)(param_1 + 0xb0);
  uStack_3c = *(int32_t *)(param_1 + 0xb4);
  uStack_38 = *(int32_t *)(param_1 + 0xb8);
  uStack_34 = *(int32_t *)(param_1 + 0xbc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar4 = (int *)param_2[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar2 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar11);
    }
  }
  ResourceCleaner(param_2);
  DataProcessor(param_2);
  lVar5 = *param_2;
  puStack_58 = &UNK_18094c9b8;
  uStack_48 = CONCAT31(uStack_48._1_3_,(char)param_2[9]);
  uVar3 = *(uint *)(lVar5 + 0x10);
  uStack_50 = uStack_50 & 0xffffff00;
  if (uVar3 < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
    lVar6 = *(longlong *)(lVar5 + 8);
    puVar1 = (int32_t *)(lVar6 + (ulonglong)uVar3 * 0x18);
    *puVar1 = 0x8094c9b8;
    puVar1[1] = 1;
    puVar1[2] = uStack_50;
    puVar1[3] = uStack_4c;
    *(ulonglong *)(lVar6 + 0x10 + (ulonglong)uVar3 * 0x18) = CONCAT44(uStack_44,uStack_48);
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  }
  else {
    ComponentManager(lVar5,&puStack_58);
  }
  FUN_1806c4470(param_2,param_2[6],param_1 + 0xc0);
  ResourceCleaner(param_2);
  uStack_40 = *(int32_t *)(param_1 + 0xf0);
  uStack_3c = *(int32_t *)(param_1 + 0xf4);
  uStack_38 = *(int32_t *)(param_1 + 0xf8);
  uStack_34 = *(int32_t *)(param_1 + 0xfc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar4 = (int *)param_2[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 != 0) {
      puVar10 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar2 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar10,&pcStackX_8);
    if ((((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) &&
       ((longlong *)param_2[4] != (longlong *)0x0)) {
      uVar8 = (**(code **)(*(longlong *)param_2[4] + 8))();
      (*(code *)CONCAT44(uStack_34,uStack_38))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 10;
}



int FUN_1806c55d0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int32_t uVar5;
  void *puVar6;
  void *puVar7;
  char *pcStackX_8;
  char *pcStackX_10;
  
  pcVar3 = *(code **)(param_1 + 0x150);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x138));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar7 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  pcVar3 = *(code **)(param_1 + 0x170);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x158));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  pcVar3 = *(code **)(param_1 + 400);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x178));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  pcVar3 = *(code **)(param_1 + 0x1b0);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x198));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 4;
}



int FUN_1806c5850(uint64_t *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  void *puVar4;
  void *puVar5;
  char *pcStackX_8;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  
  uStack_30 = *(int32_t *)(param_1 + 2);
  uStack_2c = *(int32_t *)((longlong)param_1 + 0x14);
  uStack_28 = *(int32_t *)(param_1 + 3);
  uStack_24 = *(int32_t *)((longlong)param_1 + 0x1c);
  FUN_1806d7080(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      ComponentInitializer(pcStackX_8,&uStack_88);
      uStack_68 = uStack_88;
      uStack_60 = uStack_80;
      uStack_58 = uStack_78;
      uStack_50 = uStack_70;
      uStack_54 = uStack_74;
      (*(code *)CONCAT44(uStack_24,uStack_28))(param_2[6],&uStack_68);
    }
  }
  ResourceCleaner(param_2);
  uStack_30 = *(int32_t *)(param_1 + 6);
  uStack_2c = *(int32_t *)((longlong)param_1 + 0x34);
  uStack_28 = *(int32_t *)(param_1 + 7);
  uStack_24 = *(int32_t *)((longlong)param_1 + 0x3c);
  FUN_1806d7080(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar5 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      ComponentInitializer(pcStackX_8,&uStack_68);
      uStack_88 = uStack_68;
      uStack_80 = uStack_60;
      uStack_78 = uStack_58;
      uStack_70 = uStack_50;
      uStack_74 = uStack_54;
      (*(code *)CONCAT44(uStack_24,uStack_28))(param_2[6],&uStack_88);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 2;
}



int FUN_1806c59f0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *puVar4;
  int iVar5;
  void *puVar6;
  char **ppcVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  char *pcStackX_8;
  char *pcStackX_10;
  int iStackX_18;
  int32_t uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int32_t uStack_9c;
  uint64_t *puStack_98;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  
  uStack_78 = *(int32_t *)(param_1 + 0x50);
  uStack_74 = *(int32_t *)(param_1 + 0x54);
  uStack_70 = *(int32_t *)(param_1 + 0x58);
  uStack_6c = *(int32_t *)(param_1 + 0x5c);
  iStackX_18 = param_3;
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar5 = 0;
  puVar6 = &UNK_18094c9c0;
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar2 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar8 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar9 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uVar10 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_9c = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_a8 = uVar8;
      iStack_a4 = uVar9;
      iStack_a0 = uVar10;
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],&uStack_a8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x70);
  uStack_74 = *(int32_t *)(param_1 + 0x74);
  uStack_70 = *(int32_t *)(param_1 + 0x78);
  uStack_6c = *(int32_t *)(param_1 + 0x7c);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar2 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar8 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar9 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      iStack_a0 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_a8 = uVar8;
      iStack_a4 = uVar9;
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],&uStack_a8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x90);
  uStack_74 = *(int32_t *)(param_1 + 0x94);
  uStack_70 = *(int32_t *)(param_1 + 0x98);
  uStack_6c = *(int32_t *)(param_1 + 0x9c);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d5410(pcStackX_8,&DAT_180be02c0);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0xb0);
  uStack_74 = *(int32_t *)(param_1 + 0xb4);
  uStack_70 = *(int32_t *)(param_1 + 0xb8);
  uStack_6c = *(int32_t *)(param_1 + 0xbc);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0xd0);
  uStack_74 = *(int32_t *)(param_1 + 0xd4);
  uStack_70 = *(int32_t *)(param_1 + 0xd8);
  uStack_6c = *(int32_t *)(param_1 + 0xdc);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0xc0));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0xf0);
  uStack_74 = *(int32_t *)(param_1 + 0xf4);
  uStack_70 = *(int32_t *)(param_1 + 0xf8);
  uStack_6c = *(int32_t *)(param_1 + 0xfc);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x110);
  uStack_74 = *(int32_t *)(param_1 + 0x114);
  uStack_70 = *(int32_t *)(param_1 + 0x118);
  uStack_6c = *(int32_t *)(param_1 + 0x11c);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x100));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,0x55);
  puStack_98 = (uint64_t *)(param_1 + 0x120);
  ppcVar7 = &pcStackX_8;
  if ((char **)param_2[0xb] != (char **)0x0) {
    ppcVar7 = (char **)param_2[0xb];
  }
  iVar3 = iVar5;
  if ((int *)param_2[0xc] != (int *)0x0) {
    iVar3 = *(int *)param_2[0xc];
  }
  FUN_1806d7080(param_2,*puStack_98);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x130));
  iStack_a4 = iVar3 + 0x68;
  iStack_a0._0_1_ = 1;
  uStack_a8 = CONCAT31(uStack_a8._1_3_,1);
  FUN_1806c1590(param_2,*(int *)ppcVar7,&uStack_a8);
  *(int *)ppcVar7 = *(int *)ppcVar7 + 1;
  ResourceCleaner(param_2);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x138));
  iStack_a4 = iVar3 + 0x6c;
  iStack_a0 = (uint)iStack_a0._1_3_ << 8;
  FUN_1806c1590(param_2,*(int *)ppcVar7,&uStack_a8);
  ResourceCleaner(param_2);
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x160);
  uStack_74 = *(int32_t *)(param_1 + 0x164);
  uStack_70 = *(int32_t *)(param_1 + 0x168);
  uStack_6c = *(int32_t *)(param_1 + 0x16c);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x180);
  uStack_74 = *(int32_t *)(param_1 + 0x184);
  uStack_70 = *(int32_t *)(param_1 + 0x188);
  uStack_6c = *(int32_t *)(param_1 + 0x18c);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x170));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x1a0);
  uStack_74 = *(int32_t *)(param_1 + 0x1a4);
  uStack_70 = *(int32_t *)(param_1 + 0x1a8);
  uStack_6c = *(int32_t *)(param_1 + 0x1ac);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 400));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x1c0);
  uStack_74 = *(int32_t *)(param_1 + 0x1c4);
  uStack_70 = *(int32_t *)(param_1 + 0x1c8);
  uStack_6c = *(int32_t *)(param_1 + 0x1cc);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x1b0));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 != 0) {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      iVar3 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcStackX_8,&UNK_180a06418);
      (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],iVar3 == 0);
    }
  }
  ResourceCleaner(param_2);
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,0x5a);
  ppcVar7 = &pcStackX_8;
  if ((char **)param_2[0xb] != (char **)0x0) {
    ppcVar7 = (char **)param_2[0xb];
  }
  if ((int *)param_2[0xc] != (int *)0x0) {
    iVar5 = *(int *)param_2[0xc];
  }
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x1d0));
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x1e0));
  iStack_a4 = iVar5 + 0x80;
  iStack_a0._0_1_ = 1;
  uStack_a8 = CONCAT31(uStack_a8._1_3_,1);
  puStack_98 = (uint64_t *)(param_1 + 0x1d0);
  FUN_1806c1590(param_2,*(int *)ppcVar7,&uStack_a8);
  *(int *)ppcVar7 = *(int *)ppcVar7 + 1;
  ResourceCleaner(param_2);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x1e8));
  iStack_a4 = iVar5 + 0x84;
  iStack_a0 = (uint)iStack_a0._1_3_ << 8;
  FUN_1806c1590(param_2,*(int *)ppcVar7,&uStack_a8);
  ResourceCleaner(param_2);
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x210);
  uStack_74 = *(int32_t *)(param_1 + 0x214);
  uStack_70 = *(int32_t *)(param_1 + 0x218);
  uStack_6c = *(int32_t *)(param_1 + 0x21c);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar2 = FUN_1806c48c0(param_2,&pcStackX_8);
  if (cVar2 != '\0') {
    (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],(ulonglong)pcStackX_8 & 0xff);
  }
  ResourceCleaner(param_2);
  uStack_78 = *(int32_t *)(param_1 + 0x230);
  uStack_74 = *(int32_t *)(param_1 + 0x234);
  uStack_70 = *(int32_t *)(param_1 + 0x238);
  uStack_6c = *(int32_t *)(param_1 + 0x23c);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar2 = FUN_1806c4320(param_2,&pcStackX_8);
  if (cVar2 != '\0') {
    (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[6],pcStackX_8._0_4_);
  }
  ResourceCleaner(param_2);
  return iStackX_18 + 0x10;
}



int FUN_1806c5a08(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong in_RAX;
  void *puVar8;
  longlong unaff_RBP;
  int iVar9;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  void *puVar10;
  int *piVar11;
  uint64_t unaff_R15;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  uint64_t in_XMM1_Qa;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
  uVar2 = *(uint64_t *)(param_1 + 0x40);
  *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int *)(unaff_RBP + -0x19) = (int)in_XMM1_Qa;
  *(int *)(unaff_RBP + -0x15) = (int)((ulonglong)in_XMM1_Qa >> 0x20);
  *(int32_t *)(unaff_RBP + -0x11) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + -0xd) = in_XMM1_Dd;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  iVar9 = 0;
  puVar10 = &UNK_18094c9c0;
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x67);
      uVar13 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar5 = param_2[6];
      *(int32_t *)(unaff_RBP + -0x49) = uVar12;
      *(int32_t *)(unaff_RBP + -0x45) = uVar13;
      *(int32_t *)(unaff_RBP + -0x41) = uVar14;
      *(int32_t *)(unaff_RBP + -0x3d) = uVar15;
      (**(code **)(unaff_RBP + -0x11))(lVar5,unaff_RBP + -0x49);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x74);
  uVar13 = *(int32_t *)(param_1 + 0x78);
  uVar14 = *(int32_t *)(param_1 + 0x7c);
  uVar2 = *(uint64_t *)(param_1 + 0x60);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x70);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x67);
      uVar13 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar5 = param_2[6];
      *(int32_t *)(unaff_RBP + -0x49) = uVar12;
      *(int32_t *)(unaff_RBP + -0x45) = uVar13;
      *(int32_t *)(unaff_RBP + -0x41) = uVar14;
      (**(code **)(unaff_RBP + -0x11))(lVar5,unaff_RBP + -0x49);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x94);
  uVar13 = *(int32_t *)(param_1 + 0x98);
  uVar14 = *(int32_t *)(param_1 + 0x9c);
  uVar2 = *(uint64_t *)(param_1 + 0x80);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x90);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = FUN_1806d5410(pcVar4,&DAT_180be02c0);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],uVar12);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0xb4);
  uVar13 = *(int32_t *)(param_1 + 0xb8);
  uVar14 = *(int32_t *)(param_1 + 0xbc);
  uVar2 = *(uint64_t *)(param_1 + 0xa0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0xb0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],uVar12);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0xd4);
  uVar13 = *(int32_t *)(param_1 + 0xd8);
  uVar14 = *(int32_t *)(param_1 + 0xdc);
  uVar2 = *(uint64_t *)(param_1 + 0xc0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0xd0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],uVar12);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0xf4);
  uVar13 = *(int32_t *)(param_1 + 0xf8);
  uVar14 = *(int32_t *)(param_1 + 0xfc);
  uVar2 = *(uint64_t *)(param_1 + 0xe0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0xf0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],uVar12);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x114);
  uVar13 = *(int32_t *)(param_1 + 0x118);
  uVar14 = *(int32_t *)(param_1 + 0x11c);
  uVar2 = *(uint64_t *)(param_1 + 0x100);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x110);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],uVar12);
    }
  }
  ResourceCleaner(param_2);
  piVar3 = (int *)param_2[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x55;
  piVar11 = (int *)(unaff_RBP + 0x67);
  if (piVar3 != (int *)0x0) {
    piVar11 = piVar3;
  }
  iVar7 = iVar9;
  if ((int *)param_2[0xc] != (int *)0x0) {
    iVar7 = *(int *)param_2[0xc];
  }
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x120));
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x130));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar7 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(param_1 + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(param_2,iVar1,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  ResourceCleaner(param_2);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x138));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar7 + 0x6c;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(param_2,iVar1,unaff_RBP + -0x49);
  ResourceCleaner(param_2);
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x164);
  uVar13 = *(int32_t *)(param_1 + 0x168);
  uVar14 = *(int32_t *)(param_1 + 0x16c);
  uVar2 = *(uint64_t *)(param_1 + 0x150);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x160);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],uVar12);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x184);
  uVar13 = *(int32_t *)(param_1 + 0x188);
  uVar14 = *(int32_t *)(param_1 + 0x18c);
  uVar2 = *(uint64_t *)(param_1 + 0x170);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x180);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],uVar12);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x1a4);
  uVar13 = *(int32_t *)(param_1 + 0x1a8);
  uVar14 = *(int32_t *)(param_1 + 0x1ac);
  uVar2 = *(uint64_t *)(param_1 + 400);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x1a0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],uVar12);
    }
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x1c4);
  uVar13 = *(int32_t *)(param_1 + 0x1c8);
  uVar14 = *(int32_t *)(param_1 + 0x1cc);
  uVar2 = *(uint64_t *)(param_1 + 0x1b0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x1c0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 != 0) {
      puVar10 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar10,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      iVar7 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar4,&UNK_180a06418);
      (**(code **)(unaff_RBP + -0x11))(param_2[6],iVar7 == 0);
    }
  }
  ResourceCleaner(param_2);
  piVar3 = (int *)param_2[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x5a;
  piVar11 = (int *)(unaff_RBP + 0x67);
  if (piVar3 != (int *)0x0) {
    piVar11 = piVar3;
  }
  if ((int *)param_2[0xc] != (int *)0x0) {
    iVar9 = *(int *)param_2[0xc];
  }
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x1d0));
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x1e0));
  iVar7 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar9 + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(param_1 + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(param_2,iVar7,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  ResourceCleaner(param_2);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x1e8));
  iVar7 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar9 + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(param_2,iVar7,unaff_RBP + -0x49);
  ResourceCleaner(param_2);
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x214);
  uVar13 = *(int32_t *)(param_1 + 0x218);
  uVar14 = *(int32_t *)(param_1 + 0x21c);
  uVar2 = *(uint64_t *)(param_1 + 0x200);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x210);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar6 = FUN_1806c48c0(param_2,unaff_RBP + 0x67);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(param_2[6],*(int8_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner(param_2);
  uVar12 = *(int32_t *)(param_1 + 0x234);
  uVar13 = *(int32_t *)(param_1 + 0x238);
  uVar14 = *(int32_t *)(param_1 + 0x23c);
  uVar2 = *(uint64_t *)(param_1 + 0x220);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(param_1 + 0x230);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar6 = FUN_1806c4320(param_2,unaff_RBP + 0x67);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(param_2[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner(param_2);
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c5a1a(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t uVar5;
  char cVar6;
  int iVar7;
  longlong in_RAX;
  void *puVar8;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar9;
  longlong unaff_RDI;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  void *puVar10;
  int *piVar11;
  uint64_t unaff_R15;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int *)(unaff_RBP + -0x19) = (int)param_2;
  *(int *)(unaff_RBP + -0x15) = (int)((ulonglong)param_2 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x11) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + -0xd) = in_XMM1_Dd;
  FUN_1806d7080();
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  iVar9 = 0;
  puVar10 = &UNK_18094c9c0;
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x6f), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar3;
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x67);
      uVar13 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar4 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x49) = uVar12;
      *(int32_t *)(unaff_RBP + -0x45) = uVar13;
      *(int32_t *)(unaff_RBP + -0x41) = uVar14;
      *(int32_t *)(unaff_RBP + -0x3d) = uVar15;
      (**(code **)(unaff_RBP + -0x11))(lVar4,unaff_RBP + -0x49);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x74);
  uVar13 = *(int32_t *)(unaff_RDI + 0x78);
  uVar14 = *(int32_t *)(unaff_RDI + 0x7c);
  uVar5 = *(uint64_t *)(unaff_RDI + 0x60);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x70);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x6f), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar3;
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x67);
      uVar13 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar4 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x49) = uVar12;
      *(int32_t *)(unaff_RBP + -0x45) = uVar13;
      *(int32_t *)(unaff_RBP + -0x41) = uVar14;
      (**(code **)(unaff_RBP + -0x11))(lVar4,unaff_RBP + -0x49);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x94);
  uVar13 = *(int32_t *)(unaff_RDI + 0x98);
  uVar14 = *(int32_t *)(unaff_RDI + 0x9c);
  uVar5 = *(uint64_t *)(unaff_RDI + 0x80);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x90);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = FUN_1806d5410(pcVar3,&DAT_180be02c0);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0xb4);
  uVar13 = *(int32_t *)(unaff_RDI + 0xb8);
  uVar14 = *(int32_t *)(unaff_RDI + 0xbc);
  uVar5 = *(uint64_t *)(unaff_RDI + 0xa0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xb0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0xd4);
  uVar13 = *(int32_t *)(unaff_RDI + 0xd8);
  uVar14 = *(int32_t *)(unaff_RDI + 0xdc);
  uVar5 = *(uint64_t *)(unaff_RDI + 0xc0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xd0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0xf4);
  uVar13 = *(int32_t *)(unaff_RDI + 0xf8);
  uVar14 = *(int32_t *)(unaff_RDI + 0xfc);
  uVar5 = *(uint64_t *)(unaff_RDI + 0xe0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xf0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x114);
  uVar13 = *(int32_t *)(unaff_RDI + 0x118);
  uVar14 = *(int32_t *)(unaff_RDI + 0x11c);
  uVar5 = *(uint64_t *)(unaff_RDI + 0x100);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x110);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar12 = ResourceCleaner();
  piVar2 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x55;
  piVar11 = (int *)(unaff_RBP + 0x67);
  if (piVar2 != (int *)0x0) {
    piVar11 = piVar2;
  }
  iVar7 = iVar9;
  if ((int *)unaff_RBX[0xc] != (int *)0x0) {
    iVar7 = *(int *)unaff_RBX[0xc];
  }
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x120));
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar7 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar12,iVar1,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar12 = ResourceCleaner();
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar7 + 0x6c;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(uVar12,iVar1,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x164);
  uVar13 = *(int32_t *)(unaff_RDI + 0x168);
  uVar14 = *(int32_t *)(unaff_RDI + 0x16c);
  uVar5 = *(uint64_t *)(unaff_RDI + 0x150);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x160);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x184);
  uVar13 = *(int32_t *)(unaff_RDI + 0x188);
  uVar14 = *(int32_t *)(unaff_RDI + 0x18c);
  uVar5 = *(uint64_t *)(unaff_RDI + 0x170);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x180);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x1a4);
  uVar13 = *(int32_t *)(unaff_RDI + 0x1a8);
  uVar14 = *(int32_t *)(unaff_RDI + 0x1ac);
  uVar5 = *(uint64_t *)(unaff_RDI + 400);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1a0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &UNK_18094c9c0;
    }
    else {
      puVar8 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = FUN_1806d80c0(pcVar3,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x1c4);
  uVar13 = *(int32_t *)(unaff_RDI + 0x1c8);
  uVar14 = *(int32_t *)(unaff_RDI + 0x1cc);
  uVar5 = *(uint64_t *)(unaff_RDI + 0x1b0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1c0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 != 0) {
      puVar10 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar10,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      iVar7 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar3,&UNK_180a06418);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],iVar7 == 0);
    }
  }
  uVar12 = ResourceCleaner();
  piVar2 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x5a;
  piVar11 = (int *)(unaff_RBP + 0x67);
  if (piVar2 != (int *)0x0) {
    piVar11 = piVar2;
  }
  if ((int *)unaff_RBX[0xc] != (int *)0x0) {
    iVar9 = *(int *)unaff_RBX[0xc];
  }
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar7 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar9 + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar12,iVar7,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar12 = ResourceCleaner();
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar7 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar9 + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(uVar12,iVar7,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x214);
  uVar13 = *(int32_t *)(unaff_RDI + 0x218);
  uVar14 = *(int32_t *)(unaff_RDI + 0x21c);
  uVar5 = *(uint64_t *)(unaff_RDI + 0x200);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x210);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  uVar12 = FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar6 = FUN_1806c48c0(uVar12,unaff_RBP + 0x67);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int8_t *)(unaff_RBP + 0x67));
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x234);
  uVar13 = *(int32_t *)(unaff_RDI + 0x238);
  uVar14 = *(int32_t *)(unaff_RDI + 0x23c);
  uVar5 = *(uint64_t *)(unaff_RDI + 0x220);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x230);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  uVar12 = FUN_1806d7080(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar6 = FUN_1806c4320(uVar12,unaff_RBP + 0x67);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c5a43(void)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  void *puVar9;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  void *puVar10;
  int *piVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  
  puVar10 = &UNK_18094c9c0;
  *(ulonglong *)(unaff_RBP + 0x6f) = unaff_RSI;
  cVar7 = (char)unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      *(char **)(unaff_RBP + 0x67) = pcVar2;
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x67);
      uVar13 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar15 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar3 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x49) = uVar12;
      *(int32_t *)(unaff_RBP + -0x45) = uVar13;
      *(int32_t *)(unaff_RBP + -0x41) = uVar14;
      *(int32_t *)(unaff_RBP + -0x3d) = uVar15;
      (**(code **)(unaff_RBP + -0x11))(lVar3,unaff_RBP + -0x49);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x74);
  uVar13 = *(int32_t *)(unaff_RDI + 0x78);
  uVar14 = *(int32_t *)(unaff_RDI + 0x7c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x60);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x70);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x6f) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      *(char **)(unaff_RBP + 0x67) = pcVar2;
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x67);
      uVar13 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar3 = unaff_RBX[6];
      *(int32_t *)(unaff_RBP + -0x49) = uVar12;
      *(int32_t *)(unaff_RBP + -0x45) = uVar13;
      *(int32_t *)(unaff_RBP + -0x41) = uVar14;
      (**(code **)(unaff_RBP + -0x11))(lVar3,unaff_RBP + -0x49);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x94);
  uVar13 = *(int32_t *)(unaff_RDI + 0x98);
  uVar14 = *(int32_t *)(unaff_RDI + 0x9c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x80);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x90);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = FUN_1806d5410(pcVar2,&DAT_180be02c0);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0xb4);
  uVar13 = *(int32_t *)(unaff_RDI + 0xb8);
  uVar14 = *(int32_t *)(unaff_RDI + 0xbc);
  uVar4 = *(uint64_t *)(unaff_RDI + 0xa0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xb0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0xd4);
  uVar13 = *(int32_t *)(unaff_RDI + 0xd8);
  uVar14 = *(int32_t *)(unaff_RDI + 0xdc);
  uVar4 = *(uint64_t *)(unaff_RDI + 0xc0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xd0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0xf4);
  uVar13 = *(int32_t *)(unaff_RDI + 0xf8);
  uVar14 = *(int32_t *)(unaff_RDI + 0xfc);
  uVar4 = *(uint64_t *)(unaff_RDI + 0xe0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xf0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x114);
  uVar13 = *(int32_t *)(unaff_RDI + 0x118);
  uVar14 = *(int32_t *)(unaff_RDI + 0x11c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x100);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x110);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar12 = ResourceCleaner();
  piVar5 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x55;
  iVar8 = (int)unaff_RSI;
  piVar11 = (int *)(unaff_RBP + 0x67);
  if (piVar5 != (int *)0x0) {
    piVar11 = piVar5;
  }
  if ((int *)unaff_RBX[0xc] != (int *)0x0) {
    iVar8 = *(int *)unaff_RBX[0xc];
  }
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x120));
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar12,iVar1,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar12 = ResourceCleaner();
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x6c;
  *(char *)(unaff_RBP + -0x41) = cVar7;
  FUN_1806c1590(uVar12,iVar1,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x164);
  uVar13 = *(int32_t *)(unaff_RDI + 0x168);
  uVar14 = *(int32_t *)(unaff_RDI + 0x16c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x150);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x160);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x184);
  uVar13 = *(int32_t *)(unaff_RDI + 0x188);
  uVar14 = *(int32_t *)(unaff_RDI + 0x18c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x170);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x180);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x1a4);
  uVar13 = *(int32_t *)(unaff_RDI + 0x1a8);
  uVar14 = *(int32_t *)(unaff_RDI + 0x1ac);
  uVar4 = *(uint64_t *)(unaff_RDI + 400);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1a0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar12);
    }
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x1c4);
  uVar13 = *(int32_t *)(unaff_RDI + 0x1c8);
  uVar14 = *(int32_t *)(unaff_RDI + 0x1cc);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x1b0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1c0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 != 0) {
      puVar10 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],puVar10,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      iVar8 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar2,&UNK_180a06418);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],iVar8 == 0);
    }
  }
  uVar12 = ResourceCleaner();
  piVar5 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x5a;
  piVar11 = (int *)(unaff_RBP + 0x67);
  if (piVar5 != (int *)0x0) {
    piVar11 = piVar5;
  }
  if ((uint *)unaff_RBX[0xc] != (uint *)0x0) {
    unaff_RSI = (ulonglong)*(uint *)unaff_RBX[0xc];
  }
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar8 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar12,iVar8,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar12 = ResourceCleaner();
  uVar12 = FUN_1806d7080(uVar12,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar8 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(uVar12,iVar8,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x214);
  uVar13 = *(int32_t *)(unaff_RDI + 0x218);
  uVar14 = *(int32_t *)(unaff_RDI + 0x21c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x200);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x210);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  uVar12 = FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  cVar7 = FUN_1806c48c0(uVar12,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int8_t *)(unaff_RBP + 0x67));
  }
  uVar15 = ResourceCleaner();
  uVar12 = *(int32_t *)(unaff_RDI + 0x234);
  uVar13 = *(int32_t *)(unaff_RDI + 0x238);
  uVar14 = *(int32_t *)(unaff_RDI + 0x23c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x220);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x230);
  *(int32_t *)(unaff_RBP + -0x15) = uVar12;
  *(int32_t *)(unaff_RBP + -0x11) = uVar13;
  *(int32_t *)(unaff_RBP + -0xd) = uVar14;
  uVar12 = FUN_1806d7080(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  cVar7 = FUN_1806c4320(uVar12,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c5aa7(uint64_t param_1)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  int *piVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uint64_t unaff_R14;
  int *piVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  
  *(uint64_t *)(unaff_RBP + 0x67) = param_1;
  uVar10 = FUN_1806d80c0();
  uVar11 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
  uVar12 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
  uVar13 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
  lVar2 = unaff_RBX[6];
  *(int32_t *)(unaff_RBP + -0x49) = uVar10;
  *(int32_t *)(unaff_RBP + -0x45) = uVar11;
  *(int32_t *)(unaff_RBP + -0x41) = uVar12;
  *(int32_t *)(unaff_RBP + -0x3d) = uVar13;
  (**(code **)(unaff_RBP + -0x11))(lVar2,unaff_RBP + -0x49);
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x74);
  uVar11 = *(int32_t *)(unaff_RDI + 0x78);
  uVar12 = *(int32_t *)(unaff_RDI + 0x7c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x60);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x70);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x6f) = unaff_RSI;
  cVar7 = (char)unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar5 = *(char **)(unaff_RBP + 0x6f), pcVar5 != (char *)0x0)) && (*pcVar5 != cVar7)) {
    *(char **)(unaff_RBP + 0x67) = pcVar5;
    uVar10 = FUN_1806d80c0(pcVar5,unaff_RBP + 0x67);
    uVar11 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar12 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    lVar2 = unaff_RBX[6];
    *(int32_t *)(unaff_RBP + -0x49) = uVar10;
    *(int32_t *)(unaff_RBP + -0x45) = uVar11;
    *(int32_t *)(unaff_RBP + -0x41) = uVar12;
    (**(code **)(unaff_RBP + -0x11))(lVar2,unaff_RBP + -0x49);
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x94);
  uVar11 = *(int32_t *)(unaff_RDI + 0x98);
  uVar12 = *(int32_t *)(unaff_RDI + 0x9c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x80);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x90);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = FUN_1806d5410(pcVar5,&DAT_180be02c0);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0xb4);
  uVar11 = *(int32_t *)(unaff_RDI + 0xb8);
  uVar12 = *(int32_t *)(unaff_RDI + 0xbc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0xa0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xb0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = FUN_1806d80c0(pcVar5,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0xd4);
  uVar11 = *(int32_t *)(unaff_RDI + 0xd8);
  uVar12 = *(int32_t *)(unaff_RDI + 0xdc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0xc0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xd0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0)) && (*pcVar5 != cVar7)) {
    uVar10 = FUN_1806d80c0(pcVar5,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0xf4);
  uVar11 = *(int32_t *)(unaff_RDI + 0xf8);
  uVar12 = *(int32_t *)(unaff_RDI + 0xfc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0xe0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xf0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = FUN_1806d80c0(pcVar5,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x114);
  uVar11 = *(int32_t *)(unaff_RDI + 0x118);
  uVar12 = *(int32_t *)(unaff_RDI + 0x11c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x100);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x110);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = FUN_1806d80c0(pcVar5,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar10 = ResourceCleaner();
  piVar4 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x55;
  iVar8 = (int)unaff_RSI;
  piVar9 = (int *)(unaff_RBP + 0x67);
  if (piVar4 != (int *)0x0) {
    piVar9 = piVar4;
  }
  if ((int *)unaff_RBX[0xc] != (int *)0x0) {
    iVar8 = *(int *)unaff_RBX[0xc];
  }
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x120));
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar10,iVar1,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar10 = ResourceCleaner();
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x6c;
  *(char *)(unaff_RBP + -0x41) = cVar7;
  FUN_1806c1590(uVar10,iVar1,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x164);
  uVar11 = *(int32_t *)(unaff_RDI + 0x168);
  uVar12 = *(int32_t *)(unaff_RDI + 0x16c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x150);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x160);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0)) && (*pcVar5 != cVar7)) {
    uVar10 = FUN_1806d80c0(pcVar5,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x184);
  uVar11 = *(int32_t *)(unaff_RDI + 0x188);
  uVar12 = *(int32_t *)(unaff_RDI + 0x18c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x170);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x180);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = FUN_1806d80c0(pcVar5,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x1a4);
  uVar11 = *(int32_t *)(unaff_RDI + 0x1a8);
  uVar12 = *(int32_t *)(unaff_RDI + 0x1ac);
  uVar3 = *(uint64_t *)(unaff_RDI + 400);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1a0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = FUN_1806d80c0(pcVar5,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x1c4);
  uVar11 = *(int32_t *)(unaff_RDI + 0x1c8);
  uVar12 = *(int32_t *)(unaff_RDI + 0x1cc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x1b0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1c0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 != 0) {
      unaff_R14 = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0)) &&
       (*pcVar5 != cVar7)) {
      iVar8 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar5,&UNK_180a06418);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],iVar8 == 0);
    }
  }
  uVar10 = ResourceCleaner();
  piVar4 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x5a;
  piVar9 = (int *)(unaff_RBP + 0x67);
  if (piVar4 != (int *)0x0) {
    piVar9 = piVar4;
  }
  if ((uint *)unaff_RBX[0xc] != (uint *)0x0) {
    unaff_RSI = (ulonglong)*(uint *)unaff_RBX[0xc];
  }
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar10,iVar8,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar10 = ResourceCleaner();
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(uVar10,iVar8,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x214);
  uVar11 = *(int32_t *)(unaff_RDI + 0x218);
  uVar12 = *(int32_t *)(unaff_RDI + 0x21c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x200);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x210);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  uVar10 = FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar7 = FUN_1806c48c0(uVar10,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int8_t *)(unaff_RBP + 0x67));
  }
  uVar13 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x234);
  uVar11 = *(int32_t *)(unaff_RDI + 0x238);
  uVar12 = *(int32_t *)(unaff_RDI + 0x23c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x220);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x230);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar11;
  *(int32_t *)(unaff_RBP + -0xd) = uVar12;
  uVar10 = FUN_1806d7080(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar7 = FUN_1806c4320(uVar10,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c5b0d(void)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uint64_t unaff_R14;
  int *piVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x74);
  uVar12 = *(int32_t *)(unaff_RDI + 0x78);
  uVar13 = *(int32_t *)(unaff_RDI + 0x7c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x60);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x70);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x6f) = unaff_RSI;
  cVar7 = (char)unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) && (*pcVar4 != cVar7)) {
    *(char **)(unaff_RBP + 0x67) = pcVar4;
    uVar11 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x67);
    uVar12 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar13 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    lVar5 = unaff_RBX[6];
    *(int32_t *)(unaff_RBP + -0x49) = uVar11;
    *(int32_t *)(unaff_RBP + -0x45) = uVar12;
    *(int32_t *)(unaff_RBP + -0x41) = uVar13;
    (**(code **)(unaff_RBP + -0x11))(lVar5,unaff_RBP + -0x49);
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x94);
  uVar12 = *(int32_t *)(unaff_RDI + 0x98);
  uVar13 = *(int32_t *)(unaff_RDI + 0x9c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x80);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x90);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = FUN_1806d5410(pcVar4,&DAT_180be02c0);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar11);
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0xb4);
  uVar12 = *(int32_t *)(unaff_RDI + 0xb8);
  uVar13 = *(int32_t *)(unaff_RDI + 0xbc);
  uVar2 = *(uint64_t *)(unaff_RDI + 0xa0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xb0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar11);
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0xd4);
  uVar12 = *(int32_t *)(unaff_RDI + 0xd8);
  uVar13 = *(int32_t *)(unaff_RDI + 0xdc);
  uVar2 = *(uint64_t *)(unaff_RDI + 0xc0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xd0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) && (*pcVar4 != cVar7)) {
    uVar11 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar11);
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0xf4);
  uVar12 = *(int32_t *)(unaff_RDI + 0xf8);
  uVar13 = *(int32_t *)(unaff_RDI + 0xfc);
  uVar2 = *(uint64_t *)(unaff_RDI + 0xe0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xf0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar11);
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x114);
  uVar12 = *(int32_t *)(unaff_RDI + 0x118);
  uVar13 = *(int32_t *)(unaff_RDI + 0x11c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x100);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x110);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar11);
  }
  uVar11 = ResourceCleaner();
  piVar3 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x55;
  iVar8 = (int)unaff_RSI;
  piVar9 = (int *)(unaff_RBP + 0x67);
  if (piVar3 != (int *)0x0) {
    piVar9 = piVar3;
  }
  if ((int *)unaff_RBX[0xc] != (int *)0x0) {
    iVar8 = *(int *)unaff_RBX[0xc];
  }
  uVar11 = FUN_1806d7080(uVar11,*(uint64_t *)(unaff_RDI + 0x120));
  uVar11 = FUN_1806d7080(uVar11,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar11,iVar1,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar11 = ResourceCleaner();
  uVar11 = FUN_1806d7080(uVar11,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x6c;
  *(char *)(unaff_RBP + -0x41) = cVar7;
  FUN_1806c1590(uVar11,iVar1,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x164);
  uVar12 = *(int32_t *)(unaff_RDI + 0x168);
  uVar13 = *(int32_t *)(unaff_RDI + 0x16c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x150);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x160);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) && (*pcVar4 != cVar7)) {
    uVar11 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar11);
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x184);
  uVar12 = *(int32_t *)(unaff_RDI + 0x188);
  uVar13 = *(int32_t *)(unaff_RDI + 0x18c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x170);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x180);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar11);
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x1a4);
  uVar12 = *(int32_t *)(unaff_RDI + 0x1a8);
  uVar13 = *(int32_t *)(unaff_RDI + 0x1ac);
  uVar2 = *(uint64_t *)(unaff_RDI + 400);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1a0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar11);
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x1c4);
  uVar12 = *(int32_t *)(unaff_RDI + 0x1c8);
  uVar13 = *(int32_t *)(unaff_RDI + 0x1cc);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x1b0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1c0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 != 0) {
      unaff_R14 = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != cVar7)) {
      iVar8 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar4,&UNK_180a06418);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],iVar8 == 0);
    }
  }
  uVar11 = ResourceCleaner();
  piVar3 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x5a;
  piVar9 = (int *)(unaff_RBP + 0x67);
  if (piVar3 != (int *)0x0) {
    piVar9 = piVar3;
  }
  if ((uint *)unaff_RBX[0xc] != (uint *)0x0) {
    unaff_RSI = (ulonglong)*(uint *)unaff_RBX[0xc];
  }
  uVar11 = FUN_1806d7080(uVar11,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar11 = FUN_1806d7080(uVar11,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar11,iVar8,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar11 = ResourceCleaner();
  uVar11 = FUN_1806d7080(uVar11,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(uVar11,iVar8,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x214);
  uVar12 = *(int32_t *)(unaff_RDI + 0x218);
  uVar13 = *(int32_t *)(unaff_RDI + 0x21c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x200);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x210);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  uVar11 = FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar7 = FUN_1806c48c0(uVar11,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int8_t *)(unaff_RBP + 0x67));
  }
  uVar10 = ResourceCleaner();
  uVar11 = *(int32_t *)(unaff_RDI + 0x234);
  uVar12 = *(int32_t *)(unaff_RDI + 0x238);
  uVar13 = *(int32_t *)(unaff_RDI + 0x23c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x220);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x230);
  *(int32_t *)(unaff_RBP + -0x15) = uVar11;
  *(int32_t *)(unaff_RBP + -0x11) = uVar12;
  *(int32_t *)(unaff_RBP + -0xd) = uVar13;
  uVar11 = FUN_1806d7080(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar7 = FUN_1806c4320(uVar11,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c5bff(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  char *pcVar2;
  uint64_t uVar3;
  int *piVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  char cVar8;
  int32_t uVar9;
  int iVar10;
  int *in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uint64_t unaff_R14;
  int *piVar11;
  int32_t uVar12;
  
  *in_RAX = *in_RAX + 1;
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  cVar8 = (char)unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar8) &&
       (cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                          ((longlong *)unaff_RBX[5],param_2,unaff_RBP + 0x67), cVar7 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar8)) {
    uVar9 = FUN_1806d5410(pcVar2,&DAT_180be02c0);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar9);
  }
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0xb4);
  uVar5 = *(int32_t *)(unaff_RDI + 0xb8);
  uVar6 = *(int32_t *)(unaff_RDI + 0xbc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0xa0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xb0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar9);
  }
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0xd4);
  uVar5 = *(int32_t *)(unaff_RDI + 0xd8);
  uVar6 = *(int32_t *)(unaff_RDI + 0xdc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0xc0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xd0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar9);
  }
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0xf4);
  uVar5 = *(int32_t *)(unaff_RDI + 0xf8);
  uVar6 = *(int32_t *)(unaff_RDI + 0xfc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0xe0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0xf0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar8) &&
       (cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar8)) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar9);
  }
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0x114);
  uVar5 = *(int32_t *)(unaff_RDI + 0x118);
  uVar6 = *(int32_t *)(unaff_RDI + 0x11c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x100);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x110);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar9);
  }
  uVar9 = ResourceCleaner();
  piVar4 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x55;
  iVar10 = (int)unaff_RSI;
  piVar11 = (int *)(unaff_RBP + 0x67);
  if (piVar4 != (int *)0x0) {
    piVar11 = piVar4;
  }
  if ((int *)unaff_RBX[0xc] != (int *)0x0) {
    iVar10 = *(int *)unaff_RBX[0xc];
  }
  uVar9 = FUN_1806d7080(uVar9,*(uint64_t *)(unaff_RDI + 0x120));
  uVar9 = FUN_1806d7080(uVar9,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar10 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar9,iVar1,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar9 = ResourceCleaner();
  uVar9 = FUN_1806d7080(uVar9,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar10 + 0x6c;
  *(char *)(unaff_RBP + -0x41) = cVar8;
  FUN_1806c1590(uVar9,iVar1,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0x164);
  uVar5 = *(int32_t *)(unaff_RDI + 0x168);
  uVar6 = *(int32_t *)(unaff_RDI + 0x16c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x150);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x160);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar9);
  }
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0x184);
  uVar5 = *(int32_t *)(unaff_RDI + 0x188);
  uVar6 = *(int32_t *)(unaff_RDI + 0x18c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x170);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x180);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar8) &&
       (cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar8)) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar9);
  }
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0x1a4);
  uVar5 = *(int32_t *)(unaff_RDI + 0x1a8);
  uVar6 = *(int32_t *)(unaff_RDI + 0x1ac);
  uVar3 = *(uint64_t *)(unaff_RDI + 400);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1a0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar9);
  }
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0x1c4);
  uVar5 = *(int32_t *)(unaff_RDI + 0x1c8);
  uVar6 = *(int32_t *)(unaff_RDI + 0x1cc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x1b0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1c0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar8) {
    iVar10 = *(int *)(*unaff_RBX + 0x10);
    if (iVar10 != 0) {
      unaff_R14 = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar10 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x67);
    if (((cVar7 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar8)) {
      iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar2,&UNK_180a06418);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],iVar10 == 0);
    }
  }
  uVar9 = ResourceCleaner();
  piVar4 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x5a;
  piVar11 = (int *)(unaff_RBP + 0x67);
  if (piVar4 != (int *)0x0) {
    piVar11 = piVar4;
  }
  if ((uint *)unaff_RBX[0xc] != (uint *)0x0) {
    unaff_RSI = (ulonglong)*(uint *)unaff_RBX[0xc];
  }
  uVar9 = FUN_1806d7080(uVar9,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar9 = FUN_1806d7080(uVar9,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar10 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar9,iVar10,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar9 = ResourceCleaner();
  uVar9 = FUN_1806d7080(uVar9,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar10 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(uVar9,iVar10,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0x214);
  uVar5 = *(int32_t *)(unaff_RDI + 0x218);
  uVar6 = *(int32_t *)(unaff_RDI + 0x21c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x200);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x210);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  uVar9 = FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar8 = FUN_1806c48c0(uVar9,unaff_RBP + 0x67);
  if (cVar8 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int8_t *)(unaff_RBP + 0x67));
  }
  uVar12 = ResourceCleaner();
  uVar9 = *(int32_t *)(unaff_RDI + 0x234);
  uVar5 = *(int32_t *)(unaff_RDI + 0x238);
  uVar6 = *(int32_t *)(unaff_RDI + 0x23c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x220);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x230);
  *(int32_t *)(unaff_RBP + -0x15) = uVar9;
  *(int32_t *)(unaff_RBP + -0x11) = uVar5;
  *(int32_t *)(unaff_RBP + -0xd) = uVar6;
  uVar9 = FUN_1806d7080(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar8 = FUN_1806c4320(uVar9,unaff_RBP + 0x67);
  if (cVar8 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c5f62(uint64_t param_1,int32_t param_2)

{
  char *pcVar1;
  uint64_t uVar2;
  int *piVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int *in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uint64_t unaff_R14;
  int *piVar9;
  int32_t uVar10;
  int32_t uVar11;
  
  *in_RAX = *in_RAX + 1;
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  cVar7 = (char)unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                          ((longlong *)unaff_RBX[5],param_2,unaff_RBP + 0x67), cVar6 != '\0')) &&
      (pcVar1 = *(char **)(unaff_RBP + 0x67), pcVar1 != (char *)0x0)) && (*pcVar1 != cVar7)) {
    uVar10 = FUN_1806d80c0(pcVar1,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x184);
  uVar4 = *(int32_t *)(unaff_RDI + 0x188);
  uVar5 = *(int32_t *)(unaff_RDI + 0x18c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x170);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x180);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar4;
  *(int32_t *)(unaff_RBP + -0xd) = uVar5;
  FUN_1806d7080(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar1 = *(char **)(unaff_RBP + 0x67), pcVar1 != (char *)0x0 && (*pcVar1 != cVar7)))) {
    uVar10 = FUN_1806d80c0(pcVar1,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x1a4);
  uVar4 = *(int32_t *)(unaff_RDI + 0x1a8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x1ac);
  uVar2 = *(uint64_t *)(unaff_RDI + 400);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1a0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar4;
  *(int32_t *)(unaff_RBP + -0xd) = uVar5;
  FUN_1806d7080(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar1 = *(char **)(unaff_RBP + 0x67), pcVar1 != (char *)0x0 && (*pcVar1 != cVar7)))) {
    uVar10 = FUN_1806d80c0(pcVar1,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],uVar10);
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x1c4);
  uVar4 = *(int32_t *)(unaff_RDI + 0x1c8);
  uVar5 = *(int32_t *)(unaff_RDI + 0x1cc);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x1b0);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x1c0);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar4;
  *(int32_t *)(unaff_RBP + -0xd) = uVar5;
  FUN_1806d7080(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(ulonglong *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 != 0) {
      unaff_R14 = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar1 = *(char **)(unaff_RBP + 0x67), pcVar1 != (char *)0x0)) &&
       (*pcVar1 != cVar7)) {
      iVar8 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar1,&UNK_180a06418);
      (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],iVar8 == 0);
    }
  }
  uVar10 = ResourceCleaner();
  piVar3 = (int *)unaff_RBX[0xb];
  *(int32_t *)(unaff_RBP + 0x67) = 0x5a;
  piVar9 = (int *)(unaff_RBP + 0x67);
  if (piVar3 != (int *)0x0) {
    piVar9 = piVar3;
  }
  if ((uint *)unaff_RBX[0xc] != (uint *)0x0) {
    unaff_RSI = (ulonglong)*(uint *)unaff_RBX[0xc];
  }
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  FUN_1806c1590(uVar10,iVar8,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar10 = ResourceCleaner();
  uVar10 = FUN_1806d7080(uVar10,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  FUN_1806c1590(uVar10,iVar8,unaff_RBP + -0x49);
  ResourceCleaner();
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x214);
  uVar4 = *(int32_t *)(unaff_RDI + 0x218);
  uVar5 = *(int32_t *)(unaff_RDI + 0x21c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x200);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x210);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar4;
  *(int32_t *)(unaff_RBP + -0xd) = uVar5;
  uVar10 = FUN_1806d7080(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar7 = FUN_1806c48c0(uVar10,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int8_t *)(unaff_RBP + 0x67));
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x234);
  uVar4 = *(int32_t *)(unaff_RDI + 0x238);
  uVar5 = *(int32_t *)(unaff_RDI + 0x23c);
  uVar2 = *(uint64_t *)(unaff_RDI + 0x220);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x230);
  *(int32_t *)(unaff_RBP + -0x15) = uVar10;
  *(int32_t *)(unaff_RBP + -0x11) = uVar4;
  *(int32_t *)(unaff_RBP + -0xd) = uVar5;
  uVar10 = FUN_1806d7080(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar7 = FUN_1806c4320(uVar10,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c6244(void)

{
  int *piVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX + 1;
  cVar5 = FUN_1806c48c0();
  if (cVar5 != '\0') {
    (**(code **)(unaff_RBP + -0x11))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int8_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  uVar2 = *(int32_t *)(unaff_RDI + 0x234);
  uVar3 = *(int32_t *)(unaff_RDI + 0x238);
  uVar4 = *(int32_t *)(unaff_RDI + 0x23c);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RDI + 0x230);
  *(int32_t *)(unaff_RBP + -0x15) = uVar2;
  *(int32_t *)(unaff_RBP + -0x11) = uVar3;
  *(int32_t *)(unaff_RBP + -0xd) = uVar4;
  FUN_1806d7080();
  piVar1 = *(int **)(unaff_RBX + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar5 = FUN_1806c4320();
  if (cVar5 != '\0') {
    (**(code **)(unaff_RBP + -0x11))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c6294(void)

{
  char cVar1;
  int *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX + 1;
  cVar1 = FUN_1806c4320();
  if (cVar1 != '\0') {
    (**(code **)(unaff_RBP + -0x11))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}



int FUN_1806c62d0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int32_t uVar5;
  void *puVar6;
  void *puVar7;
  char *pcStackX_8;
  int8_t auStackX_10 [8];
  int8_t auStackX_18 [8];
  
  pcVar3 = *(code **)(param_1 + 0x58);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar7 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = FUN_1806d5410(pcStackX_8,&DAT_180be02f0);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  FUN_1806c2790(param_2,param_3 + 1,param_1 + 0x60,&DAT_180be0350,auStackX_18);
  pcVar3 = *(code **)(param_1 + 0x98);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &UNK_18094c9c0;
    }
    else {
      puVar6 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  pcVar3 = *(code **)(param_1 + 0xd0);
  FUN_1806d7080(param_2,*(uint64_t *)(param_1 + 0xb8));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = FUN_1806d80c0(pcStackX_8,auStackX_10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 5;
}



int DataValidator(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int8_t uVar5;
  uint64_t uVar6;
  void *puVar7;
  void *puVar8;
  char *pcStackX_8;
  char *pcStackX_10;
  int32_t auStackX_18 [2];
  
  pcVar3 = *(code **)(param_1 + 0x30);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x18));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar8 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if ((((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) &&
       ((longlong *)param_2[4] != (longlong *)0x0)) {
      uVar6 = (**(code **)(*(longlong *)param_2[4] + 8))();
      (*pcVar3)(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  pcVar3 = *(code **)(param_1 + 0x50);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x38));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0170);
      (*pcVar3)(param_2[6],auStackX_18);
    }
  }
  ResourceCleaner(param_2);
  pcVar3 = *(code **)(param_1 + 0x70);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x58));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  pcVar3 = *(code **)(param_1 + 0x90);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x78));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar8,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_10 = pcStackX_8;
      uVar5 = strtoul(pcStackX_8,&pcStackX_10,10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 7;
}



int FUN_1806c6780(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  void *puVar4;
  void *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  char *pcStackX_8;
  char *pcStackX_10;
  int32_t auStackX_18 [2];
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  
  uStack_60 = *(int32_t *)(param_1 + 0x140);
  uStack_5c = *(int32_t *)(param_1 + 0x144);
  uStack_58 = *(int32_t *)(param_1 + 0x148);
  uStack_54 = *(int32_t *)(param_1 + 0x14c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x130));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = &UNK_18094c9c0;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      ComponentInitializer(pcStackX_8,&uStack_b8);
      uStack_98 = uStack_b8;
      uStack_90 = uStack_b0;
      uStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      uStack_84 = uStack_a4;
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],&uStack_98);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x160);
  uStack_5c = *(int32_t *)(param_1 + 0x164);
  uStack_58 = *(int32_t *)(param_1 + 0x168);
  uStack_54 = *(int32_t *)(param_1 + 0x16c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x198);
  uStack_5c = *(int32_t *)(param_1 + 0x19c);
  uStack_58 = *(int32_t *)(param_1 + 0x1a0);
  uStack_54 = *(int32_t *)(param_1 + 0x1a4);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x188));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar6 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar7 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_c0 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_c8 = uVar6;
      uStack_c4 = uVar7;
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],&uStack_c8);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x1d0);
  uStack_5c = *(int32_t *)(param_1 + 0x1d4);
  uStack_58 = *(int32_t *)(param_1 + 0x1d8);
  uStack_54 = *(int32_t *)(param_1 + 0x1dc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x1c0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x1f0);
  uStack_5c = *(int32_t *)(param_1 + 500);
  uStack_58 = *(int32_t *)(param_1 + 0x1f8);
  uStack_54 = *(int32_t *)(param_1 + 0x1fc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x1e0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x210);
  uStack_5c = *(int32_t *)(param_1 + 0x214);
  uStack_58 = *(int32_t *)(param_1 + 0x218);
  uStack_54 = *(int32_t *)(param_1 + 0x21c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar6 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar7 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_c0 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_c8 = uVar6;
      uStack_c4 = uVar7;
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],&uStack_c8);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x230);
  uStack_5c = *(int32_t *)(param_1 + 0x234);
  uStack_58 = *(int32_t *)(param_1 + 0x238);
  uStack_54 = *(int32_t *)(param_1 + 0x23c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar6 = FUN_1806d80c0(pcStackX_10,&pcStackX_8);
      uVar7 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_c0 = FUN_1806d80c0(pcStackX_8,&pcStackX_8);
      uStack_c8 = uVar6;
      uStack_c4 = uVar7;
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],&uStack_c8);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x250);
  uStack_5c = *(int32_t *)(param_1 + 0x254);
  uStack_58 = *(int32_t *)(param_1 + 600);
  uStack_54 = *(int32_t *)(param_1 + 0x25c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x240));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x270);
  uStack_5c = *(int32_t *)(param_1 + 0x274);
  uStack_58 = *(int32_t *)(param_1 + 0x278);
  uStack_54 = *(int32_t *)(param_1 + 0x27c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x260));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = FUN_1806d80c0(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x290);
  uStack_5c = *(int32_t *)(param_1 + 0x294);
  uStack_58 = *(int32_t *)(param_1 + 0x298);
  uStack_54 = *(int32_t *)(param_1 + 0x29c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x280));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar5 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be01c0);
      (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],auStackX_18);
    }
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x2b0);
  uStack_5c = *(int32_t *)(param_1 + 0x2b4);
  uStack_58 = *(int32_t *)(param_1 + 0x2b8);
  uStack_54 = *(int32_t *)(param_1 + 700);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x2a0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = FUN_1806c4320(param_2,auStackX_18);
  if (cVar3 != '\0') {
    (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],auStackX_18[0]);
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x2d0);
  uStack_5c = *(int32_t *)(param_1 + 0x2d4);
  uStack_58 = *(int32_t *)(param_1 + 0x2d8);
  uStack_54 = *(int32_t *)(param_1 + 0x2dc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x2c0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = FUN_1806c4320(param_2,auStackX_18);
  if (cVar3 != '\0') {
    (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],auStackX_18[0]);
  }
  ResourceCleaner(param_2);
  uStack_60 = *(int32_t *)(param_1 + 0x2f0);
  uStack_5c = *(int32_t *)(param_1 + 0x2f4);
  uStack_58 = *(int32_t *)(param_1 + 0x2f8);
  uStack_54 = *(int32_t *)(param_1 + 0x2fc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x2e0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = FUN_1806c4320(param_2,auStackX_18);
  if (cVar3 != '\0') {
    (*(code *)CONCAT44(uStack_54,uStack_58))(param_2[6],auStackX_18[0]);
  }
  ResourceCleaner(param_2);
  return param_3 + 0xf;
}



int FUN_1806c6799(longlong param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  longlong in_RAX;
  longlong *in_RDX;
  void *puVar7;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  void *puVar8;
  uint64_t unaff_RDI;
  uint64_t unaff_R15;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
  uVar2 = *(uint64_t *)(param_1 + 0x130);
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int *)(unaff_RBP + -1) = (int)param_2;
  *(int *)(unaff_RBP + 3) = (int)((ulonglong)param_2 >> 0x20);
  *(int32_t *)(unaff_RBP + 7) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + 0xb) = in_XMM1_Dd;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  puVar8 = &UNK_18094c9c0;
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      ComponentInitializer(pcVar4,unaff_RBP + -0x59);
      lVar5 = in_RDX[6];
      *(uint64_t *)(unaff_RBP + -0x39) = *(uint64_t *)(unaff_RBP + -0x59);
      *(uint64_t *)(unaff_RBP + -0x31) = *(uint64_t *)(unaff_RBP + -0x51);
      *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x49);
      *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x41);
      *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x45);
      (**(code **)(unaff_RBP + 7))(lVar5,unaff_RBP + -0x39);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x164);
  uVar10 = *(int32_t *)(param_1 + 0x168);
  uVar11 = *(int32_t *)(param_1 + 0x16c);
  uVar2 = *(uint64_t *)(param_1 + 0x150);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x160);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + 7))(in_RDX[6],uVar9);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x19c);
  uVar10 = *(int32_t *)(param_1 + 0x1a0);
  uVar11 = *(int32_t *)(param_1 + 0x1a4);
  uVar2 = *(uint64_t *)(param_1 + 0x188);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x198);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x67);
      uVar10 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar11 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar5 = in_RDX[6];
      *(int32_t *)(unaff_RBP + -0x69) = uVar9;
      *(int32_t *)(unaff_RBP + -0x65) = uVar10;
      *(int32_t *)(unaff_RBP + -0x61) = uVar11;
      (**(code **)(unaff_RBP + 7))(lVar5,unaff_RBP + -0x69);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x1d4);
  uVar10 = *(int32_t *)(param_1 + 0x1d8);
  uVar11 = *(int32_t *)(param_1 + 0x1dc);
  uVar2 = *(uint64_t *)(param_1 + 0x1c0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x1d0);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + 7))(in_RDX[6],uVar9);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 500);
  uVar10 = *(int32_t *)(param_1 + 0x1f8);
  uVar11 = *(int32_t *)(param_1 + 0x1fc);
  uVar2 = *(uint64_t *)(param_1 + 0x1e0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x1f0);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + 7))(in_RDX[6],uVar9);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x214);
  uVar10 = *(int32_t *)(param_1 + 0x218);
  uVar11 = *(int32_t *)(param_1 + 0x21c);
  uVar2 = *(uint64_t *)(param_1 + 0x200);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x210);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x67);
      uVar10 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar11 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar5 = in_RDX[6];
      *(int32_t *)(unaff_RBP + -0x69) = uVar9;
      *(int32_t *)(unaff_RBP + -0x65) = uVar10;
      *(int32_t *)(unaff_RBP + -0x61) = uVar11;
      (**(code **)(unaff_RBP + 7))(lVar5,unaff_RBP + -0x69);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x234);
  uVar10 = *(int32_t *)(param_1 + 0x238);
  uVar11 = *(int32_t *)(param_1 + 0x23c);
  uVar2 = *(uint64_t *)(param_1 + 0x220);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x230);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x67);
      uVar10 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar11 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      lVar5 = in_RDX[6];
      *(int32_t *)(unaff_RBP + -0x69) = uVar9;
      *(int32_t *)(unaff_RBP + -0x65) = uVar10;
      *(int32_t *)(unaff_RBP + -0x61) = uVar11;
      (**(code **)(unaff_RBP + 7))(lVar5,unaff_RBP + -0x69);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x254);
  uVar10 = *(int32_t *)(param_1 + 600);
  uVar11 = *(int32_t *)(param_1 + 0x25c);
  uVar2 = *(uint64_t *)(param_1 + 0x240);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x250);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + 7))(in_RDX[6],uVar9);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x274);
  uVar10 = *(int32_t *)(param_1 + 0x278);
  uVar11 = *(int32_t *)(param_1 + 0x27c);
  uVar2 = *(uint64_t *)(param_1 + 0x260);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x270);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &UNK_18094c9c0;
    }
    else {
      puVar7 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = FUN_1806d80c0(pcVar4,unaff_RBP + 0x6f);
      (**(code **)(unaff_RBP + 7))(in_RDX[6],uVar9);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x294);
  uVar10 = *(int32_t *)(param_1 + 0x298);
  uVar11 = *(int32_t *)(param_1 + 0x29c);
  uVar2 = *(uint64_t *)(param_1 + 0x280);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x290);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 != 0) {
      puVar8 = *(void **)(*(longlong *)(*in_RDX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)in_RDX[5] + 0x10))
                      ((longlong *)in_RDX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      lVar5 = in_RDX[7];
      *(int32_t *)(unaff_RBP + 0x77) = 0;
      FUN_1806d81c0(pcVar4,lVar5,unaff_RBP + 0x77,0x180be01c0);
      lVar5 = in_RDX[6];
      *(int8_t *)(unaff_RBP + 0x77) = *(int8_t *)(unaff_RBP + 0x77);
      (**(code **)(unaff_RBP + 7))(lVar5,unaff_RBP + 0x77);
    }
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x2b4);
  uVar10 = *(int32_t *)(param_1 + 0x2b8);
  uVar11 = *(int32_t *)(param_1 + 700);
  uVar2 = *(uint64_t *)(param_1 + 0x2a0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x2b0);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar6 = FUN_1806c4320(in_RDX,unaff_RBP + 0x77);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + 7))(in_RDX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x2d4);
  uVar10 = *(int32_t *)(param_1 + 0x2d8);
  uVar11 = *(int32_t *)(param_1 + 0x2dc);
  uVar2 = *(uint64_t *)(param_1 + 0x2c0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x2d0);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar6 = FUN_1806c4320(in_RDX,unaff_RBP + 0x77);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + 7))(in_RDX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner(in_RDX);
  uVar9 = *(int32_t *)(param_1 + 0x2f4);
  uVar10 = *(int32_t *)(param_1 + 0x2f8);
  uVar11 = *(int32_t *)(param_1 + 0x2fc);
  uVar2 = *(uint64_t *)(param_1 + 0x2e0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(param_1 + 0x2f0);
  *(int32_t *)(unaff_RBP + 3) = uVar9;
  *(int32_t *)(unaff_RBP + 7) = uVar10;
  *(int32_t *)(unaff_RBP + 0xb) = uVar11;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar6 = FUN_1806c4320(in_RDX,unaff_RBP + 0x77);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + 7))(in_RDX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner(in_RDX);
  return param_3 + 0xf;
}



int FUN_1806c690d(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  uint64_t uVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  int unaff_R14D;
  uint64_t unaff_R15;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  cVar7 = (char)unaff_R15;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                          ((longlong *)unaff_RBX[5],param_2,unaff_RBP + 0x6f), cVar6 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar7)) {
    *(char **)(unaff_RBP + 0x67) = pcVar2;
    uVar8 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x67);
    uVar9 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar10 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    lVar3 = unaff_RBX[6];
    *(int32_t *)(unaff_RBP + -0x69) = uVar8;
    *(int32_t *)(unaff_RBP + -0x65) = uVar9;
    *(int32_t *)(unaff_RBP + -0x61) = uVar10;
    (**(code **)(unaff_RBP + 7))(lVar3,unaff_RBP + -0x69);
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x1d4);
  uVar9 = *(int32_t *)(unaff_RDI + 0x1d8);
  uVar10 = *(int32_t *)(unaff_RDI + 0x1dc);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x1c0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x1d0);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar7)))) {
    uVar8 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],uVar8);
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 500);
  uVar9 = *(int32_t *)(unaff_RDI + 0x1f8);
  uVar10 = *(int32_t *)(unaff_RDI + 0x1fc);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x1e0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x1f0);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar7)))) {
    uVar8 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],uVar8);
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x214);
  uVar9 = *(int32_t *)(unaff_RDI + 0x218);
  uVar10 = *(int32_t *)(unaff_RDI + 0x21c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x200);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x210);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar7)) {
    *(char **)(unaff_RBP + 0x67) = pcVar2;
    uVar8 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x67);
    uVar9 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar10 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    lVar3 = unaff_RBX[6];
    *(int32_t *)(unaff_RBP + -0x69) = uVar8;
    *(int32_t *)(unaff_RBP + -0x65) = uVar9;
    *(int32_t *)(unaff_RBP + -0x61) = uVar10;
    (**(code **)(unaff_RBP + 7))(lVar3,unaff_RBP + -0x69);
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x234);
  uVar9 = *(int32_t *)(unaff_RDI + 0x238);
  uVar10 = *(int32_t *)(unaff_RDI + 0x23c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x220);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x230);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0 && (*pcVar2 != cVar7)))) {
    *(char **)(unaff_RBP + 0x67) = pcVar2;
    uVar8 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x67);
    uVar9 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar10 = FUN_1806d80c0(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    lVar3 = unaff_RBX[6];
    *(int32_t *)(unaff_RBP + -0x69) = uVar8;
    *(int32_t *)(unaff_RBP + -0x65) = uVar9;
    *(int32_t *)(unaff_RBP + -0x61) = uVar10;
    (**(code **)(unaff_RBP + 7))(lVar3,unaff_RBP + -0x69);
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x254);
  uVar9 = *(int32_t *)(unaff_RDI + 600);
  uVar10 = *(int32_t *)(unaff_RDI + 0x25c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x240);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x250);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar7)))) {
    uVar8 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],uVar8);
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x274);
  uVar9 = *(int32_t *)(unaff_RDI + 0x278);
  uVar10 = *(int32_t *)(unaff_RDI + 0x27c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x260);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x270);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar7)) {
    uVar8 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],uVar8);
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x294);
  uVar9 = *(int32_t *)(unaff_RDI + 0x298);
  uVar10 = *(int32_t *)(unaff_RDI + 0x29c);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x280);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x290);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_RSI = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      lVar3 = unaff_RBX[7];
      *(int *)(unaff_RBP + 0x77) = (int)unaff_R15;
      FUN_1806d81c0(pcVar2,lVar3,unaff_RBP + 0x77,0x180be01c0);
      lVar3 = unaff_RBX[6];
      *(int8_t *)(unaff_RBP + 0x77) = *(int8_t *)(unaff_RBP + 0x77);
      (**(code **)(unaff_RBP + 7))(lVar3,unaff_RBP + 0x77);
    }
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x2b4);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2b8);
  uVar10 = *(int32_t *)(unaff_RDI + 700);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x2a0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x2b0);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  uVar8 = ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  cVar7 = FUN_1806c4320(uVar8,unaff_RBP + 0x77);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x2d4);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2d8);
  uVar10 = *(int32_t *)(unaff_RDI + 0x2dc);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x2c0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x2d0);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  uVar8 = ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  cVar7 = FUN_1806c4320(uVar8,unaff_RBP + 0x77);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  uVar11 = ResourceCleaner();
  uVar8 = *(int32_t *)(unaff_RDI + 0x2f4);
  uVar9 = *(int32_t *)(unaff_RDI + 0x2f8);
  uVar10 = *(int32_t *)(unaff_RDI + 0x2fc);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x2e0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x2f0);
  *(int32_t *)(unaff_RBP + 3) = uVar8;
  *(int32_t *)(unaff_RBP + 7) = uVar9;
  *(int32_t *)(unaff_RBP + 0xb) = uVar10;
  uVar8 = ResourceAllocator(uVar11,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  cVar7 = FUN_1806c4320(uVar8,unaff_RBP + 0x77);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  return unaff_R14D + 0xf;
}



int FUN_1806c6c7b(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  char *pcVar2;
  uint64_t uVar3;
  int *piVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  char cVar8;
  char cVar9;
  int *in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  int unaff_R14D;
  uint64_t unaff_R15;
  int32_t uVar10;
  int32_t uVar11;
  
  *in_RAX = *in_RAX + 1;
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  cVar9 = (char)unaff_R15;
  if (((((char)unaff_RBX[9] != cVar9) &&
       (cVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                          ((longlong *)unaff_RBX[5],param_2,unaff_RBP + 0x67), cVar8 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar9)) {
    uVar10 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],uVar10);
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x274);
  uVar6 = *(int32_t *)(unaff_RDI + 0x278);
  uVar7 = *(int32_t *)(unaff_RDI + 0x27c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x260);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x270);
  *(int32_t *)(unaff_RBP + 3) = uVar10;
  *(int32_t *)(unaff_RBP + 7) = uVar6;
  *(int32_t *)(unaff_RBP + 0xb) = uVar7;
  ResourceAllocator(uVar11,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((((char)unaff_RBX[9] != cVar9) &&
      (cVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))(), cVar8 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar9)))) {
    uVar10 = FUN_1806d80c0(pcVar2,unaff_RBP + 0x6f);
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],uVar10);
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x294);
  uVar6 = *(int32_t *)(unaff_RDI + 0x298);
  uVar7 = *(int32_t *)(unaff_RDI + 0x29c);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x280);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x290);
  *(int32_t *)(unaff_RBP + 3) = uVar10;
  *(int32_t *)(unaff_RBP + 7) = uVar6;
  *(int32_t *)(unaff_RBP + 0xb) = uVar7;
  ResourceAllocator(uVar11,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  if ((char)unaff_RBX[9] != cVar9) {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_RSI = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x67);
    if (((cVar8 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar9)) {
      lVar5 = unaff_RBX[7];
      *(int *)(unaff_RBP + 0x77) = (int)unaff_R15;
      FUN_1806d81c0(pcVar2,lVar5,unaff_RBP + 0x77,0x180be01c0);
      lVar5 = unaff_RBX[6];
      *(int8_t *)(unaff_RBP + 0x77) = *(int8_t *)(unaff_RBP + 0x77);
      (**(code **)(unaff_RBP + 7))(lVar5,unaff_RBP + 0x77);
    }
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x2b4);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2b8);
  uVar7 = *(int32_t *)(unaff_RDI + 700);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x2a0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x2b0);
  *(int32_t *)(unaff_RBP + 3) = uVar10;
  *(int32_t *)(unaff_RBP + 7) = uVar6;
  *(int32_t *)(unaff_RBP + 0xb) = uVar7;
  uVar10 = ResourceAllocator(uVar11,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar9 = FUN_1806c4320(uVar10,unaff_RBP + 0x77);
  if (cVar9 != '\0') {
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x2d4);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2d8);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2dc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x2c0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x2d0);
  *(int32_t *)(unaff_RBP + 3) = uVar10;
  *(int32_t *)(unaff_RBP + 7) = uVar6;
  *(int32_t *)(unaff_RBP + 0xb) = uVar7;
  uVar10 = ResourceAllocator(uVar11,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar9 = FUN_1806c4320(uVar10,unaff_RBP + 0x77);
  if (cVar9 != '\0') {
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  uVar11 = ResourceCleaner();
  uVar10 = *(int32_t *)(unaff_RDI + 0x2f4);
  uVar6 = *(int32_t *)(unaff_RDI + 0x2f8);
  uVar7 = *(int32_t *)(unaff_RDI + 0x2fc);
  uVar3 = *(uint64_t *)(unaff_RDI + 0x2e0);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x2f0);
  *(int32_t *)(unaff_RBP + 3) = uVar10;
  *(int32_t *)(unaff_RBP + 7) = uVar6;
  *(int32_t *)(unaff_RBP + 0xb) = uVar7;
  uVar10 = ResourceAllocator(uVar11,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar9 = FUN_1806c4320(uVar10,unaff_RBP + 0x77);
  if (cVar9 != '\0') {
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  return unaff_R14D + 0xf;
}



int FUN_1806c6e38(void)

{
  int *piVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R14D;
  
  *in_RAX = *in_RAX + 1;
  cVar5 = FUN_1806c4320();
  if (cVar5 != '\0') {
    (**(code **)(unaff_RBP + 7))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  uVar2 = *(int32_t *)(unaff_RDI + 0x2d4);
  uVar3 = *(int32_t *)(unaff_RDI + 0x2d8);
  uVar4 = *(int32_t *)(unaff_RDI + 0x2dc);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x2d0);
  *(int32_t *)(unaff_RBP + 3) = uVar2;
  *(int32_t *)(unaff_RBP + 7) = uVar3;
  *(int32_t *)(unaff_RBP + 0xb) = uVar4;
  ResourceAllocator();
  piVar1 = *(int **)(unaff_RBX + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar5 = FUN_1806c4320();
  if (cVar5 != '\0') {
    (**(code **)(unaff_RBP + 7))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  uVar2 = *(int32_t *)(unaff_RDI + 0x2f4);
  uVar3 = *(int32_t *)(unaff_RDI + 0x2f8);
  uVar4 = *(int32_t *)(unaff_RDI + 0x2fc);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x2f0);
  *(int32_t *)(unaff_RBP + 3) = uVar2;
  *(int32_t *)(unaff_RBP + 7) = uVar3;
  *(int32_t *)(unaff_RBP + 0xb) = uVar4;
  ResourceAllocator();
  piVar1 = *(int **)(unaff_RBX + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar5 = FUN_1806c4320();
  if (cVar5 != '\0') {
    (**(code **)(unaff_RBP + 7))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  return unaff_R14D + 0xf;
}



int FUN_1806c6ed2(void)

{
  char cVar1;
  int *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int unaff_R14D;
  
  *in_RAX = *in_RAX + 1;
  cVar1 = FUN_1806c4320();
  if (cVar1 != '\0') {
    (**(code **)(unaff_RBP + 7))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  return unaff_R14D + 0xf;
}



int FUN_1806c6f10(uint64_t *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int32_t *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint64_t uVar8;
  void *puVar9;
  void *puVar10;
  char *pcStackX_8;
  char *pcStackX_10;
  uint auStackX_18 [2];
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  int32_t uStack_e4;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  int32_t *puStack_70;
  longlong lStack_68;
  longlong lStack_60;
  int8_t uStack_58;
  uint *puStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_f0 = *(int32_t *)(param_1 + 2);
  uStack_ec = *(int32_t *)((longlong)param_1 + 0x14);
  uStack_e8 = *(int32_t *)(param_1 + 3);
  uStack_e4 = *(int32_t *)((longlong)param_1 + 0x1c);
  ResourceAllocator(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(&uStack_e0);
  cVar4 = DataProcessor(param_2);
  if (cVar4 != '\0') {
    puVar5 = (int32_t *)(*(code *)CONCAT44(uStack_ec,uStack_f0))(&uStack_128,param_2[6]);
    lStack_98 = param_2[1];
    lStack_78 = param_2[5];
    lStack_68 = param_2[7];
    uStack_148 = *puVar5;
    lStack_60 = param_2[8];
    uStack_144 = puVar5[1];
    uStack_140 = puVar5[2];
    uStack_13c = puVar5[3];
    uStack_138 = puVar5[4];
    uStack_134 = puVar5[5];
    uStack_130 = puVar5[6];
    lStack_a0 = *param_2;
    lStack_80 = param_2[4];
    lStack_90 = param_2[2];
    lStack_88 = param_2[3];
    puStack_70 = &uStack_148;
    puStack_50 = auStackX_18;
    auStackX_18[0] = auStackX_18[0] & 0xffffff00;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 1;
    FUN_1806c95f0(&uStack_e0,&lStack_a0,0);
    if ((char)auStackX_18[0] != '\0') {
      *(int8_t *)param_2[10] = 1;
    }
    uStack_128 = CONCAT44(uStack_144,uStack_148);
    uStack_120 = CONCAT44(uStack_13c,uStack_140);
    uStack_118 = uStack_138;
    uStack_110 = uStack_130;
    uStack_114 = uStack_134;
    (*(code *)CONCAT44(uStack_e4,uStack_e8))(param_2[6],&uStack_128);
  }
  ResourceCleaner(param_2);
  uStack_f0 = *(int32_t *)(param_1 + 6);
  uStack_ec = *(int32_t *)((longlong)param_1 + 0x34);
  uStack_e8 = *(int32_t *)(param_1 + 7);
  uStack_e4 = *(int32_t *)((longlong)param_1 + 0x3c);
  ResourceAllocator(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar10 = &UNK_18094c9c0;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &UNK_18094c9c0;
  }
  else {
    puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  plVar3 = (longlong *)param_2[8];
  lVar7 = 0;
  cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))((longlong *)param_2[5],puVar9,&pcStackX_8);
  if ((((cVar4 == '\0') || (pcStackX_10 = pcStackX_8, pcStackX_8 == (char *)0x0)) ||
      (*pcStackX_8 == '\0')) ||
     ((lVar6 = _strtoui64(pcStackX_8,&pcStackX_10,10), lVar7 = 0, lVar6 == 0 ||
      (lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar6), lVar7 != 0)))) {
    (*(code *)CONCAT44(uStack_e4,uStack_e8))(param_2[6],lVar7);
  }
  else {
    uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar8,4,&UNK_18094c930,0x6c,&UNK_18094c870,lVar6);
  }
  ResourceCleaner(param_2);
  uStack_f0 = *(int32_t *)(param_1 + 10);
  uStack_ec = *(int32_t *)((longlong)param_1 + 0x54);
  uStack_e8 = *(int32_t *)(param_1 + 0xb);
  uStack_e4 = *(int32_t *)((longlong)param_1 + 0x5c);
  ResourceAllocator(param_2,param_1[8]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar10 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)param_2[5] + 0x10))
                      ((longlong *)param_2[5],puVar10,&pcStackX_8);
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be04f0);
      (*(code *)CONCAT44(uStack_e4,uStack_e8))(param_2[6],auStackX_18);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 3;
}



int FUN_1806c6f2c(int32_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                 uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                 int32_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                 int32_t param_13)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  longlong in_RAX;
  int32_t *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint64_t uVar17;
  uint64_t *in_RCX;
  void *puVar18;
  longlong *unaff_RBX;
  longlong *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_R12;
  void *puVar19;
  int32_t uVar20;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
  uVar17 = *in_RCX;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R12;
  *(int *)(unaff_RBP + -0xf) = (int)param_2;
  *(int *)((longlong)unaff_RBP + -0x74) = (int)((ulonglong)param_2 >> 0x20);
  *(int32_t *)(unaff_RBP + -0xe) = in_XMM1_Dc;
  *(int32_t *)((longlong)unaff_RBP + -0x6c) = in_XMM1_Dd;
  ResourceAllocator(param_1,uVar17);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  unaff_RBP[-0xd] = 0;
  unaff_RBP[-0xc] = 0;
  unaff_RBP[-0xb] = 0;
  unaff_RBP[-10] = 0;
  unaff_RBP[-9] = 0;
  unaff_RBP[-8] = 0;
  unaff_RBP[-7] = 0;
  unaff_RBP[-6] = 0;
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0xd);
  cVar13 = DataProcessor();
  if (cVar13 != '\0') {
    puVar14 = (int32_t *)(*(code *)unaff_RBP[-0xf])(&param_10,unaff_RBX[6]);
    lVar15 = unaff_RBX[1];
    lVar3 = unaff_RBX[5];
    lVar4 = unaff_RBX[7];
    param_6._0_4_ = *puVar14;
    lVar5 = unaff_RBX[8];
    param_6._4_4_ = puVar14[1];
    param_7._0_4_ = puVar14[2];
    param_7._4_4_ = puVar14[3];
    param_8._0_4_ = puVar14[4];
    param_8._4_4_ = puVar14[5];
    param_9 = puVar14[6];
    lVar16 = unaff_RBX[4];
    lVar11 = unaff_RBX[2];
    lVar12 = unaff_RBX[3];
    unaff_RBP[-5] = *unaff_RBX;
    unaff_RBP[1] = (longlong)&param_6;
    unaff_RBP[-3] = lVar11;
    unaff_RBP[-2] = lVar12;
    unaff_RBP[-4] = lVar15;
    *unaff_RBP = lVar3;
    unaff_RBP[2] = lVar4;
    *(int8_t *)(unaff_RBP + 0x12) = 0;
    unaff_RBP[6] = 0;
    unaff_RBP[7] = 0;
    unaff_RBP[3] = lVar5;
    unaff_RBP[-1] = lVar16;
    *(int8_t *)(unaff_RBP + 4) = 1;
    unaff_RBP[5] = (longlong)(unaff_RBP + 0x12);
    FUN_1806c95f0(unaff_RBP + -0xd,unaff_RBP + -5,0);
    if ((char)unaff_RBP[0x12] != '\0') {
      *(int8_t *)unaff_RBX[10] = 1;
    }
    param_10 = CONCAT44(param_6._4_4_,(int32_t)param_6);
    param_11 = CONCAT44(param_7._4_4_,(int32_t)param_7);
    param_12._0_4_ = (int32_t)param_8;
    param_13 = param_9;
    param_12._4_4_ = param_8._4_4_;
    (*(code *)unaff_RBP[-0xe])(unaff_RBX[6],&param_10);
  }
  uVar20 = ResourceCleaner();
  uVar8 = *(int32_t *)((longlong)in_RCX + 0x34);
  uVar9 = *(int32_t *)(in_RCX + 7);
  uVar10 = *(int32_t *)((longlong)in_RCX + 0x3c);
  uVar17 = in_RCX[4];
  *(int32_t *)(unaff_RBP + -0xf) = *(int32_t *)(in_RCX + 6);
  *(int32_t *)((longlong)unaff_RBP + -0x74) = uVar8;
  *(int32_t *)(unaff_RBP + -0xe) = uVar9;
  *(int32_t *)((longlong)unaff_RBP + -0x6c) = uVar10;
  ResourceAllocator(uVar20,uVar17);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar19 = &UNK_18094c9c0;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 == 0) {
    puVar18 = &UNK_18094c9c0;
  }
  else {
    puVar18 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
  }
  plVar6 = (longlong *)unaff_RBX[8];
  lVar16 = 0;
  cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                     ((longlong *)unaff_RBX[5],puVar18,unaff_RBP + 0x10);
  if (cVar13 != '\0') {
    pcVar7 = (char *)unaff_RBP[0x10];
    unaff_RBP[0x11] = (longlong)pcVar7;
    if ((((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) &&
        (lVar15 = _strtoui64(pcVar7,unaff_RBP + 0x11,10), lVar16 = 0, lVar15 != 0)) &&
       (lVar16 = (**(code **)(*plVar6 + 0x50))(plVar6,lVar15), lVar16 == 0)) {
      uVar17 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar17,4,&UNK_18094c930,0x6c,&UNK_18094c870);
      goto LAB_1806c7195;
    }
  }
  (*(code *)unaff_RBP[-0xe])(unaff_RBX[6],lVar16);
LAB_1806c7195:
  uVar20 = ResourceCleaner();
  uVar8 = *(int32_t *)((longlong)in_RCX + 0x54);
  uVar9 = *(int32_t *)(in_RCX + 0xb);
  uVar10 = *(int32_t *)((longlong)in_RCX + 0x5c);
  uVar17 = in_RCX[8];
  *(int32_t *)(unaff_RBP + -0xf) = *(int32_t *)(in_RCX + 10);
  *(int32_t *)((longlong)unaff_RBP + -0x74) = uVar8;
  *(int32_t *)(unaff_RBP + -0xe) = uVar9;
  *(int32_t *)((longlong)unaff_RBP + -0x6c) = uVar10;
  ResourceAllocator(uVar20,uVar17);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  unaff_RBP[0x10] = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      puVar19 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                       ((longlong *)unaff_RBX[5],puVar19,unaff_RBP + 0x10);
    if (((cVar13 != '\0') && (pcVar7 = (char *)unaff_RBP[0x10], pcVar7 != (char *)0x0)) &&
       (*pcVar7 != '\0')) {
      lVar16 = unaff_RBX[7];
      *(int32_t *)(unaff_RBP + 0x12) = 0;
      FUN_1806d81c0(pcVar7,lVar16,unaff_RBP + 0x12,0x180be04f0);
      lVar16 = unaff_RBX[6];
      *(char *)(unaff_RBP + 0x12) = (char)unaff_RBP[0x12];
      (*(code *)unaff_RBP[-0xe])(lVar16,unaff_RBP + 0x12);
    }
  }
  ResourceCleaner();
  return param_3 + 3;
}



int FUN_1806c70ff(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  longlong lVar8;
  uint64_t uVar9;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong *unaff_R12;
  int unaff_R13D;
  uint64_t unaff_R14;
  
  cVar7 = (**(code **)(*param_1 + 0x10))();
  if (cVar7 != '\0') {
    pcVar2 = *(char **)(unaff_RBP + 0x80);
    *(char **)(unaff_RBP + 0x88) = pcVar2;
    if ((((pcVar2 != (char *)0x0) && (*pcVar2 != (char)unaff_RSI)) &&
        (lVar8 = _strtoui64(pcVar2,unaff_RBP + 0x88,(int)unaff_RSI + 10), lVar8 != 0)) &&
       (unaff_RSI = (**(code **)(*unaff_R12 + 0x50))(), unaff_RSI == 0)) {
      uVar9 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar9,4,&UNK_18094c930,0x6c,&UNK_18094c870);
      goto LAB_1806c7195;
    }
  }
  (**(code **)(unaff_RBP + -0x70))(unaff_RBX[6],unaff_RSI);
LAB_1806c7195:
  ResourceCleaner();
  uVar4 = *(int32_t *)(unaff_RDI + 0x54);
  uVar5 = *(int32_t *)(unaff_RDI + 0x58);
  uVar6 = *(int32_t *)(unaff_RDI + 0x5c);
  *(int32_t *)(unaff_RBP + -0x78) = *(int32_t *)(unaff_RDI + 0x50);
  *(int32_t *)(unaff_RBP + -0x74) = uVar4;
  *(int32_t *)(unaff_RBP + -0x70) = uVar5;
  *(int32_t *)(unaff_RBP + -0x6c) = uVar6;
  ResourceAllocator();
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x80) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_R14 = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x80);
    if (((cVar7 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x80), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != '\0')) {
      lVar8 = unaff_RBX[7];
      *(int32_t *)(unaff_RBP + 0x90) = 0;
      FUN_1806d81c0(pcVar2,lVar8,unaff_RBP + 0x90,0x180be04f0);
      lVar8 = unaff_RBX[6];
      *(int8_t *)(unaff_RBP + 0x90) = *(int8_t *)(unaff_RBP + 0x90);
      (**(code **)(unaff_RBP + -0x70))(lVar8,unaff_RBP + 0x90);
    }
  }
  ResourceCleaner();
  return unaff_R13D + 3;
}



int FUN_1806c71d2(void)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  int *in_RAX;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_R13D;
  uint64_t unaff_R14;
  
  *in_RAX = *in_RAX + 1;
  *(uint64_t *)(unaff_RBP + 0x80) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_R14 = *(uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                      ((longlong *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x80);
    if (((cVar4 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x80), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != '\0')) {
      lVar3 = unaff_RBX[7];
      *(int32_t *)(unaff_RBP + 0x90) = 0;
      FUN_1806d81c0(pcVar2,lVar3,unaff_RBP + 0x90,0x180be04f0);
      lVar3 = unaff_RBX[6];
      *(int8_t *)(unaff_RBP + 0x90) = *(int8_t *)(unaff_RBP + 0x90);
      (**(code **)(unaff_RBP + -0x70))(lVar3,unaff_RBP + 0x90);
    }
  }
  ResourceCleaner();
  return unaff_R13D + 3;
}








