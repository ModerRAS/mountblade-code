#include "TaleWorlds.Native.Split.h"

// 03_rendering_part263.c - 8 个函数

// 函数: void FUN_180412c59(uint64_t param_1,longlong param_2,uint64_t param_3,uint param_4,
void FUN_180412c59(uint64_t param_1,longlong param_2,uint64_t param_3,uint param_4,
                  uint64_t param_5,uint64_t param_6,float param_7)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int32_t uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar9;
  uint64_t unaff_RDI;
  uint uVar10;
  longlong *in_R10;
  longlong in_R11;
  uint64_t unaff_R12;
  longlong lVar11;
  uint64_t unaff_R13;
  longlong lVar12;
  uint64_t unaff_R14;
  ulonglong uVar13;
  uint64_t unaff_R15;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float in_XMM5_Da;
  float fVar20;
  uint unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar21;
  float fVar22;
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
  int32_t unaff_XMM11_Da;
  float fVar26;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  float fVar27;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float unaff_XMM14_Da;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_R12;
  uVar10 = param_4 + 2;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  lVar12 = *(longlong *)(unaff_RBP + 0x170);
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  uVar13 = (ulonglong)param_4;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  do {
    iVar4 = *(int *)(param_2 + uVar13 * 4);
    lVar11 = (longlong)iVar4 * 0x58;
    if ((*(byte *)(lVar11 + 0x4c + lVar12) & 4) == 0) {
      iVar4 = iVar4 * 3;
      iVar7 = *(int *)(unaff_RBP + 0x180);
      lVar8 = (longlong)iVar4;
      if (*(int *)(unaff_RSI + lVar8 * 4) != iVar7) {
        if (*(int *)(unaff_RSI + 4 + lVar8 * 4) == iVar7) {
          param_4 = 1;
        }
        else {
          param_4 = 0xffffffff;
          if (*(int *)(unaff_RSI + 8 + lVar8 * 4) == iVar7) {
            param_4 = uVar10;
          }
        }
      }
      *(longlong *)(unaff_RBP + -0x70) = (longlong)(int)(iVar4 + param_4);
      uVar10 = *(uint *)(unaff_RSI + (longlong)(int)(iVar4 + param_4) * 4);
      (**(code **)(*in_R10 + 0x18))(in_R10,unaff_RBP + 0x40,(int)uVar10 >> 2,uVar10 & 3);
      fVar14 = *(float *)(unaff_RBP + 0x40);
      fVar15 = *(float *)(unaff_RBP + 0x44);
      fVar19 = *(float *)(unaff_RBP + 0x48);
      uVar1 = *(uint64_t *)(lVar11 + 0x28 + lVar12);
      uVar5 = *(int32_t *)(lVar11 + 0x30 + lVar12);
      uVar2 = *(uint64_t *)(lVar11 + 0x28 + lVar12);
      uVar3 = *(uint64_t *)(lVar11 + 0x28 + lVar12);
      *(int32_t *)(unaff_RBP + -0x48) = uVar5;
      *(int32_t *)(unaff_RBP + -0x38) = uVar5;
      fVar16 = fVar14 * (float)uVar1 + fVar15 * (float)((ulonglong)uVar1 >> 0x20) +
               fVar19 * *(float *)(unaff_RBP + -0x48);
      param_5._4_4_ = (float)uVar2 - fVar14 * fVar16;
      param_6._0_4_ = (float)((ulonglong)uVar3 >> 0x20) - fVar15 * fVar16;
      uVar1 = *(uint64_t *)(lVar11 + 0x34 + lVar12);
      fVar21 = *(float *)(unaff_RBP + -0x38) - fVar19 * fVar16;
      *(float *)(unaff_RBP + 8) = fVar21;
      fVar27 = *(float *)(unaff_RBP + 8);
      uVar5 = *(int32_t *)(lVar11 + 0x3c + lVar12);
      uVar2 = *(uint64_t *)(lVar11 + 0x34 + lVar12);
      *(int32_t *)(unaff_RBP + -0x28) = uVar5;
      *(int32_t *)(unaff_RBP + -0x18) = uVar5;
      fVar17 = fVar15 * (float)((ulonglong)uVar1 >> 0x20) + fVar14 * (float)uVar1 +
               fVar19 * *(float *)(unaff_RBP + -0x28);
      fVar23 = (float)uVar2 - fVar14 * fVar17;
      fVar16 = *(float *)(unaff_RBP + -0x18) - fVar19 * fVar17;
      fVar17 = (float)((ulonglong)*(uint64_t *)(lVar11 + 0x34 + lVar12) >> 0x20) - fVar15 * fVar17
      ;
      *(float *)(unaff_RBP + 0x18) = fVar16;
      *(int32_t *)(unaff_RBP + -0x80) = *(int32_t *)(unaff_RBP + 0x18);
      if (((unaff_XMM7_Da < (float)((uint)param_5._4_4_ & unaff_XMM6_Da)) ||
          (unaff_XMM7_Da < (float)((uint)(float)param_6 & unaff_XMM6_Da))) ||
         (unaff_XMM7_Da < (float)((uint)fVar21 & unaff_XMM6_Da))) {
        fVar27 = unaff_XMM14_Da /
                 SQRT((float)param_6 * (float)param_6 + param_5._4_4_ * param_5._4_4_ +
                      fVar21 * fVar21);
        param_5._4_4_ = fVar27 * param_5._4_4_;
        param_6._0_4_ = fVar27 * (float)param_6;
        fVar27 = fVar27 * fVar21;
      }
      if (((unaff_XMM7_Da < (float)((uint)fVar23 & unaff_XMM6_Da)) ||
          (unaff_XMM7_Da < (float)((uint)fVar17 & unaff_XMM6_Da))) ||
         (unaff_XMM7_Da < (float)((uint)fVar16 & unaff_XMM6_Da))) {
        fVar21 = unaff_XMM14_Da / SQRT(fVar23 * fVar23 + fVar17 * fVar17 + fVar16 * fVar16);
        fVar16 = fVar16 * fVar21;
        fVar23 = fVar21 * fVar23;
        fVar17 = fVar21 * fVar17;
      }
      else {
        fVar16 = *(float *)(unaff_RBP + -0x80);
      }
      iVar7 = param_4 + 1 + iVar4;
      if (1 < (int)param_4) {
        iVar7 = iVar4;
      }
      iVar7 = *(int *)(unaff_RSI + (longlong)iVar7 * 4);
      uVar10 = *(uint *)(unaff_RSI + *(longlong *)(unaff_RBP + -0x70) * 4);
      if ((int)param_4 < 1) {
        iVar9 = 2;
      }
      else {
        iVar9 = param_4 - 1;
      }
      in_R10 = *(longlong **)(unaff_RBP + -0x78);
      uVar6 = *(uint *)(unaff_RSI + (longlong)(iVar4 + iVar9) * 4);
      (**(code **)(*in_R10 + 0x10))(in_R10,unaff_RBP + 0x50,(int)uVar6 >> 2,uVar6 & 3);
      (**(code **)(*in_R10 + 0x10))(in_R10,unaff_RBP + 0x60,(int)uVar10 >> 2,uVar10 & 3);
      (**(code **)(*in_R10 + 0x10))(in_R10,unaff_RBP + 0x30,iVar7 >> 2);
      fVar26 = *(float *)(unaff_RBP + 0x50) - *(float *)(unaff_RBP + 0x60);
      fVar24 = *(float *)(unaff_RBP + 0x54) - *(float *)(unaff_RBP + 100);
      fVar25 = *(float *)(unaff_RBP + 0x58) - *(float *)(unaff_RBP + 0x68);
      fVar22 = *(float *)(unaff_RBP + 0x30) - *(float *)(unaff_RBP + 0x60);
      fVar18 = *(float *)(unaff_RBP + 0x34) - *(float *)(unaff_RBP + 100);
      fVar20 = *(float *)(unaff_RBP + 0x38) - *(float *)(unaff_RBP + 0x68);
      fVar21 = fVar15 * fVar24 + fVar14 * fVar26 + fVar19 * fVar25;
      fVar26 = fVar26 - fVar14 * fVar21;
      fVar24 = fVar24 - fVar15 * fVar21;
      fVar25 = fVar25 - fVar19 * fVar21;
      if (((unaff_XMM7_Da < (float)((uint)fVar26 & unaff_XMM6_Da)) ||
          (unaff_XMM7_Da < (float)((uint)fVar24 & unaff_XMM6_Da))) ||
         (unaff_XMM7_Da < (float)((uint)fVar25 & unaff_XMM6_Da))) {
        fVar21 = unaff_XMM14_Da / SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar25 * fVar25);
        fVar26 = fVar26 * fVar21;
        fVar24 = fVar24 * fVar21;
        fVar25 = fVar25 * fVar21;
      }
      fVar21 = fVar15 * fVar18 + fVar14 * fVar22 + fVar19 * fVar20;
      fVar18 = fVar18 - fVar15 * fVar21;
      fVar22 = fVar22 - fVar14 * fVar21;
      fVar20 = fVar20 - fVar19 * fVar21;
      if (((unaff_XMM7_Da < (float)((uint)fVar22 & unaff_XMM6_Da)) ||
          (unaff_XMM7_Da < (float)((uint)fVar18 & unaff_XMM6_Da))) ||
         (unaff_XMM7_Da < (float)((uint)fVar20 & unaff_XMM6_Da))) {
        fVar14 = unaff_XMM14_Da / SQRT(fVar22 * fVar22 + fVar18 * fVar18 + fVar20 * fVar20);
        fVar22 = fVar22 * fVar14;
        fVar18 = fVar18 * fVar14;
        fVar20 = fVar20 * fVar14;
      }
      fVar14 = fVar18 * fVar24 + fVar22 * fVar26 + fVar20 * fVar25;
      if (fVar14 <= -1.0) {
        fVar14 = -1.0;
      }
      if (unaff_XMM14_Da <= fVar14) {
        fVar14 = unaff_XMM14_Da;
      }
      fVar21 = (float)acosf(fVar14);
      uVar1 = *unaff_RBX;
      param_4 = 0;
      fVar14 = *(float *)((longlong)unaff_RBX + 4);
      lVar12 = *(longlong *)(unaff_RBP + 0x170);
      uVar10 = 2;
      param_2 = *(longlong *)(unaff_RBP + -0x68);
      *(int32_t *)(unaff_RBP + -8) = *(int32_t *)(unaff_RBX + 1);
      fVar15 = *(float *)(unaff_RBP + -8);
      in_XMM5_Da = param_7 + fVar21;
      fVar19 = *(float *)((longlong)unaff_RBX + 0x14);
      *unaff_RBX = CONCAT44(fVar14 + (float)param_6 * fVar21,(float)uVar1 + param_5._4_4_ * fVar21);
      uVar1 = unaff_RBX[2];
      *(float *)(unaff_RBP + 0x28) = fVar15 + fVar27 * fVar21;
      *(int32_t *)(unaff_RBX + 1) = *(int32_t *)(unaff_RBP + 0x28);
      unaff_RBX[2] = CONCAT44(fVar19 + fVar17 * fVar21,(float)uVar1 + fVar23 * fVar21);
      *(float *)((longlong)unaff_RBX + 0x1c) =
           fVar21 * *(float *)(lVar11 + 0x44 + lVar12) + *(float *)((longlong)unaff_RBX + 0x1c);
      fVar14 = *(float *)(lVar11 + 0x40 + lVar12);
      *(float *)(unaff_RBX + 3) = *(float *)(unaff_RBX + 3) + fVar16 * fVar21;
      *(float *)((longlong)unaff_RBX + 0xc) =
           fVar21 * fVar14 + *(float *)((longlong)unaff_RBX + 0xc);
      param_7 = in_XMM5_Da;
    }
    uVar13 = uVar13 + 1;
  } while ((longlong)uVar13 < *(longlong *)(unaff_RBP + -0x60));
  uVar1 = *unaff_RBX;
  fVar14 = *(float *)(unaff_RBX + 1);
  *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
  *(float *)(unaff_RBP + 0x38) = fVar14;
  if (((unaff_XMM7_Da < (float)((uint)uVar1 & unaff_XMM6_Da)) ||
      (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x34) & unaff_XMM6_Da))) ||
     (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x38) & unaff_XMM6_Da))) {
    uVar1 = *unaff_RBX;
    *(float *)(unaff_RBP + 0x38) = fVar14;
    fVar19 = (float)((ulonglong)uVar1 >> 0x20);
    *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
    fVar15 = unaff_XMM14_Da /
             SQRT(fVar19 * fVar19 + *(float *)(unaff_RBP + 0x30) * *(float *)(unaff_RBP + 0x30) +
                  *(float *)(unaff_RBP + 0x38) * *(float *)(unaff_RBP + 0x38));
    *unaff_RBX = CONCAT44(fVar19 * fVar15,(float)uVar1 * fVar15);
    *(float *)(unaff_RBX + 1) = fVar14 * fVar15;
  }
  uVar1 = unaff_RBX[2];
  fVar14 = *(float *)(unaff_RBX + 3);
  *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
  *(float *)(unaff_RBP + 0x38) = fVar14;
  if (((unaff_XMM7_Da < (float)((uint)uVar1 & unaff_XMM6_Da)) ||
      (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x34) & unaff_XMM6_Da))) ||
     (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x38) & unaff_XMM6_Da))) {
    uVar1 = unaff_RBX[2];
    *(float *)(unaff_RBP + 0x38) = fVar14;
    fVar19 = (float)((ulonglong)uVar1 >> 0x20);
    *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
    fVar15 = unaff_XMM14_Da /
             SQRT(fVar19 * fVar19 + *(float *)(unaff_RBP + 0x30) * *(float *)(unaff_RBP + 0x30) +
                  *(float *)(unaff_RBP + 0x38) * *(float *)(unaff_RBP + 0x38));
    unaff_RBX[2] = CONCAT44(fVar19 * fVar15,(float)uVar1 * fVar15);
    *(float *)(unaff_RBX + 3) = fVar14 * fVar15;
  }
  if (0.0 < in_XMM5_Da) {
    *(float *)((longlong)unaff_RBX + 0x1c) =
         (unaff_XMM14_Da / in_XMM5_Da) * *(float *)((longlong)unaff_RBX + 0x1c);
    *(float *)((longlong)unaff_RBX + 0xc) =
         (unaff_XMM14_Da / in_XMM5_Da) * *(float *)((longlong)unaff_RBX + 0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x70) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18041333b(void)
void FUN_18041333b(void)

{
  uint64_t uVar1;
  float fVar2;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  float fVar3;
  float fVar4;
  float in_XMM5_Da;
  uint unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM14_Da;
  
  uVar1 = *unaff_RBX;
  fVar2 = *(float *)(unaff_RBX + 1);
  *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
  *(float *)(unaff_RBP + 0x38) = fVar2;
  if (((unaff_XMM7_Da < (float)((uint)uVar1 & unaff_XMM6_Da)) ||
      (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x34) & unaff_XMM6_Da))) ||
     (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x38) & unaff_XMM6_Da))) {
    uVar1 = *unaff_RBX;
    *(float *)(unaff_RBP + 0x38) = fVar2;
    fVar4 = (float)((ulonglong)uVar1 >> 0x20);
    *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
    fVar3 = unaff_XMM14_Da /
            SQRT(fVar4 * fVar4 + *(float *)(unaff_RBP + 0x30) * *(float *)(unaff_RBP + 0x30) +
                 *(float *)(unaff_RBP + 0x38) * *(float *)(unaff_RBP + 0x38));
    *unaff_RBX = CONCAT44(fVar4 * fVar3,(float)uVar1 * fVar3);
    *(float *)(unaff_RBX + 1) = fVar2 * fVar3;
  }
  uVar1 = unaff_RBX[2];
  fVar2 = *(float *)(unaff_RBX + 3);
  *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
  *(float *)(unaff_RBP + 0x38) = fVar2;
  if (((unaff_XMM7_Da < (float)((uint)uVar1 & unaff_XMM6_Da)) ||
      (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x34) & unaff_XMM6_Da))) ||
     (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x38) & unaff_XMM6_Da))) {
    uVar1 = unaff_RBX[2];
    *(float *)(unaff_RBP + 0x38) = fVar2;
    fVar4 = (float)((ulonglong)uVar1 >> 0x20);
    *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
    fVar3 = unaff_XMM14_Da /
            SQRT(fVar4 * fVar4 + *(float *)(unaff_RBP + 0x30) * *(float *)(unaff_RBP + 0x30) +
                 *(float *)(unaff_RBP + 0x38) * *(float *)(unaff_RBP + 0x38));
    unaff_RBX[2] = CONCAT44(fVar4 * fVar3,(float)uVar1 * fVar3);
    *(float *)(unaff_RBX + 3) = fVar2 * fVar3;
  }
  if (unaff_XMM8_Da < in_XMM5_Da) {
    *(float *)((longlong)unaff_RBX + 0x1c) =
         (unaff_XMM14_Da / in_XMM5_Da) * *(float *)((longlong)unaff_RBX + 0x1c);
    *(float *)((longlong)unaff_RBX + 0xc) =
         (unaff_XMM14_Da / in_XMM5_Da) * *(float *)((longlong)unaff_RBX + 0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x70) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18041335a(void)
void FUN_18041335a(void)

{
  uint64_t uVar1;
  float in_EAX;
  uint64_t *unaff_RBX;
  longlong unaff_RBP;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_XMM5_Da;
  uint unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM14_Da;
  
  if ((unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x34) & unaff_XMM6_Da)) ||
     (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x38) & unaff_XMM6_Da))) {
    uVar1 = *unaff_RBX;
    *(float *)(unaff_RBP + 0x38) = in_EAX;
    fVar3 = (float)((ulonglong)uVar1 >> 0x20);
    *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
    fVar2 = unaff_XMM14_Da /
            SQRT(fVar3 * fVar3 + *(float *)(unaff_RBP + 0x30) * *(float *)(unaff_RBP + 0x30) +
                 *(float *)(unaff_RBP + 0x38) * *(float *)(unaff_RBP + 0x38));
    *unaff_RBX = CONCAT44(fVar3 * fVar2,(float)uVar1 * fVar2);
    *(float *)(unaff_RBX + 1) = in_EAX * fVar2;
  }
  uVar1 = unaff_RBX[2];
  fVar2 = *(float *)(unaff_RBX + 3);
  *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
  *(float *)(unaff_RBP + 0x38) = fVar2;
  if (((unaff_XMM7_Da < (float)((uint)uVar1 & unaff_XMM6_Da)) ||
      (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x34) & unaff_XMM6_Da))) ||
     (unaff_XMM7_Da < (float)(*(uint *)(unaff_RBP + 0x38) & unaff_XMM6_Da))) {
    uVar1 = unaff_RBX[2];
    *(float *)(unaff_RBP + 0x38) = fVar2;
    fVar4 = (float)((ulonglong)uVar1 >> 0x20);
    *(uint64_t *)(unaff_RBP + 0x30) = uVar1;
    fVar3 = unaff_XMM14_Da /
            SQRT(fVar4 * fVar4 + *(float *)(unaff_RBP + 0x30) * *(float *)(unaff_RBP + 0x30) +
                 *(float *)(unaff_RBP + 0x38) * *(float *)(unaff_RBP + 0x38));
    unaff_RBX[2] = CONCAT44(fVar4 * fVar3,(float)uVar1 * fVar3);
    *(float *)(unaff_RBX + 3) = fVar2 * fVar3;
  }
  if (unaff_XMM8_Da < in_XMM5_Da) {
    *(float *)((longlong)unaff_RBX + 0x1c) =
         (unaff_XMM14_Da / in_XMM5_Da) * *(float *)((longlong)unaff_RBX + 0x1c);
    *(float *)((longlong)unaff_RBX + 0xc) =
         (unaff_XMM14_Da / in_XMM5_Da) * *(float *)((longlong)unaff_RBX + 0xc);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x70) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1804134b2(void)
