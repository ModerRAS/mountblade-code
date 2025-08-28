#include "TaleWorlds.Native.Split.h"

// 03_rendering_part608_sub002_sub002.c - 1 个函数

// 函数: void FUN_18059c810(longlong param_1,undefined8 param_2,undefined4 *param_3)
void FUN_18059c810(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined2 uVar14;
  uint uVar15;
  int *piVar16;
  uint *puVar17;
  undefined *puVar18;
  uint7 uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_9c8 [32];
  float fStack_9a8;
  float fStack_9a4;
  float fStack_9a0;
  undefined4 uStack_99c;
  float fStack_998;
  float fStack_994;
  float fStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_97c;
  float fStack_978;
  undefined *puStack_970;
  undefined4 *puStack_968;
  undefined4 uStack_960;
  undefined8 uStack_958;
  undefined *puStack_950;
  undefined4 *puStack_948;
  undefined4 uStack_940;
  undefined8 uStack_938;
  undefined4 uStack_924;
  float fStack_920;
  float fStack_91c;
  float fStack_918;
  undefined4 uStack_914;
  float fStack_910;
  float fStack_90c;
  float fStack_908;
  undefined4 uStack_904;
  undefined4 uStack_8f4;
  undefined4 uStack_8e4;
  undefined4 uStack_8d4;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined8 uStack_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined1 uStack_894;
  undefined4 uStack_890;
  int iStack_88c;
  undefined8 uStack_888;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined1 uStack_864;
  float fStack_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float fStack_848;
  float fStack_844;
  float fStack_840;
  float fStack_838;
  float fStack_834;
  float fStack_830;
  float fStack_828;
  float fStack_824;
  float fStack_820;
  float fStack_818;
  float fStack_814;
  float fStack_810;
  float fStack_808;
  float fStack_804;
  float fStack_800;
  float fStack_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7e8;
  float fStack_7e4;
  float fStack_7e0;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined2 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined2 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  uint uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined2 uStack_750;
  undefined4 uStack_74c;
  undefined8 uStack_748;
  undefined4 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined8 uStack_710;
  undefined2 uStack_708;
  undefined1 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined8 uStack_6d0;
  undefined1 uStack_6c8;
  undefined8 uStack_6c4;
  undefined4 uStack_6bc;
  undefined8 uStack_6b8;
  undefined4 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined8 uStack_680;
  undefined2 uStack_678;
  undefined1 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined8 uStack_634;
  undefined4 uStack_62c;
  undefined8 uStack_628;
  undefined4 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined8 uStack_5f0;
  undefined2 uStack_5e8;
  undefined1 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined8 uStack_5b0;
  undefined1 uStack_5a8;
  undefined8 uStack_5a4;
  undefined4 uStack_59c;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined8 uStack_560;
  undefined2 uStack_558;
  undefined1 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 uStack_520;
  undefined1 uStack_518;
  undefined8 uStack_514;
  undefined4 uStack_50c;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined8 uStack_4d0;
  undefined2 uStack_4c8;
  undefined1 uStack_4c0;
  uint uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 uStack_490;
  undefined1 uStack_488;
  undefined8 uStack_484;
  undefined4 uStack_47c;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined8 uStack_440;
  undefined2 uStack_438;
  byte bStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined8 uStack_3f4;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  undefined4 uStack_3d4;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  undefined4 uStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  undefined4 uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  uint uStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  uint uStack_38c;
  uint uStack_388;
  uint uStack_384;
  uint uStack_380;
  uint uStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  uint uStack_36c;
  uint uStack_368;
  uint uStack_364;
  uint uStack_360;
  uint uStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  uint uStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  undefined4 uStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  undefined4 uStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  undefined4 uStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined4 uStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  uint uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined1 auStack_1d8 [48];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [48];
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  ulonglong uStack_e8;
  
  uStack_3e8 = 0xfffffffffffffffe;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_9c8;
  cVar7 = FUN_1805a3ab0();
  uVar28 = 0;
  iVar24 = 0;
  if (*(int *)(param_1 + 0x28c) == 2) {
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590);
    if (*(int *)(lVar21 + 0x2498) != -1) {
      iVar24 = *(int *)((longlong)*(int *)(lVar21 + 0x2498) * 0x68 + 0x58 + _DAT_180c96150);
    }
    piVar16 = (int *)(lVar21 + 0x2450);
    uVar25 = uVar28;
    uVar27 = uVar28;
    if (((*piVar16 != -1) &&
        (*(int *)((longlong)*piVar16 * 0x68 + 0x58 + _DAT_180c96150) - 0x1cU < 3)) ||
       (iVar24 == 0x1f)) {
      do {
        iVar24 = (int)uVar27;
        if ((*piVar16 != -1) &&
           (*(int *)((longlong)*piVar16 * 0x68 + 0x58 + _DAT_180c96150) - 0x1cU < 4)) break;
        uVar27 = (ulonglong)(iVar24 + 1);
        uVar25 = uVar25 + 1;
        piVar16 = piVar16 + 0x12;
        iVar24 = -1;
      } while ((longlong)uVar25 < 2);
      lVar21 = (longlong)*(short *)(*(longlong *)(lVar21 + 0x2460 + (longlong)iVar24 * 0x48) + 0x7e)
               * 0x68 + _DAT_180c95ed0;
      FUN_18050aea0(*(longlong *)(param_1 + 0x108));
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xd4);
      lVar26 = (longlong)*(char *)(lVar21 + 100);
      lVar21 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8a8);
      puVar17 = (uint *)(lVar26 * 0x100 +
                        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x658) + 0x18))
      ;
      do {
        LOCK();
        uVar15 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar15 & 1) != 0);
      uStack_3a8 = puVar17[1];
      uStack_3a4 = puVar17[2];
      uStack_3a0 = puVar17[3];
      uStack_39c = puVar17[4];
      fVar35 = (float)puVar17[5];
      fVar6 = (float)puVar17[6];
      fVar44 = (float)puVar17[7];
      uVar15 = puVar17[8];
      *puVar17 = 0;
      fStack_398 = fVar35;
      fStack_394 = fVar6;
      fStack_390 = fVar44;
      uStack_38c = uVar15;
      uStack_128 = uStack_3a8;
      uStack_124 = uStack_3a4;
      uStack_120 = uStack_3a0;
      uStack_11c = uStack_39c;
      fStack_118 = fVar35;
      fStack_114 = fVar6;
      fStack_110 = fVar44;
      uStack_10c = uVar15;
      FUN_18063b5f0(&fStack_348,&uStack_3a8);
      uVar23 = (undefined1)lVar26;
      fStack_258 = fStack_348;
      fStack_254 = fStack_344;
      fStack_250 = fStack_340;
      uStack_24c = uStack_33c;
      fStack_248 = fStack_338;
      fStack_244 = fStack_334;
      fStack_240 = fStack_330;
      uStack_23c = uStack_32c;
      fStack_238 = fStack_328;
      fStack_234 = fStack_324;
      fStack_230 = fStack_320;
      uStack_22c = uStack_31c;
      fStack_918 = *(float *)(lVar21 + 0x98);
      fStack_3d8 = fVar44 * fStack_918 + *(float *)(lVar21 + 0xa8);
      fVar30 = *(float *)(lVar21 + 0x84);
      fVar31 = *(float *)(lVar21 + 0x74);
      fStack_3dc = fVar35 * fVar31 + fVar6 * fVar30 + *(float *)(lVar21 + 0xa4);
      fVar46 = *(float *)(lVar21 + 0x80);
      fVar2 = *(float *)(lVar21 + 0x70);
      fStack_3e0 = fVar35 * fVar2 + fVar6 * fVar46 + *(float *)(lVar21 + 0xa0);
      uStack_924 = 0x7f7fffff;
      uStack_3d4 = 0x7f7fffff;
      uStack_25c = 0x7f7fffff;
      fStack_990 = fStack_320 * fStack_918;
      fStack_994 = fStack_328 * fVar31 + fStack_324 * fVar30;
      fStack_998 = fStack_328 * fVar2 + fStack_324 * fVar46;
      fStack_908 = fStack_330 * fStack_918;
      fStack_90c = fStack_338 * fVar31 + fStack_334 * fVar30;
      fStack_910 = fStack_338 * fVar2 + fStack_334 * fVar46;
      fStack_918 = fStack_340 * fStack_918;
      fStack_91c = fStack_348 * fVar31 + fStack_344 * fVar30;
      fStack_920 = fStack_348 * fVar2 + fStack_344 * fVar46;
      uStack_914 = 0x7f7fffff;
      uStack_904 = 0x7f7fffff;
      uStack_98c = 0x7f7fffff;
      uStack_28c = 0x7f7fffff;
      uStack_27c = 0x7f7fffff;
      uStack_26c = 0x7f7fffff;
      fStack_298 = fStack_920;
      fStack_294 = fStack_91c;
      fStack_290 = fStack_918;
      fStack_288 = fStack_910;
      fStack_284 = fStack_90c;
      fStack_280 = fStack_908;
      fStack_278 = fStack_998;
      fStack_274 = fStack_994;
      fStack_270 = fStack_990;
      fStack_268 = fStack_3e0;
      fStack_264 = fStack_3dc;
      fStack_260 = fStack_3d8;
      fStack_228 = fVar35;
      fStack_224 = fVar6;
      fStack_220 = fVar44;
      uStack_21c = uVar15;
      puVar11 = (undefined4 *)
                FUN_180535610(&fStack_298,auStack_1d8,
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8c0));
      uStack_218 = *puVar11;
      uStack_214 = puVar11[1];
      uStack_210 = puVar11[2];
      uStack_20c = puVar11[3];
      uStack_208 = puVar11[4];
      uStack_204 = puVar11[5];
      uStack_200 = puVar11[6];
      uStack_1fc = puVar11[7];
      uStack_1f8 = puVar11[8];
      uStack_1f4 = puVar11[9];
      uStack_1f0 = puVar11[10];
      uStack_1ec = puVar11[0xb];
      fStack_1e8 = fStack_3e0;
      fStack_1e4 = fStack_3dc;
      fStack_1e0 = fStack_3d8;
      uStack_1dc = uStack_3d4;
      *(undefined4 *)(param_1 + 0x98) = uStack_218;
      *(undefined4 *)(param_1 + 0x9c) = uStack_214;
      *(undefined4 *)(param_1 + 0xa0) = uStack_210;
      *(undefined4 *)(param_1 + 0xa4) = uStack_20c;
      *(undefined4 *)(param_1 + 0xa8) = uStack_208;
      *(undefined4 *)(param_1 + 0xac) = uStack_204;
      *(undefined4 *)(param_1 + 0xb0) = uStack_200;
      *(undefined4 *)(param_1 + 0xb4) = uStack_1fc;
      *(undefined4 *)(param_1 + 0xb8) = uStack_1f8;
      *(undefined4 *)(param_1 + 0xbc) = uStack_1f4;
      *(undefined4 *)(param_1 + 0xc0) = uStack_1f0;
      *(undefined4 *)(param_1 + 0xc4) = uStack_1ec;
      *(float *)(param_1 + 200) = fStack_3e0;
      *(float *)(param_1 + 0xcc) = fStack_3dc;
      *(float *)(param_1 + 0xd0) = fStack_3d8;
      *(undefined4 *)(param_1 + 0xd4) = uStack_3d4;
      *(undefined1 *)(param_1 + 0xd8) = uVar23;
      cVar8 = FUN_1805a6e00(param_1,iVar24,cVar7);
      if (cVar8 == '\x03') {
        *param_3 = 2;
      }
    }
  }
  iVar24 = *(int *)(param_1 + 0x280);
  if (iVar24 != -1) {
    iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0x2450);
    if (iVar10 != -1) {
      iVar4 = *(int *)((longlong)iVar10 * 0x68 + 0x58 + _DAT_180c96150);
      if (iVar4 == 0x1d) {
        if (iVar10 != iVar24) {
          uStack_888 = 0;
          uStack_880 = 0;
          uStack_868 = 0x1000000;
          uStack_87c = 0;
          uStack_878 = 0x3f800000;
          uStack_874 = 0xbe4ccccd;
          uStack_870 = 0xbe4ccccd;
          uStack_86c = 0x3ecccccd;
          uStack_864 = 0;
          uStack_890 = 0;
          iStack_88c = iVar24;
          FUN_18051ec50(*(longlong *)(param_1 + 0x108),&uStack_890);
        }
      }
      else if (iVar4 == 0x1c) goto LAB_18059cd53;
    }
    *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
  }
