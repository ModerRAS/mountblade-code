#include "TaleWorlds.Native.Split.h"

// 99_part_09_part046.c - 10 个函数

// 函数: void FUN_1805d1e40(int64_t param_1,int64_t param_2,uint *param_3,uint *param_4)
void FUN_1805d1e40(int64_t param_1,int64_t param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int64_t in_R10;
  uint uVar16;
  int iVar17;
  int64_t *unaff_R15;
  uint64_t extraout_XMM0_Qa;
  int8_t auVar19 [16];
  int32_t uVar20;
  float in_XMM5_Da;
  float fVar21;
  float fVar22;
  int8_t auVar18 [16];
  
  uVar10 = *param_4;
  fVar21 = in_XMM5_Da - *(float *)(*(int64_t *)(in_R10 + 0x20) + 0xc);
  fVar22 = *(float *)(param_2 + 4) - *(float *)(*(int64_t *)(in_R10 + 0x20) + 0x10);
  if (*(float *)(in_R10 + 0x7e0) * *(float *)(in_R10 + 0x7e0) * 6.25 <=
      fVar22 * fVar22 + fVar21 * fVar21) {
    uVar8 = uVar10;
    if (-1 < (int)uVar10) {
      *param_3 = *param_3 & ~(1 << (uVar10 & 0x1f));
      uVar8 = 0xffffffff;
      *param_4 = 0xffffffff;
    }
    goto LAB_1805d2251;
  }
  if ((int)uVar10 < 0) {
    fVar21 = (float)atan2f();
    if (fVar21 < 0.0) {
      fVar21 = fVar21 + 6.2831855;
    }
    uVar6 = *param_3;
    uVar16 = (uint)(fVar21 * 5.092958);
    uVar8 = uVar16;
    if ((1 << ((byte)uVar16 & 0x1f) & uVar6) != 0) {
      iVar5 = 0;
      do {
        uVar8 = iVar5 + uVar16 & 0x1f;
        uVar13 = uVar6 & 1 << (sbyte)uVar8;
        if (uVar13 == 0) break;
        iVar5 = (uint)(iVar5 < 1) - iVar5;
      } while (iVar5 != -0x10);
      if (uVar13 != 0) {
        uVar8 = uVar16;
      }
    }
    *param_3 = uVar6 | 1 << (uVar8 & 0x1f);
    *param_4 = uVar8;
    goto LAB_1805d2251;
  }
  uVar11 = (uint64_t)*(uint *)(param_1 + 0x1484);
  if (((*(uint *)(param_1 + 0x1484) & 0x40) == 0) &&
     (puVar12 = param_4, cVar4 = func_0x0001805d1da0(), cVar4 != '\0')) {
    lVar7 = func_0x0001805d1df0();
    if (*(int *)(lVar7 + 0x678) == 0) {
      if ((uVar11 & 0x38) == 0) {
        *puVar12 = 0xfffffffe;
        uVar8 = *param_4;
        goto LAB_1805d2251;
      }
      bVar1 = true;
      iVar14 = 0;
      iVar17 = 0;
      bVar3 = true;
      iVar5 = 1;
      do {
        uVar8 = uVar10 + iVar5 & 0x1f;
        if (iVar5 < 0) {
          if (bVar1) {
            if ((*param_3 >> uVar8 & 1) == 0) {
              iVar14 = iVar14 + 1;
            }
            else {
              bVar1 = false;
            }
          }
        }
        else if (bVar3) {
          if ((*param_3 >> uVar8 & 1) == 0) {
            iVar17 = iVar17 + 1;
          }
          else {
            bVar3 = false;
          }
        }
        iVar5 = (uint)(iVar5 < 1) - iVar5;
      } while (iVar5 != -8);
      uVar8 = iVar14 - iVar17 >> 0x1f;
      if (1 < (int)((iVar14 - iVar17 ^ uVar8) - uVar8)) {
        *param_3 = *param_3 & ~(1 << (uVar10 & 0x1f));
        uVar8 = *param_4;
        iVar5 = iVar17 + iVar14 >> 1;
        if (3 < iVar5) {
          iVar5 = 3;
        }
        iVar2 = -iVar5;
        if (iVar14 <= iVar17) {
          iVar2 = iVar5;
        }
        *param_4 = uVar8 + iVar2;
        *param_3 = *param_3 | 1 << (uVar8 + iVar2 & 0x1f);
        uVar8 = *param_4;
        goto LAB_1805d2251;
      }
    }
    else {
      lVar7 = func_0x0001805d1df0();
      iVar17 = 0x20;
      uVar11 = (uint64_t)(0x20 - *(int *)(lVar7 + 0x678));
      lVar7 = func_0x0001805d1df0();
      uVar11 = (uint64_t)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff;
      uVar8 = 1;
      iVar14 = (int)((int64_t)uVar11 / (int64_t)*(int *)(lVar7 + 0x678));
      iVar5 = 1;
      if (iVar14 < 1) {
        iVar5 = iVar14;
      }
      lVar7 = func_0x0001805d1df0(extraout_XMM0_Qa,
                                  (int64_t)uVar11 % (int64_t)*(int *)(lVar7 + 0x678) & 0xffffffff)
      ;
      uVar11 = (uint64_t)(uint)(float)(iVar17 - *(int *)(lVar7 + 0x678));
      lVar7 = func_0x0001805d1df0();
      fVar22 = (float)uVar11 / (float)*(int *)(lVar7 + 0x678);
      uVar20 = (int32_t)(uVar11 >> 0x20);
      auVar19._4_4_ = uVar20;
      auVar19._0_4_ = fVar22;
      iVar14 = (int)fVar22;
      fVar21 = fVar22;
      if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar22)) {
        auVar19._8_4_ = uVar20;
        auVar19._12_4_ = uVar20;
        auVar18._8_8_ = auVar19._8_8_;
        auVar18._4_4_ = fVar22;
        auVar18._0_4_ = fVar22;
        uVar6 = movmskps((int)lVar7,auVar18);
        fVar21 = (float)(int)(iVar14 + (uVar6 & uVar8 ^ uVar8));
      }
      if (fVar22 <= 0.0) {
        fVar21 = fVar21 - 1e-08;
      }
      else {
        fVar21 = fVar21 + 1e-08;
      }
      iVar14 = 4;
      if ((int)fVar21 < 4) {
        iVar14 = (int)fVar21;
      }
      if (0 < iVar14) {
        uVar6 = iVar14 + 1;
        uVar13 = 0;
        uVar16 = uVar6;
        if (0 < (int)uVar6) {
          uVar15 = uVar10 + 0x1f;
          uVar9 = uVar13;
          do {
            uVar16 = uVar9;
            if ((*param_3 >> (uVar15 & 0x1f) & 1) != 0) break;
            uVar9 = uVar9 + 1;
            uVar15 = uVar15 - 1;
            uVar16 = uVar6;
          } while ((int)uVar9 < (int)uVar6);
        }
        uVar15 = uVar6;
        if (0 < (int)uVar6) {
          uVar9 = uVar13;
          do {
            uVar15 = uVar9;
            if ((*param_3 >> (uVar10 + 0x21 + uVar9 & 0x1f) & 1) != 0) break;
            uVar9 = uVar9 + 1;
            uVar15 = uVar6;
          } while ((int)uVar9 < (int)uVar6);
        }
        if (((int)uVar16 < iVar5) || (iVar14 < (int)uVar15)) {
          uVar13 = uVar8;
        }
        if (((int)uVar15 < iVar5) || (iVar14 < (int)uVar16)) {
          uVar13 = uVar13 - 1;
        }
        if (uVar13 == 0) {
          fVar21 = (float)atan2f();
          if (fVar21 < 0.0) {
            fVar21 = fVar21 + 6.2831855;
          }
          uVar8 = (uint)(fVar21 * 5.092958);
          if ((*param_3 >> (uVar8 & 0x1f) & 1) != 0) goto FUN_1805d2230;
          *param_3 = *param_3 & ~(1 << (uVar10 & 0x1f));
        }
        else {
          *param_3 = *param_3 & ~(1 << (uVar10 & 0x1f));
          uVar8 = *param_4 + 0x21 + ((int)uVar13 >> 0x1f & 0xfffffffeU) & 0x8000001f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
          }
        }
        *param_4 = uVar8;
        *param_3 = *param_3 | 1 << (uVar8 & 0x1f);
      }
    }
  }
