#include "TaleWorlds.Native.Split.h"

// 99_part_03_part065.c - 9 个函数

// 函数: void FUN_18023703c(int64_t param_1,float *param_2,char param_3,float param_4)
void FUN_18023703c(int64_t param_1,float *param_2,char param_3,float param_4)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t lVar4;
  float *pfVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint unaff_EBX;
  uint64_t uVar8;
  uint uVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  
  uVar8 = (uint64_t)unaff_EBX;
  lVar10 = (int64_t)*(int *)(in_RAX + 0x10);
  if (3 < lVar10) {
    uVar6 = (uint64_t)unaff_EBX;
    lVar7 = (lVar10 - 4U >> 2) + 1;
    uVar8 = lVar7 * 4;
    do {
      lVar4 = *(int64_t *)(in_RAX + 0x18);
      *(float *)(uVar6 + lVar4) = *(float *)(uVar6 + lVar4) * *param_2;
      *(float *)(uVar6 + 4 + lVar4) = *(float *)(uVar6 + 4 + lVar4) * param_2[1];
      *(float *)(uVar6 + 8 + lVar4) = *(float *)(uVar6 + 8 + lVar4) * param_2[2];
      lVar4 = *(int64_t *)(param_1 + 8);
      if (*(uint *)(lVar4 + 0x38) != unaff_EBX) {
        lVar4 = *(int64_t *)(lVar4 + 0x40);
        *(float *)(uVar6 + lVar4) = *param_2 * *(float *)(uVar6 + lVar4);
        *(float *)(uVar6 + 4 + lVar4) = param_2[1] * *(float *)(uVar6 + 4 + lVar4);
        *(float *)(uVar6 + 8 + lVar4) = *(float *)(uVar6 + 8 + lVar4) * param_2[2];
        lVar4 = *(int64_t *)(param_1 + 8);
      }
      lVar4 = *(int64_t *)(lVar4 + 0x18);
      *(float *)(lVar4 + 0x10 + uVar6) = *(float *)(lVar4 + 0x10 + uVar6) * *param_2;
      *(float *)(lVar4 + 0x14 + uVar6) = *(float *)(lVar4 + 0x14 + uVar6) * param_2[1];
      *(float *)(lVar4 + 0x18 + uVar6) = *(float *)(lVar4 + 0x18 + uVar6) * param_2[2];
      lVar4 = *(int64_t *)(param_1 + 8);
      if (*(uint *)(lVar4 + 0x38) != unaff_EBX) {
        lVar4 = *(int64_t *)(lVar4 + 0x40);
        *(float *)(lVar4 + 0x10 + uVar6) = *param_2 * *(float *)(lVar4 + 0x10 + uVar6);
        *(float *)(lVar4 + 0x14 + uVar6) = param_2[1] * *(float *)(lVar4 + 0x14 + uVar6);
        *(float *)(lVar4 + 0x18 + uVar6) = *(float *)(lVar4 + 0x18 + uVar6) * param_2[2];
        lVar4 = *(int64_t *)(param_1 + 8);
      }
      lVar4 = *(int64_t *)(lVar4 + 0x18);
      *(float *)(uVar6 + 0x20 + lVar4) = *(float *)(uVar6 + 0x20 + lVar4) * *param_2;
      *(float *)(uVar6 + 0x24 + lVar4) = *(float *)(uVar6 + 0x24 + lVar4) * param_2[1];
      *(float *)(uVar6 + 0x28 + lVar4) = *(float *)(uVar6 + 0x28 + lVar4) * param_2[2];
      lVar4 = *(int64_t *)(param_1 + 8);
      if (*(uint *)(lVar4 + 0x38) != unaff_EBX) {
        lVar4 = *(int64_t *)(lVar4 + 0x40);
        *(float *)(uVar6 + 0x20 + lVar4) = *param_2 * *(float *)(uVar6 + 0x20 + lVar4);
        *(float *)(uVar6 + 0x24 + lVar4) = param_2[1] * *(float *)(uVar6 + 0x24 + lVar4);
        *(float *)(uVar6 + 0x28 + lVar4) = *(float *)(uVar6 + 0x28 + lVar4) * param_2[2];
        lVar4 = *(int64_t *)(param_1 + 8);
      }
      lVar4 = *(int64_t *)(lVar4 + 0x18);
      *(float *)(uVar6 + 0x30 + lVar4) = *(float *)(uVar6 + 0x30 + lVar4) * *param_2;
      *(float *)(uVar6 + 0x34 + lVar4) = *(float *)(uVar6 + 0x34 + lVar4) * param_2[1];
      *(float *)(uVar6 + 0x38 + lVar4) = *(float *)(uVar6 + 0x38 + lVar4) * param_2[2];
      in_RAX = *(int64_t *)(param_1 + 8);
      if (*(uint *)(in_RAX + 0x38) != unaff_EBX) {
        lVar4 = *(int64_t *)(in_RAX + 0x40);
        *(float *)(uVar6 + 0x30 + lVar4) = *param_2 * *(float *)(uVar6 + 0x30 + lVar4);
        *(float *)(uVar6 + 0x34 + lVar4) = param_2[1] * *(float *)(uVar6 + 0x34 + lVar4);
        *(float *)(uVar6 + 0x38 + lVar4) = *(float *)(uVar6 + 0x38 + lVar4) * param_2[2];
        in_RAX = *(int64_t *)(param_1 + 8);
      }
      uVar6 = uVar6 + 0x40;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((int64_t)uVar8 < lVar10) {
    lVar7 = uVar8 << 4;
    lVar10 = lVar10 - uVar8;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x18);
      *(float *)(lVar7 + lVar4) = *(float *)(lVar7 + lVar4) * *param_2;
      *(float *)(lVar7 + 4 + lVar4) = *(float *)(lVar7 + 4 + lVar4) * param_2[1];
      *(float *)(lVar7 + 8 + lVar4) = *(float *)(lVar7 + 8 + lVar4) * param_2[2];
      in_RAX = *(int64_t *)(param_1 + 8);
      if (*(uint *)(in_RAX + 0x38) != unaff_EBX) {
        lVar4 = *(int64_t *)(in_RAX + 0x40);
        *(float *)(lVar7 + lVar4) = *param_2 * *(float *)(lVar7 + lVar4);
        *(float *)(lVar7 + 4 + lVar4) = param_2[1] * *(float *)(lVar7 + 4 + lVar4);
        *(float *)(lVar7 + 8 + lVar4) = *(float *)(lVar7 + 8 + lVar4) * param_2[2];
        in_RAX = *(int64_t *)(param_1 + 8);
      }
      lVar7 = lVar7 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((param_3 != '\0') && (*(int *)(in_RAX + 0x60) == 4)) {
    lVar10 = *(int64_t *)(in_RAX + 0x68);
    param_4 = (*(float *)(lVar10 + 0x48) - *(float *)(lVar10 + 0x100)) * param_4;
    *(float *)(lVar10 + 0x48) = param_4 + *(float *)(lVar10 + 0x100);
    lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
    *(float *)(lVar10 + 0xa4) = param_4 + *(float *)(lVar10 + 0x100);
    in_RAX = *(int64_t *)(param_1 + 8);
  }
  uVar8 = (uint64_t)unaff_EBX;
  if ((ushort)unaff_EBX < *(ushort *)(in_RAX + 0xc0)) {
    do {
      lVar10 = *(int64_t *)(in_RAX + 0xb0);
      pfVar5 = *(float **)(lVar10 + 8 + uVar8 * 0x50);
      *(float **)(lVar10 + 0x10 + uVar8 * 0x50) = pfVar5;
      *(float **)(lVar10 + 0x18 + uVar8 * 0x50) =
           pfVar5 + (int64_t)*(int *)(lVar10 + uVar8 * 0x50) * 4;
      for (; in_RAX = *(int64_t *)(param_1 + 8),
          *(float **)(*(int64_t *)(in_RAX + 0xb0) + 0x18 + uVar8 * 0x50) != pfVar5;
          pfVar5 = pfVar5 + 4) {
        *pfVar5 = *param_2 * *pfVar5;
        pfVar5[1] = param_2[1] * pfVar5[1];
        pfVar5[2] = param_2[2] * pfVar5[2];
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar9;
    } while (uVar9 < *(ushort *)(in_RAX + 0xc0));
  }
  uVar9 = unaff_EBX;
  if (unaff_EBX < *(uint *)(in_RAX + 0x60)) {
    do {
      lVar7 = (int64_t)(int)uVar9 * 0x5c;
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar10 + 0x34 + lVar7) = *(float *)(lVar10 + 0x34 + lVar7) * *param_2;
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar10 + 0x38 + lVar7) = param_2[1] * *(float *)(lVar10 + 0x38 + lVar7);
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar10 + 0x3c + lVar7) = param_2[2] * *(float *)(lVar10 + 0x3c + lVar7);
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      fVar11 = *(float *)(lVar10 + 0x38 + lVar7);
      fVar13 = *(float *)(lVar10 + 0x34 + lVar7);
      fVar14 = *(float *)(lVar10 + 0x3c + lVar7);
      fVar12 = fVar13 * fVar13 + fVar11 * fVar11 + fVar14 * fVar14;
      auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar16 = auVar15._0_4_;
      fVar12 = fVar16 * 0.5 * (3.0 - fVar12 * fVar16 * fVar16);
      *(float *)(lVar10 + 0x34 + lVar7) = fVar13 * fVar12;
      *(float *)(lVar10 + 0x38 + lVar7) = fVar11 * fVar12;
      *(float *)(lVar10 + 0x3c + lVar7) = fVar14 * fVar12;
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar10 + 4 + lVar7) = *param_2 * *(float *)(lVar10 + 4 + lVar7);
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar10 + 8 + lVar7) = param_2[1] * *(float *)(lVar10 + 8 + lVar7);
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar10 + 0xc + lVar7) = *(float *)(lVar10 + 0xc + lVar7) * param_2[2];
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      fVar11 = *(float *)(lVar10 + 8 + lVar7);
      fVar13 = *(float *)(lVar10 + 4 + lVar7);
      fVar14 = *(float *)(lVar10 + 0xc + lVar7);
      fVar12 = fVar13 * fVar13 + fVar11 * fVar11 + fVar14 * fVar14;
      auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar16 = auVar15._0_4_;
      uVar9 = uVar9 + 1;
      fVar12 = fVar16 * 0.5 * (3.0 - fVar12 * fVar16 * fVar16);
      *(float *)(lVar10 + 4 + lVar7) = fVar13 * fVar12;
      *(float *)(lVar10 + 8 + lVar7) = fVar11 * fVar12;
      *(float *)(lVar10 + 0xc + lVar7) = fVar14 * fVar12;
      in_RAX = *(int64_t *)(param_1 + 8);
    } while (uVar9 < *(uint *)(in_RAX + 0x60));
  }
  iVar2 = CONCAT31((int3)(unaff_EBX >> 8),*param_2 <= 0.0 && *param_2 != 0.0);
  iVar3 = iVar2 + 1;
  if (0.0 <= param_2[1]) {
    iVar3 = iVar2;
  }
  iVar2 = iVar3 + 1;
  if (0.0 <= param_2[2]) {
    iVar2 = iVar3;
  }
  if ((iVar2 - 1U & 0xfffffffd) == 0) {
    uVar9 = unaff_EBX;
    if (unaff_EBX < *(uint *)(in_RAX + 0x88)) {
      do {
        lVar7 = (int64_t)(int)uVar9;
        uVar9 = uVar9 + 1;
        lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x90);
        uVar1 = *(int32_t *)(lVar10 + lVar7 * 0xc);
        *(int32_t *)(lVar10 + lVar7 * 0xc) = *(int32_t *)(lVar10 + 8 + lVar7 * 0xc);
        *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x90) + 8 + lVar7 * 0xc) = uVar1;
      } while (uVar9 < *(uint *)(*(int64_t *)(param_1 + 8) + 0x88));
    }
    *(int8_t *)(param_1 + 0x31) = 1;
  }
  *(int8_t *)(param_1 + 0x30) = 1;
  *(int8_t *)(param_1 + 0x32) = 1;
  if ((iVar2 != 0) && (unaff_EBX < *(uint *)(*(int64_t *)(param_1 + 8) + 0x60))) {
    do {
      lVar10 = (int64_t)(int)unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      lVar10 = lVar10 * 0x5c + *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      fVar16 = *(float *)(lVar10 + 0x14) * *param_2;
      *(float *)(lVar10 + 0x14) = fVar16;
      fVar11 = *(float *)(lVar10 + 0x18) * param_2[1];
      *(float *)(lVar10 + 0x18) = fVar11;
      fVar12 = *(float *)(lVar10 + 0x1c) * param_2[2];
      fVar13 = fVar16 * fVar16 + fVar11 * fVar11 + fVar12 * fVar12;
      auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar14 = auVar15._0_4_;
      fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
      *(float *)(lVar10 + 0x14) = fVar13 * fVar16;
      *(float *)(lVar10 + 0x18) = fVar13 * fVar11;
      *(float *)(lVar10 + 0x1c) = fVar13 * fVar12;
      fVar16 = *param_2 * *(float *)(lVar10 + 0x24);
      *(float *)(lVar10 + 0x24) = fVar16;
      fVar11 = param_2[1] * *(float *)(lVar10 + 0x28);
      *(float *)(lVar10 + 0x28) = fVar11;
      fVar12 = param_2[2] * *(float *)(lVar10 + 0x2c);
      fVar13 = fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12;
      auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar14 = auVar15._0_4_;
      fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
      *(float *)(lVar10 + 0x24) = fVar13 * fVar16;
      *(float *)(lVar10 + 0x28) = fVar13 * fVar11;
      *(float *)(lVar10 + 0x2c) = fVar13 * fVar12;
    } while (unaff_EBX < *(uint *)(*(int64_t *)(param_1 + 8) + 0x60));
  }
  *(int8_t *)(param_1 + 0x30) = 1;
  return;
}






