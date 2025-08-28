#include "TaleWorlds.Native.Split.h"

// 99_part_03_part087.c - 2 个函数

// 函数: void FUN_18024b8f9(longlong param_1)
void FUN_18024b8f9(longlong param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
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
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  longlong in_R11;
  byte bVar16;
  undefined8 unaff_R14;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined8 uStackX_20;
  double dStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RDI;
  lVar13 = *(longlong *)(param_1 + 0x3580);
  *(undefined8 *)(in_R11 + 0x18) = unaff_R14;
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
  FUN_180287b30(param_1 + 0xf0,unaff_RBP + 0x100);
  puVar14 = (undefined8 *)(param_1 + 0x12a00);
  bVar16 = *(byte *)(param_1 + 0x1bd8);
  *(undefined4 *)(unaff_RBP + 0x10c) = 0;
  *(undefined4 *)(unaff_RBP + 0x11c) = 0;
  *(undefined4 *)(unaff_RBP + 300) = 0;
  uVar11 = *(undefined8 *)(unaff_RBP + 0x108);
  uVar12 = *(undefined8 *)(unaff_RBP + 0x110);
  uVar7 = *(undefined8 *)(unaff_RBP + 0x118);
  *puVar14 = *(undefined8 *)(unaff_RBP + 0x100);
  *(undefined8 *)(param_1 + 0x12a08) = uVar11;
  uVar17 = *(undefined4 *)(unaff_RBP + 0x120);
  uVar18 = *(undefined4 *)(unaff_RBP + 0x124);
  uVar19 = *(undefined4 *)(unaff_RBP + 0x128);
  uVar20 = *(undefined4 *)(unaff_RBP + 300);
  *(undefined8 *)(param_1 + 0x12a10) = uVar12;
  *(undefined8 *)(param_1 + 0x12a18) = uVar7;
  uVar4 = *(undefined4 *)(unaff_RBP + 0x130);
  uVar5 = *(undefined4 *)(unaff_RBP + 0x134);
  uVar6 = *(undefined4 *)(unaff_RBP + 0x138);
  *(undefined4 *)(param_1 + 0x12a20) = uVar17;
  *(undefined4 *)(param_1 + 0x12a24) = uVar18;
  *(undefined4 *)(param_1 + 0x12a28) = uVar19;
  *(undefined4 *)(param_1 + 0x12a2c) = uVar20;
  *(undefined4 *)(unaff_RBP + 0x130) = uVar4;
  *(undefined4 *)(unaff_RBP + 0x134) = uVar5;
  *(undefined4 *)(unaff_RBP + 0x138) = uVar6;
  *(undefined4 *)(unaff_RBP + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12a30) = uVar4;
  *(undefined4 *)(param_1 + 0x12a34) = uVar5;
  *(undefined4 *)(param_1 + 0x12a38) = uVar6;
  *(undefined4 *)(param_1 + 0x12a3c) = 0x3f800000;
  bVar16 = bVar16 & 0x20;
  if ((((bVar16 == 0) && ((*(byte *)(param_1 + 0x1bd9) & 2) == 0)) ||
      (*(int *)(_DAT_180c8a9c8 + 0xa10) == 0)) || (*(char *)(param_1 + 0x130) == '\0')) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  puVar10 = (undefined8 *)FUN_180286010(param_1 + 0x30,unaff_RBP + 0x100,uVar11);
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
  uVar11 = func_0x000180239f10(&stack0x00000078,puVar14);
  uVar12 = func_0x000180239f10(unaff_RBP + -8,puVar1);
  uVar11 = FUN_18024dde0(uVar11,unaff_RBP + 0x78,uVar12);
  puVar10 = (undefined8 *)func_0x000180645570(&stack0x00000038,uVar11);
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
    iVar3 = *(int *)(lVar13 + 0xf0);
    *(undefined8 *)(unaff_RBP + 0x180) = 0x3e8000003f000000;
    *(undefined8 *)(unaff_RBP + 0x188) = 0x3e0000003f400000;
    *(undefined8 *)(unaff_RBP + 400) = 0x3ec000003f200000;
    *(undefined8 *)(unaff_RBP + 0x198) = 0x3d8000003f600000;
    *(undefined8 *)(unaff_RBP + 0x1a0) = 0x3ea000003f100000;
    *(undefined8 *)(unaff_RBP + 0x1a8) = 0x3e4000003f500000;
    *(undefined8 *)(unaff_RBP + 0x1b0) = 0x3ee000003f300000;
    *(undefined8 *)(unaff_RBP + 0x1b8) = 0x3d0000003f700000;
    *(undefined8 *)(unaff_RBP + 0x1c0) = 0x3e9000003f080000;
    *(undefined8 *)(unaff_RBP + 0x1c8) = 0x3e2000003f480000;
    *(undefined8 *)(unaff_RBP + 0x1d0) = 0x3ed000003f280000;
    *(undefined8 *)(unaff_RBP + 0x1d8) = 0x3dc000003f680000;
    *(undefined8 *)(unaff_RBP + 0x1e0) = 0x3eb000003f180000;
    *(undefined8 *)(unaff_RBP + 0x1e8) = 0x3e6000003f580000;
    *(undefined8 *)(unaff_RBP + 0x1f0) = 0x3ef000003f380000;
    *(undefined8 *)(unaff_RBP + 0x1f8) = 0x3c8000003f780000;
    *(undefined8 *)(unaff_RBP + 0x100) = 0x3f2aaaab3eaaaaab;
    *(undefined8 *)(unaff_RBP + 0x108) = 0x3ee38e393de38e39;
    *(undefined8 *)(unaff_RBP + 0x110) = 0x3e638e393f471c72;
    *(undefined8 *)(unaff_RBP + 0x118) = 0x3f638e393f0e38e4;
    *(undefined8 *)(unaff_RBP + 0x120) = 0x3ebda12f3d17b427;
    *(undefined8 *)(unaff_RBP + 0x128) = 0x3e17b4263f3425ed;
    *(undefined8 *)(unaff_RBP + 0x130) = 0x3f5097b43ef684be;
    *(undefined8 *)(unaff_RBP + 0x138) = 0x3f17b4263e84bda1;
    *(undefined8 *)(unaff_RBP + 0x140) = 0x3d97b4253f6d097b;
    *(undefined8 *)(unaff_RBP + 0x148) = 0x3f3da12f3ed097b4;
    *(undefined8 *)(unaff_RBP + 0x150) = 0x3f04bda13e3da130;
    *(undefined8 *)(unaff_RBP + 0x158) = 0x3e97b4263f5a12f6;
    *(undefined4 *)(unaff_RBP + 0x160) = 0x3f212f68;
    *(undefined4 *)(unaff_RBP + 0x164) = 0x3f7684be;
    *(undefined4 *)(unaff_RBP + 0x168) = 0x3c4a4589;
    *(undefined4 *)(unaff_RBP + 0x16c) = 0x3eb0fcd7;
    *(undefined4 *)(unaff_RBP + 0x170) = 0x3f2dd3c1;
    *(undefined4 *)(unaff_RBP + 0x174) = 0x3dfcd6ea;
    *(undefined4 *)(unaff_RBP + 0x178) = 0x3ee9e065;
    *(undefined4 *)(unaff_RBP + 0x17c) = 0x3f4a4588;
    uVar15 = iVar3 + 1U & 0x8000001f;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
    }
    *(uint *)(lVar13 + 0xf0) = uVar15;
    lVar13 = (longlong)(int)(*(longlong **)(param_1 + 0x3580))[0x1e];
    fVar22 = *(float *)(unaff_RBP + 0x180 + lVar13 * 4) - 0.5;
    fVar23 = *(float *)(unaff_RBP + 0x100 + lVar13 * 4) - 0.5;
    lVar13 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
    if (lVar13 == 0) {
LAB_18024bd3a:
      uStackX_20 = 1.0;
      dStack0000000000000028 = 1.0;
    }
    else {
      cVar9 = (**(code **)(**(longlong **)(param_1 + 0x3580) + 0x78))();
      if (cVar9 == '\0') goto LAB_18024bd3a;
      uStackX_20 = 1.0;
      dStack0000000000000028 = 1.0;
      if ((*(char *)(lVar13 + 0xd9) != '\0') && (*(int *)(_DAT_180c86920 + 0x540) - 1U < 4)) {
        pdVar2 = (double *)(lVar13 + -8 + (longlong)*(int *)(_DAT_180c86920 + 0x540) * 0x10);
        uStackX_20 = *pdVar2;
        dStack0000000000000028 = pdVar2[1];
      }
    }
    dVar21 = uStackX_20 + uStackX_20;
    uStackX_20 = (double)CONCAT44(fVar23,fVar22);
    *(float *)(param_1 + 0x12a60) =
         *(float *)(param_1 + 0x12a60) -
         (float)((dVar21 * (double)fVar22) / (double)*(float *)(param_1 + 0x11c20));
    *(float *)(param_1 + 0x12a64) =
         *(float *)(param_1 + 0x12a64) -
         (float)((dStack0000000000000028 * -2.0 * (double)fVar23) /
                (double)*(float *)(param_1 + 0x11c24));
  }
  else {
    uStack0000000000000030 = 0xbf000000;
    uStack0000000000000034 = 0x3f000000;
    uStackX_20 = 3.0517599839186005e-05;
    uVar15 = *(uint *)(lVar13 + 0xf0) & 0x80000001;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(lVar13 + 0xf0) = *(uint *)(lVar13 + 0xf0) + 1;
    fVar22 = *(float *)((longlong)&uStackX_20 + (longlong)(int)uVar15 * 4);
    fVar23 = *(float *)((longlong)&stack0x00000030 + (longlong)(int)uVar15 * 4);
    *(float *)(param_1 + 0x12a64) =
         fVar22 / *(float *)(param_1 + 0x11c24) + *(float *)(param_1 + 0x12a64);
    *(float *)(param_1 + 0x12a60) =
         fVar23 / *(float *)(param_1 + 0x11c20) + *(float *)(param_1 + 0x12a60);
    uStackX_20 = (double)CONCAT44(fVar22 + fVar22,fVar23 + fVar23);
  }
  *(double *)(param_1 + 0x12c00) = uStackX_20;
