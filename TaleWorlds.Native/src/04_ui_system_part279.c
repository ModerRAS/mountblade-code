#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part279.c - 9 个函数

// 函数: void FUN_180825dca(int *param_1,int param_2)
void FUN_180825dca(int *param_1,int param_2)

{
  longlong in_R10;
  longlong in_R11;
  longlong lVar1;
  
  if (0 < param_2) {
    lVar1 = in_R11 - (longlong)param_1;
    do {
      *(int *)(lVar1 + (longlong)param_1) = *(int *)(lVar1 + -4 + (longlong)param_1) + *param_1;
      param_1 = param_1 + 1;
      in_R10 = in_R10 + -1;
    } while (in_R10 != 0);
    return;
  }
  return;
}





// 函数: void FUN_180825e10(longlong *param_1)
void FUN_180825e10(longlong *param_1)

{
  if (*param_1 != 0) {
    free();
  }
  if (param_1[1] != 0) {
    free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



undefined8 FUN_180825e50(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 <= *(uint *)(param_1 + 2)) {
    return 1;
  }
  lVar2 = (ulonglong)(uint)(1 << ((byte)param_2 & 0x1f)) << 2;
  lVar1 = realloc(*param_1,lVar2);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    lVar1 = realloc(param_1[1],lVar2);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,lVar2);
    }
  }
  return 0;
}





