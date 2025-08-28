#include "TaleWorlds.Native.Split.h"
// 99_part_08_part074.c - 5 个函数
// 函数: void function_5ba49e(void)
void function_5ba49e(void)
{
  int32_t *puVar1;
  float fVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  byte bVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  int32_t *puVar19;
  int64_t lVar20;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar21;
  int iVar22;
  uint64_t uVar23;
  int64_t lVar24;
  uint uVar25;
  uint64_t uVar26;
  uint uVar27;
  int64_t lVar29;
  char unaff_R13B;
  uint64_t *unaff_R14;
  int unaff_R15D;
  float fVar30;
  float unaff_XMM6_Da;
  uint64_t uVar28;
  if (unaff_R15D <= *(int *)(unaff_RBX + 0x2010)) {
    *(int8_t *)(unaff_RBX + 0x1c48) = 0;
    if ((*(uint *)(unaff_R14 + 1) & 0x8000000) == 0) {
      bVar13 = (byte)((uint)*(int32_t *)(*(int64_t *)*unaff_R14 + 0x564) >> 0x1f) ^ 1;
      *(byte *)(unaff_RBX + 0x11c) = bVar13;
    }
    else {
      bVar13 = *(byte *)(unaff_RBX + 0x11c);
    }
    if (bVar13 == 0) {
      fVar30 = -600000.0;
    }
    else {
      fVar30 = -220000.0;
    }
    uVar15 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
    uVar15 = uVar15 ^ uVar15 >> 0x11;
    uVar15 = uVar15 ^ uVar15 << 5;
    *(uint *)(unaff_RBX + 0x1390) = uVar15;
    uVar21 = 0;
    *(int64_t *)(unaff_RBX + 0x1c38) =
         *(int64_t *)(&system_error_code + (int64_t)*(int *)(unaff_RBX + 0x1c40) * 8) -
         (int64_t)(((float)(uVar15 - 1) * 2.3283064e-05 + fVar30) - 50000.0);
    uVar16 = uVar21;
    uVar18 = uVar21;
    uVar23 = uVar21;
    uVar26 = uVar21;
    uVar28 = uVar21;
    do {
      uVar25 = (uint)uVar26;
      uVar15 = uVar25;
      if (*(int *)(unaff_RBX + 0x1c0c + uVar23 * 8) < 0) break;
      fVar30 = unaff_XMM6_Da;
      if ((int)uVar16 < *(int *)(unaff_RBX + 0x200c)) {
        fVar30 = *(float *)(uVar18 * 0x3c + 0x1c50 + unaff_RBX);
      }
      fVar2 = *(float *)(unaff_RBX + 0x1c10 + uVar23 * 8);
      uVar27 = (int)uVar28 + 1;
      uVar28 = (uint64_t)uVar27;
      if (fVar2 <= fVar30) {
        uVar16 = (uint64_t)((int)uVar16 + 1);
      }
      uVar15 = uVar25 + 1;
      if (fVar2 <= fVar30) {
        uVar15 = uVar25;
      }
      uVar26 = (uint64_t)uVar15;
      uVar14 = uVar23 + 1;
      if (fVar2 <= fVar30) {
        uVar14 = uVar23;
      }
      if (fVar2 <= fVar30) {
        uVar18 = uVar18 + 1;
      }
      uVar23 = uVar14;
    } while ((int)uVar27 < 4);
    if (uVar15 != 0) {
      lVar24 = (int64_t)(int)uVar15;
      iVar22 = 0x10 - uVar15;
      if ((int)(uVar15 + *(int *)(unaff_RBX + 0x200c)) < 0x11) {
        iVar22 = *(int *)(unaff_RBX + 0x200c);
      }
      if (3 < lVar24) {
        lVar29 = (lVar24 - 4U >> 2) + 1;
        uVar21 = lVar29 * 4;
        lVar20 = unaff_RBX + 0x1c84 + (int64_t)iVar22 * 0x3c;
        puVar19 = (int32_t *)(unaff_RBX + 0x1c0c);
        do {
          uVar3 = puVar19[1];
          *(int32_t *)(lVar20 + -0x38) = *puVar19;
          *(int32_t *)(lVar20 + -0x34) = uVar3;
          *(int32_t *)(lVar20 + -0x30) = 0;
          *(int32_t *)(lVar20 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar20 + -0x28) = 0;
          uVar3 = puVar19[3];
          *(int32_t *)(lVar20 + 4) = puVar19[2];
          *(int32_t *)(lVar20 + 8) = uVar3;
          *(int32_t *)(lVar20 + 0xc) = 0;
          *(int32_t *)(lVar20 + 0x10) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + 0x38) = 0x7149f2ca;
          *(int32_t *)(lVar20 + 0x14) = 0;
          uVar3 = puVar19[5];
          *(int32_t *)(lVar20 + 0x40) = puVar19[4];
          *(int32_t *)(lVar20 + 0x44) = uVar3;
          *(int32_t *)(lVar20 + 0x48) = 0;
          *(int32_t *)(lVar20 + 0x4c) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + 0x74) = 0x7149f2ca;
          *(int32_t *)(lVar20 + 0x50) = 0;
          uVar3 = puVar19[7];
          *(int32_t *)(lVar20 + 0x7c) = puVar19[6];
          *(int32_t *)(lVar20 + 0x80) = uVar3;
          *(int32_t *)(lVar20 + 0x84) = 0;
          *(int32_t *)(lVar20 + 0x88) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + 0xb0) = 0x7149f2ca;
          *(int32_t *)(lVar20 + 0x8c) = 0;
          lVar29 = lVar29 + -1;
          lVar20 = lVar20 + 0xf0;
          puVar19 = puVar19 + 8;
        } while (lVar29 != 0);
      }
      if ((int64_t)uVar21 < lVar24) {
        puVar19 = (int32_t *)(unaff_RBX + 0x1c0c + uVar21 * 8);
        lVar24 = lVar24 - uVar21;
        lVar20 = unaff_RBX + 0x1c84 + ((int64_t)iVar22 + uVar21) * 0x3c;
        do {
          puVar1 = puVar19 + 1;
          uVar3 = *puVar19;
          puVar19 = puVar19 + 2;
          *(int32_t *)(lVar20 + -0x34) = *puVar1;
          *(int32_t *)(lVar20 + -0x38) = uVar3;
          *(int32_t *)(lVar20 + -0x30) = 0;
          *(int32_t *)(lVar20 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar20 + -0x28) = 0;
          lVar24 = lVar24 + -1;
          lVar20 = lVar20 + 0x3c;
        } while (lVar24 != 0);
      }
      *(uint *)(unaff_RBX + 0x1c2c) = uVar15;
      *(uint *)(unaff_RBX + 0x200c) = iVar22 + uVar15;
    }
    if (*(char *)(unaff_RBP + 0x120) != '\0') {
      puVar17 = (uint64_t *)(unaff_RBX + 0x1c4c);
      iVar22 = 1;
      uVar5 = *(int32_t *)puVar17;
      uVar6 = *(int32_t *)(unaff_RBX + 0x1c50);
      uVar7 = *(int32_t *)(unaff_RBX + 0x1c54);
      uVar8 = *(int32_t *)(unaff_RBX + 0x1c58);
      uVar3 = *(int32_t *)(unaff_RBX + 0x1c84);
      uVar9 = *(uint64_t *)(unaff_RBX + 0x1c5c);
      uVar10 = *(uint64_t *)(unaff_RBX + 0x1c64);
      lVar24 = (int64_t)(*(int *)(unaff_RBX + 0x200c) - *(int *)(unaff_RBX + 0x1c2c));
      uVar4 = *(uint64_t *)(unaff_RBX + 0x1c7c);
      uVar11 = *(uint64_t *)(unaff_RBX + 0x1c6c);
      uVar12 = *(uint64_t *)(unaff_RBX + 0x1c74);
      *(int32_t *)(unaff_RBP + -0x40) = uVar5;
      *(int32_t *)(unaff_RBP + -0x3c) = uVar6;
      *(int32_t *)(unaff_RBP + -0x38) = uVar7;
      *(int32_t *)(unaff_RBP + -0x34) = uVar8;
      if (1 < lVar24) {
        fVar30 = *(float *)(unaff_RBP + -0x3c);
        lVar20 = 1;
        if (4 < lVar24) {
          do {
            if (*(float *)(puVar17 + 8) <= fVar30) goto LAB_1805ba95e;
            *puVar17 = *(uint64_t *)((int64_t)puVar17 + 0x3c);
            puVar17[1] = *(uint64_t *)((int64_t)puVar17 + 0x44);
            puVar17[2] = *(uint64_t *)((int64_t)puVar17 + 0x4c);
            puVar17[3] = *(uint64_t *)((int64_t)puVar17 + 0x54);
            *(int32_t *)(puVar17 + 4) = *(int32_t *)((int64_t)puVar17 + 0x5c);
            *(int32_t *)((int64_t)puVar17 + 0x24) = *(int32_t *)(puVar17 + 0xc);
            *(int32_t *)(puVar17 + 5) = *(int32_t *)((int64_t)puVar17 + 100);
            *(int32_t *)((int64_t)puVar17 + 0x2c) = *(int32_t *)(puVar17 + 0xd);
            puVar17[6] = *(uint64_t *)((int64_t)puVar17 + 0x6c);
            *(int32_t *)(puVar17 + 7) = *(int32_t *)((int64_t)puVar17 + 0x74);
            if (*(float *)((int64_t)puVar17 + 0x7c) <= fVar30) {
              iVar22 = iVar22 + 1;
              goto LAB_1805ba95e;
            }
            *(uint64_t *)((int64_t)puVar17 + 0x3c) = puVar17[0xf];
            *(uint64_t *)((int64_t)puVar17 + 0x44) = puVar17[0x10];
            *(uint64_t *)((int64_t)puVar17 + 0x4c) = puVar17[0x11];
            *(uint64_t *)((int64_t)puVar17 + 0x54) = puVar17[0x12];
            *(int32_t *)((int64_t)puVar17 + 0x5c) = *(int32_t *)(puVar17 + 0x13);
            *(int32_t *)(puVar17 + 0xc) = *(int32_t *)((int64_t)puVar17 + 0x9c);
            *(int32_t *)((int64_t)puVar17 + 100) = *(int32_t *)(puVar17 + 0x14);
            *(int32_t *)(puVar17 + 0xd) = *(int32_t *)((int64_t)puVar17 + 0xa4);
            *(uint64_t *)((int64_t)puVar17 + 0x6c) = puVar17[0x15];
            *(int32_t *)((int64_t)puVar17 + 0x74) = *(int32_t *)(puVar17 + 0x16);
            if (*(float *)(puVar17 + 0x17) <= fVar30) {
              iVar22 = iVar22 + 2;
              goto LAB_1805ba95e;
            }
            puVar17[0xf] = *(uint64_t *)((int64_t)puVar17 + 0xb4);
            puVar17[0x10] = *(uint64_t *)((int64_t)puVar17 + 0xbc);
            puVar17[0x11] = *(uint64_t *)((int64_t)puVar17 + 0xc4);
            puVar17[0x12] = *(uint64_t *)((int64_t)puVar17 + 0xcc);
            *(int32_t *)(puVar17 + 0x13) = *(int32_t *)((int64_t)puVar17 + 0xd4);
            *(int32_t *)((int64_t)puVar17 + 0x9c) = *(int32_t *)(puVar17 + 0x1b);
            *(int32_t *)(puVar17 + 0x14) = *(int32_t *)((int64_t)puVar17 + 0xdc);
            *(int32_t *)((int64_t)puVar17 + 0xa4) = *(int32_t *)(puVar17 + 0x1c);
            puVar17[0x15] = *(uint64_t *)((int64_t)puVar17 + 0xe4);
            *(int32_t *)(puVar17 + 0x16) = *(int32_t *)((int64_t)puVar17 + 0xec);
            if (*(float *)((int64_t)puVar17 + 0xf4) <= fVar30) {
              iVar22 = iVar22 + 3;
              goto LAB_1805ba95e;
            }
            iVar22 = iVar22 + 4;
            lVar20 = lVar20 + 4;
            *(uint64_t *)((int64_t)puVar17 + 0xb4) = puVar17[0x1e];
            *(uint64_t *)((int64_t)puVar17 + 0xbc) = puVar17[0x1f];
            *(uint64_t *)((int64_t)puVar17 + 0xc4) = puVar17[0x20];
            *(uint64_t *)((int64_t)puVar17 + 0xcc) = puVar17[0x21];
            *(int32_t *)((int64_t)puVar17 + 0xd4) = *(int32_t *)(puVar17 + 0x22);
            *(int32_t *)(puVar17 + 0x1b) = *(int32_t *)((int64_t)puVar17 + 0x114);
            *(int32_t *)((int64_t)puVar17 + 0xdc) = *(int32_t *)(puVar17 + 0x23);
            *(int32_t *)(puVar17 + 0x1c) = *(int32_t *)((int64_t)puVar17 + 0x11c);
            *(uint64_t *)((int64_t)puVar17 + 0xe4) = puVar17[0x24];
            *(int32_t *)((int64_t)puVar17 + 0xec) = *(int32_t *)(puVar17 + 0x25);
            puVar17 = puVar17 + 0x1e;
          } while (lVar20 < lVar24 + -3);
        }
        if (lVar20 < lVar24) {
          puVar17 = (uint64_t *)(unaff_RBX + 0x1c4c + lVar20 * 0x3c);
          do {
            if (*(float *)((int64_t)puVar17 + 4) <= fVar30) break;
            iVar22 = iVar22 + 1;
            lVar20 = lVar20 + 1;
            *(uint64_t *)((int64_t)puVar17 + -0x3c) = *puVar17;
            *(uint64_t *)((int64_t)puVar17 + -0x34) = puVar17[1];
            *(uint64_t *)((int64_t)puVar17 + -0x2c) = puVar17[2];
            *(uint64_t *)((int64_t)puVar17 + -0x24) = puVar17[3];
            *(int32_t *)((int64_t)puVar17 + -0x1c) = *(int32_t *)(puVar17 + 4);
            *(int32_t *)(puVar17 + -3) = *(int32_t *)((int64_t)puVar17 + 0x24);
            *(int32_t *)((int64_t)puVar17 + -0x14) = *(int32_t *)(puVar17 + 5);
            *(int32_t *)(puVar17 + -2) = *(int32_t *)((int64_t)puVar17 + 0x2c);
            *(uint64_t *)((int64_t)puVar17 + -0xc) = puVar17[6];
            *(int32_t *)((int64_t)puVar17 + -4) = *(int32_t *)(puVar17 + 7);
            puVar17 = (uint64_t *)((int64_t)puVar17 + 0x3c);
          } while (lVar20 < lVar24);
        }
      }
LAB_1805ba95e:
      if (iVar22 != 1) {
        lVar24 = (int64_t)iVar22 * 0x3c;
        puVar19 = (int32_t *)(lVar24 + 0x1c10 + unaff_RBX);
        *puVar19 = uVar5;
        puVar19[1] = uVar6;
        puVar19[2] = uVar7;
        puVar19[3] = uVar8;
        puVar17 = (uint64_t *)(lVar24 + 0x1c20 + unaff_RBX);
        *puVar17 = uVar9;
        puVar17[1] = uVar10;
        puVar17 = (uint64_t *)(lVar24 + 0x1c30 + unaff_RBX);
        *puVar17 = uVar11;
        puVar17[1] = uVar12;
        *(uint64_t *)(lVar24 + 0x1c40 + unaff_RBX) = uVar4;
        *(int32_t *)(lVar24 + 0x1c48 + unaff_RBX) = uVar3;
      }
    }
    *(int32_t *)(unaff_RBX + 0x1c0c) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c14) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c1c) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c24) = 0xffffffff;
    *(int32_t *)(unaff_RBX + 0x1c2c) = 0;
  }
  if (unaff_R13B != '\0') {
    function_5beae0();
  }
  return;
}
// 函数: void function_5ba4c4(void)
void function_5ba4c4(void)
{
  int32_t *puVar1;
  float fVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  byte bVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  int32_t *puVar19;
  int64_t lVar20;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar21;
  int iVar22;
  uint64_t uVar23;
  int64_t lVar24;
  uint uVar25;
  uint64_t uVar26;
  uint uVar27;
  int64_t lVar29;
  char unaff_R13B;
  uint64_t *unaff_R14;
  float fVar30;
  float unaff_XMM6_Da;
  uint64_t uVar28;
  *(int8_t *)(unaff_RBX + 0x1c48) = 0;
  if ((*(uint *)(unaff_R14 + 1) & 0x8000000) == 0) {
    bVar13 = (byte)((uint)*(int32_t *)(*(int64_t *)*unaff_R14 + 0x564) >> 0x1f) ^ 1;
    *(byte *)(unaff_RBX + 0x11c) = bVar13;
  }
  else {
    bVar13 = *(byte *)(unaff_RBX + 0x11c);
  }
  if (bVar13 == 0) {
    fVar30 = -600000.0;
  }
  else {
    fVar30 = -220000.0;
  }
  uVar15 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
  uVar15 = uVar15 ^ uVar15 >> 0x11;
  uVar15 = uVar15 ^ uVar15 << 5;
  *(uint *)(unaff_RBX + 0x1390) = uVar15;
  uVar21 = 0;
  *(int64_t *)(unaff_RBX + 0x1c38) =
       *(int64_t *)(&system_error_code + (int64_t)*(int *)(unaff_RBX + 0x1c40) * 8) -
       (int64_t)(((float)(uVar15 - 1) * 2.3283064e-05 + fVar30) - 50000.0);
  uVar16 = uVar21;
  uVar18 = uVar21;
  uVar23 = uVar21;
  uVar26 = uVar21;
  uVar28 = uVar21;
  do {
    uVar25 = (uint)uVar26;
    uVar15 = uVar25;
    if (*(int *)(unaff_RBX + 0x1c0c + uVar23 * 8) < 0) break;
    fVar30 = unaff_XMM6_Da;
    if ((int)uVar16 < *(int *)(unaff_RBX + 0x200c)) {
      fVar30 = *(float *)(uVar18 * 0x3c + 0x1c50 + unaff_RBX);
    }
    fVar2 = *(float *)(unaff_RBX + 0x1c10 + uVar23 * 8);
    uVar27 = (int)uVar28 + 1;
    uVar28 = (uint64_t)uVar27;
    if (fVar2 <= fVar30) {
      uVar16 = (uint64_t)((int)uVar16 + 1);
    }
    uVar15 = uVar25 + 1;
    if (fVar2 <= fVar30) {
      uVar15 = uVar25;
    }
    uVar26 = (uint64_t)uVar15;
    uVar14 = uVar23 + 1;
    if (fVar2 <= fVar30) {
      uVar14 = uVar23;
    }
    if (fVar2 <= fVar30) {
      uVar18 = uVar18 + 1;
    }
    uVar23 = uVar14;
  } while ((int)uVar27 < 4);
  if (uVar15 != 0) {
    lVar24 = (int64_t)(int)uVar15;
    iVar22 = 0x10 - uVar15;
    if ((int)(uVar15 + *(int *)(unaff_RBX + 0x200c)) < 0x11) {
      iVar22 = *(int *)(unaff_RBX + 0x200c);
    }
    if (3 < lVar24) {
      lVar29 = (lVar24 - 4U >> 2) + 1;
      uVar21 = lVar29 * 4;
      lVar20 = unaff_RBX + 0x1c84 + (int64_t)iVar22 * 0x3c;
      puVar19 = (int32_t *)(unaff_RBX + 0x1c0c);
      do {
        uVar3 = puVar19[1];
        *(int32_t *)(lVar20 + -0x38) = *puVar19;
        *(int32_t *)(lVar20 + -0x34) = uVar3;
        *(int32_t *)(lVar20 + -0x30) = 0;
        *(int32_t *)(lVar20 + -0x2c) = 0xf149f2ca;
        *(uint64_t *)(lVar20 + -4) = 0x7149f2ca;
        *(int32_t *)(lVar20 + -0x28) = 0;
        uVar3 = puVar19[3];
        *(int32_t *)(lVar20 + 4) = puVar19[2];
        *(int32_t *)(lVar20 + 8) = uVar3;
        *(int32_t *)(lVar20 + 0xc) = 0;
        *(int32_t *)(lVar20 + 0x10) = 0xf149f2ca;
        *(uint64_t *)(lVar20 + 0x38) = 0x7149f2ca;
        *(int32_t *)(lVar20 + 0x14) = 0;
        uVar3 = puVar19[5];
        *(int32_t *)(lVar20 + 0x40) = puVar19[4];
        *(int32_t *)(lVar20 + 0x44) = uVar3;
        *(int32_t *)(lVar20 + 0x48) = 0;
        *(int32_t *)(lVar20 + 0x4c) = 0xf149f2ca;
        *(uint64_t *)(lVar20 + 0x74) = 0x7149f2ca;
        *(int32_t *)(lVar20 + 0x50) = 0;
        uVar3 = puVar19[7];
        *(int32_t *)(lVar20 + 0x7c) = puVar19[6];
        *(int32_t *)(lVar20 + 0x80) = uVar3;
        *(int32_t *)(lVar20 + 0x84) = 0;
        *(int32_t *)(lVar20 + 0x88) = 0xf149f2ca;
        *(uint64_t *)(lVar20 + 0xb0) = 0x7149f2ca;
        *(int32_t *)(lVar20 + 0x8c) = 0;
        lVar29 = lVar29 + -1;
        lVar20 = lVar20 + 0xf0;
        puVar19 = puVar19 + 8;
      } while (lVar29 != 0);
    }
    if ((int64_t)uVar21 < lVar24) {
      puVar19 = (int32_t *)(unaff_RBX + 0x1c0c + uVar21 * 8);
      lVar24 = lVar24 - uVar21;
      lVar20 = unaff_RBX + 0x1c84 + ((int64_t)iVar22 + uVar21) * 0x3c;
      do {
        puVar1 = puVar19 + 1;
        uVar3 = *puVar19;
        puVar19 = puVar19 + 2;
        *(int32_t *)(lVar20 + -0x34) = *puVar1;
        *(int32_t *)(lVar20 + -0x38) = uVar3;
        *(int32_t *)(lVar20 + -0x30) = 0;
        *(int32_t *)(lVar20 + -0x2c) = 0xf149f2ca;
        *(uint64_t *)(lVar20 + -4) = 0x7149f2ca;
        *(int32_t *)(lVar20 + -0x28) = 0;
        lVar24 = lVar24 + -1;
        lVar20 = lVar20 + 0x3c;
      } while (lVar24 != 0);
    }
    *(uint *)(unaff_RBX + 0x1c2c) = uVar15;
    *(uint *)(unaff_RBX + 0x200c) = iVar22 + uVar15;
  }
  if (*(char *)(unaff_RBP + 0x120) != '\0') {
    puVar17 = (uint64_t *)(unaff_RBX + 0x1c4c);
    iVar22 = 1;
    uVar5 = *(int32_t *)puVar17;
    uVar6 = *(int32_t *)(unaff_RBX + 0x1c50);
    uVar7 = *(int32_t *)(unaff_RBX + 0x1c54);
    uVar8 = *(int32_t *)(unaff_RBX + 0x1c58);
    uVar3 = *(int32_t *)(unaff_RBX + 0x1c84);
    uVar9 = *(uint64_t *)(unaff_RBX + 0x1c5c);
    uVar10 = *(uint64_t *)(unaff_RBX + 0x1c64);
    lVar24 = (int64_t)(*(int *)(unaff_RBX + 0x200c) - *(int *)(unaff_RBX + 0x1c2c));
    uVar4 = *(uint64_t *)(unaff_RBX + 0x1c7c);
    uVar11 = *(uint64_t *)(unaff_RBX + 0x1c6c);
    uVar12 = *(uint64_t *)(unaff_RBX + 0x1c74);
    *(int32_t *)(unaff_RBP + -0x40) = uVar5;
    *(int32_t *)(unaff_RBP + -0x3c) = uVar6;
    *(int32_t *)(unaff_RBP + -0x38) = uVar7;
    *(int32_t *)(unaff_RBP + -0x34) = uVar8;
    if (1 < lVar24) {
      fVar30 = *(float *)(unaff_RBP + -0x3c);
      lVar20 = 1;
      if (4 < lVar24) {
        do {
          if (*(float *)(puVar17 + 8) <= fVar30) goto LAB_1805ba95e;
          *puVar17 = *(uint64_t *)((int64_t)puVar17 + 0x3c);
          puVar17[1] = *(uint64_t *)((int64_t)puVar17 + 0x44);
          puVar17[2] = *(uint64_t *)((int64_t)puVar17 + 0x4c);
          puVar17[3] = *(uint64_t *)((int64_t)puVar17 + 0x54);
          *(int32_t *)(puVar17 + 4) = *(int32_t *)((int64_t)puVar17 + 0x5c);
          *(int32_t *)((int64_t)puVar17 + 0x24) = *(int32_t *)(puVar17 + 0xc);
          *(int32_t *)(puVar17 + 5) = *(int32_t *)((int64_t)puVar17 + 100);
          *(int32_t *)((int64_t)puVar17 + 0x2c) = *(int32_t *)(puVar17 + 0xd);
          puVar17[6] = *(uint64_t *)((int64_t)puVar17 + 0x6c);
          *(int32_t *)(puVar17 + 7) = *(int32_t *)((int64_t)puVar17 + 0x74);
          if (*(float *)((int64_t)puVar17 + 0x7c) <= fVar30) {
            iVar22 = iVar22 + 1;
            goto LAB_1805ba95e;
          }
          *(uint64_t *)((int64_t)puVar17 + 0x3c) = puVar17[0xf];
          *(uint64_t *)((int64_t)puVar17 + 0x44) = puVar17[0x10];
          *(uint64_t *)((int64_t)puVar17 + 0x4c) = puVar17[0x11];
          *(uint64_t *)((int64_t)puVar17 + 0x54) = puVar17[0x12];
          *(int32_t *)((int64_t)puVar17 + 0x5c) = *(int32_t *)(puVar17 + 0x13);
          *(int32_t *)(puVar17 + 0xc) = *(int32_t *)((int64_t)puVar17 + 0x9c);
          *(int32_t *)((int64_t)puVar17 + 100) = *(int32_t *)(puVar17 + 0x14);
          *(int32_t *)(puVar17 + 0xd) = *(int32_t *)((int64_t)puVar17 + 0xa4);
          *(uint64_t *)((int64_t)puVar17 + 0x6c) = puVar17[0x15];
          *(int32_t *)((int64_t)puVar17 + 0x74) = *(int32_t *)(puVar17 + 0x16);
          if (*(float *)(puVar17 + 0x17) <= fVar30) {
            iVar22 = iVar22 + 2;
            goto LAB_1805ba95e;
          }
          puVar17[0xf] = *(uint64_t *)((int64_t)puVar17 + 0xb4);
          puVar17[0x10] = *(uint64_t *)((int64_t)puVar17 + 0xbc);
          puVar17[0x11] = *(uint64_t *)((int64_t)puVar17 + 0xc4);
          puVar17[0x12] = *(uint64_t *)((int64_t)puVar17 + 0xcc);
          *(int32_t *)(puVar17 + 0x13) = *(int32_t *)((int64_t)puVar17 + 0xd4);
          *(int32_t *)((int64_t)puVar17 + 0x9c) = *(int32_t *)(puVar17 + 0x1b);
          *(int32_t *)(puVar17 + 0x14) = *(int32_t *)((int64_t)puVar17 + 0xdc);
          *(int32_t *)((int64_t)puVar17 + 0xa4) = *(int32_t *)(puVar17 + 0x1c);
          puVar17[0x15] = *(uint64_t *)((int64_t)puVar17 + 0xe4);
          *(int32_t *)(puVar17 + 0x16) = *(int32_t *)((int64_t)puVar17 + 0xec);
          if (*(float *)((int64_t)puVar17 + 0xf4) <= fVar30) {
            iVar22 = iVar22 + 3;
            goto LAB_1805ba95e;
          }
          iVar22 = iVar22 + 4;
          lVar20 = lVar20 + 4;
          *(uint64_t *)((int64_t)puVar17 + 0xb4) = puVar17[0x1e];
          *(uint64_t *)((int64_t)puVar17 + 0xbc) = puVar17[0x1f];
          *(uint64_t *)((int64_t)puVar17 + 0xc4) = puVar17[0x20];
          *(uint64_t *)((int64_t)puVar17 + 0xcc) = puVar17[0x21];
          *(int32_t *)((int64_t)puVar17 + 0xd4) = *(int32_t *)(puVar17 + 0x22);
          *(int32_t *)(puVar17 + 0x1b) = *(int32_t *)((int64_t)puVar17 + 0x114);
          *(int32_t *)((int64_t)puVar17 + 0xdc) = *(int32_t *)(puVar17 + 0x23);
          *(int32_t *)(puVar17 + 0x1c) = *(int32_t *)((int64_t)puVar17 + 0x11c);
          *(uint64_t *)((int64_t)puVar17 + 0xe4) = puVar17[0x24];
          *(int32_t *)((int64_t)puVar17 + 0xec) = *(int32_t *)(puVar17 + 0x25);
          puVar17 = puVar17 + 0x1e;
        } while (lVar20 < lVar24 + -3);
      }
      if (lVar20 < lVar24) {
        puVar17 = (uint64_t *)(unaff_RBX + 0x1c4c + lVar20 * 0x3c);
        do {
          if (*(float *)((int64_t)puVar17 + 4) <= fVar30) break;
          iVar22 = iVar22 + 1;
          lVar20 = lVar20 + 1;
          *(uint64_t *)((int64_t)puVar17 + -0x3c) = *puVar17;
          *(uint64_t *)((int64_t)puVar17 + -0x34) = puVar17[1];
          *(uint64_t *)((int64_t)puVar17 + -0x2c) = puVar17[2];
          *(uint64_t *)((int64_t)puVar17 + -0x24) = puVar17[3];
          *(int32_t *)((int64_t)puVar17 + -0x1c) = *(int32_t *)(puVar17 + 4);
          *(int32_t *)(puVar17 + -3) = *(int32_t *)((int64_t)puVar17 + 0x24);
          *(int32_t *)((int64_t)puVar17 + -0x14) = *(int32_t *)(puVar17 + 5);
          *(int32_t *)(puVar17 + -2) = *(int32_t *)((int64_t)puVar17 + 0x2c);
          *(uint64_t *)((int64_t)puVar17 + -0xc) = puVar17[6];
          *(int32_t *)((int64_t)puVar17 + -4) = *(int32_t *)(puVar17 + 7);
          puVar17 = (uint64_t *)((int64_t)puVar17 + 0x3c);
        } while (lVar20 < lVar24);
      }
    }
LAB_1805ba95e:
    if (iVar22 != 1) {
      lVar24 = (int64_t)iVar22 * 0x3c;
      puVar19 = (int32_t *)(lVar24 + 0x1c10 + unaff_RBX);
      *puVar19 = uVar5;
      puVar19[1] = uVar6;
      puVar19[2] = uVar7;
      puVar19[3] = uVar8;
      puVar17 = (uint64_t *)(lVar24 + 0x1c20 + unaff_RBX);
      *puVar17 = uVar9;
      puVar17[1] = uVar10;
      puVar17 = (uint64_t *)(lVar24 + 0x1c30 + unaff_RBX);
      *puVar17 = uVar11;
      puVar17[1] = uVar12;
      *(uint64_t *)(lVar24 + 0x1c40 + unaff_RBX) = uVar4;
      *(int32_t *)(lVar24 + 0x1c48 + unaff_RBX) = uVar3;
    }
  }
  *(int32_t *)(unaff_RBX + 0x1c0c) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c14) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c1c) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c24) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c2c) = 0;
  if (unaff_R13B != '\0') {
    function_5beae0();
  }
  return;
}
// 函数: void function_5ba9f1(void)
void function_5ba9f1(void)
{
  function_5beae0();
  return;
}
// 函数: void function_5baa03(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4)
void function_5baa03(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int32_t unaff_ESI;
  int32_t in_R10D;
  char unaff_R13B;
  uint64_t in_XMM3_Qb;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM4_Qb;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM5_Qb;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  if (param_3 != -2) {
    lVar2 = (int64_t)(param_3 + 3) * 0x3c;
    puVar1 = (uint64_t *)(lVar2 + 0x1c10 + unaff_RBX);
    *puVar1 = param_4;
    puVar1[1] = in_XMM3_Qb;
    puVar1 = (uint64_t *)(lVar2 + 0x1c20 + unaff_RBX);
    *puVar1 = in_XMM4_Qa;
    puVar1[1] = in_XMM4_Qb;
    puVar1 = (uint64_t *)(lVar2 + 0x1c30 + unaff_RBX);
    *puVar1 = in_XMM5_Qa;
    puVar1[1] = in_XMM5_Qb;
    *(uint64_t *)(lVar2 + 0x1c40 + unaff_RBX) = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
    *(int32_t *)(lVar2 + 0x1c48 + unaff_RBX) = in_R10D;
  }
  *(int32_t *)(unaff_RBX + 0x1c0c) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c14) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c1c) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c24) = 0xffffffff;
  *(int32_t *)(unaff_RBX + 0x1c2c) = unaff_ESI;
  if (unaff_R13B != '\0') {
    function_5beae0();
  }
  return;
}
// 函数: void function_5baa20(int64_t *param_1)
void function_5baa20(int64_t *param_1)
{
  float fVar1;
  uint uVar2;
  int64_t lVar3;
  int iVar4;
  float *pfVar5;
  int64_t lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uVar15 = 0;
  lVar6 = param_1[0x291];
  *(int32_t *)((int64_t)param_1 + 0x1b6c) = 0;
  fVar1 = *(float *)(*param_1 + 0x35c);
  uVar2 = *(uint *)(lVar6 + 0x52ed94);
  if (0 < (int)uVar2) {
    piVar8 = (int *)(lVar6 + 0x30b0);
    uVar13 = uVar15;
    uVar10 = uVar15;
    do {
      if (-1 < *piVar8) goto LAB_1805baa80;
      uVar13 = (uint64_t)((int)uVar13 + 1);
      uVar10 = uVar10 + 1;
      piVar8 = piVar8 + 0x298;
    } while ((int64_t)uVar10 < (int64_t)(int)uVar2);
  }
  uVar13 = (uint64_t)uVar2;
LAB_1805baa80:
  uVar7 = (uint)uVar13;
  do {
    if ((int)uVar2 <= (int)uVar7) {
      return;
    }
    iVar4 = (int)uVar13;
    lVar12 = (int64_t)iVar4 * 0xa60;
    if (((*(int *)(lVar12 + 0x3608 + lVar6) == 1) && (iVar4 != *(int *)(*param_1 + 0x10))) &&
       ((int)fVar1 == (int)*(float *)(lVar12 + 0x33fc + lVar6))) {
      lVar14 = *(int64_t *)(*param_1 + 0x20);
      lVar3 = *(int64_t *)(lVar12 + 0x30c0 + lVar6);
      fVar18 = *(float *)(lVar14 + 0xc) - *(float *)(lVar3 + 0xc);
      fVar17 = *(float *)(lVar14 + 0x10) - *(float *)(lVar3 + 0x10);
      fVar16 = *(float *)(lVar14 + 0x14) - *(float *)(lVar3 + 0x14);
      fVar16 = -(fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16);
      if (-1e+30 < fVar16) {
        iVar9 = *(int *)((int64_t)param_1 + 0x1b6c);
        uVar13 = uVar15;
        if (0 < iVar9) {
          pfVar5 = (float *)((int64_t)param_1 + 0x17b4);
          uVar10 = uVar15;
          do {
            if (*pfVar5 <= fVar16) break;
            uVar7 = (int)uVar10 + 1;
            uVar10 = (uint64_t)uVar7;
            uVar13 = uVar13 + 1;
            pfVar5 = pfVar5 + 0xf;
          } while ((int)uVar7 < iVar9);
          if (0xf < (int64_t)uVar13) goto LAB_1805babfd;
        }
        if (iVar9 < 0x10) {
          iVar9 = iVar9 + 1;
          *(int *)((int64_t)param_1 + 0x1b6c) = iVar9;
        }
        lVar14 = (int64_t)(iVar9 + -1);
        if ((int64_t)uVar13 < lVar14) {
          puVar11 = (uint64_t *)((lVar14 + 0x65) * 0x3c + (int64_t)param_1);
          lVar14 = lVar14 - uVar13;
          do {
            *puVar11 = *(uint64_t *)((int64_t)puVar11 + -0x3c);
            puVar11[1] = *(uint64_t *)((int64_t)puVar11 + -0x34);
            puVar11[2] = *(uint64_t *)((int64_t)puVar11 + -0x2c);
            puVar11[3] = *(uint64_t *)((int64_t)puVar11 + -0x24);
            puVar11[4] = *(uint64_t *)((int64_t)puVar11 + -0x1c);
            puVar11[5] = *(uint64_t *)((int64_t)puVar11 + -0x14);
            puVar11[6] = *(uint64_t *)((int64_t)puVar11 + -0xc);
            *(int32_t *)(puVar11 + 7) = *(int32_t *)((int64_t)puVar11 + -4);
            puVar11 = (uint64_t *)((int64_t)puVar11 + -0x3c);
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        lVar14 = (uVar13 + 0x65) * 0x3c;
        iVar9 = *(int *)(lVar12 + 0x30b0 + lVar6);
        if (*(int *)(lVar14 + (int64_t)param_1) != iVar9) {
          *(int *)(lVar14 + (int64_t)param_1) = iVar9;
          lVar6 = uVar13 * 0x3c;
          *(float *)(lVar6 + 0x17b4 + (int64_t)param_1) = fVar16;
          *(uint64_t *)(lVar6 + 0x17e0 + (int64_t)param_1) = 0x7149f2ca;
          *(int32_t *)(lVar6 + 0x17bc + (int64_t)param_1) = 0;
        }
      }
    }
LAB_1805babfd:
    lVar6 = param_1[0x291];
    uVar7 = (uint)*(short *)(lVar6 + 0x52dda0 + (int64_t)iVar4 * 2);
    uVar13 = (uint64_t)uVar7;
  } while( true );
}