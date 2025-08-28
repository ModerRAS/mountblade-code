#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part115.c - 9 个函数
// 函数: void function_127d80(void)
void function_127d80(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_RAX;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t unaff_RBP;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t unaff_RDI;
  int64_t lVar11;
  int64_t lVar12;
  int64_t in_R10;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fStackX_8;
  float fStackX_c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fVar4;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  lVar9 = 0;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  lVar13 = *(int64_t *)(in_R10 + 0x1b78);
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  if (lVar13 == 0) {
    lVar13 = 0;
    lVar5 = lVar9;
  }
  else {
    lVar5 = *(int64_t *)(lVar13 + 0x28);
    *(uint64_t *)(lVar13 + 0x28) = *(uint64_t *)(in_R10 + 0x1c80);
    lVar13 = *(int64_t *)(in_R10 + 0x1b78);
  }
  lVar7 = lVar9;
  if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0xc) & 0x200) == 0)) {
    lVar7 = lVar13;
  }
  fVar1 = *(float *)(in_R10 + 0x167c);
  fVar2 = *(float *)(in_R10 + 0x1680);
  fStack0000000000000070 = *(float *)(in_R10 + 0x167c);
  fStack0000000000000074 = *(float *)(in_R10 + 0x1680);
  if (*(char *)(in_R10 + 0xcb) != '\0') {
    fStack0000000000000070 = fVar1;
    if (fVar1 <= 4.0) {
      fStack0000000000000070 = 4.0;
    }
    fStack0000000000000074 = fVar2;
    if (fVar2 <= 4.0) {
      fStack0000000000000074 = 4.0;
    }
  }
  lVar11 = lVar9;
  if (0 < *(int *)(in_R10 + 0x1aa0)) {
    lVar8 = (int64_t)*(int *)(in_R10 + 0x1aa0) + -1;
    plVar10 = (int64_t *)(*(int64_t *)(in_R10 + 0x1aa8) + lVar8 * 8);
    lVar12 = lVar7;
    do {
      lVar6 = *plVar10;
      lVar7 = lVar12;
      if ((((*(char *)(lVar6 + 0xaf) != '\0') && (*(char *)(lVar6 + 0xb6) == '\0')) &&
          ((*(uint *)(lVar6 + 0xc) >> 9 & 1) == 0)) &&
         (*(int64_t *)(lVar6 + 0x28) == *(int64_t *)(in_R10 + 0x1c80))) {
        fStackX_8 = (float)*(uint64_t *)(lVar6 + 0x240);
        fStackX_c = (float)((uint64_t)*(uint64_t *)(lVar6 + 0x240) >> 0x20);
        fVar3 = fVar1;
        fVar4 = fVar2;
        if ((*(uint *)(lVar6 + 0xc) & 0x1000002) == 0) {
          fVar3 = fStack0000000000000070;
          fVar4 = fStack0000000000000074;
        }
        fVar15 = *(float *)(in_R10 + 0x118);
        if ((((float)*(uint64_t *)(lVar6 + 0x238) - fVar3 <= fVar15) &&
            (fVar14 = *(float *)(in_R10 + 0x11c),
            (float)((uint64_t)*(uint64_t *)(lVar6 + 0x238) >> 0x20) - fVar4 <= fVar14)) &&
           ((fVar15 < fStackX_8 + fVar3 && (fVar14 < fStackX_c + fVar4)))) {
          if (*(short *)(lVar6 + 0x268) != 0) {
            fVar15 = fVar15 - *(float *)(lVar6 + 0x40);
            fVar14 = fVar14 - *(float *)(lVar6 + 0x44);
            if ((((float)(int)*(short *)(lVar6 + 0x26c) <= fVar15) &&
                ((float)(int)*(short *)(lVar6 + 0x26e) <= fVar14)) &&
               ((fVar15 < (float)((int)*(short *)(lVar6 + 0x268) + (int)*(short *)(lVar6 + 0x26c))
                && (fVar14 < (float)((int)*(short *)(lVar6 + 0x26a) + (int)*(short *)(lVar6 + 0x26e)
                                    ))))) goto LAB_180127fd0;
          }
          lVar7 = lVar6;
          if (lVar12 != 0) {
            lVar7 = lVar12;
          }
          if ((lVar11 == 0) &&
             ((lVar13 == 0 || (*(int64_t *)(lVar6 + 0x3a0) != *(int64_t *)(lVar13 + 0x3a0))))) {
            lVar11 = lVar6;
          }
          if ((lVar7 != 0) && (lVar11 != 0)) break;
        }
      }
LAB_180127fd0:
      plVar10 = plVar10 + -1;
      lVar8 = lVar8 + -1;
      lVar12 = lVar7;
    } while (-1 < lVar8);
  }
  *(int64_t *)(in_R10 + 0x1b00) = lVar7;
  if (lVar7 != 0) {
    lVar9 = *(int64_t *)(lVar7 + 0x3a0);
  }
  *(int64_t *)(in_R10 + 0x1b08) = lVar9;
  *(int64_t *)(in_R10 + 0x1b10) = lVar11;
  if (lVar13 != 0) {
    *(int64_t *)(lVar13 + 0x28) = lVar5;
  }
  return;
}
// 函数: void function_127d8a(void)
void function_127d8a(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_RAX;
  int64_t lVar7;
  int64_t lVar8;
  int64_t unaff_RBP;
  int64_t *plVar9;
  char cVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t in_R10;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fStackX_8;
  float fStackX_c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fVar4;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  lVar13 = *(int64_t *)(in_R10 + 0x1b78);
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  if (lVar13 == 0) {
    lVar13 = 0;
    lVar5 = unaff_RBP;
  }
  else {
    lVar5 = *(int64_t *)(lVar13 + 0x28);
    *(uint64_t *)(lVar13 + 0x28) = *(uint64_t *)(in_R10 + 0x1c80);
    lVar13 = *(int64_t *)(in_R10 + 0x1b78);
  }
  lVar7 = unaff_RBP;
  if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0xc) & 0x200) == 0)) {
    lVar7 = lVar13;
  }
  fVar1 = *(float *)(in_R10 + 0x167c);
  fVar2 = *(float *)(in_R10 + 0x1680);
  fStack0000000000000070 = *(float *)(in_R10 + 0x167c);
  cVar10 = (char)unaff_RBP;
  fStack0000000000000074 = *(float *)(in_R10 + 0x1680);
  if (*(char *)(in_R10 + 0xcb) != cVar10) {
    fStack0000000000000070 = fVar1;
    if (fVar1 <= 4.0) {
      fStack0000000000000070 = 4.0;
    }
    fStack0000000000000074 = fVar2;
    if (fVar2 <= 4.0) {
      fStack0000000000000074 = 4.0;
    }
  }
  lVar11 = unaff_RBP;
  if (0 < *(int *)(in_R10 + 0x1aa0)) {
    lVar8 = (int64_t)*(int *)(in_R10 + 0x1aa0) + -1;
    plVar9 = (int64_t *)(*(int64_t *)(in_R10 + 0x1aa8) + lVar8 * 8);
    lVar12 = lVar7;
    do {
      lVar6 = *plVar9;
      lVar7 = lVar12;
      if ((((*(char *)(lVar6 + 0xaf) != cVar10) && (*(char *)(lVar6 + 0xb6) == cVar10)) &&
          ((*(uint *)(lVar6 + 0xc) >> 9 & 1) == 0)) &&
         (*(int64_t *)(lVar6 + 0x28) == *(int64_t *)(in_R10 + 0x1c80))) {
        fStackX_8 = (float)*(uint64_t *)(lVar6 + 0x240);
        fStackX_c = (float)((uint64_t)*(uint64_t *)(lVar6 + 0x240) >> 0x20);
        fVar3 = fVar1;
        fVar4 = fVar2;
        if ((*(uint *)(lVar6 + 0xc) & 0x1000002) == 0) {
          fVar3 = fStack0000000000000070;
          fVar4 = fStack0000000000000074;
        }
        fVar15 = *(float *)(in_R10 + 0x118);
        if ((((float)*(uint64_t *)(lVar6 + 0x238) - fVar3 <= fVar15) &&
            (fVar14 = *(float *)(in_R10 + 0x11c),
            (float)((uint64_t)*(uint64_t *)(lVar6 + 0x238) >> 0x20) - fVar4 <= fVar14)) &&
           ((fVar15 < fStackX_8 + fVar3 && (fVar14 < fStackX_c + fVar4)))) {
          if (*(short *)(lVar6 + 0x268) != 0) {
            fVar15 = fVar15 - *(float *)(lVar6 + 0x40);
            fVar14 = fVar14 - *(float *)(lVar6 + 0x44);
            if ((((float)(int)*(short *)(lVar6 + 0x26c) <= fVar15) &&
                ((float)(int)*(short *)(lVar6 + 0x26e) <= fVar14)) &&
               ((fVar15 < (float)((int)*(short *)(lVar6 + 0x268) + (int)*(short *)(lVar6 + 0x26c))
                && (fVar14 < (float)((int)*(short *)(lVar6 + 0x26a) + (int)*(short *)(lVar6 + 0x26e)
                                    ))))) goto LAB_180127fd0;
          }
          lVar7 = lVar6;
          if (lVar12 != 0) {
            lVar7 = lVar12;
          }
          if ((lVar11 == 0) &&
             ((lVar13 == 0 || (*(int64_t *)(lVar6 + 0x3a0) != *(int64_t *)(lVar13 + 0x3a0))))) {
            lVar11 = lVar6;
          }
          if ((lVar7 != 0) && (lVar11 != 0)) break;
        }
      }
LAB_180127fd0:
      plVar9 = plVar9 + -1;
      lVar8 = lVar8 + -1;
      lVar12 = lVar7;
    } while (-1 < lVar8);
  }
  *(int64_t *)(in_R10 + 0x1b00) = lVar7;
  if (lVar7 != 0) {
    unaff_RBP = *(int64_t *)(lVar7 + 0x3a0);
  }
  *(int64_t *)(in_R10 + 0x1b08) = unaff_RBP;
  *(int64_t *)(in_R10 + 0x1b10) = lVar11;
  if (lVar13 != 0) {
    *(int64_t *)(lVar13 + 0x28) = lVar5;
  }
  return;
}
// 函数: void function_127e4e(void)
void function_127e4e(void)
{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t unaff_RBP;
  int64_t *plVar4;
  int64_t unaff_RDI;
  int64_t in_R9;
  int64_t in_R10;
  int64_t in_R11;
  uint64_t unaff_R14;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fStackX_8;
  float fStackX_c;
  lVar3 = in_RAX + -1;
  plVar4 = (int64_t *)(*(int64_t *)(in_R10 + 0x1aa8) + lVar3 * 8);
  do {
    lVar1 = *plVar4;
    lVar2 = in_R9;
    if ((((*(char *)(lVar1 + 0xaf) != (char)unaff_RBP) &&
         (*(char *)(lVar1 + 0xb6) == (char)unaff_RBP)) && ((*(uint *)(lVar1 + 0xc) >> 9 & 1) == 0))
       && (*(int64_t *)(lVar1 + 0x28) == *(int64_t *)(in_R10 + 0x1c80))) {
      fVar5 = (float)*(uint64_t *)(lVar1 + 0x238);
      fVar6 = (float)((uint64_t)*(uint64_t *)(lVar1 + 0x238) >> 0x20);
      fStackX_8 = (float)*(uint64_t *)(lVar1 + 0x240);
      fStackX_c = (float)((uint64_t)*(uint64_t *)(lVar1 + 0x240) >> 0x20);
      if ((*(uint *)(lVar1 + 0xc) & 0x1000002) == 0) {
        fVar5 = fVar5 - unaff_XMM8_Da;
        fVar6 = fVar6 - unaff_XMM9_Da;
        fStackX_8 = fStackX_8 + unaff_XMM8_Da;
        fStackX_c = fStackX_c + unaff_XMM9_Da;
      }
      else {
        fVar5 = fVar5 - unaff_XMM6_Da;
        fVar6 = fVar6 - unaff_XMM7_Da;
        fStackX_8 = fStackX_8 + unaff_XMM6_Da;
        fStackX_c = fStackX_c + unaff_XMM7_Da;
      }
      fVar7 = *(float *)(in_R10 + 0x118);
      if (fVar5 <= fVar7) {
        fVar5 = *(float *)(in_R10 + 0x11c);
        if (((fVar6 <= fVar5) && (fVar7 < fStackX_8)) && (fVar5 < fStackX_c)) {
          if (*(short *)(lVar1 + 0x268) != 0) {
            fVar7 = fVar7 - *(float *)(lVar1 + 0x40);
            fVar5 = fVar5 - *(float *)(lVar1 + 0x44);
            if ((((float)(int)*(short *)(lVar1 + 0x26c) <= fVar7) &&
                ((float)(int)*(short *)(lVar1 + 0x26e) <= fVar5)) &&
               ((fVar7 < (float)((int)*(short *)(lVar1 + 0x268) + (int)*(short *)(lVar1 + 0x26c)) &&
                (fVar5 < (float)((int)*(short *)(lVar1 + 0x26a) + (int)*(short *)(lVar1 + 0x26e)))))
               ) goto LAB_180127fd0;
          }
          lVar2 = lVar1;
          if (in_R9 != 0) {
            lVar2 = in_R9;
          }
          if ((unaff_RDI == 0) &&
             ((in_R11 == 0 || (*(int64_t *)(lVar1 + 0x3a0) != *(int64_t *)(in_R11 + 0x3a0))))) {
            unaff_RDI = lVar1;
          }
          if ((lVar2 != 0) && (unaff_RDI != 0)) break;
        }
      }
    }
LAB_180127fd0:
    plVar4 = plVar4 + -1;
    lVar3 = lVar3 + -1;
    in_R9 = lVar2;
  } while (-1 < lVar3);
  *(int64_t *)(in_R10 + 0x1b00) = lVar2;
  if (lVar2 != 0) {
    unaff_RBP = *(uint64_t *)(lVar2 + 0x3a0);
  }
  *(uint64_t *)(in_R10 + 0x1b08) = unaff_RBP;
  *(int64_t *)(in_R10 + 0x1b10) = unaff_RDI;
  if (in_R11 != 0) {
    *(uint64_t *)(in_R11 + 0x28) = unaff_R14;
  }
  return;
}
// 函数: void function_127fe8(void)
void function_127fe8(void)
{
  uint64_t unaff_RBP;
  uint64_t unaff_RDI;
  int64_t in_R9;
  int64_t in_R10;
  int64_t in_R11;
  uint64_t unaff_R14;
  *(int64_t *)(in_R10 + 0x1b00) = in_R9;
  if (in_R9 != 0) {
    unaff_RBP = *(uint64_t *)(in_R9 + 0x3a0);
  }
  *(uint64_t *)(in_R10 + 0x1b08) = unaff_RBP;
  *(uint64_t *)(in_R10 + 0x1b10) = unaff_RDI;
  if (in_R11 != 0) {
    *(uint64_t *)(in_R11 + 0x28) = unaff_R14;
  }
  return;
}
// 函数: void function_12800a(void)
void function_12800a(void)
{
  uint64_t unaff_RDI;
  int64_t in_R9;
  int64_t in_R10;
  int64_t in_R11;
  uint64_t unaff_R14;
  *(uint64_t *)(in_R10 + 0x1b08) = *(uint64_t *)(in_R9 + 0x3a0);
  *(uint64_t *)(in_R10 + 0x1b10) = unaff_RDI;
  if (in_R11 != 0) {
    *(uint64_t *)(in_R11 + 0x28) = unaff_R14;
  }
  return;
}
// 函数: void function_128031(void)
void function_128031(void)
{
  int64_t in_R11;
  uint64_t unaff_R14;
  *(uint64_t *)(in_R11 + 0x28) = unaff_R14;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_HashCalculator(uint64_t *param_1,uint64_t *param_2,char param_3)
{
  int64_t lVar1;
  float *in_RAX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  fStack_50 = (float)*param_2;
  fStack_4c = (float)((uint64_t)*param_2 >> 0x20);
  fStack_58 = (float)*param_1;
  fStack_54 = (float)((uint64_t)*param_1 >> 0x20);
  fVar2 = fStack_58;
  fVar3 = fStack_4c;
  fVar4 = fStack_54;
  if (param_3 != '\0') {
    lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    in_RAX = (float *)(lVar1 + 0x228);
    fVar2 = *in_RAX;
    if (*in_RAX <= fStack_58) {
      fVar2 = fStack_58;
    }
    fVar4 = *(float *)(lVar1 + 0x22c);
    if (*(float *)(lVar1 + 0x22c) <= fStack_54) {
      fVar4 = fStack_54;
    }
    fVar3 = *(float *)(lVar1 + 0x234);
    if (fStack_4c <= *(float *)(lVar1 + 0x234)) {
      fVar3 = fStack_4c;
    }
    if (*(float *)(lVar1 + 0x230) <= fStack_50) {
      fStack_50 = *(float *)(lVar1 + 0x230);
    }
  }
  if ((((fVar2 - *(float *)(SYSTEM_DATA_MANAGER_A + 0x167c) <= *(float *)(SYSTEM_DATA_MANAGER_A + 0x118)) &&
       (fVar4 - *(float *)(SYSTEM_DATA_MANAGER_A + 0x1680) <= *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c))) &&
      (*(float *)(SYSTEM_DATA_MANAGER_A + 0x118) < *(float *)(SYSTEM_DATA_MANAGER_A + 0x167c) + fStack_50)) &&
     (*(float *)(SYSTEM_DATA_MANAGER_A + 0x11c) < *(float *)(SYSTEM_DATA_MANAGER_A + 0x1680) + fVar3)) {
    in_RAX = *(float **)(SYSTEM_DATA_MANAGER_A + 0x1c80);
    if (((fVar4 < in_RAX[3] + in_RAX[5]) && (in_RAX[3] < fVar3)) &&
       ((fVar2 < in_RAX[2] + in_RAX[4] && (in_RAX[2] < fStack_50)))) {
      return CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
    }
  }
  return (uint64_t)in_RAX & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_128280(int param_1,char param_2)
{
  float fVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  fVar3 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x424 + (int64_t)param_1 * 4);
  if (fVar3 == 0.0) {
    return 1;
  }
  if ((param_2 != '\0') && (*(float *)(SYSTEM_DATA_MANAGER_A + 0x90) < fVar3)) {
    fVar3 = fVar3 - *(float *)(SYSTEM_DATA_MANAGER_A + 0x90);
    fVar1 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x94);
    fVar2 = (float)fmodf(fVar3 - *(float *)(SYSTEM_DATA_MANAGER_A + 0x18),fVar1);
    fmodf(fVar3,fVar1);
    if (fVar1 * 0.5 < extraout_XMM0_Da != fVar1 * 0.5 < fVar2) {
      return 1;
    }
  }
  return 0;
}
int8_t function_1282c7(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_XMM8_Da;
  fVar3 = *(float *)(param_3 + 0x94) * 0.5;
  fVar1 = (float)fmodf(unaff_XMM8_Da - *(float *)(param_3 + 0x18),*(float *)(param_3 + 0x94));
  fVar2 = (float)fmodf();
  if (fVar3 < fVar2 == fVar3 < fVar1) {
    return 0;
  }
  return 1;
}
int8_t function_128336(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1283f0(int64_t param_1,int param_2,float *param_3,uint64_t param_4,uint param_5)
void function_1283f0(int64_t param_1,int param_2,float *param_3,uint64_t param_4,uint param_5)
{
  int32_t uVar1;
  uint uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int8_t stack_array_188 [32];
  int64_t lStack_168;
  int iStack_160;
  float fStack_158;
  float fStack_154;
  int8_t stack_array_148 [256];
  uint64_t local_var_48;
  lVar6 = SYSTEM_DATA_MANAGER_A;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  puVar3 = *(uint64_t **)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  uVar2 = *(uint *)((int64_t)puVar3 + 0xc);
  SystemFunction_00018012df80(&fStack_158);
  uVar7 = 0;
  fVar8 = (float)(int)param_3[1];
  fVar9 = (float)(int)*param_3;
  bVar5 = fVar9 == 0.0;
  if (fVar8 == 0.0) {
    uVar7 = 2;
  }
  if ((fVar9 <= 0.0) && (fVar9 = fVar9 + fStack_158, fVar9 <= 4.0)) {
    fVar9 = 4.0;
  }
  if ((fVar8 <= 0.0) && (fVar8 = fVar8 + fStack_154, fVar8 <= 4.0)) {
    fVar8 = 4.0;
  }
  *(float *)(lVar6 + 0x1c04) = fVar9;
  *(float *)(lVar6 + 0x1c08) = fVar8;
  *(int32_t *)(lVar6 + 0x1bd4) = 1;
  if (param_1 == 0) {
    lStack_168 = CONCAT44(lStack_168._4_4_,param_2);
    SystemCore_LoggingSystem(stack_array_148,0x100,&rendering_buffer_2472_ptr,*puVar3);
  }
  else {
    lStack_168 = param_1;
    iStack_160 = param_2;
    SystemCore_LoggingSystem(stack_array_148,0x100,&rendering_buffer_2448_ptr,*puVar3);
  }
  uVar1 = *(int32_t *)(lVar6 + 0x1650);
  CoreSystem_Validator(stack_array_148,0,param_5 | uVar2 & 4 | 0x1200103);
  lVar4 = *(int64_t *)(lVar6 + 0x1af8);
  *(int32_t *)(lVar6 + 0x1650) = uVar1;
  *(int *)(lVar4 + 0x88) = param_2;
  *(uint *)(lVar4 + 0xd0) = uVar7 | bVar5;
  if (*(short *)(lVar4 + 0xb8) == 1) {
    puVar3[0x20] = *(uint64_t *)(lVar4 + 0x40);
  }
  if (((*(int *)(lVar6 + 0x1ca4) == param_2) && ((param_5 & 0x800000) == 0)) &&
     ((*(int *)(lVar4 + 0x174) != 0 || (*(char *)(lVar4 + 0x17d) != '\0')))) {
    SystemCore_DataCompressor(lVar4);
    SystemFunction_000180131810(lVar4,0);
    SystemFunction_000180123e90(param_2 + 1,lVar4);
    *(int32_t *)(lVar6 + 0x1b60) = 2;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1285e0(void)
void function_1285e0(void)
{
  char *pcVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  char cVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  uint64_t stack_special_x_8;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  void *plocal_var_40;
  lVar5 = SYSTEM_DATA_MANAGER_A;
  lVar11 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  if (*(short *)(lVar11 + 0xb8) < 2) {
    stack_special_x_8 = *(uint64_t *)(lVar11 + 0x48);
    fVar12 = (float)stack_special_x_8;
    if (((*(uint *)(lVar11 + 0xd0) & 1) != 0) && ((float)stack_special_x_8 <= 4.0)) {
      stack_special_x_8._4_4_ = (float)((uint64_t)stack_special_x_8 >> 0x20);
      stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,0x40800000);
      fVar12 = 4.0;
    }
    fVar13 = stack_special_x_8._4_4_;
    if (((*(uint *)(lVar11 + 0xd0) & 2) != 0) && (stack_special_x_8._4_4_ <= 4.0)) {
      stack_special_x_8 = CONCAT44(0x40800000,(float)stack_special_x_8);
      fVar13 = 4.0;
    }
    HighFreq_CacheSystem1();
    fVar3 = *(float *)(*(int64_t *)(lVar5 + 0x1af8) + 0x100);
    fVar12 = fVar3 + fVar12;
    fVar4 = *(float *)(*(int64_t *)(lVar5 + 0x1af8) + 0x104);
    fVar13 = fVar4 + fVar13;
    fStack_58 = fVar3;
    fStack_54 = fVar4;
    fStack_50 = fVar12;
    fStack_4c = fVar13;
    SystemFunction_000180124080(&stack_special_x_8,0);
    lVar10 = SYSTEM_DATA_MANAGER_A;
    if (((*(int *)(lVar11 + 0x174) == 0) && (*(char *)(lVar11 + 0x17d) == '\0')) ||
       ((*(uint *)(lVar11 + 0xc) & 0x800000) != 0)) {
      lVar11 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
      *(uint64_t *)(lVar11 + 0x144) = 0;
      *(float *)(lVar11 + 0x14c) = fStack_58;
      *(float *)(lVar11 + 0x150) = fStack_54;
      *(float *)(lVar11 + 0x154) = fStack_50;
      *(float *)(lVar11 + 0x158) = fStack_4c;
      lVar5 = *(int64_t *)(lVar10 + 0x1af8);
      if (((((*(float *)(lVar5 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar5 + 0x22c)) &&
            (fVar4 < *(float *)(lVar5 + 0x234))) &&
           ((*(float *)(lVar5 + 0x228) <= fVar12 && fVar12 != *(float *)(lVar5 + 0x228) &&
            (fVar3 < *(float *)(lVar5 + 0x230))))) || (*(char *)(lVar10 + 0x2e38) != '\0')) &&
         (cVar6 = SystemCore_HashCalculator(&fStack_58,&fStack_50,1), cVar6 != '\0')) {
        *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 1;
      }
    }
    else {
      Memory_GarbageCollector(&fStack_58,*(int32_t *)(lVar11 + 0x88),0);
      if (*(int *)(lVar11 + 0x88) == *(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) {
        UtilitiesSystem_Validator(&fStack_58,1);
      }
      if ((*(int *)(lVar11 + 0x174) == 0) && (lVar11 == *(int64_t *)(lVar5 + 0x1c98))) {
        fStack_50 = fStack_50 + 2.0;
        fStack_4c = fStack_4c + 2.0;
        fStack_58 = fStack_58 - 2.0;
        fStack_54 = fStack_54 - 2.0;
        if (*(int *)(lVar5 + 0x1ca0) == *(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) {
          UtilitiesSystem_Validator(&fStack_58,2);
        }
      }
    }
    return;
  }
  if ((1 < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1ad0)) || (*(char *)(SYSTEM_DATA_MANAGER_A + 2) == '\0')) {
    lVar11 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    if (*(int64_t *)(lVar11 + 0x210) != 0) {
      plocal_var_40 = (void *)0x18012d024;
      function_134b80();
    }
    uVar7 = *(uint *)(lVar11 + 0xc);
    if ((uVar7 >> 0x1d & 1) == 0) {
      plocal_var_40 = (void *)0x18012d039;
      function_126d80();
      uVar7 = *(uint *)(lVar11 + 0xc);
    }
    lVar9 = SYSTEM_DATA_MANAGER_A;
    lVar10 = 0;
    if (((uVar7 >> 0x18 & 1) == 0) && (pcVar1 = (char *)(SYSTEM_DATA_MANAGER_A + 0x2e38), *pcVar1 != '\0'))
    {
      plocal_var_40 = (void *)0x18012d075;
      function_13c760(&memory_allocator_3196_ptr);
      if (*(int64_t *)(lVar9 + 0x2e40) != 0) {
        plocal_var_40 = (void *)0x18012d087;
        lVar8 = __acrt_iob_func(1);
        if (*(int64_t *)(lVar9 + 0x2e40) == lVar8) {
          plocal_var_40 = (void *)0x18012d099;
          fflush();
        }
        else {
          plocal_var_40 = (void *)0x18012d0a1;
          fclose();
        }
        *(uint64_t *)(lVar9 + 0x2e40) = 0;
      }
      piVar2 = (int *)(lVar9 + 0x2e48);
      lVar8 = *(int64_t *)(lVar9 + 0x2e50);
      if ((lVar8 != 0) && (1 < *piVar2 + -1)) {
        if (*(code **)(SYSTEM_DATA_MANAGER_A + 0x100) != (code *)0x0) {
          plocal_var_40 = (void *)0x18012d0e1;
          (**(code **)(SYSTEM_DATA_MANAGER_A + 0x100))(*(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x108),lVar8);
          lVar8 = *(int64_t *)(lVar9 + 0x2e50);
        }
        lVar9 = SYSTEM_DATA_MANAGER_A;
        if (lVar8 != 0) {
          piVar2[0] = 0;
          piVar2[1] = 0;
          if (lVar9 != 0) {
            piVar2 = (int *)(lVar9 + 0x3a8);
            *piVar2 = *piVar2 + -1;
          }
// WARNING: Subroutine does not return
          plocal_var_40 = &processed_var_4107_ptr;
          SystemResourceCleaner(lVar8,SYSTEM_DATA_MANAGER_B);
        }
      }
      lVar9 = SYSTEM_DATA_MANAGER_A;
      *pcVar1 = '\0';
    }
    if (((*(int64_t *)(lVar11 + 0x408) != 0) && ((*(byte *)(lVar11 + 0x432) & 2) != 0)) &&
       (lVar8 = *(int64_t *)(*(int64_t *)(lVar11 + 0x408) + 0x68), lVar8 != 0)) {
      fVar12 = *(float *)(lVar11 + 0x11c);
      fVar13 = *(float *)(lVar11 + 0x74);
      *(float *)(lVar8 + 0x118) =
           (*(float *)(lVar11 + 0x118) + *(float *)(lVar11 + 0x70)) - *(float *)(lVar8 + 0x70);
      *(float *)(lVar8 + 0x11c) = (fVar12 + fVar13) - *(float *)(lVar8 + 0x74);
    }
    *(int *)(lVar5 + 0x1ad0) = *(int *)(lVar5 + 0x1ad0) + -1;
    if ((*(uint *)(lVar11 + 0xc) & 0x4000000) != 0) {
      *(int *)(lVar5 + 0x1bc0) = *(int *)(lVar5 + 0x1bc0) + -1;
    }
    if (*(int *)(lVar5 + 0x1ad0) != 0) {
      lVar10 = *(int64_t *)
                (*(int64_t *)(lVar5 + 0x1ad8) + -8 + (int64_t)*(int *)(lVar5 + 0x1ad0) * 8);
    }
    *(int64_t *)(lVar9 + 0x1af8) = lVar10;
    if (lVar10 != 0) {
      fVar12 = *(float *)(lVar9 + 0x19fc) * *(float *)(lVar10 + 0x2d8) * *(float *)(lVar10 + 0x2dc);
      *(float *)(lVar9 + 0x1a10) = fVar12;
      *(float *)(lVar9 + 0x19f8) = fVar12;
    }
    if (*(int64_t *)(lVar5 + 0x1af8) != 0) {
      lVar11 = *(int64_t *)(*(int64_t *)(lVar5 + 0x1af8) + 0x28);
      if (lVar11 != 0) {
        *(int32_t *)(lVar11 + 0x54) = *(int32_t *)(lVar9 + 0x1a90);
      }
      if (((*(int64_t *)(lVar9 + 0x1c78) != lVar11) &&
          (*(int64_t *)(lVar9 + 0x1c78) = lVar11, lVar11 != 0)) &&
         (*(code **)(lVar9 + 0x15c0) != (code *)0x0)) {
// WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
// WARNING: Treating indirect jump as call
        (**(code **)(lVar9 + 0x15c0))();
        return;
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_12862b(uint64_t param_1)
void function_12862b(uint64_t param_1)
{
  float fVar1;
  float fVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  char cVar10;
  uint64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  *(uint64_t *)(unaff_RBP + 0x10) = param_1;
  fVar13 = *(float *)(unaff_RBP + 0x10);
  if (((in_RAX & 1) != 0) && (fVar13 <= 4.0)) {
    *(int32_t *)(unaff_RBP + 0x10) = 0x40800000;
    fVar13 = 4.0;
  }
  fVar12 = *(float *)(unaff_RBP + 0x14);
  if (((in_RAX & 2) != 0) && (fVar12 <= 4.0)) {
    *(int32_t *)(unaff_RBP + 0x14) = 0x40800000;
    fVar12 = 4.0;
  }
  HighFreq_CacheSystem1();
  lVar4 = *(int64_t *)(unaff_RDI + 0x1af8);
  fVar1 = *(float *)(lVar4 + 0x100);
  *(float *)(unaff_RBP + -0x50) = fVar1;
  fVar13 = fVar1 + fVar13;
  fVar2 = *(float *)(lVar4 + 0x104);
  *(float *)(unaff_RBP + -0x4c) = fVar2;
  fVar12 = fVar2 + fVar12;
  *(float *)(unaff_RBP + -0x48) = fVar13;
  *(float *)(unaff_RBP + -0x44) = fVar12;
  SystemFunction_000180124080(unaff_RBP + 0x10,0);
  lVar4 = SYSTEM_DATA_MANAGER_A;
  if (((*(int *)(unaff_RBX + 0x174) == 0) && (*(char *)(unaff_RBX + 0x17d) == '\0')) ||
     ((*(uint *)(unaff_RBX + 0xc) & 0x800000) != 0)) {
    uVar6 = *(int32_t *)(unaff_RBP + -0x50);
    uVar7 = *(int32_t *)(unaff_RBP + -0x4c);
    uVar8 = *(int32_t *)(unaff_RBP + -0x48);
    uVar9 = *(int32_t *)(unaff_RBP + -0x44);
    lVar11 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
    *(uint64_t *)(lVar11 + 0x144) = 0;
    *(int32_t *)(lVar11 + 0x14c) = uVar6;
    *(int32_t *)(lVar11 + 0x150) = uVar7;
    *(int32_t *)(lVar11 + 0x154) = uVar8;
    *(int32_t *)(lVar11 + 0x158) = uVar9;
    lVar5 = *(int64_t *)(lVar4 + 0x1af8);
    if ((((*(float *)(lVar5 + 0x22c) <= fVar12 && fVar12 != *(float *)(lVar5 + 0x22c)) &&
         (fVar2 < *(float *)(lVar5 + 0x234))) &&
        ((*(float *)(lVar5 + 0x228) <= fVar13 && fVar13 != *(float *)(lVar5 + 0x228) &&
         (fVar1 < *(float *)(lVar5 + 0x230))))) || (*(char *)(lVar4 + 0x2e38) != '\0')) {
      cVar10 = SystemCore_HashCalculator(unaff_RBP + -0x50,unaff_RBP + -0x48,1);
      if (cVar10 != '\0') {
        *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 1;
      }
    }
  }
  else {
    Memory_GarbageCollector(unaff_RBP + -0x50,*(int32_t *)(unaff_RBX + 0x88),0);
    if (*(int *)(unaff_RBX + 0x88) == *(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) {
      UtilitiesSystem_Validator(unaff_RBP + -0x50,1);
    }
    if ((*(int *)(unaff_RBX + 0x174) == 0) && (unaff_RBX == *(int64_t *)(unaff_RDI + 0x1c98))) {
      iVar3 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0);
      *(float *)(unaff_RBP + -0x48) = *(float *)(unaff_RBP + -0x48) + 2.0;
      *(float *)(unaff_RBP + -0x44) = *(float *)(unaff_RBP + -0x44) + 2.0;
      *(float *)(unaff_RBP + -0x50) = *(float *)(unaff_RBP + -0x50) - 2.0;
      *(float *)(unaff_RBP + -0x4c) = *(float *)(unaff_RBP + -0x4c) - 2.0;
      if (*(int *)(unaff_RDI + 0x1ca0) == iVar3) {
        UtilitiesSystem_Validator(unaff_RBP + -0x50,2);
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address