#include "TaleWorlds.Native.Split.h"

// 99_part_09_part011.c - 1 个函数

// 函数: void FUN_1805c1d81(void)
void FUN_1805c1d81(void)

{
  bool bVar1;
  bool bVar2;
  undefined7 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  char cVar7;
  longlong unaff_RSI;
  float *unaff_RDI;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  char unaff_R12B;
  char unaff_R13B;
  longlong lVar11;
  longlong unaff_R14;
  float fVar12;
  float fVar13;
  int32_t uVar14;
  float extraout_XMM0_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  float unaff_XMM6_Da;
  float fVar21;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  uint64_t in_stack_00000040;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  int32_t in_stack_00000170;
  int32_t in_stack_00000178;
  
  fVar12 = (float)FUN_1805c9600();
  bVar1 = unaff_XMM11_Da < fVar12;
  fVar12 = (float)FUN_1805c9600(fVar12,3);
  bVar2 = unaff_XMM11_Da < fVar12;
  cVar7 = (char)unaff_RSI;
  cVar5 = bVar2;
  if ((*(byte *)((longlong)unaff_RBX + 0x209c) & 1) != 0) {
    if ((bVar1) || (bVar2)) {
      fVar15 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x10) -
               *(float *)(unaff_RBX[0x41e] + 0xa4);
      fVar12 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0xc) -
               *(float *)(unaff_RBX[0x41e] + 0xa0);
      fVar12 = (float)func_0x0001805d8e00((longlong)unaff_RBX + 0x165c,
                                          SQRT(fVar12 * fVar12 + fVar15 * fVar15));
      unaff_RDI[5] = fVar12;
    }
    if ((char)unaff_RBX[0x386] != cVar7) {
      if ((*(byte *)(unaff_R14 + 8) & 1) == 0) {
        FUN_1805d3210();
        cVar5 = bVar2;
      }
      fVar12 = (float)func_0x0001805d8e00(unaff_RBX + 0x2ce,*(int32_t *)(unaff_R14 + 0x60));
      unaff_RDI[6] = fVar12;
    }
    unaff_R12B = '\0';
  }
  piVar9 = *(int **)(unaff_RBP + 0x100);
  fVar15 = 0.001;
  fVar12 = (float)unaff_RSI;
  if (*piVar9 < 0) {
    cVar5 = *(char *)(unaff_RBP + 0xf0);
    unaff_RDI[1] = fVar12;
    unaff_RDI[3] = fVar12;
    in_stack_00000040._4_1_ = unaff_R13B;
  }
  else {
    unaff_R12B = '\0';
    lVar6 = *unaff_RBX;
    lVar8 = (longlong)*piVar9 * 0xa60;
    lVar11 = unaff_RBX[0x291] + 0x30a0 + lVar8;
    cVar4 = func_0x000180522f60(lVar11);
    if ((cVar4 == '\0') ||
       (*(float *)(*(longlong *)(lVar6 + 0x20) + 0x14) <=
        *(float *)(*(longlong *)(lVar11 + 0x20) + 0x14))) {
      in_stack_00000150 = unaff_XMM10_Da;
      in_stack_00000158 = unaff_XMM10_Dc;
      in_stack_00000160 = unaff_XMM9_Da;
      in_stack_00000168 = unaff_XMM9_Dc;
      in_stack_00000170 = unaff_XMM8_Da;
      in_stack_00000178 = unaff_XMM8_Dc;
      if (in_stack_00000040._4_1_ == cVar7) {
        uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
        if ((char)unaff_RBX[0x29b] != cVar7) {
          fVar15 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0xc);
          fVar13 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x10);
          fVar17 = *(float *)(unaff_RBX + 0x2a1) - fVar15;
          fVar16 = *(float *)((longlong)unaff_RBX + 0x150c) - fVar13;
          fVar18 = fVar16 * fVar16 + fVar17 * fVar17;
          _fStack0000000000000060 = *(longlong *)(lVar11 + 0x20);
          fVar18 = (float)(int)CONCAT71(uVar3,fVar18 <= 1.1754944e-38) * 1.1754944e-38 + fVar18;
          auVar19 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar20 = auVar19._0_4_;
          fVar15 = *(float *)(_fStack0000000000000060 + 0xc) - fVar15;
          fVar21 = fVar20 * 0.5 * (3.0 - fVar18 * fVar20 * fVar20);
          fVar13 = *(float *)(_fStack0000000000000060 + 0x10) - fVar13;
          _fStack0000000000000050 = CONCAT44(fVar13,fVar15);
          fVar18 = fVar13 * fVar13 + fVar15 * fVar15;
          fVar18 = (float)(int)CONCAT71(uVar3,fVar18 <= 1.1754944e-38) * 1.1754944e-38 + fVar18;
          auVar19 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar20 = auVar19._0_4_;
          fVar18 = fVar20 * 0.5 * (3.0 - fVar18 * fVar20 * fVar20);
          unaff_XMM6_Da = 0.5;
          if ((fVar21 * fVar16 * fVar13 * fVar18 + fVar21 * fVar17 * fVar15 * fVar18 < 0.5) &&
             (*(char *)(unaff_RBP + 0xf8) == cVar7)) {
            FUN_180487c70(unaff_RBX + 0x29e,3);
            if ((int)unaff_RBX[0x2a6] < 3) {
              fVar15 = -NAN;
            }
            else {
              fVar15 = *(float *)(unaff_RBX + 0x2a2);
            }
            fVar17 = *(float *)(unaff_RBX + 0x2a1) - *(float *)(_fStack0000000000000060 + 0xc);
            fVar13 = *(float *)((longlong)unaff_RBX + 0x150c) -
                     *(float *)(_fStack0000000000000060 + 0x10);
            fVar15 = fVar15 - *(float *)(_fStack0000000000000060 + 0x14);
            if (SQRT(fVar17 * fVar17 + fVar13 * fVar13 + fVar15 * fVar15) < 20.0) {
              FUN_18052ed30(lVar11,unaff_RBX + 0x29e);
            }
          }
        }
        fVar15 = (float)func_0x0001805d8e00((longlong)unaff_RBX + 0x160c);
        unaff_RDI[1] = fVar15;
        if (((!bVar1) && (bVar2 == (bool)cVar7)) && ((char)unaff_RBX[0x386] != cVar7)) {
          fVar15 = fVar15 * 0.1;
          unaff_RDI[1] = fVar15;
        }
        cVar5 = *(char *)(unaff_RBP + 0xf0);
        if ((cVar5 != '\0') && (*(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e0) == 4)) {
          fVar15 = fVar15 * unaff_XMM6_Da;
          unaff_RDI[1] = fVar15;
        }
        if ((int)fVar12 <= *(int *)(lVar11 + 0x564)) {
          lVar6 = *(longlong *)(lVar11 + 0x20);
          lVar8 = *(longlong *)(*unaff_RBX + 0x20);
          if (bVar1) {
            if (unaff_XMM14_Da <
                (0.4 / (*(float *)(lVar8 + 0x1d0) + *(float *)(lVar6 + 0x1d0))) * unaff_XMM12_Da) {
              fVar12 = *(float *)(lVar6 + 0xc) - *(float *)(lVar8 + 0xc);
              fVar15 = *(float *)(lVar6 + 0x10) - *(float *)(lVar8 + 0x10);
              fVar12 = fVar15 * fVar15 + fVar12 * fVar12;
              fVar12 = (float)(int)CONCAT71(uVar3,fVar12 <= 1.1754944e-38) * 1.1754944e-38 + fVar12;
              auVar19 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
                    // WARNING: Subroutine does not return
              FUN_1808fd400(*(int32_t *)(lVar6 + 0x34),
                            3.0 - fVar12 * auVar19._0_4_ * auVar19._0_4_);
            }
          }
          else {
            unaff_RDI[1] = fVar15 * 0.4;
          }
        }
        fVar15 = 0.001;
      }
      else {
        if (((cVar5 != '\0') || (bVar1)) || ((char)unaff_RBX[0x386] == cVar7)) {
          if ((char)unaff_RBX[0x29b] == cVar7) {
            fVar13 = (float)func_0x0001805d8e00((longlong)unaff_RBX + 0x1634);
            unaff_RDI[3] = fVar13;
            if (((*(int *)(lVar8 + 0x3604 + unaff_RBX[0x291]) != -1) && (bVar1)) &&
               (((int)unaff_RBX[0x295] != 3 ||
                ((*(float *)(unaff_RBX + 0x284) != fVar12 ||
                 (lVar6 = *(longlong *)(*unaff_RBX + 0x20),
                 *(float *)(lVar6 + 0x1fc) * *(float *)(lVar6 + 0x1fc) +
                 *(float *)(lVar6 + 0x200) * *(float *)(lVar6 + 0x200) +
                 *(float *)(lVar6 + 0x204) * *(float *)(lVar6 + 0x204) <
                 *(float *)(lVar6 + 0x50) * *(float *)(lVar6 + 0x50) * 0.0625)))))) {
              fVar13 = (float)func_0x0001805d8e00((longlong)unaff_RBX + 0x160c);
              unaff_RDI[1] = fVar13;
            }
          }
          else {
            FUN_180487c70(unaff_RBX + 0x29e,2);
            fVar15 = -NAN;
            if ((int)unaff_RBX[0x2a6] < 2) {
              fVar13 = -NAN;
            }
            else {
              fVar13 = *(float *)(unaff_RBX + 0x2a2);
            }
            fVar17 = *(float *)(unaff_RBX + 0x2a1);
            fVar18 = *(float *)((longlong)unaff_RBX + 0x150c);
            lVar6 = FUN_180516f50(*unaff_RBX,&stack0x00000070);
            FUN_180487c70(lVar6,2);
            if (*(int *)(lVar6 + 0x40) < 2) {
              fStack0000000000000058 = -NAN;
            }
            else {
              fStack0000000000000058 = *(float *)(lVar6 + 0x20);
            }
            fStack0000000000000058 = fVar13 - fStack0000000000000058;
            uStack000000000000005c = 0x7f7fffff;
            _fStack0000000000000050 =
                 CONCAT44(fVar18 - *(float *)(lVar6 + 0x1c),fVar17 - *(float *)(lVar6 + 0x18));
            fVar13 = (float)FUN_1801c24a0(&stack0x00000050);
            lVar6 = FUN_180516f50((longlong)**(int **)(unaff_RBP + 0x100) * 0xa60 +
                                  unaff_RBX[0x291] + 0x30a0,&stack0x00000070);
            FUN_180487c70(lVar6,2);
            if (*(int *)(lVar6 + 0x40) < 2) {
              fVar17 = -NAN;
            }
            else {
              fVar17 = *(float *)(lVar6 + 0x20);
            }
            fVar18 = *(float *)(lVar6 + 0x18);
            fVar16 = *(float *)(lVar6 + 0x1c);
            lVar6 = FUN_180516f50(*unaff_RBX,unaff_RBP + -0x48);
            FUN_180487c70(lVar6,2);
            if (1 < *(int *)(lVar6 + 0x40)) {
              fVar15 = *(float *)(lVar6 + 0x20);
            }
            fVar18 = fVar18 - *(float *)(lVar6 + 0x18);
            fVar16 = fVar16 - *(float *)(lVar6 + 0x1c);
            uStack000000000000006c = 0x7f7fffff;
            _fStack0000000000000060 = CONCAT44(fVar16,fVar18);
            fStack0000000000000068 = fVar17 - fVar15;
            fVar21 = (float)FUN_1801c24a0(&stack0x00000060);
            fVar20 = fStack0000000000000064 * fStack0000000000000054 +
                     fStack0000000000000060 * fStack0000000000000050 +
                     fStack0000000000000068 * fStack0000000000000058;
            if (fVar20 < -1.0) {
LAB_1805c280c:
              fVar13 = fVar21 * 2.0 + fVar13;
            }
            else {
              if (unaff_XMM14_Da <= fVar20) {
                fVar20 = unaff_XMM14_Da;
              }
              if (fVar20 < unaff_XMM11_Da) goto LAB_1805c280c;
              fVar20 = fVar20 * fVar21;
              if (fVar13 < fVar20) {
                fVar13 = fVar21 * 2.0 - fVar13;
              }
              else {
                fVar16 = fVar16 - fStack0000000000000054 * fVar20;
                fVar15 = (fVar17 - fVar15) - fStack0000000000000058 * fVar20;
                fVar18 = fVar18 - fStack0000000000000050 * fVar20;
                fVar13 = SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15);
              }
            }
            fVar15 = (float)func_0x0001805d8e00((longlong)unaff_RBX + 0x1634,fVar13);
            unaff_RDI[3] = fVar15;
            if ((((int)unaff_RBX[0x295] != 3) || (*(float *)(unaff_RBX + 0x284) != fVar12)) ||
               (lVar6 = *(longlong *)(*unaff_RBX + 0x20),
               *(float *)(lVar6 + 0x1fc) * *(float *)(lVar6 + 0x1fc) +
               *(float *)(lVar6 + 0x200) * *(float *)(lVar6 + 0x200) +
               *(float *)(lVar6 + 0x204) * *(float *)(lVar6 + 0x204) <
               *(float *)(lVar6 + 0x50) * *(float *)(lVar6 + 0x50) * 0.0625)) {
              uVar14 = FUN_18052ed30(lVar11,unaff_RBX + 0x29e);
              fVar15 = (float)func_0x0001805d8e00((longlong)unaff_RBX + 0x160c,uVar14);
              unaff_RDI[1] = fVar15;
            }
            fVar15 = 0.001;
            unaff_XMM6_Da = 0.5;
          }
        }
        cVar5 = *(char *)(unaff_RBP + 0xf0);
      }
    }
    else {
      cVar5 = *(char *)(unaff_RBP + 0xf0);
      unaff_RDI[1] = fVar12;
      unaff_RDI[3] = fVar12;
    }
    piVar9 = *(int **)(unaff_RBP + 0x100);
  }
  if (((char)unaff_RBX[0x386] == cVar7) || ((int)unaff_RBX[0x42c] == 1)) {
    unaff_RDI[2] = fVar12;
    unaff_RDI[4] = fVar12;
  }
  else if (-1 < **(int **)(unaff_RBP + 0x108)) {
    lVar11 = (longlong)**(int **)(unaff_RBP + 0x108) * 0xa60;
    lVar6 = *(longlong *)(lVar11 + 0x30c0 + unaff_RBX[0x291]);
    lVar8 = *(longlong *)(*unaff_RBX + 0x20);
    fVar18 = *(float *)(lVar6 + 0x10) - *(float *)(lVar8 + 0x10);
    fVar17 = *(float *)(lVar6 + 0xc) - *(float *)(lVar8 + 0xc);
    fVar13 = *(float *)(lVar6 + 0x14) - *(float *)(lVar8 + 0x14);
    unaff_XMM13_Da = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar13 * fVar13);
    if (in_stack_00000040._4_1_ == '\0') {
      fVar13 = (float)func_0x0001805d8e00(unaff_RBX + 0x2c4,unaff_XMM13_Da);
      unaff_RDI[2] = fVar13;
      if (*(char *)((longlong)unaff_RBX + 0x13bd) != cVar7) {
        unaff_RDI[2] = fVar13 * fVar15;
        *(char *)((longlong)unaff_RBX + 0x13bd) = cVar7;
      }
      lVar6 = *unaff_RBX;
      if ((((int)fVar12 <= *(int *)(lVar11 + 0x3604 + unaff_RBX[0x291])) &&
          (lVar8 = *(longlong *)(lVar11 + 0x30c0 + unaff_RBX[0x291]),
          fVar13 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x8c),
          fVar13 * fVar13 * 0.25 <
          *(float *)(lVar8 + 0x24) * *(float *)(lVar8 + 0x24) +
          *(float *)(lVar8 + 0x28) * *(float *)(lVar8 + 0x28) +
          *(float *)(lVar8 + 0x2c) * *(float *)(lVar8 + 0x2c))) &&
         (*(int *)((longlong)unaff_RBX + 0x215c) == 2)) {
        unaff_RDI[2] = unaff_RDI[2] * 1.5;
        lVar6 = *unaff_RBX;
      }
      if ((cVar5 == '\0') && (*(int *)(*(longlong *)(lVar6 + 0x8f8) + 0x9e0) == 4)) {
        unaff_RDI[2] = unaff_RDI[2] * unaff_XMM6_Da;
        lVar6 = *unaff_RBX;
      }
      if ((((int)fVar12 <= *piVar9) && (*(float *)(unaff_RBX + 6) < unaff_XMM13_Da)) &&
         (fVar12 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x84), fVar15 < fVar12)) {
        fVar12 = unaff_XMM14_Da / fVar12;
        fVar15 = (fVar12 * unaff_XMM12_Da) / ((unaff_XMM13_Da - *(float *)(unaff_RBX + 6)) * fVar12)
        ;
        fVar12 = 0.1;
        if ((0.1 <= fVar15) && (fVar12 = fVar15, unaff_XMM14_Da <= fVar15)) {
          fVar12 = unaff_XMM14_Da;
        }
        unaff_RDI[2] = fVar12 * unaff_RDI[2];
        lVar6 = *unaff_RBX;
      }
      if (*(int *)(*(longlong *)(lVar6 + 0x8f8) + 0x9e4) == 4) {
        plVar10 = (longlong *)(*(longlong *)(lVar6 + 0x8f8) + 0xd8);
        do {
          cVar5 = FUN_18058f970(plVar10 + -0x1a);
          if ((cVar5 != '\0') &&
             ((*(byte *)((longlong)(int)plVar10[4] * 0xa0 + 0x50 + *plVar10) & 0x12) == 2))
          goto LAB_1805c2964;
          unaff_RSI = unaff_RSI + 1;
          plVar10 = plVar10 + 0x3f;
        } while (unaff_RSI < 4);
        unaff_RDI[2] = unaff_RDI[2] * 0.01;
      }
    }
    else {
      fVar12 = (float)func_0x0001805d8e00(unaff_RBX + 0x2c9,unaff_XMM13_Da);
      unaff_RDI[4] = fVar12;
      if (*(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e4) == 4) {
        plVar10 = (longlong *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0xd8);
        do {
          cVar5 = FUN_18058f970(plVar10 + -0x1a);
          if ((cVar5 != '\0') &&
             ((*(byte *)((longlong)(int)plVar10[4] * 0xa0 + 0x50 + *plVar10) & 0x12) == 2))
          goto LAB_1805c2964;
          unaff_RSI = unaff_RSI + 1;
          plVar10 = plVar10 + 0x3f;
        } while (unaff_RSI < 4);
        unaff_RDI[4] = extraout_XMM0_Da * 0.01;
      }
    }
    goto LAB_1805c2964;
  }
  if ((unaff_R12B != '\0') && (cVar5 = func_0x000180522f60(*unaff_RBX), cVar5 == '\0')) {
    unaff_XMM12_Da = 1000.0;
    *unaff_RDI = 1000.0;
  }
