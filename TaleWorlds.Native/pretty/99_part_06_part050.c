#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part050.c - 2 个函数

// 函数: void FUN_1803d9b00(int64_t *param_1)
void FUN_1803d9b00(int64_t *param_1)

{
  int64_t lVar1;
  
  for (lVar1 = *param_1; lVar1 != param_1[1]; lVar1 = lVar1 + 0x38) {
    if (*(int64_t *)(lVar1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001803da303)
// WARNING: Removing unreachable block (ram,0x0001803da313)
// WARNING: Removing unreachable block (ram,0x0001803da308)
// WARNING: Removing unreachable block (ram,0x0001803da311)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d9b20(uint64_t *param_1,int param_2,char param_3,char param_4,char param_5)
void FUN_1803d9b20(uint64_t *param_1,int param_2,char param_3,char param_4,char param_5)

{
  float *pfVar1;
  int8_t auVar2 [16];
  char cVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  int32_t *puVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  int64_t lVar15;
  char cVar16;
  int64_t lVar17;
  uint64_t uVar18;
  int32_t *puVar19;
  int32_t *puVar20;
  int64_t *plVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  int iVar25;
  uint64_t *puVar26;
  int64_t lVar27;
  float *pfVar28;
  int64_t *plVar29;
  int64_t *plVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int8_t auStack_248 [32];
  char cStack_228;
  char cStack_227;
  char cStack_226;
  int iStack_224;
  int64_t *plStack_220;
  int iStack_218;
  int64_t *plStack_210;
  uint64_t uStack_208;
  float fStack_200;
  int32_t uStack_1fc;
  int iStack_1f8;
  int64_t lStack_1f0;
  int64_t lStack_1e8;
  int64_t *plStack_1d8;
  int64_t *plStack_1d0;
  int64_t *plStack_1c8;
  int32_t uStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  int64_t *plStack_1a8;
  int32_t uStack_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  int64_t *plStack_188;
  int32_t uStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  int32_t uStack_154;
  int32_t uStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  int64_t lStack_f8;
  int64_t lStack_f0;
  int64_t lStack_e8;
  uint uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  float afStack_c8 [4];
  char cStack_b8;
  char cStack_b7;
  int16_t uStack_b6;
  int32_t uStack_b4;
  float *pfStack_b0;
  int16_t uStack_a8;
  int16_t uStack_a6;
  int iStack_a4;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_78 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  plStack_198 = (int64_t *)0x0;
  plStack_190 = (int64_t *)0x0;
  plVar8 = (int64_t *)0x0;
  plStack_188 = (int64_t *)0x0;
  uStack_180 = 3;
  plStack_1b8 = (int64_t *)0x0;
  plStack_1b0 = (int64_t *)0x0;
  plVar9 = (int64_t *)0x0;
  plStack_1a8 = (int64_t *)0x0;
  uStack_1a0 = 3;
  plStack_1d8 = (int64_t *)0x0;
  plStack_1d0 = (int64_t *)0x0;
  plStack_1c8 = (int64_t *)0x0;
  uStack_1c0 = 3;
  uVar18 = param_1[0xc];
  lStack_1f0 = *(int64_t *)(uVar18 + 0x20);
  iStack_218 = 0;
  lVar27 = *(int64_t *)(lStack_1f0 + 12000);
  plVar14 = (int64_t *)0x0;
  plVar11 = (int64_t *)0x0;
  plStack_210 = (int64_t *)0x0;
  cStack_228 = param_4;
  cStack_226 = param_3;
  iStack_1f8 = param_2;
  if (*(int64_t *)(lStack_1f0 + 0x2ee8) - lVar27 >> 3 == 0) {
    plStack_220 = (int64_t *)0x0;
  }
  else {
    uStack_d0 = (int64_t *)0x0;
    plVar21 = (int64_t *)0x0;
    plStack_220 = (int64_t *)0x0;
    uStack_208 = (int64_t *)0x0;
    do {
      lStack_1e8 = *(int64_t *)(lVar27 + (int64_t)uStack_d0);
      if (*(int *)(lStack_1e8 + 0x130) == param_2) {
        if (plVar21 < plVar8) {
          plStack_190 = plVar21 + 1;
          *plVar21 = lStack_1e8;
        }
        else {
          lVar15 = (int64_t)plVar21 - (int64_t)plStack_198;
          lVar27 = lVar15 >> 3;
          if (lVar27 == 0) {
            lVar27 = 1;
LAB_1803d9c6c:
            plVar8 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar27 * 8,3);
          }
          else {
            lVar27 = lVar27 * 2;
            if (lVar27 != 0) goto LAB_1803d9c6c;
            plVar8 = (int64_t *)0x0;
          }
          if (plStack_198 != plStack_220) {
                    // WARNING: Subroutine does not return
            memmove(plVar8,plStack_198,lVar15);
          }
          *plVar8 = lStack_1e8;
          plStack_220 = plVar8 + 1;
          if (plStack_198 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plStack_198);
          }
          plStack_188 = plVar8 + lVar27;
          plVar9 = plStack_1a8;
          plStack_198 = plVar8;
          plStack_190 = plStack_220;
        }
        iStack_224 = 0;
        bVar5 = *(byte *)(lStack_1e8 + 0xa8);
        plStack_220 = plStack_190;
        if (bVar5 != 0) {
          plVar8 = (int64_t *)(lStack_1e8 + 0x60);
          plVar21 = plVar14;
          do {
            lVar27 = *plVar8;
            for (plVar11 = (int64_t *)param_1[4]; plVar11 != (int64_t *)param_1[5];
                plVar11 = plVar11 + 7) {
              plVar14 = plVar21;
              if (*plVar11 == lVar27) goto LAB_1803d9dce;
            }
            if (plVar21 < plVar9) {
              plVar14 = plVar21 + 1;
              *plVar21 = lVar27;
              plStack_1b0 = plVar14;
            }
            else {
              plStack_210 = (int64_t *)((int64_t)plVar21 - (int64_t)plStack_1b8);
              if ((int64_t)plStack_210 >> 3 == 0) {
                lVar15 = 1;
LAB_1803d9d65:
                plVar11 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar15 * 8,3);
              }
              else {
                lVar15 = ((int64_t)plStack_210 >> 3) * 2;
                if (lVar15 != 0) goto LAB_1803d9d65;
                plVar11 = (int64_t *)0x0;
              }
              if (plStack_1b8 != plVar21) {
                    // WARNING: Subroutine does not return
                memmove(plVar11,plStack_1b8,plStack_210);
              }
              *plVar11 = lVar27;
              plVar14 = plVar11 + 1;
              if (plStack_1b8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              plVar9 = plVar11 + lVar15;
              plStack_1b8 = plVar11;
              plStack_1b0 = plVar14;
              plStack_1a8 = plVar9;
            }
LAB_1803d9dce:
            iStack_224 = iStack_224 + 1;
            plVar8 = plVar8 + 1;
            bVar5 = *(byte *)(lStack_1e8 + 0xa8);
            plVar21 = plVar14;
            plVar11 = uStack_208;
            plStack_210 = plVar14;
          } while (iStack_224 < (int)(uint)bVar5);
        }
        iStack_224 = 0;
        plVar21 = plStack_220;
        plVar8 = plStack_188;
        param_2 = iStack_1f8;
        if (bVar5 != 0) {
          plVar29 = (int64_t *)(lStack_1e8 + 0x80);
          plVar30 = plVar11;
          do {
            lVar27 = *plVar29;
            for (plVar9 = (int64_t *)param_1[8]; plVar9 != (int64_t *)param_1[9];
                plVar9 = plVar9 + 6) {
              plVar11 = plVar30;
              if (*plVar9 == lVar27) goto LAB_1803d9ee5;
            }
            if (plVar30 < plStack_1c8) {
              plVar11 = plVar30 + 1;
              *plVar30 = lVar27;
              plStack_1d0 = plVar11;
            }
            else {
              uStack_208 = (int64_t *)((int64_t)plVar30 - (int64_t)plStack_1d8);
              if ((int64_t)uStack_208 >> 3 == 0) {
                lVar15 = 1;
LAB_1803d9e79:
                plVar9 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,lVar15 * 8,3);
              }
              else {
                lVar15 = ((int64_t)uStack_208 >> 3) * 2;
                if (lVar15 != 0) goto LAB_1803d9e79;
                plVar9 = (int64_t *)0x0;
              }
              if (plStack_1d8 != plVar30) {
                    // WARNING: Subroutine does not return
                memmove(plVar9,plStack_1d8,uStack_208);
              }
              *plVar9 = lVar27;
              plVar11 = plVar9 + 1;
              if (plStack_1d8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              plStack_1c8 = plVar9 + lVar15;
              plStack_1d8 = plVar9;
              plStack_1d0 = plVar11;
            }
LAB_1803d9ee5:
            iStack_224 = iStack_224 + 1;
            plVar29 = plVar29 + 1;
            plVar21 = plStack_220;
            plVar9 = plStack_1a8;
            plVar8 = plStack_188;
            plVar14 = plStack_210;
            plVar30 = plVar11;
            uStack_208 = plVar11;
            param_2 = iStack_1f8;
          } while (iStack_224 < (int)(uint)*(byte *)(lStack_1e8 + 0xa8));
        }
      }
      iStack_218 = iStack_218 + 1;
      uStack_d0 = uStack_d0 + 1;
      lVar27 = *(int64_t *)(lStack_1f0 + 12000);
    } while ((uint64_t)(int64_t)iStack_218 <
             (uint64_t)(*(int64_t *)(lStack_1f0 + 0x2ee8) - lVar27 >> 3));
    uVar18 = param_1[0xc];
  }
  if ((*(int64_t *)(uVar18 + 0x168) == 0) ||
     (*(int64_t *)(*(int64_t *)(uVar18 + 0x168) + 0x2d0) == 0)) {
    cStack_227 = '\0';
  }
  else {
    cStack_227 = '\x01';
  }
  cVar16 = cStack_227;
  lVar27 = 0x2aaaaaaaaaaaaaab;
  plVar9 = plStack_1d8;
  plVar8 = plStack_1b8;
  for (uStack_208 = plStack_1d8; plVar21 = plStack_220, plStack_1d8 = plVar9, plStack_1b8 = plVar8,
      plVar29 = plStack_198, plVar30 = plVar8, uStack_208 != plVar11; uStack_208 = uStack_208 + 1) {
    pfStack_b0 = (float *)*uStack_208;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    uVar18 = param_1[0xc];
    if (param_5 == '\0') {
      if (cVar16 == '\0') {
        uStack_d0 = *(int64_t **)pfStack_b0;
        afStack_c8[0] = pfStack_b0[2];
        afStack_c8[1] = 3.4028235e+38;
        uStack_98 = *(int64_t *)pfStack_b0;
        uStack_90 = CONCAT44(0x7f7fffff,pfStack_b0[2]);
      }
      else {
        uStack_178 = *(int32_t *)(uVar18 + 0x30);
        uStack_174 = *(int32_t *)(uVar18 + 0x34);
        uStack_170 = *(int32_t *)(uVar18 + 0x38);
        uStack_168 = *(int32_t *)(uVar18 + 0x40);
        uStack_164 = *(int32_t *)(uVar18 + 0x44);
        uStack_160 = *(int32_t *)(uVar18 + 0x48);
        uStack_158 = *(int32_t *)(uVar18 + 0x50);
        uStack_154 = *(int32_t *)(uVar18 + 0x54);
        uStack_150 = *(int32_t *)(uVar18 + 0x58);
        uStack_148 = *(int32_t *)(uVar18 + 0x60);
        uStack_144 = *(int32_t *)(uVar18 + 100);
        uStack_140 = *(int32_t *)(uVar18 + 0x68);
        fVar33 = pfStack_b0[2];
        fVar32 = pfStack_b0[1];
        fVar34 = *pfStack_b0;
        uStack_16c = 0;
        uStack_15c = 0;
        uStack_14c = 0;
        uStack_13c = 0x3f800000;
        FUN_180084760(&uStack_178);
        uStack_98 = CONCAT44(fVar34 * fStack_134 + fVar32 * fStack_124 + fVar33 * fStack_114 +
                             fStack_104,
                             fVar34 * fStack_138 + fVar32 * fStack_128 + fVar33 * fStack_118 +
                             fStack_108);
        uStack_90 = CONCAT44(fVar34 * fStack_12c + fVar32 * fStack_11c + fVar33 * fStack_10c +
                             fStack_fc,
                             fVar34 * fStack_130 + fVar32 * fStack_120 + fVar33 * fStack_110 +
                             fStack_100);
      }
    }
    else {
      fVar35 = pfStack_b0[2] - *(float *)(uVar18 + 0x68);
      fVar32 = pfStack_b0[1] - *(float *)(uVar18 + 100);
      fVar34 = *pfStack_b0 - *(float *)(uVar18 + 0x60);
      fVar33 = *(float *)(uVar18 + 0x5c);
      uStack_98 = CONCAT44(fVar34 * *(float *)(uVar18 + 0x40) + fVar32 * *(float *)(uVar18 + 0x44) +
                           fVar35 * *(float *)(uVar18 + 0x48),
                           fVar34 * *(float *)(uVar18 + 0x30) + fVar32 * *(float *)(uVar18 + 0x34) +
                           fVar35 * *(float *)(uVar18 + 0x38));
      uStack_90 = CONCAT44(fVar34 * fVar33 + fVar32 * fVar33 + fVar35 * fVar33,
                           fVar34 * *(float *)(uVar18 + 0x50) + fVar32 * *(float *)(uVar18 + 0x54) +
                           fVar35 * *(float *)(uVar18 + 0x58));
    }
    if ((*(int64_t *)(uVar18 + 0x168) != 0) &&
       (lVar15 = *(int64_t *)(*(int64_t *)(uVar18 + 0x168) + 0x2d0), lVar15 != 0)) {
      lVar17 = SUB168(SEXT816(lVar27) *
                      SEXT816(*(int64_t *)(lVar15 + 0x48) - *(int64_t *)(lVar15 + 0x40)),8);
      lVar17 = (lVar17 >> 3) - (lVar17 >> 0x3f);
      uStack_e0 = *(uint *)(lVar15 + 0x58);
      if (lVar17 == 0) {
        lStack_f8 = 0;
      }
      else {
        lStack_f8 = FUN_18062b420(system_memory_pool_ptr,lVar17 * 0x30,uStack_e0 & 0xff);
        lVar27 = 0x2aaaaaaaaaaaaaab;
      }
      lStack_e8 = lVar17 * 0x30 + lStack_f8;
      lVar17 = *(int64_t *)(lVar15 + 0x40);
      lStack_f0 = lStack_f8;
      if (lVar17 != *(int64_t *)(lVar15 + 0x48)) {
                    // WARNING: Subroutine does not return
        memmove(lStack_f8,lVar17,*(int64_t *)(lVar15 + 0x48) - lVar17);
      }
      if (lStack_f8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStack_f8);
      }
    }
    puVar22 = (uint64_t *)param_1[9];
    if (puVar22 < (uint64_t *)param_1[10]) {
      param_1[9] = (uint64_t)(puVar22 + 6);
      *puVar22 = pfStack_b0;
      puVar22[1] = CONCAT44(iStack_a4,CONCAT22(uStack_a6,uStack_a8));
      puVar22[2] = uStack_a0;
      puVar22[3] = uStack_98;
      *(int32_t *)(puVar22 + 4) = (int32_t)uStack_90;
      *(int32_t *)((int64_t)puVar22 + 0x24) = uStack_90._4_4_;
      *(int32_t *)(puVar22 + 5) = (int32_t)uStack_88;
      *(int32_t *)((int64_t)puVar22 + 0x2c) = uStack_88._4_4_;
    }
    else {
      puVar26 = (uint64_t *)param_1[8];
      lVar15 = SUB168(SEXT816(lVar27) * SEXT816((int64_t)puVar22 - (int64_t)puVar26),8);
      lVar15 = (lVar15 >> 3) - (lVar15 >> 0x3f);
      if (lVar15 == 0) {
        lVar15 = 1;
LAB_1803da39b:
        puVar10 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar15 * 0x30,(char)param_1[0xb]);
        puVar22 = (uint64_t *)param_1[9];
        puVar26 = (uint64_t *)param_1[8];
        lVar27 = 0x2aaaaaaaaaaaaaab;
      }
      else {
        lVar15 = lVar15 * 2;
        if (lVar15 != 0) goto LAB_1803da39b;
        puVar10 = (uint64_t *)0x0;
      }
      if (puVar26 != puVar22) {
                    // WARNING: Subroutine does not return
        memmove(puVar10,puVar26,(int64_t)puVar22 - (int64_t)puVar26);
      }
      *puVar10 = pfStack_b0;
      puVar10[1] = CONCAT44(iStack_a4,CONCAT22(uStack_a6,uStack_a8));
      *(int32_t *)(puVar10 + 2) = (int32_t)uStack_a0;
      *(int32_t *)((int64_t)puVar10 + 0x14) = uStack_a0._4_4_;
      *(int32_t *)(puVar10 + 3) = (int32_t)uStack_98;
      *(int32_t *)((int64_t)puVar10 + 0x1c) = uStack_98._4_4_;
      *(int32_t *)(puVar10 + 4) = (int32_t)uStack_90;
      *(int32_t *)((int64_t)puVar10 + 0x24) = uStack_90._4_4_;
      *(int32_t *)(puVar10 + 5) = (int32_t)uStack_88;
      *(int32_t *)((int64_t)puVar10 + 0x2c) = uStack_88._4_4_;
      if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_1[8] = (uint64_t)puVar10;
      param_1[9] = (uint64_t)(puVar10 + 6);
      param_1[10] = (uint64_t)(puVar10 + lVar15 * 6);
    }
    plVar14 = plStack_210;
    plVar9 = plStack_1d8;
    plVar8 = plStack_1b8;
  }
  for (; plStack_220 = plVar21, plStack_198 = plVar29, plVar30 != plVar14; plVar30 = plVar30 + 1) {
    pfStack_b0 = (float *)*plVar30;
    uStack_208 = &uStack_98;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 3;
    uStack_a0 = uStack_a0 & 0xffffffffffff0000;
    uVar18 = param_1[8];
    auVar2 = SEXT816(lVar27) * SEXT816((int64_t)(param_1[9] - uVar18));
    iVar25 = ((int)(auVar2._8_8_ >> 3) - (auVar2._12_4_ >> 0x1f)) + -1;
    uStack_a8 = 0xffff;
    uStack_a6 = 0xffff;
    uVar23 = (uint64_t)iVar25;
    if (-1 < iVar25) {
      plVar11 = (int64_t *)(uVar23 * 0x30 + uVar18);
      uVar13 = uVar23;
      uVar24 = uVar23;
      do {
        if (*plVar11 == *(int64_t *)pfStack_b0) {
          uStack_a8 = (int16_t)uVar24;
          uStack_a6 = (int16_t)(uVar24 >> 0x10);
          break;
        }
        uVar24 = (uint64_t)((int)uVar24 - 1);
        plVar11 = plVar11 + -6;
        uVar13 = uVar13 - 1;
      } while (-1 < (int64_t)uVar13);
    }
    iStack_a4 = -1;
    iVar4 = iStack_a4;
    if (-1 < (int64_t)uVar23) {
      plVar11 = (int64_t *)(uVar23 * 0x30 + uVar18);
      do {
        iVar4 = iVar25;
        if (*plVar11 == *(int64_t *)(pfStack_b0 + 2)) break;
        iVar25 = iVar25 + -1;
        plVar11 = plVar11 + -6;
        uVar23 = uVar23 - 1;
        iVar4 = iStack_a4;
      } while (-1 < (int64_t)uVar23);
    }
    iStack_a4 = iVar4;
    if (param_1[5] < param_1[6]) {
      param_1[5] = param_1[5] + 0x38;
      FUN_1803dc0a0();
    }
    else {
      FUN_1803dc170(param_1 + 4);
    }
    uStack_208 = &uStack_98;
    if (uStack_98 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar27 = 0x2aaaaaaaaaaaaaab;
    uStack_98 = 0;
    plVar21 = plStack_220;
    plVar29 = plStack_198;
  }
  if (plVar29 != plVar21) {
    bVar5 = cStack_228 * '\x02';
    do {
      plVar9 = (int64_t *)*plVar29;
      cStack_b8 = cStack_226;
      cStack_b7 = cStack_228;
      *(byte *)((int64_t)plVar9 + 0x139) = *(byte *)((int64_t)plVar9 + 0x139) & 0xfd | bVar5 | 4;
      uStack_d0 = plVar9;
      if (cStack_228 != '\0') {
        fVar33 = 0.0;
        fStack_200 = 0.0;
        if (*(byte *)(plVar9 + 0x15) != 0) {
          plVar14 = plVar9 + 0x10;
          uVar18 = (uint64_t)*(byte *)(plVar9 + 0x15);
          do {
            fVar34 = *(float *)((int64_t)plVar9 + 0xec) - ((float *)*plVar14)[1];
            fVar32 = *(float *)(plVar9 + 0x1d) - *(float *)*plVar14;
            fVar32 = SQRT(fVar32 * fVar32 + fVar34 * fVar34);
            if (fVar33 < fVar32) {
              fVar33 = fVar32;
            }
            plVar14 = plVar14 + 1;
            uVar18 = uVar18 - 1;
            fStack_200 = fVar33;
          } while (uVar18 != 0);
        }
        puVar20 = *(int32_t **)(lStack_1f0 + 0x2f68);
        uStack_208 = plVar9;
        if (puVar20 < *(int32_t **)(lStack_1f0 + 0x2f70)) {
          *(int32_t **)(lStack_1f0 + 0x2f68) = puVar20 + 4;
          uStack_208._0_4_ = SUB84(plVar9,0);
          uStack_208._4_4_ = (int32_t)((uint64_t)plVar9 >> 0x20);
          *puVar20 = (int32_t)uStack_208;
          puVar20[1] = uStack_208._4_4_;
          puVar20[2] = fStack_200;
          puVar20[3] = uStack_1fc;
        }
        else {
          puVar19 = *(int32_t **)(lStack_1f0 + 0x2f60);
          lVar27 = (int64_t)puVar20 - (int64_t)puVar19 >> 4;
          if (lVar27 == 0) {
            lVar27 = 1;
LAB_1803da700:
            puVar12 = (int32_t *)
                      FUN_18062b420(system_memory_pool_ptr,lVar27 << 4,*(int8_t *)(lStack_1f0 + 0x2f78))
            ;
            puVar20 = *(int32_t **)(lStack_1f0 + 0x2f68);
            puVar19 = *(int32_t **)(lStack_1f0 + 0x2f60);
          }
          else {
            lVar27 = lVar27 * 2;
            if (lVar27 != 0) goto LAB_1803da700;
            puVar12 = (int32_t *)0x0;
          }
          if (puVar19 != puVar20) {
                    // WARNING: Subroutine does not return
            memmove(puVar12,puVar19,(int64_t)puVar20 - (int64_t)puVar19);
          }
          *puVar12 = (int32_t)uStack_208;
          puVar12[1] = uStack_208._4_4_;
          puVar12[2] = fStack_200;
          puVar12[3] = uStack_1fc;
          if (*(int64_t *)(lStack_1f0 + 0x2f60) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(int32_t **)(lStack_1f0 + 0x2f60) = puVar12;
          *(int32_t **)(lStack_1f0 + 0x2f68) = puVar12 + 4;
          *(int32_t **)(lStack_1f0 + 0x2f70) = puVar12 + lVar27 * 4;
          plVar21 = plStack_220;
        }
      }
      plVar9[0x23] = 0;
      if (cStack_226 != '\0') {
        bVar6 = *(byte *)(plVar9 + 0x15);
        uVar18 = 0;
        if (bVar6 == 4) {
          plVar14 = plVar9 + 0xc;
          bVar31 = *(char *)(*plVar14 + 0x20) == '\x02';
          cVar16 = bVar31 + '\x01';
          if (*(char *)(plVar9[0xd] + 0x20) != '\x02') {
            cVar16 = bVar31;
          }
          cVar3 = cVar16 + '\x01';
          if (*(char *)(plVar9[0xe] + 0x20) != '\x02') {
            cVar3 = cVar16;
          }
          uVar18 = 0;
          cVar16 = cVar3 + '\x01';
          if (*(char *)(plVar9[0xf] + 0x20) != '\x02') {
            cVar16 = cVar3;
          }
          if (cVar16 == '\x01') {
            lVar27 = 0;
            do {
              if (*(char *)(*plVar14 + 0x20) == '\x02') {
                uVar7 = (int)uVar18 + 2U & 0x80000003;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                }
                uVar18 = plVar9[(int64_t)(int)uVar7 + 0xc];
                plVar9[0x23] = uVar18;
                goto LAB_1803da850;
              }
              uVar18 = (uint64_t)((int)uVar18 + 1);
              lVar27 = lVar27 + 1;
              plVar14 = plVar14 + 1;
            } while (lVar27 < 4);
            uVar18 = plVar9[0x23];
          }
        }
LAB_1803da850:
        if ((uVar18 == 0) && (fVar33 = -1.0, bVar6 != 0)) {
          plVar14 = plVar9 + 0xc;
          uVar18 = (uint64_t)bVar6;
          do {
            puVar22 = (uint64_t *)*plVar14;
            if (*(char *)(puVar22 + 4) == '\x01') {
              pfVar28 = (float *)*puVar22;
              pfVar1 = (float *)puVar22[1];
              fVar32 = (*pfVar1 - *pfVar28) * (*pfVar1 - *pfVar28) +
                       (pfVar1[1] - pfVar28[1]) * (pfVar1[1] - pfVar28[1]) +
                       (pfVar1[2] - pfVar28[2]) * (pfVar1[2] - pfVar28[2]);
              if (fVar33 < fVar32) {
                plVar9[0x23] = (int64_t)puVar22;
                fVar33 = fVar32;
              }
            }
            plVar14 = plVar14 + 1;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      iVar25 = 0;
      bVar6 = *(byte *)(plVar9 + 0x15);
      if (bVar6 != 0) {
        pfVar28 = afStack_c8;
        plVar14 = plVar9 + 0xc;
        do {
          lVar27 = *plVar14;
          *pfVar28 = -NAN;
          uVar18 = param_1[4];
          fVar33 = (float)((int)((int64_t)(param_1[5] - uVar18) / 0x38) + -1);
          lVar15 = (int64_t)(int)fVar33;
          if (-1 < (int)fVar33) {
            plVar11 = (int64_t *)(lVar15 * 0x38 + uVar18);
            do {
              if (*plVar11 == lVar27) {
                lVar27 = (int64_t)(int)fVar33 * 0x38;
                if (*(int64_t *)(uVar18 + lVar27) == plVar9[0x23]) {
                  *(int8_t *)(uVar18 + 0x10 + lVar27) = 1;
                  *(int8_t *)
                   (param_1[8] + 8 + (int64_t)*(int *)(param_1[4] + 8 + lVar27) * 0x30) = 1;
                  *(int8_t *)
                   (param_1[8] + 8 + (int64_t)*(int *)(param_1[4] + 0xc + lVar27) * 0x30) = 1;
                }
                *pfVar28 = fVar33;
                break;
              }
              fVar33 = (float)((int)fVar33 + -1);
              plVar11 = plVar11 + -7;
              lVar15 = lVar15 + -1;
            } while (-1 < lVar15);
          }
          iVar25 = iVar25 + 1;
          plVar14 = plVar14 + 1;
          pfVar28 = pfVar28 + 1;
          bVar6 = *(byte *)(plVar9 + 0x15);
          plVar21 = plStack_220;
        } while (iVar25 < (int)(uint)bVar6);
      }
      if ((cStack_228 != '\0') && (iVar25 = 0, bVar6 != 0)) {
        pfVar28 = afStack_c8;
        do {
          lVar27 = (int64_t)(int)*pfVar28 * 0x38;
          *(int8_t *)(param_1[4] + 0x11 + lVar27) = 1;
          *(int8_t *)(param_1[8] + 9 + (int64_t)*(int *)(param_1[4] + 8 + lVar27) * 0x30) = 1;
          *(int8_t *)(param_1[8] + 9 + (int64_t)*(int *)(lVar27 + 0xc + param_1[4]) * 0x30) = 1
          ;
          iVar25 = iVar25 + 1;
          pfVar28 = pfVar28 + 1;
        } while (iVar25 < (int)(uint)*(byte *)(plVar9 + 0x15));
      }
      puVar20 = (int32_t *)param_1[1];
      if (puVar20 < (int32_t *)param_1[2]) {
        param_1[1] = (uint64_t)(puVar20 + 8);
        *puVar20 = (int32_t)uStack_d0;
        puVar20[1] = uStack_d0._4_4_;
        puVar20[2] = afStack_c8[0];
        puVar20[3] = afStack_c8[1];
        *(uint64_t *)(puVar20 + 4) = CONCAT44(afStack_c8[3],afStack_c8[2]);
        *(uint64_t *)(puVar20 + 6) =
             CONCAT44(uStack_b4,CONCAT22(uStack_b6,CONCAT11(cStack_b7,cStack_b8)));
      }
      else {
        puVar19 = (int32_t *)*param_1;
        lVar27 = (int64_t)puVar20 - (int64_t)puVar19 >> 5;
        if (lVar27 == 0) {
          lVar27 = 1;
LAB_1803daa70:
          puVar12 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,lVar27 << 5,(char)param_1[3]);
          puVar20 = (int32_t *)param_1[1];
          puVar19 = (int32_t *)*param_1;
        }
        else {
          lVar27 = lVar27 * 2;
          if (lVar27 != 0) goto LAB_1803daa70;
          puVar12 = (int32_t *)0x0;
        }
        if (puVar19 != puVar20) {
                    // WARNING: Subroutine does not return
          memmove(puVar12,puVar19,(int64_t)puVar20 - (int64_t)puVar19);
        }
        *puVar12 = (int32_t)uStack_d0;
        puVar12[1] = uStack_d0._4_4_;
        puVar12[2] = afStack_c8[0];
        puVar12[3] = afStack_c8[1];
        puVar12[4] = afStack_c8[2];
        puVar12[5] = afStack_c8[3];
        puVar12[6] = CONCAT22(uStack_b6,CONCAT11(cStack_b7,cStack_b8));
        puVar12[7] = uStack_b4;
        if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *param_1 = (uint64_t)puVar12;
        param_1[1] = (uint64_t)(puVar12 + 8);
        param_1[2] = (uint64_t)(puVar12 + lVar27 * 8);
      }
      plVar29 = plVar29 + 1;
      plVar8 = plStack_1b8;
      plVar9 = plStack_1d8;
    } while (plVar29 != plVar21);
  }
  plVar14 = plStack_198;
  uVar18 = param_1[0xc];
  *(byte *)(uVar18 + 0x2e8) = *(byte *)(uVar18 + 0x2e8) | 0x10;
  if (((*(uint *)(uVar18 + 0x2ac) & 0x10000000) == 0) && (*(int64_t *)(uVar18 + 0x20) != 0)) {
    FUN_1801b01f0();
  }
  FUN_1803daba0(param_1);
  if (plVar9 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar9);
  }
  if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar8);
  }
  if (plVar14 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_78 ^ (uint64_t)auStack_248);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar14);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




