#include "TaleWorlds.Native.Split.h"

// 03_rendering_part538.c - 12 个函数

// 函数: void FUN_180560330(longlong param_1)
void FUN_180560330(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,param_1 * 8 + 0xae,3);
  if (lVar1 == 0) {
    return;
  }
  puVar2 = (undefined8 *)((ulonglong)(-(int)lVar1 & 7) + lVar1);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = lVar1;
  puVar2[0x11] = (ulonglong)(-(int)(puVar2 + 0x14) & 7) + (longlong)(puVar2 + 0x14);
  puVar2[0x12] = param_1 + -1;
  return;
}



undefined8 FUN_1805603c0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar1 = (ulonglong *)param_1[8];
  uVar6 = puVar1[0x12] & puVar1[8] + 1;
  if ((uVar6 == puVar1[9]) && (puVar1[9] = *puVar1, uVar6 == *puVar1)) {
    if (puVar1[0x10] == *param_1) {
      uVar6 = param_1[9];
      if (uVar6 < 0x800) {
        uVar6 = uVar6 * 2;
      }
      uVar5 = FUN_180560330(uVar6);
      if (uVar5 == 0) {
        return 0;
      }
      param_1[9] = uVar6;
      **(ulonglong **)(uVar5 + 0x88) = *param_2;
      *(undefined8 *)(uVar5 + 8) = 1;
      *(undefined8 *)(uVar5 + 0x40) = 1;
      uVar4 = puVar1[0x10];
      *(ulonglong *)(uVar5 + 0x80) = uVar4;
      puVar1[0x10] = uVar5;
      param_1[8] = uVar5;
    }
    else {
      puVar2 = (undefined8 *)puVar1[0x10];
      puVar2[9] = *puVar2;
      lVar3 = puVar2[8];
      puVar2[9] = *puVar2;
      *(ulonglong *)(puVar2[0x11] + lVar3 * 8) = *param_2;
      uVar4 = lVar3 + 1U & puVar2[0x12];
      puVar2[8] = uVar4;
      param_1[8] = (ulonglong)puVar2;
    }
  }
  else {
    uVar4 = *param_2;
    *(ulonglong *)(puVar1[0x11] + puVar1[8] * 8) = uVar4;
    puVar1[8] = uVar6;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805604e0(ulonglong *param_1,longlong *param_2)
void FUN_1805604e0(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar3 = param_2[1] - *param_2 >> 3;
  uVar1 = param_1[1];
  uVar4 = *param_1;
  uVar9 = (longlong)(uVar1 - uVar4) >> 3;
  if (uVar9 < uVar3) {
    uVar8 = uVar3 - uVar9;
    if ((ulonglong)((longlong)(param_1[2] - uVar1) >> 3) < uVar8) {
      uVar5 = uVar9 * 2;
      if (uVar9 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar3) {
        uVar5 = uVar3;
      }
      uVar3 = uVar1;
      uVar1 = uVar7;
      if (uVar5 != 0) {
        uVar1 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 8,(char)param_1[3]);
        uVar4 = *param_1;
        uVar3 = param_1[1];
      }
      if (uVar4 != uVar3) {
                    // WARNING: Subroutine does not return
        memmove(uVar1,uVar4,uVar3 - uVar4);
      }
      if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar1,0,uVar8 * 8);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_1 = uVar1;
      param_1[2] = uVar1 + uVar5 * 8;
    }
    else if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar1,0,uVar8 * 8);
    }
  }
  else {
    uVar1 = uVar4 + uVar3 * 8;
  }
  param_1[1] = uVar1;
  uVar4 = uVar7;
  if ((longlong)(uVar1 - *param_1) >> 3 != 0) {
    do {
      uVar2 = (**(code **)**(undefined8 **)(uVar4 + *param_2))();
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *(undefined8 *)(uVar4 + *param_1) = uVar2;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 < (ulonglong)((longlong)(param_1[1] - *param_1) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805604f0(undefined8 param_1,longlong *param_2)
void FUN_1805604f0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *unaff_RBX;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar3 = param_2[1] - *param_2 >> 3;
  uVar1 = unaff_RBX[1];
  uVar4 = *unaff_RBX;
  uVar9 = (longlong)(uVar1 - uVar4) >> 3;
  if (uVar9 < uVar3) {
    uVar8 = uVar3 - uVar9;
    if ((ulonglong)((longlong)(unaff_RBX[2] - uVar1) >> 3) < uVar8) {
      uVar5 = uVar9 * 2;
      if (uVar9 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar3) {
        uVar5 = uVar3;
      }
      uVar3 = uVar1;
      uVar1 = uVar7;
      if (uVar5 != 0) {
        uVar1 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 8,(char)unaff_RBX[3]);
        uVar4 = *unaff_RBX;
        uVar3 = unaff_RBX[1];
      }
      if (uVar4 != uVar3) {
                    // WARNING: Subroutine does not return
        memmove(uVar1,uVar4,uVar3 - uVar4);
      }
      if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar1,0,uVar8 * 8);
      }
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *unaff_RBX = uVar1;
      unaff_RBX[2] = uVar1 + uVar5 * 8;
    }
    else if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar1,0,uVar8 * 8);
    }
  }
  else {
    uVar1 = uVar4 + uVar3 * 8;
  }
  unaff_RBX[1] = uVar1;
  uVar4 = uVar7;
  if ((longlong)(uVar1 - *unaff_RBX) >> 3 != 0) {
    do {
      uVar2 = (**(code **)**(undefined8 **)(uVar4 + *param_2))();
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *(undefined8 *)(uVar4 + *unaff_RBX) = uVar2;
      uVar4 = uVar4 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)((longlong)(unaff_RBX[1] - *unaff_RBX) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180560539(ulonglong param_1,ulonglong param_2,longlong param_3)
void FUN_180560539(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong *unaff_RBX;
  ulonglong uVar3;
  uint uVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong *unaff_R12;
  ulonglong unaff_R14;
  
  uVar3 = param_3 * 2;
  if (param_3 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < param_1) {
    uVar3 = param_1;
  }
  uVar1 = unaff_RSI;
  if (uVar3 != 0) {
    uVar1 = FUN_18062b420(_DAT_180c8ed18,uVar3 * 8,(char)unaff_RBX[3]);
    param_2 = *unaff_RBX;
    unaff_R14 = unaff_RBX[1];
  }
  if (param_2 != unaff_R14) {
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_2,unaff_R14 - param_2);
  }
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset(uVar1,0,unaff_RDI * 8);
  }
  if (*unaff_RBX == 0) {
    *unaff_RBX = uVar1;
    unaff_RBX[2] = uVar1 + uVar3 * 8;
    unaff_RBX[1] = uVar1;
    uVar3 = unaff_RSI;
    if ((longlong)(uVar1 - *unaff_RBX) >> 3 != 0) {
      do {
        uVar2 = (**(code **)**(undefined8 **)(uVar3 + *unaff_R12))();
        uVar4 = (int)unaff_RSI + 1;
        unaff_RSI = (ulonglong)uVar4;
        *(undefined8 *)(uVar3 + *unaff_RBX) = uVar2;
        uVar3 = uVar3 + 8;
      } while ((ulonglong)(longlong)(int)uVar4 <
               (ulonglong)((longlong)(unaff_RBX[1] - *unaff_RBX) >> 3));
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1805605e4(void)
void FUN_1805605e4(void)

{
  undefined8 uVar1;
  longlong *unaff_RBX;
  uint uVar2;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar3;
  longlong *unaff_R12;
  longlong unaff_R14;
  
  if (unaff_RDI == 0) {
    unaff_RBX[1] = unaff_R14;
    uVar3 = unaff_RSI;
    if (unaff_R14 - *unaff_RBX >> 3 != 0) {
      do {
        uVar1 = (**(code **)**(undefined8 **)(uVar3 + *unaff_R12))();
        uVar2 = (int)unaff_RSI + 1;
        unaff_RSI = (ulonglong)uVar2;
        *(undefined8 *)(uVar3 + *unaff_RBX) = uVar1;
        uVar3 = uVar3 + 8;
      } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(unaff_RBX[1] - *unaff_RBX >> 3));
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memset();
}





// 函数: void FUN_18056061e(void)
void FUN_18056061e(void)

{
  undefined8 uVar1;
  longlong *unaff_RBX;
  uint uVar2;
  ulonglong unaff_RSI;
  ulonglong uVar3;
  longlong *unaff_R12;
  
  uVar3 = unaff_RSI;
  do {
    uVar1 = (**(code **)**(undefined8 **)(uVar3 + *unaff_R12))();
    uVar2 = (int)unaff_RSI + 1;
    unaff_RSI = (ulonglong)uVar2;
    *(undefined8 *)(uVar3 + *unaff_RBX) = uVar1;
    uVar3 = uVar3 + 8;
  } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(unaff_RBX[1] - *unaff_RBX >> 3));
  return;
}



undefined8 * FUN_180560660(undefined8 *param_1)

{
  *param_1 = &UNK_1809ffa18;
  *param_1 = &UNK_180a36288;
  param_1[0xb] = &UNK_18098bcb0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = &UNK_180a3c3e0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = &UNK_18098bcb0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = &UNK_180a3c3e0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x13] = &UNK_18098bcb0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = &UNK_180a3c3e0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = &UNK_18098bcb0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x17] = &UNK_180a3c3e0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = &UNK_18098bcb0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = &UNK_180a3c3e0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1f] = &UNK_18098bcb0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = &UNK_180a3c3e0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x23] = &UNK_18098bcb0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x23] = &UNK_180a3c3e0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 3;
  param_1[0x2e] = &UNK_18098bcb0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = &UNK_180a3c3e0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x32] = &UNK_18098bcb0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x32] = &UNK_180a3c3e0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 0x27) = 3;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 3;
  param_1[0x28] = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x1b2) = 0;
  return param_1;
}



