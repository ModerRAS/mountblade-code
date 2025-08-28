#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part371.c - 7 个函数

// 函数: void FUN_18046d350(float param_1,float *param_2,float *param_3)
void FUN_18046d350(float param_1,float *param_2,float *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar6 = 0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  *param_3 = 0.0;
  if (param_1 != 0.0) {
    param_1 = 1.0 / param_1;
    fVar23 = (*param_2 + 1.0) * param_1;
    fVar25 = (param_2[1] + 1.0) * param_1;
    param_1 = (param_2[2] + 1.0) * param_1;
    iVar9 = (int)fVar23;
    fVar15 = fVar23;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar23)) {
      auVar18._4_4_ = fVar23;
      auVar18._0_4_ = fVar23;
      auVar18._8_8_ = 0;
      uVar6 = movmskps(0,auVar18);
      uVar6 = uVar6 & 1;
      fVar15 = (float)(int)(iVar9 - uVar6);
    }
    iVar10 = (int)fVar15;
    iVar9 = (int)fVar25;
    fVar23 = fVar23 - (float)iVar10;
    fVar15 = fVar25;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar25)) {
      auVar13._4_4_ = fVar25;
      auVar13._0_4_ = fVar25;
      auVar13._8_8_ = 0;
      uVar6 = movmskps(uVar6,auVar13);
      uVar6 = uVar6 & 1;
      fVar15 = (float)(int)(iVar9 - uVar6);
    }
    iVar9 = (int)param_1;
    fVar25 = fVar25 - (float)(int)fVar15;
    fVar12 = param_1;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != param_1)) {
      auVar14._4_4_ = param_1;
      auVar14._0_4_ = param_1;
      auVar14._8_8_ = 0;
      uVar6 = movmskps(uVar6,auVar14);
      fVar12 = (float)(int)(iVar9 - (uVar6 & 1));
    }
    iVar11 = (int)fVar12;
    cVar5 = (char)(int)fVar15;
    fVar15 = fVar23 * fVar23;
    fVar16 = fVar25 * fVar25;
    fVar27 = fVar23 - 1.0;
    bVar1 = (&unknown_var_1744_ptr)[(byte)((&unknown_var_1744_ptr)[(longlong)iVar10 & 0xff] + cVar5)];
    fVar28 = fVar25 - 1.0;
    param_1 = param_1 - (float)iVar11;
    fVar20 = fVar27 * fVar27;
    fVar21 = fVar28 * fVar28;
    fVar19 = param_1 * param_1;
    fVar29 = param_1 - 1.0;
    bVar2 = (&unknown_var_1744_ptr)[(byte)((&unknown_var_1744_ptr)[(longlong)iVar10 + 1U & 0xff] + cVar5)];
    fVar12 = (1.0 - fVar15 * 3.0) + (fVar15 + fVar15) * fVar23;
    fVar15 = fVar29 * fVar29;
    fVar24 = (1.0 - fVar16 * 3.0) + (fVar16 + fVar16) * fVar25;
    fVar26 = (1.0 - fVar19 * 3.0) + (fVar19 + fVar19) * param_1;
    fVar16 = (1.0 - fVar20 * 3.0) - (fVar20 + fVar20) * fVar27;
    fVar19 = (1.0 - fVar21 * 3.0) - (fVar21 + fVar21) * fVar28;
    fVar20 = (1.0 - fVar15 * 3.0) - (fVar15 + fVar15) * fVar29;
    fVar15 = fVar24 * fVar12;
    bVar3 = (&unknown_var_1744_ptr)[(byte)((&unknown_var_1744_ptr)[(longlong)iVar10 & 0xff] + cVar5 + '\x01')];
    fVar22 = fVar15 * fVar20;
    iVar9 = _DAT_180c8ecd4 + iVar11;
    iVar11 = _DAT_180c8ecd4 + iVar11 + 1;
    fVar15 = fVar15 * fVar26;
    bVar4 = (&unknown_var_1744_ptr)
            [(byte)((&unknown_var_1744_ptr)[(longlong)iVar10 + 1U & 0xff] + cVar5 + '\x01')];
    uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar9 + (uint)bVar1 & 0xff];
    fVar21 = fVar23 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar15;
    *param_3 = fVar21;
    fVar17 = fVar25 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar15;
    param_3[1] = fVar17;
    fVar15 = param_1 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar15;
    uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar11 + (uint)bVar1 & 0xff];
    param_3[2] = fVar15;
    fVar21 = fVar23 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar22 + fVar21;
    *param_3 = fVar21;
    fVar17 = fVar25 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar22 + fVar17;
    param_3[1] = fVar17;
    uVar8 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar9 + (uint)bVar3 & 0xff];
    fVar12 = fVar19 * fVar12;
    fVar15 = fVar29 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar22 + fVar15;
    fVar22 = fVar12 * fVar20;
    param_3[2] = fVar15;
    fVar12 = fVar12 * fVar26;
    fVar21 = fVar23 * *(float *)(uVar8 * 0xc + 0x180bf33f0) * fVar12 + fVar21;
    *param_3 = fVar21;
    fVar17 = fVar28 * *(float *)(uVar8 * 0xc + 0x180bf33f4) * fVar12 + fVar17;
    param_3[1] = fVar17;
    uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar11 + (uint)bVar3 & 0xff];
    fVar15 = param_1 * *(float *)(uVar8 * 0xc + 0x180bf33f8) * fVar12 + fVar15;
    param_3[2] = fVar15;
    fVar21 = fVar23 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar22 + fVar21;
    *param_3 = fVar21;
    fVar19 = fVar19 * fVar16;
    fVar16 = fVar16 * fVar24;
    fVar23 = fVar16 * fVar20;
    fVar17 = fVar28 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar22 + fVar17;
    fVar16 = fVar16 * fVar26;
    param_3[1] = fVar17;
    uVar8 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar9 + (uint)bVar2 & 0xff];
    fVar15 = fVar29 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar22 + fVar15;
    param_3[2] = fVar15;
    fVar21 = fVar27 * *(float *)(uVar8 * 0xc + 0x180bf33f0) * fVar16 + fVar21;
    *param_3 = fVar21;
    fVar17 = fVar25 * *(float *)(uVar8 * 0xc + 0x180bf33f4) * fVar16 + fVar17;
    param_3[1] = fVar17;
    uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar11 + (uint)bVar2 & 0xff];
    fVar20 = fVar19 * fVar20;
    fVar15 = param_1 * *(float *)(uVar8 * 0xc + 0x180bf33f8) * fVar16 + fVar15;
    fVar19 = fVar19 * fVar26;
    param_3[2] = fVar15;
    fVar21 = fVar27 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar23 + fVar21;
    *param_3 = fVar21;
    fVar17 = fVar25 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar23 + fVar17;
    param_3[1] = fVar17;
    uVar8 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar9 + (uint)bVar4 & 0xff];
    fVar15 = fVar29 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar23 + fVar15;
    param_3[2] = fVar15;
    fVar21 = fVar27 * *(float *)(uVar8 * 0xc + 0x180bf33f0) * fVar19 + fVar21;
    *param_3 = fVar21;
    fVar17 = fVar28 * *(float *)(uVar8 * 0xc + 0x180bf33f4) * fVar19 + fVar17;
    param_3[1] = fVar17;
    uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar11 + (uint)bVar4 & 0xff];
    fVar15 = param_1 * *(float *)(uVar8 * 0xc + 0x180bf33f8) * fVar19 + fVar15;
    param_3[2] = fVar15;
    *param_3 = fVar27 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar20 + fVar21;
    param_3[1] = fVar28 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar20 + fVar17;
    param_3[2] = fVar29 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar20 + fVar15;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046d374(float param_1,float *param_2)
