// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part242.c - 4 个函数
// 函数: void function_404a10(uint64_t param_1,uint64_t param_2,float param_3,int64_t param_4,
void function_404a10(uint64_t param_1,uint64_t param_2,float param_3,int64_t param_4,
                  int64_t param_5)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  byte bVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int8_t *puVar10;
  char *pcVar11;
  float *pfVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  byte bVar17;
  float extraout_XMM0_Da;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int8_t stack_array_d98 [32];
  float fStack_d78;
  float fStack_d74;
  float fStack_d70;
  float fStack_d6c;
  float fStack_d68;
  int64_t lStack_d60;
  int64_t lStack_d58;
  char cStack_d50;
  uint64_t local_var_d48;
  float fStack_d38;
  float fStack_d34;
  float fStack_d30;
  float fStack_d2c;
  float fStack_d28;
  float fStack_d24;
  float fStack_d20;
  float fStack_d1c;
  float fStack_d18;
  float fStack_d14;
  float fStack_d10;
  float fStack_d0c;
  float fStack_d08;
  float fStack_d04;
  float fStack_d00;
  float fStack_cfc;
  float afStack_cf8 [8];
  int8_t stack_array_cd8 [16];
  float afStack_cc8 [28];
  char acStack_c58 [2944];
  uint64_t local_var_d8;
  local_var_d48 = 0xfffffffffffffffe;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d98;
  puVar10 = stack_array_cd8;
  lVar13 = 0x40;
  fStack_d68 = param_3;
  do {
    SystemFunction_000180074f10(puVar10);
    puVar10 = puVar10 + 0x30;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  RenderingSystem_405240(&lStack_d60,param_1);
  bVar6 = function_483410(*(uint64_t *)(lStack_d60 + 0x38));
  bVar17 = bVar6 & 0xfc;
  fVar34 = param_3;
  if ('\0' < (char)bVar17) {
    pcVar11 = acStack_c58;
    uVar14 = (uint64_t)(byte)(((byte)(bVar17 - 1) >> 2) + 1);
    do {
      fVar34 = *(float *)(pcVar11 + 4);
      fVar32 = *(float *)(pcVar11 + -0x2c);
      fVar30 = *(float *)(pcVar11 + -0x5c);
      fVar28 = *(float *)(pcVar11 + 0x34);
      fVar43 = *(float *)(pcVar11 + 0x24) * *(float *)(pcVar11 + 0x14) +
               *(float *)(pcVar11 + 0x28) * *(float *)(pcVar11 + 0x18) +
               *(float *)(pcVar11 + 0x2c) * *(float *)(pcVar11 + 0x1c) +
               *(float *)(pcVar11 + 0x20) * *(float *)(pcVar11 + 0x10);
      fVar44 = *(float *)(pcVar11 + -0x6c) * *(float *)(pcVar11 + -0x7c) +
               *(float *)(pcVar11 + -0x68) * *(float *)(pcVar11 + -0x78) +
               *(float *)(pcVar11 + -100) * *(float *)(pcVar11 + -0x74) +
               *(float *)(pcVar11 + -0x70) * *(float *)(pcVar11 + -0x80);
      fVar45 = *(float *)(pcVar11 + -0x3c) * *(float *)(pcVar11 + -0x4c) +
               *(float *)(pcVar11 + -0x38) * *(float *)(pcVar11 + -0x48) +
               *(float *)(pcVar11 + -0x34) * *(float *)(pcVar11 + -0x44) +
               *(float *)(pcVar11 + -0x40) * *(float *)(pcVar11 + -0x50);
      fVar46 = *(float *)(pcVar11 + -0xc) * *(float *)(pcVar11 + -0x1c) +
               *(float *)(pcVar11 + -8) * *(float *)(pcVar11 + -0x18) +
               *(float *)(pcVar11 + -0xc) * *(float *)(pcVar11 + -0x14) +
               *(float *)(pcVar11 + -0x10) * *(float *)(pcVar11 + -0x20);
      fVar23 = ABS(fVar43);
      fVar24 = ABS(fVar44);
      fVar25 = ABS(fVar45);
      fVar26 = ABS(fVar46);
      fVar27 = fVar28 - 0.5;
      fVar29 = fVar30 - 0.5;
      fVar31 = fVar32 - 0.5;
      fVar33 = fVar34 - 0.5;
      fVar28 = fVar27 * fVar28 *
               (fVar28 - 1.0) *
               (fVar27 * fVar27 *
                (((fVar23 * -1.43519 + 3.55645) * fVar23 + -3.2452) * fVar23 + 1.0904) +
               (fVar23 * 0.215638 + -1.06021) * fVar23 + 0.848013) + fVar28;
      fVar30 = fVar29 * fVar30 *
               (fVar30 - 1.0) *
               (fVar29 * fVar29 *
                (((fVar24 * -1.43519 + 3.55645) * fVar24 + -3.2452) * fVar24 + 1.0904) +
               (fVar24 * 0.215638 + -1.06021) * fVar24 + 0.848013) + fVar30;
      fVar32 = fVar31 * fVar32 *
               (fVar32 - 1.0) *
               (fVar31 * fVar31 *
                (((fVar25 * -1.43519 + 3.55645) * fVar25 + -3.2452) * fVar25 + 1.0904) +
               (fVar25 * 0.215638 + -1.06021) * fVar25 + 0.848013) + fVar32;
      fVar34 = fVar33 * fVar34 *
               (fVar34 - 1.0) *
               (fVar33 * fVar33 *
                (((fVar26 * -1.43519 + 3.55645) * fVar26 + -3.2452) * fVar26 + 1.0904) +
               (fVar26 * 0.215638 + -1.06021) * fVar26 + 0.848013) + fVar34;
      fVar39 = 1.0 - fVar28;
      fVar40 = 1.0 - fVar30;
      fVar41 = 1.0 - fVar32;
      fVar42 = 1.0 - fVar34;
      fVar28 = (float)((uint)fVar43 & 0x80000000 ^ (uint)fVar28);
      fVar30 = (float)((uint)fVar44 & 0x80000000 ^ (uint)fVar30);
      fVar32 = (float)((uint)fVar45 & 0x80000000 ^ (uint)fVar32);
      fVar34 = (float)((uint)fVar46 & 0x80000000 ^ (uint)fVar34);
      fVar43 = fVar39 * *(float *)(pcVar11 + 0x14) + fVar28 * *(float *)(pcVar11 + 0x24);
      fVar44 = fVar40 * *(float *)(pcVar11 + -0x7c) + fVar30 * *(float *)(pcVar11 + -0x6c);
      fVar45 = fVar41 * *(float *)(pcVar11 + -0x4c) + fVar32 * *(float *)(pcVar11 + -0x3c);
      fVar46 = fVar42 * *(float *)(pcVar11 + -0x1c) + fVar34 * *(float *)(pcVar11 + -0xc);
      fVar27 = fVar39 * *(float *)(pcVar11 + 0x18) + fVar28 * *(float *)(pcVar11 + 0x28);
      fVar29 = fVar40 * *(float *)(pcVar11 + -0x78) + fVar30 * *(float *)(pcVar11 + -0x68);
      fVar31 = fVar41 * *(float *)(pcVar11 + -0x48) + fVar32 * *(float *)(pcVar11 + -0x38);
      fVar33 = fVar42 * *(float *)(pcVar11 + -0x18) + fVar34 * *(float *)(pcVar11 + -8);
      fVar23 = fVar39 * *(float *)(pcVar11 + 0x1c) + fVar28 * *(float *)(pcVar11 + 0x2c);
      fVar24 = fVar40 * *(float *)(pcVar11 + -0x74) + fVar30 * *(float *)(pcVar11 + -100);
      fVar25 = fVar41 * *(float *)(pcVar11 + -0x44) + fVar32 * *(float *)(pcVar11 + -0x34);
      fVar26 = fVar42 * *(float *)(pcVar11 + -0x14) + fVar34 * *(float *)(pcVar11 + -0xc);
      fVar39 = fVar39 * *(float *)(pcVar11 + 0x10) + fVar28 * *(float *)(pcVar11 + 0x20);
      fVar40 = fVar40 * *(float *)(pcVar11 + -0x80) + fVar30 * *(float *)(pcVar11 + -0x70);
      fVar41 = fVar41 * *(float *)(pcVar11 + -0x50) + fVar32 * *(float *)(pcVar11 + -0x40);
      fVar42 = fVar42 * *(float *)(pcVar11 + -0x20) + fVar34 * *(float *)(pcVar11 + -0x10);
      auVar22._0_4_ = fVar23 * fVar23 + fVar39 * fVar39;
      auVar22._4_4_ = fVar24 * fVar24 + fVar40 * fVar40;
      auVar22._8_4_ = fVar25 * fVar25 + fVar41 * fVar41;
      auVar22._12_4_ = fVar26 * fVar26 + fVar42 * fVar42;
      auVar21._0_4_ = fVar43 * fVar43 + fVar27 * fVar27 + auVar22._0_4_;
      auVar21._4_4_ = fVar44 * fVar44 + fVar29 * fVar29 + auVar22._4_4_;
      auVar21._8_4_ = fVar45 * fVar45 + fVar31 * fVar31 + auVar22._8_4_;
      auVar21._12_4_ = fVar46 * fVar46 + fVar33 * fVar33 + auVar22._12_4_;
      auVar22 = rsqrtps(auVar22,auVar21);
      fVar34 = auVar22._0_4_;
      fVar32 = auVar22._4_4_;
      fVar30 = auVar22._8_4_;
      fVar28 = auVar22._12_4_;
      fVar34 = fVar34 * 0.5 * (3.0 - fVar34 * fVar34 * auVar21._0_4_);
      fVar32 = fVar32 * 0.5 * (3.0 - fVar32 * fVar32 * auVar21._4_4_);
      fVar30 = fVar30 * 0.5 * (3.0 - fVar30 * fVar30 * auVar21._8_4_);
      fVar28 = fVar28 * 0.5 * (3.0 - fVar28 * fVar28 * auVar21._12_4_);
      uVar8 = (uint64_t)pcVar11[-0x60];
      pfVar12 = (float *)(param_4 + (uVar8 + 0x82) * 0x10);
      uVar9 = (uint64_t)pcVar11[-0x30];
      pfVar1 = (float *)(param_4 + (uVar9 + 0x82) * 0x10);
      uVar15 = (uint64_t)*pcVar11;
      pfVar2 = (float *)(param_4 + (uVar15 + 0x82) * 0x10);
      uVar16 = (uint64_t)pcVar11[0x30];
      pfVar3 = (float *)(param_4 + (uVar16 + 0x82) * 0x10);
      uVar35 = (uint)(pfVar3[1] * fVar34 * fVar43 + pfVar3[2] * fVar34 * fVar27 +
                     pfVar3[3] * fVar34 * fVar23 + *pfVar3 * fVar34 * fVar39) & 0x80000000;
      uVar36 = (uint)(pfVar12[1] * fVar32 * fVar44 + pfVar12[2] * fVar32 * fVar29 +
                     pfVar12[3] * fVar32 * fVar24 + *pfVar12 * fVar32 * fVar40) & 0x80000000;
      uVar37 = (uint)(pfVar1[1] * fVar30 * fVar45 + pfVar1[2] * fVar30 * fVar31 +
                     pfVar1[3] * fVar30 * fVar25 + *pfVar1 * fVar30 * fVar41) & 0x80000000;
      uVar38 = (uint)(pfVar2[1] * fVar28 * fVar46 + pfVar2[2] * fVar28 * fVar33 +
                     pfVar2[3] * fVar28 * fVar26 + *pfVar2 * fVar28 * fVar42) & 0x80000000;
      fStack_d04 = param_3 * (float)(uVar35 ^ (uint)(fVar34 * fVar43)) + pfVar3[1];
      fStack_d34 = param_3 * (float)(uVar36 ^ (uint)(fVar32 * fVar44)) + pfVar12[1];
      fStack_d24 = param_3 * (float)(uVar37 ^ (uint)(fVar30 * fVar45)) + pfVar1[1];
      fStack_d14 = param_3 * (float)(uVar38 ^ (uint)(fVar28 * fVar46)) + pfVar2[1];
      fStack_d00 = param_3 * (float)(uVar35 ^ (uint)(fVar34 * fVar27)) + pfVar3[2];
      fStack_d30 = param_3 * (float)(uVar36 ^ (uint)(fVar32 * fVar29)) + pfVar12[2];
      fStack_d20 = param_3 * (float)(uVar37 ^ (uint)(fVar30 * fVar31)) + pfVar1[2];
      fStack_d10 = param_3 * (float)(uVar38 ^ (uint)(fVar28 * fVar33)) + pfVar2[2];
      fStack_cfc = param_3 * (float)(uVar35 ^ (uint)(fVar34 * fVar23)) + pfVar3[3];
      fStack_d2c = param_3 * (float)(uVar36 ^ (uint)(fVar32 * fVar24)) + pfVar12[3];
      fStack_d1c = param_3 * (float)(uVar37 ^ (uint)(fVar30 * fVar25)) + pfVar1[3];
      fStack_d0c = param_3 * (float)(uVar38 ^ (uint)(fVar28 * fVar26)) + pfVar2[3];
      fStack_d08 = param_3 * (float)(uVar35 ^ (uint)(fVar34 * fVar39)) + *pfVar3;
      fStack_d38 = param_3 * (float)(uVar36 ^ (uint)(fVar32 * fVar40)) + *pfVar12;
      fStack_d28 = param_3 * (float)(uVar37 ^ (uint)(fVar30 * fVar41)) + *pfVar1;
      fStack_d18 = param_3 * (float)(uVar38 ^ (uint)(fVar28 * fVar42)) + *pfVar2;
      pfVar12 = (float *)(param_4 + (uVar8 + 0x82) * 0x10);
      *pfVar12 = fStack_d38;
      pfVar12[1] = fStack_d34;
      pfVar12[2] = fStack_d30;
      pfVar12[3] = fStack_d2c;
      *(uint64_t *)(param_4 + 0x800) =
           *(uint64_t *)(param_4 + 0x800) |
           *(uint64_t *)(uVar8 * 0x1b0 + *(int64_t *)(param_5 + 0x140) + 0xe8);
      *(uint64_t *)(param_4 + 0x808) = *(uint64_t *)(param_4 + 0x808) | 1L << (uVar8 & 0x3f);
      pfVar12 = (float *)(param_4 + (uVar9 + 0x82) * 0x10);
      *pfVar12 = fStack_d28;
      pfVar12[1] = fStack_d24;
      pfVar12[2] = fStack_d20;
      pfVar12[3] = fStack_d1c;
      *(uint64_t *)(param_4 + 0x800) =
           *(uint64_t *)(param_4 + 0x800) |
           *(uint64_t *)(uVar9 * 0x1b0 + *(int64_t *)(param_5 + 0x140) + 0xe8);
      *(uint64_t *)(param_4 + 0x808) = *(uint64_t *)(param_4 + 0x808) | 1L << (uVar9 & 0x3f);
      pfVar12 = (float *)(param_4 + (uVar15 + 0x82) * 0x10);
      *pfVar12 = fStack_d18;
      pfVar12[1] = fStack_d14;
      pfVar12[2] = fStack_d10;
      pfVar12[3] = fStack_d0c;
      *(uint64_t *)(param_4 + 0x800) =
           *(uint64_t *)(param_4 + 0x800) |
           *(uint64_t *)(uVar15 * 0x1b0 + *(int64_t *)(param_5 + 0x140) + 0xe8);
      *(uint64_t *)(param_4 + 0x808) = *(uint64_t *)(param_4 + 0x808) | 1L << (uVar15 & 0x3f);
      pfVar12 = (float *)(param_4 + (uVar16 + 0x82) * 0x10);
      *pfVar12 = fStack_d08;
      pfVar12[1] = fStack_d04;
      pfVar12[2] = fStack_d00;
      pfVar12[3] = fStack_cfc;
      *(uint64_t *)(param_4 + 0x800) =
           *(uint64_t *)(param_4 + 0x800) |
           *(uint64_t *)(uVar16 * 0x1b0 + *(int64_t *)(param_5 + 0x140) + 0xe8);
      *(uint64_t *)(param_4 + 0x808) = *(uint64_t *)(param_4 + 0x808) | 1L << (uVar16 & 0x3f);
      pcVar11 = pcVar11 + 0xc0;
      uVar14 = uVar14 - 1;
      fVar34 = fStack_d68;
      fStack_d78 = param_3;
      fStack_d74 = param_3;
      fStack_d70 = param_3;
      fStack_d6c = param_3;
    } while (uVar14 != 0);
  }
  if ((char)bVar17 < (char)bVar6) {
    uVar14 = (uint64_t)(char)bVar17;
    pfVar12 = afStack_cc8 + uVar14 * 0xc;
    uVar8 = (uint64_t)(byte)(bVar6 - bVar17);
    do {
      iVar7 = (int)uVar14;
      fVar32 = pfVar12[5];
      if (0.001 <= fVar32) {
        if (fVar32 <= 0.999) {
          fVar30 = pfVar12[-4];
          fVar28 = pfVar12[-3];
          fVar23 = pfVar12[-2];
          fVar24 = pfVar12[-1];
          fVar25 = fVar23 * pfVar12[2];
          fVar26 = fVar24 * pfVar12[3];
          auVar18._0_4_ = fVar25 + fVar30 * *pfVar12;
          auVar18._4_4_ = fVar26 + fVar28 * pfVar12[1];
          auVar18._8_4_ = fVar25 + fVar25;
          auVar18._12_4_ = fVar26 + fVar26;
          auVar19._4_12_ = auVar18._4_12_;
          auVar19._0_4_ = auVar18._0_4_ + auVar18._4_4_;
          afStack_cf8[0] = 1.0;
          afStack_cf8[1] = 1.0;
          afStack_cf8[2] = 1.0;
          afStack_cf8[3] = 1.0;
          afStack_cf8[4] = -1.0;
          afStack_cf8[5] = -1.0;
          afStack_cf8[6] = -1.0;
          afStack_cf8[7] = -1.0;
          uVar35 = movmskps(iVar7,auVar19);
          uVar14 = (uint64_t)(uVar35 & 1);
          iVar7 = (uVar35 & 1) * 2;
          fVar25 = afStack_cf8[uVar14 * 4];
          fVar26 = afStack_cf8[uVar14 * 4 + 1];
          fVar27 = afStack_cf8[uVar14 * 4 + 2];
          fVar29 = afStack_cf8[uVar14 * 4 + 3];
          fVar31 = *pfVar12;
          fVar33 = pfVar12[1];
          fVar43 = pfVar12[2];
          fVar44 = pfVar12[3];
          if (0.9995 < ABS(auVar19._0_4_)) {
            fVar45 = 1.0 - fVar32;
            fStack_d78 = fVar32 * fVar25 * fVar31 + fVar45 * fVar30;
            fStack_d74 = fVar32 * fVar26 * fVar33 + fVar45 * fVar28;
            fStack_d70 = fVar32 * fVar27 * fVar43 + fVar45 * fVar23;
            fStack_d6c = fVar32 * fVar29 * fVar44 + fVar45 * fVar24;
            auVar20._0_4_ = fStack_d6c * fStack_d6c + fStack_d78 * fStack_d78;
            auVar20._4_4_ = fStack_d70 * fStack_d70 + fStack_d74 * fStack_d74;
            auVar20._8_4_ = fStack_d74 * fStack_d74 + fStack_d70 * fStack_d70;
            auVar20._12_4_ = fStack_d78 * fStack_d78 + fStack_d6c * fStack_d6c;
            auVar5._4_4_ = auVar20._0_4_ + auVar20._4_4_ + 1.1754944e-38;
            auVar5._0_4_ = auVar20._4_4_ + auVar20._0_4_ + 1.1754944e-38;
            auVar5._8_4_ = auVar20._0_4_ + auVar20._8_4_ + 1.1754944e-38;
            auVar5._12_4_ = auVar20._4_4_ + auVar20._12_4_ + 1.1754944e-38;
            auVar21 = rsqrtps(auVar20,auVar5);
            fVar32 = auVar21._0_4_;
            fVar30 = auVar21._4_4_;
            fVar28 = auVar21._8_4_;
            fVar23 = auVar21._12_4_;
            fStack_d78 = fStack_d78 *
                         (3.0 - fVar32 * fVar32 * (auVar20._4_4_ + auVar20._0_4_)) * fVar32 * 0.5;
            fStack_d74 = fStack_d74 *
                         (3.0 - fVar30 * fVar30 * (auVar20._0_4_ + auVar20._4_4_)) * fVar30 * 0.5;
            fStack_d70 = fStack_d70 *
                         (3.0 - fVar28 * fVar28 * (auVar20._0_4_ + auVar20._8_4_)) * fVar28 * 0.5;
            fStack_d6c = fStack_d6c *
                         (3.0 - fVar23 * fVar23 * (auVar20._4_4_ + auVar20._12_4_)) * fVar23 * 0.5;
          }
          else {
            fVar45 = (float)acosf();
            fVar46 = (float)sinf();
            fVar39 = (float)sinf(fVar45 - fVar45 * fVar32);
            fVar39 = fVar39 * (1.0 / fVar46);
            iVar7 = sinf(fVar45 * fVar32);
            fVar32 = extraout_XMM0_Da * (1.0 / fVar46);
            fStack_d78 = fVar32 * fVar25 * fVar31 + fVar39 * fVar30;
            fStack_d74 = fVar32 * fVar26 * fVar33 + fVar39 * fVar28;
            fStack_d70 = fVar32 * fVar27 * fVar43 + fVar39 * fVar23;
            fStack_d6c = fVar32 * fVar29 * fVar44 + fVar39 * fVar24;
          }
        }
        else {
          fStack_d78 = *pfVar12;
          fStack_d74 = pfVar12[1];
          fStack_d70 = pfVar12[2];
          fStack_d6c = pfVar12[3];
        }
      }
      else {
        fStack_d78 = pfVar12[-4];
        fStack_d74 = pfVar12[-3];
        fStack_d70 = pfVar12[-2];
        fStack_d6c = pfVar12[-1];
      }
      uVar14 = (uint64_t)*(char *)(pfVar12 + 4);
      pfVar1 = (float *)(param_4 + (uVar14 + 0x82) * 0x10);
      fVar32 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar28 = pfVar1[3];
      fVar23 = *pfVar1 * fStack_d78;
      fVar24 = fVar32 * fStack_d74;
      fVar25 = fVar30 * fStack_d70;
      fVar26 = fVar28 * fStack_d6c;
      fVar27 = fVar26 + fVar23;
      fVar29 = fVar25 + fVar24;
      auVar4._4_4_ = fVar27 + fVar29;
      auVar4._0_4_ = fVar29 + fVar27;
      auVar4._8_4_ = fVar27 + fVar24 + fVar25;
      auVar4._12_4_ = fVar29 + fVar23 + fVar26;
      iVar7 = movmskps(iVar7,auVar4);
      if (iVar7 != 0) {
        fStack_d78 = -fStack_d78;
        fStack_d74 = -fStack_d74;
        fStack_d70 = -fStack_d70;
        fStack_d6c = -fStack_d6c;
      }
      fStack_d78 = fVar34 * fStack_d78;
      fStack_d74 = fVar34 * fStack_d74;
      fStack_d70 = fVar34 * fStack_d70;
      fStack_d6c = fVar34 * fStack_d6c;
      pfVar2 = (float *)(param_4 + (uVar14 + 0x82) * 0x10);
      *pfVar2 = *pfVar1 + fStack_d78;
      pfVar2[1] = fVar32 + fStack_d74;
      pfVar2[2] = fVar30 + fStack_d70;
      pfVar2[3] = fVar28 + fStack_d6c;
      *(uint64_t *)(param_4 + 0x800) =
           *(uint64_t *)(param_4 + 0x800) |
           *(uint64_t *)(uVar14 * 0x1b0 + *(int64_t *)(param_5 + 0x140) + 0xe8);
      uVar14 = *(uint64_t *)(param_4 + 0x808) | 1L << (uVar14 & 0x3f);
      *(uint64_t *)(param_4 + 0x808) = uVar14;
      pfVar12 = pfVar12 + 0xc;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((cStack_d50 == '\0') && (*(char *)(lStack_d58 + 0x194) != '\0')) {
    LOCK();
    *(int *)(lStack_d58 + 0xd8) = *(int *)(lStack_d58 + 0xd8) + -1;
    UNLOCK();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_d98);
}
int64_t * RenderingSystem_405240(int64_t *param_1,int64_t param_2,float param_3,char param_4)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t in_R8;
  bool bVar4;
  uint64_t stack_special_x_8;
  int64_t lStack_50;
  char cStack_48;
  *(char *)(param_1 + 2) = param_4;
  param_1[1] = param_2;
  if (param_4 != '\0') {
    if (*(char *)(param_2 + 0x194) == '\x01') {
      *param_1 = *(int64_t *)(param_2 + 0x90);
      return param_1;
    }
    *param_1 = *(int64_t *)(param_2 + 0x88);
    return param_1;
  }
  cVar1 = *(char *)(param_2 + 0x194);
  if (cVar1 == '\0') {
    lVar3 = *(int64_t *)(param_2 + 0x88);
  }
  else {
    function_404350(param_2,param_2,in_R8,0,0xfffffffffffffffe);
    do {
      do {
        iVar2 = *(int *)(param_2 + 0xd8);
      } while (iVar2 == -1);
      LOCK();
      bVar4 = iVar2 == *(int *)(param_2 + 0xd8);
      if (bVar4) {
        *(int *)(param_2 + 0xd8) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar4);
    if (*(char *)(param_2 + 0xdc) == '\0') {
      LOCK();
      bVar4 = *(int *)(param_2 + 0xe0) == 0;
      if (bVar4) {
        *(int *)(param_2 + 0xe0) = 1;
      }
      UNLOCK();
      if (bVar4) {
        function_4055a0(param_2 + 0x98);
      }
      if ((cVar1 != '\x02') &&
         (lVar3 = *(int64_t *)(param_2 + 0x90), param_3 < (float)*(int *)(lVar3 + 0x50)))
      goto LAB_1804053d3;
      do {
        cStack_48 = 0;
        lStack_50 = param_2 + 0x130;
        iVar2 = _Mtx_lock(param_2 + 0x130);
        if (iVar2 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
        cStack_48 = '\x01';
        if (*(char *)(param_2 + 0x180) == '\x01') {
          iVar2 = _Mtx_unlock(lStack_50);
          if (iVar2 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar2);
          }
          break;
        }
        stack_special_x_8 = 1;
        function_0495d0(param_2 + 0xe8,&lStack_50,&stack_special_x_8);
        cVar1 = *(char *)(param_2 + 0x180);
        if ((cStack_48 != '\0') && (iVar2 = _Mtx_unlock(lStack_50), iVar2 != 0)) {
          __Throw_C_error_std__YAXH_Z(iVar2);
        }
      } while (cVar1 == '\0');
    }
    lVar3 = *(int64_t *)(param_2 + 0x88);
  }
LAB_1804053d3:
  *param_1 = lVar3;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_405430(int64_t *param_1,int64_t param_2)
void function_405430(int64_t *param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int8_t stack_array_c8 [32];
  uint64_t local_var_a8;
  int64_t alStack_98 [7];
  int64_t *plStack_60;
  int64_t alStack_58 [7];
  int64_t *plStack_20;
  uint64_t local_var_18;
  local_var_a8 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  plStack_60 = (int64_t *)0x0;
  puVar1 = *(uint64_t **)(param_2 + 0x38);
  if (puVar1 != (uint64_t *)0x0) {
    plStack_60 = (int64_t *)(**(code **)*puVar1)(puVar1,alStack_98);
  }
  if ((plStack_60 != alStack_98) && (plVar2 = (int64_t *)param_1[7], plVar2 != param_1)) {
    param_1[7] = (int64_t)plStack_60;
    plStack_60 = plVar2;
    goto LAB_180405551;
  }
  plStack_20 = (int64_t *)0x0;
  if (plStack_60 != (int64_t *)0x0) {
    if (plStack_60 == alStack_98) {
      plStack_20 = (int64_t *)(**(code **)(*plStack_60 + 8))(plStack_60,alStack_58);
      if (plStack_60 == (int64_t *)0x0) goto LAB_1804054e6;
      (**(code **)(*plStack_60 + 0x20))
                (plStack_60,CONCAT71((int7)((uint64_t)alStack_98 >> 8),plStack_60 != alStack_98));
    }
    else {
      plStack_20 = plStack_60;
    }
    plStack_60 = (int64_t *)0x0;
  }
LAB_1804054e6:
  function_1881a0(alStack_98,param_1);
  if (plStack_20 != (int64_t *)0x0) {
    if (plStack_20 == alStack_58) {
      lVar3 = (**(code **)(*plStack_20 + 8))(plStack_20,param_1);
      param_1[7] = lVar3;
      if (plStack_20 == (int64_t *)0x0) goto LAB_180405534;
      (**(code **)(*plStack_20 + 0x20))
                (plStack_20,CONCAT71((int7)((uint64_t)alStack_58 >> 8),plStack_20 != alStack_58));
    }
    else {
      param_1[7] = (int64_t)plStack_20;
    }
    plStack_20 = (int64_t *)0x0;
  }
LAB_180405534:
  if (plStack_20 != (int64_t *)0x0) {
    (**(code **)(*plStack_20 + 0x20))
              (plStack_20,CONCAT71((int7)((uint64_t)alStack_58 >> 8),plStack_20 != alStack_58));
    plStack_20 = (int64_t *)0x0;
  }
LAB_180405551:
  if (plStack_60 != (int64_t *)0x0) {
    (**(code **)(*plStack_60 + 0x20))(plStack_60,plStack_60 != alStack_98);
    plStack_60 = (int64_t *)0x0;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_c8);
}
// 函数: void function_4055a0(int64_t param_1)
void function_4055a0(int64_t param_1)
{
  uint64_t *puVar1;
  code *pcVar2;
  puVar1 = *(uint64_t **)(param_1 + 0x38);
  if (puVar1 == (uint64_t *)0x0) {
    __Xbad_function_call_std__YAXXZ();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((void *)*puVar1 == &processed_var_9568_ptr) {
// WARNING: Could not recover jumptable at 0x0001804055cb. Too many branches
// WARNING: Treating indirect jump as call
    (*(code *)puVar1[1])(puVar1[2]);
    return;
  }
  (**(code **)((void *)*puVar1 + 0x10))(puVar1);
  return;
}
// 函数: void function_4055e0(int64_t param_1)
void function_4055e0(int64_t param_1)
{
  int64_t lVar1;
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(int64_t *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(int64_t *)(lVar1 + 0x18) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar1 + 0x18) = 0;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  *(uint64_t *)(param_1 + 0x38) = 0;
  if (*(int64_t *)(param_1 + 0x20) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  function_4066f0(param_1);
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1);
}
uint64_t * function_405670(int64_t *param_1,uint64_t *param_2,float param_3)
{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  float fVar9;
  uint64_t uVar10;
  float fVar11;
  int aiStackX_18 [2];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  bVar1 = *(byte *)((int64_t)param_1 + 0x12);
  aiStackX_18[0] =
       ((uint)bVar1 + (uint)bVar1 * 2 + (uint)*(byte *)((int64_t)param_1 + 0x13)) *
       (*(ushort *)(param_1 + 2) - 1);
  function_406120(param_1,*param_1,aiStackX_18,&fStack_38,bVar1);
  uVar4 = aiStackX_18[0] >> 0x1f & 0xf;
  aiStackX_18[0] = aiStackX_18[0] + uVar4;
  fVar11 = (float)(ushort)((ushort)(*(uint *)(*param_1 + (int64_t)(aiStackX_18[0] >> 4) * 2) >>
                                   (((byte)aiStackX_18[0] & 0xf) - (char)uVar4 & 0x1f)) &
                          (1 << (*(byte *)((int64_t)param_1 + 0x13) & 0x1f)) - 1U);
  if (param_3 < fVar11) {
    iVar6 = 0;
    aiStackX_18[0] = 0;
    function_406120(param_1,*param_1,aiStackX_18,&fStack_38,*(int8_t *)((int64_t)param_1 + 0x12))
    ;
    lVar8 = *param_1;
    bVar1 = *(byte *)((int64_t)param_1 + 0x13);
    uVar4 = aiStackX_18[0] >> 0x1f & 0xf;
    iVar2 = aiStackX_18[0] + uVar4;
    fVar9 = (float)(ushort)((ushort)(*(uint *)(lVar8 + (int64_t)(iVar2 >> 4) * 2) >>
                                    (((byte)iVar2 & 0xf) - (char)uVar4 & 0x1f)) &
                           (1 << (bVar1 & 0x1f)) - 1U);
    if (fVar9 <= param_3) {
      if (((int)fVar9 == 0) && ((int)fVar11 == *(ushort *)(param_1 + 2) - 1)) {
        function_405fc0(param_1,(int)param_3,&fStack_48,&fStack_38);
        param_3 = param_3 - fStack_3c;
        fStack_48 = (fStack_38 - fStack_48) * param_3 + fStack_48;
        fStack_44 = (fStack_34 - fStack_44) * param_3 + fStack_44;
        fStack_30 = (fStack_30 - fStack_40) * param_3 + fStack_40;
      }
      else {
        iVar2 = *(ushort *)(param_1 + 2) - 1;
        if (0 < (int)(*(ushort *)(param_1 + 2) - 2)) {
          do {
            bVar3 = *(byte *)((int64_t)param_1 + 0x12);
            iVar5 = iVar2 + iVar6 >> 1;
            aiStackX_18[0] = ((uint)bVar1 + (uint)bVar3 * 2 + (uint)bVar3) * iVar5;
            function_406120(param_1,lVar8,aiStackX_18,&fStack_38,(uint)bVar3);
            bVar3 = (byte)aiStackX_18[0] & 0xf;
            iVar7 = aiStackX_18[0];
            if (aiStackX_18[0] < 0) {
              iVar7 = aiStackX_18[0] + 0xf;
              bVar3 = bVar3 - 0x10;
            }
            lVar8 = *param_1;
            bVar1 = *(byte *)((int64_t)param_1 + 0x13);
            if ((float)(ushort)((ushort)(*(uint *)(lVar8 + (int64_t)(iVar7 >> 4) * 2) >>
                                        (bVar3 & 0x1f)) & (1 << (bVar1 & 0x1f)) - 1U) <= param_3) {
              iVar6 = iVar5;
              iVar5 = iVar2;
            }
            iVar2 = iVar5;
          } while (iVar6 < iVar2 + -1);
        }
        function_405fc0(param_1,iVar6,&fStack_38,&fStack_48);
        fVar11 = (param_3 - fStack_2c) / (fStack_3c - fStack_2c);
        fStack_44 = (fStack_44 - fStack_34) * fVar11 + fStack_34;
        fStack_30 = (fStack_40 - fStack_30) * fVar11 + fStack_30;
        fStack_48 = (fStack_48 - fStack_38) * fVar11 + fStack_38;
      }
      uVar10 = CONCAT44(fStack_44,fStack_48);
    }
    else {
      uVar10 = CONCAT44(fStack_34,fStack_38);
    }
  }
  else {
    uVar10 = CONCAT44(fStack_34,fStack_38);
  }
  *param_2 = uVar10;
  *(float *)(param_2 + 1) = fStack_30;
  return param_2;
}