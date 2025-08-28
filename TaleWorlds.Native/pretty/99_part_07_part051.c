#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part051.c - 16 个函数

// 函数: void FUN_1804cd9f0(uint64_t param_1,int64_t param_2,int32_t param_3)
void FUN_1804cd9f0(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
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
  uint64_t uVar18;
  int64_t in_RAX;
  int64_t lVar19;
  uint uVar20;
  uint64_t unaff_RBX;
  uint64_t uVar21;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar22;
  ushort uVar23;
  int64_t in_R11;
  ushort unaff_R12W;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float in_XMM4_Da;
  float fVar28;
  float in_XMM4_Db;
  float fVar29;
  float in_XMM4_Dc;
  float fVar30;
  float in_XMM4_Dd;
  float fVar31;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  int32_t unaff_XMM6_Da;
  float fVar32;
  int32_t unaff_XMM6_Db;
  float fVar33;
  int32_t unaff_XMM6_Dc;
  float fVar34;
  int32_t unaff_XMM6_Dd;
  float fVar35;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  uint64_t uStack0000000000000030;
  int32_t uStack0000000000000038;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  uVar21 = 0;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  uStack0000000000000030 = 0;
  *(int16_t *)(unaff_RBP + -0x7d) = 0xff01;
  *(uint64_t *)(unaff_RBP + -0x79) = 0;
  *(int32_t *)(unaff_RBP + -0x59) = 0;
  uVar3 = *(int32_t *)(param_2 + 0x48 + in_RAX * 0x50);
  *(int32_t *)(unaff_RBP + -0x71) = *(int32_t *)(param_2 + 0x3c + in_RAX * 0x50);
  *(int32_t *)(unaff_RBP + -0x6d) = *(int32_t *)(param_2 + 0x38 + in_RAX * 0x50);
  *(int32_t *)(unaff_RBP + -0x69) = *(int32_t *)(param_2 + 0x34 + in_RAX * 0x50);
  *(int8_t *)(unaff_RBP + -0x65) = *(int8_t *)(param_2 + 0x30 + in_RAX * 0x50);
  *(int32_t *)(unaff_RBP + -0x5d) = *(int32_t *)(param_2 + 0x40 + in_RAX * 0x50);
  uVar4 = *(int32_t *)(param_2 + 0x44 + in_RAX * 0x50);
  lVar19 = *(int64_t *)(unaff_RSI + 8);
  *(int32_t *)(unaff_RBP + -0x39) = uVar3;
  *(int32_t *)(unaff_RBP + -0x61) = uVar4;
  uVar22 = (uint64_t)*(ushort *)(unaff_R14 + 0x24 + unaff_R15);
  *(int16_t *)(unaff_RBP + -0x55) = 0x400;
  *(uint64_t *)(unaff_RBP + -0x51) = 0;
  *(int32_t *)(unaff_RBP + -0x49) = 0;
  *(uint64_t *)(unaff_RBP + -0x41) = 0;
  lVar5 = *(int64_t *)(unaff_RSI + 0x90);
  *(int8_t *)(unaff_RBP + -0x35) = 0;
  *(uint64_t *)(unaff_RBP + -0x21) = 0;
  pfVar1 = (float *)(lVar5 + 0x28 + uVar22 * 0x48);
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 8 + uVar22 * 0x48);
  fVar10 = *pfVar1;
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 0x18 + uVar22 * 0x48);
  fVar14 = *pfVar1;
  fVar15 = pfVar1[1];
  fVar16 = pfVar1[2];
  fVar17 = pfVar1[3];
  puVar2 = (uint64_t *)(lVar5 + 0x38 + uVar22 * 0x48);
  uVar18 = puVar2[1];
  lVar5 = *(int64_t *)(unaff_RSI + 0x10);
  fVar32 = fVar10 * 0.0;
  fVar33 = fVar11 * 0.0;
  fVar34 = fVar12 * 0.0;
  fVar35 = fVar13 * 0.0;
  *(uint64_t *)(unaff_RBP + 0x17) = *puVar2;
  *(uint64_t *)(unaff_RBP + 0x1f) = uVar18;
  fVar24 = fVar6 * 0.0;
  fVar25 = fVar7 * 0.0;
  fVar26 = fVar8 * 0.0;
  fVar27 = fVar9 * 0.0;
  fVar28 = in_XMM4_Da * fVar14;
  fVar29 = in_XMM4_Db * fVar15;
  fVar30 = in_XMM4_Dc * fVar16;
  fVar31 = in_XMM4_Dd * fVar17;
  *(float *)(unaff_RBP + -0x19) = in_XMM5_Da * fVar10 + fVar28 + fVar24;
  *(float *)(unaff_RBP + -0x15) = in_XMM5_Db * fVar11 + fVar29 + fVar25;
  *(float *)(unaff_RBP + -0x11) = in_XMM5_Dc * fVar12 + fVar30 + fVar26;
  *(float *)(unaff_RBP + -0xd) = in_XMM5_Dd * fVar13 + fVar31 + fVar27;
  *(float *)(unaff_RBP + -9) = in_XMM5_Da * fVar14 + fVar32 + fVar24;
  *(float *)(unaff_RBP + -5) = in_XMM5_Db * fVar15 + fVar33 + fVar25;
  *(float *)(unaff_RBP + -1) = in_XMM5_Dc * fVar16 + fVar34 + fVar26;
  *(float *)(unaff_RBP + 3) = in_XMM5_Dd * fVar17 + fVar35 + fVar27;
  *(float *)(unaff_RBP + 7) = fVar6 * 1.0 + fVar32 + fVar28;
  *(float *)(unaff_RBP + 0xb) = fVar7 * 1.0 + fVar33 + fVar29;
  *(float *)(unaff_RBP + 0xf) = fVar8 * 1.0 + fVar34 + fVar30;
  *(float *)(unaff_RBP + 0x13) = fVar9 * 1.0 + fVar35 + fVar31;
  if (lVar5 - lVar19 >> 3 != 0) {
    *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
    uVar22 = uVar21;
    uStack0000000000000038 = param_3;
    do {
      uVar23 = 1 << ((byte)uVar21 & 0x1f);
      if ((1 < *(int *)(*(int64_t *)(lVar19 + uVar22) + 0x178)) &&
         ((uVar23 & unaff_R12W) == uVar23)) {
        FUN_180077750(*(uint64_t *)(unaff_R14 + 8 + unaff_R15),*(int64_t *)(lVar19 + uVar22),
                      unaff_RBP + -0x19,0,&stack0x00000030);
      }
      lVar19 = *(int64_t *)(unaff_RSI + 8);
      uVar20 = (int)uVar21 + 1;
      uVar21 = (uint64_t)uVar20;
      uVar22 = uVar22 + 8;
    } while ((uint64_t)(int64_t)(int)uVar20 <
             (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar19 >> 3));
  }
  return;
}






