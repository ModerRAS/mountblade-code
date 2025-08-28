#include "TaleWorlds.Native.Split.h"

// 03_rendering_part639.c - 17 个函数

// 函数: void FUN_180625ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_180625ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 auStack_d8 [32];
  undefined *puStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  FUN_1806279c0(auStack_88);
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_1806279c0(auStack_48,param_3);
  lVar1 = FUN_1806256c0(&puStack_b8,auStack_88,3);
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(lVar1 + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar1 + 8);
  }
  OutputDebugStringA(puVar2);
  puStack_b8 = &UNK_180a3c3e0;
  if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_b0 = 0;
  uStack_a0 = 0;
  puStack_b8 = &UNK_18098bcb0;
  FUN_1808fc8a8(auStack_88,0x20,3,FUN_180627b90);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180625e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180625e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_f8 [32];
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  FUN_1806279c0(auStack_a8);
  FUN_1806279c0(auStack_88,param_3);
  FUN_1806279c0(auStack_68,param_4);
  FUN_1806279c0(auStack_48,param_5);
  FUN_1806256c0(&puStack_d8,auStack_a8,4);
  puVar1 = &DAT_18098bc73;
  if (puStack_d0 != (undefined *)0x0) {
    puVar1 = puStack_d0;
  }
  OutputDebugStringA(puVar1);
  puStack_d8 = &UNK_180a3c3e0;
  if (puStack_d0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_d0 = (undefined *)0x0;
  uStack_c0 = 0;
  puStack_d8 = &UNK_18098bcb0;
  FUN_1808fc8a8(auStack_a8,0x20,4,FUN_180627b90);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180625f10(void)
void FUN_180625f10(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  uVar1 = FUN_18064e990(puVar2);
  *puVar2 = 0x23575423;
  *(undefined1 *)(puVar2 + 1) = 0;
  if (uVar1 < 6) {
    puVar2 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,6,0x10,0x13);
    uVar1 = FUN_18064e990(puVar2);
  }
  *(undefined2 *)(puVar2 + 1) = 0x2d;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar2 = 0;
  }
  else {
    if (7 < uVar1) goto LAB_18062605e;
    puVar2 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,8,0x10,0x13);
  }
  FUN_18064e990(puVar2);
LAB_18062605e:
  *(undefined2 *)((longlong)puVar2 + 5) = 0x706b;
  *(undefined1 *)((longlong)puVar2 + 7) = 0;
  puVar3 = (undefined4 *)&DAT_18098bc73;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  OutputDebugStringA(puVar3);
  if (puVar2 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  return;
}





// 函数: void FUN_1806260e0(void)
void FUN_1806260e0(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puStack_50;
  undefined *puStack_48;
  uint uStack_40;
  undefined4 uStack_38;
  undefined *puStack_30;
  longlong lStack_28;
  int iStack_20;
  
  FUN_1806279c0(&puStack_30);
  FUN_180627910(&puStack_50,&DAT_180a3c230);
  uVar3 = uStack_40;
  uVar2 = uStack_40 + 1;
  FUN_1806277c0(&puStack_50,uVar2);
  *(undefined2 *)(puStack_48 + uStack_40) = 0x2d;
  uVar3 = uVar3 + 3;
  uStack_40 = uVar2;
  FUN_1806277c0(&puStack_50,uVar3);
  *(undefined2 *)(puStack_48 + uStack_40) = 0x6464;
  *(undefined1 *)((longlong)(puStack_48 + uStack_40) + 2) = 0;
  uStack_40 = uVar3;
  if (0 < iStack_20) {
    FUN_1806277c0(&puStack_50,uVar3 + iStack_20);
                    // WARNING: Subroutine does not return
    memcpy(puStack_48 + uStack_40,lStack_28,(longlong)(iStack_20 + 1));
  }
  puVar1 = &DAT_18098bc73;
  if (puStack_48 != (undefined *)0x0) {
    puVar1 = puStack_48;
  }
  OutputDebugStringA(puVar1);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_48 = (undefined *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180626220(void)
void FUN_180626220(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  uVar1 = FUN_18064e990(puVar2);
  *puVar2 = 0x23575423;
  *(undefined1 *)(puVar2 + 1) = 0;
  if (uVar1 < 6) {
    puVar2 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,6,0x10,0x13);
    uVar1 = FUN_18064e990(puVar2);
  }
  *(undefined2 *)(puVar2 + 1) = 0x2d;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar2 = 0;
  }
  else {
    if (7 < uVar1) goto LAB_18062636e;
    puVar2 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar2,8,0x10,0x13);
  }
  FUN_18064e990(puVar2);
