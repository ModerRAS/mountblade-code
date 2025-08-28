#include "TaleWorlds.Native.Split.h"

// 99_part_07_part003.c - 4 个函数

// 函数: void FUN_1803fc600(longlong param_1,longlong param_2)
void FUN_1803fc600(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  longlong *plStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined2 uStack_10c;
  undefined1 uStack_10a;
  undefined4 uStack_109;
  undefined2 uStack_105;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  FUN_1801f9270();
  fVar11 = (float)*(double *)(param_1 + 0x58);
  fVar12 = (float)*(double *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x4c) != '\0') {
    iVar2 = (int)((float)*(int *)(param_2 + 0x3590) * fVar11);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    fVar11 = (float)iVar2;
    iVar2 = (int)((float)*(int *)(param_2 + 0x3594) * fVar12);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    fVar12 = (float)iVar2;
  }
  iVar3 = (int)((int)fVar11 + -1 + ((int)fVar11 + -1 >> 0x1f & 0x3fU)) >> 6;
  iVar9 = (iVar3 + 1) * 0x40;
  *(int *)(param_1 + 0x478) = iVar9;
  iVar2 = (int)((int)fVar12 + -1 + ((int)fVar12 + -1 >> 0x1f & 0x3fU)) >> 6;
  iVar8 = (iVar2 + 1) * 0x40;
  *(int *)(param_1 + 0x47c) = iVar8;
  *(int *)(param_1 + 0x480) = (int)((float)iVar9 * *(float *)(param_2 + 0x35a8));
  *(int *)(param_1 + 0x484) = (int)((float)iVar8 * *(float *)(param_2 + 0x35ac));
  if (iVar9 < iVar8) {
    iVar2 = iVar3;
  }
  iVar3 = (iVar2 + 1) * 0x40;
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  auVar10._0_8_ = (double)log2((double)iVar2);
  lVar7 = (longlong)auVar10._0_8_;
  if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar10._0_8_)) {
    auVar10._8_8_ = auVar10._0_8_;
    uVar4 = movmskpd(0,auVar10);
    auVar10._0_8_ = (double)(longlong)(lVar7 - (ulonglong)(uVar4 & 1));
  }
  iStack_124 = 6;
  if ((int)(auVar10._0_8_ + 1.0) < 6) {
    iStack_124 = (int)(auVar10._0_8_ + 1.0);
  }
  uStack_128 = 1;
  uStack_11c = 0;
  uStack_114 = 0x3f80000000000000;
  uStack_10c = 0x100;
  uStack_109 = 0;
  uStack_105 = 0;
  uStack_fc = 0;
  uStack_130 = *(undefined4 *)(param_1 + 0x478);
  uStack_12c = *(undefined4 *)(param_1 + 0x47c);
  uStack_120 = 0x1e;
  uStack_10a = 1;
  uStack_100 = *(undefined4 *)(param_2 + 0x1bd4);
  puStack_158 = &UNK_180a3c3e0;
  uStack_140 = 0;
  puStack_150 = (undefined8 *)0x0;
  uStack_148 = 0;
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_150 = puVar5;
  uVar4 = FUN_18064e990(puVar5);
  *puVar5 = 0x65766c6f766e6f63;
  *(undefined4 *)(puVar5 + 1) = 0x5f74725f;
  *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
  uStack_148 = 0xc;
  iVar2 = *(int *)(param_2 + 0x3530);
  uStack_140._0_4_ = uVar4;
  if (0 < iVar2) {
    if ((iVar2 != -0xc) && (uVar4 < iVar2 + 0xdU)) {
      uStack_168 = 0x13;
      puVar5 = (undefined8 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,iVar2 + 0xdU,0x10);
      puStack_150 = puVar5;
      uStack_140._0_4_ = FUN_18064e990(puVar5);
      iVar2 = *(int *)(param_2 + 0x3530);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar5 + 0xc),*(undefined8 *)(param_2 + 0x3528),
           (longlong)(iVar2 + 1));
  }
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xc;
  puVar6 = (undefined8 *)&DAT_18098bc73;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = puVar5;
  }
  strcpy_s(auStack_d0,0x80,puVar6);
  puVar6 = (undefined8 *)FUN_1800b1230(_DAT_180c86930,&plStack_f8,&puStack_e8,&uStack_130);
  uVar1 = *puVar6;
  *puVar6 = 0;
  plStack_138 = *(longlong **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x428) = uVar1;
  if (plStack_138 != (longlong *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
  plStack_138 = *(longlong **)(param_1 + 0x470);
  *(undefined8 *)(param_1 + 0x470) = 0;
  if (plStack_138 != (longlong *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  puStack_158 = &UNK_180a3c3e0;
  if (puVar5 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar5);
  }
  puStack_150 = (undefined8 *)0x0;
  uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
  puStack_158 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fc9e0(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,
void FUN_1803fc9e0(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_3b8 [32];
  longlong **pplStack_398;
  undefined4 uStack_390;
  undefined8 uStack_388;
  char acStack_378 [8];
  longlong *plStack_370;
  uint auStack_368 [2];
  undefined **ppuStack_360;
  longlong *plStack_358;
  uint uStack_350;
  undefined2 uStack_34c;
  undefined2 uStack_34a;
  uint uStack_348;
  longlong *plStack_340;
  ulonglong uStack_338;
  undefined4 uStack_330;
  int iStack_32c;
  undefined4 uStack_328;
  undefined8 uStack_324;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  longlong *plStack_310;
  undefined4 uStack_308;
  undefined1 uStack_304;
  longlong lStack_2f8;
  longlong *plStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  longlong *plStack_2d8;
  undefined *puStack_2d0;
  longlong lStack_2c8;
  undefined4 uStack_2c0;
  ulonglong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  longlong *plStack_2a0;
  longlong lStack_298;
  longlong *plStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  longlong *plStack_278;
  undefined *puStack_270;
  longlong lStack_268;
  undefined4 uStack_260;
  ulonglong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  longlong *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [32];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  longlong *plStack_1d0;
  undefined *puStack_1c8;
  longlong *plStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [32];
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong *plStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [72];
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [136];
  ulonglong uStack_68;
  
  uStack_230 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_3b8;
  auStack_368[0] = param_4;
  FUN_1802c22a0(acStack_378,&UNK_180a266c8);
  puVar5 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar5 = (undefined *)param_1[3];
  }
  ppuStack_360 = &puStack_168;
  puStack_168 = &UNK_1809fcc58;
  puStack_160 = auStack_150;
  uStack_158 = 0;
  auStack_150[0] = 0;
  if (puVar5 != (undefined *)0x0) {
    FUN_180049bf0(&puStack_168);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_168);
  }
  *(undefined2 *)(param_1 + 0x20) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x103) = 1;
  uVar9 = *(uint *)(param_1[0x85] + 0x35c);
  uVar8 = (uint)*(byte *)(param_1[0x85] + 0x335);
  if ((int)uVar9 < (int)uVar8) {
    uVar8 = uVar9;
  }
  *(int *)(param_1 + 0x90) = (int)((float)(int)param_1[0x8f] * *(float *)(param_3 + 0x35a8));
  *(int *)((longlong)param_1 + 0x484) =
       (int)((float)*(int *)((longlong)param_1 + 0x47c) * *(float *)(param_3 + 0x35ac));
  *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
  plVar4 = (longlong *)param_1[0x8d];
  uStack_348 = uVar8;
  if (plVar4 != (longlong *)0x0) {
    plStack_370 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStack_370 = (longlong *)param_1[6];
  param_1[6] = (longlong)plVar4;
  if (plStack_370 != (longlong *)0x0) {
    (**(code **)(*plStack_370 + 0x38))();
  }
  uStack_388 = 0;
  uStack_390 = param_5;
  pplStack_398 = (longlong **)CONCAT44(pplStack_398._4_4_,param_4);
  (**(code **)(*param_1 + 0x50))
            (param_1,param_3,(int)param_1[0x8a],*(undefined4 *)((longlong)param_1 + 0x454));
  plVar4 = (longlong *)param_1[0x8b];
  if (plVar4 != (longlong *)0x0) {
    plStack_370 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plStack_370 = (longlong *)param_1[6];
  param_1[6] = (longlong)plVar4;
  if (plStack_370 != (longlong *)0x0) {
    (**(code **)(*plStack_370 + 0x38))();
  }
  plStack_370 = (longlong *)0x0;
  pplStack_398 = (longlong **)CONCAT44(pplStack_398._4_4_,param_5);
  FUN_1801f7d20(param_1,param_3,auStack_368,&plStack_370);
  acStack_378[0] = '\x01';
  plStack_358 = plStack_370;
  uStack_350 = auStack_368[0];
  uStack_34c = 4;
  lStack_2f8 = param_1[0x8b];
  plStack_2d8 = (longlong *)0x0;
  puStack_2d0 = &UNK_180a3c3e0;
  uStack_2b8 = 0;
  lStack_2c8 = 0;
  uStack_2c0 = 0;
  plStack_2a0 = (longlong *)0x0;
  uStack_2e8 = CONCAT26(uStack_34a,CONCAT24(4,auStack_368[0]));
  plStack_2f0 = plStack_370;
  uStack_2e0 = 2;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uVar11 = *(undefined8 *)(param_1[0x8b] + 0x15b8);
  ppuStack_360 = &puStack_228;
  plStack_220 = plStack_370;
  uStack_210 = 2;
  uStack_208 = 0;
  puStack_228 = (undefined *)lStack_2f8;
  uStack_218 = uStack_2e8;
  FUN_180627ae0(auStack_200,&puStack_2d0);
  uStack_1e0 = uStack_2b0;
  uStack_1d8 = uStack_2a8;
  plStack_1d0 = plStack_2a0;
  if (plStack_2a0 != (longlong *)0x0) {
    (**(code **)(*plStack_2a0 + 0x28))();
  }
  lVar2 = FUN_180299eb0(uVar11,param_3,&puStack_228,acStack_378);
  if (acStack_378[0] == '\0') {
    if (plStack_2a0 != (longlong *)0x0) {
      (**(code **)(*plStack_2a0 + 0x38))();
    }
    ppuStack_360 = &puStack_2d0;
    puStack_2d0 = &UNK_180a3c3e0;
    if (lStack_2c8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_2c8 = 0;
    uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
    puStack_2d0 = &UNK_18098bcb0;
    if (plStack_2d8 != (longlong *)0x0) {
      (**(code **)(*plStack_2d8 + 0x38))();
    }
    plVar4 = (longlong *)param_1[0x8c];
    if (plVar4 != (longlong *)0x0) {
      plStack_370 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plStack_370 = (longlong *)param_1[6];
    param_1[6] = (longlong)plVar4;
    if (plStack_370 != (longlong *)0x0) {
      (**(code **)(*plStack_370 + 0x38))();
    }
    plStack_370 = (longlong *)0x0;
    pplStack_398 = (longlong **)CONCAT44(pplStack_398._4_4_,param_5);
    FUN_1801f7d20(param_1,param_3,auStack_368,&plStack_370);
    acStack_378[0] = '\x01';
    plStack_358 = plStack_370;
    uStack_350 = auStack_368[0];
    uStack_34c = 4;
    lStack_298 = param_1[0x8c];
    plStack_278 = (longlong *)0x0;
    puStack_270 = &UNK_180a3c3e0;
    uStack_258 = 0;
    lStack_268 = 0;
    uStack_260 = 0;
    plStack_240 = (longlong *)0x0;
    uStack_288 = CONCAT26(uStack_34a,CONCAT24(4,auStack_368[0]));
    plStack_290 = plStack_370;
    uStack_280 = 2;
    uStack_250 = 0;
    uStack_248 = 0;
    uVar11 = *(undefined8 *)(param_1[0x8c] + 0x15b8);
    ppuStack_360 = &puStack_1c8;
    plStack_1c0 = plStack_370;
    uStack_1b0 = 2;
    uStack_1a8 = 0;
    puStack_1c8 = (undefined *)lStack_298;
    uStack_1b8 = uStack_288;
    FUN_180627ae0(auStack_1a0,&puStack_270);
    uStack_180 = uStack_250;
    uStack_178 = uStack_248;
    plStack_170 = plStack_240;
    if (plStack_240 != (longlong *)0x0) {
      (**(code **)(*plStack_240 + 0x28))();
    }
    lVar3 = FUN_180299eb0(uVar11,param_3,&puStack_1c8,acStack_378);
    if (acStack_378[0] == '\0') {
      if (plStack_240 != (longlong *)0x0) {
        (**(code **)(*plStack_240 + 0x38))();
      }
      ppuStack_360 = &puStack_270;
      puStack_270 = &UNK_180a3c3e0;
      if (lStack_268 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_268 = 0;
      uStack_258 = uStack_258 & 0xffffffff00000000;
      puStack_270 = &UNK_18098bcb0;
      if (plStack_278 != (longlong *)0x0) {
        (**(code **)(*plStack_278 + 0x38))();
      }
      uStack_330 = 1;
      uStack_324 = 0;
      plStack_370 = (longlong *)0x0;
      plStack_310 = (longlong *)0x0;
      uStack_304 = 0;
      lVar1 = param_1[0x85];
      uStack_318 = 0x1000001;
      uStack_338 = (ulonglong)
                   CONCAT24(*(ushort *)(lVar1 + 0x32e) >> 1,(uint)(*(ushort *)(lVar1 + 0x32c) >> 1))
      ;
      uVar9 = (uint)*(byte *)(lVar1 + 0x335);
      if ((int)*(uint *)(lVar1 + 0x35c) < (int)(uint)*(byte *)(lVar1 + 0x335)) {
        uVar9 = *(uint *)(lVar1 + 0x35c);
      }
      _iStack_32c = CONCAT44(*(undefined4 *)(lVar1 + 0x324),uVar9 - 1);
      uStack_31c = 0;
      uStack_308 = *(undefined4 *)(param_3 + 0x1bd4);
      puStack_108 = &UNK_1809fcc28;
      puStack_100 = auStack_f0;
      auStack_f0[0] = 0;
      uStack_f8 = 0x10;
      uVar11 = strcpy_s(auStack_f0,0x80,&UNK_180a266e8);
      FUN_1800b2450(uVar11,&plStack_340,&puStack_108,&uStack_338);
      puStack_108 = &UNK_18098bcb0;
      iVar6 = 1;
      if (1 < (int)uVar8) {
        do {
          lVar1 = _DAT_180c86938;
          bVar7 = (byte)iVar6;
          uVar9 = (uint)(*(ushort *)(param_1[0x85] + 0x32c) >> (bVar7 & 0x1f));
          auStack_368[0] = (uint)(*(ushort *)(param_1[0x85] + 0x32e) >> (bVar7 & 0x1f));
          *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0) = 0.5 / (float)uVar9;
          *(float *)(*(longlong *)(lVar1 + 0x1cd8) + 0x1be4) = 0.5 / (float)auStack_368[0];
          *(float *)(*(longlong *)(lVar1 + 0x1cd8) + 0x1be8) =
               1.0 / (float)(*(ushort *)(param_1[0x85] + 0x32c) >> (bVar7 - 1 & 0x1f));
          *(float *)(*(longlong *)(lVar1 + 0x1cd8) + 0x1bec) =
               1.0 / (float)(*(ushort *)(param_1[0x85] + 0x32e) >> (bVar7 - 1 & 0x1f));
          FUN_18029fc10(*(longlong *)(lVar1 + 0x1cd8),*(undefined8 *)(lVar1 + 0x1c88),
                        *(longlong *)(lVar1 + 0x1cd8) + 0x1be0,0x230);
          lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
          if ((lVar2 != 0) && (*(longlong *)(lVar1 + 0x82a0) != (longlong)**(int **)(lVar2 + 0x10)))
          {
            (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x228))
                      (*(longlong **)(lVar1 + 0x8400),*(undefined8 *)(*(int **)(lVar2 + 0x10) + 6),0
                       ,0);
            *(longlong *)(lVar1 + 0x82a0) = (longlong)**(int **)(lVar2 + 0x10);
          }
          iVar10 = iVar6 + -1;
          pplStack_398._0_4_ = iVar10;
          FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,param_1[0x85],0x20);
          uStack_390 = CONCAT31(uStack_390._1_3_,1);
          pplStack_398 = (longlong **)CONCAT44(pplStack_398._4_4_,iVar10);
          FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,1,plStack_340);
          plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
          (**(code **)(*plVar4 + 0x148))(plVar4,uVar9 + 0x7f >> 7,auStack_368[0],1);
          lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
          if (((*(longlong *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != -1)) ||
             (*(int *)(lVar1 + 0x8a38) != 0x20)) {
            uStack_238 = 0;
            (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x218))
                      (*(longlong **)(lVar1 + 0x8400),0,1,&uStack_238);
            *(undefined8 *)(lVar1 + 0x8438) = 0;
            *(undefined4 *)(lVar1 + 0x8838) = 0xffffffff;
            *(undefined4 *)(lVar1 + 0x8a38) = 0x20;
            *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
          }
          plStack_370 = (longlong *)CONCAT44(plStack_370._4_4_,0xffffffff);
          plStack_358 = (longlong *)0x0;
          plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
          pplStack_398 = &plStack_370;
          (**(code **)(*plVar4 + 0x220))(plVar4,0,1,&plStack_358);
          lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
          if ((lVar3 != 0) && (*(longlong *)(lVar1 + 0x82a0) != (longlong)**(int **)(lVar3 + 0x10)))
          {
            (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x228))
                      (*(longlong **)(lVar1 + 0x8400),*(undefined8 *)(*(int **)(lVar3 + 0x10) + 6),0
                       ,0);
            *(longlong *)(lVar1 + 0x82a0) = (longlong)**(int **)(lVar3 + 0x10);
          }
          pplStack_398._0_4_ = iVar10;
          FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,plStack_340,0x20);
          uStack_390 = CONCAT31(uStack_390._1_3_,1);
          pplStack_398 = (longlong **)CONCAT44(pplStack_398._4_4_,iVar6);
          FUN_18029d760(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,1,param_1[0x85]);
          plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
          (**(code **)(*plVar4 + 0x148))(plVar4,uVar9,auStack_368[0] + 0x7f >> 7,1);
          lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
          if (((*(longlong *)(lVar1 + 0x8438) != 0) || (*(int *)(lVar1 + 0x8838) != -1)) ||
             (*(int *)(lVar1 + 0x8a38) != 0x20)) {
            ppuStack_360 = (undefined **)0x0;
            (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x218))
                      (*(longlong **)(lVar1 + 0x8400),0,1,&ppuStack_360);
            *(undefined8 *)(lVar1 + 0x8438) = 0;
            *(undefined4 *)(lVar1 + 0x8838) = 0xffffffff;
            *(undefined4 *)(lVar1 + 0x8a38) = 0x20;
            *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
          }
          plStack_370 = (longlong *)CONCAT44(plStack_370._4_4_,0xffffffff);
          plStack_358 = (longlong *)0x0;
          plVar4 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
          pplStack_398 = &plStack_370;
          (**(code **)(*plVar4 + 0x220))(plVar4,0,1,&plStack_358);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uStack_348);
      }
      plVar4 = plStack_310;
      if (plStack_340 != (longlong *)0x0) {
        (**(code **)(*plStack_340 + 0x38))();
        plVar4 = plStack_310;
      }
    }
    else {
      if (plStack_240 != (longlong *)0x0) {
        (**(code **)(*plStack_240 + 0x38))();
      }
      ppuStack_360 = &puStack_270;
      puStack_270 = &UNK_180a3c3e0;
      if (lStack_268 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_268 = 0;
      uStack_258 = uStack_258 & 0xffffffff00000000;
      puStack_270 = &UNK_18098bcb0;
      plVar4 = plStack_278;
    }
  }
  else {
    if (plStack_2a0 != (longlong *)0x0) {
      (**(code **)(*plStack_2a0 + 0x38))();
    }
    ppuStack_360 = &puStack_2d0;
    puStack_2d0 = &UNK_180a3c3e0;
    if (lStack_2c8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_2c8 = 0;
    uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
    puStack_2d0 = &UNK_18098bcb0;
    plVar4 = plStack_2d8;
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  FUN_1802c2ac0(&puStack_168);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_3b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fd5c0(longlong param_1,longlong param_2)
void FUN_1803fd5c0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_228 [32];
  undefined4 uStack_208;
  longlong *plStack_200;
  int iStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined2 uStack_1e3;
  undefined1 uStack_1e1;
  undefined4 uStack_1e0;
  int iStack_1d8;
  int iStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  undefined1 uStack_1b4;
  undefined8 uStack_1b3;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  longlong *plStack_1a0;
  longlong *plStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined4 uStack_178;
  undefined1 auStack_170 [136];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_190 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  uStack_208 = 0;
  FUN_1801f9270();
  uStack_1d0 = 1;
  uStack_1cc = 1;
  uStack_1b3 = 1;
  uStack_1b4 = 0;
  uStack_1a4 = 0;
  uStack_1c8 = *(undefined4 *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x4c) != '\0') {
    iStack_1d8 = (int)(longlong)((double)*(int *)(param_2 + 0x3590) * *(double *)(param_1 + 0x58));
    if (iStack_1d8 < 1) {
      iStack_1d8 = 1;
    }
    iStack_1d4 = (int)(longlong)((double)*(int *)(param_2 + 0x3594) * *(double *)(param_1 + 0x60));
    if (iStack_1d4 < 1) {
      iStack_1d4 = 1;
    }
    uStack_1c4 = 0;
    uStack_1bc = 0;
    uStack_1a8 = *(undefined4 *)(param_2 + 0x1bd4);
    puStack_e8 = &UNK_1809fcc28;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = *(undefined4 *)(param_1 + 0x20);
    puVar2 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_1 + 0x18);
    }
    strcpy_s(auStack_d0,0x80,puVar2);
    puVar1 = (undefined8 *)FUN_1800b1230(_DAT_180c86930,&plStack_1a0,&puStack_e8,&iStack_1d8);
    uStack_208 = 1;
    uVar3 = *puVar1;
    *puVar1 = 0;
    plStack_200 = *(longlong **)(param_1 + 0x428);
    *(undefined8 *)(param_1 + 0x428) = uVar3;
    if (plStack_200 != (longlong *)0x0) {
      (**(code **)(*plStack_200 + 0x38))();
    }
    uStack_208 = 0;
    if (plStack_1a0 != (longlong *)0x0) {
      (**(code **)(*plStack_1a0 + 0x38))();
    }
    uStack_1f0 = 1;
    uStack_1e3 = 0x101;
    iStack_1f8 = iStack_1d8;
    iStack_1f4 = iStack_1d4;
    uStack_1ec = 0x17;
    uStack_1e1 = 0;
    uStack_1e8 = 0x3f800000;
    uStack_1e4 = 0;
    uStack_1e0 = *(undefined4 *)(param_2 + 0x1bd4);
    puStack_188 = &UNK_1809fcc28;
    puStack_180 = auStack_170;
    auStack_170[0] = 0;
    uStack_178 = *(undefined4 *)(param_1 + 0x20);
    puVar2 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_1 + 0x18);
    }
    uVar3 = strcpy_s(auStack_170,0x80,puVar2);
    puVar1 = (undefined8 *)FUN_1800b1d80(uVar3,&plStack_198,&puStack_188,&iStack_1f8);
    uVar3 = *puVar1;
    *puVar1 = 0;
    plStack_200 = *(longlong **)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x448) = uVar3;
    if (plStack_200 != (longlong *)0x0) {
      (**(code **)(*plStack_200 + 0x38))();
    }
    if (plStack_198 != (longlong *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
    puStack_188 = &UNK_18098bcb0;
    puStack_e8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fd890(longlong *param_1,longlong param_2)
void FUN_1803fd890(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_158 [32];
  undefined4 uStack_138;
  undefined4 uStack_128;
  longlong *plStack_120;
  int iStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined2 uStack_f4;
  byte bStack_f2;
  undefined2 uStack_f1;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined2 uStack_ed;
  int iStack_e8;
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  uint uStack_c8;
  undefined1 auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  uStack_128 = 0;
  FUN_1801f9270();
  puStack_d8 = &UNK_1809fcc28;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = *(uint *)(param_1 + 4);
  puVar7 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar7 = (undefined *)param_1[3];
  }
  strcpy_s(auStack_c0,0x80,puVar7);
  uVar5 = (ulonglong)uStack_c8;
  uVar6 = uStack_c8 + 1;
  if (uVar6 < 0x7f) {
    *(undefined2 *)(puStack_d0 + uVar5) = 0x5f;
    uVar5 = (ulonglong)uVar6;
    uStack_c8 = uVar6;
  }
  puVar7 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 0x3528) != (undefined *)0x0) {
    puVar7 = *(undefined **)(param_2 + 0x3528);
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (puVar7[lVar2] != '\0');
  iVar4 = (int)lVar2;
  if ((0 < iVar4) && ((uint)((int)uVar5 + iVar4) < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_d0 + uVar5,puVar7,(longlong)(iVar4 + 1));
  }
  if (*(char *)((longlong)param_1 + 0x4d) == '\0') {
    iVar4 = (int)param_1[0x37];
    if (iVar4 == -1) {
      uStack_110 = 1;
      uStack_10c = 1;
      uStack_f4 = 0x100;
      uStack_f1 = 0;
      uStack_ed = 0;
      uStack_e4 = 0;
      uStack_108 = (undefined4)param_1[0xe];
      bStack_f2 = *(byte *)(param_1 + 10);
      uVar6 = (uint)bStack_f2;
      uStack_ee = bStack_f2 == 0;
      uStack_ef = 1;
      uStack_104 = 0;
      uStack_fc = 0;
      iStack_e8 = iVar4;
      if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
        iStack_118 = (int)(longlong)(double)param_1[0xb];
        iStack_114 = (int)(longlong)(double)param_1[0xc];
        if (param_1[0x85] != 0) goto LAB_1803fdca8;
        (**(code **)(*param_1 + 8))(param_1,&iStack_118,param_2);
        uVar3 = FUN_1800b1230(_DAT_180c86930,&plStack_120,&puStack_d8,&iStack_118);
        uStack_128 = 2;
        FUN_180060b80(param_1 + 0x85,uVar3);
        uStack_128 = 0;
      }
      else {
        auVar8._0_4_ = (float)(double)param_1[0xb] * (float)*(int *)(param_2 + 0x3590);
        iVar4 = (int)auVar8._0_4_;
        if (auVar8._0_4_ <= 0.0) {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar8._0_4_)) {
            auVar9._4_4_ = auVar8._0_4_;
            auVar9._0_4_ = auVar8._0_4_;
            auVar9._8_8_ = 0;
            uVar6 = movmskps((uint)bStack_f2,auVar9);
            uVar6 = uVar6 & 1 ^ 1;
            auVar8._0_4_ = (float)(int)(iVar4 + uVar6);
          }
          auVar8._0_4_ = auVar8._0_4_ - 1e-08;
        }
        else {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar8._0_4_)) {
            auVar8._4_4_ = auVar8._0_4_;
            auVar8._8_8_ = 0;
            uVar6 = movmskps((uint)bStack_f2,auVar8);
            uVar6 = uVar6 & 1 ^ 1;
            auVar8._0_4_ = (float)(int)(iVar4 + uVar6);
          }
          auVar8._0_4_ = auVar8._0_4_ + 1e-08;
        }
        iStack_118 = (int)auVar8._0_4_;
        auVar10._0_4_ = (float)(double)param_1[0xc] * (float)*(int *)(param_2 + 0x3594);
        iVar4 = (int)auVar10._0_4_;
        if (auVar10._0_4_ <= 0.0) {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar10._0_4_)) {
            auVar11._4_4_ = auVar10._0_4_;
            auVar11._0_4_ = auVar10._0_4_;
            auVar11._8_8_ = 0;
            uVar6 = movmskps(uVar6,auVar11);
            auVar10._0_4_ = (float)(int)(iVar4 + (uVar6 & 1 ^ 1));
          }
          auVar10._0_4_ = auVar10._0_4_ - 1e-08;
        }
        else {
          if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar10._0_4_)) {
            auVar10._4_4_ = auVar10._0_4_;
            auVar10._8_8_ = 0;
            uVar6 = movmskps(uVar6,auVar10);
            auVar10._0_4_ = (float)(int)(iVar4 + (uVar6 & 1 ^ 1));
          }
          auVar10._0_4_ = auVar10._0_4_ + 1e-08;
        }
        iStack_114 = (int)auVar10._0_4_;
        if (iStack_118 < 1) {
          iStack_118 = 1;
        }
        if (iStack_114 < 1) {
          iStack_114 = 1;
        }
        (**(code **)(*param_1 + 8))(param_1,&iStack_118,param_2);
        uVar3 = FUN_1800b1230(_DAT_180c86930,&plStack_120,&puStack_d8,&iStack_118);
        uStack_128 = 1;
        FUN_180060b80(param_1 + 0x85,uVar3);
        uStack_128 = 0;
      }
    }
    else {
      if (iVar4 == -3) {
        if (((int)param_1[0x3b] == 9) && (iVar4 = strcmp(param_1[0x3a],&UNK_180a0e648), iVar4 == 0))
        {
          uVar3 = FUN_180244ff0(param_2);
          FUN_180056f10(param_1 + 0x85,uVar3);
        }
        else {
          puVar7 = &DAT_18098bc73;
          if ((undefined *)param_1[3] != (undefined *)0x0) {
            puVar7 = (undefined *)param_1[3];
          }
          FUN_180626f80(&UNK_180a0ec50,puVar7);
        }
        goto LAB_1803fdca8;
      }
      if (iVar4 != -2) goto LAB_1803fdca8;
      uStack_138 = *(undefined4 *)(param_2 + 0x1bd4);
      uVar3 = FUN_1801f9aa0(uVar5,&plStack_120,param_1,param_1 + 0x39);
      FUN_180060b80(param_1 + 0x85,uVar3);
    }
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x9690);
    if (plVar1 != (longlong *)0x0) {
      plStack_120 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStack_120 = (longlong *)param_1[0x85];
    param_1[0x85] = (longlong)plVar1;
  }
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
LAB_1803fdca8:
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




