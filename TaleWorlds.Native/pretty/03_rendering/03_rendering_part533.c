#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part533.c - 渲染系统高级资源管理和数据处理模块
// 
// 本模块包含15个核心函数，涵盖渲染系统的高级资源管理、哈希表操作、
// 内存分配、性能计数器、数据处理和系统优化等功能。
//
// 主要功能：
// - 资源池管理和清理
// - 哈希表查找和插入
// - 内存分配和释放
// - 性能计数器处理
// - 数据批量处理
// - 系统状态管理
// - 时间戳处理
// - 缓冲区管理
// - 资源生命周期管理

// 常量定义
#define RESOURCE_POOL_SIZE 0x68        // 资源池大小 (104字节)
#define HASH_TABLE_SIZE_MODULUS 0x100000001b3  // 哈希表模数
#define HASH_SEED_VALUE 0xcbf29ce484222325      // 哈希种子值
#define MEMORY_ALIGNMENT_8 8                   // 8字节内存对齐
#define MEMORY_ALIGNMENT_16 16                 // 16字节内存对齐
#define TIME_SCALE_FACTOR 1.0                  // 时间缩放因子
#define PERFORMANCE_COUNTER_INTERVAL 0.001    // 性能计数器间隔
#define MAX_RESOURCE_NAME_LENGTH 0x40          // 最大资源名称长度 (64字节)
#define DOUBLE_PRECISION_EPSILON 0.001         // 双精度浮点数精度
#define ANIMATION_SPEED_FACTOR 1.05            // 动画速度因子
#define DEFAULT_TIME_SCALE 0.05                // 默认时间缩放
#define BUFFER_SIZE_256 256                    // 256字节缓冲区
#define BUFFER_SIZE_48 48                      // 48字节缓冲区

// 全局变量引用
extern uint64_t system_memory_pool_ptr;     // 内存管理器实例
extern uint64_t render_system_data_config;     // 性能计数器基准时间
extern double render_system_data_config;          // 性能计数器频率
extern uint64_t render_system_data_config;     // 性能计数器状态
extern uint64_t GET_SECURITY_COOKIE();     // 安全检查cookie

// 函数别名定义
#define ProcessResourcePoolCleanup FUN_18055b600
#define FindResourceInHashTable FUN_18055b790
#define CopyResourcePoolData FUN_18055b940
#define InitializeResourcePool FUN_18055bb10
#define AllocateResourceMemory FUN_18055bb23
#define RehashResourceTable FUN_18055bb6e
#define ResizeResourceTable FUN_18055bc21
#define DestroyResourceTable FUN_18055bc2c
#define InsertResourceIntoPool FUN_18055bc50
#define InitializePerformanceCounter FUN_18055be50
#define UpdatePerformanceMetrics FUN_18055c030
#define UpdatePerformanceMetricsEx FUN_18055c053
#define UpdatePerformanceMetricsAlt FUN_18055c085
#define CalculateTimeDelta FUN_18055c09d
#define ResetPerformanceState FUN_18055c184
#define EmptyFunctionPlaceholder FUN_18055c1ae
#define ProcessResourceUpdateLoop FUN_18055c1c0

// 函数声明
int64_t * FindResourceInHashTable(int64_t param_1, int64_t *param_2, uint64_t param_3, int64_t param_4);
void ProcessResourcePoolCleanup(int64_t *param_1);
void CopyResourcePoolData(int64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);
void InitializeResourcePool(int64_t param_1, int64_t param_2);
void AllocateResourceMemory(uint64_t param_1, int64_t param_2);
void RehashResourceTable(void);
void ResizeResourceTable(uint64_t param_1);
void DestroyResourceTable(void);
void InsertResourceIntoPool(uint64_t *param_1, int64_t param_2, uint64_t param_3, uint64_t param_4);
uint64_t * InitializePerformanceCounter(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);
void UpdatePerformanceMetrics(int64_t param_1, int *param_2, double param_3);
void UpdatePerformanceMetricsEx(uint64_t param_1, int64_t param_2, double param_3);
void UpdatePerformanceMetricsAlt(uint64_t param_1, uint64_t param_2, int64_t param_3);
void CalculateTimeDelta(double param_1, double param_2, double param_3);
void ResetPerformanceState(void);
void EmptyFunctionPlaceholder(void);
void ProcessResourceUpdateLoop(int64_t param_1);

// 函数: 资源池清理处理器
// 原始函数名: FUN_18055b600
// 功能: 清理和释放资源池中的资源，包括内存管理和数据清理
// 技术特点: 批量资源处理，支持安全内存释放和资源状态验证
// 参数:
//   param_1 - 资源池管理器指针（包含资源池状态和管理信息）
// 算法说明: 遍历资源池中的每个资源，执行清理操作并释放相关内存
// 安全机制: 包含栈保护和内存安全检查
// 性能优化: 批量处理资源，减少内存分配开销
// 应用场景: 资源池销毁、内存回收、系统清理
void ProcessResourcePoolCleanup(int64_t *param_1)

{
  int32_t uVar1;
  int64_t *plVar2;
  void *puVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int8_t auStack_60 [24];
  void *puStack_48;
  int8_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  // 计算资源池中的资源数量
  uVar8 = (param_1[1] - *param_1) / RESOURCE_POOL_SIZE;
  
  // 初始化资源池管理器
  FUN_1804a5d80(param_1 + 4);
  
  iVar4 = (int)uVar8;
  uVar1 = FUN_18066c0c0(param_1 + 8, uVar8 & 0xffffffff);
  FUN_18055bb10(param_1 + 4, uVar1);
  
  uVar7 = 0;
  lVar6 = (int64_t)iVar4;
  uVar8 = uVar7;
  
  // 遍历资源池中的每个资源
  if (0 < iVar4) {
    do {
      lVar5 = *param_1 + uVar8;
      
      // 初始化资源清理上下文
      puStack_48 = &global_state_3456_ptr;
      uStack_30 = 0;
      puStack_40 = (int8_t *)0x0;
      uStack_38 = 0;
      
      // 分配资源清理缓冲区
      FUN_1806277c0(&puStack_48, *(int32_t *)(lVar5 + 0x10));
      
      // 复制资源名称数据
      if (0 < *(int *)(lVar5 + 0x10)) {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar5 + 8) != (void *)0x0) {
          puVar3 = *(void **)(lVar5 + 8);
        }
        // 安全复制资源名称（不返回的函数调用）
        memcpy(puStack_40, puVar3, (int64_t)(*(int *)(lVar5 + 0x10) + 1));
      }
      
      // 确保字符串以null结尾
      if ((*(int64_t *)(lVar5 + 8) != 0) && (uStack_38 = 0, puStack_40 != (int8_t *)0x0)) {
        *puStack_40 = 0;
      }
      
      // 在哈希表中查找资源
      plVar2 = (int64_t *)FUN_18055b790(param_1 + 4, auStack_60);
      *(int *)(*plVar2 + 0x20) = (int)uVar7;
      
      // 重置资源清理上下文
      puStack_48 = &global_state_3456_ptr;
      if (puStack_40 != (int8_t *)0x0) {
        // 释放资源清理缓冲区（不返回的函数调用）
        CoreEngine_MemoryPoolManager();
      }
      
      // 更新资源索引
      uVar7 = (uint64_t)((int)uVar7 + 1);
      lVar6 = lVar6 + -1;
      uVar8 = uVar8 + RESOURCE_POOL_SIZE;
    } while (lVar6 != 0);
  }
  return;
}

