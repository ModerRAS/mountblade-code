#include "TaleWorlds.Native.Split.h"

// 99_part_05_part047.c - 6 个函数

// 函数: void FUN_1802f81d9(longlong param_1,undefined8 param_2,longlong param_3,float param_4)
void FUN_1802f81d9(longlong param_1,undefined8 param_2,longlong param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  longlong in_RAX;
  float fVar3;
  undefined8 in_XMM0_Qa;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  float fVar4;
  float fVar5;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar6;
  float in_XMM2_Da;
  float fVar7;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float fVar8;
  float in_XMM5_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar14 = *(float *)(in_RAX + 0x70);
  fVar9 = *(float *)(in_RAX + 0x74);
  fVar10 = *(float *)(in_RAX + 0x78);
  fVar11 = *(float *)(in_RAX + 0x7c);
  fVar13 = *(float *)(in_RAX + 0x90);
  fVar15 = *(float *)(in_RAX + 0x94);
  fVar16 = *(float *)(in_RAX + 0x98);
  fVar17 = *(float *)(in_RAX + 0x9c);
  fVar3 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(param_1 + 0x20);
  fVar4 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x30);
  fVar12 = *(float *)(param_1 + 0x38);
  fVar18 = *(float *)(in_RAX + 0xa0);
  fVar19 = *(float *)(in_RAX + 0xa4);
  fVar20 = *(float *)(in_RAX + 0xa8);
  fVar2 = *(float *)(in_RAX + 0xac);
  pfVar1 = (float *)(param_3 + 0x204);
  *pfVar1 = fVar3 * in_XMM4_Da + (float)in_XMM0_Qa * fVar14 + (float)param_2 * fVar13;
  *(float *)(param_3 + 0x208) =
       fVar3 * in_XMM4_Db + (float)((ulonglong)in_XMM0_Qa >> 0x20) * fVar9 +
       (float)((ulonglong)param_2 >> 0x20) * fVar15;
  *(float *)(param_3 + 0x20c) = fVar3 * in_XMM4_Dc + in_XMM0_Dc * fVar10 + in_XMM1_Dc * fVar16;
  *(float *)(param_3 + 0x210) = fVar3 * in_XMM4_Dd + in_XMM0_Dd * fVar11 + in_XMM1_Dd * fVar17;
  *(float *)(param_3 + 0x214) = in_XMM5_Da * in_XMM4_Da + fVar8 * fVar14 + fVar6 * fVar13;
  *(float *)(param_3 + 0x218) = in_XMM5_Da * in_XMM4_Db + fVar8 * fVar9 + fVar6 * fVar15;
  *(float *)(param_3 + 0x21c) = in_XMM5_Da * in_XMM4_Dc + fVar8 * fVar10 + fVar6 * fVar16;
  *(float *)(param_3 + 0x220) = in_XMM5_Da * in_XMM4_Dd + fVar8 * fVar11 + fVar6 * fVar17;
  *(float *)(param_3 + 0x224) = param_4 * in_XMM4_Da + fVar7 * fVar14 + fVar4 * fVar13;
  *(float *)(param_3 + 0x228) = param_4 * in_XMM4_Db + fVar7 * fVar9 + fVar4 * fVar15;
  *(float *)(param_3 + 0x22c) = param_4 * in_XMM4_Dc + fVar7 * fVar10 + fVar4 * fVar16;
  *(float *)(param_3 + 0x230) = param_4 * in_XMM4_Dd + fVar7 * fVar11 + fVar4 * fVar17;
  *(float *)(param_3 + 0x234) = in_XMM2_Da * in_XMM4_Da + fVar5 * fVar14 + fVar12 * fVar13 + fVar18;
  *(float *)(param_3 + 0x238) = in_XMM2_Da * in_XMM4_Db + fVar5 * fVar9 + fVar12 * fVar15 + fVar19;
  *(float *)(param_3 + 0x23c) = in_XMM2_Da * in_XMM4_Dc + fVar5 * fVar10 + fVar12 * fVar16 + fVar20;
  *(float *)(param_3 + 0x240) = in_XMM2_Da * in_XMM4_Dd + fVar5 * fVar11 + fVar12 * fVar17 + fVar2;
  *(undefined4 *)(param_3 + 0x240) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x210) = 0;
  *(undefined4 *)(param_3 + 0x220) = 0;
  *(undefined4 *)(param_3 + 0x230) = 0;
  fVar3 = *(float *)(param_3 + 0x21c);
  fVar8 = *(float *)(param_3 + 0x238);
  fVar6 = *(float *)(param_3 + 0x228);
  fVar7 = *(float *)(param_3 + 0x208);
  fVar4 = *(float *)(param_3 + 0x23c);
  fVar5 = *(float *)(param_3 + 0x20c);
  fVar12 = *(float *)(param_3 + 0x22c);
  fVar14 = *(float *)(param_3 + 0x218);
  fVar13 = fVar4 * fVar6 - fVar8 * fVar12;
  fVar10 = fVar4 * fVar14 - fVar8 * fVar3;
  fVar11 = fVar4 * fVar7 - fVar8 * fVar5;
  fVar18 = fVar14 * fVar12 - fVar6 * fVar3;
  fVar9 = fVar7 * fVar12 - fVar6 * fVar5;
  *(float *)(param_3 + 0x244) = fVar18;
  fVar8 = fVar7 * fVar3 - fVar14 * fVar5;
  fVar19 = fVar5 * *(float *)(param_3 + 0x228) - fVar12 * *(float *)(param_3 + 0x208);
  *(float *)(param_3 + 0x248) = fVar19;
  *(undefined4 *)(param_3 + 0x250) = 0;
  fVar20 = fVar3 * *(float *)(param_3 + 0x208) - fVar5 * *(float *)(param_3 + 0x218);
  *(float *)(param_3 + 0x24c) = fVar20;
  fVar4 = fVar3 * *(float *)(param_3 + 0x224) - fVar12 * *(float *)(param_3 + 0x214);
  *(float *)(param_3 + 0x254) = fVar4;
  fVar16 = fVar12 * *pfVar1 - fVar5 * *(float *)(param_3 + 0x224);
  *(float *)(param_3 + 600) = fVar16;
  *(undefined4 *)(param_3 + 0x260) = 0;
  fVar15 = fVar5 * *(float *)(param_3 + 0x214) - fVar3 * *pfVar1;
  *(float *)(param_3 + 0x25c) = fVar15;
  fVar5 = fVar6 * *(float *)(param_3 + 0x214) - fVar14 * *(float *)(param_3 + 0x224);
  *(float *)(param_3 + 0x264) = fVar5;
  fVar3 = fVar7 * *(float *)(param_3 + 0x224) - fVar6 * *pfVar1;
  *(float *)(param_3 + 0x268) = fVar3;
  *(undefined4 *)(param_3 + 0x270) = 0;
  fVar17 = fVar14 * *pfVar1 - fVar7 * *(float *)(param_3 + 0x214);
  *(float *)(param_3 + 0x26c) = fVar17;
  fVar6 = (fVar10 * *(float *)(param_3 + 0x224) - fVar13 * *(float *)(param_3 + 0x214)) -
          fVar18 * *(float *)(param_3 + 0x234);
  *(float *)(param_3 + 0x274) = fVar6;
  fVar14 = (fVar13 * *pfVar1 - fVar11 * *(float *)(param_3 + 0x224)) +
           fVar9 * *(float *)(param_3 + 0x234);
  *(float *)(param_3 + 0x278) = fVar14;
  fVar12 = (fVar11 * *(float *)(param_3 + 0x214) - fVar10 * *pfVar1) -
           fVar8 * *(float *)(param_3 + 0x234);
  *(float *)(param_3 + 0x27c) = fVar12;
  fVar7 = (fVar18 * *pfVar1 - fVar9 * *(float *)(param_3 + 0x214)) +
          fVar8 * *(float *)(param_3 + 0x224);
  *(float *)(param_3 + 0x280) = fVar7;
  fVar8 = fVar19 * *(float *)(param_3 + 0x214) + fVar18 * *pfVar1 +
          fVar20 * *(float *)(param_3 + 0x224);
  if (fVar8 != 1.0) {
    fVar8 = 1.0 / fVar8;
    *(float *)(param_3 + 0x254) = fVar4 * fVar8;
    *(float *)(param_3 + 0x264) = fVar5 * fVar8;
    *(float *)(param_3 + 0x244) = fVar18 * fVar8;
    *(float *)(param_3 + 0x248) = fVar19 * fVar8;
    *(float *)(param_3 + 0x24c) = fVar20 * fVar8;
    *(float *)(param_3 + 600) = fVar16 * fVar8;
    *(float *)(param_3 + 0x25c) = fVar15 * fVar8;
    *(float *)(param_3 + 0x268) = fVar3 * fVar8;
    *(float *)(param_3 + 0x26c) = fVar17 * fVar8;
    *(float *)(param_3 + 0x274) = fVar6 * fVar8;
    *(float *)(param_3 + 0x278) = fVar14 * fVar8;
    *(float *)(param_3 + 0x27c) = fVar12 * fVar8;
    *(float *)(param_3 + 0x280) = fVar7 * fVar8;
  }
  return;
}






