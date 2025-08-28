#include "TaleWorlds.Native.Split.h"

// 99_part_11_part017.c - 7 个函数

// 函数: void FUN_1806eb922(void)
void FUN_1806eb922(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_RDI;
  char unaff_R14B;
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
  float unaff_XMM12_Da;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_stack_00000040;
  uint64_t uStack0000000000000048;
  uint64_t uStack0000000000000050;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  uStack0000000000000048 = _fStack0000000000000070;
  uStack0000000000000050 = _fStack0000000000000078;
  if (unaff_R14B == '\0') {
    fVar7 = *(float *)(unaff_RBX + 0x10);
    fVar22 = *(float *)(unaff_RBX + 0x1c);
    fVar20 = *(float *)(unaff_RBX + 0x14);
    fVar23 = *(float *)(unaff_RBX + 0x18);
    fVar8 = -(*(float *)(unaff_RBX + 0x28) + *(float *)(unaff_RBX + 0x28));
    fVar21 = fVar22 * fVar22 - 0.5;
    fVar14 = -(*(float *)(unaff_RBX + 0x24) + *(float *)(unaff_RBX + 0x24));
    fVar9 = -(*(float *)(unaff_RBX + 0x20) + *(float *)(unaff_RBX + 0x20));
    fVar6 = fVar14 * fVar20 + fVar9 * fVar7 + fVar8 * fVar23;
    in_stack_00000058 =
         (fVar21 * fVar9 - (fVar8 * fVar20 - fVar14 * fVar23) * fVar22) + fVar6 * fVar7;
    fVar10 = -fStack0000000000000070;
    fVar11 = -fStack0000000000000074;
    fVar16 = -fStack0000000000000078;
    in_stack_00000060 =
         (fVar21 * fVar8 - (fVar14 * fVar7 - fVar9 * fVar20) * fVar22) + fVar6 * fVar23;
    uStack0000000000000048 = *(uint64_t *)(unaff_RBX + 0x10) ^ 0x8000000080000000;
    uStack0000000000000050 = *(uint64_t *)(unaff_RBX + 0x18) ^ 0x80000000;
    *(float *)(unaff_RBP + -0x48) = fVar10;
    *(float *)(unaff_RBP + -0x50) = fVar11;
    *(float *)(unaff_RBP + -0x44) = fVar11;
    fStack000000000000005c =
         (fVar21 * fVar14 - (fVar9 * fVar23 - fVar8 * fVar7) * fVar22) + fVar6 * fVar20;
    *(float *)(unaff_RBP + -0x4c) = fVar16;
    *(float *)(unaff_RBP + -0x40) = fVar16;
    *(float *)(unaff_RBP + -0x3c) = fStack000000000000007c;
    fVar23 = fStack000000000000005c - *(float *)(unaff_RBP + 0xb0);
    fVar23 = fVar23 + fVar23;
    fVar20 = (in_stack_00000060 - in_stack_00000068) + (in_stack_00000060 - in_stack_00000068);
    fVar22 = (in_stack_00000058 - unaff_XMM12_Da) + (in_stack_00000058 - unaff_XMM12_Da);
    fVar7 = fStack000000000000007c * fStack000000000000007c - 0.5;
    fVar17 = fVar23 * fVar11 + fVar22 * fVar10 + fVar20 * fVar16;
    fVar13 = (fVar20 * fVar11 - fVar23 * fVar16) * fStack000000000000007c + fVar7 * fVar22;
    fVar19 = (fVar22 * fVar16 - fVar20 * fVar10) * fStack000000000000007c + fVar7 * fVar23;
    fVar24 = (fVar23 * fVar10 - fVar22 * fVar11) * fStack000000000000007c + fVar7 * fVar20;
    puVar4 = (uint64_t *)FUN_1800fcb90(unaff_RBP + -0x48,&stack0x00000070,&stack0x00000048);
    fVar7 = *(float *)(unaff_RBP + -100);
    fVar22 = *(float *)(unaff_RBP + -0x6c);
    uStack0000000000000048 = *puVar4;
    uStack0000000000000050 = puVar4[1];
    fVar21 = fVar7 * fVar7 - 0.5;
    fVar15 = (fVar17 + fVar17) * fVar10 + fVar13 + fVar13;
    fVar20 = *(float *)(unaff_RBP + -0x70);
    fVar12 = (fVar17 + fVar17) * *(float *)(unaff_RBP + -0x50) + fVar19 + fVar19;
    fVar18 = (fVar17 + fVar17) * *(float *)(unaff_RBP + -0x4c) + fVar24 + fVar24;
    fVar23 = *(float *)(unaff_RBP + -0x68);
    fVar14 = fVar22 * fVar12 + fVar20 * fVar15 + fVar23 * fVar18;
    fVar6 = *(float *)(unaff_RBP + -0x60);
    fVar8 = *(float *)(unaff_RBP + -0x58);
    fVar9 = *(float *)(unaff_RBP + -0x5c);
    in_stack_00000058 = fVar17 * fVar10 + fVar13;
    fStack000000000000005c = fVar17 * fVar11 + fVar19;
    in_stack_00000060 = fVar17 * fVar16 + fVar24;
    puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x70,unaff_RBP + -0x48,&stack0x00000048);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *unaff_RSI = *puVar5;
    unaff_RSI[1] = uVar1;
    unaff_RSI[2] = uVar2;
    unaff_RSI[3] = uVar3;
    unaff_RSI[4] = (fVar22 * fVar18 - fVar23 * fVar12) * fVar7 + fVar21 * fVar15 + fVar20 * fVar14 +
                   fVar6;
    unaff_RSI[5] = (fVar23 * fVar15 - fVar20 * fVar18) * fVar7 + fVar21 * fVar12 + fVar22 * fVar14 +
                   fVar9;
    unaff_RSI[6] = (fVar20 * fVar12 - fVar22 * fVar15) * fVar7 + fVar21 * fVar18 + fVar23 * fVar14 +
                   fVar8;
  }
  else {
    fVar7 = *(float *)(unaff_RBX + 0x2c);
    fVar22 = *(float *)(unaff_RBX + 0x38);
    fVar20 = *(float *)(unaff_RBX + 0x30);
    fVar23 = *(float *)(unaff_RBX + 0x34);
    fVar6 = *(float *)(unaff_RBX + 0x40);
    fVar8 = *(float *)(unaff_RBX + 0x44);
    fVar9 = *(float *)(unaff_RBX + 0x3c);
    *(float *)(unaff_RBP + -100) = fVar22;
    fVar10 = -(fVar6 + fVar6);
    fVar8 = -(fVar8 + fVar8);
    fVar21 = fVar22 * fVar22 - 0.5;
    fVar11 = -(fVar9 + fVar9);
    fVar6 = fVar20 * fVar10 + fVar7 * fVar11 + fVar23 * fVar8;
    fVar16 = (fVar21 * fVar11 - (fVar20 * fVar8 - fVar23 * fVar10) * fVar22) + fVar7 * fVar6;
    *(float *)(unaff_RBP + -0x60) = fVar16;
    fVar16 = fVar16 + fVar16;
    *(float *)(unaff_RBP + -0x70) = -fVar7;
    fVar14 = (fVar21 * fVar10 - (fVar23 * fVar11 - fVar7 * fVar8) * fVar22) + fVar20 * fVar6;
    *(float *)(unaff_RBP + -0x5c) = fVar14;
    fVar14 = fVar14 + fVar14;
    *(float *)(unaff_RBP + -0x6c) = -fVar20;
    fVar9 = fStack000000000000007c * fStack000000000000007c - 0.5;
    *(float *)(unaff_RBP + -0x68) = -fVar23;
    fVar22 = (fVar21 * fVar8 - (fVar7 * fVar10 - fVar20 * fVar11) * fVar22) + fVar23 * fVar6;
    *(float *)(unaff_RBP + -0x58) = fVar22;
    fVar22 = fVar22 + fVar22;
    fVar7 = fStack0000000000000074 * fVar14 + fStack0000000000000070 * fVar16 +
            fStack0000000000000078 * fVar22;
    in_stack_00000040 =
         (fStack0000000000000074 * fVar22 - fStack0000000000000078 * fVar14) *
         fStack000000000000007c + fVar9 * fVar16 + fStack0000000000000070 * fVar7 +
         in_stack_00000040;
    fVar11 = (fStack0000000000000070 * fVar14 - fStack0000000000000074 * fVar16) *
             fStack000000000000007c + fVar9 * fVar22 + fStack0000000000000078 * fVar7 +
             in_stack_00000068;
    fVar21 = (fStack0000000000000078 * fVar16 - fStack0000000000000070 * fVar22) *
             fStack000000000000007c + fVar9 * fVar14 + fStack0000000000000074 * fVar7 +
             *(float *)(unaff_RBP + 0xb0);
    puVar4 = (uint64_t *)FUN_1800fcb90(&stack0x00000048,unaff_RBP + -0x48,unaff_RBP + -0x70);
    fVar7 = *(float *)(unaff_RBP + -0x2c);
    fVar22 = *(float *)(unaff_RBP + -0x34);
    fVar20 = *(float *)(unaff_RBP + -0x38);
    uStack0000000000000048 = *puVar4;
    uStack0000000000000050 = puVar4[1];
    fVar23 = *(float *)(unaff_RBP + -0x30);
    fVar19 = in_stack_00000040 + in_stack_00000040;
    fVar12 = fVar21 + fVar21;
    fVar14 = fVar11 + fVar11;
    fVar16 = fVar7 * fVar7 - 0.5;
    fVar10 = fVar22 * fVar12 + fVar20 * fVar19 + fVar23 * fVar14;
    fVar6 = *(float *)(unaff_RBP + -0x28);
    fVar8 = *(float *)(unaff_RBP + -0x24);
    fVar9 = *(float *)(unaff_RBP + -0x20);
    in_stack_00000058 = in_stack_00000040;
    fStack000000000000005c = fVar21;
    in_stack_00000060 = fVar11;
    puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x38,&stack0x00000070,&stack0x00000048);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *unaff_RDI = *puVar5;
    unaff_RDI[1] = uVar1;
    unaff_RDI[2] = uVar2;
    unaff_RDI[3] = uVar3;
    unaff_RDI[4] = (fVar22 * fVar14 - fVar23 * fVar12) * fVar7 + fVar16 * fVar19 + fVar20 * fVar10 +
                   fVar6;
    unaff_RDI[5] = (fVar23 * fVar19 - fVar20 * fVar14) * fVar7 + fVar16 * fVar12 + fVar22 * fVar10 +
                   fVar8;
    unaff_RDI[6] = (fVar20 * fVar12 - fVar22 * fVar19) * fVar7 + fVar16 * fVar14 + fVar23 * fVar10 +
                   fVar9;
  }
                    // WARNING: Subroutine does not return
  FUN_1806e1390();
}