// 函数: void FUN_1804cd9f9(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_1804cd9f9(uint64_t param_1,uint64_t param_2,int32_t param_3)

{
  float *pfVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
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
  uint64_t uVar18;
  int64_t in_RAX;
  int64_t in_RDX;
  int64_t lVar19;
  uint uVar20;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar21;
  ushort uVar22;
  int64_t in_R11;
  ushort unaff_R12W;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float in_XMM4_Da;
  float fVar27;
  float in_XMM4_Db;
  float fVar28;
  float in_XMM4_Dc;
  float fVar29;
  float in_XMM4_Dd;
  float fVar30;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  int32_t unaff_XMM6_Da;
  float fVar31;
  int32_t unaff_XMM6_Db;
  float fVar32;
  int32_t unaff_XMM6_Dc;
  float fVar33;
  int32_t unaff_XMM6_Dd;
  float fVar34;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t uStack0000000000000038;
  
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  *(int16_t *)(unaff_RBP + -0x7d) = 0xff01;
  *(uint64_t *)(unaff_RBP + -0x79) = unaff_RBX;
  *(int *)(unaff_RBP + -0x59) = (int)unaff_RBX;
  uVar3 = *(int32_t *)(in_RDX + 0x48 + in_RAX * 0x50);
  *(int32_t *)(unaff_RBP + -0x71) = *(int32_t *)(in_RDX + 0x3c + in_RAX * 0x50);
  *(int32_t *)(unaff_RBP + -0x6d) = *(int32_t *)(in_RDX + 0x38 + in_RAX * 0x50);
  *(int32_t *)(unaff_RBP + -0x69) = *(int32_t *)(in_RDX + 0x34 + in_RAX * 0x50);
  *(int8_t *)(unaff_RBP + -0x65) = *(int8_t *)(in_RDX + 0x30 + in_RAX * 0x50);
  *(int32_t *)(unaff_RBP + -0x5d) = *(int32_t *)(in_RDX + 0x40 + in_RAX * 0x50);
  uVar4 = *(int32_t *)(in_RDX + 0x44 + in_RAX * 0x50);
  lVar19 = *(int64_t *)(unaff_RSI + 8);
  *(int32_t *)(unaff_RBP + -0x39) = uVar3;
  *(int32_t *)(unaff_RBP + -0x61) = uVar4;
  uVar21 = (uint64_t)*(ushort *)(unaff_R14 + 0x24 + unaff_R15);
  *(int16_t *)(unaff_RBP + -0x55) = 0x400;
  *(uint64_t *)(unaff_RBP + -0x51) = unaff_RBX;
  *(int *)(unaff_RBP + -0x49) = (int)unaff_RBX;
  *(uint64_t *)(unaff_RBP + -0x41) = unaff_RBX;
  lVar5 = *(int64_t *)(unaff_RSI + 0x90);
  *(char *)(unaff_RBP + -0x35) = (char)unaff_RBX;
  *(uint64_t *)(unaff_RBP + -0x21) = unaff_RBX;
  pfVar1 = (float *)(lVar5 + 0x28 + uVar21 * 0x48);
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 8 + uVar21 * 0x48);
  fVar10 = *pfVar1;
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  pfVar1 = (float *)(lVar5 + 0x18 + uVar21 * 0x48);
  fVar14 = *pfVar1;
  fVar15 = pfVar1[1];
  fVar16 = pfVar1[2];
  fVar17 = pfVar1[3];
  puVar2 = (uint64_t *)(lVar5 + 0x38 + uVar21 * 0x48);
  uVar18 = puVar2[1];
  lVar5 = *(int64_t *)(unaff_RSI + 0x10);
  fVar31 = fVar10 * 0.0;
  fVar32 = fVar11 * 0.0;
  fVar33 = fVar12 * 0.0;
  fVar34 = fVar13 * 0.0;
  *(uint64_t *)(unaff_RBP + 0x17) = *puVar2;
  *(uint64_t *)(unaff_RBP + 0x1f) = uVar18;
  fVar23 = fVar6 * 0.0;
  fVar24 = fVar7 * 0.0;
  fVar25 = fVar8 * 0.0;
  fVar26 = fVar9 * 0.0;
  fVar27 = in_XMM4_Da * fVar14;
  fVar28 = in_XMM4_Db * fVar15;
  fVar29 = in_XMM4_Dc * fVar16;
  fVar30 = in_XMM4_Dd * fVar17;
  *(float *)(unaff_RBP + -0x19) = (float)param_2 * fVar10 + fVar27 + fVar23;
  *(float *)(unaff_RBP + -0x15) = (float)((uint64_t)param_2 >> 0x20) * fVar11 + fVar28 + fVar24;
  *(float *)(unaff_RBP + -0x11) = in_XMM1_Dc * fVar12 + fVar29 + fVar25;
  *(float *)(unaff_RBP + -0xd) = in_XMM1_Dd * fVar13 + fVar30 + fVar26;
  *(float *)(unaff_RBP + -9) = in_XMM5_Da * fVar14 + fVar31 + fVar23;
  *(float *)(unaff_RBP + -5) = in_XMM5_Db * fVar15 + fVar32 + fVar24;
  *(float *)(unaff_RBP + -1) = in_XMM5_Dc * fVar16 + fVar33 + fVar25;
  *(float *)(unaff_RBP + 3) = in_XMM5_Dd * fVar17 + fVar34 + fVar26;
  *(float *)(unaff_RBP + 7) = fVar6 * 1.0 + fVar31 + fVar27;
  *(float *)(unaff_RBP + 0xb) = fVar7 * 1.0 + fVar32 + fVar28;
  *(float *)(unaff_RBP + 0xf) = fVar8 * 1.0 + fVar33 + fVar29;
  *(float *)(unaff_RBP + 0x13) = fVar9 * 1.0 + fVar34 + fVar30;
  if (lVar5 - lVar19 >> 3 != 0) {
    *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
    uVar21 = unaff_RBX & 0xffffffff;
    uStack0000000000000038 = param_3;
    do {
      uVar22 = 1 << ((byte)unaff_RBX & 0x1f);
      if ((1 < *(int *)(*(int64_t *)(lVar19 + uVar21) + 0x178)) &&
         ((uVar22 & unaff_R12W) == uVar22)) {
        FUN_180077750(*(uint64_t *)(unaff_R14 + 8 + unaff_R15),*(int64_t *)(lVar19 + uVar21),
                      unaff_RBP + -0x19,0,&stack0x00000030);
      }
      lVar19 = *(int64_t *)(unaff_RSI + 8);
      uVar20 = (int)unaff_RBX + 1;
      unaff_RBX = (uint64_t)uVar20;
      uVar21 = uVar21 + 8;
    } while ((uint64_t)(int64_t)(int)uVar20 <
             (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar19 >> 3));
  }
  return;
}