LAB_18062636e:
  *(undefined2 *)((longlong)puVar2 + 5) = 0x7464;
  *(undefined1 *)((longlong)puVar2 + 7) = 0;
  puVar3 = (undefined4 *)&DAT_18098bc73;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  OutputDebugStringA(puVar3);
  if (puVar2 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806263f0(undefined8 param_1,char param_2)
void FUN_1806263f0(undefined8 param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puStack_40;
  longlong lStack_38;
  int iStack_30;
  
  puVar5 = &DAT_180a089e8;
  if (param_2 != '\0') {
    puVar5 = &DAT_180a08120;
  }
  FUN_180627910(&puStack_40,puVar5);
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  uVar1 = FUN_18064e990(puVar3);
  *puVar3 = 0x23575423;
  *(undefined1 *)(puVar3 + 1) = 0;
  if (uVar1 < 6) {
    puVar3 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,6,0x10,0x13);
    uVar1 = FUN_18064e990(puVar3);
  }
  *(undefined2 *)(puVar3 + 1) = 0x2d;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
LAB_18062653a:
    uVar1 = FUN_18064e990(puVar3);
  }
  else if (uVar1 < 8) {
    puVar3 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,8,0x10,0x13);
    goto LAB_18062653a;
  }
  *(undefined2 *)((longlong)puVar3 + 5) = 0x666d;
  *(undefined1 *)((longlong)puVar3 + 7) = 0;
  if (iStack_30 < 1) {
    puVar4 = (undefined4 *)&DAT_18098bc73;
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = puVar3;
    }
    OutputDebugStringA(puVar4);
    if (puVar3 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    puStack_40 = &UNK_180a3c3e0;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    return;
  }
  if (iStack_30 != -7) {
    if (puVar3 == (undefined4 *)0x0) {
      iVar2 = iStack_30 + 8;
      if (iVar2 < 0x10) {
        iVar2 = 0x10;
      }
      puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
      *(undefined1 *)puVar3 = 0;
    }
    else {
      if (iStack_30 + 8U <= uVar1) goto LAB_1806265d4;
      puVar3 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,iStack_30 + 8U,0x10,0x13);
    }
    FUN_18064e990(puVar3);
  }
LAB_1806265d4:
                    // WARNING: Subroutine does not return
  memcpy((undefined1 *)((longlong)puVar3 + 7),lStack_38,(longlong)(iStack_30 + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180626660(undefined8 param_1,char param_2)
void FUN_180626660(undefined8 param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puStack_40;
  longlong lStack_38;
  int iStack_30;
  
  puVar5 = &DAT_180a089e8;
  if (param_2 != '\0') {
    puVar5 = &DAT_180a08120;
  }
  FUN_180627910(&puStack_40,puVar5);
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  uVar1 = FUN_18064e990(puVar3);
  *puVar3 = 0x23575423;
  *(undefined1 *)(puVar3 + 1) = 0;
  if (uVar1 < 6) {
    puVar3 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,6,0x10,0x13);
    uVar1 = FUN_18064e990(puVar3);
  }
  *(undefined2 *)(puVar3 + 1) = 0x2d;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
LAB_1806267aa:
    uVar1 = FUN_18064e990(puVar3);
  }
  else if (uVar1 < 8) {
    puVar3 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,8,0x10,0x13);
    goto LAB_1806267aa;
  }
  *(undefined2 *)((longlong)puVar3 + 5) = 0x7261;
  *(undefined1 *)((longlong)puVar3 + 7) = 0;
  if (iStack_30 < 1) {
    puVar4 = (undefined4 *)&DAT_18098bc73;
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = puVar3;
    }
    OutputDebugStringA(puVar4);
    if (puVar3 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    puStack_40 = &UNK_180a3c3e0;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    return;
  }
  if (iStack_30 != -7) {
    if (puVar3 == (undefined4 *)0x0) {
      iVar2 = iStack_30 + 8;
      if (iVar2 < 0x10) {
        iVar2 = 0x10;
      }
      puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
      *(undefined1 *)puVar3 = 0;
    }
    else {
      if (iStack_30 + 8U <= uVar1) goto LAB_180626844;
      puVar3 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar3,iStack_30 + 8U,0x10,0x13);
    }
    FUN_18064e990(puVar3);
  }
