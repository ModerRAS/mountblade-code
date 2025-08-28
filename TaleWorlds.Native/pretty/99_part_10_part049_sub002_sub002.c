/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
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
typedef int64_t* ComponentPtr;                  // 组件指针
typedef uint64_t* ResourceHandlePtr;             // 资源句柄指针
typedef char SystemInitializationFlags;          // 系统初始化标志
typedef uint32_t SystemOperationStatus;          // 系统操作状态
typedef uint64_t ResourceCleanupFlags;          // 资源清理标志
/* ============================================================================
 * 函数别名定义
 * ============================================================================ */
/**
 * @brief 系统内存初始化器
 * 初始化系统内存并设置参数
 */
#define SystemMemoryInitializer SystemMemoryInitializer2
/**
 * @brief 组件配置管理器
 * 管理组件的配置和参数设置
 */
#define ComponentConfigManager ComponentConfigManager2
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
#define DataLoader DataLoader
/**
 * @brief 资源管理器
 * 管理资源的分配和释放
 */
#define ResourceManager ResourceManager
/**
 * @brief 数据转换器
 * 转换数据格式和类型
 */
#define DataConverter DataConverter
/**
 * @brief 系统同步器
 * 同步系统状态和数据
 */
#define SystemSynchronizer SystemSynchronizer
/**
 * @brief 组件注册器
 * 注册系统组件和模块
 */
#define ComponentRegistrar ComponentRegistrar
/**
 * @brief 数据读取器
 * 读取数据和资源信息
 */
#define DataReader DataReader
/**
 * @brief 内存管理器
 * 管理内存分配和释放
 */
#define MemoryManager MemoryManager
/**
 * @brief 状态管理器
 * 管理系统状态和转换
 */
#define StateManager StateManager
/**
 * @brief 数据查找器
 * 查找特定的数据和资源
 */
#define DataFinder DataFinder
/**
 * @brief 系统检查器
 * 检查系统状态和完整性
 */
#define SystemChecker SystemChecker2
/**
 * @brief 资源验证器
 * 验证资源的有效性和状态
 */
#define ResourceValidator ResourceValidator2
/**
 * @brief 数据格式化器
 * 格式化数据和字符串输出
 */
#define DataFormatter DataFormatter
/**
 * @brief 系统状态报告器
 * 生成系统状态报告
 */
#define SystemStatusReporter SystemStatusReporter
/**
 * @brief 高级数据处理器
 * 处理高级数据操作和转换
 */
#define AdvancedDataProcessor function_6c6c7b
/**
 * @brief 系统状态查询器
 * 查询系统状态和信息
 */
#define SystemStatusQuerier function_6c6e38
/**
 * @brief 系统重置器
 * 重置系统状态和参数
 */
#define SystemResetter function_6c6ed2
/**
 * @brief 数据同步处理器
 * 处理数据同步和一致性
 */
#define DataSyncProcessor function_6c6f10
/**
 * @brief 配置验证器
 * 验证配置的有效性和完整性
 */
#define ConfigValidator function_6c6f2c
/**
 * @brief 资源管理器
 * 管理资源的分配和释放
 */
#define ResourceHandler function_6c70ff
/**
 * @brief 系统监控器
 * 监控系统运行状态
 */
#define SystemMonitor function_6c71d2
/**
 * @brief 系统处理器
 * 处理系统操作和任务
 */
#define SystemProcessor SystemProcessor4
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
int ComponentConfigManager(int64_t system_handle, int64_t *config_params)
{
  int32_t *puVar1;
  uint uVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void *puVar8;
  char *pcStackX_8;
  void *plocal_var_d8;
  uint local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int64_t lStack_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  char cStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  void *aplocal_var_50 [2];
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  lStack_b0 = param_2[1];
  local_var_a8 = (int32_t)param_2[2];
  local_var_a4 = *(int32_t *)((int64_t)param_2 + 0x14);
  local_var_a0 = (int32_t)param_2[3];
  local_var_9c = *(int32_t *)((int64_t)param_2 + 0x1c);
  lStack_b8 = *param_2;
  lStack_98 = param_2[4];
  plStack_90 = (int64_t *)param_2[5];
  plStack_88 = (int64_t *)param_2[6];
  lStack_80 = param_2[7];
  lStack_78 = param_2[8];
  cStack_70 = (char)param_2[9];
  lStack_68 = param_2[10];
  lStack_60 = param_2[0xb];
  lStack_58 = param_2[0xc];
  iVar5 = DataValidator(local_var_a8,&lStack_b8);
  lStack_b8 = *param_2;
  lStack_78 = param_2[8];
  local_var_a8 = (int32_t)param_2[2];
  local_var_a4 = *(int32_t *)((int64_t)param_2 + 0x14);
  local_var_a0 = (int32_t)param_2[3];
  local_var_9c = *(int32_t *)((int64_t)param_2 + 0x1c);
  lStack_98 = param_2[4];
  lStack_b0 = param_2[1];
  cStack_70 = (char)param_2[9];
  plStack_90 = (int64_t *)param_2[5];
  lStack_68 = param_2[10];
  plStack_88 = (int64_t *)param_2[6];
  lStack_60 = param_2[0xb];
  lStack_80 = param_2[7];
  lStack_58 = param_2[0xc];
  ResourceAllocator(&lStack_b8,*(uint64_t *)(param_1 + 0xd0));
  plVar3 = plStack_88;
  plVar7 = (int64_t *)0x0;
  if ((short)plStack_88[1] == 0xd) {
    plVar7 = plStack_88;
  }
  if (plVar7 != (int64_t *)0x0) {
    lVar6 = (**(code **)(*plVar7 + 0x1e8))();
    if (*(short *)(lVar6 + 8) == 0xc) goto LAB_1806c504a;
  }
  local_var_18 = *(int32_t *)(param_1 + 0xe0);
  local_var_14 = *(int32_t *)(param_1 + 0xe4);
  local_var_10 = *(int32_t *)(param_1 + 0xe8);
  local_var_c = *(int32_t *)(param_1 + 0xec);
  pcStackX_8 = (char *)0x0;
  if (cStack_70 != '\0') {
    if (*(int *)(lStack_b8 + 0x10) == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)
                (*(int64_t *)(lStack_b8 + 8) + (uint64_t)(*(int *)(lStack_b8 + 0x10) - 1) * 0x18);
    }
    cVar4 = (**(code **)(*plStack_90 + 0x10))(plStack_90,puVar8,&pcStackX_8);
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      ComponentInitializer(pcStackX_8,&plocal_var_d8);
      aplocal_var_50[0] = plocal_var_d8;
      local_var_40 = local_var_c8;
      local_var_38 = local_var_c0;
      local_var_3c = local_var_c4;
      (*(code *)CONCAT44(local_var_c,local_var_10))(plVar3,aplocal_var_50);
    }
  }
