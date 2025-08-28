#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part199_sub001.c - 2 个函数

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part199.c - 2 个函数


// 函数: void FUN_180784d10(int64_t param_1,int *param_2,byte param_3,char param_4)
void FUN_180784d10(int64_t param_1,int *param_2,byte param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  float *pfVar10;
  uint64_t uVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  int32_t *puVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  byte bVar18;
  byte bVar19;
  float *pfVar20;
  float fVar21;
  int32_t uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int32_t uVar26;
  float fVar27;
  int8_t auStack_378 [32];
  float fStack_358;
  uint64_t uStack_350;
  float fStack_348;
  int32_t uStack_340;
  float *pfStack_338;
  int32_t uStack_330;
  int32_t uStack_328;
  float fStack_320;
  byte bStack_318;
  int32_t *puStack_310;
  float afStack_308 [152];
  uint64_t uStack_a8;
  
  uStack_a8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_378;
  param_3 = param_3 ^ 1;
  piVar1 = (int *)(param_1 + 0x278);
  bVar18 = param_3;
  bVar19 = param_3;
  bStack_318 = param_3;
  if (param_2 != piVar1) {
    if ((*piVar1 != *param_2) || (*(int *)(param_1 + 0x27c) != param_2[1])) {
      bVar18 = 1;
    }
    if ((float)param_2[6] != *(float *)(param_1 + 0x290)) {
      bVar19 = 1;
    }
    if ((((*(int *)(param_1 + 0x2c8) != param_2[0x14]) ||
         ((float)param_2[0xc] != *(float *)(param_1 + 0x2a8))) ||
        ((float)param_2[0xd] != *(float *)(param_1 + 0x2ac))) ||
       (((*(int *)(param_1 + 0x2b0) != param_2[0xe] ||
         ((float)param_2[0xf] != *(float *)(param_1 + 0x2b4))) ||
        (((float)param_2[0x11] != *(float *)(param_1 + 700) ||
         ((*(int *)(param_1 + 0x2a4) != param_2[0xb] ||
          (iVar6 = memcmp(param_1 + 0x2cc,param_2 + 0x15,(int64_t)*(int *)(param_1 + 0x2c8) * 0x14)
          , iVar6 != 0)))))))) {
      param_4 = '\x01';
    }
    if ((*(int *)(param_1 + 0x2c4) != param_2[0x13]) || (*(int *)(param_1 + 0x27c) != param_2[1])) {
      param_3 = 1;
    }
    uVar3 = *(uint64_t *)(param_2 + 2);
    *(uint64_t *)piVar1 = *(uint64_t *)param_2;
    *(uint64_t *)(param_1 + 0x280) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 6);
    *(uint64_t *)(param_1 + 0x288) = *(uint64_t *)(param_2 + 4);
    *(uint64_t *)(param_1 + 0x290) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 10);
    *(uint64_t *)(param_1 + 0x298) = *(uint64_t *)(param_2 + 8);
    *(uint64_t *)(param_1 + 0x2a0) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0xe);
    *(uint64_t *)(param_1 + 0x2a8) = *(uint64_t *)(param_2 + 0xc);
    *(uint64_t *)(param_1 + 0x2b0) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x12);
    *(uint64_t *)(param_1 + 0x2b8) = *(uint64_t *)(param_2 + 0x10);
    *(uint64_t *)(param_1 + 0x2c0) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x16);
    *(uint64_t *)(param_1 + 0x2c8) = *(uint64_t *)(param_2 + 0x14);
    *(uint64_t *)(param_1 + 0x2d0) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x1a);
    *(uint64_t *)(param_1 + 0x2d8) = *(uint64_t *)(param_2 + 0x18);
    *(uint64_t *)(param_1 + 0x2e0) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x1e);
    *(uint64_t *)(param_1 + 0x2e8) = *(uint64_t *)(param_2 + 0x1c);
    *(uint64_t *)(param_1 + 0x2f0) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x22);
    *(uint64_t *)(param_1 + 0x2f8) = *(uint64_t *)(param_2 + 0x20);
    *(uint64_t *)(param_1 + 0x300) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x26);
    *(uint64_t *)(param_1 + 0x308) = *(uint64_t *)(param_2 + 0x24);
    *(uint64_t *)(param_1 + 0x310) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x2a);
    *(uint64_t *)(param_1 + 0x318) = *(uint64_t *)(param_2 + 0x28);
    *(uint64_t *)(param_1 + 800) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x2e);
    *(uint64_t *)(param_1 + 0x328) = *(uint64_t *)(param_2 + 0x2c);
    *(uint64_t *)(param_1 + 0x330) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x32);
    *(uint64_t *)(param_1 + 0x338) = *(uint64_t *)(param_2 + 0x30);
    *(uint64_t *)(param_1 + 0x340) = uVar3;
    uVar3 = *(uint64_t *)(param_2 + 0x36);
    *(uint64_t *)(param_1 + 0x348) = *(uint64_t *)(param_2 + 0x34);
    *(uint64_t *)(param_1 + 0x350) = uVar3;
    iVar6 = param_2[0x39];
    iVar14 = param_2[0x3a];
    iVar2 = param_2[0x3b];
    *(int *)(param_1 + 0x358) = param_2[0x38];
    *(int *)(param_1 + 0x35c) = iVar6;
    *(int *)(param_1 + 0x360) = iVar14;
    *(int *)(param_1 + 0x364) = iVar2;
    *(int *)(param_1 + 0x368) = param_2[0x3c];
  }
  iVar6 = *(int *)(param_1 + 0x250);
  iVar14 = *(int *)(param_1 + 0x24c);
  if (iVar14 == iVar6) {
    if (bStack_318 != 0) goto LAB_180784edc;
  }
  else {
    *(int *)(param_1 + 0x24c) = iVar6;
    iVar14 = iVar6;
LAB_180784edc:
    puStack_310 = (int32_t *)((uint64_t)puStack_310 & 0xffffffff00000000);
    func_0x00018074a590(*(uint64_t *)(param_1 + 0xa8),iVar14,&puStack_310);
    *(int32_t *)(param_1 + 0x244) = puStack_310._0_4_;
    if ((*(int64_t *)(param_1 + 0x270) != 0) && (iVar6 = FUN_1807d4800(), iVar6 != 0))
    goto LAB_180785945;
    func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0x24c),
                        &puStack_310);
    puVar15 = puStack_310;
    if (puStack_310[4] != 0) {
      lVar8 = *(int64_t *)(param_1 + 0x270);
      if (lVar8 == 0) {
        fStack_348 = (float)CONCAT31(fStack_348._1_3_,1);
        uStack_350 = (float *)((uint64_t)uStack_350 & 0xffffffffffffff00);
        fStack_358 = 0.0;
        lVar8 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc0,&unknown_var_9488_ptr,0x5d7);
        *(int64_t *)(param_1 + 0x270) = lVar8;
        if (lVar8 == 0) goto LAB_180785945;
      }
      iVar6 = FUN_1807d4f50(lVar8,puVar15,0xffffffff);
      if (iVar6 != 0) goto LAB_180785945;
    }
  }
  if (bVar18 != 0) {
    if (*piVar1 == 0) {
      iVar6 = 2;
    }
    else if (*piVar1 == 1) {
      iVar6 = 3;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x27c);
      if (iVar6 == 0) {
        iVar6 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x1193c);
      }
    }
    puStack_310 = (int32_t *)((uint64_t)puStack_310 & 0xffffffff00000000);
    func_0x00018074a590(*(uint64_t *)(param_1 + 0xa8),iVar6,&puStack_310);
    *(int32_t *)(param_1 + 0x248) = puStack_310._0_4_;
  }
  uVar26 = 0;
  if (bVar19 != 0) {
    if (-80.0 < *(float *)(param_1 + 0x290)) {
      uVar22 = powf();
    }
    else {
      uVar22 = 0;
    }
    *(int32_t *)(param_1 + 0x224) = uVar22;
  }
  if (param_3 != 0) {
    puStack_310 = (int32_t *)0x0;
    iVar6 = func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0x27c),
                                &puStack_310);
    if (iVar6 != 0) goto LAB_180785945;
    uVar7 = func_0x0001807d6120(*(int32_t *)(param_1 + 0x2c4),*(int32_t *)(param_1 + 0x27c));
    uVar12 = (1 << ((byte)*puStack_310 & 0x1f)) - 1;
    if ((uVar12 & uVar7) == uVar12) {
      *(int32_t **)(param_1 + 600) = puStack_310;
    }
    else {
      if (*(int64_t *)(param_1 + 0x260) == 0) {
        fStack_348 = (float)CONCAT31(fStack_348._1_3_,1);
        uStack_350 = (float *)((uint64_t)uStack_350 & 0xffffffffffffff00);
        fStack_358 = 0.0;
        lVar8 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc0,&unknown_var_9488_ptr);
        *(int64_t *)(param_1 + 0x260) = lVar8;
        if (lVar8 == 0) goto LAB_180785945;
      }
      else {
        iVar6 = FUN_1807d4800();
        if (iVar6 != 0) goto LAB_180785945;
        lVar8 = *(int64_t *)(param_1 + 0x260);
      }
      iVar6 = FUN_1807d4f50(lVar8,puStack_310,uVar7);
      if (iVar6 != 0) goto LAB_180785945;
      *(uint64_t *)(param_1 + 600) = *(uint64_t *)(param_1 + 0x260);
    }
    if ((*(int64_t *)(param_1 + 0x268) != 0) && (iVar6 = FUN_1807d4800(), iVar6 != 0))
    goto LAB_180785945;
    lVar8 = *(int64_t *)(param_1 + 600);
    if (*(int *)(lVar8 + 0x10) != 0) {
      lVar9 = *(int64_t *)(param_1 + 0x268);
      if (lVar9 == 0) {
        fStack_348 = (float)CONCAT31(fStack_348._1_3_,1);
        uStack_350 = (float *)((uint64_t)uStack_350 & 0xffffffffffffff00);
        fStack_358 = 0.0;
        lVar9 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xc0,&unknown_var_9488_ptr,0x60c);
        *(int64_t *)(param_1 + 0x268) = lVar9;
        if (lVar9 == 0) goto LAB_180785945;
        lVar8 = *(int64_t *)(param_1 + 600);
      }
      iVar6 = FUN_1807d4f50(lVar9,lVar8,uVar7);
      if (iVar6 != 0) goto LAB_180785945;
    }
  }
  iVar6 = 0;
  if (param_4 != '\0') {
    pfVar20 = afStack_308 + 8;
    iVar14 = *(int *)(param_1 + 0x24c);
    if (*piVar1 == 0) {
      if ((iVar14 == 2) || (iVar14 == 3)) {
        pfVar20 = (float *)0x0;
      }
      else {
        func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),iVar14,&puStack_310);
        if ((float)(int)puStack_310[1] <= 1.0) {
          fVar21 = 1.0;
        }
        else {
          func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0x24c),
                              &puStack_310);
          fVar21 = SQRT((float)(int)puStack_310[1]);
        }
        FUN_1807d47c0(*(int32_t *)(param_1 + 0x244),1,0xc,afStack_308 + 8);
        func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0x24c),
                            &puStack_310);
        func_0x0001807d64c0(puStack_310,1.0 / fVar21,0x3f800000);
      }
    }
    else if (*piVar1 == 1) {
      func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),iVar14,&puStack_310);
      if (-1 < (int)puStack_310[0x26]) {
        uVar26 = 0x3f3504f3;
      }
      FUN_1807d47c0(*(int32_t *)(param_1 + 0x244),2,0xc);
      func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),*(int32_t *)(param_1 + 0x24c),
                          &puStack_310);
      uStack_350 = afStack_308 + 8;
      fStack_358 = 1.68156e-44;
      FUN_1807d65f0(puStack_310,*(int32_t *)(param_1 + 0x280),uVar26,0x3f800000);
    }
    else {
      uVar26 = *(int32_t *)(param_1 + 0x224);
      func_0x00018074a3d0(*(uint64_t *)(param_1 + 0xa8),iVar14,&puStack_310);
      if ((puStack_310[0x26] == -1) && (-1 < *(int *)(*(int64_t *)(param_1 + 600) + 0x98))) {
        if (*(char *)(param_1 + 0x2c0) == '\0') {
          uVar26 = 0;
        }
        else {
          uVar26 = *(int32_t *)(param_1 + 0x224);
        }
      }
      FUN_1807d47c0(0xc,0xc,0xc);
      if (0.0 < *(float *)(param_1 + 0x2b8)) {
        if (*(int *)(param_1 + 0x2c8) == 1) {
          fVar21 = (float)FUN_180782f30(param_1,*(int32_t *)(param_1 + 0x2d8));
          uVar22 = func_0x000180782f80(param_1,*(int32_t *)(param_1 + 0x2dc));
          fStack_320 = fVar21 * *(float *)(param_1 + 0x2b8);
          uStack_340 = *(int32_t *)(param_1 + 0x298);
          uStack_330 = 0;
          pfStack_338 = (float *)CONCAT44(pfStack_338._4_4_,*(int32_t *)(param_1 + 0x29c));
          fStack_348 = *(float *)(param_1 + 0x2d4);
          uStack_350 = (float *)CONCAT44(uStack_350._4_4_,uVar22);
          fStack_358 = *(float *)(param_1 + 0x2d0);
          uStack_328 = uVar26;
          FUN_180784b00(param_1,*(uint64_t *)(param_1 + 600),afStack_308 + 8);
        }
        else {
          fVar21 = 0.0;
          afStack_308[0] = 0.0;
          afStack_308[1] = 0.0;
          fVar24 = 0.0;
          afStack_308[2] = 0.0;
          afStack_308[3] = 0.0;
          afStack_308[4] = 0.0;
          afStack_308[5] = 0.0;
          afStack_308[6] = 0.0;
          afStack_308[7] = 0.0;
          if (0 < *(int *)(param_1 + 0x2c8)) {
            pfVar13 = afStack_308;
            puVar15 = (int32_t *)(param_1 + 0x2d8);
            iVar14 = iVar6;
            do {
              fVar23 = (float)puVar15[-3];
              if (0.0 < fVar23) {
                fVar27 = (float)FUN_180782f30(param_1,*puVar15);
                *pfVar13 = fVar27 * fVar23;
                fVar25 = 1.0 - fVar24;
                if (fVar23 <= 1.0 - fVar24) {
                  fVar25 = fVar23;
                }
                fVar24 = fVar24 + fVar25;
                fVar21 = fVar21 + fVar25 * fVar27;
              }
              iVar14 = iVar14 + 1;
              puVar15 = puVar15 + 5;
              pfVar13 = pfVar13 + 1;
            } while (iVar14 < *(int *)(param_1 + 0x2c8));
            if (fVar21 != 0.0) {
              if (0 < *(int *)(param_1 + 0x2c8)) {
                pfVar10 = afStack_308;
                pfVar13 = (float *)(param_1 + 0x2d4);
                do {
                  fVar24 = *pfVar10;
                  if (fVar24 != 0.0) {
                    uVar22 = func_0x000180782f80(param_1,pfVar13[2]);
                    uStack_340 = *(int32_t *)(param_1 + 0x298);
                    uStack_330 = 0;
                    pfStack_338 = (float *)CONCAT44(pfStack_338._4_4_,
                                                    *(int32_t *)(param_1 + 0x29c));
                    fStack_348 = *pfVar13;
                    uStack_350 = (float *)CONCAT44(uStack_350._4_4_,uVar22);
                    fStack_358 = pfVar13[-1];
                    uStack_328 = uVar26;
                    fStack_320 = fVar24;
                    FUN_180784b00(param_1,*(uint64_t *)(param_1 + 600),afStack_308 + 8);
                  }
                  iVar6 = iVar6 + 1;
                  pfVar10 = pfVar10 + 1;
                  pfVar13 = pfVar13 + 5;
                } while (iVar6 < *(int *)(param_1 + 0x2c8));
              }
              uVar7 = *(uint *)(param_1 + 0x248);
              uVar16 = (uint64_t)uVar7;
              fVar24 = 0.0;
              if (0 < (int)uVar7) {
                pfVar13 = afStack_308 + 8;
                uVar17 = (uint64_t)uVar7;
                do {
                  pfVar10 = pfVar13;
                  uVar11 = (uint64_t)*(uint *)(param_1 + 0x244);
                  if (0 < (int)*(uint *)(param_1 + 0x244)) {
                    do {
                      fVar24 = fVar24 + *pfVar10 * *pfVar10;
                      uVar11 = uVar11 - 1;
                      pfVar10 = pfVar10 + 1;
                    } while (uVar11 != 0);
                  }
                  pfVar13 = pfVar13 + 0xc;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              fVar23 = *(float *)(param_1 + 0x2b8);
              if (0 < (int)uVar7) {
                uVar7 = *(uint *)(param_1 + 0x244);
                pfVar13 = afStack_308 + 8;
                do {
                  pfVar10 = pfVar13;
                  uVar17 = (uint64_t)uVar7;
                  if (0 < (int)uVar7) {
                    do {
                      *pfVar10 = (fVar21 / SQRT(fVar24)) * fVar23 * *pfVar10;
                      uVar17 = uVar17 - 1;
                      pfVar10 = pfVar10 + 1;
                    } while (uVar17 != 0);
                  }
                  pfVar13 = pfVar13 + 0xc;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
            }
          }
        }
      }
      if (*(float *)(param_1 + 0x2b8) < 1.0) {
        if ((*(int **)(param_1 + 0x270) == (int *)0x0) || (**(int **)(param_1 + 0x270) == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((*(int **)(param_1 + 0x268) == (int *)0x0) || (**(int **)(param_1 + 0x268) == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((!bVar4) || (0.0 <= *(float *)(param_1 + 0x2a0))) {
          fVar21 = 0.0;
        }
        else {
          fVar21 = -*(float *)(param_1 + 0x2a0);
        }
        if ((!bVar5) || (fVar24 = *(float *)(param_1 + 0x2a0), fVar24 <= 0.0)) {
          fVar24 = 0.0;
        }
        fVar23 = 1.0 - *(float *)(param_1 + 0x2b8);
        fVar27 = (1.0 - fVar24) * fVar23;
        fVar25 = (1.0 - fVar21) * fVar23;
        if (fVar27 != 0.0) {
          uStack_340 = *(int32_t *)(param_1 + 0x298);
          uStack_330 = *(int32_t *)(param_1 + 0x294);
          pfStack_338 = (float *)CONCAT44(pfStack_338._4_4_,*(int32_t *)(param_1 + 0x29c));
          fStack_348 = *(float *)(param_1 + 0x28c);
          fStack_358 = *(float *)(param_1 + 0x284);
          uStack_350 = (float *)CONCAT44(uStack_350._4_4_,*(int32_t *)(param_1 + 0x288));
          uStack_328 = uVar26;
          fStack_320 = fVar27;
          FUN_180784b00(param_1,*(uint64_t *)(param_1 + 600),afStack_308 + 8);
        }
        if ((fVar23 * fVar24 != 0.0) && (bVar5)) {
          uStack_340 = *(int32_t *)(param_1 + 0x298);
          uStack_330 = *(int32_t *)(param_1 + 0x294);
          pfStack_338 = (float *)CONCAT44(pfStack_338._4_4_,*(int32_t *)(param_1 + 0x29c));
          fStack_348 = *(float *)(param_1 + 0x28c);
          fStack_358 = *(float *)(param_1 + 0x284);
          uStack_350 = (float *)CONCAT44(uStack_350._4_4_,*(int32_t *)(param_1 + 0x288));
          uStack_328 = uVar26;
          fStack_320 = fVar23 * fVar24;
          FUN_180784b00(param_1,*(uint64_t *)(param_1 + 0x268),afStack_308 + 8);
        }
        if ((fVar23 * fVar21 != 0.0) && (bVar4)) {
          fStack_358 = *(float *)(param_1 + 0x28c);
          pfStack_338 = afStack_308 + 8;
          uStack_330 = 0;
          uStack_340 = 0xc;
          uStack_350 = (float *)((uint64_t)uStack_350 & 0xffffffff00000000);
          fStack_348 = fVar23 * fVar21;
          FUN_1807d6d40(*(uint64_t *)(param_1 + 0x270),*(uint64_t *)(param_1 + 600),
                        *(int32_t *)(param_1 + 0x284),*(int32_t *)(param_1 + 0x288));
        }
        if (((fVar25 != 0.0) && (bVar5)) && (bVar4)) {
          fStack_358 = *(float *)(param_1 + 0x28c);
          pfStack_338 = afStack_308 + 8;
          uStack_330 = 0;
          uStack_340 = 0xc;
          uStack_350 = (float *)((uint64_t)uStack_350 & 0xffffffff00000000);
          fStack_348 = fVar25;
          FUN_1807d6d40(*(uint64_t *)(param_1 + 0x270),*(uint64_t *)(param_1 + 0x268),
                        *(int32_t *)(param_1 + 0x284),*(int32_t *)(param_1 + 0x288));
        }
      }
    }
    fStack_348 = (float)CONCAT31(fStack_348._1_3_,bStack_318);
    uStack_350 = (float *)(CONCAT44(uStack_350._4_4_,
                                    -(uint)(*(int64_t *)(*(int64_t *)(param_1 + 0x218) + 0x40) !=
                                           0)) & 0xffffffff00000040);
    fStack_358 = 1.68156e-44;
    FUN_180765da0(*(int64_t *)(param_1 + 0x218),pfVar20,*(int32_t *)(param_1 + 0x248),
                  *(int32_t *)(param_1 + 0x244));
  }
LAB_180785945:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_a8 ^ (uint64_t)auStack_378);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




