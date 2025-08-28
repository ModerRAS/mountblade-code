#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part020.c - 2 个函数

// 函数: void FUN_18085219c(void)
void FUN_18085219c(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t unaff_RBP;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint64_t unaff_RDI;
  uint64_t uVar18;
  uint64_t *puVar19;
  code *pcVar20;
  uint uVar21;
  uint64_t uVar22;
  uint64_t *unaff_R15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qa_06;
  uint64_t *in_stack_00000070;
  int iStack0000000000000078;
  int32_t uStack000000000000007c;
  
  cVar1 = func_0x0001808c5700();
  if (cVar1 != '\0') {
    iVar3 = FUN_1808b2f30(extraout_XMM0_Qa,0);
    if ((iVar3 != 0) || (iVar3 = FUN_1808b2f30(extraout_XMM0_Qa_00,1), iVar3 != 0))
    goto LAB_180852a9a;
    iVar3 = FUN_180744d60(unaff_R15 + 0x1f);
    puVar10 = (uint64_t *)0x0;
    if (iVar3 == 0) {
      lVar4 = (**(code **)*unaff_R15)();
      if (*(int *)(lVar4 + 0xcc) != 0x7fffffff) {
        uVar23 = unaff_R15[7];
        *(int64_t *)(unaff_RBP + -0x50) = unaff_RBP + -0x40;
        *(int32_t *)(unaff_RBP + -0x48) = 0;
        *(int32_t *)(unaff_RBP + -0x44) = 0xffffffc0;
        iVar3 = FUN_1808bf350(uVar23);
        if (iVar3 != 0) {
LAB_1808522f9:
          FUN_180744d60(unaff_RBP + -0x50);
          goto LAB_180852302;
        }
        iVar3 = *(int *)(unaff_RBP + -0x48);
        uVar23 = *(uint64_t *)(unaff_RBP + -0x50);
        if (iVar3 != 0) {
          lVar4 = (**(code **)*unaff_R15)();
          iVar17 = *(int *)(lVar4 + 0xd0);
          if (iVar17 == 2) {
            pcVar20 = (code *)&unknown_var_6080_ptr;
LAB_180852282:
            qsort(uVar23,(int64_t)iVar3,8,pcVar20);
          }
          else {
            if (iVar17 == 3) {
              pcVar20 = (code *)&unknown_var_5984_ptr;
              goto LAB_180852282;
            }
            if (iVar17 == 4) {
              pcVar20 = FUN_1808632b0;
              goto LAB_180852282;
            }
          }
          lVar4 = (int64_t)(iVar3 + -1);
          if (-1 < iVar3 + -1) {
            do {
              if (((*(uint *)(*(int64_t *)(*(int64_t *)(unaff_RBP + -0x50) + lVar4 * 8) + 0x2d8)
                    >> 6 & 1) != 0) && (iVar3 = FUN_18084e710(), iVar3 != 0)) goto LAB_1808522f9;
              lVar4 = lVar4 + -1;
            } while (-1 < lVar4);
          }
        }
        FUN_180744d60(unaff_RBP + -0x50);
      }
    }
    else {
LAB_180852302:
      if (iVar3 != 0) goto LAB_180852a9a;
    }
    iVar3 = FUN_18084ec10();
    if (iVar3 != 0) goto LAB_180852a9a;
    if ((uint64_t *)unaff_R15[0xc] == (uint64_t *)0x0) {
      puVar5 = (uint64_t *)FUN_180847820();
      in_stack_00000070 = (uint64_t *)*puVar5;
      _iStack0000000000000078 = puVar5[1];
    }
    else {
      lVar4 = (*(code *)**(uint64_t **)unaff_R15[0xc])();
      in_stack_00000070 = *(uint64_t **)(lVar4 + 0x10);
      _iStack0000000000000078 = *(uint64_t *)(lVar4 + 0x18);
    }
    lVar4 = unaff_R15[8];
    if ((*(uint64_t **)(lVar4 + 0x58) != in_stack_00000070) ||
       (*(uint64_t *)(lVar4 + 0x60) != _iStack0000000000000078)) {
      if ((*(int *)(lVar4 + 0x58) == 0) &&
         (((*(int *)(lVar4 + 0x5c) == 0 && (*(int *)(lVar4 + 0x60) == 0)) &&
          (*(int *)(lVar4 + 100) == 0)))) goto LAB_180852a9a;
      uVar23 = unaff_R15[0xe];
      iVar3 = FUN_180853470();
      if (iVar3 != 0) goto LAB_180852a9a;
      unaff_R15[0xe] = uVar23;
      FUN_18084e4b0();
      lVar4 = unaff_R15[8];
    }
    sVar2 = func_0x00018084c3d0(lVar4);
    if ((sVar2 != 4) || (iVar3 = FUN_18084edf0(), iVar3 == 0)) {
      puVar5 = unaff_R15 + 0x16;
      puVar11 = (uint64_t *)*puVar5;
joined_r0x0001808523af:
      do {
        if (puVar11 == puVar5) {
          lVar4 = unaff_R15[8];
          puVar11 = *(uint64_t **)(lVar4 + 0x38);
          goto LAB_18085243e;
        }
        puVar7 = (uint64_t *)puVar11[2];
        if (puVar11 != puVar5) {
          puVar11 = (uint64_t *)*puVar11;
        }
        lVar4 = (**(code **)*puVar7)(puVar7);
        iVar3 = *(int *)(unaff_R15[8] + 0x40);
        if (0 < iVar3) {
          lVar6 = *(int64_t *)(unaff_R15[8] + 0x38);
          puVar19 = puVar10;
          do {
            iVar17 = (int)puVar19;
            if ((*(int64_t *)(lVar6 + (int64_t)iVar17 * 0x10) == *(int64_t *)(lVar4 + 0x10)) &&
               (*(int64_t *)(lVar6 + 8 + (int64_t)iVar17 * 0x10) == *(int64_t *)(lVar4 + 0x18)))
            goto joined_r0x0001808523af;
            puVar19 = (uint64_t *)(uint64_t)(iVar17 + 1U);
          } while ((int)(iVar17 + 1U) < iVar3);
        }
        iVar3 = FUN_1808c4370(puVar7);
      } while ((iVar3 == 0) && (iVar3 = FUN_1808c1c20(unaff_R15[7],puVar7), iVar3 == 0));
    }
    goto LAB_180852a9a;
  }
  goto LAB_180852a22;
LAB_18085243e:
  if ((puVar11 < *(uint64_t **)(lVar4 + 0x38)) ||
     (*(uint64_t **)(lVar4 + 0x38) + (int64_t)*(int *)(lVar4 + 0x40) * 2 <= puVar11))
  goto LAB_180852518;
  in_stack_00000070 = (uint64_t *)*puVar11;
  _iStack0000000000000078 = puVar11[1];
  puVar7 = (uint64_t *)*puVar5;
  if (puVar7 != puVar5) {
    while ((lVar6 = (*(code *)**(uint64_t **)puVar7[2])(),
           in_stack_00000070 != *(uint64_t **)(lVar6 + 0x10) ||
           (_iStack0000000000000078 != *(uint64_t *)(lVar6 + 0x18)))) {
      if ((puVar7 == puVar5) || (puVar7 = (uint64_t *)*puVar7, puVar7 == puVar5))
      goto LAB_1808524b7;
    }
    puVar7 = (uint64_t *)FUN_180847820();
    in_stack_00000070 = (uint64_t *)*puVar7;
    _iStack0000000000000078 = puVar7[1];
  }
LAB_1808524b7:
  if (((int)in_stack_00000070 != 0) ||
     ((((int)((uint64_t)in_stack_00000070 >> 0x20) != 0 || ((int)_iStack0000000000000078 != 0)) ||
      ((int)(_iStack0000000000000078 >> 0x20) != 0)))) {
    uVar23 = unaff_R15[7];
    *(uint64_t *)(unaff_RBP + -0x80) = 0;
    iVar3 = FUN_1808bc240(uVar23,&stack0x00000070,0xffffffff,unaff_RBP + -0x80);
    if ((iVar3 != 0) ||
       ((*(int64_t *)(unaff_RBP + -0x80) != 0 && (iVar3 = FUN_1808c2ec0(), iVar3 != 0))))
    goto LAB_180852a9a;
  }
  puVar11 = puVar11 + 2;
  goto LAB_18085243e;
LAB_180852518:
  cVar1 = FUN_180853040(unaff_R15 + 0x10,unaff_R15[8] + 0x80);
  uVar23 = extraout_XMM0_Qa_01;
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_180853040(unaff_R15 + 0x12,unaff_R15[8] + 0x90), uVar23 = extraout_XMM0_Qa_02,
     cVar1 == '\0')) {
    iVar3 = FUN_18084ead0(uVar23,0);
    if (iVar3 != 0) goto LAB_180852a9a;
    uVar9 = 0;
    in_stack_00000070 = (uint64_t *)0x0;
    _iStack0000000000000078 = 0;
    uVar13 = uVar9;
    uVar14 = uVar9;
    if (0 < *(int *)(unaff_R15 + 0x11)) {
      *(uint64_t *)(unaff_RBP + -0x68) = 0;
      uVar18 = uVar9;
      uVar22 = uVar9;
      do {
        iVar17 = (int)uVar14;
        iVar3 = FUN_18073cdf0(unaff_R15[0xf],
                              *(uint64_t *)(*(int64_t *)(unaff_R15[0x10] + uVar9) + 0x30));
        if (iVar3 != 0) goto LAB_180852943;
        iVar8 = (int)uVar22 + 1;
        *(uint64_t *)(unaff_RBP + -0x70) = unaff_R15[0x10];
        iVar3 = iVar17;
        if (iVar17 < 0) {
          iVar3 = -iVar17;
        }
        iVar15 = (int)uVar22;
        if (iVar3 < iVar8) {
          if (iVar17 < 0) {
            iVar17 = -iVar17;
          }
          iVar17 = (int)((float)iVar17 * 1.5);
          iVar3 = iVar8;
          if (iVar8 <= iVar17) {
            iVar3 = iVar17;
          }
          if (iVar3 < 8) {
            iVar17 = 8;
          }
          else if (iVar17 < iVar8) {
            iVar17 = iVar8;
          }
          iVar3 = FUN_180747f10(&stack0x00000070,iVar17);
          if (iVar3 != 0) goto LAB_180852943;
          uVar14 = _iStack0000000000000078 >> 0x20;
          puVar10 = in_stack_00000070;
          iVar15 = iStack0000000000000078;
        }
        iVar3 = (int)uVar18;
        uVar21 = iVar3 + 1;
        uVar18 = (uint64_t)uVar21;
        uVar16 = iVar15 + 1;
        uVar13 = (uint64_t)uVar16;
        uVar22 = (uint64_t)uVar16;
        _iStack0000000000000078 = CONCAT44(uStack000000000000007c,uVar16);
        uVar9 = *(int64_t *)(unaff_RBP + -0x68) + 8;
        puVar10[iVar15] = *(uint64_t *)(*(int64_t *)(unaff_RBP + -0x70) + (int64_t)iVar3 * 8);
        *(uint64_t *)(unaff_RBP + -0x68) = uVar9;
      } while ((int)uVar21 < *(int *)(unaff_R15 + 0x11));
    }
    uVar9 = 0;
    plVar12 = unaff_R15 + 0x10;
    uVar16 = *(uint *)((int64_t)unaff_R15 + 0x8c);
    if ((int)((uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f)) < 0) {
      if (*(int *)(unaff_R15 + 0x11) < 1) {
        if ((0 < (int)uVar16) && (*plVar12 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar12,&unknown_var_8432_ptr,0x100,1);
        }
        *plVar12 = 0;
        *(int32_t *)((int64_t)unaff_R15 + 0x8c) = 0;
        goto LAB_1808526bf;
      }
LAB_180852954:
      FUN_180744d60(&stack0x00000070);
      goto LAB_180852a9a;
    }
LAB_1808526bf:
    iVar3 = *(int *)(unaff_R15 + 0x11);
    if (iVar3 < 0) {
                    // WARNING: Subroutine does not return
      memset(*plVar12 + (int64_t)iVar3 * 8,0,(int64_t)-iVar3 << 3);
    }
    *(int32_t *)(unaff_R15 + 0x11) = 0;
    uVar18 = uVar9;
    if (0 < *(int *)(unaff_R15 + 0x13)) {
      do {
        iVar17 = (int)uVar14;
        iVar3 = FUN_18073cdf0(unaff_R15[0xf],
                              *(uint64_t *)(*(int64_t *)(unaff_R15[0x12] + uVar9) + 0x30));
        if (iVar3 != 0) goto LAB_180852943;
        iVar8 = (int)uVar13 + 1;
        *(uint64_t *)(unaff_RBP + -0x70) = unaff_R15[0x12];
        iVar3 = iVar17;
        if (iVar17 < 0) {
          iVar3 = -iVar17;
        }
        iVar15 = (int)uVar13;
        if (iVar3 < iVar8) {
          if (iVar17 < 0) {
            iVar17 = -iVar17;
          }
          iVar17 = (int)((float)iVar17 * 1.5);
          iVar3 = iVar8;
          if (iVar8 <= iVar17) {
            iVar3 = iVar17;
          }
          if (iVar3 < 8) {
            iVar17 = 8;
          }
          else if (iVar17 < iVar8) {
            iVar17 = iVar8;
          }
          iVar3 = FUN_180747f10(&stack0x00000070,iVar17);
          if (iVar3 != 0) goto LAB_180852943;
          uVar14 = _iStack0000000000000078 >> 0x20;
          puVar10 = in_stack_00000070;
          iVar15 = iStack0000000000000078;
        }
        uVar9 = uVar9 + 8;
        uVar16 = (int)uVar18 + 1;
        uVar13 = (uint64_t)(iVar15 + 1U);
        _iStack0000000000000078 = CONCAT44(uStack000000000000007c,iVar15 + 1U);
        puVar10[iVar15] =
             *(uint64_t *)(*(int64_t *)(unaff_RBP + -0x70) + (int64_t)(int)uVar18 * 8);
        uVar18 = (uint64_t)uVar16;
      } while ((int)uVar16 < *(int *)(unaff_R15 + 0x13));
    }
    plVar12 = unaff_R15 + 0x12;
    uVar16 = *(uint *)((int64_t)unaff_R15 + 0x9c);
    if ((int)((uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f)) < 0) {
      if (0 < *(int *)(unaff_R15 + 0x13)) goto LAB_180852954;
      if ((0 < (int)uVar16) && (*plVar12 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar12,&unknown_var_8432_ptr,0x100,1);
      }
      *plVar12 = 0;
      *(int32_t *)((int64_t)unaff_R15 + 0x9c) = 0;
    }
    iVar3 = *(int *)(unaff_R15 + 0x13);
    if (iVar3 < 0) {
                    // WARNING: Subroutine does not return
      memset(*plVar12 + (int64_t)iVar3 * 8,0,(int64_t)-iVar3 << 3);
    }
    *(int32_t *)(unaff_R15 + 0x13) = 0;
    iVar3 = FUN_18073c380(unaff_R15[0xf],0xfffffffe,unaff_RBP + -0x60);
    if ((((iVar3 == 0) &&
         (iVar3 = FUN_18073c5f0(unaff_R15[0xf],*(uint64_t *)(unaff_RBP + -0x60),unaff_RBP + -0x80)
         , iVar3 == 0)) &&
        (iVar3 = FUN_180851e40(extraout_XMM0_Qa_03,unaff_R15[8] + 0x80,unaff_R15[8] + 0xa0,
                               *(int *)(unaff_RBP + -0x80) + 1,unaff_R15 + 0x10), iVar3 == 0)) &&
       (iVar3 = FUN_180851e40(extraout_XMM0_Qa_04,unaff_R15[8] + 0x90,unaff_R15[8] + 0xb0,
                              *(int32_t *)(unaff_RBP + -0x80),plVar12), iVar3 == 0)) {
      iVar3 = iStack0000000000000078;
      iVar17 = 0;
      puVar10 = in_stack_00000070;
      uVar23 = extraout_XMM0_Qa_05;
      if (0 < iStack0000000000000078) {
        do {
          iVar8 = FUN_1808b4f00(*puVar10);
          if ((iVar8 != 0) || (iVar8 = FUN_1808b4c80(unaff_R15[7] + 0x388,*puVar10), iVar8 != 0))
          goto LAB_180852943;
          iVar17 = iVar17 + 1;
          puVar10 = puVar10 + 1;
          uVar23 = extraout_XMM0_Qa_06;
        } while (iVar17 < iVar3);
      }
      iVar3 = FUN_18084ead0(uVar23,CONCAT31((uint3)(*(uint *)(unaff_R15 + 0x18) >> 9),
                                            (char)(*(uint *)(unaff_R15 + 0x18) >> 1)) & 0xffffff01);
      if (iVar3 == 0) {
        FUN_180744d60(&stack0x00000070);
        goto LAB_180852980;
      }
    }
LAB_180852943:
    FUN_180744d60(&stack0x00000070);
    goto LAB_180852a9a;
  }
