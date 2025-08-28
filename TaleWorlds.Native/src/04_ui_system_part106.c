#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part106.c - 16 个函数

// 函数: void FUN_18072e4b4(longlong param_1,longlong param_2,float param_3,uint param_4)
void FUN_18072e4b4(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  
  iVar15 = 0;
  lVar16 = (longlong)(int)param_4;
  if ((param_4 & 0xfffc) != 0) {
    lVar18 = param_2 - param_1;
    lVar11 = ((ulonglong)(param_4 & 0xfffc) - 1 >> 2) + 1;
    iVar15 = (int)lVar11 * 4;
    pfVar12 = (float *)(param_1 + 4);
    do {
      pfVar1 = pfVar12 + 4;
      pfVar12[-1] = param_3 * *(float *)(lVar18 + -0x14 + (longlong)pfVar1);
      *pfVar12 = param_3 * *(float *)(lVar18 + -0x10 + (longlong)pfVar1);
      pfVar12[1] = param_3 * *(float *)(lVar18 + -0xc + (longlong)pfVar1);
      pfVar12[2] = param_3 * *(float *)(lVar18 + -8 + (longlong)pfVar1);
      lVar11 = lVar11 + -1;
      pfVar12 = pfVar1;
    } while (lVar11 != 0);
  }
  if ((iVar15 < (int)param_4) && (0xf < param_4 - iVar15)) {
    lVar11 = (longlong)iVar15;
    if (((ulonglong)(param_2 + (longlong)(int)(param_4 - 1) * 4) < (ulonglong)(param_1 + lVar11 * 4)
        ) || ((ulonglong)(param_1 + (longlong)(int)(param_4 - 1) * 4) <
              (ulonglong)(param_2 + lVar11 * 4))) {
      uVar13 = param_4 - iVar15 & 0x8000000f;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
      }
      lVar18 = param_2 - param_1;
      pfVar12 = (float *)(param_1 + 0x10 + lVar11 * 4);
      do {
        pfVar2 = (float *)(lVar18 + -0x10 + (longlong)pfVar12);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        iVar15 = iVar15 + 0x10;
        lVar11 = lVar11 + 0x10;
        pfVar1 = (float *)(lVar18 + (longlong)pfVar12);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar1 = pfVar12 + 0x10;
        pfVar12[-4] = *pfVar2 * param_3;
        pfVar12[-3] = fVar3 * param_3;
        pfVar12[-2] = fVar4 * param_3;
        pfVar12[-1] = fVar5 * param_3;
        pfVar2 = (float *)(lVar18 + -0x30 + (longlong)pfVar1);
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[2];
        fVar10 = pfVar2[3];
        *pfVar12 = fVar6 * param_3;
        pfVar12[1] = fVar7 * param_3;
        pfVar12[2] = fVar8 * param_3;
        pfVar12[3] = fVar9 * param_3;
        pfVar2 = (float *)(lVar18 + -0x20 + (longlong)pfVar1);
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar12[4] = fVar3 * param_3;
        pfVar12[5] = fVar4 * param_3;
        pfVar12[6] = fVar5 * param_3;
        pfVar12[7] = fVar10 * param_3;
        pfVar12[8] = fVar6 * param_3;
        pfVar12[9] = fVar7 * param_3;
        pfVar12[10] = fVar8 * param_3;
        pfVar12[0xb] = fVar9 * param_3;
        pfVar12 = pfVar1;
      } while (lVar11 < (int)(param_4 - uVar13));
    }
  }
  lVar11 = (longlong)iVar15;
  if (lVar11 < lVar16) {
    if (3 < lVar16 - lVar11) {
      lVar18 = lVar11 * 4;
      lVar14 = param_2 - param_1;
      lVar17 = ((lVar16 - lVar11) - 4U >> 2) + 1;
      lVar11 = lVar11 + lVar17 * 4;
      pfVar12 = (float *)(param_1 + 4 + lVar18);
      do {
        pfVar1 = pfVar12 + 4;
        pfVar12[-1] = param_3 * *(float *)(lVar14 + -0x14 + (longlong)pfVar1);
        *pfVar12 = param_3 * *(float *)(lVar14 + -0x10 + (longlong)pfVar1);
        pfVar12[1] = param_3 * *(float *)(lVar14 + -0xc + (longlong)pfVar1);
        pfVar12[2] = param_3 * *(float *)(lVar14 + -8 + (longlong)pfVar1);
        lVar17 = lVar17 + -1;
        pfVar12 = pfVar1;
      } while (lVar17 != 0);
    }
    if (lVar11 < lVar16) {
      lVar16 = lVar16 - lVar11;
      pfVar12 = (float *)(param_1 + lVar11 * 4);
      do {
        *pfVar12 = param_3 * *(float *)((param_2 - param_1) + -4 + (longlong)(pfVar12 + 1));
        lVar16 = lVar16 + -1;
        pfVar12 = pfVar12 + 1;
      } while (lVar16 != 0);
    }
  }
  return;
}





