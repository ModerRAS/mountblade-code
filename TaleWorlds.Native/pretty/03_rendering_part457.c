#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part457.c - 2 个函数

// 函数: void FUN_180514200(int64_t param_1,ushort param_2,float *param_3,uint64_t param_4,int param_5,
void FUN_180514200(int64_t param_1,ushort param_2,float *param_3,uint64_t param_4,int param_5,
                  char param_6,float param_7)

{
  int32_t *puVar1;
  uint uVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  float *pfVar8;
  uint *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int32_t uVar24;
  int8_t auStack_2b8 [32];
  int32_t uStack_298;
  int8_t uStack_290;
  int8_t uStack_288;
  uint64_t uStack_280;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  int32_t uStack_268;
  int32_t uStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  int32_t uStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  int32_t uStack_234;
  uint64_t uStack_230;
  uint64_t uStack_228;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  int32_t uStack_208;
  int32_t uStack_204;
  int32_t uStack_200;
  int32_t uStack_1fc;
  int8_t auStack_1f8 [16];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  uint uStack_1dc;
  int32_t uStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  int8_t auStack_198 [16];
  int8_t auStack_188 [16];
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [16];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint64_t uStack_d8;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2b8;
  if ((*(ushort *)(*(int64_t *)(param_1 + 0x728) + 0x5aa) & 0x7fc) == 0) {
    lVar4 = *(int64_t *)(param_1 + 0x8d8);
    lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
    *(int *)(*(int64_t *)(param_1 + 0x728) + 0x5a4) = param_5;
    *(char *)(*(int64_t *)(param_1 + 0x728) + 0x5a8) = param_6;
    lVar11 = (int64_t)param_5 * 0xa60;
    lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260);
    if ((*(byte *)(lVar5 + 0xa8) & 1) == 0) {
      FUN_1802fac00(lVar5,*(int64_t *)(lVar5 + 0x10) + 0x70);
    }
    puVar9 = (uint *)((int64_t)*(char *)(*(int64_t *)(param_1 + 0x590) + 0x25f9) * 0x100 +
                     *(int64_t *)(*(int64_t *)(lVar10 + 0x260) + 0x18));
    do {
      LOCK();
      uVar2 = *puVar9;
      *puVar9 = *puVar9 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    uStack_178 = *(uint64_t *)(puVar9 + 1);
    uStack_170 = *(uint64_t *)(puVar9 + 3);
    uStack_168 = *(uint64_t *)(puVar9 + 5);
    uStack_160 = *(uint64_t *)(puVar9 + 7);
    *puVar9 = 0;
    puVar9 = (uint *)((int64_t)*(char *)(*(int64_t *)(param_1 + 0x590) + 0x25fb) * 0x100 +
                     *(int64_t *)(*(int64_t *)(lVar10 + 0x260) + 0x18));
    do {
      LOCK();
      uVar2 = *puVar9;
      *puVar9 = *puVar9 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    auStack_1f8 = *(int8_t (*) [16])(puVar9 + 1);
    fVar18 = auStack_1f8._4_4_;
    fVar19 = auStack_1f8._8_4_;
    fStack_1e8 = (float)puVar9[5];
    fStack_1e4 = (float)puVar9[6];
    fStack_1e0 = (float)puVar9[7];
    uStack_1dc = puVar9[8];
    uVar24 = 0x3f800000;
    *puVar9 = 0;
    lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
    lVar5 = *(int64_t *)(*(int64_t *)(lVar11 + 0x36f8 + lVar4) + 0x18);
    uStack_234 = 0x7f7fffff;
    lVar12 = (int64_t)param_6 * 0x100;
    fVar14 = auStack_1f8._0_4_ * fVar19;
    fVar23 = fStack_1e8 * *(float *)(lVar10 + 0x74) + fStack_1e4 * *(float *)(lVar10 + 0x84) +
             *(float *)(lVar10 + 0xa4);
    fVar21 = fStack_1e0 * *(float *)(lVar10 + 0x98) + *(float *)(lVar10 + 0xa8);
    fVar22 = fStack_1e4 * *(float *)(lVar10 + 0x80) + fStack_1e8 * *(float *)(lVar10 + 0x70) +
             *(float *)(lVar10 + 0xa0);
    fVar13 = fVar18 * auStack_1f8._12_4_;
    fVar20 = fVar19 * auStack_1f8._12_4_ - auStack_1f8._0_4_ * fVar18;
    fVar20 = fVar20 + fVar20;
    fVar13 = fVar14 + fVar14 + fVar13 + fVar13;
    fVar14 = fVar20 * *(float *)(param_1 + 0x534) + fVar13 * *(float *)(param_1 + 0x524);
    fVar18 = 1.0 - (fVar18 * fVar18 + fVar18 * fVar18 + fVar19 * fVar19 + fVar19 * fVar19);
    fVar13 = fVar20 * *(float *)(param_1 + 0x530) + fVar13 * *(float *)(param_1 + 0x520);
    do {
      LOCK();
      puVar9 = (uint *)(lVar12 + lVar5);
      uVar2 = *puVar9;
      *puVar9 = *puVar9 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    puVar1 = (int32_t *)(lVar12 + 4 + lVar5);
    uStack_1d8 = *puVar1;
    uStack_1d4 = puVar1[1];
    uStack_1d0 = puVar1[2];
    uStack_1cc = puVar1[3];
    pfVar8 = (float *)(lVar12 + 0x14 + lVar5);
    fVar19 = *pfVar8;
    fVar20 = pfVar8[1];
    fVar3 = pfVar8[2];
    fStack_1bc = pfVar8[3];
    *(int32_t *)(lVar12 + lVar5) = 0;
    fStack_240 = fVar22;
    fStack_23c = fVar23;
    fStack_238 = fVar21;
    fStack_1c8 = fVar19;
    fStack_1c4 = fVar20;
    fStack_1c0 = fVar3;
    uStack_158 = uStack_178;
    uStack_150 = uStack_170;
    uStack_148 = uStack_168;
    uStack_140 = uStack_160;
    auStack_138 = auStack_1f8;
    fStack_128 = fStack_1e8;
    fStack_124 = fStack_1e4;
    fStack_120 = fStack_1e0;
    uStack_11c = uStack_1dc;
    uStack_118 = uStack_1d8;
    uStack_114 = uStack_1d4;
    uStack_110 = uStack_1d0;
    uStack_10c = uStack_1cc;
    fStack_108 = fVar19;
    fStack_104 = fVar20;
    fStack_100 = fVar3;
    fStack_fc = fStack_1bc;
    pfVar8 = (float *)FUN_180534930(*(int64_t *)(*(int64_t *)(lVar11 + 0x3778 + lVar4) + 0x8a8) +
                                    0x70,auStack_198,param_3);
    uStack_268 = 0x7f7fffff;
    fStack_274 = *pfVar8 - fVar19;
    fStack_270 = pfVar8[1] - fVar20;
    fStack_26c = pfVar8[2] - fVar3;
    FUN_180285b40(&uStack_1d8,&uStack_230,&fStack_274);
    puVar6 = *(uint64_t **)(param_1 + 0x728);
    *puVar6 = uStack_230;
    puVar6[1] = uStack_228;
    lVar10 = *(int64_t *)(param_1 + 0x728);
    fVar19 = param_3[1];
    fVar20 = param_3[2];
    fVar3 = param_3[3];
    *(float *)(lVar10 + 0x50) = *param_3;
    *(float *)(lVar10 + 0x54) = fVar19;
    *(float *)(lVar10 + 0x58) = fVar20;
    *(float *)(lVar10 + 0x5c) = fVar3;
    FUN_18063b470(&fStack_218,param_1 + 0x520);
    lVar10 = *(int64_t *)(param_1 + 0x728);
    uStack_254 = 0x7f7fffff;
    *(float *)(lVar10 + 0x40) =
         fStack_20c * uStack_150._4_4_ * -1.0 + fStack_210 * (float)uStack_150 * -1.0 +
         ((float)uStack_158 * fStack_218 - fStack_214 * uStack_158._4_4_);
    *(float *)(lVar10 + 0x44) =
         fStack_210 * uStack_150._4_4_ * 1.0 + fStack_218 * uStack_158._4_4_ * 1.0 +
         ((float)uStack_158 * fStack_214 - fStack_20c * (float)uStack_150);
    *(float *)(lVar10 + 0x48) =
         fStack_20c * uStack_158._4_4_ * 1.0 + fStack_218 * (float)uStack_150 * 1.0 +
         ((float)uStack_158 * fStack_210 - fStack_214 * uStack_150._4_4_);
    *(float *)(lVar10 + 0x4c) =
         fStack_214 * (float)uStack_150 * 1.0 + fStack_218 * uStack_150._4_4_ * 1.0 +
         ((float)uStack_158 * fStack_20c - fStack_210 * uStack_158._4_4_);
    lVar10 = *(int64_t *)(*(int64_t *)(lVar11 + 0x3778 + lVar4) + 0x8a8);
    lVar5 = *(int64_t *)(param_1 + 0x20);
    fVar19 = *(float *)(lVar10 + 0xa4);
    fVar20 = *(float *)(lVar5 + 0x10);
    fVar3 = *(float *)(lVar10 + 0xa8);
    fVar15 = *(float *)(lVar5 + 0x14);
    lVar7 = *(int64_t *)(param_1 + 0x728);
    *(float *)(lVar7 + 0x60) = *(float *)(lVar10 + 0xa0) - *(float *)(lVar5 + 0xc);
    *(float *)(lVar7 + 100) = fVar19 - fVar20;
    *(float *)(lVar7 + 0x68) = fVar3 - fVar15;
    *(int32_t *)(lVar7 + 0x6c) = 0x7f7fffff;
    lVar10 = *(int64_t *)(param_1 + 0x728);
    fVar19 = *(float *)(lVar10 + 0x68);
    fVar20 = *(float *)(lVar10 + 100);
    fVar3 = *(float *)(lVar10 + 0x60);
    fVar15 = fVar3 * fVar3 + fVar20 * fVar20 + fVar19 * fVar19;
    auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar16 = auVar17._0_4_;
    fVar15 = fVar16 * 0.5 * (3.0 - fVar15 * fVar16 * fVar16);
    *(float *)(lVar10 + 0x68) = fVar19 * fVar15;
    *(float *)(lVar10 + 0x60) = fVar3 * fVar15;
    *(float *)(lVar10 + 100) = fVar20 * fVar15;
    lVar10 = *(int64_t *)(param_1 + 0x728);
    *(uint64_t *)(lVar10 + 0x70) = *(uint64_t *)(lVar10 + 0x60);
    *(uint64_t *)(lVar10 + 0x78) = *(uint64_t *)(lVar10 + 0x68);
    fVar19 = *param_3;
    fVar20 = param_3[2];
    fVar3 = param_3[1];
    *(int32_t *)(*(int64_t *)(param_1 + 0x728) + 0x5a0) =
         *(int32_t *)(*(int64_t *)(param_1 + 0x590) + 0x2498);
    *(float *)(*(int64_t *)(param_1 + 0x728) + 0x4f0) =
         (fVar3 - fVar23) * fVar14 + (fVar19 - fVar22) * fVar13 + (fVar20 - fVar21) * fVar18;
    lVar10 = *(int64_t *)(param_1 + 0x728);
    *(uint64_t *)(lVar10 + 0xa0) = auStack_1f8._0_8_;
    *(uint64_t *)(lVar10 + 0xa8) = auStack_1f8._8_8_;
    *(uint64_t *)(lVar10 + 0xb0) = CONCAT44(fStack_1e4,fStack_1e8);
    *(uint64_t *)(lVar10 + 0xb8) = CONCAT44(uStack_1dc,fStack_1e0);
    lVar10 = *(int64_t *)(param_1 + 0x728);
    *(float *)(lVar10 + 0x90) = (float)uStack_158;
    *(float *)(lVar10 + 0x94) = uStack_158._4_4_;
    *(float *)(lVar10 + 0x98) = (float)uStack_150;
    *(float *)(lVar10 + 0x9c) = uStack_150._4_4_;
    *(int32_t *)(*(int64_t *)(param_1 + 0x728) + 0x59c) =
         *(int32_t *)(*(int64_t *)(param_1 + 0x728) + 0x4f0);
    *(int8_t *)(*(int64_t *)(param_1 + 0x728) + 0x5ae) = 1;
    lVar10 = *(int64_t *)(param_1 + 0x728);
    if (*(float *)(lVar10 + 0x59c) < 0.1) {
      fVar19 = 0.1 - *(float *)(lVar10 + 0x59c);
      *(float *)(lVar10 + 0x50) = fVar13 * fVar19 + *(float *)(lVar10 + 0x50);
      *(float *)(lVar10 + 0x54) = fVar14 * fVar19 + *(float *)(lVar10 + 0x54);
      *(float *)(lVar10 + 0x58) = fVar18 * fVar19 + *(float *)(lVar10 + 0x58);
      *(int32_t *)(*(int64_t *)(param_1 + 0x728) + 0x59c) = 0x3dcccccd;
      lVar10 = *(int64_t *)(*(int64_t *)(lVar11 + 0x36f8 + lVar4) + 0x18);
      do {
        LOCK();
        puVar9 = (uint *)(lVar12 + lVar10);
        uVar2 = *puVar9;
        *puVar9 = *puVar9 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      puVar1 = (int32_t *)(lVar12 + 4 + lVar10);
      uStack_1b8 = *puVar1;
      uStack_1b4 = puVar1[1];
      uStack_1b0 = puVar1[2];
      uStack_1ac = puVar1[3];
      pfVar8 = (float *)(lVar12 + 0x14 + lVar10);
      fVar13 = *pfVar8;
      fVar14 = pfVar8[1];
      fVar18 = pfVar8[2];
      fStack_19c = pfVar8[3];
      *(int32_t *)(lVar12 + lVar10) = 0;
      fStack_1a8 = fVar13;
      fStack_1a4 = fVar14;
      fStack_1a0 = fVar18;
      uStack_f8 = uStack_1b8;
      uStack_f4 = uStack_1b4;
      uStack_f0 = uStack_1b0;
      uStack_ec = uStack_1ac;
      fStack_e8 = fVar13;
      fStack_e4 = fVar14;
      fStack_e0 = fVar18;
      fStack_dc = fStack_19c;
      pfVar8 = (float *)FUN_180534930(*(int64_t *)(*(int64_t *)(lVar11 + 0x3778 + lVar4) + 0x8a8)
                                      + 0x70,auStack_188,*(int64_t *)(param_1 + 0x728) + 0x50);
      uStack_244 = 0x7f7fffff;
      fStack_250 = *pfVar8 - fVar13;
      fStack_24c = pfVar8[1] - fVar14;
      fStack_248 = pfVar8[2] - fVar18;
      FUN_180285b40(&uStack_1b8,&uStack_208,&fStack_250);
      puVar1 = *(int32_t **)(param_1 + 0x728);
      *puVar1 = uStack_208;
      puVar1[1] = uStack_204;
      puVar1[2] = uStack_200;
      puVar1[3] = uStack_1fc;
      lVar10 = *(int64_t *)(param_1 + 0x728);
    }
    uStack_280 = *(uint64_t *)(param_1 + 0x658);
    uStack_288 = *(int8_t *)(*(int64_t *)(param_1 + 0x590) + 0x2600);
    if ((param_2 & 0x40) == 0) {
      uVar24 = 0x7149f2ca;
    }
    uStack_290 = 1;
    uStack_298 = uVar24;
    FUN_180575360(*(int64_t *)(param_1 + 0x590),lVar10 + 0x50,lVar10 + 0x40,
                  *(float *)(lVar10 + 0x59c) / *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x8c0));
    *(float *)(*(int64_t *)(param_1 + 0x728) + 0x598) = param_7;
    *(int64_t *)(*(int64_t *)(param_1 + 0x728) + 0x578) =
         *(int64_t *)
          (&system_error_code + (int64_t)*(int *)(*(int64_t *)(param_1 + 0x728) + 0x580) * 8) -
         (int64_t)(param_7 * -100000.0);
    lVar4 = *(int64_t *)(param_1 + 0x728);
    *(float *)(lVar4 + 0x10) = fStack_240;
    *(float *)(lVar4 + 0x14) = fStack_23c;
    *(float *)(lVar4 + 0x18) = fStack_238;
    *(int32_t *)(lVar4 + 0x1c) = uStack_234;
    FUN_180516bd0(param_1,param_2,0xc7d5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (uint64_t)auStack_2b8);
}





// 函数: void FUN_180514263(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180514263(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int32_t *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t in_RAX;
  float *pfVar19;
  uint *puVar20;
  int64_t lVar21;
  int64_t unaff_RBX;
  int32_t *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar22;
  int64_t in_R11;
  ushort unaff_R12W;
  float *unaff_R13;
  uint64_t unaff_R14;
  char unaff_R15B;
  float fVar23;
  float fVar24;
  float fVar25;
  int8_t auVar26 [16];
  float fVar27;
  float fVar28;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar29;
  float fVar30;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar31;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  float fVar32;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  float fVar33;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  float fVar34;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t uVar35;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  int32_t in_stack_00000050;
  int32_t uStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  int32_t uStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  int32_t uStack0000000000000080;
  int32_t uStack0000000000000084;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  lVar5 = *(int64_t *)(unaff_RBX + 0x8d8);
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R14;
  lVar21 = *(int64_t *)(in_RAX + 0x8a8);
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int *)(param_1 + 0x5a4) = (int)param_4;
  lVar6 = *(int64_t *)(unaff_RBX + 0x728);
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(char *)(lVar6 + 0x5a8) = unaff_R15B;
  lVar6 = *(int64_t *)(unaff_RBX + 0x6d8);
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  param_4 = param_4 * 0xa60;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x8a8) + 0x260);
  if ((*(byte *)(lVar6 + 0xa8) & 1) == 0) {
    FUN_1802fac00(lVar6,*(int64_t *)(lVar6 + 0x10) + 0x70);
  }
  puVar20 = (uint *)((int64_t)*(char *)(*(int64_t *)(unaff_RBX + 0x590) + 0x25f9) * 0x100 +
                    *(int64_t *)(*(int64_t *)(lVar21 + 0x260) + 0x18));
  do {
    LOCK();
    uVar2 = *puVar20;
    *puVar20 = *puVar20 | 1;
    UNLOCK();
  } while ((uVar2 & 1) != 0);
  uVar15 = *(uint64_t *)(puVar20 + 1);
  uVar16 = *(uint64_t *)(puVar20 + 3);
  uVar17 = *(uint64_t *)(puVar20 + 5);
  uVar18 = *(uint64_t *)(puVar20 + 7);
  *(uint64_t *)(unaff_RBP + 0x18) = uVar15;
  *(uint64_t *)(unaff_RBP + 0x1a) = uVar16;
  *(uint64_t *)(unaff_RBP + 0x1c) = uVar17;
  *(uint64_t *)(unaff_RBP + 0x1e) = uVar18;
  *(uint64_t *)(unaff_RBP + 0x10) = uVar15;
  *(uint64_t *)(unaff_RBP + 0x12) = uVar16;
  *puVar20 = 0;
  lVar6 = *(int64_t *)(unaff_RBX + 0x590);
  *(uint64_t *)(unaff_RBP + 0x14) = uVar17;
  *(uint64_t *)(unaff_RBP + 0x16) = uVar18;
  puVar20 = (uint *)((int64_t)*(char *)(lVar6 + 0x25fb) * 0x100 +
                    *(int64_t *)(*(int64_t *)(lVar21 + 0x260) + 0x18));
  do {
    LOCK();
    uVar2 = *puVar20;
    *puVar20 = *puVar20 | 1;
    UNLOCK();
  } while ((uVar2 & 1) != 0);
  auVar26 = *(int8_t (*) [16])(puVar20 + 1);
  fVar27 = auVar26._4_4_;
  fVar28 = auVar26._8_4_;
  fVar33 = (float)puVar20[5];
  fVar3 = (float)puVar20[6];
  fVar4 = (float)puVar20[7];
  uVar2 = puVar20[8];
  *(int8_t (*) [16])(unaff_RBP + 0x20) = auVar26;
  unaff_RBP[0x24] = fVar33;
  unaff_RBP[0x25] = fVar3;
  unaff_RBP[0x26] = fVar4;
  unaff_RBP[0x27] = uVar2;
  uVar35 = 0x3f800000;
  *puVar20 = 0;
  lVar21 = *(int64_t *)(unaff_RBX + 0x6d8);
  unaff_RBP[-0xc] = fVar33;
  unaff_RBP[-0xb] = fVar3;
  unaff_RBP[-10] = fVar4;
  unaff_RBP[-9] = uVar2;
  lVar21 = *(int64_t *)(lVar21 + 0x8a8);
  fVar23 = *(float *)(lVar21 + 0x70);
  lVar6 = *(int64_t *)(*(int64_t *)(param_4 + 0x36f8 + lVar5) + 0x18);
  fVar29 = *(float *)(lVar21 + 0x84);
  fVar30 = *(float *)(lVar21 + 0x74);
  unaff_RBP[-0x1f] = 0x7f7fffff;
  fVar32 = *(float *)(lVar21 + 0x80);
  lVar22 = (int64_t)unaff_R15B * 0x100;
  fVar31 = *(float *)(lVar21 + 0x98);
  fVar24 = auVar26._0_4_ * fVar28;
  *(int8_t (*) [16])(unaff_RBP + -0x10) = auVar26;
  fVar34 = fVar33 * fVar30 + fVar3 * fVar29 + *(float *)(lVar21 + 0xa4);
  fVar31 = fVar4 * fVar31 + *(float *)(lVar21 + 0xa8);
  fVar33 = fVar3 * fVar32 + fVar33 * fVar23 + *(float *)(lVar21 + 0xa0);
  fVar23 = fVar27 * auVar26._12_4_;
  fVar29 = fVar28 * auVar26._12_4_ - auVar26._0_4_ * fVar27;
  fVar29 = fVar29 + fVar29;
  unaff_RBP[-0x20] = fVar31;
  fVar23 = fVar24 + fVar24 + fVar23 + fVar23;
  fVar30 = fVar29 * *(float *)(unaff_RBX + 0x534) + fVar23 * *(float *)(unaff_RBX + 0x524);
  fVar32 = 1.0 - (fVar27 * fVar27 + fVar27 * fVar27 + fVar28 * fVar28 + fVar28 * fVar28);
  fVar23 = fVar29 * *(float *)(unaff_RBX + 0x530) + fVar23 * *(float *)(unaff_RBX + 0x520);
  do {
    LOCK();
    puVar20 = (uint *)(lVar22 + lVar6);
    uVar2 = *puVar20;
    *puVar20 = *puVar20 | 1;
    UNLOCK();
  } while ((uVar2 & 1) != 0);
  puVar1 = (int32_t *)(lVar22 + 4 + lVar6);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  pfVar19 = (float *)(lVar22 + 0x14 + lVar6);
  fVar29 = *pfVar19;
  fVar3 = pfVar19[1];
  fVar4 = pfVar19[2];
  fVar24 = pfVar19[3];
  unaff_RBP[0x28] = uVar9;
  unaff_RBP[0x29] = uVar10;
  unaff_RBP[0x2a] = uVar11;
  unaff_RBP[0x2b] = uVar12;
  unaff_RBP[0x2c] = fVar29;
  unaff_RBP[0x2d] = fVar3;
  unaff_RBP[0x2e] = fVar4;
  unaff_RBP[0x2f] = fVar24;
  *(int32_t *)(lVar22 + lVar6) = 0;
  lVar21 = *(int64_t *)(param_4 + 0x3778 + lVar5);
  unaff_RBP[-8] = uVar9;
  unaff_RBP[-7] = uVar10;
  unaff_RBP[-6] = uVar11;
  unaff_RBP[-5] = uVar12;
  unaff_RBP[-4] = fVar29;
  unaff_RBP[-3] = fVar3;
  unaff_RBP[-2] = fVar4;
  unaff_RBP[-1] = fVar24;
  in_stack_00000078 = fVar33;
  fStack000000000000007c = fVar34;
  pfVar19 = (float *)FUN_180534930(*(int64_t *)(lVar21 + 0x8a8) + 0x70,unaff_RBP + 8);
  in_stack_00000050 = 0x7f7fffff;
  fStack0000000000000044 = *pfVar19 - fVar29;
  in_stack_00000048 = pfVar19[1] - fVar3;
  fStack000000000000004c = pfVar19[2] - fVar4;
  FUN_180285b40(unaff_RBP + -8,unaff_RBP + -0x1e,&stack0x00000044);
  puVar7 = *(uint64_t **)(unaff_RBX + 0x728);
  uVar15 = *(uint64_t *)(unaff_RBP + -0x1c);
  *puVar7 = *(uint64_t *)(unaff_RBP + -0x1e);
  puVar7[1] = uVar15;
  lVar21 = *(int64_t *)(unaff_RBX + 0x728);
  fVar29 = unaff_R13[1];
  fVar3 = unaff_R13[2];
  fVar4 = unaff_R13[3];
  *(float *)(lVar21 + 0x50) = *unaff_R13;
  *(float *)(lVar21 + 0x54) = fVar29;
  *(float *)(lVar21 + 0x58) = fVar3;
  *(float *)(lVar21 + 0x5c) = fVar4;
  FUN_18063b470(unaff_RBP + -0x18,unaff_RBX + 0x520);
  fVar27 = (float)unaff_RBP[0x18];
  fVar28 = (float)unaff_RBP[0x19];
  fVar13 = (float)unaff_RBP[0x1a];
  fVar14 = (float)unaff_RBP[0x1b];
  lVar21 = *(int64_t *)(unaff_RBX + 0x728);
  fVar29 = (float)unaff_RBP[-0x18];
  fVar3 = (float)unaff_RBP[-0x17];
  fVar4 = (float)unaff_RBP[-0x16];
  fVar24 = (float)unaff_RBP[-0x15];
  uStack0000000000000064 = 0x7f7fffff;
  *(float *)(lVar21 + 0x40) =
       fVar24 * fVar14 * -1.0 + fVar4 * fVar13 * -1.0 + (fVar27 * fVar29 - fVar3 * fVar28);
  *(float *)(lVar21 + 0x44) =
       fVar4 * fVar14 * 1.0 + fVar29 * fVar28 * 1.0 + (fVar27 * fVar3 - fVar24 * fVar13);
  *(float *)(lVar21 + 0x48) =
       fVar24 * fVar28 * 1.0 + fVar29 * fVar13 * 1.0 + (fVar27 * fVar4 - fVar3 * fVar14);
  *(float *)(lVar21 + 0x4c) =
       fVar3 * fVar13 * 1.0 + fVar29 * fVar14 * 1.0 + (fVar27 * fVar24 - fVar4 * fVar28);
  lVar21 = *(int64_t *)(*(int64_t *)(param_4 + 0x3778 + lVar5) + 0x8a8);
  lVar6 = *(int64_t *)(unaff_RBX + 0x20);
  fVar29 = *(float *)(lVar21 + 0xa4);
  fVar3 = *(float *)(lVar6 + 0x10);
  fVar4 = *(float *)(lVar21 + 0xa8);
  fVar24 = *(float *)(lVar6 + 0x14);
  lVar8 = *(int64_t *)(unaff_RBX + 0x728);
  *(float *)(lVar8 + 0x60) = *(float *)(lVar21 + 0xa0) - *(float *)(lVar6 + 0xc);
  *(float *)(lVar8 + 100) = fVar29 - fVar3;
  *(float *)(lVar8 + 0x68) = fVar4 - fVar24;
  *(int32_t *)(lVar8 + 0x6c) = 0x7f7fffff;
  lVar21 = *(int64_t *)(unaff_RBX + 0x728);
  fVar29 = *(float *)(lVar21 + 0x68);
  fVar3 = *(float *)(lVar21 + 100);
  fVar4 = *(float *)(lVar21 + 0x60);
  fVar24 = fVar4 * fVar4 + fVar3 * fVar3 + fVar29 * fVar29;
  auVar26 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
  fVar25 = auVar26._0_4_;
  fVar24 = fVar25 * 0.5 * (3.0 - fVar24 * fVar25 * fVar25);
  *(float *)(lVar21 + 0x68) = fVar29 * fVar24;
  *(float *)(lVar21 + 0x60) = fVar4 * fVar24;
  *(float *)(lVar21 + 100) = fVar3 * fVar24;
  lVar21 = *(int64_t *)(unaff_RBX + 0x728);
  *(uint64_t *)(lVar21 + 0x70) = *(uint64_t *)(lVar21 + 0x60);
  *(uint64_t *)(lVar21 + 0x78) = *(uint64_t *)(lVar21 + 0x68);
  fVar29 = *unaff_R13;
  fVar3 = unaff_R13[2];
  fVar4 = unaff_R13[1];
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5a0) =
       *(int32_t *)(*(int64_t *)(unaff_RBX + 0x590) + 0x2498);
  uVar15 = *(uint64_t *)(unaff_RBP + -0xc);
  uVar16 = *(uint64_t *)(unaff_RBP + -10);
  uVar17 = *(uint64_t *)(unaff_RBP + -0x10);
  uVar18 = *(uint64_t *)(unaff_RBP + -0xe);
  *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x4f0) =
       (fVar4 - fVar34) * fVar30 + (fVar29 - fVar33) * fVar23 + (fVar3 - fVar31) * fVar32;
  lVar21 = *(int64_t *)(unaff_RBX + 0x728);
  *(uint64_t *)(lVar21 + 0xa0) = uVar17;
  *(uint64_t *)(lVar21 + 0xa8) = uVar18;
  *(uint64_t *)(lVar21 + 0xb0) = uVar15;
  *(uint64_t *)(lVar21 + 0xb8) = uVar16;
  lVar21 = *(int64_t *)(unaff_RBX + 0x728);
  *(float *)(lVar21 + 0x90) = fVar27;
  *(float *)(lVar21 + 0x94) = fVar28;
  *(float *)(lVar21 + 0x98) = fVar13;
  *(float *)(lVar21 + 0x9c) = fVar14;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x728) + 0x59c) =
       *(int32_t *)(*(int64_t *)(unaff_RBX + 0x728) + 0x4f0);
  *(int8_t *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5ae) = 1;
  lVar21 = *(int64_t *)(unaff_RBX + 0x728);
  if (*(float *)(lVar21 + 0x59c) < 0.1) {
    fVar29 = 0.1 - *(float *)(lVar21 + 0x59c);
    *(float *)(lVar21 + 0x50) = fVar23 * fVar29 + *(float *)(lVar21 + 0x50);
    *(float *)(lVar21 + 0x54) = fVar30 * fVar29 + *(float *)(lVar21 + 0x54);
    *(float *)(lVar21 + 0x58) = fVar32 * fVar29 + *(float *)(lVar21 + 0x58);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x728) + 0x59c) = 0x3dcccccd;
    lVar21 = *(int64_t *)(*(int64_t *)(param_4 + 0x36f8 + lVar5) + 0x18);
    do {
      LOCK();
      puVar20 = (uint *)(lVar22 + lVar21);
      uVar2 = *puVar20;
      *puVar20 = *puVar20 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    puVar1 = (int32_t *)(lVar22 + 4 + lVar21);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    pfVar19 = (float *)(lVar22 + 0x14 + lVar21);
    fVar23 = *pfVar19;
    fVar29 = pfVar19[1];
    fVar30 = pfVar19[2];
    fVar32 = pfVar19[3];
    unaff_RBP[0x30] = uVar9;
    unaff_RBP[0x31] = uVar10;
    unaff_RBP[0x32] = uVar11;
    unaff_RBP[0x33] = uVar12;
    unaff_RBP[0x34] = fVar23;
    unaff_RBP[0x35] = fVar29;
    unaff_RBP[0x36] = fVar30;
    unaff_RBP[0x37] = fVar32;
    *(int32_t *)(lVar22 + lVar21) = 0;
    lVar5 = *(int64_t *)(param_4 + 0x3778 + lVar5);
    lVar21 = *(int64_t *)(unaff_RBX + 0x728);
    *unaff_RBP = uVar9;
    unaff_RBP[1] = uVar10;
    unaff_RBP[2] = uVar11;
    unaff_RBP[3] = uVar12;
    unaff_RBP[4] = fVar23;
    unaff_RBP[5] = fVar29;
    unaff_RBP[6] = fVar30;
    unaff_RBP[7] = fVar32;
    pfVar19 = (float *)FUN_180534930(*(int64_t *)(lVar5 + 0x8a8) + 0x70,unaff_RBP + 0xc,
                                     lVar21 + 0x50);
    uStack0000000000000074 = 0x7f7fffff;
    fStack0000000000000068 = *pfVar19 - fVar23;
    fStack000000000000006c = pfVar19[1] - fVar29;
    fStack0000000000000070 = pfVar19[2] - fVar30;
    FUN_180285b40(fVar29,unaff_RBP + -0x14,&stack0x00000068);
    puVar1 = *(int32_t **)(unaff_RBX + 0x728);
    uVar9 = unaff_RBP[-0x13];
    uVar10 = unaff_RBP[-0x12];
    uVar11 = unaff_RBP[-0x11];
    *puVar1 = unaff_RBP[-0x14];
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    lVar21 = *(int64_t *)(unaff_RBX + 0x728);
  }
  if ((unaff_R12W & 0x40) == 0) {
    uVar35 = 0x7149f2ca;
  }
  FUN_180575360(*(uint64_t *)(unaff_RBX + 0x590),lVar21 + 0x50,lVar21 + 0x40,
                *(float *)(lVar21 + 0x59c) / *(float *)(*(int64_t *)(unaff_RBX + 0x6d8) + 0x8c0),
                uVar35);
  fVar23 = (float)unaff_RBP[0x7c];
  *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x598) = fVar23;
  *(int64_t *)(*(int64_t *)(unaff_RBX + 0x728) + 0x578) =
       *(int64_t *)
        (&system_error_code + (int64_t)*(int *)(*(int64_t *)(unaff_RBX + 0x728) + 0x580) * 8) -
       (int64_t)(fVar23 * -100000.0);
  lVar5 = *(int64_t *)(unaff_RBX + 0x728);
  *(float *)(lVar5 + 0x10) = in_stack_00000078;
  *(float *)(lVar5 + 0x14) = fStack000000000000007c;
  *(int32_t *)(lVar5 + 0x18) = uStack0000000000000080;
  *(int32_t *)(lVar5 + 0x1c) = uStack0000000000000084;
  FUN_180516bd0(in_stack_00000078,unaff_R12W,0xc7d5);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x38) ^ (uint64_t)&stack0x00000000);
}





