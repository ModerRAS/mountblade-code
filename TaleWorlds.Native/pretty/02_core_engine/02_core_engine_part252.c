#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part252.c - 9 个函数

// 函数: void FUN_1802187b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802187b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  
  lVar2 = param_1[1];
  lVar5 = *param_1;
  lStack_40 = 0;
  lStack_38 = 0;
  lVar3 = 0;
  lStack_30 = 0;
  uStack_28 = (undefined4)param_1[3];
  lVar1 = (lVar2 - lVar5) / 0x28;
  if (lVar1 != 0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar1 * 0x28,(undefined1)uStack_28,param_4,
                          0xfffffffffffffffe);
  }
  lVar1 = lVar3 + lVar1 * 0x28;
  if (lVar5 != lVar2) {
    puVar4 = (undefined8 *)(lVar3 + 8);
    do {
      puVar4[-1] = &UNK_18098bcb0;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4[-1] = &UNK_180a3c3e0;
      puVar4[2] = 0;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar5 + 0x10);
      *puVar4 = *(undefined8 *)(lVar5 + 8);
      *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)(lVar5 + 0x1c);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      puVar4[3] = *(undefined8 *)(lVar5 + 0x20);
      lVar5 = lVar5 + 0x28;
      puVar4 = puVar4 + 5;
    } while (lVar5 != lVar2);
  }
  lStack_40 = *param_1;
  *param_1 = lVar3;
  lStack_38 = param_1[1];
  param_1[1] = lVar1;
  lStack_30 = param_1[2];
  param_1[2] = lVar1;
  lVar2 = param_1[3];
  *(undefined4 *)(param_1 + 3) = uStack_28;
  uStack_28 = (int)lVar2;
  FUN_180048980(&lStack_40);
  return;
}