void FUN_18046d374(float param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint in_EAX;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  float *unaff_R14;
  float fVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  int32_t unaff_XMM6_Da;
  float fVar21;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar22;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar23;
  float fVar24;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar25;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  fVar15 = *param_2;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  param_1 = 1.0 / param_1;
  fVar23 = (fVar15 + 1.0) * param_1;
  fVar25 = (param_2[1] + 1.0) * param_1;
  param_1 = (param_2[2] + 1.0) * param_1;
  iVar9 = (int)fVar23;
  fVar15 = fVar23;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar23)) {
    auVar18._4_4_ = fVar23;
    auVar18._0_4_ = fVar23;
    auVar18._8_8_ = 0;
    uVar6 = movmskps(in_EAX,auVar18);
    in_EAX = uVar6 & 1;
    fVar15 = (float)(int)(iVar9 - in_EAX);
  }
  iVar10 = (int)fVar15;
  iVar9 = (int)fVar25;
  fVar23 = fVar23 - (float)iVar10;
  fVar15 = fVar25;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar25)) {
    auVar13._4_4_ = fVar25;
    auVar13._0_4_ = fVar25;
    auVar13._8_8_ = 0;
    uVar6 = movmskps(in_EAX,auVar13);
    in_EAX = uVar6 & 1;
    fVar15 = (float)(int)(iVar9 - in_EAX);
  }
  iVar9 = (int)param_1;
  fVar25 = fVar25 - (float)(int)fVar15;
  fVar12 = param_1;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != param_1)) {
    auVar14._4_4_ = param_1;
    auVar14._0_4_ = param_1;
    auVar14._8_8_ = 0;
    uVar6 = movmskps(in_EAX,auVar14);
    fVar12 = (float)(int)(iVar9 - (uVar6 & 1));
  }
  iVar11 = (int)fVar12;
  cVar5 = (char)(int)fVar15;
  fVar15 = fVar23 * fVar23;
  fVar16 = fVar25 * fVar25;
  fVar27 = fVar23 - 1.0;
  bVar1 = (&unknown_var_1744_ptr)[(byte)((&unknown_var_1744_ptr)[(longlong)iVar10 & 0xff] + cVar5)];
  fVar28 = fVar25 - 1.0;
  param_1 = param_1 - (float)iVar11;
  fVar20 = fVar27 * fVar27;
  fVar21 = fVar28 * fVar28;
  fVar19 = param_1 * param_1;
  fVar29 = param_1 - 1.0;
  bVar2 = (&unknown_var_1744_ptr)[(byte)((&unknown_var_1744_ptr)[(longlong)iVar10 + 1U & 0xff] + cVar5)];
  fVar12 = (1.0 - fVar15 * 3.0) + (fVar15 + fVar15) * fVar23;
  fVar15 = fVar29 * fVar29;
  fVar24 = (1.0 - fVar16 * 3.0) + (fVar16 + fVar16) * fVar25;
  fVar26 = (1.0 - fVar19 * 3.0) + (fVar19 + fVar19) * param_1;
  fVar16 = (1.0 - fVar20 * 3.0) - (fVar20 + fVar20) * fVar27;
  fVar19 = (1.0 - fVar21 * 3.0) - (fVar21 + fVar21) * fVar28;
  fVar20 = (1.0 - fVar15 * 3.0) - (fVar15 + fVar15) * fVar29;
  fVar15 = fVar24 * fVar12;
  bVar3 = (&unknown_var_1744_ptr)[(byte)((&unknown_var_1744_ptr)[(longlong)iVar10 & 0xff] + cVar5 + '\x01')];
  fVar22 = fVar15 * fVar20;
  iVar9 = _DAT_180c8ecd4 + iVar11;
  iVar11 = _DAT_180c8ecd4 + iVar11 + 1;
  fVar15 = fVar15 * fVar26;
  bVar4 = (&unknown_var_1744_ptr)[(byte)((&unknown_var_1744_ptr)[(longlong)iVar10 + 1U & 0xff] + cVar5 + '\x01')];
  uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar9 + (uint)bVar1 & 0xff];
  fVar21 = fVar23 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar15;
  *unaff_R14 = fVar21;
  fVar17 = fVar25 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar15;
  unaff_R14[1] = fVar17;
  fVar15 = param_1 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar15;
  uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar11 + (uint)bVar1 & 0xff];
  unaff_R14[2] = fVar15;
  fVar21 = fVar23 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar22 + fVar21;
  *unaff_R14 = fVar21;
  fVar17 = fVar25 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar22 + fVar17;
  unaff_R14[1] = fVar17;
  uVar8 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar9 + (uint)bVar3 & 0xff];
  fVar12 = fVar19 * fVar12;
  fVar15 = fVar29 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar22 + fVar15;
  fVar22 = fVar12 * fVar20;
  unaff_R14[2] = fVar15;
  fVar12 = fVar12 * fVar26;
  fVar21 = fVar23 * *(float *)(uVar8 * 0xc + 0x180bf33f0) * fVar12 + fVar21;
  *unaff_R14 = fVar21;
  fVar17 = fVar28 * *(float *)(uVar8 * 0xc + 0x180bf33f4) * fVar12 + fVar17;
  unaff_R14[1] = fVar17;
  uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar11 + (uint)bVar3 & 0xff];
  fVar15 = param_1 * *(float *)(uVar8 * 0xc + 0x180bf33f8) * fVar12 + fVar15;
  unaff_R14[2] = fVar15;
  fVar21 = fVar23 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar22 + fVar21;
  *unaff_R14 = fVar21;
  fVar19 = fVar19 * fVar16;
  fVar16 = fVar16 * fVar24;
  fVar23 = fVar16 * fVar20;
  fVar17 = fVar28 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar22 + fVar17;
  fVar16 = fVar16 * fVar26;
  unaff_R14[1] = fVar17;
  uVar8 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar9 + (uint)bVar2 & 0xff];
  fVar15 = fVar29 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar22 + fVar15;
  unaff_R14[2] = fVar15;
  fVar21 = fVar27 * *(float *)(uVar8 * 0xc + 0x180bf33f0) * fVar16 + fVar21;
  *unaff_R14 = fVar21;
  fVar17 = fVar25 * *(float *)(uVar8 * 0xc + 0x180bf33f4) * fVar16 + fVar17;
  unaff_R14[1] = fVar17;
  uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar11 + (uint)bVar2 & 0xff];
  fVar20 = fVar19 * fVar20;
  fVar15 = param_1 * *(float *)(uVar8 * 0xc + 0x180bf33f8) * fVar16 + fVar15;
  fVar19 = fVar19 * fVar26;
  unaff_R14[2] = fVar15;
  fVar21 = fVar27 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar23 + fVar21;
  *unaff_R14 = fVar21;
  fVar17 = fVar25 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar23 + fVar17;
  unaff_R14[1] = fVar17;
  uVar8 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar9 + (uint)bVar4 & 0xff];
  fVar15 = fVar29 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar23 + fVar15;
  unaff_R14[2] = fVar15;
  fVar21 = fVar27 * *(float *)(uVar8 * 0xc + 0x180bf33f0) * fVar19 + fVar21;
  *unaff_R14 = fVar21;
  fVar17 = fVar28 * *(float *)(uVar8 * 0xc + 0x180bf33f4) * fVar19 + fVar17;
  unaff_R14[1] = fVar17;
  uVar7 = (ulonglong)(byte)(&unknown_var_1744_ptr)[iVar11 + (uint)bVar4 & 0xff];
  fVar15 = param_1 * *(float *)(uVar8 * 0xc + 0x180bf33f8) * fVar19 + fVar15;
  unaff_R14[2] = fVar15;
  *unaff_R14 = fVar27 * *(float *)(uVar7 * 0xc + 0x180bf33f0) * fVar20 + fVar21;
  unaff_R14[1] = fVar28 * *(float *)(uVar7 * 0xc + 0x180bf33f4) * fVar20 + fVar17;
  unaff_R14[2] = fVar29 * *(float *)(uVar7 * 0xc + 0x180bf33f8) * fVar20 + fVar15;
  return;
}