// 函数: void FUN_180237339(uint64_t param_1,int64_t param_2,uint64_t param_3,float *param_4)
void FUN_180237339(uint64_t param_1,int64_t param_2,uint64_t param_3,float *param_4)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int64_t in_RAX;
  float *pfVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint unaff_EBX;
  int64_t in_R10;
  uint uVar7;
  uint64_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [16];
  float in_XMM3_Da;
  float fVar14;
  
  if (*(int *)(in_RAX + 0x60) == 4) {
    lVar5 = *(int64_t *)(in_RAX + 0x68);
    in_XMM3_Da = (*(float *)(lVar5 + 0x48) - *(float *)(lVar5 + 0x100)) * in_XMM3_Da;
    *(float *)(lVar5 + 0x48) = in_XMM3_Da + *(float *)(lVar5 + 0x100);
    lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
    *(float *)(lVar5 + 0xa4) = in_XMM3_Da + *(float *)(lVar5 + 0x100);
    param_2 = *(int64_t *)(in_R10 + 8);
  }
  uVar8 = (uint64_t)unaff_EBX;
  if ((ushort)unaff_EBX < *(ushort *)(param_2 + 0xc0)) {
    do {
      lVar5 = *(int64_t *)(param_2 + 0xb0);
      pfVar4 = *(float **)(lVar5 + 8 + uVar8 * 0x50);
      *(float **)(lVar5 + 0x10 + uVar8 * 0x50) = pfVar4;
      *(float **)(lVar5 + 0x18 + uVar8 * 0x50) =
           pfVar4 + (int64_t)*(int *)(lVar5 + uVar8 * 0x50) * 4;
      for (; param_2 = *(int64_t *)(in_R10 + 8),
          *(float **)(*(int64_t *)(param_2 + 0xb0) + 0x18 + uVar8 * 0x50) != pfVar4;
          pfVar4 = pfVar4 + 4) {
        *pfVar4 = *param_4 * *pfVar4;
        pfVar4[1] = param_4[1] * pfVar4[1];
        pfVar4[2] = param_4[2] * pfVar4[2];
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
    } while (uVar7 < *(ushort *)(param_2 + 0xc0));
  }
  uVar7 = unaff_EBX;
  if (unaff_EBX < *(uint *)(param_2 + 0x60)) {
    do {
      lVar6 = (int64_t)(int)uVar7 * 0x5c;
      lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      *(float *)(lVar5 + 0x34 + lVar6) = *(float *)(lVar5 + 0x34 + lVar6) * *param_4;
      lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      *(float *)(lVar5 + 0x38 + lVar6) = param_4[1] * *(float *)(lVar5 + 0x38 + lVar6);
      lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      *(float *)(lVar5 + 0x3c + lVar6) = param_4[2] * *(float *)(lVar5 + 0x3c + lVar6);
      lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      fVar9 = *(float *)(lVar5 + 0x38 + lVar6);
      fVar11 = *(float *)(lVar5 + 0x34 + lVar6);
      fVar12 = *(float *)(lVar5 + 0x3c + lVar6);
      fVar10 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12;
      auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar14 = auVar13._0_4_;
      fVar10 = fVar14 * 0.5 * (3.0 - fVar10 * fVar14 * fVar14);
      *(float *)(lVar5 + 0x34 + lVar6) = fVar11 * fVar10;
      *(float *)(lVar5 + 0x38 + lVar6) = fVar9 * fVar10;
      *(float *)(lVar5 + 0x3c + lVar6) = fVar12 * fVar10;
      lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      *(float *)(lVar5 + 4 + lVar6) = *param_4 * *(float *)(lVar5 + 4 + lVar6);
      lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      *(float *)(lVar5 + 8 + lVar6) = param_4[1] * *(float *)(lVar5 + 8 + lVar6);
      lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      *(float *)(lVar5 + 0xc + lVar6) = *(float *)(lVar5 + 0xc + lVar6) * param_4[2];
      lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      fVar9 = *(float *)(lVar5 + 8 + lVar6);
      fVar11 = *(float *)(lVar5 + 4 + lVar6);
      fVar12 = *(float *)(lVar5 + 0xc + lVar6);
      fVar10 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12;
      auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar14 = auVar13._0_4_;
      uVar7 = uVar7 + 1;
      fVar10 = fVar14 * 0.5 * (3.0 - fVar10 * fVar14 * fVar14);
      *(float *)(lVar5 + 4 + lVar6) = fVar11 * fVar10;
      *(float *)(lVar5 + 8 + lVar6) = fVar9 * fVar10;
      *(float *)(lVar5 + 0xc + lVar6) = fVar12 * fVar10;
      param_2 = *(int64_t *)(in_R10 + 8);
    } while (uVar7 < *(uint *)(param_2 + 0x60));
  }
  iVar2 = CONCAT31((int3)(unaff_EBX >> 8),*param_4 <= 0.0 && *param_4 != 0.0);
  iVar3 = iVar2 + 1;
  if (0.0 <= param_4[1]) {
    iVar3 = iVar2;
  }
  iVar2 = iVar3 + 1;
  if (0.0 <= param_4[2]) {
    iVar2 = iVar3;
  }
  if ((iVar2 - 1U & 0xfffffffd) == 0) {
    uVar7 = unaff_EBX;
    if (unaff_EBX < *(uint *)(param_2 + 0x88)) {
      do {
        lVar6 = (int64_t)(int)uVar7;
        uVar7 = uVar7 + 1;
        lVar5 = *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x90);
        uVar1 = *(int32_t *)(lVar5 + lVar6 * 0xc);
        *(int32_t *)(lVar5 + lVar6 * 0xc) = *(int32_t *)(lVar5 + 8 + lVar6 * 0xc);
        *(int32_t *)(*(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x90) + 8 + lVar6 * 0xc) = uVar1;
      } while (uVar7 < *(uint *)(*(int64_t *)(in_R10 + 8) + 0x88));
    }
    *(int8_t *)(in_R10 + 0x31) = 1;
  }
  *(int8_t *)(in_R10 + 0x30) = 1;
  *(int8_t *)(in_R10 + 0x32) = 1;
  if ((iVar2 != 0) && (unaff_EBX < *(uint *)(*(int64_t *)(in_R10 + 8) + 0x60))) {
    do {
      lVar5 = (int64_t)(int)unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      lVar5 = lVar5 * 0x5c + *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      fVar14 = *(float *)(lVar5 + 0x14) * *param_4;
      *(float *)(lVar5 + 0x14) = fVar14;
      fVar9 = *(float *)(lVar5 + 0x18) * param_4[1];
      *(float *)(lVar5 + 0x18) = fVar9;
      fVar10 = *(float *)(lVar5 + 0x1c) * param_4[2];
      fVar11 = fVar14 * fVar14 + fVar9 * fVar9 + fVar10 * fVar10;
      auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar12 = auVar13._0_4_;
      fVar11 = fVar12 * 0.5 * (3.0 - fVar11 * fVar12 * fVar12);
      *(float *)(lVar5 + 0x14) = fVar11 * fVar14;
      *(float *)(lVar5 + 0x18) = fVar11 * fVar9;
      *(float *)(lVar5 + 0x1c) = fVar11 * fVar10;
      fVar14 = *param_4 * *(float *)(lVar5 + 0x24);
      *(float *)(lVar5 + 0x24) = fVar14;
      fVar9 = param_4[1] * *(float *)(lVar5 + 0x28);
      *(float *)(lVar5 + 0x28) = fVar9;
      fVar10 = param_4[2] * *(float *)(lVar5 + 0x2c);
      fVar11 = fVar9 * fVar9 + fVar14 * fVar14 + fVar10 * fVar10;
      auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar12 = auVar13._0_4_;
      fVar11 = fVar12 * 0.5 * (3.0 - fVar11 * fVar12 * fVar12);
      *(float *)(lVar5 + 0x24) = fVar11 * fVar14;
      *(float *)(lVar5 + 0x28) = fVar11 * fVar9;
      *(float *)(lVar5 + 0x2c) = fVar11 * fVar10;
    } while (unaff_EBX < *(uint *)(*(int64_t *)(in_R10 + 8) + 0x60));
  }
  *(int8_t *)(in_R10 + 0x30) = 1;
  return;
}