// 函数: void FUN_1802f82b3(undefined8 *param_1,undefined8 param_2,longlong param_3)
void FUN_1802f82b3(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  
  uVar2 = param_1[1];
  pfVar1 = (float *)(param_3 + 0x204);
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *(undefined8 *)pfVar1 = *param_1;
  *(undefined8 *)(param_3 + 0x20c) = uVar2;
  uVar2 = param_1[4];
  uVar5 = param_1[5];
  *(undefined8 *)(param_3 + 0x214) = uVar3;
  *(undefined8 *)(param_3 + 0x21c) = uVar4;
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  *(undefined8 *)(param_3 + 0x224) = uVar2;
  *(undefined8 *)(param_3 + 0x22c) = uVar5;
  *(undefined8 *)(param_3 + 0x234) = uVar3;
  *(undefined8 *)(param_3 + 0x23c) = uVar4;
  *(undefined4 *)(param_3 + 0x240) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x210) = 0;
  *(undefined4 *)(param_3 + 0x220) = 0;
  *(undefined4 *)(param_3 + 0x230) = 0;
  fVar6 = *(float *)(param_3 + 0x21c);
  fVar11 = *(float *)(param_3 + 0x238);
  fVar9 = *(float *)(param_3 + 0x228);
  fVar10 = *(float *)(param_3 + 0x208);
  fVar7 = *(float *)(param_3 + 0x23c);
  fVar8 = *(float *)(param_3 + 0x20c);
  fVar15 = *(float *)(param_3 + 0x22c);
  fVar17 = *(float *)(param_3 + 0x218);
  fVar16 = fVar7 * fVar9 - fVar11 * fVar15;
  fVar13 = fVar7 * fVar17 - fVar11 * fVar6;
  fVar14 = fVar7 * fVar10 - fVar11 * fVar8;
  fVar21 = fVar17 * fVar15 - fVar9 * fVar6;
  fVar12 = fVar10 * fVar15 - fVar9 * fVar8;
  *(float *)(param_3 + 0x244) = fVar21;
  fVar11 = fVar10 * fVar6 - fVar17 * fVar8;
  fVar22 = fVar8 * *(float *)(param_3 + 0x228) - fVar15 * *(float *)(param_3 + 0x208);
  *(float *)(param_3 + 0x248) = fVar22;
  *(undefined4 *)(param_3 + 0x250) = 0;
  fVar23 = fVar6 * *(float *)(param_3 + 0x208) - fVar8 * *(float *)(param_3 + 0x218);
  *(float *)(param_3 + 0x24c) = fVar23;
  fVar7 = fVar6 * *(float *)(param_3 + 0x224) - fVar15 * *(float *)(param_3 + 0x214);
  *(float *)(param_3 + 0x254) = fVar7;
  fVar19 = fVar15 * *pfVar1 - fVar8 * *(float *)(param_3 + 0x224);
  *(float *)(param_3 + 600) = fVar19;
  *(undefined4 *)(param_3 + 0x260) = 0;
  fVar18 = fVar8 * *(float *)(param_3 + 0x214) - fVar6 * *pfVar1;
  *(float *)(param_3 + 0x25c) = fVar18;
  fVar8 = fVar9 * *(float *)(param_3 + 0x214) - fVar17 * *(float *)(param_3 + 0x224);
  *(float *)(param_3 + 0x264) = fVar8;
  fVar6 = fVar10 * *(float *)(param_3 + 0x224) - fVar9 * *pfVar1;
  *(float *)(param_3 + 0x268) = fVar6;
  *(undefined4 *)(param_3 + 0x270) = 0;
  fVar20 = fVar17 * *pfVar1 - fVar10 * *(float *)(param_3 + 0x214);
  *(float *)(param_3 + 0x26c) = fVar20;
  fVar9 = (fVar13 * *(float *)(param_3 + 0x224) - fVar16 * *(float *)(param_3 + 0x214)) -
          fVar21 * *(float *)(param_3 + 0x234);
  *(float *)(param_3 + 0x274) = fVar9;
  fVar17 = (fVar16 * *pfVar1 - fVar14 * *(float *)(param_3 + 0x224)) +
           fVar12 * *(float *)(param_3 + 0x234);
  *(float *)(param_3 + 0x278) = fVar17;
  fVar15 = (fVar14 * *(float *)(param_3 + 0x214) - fVar13 * *pfVar1) -
           fVar11 * *(float *)(param_3 + 0x234);
  *(float *)(param_3 + 0x27c) = fVar15;
  fVar10 = (fVar21 * *pfVar1 - fVar12 * *(float *)(param_3 + 0x214)) +
           fVar11 * *(float *)(param_3 + 0x224);
  *(float *)(param_3 + 0x280) = fVar10;
  fVar11 = fVar22 * *(float *)(param_3 + 0x214) + fVar21 * *pfVar1 +
           fVar23 * *(float *)(param_3 + 0x224);
  if (fVar11 != 1.0) {
    fVar11 = 1.0 / fVar11;
    *(float *)(param_3 + 0x254) = fVar7 * fVar11;
    *(float *)(param_3 + 0x264) = fVar8 * fVar11;
    *(float *)(param_3 + 0x244) = fVar21 * fVar11;
    *(float *)(param_3 + 0x248) = fVar22 * fVar11;
    *(float *)(param_3 + 0x24c) = fVar23 * fVar11;
    *(float *)(param_3 + 600) = fVar19 * fVar11;
    *(float *)(param_3 + 0x25c) = fVar18 * fVar11;
    *(float *)(param_3 + 0x268) = fVar6 * fVar11;
    *(float *)(param_3 + 0x26c) = fVar20 * fVar11;
    *(float *)(param_3 + 0x274) = fVar9 * fVar11;
    *(float *)(param_3 + 0x278) = fVar17 * fVar11;
    *(float *)(param_3 + 0x27c) = fVar15 * fVar11;
    *(float *)(param_3 + 0x280) = fVar10 * fVar11;
  }
  return;
}