longlong FUN_180218920(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar6 = *param_1;
  lVar10 = (longlong)param_2 - lVar6 >> 3;
  lVar3 = param_1[1] - lVar6 >> 3;
  if (lVar3 == 0x1fffffffffffffff) {
    FUN_180189990();
    pcVar2 = (code *)swi(3);
    lVar6 = (*pcVar2)();
    return lVar6;
  }
  uVar1 = lVar3 + 1;
  uVar5 = param_1[2] - lVar6 >> 3;
  uVar11 = uVar1;
  if ((uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) &&
     (uVar11 = (uVar5 >> 1) + uVar5, uVar11 < uVar1)) {
    uVar11 = uVar1;
  }
  lVar6 = uVar11 * 8;
  if (0x1fffffffffffffff < uVar11) {
    lVar6 = -1;
  }
  puVar4 = (undefined8 *)FUN_180067110(lVar6);
  puVar4[lVar10] = *param_3;
  puVar8 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)*param_1;
  puVar9 = puVar4;
  if (param_2 == puVar8) {
    for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      *puVar9 = *puVar7;
      puVar9 = puVar9 + 1;
    }
  }
  else {
    for (; puVar7 != param_2; puVar7 = puVar7 + 1) {
      *puVar9 = *puVar7;
      puVar9 = puVar9 + 1;
    }
    puVar7 = (undefined8 *)param_1[1];
    puVar8 = puVar4 + lVar10 + 1;
    for (; param_2 != puVar7; param_2 = param_2 + 1) {
      *puVar8 = *param_2;
      puVar8 = puVar8 + 1;
    }
  }
  FUN_180217bb0(param_1,puVar4,uVar1,uVar11);
  return *param_1 + lVar10 * 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180218a80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  FUN_180627ae0();
  lVar4 = (*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20)) / 0x28;
  uVar2 = *(uint *)(param_2 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar2;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 0x28,uVar2 & 0xff,param_4,uVar8);
  }
  *(longlong *)(param_1 + 0x20) = lVar3;
  *(longlong *)(param_1 + 0x28) = lVar3;
  *(longlong *)(param_1 + 0x30) = lVar3 + lVar4 * 0x28;
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (lVar5 != lVar3) {
    lVar6 = lVar5 - lVar4;
    lVar7 = lVar4 - lVar5;
    do {
      FUN_180627ae0(lVar4,lVar5);
      lVar1 = lVar7 + lVar5;
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar1 + 0x20 + lVar6);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar3);
  }
  *(longlong *)(param_1 + 0x28) = lVar4;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180218c30(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180218c30(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  puVar7 = (undefined8 *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar7 >> 4) < param_2) {
    puVar10 = (undefined8 *)*param_1;
    lVar2 = (longlong)puVar7 - (longlong)puVar10 >> 4;
    uVar9 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar2 + param_2) {
      uVar9 = lVar2 + param_2;
    }
    puVar3 = (undefined8 *)0x0;
    if (uVar9 != 0) {
      puVar3 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,uVar9 << 4,(char)param_1[3],param_4,0xfffffffffffffffe);
      puVar7 = (undefined8 *)param_1[1];
      puVar10 = (undefined8 *)*param_1;
    }
    puVar4 = puVar3;
    if (puVar10 != puVar7) {
      lVar2 = (longlong)puVar10 - (longlong)puVar3;
      do {
        puVar4[1] = 0;
        *puVar4 = *(undefined8 *)(lVar2 + (longlong)puVar4);
        plVar8 = *(longlong **)(lVar2 + 8 + (longlong)puVar4);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8);
        }
        plVar1 = (longlong *)puVar4[1];
        puVar4[1] = plVar8;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        puVar4 = puVar4 + 2;
      } while ((undefined8 *)(lVar2 + (longlong)puVar4) != puVar7);
    }
    if (param_2 != 0) {
      plVar8 = puVar4 + 1;
      uVar6 = param_2;
      do {
        *plVar8 = 0;
        plVar8[-1] = 0;
        plVar1 = (longlong *)*plVar8;
        *plVar8 = 0;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        plVar8 = plVar8 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar4 = puVar4 + param_2 * 2;
    lVar2 = param_1[1];
    lVar5 = *param_1;
    if (lVar5 != lVar2) {
      do {
        if (*(longlong **)(lVar5 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar5 + 8) + 0x38))();
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != lVar2);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
    *param_1 = (longlong)puVar3;
    param_1[2] = (longlong)(puVar3 + uVar9 * 2);
  }
  else {
    uVar9 = param_2;
    if (param_2 != 0) {
      do {
        puVar7[1] = 0;
        *puVar7 = 0;
        plVar8 = (longlong *)puVar7[1];
        puVar7[1] = 0;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x38))();
        }
        puVar7 = puVar7 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (undefined8 *)param_1[1];
    }
    puVar4 = puVar7 + param_2 * 2;
  }
  param_1[1] = (longlong)puVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180218e40(undefined8 *param_1,longlong param_2)
