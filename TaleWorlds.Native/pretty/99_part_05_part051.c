#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part051.c - 3 个函数

// 函数: void FUN_1802fa300(int64_t param_1,int64_t param_2,uint64_t *param_3)
void FUN_1802fa300(int64_t param_1,int64_t param_2,uint64_t *param_3)

{
  uint uVar1;
  uint *puVar2;
  int64_t *plVar3;
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
  uint64_t uVar15;
  uint64_t *puVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  int64_t lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int8_t auStack_218 [32];
  uint64_t *puStack_1f8;
  int64_t lStack_1e8;
  uint64_t uStack_1e0;
  float *pfStack_1d8;
  uint64_t *puStack_1d0;
  int64_t lStack_1c8;
  int64_t lStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
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
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  uint64_t uStack_98;
  
  uStack_98 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_218;
  uStack_188 = *param_3;
  uStack_180 = param_3[1];
  uStack_178 = param_3[2];
  uStack_170 = param_3[3];
  uStack_1e0 = *(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x20);
  pfStack_1d8 = (float *)(*(int64_t *)(param_1 + 0x10) + 0x70);
  uStack_168 = param_3[4];
  uStack_160 = param_3[5];
  uStack_148 = param_3[8];
  uStack_140 = param_3[9];
  uStack_158 = param_3[6];
  uStack_150 = param_3[7];
  uStack_128 = *(int32_t *)(param_3 + 0xc);
  uStack_124 = *(int32_t *)((int64_t)param_3 + 100);
  uStack_120 = *(int32_t *)(param_3 + 0xd);
  uStack_11c = *(int32_t *)((int64_t)param_3 + 0x6c);
  uStack_138 = param_3[10];
  uStack_130 = param_3[0xb];
  puStack_1d0 = param_3;
  lStack_1c8 = param_1;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lStack_1c0 = (int64_t)
                 (int)(*(int64_t *)(param_1 + 0x148) - *(int64_t *)(param_1 + 0x140) >> 3);
    if (0 < lStack_1c0) {
      lStack_1e8 = 0;
      do {
        pfVar18 = pfStack_1d8;
        lVar20 = 0;
        puVar2 = *(uint **)(*(int64_t *)(param_1 + 0x140) + lStack_1e8 * 8);
        do {
          LOCK();
          uVar1 = *puVar2;
          *puVar2 = *puVar2 | 1;
          UNLOCK();
        } while ((uVar1 & 1) != 0);
        uStack_118 = puVar2[1];
        uStack_114 = puVar2[2];
        uStack_110 = puVar2[3];
        uStack_10c = puVar2[4];
        fVar24 = (float)puVar2[5];
        fVar21 = (float)puVar2[6];
        fVar22 = (float)puVar2[7];
        uStack_fc = puVar2[8];
        *puVar2 = 0;
        fStack_108 = fVar24;
        fStack_104 = fVar21;
        fStack_100 = fVar22;
        uStack_b8 = uStack_118;
        uStack_b4 = uStack_114;
        uStack_b0 = uStack_110;
        uStack_ac = uStack_10c;
        fStack_a8 = fVar24;
        fStack_a4 = fVar21;
        fStack_a0 = fVar22;
        uStack_9c = uStack_fc;
        FUN_18063b5f0(&fStack_1b8,&uStack_118);
        puVar16 = puStack_1d0;
        uVar15 = uStack_1e0;
        fVar23 = *pfVar18;
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[2];
        fVar6 = pfVar18[3];
        fVar7 = pfVar18[4];
        fVar8 = pfVar18[5];
        fVar9 = pfVar18[6];
        fVar10 = pfVar18[7];
        fVar11 = pfVar18[8];
        fVar12 = pfVar18[9];
        fVar13 = pfVar18[10];
        fVar14 = pfVar18[0xb];
        fStack_f8 = fStack_1b4 * fVar7 + fStack_1b8 * fVar23 + fStack_1b0 * fVar11;
        fStack_f4 = fStack_1b4 * fVar8 + fStack_1b8 * fVar4 + fStack_1b0 * fVar12;
        fStack_f0 = fStack_1b4 * fVar9 + fStack_1b8 * fVar5 + fStack_1b0 * fVar13;
        fStack_ec = fStack_1b4 * fVar10 + fStack_1b8 * fVar6 + fStack_1b0 * fVar14;
        fStack_e8 = fStack_1a4 * fVar7 + fStack_1a8 * fVar23 + fStack_1a0 * fVar11;
        fStack_e4 = fStack_1a4 * fVar8 + fStack_1a8 * fVar4 + fStack_1a0 * fVar12;
        fStack_e0 = fStack_1a4 * fVar9 + fStack_1a8 * fVar5 + fStack_1a0 * fVar13;
        fStack_dc = fStack_1a4 * fVar10 + fStack_1a8 * fVar6 + fStack_1a0 * fVar14;
        fStack_d8 = fStack_194 * fVar7 + fStack_198 * fVar23 + fStack_190 * fVar11;
        fStack_d4 = fStack_194 * fVar8 + fStack_198 * fVar4 + fStack_190 * fVar12;
        fStack_d0 = fStack_194 * fVar9 + fStack_198 * fVar5 + fStack_190 * fVar13;
        fStack_cc = fStack_194 * fVar10 + fStack_198 * fVar6 + fStack_190 * fVar14;
        fStack_c8 = fVar24 * fVar23 + fVar21 * fVar7 + fVar22 * fVar11 + pfVar18[0xc];
        fStack_c4 = fVar24 * fVar4 + fVar21 * fVar8 + fVar22 * fVar12 + pfVar18[0xd];
        fStack_c0 = fVar24 * fVar5 + fVar21 * fVar9 + fVar22 * fVar13 + pfVar18[0xe];
        fStack_bc = fVar24 * fVar6 + fVar21 * fVar10 + fVar22 * fVar14 + pfVar18[0xf];
        fVar21 = fStack_f8 * fStack_f8 + fStack_f4 * fStack_f4 + fStack_f0 * fStack_f0;
        fVar22 = fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0;
        fVar24 = fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0;
        if (fVar21 <= fVar22) {
          if (fVar24 <= fVar22) {
            fVar24 = fVar22;
          }
        }
        else if (fVar24 <= fVar21) {
          fVar24 = fVar21;
        }
        iVar17 = (int)(*(int64_t *)(puVar2 + 0x2e) - *(int64_t *)(puVar2 + 0x2c) >> 3);
        if (0 < iVar17) {
          do {
            plVar3 = *(int64_t **)(*(int64_t *)(puVar2 + 0x2c) + lVar20 * 8);
            if (*(float *)(param_2 + 0x174) <= 0.0) {
LAB_1802fa61b:
              puStack_1f8 = puVar16;
              (**(code **)(*plVar3 + 0x1c8))(plVar3,param_2,uVar15,&fStack_f8);
            }
            else {
              pfVar18 = (float *)(**(code **)(*plVar3 + 0x198))(plVar3);
              fVar22 = pfVar18[4] - *pfVar18;
              fVar23 = pfVar18[5] - pfVar18[1];
              fVar21 = pfVar18[6] - pfVar18[2];
              if (fVar23 <= fVar22) {
                if (fVar23 <= fVar21) {
                  fVar21 = fVar23;
                }
              }
              else if (fVar22 <= fVar21) {
                fVar21 = fVar22;
              }
              if (*(float *)(param_2 + 0x174) <= fVar21 * fVar24) goto LAB_1802fa61b;
            }
            lVar20 = lVar20 + 1;
            param_1 = lStack_1c8;
          } while (lVar20 < iVar17);
        }
        lStack_1e8 = lStack_1e8 + 1;
      } while (lStack_1e8 < lStack_1c0);
    }
    pfVar18 = pfStack_1d8;
    uVar15 = uStack_1e0;
    lVar20 = 0;
    fVar21 = *pfStack_1d8 * *pfStack_1d8 + pfStack_1d8[1] * pfStack_1d8[1] +
             pfStack_1d8[2] * pfStack_1d8[2];
    fVar22 = pfStack_1d8[4] * pfStack_1d8[4] + pfStack_1d8[5] * pfStack_1d8[5] +
             pfStack_1d8[6] * pfStack_1d8[6];
    fVar24 = pfStack_1d8[8] * pfStack_1d8[8] + pfStack_1d8[9] * pfStack_1d8[9] +
             pfStack_1d8[10] * pfStack_1d8[10];
    if (fVar21 <= fVar22) {
      if (fVar24 <= fVar22) {
        fVar24 = fVar22;
      }
    }
    else if (fVar24 <= fVar21) {
      fVar24 = fVar21;
    }
    uStack_170 = *(uint64_t *)(param_1 + 0x44);
    uStack_180._0_5_ = CONCAT14(1,(int32_t)uStack_180);
    uStack_168 = CONCAT44(CONCAT31(uStack_168._5_3_,*(int8_t *)(param_1 + 0x20)),
                          *(int32_t *)(param_1 + 0x44));
    uStack_160 = CONCAT44(*(int32_t *)(param_1 + 0x168),*(int32_t *)(param_1 + 0x170));
    iVar17 = (int)(*(int64_t *)(param_1 + 0x1b0) - *(int64_t *)(param_1 + 0x1a8) >> 3);
    if (0 < iVar17) {
      do {
        if (*(float *)(param_2 + 0x174) <= 0.0) {
LAB_1802fa7a8:
          puStack_1f8 = &uStack_188;
          plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x1a8) + lVar20 * 8);
          (**(code **)(*plVar3 + 0x1c8))(plVar3,param_2,uVar15,pfVar18);
        }
        else {
          pfVar19 = (float *)(**(code **)(**(int64_t **)
                                            (*(int64_t *)(param_1 + 0x1a8) + lVar20 * 8) + 0x198))
                                       ();
          fVar22 = pfVar19[4] - *pfVar19;
          fVar23 = pfVar19[5] - pfVar19[1];
          fVar21 = pfVar19[6] - pfVar19[2];
          if (fVar23 <= fVar22) {
            if (fVar23 <= fVar21) {
              fVar21 = fVar23;
            }
          }
          else if (fVar22 <= fVar21) {
            fVar21 = fVar22;
          }
          if (*(float *)(param_2 + 0x174) <= fVar21 * fVar24) goto LAB_1802fa7a8;
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar17);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_98 ^ (uint64_t)auStack_218);
}






