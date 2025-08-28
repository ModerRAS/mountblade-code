#include "TaleWorlds.Native.Split.h"

// 99_part_09_part077_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805f0650(longlong param_1,longlong param_2)
void FUN_1805f0650(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int iVar2;
  uint64_t *puVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int iVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  float *pfVar16;
  float *pfVar17;
  int32_t *puVar18;
  longlong lVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  uint64_t *puVar24;
  longlong lVar25;
  code *pcVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  float *pfVar30;
  ulonglong uVar31;
  uint64_t *puVar32;
  float fVar33;
  float fVar34;
  float extraout_XMM0_Da;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int8_t auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  int8_t auStack_aa8 [32];
  char cStack_a88;
  float fStack_a78;
  float fStack_a74;
  float fStack_a70;
  int32_t uStack_a6c;
  float fStack_a68;
  float fStack_a64;
  float fStack_a60;
  float fStack_a5c;
  float fStack_a58;
  float fStack_a54;
  float fStack_a50;
  int32_t uStack_a4c;
  float fStack_a48;
  float fStack_a44;
  float fStack_a40;
  int32_t uStack_a3c;
  uint64_t uStack_a38;
  uint64_t uStack_a30;
  float fStack_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  float fStack_a18;
  float fStack_a14;
  float fStack_a10;
  float fStack_a0c;
  uint64_t uStack_a08;
  uint64_t uStack_a00;
  uint64_t uStack_9f8;
  uint64_t uStack_9f0;
  longlong lStack_9e8;
  uint64_t uStack_9e0;
  int32_t uStack_9d8;
  uint64_t uStack_9d4;
  int32_t uStack_9cc;
  float fStack_9c8;
  float fStack_9c4;
  float fStack_9c0;
  int32_t uStack_9bc;
  float fStack_9b8;
  float fStack_9b4;
  float fStack_9b0;
  int32_t uStack_9ac;
  float fStack_9a8;
  float fStack_9a4;
  float fStack_9a0;
  int32_t uStack_99c;
  float fStack_998;
  float fStack_994;
  float fStack_990;
  int32_t uStack_98c;
  float fStack_988;
  float fStack_984;
  float fStack_980;
  int32_t uStack_97c;
  float fStack_978;
  float fStack_974;
  float fStack_970;
  int32_t uStack_96c;
  float fStack_968;
  float fStack_964;
  float fStack_960;
  float fStack_95c;
  float fStack_958;
  float fStack_954;
  float fStack_950;
  int32_t uStack_94c;
  float fStack_948;
  float fStack_944;
  float fStack_940;
  uint uStack_93c;
  float fStack_938;
  float fStack_934;
  float fStack_930;
  int32_t uStack_92c;
  float fStack_928;
  float fStack_924;
  float fStack_920;
  float fStack_91c;
  uint64_t uStack_908;
  uint64_t uStack_900;
  uint64_t uStack_8f8;
  uint64_t uStack_8f0;
  float fStack_8e8;
  float fStack_8e4;
  float fStack_8e0;
  float fStack_8dc;
  float fStack_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  int8_t auStack_8c8 [4];
  int8_t auStack_8c4 [4];
  int8_t auStack_8c0 [4];
  int8_t auStack_8bc [4];
  int8_t auStack_8b8 [8];
  longlong lStack_8b0;
  int8_t auStack_8a8 [4];
  int8_t auStack_8a4 [12];
  float fStack_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  float fStack_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  float fStack_878;
  float fStack_874;
  float fStack_870;
  float fStack_868;
  float fStack_864;
  float fStack_860;
  float fStack_858;
  float fStack_854;
  float fStack_850;
  float fStack_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  float fStack_838;
  float fStack_834;
  float fStack_830;
  int32_t uStack_82c;
  float fStack_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  float fStack_818;
  float fStack_814;
  float fStack_810;
  uint uStack_808;
  uint uStack_804;
  uint uStack_800;
  uint uStack_7fc;
  uint uStack_7f8;
  uint uStack_7f4;
  uint uStack_7f0;
  uint uStack_7ec;
  int32_t uStack_7e8;
  int32_t uStack_7e4;
  int32_t uStack_7e0;
  int32_t uStack_7dc;
  int32_t uStack_7d8;
  int32_t uStack_7d4;
  int32_t uStack_7d0;
  int32_t uStack_7cc;
  int32_t uStack_7c8;
  int32_t uStack_7c4;
  int32_t uStack_7c0;
  int32_t uStack_7bc;
  int32_t uStack_7b8;
  int32_t uStack_7b4;
  int32_t uStack_7b0;
  int32_t uStack_7ac;
  int32_t uStack_7a8;
  int32_t uStack_7a4;
  int32_t uStack_7a0;
  int32_t uStack_79c;
  int32_t uStack_798;
  int32_t uStack_794;
  int32_t uStack_790;
  int32_t uStack_78c;
  float fStack_788;
  float fStack_784;
  float fStack_780;
  int32_t uStack_77c;
  float fStack_778;
  float fStack_774;
  float fStack_770;
  int32_t uStack_76c;
  float fStack_768;
  float fStack_764;
  float fStack_760;
  int32_t uStack_75c;
  float fStack_758;
  float fStack_754;
  float fStack_750;
  int32_t uStack_74c;
  uint64_t uStack_748;
  uint64_t uStack_740;
  uint64_t uStack_738;
  uint64_t uStack_730;
  int32_t uStack_728;
  int32_t uStack_724;
  int32_t uStack_720;
  int32_t uStack_71c;
  int32_t uStack_718;
  int32_t uStack_714;
  int32_t uStack_710;
  int32_t uStack_70c;
  uint64_t uStack_708;
  uint64_t uStack_700;
  float fStack_6f8;
  float fStack_6f4;
  float fStack_6f0;
  int32_t uStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  uint64_t uStack_6d8;
  uint64_t uStack_6d0;
  int32_t uStack_6c8;
  int32_t uStack_6c4;
  int32_t uStack_6c0;
  int32_t uStack_6bc;
  float fStack_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float fStack_6a0;
  uint uStack_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  float fStack_680;
  int32_t uStack_67c;
  float fStack_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float fStack_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float fStack_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  uint uStack_648;
  uint uStack_644;
  uint uStack_640;
  uint uStack_63c;
  uint uStack_638;
  uint uStack_634;
  uint uStack_630;
  uint uStack_62c;
  uint uStack_628;
  uint uStack_624;
  uint uStack_620;
  uint uStack_61c;
  uint uStack_618;
  uint uStack_614;
  uint uStack_610;
  uint uStack_60c;
  float fStack_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  uint uStack_5ec;
  int32_t uStack_5e8;
  int32_t uStack_5e4;
  int32_t uStack_5e0;
  int32_t uStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  int32_t uStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  int32_t uStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  uint uStack_58c;
  float fStack_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  float fStack_570;
  int32_t uStack_56c;
  int8_t auStack_568 [16];
  float fStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  int8_t auStack_548 [16];
  int8_t auStack_538 [16];
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  int8_t auStack_508 [16];
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  int8_t auStack_438 [16];
  uint uStack_428;
  uint uStack_424;
  uint uStack_420;
  uint uStack_41c;
  uint uStack_418;
  uint uStack_414;
  uint uStack_410;
  uint uStack_40c;
  uint uStack_408;
  uint uStack_404;
  uint uStack_400;
  uint uStack_3fc;
  uint uStack_3f8;
  uint uStack_3f4;
  uint uStack_3f0;
  uint uStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  uint uStack_3cc;
  uint uStack_3c8;
  uint uStack_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  uint uStack_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  int8_t auStack_3a8 [32];
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  uint uStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  int8_t auStack_338 [32];
  int8_t auStack_318 [32];
  int8_t auStack_2f8 [32];
  int8_t auStack_2d8 [32];
  int8_t auStack_2b8 [32];
  int8_t auStack_298 [32];
  int8_t auStack_278 [32];
  int8_t auStack_258 [32];
  int8_t auStack_238 [32];
  int8_t auStack_218 [48];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  uint uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  float afStack_128 [16];
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_aa8;
  lVar23 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x168);
  lStack_9e8 = param_2;
  if (lVar23 != 0) {
    if ((*(float *)(lVar23 + 0x2c0) != 0.0) ||
       (0.06666667 < *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20) + 0x60))) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x01';
    }
    uStack_908 = *(uint64_t *)(lVar23 + 0x70);
    uStack_900 = *(uint64_t *)(lVar23 + 0x78);
    lVar28 = *(longlong *)(lVar23 + 0x260);
    uStack_8f8 = *(uint64_t *)(lVar23 + 0x80);
    uStack_8f0 = *(uint64_t *)(lVar23 + 0x88);
    lVar22 = *(longlong *)(lVar28 + 0x210);
    fStack_8e8 = *(float *)(lVar23 + 0x90);
    fStack_8e4 = *(float *)(lVar23 + 0x94);
    fStack_8e0 = *(float *)(lVar23 + 0x98);
    fStack_8dc = *(float *)(lVar23 + 0x9c);
    fStack_8d8 = *(float *)(lVar23 + 0xa0);
    fStack_8d4 = *(float *)(lVar23 + 0xa4);
    fStack_8d0 = *(float *)(lVar23 + 0xa8);
    fStack_8cc = *(float *)(lVar23 + 0xac);
    cStack_a88 = cVar10;
    lStack_8b0 = lVar22;
    FUN_180084ae0(&uStack_908);
    FUN_18063b470(&fStack_968,&uStack_908);
    fVar37 = fStack_95c;
    fVar46 = fStack_960;
    fVar44 = fStack_964;
    fVar38 = fStack_968;
    puVar15 = (uint64_t *)0x0;
    fStack_888 = fStack_8d8;
    fStack_884 = fStack_8d4;
    fStack_880 = fStack_8d0;
    fStack_87c = fStack_8cc;
    fStack_898 = fStack_968;
    fStack_894 = fStack_964;
    fStack_890 = fStack_960;
    fStack_88c = fStack_95c;
    if (*(char *)(param_1 + 0xd0) == '\0') {
      puVar21 = (uint *)((longlong)*(char *)(lVar22 + 0x2582) * 0x100 + *(longlong *)(lVar28 + 0x18)
                        );
      do {
        LOCK();
        uVar11 = *puVar21;
        *puVar21 = *puVar21 | 1;
        UNLOCK();
      } while ((uVar11 & 1) != 0);
      fStack_a18 = (float)puVar21[1];
      fStack_a14 = (float)puVar21[2];
      fStack_a10 = (float)puVar21[3];
      fStack_a0c = (float)puVar21[4];
      fVar43 = (float)puVar21[5];
      fVar41 = (float)puVar21[6];
      fVar51 = (float)puVar21[7];
      fStack_a5c = (float)puVar21[8];
      *puVar21 = 0;
      fStack_a68 = fVar43;
      fStack_a64 = fVar41;
      fStack_a60 = fVar51;
      fStack_668 = fStack_a18;
      fStack_664 = fStack_a14;
      fStack_660 = fStack_a10;
      fStack_65c = fStack_a0c;
      fStack_658 = fVar43;
      fStack_654 = fVar41;
      fStack_650 = fVar51;
      fStack_64c = fStack_a5c;
      fStack_458 = fStack_a18;
      fStack_454 = fStack_a14;
      fStack_450 = fStack_a10;
      fStack_44c = fStack_a0c;
      fStack_448 = fVar43;
      fStack_444 = fVar41;
      fStack_440 = fVar51;
      fStack_43c = fStack_a5c;
      fStack_1e8 = fStack_a18;
      fStack_1e4 = fStack_a14;
      fStack_1e0 = fStack_a10;
      fStack_1dc = fStack_a0c;
      fStack_1d8 = fVar43;
      fStack_1d4 = fVar41;
      fStack_1d0 = fVar51;
      fStack_1cc = fStack_a5c;
      puVar14 = (uint64_t *)FUN_18063b5f0(&fStack_878,&fStack_668);
      fVar38 = *(float *)(lVar22 + 0x255c);
      fVar44 = *(float *)(lVar22 + 0x2560);
      fVar46 = *(float *)(lVar22 + 0x2558);
      fVar37 = *(float *)(lVar22 + 0x256c);
      fStack_6e8 = fVar46 * fStack_878 + fVar43 + fVar38 * fStack_868 + fVar44 * fStack_858;
      fStack_6e4 = fVar46 * fStack_874 + fVar41 + fVar38 * fStack_864 + fVar44 * fStack_854;
      fVar43 = *(float *)(lVar22 + 0x2568);
      fVar41 = *(float *)(lVar22 + 0x2570);
      fStack_6e0 = fVar46 * fStack_870 + fVar51 + fVar38 * fStack_860 + fVar44 * fStack_850;
      auVar39 = ZEXT416((uint)(fVar37 * fStack_860));
      uStack_a38 = CONCAT44(fStack_a14,fStack_a18);
      uStack_a30 = CONCAT44(fStack_a0c,fStack_a10);
      uStack_a08 = CONCAT44(fStack_a14,fStack_a18);
      uStack_a00 = CONCAT44(fStack_a0c,fStack_a10);
      uStack_9f8 = CONCAT44(fVar43 * fStack_874 + fStack_a64 + fVar37 * fStack_864 +
                            fVar41 * fStack_854,
                            fVar43 * fStack_878 + fStack_a68 + fVar37 * fStack_868 +
                            fVar41 * fStack_858);
      uStack_9f0 = CONCAT44(fStack_a5c,
                            fVar43 * fStack_870 + fStack_a60 + fVar37 * fStack_860 +
                            fVar41 * fStack_850);
      fStack_6dc = fStack_a5c;
      fVar38 = fStack_968;
      fVar44 = fStack_964;
      fVar46 = fStack_960;
      fVar37 = fStack_95c;
    }
    else {
      FUN_1801c13c0(lVar23 + 0x70,&fStack_6e8,param_1 + 0x80);
      uVar13 = FUN_180535610(lVar23 + 0x70,auStack_218,
                             SQRT(*(float *)(lVar23 + 0x70) * *(float *)(lVar23 + 0x70) +
                                  *(float *)(lVar23 + 0x74) * *(float *)(lVar23 + 0x74) +
                                  *(float *)(lVar23 + 0x78) * *(float *)(lVar23 + 0x78)));
      puVar14 = (uint64_t *)FUN_18063b470(&fStack_678,uVar13);
      fVar43 = *(float *)(param_1 + 0x70);
      fVar41 = *(float *)(param_1 + 0x74);
      fVar51 = *(float *)(param_1 + 0x78);
      fVar50 = *(float *)(param_1 + 0x7c);
      puVar15 = (uint64_t *)0x0;
      auVar39._0_4_ = fStack_66c * fVar51;
      auVar39._4_4_ = fStack_674 * fVar50;
      auVar39._8_4_ = fStack_670 * fVar41;
      auVar39._12_4_ = fStack_674 * fVar41;
      uStack_9f8 = CONCAT44(fStack_6e4,fStack_6e8);
      uStack_9f0 = CONCAT44(fStack_6dc,fStack_6e0);
      fVar40 = fStack_670 * fVar50 * -1.0 + fVar43 * fStack_674 * -1.0 +
               fStack_678 * fVar41 + auVar39._0_4_;
      fVar41 = fStack_66c * fVar41 * -1.0 + fVar43 * fStack_670 * -1.0 +
               fStack_678 * fVar51 + auVar39._4_4_;
      fVar42 = fStack_674 * fVar51 * -1.0 + fVar43 * fStack_66c * -1.0 +
               fStack_678 * fVar50 + auVar39._8_4_;
      fVar43 = fStack_66c * fVar50 * 1.0 + fVar43 * fStack_678 * 1.0 +
               fStack_670 * fVar51 + auVar39._12_4_;
      uStack_a38 = CONCAT44(fVar40,fVar43);
      uStack_a30 = CONCAT44(fVar42,fVar41);
      uStack_a08 = CONCAT44(fVar40,fVar43);
      uStack_a00 = CONCAT44(fVar42,fVar41);
    }
    bVar9 = false;
    if ((cVar10 != '\0') && (0.2 < *(float *)(param_1 + 0x1e0))) {
      bVar9 = true;
      *(int16_t *)(param_1 + 0xd1) = 0x101;
      *(int *)(param_1 + 0x1e0) = (int)puVar15;
      cStack_a88 = '\0';
    }
    puVar24 = puVar15;
    fStack_a28 = fStack_6e8;
    fStack_a24 = fStack_6e4;
    fStack_a20 = fStack_6e0;
    fStack_a1c = fStack_6dc;
    if (*(char *)(param_1 + 0xd3) != '\0') {
      puVar3 = *(uint64_t **)(param_1 + 0xd8);
      if ((void *)*puVar3 == &UNK_180a3beb8) {
        puVar32 = (uint64_t *)((ulonglong)puVar15 & 0xffffffff);
        puVar14 = (uint64_t *)((longlong)(puVar3[10] - puVar3[9]) >> 3);
        if (puVar14 != (uint64_t *)0x0) {
          do {
            plVar27 = *(longlong **)(puVar3[9] + (longlong)puVar15 * 8);
            uStack_9e0 = 0;
            uStack_9d8 = 0;
            (**(code **)(*plVar27 + 0x148))(plVar27,&uStack_9e0,1);
            plVar27 = *(longlong **)(puVar3[9] + (longlong)puVar15 * 8);
            uStack_9d4 = 0;
            uStack_9cc = 0;
            (**(code **)(*plVar27 + 0x138))(plVar27,&uStack_9d4,1);
            lVar22 = puVar3[5];
            lVar19 = (longlong)puVar15 * 0x60;
            puVar24 = (uint64_t *)0x0;
            puVar15 = (uint64_t *)(ulonglong)((int)puVar32 + 1);
            *(uint64_t *)(lVar19 + lVar22) = 0;
            *(int32_t *)(lVar19 + 8 + lVar22) = 0;
            *(uint64_t *)(lVar19 + 0x10 + lVar22) = 0;
            *(int32_t *)(lVar19 + 0x18 + lVar22) = 0;
            puVar14 = (uint64_t *)((longlong)(puVar3[10] - puVar3[9]) >> 3);
            puVar32 = puVar15;
          } while (puVar15 < puVar14);
        }
      }
      else {
        puVar14 = (uint64_t *)(**(code **)((void *)*puVar3 + 0x68))(puVar3);
        puVar24 = (uint64_t *)0x0;
      }
      cStack_a88 = '\0';
      bVar9 = true;
      *(int8_t *)(param_1 + 0xd3) = 0;
    }
    if (*(char *)(param_1 + 0xd1) != '\0') {
      if (*(char *)(param_1 + 0xd2) != '\0') {
        puVar21 = (uint *)((longlong)*(char *)(param_1 + 0x68) * 0x100 +
                          *(longlong *)(param_2 + 0x18));
        do {
          LOCK();
          uVar11 = *puVar21;
          *puVar21 = *puVar21 | 1;
          UNLOCK();
        } while ((uVar11 & 1) != 0);
        uStack_648 = puVar21[1];
        uStack_644 = puVar21[2];
        uStack_640 = puVar21[3];
        uStack_63c = puVar21[4];
        uStack_638 = puVar21[5];
        uStack_634 = puVar21[6];
        uStack_630 = puVar21[7];
        uStack_62c = puVar21[8];
        *puVar21 = (uint)puVar24;
        uStack_428 = uStack_648;
        uStack_424 = uStack_644;
        uStack_420 = uStack_640;
        uStack_41c = uStack_63c;
        uStack_418 = uStack_638;
        uStack_414 = uStack_634;
        uStack_410 = uStack_630;
        uStack_40c = uStack_62c;
        uStack_148 = uStack_648;
        uStack_144 = uStack_644;
        uStack_140 = uStack_640;
        uStack_13c = uStack_63c;
        uStack_138 = uStack_638;
        uStack_134 = uStack_634;
        uStack_130 = uStack_630;
        uStack_12c = uStack_62c;
        uVar13 = FUN_180300bf0(&uStack_648,auStack_338,param_1 + 0x90);
        puVar15 = (uint64_t *)FUN_180300b10(&uStack_a38,auStack_318,uVar13);
        uVar13 = puVar15[1];
        *(uint64_t *)(param_1 + 0x90) = *puVar15;
        *(uint64_t *)(param_1 + 0x98) = uVar13;
        uVar13 = puVar15[3];
        *(uint64_t *)(param_1 + 0xa0) = puVar15[2];
        *(uint64_t *)(param_1 + 0xa8) = uVar13;
        puVar21 = (uint *)((longlong)*(char *)(param_1 + 100) * 0x100 +
                          *(longlong *)(param_2 + 0x18));
        do {
          LOCK();
          uVar11 = *puVar21;
          *puVar21 = *puVar21 | 1;
          UNLOCK();
        } while ((uVar11 & 1) != 0);
        uStack_628 = puVar21[1];
        uStack_624 = puVar21[2];
        uStack_620 = puVar21[3];
        uStack_61c = puVar21[4];
        uStack_618 = puVar21[5];
        uStack_614 = puVar21[6];
        uStack_610 = puVar21[7];
        uStack_60c = puVar21[8];
        *puVar21 = 0;
        uStack_408 = uStack_628;
        uStack_404 = uStack_624;
        uStack_400 = uStack_620;
        uStack_3fc = uStack_61c;
        uStack_3f8 = uStack_618;
        uStack_3f4 = uStack_614;
        uStack_3f0 = uStack_610;
        uStack_3ec = uStack_60c;
        uStack_1c8 = uStack_628;
        uStack_1c4 = uStack_624;
        uStack_1c0 = uStack_620;
        uStack_1bc = uStack_61c;
        uStack_1b8 = uStack_618;
        uStack_1b4 = uStack_614;
        uStack_1b0 = uStack_610;
        uStack_1ac = uStack_60c;
        uVar13 = FUN_180300bf0(&uStack_628,auStack_2f8,param_1 + 0xb0);
        puVar14 = (uint64_t *)FUN_180300b10(&uStack_a38,auStack_2d8,uVar13);
        uVar13 = puVar14[1];
        *(uint64_t *)(param_1 + 0xb0) = *puVar14;
        *(uint64_t *)(param_1 + 0xb8) = uVar13;
        uVar13 = puVar14[3];
        *(uint64_t *)(param_1 + 0xc0) = puVar14[2];
        *(uint64_t *)(param_1 + 200) = uVar13;
        *(int8_t *)(param_1 + 0xd2) = 0;
        fVar38 = fStack_968;
        fVar44 = fStack_964;
        fVar46 = fStack_960;
        fVar37 = fStack_95c;
      }
      pfVar17 = (float *)(param_1 + 0x90);
      *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) * 0.9;
      *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0xa8) * 0.9;
      *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) * 0.9;
      *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xc0) * 0.9;
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) * 0.9;
      *(float *)(param_1 + 200) = *(float *)(param_1 + 200) * 0.9;
      fVar43 = *pfVar17;
      fVar41 = *(float *)(param_1 + 0x94);
      fVar51 = *(float *)(param_1 + 0x98);
      fVar50 = *(float *)(param_1 + 0x9c);
      fVar40 = fVar51 * 0.0;
      fVar42 = fVar50 * 0.0;
      fVar36 = fVar42 + fVar41 * 0.0;
      fVar35 = fVar40 + fVar43 * 1.0 + fVar36;
      afStack_128[8] = 1.0;
      afStack_128[9] = 1.0;
      afStack_128[10] = 1.0;
      afStack_128[0xb] = 1.0;
      afStack_128[0xc] = -1.0;
      afStack_128[0xd] = -1.0;
      afStack_128[0xe] = -1.0;
      afStack_128[0xf] = -1.0;
      auVar6._4_4_ = fVar36;
      auVar6._0_4_ = fVar35;
      auVar6._8_4_ = fVar40 + fVar40;
      auVar6._12_4_ = fVar42 + fVar42;
      uVar11 = movmskps((int)puVar14,auVar6);
      uVar31 = (ulonglong)(uVar11 & 1);
      iVar12 = (uVar11 & 1) * 2;
      fVar40 = afStack_128[uVar31 * 4 + 8];
      fVar42 = afStack_128[uVar31 * 4 + 9];
      fVar36 = afStack_128[uVar31 * 4 + 10];
      fVar49 = afStack_128[uVar31 * 4 + 0xb];
      if (0.9995 < ABS(fVar35)) {
        fStack_358 = fVar40 * 1.0 * 0.9 + fVar43 * 0.100000024;
        fStack_354 = fVar42 * 0.0 * 0.9 + fVar41 * 0.100000024;
        fStack_350 = fVar36 * 0.0 * 0.9 + fVar51 * 0.100000024;
        fStack_34c = fVar49 * 0.0 * 0.9 + fVar50 * 0.100000024;
        fVar43 = fStack_34c * fStack_34c + fStack_358 * fStack_358;
        fVar41 = fStack_350 * fStack_350 + fStack_354 * fStack_354;
        fVar36 = fVar43 + fStack_354 * fStack_354 + fStack_350 * fStack_350;
        fVar49 = fVar41 + fStack_358 * fStack_358 + fStack_34c * fStack_34c;
        auVar5._4_4_ = fVar43 + fVar41 + 1.1754944e-38;
        auVar5._0_4_ = fVar41 + fVar43 + 1.1754944e-38;
        auVar5._8_4_ = fVar36 + 1.1754944e-38;
        auVar5._12_4_ = fVar49 + 1.1754944e-38;
        auVar39 = rsqrtps(auVar39,auVar5);
        fVar51 = auVar39._0_4_;
        fVar50 = auVar39._4_4_;
        fVar40 = auVar39._8_4_;
        fVar42 = auVar39._12_4_;
        fStack_358 = fStack_358 * (3.0 - fVar51 * fVar51 * (fVar41 + fVar43)) * fVar51 * 0.5;
        fStack_354 = fStack_354 * (3.0 - fVar50 * fVar50 * (fVar43 + fVar41)) * fVar50 * 0.5;
        fStack_350 = fStack_350 * (3.0 - fVar40 * fVar40 * fVar36) * fVar40 * 0.5;
        fStack_34c = fStack_34c * (3.0 - fVar42 * fVar42 * fVar49) * fVar42 * 0.5;
      }
      else {
        fVar35 = (float)acosf();
        fVar33 = (float)sinf();
        fVar34 = (float)sinf(fVar35 - fVar35 * 0.9);
        fVar34 = fVar34 * (1.0 / fVar33);
        iVar12 = sinf(fVar35 * 0.9);
        fVar35 = extraout_XMM0_Da * (1.0 / fVar33);
        fStack_358 = fVar34 * fVar43 + fVar35 * fVar40 * 1.0;
        fStack_354 = fVar34 * fVar41 + fVar35 * fVar42 * 0.0;
        fStack_350 = fVar34 * fVar51 + fVar35 * fVar36 * 0.0;
        fStack_34c = fVar34 * fVar50 + fVar35 * fVar49 * 0.0;
      }
      pfVar16 = (float *)(param_1 + 0xb0);
      *pfVar17 = fStack_358;
      *(float *)(param_1 + 0x94) = fStack_354;
      *(float *)(param_1 + 0x98) = fStack_350;
      *(float *)(param_1 + 0x9c) = fStack_34c;
      fVar43 = *pfVar16;
      fVar41 = *(float *)(param_1 + 0xb4);
      fVar51 = *(float *)(param_1 + 0xb8);
      fVar50 = *(float *)(param_1 + 0xbc);
      afStack_128[0] = 1.0;
      afStack_128[1] = 1.0;
      afStack_128[2] = 1.0;
      afStack_128[3] = 1.0;
      fVar40 = fVar51 * 0.0;
      fVar42 = fVar50 * 0.0;
      fVar36 = fVar42 + fVar41 * 0.0;
      fVar35 = fVar40 + fVar43 * 1.0 + fVar36;
      afStack_128[4] = -1.0;
      afStack_128[5] = -1.0;
      afStack_128[6] = -1.0;
      afStack_128[7] = -1.0;
      auVar7._4_4_ = fVar36;
      auVar7._0_4_ = fVar35;
      auVar7._8_4_ = fVar40 + fVar40;
      auVar7._12_4_ = fVar42 + fVar42;
      uVar11 = movmskps(iVar12,auVar7);
      uVar31 = (ulonglong)(uVar11 & 1);
      fVar40 = afStack_128[uVar31 * 4];
      fVar42 = afStack_128[uVar31 * 4 + 1];
      fVar36 = afStack_128[uVar31 * 4 + 2];
      fVar49 = afStack_128[uVar31 * 4 + 3];
      if (0.9995 < ABS(fVar35)) {
        fStack_348 = fVar40 * 1.0 * 0.9 + fVar43 * 0.100000024;
        fStack_344 = fVar42 * 0.0 * 0.9 + fVar41 * 0.100000024;
        fStack_340 = fVar36 * 0.0 * 0.9 + fVar51 * 0.100000024;
        fStack_33c = fVar49 * 0.0 * 0.9 + fVar50 * 0.100000024;
        fVar43 = fStack_33c * fStack_33c + fStack_348 * fStack_348;
        fVar41 = fStack_340 * fStack_340 + fStack_344 * fStack_344;
        fVar36 = fVar43 + fStack_344 * fStack_344 + fStack_340 * fStack_340;
        fVar49 = fVar41 + fStack_348 * fStack_348 + fStack_33c * fStack_33c;
        auVar4._4_4_ = fVar43 + fVar41 + 1.1754944e-38;
        auVar4._0_4_ = fVar41 + fVar43 + 1.1754944e-38;
        auVar4._8_4_ = fVar36 + 1.1754944e-38;
        auVar4._12_4_ = fVar49 + 1.1754944e-38;
        auVar39 = rsqrtps(auVar39,auVar4);
        fVar51 = auVar39._0_4_;
        fVar50 = auVar39._4_4_;
        fVar40 = auVar39._8_4_;
        fVar42 = auVar39._12_4_;
        fStack_348 = fStack_348 * (3.0 - fVar51 * fVar51 * (fVar41 + fVar43)) * fVar51 * 0.5;
        fStack_344 = fStack_344 * (3.0 - fVar50 * fVar50 * (fVar43 + fVar41)) * fVar50 * 0.5;
        fStack_340 = fStack_340 * (3.0 - fVar40 * fVar40 * fVar36) * fVar40 * 0.5;
        fStack_33c = fStack_33c * (3.0 - fVar42 * fVar42 * fVar49) * fVar42 * 0.5;
      }
      else {
        fVar35 = (float)acosf();
        fVar33 = (float)sinf();
        fVar34 = (float)sinf(fVar35 - fVar35 * 0.9);
        fVar34 = fVar34 * (1.0 / fVar33);
        fVar35 = (float)sinf(fVar35 * 0.9);
        fVar35 = fVar35 * (1.0 / fVar33);
        fStack_348 = fVar34 * fVar43 + fVar35 * fVar40 * 1.0;
        fStack_344 = fVar34 * fVar41 + fVar35 * fVar42 * 0.0;
        fStack_340 = fVar34 * fVar51 + fVar35 * fVar36 * 0.0;
        fStack_33c = fVar34 * fVar50 + fVar35 * fVar49 * 0.0;
      }
      *pfVar16 = fStack_348;
      *(float *)(param_1 + 0xb4) = fStack_344;
      *(float *)(param_1 + 0xb8) = fStack_340;
      *(float *)(param_1 + 0xbc) = fStack_33c;
      puVar15 = (uint64_t *)FUN_180300bf0(&uStack_a38,auStack_2b8,pfVar17);
      uStack_a38 = *puVar15;
      uStack_a30 = puVar15[1];
      fStack_a28 = *(float *)(puVar15 + 2);
      fStack_a24 = *(float *)((longlong)puVar15 + 0x14);
      fStack_a20 = *(float *)(puVar15 + 3);
      fStack_a1c = *(float *)((longlong)puVar15 + 0x1c);
      puVar15 = (uint64_t *)FUN_180300bf0(&uStack_a08,auStack_298,pfVar16);
      uStack_a08 = *puVar15;
      uStack_a00 = puVar15[1];
      uStack_9f8 = puVar15[2];
      uStack_9f0 = puVar15[3];
      if (((((ABS(*(float *)(param_1 + 0xa0)) < 0.001) && (ABS(*(float *)(param_1 + 0xa4)) < 0.001))
           && (ABS(*(float *)(param_1 + 0xa8)) < 0.001)) &&
          ((ABS(*(float *)(param_1 + 0xc0)) < 0.001 && (ABS(*(float *)(param_1 + 0xc4)) < 0.001))))
         && ((ABS(*(float *)(param_1 + 200)) < 0.001 &&
             ((cVar10 = FUN_1805f26d0(pfVar17,&system_data_3a10), cVar10 != '\0' &&
              (cVar10 = FUN_1805f26d0(pfVar16,&system_data_3a10), cVar10 != '\0')))))) {
        *(int8_t *)(param_1 + 0xd1) = 0;
        pfVar17[0] = 1.0;
        pfVar17[1] = 0.0;
        *(uint64_t *)(param_1 + 0x98) = 0;
        *(uint64_t *)(param_1 + 0xa0) = 0;
        *(uint64_t *)(param_1 + 0xa8) = 0x3f80000000000000;
        *pfVar16 = 1.0;
        *(int32_t *)(param_1 + 0xb4) = 0;
        *(int32_t *)(param_1 + 0xb8) = 0;
        *(int32_t *)(param_1 + 0xbc) = 0;
        *(uint64_t *)(param_1 + 0xc0) = 0;
        *(uint64_t *)(param_1 + 200) = 0x3f80000000000000;
      }
    }
    if (bVar9) {
      lVar22 = *(longlong *)(param_2 + 0x208);
      cVar10 = '\0';
      fVar43 = fVar37;
      fVar41 = fVar44;
      fVar51 = fVar46;
      fVar50 = fVar44;
      fVar40 = fVar38;
      fVar42 = fVar38;
      fVar36 = fVar38;
      fVar49 = fVar46;
      if ('\0' < *(char *)(lVar22 + 0x148)) {
        do {
          fStack_a0c = fVar49;
          fStack_a10 = fVar36;
          fStack_a14 = fVar42;
          fStack_a18 = fVar40;
          fStack_a5c = fVar50;
          fStack_a60 = fVar51;
          fStack_a64 = fVar41;
          fStack_a68 = fVar43;
          lVar29 = (longlong)cVar10;
          lVar19 = lVar29 * 0x30;
          puVar21 = (uint *)((longlong)*(char *)(lVar19 + *(longlong *)(param_1 + 0x1e8)) * 0x100 +
                            *(longlong *)(lVar28 + 0x18));
          do {
            LOCK();
            uVar11 = *puVar21;
            *puVar21 = *puVar21 | 1;
            UNLOCK();
          } while ((uVar11 & 1) != 0);
          fVar43 = (float)puVar21[1];
          fVar41 = (float)puVar21[2];
          fVar51 = (float)puVar21[3];
          fVar50 = (float)puVar21[4];
          fVar40 = (float)puVar21[5];
          fVar42 = (float)puVar21[6];
          fVar36 = (float)puVar21[7];
          uStack_5ec = puVar21[8];
          *puVar21 = 0;
          lVar25 = *(longlong *)(param_1 + 0x1e8);
          fStack_608 = fVar43;
          fStack_604 = fVar41;
          fStack_600 = fVar51;
          fStack_5fc = fVar50;
          fStack_5f8 = fVar40;
          fStack_5f4 = fVar42;
          fStack_5f0 = fVar36;
          fStack_3e8 = fVar43;
          fStack_3e4 = fVar41;
          fStack_3e0 = fVar51;
          fStack_3dc = fVar50;
          fStack_3d8 = fVar40;
          fStack_3d4 = fVar42;
          fStack_3d0 = fVar36;
          uStack_3cc = uStack_5ec;
          fStack_188 = fVar43;
          fStack_184 = fVar41;
          fStack_180 = fVar51;
          fStack_17c = fVar50;
          fStack_178 = fVar40;
          fStack_174 = fVar42;
          fStack_170 = fVar36;
          uStack_16c = uStack_5ec;
          pfVar16 = (float *)FUN_1801c0fb0(&fStack_608,auStack_568,lVar25 + 0x20 + lVar19);
          pfVar17 = (float *)(lVar19 + 0x10 + lVar25);
          fVar49 = *pfVar17;
          fVar35 = pfVar17[1];
          fVar33 = pfVar17[2];
          fVar34 = pfVar17[3];
          fVar40 = fVar40 + *pfVar16;
          fVar42 = fVar42 + pfVar16[1];
          pfVar30 = (float *)(lVar29 * 0x40 + *(longlong *)(param_1 + 0x108));
          fVar36 = fVar36 + pfVar16[2];
          fVar45 = fVar51 * fVar34 * 1.0 + fVar43 * fVar35 * 1.0 +
                   (fVar49 * fVar41 - fVar50 * fVar33);
          fVar47 = fVar50 * fVar35 * 1.0 + fVar43 * fVar33 * 1.0 +
                   (fVar49 * fVar51 - fVar41 * fVar34);
          fVar48 = fVar41 * fVar33 * 1.0 + fVar43 * fVar34 * 1.0 +
                   (fVar49 * fVar50 - fVar51 * fVar35);
          fVar49 = fVar50 * fVar34 * -1.0 + fVar51 * fVar33 * -1.0 +
                   (fVar49 * fVar43 - fVar41 * fVar35);
          uStack_56c = 0x7f7fffff;
          uStack_9ac = 0x7f7fffff;
          fStack_9b8 = fVar40;
          fStack_9b4 = fVar42;
          fStack_9b0 = fVar36;
          fStack_588 = fVar49;
          fStack_584 = fVar45;
          fStack_580 = fVar47;
          fStack_57c = fVar48;
          fStack_578 = fVar40;
          fStack_574 = fVar42;
          fStack_570 = fVar36;
          fStack_558 = fVar49;
          fStack_554 = fVar45;
          fStack_550 = fVar47;
          fStack_54c = fVar48;
          pfVar17 = (float *)FUN_1801c0fb0(&fStack_588,auStack_548,pfVar30 + 4);
          fVar43 = *pfVar30;
          fVar41 = pfVar30[1];
          fVar51 = pfVar30[2];
          fVar50 = pfVar30[3];
          fStack_9c8 = fVar40 + *pfVar17;
          fStack_9c4 = fVar42 + pfVar17[1];
          fStack_9c0 = fVar36 + pfVar17[2];
          fVar40 = fVar47 * fVar50 * 1.0 + fVar49 * fVar41 * 1.0 +
                   (fVar43 * fVar45 - fVar48 * fVar51);
          fVar42 = fVar48 * fVar41 * 1.0 + fVar49 * fVar51 * 1.0 +
                   (fVar43 * fVar47 - fVar45 * fVar50);
          fVar36 = fVar45 * fVar51 * 1.0 + fVar49 * fVar50 * 1.0 +
                   (fVar43 * fVar48 - fVar47 * fVar41);
          fVar43 = fVar48 * fVar50 * -1.0 + fVar47 * fVar51 * -1.0 +
                   (fVar43 * fVar49 - fVar45 * fVar41);
          uStack_9bc = 0x7f7fffff;
          uStack_82c = 0x7f7fffff;
          fStack_848 = fVar43;
          fStack_844 = fVar40;
          fStack_840 = fVar42;
          fStack_83c = fVar36;
          fStack_838 = fStack_9c8;
          fStack_834 = fStack_9c4;
          fStack_830 = fStack_9c0;
          fStack_478 = fVar43;
          fStack_474 = fVar40;
          fStack_470 = fVar42;
          fStack_46c = fVar36;
          pfVar17 = (float *)FUN_1801c0fb0(&fStack_898,auStack_538,&fStack_838);
          plVar27 = *(longlong **)(param_1 + 0xd8);
          fStack_9a8 = fStack_8d8 + *pfVar17;
          fStack_9a4 = fStack_8d4 + pfVar17[1];
          fStack_9a0 = fStack_8d0 + pfVar17[2];
          fStack_844 = fVar40 * fVar38 * 1.0 + fVar36 * fVar46 * 1.0 +
                       (fVar43 * fVar44 - fVar42 * fVar37);
          fStack_840 = fVar42 * fVar38 * 1.0 + fVar40 * fVar37 * 1.0 +
                       (fVar43 * fVar46 - fVar36 * fVar44);
          fStack_83c = fVar36 * fVar38 * 1.0 + fVar42 * fVar44 * 1.0 +
                       (fVar43 * fVar37 - fVar40 * fVar46);
          fStack_848 = fVar42 * fVar46 * -1.0 + fVar36 * fVar37 * -1.0 +
                       (fVar43 * fVar38 - fVar40 * fVar44);
          uStack_82c = 0x7f7fffff;
          uStack_99c = 0x7f7fffff;
          pcVar26 = *(code **)(*plVar27 + 0x58);
          fStack_838 = fStack_9a8;
          fStack_834 = fStack_9a4;
          fStack_830 = fStack_9a0;
          fStack_528 = fStack_848;
          fStack_524 = fStack_844;
          fStack_520 = fStack_840;
          fStack_51c = fStack_83c;
          puVar18 = (int32_t *)(**(code **)(*plVar27 + 0x10))(plVar27,auStack_8a4,(int)cVar10);
          (*pcVar26)(plVar27,*puVar18,&fStack_848);
          cVar10 = cVar10 + '\x01';
          param_2 = lStack_9e8;
          fVar43 = fStack_a68;
          fVar41 = fStack_a64;
          fVar51 = fStack_a60;
          fVar50 = fStack_a5c;
          fVar40 = fStack_a18;
          fVar42 = fStack_a14;
          fVar36 = fStack_a10;
          fVar49 = fStack_a0c;
        } while (cVar10 < *(char *)(lVar22 + 0x148));
      }
    }
    if (cStack_a88 == '\0') {
      if (*(char *)(param_1 + 0x218) == '\0') {
        *(int8_t *)(param_1 + 0x218) = 1;
        cVar10 = '\0';
        lVar23 = *(longlong *)(param_2 + 0x208);
        if ('\0' < *(char *)(lVar23 + 0x148)) {
          do {
            lVar22 = (longlong)cVar10;
            lVar19 = lVar22 * 0x30;
            puVar21 = (uint *)((longlong)*(char *)(lVar19 + *(longlong *)(param_1 + 0x1e8)) * 0x100
                              + *(longlong *)(lVar28 + 0x18));
            do {
              LOCK();
              uVar11 = *puVar21;
              *puVar21 = *puVar21 | 1;
              UNLOCK();
            } while ((uVar11 & 1) != 0);
            fVar38 = (float)puVar21[1];
            fVar44 = (float)puVar21[2];
            fVar46 = (float)puVar21[3];
            fVar37 = (float)puVar21[4];
            fVar43 = (float)puVar21[5];
            fVar41 = (float)puVar21[6];
            fVar51 = (float)puVar21[7];
            uStack_58c = puVar21[8];
            *puVar21 = 0;
            lVar29 = *(longlong *)(param_1 + 0x1e8);
            fStack_5a8 = fVar38;
            fStack_5a4 = fVar44;
            fStack_5a0 = fVar46;
            fStack_59c = fVar37;
            fStack_598 = fVar43;
            fStack_594 = fVar41;
            fStack_590 = fVar51;
            fStack_388 = fVar38;
            fStack_384 = fVar44;
            fStack_380 = fVar46;
            fStack_37c = fVar37;
            fStack_378 = fVar43;
            fStack_374 = fVar41;
            fStack_370 = fVar51;
            uStack_36c = uStack_58c;
            fStack_1a8 = fVar38;
            fStack_1a4 = fVar44;
            fStack_1a0 = fVar46;
            fStack_19c = fVar37;
            fStack_198 = fVar43;
            fStack_194 = fVar41;
            fStack_190 = fVar51;
            uStack_18c = uStack_58c;
            pfVar16 = (float *)FUN_1801c0fb0(&fStack_5a8,auStack_438,lVar29 + 0x20 + lVar19);
            pfVar17 = (float *)(lVar19 + 0x10 + lVar29);
            fVar50 = *pfVar17;
            fVar40 = pfVar17[1];
            fVar42 = pfVar17[2];
            fVar36 = pfVar17[3];
            fStack_938 = fVar43 + *pfVar16;
            puVar21 = (uint *)(lVar22 * 0x100 + *(longlong *)(param_2 + 0x18));
            fStack_934 = fVar41 + pfVar16[1];
            fStack_930 = fVar51 + pfVar16[2];
            fStack_694 = fVar36 * fVar46 * 1.0 + fVar40 * fVar38 * 1.0 +
                         (fVar50 * fVar44 - fVar42 * fVar37);
            fStack_690 = fVar40 * fVar37 * 1.0 + fVar42 * fVar38 * 1.0 +
                         (fVar50 * fVar46 - fVar36 * fVar44);
            fStack_68c = fVar42 * fVar44 * 1.0 + fVar36 * fVar38 * 1.0 +
                         (fVar50 * fVar37 - fVar40 * fVar46);
            fStack_698 = fVar36 * fVar37 * -1.0 + fVar42 * fVar46 * -1.0 +
                         (fVar50 * fVar38 - fVar40 * fVar44);
            uStack_92c = 0x7f7fffff;
            uStack_67c = 0x7f7fffff;
            do {
              LOCK();
              uVar11 = *puVar21;
              *puVar21 = *puVar21 | 1;
              UNLOCK();
            } while ((uVar11 & 1) != 0);
            puVar21[1] = (uint)fStack_698;
            puVar21[2] = (uint)fStack_694;
            puVar21[3] = (uint)fStack_690;
            puVar21[4] = (uint)fStack_68c;
            puVar21[5] = (uint)fStack_938;
            puVar21[6] = (uint)fStack_934;
            puVar21[7] = (uint)fStack_930;
            puVar21[8] = 0x7f7fffff;
            *puVar21 = 0;
            fStack_688 = fStack_938;
            fStack_684 = fStack_934;
            fStack_680 = fStack_930;
            fStack_368 = fStack_698;
            fStack_364 = fStack_694;
            fStack_360 = fStack_690;
            fStack_35c = fStack_68c;
            FUN_1802feba0(param_2,(longlong)
                                  (ulonglong)(uint)((int)puVar21 - *(int *)(param_2 + 0x18)) >> 8);
            cVar10 = cVar10 + '\x01';
          } while (cVar10 < *(char *)(lVar23 + 0x148));
        }
      }
    }
    else {
      *(int8_t *)(param_1 + 0x218) = 0;
      if (*(longlong *)(param_1 + 0x100) != 0) {
        uStack_748 = *(uint64_t *)(lVar23 + 0x70);
        uStack_740 = *(uint64_t *)(lVar23 + 0x78);
        uStack_738 = *(uint64_t *)(lVar23 + 0x80);
        uStack_730 = *(uint64_t *)(lVar23 + 0x88);
        uStack_728 = *(int32_t *)(lVar23 + 0x90);
        uStack_724 = *(int32_t *)(lVar23 + 0x94);
        uStack_720 = *(int32_t *)(lVar23 + 0x98);
        uStack_71c = *(int32_t *)(lVar23 + 0x9c);
        uStack_718 = *(int32_t *)(lVar23 + 0xa0);
        uStack_714 = *(int32_t *)(lVar23 + 0xa4);
        uStack_710 = *(int32_t *)(lVar23 + 0xa8);
        uStack_70c = *(int32_t *)(lVar23 + 0xac);
        FUN_180084ae0(&uStack_748);
        iVar12 = *(int *)(lVar28 + 0x44);
        lVar23 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
        iVar8 = (int)((*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x20) -
                      *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x18)) / 0x128);
        if (0 < iVar8) {
          lVar19 = 0;
          uStack_98c = 0x7f7fffff;
          uStack_97c = 0x7f7fffff;
          lVar22 = 0;
          uStack_6d8 = CONCAT44(uStack_724,uStack_728);
          uStack_6d0 = CONCAT44(uStack_71c,uStack_720);
          uStack_96c = 0x7f7fffff;
          uStack_708 = CONCAT44(uStack_714,uStack_718);
          uStack_700 = CONCAT44(uStack_70c,uStack_710);
          fStack_a5c = 3.4028235e+38;
          fStack_928 = (float)uStack_738;
          fStack_924 = uStack_738._4_4_;
          fStack_920 = (float)uStack_730;
          fStack_91c = uStack_730._4_4_;
          fStack_a18 = (float)uStack_748;
          fStack_a14 = uStack_748._4_4_;
          fStack_a10 = (float)uStack_740;
          fStack_a0c = uStack_740._4_4_;
          do {
            fVar43 = 0.0;
            lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x18);
            fVar38 = *(float *)(lVar22 + 0xb4 + lVar29);
            pfVar17 = (float *)(lVar22 + 0xf4 + lVar29);
            fVar44 = *(float *)(lVar22 + 0xb8 + lVar29);
            pfVar16 = (float *)(lVar22 + 0xd4 + lVar29);
            pfVar30 = (float *)(lVar22 + 0xe4 + lVar29);
            fVar46 = *(float *)(lVar22 + 0xbc + lVar29);
            pfVar1 = (float *)(lVar22 + 0xc4 + lVar29);
            fVar37 = fVar38 + *(float *)(lVar22 + 0xb0 + lVar29);
            fStack_a48 = *pfVar1 * fVar38 + *pfVar16 * fVar44 + *pfVar30 * fVar46 + *pfVar17;
            fStack_a44 = pfVar1[1] * fVar38 + pfVar16[1] * fVar44 + pfVar30[1] * fVar46 + pfVar17[1]
            ;
            fStack_a40 = pfVar1[2] * fVar38 + pfVar16[2] * fVar44 + pfVar30[2] * fVar46 + pfVar17[2]
            ;
            uStack_a3c = 0x3f800000;
            pfVar1 = (float *)(lVar22 + 0xc4 + lVar29);
            fStack_a58 = *pfVar1 * fVar37 + *pfVar16 * fVar44 + *pfVar30 * fVar46 + *pfVar17;
            fStack_a54 = pfVar1[1] * fVar37 + pfVar16[1] * fVar44 + pfVar30[1] * fVar46 + pfVar17[1]
            ;
            fStack_a50 = pfVar1[2] * fVar37 + pfVar16[2] * fVar44 + pfVar30[2] * fVar46 + pfVar17[2]
            ;
            uStack_a4c = 0x3f800000;
            fVar44 = fVar43;
            fVar46 = fVar43;
            fVar38 = fVar43;
            fVar37 = fVar43;
            if (*(int *)(lVar22 + lVar29) != -1) {
              fVar38 = *(float *)(lVar22 + 8 + lVar29);
              uVar20 = iVar12 + *(int *)(lVar22 + lVar29);
              uVar11 = uVar20 >> 0xd;
              pfVar17 = (float *)(*(longlong *)(lVar23 + 8 + (ulonglong)uVar11 * 8) +
                                 (ulonglong)(uVar20 + uVar11 * -0x2000) * 0x40);
              fStack_518 = pfVar17[4] * fStack_a44 + *pfVar17 * fStack_a48 + pfVar17[8] * fStack_a40
                           + pfVar17[0xc];
              fStack_514 = pfVar17[5] * fStack_a44 + pfVar17[1] * fStack_a48 +
                           pfVar17[9] * fStack_a40 + pfVar17[0xd];
              fStack_510 = pfVar17[6] * fStack_a44 + pfVar17[2] * fStack_a48 +
                           pfVar17[10] * fStack_a40 + pfVar17[0xe];
              fStack_50c = pfVar17[7] * fStack_a44 + pfVar17[3] * fStack_a48 +
                           pfVar17[0xb] * fStack_a40 + pfVar17[0xf];
              fVar44 = fStack_510 * fVar38;
              fVar37 = fStack_518 * fVar38;
              fVar46 = fStack_514 * fVar38;
            }
            iVar2 = *(int *)(lVar22 + 4 + lVar29);
            if (iVar2 != -1) {
              uVar20 = iVar12 + iVar2;
              fVar38 = 1.0 - fVar38;
              uVar11 = uVar20 >> 0xd;
              pfVar17 = (float *)(*(longlong *)(lVar23 + 8 + (ulonglong)uVar11 * 8) +
                                 (ulonglong)(uVar20 + uVar11 * -0x2000) * 0x40);
              fStack_4f8 = pfVar17[4] * fStack_a44 + *pfVar17 * fStack_a48 + pfVar17[8] * fStack_a40
                           + pfVar17[0xc];
              fStack_4f4 = pfVar17[5] * fStack_a44 + pfVar17[1] * fStack_a48 +
                           pfVar17[9] * fStack_a40 + pfVar17[0xd];
              fStack_4f0 = pfVar17[6] * fStack_a44 + pfVar17[2] * fStack_a48 +
                           pfVar17[10] * fStack_a40 + pfVar17[0xe];
              fStack_4ec = pfVar17[7] * fStack_a44 + pfVar17[3] * fStack_a48 +
                           pfVar17[0xb] * fStack_a40 + pfVar17[0xf];
              fVar44 = fVar44 + fStack_4f0 * fVar38;
              fVar37 = fVar37 + fStack_4f8 * fVar38;
              fVar46 = fVar46 + fStack_4f4 * fVar38;
            }
            iVar2 = *(int *)(lVar22 + 0x58 + lVar29);
            fVar41 = fVar43;
            fVar51 = fVar43;
            fVar38 = fVar43;
            if (iVar2 != -1) {
              fVar38 = *(float *)(lVar22 + 0x60 + lVar29);
              uVar20 = iVar12 + iVar2;
              uVar11 = uVar20 >> 0xd;
              pfVar17 = (float *)(*(longlong *)(lVar23 + 8 + (ulonglong)uVar11 * 8) +
                                 (ulonglong)(uVar20 + uVar11 * -0x2000) * 0x40);
              fStack_4e8 = pfVar17[4] * fStack_a54 + *pfVar17 * fStack_a58 + pfVar17[8] * fStack_a50
                           + pfVar17[0xc];
              fStack_4e4 = pfVar17[5] * fStack_a54 + pfVar17[1] * fStack_a58 +
                           pfVar17[9] * fStack_a50 + pfVar17[0xd];
              fStack_4e0 = pfVar17[6] * fStack_a54 + pfVar17[2] * fStack_a58 +
                           pfVar17[10] * fStack_a50 + pfVar17[0xe];
              fStack_4dc = pfVar17[7] * fStack_a54 + pfVar17[3] * fStack_a58 +
                           pfVar17[0xb] * fStack_a50 + pfVar17[0xf];
              fVar43 = fStack_4e0 * fVar38;
              fVar51 = fStack_4e8 * fVar38;
              fVar41 = fStack_4e4 * fVar38;
            }
            iVar2 = *(int *)(lVar22 + 0x5c + lVar29);
            if (iVar2 != -1) {
              uVar20 = iVar2 + iVar12;
              fVar38 = 1.0 - fVar38;
              uVar11 = uVar20 >> 0xd;
              pfVar17 = (float *)(*(longlong *)(lVar23 + 8 + (ulonglong)uVar11 * 8) +
                                 (ulonglong)(uVar20 + uVar11 * -0x2000) * 0x40);
              fStack_4d8 = pfVar17[4] * fStack_a54 + *pfVar17 * fStack_a58 + pfVar17[8] * fStack_a50
                           + pfVar17[0xc];
              fStack_4d4 = pfVar17[5] * fStack_a54 + pfVar17[1] * fStack_a58 +
                           pfVar17[9] * fStack_a50 + pfVar17[0xd];
              fStack_4d0 = pfVar17[6] * fStack_a54 + pfVar17[2] * fStack_a58 +
                           pfVar17[10] * fStack_a50 + pfVar17[0xe];
              fStack_4cc = pfVar17[7] * fStack_a54 + pfVar17[3] * fStack_a58 +
                           pfVar17[0xb] * fStack_a50 + pfVar17[0xf];
              fVar51 = fVar51 + fVar38 * fStack_4d8;
              fVar43 = fVar43 + fVar38 * fStack_4d0;
              fVar41 = fVar41 + fVar38 * fStack_4d4;
            }
            fStack_4c8 = fVar37 * fStack_a18 + fVar46 * fStack_928 + fVar44 * (float)uStack_6d8 +
                         (float)uStack_708;
            fStack_4c4 = fVar37 * fStack_a14 + fVar46 * fStack_924 + fVar44 * uStack_6d8._4_4_ +
                         uStack_708._4_4_;
            fStack_4c0 = fVar37 * fStack_a10 + fVar46 * fStack_920 + fVar44 * (float)uStack_6d0 +
                         (float)uStack_700;
            fStack_4bc = fVar37 * fStack_a0c + fVar46 * fStack_91c + fVar44 * uStack_6d0._4_4_ +
                         uStack_700._4_4_;
            fStack_4b8 = fVar51 * fStack_a18 + fVar41 * fStack_928 + fVar43 * (float)uStack_6d8 +
                         (float)uStack_708;
            fStack_4b4 = fVar51 * fStack_a14 + fVar41 * fStack_924 + fVar43 * uStack_6d8._4_4_ +
                         uStack_708._4_4_;
            fStack_4b0 = fVar51 * fStack_a10 + fVar41 * fStack_920 + fVar43 * (float)uStack_6d0 +
                         (float)uStack_700;
            fStack_4ac = fVar51 * fStack_a0c + fVar41 * fStack_91c + fVar43 * uStack_6d0._4_4_ +
                         uStack_700._4_4_;
            fStack_998 = fStack_4b8 - fStack_4c8;
            fStack_994 = fStack_4b4 - fStack_4c4;
            fStack_990 = fStack_4b0 - fStack_4c0;
            fVar38 = fStack_994 * fStack_994 + fStack_998 * fStack_998 + fStack_990 * fStack_990;
            auVar39 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
            fVar44 = auVar39._0_4_;
            fStack_788 = fVar44 * 0.5 * (3.0 - fVar38 * fVar44 * fVar44);
            fStack_784 = fStack_788 * fStack_994;
            fStack_780 = fStack_788 * fStack_990;
            fStack_788 = fStack_788 * fStack_998;
            fStack_988 = fStack_780 * 0.0 - fStack_784 * 1.0;
            fStack_984 = fStack_788 * 1.0 - fStack_780 * 0.0;
            fStack_980 = fStack_784 * 0.0 - fStack_788 * 0.0;
            fVar38 = fStack_988 * fStack_988 + fStack_984 * fStack_984 + fStack_980 * fStack_980;
            auVar39 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
            fVar44 = auVar39._0_4_;
            fStack_770 = fVar44 * 0.5 * (3.0 - fVar38 * fVar44 * fVar44);
            fStack_774 = fStack_770 * fStack_984;
            fStack_778 = fStack_770 * fStack_988;
            fStack_770 = fStack_770 * fStack_980;
            fStack_978 = fStack_770 * fStack_784 - fStack_774 * fStack_780;
            fStack_974 = fStack_778 * fStack_780 - fStack_788 * fStack_770;
            fStack_970 = fStack_788 * fStack_774 - fStack_778 * fStack_784;
            plVar27 = *(longlong **)(param_1 + 0xd8);
            uStack_77c = 0;
            uStack_76c = 0;
            pcVar26 = *(code **)(*plVar27 + 0x20);
            fStack_a68 = (fStack_4c8 + fStack_4b8) * 0.5;
            fStack_a64 = (fStack_4c4 + fStack_4b4) * 0.5;
            fStack_a60 = (fStack_4c0 + fStack_4b0) * 0.5;
            fVar38 = fStack_974 * fStack_974 + fStack_978 * fStack_978 + fStack_970 * fStack_970;
            auVar39 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
            fVar44 = auVar39._0_4_;
            fStack_a70 = fVar44 * 0.5 * (3.0 - fVar38 * fVar44 * fVar44);
            fStack_a78 = fStack_978 * fStack_a70;
            fStack_a74 = fStack_974 * fStack_a70;
            fStack_a70 = fStack_970 * fStack_a70;
            uStack_75c = 0;
            uStack_74c = 0x3f800000;
            uStack_a6c = uStack_96c;
            fStack_768 = fStack_a78;
            fStack_764 = fStack_a74;
            fStack_760 = fStack_a70;
            fStack_758 = fStack_a68;
            fStack_754 = fStack_a64;
            fStack_750 = fStack_a60;
            FUN_18063b470(&uStack_6c8,&fStack_788);
            uStack_5e8 = uStack_6c8;
            uStack_5e4 = uStack_6c4;
            uStack_5e0 = uStack_6c0;
            uStack_5dc = uStack_6bc;
            fStack_5d8 = fStack_758;
            fStack_5d4 = fStack_754;
            fStack_5d0 = fStack_750;
            uStack_5cc = uStack_74c;
            (*pcVar26)(plVar27,*(int32_t *)(*(longlong *)(param_1 + 0xe0) + lVar19 * 4),
                       &uStack_5e8);
            lVar19 = lVar19 + 1;
            lVar22 = lVar22 + 0x128;
            param_2 = lStack_9e8;
          } while (lVar19 < iVar8);
        }
      }
      puVar21 = (uint *)((longlong)*(char *)(lStack_8b0 + 0xde) * 0x100 +
                        *(longlong *)(lVar28 + 0x18));
      do {
        LOCK();
        uVar11 = *puVar21;
        *puVar21 = *puVar21 | 1;
        UNLOCK();
      } while ((uVar11 & 1) != 0);
      uStack_808 = puVar21[1];
      uStack_804 = puVar21[2];
      uStack_800 = puVar21[3];
      uStack_7fc = puVar21[4];
      uStack_7f8 = puVar21[5];
      uStack_7f4 = puVar21[6];
      uStack_7f0 = puVar21[7];
      uStack_7ec = puVar21[8];
      *puVar21 = 0;
      uStack_3c8 = uStack_808;
      uStack_3c4 = uStack_804;
      uStack_3c0 = uStack_800;
      uStack_3bc = uStack_7fc;
      uStack_3b8 = uStack_7f8;
      uStack_3b4 = uStack_7f4;
      uStack_3b0 = uStack_7f0;
      uStack_3ac = uStack_7ec;
      uStack_168 = uStack_808;
      uStack_164 = uStack_804;
      uStack_160 = uStack_800;
      uStack_15c = uStack_7fc;
      uStack_158 = uStack_7f8;
      uStack_154 = uStack_7f4;
      uStack_150 = uStack_7f0;
      uStack_14c = uStack_7ec;
      FUN_180300bf0(&uStack_808,auStack_3a8,param_1 + 0x1b0);
      FUN_180300bf0(&uStack_808,&uStack_7c8,param_1 + 0x170);
      puVar18 = (int32_t *)FUN_180300bf0(&fStack_898,auStack_278,&uStack_7c8);
      uStack_7c8 = *puVar18;
      uStack_7c4 = puVar18[1];
      uStack_7c0 = puVar18[2];
      uStack_7bc = puVar18[3];
      uStack_7b8 = puVar18[4];
      uStack_7b4 = puVar18[5];
      uStack_7b0 = puVar18[6];
      uStack_7ac = puVar18[7];
      FUN_180300bf0(&uStack_808,&uStack_7a8,param_1 + 400);
      puVar18 = (int32_t *)FUN_180300bf0(&fStack_898,auStack_258,&uStack_7a8);
      uVar31 = (ulonglong)*(int *)(param_1 + 0x58);
      uStack_7a8 = *puVar18;
      uStack_7a4 = puVar18[1];
      uStack_7a0 = puVar18[2];
      uStack_79c = puVar18[3];
      uStack_798 = puVar18[4];
      uStack_794 = puVar18[5];
      uStack_790 = puVar18[6];
      uStack_78c = puVar18[7];
      FUN_180300bf0(auStack_3a8,&uStack_7e8,uVar31 * 0x40 + *(longlong *)(param_1 + 0x108));
      puVar18 = (int32_t *)FUN_180300bf0(&fStack_898,auStack_238,&uStack_7e8);
      plVar27 = *(longlong **)(param_1 + 0xd8);
      uStack_7e8 = *puVar18;
      uStack_7e4 = puVar18[1];
      uStack_7e0 = puVar18[2];
      uStack_7dc = puVar18[3];
      uStack_7d8 = puVar18[4];
      uStack_7d4 = puVar18[5];
      uStack_7d0 = puVar18[6];
      uStack_7cc = puVar18[7];
      pcVar26 = *(code **)(*plVar27 + 0x20);
      puVar18 = (int32_t *)
                (**(code **)(*plVar27 + 0x10))(plVar27,auStack_8c8,uVar31 & 0xffffffff);
      (*pcVar26)(plVar27,*puVar18,&uStack_7e8);
      plVar27 = *(longlong **)(param_1 + 0xd8);
      pcVar26 = *(code **)(*plVar27 + 0x20);
      puVar18 = (int32_t *)
                (**(code **)(*plVar27 + 0x10))(plVar27,auStack_8c4,*(int32_t *)(param_1 + 0x5c));
      (*pcVar26)(plVar27,*puVar18,&uStack_7c8);
      plVar27 = *(longlong **)(param_1 + 0xd8);
      pcVar26 = *(code **)(*plVar27 + 0x20);
      puVar18 = (int32_t *)
                (**(code **)(*plVar27 + 0x10))(plVar27,auStack_8c0,*(int32_t *)(param_1 + 0x60));
      (*pcVar26)(plVar27,*puVar18,&uStack_7a8);
      plVar27 = *(longlong **)(param_1 + 0xd8);
      fVar37 = fStack_a28 * uStack_908._4_4_;
      fVar43 = fStack_a28 * (float)uStack_900;
      fVar41 = fStack_a28 * uStack_900._4_4_;
      fVar38 = fStack_a24 * (float)uStack_8f0;
      fVar44 = fStack_a24 * uStack_8f0._4_4_;
      fVar46 = fStack_a20 * fStack_8dc;
      uStack_a38 = 0x3f800000;
      uStack_a30 = 0;
      uStack_a08 = 0x3f800000;
      uStack_a00 = 0;
      fStack_a28 = fStack_a28 * (float)uStack_908 + fStack_a24 * (float)uStack_8f8 +
                   fStack_a20 * fStack_8e8 + fStack_8d8;
      fStack_a24 = fVar37 + fStack_a24 * uStack_8f8._4_4_ + fStack_a20 * fStack_8e4 + fStack_8d4;
      fStack_a20 = fVar43 + fVar38 + fStack_a20 * fStack_8e0 + fStack_8d0;
      fStack_a1c = fVar41 + fVar44 + fVar46 + fStack_8cc;
      fStack_498 = (float)uStack_9f8 * (float)uStack_908 + uStack_9f8._4_4_ * (float)uStack_8f8 +
                   (float)uStack_9f0 * fStack_8e8 + fStack_8d8;
      fStack_494 = (float)uStack_9f8 * uStack_908._4_4_ + uStack_9f8._4_4_ * uStack_8f8._4_4_ +
                   (float)uStack_9f0 * fStack_8e4 + fStack_8d4;
      fStack_490 = (float)uStack_9f8 * (float)uStack_900 + uStack_9f8._4_4_ * (float)uStack_8f0 +
                   (float)uStack_9f0 * fStack_8e0 + fStack_8d0;
      fStack_48c = (float)uStack_9f8 * uStack_900._4_4_ + uStack_9f8._4_4_ * uStack_8f0._4_4_ +
                   (float)uStack_9f0 * fStack_8dc + fStack_8cc;
      uStack_9f8 = CONCAT44(fStack_494,fStack_498);
      uStack_9f0 = CONCAT44(fStack_48c,fStack_490);
      pcVar26 = *(code **)(*plVar27 + 0x20);
      fStack_4a8 = fStack_a28;
      fStack_4a4 = fStack_a24;
      fStack_4a0 = fStack_a20;
      fStack_49c = fStack_a1c;
      puVar18 = (int32_t *)
                (**(code **)(*plVar27 + 0x10))(plVar27,auStack_8bc,*(int32_t *)(param_1 + 0x68));
      (*pcVar26)(plVar27,*puVar18,&uStack_a38);
      plVar27 = *(longlong **)(param_1 + 0xd8);
      pcVar26 = *(code **)(*plVar27 + 0x20);
      puVar18 = (int32_t *)
                (**(code **)(*plVar27 + 0x10))(plVar27,auStack_8b8,*(int32_t *)(param_1 + 100));
      (*pcVar26)(plVar27,*puVar18,&uStack_a08);
      (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x60))
                (*(longlong **)(param_1 + 0xd8),*(int32_t *)(param_1 + 0x1e0));
      lVar23 = _DAT_180c86870;
      cVar10 = '\0';
      *(int32_t *)(param_1 + 0x1e0) = 0;
      *(int32_t *)(param_1 + 0x1e4) = *(int32_t *)(lVar23 + 0x224);
      if ('\0' < *(char *)(param_2 + 0x20)) {
        uStack_94c = 0x7f7fffff;
        uStack_93c = 0x7f7fffff;
        do {
          plVar27 = *(longlong **)(param_1 + 0xd8);
          pcVar26 = *(code **)(*plVar27 + 0x28);
          puVar18 = (int32_t *)(**(code **)(*plVar27 + 0x10))(plVar27,auStack_8a8,(int)cVar10);
          (*pcVar26)(plVar27,*puVar18,&fStack_828);
          fStack_958 = fStack_818 - fStack_8d8;
          fStack_954 = fStack_814 - fStack_8d4;
          fStack_950 = fStack_810 - fStack_8d0;
          FUN_180285b40(&fStack_898,&fStack_6f8,&fStack_958);
          fVar51 = fStack_6f0;
          fVar41 = fStack_6f4;
          fVar43 = fStack_6f8;
          lVar23 = *(longlong *)(param_1 + 0x108);
          lVar22 = (longlong)cVar10;
          lVar28 = lVar22 * 0x40;
          fStack_5b8 = fStack_6f8;
          fStack_5b4 = fStack_6f4;
          fStack_5b0 = fStack_6f0;
          uStack_5ac = uStack_6ec;
          fVar50 = fStack_81c * fStack_960 * -1.0 + fStack_828 * fStack_964 * -1.0 +
                   fStack_820 * fStack_95c + fStack_824 * fStack_968;
          fVar40 = fStack_824 * fStack_95c * -1.0 + fStack_828 * fStack_960 * -1.0 +
                   fStack_81c * fStack_964 + fStack_820 * fStack_968;
          fVar42 = fStack_820 * fStack_964 * -1.0 + fStack_828 * fStack_95c * -1.0 +
                   fStack_824 * fStack_960 + fStack_81c * fStack_968;
          fVar36 = fStack_81c * fStack_95c * 1.0 + fStack_828 * fStack_968 * 1.0 +
                   fStack_824 * fStack_964 + fStack_820 * fStack_960;
          fStack_5c8 = fVar36;
          fStack_5c4 = fVar50;
          fStack_5c0 = fVar40;
          fStack_5bc = fVar42;
          fStack_488 = fVar36;
          fStack_484 = fVar50;
          fStack_480 = fVar40;
          fStack_47c = fVar42;
          pfVar16 = (float *)FUN_1801c0fb0(&fStack_5c8,auStack_508,lVar23 + 0x30 + lVar28);
          pfVar17 = (float *)(lVar28 + 0x20 + lVar23);
          fVar38 = *pfVar17;
          fVar44 = pfVar17[1];
          fVar46 = pfVar17[2];
          fVar37 = pfVar17[3];
          fStack_948 = fVar43 + *pfVar16;
          fStack_944 = fVar41 + pfVar16[1];
          fStack_940 = fVar51 + pfVar16[2];
          puVar21 = (uint *)(lVar22 * 0x100 + *(longlong *)(param_2 + 0x18));
          uStack_69c = uStack_93c;
          fStack_6b4 = fVar40 * fVar37 * 1.0 + fVar36 * fVar44 * 1.0 +
                       (fVar38 * fVar50 - fVar42 * fVar46);
          fStack_6b0 = fVar42 * fVar44 * 1.0 + fVar36 * fVar46 * 1.0 +
                       (fVar38 * fVar40 - fVar50 * fVar37);
          fStack_6ac = fVar50 * fVar46 * 1.0 + fVar36 * fVar37 * 1.0 +
                       (fVar38 * fVar42 - fVar40 * fVar44);
          fStack_6b8 = fVar42 * fVar37 * -1.0 + fVar40 * fVar46 * -1.0 +
                       (fVar38 * fVar36 - fVar50 * fVar44);
          do {
            LOCK();
            uVar11 = *puVar21;
            *puVar21 = *puVar21 | 1;
            UNLOCK();
          } while ((uVar11 & 1) != 0);
          puVar21[1] = (uint)fStack_6b8;
          puVar21[2] = (uint)fStack_6b4;
          puVar21[3] = (uint)fStack_6b0;
          puVar21[4] = (uint)fStack_6ac;
          puVar21[5] = (uint)fStack_948;
          puVar21[6] = (uint)fStack_944;
          puVar21[7] = (uint)fStack_940;
          puVar21[8] = uStack_93c;
          *puVar21 = 0;
          fStack_6a8 = fStack_948;
          fStack_6a4 = fStack_944;
          fStack_6a0 = fStack_940;
          fStack_468 = fStack_6b8;
          fStack_464 = fStack_6b4;
          fStack_460 = fStack_6b0;
          fStack_45c = fStack_6ac;
          FUN_1802feba0(param_2,(longlong)(ulonglong)(uint)((int)puVar21 - *(int *)(param_2 + 0x18))
                                >> 8);
          cVar10 = cVar10 + '\x01';
        } while (cVar10 < *(char *)(param_2 + 0x20));
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_aa8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






