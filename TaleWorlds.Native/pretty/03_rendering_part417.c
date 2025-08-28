#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part417.c - 8 个函数

// 函数: void FUN_180495026(void)
void FUN_180495026(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar15;
  uint uVar16;
  int64_t lVar17;
  uint uVar18;
  char in_R10B;
  uint uVar19;
  int64_t lVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int64_t unaff_R14;
  uint uVar24;
  uint uVar25;
  uint64_t uVar26;
  int64_t lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uStackX_10;
  uint uStackX_14;
  uint uStack0000000000000034;
  
  if (in_R10B != '\0') {
    uStack0000000000000034 = 0;
    do {
      uVar24 = uStack0000000000000034 * 3;
      pfVar1 = (float *)(unaff_RBP + -0x60 +
                        (uint64_t)*(uint *)(unaff_RBX + 0x9f8100 + (uint64_t)uVar24 * 4) * 0x10);
      fVar4 = pfVar1[2];
      pfVar2 = (float *)(unaff_RBP + -0x60 +
                        (uint64_t)*(uint *)(unaff_RBX + 0x9f8100 + (uint64_t)(uVar24 + 2) * 4) *
                        0x10);
      pfVar3 = (float *)(unaff_RBP + -0x60 +
                        (uint64_t)*(uint *)(unaff_RBX + 0x9f8100 + (uint64_t)(uVar24 + 1) * 4) *
                        0x10);
      uVar19 = (uint)(*pfVar1 + 0.5);
      uVar6 = (uint)(pfVar1[1] + 0.5);
      uVar18 = (uint)(*pfVar2 + 0.5);
      uVar22 = (uint)(pfVar2[1] + 0.5);
      iVar11 = uVar18 - uVar19;
      iVar14 = uVar6 - uVar22;
      uVar16 = (uint)(*pfVar3 + 0.5);
      uVar23 = (uint)(pfVar3[1] + 0.5);
      iVar8 = uVar19 - uVar16;
      iVar15 = uVar22 - uVar23;
      iVar21 = uVar23 - uVar6;
      iVar12 = iVar11 * iVar21 - iVar14 * iVar8;
      uVar24 = uVar18;
      if ((int)uVar19 < (int)uVar18) {
        uVar24 = uVar19;
      }
      uVar9 = uVar16;
      if ((int)uVar24 < (int)uVar16) {
        uVar9 = uVar24;
      }
      uVar24 = 0;
      if (0 < (int)uVar9) {
        uVar24 = uVar9;
      }
      uVar24 = uVar24 & 0xfffffffe;
      fVar28 = 1.0 / (float)iVar12;
      uVar9 = uVar18;
      if ((int)uVar18 < (int)uVar19) {
        uVar9 = uVar19;
      }
      fVar31 = (pfVar2[2] - fVar4) * fVar28;
      fVar28 = (pfVar3[2] - fVar4) * fVar28;
      uVar7 = uVar16;
      if ((int)uVar16 < (int)uVar9) {
        uVar7 = uVar9;
      }
      uVar9 = 0x27f;
      if ((int)uVar7 < 0x27f) {
        uVar9 = uVar7;
      }
      uVar7 = uVar22;
      if ((int)uVar6 < (int)uVar22) {
        uVar7 = uVar6;
      }
      uVar13 = uVar23;
      if ((int)uVar7 < (int)uVar23) {
        uVar13 = uVar7;
      }
      uStackX_14 = 0;
      if (0 < (int)uVar13) {
        uStackX_14 = uVar13;
      }
      uStackX_14 = uStackX_14 & 0xfffffffe;
      uVar7 = uVar22;
      if ((int)uVar22 < (int)uVar6) {
        uVar7 = uVar6;
      }
      uVar13 = uVar23;
      if ((int)uVar23 < (int)uVar7) {
        uVar13 = uVar7;
      }
      uVar7 = 0x167;
      if ((int)uVar13 < 0x167) {
        uVar7 = uVar13;
      }
      if (0 < iVar12) {
        fVar30 = (float)iVar14 * fVar28 + (float)iVar21 * fVar31;
        uVar13 = (uStackX_14 * (uVar16 - uVar18) - uVar16 * uVar22) + uVar24 * iVar15 +
                 uVar18 * uVar23;
        uVar23 = (uStackX_14 * iVar8 - uVar19 * uVar23) + uVar24 * iVar21 + uVar16 * uVar6;
        uVar6 = (uStackX_14 * iVar11 - uVar18 * uVar6) + uVar24 * iVar14 + uVar19 * uVar22;
        if ((int)uStackX_14 < (int)uVar7) {
          lVar17 = (int64_t)(int)(uStackX_14 * 0x280 + uVar24);
          do {
            bVar5 = false;
            fVar29 = (float)(int)uVar23 * fVar31 + fVar4 + (float)(int)uVar6 * fVar28;
            if ((int)uVar24 < (int)uVar9) {
              lVar20 = lVar17;
              uStackX_10 = uVar24;
              uVar10 = uVar13;
              uVar19 = uVar23;
              uVar22 = uVar6;
              if (3 < (int)(uVar9 - uVar24)) {
                uVar25 = ((uVar9 - uVar24) - 4 >> 2) + 1;
                uVar26 = (uint64_t)uVar25;
                uStackX_10 = uVar24 + uVar25 * 4;
                do {
                  if ((bVar5) ||
                     ((0 < (int)(uVar22 | uVar19 | uVar10) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + lVar20 * 4) <=
                       fVar29)))) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  if ((bVar5) ||
                     ((0 < (int)(uVar22 + iVar14 | uVar19 + iVar21 | uVar10 + iVar15) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 4 + lVar20 * 4)
                       <= fVar29 + fVar30)))) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  uVar10 = uVar10 + iVar15 + iVar15;
                  fVar29 = fVar29 + fVar30 + fVar30;
                  uVar19 = uVar19 + iVar21 + iVar21;
                  uVar22 = uVar22 + iVar14 + iVar14;
                  if ((bVar5) ||
                     ((0 < (int)(uVar22 | uVar19 | uVar10) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 8 + lVar20 * 4)
                       <= fVar29)))) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  uVar10 = uVar10 + iVar15;
                  fVar29 = fVar29 + fVar30;
                  uVar19 = uVar19 + iVar21;
                  uVar22 = uVar22 + iVar14;
                  if ((bVar5) ||
                     ((0 < (int)(uVar22 | uVar19 | uVar10) &&
                      (*(float *)(*(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8) + 0xc +
                                 lVar20 * 4) <= fVar29)))) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  uVar10 = uVar10 + iVar15;
                  fVar29 = fVar29 + fVar30;
                  uVar19 = uVar19 + iVar21;
                  uVar22 = uVar22 + iVar14;
                  lVar20 = lVar20 + 4;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              if ((int)uStackX_10 < (int)uVar9) {
                lVar20 = lVar20 * 4;
                lVar27 = (int64_t)(int)(uVar9 - uStackX_10);
                do {
                  if ((bVar5) ||
                     ((0 < (int)(uVar22 | uVar19 | uVar10) &&
                      (*(float *)(lVar20 + *(int64_t *)(unaff_RSI + 0x348 + unaff_R14 * 8)) <=
                       fVar29)))) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  uVar10 = uVar10 + iVar15;
                  fVar29 = fVar29 + fVar30;
                  uVar19 = uVar19 + iVar21;
                  uVar22 = uVar22 + iVar14;
                  lVar20 = lVar20 + 4;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
              }
              if (bVar5) goto LAB_1804954a0;
            }
            uStackX_14 = uStackX_14 + 1;
            lVar17 = lVar17 + 0x280;
            uVar13 = uVar13 + (uVar16 - uVar18);
            uVar23 = uVar23 + iVar8;
            uVar6 = uVar6 + iVar11;
          } while ((int)uStackX_14 < (int)uVar7);
        }
      }
      unaff_RBX = 0x180000000;
      uStack0000000000000034 = uStack0000000000000034 + 1;
    } while (uStack0000000000000034 < 0xc);
  }
