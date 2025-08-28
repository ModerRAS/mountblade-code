#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part053.c - 4 个函数

// 函数: void FUN_1807ec43e(uint64_t param_1,uint64_t param_2,uint param_3,uint64_t param_4,
void FUN_1807ec43e(uint64_t param_1,uint64_t param_2,uint param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,int64_t param_8,
                  int64_t param_9)

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int64_t unaff_RBX;
  int unaff_EBP;
  uint uVar7;
  uint64_t uVar8;
  uint unaff_EDI;
  int64_t lVar9;
  char *pcVar10;
  uint *puVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t lVar14;
  float *pfVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  int unaff_R13D;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_XMM8_Da;
  float unaff_XMM11_Da;
  float fStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  uint in_stack_00000180;
  float in_stack_00000190;
  float afStack_3e8 [248];
  uint64_t uStack_8;
  
  param_7 = 0;
  do {
    fVar22 = *(float *)(unaff_RBX + 0x28);
    fVar24 = (float)(unaff_EDI - param_3);
    fVar23 = (float)param_3;
    if (*(char *)(unaff_RBX + 0x24) != '\0') {
      fVar22 = (fVar24 * *(float *)(unaff_RBX + 0x2c) + fVar23 * fVar22) * unaff_XMM8_Da;
    }
    fVar26 = *(float *)(unaff_RBX + 0x2a0);
    if (*(char *)(unaff_RBX + 0x29c) != '\0') {
      fVar26 = (fVar24 * *(float *)(unaff_RBX + 0x2a4) + fVar23 * fVar26) * unaff_XMM8_Da;
    }
    fVar25 = *(float *)(unaff_RBX + 0x2dc);
    if (*(char *)(unaff_RBX + 0x2d8) != '\0') {
      fVar25 = (fVar24 * *(float *)(unaff_RBX + 0x2e0) + fVar23 * fVar25) * unaff_XMM8_Da;
    }
    fVar21 = fVar22 * *(float *)(param_7 + *(int64_t *)(unaff_RBX + 8)) +
             (unaff_XMM11_Da - fVar22) * *(float *)(unaff_RBX + 0x34);
    *(float *)(unaff_RBX + 0x34) = fVar21;
    fVar21 = fVar21 * fVar22 + (unaff_XMM11_Da - fVar22) * *(float *)(unaff_RBX + 0x38);
    *(float *)(unaff_RBX + 0x38) = fVar21;
    fVar22 = fVar21;
    if (*(float *)(unaff_RBX + 0x50) != 0.0) {
      fVar22 = fVar21 * *(float *)(unaff_RBX + 0x3c) + *(float *)(unaff_RBX + 0x54);
      *(float *)(unaff_RBX + 0x54) =
           fVar21 * *(float *)(unaff_RBX + 0x40) + *(float *)(unaff_RBX + 0x58) +
           fVar22 * *(float *)(unaff_RBX + 0x48);
      *(float *)(unaff_RBX + 0x58) =
           fVar21 * *(float *)(unaff_RBX + 0x44) + fVar22 * *(float *)(unaff_RBX + 0x4c);
    }
    uVar3 = *(int *)(unaff_RBX + 0x4dc) - 1U & *(uint *)(unaff_RBX + 0x4d8);
    *(uint *)(unaff_RBX + 0x4dc) = uVar3;
    *(float *)(*(int64_t *)(unaff_RBX + 0x458) + (int64_t)(int)uVar3 * 4) = fVar22;
    uVar3 = *(int *)(unaff_RBX + 0x4e0) - 1U & *(uint *)(unaff_RBX + 0x4d8);
    *(uint *)(unaff_RBX + 0x4e0) = uVar3;
    fVar22 = *(float *)(unaff_RBX + 0x2c8);
    if (*(char *)(unaff_RBX + 0x2c4) != '\0') {
      fVar22 = (fVar24 * *(float *)(unaff_RBX + 0x2cc) + fVar23 * fVar22) * unaff_XMM8_Da;
    }
    fVar21 = fVar22 * *(float *)(*(int64_t *)(unaff_RBX + 0x458) + (int64_t)(int)uVar3 * 4);
    if (*(char *)(unaff_RBX + 0x4cc) != '\0') {
      uVar3 = *(int *)(unaff_RBX + 0x504) - 1U & *(uint *)(unaff_RBX + 0x4d8);
      *(uint *)(unaff_RBX + 0x504) = uVar3;
      fVar21 = (fVar22 * *(float *)(*(int64_t *)(unaff_RBX + 0x458) + (int64_t)(int)uVar3 * 4) *
                fVar24 + fVar23 * fVar21) * unaff_XMM8_Da;
    }
    uVar3 = *(int *)(unaff_RBX + 0x5c0) - 1U & *(uint *)(unaff_RBX + 0x5b0);
    *(uint *)(unaff_RBX + 0x5c0) = uVar3;
    uVar5 = *(int *)(unaff_RBX + 0x5b8) - 1U & *(uint *)(unaff_RBX + 0x5b0);
    *(uint *)(unaff_RBX + 0x5b8) = uVar5;
    fVar22 = *(float *)(*(int64_t *)(unaff_RBX + 0x590) + (int64_t)(int)uVar3 * 4) -
             *(float *)(unaff_RBX + 0x2e8) * (fVar21 + 1e-20);
    *(float *)(*(int64_t *)(unaff_RBX + 0x590) + (int64_t)(int)uVar5 * 4) =
         *(float *)(unaff_RBX + 0x2e8) * fVar22 + fVar21 + 1e-20;
    *(uint *)(unaff_RBX + 0x5bc) = *(int *)(unaff_RBX + 0x5bc) - 1U & *(uint *)(unaff_RBX + 0x5b4);
    uVar3 = *(int *)(unaff_RBX + 0x5c4) - 1U & *(uint *)(unaff_RBX + 0x5b4);
    *(uint *)(unaff_RBX + 0x5c4) = uVar3;
    fStack0000000000000050 =
         *(float *)(*(int64_t *)(unaff_RBX + 0x598) + (int64_t)(int)uVar3 * 4) -
         *(float *)(unaff_RBX + 0x2e8) * fVar22;
    *(float *)(*(int64_t *)(unaff_RBX + 0x598) + (int64_t)*(int *)(unaff_RBX + 0x5bc) * 4) =
         *(float *)(unaff_RBX + 0x2e8) * fStack0000000000000050 + fVar22;
    uVar3 = *(int *)(unaff_RBX + 0x56c) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x56c) = uVar3;
    *(float *)(*(int64_t *)(unaff_RBX + 0x528) + (int64_t)(int)uVar3 * 4) = fStack0000000000000050
    ;
    uVar3 = *(int *)(unaff_RBX + 0x570) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x570) = uVar3;
    uStack0000000000000054 =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x528) + (int64_t)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x574) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x574) = uVar3;
    uStack0000000000000058 =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x528) + (int64_t)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x578) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x578) = uVar3;
    uStack000000000000005c =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x528) + (int64_t)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x57c) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x57c) = uVar3;
    uStack0000000000000060 =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x528) + (int64_t)(int)uVar3 * 4);
    uVar5 = 0;
    uVar3 = *(int *)(unaff_RBX + 0x580) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x580) = uVar3;
    uStack0000000000000064 =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x528) + (int64_t)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x584) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x584) = uVar3;
    uStack0000000000000068 =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x528) + (int64_t)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x588) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x588) = uVar3;
    uStack000000000000006c =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x528) + (int64_t)(int)uVar3 * 4);
    if (0 < *(int *)(unaff_RBX + 0x2ec)) {
      pcVar10 = (char *)(unaff_RBX + 0x3b0);
      lVar9 = -0x508 - unaff_RBX;
      puVar6 = (uint *)(unaff_RBX + 0x508);
      lVar14 = 0x2f0;
      do {
        uVar3 = puVar6[-9] - 1 & *(uint *)(unaff_RBX + 0x4d8);
        puVar6[-9] = uVar3;
        fVar22 = *(float *)(*(int64_t *)(unaff_RBX + 0x458) + (int64_t)(int)uVar3 * 4);
        if (pcVar10[(int64_t)((char *)(unaff_RBX + 0x4cc) + (-0x3af - unaff_RBX))] != '\0') {
          uVar3 = *puVar6 - 1 & *(uint *)(unaff_RBX + 0x4d8);
          *puVar6 = uVar3;
          fVar22 = (fVar24 * *(float *)(*(int64_t *)(unaff_RBX + 0x458) + (int64_t)(int)uVar3 * 4)
                   + fVar23 * fVar22) * unaff_XMM8_Da;
        }
        fVar21 = *(float *)(unaff_RBX + 0x2b8);
        if (*(char *)(unaff_RBX + 0x2b4) != '\0') {
          fVar21 = (fVar24 * *(float *)(unaff_RBX + 700) + fVar21 * fVar23) * unaff_XMM8_Da;
        }
        uVar3 = puVar6[-0x44] - 1 & puVar6[-0x54];
        puVar6[-0x44] = uVar3;
        if (*pcVar10 == '\0') {
          fVar20 = *(float *)(*(int64_t *)(unaff_RBX + lVar14) + (int64_t)(int)uVar3 * 4) *
                   (float)puVar6[-0xb4];
        }
        else {
          uVar4 = puVar6[-0x3c] - 1 & puVar6[-0x54];
          puVar6[-0x3c] = uVar4;
          fVar20 = (*(float *)(*(int64_t *)(unaff_RBX + lVar14) + (int64_t)(int)uVar4 * 4) *
                    (float)puVar6[-0xa4] * fVar24 +
                   *(float *)(*(int64_t *)(unaff_RBX + lVar14) + (int64_t)(int)uVar3 * 4) *
                   (float)puVar6[-0xb4] * fVar23) * unaff_XMM8_Da;
        }
        if ((uVar5 & 1) == 0) {
          fVar19 = -1e-15;
        }
        else {
          fVar19 = 1e-15;
        }
        fVar19 = (fVar21 * fVar22 + fVar20) * fVar25 + fVar19;
        lVar1 = *(int64_t *)(unaff_RBX + 0x208);
        if (pcVar10[-0x334] == '\0') {
          fVar22 = (float)puVar6[-0x119] * *(float *)((int64_t)puVar6 + lVar1 + lVar9) +
                   fVar19 * (float)puVar6[-0x121];
        }
        else {
          fVar22 = (fVar24 * (float)puVar6[-0x111] + fVar23 * (float)puVar6[-0x121]) * unaff_XMM8_Da
          ;
          fVar22 = (unaff_XMM11_Da - fVar22) * *(float *)((int64_t)puVar6 + lVar1 + lVar9) +
                   fVar22 * fVar19;
        }
        *(float *)((int64_t)puVar6 + lVar1 + lVar9) = fVar22;
        uVar5 = uVar5 + 1;
        lVar14 = lVar14 + 8;
        pcVar10 = pcVar10 + 1;
        puVar6[-0x4c] = puVar6[-0x4c] - 1 & puVar6[-0x54];
        puVar6 = puVar6 + 1;
        param_3 = (uint)param_6;
      } while ((int)uVar5 < *(int *)(unaff_RBX + 0x2ec));
    }
    **(float **)(unaff_RBX + 0x210) =
         fVar26 * (*(float **)(unaff_RBX + 0x208))[1] + **(float **)(unaff_RBX + 0x208);
    *(float *)(*(int64_t *)(unaff_RBX + 0x210) + 4) =
         (*(float **)(unaff_RBX + 0x208))[1] - fVar26 * **(float **)(unaff_RBX + 0x208);
    *(float *)(*(int64_t *)(unaff_RBX + 0x210) + 8) =
         fVar26 * *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0xc) +
         *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 8);
    *(float *)(*(int64_t *)(unaff_RBX + 0x210) + 0xc) =
         *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0xc) -
         fVar26 * *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 8);
    *(float *)(*(int64_t *)(unaff_RBX + 0x210) + 0x10) =
         fVar26 * *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0x14) +
         *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0x10);
    *(float *)(*(int64_t *)(unaff_RBX + 0x210) + 0x14) =
         *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0x14) -
         fVar26 * *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0x10);
    *(float *)(*(int64_t *)(unaff_RBX + 0x210) + 0x18) =
         fVar26 * *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0x1c) +
         *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0x18);
    *(float *)(*(int64_t *)(unaff_RBX + 0x210) + 0x1c) =
         *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0x1c) -
         fVar26 * *(float *)(*(int64_t *)(unaff_RBX + 0x208) + 0x18);
    pfVar15 = *(float **)(unaff_RBX + 0x210);
    pfVar15[8] = fVar26 * pfVar15[2] + *pfVar15;
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x24) = fVar26 * *(float *)(lVar9 + 0xc) + *(float *)(lVar9 + 4);
    pfVar15 = *(float **)(unaff_RBX + 0x210);
    pfVar15[10] = pfVar15[2] - fVar26 * *pfVar15;
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x2c) = *(float *)(lVar9 + 0xc) - fVar26 * *(float *)(lVar9 + 4);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x30) = fVar26 * *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x10);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x34) = fVar26 * *(float *)(lVar9 + 0x1c) + *(float *)(lVar9 + 0x14);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x38) = *(float *)(lVar9 + 0x18) - fVar26 * *(float *)(lVar9 + 0x10);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x3c) = *(float *)(lVar9 + 0x1c) - fVar26 * *(float *)(lVar9 + 0x14);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x40) = fVar26 * *(float *)(lVar9 + 0x30) + *(float *)(lVar9 + 0x20);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x44) = fVar26 * *(float *)(lVar9 + 0x34) + *(float *)(lVar9 + 0x24);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x48) = fVar26 * *(float *)(lVar9 + 0x38) + *(float *)(lVar9 + 0x28);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x4c) = fVar26 * *(float *)(lVar9 + 0x3c) + *(float *)(lVar9 + 0x2c);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x50) = *(float *)(lVar9 + 0x30) - fVar26 * *(float *)(lVar9 + 0x20);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x54) = *(float *)(lVar9 + 0x34) - fVar26 * *(float *)(lVar9 + 0x24);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x58) = *(float *)(lVar9 + 0x38) - fVar26 * *(float *)(lVar9 + 0x28);
    lVar9 = *(int64_t *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x5c) = *(float *)(lVar9 + 0x3c) - fVar26 * *(float *)(lVar9 + 0x2c);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2f0) + (int64_t)*(int *)(unaff_RBX + 0x3d8) * 4) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x210) + 0x44);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x2f8) + (int64_t)*(int *)(unaff_RBX + 0x3dc) * 4) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x210) + 0x48);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x300) + (int64_t)*(int *)(unaff_RBX + 0x3e0) * 4) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x210) + 0x4c);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x308) + (int64_t)*(int *)(unaff_RBX + 0x3e4) * 4) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x210) + 0x50);
    uVar3 = 0;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x310) + (int64_t)*(int *)(unaff_RBX + 1000) * 4) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x210) + 0x54);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x318) + (int64_t)*(int *)(unaff_RBX + 0x3ec) * 4) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x210) + 0x58);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 800) + (int64_t)*(int *)(unaff_RBX + 0x3f0) * 4) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x210) + 0x5c);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x328) + (int64_t)*(int *)(unaff_RBX + 0x3f4) * 4) =
         *(int32_t *)(*(int64_t *)(unaff_RBX + 0x210) + 0x40);
    if (0 < unaff_EBP) {
      uVar5 = unaff_EBP * param_3;
      do {
        iVar18 = 0;
        uVar4 = uVar3 & 7;
        uVar13 = (uint64_t)uVar4;
        fVar23 = 0.0;
        fVar22 = 0.0;
        iVar2 = unaff_EBP;
        if (3 < unaff_R13D) {
          uVar7 = (unaff_R13D - 4U >> 2) + 1;
          uVar8 = (uint64_t)uVar7;
          pfVar15 = (float *)((int64_t)&stack0x00000050 + uVar13 * 4);
          plVar12 = (int64_t *)(unaff_RBX + 0x2f0 + uVar13 * 8);
          puVar6 = (uint *)(unaff_RBX + 0x438 + uVar13 * 4);
          puVar11 = (uint *)(unaff_RBX + 0x3b8 + uVar13 * 4);
          iVar18 = uVar7 * 4;
          uVar4 = uVar4 + param_6._4_4_ * uVar7 * 4;
          do {
            uVar7 = *puVar6;
            if ((int)uVar3 < 8) {
              uVar7 = uVar7 - 1 & *puVar11;
              *puVar6 = uVar7;
            }
            fVar24 = *pfVar15;
            puVar6 = puVar6 + unaff_EBP;
            puVar11 = puVar11 + unaff_EBP;
            plVar16 = plVar12 + unaff_EBP;
            pfVar15 = pfVar15 + unaff_EBP;
            fVar26 = *(float *)(*plVar12 + (int64_t)(int)uVar7 * 4);
            uVar7 = *puVar6;
            if ((int)uVar3 < 8) {
              uVar7 = uVar7 - 1 & *puVar11;
              *puVar6 = uVar7;
            }
            fVar25 = *pfVar15;
            puVar6 = puVar6 + unaff_EBP;
            puVar11 = puVar11 + unaff_EBP;
            plVar17 = plVar16 + unaff_EBP;
            pfVar15 = pfVar15 + unaff_EBP;
            fVar21 = *(float *)(*plVar16 + (int64_t)(int)uVar7 * 4);
            uVar7 = *puVar6;
            if ((int)uVar3 < 8) {
              uVar7 = uVar7 - 1 & *puVar11;
              *puVar6 = uVar7;
            }
            fVar20 = *pfVar15;
            puVar6 = puVar6 + unaff_EBP;
            fVar19 = *(float *)(*plVar17 + (int64_t)(int)uVar7 * 4);
            uVar7 = *puVar6;
            if ((int)uVar3 < 8) {
              uVar7 = uVar7 - 1 & puVar11[unaff_EBP];
              *puVar6 = uVar7;
            }
            fVar22 = fVar22 + fVar24 + fVar25 + fVar20 + pfVar15[unaff_EBP];
            puVar11 = puVar11 + unaff_EBP + unaff_EBP;
            puVar6 = puVar6 + unaff_EBP;
            plVar12 = plVar17 + unaff_EBP + unaff_EBP;
            pfVar15 = pfVar15 + unaff_EBP + unaff_EBP;
            fVar23 = fVar23 + fVar26 + fVar21 + fVar19 +
                     *(float *)(plVar17[unaff_EBP] + (int64_t)(int)uVar7 * 4);
            uVar8 = uVar8 - 1;
            iVar2 = param_6._4_4_;
          } while (uVar8 != 0);
        }
        unaff_EBP = iVar2;
        if (iVar18 < unaff_R13D) {
          plVar12 = (int64_t *)(unaff_RBX + 0x2f0 + (int64_t)(int)uVar4 * 8);
          uVar13 = (uint64_t)(uint)(unaff_R13D - iVar18);
          puVar6 = (uint *)(unaff_RBX + 0x438 + (int64_t)(int)uVar4 * 4);
          do {
            uVar4 = *puVar6;
            if ((int)uVar3 < 8) {
              uVar4 = uVar4 - 1 & puVar6[-0x20];
              *puVar6 = uVar4;
            }
            fVar22 = fVar22 + *(float *)(((int64_t)afStack_3e8 - unaff_RBX) + (int64_t)puVar6);
            puVar6 = puVar6 + unaff_EBP;
            lVar9 = *plVar12;
            plVar12 = plVar12 + unaff_EBP;
            fVar23 = fVar23 + *(float *)(lVar9 + (int64_t)(int)uVar4 * 4);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (in_stack_00000190 != 0.0) {
          fVar22 = in_stack_00000190 * *(float *)(param_8 + (uint64_t)uVar5 * 4) + fVar22;
        }
        uVar3 = uVar3 + 1;
        *(float *)(param_9 + (uint64_t)uVar5 * 4) = fVar23 + fVar22;
        uVar5 = uVar5 + 1;
        param_3 = (uint)param_6;
      } while ((int)uVar3 < unaff_EBP);
    }
    param_7 = param_7 + 4;
    param_6._0_4_ = param_3 + 1;
    unaff_EDI = in_stack_00000180;
    param_3 = (uint)param_6;
  } while ((uint)param_6 < in_stack_00000180);
                    // WARNING: Subroutine does not return
  uStack_8 = 0x1807ed0ad;
  SystemSecurityChecker(in_stack_00000070 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807ed0a0(void)
void FUN_1807ed0a0(void)

{
  uint64_t in_stack_00000070;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000070 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807ed0d0(int64_t param_1,float param_2,float param_3,float param_4,float param_5,
void FUN_1807ed0d0(int64_t param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(float *)(param_1 + 0x330) = param_2;
  fVar3 = param_2 * param_3;
  iVar1 = (int)(param_2 * param_6 + 0.5);
  fVar2 = param_4 * param_6 * param_5;
  *(int *)(param_1 + 0x350) = iVar1;
  *(uint *)(param_1 + 0x3f8) = iVar1 + -1 + *(int *)(param_1 + 0x3d8) & *(uint *)(param_1 + 0x3b8);
  iVar1 = (int)(param_4 * param_6 + 0.5);
  *(int *)(param_1 + 0x390) = iVar1;
  *(uint *)(param_1 + 0x438) = iVar1 + *(int *)(param_1 + 0x3d8) + -1 & *(uint *)(param_1 + 0x3b8);
  *(float *)(param_1 + 0x334) = fVar3;
  fVar4 = fVar3 * param_3;
  iVar1 = (int)(fVar3 * param_6 + 0.5);
  fVar3 = fVar2 * param_5;
  *(int *)(param_1 + 0x354) = iVar1;
  *(uint *)(param_1 + 0x3fc) = iVar1 + *(int *)(param_1 + 0x3dc) + -1 & *(uint *)(param_1 + 0x3bc);
  iVar1 = (int)(fVar2 + 0.5);
  *(int *)(param_1 + 0x394) = iVar1;
  *(uint *)(param_1 + 0x43c) = iVar1 + *(int *)(param_1 + 0x3dc) + -1 & *(uint *)(param_1 + 0x3bc);
  *(float *)(param_1 + 0x338) = fVar4;
  fVar5 = fVar4 * param_3;
  iVar1 = (int)(fVar4 * param_6 + 0.5);
  fVar2 = fVar3 * param_5;
  *(int *)(param_1 + 0x358) = iVar1;
  *(uint *)(param_1 + 0x400) = iVar1 + *(int *)(param_1 + 0x3e0) + -1 & *(uint *)(param_1 + 0x3c0);
  iVar1 = (int)(fVar3 + 0.5);
  *(int *)(param_1 + 0x398) = iVar1;
  *(uint *)(param_1 + 0x440) = iVar1 + *(int *)(param_1 + 0x3e0) + -1 & *(uint *)(param_1 + 0x3c0);
  *(float *)(param_1 + 0x33c) = fVar5;
  fVar4 = fVar5 * param_3;
  iVar1 = (int)(fVar5 * param_6 + 0.5);
  *(int *)(param_1 + 0x35c) = iVar1;
  fVar3 = fVar2 * param_5;
  *(uint *)(param_1 + 0x404) = iVar1 + *(int *)(param_1 + 0x3e4) + -1 & *(uint *)(param_1 + 0x3c4);
  iVar1 = (int)(fVar2 + 0.5);
  *(int *)(param_1 + 0x39c) = iVar1;
  *(uint *)(param_1 + 0x444) = iVar1 + *(int *)(param_1 + 0x3e4) + -1 & *(uint *)(param_1 + 0x3c4);
  *(float *)(param_1 + 0x340) = fVar4;
  fVar5 = fVar4 * param_3;
  iVar1 = (int)(fVar4 * param_6 + 0.5);
  fVar2 = fVar3 * param_5;
  *(int *)(param_1 + 0x360) = iVar1;
  *(uint *)(param_1 + 0x408) = iVar1 + *(int *)(param_1 + 1000) + -1 & *(uint *)(param_1 + 0x3c8);
  iVar1 = (int)(fVar3 + 0.5);
  *(int *)(param_1 + 0x3a0) = iVar1;
  *(uint *)(param_1 + 0x448) = iVar1 + *(int *)(param_1 + 1000) + -1 & *(uint *)(param_1 + 0x3c8);
  *(float *)(param_1 + 0x344) = fVar5;
  fVar4 = fVar5 * param_3;
  iVar1 = (int)(fVar5 * param_6 + 0.5);
  fVar3 = fVar2 * param_5;
  *(int *)(param_1 + 0x364) = iVar1;
  *(uint *)(param_1 + 0x40c) = iVar1 + *(int *)(param_1 + 0x3ec) + -1 & *(uint *)(param_1 + 0x3cc);
  iVar1 = (int)(fVar2 + 0.5);
  *(int *)(param_1 + 0x3a4) = iVar1;
  *(uint *)(param_1 + 0x44c) = iVar1 + *(int *)(param_1 + 0x3ec) + -1 & *(uint *)(param_1 + 0x3cc);
  *(float *)(param_1 + 0x348) = fVar4;
  iVar1 = (int)(fVar4 * param_6 + 0.5);
  *(int *)(param_1 + 0x368) = iVar1;
  *(uint *)(param_1 + 0x410) = iVar1 + *(int *)(param_1 + 0x3f0) + -1 & *(uint *)(param_1 + 0x3d0);
  iVar1 = (int)(fVar3 + 0.5);
  *(int *)(param_1 + 0x3a8) = iVar1;
  *(uint *)(param_1 + 0x450) = iVar1 + *(int *)(param_1 + 0x3f0) + -1 & *(uint *)(param_1 + 0x3d0);
  *(float *)(param_1 + 0x34c) = fVar4 * param_3;
  iVar1 = (int)(fVar4 * param_3 * param_6 + 0.5);
  *(int *)(param_1 + 0x36c) = iVar1;
  *(uint *)(param_1 + 0x414) = iVar1 + *(int *)(param_1 + 0x3f4) + -1 & *(uint *)(param_1 + 0x3d4);
  iVar1 = (int)(fVar3 * param_5 + 0.5);
  *(int *)(param_1 + 0x3ac) = iVar1;
  *(uint *)(param_1 + 0x454) = iVar1 + *(int *)(param_1 + 0x3f4) + -1 & *(uint *)(param_1 + 0x3d4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807ed550(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  
  if (param_2 != (int)param_1[2]) {
    *(int *)(param_1 + 2) = param_2;
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&memory_allocator_3008_ptr,0xda,1);
    }
    lVar1 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 4 + 0x10,&memory_allocator_3008_ptr,
                          0xdd,0,0,1);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0x1199;
    }
    param_1[1] = lVar1 + 0xfU & 0xfffffffffffffff0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ed610(int64_t *param_1)
void FUN_1807ed610(int64_t *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&memory_allocator_3008_ptr,100,1);
  }
  if (param_1[0xa5] != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0xa5],&memory_allocator_3008_ptr,0xbb,1);
  }
  param_1[0xa5] = 0;
  param_1[0x8b] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  return;
}






