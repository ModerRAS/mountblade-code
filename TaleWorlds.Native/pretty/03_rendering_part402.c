/* 原始函数别名定义 */
#define MatrixTransformInterpolator MatrixTransformInterpolator  // MatrixTransformInterpolator 的语义化别名
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part402.c - 15 个函数
// 函数: void function_48fc80(void *param_1)
void function_48fc80(void *param_1)
{
  uint64_t uVar1;
  int32_t *puVar2;
  int iVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int8_t stack_array_158 [48];
  void *plocal_var_128;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int64_t *plStack_100;
  int32_t local_var_f8;
  int8_t local_var_f4;
  void **pplocal_var_f0;
  void **pplocal_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  if (*(int64_t *)(param_1 + 0x58) == 0) {
    local_var_114 = 0;
    local_var_110 = 0;
    local_var_e0 = 0;
    local_var_f8 = 0xffffffff;
    local_var_f4 = 0;
    local_var_120 = 1;
    local_var_118 = 0x1f;
    local_var_108 = 0x10001;
    plocal_var_128 = (void *)0x16800000280;
    pplocal_var_f0 = (void **)0x0;
    plStack_100 = (int64_t *)0x0;
    local_var_11c = 1;
    local_var_10c = 3;
    plocal_var_c8 = &memory_allocator_3432_ptr;
    plocal_var_c0 = stack_array_b0;
    stack_array_b0[0] = 0;
    local_var_b8 = 0x12;
    uVar5 = strcpy_s(stack_array_b0,0x80,&processed_var_8600_ptr);
    puVar4 = (uint64_t *)function_0b2450(uVar5,&pplocal_var_f0,&plocal_var_c8,&plocal_var_128);
    uVar1 = *puVar4;
    *puVar4 = 0;
    pplocal_var_e8 = *(void ***)(param_1 + 0x58);
    *(uint64_t *)(param_1 + 0x58) = uVar1;
    if (pplocal_var_e8 != (void **)0x0) {
      (**(code **)((int64_t)*pplocal_var_e8 + 0x38))();
    }
    if (pplocal_var_f0 != (void **)0x0) {
      (**(code **)(*pplocal_var_f0 + 0x38))();
    }
    plocal_var_c8 = &system_state_ptr;
    if (plStack_100 != (int64_t *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
  }
  pplocal_var_e8 = &plocal_var_128;
  local_var_118 = 0x804905f0;
  local_var_114 = 1;
  local_var_110 = 0x80490480;
  local_var_10c = 1;
  plocal_var_128 = param_1;
  SystemCore_SecurityManager(&plocal_var_128);
  puVar4 = (uint64_t *)*render_system_data_config;
  iVar3 = _Mtx_lock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar1 = SYSTEM_DATA_MANAGER_A;
  pplocal_var_e8 = (void **)SYSTEM_DATA_MANAGER_A;
  SYSTEM_DATA_MANAGER_A = *puVar4;
  pplocal_var_f0 = &plocal_var_128;
  plocal_var_128 = &system_data_buffer_ptr;
  local_var_110 = 0;
  local_var_10c = 0;
  local_var_120 = 0;
  local_var_11c = 0;
  local_var_118 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_128,0x1b);
  puVar2 = (int32_t *)CONCAT44(local_var_11c,local_var_120);
  *puVar2 = 0x74666f53;
  puVar2[1] = 0x65726177;
  puVar2[2] = 0x73615220;
  puVar2[3] = 0x69726574;
  *(uint64_t *)(puVar2 + 4) = 0x41286e6f6974617a;
  puVar2[6] = 0x295856;
  local_var_118 = 0x1b;
  uVar5 = SystemCore_Scheduler(*(uint64_t *)(param_1 + 0x58));
  function_09a080(uVar5,*(uint64_t *)(param_1 + 0x58));
  SYSTEM_DATA_MANAGER_A = uVar1;
  iVar3 = _Mtx_unlock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_48ff50(int64_t param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)
void function_48ff50(int64_t param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)
{
  int *piVar1;
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  int8_t (*pauVar12) [32];
  int iVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int aiStack_58 [8];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)aiStack_58;
  iVar6 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  iVar10 = (int)((param_4 >> 0x1f & 7U) + param_4) >> 3;
  iVar13 = (int)((param_5 >> 0x1f & 7U) + param_5) >> 3;
  iVar7 = (int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3;
  if (iVar7 < iVar13) {
    lVar16 = (int64_t)(iVar7 * 0x50) << 2;
    uVar11 = (uint64_t)(uint)(iVar13 - iVar7);
    lVar15 = *(int64_t *)(param_1 + 0x1f8 + (uint64_t)param_6 * 8) +
             (int64_t)(iVar7 * 0x1400) * 4;
    do {
      auVar5 = render_system_config;
      auVar4 = render_system_config;
      if (iVar6 < iVar10) {
        pauVar12 = (int8_t (*) [32])
                   (*(int64_t *)(param_1 + 600 + (uint64_t)param_6 * 8) + lVar16 +
                   (int64_t)iVar6 * 4);
        uVar14 = (uint64_t)(uint)(iVar10 - iVar6);
        lVar9 = lVar15 + (int64_t)(iVar6 << 4) * 4;
        do {
          lVar8 = 0;
          aiStack_58[0] = 0;
          aiStack_58[1] = 8;
          aiStack_58[2] = 0x500;
          aiStack_58[3] = 0x508;
          aiStack_58[4] = 0xa00;
          aiStack_58[5] = 0xa08;
          aiStack_58[6] = 0xf00;
          aiStack_58[7] = 0xf08;
          auVar2 = auVar5;
          do {
            piVar1 = aiStack_58 + lVar8;
            lVar8 = lVar8 + 1;
            auVar2 = vminps_avx(auVar2,*(int8_t (*) [32])(lVar9 + (int64_t)*piVar1 * 4));
          } while (lVar8 < 8);
          auVar3 = vshufps_avx(auVar2,auVar2,0x4e);
          auVar2 = vminps_avx(auVar2,auVar3);
          auVar3 = vshufps_avx(auVar2,auVar2,0xb1);
          auVar2 = vminps_avx(auVar2,auVar3);
          auVar3 = vperm2f128_avx(auVar2,auVar2,1);
          auVar2 = vminps_avx(auVar2,auVar3);
          auVar2 = vmaskmovps_avx(auVar4,auVar2);
          *pauVar12 = auVar2;
          pauVar12 = (int8_t (*) [32])(*pauVar12 + 4);
          lVar9 = lVar9 + 0x40;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      lVar15 = lVar15 + 0x5000;
      lVar16 = lVar16 + 0x140;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)aiStack_58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_48ffc5(int param_1,uint64_t param_2,uint64_t param_3,int param_4)
void function_48ffc5(int param_1,uint64_t param_2,uint64_t param_3,int param_4)
{
  int64_t lVar1;
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int in_EAX;
  int64_t lVar6;
  int64_t lVar7;
  int unaff_EBX;
  int32_t unaff_0000001c;
  int unaff_ESI;
  uint64_t uVar8;
  int8_t (*pauVar9) [32];
  uint64_t uVar10;
  int64_t in_R10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  uint64_t stack_special_x_20;
  lVar12 = (int64_t)(param_1 << 4) << 2;
  uVar8 = (uint64_t)(uint)(param_4 - in_EAX);
  lVar11 = in_R10 + (int64_t)(in_EAX * 0x1400) * 4;
  do {
    auVar5 = render_system_config;
    auVar4 = render_system_config;
    if (unaff_EBX < unaff_ESI) {
      pauVar9 = (int8_t (*) [32])
                (*(int64_t *)(unaff_R14 + 600 + unaff_R15 * 8) + lVar12 +
                CONCAT44(unaff_0000001c,unaff_EBX) * 4);
      uVar10 = (uint64_t)(uint)(unaff_ESI - unaff_EBX);
      lVar7 = lVar11 + (int64_t)(unaff_EBX << 4) * 4;
      do {
        lVar6 = 0;
        auVar2 = auVar5;
        do {
          lVar1 = lVar6 * 4;
          lVar6 = lVar6 + 1;
          auVar2 = vminps_avx(auVar2,*(int8_t (*) [32])
                                      (lVar7 + (int64_t)*(int *)(&local_buffer_00000000 + lVar1) * 4));
        } while (lVar6 < 8);
        auVar3 = vshufps_avx(auVar2,auVar2,0x4e);
        auVar2 = vminps_avx(auVar2,auVar3);
        auVar3 = vshufps_avx(auVar2,auVar2,0xb1);
        auVar2 = vminps_avx(auVar2,auVar3);
        auVar3 = vperm2f128_avx(auVar2,auVar2,1);
        auVar2 = vminps_avx(auVar2,auVar3);
        auVar2 = vmaskmovps_avx(auVar4,auVar2);
        *pauVar9 = auVar2;
        pauVar9 = (int8_t (*) [32])(*pauVar9 + 4);
        lVar7 = lVar7 + 0x40;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar11 = lVar11 + 0x5000;
    lVar12 = lVar12 + 0x140;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
// WARNING: Subroutine does not return
  SystemSecurityChecker(stack_special_x_20 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_4900c1(void)
void function_4900c1(void)
{
  uint64_t stack_special_x_20;
// WARNING: Subroutine does not return
  SystemSecurityChecker(stack_special_x_20 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4900e0(int64_t param_1)
void function_4900e0(int64_t param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  uVar6 = 0;
  *(int32_t *)(param_1 + 0x84) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  uVar7 = *(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60) >> 3;
  uVar12 = (uint)uVar7;
  uVar2 = uVar6;
  if (uVar12 != 0) {
    uVar7 = uVar7 & 0xffffffff;
    uVar11 = uVar6;
    do {
      lVar1 = *(int64_t *)(**(int64_t **)(uVar11 + *(int64_t *)(param_1 + 0x60)) + 0xb8);
      uVar9 = (int)uVar2 + (int)((*(int64_t *)(lVar1 + 0x48) - *(int64_t *)(lVar1 + 0x40)) / 0x88)
      ;
      uVar2 = (uint64_t)uVar9;
      *(uint *)(param_1 + 0x84) = uVar9;
      uVar7 = uVar7 - 1;
      uVar11 = uVar11 + 8;
    } while (uVar7 != 0);
  }
  uVar9 = (int)uVar2 + 1;
  uVar7 = uVar6;
  if (uVar9 != 0) {
    uVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar9 * 4,CONCAT71((int7)(uVar2 >> 8),3));
    uVar2 = (uint64_t)*(uint *)(param_1 + 0x84);
  }
  *(uint64_t *)(param_1 + 0x90) = uVar7;
  uVar9 = (int)uVar2 + 1;
  uVar7 = uVar6;
  if (uVar9 != 0) {
    uVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)uVar9 * 4,CONCAT71((int7)(uVar2 >> 8),3));
    uVar2 = (uint64_t)*(uint *)(param_1 + 0x84);
  }
  *(uint64_t *)(param_1 + 0x98) = uVar7;
  uVar7 = uVar6;
  if ((int)uVar2 != 0) {
    uVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar2 * 4,CONCAT71((int7)(uVar2 >> 8),3));
  }
  *(uint64_t *)(param_1 + 0x228) = uVar7;
  uVar2 = uVar6;
  if ((uint64_t)*(uint *)(param_1 + 0x84) != 0) {
    uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)*(uint *)(param_1 + 0x84) * 4,3);
  }
  *(uint64_t *)(param_1 + 0x230) = uVar2;
  uVar2 = uVar6;
  uVar7 = uVar6;
  if (uVar12 != 0) {
    do {
      uVar9 = (int)uVar7 + 1;
      uVar2 = (uint64_t)uVar9;
      *(int32_t *)(*(int64_t *)(param_1 + 0x90) + uVar7 * 4) = *(int32_t *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xa0) =
           *(int *)(param_1 + 0xa0) +
           *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar7 * 8) + 0x68);
      *(int32_t *)(*(int64_t *)(param_1 + 0x98) + uVar7 * 4) = *(int32_t *)(param_1 + 0xa4);
      *(int *)(param_1 + 0xa4) =
           *(int *)(param_1 + 0xa4) +
           *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar7 * 8) + 0x6c);
      uVar7 = uVar2;
    } while (uVar9 < uVar12);
  }
  *(int32_t *)(uVar2 * 4 + *(int64_t *)(param_1 + 0x90)) = *(int32_t *)(param_1 + 0xa0);
  *(int32_t *)(uVar2 * 4 + *(int64_t *)(param_1 + 0x98)) = *(int32_t *)(param_1 + 0xa4);
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)*(uint *)(param_1 + 0xa0) << 4,0x10,3);
  uVar4 = system_memory_pool_ptr;
  *(uint64_t *)(param_1 + 0x1a8) = uVar3;
  uVar4 = CoreEngineMemoryPoolReallocator(uVar4,(uint64_t)*(uint *)(param_1 + 0xa0) << 4,0x10,3);
  *(uint64_t *)(param_1 + 0x1b0) = uVar4;
  if (*(int *)(param_1 + 0x84) == 0) {
    *(int8_t *)(param_1 + 0x80) = 0;
    return;
  }
  do {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar6 * 8);
    lVar8 = *(int64_t *)(lVar1 + 0xb0);
    lVar5 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x90) + uVar6 * 4) * 0x10;
    lVar10 = *(int64_t *)(param_1 + 0x1b0) + lVar5;
    lVar5 = *(int64_t *)(param_1 + 0x1a8) + lVar5;
    *(int64_t *)(lVar1 + 0xb8) = lVar5;
    *(int64_t *)(lVar1 + 0xc0) = lVar10;
    *(int64_t *)(lVar8 + 0x28) = lVar5;
    *(int64_t *)(lVar8 + 0x30) = lVar10;
    lVar8 = *(int64_t *)(lVar1 + 0xb0);
    uVar12 = *(uint *)(lVar8 + 0x1c);
    uVar2 = 1;
    if (1 < *(uint *)(lVar1 + 8)) {
      do {
        lVar5 = *(int64_t *)(lVar1 + 0xc0);
        uVar9 = (int)uVar2 + 1;
        lVar10 = uVar2 * 0x38;
        *(uint64_t *)(lVar10 + 0x28 + lVar8) =
             (uint64_t)uVar12 * 0x10 + *(int64_t *)(lVar1 + 0xb8);
        *(uint64_t *)(lVar10 + 0x30 + lVar8) = lVar5 + (uint64_t)uVar12 * 0x10;
        lVar8 = *(int64_t *)(lVar1 + 0xb0);
        uVar12 = uVar12 + *(int *)(lVar10 + 0x1c + lVar8);
        uVar2 = (uint64_t)uVar9;
      } while (uVar9 < *(uint *)(lVar1 + 8));
    }
    uVar12 = (int)uVar6 + 1;
    uVar6 = (uint64_t)uVar12;
  } while (uVar12 < *(uint *)(param_1 + 0x84));
  *(int8_t *)(param_1 + 0x80) = 0;
  return;
}
// 函数: void function_4903f0(int64_t *param_1)
void function_4903f0(int64_t *param_1)
{
  if (param_1 == (int64_t *)0x0) {
    return;
  }
  function_490c90(param_1[0x16]);
  param_1[0x16] = 0;
  if (param_1[10] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[10] = 0;
  if (param_1[0xb] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xb] = 0;
  if (param_1[0xc] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xc] = 0;
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_490480(int64_t *param_1)
void function_490480(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  int32_t *puVar8;
  uint uVar9;
  int32_t *puVar10;
  int32_t uVar11;
  int32_t *plocal_var_48;
  uint local_var_40;
  lVar5 = *(int64_t *)(*param_1 + 0x1f8);
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  lVar4 = SystemCore_Scheduler(*(uint64_t *)(*param_1 + 0x58));
  plVar2 = *(int64_t **)(lVar1 + 0x8400);
  iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,*(uint64_t *)(lVar4 + 8),0,4,0,&plocal_var_48);
  if (iVar3 < 0) {
    SystemCore_Loader(iVar3,&ui_system_data_1856_ptr);
  }
  uVar9 = 0;
  puVar10 = plocal_var_48;
  do {
    uVar7 = 0;
    puVar8 = puVar10;
    do {
      uVar11 = powf(*(int32_t *)
                     (lVar5 + (int64_t)
                              (int)(((uint)uVar7 & 3) +
                                   ((uVar9 & 1) + ((int)(uVar7 >> 2) + (uVar9 >> 1) * 0xa0) * 4) * 2
                                   ) * 4),0x3e800000);
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      *puVar8 = uVar11;
      puVar8 = puVar8 + 1;
    } while ((int)uVar6 < 0x280);
    puVar10 = (int32_t *)((int64_t)puVar10 + (uint64_t)local_var_40);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x168);
  plVar2 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x78);
  lVar5 = SystemCore_Scheduler(*(uint64_t *)(*param_1 + 0x58));
// WARNING: Could not recover jumptable at 0x0001804905e2. Too many branches
// WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar2,*(uint64_t *)(lVar5 + 8),0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_490790(uint64_t *param_1)
{
  uint64_t uVar1;
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3,0xfffffffffffffffe);
  param_1[10] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0xb] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0xc] = uVar1;
  *(int8_t *)((int64_t)param_1 + 0x94) = 0;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_490840(int32_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_490840(int32_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t *puVar6;
  int64_t *in_RCX;
  uint uVar7;
  int iVar8;
  uint64_t uVar10;
  int iVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t **pplStackX_20;
  uint64_t uVar15;
  uint64_t *puVar9;
  uVar15 = 0xfffffffffffffffe;
  plVar1 = (int64_t *)*param_2;
  plStackX_10 = param_2;
  if (plVar1 != (int64_t *)0x0) {
    plStackX_8 = plVar1;
    param_1 = (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plStackX_8 = (int64_t *)*in_RCX;
  *in_RCX = (int64_t)plVar1;
  if (plStackX_8 != (int64_t *)0x0) {
    param_1 = (**(code **)(*plStackX_8 + 0x38))();
  }
  plVar1 = (int64_t *)*param_2;
  plStackX_8 = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    param_1 = (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  function_0b4e00(param_1,plVar1,0xffffffff,param_4,uVar15);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  lVar14 = *(int64_t *)(*param_2 + 0xb8);
  uVar3 = *(int32_t *)(lVar14 + 0x11c);
  uVar4 = *(int32_t *)(lVar14 + 0x120);
  uVar5 = *(int32_t *)(lVar14 + 0x124);
  *(int32_t *)(in_RCX + 0x13) = *(int32_t *)(lVar14 + 0x118);
  *(int32_t *)((int64_t)in_RCX + 0x9c) = uVar3;
  *(int32_t *)(in_RCX + 0x14) = uVar4;
  *(int32_t *)((int64_t)in_RCX + 0xa4) = uVar5;
  *(int32_t *)(in_RCX + 0x15) = *(int32_t *)(*(int64_t *)(*param_2 + 0xb8) + 0x128);
  *(int *)(in_RCX + 1) =
       (int)((*(int64_t *)(*(int64_t *)(*in_RCX + 0xb8) + 0x48) -
             *(int64_t *)(*(int64_t *)(*in_RCX + 0xb8) + 0x40)) / 0x88);
  function_490c90(in_RCX[0x16]);
  puVar12 = (uint64_t *)0x0;
  in_RCX[0x16] = 0;
  uVar7 = *(uint *)(in_RCX + 1);
  uVar10 = (uint64_t)uVar7;
  puVar9 = puVar12;
  if (uVar10 != 0) {
    puVar6 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 0x38 + 0x10,3);
    *puVar6 = uVar10 << 0x20 | 0x38;
    lVar14 = (int64_t)puVar6 + 0x2c;
    do {
      plStackX_8 = (int64_t *)(lVar14 + -0x1c);
      *plStackX_8 = 0;
      *(uint64_t *)(lVar14 + -4) = 0;
      *(uint64_t *)(lVar14 + 4) = 0;
      *(uint64_t *)(lVar14 + 0x14) = 0;
      *(uint64_t *)(lVar14 + 0xc) = 0;
      uVar7 = (int)puVar9 + 1;
      puVar9 = (uint64_t *)(uint64_t)uVar7;
      lVar14 = lVar14 + 0x38;
    } while ((uint64_t)(int64_t)(int)uVar7 < uVar10);
    uVar7 = *(uint *)(in_RCX + 1);
    puVar9 = puVar6 + 2;
  }
  in_RCX[0x16] = (int64_t)puVar9;
  if (uVar7 != 0) {
    pplStackX_20 = &plStackX_8;
    do {
      iVar11 = (int)puVar12;
      lVar14 = (int64_t)puVar12 * 0x38;
      plStackX_8 = (int64_t *)*param_2;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      plVar1 = plStackX_8;
      plStackX_18 = plStackX_8;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
      }
      plStackX_18 = (int64_t *)puVar9[(int64_t)puVar12 * 7];
      puVar9[(int64_t)puVar12 * 7] = (uint64_t)plVar1;
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      *(int *)(puVar9 + (int64_t)puVar12 * 7 + 1) = iVar11;
      lVar13 = (int64_t)iVar11 * 0x88;
      puVar9[(int64_t)puVar12 * 7 + 2] = *(int64_t *)(plStackX_8[0x17] + 0x40) + lVar13;
      lVar2 = *(int64_t *)(plStackX_8[0x17] + 0x40);
      *(int *)(lVar14 + 0x1c + (int64_t)puVar9) =
           (int)(*(int64_t *)(lVar13 + 0x30 + lVar2) - *(int64_t *)(lVar13 + 0x28 + lVar2) >> 4);
      iVar8 = (int)((*(int64_t *)(lVar13 + 0x70 + lVar2) - *(int64_t *)(lVar13 + 0x68 + lVar2)) /
                   0x18);
      *(int *)(lVar14 + 0x24 + (int64_t)puVar9) = iVar8;
      *(int *)(puVar9 + (int64_t)puVar12 * 7 + 4) = iVar8 * 3;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      puVar9 = (uint64_t *)in_RCX[0x16];
      *(int *)(in_RCX + 0xd) = (int)in_RCX[0xd] + *(int *)(lVar14 + 0x1c + (int64_t)puVar9);
      *(int *)((int64_t)in_RCX + 0x6c) =
           *(int *)((int64_t)in_RCX + 0x6c) + *(int *)(lVar14 + 0x24 + (int64_t)puVar9);
      puVar12 = (uint64_t *)(uint64_t)(iVar11 + 1U);
    } while (iVar11 + 1U < *(uint *)(in_RCX + 1));
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// 函数: void function_490b00(int64_t param_1,int64_t param_2,uint64_t param_3)
void function_490b00(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  int iVar2;
  float fVar3;
  iVar2 = function_63c760(*(uint64_t *)(param_2 + 0x40),param_1 + 0x70,
                        *(int32_t *)(param_1 + 0xa8));
  param_3 = param_3 & 0xffffffff;
  *(bool *)(param_3 + 0x90 + param_1) = iVar2 != 0;
  if (iVar2 != 0) {
    SystemFunction_000180490630(*(uint64_t *)(param_1 + 0x50),param_2,
                        *(uint64_t *)(param_1 + 0x58 + param_3 * 8));
    lVar1 = *(int64_t *)(param_1 + 0x58 + param_3 * 8);
    fVar3 = *(float *)(lVar1 + 0x1c) * *(float *)(param_1 + 0x9c) +
            *(float *)(lVar1 + 0xc) * *(float *)(param_1 + 0x98) +
            *(float *)(lVar1 + 0x2c) * *(float *)(param_1 + 0xa0) + *(float *)(lVar1 + 0x3c);
    *(float *)(param_1 + 200) = fVar3;
    if (1.0 < fVar3) {
      fVar3 = fVar3 * *(float *)(param_2 + 0x48);
      *(bool *)(param_3 + 0x92 + param_1) =
           *(float *)(param_1 + 0xa8) <= fVar3 && fVar3 != *(float *)(param_1 + 0xa8);
      return;
    }
    *(int8_t *)(param_3 + 0x92 + param_1) = 0;
  }
  return;
}
// 函数: void function_490bd0(int64_t param_1)
void function_490bd0(int64_t param_1)
{
  uint uVar1;
  uint local_var_40;
  if (((*(char *)((uint64_t)local_var_40 + 0x90 + param_1) != '\0') &&
      (*(char *)((uint64_t)local_var_40 + 0x92 + param_1) == '\0')) &&
     (uVar1 = 0, *(int *)(param_1 + 8) != 0)) {
    do {
      if ((*(byte *)((uint64_t)uVar1 * 0x38 + *(int64_t *)(param_1 + 0xb0) + 0x18) & 1) == 0) {
        MatrixTransformInterpolator();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}
// 函数: void function_490bff(int64_t param_1)
void function_490bff(int64_t param_1)
{
  int64_t in_RAX;
  uint uVar1;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t local_var_28;
  uint64_t local_var_30;
  uint64_t local_var_38;
  int8_t local_var_40;
  int32_t local_var_90;
  uint64_t local_var_98;
  uint64_t local_var_a0;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
    *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
    *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
    do {
      if ((*(byte *)((uint64_t)uVar1 * 0x38 + *(int64_t *)(unaff_RDI + 0xb0) + 0x18) & 1) == 0) {
        local_var_40 = *(int8_t *)(unaff_RDI + 0x94);
        local_var_38 = local_var_a0;
        local_var_30 = local_var_98;
        local_var_28 = local_var_90;
        MatrixTransformInterpolator();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unaff_RDI + 8));
  }
  return;
}
// 函数: void function_490c0a(void)
void function_490c0a(void)
{
  int64_t in_RAX;
  uint unaff_EBX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t local_var_28;
  uint64_t local_var_30;
  uint64_t local_var_38;
  int8_t local_var_40;
  int32_t local_var_90;
  uint64_t local_var_98;
  uint64_t local_var_a0;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  do {
    if ((*(byte *)((uint64_t)unaff_EBX * 0x38 + *(int64_t *)(unaff_RDI + 0xb0) + 0x18) & 1) == 0)
    {
      local_var_40 = *(int8_t *)(unaff_RDI + 0x94);
      local_var_38 = local_var_a0;
      local_var_30 = local_var_98;
      local_var_28 = local_var_90;
      MatrixTransformInterpolator();
    }
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < *(uint *)(unaff_RDI + 8));
  return;
}
// 函数: void function_490c7f(void)
void function_490c7f(void)
{
  return;
}
// 函数: void function_490c84(void)
void function_490c84(void)
{
  return;
}
// 函数: void function_490c90(int64_t param_1)
void function_490c90(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  uVar3 = 0;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(int64_t **)(uVar3 + param_1) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(uVar3 + param_1) + 0x38))();
      }
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1 + -0x10);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_490d10(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
{
  uint64_t uVar1;
  *param_1 = &processed_var_9360_ptr;
  *param_1 = &processed_var_8856_ptr;
  _Mtx_init_in_situ(param_1 + 1,2,param_3,param_4,0xfffffffffffffffe);
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x45) = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  *(int8_t *)(param_1 + 0x4e) = 1;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3a] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3b] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3c] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3d] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3e] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,0x10,3);
  param_1[0x3f] = uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3840,0x40,3);
  param_1[0x4c] = uVar1;
  param_1[0x4d] = 0;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe1000,0x20,3);
  param_1[0x40] = uVar1;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(int8_t *)(param_1 + 0xc) = 0;
  return param_1;
}
uint64_t function_490f40(uint64_t param_1,uint64_t param_2)
{
  function_490f80();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2c8);
  }
  return param_1;
}