#include "TaleWorlds.Native.Split.h"

// 99_part_01_part033.c - 7 个函数

// 函数: void FUN_1800c0da0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)
void FUN_1800c0da0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)param_4[1];
  uVar9 = *(undefined8 *)(lVar2 + 0x2ec);
  lVar3 = *(longlong *)*param_4;
  *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(lVar2 + 0x2e4);
  *(undefined8 *)(lVar3 + 0x1c) = uVar9;
  uVar9 = *(undefined8 *)(lVar2 + 0x2fc);
  *(undefined8 *)(lVar3 + 0x24) = *(undefined8 *)(lVar2 + 0x2f4);
  *(undefined8 *)(lVar3 + 0x2c) = uVar9;
  uVar9 = *(undefined8 *)(lVar2 + 0x30c);
  *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(lVar2 + 0x304);
  *(undefined8 *)(lVar3 + 0x3c) = uVar9;
  uVar9 = *(undefined8 *)(lVar2 + 0x31c);
  *(undefined8 *)(lVar3 + 0x44) = *(undefined8 *)(lVar2 + 0x314);
  *(undefined8 *)(lVar3 + 0x4c) = uVar9;
  uVar6 = *(undefined4 *)(lVar2 + 0x328);
  uVar7 = *(undefined4 *)(lVar2 + 0x32c);
  uVar8 = *(undefined4 *)(lVar2 + 0x330);
  *(undefined4 *)(lVar3 + 0x54) = *(undefined4 *)(lVar2 + 0x324);
  *(undefined4 *)(lVar3 + 0x58) = uVar6;
  *(undefined4 *)(lVar3 + 0x5c) = uVar7;
  *(undefined4 *)(lVar3 + 0x60) = uVar8;
  *(undefined8 *)(lVar3 + 100) = *(undefined8 *)(lVar2 + 0x334);
  plVar4 = *(longlong **)*param_4;
  if ((((char)plVar4[2] == '\0') && (*(char *)((longlong)plVar4 + 0x11) == '\0')) && (*plVar4 != 0))
  {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined2 *)(plVar4 + 2) = 1;
  *plVar4 = lVar1;
  plVar4[1] = param_2;
  puVar5 = *(undefined8 **)*param_4;
  if ((*(char *)((longlong)puVar5 + 0x66) == '\0') && (*(char *)(puVar5 + 2) != '\0')) {
    uVar9 = FUN_18062b420(_DAT_180c8ed18,puVar5[1],CONCAT71((int7)((ulonglong)lVar2 >> 8),3));
                    // WARNING: Subroutine does not return
    memcpy(uVar9,*puVar5,puVar5[1]);
  }
  return;
}



