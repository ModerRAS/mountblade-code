#include "TaleWorlds.Native.Split.h"

// 03_rendering_part135.c - 18 个函数

// 函数: void FUN_18034a281(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4)
void FUN_18034a281(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong unaff_RBX;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  cVar3 = func_0x000180285f10(param_1 + 0x9c,lVar1 + 0x70);
  if (cVar3 == '\0') {
    *(undefined4 *)(unaff_RBX + 0x98) = 0x40000000;
    if (*(int *)(*(longlong *)(unaff_RBX + 0x70) + 0x4c) != 0) {
      *(undefined1 *)(unaff_RBX + 0x94) = 1;
    }
    FUN_18031b950(*(longlong *)(unaff_RBX + 0x70),lVar1 + 0x70,0);
  }
  else {
    *(float *)(unaff_RBX + 0x98) = *(float *)(unaff_RBX + 0x98) - param_4;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)(unaff_RBX + 0x9c) = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(unaff_RBX + 0xa4) = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x88);
  *(undefined8 *)(unaff_RBX + 0xac) = *(undefined8 *)(lVar1 + 0x80);
  *(undefined8 *)(unaff_RBX + 0xb4) = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)(unaff_RBX + 0xbc) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)(unaff_RBX + 0xc4) = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0xa8);
  *(undefined8 *)(unaff_RBX + 0xcc) = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 *)(unaff_RBX + 0xd4) = uVar2;
  if ((*(char *)(unaff_RBX + 0x94) != '\0') &&
     (*(float *)(unaff_RBX + 0x98) <= 0.0 && *(float *)(unaff_RBX + 0x98) != 0.0)) {
    *(undefined1 *)(unaff_RBX + 0x94) = 0;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x70) + 0x4c) = 0;
    *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x50) = 1;
  }
  return;
}





// 函数: void FUN_18034a328(void)
void FUN_18034a328(void)

{
  longlong unaff_RBX;
  
  if (*(float *)(unaff_RBX + 0x98) <= 0.0 && *(float *)(unaff_RBX + 0x98) != 0.0) {
    *(undefined1 *)(unaff_RBX + 0x94) = 0;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x70) + 0x4c) = 0;
    *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x50) = 1;
  }
  return;
}





// 函数: void FUN_18034a360(longlong param_1)
void FUN_18034a360(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  float *pfVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  pfVar3 = (float *)(*(longlong *)(param_1 + 0x18) + 0x70);
  puVar4 = (undefined8 *)(param_1 + 0x9c);
  cVar2 = func_0x000180285f10(pfVar3,puVar4,0x3c23d70a);
  if (cVar2 == '\0') {
    uVar1 = *(undefined8 *)(pfVar3 + 2);
    cVar2 = '\x01';
    *puVar4 = *(undefined8 *)pfVar3;
    puVar4[1] = uVar1;
    uVar1 = *(undefined8 *)(pfVar3 + 6);
    puVar4[2] = *(undefined8 *)(pfVar3 + 4);
    puVar4[3] = uVar1;
    uVar1 = *(undefined8 *)(pfVar3 + 10);
    puVar4[4] = *(undefined8 *)(pfVar3 + 8);
    puVar4[5] = uVar1;
    uVar1 = *(undefined8 *)(pfVar3 + 0xe);
    puVar4[6] = *(undefined8 *)(pfVar3 + 0xc);
    puVar4[7] = uVar1;
    lVar5 = *(longlong *)(param_1 + 0x70);
    uVar1 = *(undefined8 *)(pfVar3 + 2);
    *(undefined8 *)(lVar5 + 100) = *(undefined8 *)pfVar3;
    *(undefined8 *)(lVar5 + 0x6c) = uVar1;
    uVar1 = *(undefined8 *)(pfVar3 + 6);
    *(undefined8 *)(lVar5 + 0x74) = *(undefined8 *)(pfVar3 + 4);
    *(undefined8 *)(lVar5 + 0x7c) = uVar1;
    uVar1 = *(undefined8 *)(pfVar3 + 10);
    *(undefined8 *)(lVar5 + 0x84) = *(undefined8 *)(pfVar3 + 8);
    *(undefined8 *)(lVar5 + 0x8c) = uVar1;
    uVar1 = *(undefined8 *)(pfVar3 + 0xe);
    *(undefined8 *)(lVar5 + 0x94) = *(undefined8 *)(pfVar3 + 0xc);
    *(undefined8 *)(lVar5 + 0x9c) = uVar1;
    uVar6 = 0;
    *(undefined4 *)(lVar5 + 0x70) = 0;
    *(undefined4 *)(lVar5 + 0x80) = 0;
    *(undefined4 *)(lVar5 + 0x90) = 0;
    *(undefined4 *)(lVar5 + 0xa0) = 0x3f800000;
    *(float *)(lVar5 + 0x48) =
         SQRT(pfVar3[4] * pfVar3[4] + pfVar3[5] * pfVar3[5] + pfVar3[6] * pfVar3[6] +
              *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2] +
              pfVar3[8] * pfVar3[8] + pfVar3[9] * pfVar3[9] + pfVar3[10] * pfVar3[10]);
    FUN_18031bc40();
    if (cVar2 != '\0') {
      *(undefined4 *)(lVar5 + 0x4c) = uVar6;
    }
    return;
  }
  return;
}