FUN_1805d2230:
  uVar8 = *param_4;
LAB_1805d2251:
  if ((uVar10 != uVar8) && (-1 < (int)uVar8)) {
    uVar10 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar10 = uVar10 >> 0x11 ^ uVar10;
    uVar10 = uVar10 << 5 ^ uVar10;
    *(uint *)(unaff_R15 + 0x272) = uVar10;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar10 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d1ea0(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_1805d1ea0(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *unaff_RBX;
  uint unaff_ESI;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *unaff_R14;
  int64_t *unaff_R15;
  float fVar16;
  uint64_t extraout_XMM0_Qa;
  int8_t auVar18 [16];
  float fVar19;
  int32_t uVar20;
  int8_t auVar17 [16];
  
  if ((int)unaff_ESI < 0) {
    fVar16 = (float)atan2f();
    if (fVar16 < 0.0) {
      fVar16 = fVar16 + 6.2831855;
    }
    uVar9 = *unaff_RBX;
    uVar14 = (uint)(fVar16 * 5.092958);
    uVar7 = uVar14;
    if ((1 << ((byte)uVar14 & 0x1f) & uVar9) != 0) {
      iVar5 = 0;
      do {
        uVar7 = iVar5 + uVar14 & 0x1f;
        uVar11 = uVar9 & 1 << (sbyte)uVar7;
        if (uVar11 == 0) break;
        iVar5 = (uint)(iVar5 < 1) - iVar5;
      } while (iVar5 != -0x10);
      if (uVar11 != 0) {
        uVar7 = uVar14;
      }
    }
    *unaff_RBX = uVar9 | 1 << (uVar7 & 0x1f);
    *unaff_R14 = uVar7;
    goto LAB_1805d2251;
  }
  uVar10 = (uint64_t)*(uint *)(param_1 + 0x1484);
  if (((*(uint *)(param_1 + 0x1484) & 0x40) == 0) && (cVar4 = func_0x0001805d1da0(), cVar4 != '\0'))
  {
    lVar6 = func_0x0001805d1df0();
    if (*(int *)(lVar6 + 0x678) == 0) {
      if ((uVar10 & 0x38) == 0) {
        *param_4 = 0xfffffffe;
        uVar7 = *unaff_R14;
        goto LAB_1805d2251;
      }
      bVar1 = true;
      iVar12 = 0;
      iVar15 = 0;
      bVar3 = true;
      iVar5 = 1;
      do {
        uVar9 = unaff_ESI + iVar5 & 0x1f;
        if (iVar5 < 0) {
          if (bVar1) {
            if ((*unaff_RBX >> uVar9 & 1) == 0) {
              iVar12 = iVar12 + 1;
            }
            else {
              bVar1 = false;
            }
          }
        }
        else if (bVar3) {
          if ((*unaff_RBX >> uVar9 & 1) == 0) {
            iVar15 = iVar15 + 1;
          }
          else {
            bVar3 = false;
          }
        }
        iVar5 = (uint)(iVar5 < 1) - iVar5;
      } while (iVar5 != -8);
      uVar9 = iVar12 - iVar15 >> 0x1f;
      if (1 < (int)((iVar12 - iVar15 ^ uVar9) - uVar9)) {
        *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
        uVar9 = *unaff_R14;
        iVar5 = iVar15 + iVar12 >> 1;
        if (3 < iVar5) {
          iVar5 = 3;
        }
        iVar2 = -iVar5;
        if (iVar12 <= iVar15) {
          iVar2 = iVar5;
        }
        *unaff_R14 = uVar9 + iVar2;
        *unaff_RBX = *unaff_RBX | 1 << (uVar9 + iVar2 & 0x1f);
        uVar7 = *unaff_R14;
        goto LAB_1805d2251;
      }
    }
    else {
      lVar6 = func_0x0001805d1df0();
      iVar15 = 0x20;
      uVar10 = (uint64_t)(0x20 - *(int *)(lVar6 + 0x678));
      lVar6 = func_0x0001805d1df0();
      uVar10 = (uint64_t)(uint)((int)uVar10 >> 0x1f) << 0x20 | uVar10 & 0xffffffff;
      uVar9 = 1;
      iVar12 = (int)((int64_t)uVar10 / (int64_t)*(int *)(lVar6 + 0x678));
      iVar5 = 1;
      if (iVar12 < 1) {
        iVar5 = iVar12;
      }
      lVar6 = func_0x0001805d1df0(extraout_XMM0_Qa,
                                  (int64_t)uVar10 % (int64_t)*(int *)(lVar6 + 0x678) & 0xffffffff)
      ;
      uVar10 = (uint64_t)(uint)(float)(iVar15 - *(int *)(lVar6 + 0x678));
      lVar6 = func_0x0001805d1df0();
      fVar19 = (float)uVar10 / (float)*(int *)(lVar6 + 0x678);
      uVar20 = (int32_t)(uVar10 >> 0x20);
      auVar18._4_4_ = uVar20;
      auVar18._0_4_ = fVar19;
      iVar12 = (int)fVar19;
      fVar16 = fVar19;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar19)) {
        auVar18._8_4_ = uVar20;
        auVar18._12_4_ = uVar20;
        auVar17._8_8_ = auVar18._8_8_;
        auVar17._4_4_ = fVar19;
        auVar17._0_4_ = fVar19;
        uVar7 = movmskps((int)lVar6,auVar17);
        fVar16 = (float)(int)(iVar12 + (uVar7 & uVar9 ^ uVar9));
      }
      if (fVar19 <= 0.0) {
        fVar16 = fVar16 - 1e-08;
      }
      else {
        fVar16 = fVar16 + 1e-08;
      }
      iVar12 = 4;
      if ((int)fVar16 < 4) {
        iVar12 = (int)fVar16;
      }
      if (0 < iVar12) {
        uVar7 = iVar12 + 1;
        uVar11 = 0;
        uVar14 = uVar7;
        if (0 < (int)uVar7) {
          uVar13 = unaff_ESI + 0x1f;
          uVar8 = uVar11;
          do {
            uVar14 = uVar8;
            if ((*unaff_RBX >> (uVar13 & 0x1f) & 1) != 0) break;
            uVar8 = uVar8 + 1;
            uVar13 = uVar13 - 1;
            uVar14 = uVar7;
          } while ((int)uVar8 < (int)uVar7);
        }
        uVar13 = uVar7;
        if (0 < (int)uVar7) {
          uVar8 = uVar11;
          do {
            uVar13 = uVar8;
            if ((*unaff_RBX >> (unaff_ESI + 0x21 + uVar8 & 0x1f) & 1) != 0) break;
            uVar8 = uVar8 + 1;
            uVar13 = uVar7;
          } while ((int)uVar8 < (int)uVar7);
        }
        if (((int)uVar14 < iVar5) || (iVar12 < (int)uVar13)) {
          uVar11 = uVar9;
        }
        if (((int)uVar13 < iVar5) || (iVar12 < (int)uVar14)) {
          uVar11 = uVar11 - 1;
        }
        if (uVar11 == 0) {
          fVar16 = (float)atan2f();
          if (fVar16 < 0.0) {
            fVar16 = fVar16 + 6.2831855;
          }
          uVar9 = (uint)(fVar16 * 5.092958);
          if ((*unaff_RBX >> (uVar9 & 0x1f) & 1) != 0) goto FUN_1805d2230;
          *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
        }
        else {
          *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
          uVar9 = *unaff_R14 + 0x21 + ((int)uVar11 >> 0x1f & 0xfffffffeU) & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
        }
        *unaff_R14 = uVar9;
        *unaff_RBX = *unaff_RBX | 1 << (uVar9 & 0x1f);
      }
    }
  }
FUN_1805d2230:
  uVar7 = *unaff_R14;
LAB_1805d2251:
  if ((unaff_ESI != uVar7) && (-1 < (int)uVar7)) {
    uVar9 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar9 = uVar9 >> 0x11 ^ uVar9;
    uVar9 = uVar9 << 5 ^ uVar9;
    *(uint *)(unaff_R15 + 0x272) = uVar9;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar9 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d1f45(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_1805d1f45(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  uint *unaff_RBX;
  uint uVar10;
  uint unaff_ESI;
  uint64_t uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *unaff_R14;
  int64_t *unaff_R15;
  uint64_t extraout_XMM0_Qa;
  float fVar16;
  int8_t auVar18 [16];
  float fVar19;
  int32_t uVar20;
  int8_t auVar17 [16];
  
  uVar11 = (uint64_t)*(uint *)(param_1 + 0x1484);
  if (((*(uint *)(param_1 + 0x1484) & 0x40) == 0) && (cVar4 = func_0x0001805d1da0(), cVar4 != '\0'))
  {
    lVar7 = func_0x0001805d1df0();
    if (*(int *)(lVar7 + 0x678) == 0) {
      if ((uVar11 & 0x38) == 0) {
        *param_4 = 0xfffffffe;
        uVar8 = *unaff_R14;
        goto LAB_1805d2251;
      }
      bVar1 = true;
      iVar13 = 0;
      iVar15 = 0;
      bVar3 = true;
      iVar5 = 1;
      do {
        uVar8 = unaff_ESI + iVar5 & 0x1f;
        if (iVar5 < 0) {
          if (bVar1) {
            if ((*unaff_RBX >> uVar8 & 1) == 0) {
              iVar13 = iVar13 + 1;
            }
            else {
              bVar1 = false;
            }
          }
        }
        else if (bVar3) {
          if ((*unaff_RBX >> uVar8 & 1) == 0) {
            iVar15 = iVar15 + 1;
          }
          else {
            bVar3 = false;
          }
        }
        iVar5 = (uint)(iVar5 < 1) - iVar5;
      } while (iVar5 != -8);
      uVar8 = iVar13 - iVar15 >> 0x1f;
      if (1 < (int)((iVar13 - iVar15 ^ uVar8) - uVar8)) {
        *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
        uVar8 = *unaff_R14;
        iVar5 = iVar15 + iVar13 >> 1;
        if (3 < iVar5) {
          iVar5 = 3;
        }
        iVar2 = -iVar5;
        if (iVar13 <= iVar15) {
          iVar2 = iVar5;
        }
        *unaff_R14 = uVar8 + iVar2;
        *unaff_RBX = *unaff_RBX | 1 << (uVar8 + iVar2 & 0x1f);
        uVar8 = *unaff_R14;
        goto LAB_1805d2251;
      }
    }
    else {
      lVar7 = func_0x0001805d1df0();
      iVar15 = 0x20;
      uVar11 = (uint64_t)(0x20 - *(int *)(lVar7 + 0x678));
      lVar7 = func_0x0001805d1df0();
      uVar11 = (uint64_t)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff;
      uVar8 = 1;
      iVar13 = (int)((int64_t)uVar11 / (int64_t)*(int *)(lVar7 + 0x678));
      iVar5 = 1;
      if (iVar13 < 1) {
        iVar5 = iVar13;
      }
      lVar7 = func_0x0001805d1df0(extraout_XMM0_Qa,
                                  (int64_t)uVar11 % (int64_t)*(int *)(lVar7 + 0x678) & 0xffffffff)
      ;
      uVar11 = (uint64_t)(uint)(float)(iVar15 - *(int *)(lVar7 + 0x678));
      lVar7 = func_0x0001805d1df0();
      fVar19 = (float)uVar11 / (float)*(int *)(lVar7 + 0x678);
      uVar20 = (int32_t)(uVar11 >> 0x20);
      auVar18._4_4_ = uVar20;
      auVar18._0_4_ = fVar19;
      iVar13 = (int)fVar19;
      fVar16 = fVar19;
      if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar19)) {
        auVar18._8_4_ = uVar20;
        auVar18._12_4_ = uVar20;
        auVar17._8_8_ = auVar18._8_8_;
        auVar17._4_4_ = fVar19;
        auVar17._0_4_ = fVar19;
        uVar6 = movmskps((int)lVar7,auVar17);
        fVar16 = (float)(int)(iVar13 + (uVar6 & uVar8 ^ uVar8));
      }
      if (fVar19 <= 0.0) {
        fVar16 = fVar16 - 1e-08;
      }
      else {
        fVar16 = fVar16 + 1e-08;
      }
      iVar13 = 4;
      if ((int)fVar16 < 4) {
        iVar13 = (int)fVar16;
      }
      if (0 < iVar13) {
        uVar6 = iVar13 + 1;
        uVar12 = 0;
        uVar10 = uVar6;
        if (0 < (int)uVar6) {
          uVar14 = unaff_ESI + 0x1f;
          uVar9 = uVar12;
          do {
            uVar10 = uVar9;
            if ((*unaff_RBX >> (uVar14 & 0x1f) & 1) != 0) break;
            uVar9 = uVar9 + 1;
            uVar14 = uVar14 - 1;
            uVar10 = uVar6;
          } while ((int)uVar9 < (int)uVar6);
        }
        uVar14 = uVar6;
        if (0 < (int)uVar6) {
          uVar9 = uVar12;
          do {
            uVar14 = uVar9;
            if ((*unaff_RBX >> (unaff_ESI + 0x21 + uVar9 & 0x1f) & 1) != 0) break;
            uVar9 = uVar9 + 1;
            uVar14 = uVar6;
          } while ((int)uVar9 < (int)uVar6);
        }
        if (((int)uVar10 < iVar5) || (iVar13 < (int)uVar14)) {
          uVar12 = uVar8;
        }
        if (((int)uVar14 < iVar5) || (iVar13 < (int)uVar10)) {
          uVar12 = uVar12 - 1;
        }
        if (uVar12 == 0) {
          fVar16 = (float)atan2f();
          if (fVar16 < 0.0) {
            fVar16 = fVar16 + 6.2831855;
          }
          uVar8 = (uint)(fVar16 * 5.092958);
          if ((*unaff_RBX >> (uVar8 & 0x1f) & 1) != 0) goto FUN_1805d2230;
          *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
        }
        else {
          *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
          uVar8 = *unaff_R14 + 0x21 + ((int)uVar12 >> 0x1f & 0xfffffffeU) & 0x8000001f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
          }
        }
        *unaff_R14 = uVar8;
        *unaff_RBX = *unaff_RBX | 1 << (uVar8 & 0x1f);
      }
    }
  }
FUN_1805d2230:
  uVar8 = *unaff_R14;
LAB_1805d2251:
  if ((unaff_ESI != uVar8) && (-1 < (int)uVar8)) {
    uVar8 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    *(uint *)(unaff_R15 + 0x272) = uVar8;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar8 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d2038(void)
void FUN_1805d2038(void)

{
  uint uVar1;
  int unaff_ESI;
  int32_t *in_R9;
  int *unaff_R14;
  int64_t *unaff_R15;
  
  *in_R9 = 0xfffffffe;
  if ((unaff_ESI != *unaff_R14) && (-1 < *unaff_R14)) {
    uVar1 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    uVar1 = uVar1 << 5 ^ uVar1;
    *(uint *)(unaff_R15 + 0x272) = uVar1;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar1 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d204c(void)
void FUN_1805d204c(void)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *unaff_RBX;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  uint64_t uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *unaff_R14;
  int64_t *unaff_R15;
  uint64_t extraout_XMM0_Qa;
  float fVar12;
  int8_t auVar14 [16];
  float fVar15;
  int32_t uVar16;
  int8_t auVar13 [16];
  
  lVar2 = func_0x0001805d1df0();
  iVar9 = 0x20;
  uVar8 = (uint64_t)(0x20 - *(int *)(lVar2 + 0x678));
  lVar2 = func_0x0001805d1df0();
  uVar8 = (uint64_t)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff;
  uVar5 = 1;
  iVar3 = (int)((int64_t)uVar8 / (int64_t)*(int *)(lVar2 + 0x678));
  iVar11 = 1;
  if (iVar3 < 1) {
    iVar11 = iVar3;
  }
  lVar2 = func_0x0001805d1df0(extraout_XMM0_Qa,
                              (int64_t)uVar8 % (int64_t)*(int *)(lVar2 + 0x678) & 0xffffffff);
  uVar8 = (uint64_t)(uint)(float)(iVar9 - *(int *)(lVar2 + 0x678));
  lVar2 = func_0x0001805d1df0();
  fVar15 = (float)uVar8 / (float)*(int *)(lVar2 + 0x678);
  uVar16 = (int32_t)(uVar8 >> 0x20);
  auVar14._4_4_ = uVar16;
  auVar14._0_4_ = fVar15;
  iVar3 = (int)fVar15;
  fVar12 = fVar15;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar15)) {
    auVar14._8_4_ = uVar16;
    auVar14._12_4_ = uVar16;
    auVar13._8_8_ = auVar14._8_8_;
    auVar13._4_4_ = fVar15;
    auVar13._0_4_ = fVar15;
    uVar1 = movmskps((int)lVar2,auVar13);
    fVar12 = (float)(int)(iVar3 + (uVar1 & uVar5 ^ uVar5));
  }
  if (fVar15 <= 0.0) {
    fVar12 = fVar12 - 1e-08;
  }
  else {
    fVar12 = fVar12 + 1e-08;
  }
  iVar3 = 4;
  if ((int)fVar12 < 4) {
    iVar3 = (int)fVar12;
  }
  if (0 < iVar3) {
    uVar1 = iVar3 + 1;
    uVar7 = 0;
    uVar6 = uVar1;
    if (0 < (int)uVar1) {
      uVar10 = unaff_ESI + 0x1f;
      uVar4 = uVar7;
      do {
        uVar6 = uVar4;
        if ((*unaff_RBX >> (uVar10 & 0x1f) & 1) != 0) break;
        uVar4 = uVar4 + 1;
        uVar10 = uVar10 - 1;
        uVar6 = uVar1;
      } while ((int)uVar4 < (int)uVar1);
    }
    uVar4 = uVar1;
    if (0 < (int)uVar1) {
      uVar10 = uVar7;
      do {
        uVar4 = uVar10;
        if ((*unaff_RBX >> (unaff_ESI + 0x21 + uVar10 & 0x1f) & 1) != 0) break;
        uVar10 = uVar10 + 1;
        uVar4 = uVar1;
      } while ((int)uVar10 < (int)uVar1);
    }
    if (((int)uVar6 < iVar11) || (iVar3 < (int)uVar4)) {
      uVar7 = uVar5;
    }
    if (((int)uVar4 < iVar11) || (iVar3 < (int)uVar6)) {
      uVar7 = uVar7 - 1;
    }
    if (uVar7 == 0) {
      fVar12 = (float)atan2f();
      if (fVar12 < 0.0) {
        fVar12 = fVar12 + 6.2831855;
      }
      uVar5 = (uint)(fVar12 * 5.092958);
      if ((*unaff_RBX >> (uVar5 & 0x1f) & 1) != 0) goto LAB_1805d2226;
      *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
    }
    else {
      *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
      uVar5 = *unaff_R14 + 0x21 + ((int)uVar7 >> 0x1f & 0xfffffffeU) & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
    }
    *unaff_R14 = uVar5;
    *unaff_RBX = *unaff_RBX | 1 << (uVar5 & 0x1f);
  }
LAB_1805d2226:
  if ((unaff_ESI != *unaff_R14) && (-1 < (int)*unaff_R14)) {
    uVar5 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    uVar5 = uVar5 << 5 ^ uVar5;
    *(uint *)(unaff_R15 + 0x272) = uVar5;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar5 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d212a(uint64_t param_1,int param_2,int param_3)
void FUN_1805d212a(uint64_t param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *unaff_RBX;
  int iVar3;
  uint unaff_ESI;
  int iVar4;
  uint uVar5;
  int in_R11D;
  int unaff_R12D;
  uint *unaff_R14;
  int64_t *unaff_R15;
  float fVar6;
  uint in_XMM5_Da;
  float unaff_XMM7_Da;
  
  iVar4 = 0;
  iVar3 = param_2;
  if (0 < param_2) {
    uVar5 = unaff_ESI + 0x1f;
    iVar1 = iVar4;
    do {
      iVar3 = iVar1;
      if ((*unaff_RBX >> (uVar5 & 0x1f) & 1) != 0) break;
      iVar1 = iVar1 + 1;
      uVar5 = uVar5 - 1;
      iVar3 = param_2;
    } while (iVar1 < param_2);
  }
  iVar1 = param_2;
  if (0 < param_2) {
    iVar2 = iVar4;
    do {
      iVar1 = iVar2;
      if ((*unaff_RBX >> (unaff_ESI + 0x21 + iVar2 & 0x1f) & 1) != 0) break;
      iVar2 = iVar2 + 1;
      iVar1 = param_2;
    } while (iVar2 < param_2);
  }
  if ((iVar3 < unaff_R12D) || (in_R11D < iVar1)) {
    iVar4 = param_3;
  }
  if ((iVar1 < unaff_R12D) || (in_R11D < iVar3)) {
    iVar4 = iVar4 + -1;
  }
  if (iVar4 == 0) {
    fVar6 = (float)atan2f(in_XMM5_Da ^ 0x80000000);
    if (fVar6 < unaff_XMM7_Da) {
      fVar6 = fVar6 + 6.2831855;
    }
    uVar5 = (uint)(fVar6 * 5.092958);
    if ((*unaff_RBX >> (uVar5 & 0x1f) & 1) != 0) goto LAB_1805d2226;
    *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
  }
  else {
    *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
    uVar5 = *unaff_R14 + 0x21 + (iVar4 >> 0x1f & 0xfffffffeU) & 0x8000001f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
    }
  }
  *unaff_R14 = uVar5;
  *unaff_RBX = *unaff_RBX | 1 << (uVar5 & 0x1f);
LAB_1805d2226:
  if ((unaff_ESI != *unaff_R14) && (-1 < (int)*unaff_R14)) {
    uVar5 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    uVar5 = uVar5 << 5 ^ uVar5;
    *(uint *)(unaff_R15 + 0x272) = uVar5;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar5 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d21bc(void)
void FUN_1805d21bc(void)

{
  uint uVar1;
  uint *unaff_RBX;
  uint unaff_ESI;
  int in_R9D;
  uint *unaff_R14;
  int64_t *unaff_R15;
  
  *unaff_RBX = *unaff_RBX & ~(1 << (unaff_ESI & 0x1f));
  uVar1 = *unaff_R14 + 0x21 + (in_R9D >> 0x1f & 0xfffffffeU) & 0x8000001f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffffffe0) + 1;
  }
  *unaff_R14 = uVar1;
  *unaff_RBX = *unaff_RBX | 1 << (uVar1 & 0x1f);
  if ((unaff_ESI != *unaff_R14) && (-1 < (int)*unaff_R14)) {
    uVar1 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    uVar1 = uVar1 << 5 ^ uVar1;
    *(uint *)(unaff_R15 + 0x272) = uVar1;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar1 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d2230(void)
void FUN_1805d2230(void)

{
  uint uVar1;
  int unaff_ESI;
  int *unaff_R14;
  int64_t *unaff_R15;
  
  if ((unaff_ESI != *unaff_R14) && (-1 < *unaff_R14)) {
    uVar1 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    uVar1 = uVar1 << 5 ^ uVar1;
    *(uint *)(unaff_R15 + 0x272) = uVar1;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar1 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d223a(uint64_t param_1,uint64_t param_2,uint *param_3,int32_t *param_4)
void FUN_1805d223a(uint64_t param_1,uint64_t param_2,uint *param_3,int32_t *param_4)

{
  uint uVar1;
  uint unaff_ESI;
  int64_t *unaff_R15;
  
  uVar1 = unaff_ESI;
  if (-1 < (int)unaff_ESI) {
    *param_3 = *param_3 & ~(1 << (unaff_ESI & 0x1f));
    uVar1 = 0xffffffff;
    *param_4 = 0xffffffff;
  }
  if ((unaff_ESI != uVar1) && (-1 < (int)uVar1)) {
    uVar1 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    uVar1 = uVar1 << 5 ^ uVar1;
    *(uint *)(unaff_R15 + 0x272) = uVar1;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar1 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






// 函数: void FUN_1805d2269(void)
void FUN_1805d2269(void)

{
  int in_EAX;
  uint uVar1;
  int64_t *unaff_R15;
  
  if (-1 < in_EAX) {
    uVar1 = *(uint *)(unaff_R15 + 0x272) << 0xd ^ *(uint *)(unaff_R15 + 0x272);
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    uVar1 = uVar1 << 5 ^ uVar1;
    *(uint *)(unaff_R15 + 0x272) = uVar1;
    *(float *)(unaff_R15 + 0x2e6) =
         (float)(uVar1 - 1) * 6.9849196e-11 * *(float *)(*(int64_t *)(*unaff_R15 + 0x20) + 0x1d0);
  }
  return;
}