LAB_18024bde4:
  uVar11 = func_0x000180239f10(unaff_RBP + 0x78,puVar14);
  uVar12 = func_0x000180239f10(unaff_RBP + -8,puVar1);
  uVar11 = FUN_18024dde0(uVar11,&stack0x00000078,uVar12);
  puVar10 = (undefined8 *)func_0x000180645570(&stack0x00000038,uVar11);
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
  uVar11 = FUN_180286010(param_1 + 0x30,&stack0x00000038,0);
  puVar14 = (undefined8 *)FUN_1800946d0(puVar14,unaff_RBP + 0x100,uVar11);
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
  puVar14 = (undefined8 *)FUN_180286f50(param_1 + 0x30,&stack0x00000038);
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
  uVar11 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar12 = func_0x000180239f10(unaff_RBP + -8,puVar1);
  uVar11 = FUN_18024dde0(uVar11,&stack0x00000078,uVar12);
  puVar14 = (undefined8 *)func_0x000180645570(unaff_RBP + 0x180,uVar11);
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
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x200) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024bc7e(undefined8 param_1,undefined8 param_2)
void FUN_18024bc7e(undefined8 param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint in_EAX;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined8 uStackX_20;
  double dStack0000000000000028;
  
  *(int *)(unaff_RBP + 0x160) = (int)param_1;
  *(int *)(unaff_RBP + 0x164) = (int)((ulonglong)param_1 >> 0x20);
  *(undefined4 *)(unaff_RBP + 0x168) = in_XMM0_Dc;
  *(undefined4 *)(unaff_RBP + 0x16c) = in_XMM0_Dd;
  *(int *)(unaff_RBP + 0x170) = (int)param_2;
  *(int *)(unaff_RBP + 0x174) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(unaff_RBP + 0x178) = in_XMM1_Dc;
  *(undefined4 *)(unaff_RBP + 0x17c) = in_XMM1_Dd;
  uVar12 = in_EAX & 0x8000001f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
  }
  *(uint *)(unaff_RDI + 0xf0) = uVar12;
  lVar13 = (longlong)(int)(*(longlong **)(unaff_RBX + 0x3580))[0x1e];
  fVar18 = *(float *)(unaff_RBP + 0x180 + lVar13 * 4) - 0.5;
  fVar19 = *(float *)(unaff_RBP + 0x100 + lVar13 * 4) - 0.5;
  lVar13 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
  if (lVar13 != 0) {
    cVar11 = (**(code **)(**(longlong **)(unaff_RBX + 0x3580) + 0x78))();
    if (cVar11 != '\0') {
      uStackX_20 = 1.0;
      dStack0000000000000028 = 1.0;
      if ((*(char *)(lVar13 + 0xd9) != '\0') && (*(int *)(_DAT_180c86920 + 0x540) - 1U < 4)) {
        pdVar1 = (double *)(lVar13 + -8 + (longlong)*(int *)(_DAT_180c86920 + 0x540) * 0x10);
        uStackX_20 = *pdVar1;
        dStack0000000000000028 = pdVar1[1];
      }
      goto LAB_18024bd46;
    }
  }
  uStackX_20 = 1.0;
  dStack0000000000000028 = 1.0;
