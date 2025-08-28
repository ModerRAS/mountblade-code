#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// ============================================================================
// 99_part_01_part053.c - 高级数据处理和资源管理模块
// ============================================================================

/**
 * @file 99_part_01_part053.c
 * @brief 高级数据处理和资源管理模块
 * 
 * 本模块实现了游戏引擎中的高级数据处理、资源管理、内存分配和系统状态管理功能。
 * 包含数据结构操作、递归处理、内存池管理、资源清理和系统参数配置等核心功能。
 * 
 * 主要功能：
 * - 高级数据结构处理和排序
 * - 递归数据处理算法
 * - 内存池分配和管理
 * - 系统资源清理和释放
 * - 参数验证和状态管理
 * - 高级内存管理策略
 * 
 * @version 1.0
 * @author Claude Code
 * @date 2025-08-28
 */

// 系统常量定义
#define SYSTEM_MAX_ITERATIONS 0x1000000
#define SYSTEM_MEMORY_POOL_SIZE 0x12c300
#define SYSTEM_RESOURCE_THRESHOLD 0x1d
#define SYSTEM_STACK_BUFFER_SIZE 0x80
#define SYSTEM_ARRAY_SIZE_512 0x200
#define SYSTEM_SHIFT_MASK_16 0xfffffff0
#define SYSTEM_SHIFT_MASK_9 0xfffffe00
#define SYSTEM_PARAM_OFFSET_0x11a48 0x11a48
#define SYSTEM_PARAM_OFFSET_0x9a48 0x9a48
#define SYSTEM_PARAM_OFFSET_0x9b28 0x9b28
#define SYSTEM_PARAM_OFFSET_0x9a2c 0x9a2c
#define SYSTEM_PARAM_OFFSET_0x4648 0x4648
#define SYSTEM_PARAM_OFFSET_0x5860 0x5860
#define SYSTEM_PARAM_OFFSET_0x6b20 0x6b20
#define SYSTEM_PARAM_OFFSET_0x7618 0x7618
#define SYSTEM_PARAM_OFFSET_0x3d38 0x3d38
#define SYSTEM_PARAM_OFFSET_0x6a80 0x6a80
#define SYSTEM_PARAM_OFFSET_0x74e8 0x74e8

// 内存管理常量
#define MEMORY_BLOCK_SIZE_0x66000 0x66000
#define MEMORY_BLOCK_SIZE_0x5e000 0x5e000
#define MEMORY_BLOCK_SIZE_0x1f800 0x1f800
#define MEMORY_BLOCK_SIZE_0x12c30 0x12c30
#define MEMORY_BLOCK_SIZE_0x330 0x330
#define MEMORY_BLOCK_SIZE_0x2f0 0x2f0
#define MEMORY_BLOCK_SIZE_0xfc 0xfc

// 系统状态常量
#define SYSTEM_STATE_ACTIVE 1
#define SYSTEM_STATE_INACTIVE 0
#define SYSTEM_STATE_ERROR -1
#define SYSTEM_STATE_INITIALIZING 2
#define SYSTEM_STATE_CLEANUP 0xc

// 函数别名定义
#define DataStructureProcessor FUN_1800da760
#define DataStructureProcessorVariant FUN_1800da770
#define SystemCleanupExecutor FUN_1800da98f
#define SystemParameterHandler FUN_1800da9b0
#define MemoryPoolManager FUN_1800daa50
#define ResourceCleanupManager FUN_1800dabf0
#define MemoryManager_AllocateMediumPool FUN_1800dae20
#define MemoryManager_AllocateSmallPool FUN_1800daf60
#define MemoryManager_AllocateLargePool FUN_1800db0a0
#define ResourceManager_Handler FUN_1800db220
#define ParameterValidator FUN_1800db370
#define AdvancedResourceManager FUN_1800db460

// 辅助函数别名
#define DataStructureComparator func_0x0001800da750
#define MemoryAllocator FUN_18062b420
#define SystemInitializer FUN_1800e9790
#define MemoryManager FUN_1800e9540
#define MemoryPoolInitializer FUN_1800e9360
#define ResourceStateHandler FUN_180246810
#define SystemErrorHandler FUN_18064e900
#define SecurityChecker FUN_1808fc050
#define SystemContextInitializer FUN_18005e630
#define SystemParameterProcessor FUN_18005c650
#define SystemStateManager FUN_18005ea90
#define ResourceAllocator FUN_1800b1230
#define ParameterHandler FUN_1800b1d80

