#include "TaleWorlds.Native.Split.h"

// 03_rendering_part154.c - 16 个函数

// 函数: void FUN_1803622c0(undefined8 param_1)
void FUN_1803622c0(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined4 uStack_1c8;
  undefined **appuStack_1c0 [2];
  undefined8 uStack_1b0;
  undefined *apuStack_1a8 [11];
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uStack_1c8 = 0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0x16;
  strcpy_s(auStack_130,0x40,&DAT_180a1fdd8);
  FUN_1800b8300(apuStack_1a8,&puStack_148);
  uStack_150 = 0xb;
  uStack_1c8 = 1;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 4;
  strcpy_s(auStack_d0,0x40,&DAT_180a1fdf8);
  FUN_1800b8300(apuStack_1a8,&puStack_e8);
  uStack_150 = 3;
  uStack_1c8 = 2;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 5;
  strcpy_s(auStack_70,0x40,&DAT_180a1fdf0);
  FUN_1800b8300(apuStack_1a8,&puStack_88);
  uStack_150 = 3;
  uStack_1c8 = 4;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}



// WARNING: Removing unreachable block (ram,0x000180362701)
// WARNING: Removing unreachable block (ram,0x000180362738)
// WARNING: Removing unreachable block (ram,0x000180362708)
// WARNING: Removing unreachable block (ram,0x000180362712)
// WARNING: Removing unreachable block (ram,0x000180362720)
// WARNING: Removing unreachable block (ram,0x000180362727)
// WARNING: Removing unreachable block (ram,0x000180362732)
// WARNING: Removing unreachable block (ram,0x00018036273a)
// WARNING: Removing unreachable block (ram,0x00018036275a)
// WARNING: Removing unreachable block (ram,0x000180362770)
// WARNING: Removing unreachable block (ram,0x00018036277e)
// WARNING: Removing unreachable block (ram,0x000180362785)
// WARNING: Removing unreachable block (ram,0x00018036273f)
// WARNING: Removing unreachable block (ram,0x0001803627bb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803624e0(undefined8 *param_1)
void FUN_1803624e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar12;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined4 uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  longlong lVar11;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar6 = param_1;
  FUN_1803456e0();
  *puVar6 = &UNK_180a20018;
  plVar7 = puVar6 + 0x12;
  *plVar7 = (longlong)&UNK_18098bcb0;
  iVar12 = 0;
  puVar6[0x13] = 0;
  *(undefined4 *)(puVar6 + 0x14) = 0;
  *plVar7 = (longlong)&UNK_180a3c3e0;
  puVar6[0x15] = 0;
  puVar6[0x13] = 0;
  *(undefined4 *)(puVar6 + 0x14) = 0;
  plVar9 = param_1 + 0x16;
  *plVar9 = (longlong)&UNK_18098bcb0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *plVar9 = (longlong)&UNK_180a3c3e0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar6 = param_1 + 0x1a;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 3;
  *puVar6 = puVar6;
  param_1[0x1b] = puVar6;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x8a) = 1;
  (**(code **)(*plVar7 + 0x10))(plVar7,&DAT_18098bc73);
  (**(code **)(*plVar9 + 0x10))(plVar9,&UNK_180a1ff90);
  plVar9 = param_1 + 0x20;
  *plVar9 = (longlong)&UNK_180a1ff90;
  param_1[0x21] = &UNK_180a07998;
  param_1[0x22] = &UNK_180a1ff8c;
  param_1[0x23] = &UNK_180a1ff80;
  do {
    lVar1 = *plVar9;
    puStack_128 = &UNK_180a3c3e0;
    uStack_110 = 0;
    puStack_120 = (undefined8 *)0x0;
    uStack_118 = 0;
    if (lVar1 != 0) {
      lVar10 = -1;
      do {
        lVar11 = lVar10;
        lVar10 = lVar11 + 1;
      } while (*(char *)(lVar1 + lVar10) != '\0');
      if ((int)lVar10 != 0) {
        iVar8 = (int)lVar11 + 2;
        iVar12 = iVar8;
        if (iVar8 < 0x10) {
          iVar12 = 0x10;
        }
        puVar4 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar12,0x13);
        *puVar4 = 0;
        puStack_120 = (undefined8 *)puVar4;
        uVar3 = FUN_18064e990(puVar4);
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
                    // WARNING: Subroutine does not return
        memcpy(puVar4,lVar1,iVar8);
      }
    }
    uStack_118 = 0;
    puVar5 = puVar6;
    for (puVar2 = (undefined8 *)param_1[0x1c]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[1]) {
      puVar5 = puVar2;
    }
    if ((puVar5 == puVar6) || (*(int *)(puVar5 + 6) != 0)) {
      puVar5 = (undefined8 *)FUN_1800c2ab0(puVar6,auStack_40);
      puVar5 = (undefined8 *)*puVar5;
    }
    *(int *)(puVar5 + 8) = iVar12;
    puStack_120 = (undefined8 *)0x0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puStack_128 = &UNK_18098bcb0;
    iVar12 = iVar12 + 1;
    plVar9 = plVar9 + 1;
  } while (iVar12 < 4);
  plVar9 = (longlong *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  puStack_128 = &UNK_180a3c3e0;
  uStack_110 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_118 = 0;
  puVar6 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar6 = 0;
  puStack_120 = puVar6;
  uVar3 = FUN_18064e990(puVar6);
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
  *puVar6 = 0x615020746e657645;
  *(undefined2 *)(puVar6 + 1) = 0x6874;
  *(undefined1 *)((longlong)puVar6 + 10) = 0;
  uStack_118 = 10;
  FUN_1803460a0(param_1,&puStack_128,param_1 + 0x12,9);
  puStack_128 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}



