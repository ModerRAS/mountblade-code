#include "TaleWorlds.Native.Split.h"

// 99_part_08_part074.c - 5 个函数

// 函数: void FUN_1805ba49e(void)
void FUN_1805ba49e(void)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar29;
  char unaff_R13B;
  undefined8 *unaff_R14;
  int unaff_R15D;
  float fVar30;
  float unaff_XMM6_Da;
  ulonglong uVar28;
  
  if (unaff_R15D <= *(int *)(unaff_RBX + 0x2010)) {
    *(undefined1 *)(unaff_RBX + 0x1c48) = 0;
    if ((*(uint *)(unaff_R14 + 1) & 0x8000000) == 0) {
      bVar13 = (byte)((uint)*(undefined4 *)(*(longlong *)*unaff_R14 + 0x564) >> 0x1f) ^ 1;
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
    *(longlong *)(unaff_RBX + 0x1c38) =
         *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x1c40) * 8) -
         (longlong)(((float)(uVar15 - 1) * 2.3283064e-05 + fVar30) - 50000.0);
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
      uVar28 = (ulonglong)uVar27;
      if (fVar2 <= fVar30) {
        uVar16 = (ulonglong)((int)uVar16 + 1);
      }
      uVar15 = uVar25 + 1;
      if (fVar2 <= fVar30) {
        uVar15 = uVar25;
      }
      uVar26 = (ulonglong)uVar15;
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
      lVar24 = (longlong)(int)uVar15;
      iVar22 = 0x10 - uVar15;
      if ((int)(uVar15 + *(int *)(unaff_RBX + 0x200c)) < 0x11) {
        iVar22 = *(int *)(unaff_RBX + 0x200c);
      }
      if (3 < lVar24) {
        lVar29 = (lVar24 - 4U >> 2) + 1;
        uVar21 = lVar29 * 4;
        lVar20 = unaff_RBX + 0x1c84 + (longlong)iVar22 * 0x3c;
        puVar19 = (undefined4 *)(unaff_RBX + 0x1c0c);
        do {
          uVar3 = puVar19[1];
          *(undefined4 *)(lVar20 + -0x38) = *puVar19;
          *(undefined4 *)(lVar20 + -0x34) = uVar3;
          *(undefined4 *)(lVar20 + -0x30) = 0;
          *(undefined4 *)(lVar20 + -0x2c) = 0xf149f2ca;
          *(undefined8 *)(lVar20 + -4) = 0x7149f2ca;
          *(undefined4 *)(lVar20 + -0x28) = 0;
          uVar3 = puVar19[3];
          *(undefined4 *)(lVar20 + 4) = puVar19[2];
          *(undefined4 *)(lVar20 + 8) = uVar3;
          *(undefined4 *)(lVar20 + 0xc) = 0;
          *(undefined4 *)(lVar20 + 0x10) = 0xf149f2ca;
          *(undefined8 *)(lVar20 + 0x38) = 0x7149f2ca;
          *(undefined4 *)(lVar20 + 0x14) = 0;
          uVar3 = puVar19[5];
          *(undefined4 *)(lVar20 + 0x40) = puVar19[4];
          *(undefined4 *)(lVar20 + 0x44) = uVar3;
          *(undefined4 *)(lVar20 + 0x48) = 0;
          *(undefined4 *)(lVar20 + 0x4c) = 0xf149f2ca;
          *(undefined8 *)(lVar20 + 0x74) = 0x7149f2ca;
          *(undefined4 *)(lVar20 + 0x50) = 0;
          uVar3 = puVar19[7];
          *(undefined4 *)(lVar20 + 0x7c) = puVar19[6];
          *(undefined4 *)(lVar20 + 0x80) = uVar3;
          *(undefined4 *)(lVar20 + 0x84) = 0;
          *(undefined4 *)(lVar20 + 0x88) = 0xf149f2ca;
          *(undefined8 *)(lVar20 + 0xb0) = 0x7149f2ca;
          *(undefined4 *)(lVar20 + 0x8c) = 0;
          lVar29 = lVar29 + -1;
          lVar20 = lVar20 + 0xf0;
          puVar19 = puVar19 + 8;
        } while (lVar29 != 0);
      }
      if ((longlong)uVar21 < lVar24) {
        puVar19 = (undefined4 *)(unaff_RBX + 0x1c0c + uVar21 * 8);
        lVar24 = lVar24 - uVar21;
        lVar20 = unaff_RBX + 0x1c84 + ((longlong)iVar22 + uVar21) * 0x3c;
        do {
          puVar1 = puVar19 + 1;
          uVar3 = *puVar19;
          puVar19 = puVar19 + 2;
          *(undefined4 *)(lVar20 + -0x34) = *puVar1;
          *(undefined4 *)(lVar20 + -0x38) = uVar3;
          *(undefined4 *)(lVar20 + -0x30) = 0;
          *(undefined4 *)(lVar20 + -0x2c) = 0xf149f2ca;
          *(undefined8 *)(lVar20 + -4) = 0x7149f2ca;
          *(undefined4 *)(lVar20 + -0x28) = 0;
          lVar24 = lVar24 + -1;
          lVar20 = lVar20 + 0x3c;
        } while (lVar24 != 0);
      }
      *(uint *)(unaff_RBX + 0x1c2c) = uVar15;
      *(uint *)(unaff_RBX + 0x200c) = iVar22 + uVar15;
    }
    if (*(char *)(unaff_RBP + 0x120) != '\0') {
      puVar17 = (undefined8 *)(unaff_RBX + 0x1c4c);
      iVar22 = 1;
      uVar5 = *(undefined4 *)puVar17;
      uVar6 = *(undefined4 *)(unaff_RBX + 0x1c50);
      uVar7 = *(undefined4 *)(unaff_RBX + 0x1c54);
      uVar8 = *(undefined4 *)(unaff_RBX + 0x1c58);
      uVar3 = *(undefined4 *)(unaff_RBX + 0x1c84);
      uVar9 = *(undefined8 *)(unaff_RBX + 0x1c5c);
      uVar10 = *(undefined8 *)(unaff_RBX + 0x1c64);
      lVar24 = (longlong)(*(int *)(unaff_RBX + 0x200c) - *(int *)(unaff_RBX + 0x1c2c));
      uVar4 = *(undefined8 *)(unaff_RBX + 0x1c7c);
      uVar11 = *(undefined8 *)(unaff_RBX + 0x1c6c);
      uVar12 = *(undefined8 *)(unaff_RBX + 0x1c74);
      *(undefined4 *)(unaff_RBP + -0x40) = uVar5;
      *(undefined4 *)(unaff_RBP + -0x3c) = uVar6;
      *(undefined4 *)(unaff_RBP + -0x38) = uVar7;
      *(undefined4 *)(unaff_RBP + -0x34) = uVar8;
      if (1 < lVar24) {
        fVar30 = *(float *)(unaff_RBP + -0x3c);
        lVar20 = 1;
        if (4 < lVar24) {
          do {
            if (*(float *)(puVar17 + 8) <= fVar30) goto LAB_1805ba95e;
            *puVar17 = *(undefined8 *)((longlong)puVar17 + 0x3c);
            puVar17[1] = *(undefined8 *)((longlong)puVar17 + 0x44);
            puVar17[2] = *(undefined8 *)((longlong)puVar17 + 0x4c);
            puVar17[3] = *(undefined8 *)((longlong)puVar17 + 0x54);
            *(undefined4 *)(puVar17 + 4) = *(undefined4 *)((longlong)puVar17 + 0x5c);
            *(undefined4 *)((longlong)puVar17 + 0x24) = *(undefined4 *)(puVar17 + 0xc);
            *(undefined4 *)(puVar17 + 5) = *(undefined4 *)((longlong)puVar17 + 100);
            *(undefined4 *)((longlong)puVar17 + 0x2c) = *(undefined4 *)(puVar17 + 0xd);
            puVar17[6] = *(undefined8 *)((longlong)puVar17 + 0x6c);
            *(undefined4 *)(puVar17 + 7) = *(undefined4 *)((longlong)puVar17 + 0x74);
            if (*(float *)((longlong)puVar17 + 0x7c) <= fVar30) {
              iVar22 = iVar22 + 1;
              goto LAB_1805ba95e;
            }
            *(undefined8 *)((longlong)puVar17 + 0x3c) = puVar17[0xf];
            *(undefined8 *)((longlong)puVar17 + 0x44) = puVar17[0x10];
            *(undefined8 *)((longlong)puVar17 + 0x4c) = puVar17[0x11];
            *(undefined8 *)((longlong)puVar17 + 0x54) = puVar17[0x12];
            *(undefined4 *)((longlong)puVar17 + 0x5c) = *(undefined4 *)(puVar17 + 0x13);
            *(undefined4 *)(puVar17 + 0xc) = *(undefined4 *)((longlong)puVar17 + 0x9c);
            *(undefined4 *)((longlong)puVar17 + 100) = *(undefined4 *)(puVar17 + 0x14);
            *(undefined4 *)(puVar17 + 0xd) = *(undefined4 *)((longlong)puVar17 + 0xa4);
            *(undefined8 *)((longlong)puVar17 + 0x6c) = puVar17[0x15];
            *(undefined4 *)((longlong)puVar17 + 0x74) = *(undefined4 *)(puVar17 + 0x16);
            if (*(float *)(puVar17 + 0x17) <= fVar30) {
              iVar22 = iVar22 + 2;
              goto LAB_1805ba95e;
            }
            puVar17[0xf] = *(undefined8 *)((longlong)puVar17 + 0xb4);
            puVar17[0x10] = *(undefined8 *)((longlong)puVar17 + 0xbc);
            puVar17[0x11] = *(undefined8 *)((longlong)puVar17 + 0xc4);
            puVar17[0x12] = *(undefined8 *)((longlong)puVar17 + 0xcc);
            *(undefined4 *)(puVar17 + 0x13) = *(undefined4 *)((longlong)puVar17 + 0xd4);
            *(undefined4 *)((longlong)puVar17 + 0x9c) = *(undefined4 *)(puVar17 + 0x1b);
            *(undefined4 *)(puVar17 + 0x14) = *(undefined4 *)((longlong)puVar17 + 0xdc);
            *(undefined4 *)((longlong)puVar17 + 0xa4) = *(undefined4 *)(puVar17 + 0x1c);
            puVar17[0x15] = *(undefined8 *)((longlong)puVar17 + 0xe4);
            *(undefined4 *)(puVar17 + 0x16) = *(undefined4 *)((longlong)puVar17 + 0xec);
            if (*(float *)((longlong)puVar17 + 0xf4) <= fVar30) {
              iVar22 = iVar22 + 3;
              goto LAB_1805ba95e;
            }
            iVar22 = iVar22 + 4;
            lVar20 = lVar20 + 4;
            *(undefined8 *)((longlong)puVar17 + 0xb4) = puVar17[0x1e];
            *(undefined8 *)((longlong)puVar17 + 0xbc) = puVar17[0x1f];
            *(undefined8 *)((longlong)puVar17 + 0xc4) = puVar17[0x20];
            *(undefined8 *)((longlong)puVar17 + 0xcc) = puVar17[0x21];
            *(undefined4 *)((longlong)puVar17 + 0xd4) = *(undefined4 *)(puVar17 + 0x22);
            *(undefined4 *)(puVar17 + 0x1b) = *(undefined4 *)((longlong)puVar17 + 0x114);
            *(undefined4 *)((longlong)puVar17 + 0xdc) = *(undefined4 *)(puVar17 + 0x23);
            *(undefined4 *)(puVar17 + 0x1c) = *(undefined4 *)((longlong)puVar17 + 0x11c);
            *(undefined8 *)((longlong)puVar17 + 0xe4) = puVar17[0x24];
            *(undefined4 *)((longlong)puVar17 + 0xec) = *(undefined4 *)(puVar17 + 0x25);
            puVar17 = puVar17 + 0x1e;
          } while (lVar20 < lVar24 + -3);
        }
        if (lVar20 < lVar24) {
          puVar17 = (undefined8 *)(unaff_RBX + 0x1c4c + lVar20 * 0x3c);
          do {
            if (*(float *)((longlong)puVar17 + 4) <= fVar30) break;
            iVar22 = iVar22 + 1;
            lVar20 = lVar20 + 1;
            *(undefined8 *)((longlong)puVar17 + -0x3c) = *puVar17;
            *(undefined8 *)((longlong)puVar17 + -0x34) = puVar17[1];
            *(undefined8 *)((longlong)puVar17 + -0x2c) = puVar17[2];
            *(undefined8 *)((longlong)puVar17 + -0x24) = puVar17[3];
            *(undefined4 *)((longlong)puVar17 + -0x1c) = *(undefined4 *)(puVar17 + 4);
            *(undefined4 *)(puVar17 + -3) = *(undefined4 *)((longlong)puVar17 + 0x24);
            *(undefined4 *)((longlong)puVar17 + -0x14) = *(undefined4 *)(puVar17 + 5);
            *(undefined4 *)(puVar17 + -2) = *(undefined4 *)((longlong)puVar17 + 0x2c);
            *(undefined8 *)((longlong)puVar17 + -0xc) = puVar17[6];
            *(undefined4 *)((longlong)puVar17 + -4) = *(undefined4 *)(puVar17 + 7);
            puVar17 = (undefined8 *)((longlong)puVar17 + 0x3c);
          } while (lVar20 < lVar24);
        }
      }
LAB_1805ba95e:
      if (iVar22 != 1) {
        lVar24 = (longlong)iVar22 * 0x3c;
        puVar19 = (undefined4 *)(lVar24 + 0x1c10 + unaff_RBX);
        *puVar19 = uVar5;
        puVar19[1] = uVar6;
        puVar19[2] = uVar7;
        puVar19[3] = uVar8;
        puVar17 = (undefined8 *)(lVar24 + 0x1c20 + unaff_RBX);
        *puVar17 = uVar9;
        puVar17[1] = uVar10;
        puVar17 = (undefined8 *)(lVar24 + 0x1c30 + unaff_RBX);
        *puVar17 = uVar11;
        puVar17[1] = uVar12;
        *(undefined8 *)(lVar24 + 0x1c40 + unaff_RBX) = uVar4;
        *(undefined4 *)(lVar24 + 0x1c48 + unaff_RBX) = uVar3;
      }
    }
    *(undefined4 *)(unaff_RBX + 0x1c0c) = 0xffffffff;
    *(undefined4 *)(unaff_RBX + 0x1c14) = 0xffffffff;
    *(undefined4 *)(unaff_RBX + 0x1c1c) = 0xffffffff;
    *(undefined4 *)(unaff_RBX + 0x1c24) = 0xffffffff;
    *(undefined4 *)(unaff_RBX + 0x1c2c) = 0;
  }
  if (unaff_R13B != '\0') {
    FUN_1805beae0();
  }
  return;
}