LAB_180852980:
  uVar14 = 0;
  iVar3 = FUN_18084e9e0();
  if (iVar3 != 0) goto LAB_180852a9a;
  uVar13 = uVar14;
  uVar9 = uVar14;
  uVar18 = uVar14;
  if (0 < *(int *)(unaff_R15 + 0x11)) {
    do {
      FUN_1808b5c90(*(uint64_t *)(unaff_R15[0x10] + uVar18),
                    *(int32_t *)(*(int64_t *)(unaff_R15[8] + 0xa0) + uVar9));
      uVar16 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar16;
      uVar9 = uVar9 + 4;
      uVar18 = uVar18 + 8;
    } while ((int)uVar16 < *(int *)(unaff_R15 + 0x11));
  }
  uVar13 = uVar14;
  uVar9 = uVar14;
  if (0 < *(int *)(unaff_R15 + 0x13)) {
    do {
      FUN_1808b5c90(*(uint64_t *)(unaff_R15[0x12] + uVar14),
                    *(int32_t *)(*(int64_t *)(unaff_R15[8] + 0xb0) + uVar13));
      uVar16 = (int)uVar9 + 1;
      uVar14 = uVar14 + 8;
      uVar13 = uVar13 + 4;
      uVar9 = (uint64_t)uVar16;
    } while ((int)uVar16 < *(int *)(unaff_R15 + 0x13));
  }
  unaff_RDI = *(uint64_t *)(unaff_RBP + -0x78);
