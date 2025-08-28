#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part090.c - 7 个函数

// 函数: void FUN_1805faa50(int64_t param_1)
void FUN_1805faa50(int64_t param_1)

{
  byte *pbVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int8_t *puVar7;
  int unaff_EBP;
  int64_t unaff_RDI;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_1805fa870();
  lVar2 = *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + -8);
  *(int *)(lVar2 + 0x5c4) = *(int *)(lVar2 + 0x5c4) - (unaff_EBP - iVar5);
  FUN_180646200(*(uint64_t *)(unaff_RDI + 0x20),lVar2,unaff_EBP - iVar5);
  *(int *)(lVar2 + 0x5c8) = iVar5;
  iVar4 = *(int *)(lVar2 + 0x5c4);
  if (iVar5 < *(int *)(lVar2 + 0x5c4)) {
    *(int *)(lVar2 + 0x5c4) = iVar5;
    iVar4 = iVar5;
  }
  lVar3 = *(int64_t *)(lVar2 + 0x598);
  uVar6 = iVar4 >> 0x1f & 7;
  iVar4 = iVar4 + uVar6;
  iVar8 = iVar4 >> 3;
  iVar5 = iVar8 + 1;
  pbVar1 = (byte *)(iVar8 + lVar3);
  *pbVar1 = *pbVar1 & ~(-1 << (((byte)iVar4 & 7) - (char)uVar6 & 0x1f));
  if (iVar5 < *(int *)(lVar2 + 0x590) >> 3) {
    puVar7 = (int8_t *)(iVar5 + lVar3);
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x590) >> 3);
  }
  *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 8) + -8) + 0x5c4) = 0;
  iVar5 = _Mtx_unlock(unaff_RDI + 0x4b58);
  if (iVar5 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar5);
    return;
  }
  return;
}






// 函数: void FUN_1805faa55(int64_t param_1)
void FUN_1805faa55(int64_t param_1)

{
  byte *pbVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int8_t *puVar7;
  int unaff_EBP;
  int64_t unaff_RDI;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_1805fa870();
  lVar2 = *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + -8);
  *(int *)(lVar2 + 0x5c4) = *(int *)(lVar2 + 0x5c4) - (unaff_EBP - iVar5);
  FUN_180646200(*(uint64_t *)(unaff_RDI + 0x20),lVar2,unaff_EBP - iVar5);
  *(int *)(lVar2 + 0x5c8) = iVar5;
  iVar4 = *(int *)(lVar2 + 0x5c4);
  if (iVar5 < *(int *)(lVar2 + 0x5c4)) {
    *(int *)(lVar2 + 0x5c4) = iVar5;
    iVar4 = iVar5;
  }
  lVar3 = *(int64_t *)(lVar2 + 0x598);
  uVar6 = iVar4 >> 0x1f & 7;
  iVar4 = iVar4 + uVar6;
  iVar8 = iVar4 >> 3;
  iVar5 = iVar8 + 1;
  pbVar1 = (byte *)(iVar8 + lVar3);
  *pbVar1 = *pbVar1 & ~(-1 << (((byte)iVar4 & 7) - (char)uVar6 & 0x1f));
  if (iVar5 < *(int *)(lVar2 + 0x590) >> 3) {
    puVar7 = (int8_t *)(iVar5 + lVar3);
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x590) >> 3);
  }
  *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 8) + -8) + 0x5c4) = 0;
  iVar5 = _Mtx_unlock(unaff_RDI + 0x4b58);
  if (iVar5 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar5);
    return;
  }
  return;
}






// 函数: void FUN_1805faada(void)
void FUN_1805faada(void)

{
  int in_EAX;
  int iVar1;
  int8_t *puVar2;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t in_R10;
  
  puVar2 = (int8_t *)(in_EAX + in_R10);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    in_EAX = in_EAX + 1;
  } while (in_EAX < *(int *)(unaff_RBX + 0x590) >> 3);
  *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 8) + -8) + 0x5c4) = 0;
  iVar1 = _Mtx_unlock(unaff_RDI + 0x4b58);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}






// 函数: void FUN_1805fab0d(void)
void FUN_1805fab0d(void)