// 函数: void FUN_1805ba4c4(void)
void FUN_1805ba4c4(void)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar29;
  char unaff_R13B;
  undefined8 *unaff_R14;
  float fVar30;
  float unaff_XMM6_Da;
  ulonglong uVar28;
  
  *(undefined1 *)(unaff_RBX + 0x1c48) = 0;
  if ((*(uint *)(unaff_R14 + 1) & 0x8000000) == 0) {
    bVar13 = (byte)((uint)*(undefined4 *)(*(longlong *)*unaff_R14 + 0x564) >> 0x1f) ^ 1;
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
  *(longlong *)(unaff_RBX + 0x1c38) =
       *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX + 0x1c40) * 8) -
       (longlong)(((float)(uVar15 - 1) * 2.3283064e-05 + fVar30) - 50000.0);
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
    uVar28 = (ulonglong)uVar27;
    if (fVar2 <= fVar30) {
      uVar16 = (ulonglong)((int)uVar16 + 1);
    }
    uVar15 = uVar25 + 1;
    if (fVar2 <= fVar30) {
      uVar15 = uVar25;
    }
    uVar26 = (ulonglong)uVar15;
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
    lVar24 = (longlong)(int)uVar15;
    iVar22 = 0x10 - uVar15;
    if ((int)(uVar15 + *(int *)(unaff_RBX + 0x200c)) < 0x11) {
      iVar22 = *(int *)(unaff_RBX + 0x200c);
    }
    if (3 < lVar24) {
      lVar29 = (lVar24 - 4U >> 2) + 1;
      uVar21 = lVar29 * 4;
      lVar20 = unaff_RBX + 0x1c84 + (longlong)iVar22 * 0x3c;
      puVar19 = (undefined4 *)(unaff_RBX + 0x1c0c);
      do {
        uVar3 = puVar19[1];
        *(undefined4 *)(lVar20 + -0x38) = *puVar19;
        *(undefined4 *)(lVar20 + -0x34) = uVar3;
        *(undefined4 *)(lVar20 + -0x30) = 0;
        *(undefined4 *)(lVar20 + -0x2c) = 0xf149f2ca;
        *(undefined8 *)(lVar20 + -4) = 0x7149f2ca;
        *(undefined4 *)(lVar20 + -0x28) = 0;
        uVar3 = puVar19[3];
        *(undefined4 *)(lVar20 + 4) = puVar19[2];
        *(undefined4 *)(lVar20 + 8) = uVar3;
        *(undefined4 *)(lVar20 + 0xc) = 0;
        *(undefined4 *)(lVar20 + 0x10) = 0xf149f2ca;
        *(undefined8 *)(lVar20 + 0x38) = 0x7149f2ca;
        *(undefined4 *)(lVar20 + 0x14) = 0;
        uVar3 = puVar19[5];
        *(undefined4 *)(lVar20 + 0x40) = puVar19[4];
        *(undefined4 *)(lVar20 + 0x44) = uVar3;
        *(undefined4 *)(lVar20 + 0x48) = 0;
        *(undefined4 *)(lVar20 + 0x4c) = 0xf149f2ca;
        *(undefined8 *)(lVar20 + 0x74) = 0x7149f2ca;
        *(undefined4 *)(lVar20 + 0x50) = 0;
        uVar3 = puVar19[7];
        *(undefined4 *)(lVar20 + 0x7c) = puVar19[6];
        *(undefined4 *)(lVar20 + 0x80) = uVar3;
        *(undefined4 *)(lVar20 + 0x84) = 0;
        *(undefined4 *)(lVar20 + 0x88) = 0xf149f2ca;
        *(undefined8 *)(lVar20 + 0xb0) = 0x7149f2ca;
        *(undefined4 *)(lVar20 + 0x8c) = 0;
        lVar29 = lVar29 + -1;
        lVar20 = lVar20 + 0xf0;
        puVar19 = puVar19 + 8;
      } while (lVar29 != 0);
    }
    if ((longlong)uVar21 < lVar24) {
      puVar19 = (undefined4 *)(unaff_RBX + 0x1c0c + uVar21 * 8);
      lVar24 = lVar24 - uVar21;
      lVar20 = unaff_RBX + 0x1c84 + ((longlong)iVar22 + uVar21) * 0x3c;
      do {
        puVar1 = puVar19 + 1;
        uVar3 = *puVar19;
        puVar19 = puVar19 + 2;
        *(undefined4 *)(lVar20 + -0x34) = *puVar1;
        *(undefined4 *)(lVar20 + -0x38) = uVar3;
        *(undefined4 *)(lVar20 + -0x30) = 0;
        *(undefined4 *)(lVar20 + -0x2c) = 0xf149f2ca;
        *(undefined8 *)(lVar20 + -4) = 0x7149f2ca;
        *(undefined4 *)(lVar20 + -0x28) = 0;
        lVar24 = lVar24 + -1;
        lVar20 = lVar20 + 0x3c;
      } while (lVar24 != 0);
    }
    *(uint *)(unaff_RBX + 0x1c2c) = uVar15;
    *(uint *)(unaff_RBX + 0x200c) = iVar22 + uVar15;
  }
  if (*(char *)(unaff_RBP + 0x120) != '\0') {
    puVar17 = (undefined8 *)(unaff_RBX + 0x1c4c);
    iVar22 = 1;
    uVar5 = *(undefined4 *)puVar17;
    uVar6 = *(undefined4 *)(unaff_RBX + 0x1c50);
    uVar7 = *(undefined4 *)(unaff_RBX + 0x1c54);
    uVar8 = *(undefined4 *)(unaff_RBX + 0x1c58);
    uVar3 = *(undefined4 *)(unaff_RBX + 0x1c84);
    uVar9 = *(undefined8 *)(unaff_RBX + 0x1c5c);
    uVar10 = *(undefined8 *)(unaff_RBX + 0x1c64);
    lVar24 = (longlong)(*(int *)(unaff_RBX + 0x200c) - *(int *)(unaff_RBX + 0x1c2c));
    uVar4 = *(undefined8 *)(unaff_RBX + 0x1c7c);
    uVar11 = *(undefined8 *)(unaff_RBX + 0x1c6c);
    uVar12 = *(undefined8 *)(unaff_RBX + 0x1c74);
    *(undefined4 *)(unaff_RBP + -0x40) = uVar5;
    *(undefined4 *)(unaff_RBP + -0x3c) = uVar6;
    *(undefined4 *)(unaff_RBP + -0x38) = uVar7;
    *(undefined4 *)(unaff_RBP + -0x34) = uVar8;
    if (1 < lVar24) {
      fVar30 = *(float *)(unaff_RBP + -0x3c);
      lVar20 = 1;
      if (4 < lVar24) {
        do {
          if (*(float *)(puVar17 + 8) <= fVar30) goto LAB_1805ba95e;
          *puVar17 = *(undefined8 *)((longlong)puVar17 + 0x3c);
          puVar17[1] = *(undefined8 *)((longlong)puVar17 + 0x44);
          puVar17[2] = *(undefined8 *)((longlong)puVar17 + 0x4c);
          puVar17[3] = *(undefined8 *)((longlong)puVar17 + 0x54);
          *(undefined4 *)(puVar17 + 4) = *(undefined4 *)((longlong)puVar17 + 0x5c);
          *(undefined4 *)((longlong)puVar17 + 0x24) = *(undefined4 *)(puVar17 + 0xc);
          *(undefined4 *)(puVar17 + 5) = *(undefined4 *)((longlong)puVar17 + 100);
          *(undefined4 *)((longlong)puVar17 + 0x2c) = *(undefined4 *)(puVar17 + 0xd);
          puVar17[6] = *(undefined8 *)((longlong)puVar17 + 0x6c);
          *(undefined4 *)(puVar17 + 7) = *(undefined4 *)((longlong)puVar17 + 0x74);
          if (*(float *)((longlong)puVar17 + 0x7c) <= fVar30) {
            iVar22 = iVar22 + 1;
            goto LAB_1805ba95e;
          }
          *(undefined8 *)((longlong)puVar17 + 0x3c) = puVar17[0xf];
          *(undefined8 *)((longlong)puVar17 + 0x44) = puVar17[0x10];
          *(undefined8 *)((longlong)puVar17 + 0x4c) = puVar17[0x11];
          *(undefined8 *)((longlong)puVar17 + 0x54) = puVar17[0x12];
          *(undefined4 *)((longlong)puVar17 + 0x5c) = *(undefined4 *)(puVar17 + 0x13);
          *(undefined4 *)(puVar17 + 0xc) = *(undefined4 *)((longlong)puVar17 + 0x9c);
          *(undefined4 *)((longlong)puVar17 + 100) = *(undefined4 *)(puVar17 + 0x14);
          *(undefined4 *)(puVar17 + 0xd) = *(undefined4 *)((longlong)puVar17 + 0xa4);
          *(undefined8 *)((longlong)puVar17 + 0x6c) = puVar17[0x15];
          *(undefined4 *)((longlong)puVar17 + 0x74) = *(undefined4 *)(puVar17 + 0x16);
          if (*(float *)(puVar17 + 0x17) <= fVar30) {
            iVar22 = iVar22 + 2;
            goto LAB_1805ba95e;
          }
          puVar17[0xf] = *(undefined8 *)((longlong)puVar17 + 0xb4);
          puVar17[0x10] = *(undefined8 *)((longlong)puVar17 + 0xbc);
          puVar17[0x11] = *(undefined8 *)((longlong)puVar17 + 0xc4);
          puVar17[0x12] = *(undefined8 *)((longlong)puVar17 + 0xcc);
          *(undefined4 *)(puVar17 + 0x13) = *(undefined4 *)((longlong)puVar17 + 0xd4);
          *(undefined4 *)((longlong)puVar17 + 0x9c) = *(undefined4 *)(puVar17 + 0x1b);
          *(undefined4 *)(puVar17 + 0x14) = *(undefined4 *)((longlong)puVar17 + 0xdc);
          *(undefined4 *)((longlong)puVar17 + 0xa4) = *(undefined4 *)(puVar17 + 0x1c);
          puVar17[0x15] = *(undefined8 *)((longlong)puVar17 + 0xe4);
          *(undefined4 *)(puVar17 + 0x16) = *(undefined4 *)((longlong)puVar17 + 0xec);
          if (*(float *)((longlong)puVar17 + 0xf4) <= fVar30) {
            iVar22 = iVar22 + 3;
            goto LAB_1805ba95e;
          }
          iVar22 = iVar22 + 4;
          lVar20 = lVar20 + 4;
          *(undefined8 *)((longlong)puVar17 + 0xb4) = puVar17[0x1e];
          *(undefined8 *)((longlong)puVar17 + 0xbc) = puVar17[0x1f];
          *(undefined8 *)((longlong)puVar17 + 0xc4) = puVar17[0x20];
          *(undefined8 *)((longlong)puVar17 + 0xcc) = puVar17[0x21];
          *(undefined4 *)((longlong)puVar17 + 0xd4) = *(undefined4 *)(puVar17 + 0x22);
          *(undefined4 *)(puVar17 + 0x1b) = *(undefined4 *)((longlong)puVar17 + 0x114);
          *(undefined4 *)((longlong)puVar17 + 0xdc) = *(undefined4 *)(puVar17 + 0x23);
          *(undefined4 *)(puVar17 + 0x1c) = *(undefined4 *)((longlong)puVar17 + 0x11c);
          *(undefined8 *)((longlong)puVar17 + 0xe4) = puVar17[0x24];
          *(undefined4 *)((longlong)puVar17 + 0xec) = *(undefined4 *)(puVar17 + 0x25);
          puVar17 = puVar17 + 0x1e;
        } while (lVar20 < lVar24 + -3);
      }
      if (lVar20 < lVar24) {
        puVar17 = (undefined8 *)(unaff_RBX + 0x1c4c + lVar20 * 0x3c);
        do {
          if (*(float *)((longlong)puVar17 + 4) <= fVar30) break;
          iVar22 = iVar22 + 1;
          lVar20 = lVar20 + 1;
          *(undefined8 *)((longlong)puVar17 + -0x3c) = *puVar17;
          *(undefined8 *)((longlong)puVar17 + -0x34) = puVar17[1];
          *(undefined8 *)((longlong)puVar17 + -0x2c) = puVar17[2];
          *(undefined8 *)((longlong)puVar17 + -0x24) = puVar17[3];
          *(undefined4 *)((longlong)puVar17 + -0x1c) = *(undefined4 *)(puVar17 + 4);
          *(undefined4 *)(puVar17 + -3) = *(undefined4 *)((longlong)puVar17 + 0x24);
          *(undefined4 *)((longlong)puVar17 + -0x14) = *(undefined4 *)(puVar17 + 5);
          *(undefined4 *)(puVar17 + -2) = *(undefined4 *)((longlong)puVar17 + 0x2c);
          *(undefined8 *)((longlong)puVar17 + -0xc) = puVar17[6];
          *(undefined4 *)((longlong)puVar17 + -4) = *(undefined4 *)(puVar17 + 7);
          puVar17 = (undefined8 *)((longlong)puVar17 + 0x3c);
        } while (lVar20 < lVar24);
      }
    }
LAB_1805ba95e:
    if (iVar22 != 1) {
      lVar24 = (longlong)iVar22 * 0x3c;
      puVar19 = (undefined4 *)(lVar24 + 0x1c10 + unaff_RBX);
      *puVar19 = uVar5;
      puVar19[1] = uVar6;
      puVar19[2] = uVar7;
      puVar19[3] = uVar8;
      puVar17 = (undefined8 *)(lVar24 + 0x1c20 + unaff_RBX);
      *puVar17 = uVar9;
      puVar17[1] = uVar10;
      puVar17 = (undefined8 *)(lVar24 + 0x1c30 + unaff_RBX);
      *puVar17 = uVar11;
      puVar17[1] = uVar12;
      *(undefined8 *)(lVar24 + 0x1c40 + unaff_RBX) = uVar4;
      *(undefined4 *)(lVar24 + 0x1c48 + unaff_RBX) = uVar3;
    }
  }
  *(undefined4 *)(unaff_RBX + 0x1c0c) = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1c14) = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1c1c) = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1c24) = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1c2c) = 0;
  if (unaff_R13B != '\0') {
    FUN_1805beae0();
  }
  return;
}






