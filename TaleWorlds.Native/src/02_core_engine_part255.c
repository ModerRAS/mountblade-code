#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part255.c - 2 个函数

// 函数: void FUN_18021fbb0(longlong param_1)
void FUN_18021fbb0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_168 [32];
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined4 uStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 9;
  strcpy_s(auStack_d0,0x40,&UNK_180a12f38);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x6d0;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_100 = *(longlong **)(param_1 + 0x1c70);
  *(undefined8 *)(param_1 + 0x1c70) = uVar1;
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xd;
  strcpy_s(auStack_70,0x40,&UNK_180a12f80);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x210;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_100 = *(longlong **)(param_1 + 0x1cb8);
  *(undefined8 *)(param_1 + 0x1cb8) = uVar1;
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  puStack_88 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x14;
  strcpy_s(auStack_d0,0x40,&UNK_180a12f90);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x1000;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_f8 = *(longlong **)(param_1 + 0x1c78);
  *(undefined8 *)(param_1 + 0x1c78) = uVar1;
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  strcpy_s(auStack_70,0x40,&UNK_180a12f48);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x140;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1cb0);
  *(undefined8 *)(param_1 + 0x1cb0) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x10;
  strcpy_s(auStack_d0,0x40,&UNK_180a12f68);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x200;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1c80);
  *(undefined8 *)(param_1 + 0x1c80) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 10;
  strcpy_s(auStack_70,0x40,&UNK_180a12fc8);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x230;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1c88);
  *(undefined8 *)(param_1 + 0x1c88) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xf;
  strcpy_s(auStack_d0,0x40,&UNK_180a12fd8);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x8000;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1c90);
  *(undefined8 *)(param_1 + 0x1c90) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xb;
  strcpy_s(auStack_70,0x40,&UNK_180a12fa8);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x70;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1ca0);
  *(undefined8 *)(param_1 + 0x1ca0) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xe;
  strcpy_s(auStack_d0,0x40,&UNK_180a12fb8);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x6000;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1c98);
  *(undefined8 *)(param_1 + 0x1c98) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 9;
  strcpy_s(auStack_70,0x40,&UNK_180a13020);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x80;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1ca8);
  *(undefined8 *)(param_1 + 0x1ca8) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x16;
  strcpy_s(auStack_d0,0x40,&UNK_180a13030);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x30;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1cc8);
  *(undefined8 *)(param_1 + 0x1cc8) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x14;
  strcpy_s(auStack_70,0x40,&UNK_180a12fe8);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0xe0;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1cc0);
  *(undefined8 *)(param_1 + 0x1cc0) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_88 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x1a;
  strcpy_s(auStack_d0,0x40,&UNK_180a13000);
  uStack_110 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 1;
  uStack_130 = 0x1a00;
  uStack_138 = 0;
  uStack_140 = 3;
  uStack_148 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10();
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_108 = *(longlong **)(param_1 + 0x1cd0);
  *(undefined8 *)(param_1 + 0x1cd0) = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_168);
}





// 函数: void FUN_180220810(void)
void FUN_180220810(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





