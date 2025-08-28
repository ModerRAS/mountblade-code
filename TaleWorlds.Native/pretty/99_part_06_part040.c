#include "TaleWorlds.Native.Split.h"

// 99_part_06_part040.c - 7 个函数

// 函数: void FUN_1803cbfb0(longlong param_1,float *param_2,longlong param_3)
void FUN_1803cbfb0(longlong param_1,float *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  int32_t uVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int8_t auStack_588 [32];
  longlong *plStack_568;
  void **ppuStack_560;
  void **ppuStack_558;
  int32_t uStack_550;
  int32_t uStack_548;
  int32_t uStack_540;
  longlong lStack_538;
  uint64_t uStack_528;
  int32_t uStack_520;
  int32_t uStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  int32_t uStack_508;
  float fStack_504;
  float fStack_500;
  uint64_t uStack_4f8;
  uint64_t uStack_4f0;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  int32_t uStack_4c8;
  int32_t uStack_4c4;
  int32_t uStack_4c0;
  int32_t uStack_4bc;
  longlong lStack_4b8;
  longlong lStack_4b0;
  int16_t uStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  int32_t uStack_480;
  int32_t uStack_47c;
  int32_t uStack_478;
  int32_t uStack_474;
  int32_t uStack_470;
  int32_t uStack_46c;
  int32_t uStack_468;
  longlong lStack_460;
  int32_t uStack_458;
  float fStack_450;
  int32_t uStack_44c;
  int32_t uStack_448;
  int32_t uStack_444;
  void *puStack_440;
  longlong *plStack_438;
  longlong *plStack_430;
  int32_t uStack_428;
  int32_t uStack_424;
  int8_t uStack_420;
  void *puStack_418;
  longlong lStack_410;
  int32_t uStack_408;
  int32_t uStack_400;
  int32_t uStack_3fc;
  int32_t uStack_3f8;
  int32_t uStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  int8_t *puStack_3e0;
  int8_t auStack_3d8 [16];
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  longlong alStack_3b8 [3];
  int32_t uStack_3a0;
  longlong alStack_398 [3];
  int32_t uStack_380;
  uint64_t uStack_378;
  int8_t auStack_370 [16];
  int8_t auStack_360 [56];
  void *puStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  int32_t uStack_310;
  byte bStack_300;
  longlong *plStack_2f8;
  uint64_t uStack_2f0;
  longlong alStack_2e8 [64];
  ulonglong uStack_e8;
  
  uStack_378 = 0xfffffffffffffffe;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_588;
  fVar15 = param_2[4] - *param_2;
  fVar16 = fVar15 * fVar15 + (param_2[5] - param_2[1]) * (param_2[5] - param_2[1]) +
           (param_2[6] - param_2[2]) * (param_2[6] - param_2[2]);
  auVar12 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
  fVar15 = auVar12._0_4_;
  fVar13 = 3.0 - fVar16 * fVar15 * fVar15;
  fStack_500 = fVar15 * 0.5 * fVar13 * fVar16 * 0.5;
  fStack_504 = param_2[8];
  uVar11 = 2;
  uStack_508 = 2;
  fStack_518 = 0.0;
  fStack_514 = 0.0;
  fStack_510 = 1.0;
  fStack_50c = 3.4028235e+38;
  FUN_180645340(&uStack_4f8,fVar13,param_2 + 4,&fStack_518);
  fVar17 = fStack_4d8 * 0.0;
  fVar18 = fStack_4d4 * 0.0;
  fVar19 = fStack_4d0 * 0.0;
  fVar20 = fStack_4cc * 0.0;
  fVar15 = fStack_4d8 * 1.0;
  fVar13 = fStack_4d4 * 1.0;
  fVar16 = fStack_4d0 * 1.0;
  fVar14 = fStack_4cc * 1.0;
  fVar21 = (float)uStack_4f8 * 0.0;
  fVar22 = uStack_4f8._4_4_ * 0.0;
  fVar23 = (float)uStack_4f0 * 0.0;
  fVar24 = uStack_4f0._4_4_ * 0.0;
  fStack_4d8 = fStack_4e8 * 1.0 + fVar21 + fVar17;
  fStack_4d4 = fStack_4e4 * 1.0 + fVar22 + fVar18;
  fStack_4d0 = fStack_4e0 * 1.0 + fVar23 + fVar19;
  fStack_4cc = fStack_4dc * 1.0 + fVar24 + fVar20;
  uStack_4f8 = CONCAT44(uStack_4f8._4_4_ * -1.0 + fStack_4e4 * 0.0 + fVar18,
                        (float)uStack_4f8 * -1.0 + fStack_4e8 * 0.0 + fVar17);
  uStack_4f0 = CONCAT44(uStack_4f0._4_4_ * -1.0 + fStack_4dc * 0.0 + fVar20,
                        (float)uStack_4f0 * -1.0 + fStack_4e0 * 0.0 + fVar19);
  fStack_4e8 = fStack_4e8 * 0.0 + fVar21 + fVar15;
  fStack_4e4 = fStack_4e4 * 0.0 + fVar22 + fVar13;
  fStack_4e0 = fStack_4e0 * 0.0 + fVar23 + fVar16;
  fStack_4dc = fStack_4dc * 0.0 + fVar24 + fVar14;
  FUN_18063b470(&uStack_528,&uStack_4f8);
  uStack_480 = uStack_528._4_4_;
  uStack_47c = uStack_520;
  uStack_478 = uStack_51c;
  uStack_474 = (int32_t)uStack_528;
  uStack_470 = uStack_4c8;
  uStack_46c = uStack_4c4;
  uStack_468 = uStack_4c0;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0xffffffff;
  bStack_300 = 0;
  plStack_2f8 = alStack_2e8;
  lStack_4b8 = 0x10;
  uStack_2f0 = 0x10;
  puStack_328 = &unknown_var_3248_ptr;
  plVar8 = alStack_2e8;
  do {
    func_0x0001803ceb90(plVar8);
    plVar8 = plVar8 + 4;
    lStack_4b8 = lStack_4b8 + -1;
  } while (lStack_4b8 != 0);
  uStack_4a8 = 3;
  lStack_410 = *(longlong *)(param_2 + 10);
  puStack_418 = &unknown_var_3600_ptr;
  if (lStack_410 != 0) {
    uVar11 = *(int32_t *)(lStack_410 + 8);
  }
  if (*(longlong *)(param_2 + 10) != 0) {
    uStack_4a8 = 7;
  }
  ppuStack_560 = &puStack_418;
  if (*(longlong *)(param_2 + 10) == 0) {
    ppuStack_560 = (void **)0x0;
  }
  plStack_568 = &lStack_4b8;
  lStack_4b0 = lStack_4b8;
  uStack_408 = uVar11;
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x2c0))
            (*(longlong **)(param_1 + 0xb8),&uStack_508,&uStack_480,&puStack_328);
  uVar10 = 0;
  if ((uint)bStack_300 + uStack_2f0._4_4_ != 0) {
    plVar8 = alStack_2e8;
    do {
      lVar6 = 0;
      plVar1 = (longlong *)plVar8[1];
      (**(code **)(*plVar1 + 0x38))(plVar1);
      plVar2 = (longlong *)*plVar8;
      (**(code **)(*plVar1 + 0x98))(plVar1,auStack_3d8);
      (**(code **)(*plVar2 + 0x90))(plVar2,&fStack_4a0);
      alStack_398[0] = 0;
      alStack_398[1] = 0;
      uStack_380 = 3;
      alStack_3b8[0] = 0;
      alStack_3b8[1] = 0;
      uStack_3a0 = 3;
      puStack_440 = &unknown_var_4824_ptr;
      plStack_438 = alStack_398;
      plStack_430 = alStack_3b8;
      uStack_428 = 0;
      uStack_424 = 1;
      uStack_420 = 0;
      uStack_458 = 0;
      uStack_528 = &uStack_508;
      lStack_460 = lVar6;
      alStack_3b8[2] = lVar6;
      alStack_398[2] = lVar6;
      (**(code **)(*plVar1 + 0x48))(plVar1,auStack_360);
      puStack_3e0 = auStack_360;
      puVar3 = (int32_t *)FUN_1800fcb90(&fStack_4a0,auStack_370,auStack_3d8);
      fVar17 = fStack_3c8 * 2.0;
      fVar16 = fStack_3c4 * 2.0;
      fVar15 = fStack_3c0 * 2.0;
      fVar14 = fStack_494 * fStack_494 - 0.5;
      fVar13 = fStack_49c * fVar16 + fStack_4a0 * fVar17 + fStack_498 * fVar15;
      fStack_3e8 = fStack_488 +
                   (fStack_4a0 * fVar16 - fStack_49c * fVar17) * fStack_494 + fVar14 * fVar15 +
                   fStack_498 * fVar13;
      fStack_3ec = fStack_48c +
                   (fStack_498 * fVar17 - fStack_4a0 * fVar15) * fStack_494 + fVar14 * fVar16 +
                   fStack_49c * fVar13;
      fStack_3f0 = fStack_490 +
                   (fStack_49c * fVar15 - fStack_498 * fVar16) * fStack_494 + fVar14 * fVar17 +
                   fStack_4a0 * fVar13;
      uStack_400 = *puVar3;
      uStack_3fc = puVar3[1];
      uStack_3f8 = puVar3[2];
      uStack_3f4 = puVar3[3];
      lStack_538 = _DAT_180c8a990 + 0x48;
      uStack_540 = 0x3f800000;
      uStack_548 = 0x3dcccccd;
      uStack_550 = 0x3dcccccd;
      ppuStack_558 = &puStack_440;
      ppuStack_560 = (void **)CONCAT44(ppuStack_560._4_4_,1);
      plStack_568 = &lStack_460;
      PxGenerateContacts(&uStack_528,&puStack_3e0,&uStack_480,&uStack_400);
      iVar7 = 0;
      plVar9 = plStack_430;
      if (plStack_430[1] - *plStack_430 >> 6 != 0) {
        do {
          lVar4 = *plVar9;
          if ((*(float *)(lVar4 + 0xc + lVar6) <= 0.0) && (*(int *)(param_3 + 0x2000) < 0x80)) {
            fStack_510 = *(float *)(lVar4 + 0x18 + lVar6);
            fStack_514 = *(float *)(lVar4 + 0x14 + lVar6);
            fStack_518 = *(float *)(lVar4 + 0x10 + lVar6);
            fStack_50c = 3.4028235e+38;
            uStack_448 = *(int32_t *)(lVar4 + 8 + lVar6);
            uStack_44c = *(int32_t *)(lVar4 + 4 + lVar6);
            fStack_450 = *(float *)(lVar4 + lVar6);
            uStack_444 = 0x7f7fffff;
            fStack_4e0 = 0.0;
            uStack_4f8 = *(uint64_t *)(plVar2[2] + 8);
            lVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1,*(int32_t *)(lVar4 + 0x34 + lVar6));
            if (lVar4 == 0) {
              uStack_4f0 = 0;
            }
            else {
              uStack_4f0 = *(uint64_t *)(*(longlong *)(lVar4 + 0x10) + 8);
            }
            fVar15 = *(float *)(*plStack_430 + 0xc + lVar6);
            fStack_4cc = fStack_450;
            uStack_4c8 = uStack_44c;
            uStack_4c4 = uStack_448;
            uStack_4c0 = uStack_444;
            fStack_4d8 = fStack_514;
            fStack_4d4 = fStack_510;
            fStack_4d0 = fStack_50c;
            puVar5 = (uint64_t *)((longlong)*(int *)(param_3 + 0x2000) * 0x40 + param_3);
            *puVar5 = uStack_4f8;
            puVar5[1] = uStack_4f0;
            fStack_4e8 = -fVar15;
            fStack_4e4 = 0.0;
            fStack_4dc = fStack_518;
            *(float *)(puVar5 + 2) = -fVar15;
            *(int32_t *)((longlong)puVar5 + 0x14) = 0;
            *(float *)(puVar5 + 3) = fStack_4e0;
            *(float *)((longlong)puVar5 + 0x1c) = fStack_518;
            puVar5[4] = CONCAT44(fStack_510,fStack_514);
            puVar5[5] = CONCAT44(fStack_450,fStack_50c);
            puVar5[6] = CONCAT44(uStack_448,uStack_44c);
            puVar5[7] = CONCAT44(uStack_4bc,uStack_444);
            *(int *)(param_3 + 0x2000) = *(int *)(param_3 + 0x2000) + 1;
            plVar9 = plStack_430;
          }
          iVar7 = iVar7 + 1;
          lVar6 = lVar6 + 0x40;
        } while ((ulonglong)(longlong)iVar7 < (ulonglong)(plVar9[1] - *plVar9 >> 6));
      }
      puStack_440 = &unknown_var_4848_ptr;
      if (alStack_3b8[0] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if (alStack_398[0] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar10 = uVar10 + 1;
      plVar8 = plVar8 + 4;
    } while (uVar10 < (uint)bStack_300 + uStack_2f0._4_4_);
  }
  puStack_418 = &unknown_var_4032_ptr;
  puStack_328 = &unknown_var_3472_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_588);
}






