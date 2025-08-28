#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part280.c - 9 个函数

// 函数: void FUN_180826347(undefined8 param_1,undefined8 param_2,int *param_3)
void FUN_180826347(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong in_RAX;
  int iVar3;
  longlong unaff_RBX;
  byte unaff_SIL;
  longlong in_R10;
  int *piVar4;
  bool in_ZF;
  
  if (in_ZF) {
    iVar3 = *(int *)(in_RAX + -0x14);
    piVar4 = (int *)(in_RAX + -0x14);
    do {
      piVar1 = piVar4 + 1;
      iVar2 = param_3[4] * iVar3;
      iVar3 = *piVar1;
      piVar4[5] = (piVar4[3] * param_3[1] + piVar4[2] * param_3[2] + piVar4[-1] * param_3[5] +
                   piVar4[4] * *param_3 + *piVar1 * param_3[3] + iVar2 >> (unaff_SIL & 0x1f)) +
                  *(int *)((in_R10 - in_RAX) + 0x14 + (longlong)piVar4);
      unaff_RBX = unaff_RBX + -1;
      piVar4 = piVar1;
    } while (unaff_RBX != 0);
    return;
  }
  iVar3 = *(int *)(in_RAX + -0x10);
  piVar4 = (int *)(in_RAX + -0x10);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[3] * iVar3;
    iVar3 = *piVar1;
    piVar4[4] = (piVar4[3] * *param_3 + piVar4[2] * param_3[1] + piVar4[-1] * param_3[4] + iVar2 +
                 *piVar1 * param_3[2] >> (unaff_SIL & 0x1f)) +
                *(int *)((in_R10 - in_RAX) + 0x10 + (longlong)piVar4);
    unaff_RBX = unaff_RBX + -1;
    piVar4 = piVar1;
  } while (unaff_RBX != 0);
  return;
}





// 函数: void FUN_1808263bf(undefined8 param_1,undefined8 param_2,int *param_3)
void FUN_1808263bf(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong in_RAX;
  int iVar3;
  longlong unaff_RBX;
  byte unaff_SIL;
  longlong in_R10;
  int *piVar4;
  
  iVar3 = *(int *)(in_RAX + -0x10);
  piVar4 = (int *)(in_RAX + -0x10);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[3] * iVar3;
    iVar3 = *piVar1;
    piVar4[4] = (piVar4[3] * *param_3 + piVar4[2] * param_3[1] + piVar4[-1] * param_3[4] + iVar2 +
                 *piVar1 * param_3[2] >> (unaff_SIL & 0x1f)) +
                *(int *)((in_R10 - in_RAX) + 0x10 + (longlong)piVar4);
    unaff_RBX = unaff_RBX + -1;
    piVar4 = piVar1;
  } while (unaff_RBX != 0);
  return;
}