LAB_18059cd53:
  lVar21 = *(longlong *)(param_1 + 0x108);
  uVar15 = *(uint *)(lVar21 + 0x56c) & 0x4000;
  if (uVar15 != 0) {
    uVar28 = *(ulonglong *)(*(longlong *)(lVar21 + 0x8f8) + 0x9e8);
  }
  if ((uVar28 != 0) &&
     ((*(byte *)((longlong)*(int *)(uVar28 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(uVar28 + 0xd0)) & 1
      ) == 0)) goto LAB_18059e71b;
  if (*(int *)(param_1 + 0x28c) != 2) {
    if (uVar15 == 0) {
      if ((*(int *)(param_1 + 0x1d4) != 2) && (*(int *)(param_1 + 0x1d4) != 5)) goto LAB_18059d0e8;
      lVar21 = FUN_18058b980(*(longlong *)(lVar21 + 0x590),
                             *(undefined4 *)(*(longlong *)(lVar21 + 0x590) + 0x2498));
      if ((lVar21 == 0) || (cVar8 = *(char *)(lVar21 + 100), cVar8 < '\0')) {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
        lVar26 = (**(code **)(*plVar5 + 0x128))(plVar5,1);
        puVar13 = &UNK_180a37268;
        if (lVar21 == 0) {
          puVar13 = &UNK_180a37298;
        }
        puVar18 = &DAT_18098bc73;
        if (*(undefined **)(lVar26 + 0x18) != (undefined *)0x0) {
          puVar18 = *(undefined **)(lVar26 + 0x18);
        }
        FUN_180626f80(puVar13,puVar18);
        cVar8 = *(char *)(*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8a8) +
                             0x260) + 0x210) + 0xde);
      }
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xd4);
      lVar21 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8a8);
      lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x658);
      if ((*(byte *)(lVar26 + 0xa8) & 1) == 0) {
        FUN_1802fac00(lVar26,*(longlong *)(lVar26 + 0x10) + 0x70,0xbf800000);
      }
      puVar17 = (uint *)((longlong)cVar8 * 0x100 + *(longlong *)(lVar26 + 0x18));
      do {
        LOCK();
        uVar15 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar15 & 1) != 0);
      uStack_388 = puVar17[1];
      uStack_384 = puVar17[2];
      uStack_380 = puVar17[3];
      uStack_37c = puVar17[4];
      fVar35 = (float)puVar17[5];
      fVar6 = (float)puVar17[6];
      fVar30 = (float)puVar17[7];
      uStack_36c = puVar17[8];
      *puVar17 = 0;
      fStack_378 = fVar35;
      fStack_374 = fVar6;
      fStack_370 = fVar30;
      uStack_108 = uStack_388;
      uStack_104 = uStack_384;
      uStack_100 = uStack_380;
      uStack_fc = uStack_37c;
      fStack_f8 = fVar35;
      fStack_f4 = fVar6;
      fStack_f0 = fVar30;
      uStack_ec = uStack_36c;
      FUN_18063b5f0(&fStack_838,&uStack_388);
      fStack_2d0 = *(float *)(lVar21 + 0x98);
      fVar45 = fStack_2d0 * fVar30 + *(float *)(lVar21 + 0xa8);
      fVar30 = *(float *)(lVar21 + 0x84);
      fVar31 = *(float *)(lVar21 + 0x74);
      fVar44 = fVar31 * fVar35 + fVar30 * fVar6 + *(float *)(lVar21 + 0xa4);
      fVar46 = *(float *)(lVar21 + 0x80);
      fVar2 = *(float *)(lVar21 + 0x70);
      fVar35 = fVar2 * fVar35 + fVar46 * fVar6 + *(float *)(lVar21 + 0xa0);
      uStack_97c = 0x7f7fffff;
      uStack_29c = 0x7f7fffff;
      fStack_9a0 = fStack_2d0 * fStack_810;
      fStack_9a4 = fVar31 * fStack_818 + fVar30 * fStack_814;
      fStack_9a8 = fVar2 * fStack_818 + fVar46 * fStack_814;
      fStack_2c0 = fStack_2d0 * fStack_820;
      fStack_2c4 = fVar31 * fStack_828 + fVar30 * fStack_824;
      fStack_2c8 = fVar2 * fStack_828 + fVar46 * fStack_824;
      uStack_8c4 = 0x7f7fffff;
      fStack_2d0 = fStack_2d0 * fStack_830;
      fStack_2d4 = fVar31 * fStack_838 + fVar30 * fStack_834;
      fStack_2d8 = fVar2 * fStack_838 + fVar46 * fStack_834;
      uStack_8d4 = 0x7f7fffff;
      uStack_99c = 0x7f7fffff;
      uStack_2cc = 0x7f7fffff;
      uStack_2bc = 0x7f7fffff;
      uStack_2ac = 0x7f7fffff;
      fStack_2b8 = fStack_9a8;
      fStack_2b4 = fStack_9a4;
      fStack_2b0 = fStack_9a0;
      fStack_2a8 = fVar35;
      fStack_2a4 = fVar44;
      fStack_2a0 = fVar45;
      puVar11 = (undefined4 *)
                FUN_180535610(&fStack_2d8,auStack_178,
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8c0));
      uVar9 = *puVar11;
      uVar32 = puVar11[1];
      uVar33 = puVar11[2];
      uVar34 = puVar11[3];
      uVar36 = puVar11[4];
      uVar37 = puVar11[5];
      uVar38 = puVar11[6];
      uVar39 = puVar11[7];
      uVar40 = puVar11[8];
      uVar41 = puVar11[9];
      uVar42 = puVar11[10];
      uVar43 = puVar11[0xb];
      *(char *)(param_1 + 0xd8) = cVar8;
    }
    else {
      cVar8 = FUN_1805a6e00(param_1,1,cVar7);
      if ((cVar8 == '\0') ||
         (((cVar7 == '\0' && (*(int *)(param_1 + 0x1d4) != 2)) && (*(int *)(param_1 + 0x1d4) != 5)))
         ) {
LAB_18059d0e8:
        *(undefined4 *)(param_1 + 0x88) = 0xf149f2ca;
        *(undefined4 *)(param_1 + 200) = 0xf149f2ca;
        *(undefined1 *)(param_1 + 0xd8) = 0xff;
        goto LAB_18059d4b4;
      }
      FUN_18050aea0(*(undefined8 *)(param_1 + 0x108));
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xd4);
      cVar8 = FUN_180527720(*(undefined8 *)(param_1 + 0x108),1);
      lVar26 = (longlong)cVar8;
      lVar21 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8a8);
      puVar17 = (uint *)(lVar26 * 0x100 +
                        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x658) + 0x18))
      ;
      do {
        LOCK();
        uVar15 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar15 & 1) != 0);
      uStack_368 = puVar17[1];
      uStack_364 = puVar17[2];
      uStack_360 = puVar17[3];
      uStack_35c = puVar17[4];
      fVar35 = (float)puVar17[5];
      fVar6 = (float)puVar17[6];
      fVar30 = (float)puVar17[7];
      uStack_34c = puVar17[8];
      *puVar17 = 0;
      fStack_358 = fVar35;
      fStack_354 = fVar6;
      fStack_350 = fVar30;
      uStack_148 = uStack_368;
      uStack_144 = uStack_364;
      uStack_140 = uStack_360;
      uStack_13c = uStack_35c;
      fStack_138 = fVar35;
      fStack_134 = fVar6;
      fStack_130 = fVar30;
      uStack_12c = uStack_34c;
      FUN_18063b5f0(&fStack_808,&uStack_368);
      uVar23 = (undefined1)lVar26;
      fStack_310 = *(float *)(lVar21 + 0x98);
      fVar45 = fStack_310 * fVar30 + *(float *)(lVar21 + 0xa8);
      fVar30 = *(float *)(lVar21 + 0x84);
      fVar31 = *(float *)(lVar21 + 0x74);
      fVar44 = fVar31 * fVar35 + fVar30 * fVar6 + *(float *)(lVar21 + 0xa4);
      fVar46 = *(float *)(lVar21 + 0x80);
      fVar2 = *(float *)(lVar21 + 0x70);
      fVar35 = fVar2 * fVar35 + fVar46 * fVar6 + *(float *)(lVar21 + 0xa0);
      uStack_98c = 0x7f7fffff;
      uStack_2dc = 0x7f7fffff;
      fStack_2f0 = fStack_310 * fStack_7e0;
      fStack_2f4 = fVar31 * fStack_7e8 + fVar30 * fStack_7e4;
      fStack_2f8 = fVar2 * fStack_7e8 + fVar46 * fStack_7e4;
      uStack_97c = 0x7f7fffff;
      fStack_300 = fStack_310 * fStack_7f0;
      fStack_304 = fVar31 * fStack_7f8 + fVar30 * fStack_7f4;
      fStack_308 = fVar2 * fStack_7f8 + fVar46 * fStack_7f4;
      uStack_8e4 = 0x7f7fffff;
      fStack_310 = fStack_310 * fStack_800;
      fStack_314 = fVar31 * fStack_808 + fVar30 * fStack_804;
      fStack_318 = fVar2 * fStack_808 + fVar46 * fStack_804;
      uStack_8f4 = 0x7f7fffff;
      uStack_30c = 0x7f7fffff;
      uStack_2fc = 0x7f7fffff;
      uStack_2ec = 0x7f7fffff;
      fStack_2e8 = fVar35;
      fStack_2e4 = fVar44;
      fStack_2e0 = fVar45;
      puVar11 = (undefined4 *)
                FUN_180535610(&fStack_318,auStack_1a8,
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8c0));
      uVar9 = *puVar11;
      uVar32 = puVar11[1];
      uVar33 = puVar11[2];
      uVar34 = puVar11[3];
      uVar36 = puVar11[4];
      uVar37 = puVar11[5];
      uVar38 = puVar11[6];
      uVar39 = puVar11[7];
      uVar40 = puVar11[8];
      uVar41 = puVar11[9];
      uVar42 = puVar11[10];
      uVar43 = puVar11[0xb];
      *(undefined1 *)(param_1 + 0xd8) = uVar23;
    }
    *(undefined4 *)(param_1 + 0x98) = uVar9;
    *(undefined4 *)(param_1 + 0x9c) = uVar32;
    *(undefined4 *)(param_1 + 0xa0) = uVar33;
    *(undefined4 *)(param_1 + 0xa4) = uVar34;
    *(undefined4 *)(param_1 + 0xa8) = uVar36;
    *(undefined4 *)(param_1 + 0xac) = uVar37;
    *(undefined4 *)(param_1 + 0xb0) = uVar38;
    *(undefined4 *)(param_1 + 0xb4) = uVar39;
    *(undefined4 *)(param_1 + 0xb8) = uVar40;
    *(undefined4 *)(param_1 + 0xbc) = uVar41;
    *(undefined4 *)(param_1 + 0xc0) = uVar42;
    *(undefined4 *)(param_1 + 0xc4) = uVar43;
    *(float *)(param_1 + 200) = fVar35;
    *(float *)(param_1 + 0xcc) = fVar44;
    *(float *)(param_1 + 0xd0) = fVar45;
    *(undefined4 *)(param_1 + 0xd4) = 0x7f7fffff;
  }
