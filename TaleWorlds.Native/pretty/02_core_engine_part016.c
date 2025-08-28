#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 02_core_engine_part016.c
 * @brief 核心引擎高级数据结构和内存管理模块
 * 
 * 本模块是核心引擎的重要组成部分，主要负责：
 * - 高级数据结构的动态管理和优化
 * - 内存池的高效分配和释放策略
 * - 数据缓冲区的智能管理和扩展
 * - 系统资源的生命周期管理和清理
 * - 复杂数据结构的创建和维护
 * - 内存安全性和性能优化
 * 
 * 该文件作为核心引擎的高级子模块，提供了全面的数据结构管理支持，
 * 包括内存分配、数据操作、资源清理等核心功能。
 * 
 * 主要功能模块：
 * 1. 内存池管理器 - 负责内存的分配和释放
 * 2. 数据结构处理器 - 负责复杂数据结构的操作
 * 3. 缓冲区管理器 - 负责数据缓冲区的管理
 * 4. 资源清理器 - 负责系统资源的清理
 * 5. 系统状态管理器 - 负责状态监控和管理
 * 
 * @version 2.0
 * @date 2025-08-28
 * @author Claude Code
 */

/* ============================================================================
 * 核心引擎高级数据结构管理常量定义
 * ============================================================================ */

/**
 * @brief 核心引擎高级数据结构管理接口
 * @details 定义核心引擎高级数据结构管理的参数和接口函数
 * 
 * 核心功能：
 * - 高级数据结构的动态管理和优化
 * - 内存池的高效分配和释放策略
 * - 数据缓冲区的智能管理和扩展
 * - 系统资源的生命周期管理和清理
 * - 复杂数据结构的创建和维护
 * - 内存安全性和性能优化
 * 
 * 技术特点：
 * - 高效的内存管理策略
 * - 智能的数据结构操作
 * - 完善的资源清理机制
 * - 内存安全性和性能优化
 * 
 * @note 该文件作为核心引擎的高级子模块，提供全面的数据结构管理支持
 */

/* ============================================================================
 * 系统常量定义
 * ============================================================================ */

// 内存管理相关常量
#define MEMORY_POOL_SIZE 0x1000              // 内存池大小
#define MEMORY_BLOCK_SIZE 0x40               // 内存块大小
#define MEMORY_ALIGNMENT 8                   // 内存对齐大小
#define MEMORY_EXPANSION_FACTOR 2            // 内存扩展因子

// 数据结构相关常量
#define DATA_BUFFER_SIZE 0x48                // 数据缓冲区大小
#define DATA_STRUCTURE_SIZE 0x20             // 数据结构大小
#define DATA_ALIGNMENT 8                     // 数据对齐大小

// 系统状态常量
#define SYSTEM_STATUS_ACTIVE 0x01            // 系统活动状态
#define SYSTEM_STATUS_IDLE 0x02              // 系统空闲状态
#define SYSTEM_STATUS_BUSY 0x03              // 系统繁忙状态
#define SYSTEM_STATUS_ERROR 0x04             // 系统错误状态

// 错误代码常量
#define MEMORY_SUCCESS 0x00000000           // 内存操作成功
#define MEMORY_ERROR_ALLOC_FAILED 0xFFFF0001 // 内存分配失败
#define MEMORY_ERROR_INVALID_PARAM 0xFFFF0002 // 无效参数
#define MEMORY_ERROR_OUT_OF_MEMORY 0xFFFF0003 // 内存不足

/* ============================================================================
 * FUN_函数别名定义
 * ============================================================================ */

// 内存管理函数别名
#define CoreEngineMemoryPoolAllocator FUN_18062b420     // 核心引擎内存池分配器
#define CoreEngineMemoryPoolCleaner FUN_18064e900       // 核心引擎内存池清理器
#define CoreEngineMemoryPoolInitializer FUN_18064d630   // 核心引擎内存池初始化器

// 数据结构处理函数别名
#define CoreEngineDataBufferProcessor CoreEngineDataBufferProcessor     // 核心引擎数据缓冲区处理器
#define CoreEngineDataStructureManager CoreEngineDataStructureManager    // 核心引擎数据结构管理器
#define CoreEngineDataBufferCleaner CoreEngineDataBufferCleaner       // 核心引擎数据缓冲区清理器
#define CoreEngineDataOffsetCalculator CoreEngineDataOffsetCalculator    // 核心引擎数据偏移计算器
#define CoreEngineDataStructureOptimizer CoreEngineDataStructureOptimizer  // 核心引擎数据结构优化器

