#include "TaleWorlds.Native.Split.h"

// 99_part_12_part066.c - 1 个函数

// 函数: void FUN_1807f7eb0(longlong param_1)
void FUN_1807f7eb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1807897b0(*(uint64_t *)(param_1 + 0x48),*(uint64_t *)(param_1 + 0x30),
                        *(uint64_t *)(param_1 + 0x68),0,1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10) + 1;
                    // WARNING: Subroutine does not return
    memcpy(*(longlong *)(param_1 + 0x60) + (longlong)(iVar1 * *(int *)(param_1 + 0x28)) * 8,
           *(uint64_t *)(param_1 + 0x68),(longlong)iVar1 << 3);
  }
  return;
}



uint64_t FUN_1807f7f90(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
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
  float fVar15;
  float fVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  uint64_t uVar21;
  float *pfVar22;
  longlong lVar23;
  uint *puVar24;
  float *pfVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float *pfVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  float fVar35;
  
  iVar34 = 0;
  iVar28 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar32 = *(int *)(param_1 + 0x10);
      lVar33 = *(longlong *)(param_1 + 0x60);
      lVar19 = *(longlong *)(param_1 + 0x70);
      pfVar31 = *(float **)(param_1 + 0x78);
      iVar26 = ((*(int *)(param_1 + 0x18) + iVar28 + *(int *)(param_1 + 0x54)) %
               *(int *)(param_1 + 0x20)) * (iVar32 + 1);
      iVar30 = (iVar32 + 1) * iVar28;
      iVar29 = iVar32 >> 2;
      pfVar22 = (float *)(lVar33 + (longlong)iVar26 * 8);
      pfVar17 = (float *)(lVar19 + (longlong)iVar30 * 8);
      if (iVar29 != 0) {
        do {
          fVar35 = pfVar17[1];
          fVar2 = pfVar22[6];
          fVar3 = pfVar22[7];
          fVar4 = *pfVar17;
          fVar5 = *pfVar22;
          fVar6 = pfVar22[1];
          fVar7 = pfVar22[2];
          fVar8 = pfVar17[2];
          fVar9 = pfVar22[3];
          fVar10 = pfVar17[3];
          fVar11 = pfVar22[4];
          fVar12 = pfVar17[4];
          fVar13 = pfVar22[5];
          pfVar22 = pfVar22 + 8;
          fVar14 = pfVar17[5];
          fVar15 = pfVar17[6];
          fVar16 = pfVar17[7];
          pfVar17 = pfVar17 + 8;
          *pfVar31 = (fVar4 * fVar5 - fVar35 * fVar6) + *pfVar31;
          pfVar31[1] = fVar6 * fVar4 + fVar35 * fVar5 + pfVar31[1];
          pfVar31[3] = fVar9 * fVar8 + fVar10 * fVar7 + pfVar31[3];
          pfVar31[2] = (fVar8 * fVar7 - fVar10 * fVar9) + pfVar31[2];
          pfVar31[5] = fVar13 * fVar12 + fVar14 * fVar11 + pfVar31[5];
          pfVar31[4] = (fVar12 * fVar11 - fVar14 * fVar13) + pfVar31[4];
          pfVar31[7] = fVar3 * fVar15 + fVar16 * fVar2 + pfVar31[7];
          pfVar31[6] = (fVar15 * fVar2 - fVar16 * fVar3) + pfVar31[6];
          pfVar31 = pfVar31 + 8;
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
        iVar32 = *(int *)(param_1 + 0x10);
        lVar33 = *(longlong *)(param_1 + 0x60);
        lVar19 = *(longlong *)(param_1 + 0x70);
        pfVar31 = *(float **)(param_1 + 0x78);
      }
      iVar28 = iVar28 + 1;
      lVar27 = (longlong)(iVar32 + iVar26);
      lVar23 = (longlong)(iVar32 + iVar30);
      lVar18 = (longlong)iVar32;
      fVar35 = *(float *)(lVar33 + 4 + lVar27 * 8);
      fVar2 = *(float *)(lVar19 + lVar23 * 8);
      fVar3 = *(float *)(lVar19 + 4 + lVar23 * 8);
      fVar4 = *(float *)(lVar33 + lVar27 * 8);
      fVar5 = pfVar31[lVar18 * 2 + 1];
      pfVar31[lVar18 * 2] = (fVar2 * fVar4 - fVar3 * fVar35) + pfVar31[lVar18 * 2];
      pfVar31[lVar18 * 2 + 1] = fVar2 * fVar35 + fVar3 * fVar4 + fVar5;
    } while (iVar28 < *(int *)(param_1 + 0x14));
  }
  lVar33 = *(longlong *)(param_1 + 0x78);
  lVar19 = (longlong)*(int *)(param_1 + 0x24);
  iVar28 = *(int *)(param_1 + 0x10);
  puVar24 = (uint *)(lVar19 * 8 + -0xc + lVar33);
  *puVar24 = *(uint *)(lVar33 + 0x14) ^ 0x80000000;
  *(uint *)(lVar33 + -0x14 + lVar19 * 8) = *(uint *)(lVar33 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar33 + -0x1c + lVar19 * 8) = *(uint *)(lVar33 + 0x24) ^ 0x80000000;
  iVar28 = (iVar28 >> 2) + -1;
  if (iVar28 != 0) {
    puVar20 = (uint *)(lVar33 + 0x34);
    do {
      puVar24[-6] = puVar20[-2] ^ 0x80000000;
      puVar24[-8] = *puVar20 ^ 0x80000000;
      puVar24[-10] = puVar20[2] ^ 0x80000000;
      puVar24[-0xc] = puVar20[4] ^ 0x80000000;
      iVar28 = iVar28 + -1;
      puVar20 = puVar20 + 8;
      puVar24 = puVar24 + -8;
    } while (iVar28 != 0);
  }
  uVar21 = FUN_180789a00(*(uint64_t *)(param_1 + 0x48),*(uint64_t *)(param_1 + 0x78),
                         *(uint64_t *)(param_1 + 0x80),0,1);
  if ((int)uVar21 == 0) {
    pfVar31 = *(float **)(param_1 + 0x80);
    pfVar22 = (float *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x5c) * 4);
    pfVar25 = *(float **)(param_1 + 0x40);
    pfVar17 = pfVar31 + *(int *)(param_1 + 0x10);
    fVar35 = 1.0 / (float)*(int *)(param_1 + 0x24);
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        fVar2 = pfVar31[1];
        iVar34 = iVar34 + 4;
        fVar3 = pfVar31[2];
        fVar4 = pfVar31[3];
        pfVar1 = pfVar17 + 1;
        fVar5 = pfVar17[2];
        fVar6 = pfVar17[3];
        fVar12 = *pfVar17;
        pfVar17 = pfVar17 + 4;
        fVar7 = *pfVar25;
        fVar8 = *pfVar31;
        fVar9 = pfVar25[1];
        fVar10 = pfVar25[2];
        fVar11 = pfVar25[3];
        pfVar25[1] = *pfVar1;
        pfVar31 = pfVar31 + 4;
        pfVar25[2] = fVar5;
        pfVar25[3] = fVar6;
        *pfVar25 = fVar12;
        pfVar25 = pfVar25 + 4;
        *pfVar22 = (fVar7 + fVar8) * fVar35;
        pfVar22[1] = (fVar2 + fVar9) * fVar35;
        pfVar22[2] = (fVar3 + fVar10) * fVar35;
        pfVar22[3] = (fVar4 + fVar11) * fVar35;
        pfVar22 = pfVar22 + 4;
      } while (iVar34 < *(int *)(param_1 + 0x10));
    }
    uVar21 = 0;
  }
  return uVar21;
}