LAB_18059d4b4:
  uVar20 = 0;
  uVar22 = *(uint *)(*(longlong *)(param_1 + 0x108) + 0x56c) >> 0xe & 1;
  uVar25 = (ulonglong)uVar22;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
  fVar30 = (float)(**(code **)(*plVar5 + 0x90))(plVar5,uVar25);
  uVar15 = *(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
  iVar24 = 0;
  if ((uVar15 & 0x3c0) == 0) {
LAB_18059d557:
    uVar20 = *(uint *)(param_1 + 0x1d4);
    if (((uVar20 == 2) && (*(int *)(param_1 + 0x27c) != -1)) && ((uVar15 & 0x3c0) == 0)) {
      uStack_7a8 = 0;
      uStack_7a4 = 0xffffffff;
      uStack_7a0 = 0;
      uStack_79c = 0;
      uStack_798 = 0;
      uStack_794 = 0;
      uStack_790 = 0;
      uStack_78c = 0;
      uStack_788 = 0;
      uStack_784 = 0;
      uStack_780 = 0xff;
      uStack_77c = 0;
      FUN_1805a4590(param_1,&uStack_7a8);
      *(undefined8 *)(param_1 + 0x1d8) = 0xffffffffffffffff;
      uVar20 = *(uint *)(param_1 + 0x1d4);
    }
    else if (((*(uint *)(param_1 + 0x27c) < 4) &&
             (((uVar20 - 1 & 0xfffffffa) != 0 || (uVar20 == 6)))) ||
            ((*(uint *)(param_1 + 0x27c) - 4 < 5 && ((uVar20 == 3 || (uVar20 == 7)))))) {
      uStack_7d8 = 0;
      uStack_7d4 = 0xffffffff;
      uStack_7d0 = 0;
      uStack_7cc = 0;
      uStack_7c8 = 0;
      uStack_7c4 = 0;
      uStack_7c0 = 0;
      uStack_7bc = 0;
      uStack_7b8 = 0;
      uStack_7b4 = 0;
      uStack_7b0 = 0xff;
      uStack_7ac = 0;
      FUN_1805a4590(param_1,&uStack_7d8);
      uVar20 = *(uint *)(param_1 + 0x1d4);
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x1d4);
    if ((iVar10 - 3U & 0xfffffffd) != 0) {
      if (iVar10 == 0) {
        if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x200) * 8) -
                   *(longlong *)(param_1 + 0x1f8)) * 1e-05 < 0.0) goto LAB_18059d61b;
      }
      else if (iVar10 == 2) {
        lVar21 = 0xb8;
        if (*(int *)(*(longlong *)(param_1 + 600) + 0x104) == 1) {
          lVar21 = 0xbc;
        }
        if (*(float *)(&DAT_180c96380 + lVar21) <= fVar30 + 0.2 &&
            fVar30 + 0.2 != *(float *)(&DAT_180c96380 + lVar21)) goto LAB_18059d61b;
      }
      goto LAB_18059d557;
    }