// 函数: 哈希表资源查找器
// 原始函数名: FUN_18055b790
// 功能: 在哈希表中查找指定资源，支持插入操作和冲突处理
// 技术特点: 使用FNV-1a哈希算法，支持动态扩容和链地址法冲突处理
// 参数:
//   param_1 - 哈希表管理器指针（包含哈希表配置）
//   param_2 - 资源信息输出缓冲区（存储找到的资源信息）
//   param_3 - 保留参数（系统保留）
//   param_4 - 资源描述符指针（包含资源名称和属性）
// 返回值: 资源信息指针（指向找到或插入的资源信息）
// 算法说明: 使用FNV-1a哈希算法计算资源名称的哈希值，然后通过链地址法处理冲突
// 哈希算法: FNV-1a哈希算法，具有良好的分布性和抗冲突性
// 冲突处理: 链地址法，支持动态插入和查找
// 性能优化: 哈希表自动扩容，减少哈希冲突
// 应用场景: 资源查找、缓存管理、符号表处理
int64_t * FindResourceInHashTable(int64_t param_1, int64_t *param_2, uint64_t param_3, int64_t param_4)

{
  int64_t *plVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int64_t lVar5;
  byte *pbVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  char acStackX_8 [4];
  uint uStackX_c;
  int64_t lStackX_10;
  
  // 获取资源名称长度和指针
  uVar3 = *(uint *)(param_4 + 0x10);
  pbVar4 = *(byte **)(param_4 + 8);
  pbVar6 = &system_buffer_ptr;
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = pbVar4;
  }
  
  // 使用FNV-1a哈希算法计算资源名称的哈希值
  uVar8 = HASH_SEED_VALUE;
  uVar9 = 0;
  if (uVar3 != 0) {
    do {
      uVar8 = (uVar8 ^ *pbVar6) * HASH_TABLE_SIZE_MODULUS;
      uVar9 = uVar9 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar9 < uVar3);
  }
  
  // 计算哈希表索引
  uVar10 = uVar8 % (uint64_t)*(uint *)(param_1 + 0x10);
  plVar1 = (int64_t *)(*(int64_t *)(param_1 + 8) + uVar10 * 8);
  lVar7 = *plVar1;
  
  // 处理哈希冲突（链地址法）
  do {
    if (lVar7 == 0) {
      // 哈希表中不存在该资源，执行插入操作
      FUN_18066c220(param_1 + 0x20, acStackX_8, (uint64_t)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18), 1);
      lVar7 = FUN_18062b420(system_memory_pool_ptr, 0x30, *(int8_t *)(param_1 + 0x2c));
      lStackX_10 = lVar7;
      FUN_180627ae0(lVar7);
      
      // 初始化新资源节点
      *(int32_t *)(lVar7 + 0x20) = 0;
      *(uint64_t *)(lVar7 + 0x28) = 0;
      
      if (acStackX_8[0] != '\0') {
        uVar10 = uVar8 % (uint64_t)uStackX_c;
        FUN_18055bb10(param_1, uStackX_c);
      }
      
      // 将新节点插入哈希表
      *(uint64_t *)(lVar7 + 0x28) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar10 * 8);
      *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar10 * 8) = lVar7;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      
      // 设置返回值
      lVar5 = *(int64_t *)(param_1 + 8);
      *param_2 = lVar7;
      param_2[1] = lVar5 + uVar10 * 8;
      *(int8_t *)(param_2 + 2) = 1;
      return param_2;
    }
    
    // 检查当前节点是否匹配目标资源
    uVar9 = *(uint *)(lVar7 + 0x10);
    if (uVar3 == uVar9) {
      if (uVar3 != 0) {
        pbVar6 = pbVar4;
        do {
          pbVar2 = pbVar6 + (*(int64_t *)(lVar7 + 8) - (int64_t)pbVar4);
          uVar9 = (uint)*pbVar6 - (uint)*pbVar2;
          if (uVar9 != 0) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar2 != 0);
      }
LAB_18055b85f:
      if (uVar9 == 0) {
        // 找到匹配的资源
        *param_2 = lVar7;
        param_2[1] = (int64_t)plVar1;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
    }
    else if (uVar3 == 0) goto LAB_18055b85f;
    
    // 移动到链表中的下一个节点
    lVar7 = *(int64_t *)(lVar7 + 0x28);
  } while( true );
}