// 函数: void FUN_1804cdafa(uint64_t param_1,int64_t param_2)
void FUN_1804cdafa(uint64_t param_1,int64_t param_2)

{
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar1;
  ushort uVar2;
  int64_t in_R11;
  ushort unaff_R12W;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  uVar1 = (uint64_t)unaff_EBX;
  do {
    uVar2 = 1 << ((byte)unaff_EBX & 0x1f);
    if ((1 < *(int *)(*(int64_t *)(param_2 + uVar1) + 0x178)) && ((uVar2 & unaff_R12W) == uVar2)) {
      FUN_180077750(*(uint64_t *)(unaff_R14 + 8 + unaff_R15),*(int64_t *)(param_2 + uVar1),
                    unaff_RBP + -0x19,0,&stack0x00000030);
    }
    param_2 = *(int64_t *)(unaff_RSI + 8);
    unaff_EBX = unaff_EBX + 1;
    uVar1 = uVar1 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_EBX <
           (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - param_2 >> 3));
  return;
}






// 函数: void FUN_1804cdb67(void)
void FUN_1804cdb67(void)

{
  return;
}






// 函数: void FUN_1804cdb6f(void)
void FUN_1804cdb6f(void)

{
  return;
}






// 函数: void FUN_1804cdb90(int64_t param_1,ushort param_2,int param_3,ushort param_4)
void FUN_1804cdb90(int64_t param_1,ushort param_2,int param_3,ushort param_4)

