#include "TaleWorlds.Native.Split.h"

// 99_part_09_part063.c - 8 个函数

// 函数: void FUN_1805e0fd0(int *param_1,int64_t param_2)
void FUN_1805e0fd0(int *param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  bool bVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  uint64_t uStackX_8;
  
  lVar2 = **(int64_t **)(param_1 + 8);
  lVar11 = lVar2;
  if (((*(uint *)(lVar2 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar2 + 0x564))) {
    lVar8 = (int64_t)*(int *)(lVar2 + 0x564) * 0xa60;
    if (*(int *)(lVar8 + 0x3608 + *(int64_t *)(lVar2 + 0x8d8)) == 1) {
      lVar11 = *(int64_t *)(lVar2 + 0x8d8) + 0x30a0 + lVar8;
    }
  }
  lVar8 = lVar11;
  cVar5 = func_0x000180522f60(lVar2);
  uVar7 = param_1[10];
  if ((uVar7 & 8) == 0) {
    if ((uVar7 >> 8 & 1) == 0) {
      if ((uVar7 & 2) == 0) {
        uVar7 = uVar7 | 2;
        param_1[10] = uVar7;
        uStackX_8 = CONCAT44((float)param_1[0x19] - (float)param_1[0xc],
                             (float)param_1[0x18] - (float)param_1[0xb]);
        *(uint64_t *)(param_1 + 0x2a) = uStackX_8;
      }
      uVar7 = uVar7 | 0x100;
      fVar12 = (float)param_1[0x2a] * (float)param_1[0x2a] +
               (float)param_1[0x2b] * (float)param_1[0x2b];
      param_1[0x2c] = (int)fVar12;
    }
    else {
      fVar12 = (float)param_1[0x2c];
    }
    param_1[0x2d] = (int)fVar12 + 0x3f800000U >> 1;
    param_1[10] = uVar7 | 8;
  }
  fVar12 = (float)param_1[0x2d];
  if ((*(uint *)(lVar8 + 0x56c) & 0x800) != 0) {
    if ((((cVar5 == '\0') && ((char)param_1[0x451] == '\0')) && (*param_1 != 0)) &&
       ((*(char *)((int64_t)param_1 + 0x1145) == '\0' &&
        (*(char *)((int64_t)param_1 + 0x1147) != '\0')))) {
      *(uint64_t *)(param_2 + 0x30) = 0;
    }
    else {
      plVar9 = *(int64_t **)(param_1 + 8);
      if (cVar5 != (char)param_1[4]) {
        if ((*(uint *)(plVar9 + 2) & 0x20) == 0) {
          lVar8 = *(int64_t *)(*(int64_t *)(*(int64_t *)plVar9[1] + 0x8f8) + 0x9e8);
          plVar9[0x15] = lVar8;
          *(uint *)(plVar9 + 2) = *(uint *)(plVar9 + 2) | 0x20;
          plVar9 = *(int64_t **)(param_1 + 8);
        }
        else {
          lVar8 = plVar9[0x15];
        }
        if ((((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x30))) &&
            ((uVar3 = *(uint64_t *)
                       ((int64_t)*(int *)(lVar8 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar8 + 0xd0)
                       ), (uVar3 >> 9 & 1) == 0 || (0 < *(short *)(lVar8 + 8))))) &&
           ((uVar3 >> 1 & 1) != 0)) {
          plVar9[0x273] = *(int64_t *)(&system_error_code + (int64_t)(int)plVar9[0x274] * 8);
          plVar9 = *(int64_t **)(param_1 + 8);
        }
        *(char *)(param_1 + 4) = cVar5;
        lVar8 = lVar11;
      }
      bVar10 = false;
      if (((((*(byte *)(param_1 + 6) & 1) == 0) && ((int)plVar9[0x295] != 8)) &&
          ((*(uint *)((int64_t)plVar9 + 0x1484) >> 6 & 1) == 0)) ||
         ((*(byte *)(plVar9 + 0x413) & 0x10) != 0)) {
        bVar10 = true;
      }
      else if (((*(uint *)((int64_t)plVar9 + 0x1484) >> 3 & 1) == 0) && ((int)plVar9[0x295] == 0))
      {
        if ((int)plVar9[0x269] == 0x10) {
          fVar12 = (float)param_1[0x453] - *(float *)(*(int64_t *)(lVar2 + 0x20) + 0x10);
          fVar13 = (float)param_1[0x452] - *(float *)(*(int64_t *)(lVar2 + 0x20) + 0xc);
          fVar12 = SQRT(fVar12 * fVar12 + fVar13 * fVar13);
          if ((*(byte *)(*(int64_t *)(lVar2 + 0x590) + 0x3424) & 8) == 0) {
            fVar13 = 0.4;
          }
          else {
            fVar13 = 0.8;
          }
        }
        else if ((*(byte *)(*(int64_t *)(lVar2 + 0x590) + 0x3424) & 8) == 0) {
          fVar13 = 1.5;
        }
        else {
          fVar13 = 2.5;
        }
        if ((char)plVar9[0x29b] == '\0') {
          bVar10 = fVar12 / *(float *)(*(int64_t *)(*plVar9 + 0x20) + 0x84) < fVar13;
        }
        else {
          fVar16 = *(float *)(*(int64_t *)(lVar8 + 0x590) + 0x25d0);
          fVar1 = *(float *)(*(int64_t *)(lVar8 + 0x590) + 0x25cc);
          if ((param_1[10] & 2U) == 0) {
            param_1[10] = param_1[10] | 2;
            uStackX_8 = CONCAT44((float)param_1[0x19] - (float)param_1[0xc],
                                 (float)param_1[0x18] - (float)param_1[0xb]);
            *(uint64_t *)(param_1 + 0x2a) = uStackX_8;
            plVar9 = *(int64_t **)(param_1 + 8);
          }
          uStackX_8._4_4_ = (float)((uint64_t)*(uint64_t *)(param_1 + 0x2a) >> 0x20);
          uStackX_8._0_4_ = (float)*(uint64_t *)(param_1 + 0x2a);
          fVar14 = uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8;
          fVar14 = (float)(fVar14 <= 1.1754944e-38) * 1.1754944e-38 + fVar14;
          auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
          fVar15 = auVar17._0_4_;
          fVar14 = fVar15 * 0.5 * (3.0 - fVar14 * fVar15 * fVar15);
          fVar14 = fVar14 * uStackX_8._4_4_ * *(float *)((int64_t)plVar9 + 0x153c) +
                   fVar14 * (float)uStackX_8 * *(float *)(plVar9 + 0x2a7);
          if (((fVar16 * fVar1 * 1.01 < fVar14) ||
              (fVar16 = *(float *)(*(int64_t *)(*plVar9 + 0x20) + 0x84), fVar16 <= fVar14)) ||
             (fVar13 <= fVar12 / (fVar16 - fVar14))) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
        }
      }
      uVar7 = 0x4000;
      if ((*(uint *)(plVar9 + 0x413) & 0x200) != 0) {
        uVar7 = 0x2000;
      }
      *(uint *)(param_2 + 0x28) = uVar7 | ((bVar10 ^ 1) + 1) * 0x800;
      fVar12 = (float)param_1[0x38];
      if ((-0.2 <= fVar12) && (fVar12 <= 0.2)) {
        fVar12 = 0.0;
      }
      fVar13 = (float)param_1[0x39];
      if ((fVar13 < -0.2) || (fVar16 = 0.0, 0.2 < fVar13)) {
        fVar16 = fVar13;
      }
      uStackX_8 = CONCAT44(fVar16,fVar12);
      *(uint64_t *)(param_2 + 0x30) = uStackX_8;
    }
    return;
  }
  func_0x000180507a40(param_1 + 10);
  iVar6 = param_1[0x46a];
  fVar13 = (float)param_1[0x24] * 1.2;
  if ((*(byte *)(param_1 + 6) & 2) == 0) {
    fVar16 = (float)param_1[0x24];
    if (iVar6 == 0) {
      fVar16 = fVar13;
    }
    if ((fVar12 <= fVar16) || (cVar5 = FUN_1805dbe60(param_1), lVar8 = lVar11, cVar5 != '\0')) {
      param_1[0x46a] = 0;
      if (0.0 < *(float *)(*(int64_t *)(lVar8 + 0x20) + 0x20)) {
        param_1[0x46a] = 2;
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 2;
      }
      if (((param_1[5] != 1) && (lVar4 = *(int64_t *)(param_1 + 8), *(int *)(lVar4 + 0x14a8) == 0))
         && ((*(char *)(lVar4 + 0x14d8) != '\0' ||
             (((byte)*(int32_t *)(lVar4 + 0x2098) & 5) == 5)))) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(int32_t *)(*(int64_t *)(lVar2 + 0x20) + 0x34));
      }
      if (iVar6 != 0) {
        return;
      }
      if (fVar13 < fVar12) {
        return;
      }
      if ((param_1[5] != 1) || (*(int *)(*(int64_t *)(param_1 + 8) + 0x14a8) != 1)) {
        if (*(int *)(*(int64_t *)(param_1 + 8) + 0x14a8) != 5) {
          return;
        }
        FUN_1805b6920(*(int64_t *)(param_1 + 8) + 8);
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(int32_t *)(*(int64_t *)(lVar11 + 0x20) + 0x34));
      }
      iVar6 = FUN_1805e2470(param_1,lVar8);
      if (iVar6 == -1) {
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
        param_1[0x46b] = 1;
        return;
      }
      if (iVar6 != 0) {
        if (iVar6 != 1) {
          return;
        }
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x20;
        param_1[0x46b] = 1;
        return;
      }
      param_1[0x46b] = 0;
      return;
    }
  }
  if ((param_1[10] & 0x10U) == 0) {
    param_1[10] = param_1[10] | 0x10;
    uStackX_8 = CONCAT44((float)param_1[0x10] - (float)param_1[0xc],
                         (float)param_1[0xf] - (float)param_1[0xb]);
    *(uint64_t *)(param_1 + 0x31) = uStackX_8;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(int64_t *)(lVar8 + 0x20) + 0x34));
}






