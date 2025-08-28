#include "TaleWorlds.Native.Split.h"

// 03_rendering_part450.c - 9 个函数

// 函数: void FUN_1805115e5(void)
void FUN_1805115e5(void)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong in_RAX;
  longlong lVar12;
  longlong unaff_RBX;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int32_t uVar20;
  char unaff_R15B;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int32_t in_stack_00000020;
  char in_stack_000000a0;
  
  if (((*(longlong *)(in_RAX + 0x8a8) != 0) && (*(longlong *)(unaff_RBX + 0x9a0) != 0)) &&
     (FUN_180525cb0(), *(longlong *)(unaff_RBX + 0x9a0) != 0)) {
    lVar5 = *(longlong *)(unaff_RBX + 0x658);
    uVar16 = 0;
    cVar9 = *(char *)(lVar5 + 0x20);
    if ('\0' < cVar9) {
      lVar19 = 0;
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(unaff_RBX + 0x9a0);
        if ((((*(ulonglong *)(lVar12 + 0x400) >> (uVar16 & 0x3f) & 1) != 0) &&
            (*(longlong *)(lVar12 + lVar13) != 0)) &&
           ((fVar2 = *(float *)(lVar12 + 8 + lVar13), unaff_XMM6_Da <= fVar2 && (0.25 < fVar2)))) {
          lVar6 = *(longlong *)(lVar5 + 0x18);
          cVar3 = *(char *)(lVar19 + 0xa0 + lVar6);
          if ((-1 < cVar3) &&
             (pfVar1 = (float *)((longlong)cVar3 * 0x10 + 8 + lVar12),
             unaff_XMM6_Da < *pfVar1 || unaff_XMM6_Da == *pfVar1)) {
            *(ulonglong *)(lVar12 + 0x400) =
                 *(ulonglong *)(lVar12 + 0x400) | 1L << ((longlong)cVar3 & 0x3fU);
          }
          bVar14 = *(byte *)(lVar19 + 0xa1 + lVar6);
          if ('\0' < (char)bVar14) {
            lVar12 = 0;
            uVar17 = (ulonglong)bVar14;
            do {
              lVar7 = *(longlong *)(unaff_RBX + 0x9a0);
              uVar18 = (ulonglong)*(char *)(lVar12 + *(longlong *)(lVar19 + 0xa8 + lVar6));
              pfVar1 = (float *)(lVar7 + 8 + uVar18 * 0x10);
              if (unaff_XMM6_Da < *pfVar1 || unaff_XMM6_Da == *pfVar1) {
                *(ulonglong *)(lVar7 + 0x400) =
                     *(ulonglong *)(lVar7 + 0x400) | 1L << (uVar18 & 0x3f);
              }
              lVar12 = lVar12 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        bVar14 = (char)uVar16 + 1;
        uVar16 = (ulonglong)bVar14;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x100;
      } while ((char)bVar14 < cVar9);
    }
  }
  FUN_18052af20();
  cVar9 = func_0x00018052ae60();
  if (cVar9 != '\0') {
    return;
  }
  FUN_180521480();
  if (unaff_XMM7_Da <= unaff_XMM6_Da) {
    return;
  }
  if (unaff_R15B != '\0') {
    return;
  }
  if (*(int *)(unaff_RBX + 0x568) != 1) {
    return;
  }
  uVar4 = *(uint *)(unaff_RBX + 0x56c);
  if ((uVar4 >> 0xe & 1) == 0) {
    return;
  }
  FUN_18050d2a0();
  lVar5 = *(longlong *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e8);
  if (lVar5 == 0) {
    return;
  }
  uVar15 = *(uint *)(unaff_RBX + 0x4c4) >> 10;
  in_stack_000000a0 = '\x01';
  if ((uVar15 & 1) == 0) {
    cVar9 = FUN_1805a3ab0(unaff_RBX + 0x28);
    if ((cVar9 == '\0') || (cVar9 = FUN_1805a3b20(unaff_RBX + 0x28,&stack0x000000a0), cVar9 != '\0')
       ) goto LAB_18051181d;
    bVar8 = true;
LAB_1805117e1:
    iVar10 = *(int *)(*(longlong *)(unaff_RBX + 0x590) + 0x2498);
    if ((iVar10 == -1) || (*(int *)((longlong)iVar10 * 0x68 + 0x58 + _DAT_180c96150) != 0x21)) {
      iVar10 = *(int *)(lVar5 + 0xf0);
      iVar11 = FUN_180590480(lVar5,iVar10 + 1,uVar4,*(uint *)(unaff_RBX + 0x564) >> 0x1f ^ 1,
                             CONCAT31((int3)((uint)in_stack_00000020 >> 8),
                                      (byte)((uint)*(int32_t *)
                                                    (*(longlong *)(unaff_RBX + 0x8f8) + 0x9e4) >>
                                            0x1f)) ^ 1);
      if ((iVar11 != iVar10) && (iVar11 != -1)) {
        *(int *)(unaff_RBX + 0x2c0) = iVar11;
      }
      if (bVar8) {
        if (in_stack_000000a0 == '\0') goto LAB_180511946;
        *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa14) = iVar10;
      }
    }
    else {
      *(uint *)(unaff_RBX + 0x4c4) = *(uint *)(unaff_RBX + 0x4c4) & 0xfffffbff;
    }
  }
  else {
LAB_18051181d:
    bVar8 = false;
    if ((uVar15 & 1) != 0) goto LAB_1805117e1;
    if (((-1 < *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa14)) &&
        ((*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar5 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
         == 0)) && (cVar9 = FUN_1805a3b20(unaff_RBX + 0x28,&stack0x000000a0), cVar9 != '\0')) {
      uVar20 = *(int32_t *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa14);
      iVar10 = func_0x000180590580(lVar5,uVar20,*(uint *)(unaff_RBX + 0x564) >> 0x1f ^ 1,
                                   *(uint *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e4) >> 0x1f ^ 1,
                                   uVar4);
      if (iVar10 != 0) {
        *(int32_t *)(unaff_RBX + 0x2c0) = uVar20;
      }
    }
  }
  if (in_stack_000000a0 != '\0') {
    return;
  }
LAB_180511946:
  *(int32_t *)(*(longlong *)(unaff_RBX + 0x8f8) + 0xa14) = 0xffffffff;
  return;
}