// 函数: void FUN_1805ba9f1(void)
void FUN_1805ba9f1(void)

{
  FUN_1805beae0();
  return;
}






// 函数: void FUN_1805baa03(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)
void FUN_1805baa03(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 in_R10D;
  char unaff_R13B;
  undefined8 in_XMM3_Qb;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM4_Qb;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM5_Qb;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  
  if (param_3 != -2) {
    lVar2 = (longlong)(param_3 + 3) * 0x3c;
    puVar1 = (undefined8 *)(lVar2 + 0x1c10 + unaff_RBX);
    *puVar1 = param_4;
    puVar1[1] = in_XMM3_Qb;
    puVar1 = (undefined8 *)(lVar2 + 0x1c20 + unaff_RBX);
    *puVar1 = in_XMM4_Qa;
    puVar1[1] = in_XMM4_Qb;
    puVar1 = (undefined8 *)(lVar2 + 0x1c30 + unaff_RBX);
    *puVar1 = in_XMM5_Qa;
    puVar1[1] = in_XMM5_Qb;
    *(ulonglong *)(lVar2 + 0x1c40 + unaff_RBX) = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
    *(undefined4 *)(lVar2 + 0x1c48 + unaff_RBX) = in_R10D;
  }
  *(undefined4 *)(unaff_RBX + 0x1c0c) = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1c14) = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1c1c) = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1c24) = 0xffffffff;
  *(undefined4 *)(unaff_RBX + 0x1c2c) = unaff_ESI;
  if (unaff_R13B != '\0') {
    FUN_1805beae0();
  }
  return;
}