LAB_1806c504a:
  ResourceCleaner(&lStack_b8);
  DataProcessor(&lStack_b8);
  plocal_var_d8 = &ui_system_data_1904_ptr;
  local_var_c8 = CONCAT31(local_var_c8._1_3_,cStack_70);
  uVar2 = *(uint *)(lStack_b8 + 0x10);
  local_var_d0 = local_var_d0 & 0xffffff00;
  if (uVar2 < (*(uint *)(lStack_b8 + 0x14) & 0x7fffffff)) {
    lVar6 = *(int64_t *)(lStack_b8 + 8);
    puVar1 = (int32_t *)(lVar6 + (uint64_t)uVar2 * 0x18);
    *puVar1 = 0x8094c9b0;
    puVar1[1] = 1;
    puVar1[2] = local_var_d0;
    puVar1[3] = local_var_cc;
    *(uint64_t *)(lVar6 + 0x10 + (uint64_t)uVar2 * 0x18) = CONCAT44(local_var_c4,local_var_c8);
    *(int *)(lStack_b8 + 0x10) = *(int *)(lStack_b8 + 0x10) + 1;
  }
  else {
    ComponentManager(lStack_b8,&plocal_var_d8);
  }
  SystemConfigurator(&lStack_b8,plStack_88,param_1 + 0xf0,0);
  ResourceCleaner(&lStack_b8);
  return iVar5 + 3;
}
int SystemInitializer3(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t *puVar7;
  int iVar8;
  void *puVar9;
  int64_t lStack_a8;
  int64_t *plStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int8_t stack_array_50 [8];
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  lStack_a8 = *param_2;
  plStack_a0 = (int64_t *)param_2[1];
  lStack_98 = param_2[2];
  lStack_90 = param_2[3];
  lStack_88 = param_2[4];
  lStack_80 = param_2[5];
  lStack_78 = param_2[6];
  iVar6 = DataLoader(param_1,&lStack_a8);
  lVar1 = *param_2;
  plVar2 = (int64_t *)param_2[1];
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
  ResourceManager(&lStack_a8,*(uint64_t *)(param_1 + 0xd0));
  local_var_48 = *(int32_t *)(param_1 + 0xd0);
  local_var_44 = *(int32_t *)(param_1 + 0xd4);
  local_var_40 = *(int32_t *)(param_1 + 0xd8);
  local_var_3c = *(int32_t *)(param_1 + 0xdc);
  puVar7 = (uint64_t *)(**(code **)(param_1 + 0xe0))(stack_array_50,lVar4);
  local_var_70 = *puVar7;
  local_var_68 = puVar7[1];
  local_var_5c = *(int32_t *)((int64_t)puVar7 + 0x14);
  local_var_60 = *(int32_t *)(puVar7 + 2);
  local_var_58 = *(int32_t *)(puVar7 + 3);
  if (*(int *)(lVar1 + 0x10) == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)
              (*(int64_t *)(lVar1 + 8) + (uint64_t)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  DataConverter(plVar2,lVar3,lVar5,puVar9,&local_var_70);
  iVar8 = *(int *)(lVar1 + 0x10);
  if (iVar8 != 0) {
    if (*(char *)(*(int64_t *)(lVar1 + 8) + 8 + (uint64_t)(iVar8 - 1) * 0x10) != '\0') {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar8 = *(int *)(lVar1 + 0x10);
    }
    *(int *)(lVar1 + 0x10) = iVar8 + -1;
  }
  ResourceManager(&lStack_a8,&ui_system_data_1904_ptr);
  SystemSynchronizer(&lStack_a8,param_1 + 0xf0);
  iVar8 = *(int *)(lVar1 + 0x10);
  if (iVar8 != 0) {
    if (*(char *)(*(int64_t *)(lVar1 + 8) + 8 + (uint64_t)(iVar8 - 1) * 0x10) != '\0') {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar8 = *(int *)(lVar1 + 0x10);
    }
    *(int *)(lVar1 + 0x10) = iVar8 + -1;
  }
  return iVar6 + 3;
}
int SystemProcessor5(int64_t param_1,int64_t *param_2,int param_3)
{
  int32_t *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int64_t lVar5;
  int64_t lVar6;
  char cVar7;
  uint64_t uVar8;
  void *puVar9;
  void *puVar10;
  int32_t uVar11;
  char *pcStackX_8;
  int8_t astack_special_x_10 [8];
  void *plocal_var_58;
  uint local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  ComponentRegistrar(param_2,param_1 + 0x18,param_3 + 1);
  local_var_50 = *(int32_t *)(param_1 + 0x60);
  local_var_4c = *(int32_t *)(param_1 + 100);
  local_var_48 = *(int32_t *)(param_1 + 0x68);
  local_var_44 = *(int32_t *)(param_1 + 0x6c);
  local_var_40 = *(int32_t *)(param_1 + 0x70);
  local_var_3c = *(int32_t *)(param_1 + 0x74);
  local_var_38 = *(int32_t *)(param_1 + 0x78);
  local_var_34 = *(int32_t *)(param_1 + 0x7c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar4 = (int *)param_2[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  puVar10 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar2 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = DataReader(pcStackX_8,astack_special_x_10);
      (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[6],uVar11);
    }
  }
  ResourceCleaner(param_2);
  local_var_50 = *(int32_t *)(param_1 + 0x80);
  local_var_4c = *(int32_t *)(param_1 + 0x84);
  local_var_48 = *(int32_t *)(param_1 + 0x88);
  local_var_44 = *(int32_t *)(param_1 + 0x8c);
  local_var_40 = *(int32_t *)(param_1 + 0x90);
  local_var_3c = *(int32_t *)(param_1 + 0x94);
  local_var_38 = *(int32_t *)(param_1 + 0x98);
  local_var_34 = *(int32_t *)(param_1 + 0x9c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar4 = (int *)param_2[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar2 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = DataReader(pcStackX_8,astack_special_x_10);
      (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[6],uVar11);
    }
  }
  ResourceCleaner(param_2);
  local_var_50 = *(uint *)(param_1 + 0xa0);
  local_var_4c = *(int32_t *)(param_1 + 0xa4);
  local_var_48 = *(int32_t *)(param_1 + 0xa8);
  local_var_44 = *(int32_t *)(param_1 + 0xac);
  local_var_40 = *(int32_t *)(param_1 + 0xb0);
  local_var_3c = *(int32_t *)(param_1 + 0xb4);
  local_var_38 = *(int32_t *)(param_1 + 0xb8);
  local_var_34 = *(int32_t *)(param_1 + 0xbc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar4 = (int *)param_2[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar2 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar11 = DataReader(pcStackX_8,astack_special_x_10);
      (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[6],uVar11);
    }
  }
  ResourceCleaner(param_2);
  DataProcessor(param_2);
  lVar5 = *param_2;
  plocal_var_58 = &ui_system_data_1912_ptr;
  local_var_48 = CONCAT31(local_var_48._1_3_,(char)param_2[9]);
  uVar3 = *(uint *)(lVar5 + 0x10);
  local_var_50 = local_var_50 & 0xffffff00;
  if (uVar3 < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
    lVar6 = *(int64_t *)(lVar5 + 8);
    puVar1 = (int32_t *)(lVar6 + (uint64_t)uVar3 * 0x18);
    *puVar1 = 0x8094c9b8;
    puVar1[1] = 1;
    puVar1[2] = local_var_50;
    puVar1[3] = local_var_4c;
    *(uint64_t *)(lVar6 + 0x10 + (uint64_t)uVar3 * 0x18) = CONCAT44(local_var_44,local_var_48);
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  }
  else {
    ComponentManager(lVar5,&plocal_var_58);
  }
  MemoryManager(param_2,param_2[6],param_1 + 0xc0);
  ResourceCleaner(param_2);
  local_var_40 = *(int32_t *)(param_1 + 0xf0);
  local_var_3c = *(int32_t *)(param_1 + 0xf4);
  local_var_38 = *(int32_t *)(param_1 + 0xf8);
  local_var_34 = *(int32_t *)(param_1 + 0xfc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar4 = (int *)param_2[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar2 = *(int *)(*param_2 + 0x10);
    if (iVar2 != 0) {
      puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar2 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar10,&pcStackX_8);
    if ((((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) &&
       ((int64_t *)param_2[4] != (int64_t *)0x0)) {
      uVar8 = (**(code **)(*(int64_t *)param_2[4] + 8))();
      (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 10;
}
int SystemConfigManager2(int64_t param_1,int64_t *param_2,int param_3)
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
  puVar7 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
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
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = DataReader(pcStackX_8,&pcStackX_10);
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
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
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
      puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar7,&pcStackX_8)
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
int StateManager2(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  char cVar3;
  void *puVar4;
  void *puVar5;
  char *pcStackX_8;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  local_var_30 = *(int32_t *)(param_1 + 2);
  local_var_2c = *(int32_t *)((int64_t)param_1 + 0x14);
  local_var_28 = *(int32_t *)(param_1 + 3);
  local_var_24 = *(int32_t *)((int64_t)param_1 + 0x1c);
  StateManager(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      ComponentInitializer(pcStackX_8,&local_var_88);
      local_var_68 = local_var_88;
      local_var_60 = local_var_80;
      local_var_58 = local_var_78;
      local_var_50 = local_var_70;
      local_var_54 = local_var_74;
      (*(code *)CONCAT44(local_var_24,local_var_28))(param_2[6],&local_var_68);
    }
  }
  ResourceCleaner(param_2);
  local_var_30 = *(int32_t *)(param_1 + 6);
  local_var_2c = *(int32_t *)((int64_t)param_1 + 0x34);
  local_var_28 = *(int32_t *)(param_1 + 7);
  local_var_24 = *(int32_t *)((int64_t)param_1 + 0x3c);
  StateManager(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar5 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      ComponentInitializer(pcStackX_8,&local_var_68);
      local_var_88 = local_var_68;
      local_var_80 = local_var_60;
      local_var_78 = local_var_58;
      local_var_70 = local_var_50;
      local_var_74 = local_var_54;
      (*(code *)CONCAT44(local_var_24,local_var_28))(param_2[6],&local_var_88);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 2;
}
int ComponentManager2(int64_t param_1,int64_t *param_2,int param_3)
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
  int32_t local_var_a8;
  int iStack_a4;
  int iStack_a0;
  int32_t local_var_9c;
  uint64_t *plocal_var_98;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  local_var_78 = *(int32_t *)(param_1 + 0x50);
  local_var_74 = *(int32_t *)(param_1 + 0x54);
  local_var_70 = *(int32_t *)(param_1 + 0x58);
  local_var_6c = *(int32_t *)(param_1 + 0x5c);
  iStackX_18 = param_3;
  StateManager(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar5 = 0;
  puVar6 = &ui_system_data_1920_ptr;
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar2 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar8 = DataReader(pcStackX_10,&pcStackX_8);
      uVar9 = DataReader(pcStackX_8,&pcStackX_8);
      uVar10 = DataReader(pcStackX_8,&pcStackX_8);
      local_var_9c = DataReader(pcStackX_8,&pcStackX_8);
      local_var_a8 = uVar8;
      iStack_a4 = uVar9;
      iStack_a0 = uVar10;
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],&local_var_a8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x70);
  local_var_74 = *(int32_t *)(param_1 + 0x74);
  local_var_70 = *(int32_t *)(param_1 + 0x78);
  local_var_6c = *(int32_t *)(param_1 + 0x7c);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar2 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar8 = DataReader(pcStackX_10,&pcStackX_8);
      uVar9 = DataReader(pcStackX_8,&pcStackX_8);
      iStack_a0 = DataReader(pcStackX_8,&pcStackX_8);
      local_var_a8 = uVar8;
      iStack_a4 = uVar9;
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],&local_var_a8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x90);
  local_var_74 = *(int32_t *)(param_1 + 0x94);
  local_var_70 = *(int32_t *)(param_1 + 0x98);
  local_var_6c = *(int32_t *)(param_1 + 0x9c);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = DataFinder(pcStackX_8,&system_memory_02c0);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0xb0);
  local_var_74 = *(int32_t *)(param_1 + 0xb4);
  local_var_70 = *(int32_t *)(param_1 + 0xb8);
  local_var_6c = *(int32_t *)(param_1 + 0xbc);
  StateManager(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0xd0);
  local_var_74 = *(int32_t *)(param_1 + 0xd4);
  local_var_70 = *(int32_t *)(param_1 + 0xd8);
  local_var_6c = *(int32_t *)(param_1 + 0xdc);
  StateManager(param_2,*(uint64_t *)(param_1 + 0xc0));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0xf0);
  local_var_74 = *(int32_t *)(param_1 + 0xf4);
  local_var_70 = *(int32_t *)(param_1 + 0xf8);
  local_var_6c = *(int32_t *)(param_1 + 0xfc);
  StateManager(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x110);
  local_var_74 = *(int32_t *)(param_1 + 0x114);
  local_var_70 = *(int32_t *)(param_1 + 0x118);
  local_var_6c = *(int32_t *)(param_1 + 0x11c);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x100));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,0x55);
  plocal_var_98 = (uint64_t *)(param_1 + 0x120);
  ppcVar7 = &pcStackX_8;
  if ((char **)param_2[0xb] != (char **)0x0) {
    ppcVar7 = (char **)param_2[0xb];
  }
  iVar3 = iVar5;
  if ((int *)param_2[0xc] != (int *)0x0) {
    iVar3 = *(int *)param_2[0xc];
  }
  StateManager(param_2,*plocal_var_98);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x130));
  iStack_a4 = iVar3 + 0x68;
  iStack_a0._0_1_ = 1;
  local_var_a8 = CONCAT31(local_var_a8._1_3_,1);
  SystemChecker2(param_2,*(int *)ppcVar7,&local_var_a8);
  *(int *)ppcVar7 = *(int *)ppcVar7 + 1;
  ResourceCleaner(param_2);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x138));
  iStack_a4 = iVar3 + 0x6c;
  iStack_a0 = (uint)iStack_a0._1_3_ << 8;
  SystemChecker2(param_2,*(int *)ppcVar7,&local_var_a8);
  ResourceCleaner(param_2);
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x160);
  local_var_74 = *(int32_t *)(param_1 + 0x164);
  local_var_70 = *(int32_t *)(param_1 + 0x168);
  local_var_6c = *(int32_t *)(param_1 + 0x16c);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x180);
  local_var_74 = *(int32_t *)(param_1 + 0x184);
  local_var_70 = *(int32_t *)(param_1 + 0x188);
  local_var_6c = *(int32_t *)(param_1 + 0x18c);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x170));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x1a0);
  local_var_74 = *(int32_t *)(param_1 + 0x1a4);
  local_var_70 = *(int32_t *)(param_1 + 0x1a8);
  local_var_6c = *(int32_t *)(param_1 + 0x1ac);
  StateManager(param_2,*(uint64_t *)(param_1 + 400));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar8 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],uVar8);
    }
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x1c0);
  local_var_74 = *(int32_t *)(param_1 + 0x1c4);
  local_var_70 = *(int32_t *)(param_1 + 0x1c8);
  local_var_6c = *(int32_t *)(param_1 + 0x1cc);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x1b0));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar3 = *(int *)(*param_2 + 0x10);
    if (iVar3 != 0) {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      iVar3 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcStackX_8,&rendering_buffer_2328_ptr);
      (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],iVar3 == 0);
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
  StateManager(param_2,*(uint64_t *)(param_1 + 0x1d0));
  StateManager(param_2,*(uint64_t *)(param_1 + 0x1e0));
  iStack_a4 = iVar5 + 0x80;
  iStack_a0._0_1_ = 1;
  local_var_a8 = CONCAT31(local_var_a8._1_3_,1);
  plocal_var_98 = (uint64_t *)(param_1 + 0x1d0);
  SystemChecker2(param_2,*(int *)ppcVar7,&local_var_a8);
  *(int *)ppcVar7 = *(int *)ppcVar7 + 1;
  ResourceCleaner(param_2);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x1e8));
  iStack_a4 = iVar5 + 0x84;
  iStack_a0 = (uint)iStack_a0._1_3_ << 8;
  SystemChecker2(param_2,*(int *)ppcVar7,&local_var_a8);
  ResourceCleaner(param_2);
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x210);
  local_var_74 = *(int32_t *)(param_1 + 0x214);
  local_var_70 = *(int32_t *)(param_1 + 0x218);
  local_var_6c = *(int32_t *)(param_1 + 0x21c);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar2 = ResourceValidator2(param_2,&pcStackX_8);
  if (cVar2 != '\0') {
    (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],(uint64_t)pcStackX_8 & 0xff);
  }
  ResourceCleaner(param_2);
  local_var_78 = *(int32_t *)(param_1 + 0x230);
  local_var_74 = *(int32_t *)(param_1 + 0x234);
  local_var_70 = *(int32_t *)(param_1 + 0x238);
  local_var_6c = *(int32_t *)(param_1 + 0x23c);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar1 = (int *)param_2[0xb];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar2 = SystemProcessor4(param_2,&pcStackX_8);
  if (cVar2 != '\0') {
    (*(code *)CONCAT44(local_var_6c,local_var_70))(param_2[6],pcStackX_8._0_4_);
  }
  ResourceCleaner(param_2);
  return iStackX_18 + 0x10;
}
int SystemController2(int64_t param_1,int64_t *param_2)
{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  char *pcVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int64_t in_RAX;
  void *puVar8;
  int64_t unaff_RBP;
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
  *(int *)(unaff_RBP + -0x15) = (int)((uint64_t)in_XMM1_Qa >> 0x20);
  *(int32_t *)(unaff_RBP + -0x11) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + -0xd) = in_XMM1_Dd;
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  iVar9 = 0;
  puVar10 = &ui_system_data_1920_ptr;
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x67);
      uVar13 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar15 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x67);
      uVar13 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = DataFinder(pcVar4,&system_memory_02c0);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(param_2,*(uint64_t *)(param_1 + 0x120));
  StateManager(param_2,*(uint64_t *)(param_1 + 0x130));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar7 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(param_1 + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(param_2,iVar1,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  ResourceCleaner(param_2);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x138));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar7 + 0x6c;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(param_2,iVar1,unaff_RBP + -0x49);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar12 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)param_2[9] != '\0') {
    iVar7 = *(int *)(*param_2 + 0x10);
    if (iVar7 != 0) {
      puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar10,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      iVar7 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar4,&rendering_buffer_2328_ptr);
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
  StateManager(param_2,*(uint64_t *)(param_1 + 0x1d0));
  StateManager(param_2,*(uint64_t *)(param_1 + 0x1e0));
  iVar7 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar9 + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(param_1 + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(param_2,iVar7,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  ResourceCleaner(param_2);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x1e8));
  iVar7 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar9 + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(param_2,iVar7,unaff_RBP + -0x49);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar6 = ResourceValidator2(param_2,unaff_RBP + 0x67);
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
  StateManager(param_2,uVar2);
  piVar3 = (int *)param_2[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar6 = SystemProcessor4(param_2,unaff_RBP + 0x67);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(param_2[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner(param_2);
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemMonitor2(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char cVar6;
  int iVar7;
  int64_t in_RAX;
  void *puVar8;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int iVar9;
  int64_t unaff_RDI;
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
  *(int *)(unaff_RBP + -0x15) = (int)((uint64_t)param_2 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x11) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + -0xd) = in_XMM1_Dd;
  StateManager();
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  iVar9 = 0;
  puVar10 = &ui_system_data_1920_ptr;
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x6f), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar3;
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x67);
      uVar13 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar15 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x6f), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar3;
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x67);
      uVar13 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = DataFinder(pcVar3,&system_memory_02c0);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x6f);
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
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x120));
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar7 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar12,iVar1,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar12 = ResourceCleaner();
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar7 + 0x6c;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(uVar12,iVar1,unaff_RBP + -0x49);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 == 0) {
      puVar8 = &ui_system_data_1920_ptr;
    }
    else {
      puVar8 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      uVar12 = DataReader(pcVar3,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x10);
    if (iVar7 != 0) {
      puVar10 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar7 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar10,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar3 = *(char **)(unaff_RBP + 0x67), pcVar3 != (char *)0x0)) &&
       (*pcVar3 != '\0')) {
      iVar7 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar3,&rendering_buffer_2328_ptr);
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
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar7 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar9 + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar12,iVar7,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar12 = ResourceCleaner();
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar7 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar9 + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(uVar12,iVar7,unaff_RBP + -0x49);
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
  uVar12 = StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar6 = ResourceValidator2(uVar12,unaff_RBP + 0x67);
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
  uVar12 = StateManager(uVar15,uVar5);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar6 = SystemProcessor4(uVar12,unaff_RBP + 0x67);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemCleaner2(void)
{
  int iVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  void *puVar9;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  void *puVar10;
  int *piVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  puVar10 = &ui_system_data_1920_ptr;
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_RSI;
  cVar7 = (char)unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      *(char **)(unaff_RBP + 0x67) = pcVar2;
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x67);
      uVar13 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar15 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      *(char **)(unaff_RBP + 0x67) = pcVar2;
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x67);
      uVar13 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar14 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = DataFinder(pcVar2,&system_memory_02c0);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x120));
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar12,iVar1,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar12 = ResourceCleaner();
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x6c;
  *(char *)(unaff_RBP + -0x41) = cVar7;
  SystemChecker2(uVar12,iVar1,unaff_RBP + -0x49);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar9,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      uVar12 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 != 0) {
      puVar10 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],puVar10,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      iVar8 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar2,&rendering_buffer_2328_ptr);
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
    unaff_RSI = (uint64_t)*(uint *)unaff_RBX[0xc];
  }
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar8 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar12,iVar8,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar12 = ResourceCleaner();
  uVar12 = StateManager(uVar12,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar8 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(uVar12,iVar8,unaff_RBP + -0x49);
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
  uVar12 = StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  cVar7 = ResourceValidator2(uVar12,unaff_RBP + 0x67);
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
  uVar12 = StateManager(uVar15,uVar4);
  piVar5 = (int *)unaff_RBX[0xb];
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  cVar7 = SystemProcessor4(uVar12,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemChecker2(uint64_t param_1)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int *piVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  int *piVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  *(uint64_t *)(unaff_RBP + 0x67) = param_1;
  uVar10 = DataReader();
  uVar11 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
  uVar12 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
  uVar13 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_RSI;
  cVar7 = (char)unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar5 = *(char **)(unaff_RBP + 0x6f), pcVar5 != (char *)0x0)) && (*pcVar5 != cVar7)) {
    *(char **)(unaff_RBP + 0x67) = pcVar5;
    uVar10 = DataReader(pcVar5,unaff_RBP + 0x67);
    uVar11 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar12 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = DataFinder(pcVar5,&system_memory_02c0);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = DataReader(pcVar5,unaff_RBP + 0x6f);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0)) && (*pcVar5 != cVar7)) {
    uVar10 = DataReader(pcVar5,unaff_RBP + 0x6f);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = DataReader(pcVar5,unaff_RBP + 0x6f);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = DataReader(pcVar5,unaff_RBP + 0x6f);
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
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x120));
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar10,iVar1,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar10 = ResourceCleaner();
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x6c;
  *(char *)(unaff_RBP + -0x41) = cVar7;
  SystemChecker2(uVar10,iVar1,unaff_RBP + -0x49);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0)) && (*pcVar5 != cVar7)) {
    uVar10 = DataReader(pcVar5,unaff_RBP + 0x6f);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = DataReader(pcVar5,unaff_RBP + 0x6f);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0 && (*pcVar5 != cVar7)))) {
    uVar10 = DataReader(pcVar5,unaff_RBP + 0x6f);
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
  StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 != 0) {
      unaff_R14 = *(uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar5 = *(char **)(unaff_RBP + 0x67), pcVar5 != (char *)0x0)) &&
       (*pcVar5 != cVar7)) {
      iVar8 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar5,&rendering_buffer_2328_ptr);
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
    unaff_RSI = (uint64_t)*(uint *)unaff_RBX[0xc];
  }
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar10,iVar8,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar10 = ResourceCleaner();
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(uVar10,iVar8,unaff_RBP + -0x49);
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
  uVar10 = StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar7 = ResourceValidator2(uVar10,unaff_RBP + 0x67);
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
  uVar10 = StateManager(uVar13,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar7 = SystemProcessor4(uVar10,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemMonitor3(void)
{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  char *pcVar4;
  int64_t lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_RSI;
  cVar7 = (char)unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) && (*pcVar4 != cVar7)) {
    *(char **)(unaff_RBP + 0x67) = pcVar4;
    uVar11 = DataReader(pcVar4,unaff_RBP + 0x67);
    uVar12 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar13 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = DataFinder(pcVar4,&system_memory_02c0);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) && (*pcVar4 != cVar7)) {
    uVar11 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  uVar11 = StateManager(uVar11,*(uint64_t *)(unaff_RDI + 0x120));
  uVar11 = StateManager(uVar11,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar11,iVar1,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar11 = ResourceCleaner();
  uVar11 = StateManager(uVar11,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = iVar8 + 0x6c;
  *(char *)(unaff_RBP + -0x41) = cVar7;
  SystemChecker2(uVar11,iVar1,unaff_RBP + -0x49);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) && (*pcVar4 != cVar7)) {
    uVar11 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0 && (*pcVar4 != cVar7)))) {
    uVar11 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
  StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 != 0) {
      unaff_R14 = *(uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != cVar7)) {
      iVar8 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar4,&rendering_buffer_2328_ptr);
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
    unaff_RSI = (uint64_t)*(uint *)unaff_RBX[0xc];
  }
  uVar11 = StateManager(uVar11,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar11 = StateManager(uVar11,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar11,iVar8,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar11 = ResourceCleaner();
  uVar11 = StateManager(uVar11,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(uVar11,iVar8,unaff_RBP + -0x49);
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
  uVar11 = StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar7 = ResourceValidator2(uVar11,unaff_RBP + 0x67);
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
  uVar11 = StateManager(uVar10,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar7 = SystemProcessor4(uVar11,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemConfigurator2(uint64_t param_1,int32_t param_2)
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
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  int *piVar11;
  int32_t uVar12;
  *in_RAX = *in_RAX + 1;
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  cVar8 = (char)unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar8) &&
       (cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                          ((int64_t *)unaff_RBX[5],param_2,unaff_RBP + 0x67), cVar7 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar8)) {
    uVar9 = DataFinder(pcVar2,&system_memory_02c0);
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
  StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar8) &&
       (cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar8)) {
    uVar9 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  uVar9 = StateManager(uVar9,*(uint64_t *)(unaff_RDI + 0x120));
  uVar9 = StateManager(uVar9,*(uint64_t *)(unaff_RDI + 0x130));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar10 + 0x68;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x120);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar9,iVar1,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar9 = ResourceCleaner();
  uVar9 = StateManager(uVar9,*(uint64_t *)(unaff_RDI + 0x138));
  iVar1 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = iVar10 + 0x6c;
  *(char *)(unaff_RBP + -0x41) = cVar8;
  SystemChecker2(uVar9,iVar1,unaff_RBP + -0x49);
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
  StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar8) &&
       (cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar8)) {
    uVar9 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar8) &&
      (cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar7 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar8)))) {
    uVar9 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
  StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar8) {
    iVar10 = *(int *)(*unaff_RBX + 0x10);
    if (iVar10 != 0) {
      unaff_R14 = *(uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar10 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x67);
    if (((cVar7 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar8)) {
      iVar10 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar2,&rendering_buffer_2328_ptr);
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
    unaff_RSI = (uint64_t)*(uint *)unaff_RBX[0xc];
  }
  uVar9 = StateManager(uVar9,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar9 = StateManager(uVar9,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar10 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar9,iVar10,unaff_RBP + -0x49);
  *piVar11 = *piVar11 + 1;
  uVar9 = ResourceCleaner();
  uVar9 = StateManager(uVar9,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar10 = *piVar11;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(uVar9,iVar10,unaff_RBP + -0x49);
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
  uVar9 = StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar8 = ResourceValidator2(uVar9,unaff_RBP + 0x67);
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
  uVar9 = StateManager(uVar12,uVar3);
  piVar4 = (int *)unaff_RBX[0xb];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  cVar8 = SystemProcessor4(uVar9,unaff_RBP + 0x67);
  if (cVar8 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemProcessor3(uint64_t param_1,int32_t param_2)
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
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  int *piVar9;
  int32_t uVar10;
  int32_t uVar11;
  *in_RAX = *in_RAX + 1;
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  cVar7 = (char)unaff_RSI;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                          ((int64_t *)unaff_RBX[5],param_2,unaff_RBP + 0x67), cVar6 != '\0')) &&
      (pcVar1 = *(char **)(unaff_RBP + 0x67), pcVar1 != (char *)0x0)) && (*pcVar1 != cVar7)) {
    uVar10 = DataReader(pcVar1,unaff_RBP + 0x6f);
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
  StateManager(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar1 = *(char **)(unaff_RBP + 0x67), pcVar1 != (char *)0x0 && (*pcVar1 != cVar7)))) {
    uVar10 = DataReader(pcVar1,unaff_RBP + 0x6f);
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
  StateManager(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((((char)unaff_RBX[9] != cVar7) &&
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar1 = *(char **)(unaff_RBP + 0x67), pcVar1 != (char *)0x0 && (*pcVar1 != cVar7)))) {
    uVar10 = DataReader(pcVar1,unaff_RBP + 0x6f);
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
  StateManager(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_RSI;
  if ((char)unaff_RBX[9] != cVar7) {
    iVar8 = *(int *)(*unaff_RBX + 0x10);
    if (iVar8 != 0) {
      unaff_R14 = *(uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar8 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar1 = *(char **)(unaff_RBP + 0x67), pcVar1 != (char *)0x0)) &&
       (*pcVar1 != cVar7)) {
      iVar8 = _stricmp_shdfnd_physx__YAHPEBD0_Z(pcVar1,&rendering_buffer_2328_ptr);
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
    unaff_RSI = (uint64_t)*(uint *)unaff_RBX[0xc];
  }
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x1d0));
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x1e0));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x80;
  *(int8_t *)(unaff_RBP + -0x41) = 1;
  *(uint64_t **)(unaff_RBP + -0x39) = (uint64_t *)(unaff_RDI + 0x1d0);
  *(int8_t *)(unaff_RBP + -0x49) = 1;
  SystemChecker2(uVar10,iVar8,unaff_RBP + -0x49);
  *piVar9 = *piVar9 + 1;
  uVar10 = ResourceCleaner();
  uVar10 = StateManager(uVar10,*(uint64_t *)(unaff_RDI + 0x1e8));
  iVar8 = *piVar9;
  *(int *)(unaff_RBP + -0x45) = (int)unaff_RSI + 0x84;
  *(int8_t *)(unaff_RBP + -0x41) = 0;
  SystemChecker2(uVar10,iVar8,unaff_RBP + -0x49);
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
  uVar10 = StateManager(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar7 = ResourceValidator2(uVar10,unaff_RBP + 0x67);
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
  uVar10 = StateManager(uVar11,uVar2);
  piVar3 = (int *)unaff_RBX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  cVar7 = SystemProcessor4(uVar10,unaff_RBP + 0x67);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + -0x11))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemHelper1(void)
{
  int *piVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int *in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  *in_RAX = *in_RAX + 1;
  cVar5 = ResourceValidator2();
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
  StateManager();
  piVar1 = *(int **)(unaff_RBX + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  cVar5 = SystemProcessor4();
  if (cVar5 != '\0') {
    (**(code **)(unaff_RBP + -0x11))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemHelper2(void)
{
  char cVar1;
  int *in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  *in_RAX = *in_RAX + 1;
  cVar1 = SystemProcessor4();
  if (cVar1 != '\0') {
    (**(code **)(unaff_RBP + -0x11))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x67));
  }
  ResourceCleaner();
  return *(int *)(unaff_RBP + 0x77) + 0x10;
}
int SystemLogger2(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int32_t uVar5;
  void *puVar6;
  void *puVar7;
  char *pcStackX_8;
  int8_t astack_special_x_10 [8];
  int8_t astack_special_x_18 [8];
  pcVar3 = *(code **)(param_1 + 0x58);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar7 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = DataFinder(pcStackX_8,&system_memory_02f0);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  DataProcessor2(param_2,param_3 + 1,param_1 + 0x60,&system_memory_0350,astack_special_x_18);
  pcVar3 = *(code **)(param_1 + 0x98);
  StateManager(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar6,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = DataReader(pcStackX_8,astack_special_x_10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  pcVar3 = *(code **)(param_1 + 0xd0);
  StateManager(param_2,*(uint64_t *)(param_1 + 0xb8));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = DataReader(pcStackX_8,astack_special_x_10);
      (*pcVar3)(param_2[6],uVar5);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 5;
}
int DataValidator(int64_t param_1,int64_t *param_2,int param_3)
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
  int32_t astack_special_x_18 [2];
  pcVar3 = *(code **)(param_1 + 0x30);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x18));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar8 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar7,&pcStackX_8)
    ;
    if ((((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) &&
       ((int64_t *)param_2[4] != (int64_t *)0x0)) {
      uVar6 = (**(code **)(*(int64_t *)param_2[4] + 8))();
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar7,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      astack_special_x_18[0] = 0;
      DataFormatter(pcStackX_8,param_2[7],astack_special_x_18,0x180be0170);
      (*pcVar3)(param_2[6],astack_special_x_18);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar7,&pcStackX_8)
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
      puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar8,&pcStackX_8)
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
int SystemHelper3(int64_t param_1,int64_t *param_2,int param_3)
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
  int32_t astack_special_x_18 [2];
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  local_var_60 = *(int32_t *)(param_1 + 0x140);
  local_var_5c = *(int32_t *)(param_1 + 0x144);
  local_var_58 = *(int32_t *)(param_1 + 0x148);
  local_var_54 = *(int32_t *)(param_1 + 0x14c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x130));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      ComponentInitializer(pcStackX_8,&local_var_b8);
      local_var_98 = local_var_b8;
      local_var_90 = local_var_b0;
      local_var_88 = local_var_a8;
      local_var_80 = local_var_a0;
      local_var_84 = local_var_a4;
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],&local_var_98);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x160);
  local_var_5c = *(int32_t *)(param_1 + 0x164);
  local_var_58 = *(int32_t *)(param_1 + 0x168);
  local_var_54 = *(int32_t *)(param_1 + 0x16c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x198);
  local_var_5c = *(int32_t *)(param_1 + 0x19c);
  local_var_58 = *(int32_t *)(param_1 + 0x1a0);
  local_var_54 = *(int32_t *)(param_1 + 0x1a4);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x188));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar6 = DataReader(pcStackX_10,&pcStackX_8);
      uVar7 = DataReader(pcStackX_8,&pcStackX_8);
      local_var_c0 = DataReader(pcStackX_8,&pcStackX_8);
      local_var_c8 = uVar6;
      local_var_c4 = uVar7;
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],&local_var_c8);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x1d0);
  local_var_5c = *(int32_t *)(param_1 + 0x1d4);
  local_var_58 = *(int32_t *)(param_1 + 0x1d8);
  local_var_54 = *(int32_t *)(param_1 + 0x1dc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x1c0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x1f0);
  local_var_5c = *(int32_t *)(param_1 + 500);
  local_var_58 = *(int32_t *)(param_1 + 0x1f8);
  local_var_54 = *(int32_t *)(param_1 + 0x1fc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x1e0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x210);
  local_var_5c = *(int32_t *)(param_1 + 0x214);
  local_var_58 = *(int32_t *)(param_1 + 0x218);
  local_var_54 = *(int32_t *)(param_1 + 0x21c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar6 = DataReader(pcStackX_10,&pcStackX_8);
      uVar7 = DataReader(pcStackX_8,&pcStackX_8);
      local_var_c0 = DataReader(pcStackX_8,&pcStackX_8);
      local_var_c8 = uVar6;
      local_var_c4 = uVar7;
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],&local_var_c8);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x230);
  local_var_5c = *(int32_t *)(param_1 + 0x234);
  local_var_58 = *(int32_t *)(param_1 + 0x238);
  local_var_54 = *(int32_t *)(param_1 + 0x23c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar4,&pcStackX_10);
    if (((cVar3 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar6 = DataReader(pcStackX_10,&pcStackX_8);
      uVar7 = DataReader(pcStackX_8,&pcStackX_8);
      local_var_c0 = DataReader(pcStackX_8,&pcStackX_8);
      local_var_c8 = uVar6;
      local_var_c4 = uVar7;
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],&local_var_c8);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x250);
  local_var_5c = *(int32_t *)(param_1 + 0x254);
  local_var_58 = *(int32_t *)(param_1 + 600);
  local_var_54 = *(int32_t *)(param_1 + 0x25c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x240));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x270);
  local_var_5c = *(int32_t *)(param_1 + 0x274);
  local_var_58 = *(int32_t *)(param_1 + 0x278);
  local_var_54 = *(int32_t *)(param_1 + 0x27c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x260));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar6 = DataReader(pcStackX_8,&pcStackX_10);
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],uVar6);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x290);
  local_var_5c = *(int32_t *)(param_1 + 0x294);
  local_var_58 = *(int32_t *)(param_1 + 0x298);
  local_var_54 = *(int32_t *)(param_1 + 0x29c);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x280));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar5 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar5,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      astack_special_x_18[0] = 0;
      DataFormatter(pcStackX_8,param_2[7],astack_special_x_18,0x180be01c0);
      (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],astack_special_x_18);
    }
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x2b0);
  local_var_5c = *(int32_t *)(param_1 + 0x2b4);
  local_var_58 = *(int32_t *)(param_1 + 0x2b8);
  local_var_54 = *(int32_t *)(param_1 + 700);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x2a0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = SystemProcessor4(param_2,astack_special_x_18);
  if (cVar3 != '\0') {
    (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],astack_special_x_18[0]);
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x2d0);
  local_var_5c = *(int32_t *)(param_1 + 0x2d4);
  local_var_58 = *(int32_t *)(param_1 + 0x2d8);
  local_var_54 = *(int32_t *)(param_1 + 0x2dc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x2c0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = SystemProcessor4(param_2,astack_special_x_18);
  if (cVar3 != '\0') {
    (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],astack_special_x_18[0]);
  }
  ResourceCleaner(param_2);
  local_var_60 = *(int32_t *)(param_1 + 0x2f0);
  local_var_5c = *(int32_t *)(param_1 + 0x2f4);
  local_var_58 = *(int32_t *)(param_1 + 0x2f8);
  local_var_54 = *(int32_t *)(param_1 + 0x2fc);
  ResourceAllocator(param_2,*(uint64_t *)(param_1 + 0x2e0));
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  cVar3 = SystemProcessor4(param_2,astack_special_x_18);
  if (cVar3 != '\0') {
    (*(code *)CONCAT44(local_var_54,local_var_58))(param_2[6],astack_special_x_18[0]);
  }
  ResourceCleaner(param_2);
  return param_3 + 0xf;
}
int SystemHelper4(int64_t param_1,uint64_t param_2,int param_3)
{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  char *pcVar4;
  int64_t lVar5;
  char cVar6;
  int64_t in_RAX;
  int64_t *in_RDX;
  void *puVar7;
  int64_t unaff_RBP;
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
  *(int *)(unaff_RBP + 3) = (int)((uint64_t)param_2 >> 0x20);
  *(int32_t *)(unaff_RBP + 7) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + 0xb) = in_XMM1_Dd;
  ResourceAllocator(in_RDX,uVar2);
  piVar3 = (int *)in_RDX[0xb];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  puVar8 = &ui_system_data_1920_ptr;
  *(uint64_t *)(unaff_RBP + 0x67) = 0;
  if ((char)in_RDX[9] != '\0') {
    iVar1 = *(int *)(*in_RDX + 0x10);
    if (iVar1 == 0) {
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x67);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar9 = DataReader(pcVar4,unaff_RBP + 0x67);
      uVar10 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar11 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar9 = DataReader(pcVar4,unaff_RBP + 0x67);
      uVar10 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar11 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x6f);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x6f), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      *(char **)(unaff_RBP + 0x67) = pcVar4;
      uVar9 = DataReader(pcVar4,unaff_RBP + 0x67);
      uVar10 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
      uVar11 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
      puVar7 = &ui_system_data_1920_ptr;
    }
    else {
      puVar7 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar7,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      uVar9 = DataReader(pcVar4,unaff_RBP + 0x6f);
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
      puVar8 = *(void **)(*(int64_t *)(*in_RDX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)in_RDX[5] + 0x10))
                      ((int64_t *)in_RDX[5],puVar8,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar4 = *(char **)(unaff_RBP + 0x67), pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      lVar5 = in_RDX[7];
      *(int32_t *)(unaff_RBP + 0x77) = 0;
      DataFormatter(pcVar4,lVar5,unaff_RBP + 0x77,0x180be01c0);
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
  cVar6 = SystemProcessor4(in_RDX,unaff_RBP + 0x77);
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
  cVar6 = SystemProcessor4(in_RDX,unaff_RBP + 0x77);
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
  cVar6 = SystemProcessor4(in_RDX,unaff_RBP + 0x77);
  if (cVar6 != '\0') {
    (**(code **)(unaff_RBP + 7))(in_RDX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner(in_RDX);
  return param_3 + 0xf;
}
int SystemHelper5(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  char *pcVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R14D;
  uint64_t unaff_R15;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  *(uint64_t *)(unaff_RBP + 0x6f) = unaff_R15;
  cVar7 = (char)unaff_R15;
  if (((((char)unaff_RBX[9] != cVar7) &&
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                          ((int64_t *)unaff_RBX[5],param_2,unaff_RBP + 0x6f), cVar6 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar7)) {
    *(char **)(unaff_RBP + 0x67) = pcVar2;
    uVar8 = DataReader(pcVar2,unaff_RBP + 0x67);
    uVar9 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar10 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar7)))) {
    uVar8 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar7)))) {
    uVar8 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar7)) {
    *(char **)(unaff_RBP + 0x67) = pcVar2;
    uVar8 = DataReader(pcVar2,unaff_RBP + 0x67);
    uVar9 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar10 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x6f), pcVar2 != (char *)0x0 && (*pcVar2 != cVar7)))) {
    *(char **)(unaff_RBP + 0x67) = pcVar2;
    uVar8 = DataReader(pcVar2,unaff_RBP + 0x67);
    uVar9 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
    uVar10 = DataReader(*(uint64_t *)(unaff_RBP + 0x67),unaff_RBP + 0x67);
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
      (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar7)))) {
    uVar8 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
       (cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar6 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar7)) {
    uVar8 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
      unaff_RSI = *(uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x67);
    if (((cVar6 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar7)) {
      lVar3 = unaff_RBX[7];
      *(int *)(unaff_RBP + 0x77) = (int)unaff_R15;
      DataFormatter(pcVar2,lVar3,unaff_RBP + 0x77,0x180be01c0);
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
  cVar7 = SystemProcessor4(uVar8,unaff_RBP + 0x77);
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
  cVar7 = SystemProcessor4(uVar8,unaff_RBP + 0x77);
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
  cVar7 = SystemProcessor4(uVar8,unaff_RBP + 0x77);
  if (cVar7 != '\0') {
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  return unaff_R14D + 0xf;
}
int AdvancedDataProcessor(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  char *pcVar2;
  uint64_t uVar3;
  int *piVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  char cVar8;
  char cVar9;
  int *in_RAX;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R14D;
  uint64_t unaff_R15;
  int32_t uVar10;
  int32_t uVar11;
  *in_RAX = *in_RAX + 1;
  *(uint64_t *)(unaff_RBP + 0x67) = unaff_R15;
  cVar9 = (char)unaff_R15;
  if (((((char)unaff_RBX[9] != cVar9) &&
       (cVar8 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                          ((int64_t *)unaff_RBX[5],param_2,unaff_RBP + 0x67), cVar8 != '\0')) &&
      (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) && (*pcVar2 != cVar9)) {
    uVar10 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
      (cVar8 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))(), cVar8 != '\0')) &&
     ((pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0 && (*pcVar2 != cVar9)))) {
    uVar10 = DataReader(pcVar2,unaff_RBP + 0x6f);
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
      unaff_RSI = *(uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar8 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],unaff_RSI,unaff_RBP + 0x67);
    if (((cVar8 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x67), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != cVar9)) {
      lVar5 = unaff_RBX[7];
      *(int *)(unaff_RBP + 0x77) = (int)unaff_R15;
      DataFormatter(pcVar2,lVar5,unaff_RBP + 0x77,0x180be01c0);
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
  cVar9 = SystemProcessor4(uVar10,unaff_RBP + 0x77);
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
  cVar9 = SystemProcessor4(uVar10,unaff_RBP + 0x77);
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
  cVar9 = SystemProcessor4(uVar10,unaff_RBP + 0x77);
  if (cVar9 != '\0') {
    (**(code **)(unaff_RBP + 7))(unaff_RBX[6],*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  return unaff_R14D + 0xf;
}
int SystemStatusQuerier(void)
{
  int *piVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int *in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int unaff_R14D;
  *in_RAX = *in_RAX + 1;
  cVar5 = SystemProcessor4();
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
  cVar5 = SystemProcessor4();
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
  cVar5 = SystemProcessor4();
  if (cVar5 != '\0') {
    (**(code **)(unaff_RBP + 7))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  return unaff_R14D + 0xf;
}
int SystemResetter(void)
{
  char cVar1;
  int *in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_R14D;
  *in_RAX = *in_RAX + 1;
  cVar1 = SystemProcessor4();
  if (cVar1 != '\0') {
    (**(code **)(unaff_RBP + 7))
              (*(uint64_t *)(unaff_RBX + 0x30),*(int32_t *)(unaff_RBP + 0x77));
  }
  ResourceCleaner();
  return unaff_R14D + 0xf;
}
int DataSyncProcessor(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  char cVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void *puVar9;
  void *puVar10;
  char *pcStackX_8;
  char *pcStackX_10;
  uint astack_special_x_18 [2];
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int32_t *plocal_var_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int8_t local_var_58;
  uint *plocal_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  local_var_f0 = *(int32_t *)(param_1 + 2);
  local_var_ec = *(int32_t *)((int64_t)param_1 + 0x14);
  local_var_e8 = *(int32_t *)(param_1 + 3);
  local_var_e4 = *(int32_t *)((int64_t)param_1 + 0x1c);
  ResourceAllocator(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  local_var_e0 = 0;
  local_var_d8 = 0;
  local_var_d0 = 0;
  local_var_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(&local_var_e0);
  cVar4 = DataProcessor(param_2);
  if (cVar4 != '\0') {
    puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_ec,local_var_f0))(&local_var_128,param_2[6]);
    lStack_98 = param_2[1];
    lStack_78 = param_2[5];
    lStack_68 = param_2[7];
    local_var_148 = *puVar5;
    lStack_60 = param_2[8];
    local_var_144 = puVar5[1];
    local_var_140 = puVar5[2];
    local_var_13c = puVar5[3];
    local_var_138 = puVar5[4];
    local_var_134 = puVar5[5];
    local_var_130 = puVar5[6];
    lStack_a0 = *param_2;
    lStack_80 = param_2[4];
    lStack_90 = param_2[2];
    lStack_88 = param_2[3];
    plocal_var_70 = &local_var_148;
    plocal_var_50 = astack_special_x_18;
    astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
    local_var_48 = 0;
    local_var_40 = 0;
    local_var_58 = 1;
    SystemStatusReporter(&local_var_e0,&lStack_a0,0);
    if ((char)astack_special_x_18[0] != '\0') {
      *(int8_t *)param_2[10] = 1;
    }
    local_var_128 = CONCAT44(local_var_144,local_var_148);
    local_var_120 = CONCAT44(local_var_13c,local_var_140);
    local_var_118 = local_var_138;
    local_var_110 = local_var_130;
    local_var_114 = local_var_134;
    (*(code *)CONCAT44(local_var_e4,local_var_e8))(param_2[6],&local_var_128);
  }
  ResourceCleaner(param_2);
  local_var_f0 = *(int32_t *)(param_1 + 6);
  local_var_ec = *(int32_t *)((int64_t)param_1 + 0x34);
  local_var_e8 = *(int32_t *)(param_1 + 7);
  local_var_e4 = *(int32_t *)((int64_t)param_1 + 0x3c);
  ResourceAllocator(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar10 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
  }
  plVar3 = (int64_t *)param_2[8];
  lVar7 = 0;
  cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar9,&pcStackX_8);
  if ((((cVar4 == '\0') || (pcStackX_10 = pcStackX_8, pcStackX_8 == (char *)0x0)) ||
      (*pcStackX_8 == '\0')) ||
     ((lVar6 = _strtoui64(pcStackX_8,&pcStackX_10,10), lVar7 = 0, lVar6 == 0 ||
      (lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar6), lVar7 != 0)))) {
    (*(code *)CONCAT44(local_var_e4,local_var_e8))(param_2[6],lVar7);
  }
  else {
    uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar8,4,&ui_system_data_1776_ptr,0x6c,&ui_system_data_1584_ptr,lVar6);
  }
  ResourceCleaner(param_2);
  local_var_f0 = *(int32_t *)(param_1 + 10);
  local_var_ec = *(int32_t *)((int64_t)param_1 + 0x54);
  local_var_e8 = *(int32_t *)(param_1 + 0xb);
  local_var_e4 = *(int32_t *)((int64_t)param_1 + 0x5c);
  ResourceAllocator(param_2,param_1[8]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 != 0) {
      puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))
                      ((int64_t *)param_2[5],puVar10,&pcStackX_8);
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      astack_special_x_18[0] = 0;
      DataFormatter(pcStackX_8,param_2[7],astack_special_x_18,0x180be04f0);
      (*(code *)CONCAT44(local_var_e4,local_var_e8))(param_2[6],astack_special_x_18);
    }
  }
  ResourceCleaner(param_2);
  return param_3 + 3;
}
int ConfigValidator(int32_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                 uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                 int32_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                 int32_t param_13)
{
  int iVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char *pcVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  char cVar13;
  int64_t in_RAX;
  int32_t *puVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t *in_RCX;
  void *puVar18;
  int64_t *unaff_RBX;
  int64_t *unaff_RBP;
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
  *(int *)((int64_t)unaff_RBP + -0x74) = (int)((uint64_t)param_2 >> 0x20);
  *(int32_t *)(unaff_RBP + -0xe) = in_XMM1_Dc;
  *(int32_t *)((int64_t)unaff_RBP + -0x6c) = in_XMM1_Dd;
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
    unaff_RBP[1] = (int64_t)&param_6;
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
    unaff_RBP[5] = (int64_t)(unaff_RBP + 0x12);
    SystemStatusReporter(unaff_RBP + -0xd,unaff_RBP + -5,0);
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
  uVar8 = *(int32_t *)((int64_t)in_RCX + 0x34);
  uVar9 = *(int32_t *)(in_RCX + 7);
  uVar10 = *(int32_t *)((int64_t)in_RCX + 0x3c);
  uVar17 = in_RCX[4];
  *(int32_t *)(unaff_RBP + -0xf) = *(int32_t *)(in_RCX + 6);
  *(int32_t *)((int64_t)unaff_RBP + -0x74) = uVar8;
  *(int32_t *)(unaff_RBP + -0xe) = uVar9;
  *(int32_t *)((int64_t)unaff_RBP + -0x6c) = uVar10;
  ResourceAllocator(uVar20,uVar17);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar19 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 == 0) {
    puVar18 = &ui_system_data_1920_ptr;
  }
  else {
    puVar18 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
  }
  plVar6 = (int64_t *)unaff_RBX[8];
  lVar16 = 0;
  cVar13 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                     ((int64_t *)unaff_RBX[5],puVar18,unaff_RBP + 0x10);
  if (cVar13 != '\0') {
    pcVar7 = (char *)unaff_RBP[0x10];
    unaff_RBP[0x11] = (int64_t)pcVar7;
    if ((((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) &&
        (lVar15 = _strtoui64(pcVar7,unaff_RBP + 0x11,10), lVar16 = 0, lVar15 != 0)) &&
       (lVar16 = (**(code **)(*plVar6 + 0x50))(plVar6,lVar15), lVar16 == 0)) {
      uVar17 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar17,4,&ui_system_data_1776_ptr,0x6c,&ui_system_data_1584_ptr);
      goto LAB_1806c7195;
    }
  }
  (*(code *)unaff_RBP[-0xe])(unaff_RBX[6],lVar16);
