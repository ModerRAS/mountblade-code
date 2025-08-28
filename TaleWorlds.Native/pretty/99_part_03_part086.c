#include "TaleWorlds.Native.Split.h"

// 99_part_03_part086.c - 1 个函数

// 函数: void FUN_18024b8d0(longlong param_1)
void FUN_18024b8d0(longlong param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  float fVar22;
  undefined1 auStack_358 [32];
  undefined8 uStack_338;
  double dStack_330;
  float afStack_328 [2];
  undefined1 auStack_320 [64];
  undefined1 auStack_2e0 [128];
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [136];
  undefined8 uStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float afStack_d8 [32];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_358;
  lVar13 = *(longlong *)(param_1 + 0x3580);
  if (lVar13 == 0) {
    *(undefined8 *)(param_1 + 0x12b40) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x12b48) = 0;
    *(undefined8 *)(param_1 + 0x12b50) = 0x3f80000000000000;
    *(undefined8 *)(param_1 + 0x12b58) = 0;
    *(undefined4 *)(param_1 + 0x12b60) = 0;
    *(undefined4 *)(param_1 + 0x12b64) = 0;
    *(undefined4 *)(param_1 + 0x12b68) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x12b6c) = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0x3f800000;
  }
  else {
    uVar11 = *(undefined8 *)(lVar13 + 0x688);
    *(undefined8 *)(param_1 + 0x12b40) = *(undefined8 *)(lVar13 + 0x680);
    *(undefined8 *)(param_1 + 0x12b48) = uVar11;
    uVar11 = *(undefined8 *)(lVar13 + 0x698);
    *(undefined8 *)(param_1 + 0x12b50) = *(undefined8 *)(lVar13 + 0x690);
    *(undefined8 *)(param_1 + 0x12b58) = uVar11;
    uVar17 = *(undefined4 *)(lVar13 + 0x6a4);
    uVar18 = *(undefined4 *)(lVar13 + 0x6a8);
    uVar19 = *(undefined4 *)(lVar13 + 0x6ac);
    *(undefined4 *)(param_1 + 0x12b60) = *(undefined4 *)(lVar13 + 0x6a0);
    *(undefined4 *)(param_1 + 0x12b64) = uVar17;
    *(undefined4 *)(param_1 + 0x12b68) = uVar18;
    *(undefined4 *)(param_1 + 0x12b6c) = uVar19;
    uVar17 = *(undefined4 *)(lVar13 + 0x6b0);
    uVar18 = *(undefined4 *)(lVar13 + 0x6b4);
    uVar19 = *(undefined4 *)(lVar13 + 0x6b8);
    uVar20 = *(undefined4 *)(lVar13 + 0x6bc);
  }
  *(undefined4 *)(param_1 + 0x12b70) = uVar17;
  *(undefined4 *)(param_1 + 0x12b74) = uVar18;
  *(undefined4 *)(param_1 + 0x12b78) = uVar19;
  *(undefined4 *)(param_1 + 0x12b7c) = uVar20;
  FUN_180287b30(param_1 + 0xf0,&uStack_158);
  uVar15 = (uint)uStack_130;
  puVar14 = (undefined8 *)(param_1 + 0x12a00);
  uStack_150 = (ulonglong)(uint)uStack_150;
  uStack_140 = (ulonglong)(uint)uStack_140;
  uStack_130 = (ulonglong)(uint)uStack_130;
  *puVar14 = uStack_158;
  *(ulonglong *)(param_1 + 0x12a08) = uStack_150;
  *(undefined8 *)(param_1 + 0x12a10) = uStack_148;
  *(ulonglong *)(param_1 + 0x12a18) = uStack_140;
  *(undefined4 *)(param_1 + 0x12a20) = (undefined4)uStack_138;
  *(undefined4 *)(param_1 + 0x12a24) = uStack_138._4_4_;
  *(uint *)(param_1 + 0x12a28) = uVar15;
  *(undefined4 *)(param_1 + 0x12a2c) = 0;
  uStack_120 = CONCAT44(0x3f800000,(undefined4)uStack_120);
  *(undefined4 *)(param_1 + 0x12a30) = (undefined4)uStack_128;
  *(undefined4 *)(param_1 + 0x12a34) = uStack_128._4_4_;
  *(undefined4 *)(param_1 + 0x12a38) = (undefined4)uStack_120;
  *(undefined4 *)(param_1 + 0x12a3c) = 0x3f800000;
  bVar16 = *(byte *)(param_1 + 0x1bd8) & 0x20;
  if ((((bVar16 == 0) && ((*(byte *)(param_1 + 0x1bd9) & 2) == 0)) ||
      (*(int *)(_DAT_180c8a9c8 + 0xa10) == 0)) || (*(char *)(param_1 + 0x130) == '\0')) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  puVar10 = (undefined8 *)FUN_180286010(param_1 + 0x30,&uStack_158,uVar11);
  puVar1 = (undefined8 *)(param_1 + 0x12a40);
  uVar11 = puVar10[1];
  *puVar1 = *puVar10;
  *(undefined8 *)(param_1 + 0x12a48) = uVar11;
  uVar11 = puVar10[3];
  *(undefined8 *)(param_1 + 0x12a50) = puVar10[2];
  *(undefined8 *)(param_1 + 0x12a58) = uVar11;
  uVar17 = *(undefined4 *)((longlong)puVar10 + 0x24);
  uVar18 = *(undefined4 *)(puVar10 + 5);
  uVar19 = *(undefined4 *)((longlong)puVar10 + 0x2c);
  *(undefined4 *)(param_1 + 0x12a60) = *(undefined4 *)(puVar10 + 4);
  *(undefined4 *)(param_1 + 0x12a64) = uVar17;
  *(undefined4 *)(param_1 + 0x12a68) = uVar18;
  *(undefined4 *)(param_1 + 0x12a6c) = uVar19;
  uVar17 = *(undefined4 *)((longlong)puVar10 + 0x34);
  uVar18 = *(undefined4 *)(puVar10 + 7);
  uVar19 = *(undefined4 *)((longlong)puVar10 + 0x3c);
  *(undefined4 *)(param_1 + 0x12a70) = *(undefined4 *)(puVar10 + 6);
  *(undefined4 *)(param_1 + 0x12a74) = uVar17;
  *(undefined4 *)(param_1 + 0x12a78) = uVar18;
  *(undefined4 *)(param_1 + 0x12a7c) = uVar19;
  uVar11 = func_0x000180239f10(auStack_2e0,puVar14);
  uVar12 = func_0x000180239f10(auStack_260,puVar1);
  uVar11 = FUN_18024dde0(uVar11,auStack_1e0,uVar12);
  puVar10 = (undefined8 *)func_0x000180645570(auStack_320,uVar11);
  uVar11 = puVar10[1];
  *(undefined8 *)(param_1 + 0x12ac0) = *puVar10;
  *(undefined8 *)(param_1 + 0x12ac8) = uVar11;
  uVar11 = puVar10[3];
  *(undefined8 *)(param_1 + 0x12ad0) = puVar10[2];
  *(undefined8 *)(param_1 + 0x12ad8) = uVar11;
  uVar17 = *(undefined4 *)((longlong)puVar10 + 0x24);
  uVar18 = *(undefined4 *)(puVar10 + 5);
  uVar19 = *(undefined4 *)((longlong)puVar10 + 0x2c);
  *(undefined4 *)(param_1 + 0x12ae0) = *(undefined4 *)(puVar10 + 4);
  *(undefined4 *)(param_1 + 0x12ae4) = uVar17;
  *(undefined4 *)(param_1 + 0x12ae8) = uVar18;
  *(undefined4 *)(param_1 + 0x12aec) = uVar19;
  uVar17 = *(undefined4 *)((longlong)puVar10 + 0x34);
  uVar18 = *(undefined4 *)(puVar10 + 7);
  uVar19 = *(undefined4 *)((longlong)puVar10 + 0x3c);
  *(undefined4 *)(param_1 + 0x12af0) = *(undefined4 *)(puVar10 + 6);
  *(undefined4 *)(param_1 + 0x12af4) = uVar17;
  *(undefined4 *)(param_1 + 0x12af8) = uVar18;
  *(undefined4 *)(param_1 + 0x12afc) = uVar19;
  if (((lVar13 == 0) || (*(longlong *)(lVar13 + 0x530) == 0)) || (bVar16 == 0)) goto LAB_18024bde4;
  uVar15 = *(uint *)(*(longlong *)(lVar13 + 0x530) + 0x98);
  if ((uVar15 >> 9 & 1) == 0) {
    if (-1 < (int)uVar15) goto LAB_18024bde4;
    afStack_d8[0] = 0.5;
    afStack_d8[1] = 0.25;
    afStack_d8[2] = 0.75;
    afStack_d8[3] = 0.125;
    afStack_d8[4] = 0.625;
    afStack_d8[5] = 0.375;
    afStack_d8[6] = 0.875;
    afStack_d8[7] = 0.0625;
    afStack_d8[8] = 0.5625;
    afStack_d8[9] = 0.3125;
    afStack_d8[10] = 0.8125;
    afStack_d8[0xb] = 0.1875;
    afStack_d8[0xc] = 0.6875;
    afStack_d8[0xd] = 0.4375;
    afStack_d8[0xe] = 0.9375;
    afStack_d8[0xf] = 0.03125;
    afStack_d8[0x10] = 0.53125;
    afStack_d8[0x11] = 0.28125;
    afStack_d8[0x12] = 0.78125;
    afStack_d8[0x13] = 0.15625;
    afStack_d8[0x14] = 0.65625;
    afStack_d8[0x15] = 0.40625;
    afStack_d8[0x16] = 0.90625;
    afStack_d8[0x17] = 0.09375;
    afStack_d8[0x18] = 0.59375;
    afStack_d8[0x19] = 0.34375;
    afStack_d8[0x1a] = 0.84375;
    afStack_d8[0x1b] = 0.21875;
    afStack_d8[0x1c] = 0.71875;
    afStack_d8[0x1d] = 0.46875;
    afStack_d8[0x1e] = 0.96875;
    afStack_d8[0x1f] = 0.015625;
    uStack_158 = 0x3f2aaaab3eaaaaab;
    uStack_150 = 0x3ee38e393de38e39;
    uStack_148 = 0x3e638e393f471c72;
    uStack_140 = 0x3f638e393f0e38e4;
    uStack_138 = 0x3ebda12f3d17b427;
    uStack_130 = 0x3e17b4263f3425ed;
    uStack_128 = 0x3f5097b43ef684be;
    uStack_120 = 0x3f17b4263e84bda1;
    uStack_118 = 0x3d97b4253f6d097b;
    uStack_110 = 0x3f3da12f3ed097b4;
    uStack_108 = 0x3f04bda13e3da130;
    uStack_100 = 0x3e97b4263f5a12f6;
    uStack_f8 = 0x3f212f68;
    uStack_f4 = 0x3f7684be;
    uStack_f0 = 0x3c4a4589;
    uStack_ec = 0x3eb0fcd7;
    uStack_e8 = 0x3f2dd3c1;
    uStack_e4 = 0x3dfcd6ea;
    uStack_e0 = 0x3ee9e065;
    uStack_dc = 0x3f4a4588;
    uVar15 = *(int *)(lVar13 + 0xf0) + 1U & 0x8000001f;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
    }
    *(uint *)(lVar13 + 0xf0) = uVar15;
    lVar13 = (longlong)(int)(*(longlong **)(param_1 + 0x3580))[0x1e];
    fVar3 = afStack_d8[lVar13];
    fVar22 = *(float *)((longlong)&uStack_158 + lVar13 * 4) - 0.5;
    lVar13 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
    if (lVar13 == 0) {
LAB_18024bd3a:
      uStack_338 = 1.0;
      dStack_330 = 1.0;
    }
    else {
      cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3580) + 0x78))();
      if (cVar9 == '\0') goto LAB_18024bd3a;
      uStack_338 = 1.0;
      dStack_330 = 1.0;
      if ((*(char *)(lVar13 + 0xd9) != '\0') && (*(int *)(_DAT_180c86920 + 0x540) - 1U < 4)) {
        pdVar2 = (double *)(lVar13 + -8 + (longlong)*(int *)(_DAT_180c86920 + 0x540) * 0x10);
        uStack_338 = *pdVar2;
        dStack_330 = pdVar2[1];
      }
    }
    dVar21 = uStack_338 + uStack_338;
    uStack_338 = (double)CONCAT44(fVar22,fVar3 - 0.5);
    *(float *)(param_1 + 0x12a60) =
         *(float *)(param_1 + 0x12a60) -
         (float)((dVar21 * (double)(fVar3 - 0.5)) / (double)*(float *)(param_1 + 0x11c20));
    *(float *)(param_1 + 0x12a64) =
         *(float *)(param_1 + 0x12a64) -
         (float)((dStack_330 * -2.0 * (double)fVar22) / (double)*(float *)(param_1 + 0x11c24));
  }
  else {
    afStack_328[0] = -0.5;
    afStack_328[1] = 0.5;
    uStack_338 = 3.0517599839186005e-05;
    uVar15 = *(uint *)(lVar13 + 0xf0) & 0x80000001;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(lVar13 + 0xf0) = *(uint *)(lVar13 + 0xf0) + 1;
    fVar3 = *(float *)((longlong)&uStack_338 + (longlong)(int)uVar15 * 4);
    fVar22 = afStack_328[(int)uVar15];
    *(float *)(param_1 + 0x12a64) =
         fVar3 / *(float *)(param_1 + 0x11c24) + *(float *)(param_1 + 0x12a64);
    *(float *)(param_1 + 0x12a60) =
         fVar22 / *(float *)(param_1 + 0x11c20) + *(float *)(param_1 + 0x12a60);
    uStack_338 = (double)CONCAT44(fVar3 + fVar3,fVar22 + fVar22);
  }
  *(double *)(param_1 + 0x12c00) = uStack_338;
