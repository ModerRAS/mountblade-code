#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part007.c - 8 个函数

// 函数: void FUN_1802d90b8(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4)
void FUN_1802d90b8(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4)

{
  uint uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  float *pfVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int32_t uVar9;
  int32_t uVar10;
  float fVar11;
  int32_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint unaff_EDI;
  uint uVar16;
  uint uVar17;
  int32_t uVar18;
  int32_t uVar19;
  uint in_XMM1_Dc;
  int32_t uStackX_10;
  int32_t uStackX_14;
  
  uVar18 = (int)param_2;
  uVar19 = (int)((uint64_t)param_2 >> 0x20);
  do {
    uVar1 = param_4 - 1;
    lVar14 = CONCAT44(uVar19,uVar18);
    lVar8 = *(int64_t *)(CONCAT44(uStackX_14,uStackX_10) + 8 + (uint64_t)(param_4 >> 10) * 8);
    uVar15 = (uint64_t)(param_4 + (param_4 >> 10) * -0x400);
    puVar2 = (int32_t *)(lVar8 + uVar15 * 0x18);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    fVar11 = (float)puVar2[2];
    uVar12 = puVar2[3];
    uVar6 = *(uint64_t *)(lVar8 + 0x10 + uVar15 * 0x18);
    pfVar5 = (float *)(*(int64_t *)(lVar14 + 8 + (uint64_t)(uVar1 >> 10) * 8) + 8 +
                      (uint64_t)(uVar1 + (uVar1 >> 10) * -0x400) * 0x18);
    uVar16 = in_XMM1_Dc;
    if (*pfVar5 <= fVar11 && fVar11 != *pfVar5) {
      do {
        uVar17 = uVar1 - 1;
        uVar15 = (uint64_t)(uVar1 + (uVar1 >> 10) * -0x400);
        lVar8 = *(int64_t *)(lVar14 + 8 + (uint64_t)(uVar1 >> 10) * 8);
        puVar3 = (uint64_t *)(lVar8 + uVar15 * 0x18);
        uVar13 = puVar3[1];
        uVar7 = *(uint64_t *)(lVar8 + 0x10 + uVar15 * 0x18);
        uVar16 = in_XMM1_Dc - 1;
        uVar15 = (uint64_t)(in_XMM1_Dc + (in_XMM1_Dc >> 10) * -0x400);
        lVar8 = *(int64_t *)(CONCAT44(uVar19,uVar18) + 8 + (uint64_t)(in_XMM1_Dc >> 10) * 8);
        puVar4 = (uint64_t *)(lVar8 + uVar15 * 0x18);
        *puVar4 = *puVar3;
        puVar4[1] = uVar13;
        *(uint64_t *)(lVar8 + 0x10 + uVar15 * 0x18) = uVar7;
        pfVar5 = (float *)(*(int64_t *)(lVar14 + 8 + (uint64_t)(uVar17 >> 10) * 8) + 8 +
                          (uint64_t)(uVar17 + (uVar17 >> 10) * -0x400) * 0x18);
        in_XMM1_Dc = uVar16;
        uVar1 = uVar17;
      } while (*pfVar5 <= fVar11 && fVar11 != *pfVar5);
    }
    in_XMM1_Dc = param_4 + 1;
    uVar15 = (uint64_t)(uVar16 + (uVar16 >> 10) * -0x400);
    lVar8 = *(int64_t *)(CONCAT44(uVar19,uVar18) + 8 + (uint64_t)(uVar16 >> 10) * 8);
    puVar2 = (int32_t *)(lVar8 + uVar15 * 0x18);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2[2] = fVar11;
    puVar2[3] = uVar12;
    *(uint64_t *)(lVar8 + 0x10 + uVar15 * 0x18) = uVar6;
    uVar18 = uStackX_10;
    uVar19 = uStackX_14;
    param_4 = in_XMM1_Dc;
  } while (in_XMM1_Dc != unaff_EDI);
  return;
}






