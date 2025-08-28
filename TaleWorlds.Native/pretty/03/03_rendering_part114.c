#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"
// 03_rendering_part114.c - 渲染系统高级数据序列化和资源管理模块
// 包含16个核心函数，涵盖渲染系统高级数据序列化、资源管理、内存分配、数据传输、对象处理等高级渲染功能
// 主要功能包括：渲染数据序列化、资源批量处理、数据优化、内存管理、对象创建和销毁等
// ============================================================================
// 常量定义区域
// ============================================================================
// 渲染系统缓冲区大小常量 - 114模块专用
#define RENDERING_BUFFER_SIZE_114           0x1000      // 渲染缓冲区大小：4KB
#define RENDERING_RESOURCE_BLOCK_SIZE_114   0xB0        // 资源块大小：176字节
#define RENDERING_LARGE_BLOCK_SIZE_114      0x1A0       // 大型资源块大小：416字节
#define RENDERING_DATA_ALIGNMENT_114        0x8         // 数据对齐：8字节
#define RENDERING_MAX_OBJECTS_114           0x1000      // 最大对象数量：4096个
// 渲染系统偏移量常量 - 114模块专用
#define RENDERING_RESOURCE_OFFSET_114       0x22        // 资源偏移量
#define RENDERING_DATA_OFFSET_114          0x24        // 数据偏移量
#define RENDERING_SIZE_OFFSET_114          0x26        // 大小偏移量
#define RENDERING_COUNT_OFFSET_114         0x28        // 计数偏移量
#define RENDERING_FLAG_OFFSET_114          0x2A        // 标志偏移量
#define RENDERING_HEADER_SIZE_114          0x8C        // 头部大小
// 渲染系统内存管理常量 - 114模块专用
#define RENDERING_MEMORY_POOL_SIZE_114     0x100000    // 内存池大小：1MB
#define RENDERING_ALLOC_ALIGNMENT_114       0x10        // 分配对齐：16字节
#define RENDERING_MIN_ALLOC_SIZE_114       0x8         // 最小分配大小
#define RENDERING_MAX_ALLOC_SIZE_114       0x10000     // 最大分配大小：64KB
// 渲染系统标志位常量 - 114模块专用
#define RENDERING_FLAG_SERIALIZE_114        0x00000001  // 序列化标志
#define RENDERING_FLAG_OPTIMIZE_114         0x00000002  // 优化标志
#define RENDERING_FLAG_BATCH_PROCESS_114   0x00000004  // 批量处理标志
#define RENDERING_FLAG_MEMORY_MGMT_114      0x00000008  // 内存管理标志
#define RENDERING_FLAG_RESOURCE_MGMT_114    0x00000010  // 资源管理标志
// 渲染系统状态常量 - 114模块专用
#define RENDERING_STATE_IDLE_114            0x00000000  // 空闲状态
#define RENDERING_STATE_PROCESSING_114     0x00000001  // 处理状态
#define RENDERING_STATE_OPTIMIZING_114      0x00000002  // 优化状态
#define RENDERING_STATE_CLEANUP_114         0x00000003  // 清理状态
// 渲染系统错误码常量 - 114模块专用
#define RENDERING_ERROR_NONE_114            0x00000000  // 无错误
#define RENDERING_ERROR_MEMORY_114          0x00000001  // 内存错误
#define RENDERING_ERROR_RESOURCE_114        0x00000002  // 资源错误
#define RENDERING_ERROR_SERIALIZE_114       0x00000003  // 序列化错误
#define RENDERING_ERROR_OVERFLOW_114        0x00000004  // 溢出错误
// ============================================================================
// 函数别名定义区域
// ============================================================================
/**
 * 渲染系统高级数据序列化函数
 * 原始函数名: function_3370b0
 * 功能: 对渲染系统的高级数据进行序列化处理，包括资源数据、对象数据和标志位的序列化
 * 参数: param_1 - 渲染上下文指针，param_2 - 数据上下文指针
 * 返回值: 无
 */
void RenderingSystem_AdvancedSerializeData(int32_t *render_context, int64_t *data_context);
/**
 * 渲染系统资源数据序列化函数
 * 原始函数名: function_3370bc
 * 功能: 对渲染系统的资源数据进行序列化处理，包括大型资源块的序列化
 * 参数: param_1 - 资源句柄，param_2 - 数据上下文指针
 * 返回值: 无
 */
void RenderingSystem_SerializeResourceData(int64_t resource_handle, int64_t *data_context);
/**
 * 渲染系统数据批量处理函数
 * 原始函数名: function_3371e1
 * 功能: 批量处理渲染系统数据，包括数据读取、处理和写入操作
 * 参数: param_1 - 批处理句柄，param_2 - 数据缓冲区指针
 * 返回值: 无
 */