// 数据结构别名
#define DataBufferComparator FUN_1800eb380
#define DataSorter FUN_1800ea4a0
#define SystemBufferInitializer FUN_1800ea780

// 全局变量别名
#define SystemParameterBuffer system_parameter_buffer
#define SystemContextPtr system_context_ptr
#define SystemMemoryPoolPtr system_memory_pool_ptr
#define SystemSystemMemory system_system_memory
#define SystemStateManager SYSTEM_STATE_MANAGER

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * @brief 高级数据结构处理器
 * 
 * 本函数实现了复杂的数据结构处理算法，包括数据排序、递归处理和内存管理。
 * 使用高级算法对数据结构进行优化处理，支持大数据量的高效处理。
 * 
 * @param param_1 系统标识符
 * @param param_2 数据结构基础地址
 * @param param_3 输出参数缓冲区
 * 
 * 算法特点：
 * - 使用高效的排序算法
 * - 支持递归数据处理
 * - 实现内存优化管理
 * - 包含错误处理机制
 */
void DataStructureProcessor(uint64_t param_1, longlong param_2, ulonglong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lStackX_10;
  
  plVar8 = (longlong *)(param_2 + ((longlong)*(int *)(param_2 + 0x11a48) + 0x1349) * 8);
  plVar10 = (longlong *)(param_2 + 0x9a48);
  lStackX_10 = param_2;
  if (plVar10 != plVar8) {
    iVar5 = 0;
    lVar7 = (longlong)plVar8 - (longlong)plVar10 >> 3;
    for (lVar3 = lVar7; lVar3 != 0; lVar3 = lVar3 >> 1) {
      iVar5 = iVar5 + 1;
    }
    DataBufferComparator(plVar10, plVar8, (longlong)(iVar5 + -1) * 2);
    if (lVar7 < SYSTEM_RESOURCE_THRESHOLD) {
      DataSorter(plVar10, plVar8);
    }
    else {
      plVar6 = (longlong *)(param_2 + SYSTEM_PARAM_OFFSET_0x9b28);
      DataSorter(plVar10, plVar6);
      for (; plVar6 != plVar8; plVar6 = plVar6 + 1) {
        lVar3 = *plVar6;
        plVar4 = plVar6 + -1;
        cVar2 = DataStructureComparator(lVar3, *plVar4);
        plVar9 = plVar6;
        while (cVar2 != '\0') {
          lVar7 = *plVar4;
          plVar4 = plVar4 + -1;
          *plVar9 = lVar7;
          plVar9 = plVar9 + -1;
          cVar2 = DataStructureComparator(lVar3, *plVar4);
        }
        *plVar9 = lVar3;
      }
    }
  }
  bVar1 = false;
  iVar5 = 0;
  do {
    if (*(int *)(param_2 + SYSTEM_PARAM_OFFSET_0x11a48) <= iVar5) {
      if (!bVar1) {
        SystemStateManager(param_3, &lStackX_10);
      }
      return;
    }
    lVar3 = *plVar10;
    if ((-1 < *(int *)(lVar3 + SYSTEM_PARAM_OFFSET_0x9a2c)) && (!bVar1)) {
      plVar8 = (longlong *)param_3[1];
      bVar1 = true;
      if (plVar8 < (longlong *)param_3[2]) {
        param_3[1] = (ulonglong)(plVar8 + 1);
        *plVar8 = lStackX_10;
      }
      else {
        plVar6 = (longlong *)*param_3;
        lVar7 = (longlong)plVar8 - (longlong)plVar6 >> 3;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_1800da8e0:
          plVar4 = (longlong *)MemoryAllocator(SystemMemoryPoolPtr, lVar7 * 8, (char)param_3[3]);
          plVar6 = (longlong *)*param_3;
          plVar8 = (longlong *)param_3[1];
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_1800da8e0;
          plVar4 = (longlong *)0x0;
        }
        if (plVar6 != plVar8) {
                    // WARNING: Subroutine does not return
          memmove(plVar4, plVar6, (longlong)plVar8 - (longlong)plVar6);
        }
        *plVar4 = lStackX_10;
        if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
          SystemErrorHandler();
        }
        *param_3 = (ulonglong)plVar4;
        param_3[2] = (ulonglong)(plVar4 + lVar7);
        param_3[1] = (ulonglong)(plVar4 + 1);
      }
    }
    DataStructureProcessor(param_1, lVar3, param_3);
    iVar5 = iVar5 + 1;
    plVar10 = plVar10 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * @brief 数据结构处理器变体
 * 
 * 本函数是DataStructureProcessor的变体实现，针对特定的数据处理场景进行优化。
 * 包含额外的寄存器处理和栈管理，适用于复杂的数据处理环境。
 * 
 * @param param_1 系统标识符
 * @param param_2 数据结构基础地址
 * @param param_3 输出参数缓冲区
 */