// 函数: void FUN_1806ec13a(void)
void FUN_1806ec13a(void)

{
  return;
}






// 函数: void FUN_1806ec170(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806ec170(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint param_5)

{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int32_t uVar6;
  int32_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int8_t auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  FUN_1806df310(&fStack_88,&fStack_a8,param_2,param_3,param_4);
  if ((param_5 & 1) != 0) {
    (**(code **)(*param_1 + 8))(param_1,&fStack_88,&fStack_a8);
  }
  if (((param_5 & 2) != 0) && ((*(byte *)(param_2 + 0x70) & 2) != 0)) {
    fVar11 = 0.0;
    if (fStack_88 * fStack_a8 + fStack_84 * fStack_a4 + fStack_80 * fStack_a0 +
        fStack_7c * fStack_9c < 0.0) {
      fStack_a8 = -fStack_a8;
      fStack_a4 = -fStack_a4;
      fStack_a0 = -fStack_a0;
      fStack_9c = -fStack_9c;
    }
    fStack_c8 = -fStack_88;
    fStack_bc = fStack_7c;
    fStack_c4 = -fStack_84;
    fStack_c0 = -fStack_80;
    pfVar2 = (float *)FUN_1800fcb90(&fStack_c8,auStack_b8,&fStack_a8);
    fVar10 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar9 = pfVar2[2];
    fVar4 = pfVar2[3];
    if (fVar10 == 0.0) {
      fVar8 = 0.0;
      fVar3 = 1.0;
    }
    else {
      fVar3 = 1.0 / SQRT(fVar4 * fVar4 + fVar10 * fVar10);
      fVar8 = fVar10 * fVar3;
      fVar3 = fVar4 * fVar3;
    }
    if ((*(float *)(param_2 + 0x5c) <= 0.0) && (*(float *)(param_2 + 0x58) <= 0.0)) {
      fVar11 = *(float *)(param_2 + 0x60);
    }
    fVar10 = fVar4 * fVar3 + fVar10 * fVar8 + 1.0;
    fVar4 = (float)atan2f(fVar5 * fVar3 - fVar9 * fVar8,fVar10);
    fVar5 = (float)atan2f(fVar9 * fVar3 + fVar5 * fVar8,fVar10);
    lVar1 = *param_1;
    fVar10 = *(float *)(param_2 + 0x68);
    fVar9 = (ABS(fVar4 * 4.0) + fVar11) / *(float *)(param_2 + 100);
    fVar11 = (ABS(fVar5 * 4.0) + fVar11) / fVar10;
    uVar6 = tanf(*(float *)(param_2 + 100) * 0.25);
    uVar7 = tanf(fVar10 * 0.25);
    (**(code **)(lVar1 + 0x20))
              (param_1,&fStack_88,uVar7,uVar6,1.0 < fVar11 * fVar11 + fVar9 * fVar9);
  }
  return;
}






