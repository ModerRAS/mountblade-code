#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * @file 03_rendering_part110.c
 * @brief 渲染系统高级资源管理和数据处理模块
 * 
 * 本模块包含6个核心函数，涵盖渲染系统高级资源管理、数据处理、
 * 内存分配、文件操作、线程同步和系统清理等高级渲染功能。
 */

/**
 * @defgroup rendering_constants 渲染系统常量定义
 * @{
 */
#define RENDERING_RESOURCE_POOL_SIZE 0x100000
#define RENDERING_BUFFER_SIZE 0x18
#define RENDERING_HASH_TABLE_SIZE 0x80
#define RENDERING_DATA_BLOCK_SIZE 0xe0
#define RENDERING_LARGE_BUFFER_SIZE 0x1b0
#define RENDERING_THREAD_TIMEOUT 0x30000
#define RENDERING_ALIGNMENT_MASK 0x1f
#define RENDERING_MAX_ITERATIONS 0x40
#define RENDERING_MUTEX_TIMEOUT_MS 0x30000
#define RENDERING_CLEANUP_FLAG 3
#define RENDERING_RESOURCE_ID_OFFSET 0x6c8
#define RENDERING_CONTEXT_OFFSET 0x9f8
#define RENDERING_OUTPUT_OFFSET 0xa00
/* @} */

/**
 * @defgroup rendering_function_aliases 渲染系统函数别名
 * @{
 */
#define RenderingSystem_RemoveResourceData FUN_180333a00
#define RenderingSystem_InitializeResourceHandler FUN_1803342d0
#define RenderingSystem_CreateResourcePath FUN_180334430
#define RenderingSystem_CreateDataPath FUN_180334500
#define RenderingSystem_ProcessResourceData FUN_1803345c0
#define RenderingSystem_ManageResourceData FUN_1803347d0
#define RenderingSystem_OptimizeResourceData FUN_18033483c
#define RenderingSystem_CleanupResourceHandler FUN_180334921
#define RenderingSystem_GetResourceData FUN_180334930
/* @} */

/**
 * @brief 渲染系统资源数据移除器
 * 
 * 该函数负责移除渲染系统资源数据，包括资源查找、数据清理、
 * 内存释放、哈希表操作和线程同步等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param resource_id 资源ID
 * @return void
 */