// 函数: void FUN_1802376ab(void)
void FUN_1802376ab(void)

{
  int64_t lVar1;
  uint unaff_EBX;
  float *in_R9;
  int64_t in_R10;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t auVar5 [16];
  float fVar6;
  float fVar7;
  
  if (unaff_EBX < *(uint *)(*(int64_t *)(in_R10 + 8) + 0x60)) {
    do {
      lVar1 = (int64_t)(int)unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      lVar1 = lVar1 * 0x5c + *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
      fVar7 = *(float *)(lVar1 + 0x14) * *in_R9;
      *(float *)(lVar1 + 0x14) = fVar7;
      fVar2 = *(float *)(lVar1 + 0x18) * in_R9[1];
      *(float *)(lVar1 + 0x18) = fVar2;
      fVar6 = *(float *)(lVar1 + 0x1c) * in_R9[2];
      fVar3 = fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6;
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar3 = fVar4 * 0.5 * (3.0 - fVar3 * fVar4 * fVar4);
      *(float *)(lVar1 + 0x14) = fVar3 * fVar7;
      *(float *)(lVar1 + 0x18) = fVar3 * fVar2;
      *(float *)(lVar1 + 0x1c) = fVar3 * fVar6;
      fVar7 = *in_R9 * *(float *)(lVar1 + 0x24);
      *(float *)(lVar1 + 0x24) = fVar7;
      fVar2 = in_R9[1] * *(float *)(lVar1 + 0x28);
      *(float *)(lVar1 + 0x28) = fVar2;
      fVar6 = in_R9[2] * *(float *)(lVar1 + 0x2c);
      fVar3 = fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6;
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar3 = fVar4 * 0.5 * (3.0 - fVar3 * fVar4 * fVar4);
      *(float *)(lVar1 + 0x24) = fVar3 * fVar7;
      *(float *)(lVar1 + 0x28) = fVar3 * fVar2;
      *(float *)(lVar1 + 0x2c) = fVar3 * fVar6;
    } while (unaff_EBX < *(uint *)(*(int64_t *)(in_R10 + 8) + 0x60));
  }
  *(int8_t *)(in_R10 + 0x30) = 1;
  return;
}






