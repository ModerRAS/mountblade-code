#include "TaleWorlds.Native.Split.h"

// 99_part_07_part017.c - 4 个函数

// 函数: void FUN_1804ab140(void)
void FUN_1804ab140(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  ulonglong uVar15;
  undefined1 auStack_3b8 [32];
  undefined4 uStack_398;
  undefined *puStack_388;
  undefined1 *puStack_380;
  uint uStack_378;
  uint uStack_370;
  undefined *puStack_368;
  undefined1 *puStack_360;
  uint uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined1 uStack_340;
  undefined4 uStack_33c;
  undefined **ppuStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  longlong *plStack_320;
  longlong *plStack_318;
  undefined *puStack_310;
  longlong lStack_308;
  undefined4 uStack_2f8;
  undefined *puStack_2f0;
  longlong lStack_2e8;
  undefined4 uStack_2d8;
  undefined **ppuStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined2 uStack_278;
  undefined1 uStack_276;
  undefined4 uStack_275;
  undefined2 uStack_271;
  undefined8 uStack_268;
  undefined *puStack_258;
  undefined1 *puStack_250;
  undefined4 uStack_248;
  undefined1 auStack_240 [136];
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  uint auStack_1a8 [4];
  undefined *puStack_198;
  undefined4 *puStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined4 *puStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined4 *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  int aiStack_108 [4];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  
  uStack_268 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_3b8;
  uVar13 = 0;
  puStack_1b8 = &UNK_180a3c3e0;
  auStack_1a8[2] = 0;
  auStack_1a8[3] = 0;
  puStack_1b0 = (undefined8 *)0x0;
  auStack_1a8[0] = 0;
  puStack_1b0 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puStack_1b0 = 0;
  uVar2 = FUN_18064e990(puStack_1b0);
  auStack_1a8[2] = uVar2;
  *puStack_1b0 = 0x646c6f735f6e6373;
  *(undefined4 *)(puStack_1b0 + 1) = 0x726569;
  auStack_1a8[0] = 0xb;
  puStack_198 = &UNK_180a3c3e0;
  uStack_180 = 0;
  puStack_190 = (undefined4 *)0x0;
  uStack_188 = 0;
  puStack_190 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
  *(undefined1 *)puStack_190 = 0;
  uVar2 = FUN_18064e990(puStack_190);
  uStack_180 = CONCAT44(uStack_180._4_4_,uVar2);
  *puStack_190 = 0x5f6e6373;
  puStack_190[1] = 0x6d657469;
  puStack_190[2] = 0x6261745f;
  puStack_190[3] = 0x7561656c;
  *(undefined1 *)(puStack_190 + 4) = 0;
  uStack_188 = 0x10;
  puStack_178 = &UNK_180a3c3e0;
  uStack_160 = 0;
  puStack_170 = (undefined4 *)0x0;
  uStack_168 = 0;
  puStack_170 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
  *(undefined1 *)puStack_170 = 0;
  uVar2 = FUN_18064e990(puStack_170);
  uStack_160 = CONCAT44(uStack_160._4_4_,uVar2);
  *puStack_170 = 0x5f6e6373;
  puStack_170[1] = 0x6d657469;
  puStack_170[2] = 0x6261745f;
  puStack_170[3] = 0x7561656c;
  *(undefined1 *)(puStack_170 + 4) = 0;
  uStack_168 = 0x10;
  puStack_158 = &UNK_180a3c3e0;
  uStack_140 = 0;
  puStack_150 = (undefined4 *)0x0;
  uStack_148 = 0;
  puStack_150 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
  *(undefined1 *)puStack_150 = 0;
  uVar2 = FUN_18064e990(puStack_150);
  uStack_140 = CONCAT44(uStack_140._4_4_,uVar2);
  *puStack_150 = 0x5f6e6373;
  puStack_150[1] = 0x6d657469;
  puStack_150[2] = 0x6261745f;
  puStack_150[3] = 0x7561656c;
  *(undefined1 *)(puStack_150 + 4) = 0;
  uStack_148 = 0x10;
  puStack_138 = &UNK_180a3c3e0;
  uStack_120 = 0;
  puStack_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  puStack_130 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puStack_130 = 0;
  uVar2 = FUN_18064e990(puStack_130);
  uStack_120 = CONCAT44(uStack_120._4_4_,uVar2);
  *puStack_130 = 0x646c6f735f6e6373;
  *(undefined4 *)(puStack_130 + 1) = 0x726569;
  uStack_128 = 0xb;
  puStack_118 = &UNK_180a3c3e0;
  aiStack_108[2] = 0;
  aiStack_108[3] = 0;
  puStack_110 = (undefined8 *)0x0;
  aiStack_108[0] = 0;
  puStack_110 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puStack_110 = 0;
  uVar2 = FUN_18064e990(puStack_110);
  aiStack_108[2] = uVar2;
  *puStack_110 = 0x6574636172616843;
  *(undefined4 *)(puStack_110 + 1) = 0x2f7372;
  aiStack_108[0] = 0xb;
  puStack_f8 = &UNK_180a3c3e0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  puStack_d8 = &UNK_180a3c3e0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_98 = &UNK_180a3c3e0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  plVar11 = (longlong *)&DAT_180c96220;
  uVar15 = uVar13;
  do {
    puStack_258 = &UNK_1809fcc28;
    puStack_250 = auStack_240;
    auStack_240[0] = 0;
    puVar1 = *(undefined **)((longlong)auStack_1a8 + (uVar13 - 8));
    uStack_248 = *(undefined4 *)((longlong)auStack_1a8 + uVar13);
    puVar14 = &DAT_18098bc73;
    if (puVar1 != (undefined *)0x0) {
      puVar14 = puVar1;
    }
    strcpy_s(auStack_240,0x80,puVar14);
    FUN_18019e140(&puStack_2f0,&puStack_258);
    puStack_258 = &UNK_18098bcb0;
    lVar8 = *_DAT_180c86870;
    iVar3 = FUN_1801426a0(lVar8,(longlong)&puStack_1b8 + uVar13);
    if (iVar3 < 0) {
LAB_1804ab686:
      lVar8 = FUN_180628ca0();
    }
    else {
      if ((ulonglong)(*(longlong *)(lVar8 + 0x890) - *(longlong *)(lVar8 + 0x888) >> 5) <=
          (ulonglong)(longlong)iVar3) goto LAB_1804ab686;
      lVar8 = (longlong)iVar3 * 0x20 + *(longlong *)(lVar8 + 0x888);
    }
    FUN_180627ce0(lVar8,&puStack_310,&puStack_2f0);
    ppuStack_338 = &puStack_368;
    puStack_368 = &UNK_180a3c3e0;
    uStack_350 = 0;
    puStack_360 = (undefined1 *)0x0;
    uStack_358 = 0;
    uStack_344 = 0x100;
    uStack_340 = 0;
    uStack_33c = 0;
    uVar12 = *(uint *)((longlong)auStack_1a8 + uVar13);
    if (*(longlong *)((longlong)auStack_1a8 + (uVar13 - 8)) == 0) {
LAB_1804ab729:
      if (uVar12 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_360,*(undefined8 *)((longlong)auStack_1a8 + (uVar13 - 8)),(ulonglong)uVar12);
      }
    }
    else if (uVar12 != 0) {
      iVar3 = uVar12 + 1;
      if (iVar3 < 0x10) {
        iVar3 = 0x10;
      }
      puStack_360 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
      *puStack_360 = 0;
      uVar2 = FUN_18064e990(puStack_360);
      uStack_350 = CONCAT44(uStack_350._4_4_,uVar2);
      goto LAB_1804ab729;
    }
    if (puStack_360 != (undefined1 *)0x0) {
      puStack_360[uVar12] = 0;
    }
    uStack_350 = CONCAT44(*(undefined4 *)((longlong)auStack_1a8 + uVar13 + 0xc),
                          (undefined4)uStack_350);
    uStack_348 = 0;
    uStack_344 = 0x1000000;
    uStack_340 = 1;
    uStack_358 = uVar12;
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x60d30,0x10,0x1f);
    plVar6 = (longlong *)FUN_1801954d0(uVar5,&puStack_368);
    if (plVar6 != (longlong *)0x0) {
      plStack_320 = plVar6;
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    plStack_320 = (longlong *)plVar11[5];
    plVar11[5] = (longlong)plVar6;
    if (plStack_320 != (longlong *)0x0) {
      (**(code **)(*plStack_320 + 0x38))();
    }
    uStack_2b8 = 0x3f800000;
    uStack_2b0 = 0;
    uStack_2a8 = 0x3f80000000000000;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0x3f800000;
    uStack_288 = 0;
    uStack_280 = 0x3f80000000000000;
    uStack_275 = 0x1010101;
    uStack_271 = 0;
    uStack_278 = 0;
    uStack_276 = 0;
    uStack_398 = 0xffffffff;
    FUN_1801a6440(plVar11[5],_DAT_180c868e8,&puStack_310,&uStack_2b8);
    FUN_18019e260(plVar11[5]);
    iVar3 = *(int *)(plVar11[5] + 0x27c0);
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    *(int *)(plVar11[5] + 0x27c0) = iVar3;
    *(undefined1 *)(plVar11[5] + 0x60b90) = 1;
    *(undefined1 *)(plVar11[5] + 0x60b91) = 1;
    *(undefined1 *)(plVar11[5] + 0x28b8) = 1;
    *(undefined1 *)(plVar11[5] + 0x250) = 0;
    ppuVar7 = (undefined **)FUN_18062b1e0(_DAT_180c8ed18,0x3090,8,3);
    *ppuVar7 = &UNK_180a2d380;
    ppuVar7[1] = (undefined *)0x0;
    ppuStack_338 = ppuVar7;
    FUN_1804d9b70(ppuVar7 + 2);
    FUN_1804ca350(ppuVar7 + 0x5a6,0x40);
    plVar11[10] = (longlong)ppuVar7;
    lVar8 = plVar11[5];
    plVar6 = *(longlong **)(lVar8 + 0x3c0);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6,0);
    }
    *(undefined ***)(lVar8 + 0x3c0) = ppuVar7;
    (**(code **)(*ppuVar7 + 8))(ppuVar7,lVar8);
    ppuVar7 = (undefined **)plVar11[5];
    if (ppuVar7 == (undefined **)0x0) {
      uStack_330 = 0xffffffff;
    }
    else {
      uStack_330 = (**(code **)(*ppuVar7 + 8))(ppuVar7);
    }
    uStack_32c = uStack_2bc;
    ppuStack_338 = ppuVar7;
    ppuStack_2c8 = ppuVar7;
    uStack_2c0 = uStack_330;
    (**(code **)(_DAT_180c8ece0 + 0xe8))(&ppuStack_338,uVar15);
    FUN_1800ba9c0(&puStack_388);
    uVar12 = uStack_378 + 0x13;
    if (uVar12 != 0) {
      uVar4 = uStack_378 + 0x14;
      if (puStack_380 == (undefined1 *)0x0) {
        if ((int)uVar4 < 0x10) {
          uVar4 = 0x10;
        }
        puStack_380 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
        *puStack_380 = 0;
      }
      else {
        if (uVar4 <= uStack_370) goto LAB_1804ab990;
        uStack_398 = CONCAT31(uStack_398._1_3_,0x13);
        puStack_380 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_380,uVar4,0x10);
      }
      uStack_370 = FUN_18064e990(puStack_380);
    }