undefined8 FUN_180362cb0(undefined8 param_1,ulonglong param_2)

{
  FUN_180362cf0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x150);
  }
  return param_1;
}





// 函数: void FUN_180362cf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180362cf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a20018;
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)param_1[0x24] + 0xd8))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)param_1[0x24] + 0x80))();
      if (cVar2 != '\0') {
        (**(code **)(*(longlong *)param_1[0x24] + 0x68))();
      }
    }
  }
  plVar1 = (longlong *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x24] + 0x38))();
  }
  FUN_180058370(param_1 + 0x1a,param_1[0x1c],param_3,param_4,uVar3);
  param_1[0x16] = &UNK_180a3c3e0;
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x16] = &UNK_18098bcb0;
  param_1[0x12] = &UNK_180a3c3e0;
  if (param_1[0x13] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x12] = &UNK_18098bcb0;
  uVar3 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1cc50;
  FUN_180080df0();
  *param_1 = &UNK_180a1cdc0;
  FUN_1802f5b10(param_1 + 4,param_1[6],param_3,param_4,uVar3);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180362e30(longlong *param_1)
void FUN_180362e30(longlong *param_1)

{
  char cVar1;
  char cVar2;
  
  if ((*(char *)(_DAT_180c86878 + 0x210) == '\0') && (0 < (int)param_1[0x14])) {
    if (((longlong *)param_1[0x24] == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*(longlong *)param_1[0x24] + 0xd8))(), cVar1 == '\0')) {
      (**(code **)(*param_1 + 0x168))(param_1);
    }
    (**(code **)(*(longlong *)param_1[0x24] + 0xa8))((longlong *)param_1[0x24],param_1[3] + 0xa0);
    cVar1 = *(char *)(*(longlong *)(param_1[3] + 0x20) + 0x27b9);
    if ((((longlong *)param_1[0x24] != (longlong *)0x0) &&
        (cVar2 = (**(code **)(*(longlong *)param_1[0x24] + 0xd8))(), cVar2 != '\0')) &&
       (cVar1 == '\0')) {
      (**(code **)(*param_1 + 0x170))(param_1);
    }
  }
  return;
}