void RenderingSystem_RemoveResourceData(longlong resource_context, uint resource_id)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong **ppuVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint64_t *puVar11;
  uint *puVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  uint64_t *puVar18;
  uint *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  uint auStackX_10 [2];
  ulonglong *puStackX_18;
  ulonglong **ppuStackX_20;
  uint *puStack_a8;
  uint *puStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  uint *puStack_88;
  uint *puStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  ulonglong *puStack_60;
  ulonglong **ppuStack_58;
  
  uStack_68 = 0xfffffffffffffffe;
  uVar21 = (ulonglong)param_2;
  puVar7 = (ulonglong *)FUN_18062b1e0(system_memory_pool_ptr,0xe0,8,3);
  FUN_180049830(puVar7);
  *puVar7 = (ulonglong)&unknown_var_7880_ptr;
  puVar1 = puVar7 + 0x18;
  *puVar1 = 0;
  puVar7[0x19] = 0;
  puVar7[0x1a] = 0;
  *(int32_t *)(puVar7 + 0x1b) = 3;
  puStackX_18 = puVar1;
  puStack_60 = puVar7;
  (**(code **)(*puVar7 + 0x28))(puVar7);
  iVar6 = _Mtx_lock(param_1 + 0xa20);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  puStack_88 = (uint *)0x0;
  puStack_80 = (uint *)0x0;
  uStack_78 = 0;
  uStack_70 = 3;
  FUN_18032b1c0(param_1,&puStack_88,param_2,1);
  ppuStackX_20 = (ulonglong **)puStack_88;
  if (puStack_88 != puStack_80) {
    do {
      uVar2 = *(uint *)ppuStackX_20;
      uVar9 = (ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0xa00);
      for (puVar8 = *(uint **)(*(longlong *)(param_1 + 0x9f8) + uVar9 * 8); puVar8 != (uint *)0x0;
          puVar8 = *(uint **)(puVar8 + 4)) {
        if (uVar2 == *puVar8) {
          if (puVar8 != (uint *)0x0) goto LAB_180333bb3;
          break;
        }
      }
      FUN_18066c220(param_1 + 0xa10,&puStackX_18,(ulonglong)*(uint *)(param_1 + 0xa00),
                    *(int32_t *)(param_1 + 0xa08),1);
      puVar8 = (uint *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0xa1c));
      *puVar8 = uVar2;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      if ((char)puStackX_18 != '\0') {
        uVar9 = (ulonglong)uVar2 % ((ulonglong)puStackX_18 >> 0x20);
        FUN_18033bf30(param_1 + 0x9f0);
      }
      *(uint64_t *)(puVar8 + 4) = *(uint64_t *)(*(longlong *)(param_1 + 0x9f8) + uVar9 * 8);
      *(uint **)(*(longlong *)(param_1 + 0x9f8) + uVar9 * 8) = puVar8;
      *(longlong *)(param_1 + 0xa08) = *(longlong *)(param_1 + 0xa08) + 1;
LAB_180333bb3:
      lVar10 = *(longlong *)(puVar8 + 2);
      uVar23 = 0;
      lVar15 = *(longlong *)(lVar10 + 8);
      for (puVar8 = *(uint **)(lVar15 + (uVar21 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
        if (param_2 == *puVar8) {
          uVar9 = *(ulonglong *)(lVar10 + 0x10);
          goto LAB_180333bee;
        }
      }
      uVar9 = *(ulonglong *)(lVar10 + 0x10);
      puVar8 = *(uint **)(lVar15 + uVar9 * 8);
LAB_180333bee:
      if (puVar8 != *(uint **)(lVar15 + uVar9 * 8)) {
        uVar23 = *(uint64_t *)(puVar8 + 2);
        puVar8 = (uint *)(lVar15 + (uVar21 % (uVar9 & 0xffffffff)) * 8);
        puVar12 = *(uint **)puVar8;
        while ((puVar12 != (uint *)0x0 && (param_2 != *puVar12))) {
          puVar8 = puVar12 + 4;
          puVar12 = *(uint **)puVar8;
        }
        puVar20 = (uint *)0x0;
        if (puVar12 != (uint *)0x0) {
          do {
            puVar19 = puVar12;
            if (param_2 != *puVar19) break;
            *(uint64_t *)puVar8 = *(uint64_t *)(puVar19 + 4);
            *(uint **)(puVar19 + 4) = puVar20;
            *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + -1;
            puVar12 = *(uint **)puVar8;
            puVar20 = puVar19;
          } while (*(uint **)puVar8 != (uint *)0x0);
          if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar20);
          }
        }
      }
      puVar22 = (uint64_t *)puVar7[0x19];
      if (puVar22 < (uint64_t *)puVar7[0x1a]) {
        puVar7[0x19] = (ulonglong)(puVar22 + 1);
        *puVar22 = uVar23;
      }
      else {
        puVar18 = (uint64_t *)*puVar1;
        lVar10 = (longlong)puVar22 - (longlong)puVar18 >> 3;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_180333cae:
          puVar11 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar10 * 8,(char)puVar7[0x1b]);
          puVar22 = (uint64_t *)puVar7[0x19];
          puVar18 = (uint64_t *)*puVar1;
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_180333cae;
          puVar11 = (uint64_t *)0x0;
        }
        if (puVar18 != puVar22) {
                    // WARNING: Subroutine does not return
          memmove(puVar11,puVar18,(longlong)puVar22 - (longlong)puVar18);
        }
        *puVar11 = uVar23;
        if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar1 = (ulonglong)puVar11;
        puVar7[0x19] = (ulonglong)(puVar11 + 1);
        puVar7[0x1a] = (ulonglong)(puVar11 + lVar10);
      }
      ppuStackX_20 = (ulonglong **)((longlong)ppuStackX_20 + 4);
    } while (ppuStackX_20 != (ulonglong **)puStack_80);
  }
  if (puStack_88 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  iVar6 = _Mtx_unlock(param_1 + 0xa20);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  uVar23 = system_context_ptr;
  ppuStackX_20 = &puStackX_18;
  puStackX_18 = puVar7;
  (**(code **)(*puVar7 + 0x28))(puVar7);
  FUN_18005e110(uVar23,&puStackX_18);
  puStack_a8 = (uint *)0x0;
  puStack_a0 = (uint *)0x0;
  uStack_98 = 0;
  uStack_90 = 3;
  FUN_18032afa0(param_1,&puStack_a8,param_2);
  if (puStack_a8 != puStack_a0) {
    puVar8 = puStack_a8;
    do {
      uVar2 = *puVar8;
      uVar9 = (ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0x6c8);
      for (puVar12 = *(uint **)(*(longlong *)(param_1 + 0x6c0) + uVar9 * 8); puVar12 != (uint *)0x0;
          puVar12 = *(uint **)(puVar12 + 4)) {
        if (uVar2 == *puVar12) {
          if (puVar12 != (uint *)0x0) goto LAB_180333e7e;
          break;
        }
      }
      FUN_18066c220(param_1 + 0x6d8,&puStackX_18,(ulonglong)*(uint *)(param_1 + 0x6c8),
                    *(int32_t *)(param_1 + 0x6d0),1);
      puVar12 = (uint *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x6e4));
      *puVar12 = uVar2;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      if ((char)puStackX_18 != '\0') {
        uVar9 = (ulonglong)uVar2 % ((ulonglong)puStackX_18 >> 0x20);
        FUN_18033bf30(param_1 + 0x6b8);
      }
      *(uint64_t *)(puVar12 + 4) = *(uint64_t *)(*(longlong *)(param_1 + 0x6c0) + uVar9 * 8);
      *(uint **)(*(longlong *)(param_1 + 0x6c0) + uVar9 * 8) = puVar12;
      *(longlong *)(param_1 + 0x6d0) = *(longlong *)(param_1 + 0x6d0) + 1;
LAB_180333e7e:
      lVar10 = *(longlong *)(puVar12 + 2);
      lVar15 = *(longlong *)(lVar10 + 8);
      for (puVar12 = *(uint **)(lVar15 + (uVar21 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
          puVar12 != (uint *)0x0; puVar12 = *(uint **)(puVar12 + 4)) {
        if (param_2 == *puVar12) {
          lVar13 = *(longlong *)(lVar10 + 0x10);
          goto LAB_180333eb9;
        }
      }
      lVar13 = *(longlong *)(lVar10 + 0x10);
      puVar12 = *(uint **)(lVar15 + lVar13 * 8);
LAB_180333eb9:
      ppuVar5 = ppuStackX_20;
      if (puVar12 != *(uint **)(lVar15 + lVar13 * 8)) {
        ppuStackX_20 = *(ulonglong ***)(puVar12 + 2);
        if (ppuStackX_20 != (ulonglong **)0x0) {
          *(void **)((longlong)ppuStackX_20 + 0x50) = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12 = (uint *)(*(longlong *)(lVar10 + 8) +
                          (uVar21 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
        puVar20 = *(uint **)puVar12;
        while ((puVar20 != (uint *)0x0 && (param_2 != *puVar20))) {
          puVar12 = puVar20 + 4;
          puVar20 = *(uint **)puVar12;
        }
        puVar19 = (uint *)0x0;
        ppuVar5 = (ulonglong **)0x0;
        if (puVar20 != (uint *)0x0) {
          do {
            puVar14 = puVar20;
            if (param_2 != *puVar14) break;
            *(uint64_t *)puVar12 = *(uint64_t *)(puVar14 + 4);
            *(uint **)(puVar14 + 4) = puVar19;
            *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + -1;
            puVar20 = *(uint **)puVar12;
            puVar19 = puVar14;
          } while (*(uint **)puVar12 != (uint *)0x0);
          if (puVar19 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar19);
          }
        }
      }
      ppuStackX_20 = ppuVar5;
      puVar8 = puVar8 + 1;
    } while (puVar8 != puStack_a0);
  }
  lVar10 = *(longlong *)(param_1 + 0x570);
  for (puVar8 = *(uint **)(lVar10 + (uVar21 % (ulonglong)*(uint *)(param_1 + 0x578)) * 8);
      puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
    if (param_2 == *puVar8) {
      lVar15 = *(longlong *)(param_1 + 0x578);
      goto LAB_180333fbc;
    }
  }
  lVar15 = *(longlong *)(param_1 + 0x578);
  puVar8 = *(uint **)(lVar10 + lVar15 * 8);
LAB_180333fbc:
  if (puVar8 != *(uint **)(lVar10 + lVar15 * 8)) {
    puStackX_18 = *(ulonglong **)(puVar8 + 2);
    if (puStackX_18 != (ulonglong *)0x0) {
      if (*puStackX_18 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puStackX_18);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8 = (uint *)(*(longlong *)(param_1 + 0x570) +
                     (uVar21 % (ulonglong)*(uint *)(param_1 + 0x578)) * 8);
    puVar12 = *(uint **)puVar8;
    while ((puVar12 != (uint *)0x0 && (param_2 != *puVar12))) {
      puVar8 = puVar12 + 4;
      puVar12 = *(uint **)puVar8;
    }
    puVar20 = (uint *)0x0;
    if (puVar12 != (uint *)0x0) {
      do {
        puVar19 = puVar12;
        if (param_2 != *puVar19) break;
        *(uint64_t *)puVar8 = *(uint64_t *)(puVar19 + 4);
        *(uint **)(puVar19 + 4) = puVar20;
        *(longlong *)(param_1 + 0x580) = *(longlong *)(param_1 + 0x580) + -1;
        puVar12 = *(uint **)puVar8;
        puVar20 = puVar19;
      } while (*(uint **)puVar8 != (uint *)0x0);
      if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar20);
      }
    }
  }
  puVar1 = (ulonglong *)(param_1 + 0x818);
  puVar17 = puVar1;
  puVar3 = *(ulonglong **)(param_1 + 0x828);
  while (puVar16 = puVar1, puVar4 = *(ulonglong **)(param_1 + 0x828), puVar3 != (ulonglong *)0x0) {
    if (param_2 < (uint)puVar3[4]) {
      puVar17 = puVar3;
      puVar3 = (ulonglong *)puVar3[1];
    }
    else {
      puVar3 = (ulonglong *)*puVar3;
    }
  }
  while (puVar8 = puStack_a8, puVar4 != (ulonglong *)0x0) {
    if ((uint)puVar4[4] < param_2) {
      puVar4 = (ulonglong *)*puVar4;
    }
    else {
      puVar16 = puVar4;
      puVar4 = (ulonglong *)puVar4[1];
    }
  }
  while (puStackX_18 = puVar1, puStack_a8 = puVar8, puVar16 != puVar17) {
    ppuVar5 = (ulonglong **)puVar16[5];
    ppuStackX_20 = ppuVar5;
    if (ppuVar5 != (ulonglong **)0x0) {
      FUN_1808fc8a8(ppuVar5 + 7,0x30,4,FUN_18004a130);
      ppuStack_58 = ppuVar5 + 3;
      *ppuStack_58 = (ulonglong *)&unknown_var_3456_ptr;
      if (ppuVar5[4] == (ulonglong *)0x0) {
        ppuVar5[4] = (ulonglong *)0x0;
        *(int32_t *)(ppuVar5 + 6) = 0;
        *ppuStack_58 = (ulonglong *)&unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900(ppuVar5);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar16 = (ulonglong *)func_0x00018066bd70(puVar16);
    puVar1 = puStackX_18;
    puVar8 = puStack_a8;
  }
  auStackX_10[0] = param_2;
  FUN_18033ad80(param_1 + 0x4a8,auStackX_10);
  auStackX_10[0] = param_2;
  FUN_18033ad80(param_1 + 0x638,auStackX_10);
  puVar17 = (ulonglong *)puVar1[2];
  puVar3 = puVar1;
  while (puVar4 = puVar17, puVar16 = (ulonglong *)puVar1[2], puVar17 = puVar1,
        puVar4 != (ulonglong *)0x0) {
    if (param_2 < (uint)puVar4[4]) {
      puVar17 = (ulonglong *)puVar4[1];
      puVar3 = puVar4;
    }
    else {
      puVar17 = (ulonglong *)*puVar4;
    }
  }
  while (puVar4 = puVar16, puVar16 = puVar17, puVar4 != (ulonglong *)0x0) {
    if ((uint)puVar4[4] < param_2) {
      puVar16 = (ulonglong *)*puVar4;
    }
    else {
      puVar16 = (ulonglong *)puVar4[1];
      puVar17 = puVar4;
    }
  }
  for (; puVar16 != puVar3; puVar16 = (ulonglong *)func_0x00018066bd70(puVar16)) {
  }
  if ((puVar17 == (ulonglong *)puVar1[1]) && (puVar3 == puVar1)) {
    puVar22 = (uint64_t *)puVar1[2];
    if (puVar22 != (uint64_t *)0x0) {
      FUN_18004b790(puVar1,*puVar22);
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar22);
    }
    *puVar1 = (ulonglong)puVar1;
    puVar1[1] = (ulonglong)puVar1;
    puVar1[2] = 0;
    *(int8_t *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
  }
  else {
    while (puVar4 = puVar17, puVar4 != puVar3) {
      puVar1[4] = puVar1[4] - 1;
      puVar17 = (ulonglong *)func_0x00018066bd70(puVar4);
      FUN_18066ba00(puVar4,puVar1);
      if (puVar4 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar4);
      }
    }
  }
  if (puVar8 == (uint *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001803342c7. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*puVar7 + 0x38))();
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源处理器初始化器
 * 
 * 该函数负责初始化渲染系统资源处理器，包括文件操作、内存分配、
 * 资源清理和路径处理等高级渲染功能。
 * 
 * @param resource_manager 资源管理器指针
 * @param init_flag 初始化标志
 * @param process_flag 处理标志
 * @return void
 */
void RenderingSystem_InitializeResourceHandler(longlong resource_manager, char init_flag, char process_flag)

{
  uint64_t *puVar1;
  longlong lVar2;
  void *puVar3;
  void *puVar4;
  uint64_t uVar5;
  void *puStack_40;
  longlong lStack_38;
  
  uVar5 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      fclose();
      *(uint64_t *)(lVar2 + 8) = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      lVar2 = *(longlong *)(param_1 + 0x200);
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        fclose();
        *(uint64_t *)(lVar2 + 8) = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
    *(uint64_t *)(param_1 + 0x200) = 0;
  }
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,3,uVar5);
  if (param_2 == '\0') {
    puVar4 = &unknown_var_7864_ptr;
    if (param_3 != '\0') {
      puVar4 = &unknown_var_9772_ptr;
    }
  }
  else {
    puVar4 = &unknown_var_4880_ptr;
  }
  lVar2 = FUN_180334430(param_1,&puStack_40);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar2 + 8);
  }
  *puVar1 = 0;
  *(int8_t *)(puVar1 + 2) = 0;
  FUN_18062dee0(puVar1,puVar3,puVar4);
  *(uint64_t **)(param_1 + 0x200) = puVar1;
  puStack_40 = &unknown_var_3456_ptr;
  if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



/**
 * @brief 渲染系统资源路径创建器
 * 
 * 该函数负责创建渲染系统资源路径，包括路径处理、字符串操作、
 * 缓冲区管理和路径验证等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param path_buffer 路径缓冲区指针
 * @param param3 参数3
 * @param param4 参数4
 * @return uint64_t* 返回路径缓冲区指针
 */
uint64_t *
RenderingSystem_CreateResourcePath(longlong resource_context, uint64_t *path_buffer, uint64_t param3, uint64_t param4)

{
  int iVar1;
  uint64_t *puVar2;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_180627be0(param_2,param_1 + 0x208,0,param_4,2,0xfffffffffffffffe);
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0xd);
  puVar2 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x7461645f6f70692f;
  *(int32_t *)(puVar2 + 1) = 0x69622e61;
  *(int16_t *)((longlong)puVar2 + 0xc) = 0x6e;
  *(int *)(param_2 + 2) = iVar1 + 0xd;
  return param_2;
}



