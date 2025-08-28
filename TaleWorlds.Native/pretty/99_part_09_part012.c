/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"

// 99_part_09_part012.c - 2 个函数

// 函数: void FUN_1805c1ed9(void)
void FUN_1805c1ed9(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  float *unaff_RDI;
  int64_t lVar5;
  char in_R9B;
  int64_t in_R10;
  int *piVar6;
  int64_t in_R11;
  int64_t *plVar7;
  char unaff_R12B;
  int64_t unaff_R13;
  char cVar8;
  char unaff_R15B;
  float fVar9;
  float fVar10;
  int32_t uVar11;
  float extraout_XMM0_Da;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auVar16 [16];
  float fVar17;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar18;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  char cStack0000000000000040;
  char cStack0000000000000044;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  
  cVar3 = (char)unaff_RSI;
  fVar15 = (float)unaff_RSI;
  if (cStack0000000000000044 == cVar3) {
    uVar2 = (uint8_t)((uint64_t)unaff_RSI >> 8);
    if ((char)unaff_RBX[0x29b] != cVar3) {
      fVar10 = *(float *)(*(int64_t *)(in_R11 + 0x20) + 0xc);
      fVar14 = *(float *)(*(int64_t *)(in_R11 + 0x20) + 0x10);
      fVar9 = *(float *)(unaff_RBX + 0x2a1) - fVar10;
      fVar12 = *(float *)((int64_t)unaff_RBX + 0x150c) - fVar14;
      fVar13 = fVar12 * fVar12 + fVar9 * fVar9;
      _fStack0000000000000060 = *(int64_t *)(unaff_R13 + 0x20);
      fVar13 = (float)(int)CONCAT71(uVar2,fVar13 <= 1.1754944e-38) * 1.1754944e-38 + fVar13;
      auVar16 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar17 = auVar16._0_4_;
      fVar10 = *(float *)(_fStack0000000000000060 + 0xc) - fVar10;
      fVar18 = fVar17 * 0.5 * (3.0 - fVar13 * fVar17 * fVar17);
      fVar14 = *(float *)(_fStack0000000000000060 + 0x10) - fVar14;
      _fStack0000000000000050 = CONCAT44(fVar14,fVar10);
      fVar13 = fVar14 * fVar14 + fVar10 * fVar10;
      fVar13 = (float)(int)CONCAT71(uVar2,fVar13 <= 1.1754944e-38) * 1.1754944e-38 + fVar13;
      auVar16 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar17 = auVar16._0_4_;
      fVar13 = fVar17 * 0.5 * (3.0 - fVar13 * fVar17 * fVar17);
      unaff_XMM6_Da = 0.5;
      if ((fVar18 * fVar12 * fVar14 * fVar13 + fVar18 * fVar9 * fVar10 * fVar13 < 0.5) &&
         (*(char *)(unaff_RBP + 0xf8) == cVar3)) {
        FUN_180487c70(unaff_RBX + 0x29e,3);
        if ((int)unaff_RBX[0x2a6] < 3) {
          fVar10 = -NAN;
        }
        else {
          fVar10 = *(float *)(unaff_RBX + 0x2a2);
        }
        fVar9 = *(float *)(unaff_RBX + 0x2a1) - *(float *)(_fStack0000000000000060 + 0xc);
        fVar14 = *(float *)((int64_t)unaff_RBX + 0x150c) -
                 *(float *)(_fStack0000000000000060 + 0x10);
        fVar10 = fVar10 - *(float *)(_fStack0000000000000060 + 0x14);
        fVar14 = fVar14 * fVar14;
        if (SQRT(fVar9 * fVar9 + fVar14 + fVar10 * fVar10) < 20.0) {
          FUN_18052ed30(fVar14,unaff_RBX + 0x29e);
        }
      }
    }
    fVar10 = (float)func_0x0001805d8e00((int64_t)unaff_RBX + 0x160c);
    unaff_RDI[1] = fVar10;
    if (((unaff_R15B == '\0') && (cStack0000000000000040 == cVar3)) &&
       ((char)unaff_RBX[0x386] != cVar3)) {
      fVar10 = fVar10 * unaff_XMM15_Da;
      unaff_RDI[1] = fVar10;
    }
    cVar8 = *(char *)(unaff_RBP + 0xf0);
    if ((cVar8 != '\0') && (*(int *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e0) == 4)) {
      fVar10 = fVar10 * unaff_XMM6_Da;
      unaff_RDI[1] = fVar10;
    }
    if ((int)fVar15 <= *(int *)(unaff_R13 + 0x564)) {
      lVar4 = *(int64_t *)(unaff_R13 + 0x20);
      lVar1 = *(int64_t *)(*unaff_RBX + 0x20);
      if (unaff_R15B == '\0') {
        unaff_RDI[1] = fVar10 * 0.4;
      }
      else if (unaff_XMM14_Da <
               (0.4 / (*(float *)(lVar1 + 0x1d0) + *(float *)(lVar4 + 0x1d0))) * unaff_XMM12_Da) {
        fVar15 = *(float *)(lVar4 + 0xc) - *(float *)(lVar1 + 0xc);
        fVar10 = *(float *)(lVar4 + 0x10) - *(float *)(lVar1 + 0x10);
        fVar15 = fVar10 * fVar10 + fVar15 * fVar15;
        fVar15 = (float)(int)CONCAT71(uVar2,fVar15 <= 1.1754944e-38) * 1.1754944e-38 + fVar15;
        auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
                    // WARNING: Subroutine does not return
        AdvancedSystemController(*(int32_t *)(lVar4 + 0x34),3.0 - fVar15 * auVar16._0_4_ * auVar16._0_4_);
      }
    }
    in_XMM5_Da = 0.001;
  }
  else {
    if (((in_R9B != '\0') || (unaff_R15B != '\0')) || ((char)unaff_RBX[0x386] == cVar3)) {
      if ((char)unaff_RBX[0x29b] == cVar3) {
        fVar10 = (float)func_0x0001805d8e00((int64_t)unaff_RBX + 0x1634);
        unaff_RDI[3] = fVar10;
        if (((*(int *)(in_R10 + 0x3604 + unaff_RBX[0x291]) != -1) && (unaff_R15B != '\0')) &&
           (((int)unaff_RBX[0x295] != 3 ||
            ((*(float *)(unaff_RBX + 0x284) != fVar15 ||
             (lVar4 = *(int64_t *)(*unaff_RBX + 0x20),
             *(float *)(lVar4 + 0x1fc) * *(float *)(lVar4 + 0x1fc) +
             *(float *)(lVar4 + 0x200) * *(float *)(lVar4 + 0x200) +
             *(float *)(lVar4 + 0x204) * *(float *)(lVar4 + 0x204) <
             *(float *)(lVar4 + 0x50) * *(float *)(lVar4 + 0x50) * 0.0625)))))) {
          fVar10 = (float)func_0x0001805d8e00((int64_t)unaff_RBX + 0x160c);
          unaff_RDI[1] = fVar10;
        }
      }
      else {
        FUN_180487c70(unaff_RBX + 0x29e,2);
        fVar10 = -NAN;
        if ((int)unaff_RBX[0x2a6] < 2) {
          fVar14 = -NAN;
        }
        else {
          fVar14 = *(float *)(unaff_RBX + 0x2a2);
        }
        fVar9 = *(float *)(unaff_RBX + 0x2a1);
        fVar13 = *(float *)((int64_t)unaff_RBX + 0x150c);
        lVar4 = FUN_180516f50(*unaff_RBX,&stack0x00000070);
        FUN_180487c70(lVar4,2);
        if (*(int *)(lVar4 + 0x40) < 2) {
          fStack0000000000000058 = -NAN;
        }
        else {
          fStack0000000000000058 = *(float *)(lVar4 + 0x20);
        }
        fStack0000000000000058 = fVar14 - fStack0000000000000058;
        uStack000000000000005c = 0x7f7fffff;
        _fStack0000000000000050 =
             CONCAT44(fVar13 - *(float *)(lVar4 + 0x1c),fVar9 - *(float *)(lVar4 + 0x18));
        fVar14 = (float)FUN_1801c24a0(&stack0x00000050);
        lVar4 = FUN_180516f50((int64_t)**(int **)(unaff_RBP + 0x100) * 0xa60 +
                              unaff_RBX[0x291] + 0x30a0,&stack0x00000070);
        FUN_180487c70(lVar4,2);
        if (*(int *)(lVar4 + 0x40) < 2) {
          fVar9 = -NAN;
        }
        else {
          fVar9 = *(float *)(lVar4 + 0x20);
        }
        fVar13 = *(float *)(lVar4 + 0x18);
        fVar12 = *(float *)(lVar4 + 0x1c);
        lVar4 = FUN_180516f50(*unaff_RBX,unaff_RBP + -0x48);
        FUN_180487c70(lVar4,2);
        if (1 < *(int *)(lVar4 + 0x40)) {
          fVar10 = *(float *)(lVar4 + 0x20);
        }
        fVar13 = fVar13 - *(float *)(lVar4 + 0x18);
        fVar12 = fVar12 - *(float *)(lVar4 + 0x1c);
        uStack000000000000006c = 0x7f7fffff;
        _fStack0000000000000060 = CONCAT44(fVar12,fVar13);
        fStack0000000000000068 = fVar9 - fVar10;
        fVar18 = (float)FUN_1801c24a0(&stack0x00000060);
        fVar17 = fStack0000000000000064 * fStack0000000000000054 +
                 fStack0000000000000060 * fStack0000000000000050 +
                 fStack0000000000000068 * fStack0000000000000058;
        if (fVar17 < -1.0) {
LAB_1805c280c:
          fVar14 = fVar18 * 2.0 + fVar14;
        }
        else {
          if (unaff_XMM14_Da <= fVar17) {
            fVar17 = unaff_XMM14_Da;
          }
          if (fVar17 < unaff_XMM11_Da) goto LAB_1805c280c;
          fVar17 = fVar17 * fVar18;
          if (fVar14 < fVar17) {
            fVar14 = fVar18 * 2.0 - fVar14;
          }
          else {
            fVar12 = fVar12 - fStack0000000000000054 * fVar17;
            fVar10 = (fVar9 - fVar10) - fStack0000000000000058 * fVar17;
            fVar13 = fVar13 - fStack0000000000000050 * fVar17;
            fVar14 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar10 * fVar10);
          }
        }
        fVar10 = (float)func_0x0001805d8e00((int64_t)unaff_RBX + 0x1634,fVar14);
        unaff_RDI[3] = fVar10;
        if (((int)unaff_RBX[0x295] == 3) && (*(float *)(unaff_RBX + 0x284) == fVar15)) {
          lVar4 = *(int64_t *)(*unaff_RBX + 0x20);
          fVar10 = *(float *)(lVar4 + 0x200) * *(float *)(lVar4 + 0x200);
          if (*(float *)(lVar4 + 0x1fc) * *(float *)(lVar4 + 0x1fc) + fVar10 +
              *(float *)(lVar4 + 0x204) * *(float *)(lVar4 + 0x204) <
              *(float *)(lVar4 + 0x50) * *(float *)(lVar4 + 0x50) * 0.0625) goto LAB_1805c2880;
        }
        else {
LAB_1805c2880:
          uVar11 = FUN_18052ed30(fVar10,unaff_RBX + 0x29e);
          fVar10 = (float)func_0x0001805d8e00((int64_t)unaff_RBX + 0x160c,uVar11);
          unaff_RDI[1] = fVar10;
        }
        in_XMM5_Da = 0.001;
        unaff_XMM6_Da = 0.5;
      }
    }
    cVar8 = *(char *)(unaff_RBP + 0xf0);
  }
  piVar6 = *(int **)(unaff_RBP + 0x100);
  if (((char)unaff_RBX[0x386] == cVar3) || ((int)unaff_RBX[0x42c] == 1)) {
    unaff_RDI[2] = fVar15;
    unaff_RDI[4] = fVar15;
  }
  else if (-1 < **(int **)(unaff_RBP + 0x108)) {
    lVar5 = (int64_t)**(int **)(unaff_RBP + 0x108) * 0xa60;
    lVar4 = *(int64_t *)(lVar5 + 0x30c0 + unaff_RBX[0x291]);
    lVar1 = *(int64_t *)(*unaff_RBX + 0x20);
    fVar9 = *(float *)(lVar4 + 0x10) - *(float *)(lVar1 + 0x10);
    fVar14 = *(float *)(lVar4 + 0xc) - *(float *)(lVar1 + 0xc);
    fVar10 = *(float *)(lVar4 + 0x14) - *(float *)(lVar1 + 0x14);
    unaff_XMM13_Da = SQRT(fVar9 * fVar9 + fVar14 * fVar14 + fVar10 * fVar10);
    if (cStack0000000000000044 == '\0') {
      fVar10 = (float)func_0x0001805d8e00(unaff_RBX + 0x2c4,unaff_XMM13_Da);
      unaff_RDI[2] = fVar10;
      if (*(char *)((int64_t)unaff_RBX + 0x13bd) != cVar3) {
        unaff_RDI[2] = fVar10 * in_XMM5_Da;
        *(char *)((int64_t)unaff_RBX + 0x13bd) = cVar3;
      }
      lVar4 = *unaff_RBX;
      if ((((int)fVar15 <= *(int *)(lVar5 + 0x3604 + unaff_RBX[0x291])) &&
          (lVar1 = *(int64_t *)(lVar5 + 0x30c0 + unaff_RBX[0x291]),
          fVar10 = *(float *)(*(int64_t *)(lVar4 + 0x20) + 0x8c),
          fVar10 * fVar10 * 0.25 <
          *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x24) +
          *(float *)(lVar1 + 0x28) * *(float *)(lVar1 + 0x28) +
          *(float *)(lVar1 + 0x2c) * *(float *)(lVar1 + 0x2c))) &&
         (*(int *)((int64_t)unaff_RBX + 0x215c) == 2)) {
        unaff_RDI[2] = unaff_RDI[2] * 1.5;
        lVar4 = *unaff_RBX;
      }
      if ((cVar8 == '\0') && (*(int *)(*(int64_t *)(lVar4 + 0x8f8) + 0x9e0) == 4)) {
        unaff_RDI[2] = unaff_RDI[2] * unaff_XMM6_Da;
        lVar4 = *unaff_RBX;
      }
      if ((((int)fVar15 <= *piVar6) && (*(float *)(unaff_RBX + 6) < unaff_XMM13_Da)) &&
         (fVar15 = *(float *)(*(int64_t *)(lVar4 + 0x20) + 0x84), in_XMM5_Da < fVar15)) {
        fVar15 = unaff_XMM14_Da / fVar15;
        fVar15 = (fVar15 * unaff_XMM12_Da) / ((unaff_XMM13_Da - *(float *)(unaff_RBX + 6)) * fVar15)
        ;
        if ((unaff_XMM15_Da <= fVar15) && (unaff_XMM15_Da = fVar15, unaff_XMM14_Da <= fVar15)) {
          unaff_XMM15_Da = unaff_XMM14_Da;
        }
        unaff_RDI[2] = unaff_XMM15_Da * unaff_RDI[2];
        lVar4 = *unaff_RBX;
      }
      if (*(int *)(*(int64_t *)(lVar4 + 0x8f8) + 0x9e4) == 4) {
        plVar7 = (int64_t *)(*(int64_t *)(lVar4 + 0x8f8) + 0xd8);
        do {
          cVar3 = FUN_18058f970(plVar7 + -0x1a);
          if ((cVar3 != '\0') &&
             ((*(byte *)((int64_t)(int)plVar7[4] * 0xa0 + 0x50 + *plVar7) & 0x12) == 2))
          goto LAB_1805c2964;
          unaff_RSI = unaff_RSI + 1;
          plVar7 = plVar7 + 0x3f;
        } while (unaff_RSI < 4);
        unaff_RDI[2] = unaff_RDI[2] * 0.01;
      }
    }
    else {
      fVar15 = (float)func_0x0001805d8e00(unaff_RBX + 0x2c9,unaff_XMM13_Da);
      unaff_RDI[4] = fVar15;
      if (*(int *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e4) == 4) {
        plVar7 = (int64_t *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0xd8);
        do {
          cVar3 = FUN_18058f970(plVar7 + -0x1a);
          if ((cVar3 != '\0') &&
             ((*(byte *)((int64_t)(int)plVar7[4] * 0xa0 + 0x50 + *plVar7) & 0x12) == 2))
          goto LAB_1805c2964;
          unaff_RSI = unaff_RSI + 1;
          plVar7 = plVar7 + 0x3f;
        } while (unaff_RSI < 4);
        unaff_RDI[4] = extraout_XMM0_Da * 0.01;
      }
    }
    goto LAB_1805c2964;
  }
  if ((unaff_R12B != '\0') && (cVar3 = func_0x000180522f60(*unaff_RBX), cVar3 == '\0')) {
    unaff_XMM12_Da = 1000.0;
    *unaff_RDI = 1000.0;
  }
