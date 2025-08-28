#include "TaleWorlds.Native.Split.h"

// 03_rendering_part153.c - 16 个函数

// 函数: void FUN_180360210(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)
void FUN_180360210(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar1 = *(longlong *)param_4[1];
  lVar2 = *param_4;
  uVar5 = *(undefined4 *)(lVar1 + 0x2e8);
  uVar6 = *(undefined4 *)(lVar1 + 0x2ec);
  uVar7 = *(undefined4 *)(lVar1 + 0x2f0);
  uVar8 = *(undefined4 *)(lVar1 + 0x2f4);
  uVar9 = *(undefined4 *)(lVar1 + 0x2f8);
  uVar10 = *(undefined4 *)(lVar1 + 0x2fc);
  uVar11 = *(undefined4 *)(lVar1 + 0x300);
  uVar12 = *(undefined4 *)(lVar1 + 0x304);
  uVar13 = *(undefined4 *)(lVar1 + 0x308);
  uVar14 = *(undefined4 *)(lVar1 + 0x30c);
  uVar15 = *(undefined4 *)(lVar1 + 0x310);
  uVar16 = *(undefined8 *)(lVar1 + 0x314);
  uVar17 = *(undefined8 *)(lVar1 + 0x31c);
  uVar18 = *(undefined8 *)(lVar1 + 0x324);
  uVar19 = *(undefined8 *)(lVar1 + 0x32c);
  uVar20 = *(undefined8 *)(lVar1 + 0x334);
  *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar1 + 0x2e4);
  *(undefined4 *)(lVar2 + 0x18) = uVar5;
  *(undefined4 *)(lVar2 + 0x1c) = uVar6;
  *(undefined4 *)(lVar2 + 0x20) = uVar7;
  *(undefined4 *)(lVar2 + 0x24) = uVar8;
  *(undefined4 *)(lVar2 + 0x28) = uVar9;
  *(undefined4 *)(lVar2 + 0x2c) = uVar10;
  *(undefined4 *)(lVar2 + 0x30) = uVar11;
  *(undefined4 *)(lVar2 + 0x34) = uVar12;
  *(undefined4 *)(lVar2 + 0x38) = uVar13;
  *(undefined4 *)(lVar2 + 0x3c) = uVar14;
  *(undefined4 *)(lVar2 + 0x40) = uVar15;
  *(undefined8 *)(lVar2 + 0x44) = uVar16;
  *(undefined8 *)(lVar2 + 0x4c) = uVar17;
  *(undefined8 *)(lVar2 + 0x54) = uVar18;
  *(undefined8 *)(lVar2 + 0x5c) = uVar19;
  *(undefined8 *)(lVar2 + 100) = uVar20;
  plVar3 = (longlong *)*param_4;
  lVar2 = *(longlong *)(param_1 + 8);
  if ((((char)plVar3[2] == '\0') && (*(char *)((longlong)plVar3 + 0x11) == '\0')) && (*plVar3 != 0))
  {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined2 *)(plVar3 + 2) = 1;
  *plVar3 = lVar2;
  plVar3[1] = param_2;
  puVar4 = (undefined8 *)*param_4;
  if ((*(char *)((longlong)puVar4 + 0x66) == '\0') && (*(char *)(puVar4 + 2) != '\0')) {
    uVar20 = FUN_18062b420(_DAT_180c8ed18,puVar4[1],CONCAT71((int7)((ulonglong)lVar1 >> 8),3));
                    // WARNING: Subroutine does not return
    memcpy(uVar20,*puVar4,puVar4[1]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803603d0(undefined8 *param_1)
void FUN_1803603d0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &UNK_180a1f978;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 3;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 3;
  puVar3[0x18] = &UNK_18098bcb0;
  puVar3[0x19] = 0;
  *(undefined4 *)(puVar3 + 0x1a) = 0;
  puVar3[0x18] = &UNK_180a3c3e0;
  puVar3[0x1b] = 0;
  puVar3[0x19] = 0;
  *(undefined4 *)(puVar3 + 0x1a) = 0;
  param_1[0x1d] = &UNK_18098bcb0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = &UNK_180a3c3e0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  puVar3 = param_1 + 0x22;
  *puVar3 = &UNK_18098bcb0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *puVar3 = &UNK_180a3c3e0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 3;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 3;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x37) = 1;
  puStack_1c8 = &UNK_180a3c3e0;
  uStack_1b0 = 0;
  puStack_1c0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_1c0 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar1);
  *puVar2 = 0x6d614e2068746150;
  *(undefined2 *)(puVar2 + 1) = 0x65;
  uStack_1b8 = 9;
  FUN_1803460a0(param_1,&puStack_1c8,puVar3,0);
  puStack_1c8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_180360c70(undefined8 param_1,ulonglong param_2)

