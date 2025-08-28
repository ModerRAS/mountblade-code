#include "TaleWorlds.Native.Split.h"

// 03_rendering_part032.c - 9 个函数

// 函数: void FUN_180284cf0(ulonglong *param_1,undefined8 *param_2)
void FUN_180284cf0(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    param_1[1] = (ulonglong)(puVar9 + 2);
    uVar4 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar4;
    return;
  }
  puVar6 = (undefined8 *)*param_1;
  lVar8 = (longlong)puVar9 - (longlong)puVar6 >> 4;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)0x0;
      puVar7 = puVar5;
      goto joined_r0x000180284d76;
    }
  }
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar8 << 4,(char)param_1[3]);
  puVar9 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)*param_1;
  puVar7 = puVar5;
joined_r0x000180284d76:
  for (; puVar6 != puVar9; puVar6 = puVar6 + 2) {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    puVar5 = puVar5 + 2;
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)puVar5 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar5 + 4) = uVar1;
  *(undefined4 *)(puVar5 + 1) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
  if (*param_1 == 0) {
    *param_1 = (ulonglong)puVar7;
    param_1[2] = (ulonglong)(puVar7 + lVar8 * 2);
    param_1[1] = (ulonglong)(puVar5 + 2);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180284de0(longlong *param_1,ulonglong param_2)
void FUN_180284de0(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  puVar5 = (undefined8 *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar5 >> 4) < param_2) {
    puVar4 = (undefined8 *)*param_1;
    lVar6 = (longlong)puVar5 - (longlong)puVar4 >> 4;
    uVar10 = lVar6 * 2;
    if (lVar6 == 0) {
      uVar10 = 1;
    }
    if (uVar10 < lVar6 + param_2) {
      uVar10 = lVar6 + param_2;
    }
    puVar3 = (undefined8 *)0x0;
    if (uVar10 != 0) {
      puVar3 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,uVar10 << 4,(char)param_1[3],puVar5,0xfffffffffffffffe);
      puVar5 = (undefined8 *)param_1[1];
      puVar4 = (undefined8 *)*param_1;
    }
    puVar7 = puVar3;
    if (puVar4 != puVar5) {
      lVar11 = (longlong)puVar4 - (longlong)puVar3;
      lVar6 = 8 - (longlong)puVar4;
      do {
        *puVar7 = *puVar4;
        *puVar4 = 0;
        puVar1 = (undefined4 *)((longlong)puVar3 + lVar6 + (longlong)puVar4);
        *puVar1 = *(undefined4 *)((longlong)puVar1 + lVar11);
        puVar4 = puVar4 + 2;
        puVar7 = puVar7 + 2;
      } while (puVar4 != puVar5);
    }
    puVar5 = puVar7;
    uVar8 = param_2;
    if (param_2 != 0) {
      do {
        puVar5[1] = 0;
        *puVar5 = 0;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 2;
      } while (uVar8 != 0);
    }
    plVar2 = (longlong *)param_1[1];
    plVar9 = (longlong *)*param_1;
    if (plVar9 != plVar2) {
      do {
        if ((longlong *)*plVar9 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar9 + 0x38))();
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar2);
      plVar9 = (longlong *)*param_1;
    }
    if (plVar9 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar9);
    }
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar7 + param_2 * 2);
    param_1[2] = (longlong)(puVar3 + uVar10 * 2);
  }
  else {
    uVar10 = param_2;
    if (param_2 != 0) {
      do {
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar5 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar5 + param_2 * 2);
  }
  return;
}





// 函数: void FUN_180284f90(longlong *param_1,longlong *param_2)
void FUN_180284f90(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((longlong *)*param_1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_1 + 0x38))();
      }
      param_1 = param_1 + 2;
    } while (param_1 != param_2);
  }
  return;
}



undefined8 * FUN_180284fe0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar2 = (longlong)param_1 - (longlong)param_3;
    lVar3 = (longlong)param_3 + (8 - (longlong)param_1);
    do {
      *param_3 = *param_1;
      *param_1 = 0;
      puVar1 = (undefined4 *)(lVar3 + (longlong)param_1);
      *puVar1 = *(undefined4 *)((longlong)puVar1 + lVar2);
      param_1 = param_1 + 2;
      param_3 = param_3 + 2;
    } while (param_1 != param_2);
  }
  return param_3;
}





