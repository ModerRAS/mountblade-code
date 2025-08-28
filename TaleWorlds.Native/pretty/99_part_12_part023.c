#include "TaleWorlds.Native.Split.h"
// 99_part_12_part023.c - 9 个函数
// 函数: void SystemCore_d96a0(float *param_1,uint param_2,uint64_t param_3,float *param_4)
void SystemCore_d96a0(float *param_1,uint param_2,uint64_t param_3,float *param_4)
{
  float fVar1;
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
  float fVar12;
  uint64_t uVar13;
  int iVar14;
  uint uVar15;
  uint64_t uVar16;
  int in_R11D;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint unaff_XMM8_Da;
  uint unaff_XMM8_Db;
  uint unaff_XMM8_Dc;
  uint unaff_XMM8_Dd;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fStack00000000000000f0;
  float *local_var_100;
  iVar14 = (int)param_2 >> 1;
  if (in_R11D == 2) {
    fVar21 = -3.4028235e+38;
    fVar22 = -3.4028235e+38;
    fVar23 = -3.4028235e+38;
    fVar24 = -3.4028235e+38;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    for (; iVar14 != 0; iVar14 = iVar14 + -1) {
      fVar37 = *param_1;
      fVar38 = param_1[1];
      fVar39 = param_1[2];
      fVar40 = param_1[3];
      param_1 = param_1 + 4;
      fVar17 = fVar17 + fVar37 * fVar37;
      fVar18 = fVar18 + fVar38 * fVar38;
      fVar19 = fVar19 + fVar39 * fVar39;
      fVar20 = fVar20 + fVar40 * fVar40;
      fVar21 = (float)((uint)fVar21 ^
                      ((uint)fVar37 & unaff_XMM8_Da ^ (uint)fVar21) &
                      -(uint)(fVar21 < (float)((uint)fVar37 & unaff_XMM8_Da)));
      fVar22 = (float)((uint)fVar22 ^
                      ((uint)fVar38 & unaff_XMM8_Db ^ (uint)fVar22) &
                      -(uint)(fVar22 < (float)((uint)fVar38 & unaff_XMM8_Db)));
      fVar23 = (float)((uint)fVar23 ^
                      ((uint)fVar39 & unaff_XMM8_Dc ^ (uint)fVar23) &
                      -(uint)(fVar23 < (float)((uint)fVar39 & unaff_XMM8_Dc)));
      fVar24 = (float)((uint)fVar24 ^
                      ((uint)fVar40 & unaff_XMM8_Dd ^ (uint)fVar24) &
                      -(uint)(fVar24 < (float)((uint)fVar40 & unaff_XMM8_Dd)));
    }
    if (fVar23 <= fVar21) {
      fVar23 = fVar21;
    }
    if (fVar24 <= fVar22) {
      fVar24 = fVar22;
    }
    if (fVar23 <= *param_4) {
      fVar23 = *param_4;
    }
    if (fVar24 <= param_4[1]) {
      fVar24 = param_4[1];
    }
    fVar21 = fVar17 + fVar19 + *local_var_100;
    fVar22 = fVar18 + fVar20 + local_var_100[1];
    for (param_2 = param_2 & 1; param_2 != 0; param_2 = param_2 - 1) {
      fVar18 = ABS(*param_1);
      fVar19 = ABS(param_1[1]);
      param_1 = param_1 + 2;
      fVar17 = fVar18;
      if (fVar18 <= fVar23) {
        fVar17 = fVar23;
      }
      fVar20 = fVar19;
      if (fVar19 <= fVar24) {
        fVar20 = fVar24;
      }
      fVar21 = fVar21 + fVar18 * fVar18;
      fVar22 = fVar22 + fVar19 * fVar19;
      fVar23 = fVar17;
      fVar24 = fVar20;
    }
    *param_4 = fVar23;
    param_4[1] = fVar24;
    *local_var_100 = fVar21;
    local_var_100[1] = fVar22;
  }
  else if (in_R11D == 6) {
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar21 = *param_4;
    fVar22 = param_4[1];
    fVar23 = param_4[2];
    fVar24 = param_4[3];
    fVar17 = *local_var_100;
    fVar18 = local_var_100[1];
    fVar19 = local_var_100[2];
    fVar20 = local_var_100[3];
    fVar37 = local_var_100[4];
    fVar38 = local_var_100[5];
    fVar39 = local_var_100[6];
    fVar40 = local_var_100[7];
    fVar33 = param_4[4];
    fVar34 = param_4[5];
    fVar35 = param_4[6];
    fVar36 = param_4[7];
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    for (; iVar14 != 0; iVar14 = iVar14 + -1) {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      fVar5 = param_1[4];
      fVar6 = param_1[5];
      fVar7 = param_1[6];
      fVar8 = param_1[7];
      fVar9 = param_1[8];
      fVar10 = param_1[9];
      fVar11 = param_1[10];
      fVar12 = param_1[0xb];
      param_1 = param_1 + 0xc;
      fVar21 = (float)((uint)fVar21 ^
                      ((uint)fVar1 & unaff_XMM8_Da ^ (uint)fVar21) &
                      -(uint)(fVar21 < (float)((uint)fVar1 & unaff_XMM8_Da)));
      fVar22 = (float)((uint)fVar22 ^
                      ((uint)fVar2 & unaff_XMM8_Db ^ (uint)fVar22) &
                      -(uint)(fVar22 < (float)((uint)fVar2 & unaff_XMM8_Db)));
      fVar23 = (float)((uint)fVar23 ^
                      ((uint)fVar3 & unaff_XMM8_Dc ^ (uint)fVar23) &
                      -(uint)(fVar23 < (float)((uint)fVar3 & unaff_XMM8_Dc)));
      fVar24 = (float)((uint)fVar24 ^
                      ((uint)fVar4 & unaff_XMM8_Dd ^ (uint)fVar24) &
                      -(uint)(fVar24 < (float)((uint)fVar4 & unaff_XMM8_Dd)));
      fVar17 = fVar17 + fVar1 * fVar1;
      fVar18 = fVar18 + fVar2 * fVar2;
      fVar19 = fVar19 + fVar3 * fVar3;
      fVar20 = fVar20 + fVar4 * fVar4;
      fVar37 = fVar37 + fVar5 * fVar5;
      fVar38 = fVar38 + fVar6 * fVar6;
      fVar39 = fVar39 + fVar7 * fVar7;
      fVar40 = fVar40 + fVar8 * fVar8;
      fVar25 = fVar25 + fVar9 * fVar9;
      fVar26 = fVar26 + fVar10 * fVar10;
      fVar27 = fVar27 + fVar11 * fVar11;
      fVar28 = fVar28 + fVar12 * fVar12;
      fVar33 = (float)((uint)fVar33 ^
                      ((uint)fVar5 & unaff_XMM8_Da ^ (uint)fVar33) &
                      -(uint)(fVar33 < (float)((uint)fVar5 & unaff_XMM8_Da)));
      fVar34 = (float)((uint)fVar34 ^
                      ((uint)fVar6 & unaff_XMM8_Db ^ (uint)fVar34) &
                      -(uint)(fVar34 < (float)((uint)fVar6 & unaff_XMM8_Db)));
      fVar35 = (float)((uint)fVar35 ^
                      ((uint)fVar7 & unaff_XMM8_Dc ^ (uint)fVar35) &
                      -(uint)(fVar35 < (float)((uint)fVar7 & unaff_XMM8_Dc)));
      fVar36 = (float)((uint)fVar36 ^
                      ((uint)fVar8 & unaff_XMM8_Dd ^ (uint)fVar36) &
                      -(uint)(fVar36 < (float)((uint)fVar8 & unaff_XMM8_Dd)));
      fVar29 = (float)((uint)fVar29 ^
                      ((uint)fVar9 & unaff_XMM8_Da ^ (uint)fVar29) &
                      -(uint)(fVar29 < (float)((uint)fVar9 & unaff_XMM8_Da)));
      fVar30 = (float)((uint)fVar30 ^
                      ((uint)fVar10 & unaff_XMM8_Db ^ (uint)fVar30) &
                      -(uint)(fVar30 < (float)((uint)fVar10 & unaff_XMM8_Db)));
      fVar31 = (float)((uint)fVar31 ^
                      ((uint)fVar11 & unaff_XMM8_Dc ^ (uint)fVar31) &
                      -(uint)(fVar31 < (float)((uint)fVar11 & unaff_XMM8_Dc)));
      fVar32 = (float)((uint)fVar32 ^
                      ((uint)fVar12 & unaff_XMM8_Dd ^ (uint)fVar32) &
                      -(uint)(fVar32 < (float)((uint)fVar12 & unaff_XMM8_Dd)));
    }
    *param_4 = (float)(((uint)fVar35 ^ (uint)fVar21) & -(uint)(fVar21 < fVar35) ^ (uint)fVar21);
    param_4[1] = (float)(((uint)fVar36 ^ (uint)fVar22) & -(uint)(fVar22 < fVar36) ^ (uint)fVar22);
    param_4[2] = (float)(((uint)fVar29 ^ (uint)fVar23) & -(uint)(fVar23 < fVar29) ^ (uint)fVar23);
    param_4[3] = (float)(((uint)fVar30 ^ (uint)fVar24) & -(uint)(fVar24 < fVar30) ^ (uint)fVar24);
    *(uint64_t *)(param_4 + 4) =
         CONCAT44(((uint)fVar32 ^ (uint)fVar34) & -(uint)(fVar34 < fVar32) ^ (uint)fVar34,
                  ((uint)fVar31 ^ (uint)fVar33) & -(uint)(fVar33 < fVar31) ^ (uint)fVar33);
    *local_var_100 = fVar39 + fVar17;
    local_var_100[1] = fVar40 + fVar18;
    local_var_100[2] = fVar25 + fVar19;
    local_var_100[3] = fVar26 + fVar20;
    *(uint64_t *)(local_var_100 + 4) = CONCAT44(fVar28 + fVar38,fVar27 + fVar37);
    param_2 = param_2 & 1;
    if (param_2 != 0) {
      param_1 = param_1 + 2;
      fVar21 = local_var_100[1];
      fVar22 = local_var_100[2];
      fVar23 = local_var_100[3];
      fVar24 = local_var_100[4];
      fVar17 = local_var_100[5];
      fVar18 = param_4[1];
      fVar19 = param_4[2];
      fVar20 = param_4[4];
      fVar37 = param_4[5];
      fStack00000000000000f0 = param_4[3];
      do {
        fVar39 = ABS(param_1[-2]);
        fVar38 = fVar39;
        if (fVar39 <= *param_4) {
          fVar38 = *param_4;
        }
        fVar40 = param_1[1];
        fVar36 = ABS(param_1[-1]);
        fVar33 = param_1[2];
        fVar34 = param_1[3];
        fVar35 = fVar36;
        if (fVar36 <= fVar18) {
          fVar35 = fVar18;
        }
        fVar18 = ABS(*param_1);
        param_1 = param_1 + 6;
        *param_4 = fVar38;
        fVar40 = ABS(fVar40);
        fVar38 = fVar18;
        if (fVar18 <= fVar19) {
          fVar38 = fVar19;
        }
        fVar33 = ABS(fVar33);
        fVar21 = fVar21 + fVar36 * fVar36;
        fVar34 = ABS(fVar34);
        fVar22 = fVar22 + fVar18 * fVar18;
        fVar23 = fVar23 + fVar40 * fVar40;
        if (fVar40 <= fStack00000000000000f0) {
          fVar40 = fStack00000000000000f0;
        }
        fVar36 = fVar33;
        if (fVar33 <= fVar20) {
          fVar36 = fVar20;
        }
        fVar24 = fVar24 + fVar33 * fVar33;
        *local_var_100 = fVar39 * fVar39 + *local_var_100;
        fVar17 = fVar17 + fVar34 * fVar34;
        if (fVar34 <= fVar37) {
          fVar34 = fVar37;
        }
        param_2 = param_2 - 1;
        fVar18 = fVar35;
        fVar19 = fVar38;
        fVar20 = fVar36;
        fVar37 = fVar34;
        fStack00000000000000f0 = fVar40;
      } while (param_2 != 0);
      param_4[3] = fVar40;
      param_4[2] = fVar38;
      param_4[5] = fVar34;
      param_4[1] = fVar35;
      local_var_100[1] = fVar21;
      param_4[4] = fVar36;
      local_var_100[2] = fVar22;
      local_var_100[3] = fVar23;
      local_var_100[4] = fVar24;
      local_var_100[5] = fVar17;
    }
  }
  else if (in_R11D == 8) {
    fVar21 = *param_4;
    fVar22 = param_4[1];
    fVar23 = param_4[2];
    fVar24 = param_4[3];
    fVar17 = param_4[4];
    fVar18 = param_4[5];
    fVar19 = param_4[6];
    fVar20 = param_4[7];
    fVar37 = *local_var_100;
    fVar38 = local_var_100[1];
    fVar39 = local_var_100[2];
    fVar40 = local_var_100[3];
    fVar33 = local_var_100[4];
    fVar34 = local_var_100[5];
    fVar35 = local_var_100[6];
    fVar36 = local_var_100[7];
    if (param_2 != 0) {
      do {
        fVar29 = *param_1;
        fVar30 = param_1[1];
        fVar31 = param_1[2];
        fVar32 = param_1[3];
        fVar25 = param_1[4];
        fVar26 = param_1[5];
        fVar27 = param_1[6];
        fVar28 = param_1[7];
        param_1 = param_1 + 8;
        fVar37 = fVar37 + fVar29 * fVar29;
        fVar38 = fVar38 + fVar30 * fVar30;
        fVar39 = fVar39 + fVar31 * fVar31;
        fVar40 = fVar40 + fVar32 * fVar32;
        fVar33 = fVar33 + fVar25 * fVar25;
        fVar34 = fVar34 + fVar26 * fVar26;
        fVar35 = fVar35 + fVar27 * fVar27;
        fVar36 = fVar36 + fVar28 * fVar28;
        fVar21 = (float)((uint)fVar21 ^
                        ((uint)fVar29 & unaff_XMM8_Da ^ (uint)fVar21) &
                        -(uint)(fVar21 < (float)((uint)fVar29 & unaff_XMM8_Da)));
        fVar22 = (float)((uint)fVar22 ^
                        ((uint)fVar30 & unaff_XMM8_Db ^ (uint)fVar22) &
                        -(uint)(fVar22 < (float)((uint)fVar30 & unaff_XMM8_Db)));
        fVar23 = (float)((uint)fVar23 ^
                        ((uint)fVar31 & unaff_XMM8_Dc ^ (uint)fVar23) &
                        -(uint)(fVar23 < (float)((uint)fVar31 & unaff_XMM8_Dc)));
        fVar24 = (float)((uint)fVar24 ^
                        ((uint)fVar32 & unaff_XMM8_Dd ^ (uint)fVar24) &
                        -(uint)(fVar24 < (float)((uint)fVar32 & unaff_XMM8_Dd)));
        fVar17 = (float)((uint)fVar17 ^
                        ((uint)fVar25 & unaff_XMM8_Da ^ (uint)fVar17) &
                        -(uint)(fVar17 < (float)((uint)fVar25 & unaff_XMM8_Da)));
        fVar18 = (float)((uint)fVar18 ^
                        ((uint)fVar26 & unaff_XMM8_Db ^ (uint)fVar18) &
                        -(uint)(fVar18 < (float)((uint)fVar26 & unaff_XMM8_Db)));
        fVar19 = (float)((uint)fVar19 ^
                        ((uint)fVar27 & unaff_XMM8_Dc ^ (uint)fVar19) &
                        -(uint)(fVar19 < (float)((uint)fVar27 & unaff_XMM8_Dc)));
        fVar20 = (float)((uint)fVar20 ^
                        ((uint)fVar28 & unaff_XMM8_Dd ^ (uint)fVar20) &
                        -(uint)(fVar20 < (float)((uint)fVar28 & unaff_XMM8_Dd)));
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    *param_4 = fVar21;
    param_4[1] = fVar22;
    param_4[2] = fVar23;
    param_4[3] = fVar24;
    *local_var_100 = fVar37;
    local_var_100[1] = fVar38;
    local_var_100[2] = fVar39;
    local_var_100[3] = fVar40;
    param_4[4] = fVar17;
    param_4[5] = fVar18;
    param_4[6] = fVar19;
    param_4[7] = fVar20;
    local_var_100[4] = fVar33;
    local_var_100[5] = fVar34;
    local_var_100[6] = fVar35;
    local_var_100[7] = fVar36;
  }
  else {
    uVar16 = 0;
    uVar13 = uVar16;
    for (iVar14 = param_2 * in_R11D; iVar14 != 0; iVar14 = iVar14 + -1) {
      fVar22 = ABS(param_1[uVar13]);
      fVar21 = fVar22;
      if (fVar22 <= param_4[uVar16]) {
        fVar21 = param_4[uVar16];
      }
      fVar23 = local_var_100[uVar16];
      param_4[uVar16] = fVar21;
      local_var_100[uVar16] = fVar22 * fVar22 + fVar23;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (uint64_t)(uVar15 & (int)(uVar15 - in_R11D) >> 0x1f);
      uVar13 = (uint64_t)((int)uVar13 + 1);
    }
  }
  return;
}
// 函数: void SystemCore_d9932(uint *param_1,int param_2,uint64_t param_3,float *param_4)
void SystemCore_d9932(uint *param_1,int param_2,uint64_t param_3,float *param_4)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *in_RAX;
  float in_XMM0_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_retaddr;
  float local_var_f0;
  fVar10 = param_4[2];
  do {
    fVar6 = (float)(param_1[-2] & unaff_XMM8_Da);
    fVar4 = fVar6;
    if (fVar6 <= *param_4) {
      fVar4 = *param_4;
    }
    uVar1 = param_1[1];
    fVar7 = (float)(param_1[-1] & unaff_XMM8_Da);
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    fVar5 = fVar7;
    if (fVar7 <= unaff_XMM14_Da) {
      fVar5 = unaff_XMM14_Da;
    }
    fVar8 = (float)(*param_1 & unaff_XMM8_Da);
    param_1 = param_1 + 6;
    *param_4 = fVar4;
    fVar9 = (float)(uVar1 & unaff_XMM8_Da);
    fVar4 = fVar8;
    if (fVar8 <= fVar10) {
      fVar4 = fVar10;
    }
    fVar10 = (float)(uVar2 & unaff_XMM8_Da);
    unaff_XMM9_Da = unaff_XMM9_Da + fVar7 * fVar7;
    fVar7 = (float)(uVar3 & unaff_XMM8_Da);
    unaff_XMM10_Da = unaff_XMM10_Da + fVar8 * fVar8;
    unaff_XMM11_Da = unaff_XMM11_Da + fVar9 * fVar9;
    if (fVar9 <= local_var_f0) {
      fVar9 = local_var_f0;
    }
    fVar8 = fVar10;
    if (fVar10 <= unaff_retaddr) {
      fVar8 = unaff_retaddr;
    }
    unaff_XMM12_Da = unaff_XMM12_Da + fVar10 * fVar10;
    *in_RAX = fVar6 * fVar6 + *in_RAX;
    unaff_XMM13_Da = unaff_XMM13_Da + fVar7 * fVar7;
    if (fVar7 <= in_XMM0_Da) {
      fVar7 = in_XMM0_Da;
    }
    param_2 = param_2 + -1;
    unaff_XMM14_Da = fVar5;
    fVar10 = fVar4;
    unaff_retaddr = fVar8;
    in_XMM0_Da = fVar7;
    local_var_f0 = fVar9;
  } while (param_2 != 0);
  param_4[3] = fVar9;
  param_4[2] = fVar4;
  param_4[5] = fVar7;
  param_4[1] = fVar5;
  in_RAX[1] = unaff_XMM9_Da;
  param_4[4] = fVar8;
  in_RAX[2] = unaff_XMM10_Da;
  in_RAX[3] = unaff_XMM11_Da;
  in_RAX[4] = unaff_XMM12_Da;
  in_RAX[5] = unaff_XMM13_Da;
  return;
}
// 函数: void SystemCore_d9a7c(float *param_1,int param_2,uint64_t param_3,float *param_4)
void SystemCore_d9a7c(float *param_1,int param_2,uint64_t param_3,float *param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  int in_R11D;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint unaff_XMM8_Da;
  uint unaff_XMM8_Db;
  uint unaff_XMM8_Dc;
  uint unaff_XMM8_Dd;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float *local_var_100;
  if (in_R11D == 8) {
    fVar20 = *param_4;
    fVar21 = param_4[1];
    fVar22 = param_4[2];
    fVar23 = param_4[3];
    fVar24 = param_4[4];
    fVar25 = param_4[5];
    fVar26 = param_4[6];
    fVar27 = param_4[7];
    fVar12 = *local_var_100;
    fVar13 = local_var_100[1];
    fVar14 = local_var_100[2];
    fVar15 = local_var_100[3];
    fVar16 = local_var_100[4];
    fVar17 = local_var_100[5];
    fVar18 = local_var_100[6];
    fVar19 = local_var_100[7];
    if (param_2 != 0) {
      do {
        fVar1 = *param_1;
        fVar2 = param_1[1];
        fVar3 = param_1[2];
        fVar4 = param_1[3];
        fVar5 = param_1[4];
        fVar6 = param_1[5];
        fVar7 = param_1[6];
        fVar8 = param_1[7];
        param_1 = param_1 + 8;
        fVar12 = fVar12 + fVar1 * fVar1;
        fVar13 = fVar13 + fVar2 * fVar2;
        fVar14 = fVar14 + fVar3 * fVar3;
        fVar15 = fVar15 + fVar4 * fVar4;
        fVar16 = fVar16 + fVar5 * fVar5;
        fVar17 = fVar17 + fVar6 * fVar6;
        fVar18 = fVar18 + fVar7 * fVar7;
        fVar19 = fVar19 + fVar8 * fVar8;
        fVar20 = (float)((uint)fVar20 ^
                        ((uint)fVar1 & unaff_XMM8_Da ^ (uint)fVar20) &
                        -(uint)(fVar20 < (float)((uint)fVar1 & unaff_XMM8_Da)));
        fVar21 = (float)((uint)fVar21 ^
                        ((uint)fVar2 & unaff_XMM8_Db ^ (uint)fVar21) &
                        -(uint)(fVar21 < (float)((uint)fVar2 & unaff_XMM8_Db)));
        fVar22 = (float)((uint)fVar22 ^
                        ((uint)fVar3 & unaff_XMM8_Dc ^ (uint)fVar22) &
                        -(uint)(fVar22 < (float)((uint)fVar3 & unaff_XMM8_Dc)));
        fVar23 = (float)((uint)fVar23 ^
                        ((uint)fVar4 & unaff_XMM8_Dd ^ (uint)fVar23) &
                        -(uint)(fVar23 < (float)((uint)fVar4 & unaff_XMM8_Dd)));
        fVar24 = (float)((uint)fVar24 ^
                        ((uint)fVar5 & unaff_XMM8_Da ^ (uint)fVar24) &
                        -(uint)(fVar24 < (float)((uint)fVar5 & unaff_XMM8_Da)));
        fVar25 = (float)((uint)fVar25 ^
                        ((uint)fVar6 & unaff_XMM8_Db ^ (uint)fVar25) &
                        -(uint)(fVar25 < (float)((uint)fVar6 & unaff_XMM8_Db)));
        fVar26 = (float)((uint)fVar26 ^
                        ((uint)fVar7 & unaff_XMM8_Dc ^ (uint)fVar26) &
                        -(uint)(fVar26 < (float)((uint)fVar7 & unaff_XMM8_Dc)));
        fVar27 = (float)((uint)fVar27 ^
                        ((uint)fVar8 & unaff_XMM8_Dd ^ (uint)fVar27) &
                        -(uint)(fVar27 < (float)((uint)fVar8 & unaff_XMM8_Dd)));
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    *param_4 = fVar20;
    param_4[1] = fVar21;
    param_4[2] = fVar22;
    param_4[3] = fVar23;
    *local_var_100 = fVar12;
    local_var_100[1] = fVar13;
    local_var_100[2] = fVar14;
    local_var_100[3] = fVar15;
    param_4[4] = fVar24;
    param_4[5] = fVar25;
    param_4[6] = fVar26;
    param_4[7] = fVar27;
    local_var_100[4] = fVar16;
    local_var_100[5] = fVar17;
    local_var_100[6] = fVar18;
    local_var_100[7] = fVar19;
  }
  else {
    uVar11 = 0;
    uVar9 = uVar11;
    for (param_2 = param_2 * in_R11D; param_2 != 0; param_2 = param_2 + -1) {
      fVar21 = ABS(param_1[uVar9]);
      fVar20 = fVar21;
      if (fVar21 <= param_4[uVar11]) {
        fVar20 = param_4[uVar11];
      }
      fVar22 = local_var_100[uVar11];
      param_4[uVar11] = fVar20;
      local_var_100[uVar11] = fVar21 * fVar21 + fVar22;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)(uVar10 & (int)(uVar10 - in_R11D) >> 0x1f);
      uVar9 = (uint64_t)((int)uVar9 + 1);
    }
  }
  return;
}
// 函数: void SystemCore_d9b20(int64_t param_1,int param_2,uint param_3,int64_t param_4)
void SystemCore_d9b20(int64_t param_1,int param_2,uint param_3,int64_t param_4)
{
  float fVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t in_R8;
  uint in_R10D;
  int in_R11D;
  float fVar4;
  float fVar5;
  int64_t local_var_100;
  do {
    uVar2 = (uint64_t)in_R10D;
    in_R10D = in_R10D + 1;
    fVar5 = (float)(*(uint *)(param_1 + uVar2 * 4) & param_3);
    fVar1 = *(float *)(param_4 + in_R8 * 4);
    fVar4 = fVar5;
    if (fVar5 <= fVar1) {
      fVar4 = fVar1;
    }
    fVar1 = *(float *)(local_var_100 + in_R8 * 4);
    *(float *)(param_4 + in_R8 * 4) = fVar4;
    *(float *)(local_var_100 + in_R8 * 4) = fVar5 * fVar5 + fVar1;
    uVar3 = (int)in_R8 + 1;
    in_R8 = (uint64_t)(uVar3 & (int)(uVar3 - in_R11D) >> 0x1f);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}
// 函数: void SystemCore_d9b79(void)
void SystemCore_d9b79(void)
{
  return;
}
// 函数: void SystemCore_d9b89(void)
void SystemCore_d9b89(void)
{
  return;
}
// 函数: void SystemCore_d9bc0(int64_t param_1,int64_t *param_2,uint param_3)
void SystemCore_d9bc0(int64_t param_1,int64_t *param_2,uint param_3)
{
  int32_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  int32_t uVar28;
  int32_t uVar29;
  int32_t uVar30;
  int32_t uVar31;
  int32_t uVar32;
  uint64_t uVar33;
  uint uVar34;
  uVar34 = 0;
  if (param_3 >> 2 != 0) {
    lVar4 = *param_2;
    lVar5 = param_2[1];
    lVar6 = param_2[4];
    lVar7 = param_2[3];
    lVar8 = param_2[2];
    lVar9 = param_2[5];
    do {
      uVar3 = uVar34 * 0x18;
      puVar1 = (int32_t *)(param_1 + (uint64_t)uVar3 * 4);
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 4) * 4);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      uVar15 = puVar2[2];
      uVar16 = puVar2[3];
      puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 8) * 4);
      uVar17 = *puVar2;
      uVar18 = puVar2[1];
      uVar19 = puVar2[2];
      uVar20 = puVar2[3];
      puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 0xc) * 4);
      uVar21 = *puVar2;
      uVar22 = puVar2[1];
      uVar23 = puVar2[2];
      uVar24 = puVar2[3];
      puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 0x10) * 4);
      uVar25 = *puVar2;
      uVar26 = puVar2[1];
      uVar27 = puVar2[2];
      uVar28 = puVar2[3];
      puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 0x14) * 4);
      uVar29 = *puVar2;
      uVar30 = puVar2[1];
      uVar31 = puVar2[2];
      uVar32 = puVar2[3];
      uVar33 = (uint64_t)(uVar34 * 4);
      uVar34 = uVar34 + 1;
      puVar2 = (int32_t *)(lVar4 + uVar33 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar15;
      puVar2[2] = uVar21;
      puVar2[3] = uVar27;
      puVar1 = (int32_t *)(lVar5 + uVar33 * 4);
      *puVar1 = uVar10;
      puVar1[1] = uVar16;
      puVar1[2] = uVar22;
      puVar1[3] = uVar28;
      puVar1 = (int32_t *)(lVar8 + uVar33 * 4);
      *puVar1 = uVar11;
      puVar1[1] = uVar17;
      puVar1[2] = uVar23;
      puVar1[3] = uVar29;
      puVar1 = (int32_t *)(lVar7 + uVar33 * 4);
      *puVar1 = uVar12;
      puVar1[1] = uVar18;
      puVar1[2] = uVar24;
      puVar1[3] = uVar30;
      puVar1 = (int32_t *)(lVar6 + uVar33 * 4);
      *puVar1 = uVar13;
      puVar1[1] = uVar19;
      puVar1[2] = uVar25;
      puVar1[3] = uVar31;
      puVar1 = (int32_t *)(lVar9 + uVar33 * 4);
      *puVar1 = uVar14;
      puVar1[1] = uVar20;
      puVar1[2] = uVar26;
      puVar1[3] = uVar32;
    } while (uVar34 < param_3 >> 2);
  }
  return;
}
// 函数: void SystemCore_d9bda(int64_t param_1,int64_t param_2,uint param_3)
void SystemCore_d9bda(int64_t param_1,int64_t param_2,uint param_3)
{
  int32_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  int32_t uVar26;
  int32_t uVar27;
  int32_t uVar28;
  int32_t uVar29;
  int32_t uVar30;
  int32_t uVar31;
  int64_t in_RAX;
  uint64_t uVar32;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint in_R10D;
  int64_t in_R11;
  uint64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  lVar4 = *(int64_t *)(param_2 + 8);
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  lVar5 = *(int64_t *)(param_2 + 0x20);
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  lVar6 = *(int64_t *)(param_2 + 0x18);
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  lVar7 = *(int64_t *)(param_2 + 0x10);
  *(uint64_t *)(in_RAX + -8) = unaff_R14;
  lVar8 = *(int64_t *)(param_2 + 0x28);
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  do {
    uVar3 = in_R10D * 0x18;
    puVar1 = (int32_t *)(param_1 + (uint64_t)uVar3 * 4);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 4) * 4);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 8) * 4);
    uVar16 = *puVar2;
    uVar17 = puVar2[1];
    uVar18 = puVar2[2];
    uVar19 = puVar2[3];
    puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 0xc) * 4);
    uVar20 = *puVar2;
    uVar21 = puVar2[1];
    uVar22 = puVar2[2];
    uVar23 = puVar2[3];
    puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 0x10) * 4);
    uVar24 = *puVar2;
    uVar25 = puVar2[1];
    uVar26 = puVar2[2];
    uVar27 = puVar2[3];
    puVar2 = (int32_t *)(param_1 + (uint64_t)(uVar3 + 0x14) * 4);
    uVar28 = *puVar2;
    uVar29 = puVar2[1];
    uVar30 = puVar2[2];
    uVar31 = puVar2[3];
    uVar32 = (uint64_t)(in_R10D * 4);
    in_R10D = in_R10D + 1;
    puVar2 = (int32_t *)(in_R11 + uVar32 * 4);
    *puVar2 = *puVar1;
    puVar2[1] = uVar14;
    puVar2[2] = uVar20;
    puVar2[3] = uVar26;
    puVar1 = (int32_t *)(lVar4 + uVar32 * 4);
    *puVar1 = uVar9;
    puVar1[1] = uVar15;
    puVar1[2] = uVar21;
    puVar1[3] = uVar27;
    puVar1 = (int32_t *)(lVar7 + uVar32 * 4);
    *puVar1 = uVar10;
    puVar1[1] = uVar16;
    puVar1[2] = uVar22;
    puVar1[3] = uVar28;
    puVar1 = (int32_t *)(lVar6 + uVar32 * 4);
    *puVar1 = uVar11;
    puVar1[1] = uVar17;
    puVar1[2] = uVar23;
    puVar1[3] = uVar29;
    puVar1 = (int32_t *)(lVar5 + uVar32 * 4);
    *puVar1 = uVar12;
    puVar1[1] = uVar18;
    puVar1[2] = uVar24;
    puVar1[3] = uVar30;
    puVar1 = (int32_t *)(lVar8 + uVar32 * 4);
    *puVar1 = uVar13;
    puVar1[1] = uVar19;
    puVar1[2] = uVar25;
    puVar1[3] = uVar31;
  } while (in_R10D < param_3);
  return;
}
// 函数: void SystemCore_d9cd4(void)
void SystemCore_d9cd4(void)
{
  return;
}