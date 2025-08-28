#include "TaleWorlds.Native.Split.h"

// 99_part_12_part053.c - 4 个函数

// 函数: void FUN_1807ec43e(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
void FUN_1807ec43e(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  longlong param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  longlong unaff_RBX;
  int unaff_EBP;
  uint uVar7;
  ulonglong uVar8;
  uint unaff_EDI;
  longlong lVar9;
  char *pcVar10;
  uint *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong *plVar16;
  longlong *plVar17;
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
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  ulonglong in_stack_00000070;
  uint in_stack_00000180;
  float in_stack_00000190;
  float afStack_3e8 [248];
  undefined8 uStack_8;
  
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
    fVar21 = fVar22 * *(float *)(param_7 + *(longlong *)(unaff_RBX + 8)) +
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
    *(float *)(*(longlong *)(unaff_RBX + 0x458) + (longlong)(int)uVar3 * 4) = fVar22;
    uVar3 = *(int *)(unaff_RBX + 0x4e0) - 1U & *(uint *)(unaff_RBX + 0x4d8);
    *(uint *)(unaff_RBX + 0x4e0) = uVar3;
    fVar22 = *(float *)(unaff_RBX + 0x2c8);
    if (*(char *)(unaff_RBX + 0x2c4) != '\0') {
      fVar22 = (fVar24 * *(float *)(unaff_RBX + 0x2cc) + fVar23 * fVar22) * unaff_XMM8_Da;
    }
    fVar21 = fVar22 * *(float *)(*(longlong *)(unaff_RBX + 0x458) + (longlong)(int)uVar3 * 4);
    if (*(char *)(unaff_RBX + 0x4cc) != '\0') {
      uVar3 = *(int *)(unaff_RBX + 0x504) - 1U & *(uint *)(unaff_RBX + 0x4d8);
      *(uint *)(unaff_RBX + 0x504) = uVar3;
      fVar21 = (fVar22 * *(float *)(*(longlong *)(unaff_RBX + 0x458) + (longlong)(int)uVar3 * 4) *
                fVar24 + fVar23 * fVar21) * unaff_XMM8_Da;
    }
    uVar3 = *(int *)(unaff_RBX + 0x5c0) - 1U & *(uint *)(unaff_RBX + 0x5b0);
    *(uint *)(unaff_RBX + 0x5c0) = uVar3;
    uVar5 = *(int *)(unaff_RBX + 0x5b8) - 1U & *(uint *)(unaff_RBX + 0x5b0);
    *(uint *)(unaff_RBX + 0x5b8) = uVar5;
    fVar22 = *(float *)(*(longlong *)(unaff_RBX + 0x590) + (longlong)(int)uVar3 * 4) -
             *(float *)(unaff_RBX + 0x2e8) * (fVar21 + 1e-20);
    *(float *)(*(longlong *)(unaff_RBX + 0x590) + (longlong)(int)uVar5 * 4) =
         *(float *)(unaff_RBX + 0x2e8) * fVar22 + fVar21 + 1e-20;
    *(uint *)(unaff_RBX + 0x5bc) = *(int *)(unaff_RBX + 0x5bc) - 1U & *(uint *)(unaff_RBX + 0x5b4);
    uVar3 = *(int *)(unaff_RBX + 0x5c4) - 1U & *(uint *)(unaff_RBX + 0x5b4);
    *(uint *)(unaff_RBX + 0x5c4) = uVar3;
    fStack0000000000000050 =
         *(float *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(int)uVar3 * 4) -
         *(float *)(unaff_RBX + 0x2e8) * fVar22;
    *(float *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)*(int *)(unaff_RBX + 0x5bc) * 4) =
         *(float *)(unaff_RBX + 0x2e8) * fStack0000000000000050 + fVar22;
    uVar3 = *(int *)(unaff_RBX + 0x56c) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x56c) = uVar3;
    *(float *)(*(longlong *)(unaff_RBX + 0x528) + (longlong)(int)uVar3 * 4) = fStack0000000000000050
    ;
    uVar3 = *(int *)(unaff_RBX + 0x570) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x570) = uVar3;
    uStack0000000000000054 =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x528) + (longlong)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x574) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x574) = uVar3;
    uStack0000000000000058 =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x528) + (longlong)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x578) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x578) = uVar3;
    uStack000000000000005c =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x528) + (longlong)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x57c) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x57c) = uVar3;
    uStack0000000000000060 =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x528) + (longlong)(int)uVar3 * 4);
    uVar5 = 0;
    uVar3 = *(int *)(unaff_RBX + 0x580) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x580) = uVar3;
    uStack0000000000000064 =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x528) + (longlong)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x584) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x584) = uVar3;
    uStack0000000000000068 =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x528) + (longlong)(int)uVar3 * 4);
    uVar3 = *(int *)(unaff_RBX + 0x588) - 1U & *(uint *)(unaff_RBX + 0x568);
    *(uint *)(unaff_RBX + 0x588) = uVar3;
    uStack000000000000006c =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x528) + (longlong)(int)uVar3 * 4);
    if (0 < *(int *)(unaff_RBX + 0x2ec)) {
      pcVar10 = (char *)(unaff_RBX + 0x3b0);
      lVar9 = -0x508 - unaff_RBX;
      puVar6 = (uint *)(unaff_RBX + 0x508);
      lVar14 = 0x2f0;
      do {
        uVar3 = puVar6[-9] - 1 & *(uint *)(unaff_RBX + 0x4d8);
        puVar6[-9] = uVar3;
        fVar22 = *(float *)(*(longlong *)(unaff_RBX + 0x458) + (longlong)(int)uVar3 * 4);
        if (pcVar10[(longlong)((char *)(unaff_RBX + 0x4cc) + (-0x3af - unaff_RBX))] != '\0') {
          uVar3 = *puVar6 - 1 & *(uint *)(unaff_RBX + 0x4d8);
          *puVar6 = uVar3;
          fVar22 = (fVar24 * *(float *)(*(longlong *)(unaff_RBX + 0x458) + (longlong)(int)uVar3 * 4)
                   + fVar23 * fVar22) * unaff_XMM8_Da;
        }
        fVar21 = *(float *)(unaff_RBX + 0x2b8);
        if (*(char *)(unaff_RBX + 0x2b4) != '\0') {
          fVar21 = (fVar24 * *(float *)(unaff_RBX + 700) + fVar21 * fVar23) * unaff_XMM8_Da;
        }
        uVar3 = puVar6[-0x44] - 1 & puVar6[-0x54];
        puVar6[-0x44] = uVar3;
        if (*pcVar10 == '\0') {
          fVar20 = *(float *)(*(longlong *)(unaff_RBX + lVar14) + (longlong)(int)uVar3 * 4) *
                   (float)puVar6[-0xb4];
        }
        else {
          uVar4 = puVar6[-0x3c] - 1 & puVar6[-0x54];
          puVar6[-0x3c] = uVar4;
          fVar20 = (*(float *)(*(longlong *)(unaff_RBX + lVar14) + (longlong)(int)uVar4 * 4) *
                    (float)puVar6[-0xa4] * fVar24 +
                   *(float *)(*(longlong *)(unaff_RBX + lVar14) + (longlong)(int)uVar3 * 4) *
                   (float)puVar6[-0xb4] * fVar23) * unaff_XMM8_Da;
        }
        if ((uVar5 & 1) == 0) {
          fVar19 = -1e-15;
        }
        else {
          fVar19 = 1e-15;
        }
        fVar19 = (fVar21 * fVar22 + fVar20) * fVar25 + fVar19;
        lVar1 = *(longlong *)(unaff_RBX + 0x208);
        if (pcVar10[-0x334] == '\0') {
          fVar22 = (float)puVar6[-0x119] * *(float *)((longlong)puVar6 + lVar1 + lVar9) +
                   fVar19 * (float)puVar6[-0x121];
        }
        else {
          fVar22 = (fVar24 * (float)puVar6[-0x111] + fVar23 * (float)puVar6[-0x121]) * unaff_XMM8_Da
          ;
          fVar22 = (unaff_XMM11_Da - fVar22) * *(float *)((longlong)puVar6 + lVar1 + lVar9) +
                   fVar22 * fVar19;
        }
        *(float *)((longlong)puVar6 + lVar1 + lVar9) = fVar22;
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
    *(float *)(*(longlong *)(unaff_RBX + 0x210) + 4) =
         (*(float **)(unaff_RBX + 0x208))[1] - fVar26 * **(float **)(unaff_RBX + 0x208);
    *(float *)(*(longlong *)(unaff_RBX + 0x210) + 8) =
         fVar26 * *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0xc) +
         *(float *)(*(longlong *)(unaff_RBX + 0x208) + 8);
    *(float *)(*(longlong *)(unaff_RBX + 0x210) + 0xc) =
         *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0xc) -
         fVar26 * *(float *)(*(longlong *)(unaff_RBX + 0x208) + 8);
    *(float *)(*(longlong *)(unaff_RBX + 0x210) + 0x10) =
         fVar26 * *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0x14) +
         *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0x10);
    *(float *)(*(longlong *)(unaff_RBX + 0x210) + 0x14) =
         *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0x14) -
         fVar26 * *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0x10);
    *(float *)(*(longlong *)(unaff_RBX + 0x210) + 0x18) =
         fVar26 * *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0x1c) +
         *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0x18);
    *(float *)(*(longlong *)(unaff_RBX + 0x210) + 0x1c) =
         *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0x1c) -
         fVar26 * *(float *)(*(longlong *)(unaff_RBX + 0x208) + 0x18);
    pfVar15 = *(float **)(unaff_RBX + 0x210);
    pfVar15[8] = fVar26 * pfVar15[2] + *pfVar15;
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x24) = fVar26 * *(float *)(lVar9 + 0xc) + *(float *)(lVar9 + 4);
    pfVar15 = *(float **)(unaff_RBX + 0x210);
    pfVar15[10] = pfVar15[2] - fVar26 * *pfVar15;
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x2c) = *(float *)(lVar9 + 0xc) - fVar26 * *(float *)(lVar9 + 4);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x30) = fVar26 * *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x10);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x34) = fVar26 * *(float *)(lVar9 + 0x1c) + *(float *)(lVar9 + 0x14);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x38) = *(float *)(lVar9 + 0x18) - fVar26 * *(float *)(lVar9 + 0x10);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x3c) = *(float *)(lVar9 + 0x1c) - fVar26 * *(float *)(lVar9 + 0x14);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x40) = fVar26 * *(float *)(lVar9 + 0x30) + *(float *)(lVar9 + 0x20);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x44) = fVar26 * *(float *)(lVar9 + 0x34) + *(float *)(lVar9 + 0x24);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x48) = fVar26 * *(float *)(lVar9 + 0x38) + *(float *)(lVar9 + 0x28);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x4c) = fVar26 * *(float *)(lVar9 + 0x3c) + *(float *)(lVar9 + 0x2c);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x50) = *(float *)(lVar9 + 0x30) - fVar26 * *(float *)(lVar9 + 0x20);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x54) = *(float *)(lVar9 + 0x34) - fVar26 * *(float *)(lVar9 + 0x24);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x58) = *(float *)(lVar9 + 0x38) - fVar26 * *(float *)(lVar9 + 0x28);
    lVar9 = *(longlong *)(unaff_RBX + 0x210);
    *(float *)(lVar9 + 0x5c) = *(float *)(lVar9 + 0x3c) - fVar26 * *(float *)(lVar9 + 0x2c);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x2f0) + (longlong)*(int *)(unaff_RBX + 0x3d8) * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x44);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x2f8) + (longlong)*(int *)(unaff_RBX + 0x3dc) * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x48);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x300) + (longlong)*(int *)(unaff_RBX + 0x3e0) * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x4c);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x308) + (longlong)*(int *)(unaff_RBX + 0x3e4) * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x50);
    uVar3 = 0;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x310) + (longlong)*(int *)(unaff_RBX + 1000) * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x54);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x318) + (longlong)*(int *)(unaff_RBX + 0x3ec) * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x58);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 800) + (longlong)*(int *)(unaff_RBX + 0x3f0) * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x5c);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x328) + (longlong)*(int *)(unaff_RBX + 0x3f4) * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x40);
    if (0 < unaff_EBP) {
      uVar5 = unaff_EBP * param_3;
      do {
        iVar18 = 0;
        uVar4 = uVar3 & 7;
        uVar13 = (ulonglong)uVar4;
        fVar23 = 0.0;
        fVar22 = 0.0;
        iVar2 = unaff_EBP;
        if (3 < unaff_R13D) {
          uVar7 = (unaff_R13D - 4U >> 2) + 1;
          uVar8 = (ulonglong)uVar7;
          pfVar15 = (float *)((longlong)&stack0x00000050 + uVar13 * 4);
          plVar12 = (longlong *)(unaff_RBX + 0x2f0 + uVar13 * 8);
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
            fVar26 = *(float *)(*plVar12 + (longlong)(int)uVar7 * 4);
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
            fVar21 = *(float *)(*plVar16 + (longlong)(int)uVar7 * 4);
            uVar7 = *puVar6;
            if ((int)uVar3 < 8) {
              uVar7 = uVar7 - 1 & *puVar11;
              *puVar6 = uVar7;
            }
            fVar20 = *pfVar15;
            puVar6 = puVar6 + unaff_EBP;
            fVar19 = *(float *)(*plVar17 + (longlong)(int)uVar7 * 4);
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
                     *(float *)(plVar17[unaff_EBP] + (longlong)(int)uVar7 * 4);
            uVar8 = uVar8 - 1;
            iVar2 = param_6._4_4_;
          } while (uVar8 != 0);
        }
        unaff_EBP = iVar2;
        if (iVar18 < unaff_R13D) {
          plVar12 = (longlong *)(unaff_RBX + 0x2f0 + (longlong)(int)uVar4 * 8);
          uVar13 = (ulonglong)(uint)(unaff_R13D - iVar18);
          puVar6 = (uint *)(unaff_RBX + 0x438 + (longlong)(int)uVar4 * 4);
          do {
            uVar4 = *puVar6;
            if ((int)uVar3 < 8) {
              uVar4 = uVar4 - 1 & puVar6[-0x20];
              *puVar6 = uVar4;
            }
            fVar22 = fVar22 + *(float *)(((longlong)afStack_3e8 - unaff_RBX) + (longlong)puVar6);
            puVar6 = puVar6 + unaff_EBP;
            lVar9 = *plVar12;
            plVar12 = plVar12 + unaff_EBP;
            fVar23 = fVar23 + *(float *)(lVar9 + (longlong)(int)uVar4 * 4);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (in_stack_00000190 != 0.0) {
          fVar22 = in_stack_00000190 * *(float *)(param_8 + (ulonglong)uVar5 * 4) + fVar22;
        }
        uVar3 = uVar3 + 1;
        *(float *)(param_9 + (ulonglong)uVar5 * 4) = fVar23 + fVar22;
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
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807ed0a0(void)
void FUN_1807ed0a0(void)

{
  ulonglong in_stack_00000070;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807ed0d0(longlong param_1,float param_2,float param_3,float param_4,float param_5,
void FUN_1807ed0d0(longlong param_1,float param_2,float param_3,float param_4,float param_5,
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

undefined8 FUN_1807ed550(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != (int)param_1[2]) {
    *(int *)(param_1 + 2) = param_2;
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_18097db40,0xda,1);
    }
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 4 + 0x10,&UNK_18097db40,
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




// 函数: void FUN_1807ed610(longlong *param_1)
void FUN_1807ed610(longlong *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_18097db40,100,1);
  }
  if (param_1[0xa5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0xa5],&UNK_18097db40,0xbb,1);
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