// 函数: void FUN_1803cc7c0(uint64_t *param_1)
void FUN_1803cc7c0(uint64_t *param_1)

{
  *param_1 = &unknown_var_3440_ptr;
  *param_1 = &unknown_var_3472_ptr;
  return;
}






// 函数: void FUN_1803cc7f0(void)
void FUN_1803cc7f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1803ccbf0(longlong param_1,int32_t *param_2,longlong param_3)
void FUN_1803ccbf0(longlong param_1,int32_t *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  void **ppuVar7;
  ushort uVar8;
  ushort auStackX_8 [4];
  uint64_t uStack_128;
  uint64_t uStack_120;
  ushort uStack_118;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_e0;
  void *puStack_d8;
  longlong lStack_d0;
  longlong *plStack_c8;
  int32_t uStack_c0;
  int16_t uStack_b8;
  uint64_t uStack_b4;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  uint64_t uStack_98;
  int8_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_3c;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_f8 = param_2[2];
  uStack_fc = param_2[1];
  uStack_100 = *param_2;
  uStack_108 = param_2[6];
  uStack_10c = param_2[5];
  uStack_110 = param_2[4];
  lStack_d0 = 0;
  plStack_c8 = (longlong *)0x0;
  uStack_c0 = 0xffffffff;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x7f7fffff;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_d8 = &unknown_var_3376_ptr;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_118 = 3;
  lStack_e8 = *(longlong *)(param_2 + 10);
  puStack_f0 = &unknown_var_3600_ptr;
  uVar6 = 2;
  uStack_e0 = uVar6;
  if (lStack_e8 != 0) {
    uStack_e0 = *(int32_t *)(lStack_e8 + 8);
  }
  if (*(longlong *)(param_2 + 10) == 0) {
    uVar8 = 3;
  }
  else {
    uVar8 = 7;
    uStack_118 = 7;
  }
  ppuVar7 = &puStack_f0;
  if (*(longlong *)(param_2 + 10) == 0) {
    ppuVar7 = (void **)0x0;
  }
  if ((*(byte *)(param_2 + 9) & 1) != 0) {
    uStack_118 = uVar8 | 0x10;
  }
  auStackX_8[0] = (ushort)(*(byte *)(param_2 + 9) & 2) << 6 | 0x403;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x2b0))
                    (*(longlong **)(param_1 + 0xb8),&uStack_100,&uStack_110,param_2[8],&puStack_d8,
                     auStackX_8,&uStack_128,ppuVar7,0);
  plVar1 = plStack_c8;
  lVar4 = lStack_d0;
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*plStack_c8 + 0x38))(plStack_c8);
    uStack_78 = *(uint64_t *)(*(longlong *)(lVar4 + 0x10) + 8);
    lVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1,uStack_c0);
    if (lVar4 == 0) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = *(uint64_t *)(*(longlong *)(lVar4 + 0x10) + 8);
    }
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    else if (iVar3 != 1) {
      if (iVar3 == 2) {
        uVar6 = 3;
      }
      else if (iVar3 == 3) {
        uVar6 = 4;
      }
      else if (iVar3 == 4) {
        uVar6 = 5;
      }
      else if (iVar3 == 5) {
        uVar6 = 6;
      }
      else {
        uVar6 = 0;
        if (iVar3 == 6) {
          uVar6 = 7;
        }
      }
    }
    puVar5 = (uint64_t *)((longlong)*(int *)(param_3 + 0x40) * 0x40 + param_3);
    *puVar5 = uStack_78;
    puVar5[1] = uStack_70;
    puVar5[2] = (ulonglong)(iVar3 == 6) << 0x20;
    puVar5[3] = CONCAT44((int32_t)uStack_b4,uVar6);
    puVar5[4] = CONCAT44(uStack_ac,uStack_b4._4_4_);
    puVar5[5] = CONCAT44(uStack_a8,0x7f7fffff);
    puVar5[6] = CONCAT44(uStack_a0,uStack_a4);
    puVar5[7] = CONCAT44(uStack_3c,0x7f7fffff);
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  }
  return;
}