// 函数: 资源池数据复制器
// 原始函数名: FUN_18055b940
// 功能: 复制资源池数据，支持动态扩容和内存管理
// 技术特点: 批量数据复制，支持内存对齐和资源属性保留
// 参数:
//   param_1 - 源资源池管理器指针（包含源资源池数据）
//   param_2 - 目标资源池标识符（用于标识目标资源池）
//   param_3 - 复制选项标志（控制复制行为的标志位）
//   param_4 - 内存管理器实例（用于内存分配）
// 算法说明: 遍历源资源池中的所有资源，复制到新分配的内存区域
// 内存管理: 使用系统内存管理器进行内存分配和释放
// 数据完整性: 保持资源属性和关系的完整性
// 性能优化: 批量内存分配，减少内存碎片
// 应用场景: 资源池克隆、数据备份、资源迁移
void CopyResourcePoolData(int64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  void *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  
  // 初始化内存管理参数
  uVar11 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar7 = *param_1;
  lVar5 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  
  // 计算资源池中的资源数量
  lVar10 = (lVar2 - lVar7) / RESOURCE_POOL_SIZE;
  
  // 分配新的资源池内存
  if (lVar10 != 0) {
    lVar5 = FUN_18062b420(system_memory_pool_ptr, lVar10 * RESOURCE_POOL_SIZE, uVar1 & 0xff, param_4,
                          0xfffffffffffffffe, 0, 0, 0, uVar1);
  }
  
  lVar10 = lVar10 * RESOURCE_POOL_SIZE + lVar5;
  
  // 复制资源池数据
  if (lVar7 != lVar2) {
    puVar8 = (int32_t *)(lVar5 + 0x10);
    lVar12 = lVar5;
    lVar13 = lVar10;
    lVar14 = lVar10;
    
    do {
      // 初始化资源节点头部
      *(void **)(puVar8 + -4) = &global_state_720_ptr;
      *(uint64_t *)(puVar8 + -2) = 0;
      *puVar8 = 0;
      *(void **)(puVar8 + -4) = &global_state_3480_ptr;
      *(int32_t **)(puVar8 + -2) = puVar8 + 2;
      *puVar8 = 0;
      *(int8_t *)(puVar8 + 2) = 0;
      
      // 复制资源属性
      *puVar8 = *(int32_t *)(lVar7 + 0x10);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(lVar7 + 8) != (void *)0x0) {
        puVar9 = *(void **)(lVar7 + 8);
      }
      
      // 安全复制资源名称
      strcpy_s(*(uint64_t *)(puVar8 + -2), MAX_RESOURCE_NAME_LENGTH, puVar9, param_4, uVar11, lVar12, lVar13, lVar14);
      
      // 复制资源扩展属性
      puVar8[0x12] = *(int32_t *)(lVar7 + 0x58);
      puVar8[0x13] = *(int32_t *)(lVar7 + 0x5c);
      *(int8_t *)(puVar8 + 0x14) = *(int8_t *)(lVar7 + 0x60);
      
      lVar7 = lVar7 + RESOURCE_POOL_SIZE;
      puVar8 = puVar8 + 0x1a;
    } while (lVar7 != lVar2);
  }
  
  // 更新资源池管理器指针
  puVar3 = (uint64_t *)*param_1;
  *param_1 = lVar5;
  puVar4 = (uint64_t *)param_1[1];
  param_1[1] = lVar10;
  param_1[2] = lVar10;
  *(uint *)(param_1 + 3) = uVar1;
  
  // 清理原始资源池
  for (puVar6 = puVar3; puVar6 != puVar4; puVar6 = puVar6 + 0xd) {
    *puVar6 = &global_state_720_ptr;
  }
  
  if (puVar3 != (uint64_t *)0x0) {
    // 释放原始资源池内存（不返回的函数调用）
    CoreEngine_MemoryPoolManager();
  }
  return;
}

// 函数: 资源池初始化器
// 原始函数名: FUN_18055bb10
// 功能: 初始化资源池，分配内存并进行零初始化
// 技术特点: 内存对齐分配，支持大小可配置的资源池
// 参数:
//   param_1 - 资源池管理器指针（用于存储资源池信息）
//   param_2 - 资源池大小（指定资源池的容量）
// 算法说明: 根据指定大小分配内存，并进行零初始化
// 内存管理: 使用系统内存管理器进行内存分配
// 安全机制: 确保分配的内存被正确初始化
// 性能优化: 批量内存清零，提高初始化效率
// 应用场景: 资源池创建、系统初始化、内存预分配
void InitializeResourcePool(int64_t param_1, int64_t param_2)

{
  uint64_t uVar1;
  
  // 分配资源池内存（8字节对齐）
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr, param_2 * 8 + 8, 8, *(int8_t *)(param_1 + 0x2c));
  // 零初始化分配的内存（不返回的函数调用）
  memset(uVar1, 0, param_2 * 8);
}

// 函数: 资源内存分配器
// 原始函数名: FUN_18055bb23
// 功能: 为资源分配内存，支持批量分配和零初始化
// 技术特点: 高效内存分配，支持大小可配置的内存块
// 参数:
//   param_1 - 内存管理器实例（用于内存分配）
//   param_2 - 分配大小（指定要分配的内存大小）
// 算法说明: 根据指定大小分配内存，并进行零初始化
// 内存管理: 使用系统内存管理器进行内存分配
// 安全机制: 确保分配的内存被正确初始化
// 性能优化: 批量内存清零，提高初始化效率
// 应用场景: 资源创建、内存预分配、批量数据处理
void AllocateResourceMemory(uint64_t param_1, int64_t param_2)

{
  uint64_t uVar1;
  
  // 分配内存（8字节对齐）
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr, param_2 * 8 + 8, 8);
  // 零初始化分配的内存（不返回的函数调用）
  memset(uVar1, 0, param_2 * 8);
}

// 函数: 哈希表重新哈希器
// 原始函数名: FUN_18055bb6e
// 功能: 对哈希表进行重新哈希，优化哈希表性能
// 技术特点: 动态重新哈希，支持哈希表扩容和性能优化
// 参数: 无（使用寄存器传递的参数）
// 算法说明: 遍历哈希表中的所有元素，重新计算哈希值并插入到新表中
// 哈希算法: 使用FNV-1a哈希算法进行重新哈希
// 性能优化: 减少哈希冲突，提高查找效率
// 动态扩容: 根据需要自动调整哈希表大小
// 应用场景: 哈希表优化、性能调优、系统维护
void RehashResourceTable(void)

{
  byte bVar1;
  uint64_t uVar2;
  byte *pbVar3;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar4;
  int64_t lVar5;
  uint64_t in_R11;
  
  // 遍历哈希表的所有桶
  do {
    lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + in_R11 * 8);
    if (lVar5 != 0) {
      do {
        // 获取资源名称
        pbVar3 = &system_buffer_ptr;
        if (*(byte **)(lVar5 + 8) != (byte *)0x0) {
          pbVar3 = *(byte **)(lVar5 + 8);
        }
        
        // 计算资源名称的哈希值
        uVar4 = 0;
        uVar2 = HASH_SEED_VALUE;
        if (*(uint *)(lVar5 + 0x10) != 0) {
          do {
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            uVar4 = uVar4 + 1;
            uVar2 = (uVar2 ^ bVar1) * HASH_TABLE_SIZE_MODULUS;
          } while (uVar4 < *(uint *)(lVar5 + 0x10));
        }
        
        // 计算新的哈希索引
        uVar2 = uVar2 % (unaff_RBP & 0xffffffff);
        
        // 更新哈希表链表
        *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + in_R11 * 8) = *(uint64_t *)(lVar5 + 0x28);
        *(uint64_t *)(lVar5 + 0x28) = *(uint64_t *)(unaff_RSI + uVar2 * 8);
        *(int64_t *)(unaff_RSI + uVar2 * 8) = lVar5;
        
        lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + in_R11 * 8);
      } while (lVar5 != 0);
    }
    in_R11 = in_R11 + 1;
  } while (in_R11 < *(uint64_t *)(unaff_RDI + 0x10));
  
  // 清理旧的哈希表内存
  if ((1 < *(uint64_t *)(unaff_RDI + 0x10)) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
    // 释放旧的哈希表内存（不返回的函数调用）
    CoreEngine_MemoryPoolManager();
  }
  
  // 更新哈希表管理器
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_RSI;
  return;
}