LAB_1806c7195:
  uVar20 = ResourceCleaner();
  uVar8 = *(int32_t *)((int64_t)in_RCX + 0x54);
  uVar9 = *(int32_t *)(in_RCX + 0xb);
  uVar10 = *(int32_t *)((int64_t)in_RCX + 0x5c);
  uVar17 = in_RCX[8];
  *(int32_t *)(unaff_RBP + -0xf) = *(int32_t *)(in_RCX + 10);
  *(int32_t *)((int64_t)unaff_RBP + -0x74) = uVar8;
  *(int32_t *)(unaff_RBP + -0xe) = uVar9;
  *(int32_t *)((int64_t)unaff_RBP + -0x6c) = uVar10;
  ResourceAllocator(uVar20,uVar17);
  piVar2 = (int *)unaff_RBX[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  unaff_RBP[0x10] = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      puVar19 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar13 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                       ((int64_t *)unaff_RBX[5],puVar19,unaff_RBP + 0x10);
    if (((cVar13 != '\0') && (pcVar7 = (char *)unaff_RBP[0x10], pcVar7 != (char *)0x0)) &&
       (*pcVar7 != '\0')) {
      lVar16 = unaff_RBX[7];
      *(int32_t *)(unaff_RBP + 0x12) = 0;
      DataFormatter(pcVar7,lVar16,unaff_RBP + 0x12,0x180be04f0);
      lVar16 = unaff_RBX[6];
      *(char *)(unaff_RBP + 0x12) = (char)unaff_RBP[0x12];
      (*(code *)unaff_RBP[-0xe])(lVar16,unaff_RBP + 0x12);
    }
  }
  ResourceCleaner();
  return param_3 + 3;
}
int ResourceHandler(int64_t *param_1)
{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t *unaff_R12;
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
                (uVar9,4,&ui_system_data_1776_ptr,0x6c,&ui_system_data_1584_ptr);
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
      unaff_R14 = *(uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x80);
    if (((cVar7 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x80), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != '\0')) {
      lVar8 = unaff_RBX[7];
      *(int32_t *)(unaff_RBP + 0x90) = 0;
      DataFormatter(pcVar2,lVar8,unaff_RBP + 0x90,0x180be04f0);
      lVar8 = unaff_RBX[6];
      *(int8_t *)(unaff_RBP + 0x90) = *(int8_t *)(unaff_RBP + 0x90);
      (**(code **)(unaff_RBP + -0x70))(lVar8,unaff_RBP + 0x90);
    }
  }
  ResourceCleaner();
  return unaff_R13D + 3;
}
int SystemMonitor(void)
{
  int iVar1;
  char *pcVar2;
  int64_t lVar3;
  char cVar4;
  int *in_RAX;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int unaff_R13D;
  uint64_t unaff_R14;
  *in_RAX = *in_RAX + 1;
  *(uint64_t *)(unaff_RBP + 0x80) = 0;
  if ((char)unaff_RBX[9] != '\0') {
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 != 0) {
      unaff_R14 = *(uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                      ((int64_t *)unaff_RBX[5],unaff_R14,unaff_RBP + 0x80);
    if (((cVar4 != '\0') && (pcVar2 = *(char **)(unaff_RBP + 0x80), pcVar2 != (char *)0x0)) &&
       (*pcVar2 != '\0')) {
      lVar3 = unaff_RBX[7];
      *(int32_t *)(unaff_RBP + 0x90) = 0;
      DataFormatter(pcVar2,lVar3,unaff_RBP + 0x90,0x180be04f0);
      lVar3 = unaff_RBX[6];
      *(int8_t *)(unaff_RBP + 0x90) = *(int8_t *)(unaff_RBP + 0x90);
      (**(code **)(unaff_RBP + -0x70))(lVar3,unaff_RBP + 0x90);
    }
  }
  ResourceCleaner();
  return unaff_R13D + 3;
}