void DataStructureProcessorVariant(uint64_t param_1, longlong param_2, ulonglong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong in_RAX;
  longlong lVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t unaff_RBX;
  longlong lVar10;
  uint64_t *puVar11;
  uint64_t unaff_RBP;
  uint64_t unaff_RDI;
  longlong *plVar12;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  longlong *plVar13;
  uint64_t unaff_R15;
  longlong *plVar14;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  longlong in_stack_00000078;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(longlong *)(in_RAX + 0x20) = param_2;
  lVar2 = *(longlong *)(in_RAX + 0x10);
  plVar1 = (longlong *)(lVar2 + ((longlong)*(int *)(param_2 + 0x11a48) + 0x1349) * 8);
  plVar14 = (longlong *)(lVar2 + 0x9a48);
  if (plVar14 != plVar1) {
    iVar8 = 0;
    lVar10 = (longlong)plVar1 - (longlong)plVar14 >> 3;
    for (lVar6 = lVar10; lVar6 != 0; lVar6 = lVar6 >> 1) {
      iVar8 = iVar8 + 1;
    }
    DataBufferComparator(plVar14, plVar1, (longlong)(iVar8 + -1) * 2);
    if (lVar10 < SYSTEM_RESOURCE_THRESHOLD) {
      DataSorter(plVar14, plVar1);
      param_2 = in_stack_00000078;
    }
    else {
      plVar13 = (longlong *)(lVar2 + SYSTEM_PARAM_OFFSET_0x9b28);
      DataSorter(plVar14, plVar13);
      param_2 = in_stack_00000078;
      for (; in_stack_00000078 = param_2, plVar13 != plVar1; plVar13 = plVar13 + 1) {
        lVar2 = *plVar13;
        plVar4 = plVar13 + -1;
        cVar5 = DataStructureComparator(lVar2, *plVar4);
        plVar12 = plVar13;
        while (cVar5 != '\0') {
          lVar6 = *plVar4;
          plVar4 = plVar4 + -1;
          *plVar12 = lVar6;
          plVar12 = plVar12 + -1;
          cVar5 = DataStructureComparator(lVar2, *plVar4);
        }
        *plVar12 = lVar2;
        param_2 = in_stack_00000078;
      }
    }
  }
  bVar3 = false;
  iVar8 = 0;
  do {
    if (*(int *)(param_2 + SYSTEM_PARAM_OFFSET_0x11a48) <= iVar8) {
      if (!bVar3) {
        SystemStateManager(param_3, &stack0x00000068);
      }
      return;
    }
    lVar2 = *plVar14;
    if ((-1 < *(int *)(lVar2 + SYSTEM_PARAM_OFFSET_0x9a2c)) && (!bVar3)) {
      puVar11 = (uint64_t *)param_3[1];
      bVar3 = true;
      if (puVar11 < (uint64_t *)param_3[2]) {
        param_3[1] = (ulonglong)(puVar11 + 1);
        *puVar11 = in_stack_00000068;
      }
      else {
        puVar9 = (uint64_t *)*param_3;
        lVar6 = (longlong)puVar11 - (longlong)puVar9 >> 3;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_1800da8e0:
          puVar7 = (uint64_t *)MemoryAllocator(SystemMemoryPoolPtr, lVar6 * 8, (char)param_3[3]);
          puVar9 = (uint64_t *)*param_3;
          puVar11 = (uint64_t *)param_3[1];
        }
        else {
          lVar6 = lVar6 * 2;
          if (lVar6 != 0) goto LAB_1800da8e0;
          puVar7 = (uint64_t *)0x0;
        }
        if (puVar9 != puVar11) {
                    // WARNING: Subroutine does not return
          memmove(puVar7, puVar9, (longlong)puVar11 - (longlong)puVar9);
        }
        *puVar7 = in_stack_00000068;
        if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
          SystemErrorHandler();
        }
        *param_3 = (ulonglong)puVar7;
        param_3[2] = (ulonglong)(puVar7 + lVar6);
        param_3[1] = (ulonglong)(puVar7 + 1);
      }
    }
    DataStructureProcessor(in_stack_00000060, lVar2, param_3);
    iVar8 = iVar8 + 1;
    plVar14 = plVar14 + 1;
    param_2 = in_stack_00000078;
  } while( true );
}