// 函数: void FUN_18034a3c0(longlong param_1,longlong param_2)
void FUN_18034a3c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
  if (*(char *)(param_1 + 0x93) != '\0') {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  iVar7 = *(int *)(param_2 + 0x10);
  if ((iVar7 == 8) && (iVar5 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a18cc8), iVar5 == 0)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x148) = *(undefined1 *)(param_1 + 0x90);
    return;
  }
  if ((iVar7 == 0x11) && (iVar5 = strcmp(*(undefined8 *)(param_2 + 8)), iVar5 == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar2 + 0x144) = *(undefined4 *)(param_1 + 0x8c);
    uVar6 = 0x14;
    if (*(int *)(lVar2 + 0x4c) != 0x18) {
      uVar6 = 0;
    }
    *(undefined4 *)(lVar2 + 0x4c) = uVar6;
  }
  else if ((iVar7 == 9) && (iVar5 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a1d398), iVar5 == 0)
          ) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    uVar6 = *(undefined4 *)(param_1 + 0x7c);
    uVar3 = *(undefined4 *)(param_1 + 0x80);
    uVar4 = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(lVar2 + 0xe4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(lVar2 + 0xe8) = uVar6;
    *(undefined4 *)(lVar2 + 0xec) = uVar3;
    *(undefined4 *)(lVar2 + 0xf0) = uVar4;
    FUN_18031bc40();
  }
  else if ((iVar7 == 0xf) &&
          (iVar5 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a1d3a8), iVar5 == 0)) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(param_1 + 0x88);
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  else {
    if (iVar7 != 0x13) {
      return;
    }
    iVar7 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a1d3d0);
    if (iVar7 != 0) {
      return;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x149) = *(undefined1 *)(param_1 + 0x92);
  }
  FUN_1803179d0(lVar1 + 0x60c10,1);
  return;
}





// 函数: void FUN_18034a3f3(undefined8 param_1,longlong param_2)
void FUN_18034a3f3(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  iVar6 = *(int *)(param_2 + 0x10);
  if ((iVar6 == 8) && (iVar4 = strcmp(*(undefined8 *)(unaff_RSI + 8),&UNK_180a18cc8), iVar4 == 0)) {
    *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x148) = *(undefined1 *)(unaff_RBX + 0x90);
    return;
  }
  if ((iVar6 == 0x11) && (iVar4 = strcmp(*(undefined8 *)(unaff_RSI + 8)), iVar4 == 0)) {
    lVar1 = *(longlong *)(unaff_RBX + 0x70);
    *(undefined4 *)(lVar1 + 0x144) = *(undefined4 *)(unaff_RBX + 0x8c);
    uVar5 = 0x14;
    if (*(int *)(lVar1 + 0x4c) != 0x18) {
      uVar5 = 0;
    }
    *(undefined4 *)(lVar1 + 0x4c) = uVar5;
  }
  else {
    if (iVar6 == 9) {
      iVar4 = strcmp(*(undefined8 *)(unaff_RSI + 8),&UNK_180a1d398);
      if (iVar4 == 0) {
        lVar1 = *(longlong *)(unaff_RBX + 0x70);
        uVar5 = *(undefined4 *)(unaff_RBX + 0x7c);
        uVar2 = *(undefined4 *)(unaff_RBX + 0x80);
        uVar3 = *(undefined4 *)(unaff_RBX + 0x84);
        *(undefined4 *)(lVar1 + 0xe4) = *(undefined4 *)(unaff_RBX + 0x78);
        *(undefined4 *)(lVar1 + 0xe8) = uVar5;
        *(undefined4 *)(lVar1 + 0xec) = uVar2;
        *(undefined4 *)(lVar1 + 0xf0) = uVar3;
        FUN_18031bc40();
        goto LAB_18034a4ee;
      }
    }
    if (iVar6 == 0xf) {
      iVar4 = strcmp(*(undefined8 *)(unaff_RSI + 8),&UNK_180a1d3a8);
      if (iVar4 == 0) {
        lVar1 = *(longlong *)(unaff_RBX + 0x70);
        *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(unaff_RBX + 0x88);
        *(undefined1 *)(lVar1 + 0x50) = 1;
        goto LAB_18034a4ee;
      }
    }
    if (iVar6 != 0x13) {
      return;
    }
    iVar6 = strcmp(*(undefined8 *)(unaff_RSI + 8),&UNK_180a1d3d0);
    if (iVar6 != 0) {
      return;
    }
    *(undefined1 *)(*(longlong *)(unaff_RBX + 0x70) + 0x149) = *(undefined1 *)(unaff_RBX + 0x92);
  }