// 函数: void FUN_180362e61(longlong *param_1)
void FUN_180362e61(longlong *param_1)

{
  char cVar1;
  char cVar2;
  longlong *unaff_RBX;
  
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0xd8))();
    if (cVar1 != '\0') goto LAB_180362e84;
  }
  (**(code **)(*unaff_RBX + 0x168))();
LAB_180362e84:
  (**(code **)(*(longlong *)unaff_RBX[0x24] + 0xa8))
            ((longlong *)unaff_RBX[0x24],unaff_RBX[3] + 0xa0);
  cVar1 = *(char *)(*(longlong *)(unaff_RBX[3] + 0x20) + 0x27b9);
  if ((longlong *)unaff_RBX[0x24] != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)unaff_RBX[0x24] + 0xd8))();
    if ((cVar2 != '\0') && (cVar1 == '\0')) {
      (**(code **)(*unaff_RBX + 0x170))();
    }
  }
  return;
}





// 函数: void FUN_180362edd(void)
void FUN_180362edd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180362ef0(longlong *param_1)
void FUN_180362ef0(longlong *param_1)

{
  char cVar1;
  
  if ((*(char *)(_DAT_180c86878 + 0x210) == '\0') && ((longlong *)param_1[0x24] != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*(longlong *)param_1[0x24] + 0xd8))();
    if (cVar1 != '\0') {
      if ((char)param_1[0x11] == '\0') {
        (**(code **)(*(longlong *)param_1[0x24] + 0xa8))
                  ((longlong *)param_1[0x24],param_1[3] + 0xa0);
      }
      if ((((char)param_1[0x29] == '\0') &&
          (*(char *)(*(longlong *)(param_1[3] + 0x20) + 0x27b9) != '\0')) &&
         (*(char *)(*(longlong *)(param_1[3] + 0x20) + 0x60b90) != '\0')) {
        (**(code **)(*param_1 + 0x170))(param_1);
        if ((char)param_1[0x11] == '\0') {
          (**(code **)(*(longlong *)param_1[0x24] + 0xa8))
                    ((longlong *)param_1[0x24],param_1[3] + 0xa0);
        }
        *(undefined1 *)(param_1 + 0x29) = 1;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180362fb0(undefined8 param_1)
void FUN_180362fb0(undefined8 param_1)

{
  undefined1 auStack_2a8 [32];
  undefined4 uStack_288;
  undefined **appuStack_280 [2];
  undefined8 uStack_270;
  undefined *apuStack_268 [11];
  undefined4 uStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [72];
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [72];
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_270 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
  uStack_288 = 0;
  puStack_208 = &UNK_1809fcc58;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 10;
  strcpy_s(auStack_1f0,0x40,&DAT_180a1ff70);
  FUN_1800b8300(apuStack_268,&puStack_208);
  uStack_210 = 9;
  uStack_288 = 1;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_208 = &UNK_18098bcb0;
  puStack_1a8 = &UNK_1809fcc58;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0xf;
  strcpy_s(auStack_190,0x40,&DAT_180a1ffd8);
  FUN_1800b8300(apuStack_268,&puStack_1a8);
  uStack_210 = 3;
  uStack_288 = 2;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_1a8 = &UNK_18098bcb0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0x16;
  strcpy_s(auStack_130,0x40,&DAT_180a1ffa0);
  FUN_1800b8300(apuStack_268,&puStack_148);
  uStack_210 = 1;
  uStack_288 = 4;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x16;
  strcpy_s(auStack_d0,0x40,&DAT_180a1fff8);
  FUN_1800b8300(apuStack_268,&puStack_e8);
  uStack_210 = 1;
  uStack_288 = 8;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xc;
  strcpy_s(auStack_70,0x40,&DAT_180a1ffe8);
  FUN_1800b8300(apuStack_268,&puStack_88);
  uStack_210 = 9;
  uStack_288 = 0x10;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_2a8);
}





// 函数: void FUN_180363320(longlong *param_1)
void FUN_180363320(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(code **)(*param_1 + 0x178) != (code *)&UNK_180363750) {
    (**(code **)(*param_1 + 0x178))();
    return;
  }
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)param_1[0x24] + 0xd8))();
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0x24] + 0x68))();
    }
  }
  plVar1 = (longlong *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018036391f. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x38))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180363350(longlong param_1,longlong param_2,longlong *param_3)
