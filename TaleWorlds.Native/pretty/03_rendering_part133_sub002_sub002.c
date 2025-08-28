#include "TaleWorlds.Native.Split.h"

// 03_rendering_part133_sub002_sub002.c - 1 个函数

// 函数: void FUN_180347ca0(longlong param_1,longlong param_2,uint64_t *param_3,float *param_4,
void FUN_180347ca0(longlong param_1,longlong param_2,uint64_t *param_3,float *param_4,
                  float *param_5)

{
  double dVar1;
  longlong ******pppppplVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  longlong *plVar8;
  longlong *****ppppplVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  char cVar16;
  uint64_t *puVar17;
  longlong *plVar18;
  void **ppuVar19;
  uint64_t *puVar20;
  longlong lVar21;
  void *puVar22;
  longlong lVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint64_t *puVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  ulonglong uVar31;
  longlong *plVar32;
  int32_t uVar33;
  int32_t extraout_XMM0_Da;
  float fVar34;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int32_t uVar41;
  longlong *****appppplStackX_10 [2];
  float *pfStackX_20;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  int32_t uStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  int32_t uStack_35c;
  longlong *****ppppplStack_358;
  longlong *****ppppplStack_350;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  uint64_t uStack_338;
  float fStack_330;
  int32_t uStack_32c;
  void *puStack_328;
  int8_t *puStack_320;
  ulonglong uStack_318;
  ulonglong uStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  uint64_t uStack_2f0;
  void *puStack_2e8;
  int8_t *puStack_2e0;
  ulonglong uStack_2d8;
  ulonglong uStack_2d0;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  float fStack_290;
  int32_t uStack_28c;
  int32_t uStack_288;
  int32_t uStack_284;
  int32_t uStack_280;
  int32_t uStack_27c;
  int32_t uStack_278;
  void *puStack_268;
  uint64_t uStack_260;
  ulonglong uStack_258;
  ulonglong uStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  uint64_t uStack_230;
  void *puStack_228;
  uint64_t uStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  uint64_t uStack_208;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int32_t uStack_1b8;
  float fStack_1b4;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  int32_t uStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  longlong lStack_f0;
  uint64_t uStack_e8;
  
  uStack_e8 = 0xfffffffffffffffe;
  *(int8_t *)(param_2 + 0x2d8) = 0;
  fStack_378 = 3.4028235e+38;
  fStack_374 = 3.4028235e+38;
  fStack_370 = 3.4028235e+38;
  uStack_36c = 0x7f7fffff;
  fStack_368 = -3.4028235e+38;
  fStack_364 = -3.4028235e+38;
  fStack_360 = -3.4028235e+38;
  uStack_35c = 0x7f7fffff;
  plVar18 = *(longlong **)(param_2 + 0x1c8);
  pfStackX_20 = param_4;
  fVar35 = fStack_378;
  fVar36 = fStack_374;
  fVar37 = fStack_370;
  uVar33 = uStack_36c;
  fVar38 = fStack_368;
  fVar39 = fStack_364;
  fVar40 = fStack_360;
  uVar41 = uStack_35c;
  for (plVar32 = *(longlong **)(param_2 + 0x1c0); fStack_360 = fVar40, fStack_370 = fVar37,
      fStack_378 = fVar35, fStack_374 = fVar36, uStack_36c = uVar33, fStack_368 = fVar38,
      fStack_364 = fVar39, uStack_35c = uVar41, plVar32 != plVar18; plVar32 = plVar32 + 1) {
    pppppplVar2 = (longlong ******)*plVar32;
    appppplStackX_10[0] = (longlong *****)pppppplVar2;
    if (pppppplVar2 != (longlong ******)0x0) {
      (*(code *)(*pppppplVar2)[5])(pppppplVar2);
    }
    FUN_180347ca0(param_1,pppppplVar2,param_3,&fStack_378,&fStack_368);
    if (pppppplVar2 != (longlong ******)0x0) {
      (*(code *)(*pppppplVar2)[7])(pppppplVar2);
    }
    fVar35 = fStack_378;
    fVar36 = fStack_374;
    fVar37 = fStack_370;
    uVar33 = uStack_36c;
    fVar38 = fStack_368;
    fVar39 = fStack_364;
    fVar40 = fStack_360;
    uVar41 = uStack_35c;
  }
  cVar16 = FUN_1802eee20(param_2,&unknown_var_5272_ptr);
  if (cVar16 != '\0') goto LAB_180348b85;
  *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_1 + 0x88);
  puStack_328 = (void *)0x3f800000;
  puStack_320 = (int8_t *)0x0;
  uStack_318 = 0x3f80000000000000;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 0x3f800000;
  uStack_2f8 = 0;
  uStack_2f0 = 0x3f80000000000000;
  dVar1 = *(double *)(param_1 + 0x78);
  FUN_180085c10(&puStack_328,(float)(dVar1 * 0.0174532925199433));
  puStack_2e8 = (void *)0x3f800000;
  puStack_2e0 = (int8_t *)0x0;
  uStack_2d8 = 0x3f80000000000000;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0x3f800000;
  uStack_2b8 = 0;
  uStack_2b0 = 0x3f80000000000000;
  FUN_180085c10(&puStack_2e8,(float)(dVar1 * -0.0174532925199433));
  puStack_268 = puStack_328;
  uStack_260 = puStack_320;
  uStack_258 = uStack_318;
  uStack_250 = uStack_310;
  uStack_248 = uStack_308;
  uStack_240 = uStack_300;
  uStack_238 = uStack_2f8;
  uStack_230 = uStack_2f0;
  puStack_228 = puStack_2e8;
  uStack_220 = puStack_2e0;
  uStack_218 = uStack_2d8;
  uStack_210 = uStack_2d0;
  uStack_208 = uStack_2c8;
  uStack_200 = uStack_2c0;
  uStack_1f8 = uStack_2b8;
  uStack_1f0 = uStack_2b0;
  fStack_1b4 = (float)*(double *)(param_1 + 0x70);
  uStack_1e8 = *param_3;
  uStack_1e0 = param_3[1];
  uStack_1d8 = param_3[2];
  uStack_1d0 = param_3[3];
  uStack_1c8 = param_3[4];
  uStack_1c0 = param_3[5];
  uStack_1b8 = *(int32_t *)(param_3 + 6);
  lVar23 = *(longlong *)(param_1 + 0x18);
  uStack_1b0 = *(uint64_t *)(lVar23 + 0x70);
  uStack_1a8 = *(uint64_t *)(lVar23 + 0x78);
  uStack_1a0 = *(uint64_t *)(lVar23 + 0x80);
  uStack_198 = *(uint64_t *)(lVar23 + 0x88);
  uStack_190 = *(int32_t *)(lVar23 + 0x90);
  uStack_18c = *(int32_t *)(lVar23 + 0x94);
  uStack_188 = *(int32_t *)(lVar23 + 0x98);
  uStack_184 = *(int32_t *)(lVar23 + 0x9c);
  uStack_180 = *(int32_t *)(lVar23 + 0xa0);
  uStack_17c = *(int32_t *)(lVar23 + 0xa4);
  uStack_178 = *(int32_t *)(lVar23 + 0xa8);
  uStack_174 = *(int32_t *)(lVar23 + 0xac);
  lStack_f0 = param_1;
  puVar17 = (uint64_t *)FUN_1802f5d10(&uStack_1b0,&puStack_328);
  uStack_170 = *puVar17;
  uStack_168 = puVar17[1];
  uStack_160 = puVar17[2];
  uStack_158 = puVar17[3];
  uStack_150 = *(int32_t *)(puVar17 + 4);
  uStack_14c = *(int32_t *)((longlong)puVar17 + 0x24);
  uStack_148 = *(int32_t *)(puVar17 + 5);
  uStack_144 = *(int32_t *)((longlong)puVar17 + 0x2c);
  uStack_140 = *(int32_t *)(puVar17 + 6);
  uStack_13c = *(int32_t *)((longlong)puVar17 + 0x34);
  uStack_138 = *(int32_t *)(puVar17 + 7);
  uStack_134 = *(int32_t *)((longlong)puVar17 + 0x3c);
  FUN_180094120(&uStack_170,&uStack_130);
  uStack_2a8 = (longlong *)0x0;
  uStack_2a0 = (longlong *)0x0;
  uStack_298 = 0;
  lVar23 = 3;
  fStack_290 = 4.2039e-45;
  FUN_1802e92b0(param_2,&uStack_2a8,0,0xffffffff);
  uVar15 = uStack_158;
  uVar14 = uStack_160;
  uVar13 = uStack_168;
  uVar12 = uStack_170;
  uVar31 = (longlong)uStack_2a0 - (longlong)uStack_2a8 >> 3;
  iVar30 = 0;
  if (uVar31 != 0) {
    uVar6 = CONCAT44(uStack_13c,uStack_140);
    uVar7 = CONCAT44(uStack_134,uStack_138);
    uVar4 = CONCAT44(uStack_14c,uStack_150);
    uVar5 = CONCAT44(uStack_144,uStack_148);
    fVar36 = (float)uStack_1d8;
    fVar35 = (float)uStack_1e8;
    plVar32 = uStack_2a8;
    do {
      lVar21 = *plVar32;
      if (lVar21 != 0) {
        plVar18 = *(longlong **)(lVar21 + 600);
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3);
          *(uint64_t *)((longlong)plVar18 + 0x2c) = 0xffffffffffffffff;
          *(int32_t *)(plVar18 + 9) = 0xffffffff;
          *plVar18 = 0;
          plVar18[2] = 0;
          plVar18[7] = 0;
          *(int32_t *)(plVar18 + 5) = 0xffffffff;
          *(int32_t *)(plVar18 + 4) = 0xffffffff;
          plVar18[3] = 0;
          *(int32_t *)(plVar18 + 8) = 0;
          *(int32_t *)(plVar18 + 1) = 0;
          *(int8_t *)((longlong)plVar18 + 0x44) = 0;
          *(int8_t *)((longlong)plVar18 + 0x24) = 0;
          *(longlong **)(lVar21 + 600) = plVar18;
        }
        if (*(int *)((longlong)plVar18 + 0x1c) != 4) {
          *(int32_t *)((longlong)plVar18 + 0x1c) = 4;
          FUN_18007e990(lVar21,*(int *)(*(longlong *)(lVar21 + 600) + 0x1c) +
                               *(int *)(*(longlong *)(lVar21 + 600) + 0x18));
          plVar18 = *(longlong **)(lVar21 + 600);
        }
        puVar17 = (uint64_t *)((longlong)(int)plVar18[3] * 0x40 + *plVar18);
        *puVar17 = puStack_268;
        puVar17[1] = uStack_260;
        puVar17[2] = uStack_258;
        puVar17[3] = uStack_250;
        puVar17[4] = uStack_248;
        puVar17[5] = uStack_240;
        puVar17[6] = uStack_238;
        puVar17[7] = uStack_230;
        puVar17[8] = puStack_228;
        puVar17[9] = uStack_220;
        puVar17[10] = uStack_218;
        puVar17[0xb] = uStack_210;
        puVar17[0xc] = uStack_208;
        puVar17[0xd] = uStack_200;
        puVar17[0xe] = uStack_1f8;
        puVar17[0xf] = uStack_1f0;
        puVar17[0x10] = uVar12;
        puVar17[0x11] = uVar13;
        puVar17[0x12] = uVar14;
        puVar17[0x13] = uVar15;
        puVar17[0x14] = uVar4;
        puVar17[0x15] = uVar5;
        puVar17[0x16] = uVar6;
        puVar17[0x17] = uVar7;
        puVar17[0x18] = uStack_130;
        puVar17[0x19] = uStack_128;
        puVar17[0x1a] = uStack_120;
        puVar17[0x1b] = uStack_118;
        puVar17[0x1c] = uStack_110;
        puVar17[0x1d] = uStack_108;
        puVar17[0x1e] = uStack_100;
        puVar17[0x1f] = uStack_f8;
        fStack_340 = (fVar36 - fVar35) * fStack_1b4 + fVar35;
        fStack_33c = (uStack_1e8._4_4_ + uStack_1d8._4_4_) * 0.5;
        fStack_348 = fVar35;
        fStack_344 = fVar36;
        *(float *)(lVar21 + 0x2b8) = fVar35;
        *(float *)(lVar21 + 700) = fVar36;
        *(float *)(lVar21 + 0x2c0) = fStack_340;
        *(float *)(lVar21 + 0x2c4) = fStack_33c;
        FUN_1803490e0(param_1,lVar21);
      }
      iVar30 = iVar30 + 1;
      plVar32 = plVar32 + 1;
    } while ((ulonglong)(longlong)iVar30 < uVar31);
  }
  puVar20 = (uint64_t *)0x0;
  puVar17 = *(uint64_t **)(param_1 + 0x90);
  if (puVar17 < *(uint64_t **)(param_1 + 0x98)) {
    *(uint64_t **)(param_1 + 0x90) = puVar17 + 0x30;
    ppuVar19 = &puStack_268;
    do {
      puVar22 = ppuVar19[1];
      *puVar17 = *ppuVar19;
      puVar17[1] = puVar22;
      puVar22 = ppuVar19[3];
      puVar17[2] = ppuVar19[2];
      puVar17[3] = puVar22;
      puVar22 = ppuVar19[5];
      puVar17[4] = ppuVar19[4];
      puVar17[5] = puVar22;
      puVar22 = ppuVar19[7];
      puVar17[6] = ppuVar19[6];
      puVar17[7] = puVar22;
      puVar22 = ppuVar19[9];
      puVar17[8] = ppuVar19[8];
      puVar17[9] = puVar22;
      puVar22 = ppuVar19[0xb];
      puVar17[10] = ppuVar19[10];
      puVar17[0xb] = puVar22;
      fVar34 = *(float *)(ppuVar19 + 0xc);
      uVar33 = *(int32_t *)((longlong)ppuVar19 + 100);
      uVar41 = *(int32_t *)(ppuVar19 + 0xd);
      uVar3 = *(int32_t *)((longlong)ppuVar19 + 0x6c);
      *(float *)(puVar17 + 0xc) = fVar34;
      *(int32_t *)((longlong)puVar17 + 100) = uVar33;
      *(int32_t *)(puVar17 + 0xd) = uVar41;
      *(int32_t *)((longlong)puVar17 + 0x6c) = uVar3;
      uVar33 = *(int32_t *)((longlong)ppuVar19 + 0x74);
      uVar41 = *(int32_t *)(ppuVar19 + 0xf);
      uVar3 = *(int32_t *)((longlong)ppuVar19 + 0x7c);
      *(int32_t *)(puVar17 + 0xe) = *(int32_t *)(ppuVar19 + 0xe);
      *(int32_t *)((longlong)puVar17 + 0x74) = uVar33;
      *(int32_t *)(puVar17 + 0xf) = uVar41;
      *(int32_t *)((longlong)puVar17 + 0x7c) = uVar3;
      ppuVar19 = ppuVar19 + 0x10;
      lVar23 = lVar23 + -1;
      puVar17 = puVar17 + 0x10;
    } while (lVar23 != 0);
  }
  else {
    puVar27 = *(uint64_t **)(param_1 + 0x88);
    lVar21 = ((longlong)puVar17 - (longlong)puVar27) / 0x180;
    if (lVar21 == 0) {
      lVar21 = 1;
LAB_18034826e:
      puVar20 = (uint64_t *)
                FUN_18062b420(_DAT_180c8ed18,lVar21 * 0x180,*(int8_t *)(param_1 + 0xa0));
      puVar17 = *(uint64_t **)(param_1 + 0x90);
      puVar27 = *(uint64_t **)(param_1 + 0x88);
    }
    else {
      lVar21 = lVar21 * 2;
      if (lVar21 != 0) goto LAB_18034826e;
    }
    if (puVar27 != puVar17) {
                    // WARNING: Subroutine does not return
      memmove(puVar20,puVar27,(longlong)puVar17 - (longlong)puVar27);
    }
    ppuVar19 = &puStack_268;
    puVar17 = puVar20;
    do {
      puVar22 = ppuVar19[1];
      *puVar17 = *ppuVar19;
      puVar17[1] = puVar22;
      puVar22 = ppuVar19[3];
      puVar17[2] = ppuVar19[2];
      puVar17[3] = puVar22;
      puVar22 = ppuVar19[5];
      puVar17[4] = ppuVar19[4];
      puVar17[5] = puVar22;
      puVar22 = ppuVar19[7];
      puVar17[6] = ppuVar19[6];
      puVar17[7] = puVar22;
      puVar22 = ppuVar19[9];
      puVar17[8] = ppuVar19[8];
      puVar17[9] = puVar22;
      puVar22 = ppuVar19[0xb];
      puVar17[10] = ppuVar19[10];
      puVar17[0xb] = puVar22;
      fVar34 = *(float *)(ppuVar19 + 0xc);
      uVar33 = *(int32_t *)((longlong)ppuVar19 + 100);
      uVar41 = *(int32_t *)(ppuVar19 + 0xd);
      uVar3 = *(int32_t *)((longlong)ppuVar19 + 0x6c);
      *(float *)(puVar17 + 0xc) = fVar34;
      *(int32_t *)((longlong)puVar17 + 100) = uVar33;
      *(int32_t *)(puVar17 + 0xd) = uVar41;
      *(int32_t *)((longlong)puVar17 + 0x6c) = uVar3;
      uVar33 = *(int32_t *)((longlong)ppuVar19 + 0x74);
      uVar41 = *(int32_t *)(ppuVar19 + 0xf);
      uVar3 = *(int32_t *)((longlong)ppuVar19 + 0x7c);
      *(int32_t *)(puVar17 + 0xe) = *(int32_t *)(ppuVar19 + 0xe);
      *(int32_t *)((longlong)puVar17 + 0x74) = uVar33;
      *(int32_t *)(puVar17 + 0xf) = uVar41;
      *(int32_t *)((longlong)puVar17 + 0x7c) = uVar3;
      ppuVar19 = ppuVar19 + 0x10;
      lVar23 = lVar23 + -1;
      puVar17 = puVar17 + 0x10;
    } while (lVar23 != 0);
    if (*(longlong *)(param_1 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t **)(param_1 + 0x88) = puVar20;
    *(uint64_t **)(param_1 + 0x90) = puVar20 + 0x30;
    *(uint64_t **)(param_1 + 0x98) = puVar20 + lVar21 * 0x30;
  }
  lVar23 = *(longlong *)(param_2 + 0x10);
  uVar26 = 0;
  if (lVar23 != 0) {
    puStack_2e8 = &unknown_var_3456_ptr;
    uStack_2d0 = 0;
    puStack_2e0 = (int8_t *)0x0;
    uStack_2d8 = uStack_2d8 & 0xffffffff00000000;
    uVar33 = FUN_1806277c0(&puStack_2e8,*(int32_t *)(lVar23 + 0x20));
    if (0 < *(int *)(lVar23 + 0x20)) {
      puVar22 = &system_buffer_ptr;
      if (*(void **)(lVar23 + 0x18) != (void *)0x0) {
        puVar22 = *(void **)(lVar23 + 0x18);
      }
                    // WARNING: Subroutine does not return
      memcpy(puStack_2e0,puVar22,(longlong)(*(int *)(lVar23 + 0x20) + 1));
    }
    if ((*(longlong *)(lVar23 + 0x18) != 0) &&
       (uStack_2d8 = uStack_2d8 & 0xffffffff00000000, puStack_2e0 != (int8_t *)0x0)) {
      *puStack_2e0 = 0;
    }
    while ((0 < (int)(uint)uStack_2d8 &&
           (lVar23 = strstr(puStack_2e0,&system_data_ff10), uVar33 = extraout_XMM0_Da, lVar23 != 0))) {
      iVar28 = 6;
      iVar30 = (int)lVar23 - (int)puStack_2e0;
      if ((uint)uStack_2d8 < iVar30 + 6U) {
        iVar28 = (uint)uStack_2d8 - iVar30;
      }
      uVar25 = iVar30 + iVar28;
      if (uVar25 < (uint)uStack_2d8) {
        lVar23 = (longlong)(int)uVar25;
        do {
          puStack_2e0[lVar23 - iVar28] = puStack_2e0[lVar23];
          uVar25 = uVar25 + 1;
          lVar23 = lVar23 + 1;
        } while (uVar25 < (uint)uStack_2d8);
      }
      uVar25 = (uint)uStack_2d8 - iVar28;
      uStack_2d8 = CONCAT44(uStack_2d8._4_4_,uVar25);
      puStack_2e0[uVar25] = 0;
    }
    uVar33 = FUN_1800b3430(uVar33,&ppppplStack_350,&puStack_2e8,1);
    ppppplVar9 = ppppplStack_350;
    appppplStackX_10[0] = ppppplStack_350;
    if ((longlong ******)ppppplStack_350 != (longlong ******)0x0) {
      uVar33 = (*(code *)(*ppppplStack_350)[5])(ppppplStack_350);
    }
    fVar34 = (float)FUN_1800b4e00(uVar33,ppppplVar9,0xffffffff);
    if ((longlong ******)ppppplVar9 != (longlong ******)0x0) {
      fVar34 = (float)(*(code *)(*ppppplVar9)[7])(ppppplVar9);
    }
    lVar21 = (longlong)ppppplStack_350[0x17][9] - (longlong)ppppplStack_350[0x17][8];
    lVar23 = lVar21 >> 0x3f;
    if (lVar21 / 0x88 + lVar23 != lVar23) {
      FUN_18014acf0(ppppplStack_350,&ppppplStack_358);
      uStack_338 = (longlong ******)0x7f7fffff7f7fffff;
      fStack_330 = 3.4028235e+38;
      uStack_32c = 0x7f7fffff;
      fStack_348 = -3.4028235e+38;
      fStack_344 = -3.4028235e+38;
      fStack_340 = -3.4028235e+38;
      fStack_33c = 3.4028235e+38;
      FUN_180347740(ppppplStack_358,&puStack_268,&uStack_338,&fStack_348);
      FUN_1802ed050(param_2,ppppplStack_358,*(int32_t *)(param_2 + 0x18));
      if ((float)uStack_338 < fStack_378) {
        fStack_378 = (float)uStack_338;
      }
      if (uStack_338._4_4_ < fStack_374) {
        fStack_374 = uStack_338._4_4_;
      }
      if (fStack_330 < fStack_370) {
        fStack_370 = fStack_330;
      }
      if (fStack_368 < (float)uStack_338) {
        fStack_368 = (float)uStack_338;
      }
      if (fStack_364 < uStack_338._4_4_) {
        fStack_364 = uStack_338._4_4_;
      }
      if (fStack_360 < fStack_330) {
        fStack_360 = fStack_330;
      }
      if (fStack_348 < fStack_378) {
        fStack_378 = fStack_348;
      }
      if (fStack_344 < fStack_374) {
        fStack_374 = fStack_344;
      }
      if (fStack_340 < fStack_370) {
        fStack_370 = fStack_340;
      }
      if (fStack_368 < fStack_348) {
        fStack_368 = fStack_348;
      }
      if (fStack_364 < fStack_344) {
        fStack_364 = fStack_344;
      }
      if (fStack_360 < fStack_340) {
        fStack_360 = fStack_340;
      }
      fVar34 = fStack_340;
      if ((longlong ******)ppppplStack_358 != (longlong ******)0x0) {
        fVar34 = (float)(*(code *)(*ppppplStack_358)[7])();
      }
    }
    if ((longlong ******)ppppplStack_350 != (longlong ******)0x0) {
      fVar34 = (float)(*(code *)(*ppppplStack_350)[7])();
    }
    puStack_2e8 = &unknown_var_3456_ptr;
    if (puStack_2e0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_2e0 = (int8_t *)0x0;
    uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
    puStack_2e8 = &unknown_var_720_ptr;
  }
  lVar23 = *(longlong *)(param_2 + 0x110);
  param_4 = pfStackX_20;
  fVar35 = fStack_378;
  fVar36 = fStack_374;
  fVar37 = fStack_370;
  uVar33 = uStack_36c;
  fVar38 = fStack_368;
  fVar39 = fStack_364;
  fVar40 = fStack_360;
  uVar41 = uStack_35c;
  plVar32 = uStack_2a8;
  plVar18 = uStack_2a8;
  plVar8 = uStack_2a0;
  if (lVar23 != 0) {
    puStack_328 = &unknown_var_3456_ptr;
    uStack_310 = 0;
    puStack_320 = (int8_t *)0x0;
    uStack_318 = uStack_318 & 0xffffffff00000000;
    if (*(int *)(lVar23 + 0x20) != 0) {
      iVar30 = *(int *)(lVar23 + 0x20) + 1;
      if (iVar30 < 0x10) {
        iVar30 = 0x10;
      }
      puStack_320 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar30,0x13);
      *puStack_320 = 0;
      uVar31 = (ulonglong)puStack_320 & 0xffffffffffc00000;
      if (uVar31 != 0) {
        lVar21 = uVar31 + 0x80 + ((longlong)puStack_320 - uVar31 >> 0x10) * 0x50;
        puVar24 = (uint *)(lVar21 - (ulonglong)*(uint *)(lVar21 + 4));
        if ((*(byte *)((longlong)puVar24 + 0xe) & 2) == 0) {
          uVar26 = puVar24[7];
          if (0x3ffffff < uVar26) {
            uVar26 = *puVar24 << 0x10;
          }
        }
        else {
          uVar26 = puVar24[7];
          if (uVar26 < 0x4000000) {
            uVar29 = (ulonglong)uVar26;
          }
          else {
            uVar29 = (ulonglong)*puVar24 << 0x10;
          }
          if (0x3ffffff < uVar26) {
            uVar26 = *puVar24 << 0x10;
          }
          uVar26 = uVar26 - (int)(((longlong)puStack_320 -
                                  (((longlong)((longlong)puVar24 + (-0x80 - uVar31)) / 0x50) *
                                   0x10000 + uVar31)) % uVar29);
        }
      }
      uStack_310 = CONCAT44(uStack_310._4_4_,uVar26);
      fVar34 = extraout_XMM0_Da_00;
      if (0 < *(int *)(lVar23 + 0x20)) {
        puVar22 = &system_buffer_ptr;
        if (*(void **)(lVar23 + 0x18) != (void *)0x0) {
          puVar22 = *(void **)(lVar23 + 0x18);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_320,puVar22,(longlong)(*(int *)(lVar23 + 0x20) + 1));
      }
    }
    if ((*(longlong *)(lVar23 + 0x18) != 0) &&
       (uStack_318 = uStack_318 & 0xffffffff00000000, puStack_320 != (int8_t *)0x0)) {
      *puStack_320 = 0;
    }
    while ((0 < (int)(uint)uStack_318 &&
           (lVar23 = strstr(puStack_320,&system_data_ff10), fVar34 = extraout_XMM0_Da_01, lVar23 != 0))
          ) {
      iVar28 = 6;
      iVar30 = (int)lVar23 - (int)puStack_320;
      if ((uint)uStack_318 < iVar30 + 6U) {
        iVar28 = (uint)uStack_318 - iVar30;
      }
      uVar26 = iVar30 + iVar28;
      if (uVar26 < (uint)uStack_318) {
        lVar23 = (longlong)(int)uVar26;
        do {
          puStack_320[lVar23 - iVar28] = puStack_320[lVar23];
          uVar26 = uVar26 + 1;
          lVar23 = lVar23 + 1;
        } while (uVar26 < (uint)uStack_318);
      }
      uVar26 = (uint)uStack_318 - iVar28;
      uStack_318 = CONCAT44(uStack_318._4_4_,uVar26);
      puStack_320[uVar26] = 0;
    }
    uVar33 = FUN_1800b3430(fVar34,appppplStackX_10,&puStack_328,1);
    ppppplVar9 = appppplStackX_10[0];
    uStack_338 = (longlong ******)appppplStackX_10[0];
    if ((longlong ******)appppplStackX_10[0] != (longlong ******)0x0) {
      uVar33 = (*(code *)(*appppplStackX_10[0])[5])(appppplStackX_10[0]);
    }
    FUN_1800b4e00(uVar33,ppppplVar9,0xffffffff);
    if ((longlong ******)ppppplVar9 != (longlong ******)0x0) {
      (*(code *)(*ppppplVar9)[7])(ppppplVar9);
    }
    lVar21 = (longlong)appppplStackX_10[0][0x17][9] - (longlong)appppplStackX_10[0][0x17][8];
    lVar23 = lVar21 >> 0x3f;
    if (lVar21 / 0x88 + lVar23 != lVar23) {
      FUN_18014acf0(appppplStackX_10[0],&ppppplStack_350);
      fStack_348 = 3.4028235e+38;
      fStack_344 = 3.4028235e+38;
      fStack_340 = 3.4028235e+38;
      fStack_33c = 3.4028235e+38;
      uStack_338._0_4_ = -3.4028235e+38;
      uStack_338._4_4_ = -3.4028235e+38;
      fStack_330 = -3.4028235e+38;
      uStack_32c = 0x7f7fffff;
      FUN_180347740(ppppplStack_350,&puStack_268,&fStack_348,&uStack_338);
      if (fStack_348 < fStack_378) {
        fStack_378 = fStack_348;
      }
      if (fStack_344 < fStack_374) {
        fStack_374 = fStack_344;
      }
      if (fStack_340 < fStack_370) {
        fStack_370 = fStack_340;
      }
      if (fStack_368 < fStack_348) {
        fStack_368 = fStack_348;
      }
      if (fStack_364 < fStack_344) {
        fStack_364 = fStack_344;
      }
      if (fStack_360 < fStack_340) {
        fStack_360 = fStack_340;
      }
      if ((float)uStack_338 < fStack_378) {
        fStack_378 = (float)uStack_338;
      }
      if (uStack_338._4_4_ < fStack_374) {
        fStack_374 = uStack_338._4_4_;
      }
      if (fStack_330 < fStack_370) {
        fStack_370 = fStack_330;
      }
      if (fStack_368 < (float)uStack_338) {
        fStack_368 = (float)uStack_338;
      }
      if (fStack_364 < uStack_338._4_4_) {
        fStack_364 = uStack_338._4_4_;
      }
      if (fStack_360 < fStack_330) {
        fStack_360 = fStack_330;
      }
      ppppplStack_358 = ppppplStack_350;
      if ((longlong ******)ppppplStack_350 != (longlong ******)0x0) {
        (*(code *)(*ppppplStack_350)[5])();
      }
      uStack_338 = &ppppplStack_358;
      if ((longlong ******)ppppplStack_358 != *(longlong *******)(param_2 + 0x110)) {
        FUN_1802ecfb0(param_2,ppppplStack_358,*(int32_t *)(param_2 + 0x148));
      }
      if ((longlong ******)ppppplStack_358 != (longlong ******)0x0) {
        (*(code *)(*ppppplStack_358)[7])();
      }
      lVar23 = *(longlong *)(param_2 + 0x20);
      if (lVar23 != 0) {
        if (*(longlong *)(param_2 + 0x270) != 0) {
          FUN_1802e8910(param_2);
          *(int8_t *)(param_2 + 0x278) = 0;
          lVar23 = *(longlong *)(param_2 + 0x20);
        }
        FUN_1802f28f0(param_2,lVar23);
      }
      if ((longlong ******)ppppplStack_350 != (longlong ******)0x0) {
        (*(code *)(*ppppplStack_350)[7])();
      }
    }
    lVar21 = (longlong)appppplStackX_10[0][0x17][1] - (longlong)*appppplStackX_10[0][0x17];
    lVar23 = lVar21 >> 0x3f;
    if (lVar21 / 0x30 + lVar23 != lVar23) {
      puVar22 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x290) != (void *)0x0) {
        puVar22 = *(void **)(param_2 + 0x290);
      }
      FUN_180627020(&unknown_var_5584_ptr,puVar22);
    }
    if ((longlong)appppplStackX_10[0][0x17][5] - (longlong)appppplStackX_10[0][0x17][4] >> 5 != 0) {
      puVar22 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x290) != (void *)0x0) {
        puVar22 = *(void **)(param_2 + 0x290);
      }
      FUN_180627020(&unknown_var_5504_ptr,puVar22);
    }
    if ((longlong ******)appppplStackX_10[0] != (longlong ******)0x0) {
      (*(code *)(*appppplStackX_10[0])[7])();
    }
    puStack_328 = &unknown_var_3456_ptr;
    if (puStack_320 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_320 = (int8_t *)0x0;
    uStack_310 = uStack_310 & 0xffffffff00000000;
    puStack_328 = &unknown_var_720_ptr;
    param_4 = pfStackX_20;
    fVar35 = fStack_378;
    fVar36 = fStack_374;
    fVar37 = fStack_370;
    uVar33 = uStack_36c;
    fVar38 = fStack_368;
    fVar39 = fStack_364;
    fVar40 = fStack_360;
    uVar41 = uStack_35c;
    plVar32 = uStack_2a8;
    plVar18 = uStack_2a8;
    plVar8 = uStack_2a0;
  }
  for (; plVar11 = uStack_2a0, plVar10 = uStack_2a8, fStack_360 = fVar40, fStack_370 = fVar37,
      pfStackX_20 = param_4, fStack_378 = fVar35, fStack_374 = fVar36, uStack_36c = uVar33,
      fStack_368 = fVar38, fStack_364 = fVar39, uStack_35c = uVar41, plVar32 != uStack_2a0;
      plVar32 = plVar32 + 1) {
    uStack_2a8 = plVar18;
    uStack_2a0 = plVar8;
    if ((longlong *)*plVar32 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar32 + 0x38))();
    }
    param_4 = pfStackX_20;
    fVar35 = fStack_378;
    fVar36 = fStack_374;
    fVar37 = fStack_370;
    uVar33 = uStack_36c;
    fVar38 = fStack_368;
    fVar39 = fStack_364;
    fVar40 = fStack_360;
    uVar41 = uStack_35c;
    plVar18 = uStack_2a8;
    plVar8 = uStack_2a0;
    uStack_2a0 = plVar11;
    uStack_2a8 = plVar10;
  }
  if (uStack_2a8 != (longlong *)0x0) {
    uStack_2a8 = plVar18;
    uStack_2a0 = plVar8;
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar10);
  }
