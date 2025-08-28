#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part151.c - 8 个函数

// 函数: void FUN_18013a860(int64_t param_1,int param_2,int param_3,uint64_t param_4)
void FUN_18013a860(int64_t param_1,int param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lStackX_8;
  
  lVar1 = *(int64_t *)(param_1 + 0x10);
  while( true ) {
    lStackX_8 = param_1;
    if (lVar1 == 0) {
      FUN_18013d860(param_4,&lStackX_8);
      return;
    }
    if (((*(byte *)(lVar1 + 0xa0) & 4) != 0) &&
       (((*(int *)(param_1 + 0x50) != param_2 || (param_3 == 0)) ||
        ((*(byte *)(*(int64_t *)(param_1 + 0x18) + 0xa0) & 4) == 0)))) {
      FUN_18013a860(lVar1,param_2,param_3,param_4);
    }
    lVar2 = *(int64_t *)(param_1 + 0x18);
    if ((*(byte *)(lVar2 + 0xa0) & 4) == 0) break;
    if (((*(int *)(param_1 + 0x50) == param_2) && (param_3 != 1)) &&
       ((*(byte *)(*(int64_t *)(param_1 + 0x10) + 0xa0) & 4) != 0)) {
      return;
    }
    lVar1 = *(int64_t *)(lVar2 + 0x10);
    param_1 = lVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013a920(int32_t *param_1)
void FUN_18013a920(int32_t *param_1)

{
  byte *pbVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  char cVar9;
  int32_t uVar10;
  int iVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  int32_t extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  int32_t *puStackX_8;
  float afStackX_10 [2];
  float *in_stack_fffffffffffffee8;
  int32_t uVar20;
  float afStack_e0 [2];
  uint64_t uStack_d8;
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [4];
  int32_t uStack_a8;
  float fStack_a4;
  uint auStack_a0 [2];
  int64_t *plStack_98;
  uint auStack_90 [2];
  int64_t *aplStack_88 [10];
  
  lVar5 = *(int64_t *)(param_1 + 4);
  lVar16 = SYSTEM_DATA_MANAGER_A;
  while( true ) {
    if (lVar5 == 0) {
      SYSTEM_DATA_MANAGER_A = lVar16;
      return;
    }
    uVar20 = (int32_t)((uint64_t)in_stack_fffffffffffffee8 >> 0x20);
    puVar6 = *(int32_t **)(param_1 + 4);
    puVar7 = *(int32_t **)(param_1 + 6);
    SYSTEM_DATA_MANAGER_A = lVar16;
    if ((*(byte *)(puVar6 + 0x28) & 4) != 0) {
      if ((*(byte *)(puVar7 + 0x28) & 4) != 0) {
        iVar4 = param_1[0x14];
        uVar15 = (uint64_t)iVar4;
        afStack_e0[0] = (float)puVar6[0xe];
        afStack_e0[1] = (float)puVar6[0xf];
        uStack_d8 = *(uint64_t *)(puVar7 + 0xe);
        lVar5 = uVar15 * 4;
        afStack_e0[uVar15] = (float)puVar6[uVar15 + 0x10] + afStack_e0[uVar15];
        uVar12 = uVar15 ^ 1;
        *(float *)((int64_t)&uStack_d8 + uVar12 * 4) =
             (float)puVar7[uVar12 + 0x10] + *(float *)((int64_t)&uStack_d8 + uVar12 * 4);
        if ((*(byte *)(param_1 + 1) & 0x20) == 0) {
          FUN_18012e2d0(*param_1);
          DataStructureManager(auStack_a0,0x10,2,&SUB_18013d940,FUN_18011d900);
          fVar3 = *(float *)(lVar5 + 0x163c + lVar16);
          fVar19 = fVar3 + *(float *)(lVar5 + 0x38 + *(int64_t *)(param_1 + 4));
          fVar18 = (*(float *)(lVar5 + 0x40 + *(int64_t *)(param_1 + 6)) +
                   *(float *)(lVar5 + 0x38 + *(int64_t *)(param_1 + 6))) - fVar3;
          iVar11 = FUN_18012e350(&rendering_buffer_2744_ptr);
          if (*(int *)(lVar16 + 0x1b2c) == iVar11) {
            lVar5 = *(int64_t *)(puVar6 + 4);
            puStackX_8 = puVar6;
            if (lVar5 == 0) {
              FUN_18013d860(auStack_a0,&puStackX_8);
            }
            else {
              if (((*(byte *)(lVar5 + 0xa0) & 4) != 0) &&
                 ((puVar6[0x14] != iVar4 || ((*(byte *)(*(int64_t *)(puVar6 + 6) + 0xa0) & 4) == 0)
                  ))) {
                FUN_18013a860(lVar5,iVar4,1,auStack_a0);
              }
              if ((*(byte *)(*(int64_t *)(puVar6 + 6) + 0xa0) & 4) != 0) {
                FUN_18013a860(*(int64_t *)(puVar6 + 6),iVar4,1,auStack_a0);
              }
            }
            lVar5 = *(int64_t *)(puVar7 + 4);
            puStackX_8 = puVar7;
            if (lVar5 == 0) {
              FUN_18013d860(auStack_90,&puStackX_8);
            }
            else {
              if ((*(byte *)(lVar5 + 0xa0) & 4) != 0) {
                FUN_18013a860(lVar5,iVar4,0,auStack_90);
              }
              if (((*(byte *)(*(int64_t *)(puVar7 + 6) + 0xa0) & 4) != 0) &&
                 ((puVar7[0x14] != iVar4 || ((*(byte *)(*(int64_t *)(puVar7 + 4) + 0xa0) & 4) == 0)
                  ))) {
                FUN_18013a860(*(int64_t *)(puVar7 + 6),iVar4,0,auStack_90);
              }
            }
            if (0 < (int)auStack_a0[0]) {
              uVar12 = (uint64_t)auStack_a0[0];
              plVar13 = plStack_98;
              do {
                lVar5 = *plVar13;
                afStack_d0[0] = *(float *)(lVar5 + 0x38);
                afStack_d0[1] = *(float *)(lVar5 + 0x3c);
                afStack_d0[2] = *(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0x40);
                afStack_d0[3] = *(float *)(lVar5 + 0x3c) + *(float *)(lVar5 + 0x44);
                if (fVar19 <= fVar3 + afStack_d0[uVar15]) {
                  fVar19 = fVar3 + afStack_d0[uVar15];
                }
                plVar13 = plVar13 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (0 < (int)auStack_90[0]) {
              uVar12 = (uint64_t)auStack_90[0];
              plVar13 = aplStack_88[0];
              do {
                lVar5 = *plVar13;
                fStack_c0 = *(float *)(lVar5 + 0x38);
                fStack_bc = *(float *)(lVar5 + 0x3c);
                afStack_b8[0] = *(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0x40);
                afStack_b8[1] = *(float *)(lVar5 + 0x3c) + *(float *)(lVar5 + 0x44);
                if (afStack_b8[uVar15] - fVar3 <= fVar18) {
                  fVar18 = afStack_b8[uVar15] - fVar3;
                }
                plVar13 = plVar13 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          lVar5 = SYSTEM_DATA_MANAGER_A;
          puStackX_8 = (int32_t *)CONCAT44(puStackX_8._4_4_,puVar6[uVar15 + 0x10]);
          afStackX_10[0] = (float)puVar7[uVar15 + 0x10];
          fVar3 = (float)puVar6[uVar15 + 0xe];
          iVar11 = FUN_180121250((afStackX_10[0] + (float)puVar7[uVar15 + 0xe]) - fVar18,0,
                                 *(int32_t *)
                                  (*(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x220) +
                                   -4 + (int64_t)
                                        *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218) * 4
                                  ));
          if (*(int *)(lVar5 + 0x1b2c) == iVar11) {
            *(int *)(lVar5 + 0x1b34) = iVar11;
          }
          if (*(int *)(lVar5 + 0x1b30) == iVar11) {
            *(int8_t *)(lVar5 + 0x1b3f) = 1;
          }
          in_stack_fffffffffffffee8 = afStackX_10;
          cVar9 = FUN_180112630(afStack_e0,iVar11,iVar4,&puStackX_8,in_stack_fffffffffffffee8,
                                fVar19 - fVar3,extraout_XMM0_Da);
          lVar5 = SYSTEM_DATA_MANAGER_A;
          if (((cVar9 != '\0') && (0 < (int)auStack_a0[0])) && (0 < (int)auStack_90[0])) {
            puVar6[uVar15 + 0x12] = puStackX_8._0_4_;
            puVar6[uVar15 + 0x10] = puStackX_8._0_4_;
            puVar7[uVar15 + 0xe] =
                 (float)puVar7[uVar15 + 0xe] - (afStackX_10[0] - (float)puVar7[uVar15 + 0x10]);
            puVar7[uVar15 + 0x12] = afStackX_10[0];
            puVar7[uVar15 + 0x10] = afStackX_10[0];
            lVar16 = 0;
            do {
              iVar11 = 0;
              if (0 < (int)auStack_a0[lVar16 * 4]) {
                lVar17 = 0;
                do {
                  lVar14 = *(int64_t *)(lVar17 + *(int64_t *)(auStack_90 + lVar16 * 4 + -2));
                  puVar8 = *(int32_t **)(lVar14 + 8);
                  while (puVar8 != param_1) {
                    plVar13 = (int64_t *)(lVar14 + 8);
                    lVar14 = *plVar13;
                    if (*(int *)(lVar14 + 0x50) == iVar4) {
                      pbVar1 = (byte *)(*(int64_t *)(lVar14 + 0x10 + lVar16 * 8) + 0xa1);
                      *pbVar1 = *pbVar1 | 4;
                      lVar14 = *plVar13;
                    }
                    puVar8 = *(int32_t **)(lVar14 + 8);
                  }
                  iVar11 = iVar11 + 1;
                  lVar17 = lVar17 + 8;
                } while (iVar11 < (int)auStack_a0[lVar16 * 4]);
              }
              iVar11 = 0;
              if (0 < (int)auStack_90[lVar16 * 4]) {
                lVar17 = 0;
                do {
                  lVar14 = *(int64_t *)(lVar17 + (int64_t)aplStack_88[lVar16 * 2]);
                  puVar8 = *(int32_t **)(lVar14 + 8);
                  while (puVar8 != param_1) {
                    plVar13 = (int64_t *)(lVar14 + 8);
                    lVar14 = *plVar13;
                    if (*(int *)(lVar14 + 0x50) == iVar4) {
                      pbVar1 = (byte *)(*(int64_t *)(lVar14 + 0x18 + lVar16 * 8) + 0xa1);
                      *pbVar1 = *pbVar1 | 4;
                      lVar14 = *plVar13;
                    }
                    puVar8 = *(int32_t **)(lVar14 + 8);
                  }
                  iVar11 = iVar11 + 1;
                  lVar17 = lVar17 + 8;
                } while (iVar11 < (int)auStack_90[lVar16 * 4]);
              }
              lVar16 = lVar16 + 2;
            } while (lVar16 < 2);
            FUN_18013a5e0(puVar6,*(uint64_t *)(puVar6 + 0xe),*(uint64_t *)(puVar6 + 0x10));
            FUN_18013a5e0(puVar7,*(uint64_t *)(puVar7 + 0xe),*(uint64_t *)(puVar7 + 0x10));
            if (*(float *)(lVar5 + 0x2e04) <= 0.0) {
              *(int32_t *)(lVar5 + 0x2e04) = *(int32_t *)(lVar5 + 0x1c);
            }
          }
          piVar2 = (int *)(*(int64_t *)(lVar5 + 0x1af8) + 0x218);
          *piVar2 = *piVar2 + -1;
          SystemDataValidator(auStack_a0,0x10,2,FUN_18011d900);
        }
        else {
          afStack_b8[2] = *(float *)(lVar16 + 0x1878);
          afStack_b8[3] = *(float *)(lVar16 + 0x187c);
          uStack_a8 = *(int32_t *)(lVar16 + 0x1880);
          fStack_a4 = *(float *)(lVar16 + 0x1884) * *(float *)(lVar16 + 0x1628);
          uVar10 = func_0x000180121e20(afStack_b8 + 2);
          in_stack_fffffffffffffee8 = (float *)CONCAT44(uVar20,*(int32_t *)(lVar16 + 0x1664));
          FUN_180293f50(*(uint64_t *)(*(int64_t *)(lVar16 + 0x1af8) + 0x2e8),afStack_e0,
                        &uStack_d8,uVar10,in_stack_fffffffffffffee8,0xf);
        }
      }
      if ((*(byte *)(puVar6 + 0x28) & 4) != 0) {
        FUN_18013a920(puVar6);
      }
    }
    if ((*(byte *)(puVar7 + 0x28) & 4) == 0) break;
    lVar5 = *(int64_t *)(puVar7 + 4);
    param_1 = puVar7;
    lVar16 = SYSTEM_DATA_MANAGER_A;
  }
  return;
}



int64_t FUN_18013aed0(int64_t param_1)

{
  int64_t lVar1;
  
  while( true ) {
    if (*(int64_t *)(param_1 + 0x10) == 0) {
      return param_1;
    }
    lVar1 = FUN_18013aed0();
    if (lVar1 != 0) break;
    param_1 = *(int64_t *)(param_1 + 0x18);
  }
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18013af10(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  float fVar2;
  float fStack_28;
  float fStack_24;
  
  if ((*(byte *)(param_1 + 0xa0) & 4) != 0) {
    fStack_28 = (float)param_2;
    fVar2 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1674) * 0.5;
    if ((((*(float *)(param_1 + 0x38) - fVar2 <= fStack_28) &&
         (fStack_24 = (float)((uint64_t)param_2 >> 0x20),
         *(float *)(param_1 + 0x3c) - fVar2 <= fStack_24)) &&
        (fStack_28 < *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x40) + fVar2)) &&
       (fStack_24 < *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x44) + fVar2)) {
      if (*(int64_t *)(param_1 + 0x10) == 0) {
        return param_1;
      }
      lVar1 = FUN_18013af10(*(int64_t *)(param_1 + 0x10),param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      lVar1 = FUN_18013af10(*(uint64_t *)(param_1 + 0x18),param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      if (((*(byte *)(param_1 + 0xa0) & 0x10) != 0) && (*(int64_t *)(param_1 + 8) == 0)) {
        if ((*(int64_t *)(param_1 + 0x78) != 0) && (*(int64_t *)(param_1 + 0x10) == 0)) {
          return *(int64_t *)(param_1 + 0x78);
        }
        if (*(int64_t *)(param_1 + 0x10) == 0) {
          return param_1;
        }
        lVar1 = FUN_18013aed0();
        if (lVar1 != 0) {
          return lVar1;
        }
        lVar1 = FUN_18013aed0(*(uint64_t *)(param_1 + 0x18));
        return lVar1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013b040(int64_t param_1,int param_2,uint param_3)
void FUN_18013b040(int64_t param_1,int param_2,uint param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  if (((param_3 == 0) || ((*(uint *)(param_1 + 0xec) & param_3) != 0)) &&
     (*(uint *)(param_1 + 0xec) = *(uint *)(param_1 + 0xec) & 0xfffffff1,
     *(int *)(param_1 + 0x418) != param_2)) {
    lVar3 = FUN_180121fa0(*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x2df8));
    if ((lVar3 != 0) && (*(int64_t *)(lVar3 + 0x10) != 0)) {
      lVar2 = *(int64_t *)(lVar3 + 8);
      while (lVar1 = lVar2, lVar1 != 0) {
        lVar3 = lVar1;
        lVar2 = *(int64_t *)(lVar1 + 8);
      }
      if (*(int **)(lVar3 + 0x78) == (int *)0x0) {
        param_2 = *(int *)(lVar3 + 0x94);
      }
      else {
        param_2 = **(int **)(lVar3 + 0x78);
      }
    }
    if (*(int *)(param_1 + 0x418) != param_2) {
      if (*(int64_t *)(param_1 + 0x408) != 0) {
        FUN_180136d40(*(int64_t *)(param_1 + 0x408),param_1,0);
      }
      *(int *)(param_1 + 0x418) = param_2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013b0f0(int param_1)
void FUN_18013b0f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int64_t lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint uVar12;
  int iVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t *puVar16;
  int iVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  int64_t lStackX_18;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  uVar22 = 0xfffffffffffffffe;
  piVar1 = *(int **)(SYSTEM_DATA_MANAGER_A + 0x2df8);
  if (param_1 == 0) {
    lStackX_18 = 0;
  }
  else {
    lStackX_18 = FUN_180121fa0(piVar1);
    if (lStackX_18 == 0) {
      return;
    }
  }
  puVar16 = (uint64_t *)0x0;
  bVar6 = false;
  bVar5 = false;
  uVar23 = 0;
  uVar12 = 0;
  puVar24 = (uint64_t *)0x0;
  puVar11 = puVar16;
  puVar18 = puVar16;
  puVar20 = puVar16;
  puVar21 = puVar16;
  puVar9 = puVar16;
  if (0 < *piVar1) {
    do {
      lVar19 = 1;
      uVar10 = 0;
      piVar2 = *(int **)((int64_t)puVar20 + *(int64_t *)(piVar1 + 2) + 8);
      puVar9 = puVar21;
      if (piVar2 != (int *)0x0) {
        if (param_1 == 0) {
LAB_18013b1d6:
          bVar5 = bVar6;
          if ((*(byte *)(piVar2 + 0x28) & 0x20) != 0) {
            bVar5 = true;
          }
          if ((param_1 != 0) &&
             (lVar19 = *(int64_t *)(lVar4 + 0x2df8), uVar14 = uVar10, 0 < *(int *)(lVar19 + 0x10)))
          {
            do {
              if (*(int **)(uVar10 + 0x10 + *(int64_t *)(lVar19 + 0x18)) == piVar2) {
                *(int32_t *)(uVar10 + *(int64_t *)(lVar19 + 0x18)) = 0;
              }
              uVar12 = (int)uVar14 + 1;
              uVar10 = uVar10 + 0x40;
              uVar14 = (uint64_t)uVar12;
            } while ((int)uVar12 < *(int *)(lVar19 + 0x10));
          }
          if (lStackX_18 != 0) {
            FUN_180136f60(lStackX_18,piVar2,lVar19,lStackX_18,uVar22,uVar23,puVar24);
          }
          uVar12 = (uint)((uint64_t)uVar23 >> 0x20);
          iVar13 = (int)puVar18;
          iVar17 = (int)puVar11;
          if (iVar17 == iVar13) {
            if (iVar13 == 0) {
              uVar7 = 8;
            }
            else {
              uVar7 = iVar13 / 2 + iVar13;
            }
            uVar15 = iVar17 + 1U;
            if ((int)(iVar17 + 1U) < (int)uVar7) {
              uVar15 = uVar7;
            }
            if (iVar13 < (int)uVar15) {
              if (SYSTEM_DATA_MANAGER_A != 0) {
                *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
              }
              puVar9 = (uint64_t *)func_0x000180120ce0((int64_t)(int)uVar15 << 3,SYSTEM_DATA_MANAGER_B);
              if (puVar21 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
                memcpy(puVar9,puVar21,(int64_t)iVar17 << 3);
              }
              puVar18 = (uint64_t *)(uint64_t)uVar15;
              puVar24 = puVar9;
              uVar12 = uVar15;
            }
          }
          puVar9[iVar17] = piVar2;
          puVar11 = (uint64_t *)(uint64_t)(iVar17 + 1U);
          uVar23 = CONCAT44(uVar12,iVar17 + 1U);
          bVar6 = bVar5;
        }
        else {
          iVar17 = *piVar2;
          if (iVar17 != param_1) {
            piVar3 = *(int **)(piVar2 + 2);
            if (*(int **)(piVar2 + 2) != (int *)0x0) {
              do {
                piVar8 = piVar3;
                piVar3 = *(int **)(piVar8 + 2);
              } while (piVar3 != (int *)0x0);
              iVar17 = *piVar8;
            }
            if (iVar17 == param_1) goto LAB_18013b1d6;
          }
        }
      }
      uVar12 = (uint)puVar11;
      uVar7 = (int)puVar16 + 1;
      puVar16 = (uint64_t *)(uint64_t)uVar7;
      puVar20 = puVar20 + 2;
      puVar21 = puVar9;
    } while ((int)uVar7 < *piVar1);
  }
  uVar10 = 0;
  if (lStackX_18 != 0) {
    *(byte *)(lStackX_18 + 0xa0) = *(byte *)(lStackX_18 + 0xa0) & 0xfe;
  }
  uVar14 = uVar10;
  if (0 < *(int *)(lVar4 + 0x2e28)) {
    do {
      iVar17 = *(int *)(*(int64_t *)(lVar4 + 0x2e30) + 0x28 + uVar14);
      if ((iVar17 != 0) && (iVar13 = 0, puVar11 = puVar9, 0 < (int)uVar12)) {
        do {
          if (*(int *)*puVar11 == iVar17) {
            *(int *)(*(int64_t *)(lVar4 + 0x2e30) + 0x28 + uVar14) = param_1;
            break;
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar13 < (int)uVar12);
      }
      uVar7 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar7;
      uVar14 = uVar14 + 0x38;
    } while ((int)uVar7 < *(int *)(lVar4 + 0x2e28));
  }
  if (1 < (int)uVar12) {
    qsort(puVar9,(int64_t)(int)uVar12,8,&processed_var_9408_ptr);
  }
  if (0 < (int)uVar12) {
    uVar10 = (uint64_t)uVar12;
    puVar11 = puVar9;
    do {
      FUN_1801359f0(lVar4,*puVar11,0);
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (param_1 == 0) {
    lVar4 = *(int64_t *)(piVar1 + 2);
    if (lVar4 != 0) {
      piVar1[0] = 0;
      piVar1[1] = 0;
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      SystemResourceCleaner(lVar4,SYSTEM_DATA_MANAGER_B);
    }
    lVar4 = *(int64_t *)(piVar1 + 6);
    if (lVar4 != 0) {
      piVar1[4] = 0;
      piVar1[5] = 0;
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      SystemResourceCleaner(lVar4,SYSTEM_DATA_MANAGER_B);
    }
  }
  else if (bVar5) {
    *(byte *)(lStackX_18 + 0xa0) = *(byte *)(lStackX_18 + 0xa0) | 0x20;
  }
  if (puVar9 == (uint64_t *)0x0) {
    return;
  }
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  SystemResourceCleaner(puVar9,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013b490(uint64_t param_1,char param_2)
void FUN_18013b490(uint64_t param_1,char param_2)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  uVar9 = 0;
  if ((param_2 != '\0') && (uVar5 = uVar9, uVar6 = uVar9, 0 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x2e28))) {
    do {
      uVar7 = (int)uVar6 + 1;
      *(int32_t *)(uVar5 + 0x28 + *(int64_t *)(lVar4 + 0x2e30)) = 0;
      uVar5 = uVar5 + 0x38;
      uVar6 = (uint64_t)uVar7;
    } while ((int)uVar7 < *(int *)(lVar4 + 0x2e28));
  }
  piVar1 = (int *)(lVar4 + 0x1aa0);
  if (0 < *piVar1) {
    plVar2 = (int64_t *)(lVar4 + 0x1aa8);
    uVar5 = uVar9;
    uVar6 = uVar9;
    do {
      lVar3 = *(int64_t *)(uVar5 + *plVar2);
      if (*(int64_t *)(lVar3 + 0x408) == 0) {
        *(int32_t *)(lVar3 + 0x418) = 0;
      }
      else {
        uVar8 = uVar9;
        if (param_2 == '\0') {
          uVar8 = (uint64_t)*(uint *)(lVar3 + 0x418);
        }
        FUN_180136d40(*(int64_t *)(lVar3 + 0x408),lVar3,uVar8);
        lVar4 = SYSTEM_DATA_MANAGER_A;
      }
      *(byte *)(lVar3 + 0x432) = *(byte *)(lVar3 + 0x432) & 0xfc;
      *(int8_t *)(lVar3 + 0xb2) = 0;
      if (*(float *)(lVar4 + 0x2e04) <= 0.0) {
        *(int32_t *)(lVar4 + 0x2e04) = *(int32_t *)(lVar4 + 0x1c);
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar7;
      uVar5 = uVar5 + 8;
    } while ((int)uVar7 < *piVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013b4f0(int64_t param_1)
void FUN_18013b4f0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int *unaff_RBP;
  uint64_t uVar3;
  int unaff_EDI;
  uint64_t uVar4;
  uint64_t unaff_R12;
  char unaff_R14B;
  
  plVar1 = (int64_t *)(param_1 + 0x1aa8);
  uVar3 = unaff_R12;
  do {
    lVar2 = *(int64_t *)(uVar3 + *plVar1);
    if (*(int64_t *)(lVar2 + 0x408) == 0) {
      *(int *)(lVar2 + 0x418) = (int)unaff_R12;
    }
    else {
      uVar4 = unaff_R12 & 0xffffffff;
      if (unaff_R14B == '\0') {
        uVar4 = (uint64_t)*(uint *)(lVar2 + 0x418);
      }
      FUN_180136d40(*(int64_t *)(lVar2 + 0x408),lVar2,uVar4);
      param_1 = SYSTEM_DATA_MANAGER_A;
    }
    *(byte *)(lVar2 + 0x432) = *(byte *)(lVar2 + 0x432) & 0xfc;
    *(char *)(lVar2 + 0xb2) = (char)unaff_R12;
    if (*(float *)(param_1 + 0x2e04) <= 0.0) {
      *(int32_t *)(param_1 + 0x2e04) = *(int32_t *)(param_1 + 0x1c);
    }
    unaff_EDI = unaff_EDI + 1;
    uVar3 = uVar3 + 8;
  } while (unaff_EDI < *unaff_RBP);
  return;
}





// 函数: void FUN_18013b58d(void)
void FUN_18013b58d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013b5a0(uint64_t *param_1,int8_t *param_2)
void FUN_18013b5a0(uint64_t *param_1,int8_t *param_2)

{
  uint uVar1;
  int64_t lVar2;
  int *piVar3;
  int64_t lVar4;
  bool bVar5;
  byte bVar6;
  int16_t uVar7;
  int32_t uVar8;
  int64_t lVar9;
  int *piVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int iVar14;
  uint64_t uVar15;
  int64_t lVar16;
  byte bVar17;
  
  lVar13 = SYSTEM_DATA_MANAGER_A;
  if ((*(char *)(SYSTEM_DATA_MANAGER_A + 0xc2) == '\0') ||
     ((*(uint *)((int64_t)param_1 + 0xc) & 0x1200001) != 0)) {
    bVar6 = (byte)(*(uint *)((int64_t)param_1 + 0xc) >> 0x15) & 1;
    bVar5 = false;
    if ((*(uint *)(SYSTEM_DATA_MANAGER_A + 0x1bd0) != 0) &&
       (((*(uint *)(param_1 + 0x1c) & *(uint *)(SYSTEM_DATA_MANAGER_A + 0x1bd0)) != 0 &&
        (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1c14) != '\0')))) {
      bVar6 = 1;
    }
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1c14) = 0;
    if (bVar6 != 0) {
      if (param_1[0x81] == 0) {
        *(int32_t *)(param_1 + 0x83) = 0;
      }
      else {
        FUN_180136d40(param_1[0x81],param_1,0);
        lVar13 = SYSTEM_DATA_MANAGER_A;
      }
      *(byte *)((int64_t)param_1 + 0x432) = *(byte *)((int64_t)param_1 + 0x432) & 0xfc;
      *(int8_t *)((int64_t)param_1 + 0xb2) = 0;
      if (0.0 < *(float *)(lVar13 + 0x2e04)) {
        return;
      }
      *(int32_t *)(lVar13 + 0x2e04) = *(int32_t *)(lVar13 + 0x1c);
      return;
    }
  }
  else {
    bVar5 = true;
    if (*(int *)(param_1 + 0x83) == 0) {
      uVar8 = FUN_1801358c0(SYSTEM_DATA_MANAGER_A);
      *(int32_t *)(param_1 + 0x83) = uVar8;
    }
  }
  uVar12 = 0;
  lVar9 = param_1[0x81];
  lVar16 = lVar13;
  if ((*(int *)(param_1 + 0x83) != 0) && (lVar9 == 0)) {
    lVar9 = FUN_180121fa0(*(uint64_t *)(lVar13 + 0x2df8),*(int32_t *)(param_1 + 0x83));
    if (lVar9 == 0) {
      lVar9 = FUN_180135960(lVar13,*(int32_t *)(param_1 + 0x83));
      if (bVar5) {
        *(int32_t *)(lVar9 + 0x88) = *(int32_t *)(lVar13 + 0x1a90);
      }
    }
    else if (*(int64_t *)(lVar9 + 0x10) != 0) {
      if (param_1[0x81] == 0) {
        *(int32_t *)(param_1 + 0x83) = 0;
        *(int8_t *)((int64_t)param_1 + 0xb2) = 0;
      }
      else {
        FUN_180136d40(param_1[0x81],param_1,0);
        lVar13 = SYSTEM_DATA_MANAGER_A;
        *(int8_t *)((int64_t)param_1 + 0xb2) = 0;
      }
      goto LAB_18013b83c;
    }
    FUN_180136b10(lVar9,param_1,1);
    lVar16 = SYSTEM_DATA_MANAGER_A;
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bf4) = param_1[8];
    *(uint64_t *)(lVar16 + 0x1bfc) = 0;
    *(int32_t *)(lVar16 + 0x1bd0) = 1;
    *(int8_t *)(lVar16 + 0x1c14) = 1;
    *(uint64_t *)(lVar16 + 0x1c04) = param_1[10];
    *(int32_t *)(lVar16 + 0x1bd4) = 1;
    *(int8_t *)(lVar13 + 0x1c14) = 0;
  }
  if (((*(byte *)(lVar9 + 0xa0) & 0x20) == 0) || ((*(byte *)(lVar9 + 4) & 8) == 0)) {
    if (*(int *)(lVar9 + 0x88) < *(int *)(lVar13 + 0x1a90)) {
      lVar2 = *(int64_t *)(lVar9 + 8);
      while (lVar4 = lVar2, lVar4 != 0) {
        lVar9 = lVar4;
        lVar2 = *(int64_t *)(lVar4 + 8);
      }
      if (*(int *)(lVar13 + 0x1a90) <= *(int *)(lVar9 + 0x88)) {
        *(byte *)((int64_t)param_1 + 0x432) = *(byte *)((int64_t)param_1 + 0x432) & 0xfd | 1;
        return;
      }
    }
    else {
      lVar2 = *(int64_t *)(lVar9 + 0x68);
      if (lVar2 == 0) {
LAB_18013b872:
        *(byte *)((int64_t)param_1 + 0x432) = *(byte *)((int64_t)param_1 + 0x432) & 0xfd;
        return;
      }
      if (*(short *)(lVar2 + 0xbc) <= *(short *)((int64_t)param_1 + 0xbc)) {
        if (lVar2 != 0) {
          *(uint64_t *)(lVar16 + 0x1bf4) = *(uint64_t *)(lVar9 + 0x38);
          *(uint64_t *)(lVar16 + 0x1bfc) = 0;
          *(int32_t *)(lVar16 + 0x1bd0) = 1;
          *(int8_t *)(lVar16 + 0x1c14) = 1;
          *(uint64_t *)(lVar16 + 0x1c04) = *(uint64_t *)(lVar9 + 0x40);
          *(int32_t *)(lVar16 + 0x1bd4) = 1;
          *(int8_t *)(lVar13 + 0x1c14) = 0;
          bVar6 = *(byte *)((int64_t)param_1 + 0x432) & 0xfd;
          bVar17 = bVar6 | 1;
          *(byte *)((int64_t)param_1 + 0x432) = bVar17;
          if ((*(byte *)(lVar9 + 4) & 1) != 0) {
            return;
          }
          lVar13 = *(int64_t *)(lVar9 + 0x30);
          if ((lVar13 != 0) && (*(int *)(lVar13 + 0x1c) == *(int *)(param_1 + 1))) {
            bVar17 = bVar6 | 3;
            *(byte *)((int64_t)param_1 + 0x432) = bVar17;
            lVar13 = *(int64_t *)(lVar9 + 0x30);
          }
          if ((((bVar17 & 2) == 0) && (lVar13 != 0)) &&
             (*(int *)(lVar13 + 0x18) == *(int *)(param_1 + 1))) {
            *(int32_t *)((int64_t)param_1 + 0xdc) = 2;
          }
          uVar1 = *(uint *)((int64_t)param_1 + 0xc);
          *(uint *)((int64_t)param_1 + 0xc) = uVar1 | 0x1010002;
          uVar11 = uVar1 & 0xfffffffe | 0x1010002;
          if ((*(byte *)(lVar9 + 0xa0) & 0x40) != 0) {
            uVar11 = uVar1 | 0x1010003;
          }
          *(uint *)((int64_t)param_1 + 0xc) = uVar11;
          if (*(int64_t *)(lVar9 + 0x30) != 0) {
            piVar3 = *(int **)(param_1[0x81] + 0x30);
            if (((piVar3 != (int *)0x0) && (*(int *)(param_1 + 1) != 0)) && (0 < *piVar3)) {
              piVar10 = *(int **)(piVar3 + 2);
              uVar15 = uVar12;
              do {
                iVar14 = (int)uVar15;
                if (*piVar10 == *(int *)(param_1 + 1)) {
                  if (*(int **)(piVar3 + 2) + (int64_t)iVar14 * 10 != (int *)0x0) {
                    uVar7 = (int16_t)(((int64_t)iVar14 * 0x28) / 0x28);
                    goto LAB_18013b999;
                  }
                  break;
                }
                uVar15 = (uint64_t)(iVar14 + 1);
                uVar12 = uVar12 + 1;
                piVar10 = piVar10 + 10;
              } while ((int64_t)uVar12 < (int64_t)*piVar3);
            }
            uVar7 = 0xffff;
LAB_18013b999:
            *(int16_t *)(param_1 + 0x86) = uVar7;
          }
          if ((((*(byte *)(lVar9 + 0xa1) & 2) != 0) ||
              (*(int *)(lVar9 + 0x9c) == *(int *)(param_1 + 1))) && (param_2 != (int8_t *)0x0))
          {
            *param_2 = 0;
          }
          uVar8 = FUN_180123c00(*(uint64_t *)(param_1[0x81] + 0x68),*param_1);
          *(int32_t *)(param_1 + 0x11) = uVar8;
          return;
        }
        goto LAB_18013b872;
      }
    }
  }
  if (param_1[0x81] == 0) {
    *(int32_t *)(param_1 + 0x83) = 0;
    lVar13 = lVar16;
  }
  else {
    FUN_180136d40(param_1[0x81],param_1,0);
    lVar13 = SYSTEM_DATA_MANAGER_A;
  }
  *(int8_t *)((int64_t)param_1 + 0xb2) = 0;
LAB_18013b83c:
  *(byte *)((int64_t)param_1 + 0x432) = *(byte *)((int64_t)param_1 + 0x432) & 0xfc;
  if (0.0 < *(float *)(lVar13 + 0x2e04)) {
    return;
  }
  *(int32_t *)(lVar13 + 0x2e04) = *(int32_t *)(lVar13 + 0x1c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