// 函数: void FUN_1800da98f(void)
void FUN_1800da98f(void)

{
  FUN_18005ea90();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800da9b0(void)
void FUN_1800da9b0(void)

{
  longlong lVar1;
  longlong alStack_30 [2];
  void *puStack_20;
  code *pcStack_18;
  
  lVar1 = system_parameter_buffer;
  if (*(int *)(system_parameter_buffer + 8) == 0) {
    FUN_18005e630(system_context_ptr);
    puStack_20 = &unknown_var_1632_ptr;
    pcStack_18 = FUN_1800ea780;
    alStack_30[0] = lVar1;
    FUN_18005c650(alStack_30);
  }
  else if (*(int *)(system_parameter_buffer + 8) == 2) {
    *(int32_t *)(system_parameter_buffer + 8) = 1;
  }
  if (system_system_memory != (longlong *)0x0) {
    (**(code **)(*system_system_memory + 0x18))();
  }
                    // WARNING: Could not recover jumptable at 0x0001800daa3e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(system_system_memory + 0x30))(0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800daa50(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  bool bVar11;
  
  lVar2 = system_parameter_buffer;
  lVar5 = system_parameter_buffer + 0x3d38;
  puVar7 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0x4648) * 0x488 + lVar5);
  LOCK();
  uVar1 = *puVar7;
  *puVar7 = *puVar7 + 1;
  UNLOCK();
  uVar3 = uVar1 >> 4;
  uVar9 = (ulonglong)uVar3;
  pcVar6 = (char *)((longlong)puVar7 + uVar9 + 0x408);
  puVar10 = puVar7 + (ulonglong)uVar3 * 2 + 2;
  do {
    iVar8 = (int)uVar9;
    if (*(longlong *)puVar10 == 0) {
      lVar4 = FUN_18062b420(system_memory_pool_ptr,0x12c300,0x25);
      LOCK();
      bVar11 = *(longlong *)(puVar7 + (longlong)iVar8 * 2 + 2) == 0;
      if (bVar11) {
        *(longlong *)(puVar7 + (longlong)iVar8 * 2 + 2) = lVar4;
      }
      UNLOCK();
      if (bVar11) {
        FUN_1800e9790(puVar7,iVar8 << 4);
        LOCK();
        *(int8_t *)((longlong)iVar8 + 0x408 + (longlong)puVar7) = 0;
        UNLOCK();
      }
      else {
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*pcVar6 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar6 != '\0');
    }
    pcVar6 = pcVar6 + 1;
    uVar9 = (ulonglong)(iVar8 + 1);
    puVar10 = puVar10 + 2;
  } while ((longlong)(pcVar6 + (-0x408 - (longlong)puVar7)) <= (longlong)(ulonglong)uVar3);
  lVar5 = *(longlong *)
           ((longlong)*(int *)(lVar2 + 0x4648) * 0x488 + lVar5 + 8 + (ulonglong)uVar3 * 8) +
          (ulonglong)(uVar1 - (uVar1 & 0xfffffff0)) * 0x12c30;
  FUN_180246810(lVar5);
  lVar2 = SYSTEM_STATE_MANAGER;
  *(bool *)(lVar5 + 0x9a38) = *(int *)(SYSTEM_STATE_MANAGER + 0x620) != -1;
  *(float *)(lVar5 + 0x9a40) = (float)*(int *)(lVar2 + 0xe0) * 20.0 + 70.0;
  *(int32_t *)(lVar5 + 0x9a34) = *(int32_t *)(lVar2 + 0x700);
  *(int32_t *)(lVar5 + 0x9a3c) = *(int32_t *)(lVar2 + 0xa80);
  return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800dabf0(void)