void FUN_1804134b2(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  float in_XMM5_Da;
  float unaff_XMM14_Da;
  
  *(float *)(unaff_RBX + 0x1c) = (unaff_XMM14_Da / in_XMM5_Da) * *(float *)(unaff_RBX + 0x1c);
  *(float *)(unaff_RBX + 0xc) = (unaff_XMM14_Da / in_XMM5_Da) * *(float *)(unaff_RBX + 0xc);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x70) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1804134f0(longlong param_1,int param_2,int param_3,uint param_4)
void FUN_1804134f0(longlong param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int32_t uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = (ulonglong)param_2;
  uVar11 = uVar10;
  do {
    iVar9 = (int)uVar11;
    uVar6 = uVar11 & 0xffffffff;
    bVar4 = (byte)param_4 & 0x1f;
    param_4 = param_4 + (param_4 << bVar4 | param_4 >> 0x20 - bVar4) + 3;
    iVar1 = *(int *)(param_1 + (longlong)(int)(iVar9 + param_4 % ((param_3 - iVar9) + 1U)) * 4);
    lVar8 = (longlong)param_3;
    iVar7 = param_3;
    do {
      uVar5 = (uint)uVar6;
      iVar2 = *(int *)(param_1 + uVar10 * 4);
      while (iVar2 < iVar1) {
        uVar10 = uVar10 + 1;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar2 = *(int *)(param_1 + uVar10 * 4);
      }
      iVar2 = *(int *)(param_1 + lVar8 * 4);
      while (iVar1 < iVar2) {
        lVar8 = lVar8 + -1;
        iVar7 = iVar7 + -1;
        iVar2 = *(int *)(param_1 + lVar8 * 4);
      }
      if (lVar8 < (longlong)uVar10) break;
      uVar3 = *(int32_t *)(param_1 + uVar10 * 4);
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      iVar7 = iVar7 + -1;
      *(int32_t *)(param_1 + uVar10 * 4) = *(int32_t *)(param_1 + lVar8 * 4);
      uVar10 = uVar10 + 1;
      *(int32_t *)(param_1 + lVar8 * 4) = uVar3;
      lVar8 = lVar8 + -1;
    } while ((longlong)uVar10 <= lVar8);
    if (iVar9 < iVar7) {
      FUN_1804134f0(param_1,uVar11 & 0xffffffff,iVar7,param_4);
    }
    if (param_3 <= (int)uVar5) {
      return;
    }
    uVar11 = (ulonglong)uVar5;
  } while( true );
}