// 函数: void FUN_1805e10fe(void)
void FUN_1805e10fe(void)

{
  float fVar1;
  byte bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int *unaff_RDI;
  int64_t *plVar8;
  bool bVar9;
  int64_t in_R10;
  int64_t lVar10;
  uint unaff_R13D;
  char unaff_R14B;
  int64_t unaff_R15;
  bool in_ZF;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float unaff_XMM7_Da;
  int64_t in_stack_00000030;
  
  if (in_ZF) {
    func_0x000180507a40(unaff_RDI + 10);
    bVar2 = *(byte *)(unaff_RDI + 6);
    fVar12 = (float)unaff_RDI[0x24];
    iVar6 = unaff_RDI[0x46a];
    fVar13 = fVar12 * 1.2;
    *(float *)(unaff_RBP + 0x77) = fVar13;
    if ((bVar2 & 2) != 0) {
LAB_1805e1953:
      if ((unaff_RDI[10] & 0x10U) == 0) {
        fVar12 = (float)unaff_RDI[0x10];
        fVar13 = (float)unaff_RDI[0xc];
        unaff_RDI[10] = unaff_RDI[10] | 0x10;
        *(float *)(unaff_RBP + 0x67) = (float)unaff_RDI[0xf] - (float)unaff_RDI[0xb];
        *(float *)(unaff_RBP + 0x6b) = fVar12 - fVar13;
        *(uint64_t *)(unaff_RDI + 0x31) = *(uint64_t *)(unaff_RBP + 0x67);
      }
      uVar4 = *(uint64_t *)(unaff_RDI + 0x31);
      lVar10 = *(int64_t *)(in_R10 + 0x20);
      *(uint64_t *)(unaff_RBP + 0x7f) = uVar4;
      *(uint64_t *)(unaff_RBP + 0x67) = uVar4;
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(int32_t *)(lVar10 + 0x34));
    }
    if (iVar6 == 0) {
      fVar12 = fVar13;
    }
    if (fVar12 < unaff_XMM7_Da) {
      cVar5 = FUN_1805dbe60();
      in_R10 = in_stack_00000030;
      if (cVar5 == '\0') goto LAB_1805e1953;
      fVar13 = *(float *)(unaff_RBP + 0x77);
    }
    unaff_RDI[0x46a] = 0;
    if (0.0 < *(float *)(*(int64_t *)(in_R10 + 0x20) + 0x20)) {
      unaff_RDI[0x46a] = 2;
      *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 2;
    }
    if (((unaff_RDI[5] != 1) &&
        (lVar10 = *(int64_t *)(unaff_RDI + 8), *(int *)(lVar10 + 0x14a8) == 0)) &&
       ((*(char *)(lVar10 + 0x14d8) != '\0' || (((byte)*(int32_t *)(lVar10 + 0x2098) & 5) == 5)))
       ) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(int32_t *)(*(int64_t *)(unaff_R15 + 0x20) + 0x34));
    }
    if ((iVar6 == 0) && (unaff_XMM7_Da <= fVar13)) {
      if ((unaff_RDI[5] == 1) && (*(int *)(*(int64_t *)(unaff_RDI + 8) + 0x14a8) == 1)) {
        iVar6 = FUN_1805e2470(fVar13,in_R10);
        if (iVar6 == -1) {
          *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 0x10;
          unaff_RDI[0x46b] = 1;
        }
        else if (iVar6 == 0) {
          unaff_RDI[0x46b] = 0;
        }
        else if (iVar6 == 1) {
          *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 0x20;
          unaff_RDI[0x46b] = 1;
        }
      }
      else if (*(int *)(*(int64_t *)(unaff_RDI + 8) + 0x14a8) == 5) {
        FUN_1805b6920(*(int64_t *)(unaff_RDI + 8) + 8);
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(int32_t *)(*(int64_t *)(in_stack_00000030 + 0x20) + 0x34));
      }
    }
  }
  else if ((((unaff_R14B == '\0') && ((char)unaff_RDI[0x451] == '\0')) && (*unaff_RDI != 0)) &&
          ((*(char *)((int64_t)unaff_RDI + 0x1145) == '\0' &&
           (*(char *)((int64_t)unaff_RDI + 0x1147) != '\0')))) {
    *(uint64_t *)(unaff_RSI + 0x30) = 0;
  }
  else {
    plVar8 = *(int64_t **)(unaff_RDI + 8);
    if (unaff_R14B != (char)unaff_RDI[4]) {
      if ((*(uint *)(plVar8 + 2) & 0x20) == 0) {
        lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)plVar8[1] + 0x8f8) + 0x9e8);
        plVar8[0x15] = lVar10;
        *(uint *)(plVar8 + 2) = *(uint *)(plVar8 + 2) | 0x20;
        plVar8 = *(int64_t **)(unaff_RDI + 8);
      }
      else {
        lVar10 = plVar8[0x15];
      }
      if ((((lVar10 != 0) && (0 < *(int *)(lVar10 + 0x30))) &&
          ((uVar3 = *(uint64_t *)
                     ((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar10 + 0xd0)
                     ), (uVar3 >> 9 & 1) == 0 || (0 < *(short *)(lVar10 + 8))))) &&
         ((uVar3 >> 1 & 1) != 0)) {
        plVar8[0x273] = *(int64_t *)(&system_error_code + (int64_t)(int)plVar8[0x274] * 8);
        plVar8 = *(int64_t **)(unaff_RDI + 8);
      }
      *(char *)(unaff_RDI + 4) = unaff_R14B;
      in_R10 = in_stack_00000030;
    }
    bVar9 = false;
    if (((((*(byte *)(unaff_RDI + 6) & 1) == 0) && ((int)plVar8[0x295] != 8)) &&
        ((*(uint *)((int64_t)plVar8 + 0x1484) >> 6 & 1) == 0)) ||
       ((*(byte *)(plVar8 + 0x413) & 0x10) != 0)) {
      bVar9 = true;
    }
    else if (((*(uint *)((int64_t)plVar8 + 0x1484) >> 3 & 1) == 0) && ((int)plVar8[0x295] == 0)) {
      if ((int)plVar8[0x269] == 0x10) {
        fVar12 = (float)unaff_RDI[0x453] - *(float *)(*(int64_t *)(unaff_R15 + 0x20) + 0x10);
        fVar13 = (float)unaff_RDI[0x452] - *(float *)(*(int64_t *)(unaff_R15 + 0x20) + 0xc);
        unaff_XMM7_Da = SQRT(fVar12 * fVar12 + fVar13 * fVar13);
        if ((*(byte *)(*(int64_t *)(unaff_R15 + 0x590) + 0x3424) & 8) == 0) {
          fVar12 = 0.4;
        }
        else {
          fVar12 = 0.8;
        }
      }
      else if ((*(byte *)(*(int64_t *)(unaff_R15 + 0x590) + 0x3424) & 8) == 0) {
        fVar12 = 1.5;
      }
      else {
        fVar12 = 2.5;
      }
      if ((char)plVar8[0x29b] == '\0') {
        bVar9 = unaff_XMM7_Da / *(float *)(*(int64_t *)(*plVar8 + 0x20) + 0x84) < fVar12;
      }
      else {
        fVar13 = *(float *)(*(int64_t *)(in_R10 + 0x590) + 0x25d0);
        fVar16 = *(float *)(*(int64_t *)(in_R10 + 0x590) + 0x25cc);
        if ((unaff_RDI[10] & 2U) == 0) {
          fVar11 = (float)unaff_RDI[0x19];
          fVar1 = (float)unaff_RDI[0xc];
          unaff_RDI[10] = unaff_RDI[10] | 2;
          *(float *)(unaff_RBP + 0x67) = (float)unaff_RDI[0x18] - (float)unaff_RDI[0xb];
          *(float *)(unaff_RBP + 0x6b) = fVar11 - fVar1;
          *(uint64_t *)(unaff_RDI + 0x2a) = *(uint64_t *)(unaff_RBP + 0x67);
          plVar8 = *(int64_t **)(unaff_RDI + 8);
        }
        *(uint64_t *)(unaff_RBP + 0x67) = *(uint64_t *)(unaff_RDI + 0x2a);
        fVar11 = *(float *)(unaff_RBP + 0x6b);
        fVar1 = *(float *)(unaff_RBP + 0x67);
        fVar14 = fVar11 * fVar11 + fVar1 * fVar1;
        fVar14 = (float)(fVar14 <= 1.1754944e-38) * 1.1754944e-38 + fVar14;
        auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar17._0_4_;
        fVar14 = fVar15 * 0.5 * (3.0 - fVar14 * fVar15 * fVar15);
        fVar11 = fVar14 * fVar11 * *(float *)((int64_t)plVar8 + 0x153c) +
                 fVar14 * fVar1 * *(float *)(plVar8 + 0x2a7);
        if (((fVar13 * fVar16 * 1.01 < fVar11) ||
            (fVar13 = *(float *)(*(int64_t *)(*plVar8 + 0x20) + 0x84), fVar13 <= fVar11)) ||
           (fVar12 <= unaff_XMM7_Da / (fVar13 - fVar11))) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
      }
    }
    uVar7 = 0x4000;
    if ((*(uint *)(plVar8 + 0x413) & 0x200) != 0) {
      uVar7 = unaff_R13D;
    }
    *(uint *)(unaff_RSI + 0x28) = uVar7 | ((bVar9 ^ 1) + 1) * 0x800;
    fVar12 = (float)unaff_RDI[0x38];
    if ((-0.2 <= fVar12) && (fVar12 <= 0.2)) {
      fVar12 = 0.0;
    }
    fVar13 = (float)unaff_RDI[0x39];
    if ((fVar13 < -0.2) || (fVar16 = 0.0, 0.2 < fVar13)) {
      fVar16 = fVar13;
    }
    *(float *)(unaff_RBP + 0x67) = fVar12;
    *(float *)(unaff_RBP + 0x6b) = fVar16;
    *(uint64_t *)(unaff_RSI + 0x30) = *(uint64_t *)(unaff_RBP + 0x67);
  }
  return;
}