// 函数: void FUN_1806ec1e7(void)
void FUN_1806ec1e7(void)

{
  int64_t lVar1;
  float *pfVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  float fVar3;
  float fVar4;
  float fVar5;
  int32_t uVar6;
  int32_t uVar7;
  float in_XMM3_Da;
  float fVar8;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = 0.0;
  if (*(float *)(unaff_RBP + -0x31) * in_XMM3_Da + *(float *)(unaff_RBP + -0x2d) * in_XMM4_Da +
      *(float *)(unaff_RBP + -0x29) * in_XMM5_Da +
      *(float *)(unaff_RBP + -0x25) * *(float *)(unaff_RBP + -0x45) < 0.0) {
    *(float *)(unaff_RBP + -0x51) = -in_XMM3_Da;
    *(float *)(unaff_RBP + -0x4d) = -in_XMM4_Da;
    *(float *)(unaff_RBP + -0x49) = -in_XMM5_Da;
    *(float *)(unaff_RBP + -0x45) = -*(float *)(unaff_RBP + -0x45);
  }
  *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x25);
  *(float *)(unaff_RBP + -0x71) = -*(float *)(unaff_RBP + -0x31);
  *(float *)(unaff_RBP + -0x6d) = -*(float *)(unaff_RBP + -0x2d);
  *(float *)(unaff_RBP + -0x69) = -*(float *)(unaff_RBP + -0x29);
  pfVar2 = (float *)FUN_1800fcb90(unaff_RBP + -0x71,unaff_RBP + -0x61,unaff_RBP + -0x51);
  fVar10 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar4 = pfVar2[3];
  if (fVar10 == 0.0) {
    fVar8 = 0.0;
    fVar3 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar4 * fVar4 + fVar10 * fVar10);
    fVar8 = fVar10 * fVar3;
    fVar3 = fVar4 * fVar3;
  }
  if ((*(float *)(unaff_RBX + 0x5c) <= 0.0) && (*(float *)(unaff_RBX + 0x58) <= 0.0)) {
    fVar11 = *(float *)(unaff_RBX + 0x60);
  }
  fVar10 = fVar4 * fVar3 + fVar10 * fVar8 + 1.0;
  fVar4 = (float)atan2f(fVar5 * fVar3 - fVar9 * fVar8,fVar10);
  fVar5 = (float)atan2f(fVar9 * fVar3 + fVar5 * fVar8,fVar10);
  lVar1 = *unaff_RSI;
  fVar10 = *(float *)(unaff_RBX + 0x68);
  fVar9 = (ABS(fVar4 * 4.0) + fVar11) / *(float *)(unaff_RBX + 100);
  fVar11 = (ABS(fVar5 * 4.0) + fVar11) / fVar10;
  uVar6 = tanf(*(float *)(unaff_RBX + 100) * 0.25);
  uVar7 = tanf(fVar10 * 0.25);
  (**(code **)(lVar1 + 0x20))
            (uVar7,unaff_RBP + -0x31,uVar7,uVar6,1.0 < fVar11 * fVar11 + fVar9 * fVar9);
  return;
}