// 系统组件管理函数别名
#define CoreEngineComponentProcessor CoreEngineComponentProcessor      // 核心引擎组件处理器
#define CoreEngineResourceManager FUN_1800582b0         // 核心引擎资源管理器
#define CoreEngineStateManager FUN_180058370            // 核心引擎状态管理器
#define CoreEngineErrorHandler FUN_180058420            // 核心引擎错误处理器
#define CoreEngineSystemInitializer FUN_180058210       // 核心引擎系统初始化器

// 高级处理函数别名
#define CoreEngineAdvancedProcessor FUN_180057510       // 核心引擎高级处理器
#define CoreEngineOptimizationManager FUN_180057530     // 核心引擎优化管理器
#define CoreEngineResourceHandler FUN_180057550         // 核心引擎资源处理器
#define CoreEngineSystemController FUN_180057556        // 核心引擎系统控制器
#define CoreEngineMemoryManager FUN_180057580           // 核心引擎内存管理器
#define CoreEngineDataValidator FUN_1800575b6            // 核心引擎数据验证器
#define CoreEngineSystemCleaner FUN_1800575d4            // 核心引擎系统清理器

// 核心功能函数别名
#define CoreEngineSystemProcessor FUN_1800575f0          // 核心引擎系统处理器
#define CoreEngineDataController FUN_180057610           // 核心引擎数据控制器
#define CoreEngineMemoryController FUN_180057680         // 核心引擎内存控制器
#define CoreEngineBufferManager FUN_180057730            // 核心引擎缓冲区管理器
#define CoreEngineSystemMonitor FUN_180057790             // 核心引擎系统监控器
#define CoreEngineDataProcessor FUN_180057796            // 核心引擎数据处理器
#define CoreEngineResourceMonitor FUN_1800577c0           // 核心引擎资源监控器
#define CoreEngineSystemValidator FUN_1800577f6          // 核心引擎系统验证器
#define CoreEngineMemoryValidator FUN_180057814           // 核心引擎内存验证器
#define CoreEngineStructureManager FUN_180057830         // 核心引擎结构管理器

// 高级系统函数别名
#define CoreEngineSystemOptimizer FUN_1800578a0          // 核心引擎系统优化器
#define CoreEngineDataAnalyzer FUN_180057980              // 核心引擎数据分析器
#define CoreEngineMemoryAnalyzer FUN_180057b00           // 核心引擎内存分析器
#define CoreEngineStructureCleaner FUN_180057bf0          // 核心引擎结构清理器
#define CoreEngineBufferProcessor FUN_180057cb0           // 核心引擎缓冲区处理器
#define CoreEngineSystemConfigurator FUN_180057d70        // 核心引擎系统配置器
#define CoreEngineDataOptimizer FUN_180057e90             // 核心引擎数据优化器
#define CoreEngineStructureProcessor FUN_180057ec0        // 核心引擎结构处理器
#define CoreEngineResourceManager2 FUN_180057ee0           // 核心引擎资源管理器2
#define CoreEngineSystemHandler FUN_180057f10             // 核心引擎系统处理器

// 辅助函数别名
#define CoreEngineDataInitializer FUN_180058020           // 核心引擎数据初始化器
#define CoreEngineStructureInitializer FUN_180058710      // 核心引擎结构初始化器
#define CoreEngineDataHandler FUN_1800587d0                // 核心引擎数据处理器
#define CoreEngineResourceCleaner FUN_18005cb60           // 核心引擎资源清理器
#define CoreEngineSystemManager FUN_18005e570             // 核心引擎系统管理器
#define CoreEngineMemoryTransfer FUN_180627ae0             // 核心引擎内存传输器
#define CoreEngineDataTransformer FUN_180628210            // 核心引擎数据转换器
#define CoreEngineSystemConfigurator2 FUN_180627ae0        // 核心引擎系统配置器2
#define CoreEngineResourceAllocator FUN_1800590b0         // 核心引擎资源分配器
#define CoreEngineSystemInitializer2 FUN_18005d1f0        // 核心引擎系统初始化器2
#define CoreEngineDataProcessor2 FUN_18066bdc0             // 核心引擎数据处理器2
#define CoreEngineSystemCleaner2 FUN_180174950            // 核心引擎系统清理器2
#define CoreEngineParameterHandler FUN_180059820          // 核心引擎参数处理器
#define CoreEngineErrorHandler2 FUN_18005d580             // 核心引擎错误处理器2
#define CoreEngineSystemValidator2 FUN_180090420          // 核心引擎系统验证器2
#define CoreEngineMemoryCleaner2 FUN_180090380            // 核心引擎内存清理器2

