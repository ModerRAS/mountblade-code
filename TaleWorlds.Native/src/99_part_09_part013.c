#include "TaleWorlds.Native.Split.h"

// 99_part_09_part013.c - 6 个函数

// 函数: void FUN_1805c260a(void)
void FUN_1805c260a(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  char cVar4;
  longlong unaff_RSI;
  float *unaff_RDI;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  char unaff_R12B;
  float fVar8;
  undefined4 uVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  undefined8 in_stack_00000040;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  undefined4 uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined4 uStack000000000000006c;
  
  FUN_180487c70(unaff_RBX + 0x29e,2);
  fVar15 = -NAN;
  if ((int)unaff_RBX[0x2a6] < 2) {
    fVar11 = -NAN;
  }
  else {
    fVar11 = *(float *)(unaff_RBX + 0x2a2);
  }
  fVar13 = *(float *)(unaff_RBX + 0x2a1);
  fVar14 = *(float *)((longlong)unaff_RBX + 0x150c);
  lVar3 = FUN_180516f50(*unaff_RBX,&stack0x00000070);
  FUN_180487c70(lVar3,2);
  if (*(int *)(lVar3 + 0x40) < 2) {
    in_stack_00000058 = -NAN;
  }
  else {
    in_stack_00000058 = *(float *)(lVar3 + 0x20);
  }
  in_stack_00000050 = fVar13 - *(float *)(lVar3 + 0x18);
  fStack0000000000000054 = fVar14 - *(float *)(lVar3 + 0x1c);
  in_stack_00000058 = fVar11 - in_stack_00000058;
  uStack000000000000005c = 0x7f7fffff;
  fVar11 = (float)FUN_1801c24a0(&stack0x00000050);
  lVar3 = FUN_180516f50((longlong)**(int **)(unaff_RBP + 0x100) * 0xa60 + unaff_RBX[0x291] + 0x30a0,
                        &stack0x00000070);
  FUN_180487c70(lVar3,2);
  if (*(int *)(lVar3 + 0x40) < 2) {
    fVar13 = -NAN;
  }
  else {
    fVar13 = *(float *)(lVar3 + 0x20);
  }
  fVar14 = *(float *)(lVar3 + 0x18);
  fVar12 = *(float *)(lVar3 + 0x1c);
  lVar3 = FUN_180516f50(*unaff_RBX,unaff_RBP + -0x48);
  FUN_180487c70(lVar3,2);
  if (1 < *(int *)(lVar3 + 0x40)) {
    fVar15 = *(float *)(lVar3 + 0x20);
  }
  fVar14 = fVar14 - *(float *)(lVar3 + 0x18);
  fVar12 = fVar12 - *(float *)(lVar3 + 0x1c);
  uStack000000000000006c = 0x7f7fffff;
  in_stack_00000060 = fVar14;
  fStack0000000000000064 = fVar12;
  in_stack_00000068 = fVar13 - fVar15;
  fVar8 = (float)FUN_1801c24a0(&stack0x00000060);
  fVar10 = fStack0000000000000064 * fStack0000000000000054 + in_stack_00000060 * in_stack_00000050 +
           in_stack_00000068 * in_stack_00000058;
  if (fVar10 < -1.0) {
LAB_1805c280c:
    fVar11 = fVar8 * 2.0 + fVar11;
  }
  else {
    if (unaff_XMM14_Da <= fVar10) {
      fVar10 = unaff_XMM14_Da;
    }
    if (fVar10 < unaff_XMM11_Da) goto LAB_1805c280c;
    fVar10 = fVar10 * fVar8;
    if (fVar11 < fVar10) {
      fVar11 = fVar8 * 2.0 - fVar11;
    }
    else {
      fVar12 = fVar12 - fStack0000000000000054 * fVar10;
      fVar15 = (fVar13 - fVar15) - in_stack_00000058 * fVar10;
      fVar14 = fVar14 - in_stack_00000050 * fVar10;
      fVar11 = SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar15 * fVar15);
    }
  }
  fVar11 = (float)func_0x0001805d8e00((longlong)unaff_RBX + 0x1634,fVar11);
  unaff_RDI[3] = fVar11;
  fVar15 = (float)unaff_RSI;
  if (((int)unaff_RBX[0x295] == 3) && (*(float *)(unaff_RBX + 0x284) == fVar15)) {
    lVar3 = *(longlong *)(*unaff_RBX + 0x20);
    fVar11 = *(float *)(lVar3 + 0x200) * *(float *)(lVar3 + 0x200);
    if (*(float *)(lVar3 + 0x1fc) * *(float *)(lVar3 + 0x1fc) + fVar11 +
        *(float *)(lVar3 + 0x204) * *(float *)(lVar3 + 0x204) <
        *(float *)(lVar3 + 0x50) * *(float *)(lVar3 + 0x50) * 0.0625) goto LAB_1805c2880;
  }
  else {
LAB_1805c2880:
    uVar9 = FUN_18052ed30(fVar11,unaff_RBX + 0x29e);
    fVar11 = (float)func_0x0001805d8e00((longlong)unaff_RBX + 0x160c,uVar9);
    unaff_RDI[1] = fVar11;
  }
  fVar11 = 0.001;
  cVar2 = *(char *)(unaff_RBP + 0xf0);
  piVar6 = *(int **)(unaff_RBP + 0x100);
  cVar4 = (char)unaff_RSI;
  if (((char)unaff_RBX[0x386] == cVar4) || ((int)unaff_RBX[0x42c] == 1)) {
    unaff_RDI[2] = fVar15;
    unaff_RDI[4] = fVar15;
  }
  else if (-1 < **(int **)(unaff_RBP + 0x108)) {
    lVar5 = (longlong)**(int **)(unaff_RBP + 0x108) * 0xa60;
    lVar3 = *(longlong *)(lVar5 + 0x30c0 + unaff_RBX[0x291]);
    lVar1 = *(longlong *)(*unaff_RBX + 0x20);
    fVar12 = *(float *)(lVar3 + 0x10) - *(float *)(lVar1 + 0x10);
    fVar14 = *(float *)(lVar3 + 0xc) - *(float *)(lVar1 + 0xc);
    fVar13 = *(float *)(lVar3 + 0x14) - *(float *)(lVar1 + 0x14);
    unaff_XMM13_Da = SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13);
    if (in_stack_00000040._4_1_ == '\0') {
      fVar13 = (float)func_0x0001805d8e00(unaff_RBX + 0x2c4,unaff_XMM13_Da);
      unaff_RDI[2] = fVar13;
      if (*(char *)((longlong)unaff_RBX + 0x13bd) != cVar4) {
        unaff_RDI[2] = fVar13 * fVar11;
        *(char *)((longlong)unaff_RBX + 0x13bd) = cVar4;
      }
      lVar3 = *unaff_RBX;
      if ((((int)fVar15 <= *(int *)(lVar5 + 0x3604 + unaff_RBX[0x291])) &&
          (lVar1 = *(longlong *)(lVar5 + 0x30c0 + unaff_RBX[0x291]),
          fVar13 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x8c),
          fVar13 * fVar13 * 0.25 <
          *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x24) +
          *(float *)(lVar1 + 0x28) * *(float *)(lVar1 + 0x28) +
          *(float *)(lVar1 + 0x2c) * *(float *)(lVar1 + 0x2c))) &&
         (*(int *)((longlong)unaff_RBX + 0x215c) == 2)) {
        unaff_RDI[2] = unaff_RDI[2] * 1.5;
        lVar3 = *unaff_RBX;
      }
      if ((cVar2 == '\0') && (*(int *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e0) == 4)) {
        unaff_RDI[2] = unaff_RDI[2] * 0.5;
        lVar3 = *unaff_RBX;
      }
      if ((((int)fVar15 <= *piVar6) && (*(float *)(unaff_RBX + 6) < unaff_XMM13_Da)) &&
         (fVar15 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x84), fVar11 < fVar15)) {
        fVar15 = unaff_XMM14_Da / fVar15;
        fVar15 = (fVar15 * unaff_XMM12_Da) / ((unaff_XMM13_Da - *(float *)(unaff_RBX + 6)) * fVar15)
        ;
        if ((unaff_XMM15_Da <= fVar15) && (unaff_XMM15_Da = fVar15, unaff_XMM14_Da <= fVar15)) {
          unaff_XMM15_Da = unaff_XMM14_Da;
        }
        unaff_RDI[2] = unaff_XMM15_Da * unaff_RDI[2];
        lVar3 = *unaff_RBX;
      }
      if (*(int *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e4) == 4) {
        plVar7 = (longlong *)(*(longlong *)(lVar3 + 0x8f8) + 0xd8);
        do {
          cVar2 = FUN_18058f970(plVar7 + -0x1a);
          if ((cVar2 != '\0') &&
             ((*(byte *)((longlong)(int)plVar7[4] * 0xa0 + 0x50 + *plVar7) & 0x12) == 2))
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
      if (*(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e4) == 4) {
        plVar7 = (longlong *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0xd8);
        do {
          cVar2 = FUN_18058f970(plVar7 + -0x1a);
          if ((cVar2 != '\0') &&
             ((*(byte *)((longlong)(int)plVar7[4] * 0xa0 + 0x50 + *plVar7) & 0x12) == 2))
          goto LAB_1805c2964;
          unaff_RSI = unaff_RSI + 1;
          plVar7 = plVar7 + 0x3f;
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
     ((*(byte *)((longlong)unaff_RBX + 0x209c) & 1) == 0)) {
    lVar3 = *(longlong *)(*unaff_RBX + 0x20);
    fVar15 = *(float *)((longlong)unaff_RBX + 0x15fc);
    fVar11 = *(float *)(unaff_RBX + 0x2c0);
    fVar13 = *(float *)(lVar3 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
    fVar14 = *(float *)(lVar3 + 0x10) - *(float *)((longlong)unaff_RBX + 0x150c);
    fVar13 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
    if (fVar15 < fVar13) {
      fVar11 = ((*(float *)(unaff_RBX + 0x2c1) - fVar11) * (fVar13 - fVar15)) /
               (*(float *)((longlong)unaff_RBX + 0x1604) - fVar15) + fVar11;
      if (fVar11 <= 0.0001) {
        fVar11 = 0.0001;
      }
    }
    else {
      fVar11 = ((fVar11 - *(float *)(unaff_RBX + 0x2bf)) * fVar13) / fVar15 +
               *(float *)(unaff_RBX + 0x2bf);
    }
    *unaff_RDI = fVar11;
  }
  fVar15 = unaff_XMM12_Da;
  if (((char)unaff_RBX[0x386] != '\0') &&
     (fVar15 = unaff_XMM13_Da, unaff_XMM12_Da <= unaff_XMM13_Da)) {
    fVar15 = unaff_XMM12_Da;
  }
  if ((((int)unaff_RBX[0x403] == 1) || ((int)unaff_RBX[0x295] == 9)) &&
     ((*(int *)(*unaff_RBX + 0x564) < 0 && (-1 < *(int *)((longlong)unaff_RBX + 0x172c))))) {
    lVar3 = (longlong)*(int *)((longlong)unaff_RBX + 0x172c) * 0xa60;
    if (*(int *)(lVar3 + 0x3608 + unaff_RBX[0x291]) == 1) {
      lVar1 = *(longlong *)(*unaff_RBX + 0x20);
      lVar3 = *(longlong *)(lVar3 + 0x30c0 + unaff_RBX[0x291]);
      fVar13 = *(float *)(lVar3 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar14 = *(float *)(lVar3 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar11 = *(float *)(lVar3 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar12 = *(float *)(lVar1 + 0x84) * 4.0;
      fVar11 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11);
      if ((fVar12 < fVar15) || ((fVar11 < fVar12 && (fVar11 < fVar15)))) {
        unaff_RDI[9] = 12.0 / (fVar11 * 0.15 + 1.2);
        *unaff_RDI = *unaff_RDI * 0.5;
      }
    }
    else {
      *(undefined4 *)((longlong)unaff_RBX + 0x172c) = 0xffffffff;
    }
  }
  else if ((((int)unaff_RBX[0x403] == 2) && (*(int *)(*unaff_RBX + 0x564) != -1)) && (5.0 < fVar15))
  {
    unaff_RDI[10] = 1500.0;
  }
  unaff_RDI[*(uint *)(unaff_RBX + 0x295)] = unaff_RDI[*(uint *)(unaff_RBX + 0x295)] * 1.2;
  return;
}






// 函数: void FUN_1805c28b4(void)
void FUN_1805c28b4(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  char cVar4;
  longlong unaff_RSI;
  float *unaff_RDI;
  longlong lVar5;
  int *in_R10;
  longlong *plVar6;
  char unaff_R12B;
  char unaff_R13B;
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
  
  cVar2 = *(char *)(unaff_RBP + 0xf0);
  fVar9 = (float)unaff_RSI;
  unaff_RDI[1] = fVar9;
  unaff_RDI[3] = fVar9;
  cVar4 = (char)unaff_RSI;
  if (((char)unaff_RBX[0x386] == cVar4) || ((int)unaff_RBX[0x42c] == 1)) {
    unaff_RDI[2] = fVar9;
    unaff_RDI[4] = fVar9;
  }
  else if (-1 < **(int **)(unaff_RBP + 0x108)) {
    lVar5 = (longlong)**(int **)(unaff_RBP + 0x108) * 0xa60;
    lVar3 = *(longlong *)(lVar5 + 0x30c0 + unaff_RBX[0x291]);
    lVar1 = *(longlong *)(*unaff_RBX + 0x20);
    fVar10 = *(float *)(lVar3 + 0x10) - *(float *)(lVar1 + 0x10);
    fVar8 = *(float *)(lVar3 + 0xc) - *(float *)(lVar1 + 0xc);
    fVar7 = *(float *)(lVar3 + 0x14) - *(float *)(lVar1 + 0x14);
    unaff_XMM13_Da = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7);
    if (unaff_R13B == '\0') {
      fVar7 = (float)func_0x0001805d8e00(unaff_RBX + 0x2c4,unaff_XMM13_Da);
      unaff_RDI[2] = fVar7;
      if (*(char *)((longlong)unaff_RBX + 0x13bd) != cVar4) {
        unaff_RDI[2] = fVar7 * in_XMM5_Da;
        *(char *)((longlong)unaff_RBX + 0x13bd) = cVar4;
      }
      lVar3 = *unaff_RBX;
      if ((((int)fVar9 <= *(int *)(lVar5 + 0x3604 + unaff_RBX[0x291])) &&
          (lVar1 = *(longlong *)(lVar5 + 0x30c0 + unaff_RBX[0x291]),
          fVar7 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x8c),
          fVar7 * fVar7 * 0.25 <
          *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x24) +
          *(float *)(lVar1 + 0x28) * *(float *)(lVar1 + 0x28) +
          *(float *)(lVar1 + 0x2c) * *(float *)(lVar1 + 0x2c))) &&
         (*(int *)((longlong)unaff_RBX + 0x215c) == 2)) {
        unaff_RDI[2] = unaff_RDI[2] * 1.5;
        lVar3 = *unaff_RBX;
      }
      if ((cVar2 == '\0') && (*(int *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e0) == 4)) {
        unaff_RDI[2] = unaff_RDI[2] * unaff_XMM6_Da;
        lVar3 = *unaff_RBX;
      }
      if ((((int)fVar9 <= *in_R10) && (*(float *)(unaff_RBX + 6) < unaff_XMM13_Da)) &&
         (fVar9 = *(float *)(*(longlong *)(lVar3 + 0x20) + 0x84), in_XMM5_Da < fVar9)) {
        fVar9 = unaff_XMM14_Da / fVar9;
        fVar9 = (fVar9 * unaff_XMM12_Da) / ((unaff_XMM13_Da - *(float *)(unaff_RBX + 6)) * fVar9);
        if ((unaff_XMM15_Da <= fVar9) && (unaff_XMM15_Da = fVar9, unaff_XMM14_Da <= fVar9)) {
          unaff_XMM15_Da = unaff_XMM14_Da;
        }
        unaff_RDI[2] = unaff_XMM15_Da * unaff_RDI[2];
        lVar3 = *unaff_RBX;
      }
      if (*(int *)(*(longlong *)(lVar3 + 0x8f8) + 0x9e4) == 4) {
        plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x8f8) + 0xd8);
        do {
          cVar2 = FUN_18058f970(plVar6 + -0x1a);
          if ((cVar2 != '\0') &&
             ((*(byte *)((longlong)(int)plVar6[4] * 0xa0 + 0x50 + *plVar6) & 0x12) == 2))
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
      if (*(int *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0x9e4) == 4) {
        plVar6 = (longlong *)(*(longlong *)(*unaff_RBX + 0x8f8) + 0xd8);
        do {
          cVar2 = FUN_18058f970(plVar6 + -0x1a);
          if ((cVar2 != '\0') &&
             ((*(byte *)((longlong)(int)plVar6[4] * 0xa0 + 0x50 + *plVar6) & 0x12) == 2))
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
     ((*(byte *)((longlong)unaff_RBX + 0x209c) & 1) == 0)) {
    lVar3 = *(longlong *)(*unaff_RBX + 0x20);
    fVar9 = *(float *)((longlong)unaff_RBX + 0x15fc);
    fVar7 = *(float *)(unaff_RBX + 0x2c0);
    fVar8 = *(float *)(lVar3 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
    fVar10 = *(float *)(lVar3 + 0x10) - *(float *)((longlong)unaff_RBX + 0x150c);
    fVar8 = SQRT(fVar8 * fVar8 + fVar10 * fVar10);
    if (fVar9 < fVar8) {
      fVar7 = ((*(float *)(unaff_RBX + 0x2c1) - fVar7) * (fVar8 - fVar9)) /
              (*(float *)((longlong)unaff_RBX + 0x1604) - fVar9) + fVar7;
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
     ((*(int *)(*unaff_RBX + 0x564) < 0 && (-1 < *(int *)((longlong)unaff_RBX + 0x172c))))) {
    lVar3 = (longlong)*(int *)((longlong)unaff_RBX + 0x172c) * 0xa60;
    if (*(int *)(lVar3 + 0x3608 + unaff_RBX[0x291]) == 1) {
      lVar1 = *(longlong *)(*unaff_RBX + 0x20);
      lVar3 = *(longlong *)(lVar3 + 0x30c0 + unaff_RBX[0x291]);
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
      *(undefined4 *)((longlong)unaff_RBX + 0x172c) = 0xffffffff;
    }
  }
  else if ((((int)unaff_RBX[0x403] == 2) && (*(int *)(*unaff_RBX + 0x564) != -1)) && (5.0 < fVar9))
  {
    unaff_RDI[10] = 1500.0;
  }
  unaff_RDI[*(uint *)(unaff_RBX + 0x295)] = unaff_RDI[*(uint *)(unaff_RBX + 0x295)] * 1.2;
  return;
}






// 函数: void FUN_1805c296d(void)
void FUN_1805c296d(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  float *unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM6_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar7;
  
  if (((((*(uint *)(*unaff_RBX + 0x56c) & 0x200) != 0) && ((char)unaff_RBX[0x29b] != '\0')) &&
      ((*(byte *)(unaff_RBX + 0x413) & 3) == 0)) &&
     ((*(byte *)((longlong)unaff_RBX + 0x209c) & 1) == 0)) {
    lVar2 = *(longlong *)(*unaff_RBX + 0x20);
    fVar7 = *(float *)((longlong)unaff_RBX + 0x15fc);
    fVar5 = *(float *)(unaff_RBX + 0x2c0);
    fVar3 = *(float *)(lVar2 + 0xc) - *(float *)(unaff_RBX + 0x2a1);
    fVar4 = *(float *)(lVar2 + 0x10) - *(float *)((longlong)unaff_RBX + 0x150c);
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    if (fVar7 < fVar3) {
      fVar5 = ((*(float *)(unaff_RBX + 0x2c1) - fVar5) * (fVar3 - fVar7)) /
              (*(float *)((longlong)unaff_RBX + 0x1604) - fVar7) + fVar5;
      if (fVar5 <= 0.0001) {
        fVar5 = 0.0001;
      }
    }
    else {
      fVar5 = ((fVar5 - *(float *)(unaff_RBX + 0x2bf)) * fVar3) / fVar7 +
              *(float *)(unaff_RBX + 0x2bf);
    }
    *unaff_RDI = fVar5;
  }
  fVar7 = unaff_XMM12_Da;
  if (((char)unaff_RBX[0x386] != '\0') && (fVar7 = unaff_XMM13_Da, unaff_XMM12_Da <= unaff_XMM13_Da)
     ) {
    fVar7 = unaff_XMM12_Da;
  }
  if ((((int)unaff_RBX[0x403] == 1) || ((int)unaff_RBX[0x295] == 9)) &&
     ((*(int *)(*unaff_RBX + 0x564) < 0 && (-1 < *(int *)((longlong)unaff_RBX + 0x172c))))) {
    lVar2 = (longlong)*(int *)((longlong)unaff_RBX + 0x172c) * 0xa60;
    if (*(int *)(lVar2 + 0x3608 + unaff_RBX[0x291]) == 1) {
      lVar1 = *(longlong *)(*unaff_RBX + 0x20);
      lVar2 = *(longlong *)(lVar2 + 0x30c0 + unaff_RBX[0x291]);
      fVar3 = *(float *)(lVar2 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar4 = *(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar5 = *(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar6 = *(float *)(lVar1 + 0x84) * 4.0;
      fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
      if ((fVar6 < fVar7) || ((fVar5 < fVar6 && (fVar5 < fVar7)))) {
        unaff_RDI[9] = 12.0 / (fVar5 * 0.15 + 1.2);
        *unaff_RDI = *unaff_RDI * unaff_XMM6_Da;
      }
    }
    else {
      *(undefined4 *)((longlong)unaff_RBX + 0x172c) = 0xffffffff;
    }
  }
  else if ((((int)unaff_RBX[0x403] == 2) && (*(int *)(*unaff_RBX + 0x564) != -1)) && (5.0 < fVar7))
  {
    unaff_RDI[10] = 1500.0;
  }
  unaff_RDI[*(uint *)(unaff_RBX + 0x295)] = unaff_RDI[*(uint *)(unaff_RBX + 0x295)] * 1.2;
  return;
}






// 函数: void FUN_1805c29c2(void)
void FUN_1805c29c2(void)

{
  longlong lVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong *unaff_RBX;
  float *unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM6_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar7;
  
  if ((((char)unaff_RBX[0x29b] != '\0') && ((*(byte *)(unaff_RBX + 0x413) & 3) == 0)) &&
     ((*(byte *)((longlong)unaff_RBX + 0x209c) & 1) == 0)) {
    fVar7 = *(float *)((longlong)unaff_RBX + 0x15fc);
    fVar5 = *(float *)(unaff_RBX + 0x2c0);
    fVar3 = *(float *)(*(longlong *)(in_RAX + 0x20) + 0xc) - *(float *)(unaff_RBX + 0x2a1);
    fVar4 = *(float *)(*(longlong *)(in_RAX + 0x20) + 0x10) -
            *(float *)((longlong)unaff_RBX + 0x150c);
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    if (fVar7 < fVar3) {
      fVar5 = ((*(float *)(unaff_RBX + 0x2c1) - fVar5) * (fVar3 - fVar7)) /
              (*(float *)((longlong)unaff_RBX + 0x1604) - fVar7) + fVar5;
      if (fVar5 <= 0.0001) {
        fVar5 = 0.0001;
      }
    }
    else {
      fVar5 = ((fVar5 - *(float *)(unaff_RBX + 0x2bf)) * fVar3) / fVar7 +
              *(float *)(unaff_RBX + 0x2bf);
    }
    *unaff_RDI = fVar5;
  }
  fVar7 = unaff_XMM12_Da;
  if (((char)unaff_RBX[0x386] != '\0') && (fVar7 = unaff_XMM13_Da, unaff_XMM12_Da <= unaff_XMM13_Da)
     ) {
    fVar7 = unaff_XMM12_Da;
  }
  if ((((int)unaff_RBX[0x403] == 1) || ((int)unaff_RBX[0x295] == 9)) &&
     ((*(int *)(*unaff_RBX + 0x564) < 0 && (-1 < *(int *)((longlong)unaff_RBX + 0x172c))))) {
    lVar2 = (longlong)*(int *)((longlong)unaff_RBX + 0x172c) * 0xa60;
    if (*(int *)(lVar2 + 0x3608 + unaff_RBX[0x291]) == 1) {
      lVar1 = *(longlong *)(*unaff_RBX + 0x20);
      lVar2 = *(longlong *)(lVar2 + 0x30c0 + unaff_RBX[0x291]);
      fVar3 = *(float *)(lVar2 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar4 = *(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar5 = *(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar6 = *(float *)(lVar1 + 0x84) * 4.0;
      fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
      if ((fVar6 < fVar7) || ((fVar5 < fVar6 && (fVar5 < fVar7)))) {
        unaff_RDI[9] = 12.0 / (fVar5 * 0.15 + 1.2);
        *unaff_RDI = *unaff_RDI * unaff_XMM6_Da;
      }
    }
    else {
      *(undefined4 *)((longlong)unaff_RBX + 0x172c) = 0xffffffff;
    }
  }
  else if ((((int)unaff_RBX[0x403] == 2) && (*(int *)(*unaff_RBX + 0x564) != -1)) && (5.0 < fVar7))
  {
    unaff_RDI[10] = 1500.0;
  }
  unaff_RDI[*(uint *)(unaff_RBX + 0x295)] = unaff_RDI[*(uint *)(unaff_RBX + 0x295)] * 1.2;
  return;
}






// 函数: void FUN_1805c2ab0(void)
void FUN_1805c2ab0(void)

{
  longlong lVar1;
  int in_EAX;
  longlong lVar2;
  longlong *unaff_RBX;
  float *unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM4_Da;
  float unaff_XMM6_Da;
  float unaff_XMM13_Da;
  
  if ((((int)unaff_RBX[0x295] == 9) && (*(int *)(*unaff_RBX + 0x564) < 0)) &&
     (-1 < *(int *)((longlong)unaff_RBX + 0x172c))) {
    lVar2 = (longlong)*(int *)((longlong)unaff_RBX + 0x172c) * 0xa60;
    if (*(int *)(lVar2 + 0x3608 + unaff_RBX[0x291]) == 1) {
      lVar1 = *(longlong *)(*unaff_RBX + 0x20);
      lVar2 = *(longlong *)(lVar2 + 0x30c0 + unaff_RBX[0x291]);
      fVar4 = *(float *)(lVar2 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar5 = *(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar3 = *(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar6 = *(float *)(lVar1 + 0x84) * 4.0;
      fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if ((fVar6 < unaff_XMM13_Da) || ((fVar3 < fVar6 && (fVar3 < unaff_XMM13_Da)))) {
        unaff_RDI[9] = 12.0 / (fVar3 * 0.15 + in_XMM4_Da);
        *unaff_RDI = *unaff_RDI * unaff_XMM6_Da;
      }
    }
    else {
      *(undefined4 *)((longlong)unaff_RBX + 0x172c) = 0xffffffff;
    }
  }
  else if (((in_EAX == 2) && (*(int *)(*unaff_RBX + 0x564) != -1)) && (5.0 < unaff_XMM13_Da)) {
    unaff_RDI[10] = 1500.0;
  }
  unaff_RDI[*(uint *)(unaff_RBX + 0x295)] = unaff_RDI[*(uint *)(unaff_RBX + 0x295)] * in_XMM4_Da;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805c2bf0(longlong *param_1)
void FUN_1805c2bf0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [32];
  undefined8 *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float afStack_80 [12];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  fVar9 = 0.0;
  fVar11 = 0.0;
  fVar10 = 0.0;
  uStack_88 = 0xffffffffffffffff;
  uVar12 = 0;
  uStack_90 = 0xffffffffffffffff;
  afStack_80[8] = 0.0;
  afStack_80[9] = 0.0;
  afStack_80[10] = 0.0;
  uStack_98 = 0xffffffff00000000;
  afStack_80[0] = 0.0;
  afStack_80[1] = 0.0;
  afStack_80[2] = 0.0;
  afStack_80[3] = 0.0;
  afStack_80[4] = 0.0;
  afStack_80[5] = 0.0;
  afStack_80[6] = 0.0;
  afStack_80[7] = 0.0;
  if ((*(byte *)(*param_1 + 0x56c) & 8) == 0) {
    func_0x0001805b7780();
    if (((*(uint *)((longlong)param_1 + 0x209c) >> 0xb & 1) == 0) &&
       ((*(uint *)(*param_1 + 0x56c) & 0x200000) != 0)) {
      FUN_1805baa20(param_1);
    }
    if ((*(uint *)(param_1 + 0x413) & 1) == 0) {
      lVar4 = *param_1;
      if ((((*(int *)(lVar4 + 0x920) == 1) && ((*(byte *)(lVar4 + 0x56c) & 1) != 0)) &&
          (fVar9 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar4 + 0x6c0) * 8) -
                          *(longlong *)(lVar4 + 0x6b8)) * 1e-05)) ||
         ((((*(byte *)((longlong)param_1 + 0x1484) & 2) != 0 &&
           ((*(byte *)(lVar4 + 0x56c) & 1) != 0)) &&
          (fVar9 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar4 + 0x6c0) * 8) -
                          *(longlong *)(lVar4 + 0x6b8)) * 1e-05)))) {
        afStack_80[8] = 100000.0;
        fVar9 = 100000.0;
      }
      else {
        afStack_80[0] = 1000.0;
      }
      goto LAB_1805c2e62;
    }
    if (((*(uint *)(param_1 + 0x413) & 0x20) != 0) && (*(int *)(*param_1 + 0x564) != -1)) {
      afStack_80[10] = 10000.0;
      fVar10 = 10000.0;
      goto LAB_1805c2e62;
    }
  }
  else {
    if ((*(uint *)((longlong)param_1 + 0x1484) & 2) != 0) {
      puStack_a8 = &uStack_98;
      FUN_1805c16a0(0,afStack_80,&uStack_88,&uStack_90);
      fVar9 = afStack_80[8];
      fVar10 = afStack_80[10];
      fVar11 = afStack_80[9];
      uVar12 = (undefined4)uStack_98;
      goto LAB_1805c2e62;
    }
    if ((*(uint *)((longlong)param_1 + 0x1484) & 1) == 0) {
      uVar6 = *(uint *)(param_1 + 0x413);
      if ((uVar6 >> 8 & 1) == 0) {
        if ((uVar6 & 1) == 0) {
          uVar6 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar6 = uVar6 >> 0x11 ^ uVar6;
          uVar6 = uVar6 << 5 ^ uVar6;
          *(uint *)(param_1 + 0x272) = uVar6;
          afStack_80[0] = (float)(uVar6 - 1) * 3.4924598e-11 + 0.3;
          afStack_80[1] = 0.0;
          goto LAB_1805c2e62;
        }
        if (((uVar6 & 0x20) != 0) && (*(int *)(*param_1 + 0x564) != -1)) {
          afStack_80[10] = 10000.0;
          fVar10 = 10000.0;
          goto LAB_1805c2e62;
        }
      }
      afStack_80[0] = 10.0;
      afStack_80[1] = 0.0;
      goto LAB_1805c2e62;
    }
  }
  afStack_80[0] = 10000.0;
LAB_1805c2e62:
  lVar4 = param_1[0x295];
  puStack_a8 = (undefined8 *)CONCAT44(puStack_a8._4_4_,uVar12);
  uVar6 = 2;
  if (afStack_80[2] < afStack_80[afStack_80[0] < afStack_80[1]] ||
      afStack_80[2] == afStack_80[afStack_80[0] < afStack_80[1]]) {
    uVar6 = (uint)(afStack_80[0] < afStack_80[1]);
  }
  uVar7 = 3;
  if (afStack_80[3] < afStack_80[uVar6] || afStack_80[3] == afStack_80[uVar6]) {
    uVar7 = (ulonglong)uVar6;
  }
  uVar6 = 4;
  if (afStack_80[4] < afStack_80[uVar7] || afStack_80[4] == afStack_80[uVar7]) {
    uVar6 = (uint)uVar7;
  }
  uVar5 = 5;
  if (afStack_80[5] < afStack_80[uVar6] || afStack_80[5] == afStack_80[uVar6]) {
    uVar5 = uVar6;
  }
  uVar6 = 6;
  if (afStack_80[6] < afStack_80[uVar5] || afStack_80[6] == afStack_80[uVar5]) {
    uVar6 = uVar5;
  }
  uVar5 = 7;
  if (afStack_80[7] < afStack_80[uVar6] || afStack_80[7] == afStack_80[uVar6]) {
    uVar5 = uVar6;
  }
  uVar6 = 8;
  if (fVar9 < afStack_80[uVar5] || fVar9 == afStack_80[uVar5]) {
    uVar6 = uVar5;
  }
  uVar7 = 9;
  if (fVar11 < afStack_80[uVar6] || fVar11 == afStack_80[uVar6]) {
    uVar7 = (ulonglong)uVar6;
  }
  uVar8 = 10;
  if (fVar10 < afStack_80[uVar7] || fVar10 == afStack_80[uVar7]) {
    uVar8 = uVar7;
  }
  FUN_1805c2ff0(param_1,uVar8,&uStack_88,&uStack_90);
  if (((int)uVar8 == 0) && ((*(byte *)((longlong)param_1 + 0x1484) & 0x80) != 0)) {
    plVar2 = (longlong *)param_1[0x33];
    *(undefined4 *)((longlong)param_1 + 0x12dc) = 0xffffffff;
    lVar3 = *(longlong *)(*plVar2 + 0x8d8);
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
    if (((*(uint *)((longlong)plVar2 + 0x1484) >> 6 & 1) != 0) && ((int)plVar2[0x295] != 0)) {
      iVar1 = (int)plVar2[0x426];
      if (((-1 < iVar1) && (iVar1 < *(int *)(lVar3 + 0x52ed94))) &&
         ((short)uVar8 <= *(short *)(lVar3 + 0x52dda0 + (longlong)iVar1 * 2))) {
        *(undefined4 *)((longlong)param_1 + 0x18c) = 1;
        *(int *)((longlong)param_1 + 0x12dc) = (int)plVar2[0x426];
      }
    }
  }
  if ((int)param_1[0x295] != (int)lVar4) {
    *(undefined4 *)(param_1 + 0x285) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