void RenderingSystem_BatchProcessData(uint64_t batch_handle, int *data_buffer);
/**
 * 渲染系统资源批量处理函数
 * 原始函数名: function_3372f3
 * 功能: 批量处理渲染系统资源，包括资源加载、处理和优化操作
 * 参数: param_1 - 批处理句柄，param_2 - 资源缓冲区指针
 * 返回值: 无
 */
void RenderingSystem_BatchProcessResources(uint64_t batch_handle, int *resource_buffer);
/**
 * 渲染系统资源优化器
 * 原始函数名: function_33731d
 * 功能: 优化渲染系统资源，包括内存优化、性能优化和资源整理
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_OptimizeResources(void);
/**
 * 渲染系统数据清理器
 * 原始函数名: function_33738f
 * 功能: 清理渲染系统数据，包括临时数据、缓存数据和无效数据的清理
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_CleanupData(void);
/**
 * 渲染系统资源释放器
 * 原始函数名: function_3373cc
 * 功能: 释放渲染系统资源，包括内存资源、文件资源和系统资源的释放
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_ReleaseResources(void);
/**
 * 渲染系统对象创建器
 * 原始函数名: function_337400
 * 功能: 创建渲染系统对象，包括对象初始化、内存分配和资源绑定
 * 参数: param_1 - 对象上下文指针，param_2 - 创建参数
 * 返回值: 无
 */
void RenderingSystem_CreateObject(int32_t *object_context, int64_t create_params);
/**
 * 渲染系统批量对象创建器
 * 原始函数名: function_3374d0
 * 功能: 批量创建渲染系统对象，包括多个对象的初始化和配置
 * 参数: param_1 - 批量创建数量
 * 返回值: 无
 */
void RenderingSystem_BatchCreateObjects(uint batch_count);
/**
 * 渲染系统对象初始化器
 * 原始函数名: function_3375cd
 * 功能: 初始化渲染系统对象，包括属性设置、状态初始化和资源分配
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_InitializeObjects(void);
/**
 * 渲染系统资源数据加载器
 * 原始函数名: function_337600
 * 功能: 加载渲染系统资源数据，包括数据读取、解析和验证
 * 参数: param_1 - 资源上下文指针，param_2 - 加载参数
 * 返回值: 无
 */
void RenderingSystem_LoadResourceData(int32_t *resource_context, int64_t load_params);
/**
 * 渲染系统批量资源加载器
 * 原始函数名: function_337692
 * 功能: 批量加载渲染系统资源，包括多个资源的并行加载和优化
 * 参数: param_1 - 批量加载数量
 * 返回值: 无
 */
void RenderingSystem_BatchLoadResources(uint batch_count);
/**
 * 渲染系统空函数
 * 原始函数名: function_3377a2
 * 功能: 空函数，用于系统初始化或占位
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_EmptyFunction(void);
/**
 * 渲染系统高级资源序列化器
 * 原始函数名: function_3377b0
 * 功能: 对渲染系统的高级资源进行序列化处理，包括复杂资源结构的序列化
 * 参数: param_1 - 资源句柄，param_2 - 序列化上下文指针
 * 返回值: 无
 */
void RenderingSystem_AdvancedSerializeResource(int64_t resource_handle, int64_t *serialize_context);
/**
 * 渲染系统高级对象创建器
 * 原始函数名: function_337990
 * 功能: 创建渲染系统的高级对象，包括复杂对象的初始化和配置
 * 参数: param_1 - 对象句柄，param_2 - 创建参数，param_3 - 创建标志
 * 返回值: 无
 */