void FUN_180363350(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_168 [32];
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  int iStack_d8;
  undefined auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  iVar6 = *(int *)(param_2 + 0x10);
  if ((iVar6 == 10) && (iVar5 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a1ff70), iVar5 == 0)) {
    (**(code **)(*_DAT_180c86878 + 0x1e8))(_DAT_180c86878,&plStack_110);
    plStack_118 = plStack_108;
    plVar2 = plStack_110;
    if (plStack_110 != plStack_108) {
      plVar8 = plStack_110 + 1;
      do {
        puStack_e8 = &UNK_1809fcc28;
        puStack_e0 = auStack_d0;
        auStack_d0[0] = 0;
        iStack_d8 = (int)plVar8[1];
        puVar9 = &DAT_18098bc73;
        if ((undefined *)*plVar8 != (undefined *)0x0) {
          puVar9 = (undefined *)*plVar8;
        }
        plStack_120 = plVar8;
        strcpy_s(auStack_d0,0x80,puVar9);
        puStack_148 = &UNK_180a3c3e0;
        uStack_130 = 0;
        puStack_140 = (undefined1 *)0x0;
        uStack_138 = 0;
        FUN_1806277c0(&puStack_148,iStack_d8);
        puVar3 = puStack_140;
        if (0 < iStack_d8) {
          puVar9 = &DAT_18098bc73;
          if (puStack_e0 != (undefined *)0x0) {
            puVar9 = puStack_e0;
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_140,puVar9,(longlong)(iStack_d8 + 1));
        }
        if ((puStack_e0 != (undefined *)0x0) && (uStack_138 = 0, puStack_140 != (undefined1 *)0x0))
        {
          *puStack_140 = 0;
        }
        uVar4 = uStack_138;
        puVar10 = (undefined8 *)param_3[1];
        if (puVar10 < (undefined8 *)param_3[2]) {
          param_3[1] = (longlong)(puVar10 + 4);
          *puVar10 = &UNK_18098bcb0;
          puVar10[1] = 0;
          *(undefined4 *)(puVar10 + 2) = 0;
          *puVar10 = &UNK_180a3c3e0;
          *(undefined4 *)(puVar10 + 2) = uStack_138;
          puVar10[1] = puStack_140;
          *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_130._4_4_;
          *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_130;
          uStack_138 = 0;
          uStack_130 = 0;
          puStack_128 = puVar10;
        }
        else {
          lVar13 = *param_3;
          lVar12 = (longlong)puVar10 - lVar13 >> 5;
          if (lVar12 == 0) {
            lVar12 = 1;
LAB_180363542:
            lVar7 = FUN_18062b420(_DAT_180c8ed18,lVar12 << 5,(char)param_3[3]);
            puVar10 = (undefined8 *)param_3[1];
            lVar13 = *param_3;
          }
          else {
            lVar12 = lVar12 * 2;
            lVar7 = 0;
            if (lVar12 != 0) goto LAB_180363542;
          }
          puStack_128 = (undefined8 *)FUN_180059780(lVar13,puVar10,lVar7);
          *puStack_128 = &UNK_18098bcb0;
          puStack_128[1] = 0;
          *(undefined4 *)(puStack_128 + 2) = 0;
          *puStack_128 = &UNK_180a3c3e0;
          *(undefined4 *)(puStack_128 + 2) = uVar4;
          puStack_128[1] = puVar3;
          *(undefined4 *)((longlong)puStack_128 + 0x1c) = uStack_130._4_4_;
          *(undefined4 *)(puStack_128 + 3) = (undefined4)uStack_130;
          uStack_138 = 0;
          puStack_140 = (undefined1 *)0x0;
          uStack_130 = 0;
          puStack_128 = puStack_128 + 4;
          puVar10 = (undefined8 *)param_3[1];
          puVar11 = (undefined8 *)*param_3;
          if (puVar11 != puVar10) {
            do {
              (**(code **)*puVar11)(puVar11,0);
              puVar11 = puVar11 + 4;
            } while (puVar11 != puVar10);
            puVar11 = (undefined8 *)*param_3;
          }
          if (puVar11 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar11);
          }
          *param_3 = lVar7;
          param_3[1] = (longlong)puStack_128;
          param_3[2] = lVar12 * 0x20 + lVar7;
        }
        puStack_140 = (undefined1 *)0x0;
        uStack_130 = uStack_130 & 0xffffffff00000000;
        puStack_148 = &UNK_18098bcb0;
        puStack_e8 = &UNK_18098bcb0;
        plVar8 = plStack_120 + 0x13;
        plVar1 = plStack_120 + 0x12;
        plStack_120 = plVar8;
        plVar2 = plStack_110;
      } while (plVar1 != plStack_118);
    }
    for (; plVar2 != plStack_108; plVar2 = plVar2 + 0x13) {
      (**(code **)*plVar2)(plVar2,0);
    }
    if (plStack_110 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else if ((iVar6 == 0xc) &&
          (iVar6 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a1ffe8), iVar6 == 0)) {
    puVar10 = (undefined8 *)(param_1 + 0x100);
    lVar13 = 4;
    do {
      FUN_180627910(&puStack_148,*puVar10);
      if ((ulonglong)param_3[1] < (ulonglong)param_3[2]) {
        param_3[1] = param_3[1] + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_3,&puStack_148);
      }
      puStack_148 = &UNK_180a3c3e0;
      if (puStack_140 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_140 = (undefined1 *)0x0;
      uStack_130 = uStack_130 & 0xffffffff00000000;
      puStack_148 = &UNK_18098bcb0;
      puVar10 = puVar10 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_168);
}