// 函数: void FUN_1805e1957(void)
void FUN_1805e1957(void)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R10;
  uint unaff_R14D;
  
  if ((unaff_R14D & 0x10) == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x40);
    fVar2 = *(float *)(unaff_RDI + 0x30);
    *(uint *)(unaff_RDI + 0x28) = unaff_R14D | 0x10;
    *(float *)(unaff_RBP + 0x67) = *(float *)(unaff_RDI + 0x3c) - *(float *)(unaff_RDI + 0x2c);
    *(float *)(unaff_RBP + 0x6b) = fVar1 - fVar2;
    *(uint64_t *)(unaff_RDI + 0xc4) = *(uint64_t *)(unaff_RBP + 0x67);
  }
  uVar3 = *(uint64_t *)(unaff_RDI + 0xc4);
  lVar4 = *(int64_t *)(in_R10 + 0x20);
  *(uint64_t *)(unaff_RBP + 0x7f) = uVar3;
  *(uint64_t *)(unaff_RBP + 0x67) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(lVar4 + 0x34));
}






// 函数: void FUN_1805e1960(void)
void FUN_1805e1960(void)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R10;
  uint unaff_R14D;
  
  if ((unaff_R14D & 0x10) == 0) {
    fVar1 = *(float *)(unaff_RDI + 0x40);
    fVar2 = *(float *)(unaff_RDI + 0x30);
    *(uint *)(unaff_RDI + 0x28) = unaff_R14D | 0x10;
    *(float *)(unaff_RBP + 0x67) = *(float *)(unaff_RDI + 0x3c) - *(float *)(unaff_RDI + 0x2c);
    *(float *)(unaff_RBP + 0x6b) = fVar1 - fVar2;
    *(uint64_t *)(unaff_RDI + 0xc4) = *(uint64_t *)(unaff_RBP + 0x67);
  }
  uVar3 = *(uint64_t *)(unaff_RDI + 0xc4);
  lVar4 = *(int64_t *)(in_R10 + 0x20);
  *(uint64_t *)(unaff_RBP + 0x7f) = uVar3;
  *(uint64_t *)(unaff_RBP + 0x67) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(lVar4 + 0x34));
}