// 函数: void FUN_180825ef0(int *param_1,uint param_2,int *param_3,uint param_4,byte param_5,longlong param_6
void FUN_180825ef0(int *param_1,uint param_2,int *param_3,uint param_4,byte param_5,longlong param_6
                  )

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  
  if (0 < (int)param_2) {
    if (param_4 < 0xd) {
      if (8 < param_4) {
        uVar4 = (ulonglong)param_2;
        if (param_4 < 0xb) {
          if (param_4 != 10) {
            iVar3 = *(int *)(param_6 + -0x20);
            piVar5 = (int *)(param_6 + -0x20);
            do {
              piVar1 = piVar5 + 1;
              iVar2 = param_3[7] * iVar3;
              iVar3 = *piVar1;
              piVar5[8] = (piVar5[7] * *param_3 + piVar5[6] * param_3[1] + piVar5[5] * param_3[2] +
                           piVar5[4] * param_3[3] + piVar5[3] * param_3[4] + piVar5[2] * param_3[5]
                           + piVar5[-1] * param_3[8] + iVar2 + param_3[6] * *piVar1 >>
                          (param_5 & 0x1f)) +
                          *(int *)((longlong)param_1 + (0x20 - param_6) + (longlong)piVar5);
              uVar4 = uVar4 - 1;
              piVar5 = piVar1;
            } while (uVar4 != 0);
            return;
          }
          iVar3 = *(int *)(param_6 + -0x24);
          piVar5 = (int *)(param_6 + -0x24);
          do {
            piVar1 = piVar5 + 1;
            iVar2 = param_3[8] * iVar3;
            iVar3 = *piVar1;
            piVar5[9] = (piVar5[7] * param_3[1] + piVar5[6] * param_3[2] + piVar5[5] * param_3[3] +
                         piVar5[4] * param_3[4] + piVar5[3] * param_3[5] + piVar5[2] * param_3[6] +
                         piVar5[-1] * param_3[9] + piVar5[8] * *param_3 + iVar2 +
                         param_3[7] * *piVar1 >> (param_5 & 0x1f)) +
                        *(int *)((longlong)param_1 + (0x24 - param_6) + (longlong)piVar5);
            uVar4 = uVar4 - 1;
            piVar5 = piVar1;
          } while (uVar4 != 0);
          return;
        }
        if (param_4 != 0xc) {
          iVar3 = *(int *)(param_6 + -0x28);
          piVar5 = (int *)(param_6 + -0x28);
          do {
            piVar1 = piVar5 + 1;
            iVar2 = param_3[9] * iVar3;
            iVar3 = *piVar1;
            piVar5[10] = (piVar5[9] * *param_3 + piVar5[8] * param_3[1] + piVar5[7] * param_3[2] +
                          piVar5[6] * param_3[3] + piVar5[5] * param_3[4] + piVar5[4] * param_3[5] +
                          piVar5[3] * param_3[6] + piVar5[2] * param_3[7] + piVar5[-1] * param_3[10]
                          + iVar2 + param_3[8] * *piVar1 >> (param_5 & 0x1f)) +
                         *(int *)((longlong)param_1 + (0x28 - param_6) + (longlong)piVar5);
            uVar4 = uVar4 - 1;
            piVar5 = piVar1;
          } while (uVar4 != 0);
          return;
        }
        iVar3 = *(int *)(param_6 + -0x2c);
        piVar5 = (int *)(param_6 + -0x2c);
        do {
          piVar1 = piVar5 + 1;
          iVar2 = param_3[10] * iVar3;
          iVar3 = *piVar1;
          piVar5[0xb] = (piVar5[9] * param_3[1] + piVar5[8] * param_3[2] + piVar5[7] * param_3[3] +
                         piVar5[6] * param_3[4] + piVar5[5] * param_3[5] + piVar5[4] * param_3[6] +
                         piVar5[3] * param_3[7] + piVar5[2] * param_3[8] + piVar5[10] * *param_3 +
                         piVar5[-1] * param_3[0xb] + iVar2 + param_3[9] * *piVar1 >>
                        (param_5 & 0x1f)) +
                        *(int *)((longlong)param_1 + (0x2c - param_6) + (longlong)piVar5);
          uVar4 = uVar4 - 1;
          piVar5 = piVar1;
        } while (uVar4 != 0);
        return;
      }
      if (4 < param_4) {
        uVar4 = (ulonglong)param_2;
        if (param_4 < 7) {
          if (param_4 != 6) {
            iVar3 = *(int *)(param_6 + -0x10);
            piVar5 = (int *)(param_6 + -0x10);
            do {
              piVar1 = piVar5 + 1;
              iVar2 = param_3[3] * iVar3;
              iVar3 = *piVar1;
              piVar5[4] = (piVar5[3] * *param_3 + piVar5[2] * param_3[1] + piVar5[-1] * param_3[4] +
                           iVar2 + *piVar1 * param_3[2] >> (param_5 & 0x1f)) +
                          *(int *)((longlong)param_1 + (0x10 - param_6) + (longlong)piVar5);
              uVar4 = uVar4 - 1;
              piVar5 = piVar1;
            } while (uVar4 != 0);
            return;
          }
          iVar3 = *(int *)(param_6 + -0x14);
          piVar5 = (int *)(param_6 + -0x14);
          do {
            piVar1 = piVar5 + 1;
            iVar2 = param_3[4] * iVar3;
            iVar3 = *piVar1;
            piVar5[5] = (piVar5[3] * param_3[1] + piVar5[2] * param_3[2] + piVar5[-1] * param_3[5] +
                         piVar5[4] * *param_3 + *piVar1 * param_3[3] + iVar2 >> (param_5 & 0x1f)) +
                        *(int *)((longlong)param_1 + (0x14 - param_6) + (longlong)piVar5);
            uVar4 = uVar4 - 1;
            piVar5 = piVar1;
          } while (uVar4 != 0);
          return;
        }
        if (param_4 != 8) {
          iVar3 = *(int *)(param_6 + -0x18);
          piVar5 = (int *)(param_6 + -0x18);
          do {
            piVar1 = piVar5 + 1;
            iVar2 = param_3[5] * iVar3;
            iVar3 = *piVar1;
            piVar5[6] = (piVar5[5] * *param_3 + piVar5[4] * param_3[1] + piVar5[3] * param_3[2] +
                         piVar5[2] * param_3[3] + piVar5[-1] * param_3[6] + *piVar1 * param_3[4] +
                         iVar2 >> (param_5 & 0x1f)) +
                        *(int *)((longlong)param_1 + (0x18 - param_6) + (longlong)piVar5);
            uVar4 = uVar4 - 1;
            piVar5 = piVar1;
          } while (uVar4 != 0);
          return;
        }
        iVar3 = *(int *)(param_6 + -0x1c);
        piVar5 = (int *)(param_6 + -0x1c);
        do {
          piVar1 = piVar5 + 1;
          iVar2 = param_3[6] * iVar3;
          iVar3 = *piVar1;
          piVar5[7] = (piVar5[5] * param_3[1] + piVar5[4] * param_3[2] + piVar5[3] * param_3[3] +
                       piVar5[2] * param_3[4] + piVar5[-1] * param_3[7] + piVar5[6] * *param_3 +
                       *piVar1 * param_3[5] + iVar2 >> (param_5 & 0x1f)) +
                      *(int *)((longlong)param_1 + (0x1c - param_6) + (longlong)piVar5);
          uVar4 = uVar4 - 1;
          piVar5 = piVar1;
        } while (uVar4 != 0);
        return;
      }
      if (param_4 < 3) {
        if (param_4 != 2) {
          uVar4 = (ulonglong)param_2;
          piVar5 = param_1;
          do {
            *(int *)((param_6 - (longlong)param_1) + -4 + (longlong)(piVar5 + 1)) =
                 (*(int *)((param_6 - (longlong)param_1) + -4 + (longlong)piVar5) * *param_3 >>
                 (param_5 & 0x1f)) + *piVar5;
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 1;
          } while (uVar4 != 0);
          return;
        }
        iVar3 = *(int *)(param_6 + -4);
        piVar5 = (int *)(param_6 + -4);
        uVar4 = (ulonglong)param_2;
        do {
          piVar1 = piVar5 + -1;
          piVar5 = piVar5 + 1;
          iVar3 = *(int *)(((longlong)param_1 - param_6) + (longlong)piVar5) +
                  (*piVar1 * param_3[1] + *param_3 * iVar3 >> (param_5 & 0x1f));
          *piVar5 = iVar3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        return;
      }
      uVar4 = (ulonglong)param_2;
      if (param_4 != 4) {
        iVar3 = *(int *)(param_6 + -8);
        piVar5 = (int *)(param_6 + -8);
        do {
          piVar1 = piVar5 + 1;
          iVar2 = param_3[1] * iVar3;
          iVar3 = *piVar1;
          piVar5[2] = (piVar5[-1] * param_3[2] + iVar2 + *param_3 * *piVar1 >> (param_5 & 0x1f)) +
                      *(int *)((longlong)param_1 + (8 - param_6) + (longlong)piVar5);
          uVar4 = uVar4 - 1;
          piVar5 = piVar1;
        } while (uVar4 != 0);
        return;
      }
      iVar3 = *(int *)(param_6 + -0xc);
      piVar5 = (int *)(param_6 + -0xc);
      do {
        piVar1 = piVar5 + 1;
        iVar2 = param_3[2] * iVar3;
        iVar3 = *piVar1;
        piVar5[3] = (piVar5[-1] * param_3[3] + piVar5[2] * *param_3 + iVar2 + param_3[1] * *piVar1
                    >> (param_5 & 0x1f)) +
                    *(int *)((longlong)param_1 + (0xc - param_6) + (longlong)piVar5);
        uVar4 = uVar4 - 1;
        piVar5 = piVar1;
      } while (uVar4 != 0);
      return;
    }
    piVar5 = (int *)(param_6 + -0x7c);
    uVar4 = (ulonglong)param_2;
    do {
      iVar3 = 0;
      switch(param_4) {
      case 0x20:
        iVar3 = piVar5[-1] * param_3[0x1f];
      case 0x1f:
        iVar3 = iVar3 + param_3[0x1e] * *piVar5;
      case 0x1e:
        iVar3 = iVar3 + piVar5[1] * param_3[0x1d];
      case 0x1d:
        iVar3 = iVar3 + piVar5[2] * param_3[0x1c];
      case 0x1c:
        iVar3 = iVar3 + piVar5[3] * param_3[0x1b];
      case 0x1b:
        iVar3 = iVar3 + piVar5[4] * param_3[0x1a];
      case 0x1a:
        iVar3 = iVar3 + piVar5[5] * param_3[0x19];
      case 0x19:
        iVar3 = iVar3 + piVar5[6] * param_3[0x18];
      case 0x18:
        iVar3 = iVar3 + piVar5[7] * param_3[0x17];
      case 0x17:
        iVar3 = iVar3 + piVar5[8] * param_3[0x16];
      case 0x16:
        iVar3 = iVar3 + piVar5[9] * param_3[0x15];
      case 0x15:
        iVar3 = iVar3 + piVar5[10] * param_3[0x14];
      case 0x14:
        iVar3 = iVar3 + piVar5[0xb] * param_3[0x13];
      case 0x13:
        iVar3 = iVar3 + piVar5[0xc] * param_3[0x12];
      case 0x12:
        iVar3 = iVar3 + piVar5[0xd] * param_3[0x11];
      case 0x11:
        iVar3 = iVar3 + piVar5[0xe] * param_3[0x10];
      case 0x10:
        iVar3 = iVar3 + piVar5[0xf] * param_3[0xf];
      case 0xf:
        iVar3 = iVar3 + piVar5[0x10] * param_3[0xe];
      case 0xe:
        iVar3 = iVar3 + piVar5[0x11] * param_3[0xd];
      case 0xd:
        iVar3 = iVar3 + piVar5[0x1e] * *param_3 +
                piVar5[0x12] * param_3[0xc] + piVar5[0x13] * param_3[0xb] +
                piVar5[0x14] * param_3[10] + piVar5[0x15] * param_3[9] + piVar5[0x16] * param_3[8] +
                piVar5[0x17] * param_3[7] + piVar5[0x18] * param_3[6] + piVar5[0x19] * param_3[5] +
                piVar5[0x1a] * param_3[4] + piVar5[0x1b] * param_3[3] + piVar5[0x1c] * param_3[2] +
                piVar5[0x1d] * param_3[1];
      }
      piVar5[0x1f] = (iVar3 >> (param_5 & 0x1f)) +
                     *(int *)((longlong)param_1 + (0x7c - param_6) + (longlong)piVar5);
      piVar5 = piVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_180825eff(undefined8 param_1,ulonglong param_2,int *param_3,uint param_4,undefined8 param_5
void FUN_180825eff(undefined8 param_1,ulonglong param_2,int *param_3,uint param_4,undefined8 param_5
                  ,byte param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_R10;
  
  if (0xc < param_4) {
    piVar4 = (int *)(param_7 + -0x7c);
    param_2 = param_2 & 0xffffffff;
    do {
      iVar3 = 0;
      switch(param_4) {
      case 0x20:
        iVar3 = piVar4[-1] * param_3[0x1f];
      case 0x1f:
        iVar3 = iVar3 + param_3[0x1e] * *piVar4;
      case 0x1e:
        iVar3 = iVar3 + piVar4[1] * param_3[0x1d];
      case 0x1d:
        iVar3 = iVar3 + piVar4[2] * param_3[0x1c];
      case 0x1c:
        iVar3 = iVar3 + piVar4[3] * param_3[0x1b];
      case 0x1b:
        iVar3 = iVar3 + piVar4[4] * param_3[0x1a];
      case 0x1a:
        iVar3 = iVar3 + piVar4[5] * param_3[0x19];
      case 0x19:
        iVar3 = iVar3 + piVar4[6] * param_3[0x18];
      case 0x18:
        iVar3 = iVar3 + piVar4[7] * param_3[0x17];
      case 0x17:
        iVar3 = iVar3 + piVar4[8] * param_3[0x16];
      case 0x16:
        iVar3 = iVar3 + piVar4[9] * param_3[0x15];
      case 0x15:
        iVar3 = iVar3 + piVar4[10] * param_3[0x14];
      case 0x14:
        iVar3 = iVar3 + piVar4[0xb] * param_3[0x13];
      case 0x13:
        iVar3 = iVar3 + piVar4[0xc] * param_3[0x12];
      case 0x12:
        iVar3 = iVar3 + piVar4[0xd] * param_3[0x11];
      case 0x11:
        iVar3 = iVar3 + piVar4[0xe] * param_3[0x10];
      case 0x10:
        iVar3 = iVar3 + piVar4[0xf] * param_3[0xf];
      case 0xf:
        iVar3 = iVar3 + piVar4[0x10] * param_3[0xe];
      case 0xe:
        iVar3 = iVar3 + piVar4[0x11] * param_3[0xd];
      case 0xd:
        iVar3 = iVar3 + piVar4[0x1e] * *param_3 +
                piVar4[0x12] * param_3[0xc] + piVar4[0x13] * param_3[0xb] +
                piVar4[0x14] * param_3[10] + piVar4[0x15] * param_3[9] + piVar4[0x16] * param_3[8] +
                piVar4[0x17] * param_3[7] + piVar4[0x18] * param_3[6] + piVar4[0x19] * param_3[5] +
                piVar4[0x1a] * param_3[4] + piVar4[0x1b] * param_3[3] + piVar4[0x1c] * param_3[2] +
                piVar4[0x1d] * param_3[1];
      }
      piVar4[0x1f] = (iVar3 >> (param_6 & 0x1f)) +
                     *(int *)((longlong)in_R10 + (0x7c - param_7) + (longlong)piVar4);
      piVar4 = piVar4 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return;
  }
  if (8 < param_4) {
    param_2 = param_2 & 0xffffffff;
    if (param_4 < 0xb) {
      if (param_4 != 10) {
        iVar3 = *(int *)(param_7 + -0x20);
        piVar4 = (int *)(param_7 + -0x20);
        do {
          piVar1 = piVar4 + 1;
          iVar2 = param_3[7] * iVar3;
          iVar3 = *piVar1;
          piVar4[8] = (piVar4[7] * *param_3 + piVar4[6] * param_3[1] + piVar4[5] * param_3[2] +
                       piVar4[4] * param_3[3] + piVar4[3] * param_3[4] + piVar4[2] * param_3[5] +
                       piVar4[-1] * param_3[8] + iVar2 + param_3[6] * *piVar1 >> (param_6 & 0x1f)) +
                      *(int *)((longlong)in_R10 + (0x20 - param_7) + (longlong)piVar4);
          param_2 = param_2 - 1;
          piVar4 = piVar1;
        } while (param_2 != 0);
        return;
      }
      iVar3 = *(int *)(param_7 + -0x24);
      piVar4 = (int *)(param_7 + -0x24);
      do {
        piVar1 = piVar4 + 1;
        iVar2 = param_3[8] * iVar3;
        iVar3 = *piVar1;
        piVar4[9] = (piVar4[7] * param_3[1] + piVar4[6] * param_3[2] + piVar4[5] * param_3[3] +
                     piVar4[4] * param_3[4] + piVar4[3] * param_3[5] + piVar4[2] * param_3[6] +
                     piVar4[-1] * param_3[9] + piVar4[8] * *param_3 + iVar2 + param_3[7] * *piVar1
                    >> (param_6 & 0x1f)) +
                    *(int *)((longlong)in_R10 + (0x24 - param_7) + (longlong)piVar4);
        param_2 = param_2 - 1;
        piVar4 = piVar1;
      } while (param_2 != 0);
      return;
    }
    if (param_4 != 0xc) {
      iVar3 = *(int *)(param_7 + -0x28);
      piVar4 = (int *)(param_7 + -0x28);
      do {
        piVar1 = piVar4 + 1;
        iVar2 = param_3[9] * iVar3;
        iVar3 = *piVar1;
        piVar4[10] = (piVar4[9] * *param_3 + piVar4[8] * param_3[1] + piVar4[7] * param_3[2] +
                      piVar4[6] * param_3[3] + piVar4[5] * param_3[4] + piVar4[4] * param_3[5] +
                      piVar4[3] * param_3[6] + piVar4[2] * param_3[7] + piVar4[-1] * param_3[10] +
                      iVar2 + param_3[8] * *piVar1 >> (param_6 & 0x1f)) +
                     *(int *)((longlong)in_R10 + (0x28 - param_7) + (longlong)piVar4);
        param_2 = param_2 - 1;
        piVar4 = piVar1;
      } while (param_2 != 0);
      return;
    }
    iVar3 = *(int *)(param_7 + -0x2c);
    piVar4 = (int *)(param_7 + -0x2c);
    do {
      piVar1 = piVar4 + 1;
      iVar2 = param_3[10] * iVar3;
      iVar3 = *piVar1;
      piVar4[0xb] = (piVar4[9] * param_3[1] + piVar4[8] * param_3[2] + piVar4[7] * param_3[3] +
                     piVar4[6] * param_3[4] + piVar4[5] * param_3[5] + piVar4[4] * param_3[6] +
                     piVar4[3] * param_3[7] + piVar4[2] * param_3[8] + piVar4[10] * *param_3 +
                     piVar4[-1] * param_3[0xb] + iVar2 + param_3[9] * *piVar1 >> (param_6 & 0x1f)) +
                    *(int *)((longlong)in_R10 + (0x2c - param_7) + (longlong)piVar4);
      param_2 = param_2 - 1;
      piVar4 = piVar1;
    } while (param_2 != 0);
    return;
  }
  if (4 < param_4) {
    param_2 = param_2 & 0xffffffff;
    if (param_4 < 7) {
      if (param_4 != 6) {
        iVar3 = *(int *)(param_7 + -0x10);
        piVar4 = (int *)(param_7 + -0x10);
        do {
          piVar1 = piVar4 + 1;
          iVar2 = param_3[3] * iVar3;
          iVar3 = *piVar1;
          piVar4[4] = (piVar4[3] * *param_3 + piVar4[2] * param_3[1] + piVar4[-1] * param_3[4] +
                       iVar2 + *piVar1 * param_3[2] >> (param_6 & 0x1f)) +
                      *(int *)((longlong)in_R10 + (0x10 - param_7) + (longlong)piVar4);
          param_2 = param_2 - 1;
          piVar4 = piVar1;
        } while (param_2 != 0);
        return;
      }
      iVar3 = *(int *)(param_7 + -0x14);
      piVar4 = (int *)(param_7 + -0x14);
      do {
        piVar1 = piVar4 + 1;
        iVar2 = param_3[4] * iVar3;
        iVar3 = *piVar1;
        piVar4[5] = (piVar4[3] * param_3[1] + piVar4[2] * param_3[2] + piVar4[-1] * param_3[5] +
                     piVar4[4] * *param_3 + *piVar1 * param_3[3] + iVar2 >> (param_6 & 0x1f)) +
                    *(int *)((longlong)in_R10 + (0x14 - param_7) + (longlong)piVar4);
        param_2 = param_2 - 1;
        piVar4 = piVar1;
      } while (param_2 != 0);
      return;
    }
    if (param_4 != 8) {
      iVar3 = *(int *)(param_7 + -0x18);
      piVar4 = (int *)(param_7 + -0x18);
      do {
        piVar1 = piVar4 + 1;
        iVar2 = param_3[5] * iVar3;
        iVar3 = *piVar1;
        piVar4[6] = (piVar4[5] * *param_3 + piVar4[4] * param_3[1] + piVar4[3] * param_3[2] +
                     piVar4[2] * param_3[3] + piVar4[-1] * param_3[6] + *piVar1 * param_3[4] + iVar2
                    >> (param_6 & 0x1f)) +
                    *(int *)((longlong)in_R10 + (0x18 - param_7) + (longlong)piVar4);
        param_2 = param_2 - 1;
        piVar4 = piVar1;
      } while (param_2 != 0);
      return;
    }
    iVar3 = *(int *)(param_7 + -0x1c);
    piVar4 = (int *)(param_7 + -0x1c);
    do {
      piVar1 = piVar4 + 1;
      iVar2 = param_3[6] * iVar3;
      iVar3 = *piVar1;
      piVar4[7] = (piVar4[5] * param_3[1] + piVar4[4] * param_3[2] + piVar4[3] * param_3[3] +
                   piVar4[2] * param_3[4] + piVar4[-1] * param_3[7] + piVar4[6] * *param_3 +
                   *piVar1 * param_3[5] + iVar2 >> (param_6 & 0x1f)) +
                  *(int *)((longlong)in_R10 + (0x1c - param_7) + (longlong)piVar4);
      param_2 = param_2 - 1;
      piVar4 = piVar1;
    } while (param_2 != 0);
    return;
  }
  if (param_4 < 3) {
    if (param_4 != 2) {
      param_2 = param_2 & 0xffffffff;
      piVar4 = in_R10;
      do {
        *(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)(piVar4 + 1)) =
             (*(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)piVar4) * *param_3 >>
             (param_6 & 0x1f)) + *piVar4;
        param_2 = param_2 - 1;
        piVar4 = piVar4 + 1;
      } while (param_2 != 0);
      return;
    }
    iVar3 = *(int *)(param_7 + -4);
    piVar4 = (int *)(param_7 + -4);
    param_2 = param_2 & 0xffffffff;
    do {
      piVar1 = piVar4 + -1;
      piVar4 = piVar4 + 1;
      iVar3 = *(int *)(((longlong)in_R10 - param_7) + (longlong)piVar4) +
              (*piVar1 * param_3[1] + *param_3 * iVar3 >> (param_6 & 0x1f));
      *piVar4 = iVar3;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return;
  }
  param_2 = param_2 & 0xffffffff;
  if (param_4 != 4) {
    iVar3 = *(int *)(param_7 + -8);
    piVar4 = (int *)(param_7 + -8);
    do {
      piVar1 = piVar4 + 1;
      iVar2 = param_3[1] * iVar3;
      iVar3 = *piVar1;
      piVar4[2] = (piVar4[-1] * param_3[2] + iVar2 + *param_3 * *piVar1 >> (param_6 & 0x1f)) +
                  *(int *)((longlong)in_R10 + (8 - param_7) + (longlong)piVar4);
      param_2 = param_2 - 1;
      piVar4 = piVar1;
    } while (param_2 != 0);
    return;
  }
  iVar3 = *(int *)(param_7 + -0xc);
  piVar4 = (int *)(param_7 + -0xc);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[2] * iVar3;
    iVar3 = *piVar1;
    piVar4[3] = (piVar4[-1] * param_3[3] + piVar4[2] * *param_3 + iVar2 + param_3[1] * *piVar1 >>
                (param_6 & 0x1f)) + *(int *)((longlong)in_R10 + (0xc - param_7) + (longlong)piVar4);
    param_2 = param_2 - 1;
    piVar4 = piVar1;
  } while (param_2 != 0);
  return;
}





// 函数: void FUN_180826000(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
void FUN_180826000(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6)

{
  int *piVar1;
  int iVar2;
  longlong in_RAX;
  int iVar3;
  longlong unaff_RBX;
  longlong in_R10;
  int *piVar4;
  
  iVar3 = *(int *)(in_RAX + -0x28);
  piVar4 = (int *)(in_RAX + -0x28);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[9] * iVar3;
    iVar3 = *piVar1;
    piVar4[10] = (piVar4[9] * *param_3 + piVar4[8] * param_3[1] + piVar4[7] * param_3[2] +
                  piVar4[6] * param_3[3] + piVar4[5] * param_3[4] + piVar4[4] * param_3[5] +
                  piVar4[3] * param_3[6] + piVar4[2] * param_3[7] + piVar4[-1] * param_3[10] + iVar2
                  + param_3[8] * *piVar1 >> (param_6 & 0x1f)) +
                 *(int *)(in_R10 + 0x28 + (longlong)piVar4);
    unaff_RBX = unaff_RBX + -1;
    piVar4 = piVar1;
  } while (unaff_RBX != 0);
  return;
}





// 函数: void FUN_1808260b7(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
void FUN_1808260b7(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6)

{
  int *piVar1;
  int iVar2;
  longlong in_RAX;
  int iVar3;
  longlong unaff_RBX;
  longlong in_R10;
  int *piVar4;
  bool in_ZF;
  
  if (in_ZF) {
    iVar3 = *(int *)(in_RAX + -0x24);
    piVar4 = (int *)(in_RAX + -0x24);
    do {
      piVar1 = piVar4 + 1;
      iVar2 = param_3[8] * iVar3;
      iVar3 = *piVar1;
      piVar4[9] = (piVar4[7] * param_3[1] + piVar4[6] * param_3[2] + piVar4[5] * param_3[3] +
                   piVar4[4] * param_3[4] + piVar4[3] * param_3[5] + piVar4[2] * param_3[6] +
                   piVar4[-1] * param_3[9] + piVar4[8] * *param_3 + iVar2 + param_3[7] * *piVar1 >>
                  (param_6 & 0x1f)) + *(int *)((in_R10 - in_RAX) + 0x24 + (longlong)piVar4);
      unaff_RBX = unaff_RBX + -1;
      piVar4 = piVar1;
    } while (unaff_RBX != 0);
    return;
  }
  iVar3 = *(int *)(in_RAX + -0x20);
  piVar4 = (int *)(in_RAX + -0x20);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[7] * iVar3;
    iVar3 = *piVar1;
    piVar4[8] = (piVar4[7] * *param_3 + piVar4[6] * param_3[1] + piVar4[5] * param_3[2] +
                 piVar4[4] * param_3[3] + piVar4[3] * param_3[4] + piVar4[2] * param_3[5] +
                 piVar4[-1] * param_3[8] + iVar2 + param_3[6] * *piVar1 >> (param_6 & 0x1f)) +
                *(int *)((in_R10 - in_RAX) + 0x20 + (longlong)piVar4);
    unaff_RBX = unaff_RBX + -1;
    piVar4 = piVar1;
  } while (unaff_RBX != 0);
  return;
}





// 函数: void FUN_18082616c(undefined8 param_1,undefined8 param_2,int *param_3)
void FUN_18082616c(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong in_RAX;
  int iVar3;
  longlong unaff_RBX;
  byte unaff_SIL;
  longlong in_R10;
  int *piVar4;
  
  iVar3 = *(int *)(in_RAX + -0x20);
  piVar4 = (int *)(in_RAX + -0x20);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[7] * iVar3;
    iVar3 = *piVar1;
    piVar4[8] = (piVar4[7] * *param_3 + piVar4[6] * param_3[1] + piVar4[5] * param_3[2] +
                 piVar4[4] * param_3[3] + piVar4[3] * param_3[4] + piVar4[2] * param_3[5] +
                 piVar4[-1] * param_3[8] + iVar2 + param_3[6] * *piVar1 >> (unaff_SIL & 0x1f)) +
                *(int *)((in_R10 - in_RAX) + 0x20 + (longlong)piVar4);
    unaff_RBX = unaff_RBX + -1;
    piVar4 = piVar1;
  } while (unaff_RBX != 0);
  return;
}