// 函数: void FUN_180363760(longlong param_1)
void FUN_180363760(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong *aplStackX_10 [3];
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [16];
  
  if (0 < *(int *)(param_1 + 0xa0)) {
    uVar3 = FUN_1803638c0();
    puVar2 = (undefined8 *)
             FUN_180157390(uVar3,aplStackX_10,param_1 + 0x90,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20),1);
    uVar3 = *puVar2;
    *puVar2 = 0;
    plVar1 = *(longlong **)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = uVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (aplStackX_10[0] != (longlong *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x120))
              (*(longlong **)(param_1 + 0x120),auStack_18);
    FUN_180363930(param_1);
    plVar1 = *(longlong **)(param_1 + 0x120);
    if (plVar1 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x70) == '\0') {
        dVar4 = *(double *)(param_1 + 0x128);
        *(double *)(param_1 + 0x78) = dVar4;
        dVar5 = *(double *)(param_1 + 0x130);
        *(double *)(param_1 + 0x80) = dVar5;
      }
      else {
        dVar4 = *(double *)(param_1 + 0x78);
        dVar5 = *(double *)(param_1 + 0x80);
      }
      fStack_28 = (float)dVar4;
      fStack_24 = (float)dVar5;
      uStack_20 = 0;
      uStack_1c = 0x7f7fffff;
      (**(code **)(*plVar1 + 0xf0))(plVar1,&fStack_28);
    }
  }
  return;
}