// 函数: void FUN_1805e209b(void)
void FUN_1805e209b(void)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R12D;
  char unaff_R13B;
  uint unaff_R14D;
  int64_t unaff_R15;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM13_Da;
  float fStackX_20;
  uint64_t in_stack_00000028;
  
  *(float *)(unaff_RDI + 0x11b0) = in_XMM4_Da;
  fVar5 = in_XMM4_Da;
  if (in_stack_00000028._4_4_ < unaff_XMM9_Da) {
    fVar5 = -in_XMM4_Da;
    *(float *)(unaff_RDI + 0x11b0) = fVar5;
  }
  uVar1 = *(uint *)(unaff_RDI + 0x18) & 2;
  if (uVar1 == 0) {
    fVar6 = *(float *)(*(int64_t *)(unaff_R15 + 0x20) + 0x8c);
  }
  else {
    fVar6 = *(float *)(*(int64_t *)(unaff_R15 + 0x20) + 0x50);
  }
  fVar6 = fVar6 * *(float *)(unaff_RDI + 0x1c);
  fVar7 = -fVar6;
  if ((-fVar6 <= fVar5) && (fVar7 = fVar6, fVar5 <= fVar6)) {
    fVar7 = fVar5;
  }
  *(float *)(unaff_RDI + 0x11b0) = fVar7;
  fVar7 = in_XMM4_Da - fVar7;
  bVar4 = (byte)unaff_R14D;
  if (uVar1 == 0) {
    fVar5 = unaff_XMM9_Da;
    if (((*(uint *)(unaff_R15 + 0x56c) & 0x400000) == 0) || (unaff_XMM9_Da < in_XMM4_Da)) {
      if ((fVar7 <= 0.25) &&
         ((fVar7 <= unaff_XMM9_Da || (*(int *)(unaff_RDI + 0x14) != unaff_R12D)))) {
        if (unaff_XMM9_Da < in_XMM4_Da) {
          fVar5 = -0.25;
        }
        goto LAB_1805e2178;
      }
      *(uint *)(unaff_RDI + 0x11a8) = *(uint *)(unaff_RDI + 0x11a8) & 0xfffffffe | 2;
      *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 2;
    }
    else {
LAB_1805e2178:
      if (fVar7 < fVar5) {
        *(uint *)(unaff_RDI + 0x11a8) = *(uint *)(unaff_RDI + 0x11a8) & 0xfffffffd | unaff_R14D;
        *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | unaff_R14D;
      }
    }
    if (((unaff_XMM10_Da * unaff_XMM8_Da < ABS(fVar7)) &&
        ((*(byte *)(unaff_R15 + 0x56c) & bVar4) != 0)) &&
       (unaff_R12D <= *(int *)(unaff_R15 + 0x560))) {
      if (fVar7 <= unaff_XMM9_Da) {
        if (unaff_XMM10_Da + unaff_XMM10_Da < fStackX_20) {
          *(uint *)(unaff_RSI + 0x28) = *(uint *)(unaff_RSI + 0x28) | 0x10000;
        }
      }
      else {
        *(uint *)(unaff_RSI + 0x28) = *(uint *)(unaff_RSI + 0x28) | 0x20000;
      }
    }
  }
  else if (fVar7 < -0.25) {
    *(uint *)(unaff_RDI + 0x11a8) = *(uint *)(unaff_RDI + 0x11a8) & 0xfffffffd | unaff_R14D;
    *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | unaff_R14D;
  }
  if ((*(uint *)(unaff_R15 + 0x56c) & 0x400000) != 0) {
    return;
  }
  if ((*(byte *)(unaff_RDI + 0x18) & 2) != 0) {
    return;
  }
  if ((char)*(uint *)(unaff_RDI + 0x28) < '\0') {
    cVar2 = *(char *)(unaff_RDI + 0xd0);
  }
  else {
    fVar5 = *(float *)(unaff_RDI + 0x3c) - *(float *)(unaff_RDI + 0x60);
    fVar6 = *(float *)(unaff_RDI + 0x40) - *(float *)(unaff_RDI + 100);
    cVar2 = fVar5 * fVar5 + fVar6 * fVar6 < 0.001;
    *(uint *)(unaff_RDI + 0x28) = *(uint *)(unaff_RDI + 0x28) | 0x80;
    *(char *)(unaff_RDI + 0xd0) = cVar2;
  }
  if (cVar2 == '\0') {
    if (unaff_R13B == '\0') {
      return;
    }
    if (*(int *)(unaff_RDI + 0x11ac) != unaff_R12D) {
      return;
    }
  }
  if (0.2 <= in_XMM5_Da) {
    return;
  }
  uVar1 = *(uint *)(unaff_RDI + 0x11a8);
  bVar3 = (byte)(uVar1 >> 5) & bVar4;
  bVar4 = (byte)(uVar1 >> 4) & bVar4;
  if (bVar4 == 0) {
    if (bVar3 != 0) {
      if (unaff_XMM13_Da < *(float *)(unaff_RDI + 0x90) ||
          unaff_XMM13_Da == *(float *)(unaff_RDI + 0x90)) goto LAB_1805e22a8;
LAB_1805e22fe:
      *(uint *)(unaff_RDI + 0x11a8) = uVar1 | 0x20;
      *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 4;
      return;
    }
    fVar5 = *(float *)(unaff_RBP + 0x77);
    if (fVar5 < unaff_XMM13_Da) goto LAB_1805e22fe;
  }
  else {
    if (bVar3 != 0) goto LAB_1805e22a8;
    if (bVar4 != 0) {
      if (-unaff_XMM13_Da < *(float *)(unaff_RDI + 0x90) ||
          -unaff_XMM13_Da == *(float *)(unaff_RDI + 0x90)) goto LAB_1805e22a8;
      goto LAB_1805e2338;
    }
    fVar5 = *(float *)(unaff_RBP + 0x77);
  }
  if (fVar5 < -unaff_XMM13_Da) {
LAB_1805e2338:
    *(uint *)(unaff_RDI + 0x11a8) = uVar1 | 0x10;
    *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 8;
    return;
  }
