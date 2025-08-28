#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part089.c - 9 个函数

// 函数: void FUN_18071ebe0(float *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
void FUN_18071ebe0(float *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
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
  
  uVar10 = (ulonglong)param_5;
  if (param_4 == 1) {
    iVar7 = 0;
    if (3 < (int)param_5) {
      uVar4 = (param_5 - 4 >> 2) + 1;
      uVar10 = (ulonglong)uVar4;
      iVar7 = uVar4 * 4;
      do {
        fVar17 = *param_1 + param_1[4];
        fVar19 = *param_1 - param_1[4];
        fVar18 = param_1[1] - param_1[5];
        *param_1 = fVar17;
        param_1[1] = param_1[1] + param_1[5];
        param_1[4] = fVar17 - (param_1[2] + param_1[6]);
        param_1[5] = param_1[1] - (param_1[3] + param_1[7]);
        param_1[1] = param_1[3] + param_1[7] + param_1[1];
        *param_1 = param_1[2] + param_1[6] + *param_1;
        fVar17 = param_1[3];
        fVar16 = param_1[7];
        param_1[3] = fVar18 - (param_1[2] - param_1[6]);
        param_1[7] = (param_1[2] - param_1[6]) + fVar18;
        param_1[6] = fVar19 - (fVar17 - fVar16);
        param_1[2] = fVar19 + (fVar17 - fVar16);
        fVar19 = param_1[8] - param_1[0xc];
        fVar18 = param_1[9] - param_1[0xd];
        fVar17 = param_1[0xc] + param_1[8];
        param_1[8] = fVar17;
        param_1[9] = param_1[9] + param_1[0xd];
        param_1[0xc] = fVar17 - (param_1[0xe] + param_1[10]);
        param_1[0xd] = param_1[9] - (param_1[0xf] + param_1[0xb]);
        param_1[9] = param_1[0xf] + param_1[0xb] + param_1[9];
        param_1[8] = param_1[0xe] + param_1[10] + param_1[8];
        fVar17 = param_1[0xb];
        fVar16 = param_1[0xf];
        param_1[0xb] = fVar18 - (param_1[10] - param_1[0xe]);
        param_1[0xf] = (param_1[10] - param_1[0xe]) + fVar18;
        param_1[0xe] = fVar19 - (fVar17 - fVar16);
        param_1[10] = fVar19 + (fVar17 - fVar16);
        fVar20 = param_1[0x10] - param_1[0x14];
        fVar19 = param_1[0x11] - param_1[0x15];
        fVar17 = param_1[0x14] + param_1[0x10];
        param_1[0x10] = fVar17;
        param_1[0x11] = param_1[0x11] + param_1[0x15];
        param_1[0x14] = fVar17 - (param_1[0x12] + param_1[0x16]);
        param_1[0x15] = param_1[0x11] - (param_1[0x17] + param_1[0x13]);
        param_1[0x11] = param_1[0x17] + param_1[0x13] + param_1[0x11];
        param_1[0x10] = param_1[0x12] + param_1[0x16] + param_1[0x10];
        fVar17 = param_1[0x13];
        fVar16 = param_1[0x12];
        fVar18 = param_1[0x16];
        param_1[0x12] = (fVar17 - param_1[0x17]) + fVar20;
        param_1[0x13] = fVar19 - (fVar16 - fVar18);
        param_1[0x16] = fVar20 - (fVar17 - param_1[0x17]);
        param_1[0x17] = (fVar16 - fVar18) + fVar19;
        fVar19 = param_1[0x19] - param_1[0x1d];
        fVar20 = param_1[0x18] - param_1[0x1c];
        fVar17 = param_1[0x1c] + param_1[0x18];
        param_1[0x18] = fVar17;
        param_1[0x19] = param_1[0x19] + param_1[0x1d];
        param_1[0x1c] = fVar17 - (param_1[0x1e] + param_1[0x1a]);
        param_1[0x1d] = param_1[0x19] - (param_1[0x1f] + param_1[0x1b]);
        param_1[0x18] = param_1[0x1e] + param_1[0x1a] + param_1[0x18];
        param_1[0x19] = param_1[0x1f] + param_1[0x1b] + param_1[0x19];
        fVar17 = param_1[0x1b];
        fVar16 = param_1[0x1a];
        fVar18 = param_1[0x1e];
        param_1[0x1a] = (fVar17 - param_1[0x1f]) + fVar20;
        param_1[0x1b] = fVar19 - (fVar16 - fVar18);
        param_1[0x1e] = fVar20 - (fVar17 - param_1[0x1f]);
        param_1[0x1f] = (fVar16 - fVar18) + fVar19;
        param_1 = param_1 + 0x20;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (iVar7 < (int)param_5) {
      param_1 = param_1 + 1;
      uVar10 = (ulonglong)(param_5 - iVar7);
      do {
        fVar18 = *param_1 - param_1[4];
        fVar19 = param_1[-1] - param_1[3];
        fVar17 = param_1[3] + param_1[-1];
        param_1[-1] = fVar17;
        *param_1 = *param_1 + param_1[4];
        param_1[3] = fVar17 - (param_1[1] + param_1[5]);
        param_1[4] = *param_1 - (param_1[2] + param_1[6]);
        param_1[-1] = param_1[1] + param_1[5] + param_1[-1];
        *param_1 = param_1[2] + param_1[6] + *param_1;
        fVar17 = param_1[2];
        fVar16 = param_1[6];
        param_1[2] = fVar18 - (param_1[1] - param_1[5]);
        param_1[6] = (param_1[1] - param_1[5]) + fVar18;
        param_1[1] = fVar19 + (fVar17 - fVar16);
        param_1[5] = fVar19 - (fVar17 - fVar16);
        param_1 = param_1 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      return;
    }
  }
  else if (0 < (int)param_5) {
    lVar14 = (longlong)(int)(param_4 * 2);
    do {
      pfVar9 = *(float **)(param_3 + 0x38);
      if (0 < (int)param_4) {
        pfVar6 = param_1 + lVar14 * 2;
        lVar12 = (int)param_4 - lVar14;
        lVar5 = (int)(param_4 * 3) - lVar14;
        pfVar8 = param_1;
        pfVar11 = pfVar9;
        pfVar13 = pfVar9;
        uVar15 = (ulonglong)param_4;
        do {
          fVar17 = *pfVar13;
          pfVar1 = pfVar13 + 1;
          pfVar13 = pfVar13 + param_2 * 4;
          pfVar2 = pfVar11 + 1;
          fVar16 = *pfVar11;
          fVar18 = *pfVar11;
          pfVar3 = pfVar11 + 1;
          pfVar11 = pfVar11 + param_2 * 2;
          fVar25 = pfVar6[lVar12 * 2] * fVar18 - pfVar6[lVar12 * 2 + 1] * *pfVar2;
          fVar26 = pfVar6[lVar12 * 2] * *pfVar3 + pfVar6[lVar12 * 2 + 1] * fVar16;
          fVar24 = fVar17 * *pfVar6 - pfVar6[1] * *pfVar1;
          pfVar2 = pfVar9 + 1;
          pfVar3 = pfVar9 + 1;
          fVar22 = pfVar6[1] * fVar17 + *pfVar1 * *pfVar6;
          fVar17 = *pfVar9;
          fVar16 = *pfVar9;
          pfVar9 = pfVar9 + param_2 * 6;
          fVar18 = pfVar6[lVar14 * -2 + 1];
          fVar17 = pfVar6[lVar5 * 2] * fVar17 - pfVar6[lVar5 * 2 + 1] * *pfVar3;
          fVar21 = pfVar6[lVar5 * 2 + 1] * fVar16 + pfVar6[lVar5 * 2] * *pfVar2;
          fVar23 = *pfVar8 - fVar24;
          fVar24 = fVar24 + *pfVar8;
          fVar19 = fVar17 + fVar25;
          fVar20 = fVar18 - fVar22;
          fVar25 = fVar25 - fVar17;
          *pfVar8 = fVar24;
          pfVar6[lVar14 * -2 + 1] = fVar18 + fVar22;
          fVar16 = fVar21 + fVar26;
          fVar26 = fVar26 - fVar21;
          *pfVar6 = fVar24 - fVar19;
          pfVar6[1] = pfVar6[lVar14 * -2 + 1] - fVar16;
          fVar17 = *pfVar8;
          pfVar6[lVar14 * -2 + 1] = fVar16 + pfVar6[lVar14 * -2 + 1];
          *pfVar8 = fVar19 + fVar17;
          pfVar6[lVar12 * 2] = fVar23 + fVar26;
          pfVar8 = pfVar8 + 2;
          pfVar6[lVar12 * 2 + 1] = fVar20 - fVar25;
          pfVar6[lVar5 * 2] = fVar23 - fVar26;
          pfVar6[lVar5 * 2 + 1] = fVar20 + fVar25;
          pfVar6 = pfVar6 + 2;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      param_1 = param_1 + (longlong)param_6 * 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}





// 函数: void FUN_18071efcb(longlong param_1,undefined8 param_2,longlong param_3)
void FUN_18071efcb(longlong param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *unaff_RDI;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  longlong unaff_R12;
  longlong lVar13;
  longlong lVar14;
  longlong unaff_R15;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  longlong lStackX_8;
  longlong in_stack_000000b0;
  int in_stack_000000c8;
  
  iVar5 = (int)unaff_R15;
  lVar13 = (longlong)(iVar5 * 2);
  lStackX_8 = param_1;
  do {
    pfVar9 = *(float **)(param_3 + 0x38);
    if (0 < iVar5) {
      pfVar7 = unaff_RDI + lVar13 * 2;
      lVar11 = iVar5 - lVar13;
      lVar6 = iVar5 * 3 - lVar13;
      pfVar8 = unaff_RDI;
      pfVar10 = pfVar9;
      pfVar12 = pfVar9;
      lVar14 = unaff_R15;
      do {
        fVar18 = *pfVar12;
        pfVar1 = pfVar12 + 1;
        pfVar12 = pfVar12 + unaff_R12 * 4;
        pfVar2 = pfVar10 + 1;
        fVar15 = *pfVar10;
        fVar4 = *pfVar10;
        pfVar3 = pfVar10 + 1;
        pfVar10 = pfVar10 + unaff_R12 * 2;
        fVar23 = pfVar7[lVar11 * 2] * fVar4 - pfVar7[lVar11 * 2 + 1] * *pfVar2;
        fVar24 = pfVar7[lVar11 * 2] * *pfVar3 + pfVar7[lVar11 * 2 + 1] * fVar15;
        fVar22 = fVar18 * *pfVar7 - pfVar7[1] * *pfVar1;
        pfVar2 = pfVar9 + 1;
        pfVar3 = pfVar9 + 1;
        fVar20 = pfVar7[1] * fVar18 + *pfVar1 * *pfVar7;
        fVar18 = *pfVar9;
        fVar15 = *pfVar9;
        pfVar9 = pfVar9 + unaff_R12 * 6;
        fVar4 = pfVar7[lVar13 * -2 + 1];
        fVar18 = pfVar7[lVar6 * 2] * fVar18 - pfVar7[lVar6 * 2 + 1] * *pfVar3;
        fVar19 = pfVar7[lVar6 * 2 + 1] * fVar15 + pfVar7[lVar6 * 2] * *pfVar2;
        fVar21 = *pfVar8 - fVar22;
        fVar22 = fVar22 + *pfVar8;
        fVar16 = fVar18 + fVar23;
        fVar17 = fVar4 - fVar20;
        fVar23 = fVar23 - fVar18;
        *pfVar8 = fVar22;
        pfVar7[lVar13 * -2 + 1] = fVar4 + fVar20;
        fVar15 = fVar19 + fVar24;
        fVar24 = fVar24 - fVar19;
        *pfVar7 = fVar22 - fVar16;
        pfVar7[1] = pfVar7[lVar13 * -2 + 1] - fVar15;
        fVar18 = *pfVar8;
        pfVar7[lVar13 * -2 + 1] = fVar15 + pfVar7[lVar13 * -2 + 1];
        *pfVar8 = fVar16 + fVar18;
        pfVar7[lVar11 * 2] = fVar21 + fVar24;
        pfVar8 = pfVar8 + 2;
        pfVar7[lVar11 * 2 + 1] = fVar17 - fVar23;
        pfVar7[lVar6 * 2] = fVar21 - fVar24;
        pfVar7[lVar6 * 2 + 1] = fVar17 + fVar23;
        pfVar7 = pfVar7 + 2;
        lVar14 = lVar14 + -1;
        param_3 = in_stack_000000b0;
      } while (lVar14 != 0);
    }
    unaff_RDI = unaff_RDI + (longlong)in_stack_000000c8 * 2;
    lStackX_8 = lStackX_8 + -1;
  } while (lStackX_8 != 0);
  return;
}





// 函数: void FUN_18071f257(void)
void FUN_18071f257(void)

{
  return;
}





// 函数: void FUN_18071f270(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
void FUN_18071f270(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
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
  ulonglong uStack_128;
  
  pfVar5 = *(float **)(param_3 + 0x38);
  uVar13 = (ulonglong)param_5;
  lVar6 = (longlong)(int)param_4;
  lVar7 = lVar6 * param_2;
  fVar1 = pfVar5[lVar7 * 2];
  fVar2 = pfVar5[lVar7 * 2 + 1];
  fVar3 = pfVar5[lVar7 * 4];
  fVar4 = pfVar5[lVar7 * 4 + 1];
  if (0 < (int)param_5) {
    lVar7 = (longlong)(int)(param_4 * 3);
    pfVar14 = (float *)(lVar7 * 8 + param_1);
    do {
      if (0 < (int)param_4) {
        lVar8 = (longlong)(int)(param_4 * 4);
        pfVar11 = pfVar14 + lVar7 * -2 + 1;
        lVar9 = (longlong)(int)(param_4 * 2);
        uStack_128 = (ulonglong)param_4;
        pfVar10 = pfVar5;
        pfVar12 = pfVar14;
        pfVar15 = pfVar5;
        pfVar16 = pfVar5;
        pfVar17 = pfVar5;
        do {
          fVar23 = pfVar11[lVar6 * 2 + -1] * pfVar10[1] + pfVar11[lVar6 * 2] * *pfVar10;
          fVar25 = pfVar11[lVar6 * 2 + -1] * *pfVar10 - pfVar11[lVar6 * 2] * pfVar10[1];
          fVar30 = pfVar11[-1];
          fVar32 = pfVar11[lVar9 * 2] * *pfVar16 + pfVar11[lVar9 * 2 + -1] * pfVar16[1];
          fVar18 = *pfVar11;
          fVar33 = pfVar11[lVar9 * 2 + -1] * *pfVar16 - pfVar11[lVar9 * 2] * pfVar16[1];
          fVar31 = *pfVar15 * *pfVar12 - pfVar11[lVar7 * 2] * pfVar15[1];
          fVar21 = pfVar15[1] * *pfVar12 + pfVar11[lVar7 * 2] * *pfVar15;
          fVar19 = pfVar11[lVar8 * 2] * *pfVar17 + pfVar11[lVar8 * 2 + -1] * pfVar17[1];
          fVar28 = pfVar11[lVar8 * 2 + -1] * *pfVar17 - pfVar11[lVar8 * 2] * pfVar17[1];
          fVar27 = fVar19 + fVar23;
          fVar23 = fVar23 - fVar19;
          fVar29 = fVar28 + fVar25;
          fVar26 = fVar21 + fVar32;
          fVar32 = fVar32 - fVar21;
          fVar24 = fVar31 + fVar33;
          *pfVar11 = fVar26 + fVar27 + fVar18;
          pfVar11[-1] = fVar29 + fVar24 + fVar30;
          fVar22 = fVar3 * fVar24 + fVar29 * fVar1 + fVar30;
          fVar20 = fVar3 * fVar26 + fVar1 * fVar27 + fVar18;
          pfVar10 = pfVar10 + param_2 * 2;
          pfVar16 = pfVar16 + param_2 * 4;
          pfVar15 = pfVar15 + param_2 * 6;
          pfVar17 = pfVar17 + param_2 * 8;
          fVar21 = fVar2 * fVar23 + fVar4 * fVar32;
          fVar19 = (fVar31 - fVar33) * fVar4 + (fVar28 - fVar25) * fVar2;
          pfVar11[lVar6 * 2 + -1] = fVar22 - fVar21;
          pfVar11[lVar6 * 2] = fVar20 - fVar19;
          pfVar11[lVar8 * 2] = fVar20 + fVar19;
          pfVar11[lVar8 * 2 + -1] = fVar22 + fVar21;
          fVar30 = fVar29 * fVar3 + fVar1 * fVar24 + fVar30;
          fVar21 = (fVar25 - fVar28) * fVar4 - (fVar33 - fVar31) * fVar2;
          fVar18 = fVar3 * fVar27 + fVar1 * fVar26 + fVar18;
          fVar19 = fVar2 * fVar32 - fVar23 * fVar4;
          pfVar11[lVar9 * 2] = fVar21 + fVar18;
          pfVar11[lVar9 * 2 + -1] = fVar19 + fVar30;
          *pfVar12 = fVar30 - fVar19;
          pfVar12 = pfVar12 + 2;
          pfVar11[lVar7 * 2] = fVar18 - fVar21;
          pfVar11 = pfVar11 + 2;
          uStack_128 = uStack_128 - 1;
        } while (uStack_128 != 0);
      }
      pfVar14 = pfVar14 + (longlong)param_6 * 2;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}





// 函数: void FUN_18071f2ed(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
void FUN_18071f2ed(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  float *param_9)

{
  longlong in_RAX;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  longlong unaff_RBX;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *in_R10;
  float *pfVar9;
  ulonglong in_R11;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  float unaff_retaddr;
  float unaff_retaddr_00;
  ulonglong uStackX_10;
  ulonglong uStackX_20;
  float in_stack_00000140;
  longlong in_stack_00000148;
  float in_stack_00000150;
  uint in_stack_00000158;
  
  uVar7 = in_R11 & 0xffffffff;
  lVar3 = (longlong)(int)(param_4 * 3);
  pfVar8 = (float *)(lVar3 * 8 + unaff_RBX);
  uStackX_20 = in_R11;
  do {
    lVar5 = param_2;
    pfVar9 = in_R10;
    if (0 < (int)param_4) {
      lVar1 = (longlong)(int)(param_4 * 4);
      pfVar4 = pfVar8 + lVar3 * -2 + 1;
      lVar2 = (longlong)(int)(param_4 * 2);
      uStackX_10 = (ulonglong)param_4;
      pfVar6 = pfVar8;
      pfVar10 = in_R10;
      pfVar11 = in_R10;
      pfVar12 = in_R10;
      do {
        fVar18 = pfVar4[param_7 * 2 + -1] * in_R10[1] + pfVar4[param_7 * 2] * *in_R10;
        fVar20 = pfVar4[param_7 * 2 + -1] * *in_R10 - pfVar4[param_7 * 2] * in_R10[1];
        fVar25 = pfVar4[-1];
        fVar27 = pfVar4[lVar2 * 2] * *pfVar11 + pfVar4[lVar2 * 2 + -1] * pfVar11[1];
        fVar13 = *pfVar4;
        fVar28 = pfVar4[lVar2 * 2 + -1] * *pfVar11 - pfVar4[lVar2 * 2] * pfVar11[1];
        fVar26 = *pfVar10 * *pfVar6 - pfVar4[lVar3 * 2] * pfVar10[1];
        fVar16 = pfVar10[1] * *pfVar6 + pfVar4[lVar3 * 2] * *pfVar10;
        fVar14 = pfVar4[lVar1 * 2] * *pfVar12 + pfVar4[lVar1 * 2 + -1] * pfVar12[1];
        fVar23 = pfVar4[lVar1 * 2 + -1] * *pfVar12 - pfVar4[lVar1 * 2] * pfVar12[1];
        fVar22 = fVar14 + fVar18;
        fVar18 = fVar18 - fVar14;
        fVar24 = fVar23 + fVar20;
        fVar21 = fVar16 + fVar27;
        fVar27 = fVar27 - fVar16;
        fVar19 = fVar26 + fVar28;
        *pfVar4 = fVar21 + fVar22 + fVar13;
        pfVar4[-1] = fVar24 + fVar19 + fVar25;
        fVar17 = in_stack_00000150 * fVar19 + fVar24 * unaff_retaddr + fVar25;
        fVar15 = in_stack_00000150 * fVar21 + unaff_retaddr * fVar22 + fVar13;
        in_R10 = in_R10 + param_2 * 2;
        pfVar11 = pfVar11 + param_2 * 4;
        pfVar10 = pfVar10 + param_2 * 6;
        pfVar12 = pfVar12 + param_2 * 8;
        fVar16 = unaff_retaddr_00 * fVar18 + in_stack_00000140 * fVar27;
        fVar14 = (fVar26 - fVar28) * in_stack_00000140 + (fVar23 - fVar20) * unaff_retaddr_00;
        pfVar4[param_7 * 2 + -1] = fVar17 - fVar16;
        pfVar4[param_7 * 2] = fVar15 - fVar14;
        pfVar4[lVar1 * 2] = fVar15 + fVar14;
        pfVar4[lVar1 * 2 + -1] = fVar17 + fVar16;
        fVar25 = fVar24 * in_stack_00000150 + unaff_retaddr * fVar19 + fVar25;
        fVar16 = (fVar20 - fVar23) * in_stack_00000140 - (fVar28 - fVar26) * unaff_retaddr_00;
        fVar13 = in_stack_00000150 * fVar22 + unaff_retaddr * fVar21 + fVar13;
        fVar14 = unaff_retaddr_00 * fVar27 - fVar18 * in_stack_00000140;
        pfVar4[lVar2 * 2] = fVar16 + fVar13;
        pfVar4[lVar2 * 2 + -1] = fVar14 + fVar25;
        *pfVar6 = fVar25 - fVar14;
        pfVar6 = pfVar6 + 2;
        pfVar4[lVar3 * 2] = fVar13 - fVar16;
        pfVar4 = pfVar4 + 2;
        uStackX_10 = uStackX_10 - 1;
        lVar5 = in_stack_00000148;
        uVar7 = uStackX_20;
        pfVar9 = param_9;
        param_4 = in_stack_00000158;
      } while (uStackX_10 != 0);
    }
    pfVar8 = pfVar8 + in_RAX * 2;
    uVar7 = uVar7 - 1;
    param_2 = lVar5;
    in_R10 = pfVar9;
    uStackX_20 = uVar7;
  } while (uVar7 != 0);
  return;
}





// 函数: void FUN_18071f792(void)
void FUN_18071f792(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18071f7a0(int *param_1,float *param_2,float *param_3)
void FUN_18071f7a0(int *param_1,float *param_2,float *param_3)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  short *psVar5;
  float fVar6;
  short sVar7;
  float *pfVar8;
  byte bVar9;
  float *pfVar10;
  short *psVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_e8 [32];
  uint uStack_c8;
  int iStack_c0;
  int iStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  uint auStack_a0 [8];
  ulonglong uStack_80;
  
  uStack_80 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  fVar6 = (float)param_1[1];
  iVar20 = 0;
  if (0 < *param_1) {
    lVar12 = 0;
    do {
      iVar20 = iVar20 + 1;
      fVar25 = *param_2;
      lVar12 = lVar12 + 2;
      fVar26 = param_2[1];
      param_2 = param_2 + 2;
      param_3[(longlong)*(short *)(*(longlong *)(param_1 + 0xc) + -2 + lVar12) * 2] = fVar25 * fVar6
      ;
      param_3[(longlong)*(short *)(*(longlong *)(param_1 + 0xc) + -2 + lVar12) * 2 + 1] =
           fVar26 * fVar6;
    } while (iVar20 < *param_1);
  }
  psVar1 = (short *)((longlong)param_1 + 0xe);
  auStack_a0[0] = 1;
  iStack_b8 = param_1[2];
  if (param_1[2] < 1) {
    iStack_b8 = 0;
  }
  psVar11 = psVar1;
  iVar20 = 0;
  do {
    iVar17 = iVar20;
    psVar5 = (short *)((longlong)param_1 + (0xc - (longlong)psVar1) + (longlong)psVar11);
    piVar4 = (int *)(((longlong)auStack_a0 - (longlong)psVar1) + (longlong)psVar11);
    sVar7 = *psVar11;
    psVar11 = psVar11 + 2;
    uVar23 = (ulonglong)iVar17;
    *(int *)(((longlong)auStack_a0 - (longlong)psVar1) + (longlong)psVar11) = (int)*psVar5 * *piVar4
    ;
    iVar20 = iVar17 + 1;
  } while (sVar7 != 1);
  if (-1 < iVar17) {
    puVar15 = auStack_a0 + uVar23;
    lStack_a8 = (longlong)param_1 - (longlong)auStack_a0;
    iVar20 = iStack_b8;
    iVar17 = (int)*(short *)((longlong)param_1 + (longlong)((iVar17 + 1) * 2) * 2 + 10);
    do {
      if ((int)uVar23 == 0) {
        iVar24 = 1;
      }
      else {
        iVar24 = (int)*(short *)(lStack_a8 + 10 + (longlong)puVar15);
      }
      sVar7 = *(short *)(lStack_a8 + 0xc + (longlong)puVar15);
      if (sVar7 == 2) {
        FUN_18071e580(param_3,iVar17,*puVar15);
      }
      else {
        bVar9 = (byte)iVar20;
        if (sVar7 == 3) {
          uVar22 = *puVar15;
          lVar12 = (longlong)iVar17;
          lVar14 = (longlong)(int)(uVar22 << (bVar9 & 0x1f));
          lVar13 = (longlong)(iVar17 * 2);
          fVar6 = *(float *)(*(longlong *)(param_1 + 0xe) + 4 + lVar12 * lVar14 * 8);
          iVar20 = iStack_b8;
          if (0 < (int)uVar22) {
            lStack_b0 = lVar14 * 8;
            uVar21 = (ulonglong)uVar22;
            pfVar16 = param_3;
            do {
              pfVar10 = *(float **)(param_1 + 0xe);
              pfVar8 = pfVar16;
              pfVar18 = pfVar10;
              lVar19 = lVar12;
              do {
                fVar25 = *pfVar18;
                pfVar2 = pfVar18 + 1;
                fVar26 = *pfVar10;
                pfVar18 = pfVar18 + lVar14 * 2;
                fVar29 = fVar25 * pfVar8[lVar12 * 2 + 1] + *pfVar2 * pfVar8[lVar12 * 2];
                pfVar3 = pfVar10 + 1;
                pfVar10 = pfVar10 + lVar14 * 4;
                fVar30 = fVar25 * pfVar8[lVar12 * 2] - *pfVar2 * pfVar8[lVar12 * 2 + 1];
                fVar27 = fVar26 * pfVar8[lVar13 * 2] - *pfVar3 * pfVar8[lVar13 * 2 + 1];
                fVar28 = pfVar8[lVar13 * 2 + 1] * fVar26 + *pfVar3 * pfVar8[lVar13 * 2];
                fVar26 = fVar27 + fVar30;
                fVar25 = fVar28 + fVar29;
                fVar28 = (fVar29 - fVar28) * fVar6;
                fVar27 = (fVar30 - fVar27) * fVar6;
                pfVar8[lVar12 * 2] = *pfVar8 - fVar26 * 0.5;
                pfVar8[lVar12 * 2 + 1] = pfVar8[1] - fVar25 * 0.5;
                *pfVar8 = fVar26 + *pfVar8;
                pfVar8[1] = fVar25 + pfVar8[1];
                pfVar8[lVar13 * 2] = fVar28 + pfVar8[lVar12 * 2];
                pfVar8[lVar13 * 2 + 1] = pfVar8[lVar12 * 2 + 1] - fVar27;
                fVar25 = pfVar8[lVar12 * 2];
                pfVar8[lVar12 * 2 + 1] = fVar27 + pfVar8[lVar12 * 2 + 1];
                pfVar8[lVar12 * 2] = fVar25 - fVar28;
                pfVar8 = pfVar8 + 2;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
              pfVar16 = pfVar16 + (longlong)iVar24 * 2;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
        }
        else if (sVar7 == 4) {
          uStack_c8 = *puVar15;
          iStack_c0 = iVar24;
          FUN_18071ebe0(param_3,(longlong)(int)(uStack_c8 << (bVar9 & 0x1f)),param_1);
        }
        else if (sVar7 == 5) {
          uStack_c8 = *puVar15;
          iStack_c0 = iVar24;
          FUN_18071f270(param_3,(longlong)(int)(uStack_c8 << (bVar9 & 0x1f)),param_1);
        }
      }
      puVar15 = puVar15 + -1;
      uVar22 = (int)uVar23 - 1;
      uVar23 = (ulonglong)uVar22;
      iVar17 = iVar24;
    } while (-1 < (int)uVar22);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_80 ^ (ulonglong)auStack_e8);
}





// 函数: void FUN_18071f88a(float param_1,undefined8 param_2,undefined8 param_3,int param_4,
void FUN_18071f88a(float param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,byte param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong unaff_RBX;
  longlong lVar8;
  byte unaff_SIL;
  longlong lVar9;
  uint *puVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *unaff_R12;
  uint uVar15;
  ulonglong unaff_R13;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lStack0000000000000040;
  ulonglong in_stack_00000068;
  
  puVar10 = (uint *)(&stack0x00000048 + unaff_R13 * 4);
  lStack0000000000000040 = unaff_RBX - (longlong)&stack0x00000048;
  do {
    if ((int)unaff_R13 == 0) {
      iVar16 = 1;
    }
    else {
      iVar16 = (int)*(short *)(lStack0000000000000040 + 10 + (longlong)puVar10);
    }
    sVar4 = *(short *)(lStack0000000000000040 + 0xc + (longlong)puVar10);
    if (sVar4 == 2) {
      param_1 = (float)FUN_18071e580(param_1,param_4,*puVar10);
    }
    else if (sVar4 == 3) {
      uVar15 = *puVar10;
      lVar7 = (longlong)param_4;
      lVar9 = (longlong)(int)(uVar15 << (unaff_SIL & 0x1f));
      lVar8 = (longlong)(param_4 * 2);
      fVar3 = *(float *)(*(longlong *)(unaff_RBX + 0x38) + 4 + lVar7 * lVar9 * 8);
      unaff_SIL = param_6;
      if (0 < (int)uVar15) {
        uVar14 = (ulonglong)uVar15;
        pfVar11 = unaff_R12;
        do {
          pfVar6 = *(float **)(unaff_RBX + 0x38);
          pfVar5 = pfVar11;
          pfVar12 = pfVar6;
          lVar13 = lVar7;
          do {
            fVar17 = *pfVar12;
            pfVar1 = pfVar12 + 1;
            fVar18 = *pfVar6;
            pfVar12 = pfVar12 + lVar9 * 2;
            fVar21 = fVar17 * pfVar5[lVar7 * 2 + 1] + *pfVar1 * pfVar5[lVar7 * 2];
            pfVar2 = pfVar6 + 1;
            pfVar6 = pfVar6 + lVar9 * 4;
            fVar22 = fVar17 * pfVar5[lVar7 * 2] - *pfVar1 * pfVar5[lVar7 * 2 + 1];
            fVar19 = fVar18 * pfVar5[lVar8 * 2] - *pfVar2 * pfVar5[lVar8 * 2 + 1];
            fVar20 = pfVar5[lVar8 * 2 + 1] * fVar18 + *pfVar2 * pfVar5[lVar8 * 2];
            fVar18 = fVar19 + fVar22;
            fVar17 = fVar20 + fVar21;
            param_1 = (fVar21 - fVar20) * fVar3;
            fVar19 = (fVar22 - fVar19) * fVar3;
            pfVar5[lVar7 * 2] = *pfVar5 - fVar18 * 0.5;
            pfVar5[lVar7 * 2 + 1] = pfVar5[1] - fVar17 * 0.5;
            *pfVar5 = fVar18 + *pfVar5;
            pfVar5[1] = fVar17 + pfVar5[1];
            pfVar5[lVar8 * 2] = param_1 + pfVar5[lVar7 * 2];
            pfVar5[lVar8 * 2 + 1] = pfVar5[lVar7 * 2 + 1] - fVar19;
            param_1 = pfVar5[lVar7 * 2] - param_1;
            pfVar5[lVar7 * 2 + 1] = fVar19 + pfVar5[lVar7 * 2 + 1];
            pfVar5[lVar7 * 2] = param_1;
            pfVar5 = pfVar5 + 2;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          pfVar11 = pfVar11 + (longlong)iVar16 * 2;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    else if (sVar4 == 4) {
      param_1 = (float)FUN_18071ebe0(param_1,(longlong)(int)(*puVar10 << (unaff_SIL & 0x1f)));
    }
    else if (sVar4 == 5) {
      param_1 = (float)FUN_18071f270(param_1,(longlong)(int)(*puVar10 << (unaff_SIL & 0x1f)));
    }
    puVar10 = puVar10 + -1;
    uVar15 = (int)unaff_R13 - 1;
    unaff_R13 = (ulonglong)uVar15;
    param_4 = iVar16;
  } while (-1 < (int)uVar15);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000068 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18071fb3f(void)
void FUN_18071fb3f(void)

{
  ulonglong in_stack_00000068;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000068 ^ (ulonglong)&stack0x00000000);
}