// 函数: void FUN_180285040(longlong param_1)
void FUN_180285040(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (puVar2[4] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar2 = &UNK_180a3c3e0;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 3) = 0;
          *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180285060(longlong param_1)
void FUN_180285060(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (puVar2[4] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar2 = &UNK_180a3c3e0;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 3) = 0;
          *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180285080(longlong param_1)
void FUN_180285080(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (puVar2[4] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar2 = &UNK_180a3c3e0;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 3) = 0;
          *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180285190(longlong param_1,longlong param_2)
void FUN_180285190(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x168);
    do {
      *(undefined **)(puVar1 + -0x5a) = &UNK_18098bcb0;
      *(undefined8 *)(puVar1 + -0x58) = 0;
      puVar1[-0x56] = 0;
      *(undefined **)(puVar1 + -0x5a) = &UNK_1809fcc58;
      *(undefined4 **)(puVar1 + -0x58) = puVar1 + -0x54;
      puVar1[-0x56] = 0;
      *(undefined1 *)(puVar1 + -0x54) = 0;
      *(undefined **)(puVar1 + -0x16) = &UNK_18098bcb0;
      *(undefined8 *)(puVar1 + -0x14) = 0;
      puVar1[-0x12] = 0;
      *(undefined **)(puVar1 + -0x16) = &UNK_180a3c3e0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -0x14) = 0;
      puVar1[-0x12] = 0;
      *(undefined8 *)(puVar1 + -0xe) = 0;
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 3;
      *(undefined8 *)(puVar1 + -6) = 0;
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 3;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      puVar1[8] = 3;
      *(undefined8 *)(puVar1 + -0x43) = 0;
      puVar1[-0x41] = 0;
      puVar1[-0x3a] = 0;
      puVar1[-0x39] = 0;
      puVar1[-0x38] = 0;
      puVar1[-0x37] = 0x3f800000;
      puVar1[-0x36] = 0;
      puVar1[-0x35] = 0;
      puVar1[-0x34] = 0;
      puVar1[-0x33] = 0x3f800000;
      *(undefined8 *)(puVar1 + -0x32) = 0;
      *(undefined8 *)(puVar1 + -0x30) = 0;
      *(undefined8 *)(puVar1 + -0x2e) = 0;
      *(undefined8 *)(puVar1 + -0x2c) = 0;
      *(undefined8 *)(puVar1 + -0x2a) = 0;
      *(undefined8 *)(puVar1 + -0x28) = 0;
      *(undefined8 *)(puVar1 + -0x26) = 0x3f800000;
      *(undefined8 *)(puVar1 + -0x24) = 0;
      *(undefined8 *)(puVar1 + -0x22) = 0x3f80000000000000;
      *(undefined8 *)(puVar1 + -0x20) = 0;
      *(undefined8 *)(puVar1 + -0x1e) = 0;
      *(undefined8 *)(puVar1 + -0x1c) = 0x3f800000;
      *(undefined8 *)(puVar1 + -0x1a) = 0;
      *(undefined8 *)(puVar1 + -0x18) = 0x3f80000000000000;
      puVar1[-0x44] = 0;
      *(undefined8 *)(puVar1 + -0x40) = 0;
      *(undefined8 *)(puVar1 + -0x3e) = 0;
      *(undefined8 *)(puVar1 + -0x3c) = 0;
      puVar1[0xc] = 0xffffffff;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1 = puVar1 + 0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}





// 函数: void FUN_180285410(longlong param_1)
void FUN_180285410(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (puVar2[4] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar2 = &UNK_180a3c3e0;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 3) = 0;
          *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



longlong *
FUN_180285440(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  
  *param_1 = (longlong)param_4;
  if (param_2 != param_3) {
    puVar7 = param_2 + 0x5a;
    do {
      *param_4 = &UNK_18098bcb0;
      param_4[1] = 0;
      *(undefined4 *)(param_4 + 2) = 0;
      *param_4 = &UNK_1809fcc58;
      param_4[1] = param_4 + 3;
      *(undefined4 *)(param_4 + 2) = 0;
      *(undefined1 *)(param_4 + 3) = 0;
      *(undefined4 *)(param_4 + 2) = puVar7[-0x56];
      puVar8 = &DAT_18098bc73;
      if (*(undefined **)(puVar7 + -0x58) != (undefined *)0x0) {
        puVar8 = *(undefined **)(puVar7 + -0x58);
      }
      strcpy_s(param_4[1],0x40,puVar8);
      *(undefined4 *)(param_4 + 0xb) = puVar7[-0x44];
      *(undefined4 *)((longlong)param_4 + 0x5c) = puVar7[-0x43];
      *(undefined4 *)(param_4 + 0xc) = puVar7[-0x42];
      *(undefined4 *)((longlong)param_4 + 100) = puVar7[-0x41];
      *(undefined4 *)(param_4 + 0xd) = puVar7[-0x40];
      *(undefined4 *)((longlong)param_4 + 0x6c) = puVar7[-0x3f];
      *(undefined4 *)(param_4 + 0xe) = puVar7[-0x3e];
      *(undefined4 *)((longlong)param_4 + 0x74) = puVar7[-0x3d];
      *(undefined4 *)(param_4 + 0xf) = puVar7[-0x3c];
      *(undefined4 *)((longlong)param_4 + 0x7c) = puVar7[-0x3b];
      uVar4 = *(undefined8 *)(puVar7 + -0x38);
      param_4[0x10] = *(undefined8 *)(puVar7 + -0x3a);
      param_4[0x11] = uVar4;
      uVar4 = *(undefined8 *)(puVar7 + -0x34);
      param_4[0x12] = *(undefined8 *)(puVar7 + -0x36);
      param_4[0x13] = uVar4;
      uVar4 = *(undefined8 *)(puVar7 + -0x30);
      param_4[0x14] = *(undefined8 *)(puVar7 + -0x32);
      param_4[0x15] = uVar4;
      uVar4 = *(undefined8 *)(puVar7 + -0x2c);
      param_4[0x16] = *(undefined8 *)(puVar7 + -0x2e);
      param_4[0x17] = uVar4;
      uVar4 = *(undefined8 *)(puVar7 + -0x28);
      param_4[0x18] = *(undefined8 *)(puVar7 + -0x2a);
      param_4[0x19] = uVar4;
      uVar4 = *(undefined8 *)(puVar7 + -0x24);
      param_4[0x1a] = *(undefined8 *)(puVar7 + -0x26);
      param_4[0x1b] = uVar4;
      uVar4 = *(undefined8 *)(puVar7 + -0x20);
      param_4[0x1c] = *(undefined8 *)(puVar7 + -0x22);
      param_4[0x1d] = uVar4;
      uVar3 = puVar7[-0x1d];
      uVar5 = puVar7[-0x1c];
      uVar6 = puVar7[-0x1b];
      *(undefined4 *)(param_4 + 0x1e) = puVar7[-0x1e];
      *(undefined4 *)((longlong)param_4 + 0xf4) = uVar3;
      *(undefined4 *)(param_4 + 0x1f) = uVar5;
      *(undefined4 *)((longlong)param_4 + 0xfc) = uVar6;
      uVar3 = puVar7[-0x19];
      uVar5 = puVar7[-0x18];
      uVar6 = puVar7[-0x17];
      *(undefined4 *)(param_4 + 0x20) = puVar7[-0x1a];
      *(undefined4 *)((longlong)param_4 + 0x104) = uVar3;
      *(undefined4 *)(param_4 + 0x21) = uVar5;
      *(undefined4 *)((longlong)param_4 + 0x10c) = uVar6;
      param_4[0x22] = &UNK_18098bcb0;
      param_4[0x23] = 0;
      *(undefined4 *)(param_4 + 0x24) = 0;
      param_4[0x22] = &UNK_180a3c3e0;
      param_4[0x25] = 0;
      param_4[0x23] = 0;
      *(undefined4 *)(param_4 + 0x24) = 0;
      *(undefined4 *)(param_4 + 0x24) = puVar7[-0x12];
      param_4[0x23] = *(undefined8 *)(puVar7 + -0x14);
      *(undefined4 *)((longlong)param_4 + 300) = puVar7[-0xf];
      *(undefined4 *)(param_4 + 0x25) = puVar7[-0x10];
      puVar7[-0x12] = 0;
      *(undefined8 *)(puVar7 + -0x14) = 0;
      *(undefined8 *)(puVar7 + -0x10) = 0;
      puVar1 = param_4 + 0x26;
      *puVar1 = 0;
      param_4[0x27] = 0;
      param_4[0x28] = 0;
      *(undefined4 *)(param_4 + 0x29) = puVar7[-8];
      uVar4 = *puVar1;
      *puVar1 = *(undefined8 *)(puVar7 + -0xe);
      *(undefined8 *)(puVar7 + -0xe) = uVar4;
      uVar4 = param_4[0x27];
      param_4[0x27] = *(undefined8 *)(puVar7 + -0xc);
      *(undefined8 *)(puVar7 + -0xc) = uVar4;
      uVar4 = param_4[0x28];
      param_4[0x28] = *(undefined8 *)(puVar7 + -10);
      *(undefined8 *)(puVar7 + -10) = uVar4;
      uVar3 = *(undefined4 *)(param_4 + 0x29);
      *(undefined4 *)(param_4 + 0x29) = puVar7[-8];
      puVar7[-8] = uVar3;
      puVar1 = param_4 + 0x2a;
      *puVar1 = 0;
      param_4[0x2b] = 0;
      param_4[0x2c] = 0;
      *(undefined4 *)(param_4 + 0x2d) = *puVar7;
      uVar4 = *puVar1;
      *puVar1 = *(undefined8 *)(puVar7 + -6);
      *(undefined8 *)(puVar7 + -6) = uVar4;
      uVar4 = param_4[0x2b];
      param_4[0x2b] = *(undefined8 *)(puVar7 + -4);
      *(undefined8 *)(puVar7 + -4) = uVar4;
      uVar4 = param_4[0x2c];
      param_4[0x2c] = *(undefined8 *)(puVar7 + -2);
      *(undefined8 *)(puVar7 + -2) = uVar4;
      uVar3 = *(undefined4 *)(param_4 + 0x2d);
      *(undefined4 *)(param_4 + 0x2d) = *puVar7;
      *puVar7 = uVar3;
      puVar1 = param_4 + 0x2e;
      *puVar1 = 0;
      param_4[0x2f] = 0;
      param_4[0x30] = 0;
      *(undefined4 *)(param_4 + 0x31) = puVar7[8];
      uVar4 = *puVar1;
      *puVar1 = *(undefined8 *)(puVar7 + 2);
      *(undefined8 *)(puVar7 + 2) = uVar4;
      uVar4 = param_4[0x2f];
      param_4[0x2f] = *(undefined8 *)(puVar7 + 4);
      *(undefined8 *)(puVar7 + 4) = uVar4;
      uVar4 = param_4[0x30];
      param_4[0x30] = *(undefined8 *)(puVar7 + 6);
      *(undefined8 *)(puVar7 + 6) = uVar4;
      uVar3 = *(undefined4 *)(param_4 + 0x31);
      *(undefined4 *)(param_4 + 0x31) = puVar7[8];
      puVar7[8] = uVar3;
      param_4[0x32] = *(undefined8 *)(puVar7 + 10);
      *(undefined4 *)(param_4 + 0x33) = puVar7[0xc];
      *param_1 = *param_1 + 0x1a0;
      param_4 = (undefined8 *)*param_1;
      puVar2 = puVar7 + 0xe;
      puVar7 = puVar7 + 0x68;
    } while (puVar2 != param_3);
  }
  return param_1;
}





// 函数: void FUN_180285760(longlong param_1,longlong param_2)
void FUN_180285760(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  uVar2 = (longlong)(int)plVar1[2] + 7U & 0xfffffffffffffff8;
  *(int *)(plVar1 + 2) = (int)uVar2 + ((int)param_2 + 1) * 8;
                    // WARNING: Subroutine does not return
  memset(*plVar1 + uVar2,0,param_2 * 8);
}



undefined1 FUN_180285840(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  lVar8 = *(longlong *)(param_1 + 0x38);
  iVar9 = 0;
  uVar4 = 1;
  if (*(longlong *)(param_1 + 0x40) - lVar8 >> 4 != 0) {
    lVar7 = 0;
    uVar6 = uVar4;
    do {
      lVar8 = *(longlong *)(lVar7 + lVar8);
      lVar2 = *(longlong *)(lVar8 + 0x1b8);
      cVar3 = *(char *)(lVar2 + 0x38c);
      if (cVar3 == '\t') {
        uVar1 = *(uint *)(lVar2 + 0x388);
        if ((uVar1 >> 0x1e & 1) == 0) {
          if ((uVar1 >> 0x1c & 1) == 0) {
            uVar5 = uVar1 & 0x1000000;
            if ((int)uVar1 < 0) {
              if ((uVar1 >> 0x1b & 1) == 0) {
                cVar3 = (uVar5 != 0) + '\f';
              }
              else {
                cVar3 = (uVar5 != 0) + '\x0e';
              }
            }
            else if ((uVar1 >> 0x19 & 1) == 0) {
              cVar3 = uVar5 != 0;
            }
            else if ((uVar1 >> 0x1b & 1) == 0) {
              cVar3 = (uVar5 != 0) + '\x02';
            }
            else {
              cVar3 = (uVar5 != 0) + '\a';
            }
          }
          else {
            cVar3 = '\x04';
          }
        }
        *(char *)(lVar2 + 0x38c) = cVar3;
      }
      cVar3 = FUN_18007b240(lVar8,lVar8 + 0x1e8,cVar3,param_2);
      if (cVar3 == '\0') {
        *(byte *)(lVar8 + 0xfe) = *(byte *)(lVar8 + 0xfe) & 0xfb;
      }
      lVar8 = *(longlong *)(param_1 + 0x38);
      uVar4 = 0;
      if (cVar3 != '\0') {
        uVar4 = uVar6;
      }
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 0x10;
      uVar6 = uVar4;
    } while ((ulonglong)(longlong)iVar9 < (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar8 >> 4));
  }
  return uVar4;
}



undefined1 FUN_180285873(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong unaff_RBP;
  undefined1 unaff_SIL;
  longlong lVar7;
  int unaff_R14D;
  undefined1 unaff_R15B;
  
  lVar7 = 0;
  do {
    lVar2 = *(longlong *)(lVar7 + param_3);
    lVar3 = *(longlong *)(lVar2 + 0x1b8);
    cVar4 = *(char *)(lVar3 + 0x38c);
    if (cVar4 == '\t') {
      uVar1 = *(uint *)(lVar3 + 0x388);
      if ((uVar1 >> 0x1e & 1) == 0) {
        if ((uVar1 >> 0x1c & 1) == 0) {
          uVar6 = uVar1 & 0x1000000;
          if ((int)uVar1 < 0) {
            if ((uVar1 >> 0x1b & 1) == 0) {
              cVar4 = (uVar6 != 0) + '\f';
            }
            else {
              cVar4 = (uVar6 != 0) + '\x0e';
            }
          }
          else if ((uVar1 >> 0x19 & 1) == 0) {
            cVar4 = uVar6 != 0;
          }
          else if ((uVar1 >> 0x1b & 1) == 0) {
            cVar4 = (uVar6 != 0) + '\x02';
          }
          else {
            cVar4 = (uVar6 != 0) + '\a';
          }
        }
        else {
          cVar4 = '\x04';
        }
      }
      *(char *)(lVar3 + 0x38c) = cVar4;
    }
    cVar4 = FUN_18007b240(lVar2,lVar2 + 0x1e8,cVar4,unaff_R15B);
    if (cVar4 == '\0') {
      *(byte *)(lVar2 + 0xfe) = *(byte *)(lVar2 + 0xfe) & 0xfb;
    }
    param_3 = *(longlong *)(unaff_RBP + 0x38);
    uVar5 = 0;
    if (cVar4 != '\0') {
      uVar5 = unaff_SIL;
    }
    unaff_R14D = unaff_R14D + 1;
    lVar7 = lVar7 + 0x10;
    unaff_SIL = uVar5;
  } while ((ulonglong)(longlong)unaff_R14D <
           (ulonglong)(*(longlong *)(unaff_RBP + 0x40) - param_3 >> 4));
  return uVar5;
}



undefined1 FUN_18028596b(void)

{
  undefined1 unaff_SIL;
  
  return unaff_SIL;
}



undefined8 *
FUN_180285a10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,uVar1);
  }
  return param_1;
}