// 函数: void FUN_1805baa20(longlong *param_1)
void FUN_1805baa20(longlong *param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar15 = 0;
  lVar6 = param_1[0x291];
  *(undefined4 *)((longlong)param_1 + 0x1b6c) = 0;
  fVar1 = *(float *)(*param_1 + 0x35c);
  uVar2 = *(uint *)(lVar6 + 0x52ed94);
  if (0 < (int)uVar2) {
    piVar8 = (int *)(lVar6 + 0x30b0);
    uVar13 = uVar15;
    uVar10 = uVar15;
    do {
      if (-1 < *piVar8) goto LAB_1805baa80;
      uVar13 = (ulonglong)((int)uVar13 + 1);
      uVar10 = uVar10 + 1;
      piVar8 = piVar8 + 0x298;
    } while ((longlong)uVar10 < (longlong)(int)uVar2);
  }
  uVar13 = (ulonglong)uVar2;
LAB_1805baa80:
  uVar7 = (uint)uVar13;
  do {
    if ((int)uVar2 <= (int)uVar7) {
      return;
    }
    iVar4 = (int)uVar13;
    lVar12 = (longlong)iVar4 * 0xa60;
    if (((*(int *)(lVar12 + 0x3608 + lVar6) == 1) && (iVar4 != *(int *)(*param_1 + 0x10))) &&
       ((int)fVar1 == (int)*(float *)(lVar12 + 0x33fc + lVar6))) {
      lVar14 = *(longlong *)(*param_1 + 0x20);
      lVar3 = *(longlong *)(lVar12 + 0x30c0 + lVar6);
      fVar18 = *(float *)(lVar14 + 0xc) - *(float *)(lVar3 + 0xc);
      fVar17 = *(float *)(lVar14 + 0x10) - *(float *)(lVar3 + 0x10);
      fVar16 = *(float *)(lVar14 + 0x14) - *(float *)(lVar3 + 0x14);
      fVar16 = -(fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16);
      if (-1e+30 < fVar16) {
        iVar9 = *(int *)((longlong)param_1 + 0x1b6c);
        uVar13 = uVar15;
        if (0 < iVar9) {
          pfVar5 = (float *)((longlong)param_1 + 0x17b4);
          uVar10 = uVar15;
          do {
            if (*pfVar5 <= fVar16) break;
            uVar7 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar7;
            uVar13 = uVar13 + 1;
            pfVar5 = pfVar5 + 0xf;
          } while ((int)uVar7 < iVar9);
          if (0xf < (longlong)uVar13) goto LAB_1805babfd;
        }
        if (iVar9 < 0x10) {
          iVar9 = iVar9 + 1;
          *(int *)((longlong)param_1 + 0x1b6c) = iVar9;
        }
        lVar14 = (longlong)(iVar9 + -1);
        if ((longlong)uVar13 < lVar14) {
          puVar11 = (undefined8 *)((lVar14 + 0x65) * 0x3c + (longlong)param_1);
          lVar14 = lVar14 - uVar13;
          do {
            *puVar11 = *(undefined8 *)((longlong)puVar11 + -0x3c);
            puVar11[1] = *(undefined8 *)((longlong)puVar11 + -0x34);
            puVar11[2] = *(undefined8 *)((longlong)puVar11 + -0x2c);
            puVar11[3] = *(undefined8 *)((longlong)puVar11 + -0x24);
            puVar11[4] = *(undefined8 *)((longlong)puVar11 + -0x1c);
            puVar11[5] = *(undefined8 *)((longlong)puVar11 + -0x14);
            puVar11[6] = *(undefined8 *)((longlong)puVar11 + -0xc);
            *(undefined4 *)(puVar11 + 7) = *(undefined4 *)((longlong)puVar11 + -4);
            puVar11 = (undefined8 *)((longlong)puVar11 + -0x3c);
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        lVar14 = (uVar13 + 0x65) * 0x3c;
        iVar9 = *(int *)(lVar12 + 0x30b0 + lVar6);
        if (*(int *)(lVar14 + (longlong)param_1) != iVar9) {
          *(int *)(lVar14 + (longlong)param_1) = iVar9;
          lVar6 = uVar13 * 0x3c;
          *(float *)(lVar6 + 0x17b4 + (longlong)param_1) = fVar16;
          *(undefined8 *)(lVar6 + 0x17e0 + (longlong)param_1) = 0x7149f2ca;
          *(undefined4 *)(lVar6 + 0x17bc + (longlong)param_1) = 0;
        }
      }
    }
LAB_1805babfd:
    lVar6 = param_1[0x291];
    uVar7 = (uint)*(short *)(lVar6 + 0x52dda0 + (longlong)iVar4 * 2);
    uVar13 = (ulonglong)uVar7;
  } while( true );
}






