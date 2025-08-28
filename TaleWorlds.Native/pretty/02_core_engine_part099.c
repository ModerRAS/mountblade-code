#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part099.c - 2 个函数

// 函数: void FUN_18011bc70(int *param_1,int param_2)
void FUN_18011bc70(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  
  if (param_2 != 0) {
    iVar1 = *param_1;
    iVar4 = 0;
    if (0 < iVar1) {
      piVar2 = *(int **)(param_1 + 2);
      piVar5 = piVar2;
      do {
        if (*piVar5 == param_2) {
          if (piVar2 + (longlong)iVar4 * 10 != (int *)0x0) {
            lVar3 = ((longlong)iVar4 * 0x28) / 0x28;
                    // WARNING: Subroutine does not return
            memmove(piVar2 + lVar3 * 10,piVar2 + lVar3 * 10 + 10,(iVar1 - lVar3) * 0x28 + -0x28);
          }
          break;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 10;
      } while (iVar4 < iVar1);
    }
  }
  if (param_1[7] == param_2) {
    param_1[7] = 0;
  }
  if (param_1[5] == param_2) {
    param_1[5] = 0;
  }
  if (param_1[6] == param_2) {
    param_1[6] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_18011bd30(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  bool bVar22;
  longlong lVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  float fVar30;
  float fVar31;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  lVar23 = _DAT_180c8a9b0;
  fVar6 = *(float *)(_DAT_180c8a9b0 + 0x1660);
  lVar15 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  fVar7 = *(float *)(_DAT_180c8a9b0 + 0x19f8);
  fVar31 = fVar7 - 2.0;
  fVar8 = *(float *)(lVar15 + 0x104);
  fVar9 = *(float *)(lVar15 + 0x100);
  fVar30 = (fVar7 + fVar31) - 2.0;
  if ((((fVar9 < (float)param_1[10]) || (fVar8 < (float)param_1[0xb])) ||
      ((float)param_1[0xc] < fVar9 + fVar30)) || ((float)param_1[0xd] < fVar8)) {
    fVar10 = *(float *)(_DAT_180c8a9b0 + 0x1674);
    bVar22 = true;
    fVar11 = (float)param_1[0xc];
    iVar26 = param_1[0xd];
    *(undefined1 *)(lVar15 + 0xb1) = 1;
    lVar16 = *(longlong *)(lVar23 + 0x1af8);
    FUN_180291b40(*(undefined8 *)(lVar16 + 0x2e8),*(undefined8 *)(param_1 + 10),
                  CONCAT44(iVar26,fVar10 + fVar11),1);
    puVar2 = (undefined8 *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x2e8) + 0x68) + -0x10 +
             (longlong)*(int *)(*(longlong *)(lVar16 + 0x2e8) + 0x60) * 0x10);
    uVar21 = puVar2[1];
    *(undefined8 *)(lVar16 + 0x228) = *puVar2;
    *(undefined8 *)(lVar16 + 0x230) = uVar21;
  }
  else {
    bVar22 = false;
  }
  lVar16 = _DAT_180c8a9b0;
  uVar12 = *(undefined4 *)(lVar23 + 0x16c8);
  uVar13 = *(undefined4 *)(lVar23 + 0x16cc);
  uVar18 = *(undefined4 *)(lVar23 + 0x16d0);
  fVar10 = *(float *)(lVar23 + 0x16d4);
  piVar27 = (int *)0x0;
  iVar26 = 0;
  uStack_b8 = 0;
  uStack_b4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16c8);
  uStack_b0 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16cc);
  uStack_ac = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d0);
  uStack_a8 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d4);
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&uStack_b8);
  uStack_b8 = 0x15;
  *(undefined4 *)(lVar16 + 0x16c8) = uVar12;
  *(undefined4 *)(lVar16 + 0x16cc) = uVar13;
  *(undefined4 *)(lVar16 + 0x16d0) = uVar18;
  *(float *)(lVar16 + 0x16d4) = fVar10 * 0.5;
  lVar16 = _DAT_180c8a9b0;
  uStack_b4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1818);
  uStack_b0 = *(undefined4 *)(_DAT_180c8a9b0 + 0x181c);
  uStack_ac = *(undefined4 *)(_DAT_180c8a9b0 + 0x1820);
  uStack_a8 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1824);
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&uStack_b8);
  *(undefined8 *)(lVar16 + 0x1818) = 0;
  *(undefined8 *)(lVar16 + 0x1820) = 0;
  uVar12 = *(undefined4 *)(lVar23 + 0x90);
  uVar13 = *(undefined4 *)(lVar23 + 0x94);
  uVar21 = CONCAT44(fVar6 + fVar6 + fVar7,fVar31);
  *(undefined4 *)(lVar23 + 0x90) = 0x3e800000;
  *(undefined4 *)(lVar23 + 0x94) = 0x3e4ccccd;
  fVar6 = (float)param_1[0xc];
  *(int *)(lVar15 + 0x104) = param_1[0xb];
  *(float *)(lVar15 + 0x100) = fVar6 - fVar30;
  cVar24 = FUN_18010fad0(&UNK_180a063f8,0,uVar21);
  fVar6 = (float)param_1[0xc];
  *(int *)(lVar15 + 0x104) = param_1[0xb];
  if (cVar24 != '\0') {
    iVar26 = -1;
  }
  *(float *)(lVar15 + 0x100) = (fVar6 - fVar30) + fVar31;
  cVar24 = FUN_18010fad0(&UNK_180a0640c,1,uVar21);
  lVar16 = _DAT_180c8a9b0;
  if (cVar24 != '\0') {
    iVar26 = 1;
  }
  puVar2 = (undefined8 *)
           (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
           (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
  uVar21 = puVar2[1];
  puVar4 = (undefined8 *)
           (_DAT_180c8a9b0 + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                   (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
  *puVar4 = *puVar2;
  puVar4[1] = uVar21;
  iVar14 = *(int *)(lVar16 + 0x1b80);
  *(int *)(lVar16 + 0x1b80) = iVar14 + -1;
  lVar1 = (longlong)iVar14 + -2;
  puVar3 = (undefined4 *)(*(longlong *)(lVar16 + 0x1b88) + 4 + lVar1 * 0x14);
  uVar18 = puVar3[1];
  uVar19 = puVar3[2];
  uVar20 = puVar3[3];
  puVar5 = (undefined4 *)
           (lVar16 + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(lVar16 + 0x1b88) + lVar1 * 0x14) * 0x10);
  *puVar5 = *puVar3;
  puVar5[1] = uVar18;
  puVar5[2] = uVar19;
  puVar5[3] = uVar20;
  *(int *)(lVar16 + 0x1b80) = *(int *)(lVar16 + 0x1b80) + -1;
  *(undefined4 *)(lVar23 + 0x94) = uVar13;
  *(undefined4 *)(lVar23 + 0x90) = uVar12;
  if (bVar22) {
    FUN_180126d80();
  }
  piVar29 = piVar27;
  if (((iVar26 != 0) && (param_1[5] != 0)) && (iVar14 = *param_1, 0 < iVar14)) {
    piVar17 = *(int **)(param_1 + 2);
    piVar28 = piVar17;
    do {
      iVar25 = (int)piVar27;
      piVar29 = (int *)0x0;
      if (*piVar28 == param_1[5]) {
        if (piVar17 + (longlong)iVar25 * 10 != (int *)0x0) {
          iVar25 = (int)(((longlong)iVar25 * 0x28) / 0x28);
          iVar26 = iVar25 + iVar26;
          if ((iVar26 < 0) || (iVar14 <= iVar26)) {
            iVar26 = iVar25;
          }
          piVar29 = piVar17 + (longlong)iVar26 * 10;
        }
        break;
      }
      piVar27 = (int *)(ulonglong)(iVar25 + 1U);
      piVar28 = piVar28 + 10;
    } while ((int)(iVar25 + 1U) < iVar14);
  }
  *(float *)(lVar15 + 0x100) = fVar9;
  *(float *)(lVar15 + 0x104) = fVar8;
  param_1[0xc] = (int)((float)param_1[0xc] - (fVar30 + 1.0));
  return piVar29;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18011c120(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  ulonglong uVar17;
  
  lVar1 = _DAT_180c8a9b0;
  lVar9 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  uVar6 = *(undefined4 *)(lVar9 + 0x100);
  uVar7 = *(undefined4 *)(lVar9 + 0x104);
  fVar20 = (float)param_1[0xc] -
           (*(float *)(_DAT_180c8a9b0 + 0x1660) + *(float *)(_DAT_180c8a9b0 + 0x1660) +
           *(float *)(_DAT_180c8a9b0 + 0x19f8));
  param_1[0xc] = (int)fVar20;
  if (*(char *)(lVar9 + 0xb7) != '\0') {
    fVar20 = fVar20 + *(float *)(lVar1 + 0x1674);
    param_1[0xc] = (int)fVar20;
  }
  *(int *)(lVar9 + 0x104) = param_1[0xb];
  *(float *)(lVar9 + 0x100) = fVar20;
  uVar17 = 0;
  uVar10 = *(undefined4 *)(lVar1 + 0x16c8);
  uVar11 = *(undefined4 *)(lVar1 + 0x16cc);
  uVar12 = *(undefined4 *)(lVar1 + 0x16d0);
  fVar20 = *(float *)(lVar1 + 0x16d4);
  uStack_68 = 0;
  uStack_64 = *(undefined4 *)(lVar1 + 0x16c8);
  uStack_60 = *(undefined4 *)(lVar1 + 0x16cc);
  uStack_5c = *(undefined4 *)(lVar1 + 0x16d0);
  uStack_58 = *(undefined4 *)(lVar1 + 0x16d4);
  FUN_18013e100(lVar1 + 0x1b80,&uStack_68);
  uStack_68 = 0x15;
  *(undefined4 *)(lVar1 + 0x16c8) = uVar10;
  *(undefined4 *)(lVar1 + 0x16cc) = uVar11;
  *(undefined4 *)(lVar1 + 0x16d0) = uVar12;
  *(float *)(lVar1 + 0x16d4) = fVar20 * 0.5;
  lVar1 = _DAT_180c8a9b0;
  uStack_64 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1818);
  uStack_60 = *(undefined4 *)(_DAT_180c8a9b0 + 0x181c);
  uStack_5c = *(undefined4 *)(_DAT_180c8a9b0 + 0x1820);
  uStack_58 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1824);
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&uStack_68);
  *(undefined8 *)(lVar1 + 0x1818) = 0;
  *(undefined8 *)(lVar1 + 0x1820) = 0;
  cVar15 = FUN_1801129b0(&UNK_180a063b0,0,0x41);
  lVar14 = _DAT_180c8a9b0;
  puVar2 = (undefined8 *)
           (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
           (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
  uVar13 = puVar2[1];
  puVar4 = (undefined8 *)
           (_DAT_180c8a9b0 + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                   (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
  *puVar4 = *puVar2;
  puVar4[1] = uVar13;
  iVar8 = *(int *)(lVar14 + 0x1b80);
  *(int *)(lVar14 + 0x1b80) = iVar8 + -1;
  lVar1 = (longlong)iVar8 + -2;
  puVar3 = (undefined4 *)(*(longlong *)(lVar14 + 0x1b88) + 4 + lVar1 * 0x14);
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  uVar12 = puVar3[3];
  puVar5 = (undefined4 *)
           (lVar14 + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(lVar14 + 0x1b88) + lVar1 * 0x14) * 0x10);
  *puVar5 = *puVar3;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  *(int *)(lVar14 + 0x1b80) = *(int *)(lVar14 + 0x1b80) + -1;
  uVar18 = uVar17;
  if (cVar15 != '\0') {
    uVar19 = uVar17;
    if (0 < *param_1) {
      do {
        lVar1 = *(longlong *)(param_1 + 2);
        cVar15 = FUN_18011aad0(**(undefined8 **)(lVar1 + uVar19 + 8));
        if (cVar15 != '\0') {
          uVar18 = lVar1 + uVar19;
        }
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        uVar19 = uVar19 + 0x28;
      } while ((int)uVar16 < *param_1);
    }
    FUN_18012f0c0();
  }
  *(undefined4 *)(lVar9 + 0x100) = uVar6;
  *(undefined4 *)(lVar9 + 0x104) = uVar7;
  return uVar18;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18011c15d(float param_1,float param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  char cVar14;
  longlong in_RCX;
  longlong unaff_RBX;
  uint uVar15;
  int *unaff_RSI;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong unaff_R15;
  float fVar19;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  ulonglong uVar16;
  
  uVar6 = *(undefined4 *)(unaff_R15 + 0x100);
  uVar7 = *(undefined4 *)(unaff_R15 + 0x104);
  param_2 = param_2 - (param_1 + *(float *)(unaff_RBX + 0x19f8));
  *(float *)(in_RCX + 0x30) = param_2;
  if (*(char *)(unaff_R15 + 0xb7) != '\0') {
    param_2 = param_2 + *(float *)(unaff_RBX + 0x1674);
    *(float *)(in_RCX + 0x30) = param_2;
  }
  *(undefined4 *)(unaff_R15 + 0x104) = *(undefined4 *)(in_RCX + 0x2c);
  *(float *)(unaff_R15 + 0x100) = param_2;
  uVar16 = 0;
  uVar9 = *(undefined4 *)(unaff_RBX + 0x16c8);
  uVar10 = *(undefined4 *)(unaff_RBX + 0x16cc);
  uStack0000000000000028 = *(undefined4 *)(unaff_RBX + 0x16d0);
  fStack000000000000002c = *(float *)(unaff_RBX + 0x16d4);
  uStack0000000000000030 = 0;
  fVar19 = fStack000000000000002c * 0.5;
  uStack0000000000000034 = *(undefined4 *)(unaff_RBX + 0x16c8);
  uStack0000000000000038 = *(undefined4 *)(unaff_RBX + 0x16cc);
  uStack000000000000003c = *(undefined4 *)(unaff_RBX + 0x16d0);
  uStack0000000000000040 = *(undefined4 *)(unaff_RBX + 0x16d4);
  FUN_18013e100(unaff_RBX + 0x1b80,&stack0x00000030);
  uStack0000000000000030 = 0x15;
  *(undefined4 *)(unaff_RBX + 0x16c8) = uVar9;
  *(undefined4 *)(unaff_RBX + 0x16cc) = uVar10;
  *(undefined4 *)(unaff_RBX + 0x16d0) = uStack0000000000000028;
  *(float *)(unaff_RBX + 0x16d4) = fVar19;
  lVar1 = _DAT_180c8a9b0;
  uStack0000000000000034 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1818);
  uStack0000000000000038 = *(undefined4 *)(_DAT_180c8a9b0 + 0x181c);
  uStack000000000000003c = *(undefined4 *)(_DAT_180c8a9b0 + 0x1820);
  uStack0000000000000040 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1824);
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80,&stack0x00000030);
  *(undefined8 *)(lVar1 + 0x1818) = 0;
  *(undefined8 *)(lVar1 + 0x1820) = 0;
  cVar14 = FUN_1801129b0(&UNK_180a063b0,0,0x41);
  lVar13 = _DAT_180c8a9b0;
  puVar2 = (undefined8 *)
           (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
           (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
  uVar12 = puVar2[1];
  puVar4 = (undefined8 *)
           (_DAT_180c8a9b0 + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                   (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
  *puVar4 = *puVar2;
  puVar4[1] = uVar12;
  iVar8 = *(int *)(lVar13 + 0x1b80);
  *(int *)(lVar13 + 0x1b80) = iVar8 + -1;
  lVar1 = (longlong)iVar8 + -2;
  puVar3 = (undefined4 *)(*(longlong *)(lVar13 + 0x1b88) + 4 + lVar1 * 0x14);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar5 = (undefined4 *)
           (lVar13 + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(lVar13 + 0x1b88) + lVar1 * 0x14) * 0x10);
  *puVar5 = *puVar3;
  puVar5[1] = uVar9;
  puVar5[2] = uVar10;
  puVar5[3] = uVar11;
  *(int *)(lVar13 + 0x1b80) = *(int *)(lVar13 + 0x1b80) + -1;
  uVar17 = uVar16;
  if (cVar14 != '\0') {
    uVar18 = uVar16;
    if (0 < *unaff_RSI) {
      do {
        lVar1 = *(longlong *)(unaff_RSI + 2);
        cVar14 = FUN_18011aad0(**(undefined8 **)(lVar1 + uVar18 + 8));
        if (cVar14 != '\0') {
          uVar17 = lVar1 + uVar18;
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        uVar18 = uVar18 + 0x28;
      } while ((int)uVar15 < *unaff_RSI);
    }
    FUN_18012f0c0();
  }
  *(undefined4 *)(unaff_R15 + 0x100) = uVar6;
  *(undefined4 *)(unaff_R15 + 0x104) = uVar7;
  return uVar17;
}



ulonglong FUN_18011c2cb(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar5;
  longlong unaff_R15;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM8_Da;
  
  uVar4 = unaff_RDI & 0xffffffff;
  if ((int)unaff_RDI < *unaff_RSI) {
    uVar5 = unaff_RDI & 0xffffffff;
    do {
      lVar1 = *(longlong *)(unaff_RSI + 2);
      cVar2 = FUN_18011aad0(**(undefined8 **)(lVar1 + uVar5 + 8),param_2,0);
      if (cVar2 != '\0') {
        unaff_RDI = lVar1 + uVar5;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 0x28;
    } while ((int)uVar3 < *unaff_RSI);
  }
  FUN_18012f0c0();
  *(undefined4 *)(unaff_R15 + 0x100) = unaff_XMM7_Da;
  *(undefined4 *)(unaff_R15 + 0x104) = unaff_XMM8_Da;
  return unaff_RDI;
}



ulonglong FUN_18011c2d9(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int unaff_EBP;
  int *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar3;
  longlong unaff_R15;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM8_Da;
  
  uVar3 = unaff_RDI & 0xffffffff;
  do {
    lVar1 = *(longlong *)(unaff_RSI + 2);
    cVar2 = FUN_18011aad0(**(undefined8 **)(lVar1 + uVar3 + 8),param_2,0);
    if (cVar2 != '\0') {
      unaff_RDI = lVar1 + uVar3;
    }
    unaff_EBP = unaff_EBP + 1;
    uVar3 = uVar3 + 0x28;
  } while (unaff_EBP < *unaff_RSI);
  FUN_18012f0c0();
  *(undefined4 *)(unaff_R15 + 0x100) = unaff_XMM7_Da;
  *(undefined4 *)(unaff_R15 + 0x104) = unaff_XMM8_Da;
  return unaff_RDI;
}





// 函数: void FUN_18011c31e(void)
void FUN_18011c31e(void)

{
  longlong unaff_R15;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM8_Da;
  
  FUN_18012f0c0();
  *(undefined4 *)(unaff_R15 + 0x100) = unaff_XMM7_Da;
  *(undefined4 *)(unaff_R15 + 0x104) = unaff_XMM8_Da;
  return;
}