{
  int iVar1;
  int64_t unaff_RDI;
  
  iVar1 = _Mtx_unlock(unaff_RDI + 0x4b58);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}






// 函数: void FUN_1805fab28(void)
void FUN_1805fab28(void)

{
  int32_t in_EAX;
  
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
  __Throw_C_error_std__YAXH_Z(in_EAX);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805fab40(void)
void FUN_1805fab40(void)

{
  int64_t lVar1;
  
  lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x5d0,8,3);
  *(uint64_t *)(lVar1 + 0x598) = 0;
  *(int32_t *)(lVar1 + 0x590) = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = 0;
  *(uint64_t *)(lVar1 + 0x588) = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = system_system_config;
  *(uint64_t *)(lVar1 + 0x5c0) = 0;
  *(int64_t *)(lVar1 + 0x598) = lVar1;
  *(int32_t *)(lVar1 + 0x590) = 0x2c40;
  *(int32_t *)(lVar1 + 0x5c8) = 0;
                    // WARNING: Subroutine does not return
  memset(lVar1,0,0x588);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805fabe0(int param_1,int param_2,int64_t param_3,uint64_t *param_4)
void FUN_1805fabe0(int param_1,int param_2,int64_t param_3,uint64_t *param_4)

{
  float fVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  float *pfVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint uVar9;
  uint64_t uVar10;
  int iVar11;
  uint64_t *puVar12;
  float fVar13;
  int32_t uVar14;
  float fVar15;
  int8_t auStack_d8 [32];
  uint64_t *puStack_b8;
  int iStack_b0;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  int32_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  lVar7 = (int64_t)param_1;
  if (param_2 == 0) {
LAB_1805fac53:
    iVar4 = *(int *)(system_system_config + lVar7 * 0x14);
  }
  else if (param_2 == 1) {
    iVar4 = *(int *)(system_system_config + 4 + lVar7 * 0x14);
  }
  else if (param_2 == 2) {
    iVar4 = *(int *)(system_system_config + 8 + lVar7 * 0x14);
  }
  else if (param_2 == 3) {
    iVar4 = *(int *)(system_system_config + 0xc + lVar7 * 0x14);
  }
  else {
    if (param_2 != 4) goto LAB_1805fac53;
    iVar4 = *(int *)(system_system_config + 0x10 + lVar7 * 0x14);
  }
  puStack_b8 = param_4;
  if (iVar4 != -1) {
    uVar10 = 0;
    if (param_2 - 1U < 3) {
      puVar12 = *(uint64_t **)(param_3 + 0x210);
      lVar7 = puVar12[0x4b2];
      lVar3 = *(int64_t *)
               (*(int64_t *)(lVar7 + 0xc78) +
               ((int64_t)*(int *)(lVar7 + 0xc84) + (int64_t)*(int *)(lVar7 + 0x10) * 6) * 8);
      uStack_78 = *(uint64_t *)(lVar3 + 0x6c);
      uStack_70 = *(uint64_t *)(lVar3 + 0x74);
      if ((param_2 == 1) && (1 < *(int *)(lVar7 + 0x10) - 4U)) {
        iVar4 = func_0x0001805fd450(&system_data_5ef8,param_1,2);
      }
      fVar15 = *(float *)((int64_t)puVar12 + 0x9c);
      if ((void *)*puVar12 == &processed_var_952_ptr) {
        fVar13 = *(float *)(lVar7 + 0x40);
        puVar12 = param_4;
      }
      else {
        fVar13 = (float)(**(code **)((void *)*puVar12 + 0x158))(puVar12);
        puVar12 = param_4;
      }
    }
    else {
      if (param_2 != 0) goto LAB_1805faebf;
      plVar2 = *(int64_t **)(param_3 + 0x210);
      fVar15 = *(float *)((int64_t)plVar2 + 0x9c);
      if ((void *)*plVar2 == &processed_var_568_ptr) {
        fVar13 = *(float *)(plVar2 + 0x693);
      }
      else {
        fVar13 = (float)(**(code **)((void *)*plVar2 + 0x158))(plVar2);
      }
      if ((int)plVar2[0x698] < 1) {
        uStack_78 = 0xbf800000bf800000;
        uStack_70 = 0xbf800000bf800000;
      }
      else {
        uStack_78 = *(uint64_t *)
                     (*(int64_t *)(plVar2[(int64_t)(int)plVar2[0x698] * 0x26b + 0x679] + 8) + 0x6c
                     );
        uStack_70 = *(uint64_t *)
                     (*(int64_t *)(plVar2[(int64_t)(int)plVar2[0x698] * 0x26b + 0x679] + 8) + 0x74
                     );
      }
      iVar11 = 1;
      puVar8 = (uint64_t *)(plVar2 + 0x497);
      do {
        uVar6 = uVar10;
        if (puVar8[-2] != 0) {
          uVar6 = *(uint64_t *)(puVar8[-2] + 0x1d0);
        }
        if ((((*puVar8 | uVar6) & 0x3000000000) != 0) &&
           (lVar7 = (**(code **)(*plVar2 + 0x128))(plVar2,iVar11), lVar7 != 0)) {
          if ((*(uint *)(lVar7 + 0x1d0) >> 0x11 & 1) == 0) goto LAB_1805faebf;
          fVar15 = *(float *)(plVar2[(int64_t)iVar11 * 0x236 + 0x1f] + 0x30);
          fVar13 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,iVar11);
          uStack_78 = *(uint64_t *)(lVar7 + 0x6c);
          uStack_70 = *(uint64_t *)(lVar7 + 0x74);
          puVar12 = puStack_b8;
          break;
        }
        puVar8 = puVar8 + -9;
        iVar11 = iVar11 + -1;
        puVar12 = puStack_b8;
      } while (-1 < iVar11);
    }
    pfVar5 = (float *)&uStack_78;
    do {
      fVar1 = *pfVar5;
      if (fVar15 <= fVar13) {
        if ((fVar15 <= fVar1) && (fVar1 < fVar13)) goto LAB_1805fae54;
      }
      else if ((fVar15 < fVar1) || ((fVar1 < fVar13 && (0.0 <= fVar1)))) {
LAB_1805fae54:
        uStack_9c = 1;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_ac = *puVar12;
        uStack_a4 = puVar12[1];
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_84 = 0x3f800000;
        iStack_b0 = iVar4;
        if (-1 < iVar4) {
          FUN_180545140(&system_data_6110,&iStack_b0,0,0);
        }
        break;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar9;
      pfVar5 = pfVar5 + 1;
    } while ((int)uVar9 < 4);
  }
  plVar2 = *(int64_t **)(param_3 + 0x210);
  uVar14 = (**(code **)(*plVar2 + 0x158))(plVar2);
  *(int32_t *)((int64_t)plVar2 + 0x9c) = uVar14;
LAB_1805faebf:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_d8);
}



