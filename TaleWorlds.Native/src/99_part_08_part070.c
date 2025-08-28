#include "TaleWorlds.Native.Split.h"

// 99_part_08_part070.c - 5 个函数

// 函数: void FUN_1805b94b0(longlong *param_1,char param_2)
void FUN_1805b94b0(longlong *param_1,char param_2)

{
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 auStackX_10 [2];
  
  if ((char)param_1[0x438] == '\0') {
    iVar17 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iVar17 = *(int *)((longlong)param_1 + 0x21c4);
  }
  if ((int)param_1[0x295] != 9) {
    if ((char)param_1[0x438] == '\0') {
      iVar5 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar5 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (-1 < iVar5) {
      lVar16 = *(longlong *)((longlong)iVar5 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar16 != 0) && (*(char *)(lVar16 + 0x8be) != '\0')) &&
         (*(int *)((longlong)iVar17 * 0xa60 + 0x3608 + param_1[0x291]) == 1)) goto LAB_1805b9549;
    }
  }
  iVar17 = -1;
LAB_1805b9549:
  lVar16 = param_1[0x291];
  iVar5 = *(int *)(lVar16 + 0x52ed94);
  iVar18 = iVar5;
  if (param_2 == '\0') {
    iVar18 = (*(int *)(lVar16 + 0x98d9d4) + 1) * 5;
  }
  iVar2 = (int)param_1[0x36e];
  uVar10 = (ulonglong)iVar2;
  if (iVar2 < 0) {
    sVar1 = *(short *)(lVar16 + 0x52dda0 + uVar10 * 2);
    if (sVar1 == -1) {
      if (iVar2 < iVar5) {
        do {
          if (*(short *)(lVar16 + 0x52dda0 + (longlong)(int)uVar10 * 2) != -1) break;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
          *(uint *)(param_1 + 0x36e) = uVar8;
        } while ((int)uVar8 < *(int *)(lVar16 + 0x52ed94));
      }
    }
    else {
      *(int *)(param_1 + 0x36e) = (int)sVar1;
    }
  }
  uVar3 = func_0x0001805b7c00(param_1);
  uVar8 = *(uint *)(param_1 + 0x36e);
  uVar10 = (ulonglong)uVar8;
  while ((int)uVar8 < iVar5) {
    lVar16 = *param_1;
    lVar14 = param_1[0x291] + 0x30a0 + (longlong)(int)uVar10 * 0xa60;
    cVar4 = func_0x000180508270(lVar16,lVar14);
    if (((cVar4 != '\0') && (*(int *)(lVar14 + 0x568) == 1)) &&
       ((iVar2 = *(int *)(lVar14 + 0x10), iVar2 != *(int *)(lVar16 + 0x10) &&
        (*(int *)(lVar14 + 0x560) < 0)))) {
      uVar19 = FUN_1805bac30(param_1,lVar14,0,uVar3,auStackX_10);
      fVar20 = (float)FUN_1805bcba0(param_1,lVar14,uVar19);
      if ((0.0 < fVar20) || (iVar2 == iVar17)) {
        iVar9 = *(int *)((longlong)param_1 + 0x1b6c);
        if ((iVar9 == 0x10) && (iVar17 == (int)param_1[0x366])) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        if ((iVar2 == iVar17) && (bVar15 != 0)) {
          lVar16 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1[0x291] + 0x87b790) * 8)
          ;
          lVar14 = *(longlong *)(param_1[0x291] + 0x87b788);
          *(undefined4 *)((longlong)param_1 + 0x1b34) = uVar19;
          *(float *)(param_1 + 0x367) = fVar20;
          *(float *)((longlong)param_1 + 0x1b3c) = (float)(lVar16 - lVar14) * 1e-05;
          if ((int)param_1[0x36d] != 1) {
            *(undefined4 *)((longlong)param_1 + 0x1b64) = auStackX_10[0];
            *(undefined4 *)(param_1 + 0x36d) = 0;
            *(undefined4 *)(param_1 + 0x368) = 0;
          }
        }
        else {
          uVar11 = 0;
          uVar10 = uVar11;
          if (0 < iVar9) {
            pfVar6 = (float *)((longlong)param_1 + 0x17b4);
            do {
              if (*pfVar6 <= fVar20) break;
              uVar8 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar8;
              uVar10 = uVar10 + 1;
              pfVar6 = pfVar6 + 0xf;
            } while ((int)uVar8 < iVar9);
          }
          if (iVar2 == iVar17) {
            if ((bVar15 == 0) && (uVar10 == 0x10)) {
              uVar10 = 0xf;
            }
            else {
LAB_1805b979d:
              if (0xf < (longlong)uVar10) goto LAB_1805b9873;
            }
            if (iVar9 < 0x10) {
              iVar9 = iVar9 + 1;
              *(int *)((longlong)param_1 + 0x1b6c) = iVar9;
            }
            lVar16 = (longlong)(int)((iVar9 - (uint)bVar15) + -1);
            if ((longlong)uVar10 < lVar16) {
              puVar12 = (undefined8 *)((lVar16 + 0x65) * 0x3c + (longlong)param_1);
              lVar16 = lVar16 - uVar10;
              do {
                *puVar12 = *(undefined8 *)((longlong)puVar12 + -0x3c);
                puVar12[1] = *(undefined8 *)((longlong)puVar12 + -0x34);
                puVar12[2] = *(undefined8 *)((longlong)puVar12 + -0x2c);
                puVar12[3] = *(undefined8 *)((longlong)puVar12 + -0x24);
                puVar12[4] = *(undefined8 *)((longlong)puVar12 + -0x1c);
                puVar12[5] = *(undefined8 *)((longlong)puVar12 + -0x14);
                puVar12[6] = *(undefined8 *)((longlong)puVar12 + -0xc);
                *(undefined4 *)(puVar12 + 7) = *(undefined4 *)((longlong)puVar12 + -4);
                puVar12 = (undefined8 *)((longlong)puVar12 + -0x3c);
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            lVar13 = (uVar10 + 0x65) * 0x3c;
            *(undefined4 *)(lVar13 + (longlong)param_1) = *(undefined4 *)(lVar14 + 0x10);
            lVar16 = *(longlong *)
                      (&DAT_180c8ed30 + (longlong)*(int *)(param_1[0x291] + 0x87b790) * 8);
            lVar14 = *(longlong *)(param_1[0x291] + 0x87b788);
            *(undefined4 *)(lVar13 + 4 + (longlong)param_1) = uVar19;
            *(float *)(lVar13 + 8 + (longlong)param_1) = fVar20;
            lVar7 = uVar10 * 0x3c;
            *(float *)(lVar13 + 0xc + (longlong)param_1) = (float)(lVar16 - lVar14) * 1e-05;
            *(undefined4 *)(lVar7 + 0x17e0 + (longlong)param_1) = auStackX_10[0];
            *(undefined4 *)(lVar7 + 0x17e4 + (longlong)param_1) = 0;
            *(undefined4 *)(lVar7 + 0x17bc + (longlong)param_1) = 0;
          }
          else if ((bVar15 == 0) || (uVar10 != 0xf)) goto LAB_1805b979d;
        }
      }
LAB_1805b9873:
      iVar18 = iVar18 + -1;
      if (iVar18 == 0) break;
    }
    lVar16 = param_1[0x291];
    uVar8 = *(uint *)(param_1 + 0x36e);
    uVar10 = (ulonglong)(int)uVar8;
    sVar1 = *(short *)(lVar16 + 0x52dda0 + uVar10 * 2);
    if (sVar1 == -1) {
      if ((int)uVar8 < *(int *)(lVar16 + 0x52ed94)) {
        do {
          if (*(short *)(lVar16 + 0x52dda0 + (longlong)(int)uVar8 * 2) != -1) break;
          uVar8 = uVar8 + 1;
          uVar10 = (ulonglong)uVar8;
          *(uint *)(param_1 + 0x36e) = uVar8;
        } while ((int)uVar8 < *(int *)(lVar16 + 0x52ed94));
      }
    }
    else {
      uVar10 = (ulonglong)(uint)(int)sVar1;
      *(int *)(param_1 + 0x36e) = (int)sVar1;
    }
    uVar8 = (uint)uVar10;
  }
  if (iVar5 <= (int)param_1[0x36e]) {
    *(undefined1 *)(param_1 + 0x2f5) = 0;
    uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar8 = uVar8 ^ uVar8 >> 0x11;
    uVar8 = uVar8 ^ uVar8 << 5;
    *(uint *)(param_1 + 0x272) = uVar8;
    param_1[0x2f3] =
         *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2f4] * 8) -
         (longlong)((float)(uVar8 - 1) * 2.3283064e-05 - 350000.0);
  }
  return;
}






