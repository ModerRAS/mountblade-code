#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part338.c - 1 个函数

// 函数: void FUN_180852090(uint64_t *param_1,uint64_t *param_2)
void FUN_180852090(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  int8_t *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int iVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  code *pcVar21;
  uint uVar22;
  uint64_t uVar23;
  int8_t auStack_338 [32];
  int64_t *plStack_318;
  uint64_t *puStack_310;
  uint uStack_308;
  uint uStack_300;
  uint uStack_2f8;
  uint uStack_2f0;
  uint uStack_2e8;
  uint uStack_2e0;
  uint uStack_2d8;
  uint uStack_2d0;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  uint64_t *puStack_2b0;
  int64_t lStack_2a8;
  int64_t lStack_2a0;
  uint64_t auStack_298 [2];
  int8_t *puStack_288;
  int iStack_280;
  int32_t uStack_27c;
  int8_t auStack_278 [512];
  int8_t auStack_78 [40];
  uint64_t uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_338;
  lVar6 = param_1[8];
  puStack_2b0 = param_2;
  if (lVar6 != 0) {
    uStack_2c8 = *(uint64_t **)(lVar6 + 0x10);
    uStack_2c0 = *(uint64_t *)(lVar6 + 0x18);
    lVar6 = (**(code **)(*(int64_t *)*param_2 + 0x150))((int64_t *)*param_2,&uStack_2c8);
    if (lVar6 == 0) {
      uStack_2d0 = (uint)uStack_2c0._7_1_;
      uStack_2d8 = (uint)uStack_2c0._6_1_;
      uStack_2e0 = (uint)uStack_2c0._5_1_;
      uStack_2e8 = (uint)uStack_2c0._4_1_;
      uStack_2f0 = (uint)uStack_2c0._3_1_;
      uStack_2f8 = (uint)uStack_2c0._2_1_;
      uStack_300 = (uint)uStack_2c0._1_1_;
      uStack_308 = (uint)(byte)uStack_2c0;
      puStack_310 = (uint64_t *)CONCAT44(puStack_310._4_4_,(uint)uStack_2c8._6_2_);
      plStack_318 = (int64_t *)CONCAT44(plStack_318._4_4_,(uint)uStack_2c8._4_2_);
                    // WARNING: Subroutine does not return
      SystemValidationProcessor(auStack_78,0x27,&processed_var_8960_ptr,(uint64_t)uStack_2c8 & 0xffffffff);
    }
    param_1[8] = lVar6;
  }
  iVar5 = FUN_1808b2950(param_1,param_2);
  if (iVar5 != 0) goto FUN_180852aaa;
  cVar3 = func_0x0001808c5700(param_2,param_1[8]);
  if (cVar3 != '\0') {
    iVar5 = FUN_1808b2f30(param_1,0);
    if ((iVar5 != 0) || (iVar5 = FUN_1808b2f30(param_1,1), iVar5 != 0)) goto FUN_180852aaa;
    iVar5 = FUN_180744d60(param_1 + 0x1f);
    puVar11 = (uint64_t *)0x0;
    if (iVar5 == 0) {
      lVar6 = (**(code **)*param_1)(param_1);
      if (*(int *)(lVar6 + 0xcc) != 0x7fffffff) {
        puStack_288 = auStack_278;
        iStack_280 = 0;
        uStack_27c = 0xffffffc0;
        iVar5 = FUN_1808bf350(param_1[7],param_1);
        iVar18 = iStack_280;
        puVar2 = puStack_288;
        if (iVar5 != 0) {
LAB_1808522f9:
          FUN_180744d60(&puStack_288);
          goto LAB_180852302;
        }
        lVar6 = (int64_t)iStack_280;
        if (iStack_280 != 0) {
          lVar7 = (**(code **)*param_1)(param_1);
          iVar5 = *(int *)(lVar7 + 0xd0);
          if (iVar5 == 2) {
            pcVar21 = (code *)&processed_var_6080_ptr;
LAB_180852282:
            qsort(puVar2,lVar6,8,pcVar21);
          }
          else {
            if (iVar5 == 3) {
              pcVar21 = (code *)&processed_var_5984_ptr;
              goto LAB_180852282;
            }
            if (iVar5 == 4) {
              pcVar21 = FUN_1808632b0;
              goto LAB_180852282;
            }
          }
          lVar6 = (int64_t)(iVar18 + -1);
          if (-1 < iVar18 + -1) {
            do {
              if (((*(uint *)(*(int64_t *)(puStack_288 + lVar6 * 8) + 0x2d8) >> 6 & 1) != 0) &&
                 (iVar5 = FUN_18084e710(param_1), iVar5 != 0)) goto LAB_1808522f9;
              lVar6 = lVar6 + -1;
            } while (-1 < lVar6);
          }
        }
        FUN_180744d60(&puStack_288);
      }
    }
    else {
LAB_180852302:
      if (iVar5 != 0) goto FUN_180852aaa;
    }
    iVar5 = FUN_18084ec10(param_1);
    if (iVar5 != 0) goto FUN_180852aaa;
    if ((uint64_t *)param_1[0xc] == (uint64_t *)0x0) {
      puVar8 = (uint64_t *)SystemDataFlowProcessor();
      uStack_2c8 = (uint64_t *)*puVar8;
      uStack_2c0 = puVar8[1];
    }
    else {
      lVar6 = (*(code *)**(uint64_t **)param_1[0xc])();
      uStack_2c8 = *(uint64_t **)(lVar6 + 0x10);
      uStack_2c0 = *(uint64_t *)(lVar6 + 0x18);
    }
    lVar6 = param_1[8];
    if ((*(uint64_t **)(lVar6 + 0x58) != uStack_2c8) ||
       (*(uint64_t *)(lVar6 + 0x60) != uStack_2c0)) {
      if ((*(int *)(lVar6 + 0x58) == 0) &&
         (((*(int *)(lVar6 + 0x5c) == 0 && (*(int *)(lVar6 + 0x60) == 0)) &&
          (*(int *)(lVar6 + 100) == 0)))) goto FUN_180852aaa;
      uVar1 = param_1[0xe];
      iVar5 = FUN_180853470(param_1);
      if (iVar5 != 0) goto FUN_180852aaa;
      param_1[0xe] = uVar1;
      FUN_18084e4b0(param_1);
      lVar6 = param_1[8];
    }
    sVar4 = func_0x00018084c3d0(lVar6);
    if ((sVar4 != 4) || (iVar5 = FUN_18084edf0(param_1), iVar5 == 0)) {
      puVar8 = param_1 + 0x16;
      puVar12 = (uint64_t *)*puVar8;
joined_r0x0001808523af:
      do {
        if (puVar12 == puVar8) {
          lVar6 = param_1[8];
          puVar12 = *(uint64_t **)(lVar6 + 0x38);
          goto LAB_18085243e;
        }
        puVar9 = (uint64_t *)puVar12[2];
        if (puVar12 != puVar8) {
          puVar12 = (uint64_t *)*puVar12;
        }
        lVar6 = (**(code **)*puVar9)(puVar9);
        iVar5 = *(int *)(param_1[8] + 0x40);
        if (0 < iVar5) {
          lVar7 = *(int64_t *)(param_1[8] + 0x38);
          puVar20 = puVar11;
          do {
            iVar18 = (int)puVar20;
            if ((*(int64_t *)(lVar7 + (int64_t)iVar18 * 0x10) == *(int64_t *)(lVar6 + 0x10)) &&
               (*(int64_t *)(lVar7 + 8 + (int64_t)iVar18 * 0x10) == *(int64_t *)(lVar6 + 0x18)))
            goto joined_r0x0001808523af;
            puVar20 = (uint64_t *)(uint64_t)(iVar18 + 1U);
          } while ((int)(iVar18 + 1U) < iVar5);
        }
        iVar5 = FUN_1808c4370(puVar9,param_1);
      } while ((iVar5 == 0) && (iVar5 = FUN_1808c1c20(param_1[7],puVar9), iVar5 == 0));
    }
    goto FUN_180852aaa;
  }
LAB_180852a22:
  for (puVar11 = (uint64_t *)param_1[0x10];
      ((uint64_t *)param_1[0x10] <= puVar11 &&
      (puVar11 < (uint64_t *)param_1[0x10] + *(int *)(param_1 + 0x11))); puVar11 = puVar11 + 1) {
    iVar5 = FUN_1808b50d0(*puVar11,param_2);
    if (iVar5 != 0) goto FUN_180852aaa;
  }
  puVar11 = (uint64_t *)param_1[0x12];
  while ((((uint64_t *)param_1[0x12] <= puVar11 &&
          (puVar11 < (uint64_t *)param_1[0x12] + *(int *)(param_1 + 0x13))) &&
         (iVar5 = FUN_1808b50d0(*puVar11,param_2), iVar5 == 0))) {
    puVar11 = puVar11 + 1;
  }
FUN_180852aaa:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_50 ^ (uint64_t)auStack_338);
LAB_18085243e:
  if ((puVar12 < *(uint64_t **)(lVar6 + 0x38)) ||
     (*(uint64_t **)(lVar6 + 0x38) + (int64_t)*(int *)(lVar6 + 0x40) * 2 <= puVar12))
  goto LAB_180852518;
  uStack_2c8 = (uint64_t *)*puVar12;
  uStack_2c0 = puVar12[1];
  puVar9 = (uint64_t *)*puVar8;
  if (puVar9 != puVar8) {
    while ((lVar7 = (*(code *)**(uint64_t **)puVar9[2])(),
           uStack_2c8 != *(uint64_t **)(lVar7 + 0x10) ||
           (uStack_2c0 != *(uint64_t *)(lVar7 + 0x18)))) {
      if ((puVar9 == puVar8) || (puVar9 = (uint64_t *)*puVar9, puVar9 == puVar8))
      goto LAB_1808524b7;
    }
    puVar9 = (uint64_t *)SystemDataFlowProcessor();
    uStack_2c8 = (uint64_t *)*puVar9;
    uStack_2c0 = puVar9[1];
  }