LAB_18034a4ee:
  FUN_1803179d0(unaff_RBP + 0x60c10,1);
  return;
}





// 函数: void FUN_18034a501(void)
void FUN_18034a501(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034a520(undefined8 param_1)
void FUN_18034a520(undefined8 param_1)

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
  uStack_1f8 = 8;
  strcpy_s(auStack_1f0,0x40,&UNK_180a18cc8);
  FUN_1800b8300(apuStack_268,&puStack_208);
  uStack_210 = 3;
  uStack_288 = 1;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_208 = &UNK_18098bcb0;
  puStack_1a8 = &UNK_1809fcc58;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0x13;
  strcpy_s(auStack_190,0x40,&UNK_180a1d3d0);
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
  uStack_138 = 0x11;
  strcpy_s(auStack_130,0x40,&UNK_180a1d3b8);
  FUN_1800b8300(apuStack_268,&puStack_148);
  uStack_210 = 2;
  uStack_288 = 4;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xf;
  strcpy_s(auStack_d0,0x40,&UNK_180a1d3a8);
  FUN_1800b8300(apuStack_268,&puStack_e8);
  uStack_210 = 2;
  uStack_288 = 8;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 9;
  strcpy_s(auStack_70,0x40,&UNK_180a1d398);
  FUN_1800b8300(apuStack_268,&puStack_88);
  uStack_210 = 5;
  uStack_288 = 0x10;
  FUN_180180730(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_2a8);
}



undefined8 * FUN_18034a890(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a1d590;
  param_1[0xe] = &UNK_180a3c3e0;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = &UNK_18098bcb0;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xa8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034a930(undefined8 *param_1)
void FUN_18034a930(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &UNK_180a1d590;
  puVar1 = puVar3 + 0xe;
  *puVar1 = &UNK_18098bcb0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *puVar1 = &UNK_180a3c3e0;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  puStack_a0 = &UNK_180a3c3e0;
  uStack_88 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_98 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar2);
  *puVar3 = 0x6d614e2068746150;
  *(undefined2 *)(puVar3 + 1) = 0x65;
  uStack_90 = 9;
  FUN_1803460a0(param_1,&puStack_a0,puVar1,0,uVar4);
  puStack_a0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034abd0(undefined8 param_1)
void FUN_18034abd0(undefined8 param_1)

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
  uStack_138 = 9;
  strcpy_s(auStack_130,0x40,&DAT_180a1d578);
  FUN_1800b8300(apuStack_1a8,&puStack_148);
  uStack_150 = 0;
  uStack_1c8 = 1;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 5;
  strcpy_s(auStack_d0,0x40,&DAT_180a1d570);
  FUN_1800b8300(apuStack_1a8,&puStack_e8);
  uStack_150 = 1;
  uStack_1c8 = 2;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x16;
  strcpy_s(auStack_70,0x40,&DAT_180a1d558);
  FUN_1800b8300(apuStack_1a8,&puStack_88);
  uStack_150 = 1;
  uStack_1c8 = 4;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}





// 函数: void FUN_18034adf0(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)
void FUN_18034adf0(longlong param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  longlong *plStackX_8;
  undefined1 auStack_60 [88];
  
  *(double *)(param_1 + 0xa0) =
       (double)param_2 * *(double *)(param_1 + 0x90) + *(double *)(param_1 + 0xa0);
  plVar2 = (longlong *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  lVar1 = *plVar2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (lVar1 != 0) {
    fVar4 = (float)FUN_180466420(lVar1);
    dVar5 = *(double *)(param_1 + 0xa0);
    if ((double)fVar4 < dVar5) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      dVar5 = 0.0;
    }
    uVar3 = FUN_180466700(lVar1,auStack_60,(float)dVar5);
    FUN_1802ea790(*(undefined8 *)(param_1 + 0x18),uVar3);
  }
  return;
}