// 函数: void FUN_1805b94c4(longlong *param_1,undefined8 param_2,char param_3)
void FUN_1805b94c4(longlong *param_1,undefined8 param_2,char param_3)

{
  short sVar1;
  int iVar2;
  char in_AL;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 in_stack_00000098;
  
  if (in_AL == '\0') {
    iVar17 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iVar17 = *(int *)((longlong)param_1 + 0x21c4);
  }
  if ((int)param_1[0x295] != 9) {
    if (in_AL == '\0') {
      iVar5 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar5 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (-1 < iVar5) {
      lVar16 = *(longlong *)((longlong)iVar5 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar16 != 0) && (*(char *)(lVar16 + 0x8be) != '\0')) &&
         (*(int *)((longlong)iVar17 * 0xa60 + 0x3608 + param_1[0x291]) == 1)) goto LAB_1805b9549;
    }
  }
  iVar17 = -1;
LAB_1805b9549:
  lVar16 = param_1[0x291];
  iVar5 = *(int *)(lVar16 + 0x52ed94);
  iVar18 = iVar5;
  if (param_3 == '\0') {
    iVar18 = (*(int *)(lVar16 + 0x98d9d4) + 1) * 5;
  }
  iVar2 = (int)param_1[0x36e];
  uVar10 = (ulonglong)iVar2;
  if (iVar2 < 0) {
    sVar1 = *(short *)(lVar16 + 0x52dda0 + uVar10 * 2);
    if (sVar1 == -1) {
      if (iVar2 < iVar5) {
        do {
          if (*(short *)(lVar16 + 0x52dda0 + (longlong)(int)uVar10 * 2) != -1) break;
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
          *(uint *)(param_1 + 0x36e) = uVar8;
        } while ((int)uVar8 < *(int *)(lVar16 + 0x52ed94));
      }
    }
    else {
      *(int *)(param_1 + 0x36e) = (int)sVar1;
    }
  }
  uVar3 = func_0x0001805b7c00(param_1);
  uVar8 = *(uint *)(param_1 + 0x36e);
  uVar10 = (ulonglong)uVar8;
  while ((int)uVar8 < iVar5) {
    lVar16 = *param_1;
    lVar14 = param_1[0x291] + 0x30a0 + (longlong)(int)uVar10 * 0xa60;
    cVar4 = func_0x000180508270(lVar16,lVar14);
    if (((cVar4 != '\0') && (*(int *)(lVar14 + 0x568) == 1)) &&
       ((iVar2 = *(int *)(lVar14 + 0x10), iVar2 != *(int *)(lVar16 + 0x10) &&
        (*(int *)(lVar14 + 0x560) < 0)))) {
      uVar19 = FUN_1805bac30(param_1,lVar14,0,uVar3,&stack0x00000098);
      fVar20 = (float)FUN_1805bcba0(param_1,lVar14,uVar19);
      if ((0.0 < fVar20) || (iVar2 == iVar17)) {
        iVar9 = *(int *)((longlong)param_1 + 0x1b6c);
        if ((iVar9 == 0x10) && (iVar17 == (int)param_1[0x366])) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        if ((iVar2 == iVar17) && (bVar15 != 0)) {
          lVar16 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1[0x291] + 0x87b790) * 8)
          ;
          lVar14 = *(longlong *)(param_1[0x291] + 0x87b788);
          *(undefined4 *)((longlong)param_1 + 0x1b34) = uVar19;
          *(float *)(param_1 + 0x367) = fVar20;
          *(float *)((longlong)param_1 + 0x1b3c) = (float)(lVar16 - lVar14) * 1e-05;
          if ((int)param_1[0x36d] != 1) {
            *(undefined4 *)((longlong)param_1 + 0x1b64) = in_stack_00000098;
            *(undefined4 *)(param_1 + 0x36d) = 0;
            *(undefined4 *)(param_1 + 0x368) = 0;
          }
        }
        else {
          uVar11 = 0;
          uVar10 = uVar11;
          if (0 < iVar9) {
            pfVar6 = (float *)((longlong)param_1 + 0x17b4);
            do {
              if (*pfVar6 <= fVar20) break;
              uVar8 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar8;
              uVar10 = uVar10 + 1;
              pfVar6 = pfVar6 + 0xf;
            } while ((int)uVar8 < iVar9);
          }
          if (iVar2 == iVar17) {
            if ((bVar15 == 0) && (uVar10 == 0x10)) {
              uVar10 = 0xf;
            }
            else {
LAB_1805b979d:
              if (0xf < (longlong)uVar10) goto LAB_1805b9873;
            }
            if (iVar9 < 0x10) {
              iVar9 = iVar9 + 1;
              *(int *)((longlong)param_1 + 0x1b6c) = iVar9;
            }
            lVar16 = (longlong)(int)((iVar9 - (uint)bVar15) + -1);
            if ((longlong)uVar10 < lVar16) {
              puVar12 = (undefined8 *)((lVar16 + 0x65) * 0x3c + (longlong)param_1);
              lVar16 = lVar16 - uVar10;
              do {
                *puVar12 = *(undefined8 *)((longlong)puVar12 + -0x3c);
                puVar12[1] = *(undefined8 *)((longlong)puVar12 + -0x34);
                puVar12[2] = *(undefined8 *)((longlong)puVar12 + -0x2c);
                puVar12[3] = *(undefined8 *)((longlong)puVar12 + -0x24);
                puVar12[4] = *(undefined8 *)((longlong)puVar12 + -0x1c);
                puVar12[5] = *(undefined8 *)((longlong)puVar12 + -0x14);
                puVar12[6] = *(undefined8 *)((longlong)puVar12 + -0xc);
                *(undefined4 *)(puVar12 + 7) = *(undefined4 *)((longlong)puVar12 + -4);
                puVar12 = (undefined8 *)((longlong)puVar12 + -0x3c);
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            lVar13 = (uVar10 + 0x65) * 0x3c;
            *(undefined4 *)(lVar13 + (longlong)param_1) = *(undefined4 *)(lVar14 + 0x10);
            lVar16 = *(longlong *)
                      (&DAT_180c8ed30 + (longlong)*(int *)(param_1[0x291] + 0x87b790) * 8);
            lVar14 = *(longlong *)(param_1[0x291] + 0x87b788);
            *(undefined4 *)(lVar13 + 4 + (longlong)param_1) = uVar19;
            *(float *)(lVar13 + 8 + (longlong)param_1) = fVar20;
            lVar7 = uVar10 * 0x3c;
            *(float *)(lVar13 + 0xc + (longlong)param_1) = (float)(lVar16 - lVar14) * 1e-05;
            *(undefined4 *)(lVar7 + 0x17e0 + (longlong)param_1) = in_stack_00000098;
            *(undefined4 *)(lVar7 + 0x17e4 + (longlong)param_1) = 0;
            *(undefined4 *)(lVar7 + 0x17bc + (longlong)param_1) = 0;
          }
          else if ((bVar15 == 0) || (uVar10 != 0xf)) goto LAB_1805b979d;
        }
      }
LAB_1805b9873:
      iVar18 = iVar18 + -1;
      if (iVar18 == 0) break;
    }
    lVar16 = param_1[0x291];
    uVar8 = *(uint *)(param_1 + 0x36e);
    uVar10 = (ulonglong)(int)uVar8;
    sVar1 = *(short *)(lVar16 + 0x52dda0 + uVar10 * 2);
    if (sVar1 == -1) {
      if ((int)uVar8 < *(int *)(lVar16 + 0x52ed94)) {
        do {
          if (*(short *)(lVar16 + 0x52dda0 + (longlong)(int)uVar8 * 2) != -1) break;
          uVar8 = uVar8 + 1;
          uVar10 = (ulonglong)uVar8;
          *(uint *)(param_1 + 0x36e) = uVar8;
        } while ((int)uVar8 < *(int *)(lVar16 + 0x52ed94));
      }
    }
    else {
      uVar10 = (ulonglong)(uint)(int)sVar1;
      *(int *)(param_1 + 0x36e) = (int)sVar1;
    }
    uVar8 = (uint)uVar10;
  }
  if (iVar5 <= (int)param_1[0x36e]) {
    *(undefined1 *)(param_1 + 0x2f5) = 0;
    uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar8 = uVar8 ^ uVar8 >> 0x11;
    uVar8 = uVar8 ^ uVar8 << 5;
    *(uint *)(param_1 + 0x272) = uVar8;
    param_1[0x2f3] =
         *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2f4] * 8) -
         (longlong)((float)(uVar8 - 1) * 2.3283064e-05 - 350000.0);
  }
  return;
}