uint64_t FUN_1807f7fab(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
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
  float fVar15;
  float fVar16;
  longlong in_RAX;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  uint64_t uVar21;
  float *pfVar22;
  longlong lVar23;
  uint *puVar24;
  float *pfVar25;
  int iVar26;
  longlong lVar27;
  longlong unaff_RBX;
  int iVar28;
  uint64_t unaff_RBP;
  int iVar29;
  uint64_t unaff_RSI;
  int iVar30;
  uint64_t unaff_RDI;
  float *pfVar31;
  int iVar32;
  longlong lVar33;
  int unaff_R14D;
  float fVar34;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  if (unaff_R14D < *(int *)(param_1 + 0x14)) {
    *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
    *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
    *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
    *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
    *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
    *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
    *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
    *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
    *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
    *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
    *(int32_t *)(in_RAX + -0x68) = unaff_XMM10_Da;
    *(int32_t *)(in_RAX + -100) = unaff_XMM10_Db;
    *(int32_t *)(in_RAX + -0x60) = unaff_XMM10_Dc;
    *(int32_t *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
    *(int32_t *)(in_RAX + -0x78) = unaff_XMM11_Da;
    *(int32_t *)(in_RAX + -0x74) = unaff_XMM11_Db;
    *(int32_t *)(in_RAX + -0x70) = unaff_XMM11_Dc;
    *(int32_t *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
    iVar28 = unaff_R14D;
    do {
      iVar32 = *(int *)(unaff_RBX + 0x10);
      lVar33 = *(longlong *)(unaff_RBX + 0x60);
      lVar19 = *(longlong *)(unaff_RBX + 0x70);
      pfVar31 = *(float **)(unaff_RBX + 0x78);
      iVar26 = ((*(int *)(unaff_RBX + 0x18) + iVar28 + *(int *)(unaff_RBX + 0x54)) %
               *(int *)(unaff_RBX + 0x20)) * (iVar32 + 1);
      iVar30 = (iVar32 + 1) * iVar28;
      iVar29 = iVar32 >> 2;
      pfVar22 = (float *)(lVar33 + (longlong)iVar26 * 8);
      pfVar17 = (float *)(lVar19 + (longlong)iVar30 * 8);
      if (iVar29 != 0) {
        do {
          fVar34 = pfVar17[1];
          fVar2 = pfVar22[6];
          fVar3 = pfVar22[7];
          fVar4 = *pfVar17;
          fVar5 = *pfVar22;
          fVar6 = pfVar22[1];
          fVar7 = pfVar22[2];
          fVar8 = pfVar17[2];
          fVar9 = pfVar22[3];
          fVar10 = pfVar17[3];
          fVar11 = pfVar22[4];
          fVar12 = pfVar17[4];
          fVar13 = pfVar22[5];
          pfVar22 = pfVar22 + 8;
          fVar14 = pfVar17[5];
          fVar15 = pfVar17[6];
          fVar16 = pfVar17[7];
          pfVar17 = pfVar17 + 8;
          *pfVar31 = (fVar4 * fVar5 - fVar34 * fVar6) + *pfVar31;
          pfVar31[1] = fVar6 * fVar4 + fVar34 * fVar5 + pfVar31[1];
          pfVar31[3] = fVar9 * fVar8 + fVar10 * fVar7 + pfVar31[3];
          pfVar31[2] = (fVar8 * fVar7 - fVar10 * fVar9) + pfVar31[2];
          pfVar31[5] = fVar13 * fVar12 + fVar14 * fVar11 + pfVar31[5];
          pfVar31[4] = (fVar12 * fVar11 - fVar14 * fVar13) + pfVar31[4];
          pfVar31[7] = fVar3 * fVar15 + fVar16 * fVar2 + pfVar31[7];
          pfVar31[6] = (fVar15 * fVar2 - fVar16 * fVar3) + pfVar31[6];
          pfVar31 = pfVar31 + 8;
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
        iVar32 = *(int *)(unaff_RBX + 0x10);
        lVar33 = *(longlong *)(unaff_RBX + 0x60);
        lVar19 = *(longlong *)(unaff_RBX + 0x70);
        pfVar31 = *(float **)(unaff_RBX + 0x78);
      }
      iVar28 = iVar28 + 1;
      lVar27 = (longlong)(iVar32 + iVar26);
      lVar23 = (longlong)(iVar32 + iVar30);
      lVar18 = (longlong)iVar32;
      fVar34 = *(float *)(lVar33 + 4 + lVar27 * 8);
      fVar2 = *(float *)(lVar19 + lVar23 * 8);
      fVar3 = *(float *)(lVar19 + 4 + lVar23 * 8);
      fVar4 = *(float *)(lVar33 + lVar27 * 8);
      fVar5 = pfVar31[lVar18 * 2 + 1];
      pfVar31[lVar18 * 2] = (fVar2 * fVar4 - fVar3 * fVar34) + pfVar31[lVar18 * 2];
      pfVar31[lVar18 * 2 + 1] = fVar2 * fVar34 + fVar3 * fVar4 + fVar5;
    } while (iVar28 < *(int *)(unaff_RBX + 0x14));
  }
  lVar33 = *(longlong *)(unaff_RBX + 0x78);
  lVar19 = (longlong)*(int *)(unaff_RBX + 0x24);
  iVar28 = *(int *)(unaff_RBX + 0x10);
  puVar24 = (uint *)(lVar19 * 8 + -0xc + lVar33);
  *puVar24 = *(uint *)(lVar33 + 0x14) ^ 0x80000000;
  *(uint *)(lVar33 + -0x14 + lVar19 * 8) = *(uint *)(lVar33 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar33 + -0x1c + lVar19 * 8) = *(uint *)(lVar33 + 0x24) ^ 0x80000000;
  iVar28 = (iVar28 >> 2) + -1;
  if (iVar28 != 0) {
    puVar20 = (uint *)(lVar33 + 0x34);
    do {
      puVar24[-6] = puVar20[-2] ^ 0x80000000;
      puVar24[-8] = *puVar20 ^ 0x80000000;
      puVar24[-10] = puVar20[2] ^ 0x80000000;
      puVar24[-0xc] = puVar20[4] ^ 0x80000000;
      iVar28 = iVar28 + -1;
      puVar20 = puVar20 + 8;
      puVar24 = puVar24 + -8;
    } while (iVar28 != 0);
  }
  uVar21 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar21 == 0) {
    pfVar31 = *(float **)(unaff_RBX + 0x80);
    pfVar22 = (float *)(*(longlong *)(unaff_RBX + 0x38) + (longlong)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar25 = *(float **)(unaff_RBX + 0x40);
    pfVar17 = pfVar31 + *(int *)(unaff_RBX + 0x10);
    fVar34 = 1.0 / (float)*(int *)(unaff_RBX + 0x24);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar2 = pfVar31[1];
        unaff_R14D = unaff_R14D + 4;
        fVar3 = pfVar31[2];
        fVar4 = pfVar31[3];
        pfVar1 = pfVar17 + 1;
        fVar5 = pfVar17[2];
        fVar6 = pfVar17[3];
        fVar12 = *pfVar17;
        pfVar17 = pfVar17 + 4;
        fVar7 = *pfVar25;
        fVar8 = *pfVar31;
        fVar9 = pfVar25[1];
        fVar10 = pfVar25[2];
        fVar11 = pfVar25[3];
        pfVar25[1] = *pfVar1;
        pfVar31 = pfVar31 + 4;
        pfVar25[2] = fVar5;
        pfVar25[3] = fVar6;
        *pfVar25 = fVar12;
        pfVar25 = pfVar25 + 4;
        *pfVar22 = (fVar7 + fVar8) * fVar34;
        pfVar22[1] = (fVar2 + fVar9) * fVar34;
        pfVar22[2] = (fVar3 + fVar10) * fVar34;
        pfVar22[3] = (fVar4 + fVar11) * fVar34;
        pfVar22 = pfVar22 + 4;
      } while (unaff_R14D < *(int *)(unaff_RBX + 0x10));
    }
    uVar21 = 0;
  }
  return uVar21;
}



uint64_t FUN_1807f7fbc(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
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
  float fVar15;
  float fVar16;
  longlong in_RAX;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  uint64_t uVar21;
  float *pfVar22;
  longlong lVar23;
  uint *puVar24;
  float *pfVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  longlong unaff_RBX;
  int unaff_EBP;
  int iVar29;
  uint64_t unaff_RSI;
  int iVar30;
  uint64_t unaff_RDI;
  float *pfVar31;
  longlong lVar32;
  int unaff_R14D;
  float fVar33;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
  do {
    iVar27 = *(int *)(unaff_RBX + 0x10);
    lVar32 = *(longlong *)(unaff_RBX + 0x60);
    lVar19 = *(longlong *)(unaff_RBX + 0x70);
    pfVar31 = *(float **)(unaff_RBX + 0x78);
    iVar26 = ((*(int *)(unaff_RBX + 0x18) + unaff_EBP + *(int *)(unaff_RBX + 0x54)) %
             *(int *)(unaff_RBX + 0x20)) * (iVar27 + 1);
    iVar30 = (iVar27 + 1) * unaff_EBP;
    iVar29 = iVar27 >> 2;
    pfVar22 = (float *)(lVar32 + (longlong)iVar26 * 8);
    pfVar17 = (float *)(lVar19 + (longlong)iVar30 * 8);
    if (iVar29 != 0) {
      do {
        fVar33 = pfVar17[1];
        fVar2 = pfVar22[6];
        fVar3 = pfVar22[7];
        fVar4 = *pfVar17;
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        fVar7 = pfVar22[2];
        fVar8 = pfVar17[2];
        fVar9 = pfVar22[3];
        fVar10 = pfVar17[3];
        fVar11 = pfVar22[4];
        fVar12 = pfVar17[4];
        fVar13 = pfVar22[5];
        pfVar22 = pfVar22 + 8;
        fVar14 = pfVar17[5];
        fVar15 = pfVar17[6];
        fVar16 = pfVar17[7];
        pfVar17 = pfVar17 + 8;
        *pfVar31 = (fVar4 * fVar5 - fVar33 * fVar6) + *pfVar31;
        pfVar31[1] = fVar6 * fVar4 + fVar33 * fVar5 + pfVar31[1];
        pfVar31[3] = fVar9 * fVar8 + fVar10 * fVar7 + pfVar31[3];
        pfVar31[2] = (fVar8 * fVar7 - fVar10 * fVar9) + pfVar31[2];
        pfVar31[5] = fVar13 * fVar12 + fVar14 * fVar11 + pfVar31[5];
        pfVar31[4] = (fVar12 * fVar11 - fVar14 * fVar13) + pfVar31[4];
        pfVar31[7] = fVar3 * fVar15 + fVar16 * fVar2 + pfVar31[7];
        pfVar31[6] = (fVar15 * fVar2 - fVar16 * fVar3) + pfVar31[6];
        pfVar31 = pfVar31 + 8;
        iVar29 = iVar29 + -1;
      } while (iVar29 != 0);
      iVar27 = *(int *)(unaff_RBX + 0x10);
      lVar32 = *(longlong *)(unaff_RBX + 0x60);
      lVar19 = *(longlong *)(unaff_RBX + 0x70);
      pfVar31 = *(float **)(unaff_RBX + 0x78);
    }
    unaff_EBP = unaff_EBP + 1;
    lVar28 = (longlong)(iVar27 + iVar26);
    lVar23 = (longlong)(iVar27 + iVar30);
    lVar18 = (longlong)iVar27;
    fVar33 = *(float *)(lVar32 + 4 + lVar28 * 8);
    fVar2 = *(float *)(lVar19 + lVar23 * 8);
    fVar3 = *(float *)(lVar19 + 4 + lVar23 * 8);
    fVar4 = *(float *)(lVar32 + lVar28 * 8);
    fVar5 = pfVar31[lVar18 * 2 + 1];
    pfVar31[lVar18 * 2] = (fVar2 * fVar4 - fVar3 * fVar33) + pfVar31[lVar18 * 2];
    pfVar31[lVar18 * 2 + 1] = fVar2 * fVar33 + fVar3 * fVar4 + fVar5;
  } while (unaff_EBP < *(int *)(unaff_RBX + 0x14));
  lVar32 = *(longlong *)(unaff_RBX + 0x78);
  lVar19 = (longlong)*(int *)(unaff_RBX + 0x24);
  iVar27 = *(int *)(unaff_RBX + 0x10);
  puVar24 = (uint *)(lVar19 * 8 + -0xc + lVar32);
  *puVar24 = *(uint *)(lVar32 + 0x14) ^ 0x80000000;
  *(uint *)(lVar32 + -0x14 + lVar19 * 8) = *(uint *)(lVar32 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar32 + -0x1c + lVar19 * 8) = *(uint *)(lVar32 + 0x24) ^ 0x80000000;
  iVar27 = (iVar27 >> 2) + -1;
  if (iVar27 != 0) {
    puVar20 = (uint *)(lVar32 + 0x34);
    do {
      puVar24[-6] = puVar20[-2] ^ 0x80000000;
      puVar24[-8] = *puVar20 ^ 0x80000000;
      puVar24[-10] = puVar20[2] ^ 0x80000000;
      puVar24[-0xc] = puVar20[4] ^ 0x80000000;
      iVar27 = iVar27 + -1;
      puVar20 = puVar20 + 8;
      puVar24 = puVar24 + -8;
    } while (iVar27 != 0);
  }
  uVar21 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar21 == 0) {
    pfVar31 = *(float **)(unaff_RBX + 0x80);
    pfVar22 = (float *)(*(longlong *)(unaff_RBX + 0x38) + (longlong)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar25 = *(float **)(unaff_RBX + 0x40);
    pfVar17 = pfVar31 + *(int *)(unaff_RBX + 0x10);
    fVar33 = 1.0 / (float)*(int *)(unaff_RBX + 0x24);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar2 = pfVar31[1];
        unaff_R14D = unaff_R14D + 4;
        fVar3 = pfVar31[2];
        fVar4 = pfVar31[3];
        pfVar1 = pfVar17 + 1;
        fVar5 = pfVar17[2];
        fVar6 = pfVar17[3];
        fVar12 = *pfVar17;
        pfVar17 = pfVar17 + 4;
        fVar7 = *pfVar25;
        fVar8 = *pfVar31;
        fVar9 = pfVar25[1];
        fVar10 = pfVar25[2];
        fVar11 = pfVar25[3];
        pfVar25[1] = *pfVar1;
        pfVar31 = pfVar31 + 4;
        pfVar25[2] = fVar5;
        pfVar25[3] = fVar6;
        *pfVar25 = fVar12;
        pfVar25 = pfVar25 + 4;
        *pfVar22 = (fVar7 + fVar8) * fVar33;
        pfVar22[1] = (fVar2 + fVar9) * fVar33;
        pfVar22[2] = (fVar3 + fVar10) * fVar33;
        pfVar22[3] = (fVar4 + fVar11) * fVar33;
        pfVar22 = pfVar22 + 4;
      } while (unaff_R14D < *(int *)(unaff_RBX + 0x10));
    }
    uVar21 = 0;
  }
  return uVar21;
}