LAB_180852a22:
  for (puVar10 = (uint64_t *)unaff_R15[0x10];
      ((uint64_t *)unaff_R15[0x10] <= puVar10 &&
      (puVar10 < (uint64_t *)unaff_R15[0x10] + *(int *)(unaff_R15 + 0x11))); puVar10 = puVar10 + 1
      ) {
    iVar3 = FUN_1808b50d0(*puVar10,unaff_RDI);
    if (iVar3 != 0) goto LAB_180852a9a;
  }
  puVar10 = (uint64_t *)unaff_R15[0x12];
  while ((((uint64_t *)unaff_R15[0x12] <= puVar10 &&
          (puVar10 < (uint64_t *)unaff_R15[0x12] + *(int *)(unaff_R15 + 0x13))) &&
         (iVar3 = FUN_1808b50d0(*puVar10,unaff_RDI), iVar3 == 0))) {
    puVar10 = puVar10 + 1;
  }
LAB_180852a9a:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1e8) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180852aaa(void)
void FUN_180852aaa(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1e8) ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_180852b00(int64_t *param_1,uint *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int32_t uStack_24;
  
  uVar6 = FUN_180851a40();
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  if ((int)param_1[1] == 0) {
    return 0x1c;
  }
  lVar9 = (int64_t)(int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
  piVar12 = (int *)(*param_1 + lVar9 * 4);
  iVar11 = *(int *)(*param_1 + lVar9 * 4);
  if (iVar11 != -1) {
    lVar9 = param_1[2];
    do {
      lVar7 = (int64_t)iVar11 * 0x20;
      if ((*(int64_t *)(lVar7 + lVar9) == *(int64_t *)param_2) &&
         (*(int64_t *)(lVar7 + 8 + lVar9) == *(int64_t *)(param_2 + 2))) {
        return 0x1c;
      }
      piVar12 = (int *)(lVar9 + 0x10 + lVar7);
      iVar11 = *piVar12;
    } while (iVar11 != -1);
  }
  iVar11 = (int)param_1[4];
  if (iVar11 == -1) {
    uVar6 = *param_3;
    iVar11 = (int)param_1[3];
    uVar1 = *(uint64_t *)param_2;
    uVar2 = *(uint64_t *)(param_2 + 2);
    iVar8 = iVar11 + 1;
    uVar10 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
    iVar3 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar10) - uVar10;
    if (iVar3 < iVar8) {
      iVar3 = (int)((float)iVar3 * 1.5);
      if (iVar8 <= iVar3) {
        iVar8 = iVar3;
      }
      if (iVar8 < 2) {
        iVar8 = 2;
      }
      uVar4 = FUN_1808532e0(param_1 + 2,iVar8);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    puVar5 = (uint64_t *)((int64_t)(int)param_1[3] * 0x20 + param_1[2]);
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5[2] = CONCAT44(uStack_24,0xffffffff);
    puVar5[3] = uVar6;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  }
  else {
    puVar5 = (uint64_t *)((int64_t)iVar11 * 0x20 + param_1[2]);
    *(int32_t *)(param_1 + 4) = *(int32_t *)(puVar5 + 2);
    *(int32_t *)(puVar5 + 2) = 0xffffffff;
    uVar6 = *(uint64_t *)(param_2 + 2);
    *puVar5 = *(uint64_t *)param_2;
    puVar5[1] = uVar6;
    puVar5[3] = *param_3;
  }
  *piVar12 = iVar11;
  *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
  return 0;
}



uint64_t FUN_180852bb0(int64_t *param_1,uint *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int32_t uStack_34;
  
  uVar5 = FUN_180851a40();
  if ((int)uVar5 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar9 = (int64_t)
            (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
    piVar13 = (int *)(*param_1 + lVar9 * 4);
    iVar3 = *(int *)(*param_1 + lVar9 * 4);
    if (iVar3 != -1) {
      lVar9 = param_1[2];
      do {
        lVar10 = (int64_t)iVar3 * 0x20;
        if ((*(int64_t *)(lVar10 + lVar9) == *(int64_t *)param_2) &&
           (*(int64_t *)(lVar10 + 8 + lVar9) == *(int64_t *)(param_2 + 2))) {
          return 0x1c;
        }
        piVar13 = (int *)(lVar9 + 0x10 + lVar10);
        iVar3 = *piVar13;
      } while (iVar3 != -1);
    }
    iVar3 = (int)param_1[4];
    if (iVar3 == -1) {
      uVar5 = *param_3;
      iVar3 = (int)param_1[3];
      uVar1 = *(uint64_t *)param_2;
      uVar2 = *(uint64_t *)(param_2 + 2);
      iVar8 = iVar3 + 1;
      uVar11 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      iVar4 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar11) - uVar11;
      if (iVar4 < iVar8) {
        iVar12 = (int)((float)iVar4 * 1.5);
        iVar4 = iVar8;
        if (iVar8 <= iVar12) {
          iVar4 = iVar12;
        }
        if (iVar4 < 2) {
          iVar12 = 2;
        }
        else if (iVar12 < iVar8) {
          iVar12 = iVar8;
        }
        uVar6 = FUN_1808532e0(param_1 + 2,iVar12);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      puVar7 = (uint64_t *)((int64_t)(int)param_1[3] * 0x20 + param_1[2]);
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = CONCAT44(uStack_34,0xffffffff);
      puVar7[3] = uVar5;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      puVar7 = (uint64_t *)((int64_t)iVar3 * 0x20 + param_1[2]);
      *(int32_t *)(param_1 + 4) = *(int32_t *)(puVar7 + 2);
      *(int32_t *)(puVar7 + 2) = 0xffffffff;
      uVar5 = *(uint64_t *)(param_2 + 2);
      *puVar7 = *(uint64_t *)param_2;
      puVar7[1] = uVar5;
      puVar7[3] = *param_3;
    }
    *piVar13 = iVar3;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_180852bd2(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  uint *unaff_RBX;
  int64_t *unaff_RSI;
  int *piVar12;
  uint64_t *unaff_R15;
  uint64_t in_stack_00000030;
  uint64_t uStack0000000000000038;
  
  if (in_EAX == 0) {
    return 0x1c;
  }
  lVar8 = (int64_t)(int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) & in_EAX - 1U);
  piVar12 = (int *)(*unaff_RSI + lVar8 * 4);
  iVar3 = *(int *)(*unaff_RSI + lVar8 * 4);
  if (iVar3 != -1) {
    lVar8 = unaff_RSI[2];
    do {
      lVar9 = (int64_t)iVar3 * 0x20;
      if ((*(int64_t *)(lVar9 + lVar8) == *(int64_t *)unaff_RBX) &&
         (*(int64_t *)(lVar9 + 8 + lVar8) == *(int64_t *)(unaff_RBX + 2))) {
        return 0x1c;
      }
      piVar12 = (int *)(lVar8 + 0x10 + lVar9);
      iVar3 = *piVar12;
    } while (iVar3 != -1);
  }
  iVar3 = (int)unaff_RSI[4];
  if (iVar3 == -1) {
    uStack0000000000000038 = *unaff_R15;
    iVar3 = (int)unaff_RSI[3];
    uVar1 = *(uint64_t *)unaff_RBX;
    uVar2 = *(uint64_t *)(unaff_RBX + 2);
    iVar7 = iVar3 + 1;
    uVar10 = (int)*(uint *)((int64_t)unaff_RSI + 0x1c) >> 0x1f;
    iVar4 = (*(uint *)((int64_t)unaff_RSI + 0x1c) ^ uVar10) - uVar10;
    if (iVar4 < iVar7) {
      iVar11 = (int)((float)iVar4 * 1.5);
      iVar4 = iVar7;
      if (iVar7 <= iVar11) {
        iVar4 = iVar11;
      }
      if (iVar4 < 2) {
        iVar11 = 2;
      }
      else if (iVar11 < iVar7) {
        iVar11 = iVar7;
      }
      uVar5 = FUN_1808532e0(unaff_RSI + 2,iVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = (uint64_t *)((int64_t)(int)unaff_RSI[3] * 0x20 + unaff_RSI[2]);
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    puVar6[2] = CONCAT44(in_stack_00000030._4_4_,0xffffffff);
    puVar6[3] = uStack0000000000000038;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
  }
  else {
    puVar6 = (uint64_t *)((int64_t)iVar3 * 0x20 + unaff_RSI[2]);
    *(int32_t *)(unaff_RSI + 4) = *(int32_t *)(puVar6 + 2);
    *(int32_t *)(puVar6 + 2) = 0xffffffff;
    uVar1 = *(uint64_t *)(unaff_RBX + 2);
    *puVar6 = *(uint64_t *)unaff_RBX;
    puVar6[1] = uVar1;
    puVar6[3] = *unaff_R15;
  }
  *piVar12 = iVar3;
  *(int *)((int64_t)unaff_RSI + 0x24) = *(int *)((int64_t)unaff_RSI + 0x24) + 1;
  return 0;
}





