#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part577.c - 1 个函数

// 函数: void FUN_180583b80(int64_t *param_1,float param_2)
void FUN_180583b80(int64_t *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int32_t uVar11;
  float *pfVar12;
  float *pfVar13;
  char cVar14;
  int64_t lVar15;
  void *puVar16;
  int64_t lVar17;
  int *piVar18;
  uint64_t uVar19;
  uint *puVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  int8_t auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int8_t auStack_798 [32];
  float *pfStack_778;
  int *piStack_770;
  int64_t *plStack_768;
  int *piStack_760;
  float *pfStack_758;
  float *pfStack_750;
  char acStack_748 [4];
  int32_t uStack_744;
  int iStack_740;
  uint uStack_73c;
  int iStack_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float fStack_728;
  float fStack_720;
  float fStack_71c;
  float fStack_718;
  int32_t uStack_714;
  float fStack_710;
  float fStack_70c;
  float fStack_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  float fStack_6f8;
  int32_t uStack_6f4;
  int32_t uStack_6e8;
  int32_t uStack_6e4;
  float fStack_6e0;
  float fStack_6d8;
  float fStack_6d4;
  float fStack_6d0;
  int32_t uStack_6cc;
  float fStack_6c8;
  float fStack_6c4;
  float fStack_6c0;
  int32_t uStack_6bc;
  float fStack_6b8;
  float fStack_6b4;
  float fStack_6b0;
  int32_t uStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float fStack_6a0;
  int32_t uStack_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  int32_t uStack_68c;
  float fStack_688;
  float fStack_684;
  float fStack_680;
  int32_t uStack_67c;
  float fStack_678;
  float fStack_674;
  float fStack_670;
  int32_t uStack_66c;
  float fStack_668;
  float fStack_664;
  float fStack_660;
  int32_t uStack_65c;
  int32_t uStack_658;
  int32_t uStack_654;
  float fStack_650;
  int32_t uStack_64c;
  float fStack_648;
  float fStack_644;
  float fStack_640;
  int32_t uStack_63c;
  float fStack_638;
  float fStack_634;
  float fStack_630;
  int32_t uStack_62c;
  int64_t lStack_628;
  uint64_t uStack_620;
  uint64_t uStack_618;
  int32_t uStack_610;
  int32_t uStack_60c;
  uint64_t uStack_608;
  uint64_t uStack_600;
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  int32_t uStack_5ec;
  int16_t uStack_5e8;
  int32_t uStack_5e4;
  uint64_t uStack_5e0;
  int32_t uStack_5d8;
  int8_t auStack_5d0 [16];
  uint64_t uStack_5c0;
  uint64_t uStack_5b8;
  uint64_t uStack_5b0;
  uint64_t uStack_5a8;
  int16_t uStack_5a0;
  int8_t uStack_598;
  int32_t uStack_594;
  int32_t uStack_590;
  uint64_t uStack_58c;
  uint64_t uStack_584;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  int32_t uStack_570;
  int iStack_56c;
  uint64_t uStack_568;
  int8_t uStack_560;
  uint64_t uStack_55c;
  int32_t uStack_554;
  uint64_t uStack_548;
  uint64_t uStack_540;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  uint uStack_52c;
  float fStack_528;
  float fStack_524;
  int32_t uStack_520;
  uint64_t uStack_518;
  uint64_t uStack_510;
  float fStack_508;
  float fStack_504;
  int32_t uStack_500;
  int32_t uStack_4fc;
  uint64_t uStack_4f8;
  uint64_t uStack_4f0;
  uint64_t uStack_4e8;
  int8_t auStack_4e0 [8];
  float fStack_4d8;
  int8_t auStack_4c8 [32];
  uint64_t uStack_4a8;
  uint64_t uStack_4a0;
  uint64_t uStack_498;
  uint64_t uStack_490;
  float fStack_488;
  char cStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  int32_t uStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  int32_t uStack_454;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  int32_t uStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  int32_t uStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  int32_t uStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  int32_t uStack_40c;
  int8_t auStack_408 [16];
  int8_t auStack_3f8 [16];
  int8_t auStack_3e8 [16];
  int8_t auStack_3d8 [16];
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  int32_t uStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  int32_t uStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  int32_t uStack_39c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  int32_t uStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  int32_t uStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  uint uStack_35c;
  int64_t alStack_358 [25];
  int iStack_290;
  char cStack_288;
  void *puStack_278;
  void *puStack_270;
  int32_t uStack_268;
  uint8_t auStack_260 [8];
  void *puStack_258;
  void *puStack_250;
  int32_t uStack_248;
  uint8_t auStack_240 [24];
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [72];
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  uint uStack_1ac;
  int64_t alStack_1a8 [4];
  float afStack_188 [2];
  int8_t auStack_180 [152];
  int iStack_e8;
  uint64_t uStack_d8;
  
  uStack_4e8 = 0xfffffffffffffffe;
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_798;
  cVar14 = '\0';
  acStack_748[0] = '\0';
  fStack_734 = param_2;
  if (((0.0 < param_2) && (system_status_flag != 1)) && (system_status_flag != 4)) {
    if ((*(byte *)(param_1[2] + 0x87b714) & 1) != 0) {
      FUN_180581090();
    }
    lVar17 = param_1[0x1e];
    uVar22 = 0;
    iVar10 = iRam00000000000000f0;
    if (lVar17 == 0) {
LAB_180583c81:
      lVar21 = *(int64_t *)(lVar17 + 0xd0);
      uVar19 = 1;
    }
    else {
      iVar10 = *(int *)(lVar17 + 0xf0);
      lVar21 = *(int64_t *)(lVar17 + 0xd0);
      uVar19 = uVar22;
      if (*(int *)((int64_t)iVar10 * 0xa0 + 0x5c + lVar21) != 0x13) goto LAB_180583c81;
    }
    uStack_73c = (uint)uVar19;
    if (uStack_73c == 0) {
      uStack_744 = *(int32_t *)((int64_t)iVar10 * 0xa0 + 0x9c + lVar21);
    }
    else {
      uStack_744 = *(int32_t *)((int64_t)iVar10 * 0xa0 + 0x98 + lVar21);
    }
    FUN_180588680(param_1,&fStack_730);
    FUN_1805815f0(param_1,&uStack_6e8,param_1 + 0xb);
    lStack_628 = (int64_t)*(int *)((int64_t)param_1 + 0xbd4);
    if (0 < lStack_628) {
      pfVar13 = (float *)((int64_t)param_1 + 0x3ec);
      do {
        pfVar1 = pfVar13 + -6;
        fVar26 = pfVar13[4];
        if ((fVar26 != 4.2039e-45) ||
           (((lVar17 = *(int64_t *)
                        (*(int64_t *)((int64_t)(int)pfVar13[7] * 0xa60 + 0x3998 + param_1[2]) +
                        0x9f0), lVar17 != 0 && (0 < *(int *)(lVar17 + 0x30))) &&
            (((*(uint64_t *)
                ((int64_t)*(int *)(lVar17 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar17 + 0xd0)) &
              0x200) == 0 || (0 < *(short *)(lVar17 + 8))))))) {
          func_0x0001805345e0(alStack_358);
          pfStack_758 = (float *)acStack_748;
          piStack_760 = &iStack_740;
          plStack_768 = alStack_358;
          piStack_770 = &iStack_738;
          pfStack_778 = &fStack_730;
          FUN_180584d80(param_1,pfVar1,uVar19,uStack_744);
          cVar14 = acStack_748[0];
          if ((fVar26 == 8.40779e-45) || (fVar26 == 5.60519e-45)) {
            if (*(byte *)(param_1 + 0x5d) < 0x20) {
              *(short *)((int64_t)param_1 + (uint64_t)*(byte *)(param_1 + 0x5d) * 2 + 0x2a8) =
                   SUB42(pfVar13[7],0);
              *(char *)(param_1 + 0x5d) = (char)param_1[0x5d] + '\x01';
            }
LAB_180583e24:
            if (fVar26 == 4.2039e-45) {
              lVar17 = param_1[2] + 0x30a0 + (int64_t)(int)pfVar13[7] * 0xa60;
              pfStack_750 = &fStack_730;
              pfStack_758 = &fStack_730;
              piStack_760 = (int *)CONCAT44(piStack_760._4_4_,(int)param_1[0x54]);
              pfStack_778 = (float *)CONCAT44(pfStack_778._4_4_,
                                              *(int32_t *)((int64_t)param_1 + 0xc));
              plStack_768 = param_1;
              FUN_1805253f0(lVar17,alStack_358,acStack_748[0] == '\0',0xff);
              if (cStack_288 == '\0') {
                cVar14 = *(char *)(*(int64_t *)
                                    (*(int64_t *)(*(int64_t *)(lVar17 + 0x8f8) + 0x9f0) + 0xf8) +
                                  0x88);
                lVar15 = (int64_t)cVar14;
                lVar21 = *(int64_t *)(lVar17 + 0x658);
                lVar5 = *(int64_t *)(*(int64_t *)(lVar21 + 0x208) + 0x140);
                iVar10 = *(int *)(lVar15 * 0x1b0 + 0x110 + lVar5);
                while ((iVar10 == -1 && (cVar14 = (char)lVar15, cVar14 != -1))) {
                  cVar14 = *(char *)(lVar15 * 0x100 + 0xa0 + *(int64_t *)(lVar21 + 0x18));
                  lVar15 = (int64_t)cVar14;
                  iVar10 = *(int *)(lVar15 * 0x1b0 + 0x110 + lVar5);
                }
                puVar20 = (uint *)((int64_t)cVar14 * 0x100 + *(int64_t *)(lVar21 + 0x18));
                do {
                  LOCK();
                  uVar2 = *puVar20;
                  *puVar20 = *puVar20 | 1;
                  UNLOCK();
                } while ((uVar2 & 1) != 0);
                uStack_548 = *(uint64_t *)(puVar20 + 1);
                uStack_540 = *(uint64_t *)(puVar20 + 3);
                fVar7 = (float)puVar20[5];
                fVar8 = (float)puVar20[6];
                fVar9 = (float)puVar20[7];
                uVar2 = puVar20[8];
                uVar23 = 0;
                *puVar20 = 0;
                lVar21 = *(int64_t *)(*(int64_t *)(lVar17 + 0x6d8) + 0x8a8);
                fStack_538 = fVar7;
                fStack_534 = fVar8;
                fStack_530 = fVar9;
                uStack_52c = uVar2;
                uStack_1c8 = uStack_548;
                uStack_1c0 = uStack_540;
                fStack_1b8 = fVar7;
                fStack_1b4 = fVar8;
                fStack_1b0 = fVar9;
                uStack_1ac = uVar2;
                SystemSecurityManager(&fStack_480,&uStack_548);
                fStack_388 = fStack_470;
                fStack_384 = fStack_46c;
                fStack_380 = fStack_468;
                uStack_37c = uStack_464;
                fStack_378 = fStack_460;
                fStack_374 = fStack_45c;
                fStack_370 = fStack_458;
                uStack_36c = uStack_454;
                fVar29 = *(float *)(lVar21 + 0x98);
                fStack_6d0 = fVar9 * fVar29 + *(float *)(lVar21 + 0xa8);
                fVar27 = *(float *)(lVar21 + 0x74);
                fVar25 = *(float *)(lVar21 + 0x84);
                fStack_6d4 = fVar8 * fVar25 + fVar7 * fVar27 + *(float *)(lVar21 + 0xa4);
                fVar3 = *(float *)(lVar21 + 0x80);
                fVar4 = *(float *)(lVar21 + 0x70);
                fStack_6d8 = fVar7 * fVar4 + fVar8 * fVar3 + *(float *)(lVar21 + 0xa0);
                uStack_6cc = 0x7f7fffff;
                uStack_40c = 0x7f7fffff;
                fVar34 = fStack_458 * fVar29;
                fVar32 = fStack_45c * fVar25 + fStack_460 * fVar27;
                fVar33 = fStack_460 * fVar4 + fStack_45c * fVar3;
                fVar31 = fStack_468 * fVar29;
                fVar30 = fStack_46c * fVar25 + fStack_470 * fVar27;
                fVar28 = fStack_470 * fVar4 + fStack_46c * fVar3;
                fStack_70c = fStack_46c;
                fStack_708 = fStack_468;
                fStack_704 = (float)uStack_464;
                fVar29 = fStack_478 * fVar29;
                fVar27 = fStack_47c * fVar25 + fStack_480 * fVar27;
                fStack_6c8 = fStack_480 * fVar4 + fStack_47c * fVar3;
                uStack_548 = CONCAT44(fStack_47c,fStack_6c8);
                uStack_6bc = 0x7f7fffff;
                uStack_6ac = 0x7f7fffff;
                uStack_69c = 0x7f7fffff;
                uStack_43c = 0x7f7fffff;
                uStack_42c = 0x7f7fffff;
                uStack_41c = 0x7f7fffff;
                fStack_710 = fVar28;
                fStack_6c4 = fVar27;
                fStack_6c0 = fVar29;
                fStack_6b8 = fVar28;
                fStack_6b4 = fVar30;
                fStack_6b0 = fVar31;
                fStack_6a8 = fVar33;
                fStack_6a4 = fVar32;
                fStack_6a0 = fVar34;
                fStack_448 = fStack_6c8;
                fStack_444 = fVar27;
                fStack_440 = fVar29;
                fStack_438 = fVar28;
                fStack_434 = fVar30;
                fStack_430 = fVar31;
                fStack_428 = fVar33;
                fStack_424 = fVar32;
                fStack_420 = fVar34;
                fStack_418 = fStack_6d8;
                fStack_414 = fStack_6d4;
                fStack_410 = fStack_6d0;
                fStack_368 = fVar7;
                fStack_364 = fVar8;
                fStack_360 = fVar9;
                uStack_35c = uVar2;
                FUN_1801c13c0(&fStack_448,&uStack_620,pfVar1);
                fStack_698 = 1.0 / *(float *)(*(int64_t *)(lVar17 + 0x6d8) + 0x8c0);
                fStack_670 = fVar34 * fStack_698;
                fStack_674 = fVar32 * fStack_698;
                fStack_678 = fStack_698 * fVar33;
                fStack_680 = fVar31 * fStack_698;
                fStack_684 = fVar30 * fStack_698;
                fStack_688 = fStack_698 * fVar28;
                fStack_690 = fVar29 * fStack_698;
                fStack_694 = fVar27 * fStack_698;
                fStack_698 = fStack_698 * (float)uStack_548;
                uStack_68c = 0x7f7fffff;
                uStack_3bc = 0x7f7fffff;
                uStack_67c = 0x7f7fffff;
                uStack_3ac = 0x7f7fffff;
                uStack_66c = 0x7f7fffff;
                uStack_39c = 0x7f7fffff;
                fStack_710 = fStack_730 * fStack_698 + fStack_72c * fStack_694 +
                             fStack_728 * fStack_690;
                fStack_70c = fStack_730 * fStack_688 + fStack_72c * fStack_684 +
                             fStack_728 * fStack_680;
                fStack_708 = fStack_730 * fStack_678 + fStack_72c * fStack_674 +
                             fStack_728 * fStack_670;
                fStack_704 = fStack_730 * 3.4028235e+38 + fStack_72c * 3.4028235e+38 +
                             fStack_728 * 3.4028235e+38;
                iVar10 = *(int *)(*(int64_t *)(lVar17 + 0x590) + 0x2498);
                if (((iVar10 == -1) ||
                    (*(int *)((int64_t)iVar10 * 0x68 + 0x58 + render_system_memory) != 2)) ||
                   (*(int64_t *)(lVar17 + 0x288) == 0)) {
                  iVar10 = -1;
                }
                else {
                  iVar10 = *(int *)(*(int64_t *)(lVar17 + 0x288) + 0x18);
                }
                fStack_720 = (float)iStack_290 * 0.3;
                if (-1.0 <= fStack_720) {
                  if (1.0 <= fStack_720) {
                    fStack_720 = 1.0;
                  }
                }
                else {
                  fStack_720 = -1.0;
                }
                fStack_718 = fStack_720 * fStack_708;
                fStack_71c = fStack_720 * fStack_70c;
                fStack_720 = fStack_720 * fStack_710;
                uStack_714 = 0x7f7fffff;
                fStack_3c8 = fStack_698;
                fStack_3c4 = fStack_694;
                fStack_3c0 = fStack_690;
                fStack_3b8 = fStack_688;
                fStack_3b4 = fStack_684;
                fStack_3b0 = fStack_680;
                fStack_3a8 = fStack_678;
                fStack_3a4 = fStack_674;
                fStack_3a0 = fStack_670;
                if (iVar10 == -1) {
                  uStack_610 = 2;
                  uStack_60c = 0xffffffff;
                  uStack_608 = uStack_620;
                  uStack_600 = uStack_618;
                  uStack_5ec = 0x7f7fffff;
                  uStack_5e8 = 0xff;
                  fStack_5f8 = fStack_720;
                  fStack_5f4 = fStack_71c;
                  fStack_5f0 = fStack_718;
                  uStack_5e4 = (int)uVar23;
                  FUN_1805a4590(lVar17 + 0x28,&uStack_610);
                  cVar14 = acStack_748[0];
                }
                else {
                  uStack_598 = (int8_t)uVar23;
                  uStack_5e0 = 0xffffffffffffffff;
                  auStack_5d0 = ZEXT416(0);
                  uStack_5b8 = 0x3f80000000000000;
                  uStack_5b0 = 0xbe4ccccdbe4ccccd;
                  uStack_5a8 = 0x3ecccccd;
                  uStack_5a0 = 0x100;
                  uStack_594 = 0xf;
                  uStack_590 = 0xffffffff;
                  uStack_58c = uStack_620;
                  uStack_584 = uStack_618;
                  uStack_570 = 0x7f7fffff;
                  uStack_568 = 0xffffffffffffffff;
                  uStack_560 = 0xff;
                  uStack_554 = 0x3f800000;
                  uStack_5d8 = (int)uVar23;
                  uStack_5c0 = uVar23;
                  fStack_57c = fStack_720;
                  fStack_578 = fStack_71c;
                  fStack_574 = fStack_718;
                  iStack_56c = iVar10;
                  uStack_55c = uVar23;
                  UISystem_InputHandler(lVar17 + 0x28,1,&uStack_5e0);
                  cVar14 = acStack_748[0];
                }
              }
            }
          }
          else if (fVar26 == 4.2039e-45) {
            if (*(byte *)((int64_t)param_1 + 0x3c4) < 0x20) {
              *(short *)((int64_t)param_1 +
                        (uint64_t)*(byte *)((int64_t)param_1 + 0x3c4) * 2 + 900) =
                   SUB42(pfVar13[7],0);
              *(char *)((int64_t)param_1 + 0x3c4) = *(char *)((int64_t)param_1 + 0x3c4) + '\x01';
            }
            goto LAB_180583e24;
          }
          iVar10 = iStack_740;
          if ((fVar26 == 8.40779e-45) || (fVar26 == 5.60519e-45)) {
            if (-1 < iStack_740) {
              pfStack_778 = (float *)CONCAT71(pfStack_778._1_7_,*(int8_t *)(pfVar13 + 9));
              FUN_180586470(param_1,pfVar1,iStack_740,pfVar13[7]);
            }
          }
          else if (fVar26 != 9.80909e-45) {
            if (-1 < iStack_740) {
              uStack_4f8 = *(uint64_t *)pfVar1;
              uStack_4f0 = *(uint64_t *)(pfVar13 + -4);
              pfVar12 = (float *)FUN_180588680(param_1,auStack_408);
              fStack_660 = -pfVar12[2];
              fStack_664 = -pfVar12[1];
              fVar29 = *pfVar12;
              fStack_668 = -fVar29;
              uStack_65c = 0x7f7fffff;
              uStack_4fc = 0x7f7fffff;
              uStack_518 = 0;
              uStack_510 = 0x7f7fffff3f800000;
              fStack_528 = -fStack_664;
              fVar25 = fStack_528 * fStack_528 + fVar29 * fVar29;
              auVar24 = rsqrtss(ZEXT416((uint)(fVar29 * fVar29)),ZEXT416((uint)fVar25));
              fVar27 = auVar24._0_4_;
              fVar27 = fVar27 * 0.5 * (3.0 - fVar25 * fVar27 * fVar27);
              fStack_528 = fVar27 * fStack_528;
              fStack_524 = -(fVar27 * fVar29);
              uStack_520 = 0;
              fStack_504 = -fStack_528;
              uStack_500 = 0;
              fStack_508 = fStack_524;
              FUN_1804ebb80(param_1[2],iVar10,&fStack_528,1);
            }
            if (fVar26 == 2.8026e-45) {
              FUN_1805815f0(param_1,auStack_4e0,param_1 + 0xd);
              fVar29 = *(float *)(*(int64_t *)(param_1[2] + 0x18) + 0x3ec4);
              bVar6 = fStack_4d8 < fVar29;
              if ((!bVar6) && (fStack_6e0 < fVar29)) {
                uStack_4a8 = 0;
                uStack_4a0 = 0x7f7fffff3f800000;
                fStack_488 = 0.0;
                uStack_498 = 0;
                uStack_490 = 0;
                piStack_770 = (int *)CONCAT71(piStack_770._1_7_,bVar6);
                pfStack_778 = (float *)CONCAT44(pfStack_778._4_4_,0x31b789);
                cStack_484 = bVar6;
                PhysicsSystem_JointManager(*(int64_t *)(param_1[2] + 0x18),auStack_4c8);
                fVar27 = fStack_488;
                if (cStack_484 == '\0') {
                  fVar27 = 0.0;
                }
                if (fVar27 < fVar29) {
                  uStack_658 = uStack_6e8;
                  uStack_654 = uStack_6e4;
                  uStack_64c = 0x7f7fffff;
                  lVar17 = param_1[2];
                  puStack_228 = &memory_allocator_3480_ptr;
                  puStack_220 = auStack_210;
                  auStack_210[0] = 0;
                  uStack_218 = 0x18;
                  fStack_650 = fVar29;
                  uVar23 = strcpy_s(auStack_210,0x40,&ui_system_data_1688_ptr);
                  uVar11 = FUN_1800c17c0(uVar23,&puStack_228);
                  FUN_1804eb8d0(lVar17,uVar11,&uStack_658,&system_data_01d0);
                  puStack_228 = &system_state_ptr;
                }
              }
            }
            else {
              lVar17 = *(int64_t *)
                        (render_system_memory +
                        (int64_t)
                        *(int *)((int64_t)*(int *)(param_1[0x1e] + 0x34) * 0x68 +
                                 *(int64_t *)(render_system_data_memory + 0x38) + 100) * 8);
              piVar18 = (int *)(lVar17 + (int64_t)(int)pfVar13[6] * 0x28);
              iVar10 = *piVar18;
              if (iVar10 < 0) {
                piVar18 = (int *)((int64_t)*(int *)(*(int64_t *)(render_system_data_memory + 0x28) + 100) *
                                  0x28 + lVar17);
                iVar10 = *piVar18;
              }
              if (iVar10 != -1) {
                pfVar12 = (float *)FUN_180588680(param_1,auStack_3f8);
                fVar27 = *pfVar12 * pfVar13[-2] + pfVar12[1] * pfVar13[-1];
                fVar29 = *pfVar13;
                fVar27 = (fVar29 + fVar29) * pfVar12[2] + fVar27 + fVar27;
                fStack_640 = pfVar12[2] - fVar27 * fVar29;
                fStack_644 = pfVar12[1] - fVar27 * pfVar13[-1];
                fStack_648 = *pfVar12 - fVar27 * pfVar13[-2];
                uStack_63c = 0x7f7fffff;
                fStack_630 = fStack_640 * 0.25 + pfVar13[-4];
                fStack_634 = fStack_644 * 0.25 + pfVar13[-5];
                fStack_638 = fStack_648 * 0.25 + *pfVar1;
                uStack_62c = 0x7f7fffff;
                FUN_1804eb8d0(param_1[2],*piVar18,&fStack_638,&fStack_648);
              }
            }
          }
          if (cVar14 != '\0') {
            if (fVar26 != 9.80909e-45) {
              if ((*(uint64_t *)
                    ((int64_t)*(int *)(param_1[0x1e] + 0xf0) * 0xa0 + 0x50 +
                    *(int64_t *)(param_1[0x1e] + 0xd0)) & 0x6000) != 0) {
                if (iStack_738 == 1) {
                  fVar29 = pfVar13[7];
                }
                else {
                  fVar29 = -NAN;
                }
                FUN_180585e40(param_1,fVar29,pfVar1);
              }
              if ((-1 < (int)param_1[0x54]) &&
                 ((fVar26 != 8.40779e-45 ||
                  ((*(uint64_t *)
                     ((int64_t)*(int *)(param_1[0x1e] + 0xf0) * 0xa0 + 0x50 +
                     *(int64_t *)(param_1[0x1e] + 0xd0)) & 0x5000000000) != 0)))) {
                pfStack_778 = (float *)SystemCore_MemoryManager;
                DataStructureManager(alStack_1a8,0x30,4,FUN_1801c2890);
                iStack_e8 = 0;
                puStack_258 = &ui_system_data_1808_ptr;
                puStack_250 = auStack_240;
                auStack_240[0] = 0;
                uStack_248 = 9;
                strcpy_s(auStack_240,0xb,&ui_system_data_1672_ptr);
                lVar17 = (int64_t)iStack_e8;
                puVar16 = &system_buffer_ptr;
                if (puStack_250 != (void *)0x0) {
                  puVar16 = puStack_250;
                }
                (**(code **)(alStack_1a8[lVar17 * 6] + 0x10))(alStack_1a8 + lVar17 * 6,puVar16);
                afStack_188[lVar17 * 0xc] = -NAN;
                afStack_188[lVar17 * 0xc + 1] = 1.0;
                auStack_180[lVar17 * 0x30] = 0;
                iStack_e8 = iStack_e8 + 1;
                puStack_258 = &system_state_ptr;
                lVar17 = param_1[0x1e];
                if (*(int *)((int64_t)*(int *)(lVar17 + 0xf0) * 0xa0 + 0x5c +
                            *(int64_t *)(lVar17 + 0xd0)) == 0x12) {
                  fVar26 = *(float *)((int64_t)param_1 + 0x5c) -
                           *(float *)((int64_t)param_1 + 0x6c);
                  fVar29 = *(float *)(param_1 + 0xb) - *(float *)(param_1 + 0xd);
                  fVar26 = SQRT(fVar29 * fVar29 + fVar26 * fVar26 +
                                (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xe)) *
                                (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xe))) *
                           (1.0 / fStack_734) * 0.033333335;
                  if (1.0 <= fVar26) {
                    fVar26 = 1.0;
                  }
                  puStack_278 = &ui_system_data_1856_ptr;
                  puStack_270 = auStack_260;
                  auStack_260[0] = 0;
                  uStack_268 = 5;
                  strcpy_s(auStack_260,7,&ui_system_data_1664_ptr);
                  lVar17 = (int64_t)iStack_e8;
                  puVar16 = &system_buffer_ptr;
                  if (puStack_270 != (void *)0x0) {
                    puVar16 = puStack_270;
                  }
                  (**(code **)(alStack_1a8[lVar17 * 6] + 0x10))(alStack_1a8 + lVar17 * 6,puVar16);
                  afStack_188[lVar17 * 0xc] = -NAN;
                  afStack_188[lVar17 * 0xc + 1] = fVar26;
                  auStack_180[lVar17 * 0x30] = 1;
                  iStack_e8 = iStack_e8 + 1;
                  puStack_278 = &system_state_ptr;
                  lVar17 = param_1[0x1e];
                }
                fStack_6f8 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xc);
                fStack_6fc = *(float *)((int64_t)param_1 + 0x7c) +
                             *(float *)((int64_t)param_1 + 0x5c);
                fStack_700 = *(float *)(param_1 + 0xf) + *(float *)(param_1 + 0xb);
                uStack_6f4 = 0x7f7fffff;
                plStack_768 = alStack_1a8;
                pfStack_778 = &fStack_700;
                FUN_1804f8630(param_1[2],(int)param_1[0x54],lVar17,pfVar13[6]);
                SystemDataValidator(alStack_1a8,0x30,4,SystemCore_MemoryManager);
              }
            }
            break;
          }
          uVar19 = (uint64_t)uStack_73c;
        }
        uVar22 = uVar22 + 1;
        pfVar13 = pfVar13 + 0x10;
      } while ((int64_t)uVar22 < lStack_628);
    }
    *(int32_t *)((int64_t)param_1 + 0xbd4) = 0;
    if (((((*(char *)((int64_t)param_1 + 0x3d2) != '\0') &&
          (pfVar13 = (float *)(**(code **)(*(int64_t *)param_1[0x1d] + 0xa0))
                                        ((int64_t *)param_1[0x1d],auStack_3e8),
          ABS(*pfVar13) < 0.01)) && (ABS(pfVar13[1]) < 0.01)) &&
        ((ABS(pfVar13[2]) < 0.01 &&
         (pfVar13 = (float *)(**(code **)(*(int64_t *)param_1[0x1d] + 0xb0))
                                       ((int64_t *)param_1[0x1d],auStack_3d8), ABS(*pfVar13) < 0.01
         )))) && ((ABS(pfVar13[1]) < 0.01 && (ABS(pfVar13[2]) < 0.01)))) {
      FUN_1805828f0(param_1);
      goto LAB_180584d0b;
    }
    if (cVar14 != '\0') goto LAB_180584d0b;
  }
  if (*(char *)((int64_t)param_1 + 0x3d2) == '\0') {
    FUN_180585590(param_1);
  }
LAB_180584d0b:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_d8 ^ (uint64_t)auStack_798);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