LAB_18059d61b:
    if ((uVar15 >> 9 & 1) == 0) {
      if ((uVar15 >> 8 & 1) == 0) {
        if ((uVar15 & 0x40) == 0) {
          uVar20 = (uVar15 & 0xff | 0x40) >> 6;
        }
        else {
          uVar20 = 2;
        }
      }
    }
    else {
      uVar20 = 1;
    }
    lVar21 = FUN_1805a0610(param_1,uVar20);
    if (lVar21 != 0) {
      uVar15 = *(uint *)(param_1 + 0x27c) - 4;
      if (4 < uVar15) {
        uVar15 = *(uint *)(param_1 + 0x27c);
      }
      if (uVar20 != uVar15) {
        if (((((*(longlong *)(param_1 + 600) == 0) || (uVar28 == 0)) ||
             (*(int *)(param_1 + 0x1d4) != 2)) ||
            ((*(int *)(param_1 + 0x1dc) == 1 || (*(int *)(lVar21 + 0x104) == 1)))) ||
           (iVar10 = *(int *)(param_1 + 0x1d8), iVar10 == -1)) {
LAB_18059d6d9:
          bVar29 = false;
        }
        else {
          if (uVar20 == 0) {
            if (iVar10 != 1) goto LAB_18059d789;
            goto LAB_18059d6d9;
          }
          if (uVar20 == 1) {
            bVar29 = iVar10 == 0;
          }
          else if (uVar20 == 2) {
            bVar29 = iVar10 == 3;
          }
          else {
            if (uVar20 != 3) goto LAB_18059d789;
            bVar29 = iVar10 == 2;
          }
          if (bVar29) goto LAB_18059d6d9;
LAB_18059d789:
          if (*(int *)(*(longlong *)(param_1 + 600) + 0x34) ==
              *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0x2498))
          goto LAB_18059d6d9;
          bVar29 = true;
        }
        uStack_778 = 0;
        uStack_774 = uVar20;
        if (!bVar29) {
          uStack_774 = uVar20 + 4;
        }
        uStack_770 = 0;
        uStack_76c = 0;
        uStack_768 = 0;
        uStack_764 = 0;
        uStack_760 = 0;
        uStack_75c = 0;
        uStack_758 = 0;
        uStack_754 = 0;
        uStack_750 = 0xff;
        uStack_74c = 0;
        FUN_1805a4590(param_1,&uStack_778);
      }
    }
    uVar20 = *(uint *)(param_1 + 0x1d4);
  }
  fVar31 = _DAT_180c963e4;
  if (uVar20 == 2) {
    fVar31 = _DAT_180c96438;
    if ((*(longlong *)(param_1 + 600) != 0) && (*(int *)(*(longlong *)(param_1 + 600) + 0x104) == 1)
       ) {
      fVar31 = _DAT_180c9643c;
    }
    if (fVar31 < fVar30) {
      *(undefined4 *)(param_1 + 0x1d4) = 5;
    }
    lVar21 = *(longlong *)(param_1 + 0x108);
    if ((((*(uint *)(lVar21 + 0x56c) & 0x800) != 0) && (_DAT_180c963d0 <= fVar30)) &&
       (*(float *)(*(longlong *)((ulonglong)uVar22 * 0x11b0 + 0xf8 + *(longlong *)(lVar21 + 0x590))
                  + 0x30) < _DAT_180c963d0)) {
      if (*(float *)(param_1 + 0x44) <= 1.0) {
        fVar30 = 0.15;
      }
      else {
        fVar30 = 0.65;
      }
      uVar15 = *(uint *)(lVar21 + 0x748) << 0xd ^ *(uint *)(lVar21 + 0x748);
      uVar15 = uVar15 ^ uVar15 >> 0x11;
      uVar15 = uVar15 ^ uVar15 << 5;
      *(uint *)(lVar21 + 0x748) = uVar15;
      if ((float)(uVar15 - 1) * 2.3283064e-10 < fVar30) {
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
        if ((*(int *)(lVar21 + 0x48) < _DAT_180d4a048) &&
           (FUN_1808fcb90(&DAT_180d4a048), _DAT_180d4a048 == -1)) {
          puStack_970 = &UNK_180a3c3e0;
          uStack_958 = 0;
          puStack_968 = (undefined4 *)0x0;
          uStack_960 = 0;
          puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
          *(undefined1 *)puVar11 = 0;
          puStack_968 = puVar11;
          uVar9 = FUN_18064e990(puVar11);
          uStack_958 = CONCAT44(uStack_958._4_4_,uVar9);
          *puVar11 = 0x6c6c6559;
          *(undefined1 *)(puVar11 + 1) = 0;
          uStack_960 = 4;
          _DAT_180d4a04c = FUN_180571e20(&DAT_180c960c0,&puStack_970);
          puStack_970 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        if ((*(int *)(lVar21 + 0x48) < _DAT_180d4a050) &&
           (FUN_1808fcb90(&DAT_180d4a050), _DAT_180d4a050 == -1)) {
          puStack_950 = &UNK_180a3c3e0;
          uStack_938 = 0;
          puStack_948 = (undefined4 *)0x0;
          uStack_940 = 0;
          puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
          *(undefined1 *)puVar11 = 0;
          puStack_948 = puVar11;
          uVar9 = FUN_18064e990(puVar11);
          uStack_938 = CONCAT44(uStack_938._4_4_,uVar9);
          *puVar11 = 0x6e757247;
          *(undefined2 *)(puVar11 + 1) = 0x74;
          uStack_940 = 5;
          _DAT_180d4a054 = FUN_180571e20(&DAT_180c960c0,&puStack_950);
          puStack_950 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar11);
        }
        lVar21 = *(longlong *)(param_1 + 0x108);
        uVar15 = *(int *)(lVar21 + 0x748) << 0xd ^ *(uint *)(lVar21 + 0x748);
        uVar15 = uVar15 ^ uVar15 >> 0x11;
        uVar15 = uVar15 ^ uVar15 << 5;
        *(uint *)(lVar21 + 0x748) = uVar15;
        uVar14 = _DAT_180d4a054;
        if ((float)(uVar15 - 1) * 2.3283064e-10 < 0.2) {
          uVar14 = _DAT_180d4a04c;
        }
        FUN_180508510(*(undefined8 *)(param_1 + 0x108),uVar14,2);
      }
    }
  }
  else if ((uVar20 < 8) && ((0xa1U >> (uVar20 & 0x1f) & 1) != 0)) {
    if (0.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x200) * 8) -
                      *(longlong *)(param_1 + 0x1f8)) * 1e-05) {
      lVar21 = *(longlong *)(param_1 + 0x108);
      if ((((((*(uint *)(lVar21 + 0x4c8) & 0x3c0) != 0) || (*(int *)(param_1 + 0x27c) - 4U < 5)) &&
           ((*(uint *)(lVar21 + 0x4c8) & 0x7c00) == 0)) && ((uVar20 == 0 || (uVar20 == 7)))) ||
         (*(uint *)(param_1 + 0x27c) < 4)) {
        *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
        if (*(int *)(lVar21 + 0x570) == 1) {
          uVar15 = *(uint *)(param_1 + 0x27c);
          if (uVar15 == 0xffffffff) {
            uVar15 = *(uint *)(lVar21 + 0x4c8);
            if ((uVar15 >> 9 & 1) == 0) {
              if ((uVar15 >> 8 & 1) == 0) {
                if ((uVar15 & 0x40) == 0) {
                  uVar15 = (uVar15 & 0xff | 0x40) >> 6;
                }
                else {
                  uVar15 = 2;
                }
              }
              else {
                uVar15 = 0;
              }
            }
            else {
              uVar15 = 1;
            }
          }
          else if (uVar15 - 4 < 5) {
            uVar15 = uVar15 - 4;
          }
          uVar12 = FUN_1805a0610(param_1,uVar15);
          *(undefined8 *)(param_1 + 0x268) = uVar12;
        }
        puVar11 = *(undefined4 **)(param_1 + 0x268);
        if ((puVar11 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x28c) == 0)) {
          if (*(int *)(param_1 + 0x1d4) == 7) {
            uStack_550 = 0;
            uStack_598 = 0xffffffffffffffff;
            uStack_590 = 0;
            uStack_588 = 0;
            uStack_580 = 0;
            uStack_578 = 0;
            uStack_570 = 0;
            uStack_56c = 0x3f800000;
            uStack_568 = 0xbe4ccccd;
            uStack_564 = 0xbe4ccccd;
            uStack_560 = 0x3ecccccd;
            uStack_558 = 0x100;
            uStack_54c = 7;
            uStack_548 = 0xffffffff;
            uStack_544 = 0;
            uStack_540 = 0;
            uStack_53c = 0;
            uStack_538 = 0;
            uStack_534 = 0;
            uStack_530 = 0;
            uStack_52c = 0;
            uStack_528 = 0;
            uStack_520 = 0xffffffffffffffff;
            uStack_518 = 0xff;
            uStack_514 = 0;
            uStack_524 = 0xffffffff;
            uStack_50c = 0x3f800000;
            FUN_1805a4a20(param_1,uVar22,&uStack_598,1);
            puVar11 = *(undefined4 **)(param_1 + 0x268);
          }
          uStack_4c0 = 0;
          uStack_508 = 0xffffffffffffffff;
          uStack_500 = 0;
          uStack_4f8 = 0;
          uStack_4f0 = 0;
          uStack_4e8 = 0;
          uStack_4e0 = 0;
          uStack_4dc = 0x3f800000;
          uStack_4d8 = 0xbe4ccccd;
          uStack_4d4 = 0xbe4ccccd;
          uStack_4d0 = 0x3ecccccd;
          uStack_4c8 = 0x100;
          uStack_4bc = (uint)(*(uint *)(param_1 + 0x27c) < 4);
          uStack_4b8 = *puVar11;
          uStack_4b4 = 0;
          uStack_4b0 = 0;
          uStack_4ac = 0;
          uStack_4a8 = 0;
          uStack_4a4 = 0;
          uStack_4a0 = 0;
          uStack_49c = 0;
          uStack_498 = 0;
          uStack_490 = 0xffffffffffffffff;
          uStack_488 = 0xff;
          uStack_484 = 0;
          uStack_494 = 0xffffffff;
          uStack_47c = 0x3f800000;
          cVar8 = FUN_1805a4a20(param_1,uVar22,&uStack_508,1);
          if (cVar8 != '\0') {
            cVar7 = '\0';
          }
        }
      }
    }
  }
  else if (uVar20 == 1) {
    lVar21 = *(longlong *)(param_1 + 0x108);
    plVar5 = *(longlong **)(lVar21 + 0x590);
    if (((int)plVar5[uVar25 * 9 + 0x48a] == -1) ||
       (bVar3 = *(byte *)((longlong)(int)plVar5[uVar25 * 9 + 0x48a] * 0x68 + 0x60 + _DAT_180c96150),
       1 < bVar3)) {
      if (uVar28 != 0) {
        iVar24 = *(int *)((longlong)*(int *)(uVar28 + 0xf0) * 0xa0 + 100 +
                         *(longlong *)(uVar28 + 0xd0));
      }
      FUN_1805a79c0(param_1,(longlong)iVar24 * 0x170 + _DAT_180c95ff0);
    }
    else {
      if (*(int *)(param_1 + 0x284) == 0) {
        if ((*(uint *)(lVar21 + 0x4c8) & 0x3c0) == 0) {
          *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
        }
        else {
          fVar30 = (float)(**(code **)(*plVar5 + 0xa0))(plVar5,uVar22);
          if (fVar31 < fVar30) {
            *(undefined4 *)(param_1 + 0x284) = 1;
          }
          lVar21 = *(longlong *)(param_1 + 0x108);
        }
      }
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
      if ((((*(int *)(lVar21 + 0x570) == 1) || (bVar3 != 0)) || (*(char *)(param_1 + 0x1e4) != '\0')
          ) || (((puVar11 = *(undefined4 **)(param_1 + 0x268),
                 puVar11 == *(undefined4 **)(param_1 + 600) ||
                 ((*(uint *)(lVar21 + 0x4c8) & 0x3c0) == 0)) || (puVar11 == (undefined4 *)0x0)))) {
        puVar11 = *(undefined4 **)(param_1 + 600);
        cVar8 = func_0x000180525320(lVar21);
        if (cVar8 == *(char *)((longlong)puVar11 + 5)) {
          if (((*(uint *)(lVar21 + 0x4c8) & 0x3c0) == 0) && (bVar3 == 0)) {
            fVar30 = _DAT_180c963e0;
            if (*(int *)(param_1 + 0x284) == 1) {
              fVar30 = 0.95;
            }
            fVar31 = (float)(**(code **)(**(longlong **)(lVar21 + 0x590) + 0xa0))
                                      (*(longlong **)(lVar21 + 0x590),uVar22);
            if ((fVar30 < fVar31) || (*(char *)(param_1 + 0x1e4) != '\0')) {
              iVar24 = *(int *)(param_1 + 0x284);
              if (iVar24 == 1) {
                lVar21 = *(longlong *)(param_1 + 0x108);
                cVar8 = func_0x000180525320();
                if (((((cVar8 == '\0') ||
                      ((((uVar15 = *(uint *)(lVar21 + 0x4c8), (uVar15 & 4) == 0 &&
                         (*(float *)(lVar21 + 0x4cc) <= 0.0)) && ((uVar15 & 2) == 0)) &&
                       (0.0 < *(float *)(lVar21 + 0x4d0) || *(float *)(lVar21 + 0x4d0) == 0.0)))) ||
                     ((((uVar15 & 8) != 0 ||
                       (*(float *)(lVar21 + 0x4cc) <= 0.0 && *(float *)(lVar21 + 0x4cc) != 0.0)) ||
                      ((uVar15 & 1) != 0)))) ||
                    ((0.0 < *(float *)(lVar21 + 0x4d0) || (**(int **)(param_1 + 600) == 3)))) &&
                   ((cVar8 = func_0x000180525320(), cVar8 != '\0' ||
                    (((((uVar15 = *(uint *)(lVar21 + 0x4c8), (uVar15 & 8) == 0 &&
                        (0.0 < *(float *)(lVar21 + 0x4cc) || *(float *)(lVar21 + 0x4cc) == 0.0)) &&
                       ((uVar15 & 1) == 0)) && (*(float *)(lVar21 + 0x4d0) <= 0.0)) ||
                     ((((uVar15 & 4) != 0 || (0.0 < *(float *)(lVar21 + 0x4cc))) ||
                      (((uVar15 & 2) != 0 ||
                       ((*(float *)(lVar21 + 0x4d0) <= 0.0 && *(float *)(lVar21 + 0x4d0) != 0.0 ||
                        (**(int **)(param_1 + 600) == 2)))))))))))) goto LAB_18059e1b2;
                uStack_66c = 3;
              }
              else {
LAB_18059e1b2:
                uStack_66c = 2;
                if (iVar24 != 1) {
                  uStack_66c = 4;
                }
              }
              uStack_670 = 0;
              uStack_6b8 = 0xffffffffffffffff;
              uStack_6b0 = 0;
              uStack_6a8 = 0;
              uStack_6a0 = 0;
              uStack_698 = 0;
              uStack_690 = 0;
              uStack_68c = 0x3f800000;
              uStack_688 = 0xbe4ccccd;
              uStack_684 = 0xbe4ccccd;
              uStack_680 = 0x3ecccccd;
              uStack_678 = 0x100;
              uStack_668 = **(undefined4 **)(param_1 + 600);
              uStack_664 = 0;
              uStack_660 = 0;
              uStack_65c = 0;
              uStack_658 = 0;
              uStack_654 = 0;
              uStack_650 = 0;
              uStack_64c = 0;
              uStack_648 = 0;
              uStack_640 = 0xffffffffffffffff;
              uStack_638 = 0xff;
              uStack_634 = 0;
              uStack_644 = 0xffffffff;
              uStack_62c = 0x3f800000;
              FUN_1805a4a20(param_1,uVar22,&uStack_6b8,0);
            }
          }
        }
        else {
          uStack_700 = 0;
          uStack_748 = 0xffffffffffffffff;
          uStack_740 = 0;
          uStack_738 = 0;
          uStack_730 = 0;
          uStack_728 = 0;
          uStack_720 = 0;
          uStack_71c = 0x3f800000;
          uStack_718 = 0xbe4ccccd;
          uStack_714 = 0xbe4ccccd;
          uStack_710 = 0x3ecccccd;
          uStack_708 = 0x100;
          uStack_6fc = 0;
          uStack_6f8 = *puVar11;
          uStack_6f4 = 0;
          uStack_6f0 = 0;
          uStack_6ec = 0;
          uStack_6e8 = 0;
          uStack_6e4 = 0;
          uStack_6e0 = 0;
          uStack_6dc = 0;
          uStack_6d8 = 0;
          uStack_6d0 = 0xffffffffffffffff;
          uStack_6c8 = 0xff;
          uStack_6c4 = 0;
          uStack_6d4 = 0xffffffff;
          uStack_6bc = 0x3f800000;
          cVar8 = FUN_1805a4a20(param_1,uVar22,&uStack_748,1);
          if (cVar8 != '\0') {
            uVar12 = FUN_1805a0610(param_1,**(undefined4 **)(param_1 + 600));
            *(undefined8 *)(param_1 + 0x268) = uVar12;
            *(undefined8 *)(param_1 + 600) = uVar12;
          }
        }
      }
      else {
        uStack_478 = 0xffffffffffffffff;
        uStack_470 = 0;
        uStack_468 = 0;
        uStack_460 = 0;
        uStack_458 = 0;
        uStack_450 = 0;
        uStack_44c = 0x3f800000;
        uStack_448 = 0xbe4ccccd;
        uStack_444 = 0xbe4ccccd;
        uStack_440 = 0x3ecccccd;
        uStack_438 = 0x100;
        uStack_42c = 0;
        uStack_428 = *puVar11;
        uStack_424 = 0;
        uStack_420 = 0;
        uStack_41c = 0;
        uStack_418 = 0;
        uStack_414 = 0;
        uStack_410 = 0;
        uStack_40c = 0;
        uStack_408 = 0;
        uStack_400 = 0xffffffffffffffff;
        uStack_3f8 = 0xff;
        uStack_3f4 = 0;
        uStack_404 = 0xffffffff;
        uStack_3ec = 0x3f800000;
        bStack_430 = bVar3;
        FUN_1805a4a20(param_1,uVar22,&uStack_478,1);
      }
    }
  }
  fVar30 = _DAT_180c963d0;
  if (*(int *)(param_1 + 0x1d4) - 1U < 2) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
    if (((((int)plVar5[0x493] == -1) ||
         (*(char *)((longlong)(int)plVar5[0x493] * 0x68 + 0x60 + _DAT_180c96150) != '\x02')) ||
        (fVar31 = (float)(**(code **)(*plVar5 + 0x90))(plVar5,1), fVar31 <= fVar30)) &&
       ((*(char *)(param_1 + 0x40) == '\0' &&
        ((*(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8) & 0x7c00) != 0)))) {
      uStack_5e0 = 0;
      uStack_628 = 0xffffffffffffffff;
      uStack_620 = 0;
      uStack_618 = 0;
      uStack_610 = 0;
      uStack_608 = 0;
      uStack_600 = 0;
      uStack_5fc = 0x3f800000;
      uStack_5f8 = 0xbe4ccccd;
      uStack_5f4 = 0xbe4ccccd;
      uStack_5f0 = 0x3ecccccd;
      uStack_5e8 = 0x100;
      uStack_5dc = 6;
      uStack_5d8 = 0xffffffff;
      uStack_5d4 = 0;
      uStack_5d0 = 0;
      uStack_5cc = 0;
      uStack_5c8 = 0;
      uStack_5c4 = 0;
      uStack_5c0 = 0;
      uStack_5bc = 0;
      uStack_5b8 = 0;
      uStack_5b0 = 0xffffffffffffffff;
      uStack_5a8 = 0xff;
      uStack_5a4 = 0;
      uStack_5b4 = 0xffffffff;
      uStack_59c = 0x3f800000;
      FUN_1805a4a20(param_1,uVar22,&uStack_628,0);
    }
  }
  if ((*(int *)(param_1 + 0x1d4) == 2) || (*(int *)(param_1 + 0x1d4) == 5)) {
    lVar21 = *(longlong *)(param_1 + 0x108);
    iVar24 = *(int *)(*(longlong *)(lVar21 + 0x590) + 0x2450 + uVar25 * 0x48);
    if ((iVar24 == -1) || (*(int *)((longlong)iVar24 * 0x68 + 0x58 + _DAT_180c96150) != 0x14))
    goto LAB_18059e69a;
    if (((cVar7 == '\0') && (uVar28 != 0)) &&
       (uVar15 = *(uint *)(*(longlong *)(lVar21 + 0x6d8) + 0x950), uVar25 = (ulonglong)uVar15,
       uVar15 != 0xffffffff)) {
      FUN_1801c15d0(*(undefined8 *)(lVar21 + 0x658),&fStack_858,
                    *(undefined1 *)(*(longlong *)(lVar21 + 0x590) + 0x25fb));
      fVar31 = fStack_850 * fStack_84c - fStack_858 * fStack_854;
      fVar30 = *(float *)((longlong)*(int *)(uVar28 + 0xf0) * 0xa0 + 0x88 +
                         *(longlong *)(uVar28 + 0xd0)) * *(float *)(uVar28 + 0x48);
      fStack_978 = (1.0 - (fStack_854 * fStack_854 + fStack_854 * fStack_854 +
                          fStack_850 * fStack_850 + fStack_850 * fStack_850)) * fVar30;
      fVar46 = (fStack_858 * fStack_850 + fStack_858 * fStack_850 +
               fStack_854 * fStack_84c + fStack_854 * fStack_84c) * fVar30 + fStack_848;
      fVar30 = (fVar31 + fVar31) * fVar30 + fStack_844;
      lVar21 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8d8) + 0x18);
      lVar26 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8a8);
      fStack_9a8 = fStack_848 * *(float *)(lVar26 + 0x70) + fStack_844 * *(float *)(lVar26 + 0x80) +
                   *(float *)(lVar26 + 0xa0);
      fStack_9a4 = fStack_844 * *(float *)(lVar26 + 0x84) + fStack_848 * *(float *)(lVar26 + 0x74) +
                   *(float *)(lVar26 + 0xa4);
      fStack_9a0 = fStack_840 * *(float *)(lVar26 + 0x98) + *(float *)(lVar26 + 0xa8);
      uStack_3bc = 0x7f7fffff;
      fStack_3b8 = *(float *)(lVar26 + 0x80) * fVar30 + *(float *)(lVar26 + 0x70) * fVar46 +
                   *(float *)(lVar26 + 0xa0);
      fStack_3b4 = *(float *)(lVar26 + 0x84) * fVar30 + *(float *)(lVar26 + 0x74) * fVar46 +
                   *(float *)(lVar26 + 0xa4);
      fStack_3b0 = (fStack_978 + fStack_840) * *(float *)(lVar26 + 0x98) + *(float *)(lVar26 + 0xa8)
      ;
      uStack_99c = 0x7f7fffff;
      uStack_3ac = 0x7f7fffff;
      pfVar1 = (float *)(lVar21 + 0x8250);
      fStack_3c8 = fStack_9a8;
      fStack_3c4 = fStack_9a4;
      fStack_3c0 = fStack_9a0;
      if (0.01 < *pfVar1 || *pfVar1 == 0.01) {
        FUN_1802e5ad0(lVar21 + 0x8228,uVar25 & 0xffffffff,&fStack_3c8,&fStack_3b8);
      }
    }
  }
  else {
LAB_18059e69a:
    if (cVar7 == '\0') goto LAB_18059e71b;
  }
  cVar7 = FUN_1805a6e00(param_1,uVar22,cVar7);
  if (cVar7 == '\0') {
    if (*(int *)(param_1 + 0x1d4) == 5) {
      lVar21 = *(longlong *)(param_1 + 0x108);
      lVar26 = *(longlong *)(param_1 + 600);
      if (lVar26 == 0) {
        iVar24 = -1;
      }
      else {
        iVar24 = *(int *)(lVar26 + 0x34);
      }
      cVar7 = FUN_1805b18f0(param_1 + 0x110,lVar26,
                            CONCAT71((int7)((ulonglong)*(longlong *)(lVar21 + 0x590) >> 8),
                                     *(int *)(*(longlong *)(lVar21 + 0x590) + 0x2498) == iVar24));
      if (cVar7 != '\0') {
        func_0x000180525350(lVar21,*(char *)(lVar26 + 5) == '\0');
      }
    }
  }
  else {
    FUN_18050aea0(*(undefined8 *)(param_1 + 0x108));
    *param_3 = 1;
  }