undefined8 FUN_180560870(undefined8 param_1,ulonglong param_2)

{
  FUN_1805608b0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1b8);
  }
  return param_1;
}





// 函数: void FUN_1805608b0(undefined8 *param_1)
void FUN_1805608b0(undefined8 *param_1)

{
  param_1[0x32] = &UNK_180a3c3e0;
  if (param_1[0x33] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x32] = &UNK_18098bcb0;
  param_1[0x2e] = &UNK_180a3c3e0;
  if (param_1[0x2f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2e] = &UNK_18098bcb0;
  if (param_1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x23] = &UNK_180a3c3e0;
  if (param_1[0x24] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x23] = &UNK_18098bcb0;
  param_1[0x1f] = &UNK_180a3c3e0;
  if (param_1[0x20] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = &UNK_18098bcb0;
  param_1[0x1b] = &UNK_180a3c3e0;
  if (param_1[0x1c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1b] = &UNK_18098bcb0;
  param_1[0x17] = &UNK_180a3c3e0;
  if (param_1[0x18] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x17] = &UNK_18098bcb0;
  param_1[0x13] = &UNK_180a3c3e0;
  if (param_1[0x14] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x13] = &UNK_18098bcb0;
  param_1[0xf] = &UNK_180a3c3e0;
  if (param_1[0x10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xf] = &UNK_18098bcb0;
  param_1[0xb] = &UNK_180a3c3e0;
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xb] = &UNK_18098bcb0;
  *param_1 = &UNK_1809ffa18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180560a90(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x208,8,4,0xfffffffffffffffe);
  FUN_18034dd90();
  *(undefined8 *)(lVar1 + 0x1b0) = &UNK_18098bcb0;
  *(undefined8 *)(lVar1 + 0x1b8) = 0;
  *(undefined4 *)(lVar1 + 0x1c0) = 0;
  *(undefined8 *)(lVar1 + 0x1b0) = &UNK_180a3c3e0;
  *(undefined8 *)(lVar1 + 0x1c8) = 0;
  *(undefined8 *)(lVar1 + 0x1b8) = 0;
  *(undefined4 *)(lVar1 + 0x1c0) = 0;
  *(undefined8 *)(lVar1 + 0x1d0) = 0;
  *(undefined8 *)(lVar1 + 0x1d8) = 0;
  *(undefined4 *)(lVar1 + 0x1e0) = 0;
  *(undefined8 *)(lVar1 + 0x1e4) = 0x3e99999a;
  *(undefined8 *)(lVar1 + 0x1ec) = 0xffffffffffffffff;
  *(undefined2 *)(lVar1 + 500) = 0xffff;
  *(undefined4 *)(lVar1 + 0x1f8) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x200) = 0;
  *(longlong *)(lVar1 + 0x200) = param_1;
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 0x70) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x70);
  }
  (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x10))((longlong *)(lVar1 + 0x10),puVar2);
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180560b80(longlong param_1)
void FUN_180560b80(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(char *)(_DAT_180c868a8 + 0x130) != '\0') {
    FUN_18053cee0(*(undefined8 *)(param_1 + 0xb0));
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x78);
  iVar5 = *(int *)(lVar3 + 0xe8);
  if (iVar2 == iVar5) {
    if (iVar2 != 0) {
      pbVar4 = *(byte **)(param_1 + 0x70);
      lVar6 = *(longlong *)(lVar3 + 0xe0) - (longlong)pbVar4;
      do {
        pbVar1 = pbVar4 + lVar6;
        iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar5 != 0) break;
        pbVar4 = pbVar4 + 1;
      } while (*pbVar1 != 0);
    }
  }
  else if (iVar2 != 0) goto LAB_180560c1e;
  if (iVar5 == 0) {
    FUN_1804aa470(&DAT_180c961e0,*(undefined8 *)(param_1 + 0xb0),param_1 + 0x68,param_1 + 0x68,0xff)
    ;
    return;
  }
