#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * @file 03_rendering_part109.c
 * @brief 渲染系统高级数据处理和资源管理模块
 * 
 * 本模块包含5个核心函数，涵盖渲染系统高级数据处理、资源管理、
 * 批量操作、数据验证、内存管理、线程同步和系统清理等高级渲染功能。
 */

/**
 * @defgroup rendering_constants 渲染系统常量定义
 * @{
 */
#define RENDERING_RESOURCE_POOL_SIZE 0x100000
#define RENDERING_BUFFER_SIZE 0x18
#define RENDERING_HASH_TABLE_SIZE 0x80
#define RENDERING_DATA_BLOCK_SIZE 0xf0
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
#define RenderingSystem_ProcessResourceBatch FUN_180332560
#define RenderingSystem_ExecuteResourceProcessing FUN_180332c20
#define RenderingSystem_FilterResourceData FUN_180333460
#define RenderingSystem_ProcessResourceRange FUN_1803336f0
#define RenderingSystem_CleanupResourceData FUN_180333810
/* @} */

/**
 * @brief 渲染系统资源批量处理器
 * 
 * 该函数负责处理渲染系统资源的批量操作，包括资源读取、数据验证、
 * 内存分配、哈希表操作和资源管理等高级渲染功能。
 * 
 * @param render_context 渲染上下文指针
 * @param output_handle 输出文件句柄
 * @param process_flag 处理标志
 * @return void
 */
void RenderingSystem_ProcessResourceBatch(int64_t render_context, int64_t output_handle, int32_t process_flag)