{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  ushort uVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t uStack_c8;
  int iStack_c0;
  int8_t uStack_bc;
  char cStack_bb;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int8_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int16_t uStack_94;
  uint64_t uStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int8_t uStack_74;
  uint64_t uStack_60;
  uint64_t uVar12;
  
  lVar10 = 0;
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_94 = 0x400;
  lVar14 = *(int64_t *)(param_1 + 0x68) + (uint64_t)param_2 * 0x38 + 8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar7 = (uint64_t)*(ushort *)(lVar14 + 0xc + (int64_t)param_3 * 2);
  uStack_74 = 0;
  uStack_60 = 0;
  uStack_bc = 1;
  lVar4 = *(int64_t *)(param_1 + 0x1a8 + (int64_t)param_3 * 0x28);
  lVar15 = *(int64_t *)(param_1 + 0xe0);
  uVar8 = (uint64_t)*(ushort *)(lVar14 + 0x20);
  uStack_b0 = *(int32_t *)(lVar15 + 0x3c + uVar8 * 0x50);
  uStack_78 = *(int32_t *)(lVar15 + 0x48 + uVar8 * 0x50);
  uStack_ac = *(int32_t *)(lVar15 + 0x38 + uVar8 * 0x50);
  uStack_a8 = *(int32_t *)(lVar15 + 0x34 + uVar8 * 0x50);
  uStack_a4 = *(int8_t *)(lVar15 + 0x30 + uVar8 * 0x50);
  uStack_9c = *(int32_t *)(lVar15 + 0x40 + uVar8 * 0x50);
  uStack_a0 = *(int32_t *)(lVar15 + 0x44 + uVar8 * 0x50);
  uVar8 = (*(int64_t *)(lVar4 + 0x10 + uVar7 * 0x28) - *(int64_t *)(lVar4 + 8 + uVar7 * 0x28)) /
          0x60;
  lVar15 = lVar10;
  iStack_c0 = param_3;
  if ((char)uVar8 != '\0') {
    do {
      uVar12 = 0;
      lVar5 = *(int64_t *)(lVar4 + 8 + uVar7 * 0x28);
      lVar1 = *(int64_t *)(param_1 + 0x90) + (uint64_t)*(ushort *)(lVar14 + 0x1c) * 0x48;
      cStack_bb = *(char *)(lVar10 + 0x50 + lVar5);
      if (cStack_bb == -1) {
        uStack_b8 = 0;
      }
      else {
        uStack_b8 = *(uint64_t *)(lVar10 + 0x40 + lVar5);
      }
      lVar13 = *(int64_t *)(param_1 + 8);
      uVar16 = uVar12;
      if (*(int64_t *)(param_1 + 0x10) - lVar13 >> 3 != 0) {
        do {
          uVar9 = 1 << ((byte)uVar12 & 0x1f);
          if (((((uVar9 & param_4) == uVar9) &&
               (lVar13 = *(int64_t *)(uVar16 + lVar13), *(int *)(lVar13 + 0x178) < 2)) &&
              ((*(uint *)(lVar13 + 4) & 0x1000000) == 0)) &&
             ((((lVar6 = *(int64_t *)(lVar13 + 0x28), lVar6 == 0 ||
                (fVar18 = *(float *)(lVar10 + 0x54 + lVar5), fVar18 == 3.4028235e+38)) ||
               (fVar19 = *(float *)(lVar1 + 0x3c) - *(float *)(lVar6 + 0x124),
               fVar20 = *(float *)(lVar1 + 0x38) - *(float *)(lVar6 + 0x120),
               fVar17 = *(float *)(lVar1 + 0x40) - *(float *)(lVar6 + 0x128),
               fVar3 = *(float *)(lVar10 + 0x58 + lVar5),
               (fVar20 * fVar20 + fVar19 * fVar19 + fVar17 * fVar17) - fVar3 * fVar3 <=
               fVar18 * fVar18)) &&
              ((fVar18 = *(float *)(lVar13 + 0x174) * 0.2, fVar18 <= 0.0 ||
               (pfVar2 = (float *)(lVar10 + 0x5c + lVar5), fVar18 < *pfVar2 || fVar18 == *pfVar2))))
             )) {
            FUN_180077750(*(uint64_t *)(lVar10 + 0x48 + lVar5),lVar13,lVar1 + 8,0,&uStack_c8);
          }
          lVar13 = *(int64_t *)(param_1 + 8);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (uint64_t)uVar11;
          uVar16 = uVar16 + 8;
        } while ((uint64_t)(int64_t)(int)uVar11 <
                 (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar13 >> 3));
      }
      lVar15 = lVar15 + 1;
      lVar10 = lVar10 + 0x60;
    } while (lVar15 < (int64_t)(uVar8 & 0xff));
  }
  return;
}