// 函数: void FUN_1802376cc(void)
void FUN_1802376cc(void)

{
  int64_t lVar1;
  uint unaff_EBX;
  float *in_R9;
  int64_t in_R10;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t auVar5 [16];
  float fVar6;
  float fVar7;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  do {
    lVar1 = (int64_t)(int)unaff_EBX;
    unaff_EBX = unaff_EBX + 1;
    lVar1 = lVar1 * 0x5c + *(int64_t *)(*(int64_t *)(in_R10 + 8) + 0x68);
    fVar7 = *(float *)(lVar1 + 0x14) * *in_R9;
    *(float *)(lVar1 + 0x14) = fVar7;
    fVar2 = *(float *)(lVar1 + 0x18) * in_R9[1];
    *(float *)(lVar1 + 0x18) = fVar2;
    fVar6 = *(float *)(lVar1 + 0x1c) * in_R9[2];
    fVar3 = fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6;
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar3 = unaff_XMM9_Da * fVar4 * (unaff_XMM8_Da - fVar3 * fVar4 * fVar4);
    *(float *)(lVar1 + 0x14) = fVar3 * fVar7;
    *(float *)(lVar1 + 0x18) = fVar3 * fVar2;
    *(float *)(lVar1 + 0x1c) = fVar3 * fVar6;
    fVar7 = *in_R9 * *(float *)(lVar1 + 0x24);
    *(float *)(lVar1 + 0x24) = fVar7;
    fVar2 = in_R9[1] * *(float *)(lVar1 + 0x28);
    *(float *)(lVar1 + 0x28) = fVar2;
    fVar6 = in_R9[2] * *(float *)(lVar1 + 0x2c);
    fVar3 = fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6;
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar3 = unaff_XMM9_Da * fVar4 * (unaff_XMM10_Da - fVar3 * fVar4 * fVar4);
    *(float *)(lVar1 + 0x24) = fVar3 * fVar7;
    *(float *)(lVar1 + 0x28) = fVar3 * fVar2;
    *(float *)(lVar1 + 0x2c) = fVar3 * fVar6;
  } while (unaff_EBX < *(uint *)(*(int64_t *)(in_R10 + 8) + 0x60));
  *(int8_t *)(in_R10 + 0x30) = 1;
  return;
}