// 函数: void FUN_18046da4e(void)
void FUN_18046da4e(void)

{
  return;
}





// 函数: void FUN_18046da60(float param_1,uint64_t param_2,uint64_t param_3,int param_4,
void FUN_18046da60(float param_1,uint64_t param_2,uint64_t param_3,int param_4,
                  uint64_t param_5,float *param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  
  fVar5 = 1.0;
  fVar6 = 0.0;
  iVar1 = 3;
  param_6[1] = 0.0;
  param_6[2] = 0.0;
  *param_6 = 0.0;
  fVar7 = 0.6;
  do {
    FUN_18046d350(fVar5 * param_1,param_5,&fStack_a8);
    if (param_4 != 0) {
      fVar2 = fStack_a4 + fStack_a8 + fStack_a0;
      if (0.0 <= fVar2) {
        fVar2 = fVar2 + 2.0;
      }
      else {
        fVar2 = fVar2 + -2.0;
      }
      fStack_a8 = fStack_a8 * fVar2;
      fStack_a4 = fStack_a4 * fVar2;
      fStack_a0 = fStack_a0 * fVar2;
    }
    iVar1 = iVar1 + -1;
    fVar6 = fVar6 + fVar5;
    fVar2 = fStack_a8 * fVar5 + *param_6;
    fVar4 = fStack_a0 * fVar5;
    fVar3 = fStack_a4 * fVar5 + param_6[1];
    fVar5 = fVar5 * fVar7;
    fVar4 = fVar4 + param_6[2];
    *param_6 = fVar2;
    param_6[1] = fVar3;
    param_6[2] = fVar4;
    fVar7 = 0.61;
  } while (-1 < iVar1);
  fVar6 = 1.0 / fVar6;
  param_6[2] = fVar6 * fVar4;
  param_6[1] = fVar6 * fVar3;
  *param_6 = fVar6 * fVar2;
  return;
}