void FUN_1800dabf0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar9;
  ulonglong uVar8;
  
  lVar3 = system_parameter_buffer;
  FUN_18005e630(system_context_ptr);
  uVar9 = 0;
  plVar6 = (longlong *)((longlong)*(int *)(lVar3 + 0x5860) * 0x908 + lVar3 + 0x4658);
  uVar5 = uVar9;
  do {
    if (*plVar6 == 0) break;
    puVar4 = (uint64_t *)(*plVar6 + 0x1e0);
    uVar8 = uVar9;
    do {
      lVar1 = puVar4[-1];
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0xc;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar2 = (longlong *)puVar4[-5];
      puVar4[-5] = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      puVar4 = puVar4 + 0x66;
    } while (uVar7 < 0x200);
    uVar5 = uVar5 + 1;
    plVar6 = plVar6 + 1;
  } while ((longlong)uVar5 < 0x100);
  uVar7 = *(int *)(lVar3 + 0x5860) + 1U & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  plVar6 = (longlong *)(lVar3 + 0x4658 + (longlong)(int)uVar7 * 0x908);
  uVar5 = uVar9;
  do {
    if (*plVar6 == 0) {
      return;
    }
    puVar4 = (uint64_t *)(*plVar6 + 0x1e0);
    uVar8 = uVar9;
    do {
      lVar3 = puVar4[-1];
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0xc;
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar2 = (longlong *)puVar4[-5];
      puVar4[-5] = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      puVar4 = puVar4 + 0x66;
    } while (uVar7 < 0x200);
    uVar5 = uVar5 + 1;
    plVar6 = plVar6 + 1;
  } while ((longlong)uVar5 < 0x100);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800dae20(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  bool bVar11;
  
  lVar2 = system_parameter_buffer;
  lVar5 = system_parameter_buffer + 18000;
  puVar7 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0x5860) * 0x908 + lVar5);
  LOCK();
  uVar1 = *puVar7;
  *puVar7 = *puVar7 + 1;
  UNLOCK();
  uVar3 = uVar1 >> 9;
  uVar9 = (ulonglong)uVar3;
  pcVar6 = (char *)((longlong)puVar7 + uVar9 + 0x808);
  puVar10 = puVar7 + (ulonglong)uVar3 * 2 + 2;
  do {
    iVar8 = (int)uVar9;
    if (*(longlong *)puVar10 == 0) {
      lVar4 = FUN_18062b420(system_memory_pool_ptr,0x66000,0x25);
      LOCK();
      bVar11 = *(longlong *)(puVar7 + (longlong)iVar8 * 2 + 2) == 0;
      if (bVar11) {
        *(longlong *)(puVar7 + (longlong)iVar8 * 2 + 2) = lVar4;
      }
      UNLOCK();
      if (bVar11) {
        FUN_1800e9540(puVar7,iVar8 << 9);
        LOCK();
        *(int8_t *)((longlong)iVar8 + 0x808 + (longlong)puVar7) = 0;
        UNLOCK();
      }
      else {
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*pcVar6 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar6 != '\0');
    }
    pcVar6 = pcVar6 + 1;
    uVar9 = (ulonglong)(iVar8 + 1);
    puVar10 = puVar10 + 2;
  } while ((longlong)(pcVar6 + (-0x808 - (longlong)puVar7)) <= (longlong)(ulonglong)uVar3);
  return *(longlong *)
          ((longlong)*(int *)(lVar2 + 0x5860) * 0x908 + lVar5 + 8 + (ulonglong)uVar3 * 8) +
         (ulonglong)(uVar1 - (uVar1 & 0xfffffe00)) * 0x330;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800daf60(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  bool bVar11;
  
  lVar2 = system_parameter_buffer;
  lVar5 = system_parameter_buffer + 0x6a80;
  puVar7 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0x6b20) * 0x50 + lVar5);
  LOCK();
  uVar1 = *puVar7;
  *puVar7 = *puVar7 + 1;
  UNLOCK();
  uVar3 = uVar1 >> 9;
  uVar9 = (ulonglong)uVar3;
  pcVar6 = (char *)((longlong)puVar7 + uVar9 + 0x48);
  puVar10 = puVar7 + (ulonglong)uVar3 * 2 + 2;
  do {
    iVar8 = (int)uVar9;
    if (*(longlong *)puVar10 == 0) {
      lVar4 = FUN_18062b420(system_memory_pool_ptr,0x5e000,0x25);
      LOCK();
      bVar11 = *(longlong *)(puVar7 + (longlong)iVar8 * 2 + 2) == 0;
      if (bVar11) {
        *(longlong *)(puVar7 + (longlong)iVar8 * 2 + 2) = lVar4;
      }
      UNLOCK();
      if (bVar11) {
        FUN_1800e9360(puVar7,iVar8 << 9);
        LOCK();
        *(int8_t *)((longlong)iVar8 + 0x48 + (longlong)puVar7) = 0;
        UNLOCK();
      }
      else {
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*pcVar6 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar6 != '\0');
    }
    pcVar6 = pcVar6 + 1;
    uVar9 = (ulonglong)(iVar8 + 1);
    puVar10 = puVar10 + 2;
  } while ((longlong)(pcVar6 + (-0x48 - (longlong)puVar7)) <= (longlong)(ulonglong)uVar3);
  return *(longlong *)((longlong)*(int *)(lVar2 + 0x6b20) * 0x50 + lVar5 + 8 + (ulonglong)uVar3 * 8)
         + (ulonglong)(uVar1 - (uVar1 & 0xfffffe00)) * 0x2f0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800db0a0(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  bool bVar14;
  
  lVar3 = system_parameter_buffer;
  lVar12 = system_parameter_buffer + 0x74e8;
  puVar11 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0x7618) * 0x98 + lVar12);
  LOCK();
  uVar2 = *puVar11;
  *puVar11 = *puVar11 + 1;
  UNLOCK();
  uVar4 = uVar2 >> 9;
  uVar10 = (ulonglong)uVar4;
  pcVar8 = (char *)((longlong)puVar11 + uVar10 + 0x88);
  puVar13 = puVar11 + (ulonglong)uVar4 * 2 + 2;
  do {
    iVar9 = (int)uVar10;
    if (*(longlong *)puVar13 == 0) {
      lVar6 = FUN_18062b420(system_memory_pool_ptr,0x1f800,0x25);
      LOCK();
      bVar14 = *(longlong *)(puVar11 + (longlong)iVar9 * 2 + 2) == 0;
      if (bVar14) {
        *(longlong *)(puVar11 + (longlong)iVar9 * 2 + 2) = lVar6;
      }
      UNLOCK();
      if (bVar14) {
        uVar5 = iVar9 * 0x200;
        iVar1 = uVar5 + 0x200;
        for (; (int)uVar5 < iVar1; uVar5 = uVar5 + 1) {
          lVar6 = *(longlong *)(puVar11 + (ulonglong)(uVar5 >> 9) * 2 + 2);
          lVar7 = (longlong)(int)(uVar5 + (uVar5 >> 9) * -0x200) * 0xfc;
          *(int8_t *)(lVar6 + lVar7) = 0;
          *(uint64_t *)(lVar6 + 0xf4 + lVar7) = 0xffffffffffffffff;
        }
        LOCK();
        *(int8_t *)((longlong)iVar9 + 0x88 + (longlong)puVar11) = 0;
        UNLOCK();
      }
      else {
        if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*pcVar8 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar8 != '\0');
    }
    pcVar8 = pcVar8 + 1;
    uVar10 = (ulonglong)(iVar9 + 1);
    puVar13 = puVar13 + 2;
  } while ((longlong)(pcVar8 + (-0x88 - (longlong)puVar11)) <= (longlong)(ulonglong)uVar4);
  return *(longlong *)
          ((longlong)*(int *)(lVar3 + 0x7618) * 0x98 + lVar12 + 8 + (ulonglong)uVar4 * 8) +
         (ulonglong)(uVar2 - (uVar2 & 0xfffffe00)) * 0xfc;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800db220(longlong param_1,longlong *param_2,uint64_t param_3)