uint64_t FUN_1807f827e(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  uint64_t uVar16;
  uint *puVar17;
  float *pfVar18;
  int iVar19;
  longlong unaff_RBX;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  int unaff_R14D;
  float fVar23;
  
  lVar13 = *(longlong *)(unaff_RBX + 0x78);
  lVar14 = (longlong)*(int *)(unaff_RBX + 0x24);
  iVar19 = *(int *)(unaff_RBX + 0x10);
  puVar17 = (uint *)(lVar14 * 8 + -0xc + lVar13);
  *puVar17 = *(uint *)(lVar13 + 0x14) ^ 0x80000000;
  *(uint *)(lVar13 + -0x14 + lVar14 * 8) = *(uint *)(lVar13 + 0x1c) ^ 0x80000000;
  *(uint *)(lVar13 + -0x1c + lVar14 * 8) = *(uint *)(lVar13 + 0x24) ^ 0x80000000;
  iVar19 = (iVar19 >> 2) + -1;
  if (iVar19 != 0) {
    puVar15 = (uint *)(lVar13 + 0x34);
    do {
      puVar17[-6] = puVar15[-2] ^ 0x80000000;
      puVar17[-8] = *puVar15 ^ 0x80000000;
      puVar17[-10] = puVar15[2] ^ 0x80000000;
      puVar17[-0xc] = puVar15[4] ^ 0x80000000;
      iVar19 = iVar19 + -1;
      puVar15 = puVar15 + 8;
      puVar17 = puVar17 + -8;
    } while (iVar19 != 0);
  }
  uVar16 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar16 == 0) {
    pfVar20 = *(float **)(unaff_RBX + 0x80);
    pfVar22 = (float *)(*(longlong *)(unaff_RBX + 0x38) + (longlong)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar18 = *(float **)(unaff_RBX + 0x40);
    pfVar21 = pfVar20 + *(int *)(unaff_RBX + 0x10);
    fVar23 = 1.0 / (float)*(int *)(unaff_RBX + 0x24);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar2 = pfVar20[1];
        unaff_R14D = unaff_R14D + 4;
        fVar3 = pfVar20[2];
        fVar4 = pfVar20[3];
        pfVar1 = pfVar21 + 1;
        fVar5 = pfVar21[2];
        fVar6 = pfVar21[3];
        fVar12 = *pfVar21;
        pfVar21 = pfVar21 + 4;
        fVar7 = *pfVar18;
        fVar8 = *pfVar20;
        fVar9 = pfVar18[1];
        fVar10 = pfVar18[2];
        fVar11 = pfVar18[3];
        pfVar18[1] = *pfVar1;
        pfVar20 = pfVar20 + 4;
        pfVar18[2] = fVar5;
        pfVar18[3] = fVar6;
        *pfVar18 = fVar12;
        pfVar18 = pfVar18 + 4;
        *pfVar22 = (fVar7 + fVar8) * fVar23;
        pfVar22[1] = (fVar2 + fVar9) * fVar23;
        pfVar22[2] = (fVar3 + fVar10) * fVar23;
        pfVar22[3] = (fVar4 + fVar11) * fVar23;
        pfVar22 = pfVar22 + 4;
      } while (unaff_R14D < *(int *)(unaff_RBX + 0x10));
    }
    uVar16 = 0;
  }
  return uVar16;
}



