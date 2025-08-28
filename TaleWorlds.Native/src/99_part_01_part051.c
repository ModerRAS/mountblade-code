#include "TaleWorlds.Native.Split.h"

// 99_part_01_part051.c - 12 个函数

// 函数: void FUN_1800d7470(undefined8 param_1,longlong param_2)
void FUN_1800d7470(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar6 = (longlong *)0x0;
  lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x84b8) != 0) || (*(int *)(lVar4 + 0x8878) != -1)) ||
     (lVar3 = _DAT_180c86938, uStackX_8 = param_1, *(int *)(lVar4 + 0x8a78) != 0x10)) {
    uStackX_8 = 0;
    uStack_60 = 0x1800d74cb;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),0x10,1,&uStackX_8);
    lVar3 = _DAT_180c86938;
    *(undefined8 *)(lVar4 + 0x84b8) = 0;
    *(undefined4 *)(lVar4 + 0x8878) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x8a78) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8540) != 0) || (*(int *)(lVar4 + 0x88bc) != -1)) ||
     (*(int *)(lVar4 + 0x8abc) != 0x10)) {
    uStackX_10 = 0;
    uStack_60 = 0x1800d7535;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),0x21,1,&uStackX_10);
    lVar3 = _DAT_180c86938;
    *(undefined8 *)(lVar4 + 0x8540) = 0;
    *(undefined4 *)(lVar4 + 0x88bc) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x8abc) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8590) != 0) || (*(int *)(lVar4 + 0x88e4) != -1)) ||
     (*(int *)(lVar4 + 0x8ae4) != 0x10)) {
    uStackX_18 = 0;
    uStack_60 = 0x1800d759f;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),0x2b,1,&uStackX_18);
    lVar3 = _DAT_180c86938;
    *(undefined8 *)(lVar4 + 0x8590) = 0;
    *(undefined4 *)(lVar4 + 0x88e4) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x8ae4) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8440) != 0) || (*(int *)(lVar4 + 0x883c) != -1)) ||
     (*(int *)(lVar4 + 0x8a3c) != 0x10)) {
    uStackX_20 = 0;
    uStack_60 = 0x1800d7608;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),1,1,&uStackX_20);
    lVar3 = _DAT_180c86938;
    *(undefined8 *)(lVar4 + 0x8440) = 0;
    *(undefined4 *)(lVar4 + 0x883c) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x8a3c) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8458) != 0) || (*(int *)(lVar4 + 0x8848) != -1)) ||
     (*(int *)(lVar4 + 0x8a48) != 0x10)) {
    uStack_38 = 0;
    uStack_60 = 0x1800d7672;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),4,1,&uStack_38);
    lVar3 = _DAT_180c86938;
    *(undefined8 *)(lVar4 + 0x8458) = 0;
    *(undefined4 *)(lVar4 + 0x8848) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x8a48) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(longlong *)(lVar3 + 0x1cd8);
  if (((*(longlong *)(lVar4 + 0x8468) != 0) || (*(int *)(lVar4 + 0x8850) != -1)) ||
     (*(int *)(lVar4 + 0x8a50) != 0x10)) {
    uStack_30 = 0;
    uStack_60 = 0x1800d76dc;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x40))
              (*(longlong **)(lVar4 + 0x8400),6,1,&uStack_30);
    lVar3 = _DAT_180c86938;
    *(undefined8 *)(lVar4 + 0x8468) = 0;
    *(undefined4 *)(lVar4 + 0x8850) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x8a50) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  plVar2 = *(longlong **)(lVar3 + 0x1cd8);
  uStack_60 = 0x1800d7713;
  lVar4 = FUN_180244ff0(param_2);
  iVar1 = *(int *)(param_2 + 0x3578);
  plVar7 = plVar6;
  if (*(longlong *)(lVar4 + 0x1d8) != 0) {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    plVar7 = (longlong *)
             ((longlong)(int)((uint)*(byte *)(lVar4 + 0x335) * iVar1) * 0x10 +
             *(longlong *)(lVar4 + 0x1d8));
    if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
      uStack_60 = 0x1800d776e;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
  }
  lVar4 = _DAT_180c86938;
  plVar2[0x1077] = (longlong)plVar7;
  plVar2 = *(longlong **)(lVar4 + 0x1cd8);
  uStack_60 = 0x1800d7790;
  lVar4 = FUN_180245280(param_2);
  iVar1 = *(int *)(param_2 + 0x357c);
  if (*(longlong *)(lVar4 + 0x1e0) != 0) {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    plVar6 = (longlong *)((longlong)(iVar1 * 2 + 1) * 0x10 + *(longlong *)(lVar4 + 0x1e0));
    if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
      uStack_60 = 0x1800d77e8;
      (**(code **)(*plVar2 + 0x70))(plVar2);
    }
  }
  lVar4 = _DAT_180c86938;
  plVar2[0x107e] = (longlong)plVar6;
  lVar4 = *(longlong *)(lVar4 + 0x1cd8);
  uVar5 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(lVar4 + 0x83b8);
  bVar9 = lVar3 != *(longlong *)(lVar4 + 0x8378);
  if (bVar9) {
    *(longlong *)(lVar4 + 0x8378) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = *(undefined8 *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83c0);
  bVar10 = lVar3 != *(longlong *)(lVar4 + 0x8380);
  if (bVar10) {
    *(longlong *)(lVar4 + 0x8380) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_40 = 0;
  }
  else {
    uStack_40 = *(undefined8 *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83c8);
  bVar11 = lVar3 != *(longlong *)(lVar4 + 0x8388);
  if (bVar11) {
    *(longlong *)(lVar4 + 0x8388) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83d0);
  bVar12 = lVar3 != *(longlong *)(lVar4 + 0x8390);
  if (bVar12) {
    *(longlong *)(lVar4 + 0x8390) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_30 = 0;
  }
  else {
    uStack_30 = *(undefined8 *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83d8);
  bVar13 = lVar3 != *(longlong *)(lVar4 + 0x8398);
  if (bVar13) {
    *(longlong *)(lVar4 + 0x8398) = lVar3;
  }
  if (lVar3 == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = *(undefined8 *)(lVar3 + 8);
  }
  lVar3 = *(longlong *)(lVar4 + 0x83e0);
  bVar14 = lVar3 != *(longlong *)(lVar4 + 0x83a0);
  if (bVar14) {
    *(longlong *)(lVar4 + 0x83a0) = lVar3;
  }
  lVar3 = *(longlong *)(lVar4 + 0x83e8);
  bVar15 = lVar3 != *(longlong *)(lVar4 + 0x83a8);
  if (bVar15) {
    *(longlong *)(lVar4 + 0x83a8) = lVar3;
  }
  lVar3 = *(longlong *)(lVar4 + 0x83f0);
  bVar16 = *(longlong *)(lVar4 + 0x83b0) != lVar3;
  if (bVar16) {
    *(longlong *)(lVar4 + 0x83b0) = lVar3;
  }
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar3 + 8);
  }
  if ((bVar15 || (bVar14 || (bVar13 || (bVar12 || (bVar11 || (bVar10 || bVar9)))))) || (bVar16)) {
    uStack_50 = 0xffffffffffffffff;
    uStack_58 = 0;
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    uStack_68 = 1;
    (**(code **)(**(longlong **)(lVar4 + 0x8400) + 0x110))
              (*(longlong **)(lVar4 + 0x8400),1,&uStack_48,uVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uVar5 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d7810(void)
void FUN_1800d7810(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_288 [32];
  undefined4 uStack_268;
  undefined4 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined4 uStack_230;
  undefined *puStack_228;
  undefined4 *puStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  longlong *plStack_208;
  longlong *aplStack_200 [2];
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [32];
  undefined *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined4 uStack_1a0;
  undefined1 auStack_198 [32];
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [32];
  undefined *puStack_140;
  undefined1 *puStack_138;
  undefined4 uStack_130;
  undefined1 auStack_128 [32];
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [32];
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [32];
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  
  lVar1 = _DAT_180c86890;
  uStack_1f0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_288;
  *(int *)(_DAT_180c86890 + 0x1500) = *(int *)(_DAT_180c86890 + 0x1500) + 1;
  puStack_1e8 = &UNK_18098bc80;
  puStack_1e0 = auStack_1d0;
  auStack_1d0[0] = 0;
  uStack_1d8 = 0xf;
  uVar6 = strcpy_s(auStack_1d0,0x20,&UNK_180a03ff8);
  uStack_230 = 1;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_248 = 0x200;
  uStack_250 = 0x50;
  uStack_258 = 0;
  uStack_260 = 3;
  uStack_268 = 0x220;
  puVar2 = (undefined8 *)FUN_1800b0a10(uVar6,aplStack_200,0xffffffff,&puStack_1e8);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_208 = *(longlong **)(lVar1 + 0x1588);
  *(undefined8 *)(lVar1 + 0x1588) = uVar3;
  if (plStack_208 != (longlong *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  if (aplStack_200[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_200[0] + 0x38))();
  }
  puStack_1e8 = &UNK_18098bcb0;
  uVar3 = FUN_1800bffe0();
  puStack_1b0 = &UNK_18098bc80;
  puStack_1a8 = auStack_198;
  auStack_198[0] = 0;
  uStack_1a0 = 0x11;
  strcpy_s(auStack_198,0x20,&UNK_180a03fe0);
  uVar4 = FUN_180240430(uVar3,&puStack_1b0,1);
  *(undefined8 *)(lVar1 + 0x2340) = uVar4;
  puStack_1b0 = &UNK_18098bcb0;
  puStack_178 = &UNK_18098bc80;
  puStack_170 = auStack_160;
  auStack_160[0] = 0;
  uStack_168 = 0x10;
  strcpy_s(auStack_160,0x20,&UNK_180a04020);
  uVar4 = FUN_180240430(uVar3,&puStack_178,1);
  *(undefined8 *)(lVar1 + 0x2348) = uVar4;
  puStack_178 = &UNK_18098bcb0;
  puStack_140 = &UNK_18098bc80;
  puStack_138 = auStack_128;
  auStack_128[0] = 0;
  uStack_130 = 0x11;
  strcpy_s(auStack_128,0x20,&UNK_180a04008);
  uVar4 = FUN_180240430(uVar3,&puStack_140,1);
  *(undefined8 *)(lVar1 + 0x2350) = uVar4;
  puStack_140 = &UNK_18098bcb0;
  puStack_108 = &UNK_18098bc80;
  puStack_100 = auStack_f0;
  auStack_f0[0] = 0;
  uStack_f8 = 0x10;
  strcpy_s(auStack_f0,0x20,&UNK_180a04058);
  uVar4 = FUN_180240430(uVar3,&puStack_108,1);
  *(undefined8 *)(lVar1 + 0x2358) = uVar4;
  puStack_108 = &UNK_18098bcb0;
  puStack_d0 = &UNK_18098bc80;
  puStack_c8 = auStack_b8;
  auStack_b8[0] = 0;
  uStack_c0 = 0x19;
  strcpy_s(auStack_b8,0x20,&UNK_180a04038);
  uVar4 = FUN_180240430(uVar3,&puStack_d0,1);
  *(undefined8 *)(lVar1 + 0x2360) = uVar4;
  puStack_d0 = &UNK_18098bcb0;
  puStack_98 = &UNK_18098bc80;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0xf;
  strcpy_s(auStack_80,0x20,&UNK_180a04088);
  uVar4 = FUN_180240430(uVar3,&puStack_98,1);
  *(undefined8 *)(lVar1 + 0x2368) = uVar4;
  puStack_98 = &UNK_18098bcb0;
  puStack_60 = &UNK_18098bc80;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 0x10;
  strcpy_s(auStack_48,0x20,&UNK_180a04070);
  uVar3 = FUN_180240430(uVar3,&puStack_60,1);
  *(undefined8 *)(lVar1 + 0x2370) = uVar3;
  puStack_60 = &UNK_18098bcb0;
  puStack_228 = &UNK_180a3c3e0;
  uStack_210 = 0;
  puStack_220 = (undefined4 *)0x0;
  uStack_218 = 0;
  puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_220 = puVar5;
  uVar6 = FUN_18064e990(puVar5);
  uStack_210 = CONCAT44(uStack_210._4_4_,uVar6);
  *puVar5 = 0x5f726270;
  puVar5[1] = 0x64616873;
  puVar5[2] = 0x5f676e69;
  puVar5[3] = 0x64616873;
  puVar5[4] = 0x616d776f;
  *(undefined2 *)(puVar5 + 5) = 0x70;
  uStack_218 = 0x15;
  *(undefined4 *)(lVar1 + 0x13b0) = 1;
  *(undefined4 *)(lVar1 + 0x13c0) = 1;
  puVar2 = (undefined8 *)FUN_1800b4910(_DAT_180c86930,aplStack_200,&puStack_228);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_208 = *(longlong **)(lVar1 + 0x13b8);
  *(undefined8 *)(lVar1 + 0x13b8) = uVar3;
  if (plStack_208 != (longlong *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  if (aplStack_200[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_200[0] + 0x38))();
  }
  puStack_228 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d82a0(ulonglong param_1,ulonglong param_2,longlong param_3)
void FUN_1800d82a0(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  
  uStackX_8 = param_1;
  uStackX_10 = param_2;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x5e,*(undefined8 *)(param_3 + 0x68),1,
                0xffffffff);
  if (*(longlong *)(param_3 + 0x90) == 0) {
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x5d,*(undefined8 *)(param_3 + 0x60),0x12
                  ,0xffffffff);
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x5f,*(undefined8 *)(param_3 + 0xa0),0x10
                  ,0xffffffff);
  }
  if (*(longlong *)(param_3 + 0x88) != 0) {
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x11,*(longlong *)(param_3 + 0x88),0x10,
                  0xffffffff);
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x12,*(undefined8 *)(param_3 + 0x80),0x10
                  ,0xffffffff);
  }
  uVar5 = 0;
  uVar4 = uVar5;
  uVar2 = uVar5;
  if (*(longlong *)(param_3 + 0x2d8) - *(longlong *)(param_3 + 0x2d0) >> 3 != 0) {
    do {
      FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),(int)uVar4 + 0x60,
                    *(undefined8 *)(*(longlong *)(param_3 + 0x2d0) + uVar2),0x10,0xffffffff);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar2 = uVar2 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_3 + 0x2d8) - *(longlong *)(param_3 + 0x2d0) >> 3));
  }
  if (*(char *)(param_3 + 0xc0) != '\0') {
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(longlong *)(param_3 + 0x78) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(longlong *)(uVar2 + 8) == 0)) && (*(longlong *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if ((((*(ulonglong *)(lVar1 + 0x84a8) != uVar4) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar4 == 0 || (*(longlong *)(uVar4 + 8) != 0)) || (*(longlong *)(uVar4 + 0x10) != 0)))) {
      uStackX_10 = uVar5;
      if (uVar4 != 0) {
        uStackX_10 = *(ulonglong *)(uVar4 + 0x10);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xe,1,&uStackX_10);
      *(ulonglong *)(lVar1 + 0x84a8) = uVar4;
      *(undefined4 *)(lVar1 + 0x8870) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(longlong *)(param_3 + 0x70) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(longlong *)(uVar2 + 8) == 0)) && (*(longlong *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if (((*(ulonglong *)(lVar1 + 0x84b0) != uVar4) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar4 != 0) {
        if ((*(longlong *)(uVar4 + 8) == 0) && (*(longlong *)(uVar4 + 0x10) == 0))
        goto LAB_1800d85a5;
        if (uVar4 != 0) {
          uVar5 = *(ulonglong *)(uVar4 + 0x10);
        }
      }
      uStackX_8 = uVar5;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xf,1,&uStackX_8);
      *(ulonglong *)(lVar1 + 0x84b0) = uVar4;
      *(undefined4 *)(lVar1 + 0x8874) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(longlong *)(param_3 + 0x90) != 0) {
    FUN_180178650();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d82bb(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)
void FUN_1800d82bb(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong in_stack_00000050;
  ulonglong in_stack_00000058;
  
  FUN_18029d150(*(undefined8 *)(param_1 + 0x1cd8),(int)param_4 + 0x5d,
                *(undefined8 *)(param_3 + 0x68),param_4,0xffffffff);
  if (*(longlong *)(param_3 + 0x90) == 0) {
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x5d,*(undefined8 *)(param_3 + 0x60),0x12
                  ,0xffffffff);
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x5f,*(undefined8 *)(param_3 + 0xa0),0x10
                  ,0xffffffff);
  }
  if (*(longlong *)(param_3 + 0x88) != 0) {
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x11,*(longlong *)(param_3 + 0x88),0x10,
                  0xffffffff);
    FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x12,*(undefined8 *)(param_3 + 0x80),0x10
                  ,0xffffffff);
  }
  uVar5 = 0;
  uVar4 = uVar5;
  uVar2 = uVar5;
  if (*(longlong *)(param_3 + 0x2d8) - *(longlong *)(param_3 + 0x2d0) >> 3 != 0) {
    do {
      FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),(int)uVar4 + 0x60,
                    *(undefined8 *)(*(longlong *)(param_3 + 0x2d0) + uVar2),0x10,0xffffffff);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar2 = uVar2 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_3 + 0x2d8) - *(longlong *)(param_3 + 0x2d0) >> 3));
  }
  if (*(char *)(param_3 + 0xc0) != '\0') {
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(longlong *)(param_3 + 0x78) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(longlong *)(uVar2 + 8) == 0)) && (*(longlong *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if ((((*(ulonglong *)(lVar1 + 0x84a8) != uVar4) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar4 == 0 || (*(longlong *)(uVar4 + 8) != 0)) || (*(longlong *)(uVar4 + 0x10) != 0)))) {
      in_stack_00000058 = uVar5;
      if (uVar4 != 0) {
        in_stack_00000058 = *(ulonglong *)(uVar4 + 0x10);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xe,1,&stack0x00000058);
      *(ulonglong *)(lVar1 + 0x84a8) = uVar4;
      *(undefined4 *)(lVar1 + 0x8870) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uVar4 = uVar5;
    if ((((*(longlong *)(param_3 + 0x70) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar4 = uVar2, *(longlong *)(uVar2 + 8) == 0)) && (*(longlong *)(uVar2 + 0x10) == 0)) {
      uVar4 = 0;
    }
    if (((*(ulonglong *)(lVar1 + 0x84b0) != uVar4) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar4 != 0) {
        if ((*(longlong *)(uVar4 + 8) == 0) && (*(longlong *)(uVar4 + 0x10) == 0))
        goto LAB_1800d85a5;
        if (uVar4 != 0) {
          uVar5 = *(ulonglong *)(uVar4 + 0x10);
        }
      }
      in_stack_00000050 = uVar5;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xf,1,&stack0x00000050);
      *(ulonglong *)(lVar1 + 0x84b0) = uVar4;
      *(undefined4 *)(lVar1 + 0x8874) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(longlong *)(param_3 + 0x90) != 0) {
    FUN_180178650();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800d8456)
// WARNING: Removing unreachable block (ram,0x0001800d8519)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d83ba(void)
void FUN_1800d83ba(void)

{
  longlong lVar1;
  longlong in_RAX;
  ulonglong uVar2;
  int unaff_EBX;
  ulonglong uVar3;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_stack_00000050;
  ulonglong in_stack_00000058;
  
  if (in_RAX != 0) {
    uVar3 = unaff_RSI & 0xffffffff;
    do {
      FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),unaff_EBX + 0x60,
                    *(undefined8 *)(*(longlong *)(unaff_RDI + 0x2d0) + uVar3),0x10,0xffffffff);
      uVar3 = uVar3 + 8;
      unaff_EBX = unaff_EBX + 1;
    } while ((ulonglong)(longlong)unaff_EBX <
             (ulonglong)(*(longlong *)(unaff_RDI + 0x2d8) - *(longlong *)(unaff_RDI + 0x2d0) >> 3));
  }
  if (*(char *)(unaff_RDI + 0xc0) != (char)unaff_RSI) {
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uVar3 = unaff_RSI;
    if ((((*(longlong *)(unaff_RDI + 0x78) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar3 = uVar2, *(ulonglong *)(uVar2 + 8) == unaff_RSI)) &&
       (*(ulonglong *)(uVar2 + 0x10) == unaff_RSI)) {
      uVar3 = unaff_RSI;
    }
    if ((((*(ulonglong *)(lVar1 + 0x84a8) != uVar3) || (*(int *)(lVar1 + 0x8870) != -1)) ||
        (*(int *)(lVar1 + 0x8a70) != 0x10)) &&
       (((uVar3 == 0 || (*(ulonglong *)(uVar3 + 8) != unaff_RSI)) ||
        (*(ulonglong *)(uVar3 + 0x10) != unaff_RSI)))) {
      in_stack_00000058 = unaff_RSI;
      if (uVar3 != 0) {
        in_stack_00000058 = *(ulonglong *)(uVar3 + 0x10);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xe,1,&stack0x00000058);
      *(ulonglong *)(lVar1 + 0x84a8) = uVar3;
      *(undefined4 *)(lVar1 + 0x8870) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8a70) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    uVar3 = unaff_RSI;
    if ((((*(longlong *)(unaff_RDI + 0x70) != 0) && (uVar2 = FUN_18023a940(), uVar2 != 0)) &&
        (uVar3 = uVar2, *(ulonglong *)(uVar2 + 8) == unaff_RSI)) &&
       (*(ulonglong *)(uVar2 + 0x10) == unaff_RSI)) {
      uVar3 = unaff_RSI;
    }
    if (((*(ulonglong *)(lVar1 + 0x84b0) != uVar3) || (*(int *)(lVar1 + 0x8874) != -1)) ||
       (*(int *)(lVar1 + 0x8a74) != 0x10)) {
      if (uVar3 != 0) {
        if ((*(ulonglong *)(uVar3 + 8) == unaff_RSI) && (*(ulonglong *)(uVar3 + 0x10) == unaff_RSI))
        goto LAB_1800d85a5;
        if (uVar3 != 0) {
          unaff_RSI = *(ulonglong *)(uVar3 + 0x10);
        }
      }
      in_stack_00000050 = unaff_RSI;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0xf,1,&stack0x00000050);
      *(ulonglong *)(lVar1 + 0x84b0) = uVar3;
      *(undefined4 *)(lVar1 + 0x8874) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8a74) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
LAB_1800d85a5:
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_180178650();
  }
  return;
}