// 函数: void FUN_1804cdcb5(void)
void FUN_1804cdcb5(void)

{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  ushort uVar6;
  uint64_t uVar7;
  int64_t unaff_RBP;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t in_R9;
  int64_t in_R10;
  int64_t in_R11;
  uint64_t uVar11;
  ushort unaff_R13W;
  uint64_t unaff_R14;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int64_t in_stack_00000030;
  int64_t in_stack_00000038;
  int64_t in_stack_00000040;
  char cStack000000000000005d;
  uint64_t uStack0000000000000060;
  int64_t in_stack_00000120;
  
  uVar7 = unaff_R14 & 0xffffffff;
  uVar11 = unaff_R14 & 0xffffffff;
  do {
    lVar4 = *(int64_t *)(in_R11 + 8 + in_R10 * 8);
    lVar1 = *(int64_t *)(unaff_RBP + 0x90) + (uint64_t)*(ushort *)(in_R9 + 0x1c) * 0x48;
    cStack000000000000005d = *(char *)(uVar7 + 0x50 + lVar4);
    uStack0000000000000060 = unaff_R14;
    if (cStack000000000000005d != -1) {
      uStack0000000000000060 = *(uint64_t *)(uVar7 + 0x40 + lVar4);
    }
    lVar10 = *(int64_t *)(unaff_RBP + 8);
    uVar9 = unaff_R14 & 0xffffffff;
    if (*(int64_t *)(unaff_RBP + 0x10) - lVar10 >> 3 != 0) {
      do {
        uVar6 = 1 << ((byte)uVar9 & 0x1f);
        if (((((uVar6 & unaff_R13W) == uVar6) &&
             (lVar10 = *(int64_t *)(unaff_R14 + lVar10), *(int *)(lVar10 + 0x178) < 2)) &&
            ((*(uint *)(lVar10 + 4) & 0x1000000) == 0)) &&
           ((((lVar5 = *(int64_t *)(lVar10 + 0x28), lVar5 == 0 ||
              (fVar13 = *(float *)(uVar7 + 0x54 + lVar4), fVar13 == 3.4028235e+38)) ||
             (fVar14 = *(float *)(lVar1 + 0x3c) - *(float *)(lVar5 + 0x124),
             fVar15 = *(float *)(lVar1 + 0x38) - *(float *)(lVar5 + 0x120),
             fVar12 = *(float *)(lVar1 + 0x40) - *(float *)(lVar5 + 0x128),
             fVar3 = *(float *)(uVar7 + 0x58 + lVar4),
             (fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12) - fVar3 * fVar3 <=
             fVar13 * fVar13)) &&
            ((fVar13 = *(float *)(lVar10 + 0x174) * 0.2, fVar13 <= 0.0 ||
             (pfVar2 = (float *)(uVar7 + 0x5c + lVar4), fVar13 < *pfVar2 || fVar13 == *pfVar2))))))
        {
          FUN_180077750(*(uint64_t *)(uVar7 + 0x48 + lVar4),lVar10,lVar1 + 8,0,&stack0x00000050);
        }
        lVar10 = *(int64_t *)(unaff_RBP + 8);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
        unaff_R14 = unaff_R14 + 8;
      } while ((uint64_t)(int64_t)(int)uVar8 <
               (uint64_t)(*(int64_t *)(unaff_RBP + 0x10) - lVar10 >> 3));
      unaff_R14 = 0;
      in_R9 = in_stack_00000120;
      in_R10 = in_stack_00000030;
      in_R11 = in_stack_00000038;
    }
    uVar11 = uVar11 + 1;
    uVar7 = uVar7 + 0x60;
  } while ((int64_t)uVar11 < in_stack_00000040);
  return;
}






