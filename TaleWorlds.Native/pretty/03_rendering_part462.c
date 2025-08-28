#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part462.c - 2 个函数

// 函数: void FUN_180515880(int64_t param_1)
void FUN_180515880(int64_t param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int64_t lVar9;
  ushort uVar10;
  uint *puVar11;
  int64_t lVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auStack_2c8 [32];
  int32_t uStack_2a8;
  int8_t uStack_2a0;
  int8_t uStack_298;
  uint64_t uStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  int32_t uStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  int32_t uStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  int32_t uStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  int32_t uStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint64_t uStack_1e4;
  uint64_t uStack_1dc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  uint uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  int8_t auStack_148 [16];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t uStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int8_t auStack_f8 [32];
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2c8;
  lVar9 = *(int64_t *)(param_1 + 0x728);
  if ((*(ushort *)(lVar9 + 0x5aa) & 0x200) != 0) {
    fVar15 = *(float *)(lVar9 + 0x98);
    fVar16 = *(float *)(lVar9 + 0x94);
    fVar22 = *(float *)(lVar9 + 0x90) * fVar15;
    fVar20 = fVar15 * *(float *)(lVar9 + 0x9c) - *(float *)(lVar9 + 0x90) * fVar16;
    fVar19 = fVar16 * *(float *)(lVar9 + 0x9c);
    pfVar8 = (float *)FUN_180534d00(*(uint64_t *)(param_1 + 0x658),auStack_f8,
                                    *(int8_t *)(*(int64_t *)(param_1 + 0x590) + 0x25f9));
    fVar21 = pfVar8[1];
    fVar17 = pfVar8[2];
    fVar14 = *pfVar8 * fVar17;
    fVar18 = fVar17 * pfVar8[3] - *pfVar8 * fVar21;
    if ((1.0 - (fVar21 * fVar21 + fVar21 * fVar21 + fVar17 * fVar17 + fVar17 * fVar17)) *
        (1.0 - (fVar15 * fVar15 + fVar15 * fVar15 + fVar16 * fVar16 + fVar16 * fVar16)) +
        (fVar22 + fVar22 + fVar19 + fVar19) *
        (fVar14 + fVar14 + fVar21 * pfVar8[3] + fVar21 * pfVar8[3]) +
        (fVar20 + fVar20) * (fVar18 + fVar18) < 0.7) {
      lVar9 = *(int64_t *)(param_1 + 0x728);
      uVar10 = *(ushort *)(lVar9 + 0x5aa) & 0x200;
      if (uVar10 != 0) {
        *(ushort *)(lVar9 + 0x5ac) = *(ushort *)(lVar9 + 0x5ac) | uVar10;
        puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x728) + 0x5aa);
        *puVar1 = *puVar1 & ~uVar10;
        lVar9 = *(int64_t *)(param_1 + 0x728);
      }
      *(int32_t *)(lVar9 + 0x5a4) = 0xffffffff;
      goto FUN_180516299;
    }
  }
  lVar9 = *(int64_t *)(param_1 + 0x728);
  lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  pfVar8 = (float *)(lVar9 + 0xa0);
  FUN_18063b5f0(&fStack_188);
  uStack_108 = *(uint64_t *)(pfVar8 + 4);
  uStack_100 = *(uint64_t *)(pfVar8 + 6);
  fStack_260 = *(float *)(lVar12 + 0x98);
  fVar15 = *(float *)(lVar12 + 0x84);
  fVar16 = *(float *)(lVar12 + 0x74);
  fVar21 = *(float *)(lVar12 + 0x80);
  fVar17 = *(float *)(lVar12 + 0x70);
  fStack_138 = fStack_188;
  fStack_134 = fStack_184;
  fStack_130 = fStack_180;
  uStack_12c = uStack_17c;
  fStack_220 = fStack_168 * fVar16 + fStack_164 * fVar15;
  fStack_224 = fStack_168 * fVar17 + fStack_164 * fVar21;
  fStack_264 = fStack_178 * fVar16 + fStack_174 * fVar15;
  fStack_268 = fStack_178 * fVar17 + fStack_174 * fVar21;
  fStack_270 = fStack_180 * fStack_260;
  fStack_128 = fStack_178;
  fStack_124 = fStack_174;
  fStack_120 = fStack_170;
  uStack_11c = uStack_16c;
  fStack_118 = fStack_168;
  fStack_114 = fStack_164;
  fStack_110 = fStack_160;
  uStack_10c = uStack_15c;
  fStack_21c = fStack_160 * fStack_260;
  fStack_278 = fStack_188 * fVar17 + fStack_184 * fVar21;
  fStack_260 = fStack_170 * fStack_260;
  fStack_274 = fStack_188 * fVar16 + fStack_184 * fVar15;
  uStack_238 = 0x7f7fffff;
  fStack_288 = (float)uStack_108;
  fStack_284 = (float)((uint64_t)uStack_108 >> 0x20);
  fStack_280 = (float)uStack_100;
  fVar14 = *pfVar8;
  fVar18 = pfVar8[1];
  fVar19 = pfVar8[2];
  fVar20 = pfVar8[3];
  fVar22 = *(float *)(lVar9 + 0x90);
  fVar5 = *(float *)(lVar9 + 0x94);
  fVar6 = *(float *)(lVar9 + 0x98);
  fVar7 = *(float *)(lVar9 + 0x9c);
  uStack_228 = 0x7f7fffff;
  uStack_218 = 0x7f7fffff;
  fStack_26c = 3.4028235e+38;
  fStack_1c4 = fVar6 * fVar20 * -1.0 + fVar14 * fVar5 * -1.0 + fVar22 * fVar18 + fVar7 * fVar19;
  fStack_1c0 = fVar7 * fVar18 * -1.0 + fVar14 * fVar6 * -1.0 + fVar22 * fVar19 + fVar5 * fVar20;
  fStack_1bc = fVar5 * fVar19 * -1.0 + fVar14 * fVar7 * -1.0 + fVar22 * fVar20 + fVar6 * fVar18;
  fStack_1c8 = fVar7 * fVar20 * 1.0 + fVar14 * fVar22 * 1.0 + fVar6 * fVar19 + fVar5 * fVar18;
  fVar14 = (fStack_280 * *(float *)(lVar12 + 0x98) + *(float *)(lVar12 + 0xa8)) * 0.7 +
           *(float *)(lVar9 + 0x18) * 0.3;
  fStack_25c = 3.4028235e+38;
  fVar21 = (fStack_288 * fVar17 + fStack_284 * fVar21 + *(float *)(lVar12 + 0xa0)) * 0.7 +
           *(float *)(lVar9 + 0x10) * 0.3;
  fStack_248 = (fStack_288 * fVar16 + fStack_284 * fVar15 + *(float *)(lVar12 + 0xa4)) * 0.7 +
               *(float *)(lVar9 + 0x14) * 0.3;
  fStack_258 = *(float *)(lVar9 + 0x50) - fVar21;
  fStack_250 = *(float *)(lVar9 + 0x58) - fVar14;
  fStack_254 = *(float *)(lVar9 + 0x54) - fStack_248;
  fStack_24c = 3.4028235e+38;
  fVar16 = fStack_258 * fStack_258 + fStack_254 * fStack_254 + fStack_250 * fStack_250;
  _fStack_288 = CONCAT44(fStack_254,fStack_258);
  _fStack_280 = CONCAT44(0x7f7fffff,fStack_250);
  auVar13 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
  fVar15 = auVar13._0_4_;
  fVar15 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15);
  fStack_258 = fStack_258 * fVar15;
  fStack_254 = fStack_254 * fVar15;
  fStack_250 = fStack_250 * fVar15;
  *(float *)(lVar9 + 0x59c) = fVar15 * fVar16;
  lVar9 = *(int64_t *)(param_1 + 0x728);
  fStack_244 = fStack_278;
  fStack_240 = fStack_274;
  fStack_23c = fStack_270;
  fStack_234 = fStack_268;
  fStack_230 = fStack_264;
  fStack_22c = fStack_260;
  if (0.1 < *(float *)(lVar9 + 0x59c) || *(float *)(lVar9 + 0x59c) == 0.1) {
    fVar14 = fStack_250 * fStack_264 - fStack_254 * fStack_260;
    fVar21 = fStack_268 * fStack_254 - fStack_264 * fStack_258;
    fVar17 = fStack_260 * fStack_258 - fStack_268 * fStack_250;
    fVar15 = fVar17 * fVar17 + fVar14 * fVar14 + fVar21 * fVar21;
    auVar13 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar16 = auVar13._0_4_;
    fVar20 = fVar16 * 0.5 * (3.0 - fVar15 * fVar16 * fVar16);
    fVar14 = fVar20 * fVar14;
    fVar17 = fVar20 * fVar17;
    fVar20 = fVar20 * fVar21;
    fVar19 = fStack_254 * fVar20 - fStack_250 * fVar17;
    fVar21 = fVar17 * fStack_258 - fStack_254 * fVar14;
    fVar22 = fStack_250 * fVar14 - fVar20 * fStack_258;
    FUN_18063b5f0(&fStack_214,&fStack_1c8);
    fVar18 = fStack_20c * fStack_26c;
    fVar15 = fStack_1fc * fStack_25c;
    fVar16 = fStack_204 * fStack_25c;
    fStack_268 = fStack_210 * fVar14 + fStack_200 * fVar19 + fStack_1f0 * fStack_258;
    fStack_264 = fStack_210 * fVar17 + fStack_200 * fVar22 + fStack_1f0 * fStack_254;
    fStack_260 = fStack_210 * fVar20 + fStack_200 * fVar21 + fStack_1f0 * fStack_250;
    fStack_25c = fStack_210 * fStack_26c + fStack_200 * fStack_25c + fStack_1f0 * fStack_24c;
    fStack_278 = fStack_214 * fVar14 + fStack_204 * fVar19 + fStack_1f4 * fStack_258;
    fStack_274 = fStack_214 * fVar17 + fStack_204 * fVar22 + fStack_1f4 * fStack_254;
    fStack_270 = fStack_214 * fVar20 + fStack_204 * fVar21 + fStack_1f4 * fStack_250;
    fStack_26c = fStack_214 * fStack_26c + fVar16 + fStack_1f4 * fStack_24c;
    fStack_258 = fStack_20c * fVar14 + fStack_1fc * fVar19 + fStack_1ec * fStack_258;
    fStack_254 = fStack_20c * fVar17 + fStack_1fc * fVar22 + fStack_1ec * fStack_254;
    fStack_250 = fStack_20c * fVar20 + fStack_1fc * fVar21 + fStack_1ec * fStack_250;
    fStack_24c = fVar18 + fVar15 + fStack_1ec * fStack_24c;
    FUN_18063b470(&uStack_1b8,&fStack_278);
    *(uint64_t *)(lVar9 + 0x40) = uStack_1b8;
    *(uint64_t *)(lVar9 + 0x48) = uStack_1b0;
  }
  else {
    *(int32_t *)(lVar9 + 0x59c) = 0x3dcccccd;
    lVar9 = *(int64_t *)(param_1 + 0x728);
    fVar15 = *(float *)(lVar9 + 0x40);
    fVar16 = *(float *)(lVar9 + 0x44);
    fVar17 = *(float *)(lVar9 + 0x48);
    fVar18 = *(float *)(lVar9 + 0x4c);
    fStack_154 = fVar17 * fStack_1bc * 1.0 + fVar15 * fStack_1c4 * 1.0 +
                 (fStack_1c8 * fVar16 - fVar18 * fStack_1c0);
    fStack_150 = fVar18 * fStack_1c4 * 1.0 + fVar15 * fStack_1c0 * 1.0 +
                 (fStack_1c8 * fVar17 - fVar16 * fStack_1bc);
    fStack_14c = fVar16 * fStack_1c0 * 1.0 + fVar15 * fStack_1bc * 1.0 +
                 (fStack_1c8 * fVar18 - fVar17 * fStack_1c4);
    fStack_158 = fVar18 * fStack_1bc * -1.0 + fVar17 * fStack_1c0 * -1.0 +
                 (fStack_1c8 * fVar15 - fVar16 * fStack_1c4);
    fVar21 = (fStack_158 * fStack_150 + fStack_154 * fStack_14c) * 0.2 + fVar21;
    fVar15 = (fStack_150 * fStack_14c - fStack_158 * fStack_154) * 0.2 + fStack_248;
    fVar14 = (0.1 - (fStack_150 * fStack_150 + fStack_154 * fStack_154) * 0.2) + fVar14;
    *(float *)(lVar9 + 0x50) = fVar21;
    *(float *)(lVar9 + 0x54) = fVar15;
    *(float *)(lVar9 + 0x58) = fVar14;
    *(int32_t *)(lVar9 + 0x5c) = 0x7f7fffff;
    _fStack_288 = CONCAT44(fVar15,fVar21);
    _fStack_280 = CONCAT44(0x7f7fffff,fVar14);
    iVar3 = *(int *)(*(int64_t *)(param_1 + 0x728) + 0x5a4);
    if (-1 < iVar3) {
      lVar9 = *(int64_t *)(param_1 + 0x8d8);
      lVar12 = (int64_t)iVar3 * 0xa60;
      puVar11 = (uint *)((int64_t)*(char *)(*(int64_t *)(param_1 + 0x728) + 0x5a8) * 0x100 +
                        *(int64_t *)(*(int64_t *)(lVar12 + 0x36f8 + lVar9) + 0x18));
      do {
        LOCK();
        uVar2 = *puVar11;
        *puVar11 = *puVar11 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uStack_1a8 = puVar11[1];
      uStack_1a4 = puVar11[2];
      uStack_1a0 = puVar11[3];
      uStack_19c = puVar11[4];
      fVar15 = (float)puVar11[5];
      fVar16 = (float)puVar11[6];
      fVar21 = (float)puVar11[7];
      uStack_18c = puVar11[8];
      *puVar11 = 0;
      fStack_198 = fVar15;
      fStack_194 = fVar16;
      fStack_190 = fVar21;
      uStack_d8 = uStack_1a8;
      uStack_d4 = uStack_1a4;
      uStack_d0 = uStack_1a0;
      uStack_cc = uStack_19c;
      fStack_c8 = fVar15;
      fStack_c4 = fVar16;
      fStack_c0 = fVar21;
      uStack_bc = uStack_18c;
      pfVar8 = (float *)FUN_180534930(*(int64_t *)(*(int64_t *)(lVar12 + 0x3778 + lVar9) + 0x8a8)
                                      + 0x70,auStack_148,*(int64_t *)(param_1 + 0x728) + 0x50);
      _fStack_288 = CONCAT44(pfVar8[1] - fVar16,*pfVar8 - fVar15);
      _fStack_280 = CONCAT44(0x7f7fffff,pfVar8[2] - fVar21);
      FUN_180285b40(&uStack_1a8,&uStack_1e4,&fStack_288);
      puVar4 = *(uint64_t **)(param_1 + 0x728);
      *puVar4 = uStack_1e4;
      puVar4[1] = uStack_1dc;
    }
  }
  lVar9 = *(int64_t *)(param_1 + 0x728);
  uStack_290 = *(uint64_t *)(param_1 + 0x658);
  uStack_298 = *(int8_t *)(*(int64_t *)(param_1 + 0x590) + 0x2600);
  uStack_2a0 = 1;
  uStack_2a8 = 0x7149f2ca;
  FUN_180575360(*(int64_t *)(param_1 + 0x590),lVar9 + 0x50,lVar9 + 0x40,
                *(float *)(lVar9 + 0x59c) / *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x8c0));