LAB_180626844:
                    // WARNING: Subroutine does not return
  memcpy((undefined1 *)((longlong)puVar3 + 7),lStack_38,(longlong)(iStack_30 + 1));
}





// 函数: void FUN_1806268d0(void)
void FUN_1806268d0(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puStack_50;
  undefined *puStack_48;
  uint uStack_40;
  undefined4 uStack_38;
  undefined *puStack_30;
  longlong lStack_28;
  int iStack_20;
  
  FUN_1806279c0(&puStack_30);
  FUN_180627910(&puStack_50,&DAT_180a3c230);
  uVar3 = uStack_40;
  uVar2 = uStack_40 + 1;
  FUN_1806277c0(&puStack_50,uVar2);
  *(undefined2 *)(puStack_48 + uStack_40) = 0x2d;
  uVar3 = uVar3 + 3;
  uStack_40 = uVar2;
  FUN_1806277c0(&puStack_50,uVar3);
  *(undefined2 *)(puStack_48 + uStack_40) = 0x7063;
  *(undefined1 *)((longlong)(puStack_48 + uStack_40) + 2) = 0;
  uStack_40 = uVar3;
  if (0 < iStack_20) {
    FUN_1806277c0(&puStack_50,uVar3 + iStack_20);
                    // WARNING: Subroutine does not return
    memcpy(puStack_48 + uStack_40,lStack_28,(longlong)(iStack_20 + 1));
  }
  puVar1 = &DAT_18098bc73;
  if (puStack_48 != (undefined *)0x0) {
    puVar1 = puStack_48;
  }
  OutputDebugStringA(puVar1);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_48 = (undefined *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



int FUN_180626a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar2 = (undefined8 *)func_0x00018004b9a0();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,0x400,param_2,0,&uStackX_18,uVar3);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180626a80(void)
void FUN_180626a80(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_188 [32];
  undefined4 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  uint uStack_150;
  undefined4 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  uint uStack_130;
  undefined4 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  uint uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [16];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  ulonglong uStack_38;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  puStack_b0 = &UNK_1809fdc18;
  puStack_a8 = auStack_98;
  auStack_98[0] = 0;
  uStack_a0 = 6;
  strcpy_s(auStack_98,0x10,&UNK_180a3c07c);
  FUN_1806279c0(&puStack_160,&puStack_b0);
  uVar1 = uStack_150;
  uStack_168 = 0;
  puStack_b0 = &UNK_18098bcb0;
  uVar5 = uStack_150 + 0xf;
  FUN_1806277c0(&puStack_160,uVar5);
  puVar2 = (undefined4 *)(puStack_158 + uStack_150);
  *puVar2 = 0x75646f4d;
  puVar2[1] = 0x2f73656c;
  puVar2[2] = 0x6974614e;
  puVar2[3] = 0x2f6576;
  uStack_150 = uVar5;
  FUN_1806277c0(&puStack_160,uVar1 + 0x1b);
  puVar3 = (undefined8 *)(puStack_158 + uStack_150);
  *puVar3 = 0x61742e6d61657473;
  *(undefined4 *)(puVar3 + 1) = 0x74656772;
  *(undefined1 *)((longlong)puVar3 + 0xc) = 0;
  uStack_100 = 0;
  lStack_f8 = 0;
  puVar4 = &DAT_18098bc73;
  if (puStack_158 != (undefined *)0x0) {
    puVar4 = puStack_158;
  }
  uStack_150 = uVar1 + 0x1b;
  FUN_18062dee0(&uStack_100,puVar4,&UNK_1809fcfbc);
  bVar6 = lStack_f8 == 0;
  if (lStack_f8 != 0) {
    fclose();
    lStack_f8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_160 = &UNK_180a3c3e0;
  if (puStack_158 == (undefined *)0x0) {
    puStack_158 = (undefined *)0x0;
    uStack_148 = 0;
    puStack_160 = &UNK_18098bcb0;
    if (bVar6) {
      puStack_88 = &UNK_1809fdc18;
      puStack_80 = auStack_70;
      auStack_70[0] = 0;
      uStack_78 = 6;
      strcpy_s(auStack_70,0x10,&UNK_180a3c07c);
      FUN_1806279c0(&puStack_140,&puStack_88);
      uVar1 = uStack_130;
      uStack_168 = 0;
      puStack_88 = &UNK_18098bcb0;
      uVar5 = uStack_130 + 0xf;
      FUN_1806277c0(&puStack_140,uVar5);
      puVar2 = (undefined4 *)(puStack_138 + uStack_130);
      *puVar2 = 0x75646f4d;
      puVar2[1] = 0x2f73656c;
      puVar2[2] = 0x6974614e;
      puVar2[3] = 0x2f6576;
      uStack_130 = uVar5;
      FUN_1806277c0(&puStack_140,uVar1 + 0x1a);
      *(undefined8 *)(puStack_138 + uStack_130) = 0x7261742e63697065;
      *(undefined4 *)((longlong)(puStack_138 + uStack_130) + 8) = 0x746567;
      uStack_e8 = 0;
      lStack_e0 = 0;
      puVar4 = &DAT_18098bc73;
      if (puStack_138 != (undefined *)0x0) {
        puVar4 = puStack_138;
      }
      uStack_130 = uVar1 + 0x1a;
      FUN_18062dee0(&uStack_e8,puVar4,&UNK_1809fcfbc);
      bVar6 = lStack_e0 == 0;
      if (lStack_e0 != 0) {
        fclose();
        lStack_e0 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
      }
      puStack_140 = &UNK_180a3c3e0;
      if (puStack_138 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_138 = (undefined *)0x0;
      uStack_128 = 0;
      puStack_140 = &UNK_18098bcb0;
      if (bVar6) {
        puStack_60 = &UNK_1809fdc18;
        puStack_58 = auStack_48;
        auStack_48[0] = 0;
        uStack_50 = 6;
        strcpy_s(auStack_48,0x10,&UNK_180a3c07c);
        FUN_1806279c0(&puStack_120,&puStack_60);
        uVar1 = uStack_110;
        puStack_60 = &UNK_18098bcb0;
        uVar5 = uStack_110 + 0xf;
        FUN_1806277c0(&puStack_120,uVar5);
        puVar2 = (undefined4 *)(puStack_118 + uStack_110);
        *puVar2 = 0x75646f4d;
        puVar2[1] = 0x2f73656c;
        puVar2[2] = 0x6974614e;
        puVar2[3] = 0x2f6576;
        uStack_110 = uVar5;
        FUN_1806277c0(&puStack_120,uVar1 + 0x19);
        puVar3 = (undefined8 *)(puStack_118 + uStack_110);
        *puVar3 = 0x677261742e676f67;
        *(undefined2 *)(puVar3 + 1) = 0x7465;
        *(undefined1 *)((longlong)puVar3 + 10) = 0;
        uStack_d0 = 0;
        lStack_c8 = 0;
        puVar4 = &DAT_18098bc73;
        if (puStack_118 != (undefined *)0x0) {
          puVar4 = puStack_118;
        }
        uStack_110 = uVar1 + 0x19;
        FUN_18062dee0(&uStack_d0,puVar4,&UNK_1809fcfbc);
        if (lStack_c8 != 0) {
          fclose();
          lStack_c8 = 0;
          LOCK();
          _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
          UNLOCK();
        }
        puStack_120 = &UNK_180a3c3e0;
        if (puStack_118 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_118 = (undefined *)0x0;
        uStack_108 = 0;
        puStack_120 = &UNK_18098bcb0;
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180626eb0(longlong param_1,longlong param_2)
void FUN_180626eb0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_18004b9b0();
  if (iVar1 < 0) {
    *(undefined1 *)(param_1 + -1 + param_2) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180626ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180626ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_258 [32];
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined1 auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  uStack_238 = 0;
  puStack_230 = &uStackX_10;
  __stdio_common_vsprintf(*puVar1 | 1,auStack_228,0x200,param_1);
  (*(code *)**(undefined8 **)*_DAT_180c8ed08)((undefined8 *)*_DAT_180c8ed08,auStack_228,0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}





// 函数: void FUN_180626f80(void)
void FUN_180626f80(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180627020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180627020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_258 [32];
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined1 auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  uStack_238 = 0;
  puStack_230 = &uStackX_10;
  __stdio_common_vsprintf(*puVar1 | 1,auStack_228,0x200,param_1);
  (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x10))((longlong *)*_DAT_180c8ed08,auStack_228,0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806270c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1806270c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_258 [32];
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined1 auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  uStack_238 = 0;
  puStack_230 = &uStackX_10;
  __stdio_common_vsprintf(*puVar1 | 1,auStack_228,0x200,param_1);
  (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x18))((longlong *)*_DAT_180c8ed08,auStack_228);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}





// 函数: void FUN_180627160(void)
void FUN_180627160(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806272a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1806272a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_258 [32];
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined1 auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  uStack_238 = 0;
  puStack_230 = &uStackX_10;
  __stdio_common_vsprintf(*puVar1 | 1,auStack_228,0x200,param_1);
  (**(code **)**(undefined8 **)(_DAT_180c8ed08 + 8))
            (*(undefined8 **)(_DAT_180c8ed08 + 8),auStack_228);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_258);
}





// 函数: void FUN_180627340(void)
void FUN_180627340(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



undefined8 *
FUN_1806273e0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 8);
  }
  lVar1 = strrchr(puVar2,0x2e,param_3,param_4,0,0xfffffffffffffffe);
  if (lVar1 == 0) {
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = &UNK_1809fdc18;
    param_1[1] = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    strcpy_s(param_1[1],0x10,&DAT_18098bc73);
  }
  else {
    FUN_180057090(param_1,lVar1 + 1);
  }
  return param_1;
}



undefined8 *
FUN_180627490(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  ulonglong uVar3;
  
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_2 + 8);
  }
  lVar1 = strrchr(puVar2,0x2e,param_3,param_4,0,0xfffffffffffffffe);
  if (lVar1 != 0) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)(lVar1 + uVar3) != '\0');
    if (uVar3 < 0x10) {
      FUN_180057090(param_1,lVar1);
      return param_1;
    }
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fdc18;
  param_1[1] = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  strcpy_s(param_1[1],0x10,&DAT_18098bc73);
  return param_1;
}



longlong FUN_180627560(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  FUN_180068ff0();
  uVar2 = *(int *)(param_2 + 0x10) - 1;
  if (-1 < (int)uVar2) {
    lVar1 = (longlong)(int)uVar2;
    while (*(char *)(*(longlong *)(param_2 + 8) + lVar1) != '.') {
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + -1;
      if (lVar1 < 0) {
        return param_1;
      }
    }
    if (uVar2 != 0xffffffff) {
      *(undefined1 *)((ulonglong)uVar2 + *(longlong *)(param_1 + 8)) = 0;
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 8) + lVar1) != '\0');
      *(int *)(param_1 + 0x10) = (int)lVar1;
    }
  }
  return param_1;
}