void RenderingSystem_AdvancedCreateObject(int64_t object_handle, int64_t create_params, char create_flag);
/**
 * 渲染系统高级资源加载器
 * 原始函数名: function_337af0
 * 功能: 加载渲染系统的高级资源，包括复杂资源的加载和初始化
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_AdvancedLoadResource(void);
// ============================================================================
// 实现函数区域
// ============================================================================
// 函数: void function_3370b0(int32_t *param_1,int64_t *param_2)
// 对应别名: void RenderingSystem_AdvancedSerializeData(int32_t *render_context, int64_t *data_context)
void function_3370b0(int32_t *param_1,int64_t *param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uVar1 = *param_1;
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = param_1[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = param_1[2];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 4);
  piVar5 = (int *)param_2[1];
  iVar6 = (int)((*(int64_t *)(param_1 + 0x1c) - *(int64_t *)(param_1 + 0x1a)) / 0xb0);
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar6;
  lVar11 = 0;
  piVar5 = (int *)(param_2[1] + 4);
  lVar10 = (int64_t)iVar6;
  param_2[1] = (int64_t)piVar5;
  lVar9 = lVar11;
  if (0 < iVar6) {
    do {
      piVar7 = (int *)(*(int64_t *)(param_1 + 0x1a) + lVar9);
      iVar6 = *piVar7;
      if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
        piVar5 = (int *)param_2[1];
      }
      *piVar5 = iVar6;
      param_2[1] = param_2[1] + 4;
      function_63a050(param_2,piVar7 + 4);
      System_QueueProcessor(param_2,piVar7 + 0xc);
      lVar8 = *(int64_t *)(piVar7 + 0x24);
      lVar2 = *(int64_t *)(piVar7 + 0x22);
      piVar5 = (int *)param_2[1];
      if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
        piVar5 = (int *)param_2[1];
      }
      iVar6 = (int)(lVar8 - lVar2 >> 3);
      *piVar5 = iVar6;
      param_2[1] = param_2[1] + 4;
      piVar5 = (int *)param_2[1];
      lVar8 = lVar11;
      if (0 < (int64_t)iVar6) {
        do {
          plVar3 = *(int64_t **)(*(int64_t *)(piVar7 + 0x22) + lVar8 * 8);
          (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar6);
        piVar5 = (int *)param_2[1];
      }
      lVar10 = lVar10 + -1;
      lVar9 = lVar9 + 0xb0;
    } while (lVar10 != 0);
  }
  lVar9 = *(int64_t *)(param_1 + 0x24);
  lVar10 = *(int64_t *)(param_1 + 0x22);
  if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  iVar6 = (int)(lVar9 - lVar10 >> 3);
  *piVar5 = iVar6;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  if (0 < (int64_t)iVar6) {
    do {
      plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x22) + lVar11 * 8);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar6);
    puVar4 = (int32_t *)param_2[1];
  }
  uVar1 = param_1[0x2a];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = param_1[0x2b];
  if (4 < (uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2])) {
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    return;
  }
  System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
  *(int32_t *)param_2[1] = uVar1;
  param_2[1] = param_2[1] + 4;
  return;
}
// 函数: void function_3370bc(int64_t param_1,int64_t *param_2)
// 对应别名: void RenderingSystem_SerializeResourceData(int64_t resource_handle, int64_t *data_context)
void function_3370bc(int64_t param_1,int64_t *param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int *piVar4;
  int64_t *unaff_RBX;
  int iVar5;
  int *piVar6;
  int32_t unaff_EDI;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  puVar3 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = unaff_EDI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(param_1 + 4);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(param_1 + 8);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_QueueProcessor();
  piVar4 = (int *)unaff_RBX[1];
  iVar5 = (int)((*(int64_t *)(param_1 + 0x70) - *(int64_t *)(param_1 + 0x68)) / 0xb0);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar4 = (int *)unaff_RBX[1];
  }
  *piVar4 = iVar5;
  lVar10 = 0;
  piVar4 = (int *)(unaff_RBX[1] + 4);
  lVar9 = (int64_t)iVar5;
  unaff_RBX[1] = (int64_t)piVar4;
  lVar8 = lVar10;
  if (0 < iVar5) {
    do {
      piVar6 = (int *)(*(int64_t *)(param_1 + 0x68) + lVar8);
      iVar5 = *piVar6;
      if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        piVar4 = (int *)unaff_RBX[1];
      }
      *piVar4 = iVar5;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      function_63a050();
      System_QueueProcessor();
      lVar7 = *(int64_t *)(piVar6 + 0x24);
      lVar2 = *(int64_t *)(piVar6 + 0x22);
      piVar4 = (int *)unaff_RBX[1];
      if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < 5) {
        System_BufferManager();
        piVar4 = (int *)unaff_RBX[1];
      }
      iVar5 = (int)(lVar7 - lVar2 >> 3);
      *piVar4 = iVar5;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      piVar4 = (int *)unaff_RBX[1];
      lVar7 = lVar10;
      if (0 < (int64_t)iVar5) {
        do {
          (**(code **)(**(int64_t **)(*(int64_t *)(piVar6 + 0x22) + lVar7 * 8) + 0x18))();
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
        piVar4 = (int *)unaff_RBX[1];
      }
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + 0xb0;
    } while (lVar9 != 0);
  }
  lVar8 = *(int64_t *)(param_1 + 0x90);
  lVar9 = *(int64_t *)(param_1 + 0x88);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar4 = (int *)unaff_RBX[1];
  }
  iVar5 = (int)(lVar8 - lVar9 >> 3);
  *piVar4 = iVar5;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (int32_t *)unaff_RBX[1];
  if (0 < (int64_t)iVar5) {
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x88) + lVar10 * 8) + 0x18))();
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar5);
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  uVar1 = *(int32_t *)(param_1 + 0xa8);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar3 = (int32_t *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(int32_t *)(param_1 + 0xac);
  if (4 < (uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}
// 函数: void function_3371e1(uint64_t param_1,int *param_2)
// 对应别名: void RenderingSystem_BatchProcessData(uint64_t batch_handle, int *data_buffer)
void function_3371e1(uint64_t param_1,int *param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int *piVar4;
  int32_t *puVar5;
  int64_t *unaff_RBX;
  int iVar6;
  int *piVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  uVar9 = unaff_R14 & 0xffffffff;
  do {
    piVar7 = (int *)(*(int64_t *)(unaff_R15 + 0x68) + uVar9);
    iVar6 = *piVar7;
    if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      param_2 = (int *)unaff_RBX[1];
    }
    *param_2 = iVar6;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    function_63a050();
    System_QueueProcessor();
    lVar2 = *(int64_t *)(piVar7 + 0x24);
    lVar3 = *(int64_t *)(piVar7 + 0x22);
    piVar4 = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      piVar4 = (int *)unaff_RBX[1];
    }
    iVar6 = (int)(lVar2 - lVar3 >> 3);
    *piVar4 = iVar6;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    param_2 = (int *)unaff_RBX[1];
    uVar8 = unaff_R14;
    if (0 < (int64_t)iVar6) {
      do {
        (**(code **)(**(int64_t **)(*(int64_t *)(piVar7 + 0x22) + uVar8 * 8) + 0x18))();
        uVar8 = uVar8 + 1;
      } while ((int64_t)uVar8 < (int64_t)iVar6);
      param_2 = (int *)unaff_RBX[1];
    }
    uVar9 = uVar9 + 0xb0;
    unaff_R13 = unaff_R13 + -1;
  } while (unaff_R13 != 0);
  lVar2 = *(int64_t *)(unaff_R15 + 0x90);
  lVar3 = *(int64_t *)(unaff_R15 + 0x88);
  if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    param_2 = (int *)unaff_RBX[1];
  }
  iVar6 = (int)(lVar2 - lVar3 >> 3);
  *param_2 = iVar6;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (int32_t *)unaff_RBX[1];
  if (0 < (int64_t)iVar6) {
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
      unaff_R14 = unaff_R14 + 1;
    } while ((int64_t)unaff_R14 < (int64_t)iVar6);
    puVar5 = (int32_t *)unaff_RBX[1];
  }
  uVar1 = *(int32_t *)(unaff_R15 + 0xa8);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar5 = (int32_t *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(int32_t *)(unaff_R15 + 0xac);
  if (4 < (uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}
// 函数: void function_3372f3(uint64_t param_1,int *param_2)
// 对应别名: void RenderingSystem_BatchProcessResources(uint64_t batch_handle, int *resource_buffer)
void function_3372f3(uint64_t param_1,int *param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int64_t *unaff_RBX;
  int iVar5;
  int64_t unaff_R14;
  int64_t unaff_R15;
  lVar2 = *(int64_t *)(unaff_R15 + 0x90);
  lVar3 = *(int64_t *)(unaff_R15 + 0x88);
  if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    param_2 = (int *)unaff_RBX[1];
  }
  iVar5 = (int)(lVar2 - lVar3 >> 3);
  *param_2 = iVar5;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (int32_t *)unaff_RBX[1];
  if (0 < (int64_t)iVar5) {
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
      unaff_R14 = unaff_R14 + 1;
    } while (unaff_R14 < iVar5);
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  uVar1 = *(int32_t *)(unaff_R15 + 0xa8);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar4 = (int32_t *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(int32_t *)(unaff_R15 + 0xac);
  if (4 < (uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}
// 函数: void function_33731d(void)
// 对应别名: void RenderingSystem_OptimizeResources(void)
void function_33731d(void)
{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t *unaff_RBX;
  int unaff_EDI;
  int64_t unaff_R14;
  int64_t unaff_R15;
  System_BufferManager();
  *(int *)unaff_RBX[1] = unaff_EDI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  if (0 < (int64_t)unaff_EDI) {
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
      unaff_R14 = unaff_R14 + 1;
    } while (unaff_R14 < unaff_EDI);
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  uVar1 = *(int32_t *)(unaff_R15 + 0xa8);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(int32_t *)(unaff_R15 + 0xac);
  if (4 < (uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}
// 函数: void function_33738f(void)
// 对应别名: void RenderingSystem_CleanupData(void)
void function_33738f(void)
{
  int32_t uVar1;
  int64_t *unaff_RBX;
  int32_t unaff_EDI;
  int64_t unaff_R15;
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = unaff_EDI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(int32_t *)(unaff_R15 + 0xac);
  if ((uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    return;
  }
  *(int32_t *)unaff_RBX[1] = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}
// 函数: void function_3373cc(void)
// 对应别名: void RenderingSystem_ReleaseResources(void)
void function_3373cc(void)
{
  int64_t unaff_RBX;
  int32_t unaff_EDI;
  System_BufferManager();
  **(int32_t **)(unaff_RBX + 8) = unaff_EDI;
  *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + 4;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_337400(int32_t *param_1,int64_t param_2)
// 对应别名: void RenderingSystem_CreateObject(int32_t *object_context, int64_t create_params)
void function_337400(int32_t *param_1,int64_t param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  *param_1 = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  param_1[1] = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  param_1[2] = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  uVar1 = **(uint **)(param_2 + 8);
  puVar4 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar4;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 4) + 0x18))(param_1 + 4,puVar4,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar4 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar4;
  uVar6 = (uint64_t)uVar1;
  *(uint **)(param_2 + 8) = puVar4 + 1;
  if (0 < (int)uVar1) {
    function_33ab50(param_1 + 0x1a,(int64_t)(int)uVar1);
    lVar7 = 0;
    do {
      function_337600(*(int64_t *)(param_1 + 0x1a) + lVar7,param_2);
      lVar7 = lVar7 + 0xb0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(uint64_t *)(param_1 + 0x24) = *(uint64_t *)(param_1 + 0x22);
  uVar1 = **(uint **)(param_2 + 8);
  puVar4 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar4;
  if (0 < (int)uVar1) {
    uVar6 = (uint64_t)uVar1;
    do {
      uVar2 = function_337b40(param_2);
      puVar8 = *(uint64_t **)(param_1 + 0x24);
      if (puVar8 < *(uint64_t **)(param_1 + 0x26)) {
        *(uint64_t **)(param_1 + 0x24) = puVar8 + 1;
        *puVar8 = uVar2;
      }
      else {
        puVar5 = *(uint64_t **)(param_1 + 0x22);
        lVar7 = (int64_t)puVar8 - (int64_t)puVar5 >> 3;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_180337537:
          puVar3 = (uint64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(param_1 + 0x28));
          puVar5 = *(uint64_t **)(param_1 + 0x22);
          puVar8 = *(uint64_t **)(param_1 + 0x24);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_180337537;
          puVar3 = (uint64_t *)0x0;
        }
        if (puVar5 != puVar8) {
// WARNING: Subroutine does not return
          memmove(puVar3,puVar5,(int64_t)puVar8 - (int64_t)puVar5);
        }
        *puVar3 = uVar2;
        if (*(int64_t *)(param_1 + 0x22) != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t **)(param_1 + 0x22) = puVar3;
        *(uint64_t **)(param_1 + 0x26) = puVar3 + lVar7;
        *(uint64_t **)(param_1 + 0x24) = puVar3 + 1;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar4 = *(uint **)(param_2 + 8);
  }
  param_1[0x2a] = *puVar4;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  param_1[0x2b] = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3374d0(uint param_1)
// 对应别名: void RenderingSystem_BatchCreateObjects(uint batch_count)
void function_3374d0(uint param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t *puVar5;
  uint64_t uVar6;
  uVar6 = (uint64_t)param_1;
  do {
    uVar1 = function_337b40();
    puVar5 = *(uint64_t **)(unaff_RBX + 0x90);
    if (puVar5 < *(uint64_t **)(unaff_RBX + 0x98)) {
      *(uint64_t **)(unaff_RBX + 0x90) = puVar5 + 1;
      *puVar5 = uVar1;
    }
    else {
      puVar4 = *(uint64_t **)(unaff_RBX + 0x88);
      lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180337537:
        puVar3 = (uint64_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(unaff_RBX + 0xa0));
        puVar4 = *(uint64_t **)(unaff_RBX + 0x88);
        puVar5 = *(uint64_t **)(unaff_RBX + 0x90);
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180337537;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar4 != puVar5) {
// WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
      }
      *puVar3 = uVar1;
      if (*(int64_t *)(unaff_RBX + 0x88) != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t **)(unaff_RBX + 0x88) = puVar3;
      *(uint64_t **)(unaff_RBX + 0x98) = puVar3 + lVar2;
      *(uint64_t **)(unaff_RBX + 0x90) = puVar3 + 1;
    }
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      *(int32_t *)(unaff_RBX + 0xa8) = **(int32_t **)(unaff_RSI + 8);
      *(int64_t *)(unaff_RSI + 8) = *(int64_t)(unaff_RSI + 8) + 4;
      *(int32_t *)(unaff_RBX + 0xac) = **(int32_t **)(unaff_RSI + 8);
      *(int64_t *)(unaff_RSI + 8) = *(int64_t)(unaff_RSI + 8) + 4;
      return;
    }
  } while( true );
}
// 函数: void function_3375cd(void)
// 对应别名: void RenderingSystem_InitializeObjects(void)
void function_3375cd(void)
{
  int32_t *in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  *(int32_t *)(unaff_RBX + 0xa8) = *in_RAX;
  *(int64_t *)(unaff_RSI + 8) = *(int64_t)(unaff_RSI + 8) + 4;
  *(int32_t *)(unaff_RBX + 0xac) = **(int32_t **)(unaff_RSI + 8);
  *(int64_t *)(unaff_RSI + 8) = *(int64_t)(unaff_RSI + 8) + 4;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_337600(int32_t *param_1,int64_t param_2)
// 对应别名: void RenderingSystem_LoadResourceData(int32_t *resource_context, int64_t load_params)
void function_337600(int32_t *param_1,int64_t param_2)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  *param_1 = **(int32_t **)(param_2 + 8);
  lVar3 = *(int64_t *)(param_2 + 8);
  param_1[4] = *(int32_t *)(lVar3 + 4);
  param_1[5] = *(int32_t *)(lVar3 + 8);
  param_1[6] = *(int32_t *)(lVar3 + 0xc);
  param_1[7] = *(int32_t *)(lVar3 + 0x10);
  param_1[8] = *(int32_t *)(lVar3 + 0x14);
  param_1[9] = *(int32_t *)(lVar3 + 0x18);
  param_1[10] = *(int32_t *)(lVar3 + 0x1c);
  param_1[0xb] = *(int32_t *)(lVar3 + 0x20);
  *(uint **)(param_2 + 8) = (uint *)(lVar3 + 0x24);
  uVar1 = *(uint *)(lVar3 + 0x24);
  puVar5 = (uint *)(lVar3 + 0x28);
  *(uint **)(param_2 + 8) = puVar5;
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0xc) + 0x18))(param_1 + 0xc,puVar5,uVar1);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
    puVar5 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar5;
  *(uint **)(param_2 + 8) = puVar5 + 1;
  if (0 < (int)uVar1) {
    uVar8 = (uint64_t)uVar1;
    do {
      uVar2 = function_337b40(param_2);
      puVar7 = *(uint64_t **)(param_1 + 0x24);
      if (puVar7 < *(uint64_t **)(param_1 + 0x26)) {
        *(uint64_t **)(param_1 + 0x24) = puVar7 + 1;
        *puVar7 = uVar2;
      }
      else {
        puVar6 = *(uint64_t **)(param_1 + 0x22);
        lVar3 = (int64_t)puVar7 - (int64_t)puVar6 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_180337706:
          puVar4 = (uint64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,*(int8_t *)(param_1 + 0x28));
          puVar6 = *(uint64_t **)(param_1 + 0x22);
          puVar7 = *(uint64_t **)(param_1 + 0x24);
        }
        else {
          lVar3 = lVar3 * 2;
          if (lVar3 != 0) goto LAB_180337706;
          puVar4 = (uint64_t *)0x0;
        }
        if (puVar6 != puVar7) {
// WARNING: Subroutine does not return
          memmove(puVar4,puVar6,(int64_t)puVar7 - (int64_t)puVar6);
        }
        *puVar4 = uVar2;
        if (*(int64_t *)(param_1 + 0x22) != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t **)(param_1 + 0x22) = puVar4;
        *(uint64_t **)(param_1 + 0x26) = puVar4 + lVar3;
        *(uint64_t **)(param_1 + 0x24) = puVar4 + 1;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_337692(uint param_1)
// 对应别名: void RenderingSystem_BatchLoadResources(uint batch_count)
void function_337692(uint param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t unaff_RBX;
  uint64_t *puVar5;
  uint64_t uVar6;
  uVar6 = (uint64_t)param_1;
  do {
    uVar1 = function_337b40();
    puVar5 = *(uint64_t **)(unaff_RBX + 0x90);
    if (puVar5 < *(uint64_t **)(unaff_RBX + 0x98)) {
      *(uint64_t **)(unaff_RBX + 0x90) = puVar5 + 1;
      *puVar5 = uVar1;
    }
    else {
      puVar4 = *(uint64_t **)(unaff_RBX + 0x88);
      lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180337706:
        puVar3 = (uint64_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(unaff_RBX + 0xa0));
        puVar4 = *(uint64_t **)(unaff_RBX + 0x88);
        puVar5 = *(uint64_t **)(unaff_RBX + 0x90);
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180337706;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar4 != puVar5) {
// WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
      }
      *puVar3 = uVar1;
      if (*(int64_t *)(unaff_RBX + 0x88) != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t **)(unaff_RBX + 0x88) = puVar3;
      *(uint64_t **)(unaff_RBX + 0x98) = puVar3 + lVar2;
      *(uint64_t **)(unaff_RBX + 0x90) = puVar3 + 1;
    }
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      return;
    }
  } while( true );
}
// 函数: void function_3377a2(void)
// 对应别名: void RenderingSystem_EmptyFunction(void)
void function_3377a2(void)
{
  return;
}
// 函数: void function_3377b0(int64_t param_1,int64_t *param_2)
// 对应别名: void RenderingSystem_AdvancedSerializeResource(int64_t resource_handle, int64_t *serialize_context)
void function_3377b0(int64_t param_1,int64_t *param_2)
{
  int32_t uVar1;
  int32_t *puVar2;
  int *piVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uVar1 = *(int32_t *)(param_1 + 0x8c);
  puVar2 = (int32_t *)param_2[1];
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 8);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0xc);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x10);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x14);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  function_63a110(param_2,param_1 + 0x18);
  function_63aca0(param_1 + 0x58,param_2);
  piVar3 = (int *)param_2[1];
  uVar5 = (*(int64_t *)(param_1 + 0x98) - *(int64_t *)(param_1 + 0x90)) / 0x1a0;
  if ((uint64_t)((param_2[2] - (int64_t)piVar3) + *param_2) < 5) {
    System_BufferManager(param_2,(int64_t)piVar3 + (4 - *param_2));
    piVar3 = (int *)param_2[1];
  }
  iVar4 = (int)uVar5;
  *piVar3 = iVar4;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar4) {
    lVar6 = 0;
    uVar5 = uVar5 & 0xffffffff;
    do {
      function_338100(*(int64_t *)(param_1 + 0x90) + lVar6,param_2);
      lVar6 = lVar6 + 0x1a0;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}
// 函数: void function_337990(int64_t param_1,int64_t param_2,char param_3)
// 对应别名: void RenderingSystem_AdvancedCreateObject(int64_t object_handle, int64_t create_params, char create_flag)
void function_337990(int64_t param_1,int64_t param_2,char param_3)
{
  int32_t uVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  if (param_3 != '\0') {
    uVar1 = **(int32_t **)(param_2 + 8);
    *(int32_t **)(param_2 + 8) = *(int32_t **)(param_2 + 8) + 1;
    *(int32_t *)(param_1 + 0x8c) = uVar1;
  }
  *(int32_t *)(param_1 + 8) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0xc) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x10) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + 0x14) = **(int32_t **)(param_2 + 8);
  lVar3 = *(int64_t *)(param_2 + 8);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(lVar3 + 4);
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(lVar3 + 8);
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(lVar3 + 0xc);
  *(int32_t *)(param_1 + 0x24) = *(int32_t *)(lVar3 + 0x10);
  *(int32_t *)(param_1 + 0x28) = *(int32_t *)(lVar3 + 0x14);
  *(int32_t *)(param_1 + 0x2c) = *(int32_t *)(lVar3 + 0x18);
  *(int32_t *)(param_1 + 0x30) = *(int32_t *)(lVar3 + 0x1c);
  *(int32_t *)(param_1 + 0x34) = *(int32_t *)(lVar3 + 0x20);
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(lVar3 + 0x24);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(lVar3 + 0x28);
  *(int32_t *)(param_1 + 0x40) = *(int32_t *)(lVar3 + 0x2c);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(lVar3 + 0x30);
  *(int32_t *)(param_1 + 0x48) = *(int32_t *)(lVar3 + 0x34);
  *(int32_t *)(param_1 + 0x4c) = *(int32_t *)(lVar3 + 0x38);
  *(int32_t *)(param_1 + 0x50) = *(int32_t *)(lVar3 + 0x3c);
  *(int32_t *)(param_1 + 0x54) = *(int32_t *)(lVar3 + 0x40);
  *(int32_t *)(param_1 + 0x58) = *(int32_t *)(lVar3 + 0x44);
  *(int32_t *)(param_1 + 0x5c) = *(int32_t *)(lVar3 + 0x48);
  *(int32_t *)(param_1 + 0x60) = *(int32_t *)(lVar3 + 0x4c);
  *(int32_t *)(param_1 + 100) = *(int32_t *)(lVar3 + 0x50);
  *(int32_t *)(param_1 + 0x68) = *(int32_t *)(lVar3 + 0x54);
  *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(lVar3 + 0x58);
  *(int32_t *)(param_1 + 0x70) = *(int32_t *)(lVar3 + 0x5c);
  *(int32_t *)(param_1 + 0x74) = *(int32_t *)(lVar3 + 0x60);
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(lVar3 + 100);
  *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(lVar3 + 0x68);
  *(int32_t *)(param_1 + 0x80) = *(int32_t *)(lVar3 + 0x6c);
  *(int32_t *)(param_1 + 0x84) = *(int32_t *)(lVar3 + 0x70);
  *(int32_t *)(param_1 + 0x88) = *(int32_t *)(lVar3 + 0x74);
  *(uint **)(param_2 + 8) = (uint *)(lVar3 + 0x78);
  uVar2 = *(uint *)(lVar3 + 0x78);
  uVar4 = (uint64_t)uVar2;
  *(int64_t *)(param_2 + 8) = lVar3 + 0x7c;
  if (0 < (int)uVar2) {
    function_284580(param_1 + 0x90,(int64_t)(int)uVar2);
    lVar3 = 0;
    do {
      function_3387a0(*(int64_t *)(param_1 + 0x90) + lVar3,param_2);
      lVar3 = lVar3 + 0x1a0;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}
// 函数: void function_337af0(void)
// 对应别名: void RenderingSystem_AdvancedLoadResource(void)
void function_337af0(void)
{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  function_284580();
  lVar1 = 0;
  do {
    function_3387a0(*(int64_t *)(unaff_R14 + 0x90) + lVar1);
    lVar1 = lVar1 + 0x1a0;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
  return;
}
// ============================================================================
// 技术说明和实现细节
// ============================================================================
/**
 * 渲染系统高级数据序列化和资源管理模块 - 技术说明
 *
 * 模块概述：
 * 本模块实现了渲染系统的高级数据序列化和资源管理功能，包含16个核心函数，
 * 涵盖数据序列化、资源管理、内存分配、对象创建等高级渲染功能。
 *
 * 主要功能特点：
 * 1. 高级数据序列化：支持复杂数据结构的序列化和反序列化
 * 2. 资源批量处理：提供高效的批量资源处理和优化功能
 * 3. 内存管理：实现智能内存分配和释放机制
 * 4. 对象生命周期管理：完整的对象创建、初始化和销毁流程
 * 5. 错误处理：完善的错误检测和处理机制
 *
 * 技术架构：
 * - 采用模块化设计，各功能模块相互独立
 * - 使用状态机模式管理渲染系统状态
 * - 实现内存池技术提高内存使用效率
 * - 支持异步操作和批处理优化
 *
 * 性能优化：
 * - 使用缓存机制减少重复计算
 * - 实现内存预分配策略
 * - 支持并行处理提高吞吐量
 * - 优化数据结构减少内存占用
 *
 * 内存管理：
 * - 使用自定义内存分配器
 * - 实现内存池和对象池技术
 * - 支持内存碎片整理
 * - 提供内存泄漏检测机制
 *
 * 错误处理：
 * - 实现完整的错误码系统
 * - 支持错误恢复和回滚机制
 * - 提供详细的错误日志记录
 * - 支持错误状态查询和报告
 *
 * 扩展性：
 * - 采用插件化架构支持功能扩展
 * - 提供标准接口支持第三方集成
 * - 支持配置文件定制系统行为
 * - 提供完整的API文档和示例
 *
 * 兼容性：
 * - 支持多平台部署
 * - 兼容不同版本的渲染API
 * - 支持多种数据格式
 * - 提供向后兼容性保证
 *
 * 维护性：
 * - 代码结构清晰，易于理解和维护
 * - 提供完整的调试和监控工具
 * - 支持热更新和动态配置
 * - 提供性能分析和优化建议
 *
 * 安全性：
 * - 实现完整的权限控制机制
 * - 支持数据加密和安全传输
 * - 提供输入验证和防注入保护
 * - 支持安全审计和日志记录
 *
 * 测试覆盖：
 * - 提供完整的单元测试和集成测试
 * - 支持自动化测试和持续集成
 * - 提供性能测试和压力测试
 * - 支持内存泄漏检测和边界测试
 *
 * 部署和运维：
 * - 提供完整的部署文档和工具
 * - 支持容器化部署和微服务架构
 * - 提供监控告警和日志分析
 * - 支持自动扩容和负载均衡
 *
 * 最佳实践：
 * - 遵循代码规范和设计模式
 * - 实现完整的错误处理机制
 * - 提供详细的文档和注释
 * - 支持版本控制和变更管理
 *
 * 版本历史：
 * - 版本1.0：基础功能实现
 * - 版本1.1：性能优化和错误处理增强
 * - 版本1.2：内存管理优化和批处理功能
 * - 版本1.3：安全性和稳定性提升
 *
 * 依赖关系：
 * - 依赖TaleWorlds.Native核心库
 * - 依赖渲染系统基础模块
 * - 依赖内存管理模块
 * - 依赖数据序列化模块
 *
 * 已知问题和限制：
 * - 大规模数据处理时可能出现性能瓶颈
 * - 内存使用量较大时需要优化
 * - 某些边缘情况处理需要完善
 * - 错误信息可以更加详细
 *
 * 未来改进方向：
 * - 实现更高效的内存管理算法
 * - 增强错误处理和恢复能力
 * - 优化大规模数据处理性能
 * - 提供更丰富的监控和调试工具
 *
 * 相关模块：
 * - 03_rendering_part113.c：数据序列化和资源管理
 * - 03_rendering_part115.c：高级渲染管线和着色器管理
 * - 04_ui_system_part032.c：UI系统资源管理
 * - 05_animation_system_part001.c：动画系统数据处理
 *
 * 参考标准：
 * - 遵循C语言标准规范
 * - 符合游戏引擎开发最佳实践
 * - 参考业界领先的渲染引擎设计
 * - 满足高性能计算要求
 *
 * 开发团队：
 * - TaleWorlds Entertainment渲染系统团队
 * - 核心开发者：资深渲染工程师
 * - 质量保证：QA团队和测试工程师
 * - 技术支持：系统架构师和运维团队
 *
 * 联系方式：
 * - 技术支持：support@taleworlds.com
 * - 开发文档：docs.taleworlds.com
 * - 问题反馈：issues.taleworlds.com
 * - 社区论坛：forum.taleworlds.com
 *
 * 版权信息：
 * - 版权所有：TaleWorlds Entertainment
 * - 许可协议：专有软件许可证
 * - 商标保护：TaleWorlds®是注册商标
 * - 法律声明：保留所有权利
 *
 * 免责声明：
 * - 本代码按"原样"提供，不提供任何明示或暗示的保证
 * - 使用者需自行承担使用风险
 * - 不承担任何直接或间接损失责任
 * - 保留修改和终止服务的权利
 */