/**
 * @brief 渲染系统数据路径创建器
 * 
 * 该函数负责创建渲染系统数据路径，包括路径处理、字符串操作、
 * 缓冲区管理和数据验证等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param path_buffer 路径缓冲区指针
 * @param param3 参数3
 * @param param4 参数4
 * @return uint64_t* 返回路径缓冲区指针
 */
uint64_t *
RenderingSystem_CreateDataPath(longlong resource_context, uint64_t *path_buffer, uint64_t param3, uint64_t param4)

{
  int iVar1;
  uint64_t *puVar2;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_180627be0(param_2,param_1 + 0x208,0,param_4,2,0xfffffffffffffffe);
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0x10);
  puVar2 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x5f7265646165682f;
  puVar2[1] = 0x6e69622e61746164;
  *(int8_t *)(puVar2 + 2) = 0;
  *(int *)(param_2 + 2) = iVar1 + 0x10;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据处理器
 * 
 * 该函数负责处理渲染系统资源数据，包括数据读取、内存管理、
 * 缓冲区操作和数据验证等高级渲染功能。
 * 
 * @param resource_data 资源数据指针
 * @return void
 */
void RenderingSystem_ProcessResourceData(uint64_t resource_data)

{
  int8_t auStack_1b8 [64];
  int8_t auStack_178 [40];
  uint64_t uStack_150;
  int8_t auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1b8;
  FUN_180320f40(param_1,auStack_178);
                    // WARNING: Subroutine does not return
  memset(auStack_148,0,0x100);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据管理器
 * 
 * 该函数负责管理渲染系统资源数据，包括数据遍历、资源查找、
 * 内存分配和动态扩容等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param data_array 数据数组指针
 * @param resource_id 资源ID
 * @return void
 */
void RenderingSystem_ManageResourceData(longlong resource_context, ulonglong *data_array, uint resource_id)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  
  puVar4 = (uint64_t *)(param_1 + 0x818);
  puVar7 = *(uint64_t **)(param_1 + 0x828);
  puVar5 = puVar7;
  puVar6 = puVar4;
  if (puVar7 != (uint64_t *)0x0) {
    do {
      if (param_3 < *(uint *)(puVar5 + 4)) {
        puVar6 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
      else {
        puVar5 = (uint64_t *)*puVar5;
      }
    } while (puVar5 != (uint64_t *)0x0);
    while (puVar7 != (uint64_t *)0x0) {
      if (*(uint *)(puVar7 + 4) < param_3) {
        puVar7 = (uint64_t *)*puVar7;
      }
      else {
        puVar4 = puVar7;
        puVar7 = (uint64_t *)puVar7[1];
      }
    }
  }
  do {
    if (puVar4 == puVar6) {
      return;
    }
    puVar5 = (uint64_t *)param_2[1];
    uVar1 = puVar4[5];
    if (puVar5 < (uint64_t *)param_2[2]) {
      param_2[1] = (ulonglong)(puVar5 + 1);
      *puVar5 = uVar1;
    }
    else {
      puVar7 = (uint64_t *)*param_2;
      lVar2 = (longlong)puVar5 - (longlong)puVar7 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180334893:
        puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar2 * 8,(char)param_2[3]);
        puVar7 = (uint64_t *)*param_2;
        puVar5 = (uint64_t *)param_2[1];
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180334893;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar7 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar7,(longlong)puVar5 - (longlong)puVar7);
      }
      *puVar3 = uVar1;
      if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_2 = (ulonglong)puVar3;
      param_2[2] = (ulonglong)(puVar3 + lVar2);
      param_2[1] = (ulonglong)(puVar3 + 1);
    }
    puVar4 = (uint64_t *)func_0x00018066bd70(puVar4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据优化器
 * 
 * 该函数负责优化渲染系统资源数据，包括数据重组、内存优化、
 * 性能提升和系统维护等高级渲染功能。
 * 
 * @return void
 */
void RenderingSystem_OptimizeResourceData(void)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong *unaff_RBX;
  longlong unaff_RSI;
  uint64_t *puVar5;
  longlong unaff_R12;
  
  do {
    puVar5 = (uint64_t *)unaff_RBX[1];
    uVar1 = *(uint64_t *)(unaff_RSI + 0x28);
    if (puVar5 < (uint64_t *)unaff_RBX[2]) {
      unaff_RBX[1] = (ulonglong)(puVar5 + 1);
      *puVar5 = uVar1;
    }
    else {
      puVar4 = (uint64_t *)*unaff_RBX;
      lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180334893:
        puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar2 * 8,(char)unaff_RBX[3]);
        puVar4 = (uint64_t *)*unaff_RBX;
        puVar5 = (uint64_t *)unaff_RBX[1];
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180334893;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
      }
      *puVar3 = uVar1;
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *unaff_RBX = (ulonglong)puVar3;
      unaff_RBX[2] = (ulonglong)(puVar3 + lVar2);
      unaff_RBX[1] = (ulonglong)(puVar3 + 1);
    }
    unaff_RSI = func_0x00018066bd70(unaff_RSI);
    if (unaff_RSI == unaff_R12) {
      return;
    }
  } while( true );
}