// 02_core_engine_part016.c - 31 个函数

// 函数: void CoreEngineDataBufferProcessor(int64_t *param_1,uint64_t param_2)
void CoreEngineDataBufferProcessor(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  lVar5 = param_1[1];
  lVar6 = *param_1;
  uVar2 = lVar5 - lVar6 >> 3;
  if (param_2 <= uVar2) {
    param_1[1] = lVar6 + param_2 * 8;
    return;
  }
  uVar4 = param_2 - uVar2;
  if (uVar4 <= (uint64_t)(param_1[2] - lVar5 >> 3)) {
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar5,0,uVar4 * 8);
    }
    param_1[1] = lVar5;
    return;
  }
  uVar3 = uVar2 * 2;
  if (uVar2 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  if (uVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar3 * 8,(char)param_1[3]);
    lVar6 = *param_1;
    lVar5 = param_1[1];
  }
  if (lVar6 != lVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar6,lVar5 - lVar6);
  }
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar4 * 8);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar3 * 8;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void CoreEngineDataStructureManager(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void CoreEngineDataStructureManager(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t in_RAX;
  int64_t lVar1;
  int64_t *unaff_RBX;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  uVar3 = param_2 - param_1;
  if (uVar3 <= (uint64_t)(in_RAX - unaff_RDI >> 3)) {
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
    unaff_RBX[1] = unaff_RDI;
    return;
  }
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < param_2) {
    uVar2 = param_2;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar2 * 8,(char)unaff_RBX[3]);
    param_4 = *unaff_RBX;
    unaff_RDI = unaff_RBX[1];
  }
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_4,unaff_RDI - param_4);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar3 * 8);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar1;
  unaff_RBX[2] = lVar1 + uVar2 * 8;
  unaff_RBX[1] = lVar1;
  return;
}





// 函数: void CoreEngineDataBufferCleaner(void)
void CoreEngineDataBufferCleaner(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RBX + 8) = unaff_RDI;
  return;
}





// 函数: void CoreEngineDataOffsetCalculator(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void CoreEngineDataOffsetCalculator(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t unaff_RBX;
  
  *(int64_t *)(unaff_RBX + 8) = param_4 + param_2 * 8;
  return;
}