LAB_1804ab990:
    puVar9 = (undefined4 *)(puStack_380 + uStack_378);
    *puVar9 = 0x6e65472f;
    puVar9[1] = 0x74617265;
    puVar9[2] = 0x65546465;
    puVar9[3] = 0x72757478;
    puVar9[4] = 0x2f7365;
    uStack_378 = uVar12;
    if (0 < *(int *)((longlong)aiStack_108 + uVar13)) {
      iVar3 = uVar12 + *(int *)((longlong)aiStack_108 + uVar13);
      if (iVar3 != 0) {
        uVar12 = iVar3 + 1;
        if (puStack_380 == (undefined1 *)0x0) {
          if ((int)uVar12 < 0x10) {
            uVar12 = 0x10;
          }
          puStack_380 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar12,0x13);
          *puStack_380 = 0;
        }
        else {
          if (uVar12 <= uStack_370) goto LAB_1804aba26;
          uStack_398 = CONCAT31(uStack_398._1_3_,0x13);
          puStack_380 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_380,uVar12,0x10);
        }
        uStack_370 = FUN_18064e990(puStack_380);
      }
LAB_1804aba26:
                    // WARNING: Subroutine does not return
      memcpy(puStack_380 + uStack_378,*(undefined8 *)((longlong)aiStack_108 + (uVar13 - 8)),
             (longlong)(*(int *)((longlong)aiStack_108 + uVar13) + 1));
    }
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x880,0x10,0x1f);
    plVar6 = (longlong *)FUN_180301040(uVar5);
    if (plVar6 != (longlong *)0x0) {
      plStack_318 = plVar6;
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    plStack_318 = (longlong *)*plVar11;
    *plVar11 = (longlong)plVar6;
    if (plStack_318 != (longlong *)0x0) {
      (**(code **)(*plStack_318 + 0x38))();
    }
    plVar6 = (longlong *)*plVar11;
    *(undefined1 *)((longlong)plVar6 + 0xdd) = 0;
    (**(code **)(*plVar6 + 0xc0))();
    FUN_180301f30(*plVar11,plVar11[5]);
    FUN_1803033b0(*plVar11,0);
    *(undefined1 *)(*plVar11 + 0xe8) = 1;
    *(undefined4 *)(*plVar11 + 200) = 3;
    *(undefined1 *)(*plVar11 + 0xe9) = 1;
    *(undefined1 *)(*plVar11 + 0xea) = 1;
    puVar10 = &DAT_18098bc73;
    if (puStack_380 != (undefined1 *)0x0) {
      puVar10 = puStack_380;
    }
    (**(code **)(*(longlong *)(*plVar11 + 0xa8) + 0x10))((longlong *)(*plVar11 + 0xa8),puVar10);
    *(undefined1 *)(*plVar11 + 0x826) = 1;
    *(undefined4 *)(*plVar11 + 0xd0) = 0;
    *(undefined1 *)(*plVar11 + 0x823) = 1;
    FUN_180303b70(*plVar11,0x7fffe9eb,0);
    lVar8 = *plVar11;
    *(undefined1 *)(lVar8 + 0x824) = 1;
    if (*(longlong *)(lVar8 + 0x588) != *(longlong *)(lVar8 + 0x6d0)) {
      FUN_1802e1590(lVar8 + 0x560);
    }
    *(undefined1 *)(*plVar11 + 0x6c2) = 1;
    puStack_388 = &UNK_180a3c3e0;
    if (puStack_380 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_380 = (undefined1 *)0x0;
    uStack_370 = 0;
    puStack_388 = &UNK_18098bcb0;
    ppuStack_338 = &puStack_368;
    puStack_368 = &UNK_180a3c3e0;
    if (puStack_360 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_360 = (undefined1 *)0x0;
    uStack_350 = uStack_350 & 0xffffffff00000000;
    puStack_368 = &UNK_18098bcb0;
    puStack_310 = &UNK_180a3c3e0;
    if (lStack_308 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_308 = 0;
    uStack_2f8 = 0;
    puStack_310 = &UNK_18098bcb0;
    puStack_2f0 = &UNK_180a3c3e0;
    if (lStack_2e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_2e8 = 0;
    uStack_2d8 = 0;
    puStack_2f0 = &UNK_18098bcb0;
    uVar12 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar12;
    uVar13 = uVar13 + 0x20;
    plVar11 = plVar11 + 1;
    if (4 < (int)uVar12) {
      FUN_1808fc8a8(&puStack_118,0x20,5,FUN_180627b90);
      FUN_1808fc8a8(&puStack_1b8,0x20,5,FUN_180627b90);
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_3b8);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804abca0(longlong **param_1)
void FUN_1804abca0(longlong **param_1)

{
  undefined4 uVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  longlong **pplStackX_8;
  longlong *plStackX_10;
  longlong ***ppplStackX_18;
  longlong ***ppplStackX_20;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined *puStack_130;
  undefined4 uStack_128;
  longlong *plStack_120;
  longlong **pplStack_118;
  int iStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  longlong *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong **pplStack_60;
  longlong ****pppplStack_58;
  
  uStack_68 = 0xfffffffffffffffe;
  if (_DAT_180c96220 != 0) {
    uVar11 = 0;
    uVar13 = uVar11;
    pplStackX_8 = param_1;
    lVar9 = _DAT_180c96330;
    lVar7 = _DAT_180c96338;
    if (_DAT_180c96338 - _DAT_180c96330 >> 6 != 0) {
      do {
        lVar9 = _DAT_180c96330;
        uVar1 = *(undefined4 *)(uVar11 + _DAT_180c96330);
        uVar16 = FUN_180627ae0(&plStack_140,_DAT_180c96330 + 8 + uVar11);
        plStack_120 = *(longlong **)(uVar11 + 0x28 + lVar9);
        if (plStack_120 != (longlong *)0x0) {
          uVar16 = (**(code **)(*plStack_120 + 0x28))();
        }
        pplStack_118 = *(longlong ***)(uVar11 + 0x30 + lVar9);
        if (pplStack_118 != (longlong **)0x0) {
          uVar16 = (*(code *)(*pplStack_118)[5])();
        }
        iStack_110 = *(int *)(uVar11 + 0x38 + lVar9);
        lVar9 = (longlong)iStack_110;
        ppplStackX_20 = &pplStackX_8;
        pplStackX_8 = pplStack_118;
        if (pplStack_118 != (longlong **)0x0) {
          uVar16 = (*(code *)(*pplStack_118)[5])();
        }
        pplStack_60 = &plStackX_10;
        plStackX_10 = plStack_120;
        if (plStack_120 != (longlong *)0x0) {
          uVar16 = (**(code **)(*plStack_120 + 0x28))();
        }
        pppplStack_58 = &ppplStackX_18;
        ppplStackX_18 = *(longlong ****)(lVar9 * 8 + 0x180c96248);
        if (ppplStackX_18 != (longlong ***)0x0) {
          uVar16 = (*(code *)(*ppplStackX_18)[5])();
        }
        FUN_1804acad0(uVar16,uVar1,&ppplStackX_18,&plStackX_10,&pplStackX_8,&plStack_140,iStack_110)
        ;
        if (pplStack_118 != (longlong **)0x0) {
          (*(code *)(*pplStack_118)[7])();
        }
        if (plStack_120 != (longlong *)0x0) {
          (**(code **)(*plStack_120 + 0x38))();
        }
        pplStackX_8 = &plStack_140;
        plStack_140 = (longlong *)&UNK_180a3c3e0;
        if (plStack_138 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plStack_138 = (longlong *)0x0;
        uStack_128 = 0;
        plStack_140 = (longlong *)&UNK_18098bcb0;
        uVar14 = (int)uVar13 + 1;
        uVar11 = uVar11 + 0x40;
        uVar13 = (ulonglong)uVar14;
        lVar9 = _DAT_180c96330;
        lVar7 = _DAT_180c96338;
      } while ((ulonglong)(longlong)(int)uVar14 < (ulonglong)(_DAT_180c96338 - _DAT_180c96330 >> 6))
      ;
    }
    for (; lVar4 = _DAT_180c96338, lVar9 != _DAT_180c96338; lVar9 = lVar9 + 0x40) {
      _DAT_180c96338 = lVar7;
      FUN_1804ac4d0(lVar9);
      lVar7 = _DAT_180c96338;
      _DAT_180c96338 = lVar4;
    }
    plVar12 = (longlong *)0x180c96298;
    lVar9 = 5;
    _DAT_180c96338 = _DAT_180c96330;
    do {
      pplVar2 = (longlong **)*plVar12;
      if (pplVar2 != (longlong **)0x0) {
        lVar7 = plVar12[-10];
        ppplStackX_18 = &pplStackX_8;
        pplStackX_8 = pplVar2;
        (*(code *)(*pplVar2)[5])();
        ppplStackX_20 = &pplStackX_8;
        FUN_180198980(lVar7,pplStackX_8);
        if (pplStackX_8 != (longlong **)0x0) {
          (*(code *)(*pplStackX_8)[7])();
        }
        plStackX_10 = (longlong *)*plVar12;
        *plVar12 = 0;
        if (plStackX_10 != (longlong *)0x0) {
          (**(code **)(*plStackX_10 + 0x38))();
        }
      }
      plVar10 = (longlong *)plVar12[-0xf];
      *(undefined1 *)((longlong)plVar10 + 0xdd) = 0;
      (**(code **)(*plVar10 + 0xc0))();
      plVar12 = plVar12 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    ppplStackX_18 = (longlong ***)0x180c962c0;
    iVar5 = _Mtx_lock(0x180c962c0);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    plVar12 = _DAT_180c96310;
    if (((longlong)_DAT_180c96318 - (longlong)_DAT_180c96310) / 0x38 != 0) {
      pplVar2 = (longlong **)*_DAT_180c96310;
      if (pplVar2 != (longlong **)0x0) {
        (*(code *)(*pplVar2)[5])();
      }
      plStack_140 = (longlong *)plVar12[1];
      if (plStack_140 != (longlong *)0x0) {
        (**(code **)(*plStack_140 + 0x28))();
      }
      FUN_180627ae0(&plStack_138,plVar12 + 2);
      pplStack_118 = (longlong **)CONCAT44(pplStack_118._4_4_,(int)plVar12[6]);
      lVar9 = (longlong)(int)plVar12[6];
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0xffffffff;
      uStack_a8 = 1;
      uStack_a6 = 0;
      uStack_a4 = 0xffffffff;
      uStack_a0 = 1;
      uStack_98 = 0;
      plStack_90 = (longlong *)0x0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 3;
      uStack_70 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_fc = 0xffffffff;
      uStack_f8 = 1;
      uStack_f6 = 0;
      uStack_f4 = 0xffffffff;
      uStack_f0 = 1;
      uStack_e8 = 0;
      pplStackX_8 = &plStack_e0;
      plStack_e0 = (longlong *)0x0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 3;
      uStack_c0 = 0;
      iVar5 = FUN_1801a3620(*(undefined8 *)(lVar9 * 8 + 0x180c96248),&uStack_b8);
      if ((iVar5 == 0) && (iVar5 = FUN_1802e7bc0(pplVar2,&uStack_108), iVar5 == 0)) {
        lVar7 = 2;
        plVar12 = plStack_140 + 2;
        plVar10 = (longlong *)(*(longlong *)(&DAT_180c96220 + lVar9 * 8) + 0x6e0);
        do {
          plVar6 = plVar10;
          plVar15 = plVar12;
          lVar4 = plVar15[1];
          *plVar6 = *plVar15;
          plVar6[1] = lVar4;
          lVar4 = plVar15[3];
          plVar6[2] = plVar15[2];
          plVar6[3] = lVar4;
          lVar4 = plVar15[5];
          plVar6[4] = plVar15[4];
          plVar6[5] = lVar4;
          lVar4 = plVar15[7];
          plVar6[6] = plVar15[6];
          plVar6[7] = lVar4;
          lVar4 = plVar15[9];
          plVar6[8] = plVar15[8];
          plVar6[9] = lVar4;
          lVar4 = plVar15[0xb];
          plVar6[10] = plVar15[10];
          plVar6[0xb] = lVar4;
          lVar4 = plVar15[0xd];
          plVar6[0xc] = plVar15[0xc];
          plVar6[0xd] = lVar4;
          lVar4 = plVar15[0xf];
          plVar6[0xe] = plVar15[0xe];
          plVar6[0xf] = lVar4;
          lVar7 = lVar7 + -1;
          plVar12 = plVar15 + 0x10;
          plVar10 = plVar6 + 0x10;
        } while (lVar7 != 0);
        lVar7 = plVar15[0x11];
        plVar6[0x10] = plVar15[0x10];
        plVar6[0x11] = lVar7;
        lVar7 = plVar15[0x13];
        plVar6[0x12] = plVar15[0x12];
        plVar6[0x13] = lVar7;
        uVar1 = *(undefined4 *)((longlong)plVar15 + 0xa4);
        lVar7 = plVar15[0x15];
        uVar16 = *(undefined4 *)((longlong)plVar15 + 0xac);
        *(int *)(plVar6 + 0x14) = (int)plVar15[0x14];
        *(undefined4 *)((longlong)plVar6 + 0xa4) = uVar1;
        *(int *)(plVar6 + 0x15) = (int)lVar7;
        *(undefined4 *)((longlong)plVar6 + 0xac) = uVar16;
        uVar1 = *(undefined4 *)((longlong)plVar15 + 0xb4);
        lVar7 = plVar15[0x17];
        uVar16 = *(undefined4 *)((longlong)plVar15 + 0xbc);
        *(int *)(plVar6 + 0x16) = (int)plVar15[0x16];
        *(undefined4 *)((longlong)plVar6 + 0xb4) = uVar1;
        *(int *)(plVar6 + 0x17) = (int)lVar7;
        *(undefined4 *)((longlong)plVar6 + 0xbc) = uVar16;
        *(undefined1 *)(*(longlong *)(&DAT_180c96220 + lVar9 * 8) + 0xdd) = 1;
        FUN_1802ee720(pplVar2,1);
        puVar8 = &DAT_18098bc73;
        if (puStack_130 != (undefined *)0x0) {
          puVar8 = puStack_130;
        }
        (**(code **)(*(longlong *)(*(longlong *)(&DAT_180c96220 + lVar9 * 8) + 0x88) + 0x10))
                  ((longlong *)(*(longlong *)(&DAT_180c96220 + lVar9 * 8) + 0x88),puVar8);
        if (pplVar2 != (longlong **)0x0) {
          pplStackX_8 = pplVar2;
          (*(code *)(*pplVar2)[5])(pplVar2);
        }
        pplStackX_8 = *(longlong ***)(lVar9 * 8 + 0x180c96298);
        *(longlong ***)(lVar9 * 8 + 0x180c96298) = pplVar2;
        if (pplStackX_8 != (longlong **)0x0) {
          (*(code *)(*pplStackX_8)[7])();
        }
        plVar12 = _DAT_180c96310;
        lVar9 = ((longlong)_DAT_180c96318 - (longlong)_DAT_180c96310) / 0x38;
        pplVar3 = (longlong **)_DAT_180c96310[lVar9 * 7 + -7];
        if (pplVar3 != (longlong **)0x0) {
          pplStackX_8 = pplVar3;
          (*(code *)(*pplVar3)[5])(pplVar3);
        }
        pplStackX_8 = (longlong **)*plVar12;
        *plVar12 = (longlong)pplVar3;
        if (pplStackX_8 != (longlong **)0x0) {
          (*(code *)(*pplStackX_8)[7])();
        }
        pplVar3 = (longlong **)plVar12[lVar9 * 7 + -6];
        if (pplVar3 != (longlong **)0x0) {
          pplStackX_8 = pplVar3;
          (*(code *)(*pplVar3)[5])(pplVar3);
        }
        pplStackX_8 = (longlong **)plVar12[1];
        plVar12[1] = (longlong)pplVar3;
        if (pplStackX_8 != (longlong **)0x0) {
          (*(code *)(*pplStackX_8)[7])();
        }
        uVar14 = *(uint *)(plVar12 + lVar9 * 7 + -3);
        uVar13 = (ulonglong)uVar14;
        if (plVar12[lVar9 * 7 + -4] != 0) {
          FUN_1806277c0(plVar12 + 2,uVar13);
        }
        if (uVar14 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(plVar12[3],plVar12[lVar9 * 7 + -4],uVar13);
        }
        *(undefined4 *)(plVar12 + 4) = 0;
        if (plVar12[3] != 0) {
          *(undefined1 *)(uVar13 + plVar12[3]) = 0;
        }
        *(undefined4 *)((longlong)plVar12 + 0x2c) =
             *(undefined4 *)((longlong)plVar12 + lVar9 * 0x38 + -0xc);
        *(int *)(plVar12 + 6) = (int)plVar12[lVar9 * 7 + -1];
        plVar12 = _DAT_180c96310 +
                  (((longlong)_DAT_180c96318 - (longlong)_DAT_180c96310) / 0x38) * 7;
        if ((plVar12 < _DAT_180c96318) &&
           (lVar9 = ((longlong)_DAT_180c96318 - (longlong)plVar12) / 0x38, 0 < lVar9)) {
          plVar10 = plVar12 + -6;
          plVar15 = plVar12 + 2;
          do {
            lVar7 = *plVar12;
            *plVar12 = 0;
            pplStackX_8 = (longlong **)plVar10[-1];
            plVar10[-1] = lVar7;
            if (pplStackX_8 != (longlong **)0x0) {
              (*(code *)(*pplStackX_8)[7])();
            }
            lVar7 = plVar12[1];
            plVar12[1] = 0;
            plStackX_10 = (longlong *)*plVar10;
            *plVar10 = lVar7;
            if (plStackX_10 != (longlong *)0x0) {
              (**(code **)(*plStackX_10 + 0x38))();
            }
            FUN_18005d190(plVar10 + 1,plVar15);
            *(int *)(plVar10 + 5) = (int)plVar12[6];
            lVar9 = lVar9 + -1;
            plVar10 = plVar10 + 7;
            plVar12 = plVar12 + 7;
            plVar15 = plVar15 + 7;
          } while (0 < lVar9);
        }
        _DAT_180c96318 = _DAT_180c96318 + -7;
        FUN_1804ac5c0(_DAT_180c96318);
      }
      pplStackX_8 = &plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pplStackX_8 = &plStack_90;
      if (plStack_90 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      pplStackX_8 = &plStack_138;
      plStack_138 = (longlong *)&UNK_180a3c3e0;
      if (puStack_130 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_130 = (undefined *)0x0;
      plStack_120 = (longlong *)((ulonglong)plStack_120 & 0xffffffff00000000);
      plStack_138 = (longlong *)&UNK_18098bcb0;
      if (plStack_140 != (longlong *)0x0) {
        (**(code **)(*plStack_140 + 0x38))();
      }
      if (pplVar2 != (longlong **)0x0) {
        (*(code *)(*pplVar2)[7])();
      }
    }
    iVar5 = _Mtx_unlock(0x180c962c0);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  return;
}



undefined4 *
FUN_1804ac460(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  FUN_180627ae0(param_1 + 2,param_2 + 2,param_3,param_4,0xfffffffffffffffe);
  plVar1 = *(longlong **)(param_2 + 10);
  *(longlong **)(param_1 + 10) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = *(longlong **)(param_2 + 0xc);
  *(longlong **)(param_1 + 0xc) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  param_1[0xe] = param_2[0xe];
  return param_1;
}






// 函数: void FUN_1804ac4d0(longlong param_1)
void FUN_1804ac4d0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
  }
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  return;
}



longlong * FUN_1804ac550(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[1];
  param_1[1] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_180627ae0(param_1 + 2,param_2 + 2,param_3,param_4,uVar2);
  *(int *)(param_1 + 6) = (int)param_2[6];
  return param_1;
}






// 函数: void FUN_1804ac5c0(longlong *param_1)
void FUN_1804ac5c0(longlong *param_1)

{
  param_1[2] = (longlong)&UNK_180a3c3e0;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = (longlong)&UNK_18098bcb0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}






