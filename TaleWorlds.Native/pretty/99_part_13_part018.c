#include "TaleWorlds.Native.Split.h"

// 99_part_13_part018.c - 3 个函数

// 函数: void FUN_1808af6e8(void)
void FUN_1808af6e8(void)

{
  return;
}



undefined8 FUN_1808af700(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar5) - uVar5) < param_2) &&
     (uVar3 = FUN_1808af110(param_1,param_2), (int)uVar3 != 0)) {
    return uVar3;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    lVar2 = *param_1;
    if (0 < param_2 - iVar1) {
      lVar4 = 0;
      do {
        *(undefined8 *)(lVar2 + (longlong)iVar1 * 8 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < param_2 - iVar1);
    }
  }
  *(int *)(param_1 + 1) = param_2;
  return 0;
}



undefined8 FUN_1808af770(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar7 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  if ((param_2 <= (int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar7) - uVar7)) ||
     (uVar5 = FUN_180883750(param_1,param_2), (int)uVar5 == 0)) {
    iVar1 = (int)param_1[1];
    if (iVar1 < param_2) {
      lVar9 = (longlong)(param_2 - iVar1);
      if (0 < param_2 - iVar1) {
        lVar8 = (longlong)iVar1 * 0x1c + 0x14 + *param_1;
        do {
          puVar6 = (undefined4 *)FUN_180847820();
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          uVar4 = puVar6[3];
          *(undefined4 *)(lVar8 + -0x14) = *puVar6;
          *(undefined4 *)(lVar8 + -0x10) = uVar2;
          *(undefined4 *)(lVar8 + -0xc) = uVar3;
          *(undefined4 *)(lVar8 + -8) = uVar4;
          *(undefined8 *)(lVar8 + -4) = 0;
          *(undefined1 *)(lVar8 + 4) = 0;
          lVar9 = lVar9 + -1;
          lVar8 = lVar8 + 0x1c;
        } while (lVar9 != 0);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 FUN_1808af79e(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *unaff_RBP;
  int unaff_ESI;
  longlong lVar7;
  
  iVar4 = unaff_ESI - (int)param_1;
  lVar7 = (longlong)iVar4;
  if (0 < iVar4) {
    lVar6 = param_1 * 0x1c + 0x14 + *unaff_RBP;
    do {
      puVar5 = (undefined4 *)FUN_180847820();
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *(undefined4 *)(lVar6 + -0x14) = *puVar5;
      *(undefined4 *)(lVar6 + -0x10) = uVar1;
      *(undefined4 *)(lVar6 + -0xc) = uVar2;
      *(undefined4 *)(lVar6 + -8) = uVar3;
      *(undefined8 *)(lVar6 + -4) = 0;
      *(undefined1 *)(lVar6 + 4) = 0;
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + 0x1c;
    } while (lVar7 != 0);
  }
  *(int *)(unaff_RBP + 1) = unaff_ESI;
  return 0;
}



undefined8 FUN_1808af7bf(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  
  do {
    puVar4 = (undefined4 *)FUN_180847820();
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 *)(unaff_RBX + -0x14) = *puVar4;
    *(undefined4 *)(unaff_RBX + -0x10) = uVar1;
    *(undefined4 *)(unaff_RBX + -0xc) = uVar2;
    *(undefined4 *)(unaff_RBX + -8) = uVar3;
    *(undefined8 *)(unaff_RBX + -4) = 0;
    *(undefined1 *)(unaff_RBX + 4) = 0;
    unaff_RDI = unaff_RDI + -1;
    unaff_RBX = unaff_RBX + 0x1c;
  } while (unaff_RDI != 0);
  *(undefined4 *)(unaff_RBP + 8) = unaff_ESI;
  return 0;
}



undefined8 FUN_1808af7ea(void)

{
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_RBP + 8) = unaff_ESI;
  return 0;
}



undefined8 FUN_1808af7f4(void)

{
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_RBP + 8) = unaff_ESI;
  return 0;
}



