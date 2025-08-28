#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part053.c - 2 个函数
// 函数: void DataStructure_b7387(int64_t *param_1,float param_2)
void DataStructure_b7387(int64_t *param_1,float param_2)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  uint64_t uVar13;
  int64_t in_RAX;
  uint64_t *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int64_t lVar18;
  uint64_t *puVar19;
  int64_t in_RDX;
  int64_t lVar20;
  int64_t unaff_RBX;
  uint64_t uVar21;
  int iVar22;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar23;
  uint64_t *puVar24;
  int64_t in_R10;
  int64_t lVar25;
  int64_t in_R11;
  int64_t lVar26;
  uint64_t unaff_R12;
  uint64_t uVar27;
  uint64_t *puVar28;
  uint64_t uVar29;
  int64_t *unaff_R14;
  uint64_t unaff_R15;
  int64_t lVar30;
  uint64_t uVar31;
  float in_XMM0_Da;
  int32_t uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  int32_t unaff_XMM6_Da;
  float fVar44;
  int32_t unaff_XMM6_Db;
  float fVar45;
  int32_t unaff_XMM6_Dc;
  float fVar46;
  int32_t unaff_XMM6_Dd;
  float fVar47;
  int32_t unaff_XMM8_Da;
  float fVar48;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar49;
  int32_t unaff_XMM11_Db;
  float fVar50;
  int32_t unaff_XMM11_Dc;
  float fVar51;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  float fStack0000000000000034;
  int32_t local_buffer_44;
  float fStack000000000000004c;
  float fStack0000000000000054;
  float fStack0000000000000064;
  float fStack000000000000006c;
  float fStack0000000000000074;
  float fStack000000000000007c;
  float fStack0000000000000084;
  float fStack000000000000008c;
  float fStack0000000000000094;
  float fStack000000000000009c;
  float local_var_198;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  lVar30 = *param_1;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R15;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x98) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x94) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x90) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x8c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0xa8) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0xa4) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0xa0) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x9c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0xb8) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0xb4) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0xb0) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0xac) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -200) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0xc4) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0xc0) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0xbc) = unaff_XMM13_Dd;
  *(int32_t *)(in_RAX + -0xd8) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xd4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xd0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xcc) = unaff_XMM14_Dd;
  *(int32_t *)(in_RAX + -0xe8) = unaff_XMM15_Da;
  *(int32_t *)(in_RAX + -0xe4) = unaff_XMM15_Db;
  *(int32_t *)(in_RAX + -0xe0) = unaff_XMM15_Dc;
  *(int32_t *)(in_RAX + -0xdc) = unaff_XMM15_Dd;
  in_XMM0_Da = in_XMM0_Da * param_2;
  uVar31 = (in_RDX - unaff_RBX) / 0x70;
  iVar22 = (int)uVar31;
  uVar32 = SystemFunction_0001802b6b90(in_R10 + 0xb20,*(float *)(lVar30 + 0x3044) * 0.041666668);
  if (*(char *)((int64_t)param_1 + 0xa1) == '\0') {
    fVar46 = *(float *)(in_R10 + 0xfa4);
    fVar51 = *(float *)(in_R10 + 0xfa8);
    fVar44 = *(float *)(in_R10 + 4000);
    fVar49 = fVar46 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x16) * fVar44 +
             fVar51 * *(float *)(param_1 + 0x1a);
    fVar50 = fVar46 * *(float *)((int64_t)param_1 + 0xc4) +
             *(float *)((int64_t)param_1 + 0xb4) * fVar44 +
             fVar51 * *(float *)((int64_t)param_1 + 0xd4);
    fVar51 = fVar46 * *(float *)(param_1 + 0x19) + *(float *)(param_1 + 0x17) * fVar44 +
             fVar51 * *(float *)(param_1 + 0x1b);
    fVar44 = *(float *)(in_R10 + 0xf90);
    fVar45 = *(float *)(in_R10 + 0xf94);
    fVar46 = *(float *)(in_R10 + 0xf98);
    local_buffer_44 = *(int32_t *)(in_R10 + 0xf9c);
    fStack000000000000004c = 0.0;
    fStack0000000000000054 = 0.0;
    fStack0000000000000074 = fVar50;
  }
  else {
    fVar39 = *(float *)((int64_t)param_1 + 0xdc);
    fVar49 = *(float *)(in_R10 + 4000);
    fVar50 = *(float *)(in_R10 + 0xfa4);
    fVar51 = *(float *)(in_R10 + 0xfa8);
    local_buffer_44 = *(int32_t *)(in_R10 + 0xfac);
    fVar2 = *(float *)(in_R10 + 0xf94);
    fVar40 = *(float *)(in_R10 + 0xf90);
    fVar3 = *(float *)(in_R10 + 0xf98);
    fVar44 = *(float *)((int64_t)param_1 + 0xb4) * fVar2 + *(float *)(param_1 + 0x16) * fVar40 +
             *(float *)(param_1 + 0x17) * fVar3;
    fVar45 = *(float *)((int64_t)param_1 + 0xc4) * fVar2 + *(float *)(param_1 + 0x18) * fVar40 +
             *(float *)(param_1 + 0x19) * fVar3;
    fVar46 = *(float *)((int64_t)param_1 + 0xd4) * fVar2 + *(float *)(param_1 + 0x1a) * fVar40 +
             *(float *)(param_1 + 0x1b) * fVar3;
    fStack0000000000000054 = fVar39 * fVar2 + fVar39 * fVar40 + fVar39 * fVar3;
    fStack0000000000000074 = 0.0;
    fStack000000000000004c = fVar45;
  }
  pfVar12 = *(float **)(lVar30 + 0x81f0);
  fVar2 = pfVar12[3];
  fVar40 = ABS(*(float *)((int64_t)param_1 + 0xe4) + *(float *)(param_1 + 0x1c)) * 8.0 +
           (float)system_error_code * 8e-05;
  uVar15 = (uint)fVar40;
  uVar16 = uVar15 & 0x800000ff;
  if ((int)uVar16 < 0) {
    uVar16 = (uVar16 - 1 | 0xffffff00) + 1;
  }
  uVar17 = uVar16 + 1 & 0x800000ff;
  if ((int)uVar17 < 0) {
    uVar17 = (uVar17 - 1 | 0xffffff00) + 1;
  }
  uVar21 = 0;
  fVar3 = pfVar12[2];
  lVar30 = (int64_t)iVar22;
  fVar40 = ((*(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar17 * 4) -
            *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar16 * 4)) * (fVar40 - (float)(int)uVar15)
           + *(float *)(&processed_var_5296_ptr + (int64_t)(int)uVar16 * 4)) * *pfVar12 + 1.0;
  fStack0000000000000034 = fVar2 * pfVar12[1] * fVar40;
  fStack0000000000000064 = fVar51;
  fStack000000000000006c = fVar51;
  fStack000000000000007c = fStack0000000000000074;
  fStack0000000000000084 = fStack000000000000004c;
  fStack000000000000008c = fStack000000000000004c;
  fStack0000000000000094 = fVar46;
  fStack000000000000009c = fVar46;
  if (0 < iVar22) {
    lVar23 = lVar30 * 0x70;
    uVar27 = uVar21;
    uVar29 = uVar21;
    do {
      fVar42 = fStack0000000000000034;
      lVar26 = *unaff_R14;
      *(int32_t *)(uVar21 + 0x5c + lVar26) = uVar32;
      lVar25 = param_1[9];
      fVar34 = fVar2 * fVar3 * fVar40;
      fVar33 = (float)SystemFunction_0001802b6b90(lVar25 + 0xa68,*(int32_t *)(uVar21 + 0x24 + lVar26));
      fVar39 = *(float *)(uVar21 + 0xc + lVar26);
      fVar38 = *(float *)(uVar21 + 0x1c + lVar26);
      fVar48 = fVar42 * fVar33 * *(float *)(uVar21 + 0x40 + lVar26) + fVar49 + fVar44;
      fVar33 = fVar34 * fVar33 * *(float *)(uVar21 + 0x40 + lVar26) + fVar50 + fVar45;
      fVar42 = fVar46 + fVar51;
      fVar34 = (float)SystemFunction_0001802b6b90(lVar25 + 0x340);
      fVar34 = fVar34 * *(float *)(uVar21 + 0x48 + lVar26);
      if (1.0 <= fVar34) {
        fVar34 = 1.0;
      }
      fVar35 = (float)SystemFunction_0001802b6b90(lVar25 + 0x3f8);
      fVar35 = fVar35 * *(float *)(lVar25 + 0x3f4);
      lVar20 = *(int64_t *)(lVar25 + 0x100);
      fVar4 = *(float *)(uVar21 + lVar26);
      fVar5 = *(float *)(uVar21 + 4 + lVar26);
      fVar6 = *(float *)(uVar21 + 8 + lVar26);
      fVar35 = fVar35 * fVar35;
      fVar35 = fVar35 * fVar35;
      fVar41 = fVar34 * fVar34 * fVar34 * fVar34;
      fVar34 = *(float *)(uVar21 + 0x10 + lVar26);
      fVar47 = 1.0 - fVar41 * fVar41;
      fVar41 = *(float *)(uVar21 + 0x14 + lVar26);
      fVar7 = *(float *)(uVar21 + 0x18 + lVar26);
      fVar43 = fVar6;
      fVar37 = fVar5;
      fVar8 = fVar4;
      if (lVar20 != 0) {
        fVar8 = *(float *)(lVar25 + 0xcc);
        fVar36 = (float)SystemFunction_0001802b6b90(lVar25 + 0x118);
        fVar36 = fVar36 * *(float *)(uVar21 + 0x4c + lVar26);
        fVar42 = 1.0 - fVar8;
        iVar22 = *(int *)(lVar20 + 0xc0);
        iVar10 = *(int *)(lVar20 + 0xbc);
        iVar11 = *(int *)(lVar20 + 0xb8);
        lVar18 = (int64_t)
                 (((((iVar22 + (int)((float)iVar22 *
                                    ((fVar6 - *(float *)(param_1 + 0x1d)) *
                                     *(float *)(lVar25 + 0xe0) + *(float *)(lVar25 + 0xf0))) %
                               iVar22) % iVar22) * iVar10 +
                   (iVar10 + (int)((float)iVar10 *
                                  ((fVar5 - *(float *)((int64_t)param_1 + 0xe4)) *
                                   *(float *)(lVar25 + 0xdc) + *(float *)(lVar25 + 0xec))) % iVar10)
                   % iVar10) * iVar11 +
                  (iVar11 + (int)((float)iVar11 *
                                 ((fVar4 - *(float *)(param_1 + 0x1c)) * *(float *)(lVar25 + 0xd8) +
                                 *(float *)(lVar25 + 0xe8))) % iVar11) % iVar11) * 3);
        lVar25 = *(int64_t *)(lVar20 + 0xb0);
        fVar43 = fVar36 * *(float *)(lVar25 + 8 + lVar18 * 4);
        fVar37 = fVar36 * *(float *)(lVar25 + 4 + lVar18 * 4);
        fVar36 = fVar36 * *(float *)(lVar25 + lVar18 * 4);
        fVar33 = fVar37 * fVar42 + fVar33;
        fVar48 = fVar36 * fVar42 + fVar48;
        fVar42 = fVar43 * fVar42 + fVar46 + fVar51;
        fVar43 = ((fVar6 - fVar43 * local_var_198 * fVar47) - fVar6) * fVar8 + fVar6;
        fVar37 = ((fVar5 - fVar37 * local_var_198 * fVar47) - fVar5) * fVar8 + fVar5;
        fVar8 = ((fVar4 - fVar36 * local_var_198 * fVar47) - fVar4) * fVar8 + fVar4;
      }
      *(float *)(uVar21 + 0x10 + lVar26) = fVar8;
      *(float *)(uVar21 + 0x14 + lVar26) = fVar37;
      *(float *)(uVar21 + 0x18 + lVar26) = fVar43;
      *(float *)(uVar21 + lVar26) = fVar47 * (fVar4 - fVar34) + fVar4 + fVar48 * in_XMM0_Da;
      *(float *)(uVar21 + 4 + lVar26) = fVar47 * (fVar5 - fVar41) + fVar5 + fVar33 * in_XMM0_Da;
      *(float *)(uVar21 + 8 + lVar26) = fVar47 * (fVar6 - fVar7) + fVar6 + fVar42 * in_XMM0_Da;
      fVar42 = *(float *)(uVar21 + 0xc + lVar26);
      *(float *)(uVar21 + 0x1c + lVar26) = fVar42;
      *(float *)(uVar21 + 0xc + lVar26) = (1.0 - fVar35 * fVar35) * (fVar39 - fVar38) + fVar42;
      lVar25 = param_1[9];
      fVar38 = (float)SystemFunction_0001802b6b90(lVar25 + 0x618,*(int32_t *)(uVar21 + 0x24 + lVar26));
      fVar39 = *(float *)(uVar21 + 0x28 + lVar26);
      if (*(int *)(lVar25 + 0x6c) == 0) {
        fVar38 = fVar38 * fVar39;
      }
      else {
        fVar38 = fVar38 + fVar39;
      }
      *(float *)(uVar21 + 0x2c + lVar26) = fVar38;
      fVar39 = local_var_198 / *(float *)(uVar21 + 0x20 + lVar26) +
               *(float *)(uVar21 + 0x24 + lVar26);
      *(float *)(uVar21 + 0x24 + lVar26) = fVar39;
      if (1.0 < fVar39) {
        sVar9 = *(short *)(uVar21 + 0x30 + lVar26);
        if (sVar9 != -1) {
          piVar1 = (int *)(param_1[0x26] + (int64_t)sVar9 * 0xc);
          *piVar1 = *piVar1 + -1;
        }
        uVar31 = (uint64_t)((int)uVar31 - 1);
        lVar30 = lVar30 + -1;
        lVar23 = lVar23 + -0x70;
        if (param_1[0x1e] != 0) {
          DataStructure_b0ad0(param_1[0x1e],(int64_t)(int)uVar27 * 0x70 + *unaff_R14);
          lVar26 = param_1[0x1e];
          lVar20 = *(int64_t *)(lVar26 + 0x38) - *(int64_t *)(lVar26 + 0x30);
          lVar25 = lVar20 >> 0x3f;
          if (lVar20 / 0x88 + lVar25 != lVar25) {
            DataStructure_b09d0(lVar26,*(int32_t *)(uVar21 + 0x58 + *unaff_R14));
          }
        }
        lVar26 = *unaff_R14;
        *(int32_t *)(lVar26 + uVar21) = *(int32_t *)(lVar26 + lVar23);
        *(int32_t *)(lVar26 + 4 + uVar21) = *(int32_t *)(lVar26 + 4 + lVar23);
        *(int32_t *)(lVar26 + 8 + uVar21) = *(int32_t *)(lVar26 + 8 + lVar23);
        *(int32_t *)(lVar26 + 0xc + uVar21) = *(int32_t *)(lVar26 + 0xc + lVar23);
        *(int32_t *)(lVar26 + 0x10 + uVar21) = *(int32_t *)(lVar26 + 0x10 + lVar23);
        *(int32_t *)(lVar26 + 0x14 + uVar21) = *(int32_t *)(lVar26 + 0x14 + lVar23);
        *(int32_t *)(lVar26 + 0x18 + uVar21) = *(int32_t *)(lVar26 + 0x18 + lVar23);
        *(int32_t *)(lVar26 + 0x1c + uVar21) = *(int32_t *)(lVar26 + 0x1c + lVar23);
        *(int32_t *)(lVar26 + 0x20 + uVar21) = *(int32_t *)(lVar26 + 0x20 + lVar23);
        *(int32_t *)(lVar26 + 0x24 + uVar21) = *(int32_t *)(lVar26 + 0x24 + lVar23);
        *(int32_t *)(lVar26 + 0x28 + uVar21) = *(int32_t *)(lVar26 + 0x28 + lVar23);
        *(int32_t *)(lVar26 + 0x2c + uVar21) = *(int32_t *)(lVar26 + 0x2c + lVar23);
        *(int16_t *)(lVar26 + 0x30 + uVar21) = *(int16_t *)(lVar26 + 0x30 + lVar23);
        *(int16_t *)(lVar26 + 0x32 + uVar21) = *(int16_t *)(lVar26 + 0x32 + lVar23);
        *(int32_t *)(lVar26 + 0x34 + uVar21) = *(int32_t *)(lVar26 + 0x34 + lVar23);
        *(int32_t *)(lVar26 + 0x38 + uVar21) = *(int32_t *)(lVar26 + 0x38 + lVar23);
        *(int32_t *)(lVar26 + 0x3c + uVar21) = *(int32_t *)(lVar26 + 0x3c + lVar23);
        *(int32_t *)(lVar26 + 0x40 + uVar21) = *(int32_t *)(lVar26 + 0x40 + lVar23);
        *(int32_t *)(lVar26 + 0x44 + uVar21) = *(int32_t *)(lVar26 + 0x44 + lVar23);
        *(int32_t *)(lVar26 + 0x48 + uVar21) = *(int32_t *)(lVar26 + 0x48 + lVar23);
        *(int32_t *)(lVar26 + 0x4c + uVar21) = *(int32_t *)(lVar26 + 0x4c + lVar23);
        *(int16_t *)(lVar26 + 0x50 + uVar21) = *(int16_t *)(lVar26 + 0x50 + lVar23);
        *(int16_t *)(lVar26 + 0x52 + uVar21) = *(int16_t *)(lVar26 + 0x52 + lVar23);
        *(int8_t *)(lVar26 + 0x54 + uVar21) = *(int8_t *)(lVar26 + 0x54 + lVar23);
        *(int8_t *)(lVar26 + 0x55 + uVar21) = *(int8_t *)(lVar26 + 0x55 + lVar23);
        *(int8_t *)(lVar26 + 0x56 + uVar21) = *(int8_t *)(lVar26 + 0x56 + lVar23);
        *(int8_t *)(lVar26 + 0x57 + uVar21) = *(int8_t *)(lVar26 + 0x57 + lVar23);
        *(int32_t *)(lVar26 + 0x58 + uVar21) = *(int32_t *)(lVar26 + 0x58 + lVar23);
        *(int32_t *)(lVar26 + 0x5c + uVar21) = *(int32_t *)(lVar26 + 0x5c + lVar23);
        *(int32_t *)(lVar26 + 0x60 + uVar21) = *(int32_t *)(lVar26 + 0x60 + lVar23);
        *(int32_t *)(lVar26 + 100 + uVar21) = *(int32_t *)(lVar26 + 100 + lVar23);
        *(int32_t *)(lVar26 + 0x68 + uVar21) = *(int32_t *)(lVar26 + 0x68 + lVar23);
        *(int32_t *)(lVar26 + 0x6c + uVar21) = *(int32_t *)(lVar26 + 0x6c + lVar23);
      }
      else {
        uVar27 = (uint64_t)((int)uVar27 + 1);
        uVar29 = uVar29 + 1;
        uVar21 = uVar21 + 0x70;
      }
      iVar22 = (int)uVar31;
    } while ((int64_t)uVar29 < lVar30);
    in_R11 = unaff_R14[1];
    unaff_RBX = *unaff_R14;
  }
  uVar21 = (uint64_t)iVar22;
  uVar31 = (in_R11 - unaff_RBX) / 0x70;
  if (uVar21 <= uVar31) {
    unaff_R14[1] = uVar21 * 0x70 + unaff_RBX;
    return;
  }
  uVar21 = uVar21 - uVar31;
  puVar24 = (uint64_t *)unaff_R14[1];
  if (uVar21 <= (uint64_t)((unaff_R14[2] - (int64_t)puVar24) / 0x70)) {
    if (uVar21 != 0) {
// WARNING: Subroutine does not return
      memset(puVar24,0,0x70);
    }
    unaff_R14[1] = (int64_t)puVar24;
    return;
  }
  puVar19 = (uint64_t *)*unaff_R14;
  lVar30 = ((int64_t)puVar24 - (int64_t)puVar19) / 0x70;
  uVar31 = lVar30 * 2;
  if (lVar30 == 0) {
    uVar31 = 1;
  }
  if (uVar31 < lVar30 + uVar21) {
    uVar31 = lVar30 + uVar21;
  }
  if (uVar31 == 0) {
    puVar14 = (uint64_t *)0x0;
    puVar28 = puVar14;
  }
  else {
    puVar14 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar31 * 0x70,(char)unaff_R14[3]);
    puVar19 = (uint64_t *)*unaff_R14;
    puVar24 = (uint64_t *)unaff_R14[1];
    puVar28 = puVar14;
  }
  for (; puVar19 != puVar24; puVar19 = puVar19 + 0xe) {
    uVar13 = puVar19[1];
    *puVar14 = *puVar19;
    puVar14[1] = uVar13;
    uVar13 = puVar19[3];
    puVar14[2] = puVar19[2];
    puVar14[3] = uVar13;
    uVar13 = puVar19[5];
    puVar14[4] = puVar19[4];
    puVar14[5] = uVar13;
    uVar13 = puVar19[7];
    puVar14[6] = puVar19[6];
    puVar14[7] = uVar13;
    uVar13 = puVar19[9];
    puVar14[8] = puVar19[8];
    puVar14[9] = uVar13;
    uVar13 = puVar19[0xb];
    puVar14[10] = puVar19[10];
    puVar14[0xb] = uVar13;
    uVar13 = puVar19[0xd];
    puVar14[0xc] = puVar19[0xc];
    puVar14[0xd] = uVar13;
    puVar14 = puVar14 + 0xe;
  }
  if (uVar21 != 0) {
// WARNING: Subroutine does not return
    memset(puVar14,0,0x70);
  }
  if (*unaff_R14 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_R14 = (int64_t)puVar28;
  unaff_R14[2] = (int64_t)(puVar28 + uVar31 * 0xe);
  unaff_R14[1] = (int64_t)puVar14;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_b7677(void)
void DataStructure_b7677(void)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int unaff_EBP;
  int64_t unaff_RSI;
  int64_t lVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint unaff_R12D;
  uint64_t *puVar21;
  uint64_t uVar22;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int32_t in_XMM3_Da;
  float fVar29;
  float fVar30;
  float in_XMM5_Da;
  float fVar31;
  float unaff_XMM6_Da;
  float fVar32;
  float unaff_XMM8_Da;
  float fVar33;
  float fVar34;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float local_var_48;
  float local_var_60;
  float local_var_70;
  float local_var_80;
  float local_var_90;
  int32_t local_var_190;
  float local_var_198;
  uVar16 = (uint64_t)unaff_R12D;
  uVar22 = (uint64_t)unaff_R12D;
  lVar17 = unaff_R15 * 0x70;
  do {
    lVar20 = *unaff_R14;
    *(int32_t *)(uVar16 + 0x5c + lVar20) = in_XMM3_Da;
    lVar19 = *(int64_t *)(unaff_RSI + 0x48);
    fVar23 = (float)SystemFunction_0001802b6b90(lVar19 + 0xa68,*(int32_t *)(uVar16 + 0x24 + lVar20));
    fVar28 = *(float *)(uVar16 + 0xc + lVar20);
    fVar27 = *(float *)(uVar16 + 0x1c + lVar20);
    fVar33 = unaff_XMM8_Da * fVar23 * *(float *)(uVar16 + 0x40 + lVar20) + unaff_XMM11_Da +
             unaff_XMM6_Da;
    fVar34 = in_XMM5_Da * fVar23 * *(float *)(uVar16 + 0x40 + lVar20) + unaff_XMM12_Da +
             unaff_XMM13_Da;
    fVar30 = unaff_XMM14_Da + unaff_XMM10_Da;
    fVar23 = (float)SystemFunction_0001802b6b90(lVar19 + 0x340);
    fVar23 = fVar23 * *(float *)(uVar16 + 0x48 + lVar20);
    if (unaff_XMM15_Da <= fVar23) {
      fVar23 = unaff_XMM15_Da;
    }
    fVar24 = (float)SystemFunction_0001802b6b90(lVar19 + 0x3f8);
    fVar24 = fVar24 * *(float *)(lVar19 + 0x3f4);
    lVar15 = *(int64_t *)(lVar19 + 0x100);
    fVar2 = *(float *)(uVar16 + lVar20);
    fVar3 = *(float *)(uVar16 + 4 + lVar20);
    fVar4 = *(float *)(uVar16 + 8 + lVar20);
    fVar24 = fVar24 * fVar24;
    fVar24 = fVar24 * fVar24;
    fVar29 = fVar23 * fVar23 * fVar23 * fVar23;
    fVar23 = *(float *)(uVar16 + 0x10 + lVar20);
    fVar32 = unaff_XMM15_Da - fVar29 * fVar29;
    fVar29 = *(float *)(uVar16 + 0x14 + lVar20);
    fVar5 = *(float *)(uVar16 + 0x18 + lVar20);
    fVar31 = fVar4;
    fVar26 = fVar3;
    fVar6 = fVar2;
    if (lVar15 != 0) {
      fVar6 = *(float *)(lVar19 + 0xcc);
      fVar25 = (float)SystemFunction_0001802b6b90(lVar19 + 0x118);
      fVar25 = fVar25 * *(float *)(uVar16 + 0x4c + lVar20);
      fVar30 = unaff_XMM15_Da - fVar6;
      iVar8 = *(int *)(lVar15 + 0xc0);
      iVar9 = *(int *)(lVar15 + 0xbc);
      iVar10 = *(int *)(lVar15 + 0xb8);
      lVar13 = (int64_t)
               (((((iVar8 + (int)((float)iVar8 *
                                 ((fVar4 - *(float *)(unaff_RSI + 0xe8)) * *(float *)(lVar19 + 0xe0)
                                 + *(float *)(lVar19 + 0xf0))) % iVar8) % iVar8) * iVar9 +
                 (iVar9 + (int)((float)iVar9 *
                               ((fVar3 - *(float *)(unaff_RSI + 0xe4)) * *(float *)(lVar19 + 0xdc) +
                               *(float *)(lVar19 + 0xec))) % iVar9) % iVar9) * iVar10 +
                (iVar10 + (int)((float)iVar10 *
                               ((fVar2 - *(float *)(unaff_RSI + 0xe0)) * *(float *)(lVar19 + 0xd8) +
                               *(float *)(lVar19 + 0xe8))) % iVar10) % iVar10) * 3);
      lVar19 = *(int64_t *)(lVar15 + 0xb0);
      fVar31 = fVar25 * *(float *)(lVar19 + 8 + lVar13 * 4);
      fVar26 = fVar25 * *(float *)(lVar19 + 4 + lVar13 * 4);
      fVar25 = fVar25 * *(float *)(lVar19 + lVar13 * 4);
      fVar34 = fVar26 * fVar30 + fVar34;
      fVar33 = fVar25 * fVar30 + fVar33;
      fVar30 = fVar31 * fVar30 + unaff_XMM14_Da + unaff_XMM10_Da;
      fVar31 = ((fVar4 - fVar31 * local_var_198 * fVar32) - fVar4) * fVar6 + fVar4;
      fVar26 = ((fVar3 - fVar26 * local_var_198 * fVar32) - fVar3) * fVar6 + fVar3;
      unaff_XMM6_Da = local_var_48;
      fVar6 = ((fVar2 - fVar25 * local_var_198 * fVar32) - fVar2) * fVar6 + fVar2;
    }
    *(float *)(uVar16 + 0x10 + lVar20) = fVar6;
    *(float *)(uVar16 + 0x14 + lVar20) = fVar26;
    *(float *)(uVar16 + 0x18 + lVar20) = fVar31;
    *(float *)(uVar16 + lVar20) = fVar32 * (fVar2 - fVar23) + fVar2 + fVar33 * fStackX_20;
    *(float *)(uVar16 + 4 + lVar20) = fVar32 * (fVar3 - fVar29) + fVar3 + fVar34 * fStackX_20;
    *(float *)(uVar16 + 8 + lVar20) = fVar32 * (fVar4 - fVar5) + fVar4 + fVar30 * fStackX_20;
    fVar23 = *(float *)(uVar16 + 0xc + lVar20);
    *(float *)(uVar16 + 0x1c + lVar20) = fVar23;
    *(float *)(uVar16 + 0xc + lVar20) =
         (unaff_XMM15_Da - fVar24 * fVar24) * (fVar28 - fVar27) + fVar23;
    lVar19 = *(int64_t *)(unaff_RSI + 0x48);
    fVar27 = (float)SystemFunction_0001802b6b90(lVar19 + 0x618,*(int32_t *)(uVar16 + 0x24 + lVar20));
    fVar28 = *(float *)(uVar16 + 0x28 + lVar20);
    if (*(int *)(lVar19 + 0x6c) == 0) {
      fVar27 = fVar27 * fVar28;
    }
    else {
      fVar27 = fVar27 + fVar28;
    }
    *(float *)(uVar16 + 0x2c + lVar20) = fVar27;
    fVar28 = local_var_198 / *(float *)(uVar16 + 0x20 + lVar20) +
             *(float *)(uVar16 + 0x24 + lVar20);
    *(float *)(uVar16 + 0x24 + lVar20) = fVar28;
    if (unaff_XMM15_Da < fVar28) {
      sVar7 = *(short *)(uVar16 + 0x30 + lVar20);
      if (sVar7 != -1) {
        piVar1 = (int *)(*(int64_t *)(unaff_RSI + 0x130) + (int64_t)sVar7 * 0xc);
        *piVar1 = *piVar1 + -1;
      }
      unaff_EBP = unaff_EBP + -1;
      unaff_R15 = unaff_R15 + -1;
      lVar17 = lVar17 + -0x70;
      if (*(int64_t *)(unaff_RSI + 0xf0) != 0) {
        DataStructure_b0ad0(*(int64_t *)(unaff_RSI + 0xf0),(int64_t)(int)unaff_R12D * 0x70 + *unaff_R14)
        ;
        lVar20 = *(int64_t *)(unaff_RSI + 0xf0);
        lVar15 = *(int64_t *)(lVar20 + 0x38) - *(int64_t *)(lVar20 + 0x30);
        lVar19 = lVar15 >> 0x3f;
        if (lVar15 / 0x88 + lVar19 != lVar19) {
          DataStructure_b09d0(lVar20,*(int32_t *)(uVar16 + 0x58 + *unaff_R14));
        }
      }
      lVar20 = *unaff_R14;
      *(int32_t *)(lVar20 + uVar16) = *(int32_t *)(lVar20 + lVar17);
      *(int32_t *)(lVar20 + 4 + uVar16) = *(int32_t *)(lVar20 + 4 + lVar17);
      *(int32_t *)(lVar20 + 8 + uVar16) = *(int32_t *)(lVar20 + 8 + lVar17);
      *(int32_t *)(lVar20 + 0xc + uVar16) = *(int32_t *)(lVar20 + 0xc + lVar17);
      *(int32_t *)(lVar20 + 0x10 + uVar16) = *(int32_t *)(lVar20 + 0x10 + lVar17);
      *(int32_t *)(lVar20 + 0x14 + uVar16) = *(int32_t *)(lVar20 + 0x14 + lVar17);
      *(int32_t *)(lVar20 + 0x18 + uVar16) = *(int32_t *)(lVar20 + 0x18 + lVar17);
      *(int32_t *)(lVar20 + 0x1c + uVar16) = *(int32_t *)(lVar20 + 0x1c + lVar17);
      *(int32_t *)(lVar20 + 0x20 + uVar16) = *(int32_t *)(lVar20 + 0x20 + lVar17);
      *(int32_t *)(lVar20 + 0x24 + uVar16) = *(int32_t *)(lVar20 + 0x24 + lVar17);
      *(int32_t *)(lVar20 + 0x28 + uVar16) = *(int32_t *)(lVar20 + 0x28 + lVar17);
      *(int32_t *)(lVar20 + 0x2c + uVar16) = *(int32_t *)(lVar20 + 0x2c + lVar17);
      *(int16_t *)(lVar20 + 0x30 + uVar16) = *(int16_t *)(lVar20 + 0x30 + lVar17);
      *(int16_t *)(lVar20 + 0x32 + uVar16) = *(int16_t *)(lVar20 + 0x32 + lVar17);
      *(int32_t *)(lVar20 + 0x34 + uVar16) = *(int32_t *)(lVar20 + 0x34 + lVar17);
      *(int32_t *)(lVar20 + 0x38 + uVar16) = *(int32_t *)(lVar20 + 0x38 + lVar17);
      *(int32_t *)(lVar20 + 0x3c + uVar16) = *(int32_t *)(lVar20 + 0x3c + lVar17);
      *(int32_t *)(lVar20 + 0x40 + uVar16) = *(int32_t *)(lVar20 + 0x40 + lVar17);
      *(int32_t *)(lVar20 + 0x44 + uVar16) = *(int32_t *)(lVar20 + 0x44 + lVar17);
      *(int32_t *)(lVar20 + 0x48 + uVar16) = *(int32_t *)(lVar20 + 0x48 + lVar17);
      *(int32_t *)(lVar20 + 0x4c + uVar16) = *(int32_t *)(lVar20 + 0x4c + lVar17);
      *(int16_t *)(lVar20 + 0x50 + uVar16) = *(int16_t *)(lVar20 + 0x50 + lVar17);
      *(int16_t *)(lVar20 + 0x52 + uVar16) = *(int16_t *)(lVar20 + 0x52 + lVar17);
      *(int8_t *)(lVar20 + 0x54 + uVar16) = *(int8_t *)(lVar20 + 0x54 + lVar17);
      *(int8_t *)(lVar20 + 0x55 + uVar16) = *(int8_t *)(lVar20 + 0x55 + lVar17);
      *(int8_t *)(lVar20 + 0x56 + uVar16) = *(int8_t *)(lVar20 + 0x56 + lVar17);
      *(int8_t *)(lVar20 + 0x57 + uVar16) = *(int8_t *)(lVar20 + 0x57 + lVar17);
      *(int32_t *)(lVar20 + 0x58 + uVar16) = *(int32_t *)(lVar20 + 0x58 + lVar17);
      *(int32_t *)(lVar20 + 0x5c + uVar16) = *(int32_t *)(lVar20 + 0x5c + lVar17);
      *(int32_t *)(lVar20 + 0x60 + uVar16) = *(int32_t *)(lVar20 + 0x60 + lVar17);
      *(int32_t *)(lVar20 + 100 + uVar16) = *(int32_t *)(lVar20 + 100 + lVar17);
      *(int32_t *)(lVar20 + 0x68 + uVar16) = *(int32_t *)(lVar20 + 0x68 + lVar17);
      *(int32_t *)(lVar20 + 0x6c + uVar16) = *(int32_t *)(lVar20 + 0x6c + lVar17);
    }
    else {
      unaff_R12D = unaff_R12D + 1;
      uVar22 = uVar22 + 1;
      uVar16 = uVar16 + 0x70;
    }
    in_XMM3_Da = local_var_190;
    in_XMM5_Da = fStack0000000000000030;
    unaff_XMM8_Da = fStack0000000000000034;
    unaff_XMM10_Da = local_var_60;
    unaff_XMM12_Da = local_var_70;
    unaff_XMM13_Da = local_var_80;
    unaff_XMM14_Da = local_var_90;
  } while ((int64_t)uVar22 < unaff_R15);
  uVar22 = (uint64_t)unaff_EBP;
  uVar16 = (unaff_R14[1] - *unaff_R14) / 0x70;
  if (uVar22 <= uVar16) {
    unaff_R14[1] = uVar22 * 0x70 + *unaff_R14;
    return;
  }
  uVar22 = uVar22 - uVar16;
  puVar18 = (uint64_t *)unaff_R14[1];
  if (uVar22 <= (uint64_t)((unaff_R14[2] - (int64_t)puVar18) / 0x70)) {
    if (uVar22 != 0) {
// WARNING: Subroutine does not return
      memset(puVar18,0,0x70);
    }
    unaff_R14[1] = (int64_t)puVar18;
    return;
  }
  puVar14 = (uint64_t *)*unaff_R14;
  lVar17 = ((int64_t)puVar18 - (int64_t)puVar14) / 0x70;
  uVar16 = lVar17 * 2;
  if (lVar17 == 0) {
    uVar16 = 1;
  }
  if (uVar16 < lVar17 + uVar22) {
    uVar16 = lVar17 + uVar22;
  }
  if (uVar16 == 0) {
    puVar12 = (uint64_t *)0x0;
    puVar21 = puVar12;
  }
  else {
    puVar12 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar16 * 0x70,(char)unaff_R14[3]);
    puVar14 = (uint64_t *)*unaff_R14;
    puVar18 = (uint64_t *)unaff_R14[1];
    puVar21 = puVar12;
  }
  for (; puVar14 != puVar18; puVar14 = puVar14 + 0xe) {
    uVar11 = puVar14[1];
    *puVar12 = *puVar14;
    puVar12[1] = uVar11;
    uVar11 = puVar14[3];
    puVar12[2] = puVar14[2];
    puVar12[3] = uVar11;
    uVar11 = puVar14[5];
    puVar12[4] = puVar14[4];
    puVar12[5] = uVar11;
    uVar11 = puVar14[7];
    puVar12[6] = puVar14[6];
    puVar12[7] = uVar11;
    uVar11 = puVar14[9];
    puVar12[8] = puVar14[8];
    puVar12[9] = uVar11;
    uVar11 = puVar14[0xb];
    puVar12[10] = puVar14[10];
    puVar12[0xb] = uVar11;
    uVar11 = puVar14[0xd];
    puVar12[0xc] = puVar14[0xc];
    puVar12[0xd] = uVar11;
    puVar12 = puVar12 + 0xe;
  }
  if (uVar22 != 0) {
// WARNING: Subroutine does not return
    memset(puVar12,0,0x70);
  }
  if (*unaff_R14 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_R14 = (int64_t)puVar21;
  unaff_R14[2] = (int64_t)(puVar21 + uVar16 * 0xe);
  unaff_R14[1] = (int64_t)puVar12;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address