// 函数: void FUN_1805b95de(ulonglong param_1)
void FUN_1805b95de(ulonglong param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *unaff_RBX;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar14;
  int unaff_R12D;
  undefined1 unaff_R13B;
  int unaff_R14D;
  int unaff_R15D;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  float fVar16;
  undefined4 in_stack_00000098;
  
  do {
    lVar14 = *unaff_RBX;
    lVar11 = unaff_RBX[0x291] + 0x30a0 + (longlong)(int)param_1 * 0xa60;
    cVar3 = func_0x000180508270(lVar14,lVar11);
    if ((((cVar3 != '\0') && (*(int *)(lVar11 + 0x568) == 1)) &&
        (iVar2 = *(int *)(lVar11 + 0x10), iVar2 != *(int *)(lVar14 + 0x10))) &&
       (*(int *)(lVar11 + 0x560) < 0)) {
      uVar15 = FUN_1805bac30(extraout_XMM0_Da,lVar11,0,unaff_R13B,&stack0x00000098);
      fVar16 = (float)FUN_1805bcba0(uVar15,lVar11,uVar15);
      if ((0.0 < fVar16) || (iVar2 == unaff_R14D)) {
        iVar6 = *(int *)((longlong)unaff_RBX + 0x1b6c);
        if ((iVar6 == 0x10) && (unaff_R14D == (int)unaff_RBX[0x366])) {
          bVar13 = 1;
        }
        else {
          bVar13 = 0;
        }
        if ((iVar2 == unaff_R14D) && (bVar13 != 0)) {
          lVar14 = *(longlong *)
                    (&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX[0x291] + 0x87b790) * 8);
          lVar11 = *(longlong *)(unaff_RBX[0x291] + 0x87b788);
          *(undefined4 *)((longlong)unaff_RBX + 0x1b34) = uVar15;
          *(float *)(unaff_RBX + 0x367) = fVar16;
          *(float *)((longlong)unaff_RBX + 0x1b3c) = (float)(lVar14 - lVar11) * 1e-05;
          if ((int)unaff_RBX[0x36d] != 1) {
            *(undefined4 *)((longlong)unaff_RBX + 0x1b64) = in_stack_00000098;
            *(undefined4 *)(unaff_RBX + 0x36d) = 0;
            *(undefined4 *)(unaff_RBX + 0x368) = 0;
          }
        }
        else {
          uVar8 = 0;
          uVar12 = uVar8;
          if (0 < iVar6) {
            pfVar4 = (float *)((longlong)unaff_RBX + 0x17b4);
            do {
              if (*pfVar4 <= fVar16) break;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              uVar12 = uVar12 + 1;
              pfVar4 = pfVar4 + 0xf;
            } while ((int)uVar7 < iVar6);
          }
          if (iVar2 == unaff_R14D) {
            if ((bVar13 == 0) && (uVar12 == 0x10)) {
              uVar12 = 0xf;
            }
            else {
LAB_1805b979d:
              if (0xf < (longlong)uVar12) goto LAB_1805b9873;
            }
            if (iVar6 < 0x10) {
              iVar6 = iVar6 + 1;
              *(int *)((longlong)unaff_RBX + 0x1b6c) = iVar6;
            }
            lVar14 = (longlong)(int)((iVar6 - (uint)bVar13) + -1);
            if ((longlong)uVar12 < lVar14) {
              puVar9 = (undefined8 *)((lVar14 + 0x65) * 0x3c + (longlong)unaff_RBX);
              lVar14 = lVar14 - uVar12;
              do {
                *puVar9 = *(undefined8 *)((longlong)puVar9 + -0x3c);
                puVar9[1] = *(undefined8 *)((longlong)puVar9 + -0x34);
                puVar9[2] = *(undefined8 *)((longlong)puVar9 + -0x2c);
                puVar9[3] = *(undefined8 *)((longlong)puVar9 + -0x24);
                puVar9[4] = *(undefined8 *)((longlong)puVar9 + -0x1c);
                puVar9[5] = *(undefined8 *)((longlong)puVar9 + -0x14);
                puVar9[6] = *(undefined8 *)((longlong)puVar9 + -0xc);
                *(undefined4 *)(puVar9 + 7) = *(undefined4 *)((longlong)puVar9 + -4);
                puVar9 = (undefined8 *)((longlong)puVar9 + -0x3c);
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            lVar10 = (uVar12 + 0x65) * 0x3c;
            *(undefined4 *)(lVar10 + (longlong)unaff_RBX) = *(undefined4 *)(lVar11 + 0x10);
            lVar14 = *(longlong *)
                      (&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX[0x291] + 0x87b790) * 8);
            lVar11 = *(longlong *)(unaff_RBX[0x291] + 0x87b788);
            *(undefined4 *)(lVar10 + 4 + (longlong)unaff_RBX) = uVar15;
            *(float *)(lVar10 + 8 + (longlong)unaff_RBX) = fVar16;
            lVar5 = uVar12 * 0x3c;
            *(float *)(lVar10 + 0xc + (longlong)unaff_RBX) = (float)(lVar14 - lVar11) * 1e-05;
            *(undefined4 *)(lVar5 + 0x17e0 + (longlong)unaff_RBX) = in_stack_00000098;
            *(undefined4 *)(lVar5 + 0x17e4 + (longlong)unaff_RBX) = 0;
            *(undefined4 *)(lVar5 + 0x17bc + (longlong)unaff_RBX) = 0;
          }
          else if ((bVar13 == 0) || (uVar12 != 0xf)) goto LAB_1805b979d;
        }
      }
LAB_1805b9873:
      unaff_R15D = unaff_R15D + -1;
      if (unaff_R15D == 0) break;
    }
    lVar14 = unaff_RBX[0x291];
    uVar7 = *(uint *)(unaff_RBX + 0x36e);
    param_1 = (ulonglong)(int)uVar7;
    sVar1 = *(short *)(lVar14 + 0x52dda0 + param_1 * 2);
    if (sVar1 == -1) {
      if ((int)uVar7 < *(int *)(lVar14 + 0x52ed94)) {
        do {
          if (*(short *)(lVar14 + 0x52dda0 + (longlong)(int)uVar7 * 2) != -1) break;
          uVar7 = uVar7 + 1;
          param_1 = (ulonglong)uVar7;
          *(uint *)(unaff_RBX + 0x36e) = uVar7;
        } while ((int)uVar7 < *(int *)(lVar14 + 0x52ed94));
      }
    }
    else {
      param_1 = (ulonglong)(uint)(int)sVar1;
      *(int *)(unaff_RBX + 0x36e) = (int)sVar1;
    }
  } while ((int)param_1 < unaff_R12D);
  if (unaff_R12D <= (int)unaff_RBX[0x36e]) {
    *(undefined1 *)(unaff_RBX + 0x2f5) = 0;
    uVar7 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar7 = uVar7 ^ uVar7 >> 0x11;
    uVar7 = uVar7 ^ uVar7 << 5;
    *(uint *)(unaff_RBX + 0x272) = uVar7;
    unaff_RBX[0x2f3] =
         *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RBX[0x2f4] * 8) -
         (longlong)((float)(uVar7 - 1) * 2.3283064e-05 - 350000.0);
  }
  return;
}