// 函数: void FUN_180511977(void)
void FUN_180511977(void)

{
  return;
}





// 函数: void FUN_180511990(longlong param_1,int param_2,int param_3,char param_4,char param_5,float param_6)
void FUN_180511990(longlong param_1,int param_2,int param_3,char param_4,char param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  bool bVar5;
  void *puVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  void *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  puVar15 = &unknown_var_6416_ptr;
  puVar6 = &unknown_var_6416_ptr;
  if (param_5 != '\0') {
    puVar6 = &unknown_var_6344_ptr;
  }
  lVar13 = (longlong)param_2;
  if (param_4 != '\0') {
    puVar15 = &unknown_var_6344_ptr;
  }
  func_0x000180508000(*(uint64_t *)(param_1 + 0x6e0),&unknown_var_6536_ptr,&unknown_var_6560_ptr,lVar13,param_3,
                      puVar15,puVar6,(double)param_6);
  lVar10 = *(longlong *)(param_1 + 0x8d8);
  lVar18 = 0;
  if (((-1 < (int)lVar13) && ((int)lVar13 < *(int *)(lVar10 + 0x52ed94))) &&
     (-1 < *(short *)(lVar10 + 0x52dda0 + lVar13 * 2))) {
    lVar13 = lVar13 * 0xa60;
    if (param_4 == '\0') {
      if (param_5 != '\0') {
        piVar7 = (int *)(lVar13 + 0x371c + lVar10);
        *piVar7 = *piVar7 + -1;
      }
    }
    else {
      piVar7 = (int *)(lVar13 + 0x3718 + lVar10);
      *piVar7 = *piVar7 + -1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x6e0) + 0x1728);
      if (-1 < (int)uVar1) {
        *(uint *)(lVar13 + 0x3720 + lVar10) =
             *(uint *)(lVar13 + 0x3720 + lVar10) & ~(1 << (uVar1 & 0x1f));
      }
    }
    piVar7 = (int *)(*(longlong *)(lVar13 + 0x3780 + lVar10) + 0x13c);
    lVar13 = lVar18;
    do {
      if (*piVar7 == *(int *)(param_1 + 0x10)) {
        *piVar7 = -1;
        piVar7[1] = -0x40800000;
        break;
      }
      lVar13 = lVar13 + 1;
      piVar7 = piVar7 + 2;
    } while (lVar13 < 4);
  }
  if (-1 < param_3) {
    lVar10 = (longlong)param_3 * 0xa60;
    lVar13 = *(longlong *)(param_1 + 0x8d8);
    if (param_4 != '\0') {
      piVar7 = (int *)(lVar10 + 0x3718 + lVar13);
      *piVar7 = *piVar7 + 1;
      lVar11 = 3;
      lVar16 = 3;
      lVar17 = 3;
      lVar19 = 1;
      lVar14 = lVar18;
      do {
        lVar3 = *(longlong *)(lVar10 + 0x3780 + lVar13);
        iVar2 = *(int *)(lVar14 + 0x13c + lVar3);
        if (((iVar2 < 0) || (*(int *)(*(longlong *)(param_1 + 0x8d8) + 0x52ed94) <= iVar2)) ||
           (*(short *)(*(longlong *)(param_1 + 0x8d8) + 0x52dda0 + (longlong)iVar2 * 2) < 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (lVar19 < 4) {
          lVar12 = lVar19;
          if (3 < lVar16) {
            do {
              lVar9 = *(longlong *)(lVar10 + 0x3780 + lVar13);
              lVar8 = *(longlong *)(param_1 + 0x8d8);
              iVar2 = *(int *)(lVar9 + 0x13c + lVar12 * 8);
              if (((-1 < iVar2) && (iVar2 < *(int *)(lVar8 + 0x52ed94))) &&
                 ((-1 < *(short *)(lVar8 + 0x52dda0 + (longlong)iVar2 * 2) &&
                  ((*(float *)(lVar14 + 0x140 + lVar3) < *(float *)(lVar9 + 0x140 + lVar12 * 8) ||
                   (!bVar5)))))) {
                uVar4 = *(uint64_t *)(lVar14 + 0x13c + lVar3);
                *(uint64_t *)(lVar14 + 0x13c + lVar3) =
                     *(uint64_t *)(lVar9 + 0x13c + lVar12 * 8);
                *(uint64_t *)(lVar9 + 0x13c + lVar12 * 8) = uVar4;
                lVar9 = *(longlong *)(lVar10 + 0x3780 + lVar13);
                lVar8 = *(longlong *)(param_1 + 0x8d8);
              }
              iVar2 = *(int *)(lVar9 + 0x144 + lVar12 * 8);
              if ((((-1 < iVar2) && (iVar2 < *(int *)(lVar8 + 0x52ed94))) &&
                  (-1 < *(short *)(lVar8 + 0x52dda0 + (longlong)iVar2 * 2))) &&
                 ((*(float *)(lVar14 + 0x140 + lVar3) < *(float *)(lVar9 + 0x148 + lVar12 * 8) ||
                  (!bVar5)))) {
                uVar4 = *(uint64_t *)(lVar14 + 0x13c + lVar3);
                *(uint64_t *)(lVar14 + 0x13c + lVar3) =
                     *(uint64_t *)(lVar9 + 0x144 + lVar12 * 8);
                *(uint64_t *)(lVar9 + 0x144 + lVar12 * 8) = uVar4;
                lVar9 = *(longlong *)(lVar10 + 0x3780 + lVar13);
                lVar8 = *(longlong *)(param_1 + 0x8d8);
              }
              iVar2 = *(int *)(lVar9 + 0x14c + lVar12 * 8);
              if (((-1 < iVar2) && (iVar2 < *(int *)(lVar8 + 0x52ed94))) &&
                 ((-1 < *(short *)(lVar8 + 0x52dda0 + (longlong)iVar2 * 2) &&
                  ((*(float *)(lVar14 + 0x140 + lVar3) < *(float *)(lVar9 + 0x150 + lVar12 * 8) ||
                   (!bVar5)))))) {
                uVar4 = *(uint64_t *)(lVar14 + 0x13c + lVar3);
                *(uint64_t *)(lVar14 + 0x13c + lVar3) =
                     *(uint64_t *)(lVar9 + 0x14c + lVar12 * 8);
                *(uint64_t *)(lVar9 + 0x14c + lVar12 * 8) = uVar4;
                lVar9 = *(longlong *)(lVar10 + 0x3780 + lVar13);
                lVar8 = *(longlong *)(param_1 + 0x8d8);
              }
              iVar2 = *(int *)(lVar9 + 0x154 + lVar12 * 8);
              if ((((-1 < iVar2) && (iVar2 < *(int *)(lVar8 + 0x52ed94))) &&
                  (-1 < *(short *)(lVar8 + 0x52dda0 + (longlong)iVar2 * 2))) &&
                 ((*(float *)(lVar14 + 0x140 + lVar3) < *(float *)(lVar9 + 0x158 + lVar12 * 8) ||
                  (!bVar5)))) {
                uVar4 = *(uint64_t *)(lVar14 + 0x13c + lVar3);
                *(uint64_t *)(lVar14 + 0x13c + lVar3) =
                     *(uint64_t *)(lVar9 + 0x154 + lVar12 * 8);
                *(uint64_t *)(lVar9 + 0x154 + lVar12 * 8) = uVar4;
              }
              lVar12 = lVar12 + 4;
            } while (lVar12 < 1);
          }
          if (lVar12 < 4) {
            lVar12 = lVar12 * 8;
            do {
              lVar9 = *(longlong *)(lVar10 + 0x3780 + lVar13);
              iVar2 = *(int *)(lVar12 + 0x13c + lVar9);
              if (((-1 < iVar2) && (iVar2 < *(int *)(*(longlong *)(param_1 + 0x8d8) + 0x52ed94))) &&
                 ((-1 < *(short *)(*(longlong *)(param_1 + 0x8d8) + 0x52dda0 + (longlong)iVar2 * 2)
                  && ((*(float *)(lVar14 + 0x140 + lVar3) < *(float *)(lVar12 + 0x140 + lVar9) ||
                      (!bVar5)))))) {
                uVar4 = *(uint64_t *)(lVar14 + 0x13c + lVar3);
                *(uint64_t *)(lVar14 + 0x13c + lVar3) = *(uint64_t *)(lVar12 + 0x13c + lVar9);
                *(uint64_t *)(lVar12 + 0x13c + lVar9) = uVar4;
              }
              lVar12 = lVar12 + 8;
            } while (lVar12 < 0x20);
          }
        }
        lVar16 = lVar16 + -1;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      piVar7 = (int *)(*(longlong *)(lVar10 + 0x3780 + lVar13) + 0x13c);
      while (param_6 < (float)piVar7[1] || param_6 == (float)piVar7[1]) {
        iVar2 = *piVar7;
        if (((iVar2 < 0) || (*(int *)(*(longlong *)(param_1 + 0x8d8) + 0x52ed94) <= iVar2)) ||
           (*(short *)(*(longlong *)(param_1 + 0x8d8) + 0x52dda0 + (longlong)iVar2 * 2) < 0))
        goto LAB_180511e30;
        lVar18 = lVar18 + 1;
        piVar7 = piVar7 + 2;
        if (3 < lVar18) {
          return;
        }
      }
      if (lVar18 < 3) {
        do {
          lVar14 = *(longlong *)(lVar10 + 0x3780 + lVar13);
          *(uint64_t *)(lVar14 + 0x13c + lVar11 * 8) =
               *(uint64_t *)(lVar14 + 0x134 + lVar11 * 8);
          lVar11 = lVar11 + -1;
        } while (lVar18 < lVar11);
      }
LAB_180511e30:
      iVar2 = *(int *)(param_1 + 0x10);
      piVar7[1] = (int)param_6;
      *piVar7 = iVar2;
      return;
    }
    if (param_5 != '\0') {
      piVar7 = (int *)(lVar10 + 0x371c + lVar13);
      *piVar7 = *piVar7 + 1;
    }
  }
  return;
}





// 函数: void FUN_180511ac7(uint64_t param_1,float param_2)
void FUN_180511ac7(uint64_t param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_DIL;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char in_R11B;
  longlong lVar12;
  longlong lVar13;
  short sVar14;
  longlong unaff_R14;
  longlong lVar15;
  
  lVar2 = *(longlong *)(unaff_RBP + 0x8d8);
  if (unaff_DIL == '\0') {
    if (in_R11B != '\0') {
      piVar8 = (int *)(unaff_RBX + 0x371c + lVar2);
      *piVar8 = *piVar8 + 1;
    }
    return;
  }
  piVar8 = (int *)(unaff_RBX + 0x3718 + lVar2);
  *piVar8 = *piVar8 + 1;
  lVar9 = 3;
  lVar12 = 3;
  lVar13 = 3;
  lVar15 = 1;
  lVar11 = unaff_R14;
  do {
    lVar3 = *(longlong *)(unaff_RBX + 0x3780 + lVar2);
    iVar1 = *(int *)(lVar11 + 0x13c + lVar3);
    sVar14 = (short)unaff_R14;
    if (((iVar1 < 0) || (*(int *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52ed94) <= iVar1)) ||
       (*(short *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52dda0 + (longlong)iVar1 * 2) < sVar14)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (lVar15 < 4) {
      lVar10 = lVar15;
      if (3 < lVar12) {
        do {
          lVar7 = *(longlong *)(unaff_RBX + 0x3780 + lVar2);
          lVar6 = *(longlong *)(unaff_RBP + 0x8d8);
          iVar1 = *(int *)(lVar7 + 0x13c + lVar10 * 8);
          if (((-1 < iVar1) && (iVar1 < *(int *)(lVar6 + 0x52ed94))) &&
             ((sVar14 <= *(short *)(lVar6 + 0x52dda0 + (longlong)iVar1 * 2) &&
              ((*(float *)(lVar11 + 0x140 + lVar3) < *(float *)(lVar7 + 0x140 + lVar10 * 8) ||
               (!bVar5)))))) {
            uVar4 = *(uint64_t *)(lVar11 + 0x13c + lVar3);
            *(uint64_t *)(lVar11 + 0x13c + lVar3) = *(uint64_t *)(lVar7 + 0x13c + lVar10 * 8);
            *(uint64_t *)(lVar7 + 0x13c + lVar10 * 8) = uVar4;
            lVar7 = *(longlong *)(unaff_RBX + 0x3780 + lVar2);
            lVar6 = *(longlong *)(unaff_RBP + 0x8d8);
          }
          iVar1 = *(int *)(lVar7 + 0x144 + lVar10 * 8);
          if ((((-1 < iVar1) && (iVar1 < *(int *)(lVar6 + 0x52ed94))) &&
              (sVar14 <= *(short *)(lVar6 + 0x52dda0 + (longlong)iVar1 * 2))) &&
             ((*(float *)(lVar11 + 0x140 + lVar3) < *(float *)(lVar7 + 0x148 + lVar10 * 8) ||
              (!bVar5)))) {
            uVar4 = *(uint64_t *)(lVar11 + 0x13c + lVar3);
            *(uint64_t *)(lVar11 + 0x13c + lVar3) = *(uint64_t *)(lVar7 + 0x144 + lVar10 * 8);
            *(uint64_t *)(lVar7 + 0x144 + lVar10 * 8) = uVar4;
            lVar7 = *(longlong *)(unaff_RBX + 0x3780 + lVar2);
            lVar6 = *(longlong *)(unaff_RBP + 0x8d8);
          }
          iVar1 = *(int *)(lVar7 + 0x14c + lVar10 * 8);
          if (((-1 < iVar1) && (iVar1 < *(int *)(lVar6 + 0x52ed94))) &&
             ((sVar14 <= *(short *)(lVar6 + 0x52dda0 + (longlong)iVar1 * 2) &&
              ((*(float *)(lVar11 + 0x140 + lVar3) < *(float *)(lVar7 + 0x150 + lVar10 * 8) ||
               (!bVar5)))))) {
            uVar4 = *(uint64_t *)(lVar11 + 0x13c + lVar3);
            *(uint64_t *)(lVar11 + 0x13c + lVar3) = *(uint64_t *)(lVar7 + 0x14c + lVar10 * 8);
            *(uint64_t *)(lVar7 + 0x14c + lVar10 * 8) = uVar4;
            lVar7 = *(longlong *)(unaff_RBX + 0x3780 + lVar2);
            lVar6 = *(longlong *)(unaff_RBP + 0x8d8);
          }
          iVar1 = *(int *)(lVar7 + 0x154 + lVar10 * 8);
          if ((((-1 < iVar1) && (iVar1 < *(int *)(lVar6 + 0x52ed94))) &&
              (sVar14 <= *(short *)(lVar6 + 0x52dda0 + (longlong)iVar1 * 2))) &&
             ((*(float *)(lVar11 + 0x140 + lVar3) < *(float *)(lVar7 + 0x158 + lVar10 * 8) ||
              (!bVar5)))) {
            uVar4 = *(uint64_t *)(lVar11 + 0x13c + lVar3);
            *(uint64_t *)(lVar11 + 0x13c + lVar3) = *(uint64_t *)(lVar7 + 0x154 + lVar10 * 8);
            *(uint64_t *)(lVar7 + 0x154 + lVar10 * 8) = uVar4;
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 < 1);
      }
      if (lVar10 < 4) {
        lVar10 = lVar10 * 8;
        do {
          lVar7 = *(longlong *)(unaff_RBX + 0x3780 + lVar2);
          iVar1 = *(int *)(lVar10 + 0x13c + lVar7);
          if (((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52ed94))) &&
             ((sVar14 <= *(short *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52dda0 +
                                   (longlong)iVar1 * 2) &&
              ((*(float *)(lVar11 + 0x140 + lVar3) < *(float *)(lVar10 + 0x140 + lVar7) || (!bVar5))
              )))) {
            uVar4 = *(uint64_t *)(lVar11 + 0x13c + lVar3);
            *(uint64_t *)(lVar11 + 0x13c + lVar3) = *(uint64_t *)(lVar10 + 0x13c + lVar7);
            *(uint64_t *)(lVar10 + 0x13c + lVar7) = uVar4;
          }
          lVar10 = lVar10 + 8;
        } while (lVar10 < 0x20);
      }
    }
    lVar12 = lVar12 + -1;
    lVar11 = lVar11 + 8;
    lVar15 = lVar15 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  piVar8 = (int *)(*(longlong *)(unaff_RBX + 0x3780 + lVar2) + 0x13c);
  while (param_2 < (float)piVar8[1] || param_2 == (float)piVar8[1]) {
    iVar1 = *piVar8;
    if (((iVar1 < 0) || (*(int *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52ed94) <= iVar1)) ||
       (*(short *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52dda0 + (longlong)iVar1 * 2) < 0))
    goto LAB_180511e30;
    unaff_R14 = unaff_R14 + 1;
    piVar8 = piVar8 + 2;
    if (3 < unaff_R14) {
      return;
    }
  }
  if (unaff_R14 < 3) {
    do {
      lVar11 = *(longlong *)(unaff_RBX + 0x3780 + lVar2);
      *(uint64_t *)(lVar11 + 0x13c + lVar9 * 8) = *(uint64_t *)(lVar11 + 0x134 + lVar9 * 8);
      lVar9 = lVar9 + -1;
    } while (unaff_R14 < lVar9);
  }
LAB_180511e30:
  iVar1 = *(int *)(unaff_RBP + 0x10);
  piVar8[1] = (int)param_2;
  *piVar8 = iVar1;
  return;
}





// 函数: void FUN_180511ae8(uint64_t param_1,float param_2)
void FUN_180511ae8(uint64_t param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short sVar12;
  longlong unaff_R14;
  longlong lVar13;
  
  uVar10 = unaff_RDI & 0xffffffff;
  uVar11 = unaff_RDI & 0xffffffff;
  lVar13 = 1;
  lVar9 = unaff_R14;
  do {
    lVar2 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
    iVar1 = *(int *)(lVar9 + 0x13c + lVar2);
    sVar12 = (short)unaff_R14;
    if (((iVar1 < 0) || (*(int *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52ed94) <= iVar1)) ||
       (*(short *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52dda0 + (longlong)iVar1 * 2) < sVar12)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (lVar13 < 4) {
      lVar8 = lVar13;
      if (3 < (longlong)uVar10) {
        do {
          lVar6 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
          lVar5 = *(longlong *)(unaff_RBP + 0x8d8);
          iVar1 = *(int *)(lVar6 + 0x13c + lVar8 * 8);
          if (((-1 < iVar1) && (iVar1 < *(int *)(lVar5 + 0x52ed94))) &&
             ((sVar12 <= *(short *)(lVar5 + 0x52dda0 + (longlong)iVar1 * 2) &&
              ((*(float *)(lVar9 + 0x140 + lVar2) < *(float *)(lVar6 + 0x140 + lVar8 * 8) ||
               (!bVar4)))))) {
            uVar3 = *(uint64_t *)(lVar9 + 0x13c + lVar2);
            *(uint64_t *)(lVar9 + 0x13c + lVar2) = *(uint64_t *)(lVar6 + 0x13c + lVar8 * 8);
            *(uint64_t *)(lVar6 + 0x13c + lVar8 * 8) = uVar3;
            lVar6 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
            lVar5 = *(longlong *)(unaff_RBP + 0x8d8);
          }
          iVar1 = *(int *)(lVar6 + 0x144 + lVar8 * 8);
          if ((((-1 < iVar1) && (iVar1 < *(int *)(lVar5 + 0x52ed94))) &&
              (sVar12 <= *(short *)(lVar5 + 0x52dda0 + (longlong)iVar1 * 2))) &&
             ((*(float *)(lVar9 + 0x140 + lVar2) < *(float *)(lVar6 + 0x148 + lVar8 * 8) || (!bVar4)
              ))) {
            uVar3 = *(uint64_t *)(lVar9 + 0x13c + lVar2);
            *(uint64_t *)(lVar9 + 0x13c + lVar2) = *(uint64_t *)(lVar6 + 0x144 + lVar8 * 8);
            *(uint64_t *)(lVar6 + 0x144 + lVar8 * 8) = uVar3;
            lVar6 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
            lVar5 = *(longlong *)(unaff_RBP + 0x8d8);
          }
          iVar1 = *(int *)(lVar6 + 0x14c + lVar8 * 8);
          if (((-1 < iVar1) && (iVar1 < *(int *)(lVar5 + 0x52ed94))) &&
             ((sVar12 <= *(short *)(lVar5 + 0x52dda0 + (longlong)iVar1 * 2) &&
              ((*(float *)(lVar9 + 0x140 + lVar2) < *(float *)(lVar6 + 0x150 + lVar8 * 8) ||
               (!bVar4)))))) {
            uVar3 = *(uint64_t *)(lVar9 + 0x13c + lVar2);
            *(uint64_t *)(lVar9 + 0x13c + lVar2) = *(uint64_t *)(lVar6 + 0x14c + lVar8 * 8);
            *(uint64_t *)(lVar6 + 0x14c + lVar8 * 8) = uVar3;
            lVar6 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
            lVar5 = *(longlong *)(unaff_RBP + 0x8d8);
          }
          iVar1 = *(int *)(lVar6 + 0x154 + lVar8 * 8);
          if ((((-1 < iVar1) && (iVar1 < *(int *)(lVar5 + 0x52ed94))) &&
              (sVar12 <= *(short *)(lVar5 + 0x52dda0 + (longlong)iVar1 * 2))) &&
             ((*(float *)(lVar9 + 0x140 + lVar2) < *(float *)(lVar6 + 0x158 + lVar8 * 8) || (!bVar4)
              ))) {
            uVar3 = *(uint64_t *)(lVar9 + 0x13c + lVar2);
            *(uint64_t *)(lVar9 + 0x13c + lVar2) = *(uint64_t *)(lVar6 + 0x154 + lVar8 * 8);
            *(uint64_t *)(lVar6 + 0x154 + lVar8 * 8) = uVar3;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 < 1);
      }
      if (lVar8 < 4) {
        lVar8 = lVar8 * 8;
        do {
          lVar6 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
          iVar1 = *(int *)(lVar8 + 0x13c + lVar6);
          if (((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52ed94))) &&
             ((sVar12 <= *(short *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52dda0 +
                                   (longlong)iVar1 * 2) &&
              ((*(float *)(lVar9 + 0x140 + lVar2) < *(float *)(lVar8 + 0x140 + lVar6) || (!bVar4))))
             )) {
            uVar3 = *(uint64_t *)(lVar9 + 0x13c + lVar2);
            *(uint64_t *)(lVar9 + 0x13c + lVar2) = *(uint64_t *)(lVar8 + 0x13c + lVar6);
            *(uint64_t *)(lVar8 + 0x13c + lVar6) = uVar3;
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 < 0x20);
      }
    }
    uVar10 = uVar10 - 1;
    lVar9 = lVar9 + 8;
    lVar13 = lVar13 + 1;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  piVar7 = (int *)(*(longlong *)(unaff_RBX + 0x3780 + unaff_RSI) + 0x13c);
  while (param_2 < (float)piVar7[1] || param_2 == (float)piVar7[1]) {
    iVar1 = *piVar7;
    if (((iVar1 < 0) || (*(int *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52ed94) <= iVar1)) ||
       (*(short *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52dda0 + (longlong)iVar1 * 2) < 0))
    goto LAB_180511e30;
    unaff_R14 = unaff_R14 + 1;
    piVar7 = piVar7 + 2;
    if (3 < unaff_R14) {
      return;
    }
  }
  if (unaff_R14 < (longlong)unaff_RDI) {
    do {
      lVar9 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
      *(uint64_t *)(lVar9 + 0x13c + unaff_RDI * 8) =
           *(uint64_t *)(lVar9 + 0x134 + unaff_RDI * 8);
      unaff_RDI = unaff_RDI - 1;
    } while (unaff_R14 < (longlong)unaff_RDI);
  }
LAB_180511e30:
  iVar1 = *(int *)(unaff_RBP + 0x10);
  piVar7[1] = (int)param_2;
  *piVar7 = iVar1;
  return;
}





// 函数: void FUN_180511dc3(uint64_t param_1,float param_2)
void FUN_180511dc3(uint64_t param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  int *in_RDX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  while (param_2 < (float)in_RDX[1] || param_2 == (float)in_RDX[1]) {
    iVar1 = *in_RDX;
    if (((iVar1 < 0) || (*(int *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52ed94) <= iVar1)) ||
       (*(short *)(*(longlong *)(unaff_RBP + 0x8d8) + 0x52dda0 + (longlong)iVar1 * 2) < 0))
    goto LAB_180511e30;
    unaff_R14 = unaff_R14 + 1;
    in_RDX = in_RDX + 2;
    if (3 < unaff_R14) {
      return;
    }
  }
  if (unaff_R14 < unaff_RDI) {
    do {
      lVar2 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
      *(uint64_t *)(lVar2 + 0x13c + unaff_RDI * 8) =
           *(uint64_t *)(lVar2 + 0x134 + unaff_RDI * 8);
      unaff_RDI = unaff_RDI + -1;
    } while (unaff_R14 < unaff_RDI);
  }
LAB_180511e30:
  iVar1 = *(int *)(unaff_RBP + 0x10);
  in_RDX[1] = (int)param_2;
  *in_RDX = iVar1;
  return;
}





// 函数: void FUN_180511e06(uint64_t param_1,int32_t *param_2)
void FUN_180511e06(uint64_t param_1,int32_t *param_2)

{
  int32_t uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  int32_t in_XMM1_Da;
  
  if (unaff_R14 < unaff_RDI) {
    do {
      lVar2 = *(longlong *)(unaff_RBX + 0x3780 + unaff_RSI);
      *(uint64_t *)(lVar2 + 0x13c + unaff_RDI * 8) =
           *(uint64_t *)(lVar2 + 0x134 + unaff_RDI * 8);
      unaff_RDI = unaff_RDI + -1;
    } while (unaff_R14 < unaff_RDI);
  }
  uVar1 = *(int32_t *)(unaff_RBP + 0x10);
  param_2[1] = in_XMM1_Da;
  *param_2 = uVar1;
  return;
}





// 函数: void FUN_180511e49(void)
void FUN_180511e49(void)

{
  int *piVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  char in_R11B;
  
  if (in_R11B != '\0') {
    piVar1 = (int *)(unaff_RBX + 0x371c + unaff_RSI);
    *piVar1 = *piVar1 + 1;
  }
  return;
}





// 函数: void FUN_180511e5a(void)
void FUN_180511e5a(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