// 函数: void FUN_1802f8320(longlong param_1,undefined8 *param_2)
void FUN_1802f8320(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_48 [64];
  
  puVar1 = (undefined8 *)(param_1 + 0x204);
  puVar5 = param_2;
  lVar6 = param_1;
  cVar4 = func_0x000180285980(puVar1);
  if (cVar4 != '\0') {
    puVar2 = (undefined8 *)(lVar6 + 0x180);
    lVar7 = lVar6;
    if (*(longlong *)(lVar6 + 0x28) == 0) {
      uVar3 = puVar5[1];
      *puVar2 = *puVar5;
      *(undefined8 *)(lVar6 + 0x188) = uVar3;
      uVar3 = puVar5[3];
      *(undefined8 *)(lVar6 + 400) = puVar5[2];
      *(undefined8 *)(lVar6 + 0x198) = uVar3;
      uVar8 = *(undefined4 *)((longlong)puVar5 + 0x24);
      uVar9 = *(undefined4 *)(puVar5 + 5);
      uVar10 = *(undefined4 *)((longlong)puVar5 + 0x2c);
      *(undefined4 *)(lVar6 + 0x1a0) = *(undefined4 *)(puVar5 + 4);
      *(undefined4 *)(lVar6 + 0x1a4) = uVar8;
      *(undefined4 *)(lVar6 + 0x1a8) = uVar9;
      *(undefined4 *)(lVar6 + 0x1ac) = uVar10;
      uVar8 = *(undefined4 *)(puVar5 + 6);
      uVar9 = *(undefined4 *)((longlong)puVar5 + 0x34);
      uVar10 = *(undefined4 *)(puVar5 + 7);
      uVar11 = *(undefined4 *)((longlong)puVar5 + 0x3c);
    }
    else {
      puVar5 = (undefined8 *)FUN_1802f5d10(*(longlong *)(lVar6 + 0x28) + 0x70,auStack_48,puVar5);
      uVar3 = puVar5[1];
      *puVar2 = *puVar5;
      *(undefined8 *)(lVar6 + 0x188) = uVar3;
      uVar3 = puVar5[3];
      *(undefined8 *)(lVar6 + 400) = puVar5[2];
      *(undefined8 *)(lVar6 + 0x198) = uVar3;
      uVar8 = *(undefined4 *)((longlong)puVar5 + 0x24);
      uVar9 = *(undefined4 *)(puVar5 + 5);
      uVar10 = *(undefined4 *)((longlong)puVar5 + 0x2c);
      *(undefined4 *)(lVar6 + 0x1a0) = *(undefined4 *)(puVar5 + 4);
      *(undefined4 *)(lVar6 + 0x1a4) = uVar8;
      *(undefined4 *)(lVar6 + 0x1a8) = uVar9;
      *(undefined4 *)(lVar6 + 0x1ac) = uVar10;
      uVar8 = *(undefined4 *)(puVar5 + 6);
      uVar9 = *(undefined4 *)((longlong)puVar5 + 0x34);
      uVar10 = *(undefined4 *)(puVar5 + 7);
      uVar11 = *(undefined4 *)((longlong)puVar5 + 0x3c);
    }
    *(undefined1 *)(lVar7 + 0x160) = 0;
    *(undefined4 *)(lVar6 + 0x1b0) = uVar8;
    *(undefined4 *)(lVar6 + 0x1b4) = uVar9;
    *(undefined4 *)(lVar6 + 0x1b8) = uVar10;
    *(undefined4 *)(lVar6 + 0x1bc) = uVar11;
    cVar4 = func_0x00018023a100(puVar2);
    if (cVar4 != '\0') {
      *(undefined1 *)(lVar7 + 0x160) = 1;
    }
    uVar3 = param_2[1];
    *puVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x20c) = uVar3;
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x214) = param_2[2];
    *(undefined8 *)(param_1 + 0x21c) = uVar3;
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar9 = *(undefined4 *)(param_2 + 5);
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x228) = uVar8;
    *(undefined4 *)(param_1 + 0x22c) = uVar9;
    *(undefined4 *)(param_1 + 0x230) = uVar10;
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar9 = *(undefined4 *)(param_2 + 7);
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x238) = uVar8;
    *(undefined4 *)(param_1 + 0x23c) = uVar9;
    *(undefined4 *)(param_1 + 0x240) = uVar10;
    *(undefined4 *)(lVar7 + 0x210) = 0;
    *(undefined4 *)(lVar7 + 0x220) = 0;
    *(undefined4 *)(lVar7 + 0x230) = 0;
    *(undefined4 *)(lVar7 + 0x240) = 0x3f800000;
    FUN_180084760(puVar1,lVar7 + 0x244);
  }
  return;
}