LAB_180560c1e:
  if (0 < *(int *)(lVar3 + 0x180)) {
    FUN_180086e40(_DAT_180c868a8,&DAT_180a2d688,lVar3 + 0x170);
    FUN_180086e40(_DAT_180c868a8,&DAT_180a2d688,lVar3 + 400);
    FUN_1804aa470(&DAT_180c961e0,*(undefined8 *)(param_1 + 0xb0),lVar3 + 0x170,lVar3 + 400,
                  *(undefined1 *)(lVar3 + 0x1b0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180560c27(void)
void FUN_180560c27(void)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 in_R9;
  
  FUN_180086e40(in_R9,&DAT_180a2d688,unaff_RBP + 0x170);
  FUN_180086e40(_DAT_180c868a8,&DAT_180a2d688,unaff_RBP + 400);
  FUN_1804aa470(&DAT_180c961e0,*(undefined8 *)(unaff_RSI + 0xb0),unaff_RBP + 0x170,unaff_RBP + 400,
                *(undefined1 *)(unaff_RBP + 0x1b0));
  return;
}





// 函数: void FUN_180560c97(void)
void FUN_180560c97(void)

{
  return;
}





// 函数: void FUN_180560ce0(longlong param_1,longlong param_2)
void FUN_180560ce0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x200) = param_2;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    return;
  }
  FUN_18053a220(&DAT_180c95f30,*(undefined8 *)(param_1 + 0xb0));
  FUN_18053e3f0(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined1 FUN_180560d50(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte *pbVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 auStackX_8 [2];
  longlong lStackX_10;
  longlong alStack_38 [4];
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    alStack_38[1] = 0x180560daa;
    cVar4 = func_0x00018008a5c0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8));
    if (cVar4 == '\0') {
      return 0;
    }
    alStack_38[1] = 0x180560db6;
    uVar5 = FUN_180560a90(param_1);
    *(undefined8 *)(param_1 + 0xb0) = uVar5;
    alStack_38[1] = 0x180560dc5;
    FUN_18053cee0(uVar5);
  }
  else {
    alStack_38[1] = 0x180560d71;
    FUN_18053a220(&DAT_180c95f30);
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
    puVar9 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x70) != (undefined *)0x0) {
      puVar9 = *(undefined **)(param_1 + 0x70);
    }
    alStack_38[1] = 0x180560d98;
    (**(code **)(*plVar7 + 0x10))(plVar7,puVar9);
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  lStackX_10 = lVar2;
  FUN_18053de40(0x180c95f38,alStack_38,lVar2 + 0x10);
  iVar3 = _DAT_180c95fa8;
  if (alStack_38[0] == *(longlong *)(_DAT_180c95f40 + _DAT_180c95f48 * 8)) {
    uVar6 = 0xcbf29ce484222325;
    pbVar8 = &DAT_18098bc73;
    if (*(byte **)(lVar2 + 0x18) != (byte *)0x0) {
      pbVar8 = *(byte **)(lVar2 + 0x18);
    }
    uVar10 = 0;
    if (*(uint *)(lVar2 + 0x20) != 0) {
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        uVar10 = uVar10 + 1;
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      } while (uVar10 < *(uint *)(lVar2 + 0x20));
    }
    FUN_18053df50(0x180c95f38,alStack_38,uVar10,lVar2 + 0x10,uVar6);
    *(int *)(alStack_38[0] + 0x58) = iVar3;
    auStackX_8[0] = (undefined4)(_DAT_180c95f90 - _DAT_180c95f88 >> 3);
    FUN_1800571e0(&DAT_180c95f68,auStackX_8);
    *(int *)(lVar2 + 0x68) = _DAT_180c95fa8;
    _DAT_180c95fa8 = _DAT_180c95fa8 + 1;
    FUN_18005ea90(&DAT_180c95f88,&lStackX_10);
  }
  else {
    if (*(int *)(_DAT_180c95f68 + (longlong)*(int *)(alStack_38[0] + 0x58) * 4) != -1) {
      puVar9 = &DAT_18098bc73;
      if (*(undefined **)(lVar2 + 0x18) != (undefined *)0x0) {
        puVar9 = *(undefined **)(lVar2 + 0x18);
      }
      FUN_180627020(&UNK_180a338e0,puVar9);
      return 0;
    }
    *(int *)(_DAT_180c95f68 + (longlong)*(int *)(alStack_38[0] + 0x58) * 4) =
         (int)(_DAT_180c95f90 - _DAT_180c95f88 >> 3);
    FUN_18005ea90(&DAT_180c95f88,&lStackX_10);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180560df0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x1b8,8,0x1a);
  lVar5 = FUN_180560660(uVar4);
  if (param_2 != 0) {
    *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(lVar5 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(lVar5 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(lVar5 + 0x2c) = uVar4;
    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    uVar2 = *(undefined4 *)(param_2 + 0x4c);
    uVar3 = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(lVar5 + 0x48) = uVar1;
    *(undefined4 *)(lVar5 + 0x4c) = uVar2;
    *(undefined4 *)(lVar5 + 0x50) = uVar3;
    FUN_180627be0(lVar5 + 0x58,param_2 + 0x58);
    FUN_180627be0(lVar5 + 0x78,param_2 + 0x78);
    FUN_180627be0(lVar5 + 0x98,param_2 + 0x98);
    FUN_180627be0(lVar5 + 0xb8,param_2 + 0xb8);
    FUN_180627be0(lVar5 + 0xd8,param_2 + 0xd8);
    FUN_180627be0(lVar5 + 0xf8,param_2 + 0xf8);
    FUN_180627be0(lVar5 + 0x118,param_2 + 0x118);
    *(undefined4 *)(lVar5 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(lVar5 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined4 *)(lVar5 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)(lVar5 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    *(undefined1 *)(lVar5 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    FUN_1805604e0(lVar5 + 0x150,param_2 + 0x150);
    FUN_180627be0(lVar5 + 0x170,param_2 + 0x170);
    FUN_180627be0(lVar5 + 400,param_2 + 400);
    *(undefined1 *)(lVar5 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
    *(undefined1 *)(lVar5 + 0x1b1) = *(undefined1 *)(param_2 + 0x1b1);
    *(undefined1 *)(lVar5 + 0x1b2) = *(undefined1 *)(param_2 + 0x1b2);
  }
  return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180560fa0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 auStackX_8 [2];
  longlong lStackX_10;
  longlong alStack_38 [4];
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    return in_RAX;
  }
  alStack_38[1] = 0x180560fb8;
  lVar3 = FUN_180560a90();
  *(longlong *)(param_1 + 0xb0) = lVar3;
  lStackX_10 = lVar3;
  FUN_18053de40(0x180c95f38,alStack_38,lVar3 + 0x10);
  iVar2 = _DAT_180c95fa8;
  if (alStack_38[0] == *(longlong *)(_DAT_180c95f40 + _DAT_180c95f48 * 8)) {
    uVar4 = 0xcbf29ce484222325;
    pbVar5 = &DAT_18098bc73;
    if (*(byte **)(lVar3 + 0x18) != (byte *)0x0) {
      pbVar5 = *(byte **)(lVar3 + 0x18);
    }
    uVar7 = 0;
    if (*(uint *)(lVar3 + 0x20) != 0) {
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        uVar7 = uVar7 + 1;
        uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
      } while (uVar7 < *(uint *)(lVar3 + 0x20));
    }
    FUN_18053df50(0x180c95f38,alStack_38,uVar7,lVar3 + 0x10,uVar4);
    *(int *)(alStack_38[0] + 0x58) = iVar2;
    auStackX_8[0] = (undefined4)(_DAT_180c95f90 - _DAT_180c95f88 >> 3);
    FUN_1800571e0(&DAT_180c95f68,auStackX_8);
    *(int *)(lVar3 + 0x68) = _DAT_180c95fa8;
    _DAT_180c95fa8 = _DAT_180c95fa8 + 1;
    FUN_18005ea90(&DAT_180c95f88,&lStackX_10);
  }
  else {
    if (*(int *)(_DAT_180c95f68 + (longlong)*(int *)(alStack_38[0] + 0x58) * 4) != -1) {
      puVar6 = &DAT_18098bc73;
      if (*(undefined **)(lVar3 + 0x18) != (undefined *)0x0) {
        puVar6 = *(undefined **)(lVar3 + 0x18);
      }
      FUN_180627020(&UNK_180a338e0,puVar6);
      return 0;
    }
    *(int *)(_DAT_180c95f68 + (longlong)*(int *)(alStack_38[0] + 0x58) * 4) =
         (int)(_DAT_180c95f90 - _DAT_180c95f88 >> 3);
    FUN_18005ea90(&DAT_180c95f88,&lStackX_10);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180560fe0(longlong param_1)
void FUN_180560fe0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong alStack_58 [10];
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_18053a220(&DAT_180c95f30);
    FUN_18053e3f0(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    lVar3 = *_DAT_180c961e8;
    plVar4 = _DAT_180c961e8;
    if (lVar3 == 0) {
      lVar3 = _DAT_180c961e8[1];
      plVar1 = _DAT_180c961e8;
      while (plVar4 = plVar1 + 1, lVar3 == 0) {
        lVar3 = plVar1[2];
        plVar1 = plVar4;
      }
    }
    while (lVar3 != _DAT_180c961e8[_DAT_180c961f0]) {
      alStack_58[0] = *(longlong *)(lVar3 + 0x10);
      alStack_58[1] = *(undefined8 *)(lVar3 + 0x18);
      alStack_58[2] = *(undefined8 *)(lVar3 + 0x20);
      alStack_58[3] = *(undefined8 *)(lVar3 + 0x28);
      alStack_58[4] = *(undefined8 *)(lVar3 + 0x30);
      alStack_58[5] = *(undefined8 *)(lVar3 + 0x38);
      alStack_58[6] = *(undefined8 *)(lVar3 + 0x40);
      alStack_58[7] = *(undefined8 *)(lVar3 + 0x48);
      alStack_58[8] = *(undefined8 *)(lVar3 + 0x50);
      alStack_58[9] = *(undefined8 *)(lVar3 + 0x58);
      lVar2 = 0;
      do {
        if (alStack_58[lVar2] == 0) {
          return;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < 10);
      lVar3 = *(longlong *)(lVar3 + 0x60);
      while (lVar3 == 0) {
        plVar1 = plVar4 + 1;
        plVar4 = plVar4 + 1;
        lVar3 = *plVar1;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



