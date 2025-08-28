#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part447.c - 8 个函数

// 函数: void FUN_18050eef1(uint64_t param_1,uint64_t param_2,float param_3,uint64_t param_4,
void FUN_18050eef1(uint64_t param_1,uint64_t param_2,float param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)

{
  int64_t unaff_RBX;
  float fVar1;
  float fVar2;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar3;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  
  fVar1 = param_3 + *(float *)(unaff_RBX + 0x3c8);
  if (param_3 <= unaff_XMM7_Da) {
    if (unaff_XMM7_Da < fVar1) {
      unaff_XMM6_Da = unaff_XMM6_Da + ((fVar1 - unaff_XMM7_Da) * unaff_XMM12_Da) / fVar1;
    }
    else if (fVar1 + unaff_XMM14_Da < unaff_XMM7_Da) {
      fVar1 = (unaff_XMM7_Da - (fVar1 + unaff_XMM14_Da)) / (unaff_XMM13_Da - unaff_XMM14_Da);
      if (unaff_XMM10_Da <= fVar1) {
        fVar1 = unaff_XMM10_Da;
      }
      unaff_XMM6_Da = unaff_XMM6_Da + fVar1 * unaff_XMM12_Da;
    }
  }
  else {
    unaff_XMM6_Da = unaff_XMM6_Da + unaff_XMM12_Da;
  }
  fVar1 = ((param_6._4_4_ + (float)param_6) * 0.9 + 1.1) * unaff_XMM6_Da +
          (param_6._4_4_ + (float)param_6) * 0.2;
  if ((unaff_XMM8_Da <= unaff_XMM6_Da) && (unaff_XMM8_Da = unaff_XMM6_Da, 0.25 <= unaff_XMM6_Da)) {
    unaff_XMM8_Da = 0.25;
  }
  if (fVar1 <= unaff_XMM8_Da) {
    fVar1 = unaff_XMM8_Da;
  }
  fVar2 = unaff_XMM9_Da * 5.0;
  fVar3 = *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b0);
  if (fVar3 < unaff_XMM8_Da) {
    fVar2 = fVar2 + fVar2;
  }
  if (unaff_XMM10_Da <= fVar2) {
    fVar2 = unaff_XMM10_Da;
  }
  *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b0) = (unaff_XMM8_Da - fVar3) * fVar2 + fVar3;
  fVar3 = *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4);
  *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4) = (fVar1 - fVar3) * fVar2 + fVar3;
  fVar1 = *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4);
  if (unaff_XMM10_Da < fVar1) {
    fVar3 = unaff_XMM9_Da * 50.0;
    if (unaff_XMM10_Da <= unaff_XMM9_Da * 50.0) {
      fVar3 = unaff_XMM10_Da;
    }
    *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4) = fVar3 * (unaff_XMM10_Da - fVar1) + fVar1;
  }
  return;
}





// 函数: void FUN_18050efda(uint64_t param_1,uint64_t param_2,float param_3)
void FUN_18050efda(uint64_t param_1,uint64_t param_2,float param_3)

{
  float fVar1;
  int64_t unaff_RBX;
  float fVar2;
  float unaff_XMM6_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  if (0.25 <= unaff_XMM6_Da) {
    unaff_XMM6_Da = 0.25;
  }
  if (param_3 <= unaff_XMM6_Da) {
    param_3 = unaff_XMM6_Da;
  }
  fVar2 = unaff_XMM9_Da * 5.0;
  fVar1 = *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b0);
  if (fVar1 < unaff_XMM6_Da) {
    fVar2 = fVar2 + fVar2;
  }
  if (unaff_XMM10_Da <= fVar2) {
    fVar2 = unaff_XMM10_Da;
  }
  *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b0) = (unaff_XMM6_Da - fVar1) * fVar2 + fVar1;
  fVar1 = *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4);
  *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4) = (param_3 - fVar1) * fVar2 + fVar1;
  fVar1 = *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4);
  if (unaff_XMM10_Da < fVar1) {
    fVar2 = unaff_XMM9_Da * 50.0;
    if (unaff_XMM10_Da <= unaff_XMM9_Da * 50.0) {
      fVar2 = unaff_XMM10_Da;
    }
    *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4) = fVar2 * (unaff_XMM10_Da - fVar1) + fVar1;
  }
  return;
}





// 函数: void FUN_18050f01d(uint64_t param_1,float param_2,float param_3,float param_4)
void FUN_18050f01d(uint64_t param_1,float param_2,float param_3,float param_4)