FUN_180516299:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (uint64_t)auStack_2c8);
}





// 函数: void FUN_180515a4e(void)
void FUN_180515a4e(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t in_RAX;
  float *pfVar7;
  uint *puVar8;
  int64_t unaff_RBX;
  float *unaff_RBP;
  int64_t lVar9;
  int64_t lVar10;
  int64_t in_R9;
  int8_t auVar11 [16];
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
  float fVar29;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  lVar9 = *(int64_t *)(in_RAX + 0x8a8);
  pfVar7 = (float *)(in_R9 + 0xa0);
  FUN_18063b5f0();
  fVar22 = unaff_RBP[0x18];
  fVar24 = unaff_RBP[0x19];
  unaff_RBP[-0x1c] = 3.4028235e+38;
  fVar27 = unaff_RBP[0x14];
  fVar20 = unaff_RBP[0x15];
  unaff_RBP[-0x18] = 3.4028235e+38;
  fVar25 = unaff_RBP[0x10];
  fVar14 = unaff_RBP[0x11];
  unaff_RBP[-0x14] = 3.4028235e+38;
  uVar5 = *(uint64_t *)(pfVar7 + 4);
  uVar6 = *(uint64_t *)(pfVar7 + 6);
  fVar26 = *(float *)(lVar9 + 0x98);
  fVar13 = *(float *)(lVar9 + 0x84);
  fVar12 = *(float *)(lVar9 + 0x74);
  fVar28 = *(float *)(lVar9 + 0x80);
  fVar1 = *(float *)(lVar9 + 0x70);
  unaff_RBP[0x24] = fVar25;
  unaff_RBP[0x25] = fVar14;
  unaff_RBP[0x26] = unaff_RBP[0x12];
  unaff_RBP[0x27] = unaff_RBP[0x13];
  *(uint64_t *)(unaff_RBP + 0x30) = uVar5;
  *(uint64_t *)(unaff_RBP + 0x32) = uVar6;
  fStack0000000000000064 = fVar27 * fVar12 + fVar20 * fVar13;
  in_stack_00000060 = fVar27 * fVar1 + fVar20 * fVar28;
  in_stack_00000058 = unaff_RBP[0x12] * fVar26;
  unaff_RBP[0x28] = fVar27;
  unaff_RBP[0x29] = fVar20;
  unaff_RBP[0x2a] = unaff_RBP[0x16];
  unaff_RBP[0x2b] = unaff_RBP[0x17];
  unaff_RBP[0x2c] = fVar22;
  unaff_RBP[0x2d] = fVar24;
  unaff_RBP[0x2e] = unaff_RBP[0x1a];
  unaff_RBP[0x2f] = unaff_RBP[0x1b];
  in_stack_00000050 = fVar25 * fVar1 + fVar14 * fVar28;
  in_stack_00000068 = unaff_RBP[0x16] * fVar26;
  fStack000000000000005c = unaff_RBP[-0x1c];
  fStack0000000000000054 = fVar25 * fVar12 + fVar14 * fVar13;
  fStack000000000000006c = unaff_RBP[-0x18];
  unaff_RBP[-0x1f] = in_stack_00000050;
  unaff_RBP[-0x1e] = fStack0000000000000054;
  unaff_RBP[-0x1d] = in_stack_00000058;
  unaff_RBP[-0x1c] = fStack000000000000005c;
  fStack0000000000000040 = (float)uVar5;
  fStack0000000000000044 = (float)((uint64_t)uVar5 >> 0x20);
  fStack0000000000000048 = (float)uVar6;
  fVar20 = *pfVar7;
  fVar25 = pfVar7[1];
  fVar14 = pfVar7[2];
  fVar16 = pfVar7[3];
  fVar17 = *(float *)(in_R9 + 0x90);
  fVar21 = *(float *)(in_R9 + 0x94);
  fVar23 = *(float *)(in_R9 + 0x98);
  fVar29 = *(float *)(in_R9 + 0x9c);
  fVar27 = *(float *)(in_R9 + 0x18);
  unaff_RBP[-0x1b] = in_stack_00000060;
  unaff_RBP[-0x1a] = fStack0000000000000064;
  unaff_RBP[-0x19] = in_stack_00000068;
  unaff_RBP[-0x18] = fStack000000000000006c;
  unaff_RBP[-0x17] = fVar22 * fVar1 + fVar24 * fVar28;
  unaff_RBP[-0x16] = fVar22 * fVar12 + fVar24 * fVar13;
  unaff_RBP[-0x15] = unaff_RBP[0x1a] * fVar26;
  unaff_RBP[-0x14] = unaff_RBP[-0x14];
  fVar26 = *(float *)(in_R9 + 0x14);
  fVar22 = *(float *)(in_R9 + 0x10);
  fVar15 = fVar23 * fVar16 * -1.0 + fVar20 * fVar21 * -1.0 + fVar17 * fVar25 + fVar29 * fVar14;
  fVar18 = fVar29 * fVar25 * -1.0 + fVar20 * fVar23 * -1.0 + fVar17 * fVar14 + fVar21 * fVar16;
  fVar19 = fVar21 * fVar14 * -1.0 + fVar20 * fVar29 * -1.0 + fVar17 * fVar16 + fVar23 * fVar25;
  fVar20 = fVar29 * fVar16 * 1.0 + fVar20 * fVar17 * 1.0 + fVar23 * fVar14 + fVar21 * fVar25;
  in_stack_00000070 = *(float *)(in_R9 + 0x50);
  fVar24 = *(float *)(lVar9 + 0xa0);
  fVar27 = (fStack0000000000000048 * *(float *)(lVar9 + 0x98) + *(float *)(lVar9 + 0xa8)) * 0.7 +
           fVar27 * 0.3;
  *unaff_RBP = fVar20;
  unaff_RBP[1] = fVar15;
  unaff_RBP[2] = fVar18;
  unaff_RBP[3] = fVar19;
  fVar28 = (fStack0000000000000040 * fVar1 + fStack0000000000000044 * fVar28 + fVar24) * 0.7 +
           fVar22 * 0.3;
  fStack0000000000000074 = *(float *)(in_R9 + 0x54);
  fVar26 = (fStack0000000000000040 * fVar12 + fStack0000000000000044 * fVar13 +
           *(float *)(lVar9 + 0xa4)) * 0.7 + fVar26 * 0.3;
  in_stack_00000070 = in_stack_00000070 - fVar28;
  in_stack_00000078 = *(float *)(in_R9 + 0x58) - fVar27;
  unaff_RBP[-0x20] = fVar26;
  fStack0000000000000074 = fStack0000000000000074 - fVar26;
  fStack000000000000007c = 3.4028235e+38;
  fVar13 = in_stack_00000070 * in_stack_00000070 + fStack0000000000000074 * fStack0000000000000074 +
           in_stack_00000078 * in_stack_00000078;
  _fStack0000000000000040 = CONCAT44(fStack0000000000000074,in_stack_00000070);
  _fStack0000000000000048 = CONCAT44(0x7f7fffff,in_stack_00000078);
  auVar11 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar26 = auVar11._0_4_;
  fVar26 = fVar26 * 0.5 * (3.0 - fVar13 * fVar26 * fVar26);
  in_stack_00000070 = in_stack_00000070 * fVar26;
  fStack0000000000000074 = fStack0000000000000074 * fVar26;
  in_stack_00000078 = in_stack_00000078 * fVar26;
  *(float *)(in_R9 + 0x59c) = fVar26 * fVar13;
  lVar9 = *(int64_t *)(unaff_RBX + 0x728);
  if (0.1 < *(float *)(lVar9 + 0x59c) || *(float *)(lVar9 + 0x59c) == 0.1) {
    fVar16 = in_stack_00000078 * fStack0000000000000064 - fStack0000000000000074 * in_stack_00000068
    ;
    fVar12 = in_stack_00000060 * fStack0000000000000074 - fStack0000000000000064 * in_stack_00000070
    ;
    fVar14 = in_stack_00000068 * in_stack_00000070 - in_stack_00000060 * in_stack_00000078;
    fVar26 = fVar14 * fVar14 + fVar16 * fVar16 + fVar12 * fVar12;
    auVar11 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
    fVar13 = auVar11._0_4_;
    fVar29 = fVar13 * 0.5 * (3.0 - fVar26 * fVar13 * fVar13);
    fVar16 = fVar29 * fVar16;
    fVar14 = fVar29 * fVar14;
    fVar29 = fVar29 * fVar12;
    fVar23 = fStack0000000000000074 * fVar29 - in_stack_00000078 * fVar14;
    fVar17 = fVar14 * in_stack_00000070 - fStack0000000000000074 * fVar16;
    fVar15 = in_stack_00000078 * fVar16 - fVar29 * in_stack_00000070;
    FUN_18063b5f0(unaff_RBP + -0x13);
    fVar26 = unaff_RBP[-0xd];
    fVar13 = unaff_RBP[-9];
    fVar12 = unaff_RBP[-0x12];
    fVar28 = unaff_RBP[-0x11];
    fVar21 = fVar28 * fStack000000000000005c;
    fVar20 = fVar26 * fStack000000000000006c;
    fVar1 = unaff_RBP[-0xe];
    fVar27 = unaff_RBP[-10];
    fVar22 = unaff_RBP[-0x13];
    fVar24 = unaff_RBP[-0xf];
    fVar25 = fVar24 * fStack000000000000006c;
    in_stack_00000060 = fVar12 * fVar16 + fVar1 * fVar23 + fVar27 * in_stack_00000070;
    fStack0000000000000064 = fVar12 * fVar14 + fVar1 * fVar15 + fVar27 * fStack0000000000000074;
    in_stack_00000068 = fVar12 * fVar29 + fVar1 * fVar17 + fVar27 * in_stack_00000078;
    fStack000000000000006c =
         fVar12 * fStack000000000000005c + fVar1 * fStack000000000000006c +
         fVar27 * fStack000000000000007c;
    fVar12 = unaff_RBP[-0xb];
    in_stack_00000050 = fVar22 * fVar16 + fVar24 * fVar23 + fVar12 * in_stack_00000070;
    fStack0000000000000054 = fVar22 * fVar14 + fVar24 * fVar15 + fVar12 * fStack0000000000000074;
    in_stack_00000058 = fVar22 * fVar29 + fVar24 * fVar17 + fVar12 * in_stack_00000078;
    fStack000000000000005c =
         fVar22 * fStack000000000000005c + fVar25 + fVar12 * fStack000000000000007c;
    in_stack_00000070 = fVar28 * fVar16 + fVar26 * fVar23 + fVar13 * in_stack_00000070;
    fStack0000000000000074 = fVar28 * fVar14 + fVar26 * fVar15 + fVar13 * fStack0000000000000074;
    in_stack_00000078 = fVar28 * fVar29 + fVar26 * fVar17 + fVar13 * in_stack_00000078;
    fStack000000000000007c = fVar21 + fVar20 + fVar13 * fStack000000000000007c;
    FUN_18063b470(unaff_RBP + 4,&stack0x00000050);
    uVar5 = *(uint64_t *)(unaff_RBP + 6);
    *(uint64_t *)(lVar9 + 0x40) = *(uint64_t *)(unaff_RBP + 4);
    *(uint64_t *)(lVar9 + 0x48) = uVar5;
  }
  else {
    *(int32_t *)(lVar9 + 0x59c) = 0x3dcccccd;
    lVar9 = *(int64_t *)(unaff_RBX + 0x728);
    fVar26 = *(float *)(lVar9 + 0x40);
    fVar13 = *(float *)(lVar9 + 0x44);
    fVar12 = *(float *)(lVar9 + 0x48);
    fVar1 = *(float *)(lVar9 + 0x4c);
    fVar22 = fVar12 * fVar19 * 1.0 + fVar26 * fVar15 * 1.0 + (fVar20 * fVar13 - fVar1 * fVar18);
    fVar24 = fVar1 * fVar15 * 1.0 + fVar26 * fVar18 * 1.0 + (fVar20 * fVar12 - fVar13 * fVar19);
    fVar25 = fVar13 * fVar18 * 1.0 + fVar26 * fVar19 * 1.0 + (fVar20 * fVar1 - fVar12 * fVar15);
    fVar26 = fVar1 * fVar19 * -1.0 + fVar12 * fVar18 * -1.0 + (fVar20 * fVar26 - fVar13 * fVar15);
    unaff_RBP[0x1c] = fVar26;
    unaff_RBP[0x1d] = fVar22;
    unaff_RBP[0x1e] = fVar24;
    unaff_RBP[0x1f] = fVar25;
    fVar28 = (fVar26 * fVar24 + fVar22 * fVar25) * 0.2 + fVar28;
    fVar26 = (fVar24 * fVar25 - fVar26 * fVar22) * 0.2 + unaff_RBP[-0x20];
    fVar27 = (0.1 - (fVar24 * fVar24 + fVar22 * fVar22) * 0.2) + fVar27;
    *(float *)(lVar9 + 0x50) = fVar28;
    *(float *)(lVar9 + 0x54) = fVar26;
    *(float *)(lVar9 + 0x58) = fVar27;
    *(int32_t *)(lVar9 + 0x5c) = 0x7f7fffff;
    _fStack0000000000000040 = CONCAT44(fVar26,fVar28);
    _fStack0000000000000048 = CONCAT44(0x7f7fffff,fVar27);
    iVar3 = *(int *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5a4);
    if (-1 < iVar3) {
      lVar9 = *(int64_t *)(unaff_RBX + 0x8d8);
      lVar10 = (int64_t)iVar3 * 0xa60;
      puVar8 = (uint *)((int64_t)*(char *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5a8) * 0x100 +
                       *(int64_t *)(*(int64_t *)(lVar10 + 0x36f8 + lVar9) + 0x18));
      do {
        LOCK();
        uVar2 = *puVar8;
        *puVar8 = *puVar8 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      fVar26 = (float)puVar8[1];
      fVar13 = (float)puVar8[2];
      fVar12 = (float)puVar8[3];
      fVar28 = (float)puVar8[4];
      fVar1 = (float)puVar8[5];
      fVar27 = (float)puVar8[6];
      fVar22 = (float)puVar8[7];
      fVar24 = (float)puVar8[8];
      unaff_RBP[0x3c] = fVar26;
      unaff_RBP[0x3d] = fVar13;
      unaff_RBP[0x3e] = fVar12;
      unaff_RBP[0x3f] = fVar28;
      unaff_RBP[0x40] = fVar1;
      unaff_RBP[0x41] = fVar27;
      unaff_RBP[0x42] = fVar22;
      unaff_RBP[0x43] = fVar24;
      *puVar8 = 0;
      lVar9 = *(int64_t *)(lVar10 + 0x3778 + lVar9);
      lVar10 = *(int64_t *)(unaff_RBX + 0x728);
      unaff_RBP[8] = fVar26;
      unaff_RBP[9] = fVar13;
      unaff_RBP[10] = fVar12;
      unaff_RBP[0xb] = fVar28;
      unaff_RBP[0xc] = fVar1;
      unaff_RBP[0xd] = fVar27;
      unaff_RBP[0xe] = fVar22;
      unaff_RBP[0xf] = fVar24;
      pfVar7 = (float *)FUN_180534930(*(int64_t *)(lVar9 + 0x8a8) + 0x70,unaff_RBP + 0x20,
                                      lVar10 + 0x50);
      _fStack0000000000000040 = CONCAT44(pfVar7[1] - fVar27,*pfVar7 - fVar1);
      _fStack0000000000000048 = CONCAT44(0x7f7fffff,pfVar7[2] - fVar22);
      FUN_180285b40(unaff_RBP + 8,unaff_RBP + -7,&stack0x00000040);
      puVar4 = *(uint64_t **)(unaff_RBX + 0x728);
      uVar5 = *(uint64_t *)(unaff_RBP + -5);
      *puVar4 = *(uint64_t *)(unaff_RBP + -7);
      puVar4[1] = uVar5;
    }
  }
  lVar9 = *(int64_t *)(unaff_RBX + 0x728);
  FUN_180575360(*(uint64_t *)(unaff_RBX + 0x590),lVar9 + 0x50,lVar9 + 0x40,
                *(float *)(lVar9 + 0x59c) / *(float *)(*(int64_t *)(unaff_RBX + 0x6d8) + 0x8c0),
                0x7149f2ca);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x44) ^ (uint64_t)&stack0x00000000);
}