longlong * FUN_18046dc20(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  
  *param_1 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)*param_1;
  *param_1 = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  lVar5 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = lVar5;
  lVar5 = param_3[3];
  param_1[3] = param_3[2];
  param_1[4] = lVar5;
  uVar3 = *(int32_t *)((longlong)param_3 + 0x24);
  lVar5 = param_3[5];
  uVar4 = *(int32_t *)((longlong)param_3 + 0x2c);
  *(int *)(param_1 + 5) = (int)param_3[4];
  *(int32_t *)((longlong)param_1 + 0x2c) = uVar3;
  *(int *)(param_1 + 6) = (int)lVar5;
  *(int32_t *)((longlong)param_1 + 0x34) = uVar4;
  uVar3 = *(int32_t *)((longlong)param_3 + 0x34);
  lVar5 = param_3[7];
  uVar4 = *(int32_t *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 7) = (int)param_3[6];
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar3;
  *(int *)(param_1 + 8) = (int)lVar5;
  *(int32_t *)((longlong)param_1 + 0x44) = uVar4;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return param_1;
}





// 函数: void FUN_18046dcc0(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18046dcc0(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int32_t uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plStackX_8;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  if (*(code **)(*param_1 + 0x90) == (code *)&unknown_var_5664_ptr) {
    uVar3 = *(int32_t *)((longlong)param_1 + 0x84);
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x90))();
  }
  FUN_18046f0d0(param_2,uVar3);
  iVar5 = 0;
  lVar4 = param_1[0xc];
  if (param_1[0xd] - lVar4 >> 3 != 0) {
    lVar6 = 0;
    do {
      lVar1 = (longlong)*(longlong **)(lVar6 + lVar4) + 0xc;
      plStackX_8 = (longlong *)**(longlong **)(lVar6 + lVar4);
      uVar2 = *(ulonglong *)(param_2 + 8);
      if (uVar2 < *(ulonglong *)(param_2 + 0x10)) {
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_18046dc20(uVar2,&plStackX_8,lVar1);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x48;
      }
      else {
        FUN_18046f220(param_2,&plStackX_8,lVar1,param_4,uVar7);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      lVar4 = param_1[0xc];
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_1[0xd] - lVar4 >> 3));
  }
  return;
}





