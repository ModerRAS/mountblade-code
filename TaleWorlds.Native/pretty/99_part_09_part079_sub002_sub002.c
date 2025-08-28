#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part079_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805f0b13(void)
void FUN_1805f0b13(void)

{
  float *pfVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint64_t *in_RAX;
  uint64_t uVar14;
  uint64_t *puVar15;
  float *pfVar16;
  float *pfVar17;
  int32_t *puVar18;
  int64_t lVar19;
  uint uVar20;
  uint *puVar21;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar22;
  uint64_t *in_R9;
  int64_t lVar23;
  code *pcVar24;
  int64_t *plVar25;
  int64_t lVar26;
  float *pfVar27;
  uint64_t uVar28;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  char unaff_R15B;
  uint64_t *puVar29;
  bool in_ZF;
  float fVar30;
  float fVar31;
  float extraout_XMM0_Da;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int8_t in_XMM2 [16];
  int8_t auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  char cStackX_20;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  puVar15 = in_R9;
  if (!in_ZF) {
    puVar4 = *(uint64_t **)(unaff_RSI + 0xd8);
    if ((void *)*puVar4 == &rendering_buffer_2136_ptr) {
      puVar29 = (uint64_t *)((uint64_t)in_R9 & 0xffffffff);
      in_RAX = (uint64_t *)((int64_t)(puVar4[10] - puVar4[9]) >> 3);
      if (in_RAX != (uint64_t *)0x0) {
        do {
          plVar25 = *(int64_t **)(puVar4[9] + (int64_t)in_R9 * 8);
          lVar22 = *plVar25;
          unaff_RBP[-0xe] = 0.0;
          unaff_RBP[-0xd] = 0.0;
          unaff_RBP[-0xc] = 0.0;
          (**(code **)(lVar22 + 0x148))(plVar25,unaff_RBP + -0xe,1);
          plVar25 = *(int64_t **)(puVar4[9] + (int64_t)in_R9 * 8);
          lVar22 = *plVar25;
          unaff_RBP[-0xb] = 0.0;
          unaff_RBP[-10] = 0.0;
          unaff_RBP[-9] = 0.0;
          (**(code **)(lVar22 + 0x138))(plVar25,unaff_RBP + -0xb,1);
          lVar22 = puVar4[5];
          lVar19 = (int64_t)in_R9 * 0x60;
          puVar15 = (uint64_t *)0x0;
          in_R9 = (uint64_t *)(uint64_t)((int)puVar29 + 1);
          *(uint64_t *)(lVar19 + lVar22) = 0;
          *(int32_t *)(lVar19 + 8 + lVar22) = 0;
          *(uint64_t *)(lVar19 + 0x10 + lVar22) = 0;
          *(int32_t *)(lVar19 + 0x18 + lVar22) = 0;
          in_RAX = (uint64_t *)((int64_t)(puVar4[10] - puVar4[9]) >> 3);
          puVar29 = in_R9;
        } while (in_R9 < in_RAX);
      }
    }
    else {
      in_RAX = (uint64_t *)(**(code **)((void *)*puVar4 + 0x68))(puVar4);
      puVar15 = (uint64_t *)0x0;
    }
    cStackX_20 = '\0';
    unaff_R15B = '\x01';
    *(int8_t *)(unaff_RSI + 0xd3) = 0;
  }
  if (*(char *)(unaff_RSI + 0xd1) != '\0') {
    if (*(char *)(unaff_RSI + 0xd2) != '\0') {
      puVar21 = (uint *)((int64_t)*(char *)(unaff_RSI + 0x68) * 0x100 +
                        *(int64_t *)(unaff_R14 + 0x18));
      do {
        LOCK();
        uVar12 = *puVar21;
        *puVar21 = *puVar21 | 1;
        UNLOCK();
      } while ((uVar12 & 1) != 0);
      fVar41 = (float)puVar21[1];
      fVar33 = (float)puVar21[2];
      fVar38 = (float)puVar21[3];
      fVar47 = (float)puVar21[4];
      fVar34 = (float)puVar21[5];
      fVar35 = (float)puVar21[6];
      fVar39 = (float)puVar21[7];
      fVar46 = (float)puVar21[8];
      unaff_RBP[0x218] = fVar41;
      unaff_RBP[0x219] = fVar33;
      unaff_RBP[0x21a] = fVar38;
      unaff_RBP[0x21b] = fVar47;
      unaff_RBP[0x21c] = fVar34;
      unaff_RBP[0x21d] = fVar35;
      unaff_RBP[0x21e] = fVar39;
      unaff_RBP[0x21f] = fVar46;
      *puVar21 = (uint)puVar15;
      unaff_RBP[0x160] = fVar41;
      unaff_RBP[0x161] = fVar33;
      unaff_RBP[0x162] = fVar38;
      unaff_RBP[0x163] = fVar47;
      unaff_RBP[0x164] = fVar34;
      unaff_RBP[0x165] = fVar35;
      unaff_RBP[0x166] = fVar39;
      unaff_RBP[0x167] = fVar46;
      unaff_RBP[0xd8] = fVar41;
      unaff_RBP[0xd9] = fVar33;
      unaff_RBP[0xda] = fVar38;
      unaff_RBP[0xdb] = fVar47;
      unaff_RBP[0xdc] = fVar34;
      unaff_RBP[0xdd] = fVar35;
      unaff_RBP[0xde] = fVar39;
      unaff_RBP[0xdf] = fVar46;
      uVar14 = FUN_180300bf0(unaff_RBP + 0xd8,unaff_RBP + 0x19c,unaff_RSI + 0x90);
      puVar15 = (uint64_t *)FUN_180300b10(&stack0x00000070,unaff_RBP + 0x1a4,uVar14);
      uVar14 = puVar15[1];
      *(uint64_t *)(unaff_RSI + 0x90) = *puVar15;
      *(uint64_t *)(unaff_RSI + 0x98) = uVar14;
      uVar14 = puVar15[3];
      *(uint64_t *)(unaff_RSI + 0xa0) = puVar15[2];
      *(uint64_t *)(unaff_RSI + 0xa8) = uVar14;
      puVar21 = (uint *)((int64_t)*(char *)(unaff_RSI + 100) * 0x100 +
                        *(int64_t *)(unaff_R14 + 0x18));
      do {
        LOCK();
        uVar12 = *puVar21;
        *puVar21 = *puVar21 | 1;
        UNLOCK();
      } while ((uVar12 & 1) != 0);
      fVar41 = (float)puVar21[1];
      fVar33 = (float)puVar21[2];
      fVar38 = (float)puVar21[3];
      fVar47 = (float)puVar21[4];
      fVar34 = (float)puVar21[5];
      fVar35 = (float)puVar21[6];
      fVar39 = (float)puVar21[7];
      fVar46 = (float)puVar21[8];
      unaff_RBP[0x1f8] = fVar41;
      unaff_RBP[0x1f9] = fVar33;
      unaff_RBP[0x1fa] = fVar38;
      unaff_RBP[0x1fb] = fVar47;
      unaff_RBP[0x1fc] = fVar34;
      unaff_RBP[0x1fd] = fVar35;
      unaff_RBP[0x1fe] = fVar39;
      unaff_RBP[0x1ff] = fVar46;
      *puVar21 = 0;
      unaff_RBP[0x168] = fVar41;
      unaff_RBP[0x169] = fVar33;
      unaff_RBP[0x16a] = fVar38;
      unaff_RBP[0x16b] = fVar47;
      unaff_RBP[0x16c] = fVar34;
      unaff_RBP[0x16d] = fVar35;
      unaff_RBP[0x16e] = fVar39;
      unaff_RBP[0x16f] = fVar46;
      unaff_RBP[0xe0] = fVar41;
      unaff_RBP[0xe1] = fVar33;
      unaff_RBP[0xe2] = fVar38;
      unaff_RBP[0xe3] = fVar47;
      unaff_RBP[0xe4] = fVar34;
      unaff_RBP[0xe5] = fVar35;
      unaff_RBP[0xe6] = fVar39;
      unaff_RBP[0xe7] = fVar46;
      uVar14 = FUN_180300bf0(unaff_RBP + 0xe0,unaff_RBP + 0x1ac,unaff_RSI + 0xb0);
      in_RAX = (uint64_t *)FUN_180300b10(&stack0x00000070,unaff_RBP + 0x1b4,uVar14);
      unaff_XMM12_Da = unaff_RBP[0x10];
      unaff_XMM12_Db = unaff_RBP[0x11];
      unaff_XMM12_Dc = unaff_RBP[0x12];
      unaff_XMM12_Dd = unaff_RBP[0x13];
      uVar14 = in_RAX[1];
      *(uint64_t *)(unaff_RSI + 0xb0) = *in_RAX;
      *(uint64_t *)(unaff_RSI + 0xb8) = uVar14;
      uVar14 = in_RAX[3];
      *(uint64_t *)(unaff_RSI + 0xc0) = in_RAX[2];
      *(uint64_t *)(unaff_RSI + 200) = uVar14;
      *(int8_t *)(unaff_RSI + 0xd2) = 0;
    }
    pfVar17 = (float *)(unaff_RSI + 0x90);
    *(float *)(unaff_RSI + 0xa0) = *(float *)(unaff_RSI + 0xa0) * 0.9;
    *(float *)(unaff_RSI + 0xa8) = *(float *)(unaff_RSI + 0xa8) * 0.9;
    *(float *)(unaff_RSI + 0xa4) = *(float *)(unaff_RSI + 0xa4) * 0.9;
    *(float *)(unaff_RSI + 0xc0) = *(float *)(unaff_RSI + 0xc0) * 0.9;
    *(float *)(unaff_RSI + 0xc4) = *(float *)(unaff_RSI + 0xc4) * 0.9;
    *(float *)(unaff_RSI + 200) = *(float *)(unaff_RSI + 200) * 0.9;
    fVar41 = *pfVar17;
    fVar33 = *(float *)(unaff_RSI + 0x94);
    fVar38 = *(float *)(unaff_RSI + 0x98);
    fVar47 = *(float *)(unaff_RSI + 0x9c);
    fVar34 = fVar38 * 0.0;
    fVar35 = fVar47 * 0.0;
    fVar39 = fVar35 + fVar33 * 0.0;
    fVar36 = fVar34 + fVar41 * 1.0 + fVar39;
    unaff_RBP[0x228] = 1.0;
    unaff_RBP[0x229] = 1.0;
    unaff_RBP[0x22a] = 1.0;
    unaff_RBP[0x22b] = 1.0;
    unaff_RBP[0x22c] = -1.0;
    unaff_RBP[0x22d] = -1.0;
    unaff_RBP[0x22e] = -1.0;
    unaff_RBP[0x22f] = -1.0;
    auVar42._4_4_ = fVar39;
    auVar42._0_4_ = fVar36;
    auVar42._8_4_ = fVar34 + fVar34;
    auVar42._12_4_ = fVar35 + fVar35;
    uVar12 = movmskps((int)in_RAX,auVar42);
    iVar13 = (uVar12 & 1) * 2;
    pfVar16 = unaff_RBP + (uint64_t)(uVar12 & 1) * 4 + 0x228;
    fVar34 = *pfVar16;
    fVar35 = pfVar16[1];
    fVar39 = pfVar16[2];
    fVar46 = pfVar16[3];
    if (0.9995 < ABS(fVar36)) {
      fVar36 = fVar34 * 1.0 * 0.9 + fVar41 * 0.100000024;
      fVar30 = fVar35 * 0.0 * 0.9 + fVar33 * 0.100000024;
      fVar50 = fVar39 * 0.0 * 0.9 + fVar38 * 0.100000024;
      fVar31 = fVar46 * 0.0 * 0.9 + fVar47 * 0.100000024;
      fVar41 = fVar31 * fVar31 + fVar36 * fVar36;
      fVar33 = fVar50 * fVar50 + fVar30 * fVar30;
      fVar39 = fVar41 + fVar30 * fVar30 + fVar50 * fVar50;
      fVar46 = fVar33 + fVar36 * fVar36 + fVar31 * fVar31;
      auVar6._4_4_ = fVar41 + fVar33 + 1.1754944e-38;
      auVar6._0_4_ = fVar33 + fVar41 + 1.1754944e-38;
      auVar6._8_4_ = fVar39 + 1.1754944e-38;
      auVar6._12_4_ = fVar46 + 1.1754944e-38;
      in_XMM2 = rsqrtps(in_XMM2,auVar6);
      fVar38 = in_XMM2._0_4_;
      fVar47 = in_XMM2._4_4_;
      fVar34 = in_XMM2._8_4_;
      fVar35 = in_XMM2._12_4_;
      fVar36 = fVar36 * (3.0 - fVar38 * fVar38 * (fVar33 + fVar41)) * fVar38 * 0.5;
      fVar30 = fVar30 * (3.0 - fVar47 * fVar47 * (fVar41 + fVar33)) * fVar47 * 0.5;
      fVar50 = fVar50 * (3.0 - fVar34 * fVar34 * fVar39) * fVar34 * 0.5;
      fVar31 = fVar31 * (3.0 - fVar35 * fVar35 * fVar46) * fVar35 * 0.5;
    }
    else {
      fVar36 = (float)acosf();
      fVar30 = (float)sinf();
      fVar31 = (float)sinf(fVar36 - fVar36 * 0.9);
      fVar31 = fVar31 * (1.0 / fVar30);
      iVar13 = sinf(fVar36 * 0.9);
      fVar32 = extraout_XMM0_Da * (1.0 / fVar30);
      fVar36 = fVar31 * fVar41 + fVar32 * fVar34 * 1.0;
      fVar30 = fVar31 * fVar33 + fVar32 * fVar35 * 0.0;
      fVar50 = fVar31 * fVar38 + fVar32 * fVar39 * 0.0;
      fVar31 = fVar31 * fVar47 + fVar32 * fVar46 * 0.0;
    }
    pfVar16 = (float *)(unaff_RSI + 0xb0);
    *pfVar17 = fVar36;
    *(float *)(unaff_RSI + 0x94) = fVar30;
    *(float *)(unaff_RSI + 0x98) = fVar50;
    *(float *)(unaff_RSI + 0x9c) = fVar31;
    fVar41 = *pfVar16;
    fVar33 = *(float *)(unaff_RSI + 0xb4);
    fVar38 = *(float *)(unaff_RSI + 0xb8);
    fVar47 = *(float *)(unaff_RSI + 0xbc);
    unaff_RBP[0x220] = 1.0;
    unaff_RBP[0x221] = 1.0;
    unaff_RBP[0x222] = 1.0;
    unaff_RBP[0x223] = 1.0;
    fVar34 = fVar38 * 0.0;
    fVar35 = fVar47 * 0.0;
    unaff_RBP[0x194] = fVar36;
    unaff_RBP[0x195] = fVar30;
    unaff_RBP[0x196] = fVar50;
    unaff_RBP[0x197] = fVar31;
    fVar39 = fVar35 + fVar33 * 0.0;
    fVar36 = fVar34 + fVar41 * 1.0 + fVar39;
    unaff_RBP[0x224] = -1.0;
    unaff_RBP[0x225] = -1.0;
    unaff_RBP[0x226] = -1.0;
    unaff_RBP[0x227] = -1.0;
    auVar7._4_4_ = fVar39;
    auVar7._0_4_ = fVar36;
    auVar7._8_4_ = fVar34 + fVar34;
    auVar7._12_4_ = fVar35 + fVar35;
    uVar12 = movmskps(iVar13,auVar7);
    pfVar27 = unaff_RBP + (uint64_t)(uVar12 & 1) * 4 + 0x220;
    fVar34 = *pfVar27;
    fVar35 = pfVar27[1];
    fVar39 = pfVar27[2];
    fVar46 = pfVar27[3];
    if (0.9995 < ABS(fVar36)) {
      fVar36 = fVar34 * 1.0 * 0.9 + fVar41 * 0.100000024;
      fVar30 = fVar35 * 0.0 * 0.9 + fVar33 * 0.100000024;
      fVar50 = fVar39 * 0.0 * 0.9 + fVar38 * 0.100000024;
      fVar31 = fVar46 * 0.0 * 0.9 + fVar47 * 0.100000024;
      fVar41 = fVar31 * fVar31 + fVar36 * fVar36;
      fVar33 = fVar50 * fVar50 + fVar30 * fVar30;
      fVar39 = fVar41 + fVar30 * fVar30 + fVar50 * fVar50;
      fVar46 = fVar33 + fVar36 * fVar36 + fVar31 * fVar31;
      auVar5._4_4_ = fVar41 + fVar33 + 1.1754944e-38;
      auVar5._0_4_ = fVar33 + fVar41 + 1.1754944e-38;
      auVar5._8_4_ = fVar39 + 1.1754944e-38;
      auVar5._12_4_ = fVar46 + 1.1754944e-38;
      auVar42 = rsqrtps(in_XMM2,auVar5);
      fVar38 = auVar42._0_4_;
      fVar47 = auVar42._4_4_;
      fVar34 = auVar42._8_4_;
      fVar35 = auVar42._12_4_;
      fVar36 = fVar36 * (3.0 - fVar38 * fVar38 * (fVar33 + fVar41)) * fVar38 * 0.5;
      fVar30 = fVar30 * (3.0 - fVar47 * fVar47 * (fVar41 + fVar33)) * fVar47 * 0.5;
      fVar50 = fVar50 * (3.0 - fVar34 * fVar34 * fVar39) * fVar34 * 0.5;
      fVar31 = fVar31 * (3.0 - fVar35 * fVar35 * fVar46) * fVar35 * 0.5;
    }
    else {
      fVar36 = (float)acosf();
      fVar30 = (float)sinf();
      fVar31 = (float)sinf(fVar36 - fVar36 * 0.9);
      fVar31 = fVar31 * (1.0 / fVar30);
      fVar32 = (float)sinf(fVar36 * 0.9);
      fVar32 = fVar32 * (1.0 / fVar30);
      fVar36 = fVar31 * fVar41 + fVar32 * fVar34 * 1.0;
      fVar30 = fVar31 * fVar33 + fVar32 * fVar35 * 0.0;
      fVar50 = fVar31 * fVar38 + fVar32 * fVar39 * 0.0;
      fVar31 = fVar31 * fVar47 + fVar32 * fVar46 * 0.0;
    }
    unaff_RBP[0x198] = fVar36;
    unaff_RBP[0x199] = fVar30;
    unaff_RBP[0x19a] = fVar50;
    unaff_RBP[0x19b] = fVar31;
    *pfVar16 = fVar36;
    *(float *)(unaff_RSI + 0xb4) = fVar30;
    *(float *)(unaff_RSI + 0xb8) = fVar50;
    *(float *)(unaff_RSI + 0xbc) = fVar31;
    puVar15 = (uint64_t *)FUN_180300bf0(&stack0x00000070,unaff_RBP + 0x1bc,pfVar17);
    in_stack_00000070 = *puVar15;
    in_stack_00000078 = puVar15[1];
    fVar41 = *(float *)((int64_t)puVar15 + 0x14);
    fVar33 = *(float *)(puVar15 + 3);
    fVar38 = *(float *)((int64_t)puVar15 + 0x1c);
    unaff_RBP[-0x20] = *(float *)(puVar15 + 2);
    unaff_RBP[-0x1f] = fVar41;
    unaff_RBP[-0x1e] = fVar33;
    unaff_RBP[-0x1d] = fVar38;
    puVar15 = (uint64_t *)FUN_180300bf0(unaff_RBP + -0x18,unaff_RBP + 0x1c4,pfVar16);
    uVar14 = puVar15[1];
    *(uint64_t *)(unaff_RBP + -0x18) = *puVar15;
    *(uint64_t *)(unaff_RBP + -0x16) = uVar14;
    uVar14 = puVar15[3];
    fVar41 = *(float *)(unaff_RSI + 0xa0);
    *(uint64_t *)(unaff_RBP + -0x14) = puVar15[2];
    *(uint64_t *)(unaff_RBP + -0x12) = uVar14;
    if (((((ABS(fVar41) < 0.001) && (ABS(*(float *)(unaff_RSI + 0xa4)) < 0.001)) &&
         (ABS(*(float *)(unaff_RSI + 0xa8)) < 0.001)) &&
        ((ABS(*(float *)(unaff_RSI + 0xc0)) < 0.001 && (ABS(*(float *)(unaff_RSI + 0xc4)) < 0.001)))
        ) && ((ABS(*(float *)(unaff_RSI + 200)) < 0.001 &&
              ((cVar11 = FUN_1805f26d0(pfVar17,&system_data_3a10), cVar11 != '\0' &&
               (cVar11 = FUN_1805f26d0(pfVar16,&system_data_3a10), cVar11 != '\0')))))) {
      *(int8_t *)(unaff_RSI + 0xd1) = 0;
      pfVar17[0] = 1.0;
      pfVar17[1] = 0.0;
      *(uint64_t *)(unaff_RSI + 0x98) = 0;
      *(uint64_t *)(unaff_RSI + 0xa0) = 0;
      *(uint64_t *)(unaff_RSI + 0xa8) = 0x3f80000000000000;
      *pfVar16 = 1.0;
      *(int32_t *)(unaff_RSI + 0xb4) = 0;
      *(int32_t *)(unaff_RSI + 0xb8) = 0;
      *(int32_t *)(unaff_RSI + 0xbc) = 0;
      *(uint64_t *)(unaff_RSI + 0xc0) = 0;
      *(uint64_t *)(unaff_RSI + 200) = 0x3f80000000000000;
    }
  }
  if (unaff_R15B != '\0') {
    lVar22 = *(int64_t *)(unaff_R14 + 0x208);
    cVar11 = '\0';
    if ('\0' < *(char *)(lVar22 + 0x148)) {
      unaff_RBP[-0x1c] = unaff_XMM12_Da;
      unaff_RBP[-0x1b] = unaff_XMM12_Da;
      unaff_RBP[-0x1a] = unaff_XMM12_Da;
      unaff_RBP[-0x19] = unaff_XMM12_Dc;
      fVar41 = unaff_RBP[-0x1c];
      fVar33 = unaff_RBP[-0x1b];
      fVar38 = unaff_RBP[-0x1a];
      fVar47 = unaff_RBP[-0x19];
      do {
        lVar26 = (int64_t)cVar11;
        lVar19 = lVar26 * 0x30;
        puVar21 = (uint *)((int64_t)*(char *)(lVar19 + *(int64_t *)(unaff_RSI + 0x1e8)) * 0x100 +
                          *(int64_t *)(unaff_R13 + 0x18));
        do {
          LOCK();
          uVar12 = *puVar21;
          *puVar21 = *puVar21 | 1;
          UNLOCK();
        } while ((uVar12 & 1) != 0);
        fVar34 = (float)puVar21[1];
        fVar35 = (float)puVar21[2];
        fVar39 = (float)puVar21[3];
        fVar46 = (float)puVar21[4];
        fVar36 = (float)puVar21[5];
        fVar30 = (float)puVar21[6];
        fVar50 = (float)puVar21[7];
        fVar31 = (float)puVar21[8];
        unaff_RBP[0x208] = fVar34;
        unaff_RBP[0x209] = fVar35;
        unaff_RBP[0x20a] = fVar39;
        unaff_RBP[0x20b] = fVar46;
        unaff_RBP[0x20c] = fVar36;
        unaff_RBP[0x20d] = fVar30;
        unaff_RBP[0x20e] = fVar50;
        unaff_RBP[0x20f] = fVar31;
        *puVar21 = 0;
        lVar23 = *(int64_t *)(unaff_RSI + 0x1e8);
        unaff_RBP[0x170] = fVar34;
        unaff_RBP[0x171] = fVar35;
        unaff_RBP[0x172] = fVar39;
        unaff_RBP[0x173] = fVar46;
        unaff_RBP[0x174] = fVar36;
        unaff_RBP[0x175] = fVar30;
        unaff_RBP[0x176] = fVar50;
        unaff_RBP[0x177] = fVar31;
        unaff_RBP[0xe8] = fVar34;
        unaff_RBP[0xe9] = fVar35;
        unaff_RBP[0xea] = fVar39;
        unaff_RBP[0xeb] = fVar46;
        unaff_RBP[0xec] = fVar36;
        unaff_RBP[0xed] = fVar30;
        unaff_RBP[0xee] = fVar50;
        unaff_RBP[0xef] = fVar31;
        pfVar16 = (float *)FUN_1801c0fb0(unaff_RBP + 0xe8,unaff_RBP + 0x110,lVar23 + 0x20 + lVar19);
        pfVar17 = (float *)(lVar19 + 0x10 + lVar23);
        fVar31 = *pfVar17;
        fVar32 = pfVar17[1];
        fVar37 = pfVar17[2];
        fVar40 = pfVar17[3];
        fVar36 = fVar36 + *pfVar16;
        unaff_RBP[-1] = 3.4028235e+38;
        fVar30 = fVar30 + pfVar16[1];
        pfVar27 = (float *)(lVar26 * 0x40 + *(int64_t *)(unaff_RSI + 0x108));
        fVar50 = fVar50 + pfVar16[2];
        fVar52 = fVar39 * fVar40 * 1.0 + fVar34 * fVar32 * 1.0 + (fVar31 * fVar35 - fVar46 * fVar37)
        ;
        fVar53 = fVar46 * fVar32 * 1.0 + fVar34 * fVar37 * 1.0 + (fVar31 * fVar39 - fVar35 * fVar40)
        ;
        fVar54 = fVar35 * fVar37 * 1.0 + fVar34 * fVar40 * 1.0 + (fVar31 * fVar46 - fVar39 * fVar32)
        ;
        fVar55 = fVar46 * fVar40 * -1.0 + fVar39 * fVar37 * -1.0 +
                 (fVar31 * fVar34 - fVar35 * fVar32);
        unaff_RBP[0x10c] = fVar36;
        unaff_RBP[0x10d] = fVar30;
        unaff_RBP[0x10e] = fVar50;
        unaff_RBP[0x10f] = unaff_RBP[-1];
        unaff_RBP[-4] = fVar36;
        unaff_RBP[-3] = fVar30;
        unaff_RBP[-2] = fVar50;
        unaff_RBP[-1] = unaff_RBP[-1];
        unaff_RBP[0x114] = fVar55;
        unaff_RBP[0x115] = fVar52;
        unaff_RBP[0x116] = fVar53;
        unaff_RBP[0x117] = fVar54;
        unaff_RBP[0x108] = fVar55;
        unaff_RBP[0x109] = fVar52;
        unaff_RBP[0x10a] = fVar53;
        unaff_RBP[0x10b] = fVar54;
        pfVar17 = (float *)FUN_1801c0fb0(unaff_RBP + 0x108,unaff_RBP + 0x118,pfVar27 + 4);
        fVar46 = *pfVar27;
        fVar31 = pfVar27[1];
        fVar32 = pfVar27[2];
        fVar37 = pfVar27[3];
        fVar34 = *pfVar17;
        fVar35 = pfVar17[1];
        fVar39 = pfVar17[2];
        unaff_RBP[-5] = 3.4028235e+38;
        fVar40 = unaff_RBP[-5];
        fVar48 = fVar53 * fVar37 * 1.0 + fVar55 * fVar31 * 1.0 + (fVar46 * fVar52 - fVar54 * fVar32)
        ;
        fVar49 = fVar54 * fVar31 * 1.0 + fVar55 * fVar32 * 1.0 + (fVar46 * fVar53 - fVar52 * fVar37)
        ;
        fVar51 = fVar52 * fVar32 * 1.0 + fVar55 * fVar37 * 1.0 + (fVar46 * fVar54 - fVar53 * fVar31)
        ;
        fVar31 = fVar54 * fVar37 * -1.0 + fVar53 * fVar32 * -1.0 +
                 (fVar46 * fVar55 - fVar52 * fVar31);
        unaff_RBP[-8] = fVar36 + fVar34;
        unaff_RBP[-7] = fVar30 + fVar35;
        unaff_RBP[-6] = fVar50 + fVar39;
        unaff_RBP[-5] = fVar40;
        unaff_RBP[0x5c] = fVar36 + fVar34;
        unaff_RBP[0x5d] = fVar30 + fVar35;
        unaff_RBP[0x5e] = fVar50 + fVar39;
        unaff_RBP[0x5f] = fVar40;
        unaff_RBP[0x14c] = fVar31;
        unaff_RBP[0x14d] = fVar48;
        unaff_RBP[0x14e] = fVar49;
        unaff_RBP[0x14f] = fVar51;
        unaff_RBP[0x58] = fVar31;
        unaff_RBP[0x59] = fVar48;
        unaff_RBP[0x5a] = fVar49;
        unaff_RBP[0x5b] = fVar51;
        pfVar17 = (float *)FUN_1801c0fb0(unaff_RBP + 0x44,unaff_RBP + 0x11c,unaff_RBP + 0x5c);
        plVar25 = *(int64_t **)(unaff_RSI + 0xd8);
        fVar34 = *pfVar17;
        fVar35 = pfVar17[1];
        fVar39 = pfVar17[2];
        unaff_RBP[3] = 3.4028235e+38;
        fVar46 = fVar48 * fVar41 * 1.0 + fVar51 * unaff_XMM12_Dc * 1.0 +
                 (fVar31 * unaff_XMM12_Db - fVar49 * unaff_XMM12_Dd);
        fVar36 = fVar49 * fVar33 * 1.0 + fVar48 * unaff_XMM12_Dd * 1.0 +
                 (fVar31 * unaff_XMM12_Dc - fVar51 * unaff_XMM12_Db);
        fVar30 = fVar51 * fVar38 * 1.0 + fVar49 * unaff_XMM12_Db * 1.0 +
                 (fVar31 * unaff_XMM12_Dd - fVar48 * unaff_XMM12_Dc);
        fVar50 = fVar49 * fVar47 * -1.0 + fVar51 * unaff_XMM12_Dd * -1.0 +
                 (fVar31 * unaff_XMM12_Da - fVar48 * unaff_XMM12_Db);
        unaff_RBP[0x5c] = unaff_RBP[0x34] + fVar34;
        unaff_RBP[0x5d] = unaff_RBP[0x35] + fVar35;
        unaff_RBP[0x5e] = unaff_RBP[0x36] + fVar39;
        unaff_RBP[0x5f] = unaff_RBP[3];
        *unaff_RBP = unaff_RBP[0x34] + fVar34;
        unaff_RBP[1] = unaff_RBP[0x35] + fVar35;
        unaff_RBP[2] = unaff_RBP[0x36] + fVar39;
        unaff_RBP[3] = unaff_RBP[3];
        unaff_RBP[0x58] = fVar50;
        unaff_RBP[0x59] = fVar46;
        unaff_RBP[0x5a] = fVar36;
        unaff_RBP[0x5b] = fVar30;
        lVar19 = *plVar25;
        unaff_RBP[0x120] = fVar50;
        unaff_RBP[0x121] = fVar46;
        unaff_RBP[0x122] = fVar36;
        unaff_RBP[0x123] = fVar30;
        pcVar24 = *(code **)(lVar19 + 0x58);
        puVar18 = (int32_t *)(**(code **)(lVar19 + 0x10))(plVar25,unaff_RBP + 0x41,(int)cVar11);
        (*pcVar24)(plVar25,*puVar18,unaff_RBP + 0x58);
        cVar11 = cVar11 + '\x01';
      } while (cVar11 < *(char *)(lVar22 + 0x148));
      unaff_XMM11_Da = 0.0;
      unaff_R14 = *(int64_t *)(unaff_RBP + -0x10);
    }
  }
  if (cStackX_20 == '\0') {
    if (*(char *)(unaff_RSI + 0x218) == '\0') {
      *(int8_t *)(unaff_RSI + 0x218) = 1;
      cVar11 = '\0';
      lVar22 = *(int64_t *)(unaff_R14 + 0x208);
      if ('\0' < *(char *)(lVar22 + 0x148)) {
        do {
          lVar19 = (int64_t)cVar11;
          lVar26 = lVar19 * 0x30;
          puVar21 = (uint *)((int64_t)*(char *)(lVar26 + *(int64_t *)(unaff_RSI + 0x1e8)) * 0x100
                            + *(int64_t *)(unaff_R13 + 0x18));
          do {
            LOCK();
            uVar12 = *puVar21;
            *puVar21 = *puVar21 | 1;
            UNLOCK();
          } while ((uVar12 & 1) != 0);
          fVar47 = (float)puVar21[1];
          fVar34 = (float)puVar21[2];
          fVar35 = (float)puVar21[3];
          fVar39 = (float)puVar21[4];
          fVar46 = (float)puVar21[5];
          fVar36 = (float)puVar21[6];
          fVar30 = (float)puVar21[7];
          fVar41 = (float)puVar21[8];
          unaff_RBP[0x200] = fVar47;
          unaff_RBP[0x201] = fVar34;
          unaff_RBP[0x202] = fVar35;
          unaff_RBP[0x203] = fVar39;
          unaff_RBP[0x204] = fVar46;
          unaff_RBP[0x205] = fVar36;
          unaff_RBP[0x206] = fVar30;
          unaff_RBP[0x207] = fVar41;
          *puVar21 = 0;
          lVar23 = *(int64_t *)(unaff_RSI + 0x1e8);
          unaff_RBP[0x188] = fVar47;
          unaff_RBP[0x189] = fVar34;
          unaff_RBP[0x18a] = fVar35;
          unaff_RBP[0x18b] = fVar39;
          unaff_RBP[0x18c] = fVar46;
          unaff_RBP[0x18d] = fVar36;
          unaff_RBP[0x18e] = fVar30;
          unaff_RBP[399] = fVar41;
          unaff_RBP[0x100] = fVar47;
          unaff_RBP[0x101] = fVar34;
          unaff_RBP[0x102] = fVar35;
          unaff_RBP[0x103] = fVar39;
          unaff_RBP[0x104] = fVar46;
          unaff_RBP[0x105] = fVar36;
          unaff_RBP[0x106] = fVar30;
          unaff_RBP[0x107] = fVar41;
          pfVar16 = (float *)FUN_1801c0fb0(unaff_RBP + 0x100,unaff_RBP + 0x15c,
                                           lVar23 + 0x20 + lVar26);
          pfVar17 = (float *)(lVar26 + 0x10 + lVar23);
          fVar50 = *pfVar17;
          fVar31 = pfVar17[1];
          fVar32 = pfVar17[2];
          fVar37 = pfVar17[3];
          fVar41 = *pfVar16;
          unaff_RBP[0x1f] = 3.4028235e+38;
          puVar21 = (uint *)(lVar19 * 0x100 + *(int64_t *)(unaff_R14 + 0x18));
          fVar40 = unaff_RBP[0x1f];
          fVar33 = pfVar16[1];
          fVar38 = pfVar16[2];
          fVar48 = fVar37 * fVar35 * 1.0 + fVar31 * fVar47 * 1.0 +
                   (fVar50 * fVar34 - fVar32 * fVar39);
          fVar49 = fVar31 * fVar39 * 1.0 + fVar32 * fVar47 * 1.0 +
                   (fVar50 * fVar35 - fVar37 * fVar34);
          fVar51 = fVar32 * fVar34 * 1.0 + fVar37 * fVar47 * 1.0 +
                   (fVar50 * fVar39 - fVar31 * fVar35);
          fVar47 = fVar37 * fVar39 * -1.0 + fVar32 * fVar35 * -1.0 +
                   (fVar50 * fVar47 - fVar31 * fVar34);
          unaff_RBP[0x1c] = fVar46 + fVar41;
          unaff_RBP[0x1d] = fVar36 + fVar33;
          unaff_RBP[0x1e] = fVar30 + fVar38;
          unaff_RBP[0x1f] = fVar40;
          unaff_RBP[200] = fVar46 + fVar41;
          unaff_RBP[0xc9] = fVar36 + fVar33;
          unaff_RBP[0xca] = fVar30 + fVar38;
          unaff_RBP[0xcb] = fVar40;
          unaff_RBP[400] = fVar47;
          unaff_RBP[0x191] = fVar48;
          unaff_RBP[0x192] = fVar49;
          unaff_RBP[0x193] = fVar51;
          unaff_RBP[0xc4] = fVar47;
          unaff_RBP[0xc5] = fVar48;
          unaff_RBP[0xc6] = fVar49;
          unaff_RBP[199] = fVar51;
          do {
            LOCK();
            uVar12 = *puVar21;
            *puVar21 = *puVar21 | 1;
            UNLOCK();
          } while ((uVar12 & 1) != 0);
          fVar41 = unaff_RBP[0xc5];
          fVar33 = unaff_RBP[0xc6];
          fVar38 = unaff_RBP[199];
          fVar47 = unaff_RBP[200];
          fVar34 = unaff_RBP[0xc9];
          fVar35 = unaff_RBP[0xca];
          fVar39 = unaff_RBP[0xcb];
          puVar21[1] = (uint)unaff_RBP[0xc4];
          puVar21[2] = (uint)fVar41;
          puVar21[3] = (uint)fVar33;
          puVar21[4] = (uint)fVar38;
          puVar21[5] = (uint)fVar47;
          puVar21[6] = (uint)fVar34;
          puVar21[7] = (uint)fVar35;
          puVar21[8] = (uint)fVar39;
          *puVar21 = 0;
          FUN_1802feba0(unaff_R14,
                        (int64_t)(uint64_t)(uint)((int)puVar21 - *(int *)(unaff_R14 + 0x18)) >> 8)
          ;
          cVar11 = cVar11 + '\x01';
        } while (cVar11 < *(char *)(lVar22 + 0x148));
      }
    }
  }
  else {
    *(int8_t *)(unaff_RSI + 0x218) = 0;
    if (*(int64_t *)(unaff_RSI + 0x100) != 0) {
      uVar14 = *(uint64_t *)(unaff_R12 + 0x78);
      uVar9 = *(uint64_t *)(unaff_R12 + 0x80);
      uVar10 = *(uint64_t *)(unaff_R12 + 0x88);
      *(uint64_t *)(unaff_RBP + 0x98) = *(uint64_t *)(unaff_R12 + 0x70);
      *(uint64_t *)(unaff_RBP + 0x9a) = uVar14;
      fVar41 = *(float *)(unaff_R12 + 0x90);
      fVar33 = *(float *)(unaff_R12 + 0x94);
      fVar38 = *(float *)(unaff_R12 + 0x98);
      fVar47 = *(float *)(unaff_R12 + 0x9c);
      *(uint64_t *)(unaff_RBP + 0x9c) = uVar9;
      *(uint64_t *)(unaff_RBP + 0x9e) = uVar10;
      fVar34 = *(float *)(unaff_R12 + 0xa0);
      fVar35 = *(float *)(unaff_R12 + 0xa4);
      fVar39 = *(float *)(unaff_R12 + 0xa8);
      fVar46 = *(float *)(unaff_R12 + 0xac);
      unaff_RBP[0xa0] = fVar41;
      unaff_RBP[0xa1] = fVar33;
      unaff_RBP[0xa2] = fVar38;
      unaff_RBP[0xa3] = fVar47;
      unaff_RBP[0xa4] = fVar34;
      unaff_RBP[0xa5] = fVar35;
      unaff_RBP[0xa6] = fVar39;
      unaff_RBP[0xa7] = fVar46;
      FUN_180084ae0(unaff_RBP + 0x98);
      iVar13 = *(int *)(unaff_R13 + 0x44);
      lVar22 = (int64_t)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
      iVar8 = (int)((*(int64_t *)(*(int64_t *)(unaff_RSI + 0x100) + 0x20) -
                    *(int64_t *)(*(int64_t *)(unaff_RSI + 0x100) + 0x18)) / 0x128);
      if (0 < iVar8) {
        fVar41 = unaff_RBP[0x9c];
        fVar33 = unaff_RBP[0x9d];
        fVar38 = unaff_RBP[0x9e];
        fVar47 = unaff_RBP[0x9f];
        lVar26 = 0;
        unaff_RBP[7] = 3.4028235e+38;
        fVar34 = unaff_RBP[0x98];
        fVar35 = unaff_RBP[0x99];
        fVar39 = unaff_RBP[0x9a];
        fVar46 = unaff_RBP[0x9b];
        unaff_RBP[0xb] = 3.4028235e+38;
        lVar19 = 0;
        unaff_RBP[0xf] = 3.4028235e+38;
        unaff_RBP[0x20] = fVar41;
        unaff_RBP[0x21] = fVar33;
        unaff_RBP[0x22] = fVar38;
        unaff_RBP[0x23] = fVar47;
        unaff_RBP[-0x1c] = fVar34;
        unaff_RBP[-0x1b] = fVar35;
        unaff_RBP[-0x1a] = fVar39;
        unaff_RBP[-0x19] = fVar46;
        *(uint64_t *)(unaff_RBP + 0xb4) = *(uint64_t *)(unaff_RBP + 0xa0);
        *(uint64_t *)(unaff_RBP + 0xb6) = *(uint64_t *)(unaff_RBP + 0xa2);
        *(uint64_t *)(unaff_RBP + 0xa8) = *(uint64_t *)(unaff_RBP + 0xa4);
        *(uint64_t *)(unaff_RBP + 0xaa) = *(uint64_t *)(unaff_RBP + 0xa6);
        do {
          lVar23 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x100) + 0x18);
          fVar36 = *(float *)(lVar19 + 0xb4 + lVar23);
          pfVar17 = (float *)(lVar19 + 0xf4 + lVar23);
          fVar30 = *(float *)(lVar19 + 0xb8 + lVar23);
          pfVar16 = (float *)(lVar19 + 0xd4 + lVar23);
          pfVar27 = (float *)(lVar19 + 0xe4 + lVar23);
          fVar50 = *(float *)(lVar19 + 0xbc + lVar23);
          pfVar1 = (float *)(lVar19 + 0xc4 + lVar23);
          fVar31 = fVar36 + *(float *)(lVar19 + 0xb0 + lVar23);
          fVar32 = *pfVar1 * fVar36 + *pfVar16 * fVar30 + *pfVar27 * fVar50 + *pfVar17;
          fVar40 = pfVar1[1] * fVar36 + pfVar16[1] * fVar30 + pfVar27[1] * fVar50 + pfVar17[1];
          fVar49 = pfVar1[2] * fVar36 + pfVar16[2] * fVar30 + pfVar27[2] * fVar50 + pfVar17[2];
          pfVar1 = (float *)(lVar19 + 0xc4 + lVar23);
          fVar37 = *pfVar1 * fVar31 + *pfVar16 * fVar30 + *pfVar27 * fVar50 + *pfVar17;
          fVar48 = pfVar1[1] * fVar31 + pfVar16[1] * fVar30 + pfVar27[1] * fVar50 + pfVar17[1];
          fVar51 = pfVar1[2] * fVar31 + pfVar16[2] * fVar30 + pfVar27[2] * fVar50 + pfVar17[2];
          fVar30 = unaff_XMM11_Da;
          fVar50 = unaff_XMM11_Da;
          fVar36 = unaff_XMM11_Da;
          fVar31 = unaff_XMM11_Da;
          if (*(int *)(lVar19 + lVar23) != -1) {
            fVar36 = *(float *)(lVar19 + 8 + lVar23);
            uVar20 = iVar13 + *(int *)(lVar19 + lVar23);
            uVar12 = uVar20 >> 0xd;
            pfVar17 = (float *)(*(int64_t *)(lVar22 + 8 + (uint64_t)uVar12 * 8) +
                               (uint64_t)(uVar20 + uVar12 * -0x2000) * 0x40);
            fVar52 = pfVar17[7];
            fVar53 = pfVar17[3];
            fVar54 = pfVar17[0xb];
            fVar55 = pfVar17[0xf];
            fVar31 = pfVar17[4] * fVar40 + *pfVar17 * fVar32 + pfVar17[8] * fVar49 + pfVar17[0xc];
            fVar50 = pfVar17[5] * fVar40 + pfVar17[1] * fVar32 + pfVar17[9] * fVar49 + pfVar17[0xd];
            fVar30 = pfVar17[6] * fVar40 + pfVar17[2] * fVar32 + pfVar17[10] * fVar49 + pfVar17[0xe]
            ;
            unaff_RBP[0x124] = fVar31;
            unaff_RBP[0x125] = fVar50;
            unaff_RBP[0x126] = fVar30;
            unaff_RBP[0x127] = fVar52 * fVar40 + fVar53 * fVar32 + fVar54 * fVar49 + fVar55;
            fVar30 = fVar30 * fVar36;
            fVar31 = fVar31 * fVar36;
            fVar50 = fVar50 * fVar36;
          }
          iVar2 = *(int *)(lVar19 + 4 + lVar23);
          if (iVar2 != -1) {
            uVar20 = iVar13 + iVar2;
            fVar36 = 1.0 - fVar36;
            uVar12 = uVar20 >> 0xd;
            pfVar17 = (float *)(*(int64_t *)(lVar22 + 8 + (uint64_t)uVar12 * 8) +
                               (uint64_t)(uVar20 + uVar12 * -0x2000) * 0x40);
            fVar52 = pfVar17[7];
            fVar53 = pfVar17[3];
            fVar54 = pfVar17[0xb];
            fVar55 = pfVar17[0xf];
            fVar43 = pfVar17[4] * fVar40 + *pfVar17 * fVar32 + pfVar17[8] * fVar49 + pfVar17[0xc];
            fVar44 = pfVar17[5] * fVar40 + pfVar17[1] * fVar32 + pfVar17[9] * fVar49 + pfVar17[0xd];
            fVar45 = pfVar17[6] * fVar40 + pfVar17[2] * fVar32 + pfVar17[10] * fVar49 + pfVar17[0xe]
            ;
            unaff_RBP[300] = fVar43;
            unaff_RBP[0x12d] = fVar44;
            unaff_RBP[0x12e] = fVar45;
            unaff_RBP[0x12f] = fVar52 * fVar40 + fVar53 * fVar32 + fVar54 * fVar49 + fVar55;
            fVar30 = fVar30 + fVar45 * fVar36;
            fVar31 = fVar31 + fVar43 * fVar36;
            fVar50 = fVar50 + fVar44 * fVar36;
          }
          iVar2 = *(int *)(lVar19 + 0x58 + lVar23);
          fVar32 = unaff_XMM11_Da;
          fVar40 = unaff_XMM11_Da;
          fVar36 = unaff_XMM11_Da;
          if (iVar2 != -1) {
            fVar36 = *(float *)(lVar19 + 0x60 + lVar23);
            uVar20 = iVar13 + iVar2;
            uVar12 = uVar20 >> 0xd;
            pfVar17 = (float *)(*(int64_t *)(lVar22 + 8 + (uint64_t)uVar12 * 8) +
                               (uint64_t)(uVar20 + uVar12 * -0x2000) * 0x40);
            fVar49 = pfVar17[7];
            fVar52 = pfVar17[3];
            fVar53 = pfVar17[0xb];
            fVar54 = pfVar17[0xf];
            fVar40 = pfVar17[4] * fVar48 + *pfVar17 * fVar37 + pfVar17[8] * fVar51 + pfVar17[0xc];
            fVar32 = pfVar17[5] * fVar48 + pfVar17[1] * fVar37 + pfVar17[9] * fVar51 + pfVar17[0xd];
            fVar55 = pfVar17[6] * fVar48 + pfVar17[2] * fVar37 + pfVar17[10] * fVar51 + pfVar17[0xe]
            ;
            unaff_RBP[0x130] = fVar40;
            unaff_RBP[0x131] = fVar32;
            unaff_RBP[0x132] = fVar55;
            unaff_RBP[0x133] = fVar49 * fVar48 + fVar52 * fVar37 + fVar53 * fVar51 + fVar54;
            unaff_XMM11_Da = fVar55 * fVar36;
            fVar40 = fVar40 * fVar36;
            fVar32 = fVar32 * fVar36;
          }
          iVar2 = *(int *)(lVar19 + 0x5c + lVar23);
          if (iVar2 != -1) {
            uVar20 = iVar2 + iVar13;
            fVar36 = 1.0 - fVar36;
            uVar12 = uVar20 >> 0xd;
            pfVar17 = (float *)(*(int64_t *)(lVar22 + 8 + (uint64_t)uVar12 * 8) +
                               (uint64_t)(uVar20 + uVar12 * -0x2000) * 0x40);
            fVar49 = pfVar17[7];
            fVar52 = pfVar17[3];
            fVar53 = pfVar17[0xb];
            fVar54 = pfVar17[0xf];
            fVar55 = pfVar17[4] * fVar48 + *pfVar17 * fVar37 + pfVar17[8] * fVar51 + pfVar17[0xc];
            fVar43 = pfVar17[5] * fVar48 + pfVar17[1] * fVar37 + pfVar17[9] * fVar51 + pfVar17[0xd];
            fVar44 = pfVar17[6] * fVar48 + pfVar17[2] * fVar37 + pfVar17[10] * fVar51 + pfVar17[0xe]
            ;
            unaff_RBP[0x134] = fVar55;
            unaff_RBP[0x135] = fVar43;
            unaff_RBP[0x136] = fVar44;
            unaff_RBP[0x137] = fVar49 * fVar48 + fVar52 * fVar37 + fVar53 * fVar51 + fVar54;
            fVar40 = fVar40 + fVar36 * fVar55;
            unaff_XMM11_Da = unaff_XMM11_Da + fVar36 * fVar44;
            fVar32 = fVar32 + fVar36 * fVar43;
          }
          fVar36 = unaff_RBP[7];
          fVar51 = fVar31 * fVar34 + fVar50 * fVar41 + fVar30 * unaff_RBP[0xb4] + unaff_RBP[0xa8];
          fVar52 = fVar31 * fVar35 + fVar50 * fVar33 + fVar30 * unaff_RBP[0xb5] + unaff_RBP[0xa9];
          fVar53 = fVar31 * fVar39 + fVar50 * fVar38 + fVar30 * unaff_RBP[0xb6] + unaff_RBP[0xaa];
          fVar37 = fVar40 * unaff_RBP[-0x1c] + fVar32 * fVar41 + unaff_XMM11_Da * unaff_RBP[0xb4] +
                   unaff_RBP[0xa8];
          fVar48 = fVar40 * unaff_RBP[-0x1b] + fVar32 * fVar33 + unaff_XMM11_Da * unaff_RBP[0xb5] +
                   unaff_RBP[0xa9];
          fVar49 = fVar40 * unaff_RBP[-0x1a] + fVar32 * fVar38 + unaff_XMM11_Da * unaff_RBP[0xb6] +
                   unaff_RBP[0xaa];
          unaff_RBP[0x138] = fVar51;
          unaff_RBP[0x139] = fVar52;
          unaff_RBP[0x13a] = fVar53;
          unaff_RBP[0x13b] =
               fVar31 * fVar46 + fVar50 * fVar47 + fVar30 * unaff_RBP[0xb7] + unaff_RBP[0xab];
          fVar35 = fVar37 - fVar51;
          fVar34 = fVar48 - fVar52;
          fVar38 = fVar49 - fVar53;
          unaff_RBP[4] = fVar35;
          unaff_RBP[5] = fVar34;
          unaff_RBP[6] = fVar38;
          unaff_RBP[7] = fVar36;
          unaff_RBP[0x13c] = fVar37;
          unaff_RBP[0x13d] = fVar48;
          unaff_RBP[0x13e] = fVar49;
          unaff_RBP[0x13f] =
               fVar40 * unaff_RBP[-0x19] + fVar32 * fVar47 + unaff_XMM11_Da * unaff_RBP[0xb7] +
               unaff_RBP[0xab];
          fVar41 = fVar34 * fVar34 + fVar35 * fVar35 + fVar38 * fVar38;
          auVar42 = rsqrtss(ZEXT416((uint)fVar41),ZEXT416((uint)fVar41));
          fVar33 = auVar42._0_4_;
          fVar30 = fVar33 * 0.5 * (3.0 - fVar41 * fVar33 * fVar33);
          fVar34 = fVar30 * fVar34;
          fVar38 = fVar30 * fVar38;
          fVar30 = fVar30 * fVar35;
          fVar41 = unaff_RBP[0xb];
          unaff_RBP[0x88] = fVar30;
          unaff_RBP[0x89] = fVar34;
          unaff_RBP[0x8a] = fVar38;
          unaff_RBP[0x8b] = fVar36;
          fVar39 = fVar38 * 0.0 - fVar34 * 1.0;
          fVar35 = fVar30 * 1.0 - fVar38 * 0.0;
          fVar46 = fVar34 * 0.0 - fVar30 * 0.0;
          unaff_RBP[8] = fVar39;
          unaff_RBP[9] = fVar35;
          unaff_RBP[10] = fVar46;
          unaff_RBP[0xb] = fVar41;
          fVar33 = fVar39 * fVar39 + fVar35 * fVar35 + fVar46 * fVar46;
          auVar42 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
          fVar47 = auVar42._0_4_;
          fVar47 = fVar47 * 0.5 * (3.0 - fVar33 * fVar47 * fVar47);
          fVar35 = fVar47 * fVar35;
          fVar39 = fVar47 * fVar39;
          fVar47 = fVar47 * fVar46;
          fVar46 = fVar47 * fVar34 - fVar35 * fVar38;
          fVar33 = unaff_RBP[0xf];
          fVar38 = fVar39 * fVar38 - fVar30 * fVar47;
          unaff_RBP[0x8c] = fVar39;
          unaff_RBP[0x8d] = fVar35;
          unaff_RBP[0x8e] = fVar47;
          unaff_RBP[0x8f] = fVar41;
          fVar34 = fVar30 * fVar35 - fVar39 * fVar34;
          plVar25 = *(int64_t **)(unaff_RSI + 0xd8);
          unaff_RBP[0x8b] = 0.0;
          lVar23 = *plVar25;
          unaff_RBP[0xc] = fVar46;
          unaff_RBP[0xd] = fVar38;
          unaff_RBP[0xe] = fVar34;
          unaff_RBP[0xf] = fVar33;
          unaff_RBP[0x8f] = 0.0;
          pcVar24 = *(code **)(lVar23 + 0x20);
          fVar41 = fVar38 * fVar38 + fVar46 * fVar46 + fVar34 * fVar34;
          auVar42 = rsqrtss(ZEXT416((uint)fVar41),ZEXT416((uint)fVar41));
          fVar47 = auVar42._0_4_;
          fVar41 = fVar47 * 0.5 * (3.0 - fVar41 * fVar47 * fVar47);
          unaff_RBP[0x90] = fVar46 * fVar41;
          unaff_RBP[0x91] = fVar38 * fVar41;
          unaff_RBP[0x92] = fVar34 * fVar41;
          unaff_RBP[0x93] = fVar33;
          unaff_RBP[0x94] = (fVar51 + fVar37) * 0.5;
          unaff_RBP[0x95] = (fVar52 + fVar48) * 0.5;
          unaff_RBP[0x96] = (fVar53 + fVar49) * 0.5;
          unaff_RBP[0x97] = 3.4028235e+38;
          unaff_RBP[0x93] = 0.0;
          unaff_RBP[0x97] = 1.0;
          FUN_18063b470(unaff_RBP + 0xb8,unaff_RBP + 0x88);
          lVar23 = *(int64_t *)(unaff_RSI + 0xe0);
          unaff_RBP[0xf0] = unaff_RBP[0xb8];
          unaff_RBP[0xf1] = unaff_RBP[0xb9];
          unaff_RBP[0xf2] = unaff_RBP[0xba];
          unaff_RBP[0xf3] = unaff_RBP[0xbb];
          unaff_RBP[0xf4] = unaff_RBP[0x94];
          unaff_RBP[0xf5] = unaff_RBP[0x95];
          unaff_RBP[0xf6] = unaff_RBP[0x96];
          unaff_RBP[0xf7] = unaff_RBP[0x97];
          (*pcVar24)(plVar25,*(int32_t *)(lVar23 + lVar26 * 4),unaff_RBP + 0xf0);
          lVar26 = lVar26 + 1;
          fVar41 = unaff_RBP[0x20];
          fVar33 = unaff_RBP[0x21];
          fVar38 = unaff_RBP[0x22];
          fVar47 = unaff_RBP[0x23];
          lVar19 = lVar19 + 0x128;
          fVar34 = unaff_RBP[-0x1c];
          fVar35 = unaff_RBP[-0x1b];
          fVar39 = unaff_RBP[-0x1a];
          fVar46 = unaff_RBP[-0x19];
          unaff_XMM11_Da = 0.0;
        } while (lVar26 < iVar8);
        unaff_R14 = *(int64_t *)(unaff_RBP + -0x10);
      }
    }
    puVar21 = (uint *)((int64_t)*(char *)(*(int64_t *)(unaff_RBP + 0x3e) + 0xde) * 0x100 +
                      *(int64_t *)(unaff_R13 + 0x18));
    do {
      LOCK();
      uVar12 = *puVar21;
      *puVar21 = *puVar21 | 1;
      UNLOCK();
    } while ((uVar12 & 1) != 0);
    fVar41 = (float)puVar21[1];
    fVar33 = (float)puVar21[2];
    fVar38 = (float)puVar21[3];
    fVar47 = (float)puVar21[4];
    fVar34 = (float)puVar21[5];
    fVar35 = (float)puVar21[6];
    fVar39 = (float)puVar21[7];
    fVar46 = (float)puVar21[8];
    unaff_RBP[0x210] = fVar41;
    unaff_RBP[0x211] = fVar33;
    unaff_RBP[0x212] = fVar38;
    unaff_RBP[0x213] = fVar47;
    unaff_RBP[0x214] = fVar34;
    unaff_RBP[0x215] = fVar35;
    unaff_RBP[0x216] = fVar39;
    unaff_RBP[0x217] = fVar46;
    unaff_RBP[0x178] = fVar41;
    unaff_RBP[0x179] = fVar33;
    unaff_RBP[0x17a] = fVar38;
    unaff_RBP[0x17b] = fVar47;
    *puVar21 = 0;
    unaff_RBP[0x17c] = fVar34;
    unaff_RBP[0x17d] = fVar35;
    unaff_RBP[0x17e] = fVar39;
    unaff_RBP[0x17f] = fVar46;
    unaff_RBP[0x68] = fVar41;
    unaff_RBP[0x69] = fVar33;
    unaff_RBP[0x6a] = fVar38;
    unaff_RBP[0x6b] = fVar47;
    unaff_RBP[0x6c] = fVar34;
    unaff_RBP[0x6d] = fVar35;
    unaff_RBP[0x6e] = fVar39;
    unaff_RBP[0x6f] = fVar46;
    FUN_180300bf0(unaff_RBP + 0x68,unaff_RBP + 0x180,unaff_RSI + 0x1b0);
    FUN_180300bf0(unaff_RBP + 0x68,unaff_RBP + 0x78,unaff_RSI + 0x170);
    pfVar17 = (float *)FUN_180300bf0(unaff_RBP + 0x44,unaff_RBP + 0x1cc,unaff_RBP + 0x78);
    fVar41 = pfVar17[1];
    fVar33 = pfVar17[2];
    fVar38 = pfVar17[3];
    unaff_RBP[0x78] = *pfVar17;
    unaff_RBP[0x79] = fVar41;
    unaff_RBP[0x7a] = fVar33;
    unaff_RBP[0x7b] = fVar38;
    fVar41 = pfVar17[5];
    fVar33 = pfVar17[6];
    fVar38 = pfVar17[7];
    unaff_RBP[0x7c] = pfVar17[4];
    unaff_RBP[0x7d] = fVar41;
    unaff_RBP[0x7e] = fVar33;
    unaff_RBP[0x7f] = fVar38;
    FUN_180300bf0(unaff_RBP + 0x68,unaff_RBP + 0x80,unaff_RSI + 400);
    pfVar17 = (float *)FUN_180300bf0(unaff_RBP + 0x44,unaff_RBP + 0x1d4,unaff_RBP + 0x80);
    uVar28 = (uint64_t)*(int *)(unaff_RSI + 0x58);
    fVar41 = pfVar17[1];
    fVar33 = pfVar17[2];
    fVar38 = pfVar17[3];
    lVar22 = *(int64_t *)(unaff_RSI + 0x108);
    unaff_RBP[0x80] = *pfVar17;
    unaff_RBP[0x81] = fVar41;
    unaff_RBP[0x82] = fVar33;
    unaff_RBP[0x83] = fVar38;
    fVar41 = pfVar17[5];
    fVar33 = pfVar17[6];
    fVar38 = pfVar17[7];
    unaff_RBP[0x84] = pfVar17[4];
    unaff_RBP[0x85] = fVar41;
    unaff_RBP[0x86] = fVar33;
    unaff_RBP[0x87] = fVar38;
    FUN_180300bf0(unaff_RBP + 0x180,unaff_RBP + 0x70,uVar28 * 0x40 + lVar22);
    pfVar17 = (float *)FUN_180300bf0(unaff_RBP + 0x44,unaff_RBP + 0x1dc,unaff_RBP + 0x70);
    plVar25 = *(int64_t **)(unaff_RSI + 0xd8);
    fVar41 = pfVar17[1];
    fVar33 = pfVar17[2];
    fVar38 = pfVar17[3];
    unaff_RBP[0x70] = *pfVar17;
    unaff_RBP[0x71] = fVar41;
    unaff_RBP[0x72] = fVar33;
    unaff_RBP[0x73] = fVar38;
    fVar41 = pfVar17[5];
    fVar33 = pfVar17[6];
    fVar38 = pfVar17[7];
    unaff_RBP[0x74] = pfVar17[4];
    unaff_RBP[0x75] = fVar41;
    unaff_RBP[0x76] = fVar33;
    unaff_RBP[0x77] = fVar38;
    pcVar24 = *(code **)(*plVar25 + 0x20);
    puVar18 = (int32_t *)
              (**(code **)(*plVar25 + 0x10))(plVar25,unaff_RBP + 0x38,uVar28 & 0xffffffff);
    (*pcVar24)(plVar25,*puVar18,unaff_RBP + 0x70);
    plVar25 = *(int64_t **)(unaff_RSI + 0xd8);
    pcVar24 = *(code **)(*plVar25 + 0x20);
    puVar18 = (int32_t *)
              (**(code **)(*plVar25 + 0x10))
                        (plVar25,unaff_RBP + 0x39,*(int32_t *)(unaff_RSI + 0x5c));
    (*pcVar24)(plVar25,*puVar18,unaff_RBP + 0x78);
    plVar25 = *(int64_t **)(unaff_RSI + 0xd8);
    pcVar24 = *(code **)(*plVar25 + 0x20);
    puVar18 = (int32_t *)
              (**(code **)(*plVar25 + 0x10))
                        (plVar25,unaff_RBP + 0x3a,*(int32_t *)(unaff_RSI + 0x60));
    (*pcVar24)(plVar25,*puVar18,unaff_RBP + 0x80);
    fVar41 = unaff_RBP[-0x20];
    fVar33 = unaff_RBP[-0x1f];
    fVar38 = unaff_RBP[-0x1e];
    plVar25 = *(int64_t **)(unaff_RSI + 0xd8);
    uVar3 = *(int32_t *)(unaff_RSI + 0x68);
    in_stack_00000070 = 0x3f800000;
    in_stack_00000078 = 0;
    fVar47 = unaff_RBP[-0x13];
    unaff_RBP[-0x18] = 1.0;
    unaff_RBP[-0x17] = 0.0;
    unaff_RBP[-0x16] = 0.0;
    unaff_RBP[-0x15] = 0.0;
    fVar34 = unaff_RBP[-0x12];
    fVar35 = fVar41 * unaff_RBP[0x28] + fVar33 * unaff_RBP[0x2c] + fVar38 * unaff_RBP[0x30] +
             unaff_RBP[0x34];
    fVar39 = fVar41 * unaff_RBP[0x29] + fVar33 * unaff_RBP[0x2d] + fVar38 * unaff_RBP[0x31] +
             unaff_RBP[0x35];
    fVar46 = fVar41 * unaff_RBP[0x2a] + fVar33 * unaff_RBP[0x2e] + fVar38 * unaff_RBP[0x32] +
             unaff_RBP[0x36];
    fVar41 = fVar41 * unaff_RBP[0x2b] + fVar33 * unaff_RBP[0x2f] + fVar38 * unaff_RBP[0x33] +
             unaff_RBP[0x37];
    unaff_RBP[-0x20] = fVar35;
    unaff_RBP[-0x1f] = fVar39;
    unaff_RBP[-0x1e] = fVar46;
    unaff_RBP[-0x1d] = fVar41;
    unaff_RBP[0x140] = fVar35;
    unaff_RBP[0x141] = fVar39;
    unaff_RBP[0x142] = fVar46;
    unaff_RBP[0x143] = fVar41;
    fVar41 = unaff_RBP[-0x14];
    fVar33 = fVar41 * unaff_RBP[0x28] + fVar47 * unaff_RBP[0x2c] + fVar34 * unaff_RBP[0x30] +
             unaff_RBP[0x34];
    fVar38 = fVar41 * unaff_RBP[0x29] + fVar47 * unaff_RBP[0x2d] + fVar34 * unaff_RBP[0x31] +
             unaff_RBP[0x35];
    fVar35 = fVar41 * unaff_RBP[0x2a] + fVar47 * unaff_RBP[0x2e] + fVar34 * unaff_RBP[0x32] +
             unaff_RBP[0x36];
    fVar41 = fVar41 * unaff_RBP[0x2b] + fVar47 * unaff_RBP[0x2f] + fVar34 * unaff_RBP[0x33] +
             unaff_RBP[0x37];
    unaff_RBP[-0x14] = fVar33;
    unaff_RBP[-0x13] = fVar38;
    unaff_RBP[-0x12] = fVar35;
    unaff_RBP[-0x11] = fVar41;
    lVar22 = *plVar25;
    unaff_RBP[0x144] = fVar33;
    unaff_RBP[0x145] = fVar38;
    unaff_RBP[0x146] = fVar35;
    unaff_RBP[0x147] = fVar41;
    pcVar24 = *(code **)(lVar22 + 0x20);
    puVar18 = (int32_t *)(**(code **)(lVar22 + 0x10))(plVar25,unaff_RBP + 0x3b,uVar3);
    (*pcVar24)(plVar25,*puVar18,&stack0x00000070);
    plVar25 = *(int64_t **)(unaff_RSI + 0xd8);
    pcVar24 = *(code **)(*plVar25 + 0x20);
    puVar18 = (int32_t *)
              (**(code **)(*plVar25 + 0x10))
                        (plVar25,unaff_RBP + 0x3c,*(int32_t *)(unaff_RSI + 100));
    (*pcVar24)(plVar25,*puVar18,unaff_RBP + -0x18);
    (**(code **)(**(int64_t **)(unaff_RSI + 0xd8) + 0x60))
              (*(int64_t **)(unaff_RSI + 0xd8),*(int32_t *)(unaff_RSI + 0x1e0));
    lVar22 = system_main_module_state;
    cVar11 = '\0';
    *(int32_t *)(unaff_RSI + 0x1e0) = 0;
    *(int32_t *)(unaff_RSI + 0x1e4) = *(int32_t *)(lVar22 + 0x224);
    if ('\0' < *(char *)(unaff_R14 + 0x20)) {
      fVar41 = unaff_RBP[0x10];
      fVar33 = unaff_RBP[0x11];
      fVar38 = unaff_RBP[0x12];
      fVar47 = unaff_RBP[0x13];
      unaff_RBP[0x17] = 3.4028235e+38;
      unaff_RBP[0x1b] = 3.4028235e+38;
      do {
        plVar25 = *(int64_t **)(unaff_RSI + 0xd8);
        pcVar24 = *(code **)(*plVar25 + 0x28);
        puVar18 = (int32_t *)(**(code **)(*plVar25 + 0x10))(plVar25,unaff_RBP + 0x40,(int)cVar11)
        ;
        (*pcVar24)(plVar25,*puVar18,unaff_RBP + 0x60);
        unaff_RBP[0x14] = unaff_RBP[100] - unaff_RBP[0x34];
        unaff_RBP[0x15] = unaff_RBP[0x65] - unaff_RBP[0x35];
        unaff_RBP[0x16] = unaff_RBP[0x66] - unaff_RBP[0x36];
        FUN_180285b40(unaff_RBP + 0x44,unaff_RBP + 0xac,unaff_RBP + 0x14);
        fVar34 = unaff_RBP[0x60];
        fVar35 = unaff_RBP[0x61];
        fVar39 = unaff_RBP[0x62];
        fVar46 = unaff_RBP[99];
        lVar22 = *(int64_t *)(unaff_RSI + 0x108);
        fVar36 = unaff_RBP[0xac];
        fVar30 = unaff_RBP[0xad];
        fVar50 = unaff_RBP[0xae];
        lVar26 = (int64_t)cVar11;
        lVar19 = lVar26 * 0x40;
        unaff_RBP[0xfc] = fVar36;
        unaff_RBP[0xfd] = fVar30;
        unaff_RBP[0xfe] = fVar50;
        unaff_RBP[0xff] = unaff_RBP[0xaf];
        fVar32 = fVar46 * fVar38 * -1.0 + fVar34 * fVar33 * -1.0 + fVar39 * fVar47 + fVar35 * fVar41
        ;
        fVar37 = fVar35 * fVar47 * -1.0 + fVar34 * fVar38 * -1.0 + fVar46 * fVar33 + fVar39 * fVar41
        ;
        fVar40 = fVar39 * fVar33 * -1.0 + fVar34 * fVar47 * -1.0 + fVar35 * fVar38 + fVar46 * fVar41
        ;
        fVar48 = fVar46 * fVar47 * 1.0 + fVar34 * fVar41 * 1.0 + fVar35 * fVar33 + fVar39 * fVar38;
        unaff_RBP[0x148] = fVar48;
        unaff_RBP[0x149] = fVar32;
        unaff_RBP[0x14a] = fVar37;
        unaff_RBP[0x14b] = fVar40;
        unaff_RBP[0xf8] = fVar48;
        unaff_RBP[0xf9] = fVar32;
        unaff_RBP[0xfa] = fVar37;
        unaff_RBP[0xfb] = fVar40;
        pfVar16 = (float *)FUN_1801c0fb0(unaff_RBP + 0xf8,unaff_RBP + 0x128,lVar22 + 0x30 + lVar19);
        pfVar17 = (float *)(lVar19 + 0x20 + lVar22);
        fVar34 = *pfVar17;
        fVar35 = pfVar17[1];
        fVar39 = pfVar17[2];
        fVar46 = pfVar17[3];
        fVar36 = fVar36 + *pfVar16;
        fVar30 = fVar30 + pfVar16[1];
        fVar50 = fVar50 + pfVar16[2];
        puVar21 = (uint *)(lVar26 * 0x100 + *(int64_t *)(unaff_R14 + 0x18));
        fVar31 = unaff_RBP[0x1b];
        unaff_RBP[0x18] = fVar36;
        unaff_RBP[0x19] = fVar30;
        unaff_RBP[0x1a] = fVar50;
        unaff_RBP[0x1b] = fVar31;
        unaff_RBP[0xc0] = fVar36;
        unaff_RBP[0xc1] = fVar30;
        unaff_RBP[0xc2] = fVar50;
        unaff_RBP[0xc3] = fVar31;
        fVar36 = fVar37 * fVar46 * 1.0 + fVar48 * fVar35 * 1.0 + (fVar34 * fVar32 - fVar40 * fVar39)
        ;
        fVar30 = fVar40 * fVar35 * 1.0 + fVar48 * fVar39 * 1.0 + (fVar34 * fVar37 - fVar32 * fVar46)
        ;
        fVar50 = fVar32 * fVar39 * 1.0 + fVar48 * fVar46 * 1.0 + (fVar34 * fVar40 - fVar37 * fVar35)
        ;
        fVar34 = fVar40 * fVar46 * -1.0 + fVar37 * fVar39 * -1.0 +
                 (fVar34 * fVar48 - fVar32 * fVar35);
        unaff_RBP[0x150] = fVar34;
        unaff_RBP[0x151] = fVar36;
        unaff_RBP[0x152] = fVar30;
        unaff_RBP[0x153] = fVar50;
        unaff_RBP[0xbc] = fVar34;
        unaff_RBP[0xbd] = fVar36;
        unaff_RBP[0xbe] = fVar30;
        unaff_RBP[0xbf] = fVar50;
        do {
          LOCK();
          uVar12 = *puVar21;
          *puVar21 = *puVar21 | 1;
          UNLOCK();
        } while ((uVar12 & 1) != 0);
        fVar34 = unaff_RBP[0xbd];
        fVar35 = unaff_RBP[0xbe];
        fVar39 = unaff_RBP[0xbf];
        fVar46 = unaff_RBP[0xc0];
        fVar36 = unaff_RBP[0xc1];
        fVar30 = unaff_RBP[0xc2];
        fVar50 = unaff_RBP[0xc3];
        puVar21[1] = (uint)unaff_RBP[0xbc];
        puVar21[2] = (uint)fVar34;
        puVar21[3] = (uint)fVar35;
        puVar21[4] = (uint)fVar39;
        puVar21[5] = (uint)fVar46;
        puVar21[6] = (uint)fVar36;
        puVar21[7] = (uint)fVar30;
        puVar21[8] = (uint)fVar50;
        *puVar21 = 0;
        FUN_1802feba0(unaff_R14,
                      (int64_t)(uint64_t)(uint)((int)puVar21 - *(int *)(unaff_R14 + 0x18)) >> 8);
        cVar11 = cVar11 + '\x01';
      } while (cVar11 < *(char *)(unaff_R14 + 0x20));
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x230) ^ (uint64_t)&stack0x00000000);
}