undefined4 FUN_1800c0ef0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plStack_50;
  longlong *plStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  longlong *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_50 = (longlong *)0x0;
  plStack_48 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  uStack_38 = 0;
  auStack_40[0] = 0;
  FUN_18022f2e0(&plStack_50,param_1,0);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  uVar2 = FUN_180235410(&plStack_50,param_2,param_3,param_4,uVar3);
  if ((plStack_50 != (longlong *)0x0) && (plStack_48 != (longlong *)0x0)) {
    if (cStack_1e != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_40);
    if (cStack_20 != '\0') {
      FUN_180079520(plStack_50);
    }
    if (cStack_1f != '\0') {
      FUN_180079520(plStack_50);
    }
    plVar1 = plStack_48;
    plStack_48 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_40);
  if (plStack_28 != (longlong *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  return uVar2;
}



undefined4
FUN_1800c1040(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plStack_50;
  longlong *plStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  longlong *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_50 = (longlong *)0x0;
  plStack_48 = (longlong *)0x0;
  plStack_28 = (longlong *)0x0;
  uStack_38 = 0;
  auStack_40[0] = 0;
  FUN_18022f2e0(&plStack_50,param_1,0);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  uVar2 = FUN_1802350e0(&plStack_50,param_2,param_3,param_4,param_5);
  if ((plStack_50 != (longlong *)0x0) && (plStack_48 != (longlong *)0x0)) {
    if (cStack_1e != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_40);
    if (cStack_20 != '\0') {
      FUN_180079520(plStack_50);
    }
    if (cStack_1f != '\0') {
      FUN_180079520(plStack_50);
    }
    plVar1 = plStack_48;
    plStack_48 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_40);
  if (plStack_28 != (longlong *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  return uVar2;
}



undefined4 FUN_1800c11a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plStack_40;
  longlong *plStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  longlong *plStack_18;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_40 = (longlong *)0x0;
  plStack_38 = (longlong *)0x0;
  plStack_18 = (longlong *)0x0;
  uStack_28 = 0;
  auStack_30[0] = 0;
  FUN_18022f2e0(&plStack_40,param_1,0,param_4,uVar3);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  uVar2 = FUN_180235000(&plStack_40,param_2);
  if ((plStack_40 != (longlong *)0x0) && (plStack_38 != (longlong *)0x0)) {
    if (cStack_e != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_30);
    if (cStack_10 != '\0') {
      FUN_180079520(plStack_40);
    }
    if (cStack_f != '\0') {
      FUN_180079520(plStack_40);
    }
    plVar1 = plStack_38;
    plStack_38 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_30);
  if (plStack_18 != (longlong *)0x0) {
    (**(code **)(*plStack_18 + 0x38))();
  }
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  return uVar2;
}






// 函数: void FUN_1800c12e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800c12e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plStack_40;
  longlong *plStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  longlong *plStack_18;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_40 = (longlong *)0x0;
  plStack_38 = (longlong *)0x0;
  plStack_18 = (longlong *)0x0;
  uStack_28 = 0;
  auStack_30[0] = 0;
  FUN_18022f2e0(&plStack_40,param_1,0,param_4,uVar2);
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  FUN_180237850(&plStack_40,param_2);
  if ((plStack_40 != (longlong *)0x0) && (plStack_38 != (longlong *)0x0)) {
    if (cStack_e != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_30);
    if (cStack_10 != '\0') {
      FUN_180079520(plStack_40);
    }
    if (cStack_f != '\0') {
      FUN_180079520(plStack_40);
    }
    plVar1 = plStack_38;
    plStack_38 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_30);
  if (plStack_18 != (longlong *)0x0) {
    (**(code **)(*plStack_18 + 0x38))();
  }
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (longlong *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c1420(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)
void FUN_1800c1420(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c86930;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  uStack_78 = 0;
  auStack_70[0] = 0;
  uStack_98 = param_2;
  if (param_3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uStack_78 = (undefined4)lVar2;
    strcpy_s(auStack_70,0x40);
  }
  FUN_1800b08e0(uVar1,param_2,&puStack_88,param_4);
  uStack_a8 = 1;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}



longlong * FUN_1800c1520(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined *puStack_38;
  byte *pbStack_30;
  int iStack_28;
  undefined4 uStack_20;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  FUN_1806279c0(&puStack_38,param_3,param_3,param_4,0,0xfffffffffffffffe);
  puVar10 = *(undefined8 **)(param_1 + 0x30);
  puVar8 = puVar1;
  if (puVar10 != (undefined8 *)0x0) {
    do {
      if (iStack_28 == 0) {
        bVar4 = false;
        puVar11 = (undefined8 *)puVar10[1];
      }
      else {
        if (*(int *)(puVar10 + 6) == 0) {
          bVar4 = true;
        }
        else {
          pbVar5 = pbStack_30;
          do {
            uVar6 = (uint)pbVar5[puVar10[5] - (longlong)pbStack_30];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar4 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar11 = (undefined8 *)puVar10[1];
            goto LAB_1800c15ba;
          }
        }
        puVar11 = (undefined8 *)*puVar10;
      }
LAB_1800c15ba:
      puVar9 = puVar10;
      if (bVar4) {
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar10 = puVar11;
    } while (puVar11 != (undefined8 *)0x0);
    if (puVar9 != puVar1) {
      if (*(int *)(puVar9 + 6) == 0) goto LAB_1800c15fa;
      if (iStack_28 != 0) {
        pbVar5 = (byte *)puVar9[5];
        lVar12 = (longlong)pbStack_30 - (longlong)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar12];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_1800c15fa;
      }
    }
  }
  puVar9 = puVar1;
LAB_1800c15fa:
  puStack_38 = &UNK_180a3c3e0;
  if (pbStack_30 == (byte *)0x0) {
    pbStack_30 = (byte *)0x0;
    uStack_20 = 0;
    puStack_38 = &UNK_18098bcb0;
    if (puVar9 == puVar1) {
      *param_2 = 0;
    }
    else {
      plVar3 = (longlong *)puVar9[8];
      *param_2 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
      }
    }
    return param_2;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800c1670(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  uVar7 = 0;
  puVar4 = (undefined8 *)(_DAT_180c86970 + 0x50);
  puVar5 = *(undefined8 **)(_DAT_180c86970 + 0x60);
  puVar3 = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      iVar2 = memcmp(puVar5 + 4,param_3,0x10,param_4,uVar7,uVar8);
      if (iVar2 < 0) {
        puVar6 = (undefined8 *)*puVar5;
      }
      else {
        puVar6 = (undefined8 *)puVar5[1];
        puVar3 = puVar5;
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)0x0);
    if ((puVar3 != puVar4) && (iVar2 = memcmp(param_3,puVar3 + 4,0x10), -1 < iVar2))
    goto LAB_1800c1703;
  }
  puVar3 = puVar4;
LAB_1800c1703:
  if (puVar3 == puVar4) {
    *param_2 = 0;
  }
  else {
    plVar1 = (longlong *)puVar3[6];
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800c1750(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  
  if (-1 < param_3) {
    if ((ulonglong)(longlong)param_3 <
        (ulonglong)
        (*(longlong *)(_DAT_180c86970 + 0x88) - *(longlong *)(_DAT_180c86970 + 0x80) >> 3)) {
      plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86970 + 0x80) + (longlong)param_3 * 8);
      *param_2 = (longlong)plVar1;
      if (plVar1 == (longlong *)0x0) {
        return param_2;
      }
      (**(code **)(*plVar1 + 0x28))();
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1800c17c0(void)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined *puStack_30;
  byte *pbStack_28;
  int iStack_20;
  
  lVar12 = _DAT_180c86970;
  puVar1 = (undefined8 *)(_DAT_180c86970 + 0xa0);
  FUN_1806279c0(&puStack_30);
  puVar10 = *(undefined8 **)(lVar12 + 0xb0);
  puVar8 = puVar1;
  if (puVar10 != (undefined8 *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar3 = false;
        puVar11 = (undefined8 *)puVar10[1];
      }
      else {
        if (*(int *)(puVar10 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar5 = pbStack_28;
          do {
            uVar6 = (uint)pbVar5[puVar10[5] - (longlong)pbStack_28];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar3 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar11 = (undefined8 *)puVar10[1];
            goto LAB_1800c1857;
          }
        }
        puVar11 = (undefined8 *)*puVar10;
      }
LAB_1800c1857:
      puVar9 = puVar10;
      if (bVar3) {
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar10 = puVar11;
    } while (puVar11 != (undefined8 *)0x0);
    if (puVar9 != puVar1) {
      if (*(int *)(puVar9 + 6) == 0) goto LAB_1800c189a;
      if (iStack_20 != 0) {
        pbVar5 = (byte *)puVar9[5];
        lVar12 = (longlong)pbStack_28 - (longlong)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar12];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_1800c189a;
      }
    }
  }
  puVar9 = puVar1;
LAB_1800c189a:
  puStack_30 = &UNK_180a3c3e0;
  if (pbStack_28 == (byte *)0x0) {
    uVar4 = 0xffffffff;
    if (puVar9 != puVar1) {
      uVar4 = *(undefined4 *)(puVar9 + 8);
    }
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 * FUN_1800c18f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  puVar1 = param_1 + 4;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 3;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  puVar1 = param_1 + 10;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 3;
  *puVar1 = puVar1;
  param_1[0xb] = puVar1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 3;
  puVar1 = param_1 + 0x14;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 3;
  *puVar1 = puVar1;
  param_1[0x15] = puVar1;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  return param_1;
}






// 函数: void FUN_1800c19c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800c19c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800c2ca0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800c19f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800c19f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800c2ff0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800c1a20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800c1a20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800c2ca0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800c1a50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800c1a50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800c2ff0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