// 函数: void FUN_180237825(void)
void FUN_180237825(void)

{
  int64_t in_R10;
  
  *(int8_t *)(in_R10 + 0x30) = 1;
  return;
}






// 函数: void FUN_180237850(int64_t param_1,float *param_2)
void FUN_180237850(int64_t param_1,float *param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar6 = 0;
  lVar3 = *(int64_t *)(param_1 + 8);
  uVar2 = uVar6;
  uVar7 = uVar6;
  if (0 < *(int *)(lVar3 + 0x10)) {
    do {
      lVar3 = *(int64_t *)(lVar3 + 0x18);
      *(float *)(uVar7 + lVar3) = *param_2 + *(float *)(uVar7 + lVar3);
      *(float *)(uVar7 + 4 + lVar3) = *(float *)(uVar7 + 4 + lVar3) + param_2[1];
      *(float *)(uVar7 + 8 + lVar3) = *(float *)(uVar7 + 8 + lVar3) + param_2[2];
      lVar3 = *(int64_t *)(param_1 + 8);
      if (*(int *)(lVar3 + 0x38) != 0) {
        lVar3 = *(int64_t *)(lVar3 + 0x40);
        *(float *)(uVar7 + lVar3) = *(float *)(uVar7 + lVar3) + *param_2;
        *(float *)(uVar7 + 4 + lVar3) = param_2[1] + *(float *)(uVar7 + 4 + lVar3);
        *(float *)(uVar7 + 8 + lVar3) = *(float *)(uVar7 + 8 + lVar3) + param_2[2];
        lVar3 = *(int64_t *)(param_1 + 8);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
      uVar7 = uVar7 + 0x10;
    } while ((int)uVar1 < *(int *)(lVar3 + 0x10));
  }
  uVar2 = uVar6;
  uVar7 = uVar6;
  if (*(short *)(lVar3 + 0xc0) != 0) {
    do {
      uVar4 = uVar6;
      uVar5 = uVar6;
      if (0 < *(int *)(uVar7 + *(int64_t *)(lVar3 + 0xb0))) {
        do {
          uVar1 = (int)uVar5 + 1;
          lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0xb0) + 8 + uVar7);
          *(float *)(uVar4 + lVar3) = *(float *)(uVar4 + lVar3) + *param_2;
          *(float *)(uVar4 + 4 + lVar3) = param_2[1] + *(float *)(uVar4 + 4 + lVar3);
          *(float *)(uVar4 + 8 + lVar3) = *(float *)(uVar4 + 8 + lVar3) + param_2[2];
          lVar3 = *(int64_t *)(param_1 + 8);
          uVar4 = uVar4 + 0x10;
          uVar5 = (uint64_t)uVar1;
        } while ((int)uVar1 < *(int *)(uVar7 + *(int64_t *)(lVar3 + 0xb0)));
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
      uVar7 = uVar7 + 0x50;
    } while ((int)uVar1 < (int)(uint)*(ushort *)(lVar3 + 0xc0));
  }
  *(int8_t *)(param_1 + 0x32) = 1;
  *(int8_t *)(param_1 + 0x30) = 1;
  return;
}