{
  int64_t in_RAX;
  int64_t unaff_RBX;
  float fVar1;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar2;
  float unaff_XMM10_Da;
  
  fVar1 = param_2 + param_2;
  if (unaff_XMM10_Da <= param_2 + param_2) {
    fVar1 = unaff_XMM10_Da;
  }
  *(float *)(in_RAX + 0x5b0) = (unaff_XMM8_Da - param_4) * fVar1 + param_4;
  fVar2 = *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4);
  *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4) = (param_3 - fVar2) * fVar1 + fVar2;
  fVar1 = *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4);
  if (unaff_XMM10_Da < fVar1) {
    fVar2 = unaff_XMM9_Da * 50.0;
    if (unaff_XMM10_Da <= unaff_XMM9_Da * 50.0) {
      fVar2 = unaff_XMM10_Da;
    }
    *(float *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5b4) = fVar2 * (unaff_XMM10_Da - fVar1) + fVar1;
  }
  return;
}





// 函数: void FUN_18050f08d(float param_1)
void FUN_18050f08d(float param_1)

{
  int64_t in_RAX;
  float unaff_XMM9_Da;
  float fVar1;
  float unaff_XMM10_Da;
  
  fVar1 = unaff_XMM9_Da * 50.0;
  if (unaff_XMM10_Da <= unaff_XMM9_Da * 50.0) {
    fVar1 = unaff_XMM10_Da;
  }
  *(float *)(in_RAX + 0x5b4) = fVar1 * (unaff_XMM10_Da - param_1) + param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050f1e0(int64_t param_1,float param_2)
void FUN_18050f1e0(int64_t param_1,float param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int32_t uVar5;
  int32_t uVar6;
  byte bVar7;
  uint uVar8;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint64_t uVar14;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float afStackX_8 [2];
  float afStackX_10 [2];
  float afStackX_18 [2];
  float afStackX_20 [2];
  float afStack_114 [3];
  float fStack_108;
  float fStack_f8;
  float fStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  uint64_t uVar9;
  
  lVar2 = *(int64_t *)(param_1 + 0x590);
  uVar10 = 0;
  uVar9 = uVar10;
  fVar19 = 3.4028235e+38;
  fVar11 = -3.4028235e+38;
  fVar15 = 3.4028235e+38;
  fVar12 = -3.4028235e+38;
  afStackX_10[0] = param_2;
  do {
    FUN_18058b9f0(lVar2,uVar9,afStackX_10,afStackX_8,afStackX_18,afStackX_20);
    uVar8 = (int)uVar9 + 1;
    uVar9 = (uint64_t)uVar8;
    fVar16 = afStackX_8[0] * -1.3659099;
    if (fVar19 <= afStackX_8[0] * -1.3659099) {
      fVar16 = fVar19;
    }
    fVar13 = afStackX_10[0] * 1.2566371;
    if (afStackX_10[0] * 1.2566371 <= fVar11) {
      fVar13 = fVar11;
    }
    fVar17 = afStackX_18[0] * 1.2566371;
    if (afStackX_18[0] * 1.2566371 <= fVar12) {
      fVar17 = fVar12;
    }
    fVar18 = afStackX_20[0] * -1.3659099;
    if (fVar15 <= afStackX_20[0] * -1.3659099) {
      fVar18 = fVar15;
    }
    fVar19 = fVar16;
    fVar11 = fVar13;
    fVar15 = fVar18;
    fVar12 = fVar17;
  } while ((int)uVar8 < 2);
  fVar11 = (float)asinf(*(int32_t *)(lVar2 + 0x25a0));
  fVar19 = fVar11;
  if (fVar11 <= fVar13) {
    fVar19 = fVar13;
  }
  if (fVar16 <= fVar11) {
    fVar11 = fVar16;
  }
  fVar15 = *(float *)(*(int64_t *)(param_1 + 0x20) + 0x120) +
           *(float *)(*(int64_t *)(param_1 + 0x20) + 0x34);
  if (fVar17 <= fVar19) {
    fVar19 = fVar17;
  }
  if (fVar11 <= fVar18) {
    fVar11 = fVar18;
  }
  if (fVar15 <= 3.1415927) {
    if (fVar15 < -3.1415927) {
      fVar15 = fVar15 + 6.2831855;
    }
  }
  else {
    fVar15 = fVar15 + -6.2831855;
  }
  fVar12 = *(float *)(param_1 + 0x4b0) + *(float *)(param_1 + 0x4ac);
  fVar15 = fVar12 - fVar15;
  if (fVar15 <= 3.1415927) {
    if (fVar15 < -3.1415927) {
      fVar15 = fVar15 + 6.2831855;
    }
  }
  else {
    fVar15 = fVar15 + -6.2831855;
  }
  fVar16 = *(float *)(lVar2 + 0x2434);
  if ((0.0 < fVar19) || (fVar11 < 0.0)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(fVar12);
  }
  iVar1 = *(int *)(lVar2 + 0x2498);
  if (iVar1 == -1) {
    afStackX_20[0] = 0.0;
  }
  else {
    afStackX_20[0] = *(float *)((int64_t)iVar1 * 0x68 + 0x58 + render_system_memory);
  }
  bVar7 = 0xff;
  if (iVar1 != -1) {
    bVar7 = *(byte *)((int64_t)iVar1 * 0x68 + 0x60 + render_system_memory);
  }
  if ((fVar16 <= 0.0) || (fVar12 = (float)func_0x000180534e60(lVar2,1), fVar12 <= 0.0)) {
    fVar12 = 0.0;
    afStackX_10[0] = 0.0;
  }
  else {
    fVar12 = *(float *)(param_1 + 0xa40);
    afStackX_10[0] = *(float *)(param_1 + 0xa44);
  }
  if (*(int64_t *)(lVar2 + 0x24a8) != 0) {
    uVar10 = *(uint64_t *)(*(int64_t *)(lVar2 + 0x24a8) + 0x1d0);
  }
  if ((((*(uint64_t *)(lVar2 + 0x24b8) | uVar10) >> 0x18 & 1) != 0) ||
     ((((fVar19 <= 0.0 && (0.0 <= fVar11)) && (afStackX_10[0] <= 0.0)) && (0.0 <= fVar12)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8);
  fVar13 = 0.0;
  if ((fVar16 <= 0.0) || (fVar13 = fVar15, *(int *)(param_1 + 0x564) < 0)) goto LAB_18050f687;
  afStackX_18[0] = 0.0;
  afStackX_8[0] = 0.0;
  bVar4 = true;
  FUN_18058c410(lVar2,afStackX_10[0],afStackX_8,afStackX_18,afStack_114);
  fVar16 = afStackX_8[0] * 0.35;
  fVar17 = afStackX_18[0] * 0.35;
  if ((bVar7 < 3) || (afStackX_20[0] == 4.48416e-44)) {
    fVar18 = *(float *)(*(int64_t *)
                         ((int64_t)*(int *)(param_1 + 0x564) * 0xa60 + 0x37d0 +
                         *(int64_t *)(param_1 + 0x8d8)) + 0x88);
    fVar17 = fVar18 + fVar17;
    fVar16 = fVar18 + fVar16;
  }
  fVar16 = fVar16 - fVar17;
  fVar17 = fVar16 * 0.5 + fVar17;
  fVar18 = fVar16;
  if ((*(int *)(param_1 + 0x570) == 1) && (fVar18 = fVar17 + 0.001, fVar17 + 0.001 <= fVar16)) {
    fVar18 = fVar16;
  }
  if (((lVar3 == 0) ||
      ((*(byte *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0)) >> 1
       & 1) == 0)) && (bVar7 == 2)) {
    if (afStack_114[0] <= 0.0) goto LAB_18050f687;
    if (0.0 < (fVar15 - fVar17) * *(float *)(lVar2 + 0x2598)) {
      if (*(float *)(lVar2 + 0x2598) <= 0.0) {
        fVar15 = fVar17 + fVar18;
        fVar13 = fVar15;
      }
      else {
        fVar15 = fVar17 - fVar18;
        fVar13 = fVar15;
      }
      goto LAB_18050f687;
    }
  }
  if (((0.0 < afStack_114[0]) && (fVar16 = fVar17 - fVar18, fVar16 < fVar15)) &&
     (fVar18 = fVar17 + fVar18, fVar15 < fVar18)) {
    if ((*(int *)(param_1 + 0x570) == 1) &&
       ((lVar3 == 0 ||
        ((*(byte *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0)) >>
          1 & 1) == 0)))) {
      fVar17 = 0.0;
    }
    fVar13 = fVar16;
    if (fVar17 < fVar15) {
      fVar13 = fVar18;
    }
  }
LAB_18050f687:
  fStack_f8 = 0.0;
  fStack_f4 = 1.0;
  uStack_f0 = 0;
  uStack_ec = 0x7f7fffff;
  *(uint64_t *)(lVar2 + 0xa220) = *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x94);
  *(uint64_t *)(lVar2 + 0xa228) = *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x58);
  if (bVar4) {
    if ((fVar13 < fVar12) || (afStackX_10[0] <= fVar13)) {
      fVar16 = ABS(fVar12 - fVar13);
      if (3.1415927 < fVar16) {
        fVar16 = 6.2831855 - fVar16;
      }
      fVar17 = ABS(afStackX_10[0] - fVar13);
      if (3.1415927 < fVar17) {
        fVar17 = 6.2831855 - fVar17;
      }
      fVar13 = afStackX_10[0];
      if (fVar16 < fVar17) {
        fVar13 = fVar12;
      }
    }
    if ((0.0 < fVar11) || (fVar12 = 0.0, fVar19 <= 0.0)) {
      fVar16 = ABS(fVar11 - 0.0);
      if (3.1415927 < fVar16) {
        fVar16 = 6.2831855 - fVar16;
      }
      fVar17 = ABS(fVar19 - 0.0);
      if (3.1415927 < fVar17) {
        fVar17 = 6.2831855 - fVar17;
      }
      fVar12 = fVar19;
      if (fVar16 < fVar17) {
        fVar12 = fVar11;
      }
    }
    uVar14 = func_0x0001808fd446(fVar12,fVar13);
    fStack_f4 = (float)((uint64_t)uVar14 >> 0x20);
    uStack_f0 = (int32_t)uVar14;
    fStack_f8 = extraout_XMM0_Dc * fStack_f4;
    fStack_f4 = extraout_XMM0_Dd * fStack_f4;
    fVar19 = -fStack_f8;
    fStack_f8 = -fStack_f8;
  }
  else {
    fVar19 = 0.0;
  }
  uVar6 = uStack_ec;
  uVar5 = uStack_f0;
  fVar11 = fStack_f4;
  fVar12 = (float)atan2f(*(uint *)(lVar2 + 0x2588) ^ 0x80000000,*(int32_t *)(lVar2 + 0x258c));
  fVar16 = (float)atan2f(*(uint *)(lVar2 + 0x2598) ^ 0x80000000,*(int32_t *)(lVar2 + 0x259c));
  fVar13 = (float)atan2f(-fVar19,fVar11);
  if ((fVar12 - fVar16) * (fVar12 - fVar13) < 0.0) {
    *(byte *)(lVar2 + 0x3424) = *(byte *)(lVar2 + 0x3424) & 0xfd;
  }
  *(float *)(lVar2 + 0x2598) = fVar19;
  *(float *)(lVar2 + 0x259c) = fVar11;
  *(int32_t *)(lVar2 + 0x25a0) = uVar5;
  *(int32_t *)(lVar2 + 0x25a4) = uVar6;
  afStackX_10[0] = *(float *)(param_1 + 0x4b4) + *(float *)(param_1 + 0x4a4);
  fStack_108 = afStackX_10[0];
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar15);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180510080(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)
void FUN_180510080(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  float fVar4;
  
  if ((system_status_flag == 1) || (system_status_flag == 4)) {
    fVar4 = (float)func_0x000180588750(*(int64_t *)(param_1 + 0x8d8) + 0x87b754);
    param_4 = param_4 + param_4;
    lVar2 = *(int64_t *)(param_1 + 0x8d8) + 0x87b754;
  }
  else {
    param_4 = param_4 + param_4;
    if (*(int64_t *)(param_1 + 0x8e8) == 0) {
      uVar3 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar3 = uVar3 ^ uVar3 >> 0x11;
      uVar3 = uVar3 ^ uVar3 << 5;
      uVar1 = uVar3 << 0xd ^ uVar3;
      uVar1 = uVar1 ^ uVar1 >> 0x11;
      *(uint *)(param_1 + 0x748) = uVar1 ^ uVar1 << 5;
      param_4 = ((float)(uVar3 - 1) * 2.3283064e-10 - 0.5) * param_4;
      goto LAB_18051019a;
    }
    fVar4 = (float)func_0x000180588750(*(int64_t *)(param_1 + 0x8e8) + 8);
    lVar2 = *(int64_t *)(param_1 + 0x8e8) + 8;
  }
  param_4 = (fVar4 - 0.5) * param_4;
  func_0x000180588750(lVar2,param_4);
LAB_18051019a:
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_4 * 0.75);
}