// 函数: void FUN_1803ccf40(void)
void FUN_1803ccf40(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803cd350(longlong param_1,int32_t *param_2,longlong param_3)
void FUN_1803cd350(longlong param_1,int32_t *param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int32_t uVar6;
  ushort uVar7;
  float fVar8;
  int8_t auStack_1e8 [32];
  void **ppuStack_1c8;
  int16_t *puStack_1c0;
  uint64_t *puStack_1b8;
  void **ppuStack_1b0;
  uint64_t uStack_1a8;
  int16_t auStack_198 [2];
  int32_t uStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  ushort uStack_160;
  int32_t uStack_158;
  int32_t uStack_154;
  int32_t uStack_150;
  void *puStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  uint uStack_130;
  int16_t uStack_128;
  uint64_t uStack_124;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  uint64_t uStack_108;
  int8_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  longlong lStack_e0;
  int32_t uStack_d8;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  uint uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_78;
  int8_t auStack_70 [48];
  ulonglong uStack_40;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uStack_150 = param_2[2];
  uStack_154 = param_2[1];
  uStack_158 = *param_2;
  fStack_178 = (float)param_2[6];
  fStack_17c = (float)param_2[5];
  fStack_180 = (float)param_2[4];
  fVar8 = SQRT(fStack_17c * fStack_17c + fStack_180 * fStack_180 + fStack_178 * fStack_178);
  if (0.0 < fVar8) {
    fVar8 = 1.0 / fVar8;
    fStack_180 = fVar8 * fStack_180;
    fStack_17c = fVar8 * fStack_17c;
    fStack_178 = fVar8 * fStack_178;
  }
  ppuStack_1b0 = (void **)0x0;
  lStack_140 = 0;
  plStack_138 = (longlong *)0x0;
  uStack_130 = 0xffffffff;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x7f7fffff;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  puStack_148 = &unknown_var_3376_ptr;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_160 = 3;
  lStack_e0 = *(longlong *)(param_2 + 10);
  puStack_e8 = &unknown_var_3600_ptr;
  uVar6 = 2;
  uStack_d8 = uVar6;
  if (lStack_e0 != 0) {
    uStack_d8 = *(int32_t *)(lStack_e0 + 8);
  }
  if (*(longlong *)(param_2 + 10) == 0) {
    uVar7 = 3;
  }
  else {
    uVar7 = 7;
    uStack_160 = 7;
    ppuStack_1b0 = &puStack_e8;
  }
  if ((*(byte *)(param_2 + 9) & 1) != 0) {
    uStack_160 = uVar7 | 0x10;
  }
  auStack_198[0] = 0x403;
  uStack_1a8 = 0;
  puStack_1b8 = &uStack_170;
  puStack_1c0 = auStack_198;
  ppuStack_1c8 = &puStack_148;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x2b0))
                    (*(longlong **)(param_1 + 0xb8),&uStack_158,&fStack_180,param_2[8]);
  plVar2 = plStack_138;
  lVar5 = lStack_140;
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(*plStack_138 + 0x38))(plStack_138);
    uStack_c8 = *(uint64_t *)(*(longlong *)(lVar5 + 0x10) + 8);
    lVar5 = (**(code **)(*plVar2 + 0xd8))(plVar2,uStack_130);
    if (lVar5 == 0) {
      uStack_c0 = 0;
    }
    else {
      uStack_c0 = *(uint64_t *)(*(longlong *)(lVar5 + 0x10) + 8);
    }
    uStack_b8 = 0;
    uStack_ac = (int32_t)uStack_124;
    uStack_a8 = uStack_124._4_4_;
    uStack_a4 = uStack_11c;
    uStack_a0 = 0x7f7fffff;
    uStack_18c = uStack_110;
    uStack_188 = 0x7f7fffff;
    uStack_9c = uStack_118;
    uStack_98 = uStack_114;
    uStack_94 = uStack_110;
    uStack_90 = 0x7f7fffff;
    uStack_b4 = (uint)(iVar4 == 6);
    if (iVar4 == 0) {
      uVar6 = 1;
    }
    else if (iVar4 != 1) {
      if (iVar4 == 2) {
        uVar6 = 3;
      }
      else if (iVar4 == 3) {
        uVar6 = 4;
      }
      else if (iVar4 == 4) {
        uVar6 = 5;
      }
      else if (iVar4 == 5) {
        uVar6 = 6;
      }
      else {
        uVar6 = 0;
        if (iVar4 == 6) {
          uVar6 = 7;
        }
      }
    }
    uStack_194 = (int32_t)uStack_108;
    uStack_190 = uStack_108._4_4_;
    uStack_88 = uStack_108;
    uStack_b0 = uVar6;
    lVar5 = (**(code **)(*plVar2 + 0x48))(plVar2,auStack_70);
    lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x60))();
    uStack_8c = *(int32_t *)(lVar5 + (ulonglong)uStack_130 * 4);
    lVar5 = (longlong)*(int *)(param_3 + 0x48);
    puVar1 = (uint64_t *)(param_3 + lVar5 * 0x48);
    *puVar1 = uStack_c8;
    puVar1[1] = uStack_c0;
    puVar1 = (uint64_t *)(param_3 + 0x10 + lVar5 * 0x48);
    *puVar1 = CONCAT44(uStack_b4,uStack_b8);
    puVar1[1] = CONCAT44(uStack_ac,uStack_b0);
    puVar1 = (uint64_t *)(param_3 + 0x20 + lVar5 * 0x48);
    *puVar1 = CONCAT44(uStack_a4,uStack_a8);
    puVar1[1] = CONCAT44(uStack_9c,uStack_a0);
    puVar1 = (uint64_t *)(param_3 + 0x30 + lVar5 * 0x48);
    *puVar1 = CONCAT44(uStack_94,uStack_98);
    puVar1[1] = CONCAT44(uStack_8c,uStack_90);
    *(uint64_t *)(param_3 + 0x40 + lVar5 * 0x48) = uStack_88;
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  }
  puStack_e8 = &unknown_var_4032_ptr;
  puStack_148 = &unknown_var_3408_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_1e8);
}