{
  FUN_180360cb0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1c0);
  }
  return param_1;
}





// 函数: void FUN_180360cb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180360cb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1[0x33] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180361700();
  param_1[0x22] = &UNK_180a3c3e0;
  if (param_1[0x23] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = &UNK_18098bcb0;
  param_1[0x1d] = &UNK_180a3c3e0;
  if (param_1[0x1e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = &UNK_18098bcb0;
  param_1[0x18] = &UNK_180a3c3e0;
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &UNK_18098bcb0;
  if (param_1[0x14] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x38))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x38))();
  }
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1cc50;
  FUN_180080df0();
  *param_1 = &UNK_180a1cdc0;
  FUN_1802f5b10(param_1 + 4,param_1[6],param_3,param_4,uVar1);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}





// 函数: void FUN_180360e00(longlong *param_1)
void FUN_180360e00(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == puVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    puVar2[5] = &UNK_180a3c3e0;
    if (puVar2[6] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[5] = &UNK_18098bcb0;
    *puVar2 = &UNK_180a3c3e0;
    if (puVar2[1] != 0) break;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = &UNK_18098bcb0;
    puVar2 = puVar2 + 10;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180360e20(undefined8 param_1)
void FUN_180360e20(undefined8 param_1)

{
  undefined1 auStack_888 [32];
  undefined4 uStack_868;
  undefined **appuStack_860 [2];
  undefined8 uStack_850;
  undefined *apuStack_848 [19];
  undefined4 uStack_7b0;
  undefined *puStack_7a8;
  undefined1 *puStack_7a0;
  undefined4 uStack_798;
  undefined1 auStack_790 [136];
  undefined *puStack_708;
  undefined1 *puStack_700;
  undefined4 uStack_6f8;
  undefined1 auStack_6f0 [136];
  undefined *puStack_668;
  undefined1 *puStack_660;
  undefined4 uStack_658;
  undefined1 auStack_650 [136];
  undefined *puStack_5c8;
  undefined1 *puStack_5c0;
  undefined4 uStack_5b8;
  undefined1 auStack_5b0 [136];
  undefined *puStack_528;
  undefined1 *puStack_520;
  undefined4 uStack_518;
  undefined1 auStack_510 [136];
  undefined *puStack_488;
  undefined1 *puStack_480;
  undefined4 uStack_478;
  undefined1 auStack_470 [136];
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined4 uStack_3d8;
  undefined1 auStack_3d0 [136];
  undefined *puStack_348;
  undefined1 *puStack_340;
  undefined4 uStack_338;
  undefined1 auStack_330 [136];
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined4 uStack_298;
  undefined1 auStack_290 [136];
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [136];
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [136];
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_850 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_888;
  uStack_868 = 0;
  puStack_7a8 = &UNK_1809fcc28;
  puStack_7a0 = auStack_790;
  auStack_790[0] = 0;
  uStack_798 = 9;
  strcpy_s(auStack_790,0x80,&DAT_180a1d578);
  FUN_180049b30(apuStack_848,&puStack_7a8);
  uStack_7b0 = 0;
  uStack_868 = 1;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_7a8 = &UNK_18098bcb0;
  puStack_708 = &UNK_1809fcc28;
  puStack_700 = auStack_6f0;
  auStack_6f0[0] = 0;
  uStack_6f8 = 0xe;
  strcpy_s(auStack_6f0,0x80,&DAT_180a1ef48);
  FUN_180049b30(apuStack_848,&puStack_708);
  uStack_7b0 = 10;
  uStack_868 = 2;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_708 = &UNK_18098bcb0;
  puStack_668 = &UNK_1809fcc28;
  puStack_660 = auStack_650;
  auStack_650[0] = 0;
  uStack_658 = 5;
  strcpy_s(auStack_650,0x80,&DAT_180a09e30);
  FUN_180049b30(apuStack_848,&puStack_668);
  uStack_7b0 = 2;
  uStack_868 = 4;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_668 = &UNK_18098bcb0;
  puStack_5c8 = &UNK_1809fcc28;
  puStack_5c0 = auStack_5b0;
  auStack_5b0[0] = 0;
  uStack_5b8 = 6;
  strcpy_s(auStack_5b0,0x80,&DAT_180a09e38);
  FUN_180049b30(apuStack_848,&puStack_5c8);
  uStack_7b0 = 2;
  uStack_868 = 8;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_5c8 = &UNK_18098bcb0;
  puStack_528 = &UNK_1809fcc28;
  puStack_520 = auStack_510;
  auStack_510[0] = 0;
  uStack_518 = 3;
  strcpy_s(auStack_510,0x80,&DAT_180a1f8f0);
  FUN_180049b30(apuStack_848,&puStack_528);
  uStack_7b0 = 2;
  uStack_868 = 0x10;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_528 = &UNK_18098bcb0;
  puStack_488 = &UNK_1809fcc28;
  puStack_480 = auStack_470;
  auStack_470[0] = 0;
  uStack_478 = 0xd;
  strcpy_s(auStack_470,0x80,&DAT_180a1f930);
  FUN_180049b30(apuStack_848,&puStack_488);
  uStack_7b0 = 2;
  uStack_868 = 0x20;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_488 = &UNK_18098bcb0;
  puStack_3e8 = &UNK_1809fcc28;
  puStack_3e0 = auStack_3d0;
  auStack_3d0[0] = 0;
  uStack_3d8 = 0xb;
  strcpy_s(auStack_3d0,0x80,&DAT_180a1f920);
  FUN_180049b30(apuStack_848,&puStack_3e8);
  uStack_7b0 = 2;
  uStack_868 = 0x40;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_3e8 = &UNK_18098bcb0;
  puStack_348 = &UNK_1809fcc28;
  puStack_340 = auStack_330;
  auStack_330[0] = 0;
  uStack_338 = 0xc;
  strcpy_s(auStack_330,0x80,&DAT_180a1f910);
  FUN_180049b30(apuStack_848,&puStack_348);
  uStack_7b0 = 2;
  uStack_868 = 0x80;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_348 = &UNK_18098bcb0;
  puStack_2a8 = &UNK_1809fcc28;
  puStack_2a0 = auStack_290;
  auStack_290[0] = 0;
  uStack_298 = 0x14;
  strcpy_s(auStack_290,0x80,&DAT_180a1f8f8);
  FUN_180049b30(apuStack_848,&puStack_2a8);
  uStack_7b0 = 0;
  uStack_868 = 0x100;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_2a8 = &UNK_18098bcb0;
  puStack_208 = &UNK_1809fcc28;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0xf;
  strcpy_s(auStack_1f0,0x80,&DAT_180a1f960);
  FUN_180049b30(apuStack_848,&puStack_208);
  uStack_7b0 = 0;
  uStack_868 = 0x200;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_208 = &UNK_18098bcb0;
  puStack_168 = &UNK_1809fcc28;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xf;
  strcpy_s(auStack_150,0x80,&DAT_180a1f950);
  FUN_180049b30(apuStack_848,&puStack_168);
  uStack_7b0 = 4;
  uStack_868 = 0x400;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_168 = &UNK_18098bcb0;
  puStack_c8 = &UNK_1809fcc28;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0xf;
  strcpy_s(auStack_b0,0x80,&DAT_180a1f940);
  FUN_180049b30(apuStack_848,&puStack_c8);
  uStack_7b0 = 2;
  uStack_868 = 0x800;
  FUN_1803617c0(param_1,appuStack_860,apuStack_848);
  uStack_868 = 0;
  appuStack_860[0] = apuStack_848;
  apuStack_848[0] = &UNK_18098bcb0;
  puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_888);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361690(undefined8 param_1,undefined8 param_2)
void FUN_180361690(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_48;
  
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x1c0,8,3);
  uStack_48 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &UNK_180a1f978;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  *(undefined4 *)(puVar4 + 0x13) = 3;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  *(undefined4 *)(puVar4 + 0x17) = 3;
  puVar4[0x18] = &UNK_18098bcb0;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x1a) = 0;
  puVar4[0x18] = &UNK_180a3c3e0;
  puVar4[0x1b] = 0;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x1a) = 0;
  puVar3[0x1d] = &UNK_18098bcb0;
  puVar3[0x1e] = 0;
  *(undefined4 *)(puVar3 + 0x1f) = 0;
  puVar3[0x1d] = &UNK_180a3c3e0;
  puVar3[0x20] = 0;
  puVar3[0x1e] = 0;
  *(undefined4 *)(puVar3 + 0x1f) = 0;
  puVar4 = puVar3 + 0x22;
  *puVar4 = &UNK_18098bcb0;
  puVar3[0x23] = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  *puVar4 = &UNK_180a3c3e0;
  puVar3[0x25] = 0;
  puVar3[0x23] = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  *(undefined4 *)(puVar3 + 0x2f) = 3;
  puVar3[0x33] = 0;
  puVar3[0x34] = 0;
  puVar3[0x35] = 0;
  *(undefined4 *)(puVar3 + 0x36) = 3;
  *(undefined4 *)(puVar3 + 0x27) = 0;
  *(undefined4 *)(puVar3 + 0x37) = 1;
  puStack_1c8 = &UNK_180a3c3e0;
  uStack_1b0 = 0;
  puStack_1c0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_1c0 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar1);
  *puVar2 = 0x6d614e2068746150;
  *(undefined2 *)(puVar2 + 1) = 0x65;
  uStack_1b8 = 9;
  FUN_1803460a0(puVar3,&puStack_1c8,puVar4,0);
  puStack_1c8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_1803616e0(undefined8 *param_1)