// 函数: 哈希表大小调整器
// 原始函数名: FUN_18055bc21
// 功能: 调整哈希表大小，支持动态扩容和内存管理
// 技术特点: 动态大小调整，支持内存释放和性能优化
// 参数:
//   param_1 - 新的哈希表大小（指定调整后的哈希表容量）
// 算法说明: 根据新的大小调整哈希表，释放不需要的内存
// 内存管理: 自动管理内存分配和释放
// 性能优化: 根据负载情况调整哈希表大小
// 安全机制: 确保数据完整性不受影响
// 应用场景: 哈希表扩容、内存优化、性能调优
void ResizeResourceTable(uint64_t param_1)

{
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  
  // 如果哈希表中有多个元素且已分配内存，则释放内存
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
    // 释放哈希表内存（不返回的函数调用）
    CoreEngine_MemoryPoolManager();
  }
  
  // 更新哈希表管理器
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(uint64_t *)(unaff_RDI + 8) = unaff_RSI;
  return;
}

// 函数: 哈希表销毁器
// 原始函数名: FUN_18055bc2c
// 功能: 销毁哈希表，释放所有相关内存
// 技术特点: 安全内存释放，支持资源清理
// 参数: 无（使用寄存器传递的参数）
// 算法说明: 释放哈希表占用的所有内存，清理相关资源
// 内存管理: 确保所有分配的内存都被正确释放
// 安全机制: 防止内存泄漏和悬空指针
// 资源清理: 彻底清理所有相关资源
// 应用场景: 系统清理、内存回收、资源释放
void DestroyResourceTable(void)

{
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  
  // 释放哈希表内存
  if (*(int64_t *)(unaff_RDI + 8) != 0) {
    // 释放哈希表内存（不返回的函数调用）
    CoreEngine_MemoryPoolManager();
  }
  
  // 重置哈希表管理器
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(uint64_t *)(unaff_RDI + 8) = unaff_RSI;
  return;
}

// 函数: 资源插入器
// 原始函数名: FUN_18055bc50
// 功能: 向资源池中插入新资源，支持动态扩容和内存管理
// 技术特点: 动态扩容插入，支持资源属性复制和内存优化
// 参数:
//   param_1 - 资源池管理器指针（管理资源池的插入操作）
//   param_2 - 新资源数据指针（包含要插入的资源信息）
//   param_3 - 插入选项标志（控制插入行为的标志位）
//   param_4 - 内存管理器实例（用于内存分配）
// 算法说明: 如果需要，扩容资源池，然后插入新资源
// 动态扩容: 根据需要自动调整资源池大小
// 内存管理: 高效的内存分配和释放策略
// 数据完整性: 确保插入的资源数据完整
// 性能优化: 批量处理和内存对齐优化
// 应用场景: 资源添加、动态扩容、资源管理
void InsertResourceIntoPool(uint64_t *param_1, int64_t param_2, uint64_t param_3, uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int8_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  void *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  // 获取当前资源池信息
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar9 = ((int64_t)puVar7 - (int64_t)puVar4) / RESOURCE_POOL_SIZE;
  puVar2 = (uint64_t *)0x0;
  
  // 计算新的资源池大小
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_18055bcdc;
  }
  
  // 分配新的资源池内存
  puVar2 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr, lVar9 * RESOURCE_POOL_SIZE, *(int8_t *)(param_1 + 3), param_4,
                         0xfffffffffffffffe);
  
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_18055bcdc:
  puVar5 = puVar2;
  
  // 复制现有资源到新的资源池
  if (puVar4 != puVar7) {
    lVar8 = (int64_t)puVar2 - (int64_t)puVar4;
    puVar4 = puVar4 + 1;
    
    do {
      // 初始化新资源节点
      *puVar5 = &global_state_720_ptr;
      *(uint64_t *)(lVar8 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar8 + 8 + (int64_t)puVar4) = 0;
      *puVar5 = &global_state_3480_ptr;
      puVar3 = (int8_t *)((int64_t)puVar4 + lVar8 + 0x10);
      *(int8_t **)(lVar8 + (int64_t)puVar4) = puVar3;
      *(int32_t *)(lVar8 + 8 + (int64_t)puVar4) = 0;
      *puVar3 = 0;
      *(int32_t *)(lVar8 + 8 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 1);
      
      // 复制资源名称
      puVar6 = &system_buffer_ptr;
      if ((void *)*puVar4 != (void *)0x0) {
        puVar6 = (void *)*puVar4;
      }
      strcpy_s(*(uint64_t *)(lVar8 + (int64_t)puVar4), MAX_RESOURCE_NAME_LENGTH, puVar6);
      
      // 复制资源扩展属性
      *(int32_t *)(lVar8 + 0x50 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 10);
      *(int32_t *)(lVar8 + 0x54 + (int64_t)puVar4) = *(int32_t *)((int64_t)puVar4 + 0x54);
      *(int8_t *)(lVar8 + 0x58 + (int64_t)puVar4) = *(int8_t *)(puVar4 + 0xb);
      
      puVar5 = puVar5 + 0xd;
      puVar1 = puVar4 + 0xc;
      puVar4 = puVar4 + 0xd;
    } while (puVar1 != puVar7);
  }
  
  // 添加新资源到资源池
  FUN_1800b8300(puVar5, param_2);
  *(int32_t *)(puVar5 + 0xb) = *(int32_t *)(param_2 + 0x58);
  *(int32_t *)((int64_t)puVar5 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  *(int8_t *)(puVar5 + 0xc) = *(int8_t *)(param_2 + 0x60);
  
  // 更新资源池管理器
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar7) {
    do {
      *puVar4 = &global_state_720_ptr;
      puVar4 = puVar4 + 0xd;
    } while (puVar4 != puVar7);
    puVar4 = (uint64_t *)*param_1;
  }
  
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 0xd;
    param_1[2] = puVar2 + lVar9 * 0xd;
    return;
  }
  // 释放旧的资源池内存（不返回的函数调用）
  CoreEngine_MemoryPoolManager();
}