LAB_1808524b7:
  if (((int)uStack_2c8 != 0) ||
     ((((int)((uint64_t)uStack_2c8 >> 0x20) != 0 || ((int)uStack_2c0 != 0)) ||
      ((int)(uStack_2c0 >> 0x20) != 0)))) {
    uStack_2b8 = 0;
    iVar5 = FUN_1808bc240(param_1[7],&uStack_2c8,0xffffffff,&uStack_2b8);
    if ((iVar5 != 0) ||
       ((uStack_2b8 != 0 && (iVar5 = FUN_1808c2ec0(uStack_2b8,param_1), iVar5 != 0))))
    goto FUN_180852aaa;
  }
  puVar12 = puVar12 + 2;
  goto LAB_18085243e;
LAB_180852518:
  cVar3 = FUN_180853040(param_1 + 0x10,param_1[8] + 0x80);
  if ((cVar3 == '\0') || (cVar3 = FUN_180853040(param_1 + 0x12,param_1[8] + 0x90), cVar3 == '\0')) {
    iVar5 = FUN_18084ead0(param_1,0);
    if (iVar5 != 0) goto FUN_180852aaa;
    uVar14 = 0;
    uStack_2c8 = (uint64_t *)0x0;
    uStack_2c0 = 0;
    uVar15 = uVar14;
    if (0 < *(int *)(param_1 + 0x11)) {
      lStack_2a0 = 0;
      uVar23 = uVar14;
      uVar19 = uVar14;
      do {
        iVar18 = (int)uVar15;
        iVar5 = FUN_18073cdf0(param_1[0xf],
                              *(uint64_t *)(*(int64_t *)(param_1[0x10] + lStack_2a0) + 0x30));
        if (iVar5 != 0) goto LAB_180852943;
        lStack_2a8 = param_1[0x10];
        iVar10 = (int)uVar19 + 1;
        iVar5 = iVar18;
        if (iVar18 < 0) {
          iVar5 = -iVar18;
        }
        iVar16 = (int)uVar19;
        if (iVar5 < iVar10) {
          if (iVar18 < 0) {
            iVar18 = -iVar18;
          }
          iVar18 = (int)((float)iVar18 * 1.5);
          iVar5 = iVar10;
          if (iVar10 <= iVar18) {
            iVar5 = iVar18;
          }
          if (iVar5 < 8) {
            iVar18 = 8;
          }
          else if (iVar18 < iVar10) {
            iVar18 = iVar10;
          }
          iVar5 = FUN_180747f10(&uStack_2c8,iVar18);
          if (iVar5 != 0) goto LAB_180852943;
          uVar15 = uStack_2c0 >> 0x20;
          puVar11 = uStack_2c8;
          iVar16 = (int)uStack_2c0;
        }
        iVar5 = (int)uVar23;
        uVar22 = iVar5 + 1;
        uVar23 = (uint64_t)uVar22;
        uVar17 = iVar16 + 1;
        uVar14 = (uint64_t)uVar17;
        uVar19 = (uint64_t)uVar17;
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar17);
        lStack_2a0 = lStack_2a0 + 8;
        puVar11[iVar16] = *(uint64_t *)(lStack_2a8 + (int64_t)iVar5 * 8);
      } while ((int)uVar22 < *(int *)(param_1 + 0x11));
    }
    uVar23 = 0;
    plVar13 = param_1 + 0x10;
    uVar17 = *(uint *)((int64_t)param_1 + 0x8c);
    if ((int)((uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f)) < 0) {
      if (*(int *)(param_1 + 0x11) < 1) {
        if ((0 < (int)uVar17) && (*plVar13 != 0)) {
          plStack_318 = (int64_t *)CONCAT71(plStack_318._1_7_,1);
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar13,&processed_var_8432_ptr,0x100);
        }
        *plVar13 = 0;
        *(int32_t *)((int64_t)param_1 + 0x8c) = 0;
        goto LAB_1808526bf;
      }
