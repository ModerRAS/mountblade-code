#include "TaleWorlds.Native.Split.h"

// 03_rendering_part656.c - 5 个函数

// 函数: void FUN_18063f285(int param_1)
void FUN_18063f285(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *unaff_RBX;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong unaff_R12;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_XMM12_Da;
  float fVar26;
  float fVar27;
  int iStackX_24;
  longlong lStack0000000000000030;
  int in_stack_00000040;
  longlong lStack0000000000000060;
  
  iVar7 = param_1 + -2;
  lVar17 = (longlong)param_1;
  lStack0000000000000060 = 3;
  lVar15 = lVar17 + -3;
  uVar16 = unaff_R12;
  do {
    lVar1 = *unaff_RBX;
    iVar2 = (int)uVar16;
    uVar11 = iVar2 + 1;
    if ((int)uVar11 < iVar7) {
      iVar3 = param_1 + -1;
      iVar5 = iVar2 + 2;
      lVar9 = lStack0000000000000060;
      lVar12 = lVar15;
      uVar20 = uVar11;
      uVar16 = unaff_R12;
      do {
        uVar13 = uVar16 + 8;
        if (iVar5 < iVar3) {
          lVar8 = uVar16 + 0x10;
          lVar4 = lVar9;
          iVar10 = iVar5;
          lStack0000000000000030 = lVar12;
          iVar19 = iVar5;
          do {
            iVar18 = iVar19 + 1;
            if (lVar4 < lVar17) {
              lVar6 = lVar4;
              iVar14 = iVar18;
              if (3 < lStack0000000000000030) {
                iVar19 = iVar19 + 3;
                do {
                  fVar23 = *(float *)(lVar8 + 4 + lVar1);
                  fVar24 = *(float *)(unaff_R12 + lVar1);
                  fVar22 = *(float *)(lVar8 + lVar1);
                  fVar21 = *(float *)(unaff_R12 + 4 + lVar1);
                  fVar25 = *(float *)(uVar13 + lVar1);
                  fVar26 = *(float *)(uVar16 + 0xc + lVar1);
                  fVar27 = *(float *)(lVar1 + lVar6 * 8);
                  fVar27 = ABS((((fVar26 * fVar24 + fVar25 * fVar23 + fVar22 * fVar21) -
                                fVar25 * fVar21) - fVar26 * fVar22) - fVar24 * fVar23) +
                           ABS((((fVar22 * *(float *)(lVar1 + 4 + lVar6 * 8) + fVar27 * fVar21 +
                                 fVar24 * fVar23) - fVar23 * fVar27) -
                               fVar24 * *(float *)(lVar1 + 4 + lVar6 * 8)) - fVar22 * fVar21);
                  if (unaff_XMM12_Da < fVar27) {
                    *(int *)(unaff_RBX + 4) = iVar2;
                    *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                    *(int *)(unaff_RBX + 5) = iVar10;
                    *(int *)((longlong)unaff_RBX + 0x2c) = iVar14;
                    fVar21 = *(float *)(unaff_R12 + 4 + lVar1);
                    fVar22 = *(float *)(lVar8 + lVar1);
                    fVar23 = *(float *)(lVar8 + 4 + lVar1);
                    fVar24 = *(float *)(unaff_R12 + lVar1);
                    fVar25 = *(float *)(uVar13 + lVar1);
                    fVar26 = *(float *)(uVar16 + 0xc + lVar1);
                    unaff_XMM12_Da = fVar27;
                  }
                  fVar27 = ABS((((fVar22 * *(float *)(lVar1 + 0xc + lVar6 * 8) +
                                  fVar21 * *(float *)(lVar1 + 8 + lVar6 * 8) + fVar24 * fVar23) -
                                fVar23 * *(float *)(lVar1 + 8 + lVar6 * 8)) -
                               fVar24 * *(float *)(lVar1 + 0xc + lVar6 * 8)) - fVar22 * fVar21) +
                           ABS((((fVar26 * fVar24 + fVar25 * fVar23 + fVar22 * fVar21) -
                                fVar25 * fVar21) - fVar26 * fVar22) - fVar24 * fVar23);
                  if (unaff_XMM12_Da < fVar27) {
                    *(int *)(unaff_RBX + 4) = iVar2;
                    *(int *)((longlong)unaff_RBX + 0x2c) = iVar19 + -1;
                    *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                    *(int *)(unaff_RBX + 5) = iVar10;
                    fVar21 = *(float *)(unaff_R12 + 4 + lVar1);
                    fVar22 = *(float *)(lVar8 + lVar1);
                    fVar23 = *(float *)(lVar8 + 4 + lVar1);
                    fVar24 = *(float *)(unaff_R12 + lVar1);
                    fVar25 = *(float *)(uVar13 + lVar1);
                    fVar26 = *(float *)(uVar16 + 0xc + lVar1);
                    unaff_XMM12_Da = fVar27;
                  }
                  fVar27 = ABS((((fVar22 * *(float *)(lVar1 + 0x14 + lVar6 * 8) +
                                  fVar21 * *(float *)(lVar1 + 0x10 + lVar6 * 8) + fVar24 * fVar23) -
                                fVar23 * *(float *)(lVar1 + 0x10 + lVar6 * 8)) -
                               fVar24 * *(float *)(lVar1 + 0x14 + lVar6 * 8)) - fVar22 * fVar21) +
                           ABS((((fVar26 * fVar24 + fVar25 * fVar23 + fVar22 * fVar21) -
                                fVar25 * fVar21) - fVar26 * fVar22) - fVar24 * fVar23);
                  if (unaff_XMM12_Da < fVar27) {
                    *(int *)(unaff_RBX + 4) = iVar2;
                    *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                    *(int *)(unaff_RBX + 5) = iVar10;
                    *(int *)((longlong)unaff_RBX + 0x2c) = iVar19;
                    fVar21 = *(float *)(unaff_R12 + 4 + lVar1);
                    fVar22 = *(float *)(lVar8 + lVar1);
                    fVar23 = *(float *)(lVar8 + 4 + lVar1);
                    fVar24 = *(float *)(unaff_R12 + lVar1);
                    fVar25 = *(float *)(uVar13 + lVar1);
                    fVar26 = *(float *)(uVar16 + 0xc + lVar1);
                    unaff_XMM12_Da = fVar27;
                  }
                  fVar27 = ABS((((fVar21 * *(float *)(lVar1 + 0x18 + lVar6 * 8) +
                                  fVar22 * *(float *)(lVar1 + 0x1c + lVar6 * 8) + fVar24 * fVar23) -
                                fVar23 * *(float *)(lVar1 + 0x18 + lVar6 * 8)) -
                               fVar24 * *(float *)(lVar1 + 0x1c + lVar6 * 8)) - fVar22 * fVar21) +
                           ABS((((fVar26 * fVar24 + fVar25 * fVar23 + fVar22 * fVar21) -
                                fVar25 * fVar21) - fVar26 * fVar22) - fVar24 * fVar23);
                  if (unaff_XMM12_Da < fVar27) {
                    *(int *)(unaff_RBX + 4) = iVar2;
                    *(int *)((longlong)unaff_RBX + 0x2c) = iVar19 + 1;
                    *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                    *(int *)(unaff_RBX + 5) = iVar10;
                    unaff_XMM12_Da = fVar27;
                  }
                  iVar14 = iVar14 + 4;
                  iVar19 = iVar19 + 4;
                  lVar6 = lVar6 + 4;
                } while (lVar6 < lVar17 + -3);
              }
              for (; lVar6 < lVar17; lVar6 = lVar6 + 1) {
                fVar27 = *(float *)(lVar8 + 4 + lVar1);
                fVar21 = *(float *)(unaff_R12 + lVar1);
                fVar22 = *(float *)(lVar8 + lVar1);
                fVar23 = *(float *)(unaff_R12 + 4 + lVar1);
                fVar24 = *(float *)(uVar16 + 0xc + lVar1);
                fVar25 = *(float *)(lVar1 + lVar6 * 8);
                fVar27 = ABS((((fVar24 * fVar21 + *(float *)(uVar13 + lVar1) * fVar27 +
                               fVar22 * fVar23) - *(float *)(uVar13 + lVar1) * fVar23) -
                             fVar24 * fVar22) - fVar21 * fVar27) +
                         ABS((((fVar22 * *(float *)(lVar1 + 4 + lVar6 * 8) + fVar25 * fVar23 +
                               fVar21 * fVar27) - fVar27 * fVar25) -
                             fVar21 * *(float *)(lVar1 + 4 + lVar6 * 8)) - fVar22 * fVar23);
                if (unaff_XMM12_Da < fVar27) {
                  *(int *)(unaff_RBX + 4) = iVar2;
                  *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                  *(int *)(unaff_RBX + 5) = iVar10;
                  *(int *)((longlong)unaff_RBX + 0x2c) = iVar14;
                  unaff_XMM12_Da = fVar27;
                }
                iVar14 = iVar14 + 1;
              }
            }
            lStack0000000000000030 = lStack0000000000000030 + -1;
            lVar4 = lVar4 + 1;
            iVar10 = iVar10 + 1;
            lVar8 = lVar8 + 8;
            iVar19 = iVar18;
          } while (iVar10 < iVar3);
        }
        iVar5 = iVar5 + 1;
        lVar12 = lVar12 + -1;
        lVar9 = lVar9 + 1;
        uVar20 = uVar20 + 1;
        uVar16 = uVar13;
        param_1 = in_stack_00000040;
      } while ((int)uVar20 < iVar7);
    }
    lVar15 = lVar15 + -1;
    lStack0000000000000060 = lStack0000000000000060 + 1;
    unaff_R12 = unaff_R12 + 8;
    uVar16 = (ulonglong)uVar11;
  } while ((int)uVar11 < iStackX_24);
  return;
}