// 函数: void FUN_180363880(longlong *param_1)
void FUN_180363880(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x24];
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x168))(param_1);
    plVar1 = (longlong *)param_1[0x24];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
                    // WARNING: Could not recover jumptable at 0x0001803638b5. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x60))();
  return;
}





// 函数: void FUN_1803638c0(longlong param_1)
void FUN_1803638c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xd8))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x120) + 0x68))();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018036391f. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x38))();
    return;
  }
  return;
}





// 函数: void FUN_180363930(longlong param_1)
void FUN_180363930(longlong param_1)

{
  char cVar1;
  float fVar2;
  float fStack_18;
  float fStack_14;
  
  if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xd8))();
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x120) + 0x128))
                (*(longlong **)(param_1 + 0x120),&fStack_18);
      *(double *)(param_1 + 0x128) = (double)fStack_18;
      *(double *)(param_1 + 0x130) = (double)fStack_14;
      fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x120) + 0x108))();
      *(double *)(param_1 + 0x138) = (double)fVar2;
      fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x120) + 0x110))();
      *(double *)(param_1 + 0x140) = (double)fVar2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803639e0(undefined8 *param_1)
void FUN_1803639e0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puStack_c8;
  undefined4 *puStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  FUN_1803624e0();
  *param_1 = &UNK_180a20298;
  param_1[0x2b] = &UNK_18098bcb0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = &UNK_180a3c3e0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  plVar1 = param_1 + 0x30;
  *plVar1 = (longlong)&UNK_18098bcb0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_180a1f0e4);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  puStack_c8 = &UNK_180a3c3e0;
  uStack_b0 = 0;
  puStack_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_c0 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
  *puVar3 = 0x4d207349;
  puVar3[1] = 0x65747361;
  puVar3[2] = 0x6f532072;
  puVar3[3] = 0x646e75;
  uStack_b8 = 0xf;
  FUN_1803460a0(param_1,&puStack_c8,param_1 + 0x2a,3);
  puStack_c8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



longlong FUN_180363d20(longlong param_1,ulonglong param_2)

{
  *(undefined8 *)(param_1 + 0x180) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x180) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x158) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x158) = &UNK_18098bcb0;
  FUN_180362cf0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x1a8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180363de0(undefined8 param_1,undefined8 param_2)
void FUN_180363de0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined *puStack_c8;
  undefined4 *puStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_48;
  
  puVar4 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x1a8,8,3);
  uStack_48 = 0xfffffffffffffffe;
  FUN_1803624e0(puVar4,param_2,param_1);
  *puVar4 = &UNK_180a20298;
  puVar4[0x2b] = &UNK_18098bcb0;
  puVar4[0x2c] = 0;
  *(undefined4 *)(puVar4 + 0x2d) = 0;
  puVar4[0x2b] = &UNK_180a3c3e0;
  puVar4[0x2e] = 0;
  puVar4[0x2c] = 0;
  *(undefined4 *)(puVar4 + 0x2d) = 0;
  plVar1 = puVar4 + 0x30;
  *plVar1 = (longlong)&UNK_18098bcb0;
  puVar4[0x31] = 0;
  *(undefined4 *)(puVar4 + 0x32) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  puVar4[0x33] = 0;
  puVar4[0x31] = 0;
  *(undefined4 *)(puVar4 + 0x32) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_180a1f0e4);
  *(undefined4 *)(puVar4 + 0x34) = 0;
  *(undefined1 *)(puVar4 + 0x2f) = 0;
  *(undefined2 *)(puVar4 + 0x2a) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x1a4) = 0;
  puStack_c8 = &UNK_180a3c3e0;
  uStack_b0 = 0;
  puStack_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_c0 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
  *puVar3 = 0x4d207349;
  puVar3[1] = 0x65747361;
  puVar3[2] = 0x6f532072;
  puVar3[3] = 0x646e75;
  uStack_b8 = 0xf;
  FUN_1803460a0(puVar4,&puStack_c8,puVar4 + 0x2a,3);
  puStack_c8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