float * FUN_180285b40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_3;
  fVar2 = *param_1;
  fVar4 = -param_1[3];
  fVar3 = param_3[1];
  fVar5 = param_3[2];
  fVar8 = -param_1[2];
  param_2[3] = 3.4028235e+38;
  fVar9 = -param_1[1];
  fVar7 = fVar5 * fVar8 - param_3[1] * fVar4;
  fVar6 = fVar1 * fVar4 - param_3[2] * fVar9;
  fVar7 = fVar7 + fVar7;
  fVar5 = fVar3 * fVar9 - fVar1 * fVar8;
  fVar6 = fVar6 + fVar6;
  fVar5 = fVar5 + fVar5;
  fVar3 = param_3[2];
  *param_2 = (fVar5 * fVar8 - fVar6 * fVar4) + fVar7 * fVar2 + fVar1;
  fVar1 = param_3[1];
  param_2[2] = (fVar6 * fVar9 - fVar7 * fVar8) + fVar5 * fVar2 + fVar3;
  param_2[1] = (fVar7 * fVar4 - fVar5 * fVar9) + fVar6 * fVar2 + fVar1;
  return param_2;
}



undefined8 FUN_180285c90(longlong param_1,undefined8 param_2,float *param_3)

{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  fStack_18 = *param_3 - *(float *)(param_1 + 0x10);
  fStack_14 = param_3[1] - *(float *)(param_1 + 0x14);
  fStack_10 = param_3[2] - *(float *)(param_1 + 0x18);
  uStack_c = 0x7f7fffff;
  FUN_180285b40(0x7f7fffff,fStack_14,&fStack_18);
  return param_2;
}