// 函数: void FUN_1802fa3a5(void)
void FUN_1802fa3a5(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int64_t *plVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
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
  int iVar22;
  int64_t in_RAX;
  float *pfVar23;
  uint *unaff_RBP;
  uint64_t unaff_RSI;
  float *unaff_RDI;
  int64_t lVar24;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar25;
  float fVar26;
  float fVar27;
  int32_t unaff_XMM6_Da;
  float fVar28;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar29;
  int32_t unaff_XMM7_Db;
  float fVar30;
  int32_t unaff_XMM7_Dc;
  float fVar31;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar32;
  int32_t unaff_XMM8_Db;
  float fVar33;
  int32_t unaff_XMM8_Dc;
  float fVar34;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar35;
  int32_t unaff_XMM9_Db;
  float fVar36;
  int32_t unaff_XMM9_Dc;
  float fVar37;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int64_t lStack0000000000000030;
  float *in_stack_00000040;
  int64_t in_stack_00000050;
  int64_t lStack0000000000000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  lStack0000000000000058 = (int64_t)(int)(in_RAX >> 3);
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  if (0 < lStack0000000000000058) {
    *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
    *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
    *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
    *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
    *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
    *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
    *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
    *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
    *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
    *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
    *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
    *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
    *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
    lStack0000000000000030 = 0;
    do {
      lVar24 = 0;
      puVar3 = *(uint **)(*(int64_t *)(unaff_R13 + 0x140) + lStack0000000000000030 * 8);
      do {
        LOCK();
        uVar1 = *puVar3;
        *puVar3 = *puVar3 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uVar1 = puVar3[1];
      uVar2 = puVar3[2];
      uVar5 = puVar3[3];
      uVar6 = puVar3[4];
      fVar27 = (float)puVar3[5];
      fVar7 = (float)puVar3[6];
      fVar8 = (float)puVar3[7];
      uVar9 = puVar3[8];
      unaff_RBP[0x18] = uVar1;
      unaff_RBP[0x19] = uVar2;
      unaff_RBP[0x1a] = uVar5;
      unaff_RBP[0x1b] = uVar6;
      unaff_RBP[0x1c] = (uint)fVar27;
      unaff_RBP[0x1d] = (uint)fVar7;
      unaff_RBP[0x1e] = (uint)fVar8;
      unaff_RBP[0x1f] = uVar9;
      *puVar3 = 0;
      *unaff_RBP = uVar1;
      unaff_RBP[1] = uVar2;
      unaff_RBP[2] = uVar5;
      unaff_RBP[3] = uVar6;
      unaff_RBP[4] = (uint)fVar27;
      unaff_RBP[5] = (uint)fVar7;
      unaff_RBP[6] = (uint)fVar8;
      unaff_RBP[7] = uVar9;
      FUN_18063b5f0(&stack0x00000060);
      fVar10 = *unaff_RDI;
      fVar11 = unaff_RDI[1];
      fVar12 = unaff_RDI[2];
      fVar13 = unaff_RDI[3];
      fVar14 = unaff_RDI[4];
      fVar15 = unaff_RDI[5];
      fVar16 = unaff_RDI[6];
      fVar17 = unaff_RDI[7];
      fVar18 = unaff_RDI[8];
      fVar19 = unaff_RDI[9];
      fVar20 = unaff_RDI[10];
      fVar21 = unaff_RDI[0xb];
      fVar28 = (float)unaff_RBP[-0x1f];
      fVar35 = fStack0000000000000064 * fVar14 + fStack0000000000000060 * fVar10 +
               in_stack_00000068 * fVar18;
      fVar36 = fStack0000000000000064 * fVar15 + fStack0000000000000060 * fVar11 +
               in_stack_00000068 * fVar19;
      fVar37 = fStack0000000000000064 * fVar16 + fStack0000000000000060 * fVar12 +
               in_stack_00000068 * fVar20;
      fVar25 = (float)unaff_RBP[-0x20];
      unaff_RBP[8] = (uint)fVar35;
      unaff_RBP[9] = (uint)fVar36;
      unaff_RBP[10] = (uint)fVar37;
      unaff_RBP[0xb] =
           (uint)(fStack0000000000000064 * fVar17 + fStack0000000000000060 * fVar13 +
                 in_stack_00000068 * fVar21);
      fVar32 = fStack0000000000000074 * fVar14 + fStack0000000000000070 * fVar10 +
               in_stack_00000078 * fVar18;
      fVar33 = fStack0000000000000074 * fVar15 + fStack0000000000000070 * fVar11 +
               in_stack_00000078 * fVar19;
      fVar34 = fStack0000000000000074 * fVar16 + fStack0000000000000070 * fVar12 +
               in_stack_00000078 * fVar20;
      fVar26 = (float)unaff_RBP[-0x1e];
      fVar29 = fVar28 * fVar14 + fVar25 * fVar10 + fVar26 * fVar18;
      fVar30 = fVar28 * fVar15 + fVar25 * fVar11 + fVar26 * fVar19;
      fVar31 = fVar28 * fVar16 + fVar25 * fVar12 + fVar26 * fVar20;
      unaff_RBP[0xc] = (uint)fVar32;
      unaff_RBP[0xd] = (uint)fVar33;
      unaff_RBP[0xe] = (uint)fVar34;
      unaff_RBP[0xf] =
           (uint)(fStack0000000000000074 * fVar17 + fStack0000000000000070 * fVar13 +
                 in_stack_00000078 * fVar21);
      unaff_RBP[0x10] = (uint)fVar29;
      unaff_RBP[0x11] = (uint)fVar30;
      unaff_RBP[0x12] = (uint)fVar31;
      unaff_RBP[0x13] = (uint)(fVar28 * fVar17 + fVar25 * fVar13 + fVar26 * fVar21);
      fVar28 = unaff_RDI[0xd];
      fVar25 = unaff_RDI[0xe];
      fVar26 = unaff_RDI[0xf];
      unaff_RBP[0x14] = (uint)(fVar27 * fVar10 + fVar7 * fVar14 + fVar8 * fVar18 + unaff_RDI[0xc]);
      unaff_RBP[0x15] = (uint)(fVar27 * fVar11 + fVar7 * fVar15 + fVar8 * fVar19 + fVar28);
      unaff_RBP[0x16] = (uint)(fVar27 * fVar12 + fVar7 * fVar16 + fVar8 * fVar20 + fVar25);
      unaff_RBP[0x17] = (uint)(fVar27 * fVar13 + fVar7 * fVar17 + fVar8 * fVar21 + fVar26);
      fVar25 = fVar35 * fVar35 + fVar36 * fVar36 + fVar37 * fVar37;
      fVar26 = fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34;
      fVar28 = fVar29 * fVar29 + fVar30 * fVar30 + fVar31 * fVar31;
      if (fVar25 <= fVar26) {
        if (fVar28 <= fVar26) {
          fVar28 = fVar26;
        }
      }
      else if (fVar28 <= fVar25) {
        fVar28 = fVar25;
      }
      iVar22 = (int)(*(int64_t *)(puVar3 + 0x2e) - *(int64_t *)(puVar3 + 0x2c) >> 3);
      if (0 < iVar22) {
        do {
          plVar4 = *(int64_t **)(*(int64_t *)(puVar3 + 0x2c) + lVar24 * 8);
          if (*(float *)(unaff_R14 + 0x174) <= 0.0) {
LAB_1802fa61b:
            (**(code **)(*plVar4 + 0x1c8))(plVar4);
          }
          else {
            pfVar23 = (float *)(**(code **)(*plVar4 + 0x198))(plVar4);
            fVar26 = pfVar23[4] - *pfVar23;
            fVar27 = pfVar23[5] - pfVar23[1];
            fVar25 = pfVar23[6] - pfVar23[2];
            if (fVar27 <= fVar26) {
              if (fVar27 <= fVar25) {
                fVar25 = fVar27;
              }
            }
            else if (fVar26 <= fVar25) {
              fVar25 = fVar26;
            }
            if (*(float *)(unaff_R14 + 0x174) <= fVar25 * fVar28) goto LAB_1802fa61b;
          }
          lVar24 = lVar24 + 1;
          unaff_R13 = in_stack_00000050;
        } while (lVar24 < iVar22);
      }
      lStack0000000000000030 = lStack0000000000000030 + 1;
      unaff_RDI = in_stack_00000040;
    } while (lStack0000000000000030 < lStack0000000000000058);
  }
  lVar24 = 0;
  fVar25 = *unaff_RDI * *unaff_RDI + unaff_RDI[1] * unaff_RDI[1] + unaff_RDI[2] * unaff_RDI[2];
  fVar26 = unaff_RDI[4] * unaff_RDI[4] + unaff_RDI[5] * unaff_RDI[5] + unaff_RDI[6] * unaff_RDI[6];
  fVar28 = unaff_RDI[8] * unaff_RDI[8] + unaff_RDI[9] * unaff_RDI[9] + unaff_RDI[10] * unaff_RDI[10]
  ;
  if (fVar25 <= fVar26) {
    if (fVar28 <= fVar26) {
      fVar28 = fVar26;
    }
  }
  else if (fVar28 <= fVar25) {
    fVar28 = fVar25;
  }
  uVar1 = *(uint *)(unaff_R13 + 0x44);
  unaff_RBP[-0x15] = *(uint *)(unaff_R13 + 0x48);
  *(int8_t *)(unaff_RBP + -0x13) = *(int8_t *)(unaff_R13 + 0x20);
  uVar2 = *(uint *)(unaff_R13 + 0x168);
  *(int8_t *)(unaff_RBP + -0x19) = 1;
  unaff_RBP[-0x16] = uVar1;
  unaff_RBP[-0x14] = uVar1;
  unaff_RBP[-0x11] = uVar2;
  unaff_RBP[-0x12] = *(uint *)(unaff_R13 + 0x170);
  iVar22 = (int)(*(int64_t *)(unaff_R13 + 0x1b0) - *(int64_t *)(unaff_R13 + 0x1a8) >> 3);
  if (0 < iVar22) {
    do {
      if (*(float *)(unaff_R14 + 0x174) <= 0.0) {
LAB_1802fa7a8:
        (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R13 + 0x1a8) + lVar24 * 8) + 0x1c8))();
      }
      else {
        pfVar23 = (float *)(**(code **)(**(int64_t **)
                                          (*(int64_t *)(unaff_R13 + 0x1a8) + lVar24 * 8) + 0x198))
                                     ();
        fVar26 = pfVar23[4] - *pfVar23;
        fVar27 = pfVar23[5] - pfVar23[1];
        fVar25 = pfVar23[6] - pfVar23[2];
        if (fVar27 <= fVar26) {
          if (fVar27 <= fVar25) {
            fVar25 = fVar27;
          }
        }
        else if (fVar26 <= fVar25) {
          fVar25 = fVar26;
        }
        if (*(float *)(unaff_R14 + 0x174) <= fVar25 * fVar28) goto LAB_1802fa7a8;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < iVar22);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x20) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802fa3d5(void)