LAB_1805e22a8:
  *(uint *)(unaff_RDI + 0x11a8) = uVar1 & 0xffffffcf;
  return;
}






// 函数: void FUN_1805e2216(void)
void FUN_1805e2216(void)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R12D;
  char unaff_R13B;
  byte unaff_R14B;
  float fVar5;
  float fVar6;
  float in_XMM5_Da;
  uint unaff_XMM6_Da;
  float unaff_XMM13_Da;
  
  if ((*(byte *)(unaff_RDI + 0x18) & 2) != 0) {
    return;
  }
  if ((char)*(uint *)(unaff_RDI + 0x28) < '\0') {
    cVar2 = *(char *)(unaff_RDI + 0xd0);
  }
  else {
    fVar5 = *(float *)(unaff_RDI + 0x3c) - *(float *)(unaff_RDI + 0x60);
    fVar6 = *(float *)(unaff_RDI + 0x40) - *(float *)(unaff_RDI + 100);
    cVar2 = fVar5 * fVar5 + fVar6 * fVar6 < 0.001;
    *(uint *)(unaff_RDI + 0x28) = *(uint *)(unaff_RDI + 0x28) | 0x80;
    *(char *)(unaff_RDI + 0xd0) = cVar2;
  }
  if (cVar2 == '\0') {
    if (unaff_R13B == '\0') {
      return;
    }
    if (*(int *)(unaff_RDI + 0x11ac) != unaff_R12D) {
      return;
    }
  }
  if (0.2 <= in_XMM5_Da) {
    return;
  }
  uVar1 = *(uint *)(unaff_RDI + 0x11a8);
  bVar3 = (byte)(uVar1 >> 5) & unaff_R14B;
  bVar4 = (byte)(uVar1 >> 4) & unaff_R14B;
  if (bVar4 == 0) {
    if (bVar3 != 0) {
      if (unaff_XMM13_Da < *(float *)(unaff_RDI + 0x90) ||
          unaff_XMM13_Da == *(float *)(unaff_RDI + 0x90)) goto LAB_1805e22a8;
LAB_1805e22fe:
      *(uint *)(unaff_RDI + 0x11a8) = uVar1 | 0x20;
      *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 4;
      return;
    }
    fVar5 = *(float *)(unaff_RBP + 0x77);
    if (fVar5 < unaff_XMM13_Da) goto LAB_1805e22fe;
  }
  else {
    if (bVar3 != 0) goto LAB_1805e22a8;
    if (bVar4 != 0) {
      if ((float)((uint)unaff_XMM13_Da ^ unaff_XMM6_Da) < *(float *)(unaff_RDI + 0x90) ||
          (float)((uint)unaff_XMM13_Da ^ unaff_XMM6_Da) == *(float *)(unaff_RDI + 0x90))
      goto LAB_1805e22a8;
      goto LAB_1805e2338;
    }
    fVar5 = *(float *)(unaff_RBP + 0x77);
  }
  if (fVar5 < (float)((uint)unaff_XMM13_Da ^ unaff_XMM6_Da)) {
LAB_1805e2338:
    *(uint *)(unaff_RDI + 0x11a8) = uVar1 | 0x10;
    *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 8;
    return;
  }