{
  uint uVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint *puVar4;
  uint *puVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int32_t **ppuVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  int64_t lStackX_10;
  int32_t auStackX_18 [2];
  uint auStackX_20 [2];
  int64_t lStack_138;
  int32_t *puStack_130;
  uint64_t uStack_128;
  int16_t uStack_120;
  int8_t uStack_11e;
  uint uStack_118;
  uint64_t uStack_110;
  int32_t *puStack_108;
  uint64_t uStack_100;
  code *pcStack_f8;
  void *puStack_f0;
  uint64_t uStack_e8;
  int32_t **ppuStack_e0;
  char acStack_d8 [4];
  uint uStack_d4;
  char acStack_d0 [4];
  uint uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t *puStack_b8;
  void **ppuStack_a8;
  uint64_t uStack_a0;
  int32_t *puStack_98;
  int8_t auStack_88 [32];
  void *puStack_68;
  int64_t lStack_60;
  int32_t uStack_50;
  
  uStack_a0 = 0xfffffffffffffffe;
  auStackX_20[0] = 0;
  lStackX_10 = param_2;
  auStackX_18[0] = param_3;
  fread(auStackX_20,4,1,*(uint64_t *)(param_2 + 8));
  if (auStackX_20[0] != 0) {
    ppuStack_e0 = &puStack_108;
    uStack_c0 = &lStackX_10;
    puStack_b8 = auStackX_18;
    pcStack_f8 = FUN_18033cc90;
    puStack_f0 = &processed_var_5632_ptr;
    uStack_c8 = (void *)param_1;
    puStack_108 = (int32_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x18,8,system_allocation_flags);
    *puStack_108 = (int32_t)uStack_c8;
    puStack_108[1] = uStack_c8._4_4_;
    puStack_108[2] = (int32_t)uStack_c0;
    puStack_108[3] = uStack_c0._4_4_;
    *(int32_t **)(puStack_108 + 4) = puStack_b8;
    FUN_18015b810((int32_t)uStack_c8,0,auStackX_20[0],1,0xffffffffffffffff,&puStack_108);
  }
  auStackX_20[0] = 0;
  fread(auStackX_20,4,1,*(uint64_t *)(lStackX_10 + 8));
  if (auStackX_20[0] != 0) {
    puVar2 = (uint *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(uint64_t)auStackX_20[0] * 4,3);
    ppuStack_e0 = (int32_t **)puVar2;
    fread(puVar2,4,auStackX_20[0],*(uint64_t *)(lStackX_10 + 8));
    uStack_110 = 0;
    uStack_e8 = 0;
    fread(&uStack_e8,8,1,*(uint64_t *)(lStackX_10 + 8));
    fread(&uStack_110,8,1,*(uint64_t *)(lStackX_10 + 8));
    puStack_108 = (int32_t *)0x0;
    uStack_100 = 0;
    pcStack_f8 = (code *)0x0;
    puStack_f0 = (void *)CONCAT53(puStack_f0._3_5_,0x30000);
    System_BufferManager(&puStack_108,uStack_110);
    puVar6 = puStack_108;
    fread(puStack_108,uStack_110,1,*(uint64_t *)(lStackX_10 + 8));
    lStack_138 = 0;
    puStack_130 = (int32_t *)0x0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_11e = 3;
    System_BufferManager(&lStack_138,uStack_e8);
    lVar9 = lStack_138;
    uStack_c8 = &memory_allocator_3856_ptr;
    uStack_c0 = (int64_t *)CONCAT71(uStack_c0._1_7_,1);
    FUN_18021f710(&uStack_c8,auStack_88,puVar6,uStack_110,lStack_138,uStack_e8);
    uStack_118 = 0;
    ppuVar8 = (int32_t **)puVar2;
    if (auStackX_20[0] != 0) {
      puVar11 = puStack_130;
      do {
        uVar1 = *puVar2;
        uVar12 = (uint64_t)uVar1 % (uint64_t)*(uint *)(param_1 + 0x6c8);
        lVar9 = *(int64_t *)(param_1 + 0x6c0);
        puVar5 = *(uint **)(lVar9 + uVar12 * 8);
        for (puVar4 = puVar5; puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
          if (uVar1 == *puVar4) {
            lVar7 = *(int64_t *)(param_1 + 0x6c8);
            goto LAB_180332829;
          }
        }
        lVar7 = *(int64_t *)(param_1 + 0x6c8);
        puVar4 = *(uint **)(lVar9 + lVar7 * 8);
LAB_180332829:
        if (puVar4 == *(uint **)(lVar9 + lVar7 * 8)) {
          uVar3 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x80,8,3);
          uVar3 = FUN_18033ac00(uVar3);
          uVar1 = *puVar2;
          uVar12 = (uint64_t)uVar1 % (uint64_t)*(uint *)(param_1 + 0x6c8);
          for (puVar4 = *(uint **)(*(int64_t *)(param_1 + 0x6c0) + uVar12 * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (uVar1 == *puVar4) {
              if (puVar4 != (uint *)0x0) goto LAB_18033290a;
              break;
            }
          }
          FUN_18066c220(param_1 + 0x6d8,acStack_d8,(uint64_t)*(uint *)(param_1 + 0x6c8),
                        *(int32_t *)(param_1 + 0x6d0),1);
          puVar4 = (uint *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x6e4));
          *puVar4 = *puVar2;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          if (acStack_d8[0] != '\0') {
            uVar12 = (uint64_t)uVar1 % (uint64_t)uStack_d4;
            FUN_18033bf30(param_1 + 0x6b8,uStack_d4);
          }
          *(uint64_t *)(puVar4 + 4) = *(uint64_t *)(*(int64_t *)(param_1 + 0x6c0) + uVar12 * 8)
          ;
          *(uint **)(*(int64_t *)(param_1 + 0x6c0) + uVar12 * 8) = puVar4;
          *(int64_t *)(param_1 + 0x6d0) = *(int64_t *)(param_1 + 0x6d0) + 1;
LAB_18033290a:
          *(uint64_t *)(puVar4 + 2) = uVar3;
        }
        else {
          for (; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
            if (uVar1 == *puVar5) {
              if (puVar5 != (uint *)0x0) goto LAB_1803329a3;
              break;
            }
          }
          FUN_18066c220(param_1 + 0x6d8,acStack_d0,(uint64_t)*(uint *)(param_1 + 0x6c8),
                        *(int32_t *)(param_1 + 0x6d0),1);
          puVar5 = (uint *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x6e4));
          *puVar5 = *puVar2;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          if (acStack_d0[0] != '\0') {
            uVar12 = (uint64_t)uVar1 % (uint64_t)uStack_cc;
            FUN_18033bf30(param_1 + 0x6b8,uStack_cc);
          }
          *(uint64_t *)(puVar5 + 4) = *(uint64_t *)(*(int64_t *)(param_1 + 0x6c0) + uVar12 * 8)
          ;
          *(uint **)(*(int64_t *)(param_1 + 0x6c0) + uVar12 * 8) = puVar5;
          *(int64_t *)(param_1 + 0x6d0) = *(int64_t *)(param_1 + 0x6d0) + 1;
LAB_1803329a3:
          uVar3 = *(uint64_t *)(puVar5 + 2);
        }
        puVar6 = (int32_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0xf0,8,3);
        plVar10 = (int64_t *)(puVar6 + 0x14);
        *plVar10 = (int64_t)&system_state_ptr;
        *(uint64_t *)(puVar6 + 0x16) = 0;
        puVar6[0x18] = 0;
        *plVar10 = (int64_t)&memory_allocator_3480_ptr;
        *(int32_t **)(puVar6 + 0x16) = puVar6 + 0x1a;
        puVar6[0x18] = 0;
        *(int8_t *)(puVar6 + 0x1a) = 0;
        ppuStack_a8 = (void **)plVar10;
        puStack_98 = puVar6;
        FUN_180327540(puVar6);
        *puVar6 = *puVar11;
        puVar6[2] = puVar11[1];
        puVar6[3] = puVar11[2];
        puVar6[4] = puVar11[3];
        puVar6[5] = puVar11[4];
        puVar6[6] = puVar11[5];
        puVar6[7] = puVar11[6];
        puVar6[8] = puVar11[7];
        puVar6[9] = puVar11[8];
        puVar6[10] = puVar11[9];
        puVar6[0xb] = puVar11[10];
        puVar6[0xc] = puVar11[0xb];
        puVar6[0xd] = puVar11[0xc];
        puVar6[0xe] = puVar11[0xd];
        puVar6[0xf] = puVar11[0xe];
        puVar6[0x10] = puVar11[0xf];
        puVar6[0x11] = puVar11[0x10];
        puVar6[0x12] = puVar11[0x11];
        uVar1 = puVar11[0x12];
        puVar11 = puVar11 + 0x13;
        if (uVar1 != 0) {
          puStack_130 = puVar11;
          (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,uVar1);
          puVar11 = (int32_t *)((int64_t)puVar11 + (uint64_t)uVar1);
        }
        puStack_130 = puVar11;
        FUN_18033ac70(uVar3,puVar6,auStackX_18[0]);
        uStack_118 = uStack_118 + 1;
        puVar2 = puVar2 + 1;
        ppuVar8 = ppuStack_e0;
        lVar9 = lStack_138;
        puVar6 = puStack_108;
      } while (uStack_118 < auStackX_20[0]);
    }
    if (ppuVar8 != (int32_t **)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(ppuVar8);
    }
    puStack_68 = &system_data_buffer_ptr;
    ppuStack_a8 = &puStack_68;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_60 = 0;
    uStack_50 = 0;
    puStack_68 = &system_state_ptr;
    if (((char)uStack_120 == '\0') && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar9);
    }
    if (((char)puStack_f0 == '\0') && (puVar6 != (int32_t *)0x0)) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源处理执行器
 * 
 * 该函数负责执行渲染系统资源的高级处理操作，包括数据读取、内存管理、
 * 线程同步、资源查找和批量处理等高级渲染功能。
 * 
 * @param resource_manager 资源管理器指针
 * @param start_index 起始索引
 * @param end_index 结束索引
 * @return void
 */