// 函数: void FUN_1804135e0(longlong param_1,longlong param_2,longlong param_3,int param_4)
void FUN_1804135e0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  int iStackX_20;
  longlong lStack_50;
  longlong lStack_48;
  
  iVar7 = 0;
  if (0 < param_4) {
    piVar10 = (int *)(param_2 + 0x14);
    piVar16 = (int *)(param_3 + 8);
    do {
      iVar14 = piVar16[-2];
      iVar1 = piVar16[-1];
      piVar10[-3] = iVar7;
      iVar6 = iVar1;
      if (iVar1 <= iVar14) {
        iVar6 = iVar14;
        iVar14 = iVar1;
      }
      piVar10[-5] = iVar14;
      piVar10[-4] = iVar6;
      iVar14 = piVar16[-1];
      iVar1 = *piVar16;
      *piVar10 = iVar7;
      iVar6 = iVar1;
      if (iVar1 <= iVar14) {
        iVar6 = iVar14;
        iVar14 = iVar1;
      }
      piVar10[-2] = iVar14;
      piVar10[-1] = iVar6;
      iVar14 = *piVar16;
      iVar1 = piVar16[-2];
      piVar10[3] = iVar7;
      iVar6 = iVar1;
      if (iVar1 <= iVar14) {
        iVar6 = iVar14;
        iVar14 = iVar1;
      }
      iVar7 = iVar7 + 1;
      piVar10[1] = iVar14;
      piVar10[2] = iVar6;
      piVar10 = piVar10 + 9;
      piVar16 = piVar16 + 3;
    } while (iVar7 < param_4);
  }
  FUN_180413bd0(param_2,0,param_4 * 3 + -1,0,0x26065ca);
  lVar15 = (longlong)(param_4 * 3);
  iVar7 = 0;
  iVar14 = 1;
  if (1 < lVar15) {
    lVar13 = 0;
    lVar12 = lVar15 + -1;
    lVar9 = 0xc;
    do {
      if (*(int *)(param_2 + lVar13) != *(int *)(lVar9 + param_2)) {
        FUN_180413bd0(param_2,iVar7,iVar14 + -1,1,0x26065ca);
        lVar13 = lVar9;
        iVar7 = iVar14;
      }
      iVar14 = iVar14 + 1;
      lVar9 = lVar9 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar7 = 0;
  iVar14 = 1;
  if (1 < lVar15) {
    lVar13 = 0;
    piVar10 = (int *)(param_2 + 0xc);
    lVar12 = lVar15 + -1;
    do {
      if ((*(int *)(lVar13 + param_2) != *piVar10) || (*(int *)(lVar13 + 4 + param_2) != piVar10[1])
         ) {
        lVar13 = (longlong)piVar10 - param_2;
        FUN_180413bd0(param_2,iVar7,iVar14 + -1,2,0x26065ca);
        iVar7 = iVar14;
      }
      iVar14 = iVar14 + 1;
      piVar10 = piVar10 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (0 < lVar15) {
    piVar10 = (int *)(param_2 + 4);
    lStack_50 = 1;
    lStack_48 = lVar15;
    do {
      iVar7 = piVar10[1];
      iVar8 = 0;
      iVar14 = piVar10[-1];
      iVar1 = *piVar10;
      lVar12 = (longlong)(iVar7 * 3);
      iVar6 = *(int *)(param_3 + lVar12 * 4);
      if ((iVar6 == iVar14) || (iVar6 == iVar1)) {
        iVar17 = *(int *)(param_3 + 4 + lVar12 * 4);
        if ((iVar17 == iVar14) || (iVar17 == iVar1)) {
          iStackX_20 = 0;
          lVar13 = 0;
          iVar11 = iVar6;
        }
        else {
          iStackX_20 = 2;
          lVar13 = 8;
          iVar11 = *(int *)(param_3 + 8 + lVar12 * 4);
          iVar17 = iVar6;
        }
      }
      else {
        lVar13 = 4;
        iStackX_20 = 1;
        iVar11 = *(int *)(param_3 + 4 + lVar12 * 4);
        iVar17 = *(int *)(param_3 + 8 + lVar12 * 4);
      }
      if ((*(int *)((longlong)iVar7 * 0x58 + lVar13 + param_1) == -1) &&
         (bVar4 = true, lStack_50 < lVar15)) {
        piVar16 = piVar10 + 4;
        lVar12 = lStack_50;
        do {
          iVar6 = piVar16[-2];
          if ((iVar14 != iVar6) || (iVar2 = piVar16[-1], iVar1 != iVar2)) break;
          if (!bVar4) goto LAB_1804138ec;
          lVar9 = (longlong)(*piVar16 * 3);
          lVar13 = param_3 + lVar9 * 4;
          iVar3 = *(int *)(param_3 + lVar9 * 4);
          if ((iVar3 == iVar6) || (iVar3 == iVar2)) {
            iVar5 = *(int *)(lVar13 + 4);
            if ((iVar5 == iVar6) || (iVar5 == iVar2)) {
              iVar8 = 0;
              lVar9 = 0;
              iVar6 = iVar3;
            }
            else {
              iVar8 = 2;
              lVar9 = 8;
              iVar6 = *(int *)(lVar13 + 8);
              iVar5 = iVar3;
            }
          }
          else {
            iVar8 = 1;
            lVar9 = 4;
            iVar6 = *(int *)(lVar13 + 4);
            iVar5 = *(int *)(lVar13 + 8);
          }
          if (((iVar11 == iVar5) && (iVar17 == iVar6)) &&
             (*(int *)((longlong)*piVar16 * 0x58 + lVar9 + param_1) == -1)) {
            bVar4 = false;
          }
          else {
            lVar12 = lVar12 + 1;
            piVar16 = piVar16 + 3;
          }
        } while (lVar12 < lVar15);
        if (!bVar4) {
LAB_1804138ec:
          iVar14 = *(int *)(param_2 + 8 + lVar12 * 0xc);
          *(int *)(param_1 + ((longlong)iVar7 * 0x16 + (longlong)iStackX_20) * 4) = iVar14;
          *(int *)(param_1 + ((longlong)iVar14 * 0x16 + (longlong)iVar8) * 4) = iVar7;
        }
      }
      piVar10 = piVar10 + 3;
      lStack_50 = lStack_50 + 1;
      lStack_48 = lStack_48 + -1;
    } while (lStack_48 != 0);
  }
  return;
}





// 函数: void FUN_180413770(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4,
void FUN_180413770(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4,
                  uint64_t param_5,uint64_t param_6,longlong param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  longlong unaff_R15;
  longlong lStack0000000000000048;
  longlong lStack0000000000000050;
  longlong in_stack_000000a0;
  longlong in_stack_000000b0;
  int iStack00000000000000b8;
  
  piVar14 = (int *)(unaff_R15 + 4);
  lStack0000000000000048 = param_4;
  lStack0000000000000050 = param_3;
  do {
    iVar1 = piVar14[1];
    iVar12 = 0;
    iVar2 = piVar14[-1];
    iVar3 = *piVar14;
    lVar9 = (longlong)(iVar1 * 3);
    iVar8 = *(int *)(in_stack_000000b0 + lVar9 * 4);
    if ((iVar8 == iVar2) || (iVar8 == iVar3)) {
      iVar16 = *(int *)(in_stack_000000b0 + 4 + lVar9 * 4);
      if ((iVar16 == iVar2) || (iVar16 == iVar3)) {
        iStack00000000000000b8 = 0;
        lVar11 = 0;
        iVar13 = iVar8;
      }
      else {
        iStack00000000000000b8 = 2;
        lVar11 = 8;
        iVar13 = *(int *)(in_stack_000000b0 + 8 + lVar9 * 4);
        iVar16 = iVar8;
      }
    }
    else {
      lVar11 = 4;
      iStack00000000000000b8 = 1;
      iVar13 = *(int *)(in_stack_000000b0 + 4 + lVar9 * 4);
      iVar16 = *(int *)(in_stack_000000b0 + 8 + lVar9 * 4);
    }
    if ((*(int *)((longlong)iVar1 * 0x58 + lVar11 + in_stack_000000a0) == -1) &&
       (bVar6 = true, lStack0000000000000048 < param_3)) {
      piVar15 = piVar14 + 4;
      lVar9 = lStack0000000000000048;
      do {
        iVar8 = piVar15[-2];
        if ((iVar2 != iVar8) || (iVar4 = piVar15[-1], iVar3 != iVar4)) break;
        if (!bVar6) goto LAB_1804138ec;
        lVar10 = (longlong)(*piVar15 * 3);
        lVar11 = in_stack_000000b0 + lVar10 * 4;
        iVar5 = *(int *)(in_stack_000000b0 + lVar10 * 4);
        if ((iVar5 == iVar8) || (iVar5 == iVar4)) {
          iVar7 = *(int *)(lVar11 + 4);
          if ((iVar7 == iVar8) || (iVar7 == iVar4)) {
            iVar12 = 0;
            lVar10 = 0;
            iVar8 = iVar5;
          }
          else {
            iVar12 = 2;
            lVar10 = 8;
            iVar8 = *(int *)(lVar11 + 8);
            iVar7 = iVar5;
          }
        }
        else {
          iVar12 = 1;
          lVar10 = 4;
          iVar8 = *(int *)(lVar11 + 4);
          iVar7 = *(int *)(lVar11 + 8);
        }
        if (((iVar13 == iVar7) && (iVar16 == iVar8)) &&
           (*(int *)((longlong)*piVar15 * 0x58 + lVar10 + in_stack_000000a0) == -1)) {
          bVar6 = false;
        }
        else {
          lVar9 = lVar9 + 1;
          piVar15 = piVar15 + 3;
        }
      } while (lVar9 < param_7);
      if (!bVar6) {
LAB_1804138ec:
        iVar2 = *(int *)(unaff_R15 + 8 + lVar9 * 0xc);
        *(int *)(in_stack_000000a0 + ((longlong)iVar1 * 0x16 + (longlong)iStack00000000000000b8) * 4
                ) = iVar2;
        *(int *)(in_stack_000000a0 + ((longlong)iVar2 * 0x16 + (longlong)iVar12) * 4) = iVar1;
      }
    }
    piVar14 = piVar14 + 3;
    lStack0000000000000048 = lStack0000000000000048 + 1;
    lStack0000000000000050 = lStack0000000000000050 + -1;
    param_3 = param_7;
    if (lStack0000000000000050 == 0) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18041395a(void)
void FUN_18041395a(void)

{
  return;
}