void FUN_1800db220(longlong param_1,longlong *param_2,uint64_t param_3)

{
  char cVar1;
  longlong *plVar2;
  void *puVar3;
  longlong lVar4;
  int8_t auStack_108 [32];
  int32_t uStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_108;
  uStack_e8 = 0;
  puStack_c8 = &unknown_var_3432_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = *(int32_t *)(param_1 + 0x10);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_1 + 8);
  }
  strcpy_s(auStack_b0,0x80,puVar3);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    cVar1 = func_0x0001800ba3b0(lVar4 + 0x108,param_3);
    if ((cVar1 != '\0') && (*(int *)(lVar4 + 0x380) != 0)) goto LAB_1800db339;
  }
  plVar2 = (longlong *)FUN_1800b1230(system_resource_state,&plStack_d8,&puStack_c8,param_3);
  uStack_e8 = 1;
  lVar4 = *plVar2;
  *plVar2 = 0;
  plStack_e0 = (longlong *)*param_2;
  *param_2 = lVar4;
  if (plStack_e0 != (longlong *)0x0) {
    (**(code **)(*plStack_e0 + 0x38))();
  }
  uStack_e8 = 0;
  if (plStack_d8 != (longlong *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
LAB_1800db339:
  puStack_c8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_108);
}






// 函数: void FUN_1800db370(float param_1,longlong *param_2,int *param_3)
void FUN_1800db370(float param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t in_RCX;
  longlong *plStackX_20;
  
  lVar1 = *param_2;
  if ((((((lVar1 == 0) || (*(int *)(lVar1 + 0x140) != *param_3)) ||
        (*(int *)(lVar1 + 0x144) != param_3[1])) ||
       ((*(int *)(lVar1 + 0x148) != param_3[2] || (*(int *)(lVar1 + 0x14c) != param_3[3])))) ||
      ((param_1 = (float)param_3[4], param_1 != *(float *)(lVar1 + 0x150) ||
       ((*(char *)(lVar1 + 0x154) != (char)param_3[5] ||
        (*(char *)(lVar1 + 0x157) != *(char *)((longlong)param_3 + 0x17))))))) ||
     ((*(char *)(lVar1 + 0x156) != *(char *)((longlong)param_3 + 0x16) ||
      (*(int *)(lVar1 + 0x380) == 0)))) {
    plVar2 = (longlong *)FUN_1800b1d80(param_1,&plStackX_20,in_RCX,param_3,0xfffffffffffffffe);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plVar2 = (longlong *)*param_2;
    *param_2 = lVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001800db44e. Too many branches
                    // WARNING: Treating indirect jump as call
  _Thrd_id();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800db460(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
void FUN_1800db460(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5,uint64_t param_6,int32_t param_7)

{
  longlong lVar1;
  longlong *plVar2;
  void *puVar3;
  int8_t auStack_158 [32];
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int8_t uStack_114;
  uint64_t uStack_113;
  int32_t uStack_108;
  int8_t uStack_104;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  uint64_t uStack_e8;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  lVar1 = *param_2;
  if ((((lVar1 == 0) || (*(short *)(lVar1 + 0x32c) != 0x80)) || (*(short *)(lVar1 + 0x32e) != 0x80))
     || ((*(int *)(lVar1 + 0x324) != 0x1e || (*(int *)(lVar1 + 0x380) == 0)))) {
    plStack_100 = (longlong *)*param_2;
    *param_2 = 0;
    if (plStack_100 != (longlong *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
    uStack_12c = 1;
    uStack_113 = 0x1000001;
    uStack_104 = 0;
    uStack_138 = 0x80;
    uStack_134 = 0x80;
    uStack_130 = 6;
    uStack_128 = 0x1e;
    uStack_114 = param_5;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_108 = param_7;
    puStack_d8 = &unknown_var_3432_ptr;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = *(int32_t *)(param_1 + 0x10);
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_1 + 8);
    }
    strcpy_s(auStack_c0,0x80,puVar3);
    plVar2 = (longlong *)FUN_1800b1230(system_resource_state,&plStack_f0,&puStack_d8,&uStack_138);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_f8 = (longlong *)*param_2;
    *param_2 = lVar1;
    if (plStack_f8 != (longlong *)0x0) {
      (**(code **)(*plStack_f8 + 0x38))();
    }
    if (plStack_f0 != (longlong *)0x0) {
      (**(code **)(*plStack_f0 + 0x38))();
    }
    puStack_d8 = &unknown_var_720_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