// 函数: void FUN_1802d91ee(void)
void FUN_1802d91ee(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802d9200(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&unknown_var_9696_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&unknown_var_9696_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802d9380(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&unknown_var_9592_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(int64_t **)(lVar1 + -8);
    *(int64_t *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (int64_t)&unknown_var_9592_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}






// 函数: void FUN_1802d9500(int param_1,int param_2,int64_t *param_3)
void FUN_1802d9500(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  
  for (lVar1 = (int64_t)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    FUN_1802ac930(*(uint64_t *)(*(int64_t *)(*param_3 + 0xaf8) + lVar1 * 8),
                  *(int32_t *)param_3[1],&system_data_0300);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d95a0(int64_t *param_1)
void FUN_1802d95a0(int64_t *param_1)

{
  int32_t uVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int8_t auStackX_8 [8];
  int32_t auStackX_10 [2];
  int32_t **ppuStackX_18;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t *apuStack_58 [2];
  code *pcStack_48;
  void *puStack_40;
  
  *(int8_t *)(*param_1 + 0x378) = 1;
  lVar2 = *param_1;
  iVar4 = (int)(*(float *)(lVar2 + 0x304) * 59.999996);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      auStackX_8[0] = iVar3 == iVar4 + -1;
      lVar2 = *param_1;
      auStackX_10[0] = 0x3c888889;
      uVar1 = *(int32_t *)(lVar2 + 0x5e8);
      ppuStackX_18 = apuStack_58;
      pcStack_48 = FUN_1802d9750;
      puStack_40 = &unknown_var_8784_ptr;
      apuStack_58[0] = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags);
      uStack_70 = (int32_t)lVar2;
      uStack_6c = (int32_t)((uint64_t)lVar2 >> 0x20);
      *apuStack_58[0] = uStack_70;
      apuStack_58[0][1] = uStack_6c;
      *(int8_t **)(apuStack_58[0] + 2) = auStackX_8;
      *(int32_t **)(apuStack_58[0] + 4) = auStackX_10;
      FUN_18015b810(uStack_70,0,uVar1,0x10,0xffffffffffffffff,apuStack_58);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
    lVar2 = *param_1;
  }
  FUN_1802d34e0(lVar2);
  *(float *)(*param_1 + 0x304) = *(float *)(*param_1 + 0x304) - (float)iVar4 * 0.016666668;
  *(int8_t *)(*param_1 + 0x378) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1802d9750(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c04ca0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1802d9840(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c04ce0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1802d9930(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  if (iVar4 == 3) {
    return 0x180c04be0;
  }
  if (iVar4 == 4) {
    return *param_1;
  }
  if (iVar4 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(*param_1,param_2,param_3,param_4,0xfffffffffffffffe);
    }
  }
  else {
    if (iVar4 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (iVar4 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_1802d9c00(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_1802d9c00(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  float fVar16;
  uint uVar17;
  uint64_t uVar18;
  int iVar19;
  uint64_t uVar20;
  uint uVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  int64_t lVar24;
  uint uStack_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  lVar24 = (int64_t)(int)param_2[1];
  uVar20 = (uint64_t)(int)param_1[1];
  lVar22 = lVar24 - uVar20;
  while ((0x1c < lVar22 && (0 < param_3))) {
    uVar21 = (int)lVar24 - 1;
    uVar17 = uVar21 >> 10;
    puVar1 = (uint64_t *)
             (*(int64_t *)(*param_2 + 8 + (uint64_t)uVar17 * 8) +
             (uint64_t)(uVar21 + uVar17 * -0x400) * 0x18);
    iVar19 = (int)uVar20;
    uVar17 = (int)(((int64_t)(int)lVar24 - (int64_t)iVar19) / 2) + iVar19;
    uVar21 = uVar17 >> 10;
    puVar2 = (uint64_t *)
             (*(int64_t *)(*param_1 + 8 + (uint64_t)uVar21 * 8) +
             (uint64_t)(uVar17 + uVar21 * -0x400) * 0x18);
    uVar18 = uVar20 >> 10 & 0x3fffff;
    uVar20 = (uint64_t)(uint)(iVar19 + (int)uVar18 * -0x400);
    lVar24 = *(int64_t *)(*param_1 + 8 + uVar18 * 8);
    fVar4 = *(float *)(puVar2 + 1);
    fVar5 = *(float *)(puVar1 + 1);
    fVar6 = *(float *)(lVar24 + 8 + uVar20 * 0x18);
    puVar23 = (uint64_t *)(lVar24 + uVar20 * 0x18);
    puVar15 = puVar2;
    fVar16 = fVar4;
    if (fVar4 < fVar6) {
      puVar15 = puVar23;
      fVar16 = fVar6;
      puVar23 = puVar2;
      fVar6 = fVar4;
    }
    if ((fVar6 <= fVar5) && (puVar23 = puVar15, fVar5 < fVar16)) {
      puVar23 = puVar1;
    }
    uStack_58 = *puVar23;
    uStack_50 = puVar23[1];
    lVar14 = *param_1;
    lVar22 = *param_1;
    uStack_b0 = *(uint *)(param_1 + 1);
    uVar10 = *(int32_t *)((int64_t)param_1 + 0xc);
    lVar24 = *param_2;
    lStack_a0._0_4_ = (uint)param_2[1];
    while( true ) {
      while( true ) {
        uVar17 = uStack_b0 >> 10;
        if (*(float *)(*(int64_t *)(lVar22 + 8 + (uint64_t)uVar17 * 8) + 8 +
                      (uint64_t)(uStack_b0 + uVar17 * -0x400) * 0x18) <= (float)uStack_50) break;
        uStack_b0 = uStack_b0 + 1;
      }
      lStack_a0._0_4_ = (uint)lStack_a0 - 1;
      pfVar3 = (float *)(*(int64_t *)(lVar24 + 8 + (uint64_t)((uint)lStack_a0 >> 10) * 8) + 8 +
                        (uint64_t)((uint)lStack_a0 + ((uint)lStack_a0 >> 10) * -0x400) * 0x18);
      if (*pfVar3 <= (float)uStack_50 && (float)uStack_50 != *pfVar3) {
        do {
          lStack_a0._0_4_ = (uint)lStack_a0 - 1;
          pfVar3 = (float *)(*(int64_t *)(lVar24 + 8 + (uint64_t)((uint)lStack_a0 >> 10) * 8) + 8
                            + (uint64_t)((uint)lStack_a0 + ((uint)lStack_a0 >> 10) * -0x400) * 0x18
                            );
        } while (*pfVar3 <= (float)uStack_50 && (float)uStack_50 != *pfVar3);
      }
      if ((int)(uint)lStack_a0 <= (int)uStack_b0) break;
      uVar18 = (uint64_t)((uint)lStack_a0 + ((uint)lStack_a0 >> 10) * -0x400);
      lVar8 = *(int64_t *)(lVar24 + 8 + (uint64_t)((uint)lStack_a0 >> 10) * 8);
      uVar20 = (uint64_t)(uStack_b0 + uVar17 * -0x400);
      lVar9 = *(int64_t *)(lVar22 + 8 + (uint64_t)uVar17 * 8);
      uStack_b0 = uStack_b0 + 1;
      puVar1 = (uint64_t *)(lVar8 + uVar18 * 0x18);
      uVar11 = puVar1[1];
      puVar2 = (uint64_t *)(lVar9 + uVar20 * 0x18);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      uVar7 = *(uint64_t *)(lVar9 + 0x10 + uVar20 * 0x18);
      puVar2 = (uint64_t *)(lVar9 + uVar20 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      *(uint64_t *)(lVar9 + 0x10 + uVar20 * 0x18) = *(uint64_t *)(lVar8 + 0x10 + uVar18 * 0x18);
      puVar1 = (uint64_t *)(lVar8 + uVar18 * 0x18);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      *(uint64_t *)(lVar8 + 0x10 + uVar18 * 0x18) = uVar7;
    }
    lStack_a8 = *param_2;
    lStack_a0 = param_2[1];
    param_3 = param_3 + -1;
    lVar24 = CONCAT44(uVar10,uStack_b0);
    lStack_98 = lVar14;
    lStack_90 = lVar24;
    FUN_1802d9c00(&lStack_98,&lStack_a8,param_3,param_4);
    uVar20 = (uint64_t)(int)param_1[1];
    *param_2 = lVar14;
    param_2[1] = lVar24;
    lVar24 = (int64_t)(int)param_2[1];
    lVar22 = lVar24 - uVar20;
  }
  if (param_3 == 0) {
    lStack_88 = *param_2;
    lStack_80 = param_2[1];
    uStack_68 = (int32_t)*param_1;
    uStack_64 = *(int32_t *)((int64_t)param_1 + 4);
    uStack_60 = (int32_t)param_1[1];
    uStack_5c = *(int32_t *)((int64_t)param_1 + 0xc);
    lStack_78 = lStack_88;
    lStack_70 = lStack_80;
    FUN_1802da110(&uStack_68,&lStack_78,&lStack_88,param_4);
  }
  return;
}






// 函数: void FUN_1802d9c17(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,
void FUN_1802d9c17(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6,int64_t param_7,int64_t param_8,
                  int64_t param_9,int64_t param_10,int64_t param_11,int64_t param_12,
                  int64_t param_13,int32_t param_14,int32_t param_15,uint64_t param_16,
                  uint64_t param_17)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int32_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  float fVar18;
  int64_t in_RAX;
  uint uVar19;
  uint64_t uVar20;
  int8_t unaff_BL;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar21;
  uint64_t unaff_RDI;
  uint64_t uVar22;
  uint uVar23;
  uint64_t *puVar24;
  int64_t in_R10;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t uStack0000000000000074;
  int32_t uStack000000000000007c;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  uVar22 = (uint64_t)(int)param_1[1];
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  if (0x1c < (int64_t)(in_R10 - uVar22)) {
    *(uint64_t *)(in_RAX + 8) = unaff_RBP;
    *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
    *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
    *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
    *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
    *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
    *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      uVar23 = (int)in_R10 - 1;
      uVar19 = uVar23 >> 10;
      puVar1 = (uint64_t *)
               (*(int64_t *)(*param_2 + 8 + (uint64_t)uVar19 * 8) +
               (uint64_t)(uVar23 + uVar19 * -0x400) * 0x18);
      iVar21 = (int)uVar22;
      uVar19 = (int)(((int64_t)(int)in_R10 - (int64_t)iVar21) / 2) + iVar21;
      uVar23 = uVar19 >> 10;
      puVar2 = (uint64_t *)
               (*(int64_t *)(*param_1 + 8 + (uint64_t)uVar23 * 8) +
               (uint64_t)(uVar19 + uVar23 * -0x400) * 0x18);
      uVar20 = uVar22 >> 10 & 0x3fffff;
      uVar22 = (uint64_t)(uint)(iVar21 + (int)uVar20 * -0x400);
      lVar8 = *(int64_t *)(*param_1 + 8 + uVar20 * 8);
      fVar4 = *(float *)(puVar2 + 1);
      fVar5 = *(float *)(puVar1 + 1);
      fVar6 = *(float *)(lVar8 + 8 + uVar22 * 0x18);
      puVar24 = (uint64_t *)(lVar8 + uVar22 * 0x18);
      puVar17 = puVar2;
      fVar18 = fVar4;
      if (fVar4 < fVar6) {
        puVar17 = puVar24;
        fVar18 = fVar6;
        puVar24 = puVar2;
        fVar6 = fVar4;
      }
      if ((fVar6 <= fVar5) && (puVar24 = puVar17, fVar5 < fVar18)) {
        puVar24 = puVar1;
      }
      param_16 = *puVar24;
      param_17 = puVar24[1];
      lVar16 = *param_1;
      lVar15 = *param_1;
      param_5._0_4_ = *(uint *)(param_1 + 1);
      uVar11 = *(int32_t *)((int64_t)param_1 + 0xc);
      lVar8 = *param_2;
      param_7._0_4_ = (uint)param_2[1];
      while( true ) {
        while( true ) {
          uVar19 = (uint)param_5 >> 10;
          if (*(float *)(*(int64_t *)(lVar15 + 8 + (uint64_t)uVar19 * 8) + 8 +
                        (uint64_t)((uint)param_5 + uVar19 * -0x400) * 0x18) <= (float)param_17)
          break;
          param_5._0_4_ = (uint)param_5 + 1;
        }
        param_7._0_4_ = (uint)param_7 - 1;
        pfVar3 = (float *)(*(int64_t *)(lVar8 + 8 + (uint64_t)((uint)param_7 >> 10) * 8) + 8 +
                          (uint64_t)((uint)param_7 + ((uint)param_7 >> 10) * -0x400) * 0x18);
        if (*pfVar3 <= (float)param_17 && (float)param_17 != *pfVar3) {
          do {
            param_7._0_4_ = (uint)param_7 - 1;
            pfVar3 = (float *)(*(int64_t *)(lVar8 + 8 + (uint64_t)((uint)param_7 >> 10) * 8) + 8 +
                              (uint64_t)((uint)param_7 + ((uint)param_7 >> 10) * -0x400) * 0x18);
          } while (*pfVar3 <= (float)param_17 && (float)param_17 != *pfVar3);
        }
        if ((int)(uint)param_7 <= (int)(uint)param_5) break;
        uVar20 = (uint64_t)((uint)param_7 + ((uint)param_7 >> 10) * -0x400);
        lVar9 = *(int64_t *)(lVar8 + 8 + (uint64_t)((uint)param_7 >> 10) * 8);
        uVar22 = (uint64_t)((uint)param_5 + uVar19 * -0x400);
        lVar10 = *(int64_t *)(lVar15 + 8 + (uint64_t)uVar19 * 8);
        param_5._0_4_ = (uint)param_5 + 1;
        puVar1 = (uint64_t *)(lVar9 + uVar20 * 0x18);
        uVar12 = puVar1[1];
        puVar2 = (uint64_t *)(lVar10 + uVar22 * 0x18);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        uVar7 = *(uint64_t *)(lVar10 + 0x10 + uVar22 * 0x18);
        puVar2 = (uint64_t *)(lVar10 + uVar22 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        *(uint64_t *)(lVar10 + 0x10 + uVar22 * 0x18) =
             *(uint64_t *)(lVar9 + 0x10 + uVar20 * 0x18);
        puVar1 = (uint64_t *)(lVar9 + uVar20 * 0x18);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        *(uint64_t *)(lVar9 + 0x10 + uVar20 * 0x18) = uVar7;
      }
      param_6 = *param_2;
      param_7 = param_2[1];
      param_3 = param_3 + -1;
      lVar8 = CONCAT44(uVar11,(uint)param_5);
      param_8 = lVar16;
      param_9 = lVar8;
      FUN_1802d9c00(&param_8,&param_6,param_3,unaff_BL);
      uVar22 = (uint64_t)(int)param_1[1];
      *param_2 = lVar16;
      param_2[1] = lVar8;
      in_R10 = (int64_t)(int)param_2[1];
    } while (0x1c < (int64_t)(in_R10 - uVar22));
  }
  if (param_3 == 0) {
    param_10 = *param_2;
    param_11 = param_2[1];
    param_14 = (int32_t)*param_1;
    uStack0000000000000074 = *(int32_t *)((int64_t)param_1 + 4);
    param_15 = (int32_t)param_1[1];
    uStack000000000000007c = *(int32_t *)((int64_t)param_1 + 0xc);
    param_12 = param_10;
    param_13 = param_11;
    FUN_1802da110(&param_14,&param_12,&param_10,unaff_BL);
  }
  return;
}






// 函数: void FUN_1802d9c3c(void)
void FUN_1802d9c3c(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int32_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  float fVar18;
  int64_t in_RAX;
  uint64_t uVar19;
  uint uVar20;
  uint64_t uVar21;
  int8_t unaff_BL;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar22;
  uint64_t unaff_RDI;
  uint uVar23;
  uint64_t *puVar24;
  int64_t in_R10;
  int64_t unaff_R12;
  int64_t *unaff_R13;
  uint64_t unaff_R14;
  int64_t *unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint uStack0000000000000028;
  int64_t in_stack_00000030;
  uint uStack0000000000000038;
  int64_t in_stack_00000040;
  int64_t in_stack_00000048;
  int64_t in_stack_00000050;
  int64_t in_stack_00000058;
  int64_t in_stack_00000060;
  int64_t in_stack_00000068;
  int32_t in_stack_00000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  int32_t uStack000000000000007c;
  uint64_t in_stack_00000080;
  float fStack0000000000000088;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  do {
    if (unaff_R12 < 1) break;
    uVar23 = (int)in_R10 - 1;
    uVar20 = uVar23 >> 10;
    puVar1 = (uint64_t *)
             (*(int64_t *)(*unaff_R15 + 8 + (uint64_t)uVar20 * 8) +
             (uint64_t)(uVar23 + uVar20 * -0x400) * 0x18);
    iVar22 = (int)unaff_RDI;
    uVar20 = (int)(((int64_t)(int)in_R10 - (int64_t)iVar22) / 2) + iVar22;
    uVar23 = uVar20 >> 10;
    puVar2 = (uint64_t *)
             (*(int64_t *)(*unaff_R13 + 8 + (uint64_t)uVar23 * 8) +
             (uint64_t)(uVar20 + uVar23 * -0x400) * 0x18);
    uVar21 = unaff_RDI >> 10 & 0x3fffff;
    uVar19 = (uint64_t)(uint)(iVar22 + (int)uVar21 * -0x400);
    lVar8 = *(int64_t *)(*unaff_R13 + 8 + uVar21 * 8);
    fVar4 = *(float *)(puVar2 + 1);
    fVar5 = *(float *)(puVar1 + 1);
    fVar6 = *(float *)(lVar8 + 8 + uVar19 * 0x18);
    puVar24 = (uint64_t *)(lVar8 + uVar19 * 0x18);
    puVar17 = puVar2;
    fVar18 = fVar4;
    if (fVar4 < fVar6) {
      puVar17 = puVar24;
      fVar18 = fVar6;
      puVar24 = puVar2;
      fVar6 = fVar4;
    }
    if ((fVar6 <= fVar5) && (puVar24 = puVar17, fVar5 < fVar18)) {
      puVar24 = puVar1;
    }
    in_stack_00000080 = *puVar24;
    _fStack0000000000000088 = puVar24[1];
    lVar16 = *unaff_R13;
    lVar15 = *unaff_R13;
    uStack0000000000000028 = *(uint *)(unaff_R13 + 1);
    uVar11 = *(int32_t *)((int64_t)unaff_R13 + 0xc);
    lVar8 = *unaff_R15;
    uStack0000000000000038 = (uint)unaff_R15[1];
    while( true ) {
      while( true ) {
        uVar20 = uStack0000000000000028 >> 10;
        if (*(float *)(*(int64_t *)(lVar15 + 8 + (uint64_t)uVar20 * 8) + 8 +
                      (uint64_t)(uStack0000000000000028 + uVar20 * -0x400) * 0x18) <=
            fStack0000000000000088) break;
        uStack0000000000000028 = uStack0000000000000028 + 1;
      }
      uStack0000000000000038 = uStack0000000000000038 - 1;
      pfVar3 = (float *)(*(int64_t *)(lVar8 + 8 + (uint64_t)(uStack0000000000000038 >> 10) * 8) +
                         8 + (uint64_t)
                             (uStack0000000000000038 + (uStack0000000000000038 >> 10) * -0x400) *
                             0x18);
      if (*pfVar3 <= fStack0000000000000088 && fStack0000000000000088 != *pfVar3) {
        do {
          uStack0000000000000038 = uStack0000000000000038 - 1;
          pfVar3 = (float *)(*(int64_t *)
                              (lVar8 + 8 + (uint64_t)(uStack0000000000000038 >> 10) * 8) + 8 +
                            (uint64_t)
                            (uStack0000000000000038 + (uStack0000000000000038 >> 10) * -0x400) *
                            0x18);
        } while (*pfVar3 <= fStack0000000000000088 && fStack0000000000000088 != *pfVar3);
      }
      if ((int)uStack0000000000000038 <= (int)uStack0000000000000028) break;
      uVar21 = (uint64_t)(uStack0000000000000038 + (uStack0000000000000038 >> 10) * -0x400);
      lVar9 = *(int64_t *)(lVar8 + 8 + (uint64_t)(uStack0000000000000038 >> 10) * 8);
      uVar19 = (uint64_t)(uStack0000000000000028 + uVar20 * -0x400);
      lVar10 = *(int64_t *)(lVar15 + 8 + (uint64_t)uVar20 * 8);
      uStack0000000000000028 = uStack0000000000000028 + 1;
      puVar1 = (uint64_t *)(lVar9 + uVar21 * 0x18);
      uVar12 = puVar1[1];
      puVar2 = (uint64_t *)(lVar10 + uVar19 * 0x18);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      uVar7 = *(uint64_t *)(lVar10 + 0x10 + uVar19 * 0x18);
      puVar2 = (uint64_t *)(lVar10 + uVar19 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar12;
      *(uint64_t *)(lVar10 + 0x10 + uVar19 * 0x18) = *(uint64_t *)(lVar9 + 0x10 + uVar21 * 0x18)
      ;
      puVar1 = (uint64_t *)(lVar9 + uVar21 * 0x18);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      *(uint64_t *)(lVar9 + 0x10 + uVar21 * 0x18) = uVar7;
    }
    in_stack_00000030 = *unaff_R15;
    _uStack0000000000000038 = unaff_R15[1];
    unaff_R12 = unaff_R12 + -1;
    lVar8 = CONCAT44(uVar11,uStack0000000000000028);
    in_stack_00000040 = lVar16;
    in_stack_00000048 = lVar8;
    FUN_1802d9c00(&stack0x00000040,&stack0x00000030,unaff_R12,unaff_BL);
    unaff_RDI = (uint64_t)(int)unaff_R13[1];
    *unaff_R15 = lVar16;
    unaff_R15[1] = lVar8;
    in_R10 = (int64_t)(int)unaff_R15[1];
  } while (0x1c < (int64_t)(in_R10 - unaff_RDI));
  if (unaff_R12 == 0) {
    in_stack_00000050 = *unaff_R15;
    in_stack_00000058 = unaff_R15[1];
    in_stack_00000070 = (int32_t)*unaff_R13;
    uStack0000000000000074 = *(int32_t *)((int64_t)unaff_R13 + 4);
    in_stack_00000078 = (int32_t)unaff_R13[1];
    uStack000000000000007c = *(int32_t *)((int64_t)unaff_R13 + 0xc);
    in_stack_00000060 = in_stack_00000050;
    in_stack_00000068 = in_stack_00000058;
    FUN_1802da110(&stack0x00000070,&stack0x00000060,&stack0x00000050,unaff_BL);
  }
  return;
}






// 函数: void FUN_1802d9e84(void)
void FUN_1802d9e84(void)

{
  int8_t unaff_BL;
  int64_t unaff_R12;
  int32_t *unaff_R13;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  if (unaff_R12 == 0) {
    uStack0000000000000050 = *unaff_R15;
    uStack0000000000000058 = unaff_R15[1];
    uStack0000000000000070 = *unaff_R13;
    uStack0000000000000074 = unaff_R13[1];
    uStack0000000000000078 = unaff_R13[2];
    uStack000000000000007c = unaff_R13[3];
    uStack0000000000000060 = uStack0000000000000050;
    uStack0000000000000068 = uStack0000000000000058;
    FUN_1802da110(&stack0x00000070,&stack0x00000060,&stack0x00000050,unaff_BL);
  }
  return;
}