LAB_1805c2964:
  if (((((*(uint *)(*unaff_RBX + 0x56c) & 0x200) != 0) && ((char)unaff_RBX[0x29b] != '\0')) &&
      ((*(byte *)(unaff_RBX + 0x413) & 3) == 0)) &&
     ((*(byte *)((int64_t)unaff_RBX + 0x209c) & 1) == 0)) {
    lVar4 = *(int64_t *)(*unaff_RBX + 0x20);
    fVar15 = *(float *)((int64_t)unaff_RBX + 0x15fc);
    fVar10 = *(float *)(unaff_RBX + 0x2c0);
    fVar14 = *(float *)(lVar4 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
    fVar9 = *(float *)(lVar4 + 0x10) - *(float *)((int64_t)unaff_RBX + 0x150c);
    fVar14 = SQRT(fVar14 * fVar14 + fVar9 * fVar9);
    if (fVar15 < fVar14) {
      fVar10 = ((*(float *)(unaff_RBX + 0x2c1) - fVar10) * (fVar14 - fVar15)) /
               (*(float *)((int64_t)unaff_RBX + 0x1604) - fVar15) + fVar10;
      if (fVar10 <= 0.0001) {
        fVar10 = 0.0001;
      }
    }
    else {
      fVar10 = ((fVar10 - *(float *)(unaff_RBX + 0x2bf)) * fVar14) / fVar15 +
               *(float *)(unaff_RBX + 0x2bf);
    }
    *unaff_RDI = fVar10;
  }
  fVar15 = unaff_XMM12_Da;
  if (((char)unaff_RBX[0x386] != '\0') &&
     (fVar15 = unaff_XMM13_Da, unaff_XMM12_Da <= unaff_XMM13_Da)) {
    fVar15 = unaff_XMM12_Da;
  }
  if ((((int)unaff_RBX[0x403] == 1) || ((int)unaff_RBX[0x295] == 9)) &&
     ((*(int *)(*unaff_RBX + 0x564) < 0 && (-1 < *(int *)((int64_t)unaff_RBX + 0x172c))))) {
    lVar4 = (int64_t)*(int *)((int64_t)unaff_RBX + 0x172c) * 0xa60;
    if (*(int *)(lVar4 + 0x3608 + unaff_RBX[0x291]) == 1) {
      lVar1 = *(int64_t *)(*unaff_RBX + 0x20);
      lVar4 = *(int64_t *)(lVar4 + 0x30c0 + unaff_RBX[0x291]);
      fVar14 = *(float *)(lVar4 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar9 = *(float *)(lVar4 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar10 = *(float *)(lVar4 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar13 = *(float *)(lVar1 + 0x84) * 4.0;
      fVar10 = SQRT(fVar9 * fVar9 + fVar14 * fVar14 + fVar10 * fVar10);
      if ((fVar13 < fVar15) || ((fVar10 < fVar13 && (fVar10 < fVar15)))) {
        unaff_RDI[9] = 12.0 / (fVar10 * 0.15 + 1.2);
        *unaff_RDI = *unaff_RDI * unaff_XMM6_Da;
      }
    }
    else {
      *(int32_t *)((int64_t)unaff_RBX + 0x172c) = 0xffffffff;
    }
  }
  else if ((((int)unaff_RBX[0x403] == 2) && (*(int *)(*unaff_RBX + 0x564) != -1)) && (5.0 < fVar15))
  {
    unaff_RDI[10] = 1500.0;
  }
  unaff_RDI[*(uint *)(unaff_RBX + 0x295)] = unaff_RDI[*(uint *)(unaff_RBX + 0x295)] * 1.2;
  return;
}






// 函数: void FUN_1805c23c2(void)
void FUN_1805c23c2(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  float *unaff_RDI;
  int64_t lVar4;
  int *piVar5;
  int64_t *plVar6;
  char unaff_R12B;
  char unaff_R14B;
  float fVar7;
  float extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t in_stack_00000040;
  
  piVar5 = *(int **)(unaff_RBP + 0x100);
  cVar2 = (char)unaff_RSI;
  fVar9 = (float)unaff_RSI;
  if (((char)unaff_RBX[0x386] == cVar2) || ((int)unaff_RBX[0x42c] == 1)) {
    unaff_RDI[2] = fVar9;
    unaff_RDI[4] = fVar9;
  }
  else if (-1 < **(int **)(unaff_RBP + 0x108)) {
    lVar4 = (int64_t)**(int **)(unaff_RBP + 0x108) * 0xa60;
    lVar3 = *(int64_t *)(lVar4 + 0x30c0 + unaff_RBX[0x291]);
    lVar1 = *(int64_t *)(*unaff_RBX + 0x20);
    fVar10 = *(float *)(lVar3 + 0x10) - *(float *)(lVar1 + 0x10);
    fVar8 = *(float *)(lVar3 + 0xc) - *(float *)(lVar1 + 0xc);
    fVar7 = *(float *)(lVar3 + 0x14) - *(float *)(lVar1 + 0x14);
    unaff_XMM13_Da = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7);
    if (in_stack_00000040._4_1_ == '\0') {
      fVar7 = (float)func_0x0001805d8e00(unaff_RBX + 0x2c4,unaff_XMM13_Da);
      unaff_RDI[2] = fVar7;
      if (*(char *)((int64_t)unaff_RBX + 0x13bd) != cVar2) {
        unaff_RDI[2] = fVar7 * in_XMM5_Da;
        *(char *)((int64_t)unaff_RBX + 0x13bd) = cVar2;
      }
      lVar3 = *unaff_RBX;
      if ((((int)fVar9 <= *(int *)(lVar4 + 0x3604 + unaff_RBX[0x291])) &&
          (lVar1 = *(int64_t *)(lVar4 + 0x30c0 + unaff_RBX[0x291]),
          fVar7 = *(float *)(*(int64_t *)(lVar3 + 0x20) + 0x8c),
          fVar7 * fVar7 * 0.25 <
          *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x24) +
          *(float *)(lVar1 + 0x28) * *(float *)(lVar1 + 0x28) +
          *(float *)(lVar1 + 0x2c) * *(float *)(lVar1 + 0x2c))) &&
         (*(int *)((int64_t)unaff_RBX + 0x215c) == 2)) {
        unaff_RDI[2] = unaff_RDI[2] * 1.5;
        lVar3 = *unaff_RBX;
      }
      if ((unaff_R14B == '\0') && (*(int *)(*(int64_t *)(lVar3 + 0x8f8) + 0x9e0) == 4)) {
        unaff_RDI[2] = unaff_RDI[2] * unaff_XMM6_Da;
        lVar3 = *unaff_RBX;
      }
      if ((((int)fVar9 <= *piVar5) && (*(float *)(unaff_RBX + 6) < unaff_XMM13_Da)) &&
         (fVar9 = *(float *)(*(int64_t *)(lVar3 + 0x20) + 0x84), in_XMM5_Da < fVar9)) {
        fVar9 = unaff_XMM14_Da / fVar9;
        fVar9 = (fVar9 * unaff_XMM12_Da) / ((unaff_XMM13_Da - *(float *)(unaff_RBX + 6)) * fVar9);
        if ((unaff_XMM15_Da <= fVar9) && (unaff_XMM15_Da = fVar9, unaff_XMM14_Da <= fVar9)) {
          unaff_XMM15_Da = unaff_XMM14_Da;
        }
        unaff_RDI[2] = unaff_XMM15_Da * unaff_RDI[2];
        lVar3 = *unaff_RBX;
      }
      if (*(int *)(*(int64_t *)(lVar3 + 0x8f8) + 0x9e4) == 4) {
        plVar6 = (int64_t *)(*(int64_t *)(lVar3 + 0x8f8) + 0xd8);
        do {
          cVar2 = FUN_18058f970(plVar6 + -0x1a);
          if ((cVar2 != '\0') &&
             ((*(byte *)((int64_t)(int)plVar6[4] * 0xa0 + 0x50 + *plVar6) & 0x12) == 2))
          goto LAB_1805c2964;
          unaff_RSI = unaff_RSI + 1;
          plVar6 = plVar6 + 0x3f;
        } while (unaff_RSI < 4);
        unaff_RDI[2] = unaff_RDI[2] * 0.01;
      }
    }
    else {
      fVar9 = (float)func_0x0001805d8e00(unaff_RBX + 0x2c9,unaff_XMM13_Da);
      unaff_RDI[4] = fVar9;
      if (*(int *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e4) == 4) {
        plVar6 = (int64_t *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0xd8);
        do {
          cVar2 = FUN_18058f970(plVar6 + -0x1a);
          if ((cVar2 != '\0') &&
             ((*(byte *)((int64_t)(int)plVar6[4] * 0xa0 + 0x50 + *plVar6) & 0x12) == 2))
          goto LAB_1805c2964;
          unaff_RSI = unaff_RSI + 1;
          plVar6 = plVar6 + 0x3f;
        } while (unaff_RSI < 4);
        unaff_RDI[4] = extraout_XMM0_Da * 0.01;
      }
    }
    goto LAB_1805c2964;
  }
  if ((unaff_R12B != '\0') && (cVar2 = func_0x000180522f60(*unaff_RBX), cVar2 == '\0')) {
    unaff_XMM12_Da = 1000.0;
    *unaff_RDI = 1000.0;
  }
LAB_1805c2964:
  if (((((*(uint *)(*unaff_RBX + 0x56c) & 0x200) != 0) && ((char)unaff_RBX[0x29b] != '\0')) &&
      ((*(byte *)(unaff_RBX + 0x413) & 3) == 0)) &&
     ((*(byte *)((int64_t)unaff_RBX + 0x209c) & 1) == 0)) {
    lVar3 = *(int64_t *)(*unaff_RBX + 0x20);
    fVar9 = *(float *)((int64_t)unaff_RBX + 0x15fc);
    fVar7 = *(float *)(unaff_RBX + 0x2c0);
    fVar8 = *(float *)(lVar3 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
    fVar10 = *(float *)(lVar3 + 0x10) - *(float *)((int64_t)unaff_RBX + 0x150c);
    fVar8 = SQRT(fVar8 * fVar8 + fVar10 * fVar10);
    if (fVar9 < fVar8) {
      fVar7 = ((*(float *)(unaff_RBX + 0x2c1) - fVar7) * (fVar8 - fVar9)) /
              (*(float *)((int64_t)unaff_RBX + 0x1604) - fVar9) + fVar7;
      if (fVar7 <= 0.0001) {
        fVar7 = 0.0001;
      }
    }
    else {
      fVar7 = ((fVar7 - *(float *)(unaff_RBX + 0x2bf)) * fVar8) / fVar9 +
              *(float *)(unaff_RBX + 0x2bf);
    }
    *unaff_RDI = fVar7;
  }
  fVar9 = unaff_XMM12_Da;
  if (((char)unaff_RBX[0x386] != '\0') && (fVar9 = unaff_XMM13_Da, unaff_XMM12_Da <= unaff_XMM13_Da)
     ) {
    fVar9 = unaff_XMM12_Da;
  }
  if ((((int)unaff_RBX[0x403] == 1) || ((int)unaff_RBX[0x295] == 9)) &&
     ((*(int *)(*unaff_RBX + 0x564) < 0 && (-1 < *(int *)((int64_t)unaff_RBX + 0x172c))))) {
    lVar3 = (int64_t)*(int *)((int64_t)unaff_RBX + 0x172c) * 0xa60;
    if (*(int *)(lVar3 + 0x3608 + unaff_RBX[0x291]) == 1) {
      lVar1 = *(int64_t *)(*unaff_RBX + 0x20);
      lVar3 = *(int64_t *)(lVar3 + 0x30c0 + unaff_RBX[0x291]);
      fVar8 = *(float *)(lVar3 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar10 = *(float *)(lVar3 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar7 = *(float *)(lVar3 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar11 = *(float *)(lVar1 + 0x84) * 4.0;
      fVar7 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7);
      if ((fVar11 < fVar9) || ((fVar7 < fVar11 && (fVar7 < fVar9)))) {
        unaff_RDI[9] = 12.0 / (fVar7 * 0.15 + 1.2);
        *unaff_RDI = *unaff_RDI * unaff_XMM6_Da;
      }
    }
    else {
      *(int32_t *)((int64_t)unaff_RBX + 0x172c) = 0xffffffff;
    }
  }
  else if ((((int)unaff_RBX[0x403] == 2) && (*(int *)(*unaff_RBX + 0x564) != -1)) && (5.0 < fVar9))
  {
    unaff_RDI[10] = 1500.0;
  }
  unaff_RDI[*(uint *)(unaff_RBX + 0x295)] = unaff_RDI[*(uint *)(unaff_RBX + 0x295)] * 1.2;
  return;
}