// 函数: void FUN_18072e568(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)
void FUN_18072e568(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int unaff_EBX;
  longlong unaff_RDI;
  longlong lVar15;
  longlong in_R10;
  longlong in_R11;
  float in_XMM2_Da;
  float fVar16;
  float fVar17;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  
  fVar17 = (float)((ulonglong)param_4 >> 0x20);
  fVar16 = (float)param_4;
  if (((ulonglong)(in_R10 + param_1 * 4) < (ulonglong)(in_R11 + param_3 * 4)) ||
     ((ulonglong)(in_R11 + param_1 * 4) < (ulonglong)(in_R10 + param_3 * 4))) {
    param_2 = param_2 & 0x8000000f;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xfffffff0) + 1;
    }
    lVar12 = in_R10 - in_R11;
    pfVar11 = (float *)(in_R11 + 0x10 + param_3 * 4);
    do {
      pfVar2 = (float *)(lVar12 + -0x10 + (longlong)pfVar11);
      fVar3 = pfVar2[1];
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[3];
      unaff_EBX = unaff_EBX + 0x10;
      param_3 = param_3 + 0x10;
      pfVar1 = (float *)(lVar12 + (longlong)pfVar11);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar1 = pfVar11 + 0x10;
      pfVar11[-4] = *pfVar2 * fVar16;
      pfVar11[-3] = fVar3 * fVar17;
      pfVar11[-2] = fVar4 * in_XMM3_Dc;
      pfVar11[-1] = fVar5 * in_XMM3_Dd;
      pfVar2 = (float *)(lVar12 + -0x30 + (longlong)pfVar1);
      fVar3 = *pfVar2;
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar10 = pfVar2[3];
      *pfVar11 = fVar6 * fVar16;
      pfVar11[1] = fVar7 * fVar17;
      pfVar11[2] = fVar8 * in_XMM3_Dc;
      pfVar11[3] = fVar9 * in_XMM3_Dd;
      pfVar2 = (float *)(lVar12 + -0x20 + (longlong)pfVar1);
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar11[4] = fVar3 * fVar16;
      pfVar11[5] = fVar4 * fVar17;
      pfVar11[6] = fVar5 * in_XMM3_Dc;
      pfVar11[7] = fVar10 * in_XMM3_Dd;
      pfVar11[8] = fVar6 * fVar16;
      pfVar11[9] = fVar7 * fVar17;
      pfVar11[10] = fVar8 * in_XMM3_Dc;
      pfVar11[0xb] = fVar9 * in_XMM3_Dd;
      pfVar11 = pfVar1;
    } while (param_3 < (int)((int)unaff_RDI - param_2));
  }
  lVar12 = (longlong)unaff_EBX;
  if (lVar12 < unaff_RDI) {
    if (3 < unaff_RDI - lVar12) {
      lVar13 = lVar12 * 4;
      lVar14 = in_R10 - in_R11;
      lVar15 = ((unaff_RDI - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar15 * 4;
      pfVar11 = (float *)(in_R11 + 4 + lVar13);
      do {
        pfVar1 = pfVar11 + 4;
        pfVar11[-1] = in_XMM2_Da * *(float *)(lVar14 + -0x14 + (longlong)pfVar1);
        *pfVar11 = in_XMM2_Da * *(float *)(lVar14 + -0x10 + (longlong)pfVar1);
        pfVar11[1] = in_XMM2_Da * *(float *)(lVar14 + -0xc + (longlong)pfVar1);
        pfVar11[2] = in_XMM2_Da * *(float *)(lVar14 + -8 + (longlong)pfVar1);
        lVar15 = lVar15 + -1;
        pfVar11 = pfVar1;
      } while (lVar15 != 0);
    }
    if (lVar12 < unaff_RDI) {
      lVar13 = unaff_RDI - lVar12;
      pfVar11 = (float *)(in_R11 + lVar12 * 4);
      do {
        *pfVar11 = in_XMM2_Da * *(float *)((in_R10 - in_R11) + -4 + (longlong)(pfVar11 + 1));
        lVar13 = lVar13 + -1;
        pfVar11 = pfVar11 + 1;
      } while (lVar13 != 0);
    }
  }
  return;
}





// 函数: void FUN_18072e5f4(undefined8 param_1,undefined8 param_2,float param_3)
void FUN_18072e5f4(undefined8 param_1,undefined8 param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  int unaff_EBX;
  longlong unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong in_R10;
  longlong in_R11;
  
  lVar6 = (longlong)unaff_EBX;
  if (lVar6 < unaff_RDI) {
    if (3 < unaff_RDI - lVar6) {
      lVar3 = lVar6 * 4;
      lVar4 = in_R10 - in_R11;
      lVar5 = ((unaff_RDI - lVar6) - 4U >> 2) + 1;
      lVar6 = lVar6 + lVar5 * 4;
      pfVar2 = (float *)(in_R11 + 4 + lVar3);
      do {
        pfVar1 = pfVar2 + 4;
        pfVar2[-1] = param_3 * *(float *)(lVar4 + -0x14 + (longlong)pfVar1);
        *pfVar2 = param_3 * *(float *)(lVar4 + -0x10 + (longlong)pfVar1);
        pfVar2[1] = param_3 * *(float *)(lVar4 + -0xc + (longlong)pfVar1);
        pfVar2[2] = param_3 * *(float *)(lVar4 + -8 + (longlong)pfVar1);
        lVar5 = lVar5 + -1;
        pfVar2 = pfVar1;
      } while (lVar5 != 0);
    }
    if (lVar6 < unaff_RDI) {
      lVar3 = unaff_RDI - lVar6;
      pfVar2 = (float *)(in_R11 + lVar6 * 4);
      do {
        *pfVar2 = param_3 * *(float *)((in_R10 - in_R11) + -4 + (longlong)(pfVar2 + 1));
        lVar3 = lVar3 + -1;
        pfVar2 = pfVar2 + 1;
      } while (lVar3 != 0);
    }
  }
  return;
}





// 函数: void FUN_18072e60c(longlong param_1,undefined8 param_2,float param_3,longlong param_4)
void FUN_18072e60c(longlong param_1,undefined8 param_2,float param_3,longlong param_4)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong in_R10;
  longlong in_R11;
  
  if (3 < param_1 - param_4) {
    lVar2 = param_4 * 4;
    lVar4 = in_R10 - in_R11;
    lVar5 = ((param_1 - param_4) - 4U >> 2) + 1;
    param_4 = param_4 + lVar5 * 4;
    pfVar3 = (float *)(in_R11 + 4 + lVar2);
    do {
      pfVar1 = pfVar3 + 4;
      pfVar3[-1] = param_3 * *(float *)(lVar4 + -0x14 + (longlong)pfVar1);
      *pfVar3 = param_3 * *(float *)(lVar4 + -0x10 + (longlong)pfVar1);
      pfVar3[1] = param_3 * *(float *)(lVar4 + -0xc + (longlong)pfVar1);
      pfVar3[2] = param_3 * *(float *)(lVar4 + -8 + (longlong)pfVar1);
      lVar5 = lVar5 + -1;
      pfVar3 = pfVar1;
    } while (lVar5 != 0);
  }
  if (param_4 < param_1) {
    param_1 = param_1 - param_4;
    pfVar3 = (float *)(in_R11 + param_4 * 4);
    do {
      *pfVar3 = param_3 * *(float *)((in_R10 - in_R11) + -4 + (longlong)(pfVar3 + 1));
      param_1 = param_1 + -1;
      pfVar3 = pfVar3 + 1;
    } while (param_1 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18072e720(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)
void FUN_18072e720(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_758 [32];
  undefined4 uStack_738;
  int iStack_730;
  undefined1 auStack_728 [64];
  undefined1 auStack_6e8 [64];
  undefined1 auStack_6a8 [1536];
  undefined1 auStack_a8 [32];
  ulonglong uStack_88;
  
  uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_758;
  uStack_738 = *(undefined4 *)(param_1 + 0x11e0);
  iStack_730 = *(int *)(param_1 + 0x121c);
  iVar5 = *(int *)(param_1 + 0x11e8) + iStack_730;
  *(undefined1 *)(param_1 + 0x12a7) = 4;
  fVar6 = (float)FUN_180734d70(auStack_6e8,param_3,param_4,iVar5);
  if (((*(int *)(param_1 + 0x1214) != 0) && (*(int *)(param_1 + 0x1234) == 0)) &&
     (*(int *)(param_1 + 0x11e0) == 4)) {
    iStack_730 = *(int *)(param_1 + 0x121c);
    uStack_738 = 2;
    fVar7 = (float)FUN_180734d70(auStack_728,param_3 + (longlong)(iVar5 * 2) * 4,param_4,iVar5);
    fVar6 = fVar6 - fVar7;
    FUN_180726a00(param_2,auStack_728,*(undefined4 *)(param_1 + 0x121c));
    iVar4 = 3;
    fVar7 = 3.4028235e+38;
    do {
      uStack_738 = *(undefined4 *)(param_1 + 0x121c);
      FUN_180736180(auStack_a8,param_1 + 0x1190,param_2,iVar4);
      FUN_180726a70(auStack_728,auStack_a8,*(undefined4 *)(param_1 + 0x121c),
                    *(undefined4 *)(param_1 + 0x13ec));
      uStack_738 = *(undefined4 *)(param_1 + 0x121c);
      FUN_18072e450(auStack_6a8,auStack_728,param_3,iVar5 * 2);
      iVar1 = *(int *)(param_1 + 0x121c);
      dVar3 = (double)FUN_18072b3a0(auStack_6a8 +
                                    ((longlong)*(int *)(param_1 + 0x121c) + (longlong)iVar5) * 4,
                                    iVar5 - *(int *)(param_1 + 0x121c));
      dVar2 = (double)FUN_18072b3a0(auStack_6a8 + (longlong)iVar1 * 4,iVar5 - iVar1);
      fVar8 = (float)(dVar3 + dVar2);
      if (fVar6 <= fVar8) {
        if (fVar7 < fVar8) break;
      }
      else {
        *(char *)(param_1 + 0x12a7) = (char)iVar4;
        fVar6 = fVar8;
      }
      iVar4 = iVar4 + -1;
      fVar7 = fVar8;
    } while (-1 < iVar4);
  }
  if (*(char *)(param_1 + 0x12a7) == '\x04') {
    FUN_180726a00(param_2,auStack_6e8,*(undefined4 *)(param_1 + 0x121c));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_758);
}





// 函数: void FUN_18072e750(longlong param_1,int param_2,longlong param_3,undefined4 param_4)
void FUN_18072e750(longlong param_1,int param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong in_R11;
  int iVar4;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar9;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 uVar10;
  int iStack0000000000000028;
  ulonglong in_stack_000006d0;
  
  *(undefined8 *)(in_R11 + -0x38) = unaff_R14;
  iVar4 = *(int *)(param_1 + 0x11e8);
  *(undefined8 *)(in_R11 + -0x40) = unaff_R15;
  iVar4 = iVar4 + param_2;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM6_Dd;
  *(undefined1 *)(param_1 + 0x12a7) = 4;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM8_Dd;
  iStack0000000000000028 = param_2;
  fVar5 = (float)FUN_180734d70(&stack0x00000070,param_3,param_4,iVar4);
  if (((*(int *)(unaff_RDI + 0x1214) != 0) && (*(int *)(unaff_RDI + 0x1234) == 0)) &&
     (*(int *)(unaff_RDI + 0x11e0) == 4)) {
    iStack0000000000000028 = *(int *)(unaff_RDI + 0x121c);
    fVar6 = (float)FUN_180734d70(&stack0x00000030,param_3 + (longlong)(iVar4 * 2) * 4,param_4,iVar4,
                                 2);
    fVar9 = fVar5 - fVar6;
    FUN_180726a00(fVar6,&stack0x00000030,*(undefined4 *)(unaff_RDI + 0x121c));
    iVar3 = 3;
    fVar6 = 3.4028235e+38;
    do {
      uVar10 = *(undefined4 *)(unaff_RDI + 0x121c);
      FUN_180736180(&stack0x000006b0,unaff_RDI + 0x1190);
      FUN_180726a70(&stack0x00000030,&stack0x000006b0,*(undefined4 *)(unaff_RDI + 0x121c),
                    *(undefined4 *)(unaff_RDI + 0x13ec),uVar10);
      FUN_18072e450(&stack0x000000b0,&stack0x00000030,param_3,iVar4 * 2,
                    *(undefined4 *)(unaff_RDI + 0x121c));
      iVar1 = *(int *)(unaff_RDI + 0x121c);
      dVar2 = (double)FUN_18072b3a0(&stack0x000000b0 +
                                    ((longlong)*(int *)(unaff_RDI + 0x121c) + (longlong)iVar4) * 4,
                                    iVar4 - *(int *)(unaff_RDI + 0x121c));
      dVar7 = (double)FUN_18072b3a0(&stack0x000000b0 + (longlong)iVar1 * 4,iVar4 - iVar1);
      fVar5 = SUB84(dVar7,0);
      fVar8 = (float)(dVar2 + dVar7);
      if (fVar9 <= fVar8) {
        if (fVar6 < fVar8) break;
      }
      else {
        *(char *)(unaff_RDI + 0x12a7) = (char)iVar3;
        fVar9 = fVar8;
      }
      iVar3 = iVar3 + -1;
      fVar6 = fVar8;
    } while (-1 < iVar3);
  }
  if (*(char *)(unaff_RDI + 0x12a7) == '\x04') {
    FUN_180726a00(fVar5,&stack0x00000070,*(undefined4 *)(unaff_RDI + 0x121c));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000006d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072e7bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_18072e7bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong unaff_RDI;
  int unaff_R14D;
  longlong unaff_R15;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float unaff_XMM8_Da;
  float fVar7;
  undefined4 uVar8;
  undefined4 uStack0000000000000028;
  ulonglong in_stack_000006d0;
  
  uStack0000000000000028 = *(undefined4 *)(unaff_RDI + 0x121c);
  fVar3 = (float)FUN_180734d70(&stack0x00000030,unaff_R15 + (longlong)(unaff_R14D * 2) * 4,param_3,
                               unaff_R14D,2);
  fVar7 = unaff_XMM8_Da - fVar3;
  FUN_180726a00(fVar3,&stack0x00000030,*(undefined4 *)(unaff_RDI + 0x121c));
  iVar2 = 3;
  fVar3 = 3.4028235e+38;
  do {
    uVar8 = *(undefined4 *)(unaff_RDI + 0x121c);
    FUN_180736180(&stack0x000006b0,unaff_RDI + 0x1190);
    FUN_180726a70(&stack0x00000030,&stack0x000006b0,*(undefined4 *)(unaff_RDI + 0x121c),
                  *(undefined4 *)(unaff_RDI + 0x13ec),uVar8);
    FUN_18072e450(&stack0x000000b0,&stack0x00000030);
    iVar1 = *(int *)(unaff_RDI + 0x121c);
    dVar6 = (double)FUN_18072b3a0(&stack0x000000b0 +
                                  ((longlong)*(int *)(unaff_RDI + 0x121c) + (longlong)unaff_R14D) *
                                  4,unaff_R14D - *(int *)(unaff_RDI + 0x121c));
    dVar4 = (double)FUN_18072b3a0(&stack0x000000b0 + (longlong)iVar1 * 4,unaff_R14D - iVar1);
    fVar5 = (float)(dVar6 + dVar4);
    if (fVar7 <= fVar5) {
      if (fVar3 < fVar5) break;
    }
    else {
      *(char *)(unaff_RDI + 0x12a7) = (char)iVar2;
      fVar7 = fVar5;
    }
    iVar2 = iVar2 + -1;
    fVar3 = fVar5;
  } while (-1 < iVar2);
  if (*(char *)(unaff_RDI + 0x12a7) == '\x04') {
    FUN_180726a00(SUB84(dVar4,0),&stack0x00000070,*(undefined4 *)(unaff_RDI + 0x121c));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000006d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072e943(void)
void FUN_18072e943(void)

{
  longlong unaff_RDI;
  ulonglong in_stack_000006d0;
  
  if (*(char *)(unaff_RDI + 0x12a7) == '\x04') {
    FUN_180726a00();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000006d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072e96d(void)
void FUN_18072e96d(void)

{
  ulonglong in_stack_000006d0;
  
  FUN_180726a00();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000006d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072e9a0(float *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
void FUN_18072e9a0(float *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  
  if (0 < (longlong)param_6) {
    lVar2 = 0;
    do {
      lVar1 = param_3 + (longlong)(*(int *)(param_4 + lVar2 * 4) + 2) * -4;
      FUN_180736450(lVar1,param_5,5,param_1);
      FUN_180736990(lVar1,param_3,param_5,5,param_2);
      dVar3 = (double)FUN_18072b3a0(param_3,param_5 + 5);
      fVar4 = (param_1[0x18] + *param_1) * 0.015 + 1.0;
      if (fVar4 <= (float)dVar3) {
        fVar4 = (float)dVar3;
      }
      func_0x000180736310(param_1,1.0 / fVar4,0x19);
      func_0x000180736310(param_2,1.0 / fVar4,5);
      param_3 = param_3 + (longlong)param_5 * 4;
      param_1 = param_1 + 0x19;
      param_2 = param_2 + 0x14;
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_6);
  }
  return;
}





// 函数: void FUN_18072e9ce(void)
void FUN_18072e9ce(void)

{
  longlong in_RAX;
  undefined8 unaff_RBX;
  longlong lVar1;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  float *unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  longlong lVar2;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  double dVar3;
  float fVar4;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  longlong in_stack_000000a8;
  int in_stack_000000b0;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + 0x18) = unaff_R12;
  lVar2 = 0;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  do {
    lVar1 = unaff_RBP + (longlong)(*(int *)(in_RAX + lVar2 * 4) + 2) * -4;
    FUN_180736450(lVar1,in_stack_000000b0,5,unaff_RDI);
    FUN_180736990(lVar1,unaff_RBP,in_stack_000000b0,5,unaff_R15);
    dVar3 = (double)FUN_18072b3a0(unaff_RBP,in_stack_000000b0 + 5);
    fVar4 = (unaff_RDI[0x18] + *unaff_RDI) * 0.015 + 1.0;
    if (fVar4 <= (float)dVar3) {
      fVar4 = (float)dVar3;
    }
    func_0x000180736310(unaff_RDI,1.0 / fVar4,0x19);
    func_0x000180736310(unaff_R15,1.0 / fVar4,5);
    unaff_RBP = unaff_RBP + (longlong)in_stack_000000b0 * 4;
    unaff_RDI = unaff_RDI + 0x19;
    unaff_R15 = unaff_R15 + 0x14;
    lVar2 = lVar2 + 1;
    in_RAX = in_stack_000000a8;
  } while (lVar2 < unaff_R13);
  return;
}





// 函数: void FUN_18072eaed(void)
void FUN_18072eaed(void)

{
  return;
}





// 函数: void FUN_18072eb00(float *param_1,longlong param_2,longlong param_3,longlong param_4,float *param_5,
void FUN_18072eb00(float *param_1,longlong param_2,longlong param_3,longlong param_4,float *param_5,
                  int param_6,int param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  float *pfVar13;
  float fVar14;
  
  lVar10 = (longlong)param_7;
  if (0 < lVar10) {
    pfVar9 = (float *)(param_3 + 8);
    uVar12 = param_8 + param_6;
    param_4 = param_4 - (longlong)param_5;
    do {
      fVar2 = *param_5;
      fVar3 = pfVar9[-2];
      fVar4 = pfVar9[-1];
      fVar5 = *pfVar9;
      fVar6 = pfVar9[1];
      fVar7 = pfVar9[2];
      pfVar13 = (float *)(param_2 + (longlong)*(int *)((longlong)param_5 + param_4) * -4);
      if (0 < (int)uVar12) {
        uVar11 = (ulonglong)uVar12;
        pfVar8 = param_1;
        do {
          fVar14 = *(float *)((param_2 - (longlong)param_1) + (longlong)pfVar8);
          *pfVar8 = fVar14;
          fVar14 = fVar14 - fVar3 * pfVar13[2];
          *pfVar8 = fVar14;
          fVar14 = fVar14 - fVar4 * pfVar13[1];
          *pfVar8 = fVar14;
          fVar14 = fVar14 - fVar5 * *pfVar13;
          *pfVar8 = fVar14;
          fVar14 = fVar14 - fVar6 * pfVar13[-1];
          *pfVar8 = fVar14;
          pfVar1 = pfVar13 + -2;
          pfVar13 = pfVar13 + 1;
          *pfVar8 = (fVar14 - fVar7 * *pfVar1) * fVar2;
          pfVar8 = pfVar8 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      param_2 = param_2 + (longlong)param_6 * 4;
      param_5 = param_5 + 1;
      pfVar9 = pfVar9 + 5;
      param_1 = param_1 + (int)uVar12;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}





// 函数: void FUN_18072eb2e(undefined8 param_1,float *param_2,undefined8 param_3,float *param_4)
void FUN_18072eb2e(undefined8 param_1,float *param_2,undefined8 param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar9;
  uint uVar10;
  float *pfVar11;
  longlong in_R10;
  longlong in_R11;
  longlong unaff_R15;
  longlong lVar12;
  float fVar13;
  int in_stack_00000078;
  
  uVar10 = in_stack_00000078 + (int)in_R10;
  lVar12 = unaff_R15 - (longlong)param_4;
  do {
    fVar2 = *param_4;
    fVar3 = param_2[-2];
    fVar4 = param_2[-1];
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    pfVar11 = (float *)(in_R11 + (longlong)*(int *)((longlong)param_4 + lVar12) * -4);
    if (0 < (int)uVar10) {
      uVar9 = (ulonglong)uVar10;
      pfVar8 = unaff_RBX;
      do {
        fVar13 = *(float *)((in_R11 - (longlong)unaff_RBX) + (longlong)pfVar8);
        *pfVar8 = fVar13;
        fVar13 = fVar13 - fVar3 * pfVar11[2];
        *pfVar8 = fVar13;
        fVar13 = fVar13 - fVar4 * pfVar11[1];
        *pfVar8 = fVar13;
        fVar13 = fVar13 - fVar5 * *pfVar11;
        *pfVar8 = fVar13;
        fVar13 = fVar13 - fVar6 * pfVar11[-1];
        *pfVar8 = fVar13;
        pfVar1 = pfVar11 + -2;
        pfVar11 = pfVar11 + 1;
        *pfVar8 = (fVar13 - fVar7 * *pfVar1) * fVar2;
        pfVar8 = pfVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    in_R11 = in_R11 + in_R10 * 4;
    param_4 = param_4 + 1;
    param_2 = param_2 + 5;
    unaff_RBX = unaff_RBX + (int)uVar10;
    unaff_RBP = unaff_RBP + -1;
  } while (unaff_RBP != 0);
  return;
}





// 函数: void FUN_18072ec44(void)
void FUN_18072ec44(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18072ec50(float *param_1,longlong param_2,longlong param_3,float *param_4,int param_5,
void FUN_18072ec50(float *param_1,longlong param_2,longlong param_3,float *param_4,int param_5,
                  int param_6,int param_7)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_398 [32];
  int iStack_378;
  longlong lStack_368;
  undefined1 auStack_358 [768];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_398;
  iStack_378 = param_7;
  puVar1 = auStack_358 + (longlong)param_7 * 4;
  iVar3 = (param_7 + param_5) * 2;
  lStack_368 = param_3;
  FUN_18072e450(auStack_358,param_3,param_2,iVar3);
  fVar2 = *param_4;
  dVar4 = (double)FUN_18072b3a0(puVar1,param_5);
  *param_1 = (float)(dVar4 * (double)(fVar2 * fVar2));
  fVar2 = param_4[1];
  dVar4 = (double)FUN_18072b3a0(puVar1 + (longlong)(param_7 + param_5) * 4,param_5);
  param_1[1] = (float)(dVar4 * (double)(fVar2 * fVar2));
  if (param_6 == 4) {
    iStack_378 = param_7;
    FUN_18072e450(auStack_358,lStack_368 + 0x40,(longlong)iVar3 * 4 + param_2,iVar3);
    fVar2 = param_4[2];
    dVar4 = (double)FUN_18072b3a0(puVar1,param_5);
    param_1[2] = (float)(dVar4 * (double)(fVar2 * fVar2));
    fVar2 = param_4[3];
    dVar4 = (double)FUN_18072b3a0(puVar1 + (longlong)(param_7 + param_5) * 4,param_5);
    param_1[3] = (float)(dVar4 * (double)(fVar2 * fVar2));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_398);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