LAB_1804954a0:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x20) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804954f0(void *param_1)
void FUN_1804954f0(void *param_1)

{
  uint64_t uVar1;
  int32_t *puVar2;
  int iVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int8_t auStack_158 [48];
  void *puStack_128;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int64_t *plStack_100;
  int32_t uStack_f8;
  int8_t uStack_f4;
  void **ppuStack_f0;
  void **ppuStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  if (*(int64_t *)(param_1 + 0x58) == 0) {
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0xffffffff;
    uStack_f4 = 0;
    uStack_120 = 1;
    uStack_118 = 0x1f;
    uStack_108 = 0x10001;
    puStack_128 = (void *)0x16800000280;
    ppuStack_f0 = (void **)0x0;
    plStack_100 = (int64_t *)0x0;
    uStack_11c = 1;
    uStack_10c = 3;
    puStack_c8 = &unknown_var_3432_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0x12;
    uVar5 = strcpy_s(auStack_b0,0x80,&unknown_var_8600_ptr);
    puVar4 = (uint64_t *)FUN_1800b2450(uVar5,&ppuStack_f0,&puStack_c8,&puStack_128);
    uVar1 = *puVar4;
    *puVar4 = 0;
    ppuStack_e8 = *(void ***)(param_1 + 0x58);
    *(uint64_t *)(param_1 + 0x58) = uVar1;
    if (ppuStack_e8 != (void **)0x0) {
      (**(code **)((int64_t)*ppuStack_e8 + 0x38))();
    }
    if (ppuStack_f0 != (void **)0x0) {
      (**(code **)(*ppuStack_f0 + 0x38))();
    }
    puStack_c8 = &system_state_ptr;
    if (plStack_100 != (int64_t *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
  }
  ppuStack_e8 = &puStack_128;
  uStack_118 = 0x80495f20;
  uStack_114 = 1;
  uStack_110 = 0x80495d80;
  uStack_10c = 1;
  puStack_128 = param_1;
  FUN_18005c650(&puStack_128);
  puVar4 = (uint64_t *)*render_system_data_memory;
  iVar3 = _Mtx_lock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar1 = SYSTEM_DATA_MANAGER_A;
  ppuStack_e8 = (void **)SYSTEM_DATA_MANAGER_A;
  SYSTEM_DATA_MANAGER_A = *puVar4;
  ppuStack_f0 = &puStack_128;
  puStack_128 = &system_data_buffer_ptr;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  FUN_1806277c0(&puStack_128,0x1e);
  puVar2 = (int32_t *)CONCAT44(uStack_11c,uStack_120);
  *puVar2 = 0x74666f53;
  puVar2[1] = 0x65726177;
  puVar2[2] = 0x73615220;
  puVar2[3] = 0x69726574;
  *(uint64_t *)(puVar2 + 4) = 0x53286e6f6974617a;
  puVar2[6] = 0x414c4143;
  *(int16_t *)(puVar2 + 7) = 0x2952;
  *(int8_t *)((int64_t)puVar2 + 0x1e) = 0;
  uStack_118 = 0x1e;
  uVar5 = FUN_18023a940(*(uint64_t *)(param_1 + 0x58));
  FUN_18009a080(uVar5,*(uint64_t *)(param_1 + 0x58));
  SYSTEM_DATA_MANAGER_A = uVar1;
  iVar3 = _Mtx_unlock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_158);
}





// 函数: void FUN_1804957d0(uint64_t *param_1)
void FUN_1804957d0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  
  *param_1 = &unknown_var_9080_ptr;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = 0;
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x13] = 0;
  if (param_1[0x71] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x71] = 0;
  if (param_1[0x72] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x72] = 0;
  if (param_1[0x35] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x35] = 0;
  if (param_1[0x36] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x36] = 0;
  if (param_1[0x69] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x69] = 0;
  plVar1 = param_1 + 0xc;
  iVar3 = (int)(param_1[0xd] - *plVar1 >> 3);
  if (0 < iVar3) {
    do {
      plVar2 = *(int64_t **)(*plVar1 + lVar4 * 8);
      if (plVar2 != (int64_t *)0x0) {
        FUN_180490c90(plVar2[0x23]);
        plVar2[0x23] = 0;
        if ((int64_t *)*plVar2 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar2 + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar2);
      }
      *(uint64_t *)(*plVar1 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (*plVar1 == 0) {
    if ((int64_t *)param_1[0xb] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0xb] + 0x38))();
    }
    _Mtx_destroy_in_situ();
    *param_1 = &unknown_var_9360_ptr;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180495970(int64_t param_1)
void FUN_180495970(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  uVar6 = 0;
  *(int32_t *)(param_1 + 0x84) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  uVar5 = *(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60) >> 3;
  uVar3 = (uint)uVar5;
  uVar10 = uVar6;
  if (uVar3 != 0) {
    uVar5 = uVar5 & 0xffffffff;
    uVar9 = uVar6;
    do {
      lVar4 = *(int64_t *)(**(int64_t **)(uVar9 + *(int64_t *)(param_1 + 0x60)) + 0xb8);
      uVar7 = (int)uVar10 +
              (int)((*(int64_t *)(lVar4 + 0x48) - *(int64_t *)(lVar4 + 0x40)) / 0x88);
      uVar10 = (uint64_t)uVar7;
      *(uint *)(param_1 + 0x84) = uVar7;
      uVar5 = uVar5 - 1;
      uVar9 = uVar9 + 8;
    } while (uVar5 != 0);
  }
  uVar7 = (int)uVar10 + 1;
  uVar5 = uVar6;
  if (uVar7 != 0) {
    uVar5 = FUN_18062b420(system_memory_pool_ptr,(uint64_t)uVar7 * 4,CONCAT71((int7)(uVar10 >> 8),3));
    uVar10 = (uint64_t)*(uint *)(param_1 + 0x84);
  }
  *(uint64_t *)(param_1 + 0x90) = uVar5;
  uVar7 = (int)uVar10 + 1;
  uVar5 = uVar6;
  if (uVar7 != 0) {
    uVar5 = FUN_18062b420(system_memory_pool_ptr,(uint64_t)uVar7 * 4,CONCAT71((int7)(uVar10 >> 8),3));
    uVar10 = (uint64_t)*(uint *)(param_1 + 0x84);
  }
  *(uint64_t *)(param_1 + 0x98) = uVar5;
  uVar5 = uVar6;
  if ((int)uVar10 != 0) {
    uVar5 = FUN_18062b420(system_memory_pool_ptr,uVar10 * 4,CONCAT71((int7)(uVar10 >> 8),3));
  }
  *(uint64_t *)(param_1 + 0x388) = uVar5;
  uVar10 = uVar6;
  if ((uint64_t)*(uint *)(param_1 + 0x84) != 0) {
    uVar10 = FUN_18062b420(system_memory_pool_ptr,(uint64_t)*(uint *)(param_1 + 0x84) * 4,3);
  }
  *(uint64_t *)(param_1 + 0x390) = uVar10;
  uVar10 = uVar6;
  uVar5 = uVar6;
  if (uVar3 != 0) {
    do {
      uVar7 = (int)uVar5 + 1;
      uVar10 = (uint64_t)uVar7;
      *(int32_t *)(*(int64_t *)(param_1 + 0x90) + uVar5 * 4) = *(int32_t *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xa0) =
           *(int *)(param_1 + 0xa0) +
           *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar5 * 8) + 0xcc);
      *(int32_t *)(*(int64_t *)(param_1 + 0x98) + uVar5 * 4) = *(int32_t *)(param_1 + 0xa4);
      *(int *)(param_1 + 0xa4) =
           *(int *)(param_1 + 0xa4) +
           *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar5 * 8) + 0xd0);
      uVar5 = uVar10;
    } while (uVar7 < uVar3);
  }
  *(int32_t *)(uVar10 * 4 + *(int64_t *)(param_1 + 0x90)) = *(int32_t *)(param_1 + 0xa0);
  *(int32_t *)(uVar10 * 4 + *(int64_t *)(param_1 + 0x98)) = *(int32_t *)(param_1 + 0xa4);
  uVar3 = *(int *)(param_1 + 0xa0) << 2;
  uVar5 = uVar6;
  if (uVar3 != 0) {
    uVar5 = FUN_18062b420(system_memory_pool_ptr,(uint64_t)uVar3 * 4,CONCAT71((int7)(uVar10 >> 8),3));
  }
  *(uint64_t *)(param_1 + 0x1a8) = uVar5;
  uVar3 = *(int *)(param_1 + 0xa0) << 2;
  uVar10 = uVar6;
  if (uVar3 != 0) {
    uVar10 = FUN_18062b420(system_memory_pool_ptr,(uint64_t)uVar3 * 4,3);
  }
  *(uint64_t *)(param_1 + 0x1b0) = uVar10;
  if (*(int *)(param_1 + 0x84) == 0) {
    *(int8_t *)(param_1 + 0x80) = 0;
    return;
  }
  do {
    uVar10 = 1;
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x60) + uVar6 * 8);
    lVar2 = *(int64_t *)(lVar1 + 0x118);
    lVar4 = (uint64_t)(uint)(*(int *)(*(int64_t *)(param_1 + 0x90) + uVar6 * 4) << 2) * 4;
    lVar8 = *(int64_t *)(param_1 + 0x1b0) + lVar4;
    lVar4 = *(int64_t *)(param_1 + 0x1a8) + lVar4;
    *(int64_t *)(lVar1 + 0x120) = lVar4;
    *(int64_t *)(lVar1 + 0x128) = lVar8;
    *(int64_t *)(lVar2 + 0x28) = lVar4;
    *(int64_t *)(lVar2 + 0x30) = lVar8;
    lVar4 = *(int64_t *)(lVar1 + 0x118);
    uVar3 = *(uint *)(lVar4 + 0x18);
    if (1 < *(uint *)(lVar1 + 8)) {
      do {
        lVar2 = *(int64_t *)(lVar1 + 0x128);
        uVar7 = (int)uVar10 + 1;
        lVar8 = uVar10 * 0x38;
        *(uint64_t *)(lVar8 + 0x28 + lVar4) =
             (uint64_t)uVar3 * 0x10 + *(int64_t *)(lVar1 + 0x120);
        *(uint64_t *)(lVar8 + 0x30 + lVar4) = lVar2 + (uint64_t)uVar3 * 0x10;
        lVar4 = *(int64_t *)(lVar1 + 0x118);
        uVar3 = uVar3 + *(int *)(lVar8 + 0x18 + lVar4);
        uVar10 = (uint64_t)uVar7;
      } while (uVar7 < *(uint *)(lVar1 + 8));
    }
    uVar3 = (int)uVar6 + 1;
    uVar6 = (uint64_t)uVar3;
  } while (uVar3 < *(uint *)(param_1 + 0x84));
  *(int8_t *)(param_1 + 0x80) = 0;
  return;
}