LAB_1805c2964:
  if (((((*(uint *)(*unaff_RBX + 0x56c) & 0x200) != 0) && ((char)unaff_RBX[0x29b] != '\0')) &&
      ((*(byte *)(unaff_RBX + 0x413) & 3) == 0)) &&
     ((*(byte *)((longlong)unaff_RBX + 0x209c) & 1) == 0)) {
    lVar6 = *(longlong *)(*unaff_RBX + 0x20);
    fVar12 = *(float *)((longlong)unaff_RBX + 0x15fc);
    fVar15 = *(float *)(unaff_RBX + 0x2c0);
    fVar13 = *(float *)(lVar6 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
    fVar17 = *(float *)(lVar6 + 0x10) - *(float *)((longlong)unaff_RBX + 0x150c);
    fVar13 = SQRT(fVar13 * fVar13 + fVar17 * fVar17);
    if (fVar12 < fVar13) {
      fVar15 = ((*(float *)(unaff_RBX + 0x2c1) - fVar15) * (fVar13 - fVar12)) /
               (*(float *)((longlong)unaff_RBX + 0x1604) - fVar12) + fVar15;
      if (fVar15 <= 0.0001) {
        fVar15 = 0.0001;
      }
    }
    else {
      fVar15 = ((fVar15 - *(float *)(unaff_RBX + 0x2bf)) * fVar13) / fVar12 +
               *(float *)(unaff_RBX + 0x2bf);
    }
    *unaff_RDI = fVar15;
  }
  fVar12 = unaff_XMM12_Da;
  if (((char)unaff_RBX[0x386] != '\0') &&
     (fVar12 = unaff_XMM13_Da, unaff_XMM12_Da <= unaff_XMM13_Da)) {
    fVar12 = unaff_XMM12_Da;
  }
  if ((((int)unaff_RBX[0x403] == 1) || ((int)unaff_RBX[0x295] == 9)) &&
     ((*(int *)(*unaff_RBX + 0x564) < 0 && (-1 < *(int *)((longlong)unaff_RBX + 0x172c))))) {
    lVar6 = (longlong)*(int *)((longlong)unaff_RBX + 0x172c) * 0xa60;
    if (*(int *)(lVar6 + 0x3608 + unaff_RBX[0x291]) == 1) {
      lVar8 = *(longlong *)(*unaff_RBX + 0x20);
      lVar6 = *(longlong *)(lVar6 + 0x30c0 + unaff_RBX[0x291]);
      fVar13 = *(float *)(lVar6 + 0xc) - *(float *)(lVar8 + 0xc);
      fVar17 = *(float *)(lVar6 + 0x10) - *(float *)(lVar8 + 0x10);
      fVar15 = *(float *)(lVar6 + 0x14) - *(float *)(lVar8 + 0x14);
      fVar18 = *(float *)(lVar8 + 0x84) * 4.0;
      fVar15 = SQRT(fVar17 * fVar17 + fVar13 * fVar13 + fVar15 * fVar15);
      if ((fVar18 < fVar12) || ((fVar15 < fVar18 && (fVar15 < fVar12)))) {
        unaff_RDI[9] = 12.0 / (fVar15 * 0.15 + 1.2);
        *unaff_RDI = *unaff_RDI * unaff_XMM6_Da;
      }
    }
    else {
      *(int32_t *)((longlong)unaff_RBX + 0x172c) = 0xffffffff;
    }
  }
  else if ((((int)unaff_RBX[0x403] == 2) && (*(int *)(*unaff_RBX + 0x564) != -1)) && (5.0 < fVar12))
  {
    unaff_RDI[10] = 1500.0;
  }
  unaff_RDI[*(uint *)(unaff_RBX + 0x295)] = unaff_RDI[*(uint *)(unaff_RBX + 0x295)] * 1.2;
  return;
}






