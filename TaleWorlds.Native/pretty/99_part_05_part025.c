#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part025.c - 5 个函数

// 函数: void FUN_1802e8630(int64_t param_1,char param_2,char param_3)
void FUN_1802e8630(int64_t param_1,char param_2,char param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t *unaff_RBP;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  int8_t auStack_50 [24];
  
  if ((param_3 != '\0') &&
     (uVar13 = 0, uVar15 = uVar13,
     *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0)) {
    do {
      FUN_1802e8630(*(uint64_t *)(uVar13 + *(int64_t *)(param_1 + 0x1c0)),param_2,param_3);
      uVar13 = uVar13 + 8;
      uVar14 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar14;
    } while ((uint64_t)(int64_t)(int)uVar14 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  plVar1 = *(int64_t **)(param_1 + 0x270);
  if (param_2 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 1;
                    // WARNING: Could not recover jumptable at 0x0001802e8722. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x88))(plVar1,0);
      return;
    }
    return;
  }
  if (plVar1 != (int64_t *)0x0) {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffffe;
                    // WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x88))(plVar1,1);
    return;
  }
  lVar2 = *(int64_t *)(param_1 + 0x20);
  if ((*(uint *)(param_1 + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (*(int64_t *)(param_1 + 0x110) == 0) {
    return;
  }
  if (*(int64_t *)(lVar2 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x148) & 0x20000) != 0) {
    return;
  }
  lVar10 = param_1 + 0x70;
  puVar9 = (int32_t *)RenderingSystem_LightSystem(lVar10,auStack_50);
  fVar3 = (float)puVar9[1];
  uVar4 = puVar9[2];
  uVar5 = puVar9[3];
  *(int32_t *)(param_1 + 0x138) = *puVar9;
  *(float *)(param_1 + 0x13c) = fVar3;
  *(int32_t *)(param_1 + 0x140) = uVar4;
  *(int32_t *)(param_1 + 0x144) = uVar5;
  if ((fVar3 <= -1e-06) || (1e-06 <= fVar3)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((-1e-06 < *(float *)(param_1 + 0x140)) && (*(float *)(param_1 + 0x140) < 1e-06)) {
    return;
  }
  if (bVar6) {
    return;
  }
  (**(code **)(**(int64_t **)(lVar2 + 0x318) + 0xd0))
            (*(int64_t **)(lVar2 + 0x318),&stack0x00000008,0x358637bd,param_1 + 0x270,lVar10);
  iVar8 = _Mtx_lock(lVar2 + 0x60cb8);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar16 = *(uint64_t **)(lVar2 + 0x78);
  if (puVar16 < *(uint64_t **)(lVar2 + 0x80)) {
    *(uint64_t **)(lVar2 + 0x78) = puVar16 + 1;
    *puVar16 = unaff_RBP;
    goto LAB_1802f2aba;
  }
  puVar12 = *(uint64_t **)(lVar2 + 0x70);
  lVar10 = (int64_t)puVar16 - (int64_t)puVar12 >> 3;
  if (lVar10 == 0) {
    lVar10 = 1;
LAB_1802f2a4b:
    puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,*(int8_t *)(lVar2 + 0x88));
    puVar16 = *(uint64_t **)(lVar2 + 0x78);
    puVar12 = *(uint64_t **)(lVar2 + 0x70);
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 != 0) goto LAB_1802f2a4b;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar12 != puVar16) {
                    // WARNING: Subroutine does not return
    memmove(puVar11,puVar12,(int64_t)puVar16 - (int64_t)puVar12);
  }
  *puVar11 = unaff_RBP;
  if (*(int64_t *)(lVar2 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(lVar2 + 0x70) = puVar11;
  *(uint64_t **)(lVar2 + 0x78) = puVar11 + 1;
  *(uint64_t **)(lVar2 + 0x80) = puVar11 + lVar10;
LAB_1802f2aba:
  iVar8 = _Mtx_unlock(lVar2 + 0x60cb8);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  *(uint64_t *)(lVar2 + 0x98) = 0;
  if (unaff_RBP != (int64_t *)0x0) {
    unaff_RBP[2] = param_1;
    if (unaff_RBP != (int64_t *)0x0) {
      (**(code **)(*unaff_RBP + 0x28))(unaff_RBP);
    }
    plVar1 = *(int64_t **)(param_1 + 0x270);
    *(int64_t **)(param_1 + 0x270) = unaff_RBP;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if ((*(byte *)(param_1 + 0x148) & 1) != 0) {
      (**(code **)(*unaff_RBP + 0x90))();
    }
    cVar7 = (**(code **)(*unaff_RBP + 0x70))();
    if (cVar7 != '\0') {
      iVar8 = _Mtx_lock(lVar2 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      SystemInitializer(lVar2 + 0x8118,&stack0x00000018);
      iVar8 = _Mtx_unlock(lVar2 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
    }
  }
  if (unaff_RBP != (int64_t *)0x0) {
    (**(code **)(*unaff_RBP + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e8636(int64_t *param_1,char param_2,char param_3)
void FUN_1802e8636(int64_t *param_1,char param_2,char param_3)

{
  int64_t lVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  uint64_t uVar6;
  char cVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar13;
  uint uVar14;
  uint64_t unaff_RDI;
  uint64_t uVar15;
  int64_t *plVar16;
  uint64_t *puVar17;
  uint64_t in_stack_00000038;
  int64_t *in_stack_00000040;
  int8_t auStack_28 [24];
  
  if ((param_3 != '\0') &&
     (uVar13 = 0, uVar15 = uVar13, uVar6 = unaff_RSI, in_stack_00000040 = (int64_t *)unaff_RDI,
     param_1[0x39] - param_1[0x38] >> 3 != 0)) {
    do {
      in_stack_00000038 = uVar6;
      FUN_1802e8630(*(uint64_t *)(uVar13 + param_1[0x38]),param_2,param_3);
      uVar13 = uVar13 + 8;
      uVar14 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar14;
      uVar6 = in_stack_00000038;
    } while ((uint64_t)(int64_t)(int)uVar14 < (uint64_t)(param_1[0x39] - param_1[0x38] >> 3));
  }
  plVar16 = (int64_t *)param_1[0x4e];
  if (param_2 == '\0') {
    if (plVar16 != (int64_t *)0x0) {
      *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) | 1;
                    // WARNING: Could not recover jumptable at 0x0001802e8722. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar16 + 0x88))(plVar16,0);
      return;
    }
    return;
  }
  if (plVar16 != (int64_t *)0x0) {
    *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xfffffffe;
                    // WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar16 + 0x88))(plVar16,1);
    return;
  }
  lVar1 = param_1[4];
  if ((*(uint *)((int64_t)param_1 + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (param_1[0x22] == 0) {
    return;
  }
  if (*(int64_t *)(lVar1 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x29) & 0x20000) != 0) {
    return;
  }
  plVar16 = param_1 + 0xe;
  puVar9 = (int32_t *)RenderingSystem_LightSystem(plVar16,auStack_28);
  fVar2 = (float)puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(int32_t *)(param_1 + 0x27) = *puVar9;
  *(float *)((int64_t)param_1 + 0x13c) = fVar2;
  *(int32_t *)(param_1 + 0x28) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x144) = uVar4;
  if ((fVar2 <= -1e-06) || (1e-06 <= fVar2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((-1e-06 < *(float *)(param_1 + 0x28)) && (*(float *)(param_1 + 0x28) < 1e-06)) {
    return;
  }
  if (bVar5) {
    return;
  }
  (**(code **)(**(int64_t **)(lVar1 + 0x318) + 0xd0))
            (*(int64_t **)(lVar1 + 0x318),&stack0x00000030,0x358637bd,param_1 + 0x4e,plVar16);
  plVar16 = (int64_t *)(lVar1 + 0x60cb8);
  in_stack_00000040 = plVar16;
  iVar8 = _Mtx_lock(plVar16);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar17 = *(uint64_t **)(lVar1 + 0x78);
  if (puVar17 < *(uint64_t **)(lVar1 + 0x80)) {
    *(uint64_t **)(lVar1 + 0x78) = puVar17 + 1;
    *puVar17 = unaff_RBP;
    goto LAB_1802f2aba;
  }
  puVar12 = *(uint64_t **)(lVar1 + 0x70);
  lVar10 = (int64_t)puVar17 - (int64_t)puVar12 >> 3;
  if (lVar10 == 0) {
    lVar10 = 1;
LAB_1802f2a4b:
    puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,*(int8_t *)(lVar1 + 0x88));
    puVar17 = *(uint64_t **)(lVar1 + 0x78);
    puVar12 = *(uint64_t **)(lVar1 + 0x70);
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 != 0) goto LAB_1802f2a4b;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar12 != puVar17) {
                    // WARNING: Subroutine does not return
    memmove(puVar11,puVar12,(int64_t)puVar17 - (int64_t)puVar12);
  }
  *puVar11 = unaff_RBP;
  if (*(int64_t *)(lVar1 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(lVar1 + 0x70) = puVar11;
  *(uint64_t **)(lVar1 + 0x78) = puVar11 + 1;
  *(uint64_t **)(lVar1 + 0x80) = puVar11 + lVar10;
LAB_1802f2aba:
  iVar8 = _Mtx_unlock(plVar16);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  *(uint64_t *)(lVar1 + 0x98) = 0;
  if (unaff_RBP != (int64_t *)0x0) {
    unaff_RBP[2] = (int64_t)param_1;
    if (unaff_RBP != (int64_t *)0x0) {
      (**(code **)(*unaff_RBP + 0x28))(unaff_RBP);
    }
    in_stack_00000040 = (int64_t *)param_1[0x4e];
    param_1[0x4e] = (int64_t)unaff_RBP;
    if (in_stack_00000040 != (int64_t *)0x0) {
      (**(code **)(*in_stack_00000040 + 0x38))();
    }
    if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
      (**(code **)(*unaff_RBP + 0x90))();
    }
    cVar7 = (**(code **)(*unaff_RBP + 0x70))();
    if (cVar7 != '\0') {
      in_stack_00000040 = param_1;
      iVar8 = _Mtx_lock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      SystemInitializer(lVar1 + 0x8118,&stack0x00000040);
      iVar8 = _Mtx_unlock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
    }
  }
  if (unaff_RBP != (int64_t *)0x0) {
    (**(code **)(*unaff_RBP + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e865d(void)
void FUN_1802e865d(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  float fVar4;
  int32_t uVar5;
  int32_t uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int64_t in_RAX;
  int32_t *puVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int64_t unaff_RBX;
  char unaff_BPL;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar16;
  int8_t unaff_R14B;
  uint64_t *puVar17;
  int64_t *in_stack_00000030;
  int8_t auStack_28 [24];
  
  uVar14 = 0;
  uVar16 = uVar14;
  if (in_RAX >> 3 != 0) {
    do {
      FUN_1802e8630(*(uint64_t *)(uVar14 + *(int64_t *)(unaff_RBX + 0x1c0)),unaff_BPL,unaff_R14B)
      ;
      uVar14 = uVar14 + 8;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (uint64_t)uVar15;
    } while ((uint64_t)(int64_t)(int)uVar15 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  plVar1 = *(int64_t **)(unaff_RBX + 0x270);
  if (unaff_BPL == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      *(uint *)(unaff_RBX + 0x148) = *(uint *)(unaff_RBX + 0x148) | 1;
                    // WARNING: Could not recover jumptable at 0x0001802e8722. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x88))(plVar1,0);
      return;
    }
    return;
  }
  if (plVar1 != (int64_t *)0x0) {
    *(uint *)(unaff_RBX + 0x148) = *(uint *)(unaff_RBX + 0x148) & 0xfffffffe;
                    // WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x88))(plVar1,1);
    return;
  }
  lVar2 = *(int64_t *)(unaff_RBX + 0x20);
  if ((*(uint *)(unaff_RBX + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (*(int64_t *)(unaff_RBX + 0x110) == 0) {
    return;
  }
  if (*(int64_t *)(lVar2 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 0x148) & 0x20000) != 0) {
    return;
  }
  lVar11 = unaff_RBX + 0x70;
  puVar10 = (int32_t *)RenderingSystem_LightSystem(lVar11,auStack_28);
  fVar4 = (float)puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *(int32_t *)(unaff_RBX + 0x138) = *puVar10;
  *(float *)(unaff_RBX + 0x13c) = fVar4;
  *(int32_t *)(unaff_RBX + 0x140) = uVar5;
  *(int32_t *)(unaff_RBX + 0x144) = uVar6;
  if ((fVar4 <= -1e-06) || (1e-06 <= fVar4)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((-1e-06 < *(float *)(unaff_RBX + 0x140)) && (*(float *)(unaff_RBX + 0x140) < 1e-06)) {
    return;
  }
  if (bVar7) {
    return;
  }
  (**(code **)(**(int64_t **)(lVar2 + 0x318) + 0xd0))
            (*(int64_t **)(lVar2 + 0x318),&stack0x00000030,0x358637bd,unaff_RBX + 0x270,lVar11);
  plVar1 = in_stack_00000030;
  iVar9 = _Mtx_lock(lVar2 + 0x60cb8);
  if (iVar9 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  puVar17 = *(uint64_t **)(lVar2 + 0x78);
  if (puVar17 < *(uint64_t **)(lVar2 + 0x80)) {
    *(uint64_t **)(lVar2 + 0x78) = puVar17 + 1;
    *puVar17 = plVar1;
    goto LAB_1802f2aba;
  }
  puVar13 = *(uint64_t **)(lVar2 + 0x70);
  lVar11 = (int64_t)puVar17 - (int64_t)puVar13 >> 3;
  if (lVar11 == 0) {
    lVar11 = 1;
LAB_1802f2a4b:
    puVar12 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 8,*(int8_t *)(lVar2 + 0x88));
    puVar17 = *(uint64_t **)(lVar2 + 0x78);
    puVar13 = *(uint64_t **)(lVar2 + 0x70);
  }
  else {
    lVar11 = lVar11 * 2;
    if (lVar11 != 0) goto LAB_1802f2a4b;
    puVar12 = (uint64_t *)0x0;
  }
  if (puVar13 != puVar17) {
                    // WARNING: Subroutine does not return
    memmove(puVar12,puVar13,(int64_t)puVar17 - (int64_t)puVar13);
  }
  *puVar12 = plVar1;
  if (*(int64_t *)(lVar2 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(lVar2 + 0x70) = puVar12;
  *(uint64_t **)(lVar2 + 0x78) = puVar12 + 1;
  *(uint64_t **)(lVar2 + 0x80) = puVar12 + lVar11;
LAB_1802f2aba:
  iVar9 = _Mtx_unlock(lVar2 + 0x60cb8);
  if (iVar9 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar9);
  }
  plVar1 = in_stack_00000030;
  *(uint64_t *)(lVar2 + 0x98) = 0;
  if (in_stack_00000030 != (int64_t *)0x0) {
    in_stack_00000030[2] = unaff_RBX;
    if (in_stack_00000030 != (int64_t *)0x0) {
      (**(code **)(*in_stack_00000030 + 0x28))(in_stack_00000030);
    }
    plVar3 = *(int64_t **)(unaff_RBX + 0x270);
    *(int64_t **)(unaff_RBX + 0x270) = plVar1;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    if ((*(byte *)(unaff_RBX + 0x148) & 1) != 0) {
      (**(code **)(*in_stack_00000030 + 0x90))();
    }
    cVar8 = (**(code **)(*in_stack_00000030 + 0x70))();
    if (cVar8 != '\0') {
      iVar9 = _Mtx_lock(lVar2 + 0x80c8);
      if (iVar9 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar9);
      }
      SystemInitializer(lVar2 + 0x8118,&stack0x00000040);
      iVar9 = _Mtx_unlock(lVar2 + 0x80c8);
      if (iVar9 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar9);
      }
    }
  }
  if (in_stack_00000030 != (int64_t *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e866d(void)
void FUN_1802e866d(void)

{
  int64_t lVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t *unaff_RBX;
  char unaff_BPL;
  uint64_t uVar13;
  uint unaff_EDI;
  int64_t *plVar14;
  int8_t unaff_R14B;
  uint64_t *puVar15;
  int64_t *in_stack_00000030;
  int64_t *in_stack_00000040;
  int8_t auStack_28 [24];
  
  uVar13 = (uint64_t)unaff_EDI;
  do {
    FUN_1802e8630(*(uint64_t *)(uVar13 + unaff_RBX[0x38]),unaff_BPL,unaff_R14B);
    uVar13 = uVar13 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI < (uint64_t)(unaff_RBX[0x39] - unaff_RBX[0x38] >> 3)
          );
  plVar14 = (int64_t *)unaff_RBX[0x4e];
  if (unaff_BPL == '\0') {
    if (plVar14 == (int64_t *)0x0) {
      return;
    }
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) | 1;
                    // WARNING: Could not recover jumptable at 0x0001802e8722. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar14 + 0x88))(plVar14,0);
    return;
  }
  if (plVar14 != (int64_t *)0x0) {
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) & 0xfffffffe;
                    // WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar14 + 0x88))(plVar14,1);
    return;
  }
  lVar1 = unaff_RBX[4];
  if ((*(uint *)((int64_t)unaff_RBX + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (unaff_RBX[0x22] == 0) {
    return;
  }
  if (*(int64_t *)(lVar1 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 0x29) & 0x20000) != 0) {
    return;
  }
  plVar14 = unaff_RBX + 0xe;
  puVar9 = (int32_t *)RenderingSystem_LightSystem(plVar14,auStack_28);
  fVar2 = (float)puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(int32_t *)(unaff_RBX + 0x27) = *puVar9;
  *(float *)((int64_t)unaff_RBX + 0x13c) = fVar2;
  *(int32_t *)(unaff_RBX + 0x28) = uVar3;
  *(int32_t *)((int64_t)unaff_RBX + 0x144) = uVar4;
  if ((fVar2 <= -1e-06) || (1e-06 <= fVar2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((-1e-06 < *(float *)(unaff_RBX + 0x28)) && (*(float *)(unaff_RBX + 0x28) < 1e-06)) {
    return;
  }
  if (bVar5) {
    return;
  }
  (**(code **)(**(int64_t **)(lVar1 + 0x318) + 0xd0))
            (*(int64_t **)(lVar1 + 0x318),&stack0x00000030,0x358637bd,unaff_RBX + 0x4e,plVar14);
  plVar6 = in_stack_00000030;
  plVar14 = (int64_t *)(lVar1 + 0x60cb8);
  in_stack_00000040 = plVar14;
  iVar8 = _Mtx_lock(plVar14);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar15 = *(uint64_t **)(lVar1 + 0x78);
  if (puVar15 < *(uint64_t **)(lVar1 + 0x80)) {
    *(uint64_t **)(lVar1 + 0x78) = puVar15 + 1;
    *puVar15 = plVar6;
    goto LAB_1802f2aba;
  }
  puVar12 = *(uint64_t **)(lVar1 + 0x70);
  lVar10 = (int64_t)puVar15 - (int64_t)puVar12 >> 3;
  if (lVar10 == 0) {
    lVar10 = 1;
LAB_1802f2a4b:
    puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,*(int8_t *)(lVar1 + 0x88));
    puVar15 = *(uint64_t **)(lVar1 + 0x78);
    puVar12 = *(uint64_t **)(lVar1 + 0x70);
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 != 0) goto LAB_1802f2a4b;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar12 != puVar15) {
                    // WARNING: Subroutine does not return
    memmove(puVar11,puVar12,(int64_t)puVar15 - (int64_t)puVar12);
  }
  *puVar11 = plVar6;
  if (*(int64_t *)(lVar1 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(lVar1 + 0x70) = puVar11;
  *(uint64_t **)(lVar1 + 0x78) = puVar11 + 1;
  *(uint64_t **)(lVar1 + 0x80) = puVar11 + lVar10;
LAB_1802f2aba:
  iVar8 = _Mtx_unlock(plVar14);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  plVar14 = in_stack_00000030;
  *(uint64_t *)(lVar1 + 0x98) = 0;
  if (in_stack_00000030 != (int64_t *)0x0) {
    in_stack_00000030[2] = (int64_t)unaff_RBX;
    in_stack_00000040 = in_stack_00000030;
    if (in_stack_00000030 != (int64_t *)0x0) {
      (**(code **)(*in_stack_00000030 + 0x28))(in_stack_00000030);
    }
    in_stack_00000040 = (int64_t *)unaff_RBX[0x4e];
    unaff_RBX[0x4e] = (int64_t)plVar14;
    if (in_stack_00000040 != (int64_t *)0x0) {
      (**(code **)(*in_stack_00000040 + 0x38))();
    }
    if ((*(byte *)(unaff_RBX + 0x29) & 1) != 0) {
      (**(code **)(*in_stack_00000030 + 0x90))();
    }
    cVar7 = (**(code **)(*in_stack_00000030 + 0x70))();
    if (cVar7 != '\0') {
      in_stack_00000040 = unaff_RBX;
      iVar8 = _Mtx_lock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      SystemInitializer(lVar1 + 0x8118,&stack0x00000040);
      iVar8 = _Mtx_unlock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
    }
  }
  if (in_stack_00000030 != (int64_t *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e86bd(void)
void FUN_1802e86bd(void)

{
  int64_t lVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t *unaff_RBX;
  char unaff_BPL;
  int64_t *plVar13;
  uint64_t *puVar14;
  int64_t *in_stack_00000030;
  uint64_t in_stack_00000038;
  int64_t *in_stack_00000040;
  int8_t auStack_28 [24];
  
  plVar13 = (int64_t *)unaff_RBX[0x4e];
  if (unaff_BPL == '\0') {
    if (plVar13 == (int64_t *)0x0) {
      return;
    }
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) | 1;
                    // WARNING: Could not recover jumptable at 0x0001802e8722. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar13 + 0x88))(plVar13,0);
    return;
  }
  if (plVar13 != (int64_t *)0x0) {
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) & 0xfffffffe;
                    // WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar13 + 0x88))(plVar13,1);
    return;
  }
  lVar1 = unaff_RBX[4];
  if ((*(uint *)((int64_t)unaff_RBX + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (unaff_RBX[0x22] == 0) {
    return;
  }
  if (*(int64_t *)(lVar1 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 0x29) & 0x20000) != 0) {
    return;
  }
  plVar13 = unaff_RBX + 0xe;
  puVar9 = (int32_t *)RenderingSystem_LightSystem(plVar13,auStack_28);
  fVar2 = (float)puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(int32_t *)(unaff_RBX + 0x27) = *puVar9;
  *(float *)((int64_t)unaff_RBX + 0x13c) = fVar2;
  *(int32_t *)(unaff_RBX + 0x28) = uVar3;
  *(int32_t *)((int64_t)unaff_RBX + 0x144) = uVar4;
  if ((fVar2 <= -1e-06) || (1e-06 <= fVar2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((-1e-06 < *(float *)(unaff_RBX + 0x28)) && (*(float *)(unaff_RBX + 0x28) < 1e-06)) {
    return;
  }
  if (bVar5) {
    return;
  }
  (**(code **)(**(int64_t **)(lVar1 + 0x318) + 0xd0))
            (*(int64_t **)(lVar1 + 0x318),&stack0x00000030,0x358637bd,unaff_RBX + 0x4e,plVar13);
  plVar6 = in_stack_00000030;
  plVar13 = (int64_t *)(lVar1 + 0x60cb8);
  in_stack_00000040 = plVar13;
  iVar8 = _Mtx_lock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar14 = *(uint64_t **)(lVar1 + 0x78);
  if (puVar14 < *(uint64_t **)(lVar1 + 0x80)) {
    *(uint64_t **)(lVar1 + 0x78) = puVar14 + 1;
    *puVar14 = plVar6;
    goto LAB_1802f2aba;
  }
  puVar12 = *(uint64_t **)(lVar1 + 0x70);
  lVar10 = (int64_t)puVar14 - (int64_t)puVar12 >> 3;
  if (lVar10 == 0) {
    lVar10 = 1;
LAB_1802f2a4b:
    puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,*(int8_t *)(lVar1 + 0x88));
    puVar14 = *(uint64_t **)(lVar1 + 0x78);
    puVar12 = *(uint64_t **)(lVar1 + 0x70);
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 != 0) goto LAB_1802f2a4b;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar12 != puVar14) {
                    // WARNING: Subroutine does not return
    memmove(puVar11,puVar12,(int64_t)puVar14 - (int64_t)puVar12);
  }
  *puVar11 = plVar6;
  if (*(int64_t *)(lVar1 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(lVar1 + 0x70) = puVar11;
  *(uint64_t **)(lVar1 + 0x78) = puVar11 + 1;
  *(uint64_t **)(lVar1 + 0x80) = puVar11 + lVar10;
LAB_1802f2aba:
  iVar8 = _Mtx_unlock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  plVar13 = in_stack_00000030;
  *(uint64_t *)(lVar1 + 0x98) = 0;
  if (in_stack_00000030 != (int64_t *)0x0) {
    in_stack_00000030[2] = (int64_t)unaff_RBX;
    in_stack_00000040 = in_stack_00000030;
    if (in_stack_00000030 != (int64_t *)0x0) {
      (**(code **)(*in_stack_00000030 + 0x28))(in_stack_00000030);
    }
    in_stack_00000040 = (int64_t *)unaff_RBX[0x4e];
    unaff_RBX[0x4e] = (int64_t)plVar13;
    if (in_stack_00000040 != (int64_t *)0x0) {
      (**(code **)(*in_stack_00000040 + 0x38))();
    }
    if ((*(byte *)(unaff_RBX + 0x29) & 1) != 0) {
      (**(code **)(*in_stack_00000030 + 0x90))();
    }
    cVar7 = (**(code **)(*in_stack_00000030 + 0x70))();
    if (cVar7 != '\0') {
      in_stack_00000040 = unaff_RBX;
      iVar8 = _Mtx_lock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      SystemInitializer(lVar1 + 0x8118,&stack0x00000040);
      iVar8 = _Mtx_unlock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
    }
  }
  if (in_stack_00000030 != (int64_t *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