// 函数: void FUN_1804cdec5(void)
void FUN_1804cdec5(void)

{
  return;
}



uint64_t *
FUN_1804cdee0(uint64_t *param_1,int64_t *param_2,int64_t *param_3,uint64_t *param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = uVar4;
  uVar4 = param_4[3];
  param_1[2] = param_4[2];
  param_1[3] = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_4 + 0x24);
  uVar2 = *(int32_t *)(param_4 + 5);
  uVar3 = *(int32_t *)((int64_t)param_4 + 0x2c);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_4 + 4);
  *(int32_t *)((int64_t)param_1 + 0x24) = uVar1;
  *(int32_t *)(param_1 + 5) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x2c) = uVar3;
  uVar1 = *(int32_t *)((int64_t)param_4 + 0x34);
  uVar2 = *(int32_t *)(param_4 + 7);
  uVar3 = *(int32_t *)((int64_t)param_4 + 0x3c);
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_4 + 6);
  *(int32_t *)((int64_t)param_1 + 0x34) = uVar1;
  *(int32_t *)(param_1 + 7) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x3c) = uVar3;
  param_1[8] = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  param_1[9] = param_3;
  if (param_3 != (int64_t *)0x0) {
    (**(code **)(*param_3 + 0x28))(param_3);
  }
  *(char *)(param_1 + 10) = (char)param_2[0x76];
  *(int *)((int64_t)param_1 + 0x54) = (int)param_2[0xd];
  if (*(code **)(*param_2 + 0x198) == (code *)&unknown_var_2544_ptr) {
    lVar5 = (int64_t)param_2 + 0x214;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x198))(param_2);
  }
  *(int32_t *)(param_1 + 0xb) = *(int32_t *)(lVar5 + 0x30);
  fVar7 = *(float *)((int64_t)param_3 + 0x28c) - *(float *)((int64_t)param_3 + 0x27c);
  fVar6 = *(float *)((int64_t)param_3 + 0x284) - *(float *)((int64_t)param_3 + 0x274);
  if (*(float *)(param_3 + 0x51) - *(float *)(param_3 + 0x4f) <= fVar6) {
    fVar6 = *(float *)(param_3 + 0x51) - *(float *)(param_3 + 0x4f);
  }
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  *(float *)((int64_t)param_1 + 0x5c) = fVar6;
  return param_1;
}






