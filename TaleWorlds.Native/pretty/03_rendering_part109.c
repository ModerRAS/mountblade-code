#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
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
#define RenderingSystem_ProcessResourceBatch function_332560
#define RenderingSystem_ExecuteResourceProcessing function_332c20
#define RenderingSystem_FilterResourceData function_333460
#define RenderingSystem_ProcessResourceRange function_3336f0
#define RenderingSystem_CleanupResourceData function_333810
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
  int32_t astack_special_x_18 [2];
  uint astack_special_x_20 [2];
  int64_t lStack_138;
  int32_t *plocal_var_130;
  uint64_t local_var_128;
  int16_t local_var_120;
  int8_t local_var_11e;
  uint local_var_118;
  uint64_t local_var_110;
  int32_t *plocal_var_108;
  uint64_t local_var_100;
  code *pcStack_f8;
  void *plocal_var_f0;
  uint64_t local_var_e8;
  int32_t **pplocal_var_e0;
  char acStack_d8 [4];
  uint local_var_d4;
  char acStack_d0 [4];
  uint local_var_cc;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int32_t *plocal_var_b8;
  void **pplocal_var_a8;
  uint64_t local_var_a0;
  int32_t *plocal_var_98;
  int8_t stack_array_88 [32];
  void *plocal_var_68;
  int64_t lStack_60;
  int32_t local_var_50;
  local_var_a0 = 0xfffffffffffffffe;
  astack_special_x_20[0] = 0;
  lStackX_10 = param_2;
  astack_special_x_18[0] = param_3;
  fread(astack_special_x_20,4,1,*(uint64_t *)(param_2 + 8));
  if (astack_special_x_20[0] != 0) {
    pplocal_var_e0 = &plocal_var_108;
    local_var_c0 = &lStackX_10;
    plocal_var_b8 = astack_special_x_18;
    pcStack_f8 = function_33cc90;
    plocal_var_f0 = &processed_var_5632_ptr;
    local_var_c8 = (void *)param_1;
    plocal_var_108 = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
    *plocal_var_108 = (int32_t)local_var_c8;
    plocal_var_108[1] = local_var_c8._4_4_;
    plocal_var_108[2] = (int32_t)local_var_c0;
    plocal_var_108[3] = local_var_c0._4_4_;
    *(int32_t **)(plocal_var_108 + 4) = plocal_var_b8;
    SystemCore_DataTransformer((int32_t)local_var_c8,0,astack_special_x_20[0],1,0xffffffffffffffff,&plocal_var_108);
  }
  astack_special_x_20[0] = 0;
  fread(astack_special_x_20,4,1,*(uint64_t *)(lStackX_10 + 8));
  if (astack_special_x_20[0] != 0) {
    puVar2 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)astack_special_x_20[0] * 4,3);
    pplocal_var_e0 = (int32_t **)puVar2;
    fread(puVar2,4,astack_special_x_20[0],*(uint64_t *)(lStackX_10 + 8));
    local_var_110 = 0;
    local_var_e8 = 0;
    fread(&local_var_e8,8,1,*(uint64_t *)(lStackX_10 + 8));
    fread(&local_var_110,8,1,*(uint64_t *)(lStackX_10 + 8));
    plocal_var_108 = (int32_t *)0x0;
    local_var_100 = 0;
    pcStack_f8 = (code *)0x0;
    plocal_var_f0 = (void *)CONCAT53(plocal_var_f0._3_5_,0x30000);
    System_BufferManager(&plocal_var_108,local_var_110);
    puVar6 = plocal_var_108;
    fread(plocal_var_108,local_var_110,1,*(uint64_t *)(lStackX_10 + 8));
    lStack_138 = 0;
    plocal_var_130 = (int32_t *)0x0;
    local_var_128 = 0;
    local_var_120 = 0;
    local_var_11e = 3;
    System_BufferManager(&lStack_138,local_var_e8);
    lVar9 = lStack_138;
    local_var_c8 = &memory_allocator_3856_ptr;
    local_var_c0 = (int64_t *)CONCAT71(local_var_c0._1_7_,1);
    function_21f710(&local_var_c8,stack_array_88,puVar6,local_var_110,lStack_138,local_var_e8);
    local_var_118 = 0;
    ppuVar8 = (int32_t **)puVar2;
    if (astack_special_x_20[0] != 0) {
      puVar11 = plocal_var_130;
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
          uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x80,8,3);
          uVar3 = function_33ac00(uVar3);
          uVar1 = *puVar2;
          uVar12 = (uint64_t)uVar1 % (uint64_t)*(uint *)(param_1 + 0x6c8);
          for (puVar4 = *(uint **)(*(int64_t *)(param_1 + 0x6c0) + uVar12 * 8);
              puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
            if (uVar1 == *puVar4) {
              if (puVar4 != (uint *)0x0) goto LAB_18033290a;
              break;
            }
          }
          RenderingShaderProcessor0(param_1 + 0x6d8,acStack_d8,(uint64_t)*(uint *)(param_1 + 0x6c8),
                        *(int32_t *)(param_1 + 0x6d0),1);
          puVar4 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x6e4));
          *puVar4 = *puVar2;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          if (acStack_d8[0] != '\0') {
            uVar12 = (uint64_t)uVar1 % (uint64_t)local_var_d4;
            function_33bf30(param_1 + 0x6b8,local_var_d4);
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
          RenderingShaderProcessor0(param_1 + 0x6d8,acStack_d0,(uint64_t)*(uint *)(param_1 + 0x6c8),
                        *(int32_t *)(param_1 + 0x6d0),1);
          puVar5 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x6e4));
          *puVar5 = *puVar2;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          if (acStack_d0[0] != '\0') {
            uVar12 = (uint64_t)uVar1 % (uint64_t)local_var_cc;
            function_33bf30(param_1 + 0x6b8,local_var_cc);
          }
          *(uint64_t *)(puVar5 + 4) = *(uint64_t *)(*(int64_t *)(param_1 + 0x6c0) + uVar12 * 8)
          ;
          *(uint **)(*(int64_t *)(param_1 + 0x6c0) + uVar12 * 8) = puVar5;
          *(int64_t *)(param_1 + 0x6d0) = *(int64_t *)(param_1 + 0x6d0) + 1;