LAB_18024bde4:
  uVar11 = func_0x000180239f10(auStack_1e0,puVar14);
  uVar12 = func_0x000180239f10(auStack_260,puVar1);
  uVar11 = FUN_18024dde0(uVar11,auStack_2e0,uVar12);
  puVar10 = (undefined8 *)func_0x000180645570(auStack_320,uVar11);
  uVar11 = puVar10[1];
  *(undefined8 *)(param_1 + 0x12a80) = *puVar10;
  *(undefined8 *)(param_1 + 0x12a88) = uVar11;
  uVar11 = puVar10[3];
  *(undefined8 *)(param_1 + 0x12a90) = puVar10[2];
  *(undefined8 *)(param_1 + 0x12a98) = uVar11;
  uVar17 = *(undefined4 *)((longlong)puVar10 + 0x24);
  uVar18 = *(undefined4 *)(puVar10 + 5);
  uVar19 = *(undefined4 *)((longlong)puVar10 + 0x2c);
  *(undefined4 *)(param_1 + 0x12aa0) = *(undefined4 *)(puVar10 + 4);
  *(undefined4 *)(param_1 + 0x12aa4) = uVar17;
  *(undefined4 *)(param_1 + 0x12aa8) = uVar18;
  *(undefined4 *)(param_1 + 0x12aac) = uVar19;
  uVar17 = *(undefined4 *)((longlong)puVar10 + 0x34);
  uVar18 = *(undefined4 *)(puVar10 + 7);
  uVar19 = *(undefined4 *)((longlong)puVar10 + 0x3c);
  lVar13 = *(longlong *)(param_1 + 0x3580);
  *(undefined4 *)(param_1 + 0x12ab0) = *(undefined4 *)(puVar10 + 6);
  *(undefined4 *)(param_1 + 0x12ab4) = uVar17;
  *(undefined4 *)(param_1 + 0x12ab8) = uVar18;
  *(undefined4 *)(param_1 + 0x12abc) = uVar19;
  if (((lVar13 != 0) && ((*(byte *)(param_1 + 0x1bd9) & 2) == 0)) &&
     ((*(byte *)(param_1 + 0x1bd8) & 0x20) != 0)) {
    uVar17 = *(undefined4 *)(param_1 + 0x12ac4);
    uVar18 = *(undefined4 *)(param_1 + 0x12ac8);
    uVar19 = *(undefined4 *)(param_1 + 0x12acc);
    uVar20 = *(undefined4 *)(param_1 + 0x12ad0);
    uVar4 = *(undefined4 *)(param_1 + 0x12ad4);
    uVar5 = *(undefined4 *)(param_1 + 0x12ad8);
    uVar6 = *(undefined4 *)(param_1 + 0x12adc);
    uVar11 = *(undefined8 *)(param_1 + 0x12ae0);
    uVar12 = *(undefined8 *)(param_1 + 0x12ae8);
    uVar7 = *(undefined8 *)(param_1 + 0x12af0);
    uVar8 = *(undefined8 *)(param_1 + 0x12af8);
    *(undefined4 *)(lVar13 + 0x680) = *(undefined4 *)(param_1 + 0x12ac0);
    *(undefined4 *)(lVar13 + 0x684) = uVar17;
    *(undefined4 *)(lVar13 + 0x688) = uVar18;
    *(undefined4 *)(lVar13 + 0x68c) = uVar19;
    *(undefined4 *)(lVar13 + 0x690) = uVar20;
    *(undefined4 *)(lVar13 + 0x694) = uVar4;
    *(undefined4 *)(lVar13 + 0x698) = uVar5;
    *(undefined4 *)(lVar13 + 0x69c) = uVar6;
    *(undefined8 *)(lVar13 + 0x6a0) = uVar11;
    *(undefined8 *)(lVar13 + 0x6a8) = uVar12;
    *(undefined8 *)(lVar13 + 0x6b0) = uVar7;
    *(undefined8 *)(lVar13 + 0x6b8) = uVar8;
  }
  uVar11 = FUN_180286010(param_1 + 0x30,auStack_320,0);
  puVar14 = (undefined8 *)FUN_1800946d0(puVar14,&uStack_158,uVar11);
  uVar11 = puVar14[1];
  *(undefined8 *)(param_1 + 0x12b00) = *puVar14;
  *(undefined8 *)(param_1 + 0x12b08) = uVar11;
  uVar11 = puVar14[3];
  *(undefined8 *)(param_1 + 0x12b10) = puVar14[2];
  *(undefined8 *)(param_1 + 0x12b18) = uVar11;
  uVar17 = *(undefined4 *)((longlong)puVar14 + 0x24);
  uVar18 = *(undefined4 *)(puVar14 + 5);
  uVar19 = *(undefined4 *)((longlong)puVar14 + 0x2c);
  *(undefined4 *)(param_1 + 0x12b20) = *(undefined4 *)(puVar14 + 4);
  *(undefined4 *)(param_1 + 0x12b24) = uVar17;
  *(undefined4 *)(param_1 + 0x12b28) = uVar18;
  *(undefined4 *)(param_1 + 0x12b2c) = uVar19;
  uVar17 = *(undefined4 *)((longlong)puVar14 + 0x34);
  uVar18 = *(undefined4 *)(puVar14 + 7);
  uVar19 = *(undefined4 *)((longlong)puVar14 + 0x3c);
  *(undefined4 *)(param_1 + 0x12b30) = *(undefined4 *)(puVar14 + 6);
  *(undefined4 *)(param_1 + 0x12b34) = uVar17;
  *(undefined4 *)(param_1 + 0x12b38) = uVar18;
  *(undefined4 *)(param_1 + 0x12b3c) = uVar19;
  puVar14 = (undefined8 *)FUN_180286f50(param_1 + 0x30,auStack_320);
  uVar11 = puVar14[1];
  *(undefined8 *)(param_1 + 0x12b80) = *puVar14;
  *(undefined8 *)(param_1 + 0x12b88) = uVar11;
  uVar11 = puVar14[3];
  *(undefined8 *)(param_1 + 0x12b90) = puVar14[2];
  *(undefined8 *)(param_1 + 0x12b98) = uVar11;
  uVar17 = *(undefined4 *)((longlong)puVar14 + 0x24);
  uVar18 = *(undefined4 *)(puVar14 + 5);
  uVar19 = *(undefined4 *)((longlong)puVar14 + 0x2c);
  *(undefined4 *)(param_1 + 0x12ba0) = *(undefined4 *)(puVar14 + 4);
  *(undefined4 *)(param_1 + 0x12ba4) = uVar17;
  *(undefined4 *)(param_1 + 0x12ba8) = uVar18;
  *(undefined4 *)(param_1 + 0x12bac) = uVar19;
  uVar17 = *(undefined4 *)((longlong)puVar14 + 0x34);
  uVar18 = *(undefined4 *)(puVar14 + 7);
  uVar19 = *(undefined4 *)((longlong)puVar14 + 0x3c);
  *(undefined4 *)(param_1 + 0x12bb0) = *(undefined4 *)(puVar14 + 6);
  *(undefined4 *)(param_1 + 0x12bb4) = uVar17;
  *(undefined4 *)(param_1 + 0x12bb8) = uVar18;
  *(undefined4 *)(param_1 + 0x12bbc) = uVar19;
  uVar11 = func_0x000180239f10(auStack_1e0);
  uVar12 = func_0x000180239f10(auStack_260,puVar1);
  uVar11 = FUN_18024dde0(uVar11,auStack_2e0,uVar12);
  puVar14 = (undefined8 *)func_0x000180645570(afStack_d8,uVar11);
  uVar11 = puVar14[1];
  *(undefined8 *)(param_1 + 0x12bc0) = *puVar14;
  *(undefined8 *)(param_1 + 0x12bc8) = uVar11;
  uVar11 = puVar14[3];
  *(undefined8 *)(param_1 + 0x12bd0) = puVar14[2];
  *(undefined8 *)(param_1 + 0x12bd8) = uVar11;
  uVar17 = *(undefined4 *)((longlong)puVar14 + 0x24);
  uVar18 = *(undefined4 *)(puVar14 + 5);
  uVar19 = *(undefined4 *)((longlong)puVar14 + 0x2c);
  *(undefined4 *)(param_1 + 0x12be0) = *(undefined4 *)(puVar14 + 4);
  *(undefined4 *)(param_1 + 0x12be4) = uVar17;
  *(undefined4 *)(param_1 + 0x12be8) = uVar18;
  *(undefined4 *)(param_1 + 0x12bec) = uVar19;
  uVar17 = *(undefined4 *)((longlong)puVar14 + 0x34);
  uVar18 = *(undefined4 *)(puVar14 + 7);
  uVar19 = *(undefined4 *)((longlong)puVar14 + 0x3c);
  *(undefined4 *)(param_1 + 0x12bf0) = *(undefined4 *)(puVar14 + 6);
  *(undefined4 *)(param_1 + 0x12bf4) = uVar17;
  *(undefined4 *)(param_1 + 0x12bf8) = uVar18;
  *(undefined4 *)(param_1 + 0x12bfc) = uVar19;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_358);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