/**
 * @brief 渲染系统资源处理器清理器
 * 
 * 该函数负责清理渲染系统资源处理器，包括状态重置、
 * 内存释放和系统维护等高级渲染功能。
 * 
 * @return void
 */
void RenderingSystem_CleanupResourceHandler(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * @brief 渲染系统资源数据获取器
 * 
 * 该函数负责获取渲染系统资源数据，包括资源查找、数据访问、
 * 线程同步和内存管理等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param data_source 数据源指针
 * @return longlong* 返回数据指针
 */
longlong * RenderingSystem_GetResourceData(longlong resource_context, longlong data_source)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  longlong *plStackX_20;
  int32_t uVar8;
  uint64_t uVar9;
  int8_t auStack_68 [8];
  longlong *plStack_60;
  int32_t uStack_58;
  longlong *plStack_50;
  
  uVar9 = 0xfffffffffffffffe;
  uVar8 = 0;
  lVar1 = param_1 + 0xb78;
  lStackX_18 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = *(int *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_1 + 0x9c8);
  piVar7 = *(int **)(lVar2 + ((ulonglong)(longlong)iVar3 % (ulonglong)*(uint *)(param_1 + 0x9d0)) *
                             8);
  do {
    if (piVar7 == (int *)0x0) {
      lVar4 = *(longlong *)(param_1 + 0x9d0);
      piVar7 = *(int **)(lVar2 + lVar4 * 8);
LAB_1803349b9:
      if (piVar7 == *(int **)(lVar2 + lVar4 * 8)) {
        plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,iVar3);
        plVar5 = (longlong *)FUN_18033a740(param_1 + 0xb48,&plStackX_8);
        lVar2 = *plVar5;
        uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0x300,0x10,9,uVar8,uVar9);
        plVar5 = (longlong *)FUN_180075030(uVar9,0,1);
        plStackX_20 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        plVar6 = (longlong *)FUN_1800b30d0(system_resource_state,&plStackX_8,param_2 + 0x110,1);
        plVar6 = (longlong *)*plVar6;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        plStackX_8 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        FUN_180076910(plVar5,&plStackX_8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6);
        }
        plStackX_8 = (longlong *)0x0;
        plStack_50 = (longlong *)0x0;
        auStack_68[0] = 0;
        uStack_58 = 1;
        plStack_60 = plVar5;
        FUN_18007f4c0(auStack_68);
        plVar6 = *(longlong **)(lVar2 + 8);
        if (plVar6 != (longlong *)0x0) {
          plStackX_10 = plVar6;
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        plStackX_10 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          lVar2 = *plStack_50;
          plStack_50 = plVar6;
          (**(code **)(lVar2 + 0x38))();
          plVar6 = plStack_50;
        }
        plStack_50 = plVar6;
        FUN_18007f6a0(auStack_68);
        if (plStack_50 != (longlong *)0x0) {
          (**(code **)(*plStack_50 + 0x38))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        FUN_18033ca70(param_1 + 0x9c0,auStack_68);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x38))();
          (**(code **)(*plVar5 + 0x38))(plVar5);
        }
      }
      else {
        plVar5 = *(longlong **)(piVar7 + 2);
      }
      iVar3 = _Mtx_unlock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      return plVar5;
    }
    if (iVar3 == *piVar7) {
      lVar4 = *(longlong *)(param_1 + 0x9d0);
      goto LAB_1803349b9;
    }
    piVar7 = *(int **)(piVar7 + 4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