undefined8 * FUN_18034aec0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a1d700;
  plVar1 = (longlong *)param_1[0x2e];
  param_1[0x2e] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((longlong *)param_1[0x2e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2e] + 0x38))();
  }
  param_1[0x2a] = &UNK_180a3c3e0;
  if (param_1[0x2b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2a] = &UNK_18098bcb0;
  FUN_180362cf0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x178);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034af90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18034af90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [64];
  
  uVar3 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x170) != 0) && (*(int *)(*(longlong *)(param_1 + 0x170) + 8) == 1))
  {
    plVar1 = *(longlong **)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uStack_88 = *(undefined8 *)(lVar2 + 0x70);
    uStack_80 = *(undefined8 *)(lVar2 + 0x78);
    uStack_78 = *(undefined4 *)(lVar2 + 0x80);
    uStack_74 = *(undefined4 *)(lVar2 + 0x84);
    uStack_70 = *(undefined4 *)(lVar2 + 0x88);
    uStack_6c = *(undefined4 *)(lVar2 + 0x8c);
    uStack_68 = *(undefined4 *)(lVar2 + 0x90);
    uStack_64 = *(undefined4 *)(lVar2 + 0x94);
    uStack_60 = *(undefined4 *)(lVar2 + 0x98);
    uStack_5c = *(undefined4 *)(lVar2 + 0x9c);
    lVar2 = FUN_1804664b0(*(longlong *)(param_1 + 0x170),auStack_48,_DAT_180c86878 + 0x1b8,param_4,
                          uVar3);
    uStack_58 = *(undefined4 *)(lVar2 + 0x30);
    uStack_54 = *(undefined4 *)(lVar2 + 0x34);
    uStack_50 = *(undefined4 *)(lVar2 + 0x38);
    uStack_4c = *(undefined4 *)(lVar2 + 0x3c);
    FUN_1802ea790(*(undefined8 *)(param_1 + 0x18),&uStack_88);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034b050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18034b050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [64];
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180362ef0();
  if ((*(longlong *)(param_1 + 0x170) != 0) && (*(int *)(*(longlong *)(param_1 + 0x170) + 8) == 1))
  {
    plVar1 = *(longlong **)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uStack_88 = *(undefined8 *)(lVar2 + 0x70);
    uStack_80 = *(undefined8 *)(lVar2 + 0x78);
    uStack_78 = *(undefined4 *)(lVar2 + 0x80);
    uStack_74 = *(undefined4 *)(lVar2 + 0x84);
    uStack_70 = *(undefined4 *)(lVar2 + 0x88);
    uStack_6c = *(undefined4 *)(lVar2 + 0x8c);
    uStack_68 = *(undefined4 *)(lVar2 + 0x90);
    uStack_64 = *(undefined4 *)(lVar2 + 0x94);
    uStack_60 = *(undefined4 *)(lVar2 + 0x98);
    uStack_5c = *(undefined4 *)(lVar2 + 0x9c);
    lVar2 = FUN_1804664b0(*(longlong *)(param_1 + 0x170),auStack_48,_DAT_180c86878 + 0x1b8,param_4,
                          uVar3);
    uStack_58 = *(undefined4 *)(lVar2 + 0x30);
    uStack_54 = *(undefined4 *)(lVar2 + 0x34);
    uStack_50 = *(undefined4 *)(lVar2 + 0x38);
    uStack_4c = *(undefined4 *)(lVar2 + 0x3c);
    FUN_1802ea790(*(undefined8 *)(param_1 + 0x18),&uStack_88);
  }
  return;
}





// 函数: void FUN_18034b120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18034b120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *aplStackX_10 [3];
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180362e30();
  puVar2 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
                         param_1 + 0x150,param_4,uVar3);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plVar1 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = uVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}





// 函数: void FUN_18034b1a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18034b1a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *aplStackX_10 [3];
  
  puVar3 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
                         param_1 + 0x150,param_4,0xfffffffffffffffe);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plVar2 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}