LAB_180852954:
      FUN_180744d60(&uStack_2c8);
      goto FUN_180852aaa;
    }
LAB_1808526bf:
    iVar5 = *(int *)(param_1 + 0x11);
    if (iVar5 < 0) {
                    // WARNING: Subroutine does not return
      memset(*plVar13 + (int64_t)iVar5 * 8,0,(int64_t)-iVar5 << 3);
    }
    *(int32_t *)(param_1 + 0x11) = 0;
    uVar19 = uVar23;
    if (0 < *(int *)(param_1 + 0x13)) {
      do {
        iVar18 = (int)uVar15;
        iVar5 = FUN_18073cdf0(param_1[0xf],
                              *(uint64_t *)(*(int64_t *)(param_1[0x12] + uVar23) + 0x30));
        if (iVar5 != 0) goto LAB_180852943;
        lStack_2a8 = param_1[0x12];
        iVar10 = (int)uVar14 + 1;
        iVar5 = iVar18;
        if (iVar18 < 0) {
          iVar5 = -iVar18;
        }
        iVar16 = (int)uVar14;
        if (iVar5 < iVar10) {
          if (iVar18 < 0) {
            iVar18 = -iVar18;
          }
          iVar18 = (int)((float)iVar18 * 1.5);
          iVar5 = iVar10;
          if (iVar10 <= iVar18) {
            iVar5 = iVar18;
          }
          if (iVar5 < 8) {
            iVar18 = 8;
          }
          else if (iVar18 < iVar10) {
            iVar18 = iVar10;
          }
          iVar5 = FUN_180747f10(&uStack_2c8,iVar18);
          if (iVar5 != 0) goto LAB_180852943;
          uVar15 = uStack_2c0 >> 0x20;
          puVar11 = uStack_2c8;
          iVar16 = (int)uStack_2c0;
        }
        uVar23 = uVar23 + 8;
        uVar17 = (int)uVar19 + 1;
        uVar14 = (uint64_t)(iVar16 + 1U);
        uStack_2c0 = CONCAT44(uStack_2c0._4_4_,iVar16 + 1U);
        puVar11[iVar16] = *(uint64_t *)(lStack_2a8 + (int64_t)(int)uVar19 * 8);
        uVar19 = (uint64_t)uVar17;
      } while ((int)uVar17 < *(int *)(param_1 + 0x13));
    }
    plVar13 = param_1 + 0x12;
    uVar17 = *(uint *)((int64_t)param_1 + 0x9c);
    if ((int)((uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f)) < 0) {
      if (0 < *(int *)(param_1 + 0x13)) goto LAB_180852954;
      if ((0 < (int)uVar17) && (*plVar13 != 0)) {
        plStack_318 = (int64_t *)CONCAT71(plStack_318._1_7_,1);
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar13,&processed_var_8432_ptr,0x100);
      }
      *plVar13 = 0;
      *(int32_t *)((int64_t)param_1 + 0x9c) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x13);
    if (iVar5 < 0) {
                    // WARNING: Subroutine does not return
      memset(*plVar13 + (int64_t)iVar5 * 8,0,(int64_t)-iVar5 << 3);
    }
    *(int32_t *)(param_1 + 0x13) = 0;
    iVar5 = FUN_18073c380(param_1[0xf],0xfffffffe,auStack_298);
    if ((iVar5 == 0) && (iVar5 = FUN_18073c5f0(param_1[0xf],auStack_298[0],&uStack_2b8), iVar5 == 0)
       ) {
      puStack_310 = &uStack_2c8;
      plStack_318 = param_1 + 0x10;
      iVar5 = FUN_180851e40(param_1,param_1[8] + 0x80,param_1[8] + 0xa0,(int)uStack_2b8 + 1);
      if (iVar5 == 0) {
        puStack_310 = &uStack_2c8;
        plStack_318 = plVar13;
        iVar5 = FUN_180851e40(param_1,param_1[8] + 0x90,param_1[8] + 0xb0,uStack_2b8 & 0xffffffff);
        if (iVar5 == 0) {
          iVar5 = (int)uStack_2c0;
          iVar18 = 0;
          puVar11 = uStack_2c8;
          if (0 < (int)uStack_2c0) {
            do {
              iVar10 = FUN_1808b4f00(*puVar11);
              if ((iVar10 != 0) ||
                 (iVar10 = FUN_1808b4c80(param_1[7] + 0x388,*puVar11), iVar10 != 0))
              goto LAB_180852943;
              iVar18 = iVar18 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar18 < iVar5);
          }
          iVar5 = FUN_18084ead0(param_1,CONCAT31((uint3)(*(uint *)(param_1 + 0x18) >> 9),
                                                 (char)(*(uint *)(param_1 + 0x18) >> 1)) &
                                        0xffffff01);
          if (iVar5 == 0) {
            FUN_180744d60(&uStack_2c8);
            goto LAB_180852980;
          }
        }
      }
    }