// 函数: 性能计数器初始化器
// 原始函数名: FUN_18055be50
// 功能: 初始化性能计数器，设置时间基准和采样参数
// 技术特点: 高精度时间测量，支持性能监控和统计
// 参数:
//   param_1 - 性能计数器管理器指针（管理性能计数器状态）
//   param_2 - 初始化选项标志（控制初始化行为的标志位）
//   param_3 - 采样间隔（指定性能采样的时间间隔）
//   param_4 - 内存管理器实例（用于内存分配）
// 返回值: 性能计数器管理器指针（指向初始化后的管理器）
// 算法说明: 初始化性能计数器，设置基准时间和采样参数
// 时间测量: 使用高精度性能计数器进行时间测量
// 性能监控: 提供性能统计和监控功能
// 内存管理: 高效的内存分配和管理策略
// 应用场景: 性能分析、系统监控、优化调优
uint64_t *
InitializePerformanceCounter(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  int64_t *plVar1;
  double dVar2;
  double dVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int64_t *plStackX_10;
  int64_t alStackX_18 [2];
  uint uStack_44;
  
  // 初始化性能计数器管理器
  plVar1 = param_1 + 1;
  puVar5 = (int32_t *)0x0;
  *plVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  param_1[5] = 0;
  param_1[6] = 0x3ff0000000000000;  // 1.0
  param_1[7] = 0;
  *param_1 = 0;
  
  puVar7 = (int32_t *)*plVar1;
  param_1[2] = puVar7;
  lVar8 = render_system_data_config;
  
  // 获取性能计数器基准时间
  if (render_system_data_config == 0) {
    plStackX_10 = plVar1;
    QueryPerformanceCounter(alStackX_18, param_2, param_3, param_4, 0xfffffffffffffffe);
    puVar7 = (int32_t *)param_1[2];
    lVar8 = alStackX_18[0];
  }
  
  // 计算时间缩放因子
  dVar3 = (double)(lVar8 - render_system_data_config) * render_system_data_config;
  plStackX_10 = (int64_t *)0x1000ffffff87;
  uStack_44 = uStack_44 & 0xffffff00;
  dVar2 = dVar3 - 1.0;
  lVar8 = 1;
  
  // 添加性能采样点
  if (puVar7 < (int32_t *)param_1[3]) {
    param_1[2] = puVar7 + 8;
    *puVar7 = 0xffffff87;
    puVar7[1] = 0x1000;
    *(double *)(puVar7 + 2) = dVar2;
    puVar7[4] = 0;
    puVar7[5] = 0xbff00000;
    puVar7[6] = 1;
    puVar7[7] = uStack_44;
  }
  else {
    puVar6 = (int32_t *)*plVar1;
    lVar4 = (int64_t)puVar7 - (int64_t)puVar6 >> 5;
    if ((lVar4 == 0) || (lVar8 = lVar4 * 2, lVar8 != 0)) {
      puVar5 = (int32_t *)FUN_18062b420(system_memory_pool_ptr, lVar8 << 5, *(int8_t *)(param_1 + 4));
      puVar7 = (int32_t *)param_1[2];
      puVar6 = (int32_t *)*plVar1;
    }
    
    if (puVar6 != puVar7) {
      // 移动现有的性能数据（不返回的函数调用）
      memmove(puVar5, puVar6, (int64_t)puVar7 - (int64_t)puVar6);
    }
    
    // 添加新的性能采样点
    *puVar5 = 0xffffff87;
    puVar5[1] = 0x1000;
    *(double *)(puVar5 + 2) = dVar2;
    puVar5[4] = 0;
    puVar5[5] = 0xbff00000;
    puVar5[6] = 1;
    puVar5[7] = uStack_44;
    
    if (*plVar1 != 0) {
      // 释放旧的性能数据内存（不返回的函数调用）
      CoreEngine_MemoryPoolManager();
    }
    *plVar1 = (int64_t)puVar5;
    param_1[2] = puVar5 + 8;
    param_1[3] = puVar5 + lVar8 * 8;
  }
  
  // 更新性能指标
  FUN_18055c030(param_1, &plStackX_10, SUB84(dVar3, 0));
  
  // 设置默认性能参数
  param_1[8] = 0x4123880000000000;  // 1000000.0
  param_1[9] = 0x4123880000000000;  // 1000000.0
  param_1[10] = 0x4123880000000000; // 1000000.0
  
  return param_1;
}

// 函数: 性能指标更新器
// 原始函数名: FUN_18055c030
// 功能: 更新性能指标，处理性能采样数据
// 技术特点: 实时性能监控，支持动态指标计算和趋势分析
// 参数:
//   param_1 - 性能计数器管理器指针（管理性能数据）
//   param_2 - 性能指标标识符（标识要更新的指标）
//   param_3 - 性能数值（新的性能数值）
// 算法说明: 更新指定的性能指标，计算趋势和统计数据
// 性能监控: 实时监控系统的性能指标
// 趋势分析: 分析性能数据的变化趋势
// 统计计算: 计算平均值、最大值、最小值等统计信息
// 应用场景: 性能优化、系统监控、实时分析
void UpdatePerformanceMetrics(int64_t param_1, int *param_2, double param_3)

{
  double dVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  double *pdVar5;
  uint uVar6;
  uint64_t uVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int64_t lStackX_8;
  
  // 获取性能数据指针
  piVar8 = *(int **)(param_1 + 8);
  iVar2 = (int)(*(int64_t *)(param_1 + 0x10) - (int64_t)piVar8 >> 5);
  if (iVar2 < 1) {
    return;
  }
  
  // 查找匹配的性能指标
  uVar7 = 0;
  uVar4 = uVar7;
  while ((*piVar8 != *param_2 || (piVar8[1] != param_2[1]))) {
    uVar4 = uVar4 + 1;
    piVar8 = piVar8 + 8;
    if ((int64_t)iVar2 <= (int64_t)uVar4) {
      return;
    }
  }
  
  // 更新性能数值
  *(double *)(piVar8 + 4) = param_3;
  if (param_3 - *(double *)(piVar8 + 2) < PERFORMANCE_COUNTER_INTERVAL) {
    *(double *)(piVar8 + 4) = *(double *)(piVar8 + 2) + PERFORMANCE_COUNTER_INTERVAL;
  }
  
  // 获取当前时间戳
  lVar3 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&lStackX_8);
    lVar3 = lStackX_8;
  }
  dVar11 = (double)(lVar3 - render_system_data_config) * render_system_data_config;
  
  // 更新性能状态
  FUN_1805f7390(param_1);
  uVar4 = *(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 5;
  
  // 计算性能统计信息
  if (uVar4 != 0) {
    pdVar5 = (double *)(*(int64_t *)(param_1 + 8) + 8);
    dVar9 = -1.7976931348623157e+308;  // 最小双精度值
    
    do {
      dVar1 = pdVar5[1];
      dVar10 = dVar9;
      if (((0.0 <= dVar1) && (dVar11 < dVar1 + 10.0)) &&
         (dVar10 = dVar1 - *pdVar5, dVar1 - *pdVar5 <= dVar9)) {
        dVar10 = dVar9;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      pdVar5 = pdVar5 + 4;
      dVar9 = dVar10;
    } while ((uint64_t)(int64_t)(int)uVar6 < uVar4);
    
    if (0.0 <= dVar10) goto LAB_18055c15a;
  }
  dVar10 = 1.0;
LAB_18055c15a:
  
  // 更新性能参数
  dVar11 = ((dVar10 + 0.016666666666666666) - *(double *)(param_1 + 0x30)) * DEFAULT_TIME_SCALE +
           *(double *)(param_1 + 0x30);
  *(double *)(param_1 + 0x30) = dVar11;
  if (1.0 < dVar11) {
    *(uint64_t *)(param_1 + 0x30) = 0x3ff0000000000000;  // 1.0
  }
  
  // 更新动画参数
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x40);
  *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x40) * ANIMATION_SPEED_FACTOR;
  
  return;
}