LAB_1805e22a8:
  *(uint *)(unaff_RDI + 0x11a8) = uVar1 & 0xffffffcf;
  return;
}






// 函数: void FUN_1805e22b7(void)
void FUN_1805e22b7(void)

{
  return;
}






// 函数: void FUN_1805e22f3(void)
void FUN_1805e22f3(void)

{
  uint in_EAX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint unaff_XMM6_Da;
  float unaff_XMM13_Da;
  
  if (unaff_XMM13_Da <= *(float *)(unaff_RBP + 0x77)) {
    if ((float)((uint)unaff_XMM13_Da ^ unaff_XMM6_Da) <= *(float *)(unaff_RBP + 0x77)) {
      *(uint *)(unaff_RDI + 0x11a8) = in_EAX & 0xffffffcf;
    }
    else {
      *(uint *)(unaff_RDI + 0x11a8) = in_EAX | 0x10;
      *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 8;
    }
  }
  else {
    *(uint *)(unaff_RDI + 0x11a8) = in_EAX | 0x20;
    *(uint *)(unaff_RSI + 0x2c) = *(uint *)(unaff_RSI + 0x2c) | 4;
  }
  return;
}



uint64_t FUN_1805e2350(int64_t param_1,float param_2,float param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t lVar5;
  float fVar6;
  
  plVar1 = *(int64_t **)(param_1 + 0x20);
  lVar2 = *plVar1;
  if (*(int *)(param_1 + 0x1164) < 0) {
    return 0;
  }
  lVar3 = lVar2;
  if (((*(uint *)(lVar2 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar2 + 0x564))) {
    lVar5 = (int64_t)*(int *)(lVar2 + 0x564) * 0xa60;
    if (*(int *)(lVar5 + 0x3608 + *(int64_t *)(lVar2 + 0x8d8)) == 1) {
      lVar3 = *(int64_t *)(lVar2 + 0x8d8) + 0x30a0 + lVar5;
    }
  }
  lVar3 = *(int64_t *)(lVar3 + 0x20);
  if (((((*(byte *)(param_1 + 0x18) & 2) == 0) && (param_3 <= param_2 + *(float *)(param_1 + 0x90)))
      && ((int)plVar1[0x295] == 1)) && (*(char *)(param_1 + 0x1144) == '\0')) {
    pcVar4 = (char *)FUN_1805b73f0(plVar1 + 1);
    if (*pcVar4 == '\0') {
      fVar6 = ABS(*(float *)(lVar3 + 0x1e8));
      if (ABS(*(float *)(lVar3 + 0x1e8)) <= ABS(*(float *)(lVar3 + 0x1d8))) {
        fVar6 = ABS(*(float *)(lVar3 + 0x1d8));
      }
      if ((fVar6 + *(float *)(lVar3 + 0x1d0)) * *(float *)(*(int64_t *)(lVar2 + 0x6d8) + 0x8c0) *
          1.2 <= param_3) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



uint64_t FUN_1805e237c(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  char *pcVar2;
  int64_t unaff_RBX;
  int64_t lVar3;
  bool in_ZF;
  float in_XMM1_Da;
  float fVar4;
  float unaff_XMM6_Da;
  
  lVar1 = unaff_RBX;
  if ((!in_ZF) && (-1 < *(int *)(unaff_RBX + 0x564))) {
    lVar3 = (int64_t)*(int *)(unaff_RBX + 0x564) * 0xa60;
    if (*(int *)(lVar3 + 0x3608 + *(int64_t *)(unaff_RBX + 0x8d8)) == 1) {
      lVar1 = *(int64_t *)(unaff_RBX + 0x8d8) + 0x30a0 + lVar3;
    }
  }
  lVar1 = *(int64_t *)(lVar1 + 0x20);
  if (((((*(byte *)(param_1 + 0x18) & 2) == 0) &&
       (unaff_XMM6_Da <= in_XMM1_Da + *(float *)(param_1 + 0x90))) &&
      (*(int *)(param_2 + 0x14a8) == 1)) && (*(char *)(param_1 + 0x1144) == '\0')) {
    pcVar2 = (char *)FUN_1805b73f0(param_2 + 8);
    if (*pcVar2 == '\0') {
      fVar4 = ABS(*(float *)(lVar1 + 0x1e8));
      if (ABS(*(float *)(lVar1 + 0x1e8)) <= ABS(*(float *)(lVar1 + 0x1d8))) {
        fVar4 = ABS(*(float *)(lVar1 + 0x1d8));
      }
      if ((fVar4 + *(float *)(lVar1 + 0x1d0)) * *(float *)(*(int64_t *)(unaff_RBX + 0x6d8) + 0x8c0)
          * 1.2 <= unaff_XMM6_Da) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



int8_t FUN_1805e2448(void)

{
  return 0;
}



int8_t FUN_1805e245a(void)

{
  return 0;
}



uint64_t FUN_1805e2470(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x20);
  if ((*(uint *)(lVar1 + 0x10) & 0x200) == 0) {
    func_0x0001805d4cd0(lVar1 + 8);
  }
  if (*(int64_t *)(lVar1 + 0xe8) != 0) {
    lVar1 = *(int64_t *)(param_1 + 0x20);
    if ((*(uint *)(lVar1 + 0x10) & 0x200) == 0) {
      func_0x0001805d4cd0(lVar1 + 8);
    }
    lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0xe8) + 0x6d8);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != '\0')) {
      lVar1 = *(int64_t *)(param_1 + 0x20);
      if ((*(uint *)(lVar1 + 0x10) & 0x20) == 0) {
        *(uint64_t *)(lVar1 + 0xa8) =
             *(uint64_t *)(*(int64_t *)(**(int64_t **)(lVar1 + 8) + 0x8f8) + 0x9e8);
        *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 0x20;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(int32_t *)(*(int64_t *)(param_2 + 0x20) + 0x34));
    }
  }
  return 0;
}