// 函数: void FUN_180826431(undefined8 param_1,uint param_2,int *param_3,uint param_4,undefined8 param_5,
void FUN_180826431(undefined8 param_1,uint param_2,int *param_3,uint param_4,undefined8 param_5,
                  byte param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int *in_R10;
  
  if (param_4 < 3) {
    if (param_4 == 2) {
      iVar3 = *(int *)(param_7 + -4);
      piVar5 = (int *)(param_7 + -4);
      uVar4 = (ulonglong)param_2;
      do {
        piVar1 = piVar5 + -1;
        piVar5 = piVar5 + 1;
        iVar3 = *(int *)(((longlong)in_R10 - param_7) + (longlong)piVar5) +
                (*piVar1 * param_3[1] + *param_3 * iVar3 >> (param_6 & 0x1f));
        *piVar5 = iVar3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      return;
    }
    uVar4 = (ulonglong)param_2;
    piVar5 = in_R10;
    do {
      *(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)(piVar5 + 1)) =
           (*(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)piVar5) * *param_3 >>
           (param_6 & 0x1f)) + *piVar5;
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 != 0);
    return;
  }
  uVar4 = (ulonglong)param_2;
  if (param_4 == 4) {
    iVar3 = *(int *)(param_7 + -0xc);
    piVar5 = (int *)(param_7 + -0xc);
    do {
      piVar1 = piVar5 + 1;
      iVar2 = param_3[2] * iVar3;
      iVar3 = *piVar1;
      piVar5[3] = (piVar5[-1] * param_3[3] + piVar5[2] * *param_3 + iVar2 + param_3[1] * *piVar1 >>
                  (param_6 & 0x1f)) +
                  *(int *)((longlong)in_R10 + (0xc - param_7) + (longlong)piVar5);
      uVar4 = uVar4 - 1;
      piVar5 = piVar1;
    } while (uVar4 != 0);
    return;
  }
  iVar3 = *(int *)(param_7 + -8);
  piVar5 = (int *)(param_7 + -8);
  do {
    piVar1 = piVar5 + 1;
    iVar2 = param_3[1] * iVar3;
    iVar3 = *piVar1;
    piVar5[2] = (piVar5[-1] * param_3[2] + iVar2 + *param_3 * *piVar1 >> (param_6 & 0x1f)) +
                *(int *)((longlong)in_R10 + (8 - param_7) + (longlong)piVar5);
    uVar4 = uVar4 - 1;
    piVar5 = piVar1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_1808264b6(undefined8 param_1,undefined8 param_2,int *param_3)
void FUN_1808264b6(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong in_RAX;
  int iVar3;
  longlong unaff_RBX;
  byte unaff_SIL;
  longlong in_R10;
  int *piVar4;
  
  iVar3 = *(int *)(in_RAX + -8);
  piVar4 = (int *)(in_RAX + -8);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[1] * iVar3;
    iVar3 = *piVar1;
    piVar4[2] = (piVar4[-1] * param_3[2] + iVar2 + *param_3 * *piVar1 >> (unaff_SIL & 0x1f)) +
                *(int *)(in_R10 + 8 + (longlong)piVar4);
    unaff_RBX = unaff_RBX + -1;
    piVar4 = piVar1;
  } while (unaff_RBX != 0);
  return;
}





// 函数: void FUN_18082650b(undefined8 param_1,ulonglong param_2,int *param_3,undefined8 param_4,
void FUN_18082650b(undefined8 param_1,ulonglong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *in_R10;
  bool in_ZF;
  
  if (in_ZF) {
    iVar2 = *(int *)(param_7 + -4);
    piVar3 = (int *)(param_7 + -4);
    param_2 = param_2 & 0xffffffff;
    do {
      piVar1 = piVar3 + -1;
      piVar3 = piVar3 + 1;
      iVar2 = *(int *)(((longlong)in_R10 - param_7) + (longlong)piVar3) +
              (*piVar1 * param_3[1] + *param_3 * iVar2 >> (param_6 & 0x1f));
      *piVar3 = iVar2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return;
  }
  param_2 = param_2 & 0xffffffff;
  piVar3 = in_R10;
  do {
    *(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)(piVar3 + 1)) =
         (*(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)piVar3) * *param_3 >>
         (param_6 & 0x1f)) + *piVar3;
    param_2 = param_2 - 1;
    piVar3 = piVar3 + 1;
  } while (param_2 != 0);
  return;
}





// 函数: void FUN_18082656c(undefined8 param_1,uint param_2,int *param_3,undefined8 param_4,
void FUN_18082656c(undefined8 param_1,uint param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,longlong param_7)

{
  ulonglong uVar1;
  int *in_R10;
  int *piVar2;
  
  uVar1 = (ulonglong)param_2;
  piVar2 = in_R10;
  do {
    *(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)(piVar2 + 1)) =
         (*(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)piVar2) * *param_3 >>
         (param_6 & 0x1f)) + *piVar2;
    uVar1 = uVar1 - 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 != 0);
  return;
}





// 函数: void FUN_1808265b1(undefined8 param_1,uint param_2,int *param_3,undefined4 param_4,
void FUN_1808265b1(undefined8 param_1,uint param_2,int *param_3,undefined4 param_4,
                  undefined8 param_5,byte param_6,longlong param_7)