void FUN_1803616e0(undefined8 *param_1)

{
  if ((undefined *)*param_1 != &UNK_180a1f978) {
    (**(code **)((undefined *)*param_1 + 0x70))();
  }
  return;
}





// 函数: void FUN_180361700(longlong *param_1)
void FUN_180361700(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == puVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    puVar2[5] = &UNK_180a3c3e0;
    if (puVar2[6] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    puVar2[5] = &UNK_18098bcb0;
    *puVar2 = &UNK_180a3c3e0;
    if (puVar2[1] != 0) break;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *puVar2 = &UNK_18098bcb0;
    puVar2 = puVar2 + 10;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1803617c0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puStackX_8;
  longlong lStackX_10;
  
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0xc0,*(undefined1 *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  puVar1 = (undefined8 *)(lVar4 + 0x20);
  puStackX_8 = puVar1;
  FUN_180049b30(puVar1,param_3);
  *(undefined4 *)(lVar4 + 0xb8) = *(undefined4 *)(param_3 + 0x98);
  lStackX_10 = lVar4;
  lVar5 = FUN_1800590b0(param_1,&puStackX_8,puVar1);
  if ((char)puStackX_8 == '\0') {
    *puVar1 = &UNK_18098bcb0;
    if (lVar4 != 0) {
      puStackX_8 = puVar1;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *param_2 = lVar5;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar5 != param_1) {
    if (*(int *)(lVar5 + 0x30) == 0) {
LAB_180361877:
      uVar8 = 1;
      goto LAB_180361882;
    }
    if (*(int *)(lVar4 + 0x30) != 0) {
      pbVar6 = *(byte **)(lVar5 + 0x28);
      lVar7 = *(longlong *)(lVar4 + 0x28) - (longlong)pbVar6;
      do {
        bVar2 = *pbVar6;
        uVar3 = (uint)pbVar6[lVar7];
        if (bVar2 != uVar3) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar2 - uVar3) < 1) goto LAB_180361877;
    }
  }
  uVar8 = 0;
LAB_180361882:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,lVar5,param_1,uVar8);
}



longlong FUN_1803618e0(longlong param_1,ulonglong param_2)

{
  *(undefined8 *)(param_1 + 0x70) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = &UNK_18098bcb0;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x90);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361970(undefined8 param_1,undefined8 param_2)
void FUN_180361970(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x90,8,3,0xfffffffffffffffe);
  puVar5 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar5 = &UNK_180a1fae8;
  puVar1 = puVar5 + 0xe;
  *puVar1 = &UNK_18098bcb0;
  puVar5[0xf] = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  *puVar1 = &UNK_180a3c3e0;
  puVar5[0x11] = 0;
  puVar5[0xf] = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_48 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
  *puVar4 = 0x74786554;
  *(undefined1 *)(puVar4 + 1) = 0;
  uStack_40 = 4;
  FUN_1803460a0(puVar3,&puStack_50,puVar1,0);
  puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361ac0(longlong param_1)
void FUN_180361ac0(longlong param_1)

{
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x2e8) & 0xb) == 0xb) {
    FUN_180632d00(_DAT_180c8ed68,*(longlong *)(param_1 + 0x18) + 0xa0,param_1 + 0x70,0xff00ffff,0,0)
    ;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361b10(undefined8 param_1)
void FUN_180361b10(undefined8 param_1)

{
  undefined1 auStack_118 [32];
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined **appuStack_e8 [2];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [72];
  undefined *apuStack_78 [11];
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &UNK_1809fcc58;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 4;
  strcpy_s(auStack_c0,0x40,&DAT_180a064c8);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 0;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361c20(undefined8 *param_1)
void FUN_180361c20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &UNK_180a1fc70;
  puVar1 = puVar3 + 0xe;
  *puVar1 = &UNK_18098bcb0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *puVar1 = &UNK_180a3c3e0;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_68 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
  *puVar3 = 0x6f697463656c6553;
  *(undefined4 *)(puVar3 + 1) = 0x6553206e;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0x74;
  uStack_60 = 0xd;
  FUN_1803460a0(param_1,&puStack_70,puVar1,0,uVar4);
  puStack_70 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



longlong FUN_180361dd0(longlong param_1,ulonglong param_2)

{
  *(undefined8 *)(param_1 + 0x70) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = &UNK_18098bcb0;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361e60(undefined8 param_1,undefined8 param_2)
void FUN_180361e60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_30;
  
  uStack_30 = 0x180361e8a;
  puVar4 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x98,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar3 = puVar4;
  FUN_1803456e0(puVar4,param_2,param_1);
  *puVar3 = &UNK_180a1fc70;
  puVar1 = puVar3 + 0xe;
  *puVar1 = &UNK_18098bcb0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *puVar1 = &UNK_180a3c3e0;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_68 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
  *puVar3 = 0x6f697463656c6553;
  *(undefined4 *)(puVar3 + 1) = 0x6553206e;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0x74;
  uStack_60 = 0xd;
  FUN_1803460a0(puVar4,&puStack_70,puVar1,0,uVar5);
  puStack_70 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180361eb0(undefined8 param_1)
void FUN_180361eb0(undefined8 param_1)

{
  undefined1 auStack_188 [32];
  undefined4 uStack_168;
  undefined **appuStack_160 [2];
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *apuStack_88 [11];
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xd;
  strcpy_s(auStack_130,0x40,&DAT_180a1fc58);
  FUN_1800b8300(apuStack_88,&puStack_148);
  uStack_30 = 0;
  uStack_168 = 1;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 5;
  appuStack_160[0] = apuStack_88;
  strcpy_s(auStack_d0,0x40,&DAT_180a1fc50);
  FUN_1800b8300(apuStack_88,&puStack_e8);
  uStack_30 = 0xb;
  uStack_168 = 2;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  appuStack_160[0] = apuStack_88;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180362040(undefined8 *param_1)
void FUN_180362040(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined4 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &UNK_180a1fe08;
  *(undefined2 *)(puVar3 + 0xe) = 0x101;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x70616e53;
  puVar2[1] = 0x72655420;
  puVar2[2] = 0x6e696172;
  puVar2[3] = 0x206f7420;
  puVar2[4] = 0x69746e45;
  *(undefined2 *)(puVar2 + 5) = 0x7974;
  *(undefined1 *)((longlong)puVar2 + 0x16) = 0;
  uStack_80 = 0x16;
  FUN_1803460a0(param_1,&puStack_90,0,0xb,uVar4);
  puStack_90 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180362280(undefined8 param_1,undefined8 param_2)
void FUN_180362280(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined4 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_30;
  
  uStack_30 = 0x1803622a8;
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &UNK_180a1fe08;
  *(undefined2 *)(puVar4 + 0xe) = 0x101;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x70616e53;
  puVar2[1] = 0x72655420;
  puVar2[2] = 0x6e696172;
  puVar2[3] = 0x206f7420;
  puVar2[4] = 0x69746e45;
  *(undefined2 *)(puVar2 + 5) = 0x7974;
  *(undefined1 *)((longlong)puVar2 + 0x16) = 0;
  uStack_80 = 0x16;
  FUN_1803460a0(puVar3,&puStack_90,0,0xb,uVar5);
  puStack_90 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



