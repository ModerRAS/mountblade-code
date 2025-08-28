#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part271.c - 2 个函数

// 函数: void FUN_18081e8fb(void)
void FUN_18081e8fb(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int64_t unaff_RBX;
  uint64_t uVar16;
  int unaff_EDI;
  int iVar17;
  int64_t lVar18;
  int iVar19;
  int iVar20;
  uint in_R10D;
  float *in_R11;
  uint64_t uVar21;
  uint64_t *unaff_R14;
  float fVar22;
  float in_XMM3_Da;
  float fVar23;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  float unaff_XMM8_Da;
  int64_t *in_stack_000000c8;
  
  uVar16 = (uint64_t)(uint)*unaff_R14;
  uVar21 = *unaff_R14;
  do {
    iVar17 = 0;
    fVar23 = (float)(uVar16 & 0xffffffff) * 2.3283064e-10;
    if (0 < (int)in_R10D) {
      if (7 < in_R10D) {
        uVar13 = in_R10D & 0x80000007;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
        }
        iVar19 = *(uint *)((int64_t)unaff_R14 + 4) + 1;
        uVar15 = iVar19 * in_R10D;
        iVar19 = (*(uint *)((int64_t)unaff_R14 + 4) - iVar19) * in_R10D;
        do {
          iVar17 = iVar17 + 8;
          piVar1 = (int *)(unaff_RBX + (uint64_t)(iVar19 + uVar15) * 4);
          iVar20 = piVar1[1];
          iVar4 = piVar1[2];
          iVar5 = piVar1[3];
          piVar2 = (int *)(unaff_RBX + (uint64_t)uVar15 * 4);
          iVar6 = piVar2[1];
          iVar7 = piVar2[2];
          iVar8 = piVar2[3];
          piVar3 = (int *)(unaff_RBX + (uint64_t)(iVar19 + 4 + uVar15) * 4);
          iVar9 = *piVar3;
          iVar10 = piVar3[1];
          iVar11 = piVar3[2];
          iVar12 = piVar3[3];
          uVar14 = uVar15 + 4;
          uVar15 = uVar15 + 8;
          *in_R11 = (float)*piVar1 * in_XMM5_Da * (1.0 - fVar23) +
                    (float)*piVar2 * in_XMM5_Da * fVar23;
          in_R11[1] = (float)iVar20 * in_XMM5_Db * (1.0 - fVar23) +
                      (float)iVar6 * in_XMM5_Db * fVar23;
          in_R11[2] = (float)iVar4 * in_XMM5_Dc * (1.0 - fVar23) +
                      (float)iVar7 * in_XMM5_Dc * fVar23;
          in_R11[3] = (float)iVar5 * in_XMM5_Dd * (1.0 - fVar23) +
                      (float)iVar8 * in_XMM5_Dd * fVar23;
          piVar1 = (int *)(unaff_RBX + (uint64_t)uVar14 * 4);
          iVar20 = piVar1[1];
          iVar4 = piVar1[2];
          iVar5 = piVar1[3];
          in_R11[4] = (float)iVar9 * in_XMM5_Da * (1.0 - fVar23) +
                      (float)*piVar1 * in_XMM5_Da * fVar23;
          in_R11[5] = (float)iVar10 * in_XMM5_Db * (1.0 - fVar23) +
                      (float)iVar20 * in_XMM5_Db * fVar23;
          in_R11[6] = (float)iVar11 * in_XMM5_Dc * (1.0 - fVar23) +
                      (float)iVar4 * in_XMM5_Dc * fVar23;
          in_R11[7] = (float)iVar12 * in_XMM5_Dd * (1.0 - fVar23) +
                      (float)iVar5 * in_XMM5_Dd * fVar23;
          in_R11 = in_R11 + 8;
        } while (iVar17 < (int)(in_R10D - uVar13));
      }
      if (iVar17 < (int)in_R10D) {
        if (3 < (int)(in_R10D - iVar17)) {
          fVar22 = unaff_XMM8_Da - fVar23;
          iVar19 = *(uint *)((int64_t)unaff_R14 + 4) + 1;
          iVar20 = (*(uint *)((int64_t)unaff_R14 + 4) - iVar19) * in_R10D;
          uVar15 = iVar19 * in_R10D + iVar17;
          uVar13 = ((in_R10D - iVar17) - 4 >> 2) + 1;
          uVar16 = (uint64_t)uVar13;
          iVar17 = iVar17 + uVar13 * 4;
          do {
            *in_R11 = (float)*(int *)(unaff_RBX + (uint64_t)(uVar15 + iVar20) * 4) * in_XMM3_Da *
                      fVar22 + (float)*(int *)(unaff_RBX + (uint64_t)uVar15 * 4) * in_XMM3_Da *
                               fVar23;
            in_R11[1] = (float)*(int *)(unaff_RBX + (uint64_t)(iVar20 + 1 + uVar15) * 4) *
                        in_XMM3_Da * fVar22 +
                        (float)*(int *)(unaff_RBX + (uint64_t)(uVar15 + 1) * 4) * in_XMM3_Da *
                        fVar23;
            uVar13 = uVar15 + iVar20 + 3;
            in_R11[2] = (float)*(int *)(unaff_RBX + (uint64_t)(iVar20 + 2 + uVar15) * 4) *
                        in_XMM3_Da * fVar22 +
                        (float)*(int *)(unaff_RBX + (uint64_t)(uVar15 + 2) * 4) * in_XMM3_Da *
                        fVar23;
            uVar14 = uVar15 + 3;
            uVar15 = uVar15 + 4;
            in_R11[3] = (float)*(int *)(unaff_RBX + (uint64_t)uVar13 * 4) * in_XMM3_Da * fVar22 +
                        (float)*(int *)(unaff_RBX + (uint64_t)uVar14 * 4) * in_XMM3_Da * fVar23;
            in_R11 = in_R11 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        if (iVar17 < (int)in_R10D) {
          uVar13 = *(uint *)((int64_t)unaff_R14 + 4);
          iVar19 = uVar13 + 1;
          uVar15 = iVar19 * in_R10D + iVar17;
          lVar18 = (int64_t)(int)(in_R10D - iVar17);
          do {
            uVar16 = (uint64_t)uVar15;
            uVar14 = uVar15 + (uVar13 - iVar19) * in_R10D;
            uVar15 = uVar15 + 1;
            *in_R11 = (float)*(int *)(unaff_RBX + (uint64_t)uVar14 * 4) * in_XMM3_Da *
                      (unaff_XMM8_Da - fVar23) +
                      (float)*(int *)(unaff_RBX + uVar16 * 4) * in_XMM3_Da * fVar23;
            in_R11 = in_R11 + 1;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
      }
    }
    uVar16 = uVar21 + *in_stack_000000c8;
    *unaff_R14 = uVar16;
    unaff_EDI = unaff_EDI + -1;
    uVar21 = uVar16;
  } while (unaff_EDI != 0);
  return;
}





// 函数: void FUN_18081eb9c(void)
void FUN_18081eb9c(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int8_t uVar3;
  int8_t uVar4;
  int8_t uVar5;
  int8_t uVar6;
  int8_t uVar7;
  int8_t uVar8;
  uint3 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int8_t *puVar14;
  int64_t unaff_RBX;
  int iVar15;
  uint uVar16;
  uint64_t uVar17;
  int unaff_EDI;
  uint64_t uVar18;
  int8_t *puVar19;
  int iVar20;
  int in_R10D;
  uint64_t uVar21;
  float *in_R11;
  uint64_t uVar22;
  float fVar23;
  float fVar24;
  uint64_t *in_stack_000000c0;
  int64_t *in_stack_000000c8;
  
  if (unaff_EDI != 0) {
    if (in_R10D == 1) {
      uVar17 = *in_stack_000000c0;
      uVar22 = (uint64_t)(uint)*in_stack_000000c0;
      do {
        uVar17 = uVar17 + *in_stack_000000c8;
        uVar11 = *(uint *)((int64_t)in_stack_000000c0 + 4);
        uVar18 = (uint64_t)uVar11;
        lVar1 = unaff_RBX + (uint64_t)uVar11 * 2;
        uVar3 = *(int8_t *)(uVar18 + 2 + lVar1);
        uVar21 = (uint64_t)(uVar11 + 1);
        lVar2 = unaff_RBX + (uint64_t)(uVar11 + 1) * 2;
        fVar23 = (float)(uVar22 & 0xffffffff) * 2.3283064e-10;
        uVar4 = *(int8_t *)(uVar18 + 1 + lVar1);
        uVar5 = *(int8_t *)(uVar18 + lVar1);
        uVar6 = *(int8_t *)(uVar21 + 1 + lVar2);
        uVar7 = *(int8_t *)(uVar21 + 2 + lVar2);
        uVar8 = *(int8_t *)(uVar21 + lVar2);
        *in_stack_000000c0 = uVar17;
        *in_R11 = (float)((int)((uint)CONCAT21(CONCAT11(uVar3,uVar4),uVar5) << 8) >> 8) *
                  1.1920929e-07 * (1.0 - fVar23) +
                  (float)((int)((uint)CONCAT21(CONCAT11(uVar7,uVar6),uVar8) << 8) >> 8) *
                  1.1920929e-07 * fVar23;
        in_R11 = in_R11 + 1;
        unaff_EDI = unaff_EDI + -1;
        uVar22 = uVar17;
      } while (unaff_EDI != 0);
    }
    else {
      uVar22 = (uint64_t)(uint)*in_stack_000000c0;
      uVar17 = *in_stack_000000c0;
      do {
        iVar15 = 0;
        fVar23 = (float)(uVar22 & 0xffffffff) * 2.3283064e-10;
        if (3 < in_R10D) {
          iVar15 = (int)(uVar17 >> 0x20);
          iVar10 = iVar15 + 1;
          fVar24 = 1.0 - fVar23;
          iVar20 = (iVar15 - iVar10) * in_R10D;
          uVar16 = iVar10 * in_R10D;
          uVar11 = (in_R10D - 4U >> 2) + 1;
          uVar22 = (uint64_t)uVar11;
          iVar15 = uVar11 * 4;
          do {
            uVar11 = uVar16 + iVar20 + 1;
            puVar19 = (int8_t *)
                      ((uint64_t)(uVar16 + 1) + unaff_RBX + (uint64_t)(uVar16 + 1) * 2);
            uVar9 = *(uint3 *)((uint64_t)uVar11 + unaff_RBX + (uint64_t)uVar11 * 2);
            uVar3 = puVar19[1];
            *in_R11 = (float)((int)((uint)*(uint3 *)((uint64_t)(iVar20 + uVar16) +
                                                    unaff_RBX + (uint64_t)(iVar20 + uVar16) * 2) <<
                                   8) >> 8) * 1.1920929e-07 * fVar24 +
                      (float)((int)((uint)*(uint3 *)(unaff_RBX + (uint64_t)uVar16 * 3) << 8) >> 8)
                      * 1.1920929e-07 * fVar23;
            uVar11 = uVar16 + 2 + iVar20;
            puVar14 = (int8_t *)((uint64_t)uVar11 + unaff_RBX + (uint64_t)uVar11 * 2);
            uVar11 = uVar16 + 2;
            uVar4 = puVar14[2];
            in_R11[1] = (float)((int)((uint)uVar9 << 8) >> 8) * 1.1920929e-07 * fVar24 +
                        (float)((int)((uint)CONCAT21(CONCAT11(puVar19[2],uVar3),*puVar19) << 8) >> 8
                               ) * 1.1920929e-07 * fVar23;
            uVar12 = uVar16 + 3 + iVar20;
            uVar13 = uVar16 + 3;
            uVar16 = uVar16 + 4;
            puVar19 = (int8_t *)((uint64_t)uVar13 + unaff_RBX + (uint64_t)uVar13 * 2);
            uVar9 = *(uint3 *)((uint64_t)uVar12 + unaff_RBX + (uint64_t)uVar12 * 2);
            uVar3 = puVar19[1];
            in_R11[2] = (float)((int)((uint)CONCAT21(CONCAT11(uVar4,puVar14[1]),*puVar14) << 8) >> 8
                               ) * 1.1920929e-07 * fVar24 +
                        (float)((int)((uint)*(uint3 *)((uint64_t)uVar11 +
                                                      unaff_RBX + (uint64_t)uVar11 * 2) << 8) >> 8)
                        * 1.1920929e-07 * fVar23;
            in_R11[3] = (float)((int)((uint)uVar9 << 8) >> 8) * 1.1920929e-07 * fVar24 +
                        (float)((int)((uint)CONCAT21(CONCAT11(puVar19[2],uVar3),*puVar19) << 8) >> 8
                               ) * 1.1920929e-07 * fVar23;
            in_R11 = in_R11 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if (iVar15 < in_R10D) {
          uVar11 = *(uint *)((int64_t)in_stack_000000c0 + 4);
          iVar10 = uVar11 + 1;
          uVar16 = iVar10 * in_R10D + iVar15;
          uVar22 = (uint64_t)(uint)(in_R10D - iVar15);
          do {
            uVar18 = (uint64_t)uVar16;
            uVar12 = (uVar11 - iVar10) * in_R10D + uVar16;
            uVar16 = uVar16 + 1;
            *in_R11 = (float)((int)((uint)*(uint3 *)((uint64_t)uVar12 +
                                                    unaff_RBX + (uint64_t)uVar12 * 2) << 8) >> 8) *
                      1.1920929e-07 * (1.0 - fVar23) +
                      (float)((int)((uint)*(uint3 *)(unaff_RBX + uVar18 * 3) << 8) >> 8) *
                      1.1920929e-07 * fVar23;
            in_R11 = in_R11 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        uVar22 = uVar17 + *in_stack_000000c8;
        *in_stack_000000c0 = uVar22;
        unaff_EDI = unaff_EDI + -1;
        uVar17 = uVar22;
      } while (unaff_EDI != 0);
    }
  }
  return;
}