// 函数: void FUN_1806ec442(void)
void FUN_1806ec442(void)

{
  return;
}



int64_t FUN_1806ec470(uint64_t *param_1,float *param_2,uint64_t param_3,int32_t *param_4,
                      int32_t *param_5,int64_t param_6,int64_t param_7,uint64_t param_8,
                      float *param_9,float *param_10)

{
  ushort uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  char cVar7;
  ushort uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int64_t lVar15;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint64_t *puStack_f8;
  uint64_t *puStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int32_t uVar16;
  
  lVar6 = param_7;
  lVar5 = param_6;
  puVar4 = param_5;
  uVar16 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar16;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  lVar15 = param_7;
  puStack_f8 = param_1;
  puStack_f0 = param_1;
  FUN_1806df310(&fStack_128,&fStack_168,param_5,param_6,param_7);
  uVar16 = (int32_t)((uint64_t)lVar15 >> 0x20);
  fVar9 = *(float *)(lVar5 + 0x10);
  fVar10 = *(float *)(lVar5 + 0x14);
  param_2[2] = fStack_150 - *(float *)(lVar5 + 0x18);
  param_2[1] = fStack_154 - fVar10;
  *param_2 = fStack_158 - fVar9;
  fStack_e8 = fStack_158 - *(float *)(lVar5 + 0x10);
  fStack_e4 = fStack_154 - *(float *)(lVar5 + 0x14);
  fStack_c4 = fStack_158;
  fStack_e0 = fStack_150 - *(float *)(lVar5 + 0x18);
  fStack_d8 = fStack_154 - *(float *)(lVar6 + 0x14);
  fStack_c0 = fStack_154;
  fStack_bc = fStack_150;
  fStack_dc = fStack_158 - *(float *)(lVar6 + 0x10);
  fStack_d0 = fStack_118;
  fStack_d4 = fStack_150 - *(float *)(lVar6 + 0x18);
  fStack_c8 = fStack_110;
  fStack_cc = fStack_114;
  if (fStack_168 * fStack_128 + fStack_164 * fStack_124 + fStack_160 * fStack_120 +
      fStack_15c * fStack_11c < 0.0) {
    fStack_168 = -fStack_168;
    fStack_164 = -fStack_164;
    fStack_160 = -fStack_160;
    fStack_15c = -fStack_15c;
  }
  if ((*(byte *)(puVar4 + 0x1c) & 2) != 0) {
    fVar10 = -fStack_124;
    fVar9 = -fStack_128;
    fVar11 = -fStack_120;
    fVar13 = (fVar9 * fStack_15c + fStack_168 * fStack_11c + fVar10 * fStack_160) -
             fVar11 * fStack_164;
    fVar14 = (fVar10 * fStack_15c + fStack_164 * fStack_11c + fVar11 * fStack_168) -
             fVar9 * fStack_160;
    fVar12 = ((fStack_15c * fStack_11c - fVar9 * fStack_168) - fVar10 * fStack_164) -
             fVar11 * fStack_160;
    fVar9 = (fVar11 * fStack_15c + fStack_160 * fStack_11c + fVar9 * fStack_164) -
            fVar10 * fStack_168;
    if (fVar13 == 0.0) {
      fVar10 = 1.0;
      fVar11 = 0.0;
    }
    else {
      fVar10 = 1.0 / SQRT(fVar12 * fVar12 + fVar13 * fVar13);
      fVar11 = fVar13 * fVar10;
      fVar10 = fVar12 * fVar10;
    }
    fVar11 = -fVar11;
    fStack_108 = fVar13 * fVar10 + fVar12 * fVar11;
    fStack_104 = fVar11 * fVar9 + fVar10 * fVar14;
    fStack_fc = fVar12 * fVar10 - fVar13 * fVar11;
    fStack_100 = fVar10 * fVar9 - fVar11 * fVar14;
    if ((0.0 < (float)puVar4[0x17]) || (0.0 < (float)puVar4[0x16])) {
      fStack_140 = 0.0;
    }
    else {
      fStack_140 = (float)puVar4[0x18];
    }
    fStack_148 = (float)puVar4[0x19];
    fStack_144 = (float)puVar4[0x1a];
    cVar7 = FUN_1806e0060(&fStack_148,&fStack_108,&fStack_138,&param_5);
    if (cVar7 != '\0') {
      puStack_f0 = param_1 + 10;
      fStack_130 = fStack_130 * 2.0;
      *(int16_t *)((int64_t)param_1 + 0x4e) = 0;
      fStack_134 = fStack_134 * 2.0;
      *param_1 = 0;
      fStack_138 = fStack_138 * 2.0;
      *(int32_t *)(param_1 + 1) = 0;
      fVar11 = fStack_11c * fStack_11c - 0.5;
      fVar9 = fStack_124 * fStack_134 + fStack_128 * fStack_138 + fStack_120 * fStack_130;
      fVar12 = (fStack_124 * fStack_130 - fStack_120 * fStack_134) * fStack_11c +
               fVar11 * fStack_138 + fStack_128 * fVar9;
      *(float *)(param_1 + 2) = fVar12;
      fVar10 = (fStack_120 * fStack_138 - fStack_128 * fStack_130) * fStack_11c +
               fVar11 * fStack_134 + fStack_124 * fVar9;
      *(float *)((int64_t)param_1 + 0x14) = fVar10;
      fVar9 = (fStack_128 * fStack_134 - fStack_124 * fStack_138) * fStack_11c + fVar11 * fStack_130
              + fStack_120 * fVar9;
      *(float *)(param_1 + 3) = fVar9;
      param_1[4] = 0;
      *(int32_t *)(param_1 + 5) = 0;
      *(float *)(param_1 + 6) = fVar12;
      *(float *)((int64_t)param_1 + 0x34) = fVar10;
      *(float *)(param_1 + 7) = fVar9;
      uVar1 = *(ushort *)((int64_t)param_1 + 0x4c);
      *(float *)((int64_t)param_1 + 0xc) = param_5._0_4_;
      *(ushort *)((int64_t)param_1 + 0x4c) = uVar1 | 0x40;
      if ((0.0 < (float)puVar4[0x17]) || (0.0 < (float)puVar4[0x16])) {
        uVar8 = uVar1 | 0x51;
        *(int32_t *)(param_1 + 8) = puVar4[0x16];
        *(int32_t *)((int64_t)param_1 + 0x44) = puVar4[0x17];
      }
      else {
        *(int16_t *)((int64_t)param_1 + 0x4e) = 0x801;
        *(int32_t *)(param_1 + 8) = puVar4[0x14];
        *(int32_t *)((int64_t)param_1 + 0x44) = puVar4[0x15];
        uVar8 = uVar1 | 0x58;
        if (param_5._0_4_ <= 0.0) {
          uVar8 = uVar1 | 0x50;
        }
        if (0.0 < (float)puVar4[0x14]) {
          uVar8 = uVar8 | 4;
        }
      }
      *(ushort *)((int64_t)param_1 + 0x4c) = uVar8;
      *(int32_t *)((int64_t)param_1 + 0x2c) = 0;
    }
  }
  fVar11 = (fStack_158 - fStack_118) + (fStack_158 - fStack_118);
  fVar12 = (fStack_154 - fStack_114) + (fStack_154 - fStack_114);
  fVar13 = (fStack_150 - fStack_110) + (fStack_150 - fStack_110);
  fVar10 = fStack_11c * fStack_11c - 0.5;
  fVar9 = fStack_124 * fVar12 + fStack_128 * fVar11 + fStack_120 * fVar13;
  fStack_138 = (fVar10 * fVar11 - (fStack_124 * fVar13 - fStack_120 * fVar12) * fStack_11c) +
               fStack_128 * fVar9;
  fStack_134 = (fVar10 * fVar12 - (fStack_120 * fVar11 - fStack_128 * fVar13) * fStack_11c) +
               fStack_124 * fVar9;
  fStack_130 = (fVar10 * fVar13 - (fStack_128 * fVar12 - fStack_124 * fVar11) * fStack_11c) +
               fStack_120 * fVar9;
  FUN_1806e1790(&puStack_f8,&fStack_128,&fStack_168,&fStack_138,CONCAT44(uVar16,7),0,&fStack_148,
                &fStack_108);
  fVar9 = *(float *)(lVar5 + 0x14);
  fVar10 = *(float *)(lVar5 + 0x18);
  *param_9 = fStack_148 + *(float *)(lVar5 + 0x10);
  param_9[1] = fStack_144 + fVar9;
  param_9[2] = fStack_140 + fVar10;
  fVar9 = *(float *)(lVar6 + 0x14);
  fVar10 = *(float *)(lVar6 + 0x18);
  *param_10 = fStack_108 + *(float *)(lVar6 + 0x10);
  param_10[1] = fStack_104 + fVar9;
  param_10[2] = fStack_100 + fVar10;
  return ((int64_t)puStack_f0 - (int64_t)puStack_f8) / 0x50;
}