// 函数: void FUN_180237913(void)
void FUN_180237913(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t unaff_RSI;
  int unaff_EDI;
  uint64_t uVar5;
  int64_t in_R9;
  float *in_R10;
  int64_t in_R11;
  
  uVar5 = unaff_RSI;
  do {
    uVar4 = unaff_RSI & 0xffffffff;
    uVar2 = unaff_RSI;
    if ((int)unaff_RSI < *(int *)(uVar5 + *(int64_t *)(in_R9 + 0xb0))) {
      do {
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(in_R11 + 8) + 0xb0) + 8 + uVar5);
        *(float *)(uVar2 + lVar1) = *(float *)(uVar2 + lVar1) + *in_R10;
        *(float *)(uVar2 + 4 + lVar1) = in_R10[1] + *(float *)(uVar2 + 4 + lVar1);
        *(float *)(uVar2 + 8 + lVar1) = *(float *)(uVar2 + 8 + lVar1) + in_R10[2];
        in_R9 = *(int64_t *)(in_R11 + 8);
        uVar2 = uVar2 + 0x10;
      } while ((int)uVar3 < *(int *)(uVar5 + *(int64_t *)(in_R9 + 0xb0)));
    }
    unaff_EDI = unaff_EDI + 1;
    uVar5 = uVar5 + 0x50;
  } while (unaff_EDI < (int)(uint)*(ushort *)(in_R9 + 0xc0));
  *(int8_t *)(in_R11 + 0x32) = 1;
  *(int8_t *)(in_R11 + 0x30) = 1;
  return;
}