void FUN_180218e40(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x28;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_180218ece;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x28,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_180218ece:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined4 *)(lVar4 + 0x18 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 3);
      puVar5 = puVar5 + 5;
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 5;
    } while (puVar1 != puVar7);
  }
  FUN_180627ae0(puVar5,param_2);
  *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_2 + 0x20);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 5;
    param_1[2] = puVar2 + lVar6 * 5;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180219020(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180219020(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  
  puVar11 = (undefined4 *)param_1[1];
  puVar5 = (undefined4 *)*param_1;
  lVar9 = ((longlong)puVar11 - (longlong)puVar5) / 0x60;
  puVar4 = (undefined8 *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_1802190a9;
  }
  puVar4 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x60,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar11 = (undefined4 *)param_1[1];
  puVar5 = (undefined4 *)*param_1;
LAB_1802190a9:
  puVar7 = puVar4;
  if (puVar5 != puVar11) {
    lVar10 = (longlong)puVar4 - (longlong)puVar5;
    puVar5 = puVar5 + 0xe;
    do {
      *puVar7 = &UNK_18098bcb0;
      *(undefined8 *)(lVar10 + -0x30 + (longlong)puVar5) = 0;
      *(undefined4 *)(lVar10 + -0x28 + (longlong)puVar5) = 0;
      *puVar7 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar10 + -0x20 + (longlong)puVar5) = 0;
      *(undefined8 *)(lVar10 + -0x30 + (longlong)puVar5) = 0;
      *(undefined4 *)(lVar10 + -0x28 + (longlong)puVar5) = 0;
      *(undefined4 *)(lVar10 + -0x28 + (longlong)puVar5) = puVar5[-10];
      *(undefined8 *)(lVar10 + -0x30 + (longlong)puVar5) = *(undefined8 *)(puVar5 + -0xc);
      *(undefined4 *)(lVar10 + -0x1c + (longlong)puVar5) = puVar5[-7];
      *(undefined4 *)(lVar10 + -0x20 + (longlong)puVar5) = puVar5[-8];
      puVar5[-10] = 0;
      *(undefined8 *)(puVar5 + -0xc) = 0;
      *(undefined8 *)(puVar5 + -8) = 0;
      puVar6 = (undefined8 *)((longlong)puVar5 + lVar10 + -0x18);
      *puVar6 = 0;
      *(undefined8 *)(lVar10 + -0x10 + (longlong)puVar5) = 0;
      *(undefined8 *)(lVar10 + -8 + (longlong)puVar5) = 0;
      *(undefined4 *)(lVar10 + (longlong)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(undefined8 *)(puVar5 + -6);
      *(undefined8 *)(puVar5 + -6) = uVar3;
      uVar3 = *(undefined8 *)(lVar10 + -0x10 + (longlong)puVar5);
      *(undefined8 *)(lVar10 + -0x10 + (longlong)puVar5) = *(undefined8 *)(puVar5 + -4);
      *(undefined8 *)(puVar5 + -4) = uVar3;
      uVar3 = *(undefined8 *)(lVar10 + -8 + (longlong)puVar5);
      *(undefined8 *)(lVar10 + -8 + (longlong)puVar5) = *(undefined8 *)(puVar5 + -2);
      *(undefined8 *)(puVar5 + -2) = uVar3;
      uVar2 = *(undefined4 *)(lVar10 + (longlong)puVar5);
      *(undefined4 *)(lVar10 + (longlong)puVar5) = *puVar5;
      *puVar5 = uVar2;
      *(undefined4 *)(lVar10 + 8 + (longlong)puVar5) = puVar5[2];
      *(undefined4 *)(lVar10 + 0xc + (longlong)puVar5) = puVar5[3];
      *(undefined4 *)(lVar10 + 0x10 + (longlong)puVar5) = puVar5[4];
      *(undefined4 *)(lVar10 + 0x14 + (longlong)puVar5) = puVar5[5];
      *(undefined4 *)(lVar10 + 0x18 + (longlong)puVar5) = puVar5[6];
      *(undefined4 *)(lVar10 + 0x1c + (longlong)puVar5) = puVar5[7];
      *(undefined1 *)(lVar10 + 0x20 + (longlong)puVar5) = *(undefined1 *)(puVar5 + 8);
      *(undefined1 *)(lVar10 + 0x21 + (longlong)puVar5) = *(undefined1 *)((longlong)puVar5 + 0x21);
      puVar7 = puVar7 + 0xc;
      puVar1 = puVar5 + 10;
      puVar5 = puVar5 + 0x18;
    } while (puVar1 != puVar11);
  }
  FUN_180218a80(puVar7,param_2);
  lVar10 = param_1[1];
  lVar8 = *param_1;
  if (lVar8 != lVar10) {
    do {
      FUN_180211720(lVar8);
      lVar8 = lVar8 + 0x60;
    } while (lVar8 != lVar10);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)(puVar7 + 0xc);
    param_1[2] = (longlong)(puVar4 + lVar9 * 0xc);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar8);
}





