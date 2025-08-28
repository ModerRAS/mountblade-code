#include "TaleWorlds.Native.Split.h"
// 99_part_05_part039.c - 1 个函数
// 函数: void DataStructure_f09bb(void)
void DataStructure_f09bb(void)
{
  return;
}
uint64_t DataStructure_f09d0(int64_t param_1)
{
  int64_t lVar1;
  float fVar2;
  float *pfVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  bool bVar8;
  int32_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auVar14 [16];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t local_var_dc;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t local_var_ac;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uVar7 = *(uint64_t *)(param_1 + 0x20);
  if ((uVar7 != 0) && (lVar1 = *(int64_t *)(uVar7 + 0x2908), lVar1 != 0)) {
    uVar5 = *(uint *)(param_1 + 0x2ac);
    bVar8 = (uVar5 >> 0x10 & 1) != 0;
    if (bVar8) {
      uVar9 = RenderingSystem_a56a0(lVar1,param_1 + 0xa0,0);
      local_var_c8 = *(uint64_t *)(param_1 + 0x80);
      local_var_c0 = *(uint64_t *)(param_1 + 0x88);
      local_var_d8 = *(uint64_t *)(param_1 + 0x70);
      local_var_d0 = *(uint64_t *)(param_1 + 0x78);
      local_var_a8 = *(uint64_t *)(param_1 + 0xa0);
      fStack_b8 = *(float *)(param_1 + 0x90);
      fStack_b4 = *(float *)(param_1 + 0x94);
      fStack_b0 = *(float *)(param_1 + 0x98);
      local_var_ac = *(int32_t *)(param_1 + 0x9c);
      local_var_a0 = CONCAT44((int)((uint64_t)*(uint64_t *)(param_1 + 0xa8) >> 0x20),uVar9);
      NetworkProtocol_Transmitter(param_1,&local_var_d8);
      uVar5 = *(uint *)(param_1 + 0x2ac);
    }
    uVar7 = (uint64_t)bVar8;
    if ((int)uVar5 < 0) {
      local_var_c8 = *(uint64_t *)(param_1 + 0x80);
      local_var_c0 = *(uint64_t *)(param_1 + 0x88);
      fVar12 = *(float *)(param_1 + 0x70);
      fVar13 = *(float *)(param_1 + 0x74);
      local_var_d8 = *(uint64_t *)(param_1 + 0x70);
      fVar2 = *(float *)(param_1 + 0x78);
      local_var_d0._4_4_ = *(int32_t *)(param_1 + 0x7c);
      local_var_a8 = *(uint64_t *)(param_1 + 0xa0);
      local_var_a0 = *(uint64_t *)(param_1 + 0xa8);
      local_var_d0._0_4_ = fVar2;
      RenderingSystem_a5440(lVar1,&fStack_e8,param_1 + 0xa0,0);
      fVar10 = fStack_e4 * fStack_e4 + fStack_e8 * fStack_e8 + fStack_e0 * fStack_e0;
      auVar14 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar11 = auVar14._0_4_;
      fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
      fStack_e8 = fStack_e8 * fVar10;
      fStack_e4 = fStack_e4 * fVar10;
      fStack_e0 = fStack_e0 * fVar10;
      local_var_ac = local_var_dc;
      local_var_c8._0_4_ = fStack_e4 * fVar2 - fStack_e0 * fVar13;
      fVar10 = fVar13 * fStack_e8 - fVar12 * fStack_e4;
      local_var_c8._4_4_ = fStack_e0 * fVar12 - fStack_e8 * fVar2;
      fVar12 = local_var_c8._4_4_ * local_var_c8._4_4_ + (float)local_var_c8 * (float)local_var_c8 +
               fVar10 * fVar10;
      auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar13 = auVar14._0_4_;
      fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
      local_var_c8._4_4_ = local_var_c8._4_4_ * fVar12;
      fVar10 = fVar10 * fVar12;
      local_var_c8._0_4_ = (float)local_var_c8 * fVar12;
      local_var_d8._0_4_ = local_var_c8._4_4_ * fStack_e0 - fVar10 * fStack_e4;
      local_var_d8._4_4_ = fVar10 * fStack_e8 - (float)local_var_c8 * fStack_e0;
      local_var_d0._0_4_ = (float)local_var_c8 * fStack_e4 - local_var_c8._4_4_ * fStack_e8;
      fVar12 = local_var_d8._4_4_ * local_var_d8._4_4_ + (float)local_var_d8 * (float)local_var_d8 +
               (float)local_var_d0 * (float)local_var_d0;
      auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar13 = auVar14._0_4_;
      fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
      local_var_d8._4_4_ = local_var_d8._4_4_ * fVar12;
      local_var_d8._0_4_ = (float)local_var_d8 * fVar12;
      local_var_d0._0_4_ = (float)local_var_d0 * fVar12;
      fVar12 = local_var_d8._4_4_ * local_var_d8._4_4_ + (float)local_var_d8 * (float)local_var_d8 +
               (float)local_var_d0 * (float)local_var_d0;
      if ((((fVar12 <= 0.98010004) || (1.0201 <= fVar12)) ||
          (fVar12 = (float)local_var_c8 * (float)local_var_c8 + local_var_c8._4_4_ * local_var_c8._4_4_ +
                    fVar10 * fVar10, fVar12 <= 0.98010004)) ||
         (((1.0201 <= fVar12 ||
           (fVar12 = fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4 + fStack_e0 * fStack_e0,
           fVar12 <= 0.98010004)) ||
          (fStack_b8 = fStack_e8, fStack_b4 = fStack_e4, fStack_b0 = fStack_e0,
          local_var_c0._0_4_ = fVar10, 1.0201 <= fVar12)))) {
        local_var_d8._0_4_ = 1.0;
        local_var_d8._4_4_ = 0.0;
        local_var_d0._0_4_ = 0.0;
        local_var_d0._4_4_ = 0;
        fStack_b8 = 0.0;
        fStack_b4 = 0.0;
        fStack_b0 = 1.0;
        local_var_ac = 0;
        local_var_c8._0_4_ = 0.0;
        local_var_c8._4_4_ = 1.0;
        local_var_c0._0_4_ = 0.0;
        local_var_c0._4_4_ = 0;
      }
      DataStructure_f5bc0(&local_var_d8);
      pfVar3 = (float *)RenderingSystem_LightSystem(param_1 + 0x70,&fStack_e8);
      fVar12 = *pfVar3;
      fVar13 = pfVar3[1];
      local_var_d8 = CONCAT44(local_var_d8._4_4_ * fVar12,(float)local_var_d8 * fVar12);
      local_var_d0 = CONCAT44(local_var_d0._4_4_,(float)local_var_d0 * fVar12);
      local_var_c8 = CONCAT44(local_var_c8._4_4_ * fVar13,(float)local_var_c8 * fVar13);
      fVar12 = pfVar3[2];
      fStack_b8 = fStack_b8 * fVar12;
      local_var_c0 = CONCAT44(local_var_c0._4_4_,(float)local_var_c0 * fVar13);
      fStack_b0 = fStack_b0 * fVar12;
      fStack_b4 = fStack_b4 * fVar12;
      NetworkProtocol_Transmitter(param_1,&local_var_d8);
      uVar7 = 1;
    }
    uVar4 = 0;
    uVar6 = uVar4;
    if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
      do {
        DataStructure_f09d0(*(uint64_t *)(uVar4 + *(int64_t *)(param_1 + 0x1c0)));
        uVar4 = uVar4 + 8;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar5;
      } while ((uint64_t)(int64_t)(int)uVar5 <
               (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
    }
    return uVar7;
  }
  return uVar7 & 0xffffffffffffff00;
}
bool DataStructure_f0a07(int32_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint in_EAX;
  float *pfVar8;
  int64_t in_RCX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar9;
  uint uVar10;
  uint64_t unaff_RDI;
  uint64_t uVar11;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool bVar12;
  int32_t uVar13;
  int32_t uVar14;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_var_20;
  float fStackX_24;
  float fStack0000000000000028;
  int32_t local_buffer_2c;
  *(uint64_t *)(in_R11 + 8) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x10) = unaff_R14;
  *(uint64_t *)(in_R11 + 0x18) = unaff_R15;
  bVar12 = (in_EAX >> 0x10 & 1) != 0;
  if (bVar12) {
    uVar13 = RenderingSystem_a56a0(param_1,in_RCX + 0xa0,0);
    uVar4 = *(uint64_t *)(unaff_RBX + 0x88);
    uVar5 = *(uint64_t *)(unaff_RBX + 0x70);
    uVar6 = *(uint64_t *)(unaff_RBX + 0x78);
    *(uint64_t *)(unaff_RBP + -0x69) = *(uint64_t *)(unaff_RBX + 0x80);
    *(uint64_t *)(unaff_RBP + -0x61) = uVar4;
    uVar4 = *(uint64_t *)(unaff_RBX + 0xa0);
    uVar7 = *(uint64_t *)(unaff_RBX + 0xa8);
    *(uint64_t *)(unaff_RBP + -0x79) = uVar5;
    *(uint64_t *)(unaff_RBP + -0x71) = uVar6;
    uVar14 = *(int32_t *)(unaff_RBX + 0x90);
    uVar1 = *(int32_t *)(unaff_RBX + 0x94);
    uVar2 = *(int32_t *)(unaff_RBX + 0x98);
    uVar3 = *(int32_t *)(unaff_RBX + 0x9c);
    *(uint64_t *)(unaff_RBP + -0x49) = uVar4;
    *(uint64_t *)(unaff_RBP + -0x41) = uVar7;
    *(int32_t *)(unaff_RBP + -0x41) = uVar13;
    *(int32_t *)(unaff_RBP + -0x59) = uVar14;
    *(int32_t *)(unaff_RBP + -0x55) = uVar1;
    *(int32_t *)(unaff_RBP + -0x51) = uVar2;
    *(int32_t *)(unaff_RBP + -0x4d) = uVar3;
    NetworkProtocol_Transmitter(uVar13,unaff_RBP + -0x79);
    in_EAX = *(uint *)(unaff_RBX + 0x2ac);
  }
  if ((int)in_EAX < 0) {
    uVar4 = *(uint64_t *)(unaff_RBX + 0x88);
    fVar16 = *(float *)(unaff_RBX + 0x70);
    fVar18 = *(float *)(unaff_RBX + 0x74);
    fVar19 = *(float *)(unaff_RBX + 0x78);
    uVar14 = *(int32_t *)(unaff_RBX + 0x7c);
    *(uint64_t *)(unaff_RBP + -0x69) = *(uint64_t *)(unaff_RBX + 0x80);
    *(uint64_t *)(unaff_RBP + -0x61) = uVar4;
    uVar1 = *(int32_t *)(unaff_RBX + 0xa0);
    uVar2 = *(int32_t *)(unaff_RBX + 0xa4);
    uVar3 = *(int32_t *)(unaff_RBX + 0xa8);
    uVar13 = *(int32_t *)(unaff_RBX + 0xac);
    *(int32_t *)(unaff_RBP + -0x49) = uVar1;
    *(int32_t *)(unaff_RBP + -0x45) = uVar2;
    *(int32_t *)(unaff_RBP + -0x41) = uVar3;
    *(int32_t *)(unaff_RBP + -0x3d) = uVar13;
    *(float *)(unaff_RBP + -0x79) = fVar16;
    *(float *)(unaff_RBP + -0x75) = fVar18;
    *(float *)(unaff_RBP + -0x71) = fVar19;
    *(int32_t *)(unaff_RBP + -0x6d) = uVar14;
    RenderingSystem_a5440(uVar1,&local_buffer_00000020,unaff_RBX + 0xa0,0);
    fVar15 = fStackX_24 * fStackX_24 + local_var_20 * local_var_20 +
             fStack0000000000000028 * fStack0000000000000028;
    auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar20 = auVar17._0_4_;
    fVar15 = fVar20 * 0.5 * (3.0 - fVar15 * fVar20 * fVar20);
    local_var_20 = local_var_20 * fVar15;
    fVar22 = fStackX_24 * fVar15;
    fStack0000000000000028 = fStack0000000000000028 * fVar15;
    *(float *)(unaff_RBP + -0x59) = local_var_20;
    *(float *)(unaff_RBP + -0x55) = fVar22;
    *(float *)(unaff_RBP + -0x51) = fStack0000000000000028;
    *(int32_t *)(unaff_RBP + -0x4d) = local_buffer_2c;
    fVar20 = fVar22 * fVar19 - fStack0000000000000028 * fVar18;
    fVar21 = fVar18 * local_var_20 - fVar16 * fVar22;
    fVar23 = fStack0000000000000028 * fVar16 - local_var_20 * fVar19;
    fVar16 = fVar23 * fVar23 + fVar20 * fVar20 + fVar21 * fVar21;
    auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar18 = auVar17._0_4_;
    fVar16 = fVar18 * 0.5 * (3.0 - fVar16 * fVar18 * fVar18);
    fVar23 = fVar23 * fVar16;
    fVar21 = fVar21 * fVar16;
    fVar20 = fVar20 * fVar16;
    fVar15 = fVar23 * fStack0000000000000028 - fVar21 * fVar22;
    *(float *)(unaff_RBP + -0x69) = fVar20;
    *(float *)(unaff_RBP + -0x65) = fVar23;
    *(float *)(unaff_RBP + -0x61) = fVar21;
    fVar24 = fVar21 * local_var_20 - fVar20 * fStack0000000000000028;
    fVar19 = fVar20 * fVar22 - fVar23 * local_var_20;
    fVar16 = fVar24 * fVar24 + fVar15 * fVar15 + fVar19 * fVar19;
    auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar18 = auVar17._0_4_;
    fVar16 = fVar16 * fVar18 * fVar18;
    fVar18 = fVar18 * 0.5 * (3.0 - fVar16);
    uVar14 = 0x3f7ae7d6;
    fVar24 = fVar24 * fVar18;
    fVar15 = fVar15 * fVar18;
    *(float *)(unaff_RBP + -0x75) = fVar24;
    *(float *)(unaff_RBP + -0x79) = fVar15;
    fVar19 = fVar19 * fVar18;
    *(float *)(unaff_RBP + -0x71) = fVar19;
    fVar18 = fVar24 * fVar24 + fVar15 * fVar15 + fVar19 * fVar19;
    if ((((fVar18 <= 0.98010004) || (1.0201 <= fVar18)) ||
        (fVar18 = fVar20 * fVar20 + fVar23 * fVar23 + fVar21 * fVar21, fVar18 <= 0.98010004)) ||
       (((1.0201 <= fVar18 ||
         (fVar18 = local_var_20 * local_var_20 + fVar22 * fVar22 +
                   fStack0000000000000028 * fStack0000000000000028, fVar18 <= 0.98010004)) ||
        (1.0201 <= fVar18)))) {
      uVar14 = 0;
      *(uint64_t *)(unaff_RBP + -0x79) = 0x3f800000;
      *(uint64_t *)(unaff_RBP + -0x71) = 0;
      *(int32_t *)(unaff_RBP + -0x59) = 0;
      *(int32_t *)(unaff_RBP + -0x55) = 0;
      *(int32_t *)(unaff_RBP + -0x51) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x4d) = 0;
      *(int32_t *)(unaff_RBP + -0x69) = 0;
      *(int32_t *)(unaff_RBP + -0x65) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x61) = 0;
      *(int32_t *)(unaff_RBP + -0x5d) = 0;
    }
    DataStructure_f5bc0(unaff_RBP + -0x79,uVar14,auVar17._0_8_,fVar16,local_var_20);
    pfVar8 = (float *)RenderingSystem_LightSystem(unaff_RBX + 0x70,&local_buffer_00000020);
    fVar16 = *pfVar8;
    *(float *)(unaff_RBP + -0x79) = *(float *)(unaff_RBP + -0x79) * fVar16;
    fVar18 = pfVar8[1];
    *(float *)(unaff_RBP + -0x75) = *(float *)(unaff_RBP + -0x75) * fVar16;
    *(float *)(unaff_RBP + -0x71) = *(float *)(unaff_RBP + -0x71) * fVar16;
    *(float *)(unaff_RBP + -0x69) = *(float *)(unaff_RBP + -0x69) * fVar18;
    *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x65) * fVar18;
    fVar16 = pfVar8[2];
    *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) * fVar18;
    *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) * fVar16;
    fVar18 = *(float *)(unaff_RBP + -0x51) * fVar16;
    *(float *)(unaff_RBP + -0x51) = fVar18;
    *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x55) * fVar16;
    NetworkProtocol_Transmitter(fVar18,unaff_RBP + -0x79);
    bVar12 = true;
  }
  uVar9 = 0;
  uVar11 = uVar9;
  if (*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_f09d0(*(uint64_t *)(uVar9 + *(int64_t *)(unaff_RBX + 0x1c0)));
      uVar9 = uVar9 + 8;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  return bVar12;
}
int8_t DataStructure_f0a12(int32_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint in_EAX;
  float *pfVar8;
  int64_t in_RCX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t in_R11;
  int8_t unaff_R14B;
  uint64_t unaff_R15;
  int32_t uVar12;
  int32_t uVar13;
  float fVar14;
  float fVar15;
  int8_t auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_var_20;
  float fStackX_24;
  float fStack0000000000000028;
  int32_t local_buffer_2c;
  *(uint64_t *)(in_R11 + 0x18) = unaff_R15;
  if ((in_EAX >> 0x10 & 1) != 0) {
    uVar12 = RenderingSystem_a56a0(param_1,in_RCX + 0xa0,0);
    uVar4 = *(uint64_t *)(unaff_RBX + 0x88);
    uVar5 = *(uint64_t *)(unaff_RBX + 0x70);
    uVar6 = *(uint64_t *)(unaff_RBX + 0x78);
    *(uint64_t *)(unaff_RBP + -0x69) = *(uint64_t *)(unaff_RBX + 0x80);
    *(uint64_t *)(unaff_RBP + -0x61) = uVar4;
    uVar4 = *(uint64_t *)(unaff_RBX + 0xa0);
    uVar7 = *(uint64_t *)(unaff_RBX + 0xa8);
    *(uint64_t *)(unaff_RBP + -0x79) = uVar5;
    *(uint64_t *)(unaff_RBP + -0x71) = uVar6;
    uVar13 = *(int32_t *)(unaff_RBX + 0x90);
    uVar1 = *(int32_t *)(unaff_RBX + 0x94);
    uVar2 = *(int32_t *)(unaff_RBX + 0x98);
    uVar3 = *(int32_t *)(unaff_RBX + 0x9c);
    *(uint64_t *)(unaff_RBP + -0x49) = uVar4;
    *(uint64_t *)(unaff_RBP + -0x41) = uVar7;
    *(int32_t *)(unaff_RBP + -0x41) = uVar12;
    *(int32_t *)(unaff_RBP + -0x59) = uVar13;
    *(int32_t *)(unaff_RBP + -0x55) = uVar1;
    *(int32_t *)(unaff_RBP + -0x51) = uVar2;
    *(int32_t *)(unaff_RBP + -0x4d) = uVar3;
    NetworkProtocol_Transmitter(uVar12,unaff_RBP + -0x79);
    in_EAX = *(uint *)(unaff_RBX + 0x2ac);
    unaff_R14B = 1;
  }
  if ((int)in_EAX < 0) {
    uVar4 = *(uint64_t *)(unaff_RBX + 0x88);
    fVar15 = *(float *)(unaff_RBX + 0x70);
    fVar17 = *(float *)(unaff_RBX + 0x74);
    fVar18 = *(float *)(unaff_RBX + 0x78);
    uVar13 = *(int32_t *)(unaff_RBX + 0x7c);
    *(uint64_t *)(unaff_RBP + -0x69) = *(uint64_t *)(unaff_RBX + 0x80);
    *(uint64_t *)(unaff_RBP + -0x61) = uVar4;
    uVar1 = *(int32_t *)(unaff_RBX + 0xa0);
    uVar2 = *(int32_t *)(unaff_RBX + 0xa4);
    uVar3 = *(int32_t *)(unaff_RBX + 0xa8);
    uVar12 = *(int32_t *)(unaff_RBX + 0xac);
    *(int32_t *)(unaff_RBP + -0x49) = uVar1;
    *(int32_t *)(unaff_RBP + -0x45) = uVar2;
    *(int32_t *)(unaff_RBP + -0x41) = uVar3;
    *(int32_t *)(unaff_RBP + -0x3d) = uVar12;
    *(float *)(unaff_RBP + -0x79) = fVar15;
    *(float *)(unaff_RBP + -0x75) = fVar17;
    *(float *)(unaff_RBP + -0x71) = fVar18;
    *(int32_t *)(unaff_RBP + -0x6d) = uVar13;
    RenderingSystem_a5440(uVar1,&local_buffer_00000020,unaff_RBX + 0xa0,0);
    fVar14 = fStackX_24 * fStackX_24 + local_var_20 * local_var_20 +
             fStack0000000000000028 * fStack0000000000000028;
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar19 = auVar16._0_4_;
    fVar14 = fVar19 * 0.5 * (3.0 - fVar14 * fVar19 * fVar19);
    local_var_20 = local_var_20 * fVar14;
    fVar21 = fStackX_24 * fVar14;
    fStack0000000000000028 = fStack0000000000000028 * fVar14;
    *(float *)(unaff_RBP + -0x59) = local_var_20;
    *(float *)(unaff_RBP + -0x55) = fVar21;
    *(float *)(unaff_RBP + -0x51) = fStack0000000000000028;
    *(int32_t *)(unaff_RBP + -0x4d) = local_buffer_2c;
    fVar19 = fVar21 * fVar18 - fStack0000000000000028 * fVar17;
    fVar20 = fVar17 * local_var_20 - fVar15 * fVar21;
    fVar22 = fStack0000000000000028 * fVar15 - local_var_20 * fVar18;
    fVar15 = fVar22 * fVar22 + fVar19 * fVar19 + fVar20 * fVar20;
    auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar17 = auVar16._0_4_;
    fVar15 = fVar17 * 0.5 * (3.0 - fVar15 * fVar17 * fVar17);
    fVar22 = fVar22 * fVar15;
    fVar20 = fVar20 * fVar15;
    fVar19 = fVar19 * fVar15;
    fVar14 = fVar22 * fStack0000000000000028 - fVar20 * fVar21;
    *(float *)(unaff_RBP + -0x69) = fVar19;
    *(float *)(unaff_RBP + -0x65) = fVar22;
    *(float *)(unaff_RBP + -0x61) = fVar20;
    fVar23 = fVar20 * local_var_20 - fVar19 * fStack0000000000000028;
    fVar18 = fVar19 * fVar21 - fVar22 * local_var_20;
    fVar15 = fVar23 * fVar23 + fVar14 * fVar14 + fVar18 * fVar18;
    auVar16 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar17 = auVar16._0_4_;
    fVar15 = fVar15 * fVar17 * fVar17;
    fVar17 = fVar17 * 0.5 * (3.0 - fVar15);
    uVar13 = 0x3f7ae7d6;
    fVar23 = fVar23 * fVar17;
    fVar14 = fVar14 * fVar17;
    *(float *)(unaff_RBP + -0x75) = fVar23;
    *(float *)(unaff_RBP + -0x79) = fVar14;
    fVar18 = fVar18 * fVar17;
    *(float *)(unaff_RBP + -0x71) = fVar18;
    fVar17 = fVar23 * fVar23 + fVar14 * fVar14 + fVar18 * fVar18;
    if ((((fVar17 <= 0.98010004) || (1.0201 <= fVar17)) ||
        (fVar17 = fVar19 * fVar19 + fVar22 * fVar22 + fVar20 * fVar20, fVar17 <= 0.98010004)) ||
       (((1.0201 <= fVar17 ||
         (fVar17 = local_var_20 * local_var_20 + fVar21 * fVar21 +
                   fStack0000000000000028 * fStack0000000000000028, fVar17 <= 0.98010004)) ||
        (1.0201 <= fVar17)))) {
      uVar13 = 0;
      *(uint64_t *)(unaff_RBP + -0x79) = 0x3f800000;
      *(uint64_t *)(unaff_RBP + -0x71) = 0;
      *(int32_t *)(unaff_RBP + -0x59) = 0;
      *(int32_t *)(unaff_RBP + -0x55) = 0;
      *(int32_t *)(unaff_RBP + -0x51) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x4d) = 0;
      *(int32_t *)(unaff_RBP + -0x69) = 0;
      *(int32_t *)(unaff_RBP + -0x65) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x61) = 0;
      *(int32_t *)(unaff_RBP + -0x5d) = 0;
    }
    DataStructure_f5bc0(unaff_RBP + -0x79,uVar13,auVar16._0_8_,fVar15,local_var_20);
    pfVar8 = (float *)RenderingSystem_LightSystem(unaff_RBX + 0x70,&local_buffer_00000020);
    fVar15 = *pfVar8;
    *(float *)(unaff_RBP + -0x79) = *(float *)(unaff_RBP + -0x79) * fVar15;
    fVar17 = pfVar8[1];
    *(float *)(unaff_RBP + -0x75) = *(float *)(unaff_RBP + -0x75) * fVar15;
    *(float *)(unaff_RBP + -0x71) = *(float *)(unaff_RBP + -0x71) * fVar15;
    *(float *)(unaff_RBP + -0x69) = *(float *)(unaff_RBP + -0x69) * fVar17;
    *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x65) * fVar17;
    fVar15 = pfVar8[2];
    *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) * fVar17;
    *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) * fVar15;
    fVar17 = *(float *)(unaff_RBP + -0x51) * fVar15;
    *(float *)(unaff_RBP + -0x51) = fVar17;
    *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x55) * fVar15;
    NetworkProtocol_Transmitter(fVar17,unaff_RBP + -0x79);
    unaff_R14B = 1;
  }
  uVar9 = 0;
  uVar11 = uVar9;
  if (*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_f09d0(*(uint64_t *)(uVar9 + *(int64_t *)(unaff_RBX + 0x1c0)));
      uVar9 = uVar9 + 8;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  return unaff_R14B;
}
uint64_t DataStructure_f0a8a(uint64_t param_1)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  float *pfVar5;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  int32_t uVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_var_20;
  float fStackX_24;
  float fStack0000000000000028;
  int32_t local_buffer_2c;
  fVar11 = *(float *)(unaff_RBX + 0x70);
  fVar13 = *(float *)(unaff_RBX + 0x74);
  fVar14 = *(float *)(unaff_RBX + 0x78);
  uVar9 = *(int32_t *)(unaff_RBX + 0x7c);
  *(int *)(unaff_RBP + -0x69) = (int)param_1;
  *(int *)(unaff_RBP + -0x65) = (int)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x61) = in_XMM0_Dc;
  *(int32_t *)(unaff_RBP + -0x5d) = in_XMM0_Dd;
  uVar1 = *(int32_t *)(unaff_RBX + 0xa0);
  uVar2 = *(int32_t *)(unaff_RBX + 0xa4);
  uVar3 = *(int32_t *)(unaff_RBX + 0xa8);
  uVar4 = *(int32_t *)(unaff_RBX + 0xac);
  *(int32_t *)(unaff_RBP + -0x49) = uVar1;
  *(int32_t *)(unaff_RBP + -0x45) = uVar2;
  *(int32_t *)(unaff_RBP + -0x41) = uVar3;
  *(int32_t *)(unaff_RBP + -0x3d) = uVar4;
  *(float *)(unaff_RBP + -0x79) = fVar11;
  *(float *)(unaff_RBP + -0x75) = fVar13;
  *(float *)(unaff_RBP + -0x71) = fVar14;
  *(int32_t *)(unaff_RBP + -0x6d) = uVar9;
  RenderingSystem_a5440(uVar1,&local_buffer_00000020);
  fVar10 = fStackX_24 * fStackX_24 + local_var_20 * local_var_20 +
           fStack0000000000000028 * fStack0000000000000028;
  auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar15 = auVar12._0_4_;
  fVar10 = fVar15 * 0.5 * (3.0 - fVar10 * fVar15 * fVar15);
  local_var_20 = local_var_20 * fVar10;
  fVar17 = fStackX_24 * fVar10;
  fStack0000000000000028 = fStack0000000000000028 * fVar10;
  *(float *)(unaff_RBP + -0x59) = local_var_20;
  *(float *)(unaff_RBP + -0x55) = fVar17;
  *(float *)(unaff_RBP + -0x51) = fStack0000000000000028;
  *(int32_t *)(unaff_RBP + -0x4d) = local_buffer_2c;
  fVar15 = fVar17 * fVar14 - fStack0000000000000028 * fVar13;
  fVar16 = fVar13 * local_var_20 - fVar11 * fVar17;
  fVar18 = fStack0000000000000028 * fVar11 - local_var_20 * fVar14;
  fVar11 = fVar18 * fVar18 + fVar15 * fVar15 + fVar16 * fVar16;
  auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar13 = auVar12._0_4_;
  fVar11 = fVar13 * 0.5 * (3.0 - fVar11 * fVar13 * fVar13);
  fVar18 = fVar18 * fVar11;
  fVar16 = fVar16 * fVar11;
  fVar15 = fVar15 * fVar11;
  fVar10 = fVar18 * fStack0000000000000028 - fVar16 * fVar17;
  *(float *)(unaff_RBP + -0x69) = fVar15;
  *(float *)(unaff_RBP + -0x65) = fVar18;
  *(float *)(unaff_RBP + -0x61) = fVar16;
  fVar19 = fVar16 * local_var_20 - fVar15 * fStack0000000000000028;
  fVar14 = fVar15 * fVar17 - fVar18 * local_var_20;
  fVar11 = fVar19 * fVar19 + fVar10 * fVar10 + fVar14 * fVar14;
  auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar13 = auVar12._0_4_;
  fVar11 = fVar11 * fVar13 * fVar13;
  fVar13 = fVar13 * 0.5 * (3.0 - fVar11);
  uVar9 = 0x3f7ae7d6;
  fVar19 = fVar19 * fVar13;
  fVar10 = fVar10 * fVar13;
  *(float *)(unaff_RBP + -0x75) = fVar19;
  *(float *)(unaff_RBP + -0x79) = fVar10;
  fVar14 = fVar14 * fVar13;
  *(float *)(unaff_RBP + -0x71) = fVar14;
  fVar13 = fVar19 * fVar19 + fVar10 * fVar10 + fVar14 * fVar14;
  if ((((fVar13 <= 0.98010004) || (1.0201 <= fVar13)) ||
      (fVar13 = fVar15 * fVar15 + fVar18 * fVar18 + fVar16 * fVar16, fVar13 <= 0.98010004)) ||
     (((1.0201 <= fVar13 ||
       (fVar13 = local_var_20 * local_var_20 + fVar17 * fVar17 +
                 fStack0000000000000028 * fStack0000000000000028, fVar13 <= 0.98010004)) ||
      (1.0201 <= fVar13)))) {
    uVar9 = 0;
    *(uint64_t *)(unaff_RBP + -0x79) = 0x3f800000;
    *(uint64_t *)(unaff_RBP + -0x71) = 0;
    *(int32_t *)(unaff_RBP + -0x59) = 0;
    *(int32_t *)(unaff_RBP + -0x55) = 0;
    *(int32_t *)(unaff_RBP + -0x51) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x4d) = 0;
    *(int32_t *)(unaff_RBP + -0x69) = 0;
    *(int32_t *)(unaff_RBP + -0x65) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x61) = 0;
    *(int32_t *)(unaff_RBP + -0x5d) = 0;
  }
  DataStructure_f5bc0(unaff_RBP + -0x79,uVar9,auVar12._0_8_,fVar11,local_var_20);
  pfVar5 = (float *)RenderingSystem_LightSystem(unaff_RBX + 0x70,&local_buffer_00000020);
  fVar11 = *pfVar5;
  *(float *)(unaff_RBP + -0x79) = *(float *)(unaff_RBP + -0x79) * fVar11;
  fVar13 = pfVar5[1];
  *(float *)(unaff_RBP + -0x75) = *(float *)(unaff_RBP + -0x75) * fVar11;
  *(float *)(unaff_RBP + -0x71) = *(float *)(unaff_RBP + -0x71) * fVar11;
  *(float *)(unaff_RBP + -0x69) = *(float *)(unaff_RBP + -0x69) * fVar13;
  *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x65) * fVar13;
  fVar11 = pfVar5[2];
  *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) * fVar13;
  *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) * fVar11;
  fVar13 = *(float *)(unaff_RBP + -0x51) * fVar11;
  *(float *)(unaff_RBP + -0x51) = fVar13;
  *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x55) * fVar11;
  NetworkProtocol_Transmitter(fVar13,unaff_RBP + -0x79);
  uVar6 = 0;
  uVar8 = uVar6;
  if (*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_f09d0(*(uint64_t *)(uVar6 + *(int64_t *)(unaff_RBX + 0x1c0)));
      uVar6 = uVar6 + 8;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  return 1;
}
uint64_t DataStructure_f0d27(uint64_t param_1,float param_2)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  float fVar5;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar6;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  int8_t astack_special_x_20 [8];
  if ((((1.0201 <= unaff_XMM13_Da) ||
       (fVar6 = unaff_XMM8_Da * unaff_XMM8_Da + unaff_XMM12_Da * unaff_XMM12_Da +
                unaff_XMM9_Da * unaff_XMM9_Da, fVar6 <= param_2)) || (1.0201 <= fVar6)) ||
     ((fVar6 = unaff_XMM7_Da * unaff_XMM7_Da + unaff_XMM11_Da * unaff_XMM11_Da +
               unaff_XMM10_Da * unaff_XMM10_Da, fVar6 <= param_2 || (1.0201 <= fVar6)))) {
    *(uint64_t *)(unaff_RBP + -0x79) = 0x3f800000;
    *(uint64_t *)(unaff_RBP + -0x71) = 0;
    *(int32_t *)(unaff_RBP + -0x59) = 0;
    *(int32_t *)(unaff_RBP + -0x55) = 0;
    *(int32_t *)(unaff_RBP + -0x51) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x4d) = 0;
    *(int32_t *)(unaff_RBP + -0x69) = 0;
    *(int32_t *)(unaff_RBP + -0x65) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x61) = 0;
    *(int32_t *)(unaff_RBP + -0x5d) = 0;
  }
  DataStructure_f5bc0(unaff_RBP + -0x79);
  pfVar1 = (float *)RenderingSystem_LightSystem(unaff_RBX + 0x70,astack_special_x_20);
  fVar6 = *pfVar1;
  *(float *)(unaff_RBP + -0x79) = *(float *)(unaff_RBP + -0x79) * fVar6;
  fVar5 = pfVar1[1];
  *(float *)(unaff_RBP + -0x75) = *(float *)(unaff_RBP + -0x75) * fVar6;
  *(float *)(unaff_RBP + -0x71) = *(float *)(unaff_RBP + -0x71) * fVar6;
  *(float *)(unaff_RBP + -0x69) = *(float *)(unaff_RBP + -0x69) * fVar5;
  *(float *)(unaff_RBP + -0x65) = *(float *)(unaff_RBP + -0x65) * fVar5;
  fVar6 = pfVar1[2];
  *(float *)(unaff_RBP + -0x61) = *(float *)(unaff_RBP + -0x61) * fVar5;
  *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x59) * fVar6;
  fVar5 = *(float *)(unaff_RBP + -0x51) * fVar6;
  *(float *)(unaff_RBP + -0x51) = fVar5;
  *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x55) * fVar6;
  NetworkProtocol_Transmitter(fVar5,unaff_RBP + -0x79);
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_f09d0(*(uint64_t *)(uVar2 + *(int64_t *)(unaff_RBX + 0x1c0)));
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  return 1;
}
int8_t DataStructure_f0e8a(void)
{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  int8_t unaff_R14B;
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3 != 0) {
    do {
      DataStructure_f09d0(*(uint64_t *)(uVar1 + *(int64_t *)(unaff_RBX + 0x1c0)));
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  }
  return unaff_R14B;
}
int8_t DataStructure_f0eab(void)
{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  int8_t unaff_R14B;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    DataStructure_f09d0(*(uint64_t *)(uVar1 + *(int64_t *)(unaff_RBX + 0x1c0)));
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  return unaff_R14B;
}
int8_t DataStructure_f0eff(void)
{
  return 0;
}