uint64_t *
FUN_1806ecc10(uint64_t *param_1,int16_t param_2,int16_t *param_3,uint64_t param_4,
             float *param_5,uint64_t param_6,float *param_7,int param_8)

{
  int16_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int32_t *puVar7;
  float *pfVar8;
  int32_t *puVar9;
  uint64_t *puVar10;
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
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int8_t auStack_b8 [16];
  int8_t auStack_a8 [160];
  
  puVar7 = (int32_t *)0x0;
  uVar1 = *param_3;
  *(int16_t *)(param_1 + 1) = param_2;
  *(int16_t *)((int64_t)param_1 + 10) = uVar1;
  *param_1 = &unknown_var_7528_ptr;
  param_1[3] = &unknown_var_7848_ptr;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  if (param_8 != 0) {
    plVar6 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    puVar7 = (int32_t *)
             (**(code **)(*plVar6 + 8))(plVar6,param_8,&unknown_var_1832_ptr,&unknown_var_3536_ptr,0x1c6);
  }
  fVar11 = param_5[1];
  fVar13 = *param_5;
  fVar16 = param_5[2];
  fVar12 = param_5[3];
  fVar15 = param_5[4];
  fVar17 = param_5[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_5[5];
  *(float *)(param_1 + 5) = fVar13 * fVar14;
  *(float *)((int64_t)param_1 + 0x2c) = fVar11 * fVar14;
  *(float *)(param_1 + 6) = fVar16 * fVar14;
  *(float *)((int64_t)param_1 + 0x34) = fVar12 * fVar14;
  *(float *)(param_1 + 7) = fVar15;
  *(float *)(param_1 + 8) = fVar17;
  *(float *)((int64_t)param_1 + 0x3c) = fVar18;
  fVar11 = param_7[1];
  fVar13 = *param_7;
  fVar16 = param_7[2];
  fVar12 = param_7[3];
  fVar15 = param_7[5];
  fVar17 = param_7[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_7[4];
  *(float *)((int64_t)param_1 + 0x44) = fVar13 * fVar14;
  *(float *)(param_1 + 9) = fVar11 * fVar14;
  *(float *)((int64_t)param_1 + 0x4c) = fVar16 * fVar14;
  *(float *)(param_1 + 10) = fVar12 * fVar14;
  *(float *)((int64_t)param_1 + 0x54) = fVar18;
  *(float *)(param_1 + 0xb) = fVar15;
  *(float *)((int64_t)param_1 + 0x5c) = fVar17;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_4);
  fVar11 = *pfVar8;
  fVar13 = pfVar8[1];
  fStack_c8 = -fVar11;
  fStack_c4 = -fVar13;
  fStack_bc = pfVar8[3];
  fVar16 = pfVar8[2];
  fStack_c0 = -fVar16;
  fVar18 = (param_5[4] - pfVar8[4]) + (param_5[4] - pfVar8[4]);
  fVar17 = (param_5[5] - pfVar8[5]) + (param_5[5] - pfVar8[5]);
  fVar20 = (param_5[6] - pfVar8[6]) + (param_5[6] - pfVar8[6]);
  fVar15 = fStack_bc * fStack_bc - 0.5;
  fVar12 = fVar13 * fVar17 + fVar18 * fVar11 + fVar16 * fVar20;
  fVar19 = (fVar16 * fVar17 - fVar13 * fVar20) * fStack_bc;
  fVar14 = (fVar11 * fVar20 - fVar16 * fVar18) * fStack_bc;
  fVar21 = (fVar13 * fVar18 - fVar11 * fVar17) * fStack_bc;
  puVar9 = (int32_t *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_5);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  puVar7[4] = *puVar9;
  puVar7[5] = uVar2;
  puVar7[6] = uVar3;
  puVar7[7] = uVar4;
  puVar7[8] = fVar19 + fVar15 * fVar18 + fVar11 * fVar12;
  puVar7[9] = fVar14 + fVar15 * fVar17 + fVar13 * fVar12;
  puVar7[10] = fVar21 + fVar15 * fVar20 + fVar16 * fVar12;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_6);
  fStack_c8 = -*pfVar8;
  fStack_c4 = -pfVar8[1];
  fStack_bc = pfVar8[3];
  fStack_c0 = -pfVar8[2];
  fVar15 = (param_7[4] - pfVar8[4]) + (param_7[4] - pfVar8[4]);
  fVar12 = (param_7[5] - pfVar8[5]) + (param_7[5] - pfVar8[5]);
  fVar14 = (param_7[6] - pfVar8[6]) + (param_7[6] - pfVar8[6]);
  fVar16 = fStack_bc * fStack_bc - 0.5;
  fVar13 = fStack_c4 * fVar12 + fStack_c8 * fVar15 + fStack_c0 * fVar14;
  fVar11 = fStack_c8 * fVar13;
  fVar18 = (fStack_c4 * fVar14 - fStack_c0 * fVar12) * fStack_bc;
  fVar19 = fStack_c0 * fVar13;
  fVar13 = fStack_c4 * fVar13;
  fVar17 = (fStack_c0 * fVar15 - fStack_c8 * fVar14) * fStack_bc;
  fVar20 = (fStack_c8 * fVar12 - fStack_c4 * fVar15) * fStack_bc;
  puVar10 = (uint64_t *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_7);
  uVar5 = puVar10[1];
  *(uint64_t *)(puVar7 + 0xb) = *puVar10;
  *(uint64_t *)(puVar7 + 0xd) = uVar5;
  puVar7[0xf] = fVar18 + fVar16 * fVar15 + fVar11;
  puVar7[0x10] = fVar17 + fVar16 * fVar12 + fVar13;
  puVar7[0x11] = fVar20 + fVar16 * fVar14 + fVar19;
  *puVar7 = 0x3f800000;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0x3f800000;
  param_1[0xd] = puVar7;
  return param_1;
}






// 函数: void FUN_1806ed140(uint64_t *param_1)
void FUN_1806ed140(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  *param_1 = &unknown_var_7528_ptr;
  param_1[3] = &unknown_var_7848_ptr;
  if ((*(byte *)((int64_t)param_1 + 10) & 1) != 0) {
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[0xd] = 0;
  }
  param_1[3] = &unknown_var_1416_ptr;
  *param_1 = &unknown_var_2408_ptr;
  return;
}






// 函数: void FUN_1806ed164(int64_t param_1)
void FUN_1806ed164(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *unaff_RBX;
  
  lVar1 = *(int64_t *)(param_1 + 0x68);
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  unaff_RBX[0xd] = 0;
  unaff_RBX[3] = &unknown_var_1416_ptr;
  *unaff_RBX = &unknown_var_2408_ptr;
  return;
}