// 函数: void FUN_1802f834b(longlong param_1,undefined8 *param_2)
void FUN_1802f834b(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  undefined8 *unaff_RSI;
  longlong in_R10;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStackX_20 [8];
  
  puVar1 = (undefined8 *)(in_R10 + 0x180);
  lVar5 = in_R10;
  if (param_1 == 0) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    *(undefined8 *)(in_R10 + 0x188) = uVar2;
    uVar2 = param_2[3];
    *(undefined8 *)(in_R10 + 400) = param_2[2];
    *(undefined8 *)(in_R10 + 0x198) = uVar2;
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar7 = *(undefined4 *)(param_2 + 5);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(in_R10 + 0x1a0) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(in_R10 + 0x1a4) = uVar6;
    *(undefined4 *)(in_R10 + 0x1a8) = uVar7;
    *(undefined4 *)(in_R10 + 0x1ac) = uVar8;
    uVar6 = *(undefined4 *)(param_2 + 6);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar8 = *(undefined4 *)(param_2 + 7);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x3c);
  }
  else {
    puVar4 = (undefined8 *)FUN_1802f5d10(param_1 + 0x70,auStackX_20,param_2);
    uVar2 = puVar4[1];
    *puVar1 = *puVar4;
    *(undefined8 *)(in_R10 + 0x188) = uVar2;
    uVar2 = puVar4[3];
    *(undefined8 *)(in_R10 + 400) = puVar4[2];
    *(undefined8 *)(in_R10 + 0x198) = uVar2;
    uVar6 = *(undefined4 *)((longlong)puVar4 + 0x24);
    uVar7 = *(undefined4 *)(puVar4 + 5);
    uVar8 = *(undefined4 *)((longlong)puVar4 + 0x2c);
    *(undefined4 *)(in_R10 + 0x1a0) = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)(in_R10 + 0x1a4) = uVar6;
    *(undefined4 *)(in_R10 + 0x1a8) = uVar7;
    *(undefined4 *)(in_R10 + 0x1ac) = uVar8;
    uVar6 = *(undefined4 *)(puVar4 + 6);
    uVar7 = *(undefined4 *)((longlong)puVar4 + 0x34);
    uVar8 = *(undefined4 *)(puVar4 + 7);
    uVar9 = *(undefined4 *)((longlong)puVar4 + 0x3c);
  }
  *(undefined1 *)(lVar5 + 0x160) = 0;
  *(undefined4 *)(in_R10 + 0x1b0) = uVar6;
  *(undefined4 *)(in_R10 + 0x1b4) = uVar7;
  *(undefined4 *)(in_R10 + 0x1b8) = uVar8;
  *(undefined4 *)(in_R10 + 0x1bc) = uVar9;
  cVar3 = func_0x00018023a100(puVar1);
  if (cVar3 != '\0') {
    *(undefined1 *)(lVar5 + 0x160) = 1;
  }
  uVar2 = unaff_RBX[1];
  *unaff_RSI = *unaff_RBX;
  unaff_RSI[1] = uVar2;
  uVar2 = unaff_RBX[3];
  unaff_RSI[2] = unaff_RBX[2];
  unaff_RSI[3] = uVar2;
  uVar6 = *(undefined4 *)(unaff_RBX + 4);
  uVar7 = *(undefined4 *)((longlong)unaff_RBX + 0x24);
  uVar8 = *(undefined4 *)(unaff_RBX + 5);
  uVar9 = *(undefined4 *)((longlong)unaff_RBX + 0x2c);
  *(undefined4 *)(unaff_RSI + 4) = uVar6;
  *(undefined4 *)((longlong)unaff_RSI + 0x24) = uVar7;
  *(undefined4 *)(unaff_RSI + 5) = uVar8;
  *(undefined4 *)((longlong)unaff_RSI + 0x2c) = uVar9;
  uVar7 = *(undefined4 *)((longlong)unaff_RBX + 0x34);
  uVar8 = *(undefined4 *)(unaff_RBX + 7);
  uVar9 = *(undefined4 *)((longlong)unaff_RBX + 0x3c);
  *(undefined4 *)(unaff_RSI + 6) = *(undefined4 *)(unaff_RBX + 6);
  *(undefined4 *)((longlong)unaff_RSI + 0x34) = uVar7;
  *(undefined4 *)(unaff_RSI + 7) = uVar8;
  *(undefined4 *)((longlong)unaff_RSI + 0x3c) = uVar9;
  *(undefined4 *)(lVar5 + 0x210) = 0;
  *(undefined4 *)(lVar5 + 0x220) = 0;
  *(undefined4 *)(lVar5 + 0x230) = 0;
  *(undefined4 *)(lVar5 + 0x240) = 0x3f800000;
  FUN_180084760(uVar6,lVar5 + 0x244);
  return;
}