uint64_t * FUN_180510260(int64_t param_1,uint64_t *param_2,int64_t param_3)

{
  float fVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  float *pfVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  uint64_t uStack_140;
  float fStack_138;
  float fStack_134;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int32_t uStack_9c;
  
  if ((*(uint64_t *)
        ((int64_t)*(int *)(param_3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(param_3 + 0xd0)) &
      0x100000000) == 0) {
    FUN_180534d00(*(uint64_t *)(param_1 + 0x658),&fStack_178,
                  *(int8_t *)
                   (*(int64_t *)
                     (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260) +
                     0x210) + 0xde));
    pfVar9 = (float *)FUN_1801c0fb0(&fStack_178,&fStack_108,param_1 + 0x8a0);
    fVar13 = fStack_168 + *pfVar9;
    fVar15 = fStack_164 + pfVar9[1];
    fVar16 = fStack_160 + pfVar9[2];
    fStack_15c = 3.4028235e+38;
    fStack_168 = fVar13;
    fStack_164 = fVar15;
    fStack_160 = fVar16;
    FUN_18063b5f0(&fStack_108,&fStack_178);
    fStack_148 = fStack_108;
    fStack_144 = fStack_104;
    uStack_140 = CONCAT44(uStack_fc,fStack_100);
    lVar11 = *(int64_t *)(param_1 + 0x6d8);
    fStack_138 = fStack_f8;
    fStack_134 = fStack_f4;
    uStack_130 = CONCAT44(fStack_ec,fStack_f0);
    uStack_128 = uStack_e8;
    uStack_120 = uStack_e0;
    fStack_10c = 3.4028235e+38;
    fStack_118 = fVar13;
    fStack_114 = fVar15;
    fStack_110 = fVar16;
  }
  else {
    FUN_180534d00(*(uint64_t *)(param_1 + 0x658),&fStack_108,
                  *(int8_t *)(*(int64_t *)(param_1 + 0x590) + 0x25fb));
    lVar2 = *(int64_t *)(param_3 + 0xf8);
    lVar11 = *(int64_t *)(param_1 + 0x6d8);
    fStack_a8 = *(float *)(lVar2 + 0xcc);
    fStack_a4 = *(float *)(lVar2 + 0xd0);
    fStack_a0 = *(float *)(lVar2 + 0xd4);
    uStack_9c = *(int32_t *)(lVar2 + 0xd8);
    fVar12 = 1.0 / *(float *)(lVar11 + 0x8c0);
    fVar13 = *(float *)(lVar2 + 0x9c);
    fVar15 = *(float *)(lVar2 + 0xa0);
    fVar16 = *(float *)(lVar2 + 0xa4);
    fVar1 = *(float *)(lVar2 + 0xac);
    fVar14 = *(float *)(lVar2 + 0xb0);
    fVar17 = *(float *)(lVar2 + 0xb4);
    fVar18 = *(float *)(lVar2 + 0xbc);
    fVar3 = *(float *)(lVar2 + 0xc0);
    fVar4 = *(float *)(lVar2 + 0xc4);
    fVar20 = fStack_a8 * fVar12;
    fVar19 = fStack_a4 * fVar12;
    fVar12 = fStack_a0 * fVar12;
    FUN_18063b5f0(&fStack_178,&fStack_108);
    fStack_148 = fVar15 * fStack_168 + fVar13 * fStack_178 + fVar16 * fStack_158;
    fStack_144 = fVar15 * fStack_164 + fVar13 * fStack_174 + fVar16 * fStack_154;
    uStack_140 = CONCAT44(fVar15 * fStack_15c + fVar13 * fStack_16c + fVar16 * fStack_14c,
                          fVar15 * fStack_160 + fVar13 * fStack_170 + fVar16 * fStack_150);
    fStack_138 = fVar14 * fStack_168 + fVar1 * fStack_178 + fVar17 * fStack_158;
    fStack_134 = fVar14 * fStack_164 + fVar1 * fStack_174 + fVar17 * fStack_154;
    uStack_130 = CONCAT44(fVar14 * fStack_15c + fVar1 * fStack_16c + fVar17 * fStack_14c,
                          fVar14 * fStack_160 + fVar1 * fStack_170 + fVar17 * fStack_150);
    fStack_10c = fVar19 * fStack_15c + fVar20 * fStack_16c + fVar12 * fStack_14c + fStack_ec;
    uStack_128 = CONCAT44(fVar3 * fStack_164 + fVar18 * fStack_174 + fVar4 * fStack_154,
                          fVar3 * fStack_168 + fVar18 * fStack_178 + fVar4 * fStack_158);
    uStack_120 = CONCAT44(fVar3 * fStack_15c + fVar18 * fStack_16c + fVar4 * fStack_14c,
                          fVar3 * fStack_160 + fVar18 * fStack_170 + fVar4 * fStack_150);
    fStack_118 = fVar19 * fStack_168 + fVar20 * fStack_178 + fVar12 * fStack_158 + fStack_f8;
    fStack_114 = fVar19 * fStack_164 + fVar20 * fStack_174 + fVar12 * fStack_154 + fStack_f4;
    fStack_110 = fVar19 * fStack_160 + fVar20 * fStack_170 + fVar12 * fStack_150 + fStack_f0;
  }
  lVar2 = *(int64_t *)(lVar11 + 0x8a8);
  fStack_16c = 3.4028235e+38;
  fVar13 = *(float *)(lVar2 + 0x80);
  fVar15 = *(float *)(lVar2 + 0x70);
  fVar16 = *(float *)(lVar2 + 0x84);
  fVar1 = *(float *)(lVar2 + 0x74);
  fStack_100 = *(float *)(lVar2 + 0x98);
  fVar18 = fVar15 * fStack_118 + fVar13 * fStack_114 + *(float *)(lVar2 + 0xa0);
  fVar17 = fVar1 * fStack_118 + fVar16 * fStack_114 + *(float *)(lVar2 + 0xa4);
  fVar14 = fStack_100 * fStack_110 + *(float *)(lVar2 + 0xa8);
  fStack_c0 = fStack_100 * (float)uStack_130;
  fStack_d0 = fStack_100 * (float)uStack_140;
  fStack_100 = fStack_100 * (float)uStack_120;
  fStack_108 = fVar15 * (float)uStack_128 + fVar13 * uStack_128._4_4_;
  fStack_104 = fVar1 * (float)uStack_128 + fVar16 * uStack_128._4_4_;
  fStack_c8 = fVar15 * fStack_138 + fVar13 * fStack_134;
  fStack_d8 = fVar15 * fStack_148 + fVar13 * fStack_144;
  fStack_c4 = fVar1 * fStack_138 + fVar16 * fStack_134;
  fStack_d4 = fVar1 * fStack_148 + fVar16 * fStack_144;
  uStack_9c = 0x7f7fffff;
  uStack_fc = 0x7f7fffff;
  uStack_ac = 0x7f7fffff;
  uStack_cc = 0x7f7fffff;
  uStack_bc = 0x7f7fffff;
  fStack_b8 = fStack_108;
  fStack_b4 = fStack_104;
  fStack_b0 = fStack_100;
  fStack_a8 = fVar18;
  fStack_a4 = fVar17;
  fStack_a0 = fVar14;
  puVar10 = (uint64_t *)
            FUN_180535610(&fStack_d8,&fStack_108,*(int32_t *)(lVar11 + 0x8c0),fStack_c4,fVar18,
                          fVar14);
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  *param_2 = *puVar10;
  param_2[1] = uVar5;
  uVar5 = puVar10[4];
  uVar8 = puVar10[5];
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *(float *)(param_2 + 6) = fVar18;
  *(float *)((int64_t)param_2 + 0x34) = fVar17;
  *(float *)(param_2 + 7) = fVar14;
  *(int32_t *)((int64_t)param_2 + 0x3c) = 0x7f7fffff;
  param_2[4] = uVar5;
  param_2[5] = uVar8;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180510780(int64_t param_1,float *param_2,int64_t param_3)
void FUN_180510780(int64_t param_1,float *param_2,int64_t param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int64_t lVar12;
  float *pfVar13;
  uint *puVar14;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auStack_f8 [32];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  int8_t auStack_88 [16];
  int8_t auStack_78 [16];
  uint64_t uStack_68;
  uint64_t uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  if ((*(uint64_t *)
        ((int64_t)*(int *)(param_3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(param_3 + 0xd0)) &
      0x100000000) == 0) {
    puVar14 = (uint *)((int64_t)
                       *(char *)(*(int64_t *)
                                  (*(int64_t *)
                                    (*(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8) + 0x260)
                                  + 0x210) + 0xde) * 0x100 +
                      *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar14;
      *puVar14 = *puVar14 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_a8 = puVar14[1];
    uStack_a4 = puVar14[2];
    uStack_a0 = puVar14[3];
    uStack_9c = puVar14[4];
    fVar17 = (float)puVar14[5];
    fVar16 = (float)puVar14[6];
    fVar18 = (float)puVar14[7];
    uStack_8c = puVar14[8];
    *puVar14 = 0;
    fStack_98 = fVar17;
    fStack_94 = fVar16;
    fStack_90 = fVar18;
    uStack_48 = uStack_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    fStack_38 = fVar17;
    fStack_34 = fVar16;
    fStack_30 = fVar18;
    uStack_2c = uStack_8c;
    pfVar13 = (float *)FUN_1801c0fb0(&uStack_a8,auStack_78,param_1 + 0x8a0);
    lVar15 = *(int64_t *)(param_1 + 0x6d8);
    fVar16 = fVar16 + pfVar13[1];
  }
  else {
    puVar14 = (uint *)((int64_t)*(char *)(*(int64_t *)(param_1 + 0x590) + 0x25fb) * 0x100 +
                      *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar14;
      *puVar14 = *puVar14 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_c8 = *(uint64_t *)(puVar14 + 1);
    uStack_c0 = *(uint64_t *)(puVar14 + 3);
    fVar17 = (float)puVar14[5];
    fVar16 = (float)puVar14[6];
    fVar18 = (float)puVar14[7];
    uStack_ac = puVar14[8];
    *puVar14 = 0;
    lVar12 = *(int64_t *)(param_3 + 0xf8);
    lVar15 = *(int64_t *)(param_1 + 0x6d8);
    fStack_d0 = 1.0 / *(float *)(lVar15 + 0x8c0);
    fStack_d8 = fStack_d0 * *(float *)(lVar12 + 0xcc);
    fStack_d4 = fStack_d0 * *(float *)(lVar12 + 0xd0);
    fStack_d0 = fStack_d0 * *(float *)(lVar12 + 0xd4);
    uStack_cc = 0x7f7fffff;
    fStack_b8 = fVar17;
    fStack_b4 = fVar16;
    fStack_b0 = fVar18;
    uStack_68 = uStack_c8;
    uStack_60 = uStack_c0;
    fStack_58 = fVar17;
    fStack_54 = fVar16;
    fStack_50 = fVar18;
    uStack_4c = uStack_ac;
    pfVar13 = (float *)FUN_1801c0fb0(&uStack_c8,auStack_88,&fStack_d8);
    fVar16 = fVar16 + pfVar13[1];
  }
  lVar15 = *(int64_t *)(lVar15 + 0x8a8);
  fVar2 = *pfVar13;
  fVar3 = pfVar13[2];
  fVar4 = *(float *)(lVar15 + 0x80);
  fVar5 = *(float *)(lVar15 + 0x84);
  fVar6 = *(float *)(lVar15 + 0x74);
  fVar7 = *(float *)(lVar15 + 0x70);
  fVar8 = *(float *)(lVar15 + 0x98);
  fVar9 = *(float *)(lVar15 + 0xa8);
  fVar10 = *(float *)(lVar15 + 0xa4);
  fVar11 = *(float *)(lVar15 + 0xa0);
  param_2[3] = 3.4028235e+38;
  param_2[2] = (fVar18 + fVar3) * fVar8 + fVar9;
  param_2[1] = (fVar17 + fVar2) * fVar6 + fVar16 * fVar5 + fVar10;
  *param_2 = fVar16 * fVar4 + (fVar17 + fVar2) * fVar7 + fVar11;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805109d0(int64_t param_1)
void FUN_1805109d0(int64_t param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int8_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t uStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  float fStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_158 = 0;
  puVar6 = *(uint64_t **)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8);
  FUN_180510260(param_1,&uStack_c8,puVar6);
  lVar5 = *(int64_t *)(param_1 + 0x590);
  fStack_160 = *(float *)(lVar5 + 0x2590);
  fStack_164 = *(float *)(lVar5 + 0x258c) * *(float *)(param_1 + 0x534) +
               *(float *)(lVar5 + 0x2588) * *(float *)(param_1 + 0x524);
  fStack_168 = *(float *)(lVar5 + 0x258c) * *(float *)(param_1 + 0x530) +
               *(float *)(lVar5 + 0x2588) * *(float *)(param_1 + 0x520);
  uStack_15c = 0x7f7fffff;
  lVar5 = *(int64_t *)(param_1 + 0x728);
  if ((((*(float *)(lVar5 + 0x5d0) != 0.0) || (*(float *)(lVar5 + 0x5d4) != 0.0)) ||
      (*(float *)(lVar5 + 0x5d8) != 0.0)) &&
     (0.9 < fStack_164 * *(float *)(lVar5 + 0x5d4) + fStack_168 * *(float *)(lVar5 + 0x5d0) +
            fStack_160 * *(float *)(lVar5 + 0x5d8))) {
    fStack_168 = *(float *)(lVar5 + 0x5d0);
    fStack_164 = *(float *)(lVar5 + 0x5d4);
    fStack_160 = *(float *)(lVar5 + 0x5d8);
    uStack_15c = *(int32_t *)(lVar5 + 0x5dc);
  }
  plVar1 = puVar6 + 0x1a;
  piVar2 = (int *)(puVar6 + 0x1e);
  if ((*(uint *)((int64_t)*piVar2 * 0xa0 + 0x50 + *plVar1) >> 8 & 1) == 0) {
    puVar6 = (uint64_t *)*puVar6;
  }
  if (((*(uint64_t *)((int64_t)*(int *)(puVar6 + 0x1e) * 0xa0 + 0x50 + puVar6[0x1a]) & 0x20000000)
       == 0) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
    FUN_180510080(param_1,&fStack_148,&fStack_168);
    lVar5 = *(int64_t *)(param_1 + 0x20);
    fVar8 = fStack_148 * *(float *)(lVar5 + 0x24) + fStack_144 * *(float *)(lVar5 + 0x28) +
            fStack_140 * *(float *)(lVar5 + 0x2c);
    fVar9 = (float)*(int *)((int64_t)*piVar2 * 0xa0 + 0x70 + *plVar1) * *(float *)(param_1 + 0x3b8)
    ;
    fVar10 = (*(float *)(lVar5 + 0x24) - fStack_148 * fVar8) * render_system_memory + fStack_148 * fVar8 +
             fStack_148 * fVar9;
    fVar11 = fStack_144 * fVar9 +
             render_system_memory * (*(float *)(lVar5 + 0x28) - fStack_144 * fVar8) + fStack_144 * fVar8;
    fVar8 = fStack_140 * fVar9 +
            render_system_memory * (*(float *)(lVar5 + 0x2c) - fStack_140 * fVar8) + fStack_140 * fVar8;
    uStack_138 = uStack_c8;
    uStack_130 = uStack_c0;
    uStack_118 = uStack_a8;
    uStack_114 = uStack_a4;
    uStack_110 = uStack_a0;
    uStack_10c = uStack_9c;
    fStack_128 = fStack_148;
    fStack_124 = fStack_144;
    fStack_120 = fStack_140;
    uStack_11c = uStack_13c;
    FUN_180084ae0(&uStack_138);
    lVar5 = render_system_data_memory;
    if (((*(uint64_t *)((int64_t)*(int *)(puVar6 + 0x1e) * 0xa0 + 0x50 + puVar6[0x1a]) &
         0x20000000) == 0) || (puVar6[7] == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    uStack_15c = uStack_13c;
    uVar3 = *(int32_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e0);
    iVar4 = *(int *)(param_1 + 0x18);
    fStack_168 = fVar10;
    fStack_164 = fVar11;
    fStack_160 = fVar8;
    if ((iVar4 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar4);
    }
    uStack_158 = 1;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    uStack_e8 = CONCAT44(fStack_124,fStack_128);
    uStack_e0 = CONCAT44(uStack_11c,fStack_120);
    uStack_d8 = CONCAT44(uStack_114,uStack_118);
    uStack_d0 = CONCAT44(uStack_10c,uStack_110);
    fStack_148 = fStack_168;
    fStack_144 = fStack_164;
    fStack_140 = fStack_160;
    uStack_13c = uStack_15c;
    fStack_168 = fStack_98;
    fStack_164 = (float)uStack_94;
    fStack_160 = (float)uStack_90;
    uStack_15c = uStack_8c;
    (**(code **)(lVar5 + 0x240))
              (*(int32_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x98d928),iVar4,uVar3,&fStack_168,
               &fStack_148,&uStack_f8,uVar7,1,0xffffffff);
    uStack_158 = 0;
    if ((iVar4 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar4);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