// 函数: void FUN_18082620d(undefined8 param_1,ulonglong param_2,int *param_3,uint param_4,undefined8 param_5
void FUN_18082620d(undefined8 param_1,ulonglong param_2,int *param_3,uint param_4,undefined8 param_5
                  ,byte param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_R10;
  
  if (param_4 < 5) {
    if (param_4 < 3) {
      if (param_4 == 2) {
        iVar3 = *(int *)(param_7 + -4);
        piVar4 = (int *)(param_7 + -4);
        param_2 = param_2 & 0xffffffff;
        do {
          piVar1 = piVar4 + -1;
          piVar4 = piVar4 + 1;
          iVar3 = *(int *)(((longlong)in_R10 - param_7) + (longlong)piVar4) +
                  (*piVar1 * param_3[1] + *param_3 * iVar3 >> (param_6 & 0x1f));
          *piVar4 = iVar3;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
        return;
      }
      param_2 = param_2 & 0xffffffff;
      piVar4 = in_R10;
      do {
        *(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)(piVar4 + 1)) =
             (*(int *)((param_7 - (longlong)in_R10) + -4 + (longlong)piVar4) * *param_3 >>
             (param_6 & 0x1f)) + *piVar4;
        param_2 = param_2 - 1;
        piVar4 = piVar4 + 1;
      } while (param_2 != 0);
      return;
    }
    param_2 = param_2 & 0xffffffff;
    if (param_4 == 4) {
      iVar3 = *(int *)(param_7 + -0xc);
      piVar4 = (int *)(param_7 + -0xc);
      do {
        piVar1 = piVar4 + 1;
        iVar2 = param_3[2] * iVar3;
        iVar3 = *piVar1;
        piVar4[3] = (piVar4[-1] * param_3[3] + piVar4[2] * *param_3 + iVar2 + param_3[1] * *piVar1
                    >> (param_6 & 0x1f)) +
                    *(int *)((longlong)in_R10 + (0xc - param_7) + (longlong)piVar4);
        param_2 = param_2 - 1;
        piVar4 = piVar1;
      } while (param_2 != 0);
      return;
    }
    iVar3 = *(int *)(param_7 + -8);
    piVar4 = (int *)(param_7 + -8);
    do {
      piVar1 = piVar4 + 1;
      iVar2 = param_3[1] * iVar3;
      iVar3 = *piVar1;
      piVar4[2] = (piVar4[-1] * param_3[2] + iVar2 + *param_3 * *piVar1 >> (param_6 & 0x1f)) +
                  *(int *)((longlong)in_R10 + (8 - param_7) + (longlong)piVar4);
      param_2 = param_2 - 1;
      piVar4 = piVar1;
    } while (param_2 != 0);
    return;
  }
  param_2 = param_2 & 0xffffffff;
  if (param_4 < 7) {
    if (param_4 == 6) {
      iVar3 = *(int *)(param_7 + -0x14);
      piVar4 = (int *)(param_7 + -0x14);
      do {
        piVar1 = piVar4 + 1;
        iVar2 = param_3[4] * iVar3;
        iVar3 = *piVar1;
        piVar4[5] = (piVar4[3] * param_3[1] + piVar4[2] * param_3[2] + piVar4[-1] * param_3[5] +
                     piVar4[4] * *param_3 + *piVar1 * param_3[3] + iVar2 >> (param_6 & 0x1f)) +
                    *(int *)((longlong)in_R10 + (0x14 - param_7) + (longlong)piVar4);
        param_2 = param_2 - 1;
        piVar4 = piVar1;
      } while (param_2 != 0);
      return;
    }
    iVar3 = *(int *)(param_7 + -0x10);
    piVar4 = (int *)(param_7 + -0x10);
    do {
      piVar1 = piVar4 + 1;
      iVar2 = param_3[3] * iVar3;
      iVar3 = *piVar1;
      piVar4[4] = (piVar4[3] * *param_3 + piVar4[2] * param_3[1] + piVar4[-1] * param_3[4] + iVar2 +
                   *piVar1 * param_3[2] >> (param_6 & 0x1f)) +
                  *(int *)((longlong)in_R10 + (0x10 - param_7) + (longlong)piVar4);
      param_2 = param_2 - 1;
      piVar4 = piVar1;
    } while (param_2 != 0);
    return;
  }
  if (param_4 == 8) {
    iVar3 = *(int *)(param_7 + -0x1c);
    piVar4 = (int *)(param_7 + -0x1c);
    do {
      piVar1 = piVar4 + 1;
      iVar2 = param_3[6] * iVar3;
      iVar3 = *piVar1;
      piVar4[7] = (piVar4[5] * param_3[1] + piVar4[4] * param_3[2] + piVar4[3] * param_3[3] +
                   piVar4[2] * param_3[4] + piVar4[-1] * param_3[7] + piVar4[6] * *param_3 +
                   *piVar1 * param_3[5] + iVar2 >> (param_6 & 0x1f)) +
                  *(int *)((longlong)in_R10 + (0x1c - param_7) + (longlong)piVar4);
      param_2 = param_2 - 1;
      piVar4 = piVar1;
    } while (param_2 != 0);
    return;
  }
  iVar3 = *(int *)(param_7 + -0x18);
  piVar4 = (int *)(param_7 + -0x18);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[5] * iVar3;
    iVar3 = *piVar1;
    piVar4[6] = (piVar4[5] * *param_3 + piVar4[4] * param_3[1] + piVar4[3] * param_3[2] +
                 piVar4[2] * param_3[3] + piVar4[-1] * param_3[6] + *piVar1 * param_3[4] + iVar2 >>
                (param_6 & 0x1f)) + *(int *)((longlong)in_R10 + (0x18 - param_7) + (longlong)piVar4)
    ;
    param_2 = param_2 - 1;
    piVar4 = piVar1;
  } while (param_2 != 0);
  return;
}





// 函数: void FUN_1808262c2(undefined8 param_1,undefined8 param_2,int *param_3)
void FUN_1808262c2(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong in_RAX;
  int iVar3;
  longlong unaff_RBX;
  byte unaff_SIL;
  longlong in_R10;
  int *piVar4;
  
  iVar3 = *(int *)(in_RAX + -0x18);
  piVar4 = (int *)(in_RAX + -0x18);
  do {
    piVar1 = piVar4 + 1;
    iVar2 = param_3[5] * iVar3;
    iVar3 = *piVar1;
    piVar4[6] = (piVar4[5] * *param_3 + piVar4[4] * param_3[1] + piVar4[3] * param_3[2] +
                 piVar4[2] * param_3[3] + piVar4[-1] * param_3[6] + *piVar1 * param_3[4] + iVar2 >>
                (unaff_SIL & 0x1f)) + *(int *)(in_R10 + 0x18 + (longlong)piVar4);
    unaff_RBX = unaff_RBX + -1;
    piVar4 = piVar1;
  } while (unaff_RBX != 0);
  return;
}