// 函数: void FUN_18034b220(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_18034b220(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *aplStackX_18 [2];
  
  if (*(int *)(param_2 + 0x10) == 9) {
    iVar3 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a1d578,param_3,param_4,0xfffffffffffffffe);
    if (iVar3 == 0) {
      puVar4 = (undefined8 *)
               FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,
                             aplStackX_18,param_1 + 0x150);
      uVar1 = *puVar4;
      *puVar4 = 0;
      plVar2 = *(longlong **)(param_1 + 0x170);
      *(undefined8 *)(param_1 + 0x170) = uVar1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      if (aplStackX_18[0] != (longlong *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034b2c0(undefined8 *param_1)
void FUN_18034b2c0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &UNK_180a1d9a0;
  FUN_1808fc838(puVar2 + 0xe,0x20,4,FUN_180627850,FUN_180627b90);
  FUN_1808fc838(param_1 + 0x1e,0x20,4,FUN_180627850,FUN_180627b90);
  param_1[0x2f] = 0;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_b0 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
  *puVar2 = 0x614d72656d6d7553;
  *(undefined4 *)(puVar2 + 1) = 0x69726574;
  *(undefined2 *)((longlong)puVar2 + 0xc) = 0x6c61;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  uStack_a8 = 0xe;
  FUN_1803460a0(param_1,&puStack_b8,param_1 + 0xe,0);
  puStack_b8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 * FUN_18034b610(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1d9a0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2f] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x1e,0x20,4,FUN_180627b90,uVar1);
  FUN_1808fc8a8(param_1 + 0xe,0x20,4,FUN_180627b90);
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x180);
  }
  return param_1;
}





// 函数: void FUN_18034b6c0(longlong param_1)
void FUN_18034b6c0(longlong param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  longlong *plVar3;
  
  plStack_30 = (longlong *)0x0;
  lStack_28 = 0;
  plVar5 = (longlong *)0x0;
  uStack_20 = 0;
  uStack_18 = 3;
  FUN_1802e93a0(*(undefined8 *)(param_1 + 0x18),&plStack_30);
  uVar8 = (uint)(lStack_28 - (longlong)plStack_30 >> 3);
  if (uVar8 == 0) {
    puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x18) + 0x290);
    puVar4 = &DAT_18098bc73;
    if (puVar1 != (undefined *)0x0) {
      puVar4 = puVar1;
    }
    FUN_180627020(&UNK_180a1d958,puVar4);
  }
  else {
    if (uVar8 != 0) {
      plVar3 = plVar5;
      do {
        if (*(longlong *)(*plStack_30 + 0x1b8) !=
            *(longlong *)(plStack_30[(longlong)plVar3] + 0x1b8)) goto LAB_18034b77d;
        uVar2 = (int)plVar3 + 1;
        plVar3 = (longlong *)(ulonglong)uVar2;
      } while (uVar2 < uVar8);
    }
    plVar5 = *(longlong **)(*plStack_30 + 0x1b8);
LAB_18034b77d:
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar3 = *(longlong **)(param_1 + 0x178);
    *(longlong **)(param_1 + 0x178) = plVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    if (*(longlong *)(param_1 + 0x178) == 0) {
      puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x18) + 0x290);
      puVar4 = &DAT_18098bc73;
      if (puVar1 != (undefined *)0x0) {
        puVar4 = puVar1;
      }
      FUN_180627020(&UNK_180a1d900,puVar4);
    }
    else {
      *(undefined4 *)(param_1 + 0x170) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x3054);
      if (*(int *)(param_1 + 0x80) == 0) {
        puVar1 = *(undefined **)(*(longlong *)(param_1 + 0x178) + 0x18);
        puVar4 = &DAT_18098bc73;
        if (puVar1 != (undefined *)0x0) {
          puVar4 = puVar1;
        }
        (**(code **)(*(longlong *)(param_1 + 0x70) + 0x10))((longlong *)(param_1 + 0x70),puVar4);
      }
      plVar5 = (longlong *)(param_1 + 0xf8);
      lVar6 = 4;
      do {
        uVar8 = *(uint *)(plVar5 + -0xf);
        uVar7 = (ulonglong)uVar8;
        if (plVar5[-0x10] != 0) {
          FUN_1806277c0(plVar5 + -1,uVar7);
        }
        if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*plVar5,plVar5[-0x10],uVar7);
        }
        *(undefined4 *)(plVar5 + 1) = 0;
        if (*plVar5 != 0) {
          *(undefined1 *)(uVar7 + *plVar5) = 0;
        }
        *(undefined4 *)((longlong)plVar5 + 0x14) = *(undefined4 *)((longlong)plVar5 + -0x6c);
        plVar5 = plVar5 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      FUN_18034bd70(param_1,*(undefined4 *)(param_1 + 0x170));
    }
  }
  if (plStack_30 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18034b8b0(longlong param_1)
void FUN_18034b8b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x3054);
  if (iVar1 != *(int *)(param_1 + 0x170)) {
    FUN_18034bd70(param_1,iVar1);
    *(int *)(param_1 + 0x170) = iVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