// 函数: void FUN_1802f83c0(void)
void FUN_1802f83c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_RBX;
  undefined8 *unaff_RSI;
  longlong in_R10;
  
  *(undefined1 *)(in_R10 + 0x160) = 1;
  uVar5 = unaff_RBX[1];
  *unaff_RSI = *unaff_RBX;
  unaff_RSI[1] = uVar5;
  uVar5 = unaff_RBX[3];
  unaff_RSI[2] = unaff_RBX[2];
  unaff_RSI[3] = uVar5;
  uVar1 = *(undefined4 *)(unaff_RBX + 4);
  uVar2 = *(undefined4 *)((longlong)unaff_RBX + 0x24);
  uVar3 = *(undefined4 *)(unaff_RBX + 5);
  uVar4 = *(undefined4 *)((longlong)unaff_RBX + 0x2c);
  *(undefined4 *)(unaff_RSI + 4) = uVar1;
  *(undefined4 *)((longlong)unaff_RSI + 0x24) = uVar2;
  *(undefined4 *)(unaff_RSI + 5) = uVar3;
  *(undefined4 *)((longlong)unaff_RSI + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)unaff_RBX + 0x34);
  uVar3 = *(undefined4 *)(unaff_RBX + 7);
  uVar4 = *(undefined4 *)((longlong)unaff_RBX + 0x3c);
  *(undefined4 *)(unaff_RSI + 6) = *(undefined4 *)(unaff_RBX + 6);
  *(undefined4 *)((longlong)unaff_RSI + 0x34) = uVar2;
  *(undefined4 *)(unaff_RSI + 7) = uVar3;
  *(undefined4 *)((longlong)unaff_RSI + 0x3c) = uVar4;
  *(undefined4 *)(in_R10 + 0x210) = 0;
  *(undefined4 *)(in_R10 + 0x220) = 0;
  *(undefined4 *)(in_R10 + 0x230) = 0;
  *(undefined4 *)(in_R10 + 0x240) = 0x3f800000;
  FUN_180084760(uVar1,in_R10 + 0x244);
  return;
}



