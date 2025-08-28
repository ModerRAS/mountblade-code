#include "TaleWorlds.Native.Split.h"

// 99_part_11_part035.c - 5 个函数

// 函数: void FUN_1807a0c70(longlong param_1,undefined8 param_2,uint param_3,int param_4,float param_5,
void FUN_1807a0c70(longlong param_1,undefined8 param_2,uint param_3,int param_4,float param_5,
                  longlong param_6,longlong param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStack_144;
  int iStack_13c;
  
  lVar15 = (longlong)param_9;
  lVar22 = (longlong)param_8;
  fVar28 = 0.0;
  uVar8 = (ulonglong)param_3;
  pfVar11 = (float *)(param_6 + lVar22 * 4);
  iVar16 = 0;
  if (3 < (int)param_3) {
    uVar6 = (param_3 - 4 >> 2) + 1;
    uVar7 = (ulonglong)uVar6;
    iVar16 = uVar6 * 4;
    do {
      fVar24 = *pfVar11;
      pfVar9 = pfVar11 + lVar15;
      pfVar10 = pfVar9 + lVar15;
      pfVar11 = pfVar10 + lVar15 + lVar15;
      fVar28 = fVar28 + ABS(fVar24) + ABS(*pfVar9) + ABS(*pfVar10) + ABS(pfVar10[lVar15]);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (iVar16 < (int)param_3) {
    uVar7 = (ulonglong)(param_3 - iVar16);
    do {
      fVar24 = *pfVar11;
      pfVar11 = pfVar11 + lVar15;
      fVar28 = fVar28 + ABS(fVar24);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (0.001 <= fVar28) {
    iVar16 = *(int *)(param_1 + 0x14030);
    iVar17 = iVar16 - iVar16 / param_4;
    param_5 = (1.0 / (float)iVar16) * param_5;
    fVar28 = (float)(iVar16 / param_4) * (1.0 / (float)iVar16) * 6.2831855;
    if (*(int *)(param_1 + 0x14028) == 0) {
      *(int *)(param_1 + 0x14028) = iVar17;
    }
    if (*(char *)(param_1 + 0x14040) != '\0') {
                    // WARNING: Subroutine does not return
      memset(param_1 + 0x8000,0,0x4020);
    }
    iStack_13c = 0;
    if (0 < (int)param_3) {
      do {
        lVar15 = (longlong)(iStack_13c * param_9 + param_8);
        *(undefined4 *)(param_1 + (longlong)*(int *)(param_1 + 0x14028) * 4) =
             *(undefined4 *)(param_6 + lVar15 * 4);
        *(undefined4 *)(param_7 + lVar15 * 4) =
             *(undefined4 *)
              (param_1 + 0x4000 + (longlong)(*(int *)(param_1 + 0x14028) - iVar17) * 4);
        *(int *)(param_1 + 0x14028) = *(int *)(param_1 + 0x14028) + 1;
        iVar20 = *(int *)(param_1 + 0x14030);
        if (iVar20 <= *(int *)(param_1 + 0x14028)) {
          *(int *)(param_1 + 0x14028) = iVar17;
          iVar18 = 0;
          lVar15 = 0;
          if (0 < iVar20) {
            lVar13 = 0;
            puVar12 = (undefined4 *)0x180c11954;
            do {
              fVar24 = *(float *)(lVar13 + param_1);
              iVar18 = iVar18 + 1;
              fVar26 = *(float *)(lVar13 + *(longlong *)(param_1 + 0x14020));
              *puVar12 = 0;
              puVar12[-1] = fVar24 * fVar26;
              iVar20 = *(int *)(param_1 + 0x14030);
              lVar13 = lVar13 + 4;
              puVar12 = puVar12 + 2;
            } while (iVar18 < iVar20);
          }
          FUN_18079ea10(param_1,0x180c11950,iVar20 * 2,lVar22,param_5,iVar17);
          FUN_18079f5c0(param_1,0x180c11950);
          fVar24 = (float)param_4 * param_5 * 0.15915494;
          if (-1 < (longlong)(iVar16 / 2)) {
            pfVar11 = (float *)(param_1 + 0x8008);
            iStack_144 = 2;
            do {
              fVar30 = 1.5707964;
              fVar26 = *(float *)(lVar15 * 8 + 0x180c11960);
              fVar25 = *(float *)(lVar15 * 8 + 0x180c11954);
              fVar27 = *(float *)(lVar15 * 8 + 0x180c11950);
              fVar1 = *(float *)(lVar15 * 8 + 0x180c11958);
              fVar2 = *(float *)(lVar15 * 8 + 0x180c1195c);
              fVar3 = *(float *)(lVar15 * 8 + 0x180c11964);
              fVar4 = *(float *)(lVar15 * 8 + 0x180c1196c);
              fVar31 = -1.5707964;
              fVar5 = *(float *)(lVar15 * 8 + 0x180c11968);
              if (fVar25 <= 0.0) {
                fVar32 = -1.5707964;
              }
              else {
                fVar32 = 1.5707964;
              }
              if (fVar25 == 0.0) {
                fVar32 = 0.0;
              }
              else if (fVar27 != 0.0) {
                fVar32 = (float)atan2f();
              }
              if (0.0 < fVar2) {
                fVar31 = 1.5707964;
              }
              if (fVar2 == 0.0) {
                fVar31 = 0.0;
              }
              else if (fVar1 != 0.0) {
                fVar31 = (float)atan2f();
              }
              fVar29 = -1.5707964;
              if (fVar3 <= 0.0) {
                fVar30 = -1.5707964;
              }
              if (fVar3 == 0.0) {
                fVar30 = 0.0;
              }
              else if (fVar26 != 0.0) {
                fVar30 = (float)atan2f();
              }
              if (0.0 < fVar4) {
                fVar29 = 1.5707964;
              }
              if (fVar4 == 0.0) {
                fVar29 = 0.0;
              }
              else if (fVar5 != 0.0) {
                fVar29 = (float)atan2f();
              }
              fVar27 = SQRT(fVar25 * fVar25 + fVar27 * fVar27);
              fVar25 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
              *(float *)((0x180c1fa58 - param_1) + (longlong)pfVar11) = fVar27 + fVar27;
              iVar17 = iStack_144 + 1;
              *(float *)((0x180c1fa5c - param_1) + (longlong)pfVar11) = fVar25 + fVar25;
              fVar26 = SQRT(fVar3 * fVar3 + fVar26 * fVar26);
              *(float *)((0x180c1fa60 - param_1) + (longlong)pfVar11) = fVar26 + fVar26;
              fVar26 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
              *(float *)((longlong)pfVar11 + (0x180c1fa64 - param_1)) = fVar26 + fVar26;
              fVar26 = pfVar11[-2];
              pfVar11[-2] = fVar32;
              fVar32 = fVar32 - ((float)(iStack_144 + -2) * fVar28 + fVar26);
              fVar26 = pfVar11[-1];
              pfVar11[-1] = fVar31;
              fVar31 = fVar31 - ((float)(iStack_144 + -1) * fVar28 + fVar26);
              fVar26 = *pfVar11;
              *pfVar11 = fVar30;
              fVar30 = fVar30 - ((float)iStack_144 * fVar28 + fVar26);
              fVar26 = pfVar11[1];
              pfVar11[1] = fVar29;
              fVar29 = fVar29 - ((float)iVar17 * fVar28 + fVar26);
              uVar14 = (uint)(fVar32 * 0.31830987);
              uVar19 = (uint)(fVar31 * 0.31830987);
              uVar21 = (uint)(fVar30 * 0.31830987);
              uVar23 = (uint)(fVar29 * 0.31830987);
              uVar6 = uVar14 & 1;
              if ((int)uVar14 < 0) {
                uVar6 = -(uVar14 & 1);
              }
              *(float *)((0x180c1ba58 - param_1) + (longlong)pfVar11) =
                   (fVar32 - (float)(int)(uVar6 + uVar14) * 3.1415927) * fVar24 +
                   (float)(iStack_144 + -2) * param_5;
              uVar6 = uVar19 & 1;
              if ((int)uVar19 < 0) {
                uVar6 = -(uVar19 & 1);
              }
              uVar14 = uVar21 & 1;
              if ((int)uVar21 < 0) {
                uVar14 = -(uVar21 & 1);
              }
              *(float *)((0x180c1ba5c - param_1) + (longlong)pfVar11) =
                   (fVar31 - (float)(int)(uVar6 + uVar19) * 3.1415927) * fVar24 +
                   (float)(iStack_144 + -1) * param_5;
              *(float *)((0x180c1ba60 - param_1) + (longlong)pfVar11) =
                   (fVar30 - (float)(int)(uVar14 + uVar21) * 3.1415927) * fVar24 +
                   (float)iStack_144 * param_5;
              uVar6 = uVar23 & 1;
              if ((int)uVar23 < 0) {
                uVar6 = -(uVar23 & 1);
              }
              iStack_144 = iStack_144 + 4;
              lVar15 = lVar15 + 4;
              *(float *)((0x180c1ba64 - param_1) + (longlong)pfVar11) =
                   (fVar29 - (float)(int)(uVar23 + uVar6) * 3.1415927) * fVar24 +
                   (float)iVar17 * param_5;
              pfVar11 = pfVar11 + 4;
            } while (lVar15 <= iVar16 / 2);
          }
                    // WARNING: Subroutine does not return
          memset(0x180c1fa60,0,(longlong)*(int *)(param_1 + 0x14030) << 2);
        }
        iStack_13c = iStack_13c + 1;
      } while (iStack_13c < (int)param_3);
    }
  }
  else {
    puVar12 = (undefined4 *)(param_7 + lVar22 * 4);
    if (0 < (int)param_3) {
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + lVar15;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}






// 函数: void FUN_1807a0dc4(undefined8 param_1,float param_2,undefined8 param_3,int param_4)
void FUN_1807a0dc4(undefined8 param_1,float param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int in_EAX;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong in_R11;
  int unaff_R12D;
  float *pfVar16;
  int unaff_R15D;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_XMM9_Da;
  float fVar25;
  float fVar26;
  float fVar27;
  int iStack0000000000000028;
  int iStack0000000000000034;
  float fStack0000000000000038;
  int iStack000000000000003c;
  float fStack000000000000005c;
  longlong in_stack_00000180;
  int in_stack_00000190;
  float in_stack_000001a0;
  longlong in_stack_000001b0;
  
  iStack0000000000000028 = unaff_ESI - unaff_ESI / unaff_R12D;
  in_stack_000001a0 = (param_2 / (float)unaff_ESI) * in_stack_000001a0;
  fStack0000000000000038 =
       (float)(unaff_ESI / unaff_R12D) * (param_2 / (float)unaff_ESI) * 6.2831855;
  if (*(int *)(unaff_RBX + 0x14028) == unaff_R15D) {
    *(int *)(unaff_RBX + 0x14028) = iStack0000000000000028;
  }
  if (*(char *)(unaff_RBX + 0x14040) == (char)unaff_R15D) {
    iStack000000000000003c = unaff_R15D;
    if (unaff_R15D < in_stack_00000190) {
      do {
        lVar9 = (longlong)(iStack000000000000003c * unaff_EBP + param_4);
        *(undefined4 *)(unaff_RBX + (longlong)*(int *)(unaff_RBX + 0x14028) * 4) =
             *(undefined4 *)(in_R11 + lVar9 * 4);
        *(undefined4 *)(in_stack_000001b0 + lVar9 * 4) =
             *(undefined4 *)
              (unaff_RBX + 0x4000 +
              (longlong)(*(int *)(unaff_RBX + 0x14028) - iStack0000000000000028) * 4);
        *(int *)(unaff_RBX + 0x14028) = *(int *)(unaff_RBX + 0x14028) + 1;
        iVar13 = *(int *)(unaff_RBX + 0x14030);
        if (iVar13 <= *(int *)(unaff_RBX + 0x14028)) {
          *(int *)(unaff_RBX + 0x14028) = iStack0000000000000028;
          iVar11 = 0;
          lVar9 = 0;
          fVar17 = fStack0000000000000038;
          if (0 < iVar13) {
            lVar7 = 0;
            puVar10 = (undefined4 *)0x180c11954;
            do {
              iVar11 = iVar11 + 1;
              fVar17 = *(float *)(lVar7 + unaff_RBX) *
                       *(float *)(lVar7 + *(longlong *)(unaff_RBX + 0x14020));
              *puVar10 = 0;
              puVar10[-1] = fVar17;
              iVar13 = *(int *)(unaff_RBX + 0x14030);
              lVar7 = lVar7 + 4;
              puVar10 = puVar10 + 2;
            } while (iVar11 < iVar13);
          }
          uVar21 = FUN_18079ea10(fVar17,0x180c11950,iVar13 * 2);
          FUN_18079f5c0(uVar21,0x180c11950);
          fVar17 = fStack0000000000000038;
          fStack000000000000005c = (float)unaff_R12D;
          fVar18 = fStack000000000000005c * in_stack_000001a0 * 0.15915494;
          lVar7 = unaff_RBX;
          if (-1 < (longlong)(in_EAX >> 1)) {
            pfVar16 = (float *)(unaff_RBX + 0x8008);
            iStack0000000000000034 = 2;
            do {
              fVar25 = 1.5707964;
              fVar20 = *(float *)(lVar9 * 8 + 0x180c11960);
              fVar19 = *(float *)(lVar9 * 8 + 0x180c11954);
              fVar22 = *(float *)(lVar9 * 8 + 0x180c11950);
              fVar1 = *(float *)(lVar9 * 8 + 0x180c11958);
              fVar2 = *(float *)(lVar9 * 8 + 0x180c1195c);
              fVar3 = *(float *)(lVar9 * 8 + 0x180c11964);
              fVar4 = *(float *)(lVar9 * 8 + 0x180c1196c);
              fVar26 = -1.5707964;
              fVar5 = *(float *)(lVar9 * 8 + 0x180c11968);
              if (fVar19 <= unaff_XMM9_Da) {
                fVar27 = -1.5707964;
              }
              else {
                fVar27 = 1.5707964;
              }
              fVar24 = unaff_XMM9_Da;
              if ((fVar19 != unaff_XMM9_Da) && (fVar24 = fVar27, fVar22 != unaff_XMM9_Da)) {
                fVar24 = (float)atan2f();
              }
              if (unaff_XMM9_Da < fVar2) {
                fVar26 = 1.5707964;
              }
              fVar27 = unaff_XMM9_Da;
              if ((fVar2 != unaff_XMM9_Da) && (fVar27 = fVar26, fVar1 != unaff_XMM9_Da)) {
                fVar27 = (float)atan2f();
              }
              fVar26 = -1.5707964;
              if (fVar3 <= unaff_XMM9_Da) {
                fVar25 = -1.5707964;
              }
              fVar23 = unaff_XMM9_Da;
              if ((fVar3 != unaff_XMM9_Da) && (fVar23 = fVar25, fVar20 != unaff_XMM9_Da)) {
                fVar23 = (float)atan2f();
              }
              if (unaff_XMM9_Da < fVar4) {
                fVar26 = 1.5707964;
              }
              fVar25 = unaff_XMM9_Da;
              if ((fVar4 != unaff_XMM9_Da) && (fVar25 = fVar26, fVar5 != unaff_XMM9_Da)) {
                fVar25 = (float)atan2f();
              }
              fVar22 = SQRT(fVar19 * fVar19 + fVar22 * fVar22);
              fVar19 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
              *(float *)((0x180c1fa58 - unaff_RBX) + (longlong)pfVar16) = fVar22 + fVar22;
              iVar13 = iStack0000000000000034 + 1;
              *(float *)((0x180c1fa5c - unaff_RBX) + (longlong)pfVar16) = fVar19 + fVar19;
              fVar20 = SQRT(fVar3 * fVar3 + fVar20 * fVar20);
              *(float *)((0x180c1fa60 - unaff_RBX) + (longlong)pfVar16) = fVar20 + fVar20;
              fVar20 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
              *(float *)((longlong)pfVar16 + (0x180c1fa64 - unaff_RBX)) = fVar20 + fVar20;
              fVar20 = pfVar16[-2];
              pfVar16[-2] = fVar24;
              fVar24 = fVar24 - ((float)(iStack0000000000000034 + -2) * fVar17 + fVar20);
              fVar20 = pfVar16[-1];
              pfVar16[-1] = fVar27;
              fVar27 = fVar27 - ((float)(iStack0000000000000034 + -1) * fVar17 + fVar20);
              fVar20 = *pfVar16;
              *pfVar16 = fVar23;
              fVar23 = fVar23 - ((float)iStack0000000000000034 * fVar17 + fVar20);
              fVar20 = pfVar16[1];
              pfVar16[1] = fVar25;
              fVar25 = fVar25 - ((float)iVar13 * fVar17 + fVar20);
              uVar8 = (uint)(fVar24 * 0.31830987);
              uVar12 = (uint)(fVar27 * 0.31830987);
              uVar14 = (uint)(fVar23 * 0.31830987);
              uVar15 = (uint)(fVar25 * 0.31830987);
              uVar6 = uVar8 & 1;
              if ((int)uVar8 < 0) {
                uVar6 = -(uVar8 & 1);
              }
              *(float *)((0x180c1ba58 - unaff_RBX) + (longlong)pfVar16) =
                   (fVar24 - (float)(int)(uVar6 + uVar8) * 3.1415927) * fVar18 +
                   (float)(iStack0000000000000034 + -2) * in_stack_000001a0;
              uVar6 = uVar12 & 1;
              if ((int)uVar12 < 0) {
                uVar6 = -(uVar12 & 1);
              }
              uVar8 = uVar14 & 1;
              if ((int)uVar14 < 0) {
                uVar8 = -(uVar14 & 1);
              }
              *(float *)((0x180c1ba5c - unaff_RBX) + (longlong)pfVar16) =
                   (fVar27 - (float)(int)(uVar6 + uVar12) * 3.1415927) * fVar18 +
                   (float)(iStack0000000000000034 + -1) * in_stack_000001a0;
              *(float *)((0x180c1ba60 - unaff_RBX) + (longlong)pfVar16) =
                   (fVar23 - (float)(int)(uVar8 + uVar14) * 3.1415927) * fVar18 +
                   (float)iStack0000000000000034 * in_stack_000001a0;
              uVar6 = uVar15 & 1;
              if ((int)uVar15 < 0) {
                uVar6 = -(uVar15 & 1);
              }
              iStack0000000000000034 = iStack0000000000000034 + 4;
              lVar9 = lVar9 + 4;
              *(float *)((0x180c1ba64 - unaff_RBX) + (longlong)pfVar16) =
                   (fVar25 - (float)(int)(uVar15 + uVar6) * 3.1415927) * fVar18 +
                   (float)iVar13 * in_stack_000001a0;
              pfVar16 = pfVar16 + 4;
              lVar7 = in_stack_00000180;
            } while (lVar9 <= in_EAX >> 1);
          }
                    // WARNING: Subroutine does not return
          memset(0x180c1fa60,0,(longlong)*(int *)(lVar7 + 0x14030) << 2);
        }
        iStack000000000000003c = iStack000000000000003c + 1;
      } while (iStack000000000000003c < in_stack_00000190);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x8000,0,0x4020);
}






// 函数: void FUN_1807a0e81(int param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
void FUN_1807a0e81(int param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong unaff_RBX;
  int unaff_EBP;
  ulonglong uVar11;
  int unaff_ESI;
  uint uVar12;
  uint uVar13;
  uint uVar15;
  uint uVar16;
  longlong in_R11;
  int unaff_R12D;
  float *pfVar17;
  longlong unaff_R15;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_XMM9_Da;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStackX_20;
  float fStack000000000000005c;
  longlong in_stack_00000180;
  int in_stack_00000190;
  longlong in_stack_000001b0;
  ulonglong uVar14;
  
  do {
    lVar9 = (longlong)(param_1 * unaff_EBP + param_4);
    *(undefined4 *)(unaff_RBX + (longlong)*(int *)(unaff_RBX + 0x14028) * 4) =
         *(undefined4 *)(in_R11 + lVar9 * 4);
    *(undefined4 *)(in_stack_000001b0 + lVar9 * 4) =
         *(undefined4 *)
          (unaff_RBX + 0x4000 + (longlong)(*(int *)(unaff_RBX + 0x14028) - unaff_ESI) * 4);
    *(int *)(unaff_RBX + 0x14028) = *(int *)(unaff_RBX + 0x14028) + 1;
    if (*(int *)(unaff_RBX + 0x14030) <= *(int *)(unaff_RBX + 0x14028)) {
      *(int *)(unaff_RBX + 0x14028) = unaff_ESI;
      uVar11 = 0;
      if (0 < *(int *)(unaff_RBX + 0x14030)) {
        uVar7 = uVar11;
        puVar10 = (undefined4 *)0x180c11954;
        uVar14 = uVar11;
        do {
          fVar18 = *(float *)(uVar7 + unaff_RBX);
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          fVar20 = *(float *)(uVar7 + *(longlong *)(unaff_RBX + 0x14020));
          *puVar10 = 0;
          puVar10[-1] = fVar18 * fVar20;
          uVar7 = uVar7 + 4;
          puVar10 = puVar10 + 2;
        } while ((int)uVar13 < *(int *)(unaff_RBX + 0x14030));
      }
      uVar21 = FUN_18079ea10();
      FUN_18079f5c0(uVar21,0x180c11950);
      fStack000000000000005c = (float)unaff_R12D;
      fVar18 = fStack000000000000005c * fStackX_20 * 0.15915494;
      lVar9 = unaff_RBX;
      if (-1 < unaff_R15) {
        pfVar17 = (float *)(unaff_RBX + 0x8008);
        param_6._4_4_ = 2;
        do {
          fVar25 = 1.5707964;
          fVar20 = *(float *)(uVar11 * 8 + 0x180c11960);
          fVar19 = *(float *)(uVar11 * 8 + 0x180c11954);
          fVar22 = *(float *)(uVar11 * 8 + 0x180c11950);
          fVar2 = *(float *)(uVar11 * 8 + 0x180c11958);
          fVar3 = *(float *)(uVar11 * 8 + 0x180c1195c);
          fVar4 = *(float *)(uVar11 * 8 + 0x180c11964);
          fVar5 = *(float *)(uVar11 * 8 + 0x180c1196c);
          fVar26 = -1.5707964;
          fVar6 = *(float *)(uVar11 * 8 + 0x180c11968);
          if (fVar19 <= unaff_XMM9_Da) {
            fVar27 = -1.5707964;
          }
          else {
            fVar27 = 1.5707964;
          }
          fVar24 = unaff_XMM9_Da;
          if ((fVar19 != unaff_XMM9_Da) && (fVar24 = fVar27, fVar22 != unaff_XMM9_Da)) {
            fVar24 = (float)atan2f();
          }
          if (unaff_XMM9_Da < fVar3) {
            fVar26 = 1.5707964;
          }
          fVar27 = unaff_XMM9_Da;
          if ((fVar3 != unaff_XMM9_Da) && (fVar27 = fVar26, fVar2 != unaff_XMM9_Da)) {
            fVar27 = (float)atan2f();
          }
          fVar26 = -1.5707964;
          if (fVar4 <= unaff_XMM9_Da) {
            fVar25 = -1.5707964;
          }
          fVar23 = unaff_XMM9_Da;
          if ((fVar4 != unaff_XMM9_Da) && (fVar23 = fVar25, fVar20 != unaff_XMM9_Da)) {
            fVar23 = (float)atan2f();
          }
          if (unaff_XMM9_Da < fVar5) {
            fVar26 = 1.5707964;
          }
          fVar25 = unaff_XMM9_Da;
          if ((fVar5 != unaff_XMM9_Da) && (fVar25 = fVar26, fVar6 != unaff_XMM9_Da)) {
            fVar25 = (float)atan2f();
          }
          fVar22 = SQRT(fVar19 * fVar19 + fVar22 * fVar22);
          fVar19 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
          *(float *)((0x180c1fa58 - unaff_RBX) + (longlong)pfVar17) = fVar22 + fVar22;
          iVar1 = param_6._4_4_ + 1;
          *(float *)((0x180c1fa5c - unaff_RBX) + (longlong)pfVar17) = fVar19 + fVar19;
          fVar20 = SQRT(fVar4 * fVar4 + fVar20 * fVar20);
          *(float *)((0x180c1fa60 - unaff_RBX) + (longlong)pfVar17) = fVar20 + fVar20;
          fVar20 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
          *(float *)((longlong)pfVar17 + (0x180c1fa64 - unaff_RBX)) = fVar20 + fVar20;
          fVar20 = pfVar17[-2];
          pfVar17[-2] = fVar24;
          fVar24 = fVar24 - ((float)(param_6._4_4_ + -2) * (float)param_7 + fVar20);
          fVar20 = pfVar17[-1];
          pfVar17[-1] = fVar27;
          fVar27 = fVar27 - ((float)(param_6._4_4_ + -1) * (float)param_7 + fVar20);
          fVar20 = *pfVar17;
          *pfVar17 = fVar23;
          fVar23 = fVar23 - ((float)param_6._4_4_ * (float)param_7 + fVar20);
          fVar20 = pfVar17[1];
          pfVar17[1] = fVar25;
          fVar25 = fVar25 - ((float)iVar1 * (float)param_7 + fVar20);
          uVar8 = (uint)(fVar24 * 0.31830987);
          uVar12 = (uint)(fVar27 * 0.31830987);
          uVar15 = (uint)(fVar23 * 0.31830987);
          uVar16 = (uint)(fVar25 * 0.31830987);
          uVar13 = uVar8 & 1;
          if ((int)uVar8 < 0) {
            uVar13 = -(uVar8 & 1);
          }
          *(float *)((0x180c1ba58 - unaff_RBX) + (longlong)pfVar17) =
               (fVar24 - (float)(int)(uVar13 + uVar8) * 3.1415927) * fVar18 +
               (float)(param_6._4_4_ + -2) * fStackX_20;
          uVar13 = uVar12 & 1;
          if ((int)uVar12 < 0) {
            uVar13 = -(uVar12 & 1);
          }
          uVar8 = uVar15 & 1;
          if ((int)uVar15 < 0) {
            uVar8 = -(uVar15 & 1);
          }
          *(float *)((0x180c1ba5c - unaff_RBX) + (longlong)pfVar17) =
               (fVar27 - (float)(int)(uVar13 + uVar12) * 3.1415927) * fVar18 +
               (float)(param_6._4_4_ + -1) * fStackX_20;
          *(float *)((0x180c1ba60 - unaff_RBX) + (longlong)pfVar17) =
               (fVar23 - (float)(int)(uVar8 + uVar15) * 3.1415927) * fVar18 +
               (float)param_6._4_4_ * fStackX_20;
          uVar13 = uVar16 & 1;
          if ((int)uVar16 < 0) {
            uVar13 = -(uVar16 & 1);
          }
          param_6._4_4_ = param_6._4_4_ + 4;
          uVar11 = uVar11 + 4;
          *(float *)((0x180c1ba64 - unaff_RBX) + (longlong)pfVar17) =
               (fVar25 - (float)(int)(uVar16 + uVar13) * 3.1415927) * fVar18 +
               (float)iVar1 * fStackX_20;
          pfVar17 = pfVar17 + 4;
          lVar9 = in_stack_00000180;
        } while ((longlong)uVar11 <= param_8);
      }
                    // WARNING: Subroutine does not return
      memset(0x180c1fa60,0,(longlong)*(int *)(lVar9 + 0x14030) << 2);
    }
    param_1 = param_7._4_4_ + 1;
    param_7._4_4_ = param_1;
  } while (param_1 < in_stack_00000190);
  return;
}






// 函数: void FUN_1807a2058(void)
void FUN_1807a2058(void)

{
  return;
}






// 函数: void FUN_1807a2061(void)
void FUN_1807a2061(void)

{
  return;
}






