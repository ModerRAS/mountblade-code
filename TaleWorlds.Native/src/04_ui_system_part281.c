#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part281.c - 4 个函数

// 函数: void FUN_1808267df(undefined8 param_1,ulonglong param_2,int *param_3,uint param_4,undefined8 param_5
void FUN_1808267df(undefined8 param_1,ulonglong param_2,int *param_3,uint param_4,undefined8 param_5
                  ,byte param_6,longlong param_7)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int *in_R10;
  
  if (param_4 < 0xd) {
    if (param_4 < 9) {
      if (param_4 < 5) {
        if (param_4 < 3) {
          if (param_4 == 2) {
            piVar2 = (int *)(param_7 + -4);
            param_2 = param_2 & 0xffffffff;
            iVar4 = *piVar2;
            do {
              piVar1 = piVar2 + -1;
              piVar2 = piVar2 + 1;
              iVar4 = (int)((longlong)iVar4 * (longlong)*param_3 +
                            (longlong)*piVar1 * (longlong)param_3[1] >> (param_6 & 0x3f)) +
                      *(int *)(((longlong)in_R10 - param_7) + (longlong)piVar2);
              *piVar2 = iVar4;
              param_2 = param_2 - 1;
            } while (param_2 != 0);
          }
          else {
            param_2 = param_2 & 0xffffffff;
            piVar2 = in_R10;
            do {
              *(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)(piVar2 + 1)) =
                   (int)((longlong)*(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)piVar2) *
                         (longlong)*param_3 >> (param_6 & 0x3f)) + *piVar2;
              param_2 = param_2 - 1;
              piVar2 = piVar2 + 1;
            } while (param_2 != 0);
          }
        }
        else {
          param_2 = param_2 & 0xffffffff;
          if (param_4 == 4) {
            lVar3 = param_7 + -0xc;
            iVar4 = *(int *)(param_7 + -0xc);
            do {
              piVar2 = (int *)(lVar3 + 4);
              *(int *)(lVar3 + 0xc) =
                   (int)((longlong)*(int *)(lVar3 + 8) * (longlong)*param_3 +
                         (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[3] +
                         (longlong)param_3[2] * (longlong)iVar4 +
                         (longlong)param_3[1] * (longlong)*piVar2 >> (param_6 & 0x3f)) +
                   *(int *)((longlong)in_R10 + lVar3 + (0xc - param_7));
              param_2 = param_2 - 1;
              lVar3 = lVar3 + 4;
              iVar4 = *piVar2;
            } while (param_2 != 0);
          }
          else {
            lVar3 = param_7 + -8;
            iVar4 = *(int *)(param_7 + -8);
            do {
              piVar2 = (int *)(lVar3 + 4);
              *(int *)(lVar3 + 8) =
                   (int)((longlong)*(int *)(lVar3 + -4) * (longlong)param_3[2] +
                         (longlong)param_3[1] * (longlong)iVar4 +
                         (longlong)*param_3 * (longlong)*piVar2 >> (param_6 & 0x3f)) +
                   *(int *)((longlong)in_R10 + lVar3 + 4 + (4 - param_7));
              param_2 = param_2 - 1;
              lVar3 = lVar3 + 4;
              iVar4 = *piVar2;
            } while (param_2 != 0);
          }
        }
      }
      else {
        param_2 = param_2 & 0xffffffff;
        if (param_4 < 7) {
          if (param_4 == 6) {
            lVar3 = param_7 + -0x14;
            iVar4 = *(int *)(param_7 + -0x14);
            do {
              piVar2 = (int *)(lVar3 + 4);
              *(int *)(lVar3 + 0x14) =
                   (int)((longlong)*(int *)(lVar3 + 0x10) * (longlong)*param_3 +
                         (longlong)*(int *)(lVar3 + 0xc) * (longlong)param_3[1] +
                         (longlong)*(int *)(lVar3 + 8) * (longlong)param_3[2] +
                         (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[5] +
                         (longlong)param_3[4] * (longlong)iVar4 +
                         (longlong)param_3[3] * (longlong)*piVar2 >> (param_6 & 0x3f)) +
                   *(int *)((longlong)in_R10 + lVar3 + (0x14 - param_7));
              param_2 = param_2 - 1;
              lVar3 = lVar3 + 4;
              iVar4 = *piVar2;
            } while (param_2 != 0);
          }
          else {
            lVar3 = param_7 + -0x10;
            iVar4 = *(int *)(param_7 + -0x10);
            do {
              piVar2 = (int *)(lVar3 + 4);
              *(int *)(lVar3 + 0x10) =
                   (int)((longlong)*(int *)(lVar3 + 0xc) * (longlong)*param_3 +
                         (longlong)*(int *)(lVar3 + 8) * (longlong)param_3[1] +
                         (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[4] +
                         (longlong)param_3[3] * (longlong)iVar4 +
                         (longlong)*piVar2 * (longlong)param_3[2] >> (param_6 & 0x3f)) +
                   *(int *)((longlong)in_R10 + lVar3 + 4 + (0xc - param_7));
              param_2 = param_2 - 1;
              lVar3 = lVar3 + 4;
              iVar4 = *piVar2;
            } while (param_2 != 0);
          }
        }
        else if (param_4 == 8) {
          lVar3 = param_7 + -0x1c;
          iVar4 = *(int *)(param_7 + -0x1c);
          do {
            piVar2 = (int *)(lVar3 + 4);
            *(int *)(lVar3 + 0x1c) =
                 (int)((longlong)*(int *)(lVar3 + 0x18) * (longlong)*param_3 +
                       (longlong)*(int *)(lVar3 + 0x14) * (longlong)param_3[1] +
                       (longlong)*(int *)(lVar3 + 0x10) * (longlong)param_3[2] +
                       (longlong)*(int *)(lVar3 + 0xc) * (longlong)param_3[3] +
                       (longlong)*(int *)(lVar3 + 8) * (longlong)param_3[4] +
                       (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[7] +
                       (longlong)param_3[6] * (longlong)iVar4 +
                       (longlong)*piVar2 * (longlong)param_3[5] >> (param_6 & 0x3f)) +
                 *(int *)((longlong)in_R10 + lVar3 + 4 + (0x18 - param_7));
            param_2 = param_2 - 1;
            lVar3 = lVar3 + 4;
            iVar4 = *piVar2;
          } while (param_2 != 0);
        }
        else {
          lVar3 = param_7 + -0x18;
          iVar4 = *(int *)(param_7 + -0x18);
          do {
            piVar2 = (int *)(lVar3 + 4);
            *(int *)(lVar3 + 0x18) =
                 (int)((longlong)*(int *)(lVar3 + 0x14) * (longlong)*param_3 +
                       (longlong)*(int *)(lVar3 + 0x10) * (longlong)param_3[1] +
                       (longlong)*(int *)(lVar3 + 0xc) * (longlong)param_3[2] +
                       (longlong)*(int *)(lVar3 + 8) * (longlong)param_3[3] +
                       (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[6] +
                       (longlong)param_3[5] * (longlong)iVar4 +
                       (longlong)param_3[4] * (longlong)*piVar2 >> (param_6 & 0x3f)) +
                 *(int *)((longlong)in_R10 + lVar3 + 4 + (0x14 - param_7));
            param_2 = param_2 - 1;
            lVar3 = lVar3 + 4;
            iVar4 = *piVar2;
          } while (param_2 != 0);
        }
      }
    }
    else {
      param_2 = param_2 & 0xffffffff;
      if (param_4 < 0xb) {
        if (param_4 == 10) {
          lVar3 = param_7 + -0x24;
          iVar4 = *(int *)(param_7 + -0x24);
          do {
            piVar2 = (int *)(lVar3 + 4);
            *(int *)(lVar3 + 0x24) =
                 (int)((longlong)*(int *)(lVar3 + 0x20) * (longlong)*param_3 +
                       (longlong)*(int *)(lVar3 + 0x1c) * (longlong)param_3[1] +
                       (longlong)*(int *)(lVar3 + 0x18) * (longlong)param_3[2] +
                       (longlong)*(int *)(lVar3 + 0x14) * (longlong)param_3[3] +
                       (longlong)*(int *)(lVar3 + 0x10) * (longlong)param_3[4] +
                       (longlong)*(int *)(lVar3 + 0xc) * (longlong)param_3[5] +
                       (longlong)*(int *)(lVar3 + 8) * (longlong)param_3[6] +
                       (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[9] +
                       (longlong)param_3[8] * (longlong)iVar4 +
                       (longlong)param_3[7] * (longlong)*piVar2 >> (param_6 & 0x3f)) +
                 *(int *)((longlong)in_R10 + lVar3 + (0x24 - param_7));
            param_2 = param_2 - 1;
            lVar3 = lVar3 + 4;
            iVar4 = *piVar2;
          } while (param_2 != 0);
        }
        else {
          lVar3 = param_7 + -0x20;
          iVar4 = *(int *)(param_7 + -0x20);
          do {
            piVar2 = (int *)(lVar3 + 4);
            *(int *)(lVar3 + 0x20) =
                 (int)((longlong)*(int *)(lVar3 + 0x1c) * (longlong)*param_3 +
                       (longlong)*(int *)(lVar3 + 0x18) * (longlong)param_3[1] +
                       (longlong)*(int *)(lVar3 + 0x14) * (longlong)param_3[2] +
                       (longlong)*(int *)(lVar3 + 0x10) * (longlong)param_3[3] +
                       (longlong)*(int *)(lVar3 + 0xc) * (longlong)param_3[4] +
                       (longlong)*(int *)(lVar3 + 8) * (longlong)param_3[5] +
                       (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[8] +
                       (longlong)*piVar2 * (longlong)param_3[6] +
                       (longlong)param_3[7] * (longlong)iVar4 >> (param_6 & 0x3f)) +
                 *(int *)((longlong)in_R10 + lVar3 + 4 + (0x1c - param_7));
            param_2 = param_2 - 1;
            lVar3 = lVar3 + 4;
            iVar4 = *piVar2;
          } while (param_2 != 0);
        }
      }
      else if (param_4 == 0xc) {
        lVar3 = param_7 + -0x2c;
        iVar4 = *(int *)(param_7 + -0x2c);
        do {
          piVar2 = (int *)(lVar3 + 4);
          *(int *)(lVar3 + 0x2c) =
               (int)((longlong)*(int *)(lVar3 + 0x28) * (longlong)*param_3 +
                     (longlong)*(int *)(lVar3 + 0x24) * (longlong)param_3[1] +
                     (longlong)*(int *)(lVar3 + 0x20) * (longlong)param_3[2] +
                     (longlong)*(int *)(lVar3 + 0x1c) * (longlong)param_3[3] +
                     (longlong)*(int *)(lVar3 + 0x18) * (longlong)param_3[4] +
                     (longlong)*(int *)(lVar3 + 0x14) * (longlong)param_3[5] +
                     (longlong)*(int *)(lVar3 + 0x10) * (longlong)param_3[6] +
                     (longlong)*(int *)(lVar3 + 0xc) * (longlong)param_3[7] +
                     (longlong)*(int *)(lVar3 + 8) * (longlong)param_3[8] +
                     (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[0xb] +
                     (longlong)param_3[10] * (longlong)iVar4 +
                     (longlong)*piVar2 * (longlong)param_3[9] >> (param_6 & 0x3f)) +
               *(int *)((longlong)in_R10 + lVar3 + 4 + (0x28 - param_7));
          param_2 = param_2 - 1;
          lVar3 = lVar3 + 4;
          iVar4 = *piVar2;
        } while (param_2 != 0);
      }
      else {
        lVar3 = param_7 + -0x28;
        iVar4 = *(int *)(param_7 + -0x28);
        do {
          piVar2 = (int *)(lVar3 + 4);
          *(int *)(lVar3 + 0x28) =
               (int)((longlong)*(int *)(lVar3 + 0x24) * (longlong)*param_3 +
                     (longlong)*(int *)(lVar3 + 0x20) * (longlong)param_3[1] +
                     (longlong)*(int *)(lVar3 + 0x1c) * (longlong)param_3[2] +
                     (longlong)*(int *)(lVar3 + 0x18) * (longlong)param_3[3] +
                     (longlong)*(int *)(lVar3 + 0x14) * (longlong)param_3[4] +
                     (longlong)*(int *)(lVar3 + 0x10) * (longlong)param_3[5] +
                     (longlong)*(int *)(lVar3 + 0xc) * (longlong)param_3[6] +
                     (longlong)*(int *)(lVar3 + 8) * (longlong)param_3[7] +
                     (longlong)*(int *)(lVar3 + -4) * (longlong)param_3[10] +
                     (longlong)param_3[9] * (longlong)iVar4 +
                     (longlong)param_3[8] * (longlong)*piVar2 >> (param_6 & 0x3f)) +
               *(int *)((longlong)in_R10 + lVar3 + 4 + (0x24 - param_7));
          param_2 = param_2 - 1;
          lVar3 = lVar3 + 4;
          iVar4 = *piVar2;
        } while (param_2 != 0);
      }
    }
  }
  else {
    piVar2 = (int *)(param_7 + -0x7c);
    param_2 = param_2 & 0xffffffff;
    do {
      lVar3 = 0;
      switch(param_4) {
      case 0x20:
        lVar3 = (longlong)piVar2[-1] * (longlong)param_3[0x1f];
      case 0x1f:
        lVar3 = lVar3 + (longlong)param_3[0x1e] * (longlong)*piVar2;
      case 0x1e:
        lVar3 = lVar3 + (longlong)piVar2[1] * (longlong)param_3[0x1d];
      case 0x1d:
        lVar3 = lVar3 + (longlong)piVar2[2] * (longlong)param_3[0x1c];
      case 0x1c:
        lVar3 = lVar3 + (longlong)piVar2[3] * (longlong)param_3[0x1b];
      case 0x1b:
        lVar3 = lVar3 + (longlong)piVar2[4] * (longlong)param_3[0x1a];
      case 0x1a:
        lVar3 = lVar3 + (longlong)piVar2[5] * (longlong)param_3[0x19];
      case 0x19:
        lVar3 = lVar3 + (longlong)piVar2[6] * (longlong)param_3[0x18];
      case 0x18:
        lVar3 = lVar3 + (longlong)piVar2[7] * (longlong)param_3[0x17];
      case 0x17:
        lVar3 = lVar3 + (longlong)piVar2[8] * (longlong)param_3[0x16];
      case 0x16:
        lVar3 = lVar3 + (longlong)piVar2[9] * (longlong)param_3[0x15];
      case 0x15:
        lVar3 = lVar3 + (longlong)piVar2[10] * (longlong)param_3[0x14];
      case 0x14:
        lVar3 = lVar3 + (longlong)piVar2[0xb] * (longlong)param_3[0x13];
      case 0x13:
        lVar3 = lVar3 + (longlong)piVar2[0xc] * (longlong)param_3[0x12];
      case 0x12:
        lVar3 = lVar3 + (longlong)piVar2[0xd] * (longlong)param_3[0x11];
      case 0x11:
        lVar3 = lVar3 + (longlong)piVar2[0xe] * (longlong)param_3[0x10];
      case 0x10:
        lVar3 = lVar3 + (longlong)piVar2[0xf] * (longlong)param_3[0xf];
      case 0xf:
        lVar3 = lVar3 + (longlong)piVar2[0x10] * (longlong)param_3[0xe];
      case 0xe:
        lVar3 = lVar3 + (longlong)piVar2[0x11] * (longlong)param_3[0xd];
      case 0xd:
        lVar3 = lVar3 + (longlong)piVar2[0x1e] * (longlong)*param_3 +
                (longlong)piVar2[0x12] * (longlong)param_3[0xc] +
                (longlong)piVar2[0x13] * (longlong)param_3[0xb] +
                (longlong)piVar2[0x14] * (longlong)param_3[10] +
                (longlong)piVar2[0x15] * (longlong)param_3[9] +
                (longlong)piVar2[0x16] * (longlong)param_3[8] +
                (longlong)piVar2[0x17] * (longlong)param_3[7] +
                (longlong)piVar2[0x18] * (longlong)param_3[6] +
                (longlong)piVar2[0x19] * (longlong)param_3[5] +
                (longlong)piVar2[0x1a] * (longlong)param_3[4] +
                (longlong)piVar2[0x1b] * (longlong)param_3[3] +
                (longlong)piVar2[0x1c] * (longlong)param_3[2] +
                (longlong)piVar2[0x1d] * (longlong)param_3[1];
      }
      piVar2[0x1f] = (int)(lVar3 >> (param_6 & 0x3f)) +
                     *(int *)((longlong)piVar2 + (longlong)in_R10 + (0x7c - param_7));
      piVar2 = piVar2 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}





// 函数: void FUN_1808271e1(void)
void FUN_1808271e1(void)

{
  return;
}



undefined8
FUN_180827240(longlong param_1,undefined8 param_2,ulonglong param_3,uint param_4,uint param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = param_3 & 0xffffffff;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = CONCAT44(0,param_5);
  uVar8 = CONCAT44(0,param_5) * (ulonglong)param_4 * uVar9;
  if ((SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < uVar9) ||
     (uVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / ZEXT416(param_4),0),
     uVar6 = (ulonglong)param_5 * (param_3 & 0xffffffff), uVar3 <= uVar6 && uVar6 - uVar3 != 0)) {
    return 0;
  }
  if (*(ulonglong *)(param_1 + 0x60) < uVar8) {
    lVar4 = realloc(*(undefined8 *)(param_1 + 0x58),uVar8);
    if (lVar4 == 0) {
      free(*(undefined8 *)(param_1 + 0x58));
      uVar3 = 1;
      if (uVar8 != 0) {
        uVar3 = uVar8;
      }
      lVar5 = malloc(uVar3);
      *(longlong *)(param_1 + 0x58) = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
    }
    *(longlong *)(param_1 + 0x58) = lVar4;
    *(ulonglong *)(param_1 + 0x60) = uVar8;
  }
  FUN_180827cb0(*(undefined8 *)(param_1 + 0x58),param_2,uVar9,param_4,param_5);
  uVar7 = *(uint *)(param_1 + 0x50);
  uVar2 = uVar7 + (uint)uVar8;
  *(uint *)(param_1 + 0x50) = uVar2;
  if (uVar2 < uVar7) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  uVar7 = 0x40 - (uVar7 & 0x3f);
  lVar4 = (param_1 - (ulonglong)uVar7) + 0x40;
  if ((uint)uVar8 < uVar7) {
                    // WARNING: Subroutine does not return
    memcpy(lVar4,*(undefined8 *)(param_1 + 0x58),uVar8 & 0xffffffff);
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar4,*(undefined8 *)(param_1 + 0x58),(ulonglong)uVar7);
}





// 函数: void FUN_1808273e0(undefined8 param_1,longlong param_2)
void FUN_1808273e0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 0x50) & 0x3f;
  *(undefined1 *)(param_2 + (ulonglong)uVar1) = 0x80;
  lVar3 = param_2 + (ulonglong)uVar1 + 1;
  iVar2 = -uVar1 + 0x37;
  if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
    memset(lVar3,0,(longlong)(int)(-uVar1 + 0x3f));
  }
                    // WARNING: Subroutine does not return
  memset(lVar3,0,(longlong)iVar2);
}





// 函数: void FUN_1808274c0(int *param_1,int *param_2)
void FUN_1808274c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar20 = param_1[1];
  uVar19 = param_1[2];
  uVar18 = param_1[3];
  iVar1 = *param_2;
  iVar2 = param_2[5];
  iVar3 = param_2[1];
  uVar17 = *param_1 + -0x28955b88 + ((uVar18 ^ uVar19) & uVar20 ^ uVar18) + iVar1;
  uVar17 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar20;
  iVar4 = param_2[2];
  uVar18 = uVar18 + 0xe8c7b756 + ((uVar19 ^ uVar20) & uVar17 ^ uVar19) + iVar3;
  uVar18 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar17;
  iVar5 = param_2[3];
  uVar19 = uVar19 + 0x242070db + ((uVar20 ^ uVar17) & uVar18 ^ uVar20) + iVar4;
  uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar18;
  iVar6 = param_2[4];
  uVar20 = uVar20 + 0xc1bdceee + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) + iVar5;
  uVar21 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar19;
  uVar20 = uVar17 + 0xf57c0faf + ((uVar18 ^ uVar19) & uVar21 ^ uVar18) + iVar6;
  iVar7 = param_2[6];
  uVar17 = (uVar20 * 0x80 | uVar20 >> 0x19) + uVar21;
  uVar20 = uVar18 + 0x4787c62a + ((uVar19 ^ uVar21) & uVar17 ^ uVar19) + iVar2;
  uVar20 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar17;
  uVar19 = uVar19 + 0xa8304613 + ((uVar21 ^ uVar17) & uVar20 ^ uVar21) + iVar7;
  uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) + uVar20;
  iVar8 = param_2[7];
  iVar9 = param_2[8];
  iVar10 = param_2[10];
  iVar11 = param_2[0xc];
  iVar12 = param_2[0xd];
  iVar13 = param_2[0xe];
  iVar14 = param_2[9];
  uVar18 = uVar21 + 0xfd469501 + ((uVar20 ^ uVar17) & uVar19 ^ uVar17) + iVar8;
  uVar18 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar19;
  uVar17 = uVar17 + 0x698098d8 + ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + iVar9;
  uVar21 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar18;
  uVar20 = uVar20 + 0x8b44f7af + ((uVar19 ^ uVar18) & uVar21 ^ uVar19) + iVar14;
  iVar15 = param_2[0xb];
  uVar17 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar21;
  uVar20 = (uVar19 - 0xa44f) + ((uVar18 ^ uVar21) & uVar17 ^ uVar18) + iVar10;
  uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) + uVar17;
  uVar19 = uVar18 + 0x895cd7be + ((uVar17 ^ uVar21) & uVar20 ^ uVar21) + iVar15;
  uVar19 = (uVar19 >> 10 | uVar19 * 0x400000) + uVar20;
  uVar18 = uVar21 + 0x6b901122 + ((uVar17 ^ uVar20) & uVar19 ^ uVar17) + iVar11;
  uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar19;
  uVar17 = ((uVar20 ^ uVar19) & uVar18 ^ uVar20) + 0xfd987193 + iVar12 + uVar17;
  uVar17 = (uVar17 * 0x1000 | uVar17 >> 0x14) + uVar18;
  uVar20 = uVar20 + 0xa679438e + ((uVar19 ^ uVar18) & uVar17 ^ uVar19) + iVar13;
  iVar16 = param_2[0xf];
  uVar21 = (uVar20 >> 0xf | uVar20 * 0x20000) + uVar17;
  uVar19 = ((uVar17 ^ uVar18) & uVar21 ^ uVar18) + 0x49b40821 + iVar16 + uVar19;
  uVar20 = (uVar19 >> 10 | uVar19 * 0x400000) + uVar21;
  uVar18 = uVar18 + ((uVar21 ^ uVar20) & uVar17 ^ uVar21) + 0xf61e2562 + iVar3;
  uVar19 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar20;
  uVar17 = uVar17 + ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + 0xc040b340 + iVar7;
  uVar18 = (uVar17 * 0x200 | uVar17 >> 0x17) + uVar19;
  uVar21 = uVar21 + ((uVar18 ^ uVar19) & uVar20 ^ uVar19) + 0x265e5a51 + iVar15;
  uVar17 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar18;
  uVar20 = uVar20 + 0xe9b6c7aa + ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + iVar1;
  uVar21 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar17;
  uVar20 = uVar19 + 0xd62f105d + ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + iVar2;
  uVar20 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar21;
  uVar19 = uVar18 + 0x2441453 + ((uVar21 ^ uVar20) & uVar17 ^ uVar21) + iVar10;
  uVar19 = (uVar19 * 0x200 | uVar19 >> 0x17) + uVar20;
  uVar18 = uVar17 + 0xd8a1e681 + ((uVar19 ^ uVar20) & uVar21 ^ uVar20) + iVar16;
  uVar18 = (uVar18 * 0x4000 | uVar18 >> 0x12) + uVar19;
  uVar17 = uVar21 + 0xe7d3fbc8 + ((uVar19 ^ uVar18) & uVar20 ^ uVar19) + iVar6;
  uVar17 = (uVar17 >> 0xc | uVar17 * 0x100000) + uVar18;
  uVar20 = uVar20 + 0x21e1cde6 + ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + iVar14;
  uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar17;
  uVar20 = uVar19 + 0xc33707d6 + ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + iVar13;
  uVar20 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar21;
  uVar19 = uVar18 + 0xf4d50d87 + ((uVar20 ^ uVar21) & uVar17 ^ uVar21) + iVar5;
  uVar19 = (uVar19 * 0x4000 | uVar19 >> 0x12) + uVar20;
  uVar18 = uVar17 + 0x455a14ed + ((uVar20 ^ uVar19) & uVar21 ^ uVar20) + iVar9;
  uVar22 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar19;
  uVar18 = uVar21 + 0xa9e3e905 + ((uVar19 ^ uVar22) & uVar20 ^ uVar19) + iVar12;
  uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar22;
  uVar20 = uVar20 + 0xfcefa3f8 + ((uVar22 ^ uVar18) & uVar19 ^ uVar22) + iVar4;
  uVar17 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar18;
  uVar20 = uVar19 + 0x676f02d9 + ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + iVar8;
  uVar21 = (uVar20 * 0x4000 | uVar20 >> 0x12) + uVar17;
  uVar20 = uVar22 + 0x8d2a4c8a + ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + iVar11;
  uVar20 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar21;
  uVar18 = uVar18 + ((uVar17 ^ uVar21 ^ uVar20) - 0x5c6be) + iVar2;
  uVar19 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar20;
  uVar17 = uVar17 + (uVar21 ^ uVar20 ^ uVar19) + 0x8771f681 + iVar9;
  uVar18 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar19;
  uVar21 = uVar21 + (uVar18 ^ uVar20 ^ uVar19) + 0x6d9d6122 + iVar15;
  uVar17 = (uVar21 * 0x10000 | uVar21 >> 0x10) + uVar18;
  uVar20 = uVar20 + 0xfde5380c + (uVar18 ^ uVar17 ^ uVar19) + iVar13;
  uVar21 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar17;
  uVar20 = uVar19 + 0xa4beea44 + (uVar18 ^ uVar17 ^ uVar21) + iVar3;
  uVar20 = (uVar20 * 0x10 | uVar20 >> 0x1c) + uVar21;
  uVar19 = uVar18 + 0x4bdecfa9 + (uVar17 ^ uVar21 ^ uVar20) + iVar6;
  uVar19 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar20;
  uVar18 = uVar17 + 0xf6bb4b60 + (uVar19 ^ uVar21 ^ uVar20) + iVar8;
  uVar17 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar19;
  uVar18 = uVar21 + 0xbebfbc70 + (uVar19 ^ uVar17 ^ uVar20) + iVar10;
  uVar21 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar17;
  uVar20 = uVar20 + 0x289b7ec6 + (uVar19 ^ uVar17 ^ uVar21) + iVar12;
  uVar22 = (uVar20 * 0x10 | uVar20 >> 0x1c) + uVar21;
  uVar19 = uVar19 + (uVar17 ^ uVar21 ^ uVar22) + 0xeaa127fa + iVar1;
  uVar18 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar22;
  uVar17 = uVar17 + (uVar18 ^ uVar21 ^ uVar22) + 0xd4ef3085 + iVar5;
  uVar17 = (uVar17 * 0x10000 | uVar17 >> 0x10) + uVar18;
  uVar20 = uVar21 + 0x4881d05 + (uVar18 ^ uVar17 ^ uVar22) + iVar7;
  uVar19 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar17;
  uVar22 = (uVar18 ^ uVar17 ^ uVar19) + iVar14 + -0x262b2fc7 + uVar22;
  uVar21 = (uVar22 * 0x10 | uVar22 >> 0x1c) + uVar19;
  uVar20 = uVar18 + 0xe6db99e5 + (uVar17 ^ uVar19 ^ uVar21) + iVar11;
  uVar20 = (uVar20 * 0x800 | uVar20 >> 0x15) + uVar21;
  uVar18 = uVar17 + 0x1fa27cf8 + (uVar20 ^ uVar19 ^ uVar21) + iVar16;
  uVar18 = (uVar18 * 0x10000 | uVar18 >> 0x10) + uVar20;
  uVar19 = uVar19 + 0xc4ac5665 + (uVar20 ^ uVar18 ^ uVar21) + iVar4;
  uVar17 = (uVar19 >> 9 | uVar19 * 0x800000) + uVar18;
  uVar19 = uVar21 + 0xf4292244 + ((~uVar20 | uVar17) ^ uVar18) + iVar1;
  uVar19 = (uVar19 * 0x40 | uVar19 >> 0x1a) + uVar17;
  uVar20 = uVar20 + 0x432aff97 + ((~uVar18 | uVar19) ^ uVar17) + iVar8;
  uVar21 = (uVar20 * 0x400 | uVar20 >> 0x16) + uVar19;
  uVar20 = uVar18 + 0xab9423a7 + ((~uVar17 | uVar21) ^ uVar19) + iVar13;
  uVar20 = (uVar20 * 0x8000 | uVar20 >> 0x11) + uVar21;
  uVar18 = uVar17 + 0xfc93a039 + ((~uVar19 | uVar20) ^ uVar21) + iVar2;
  uVar18 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar20;
  uVar19 = uVar19 + 0x655b59c3 + ((~uVar21 | uVar18) ^ uVar20) + iVar11;
  uVar17 = (uVar19 * 0x40 | uVar19 >> 0x1a) + uVar18;
  uVar19 = uVar21 + 0x8f0ccc92 + ((~uVar20 | uVar17) ^ uVar18) + iVar5;
  uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar17;
  uVar20 = (uVar20 - 0x100b83) + ((~uVar18 | uVar19) ^ uVar17) + iVar10;
  uVar21 = (uVar20 * 0x8000 | uVar20 >> 0x11) + uVar19;
  uVar20 = uVar18 + 0x85845dd1 + ((~uVar17 | uVar21) ^ uVar19) + iVar3;
  uVar20 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar21;
  uVar17 = ((~uVar19 | uVar20) ^ uVar21) + 0x6fa87e4f + iVar9 + uVar17;
  uVar18 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar20;
  uVar19 = uVar19 + 0xfe2ce6e0 + ((~uVar21 | uVar18) ^ uVar20) + iVar16;
  uVar17 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar18;
  uVar19 = uVar21 + 0xa3014314 + ((~uVar20 | uVar17) ^ uVar18) + iVar7;
  uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar17;
  uVar20 = ((~uVar18 | uVar19) ^ uVar17) + 0x4e0811a1 + iVar12 + uVar20;
  uVar21 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar19;
  uVar20 = uVar18 + 0xf7537e82 + ((~uVar17 | uVar21) ^ uVar19) + iVar6;
  uVar20 = (uVar20 * 0x40 | uVar20 >> 0x1a) + uVar21;
  uVar17 = ((~uVar19 | uVar20) ^ uVar21) + 0xbd3af235 + iVar15 + uVar17;
  uVar18 = (uVar17 * 0x400 | uVar17 >> 0x16) + uVar20;
  *param_1 = *param_1 + uVar20;
  uVar19 = uVar19 + ((~uVar21 | uVar18) ^ uVar20) + 0x2ad7d2bb + iVar4;
  uVar19 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar18;
  param_1[2] = param_1[2] + uVar19;
  uVar20 = uVar21 + 0xeb86d391 + ((~uVar20 | uVar19) ^ uVar18) + iVar14;
  param_1[1] = param_1[1] + (uVar20 >> 0xb | uVar20 * 0x200000) + uVar19;
  param_1[3] = param_1[3] + uVar18;
  return;
}