float * FUN_1802f8430(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  char cVar32;
  undefined8 *puVar33;
  float *pfVar34;
  float *pfVar35;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    pfVar34 = (float *)(*(longlong *)(param_1 + 0x28) + 0x70);
    pfVar35 = (float *)(param_1 + 0x204);
    puVar33 = (undefined8 *)(param_1 + 0x1c4);
    cVar32 = func_0x000180285980();
    if (cVar32 != '\0') {
      cVar32 = *(char *)(param_1 + 0x160);
      uVar29 = *(undefined8 *)(pfVar34 + 2);
      *puVar33 = *(undefined8 *)pfVar34;
      puVar33[1] = uVar29;
      uVar29 = *(undefined8 *)(pfVar34 + 6);
      puVar33[2] = *(undefined8 *)(pfVar34 + 4);
      puVar33[3] = uVar29;
      uVar29 = *(undefined8 *)(pfVar34 + 10);
      puVar33[4] = *(undefined8 *)(pfVar34 + 8);
      puVar33[5] = uVar29;
      uVar29 = *(undefined8 *)(pfVar34 + 0xe);
      puVar33[6] = *(undefined8 *)(pfVar34 + 0xc);
      puVar33[7] = uVar29;
      if (cVar32 == '\0') {
        fVar13 = pfVar34[4];
        fVar14 = pfVar34[5];
        fVar15 = pfVar34[6];
        fVar16 = pfVar34[7];
        fVar1 = *(float *)(param_1 + 0x180);
        fVar2 = *(float *)(param_1 + 0x188);
        fVar3 = *(float *)(param_1 + 0x194);
        fVar4 = *(float *)(param_1 + 0x1a4);
        fVar5 = *(float *)(param_1 + 0x1b4);
        fVar17 = *pfVar34;
        fVar18 = pfVar34[1];
        fVar19 = pfVar34[2];
        fVar20 = pfVar34[3];
        fVar21 = pfVar34[8];
        fVar22 = pfVar34[9];
        fVar23 = pfVar34[10];
        fVar24 = pfVar34[0xb];
        fVar6 = *(float *)(param_1 + 0x184);
        fVar7 = *(float *)(param_1 + 400);
        fVar8 = *(float *)(param_1 + 0x198);
        fVar9 = *(float *)(param_1 + 0x1a0);
        fVar10 = *(float *)(param_1 + 0x1a8);
        fVar11 = *(float *)(param_1 + 0x1b0);
        fVar12 = *(float *)(param_1 + 0x1b8);
        fVar25 = pfVar34[0xc];
        fVar26 = pfVar34[0xd];
        fVar27 = pfVar34[0xe];
        fVar28 = pfVar34[0xf];
        *pfVar35 = fVar6 * fVar13 + fVar1 * fVar17 + fVar2 * fVar21;
        pfVar35[1] = fVar6 * fVar14 + fVar1 * fVar18 + fVar2 * fVar22;
        pfVar35[2] = fVar6 * fVar15 + fVar1 * fVar19 + fVar2 * fVar23;
        pfVar35[3] = fVar6 * fVar16 + fVar1 * fVar20 + fVar2 * fVar24;
        pfVar35[4] = fVar3 * fVar13 + fVar7 * fVar17 + fVar8 * fVar21;
        pfVar35[5] = fVar3 * fVar14 + fVar7 * fVar18 + fVar8 * fVar22;
        pfVar35[6] = fVar3 * fVar15 + fVar7 * fVar19 + fVar8 * fVar23;
        pfVar35[7] = fVar3 * fVar16 + fVar7 * fVar20 + fVar8 * fVar24;
        pfVar35[8] = fVar4 * fVar13 + fVar9 * fVar17 + fVar10 * fVar21;
        pfVar35[9] = fVar4 * fVar14 + fVar9 * fVar18 + fVar10 * fVar22;
        pfVar35[10] = fVar4 * fVar15 + fVar9 * fVar19 + fVar10 * fVar23;
        pfVar35[0xb] = fVar4 * fVar16 + fVar9 * fVar20 + fVar10 * fVar24;
        pfVar35[0xc] = fVar5 * fVar13 + fVar11 * fVar17 + fVar12 * fVar21 + fVar25;
        pfVar35[0xd] = fVar5 * fVar14 + fVar11 * fVar18 + fVar12 * fVar22 + fVar26;
        pfVar35[0xe] = fVar5 * fVar15 + fVar11 * fVar19 + fVar12 * fVar23 + fVar27;
        pfVar35[0xf] = fVar5 * fVar16 + fVar11 * fVar20 + fVar12 * fVar24 + fVar28;
      }
      else {
        uVar29 = puVar33[1];
        uVar30 = puVar33[2];
        uVar31 = puVar33[3];
        *(undefined8 *)pfVar35 = *puVar33;
        *(undefined8 *)(pfVar35 + 2) = uVar29;
        fVar1 = *(float *)(puVar33 + 4);
        fVar2 = *(float *)((longlong)puVar33 + 0x24);
        fVar3 = *(float *)(puVar33 + 5);
        fVar4 = *(float *)((longlong)puVar33 + 0x2c);
        *(undefined8 *)(pfVar35 + 4) = uVar30;
        *(undefined8 *)(pfVar35 + 6) = uVar31;
        fVar5 = *(float *)(puVar33 + 6);
        fVar6 = *(float *)((longlong)puVar33 + 0x34);
        fVar7 = *(float *)(puVar33 + 7);
        fVar8 = *(float *)((longlong)puVar33 + 0x3c);
        pfVar35[8] = fVar1;
        pfVar35[9] = fVar2;
        pfVar35[10] = fVar3;
        pfVar35[0xb] = fVar4;
        pfVar35[0xc] = fVar5;
        pfVar35[0xd] = fVar6;
        pfVar35[0xe] = fVar7;
        pfVar35[0xf] = fVar8;
      }
      *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x210) = 0;
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(undefined4 *)(param_1 + 0x230) = 0;
      FUN_180084760(pfVar35,param_1 + 0x244);
    }
    return pfVar35;
  }
  return (float *)(param_1 + 0x180);
}