void FUN_1802fa3d5(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int64_t *plVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
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
  int iVar22;
  float *pfVar23;
  uint *unaff_RBP;
  float *unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int32_t unaff_XMM7_Da;
  float fVar28;
  int32_t unaff_XMM7_Db;
  float fVar29;
  int32_t unaff_XMM7_Dc;
  float fVar30;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar31;
  int32_t unaff_XMM8_Db;
  float fVar32;
  int32_t unaff_XMM8_Dc;
  float fVar33;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar34;
  int32_t unaff_XMM9_Db;
  float fVar35;
  int32_t unaff_XMM9_Dc;
  float fVar36;
  int32_t unaff_XMM9_Dd;
  float unaff_XMM10_Da;
  uint64_t uStack0000000000000030;
  float *in_stack_00000040;
  int64_t in_stack_00000050;
  int64_t in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  uStack0000000000000030 = unaff_R15 & 0xffffffff;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  do {
    puVar3 = *(uint **)(*(int64_t *)(unaff_R13 + 0x140) + uStack0000000000000030 * 8);
    do {
      LOCK();
      uVar1 = *puVar3;
      *puVar3 = *puVar3 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    uVar5 = puVar3[3];
    uVar6 = puVar3[4];
    fVar26 = (float)puVar3[5];
    fVar7 = (float)puVar3[6];
    fVar8 = (float)puVar3[7];
    uVar9 = puVar3[8];
    unaff_RBP[0x18] = uVar1;
    unaff_RBP[0x19] = uVar2;
    unaff_RBP[0x1a] = uVar5;
    unaff_RBP[0x1b] = uVar6;
    unaff_RBP[0x1c] = (uint)fVar26;
    unaff_RBP[0x1d] = (uint)fVar7;
    unaff_RBP[0x1e] = (uint)fVar8;
    unaff_RBP[0x1f] = uVar9;
    *puVar3 = (uint)unaff_R15;
    *unaff_RBP = uVar1;
    unaff_RBP[1] = uVar2;
    unaff_RBP[2] = uVar5;
    unaff_RBP[3] = uVar6;
    unaff_RBP[4] = (uint)fVar26;
    unaff_RBP[5] = (uint)fVar7;
    unaff_RBP[6] = (uint)fVar8;
    unaff_RBP[7] = uVar9;
    FUN_18063b5f0(&stack0x00000060);
    fVar10 = *unaff_RDI;
    fVar11 = unaff_RDI[1];
    fVar12 = unaff_RDI[2];
    fVar13 = unaff_RDI[3];
    fVar14 = unaff_RDI[4];
    fVar15 = unaff_RDI[5];
    fVar16 = unaff_RDI[6];
    fVar17 = unaff_RDI[7];
    fVar18 = unaff_RDI[8];
    fVar19 = unaff_RDI[9];
    fVar20 = unaff_RDI[10];
    fVar21 = unaff_RDI[0xb];
    fVar27 = (float)unaff_RBP[-0x1f];
    fVar34 = fStack0000000000000064 * fVar14 + fStack0000000000000060 * fVar10 +
             in_stack_00000068 * fVar18;
    fVar35 = fStack0000000000000064 * fVar15 + fStack0000000000000060 * fVar11 +
             in_stack_00000068 * fVar19;
    fVar36 = fStack0000000000000064 * fVar16 + fStack0000000000000060 * fVar12 +
             in_stack_00000068 * fVar20;
    fVar24 = (float)unaff_RBP[-0x20];
    unaff_RBP[8] = (uint)fVar34;
    unaff_RBP[9] = (uint)fVar35;
    unaff_RBP[10] = (uint)fVar36;
    unaff_RBP[0xb] =
         (uint)(fStack0000000000000064 * fVar17 + fStack0000000000000060 * fVar13 +
               in_stack_00000068 * fVar21);
    fVar31 = fStack0000000000000074 * fVar14 + fStack0000000000000070 * fVar10 +
             in_stack_00000078 * fVar18;
    fVar32 = fStack0000000000000074 * fVar15 + fStack0000000000000070 * fVar11 +
             in_stack_00000078 * fVar19;
    fVar33 = fStack0000000000000074 * fVar16 + fStack0000000000000070 * fVar12 +
             in_stack_00000078 * fVar20;
    fVar25 = (float)unaff_RBP[-0x1e];
    fVar28 = fVar27 * fVar14 + fVar24 * fVar10 + fVar25 * fVar18;
    fVar29 = fVar27 * fVar15 + fVar24 * fVar11 + fVar25 * fVar19;
    fVar30 = fVar27 * fVar16 + fVar24 * fVar12 + fVar25 * fVar20;
    unaff_RBP[0xc] = (uint)fVar31;
    unaff_RBP[0xd] = (uint)fVar32;
    unaff_RBP[0xe] = (uint)fVar33;
    unaff_RBP[0xf] =
         (uint)(fStack0000000000000074 * fVar17 + fStack0000000000000070 * fVar13 +
               in_stack_00000078 * fVar21);
    unaff_RBP[0x10] = (uint)fVar28;
    unaff_RBP[0x11] = (uint)fVar29;
    unaff_RBP[0x12] = (uint)fVar30;
    unaff_RBP[0x13] = (uint)(fVar27 * fVar17 + fVar24 * fVar13 + fVar25 * fVar21);
    fVar27 = unaff_RDI[0xd];
    fVar24 = unaff_RDI[0xe];
    fVar25 = unaff_RDI[0xf];
    unaff_RBP[0x14] = (uint)(fVar26 * fVar10 + fVar7 * fVar14 + fVar8 * fVar18 + unaff_RDI[0xc]);
    unaff_RBP[0x15] = (uint)(fVar26 * fVar11 + fVar7 * fVar15 + fVar8 * fVar19 + fVar27);
    unaff_RBP[0x16] = (uint)(fVar26 * fVar12 + fVar7 * fVar16 + fVar8 * fVar20 + fVar24);
    unaff_RBP[0x17] = (uint)(fVar26 * fVar13 + fVar7 * fVar17 + fVar8 * fVar21 + fVar25);
    fVar24 = fVar34 * fVar34 + fVar35 * fVar35 + fVar36 * fVar36;
    fVar25 = fVar31 * fVar31 + fVar32 * fVar32 + fVar33 * fVar33;
    fVar27 = fVar28 * fVar28 + fVar29 * fVar29 + fVar30 * fVar30;
    if (fVar24 <= fVar25) {
      if (fVar27 <= fVar25) {
        fVar27 = fVar25;
      }
    }
    else if (fVar27 <= fVar24) {
      fVar27 = fVar24;
    }
    iVar22 = (int)(*(int64_t *)(puVar3 + 0x2e) - *(int64_t *)(puVar3 + 0x2c) >> 3);
    if (0 < iVar22) {
      do {
        plVar4 = *(int64_t **)(*(int64_t *)(puVar3 + 0x2c) + unaff_R15 * 8);
        if (*(float *)(unaff_R14 + 0x174) <= unaff_XMM10_Da) {
LAB_1802fa61b:
          (**(code **)(*plVar4 + 0x1c8))(plVar4);
        }
        else {
          pfVar23 = (float *)(**(code **)(*plVar4 + 0x198))(plVar4);
          fVar25 = pfVar23[4] - *pfVar23;
          fVar26 = pfVar23[5] - pfVar23[1];
          fVar24 = pfVar23[6] - pfVar23[2];
          if (fVar26 <= fVar25) {
            if (fVar26 <= fVar24) {
              fVar24 = fVar26;
            }
          }
          else if (fVar25 <= fVar24) {
            fVar24 = fVar25;
          }
          if (*(float *)(unaff_R14 + 0x174) <= fVar24 * fVar27) goto LAB_1802fa61b;
        }
        unaff_R15 = unaff_R15 + 1;
      } while ((int64_t)unaff_R15 < (int64_t)iVar22);
      unaff_R15 = 0;
      unaff_R13 = in_stack_00000050;
    }
    uStack0000000000000030 = uStack0000000000000030 + 1;
    unaff_RDI = in_stack_00000040;
  } while ((int64_t)uStack0000000000000030 < in_stack_00000058);
  fVar24 = *in_stack_00000040 * *in_stack_00000040 + in_stack_00000040[1] * in_stack_00000040[1] +
           in_stack_00000040[2] * in_stack_00000040[2];
  fVar25 = in_stack_00000040[4] * in_stack_00000040[4] + in_stack_00000040[5] * in_stack_00000040[5]
           + in_stack_00000040[6] * in_stack_00000040[6];
  fVar27 = in_stack_00000040[8] * in_stack_00000040[8] + in_stack_00000040[9] * in_stack_00000040[9]
           + in_stack_00000040[10] * in_stack_00000040[10];
  if (fVar24 <= fVar25) {
    if (fVar27 <= fVar25) {
      fVar27 = fVar25;
    }
  }
  else if (fVar27 <= fVar24) {
    fVar27 = fVar24;
  }
  uVar1 = *(uint *)(unaff_R13 + 0x44);
  unaff_RBP[-0x15] = *(uint *)(unaff_R13 + 0x48);
  *(int8_t *)(unaff_RBP + -0x13) = *(int8_t *)(unaff_R13 + 0x20);
  uVar2 = *(uint *)(unaff_R13 + 0x168);
  *(int8_t *)(unaff_RBP + -0x19) = 1;
  unaff_RBP[-0x16] = uVar1;
  unaff_RBP[-0x14] = uVar1;
  unaff_RBP[-0x11] = uVar2;
  unaff_RBP[-0x12] = *(uint *)(unaff_R13 + 0x170);
  iVar22 = (int)(*(int64_t *)(unaff_R13 + 0x1b0) - *(int64_t *)(unaff_R13 + 0x1a8) >> 3);
  if (0 < iVar22) {
    do {
      if (*(float *)(unaff_R14 + 0x174) <= unaff_XMM10_Da) {
LAB_1802fa7a8:
        (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R13 + 0x1a8) + unaff_R15 * 8) + 0x1c8))();
      }
      else {
        pfVar23 = (float *)(**(code **)(**(int64_t **)
                                          (*(int64_t *)(unaff_R13 + 0x1a8) + unaff_R15 * 8) + 0x198
                                       ))();
        fVar25 = pfVar23[4] - *pfVar23;
        fVar26 = pfVar23[5] - pfVar23[1];
        fVar24 = pfVar23[6] - pfVar23[2];
        if (fVar26 <= fVar25) {
          if (fVar26 <= fVar24) {
            fVar24 = fVar26;
          }
        }
        else if (fVar25 <= fVar24) {
          fVar24 = fVar25;
        }
        if (*(float *)(unaff_R14 + 0x174) <= fVar24 * fVar27) goto LAB_1802fa7a8;
      }
      unaff_R15 = unaff_R15 + 1;
    } while ((int64_t)unaff_R15 < (int64_t)iVar22);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x20) ^ (uint64_t)&stack0x00000000);
}