undefined8 FUN_1808af810(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar7 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  if ((param_2 <= (int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar7) - uVar7)) ||
     (uVar5 = FUN_18084d3f0(param_1,param_2), (int)uVar5 == 0)) {
    iVar1 = (int)param_1[1];
    if (iVar1 < param_2) {
      lVar9 = (longlong)(param_2 - iVar1);
      if (0 < param_2 - iVar1) {
        lVar8 = *param_1 + (longlong)iVar1 * 0x18 + 0x14;
        do {
          puVar6 = (undefined4 *)FUN_180847820();
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          uVar4 = puVar6[3];
          *(undefined4 *)(lVar8 + -0x14) = *puVar6;
          *(undefined4 *)(lVar8 + -0x10) = uVar2;
          *(undefined4 *)(lVar8 + -0xc) = uVar3;
          *(undefined4 *)(lVar8 + -8) = uVar4;
          *(undefined8 *)(lVar8 + -4) = 0;
          lVar9 = lVar9 + -1;
          lVar8 = lVar8 + 0x18;
        } while (lVar9 != 0);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 FUN_1808af846(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong in_RAX;
  undefined4 *puVar4;
  longlong lVar5;
  int unaff_ESI;
  longlong lVar6;
  longlong unaff_R14;
  
  lVar6 = (longlong)(unaff_ESI - param_2);
  if (0 < unaff_ESI - param_2) {
    lVar5 = in_RAX + param_1 * 8 + 0x14;
    do {
      puVar4 = (undefined4 *)FUN_180847820();
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *(undefined4 *)(lVar5 + -0x14) = *puVar4;
      *(undefined4 *)(lVar5 + -0x10) = uVar1;
      *(undefined4 *)(lVar5 + -0xc) = uVar2;
      *(undefined4 *)(lVar5 + -8) = uVar3;
      *(undefined8 *)(lVar5 + -4) = 0;
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 != 0);
  }
  *(int *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}



undefined8 FUN_1808af863(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  do {
    puVar4 = (undefined4 *)FUN_180847820();
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 *)(unaff_RBX + -0x14) = *puVar4;
    *(undefined4 *)(unaff_RBX + -0x10) = uVar1;
    *(undefined4 *)(unaff_RBX + -0xc) = uVar2;
    *(undefined4 *)(unaff_RBX + -8) = uVar3;
    *(undefined8 *)(unaff_RBX + -4) = 0;
    unaff_RDI = unaff_RDI + -1;
    unaff_RBX = unaff_RBX + 0x18;
  } while (unaff_RDI != 0);
  *(undefined4 *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}



undefined8 FUN_1808af88f(void)

{
  undefined4 unaff_ESI;
  longlong unaff_R14;
  
  *(undefined4 *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}



undefined8 FUN_1808af899(void)

{
  undefined4 unaff_ESI;
  longlong unaff_R14;
  
  *(undefined4 *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808af8b0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = 0;
  uVar5 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  if ((int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar5) - uVar5) < param_2) {
    if (param_2 < (int)param_1[1]) {
      return 0x1c;
    }
    if (param_2 != 0) {
      if ((0x3ffffffe < param_2 * 0x10 - 1U) ||
         (lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x10,
                                &UNK_180957f70,0xf4,0,0,1), lVar3 == 0)) {
        return 0x26;
      }
      iVar1 = (int)param_1[1];
      lVar4 = (longlong)iVar1;
      if (iVar1 != 0) {
        iVar8 = 0;
        lVar2 = *param_1;
        if (0 < iVar1) {
          puVar6 = (undefined4 *)(lVar3 + 0xc);
          lVar9 = lVar2 - lVar3;
          do {
            *(undefined8 *)(puVar6 + -1) = 0;
            *(undefined8 *)(puVar6 + -3) = 0;
            *(undefined8 *)(puVar6 + -3) = *(undefined8 *)(lVar9 + -0xc + (longlong)puVar6);
            puVar6[-1] = *(undefined4 *)(lVar9 + -4 + (longlong)puVar6);
            *puVar6 = *(undefined4 *)(lVar9 + (longlong)puVar6);
            *(undefined8 *)(lVar9 + -0xc + (longlong)puVar6) = 0;
            *(undefined8 *)(lVar9 + -4 + (longlong)puVar6) = 0;
            FUN_180840270((longlong)iVar8 * 0x10 + lVar2);
            iVar8 = iVar8 + 1;
            puVar6 = puVar6 + 4;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
    }
    if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = lVar3;
    *(int *)((longlong)param_1 + 0xc) = param_2;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    lVar3 = (longlong)(param_2 - iVar1);
    if (0 < param_2 - iVar1) {
      lVar4 = (longlong)iVar1 * 0x10 + *param_1 + 0xc;
      do {
        *(undefined8 *)(lVar4 + -0xc) = 0;
        *(undefined8 *)(lVar4 + -4) = 0;
        lVar4 = lVar4 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *(int *)(param_1 + 1) = param_2;
      return 0;
    }
  }
  else if (param_2 < iVar1) {
    lVar3 = (longlong)param_2 * 0x10 + *param_1;
    if (0 < iVar1 - param_2) {
      uVar7 = (ulonglong)(uint)(iVar1 - param_2);
      do {
        FUN_180840270(lVar3);
        lVar3 = lVar3 + 0x10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  *(int *)(param_1 + 1) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808af949(void)

{
  longlong in_RAX;
  longlong lVar1;
  undefined4 *puVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  int iVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  lVar1 = *unaff_RDI;
  if (0 < (int)in_RAX) {
    puVar2 = (undefined4 *)(unaff_RBP + 0xc);
    lVar6 = lVar1 - unaff_RBP;
    do {
      *(undefined8 *)(puVar2 + -1) = 0;
      *(undefined8 *)(puVar2 + -3) = 0;
      *(undefined8 *)(puVar2 + -3) = *(undefined8 *)(lVar6 + -0xc + (longlong)puVar2);
      puVar2[-1] = *(undefined4 *)(lVar6 + -4 + (longlong)puVar2);
      *puVar2 = *(undefined4 *)(lVar6 + (longlong)puVar2);
      *(undefined8 *)(lVar6 + -0xc + (longlong)puVar2) = 0;
      *(undefined8 *)(lVar6 + -4 + (longlong)puVar2) = 0;
      FUN_180840270((longlong)iVar5 * 0x10 + lVar1);
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 4;
      in_RAX = in_RAX + -1;
    } while (in_RAX != 0);
  }
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  iVar4 = (int)unaff_RSI;
  *(int *)((longlong)unaff_RDI + 0xc) = iVar4;
  iVar5 = (int)unaff_RDI[1];
  if (iVar5 < iVar4) {
    lVar1 = (longlong)(iVar4 - iVar5);
    if (0 < iVar4 - iVar5) {
      lVar6 = (longlong)iVar5 * 0x10 + *unaff_RDI + 0xc;
      do {
        *(undefined8 *)(lVar6 + -0xc) = 0;
        *(undefined8 *)(lVar6 + -4) = 0;
        lVar6 = lVar6 + 0x10;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      *(int *)(unaff_RDI + 1) = iVar4;
      return 0;
    }
  }
  else if (iVar4 < iVar5) {
    lVar1 = unaff_RSI * 0x10 + *unaff_RDI;
    if (0 < iVar5 - iVar4) {
      uVar3 = (ulonglong)(uint)(iVar5 - iVar4);
      do {
        FUN_180840270(lVar1);
        lVar1 = lVar1 + 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(int *)(unaff_RDI + 1) = iVar4;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808af968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int unaff_R12D;
  longlong unaff_R13;
  longlong lVar6;
  longlong unaff_R15;
  
  puVar3 = (undefined4 *)(unaff_RBP + 0xc);
  lVar6 = unaff_R13 - unaff_RBP;
  do {
    *(undefined8 *)(puVar3 + -1) = 0;
    *(undefined8 *)(puVar3 + -3) = param_3;
    *(undefined8 *)(puVar3 + -3) = *(undefined8 *)(lVar6 + -0xc + (longlong)puVar3);
    puVar3[-1] = *(undefined4 *)(lVar6 + -4 + (longlong)puVar3);
    *puVar3 = *(undefined4 *)(lVar6 + (longlong)puVar3);
    *(undefined8 *)(lVar6 + -0xc + (longlong)puVar3) = param_3;
    *(undefined8 *)(lVar6 + -4 + (longlong)puVar3) = 0;
    FUN_180840270((longlong)unaff_R12D * 0x10 + unaff_R13);
    unaff_R12D = unaff_R12D + 1;
    puVar3 = puVar3 + 4;
    param_3 = 0;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  iVar5 = (int)unaff_RSI;
  *(int *)((longlong)unaff_RDI + 0xc) = iVar5;
  iVar1 = (int)unaff_RDI[1];
  if (iVar1 < iVar5) {
    lVar6 = (longlong)(iVar5 - iVar1);
    if (0 < iVar5 - iVar1) {
      lVar2 = (longlong)iVar1 * 0x10 + *unaff_RDI + 0xc;
      do {
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0;
        lVar2 = lVar2 + 0x10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *(int *)(unaff_RDI + 1) = iVar5;
      return 0;
    }
  }
  else if (iVar5 < iVar1) {
    lVar6 = unaff_RSI * 0x10 + *unaff_RDI;
    if (0 < iVar1 - iVar5) {
      uVar4 = (ulonglong)(uint)(iVar1 - iVar5);
      do {
        FUN_180840270(lVar6);
        lVar6 = lVar6 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(int *)(unaff_RDI + 1) = iVar5;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808af9db(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  iVar5 = (int)unaff_RSI;
  *(int *)((longlong)unaff_RDI + 0xc) = iVar5;
  iVar1 = (int)unaff_RDI[1];
  if (iVar1 < iVar5) {
    lVar3 = (longlong)(iVar5 - iVar1);
    if (0 < iVar5 - iVar1) {
      lVar2 = (longlong)iVar1 * 0x10 + *unaff_RDI + 0xc;
      do {
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0;
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *(int *)(unaff_RDI + 1) = iVar5;
      return 0;
    }
  }
  else if (iVar5 < iVar1) {
    lVar3 = unaff_RSI * 0x10 + *unaff_RDI;
    if (0 < iVar1 - iVar5) {
      uVar4 = (ulonglong)(uint)(iVar1 - iVar5);
      do {
        FUN_180840270(lVar3);
        lVar3 = lVar3 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(int *)(unaff_RDI + 1) = iVar5;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808af9ea(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  iVar5 = (int)unaff_RSI;
  *(int *)((longlong)unaff_RDI + 0xc) = iVar5;
  iVar1 = (int)unaff_RDI[1];
  if (iVar1 < iVar5) {
    lVar3 = (longlong)(iVar5 - iVar1);
    if (0 < iVar5 - iVar1) {
      lVar2 = (longlong)iVar1 * 0x10 + *unaff_RDI + 0xc;
      do {
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0;
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *(int *)(unaff_RDI + 1) = iVar5;
      return 0;
    }
  }
  else if (iVar5 < iVar1) {
    lVar3 = unaff_RSI * 0x10 + *unaff_RDI;
    if (0 < iVar1 - iVar5) {
      uVar4 = (ulonglong)(uint)(iVar1 - iVar5);
      do {
        FUN_180840270(lVar3);
        lVar3 = lVar3 + 0x10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(int *)(unaff_RDI + 1) = iVar5;
  return 0;
}



undefined8 FUN_1808afac0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar7 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  if ((param_2 <= (int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar7) - uVar7)) ||
     (uVar5 = FUN_18084d520(param_1,param_2), (int)uVar5 == 0)) {
    iVar1 = (int)param_1[1];
    if (iVar1 < param_2) {
      lVar9 = (longlong)(param_2 - iVar1);
      if (0 < param_2 - iVar1) {
        lVar8 = *param_1 + (longlong)iVar1 * 0x28 + 0x1c;
        do {
          puVar6 = (undefined4 *)FUN_180847820();
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          uVar4 = puVar6[3];
          *(undefined4 *)(lVar8 + -0x1c) = *puVar6;
          *(undefined4 *)(lVar8 + -0x18) = uVar2;
          *(undefined4 *)(lVar8 + -0x14) = uVar3;
          *(undefined4 *)(lVar8 + -0x10) = uVar4;
          *(undefined8 *)(lVar8 + -0xc) = 0;
          *(undefined8 *)(lVar8 + -4) = 0;
          *(undefined8 *)(lVar8 + 4) = 0;
          lVar9 = lVar9 + -1;
          lVar8 = lVar8 + 0x28;
        } while (lVar9 != 0);
      }
    }
    else if (param_2 < iVar1) {
      if (0 < iVar1 - param_2) {
        uVar10 = (ulonglong)(uint)(iVar1 - param_2);
        lVar9 = *param_1 + 0x10 + (longlong)param_2 * 0x28;
        do {
          FUN_180840270(lVar9);
          lVar9 = lVar9 + 0x28;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    uVar5 = 0;
    *(int *)(param_1 + 1) = param_2;
  }
  return uVar5;
}



undefined8 FUN_1808afaf0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong unaff_RSI;
  longlong lVar8;
  ulonglong uVar9;
  longlong *unaff_R14;
  
  iVar7 = (int)unaff_RSI;
  iVar5 = (int)param_2;
  if (iVar5 < iVar7) {
    lVar8 = (longlong)(iVar7 - iVar5);
    if (0 < iVar7 - iVar5) {
      lVar6 = *unaff_R14 + param_2 * 0x28 + 0x1c;
      do {
        puVar4 = (undefined4 *)FUN_180847820();
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        *(undefined4 *)(lVar6 + -0x1c) = *puVar4;
        *(undefined4 *)(lVar6 + -0x18) = uVar1;
        *(undefined4 *)(lVar6 + -0x14) = uVar2;
        *(undefined4 *)(lVar6 + -0x10) = uVar3;
        *(undefined8 *)(lVar6 + -0xc) = 0;
        *(undefined8 *)(lVar6 + -4) = 0;
        *(undefined8 *)(lVar6 + 4) = 0;
        lVar8 = lVar8 + -1;
        lVar6 = lVar6 + 0x28;
      } while (lVar8 != 0);
    }
  }
  else if (iVar7 < iVar5) {
    if (0 < iVar5 - iVar7) {
      uVar9 = (ulonglong)(uint)(iVar5 - iVar7);
      lVar8 = *unaff_R14 + 0x10 + unaff_RSI * 0x28;
      do {
        FUN_180840270(lVar8);
        lVar8 = lVar8 + 0x28;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  *(int *)(unaff_R14 + 1) = iVar7;
  return 0;
}



undefined8 FUN_1808afb18(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  do {
    puVar4 = (undefined4 *)FUN_180847820();
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 *)(unaff_RBX + -0x1c) = *puVar4;
    *(undefined4 *)(unaff_RBX + -0x18) = uVar1;
    *(undefined4 *)(unaff_RBX + -0x14) = uVar2;
    *(undefined4 *)(unaff_RBX + -0x10) = uVar3;
    *(undefined8 *)(unaff_RBX + -0xc) = 0;
    *(undefined8 *)(unaff_RBX + -4) = 0;
    *(undefined8 *)(unaff_RBX + 4) = 0;
    unaff_RDI = unaff_RDI + -1;
    unaff_RBX = unaff_RBX + 0x28;
  } while (unaff_RDI != 0);
  *(undefined4 *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}



undefined8 FUN_1808afb49(undefined8 param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  longlong *unaff_R14;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    uVar1 = param_2 - (int)unaff_RSI;
    if (0 < (int)uVar1) {
      uVar3 = (ulonglong)uVar1;
      lVar2 = *unaff_R14 + 0x10 + unaff_RSI * 0x28;
      do {
        FUN_180840270(lVar2);
        lVar2 = lVar2 + 0x28;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *(int *)(unaff_R14 + 1) = (int)unaff_RSI;
  return 0;
}






// 函数: void FUN_1808afb84(void)
void FUN_1808afb84(void)

{
  return;
}



undefined8 FUN_1808afb90(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  uVar7 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  if ((param_2 <= (int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar7) - uVar7)) ||
     (uVar5 = FUN_18084d620(param_1,param_2), (int)uVar5 == 0)) {
    iVar1 = (int)param_1[1];
    if (iVar1 < param_2) {
      lVar9 = (longlong)(param_2 - iVar1);
      if (0 < param_2 - iVar1) {
        puVar8 = (undefined4 *)((longlong)iVar1 * 0x20 + 0x10 + *param_1);
        do {
          puVar6 = (undefined4 *)FUN_180847820();
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          uVar4 = puVar6[3];
          puVar8[-4] = *puVar6;
          puVar8[-3] = uVar2;
          puVar8[-2] = uVar3;
          puVar8[-1] = uVar4;
          *puVar8 = 4;
          puVar8[1] = 4;
          puVar6 = (undefined4 *)FUN_18084da10();
          puVar8[2] = *puVar6;
          puVar8[3] = 0;
          lVar9 = lVar9 + -1;
          puVar8 = puVar8 + 8;
        } while (lVar9 != 0);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 FUN_1808afbbe(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  int unaff_EDI;
  
  iVar4 = unaff_EDI - (int)param_1;
  lVar7 = (longlong)iVar4;
  if (0 < iVar4) {
    puVar6 = (undefined4 *)(param_1 * 0x20 + 0x10 + *unaff_RSI);
    do {
      puVar5 = (undefined4 *)FUN_180847820();
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      puVar6[-4] = *puVar5;
      puVar6[-3] = uVar1;
      puVar6[-2] = uVar2;
      puVar6[-1] = uVar3;
      *puVar6 = 4;
      puVar6[1] = 4;
      puVar5 = (undefined4 *)FUN_18084da10();
      puVar6[2] = *puVar5;
      puVar6[3] = 0;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 8;
    } while (lVar7 != 0);
  }
  *(int *)(unaff_RSI + 1) = unaff_EDI;
  return 0;
}



undefined8 FUN_1808afbe1(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  
  do {
    puVar4 = (undefined4 *)FUN_180847820();
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    unaff_RBX[-4] = *puVar4;
    unaff_RBX[-3] = uVar1;
    unaff_RBX[-2] = uVar2;
    unaff_RBX[-1] = uVar3;
    *unaff_RBX = 4;
    unaff_RBX[1] = 4;
    puVar4 = (undefined4 *)FUN_18084da10();
    unaff_RBX[2] = *puVar4;
    unaff_RBX[3] = 0;
    unaff_RBP = unaff_RBP + -1;
    unaff_RBX = unaff_RBX + 8;
  } while (unaff_RBP != 0);
  *(undefined4 *)(unaff_RSI + 8) = unaff_EDI;
  return 0;
}



undefined8 FUN_1808afc26(void)

{
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  
  *(undefined4 *)(unaff_RSI + 8) = unaff_EDI;
  return 0;
}



undefined8 FUN_1808afc30(void)

{
  longlong unaff_RSI;
  undefined4 unaff_EDI;
  
  *(undefined4 *)(unaff_RSI + 8) = unaff_EDI;
  return 0;
}



undefined8 * FUN_1808afc40(longlong param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x30))(param_1 + -0x30,&uStack_18);
  *param_2 = uStack_18;
  param_2[1] = uStack_10;
  return param_2;
}



undefined8 FUN_1808afc70(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  uint auStackX_8 [2];
  uint auStackX_18 [2];
  
  if (0x3a < *(uint *)(param_1 + 8)) {
    if (*(int *)(param_1[1] + 0x18) == 0) {
      uVar1 = FUN_1808aed00(*param_1,param_2,4);
      return uVar1;
    }
    return 0x1c;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  param_1 = (longlong *)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
    goto LAB_1808afd02;
  }
  if (param_1[2] != 0) {
    auStackX_8[0] = 0;
    uVar1 = func_0x00018076a7d0(*param_1,auStackX_8);
    if ((int)uVar1 != 0) goto LAB_1808afd02;
    if ((ulonglong)param_1[2] < (ulonglong)auStackX_8[0] + 4) {
      uVar1 = 0x11;
      goto LAB_1808afd02;
    }
  }
  uVar1 = FUN_180769ed0(*param_1,auStackX_18,1,4,0);
LAB_1808afd02:
  if (((int)uVar1 == 0) && (uVar1 = 0xd, auStackX_8[0] = auStackX_18[0], auStackX_18[0] < 3)) {
    uVar1 = 0;
  }
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (auStackX_8[0] == 0) {
    *param_2 = 2;
    return 0;
  }
  if (auStackX_8[0] != 1) {
    *param_2 = 0;
    return uVar1;
  }
  *param_2 = 3;
  return 0;
}



undefined8 FUN_1808afca2(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 *unaff_RBX;
  uint in_stack_00000040;
  uint in_stack_00000050;
  
  param_1 = (longlong *)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
    goto LAB_1808afd02;
  }
  if (param_1[2] != 0) {
    in_stack_00000040 = 0;
    uVar1 = func_0x00018076a7d0(*param_1,&stack0x00000040);
    if ((int)uVar1 != 0) goto LAB_1808afd02;
    if ((ulonglong)param_1[2] < (ulonglong)in_stack_00000040 + 4) {
      uVar1 = 0x11;
      goto LAB_1808afd02;
    }
  }
  uVar1 = FUN_180769ed0(*param_1,&stack0x00000050,1,4,0);
LAB_1808afd02:
  if (((int)uVar1 == 0) &&
     (uVar1 = 0xd, in_stack_00000040 = in_stack_00000050, in_stack_00000050 < 3)) {
    uVar1 = 0;
  }
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (in_stack_00000040 == 0) {
    *unaff_RBX = 2;
    return 0;
  }
  if (in_stack_00000040 == 1) {
    *unaff_RBX = 3;
    return 0;
  }
  *unaff_RBX = 0;
  return uVar1;
}



undefined8 FUN_1808afd0b(void)

{
  undefined8 in_RAX;
  undefined4 *unaff_RBX;
  undefined4 unaff_ESI;
  int in_stack_00000040;
  
  if ((int)in_RAX != 0) {
    return in_RAX;
  }
  if (in_stack_00000040 != 0) {
    if (in_stack_00000040 != 1) {
      *unaff_RBX = unaff_ESI;
      return in_RAX;
    }
    *unaff_RBX = 3;
    return 0;
  }
  *unaff_RBX = 2;
  return 0;
}



undefined8 FUN_1808afd90(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int aiStackX_8 [8];
  
  if (0x3a < *(uint *)(param_1 + 8)) {
    if (*(int *)(param_1[1] + 0x18) != 0) {
      return 0x1c;
    }
    aiStackX_8[0] = *param_2;
    uVar2 = (**(code **)**(undefined8 **)(*param_1 + 8))
                      (*(undefined8 **)(*param_1 + 8),aiStackX_8,4);
    if ((int)uVar2 == 0) {
      return 0;
    }
    return uVar2;
  }
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      aiStackX_8[0] = 0;
      goto LAB_1808afdba;
    }
    if (iVar1 == 3) {
      aiStackX_8[0] = 1;
      goto LAB_1808afdba;
    }
  }
  aiStackX_8[0] = 2;
LAB_1808afdba:
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar2 = (**(code **)**(undefined8 **)(*param_1 + 8))(*(undefined8 **)(*param_1 + 8),aiStackX_8,4);
  if ((int)uVar2 == 0) {
    return 0;
  }
  return uVar2;
}



ulonglong FUN_1808afe30(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ushort auStackX_8 [4];
  uint auStackX_18 [4];
  
  uVar2 = 0x1c;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      auStackX_18[0] = 0;
      uVar1 = func_0x00018076a7d0(*param_1,auStackX_18);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((ulonglong)param_1[2] < (ulonglong)auStackX_18[0] + 2) {
        uVar1 = 0x11;
        goto LAB_1808afea0;
      }
    }
    uVar1 = FUN_180769ed0(*param_1,auStackX_8,1,2,0);
  }
LAB_1808afea0:
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *param_2 = (uint)auStackX_8[0];
  if ((auStackX_8[0] & 0x8000) == 0) {
    return 0;
  }
  if (*param_1 == 0) goto LAB_1808aff0e;
  if (param_1[2] != 0) {
    auStackX_18[0] = 0;
    uVar2 = func_0x00018076a7d0(*param_1,auStackX_18);
    if (uVar2 != 0) goto LAB_1808aff0e;
    if ((ulonglong)param_1[2] < (ulonglong)auStackX_18[0] + 2) {
      uVar2 = 0x11;
      goto LAB_1808aff0e;
    }
  }
  uVar2 = FUN_180769ed0(*param_1,auStackX_8,1,2,0);
LAB_1808aff0e:
  if (uVar2 == 0) {
    *param_2 = *param_2 & 0x7fff;
    *param_2 = *param_2 | (uint)auStackX_8[0] << 0xf;
    return 0;
  }
  return (ulonglong)uVar2;
}






// 函数: void FUN_1808aff40(longlong param_1,uint *param_2)
void FUN_1808aff40(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uStackX_10;
  
  uVar1 = *param_2;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (uVar1 + 0x4000 < 0x8000) {
    uStackX_10 = CONCAT22(uStackX_10._2_2_,(short)uVar1) & 0xffff7fff;
    (**(code **)*puVar2)(puVar2,&uStackX_10,2);
    return;
  }
  uStackX_10 = (uVar1 & 0xffffc000 | 0x4000) * 2 | uVar1 & 0x7fff;
  (**(code **)*puVar2)(puVar2,&uStackX_10,4);
  return;
}