float * FUN_1802f84eb(undefined8 param_1,float *param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *in_R9;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined8 in_XMM1_Qa;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float in_XMM5_Da;
  
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  fVar12 = param_2[8];
  fVar13 = param_2[9];
  fVar14 = param_2[10];
  fVar15 = param_2[0xb];
  fVar1 = *(float *)(param_3 + 0x184);
  fVar2 = *(float *)(param_3 + 400);
  fVar3 = *(float *)(param_3 + 0x198);
  fVar4 = *(float *)(param_3 + 0x1a0);
  fVar5 = *(float *)(param_3 + 0x1a8);
  fVar6 = *(float *)(param_3 + 0x1b0);
  fVar7 = *(float *)(param_3 + 0x1b8);
  fVar16 = param_2[0xc];
  fVar17 = param_2[0xd];
  fVar18 = param_2[0xe];
  fVar19 = param_2[0xf];
  *in_R9 = fVar1 * in_XMM4_Da + (float)param_1 * fVar8 + (float)in_XMM1_Qa * fVar12;
  in_R9[1] = fVar1 * in_XMM4_Db + (float)((ulonglong)param_1 >> 0x20) * fVar9 +
             (float)((ulonglong)in_XMM1_Qa >> 0x20) * fVar13;
  in_R9[2] = fVar1 * in_XMM4_Dc + in_XMM0_Dc * fVar10 + in_XMM1_Dc * fVar14;
  in_R9[3] = fVar1 * in_XMM4_Dd + in_XMM0_Dd * fVar11 + in_XMM1_Dd * fVar15;
  in_R9[4] = in_XMM5_Da * in_XMM4_Da + fVar2 * fVar8 + fVar3 * fVar12;
  in_R9[5] = in_XMM5_Da * in_XMM4_Db + fVar2 * fVar9 + fVar3 * fVar13;
  in_R9[6] = in_XMM5_Da * in_XMM4_Dc + fVar2 * fVar10 + fVar3 * fVar14;
  in_R9[7] = in_XMM5_Da * in_XMM4_Dd + fVar2 * fVar11 + fVar3 * fVar15;
  in_R9[8] = param_4 * in_XMM4_Da + fVar4 * fVar8 + fVar5 * fVar12;
  in_R9[9] = param_4 * in_XMM4_Db + fVar4 * fVar9 + fVar5 * fVar13;
  in_R9[10] = param_4 * in_XMM4_Dc + fVar4 * fVar10 + fVar5 * fVar14;
  in_R9[0xb] = param_4 * in_XMM4_Dd + fVar4 * fVar11 + fVar5 * fVar15;
  in_R9[0xc] = in_XMM2_Da * in_XMM4_Da + fVar6 * fVar8 + fVar7 * fVar12 + fVar16;
  in_R9[0xd] = in_XMM2_Da * in_XMM4_Db + fVar6 * fVar9 + fVar7 * fVar13 + fVar17;
  in_R9[0xe] = in_XMM2_Da * in_XMM4_Dc + fVar6 * fVar10 + fVar7 * fVar14 + fVar18;
  in_R9[0xf] = in_XMM2_Da * in_XMM4_Dd + fVar6 * fVar11 + fVar7 * fVar15 + fVar19;
  *(undefined4 *)(param_3 + 0x240) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x210) = 0;
  *(undefined4 *)(param_3 + 0x220) = 0;
  *(undefined4 *)(param_3 + 0x230) = 0;
  FUN_180084760(in_R9,param_3 + 0x244);
  return in_R9;
}



undefined8 FUN_1802f85d3(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  *(undefined4 *)(param_3 + 0x240) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x210) = 0;
  *(undefined4 *)(param_3 + 0x220) = 0;
  *(undefined4 *)(param_3 + 0x230) = 0;
  FUN_180084760(param_4,param_3 + 0x244);
  return param_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f8640(longlong param_1,longlong param_2)
void FUN_1802f8640(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_68;
  undefined auStack_60 [72];
  ulonglong uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_78 = &UNK_1809fcc58;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_68 = (undefined4)lVar1;
    strcpy_s(auStack_60,0x40,param_2);
  }
  puVar2 = &DAT_18098bc73;
  if (puStack_70 != (undefined *)0x0) {
    puVar2 = puStack_70;
  }
  (**(code **)(*(longlong *)(param_1 + 0x138) + 0x10))((longlong *)(param_1 + 0x138),puVar2);
  puStack_78 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




