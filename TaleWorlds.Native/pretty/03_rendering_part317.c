#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part317.c - 2 个函数
// 函数: void function_436410(int64_t *param_1,float *param_2)
void function_436410(int64_t *param_1,float *param_2)
{
  float *pfVar1;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  int64_t lVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint uVar26;
  uint64_t uVar27;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t local_var_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t local_var_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int32_t local_var_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int32_t local_var_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int32_t local_var_5c;
  int64_t lStack_58;
  int64_t lStack_50;
  int32_t local_var_48;
  lVar21 = param_1[8];
  uVar22 = 0;
  fStack_98 = -3.4028235e+38;
  fStack_94 = -3.4028235e+38;
  fStack_90 = -3.4028235e+38;
  local_var_5c = 0xff7fffff;
  fStack_a8 = -3.4028235e+38;
  fStack_a4 = -3.4028235e+38;
  fStack_a0 = -3.4028235e+38;
  fStack_b8 = 3.4028235e+38;
  fStack_b4 = 3.4028235e+38;
  fStack_b0 = 3.4028235e+38;
  local_var_ac = 0x7f7fffff;
  lVar23 = param_1[9] - lVar21 >> 0x3f;
  uVar24 = uVar22;
  uVar25 = uVar22;
  fStack_88 = fStack_98;
  fStack_84 = fStack_94;
  fStack_80 = fStack_90;
  if ((param_1[9] - lVar21) / 0x88 + lVar23 != lVar23) {
    do {
      lVar23 = *(int64_t *)(lVar21 + 0x28 + uVar24);
      uVar20 = uVar22;
      uVar27 = uVar22;
      if (*(int64_t *)(lVar21 + 0x30 + uVar24) - lVar23 >> 4 != 0) {
        do {
          pfVar1 = (float *)(lVar23 + uVar20);
          fVar2 = *pfVar1;
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar5 = param_2[1];
          fVar6 = param_2[2];
          fVar7 = param_2[3];
          fVar8 = param_2[5];
          fVar9 = param_2[6];
          fVar10 = param_2[7];
          fVar11 = param_2[9];
          fVar12 = param_2[10];
          fVar13 = param_2[0xb];
          fVar14 = param_2[0xd];
          fVar15 = param_2[0xe];
          fVar16 = param_2[0xf];
          pfVar1 = (float *)(lVar23 + uVar20);
          *pfVar1 = *param_2 * fVar2 + param_2[4] * fVar3 + param_2[8] * fVar4 + param_2[0xc];
          pfVar1[1] = fVar5 * fVar2 + fVar8 * fVar3 + fVar11 * fVar4 + fVar14;
          pfVar1[2] = fVar6 * fVar2 + fVar9 * fVar3 + fVar12 * fVar4 + fVar15;
          pfVar1[3] = fVar7 * fVar2 + fVar10 * fVar3 + fVar13 * fVar4 + fVar16;
          lVar23 = *(int64_t *)(lVar21 + 0x28 + uVar24);
          fStack_88 = *(float *)(uVar20 + lVar23);
          fStack_98 = fStack_88;
          if (fStack_b8 <= fStack_88) {
            fStack_98 = fStack_b8;
          }
          fStack_84 = *(float *)(uVar20 + 4 + lVar23);
          fStack_94 = fStack_84;
          if (fStack_b4 <= fStack_84) {
            fStack_94 = fStack_b4;
          }
          fStack_80 = *(float *)(uVar20 + 8 + lVar23);
          fStack_90 = fStack_80;
          if (fStack_b0 <= fStack_80) {
            fStack_90 = fStack_b0;
          }
          fStack_b8 = fStack_98;
          fStack_b4 = fStack_94;
          fStack_b0 = fStack_90;
          local_var_ac = local_var_8c;
          if (fStack_88 <= fStack_a8) {
            fStack_88 = fStack_a8;
          }
          if (fStack_84 <= fStack_a4) {
            fStack_84 = fStack_a4;
          }
          if (fStack_80 <= fStack_a0) {
            fStack_80 = fStack_a0;
          }
          uVar26 = (int)uVar27 + 1;
          fStack_a8 = fStack_88;
          fStack_a4 = fStack_84;
          fStack_a0 = fStack_80;
          uVar20 = uVar20 + 0x10;
          uVar27 = (uint64_t)uVar26;
          local_var_5c = local_var_7c;
        } while ((uint64_t)(int64_t)(int)uVar26 <
                 (uint64_t)(*(int64_t *)(lVar21 + 0x30 + uVar24) - lVar23 >> 4));
      }
      lVar21 = param_1[8];
      uVar26 = (int)uVar25 + 1;
      uVar24 = uVar24 + 0x88;
      uVar25 = (uint64_t)uVar26;
      fStack_98 = fStack_88;
      fStack_94 = fStack_84;
      fStack_90 = fStack_80;
    } while ((uint64_t)(int64_t)(int)uVar26 < (uint64_t)((param_1[9] - lVar21) / 0x88));
  }
  lVar21 = *param_1;
  lVar23 = param_1[1] - lVar21 >> 0x3f;
  uVar24 = uVar22;
  uVar25 = uVar22;
  if ((param_1[1] - lVar21) / 0x30 + lVar23 != lVar23) {
    do {
      pfVar1 = (float *)(lVar21 + 4 + uVar24);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = param_2[1];
      fVar6 = param_2[2];
      fVar7 = param_2[3];
      fVar8 = param_2[5];
      fVar9 = param_2[6];
      fVar10 = param_2[7];
      pfVar1 = (float *)(lVar21 + 0x14 + uVar24);
      fVar11 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = param_2[9];
      fVar15 = param_2[10];
      fVar16 = param_2[0xb];
      fVar17 = param_2[0xd];
      fVar18 = param_2[0xe];
      fVar19 = param_2[0xf];
      pfVar1 = (float *)(lVar21 + 4 + uVar24);
      *pfVar1 = *param_2 * fVar2 + param_2[4] * fVar3 + param_2[8] * fVar4 + param_2[0xc];
      pfVar1[1] = fVar5 * fVar2 + fVar8 * fVar3 + fVar14 * fVar4 + fVar17;
      pfVar1[2] = fVar6 * fVar2 + fVar9 * fVar3 + fVar15 * fVar4 + fVar18;
      pfVar1[3] = fVar7 * fVar2 + fVar10 * fVar3 + fVar16 * fVar4 + fVar19;
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      fVar4 = param_2[3];
      fVar5 = param_2[5];
      fVar6 = param_2[6];
      fVar7 = param_2[7];
      fVar8 = param_2[9];
      fVar9 = param_2[10];
      fVar10 = param_2[0xb];
      fVar14 = param_2[0xd];
      fVar15 = param_2[0xe];
      fVar16 = param_2[0xf];
      pfVar1 = (float *)(lVar21 + 0x14 + uVar24);
      *pfVar1 = *param_2 * fVar11 + param_2[4] * fVar12 + param_2[8] * fVar13 + param_2[0xc];
      pfVar1[1] = fVar2 * fVar11 + fVar5 * fVar12 + fVar8 * fVar13 + fVar14;
      pfVar1[2] = fVar3 * fVar11 + fVar6 * fVar12 + fVar9 * fVar13 + fVar15;
      pfVar1[3] = fVar4 * fVar11 + fVar7 * fVar12 + fVar10 * fVar13 + fVar16;
      fStack_98 = *(float *)(lVar21 + 4 + uVar24);
      fStack_88 = fStack_b8;
      if (fStack_98 < fStack_b8) {
        fStack_88 = fStack_98;
      }
      fStack_94 = *(float *)(lVar21 + 8 + uVar24);
      fStack_84 = fStack_b4;
      if (fStack_94 < fStack_b4) {
        fStack_84 = fStack_94;
      }
      fStack_90 = *(float *)(lVar21 + 0xc + uVar24);
      fStack_80 = fStack_b0;
      if (fStack_90 < fStack_b0) {
        fStack_80 = fStack_90;
      }
      if (fStack_98 <= fStack_a8) {
        fStack_98 = fStack_a8;
      }
      if (fStack_94 <= fStack_a4) {
        fStack_94 = fStack_a4;
      }
      if (fStack_90 <= fStack_a0) {
        fStack_90 = fStack_a0;
      }
      fVar2 = *(float *)(lVar21 + 0x14 + uVar24);
      if (fVar2 < fStack_88) {
        fStack_88 = fVar2;
      }
      fVar3 = *(float *)(lVar21 + 0x18 + uVar24);
      if (fVar3 < fStack_84) {
        fStack_84 = fVar3;
      }
      fVar4 = *(float *)(lVar21 + 0x1c + uVar24);
      if (fVar4 < fStack_80) {
        fStack_80 = fVar4;
      }
      fStack_b8 = fStack_88;
      fStack_b4 = fStack_84;
      fStack_b0 = fStack_80;
      local_var_ac = local_var_7c;
      if (fStack_98 < fVar2) {
        fStack_98 = fVar2;
      }
      if (fStack_94 < fVar3) {
        fStack_94 = fVar3;
      }
      if (fStack_90 < fVar4) {
        fStack_90 = fVar4;
      }
      lVar21 = *param_1;
      uVar26 = (int)uVar25 + 1;
      fStack_a8 = fStack_98;
      fStack_a4 = fStack_94;
      fStack_a0 = fStack_90;
      uVar24 = uVar24 + 0x30;
      uVar25 = (uint64_t)uVar26;
      local_var_5c = local_var_8c;
    } while ((uint64_t)(int64_t)(int)uVar26 < (uint64_t)((param_1[1] - lVar21) / 0x30));
  }
  lVar21 = param_1[4];
  uVar24 = uVar22;
  if (param_1[5] - lVar21 >> 5 != 0) {
    do {
      pfVar1 = (float *)(lVar21 + 4 + uVar24);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = param_2[1];
      fVar6 = param_2[2];
      fVar7 = param_2[3];
      fVar8 = param_2[5];
      fVar9 = param_2[6];
      fVar10 = param_2[7];
      fVar11 = param_2[9];
      fVar12 = param_2[10];
      fVar13 = param_2[0xb];
      fVar14 = param_2[0xd];
      fVar15 = param_2[0xe];
      fVar16 = param_2[0xf];
      fStack_98 = *param_2 * fVar2 + param_2[4] * fVar3 + param_2[8] * fVar4 + param_2[0xc];
      pfVar1 = (float *)(lVar21 + 4 + uVar24);
      *pfVar1 = fStack_98;
      pfVar1[1] = fVar5 * fVar2 + fVar8 * fVar3 + fVar11 * fVar4 + fVar14;
      pfVar1[2] = fVar6 * fVar2 + fVar9 * fVar3 + fVar12 * fVar4 + fVar15;
      pfVar1[3] = fVar7 * fVar2 + fVar10 * fVar3 + fVar13 * fVar4 + fVar16;
      fStack_88 = fStack_98;
      if (fStack_b8 <= fStack_98) {
        fStack_88 = fStack_b8;
      }
      fStack_94 = *(float *)(lVar21 + 8 + uVar24);
      fStack_84 = fStack_94;
      if (fStack_b4 <= fStack_94) {
        fStack_84 = fStack_b4;
      }
      fStack_90 = *(float *)(lVar21 + 0xc + uVar24);
      fStack_80 = fStack_90;
      if (fStack_b0 <= fStack_90) {
        fStack_80 = fStack_b0;
      }
      fStack_b8 = fStack_88;
      fStack_b4 = fStack_84;
      fStack_b0 = fStack_80;
      local_var_ac = local_var_7c;
      if (fStack_98 <= fStack_a8) {
        fStack_98 = fStack_a8;
      }
      if (fStack_94 <= fStack_a4) {
        fStack_94 = fStack_a4;
      }
      if (fStack_90 <= fStack_a0) {
        fStack_90 = fStack_a0;
      }
      lVar21 = param_1[4];
      uVar26 = (int)uVar22 + 1;
      uVar22 = (uint64_t)uVar26;
      fStack_a8 = fStack_98;
      fStack_a4 = fStack_94;
      fStack_a0 = fStack_90;
      uVar24 = uVar24 + 0x20;
      local_var_5c = local_var_8c;
    } while ((uint64_t)(int64_t)(int)uVar26 < (uint64_t)(param_1[5] - lVar21 >> 5));
  }
  fStack_78 = fStack_b8;
  fStack_74 = fStack_b4;
  fStack_70 = fStack_b0;
  local_var_6c = local_var_ac;
  fStack_68 = fStack_98;
  fStack_64 = fStack_94;
  fStack_60 = fStack_90;
  SystemCore_Parser(&fStack_78);
  param_1[0x1f] = CONCAT44(fStack_74,fStack_78);
  param_1[0x20] = CONCAT44(local_var_6c,fStack_70);
  param_1[0x21] = CONCAT44(fStack_64,fStack_68);
  param_1[0x22] = CONCAT44(local_var_5c,fStack_60);
  param_1[0x23] = lStack_58;
  param_1[0x24] = lStack_50;
  *(int32_t *)(param_1 + 0x25) = local_var_48;
  return;
}
// 函数: void function_436446(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void function_436446(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
{
  float *pfVar1;
  float fVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t in_RAX;
  uint64_t uVar16;
  int64_t lVar17;
  float *unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t uVar18;
  uint64_t uVar19;
  uint uVar20;
  uint64_t uVar21;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar22;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  float fVar23;
  float fVar24;
  int32_t uVar25;
  uint64_t in_XMM2_Qa;
  int32_t uVar26;
  int32_t in_XMM2_Dc;
  int32_t in_XMM2_Dd;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uVar26 = (int32_t)((uint64_t)in_XMM2_Qa >> 0x20);
  uVar25 = (int32_t)in_XMM2_Qa;
  *(uint64_t *)(in_RAX + 8) = unaff_R14;
  uVar18 = unaff_RSI & 0xffffffff;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R15;
  *(int32_t *)(unaff_RBP + -0x49) = uVar25;
  *(int32_t *)(unaff_RBP + -0x45) = uVar26;
  *(int32_t *)(unaff_RBP + -0x41) = in_XMM2_Dc;
  *(int32_t *)(unaff_RBP + -0x3d) = in_XMM2_Dd;
  *(int *)(unaff_RBP + -0x59) = (int)param_1;
  *(int *)(unaff_RBP + -0x55) = (int)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x51) = in_XMM0_Dc;
  *(int32_t *)(unaff_RBP + -0x4d) = in_XMM0_Dd;
  if (param_3 / 0x88 + (param_3 >> 0x3f) != param_3 >> 0x3f) {
    uVar19 = unaff_RSI & 0xffffffff;
    do {
      lVar17 = *(int64_t *)(param_4 + 0x28 + uVar19);
      uVar21 = unaff_RSI & 0xffffffff;
      uVar16 = unaff_RSI;
      if (*(int64_t *)(param_4 + 0x30 + uVar19) - lVar17 >> 4 != 0) {
        do {
          pfVar1 = (float *)(lVar17 + uVar16);
          fVar27 = *pfVar1;
          fVar24 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = unaff_RBX[1];
          fVar30 = unaff_RBX[2];
          fVar2 = unaff_RBX[3];
          fVar4 = unaff_RBX[5];
          fVar5 = unaff_RBX[6];
          fVar6 = unaff_RBX[7];
          fVar7 = unaff_RBX[9];
          fVar8 = unaff_RBX[10];
          fVar9 = unaff_RBX[0xb];
          fVar10 = unaff_RBX[0xd];
          fVar11 = unaff_RBX[0xe];
          fVar12 = unaff_RBX[0xf];
          fVar29 = *(float *)(unaff_RBP + -0x59);
          pfVar1 = (float *)(lVar17 + uVar16);
          *pfVar1 = *unaff_RBX * fVar27 + unaff_RBX[4] * fVar24 + unaff_RBX[8] * fVar22 +
                    unaff_RBX[0xc];
          pfVar1[1] = fVar23 * fVar27 + fVar4 * fVar24 + fVar7 * fVar22 + fVar10;
          pfVar1[2] = fVar30 * fVar27 + fVar5 * fVar24 + fVar8 * fVar22 + fVar11;
          pfVar1[3] = fVar2 * fVar27 + fVar6 * fVar24 + fVar9 * fVar22 + fVar12;
          lVar17 = *(int64_t *)(param_4 + 0x28 + uVar19);
          fVar27 = *(float *)(uVar16 + lVar17);
          if (fVar29 <= fVar27) {
            *(float *)(unaff_RBP + -0x39) = fVar29;
          }
          else {
            *(float *)(unaff_RBP + -0x39) = fVar27;
          }
          fVar29 = *(float *)(uVar16 + 4 + lVar17);
          if (*(float *)(unaff_RBP + -0x55) <= fVar29) {
            *(float *)(unaff_RBP + -0x35) = *(float *)(unaff_RBP + -0x55);
          }
          else {
            *(float *)(unaff_RBP + -0x35) = fVar29;
          }
          fVar24 = *(float *)(uVar16 + 8 + lVar17);
          if (*(float *)(unaff_RBP + -0x51) <= fVar24) {
            *(float *)(unaff_RBP + -0x31) = *(float *)(unaff_RBP + -0x51);
          }
          else {
            *(float *)(unaff_RBP + -0x31) = fVar24;
          }
          *(uint64_t *)(unaff_RBP + -0x59) = *(uint64_t *)(unaff_RBP + -0x39);
          *(uint64_t *)(unaff_RBP + -0x51) = *(uint64_t *)(unaff_RBP + -0x31);
          if (fVar27 <= *(float *)(unaff_RBP + -0x49)) {
            *(float *)(unaff_RBP + -0x29) = *(float *)(unaff_RBP + -0x49);
          }
          else {
            *(float *)(unaff_RBP + -0x29) = fVar27;
          }
          if (fVar29 <= *(float *)(unaff_RBP + -0x45)) {
            *(float *)(unaff_RBP + -0x25) = *(float *)(unaff_RBP + -0x45);
          }
          else {
            *(float *)(unaff_RBP + -0x25) = fVar29;
          }
          if (fVar24 <= *(float *)(unaff_RBP + -0x41)) {
            *(float *)(unaff_RBP + -0x21) = *(float *)(unaff_RBP + -0x41);
          }
          else {
            *(float *)(unaff_RBP + -0x21) = fVar24;
          }
          lVar3 = *(int64_t *)(param_4 + 0x30 + uVar19);
          uVar20 = (int)uVar21 + 1;
          uVar21 = (uint64_t)uVar20;
          uVar25 = *(int32_t *)(unaff_RBP + -0x29);
          uVar26 = *(int32_t *)(unaff_RBP + -0x25);
          in_XMM2_Dc = *(int32_t *)(unaff_RBP + -0x21);
          in_XMM2_Dd = *(int32_t *)(unaff_RBP + -0x1d);
          *(int32_t *)(unaff_RBP + -0x49) = uVar25;
          *(int32_t *)(unaff_RBP + -0x45) = uVar26;
          *(int32_t *)(unaff_RBP + -0x41) = in_XMM2_Dc;
          *(int32_t *)(unaff_RBP + -0x3d) = in_XMM2_Dd;
          uVar16 = uVar16 + 0x10;
        } while ((uint64_t)(int64_t)(int)uVar20 < (uint64_t)(lVar3 - lVar17 >> 4));
      }
      param_4 = unaff_RDI[8];
      uVar20 = (int)uVar18 + 1;
      uVar18 = (uint64_t)uVar20;
      uVar19 = uVar19 + 0x88;
    } while ((uint64_t)(int64_t)(int)uVar20 < (uint64_t)((unaff_RDI[9] - param_4) / 0x88));
  }
  lVar17 = *unaff_RDI;
  uVar19 = unaff_RSI & 0xffffffff;
  lVar3 = unaff_RDI[1] - lVar17 >> 0x3f;
  uVar18 = unaff_RSI;
  if ((unaff_RDI[1] - lVar17) / 0x30 + lVar3 != lVar3) {
    do {
      pfVar1 = (float *)(lVar17 + 4 + uVar18);
      fVar29 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar22 = unaff_RBX[1];
      fVar23 = unaff_RBX[2];
      fVar30 = unaff_RBX[3];
      fVar2 = unaff_RBX[5];
      fVar4 = unaff_RBX[6];
      fVar5 = unaff_RBX[7];
      pfVar1 = (float *)(lVar17 + 0x14 + uVar18);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = unaff_RBX[9];
      fVar10 = unaff_RBX[10];
      fVar11 = unaff_RBX[0xb];
      fVar12 = unaff_RBX[0xd];
      fVar28 = unaff_RBX[0xe];
      fVar13 = unaff_RBX[0xf];
      pfVar1 = (float *)(lVar17 + 4 + uVar18);
      *pfVar1 = *unaff_RBX * fVar29 + unaff_RBX[4] * fVar27 + unaff_RBX[8] * fVar24 + unaff_RBX[0xc]
      ;
      pfVar1[1] = fVar22 * fVar29 + fVar2 * fVar27 + fVar9 * fVar24 + fVar12;
      pfVar1[2] = fVar23 * fVar29 + fVar4 * fVar27 + fVar10 * fVar24 + fVar28;
      pfVar1[3] = fVar30 * fVar29 + fVar5 * fVar27 + fVar11 * fVar24 + fVar13;
      fVar29 = unaff_RBX[1];
      fVar27 = unaff_RBX[2];
      fVar24 = unaff_RBX[3];
      fVar22 = unaff_RBX[5];
      fVar23 = unaff_RBX[6];
      fVar30 = unaff_RBX[7];
      fVar2 = unaff_RBX[9];
      fVar4 = unaff_RBX[10];
      fVar5 = unaff_RBX[0xb];
      fVar9 = unaff_RBX[0xd];
      fVar10 = unaff_RBX[0xe];
      fVar11 = unaff_RBX[0xf];
      pfVar1 = (float *)(lVar17 + 0x14 + uVar18);
      *pfVar1 = *unaff_RBX * fVar6 + unaff_RBX[4] * fVar7 + unaff_RBX[8] * fVar8 + unaff_RBX[0xc];
      pfVar1[1] = fVar29 * fVar6 + fVar22 * fVar7 + fVar2 * fVar8 + fVar9;
      pfVar1[2] = fVar27 * fVar6 + fVar23 * fVar7 + fVar4 * fVar8 + fVar10;
      pfVar1[3] = fVar24 * fVar6 + fVar30 * fVar7 + fVar5 * fVar8 + fVar11;
      fVar29 = *(float *)(lVar17 + 4 + uVar18);
      fVar27 = *(float *)(unaff_RBP + -0x59);
      if (fVar29 < *(float *)(unaff_RBP + -0x59)) {
        fVar27 = fVar29;
      }
      fVar24 = *(float *)(lVar17 + 8 + uVar18);
      fVar22 = *(float *)(unaff_RBP + -0x55);
      if (fVar24 < *(float *)(unaff_RBP + -0x55)) {
        fVar22 = fVar24;
      }
      fVar23 = *(float *)(lVar17 + 0xc + uVar18);
      fVar30 = *(float *)(unaff_RBP + -0x51);
      if (fVar23 < *(float *)(unaff_RBP + -0x51)) {
        fVar30 = fVar23;
      }
      if (fVar29 <= *(float *)(unaff_RBP + -0x49)) {
        fVar29 = *(float *)(unaff_RBP + -0x49);
      }
      if (fVar24 <= *(float *)(unaff_RBP + -0x45)) {
        fVar24 = *(float *)(unaff_RBP + -0x45);
      }
      if (fVar23 <= *(float *)(unaff_RBP + -0x41)) {
        fVar23 = *(float *)(unaff_RBP + -0x41);
      }
      fVar2 = *(float *)(lVar17 + 0x14 + uVar18);
      if (fVar27 <= fVar2) {
        *(float *)(unaff_RBP + -0x29) = fVar27;
      }
      else {
        *(float *)(unaff_RBP + -0x29) = fVar2;
      }
      fVar27 = *(float *)(lVar17 + 0x18 + uVar18);
      if (fVar22 <= fVar27) {
        *(float *)(unaff_RBP + -0x25) = fVar22;
      }
      else {
        *(float *)(unaff_RBP + -0x25) = fVar27;
      }
      fVar22 = *(float *)(lVar17 + 0x1c + uVar18);
      if (fVar30 <= fVar22) {
        *(float *)(unaff_RBP + -0x21) = fVar30;
      }
      else {
        *(float *)(unaff_RBP + -0x21) = fVar22;
      }
      *(uint64_t *)(unaff_RBP + -0x59) = *(uint64_t *)(unaff_RBP + -0x29);
      *(uint64_t *)(unaff_RBP + -0x51) = *(uint64_t *)(unaff_RBP + -0x21);
      if (fVar2 <= fVar29) {
        *(float *)(unaff_RBP + -0x39) = fVar29;
      }
      else {
        *(float *)(unaff_RBP + -0x39) = fVar2;
      }
      if (fVar27 <= fVar24) {
        *(float *)(unaff_RBP + -0x35) = fVar24;
      }
      else {
        *(float *)(unaff_RBP + -0x35) = fVar27;
      }
      if (fVar22 <= fVar23) {
        *(float *)(unaff_RBP + -0x31) = fVar23;
      }
      else {
        *(float *)(unaff_RBP + -0x31) = fVar22;
      }
      lVar17 = *unaff_RDI;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (uint64_t)uVar20;
      lVar3 = unaff_RDI[1];
      uVar25 = *(int32_t *)(unaff_RBP + -0x39);
      uVar26 = *(int32_t *)(unaff_RBP + -0x35);
      in_XMM2_Dc = *(int32_t *)(unaff_RBP + -0x31);
      in_XMM2_Dd = *(int32_t *)(unaff_RBP + -0x2d);
      *(int32_t *)(unaff_RBP + -0x49) = uVar25;
      *(int32_t *)(unaff_RBP + -0x45) = uVar26;
      *(int32_t *)(unaff_RBP + -0x41) = in_XMM2_Dc;
      *(int32_t *)(unaff_RBP + -0x3d) = in_XMM2_Dd;
      uVar18 = uVar18 + 0x30;
    } while ((uint64_t)(int64_t)(int)uVar20 < (uint64_t)((lVar3 - lVar17) / 0x30));
  }
  lVar17 = unaff_RDI[4];
  uVar18 = unaff_RSI;
  if (unaff_RDI[5] - lVar17 >> 5 != 0) {
    do {
      pfVar1 = (float *)(lVar17 + 4 + uVar18);
      fVar27 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar22 = pfVar1[2];
      fVar23 = unaff_RBX[1];
      fVar30 = unaff_RBX[2];
      fVar2 = unaff_RBX[3];
      fVar4 = unaff_RBX[5];
      fVar5 = unaff_RBX[6];
      fVar6 = unaff_RBX[7];
      fVar7 = unaff_RBX[9];
      fVar8 = unaff_RBX[10];
      fVar9 = unaff_RBX[0xb];
      fVar10 = unaff_RBX[0xd];
      fVar11 = unaff_RBX[0xe];
      fVar12 = unaff_RBX[0xf];
      fVar28 = *unaff_RBX * fVar27 + unaff_RBX[4] * fVar24 + unaff_RBX[8] * fVar22 + unaff_RBX[0xc];
      fVar29 = *(float *)(unaff_RBP + -0x59);
      pfVar1 = (float *)(lVar17 + 4 + uVar18);
      *pfVar1 = fVar28;
      pfVar1[1] = fVar23 * fVar27 + fVar4 * fVar24 + fVar7 * fVar22 + fVar10;
      pfVar1[2] = fVar30 * fVar27 + fVar5 * fVar24 + fVar8 * fVar22 + fVar11;
      pfVar1[3] = fVar2 * fVar27 + fVar6 * fVar24 + fVar9 * fVar22 + fVar12;
      if (fVar29 <= fVar28) {
        *(float *)(unaff_RBP + -0x29) = fVar29;
      }
      else {
        *(float *)(unaff_RBP + -0x29) = fVar28;
      }
      fVar29 = *(float *)(lVar17 + 8 + uVar18);
      if (*(float *)(unaff_RBP + -0x55) <= fVar29) {
        *(float *)(unaff_RBP + -0x25) = *(float *)(unaff_RBP + -0x55);
      }
      else {
        *(float *)(unaff_RBP + -0x25) = fVar29;
      }
      fVar27 = *(float *)(lVar17 + 0xc + uVar18);
      if (*(float *)(unaff_RBP + -0x51) <= fVar27) {
        *(float *)(unaff_RBP + -0x21) = *(float *)(unaff_RBP + -0x51);
      }
      else {
        *(float *)(unaff_RBP + -0x21) = fVar27;
      }
      *(uint64_t *)(unaff_RBP + -0x59) = *(uint64_t *)(unaff_RBP + -0x29);
      *(uint64_t *)(unaff_RBP + -0x51) = *(uint64_t *)(unaff_RBP + -0x21);
      if (fVar28 <= *(float *)(unaff_RBP + -0x49)) {
        *(float *)(unaff_RBP + -0x39) = *(float *)(unaff_RBP + -0x49);
      }
      else {
        *(float *)(unaff_RBP + -0x39) = fVar28;
      }
      if (fVar29 <= *(float *)(unaff_RBP + -0x45)) {
        *(float *)(unaff_RBP + -0x35) = *(float *)(unaff_RBP + -0x45);
      }
      else {
        *(float *)(unaff_RBP + -0x35) = fVar29;
      }
      if (fVar27 <= *(float *)(unaff_RBP + -0x41)) {
        *(float *)(unaff_RBP + -0x31) = *(float *)(unaff_RBP + -0x41);
      }
      else {
        *(float *)(unaff_RBP + -0x31) = fVar27;
      }
      lVar17 = unaff_RDI[4];
      uVar20 = (int)unaff_RSI + 1;
      unaff_RSI = (uint64_t)uVar20;
      lVar3 = unaff_RDI[5];
      uVar25 = *(int32_t *)(unaff_RBP + -0x39);
      uVar26 = *(int32_t *)(unaff_RBP + -0x35);
      in_XMM2_Dc = *(int32_t *)(unaff_RBP + -0x31);
      in_XMM2_Dd = *(int32_t *)(unaff_RBP + -0x2d);
      *(int32_t *)(unaff_RBP + -0x49) = uVar25;
      *(int32_t *)(unaff_RBP + -0x45) = uVar26;
      *(int32_t *)(unaff_RBP + -0x41) = in_XMM2_Dc;
      *(int32_t *)(unaff_RBP + -0x3d) = in_XMM2_Dd;
      uVar18 = uVar18 + 0x20;
    } while ((uint64_t)(int64_t)(int)uVar20 < (uint64_t)(lVar3 - lVar17 >> 5));
  }
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RBP + -0x59);
  *(int32_t *)(unaff_RBP + -0x15) = *(int32_t *)(unaff_RBP + -0x55);
  *(int32_t *)(unaff_RBP + -0x11) = *(int32_t *)(unaff_RBP + -0x51);
  *(int32_t *)(unaff_RBP + -0xd) = *(int32_t *)(unaff_RBP + -0x4d);
  *(int32_t *)(unaff_RBP + -9) = uVar25;
  *(int32_t *)(unaff_RBP + -5) = uVar26;
  *(int32_t *)(unaff_RBP + -1) = in_XMM2_Dc;
  *(int32_t *)(unaff_RBP + 3) = in_XMM2_Dd;
  SystemCore_Parser(unaff_RBP + -0x19);
  lVar17 = *(int64_t *)(unaff_RBP + -0x11);
  uVar25 = *(int32_t *)(unaff_RBP + 0x17);
  lVar3 = *(int64_t *)(unaff_RBP + -9);
  lVar14 = *(int64_t *)(unaff_RBP + -1);
  unaff_RDI[0x1f] = *(int64_t *)(unaff_RBP + -0x19);
  unaff_RDI[0x20] = lVar17;
  lVar17 = *(int64_t *)(unaff_RBP + 7);
  lVar15 = *(int64_t *)(unaff_RBP + 0xf);
  unaff_RDI[0x21] = lVar3;
  unaff_RDI[0x22] = lVar14;
  unaff_RDI[0x23] = lVar17;
  unaff_RDI[0x24] = lVar15;
  *(int32_t *)(unaff_RDI + 0x25) = uVar25;
  return;
}