LAB_18059e71b:
  uVar25 = 0;
  iVar24 = 0;
  if (*(int *)(param_1 + 0x28c) == 2) {
    lVar21 = *(longlong *)(param_1 + 0x108);
    lVar26 = *(longlong *)(lVar21 + 0x590);
    if ((*(int *)(lVar26 + 0x2450) != -1) &&
       (*(int *)((longlong)*(int *)(lVar26 + 0x2450) * 0x68 + 0x58 + _DAT_180c96150) == 0x1d)) {
      if (((*(uint *)(lVar21 + 0x56c) & 0x800) == 0) ||
         ((lVar26 == 0 || (*(char *)(lVar26 + 0x34bc) == '\0')))) {
        uVar12 = 0;
      }
      else {
        uVar12 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
      }
      puVar11 = (undefined4 *)func_0x00018054fc00(_DAT_180c95ff0,uVar12);
      iVar10 = FUN_18053a410(&DAT_180c95f30,*(undefined4 *)(lVar26 + 0xac),*puVar11);
      iVar10 = *(int *)(_DAT_180c95f68 + (longlong)iVar10 * 4);
      uVar27 = uVar25;
      if (iVar10 != -1) {
        uVar27 = *(ulonglong *)(_DAT_180c95f88 + (longlong)iVar10 * 8);
      }
      lVar21 = *(longlong *)(param_1 + 0x108);
      lVar26 = *(longlong *)(lVar21 + 0x590);
      if (*(int *)(lVar26 + 0x2450) == *(int *)(uVar27 + 0x1f0)) {
        if (uVar28 != 0) {
          uVar25 = (ulonglong)
                   *(uint *)((longlong)*(int *)(uVar28 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(uVar28 + 0xd0));
        }
        if (*(char *)((longlong)(int)uVar25 * 0x170 + 0x134 + _DAT_180c95ff0) == '\0') {
          uVar19 = (uint7)((ulonglong)lVar26 >> 8);
          if ((((*(uint *)(lVar21 + 0x56c) & 0x800) == 0) || (lVar26 == 0)) ||
             (*(char *)(lVar26 + 0x34bc) == '\0')) {
            lVar26 = CONCAT71(uVar19,1);
          }
          else {
            lVar26 = (ulonglong)uVar19 << 8;
          }
          func_0x000180525350(lVar21,lVar26);
        }
        else {
          uStack_8b8 = 0;
          uStack_8b0 = 0;
          uStack_898 = 0x1000000;
          uStack_8ac = 0;
          uStack_8a8 = 0x3f800000;
          uStack_8a4 = 0xbe4ccccd;
          uStack_8a0 = 0xbe4ccccd;
          uStack_89c = 0x3ecccccd;
          uStack_894 = 0;
          uStack_8c0 = 0;
          uStack_8bc = puVar11[3];
          FUN_18051ec50(lVar21,&uStack_8c0);
        }
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x28c);
  if (iVar10 != 0) {
    lVar21 = *(longlong *)(param_1 + 0x108);
    iVar4 = *(int *)(*(longlong *)(lVar21 + 0x590) + 0x2498);
    if (iVar4 != -1) {
      iVar24 = *(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150);
    }
    iVar4 = *(int *)(*(longlong *)(lVar21 + 0x590) + 0x2450);
    if (((iVar4 == -1) || (2 < *(int *)((longlong)iVar4 * 0x68 + 0x58 + _DAT_180c96150) - 0x1cU)) &&
       (iVar24 != 0x1f)) {
      bVar29 = false;
    }
    else {
      bVar29 = true;
    }
    if ((iVar10 != 2) || (bVar29)) {
      if ((iVar10 == 1) && (bVar29)) {
        *(undefined4 *)(param_1 + 0x28c) = 2;
        *(undefined4 *)(param_1 + 0x54) = 0x1ffff;
        *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x4c) = 0xffffffffbf800000;
        *(undefined1 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0xf149f2ca;
        *(undefined4 *)(param_1 + 200) = 0xf149f2ca;
        *(undefined1 *)(param_1 + 0xd8) = 0xff;
        *(undefined4 *)(param_1 + 0x48) = 1;
        lVar21 = *(longlong *)(param_1 + 0x108);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x28c) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
    if (0.0 < *(float *)(*(longlong *)(lVar21 + 0x20) + 0x144)) {
      *(undefined4 *)(param_1 + 0x28c) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_9c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