uint64_t * FUN_1805faf50(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = &system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[4] = &system_data_buffer_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[8] = &system_state_ptr;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[8] = &system_data_buffer_ptr;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[0xc] = &system_state_ptr;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0xc] = &system_data_buffer_ptr;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0x10] = &system_state_ptr;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x10] = &system_data_buffer_ptr;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  return param_1;
}



int64_t FUN_1805fb030(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
                      uint64_t *param_5,uint64_t *param_6)

{
  CoreEngineDataTransformer();
  CoreEngineDataTransformer(param_1 + 0x20,param_3);
  CoreEngineDataTransformer(param_1 + 0x40,param_4);
  CoreEngineDataTransformer(param_1 + 0x60,param_5);
  CoreEngineDataTransformer(param_1 + 0x80,param_6);
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
  *param_3 = &system_data_buffer_ptr;
  if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_3[1] = 0;
  *(int32_t *)(param_3 + 3) = 0;
  *param_3 = &system_state_ptr;
  *param_4 = &system_data_buffer_ptr;
  if (param_4[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_4[1] = 0;
  *(int32_t *)(param_4 + 3) = 0;
  *param_4 = &system_state_ptr;
  *param_5 = &system_data_buffer_ptr;
  if (param_5[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_5[1] = 0;
  *(int32_t *)(param_5 + 3) = 0;
  *param_5 = &system_state_ptr;
  *param_6 = &system_data_buffer_ptr;
  if (param_6[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_6[1] = 0;
  *(int32_t *)(param_6 + 3) = 0;
  *param_6 = &system_state_ptr;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




