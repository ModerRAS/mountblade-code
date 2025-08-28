#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part161_sub002.c - 1 个函数
// 函数: void function_14b164(int64_t param_1,uint64_t param_2,uint64_t param_3)
void function_14b164(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  float fVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t in_RAX;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  float *in_R8;
  uint64_t in_R11;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int32_t uVar16;
  float fVar17;
  float fVar18;
  int32_t uVar19;
  int32_t in_XMM2_Dc;
  int32_t in_XMM2_Dd;
  float fVar20;
  float fVar21;
  uVar19 = (int32_t)((uint64_t)param_3 >> 0x20);
  uVar16 = (int32_t)param_3;
  lVar8 = SUB168(SEXT816(in_RAX) * SEXT816(param_1),8);
  uVar7 = in_R11 & 0xffffffff;
  lVar9 = lVar8 >> 3;
  lVar8 = lVar8 >> 0x3f;
  if (lVar9 != lVar8) {
    do {
      fVar14 = *in_R8;
      fVar18 = in_R8[1];
      fVar13 = in_R8[5];
      fVar15 = in_R8[3];
      fVar12 = fVar18;
      if (fVar13 <= fVar18) {
        fVar12 = fVar13;
      }
      fVar17 = in_R8[2];
      fVar21 = in_R8[7];
      fVar1 = in_R8[6];
      fVar20 = fVar15;
      if (fVar21 <= fVar15) {
        fVar20 = fVar21;
      }
      fVar11 = fVar17;
      if (fVar1 <= fVar17) {
        fVar11 = fVar1;
      }
      if (*(float *)(unaff_RBP + -0x79) <= fVar12 - fVar14) {
        *(float *)(unaff_RBP + -0x49) = *(float *)(unaff_RBP + -0x79);
      }
      else {
        *(float *)(unaff_RBP + -0x49) = fVar12 - fVar14;
      }
      if (*(float *)(unaff_RBP + -0x75) <= fVar11 - fVar14) {
        *(float *)(unaff_RBP + -0x45) = *(float *)(unaff_RBP + -0x75);
      }
      else {
        *(float *)(unaff_RBP + -0x45) = fVar11 - fVar14;
      }
      if (*(float *)(unaff_RBP + -0x71) <= fVar20 - fVar14) {
        *(float *)(unaff_RBP + -0x41) = *(float *)(unaff_RBP + -0x71);
      }
      else {
        *(float *)(unaff_RBP + -0x41) = fVar20 - fVar14;
      }
      if (fVar18 <= fVar13) {
        fVar18 = fVar13;
      }
      if (fVar15 <= fVar21) {
        fVar15 = fVar21;
      }
      *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(unaff_RBP + -0x49);
      *(uint64_t *)(unaff_RBP + -0x71) = *(uint64_t *)(unaff_RBP + -0x41);
      if (fVar17 <= fVar1) {
        fVar17 = fVar1;
      }
      if (fVar18 + fVar14 <= *(float *)(unaff_RBP + -0x69)) {
        *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x69);
      }
      else {
        *(float *)(unaff_RBP + -0x59) = fVar18 + fVar14;
      }
      if (fVar17 + fVar14 <= *(float *)(unaff_RBP + -0x65)) {
        *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x65);
      }
      else {
        *(float *)(unaff_RBP + -0x55) = fVar17 + fVar14;
      }
      if (fVar15 + fVar14 <= *(float *)(unaff_RBP + -0x61)) {
        *(float *)(unaff_RBP + -0x51) = *(float *)(unaff_RBP + -0x61);
      }
      else {
        *(float *)(unaff_RBP + -0x51) = fVar15 + fVar14;
      }
      uVar16 = *(int32_t *)(unaff_RBP + -0x59);
      uVar19 = *(int32_t *)(unaff_RBP + -0x55);
      in_XMM2_Dc = *(int32_t *)(unaff_RBP + -0x51);
      in_XMM2_Dd = *(int32_t *)(unaff_RBP + -0x4d);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      in_R8 = in_R8 + 0xc;
      *(int32_t *)(unaff_RBP + -0x69) = uVar16;
      *(int32_t *)(unaff_RBP + -0x65) = uVar19;
      *(int32_t *)(unaff_RBP + -0x61) = in_XMM2_Dc;
      *(int32_t *)(unaff_RBP + -0x5d) = in_XMM2_Dd;
    } while ((uint64_t)(int64_t)(int)uVar6 < (uint64_t)(lVar9 - lVar8));
  }
  lVar8 = *(int64_t *)(unaff_RSI + 0x20);
  uVar10 = *(int64_t *)(unaff_RSI + 0x28) - lVar8 >> 5;
  uVar7 = in_R11;
  if (uVar10 != 0) {
    do {
      fVar14 = *(float *)(lVar8 + in_R11);
      fVar18 = *(float *)(lVar8 + 4 + in_R11);
      fVar13 = *(float *)(lVar8 + 8 + in_R11);
      fVar15 = *(float *)(lVar8 + 0xc + in_R11);
      fVar21 = fVar18 - fVar14;
      fVar12 = fVar13 - fVar14;
      fVar17 = fVar15 - fVar14;
      if (*(float *)(unaff_RBP + -0x79) <= fVar21) {
        *(float *)(unaff_RBP + -0x49) = *(float *)(unaff_RBP + -0x79);
      }
      else {
        *(float *)(unaff_RBP + -0x49) = fVar21;
      }
      if (*(float *)(unaff_RBP + -0x75) <= fVar12) {
        *(float *)(unaff_RBP + -0x45) = *(float *)(unaff_RBP + -0x75);
      }
      else {
        *(float *)(unaff_RBP + -0x45) = fVar12;
      }
      if (*(float *)(unaff_RBP + -0x71) <= fVar17) {
        *(float *)(unaff_RBP + -0x41) = *(float *)(unaff_RBP + -0x71);
      }
      else {
        *(float *)(unaff_RBP + -0x41) = fVar17;
      }
      fVar18 = fVar14 + fVar18;
      *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(unaff_RBP + -0x49);
      *(uint64_t *)(unaff_RBP + -0x71) = *(uint64_t *)(unaff_RBP + -0x41);
      if (fVar18 <= *(float *)(unaff_RBP + -0x69)) {
        *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x69);
      }
      else {
        *(float *)(unaff_RBP + -0x59) = fVar18;
      }
      fVar13 = fVar14 + fVar13;
      fVar14 = fVar14 + fVar15;
      if (fVar13 <= *(float *)(unaff_RBP + -0x65)) {
        *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x65);
      }
      else {
        *(float *)(unaff_RBP + -0x55) = fVar13;
      }
      if (fVar14 <= *(float *)(unaff_RBP + -0x61)) {
        *(float *)(unaff_RBP + -0x51) = *(float *)(unaff_RBP + -0x61);
      }
      else {
        *(float *)(unaff_RBP + -0x51) = fVar14;
      }
      uVar16 = *(int32_t *)(unaff_RBP + -0x59);
      uVar19 = *(int32_t *)(unaff_RBP + -0x55);
      in_XMM2_Dc = *(int32_t *)(unaff_RBP + -0x51);
      in_XMM2_Dd = *(int32_t *)(unaff_RBP + -0x4d);
      uVar6 = (int)uVar7 + 1;
      in_R11 = in_R11 + 0x20;
      *(int32_t *)(unaff_RBP + -0x69) = uVar16;
      *(int32_t *)(unaff_RBP + -0x65) = uVar19;
      *(int32_t *)(unaff_RBP + -0x61) = in_XMM2_Dc;
      *(int32_t *)(unaff_RBP + -0x5d) = in_XMM2_Dd;
      uVar7 = (uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 < uVar10);
  }
  *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RBP + -0x79);
  *(int32_t *)(unaff_RBP + -0x35) = *(int32_t *)(unaff_RBP + -0x75);
  *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(unaff_RBP + -0x71);
  *(int32_t *)(unaff_RBP + -0x2d) = *(int32_t *)(unaff_RBP + -0x6d);
  *(int32_t *)(unaff_RBP + -0x29) = uVar16;
  *(int32_t *)(unaff_RBP + -0x25) = uVar19;
  *(int32_t *)(unaff_RBP + -0x21) = in_XMM2_Dc;
  *(int32_t *)(unaff_RBP + -0x1d) = in_XMM2_Dd;
  SystemCore_Parser(unaff_RBP + -0x39);
  uVar2 = *(uint64_t *)(unaff_RBP + -0x31);
  uVar16 = *(int32_t *)(unaff_RBP + -9);
  uVar3 = *(uint64_t *)(unaff_RBP + -0x29);
  uVar4 = *(uint64_t *)(unaff_RBP + -0x21);
  *(uint64_t *)(unaff_RSI + 0xf8) = *(uint64_t *)(unaff_RBP + -0x39);
  *(uint64_t *)(unaff_RSI + 0x100) = uVar2;
  uVar2 = *(uint64_t *)(unaff_RBP + -0x19);
  uVar5 = *(uint64_t *)(unaff_RBP + -0x11);
  *(uint64_t *)(unaff_RSI + 0x108) = uVar3;
  *(uint64_t *)(unaff_RSI + 0x110) = uVar4;
  *(uint64_t *)(unaff_RSI + 0x118) = uVar2;
  *(uint64_t *)(unaff_RSI + 0x120) = uVar5;
  *(int32_t *)(unaff_RSI + 0x128) = uVar16;
  return;
}