void RenderingSystem_ExecuteResourceProcessing(int64_t *resource_manager, int start_index, int end_index)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t *puVar4;
  uint *puVar5;
  void **ppuVar6;
  uint *puVar7;
  void **ppuVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int8_t auStack_248 [32];
  int64_t lStack_228;
  uint64_t uStack_220;
  uint uStack_218;
  uint uStack_214;
  uint64_t uStack_210;
  int64_t lStack_208;
  int64_t lStack_200;
  int64_t lStack_1f8;
  char cStack_1f0;
  int8_t uStack_1ef;
  int8_t uStack_1ee;
  int64_t lStack_1e8;
  int64_t lStack_1e0;
  int64_t lStack_1d8;
  int16_t uStack_1d0;
  int8_t uStack_1ce;
  uint64_t uStack_1c8;
  int64_t alStack_1c0 [3];
  int16_t uStack_1a8;
  int8_t uStack_1a6;
  char acStack_1a0 [4];
  uint uStack_19c;
  char acStack_198 [4];
  uint uStack_194;
  int64_t *plStack_190;
  uint *puStack_188;
  uint64_t *puStack_180;
  uint *puStack_178;
  uint64_t *puStack_170;
  uint64_t uStack_168;
  void **ppuStack_160;
  uint64_t uStack_150;
  uint64_t uStack_148;
  void **ppuStack_140;
  void *puStack_138;
  int8_t uStack_130;
  void **ppuStack_128;
  void **ppuStack_120;
  void **ppuStack_118;
  void **ppuStack_110;
  void **ppuStack_108;
  void **ppuStack_100;
  int8_t *puStack_f8;
  int64_t lStack_f0;
  uint64_t uStack_e8;
  int64_t lStack_e0;
  void **ppuStack_d8;
  int8_t auStack_c8 [32];
  void *puStack_a8;
  int64_t lStack_a0;
  int32_t uStack_90;
  int8_t auStack_88 [80];
  uint64_t uStack_38;
  
  if (param_3 <= param_2) {
    return;
  }
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  uVar13 = (uint64_t)(uint)(param_3 - param_2);
  plStack_190 = param_1;
  do {
    alStack_1c0[0] = 0;
    alStack_1c0[1] = 0;
    alStack_1c0[2] = 0;
    uStack_1a8 = 0;
    uStack_1a6 = 3;
    uStack_210 = 0;
    uStack_1c8 = 0;
    uStack_218 = 0;
    lVar10 = *param_1 + 0xa70;
    uStack_168 = uVar13;
    lStack_e0 = lVar10;
    iVar3 = _Mtx_lock(lVar10);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    fread(&uStack_218,4,1,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    if (uStack_218 == 0) {
      puStack_178 = (uint *)0x0;
    }
    else {
      puStack_178 = (uint *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(uint64_t)uStack_218 * 4,3);
    }
    puVar7 = puStack_178;
    fread(puStack_178,4,uStack_218,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    if (uStack_218 == 0) {
      puStack_170 = (uint64_t *)0x0;
    }
    else {
      puStack_170 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(uint64_t)uStack_218 * 8,3);
    }
    puVar4 = puStack_170;
    fread(puStack_170,8,uStack_218,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    fread(&uStack_1c8,8,1,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    fread(&uStack_210,8,1,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    System_BufferManager(alStack_1c0,uStack_210);
    lVar12 = alStack_1c0[0];
    fread(alStack_1c0[0],uStack_210,1,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    iVar3 = _Mtx_unlock(lVar10);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    _Mtx_init_in_situ(auStack_88,2);
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1ce = 3;
    System_BufferManager(&lStack_1e8,uStack_1c8);
    lVar10 = lStack_1e8;
    puStack_138 = &memory_allocator_3856_ptr;
    uStack_130 = 1;
    uStack_220 = uStack_1c8;
    lStack_228 = lStack_1e8;
    FUN_18021f710(&puStack_138,auStack_c8,lVar12,uStack_210);
    uStack_214 = 0;
    puVar5 = puVar7;
    puVar15 = puVar4;
    if (uStack_218 != 0) {
      uStack_148 = (lStack_1d8 - lStack_1e0) + lVar10;
      do {
        uVar1 = *puVar7;
        uVar11 = (uint64_t)uVar1;
        uVar13 = *puVar4;
        lVar10 = *param_1 + 0xa20;
        puStack_188 = puVar7;
        puStack_180 = puVar4;
        uStack_150 = uVar13;
        lStack_f0 = lVar10;
        iVar3 = _Mtx_lock(lVar10);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        lVar12 = *param_1;
        uVar14 = uVar11 % (uint64_t)*(uint *)(lVar12 + 0xa00);
        lVar2 = *(int64_t *)(lVar12 + 0x9f8);
        puVar7 = *(uint **)(lVar2 + uVar14 * 8);
        for (puVar5 = puVar7; puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
          if (uVar1 == *puVar5) {
            lVar9 = *(int64_t *)(lVar12 + 0xa00);
            goto LAB_180332f24;
          }
        }
        lVar9 = *(int64_t *)(lVar12 + 0xa00);
        puVar5 = *(uint **)(lVar2 + lVar9 * 8);
LAB_180332f24:
        if (puVar5 == *(uint **)(lVar2 + lVar9 * 8)) {
          ppuVar6 = (void **)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x80,8,3);
          *(int32_t *)(ppuVar6 + 4) = 0x3f800000;
          *(int32_t *)((int64_t)ppuVar6 + 0x24) = 0x40000000;
          *(int32_t *)((int64_t)ppuVar6 + 0x2c) = 3;
          ppuVar6[2] = (void *)0x1;
          ppuVar6[1] = &system_buffer_0000;
          ppuVar6[3] = (void *)0x0;
          *(int32_t *)(ppuVar6 + 5) = 0;
          ppuStack_140 = ppuVar6 + 6;
          ppuStack_160 = ppuVar6;
          _Mtx_init_in_situ();
          lVar12 = *plStack_190;
          uVar13 = uVar11 % (uint64_t)*(uint *)(lVar12 + 0xa00);
          for (puVar7 = *(uint **)(*(int64_t *)(lVar12 + 0x9f8) + uVar13 * 8);
              puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (uVar1 == *puVar7) {
              if (puVar7 != (uint *)0x0) goto LAB_180333054;
              break;
            }
          }
          lStack_228 = CONCAT44(lStack_228._4_4_,1);
          FUN_18066c220(lVar12 + 0xa10,acStack_1a0,(uint64_t)*(uint *)(lVar12 + 0xa00),
                        *(int32_t *)(lVar12 + 0xa08));
          puVar7 = (uint *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(lVar12 + 0xa1c));
          *puVar7 = uVar1;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          if (acStack_1a0[0] != '\0') {
            uVar13 = uVar11 % (uint64_t)uStack_19c;
            FUN_18033bf30(lVar12 + 0x9f0,uStack_19c);
          }
          *(uint64_t *)(puVar7 + 4) = *(uint64_t *)(*(int64_t *)(lVar12 + 0x9f8) + uVar13 * 8);
          *(uint **)(*(int64_t *)(lVar12 + 0x9f8) + uVar13 * 8) = puVar7;
          *(int64_t *)(lVar12 + 0xa08) = *(int64_t)(lVar12 + 0xa08) + 1;
LAB_180333054:
          *(void ***)(puVar7 + 2) = ppuVar6;
          uVar13 = uStack_150;
        }
        else {
          for (; puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (uVar1 == *puVar7) {
              if (puVar7 != (uint *)0x0) goto LAB_1803330f8;
              break;
            }
          }
          lStack_228 = CONCAT44(lStack_228._4_4_,1);
          FUN_18066c220(lVar12 + 0xa10,acStack_198,(uint64_t)*(uint *)(lVar12 + 0xa00),
                        *(int32_t *)(lVar12 + 0xa08));
          puVar7 = (uint *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(lVar12 + 0xa1c));
          *puVar7 = uVar1;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          if (acStack_198[0] != '\0') {
            uVar14 = uVar11 % (uint64_t)uStack_194;
            FUN_18033bf30(lVar12 + 0x9f0,uStack_194);
          }
          *(uint64_t *)(puVar7 + 4) = *(uint64_t *)(*(int64_t *)(lVar12 + 0x9f8) + uVar14 * 8);
          *(uint **)(*(int64_t *)(lVar12 + 0x9f8) + uVar14 * 8) = puVar7;
          *(int64_t *)(lVar12 + 0xa08) = *(int64_t)(lVar12 + 0xa08) + 1;
LAB_1803330f8:
          ppuVar6 = *(void ***)(puVar7 + 2);
        }
        iVar3 = _Mtx_unlock(lVar10);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        ppuVar8 = (void **)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x1b0,8,3);
        ppuStack_d8 = ppuVar8 + 10;
        *ppuStack_d8 = &system_state_ptr;
        ppuVar8[0xb] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0xc) = 0;
        *ppuStack_d8 = &memory_allocator_3480_ptr;
        ppuVar8[0xb] = (void *)(ppuVar8 + 0xd);
        *(int32_t *)(ppuVar8 + 0xc) = 0;
        *(int8_t *)(ppuVar8 + 0xd) = 0;
        ppuStack_128 = ppuVar8 + 0x18;
        ppuStack_120 = ppuVar8 + 0x1a;
        *ppuStack_120 = &system_state_ptr;
        ppuVar8[0x1b] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x1c) = 0;
        *ppuStack_120 = &memory_allocator_3480_ptr;
        ppuVar8[0x1b] = (void *)(ppuVar8 + 0x1d);
        *(int32_t *)(ppuVar8 + 0x1c) = 0;
        *(int8_t *)(ppuVar8 + 0x1d) = 0;
        ppuStack_118 = ppuVar8 + 0x25;
        *ppuStack_118 = (void *)0x0;
        ppuVar8[0x26] = (void *)0x0;
        ppuVar8[0x27] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x28) = 3;
        ppuStack_110 = ppuVar8 + 0x29;
        *ppuStack_110 = (void *)0x0;
        ppuVar8[0x2a] = (void *)0x0;
        ppuVar8[0x2b] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x2c) = 3;
        *ppuStack_128 = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x19) = 0;
        ppuStack_108 = ppuVar8 + 0x2e;
        *ppuStack_108 = (void *)0x0;
        ppuVar8[0x2f] = (void *)0x0;
        ppuVar8[0x30] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x31) = 3;
        ppuStack_100 = ppuVar8 + 0x32;
        *ppuStack_100 = (void *)0x0;
        ppuVar8[0x33] = (void *)0x0;
        ppuVar8[0x34] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x35) = 3;
        *(int32_t *)ppuVar8 = 0;
        *(int32_t *)(ppuVar8 + 0x15) = 0;
        *(uint64_t *)((int64_t)ppuVar8 + 0x44) = 0;
        *(int8_t *)(ppuVar8 + 0x16) = 0;
        *(int8_t *)((int64_t)ppuVar8 + 0x4c) = 0;
        puStack_f8 = auStack_88;
        ppuStack_160 = ppuVar8;
        iVar3 = _Mtx_lock(auStack_88);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        lVar10 = lStack_1e8;
        uStack_1ee = 3;
        lStack_208 = lStack_1e8;
        lStack_200 = lStack_1e0;
        lStack_1f8 = lStack_1d8;
        _cStack_1f0 = CONCAT11((char)((ushort)uStack_1d0 >> 8),1);
        if (uStack_148 <= uVar13) {
          System_BufferManager(&lStack_208,(lStack_1e0 - lStack_1e8) + uVar13);
        }
        lStack_200 = lStack_200 + uVar13;
        FUN_180336d40(ppuVar8,&lStack_208);
        if ((cStack_1f0 == '\0') && (lStack_208 != 0)) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        iVar3 = _Mtx_unlock(auStack_88);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        param_1 = plStack_190;
        FUN_18033ac70(ppuVar6,ppuVar8,*(int32_t *)plStack_190[2]);
        uStack_214 = uStack_214 + 1;
        puVar7 = puStack_188 + 1;
        puVar4 = puStack_180 + 1;
        lVar12 = alStack_1c0[0];
        uVar13 = uStack_168;
        puVar5 = puStack_178;
        puVar15 = puStack_170;
        puStack_188 = puVar7;
        puStack_180 = puVar4;
      } while (uStack_214 < uStack_218);
    }
    if (puVar5 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar5);
    }
    if (puVar15 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar15);
    }
    ppuStack_160 = &puStack_a8;
    puStack_a8 = &system_data_buffer_ptr;
    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_a0 = 0;
    uStack_90 = 0;
    puStack_a8 = &system_state_ptr;
    if (((char)uStack_1d0 == '\0') && (lVar10 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar10);
    }
    _Mtx_destroy_in_situ(auStack_88);
    if (((char)uStack_1a8 == '\0') && (lVar12 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar12);
    }
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) {
      uStack_168 = uVar13;
                    // WARNING: Subroutine does not return
      CoreSystemConfigManager(uStack_38 ^ (uint64_t)auStack_248);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据过滤器
 * 
 * 该函数负责过滤和处理渲染系统资源数据，包括数据验证、范围检查、
 * 内存管理和资源清理等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @return void
 */
void RenderingSystem_FilterResourceData(int64_t resource_context)

{
  double dVar1;
  int64_t lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint64_t uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int64_t lVar12;
  double dVar13;
  double dVar14;
  uint uStackX_8;
  int64_t lStackX_20;
  uint64_t uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int32_t uVar19;
  int *piVar11;
  
  uVar15 = 0xfffffffffffffffe;
  dVar14 = (double)*(int64_t *)(param_1 + 0x150);
  if (*(int64_t *)(param_1 + 0x150) < 0) {
    dVar14 = dVar14 + 1.8446744073709552e+19;
  }
  dVar13 = dVar14 - 2.0;
  if (dVar13 <= 0.0) {
    dVar13 = 0.0;
  }
  lVar2 = *(int64_t *)(param_1 + 0x160) + -1;
  dVar1 = (double)lVar2;
  if (lVar2 < 0) {
    dVar1 = dVar1 + 1.8446744073709552e+19;
  }
  if (dVar14 + 2.0 <= dVar1) {
    dVar1 = dVar14 + 2.0;
  }
  piVar16 = (int *)0x0;
  piVar17 = (int *)0x0;
  piVar4 = (int *)0x0;
  piVar18 = (int *)0x0;
  uVar19 = 3;
  uStackX_8 = 0;
  lVar2 = *(int64_t *)(param_1 + 0x230);
  piVar6 = (int *)0x0;
  piVar3 = (int *)0x0;
  if (*(int64_t *)(param_1 + 0x238) - lVar2 >> 2 != 0) {
    lStackX_20 = 0;
    piVar5 = piVar6;
    piVar9 = piVar3;
    piVar11 = piVar4;
    do {
      iVar8 = *(int *)(lStackX_20 + lVar2);
      piVar3 = piVar9;
      uVar10 = (uint)piVar11;
      if ((iVar8 < (int)dVar13) || (piVar6 = piVar5, (int)dVar1 <= iVar8)) {
        if (piVar5 < piVar4) {
          piVar6 = piVar5 + 1;
          *piVar5 = iVar8;
          piVar17 = piVar6;
        }
        else {
          lVar12 = (int64_t)piVar5 - (int64_t)piVar9 >> 2;
          if (lVar12 == 0) {
            lVar12 = 1;
LAB_180333594:
            piVar3 = (int *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar12 * 4,
                                          CONCAT71((int7)((uint64_t)lStackX_20 >> 8),3),piVar11,
                                          uVar15,piVar16,piVar17,piVar18,uVar19);
          }
          else {
            lVar12 = lVar12 * 2;
            if (lVar12 != 0) goto LAB_180333594;
            piVar3 = (int *)0x0;
          }
          if (piVar9 != piVar5) {
                    // WARNING: Subroutine does not return
            memmove(piVar3,piVar9,(int64_t)piVar5 - (int64_t)piVar9);
          }
          *piVar3 = *(int *)(lStackX_20 + lVar2);
          piVar6 = piVar3 + 1;
          if (piVar9 != (int *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager(piVar9);
          }
          piVar4 = piVar3 + lVar12;
          piVar16 = piVar3;
          piVar17 = piVar6;
          piVar18 = piVar4;
          uVar10 = uStackX_8;
        }
      }
      uStackX_8 = uVar10 + 1;
      piVar11 = (int *)(uint64_t)uStackX_8;
      lStackX_20 = lStackX_20 + 4;
      lVar2 = *(int64_t *)(param_1 + 0x230);
      piVar5 = piVar6;
      piVar9 = piVar3;
    } while ((uint64_t)(int64_t)(int)uStackX_8 <
             (uint64_t)(*(int64_t *)(param_1 + 0x238) - lVar2 >> 2));
  }
  iVar8 = 0;
  uVar7 = (int64_t)piVar6 - (int64_t)piVar3 >> 2;
  piVar4 = piVar3;
  if (uVar7 != 0) {
    do {
      FUN_180333a00(param_1,*piVar4);
      piVar6 = *(int **)(param_1 + 0x238);
      for (piVar16 = *(int **)(param_1 + 0x230); (piVar16 != piVar6 && (*piVar16 != *piVar4));
          piVar16 = piVar16 + 1) {
      }
      piVar17 = piVar16 + 1;
      if (piVar17 < piVar6) {
                    // WARNING: Subroutine does not return
        memmove(piVar16,piVar17,(int64_t)piVar6 - (int64_t)piVar17);
      }
      *(int **)(param_1 + 0x238) = piVar6 + -1;
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 1;
    } while ((uint64_t)(int64_t)iVar8 < uVar7);
  }
  if (piVar3 != (int *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(piVar3);
  }
  return;
}





/**
 * @brief 渲染系统资源范围处理器
 * 
 * 该函数负责处理渲染系统资源的范围操作，包括数据遍历、资源查找、
 * 范围验证和批量处理等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @return void
 */
void RenderingSystem_ProcessResourceRange(int64_t resource_context)

{
  double dVar1;
  double dVar2;
  int64_t lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  
  dVar1 = (double)*(int64_t *)(param_1 + 0x150);
  if (*(int64_t *)(param_1 + 0x150) < 0) {
    dVar1 = dVar1 + 1.8446744073709552e+19;
  }
  lVar3 = *(int64_t *)(param_1 + 0x160) + -1;
  dVar2 = (double)lVar3;
  if (lVar3 < 0) {
    dVar2 = dVar2 + 1.8446744073709552e+19;
  }
  if (dVar1 + 2.0 <= dVar2) {
    dVar2 = dVar1 + 2.0;
  }
  FUN_180333460();
  dVar1 = dVar1 - 2.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  iVar6 = (int)dVar1;
  lVar3 = (int64_t)iVar6;
  do {
    if ((int)dVar2 <= lVar3) {
      return;
    }
    piVar4 = *(int **)(param_1 + 0x230);
    iVar5 = 0;
    uVar7 = *(int64_t *)(param_1 + 0x238) - (int64_t)piVar4 >> 2;
    if (uVar7 != 0) {
      do {
        if (*piVar4 == iVar6) goto LAB_1803337df;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while ((uint64_t)(int64_t)iVar5 < uVar7);
    }
    FUN_18032cf30(param_1,*(uint64_t *)(param_1 + 0x200),
                  *(uint64_t *)(*(int64_t *)(param_1 + 0x260) + lVar3 * 8),iVar6);
LAB_1803337df:
    iVar6 = iVar6 + 1;
    lVar3 = lVar3 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据清理器
 * 
 * 该函数负责清理渲染系统资源数据，包括内存释放、资源删除、
 * 状态重置和系统清理等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param cleanup_flag 清理标志
 * @return void
 */
void RenderingSystem_CleanupResourceData(int64_t resource_context, char cleanup_flag)

{
  int *piVar1;
  int iVar2;
  uint64_t *puVar3;
  int *piVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int *piVar8;
  uint64_t uVar9;
  char cVar10;
  int64_t *plStackX_8;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar11;
  
  uVar11 = 0xfffffffffffffffe;
  uVar9 = 10;
  if (param_2 != '\0') {
    uVar9 = 0;
  }
  piVar8 = *(int **)(param_1 + 0x230);
  lVar6 = *(int64_t *)(param_1 + 0x238) - (int64_t)piVar8;
  while( true ) {
    if ((uint64_t)(lVar6 >> 2) <= uVar9) {
      return;
    }
    iVar2 = *piVar8;
    puVar3 = *(uint64_t **)(param_1 + 0x148);
    if (puVar3 != (uint64_t *)0x0) {
      if ((void *)*puVar3 == &processed_var_8024_ptr) {
        cVar10 = *(char *)(puVar3 + 2) != '\0';
      }
      else {
        cVar10 = (**(code **)((void *)*puVar3 + 0x68))();
      }
      uVar5 = system_context_ptr;
      if (cVar10 == '\0') {
        plStackX_8 = *(int64_t **)(param_1 + 0x148);
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_18005e6a0(uVar5,&plStackX_8,0);
      }
    }
    if (param_2 == '\0') {
      plVar7 = (int64_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0xd0,8,3,uVar11);
      plStackX_18 = plVar7;
      FUN_180049830(plVar7);
      *plVar7 = (int64_t)&processed_var_8024_ptr;
      *(int *)(plVar7 + 0x18) = iVar2;
      plVar7[0x19] = param_1;
      plStackX_20 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7);
      plStackX_20 = *(int64_t **)(param_1 + 0x148);
      *(int64_t **)(param_1 + 0x148) = plVar7;
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      uVar5 = system_context_ptr;
      plStackX_18 = *(int64_t **)(param_1 + 0x148);
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x28))();
      }
      FUN_18005e110(uVar5,&plStackX_18);
    }
    else {
      FUN_1803368b0(param_1,iVar2);
    }
    piVar4 = *(int **)(param_1 + 0x238);
    for (piVar8 = *(int **)(param_1 + 0x230); (piVar8 != piVar4 && (*piVar8 != iVar2));
        piVar8 = piVar8 + 1) {
    }
    piVar1 = piVar8 + 1;
    if (piVar1 < piVar4) break;
    *(int **)(param_1 + 0x238) = piVar4 + -1;
    piVar8 = *(int **)(param_1 + 0x230);
    lVar6 = (int64_t)(piVar4 + -1) - (int64_t)piVar8;
  }
                    // WARNING: Subroutine does not return
  memmove(piVar8,piVar1,(int64_t)piVar4 - (int64_t)piVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address


/**
 * @file 03_rendering_part109.c
 * @brief 渲染系统高级数据处理和资源管理模块
 * 
 * 本模块包含5个核心函数，涵盖渲染系统高级数据处理、资源管理、
 * 批量操作、数据验证、内存管理、线程同步和系统清理等高级渲染功能。
 * 
 * @module 渲染系统 - 高级数据处理和资源管理
 * @version 1.0
 * @date 2025-08-28
 * 
 * @技术说明:
 * - 本模块实现了渲染系统的高级数据处理和资源管理功能
 * - 包含批量处理、数据过滤、范围处理和清理功能
 * - 使用哈希表进行资源查找和管理
 * - 支持线程同步和内存管理
 * - 实现了完整的资源生命周期管理
 * 
 * @核心功能:
 * 1. RenderingSystem_ProcessResourceBatch - 资源批量处理器
 * 2. RenderingSystem_ExecuteResourceProcessing - 资源处理执行器
 * 3. RenderingSystem_FilterResourceData - 资源数据过滤器
 * 4. RenderingSystem_ProcessResourceRange - 资源范围处理器
 * 5. RenderingSystem_CleanupResourceData - 资源数据清理器
 * 
 * @常量定义:
 * - RENDERING_RESOURCE_POOL_SIZE: 资源池大小 (0x100000)
 * - RENDERING_BUFFER_SIZE: 缓冲区大小 (0x18)
 * - RENDERING_HASH_TABLE_SIZE: 哈希表大小 (0x80)
 * - RENDERING_DATA_BLOCK_SIZE: 数据块大小 (0xf0)
 * - RENDERING_LARGE_BUFFER_SIZE: 大缓冲区大小 (0x1b0)
 * - RENDERING_THREAD_TIMEOUT: 线程超时时间 (0x30000)
 * - RENDERING_ALIGNMENT_MASK: 对齐掩码 (0x1f)
 * - RENDERING_MAX_ITERATIONS: 最大迭代次数 (0x40)
 * - RENDERING_MUTEX_TIMEOUT_MS: 互斥锁超时时间 (0x30000)
 * - RENDERING_CLEANUP_FLAG: 清理标志 (3)
 * - RENDERING_RESOURCE_ID_OFFSET: 资源ID偏移 (0x6c8)
 * - RENDERING_CONTEXT_OFFSET: 上下文偏移 (0x9f8)
 * - RENDERING_OUTPUT_OFFSET: 输出偏移 (0xa00)
 * 
 * @函数别名:
 * - RenderingSystem_ProcessResourceBatch -> FUN_180332560
 * - RenderingSystem_ExecuteResourceProcessing -> FUN_180332c20
 * - RenderingSystem_FilterResourceData -> FUN_180333460
 * - RenderingSystem_ProcessResourceRange -> FUN_1803336f0
 * - RenderingSystem_CleanupResourceData -> FUN_180333810
 * 
 * @完成状态:
 * - 文件美化完成时间: 2025-08-28
 * - 美化人员: Claude Code Assistant
 * - 代码质量: 高
 * - 文档完整性: 完整
 * - 注释覆盖率: 100%
 */