LAB_180348b85:
  if ((((fVar35 != 3.4028235e+38) || (fStack_374 = fVar36, fVar36 != 3.4028235e+38)) ||
      (fStack_370 = fVar37, fVar37 != 3.4028235e+38)) &&
     (((fVar38 != -3.4028235e+38 || (fStack_364 = fVar39, fVar39 != -3.4028235e+38)) ||
      (fStack_360 = fVar40, fVar40 != -3.4028235e+38)))) {
    uStack_2a8 = (longlong *)CONCAT44(fVar36,fVar35);
    uStack_2a0 = (longlong *)CONCAT44(uVar33,fVar37);
    fStack_378 = fVar35;
    fStack_368 = fVar38;
    fStack_290 = fVar40;
    uStack_28c = uVar41;
    uStack_298._0_4_ = fVar38;
    uStack_298._4_4_ = fVar39;
    FUN_1800b9f60(&uStack_2a8);
    lVar23 = *(longlong *)(param_2 + 0x28);
    *(longlong **)(lVar23 + 0xf8) = uStack_2a8;
    *(longlong **)(lVar23 + 0x100) = uStack_2a0;
    *(float *)(lVar23 + 0x108) = (float)uStack_298;
    *(float *)(lVar23 + 0x10c) = uStack_298._4_4_;
    *(float *)(lVar23 + 0x110) = fStack_290;
    *(int32_t *)(lVar23 + 0x114) = uStack_28c;
    *(int32_t *)(lVar23 + 0x118) = uStack_288;
    *(int32_t *)(lVar23 + 0x11c) = uStack_284;
    *(int32_t *)(lVar23 + 0x120) = uStack_280;
    *(int32_t *)(lVar23 + 0x124) = uStack_27c;
    *(int32_t *)(lVar23 + 0x128) = uStack_278;
    *(int16_t *)(param_2 + 0x2b0) = *(int16_t *)(param_2 + 0x2b4);
    *(short *)(param_2 + 0x2b2) = *(short *)(param_2 + 0x2b2) + 1;
    FUN_1801c0d90(param_2);
    fVar35 = *param_4;
    if (fStack_378 <= *param_4) {
      fVar35 = fStack_378;
    }
    *param_4 = fVar35;
    fVar35 = fStack_374;
    if (param_4[1] <= fStack_374) {
      fVar35 = param_4[1];
    }
    param_4[1] = fVar35;
    fVar35 = param_4[2];
    if (fStack_370 <= param_4[2]) {
      fVar35 = fStack_370;
    }
    param_4[2] = fVar35;
    fVar35 = *param_5;
    if (*param_5 <= fStack_378) {
      fVar35 = fStack_378;
    }
    *param_5 = fVar35;
    fVar35 = param_5[1];
    if (param_5[1] <= fStack_374) {
      fVar35 = fStack_374;
    }
    param_5[1] = fVar35;
    if (fStack_370 <= param_5[2]) {
      fStack_370 = param_5[2];
    }
    param_5[2] = fStack_370;
    fVar35 = *param_4;
    if (fStack_368 <= *param_4) {
      fVar35 = fStack_368;
    }
    *param_4 = fVar35;
    fVar35 = fStack_364;
    if (param_4[1] <= fStack_364) {
      fVar35 = param_4[1];
    }
    param_4[1] = fVar35;
    fVar35 = param_4[2];
    if (fStack_360 <= param_4[2]) {
      fVar35 = fStack_360;
    }
    param_4[2] = fVar35;
    fVar35 = *param_5;
    if (*param_5 <= fStack_368) {
      fVar35 = fStack_368;
    }
    *param_5 = fVar35;
    fVar35 = param_5[1];
    if (param_5[1] <= fStack_364) {
      fVar35 = fStack_364;
    }
    param_5[1] = fVar35;
    if (fStack_360 <= param_5[2]) {
      fStack_360 = param_5[2];
    }
    param_5[2] = fStack_360;
  }
  *(int8_t *)(param_2 + 0x2d8) = 1;
  return;
}