// 函数: void FUN_180495cb0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint param_4)
void FUN_180495cb0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int8_t auStack_88 [64];
  int8_t auStack_48 [72];
  
  uVar4 = param_2[1];
  param_1 = (uint64_t)param_4 * 0x40 + param_1;
  *(uint64_t *)(param_1 + 0x1c8) = *param_2;
  *(uint64_t *)(param_1 + 0x1d0) = uVar4;
  uVar4 = param_2[3];
  *(uint64_t *)(param_1 + 0x1d8) = param_2[2];
  *(uint64_t *)(param_1 + 0x1e0) = uVar4;
  uVar4 = param_2[5];
  *(uint64_t *)(param_1 + 0x1e8) = param_2[4];
  *(uint64_t *)(param_1 + 0x1f0) = uVar4;
  uVar4 = param_2[7];
  *(uint64_t *)(param_1 + 0x1f8) = param_2[6];
  *(uint64_t *)(param_1 + 0x200) = uVar4;
  uVar4 = param_3[1];
  *(uint64_t *)(param_1 + 0x248) = *param_3;
  *(uint64_t *)(param_1 + 0x250) = uVar4;
  uVar4 = param_3[3];
  *(uint64_t *)(param_1 + 600) = param_3[2];
  *(uint64_t *)(param_1 + 0x260) = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_3 + 0x24);
  uVar2 = *(int32_t *)(param_3 + 5);
  uVar3 = *(int32_t *)((int64_t)param_3 + 0x2c);
  *(int32_t *)(param_1 + 0x268) = *(int32_t *)(param_3 + 4);
  *(int32_t *)(param_1 + 0x26c) = uVar1;
  *(int32_t *)(param_1 + 0x270) = uVar2;
  *(int32_t *)(param_1 + 0x274) = uVar3;
  uVar1 = *(int32_t *)((int64_t)param_3 + 0x34);
  uVar2 = *(int32_t *)(param_3 + 7);
  uVar3 = *(int32_t *)((int64_t)param_3 + 0x3c);
  *(int32_t *)(param_1 + 0x278) = *(int32_t *)(param_3 + 6);
  *(int32_t *)(param_1 + 0x27c) = uVar1;
  *(int32_t *)(param_1 + 0x280) = uVar2;
  *(int32_t *)(param_1 + 0x284) = uVar3;
  uVar4 = FUN_1800946d0(param_2,auStack_88);
  puVar5 = (uint64_t *)FUN_1800946d0(uVar4,auStack_48,0x180bfbc50);
  uVar4 = puVar5[1];
  *(uint64_t *)(param_1 + 0x2c8) = *puVar5;
  *(uint64_t *)(param_1 + 0x2d0) = uVar4;
  uVar4 = puVar5[3];
  *(uint64_t *)(param_1 + 0x2d8) = puVar5[2];
  *(uint64_t *)(param_1 + 0x2e0) = uVar4;
  uVar4 = puVar5[5];
  *(uint64_t *)(param_1 + 0x2e8) = puVar5[4];
  *(uint64_t *)(param_1 + 0x2f0) = uVar4;
  uVar4 = puVar5[7];
  *(uint64_t *)(param_1 + 0x2f8) = puVar5[6];
  *(uint64_t *)(param_1 + 0x300) = uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180495d80(int64_t *param_1)