// 函数: void FUN_18063f927(void)
void FUN_18063f927(void)

{
  longlong unaff_RBX;
  
  *(undefined8 *)(unaff_RBX + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_RBX + 0x28) = 0xffffffffffffffff;
  return;
}





// 函数: void FUN_18063f960(longlong *param_1,longlong *param_2,int param_3)
void FUN_18063f960(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  longlong lStack_128;
  longlong lStack_f8;
  
  param_1[1] = *param_1;
  FUN_18033a920(param_1,(longlong)(param_3 * 2));
  uVar15 = 0;
  fVar30 = 0.0;
  uVar8 = uVar15;
  uVar13 = uVar15;
  uVar18 = uVar15;
  if (0 < param_3) {
    do {
      uVar17 = (uint)uVar18;
      if (1 < (longlong)uVar8) {
        lVar3 = *param_1 + -4 + uVar8 * 8;
        fVar31 = *(float *)(*param_1 + -4 + uVar8 * 8);
        do {
          uVar17 = (uint)uVar18;
          fVar27 = *(float *)(lVar3 + -8);
          if (0.0 < (*(float *)(lVar3 + -4) - *(float *)(lVar3 + -0xc)) *
                    (*(float *)(*param_2 + 4 + uVar13 * 8) - fVar27) -
                    (fVar31 - fVar27) *
                    (*(float *)(*param_2 + uVar13 * 8) - *(float *)(lVar3 + -0xc))) break;
          uVar17 = uVar17 - 1;
          uVar18 = (ulonglong)uVar17;
          uVar8 = uVar8 - 1;
          lVar3 = lVar3 + -8;
          fVar31 = fVar27;
        } while (1 < (longlong)uVar8);
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar14 = uVar13 + 1;
      *(undefined8 *)(*param_1 + uVar8 * 8) = *(undefined8 *)(*param_2 + uVar13 * 8);
      uVar8 = uVar8 + 1;
      uVar13 = uVar14;
    } while ((longlong)uVar14 < (longlong)param_3);
  }
  uVar17 = (uint)uVar18;
  iVar2 = uVar17 + 1;
  lVar3 = (longlong)(param_3 + -2);
  if (-1 < param_3 + -2) {
    lVar9 = (longlong)(int)uVar17;
    do {
      uVar17 = (uint)uVar18;
      if (iVar2 <= lVar9) {
        lVar4 = *param_1 + -4 + lVar9 * 8;
        fVar31 = *(float *)(*param_1 + -4 + lVar9 * 8);
        do {
          uVar17 = (uint)uVar18;
          fVar27 = *(float *)(lVar4 + -8);
          if (0.0 < (*(float *)(lVar4 + -4) - *(float *)(lVar4 + -0xc)) *
                    (*(float *)(*param_2 + 4 + lVar3 * 8) - fVar27) -
                    (fVar31 - fVar27) *
                    (*(float *)(*param_2 + lVar3 * 8) - *(float *)(lVar4 + -0xc))) break;
          uVar17 = uVar17 - 1;
          uVar18 = (ulonglong)uVar17;
          lVar9 = lVar9 + -1;
          lVar4 = lVar4 + -8;
          fVar31 = fVar27;
        } while (iVar2 <= lVar9);
      }
      uVar17 = uVar17 + 1;
      uVar18 = (ulonglong)uVar17;
      *(undefined8 *)(*param_1 + lVar9 * 8) = *(undefined8 *)(*param_2 + lVar3 * 8);
      lVar9 = lVar9 + 1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  FUN_18033a920(param_1,(longlong)(int)(uVar17 - 1));
  FUN_180398ab0(param_1);
  param_1[6] = 0x7f7fffff7f7fffff;
  param_1[7] = -0x80000000800001;
  lVar3 = param_1[1];
  lVar9 = *param_1;
  if (lVar3 - lVar9 >> 3 != 0) {
    uVar8 = uVar15;
    fVar31 = *(float *)(param_1 + 6);
    fVar27 = *(float *)((longlong)param_1 + 0x34);
    fVar28 = *(float *)(param_1 + 7);
    fVar29 = *(float *)((longlong)param_1 + 0x3c);
    do {
      uVar17 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar17;
      fVar23 = *(float *)(uVar8 + *param_1);
      if (fVar31 <= *(float *)(uVar8 + *param_1)) {
        fVar23 = fVar31;
      }
      *(float *)(param_1 + 6) = fVar23;
      fVar24 = *(float *)(uVar8 + 4 + *param_1);
      if (fVar27 <= fVar24) {
        fVar24 = fVar27;
      }
      *(float *)((longlong)param_1 + 0x34) = fVar24;
      fVar25 = *(float *)(uVar8 + *param_1);
      if (*(float *)(uVar8 + *param_1) <= fVar28) {
        fVar25 = fVar28;
      }
      *(float *)(param_1 + 7) = fVar25;
      fVar26 = *(float *)(uVar8 + 4 + *param_1);
      if (fVar26 <= fVar29) {
        fVar26 = fVar29;
      }
      *(float *)((longlong)param_1 + 0x3c) = fVar26;
      lVar3 = param_1[1];
      lVar9 = *param_1;
      uVar8 = uVar8 + 8;
      fVar31 = fVar23;
      fVar27 = fVar24;
      fVar28 = fVar25;
      fVar29 = fVar26;
    } while ((ulonglong)(longlong)(int)uVar17 < (ulonglong)(lVar3 - lVar9 >> 3));
  }
  uVar8 = 0;
  iVar2 = (int)(lVar3 - lVar9 >> 3);
  if (iVar2 < 7) {
    param_1[4] = -1;
    param_1[5] = -1;
  }
  else if (0 < iVar2 + -3) {
    lVar9 = (longlong)iVar2;
    lStack_f8 = 3;
    lVar3 = lVar9 + -3;
    uVar13 = uVar8;
    do {
      lVar4 = *param_1;
      iVar1 = (int)uVar13;
      uVar17 = iVar1 + 1;
      if ((int)uVar17 < iVar2 + -2) {
        iVar6 = iVar1 + 2;
        lVar11 = lStack_f8;
        lVar16 = lVar3;
        uVar22 = uVar17;
        uVar13 = uVar8;
        do {
          uVar18 = uVar13 + 8;
          if (iVar6 < iVar2 + -1) {
            lVar10 = uVar13 + 0x10;
            lVar5 = lVar11;
            iVar12 = iVar6;
            lStack_128 = lVar16;
            iVar21 = iVar6;
            do {
              iVar20 = iVar21 + 1;
              if (lVar5 < lVar9) {
                lVar7 = lVar5;
                iVar19 = iVar20;
                if (3 < lStack_128) {
                  iVar21 = iVar21 + 3;
                  do {
                    fVar29 = *(float *)(lVar10 + 4 + lVar4);
                    fVar23 = *(float *)(uVar8 + lVar4);
                    fVar28 = *(float *)(lVar10 + lVar4);
                    fVar27 = *(float *)(uVar8 + 4 + lVar4);
                    fVar24 = *(float *)(uVar18 + lVar4);
                    fVar25 = *(float *)(uVar13 + 0xc + lVar4);
                    fVar31 = *(float *)(lVar4 + lVar7 * 8);
                    fVar31 = ABS((((fVar25 * fVar23 + fVar24 * fVar29 + fVar28 * fVar27) -
                                  fVar24 * fVar27) - fVar25 * fVar28) - fVar23 * fVar29) +
                             ABS((((fVar28 * *(float *)(lVar4 + 4 + lVar7 * 8) + fVar31 * fVar27 +
                                   fVar23 * fVar29) - fVar29 * fVar31) -
                                 fVar23 * *(float *)(lVar4 + 4 + lVar7 * 8)) - fVar28 * fVar27);
                    if (fVar30 < fVar31) {
                      *(int *)(param_1 + 4) = iVar1;
                      *(uint *)((longlong)param_1 + 0x24) = uVar22;
                      *(int *)(param_1 + 5) = iVar12;
                      *(int *)((longlong)param_1 + 0x2c) = iVar19;
                      fVar27 = *(float *)(uVar8 + 4 + lVar4);
                      fVar28 = *(float *)(lVar10 + lVar4);
                      fVar29 = *(float *)(lVar10 + 4 + lVar4);
                      fVar23 = *(float *)(uVar8 + lVar4);
                      fVar24 = *(float *)(uVar18 + lVar4);
                      fVar25 = *(float *)(uVar13 + 0xc + lVar4);
                      fVar30 = fVar31;
                    }
                    fVar31 = ABS((((fVar28 * *(float *)(lVar4 + 0xc + lVar7 * 8) +
                                    fVar27 * *(float *)(lVar4 + 8 + lVar7 * 8) + fVar23 * fVar29) -
                                  fVar29 * *(float *)(lVar4 + 8 + lVar7 * 8)) -
                                 fVar23 * *(float *)(lVar4 + 0xc + lVar7 * 8)) - fVar28 * fVar27) +
                             ABS((((fVar25 * fVar23 + fVar24 * fVar29 + fVar28 * fVar27) -
                                  fVar24 * fVar27) - fVar25 * fVar28) - fVar23 * fVar29);
                    if (fVar30 < fVar31) {
                      *(int *)(param_1 + 4) = iVar1;
                      *(int *)((longlong)param_1 + 0x2c) = iVar21 + -1;
                      *(uint *)((longlong)param_1 + 0x24) = uVar22;
                      *(int *)(param_1 + 5) = iVar12;
                      fVar27 = *(float *)(uVar8 + 4 + lVar4);
                      fVar28 = *(float *)(lVar10 + lVar4);
                      fVar29 = *(float *)(lVar10 + 4 + lVar4);
                      fVar23 = *(float *)(uVar8 + lVar4);
                      fVar24 = *(float *)(uVar18 + lVar4);
                      fVar25 = *(float *)(uVar13 + 0xc + lVar4);
                      fVar30 = fVar31;
                    }
                    fVar31 = ABS((((fVar25 * fVar23 + fVar24 * fVar29 + fVar28 * fVar27) -
                                  fVar24 * fVar27) - fVar25 * fVar28) - fVar23 * fVar29) +
                             ABS((((fVar28 * *(float *)(lVar4 + 0x14 + lVar7 * 8) +
                                    fVar27 * *(float *)(lVar4 + 0x10 + lVar7 * 8) + fVar23 * fVar29)
                                  - fVar29 * *(float *)(lVar4 + 0x10 + lVar7 * 8)) -
                                 fVar23 * *(float *)(lVar4 + 0x14 + lVar7 * 8)) - fVar28 * fVar27);
                    if (fVar30 < fVar31) {
                      *(int *)(param_1 + 4) = iVar1;
                      *(uint *)((longlong)param_1 + 0x24) = uVar22;
                      *(int *)(param_1 + 5) = iVar12;
                      *(int *)((longlong)param_1 + 0x2c) = iVar21;
                      fVar27 = *(float *)(uVar8 + 4 + lVar4);
                      fVar28 = *(float *)(lVar10 + lVar4);
                      fVar29 = *(float *)(lVar10 + 4 + lVar4);
                      fVar23 = *(float *)(uVar8 + lVar4);
                      fVar24 = *(float *)(uVar18 + lVar4);
                      fVar25 = *(float *)(uVar13 + 0xc + lVar4);
                      fVar30 = fVar31;
                    }
                    fVar31 = ABS((((fVar25 * fVar23 + fVar24 * fVar29 + fVar28 * fVar27) -
                                  fVar24 * fVar27) - fVar25 * fVar28) - fVar23 * fVar29) +
                             ABS((((fVar28 * *(float *)(lVar4 + 0x1c + lVar7 * 8) +
                                    fVar27 * *(float *)(lVar4 + 0x18 + lVar7 * 8) + fVar23 * fVar29)
                                  - fVar29 * *(float *)(lVar4 + 0x18 + lVar7 * 8)) -
                                 fVar23 * *(float *)(lVar4 + 0x1c + lVar7 * 8)) - fVar28 * fVar27);
                    if (fVar30 < fVar31) {
                      *(int *)(param_1 + 4) = iVar1;
                      *(int *)((longlong)param_1 + 0x2c) = iVar21 + 1;
                      *(uint *)((longlong)param_1 + 0x24) = uVar22;
                      *(int *)(param_1 + 5) = iVar12;
                      fVar30 = fVar31;
                    }
                    iVar19 = iVar19 + 4;
                    iVar21 = iVar21 + 4;
                    lVar7 = lVar7 + 4;
                  } while (lVar7 < lVar9 + -3);
                }
                for (; lVar7 < lVar9; lVar7 = lVar7 + 1) {
                  fVar31 = *(float *)(lVar10 + 4 + lVar4);
                  fVar27 = *(float *)(uVar8 + lVar4);
                  fVar28 = *(float *)(lVar10 + lVar4);
                  fVar29 = *(float *)(uVar8 + 4 + lVar4);
                  fVar23 = *(float *)(uVar13 + 0xc + lVar4);
                  fVar24 = *(float *)(lVar4 + lVar7 * 8);
                  fVar31 = ABS((((fVar23 * fVar27 + *(float *)(uVar18 + lVar4) * fVar31 +
                                 fVar28 * fVar29) - *(float *)(uVar18 + lVar4) * fVar29) -
                               fVar23 * fVar28) - fVar27 * fVar31) +
                           ABS((((fVar28 * *(float *)(lVar4 + 4 + lVar7 * 8) + fVar24 * fVar29 +
                                 fVar27 * fVar31) - fVar31 * fVar24) -
                               fVar27 * *(float *)(lVar4 + 4 + lVar7 * 8)) - fVar28 * fVar29);
                  if (fVar30 < fVar31) {
                    *(int *)(param_1 + 4) = iVar1;
                    *(uint *)((longlong)param_1 + 0x24) = uVar22;
                    *(int *)(param_1 + 5) = iVar12;
                    *(int *)((longlong)param_1 + 0x2c) = iVar19;
                    fVar30 = fVar31;
                  }
                  iVar19 = iVar19 + 1;
                }
              }
              lStack_128 = lStack_128 + -1;
              lVar5 = lVar5 + 1;
              iVar12 = iVar12 + 1;
              lVar10 = lVar10 + 8;
              iVar21 = iVar20;
            } while (iVar12 < iVar2 + -1);
          }
          iVar6 = iVar6 + 1;
          lVar16 = lVar16 + -1;
          lVar11 = lVar11 + 1;
          uVar22 = uVar22 + 1;
          uVar13 = uVar18;
        } while ((int)uVar22 < iVar2 + -2);
      }
      lVar3 = lVar3 + -1;
      lStack_f8 = lStack_f8 + 1;
      uVar8 = uVar8 + 8;
      uVar13 = (ulonglong)uVar17;
    } while ((int)uVar17 < iVar2 + -3);
  }
  return;
}





// 函数: void FUN_18063fc35(int param_1)
void FUN_18063fc35(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *unaff_RBX;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong unaff_R12;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_XMM12_Da;
  float fVar26;
  float fVar27;
  int iStackX_24;
  longlong lStack0000000000000030;
  int in_stack_00000040;
  longlong lStack0000000000000060;
  
  iVar7 = param_1 + -2;
  lVar17 = (longlong)param_1;
  lStack0000000000000060 = 3;
  lVar15 = lVar17 + -3;
  uVar16 = unaff_R12;
  do {
    lVar1 = *unaff_RBX;
    iVar2 = (int)uVar16;
    uVar11 = iVar2 + 1;
    if ((int)uVar11 < iVar7) {
      iVar3 = param_1 + -1;
      iVar5 = iVar2 + 2;
      lVar9 = lStack0000000000000060;
      lVar12 = lVar15;
      uVar20 = uVar11;
      uVar16 = unaff_R12;
      do {
        uVar13 = uVar16 + 8;
        if (iVar5 < iVar3) {
          lVar8 = uVar16 + 0x10;
          lVar4 = lVar9;
          iVar10 = iVar5;
          lStack0000000000000030 = lVar12;
          iVar19 = iVar5;
          do {
            iVar18 = iVar19 + 1;
            if (lVar4 < lVar17) {
              lVar6 = lVar4;
              iVar14 = iVar18;
              if (3 < lStack0000000000000030) {
                iVar19 = iVar19 + 3;
                do {
                  fVar23 = *(float *)(lVar8 + 4 + lVar1);
                  fVar24 = *(float *)(unaff_R12 + lVar1);
                  fVar21 = *(float *)(lVar8 + lVar1);
                  fVar22 = *(float *)(unaff_R12 + 4 + lVar1);
                  fVar25 = *(float *)(uVar13 + lVar1);
                  fVar26 = *(float *)(uVar16 + 0xc + lVar1);
                  fVar27 = *(float *)(lVar1 + lVar6 * 8);
                  fVar27 = ABS((((fVar26 * fVar24 + fVar25 * fVar23 + fVar21 * fVar22) -
                                fVar25 * fVar22) - fVar26 * fVar21) - fVar24 * fVar23) +
                           ABS((((fVar21 * *(float *)(lVar1 + 4 + lVar6 * 8) + fVar27 * fVar22 +
                                 fVar24 * fVar23) - fVar23 * fVar27) -
                               fVar24 * *(float *)(lVar1 + 4 + lVar6 * 8)) - fVar21 * fVar22);
                  if (unaff_XMM12_Da < fVar27) {
                    *(int *)(unaff_RBX + 4) = iVar2;
                    *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                    *(int *)(unaff_RBX + 5) = iVar10;
                    *(int *)((longlong)unaff_RBX + 0x2c) = iVar14;
                    fVar22 = *(float *)(unaff_R12 + 4 + lVar1);
                    fVar21 = *(float *)(lVar8 + lVar1);
                    fVar23 = *(float *)(lVar8 + 4 + lVar1);
                    fVar24 = *(float *)(unaff_R12 + lVar1);
                    fVar25 = *(float *)(uVar13 + lVar1);
                    fVar26 = *(float *)(uVar16 + 0xc + lVar1);
                    unaff_XMM12_Da = fVar27;
                  }
                  fVar27 = ABS((((fVar21 * *(float *)(lVar1 + 0xc + lVar6 * 8) +
                                  fVar22 * *(float *)(lVar1 + 8 + lVar6 * 8) + fVar24 * fVar23) -
                                fVar23 * *(float *)(lVar1 + 8 + lVar6 * 8)) -
                               fVar24 * *(float *)(lVar1 + 0xc + lVar6 * 8)) - fVar21 * fVar22) +
                           ABS((((fVar26 * fVar24 + fVar25 * fVar23 + fVar21 * fVar22) -
                                fVar25 * fVar22) - fVar26 * fVar21) - fVar24 * fVar23);
                  if (unaff_XMM12_Da < fVar27) {
                    *(int *)(unaff_RBX + 4) = iVar2;
                    *(int *)((longlong)unaff_RBX + 0x2c) = iVar19 + -1;
                    *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                    *(int *)(unaff_RBX + 5) = iVar10;
                    fVar22 = *(float *)(unaff_R12 + 4 + lVar1);
                    fVar21 = *(float *)(lVar8 + lVar1);
                    fVar23 = *(float *)(lVar8 + 4 + lVar1);
                    fVar24 = *(float *)(unaff_R12 + lVar1);
                    fVar25 = *(float *)(uVar13 + lVar1);
                    fVar26 = *(float *)(uVar16 + 0xc + lVar1);
                    unaff_XMM12_Da = fVar27;
                  }
                  fVar27 = ABS((((fVar26 * fVar24 + fVar25 * fVar23 + fVar21 * fVar22) -
                                fVar25 * fVar22) - fVar26 * fVar21) - fVar24 * fVar23) +
                           ABS((((fVar21 * *(float *)(lVar1 + 0x14 + lVar6 * 8) +
                                  fVar22 * *(float *)(lVar1 + 0x10 + lVar6 * 8) + fVar24 * fVar23) -
                                fVar23 * *(float *)(lVar1 + 0x10 + lVar6 * 8)) -
                               fVar24 * *(float *)(lVar1 + 0x14 + lVar6 * 8)) - fVar21 * fVar22);
                  if (unaff_XMM12_Da < fVar27) {
                    *(int *)(unaff_RBX + 4) = iVar2;
                    *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                    *(int *)(unaff_RBX + 5) = iVar10;
                    *(int *)((longlong)unaff_RBX + 0x2c) = iVar19;
                    fVar22 = *(float *)(unaff_R12 + 4 + lVar1);
                    fVar21 = *(float *)(lVar8 + lVar1);
                    fVar23 = *(float *)(lVar8 + 4 + lVar1);
                    fVar24 = *(float *)(unaff_R12 + lVar1);
                    fVar25 = *(float *)(uVar13 + lVar1);
                    fVar26 = *(float *)(uVar16 + 0xc + lVar1);
                    unaff_XMM12_Da = fVar27;
                  }
                  fVar27 = ABS((((fVar26 * fVar24 + fVar25 * fVar23 + fVar21 * fVar22) -
                                fVar25 * fVar22) - fVar26 * fVar21) - fVar24 * fVar23) +
                           ABS((((fVar21 * *(float *)(lVar1 + 0x1c + lVar6 * 8) +
                                  fVar22 * *(float *)(lVar1 + 0x18 + lVar6 * 8) + fVar24 * fVar23) -
                                fVar23 * *(float *)(lVar1 + 0x18 + lVar6 * 8)) -
                               fVar24 * *(float *)(lVar1 + 0x1c + lVar6 * 8)) - fVar21 * fVar22);
                  if (unaff_XMM12_Da < fVar27) {
                    *(int *)(unaff_RBX + 4) = iVar2;
                    *(int *)((longlong)unaff_RBX + 0x2c) = iVar19 + 1;
                    *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                    *(int *)(unaff_RBX + 5) = iVar10;
                    unaff_XMM12_Da = fVar27;
                  }
                  iVar14 = iVar14 + 4;
                  iVar19 = iVar19 + 4;
                  lVar6 = lVar6 + 4;
                } while (lVar6 < lVar17 + -3);
              }
              for (; lVar6 < lVar17; lVar6 = lVar6 + 1) {
                fVar27 = *(float *)(lVar8 + 4 + lVar1);
                fVar22 = *(float *)(unaff_R12 + lVar1);
                fVar21 = *(float *)(lVar8 + lVar1);
                fVar23 = *(float *)(unaff_R12 + 4 + lVar1);
                fVar24 = *(float *)(uVar16 + 0xc + lVar1);
                fVar25 = *(float *)(lVar1 + lVar6 * 8);
                fVar27 = ABS((((fVar24 * fVar22 + *(float *)(uVar13 + lVar1) * fVar27 +
                               fVar21 * fVar23) - *(float *)(uVar13 + lVar1) * fVar23) -
                             fVar24 * fVar21) - fVar22 * fVar27) +
                         ABS((((fVar21 * *(float *)(lVar1 + 4 + lVar6 * 8) + fVar25 * fVar23 +
                               fVar22 * fVar27) - fVar27 * fVar25) -
                             fVar22 * *(float *)(lVar1 + 4 + lVar6 * 8)) - fVar21 * fVar23);
                if (unaff_XMM12_Da < fVar27) {
                  *(int *)(unaff_RBX + 4) = iVar2;
                  *(uint *)((longlong)unaff_RBX + 0x24) = uVar20;
                  *(int *)(unaff_RBX + 5) = iVar10;
                  *(int *)((longlong)unaff_RBX + 0x2c) = iVar14;
                  unaff_XMM12_Da = fVar27;
                }
                iVar14 = iVar14 + 1;
              }
            }
            lStack0000000000000030 = lStack0000000000000030 + -1;
            lVar4 = lVar4 + 1;
            iVar10 = iVar10 + 1;
            lVar8 = lVar8 + 8;
            iVar19 = iVar18;
          } while (iVar10 < iVar3);
        }
        iVar5 = iVar5 + 1;
        lVar12 = lVar12 + -1;
        lVar9 = lVar9 + 1;
        uVar20 = uVar20 + 1;
        uVar16 = uVar13;
        param_1 = in_stack_00000040;
      } while ((int)uVar20 < iVar7);
    }
    lVar15 = lVar15 + -1;
    lStack0000000000000060 = lStack0000000000000060 + 1;
    unaff_R12 = unaff_R12 + 8;
    uVar16 = (ulonglong)uVar11;
  } while ((int)uVar11 < iStackX_24);
  return;
}





// 函数: void FUN_1806402f4(void)
void FUN_1806402f4(void)

{
  longlong unaff_RBX;
  
  *(undefined8 *)(unaff_RBX + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_RBX + 0x28) = 0xffffffffffffffff;
  return;
}





