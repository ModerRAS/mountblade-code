#include "TaleWorlds.Native.Split.h"

// 99_part_07_part006.c - 79 个函数

// 函数: void FUN_1803ffb40(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4,byte param_5
void FUN_1803ffb40(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4,byte param_5
                  )

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_508 [32];
  undefined4 uStack_4e8;
  undefined4 uStack_4e0;
  char cStack_4d8;
  undefined1 auStack_4d7 [7];
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  longlong lStack_4b8;
  longlong *plStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  longlong *plStack_498;
  undefined *puStack_490;
  longlong lStack_488;
  undefined4 uStack_480;
  ulonglong uStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  longlong *plStack_460;
  longlong *plStack_458;
  uint uStack_450;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined8 uStack_448;
  longlong lStack_440;
  longlong *plStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined1 auStack_418 [32];
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  longlong *plStack_3e8;
  undefined *puStack_3d8;
  undefined1 *puStack_3d0;
  undefined4 uStack_3c8;
  undefined1 auStack_3c0 [72];
  undefined *puStack_378;
  undefined1 *puStack_370;
  undefined4 uStack_368;
  undefined1 auStack_360 [72];
  undefined *puStack_318;
  undefined1 *puStack_310;
  undefined4 uStack_308;
  undefined1 auStack_300 [72];
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [72];
  undefined *puStack_258;
  undefined1 *puStack_250;
  undefined4 uStack_248;
  undefined1 auStack_240 [72];
  undefined *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined4 uStack_1e8;
  undefined1 auStack_1e0 [72];
  undefined *puStack_198;
  undefined1 *puStack_190;
  undefined4 uStack_188;
  undefined1 auStack_180 [72];
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined4 uStack_128;
  undefined1 auStack_120 [72];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [72];
  ulonglong uStack_78;
  
  uStack_448 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_508;
  puVar9 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar9 = (undefined *)param_1[3];
  }
  ppuStack_4d0 = &puStack_3d8;
  plVar4 = (longlong *)0x0;
  puStack_3d8 = &UNK_1809fcc58;
  puStack_3d0 = auStack_3c0;
  uStack_3c8 = 0;
  auStack_3c0[0] = 0;
  if (puVar9 != (undefined *)0x0) {
    FUN_180049bf0(&puStack_3d8);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_3d8);
  }
  puVar9 = &DAT_18098bc73;
  if ((undefined *)param_1[3] != (undefined *)0x0) {
    puVar9 = (undefined *)param_1[3];
  }
  FUN_1802c22a0(auStack_4d7,puVar9);
  if ((undefined *)*param_1 != &UNK_180a26ee8) {
    (**(code **)((undefined *)*param_1 + 0x30))(param_1);
  }
  if (*(int *)(param_1 + 9) < 1) {
    uVar6 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    lVar3 = param_1[0x85];
    iVar15 = *(int *)(param_3 + 0x3578);
    plVar12 = plVar4;
    if (*(longlong *)(lVar3 + 0x1d8) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar12 = (longlong *)
                ((longlong)(int)((uint)*(byte *)(lVar3 + 0x335) * iVar15) * 0x10 +
                *(longlong *)(lVar3 + 0x1d8));
    }
    FUN_18029ad30(uVar6,0,plVar12);
    plVar12 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    lVar3 = FUN_180245280(param_3);
    iVar15 = *(int *)(param_3 + 0x357c);
    plVar11 = plVar4;
    if (*(longlong *)(lVar3 + 0x1e0) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar11 = (longlong *)((longlong)(iVar15 * 2) * 0x10 + *(longlong *)(lVar3 + 0x1e0));
      if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
        (**(code **)(*plVar12 + 0x70))(plVar12,*plVar11,2);
      }
    }
    plVar12[0x107e] = (longlong)plVar11;
    FUN_18029de40(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1);
    if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
      dVar16 = (double)param_1[0xb];
      dVar17 = (double)param_1[0xc];
    }
    else {
      dVar16 = (double)(int)*(float *)(param_3 + 0x11c20) * (double)param_1[0xb];
      dVar17 = (double)(int)*(float *)(param_3 + 0x11c24) * (double)param_1[0xc];
    }
    uStack_4e0 = 0;
    uStack_4e8 = 0;
    FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,0,0x3f800000);
    lVar7 = _DAT_180c86938;
    *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1df0) =
         *(undefined8 *)(param_3 + 0x35a8);
    *(undefined8 *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1df8) = *(undefined8 *)(param_3 + 0x35b0);
    *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1be0) = 0.5 / (float)dVar16;
    *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1be4) = 0.5 / (float)dVar17;
    plVar12 = param_1 + 0x27;
    lVar3 = *plVar12;
    if (lVar3 == 0) {
      *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
      *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
    }
    else {
      *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar3 + 0x32c);
      *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar3 + 0x32e);
    }
    FUN_18029fc10(*(longlong *)(lVar7 + 0x1cd8),*(undefined8 *)(lVar7 + 0x1c88),
                  *(longlong *)(lVar7 + 0x1cd8) + 0x1be0,0x230);
    uVar14 = param_4 | 0x400;
    if (*(int *)(param_3 + 0x9a34) != 2) {
      uVar14 = param_4;
    }
    uVar8 = uVar14 | 0x200;
    if (*(int *)(param_3 + 0x9a34) != 0) {
      uVar8 = uVar14;
    }
    if (((((*(byte *)(param_3 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_3 + 0x1bd9) & 2) == 0))
        || (*(int *)(_DAT_180c8a9c8 + 0xa10) == 0)) || (*(char *)(param_3 + 0x130) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = param_1[6];
    uVar14 = uVar8 | 0x200000;
    if (!bVar2) {
      uVar14 = uVar8;
    }
    uVar14 = uVar14 & *(uint *)(lVar3 + 0x1610);
    if ((param_5 & 1) != 0) {
      puStack_378 = &UNK_1809fcc58;
      puStack_370 = auStack_360;
      auStack_360[0] = 0;
      uStack_368 = 7;
      strcpy_s(auStack_360,0x40,&UNK_180a0d780);
      plVar4 = (longlong *)FUN_180240430(lVar3,&puStack_378,0);
      puStack_378 = &UNK_18098bcb0;
      lVar3 = param_1[6];
    }
    if ((param_5 & 8) != 0) {
      puStack_318 = &UNK_1809fcc58;
      puStack_310 = auStack_300;
      auStack_300[0] = 0;
      uStack_308 = 7;
      strcpy_s(auStack_300,0x40,&UNK_180a0d740);
      uVar5 = FUN_180240430(lVar3,&puStack_318,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_318 = &UNK_18098bcb0;
      lVar3 = param_1[6];
    }
    if ((param_5 & 4) != 0) {
      puStack_2b8 = &UNK_1809fcc58;
      puStack_2b0 = auStack_2a0;
      auStack_2a0[0] = 0;
      uStack_2a8 = 0xe;
      strcpy_s(auStack_2a0,0x40,&UNK_180a0d730);
      uVar5 = FUN_180240430(lVar3,&puStack_2b8,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_2b8 = &UNK_18098bcb0;
      lVar3 = param_1[6];
    }
    if ((param_5 & 2) != 0) {
      puStack_258 = &UNK_1809fcc58;
      puStack_250 = auStack_240;
      auStack_240[0] = 0;
      uStack_248 = 0xd;
      strcpy_s(auStack_240,0x40,&UNK_180a0d710);
      uVar5 = FUN_180240430(lVar3,&puStack_258,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_258 = &UNK_18098bcb0;
    }
    if ((*(longlong *)(param_3 + 0x12498) != 0) && (*(int *)(param_3 + 0x2480) != 0)) {
      uVar6 = param_1[6];
      puStack_1f8 = &UNK_1809fcc58;
      puStack_1f0 = auStack_1e0;
      auStack_1e0[0] = 0;
      uStack_1e8 = 0xb;
      strcpy_s(auStack_1e0,0x40,&UNK_180a0d6d8);
      uVar5 = FUN_180240430(uVar6,&puStack_1f8,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_1f8 = &UNK_18098bcb0;
    }
    if (((*(char *)(param_3 + 0x11cf4) != '\0') && (*(longlong *)(param_3 + 0x11d00) != 0)) &&
       ((*(longlong *)(param_3 + 0x11ec8) != 0 ||
        (*(longlong *)(*(longlong *)(param_3 + 0x11d00) + 0x150) != 0)))) {
      uVar6 = param_1[6];
      puStack_198 = &UNK_1809fcc58;
      puStack_190 = auStack_180;
      auStack_180[0] = 0;
      uStack_188 = 0x10;
      strcpy_s(auStack_180,0x40,&UNK_180a0d6f8);
      uVar5 = FUN_180240430(uVar6,&puStack_198,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_198 = &UNK_18098bcb0;
    }
    if (*(char *)(param_3 + 0x12c09) != '\0') {
      uVar6 = param_1[6];
      puStack_138 = &UNK_1809fcc58;
      puStack_130 = auStack_120;
      auStack_120[0] = 0;
      uStack_128 = 0xd;
      strcpy_s(auStack_120,0x40,&UNK_180a0d6c8);
      uVar5 = FUN_180240430(uVar6,&puStack_138,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_138 = &UNK_18098bcb0;
    }
    if ((char)param_5 < '\0') {
      uVar6 = param_1[6];
      puStack_d8 = &UNK_1809fcc58;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0x11;
      strcpy_s(auStack_c0,0x40,&UNK_180a0d788);
      uVar5 = FUN_180240430(uVar6,&puStack_d8,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_d8 = &UNK_18098bcb0;
    }
    iVar15 = 0;
    uStack_44c = 4;
    lStack_4b8 = param_1[6];
    plStack_498 = (longlong *)0x0;
    uVar13 = 0;
    puStack_490 = &UNK_180a3c3e0;
    uStack_478 = 0;
    lStack_488 = 0;
    uStack_480 = 0;
    plStack_460 = (longlong *)0x0;
    uStack_4a8 = CONCAT26(uStack_44a,CONCAT24(4,uVar14));
    uStack_4a0 = 2;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_468 = 0;
    uStack_464 = 0;
    uVar6 = *(undefined8 *)(param_1[6] + 0x15b8);
    ppuStack_4c8 = (undefined **)&lStack_440;
    uStack_428 = 2;
    uStack_420 = 0;
    plStack_4b0 = plVar4;
    plStack_458 = plVar4;
    uStack_450 = uVar14;
    lStack_440 = lStack_4b8;
    plStack_438 = plVar4;
    uStack_430 = uStack_4a8;
    FUN_180627ae0(auStack_418,&puStack_490);
    uStack_3f8 = CONCAT44(uStack_46c,uStack_470);
    uStack_3f0 = CONCAT44(uStack_464,uStack_468);
    plStack_3e8 = plStack_460;
    if (plStack_460 != (longlong *)0x0) {
      (**(code **)(*plStack_460 + 0x28))();
    }
    uVar6 = FUN_180299eb0(uVar6,param_3,&lStack_440,&cStack_4d8);
    if (cStack_4d8 == '\0') {
      param_1[0x1f] = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x134) = 1;
      *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(param_1[0x85] + 0x324);
      lVar3 = FUN_180245280(param_3);
      if (lVar3 != 0) {
        lVar3 = FUN_180245280(param_3);
        uVar13 = *(undefined4 *)(lVar3 + 0x324);
      }
      *(undefined4 *)(param_1 + 0x22) = uVar13;
      iVar10 = iVar15;
      do {
        if (*plVar12 != 0) {
          uStack_4e8 = 0xffffffff;
          FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),iVar10,*plVar12,0x10);
        }
        iVar10 = iVar10 + 1;
        plVar12 = plVar12 + 1;
      } while (iVar10 < 0x10);
      *(undefined2 *)(param_1 + 0x20) = 0x101;
      *(undefined1 *)((longlong)param_1 + 0x103) = 0;
      *(undefined2 *)((longlong)param_1 + 0x105) = 0;
      *(undefined1 *)((longlong)param_1 + 0x104) = *(undefined1 *)(param_1 + 0x8a);
      *(undefined1 *)((longlong)param_1 + 0x107) = *(undefined1 *)((longlong)param_1 + 0x454);
      FUN_18029d000(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4);
      FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),param_1 + 0x1f);
      lVar3 = _DAT_180c86938;
      puVar9 = &DAT_18098bc73;
      if ((undefined *)param_1[3] != (undefined *)0x0) {
        puVar9 = (undefined *)param_1[3];
      }
      if (puVar9 != (undefined *)0x0) {
        lVar7 = strnlen(puVar9,0x3f);
        strncpy(lVar3 + 0x1ce0,puVar9,lVar7);
        *(undefined1 *)(lVar7 + 0x1ce0 + lVar3) = 0;
      }
      FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
      if ((undefined *)*param_1 != &UNK_180a26ee8) {
        (**(code **)((undefined *)*param_1 + 0x28))(param_1);
      }
      lVar3 = 0x8a38;
      lVar7 = 0x8438;
      do {
        if ((*(longlong *)((longlong)param_1 + lVar7 + -0x8300) != 0) &&
           (((lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8), *(longlong *)(lVar7 + lVar1) != 0 ||
             (*(int *)(lVar1 + -0x200 + lVar3) != -1)) || (*(int *)(lVar3 + lVar1) != 0x10)))) {
          ppuStack_4d0 = (undefined **)0x0;
          (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                    (*(longlong **)(lVar1 + 0x8400),iVar15,1,&ppuStack_4d0);
          *(undefined8 *)(lVar7 + lVar1) = 0;
          *(undefined4 *)(lVar1 + -0x200 + lVar3) = 0xffffffff;
          *(undefined4 *)(lVar3 + lVar1) = 0x10;
          *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
        }
        iVar15 = iVar15 + 1;
        lVar7 = lVar7 + 8;
        lVar3 = lVar3 + 4;
      } while (iVar15 < 0x10);
    }
    if (plStack_460 != (longlong *)0x0) {
      (**(code **)(*plStack_460 + 0x38))();
    }
    ppuStack_4c8 = &puStack_490;
    puStack_490 = &UNK_180a3c3e0;
    if (lStack_488 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_488 = 0;
    uStack_478 = uStack_478 & 0xffffffff00000000;
    puStack_490 = &UNK_18098bcb0;
    if (plStack_498 != (longlong *)0x0) {
      (**(code **)(*plStack_498 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  FUN_1802c2ac0(&puStack_3d8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_508);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: undefined FUN_1804c60b0;
undefined FUN_1804c60b0;



// 函数: undefined FUN_1804a8e90;
undefined FUN_1804a8e90;



// 函数: undefined FUN_1804a9a20;
undefined FUN_1804a9a20;
undefined UNK_180a2cb10;
undefined DAT_1809ff500;
undefined UNK_180a2cbe8;
undefined DAT_180a2cc08;
undefined UNK_180a2d380;
undefined DAT_180c96110;
undefined DAT_180c96380;
undefined4 UNK_180c96374;
undefined4 UNK_180c96378;
undefined DAT_180c91044;
undefined4 UNK_180c9637c;
undefined DAT_180c96384;
undefined DAT_180c91040;
undefined DAT_180c964c0;
undefined DAT_180c964b8;
undefined DAT_180c964bc;
undefined DAT_180c96370;
undefined DAT_180c96108;
undefined DAT_180c96148;
undefined UNK_1804e3000;
undefined UNK_1804e3010;
undefined UNK_1804e3030;
undefined UNK_1804e3040;
undefined DAT_180c91d30;
undefined DAT_180c91d28;
undefined8 UNK_180c91d38;
undefined UNK_180a2cc80;
undefined UNK_180a2cc98;
undefined UNK_180a2ccb0;
undefined UNK_180a2ce78;
undefined UNK_180a2cea0;
undefined UNK_180a2cec0;
undefined UNK_180a2d080;
undefined UNK_180a2d0a0;
undefined UNK_180a2d268;
undefined DAT_180a092b8;
undefined DAT_180a190b0;
undefined DAT_180d48f1a;
undefined UNK_180a2d280;
undefined UNK_180a2d298;
undefined UNK_180a2d330;
undefined UNK_180a2d348;
undefined DAT_180c917d0;
undefined DAT_180c918d0;
undefined UNK_1804a5e50;
undefined UNK_1804a5f30;



// 函数: undefined FUN_1804a5e90;
undefined FUN_1804a5e90;
undefined UNK_180a2d358;
undefined DAT_180c95eb8;
undefined DAT_180c95ea8;
undefined DAT_180a2d36c;
undefined DAT_180c95ea0;
undefined UNK_180a2d318;
undefined DAT_180c925c8;
undefined DAT_180c92cd8;
undefined DAT_180c92ce0;
undefined DAT_180c925a0;
ulonglong *UNK_180c92bb8;
ulonglong *UNK_180c92bf8;
longlong UNK_180c95b78;
ulonglong UNK_180c95b80;
undefined UNK_1804a6c40;
undefined UNK_1804a6c60;
undefined UNK_180a2fb48;
undefined DAT_180c95be0;



// 函数: undefined FUN_1804a7600;
undefined FUN_1804a7600;
undefined UNK_180a2d3a0;
undefined UNK_1809f8860;
undefined UNK_1809f88b0;
undefined UNK_1809f8900;
undefined UNK_1809f8950;
undefined UNK_1809f89a0;
undefined DAT_180c95f30;
undefined DAT_180a2dc90;
undefined DAT_180a2dca0;
undefined DAT_180a2dcb0;
undefined DAT_180d49e00;
undefined DAT_180d49e08;
undefined DAT_180d49e10;
undefined DAT_180d49e18;
undefined DAT_180d49e20;
undefined DAT_180d49e28;
undefined DAT_180d49e30;
undefined DAT_180d48f20;
undefined UNK_180a2de30;
undefined UNK_180a2de50;



// 函数: undefined FUN_1804ad200;
undefined FUN_1804ad200;
undefined UNK_180a2e0ec;
undefined DAT_180a2e0f8;
undefined UNK_180a2e160;
undefined UNK_180a2e168;
undefined UNK_180a2779c;
undefined UNK_180a2e150;
undefined UNK_180a2e158;
undefined UNK_180a2e178;
undefined UNK_180a2e1b8;
undefined UNK_180a2e1c8;
undefined UNK_180a2e1d8;
undefined UNK_180a2e1e8;
undefined UNK_180a2e1f8;
undefined UNK_180a2e220;
undefined UNK_180a2e290;
undefined UNK_180a2e2a8;
undefined UNK_180a063a8;
undefined UNK_180a2e248;
undefined UNK_180a2e260;
undefined UNK_180a2e270;
undefined UNK_180a2e280;
undefined UNK_180a2e2bc;
undefined UNK_180a2e2c8;
undefined UNK_180a2e2d8;
undefined UNK_180a2e2e8;
undefined UNK_180a2e2f8;
undefined UNK_180a2e310;
undefined UNK_180a2e328;
undefined UNK_180a2e348;
undefined UNK_180a2e388;
undefined UNK_180a2e3f8;
undefined UNK_180a2e418;
undefined UNK_180a2e438;
undefined UNK_180a3cc50;
undefined UNK_180a2e3b8;
undefined UNK_180a2e3d0;
undefined UNK_180a2e3e0;
undefined UNK_180a2e3e8;
undefined UNK_180a2e428;
undefined UNK_180a2e4c0;
undefined UNK_180a2e4d0;
undefined UNK_180a2e570;
undefined UNK_180a2e460;
undefined UNK_180a2e450;
undefined UNK_180a2e4a0;
undefined UNK_180a2e4b0;
undefined UNK_180a2e628;
undefined UNK_180a2e668;
undefined UNK_180a2e678;
undefined UNK_180a2e688;
undefined UNK_180a2e698;



// 函数: undefined FUN_1804bfc50;
undefined FUN_1804bfc50;



// 函数: undefined FUN_1800ae3f0;
undefined FUN_1800ae3f0;
undefined UNK_1804bfc30;
undefined UNK_180a2e5d0;
undefined UNK_180a2e638;
undefined UNK_180a2e650;
undefined UNK_180a2e6f8;



// 函数: undefined FUN_1804c97c0;
undefined FUN_1804c97c0;



// 函数: undefined FUN_1804c98d0;
undefined FUN_1804c98d0;
undefined UNK_180a2fa20;
undefined UNK_180a2faa8;
undefined UNK_180a2fac0;
undefined UNK_180a2fb38;
undefined UNK_180a2fb90;
undefined DAT_180c82848;
char DAT_180c82845;
undefined UNK_180a2fb60;
undefined UNK_180a2fb78;
undefined UNK_180a2fba8;
undefined UNK_180a2fbc8;
undefined UNK_180a2fc20;



// 函数: undefined FUN_1804ce100;
undefined FUN_1804ce100;
undefined UNK_1804ce1a0;



// 函数: undefined FUN_1804ce920;
undefined FUN_1804ce920;
undefined UNK_1804ce9d0;
undefined UNK_1804df5f0;
undefined UNK_1804df630;



// 函数: undefined FUN_1804df470;
undefined FUN_1804df470;



// 函数: undefined FUN_1804df640;
undefined FUN_1804df640;
undefined UNK_180a13894;
undefined UNK_180a2fbe8;
undefined UNK_180a2fc00;
undefined UNK_1804df030;
undefined UNK_1804df040;



// 函数: undefined FUN_1804df080;
undefined FUN_1804df080;
undefined UNK_1804df160;
undefined UNK_1804df2f0;



// 函数: undefined FUN_1804df1a0;
undefined FUN_1804df1a0;
undefined UNK_1804df330;
undefined UNK_1804df340;



// 函数: undefined FUN_1804dee90;
undefined FUN_1804dee90;
undefined UNK_1804deff0;
undefined UNK_1804df9e0;
undefined UNK_1804df9f0;
undefined UNK_1804dfa30;
undefined UNK_1804dfa40;
undefined UNK_1804dfa80;
undefined UNK_1804dfa90;
undefined UNK_18054b090;



// 函数: undefined FUN_1804dc080;
undefined FUN_1804dc080;
undefined UNK_180a2fc90;
undefined UNK_1804df380;
undefined UNK_1804df720;
undefined UNK_1804df730;



// 函数: undefined FUN_1804df390;
undefined FUN_1804df390;
undefined UNK_1804deb60;
undefined UNK_1804dec20;
undefined UNK_1804decc0;
undefined UNK_1804ded60;



// 函数: undefined FUN_1804dea90;
undefined FUN_1804dea90;



// 函数: undefined FUN_1804deba0;
undefined FUN_1804deba0;



// 函数: undefined FUN_1804dec60;
undefined FUN_1804dec60;



// 函数: undefined FUN_1804ded00;
undefined FUN_1804ded00;
undefined DAT_180c96018;
undefined UNK_1804deda0;
undefined UNK_1804dedb0;
undefined UNK_1804df770;
undefined UNK_1804df780;
undefined UNK_1804dedf0;
undefined UNK_1804dee00;
undefined UNK_1804dee40;
undefined UNK_1804dee50;
undefined UNK_180a2fd10;
undefined UNK_180a2fd40;
undefined UNK_180a30060;
undefined UNK_180a301a0;
undefined UNK_180a21db0;
undefined UNK_180a308c0;
undefined UNK_180a308e0;
undefined UNK_180a30990;
undefined UNK_180a36f00;



// 函数: undefined FUN_1804aa300;
undefined FUN_1804aa300;



// 函数: undefined FUN_1805febd0;
undefined FUN_1805febd0;



// 函数: undefined FUN_1805fed10;
undefined FUN_1805fed10;



// 函数: undefined FUN_1805fede0;
undefined FUN_1805fede0;



// 函数: undefined FUN_1805feec0;
undefined FUN_1805feec0;



// 函数: undefined FUN_1805fef00;
undefined FUN_1805fef00;



// 函数: undefined FUN_1805fef40;
undefined FUN_1805fef40;



// 函数: undefined FUN_1805ff120;
undefined FUN_1805ff120;



// 函数: undefined FUN_1805ff2e0;
undefined FUN_1805ff2e0;



// 函数: undefined FUN_1805ff380;
undefined FUN_1805ff380;



// 函数: undefined FUN_1805ff540;
undefined FUN_1805ff540;



// 函数: undefined FUN_1805ff5b0;
undefined FUN_1805ff5b0;



// 函数: undefined FUN_1805ff670;
undefined FUN_1805ff670;



// 函数: undefined FUN_1805ff820;
undefined FUN_1805ff820;



// 函数: undefined FUN_1805ff8c0;
undefined FUN_1805ff8c0;



// 函数: undefined FUN_1805ff9e0;
undefined FUN_1805ff9e0;



// 函数: undefined FUN_1805ffac0;
undefined FUN_1805ffac0;



// 函数: undefined FUN_1805ffc20;
undefined FUN_1805ffc20;



// 函数: undefined FUN_1805ffd60;
undefined FUN_1805ffd60;



// 函数: undefined FUN_1805ffe20;
undefined FUN_1805ffe20;



// 函数: undefined FUN_1805ffe60;
undefined FUN_1805ffe60;



// 函数: undefined FUN_1805ffed0;
undefined FUN_1805ffed0;



// 函数: undefined FUN_1805fffa0;
undefined FUN_1805fffa0;



// 函数: undefined FUN_1806e71c0;
undefined FUN_1806e71c0;
undefined UNK_180a36e08;
undefined UNK_180a36e78;
undefined UNK_180a36e58;
undefined UNK_180a36fb0;
undefined UNK_180588340;



// 函数: undefined FUN_1805f3060;
undefined FUN_1805f3060;
undefined UNK_180a37b40;
undefined UNK_180a37c10;
undefined UNK_180a37cd8;



// 函数: undefined FUN_1805f32b0;
undefined FUN_1805f32b0;



// 函数: undefined FUN_1804aa030;
undefined FUN_1804aa030;
undefined UNK_180a37e00;
undefined UNK_180a37d98;
undefined UNK_180a37f38;
undefined UNK_180a37fd8;
undefined UNK_1809fad38;
undefined UNK_1809fad48;
undefined UNK_180a38060;
undefined UNK_180a380b0;
undefined UNK_180a38100;
undefined UNK_180a38150;
undefined UNK_180a381a0;
undefined UNK_180a38310;
undefined UNK_180a381e8;
undefined UNK_180a38260;
undefined UNK_180a38298;
undefined UNK_180a383d0;
undefined UNK_180a38408;
undefined UNK_180a38440;



// 函数: undefined FUN_1805f8910;
undefined FUN_1805f8910;
undefined UNK_1805f8810;



// 函数: undefined FUN_1805f8820;
undefined FUN_1805f8820;
undefined UNK_1809fadd8;
undefined UNK_1809fade8;
undefined UNK_1809fadf8;
undefined UNK_1809fae08;
undefined UNK_1809fae78;
undefined UNK_1809fae88;
undefined UNK_1809fae98;
undefined UNK_1809fad98;
undefined UNK_1809fada8;
undefined UNK_1809fadb8;
undefined UNK_1809fadc8;
undefined UNK_1809fae18;
undefined UNK_1809fae28;
undefined UNK_1809fae38;
undefined UNK_1809fae48;
undefined UNK_1809faec8;
undefined UNK_1809faef8;
undefined UNK_1809faf08;
undefined UNK_1809faed8;
undefined UNK_1809faee8;



// 函数: undefined FUN_1805faf50;
undefined FUN_1805faf50;



// 函数: undefined FUN_1805fd350;
undefined FUN_1805fd350;
undefined UNK_180a38478;
undefined UNK_180a38488;
undefined UNK_180a38498;
undefined UNK_180a384a8;
undefined UNK_1805feb50;
undefined UNK_180a38588;
undefined UNK_180a30d60;
undefined UNK_180a385b0;
undefined UNK_180a38608;
undefined UNK_180a38638;
undefined UNK_180a3be00;
undefined UNK_180a38690;
undefined UNK_180a386b0;
undefined UNK_180a386e8;
undefined UNK_180a38700;
undefined UNK_180607c40;



// 函数: undefined FUN_1805f6f30;
undefined FUN_1805f6f30;



// 函数: undefined FUN_1805f6f50;
undefined FUN_1805f6f50;



// 函数: undefined FUN_1805f7180;
undefined FUN_1805f7180;



// 函数: undefined FUN_1805f7330;
undefined FUN_1805f7330;
undefined DAT_180c95bd0;
undefined UNK_180a3b7f0;
undefined UNK_180a3b9a8;
undefined UNK_180a3b9c8;
undefined UNK_180a3b9e0;
undefined UNK_180a3b9e8;
undefined UNK_1809fb028;
undefined UNK_180a3bbe0;
undefined UNK_180a3bc30;
undefined UNK_180a3bc90;
undefined UNK_180a3bc58;
undefined UNK_180a3bcc8;
undefined UNK_180a3bd00;
undefined UNK_1809fb150;
undefined UNK_1809f8ddc;
undefined UNK_180a3bdb0;
undefined UNK_180a3be30;
undefined UNK_180a3bfe0;
undefined UNK_180a3c018;



// 函数: undefined FUN_1806f1000;
undefined FUN_1806f1000;
undefined UNK_18094e418;
undefined UNK_18094e420;
undefined UNK_18094e428;
undefined UNK_18094e440;
undefined UNK_18094e450;
undefined UNK_18094e460;
undefined UNK_18094e470;
undefined UNK_18094bf80;
undefined DAT_180c0c324;
undefined DAT_180c0c320;
undefined DAT_180c0c330;
undefined DAT_180c0c328;
undefined DAT_180c0c32c;
undefined DAT_180be0f00;
undefined UNK_18094e340;
undefined UNK_18094e3a0;
undefined UNK_18094bf98;
undefined UNK_18094e498;
undefined UNK_18094e4a0;
undefined UNK_18094bfa8;
undefined UNK_18094bfb8;
undefined UNK_18094bfc8;
undefined UNK_18094bfe0;
undefined UNK_18094bff0;
undefined UNK_1806f4890;
undefined UNK_1806f48a0;
undefined UNK_1806f48b0;
undefined UNK_1806f48c0;
undefined UNK_1806f48d0;
undefined UNK_1806f48e0;
undefined UNK_1806f48f0;
undefined UNK_1806f4930;
undefined UNK_1806f4970;
undefined UNK_1806f49b0;
undefined UNK_1806f49f0;
undefined UNK_1806f4a30;
undefined UNK_1806f4a70;
undefined UNK_1806f4ac0;
undefined UNK_1806f4ad0;
undefined UNK_1806f4ae0;
undefined UNK_1806f4af0;
undefined UNK_1806f4b00;
undefined UNK_18094e5a4;
undefined UNK_18094e5b0;
undefined UNK_18094e5bc;
undefined UNK_18094e5c8;
undefined UNK_18094e5d8;
undefined UNK_18094e5e8;
undefined UNK_18094e5f8;
undefined UNK_18094e608;



// 函数: undefined FUN_1806f4900;
undefined FUN_1806f4900;
undefined UNK_18094e618;



// 函数: undefined FUN_1806f4940;
undefined FUN_1806f4940;
undefined UNK_18094e628;



// 函数: undefined FUN_1806f4980;
undefined FUN_1806f4980;
undefined UNK_18094e63c;



// 函数: undefined FUN_1806f49c0;
undefined FUN_1806f49c0;
undefined UNK_18094e648;



// 函数: undefined FUN_1806f4a00;
undefined FUN_1806f4a00;
undefined UNK_18094e658;



// 函数: undefined FUN_1806f4a40;
undefined FUN_1806f4a40;
undefined UNK_18094e678;



// 函数: undefined FUN_1806f4a90;
undefined FUN_1806f4a90;
undefined UNK_18094e698;
undefined UNK_1806f4b10;
undefined UNK_1806f4b20;



// 函数: undefined FUN_1806f4bc0;
undefined FUN_1806f4bc0;
undefined UNK_1806f4b30;



// 函数: undefined FUN_1806f4bf0;
undefined FUN_1806f4bf0;
undefined UNK_1806f4b40;
undefined UNK_1806f4b50;
undefined UNK_1806f4b60;
undefined UNK_1806f4b70;
undefined UNK_1806f4b80;
undefined UNK_1806f4b90;
undefined UNK_1806f4ba0;
undefined UNK_1806f4bb0;
undefined UNK_1806f4c20;
undefined UNK_18094e6b0;
undefined UNK_18094e6c0;
undefined UNK_18094e6d0;
undefined UNK_18094e6e0;
undefined UNK_18094e6f0;
undefined UNK_18094e700;
undefined UNK_18094e708;
undefined UNK_1806f4c30;
undefined UNK_1806f4c70;
undefined UNK_1806f4cb0;



// 函数: undefined FUN_1806f4c40;
undefined FUN_1806f4c40;
undefined UNK_1806f4cc0;



// 函数: undefined FUN_1806f4c80;
undefined FUN_1806f4c80;
undefined UNK_1806f4cd0;
undefined UNK_1806f4ce0;
undefined UNK_1806f4cf0;
undefined UNK_1806f4d00;
undefined UNK_1806f4d10;
undefined UNK_18094e720;
undefined UNK_18094e728;
undefined UNK_18094e738;
undefined UNK_18094e748;
undefined UNK_18094e758;
undefined UNK_1806f4d20;
undefined UNK_1806f4d30;
undefined UNK_1806f4d40;
undefined UNK_1806f4d50;
undefined UNK_1806f4d60;
undefined UNK_1806f4d70;
undefined UNK_1806f4d80;
undefined UNK_1806f4d90;
undefined UNK_1806f4e30;
undefined UNK_1806f4e40;



// 函数: undefined FUN_1806f4da0;
undefined FUN_1806f4da0;
undefined UNK_1806f4e50;



// 函数: undefined FUN_1806f4dd0;
undefined FUN_1806f4dd0;
undefined UNK_1806f4e60;



// 函数: undefined FUN_1806f4e00;
undefined FUN_1806f4e00;
undefined UNK_1806f4e70;
undefined UNK_18094e768;
undefined UNK_18094e778;
undefined UNK_18094e784;
undefined UNK_18094e790;
undefined UNK_1806f4e80;
undefined UNK_1806f4e90;
undefined UNK_1806f4ea0;
undefined UNK_1806f4ee0;
undefined UNK_1806f4f00;
undefined UNK_1806f4f10;
undefined UNK_1806f4f20;
undefined UNK_1806f4f30;
undefined UNK_1806f4f40;
undefined UNK_1806f4fb0;
undefined UNK_1806f4fc0;
undefined UNK_1806f4fd0;
undefined UNK_1806f4fe0;
undefined UNK_1806f4ff0;
undefined UNK_18094e7a4;
undefined UNK_18094e7b0;
undefined UNK_18094e7c0;
undefined UNK_18094e7d0;
undefined UNK_18094e7e0;



// 函数: undefined FUN_1806f4eb0;
undefined FUN_1806f4eb0;



// 函数: undefined FUN_1806f4f50;
undefined FUN_1806f4f50;



// 函数: undefined FUN_1806f4f80;
undefined FUN_1806f4f80;
undefined UNK_1806f5000;
undefined UNK_1806f5040;
undefined UNK_1806f5050;
undefined UNK_1806f50c0;
undefined UNK_1806f50d0;
undefined UNK_1806f50e0;
undefined UNK_18094e7f8;



// 函数: undefined FUN_1806f5010;
undefined FUN_1806f5010;
undefined UNK_18094e808;



// 函数: undefined FUN_1806f5060;
undefined FUN_1806f5060;