LAB_180852943:
    FUN_180744d60(&uStack_2c8);
    goto FUN_180852aaa;
  }
LAB_180852980:
  uVar15 = 0;
  iVar5 = FUN_18084e9e0(param_1);
  if (iVar5 != 0) goto FUN_180852aaa;
  uVar14 = uVar15;
  uVar23 = uVar15;
  uVar19 = uVar15;
  if (0 < *(int *)(param_1 + 0x11)) {
    do {
      FUN_1808b5c90(*(uint64_t *)(param_1[0x10] + uVar19),
                    *(int32_t *)(*(int64_t *)(param_1[8] + 0xa0) + uVar23));
      uVar17 = (int)uVar14 + 1;
      uVar14 = (uint64_t)uVar17;
      uVar23 = uVar23 + 4;
      uVar19 = uVar19 + 8;
    } while ((int)uVar17 < *(int *)(param_1 + 0x11));
  }
  uVar14 = uVar15;
  param_2 = puStack_2b0;
  uVar23 = uVar15;
  if (0 < *(int *)(param_1 + 0x13)) {
    do {
      FUN_1808b5c90(*(uint64_t *)(param_1[0x12] + uVar15),
                    *(int32_t *)(*(int64_t *)(param_1[8] + 0xb0) + uVar14));
      uVar17 = (int)uVar23 + 1;
      uVar15 = uVar15 + 8;
      uVar14 = uVar14 + 4;
      param_2 = puStack_2b0;
      uVar23 = (uint64_t)uVar17;
    } while ((int)uVar17 < *(int *)(param_1 + 0x13));
  }
  goto LAB_180852a22;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