// 函数: void FUN_1800d85c5(void)
void FUN_1800d85c5(void)

{
  FUN_180178650();
  return;
}






// 函数: void FUN_1800d8a40(longlong param_1)
void FUN_1800d8a40(longlong param_1)

{
  FUN_1808fc8a8(param_1 + 8,0x18,2,FUN_1800e7f20,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800d8a80(longlong param_1)
void FUN_1800d8a80(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
  }
  FUN_180080df0();
  if (*(longlong *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_1800d8b10(undefined8 param_1)
void FUN_1800d8b10(undefined8 param_1)

{
  FUN_1808fc8a8(param_1,0x488,2,FUN_1800e7ca0,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800d8b40(undefined8 param_1)
void FUN_1800d8b40(undefined8 param_1)

{
  FUN_1808fc8a8(param_1,0x248,2,FUN_1800e7b80,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800d8b70(undefined8 param_1)
void FUN_1800d8b70(undefined8 param_1)

{
  FUN_1808fc8a8(param_1,0x908,2,FUN_1800e7d00,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800d8ba0(undefined8 param_1)
void FUN_1800d8ba0(undefined8 param_1)

{
  FUN_1808fc8a8(param_1,0x50,2,FUN_1800e7c40,0xfffffffffffffffe);
  return;
}