LAB_1803329a3:
          uVar3 = *(uint64_t *)(puVar5 + 2);
        }
        puVar6 = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xf0,8,3);
        plVar10 = (int64_t *)(puVar6 + 0x14);
        *plVar10 = (int64_t)&system_state_ptr;
        *(uint64_t *)(puVar6 + 0x16) = 0;
        puVar6[0x18] = 0;
        *plVar10 = (int64_t)&memory_allocator_3480_ptr;
        *(int32_t **)(puVar6 + 0x16) = puVar6 + 0x1a;
        puVar6[0x18] = 0;
        *(int8_t *)(puVar6 + 0x1a) = 0;
        pplocal_var_a8 = (void **)plVar10;
        plocal_var_98 = puVar6;
        function_327540(puVar6);
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
          plocal_var_130 = puVar11;
          (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,uVar1);
          puVar11 = (int32_t *)((int64_t)puVar11 + (uint64_t)uVar1);
        }
        plocal_var_130 = puVar11;
        function_33ac70(uVar3,puVar6,astack_special_x_18[0]);
        local_var_118 = local_var_118 + 1;
        puVar2 = puVar2 + 1;
        ppuVar8 = pplocal_var_e0;
        lVar9 = lStack_138;
        puVar6 = plocal_var_108;
      } while (local_var_118 < astack_special_x_20[0]);
    }
    if (ppuVar8 != (int32_t **)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(ppuVar8);
    }
    plocal_var_68 = &system_data_buffer_ptr;
    pplocal_var_a8 = &plocal_var_68;
    if (lStack_60 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_60 = 0;
    local_var_50 = 0;
    plocal_var_68 = &system_state_ptr;
    if (((char)local_var_120 == '\0') && (lVar9 != 0)) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar9);
    }
    if (((char)plocal_var_f0 == '\0') && (puVar6 != (int32_t *)0x0)) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar6);
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
  int8_t stack_array_248 [32];
  int64_t lStack_228;
  uint64_t local_var_220;
  uint local_var_218;
  uint local_var_214;
  uint64_t local_var_210;
  int64_t lStack_208;
  int64_t lStack_200;
  int64_t lStack_1f8;
  char cStack_1f0;
  int8_t local_var_1ef;
  int8_t local_var_1ee;
  int64_t lStack_1e8;
  int64_t lStack_1e0;
  int64_t lStack_1d8;
  int16_t local_var_1d0;
  int8_t local_var_1ce;
  uint64_t local_var_1c8;
  int64_t alStack_1c0 [3];
  int16_t local_var_1a8;
  int8_t local_var_1a6;
  char acStack_1a0 [4];
  uint local_var_19c;
  char acStack_198 [4];
  uint local_var_194;
  int64_t *plStack_190;
  uint *plocal_var_188;
  uint64_t *plocal_var_180;
  uint *plocal_var_178;
  uint64_t *plocal_var_170;
  uint64_t local_var_168;
  void **pplocal_var_160;
  uint64_t local_var_150;
  uint64_t local_var_148;
  void **pplocal_var_140;
  void *plocal_var_138;
  int8_t local_var_130;
  void **pplocal_var_128;
  void **pplocal_var_120;
  void **pplocal_var_118;
  void **pplocal_var_110;
  void **pplocal_var_108;
  void **pplocal_var_100;
  int8_t *plocal_var_f8;
  int64_t lStack_f0;
  uint64_t local_var_e8;
  int64_t lStack_e0;
  void **pplocal_var_d8;
  int8_t stack_array_c8 [32];
  void *plocal_var_a8;
  int64_t lStack_a0;
  int32_t local_var_90;
  int8_t stack_array_88 [80];
  uint64_t local_var_38;
  if (param_3 <= param_2) {
    return;
  }
  local_var_e8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  uVar13 = (uint64_t)(uint)(param_3 - param_2);
  plStack_190 = param_1;
  do {
    alStack_1c0[0] = 0;
    alStack_1c0[1] = 0;
    alStack_1c0[2] = 0;
    local_var_1a8 = 0;
    local_var_1a6 = 3;
    local_var_210 = 0;
    local_var_1c8 = 0;
    local_var_218 = 0;
    lVar10 = *param_1 + 0xa70;
    local_var_168 = uVar13;
    lStack_e0 = lVar10;
    iVar3 = _Mtx_lock(lVar10);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    fread(&local_var_218,4,1,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    if (local_var_218 == 0) {
      plocal_var_178 = (uint *)0x0;
    }
    else {
      plocal_var_178 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)local_var_218 * 4,3);
    }
    puVar7 = plocal_var_178;
    fread(plocal_var_178,4,local_var_218,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    if (local_var_218 == 0) {
      plocal_var_170 = (uint64_t *)0x0;
    }
    else {
      plocal_var_170 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)local_var_218 * 8,3);
    }
    puVar4 = plocal_var_170;
    fread(plocal_var_170,8,local_var_218,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    fread(&local_var_1c8,8,1,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    fread(&local_var_210,8,1,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    System_BufferManager(alStack_1c0,local_var_210);
    lVar12 = alStack_1c0[0];
    fread(alStack_1c0[0],local_var_210,1,*(uint64_t *)(*(int64_t *)param_1[1] + 8));
    iVar3 = _Mtx_unlock(lVar10);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    _Mtx_init_in_situ(stack_array_88,2);
    lStack_1e8 = 0;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
    local_var_1d0 = 0;
    local_var_1ce = 3;
    System_BufferManager(&lStack_1e8,local_var_1c8);
    lVar10 = lStack_1e8;
    plocal_var_138 = &memory_allocator_3856_ptr;
    local_var_130 = 1;
    local_var_220 = local_var_1c8;
    lStack_228 = lStack_1e8;
    function_21f710(&plocal_var_138,stack_array_c8,lVar12,local_var_210);
    local_var_214 = 0;
    puVar5 = puVar7;
    puVar15 = puVar4;
    if (local_var_218 != 0) {
      local_var_148 = (lStack_1d8 - lStack_1e0) + lVar10;
      do {
        uVar1 = *puVar7;
        uVar11 = (uint64_t)uVar1;
        uVar13 = *puVar4;
        lVar10 = *param_1 + 0xa20;
        plocal_var_188 = puVar7;
        plocal_var_180 = puVar4;
        local_var_150 = uVar13;
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
          ppuVar6 = (void **)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x80,8,3);
          *(int32_t *)(ppuVar6 + 4) = 0x3f800000;
          *(int32_t *)((int64_t)ppuVar6 + 0x24) = 0x40000000;
          *(int32_t *)((int64_t)ppuVar6 + 0x2c) = 3;
          ppuVar6[2] = (void *)0x1;
          ppuVar6[1] = &system_buffer_0000;
          ppuVar6[3] = (void *)0x0;
          *(int32_t *)(ppuVar6 + 5) = 0;
          pplocal_var_140 = ppuVar6 + 6;
          pplocal_var_160 = ppuVar6;
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
          RenderingShaderProcessor0(lVar12 + 0xa10,acStack_1a0,(uint64_t)*(uint *)(lVar12 + 0xa00),
                        *(int32_t *)(lVar12 + 0xa08));
          puVar7 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(lVar12 + 0xa1c));
          *puVar7 = uVar1;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          if (acStack_1a0[0] != '\0') {
            uVar13 = uVar11 % (uint64_t)local_var_19c;
            function_33bf30(lVar12 + 0x9f0,local_var_19c);
          }
          *(uint64_t *)(puVar7 + 4) = *(uint64_t *)(*(int64_t *)(lVar12 + 0x9f8) + uVar13 * 8);
          *(uint **)(*(int64_t *)(lVar12 + 0x9f8) + uVar13 * 8) = puVar7;
          *(int64_t *)(lVar12 + 0xa08) = *(int64_t *)(lVar12 + 0xa08) + 1;
LAB_180333054:
          *(void ***)(puVar7 + 2) = ppuVar6;
          uVar13 = local_var_150;
        }
        else {
          for (; puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
            if (uVar1 == *puVar7) {
              if (puVar7 != (uint *)0x0) goto LAB_1803330f8;
              break;
            }
          }
          lStack_228 = CONCAT44(lStack_228._4_4_,1);
          RenderingShaderProcessor0(lVar12 + 0xa10,acStack_198,(uint64_t)*(uint *)(lVar12 + 0xa00),
                        *(int32_t *)(lVar12 + 0xa08));
          puVar7 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(lVar12 + 0xa1c));
          *puVar7 = uVar1;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          if (acStack_198[0] != '\0') {
            uVar14 = uVar11 % (uint64_t)local_var_194;
            function_33bf30(lVar12 + 0x9f0,local_var_194);
          }
          *(uint64_t *)(puVar7 + 4) = *(uint64_t *)(*(int64_t *)(lVar12 + 0x9f8) + uVar14 * 8);
          *(uint **)(*(int64_t *)(lVar12 + 0x9f8) + uVar14 * 8) = puVar7;
          *(int64_t *)(lVar12 + 0xa08) = *(int64_t *)(lVar12 + 0xa08) + 1;
LAB_1803330f8:
          ppuVar6 = *(void ***)(puVar7 + 2);
        }
        iVar3 = _Mtx_unlock(lVar10);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        ppuVar8 = (void **)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x1b0,8,3);
        pplocal_var_d8 = ppuVar8 + 10;
        *pplocal_var_d8 = &system_state_ptr;
        ppuVar8[0xb] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0xc) = 0;
        *pplocal_var_d8 = &memory_allocator_3480_ptr;
        ppuVar8[0xb] = (void *)(ppuVar8 + 0xd);
        *(int32_t *)(ppuVar8 + 0xc) = 0;
        *(int8_t *)(ppuVar8 + 0xd) = 0;
        pplocal_var_128 = ppuVar8 + 0x18;
        pplocal_var_120 = ppuVar8 + 0x1a;
        *pplocal_var_120 = &system_state_ptr;
        ppuVar8[0x1b] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x1c) = 0;
        *pplocal_var_120 = &memory_allocator_3480_ptr;
        ppuVar8[0x1b] = (void *)(ppuVar8 + 0x1d);
        *(int32_t *)(ppuVar8 + 0x1c) = 0;
        *(int8_t *)(ppuVar8 + 0x1d) = 0;
        pplocal_var_118 = ppuVar8 + 0x25;
        *pplocal_var_118 = (void *)0x0;
        ppuVar8[0x26] = (void *)0x0;
        ppuVar8[0x27] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x28) = 3;
        pplocal_var_110 = ppuVar8 + 0x29;
        *pplocal_var_110 = (void *)0x0;
        ppuVar8[0x2a] = (void *)0x0;
        ppuVar8[0x2b] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x2c) = 3;
        *pplocal_var_128 = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x19) = 0;
        pplocal_var_108 = ppuVar8 + 0x2e;
        *pplocal_var_108 = (void *)0x0;
        ppuVar8[0x2f] = (void *)0x0;
        ppuVar8[0x30] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x31) = 3;
        pplocal_var_100 = ppuVar8 + 0x32;
        *pplocal_var_100 = (void *)0x0;
        ppuVar8[0x33] = (void *)0x0;
        ppuVar8[0x34] = (void *)0x0;
        *(int32_t *)(ppuVar8 + 0x35) = 3;
        *(int32_t *)ppuVar8 = 0;
        *(int32_t *)(ppuVar8 + 0x15) = 0;
        *(uint64_t *)((int64_t)ppuVar8 + 0x44) = 0;
        *(int8_t *)(ppuVar8 + 0x16) = 0;
        *(int8_t *)((int64_t)ppuVar8 + 0x4c) = 0;
        plocal_var_f8 = stack_array_88;
        pplocal_var_160 = ppuVar8;
        iVar3 = _Mtx_lock(stack_array_88);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        lVar10 = lStack_1e8;
        local_var_1ee = 3;
        lStack_208 = lStack_1e8;
        lStack_200 = lStack_1e0;
        lStack_1f8 = lStack_1d8;
        _cStack_1f0 = CONCAT11((char)((ushort)local_var_1d0 >> 8),1);
        if (local_var_148 <= uVar13) {
          System_BufferManager(&lStack_208,(lStack_1e0 - lStack_1e8) + uVar13);
        }
        lStack_200 = lStack_200 + uVar13;
        function_336d40(ppuVar8,&lStack_208);
        if ((cStack_1f0 == '\0') && (lStack_208 != 0)) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        iVar3 = _Mtx_unlock(stack_array_88);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        param_1 = plStack_190;
        function_33ac70(ppuVar6,ppuVar8,*(int32_t *)plStack_190[2]);
        local_var_214 = local_var_214 + 1;
        puVar7 = plocal_var_188 + 1;
        puVar4 = plocal_var_180 + 1;
        lVar12 = alStack_1c0[0];
        uVar13 = local_var_168;
        puVar5 = plocal_var_178;
        puVar15 = plocal_var_170;
        plocal_var_188 = puVar7;
        plocal_var_180 = puVar4;
      } while (local_var_214 < local_var_218);
    }
    if (puVar5 != (uint *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar5);
    }
    if (puVar15 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar15);
    }
    pplocal_var_160 = &plocal_var_a8;
    plocal_var_a8 = &system_data_buffer_ptr;
    if (lStack_a0 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_a0 = 0;
    local_var_90 = 0;
    plocal_var_a8 = &system_state_ptr;
    if (((char)local_var_1d0 == '\0') && (lVar10 != 0)) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar10);
    }
    _Mtx_destroy_in_situ(stack_array_88);
    if (((char)local_var_1a8 == '\0') && (lVar12 != 0)) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar12);
    }
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) {
      local_var_168 = uVar13;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_248);
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
  uint stack_special_x_8;
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
  stack_special_x_8 = 0;
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
            piVar3 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 4,
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
            CoreMemoryPoolInitializer(piVar9);
          }
          piVar4 = piVar3 + lVar12;
          piVar16 = piVar3;
          piVar17 = piVar6;
          piVar18 = piVar4;
          uVar10 = stack_special_x_8;
        }
      }
      stack_special_x_8 = uVar10 + 1;
      piVar11 = (int *)(uint64_t)stack_special_x_8;
      lStackX_20 = lStackX_20 + 4;
      lVar2 = *(int64_t *)(param_1 + 0x230);
      piVar5 = piVar6;
      piVar9 = piVar3;
    } while ((uint64_t)(int64_t)(int)stack_special_x_8 <
             (uint64_t)(*(int64_t *)(param_1 + 0x238) - lVar2 >> 2));
  }
  iVar8 = 0;
  uVar7 = (int64_t)piVar6 - (int64_t)piVar3 >> 2;
  piVar4 = piVar3;
  if (uVar7 != 0) {
    do {
      function_333a00(param_1,*piVar4);
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
    CoreMemoryPoolInitializer(piVar3);
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
  function_333460();
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
    function_32cf30(param_1,*(uint64_t *)(param_1 + 0x200),
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
        SystemCore_ErrorHandler(uVar5,&plStackX_8,0);
      }
    }
    if (param_2 == '\0') {
      plVar7 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3,uVar11);
      plStackX_18 = plVar7;
      UltraHighFreq_PerformanceMonitor1(plVar7);
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
      SystemCore_TimerManager(uVar5,&plStackX_18);
    }
    else {
      function_3368b0(param_1,iVar2);
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