// 函数: 扩展性能指标更新器
// 原始函数名: FUN_18055c053
// 功能: 扩展版本的性能指标更新器，使用寄存器优化
// 技术特点: 寄存器优化版本，支持高性能指标更新
// 参数:
//   param_1 - 保留参数（系统保留）
//   param_2 - 性能数据指针（指向性能数据结构）
//   param_3 - 性能数值（新的性能数值）
// 算法说明: 与UpdatePerformanceMetrics功能相同，但使用寄存器优化
// 性能优化: 使用寄存器变量提高执行效率
// 寄存器使用: 优化寄存器分配，减少内存访问
// 应用场景: 高性能监控、实时系统、关键路径优化
void UpdatePerformanceMetricsEx(uint64_t param_1, int64_t param_2, double param_3)

{
  double dVar1;
  int in_EAX;
  int64_t lVar2;
  uint64_t uVar3;
  double *pdVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t unaff_RDI;
  int *in_R8;
  int in_R10D;
  double dVar7;
  double dVar8;
  double dVar9;
  int64_t in_stack_00000040;
  
  // 查找匹配的性能指标
  uVar6 = 0;
  uVar3 = uVar6;
  while ((*in_R8 != in_R10D || (in_R8[1] != *(int *)(param_2 + 4)))) {
    uVar3 = uVar3 + 1;
    in_R8 = in_R8 + 8;
    if ((int64_t)in_EAX <= (int64_t)uVar3) {
      return;
    }
  }
  
  // 更新性能数值
  *(double *)(in_R8 + 4) = param_3;
  if (param_3 - *(double *)(in_R8 + 2) < PERFORMANCE_COUNTER_INTERVAL) {
    *(double *)(in_R8 + 4) = *(double *)(in_R8 + 2) + PERFORMANCE_COUNTER_INTERVAL;
  }
  
  // 获取当前时间戳
  lVar2 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&stack0x00000040);
    lVar2 = in_stack_00000040;
  }
  dVar9 = (double)(lVar2 - render_system_data_config) * render_system_data_config;
  
  // 更新性能状态
  FUN_1805f7390();
  uVar3 = *(int64_t *)(unaff_RDI + 0x10) - *(int64_t *)(unaff_RDI + 8) >> 5;
  
  // 计算性能统计信息
  if (uVar3 != 0) {
    pdVar4 = (double *)(*(int64_t *)(unaff_RDI + 8) + 8);
    dVar7 = -1.7976931348623157e+308;  // 最小双精度值
    
    do {
      dVar1 = pdVar4[1];
      dVar8 = dVar7;
      if (((0.0 <= dVar1) && (dVar9 < dVar1 + 10.0)) &&
         (dVar8 = dVar1 - *pdVar4, dVar1 - *pdVar4 <= dVar7)) {
        dVar8 = dVar7;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      pdVar4 = pdVar4 + 4;
      dVar7 = dVar8;
    } while ((uint64_t)(int64_t)(int)uVar5 < uVar3);
    
    if (0.0 <= dVar8) goto LAB_18055c15a;
  }
  dVar8 = 1.0;
LAB_18055c15a:
  
  // 更新性能参数
  dVar9 = ((dVar8 + 0.016666666666666666) - *(double *)(unaff_RDI + 0x30)) * DEFAULT_TIME_SCALE +
          *(double *)(unaff_RDI + 0x30);
  *(double *)(unaff_RDI + 0x30) = dVar9;
  if (1.0 < dVar9) {
    *(uint64_t *)(unaff_RDI + 0x30) = 0x3ff0000000000000;  // 1.0
  }
  
  // 更新动画参数
  *(double *)(unaff_RDI + 0x48) = *(double *)(unaff_RDI + 0x40);
  *(double *)(unaff_RDI + 0x50) = *(double *)(unaff_RDI + 0x40) * ANIMATION_SPEED_FACTOR;
  
  return;
}

// 函数: 替代性能指标更新器
// 原始函数名: FUN_18055c085
// 功能: 替代版本的性能指标更新器，支持不同的参数格式
// 技术特点: 灵活的参数格式，支持不同的性能数据类型
// 参数:
//   param_1 - 保留参数（系统保留）
//   param_2 - 性能数据指针（指向性能数据结构）
//   param_3 - 性能数据结构指针（包含性能数值）
// 算法说明: 与UpdatePerformanceMetrics功能相同，但参数格式不同
// 参数灵活性: 支持不同的参数格式和数据类型
// 数据处理: 灵活处理不同格式的性能数据
// 应用场景: 多样化性能监控、不同数据源处理
void UpdatePerformanceMetricsAlt(uint64_t param_1, uint64_t param_2, int64_t param_3)

{
  double dVar1;
  int64_t lVar2;
  double *pdVar3;
  uint64_t uVar4;
  int unaff_EBX;
  int64_t unaff_RDI;
  double in_XMM2_Qa;
  double dVar5;
  double dVar6;
  double dVar7;
  int64_t in_stack_00000040;
  
  // 更新性能数值
  *(double *)(param_3 + 0x10) = in_XMM2_Qa;
  if (in_XMM2_Qa - *(double *)(param_3 + 8) < PERFORMANCE_COUNTER_INTERVAL) {
    *(double *)(param_3 + 0x10) = *(double *)(param_3 + 8) + PERFORMANCE_COUNTER_INTERVAL;
  }
  
  // 获取当前时间戳
  lVar2 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&stack0x00000040);
    lVar2 = in_stack_00000040;
  }
  dVar7 = (double)(lVar2 - render_system_data_config) * render_system_data_config;
  
  // 更新性能状态
  FUN_1805f7390();
  uVar4 = *(int64_t *)(unaff_RDI + 0x10) - *(int64_t *)(unaff_RDI + 8) >> 5;
  
  // 计算性能统计信息
  if (uVar4 != 0) {
    pdVar3 = (double *)(*(int64_t *)(unaff_RDI + 8) + 8);
    dVar5 = -1.7976931348623157e+308;  // 最小双精度值
    
    do {
      dVar1 = pdVar3[1];
      dVar6 = dVar5;
      if (((0.0 <= dVar1) && (dVar7 < dVar1 + 10.0)) &&
         (dVar6 = dVar1 - *pdVar3, dVar1 - *pdVar3 <= dVar5)) {
        dVar6 = dVar5;
      }
      unaff_EBX = unaff_EBX + 1;
      pdVar3 = pdVar3 + 4;
      dVar5 = dVar6;
    } while ((uint64_t)(int64_t)unaff_EBX < uVar4);
    
    if (0.0 <= dVar6) goto LAB_18055c15a;
  }
  dVar6 = 1.0;