// 函数: void FUN_180219260(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)
void FUN_180219260(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lStackX_8;
  longlong *plStack_38;
  longlong *plStack_30;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  while (lVar3 = lVar3 >> 3, 0x20 < lVar3) {
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        uVar6 = (longlong)param_2 - (longlong)param_1 >> 3;
        lVar3 = (longlong)param_2 - (longlong)param_1 >> 4;
        if (0 < lVar3) {
          lVar9 = (longlong)(uVar6 - 1) >> 1;
          do {
            lVar2 = param_1[lVar3 + -1];
            lVar3 = lVar3 + -1;
            lVar10 = lVar3;
            while (lVar10 < lVar9) {
              lVar11 = lVar10 * 2 + 2;
              if (*(int *)(param_1[lVar10 * 2 + 1] + 0x10) != 0) {
                if (*(int *)(param_1[lVar11] + 0x10) != 0) {
                  pbVar4 = *(byte **)(param_1[lVar10 * 2 + 1] + 8);
                  lVar14 = *(longlong *)(param_1[lVar11] + 8) - (longlong)pbVar4;
                  do {
                    bVar1 = *pbVar4;
                    uVar5 = (uint)pbVar4[lVar14];
                    if (bVar1 != uVar5) break;
                    pbVar4 = pbVar4 + 1;
                  } while (uVar5 != 0);
                  if ((int)(bVar1 - uVar5) < 1) goto LAB_18021943e;
                }
                lVar11 = lVar10 * 2 + 1;
              }
LAB_18021943e:
              param_1[lVar10] = param_1[lVar11];
              lVar10 = lVar11;
            }
            if ((lVar10 == lVar9) && ((uVar6 & 1) == 0)) {
              param_1[lVar10] = param_1[uVar6 - 1];
              lVar10 = uVar6 - 1;
            }
            while (lVar3 < lVar10) {
              lVar14 = lVar10 + -1 >> 1;
              lVar11 = param_1[lVar14];
              if (*(int *)(lVar2 + 0x10) == 0) break;
              if (*(int *)(lVar11 + 0x10) != 0) {
                pbVar4 = *(byte **)(lVar2 + 8);
                lVar12 = *(longlong *)(lVar11 + 8) - (longlong)pbVar4;
                do {
                  bVar1 = *pbVar4;
                  uVar5 = (uint)pbVar4[lVar12];
                  if (bVar1 != uVar5) break;
                  pbVar4 = pbVar4 + 1;
                } while (uVar5 != 0);
                if ((int)(bVar1 - uVar5) < 1) break;
              }
              param_1[lVar10] = lVar11;
              lVar10 = lVar14;
            }
            param_1[lVar10] = lVar2;
          } while (0 < lVar3);
        }
        if ((longlong)uVar6 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          if (1 < (longlong)uVar6) {
            lStackX_8 = *param_2;
            *param_2 = *param_1;
            FUN_180219eb0(param_1,0,(longlong)param_2 - (longlong)param_1 >> 3,&lStackX_8,param_4);
          }
          param_2 = param_2 + -1;
          uVar6 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < (longlong)uVar6);
        return;
      }
      break;
    }
    FUN_1802199b0(&plStack_38,param_1,param_2,param_4);
    plVar7 = plStack_30;
    plVar8 = plStack_38;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)plStack_38 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)param_2 - (longlong)plStack_30 & 0xfffffffffffffff8U)) {
      FUN_180219260(param_1,plStack_38,param_3,param_4);
      plVar8 = param_2;
      param_1 = plVar7;
    }
    else {
      FUN_180219260(plStack_30,param_2,param_3,param_4);
    }
    param_2 = plVar8;
    lVar3 = (longlong)plVar8 - (longlong)param_1;
  }
  if (((1 < lVar3) && (param_1 != param_2)) && (plVar8 = param_1 + 1, plVar8 != param_2)) {
    plVar7 = param_1 + 2;
    do {
      lVar3 = *plVar8;
      plVar13 = plVar8;
      if (*(int *)(*param_1 + 0x10) != 0) {
        if (*(int *)(lVar3 + 0x10) == 0) {
LAB_18021937f:
          func_0x00018018a000(&lStackX_8);
                    // WARNING: Subroutine does not return
          memmove((longlong)plVar7 - ((longlong)plVar8 - (longlong)param_1),param_1);
        }
        pbVar4 = *(byte **)(*param_1 + 8);
        lVar9 = *(longlong *)(lVar3 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar9];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if (0 < (int)(bVar1 - uVar5)) goto LAB_18021937f;
      }
      while( true ) {
        lVar9 = plVar13[-1];
        if (*(int *)(lVar9 + 0x10) == 0) break;
        if (*(int *)(lVar3 + 0x10) != 0) {
          pbVar4 = *(byte **)(lVar9 + 8);
          lVar10 = *(longlong *)(lVar3 + 8) - (longlong)pbVar4;
          do {
            bVar1 = *pbVar4;
            uVar5 = (uint)pbVar4[lVar10];
            if (bVar1 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          if ((int)(bVar1 - uVar5) < 1) break;
        }
        *plVar13 = lVar9;
        plVar13 = plVar13 + -1;
      }
      *plVar13 = lVar3;
      plVar8 = plVar8 + 1;
      plVar7 = plVar7 + 1;
    } while (plVar8 != param_2);
  }
  return;
}





// 函数: void FUN_1802193c8(void)
void FUN_1802193c8(void)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_R13;
  undefined8 *unaff_R14;
  longlong lVar10;
  undefined8 uStack0000000000000070;
  
  lVar10 = (longlong)(unaff_RBP - 1) >> 1;
  do {
    lVar3 = unaff_R14[unaff_RSI + -1];
    unaff_RSI = unaff_RSI + -1;
    lVar1 = unaff_RSI;
    while (lVar1 < lVar10) {
      lVar7 = lVar1 * 2 + 2;
      if (*(int *)(unaff_R14[lVar1 * 2 + 1] + 0x10) != 0) {
        if (*(int *)(unaff_R14[lVar7] + 0x10) != 0) {
          pbVar4 = *(byte **)(unaff_R14[lVar1 * 2 + 1] + 8);
          lVar9 = *(longlong *)(unaff_R14[lVar7] + 8) - (longlong)pbVar4;
          do {
            bVar2 = *pbVar4;
            uVar5 = (uint)pbVar4[lVar9];
            if (bVar2 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          if ((int)(bVar2 - uVar5) < 1) goto LAB_18021943e;
        }
        lVar7 = lVar1 * 2 + 1;
      }
LAB_18021943e:
      unaff_R14[lVar1] = unaff_R14[lVar7];
      lVar1 = lVar7;
    }
    if ((lVar1 == lVar10) && ((unaff_RBP & 1) == 0)) {
      unaff_R14[lVar1] = unaff_R14[unaff_RBP - 1];
      lVar1 = unaff_RBP - 1;
    }
    while (unaff_RSI < lVar1) {
      lVar9 = lVar1 + -1 >> 1;
      lVar7 = unaff_R14[lVar9];
      if (*(int *)(lVar3 + 0x10) == 0) break;
      if (*(int *)(lVar7 + 0x10) != 0) {
        pbVar4 = *(byte **)(lVar3 + 8);
        lVar8 = *(longlong *)(lVar7 + 8) - (longlong)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar8];
          if (bVar2 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar2 - uVar5) < 1) break;
      }
      unaff_R14[lVar1] = lVar7;
      lVar1 = lVar9;
    }
    unaff_R14[lVar1] = lVar3;
    if (unaff_RSI < 1) {
      if (1 < (longlong)unaff_RBP) {
        puVar6 = (undefined8 *)(unaff_R13 + -8);
        do {
          if (1 < (longlong)unaff_RBP) {
            uStack0000000000000070 = *puVar6;
            *puVar6 = *unaff_R14;
            FUN_180219eb0();
          }
          puVar6 = puVar6 + -1;
          unaff_RBP = (8 - (longlong)unaff_R14) + (longlong)puVar6 >> 3;
        } while (1 < (longlong)unaff_RBP);
      }
      return;
    }
  } while( true );
}