// 函数: void FUN_1805b9909(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1805b9909(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong unaff_RBX;
  int unaff_R12D;
  
  if (unaff_R12D <= *(int *)(unaff_RBX + 0x1b70)) {
    *(undefined1 *)(unaff_RBX + 0x17a8) = 0;
    uVar1 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
    uVar1 = uVar1 ^ uVar1 >> 0x11;
    uVar1 = uVar1 ^ uVar1 << 5;
    *(uint *)(unaff_RBX + 0x1390) = uVar1;
    *(longlong *)(unaff_RBX + 0x1798) =
         *(longlong *)(param_3 + (longlong)*(int *)(unaff_RBX + 0x17a0) * 8) -
         (longlong)((float)(uVar1 - 1) * 2.3283064e-05 - 350000.0);
  }
  return;
}






// 函数: void FUN_1805b9926(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1805b9926(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong unaff_RBX;
  
  *(undefined1 *)(unaff_RBX + 0x17a8) = 0;
  uVar1 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
  uVar1 = uVar1 ^ uVar1 >> 0x11;
  uVar1 = uVar1 ^ uVar1 << 5;
  *(uint *)(unaff_RBX + 0x1390) = uVar1;
  *(longlong *)(unaff_RBX + 0x1798) =
       *(longlong *)(param_3 + (longlong)*(int *)(unaff_RBX + 0x17a0) * 8) -
       (longlong)((float)(uVar1 - 1) * 2.3283064e-05 - 350000.0);
  return;
}






