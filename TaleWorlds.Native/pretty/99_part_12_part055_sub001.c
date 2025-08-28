#include "TaleWorlds.Native.Split.h"

// 99_part_12_part055_sub001.c - 9 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_12_part055.c - 9 个函数


// 函数: void FUN_1807ef00a(longlong param_1)
void FUN_1807ef00a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *in_RAX;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *in_RAX;
  uVar3 = func_0x000180789330(lVar1);
                    // WARNING: Subroutine does not return
  memcpy(uVar3,uVar2,(longlong)*(int *)(lVar1 + 0xc));
}



undefined8 FUN_1807ef05a(void)

{
  return 0;
}



undefined8 FUN_1807ef070(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_10 [2];
  
  if (param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    FUN_180788f70(lVar1);
    auStackX_10[0] = 0;
    auStackX_8[0] = 0;
    func_0x000180746360(*(undefined8 *)(lVar1 + 0x30),auStackX_8,auStackX_10);
    uVar2 = FUN_1807869c0(lVar1,auStackX_8[0],auStackX_10[0],param_3 * 4,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_1807ef07d(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int unaff_EDI;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_180788f70(lVar1);
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  func_0x000180746360(*(undefined8 *)(lVar1 + 0x30),&stack0x00000040,&stack0x00000048);
  uVar2 = FUN_1807869c0(lVar1,in_stack_00000040,in_stack_00000048,unaff_EDI * 4,0);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_1807ef0db(void)

{
  return 0;
}



undefined8 FUN_1807ef0f0(longlong param_1)

{
  func_0x000180786980(*(undefined8 *)(param_1 + 0xb8));
  return 0;
}



undefined8 FUN_1807ef110(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1807880d0(*(longlong *)(param_1 + 0xb8),param_2,
                *(int *)(*(longlong *)(param_1 + 0xb8) + 0x18) * param_3);
  return 0;
}



undefined8 FUN_1807ef140(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  if (param_3 != '\0') {
    func_0x0001807892e0(uVar1);
  }
  if (param_4 != '\0') {
    func_0x0001807892f0(uVar1,param_2);
  }
  return 0;
}







// 函数: void FUN_1807ef190(void)
void FUN_1807ef190(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c31154,0,0x5c);
}







// 函数: void FUN_1807ef240(float *param_1,longlong param_2,int param_3)
void FUN_1807ef240(float *param_1,longlong param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar41;
  float fVar42;
  
  if (param_3 == 8) {
    fVar9 = param_1[6] + param_1[4];
    fVar11 = param_1[4] - param_1[6];
    fVar8 = param_1[7] + param_1[5];
    fVar31 = param_1[5] - param_1[7];
    fVar40 = *param_1 - param_1[2];
    fVar19 = param_1[1] + param_1[3];
    fVar23 = param_1[1] - param_1[3];
    fVar26 = param_1[0xc] + param_1[0xe];
    fVar38 = param_1[0xc] - param_1[0xe];
    fVar41 = *param_1 + param_1[2];
    fVar22 = fVar31 + fVar40;
    fVar35 = param_1[9] - param_1[0xb];
    fVar14 = param_1[9] + param_1[0xb];
    fVar16 = param_1[8] + param_1[10];
    fVar33 = param_1[8] - param_1[10];
    fVar28 = param_1[0xd] + param_1[0xf];
    fVar36 = param_1[0xd] - param_1[0xf];
    fVar12 = fVar41 - fVar9;
    fVar41 = fVar41 + fVar9;
    fVar42 = fVar23 - fVar11;
    fVar11 = fVar11 + fVar23;
    fVar20 = fVar19 + fVar8;
    fVar19 = fVar19 - fVar8;
    fVar40 = fVar40 - fVar31;
    fVar23 = fVar26 + fVar16;
    fVar16 = fVar16 - fVar26;
    fVar26 = fVar28 + fVar14;
    fVar14 = fVar14 - fVar28;
    fVar9 = fVar33 - fVar35;
    fVar35 = fVar35 + fVar33;
    param_1[1] = fVar26 + fVar20;
    fVar28 = ((fVar9 - fVar38) - fVar36) * 0.70710677;
    fVar31 = ((fVar35 + fVar38) - fVar36) * 0.70710677;
    fVar8 = ((fVar35 - fVar38) + fVar36) * 0.70710677;
    fVar9 = (fVar9 + fVar38 + fVar36) * 0.70710677;
    *param_1 = fVar23 + fVar41;
    param_1[3] = fVar8 + fVar11;
    param_1[8] = fVar41 - fVar23;
    param_1[2] = fVar9 + fVar40;
    param_1[5] = fVar16 + fVar19;
    param_1[10] = fVar40 - fVar9;
    param_1[4] = fVar12 - fVar14;
    param_1[0xc] = fVar14 + fVar12;
    param_1[0xd] = fVar19 - fVar16;
    param_1[6] = fVar22 - fVar31;
    param_1[0xe] = fVar31 + fVar22;
    param_1[7] = fVar28 + fVar42;
    param_1[0xf] = fVar42 - fVar28;
    param_1[9] = fVar20 - fVar26;
    param_1[0xb] = fVar11 - fVar8;
    return;
  }
  if (param_3 != 0x10) {
    lVar6 = (longlong)((param_3 / 2) * 2);
    iVar1 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
    lVar3 = (longlong)iVar1;
    FUN_1807ef240(param_1,param_2 + (longlong)(iVar1 * 2) * 4);
    lVar4 = param_2 + (longlong)((((int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3) + iVar1) * 2) * 4;
    FUN_1807ef240(param_1 + lVar6,lVar4,iVar1);
    FUN_1807ef240(param_1 + iVar1 * 6,lVar4,iVar1);
    if (0 < lVar3) {
      pfVar2 = param_1 + lVar3 * 2 + 1;
      lVar5 = param_3 / 2 - lVar3;
      lVar7 = (param_2 + lVar3 * -8) - (longlong)param_1;
      lVar4 = lVar3;
      do {
        fVar8 = *(float *)(lVar7 + -4 + (longlong)pfVar2);
        fVar40 = *(float *)(lVar7 + (longlong)pfVar2);
        fVar16 = *(float *)((longlong)(param_1 + iVar1 * 6) + (lVar3 * -8 - (longlong)param_1) + -4
                           + (longlong)pfVar2);
        fVar9 = *(float *)((longlong)pfVar2 +
                          (longlong)(param_1 + lVar6) + (lVar3 * -8 - (longlong)param_1) + -4);
        fVar41 = fVar9 * fVar40 + pfVar2[lVar6 + lVar3 * -2] * fVar8;
        fVar14 = fVar9 * fVar8 - pfVar2[lVar6 + lVar3 * -2] * fVar40;
        fVar9 = pfVar2[-1];
        fVar11 = *pfVar2;
        fVar12 = fVar16 * fVar8 - pfVar2[(longlong)(iVar1 * 6) + lVar3 * -2] * -fVar40;
        fVar19 = fVar16 * -fVar40 + pfVar2[(longlong)(iVar1 * 6) + lVar3 * -2] * fVar8;
        fVar8 = pfVar2[lVar3 * -2];
        fVar16 = fVar12 + fVar14;
        fVar14 = fVar14 - fVar12;
        fVar40 = pfVar2[lVar3 * -2 + -1];
        fVar12 = fVar19 + fVar41;
        fVar41 = fVar41 - fVar19;
        pfVar2[lVar3 * -2 + -1] = fVar40 + fVar16;
        pfVar2[lVar3 * -2] = fVar8 + fVar12;
        pfVar2[-1] = fVar9 - fVar41;
        *pfVar2 = fVar11 + fVar14;
        pfVar2[lVar5 * 2 + -1] = fVar40 - fVar16;
        pfVar2[lVar5 * 2] = fVar8 - fVar12;
        pfVar2[lVar3 * 4 + -1] = fVar9 + fVar41;
        pfVar2[lVar3 * 4] = fVar11 - fVar14;
        pfVar2 = pfVar2 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    return;
  }
  fVar26 = *param_1 - param_1[2];
  fVar29 = param_1[1] + param_1[3];
  fVar24 = param_1[0xc] - param_1[0xe];
  fVar17 = param_1[0x10] + param_1[0x12];
  fVar25 = param_1[0xd] - param_1[0xf];
  fVar9 = param_1[1] - param_1[3];
  fVar40 = param_1[6] + param_1[4];
  fVar20 = param_1[0x10] - param_1[0x12];
  fVar11 = param_1[0x11] - param_1[0x13];
  fVar37 = *param_1 + param_1[2];
  fVar23 = param_1[0x11] + param_1[0x13];
  fVar13 = param_1[4] - param_1[6];
  fVar8 = param_1[7] + param_1[5];
  fVar16 = param_1[5] - param_1[7];
  fVar31 = fVar37 - fVar40;
  fVar37 = fVar37 + fVar40;
  fVar42 = fVar29 - fVar8;
  fVar29 = fVar29 + fVar8;
  fVar8 = fVar16 + fVar26;
  fVar26 = fVar26 - fVar16;
  fVar41 = fVar9 - fVar13;
  fVar13 = fVar13 + fVar9;
  fVar16 = param_1[0x16] + param_1[0x14];
  fVar32 = param_1[0x14] - param_1[0x16];
  fVar40 = param_1[0x17] + param_1[0x15];
  fVar34 = fVar17 + fVar16;
  fVar9 = param_1[0x15] - param_1[0x17];
  fVar17 = fVar17 - fVar16;
  fVar33 = fVar23 + fVar40;
  fVar23 = fVar23 - fVar40;
  fVar40 = fVar9 + fVar20;
  fVar20 = fVar20 - fVar9;
  fVar16 = fVar11 - fVar32;
  fVar32 = fVar32 + fVar11;
  fVar28 = param_1[0x1e] + param_1[0x1c];
  fVar39 = param_1[0x1c] - param_1[0x1e];
  fVar9 = param_1[0x1f] + param_1[0x1d];
  fVar15 = param_1[0x1d] - param_1[0x1f];
  fVar30 = param_1[0x18] + param_1[0x1a] + fVar28;
  fVar28 = (param_1[0x18] + param_1[0x1a]) - fVar28;
  fVar18 = param_1[0x19] + param_1[0x1b] + fVar9;
  fVar9 = (param_1[0x19] + param_1[0x1b]) - fVar9;
  fVar11 = fVar15 + (param_1[0x18] - param_1[0x1a]);
  fVar15 = (param_1[0x18] - param_1[0x1a]) - fVar15;
  fVar22 = (param_1[0x19] - param_1[0x1b]) - fVar39;
  fVar39 = fVar39 + (param_1[0x19] - param_1[0x1b]);
  fVar12 = param_1[0xd] + param_1[0xf] + param_1[9] + param_1[0xb];
  fVar14 = (param_1[9] + param_1[0xb]) - (param_1[0xd] + param_1[0xf]);
  fVar19 = param_1[0xc] + param_1[0xe] + param_1[8] + param_1[10];
  fVar35 = (param_1[8] + param_1[10]) - (param_1[0xc] + param_1[0xe]);
  fVar36 = fVar37 - fVar19;
  fVar37 = fVar37 + fVar19;
  fVar38 = fVar29 - fVar12;
  fVar29 = fVar29 + fVar12;
  fVar12 = fVar14 + fVar31;
  fVar31 = fVar31 - fVar14;
  fVar19 = fVar42 - fVar35;
  fVar42 = fVar42 + fVar35;
  fVar35 = (param_1[8] - param_1[10]) - (param_1[9] - param_1[0xb]);
  fVar21 = (param_1[9] - param_1[0xb]) + (param_1[8] - param_1[10]);
  fVar10 = ((fVar35 - fVar24) - fVar25) * 0.70710677;
  fVar14 = ((fVar21 - fVar24) + fVar25) * 0.70710677;
  fVar35 = (fVar35 + fVar24 + fVar25) * 0.70710677;
  fVar25 = ((fVar21 + fVar24) - fVar25) * 0.70710677;
  fVar21 = fVar26 - fVar35;
  fVar26 = fVar26 + fVar35;
  fVar24 = fVar13 - fVar14;
  fVar13 = fVar13 + fVar14;
  fVar14 = fVar25 + fVar8;
  fVar8 = fVar8 - fVar25;
  fVar35 = fVar41 - fVar10;
  fVar41 = fVar41 + fVar10;
  fVar27 = fVar30 + fVar34;
  fVar34 = fVar34 - fVar30;
  fVar30 = fVar18 + fVar33;
  fVar33 = fVar33 - fVar18;
  fVar18 = fVar32 * 0.9238795 + fVar20 * 0.38268346;
  fVar32 = fVar20 * 0.9238795 - fVar32 * 0.38268346;
  fVar20 = fVar15 * 0.9238795 - fVar39 * -0.38268346;
  fVar10 = fVar39 * 0.9238795 - fVar15 * 0.38268346;
  fVar25 = fVar17 - fVar23;
  fVar23 = fVar23 + fVar17;
  fVar15 = fVar20 + fVar32;
  fVar32 = fVar32 - fVar20;
  fVar17 = fVar10 + fVar18;
  fVar18 = fVar18 - fVar10;
  fVar20 = ((fVar23 + fVar28) - fVar9) * 0.70710677;
  fVar23 = ((fVar23 - fVar28) + fVar9) * 0.70710677;
  fVar10 = (fVar25 + fVar28 + fVar9) * 0.70710677;
  fVar28 = ((fVar25 - fVar28) - fVar9) * 0.70710677;
  fVar9 = fVar40 * 0.38268343 - fVar16 * 0.9238795;
  fVar25 = fVar40 * 0.9238795 + fVar16 * 0.38268343;
  fVar40 = fVar11 * 0.38268343 - fVar22 * -0.9238795;
  fVar11 = fVar22 * 0.38268343 - fVar11 * 0.9238795;
  fVar16 = fVar40 + fVar9;
  fVar9 = fVar9 - fVar40;
  fVar40 = fVar11 + fVar25;
  *param_1 = fVar27 + fVar37;
  fVar25 = fVar25 - fVar11;
  param_1[1] = fVar30 + fVar29;
  param_1[2] = fVar15 + fVar26;
  param_1[3] = fVar17 + fVar13;
  param_1[4] = fVar10 + fVar31;
  param_1[5] = fVar23 + fVar42;
  param_1[6] = fVar16 + fVar8;
  param_1[7] = fVar40 + fVar41;
  param_1[8] = fVar36 - fVar33;
  param_1[9] = fVar34 + fVar38;
  param_1[10] = fVar21 - fVar18;
  param_1[0xb] = fVar32 + fVar24;
  param_1[0xc] = fVar12 - fVar20;
  param_1[0xd] = fVar28 + fVar19;
  param_1[0xe] = fVar14 - fVar25;
  param_1[0xf] = fVar9 + fVar35;
  param_1[0x10] = fVar37 - fVar27;
  param_1[0x11] = fVar29 - fVar30;
  param_1[0x12] = fVar26 - fVar15;
  param_1[0x13] = fVar13 - fVar17;
  param_1[0x14] = fVar31 - fVar10;
  param_1[0x15] = fVar42 - fVar23;
  param_1[0x16] = fVar8 - fVar16;
  param_1[0x17] = fVar41 - fVar40;
  param_1[0x1b] = fVar24 - fVar32;
  param_1[0x1f] = fVar35 - fVar9;
  param_1[0x18] = fVar33 + fVar36;
  param_1[0x19] = fVar38 - fVar34;
  param_1[0x1a] = fVar18 + fVar21;
  param_1[0x1c] = fVar20 + fVar12;
  param_1[0x1d] = fVar19 - fVar28;
  param_1[0x1e] = fVar25 + fVar14;
  return;
}







// 函数: void FUN_1807ef28b(undefined4 param_1,int param_2)
void FUN_1807ef28b(undefined4 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int in_EAX;
  int iVar8;
  float *pfVar9;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_R14;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iStack00000000000000c0;
  
  iStack00000000000000c0 = in_EAX - param_2 >> 1;
  iVar7 = iStack00000000000000c0 * 2;
  iVar8 = (int)(unaff_EBX + (unaff_EBX >> 0x1f & 3U)) >> 2;
  lVar10 = (longlong)iVar8;
  lVar1 = unaff_RSI + (longlong)iVar7 * 4;
  lVar2 = unaff_RSI + (longlong)(iVar8 * 6) * 4;
  FUN_1807ef240(param_1,unaff_R14 + (longlong)(iVar8 * 2) * 4);
  lVar11 = unaff_R14 +
           (longlong)((((int)(unaff_EBX + (unaff_EBX >> 0x1f & 7U)) >> 3) + iVar8) * 2) * 4;
  FUN_1807ef240(lVar1,lVar11,iVar8);
  FUN_1807ef240(lVar2,lVar11,iVar8);
  if (0 < lVar10) {
    pfVar9 = (float *)(unaff_RSI + 4 + lVar10 * 8);
    lVar12 = (unaff_R14 + lVar10 * -8) - unaff_RSI;
    lVar11 = lVar10;
    do {
      fVar3 = *(float *)(lVar12 + -4 + (longlong)pfVar9);
      fVar4 = *(float *)(lVar12 + (longlong)pfVar9);
      fVar14 = *(float *)(((lVar2 + lVar10 * -8) - unaff_RSI) + -4 + (longlong)pfVar9);
      fVar5 = *(float *)((longlong)pfVar9 + ((lVar1 + lVar10 * -8) - unaff_RSI) + -4);
      fVar17 = fVar5 * fVar4 + pfVar9[(longlong)iVar7 + lVar10 * -2] * fVar3;
      fVar16 = fVar5 * fVar3 - pfVar9[(longlong)iVar7 + lVar10 * -2] * fVar4;
      fVar5 = pfVar9[-1];
      fVar6 = *pfVar9;
      fVar13 = fVar14 * fVar3 - pfVar9[(longlong)(iVar8 * 6) + lVar10 * -2] * -fVar4;
      fVar15 = fVar14 * -fVar4 + pfVar9[(longlong)(iVar8 * 6) + lVar10 * -2] * fVar3;
      fVar3 = pfVar9[lVar10 * -2];
      fVar14 = fVar13 + fVar16;
      fVar16 = fVar16 - fVar13;
      fVar4 = pfVar9[lVar10 * -2 + -1];
      fVar13 = fVar15 + fVar17;
      fVar17 = fVar17 - fVar15;
      pfVar9[lVar10 * -2 + -1] = fVar4 + fVar14;
      pfVar9[lVar10 * -2] = fVar3 + fVar13;
      pfVar9[-1] = fVar5 - fVar17;
      *pfVar9 = fVar6 + fVar16;
      pfVar9[(iStack00000000000000c0 - lVar10) * 2 + -1] = fVar4 - fVar14;
      pfVar9[(iStack00000000000000c0 - lVar10) * 2] = fVar3 - fVar13;
      pfVar9[lVar10 * 4 + -1] = fVar5 + fVar17;
      pfVar9[lVar10 * 4] = fVar6 - fVar16;
      pfVar9 = pfVar9 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}







// 函数: void FUN_1807ef335(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1807ef335(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar6;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong lVar7;
  longlong unaff_R15;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int in_stack_000000c0;
  
  pfVar5 = (float *)(unaff_RSI + 4 + param_3 * 8);
  lVar7 = (unaff_R14 + param_3 * -8) - unaff_RSI;
  lVar6 = param_3;
  do {
    fVar1 = *(float *)(lVar7 + -4 + (longlong)pfVar5);
    fVar2 = *(float *)(lVar7 + (longlong)pfVar5);
    fVar9 = *(float *)(((unaff_R15 + param_3 * -8) - unaff_RSI) + -4 + (longlong)pfVar5);
    fVar3 = *(float *)((longlong)pfVar5 + ((unaff_RBP + param_3 * -8) - unaff_RSI) + -4);
    fVar12 = fVar3 * fVar2 + pfVar5[unaff_R12 + param_3 * -2] * fVar1;
    fVar11 = fVar3 * fVar1 - pfVar5[unaff_R12 + param_3 * -2] * fVar2;
    fVar3 = pfVar5[-1];
    fVar4 = *pfVar5;
    fVar8 = fVar9 * fVar1 - pfVar5[unaff_R13 + param_3 * -2] * -fVar2;
    fVar10 = fVar9 * -fVar2 + pfVar5[unaff_R13 + param_3 * -2] * fVar1;
    fVar1 = pfVar5[param_3 * -2];
    fVar9 = fVar8 + fVar11;
    fVar11 = fVar11 - fVar8;
    fVar2 = pfVar5[param_3 * -2 + -1];
    fVar8 = fVar10 + fVar12;
    fVar12 = fVar12 - fVar10;
    pfVar5[param_3 * -2 + -1] = fVar2 + fVar9;
    pfVar5[param_3 * -2] = fVar1 + fVar8;
    pfVar5[-1] = fVar3 - fVar12;
    *pfVar5 = fVar4 + fVar11;
    pfVar5[(in_stack_000000c0 - param_3) * 2 + -1] = fVar2 - fVar9;
    pfVar5[(in_stack_000000c0 - param_3) * 2] = fVar1 - fVar8;
    pfVar5[param_3 * 4 + -1] = fVar3 + fVar12;
    pfVar5[param_3 * 4] = fVar4 - fVar11;
    pfVar5 = pfVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}







// 函数: void FUN_1807ef345(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)
void FUN_1807ef345(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar6;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong lVar7;
  longlong unaff_R15;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar5 = (float *)(unaff_RSI + 4 + param_1);
  lVar7 = (unaff_R14 - param_1) - unaff_RSI;
  lVar6 = param_3;
  do {
    fVar1 = *(float *)(lVar7 + -4 + (longlong)pfVar5);
    fVar2 = *(float *)(lVar7 + (longlong)pfVar5);
    fVar9 = *(float *)(((unaff_R15 - param_1) - unaff_RSI) + -4 + (longlong)pfVar5);
    fVar3 = *(float *)((longlong)pfVar5 + ((unaff_RBP - param_1) - unaff_RSI) + -4);
    fVar12 = fVar3 * fVar2 + pfVar5[unaff_R12 + param_3 * -2] * fVar1;
    fVar11 = fVar3 * fVar1 - pfVar5[unaff_R12 + param_3 * -2] * fVar2;
    fVar3 = pfVar5[-1];
    fVar4 = *pfVar5;
    fVar8 = fVar9 * fVar1 - pfVar5[unaff_R13 + param_3 * -2] * -fVar2;
    fVar10 = fVar9 * -fVar2 + pfVar5[unaff_R13 + param_3 * -2] * fVar1;
    fVar1 = pfVar5[param_3 * -2];
    fVar9 = fVar8 + fVar11;
    fVar11 = fVar11 - fVar8;
    fVar2 = *(float *)((-4 - param_1) + (longlong)pfVar5);
    fVar8 = fVar10 + fVar12;
    fVar12 = fVar12 - fVar10;
    *(float *)((-4 - param_1) + (longlong)pfVar5) = fVar2 + fVar9;
    pfVar5[param_3 * -2] = fVar1 + fVar8;
    pfVar5[-1] = fVar3 - fVar12;
    *pfVar5 = fVar4 + fVar11;
    pfVar5[(param_4 - param_3) * 2 + -1] = fVar2 - fVar9;
    pfVar5[(param_4 - param_3) * 2] = fVar1 - fVar8;
    pfVar5[param_3 * 4 + -1] = fVar3 + fVar12;
    pfVar5[param_3 * 4] = fVar4 - fVar11;
    pfVar5 = pfVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}







// 函数: void FUN_1807ef4df(void)
void FUN_1807ef4df(void)

{
  return;
}







// 函数: void FUN_1807ef510(float *param_1,longlong param_2,int param_3)
void FUN_1807ef510(float *param_1,longlong param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  if (param_3 == 8) {
    fVar8 = param_1[7] + param_1[5];
    fVar14 = param_1[5] - param_1[7];
    fVar9 = param_1[6] + param_1[4];
    fVar35 = param_1[4] - param_1[6];
    fVar30 = param_1[1] - param_1[3];
    fVar24 = param_1[0xc] + param_1[0xe];
    fVar40 = param_1[0xc] - param_1[0xe];
    fVar37 = param_1[9] - param_1[0xb];
    fVar11 = param_1[9] + param_1[0xb];
    fVar31 = param_1[8] - param_1[10];
    fVar43 = param_1[8] + param_1[10];
    fVar21 = *param_1 - param_1[2];
    fVar26 = param_1[0xd] + param_1[0xf];
    fVar38 = param_1[0xd] - param_1[0xf];
    fVar32 = *param_1 + param_1[2];
    fVar44 = fVar21 - fVar14;
    fVar14 = fVar14 + fVar21;
    fVar33 = param_1[1] + param_1[3];
    fVar21 = fVar32 - fVar9;
    fVar32 = fVar32 + fVar9;
    fVar15 = fVar24 + fVar43;
    fVar43 = fVar43 - fVar24;
    fVar9 = fVar33 - fVar8;
    fVar33 = fVar33 + fVar8;
    fVar18 = fVar26 + fVar11;
    fVar20 = fVar35 + fVar30;
    fVar30 = fVar30 - fVar35;
    fVar11 = fVar11 - fVar26;
    fVar24 = fVar37 + fVar31;
    fVar37 = fVar37 - fVar31;
    param_1[1] = fVar18 + fVar33;
    fVar26 = ((fVar24 - fVar40) + fVar38) * 0.70710677;
    fVar31 = ((fVar37 - fVar40) - fVar38) * 0.70710677;
    fVar8 = (fVar37 + fVar40 + fVar38) * 0.70710677;
    fVar24 = ((fVar24 + fVar40) - fVar38) * 0.70710677;
    *param_1 = fVar15 + fVar32;
    param_1[3] = fVar8 + fVar30;
    param_1[0xb] = fVar30 - fVar8;
    param_1[2] = fVar24 + fVar14;
    param_1[10] = fVar14 - fVar24;
    param_1[5] = fVar9 - fVar43;
    param_1[0xd] = fVar43 + fVar9;
    param_1[4] = fVar11 + fVar21;
    param_1[0xc] = fVar21 - fVar11;
    param_1[0xf] = fVar26 + fVar20;
    param_1[6] = fVar31 + fVar44;
    param_1[0xe] = fVar44 - fVar31;
    param_1[7] = fVar20 - fVar26;
    param_1[8] = fVar32 - fVar15;
    param_1[9] = fVar33 - fVar18;
    return;
  }
  if (param_3 != 0x10) {
    lVar6 = (longlong)((param_3 / 2) * 2);
    iVar1 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
    lVar3 = (longlong)iVar1;
    FUN_1807ef510(param_1,param_2 + (longlong)(iVar1 * 2) * 4);
    lVar4 = param_2 + (longlong)((((int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3) + iVar1) * 2) * 4;
    FUN_1807ef510(param_1 + lVar6,lVar4,iVar1);
    FUN_1807ef510(param_1 + iVar1 * 6,lVar4,iVar1);
    if (0 < lVar3) {
      pfVar2 = param_1 + lVar3 * 2 + 1;
      lVar5 = param_3 / 2 - lVar3;
      lVar7 = (param_2 + lVar3 * -8) - (longlong)param_1;
      lVar4 = lVar3;
      do {
        fVar8 = *(float *)(lVar7 + -4 + (longlong)pfVar2);
        fVar30 = *(float *)(lVar7 + (longlong)pfVar2);
        fVar9 = *(float *)((longlong)(param_1 + iVar1 * 6) + (lVar3 * -8 - (longlong)param_1) + -4 +
                          (longlong)pfVar2);
        fVar43 = *(float *)((longlong)pfVar2 +
                           (longlong)(param_1 + lVar6) + (lVar3 * -8 - (longlong)param_1) + -4);
        fVar32 = fVar43 * -fVar30 + pfVar2[lVar6 + lVar3 * -2] * fVar8;
        fVar21 = pfVar2[lVar3 * -2 + -1];
        fVar15 = fVar43 * fVar8 - pfVar2[lVar6 + lVar3 * -2] * -fVar30;
        fVar43 = *pfVar2;
        fVar11 = pfVar2[-1];
        fVar14 = fVar9 * fVar30 + pfVar2[(longlong)(iVar1 * 6) + lVar3 * -2] * fVar8;
        fVar24 = pfVar2[lVar3 * -2];
        fVar8 = fVar9 * fVar8 - pfVar2[(longlong)(iVar1 * 6) + lVar3 * -2] * fVar30;
        fVar9 = fVar14 + fVar32;
        fVar32 = fVar32 - fVar14;
        fVar30 = fVar8 + fVar15;
        fVar15 = fVar15 - fVar8;
        pfVar2[lVar3 * -2 + -1] = fVar21 + fVar30;
        pfVar2[lVar3 * -2] = fVar24 + fVar9;
        pfVar2[-1] = fVar11 + fVar32;
        *pfVar2 = fVar43 - fVar15;
        pfVar2[lVar5 * 2 + -1] = fVar21 - fVar30;
        pfVar2[lVar5 * 2] = fVar24 - fVar9;
        pfVar2[lVar3 * 4 + -1] = fVar11 - fVar32;
        pfVar2[lVar3 * 4] = fVar43 + fVar15;
        pfVar2 = pfVar2 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    return;
  }
  fVar21 = *param_1 - param_1[2];
  fVar26 = param_1[1] - param_1[3];
  fVar27 = param_1[1] + param_1[3];
  fVar30 = param_1[6] + param_1[4];
  fVar9 = param_1[4] - param_1[6];
  fVar43 = param_1[0x11] - param_1[0x13];
  fVar37 = param_1[0x11] + param_1[0x13];
  fVar16 = param_1[0x10] + param_1[0x12];
  fVar22 = param_1[0xc] - param_1[0xe];
  fVar23 = param_1[0xd] - param_1[0xf];
  fVar24 = *param_1 + param_1[2];
  fVar14 = param_1[0x10] - param_1[0x12];
  fVar8 = param_1[7] + param_1[5];
  fVar34 = param_1[5] - param_1[7];
  fVar39 = fVar24 + fVar30;
  fVar24 = fVar24 - fVar30;
  fVar18 = fVar27 + fVar8;
  fVar27 = fVar27 - fVar8;
  fVar8 = fVar21 - fVar34;
  fVar34 = fVar34 + fVar21;
  fVar30 = fVar9 + fVar26;
  fVar26 = fVar26 - fVar9;
  fVar9 = param_1[0x17] + param_1[0x15];
  fVar10 = param_1[0x15] - param_1[0x17];
  fVar21 = param_1[0x16] + param_1[0x14];
  fVar11 = param_1[0x14] - param_1[0x16];
  fVar12 = fVar37 - fVar9;
  fVar37 = fVar37 + fVar9;
  fVar36 = fVar16 + fVar21;
  fVar9 = fVar14 - fVar10;
  fVar16 = fVar16 - fVar21;
  fVar10 = fVar10 + fVar14;
  fVar20 = fVar11 + fVar43;
  fVar43 = fVar43 - fVar11;
  fVar31 = param_1[0x1e] + param_1[0x1c];
  fVar13 = param_1[0x1c] - param_1[0x1e];
  fVar21 = param_1[0x1f] + param_1[0x1d];
  fVar41 = param_1[0x1d] - param_1[0x1f];
  fVar28 = param_1[0x18] + param_1[0x1a] + fVar31;
  fVar31 = (param_1[0x18] + param_1[0x1a]) - fVar31;
  fVar17 = param_1[0x19] + param_1[0x1b] + fVar21;
  fVar21 = (param_1[0x19] + param_1[0x1b]) - fVar21;
  fVar33 = fVar13 + (param_1[0x19] - param_1[0x1b]);
  fVar38 = (param_1[0x18] - param_1[0x1a]) - fVar41;
  fVar41 = fVar41 + (param_1[0x18] - param_1[0x1a]);
  fVar13 = (param_1[0x19] - param_1[0x1b]) - fVar13;
  fVar11 = param_1[0xd] + param_1[0xf] + param_1[9] + param_1[0xb];
  fVar14 = param_1[0xc] + param_1[0xe] + param_1[8] + param_1[10];
  fVar15 = (param_1[9] + param_1[0xb]) - (param_1[0xd] + param_1[0xf]);
  fVar32 = (param_1[8] + param_1[10]) - (param_1[0xc] + param_1[0xe]);
  fVar40 = fVar39 - fVar14;
  fVar39 = fVar39 + fVar14;
  fVar44 = fVar18 - fVar11;
  fVar18 = fVar18 + fVar11;
  fVar35 = fVar24 + fVar15;
  fVar24 = fVar24 - fVar15;
  fVar11 = fVar32 + fVar27;
  fVar27 = fVar27 - fVar32;
  fVar15 = (param_1[9] - param_1[0xb]) + (param_1[8] - param_1[10]);
  fVar19 = (param_1[9] - param_1[0xb]) - (param_1[8] - param_1[10]);
  fVar32 = ((fVar15 - fVar22) + fVar23) * 0.70710677;
  fVar14 = (fVar19 + fVar22 + fVar23) * 0.70710677;
  fVar15 = ((fVar15 + fVar22) - fVar23) * 0.70710677;
  fVar23 = ((fVar19 - fVar22) - fVar23) * 0.70710677;
  fVar19 = fVar34 - fVar15;
  fVar34 = fVar34 + fVar15;
  fVar22 = fVar26 - fVar14;
  fVar26 = fVar26 + fVar14;
  fVar14 = fVar8 - fVar23;
  fVar8 = fVar8 + fVar23;
  fVar15 = fVar32 + fVar30;
  fVar30 = fVar30 - fVar32;
  fVar25 = fVar28 + fVar36;
  fVar36 = fVar36 - fVar28;
  fVar29 = fVar17 + fVar37;
  fVar37 = fVar37 - fVar17;
  fVar42 = fVar10 * 0.9238795 - fVar43 * -0.38268346;
  fVar17 = fVar43 * 0.9238795 - fVar10 * 0.38268346;
  fVar43 = fVar13 * 0.9238795 + fVar41 * 0.38268346;
  fVar32 = fVar41 * 0.9238795 - fVar13 * 0.38268346;
  fVar28 = fVar43 + fVar17;
  fVar17 = fVar17 - fVar43;
  fVar23 = fVar32 + fVar42;
  fVar43 = fVar12 - fVar16;
  fVar12 = fVar12 + fVar16;
  fVar42 = fVar42 - fVar32;
  fVar32 = ((fVar43 - fVar31) - fVar21) * 0.70710677;
  fVar13 = ((fVar12 + fVar31) - fVar21) * 0.70710677;
  fVar10 = (fVar43 + fVar31 + fVar21) * 0.70710677;
  fVar12 = ((fVar12 - fVar31) + fVar21) * 0.70710677;
  fVar31 = fVar9 * 0.38268343 - fVar20 * -0.9238795;
  fVar16 = fVar20 * 0.38268343 - fVar9 * 0.9238795;
  fVar20 = fVar38 * 0.9238795 + fVar33 * 0.38268343;
  fVar9 = fVar38 * 0.38268343 - fVar33 * 0.9238795;
  fVar21 = fVar20 + fVar16;
  fVar43 = fVar9 + fVar31;
  fVar31 = fVar31 - fVar9;
  fVar16 = fVar16 - fVar20;
  *param_1 = fVar25 + fVar39;
  param_1[1] = fVar29 + fVar18;
  param_1[2] = fVar23 + fVar34;
  param_1[3] = fVar28 + fVar26;
  param_1[4] = fVar13 + fVar35;
  param_1[5] = fVar10 + fVar27;
  param_1[6] = fVar43 + fVar8;
  param_1[7] = fVar21 + fVar30;
  param_1[8] = fVar37 + fVar40;
  param_1[9] = fVar44 - fVar36;
  param_1[10] = fVar17 + fVar19;
  param_1[0xb] = fVar22 - fVar42;
  param_1[0xc] = fVar32 + fVar24;
  param_1[0xd] = fVar11 - fVar12;
  param_1[0xe] = fVar16 + fVar14;
  param_1[0xf] = fVar15 - fVar31;
  param_1[0x10] = fVar39 - fVar25;
  param_1[0x11] = fVar18 - fVar29;
  param_1[0x12] = fVar34 - fVar23;
  param_1[0x13] = fVar26 - fVar28;
  param_1[0x14] = fVar35 - fVar13;
  param_1[0x15] = fVar27 - fVar10;
  param_1[0x16] = fVar8 - fVar43;
  param_1[0x17] = fVar30 - fVar21;
  param_1[0x18] = fVar40 - fVar37;
  param_1[0x19] = fVar36 + fVar44;
  param_1[0x1a] = fVar19 - fVar17;
  param_1[0x1b] = fVar42 + fVar22;
  param_1[0x1d] = fVar12 + fVar11;
  param_1[0x1e] = fVar14 - fVar16;
  param_1[0x1c] = fVar24 - fVar32;
  param_1[0x1f] = fVar31 + fVar15;
  return;
}