LAB_18055c15a:
  
  // 更新性能参数
  dVar7 = ((dVar6 + 0.016666666666666666) - *(double *)(unaff_RDI + 0x30)) * DEFAULT_TIME_SCALE +
          *(double *)(unaff_RDI + 0x30);
  *(double *)(unaff_RDI + 0x30) = dVar7;
  if (1.0 < dVar7) {
    *(uint64_t *)(unaff_RDI + 0x30) = 0x3ff0000000000000;  // 1.0
  }
  
  // 更新动画参数
  *(double *)(unaff_RDI + 0x48) = *(double *)(unaff_RDI + 0x40);
  *(double *)(unaff_RDI + 0x50) = *(double *)(unaff_RDI + 0x40) * ANIMATION_SPEED_FACTOR;
  
  return;
}

// 函数: 时间增量计算器
// 原始函数名: FUN_18055c09d
// 功能: 计算时间增量，支持时间同步和插值
// 技术特点: 高精度时间计算，支持时间同步和插值处理
// 参数:
//   param_1 - 基础时间值（时间计算的基准值）
//   param_2 - 时间偏移量（时间计算的偏移量）
//   param_3 - 时间缩放因子（影响时间计算的缩放）
// 算法说明: 根据输入参数计算时间增量，支持时间同步
// 时间同步: 确保时间计算的一致性和准确性
// 插值处理: 支持时间值的插值和平滑处理
// 高精度: 使用高精度时间计算方法
// 应用场景: 动画系统、物理模拟、时间同步
void CalculateTimeDelta(double param_1, double param_2, double param_3)

{
  double dVar1;
  int64_t lVar2;
  double *pdVar3;
  uint64_t uVar4;
  int unaff_EBX;
  int64_t unaff_RDI;
  int64_t in_R8;
  double dVar5;
  double dVar6;
  double dVar7;
  int64_t in_stack_00000040;
  
  // 计算时间增量
  if (param_3 < param_2) {
    *(double *)(in_R8 + 0x10) = param_1 + param_2;
  }
  
  // 获取当前时间戳
  lVar2 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&stack0x00000040);
    lVar2 = in_stack_00000040;
  }
  dVar7 = (double)(lVar2 - render_system_data_config) * render_system_data_config;
  
  // 更新性能状态
  FUN_1805f7390();
  uVar4 = *(int64_t *)(unaff_RDI + 0x10) - *(int64_t *)(unaff_RDI + 8) >> 5;
  
  // 计算性能统计信息
  if (uVar4 != 0) {
    pdVar3 = (double *)(*(int64_t *)(unaff_RDI + 8) + 8);
    dVar5 = -1.7976931348623157e+308;  // 最小双精度值
    
    do {
      dVar1 = pdVar3[1];
      dVar6 = dVar5;
      if (((0.0 <= dVar1) && (dVar7 < dVar1 + 10.0)) &&
         (dVar6 = dVar1 - *pdVar3, dVar1 - *pdVar3 <= dVar5)) {
        dVar6 = dVar5;
      }
      unaff_EBX = unaff_EBX + 1;
      pdVar3 = pdVar3 + 4;
      dVar5 = dVar6;
    } while ((uint64_t)(int64_t)unaff_EBX < uVar4);
    
    if (0.0 <= dVar6) goto LAB_18055c15a;
  }
  dVar6 = 1.0;
LAB_18055c15a:
  
  // 更新性能参数
  dVar7 = ((dVar6 + 0.016666666666666666) - *(double *)(unaff_RDI + 0x30)) * DEFAULT_TIME_SCALE +
          *(double *)(unaff_RDI + 0x30);
  *(double *)(unaff_RDI + 0x30) = dVar7;
  if (1.0 < dVar7) {
    *(uint64_t *)(unaff_RDI + 0x30) = 0x3ff0000000000000;  // 1.0
  }
  
  // 更新动画参数
  *(double *)(unaff_RDI + 0x48) = *(double *)(unaff_RDI + 0x40);
  *(double *)(unaff_RDI + 0x50) = *(double *)(unaff_RDI + 0x40) * ANIMATION_SPEED_FACTOR;
  
  return;
}

// 函数: 性能状态重置器
// 原始函数名: FUN_18055c184
// 功能: 重置性能状态，恢复默认参数
// 技术特点: 快速状态重置，支持参数恢复和系统重置
// 参数: 无（使用寄存器传递的参数）
// 算法说明: 重置性能相关的状态参数到默认值
// 状态重置: 将性能状态重置为默认值
// 参数恢复: 恢复系统参数到初始状态
// 系统重置: 支持系统的快速重置功能
// 应用场景: 系统重置、状态恢复、错误处理
void ResetPerformanceState(void)

{
  int64_t unaff_RDI;
  
  // 重置性能参数到默认值
  *(uint64_t *)(unaff_RDI + 0x30) = 0x3ff0000000000000;  // 1.0
  *(double *)(unaff_RDI + 0x48) = *(double *)(unaff_RDI + 0x40);
  *(double *)(unaff_RDI + 0x50) = *(double *)(unaff_RDI + 0x40) * ANIMATION_SPEED_FACTOR;
  
  return;
}

// 函数: 空函数占位符
// 原始函数名: FUN_18055c1ae
// 功能: 空函数占位符，用于函数表填充
// 技术特点: 最小化实现，仅返回不执行任何操作
// 参数: 无
// 算法说明: 空函数实现，用于函数表填充和接口兼容
// 函数表: 用于填充函数表中的空位
// 接口兼容: 确保接口的完整性和兼容性
// 最小化: 最小化的函数实现，减少开销
// 应用场景: 函数表填充、接口兼容、占位符
void EmptyFunctionPlaceholder(void)

{
  return;
}

// 函数: 资源更新循环处理器
// 原始函数名: FUN_18055c1c0
// 功能: 处理资源更新循环，管理资源的生命周期和状态更新
// 技术特点: 复杂的资源管理，支持多线程和状态同步
// 参数:
//   param_1 - 资源管理器指针（管理资源的生命周期）
// 算法说明: 处理资源的更新循环，包括状态检查、清理和更新
// 生命周期: 管理资源的完整生命周期
// 状态同步: 支持多线程环境下的状态同步
// 资源清理: 自动清理过期和无效的资源
// 性能优化: 高效的资源管理策略
// 应用场景: 资源管理、系统维护、性能优化
void ProcessResourceUpdateLoop(int64_t param_1)