uint64_t FUN_1807f82d9(uint *param_1,int param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint *puVar13;
  uint64_t uVar14;
  float *pfVar15;
  longlong unaff_RBX;
  longlong in_R8;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  int unaff_R14D;
  float fVar19;
  
  puVar13 = (uint *)(in_R8 + 0x34);
  do {
    param_1[-6] = puVar13[-2] ^ param_3;
    param_1[-8] = *puVar13 ^ param_3;
    param_1[-10] = puVar13[2] ^ param_3;
    param_1[-0xc] = puVar13[4] ^ param_3;
    param_2 = param_2 + -1;
    puVar13 = puVar13 + 8;
    param_1 = param_1 + -8;
  } while (param_2 != 0);
  uVar14 = FUN_180789a00(*(uint64_t *)(unaff_RBX + 0x48),*(uint64_t *)(unaff_RBX + 0x78),
                         *(uint64_t *)(unaff_RBX + 0x80),0,1);
  if ((int)uVar14 == 0) {
    pfVar16 = *(float **)(unaff_RBX + 0x80);
    pfVar18 = (float *)(*(longlong *)(unaff_RBX + 0x38) + (longlong)*(int *)(unaff_RBX + 0x5c) * 4);
    pfVar15 = *(float **)(unaff_RBX + 0x40);
    pfVar17 = pfVar16 + *(int *)(unaff_RBX + 0x10);
    fVar19 = 1.0 / (float)*(int *)(unaff_RBX + 0x24);
    if (0 < *(int *)(unaff_RBX + 0x10)) {
      do {
        fVar2 = pfVar16[1];
        unaff_R14D = unaff_R14D + 4;
        fVar3 = pfVar16[2];
        fVar4 = pfVar16[3];
        pfVar1 = pfVar17 + 1;
        fVar5 = pfVar17[2];
        fVar6 = pfVar17[3];
        fVar12 = *pfVar17;
        pfVar17 = pfVar17 + 4;
        fVar7 = *pfVar15;
        fVar8 = *pfVar16;
        fVar9 = pfVar15[1];
        fVar10 = pfVar15[2];
        fVar11 = pfVar15[3];
        pfVar15[1] = *pfVar1;
        pfVar16 = pfVar16 + 4;
        pfVar15[2] = fVar5;
        pfVar15[3] = fVar6;
        *pfVar15 = fVar12;
        pfVar15 = pfVar15 + 4;
        *pfVar18 = (fVar7 + fVar8) * fVar19;
        pfVar18[1] = (fVar2 + fVar9) * fVar19;
        pfVar18[2] = (fVar3 + fVar10) * fVar19;
        pfVar18[3] = (fVar4 + fVar11) * fVar19;
        pfVar18 = pfVar18 + 4;
      } while (unaff_R14D < *(int *)(unaff_RBX + 0x10));
    }
    uVar14 = 0;
  }
  return uVar14;
}