LAB_18024bd46:
  dVar17 = uStackX_20 + uStackX_20;
  uStackX_20 = (double)CONCAT44(fVar19,fVar18);
  *(float *)(unaff_RBX + 0x12a60) =
       *(float *)(unaff_RBX + 0x12a60) -
       (float)((dVar17 * (double)fVar18) / (double)*(float *)(unaff_RBX + 0x11c20));
  *(float *)(unaff_RBX + 0x12a64) =
       *(float *)(unaff_RBX + 0x12a64) -
       (float)((dStack0000000000000028 * -2.0 * (double)fVar19) /
              (double)*(float *)(unaff_RBX + 0x11c24));
  *(double *)(unaff_RBX + 0x12c00) = uStackX_20;
  uVar14 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar15 = func_0x000180239f10(unaff_RBP + -8);
  uVar14 = FUN_18024dde0(uVar14,&stack0x00000078,uVar15);
  puVar16 = (undefined8 *)func_0x000180645570(&stack0x00000038,uVar14);
  uVar14 = puVar16[1];
  *(undefined8 *)(unaff_RBX + 0x12a80) = *puVar16;
  *(undefined8 *)(unaff_RBX + 0x12a88) = uVar14;
  uVar14 = puVar16[3];
  *(undefined8 *)(unaff_RBX + 0x12a90) = puVar16[2];
  *(undefined8 *)(unaff_RBX + 0x12a98) = uVar14;
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x24);
  uVar3 = *(undefined4 *)(puVar16 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12aa0) = *(undefined4 *)(puVar16 + 4);
  *(undefined4 *)(unaff_RBX + 0x12aa4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12aa8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12aac) = uVar4;
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x34);
  uVar3 = *(undefined4 *)(puVar16 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x3c);
  lVar13 = *(longlong *)(unaff_RBX + 0x3580);
  *(undefined4 *)(unaff_RBX + 0x12ab0) = *(undefined4 *)(puVar16 + 6);
  *(undefined4 *)(unaff_RBX + 0x12ab4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12ab8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12abc) = uVar4;
  if (((lVar13 != 0) && ((*(byte *)(unaff_RBX + 0x1bd9) & 2) == 0)) &&
     ((*(byte *)(unaff_RBX + 0x1bd8) & 0x20) != 0)) {
    uVar2 = *(undefined4 *)(unaff_RBX + 0x12ac4);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x12ac8);
    uVar4 = *(undefined4 *)(unaff_RBX + 0x12acc);
    uVar5 = *(undefined4 *)(unaff_RBX + 0x12ad0);
    uVar6 = *(undefined4 *)(unaff_RBX + 0x12ad4);
    uVar7 = *(undefined4 *)(unaff_RBX + 0x12ad8);
    uVar8 = *(undefined4 *)(unaff_RBX + 0x12adc);
    uVar14 = *(undefined8 *)(unaff_RBX + 0x12ae0);
    uVar15 = *(undefined8 *)(unaff_RBX + 0x12ae8);
    uVar9 = *(undefined8 *)(unaff_RBX + 0x12af0);
    uVar10 = *(undefined8 *)(unaff_RBX + 0x12af8);
    *(undefined4 *)(lVar13 + 0x680) = *(undefined4 *)(unaff_RBX + 0x12ac0);
    *(undefined4 *)(lVar13 + 0x684) = uVar2;
    *(undefined4 *)(lVar13 + 0x688) = uVar3;
    *(undefined4 *)(lVar13 + 0x68c) = uVar4;
    *(undefined4 *)(lVar13 + 0x690) = uVar5;
    *(undefined4 *)(lVar13 + 0x694) = uVar6;
    *(undefined4 *)(lVar13 + 0x698) = uVar7;
    *(undefined4 *)(lVar13 + 0x69c) = uVar8;
    *(undefined8 *)(lVar13 + 0x6a0) = uVar14;
    *(undefined8 *)(lVar13 + 0x6a8) = uVar15;
    *(undefined8 *)(lVar13 + 0x6b0) = uVar9;
    *(undefined8 *)(lVar13 + 0x6b8) = uVar10;
  }
  uVar14 = FUN_180286010(unaff_RBX + 0x30,&stack0x00000038,0);
  puVar16 = (undefined8 *)FUN_1800946d0(extraout_XMM0_Da,unaff_RBP + 0x100,uVar14);
  uVar14 = puVar16[1];
  *(undefined8 *)(unaff_RBX + 0x12b00) = *puVar16;
  *(undefined8 *)(unaff_RBX + 0x12b08) = uVar14;
  uVar14 = puVar16[3];
  *(undefined8 *)(unaff_RBX + 0x12b10) = puVar16[2];
  *(undefined8 *)(unaff_RBX + 0x12b18) = uVar14;
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x24);
  uVar3 = *(undefined4 *)(puVar16 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12b20) = *(undefined4 *)(puVar16 + 4);
  *(undefined4 *)(unaff_RBX + 0x12b24) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12b28) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12b2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x34);
  uVar3 = *(undefined4 *)(puVar16 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12b30) = *(undefined4 *)(puVar16 + 6);
  *(undefined4 *)(unaff_RBX + 0x12b34) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12b38) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12b3c) = uVar4;
  puVar16 = (undefined8 *)FUN_180286f50(unaff_RBX + 0x30,&stack0x00000038);
  uVar14 = puVar16[1];
  *(undefined8 *)(unaff_RBX + 0x12b80) = *puVar16;
  *(undefined8 *)(unaff_RBX + 0x12b88) = uVar14;
  uVar14 = puVar16[3];
  *(undefined8 *)(unaff_RBX + 0x12b90) = puVar16[2];
  *(undefined8 *)(unaff_RBX + 0x12b98) = uVar14;
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x24);
  uVar3 = *(undefined4 *)(puVar16 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12ba0) = *(undefined4 *)(puVar16 + 4);
  *(undefined4 *)(unaff_RBX + 0x12ba4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12ba8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12bac) = uVar4;
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x34);
  uVar3 = *(undefined4 *)(puVar16 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12bb0) = *(undefined4 *)(puVar16 + 6);
  *(undefined4 *)(unaff_RBX + 0x12bb4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12bb8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12bbc) = uVar4;
  uVar14 = func_0x000180239f10(unaff_RBP + 0x78);
  uVar15 = func_0x000180239f10(unaff_RBP + -8);
  uVar14 = FUN_18024dde0(uVar14,&stack0x00000078,uVar15);
  puVar16 = (undefined8 *)func_0x000180645570(unaff_RBP + 0x180,uVar14);
  uVar14 = puVar16[1];
  *(undefined8 *)(unaff_RBX + 0x12bc0) = *puVar16;
  *(undefined8 *)(unaff_RBX + 0x12bc8) = uVar14;
  uVar14 = puVar16[3];
  *(undefined8 *)(unaff_RBX + 0x12bd0) = puVar16[2];
  *(undefined8 *)(unaff_RBX + 0x12bd8) = uVar14;
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x24);
  uVar3 = *(undefined4 *)(puVar16 + 5);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x2c);
  *(undefined4 *)(unaff_RBX + 0x12be0) = *(undefined4 *)(puVar16 + 4);
  *(undefined4 *)(unaff_RBX + 0x12be4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12be8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12bec) = uVar4;
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x34);
  uVar3 = *(undefined4 *)(puVar16 + 7);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x3c);
  *(undefined4 *)(unaff_RBX + 0x12bf0) = *(undefined4 *)(puVar16 + 6);
  *(undefined4 *)(unaff_RBX + 0x12bf4) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x12bf8) = uVar3;
  *(undefined4 *)(unaff_RBX + 0x12bfc) = uVar4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x200) ^ (ulonglong)&stack0x00000000);
}