// 函数: void FUN_1804cdfe0(int64_t param_1)
void FUN_1804cdfe0(int64_t param_1)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0x20);
  *(uint64_t *)(param_1 + 0x20) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x28) = 0xff;
  *(uint64_t *)(param_1 + 0x2c) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x34) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x3c) = 0xffffffff;
  *(int32_t *)(param_1 + 0x40) = 0xbf800000;
  *(int8_t *)(param_1 + 0x44) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ce040(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804ce040(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      if (((*(uint64_t *)(*param_1 + (uVar2 & 0xffffffff) * 0x28) & 0xffffffff00000000) != 0) &&
         (*param_1 + ((uVar2 & 0xffffffff) * 5 + 1) * 8 != 0)) {
        FUN_1804ce6b0();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint64_t)param_1[1]);
  }
  if (*param_1 == 0) {
    *param_1 = 0;
    param_1[2] = 1;
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    lVar1 = FUN_18062b420(system_memory_pool_ptr,param_1[4] * 0x28,0x18,param_4,uVar3);
    *param_1 = lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804ce100(int64_t *param_1)
void FUN_1804ce100(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        lVar2 = *param_1;
        if (((*(uint64_t *)(lVar2 + (uVar3 & 0xffffffff) * 0x28) & 0xffffffff00000000) != 0) &&
           (lVar1 = lVar2 + ((uVar3 & 0xffffffff) * 5 + 1) * 8, lVar1 != 0)) {
          FUN_1804ce6b0(lVar1);
          lVar2 = *param_1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint64_t)param_1[1]);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ce1c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804ce1c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_1[1] != 0) {
    do {
      puVar2 = (uint64_t *)((uVar3 & 0xffffffff) * 0x50 + *param_1);
      if (((*puVar2 & 0xffffffff00000000) != 0) && (puVar2 + 1 != (uint64_t *)0x0)) {
        if ((int64_t *)puVar2[5] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)puVar2[5] + 0x38))();
        }
        FUN_180057830(puVar2 + 1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint64_t)param_1[1]);
  }
  if (*param_1 == 0) {
    *param_1 = 0;
    param_1[2] = 1;
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    lVar1 = FUN_18062b420(system_memory_pool_ptr,param_1[4] * 0x50,0x18,param_4,uVar4);
    *param_1 = lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804ce2b0(int64_t *param_1)
void FUN_1804ce2b0(int64_t *param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        lVar1 = *param_1;
        puVar2 = (uint64_t *)((uVar3 & 0xffffffff) * 0x50 + lVar1);
        if (((*puVar2 & 0xffffffff00000000) != 0) && (puVar2 + 1 != (uint64_t *)0x0)) {
          if ((int64_t *)puVar2[5] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)puVar2[5] + 0x38))();
          }
          FUN_180057830(puVar2 + 1);
          lVar1 = *param_1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint64_t)param_1[1]);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804ce510(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804ce510(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      puVar2 = (uint64_t *)((uVar4 & 0xffffffff) * 0x38 + *param_1);
      if ((((*puVar2 & 0xffffffff00000000) != 0) &&
          (puVar2 = puVar2 + 1, puVar2 != (uint64_t *)0x0)) &&
         (plVar1 = (int64_t *)*puVar2, plVar1 != (int64_t *)0x0)) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint64_t)param_1[1]);
  }
  if (*param_1 == 0) {
    *param_1 = 0;
    param_1[2] = 1;
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    lVar3 = FUN_18062b420(system_memory_pool_ptr,param_1[4] * 0x38,0x18,param_4,uVar5);
    *param_1 = lVar3;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804ce5d0(int64_t *param_1)
void FUN_1804ce5d0(int64_t *param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar4 = 0;
    if (param_1[1] != 0) {
      do {
        puVar2 = (uint64_t *)((uVar4 & 0xffffffff) * 0x38 + *param_1);
        if ((((*puVar2 & 0xffffffff00000000) != 0) &&
            (puVar2 = puVar2 + 1, puVar2 != (uint64_t *)0x0)) &&
           (plVar1 = (int64_t *)*puVar2, plVar1 != (int64_t *)0x0)) {
          (**(code **)(*plVar1 + 0x38))();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint64_t)param_1[1]);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



int64_t FUN_1804ce670(int64_t param_1)

{
  if (*(int64_t **)(param_1 + 0x20) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x38))();
  }
  FUN_180057830(param_1);
  return param_1;
}






// 函数: void FUN_1804ce6b0(int64_t *param_1)
void FUN_1804ce6b0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    if (*(int64_t **)(lVar2 + 0x48) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 0x48) + 0x38))();
    }
    if (*(int64_t **)(lVar2 + 0x40) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 0x40) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