longlong * FUN_180627600(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 8);
  }
  lVar2 = strrchr(puVar3,0x2f,param_3,param_4,0,0xfffffffffffffffe);
  *param_1 = (longlong)&UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (longlong)&UNK_1809feda8;
  param_1[1] = (longlong)(param_1 + 3);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (lVar2 == 0) {
    pcVar1 = *(code **)(*param_1 + 0x10);
    puVar3 = &DAT_18098bc73;
    if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_2 + 8);
    }
    (*pcVar1)(param_1,puVar3,pcVar1,param_4,1);
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,lVar2 + 1);
  }
  return param_1;
}



longlong FUN_1806276d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_180068ff0();
  uVar3 = *(int *)(param_2 + 0x10) - 1;
  if (-1 < (int)uVar3) {
    lVar1 = (longlong)(int)uVar3;
    uVar2 = uVar3;
    do {
      if (*(char *)(*(longlong *)(param_2 + 8) + lVar1) == '/') {
        if (uVar2 != 0xffffffff) {
          *(undefined1 *)((ulonglong)uVar2 + *(longlong *)(param_1 + 8)) = 0;
          lVar1 = -1;
          do {
            lVar1 = lVar1 + 1;
          } while (*(char *)(*(longlong *)(param_1 + 8) + lVar1) != '\0');
          *(int *)(param_1 + 0x10) = (int)lVar1;
          return param_1;
        }
        break;
      }
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  if (-1 < (int)uVar3) {
    lVar1 = (longlong)(int)uVar3;
    while (*(char *)(*(longlong *)(param_2 + 8) + lVar1) != '\\') {
      uVar3 = uVar3 - 1;
      lVar1 = lVar1 + -1;
      if (lVar1 < 0) {
        return param_1;
      }
    }
    if (uVar3 != 0xffffffff) {
      *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(param_1 + 8)) = 0;
      lVar1 = -1;
      do {
        lVar1 = lVar1 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 8) + lVar1) != '\0');
      *(int *)(param_1 + 0x10) = (int)lVar1;
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