// 函数: void FUN_1802194d6(void)
void FUN_1802194d6(void)

{
  longlong unaff_RBP;
  undefined8 *puVar1;
  longlong unaff_R13;
  undefined8 *unaff_R14;
  undefined8 uStack0000000000000070;
  
  if (1 < unaff_RBP) {
    puVar1 = (undefined8 *)(unaff_R13 + -8);
    do {
      if (1 < unaff_RBP) {
        uStack0000000000000070 = *puVar1;
        *puVar1 = *unaff_R14;
        FUN_180219eb0();
      }
      puVar1 = puVar1 + -1;
      unaff_RBP = (8 - (longlong)unaff_R14) + (longlong)puVar1 >> 3;
    } while (1 < unaff_RBP);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802195b0(undefined8 *param_1,longlong param_2)
void FUN_1802195b0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar3) / 0x28;
  puVar2 = (undefined8 *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_18021963e;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x28,*(undefined1 *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_18021963e:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &UNK_18098bcb0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *puVar5 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)puVar3) = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 1);
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined8 *)(lVar4 + 0x18 + (longlong)puVar3) = puVar3[3];
      puVar5 = puVar5 + 5;
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 5;
    } while (puVar1 != puVar7);
  }
  FUN_180627ae0(puVar5,param_2);
  puVar5[4] = *(undefined8 *)(param_2 + 0x20);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &UNK_180a3c3e0;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      *puVar3 = &UNK_18098bcb0;
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar7);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 5;
    param_1[2] = puVar2 + lVar6 * 5;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802197a0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_1802197a0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar8 = param_3 - param_2;
  uVar4 = lVar8 / 0x28;
  lVar5 = *param_1;
  if ((ulonglong)((param_1[2] - lVar5) / 0x28) < uVar4) {
    lVar5 = 0;
    if (uVar4 != 0) {
      lVar5 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x28,(char)param_1[3]);
    }
    FUN_180219e30(param_2,param_3,lVar5);
    puVar2 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)*param_1;
    if (puVar7 != puVar2) {
      do {
        *puVar7 = &UNK_180a3c3e0;
        if (puVar7[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        *puVar7 = &UNK_18098bcb0;
        puVar7 = puVar7 + 5;
      } while (puVar7 != puVar2);
      puVar7 = (undefined8 *)*param_1;
    }
    if (puVar7 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar7);
    }
    *param_1 = lVar5;
    lVar5 = uVar4 * 0x28 + lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
  }
  else {
    uVar3 = (param_1[1] - lVar5) / 0x28;
    if (uVar3 < uVar4) {
      lVar1 = param_2 + uVar3 * 0x28;
      FUN_180219d60(param_2,lVar1,lVar5,lVar8,0xfffffffffffffffe);
      lVar5 = FUN_180219e30(lVar1,param_3,param_1[1]);
      param_1[1] = lVar5;
    }
    else {
      puVar6 = (undefined8 *)FUN_180219d60(param_2,param_3,lVar5,lVar8,0xfffffffffffffffe);
      puVar2 = (undefined8 *)param_1[1];
      for (puVar7 = puVar6; puVar7 != puVar2; puVar7 = puVar7 + 5) {
        *puVar7 = &UNK_180a3c3e0;
        if (puVar7[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        *puVar7 = &UNK_18098bcb0;
      }
      param_1[1] = (longlong)puVar6;
    }
  }
  return;
}





