/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
// 03_rendering_part249.c - 2 个函数
// 函数: void UISystem_0b65f(void)
void UISystem_0b65f(void)
{
  return;
}
uint64_t
UISystem_0b680(int64_t param_1,char param_2,int *param_3,uint *param_4,double *param_5,
             double *param_6)
{
  double dVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  double dVar7;
  int32_t astack_special_x_8 [2];
  int aiStackX_10 [2];
  double dStackX_18;
  int8_t astack_special_x_20 [8];
  iVar3 = 0;
  cVar2 = param_2;
  if (-1 < param_2) {
    do {
      iVar3 = iVar3 + 1;
      cVar2 = *(char *)((int64_t)cVar2 + 0x100 + param_1);
    } while (-1 < cVar2);
  }
  dVar7 = 0.0;
  *param_3 = iVar3;
  lVar4 = *(int64_t *)(param_1 + 0x140);
  lVar5 = (int64_t)param_2 * 0x1b0 + lVar4;
  cVar2 = *(char *)(lVar5 + 0xf1);
  cVar6 = '\0';
  *param_4 = (uint)('\0' < cVar2);
  dVar1 = 0.0;
  if ('\0' < cVar2) {
    do {
      cVar2 = *(char *)((int64_t)cVar6 + *(int64_t *)(lVar5 + 0xf8));
      astack_special_x_8[0] = 0;
      aiStackX_10[0] = 0;
      UISystem_0b680(param_1,cVar2,astack_special_x_8,aiStackX_10,astack_special_x_20,&dStackX_18);
      lVar4 = *(int64_t *)(param_1 + 0x140);
      dStackX_18 = (double)*(float *)((int64_t)cVar2 * 0x1b0 + 0x100 + lVar4) + dStackX_18;
      if (dVar7 < dStackX_18) {
        *param_4 = aiStackX_10[0] + 1;
        dVar7 = dStackX_18;
      }
      cVar6 = cVar6 + '\x01';
      dVar1 = dVar7;
    } while (cVar6 < *(char *)(lVar5 + 0xf1));
  }
  dVar7 = 0.0;
  if (-1 < param_2) {
    do {
      lVar5 = (int64_t)param_2;
      param_2 = *(char *)(lVar5 * 0x1b0 + 0xf0 + lVar4);
      dVar7 = dVar7 + (double)*(float *)(lVar5 * 0x1b0 + 0x100 + lVar4);
    } while (-1 < param_2);
  }
  *param_5 = dVar7;
  *param_6 = dVar1;
  return 0;
}
uint64_t UISystem_0b68e(int64_t param_1,char param_2,int *param_3,uint *param_4)
{
  char cVar1;
  double dVar2;
  char in_AL;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  double dVar7;
  uint64_t *plocal_buffer_28;
  int32_t local_buffer_80;
  int iStack0000000000000088;
  double local_var_90;
  double *local_var_a0;
  double *local_var_a8;
  iVar3 = 0;
  if (-1 < in_AL) {
    do {
      iVar3 = iVar3 + 1;
      in_AL = *(char *)((int64_t)in_AL + 0x100 + param_1);
    } while (-1 < in_AL);
  }
  dVar7 = 0.0;
  *param_3 = iVar3;
  lVar4 = *(int64_t *)(param_1 + 0x140);
  lVar5 = (int64_t)param_2 * 0x1b0 + lVar4;
  cVar1 = *(char *)(lVar5 + 0xf1);
  cVar6 = '\0';
  *param_4 = (uint)('\0' < cVar1);
  dVar2 = 0.0;
  if ('\0' < cVar1) {
    do {
      cVar1 = *(char *)((int64_t)cVar6 + *(int64_t *)(lVar5 + 0xf8));
      plocal_buffer_28 = &local_buffer_00000090;
      local_buffer_80 = 0;
      iStack0000000000000088 = 0;
      UISystem_0b680(param_1,cVar1,&local_buffer_00000080,&local_buffer_00000088,&local_buffer_00000098);
      lVar4 = *(int64_t *)(param_1 + 0x140);
      local_var_90 =
           (double)*(float *)((int64_t)cVar1 * 0x1b0 + 0x100 + lVar4) + local_var_90;
      if (dVar7 < local_var_90) {
        *param_4 = iStack0000000000000088 + 1;
        dVar7 = local_var_90;
      }
      cVar6 = cVar6 + '\x01';
      dVar2 = dVar7;
    } while (cVar6 < *(char *)(lVar5 + 0xf1));
  }
  dVar7 = 0.0;
  if (-1 < param_2) {
    do {
      lVar5 = (int64_t)param_2;
      param_2 = *(char *)(lVar5 * 0x1b0 + 0xf0 + lVar4);
      dVar7 = dVar7 + (double)*(float *)(lVar5 * 0x1b0 + 0x100 + lVar4);
    } while (-1 < param_2);
  }
  *local_var_a0 = dVar7;
  *local_var_a8 = dVar2;
  return 0;
}
uint64_t UISystem_0b70a(double param_1)
{
  char cVar1;
  int64_t lVar2;
  double dVar3;
  int64_t lVar4;
  int64_t unaff_RBP;
  char unaff_SIL;
  char unaff_DIL;
  int unaff_R12D;
  int64_t unaff_R14;
  int *unaff_R15;
  double dVar5;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  uint64_t *plocal_buffer_28;
  int iStack0000000000000088;
  double local_var_90;
  double *local_var_a0;
  double *local_var_a8;
  dVar3 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  do {
    cVar1 = *(char *)((int64_t)unaff_SIL + *(int64_t *)(unaff_RBP + 0xf8));
    plocal_buffer_28 = &local_buffer_00000090;
    iStack0000000000000088 = unaff_R12D;
    UISystem_0b680(param_1,cVar1,&local_buffer_00000080,&local_buffer_00000088,&local_buffer_00000098);
    lVar2 = *(int64_t *)(unaff_R14 + 0x140);
    param_1 = (double)*(float *)((int64_t)cVar1 * 0x1b0 + 0x100 + lVar2) + local_var_90;
    if (dVar3 < param_1) {
      *unaff_R15 = iStack0000000000000088 + 1;
      dVar3 = param_1;
    }
    unaff_SIL = unaff_SIL + '\x01';
    local_var_90 = param_1;
  } while (unaff_SIL < *(char *)(unaff_RBP + 0xf1));
  dVar5 = 0.0;
  if (-1 < unaff_DIL) {
    do {
      lVar4 = (int64_t)unaff_DIL;
      unaff_DIL = *(char *)(lVar4 * 0x1b0 + 0xf0 + lVar2);
      dVar5 = dVar5 + (double)*(float *)(lVar4 * 0x1b0 + 0x100 + lVar2);
    } while (-1 < unaff_DIL);
  }
  *local_var_a0 = dVar5;
  *local_var_a8 = dVar3;
  return 0;
}
uint64_t UISystem_0b7bb(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  char unaff_DIL;
  double dVar2;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  double *local_var_a0;
  uint64_t *local_var_a8;
  dVar2 = 0.0;
  if (-1 < unaff_DIL) {
    do {
      lVar1 = (int64_t)unaff_DIL;
      unaff_DIL = *(char *)(lVar1 * 0x1b0 + 0xf0 + param_2);
      dVar2 = dVar2 + (double)*(float *)(lVar1 * 0x1b0 + 0x100 + param_2);
    } while (-1 < unaff_DIL);
  }
  *local_var_a0 = dVar2;
  *local_var_a8 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  return 0;
}
uint64_t UISystem_0b7e0(uint64_t param_1,int64_t param_2,double param_3)
{
  int64_t lVar1;
  char unaff_DIL;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  double *local_var_a0;
  uint64_t *local_var_a8;
  do {
    lVar1 = (int64_t)unaff_DIL;
    unaff_DIL = *(char *)(lVar1 * 0x1b0 + 0xf0 + param_2);
    param_3 = param_3 + (double)*(float *)(lVar1 * 0x1b0 + 0x100 + param_2);
  } while (-1 < unaff_DIL);
  *local_var_a0 = param_3;
  *local_var_a8 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  return 0;
}
// 函数: void UISystem_0b830(int64_t param_1,char param_2)
void UISystem_0b830(int64_t param_1,char param_2)
{
  double dVar1;
  double dVar2;
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  double dStack_18;
  double adStack_10 [2];
  aiStackX_18[0] = 0;
  aiStackX_20[0] = 0;
  adStack_10[0] = 0.0;
  dStack_18 = 0.0;
  UISystem_0b680(param_1,param_2,aiStackX_18,aiStackX_20,adStack_10,&dStack_18);
  if (1.1754943508222875e-38 < dStack_18 + adStack_10[0]) {
    dVar2 = 0.01 / (double)(aiStackX_18[0] + aiStackX_20[0]);
    dVar1 = (double)*(float *)((int64_t)param_2 * 0x1b0 + 0x100 + *(int64_t *)(param_1 + 0x140)) +
            dStack_18;
    if (1.1754943508222875e-38 < dVar1) {
      if (dVar1 + dVar1 <= dVar2) {
        dVar2 = dVar1;
      }
      dVar1 = (dVar1 + dVar1) * dVar1;
// WARNING: Could not recover jumptable at 0x0001808ffe39. Too many branches
// WARNING: Treating indirect jump as call
      acos((dVar1 - dVar2 * dVar2) / dVar1);
      return;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
float * UISystem_0b910(int64_t param_1,float *param_2,char param_3,int param_4,float *param_5,
                     float param_6)
{
  int8_t auVar1 [16];
  int iVar2;
  int32_t *puVar3;
  float *pfVar4;
  int64_t lVar5;
  float *pfVar6;
  float *pfVar7;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t in_XMM2 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float afStackX_20 [2];
  float afStack_168 [4];
  int8_t stack_array_158 [4];
  float fStack_154;
  float fStack_150;
  int32_t local_var_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_138 [3];
  int32_t local_var_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int8_t stack_array_118 [16];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  fVar21 = *param_5;
  fVar22 = param_5[1];
  fVar23 = param_5[2];
  fVar24 = param_5[3];
  fVar9 = fVar24 * fVar24 + fVar21 * fVar21;
  fVar10 = fVar23 * fVar23 + fVar22 * fVar22;
  fVar14 = fVar9 + fVar22 * fVar22 + fVar23 * fVar23;
  fVar15 = fVar10 + fVar21 * fVar21 + fVar24 * fVar24;
  auVar12._4_4_ = fVar9 + fVar10 + 1.1754944e-38;
  auVar12._0_4_ = fVar10 + fVar9 + 1.1754944e-38;
  auVar12._8_4_ = fVar14 + 1.1754944e-38;
  auVar12._12_4_ = fVar15 + 1.1754944e-38;
  auVar12 = rsqrtps(in_XMM2,auVar12);
  fVar17 = auVar12._0_4_;
  fVar18 = auVar12._4_4_;
  fVar19 = auVar12._8_4_;
  fVar16 = auVar12._12_4_;
  fVar21 = (3.0 - fVar17 * fVar17 * (fVar10 + fVar9)) * fVar17 * 0.5 * fVar21;
  fVar22 = (3.0 - fVar18 * fVar18 * (fVar9 + fVar10)) * fVar18 * 0.5 * fVar22;
  fVar23 = (3.0 - fVar19 * fVar19 * fVar14) * fVar19 * 0.5 * fVar23;
  fVar24 = (3.0 - fVar16 * fVar16 * fVar15) * fVar16 * 0.5 * fVar24;
  *param_2 = fVar21;
  param_2[1] = fVar22;
  param_2[2] = fVar23;
  param_2[3] = fVar24;
  if (-1 < param_4) {
    lVar5 = (int64_t)param_4 * 0x60 + *(int64_t *)(param_1 + 0x158);
    fVar9 = *(float *)(lVar5 + 0x10);
    fVar10 = *(float *)(lVar5 + 0x14);
    fVar17 = *(float *)(lVar5 + 0x18);
    fVar18 = *(float *)(lVar5 + 0x1c);
    iVar2 = *(int *)(lVar5 + 0x30);
    local_var_14c = (int32_t)((uint64_t)_stack_array_158 >> 0x20);
    _stack_array_158 = ZEXT812(0);
    pfVar6 = (float *)((int64_t)param_3 * 0x1b0 + 0x90 + *(int64_t *)(param_1 + 0x140));
    fVar19 = *pfVar6;
    fVar16 = pfVar6[1];
    fVar14 = pfVar6[2];
    fVar15 = pfVar6[3];
    *(int32_t *)(stack_array_158 + (int64_t)iVar2 * 4) = 0x3f800000;
    fStack_144 = fVar14 * fVar18 * 1.0 + fVar19 * fVar10 * 1.0 + (fVar9 * fVar16 - fVar15 * fVar17);
    fStack_140 = fVar15 * fVar10 * 1.0 + fVar19 * fVar17 * 1.0 + (fVar9 * fVar14 - fVar16 * fVar18);
    fStack_13c = fVar16 * fVar17 * 1.0 + fVar19 * fVar18 * 1.0 + (fVar9 * fVar15 - fVar14 * fVar10);
    fStack_148 = fVar15 * fVar18 * -1.0 + fVar14 * fVar17 * -1.0 +
                 (fVar9 * fVar19 - fVar16 * fVar10);
    fVar9 = fStack_140 * fVar24 * -1.0 + fVar21 * fStack_144 * -1.0 +
            fStack_148 * fVar22 + fStack_13c * fVar23;
    fVar10 = fStack_13c * fVar22 * -1.0 + fVar21 * fStack_140 * -1.0 +
             fStack_148 * fVar23 + fStack_144 * fVar24;
    fVar17 = fStack_144 * fVar23 * -1.0 + fVar21 * fStack_13c * -1.0 +
             fStack_148 * fVar24 + fStack_140 * fVar22;
    fVar18 = fStack_13c * fVar24 * 1.0 + fVar21 * fStack_148 * 1.0 +
             fStack_140 * fVar23 + fStack_144 * fVar22;
    if (iVar2 == 0) {
      afStack_168[2] = fVar9 * fVar17 - fVar18 * fVar10;
      afStack_168[2] = afStack_168[2] + afStack_168[2];
      afStack_168[0] = 1.0 - (fVar10 * fVar10 + fVar10 * fVar10 + fVar17 * fVar17 + fVar17 * fVar17)
      ;
      afStack_168[1] = fVar9 * fVar10 + fVar9 * fVar10 + fVar17 * fVar18 + fVar17 * fVar18;
    }
    else if (iVar2 == 1) {
      afStack_168[0] = fVar9 * fVar10 - fVar17 * fVar18;
      afStack_168[0] = afStack_168[0] + afStack_168[0];
      afStack_168[2] = fVar17 * fVar10 + fVar17 * fVar10 + fVar9 * fVar18 + fVar9 * fVar18;
      afStack_168[1] = 1.0 - (fVar9 * fVar9 + fVar9 * fVar9 + fVar17 * fVar17 + fVar17 * fVar17);
    }
    else {
      afStack_168[1] = fVar17 * fVar10 - fVar9 * fVar18;
      afStack_168[1] = afStack_168[1] + afStack_168[1];
      afStack_168[0] = fVar18 * fVar10 + fVar18 * fVar10 + fVar9 * fVar17 + fVar9 * fVar17;
      afStack_168[2] = 1.0 - (fVar9 * fVar9 + fVar9 * fVar9 + fVar10 * fVar10 + fVar10 * fVar10);
    }
    afStack_168[3] = 3.4028235e+38;
    local_var_12c = 0x7f7fffff;
    fVar14 = fStack_150 * afStack_168[1] - afStack_168[2] * fStack_154;
    fVar20 = afStack_168[2] * (float)stack_array_158 - fStack_150 * afStack_168[0];
    fVar15 = afStack_168[0] * fStack_154 - afStack_168[1] * (float)stack_array_158;
    fVar16 = fVar20 * fVar20 + fVar14 * fVar14 + fVar15 * fVar15;
    stack_array_118._0_12_ = ZEXT812(0x800000);
    stack_array_118._12_4_ = 0;
    fVar19 = fVar16;
    if (fVar16 <= 1.1754944e-38) {
      fVar19 = 1.1754944e-38;
    }
    auVar12 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
    fVar11 = auVar12._0_4_;
    fVar19 = fVar11 * 0.5 * ((float)system_data_01f0 - fVar19 * fVar11 * fVar11);
    fVar20 = fVar19 * fVar20;
    fVar16 = fVar19 * fVar16;
    fVar15 = fVar19 * fVar15;
    fVar19 = fVar19 * fVar14;
    if (0.0 <= fVar16) {
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
    }
    else {
      fVar16 = 0.0;
    }
    afStack_138[0] = fVar19;
    afStack_138[1] = fVar20;
    afStack_138[2] = fVar15;
    fStack_108 = fStack_148;
    fStack_104 = fStack_144;
    fStack_100 = fStack_140;
    fStack_fc = fStack_13c;
    fStack_f8 = fVar24;
    fStack_f4 = fVar22;
    fStack_f0 = fVar23;
    fStack_ec = fVar24;
    fStack_e8 = fVar21;
    fStack_e4 = fVar21;
    fStack_e0 = fVar21;
    fStack_dc = fVar21;
    fStack_d8 = fVar22;
    fStack_d4 = fVar23;
    fStack_d0 = fVar24;
    fStack_cc = fVar23;
    afStackX_20[0] = (float)asinf(fVar16);
    if (afStack_168[iVar2] <= 0.0 && afStack_168[iVar2] != 0.0) {
      afStackX_20[0] = 3.1415927 - afStackX_20[0];
    }
    afStack_168[1] = fVar9;
    afStack_168[0] = fVar18;
    afStack_168[3] = fVar17;
    afStack_168[2] = fVar10;
    if (((1e-05 < afStackX_20[0]) &&
        (fVar21 = fVar20 * fVar20 + fVar19 * fVar19 + fVar15 * fVar15, 0.98010004 < fVar21)) &&
       (fVar21 < 1.0201)) {
// WARNING: Subroutine does not return
      AdvancedSystemController(afStackX_20[0] * 0.5);
    }
    _stack_array_158 = ZEXT812(0);
    if (iVar2 == 0) {
      pfVar6 = afStack_138 + 2;
      pfVar7 = afStack_138 + 1;
      pfVar4 = afStack_168 + 1;
      puVar3 = (int32_t *)(stack_array_158 + 4);
      afStack_168[0] = fVar9 * fVar10 - fVar17 * fVar18;
      afStack_168[0] = afStack_168[0] + afStack_168[0];
      afStack_168[2] = fVar17 * fVar10 + fVar17 * fVar10 + fVar9 * fVar18 + fVar9 * fVar18;
      afStack_168[1] = 1.0 - (fVar17 * fVar17 + fVar17 * fVar17 + fVar9 * fVar9 + fVar9 * fVar9);
    }
    else if (iVar2 == 1) {
      pfVar6 = afStack_138;
      pfVar7 = afStack_138 + 2;
      pfVar4 = afStack_168 + 2;
      puVar3 = (int32_t *)(stack_array_158 + 8);
      afStack_168[0] = fVar18 * fVar10 + fVar18 * fVar10 + fVar17 * fVar9 + fVar17 * fVar9;
      afStack_168[1] = fVar17 * fVar10 - fVar9 * fVar18;
      afStack_168[1] = afStack_168[1] + afStack_168[1];
      afStack_168[2] = 1.0 - (fVar10 * fVar10 + fVar10 * fVar10 + fVar9 * fVar9 + fVar9 * fVar9);
    }
    else {
      pfVar6 = afStack_138 + 1;
      pfVar7 = afStack_138;
      pfVar4 = afStack_168;
      puVar3 = (int32_t *)stack_array_158;
      afStack_168[2] = fVar17 * fVar9 - fVar18 * fVar10;
      afStack_168[1] = fVar17 * fVar18 + fVar17 * fVar18 + fVar9 * fVar10 + fVar9 * fVar10;
      afStack_168[2] = afStack_168[2] + afStack_168[2];
      afStack_168[0] = 1.0 - (fVar10 * fVar10 + fVar10 * fVar10 + fVar17 * fVar17 + fVar17 * fVar17)
      ;
    }
    *puVar3 = 0x3f800000;
    fVar10 = fStack_150 * afStack_168[1] - afStack_168[2] * fStack_154;
    afStack_168[3] = 3.4028235e+38;
    fVar17 = afStack_168[0] * fStack_154 - afStack_168[1] * (float)stack_array_158;
    fStack_124 = afStack_168[2] * (float)stack_array_158 - fStack_150 * afStack_168[0];
    fVar9 = fVar10 * fVar10 + fStack_124 * fStack_124 + fVar17 * fVar17;
    fVar21 = fVar9;
    if (fVar9 <= (float)stack_array_118._0_4_) {
      fVar21 = (float)stack_array_118._0_4_;
    }
    auVar12 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
    fVar18 = auVar12._0_4_;
    fVar21 = fVar18 * 0.5 * (3.0 - fVar21 * fVar18 * fVar18);
    fStack_124 = fVar21 * fStack_124;
    fVar9 = fVar21 * fVar9;
    if (0.0 <= fVar9) {
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
    }
    else {
      fVar9 = 0.0;
    }
    fStack_128 = fVar21 * fVar10;
    fStack_120 = fVar21 * fVar17;
    fVar9 = (float)asinf(fVar9);
    if (*pfVar4 <= 0.0 && *pfVar4 != 0.0) {
      fVar9 = 3.1415927 - fVar9;
    }
    afStack_168[0] = fStack_108;
    afStack_168[1] = fStack_104;
    afStack_168[2] = fStack_100;
    afStack_168[3] = fStack_fc;
    fVar18 = -0.5;
    if (1e-05 < fVar9) {
      if (iVar2 == 0) {
        iVar2 = 1;
        if (fVar21 * fVar10 < 0.0) {
          iVar2 = -1;
        }
// WARNING: Subroutine does not return
        AdvancedSystemController((float)iVar2 * fVar9 * -0.5);
      }
      if (iVar2 != 1) {
        if (fVar21 * fVar17 < 0.0) {
          fVar21 = 0.5;
        }
        else {
          fVar21 = -0.5;
        }
// WARNING: Subroutine does not return
        AdvancedSystemController(fVar21 * fVar9);
      }
      UISystem_0f4d0(afStack_168);
    }
    auVar13._4_4_ =
         afStack_168[2] * fStack_f8 * -1.0 + fStack_e8 * afStack_168[1] * -1.0 +
         afStack_168[3] * fVar23 + afStack_168[0] * fStack_d8;
    auVar13._0_4_ =
         afStack_168[3] * fStack_ec * 1.0 + fStack_dc * afStack_168[0] * 1.0 +
         afStack_168[1] * fVar22 + afStack_168[2] * fStack_cc;
    auVar13._8_4_ =
         afStack_168[3] * fStack_f4 * -1.0 + fStack_e4 * afStack_168[2] * -1.0 +
         afStack_168[1] * fVar24 + afStack_168[0] * fStack_d4;
    auVar13._12_4_ =
         afStack_168[1] * fStack_f0 * -1.0 + fStack_e0 * afStack_168[3] * -1.0 +
         afStack_168[2] * fVar22 + afStack_168[0] * fStack_d0;
    _stack_array_158 = auVar13;
    UtilitiesSystem_3b720(afStack_138,afStackX_20,stack_array_158);
    fVar24 = afStack_138[2];
    fVar23 = afStack_138[1];
    fVar22 = afStack_138[0];
    fVar21 = afStackX_20[0];
    if (1e-05 < afStackX_20[0]) {
      fVar10 = afStack_138[1] * afStack_138[1] + afStack_138[0] * afStack_138[0] +
               afStack_138[2] * afStack_138[2];
      auVar13 = ZEXT416((uint)fVar10);
      if ((0.98010004 < fVar10) && (fVar10 < 1.0201)) {
        if (3.1415927 < afStackX_20[0]) {
          local_var_12c = 0x7f7fffff;
          afStack_138[0] = -afStack_138[0];
          afStack_138[1] = -afStack_138[1];
          afStack_138[2] = -afStack_138[2];
        }
        fVar21 = *pfVar7;
        fVar22 = -*pfVar6;
        if (((fVar22 != 0.0) || (fVar21 != 0.0)) &&
           ((fVar21 = fVar21 * fVar21 + fVar22 * fVar22, fVar21 <= 0.98010004 || (1.0201 <= fVar21))
           )) {
          auVar12 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
          fVar23 = auVar12._0_4_;
          fVar22 = fVar23 * 0.5 * (3.0 - fVar21 * fVar23 * fVar23) * fVar22;
        }
        uVar8 = atan2f(-fVar22);
// WARNING: Subroutine does not return
        AdvancedSystemController(uVar8);
      }
    }
    fVar10 = param_6 * *(float *)(lVar5 + 0x34);
    param_6 = param_6 * *(float *)(lVar5 + 0x38);
    if ((fVar9 < fVar10) || (param_6 <= fVar9)) {
      if ((fVar10 <= fVar9) && (fVar10 = param_6, fVar9 <= param_6)) {
        fVar10 = fVar9;
      }
      if (iVar2 == 0) {
        if (fStack_128 < 0.0) {
          fVar18 = 0.5;
        }
// WARNING: Subroutine does not return
        AdvancedSystemController(fVar18 * fVar10);
      }
      if (iVar2 != 1) {
        if (fStack_120 < 0.0) {
          fVar18 = 0.5;
        }
// WARNING: Subroutine does not return
        AdvancedSystemController(fVar18 * fVar10);
      }
      UISystem_0f4d0(&fStack_148);
      if (1e-05 < fVar21) {
        fVar22 = fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24;
        auVar13 = ZEXT416((uint)fVar22);
        if ((0.98010004 < fVar22) && (fVar22 < 1.0201)) {
// WARNING: Subroutine does not return
          AdvancedSystemController(fVar21 * 0.5);
        }
      }
      fVar21 = fStack_13c * fStack_13c + fStack_148 * fStack_148;
      fVar22 = fStack_140 * fStack_140 + fStack_144 * fStack_144;
      fVar17 = fVar21 + fStack_144 * fStack_144 + fStack_140 * fStack_140;
      fVar18 = fVar22 + fStack_148 * fStack_148 + fStack_13c * fStack_13c;
      auVar1._4_4_ = fVar21 + fVar22 + 1.1754944e-38;
      auVar1._0_4_ = fVar22 + fVar21 + 1.1754944e-38;
      auVar1._8_4_ = fVar17 + 1.1754944e-38;
      auVar1._12_4_ = fVar18 + 1.1754944e-38;
      auVar12 = rsqrtps(auVar13,auVar1);
      fVar23 = auVar12._0_4_;
      fVar24 = auVar12._4_4_;
      fVar9 = auVar12._8_4_;
      fVar10 = auVar12._12_4_;
      *param_2 = (3.0 - fVar23 * fVar23 * (fVar22 + fVar21)) * fVar23 * 0.5 * fStack_148;
      param_2[1] = (3.0 - fVar24 * fVar24 * (fVar21 + fVar22)) * fVar24 * 0.5 * fStack_144;
      param_2[2] = (3.0 - fVar9 * fVar9 * fVar17) * fVar9 * 0.5 * fStack_140;
      param_2[3] = (3.0 - fVar10 * fVar10 * fVar18) * fVar10 * 0.5 * fStack_13c;
    }
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address