void FUN_180495d80(int64_t *param_1)

{
  int64_t *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int32_t extraout_XMM0_Dc;
  int32_t extraout_XMM0_Dd;
  uint64_t *puStack_58;
  uint uStack_50;
  
  lVar7 = *(int64_t *)(system_message_buffer + 0x1cd8);
  puVar6 = *(int32_t **)(*param_1 + 0x348);
  lVar3 = FUN_18023a940(*(uint64_t *)(*param_1 + 0x58));
  plVar1 = *(int64_t **)(lVar7 + 0x8400);
  iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,*(uint64_t *)(lVar3 + 8),0,4,0,&puStack_58);
  if (iVar2 < 0) {
    FUN_180220810(iVar2,&unknown_var_1856_ptr);
  }
  lVar7 = 0x168;
  puVar5 = puStack_58;
  do {
    if ((puVar6 + 0x27f < puVar5) || ((int32_t *)((int64_t)puVar5 + 0x9fcU) < puVar6)) {
      lVar3 = 0xa0;
      puVar4 = puVar5;
      do {
        uVar9 = thunk_FUN_1808fea60(*(int32_t *)
                                     (((int64_t)puVar6 - (int64_t)puVar5) + (int64_t)puVar4),
                                    0x3e800000);
        *puVar4 = uVar9;
        *(int32_t *)(puVar4 + 1) = extraout_XMM0_Dc;
        *(int32_t *)((int64_t)puVar4 + 0xc) = extraout_XMM0_Dd;
        puVar4 = puVar4 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    else {
      lVar3 = 0x280;
      puVar4 = puVar5;
      do {
        uVar8 = powf(*(int32_t *)((int64_t)puVar4 + ((int64_t)puVar6 - (int64_t)puVar5)),
                     0x3e800000);
        *(int32_t *)puVar4 = uVar8;
        puVar4 = (uint64_t *)((int64_t)puVar4 + 4);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    puVar5 = (uint64_t *)((int64_t)puVar5 + (uint64_t)uStack_50);
    puVar6 = puVar6 + 0x280;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  plVar1 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x78);
  lVar7 = FUN_18023a940(*(uint64_t *)(*param_1 + 0x58));
                    // WARNING: Could not recover jumptable at 0x000180495f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(uint64_t *)(lVar7 + 8),0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180495f60(int32_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180495f60(int32_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int64_t *in_RCX;
  uint64_t *puVar5;
  uint uVar6;
  int iVar7;
  uint64_t uVar9;
  int iVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int32_t uVar13;
  int32_t extraout_XMM0_Da;
  uint64_t *puStackX_8;
  int64_t *plStackX_10;
  uint64_t *puStackX_18;
  uint64_t **ppuStackX_20;
  uint64_t uVar14;
  uint64_t **ppuVar15;
  uint64_t *puVar8;
  
  uVar14 = 0xfffffffffffffffe;
  puVar5 = (uint64_t *)*param_2;
  plStackX_10 = param_2;
  if (puVar5 != (uint64_t *)0x0) {
    puStackX_8 = puVar5;
    param_1 = (**(code **)(*puVar5 + 0x28))(puVar5);
  }
  puStackX_8 = (uint64_t *)*in_RCX;
  *in_RCX = (int64_t)puVar5;
  if (puStackX_8 != (uint64_t *)0x0) {
    param_1 = (**(code **)(*puStackX_8 + 0x38))();
  }
  puVar5 = (uint64_t *)*param_2;
  puStackX_8 = puVar5;
  if (puVar5 != (uint64_t *)0x0) {
    param_1 = (**(code **)(*puVar5 + 0x28))(puVar5);
  }
  FUN_1800b4e00(param_1,puVar5,0xffffffff,param_4,uVar14);
  if (puVar5 != (uint64_t *)0x0) {
    (**(code **)(*puVar5 + 0x38))(puVar5);
  }
  lVar1 = *(int64_t *)(*param_2 + 0xb8);
  uVar13 = *(int32_t *)(lVar1 + 0x11c);
  uVar2 = *(int32_t *)(lVar1 + 0x120);
  uVar3 = *(int32_t *)(lVar1 + 0x124);
  *(int32_t *)(in_RCX + 0x20) = *(int32_t *)(lVar1 + 0x118);
  *(int32_t *)((int64_t)in_RCX + 0x104) = uVar13;
  *(int32_t *)(in_RCX + 0x21) = uVar2;
  *(int32_t *)((int64_t)in_RCX + 0x10c) = uVar3;
  *(int32_t *)(in_RCX + 0x22) = *(int32_t *)(*(int64_t *)(*param_2 + 0xb8) + 0x128);
  *(int *)(in_RCX + 1) =
       (int)((*(int64_t *)(*(int64_t *)(*in_RCX + 0xb8) + 0x48) -
             *(int64_t *)(*(int64_t *)(*in_RCX + 0xb8) + 0x40)) / 0x88);
  uVar13 = FUN_180490c90(in_RCX[0x23]);
  puVar11 = (uint64_t *)0x0;
  in_RCX[0x23] = 0;
  uVar6 = *(uint *)(in_RCX + 1);
  uVar9 = (uint64_t)uVar6;
  puVar5 = puVar11;
  if (uVar9 != 0) {
    puVar4 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,uVar9 * 0x38 + 0x10,3);
    *puVar4 = uVar9 << 0x20 | 0x38;
    puVar5 = puVar4 + 5;
    puVar8 = puVar11;
    do {
      puStackX_8 = puVar5 + -3;
      *puStackX_8 = 0;
      *(uint64_t *)((int64_t)puVar5 + -4) = 0;
      *(uint64_t *)((int64_t)puVar5 + 4) = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      uVar6 = (int)puVar8 + 1;
      puVar8 = (uint64_t *)(uint64_t)uVar6;
      puVar5 = puVar5 + 7;
    } while ((uint64_t)(int64_t)(int)uVar6 < uVar9);
    uVar6 = *(uint *)(in_RCX + 1);
    puVar5 = puVar4 + 2;
    uVar13 = extraout_XMM0_Da;
  }
  in_RCX[0x23] = (int64_t)puVar5;
  if (uVar6 != 0) {
    ppuStackX_20 = &puStackX_8;
    do {
      iVar10 = (int)puVar11;
      ppuVar15 = &puStackX_8;
      puStackX_8 = (uint64_t *)*param_2;
      if (puStackX_8 != (uint64_t *)0x0) {
        uVar13 = (**(code **)(*puStackX_8 + 0x28))();
      }
      puVar8 = puStackX_8;
      puStackX_18 = puStackX_8;
      if (puStackX_8 != (uint64_t *)0x0) {
        uVar13 = (**(code **)(*puStackX_8 + 0x28))(puStackX_8);
      }
      puStackX_18 = (uint64_t *)puVar5[(int64_t)puVar11 * 7];
      puVar5[(int64_t)puVar11 * 7] = (uint64_t)puVar8;
      if (puStackX_18 != (uint64_t *)0x0) {
        uVar13 = (**(code **)(*puStackX_18 + 0x38))();
      }
      puVar8 = puStackX_8;
      puVar4 = puStackX_8;
      if (puStackX_8 != (uint64_t *)0x0) {
        uVar13 = (**(code **)(*puStackX_8 + 0x28))(puStackX_8);
      }
      uVar13 = FUN_1800b4e00(uVar13,puVar8,0xffffffff,param_4,uVar14,ppuVar15,puVar4);
      if (puVar8 != (uint64_t *)0x0) {
        uVar13 = (**(code **)(*puVar8 + 0x38))(puVar8);
      }
      *(int *)(puVar5 + (int64_t)puVar11 * 7 + 2) = iVar10;
      lVar12 = (int64_t)iVar10 * 0x88;
      puVar5[(int64_t)puVar11 * 7 + 1] = *(int64_t *)(puStackX_8[0x17] + 0x40) + lVar12;
      lVar1 = *(int64_t *)(puStackX_8[0x17] + 0x40);
      *(int *)(puVar5 + (int64_t)puVar11 * 7 + 3) =
           (int)(*(int64_t *)(lVar12 + 0x30 + lVar1) - *(int64_t *)(lVar12 + 0x28 + lVar1) >> 4);
      iVar7 = (int)((*(int64_t *)(lVar12 + 0x70 + lVar1) - *(int64_t *)(lVar12 + 0x68 + lVar1)) /
                   0x18);
      *(int *)(puVar5 + (int64_t)puVar11 * 7 + 4) = iVar7;
      *(int *)((int64_t)puVar5 + (int64_t)puVar11 * 0x38 + 0x1c) = iVar7 * 3;
      if (puStackX_8 != (uint64_t *)0x0) {
        uVar13 = (**(code **)(*puStackX_8 + 0x38))();
      }
      puVar5 = (uint64_t *)in_RCX[0x23];
      *(int *)((int64_t)in_RCX + 0xcc) =
           *(int *)((int64_t)in_RCX + 0xcc) + (int)puVar5[(int64_t)puVar11 * 7 + 3];
      *(int *)(in_RCX + 0x1a) = (int)in_RCX[0x1a] + (int)puVar5[(int64_t)puVar11 * 7 + 4];
      puVar11 = (uint64_t *)(uint64_t)(iVar10 + 1U);
    } while (iVar10 + 1U < *(uint *)(in_RCX + 1));
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180496270(uint64_t *param_1,int32_t param_2)
void FUN_180496270(uint64_t *param_1,int32_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int8_t auStack_c8 [32];
  int64_t *plStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint uStack_88;
  int64_t alStack_80 [2];
  uint64_t *puStack_70;
  int8_t uStack_68;
  uint8_t uStack_67;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int8_t uStack_48;
  uint8_t uStack_47;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  alStack_80[1] = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_88 = 0;
  alStack_80[0] = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_a8 = alStack_80;
  puStack_70 = param_1;
  FormatMessageA(0x1300,0,param_2,0x400);
  if (alStack_80[0] == 0) {
    uStack_58 = 0;
    uStack_50 = 0xf;
    uStack_68 = 0;
    FUN_1800671b0(&uStack_68,&unknown_var_9264_ptr,0xd);
    puVar3 = (uint64_t *)&uStack_68;
    uVar5 = 2;
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0xf;
    uStack_48 = 0;
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(alStack_80[0] + lVar7) != '\0');
    FUN_1800671b0(&uStack_48);
    puVar3 = (uint64_t *)&uStack_48;
    uVar5 = 1;
  }
  uVar1 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  uVar1 = puVar3[3];
  param_1[2] = puVar3[2];
  param_1[3] = uVar1;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(int8_t *)puVar3 = 0;
  uVar6 = uVar5 | 4;
  uStack_88 = uVar6;
  if ((uVar5 & 2) != 0) {
    uVar6 = uVar5 & 0xfffffffd | 4;
    uStack_88 = uVar6;
    if (0xf < uStack_50) {
      uVar4 = uStack_50 + 1;
      lVar2 = CONCAT71(uStack_67,uStack_68);
      lVar7 = lVar2;
      if (0xfff < uVar4) {
        uVar4 = uStack_50 + 0x28;
        lVar7 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar7,uVar4);
    }
    uStack_58 = 0;
    uStack_50 = 0xf;
    uStack_68 = 0;
  }
  if ((uVar6 & 1) != 0) {
    uStack_88 = uVar6 & 0xfffffffe;
    if (0xf < uStack_30) {
      uVar4 = uStack_30 + 1;
      lVar2 = CONCAT71(uStack_47,uStack_48);
      lVar7 = lVar2;
      if (0xfff < uVar4) {
        uVar4 = uStack_30 + 0x28;
        lVar7 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar7,uVar4);
    }
    uStack_38 = 0;
    uStack_30 = 0xf;
    uStack_48 = 0;
  }
  if (alStack_80[0] != 0) {
    LocalFree();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_c8);
}





