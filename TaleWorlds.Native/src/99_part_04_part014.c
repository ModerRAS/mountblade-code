#include "TaleWorlds.Native.Split.h"

// 99_part_04_part014.c - 5 个函数

// 函数: void FUN_1802638b0(longlong *param_1)
void FUN_1802638b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 8) {
    *puVar2 = &UNK_180a3c3e0;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = &UNK_18098bcb0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_180263950(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180263950(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  lVar3 = *param_1;
  uVar2 = (longlong)puVar1 - lVar3 >> 6;
  if (uVar2 < param_2) {
    FUN_180263b10(param_1,param_2 - uVar2,param_3,param_4,0xfffffffffffffffe);
  }
  else {
    puVar4 = (undefined8 *)(param_2 * 0x40 + lVar3);
    if (puVar4 != puVar1) {
      do {
        *puVar4 = &UNK_180a3c3e0;
        if (puVar4[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 3) = 0;
        *puVar4 = &UNK_18098bcb0;
        puVar4 = puVar4 + 8;
      } while (puVar4 != puVar1);
      lVar3 = *param_1;
    }
    param_1[1] = param_2 * 0x40 + lVar3;
  }
  return;
}






// 函数: void FUN_180263a20(longlong *param_1,ulonglong param_2)
void FUN_180263a20(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  lVar4 = *param_1;
  uVar2 = (lVar1 - lVar4) / 0x28;
  if (uVar2 < param_2) {
    lVar3 = param_2 - uVar2;
    FUN_180263de0(param_1,lVar3,lVar1 - lVar4,lVar3,0xfffffffffffffffe);
  }
  else {
    lVar3 = param_2 * 0x28 + lVar4;
    if (lVar3 != lVar1) {
      do {
        *(undefined8 *)(lVar3 + 8) = &UNK_180a3c3e0;
        if (*(longlong *)(lVar3 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 8) = &UNK_18098bcb0;
        lVar3 = lVar3 + 0x28;
      } while (lVar3 != lVar1);
      lVar4 = *param_1;
    }
    param_1[1] = param_2 * 0x28 + lVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180263b10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180263b10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar10 = (undefined8 *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar10 >> 6) < param_2) {
    puVar9 = (undefined8 *)*param_1;
    lVar6 = (longlong)puVar10 - (longlong)puVar9 >> 6;
    uVar12 = lVar6 * 2;
    if (lVar6 == 0) {
      uVar12 = 1;
    }
    if (uVar12 < lVar6 + param_2) {
      uVar12 = lVar6 + param_2;
    }
    puVar7 = (undefined8 *)0x0;
    if (uVar12 != 0) {
      puVar7 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,uVar12 << 6,*(undefined1 *)(param_1 + 3),param_4,
                             0xfffffffffffffffe);
      puVar10 = (undefined8 *)param_1[1];
      puVar9 = (undefined8 *)*param_1;
    }
    puVar8 = puVar7;
    if (puVar9 != puVar10) {
      lVar6 = (longlong)puVar7 - (longlong)puVar9;
      puVar9 = puVar9 + 1;
      do {
        *puVar8 = &UNK_18098bcb0;
        *(undefined8 *)(lVar6 + (longlong)puVar9) = 0;
        *(undefined4 *)(lVar6 + 8 + (longlong)puVar9) = 0;
        *puVar8 = &UNK_180a3c3e0;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)puVar9) = 0;
        *(undefined8 *)(lVar6 + (longlong)puVar9) = 0;
        *(undefined4 *)(lVar6 + 8 + (longlong)puVar9) = 0;
        *(undefined4 *)(lVar6 + 8 + (longlong)puVar9) = *(undefined4 *)(puVar9 + 1);
        *(undefined8 *)(lVar6 + (longlong)puVar9) = *puVar9;
        *(undefined4 *)(lVar6 + 0x14 + (longlong)puVar9) = *(undefined4 *)((longlong)puVar9 + 0x14);
        *(undefined4 *)(lVar6 + 0x10 + (longlong)puVar9) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)(puVar9 + 1) = 0;
        *puVar9 = 0;
        puVar9[2] = 0;
        *(undefined1 *)(lVar6 + 0x18 + (longlong)puVar9) = *(undefined1 *)(puVar9 + 3);
        *(undefined1 *)(lVar6 + 0x19 + (longlong)puVar9) = *(undefined1 *)((longlong)puVar9 + 0x19);
        *(undefined1 *)(lVar6 + 0x1a + (longlong)puVar9) = *(undefined1 *)((longlong)puVar9 + 0x1a);
        *(undefined1 *)(lVar6 + 0x1b + (longlong)puVar9) = *(undefined1 *)((longlong)puVar9 + 0x1b);
        *(undefined1 *)(lVar6 + 0x1c + (longlong)puVar9) = *(undefined1 *)((longlong)puVar9 + 0x1c);
        *(undefined1 *)(lVar6 + 0x1d + (longlong)puVar9) = *(undefined1 *)((longlong)puVar9 + 0x1d);
        *(undefined4 *)(lVar6 + 0x20 + (longlong)puVar9) = *(undefined4 *)(puVar9 + 4);
        uVar3 = *(undefined4 *)(puVar9 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x2c);
        uVar5 = *(undefined4 *)(puVar9 + 6);
        puVar2 = (undefined4 *)((longlong)puVar9 + lVar6 + 0x24);
        *puVar2 = *(undefined4 *)((longlong)puVar9 + 0x24);
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar8 = puVar8 + 8;
        puVar1 = puVar9 + 7;
        puVar9 = puVar9 + 8;
      } while (puVar1 != puVar10);
    }
    if (param_2 != 0) {
      puVar10 = puVar8 + 1;
      uVar11 = param_2;
      do {
        puVar10[-1] = &UNK_18098bcb0;
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        puVar10[-1] = &UNK_180a3c3e0;
        puVar10[2] = 0;
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        *(undefined4 *)(puVar10 + 3) = 0;
        *(undefined2 *)((longlong)puVar10 + 0x1c) = 0x100;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x2c) = 0;
        puVar10 = puVar10 + 8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = (undefined8 *)*param_1;
    if (puVar9 != puVar10) {
      do {
        *puVar9 = &UNK_180a3c3e0;
        if (puVar9[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 3) = 0;
        *puVar9 = &UNK_18098bcb0;
        puVar9 = puVar9 + 8;
      } while (puVar9 != puVar10);
      puVar9 = (undefined8 *)*param_1;
    }
    if (puVar9 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar9);
    }
    *param_1 = puVar7;
    param_1[1] = puVar8 + param_2 * 8;
    param_1[2] = puVar7 + uVar12 * 8;
  }
  else {
    uVar12 = param_2;
    if (param_2 != 0) {
      do {
        *puVar10 = &UNK_18098bcb0;
        puVar10[1] = 0;
        *(undefined4 *)(puVar10 + 2) = 0;
        *puVar10 = &UNK_180a3c3e0;
        puVar10[3] = 0;
        puVar10[1] = 0;
        *(undefined4 *)(puVar10 + 2) = 0;
        *(undefined4 *)(puVar10 + 4) = 0;
        *(undefined2 *)((longlong)puVar10 + 0x24) = 0x100;
        *(undefined4 *)(puVar10 + 5) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x34) = 0;
        puVar10 = puVar10 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      puVar10 = (undefined8 *)param_1[1];
    }
    param_1[1] = puVar10 + param_2 * 8;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180263de0(longlong *param_1,ulonglong param_2)
void FUN_180263de0(longlong *param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  
  puVar8 = (undefined1 *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar8) / 0x28) < param_2) {
    puVar3 = (undefined1 *)*param_1;
    lVar6 = ((longlong)puVar8 - (longlong)puVar3) / 0x28;
    uVar9 = lVar6 * 2;
    if (lVar6 == 0) {
      uVar9 = 1;
    }
    if (uVar9 < lVar6 + param_2) {
      uVar9 = lVar6 + param_2;
    }
    puVar1 = (undefined1 *)0x0;
    if (uVar9 != 0) {
      puVar1 = (undefined1 *)
               FUN_18062b420(_DAT_180c8ed18,uVar9 * 0x28,(char)param_1[3],puVar8,0xfffffffffffffffe)
      ;
      puVar8 = (undefined1 *)param_1[1];
      puVar3 = (undefined1 *)*param_1;
    }
    puVar2 = puVar1;
    if (puVar3 != puVar8) {
      lVar6 = (longlong)puVar3 - (longlong)puVar1;
      puVar4 = (undefined8 *)(puVar1 + 0x10);
      do {
        *puVar2 = *(undefined1 *)(lVar6 + -0x10 + (longlong)puVar4);
        puVar4[-1] = &UNK_18098bcb0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        puVar4[-1] = &UNK_180a3c3e0;
        puVar4[2] = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar6 + 8 + (longlong)puVar4);
        *puVar4 = *(undefined8 *)(lVar6 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)(lVar6 + 0x14 + (longlong)puVar4);
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(lVar6 + 0x10 + (longlong)puVar4);
        *(undefined4 *)(lVar6 + 8 + (longlong)puVar4) = 0;
        *(undefined8 *)(lVar6 + (longlong)puVar4) = 0;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)puVar4) = 0;
        puVar2 = puVar2 + 0x28;
        puVar3 = (undefined1 *)((longlong)puVar4 + lVar6 + 0x18);
        puVar4 = puVar4 + 5;
      } while (puVar3 != puVar8);
    }
    if (param_2 != 0) {
      puVar4 = (undefined8 *)(puVar2 + 0x10);
      uVar7 = param_2;
      do {
        puVar4[-1] = &UNK_18098bcb0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        puVar4[-1] = &UNK_180a3c3e0;
        puVar4[2] = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined1 *)(puVar4 + -2) = 0;
        puVar4 = puVar4 + 5;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar6 = param_1[1];
    lVar5 = *param_1;
    if (lVar5 != lVar6) {
      do {
        *(undefined8 *)(lVar5 + 8) = &UNK_180a3c3e0;
        if (*(longlong *)(lVar5 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined4 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 8) = &UNK_18098bcb0;
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != lVar6);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
    *param_1 = (longlong)puVar1;
    param_1[1] = (longlong)(puVar2 + param_2 * 0x28);
    param_1[2] = (longlong)(puVar1 + uVar9 * 0x28);
  }
  else {
    if (param_2 != 0) {
      puVar4 = (undefined8 *)(puVar8 + 0x10);
      uVar9 = param_2;
      do {
        puVar4[-1] = &UNK_18098bcb0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        puVar4[-1] = &UNK_180a3c3e0;
        puVar4[2] = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        *puVar8 = 0;
        puVar8 = puVar8 + 0x28;
        puVar4 = puVar4 + 5;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar8 = (undefined1 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar8 + param_2 * 0x28);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong * FUN_180264090(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(_DAT_180c8a9e8 + 8);
  puVar3 = *(ulonglong **)
            (lVar1 + ((param_3[1] ^ *param_3) % (ulonglong)*(uint *)(_DAT_180c8a9e8 + 0x10)) * 8);
  do {
    if (puVar3 == (ulonglong *)0x0) {
LAB_1802640f7:
      lVar4 = *(longlong *)(_DAT_180c8a9e8 + 0x10);
      puVar3 = *(ulonglong **)(lVar1 + lVar4 * 8);
LAB_1802640ff:
      if (puVar3 == *(ulonglong **)(lVar1 + lVar4 * 8)) {
        *param_2 = 0;
      }
      else {
        plVar2 = (longlong *)puVar3[2];
        *param_2 = (ulonglong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
      }
      return param_2;
    }
    if ((*param_3 == *puVar3) && (param_3[1] == puVar3[1])) {
      if (puVar3 != (ulonglong *)0x0) {
        lVar4 = *(longlong *)(_DAT_180c8a9e8 + 0x10);
        goto LAB_1802640ff;
      }
      goto LAB_1802640f7;
    }
    puVar3 = (ulonglong *)puVar3[3];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