// 函数: void FUN_1802379b7(void)
void FUN_1802379b7(void)

{
  int64_t in_R11;
  
  *(int8_t *)(in_R11 + 0x32) = 1;
  *(int8_t *)(in_R11 + 0x30) = 1;
  return;
}






// 函数: void FUN_1802379d0(int64_t param_1,float *param_2)
void FUN_1802379d0(int64_t param_1,float *param_2)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint uVar24;
  uint64_t uVar25;
  
  lVar21 = *(int64_t *)(param_1 + 8);
  uVar23 = 0;
  if (0 < *(int *)(lVar21 + 0x10)) {
    fVar8 = param_2[4];
    fVar9 = param_2[5];
    fVar10 = param_2[6];
    fVar11 = param_2[7];
    fVar12 = *param_2;
    fVar13 = param_2[1];
    fVar14 = param_2[2];
    fVar15 = param_2[3];
    fVar16 = param_2[8];
    fVar17 = param_2[9];
    fVar18 = param_2[10];
    fVar19 = param_2[0xb];
    fVar5 = param_2[0xc];
    fVar6 = param_2[0xd];
    fVar7 = param_2[0xe];
    fVar20 = param_2[0xf];
    uVar22 = uVar23;
    uVar25 = uVar23;
    do {
      lVar21 = *(int64_t *)(lVar21 + 0x18);
      fVar2 = *(float *)(lVar21 + 4 + uVar22);
      fVar3 = *(float *)(lVar21 + uVar22);
      fVar4 = *(float *)(lVar21 + 8 + uVar22);
      pfVar1 = (float *)(lVar21 + uVar22);
      *pfVar1 = fVar2 * fVar8 + fVar3 * fVar12 + fVar4 * fVar16 + fVar5;
      pfVar1[1] = fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17 + fVar6;
      pfVar1[2] = fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18 + fVar7;
      pfVar1[3] = fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19 + fVar20;
      lVar21 = *(int64_t *)(param_1 + 8);
      if (*(int *)(lVar21 + 0x38) != 0) {
        lVar21 = *(int64_t *)(lVar21 + 0x40);
        fVar2 = *(float *)(lVar21 + 4 + uVar22);
        fVar3 = *(float *)(lVar21 + uVar22);
        fVar4 = *(float *)(lVar21 + 8 + uVar22);
        pfVar1 = (float *)(lVar21 + uVar22);
        *pfVar1 = fVar2 * fVar8 + fVar3 * fVar12 + fVar4 * fVar16 + fVar5;
        pfVar1[1] = fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17 + fVar6;
        pfVar1[2] = fVar2 * fVar10 + fVar3 * fVar14 + fVar4 * fVar18 + fVar7;
        pfVar1[3] = fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19 + fVar20;
        lVar21 = *(int64_t *)(param_1 + 8);
      }
      uVar24 = (int)uVar25 + 1;
      uVar25 = (uint64_t)uVar24;
      uVar22 = uVar22 + 0x10;
    } while ((int)uVar24 < *(int *)(lVar21 + 0x10));
  }
  if (0 < *(int *)(lVar21 + 0x60)) {
    fVar8 = param_2[4];
    fVar9 = param_2[5];
    fVar10 = param_2[6];
    fVar11 = param_2[7];
    fVar12 = *param_2;
    fVar13 = param_2[1];
    fVar14 = param_2[2];
    fVar15 = param_2[3];
    fVar16 = param_2[8];
    fVar17 = param_2[9];
    fVar18 = param_2[10];
    fVar19 = param_2[0xb];
    uVar22 = uVar23;
    do {
      uVar24 = (int)uVar22 + 1;
      uVar22 = (uint64_t)uVar24;
      lVar21 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      fVar5 = *(float *)(lVar21 + 0x38 + uVar23);
      fVar6 = *(float *)(lVar21 + 0x34 + uVar23);
      fVar7 = *(float *)(lVar21 + 0x3c + uVar23);
      pfVar1 = (float *)(lVar21 + 0x34 + uVar23);
      *pfVar1 = fVar5 * fVar8 + fVar6 * fVar12 + fVar7 * fVar16;
      pfVar1[1] = fVar5 * fVar9 + fVar6 * fVar13 + fVar7 * fVar17;
      pfVar1[2] = fVar5 * fVar10 + fVar6 * fVar14 + fVar7 * fVar18;
      pfVar1[3] = fVar5 * fVar11 + fVar6 * fVar15 + fVar7 * fVar19;
      uVar23 = uVar23 + 0x5c;
    } while ((int)uVar24 < *(int *)(*(int64_t *)(param_1 + 8) + 0x60));
  }
  *(int8_t *)(param_1 + 0x32) = 1;
  *(int8_t *)(param_1 + 0x30) = 1;
  return;
}