// 函数: void FUN_1803cd740(longlong param_1,float *param_2,longlong param_3)
void FUN_1803cd740(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  void **ppuVar7;
  longlong lVar8;
  uint64_t *puVar9;
  float *pfVar10;
  int32_t uVar11;
  float fVar13;
  int8_t auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int16_t auStackX_8 [4];
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  int16_t uStack_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  int32_t uStack_150;
  float fStack_14c;
  float fStack_148;
  void *puStack_138;
  longlong lStack_130;
  longlong *plStack_128;
  int32_t uStack_120;
  ushort uStack_118;
  uint64_t uStack_114;
  int32_t uStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int8_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  void *puStack_d8;
  longlong lStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  fVar1 = param_2[0x18];
  fVar2 = param_2[0x17];
  fVar3 = param_2[0x16];
  fVar4 = param_2[0x1a];
  fVar15 = param_2[4] - *param_2;
  fVar16 = fVar15 * fVar15 + (param_2[5] - param_2[1]) * (param_2[5] - param_2[1]) +
           (param_2[6] - param_2[2]) * (param_2[6] - param_2[2]);
  auVar12 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
  fVar15 = auVar12._0_4_;
  fStack_148 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15) * fVar16 * 0.5;
  fStack_14c = param_2[8];
  uVar11 = 2;
  uStack_150 = 2;
  uStack_1c8 = 0;
  uStack_1c0._0_4_ = 0x3f800000;
  uStack_1c0._4_4_ = 0x7f7fffff;
  pfVar10 = param_2;
  FUN_180645340(&uStack_1b8,0,param_2 + 4,&uStack_1c8);
  fVar17 = fStack_198 * 0.0;
  fVar18 = fStack_194 * 0.0;
  fVar19 = fStack_190 * 0.0;
  fVar20 = fStack_18c * 0.0;
  fVar15 = fStack_198 * 1.0;
  fVar16 = fStack_194 * 1.0;
  fVar13 = fStack_190 * 1.0;
  fVar14 = fStack_18c * 1.0;
  fVar21 = (float)uStack_1b8 * 0.0;
  fVar22 = uStack_1b8._4_4_ * 0.0;
  fVar23 = (float)uStack_1b0 * 0.0;
  fVar24 = uStack_1b0._4_4_ * 0.0;
  fStack_198 = fVar21 + fStack_1a8 * 1.0 + fVar17;
  fStack_194 = fVar22 + fStack_1a4 * 1.0 + fVar18;
  fStack_190 = fVar23 + fStack_1a0 * 1.0 + fVar19;
  fStack_18c = fVar24 + fStack_19c * 1.0 + fVar20;
  uStack_1b8 = CONCAT44(uStack_1b8._4_4_ * -1.0 + fStack_1a4 * 0.0 + fVar18,
                        (float)uStack_1b8 * -1.0 + fStack_1a8 * 0.0 + fVar17);
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_ * -1.0 + fStack_19c * 0.0 + fVar20,
                        (float)uStack_1b0 * -1.0 + fStack_1a0 * 0.0 + fVar19);
  uStack_188 = *(uint64_t *)(pfVar10 + 0x12);
  uStack_180 = *(uint64_t *)(pfVar10 + 0x14);
  fStack_1a8 = fVar21 + fStack_1a8 * 0.0 + fVar15;
  fStack_1a4 = fVar22 + fStack_1a4 * 0.0 + fVar16;
  fStack_1a0 = fVar23 + fStack_1a0 * 0.0 + fVar13;
  fStack_19c = fVar24 + fStack_19c * 0.0 + fVar14;
  FUN_18063b470(&uStack_1c8,&uStack_1b8);
  uStack_c0 = uStack_1c8._4_4_;
  uStack_bc = (int32_t)uStack_1c0;
  uStack_b8 = uStack_1c0._4_4_;
  uStack_b4 = (int32_t)uStack_1c8;
  uStack_b0 = (int32_t)uStack_188;
  uStack_ac = uStack_188._4_4_;
  uStack_a8 = (int32_t)uStack_180;
  lStack_130 = 0;
  plStack_128 = (longlong *)0x0;
  uStack_120 = 0xffffffff;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_100 = 0x7f7fffff00000000;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  puStack_138 = &unknown_var_3312_ptr;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_168 = 3;
  lStack_d0 = *(longlong *)(param_2 + 0x1c);
  puStack_d8 = &unknown_var_3600_ptr;
  if (lStack_d0 == 0) {
    uStack_c8 = 2;
  }
  else {
    uStack_c8 = *(int32_t *)(lStack_d0 + 8);
  }
  if (*(longlong *)(param_2 + 0x1c) != 0) {
    uStack_168 = 7;
  }
  auStackX_8[0] = 0x603;
  ppuVar7 = &puStack_d8;
  if (*(longlong *)(param_2 + 0x1c) == 0) {
    ppuVar7 = (void **)0x0;
  }
  fStack_160 = fVar3;
  fStack_15c = fVar2;
  fStack_158 = fVar1;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x2b8))
                    (*(longlong **)(param_1 + 0xb8),&uStack_150,&uStack_c0,&fStack_160,fVar4,
                     &puStack_138,auStackX_8,&uStack_178,ppuVar7,0,0);
  if (cVar5 != '\0') {
    uStack_1b8 = *(uint64_t *)(*(longlong *)(lStack_130 + 0x10) + 8);
    lVar8 = (**(code **)(*plStack_128 + 0xd8))(plStack_128,uStack_120);
    if (lVar8 == 0) {
      uStack_1b0 = 0;
    }
    else {
      uStack_1b0 = *(uint64_t *)(*(longlong *)(lVar8 + 0x10) + 8);
    }
    fStack_1a8 = (float)uStack_100._4_4_;
    if ((uStack_118 & 1) == 0) {
      uStack_1c8 = *(uint64_t *)(param_2 + 0x12);
      uStack_1c0 = *(uint64_t *)(param_2 + 0x14);
    }
    else {
      uStack_1c8 = uStack_114;
      uStack_1c0 = CONCAT44(0x7f7fffff,uStack_10c);
    }
    fStack_19c = (float)uStack_1c8;
    fStack_198 = (float)((ulonglong)uStack_1c8 >> 0x20);
    fStack_194 = (float)uStack_1c0;
    fStack_190 = (float)((ulonglong)uStack_1c0 >> 0x20);
    uStack_1c0 = CONCAT44(0x7f7fffff,fStack_194);
    fStack_18c = (float)(int32_t)uStack_108;
    uStack_188 = CONCAT44((int32_t)uStack_100,uStack_108._4_4_);
    uStack_180 = CONCAT44(uStack_180._4_4_,0x7f7fffff);
    iVar6 = (**(code **)(*plStack_128 + 0x38))();
    fStack_1a4 = (float)(uint)(iVar6 == 6);
    iVar6 = (**(code **)(*plStack_128 + 0x38))();
    if (iVar6 == 0) {
      uVar11 = 1;
    }
    else if (iVar6 != 1) {
      if (iVar6 == 2) {
        uVar11 = 3;
      }
      else if (iVar6 == 3) {
        uVar11 = 4;
      }
      else if (iVar6 == 4) {
        uVar11 = 5;
      }
      else if (iVar6 == 5) {
        uVar11 = 6;
      }
      else {
        uVar11 = 0;
        if (iVar6 == 6) {
          uVar11 = 7;
        }
      }
    }
    puVar9 = (uint64_t *)((longlong)*(int *)(param_3 + 0x40) * 0x40 + param_3);
    *puVar9 = uStack_1b8;
    puVar9[1] = uStack_1b0;
    puVar9[2] = CONCAT44(fStack_1a4,fStack_1a8);
    puVar9[3] = CONCAT44(fStack_19c,uVar11);
    puVar9[4] = CONCAT44(fStack_194,fStack_198);
    puVar9[5] = CONCAT44(fStack_18c,fStack_190);
    puVar9[6] = uStack_188;
    puVar9[7] = uStack_180;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  }
  return;
}