// 函数: void CoreEngineDataStructureOptimizer(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void CoreEngineDataStructureOptimizer(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058210(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_1800574b0(int64_t *param_1)
void FUN_1800574b0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    CoreEngineComponentProcessor(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180057510(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057510(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800582b0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180057530(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057530(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058370(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180057550(int64_t param_1)
void FUN_180057550(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180057556(int64_t param_1)
void FUN_180057556(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180057580(void)
void FUN_180057580(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar4;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(int64_t *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(uint64_t *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_1800575b6(void)
void FUN_1800575b6(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_1800575d4(void)
void FUN_1800575d4(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_1800575f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800575f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058420(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180057610(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057610(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x69) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180057680(int64_t param_1)
void FUN_180057680(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(int64_t **)(lVar2 + 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar2 + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180057730(int64_t *param_1)
void FUN_180057730(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_18004bf50(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180057790(int64_t param_1)
void FUN_180057790(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180057796(int64_t param_1)
void FUN_180057796(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_1800577c0(void)
void FUN_1800577c0(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar4;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(int64_t *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(uint64_t *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_1800577f6(void)
void FUN_1800577f6(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180057814(void)
void FUN_180057814(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180057830(int64_t *param_1)
void FUN_180057830(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800578a0(void)
void FUN_1800578a0(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  puVar2 = system_operation_state;
  if (system_operation_state == (uint64_t *)0x0) {
    return;
  }
  FUN_180057830();
  if ((int64_t *)puVar2[0x30b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)puVar2[0x30b] + 0x38))();
  }
  _Mtx_destroy_in_situ();
  if ((int64_t *)puVar2[0x300] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)puVar2[0x300] + 0x38))();
  }
  if ((int64_t *)puVar2[0x2d3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)puVar2[0x2d3] + 0x38))();
  }
  if ((int64_t *)puVar2[0x2c0] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)puVar2[0x2c0] + 0x38))();
  }
  FUN_180090420(puVar2 + 0x116);
  FUN_180090380(puVar2 + 6);
  if (puVar2[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180057980(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057980(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int64_t lVar2;
  char *pcVar3;
  char *pcVar4;
  uint64_t uVar5;
  void *puStack_50;
  int64_t lStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  uVar5 = 0xfffffffffffffffe;
  pcVar3 = *(char **)(param_1 + 8);
  cVar1 = *pcVar3;
  pcVar4 = pcVar3;
  if (cVar1 != '\0') {
    do {
      lVar2 = strchr(param_3,(int)cVar1);
      if ((lVar2 != 0) && (pcVar4 != pcVar3)) {
        puStack_50 = &system_data_buffer_ptr;
        uStack_38 = 0;
        lStack_48 = 0;
        uStack_40 = 0;
        FUN_180628210(&puStack_50,pcVar4,(int)pcVar3 - (int)pcVar4,param_4,uVar5);
        pcVar4 = pcVar3 + 1;
        if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
          *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
          FUN_180627ae0();
        }
        else {
          FUN_180059820(param_2,&puStack_50);
        }
        puStack_50 = &system_data_buffer_ptr;
        if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_48 = 0;
        uStack_38 = uStack_38 & 0xffffffff00000000;
        puStack_50 = &system_state_ptr;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar3) {
      puStack_50 = &system_data_buffer_ptr;
      uStack_38 = 0;
      lStack_48 = 0;
      uStack_40 = 0;
      FUN_180628210(&puStack_50,pcVar4,(int)pcVar3 - (int)pcVar4,param_4,uVar5);
      if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
        *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_2,&puStack_50);
      }
      puStack_50 = &system_data_buffer_ptr;
      if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_180057b00(int64_t param_1,int64_t *param_2,uint64_t param_3)

{
  byte bVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t lVar6;
  uint64_t uVar7;
  char acStackX_8 [8];
  
  lVar3 = FUN_18062b420(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x28));
  FUN_180627ae0(lVar3 + 0x20,param_3);
  lVar4 = FUN_1800590b0(param_1,acStackX_8,lVar3 + 0x20);
  if (acStackX_8[0] == '\0') {
    FUN_18005d1f0();
    *param_2 = lVar4;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar4 != param_1) {
    if (*(int *)(lVar4 + 0x30) == 0) {
LAB_180057b97:
      uVar7 = 1;
      goto LAB_180057ba2;
    }
    if (*(int *)(lVar3 + 0x30) != 0) {
      pbVar5 = *(byte **)(lVar4 + 0x28);
      lVar6 = *(int64_t *)(lVar3 + 0x28) - (int64_t)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar2 = (uint)pbVar5[lVar6];
        if (bVar1 != uVar2) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 != 0);
      if ((int)(bVar1 - uVar2) < 1) goto LAB_180057b97;
    }
  }
  uVar7 = 0;
LAB_180057ba2:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,lVar4,param_1,uVar7);
}





// 函数: void FUN_180057bf0(uint64_t *param_1)
void FUN_180057bf0(uint64_t *param_1)

{
  if (param_1 == (uint64_t *)0x0) {
    return;
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[4] = &system_data_buffer_ptr;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180057cb0(uint64_t *param_1,uint param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_2976_ptr;
  FUN_18005e570(system_context_ptr,param_1[0x28],param_3,param_4,0xfffffffffffffffe);
  param_1[0x28] = 0;
  param_1[0x29] = &system_data_buffer_ptr;
  if (param_1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2c) = 0;
  param_1[0x29] = &system_state_ptr;
  FUN_180174950();
  if ((param_2 & 1) != 0) {
    free(param_1,0x170);
  }
  return param_1;
}





// 函数: void FUN_180057d70(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057d70(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180058020();
  FUN_180058020();
  param_1[0x123] = (int64_t)&system_data_buffer_ptr;
  if (param_1[0x124] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x124] = 0;
  *(int32_t *)(param_1 + 0x126) = 0;
  param_1[0x123] = (int64_t)&system_state_ptr;
  FUN_180058370(param_1 + 0x11d,param_1[0x11f],param_3,param_4,uVar3);
  if (param_1[0x119] == 0) {
    FUN_18005d580();
    FUN_18005d580();
    FUN_180058710(param_1 + 0x10b,param_1[0x10d]);
    param_1[0x87] = (int64_t)&system_state_ptr;
    param_1[4] = (int64_t)&system_state_ptr;
    uVar3 = 0xfffffffffffffffe;
    puVar1 = (uint64_t *)param_1[1];
    for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
    }
    if (*param_1 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180057e90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057e90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058710(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180057ec0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057ec0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_18005cb60(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}





// 函数: void FUN_180057ee0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057ee0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_180058710(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180057f10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180057f10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
    FUN_18005cb60(puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}