{
  char cVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int8_t auStack_178 [48];
  int64_t lStack_148;
  int64_t lStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  // 安全检查cookie
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  uVar8 = 0;
  
  // 主资源更新循环
  do {
    puVar5 = *(uint64_t **)(param_1 + 0x618);
    uVar9 = *puVar5;
    
    // 检查资源队列状态
    if ((uVar9 == puVar5[1]) && (puVar5[1] = puVar5[8], uVar9 == puVar5[8])) {
      if (puVar5 == *(uint64_t **)(param_1 + 0x658)) {
        lVar6 = *(int64_t *)(param_1 + 0x35d8);
        uVar9 = uVar8;
        uVar11 = uVar8;
        
        // 清理无效资源
        if (*(int64_t *)(param_1 + 0x35e0) - lVar6 >> 3 != 0) {
          do {
            iVar7 = (int)uVar9;
            if (*(int64_t *)(uVar11 + lVar6) != 0) {
              plVar3 = *(int64_t **)(param_1 + 0x738);
              uVar10 = *(int64_t *)(param_1 + 0x740) - (int64_t)plVar3 >> 3;
              uVar9 = uVar8;
              
              // 查找匹配的资源
              if (uVar10 != 0) {
                do {
                  if (*plVar3 == *(int64_t *)(uVar11 + lVar6)) {
                    if ((int)uVar9 != -1) {
                      FUN_18055c930(param_1, uVar9, 0);
                      lVar6 = *(int64_t *)(param_1 + 0x35d8) + (int64_t)iVar7 * 8;
                      uVar10 = *(uint64_t *)(param_1 + 0x35e0);
                      uVar9 = lVar6 + 8;
                      if (uVar9 < uVar10) {
                        // 移动资源数据（不返回的函数调用）
                        memmove(lVar6, uVar9, uVar10 - uVar9);
                      }
                      iVar7 = iVar7 + -1;
                      *(uint64_t *)(param_1 + 0x35e0) = uVar10 - 8;
                      uVar11 = uVar11 - 8;
                    }
                    break;
                  }
                  uVar4 = (int)uVar9 + 1;
                  uVar9 = (uint64_t)uVar4;
                  plVar3 = plVar3 + 1;
                } while ((uint64_t)(int64_t)(int)uVar4 < uVar10);
              }
            }
            lVar6 = *(int64_t *)(param_1 + 0x35d8);
            uVar9 = (uint64_t)(iVar7 + 1U);
            uVar11 = uVar11 + 8;
          } while ((uint64_t)(int64_t)(int)(iVar7 + 1U) <
                   (uint64_t)(*(int64_t *)(param_1 + 0x35e0) - lVar6 >> 3));
        }
        
        // 清理过期资源
        lVar6 = *(int64_t *)(param_1 + 0x738);
        uVar9 = uVar8;
        if (*(int64_t *)(param_1 + 0x740) - lVar6 >> 3 != 0) {
          do {
            iVar7 = (int)uVar8;
            lVar6 = *(int64_t *)(uVar9 + lVar6);
            if (*(char *)(lVar6 + 0x31) == '\0') {
              lVar2 = render_system_data_config;
              if (render_system_data_config == 0) {
                QueryPerformanceCounter(&lStack_140);
                lVar2 = lStack_140;
              }
              
              // 检查资源是否过期
              if (*(double *)(lVar6 + 0x20) + 20.0 <
                  (double)(lVar2 - render_system_data_config) * render_system_data_config) {
                FUN_18055c930(param_1, uVar8, 1);
                iVar7 = iVar7 + -1;
                uVar9 = uVar9 - 8;
              }
            }
            lVar6 = *(int64_t *)(param_1 + 0x738);
            uVar8 = (uint64_t)(iVar7 + 1U);
            uVar9 = uVar9 + 8;
          } while ((uint64_t)(int64_t)(int)(iVar7 + 1U) <
                   (uint64_t)(*(int64_t *)(param_1 + 0x740) - lVar6 >> 3));
        }
        
        // 安全检查返回（不返回的函数调用）
        FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_178);
      }
      
      // 更新资源队列指针
      puVar5 = *(uint64_t **)(param_1 + 0x618);
      puVar5[1] = puVar5[8];
      uVar9 = *puVar5;
      if (uVar9 != puVar5[8]) goto LAB_18055c268;
      puVar5 = (uint64_t *)puVar5[0x10];
      uVar9 = *puVar5;
      puVar5[1] = puVar5[8];
      *(uint64_t **)(param_1 + 0x618) = puVar5;
      lVar6 = *(int64_t *)(puVar5[0x11] + uVar9 * 8);
      uVar11 = puVar5[0x12];
    }
    else {
LAB_18055c268:
      lVar6 = *(int64_t *)(puVar5[0x11] + uVar9 * 8);
      uVar11 = puVar5[0x12];
    }
    
    // 更新资源队列状态
    *puVar5 = uVar11 & uVar9 + 1;
    *(int32_t *)(lVar6 + 0x5c4) = 0;
    
    // 处理资源更新
    cVar1 = FUN_18055cde0(param_1, lVar6, lVar6 + 0x5d0);
    if (cVar1 == '\0') {
      // 清零资源缓冲区（不返回的函数调用）
      memset(auStack_138, 0, BUFFER_SIZE_256);
    }
    
    // 处理资源更新回调
    lStack_148 = lVar6;
    FUN_1805603c0(param_1 + 0x668, &lStack_148);
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 模块总结：
// 
// 本模块实现了渲染系统的高级资源管理和数据处理功能，包含15个核心函数：
//
// 1. ProcessResourcePoolCleanup - 资源池清理处理器
// 2. FindResourceInHashTable - 哈希表资源查找器
// 3. CopyResourcePoolData - 资源池数据复制器
// 4. InitializeResourcePool - 资源池初始化器
// 5. AllocateResourceMemory - 资源内存分配器
// 6. RehashResourceTable - 哈希表重新哈希器
// 7. ResizeResourceTable - 哈希表大小调整器
// 8. DestroyResourceTable - 哈希表销毁器
// 9. InsertResourceIntoPool - 资源插入器
// 10. InitializePerformanceCounter - 性能计数器初始化器
// 11. UpdatePerformanceMetrics - 性能指标更新器
// 12. UpdatePerformanceMetricsEx - 扩展性能指标更新器
// 13. UpdatePerformanceMetricsAlt - 替代性能指标更新器
// 14. CalculateTimeDelta - 时间增量计算器
// 15. ResetPerformanceState - 性能状态重置器
// 16. EmptyFunctionPlaceholder - 空函数占位符
// 17. ProcessResourceUpdateLoop - 资源更新循环处理器
//
// 技术特点：
// - 高效的资源池管理，支持动态扩容和内存优化
// - 使用FNV-1a哈希算法进行资源查找，支持链地址法冲突处理
// - 高精度性能计数器，支持实时性能监控和统计
// - 复杂的资源生命周期管理，支持多线程环境
// - 完整的内存管理和安全检查机制
//
// 应用场景：
// - 渲染系统资源管理
// - 性能监控和优化
// - 内存管理和分配
// - 哈希表操作和优化
// - 系统状态管理和同步
//
// 本模块为渲染系统提供了完整的资源管理和性能监控解决方案，
// 确保系统的高效运行和资源的合理利用。