// 函数: void FUN_18046de20(longlong param_1,uint64_t *param_2,uint64_t *param_3,uint param_4)
void FUN_18046de20(longlong param_1,uint64_t *param_2,uint64_t *param_3,uint param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  ulonglong uVar7;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int8_t auStack_48 [64];
  
  uVar6 = param_2[1];
  uVar7 = (ulonglong)param_4;
  puVar1 = *(uint64_t **)(param_1 + 0x1c8 + uVar7 * 8);
  *puVar1 = *param_2;
  puVar1[1] = uVar6;
  uVar6 = param_2[3];
  lVar2 = *(longlong *)(param_1 + 0x1c8 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x10) = param_2[2];
  *(uint64_t *)(lVar2 + 0x18) = uVar6;
  uVar6 = param_2[5];
  lVar2 = *(longlong *)(param_1 + 0x1c8 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x20) = param_2[4];
  *(uint64_t *)(lVar2 + 0x28) = uVar6;
  uVar6 = param_2[7];
  lVar2 = *(longlong *)(param_1 + 0x1c8 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x30) = param_2[6];
  *(uint64_t *)(lVar2 + 0x38) = uVar6;
  puVar1 = *(uint64_t **)(param_1 + 0x1d8 + uVar7 * 8);
  uVar6 = param_3[1];
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  lVar2 = *(longlong *)(param_1 + 0x1d8 + uVar7 * 8);
  uVar6 = param_3[3];
  *(uint64_t *)(lVar2 + 0x10) = param_3[2];
  *(uint64_t *)(lVar2 + 0x18) = uVar6;
  lVar2 = *(longlong *)(param_1 + 0x1d8 + uVar7 * 8);
  uVar3 = *(int32_t *)((longlong)param_3 + 0x24);
  uVar4 = *(int32_t *)(param_3 + 5);
  uVar5 = *(int32_t *)((longlong)param_3 + 0x2c);
  *(int32_t *)(lVar2 + 0x20) = *(int32_t *)(param_3 + 4);
  *(int32_t *)(lVar2 + 0x24) = uVar3;
  *(int32_t *)(lVar2 + 0x28) = uVar4;
  *(int32_t *)(lVar2 + 0x2c) = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x1d8 + uVar7 * 8);
  uVar3 = *(int32_t *)((longlong)param_3 + 0x34);
  uVar4 = *(int32_t *)(param_3 + 7);
  uVar5 = *(int32_t *)((longlong)param_3 + 0x3c);
  *(int32_t *)(lVar2 + 0x30) = *(int32_t *)(param_3 + 6);
  *(int32_t *)(lVar2 + 0x34) = uVar3;
  *(int32_t *)(lVar2 + 0x38) = uVar4;
  *(int32_t *)(lVar2 + 0x3c) = uVar5;
  uVar6 = FUN_1800946d0(param_2,auStack_48);
  FUN_1800946d0(uVar6,&uStack_88,&system_data_bb50);
  puVar1 = *(uint64_t **)(param_1 + 0x1e8 + uVar7 * 8);
  *puVar1 = uStack_88;
  puVar1[1] = uStack_80;
  lVar2 = *(longlong *)(param_1 + 0x1e8 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x10) = uStack_78;
  *(uint64_t *)(lVar2 + 0x18) = uStack_70;
  lVar2 = *(longlong *)(param_1 + 0x1e8 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x20) = uStack_68;
  *(uint64_t *)(lVar2 + 0x28) = uStack_60;
  lVar2 = *(longlong *)(param_1 + 0x1e8 + uVar7 * 8);
  *(uint64_t *)(lVar2 + 0x30) = uStack_58;
  *(uint64_t *)(lVar2 + 0x38) = uStack_50;
  return;
}



