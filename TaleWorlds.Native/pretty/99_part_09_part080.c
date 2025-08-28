#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part080.c - 5 个函数
// 函数: void function_5f2550(void)
void function_5f2550(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x8c0) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Removing unreachable block (ram,0x0001805f14f9)
// WARNING: Removing unreachable block (ram,0x0001805f150e)
// WARNING: Removing unreachable block (ram,0x0001805f15af)
// WARNING: Removing unreachable block (ram,0x0001805f1610)
// WARNING: Removing unreachable block (ram,0x0001805f16e7)
// WARNING: Removing unreachable block (ram,0x0001805f1770)
// WARNING: Removing unreachable block (ram,0x0001805f177e)
// WARNING: Removing unreachable block (ram,0x0001805f1812)
// WARNING: Removing unreachable block (ram,0x0001805f1820)
// WARNING: Removing unreachable block (ram,0x0001805f18a9)
// WARNING: Removing unreachable block (ram,0x0001805f18b7)
// WARNING: Removing unreachable block (ram,0x0001805f194e)
// WARNING: Removing unreachable block (ram,0x0001805f1d9a)
// WARNING: Removing unreachable block (ram,0x0001805f1d9e)
// WARNING: Removing unreachable block (ram,0x0001805f1db5)
// WARNING: Removing unreachable block (ram,0x0001805f1dbc)
// WARNING: Removing unreachable block (ram,0x0001805f20ad)
// WARNING: Removing unreachable block (ram,0x0001805f20f0)
// WARNING: Removing unreachable block (ram,0x0001805f22d0)
// WARNING: Removing unreachable block (ram,0x0001805f22d8)
// WARNING: Removing unreachable block (ram,0x0001805f2313)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f256d(uint64_t param_1,code *param_2)
void function_5f256d(uint64_t param_1,code *param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint64_t uVar12;
  float *pfVar13;
  float *pfVar14;
  int32_t *puVar15;
  uint64_t *puVar16;
  uint *puVar17;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  float *pfVar21;
  int64_t unaff_R13;
  int64_t unaff_R14;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int8_t auVar32 [16];
  int8_t in_XMM2 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  puVar16 = (uint64_t *)(*param_2)();
  *(int8_t *)(unaff_RSI + 0xd3) = 0;
  if (*(char *)(unaff_RSI + 0xd1) != '\0') {
    if (*(char *)(unaff_RSI + 0xd2) != '\0') {
      puVar17 = (uint *)((int64_t)*(char *)(unaff_RSI + 0x68) * 0x100 +
                        *(int64_t *)(unaff_R14 + 0x18));
      do {
        LOCK();
        uVar10 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar10 & 1) != 0);
      fVar28 = (float)puVar17[1];
      fVar30 = (float)puVar17[2];
      fVar31 = (float)puVar17[3];
      fVar34 = (float)puVar17[4];
      fVar25 = (float)puVar17[5];
      fVar26 = (float)puVar17[6];
      fVar29 = (float)puVar17[7];
      fVar33 = (float)puVar17[8];
      unaff_RBP[0x218] = fVar28;
      unaff_RBP[0x219] = fVar30;
      unaff_RBP[0x21a] = fVar31;
      unaff_RBP[0x21b] = fVar34;
      unaff_RBP[0x21c] = fVar25;
      unaff_RBP[0x21d] = fVar26;
      unaff_RBP[0x21e] = fVar29;
      unaff_RBP[0x21f] = fVar33;
      *puVar17 = 0;
      unaff_RBP[0x160] = fVar28;
      unaff_RBP[0x161] = fVar30;
      unaff_RBP[0x162] = fVar31;
      unaff_RBP[0x163] = fVar34;
      unaff_RBP[0x164] = fVar25;
      unaff_RBP[0x165] = fVar26;
      unaff_RBP[0x166] = fVar29;
      unaff_RBP[0x167] = fVar33;
      unaff_RBP[0xd8] = fVar28;
      unaff_RBP[0xd9] = fVar30;
      unaff_RBP[0xda] = fVar31;
      unaff_RBP[0xdb] = fVar34;
      unaff_RBP[0xdc] = fVar25;
      unaff_RBP[0xdd] = fVar26;
      unaff_RBP[0xde] = fVar29;
      unaff_RBP[0xdf] = fVar33;
      uVar12 = UltraHighFreq_FileSystem1(unaff_RBP + 0xd8,unaff_RBP + 0x19c,unaff_RSI + 0x90);
      puVar16 = (uint64_t *)function_300b10(&local_buffer_00000070,unaff_RBP + 0x1a4,uVar12);
      uVar12 = puVar16[1];
      *(uint64_t *)(unaff_RSI + 0x90) = *puVar16;
      *(uint64_t *)(unaff_RSI + 0x98) = uVar12;
      uVar12 = puVar16[3];
      *(uint64_t *)(unaff_RSI + 0xa0) = puVar16[2];
      *(uint64_t *)(unaff_RSI + 0xa8) = uVar12;
      puVar17 = (uint *)((int64_t)*(char *)(unaff_RSI + 100) * 0x100 +
                        *(int64_t *)(unaff_R14 + 0x18));
      do {
        LOCK();
        uVar10 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar10 & 1) != 0);
      fVar28 = (float)puVar17[1];
      fVar30 = (float)puVar17[2];
      fVar31 = (float)puVar17[3];
      fVar34 = (float)puVar17[4];
      fVar25 = (float)puVar17[5];
      fVar26 = (float)puVar17[6];
      fVar29 = (float)puVar17[7];
      fVar33 = (float)puVar17[8];
      unaff_RBP[0x1f8] = fVar28;
      unaff_RBP[0x1f9] = fVar30;
      unaff_RBP[0x1fa] = fVar31;
      unaff_RBP[0x1fb] = fVar34;
      unaff_RBP[0x1fc] = fVar25;
      unaff_RBP[0x1fd] = fVar26;
      unaff_RBP[0x1fe] = fVar29;
      unaff_RBP[0x1ff] = fVar33;
      *puVar17 = 0;
      unaff_RBP[0x168] = fVar28;
      unaff_RBP[0x169] = fVar30;
      unaff_RBP[0x16a] = fVar31;
      unaff_RBP[0x16b] = fVar34;
      unaff_RBP[0x16c] = fVar25;
      unaff_RBP[0x16d] = fVar26;
      unaff_RBP[0x16e] = fVar29;
      unaff_RBP[0x16f] = fVar33;
      unaff_RBP[0xe0] = fVar28;
      unaff_RBP[0xe1] = fVar30;
      unaff_RBP[0xe2] = fVar31;
      unaff_RBP[0xe3] = fVar34;
      unaff_RBP[0xe4] = fVar25;
      unaff_RBP[0xe5] = fVar26;
      unaff_RBP[0xe6] = fVar29;
      unaff_RBP[0xe7] = fVar33;
      uVar12 = UltraHighFreq_FileSystem1(unaff_RBP + 0xe0,unaff_RBP + 0x1ac,unaff_RSI + 0xb0);
      puVar16 = (uint64_t *)function_300b10(&local_buffer_00000070,unaff_RBP + 0x1b4,uVar12);
      unaff_XMM12_Da = unaff_RBP[0x10];
      unaff_XMM12_Db = unaff_RBP[0x11];
      unaff_XMM12_Dc = unaff_RBP[0x12];
      unaff_XMM12_Dd = unaff_RBP[0x13];
      uVar12 = puVar16[1];
      *(uint64_t *)(unaff_RSI + 0xb0) = *puVar16;
      *(uint64_t *)(unaff_RSI + 0xb8) = uVar12;
      uVar12 = puVar16[3];
      *(uint64_t *)(unaff_RSI + 0xc0) = puVar16[2];
      *(uint64_t *)(unaff_RSI + 200) = uVar12;
      *(int8_t *)(unaff_RSI + 0xd2) = 0;
    }
    pfVar14 = (float *)(unaff_RSI + 0x90);
    *(float *)(unaff_RSI + 0xa0) = *(float *)(unaff_RSI + 0xa0) * 0.9;
    *(float *)(unaff_RSI + 0xa8) = *(float *)(unaff_RSI + 0xa8) * 0.9;
    *(float *)(unaff_RSI + 0xa4) = *(float *)(unaff_RSI + 0xa4) * 0.9;
    *(float *)(unaff_RSI + 0xc0) = *(float *)(unaff_RSI + 0xc0) * 0.9;
    *(float *)(unaff_RSI + 0xc4) = *(float *)(unaff_RSI + 0xc4) * 0.9;
    *(float *)(unaff_RSI + 200) = *(float *)(unaff_RSI + 200) * 0.9;
    fVar28 = *pfVar14;
    fVar30 = *(float *)(unaff_RSI + 0x94);
    fVar31 = *(float *)(unaff_RSI + 0x98);
    fVar34 = *(float *)(unaff_RSI + 0x9c);
    fVar25 = fVar31 * 0.0;
    fVar26 = fVar34 * 0.0;
    fVar29 = fVar26 + fVar30 * 0.0;
    fVar27 = fVar25 + fVar28 * 1.0 + fVar29;
    unaff_RBP[0x228] = 1.0;
    unaff_RBP[0x229] = 1.0;
    unaff_RBP[0x22a] = 1.0;
    unaff_RBP[0x22b] = 1.0;
    unaff_RBP[0x22c] = -1.0;
    unaff_RBP[0x22d] = -1.0;
    unaff_RBP[0x22e] = -1.0;
    unaff_RBP[0x22f] = -1.0;
    auVar32._4_4_ = fVar29;
    auVar32._0_4_ = fVar27;
    auVar32._8_4_ = fVar25 + fVar25;
    auVar32._12_4_ = fVar26 + fVar26;
    uVar10 = movmskps((int)puVar16,auVar32);
    iVar11 = (uVar10 & 1) * 2;
    pfVar13 = unaff_RBP + (uint64_t)(uVar10 & 1) * 4 + 0x228;
    fVar25 = *pfVar13;
    fVar26 = pfVar13[1];
    fVar29 = pfVar13[2];
    fVar33 = pfVar13[3];
    if (0.9995 < ABS(fVar27)) {
      fVar27 = fVar25 * 1.0 * 0.9 + fVar28 * 0.100000024;
      fVar22 = fVar26 * 0.0 * 0.9 + fVar30 * 0.100000024;
      fVar37 = fVar29 * 0.0 * 0.9 + fVar31 * 0.100000024;
      fVar23 = fVar33 * 0.0 * 0.9 + fVar34 * 0.100000024;
      fVar28 = fVar23 * fVar23 + fVar27 * fVar27;
      fVar30 = fVar37 * fVar37 + fVar22 * fVar22;
      fVar29 = fVar28 + fVar22 * fVar22 + fVar37 * fVar37;
      fVar33 = fVar30 + fVar27 * fVar27 + fVar23 * fVar23;
      auVar5._4_4_ = fVar28 + fVar30 + 1.1754944e-38;
      auVar5._0_4_ = fVar30 + fVar28 + 1.1754944e-38;
      auVar5._8_4_ = fVar29 + 1.1754944e-38;
      auVar5._12_4_ = fVar33 + 1.1754944e-38;
      in_XMM2 = rsqrtps(in_XMM2,auVar5);
      fVar31 = in_XMM2._0_4_;
      fVar34 = in_XMM2._4_4_;
      fVar25 = in_XMM2._8_4_;
      fVar26 = in_XMM2._12_4_;
      fVar27 = fVar27 * (3.0 - fVar31 * fVar31 * (fVar30 + fVar28)) * fVar31 * 0.5;
      fVar22 = fVar22 * (3.0 - fVar34 * fVar34 * (fVar28 + fVar30)) * fVar34 * 0.5;
      fVar37 = fVar37 * (3.0 - fVar25 * fVar25 * fVar29) * fVar25 * 0.5;
      fVar23 = fVar23 * (3.0 - fVar26 * fVar26 * fVar33) * fVar26 * 0.5;
    }
    else {
      fVar27 = (float)acosf();
      fVar22 = (float)sinf();
      fVar23 = (float)sinf(fVar27 - fVar27 * 0.9);
      fVar23 = fVar23 * (1.0 / fVar22);
      iVar11 = sinf(fVar27 * 0.9);
      fVar24 = extraout_XMM0_Da * (1.0 / fVar22);
      fVar27 = fVar23 * fVar28 + fVar24 * fVar25 * 1.0;
      fVar22 = fVar23 * fVar30 + fVar24 * fVar26 * 0.0;
      fVar37 = fVar23 * fVar31 + fVar24 * fVar29 * 0.0;
      fVar23 = fVar23 * fVar34 + fVar24 * fVar33 * 0.0;
    }
    pfVar13 = (float *)(unaff_RSI + 0xb0);
    *pfVar14 = fVar27;
    *(float *)(unaff_RSI + 0x94) = fVar22;
    *(float *)(unaff_RSI + 0x98) = fVar37;
    *(float *)(unaff_RSI + 0x9c) = fVar23;
    fVar28 = *pfVar13;
    fVar30 = *(float *)(unaff_RSI + 0xb4);
    fVar31 = *(float *)(unaff_RSI + 0xb8);
    fVar34 = *(float *)(unaff_RSI + 0xbc);
    unaff_RBP[0x220] = 1.0;
    unaff_RBP[0x221] = 1.0;
    unaff_RBP[0x222] = 1.0;
    unaff_RBP[0x223] = 1.0;
    fVar25 = fVar31 * 0.0;
    fVar26 = fVar34 * 0.0;
    unaff_RBP[0x194] = fVar27;
    unaff_RBP[0x195] = fVar22;
    unaff_RBP[0x196] = fVar37;
    unaff_RBP[0x197] = fVar23;
    fVar29 = fVar26 + fVar30 * 0.0;
    fVar27 = fVar25 + fVar28 * 1.0 + fVar29;
    unaff_RBP[0x224] = -1.0;
    unaff_RBP[0x225] = -1.0;
    unaff_RBP[0x226] = -1.0;
    unaff_RBP[0x227] = -1.0;
    auVar6._4_4_ = fVar29;
    auVar6._0_4_ = fVar27;
    auVar6._8_4_ = fVar25 + fVar25;
    auVar6._12_4_ = fVar26 + fVar26;
    uVar10 = movmskps(iVar11,auVar6);
    pfVar21 = unaff_RBP + (uint64_t)(uVar10 & 1) * 4 + 0x220;
    fVar25 = *pfVar21;
    fVar26 = pfVar21[1];
    fVar29 = pfVar21[2];
    fVar33 = pfVar21[3];
    if (0.9995 < ABS(fVar27)) {
      fVar27 = fVar25 * 1.0 * 0.9 + fVar28 * 0.100000024;
      fVar22 = fVar26 * 0.0 * 0.9 + fVar30 * 0.100000024;
      fVar37 = fVar29 * 0.0 * 0.9 + fVar31 * 0.100000024;
      fVar23 = fVar33 * 0.0 * 0.9 + fVar34 * 0.100000024;
      fVar28 = fVar23 * fVar23 + fVar27 * fVar27;
      fVar30 = fVar37 * fVar37 + fVar22 * fVar22;
      fVar29 = fVar28 + fVar22 * fVar22 + fVar37 * fVar37;
      fVar33 = fVar30 + fVar27 * fVar27 + fVar23 * fVar23;
      auVar4._4_4_ = fVar28 + fVar30 + 1.1754944e-38;
      auVar4._0_4_ = fVar30 + fVar28 + 1.1754944e-38;
      auVar4._8_4_ = fVar29 + 1.1754944e-38;
      auVar4._12_4_ = fVar33 + 1.1754944e-38;
      auVar32 = rsqrtps(in_XMM2,auVar4);
      fVar31 = auVar32._0_4_;
      fVar34 = auVar32._4_4_;
      fVar25 = auVar32._8_4_;
      fVar26 = auVar32._12_4_;
      fVar27 = fVar27 * (3.0 - fVar31 * fVar31 * (fVar30 + fVar28)) * fVar31 * 0.5;
      fVar22 = fVar22 * (3.0 - fVar34 * fVar34 * (fVar28 + fVar30)) * fVar34 * 0.5;
      fVar37 = fVar37 * (3.0 - fVar25 * fVar25 * fVar29) * fVar25 * 0.5;
      fVar23 = fVar23 * (3.0 - fVar26 * fVar26 * fVar33) * fVar26 * 0.5;
    }
    else {
      fVar27 = (float)acosf();
      fVar22 = (float)sinf();
      fVar23 = (float)sinf(fVar27 - fVar27 * 0.9);
      fVar23 = fVar23 * (1.0 / fVar22);
      fVar24 = (float)sinf(fVar27 * 0.9);
      fVar24 = fVar24 * (1.0 / fVar22);
      fVar27 = fVar23 * fVar28 + fVar24 * fVar25 * 1.0;
      fVar22 = fVar23 * fVar30 + fVar24 * fVar26 * 0.0;
      fVar37 = fVar23 * fVar31 + fVar24 * fVar29 * 0.0;
      fVar23 = fVar23 * fVar34 + fVar24 * fVar33 * 0.0;
    }
    unaff_RBP[0x198] = fVar27;
    unaff_RBP[0x199] = fVar22;
    unaff_RBP[0x19a] = fVar37;
    unaff_RBP[0x19b] = fVar23;
    *pfVar13 = fVar27;
    *(float *)(unaff_RSI + 0xb4) = fVar22;
    *(float *)(unaff_RSI + 0xb8) = fVar37;
    *(float *)(unaff_RSI + 0xbc) = fVar23;
    puVar16 = (uint64_t *)UltraHighFreq_FileSystem1(&local_buffer_00000070,unaff_RBP + 0x1bc,pfVar14);
    local_buffer_70 = *puVar16;
    local_buffer_78 = puVar16[1];
    fVar28 = *(float *)((int64_t)puVar16 + 0x14);
    fVar30 = *(float *)(puVar16 + 3);
    fVar31 = *(float *)((int64_t)puVar16 + 0x1c);
    unaff_RBP[-0x20] = *(float *)(puVar16 + 2);
    unaff_RBP[-0x1f] = fVar28;
    unaff_RBP[-0x1e] = fVar30;
    unaff_RBP[-0x1d] = fVar31;
    puVar16 = (uint64_t *)UltraHighFreq_FileSystem1(unaff_RBP + -0x18,unaff_RBP + 0x1c4,pfVar13);
    uVar12 = puVar16[1];
    *(uint64_t *)(unaff_RBP + -0x18) = *puVar16;
    *(uint64_t *)(unaff_RBP + -0x16) = uVar12;
    uVar12 = puVar16[3];
    fVar28 = *(float *)(unaff_RSI + 0xa0);
    *(uint64_t *)(unaff_RBP + -0x14) = puVar16[2];
    *(uint64_t *)(unaff_RBP + -0x12) = uVar12;
    if (((((ABS(fVar28) < 0.001) && (ABS(*(float *)(unaff_RSI + 0xa4)) < 0.001)) &&
         (ABS(*(float *)(unaff_RSI + 0xa8)) < 0.001)) &&
        ((ABS(*(float *)(unaff_RSI + 0xc0)) < 0.001 && (ABS(*(float *)(unaff_RSI + 0xc4)) < 0.001)))
        ) && ((ABS(*(float *)(unaff_RSI + 200)) < 0.001 &&
              ((cVar9 = function_5f26d0(pfVar14,&system_data_3a10), cVar9 != '\0' &&
               (cVar9 = function_5f26d0(pfVar13,&system_data_3a10), cVar9 != '\0')))))) {
      *(int8_t *)(unaff_RSI + 0xd1) = 0;
      pfVar14[0] = 1.0;
      pfVar14[1] = 0.0;
      *(uint64_t *)(unaff_RSI + 0x98) = 0;
      *(uint64_t *)(unaff_RSI + 0xa0) = 0;
      *(uint64_t *)(unaff_RSI + 0xa8) = 0x3f80000000000000;
      *pfVar13 = 1.0;
      *(int32_t *)(unaff_RSI + 0xb4) = 0;
      *(int32_t *)(unaff_RSI + 0xb8) = 0;
      *(int32_t *)(unaff_RSI + 0xbc) = 0;
      *(uint64_t *)(unaff_RSI + 0xc0) = 0;
      *(uint64_t *)(unaff_RSI + 200) = 0x3f80000000000000;
    }
  }
  lVar1 = *(int64_t *)(unaff_R14 + 0x208);
  cVar9 = '\0';
  if ('\0' < *(char *)(lVar1 + 0x148)) {
    unaff_RBP[-0x1c] = unaff_XMM12_Da;
    unaff_RBP[-0x1b] = unaff_XMM12_Da;
    unaff_RBP[-0x1a] = unaff_XMM12_Da;
    unaff_RBP[-0x19] = unaff_XMM12_Dc;
    fVar28 = unaff_RBP[-0x1c];
    fVar30 = unaff_RBP[-0x1b];
    fVar31 = unaff_RBP[-0x1a];
    fVar34 = unaff_RBP[-0x19];
    do {
      lVar20 = (int64_t)cVar9;
      lVar19 = lVar20 * 0x30;
      puVar17 = (uint *)((int64_t)*(char *)(lVar19 + *(int64_t *)(unaff_RSI + 0x1e8)) * 0x100 +
                        *(int64_t *)(unaff_R13 + 0x18));
      do {
        LOCK();
        uVar10 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar10 & 1) != 0);
      fVar25 = (float)puVar17[1];
      fVar26 = (float)puVar17[2];
      fVar29 = (float)puVar17[3];
      fVar33 = (float)puVar17[4];
      fVar27 = (float)puVar17[5];
      fVar22 = (float)puVar17[6];
      fVar37 = (float)puVar17[7];
      fVar23 = (float)puVar17[8];
      unaff_RBP[0x208] = fVar25;
      unaff_RBP[0x209] = fVar26;
      unaff_RBP[0x20a] = fVar29;
      unaff_RBP[0x20b] = fVar33;
      unaff_RBP[0x20c] = fVar27;
      unaff_RBP[0x20d] = fVar22;
      unaff_RBP[0x20e] = fVar37;
      unaff_RBP[0x20f] = fVar23;
      *puVar17 = 0;
      lVar18 = *(int64_t *)(unaff_RSI + 0x1e8);
      unaff_RBP[0x170] = fVar25;
      unaff_RBP[0x171] = fVar26;
      unaff_RBP[0x172] = fVar29;
      unaff_RBP[0x173] = fVar33;
      unaff_RBP[0x174] = fVar27;
      unaff_RBP[0x175] = fVar22;
      unaff_RBP[0x176] = fVar37;
      unaff_RBP[0x177] = fVar23;
      unaff_RBP[0xe8] = fVar25;
      unaff_RBP[0xe9] = fVar26;
      unaff_RBP[0xea] = fVar29;
      unaff_RBP[0xeb] = fVar33;
      unaff_RBP[0xec] = fVar27;
      unaff_RBP[0xed] = fVar22;
      unaff_RBP[0xee] = fVar37;
      unaff_RBP[0xef] = fVar23;
      pfVar13 = (float *)SystemFileHandler(unaff_RBP + 0xe8,unaff_RBP + 0x110,lVar18 + 0x20 + lVar19);
      pfVar14 = (float *)(lVar19 + 0x10 + lVar18);
      fVar23 = *pfVar14;
      fVar24 = pfVar14[1];
      fVar7 = pfVar14[2];
      fVar8 = pfVar14[3];
      fVar27 = fVar27 + *pfVar13;
      unaff_RBP[-1] = 3.4028235e+38;
      fVar22 = fVar22 + pfVar13[1];
      pfVar21 = (float *)(lVar20 * 0x40 + *(int64_t *)(unaff_RSI + 0x108));
      fVar37 = fVar37 + pfVar13[2];
      fVar39 = fVar29 * fVar8 * 1.0 + fVar25 * fVar24 * 1.0 + (fVar23 * fVar26 - fVar33 * fVar7);
      fVar40 = fVar33 * fVar24 * 1.0 + fVar25 * fVar7 * 1.0 + (fVar23 * fVar29 - fVar26 * fVar8);
      fVar41 = fVar26 * fVar7 * 1.0 + fVar25 * fVar8 * 1.0 + (fVar23 * fVar33 - fVar29 * fVar24);
      fVar42 = fVar33 * fVar8 * -1.0 + fVar29 * fVar7 * -1.0 + (fVar23 * fVar25 - fVar26 * fVar24);
      unaff_RBP[0x10c] = fVar27;
      unaff_RBP[0x10d] = fVar22;
      unaff_RBP[0x10e] = fVar37;
      unaff_RBP[0x10f] = unaff_RBP[-1];
      unaff_RBP[-4] = fVar27;
      unaff_RBP[-3] = fVar22;
      unaff_RBP[-2] = fVar37;
      unaff_RBP[-1] = unaff_RBP[-1];
      unaff_RBP[0x114] = fVar42;
      unaff_RBP[0x115] = fVar39;
      unaff_RBP[0x116] = fVar40;
      unaff_RBP[0x117] = fVar41;
      unaff_RBP[0x108] = fVar42;
      unaff_RBP[0x109] = fVar39;
      unaff_RBP[0x10a] = fVar40;
      unaff_RBP[0x10b] = fVar41;
      pfVar14 = (float *)SystemFileHandler(unaff_RBP + 0x108,unaff_RBP + 0x118,pfVar21 + 4);
      fVar33 = *pfVar21;
      fVar23 = pfVar21[1];
      fVar24 = pfVar21[2];
      fVar7 = pfVar21[3];
      fVar25 = *pfVar14;
      fVar26 = pfVar14[1];
      fVar29 = pfVar14[2];
      unaff_RBP[-5] = 3.4028235e+38;
      fVar8 = unaff_RBP[-5];
      fVar35 = fVar40 * fVar7 * 1.0 + fVar42 * fVar23 * 1.0 + (fVar33 * fVar39 - fVar41 * fVar24);
      fVar36 = fVar41 * fVar23 * 1.0 + fVar42 * fVar24 * 1.0 + (fVar33 * fVar40 - fVar39 * fVar7);
      fVar38 = fVar39 * fVar24 * 1.0 + fVar42 * fVar7 * 1.0 + (fVar33 * fVar41 - fVar40 * fVar23);
      fVar23 = fVar41 * fVar7 * -1.0 + fVar40 * fVar24 * -1.0 + (fVar33 * fVar42 - fVar39 * fVar23);
      unaff_RBP[-8] = fVar27 + fVar25;
      unaff_RBP[-7] = fVar22 + fVar26;
      unaff_RBP[-6] = fVar37 + fVar29;
      unaff_RBP[-5] = fVar8;
      unaff_RBP[0x5c] = fVar27 + fVar25;
      unaff_RBP[0x5d] = fVar22 + fVar26;
      unaff_RBP[0x5e] = fVar37 + fVar29;
      unaff_RBP[0x5f] = fVar8;
      unaff_RBP[0x14c] = fVar23;
      unaff_RBP[0x14d] = fVar35;
      unaff_RBP[0x14e] = fVar36;
      unaff_RBP[0x14f] = fVar38;
      unaff_RBP[0x58] = fVar23;
      unaff_RBP[0x59] = fVar35;
      unaff_RBP[0x5a] = fVar36;
      unaff_RBP[0x5b] = fVar38;
      pfVar14 = (float *)SystemFileHandler(unaff_RBP + 0x44,unaff_RBP + 0x11c,unaff_RBP + 0x5c);
      plVar2 = *(int64_t **)(unaff_RSI + 0xd8);
      fVar25 = *pfVar14;
      fVar26 = pfVar14[1];
      fVar29 = pfVar14[2];
      unaff_RBP[3] = 3.4028235e+38;
      fVar33 = fVar35 * fVar28 * 1.0 + fVar38 * unaff_XMM12_Dc * 1.0 +
               (fVar23 * unaff_XMM12_Db - fVar36 * unaff_XMM12_Dd);
      fVar27 = fVar36 * fVar30 * 1.0 + fVar35 * unaff_XMM12_Dd * 1.0 +
               (fVar23 * unaff_XMM12_Dc - fVar38 * unaff_XMM12_Db);
      fVar22 = fVar38 * fVar31 * 1.0 + fVar36 * unaff_XMM12_Db * 1.0 +
               (fVar23 * unaff_XMM12_Dd - fVar35 * unaff_XMM12_Dc);
      fVar37 = fVar36 * fVar34 * -1.0 + fVar38 * unaff_XMM12_Dd * -1.0 +
               (fVar23 * unaff_XMM12_Da - fVar35 * unaff_XMM12_Db);
      unaff_RBP[0x5c] = unaff_RBP[0x34] + fVar25;
      unaff_RBP[0x5d] = unaff_RBP[0x35] + fVar26;
      unaff_RBP[0x5e] = unaff_RBP[0x36] + fVar29;
      unaff_RBP[0x5f] = unaff_RBP[3];
      *unaff_RBP = unaff_RBP[0x34] + fVar25;
      unaff_RBP[1] = unaff_RBP[0x35] + fVar26;
      unaff_RBP[2] = unaff_RBP[0x36] + fVar29;
      unaff_RBP[3] = unaff_RBP[3];
      unaff_RBP[0x58] = fVar37;
      unaff_RBP[0x59] = fVar33;
      unaff_RBP[0x5a] = fVar27;
      unaff_RBP[0x5b] = fVar22;
      lVar19 = *plVar2;
      unaff_RBP[0x120] = fVar37;
      unaff_RBP[0x121] = fVar33;
      unaff_RBP[0x122] = fVar27;
      unaff_RBP[0x123] = fVar22;
      pcVar3 = *(code **)(lVar19 + 0x58);
      puVar15 = (int32_t *)(**(code **)(lVar19 + 0x10))(plVar2,unaff_RBP + 0x41,(int)cVar9);
      (*pcVar3)(plVar2,*puVar15,unaff_RBP + 0x58);
      cVar9 = cVar9 + '\x01';
    } while (cVar9 < *(char *)(lVar1 + 0x148));
    unaff_R14 = *(int64_t *)(unaff_RBP + -0x10);
  }
  if (*(char *)(unaff_RSI + 0x218) == '\0') {
    *(int8_t *)(unaff_RSI + 0x218) = 1;
    cVar9 = '\0';
    lVar1 = *(int64_t *)(unaff_R14 + 0x208);
    if ('\0' < *(char *)(lVar1 + 0x148)) {
      do {
        lVar19 = (int64_t)cVar9;
        lVar20 = lVar19 * 0x30;
        puVar17 = (uint *)((int64_t)*(char *)(lVar20 + *(int64_t *)(unaff_RSI + 0x1e8)) * 0x100 +
                          *(int64_t *)(unaff_R13 + 0x18));
        do {
          LOCK();
          uVar10 = *puVar17;
          *puVar17 = *puVar17 | 1;
          UNLOCK();
        } while ((uVar10 & 1) != 0);
        fVar34 = (float)puVar17[1];
        fVar25 = (float)puVar17[2];
        fVar26 = (float)puVar17[3];
        fVar29 = (float)puVar17[4];
        fVar33 = (float)puVar17[5];
        fVar27 = (float)puVar17[6];
        fVar22 = (float)puVar17[7];
        fVar28 = (float)puVar17[8];
        unaff_RBP[0x200] = fVar34;
        unaff_RBP[0x201] = fVar25;
        unaff_RBP[0x202] = fVar26;
        unaff_RBP[0x203] = fVar29;
        unaff_RBP[0x204] = fVar33;
        unaff_RBP[0x205] = fVar27;
        unaff_RBP[0x206] = fVar22;
        unaff_RBP[0x207] = fVar28;
        *puVar17 = 0;
        lVar18 = *(int64_t *)(unaff_RSI + 0x1e8);
        unaff_RBP[0x188] = fVar34;
        unaff_RBP[0x189] = fVar25;
        unaff_RBP[0x18a] = fVar26;
        unaff_RBP[0x18b] = fVar29;
        unaff_RBP[0x18c] = fVar33;
        unaff_RBP[0x18d] = fVar27;
        unaff_RBP[0x18e] = fVar22;
        unaff_RBP[399] = fVar28;
        unaff_RBP[0x100] = fVar34;
        unaff_RBP[0x101] = fVar25;
        unaff_RBP[0x102] = fVar26;
        unaff_RBP[0x103] = fVar29;
        unaff_RBP[0x104] = fVar33;
        unaff_RBP[0x105] = fVar27;
        unaff_RBP[0x106] = fVar22;
        unaff_RBP[0x107] = fVar28;
        pfVar13 = (float *)SystemFileHandler(unaff_RBP + 0x100,unaff_RBP + 0x15c,lVar18 + 0x20 + lVar20)
        ;
        pfVar14 = (float *)(lVar20 + 0x10 + lVar18);
        fVar37 = *pfVar14;
        fVar23 = pfVar14[1];
        fVar24 = pfVar14[2];
        fVar7 = pfVar14[3];
        fVar28 = *pfVar13;
        unaff_RBP[0x1f] = 3.4028235e+38;
        puVar17 = (uint *)(lVar19 * 0x100 + *(int64_t *)(unaff_R14 + 0x18));
        fVar8 = unaff_RBP[0x1f];
        fVar30 = pfVar13[1];
        fVar31 = pfVar13[2];
        fVar35 = fVar7 * fVar26 * 1.0 + fVar23 * fVar34 * 1.0 + (fVar37 * fVar25 - fVar24 * fVar29);
        fVar36 = fVar23 * fVar29 * 1.0 + fVar24 * fVar34 * 1.0 + (fVar37 * fVar26 - fVar7 * fVar25);
        fVar38 = fVar24 * fVar25 * 1.0 + fVar7 * fVar34 * 1.0 + (fVar37 * fVar29 - fVar23 * fVar26);
        fVar34 = fVar7 * fVar29 * -1.0 + fVar24 * fVar26 * -1.0 +
                 (fVar37 * fVar34 - fVar23 * fVar25);
        unaff_RBP[0x1c] = fVar33 + fVar28;
        unaff_RBP[0x1d] = fVar27 + fVar30;
        unaff_RBP[0x1e] = fVar22 + fVar31;
        unaff_RBP[0x1f] = fVar8;
        unaff_RBP[200] = fVar33 + fVar28;
        unaff_RBP[0xc9] = fVar27 + fVar30;
        unaff_RBP[0xca] = fVar22 + fVar31;
        unaff_RBP[0xcb] = fVar8;
        unaff_RBP[400] = fVar34;
        unaff_RBP[0x191] = fVar35;
        unaff_RBP[0x192] = fVar36;
        unaff_RBP[0x193] = fVar38;
        unaff_RBP[0xc4] = fVar34;
        unaff_RBP[0xc5] = fVar35;
        unaff_RBP[0xc6] = fVar36;
        unaff_RBP[199] = fVar38;
        do {
          LOCK();
          uVar10 = *puVar17;
          *puVar17 = *puVar17 | 1;
          UNLOCK();
        } while ((uVar10 & 1) != 0);
        fVar28 = unaff_RBP[0xc5];
        fVar30 = unaff_RBP[0xc6];
        fVar31 = unaff_RBP[199];
        fVar34 = unaff_RBP[200];
        fVar25 = unaff_RBP[0xc9];
        fVar26 = unaff_RBP[0xca];
        fVar29 = unaff_RBP[0xcb];
        puVar17[1] = (uint)unaff_RBP[0xc4];
        puVar17[2] = (uint)fVar28;
        puVar17[3] = (uint)fVar30;
        puVar17[4] = (uint)fVar31;
        puVar17[5] = (uint)fVar34;
        puVar17[6] = (uint)fVar25;
        puVar17[7] = (uint)fVar26;
        puVar17[8] = (uint)fVar29;
        *puVar17 = 0;
        RenderingSystem_DrawPrimitive(unaff_R14,
                      (int64_t)(uint64_t)(uint)((int)puVar17 - *(int *)(unaff_R14 + 0x18)) >> 8);
        cVar9 = cVar9 + '\x01';
      } while (cVar9 < *(char *)(lVar1 + 0x148));
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x230) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f2580(int64_t *param_1,uint64_t param_2)
void function_5f2580(int64_t *param_1,uint64_t param_2)
{
  int32_t *puVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  puVar5 = (int32_t *)param_1[1];
  puVar3 = (int32_t *)*param_1;
  uVar2 = (int64_t)puVar5 - (int64_t)puVar3 >> 2;
  if (param_2 <= uVar2) {
    param_1[1] = (int64_t)(puVar3 + param_2);
    return;
  }
  param_2 = param_2 - uVar2;
  if (param_2 <= (uint64_t)(param_1[2] - (int64_t)puVar5 >> 2)) {
    uVar2 = param_2;
    if (param_2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      puVar5 = (int32_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar5 + param_2);
    return;
  }
  uVar4 = uVar2 * 2;
  if (uVar2 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < uVar2 + param_2) {
    uVar4 = uVar2 + param_2;
  }
  if (uVar4 == 0) {
    puVar1 = (int32_t *)0x0;
  }
  else {
    puVar1 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 4,(char)param_1[3]);
    puVar3 = (int32_t *)*param_1;
    puVar5 = (int32_t *)param_1[1];
  }
  if (puVar3 != puVar5) {
// WARNING: Subroutine does not return
    memmove(puVar1,puVar3,(int64_t)puVar5 - (int64_t)puVar3);
  }
  uVar2 = param_2;
  puVar3 = puVar1;
  if (param_2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
  }
  if (*param_1 == 0) {
    *param_1 = (int64_t)puVar1;
    param_1[2] = (int64_t)(puVar1 + uVar4);
    param_1[1] = (int64_t)(puVar1 + param_2);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5f25c6(int64_t param_1,int64_t param_2)
void function_5f25c6(int64_t param_1,int64_t param_2)
{
  int32_t *puVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  uint64_t uVar3;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int32_t *puVar4;
  uVar3 = param_1 * 2;
  if (param_1 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < (uint64_t)(param_1 + unaff_RBX)) {
    uVar3 = param_1 + unaff_RBX;
  }
  if (uVar3 == 0) {
    puVar1 = (int32_t *)0x0;
  }
  else {
    puVar1 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar3 * 4,(char)unaff_RSI[3]);
    param_2 = *unaff_RSI;
    unaff_RDI = unaff_RSI[1];
  }
  if (param_2 != unaff_RDI) {
// WARNING: Subroutine does not return
    memmove(puVar1,param_2,unaff_RDI - param_2);
  }
  lVar2 = unaff_RBX;
  puVar4 = puVar1;
  if (unaff_RBX != 0) {
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = (int64_t)puVar1;
    unaff_RSI[2] = (int64_t)(puVar1 + uVar3);
    unaff_RSI[1] = (int64_t)(puVar1 + unaff_RBX);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_5f2684(void)
void function_5f2684(void)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  lVar1 = unaff_RBX;
  if (unaff_RBX != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *unaff_RDI = 0xffffffff;
      unaff_RDI = unaff_RDI + 1;
    }
    unaff_RDI = *(int32_t **)(unaff_RSI + 8);
  }
  *(int32_t **)(unaff_RSI + 8) = unaff_RDI + unaff_RBX;
  return;
}
int8_t function_5f26d0(float *param_1,float *param_2)
{
  if (((((0.001 <= ABS(param_1[1] - param_2[1])) || (0.001 <= ABS(param_1[2] - param_2[2]))) ||
       (0.001 <= ABS(param_1[3] - param_2[3]))) || (0.001 <= ABS(*param_1 - *param_2))) &&
     (((0.001 <= ABS(param_1[1] - -param_2[1]) || (0.001 <= ABS(param_1[2] - -param_2[2]))) ||
      ((0.001 <= ABS(param_1[3] - -param_2[3]) || (0.001 <= ABS(*param_1 - -*param_2))))))) {
    return 0;
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address