{
  int iVar1;
  int *piVar2;
  longlong in_R10;
  ulonglong uVar3;
  
  piVar2 = (int *)(param_7 + -0x7c);
  uVar3 = (ulonglong)param_2;
  do {
    iVar1 = 0;
    switch(param_4) {
    case 0x20:
      iVar1 = piVar2[-1] * param_3[0x1f];
    case 0x1f:
      iVar1 = iVar1 + param_3[0x1e] * *piVar2;
    case 0x1e:
      iVar1 = iVar1 + piVar2[1] * param_3[0x1d];
    case 0x1d:
      iVar1 = iVar1 + piVar2[2] * param_3[0x1c];
    case 0x1c:
      iVar1 = iVar1 + piVar2[3] * param_3[0x1b];
    case 0x1b:
      iVar1 = iVar1 + piVar2[4] * param_3[0x1a];
    case 0x1a:
      iVar1 = iVar1 + piVar2[5] * param_3[0x19];
    case 0x19:
      iVar1 = iVar1 + piVar2[6] * param_3[0x18];
    case 0x18:
      iVar1 = iVar1 + piVar2[7] * param_3[0x17];
    case 0x17:
      iVar1 = iVar1 + piVar2[8] * param_3[0x16];
    case 0x16:
      iVar1 = iVar1 + piVar2[9] * param_3[0x15];
    case 0x15:
      iVar1 = iVar1 + piVar2[10] * param_3[0x14];
    case 0x14:
      iVar1 = iVar1 + piVar2[0xb] * param_3[0x13];
    case 0x13:
      iVar1 = iVar1 + piVar2[0xc] * param_3[0x12];
    case 0x12:
      iVar1 = iVar1 + piVar2[0xd] * param_3[0x11];
    case 0x11:
      iVar1 = iVar1 + piVar2[0xe] * param_3[0x10];
    case 0x10:
      iVar1 = iVar1 + piVar2[0xf] * param_3[0xf];
    case 0xf:
      iVar1 = iVar1 + piVar2[0x10] * param_3[0xe];
    case 0xe:
      iVar1 = iVar1 + piVar2[0x11] * param_3[0xd];
    case 0xd:
      iVar1 = iVar1 + piVar2[0x1e] * *param_3 +
              piVar2[0x12] * param_3[0xc] + piVar2[0x13] * param_3[0xb] + piVar2[0x14] * param_3[10]
              + piVar2[0x15] * param_3[9] + piVar2[0x16] * param_3[8] + piVar2[0x17] * param_3[7] +
              piVar2[0x18] * param_3[6] + piVar2[0x19] * param_3[5] + piVar2[0x1a] * param_3[4] +
              piVar2[0x1b] * param_3[3] + piVar2[0x1c] * param_3[2] + piVar2[0x1d] * param_3[1];
    }
    piVar2[0x1f] = (iVar1 >> (param_6 & 0x1f)) +
                   *(int *)((in_R10 - param_7) + 0x7c + (longlong)piVar2);
    piVar2 = piVar2 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_180826770(void)
void FUN_180826770(void)

{
  return;
}





// 函数: void FUN_1808267d0(int *param_1,uint param_2,int *param_3,uint param_4,byte param_5,longlong param_6
void FUN_1808267d0(int *param_1,uint param_2,int *param_3,uint param_4,byte param_5,longlong param_6
                  )

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  
  if (0 < (int)param_2) {
    if (param_4 < 0xd) {
      if (param_4 < 9) {
        if (param_4 < 5) {
          if (param_4 < 3) {
            if (param_4 == 2) {
              piVar3 = (int *)(param_6 + -4);
              uVar2 = (ulonglong)param_2;
              iVar5 = *piVar3;
              do {
                piVar1 = piVar3 + -1;
                piVar3 = piVar3 + 1;
                iVar5 = (int)((longlong)iVar5 * (longlong)*param_3 +
                              (longlong)*piVar1 * (longlong)param_3[1] >> (param_5 & 0x3f)) +
                        *(int *)(((longlong)param_1 - param_6) + (longlong)piVar3);
                *piVar3 = iVar5;
                uVar2 = uVar2 - 1;
              } while (uVar2 != 0);
            }
            else {
              uVar2 = (ulonglong)param_2;
              piVar3 = param_1;
              do {
                *(int *)((param_6 - (longlong)param_1) + -4 + (longlong)(piVar3 + 1)) =
                     (int)((longlong)*(int *)((param_6 - (longlong)param_1) + -4 + (longlong)piVar3)
                           * (longlong)*param_3 >> (param_5 & 0x3f)) + *piVar3;
                uVar2 = uVar2 - 1;
                piVar3 = piVar3 + 1;
              } while (uVar2 != 0);
            }
          }
          else {
            uVar2 = (ulonglong)param_2;
            if (param_4 == 4) {
              lVar4 = param_6 + -0xc;
              iVar5 = *(int *)(param_6 + -0xc);
              do {
                piVar3 = (int *)(lVar4 + 4);
                *(int *)(lVar4 + 0xc) =
                     (int)((longlong)*(int *)(lVar4 + 8) * (longlong)*param_3 +
                           (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[3] +
                           (longlong)param_3[2] * (longlong)iVar5 +
                           (longlong)param_3[1] * (longlong)*piVar3 >> (param_5 & 0x3f)) +
                     *(int *)((longlong)param_1 + lVar4 + (0xc - param_6));
                uVar2 = uVar2 - 1;
                lVar4 = lVar4 + 4;
                iVar5 = *piVar3;
              } while (uVar2 != 0);
            }
            else {
              lVar4 = param_6 + -8;
              iVar5 = *(int *)(param_6 + -8);
              do {
                piVar3 = (int *)(lVar4 + 4);
                *(int *)(lVar4 + 8) =
                     (int)((longlong)*(int *)(lVar4 + -4) * (longlong)param_3[2] +
                           (longlong)param_3[1] * (longlong)iVar5 +
                           (longlong)*param_3 * (longlong)*piVar3 >> (param_5 & 0x3f)) +
                     *(int *)((longlong)param_1 + lVar4 + 4 + (4 - param_6));
                uVar2 = uVar2 - 1;
                lVar4 = lVar4 + 4;
                iVar5 = *piVar3;
              } while (uVar2 != 0);
            }
          }
        }
        else {
          uVar2 = (ulonglong)param_2;
          if (param_4 < 7) {
            if (param_4 == 6) {
              lVar4 = param_6 + -0x14;
              iVar5 = *(int *)(param_6 + -0x14);
              do {
                piVar3 = (int *)(lVar4 + 4);
                *(int *)(lVar4 + 0x14) =
                     (int)((longlong)*(int *)(lVar4 + 0x10) * (longlong)*param_3 +
                           (longlong)*(int *)(lVar4 + 0xc) * (longlong)param_3[1] +
                           (longlong)*(int *)(lVar4 + 8) * (longlong)param_3[2] +
                           (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[5] +
                           (longlong)param_3[4] * (longlong)iVar5 +
                           (longlong)param_3[3] * (longlong)*piVar3 >> (param_5 & 0x3f)) +
                     *(int *)((longlong)param_1 + lVar4 + (0x14 - param_6));
                uVar2 = uVar2 - 1;
                lVar4 = lVar4 + 4;
                iVar5 = *piVar3;
              } while (uVar2 != 0);
            }
            else {
              lVar4 = param_6 + -0x10;
              iVar5 = *(int *)(param_6 + -0x10);
              do {
                piVar3 = (int *)(lVar4 + 4);
                *(int *)(lVar4 + 0x10) =
                     (int)((longlong)*(int *)(lVar4 + 0xc) * (longlong)*param_3 +
                           (longlong)*(int *)(lVar4 + 8) * (longlong)param_3[1] +
                           (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[4] +
                           (longlong)param_3[3] * (longlong)iVar5 +
                           (longlong)*piVar3 * (longlong)param_3[2] >> (param_5 & 0x3f)) +
                     *(int *)((longlong)param_1 + lVar4 + 4 + (0xc - param_6));
                uVar2 = uVar2 - 1;
                lVar4 = lVar4 + 4;
                iVar5 = *piVar3;
              } while (uVar2 != 0);
            }
          }
          else if (param_4 == 8) {
            lVar4 = param_6 + -0x1c;
            iVar5 = *(int *)(param_6 + -0x1c);
            do {
              piVar3 = (int *)(lVar4 + 4);
              *(int *)(lVar4 + 0x1c) =
                   (int)((longlong)*(int *)(lVar4 + 0x18) * (longlong)*param_3 +
                         (longlong)*(int *)(lVar4 + 0x14) * (longlong)param_3[1] +
                         (longlong)*(int *)(lVar4 + 0x10) * (longlong)param_3[2] +
                         (longlong)*(int *)(lVar4 + 0xc) * (longlong)param_3[3] +
                         (longlong)*(int *)(lVar4 + 8) * (longlong)param_3[4] +
                         (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[7] +
                         (longlong)param_3[6] * (longlong)iVar5 +
                         (longlong)*piVar3 * (longlong)param_3[5] >> (param_5 & 0x3f)) +
                   *(int *)((longlong)param_1 + lVar4 + 4 + (0x18 - param_6));
              uVar2 = uVar2 - 1;
              lVar4 = lVar4 + 4;
              iVar5 = *piVar3;
            } while (uVar2 != 0);
          }
          else {
            lVar4 = param_6 + -0x18;
            iVar5 = *(int *)(param_6 + -0x18);
            do {
              piVar3 = (int *)(lVar4 + 4);
              *(int *)(lVar4 + 0x18) =
                   (int)((longlong)*(int *)(lVar4 + 0x14) * (longlong)*param_3 +
                         (longlong)*(int *)(lVar4 + 0x10) * (longlong)param_3[1] +
                         (longlong)*(int *)(lVar4 + 0xc) * (longlong)param_3[2] +
                         (longlong)*(int *)(lVar4 + 8) * (longlong)param_3[3] +
                         (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[6] +
                         (longlong)param_3[5] * (longlong)iVar5 +
                         (longlong)param_3[4] * (longlong)*piVar3 >> (param_5 & 0x3f)) +
                   *(int *)((longlong)param_1 + lVar4 + 4 + (0x14 - param_6));
              uVar2 = uVar2 - 1;
              lVar4 = lVar4 + 4;
              iVar5 = *piVar3;
            } while (uVar2 != 0);
          }
        }
      }
      else {
        uVar2 = (ulonglong)param_2;
        if (param_4 < 0xb) {
          if (param_4 == 10) {
            lVar4 = param_6 + -0x24;
            iVar5 = *(int *)(param_6 + -0x24);
            do {
              piVar3 = (int *)(lVar4 + 4);
              *(int *)(lVar4 + 0x24) =
                   (int)((longlong)*(int *)(lVar4 + 0x20) * (longlong)*param_3 +
                         (longlong)*(int *)(lVar4 + 0x1c) * (longlong)param_3[1] +
                         (longlong)*(int *)(lVar4 + 0x18) * (longlong)param_3[2] +
                         (longlong)*(int *)(lVar4 + 0x14) * (longlong)param_3[3] +
                         (longlong)*(int *)(lVar4 + 0x10) * (longlong)param_3[4] +
                         (longlong)*(int *)(lVar4 + 0xc) * (longlong)param_3[5] +
                         (longlong)*(int *)(lVar4 + 8) * (longlong)param_3[6] +
                         (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[9] +
                         (longlong)param_3[8] * (longlong)iVar5 +
                         (longlong)param_3[7] * (longlong)*piVar3 >> (param_5 & 0x3f)) +
                   *(int *)((longlong)param_1 + lVar4 + (0x24 - param_6));
              uVar2 = uVar2 - 1;
              lVar4 = lVar4 + 4;
              iVar5 = *piVar3;
            } while (uVar2 != 0);
          }
          else {
            lVar4 = param_6 + -0x20;
            iVar5 = *(int *)(param_6 + -0x20);
            do {
              piVar3 = (int *)(lVar4 + 4);
              *(int *)(lVar4 + 0x20) =
                   (int)((longlong)*(int *)(lVar4 + 0x1c) * (longlong)*param_3 +
                         (longlong)*(int *)(lVar4 + 0x18) * (longlong)param_3[1] +
                         (longlong)*(int *)(lVar4 + 0x14) * (longlong)param_3[2] +
                         (longlong)*(int *)(lVar4 + 0x10) * (longlong)param_3[3] +
                         (longlong)*(int *)(lVar4 + 0xc) * (longlong)param_3[4] +
                         (longlong)*(int *)(lVar4 + 8) * (longlong)param_3[5] +
                         (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[8] +
                         (longlong)*piVar3 * (longlong)param_3[6] +
                         (longlong)param_3[7] * (longlong)iVar5 >> (param_5 & 0x3f)) +
                   *(int *)((longlong)param_1 + lVar4 + 4 + (0x1c - param_6));
              uVar2 = uVar2 - 1;
              lVar4 = lVar4 + 4;
              iVar5 = *piVar3;
            } while (uVar2 != 0);
          }
        }
        else if (param_4 == 0xc) {
          lVar4 = param_6 + -0x2c;
          iVar5 = *(int *)(param_6 + -0x2c);
          do {
            piVar3 = (int *)(lVar4 + 4);
            *(int *)(lVar4 + 0x2c) =
                 (int)((longlong)*(int *)(lVar4 + 0x28) * (longlong)*param_3 +
                       (longlong)*(int *)(lVar4 + 0x24) * (longlong)param_3[1] +
                       (longlong)*(int *)(lVar4 + 0x20) * (longlong)param_3[2] +
                       (longlong)*(int *)(lVar4 + 0x1c) * (longlong)param_3[3] +
                       (longlong)*(int *)(lVar4 + 0x18) * (longlong)param_3[4] +
                       (longlong)*(int *)(lVar4 + 0x14) * (longlong)param_3[5] +
                       (longlong)*(int *)(lVar4 + 0x10) * (longlong)param_3[6] +
                       (longlong)*(int *)(lVar4 + 0xc) * (longlong)param_3[7] +
                       (longlong)*(int *)(lVar4 + 8) * (longlong)param_3[8] +
                       (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[0xb] +
                       (longlong)param_3[10] * (longlong)iVar5 +
                       (longlong)*piVar3 * (longlong)param_3[9] >> (param_5 & 0x3f)) +
                 *(int *)((longlong)param_1 + lVar4 + 4 + (0x28 - param_6));
            uVar2 = uVar2 - 1;
            lVar4 = lVar4 + 4;
            iVar5 = *piVar3;
          } while (uVar2 != 0);
        }
        else {
          lVar4 = param_6 + -0x28;
          iVar5 = *(int *)(param_6 + -0x28);
          do {
            piVar3 = (int *)(lVar4 + 4);
            *(int *)(lVar4 + 0x28) =
                 (int)((longlong)*(int *)(lVar4 + 0x24) * (longlong)*param_3 +
                       (longlong)*(int *)(lVar4 + 0x20) * (longlong)param_3[1] +
                       (longlong)*(int *)(lVar4 + 0x1c) * (longlong)param_3[2] +
                       (longlong)*(int *)(lVar4 + 0x18) * (longlong)param_3[3] +
                       (longlong)*(int *)(lVar4 + 0x14) * (longlong)param_3[4] +
                       (longlong)*(int *)(lVar4 + 0x10) * (longlong)param_3[5] +
                       (longlong)*(int *)(lVar4 + 0xc) * (longlong)param_3[6] +
                       (longlong)*(int *)(lVar4 + 8) * (longlong)param_3[7] +
                       (longlong)*(int *)(lVar4 + -4) * (longlong)param_3[10] +
                       (longlong)param_3[9] * (longlong)iVar5 +
                       (longlong)param_3[8] * (longlong)*piVar3 >> (param_5 & 0x3f)) +
                 *(int *)((longlong)param_1 + lVar4 + 4 + (0x24 - param_6));
            uVar2 = uVar2 - 1;
            lVar4 = lVar4 + 4;
            iVar5 = *piVar3;
          } while (uVar2 != 0);
        }
      }
    }
    else {
      piVar3 = (int *)(param_6 + -0x7c);
      uVar2 = (ulonglong)param_2;
      do {
        lVar4 = 0;
        switch(param_4) {
        case 0x20:
          lVar4 = (longlong)piVar3[-1] * (longlong)param_3[0x1f];
        case 0x1f:
          lVar4 = lVar4 + (longlong)param_3[0x1e] * (longlong)*piVar3;
        case 0x1e:
          lVar4 = lVar4 + (longlong)piVar3[1] * (longlong)param_3[0x1d];
        case 0x1d:
          lVar4 = lVar4 + (longlong)piVar3[2] * (longlong)param_3[0x1c];
        case 0x1c:
          lVar4 = lVar4 + (longlong)piVar3[3] * (longlong)param_3[0x1b];
        case 0x1b:
          lVar4 = lVar4 + (longlong)piVar3[4] * (longlong)param_3[0x1a];
        case 0x1a:
          lVar4 = lVar4 + (longlong)piVar3[5] * (longlong)param_3[0x19];
        case 0x19:
          lVar4 = lVar4 + (longlong)piVar3[6] * (longlong)param_3[0x18];
        case 0x18:
          lVar4 = lVar4 + (longlong)piVar3[7] * (longlong)param_3[0x17];
        case 0x17:
          lVar4 = lVar4 + (longlong)piVar3[8] * (longlong)param_3[0x16];
        case 0x16:
          lVar4 = lVar4 + (longlong)piVar3[9] * (longlong)param_3[0x15];
        case 0x15:
          lVar4 = lVar4 + (longlong)piVar3[10] * (longlong)param_3[0x14];
        case 0x14:
          lVar4 = lVar4 + (longlong)piVar3[0xb] * (longlong)param_3[0x13];
        case 0x13:
          lVar4 = lVar4 + (longlong)piVar3[0xc] * (longlong)param_3[0x12];
        case 0x12:
          lVar4 = lVar4 + (longlong)piVar3[0xd] * (longlong)param_3[0x11];
        case 0x11:
          lVar4 = lVar4 + (longlong)piVar3[0xe] * (longlong)param_3[0x10];
        case 0x10:
          lVar4 = lVar4 + (longlong)piVar3[0xf] * (longlong)param_3[0xf];
        case 0xf:
          lVar4 = lVar4 + (longlong)piVar3[0x10] * (longlong)param_3[0xe];
        case 0xe:
          lVar4 = lVar4 + (longlong)piVar3[0x11] * (longlong)param_3[0xd];
        case 0xd:
          lVar4 = lVar4 + (longlong)piVar3[0x1e] * (longlong)*param_3 +
                  (longlong)piVar3[0x12] * (longlong)param_3[0xc] +
                  (longlong)piVar3[0x13] * (longlong)param_3[0xb] +
                  (longlong)piVar3[0x14] * (longlong)param_3[10] +
                  (longlong)piVar3[0x15] * (longlong)param_3[9] +
                  (longlong)piVar3[0x16] * (longlong)param_3[8] +
                  (longlong)piVar3[0x17] * (longlong)param_3[7] +
                  (longlong)piVar3[0x18] * (longlong)param_3[6] +
                  (longlong)piVar3[0x19] * (longlong)param_3[5] +
                  (longlong)piVar3[0x1a] * (longlong)param_3[4] +
                  (longlong)piVar3[0x1b] * (longlong)param_3[3] +
                  (longlong)piVar3[0x1c] * (longlong)param_3[2] +
                  (longlong)piVar3[0x1d] * (longlong)param_3[1];
        }
        piVar3[0x1f] = (int)(lVar4 >> (param_5 & 0x3f)) +
                       *(int *)((longlong)piVar3 + (longlong)param_1 + (0x7c - param_6));
        piVar3 = piVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}