uint64_t * FUN_18046e150(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2480_ptr;
  if (param_1[0x42] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x42] = 0;
  if (param_1[0x43] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x43] = 0;
  FUN_18048dff0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x2c0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046e1e0(longlong param_1,longlong param_2,uint param_3)
void FUN_18046e1e0(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  int32_t uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_148 [32];
  uint64_t uStack_128;
  longlong *plStack_120;
  uint64_t uStack_118;
  uint uStack_110;
  uint auStack_108 [2];
  longlong lStack_100;
  uint *puStack_f8;
  longlong lStack_e8;
  uint *puStack_e0;
  void *puStack_d8;
  code *pcStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_a8;
  longlong *plStack_a0;
  int8_t auStack_98 [64];
  longlong lStack_58;
  float fStack_50;
  ulonglong uStack_48;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  auStack_108[0] = param_3;
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_1804900e0();
  }
  *(longlong *)(param_1 + 0x1b8 + (ulonglong)auStack_108[0] * 8) = param_2;
  fVar12 = *(float *)(param_1 + 0x250);
  lStack_e8 = _DAT_180bfbb50;
  puStack_e0 = (uint *)uRam0000000180bfbb58;
  puStack_d8 = (void *)_DAT_180bfbb60;
  pcStack_d0 = (code *)uRam0000000180bfbb68;
  uStack_c8 = _DAT_180bfbb70;
  uStack_c4 = uRam0000000180bfbb74;
  uStack_c0 = uRam0000000180bfbb78;
  uStack_bc = uRam0000000180bfbb7c;
  uStack_b8 = _DAT_180bfbb80;
  uStack_b4 = uRam0000000180bfbb84;
  uStack_b0 = uRam0000000180bfbb88;
  uStack_ac = uRam0000000180bfbb8c;
  func_0x000180490630(*(uint64_t *)(param_1 + 0x1c8 + (ulonglong)auStack_108[0] * 8),
                      *(uint64_t *)(param_1 + 0x1d8 + (ulonglong)auStack_108[0] * 8),auStack_98);
  func_0x000180490630(auStack_98,&lStack_e8,auStack_98);
  lStack_58 = param_2;
  fVar11 = (float)tanf(*(float *)(param_2 + 0x11c) * 0.5);
  atanf(fVar11 / *(float *)(param_2 + 0x120));
  fVar11 = (float)tanf();
  fVar11 = fVar12 * fVar12 * fVar11;
  uVar7 = 0;
  fStack_50 = fVar11;
  if (*(char *)(param_1 + 0x268) == '\0') {
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0x84) != 0) {
      do {
        iVar8 = (int)uVar6;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar6 * 8);
        uVar6 = (ulonglong)auStack_108[0];
        if (*(char *)(uVar6 + 0x90 + lVar9) != '\0') {
          func_0x000180490630(*(uint64_t *)(lVar9 + 0x50),auStack_98,
                              *(uint64_t *)(lVar9 + 0x58 + uVar6 * 8));
          lVar2 = *(longlong *)(lVar9 + 0x58 + uVar6 * 8);
          fVar12 = *(float *)(lVar2 + 0x1c) * *(float *)(lVar9 + 0x9c) +
                   *(float *)(lVar2 + 0xc) * *(float *)(lVar9 + 0x98) +
                   *(float *)(lVar2 + 0x2c) * *(float *)(lVar9 + 0xa0) + *(float *)(lVar2 + 0x3c);
          *(float *)(lVar9 + 200) = fVar12;
          if (fVar12 <= 1.0) {
            *(int8_t *)(uVar6 + 0x92 + lVar9) = 0;
          }
          else {
            *(bool *)(uVar6 + 0x92 + lVar9) =
                 *(float *)(lVar9 + 0xa8) <= fVar12 * fVar11 &&
                 fVar12 * fVar11 != *(float *)(lVar9 + 0xa8);
          }
        }
        uVar6 = (ulonglong)(iVar8 + 1U);
      } while (iVar8 + 1U < *(uint *)(param_1 + 0x84));
    }
  }
  else {
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0x84) != 0) {
      do {
        FUN_180490b00(*(uint64_t *)(*(longlong *)(param_1 + 0x60) + uVar6 * 8),auStack_98,
                      auStack_108[0]);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x84));
    }
  }
  uVar10 = (ulonglong)auStack_108[0];
  *(int32_t *)(param_1 + 0x248 + uVar10 * 4) = 0;
  *(int32_t *)(param_1 + 0x240 + uVar10 * 4) = 0;
  *(int32_t *)(param_1 + 0x238 + uVar10 * 4) = 0;
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0x84) != 0) {
    do {
      iVar8 = (int)uVar6;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar6 * 8);
      if ((*(char *)(uVar10 + 0x90 + lVar9) != '\0') && (*(char *)(uVar10 + 0x92 + lVar9) == '\0'))
      {
        uVar5 = *(uint *)(param_1 + 0x238 + uVar10 * 4);
        *(uint *)(param_1 + 0x238 + uVar10 * 4) = uVar5 + 1;
        *(int *)(*(longlong *)(param_1 + 0x228 + uVar10 * 8) + (ulonglong)uVar5 * 4) = iVar8;
        piVar1 = (int *)(param_1 + 0x240 + uVar10 * 4);
        *piVar1 = *piVar1 + (*(int *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(iVar8 + 1U) * 4) -
                            *(int *)(*(longlong *)(param_1 + 0x90) + uVar6 * 4));
        piVar1 = (int *)(param_1 + 0x248 + uVar10 * 4);
        *piVar1 = *piVar1 + (*(int *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(iVar8 + 1U) * 4) -
                            *(int *)(*(longlong *)(param_1 + 0x98) + uVar6 * 4));
      }
      uVar6 = (ulonglong)(iVar8 + 1U);
    } while (iVar8 + 1U < *(uint *)(param_1 + 0x84));
  }
  FUN_18046e620(param_1,auStack_108[0]);
  uVar5 = auStack_108[0];
  uVar10 = (ulonglong)auStack_108[0];
  uVar6 = uVar7;
  do {
    uVar4 = (int)uVar6 * 8;
    *(int32_t *)(*(longlong *)(param_1 + 0x218 + uVar10 * 8) + (ulonglong)uVar4 * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x218 + uVar10 * 8) + (ulonglong)(uVar4 + 1) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x218 + uVar10 * 8) + (ulonglong)(uVar4 + 2) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x218 + uVar10 * 8) + (ulonglong)(uVar4 + 3) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x218 + uVar10 * 8) + (ulonglong)(uVar4 + 4) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x218 + uVar10 * 8) + (ulonglong)(uVar4 + 5) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x218 + uVar10 * 8) + (ulonglong)(uVar4 + 6) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x218 + uVar10 * 8) + (ulonglong)(uVar4 + 7) * 4) = 0;
    uVar4 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar4;
  } while (uVar4 < 4);
  if (*(int *)(param_1 + 0x238 + uVar10 * 4) != 0) {
    do {
      uStack_118 = *(uint64_t *)(param_1 + 0x218 + uVar10 * 8);
      plStack_120 = *(longlong **)(param_1 + 0x210 + uVar10 * 8);
      uStack_110 = uVar5;
      uStack_128 = CONCAT44(uStack_128._4_4_,
                            *(int *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x60) +
                                      (ulonglong)
                                      *(uint *)(*(longlong *)(param_1 + 0x228 + uVar10 * 8) +
                                               uVar7 * 4) * 8) + 0x6c) + -1);
      FUN_180490bd0();
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x238 + uVar10 * 4));
  }
  plStack_a0 = &lStack_e8;
  puStack_f8 = auStack_108;
  puStack_d8 = &unknown_var_928_ptr;
  pcStack_d0 = FUN_18046f3b0;
  lStack_100._0_4_ = (int32_t)param_1;
  plStack_120 = &lStack_e8;
  uStack_128 = 0xffffffffffffffff;
  uVar3 = (int32_t)lStack_100;
  lStack_100 = param_1;
  lStack_e8 = param_1;
  puStack_e0 = puStack_f8;
  FUN_18015b810(uVar3,0,0x20,1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_148);
}





