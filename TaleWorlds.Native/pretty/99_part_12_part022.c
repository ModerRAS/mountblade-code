#include "TaleWorlds.Native.Split.h"

// 99_part_12_part022.c - 6 个函数

// 函数: void FUN_1807d9211(uint param_1)
void FUN_1807d9211(uint param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  longlong in_RAX;
  uint uVar12;
  int iVar13;
  longlong unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  float *pfVar20;
  longlong unaff_R13;
  longlong lVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint in_stack_00000030;
  longlong lStack0000000000000038;
  longlong in_stack_00000040;
  ulonglong in_stack_00001050;
  uint in_stack_000010c0;
  
  lStack0000000000000038 = in_RAX;
  do {
    lVar21 = 0;
    if (0 < unaff_R13) {
      pfVar20 = (float *)&stack0x00000060;
      iVar14 = unaff_EBP * param_1;
      lVar22 = 0;
      do {
        iVar13 = 0;
        lVar17 = 0;
        fVar23 = 0.0;
        if ((0 < (int)unaff_EBP) && (7 < unaff_EBP)) {
          fVar23 = 0.0;
          fVar24 = 0.0;
          fVar25 = 0.0;
          fVar26 = 0.0;
          fVar27 = 0.0;
          fVar28 = 0.0;
          fVar29 = 0.0;
          fVar30 = 0.0;
          uVar12 = unaff_EBP & 0x80000007;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
          }
          uVar18 = iVar14 + 4;
          pfVar16 = pfVar20;
          do {
            pfVar2 = pfVar16 + -4;
            pfVar3 = pfVar16 + -3;
            pfVar4 = pfVar16 + -2;
            pfVar5 = pfVar16 + -1;
            lVar17 = lVar17 + 8;
            pfVar1 = (float *)(unaff_RBX + (ulonglong)(uint)(iVar14 + iVar13) * 4);
            iVar13 = iVar13 + 8;
            fVar6 = *pfVar16;
            pfVar7 = pfVar16 + 1;
            pfVar8 = pfVar16 + 2;
            pfVar9 = pfVar16 + 3;
            pfVar16 = pfVar16 + 8;
            fVar23 = fVar23 + *pfVar1 * *pfVar2;
            fVar24 = fVar24 + pfVar1[1] * *pfVar3;
            fVar25 = fVar25 + pfVar1[2] * *pfVar4;
            fVar26 = fVar26 + pfVar1[3] * *pfVar5;
            pfVar2 = (float *)(unaff_RBX + (ulonglong)uVar18 * 4);
            uVar18 = uVar18 + 8;
            fVar27 = fVar27 + *pfVar2 * fVar6;
            fVar28 = fVar28 + pfVar2[1] * *pfVar7;
            fVar29 = fVar29 + pfVar2[2] * *pfVar8;
            fVar30 = fVar30 + pfVar2[3] * *pfVar9;
          } while (lVar17 < (int)(unaff_EBP - uVar12));
          fVar23 = fVar25 + fVar29 + fVar23 + fVar27 + fVar26 + fVar30 + fVar24 + fVar28;
        }
        if (lVar17 < CONCAT44(unaff_0000002c,unaff_EBP)) {
          if (3 < CONCAT44(unaff_0000002c,unaff_EBP) - lVar17) {
            pfVar16 = (float *)(&stack0x00000054 + (lVar22 + lVar17) * 4);
            uVar12 = iVar13 + 2 + iVar14;
            lVar15 = ((CONCAT44(unaff_0000002c,unaff_EBP) - lVar17) - 4U >> 2) + 1;
            lVar17 = lVar17 + lVar15 * 4;
            do {
              uVar19 = (ulonglong)uVar12;
              uVar18 = iVar14 + iVar13;
              iVar13 = iVar13 + 4;
              uVar10 = uVar12 - 1;
              pfVar2 = pfVar16 + -1;
              uVar11 = uVar12 + 1;
              fVar24 = *pfVar16;
              pfVar1 = pfVar16 + 1;
              uVar12 = uVar12 + 4;
              pfVar3 = pfVar16 + 2;
              pfVar16 = pfVar16 + 4;
              fVar23 = *(float *)(unaff_RBX + (ulonglong)uVar18 * 4) * *pfVar2 + fVar23 +
                       *(float *)(unaff_RBX + (ulonglong)uVar10 * 4) * fVar24 +
                       *(float *)(unaff_RBX + uVar19 * 4) * *pfVar1 +
                       *(float *)(unaff_RBX + (ulonglong)uVar11 * 4) * *pfVar3;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          if (lVar17 < CONCAT44(unaff_0000002c,unaff_EBP)) {
            lVar15 = CONCAT44(unaff_0000002c,unaff_EBP) - lVar17;
            pfVar16 = (float *)(&stack0x00000050 + (lVar22 + lVar17) * 4);
            do {
              uVar12 = iVar14 + iVar13;
              iVar13 = iVar13 + 1;
              fVar24 = *pfVar16;
              pfVar16 = pfVar16 + 1;
              fVar23 = fVar23 + *(float *)(unaff_RBX + (ulonglong)uVar12 * 4) * fVar24;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        pfVar20 = pfVar20 + 0x20;
        lVar22 = lVar22 + 0x20;
        lVar17 = lVar21 * 8;
        lVar21 = lVar21 + 1;
        *(float *)(lStack0000000000000038 + *(longlong *)(in_stack_00000040 + lVar17)) = fVar23;
        param_1 = in_stack_00000030;
      } while (lVar21 < unaff_R13);
    }
    param_1 = param_1 + 1;
    lStack0000000000000038 = lStack0000000000000038 + 4;
    in_stack_00000030 = param_1;
  } while (param_1 < in_stack_000010c0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807d93f2(void)
void FUN_1807d93f2(void)

{
  ulonglong in_stack_00001050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807d9420(longlong param_1,longlong param_2,int param_3,uint param_4)
void FUN_1807d9420(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_4 != 0) {
    uVar5 = 0;
    lVar10 = (longlong)param_3;
    lVar9 = 0;
    do {
      iVar11 = 0;
      lVar7 = 0;
      if (3 < lVar10) {
        uVar8 = uVar5 * param_3 + 1;
        lVar4 = (lVar10 - 4U >> 2) + 1;
        iVar11 = (int)lVar4 * 4;
        lVar7 = lVar4 * 4;
        plVar6 = (longlong *)(param_1 + 0x10);
        do {
          lVar1 = *plVar6;
          *(undefined4 *)(param_2 + (ulonglong)(uVar8 - 1) * 4) =
               *(undefined4 *)(lVar9 + plVar6[-2]);
          *(undefined4 *)(param_2 + (ulonglong)uVar8 * 4) = *(undefined4 *)(lVar9 + plVar6[-1]);
          lVar2 = plVar6[1];
          *(undefined4 *)(param_2 + (ulonglong)(uVar8 + 1) * 4) = *(undefined4 *)(lVar9 + lVar1);
          uVar3 = uVar8 + 2;
          uVar8 = uVar8 + 4;
          *(undefined4 *)(param_2 + (ulonglong)uVar3 * 4) = *(undefined4 *)(lVar9 + lVar2);
          lVar4 = lVar4 + -1;
          plVar6 = plVar6 + 4;
        } while (lVar4 != 0);
      }
      if (lVar7 < lVar10) {
        uVar8 = uVar5 * param_3 + iVar11;
        do {
          lVar4 = lVar7 * 8;
          lVar7 = lVar7 + 1;
          *(undefined4 *)(param_2 + (ulonglong)uVar8 * 4) =
               *(undefined4 *)(lVar9 + *(longlong *)(param_1 + lVar4));
          uVar8 = uVar8 + 1;
        } while (lVar7 < lVar10);
      }
      uVar5 = uVar5 + 1;
      lVar9 = lVar9 + 4;
    } while (uVar5 < param_4);
  }
  return;
}






// 函数: void FUN_1807d9435(longlong param_1,longlong param_2,int param_3,uint param_4)
void FUN_1807d9435(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  uVar5 = 0;
  lVar10 = (longlong)param_3;
  lVar9 = 0;
  do {
    iVar11 = 0;
    lVar7 = 0;
    if (3 < lVar10) {
      uVar8 = uVar5 * param_3 + 1;
      lVar4 = (lVar10 - 4U >> 2) + 1;
      iVar11 = (int)lVar4 * 4;
      lVar7 = lVar4 * 4;
      plVar6 = (longlong *)(param_1 + 0x10);
      do {
        lVar1 = *plVar6;
        *(undefined4 *)(param_2 + (ulonglong)(uVar8 - 1) * 4) = *(undefined4 *)(lVar9 + plVar6[-2]);
        *(undefined4 *)(param_2 + (ulonglong)uVar8 * 4) = *(undefined4 *)(lVar9 + plVar6[-1]);
        lVar2 = plVar6[1];
        *(undefined4 *)(param_2 + (ulonglong)(uVar8 + 1) * 4) = *(undefined4 *)(lVar9 + lVar1);
        uVar3 = uVar8 + 2;
        uVar8 = uVar8 + 4;
        *(undefined4 *)(param_2 + (ulonglong)uVar3 * 4) = *(undefined4 *)(lVar9 + lVar2);
        lVar4 = lVar4 + -1;
        plVar6 = plVar6 + 4;
      } while (lVar4 != 0);
    }
    if (lVar7 < lVar10) {
      uVar8 = uVar5 * param_3 + iVar11;
      do {
        lVar4 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        *(undefined4 *)(param_2 + (ulonglong)uVar8 * 4) =
             *(undefined4 *)(lVar9 + *(longlong *)(param_1 + lVar4));
        uVar8 = uVar8 + 1;
      } while (lVar7 < lVar10);
    }
    uVar5 = uVar5 + 1;
    lVar9 = lVar9 + 4;
  } while (uVar5 < param_4);
  return;
}






// 函数: void FUN_1807d9539(void)
void FUN_1807d9539(void)

{
  return;
}






// 函数: void FUN_1807d9540(float *param_1,uint param_2,int param_3,float *param_4,float *param_5)
void FUN_1807d9540(float *param_1,uint param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fStackX_18;
  float fStack_d8;
  float fStack_d4;
  
  if (param_3 == 1) {
    fVar17 = -3.4028235e+38;
    fVar18 = -3.4028235e+38;
    fVar19 = -3.4028235e+38;
    fVar20 = -3.4028235e+38;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    for (iVar14 = (int)param_2 >> 2; iVar14 != 0; iVar14 = iVar14 + -1) {
      fVar37 = *param_1;
      fVar38 = param_1[1];
      fVar39 = param_1[2];
      fVar40 = param_1[3];
      param_1 = param_1 + 4;
      fVar21 = fVar21 + fVar37 * fVar37;
      fVar22 = fVar22 + fVar38 * fVar38;
      fVar23 = fVar23 + fVar39 * fVar39;
      fVar24 = fVar24 + fVar40 * fVar40;
      fVar17 = (float)((uint)fVar17 ^
                      ((uint)ABS(fVar37) ^ (uint)fVar17) & -(uint)(fVar17 < ABS(fVar37)));
      fVar18 = (float)((uint)fVar18 ^
                      ((uint)ABS(fVar38) ^ (uint)fVar18) & -(uint)(fVar18 < ABS(fVar38)));
      fVar19 = (float)((uint)fVar19 ^
                      ((uint)ABS(fVar39) ^ (uint)fVar19) & -(uint)(fVar19 < ABS(fVar39)));
      fVar20 = (float)((uint)fVar20 ^
                      ((uint)ABS(fVar40) ^ (uint)fVar20) & -(uint)(fVar20 < ABS(fVar40)));
    }
    if (fVar18 <= fVar17) {
      fVar18 = fVar17;
    }
    fVar17 = fVar19;
    if (fVar19 < fVar18) {
      fVar17 = fVar18;
    }
    fVar37 = fVar20;
    if ((fVar20 < fVar17) && (fVar37 = fVar19, fVar19 < fVar18)) {
      fVar37 = fVar18;
    }
    fVar17 = *param_4;
    if (*param_4 <= fVar37) {
      fVar37 = fVar19;
      if (fVar19 < fVar18) {
        fVar37 = fVar18;
      }
      fVar17 = fVar20;
      if ((fVar20 < fVar37) && (fVar17 = fVar19, fVar19 < fVar18)) {
        fVar17 = fVar18;
      }
    }
    fVar18 = fVar21 + fVar22 + fVar23 + fVar24 + *param_5;
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      fVar19 = *param_1;
      param_1 = param_1 + 1;
      fVar19 = ABS(fVar19);
      fVar20 = fVar19;
      if (fVar19 <= fVar17) {
        fVar20 = fVar17;
      }
      fVar18 = fVar18 + fVar19 * fVar19;
      fVar17 = fVar20;
    }
    *param_5 = fVar18;
    *param_4 = fVar17;
  }
  else {
    iVar14 = (int)param_2 >> 1;
    if (param_3 == 2) {
      fVar17 = -3.4028235e+38;
      fVar18 = -3.4028235e+38;
      fVar19 = -3.4028235e+38;
      fVar20 = -3.4028235e+38;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        fVar37 = *param_1;
        fVar38 = param_1[1];
        fVar39 = param_1[2];
        fVar40 = param_1[3];
        param_1 = param_1 + 4;
        fVar21 = fVar21 + fVar37 * fVar37;
        fVar22 = fVar22 + fVar38 * fVar38;
        fVar23 = fVar23 + fVar39 * fVar39;
        fVar24 = fVar24 + fVar40 * fVar40;
        fVar17 = (float)((uint)fVar17 ^
                        ((uint)ABS(fVar37) ^ (uint)fVar17) & -(uint)(fVar17 < ABS(fVar37)));
        fVar18 = (float)((uint)fVar18 ^
                        ((uint)ABS(fVar38) ^ (uint)fVar18) & -(uint)(fVar18 < ABS(fVar38)));
        fVar19 = (float)((uint)fVar19 ^
                        ((uint)ABS(fVar39) ^ (uint)fVar19) & -(uint)(fVar19 < ABS(fVar39)));
        fVar20 = (float)((uint)fVar20 ^
                        ((uint)ABS(fVar40) ^ (uint)fVar20) & -(uint)(fVar20 < ABS(fVar40)));
      }
      if (fVar19 <= fVar17) {
        fVar19 = fVar17;
      }
      if (fVar20 <= fVar18) {
        fVar20 = fVar18;
      }
      if (fVar19 <= *param_4) {
        fVar19 = *param_4;
      }
      if (fVar20 <= param_4[1]) {
        fVar20 = param_4[1];
      }
      fVar17 = fVar21 + fVar23 + *param_5;
      fVar18 = fVar22 + fVar24 + param_5[1];
      for (param_2 = param_2 & 1; param_2 != 0; param_2 = param_2 - 1) {
        fVar22 = ABS(*param_1);
        fVar23 = ABS(param_1[1]);
        param_1 = param_1 + 2;
        fVar21 = fVar22;
        if (fVar22 <= fVar19) {
          fVar21 = fVar19;
        }
        fVar24 = fVar23;
        if (fVar23 <= fVar20) {
          fVar24 = fVar20;
        }
        fVar17 = fVar17 + fVar22 * fVar22;
        fVar18 = fVar18 + fVar23 * fVar23;
        fVar19 = fVar21;
        fVar20 = fVar24;
      }
      *param_4 = fVar19;
      param_4[1] = fVar20;
      *param_5 = fVar17;
      param_5[1] = fVar18;
    }
    else if (param_3 == 6) {
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      fVar32 = 0.0;
      fVar17 = *param_4;
      fVar18 = param_4[1];
      fVar19 = param_4[2];
      fVar20 = param_4[3];
      fVar21 = *param_5;
      fVar22 = param_5[1];
      fVar23 = param_5[2];
      fVar24 = param_5[3];
      fVar37 = param_5[4];
      fVar38 = param_5[5];
      fVar39 = param_5[6];
      fVar40 = param_5[7];
      fVar33 = param_4[4];
      fVar34 = param_4[5];
      fVar35 = param_4[6];
      fVar36 = param_4[7];
      fVar25 = 0.0;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        fVar1 = *param_1;
        fVar2 = param_1[1];
        fVar3 = param_1[2];
        fVar4 = param_1[3];
        fVar5 = param_1[4];
        fVar6 = param_1[5];
        fVar7 = param_1[6];
        fVar8 = param_1[7];
        fVar9 = param_1[8];
        fVar10 = param_1[9];
        fVar11 = param_1[10];
        fVar12 = param_1[0xb];
        param_1 = param_1 + 0xc;
        fVar17 = (float)((uint)fVar17 ^
                        ((uint)ABS(fVar1) ^ (uint)fVar17) & -(uint)(fVar17 < ABS(fVar1)));
        fVar18 = (float)((uint)fVar18 ^
                        ((uint)ABS(fVar2) ^ (uint)fVar18) & -(uint)(fVar18 < ABS(fVar2)));
        fVar19 = (float)((uint)fVar19 ^
                        ((uint)ABS(fVar3) ^ (uint)fVar19) & -(uint)(fVar19 < ABS(fVar3)));
        fVar20 = (float)((uint)fVar20 ^
                        ((uint)ABS(fVar4) ^ (uint)fVar20) & -(uint)(fVar20 < ABS(fVar4)));
        fVar21 = fVar21 + fVar1 * fVar1;
        fVar22 = fVar22 + fVar2 * fVar2;
        fVar23 = fVar23 + fVar3 * fVar3;
        fVar24 = fVar24 + fVar4 * fVar4;
        fVar37 = fVar37 + fVar5 * fVar5;
        fVar38 = fVar38 + fVar6 * fVar6;
        fVar39 = fVar39 + fVar7 * fVar7;
        fVar40 = fVar40 + fVar8 * fVar8;
        fVar25 = fVar25 + fVar9 * fVar9;
        fVar26 = fVar26 + fVar10 * fVar10;
        fVar27 = fVar27 + fVar11 * fVar11;
        fVar28 = fVar28 + fVar12 * fVar12;
        fVar33 = (float)((uint)fVar33 ^
                        ((uint)ABS(fVar5) ^ (uint)fVar33) & -(uint)(fVar33 < ABS(fVar5)));
        fVar34 = (float)((uint)fVar34 ^
                        ((uint)ABS(fVar6) ^ (uint)fVar34) & -(uint)(fVar34 < ABS(fVar6)));
        fVar35 = (float)((uint)fVar35 ^
                        ((uint)ABS(fVar7) ^ (uint)fVar35) & -(uint)(fVar35 < ABS(fVar7)));
        fVar36 = (float)((uint)fVar36 ^
                        ((uint)ABS(fVar8) ^ (uint)fVar36) & -(uint)(fVar36 < ABS(fVar8)));
        fVar29 = (float)((uint)fVar29 ^
                        ((uint)ABS(fVar9) ^ (uint)fVar29) & -(uint)(fVar29 < ABS(fVar9)));
        fVar30 = (float)((uint)fVar30 ^
                        ((uint)ABS(fVar10) ^ (uint)fVar30) & -(uint)(fVar30 < ABS(fVar10)));
        fVar31 = (float)((uint)fVar31 ^
                        ((uint)ABS(fVar11) ^ (uint)fVar31) & -(uint)(fVar31 < ABS(fVar11)));
        fVar32 = (float)((uint)fVar32 ^
                        ((uint)ABS(fVar12) ^ (uint)fVar32) & -(uint)(fVar32 < ABS(fVar12)));
      }
      *param_4 = (float)(((uint)fVar35 ^ (uint)fVar17) & -(uint)(fVar17 < fVar35) ^ (uint)fVar17);
      param_4[1] = (float)(((uint)fVar36 ^ (uint)fVar18) & -(uint)(fVar18 < fVar36) ^ (uint)fVar18);
      param_4[2] = (float)(((uint)fVar29 ^ (uint)fVar19) & -(uint)(fVar19 < fVar29) ^ (uint)fVar19);
      param_4[3] = (float)(((uint)fVar30 ^ (uint)fVar20) & -(uint)(fVar20 < fVar30) ^ (uint)fVar20);
      *(ulonglong *)(param_4 + 4) =
           CONCAT44(((uint)fVar32 ^ (uint)fVar34) & -(uint)(fVar34 < fVar32) ^ (uint)fVar34,
                    ((uint)fVar31 ^ (uint)fVar33) & -(uint)(fVar33 < fVar31) ^ (uint)fVar33);
      *param_5 = fVar39 + fVar21;
      param_5[1] = fVar40 + fVar22;
      param_5[2] = fVar25 + fVar23;
      param_5[3] = fVar26 + fVar24;
      *(ulonglong *)(param_5 + 4) = CONCAT44(fVar28 + fVar38,fVar27 + fVar37);
      param_2 = param_2 & 1;
      if (param_2 != 0) {
        param_1 = param_1 + 2;
        fVar17 = param_5[1];
        fVar18 = param_5[2];
        fVar19 = param_5[3];
        fVar20 = param_5[4];
        fVar21 = param_5[5];
        fVar22 = param_4[1];
        fVar23 = param_4[2];
        fStackX_18 = param_4[3];
        fStack_d8 = param_4[4];
        fStack_d4 = param_4[5];
        do {
          fVar37 = ABS(param_1[-2]);
          fVar24 = fVar37;
          if (fVar37 <= *param_4) {
            fVar24 = *param_4;
          }
          fVar38 = param_1[1];
          fVar34 = ABS(param_1[-1]);
          fVar39 = param_1[2];
          fVar40 = param_1[3];
          fVar33 = fVar34;
          if (fVar34 <= fVar22) {
            fVar33 = fVar22;
          }
          fVar22 = ABS(*param_1);
          param_1 = param_1 + 6;
          *param_4 = fVar24;
          fVar38 = ABS(fVar38);
          fVar24 = fVar22;
          if (fVar22 <= fVar23) {
            fVar24 = fVar23;
          }
          fVar39 = ABS(fVar39);
          fVar17 = fVar17 + fVar34 * fVar34;
          fVar40 = ABS(fVar40);
          fVar18 = fVar18 + fVar22 * fVar22;
          fVar19 = fVar19 + fVar38 * fVar38;
          if (fVar38 <= fStackX_18) {
            fVar38 = fStackX_18;
          }
          fVar34 = fVar39;
          if (fVar39 <= fStack_d8) {
            fVar34 = fStack_d8;
          }
          fVar20 = fVar20 + fVar39 * fVar39;
          *param_5 = fVar37 * fVar37 + *param_5;
          fVar21 = fVar21 + fVar40 * fVar40;
          if (fVar40 <= fStack_d4) {
            fVar40 = fStack_d4;
          }
          param_2 = param_2 - 1;
          fVar22 = fVar33;
          fVar23 = fVar24;
          fStackX_18 = fVar38;
          fStack_d8 = fVar34;
          fStack_d4 = fVar40;
        } while (param_2 != 0);
        param_4[3] = fVar38;
        param_4[2] = fVar24;
        param_4[5] = fVar40;
        param_4[1] = fVar33;
        param_5[1] = fVar17;
        param_4[4] = fVar34;
        param_5[2] = fVar18;
        param_5[3] = fVar19;
        param_5[4] = fVar20;
        param_5[5] = fVar21;
      }
    }
    else if (param_3 == 8) {
      fVar17 = *param_4;
      fVar18 = param_4[1];
      fVar19 = param_4[2];
      fVar20 = param_4[3];
      fVar21 = param_4[4];
      fVar22 = param_4[5];
      fVar23 = param_4[6];
      fVar24 = param_4[7];
      fVar37 = *param_5;
      fVar38 = param_5[1];
      fVar39 = param_5[2];
      fVar40 = param_5[3];
      fVar33 = param_5[4];
      fVar34 = param_5[5];
      fVar35 = param_5[6];
      fVar36 = param_5[7];
      if (param_2 != 0) {
        do {
          fVar29 = *param_1;
          fVar30 = param_1[1];
          fVar31 = param_1[2];
          fVar32 = param_1[3];
          fVar25 = param_1[4];
          fVar26 = param_1[5];
          fVar27 = param_1[6];
          fVar28 = param_1[7];
          param_1 = param_1 + 8;
          fVar37 = fVar37 + fVar29 * fVar29;
          fVar38 = fVar38 + fVar30 * fVar30;
          fVar39 = fVar39 + fVar31 * fVar31;
          fVar40 = fVar40 + fVar32 * fVar32;
          fVar33 = fVar33 + fVar25 * fVar25;
          fVar34 = fVar34 + fVar26 * fVar26;
          fVar35 = fVar35 + fVar27 * fVar27;
          fVar36 = fVar36 + fVar28 * fVar28;
          fVar17 = (float)((uint)fVar17 ^
                          ((uint)ABS(fVar29) ^ (uint)fVar17) & -(uint)(fVar17 < ABS(fVar29)));
          fVar18 = (float)((uint)fVar18 ^
                          ((uint)ABS(fVar30) ^ (uint)fVar18) & -(uint)(fVar18 < ABS(fVar30)));
          fVar19 = (float)((uint)fVar19 ^
                          ((uint)ABS(fVar31) ^ (uint)fVar19) & -(uint)(fVar19 < ABS(fVar31)));
          fVar20 = (float)((uint)fVar20 ^
                          ((uint)ABS(fVar32) ^ (uint)fVar20) & -(uint)(fVar20 < ABS(fVar32)));
          fVar21 = (float)((uint)fVar21 ^
                          ((uint)ABS(fVar25) ^ (uint)fVar21) & -(uint)(fVar21 < ABS(fVar25)));
          fVar22 = (float)((uint)fVar22 ^
                          ((uint)ABS(fVar26) ^ (uint)fVar22) & -(uint)(fVar22 < ABS(fVar26)));
          fVar23 = (float)((uint)fVar23 ^
                          ((uint)ABS(fVar27) ^ (uint)fVar23) & -(uint)(fVar23 < ABS(fVar27)));
          fVar24 = (float)((uint)fVar24 ^
                          ((uint)ABS(fVar28) ^ (uint)fVar24) & -(uint)(fVar24 < ABS(fVar28)));
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      *param_4 = fVar17;
      param_4[1] = fVar18;
      param_4[2] = fVar19;
      param_4[3] = fVar20;
      *param_5 = fVar37;
      param_5[1] = fVar38;
      param_5[2] = fVar39;
      param_5[3] = fVar40;
      param_4[4] = fVar21;
      param_4[5] = fVar22;
      param_4[6] = fVar23;
      param_4[7] = fVar24;
      param_5[4] = fVar33;
      param_5[5] = fVar34;
      param_5[6] = fVar35;
      param_5[7] = fVar36;
    }
    else {
      uVar16 = 0;
      uVar13 = uVar16;
      for (iVar14 = param_2 * param_3; iVar14 != 0; iVar14 = iVar14 + -1) {
        fVar18 = ABS(param_1[uVar13]);
        fVar17 = fVar18;
        if (fVar18 <= param_4[uVar16]) {
          fVar17 = param_4[uVar16];
        }
        fVar19 = param_5[uVar16];
        param_4[uVar16] = fVar17;
        param_5[uVar16] = fVar18 * fVar18 + fVar19;
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)(uVar15 & (int)(uVar15 - param_3) >> 0x1f);
        uVar13 = (ulonglong)((int)uVar13 + 1);
      }
    }
  }
  return;
}






