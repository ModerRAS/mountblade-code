#include "TaleWorlds.Native.Split.h"
// 99_part_11_part005.c - 2 个函数
// 函数: void UtilitiesSystem_d9e70(int64_t param_1,int32_t *param_2,int32_t *param_3,char param_4)
void UtilitiesSystem_d9e70(int64_t param_1,int32_t *param_2,int32_t *param_3,char param_4)
{
  uint uVar1;
  bool bVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  int32_t uVar7;
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
  float fVar20;
  float fVar21;
  char acStackX_8 [8];
  float fStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  uint64_t local_var_168;
  uint64_t local_var_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  UtilitiesSystem_dee40(param_1,param_2,param_3,&fStack_e8,&fStack_110,&fStack_138,0);
  uVar1 = *(uint *)(param_1 + 0x1c4);
  fStack_150 = fStack_120;
  if ((uVar1 & 4) == 0) {
    fStack_150 = 0.0;
  }
  fStack_154 = fStack_124;
  if ((uVar1 & 2) == 0) {
    fStack_154 = 0.0;
  }
  fVar15 = 0.0;
  if ((uVar1 & 1) != 0) {
    fVar15 = fStack_128;
  }
  fVar16 = *(float *)(param_1 + 0x1d4);
  fStack_128 = fStack_128 - fVar15;
  fStack_124 = fStack_124 - fStack_154;
  fStack_120 = fStack_120 - fStack_150;
  fVar9 = fVar15 * fVar15 + fStack_154 * fStack_154 + fStack_150 * fStack_150;
  bVar2 = fVar9 <= fVar16 * fVar16;
  if (!bVar2) {
    fVar9 = 1.0 / SQRT(fVar9);
    fStack_154 = fVar9 * fStack_154 * fVar16;
    fStack_150 = fVar9 * fStack_150 * fVar16;
    fVar15 = fVar9 * fVar15 * fVar16;
  }
  fStack_154 = fStack_154 + fStack_124;
  fStack_150 = fStack_150 + fStack_120;
  fVar15 = fVar15 + fStack_128;
  fStack_158 = fVar15;
  fStack_118 = fStack_154;
  fStack_114 = fStack_150;
  fStack_f0 = fVar15;
  uVar7 = cosf(*(float *)(param_1 + 0x1d8) * 0.5);
  acStackX_8[0] = '\0';
  switch(uVar1 >> 3) {
  case 0:
  case 1:
  case 2:
  case 4:
    fStack_180 = fStack_12c;
    break;
  case 3:
    local_var_148 = 0;
    local_var_144 = 0;
    local_var_140 = 0x3f800000;
    UtilitiesSystem_e1f70(&fStack_178,&fStack_138,&local_var_148,uVar7,acStackX_8);
    fStack_134 = fStack_174;
    fStack_130 = fStack_170;
    fStack_138 = fStack_178;
    fStack_180 = fStack_16c;
    break;
  case 5:
    local_var_148 = 0;
    local_var_144 = 0x3f800000;
    local_var_140 = 0;
    UtilitiesSystem_e1f70(&fStack_178,&fStack_138,&local_var_148,uVar7,acStackX_8);
    fStack_134 = fStack_174;
    fStack_130 = fStack_170;
    fStack_138 = fStack_178;
    fStack_180 = fStack_16c;
    break;
  case 6:
    local_var_148 = 0x3f800000;
    local_var_144 = 0;
    local_var_140 = 0;
    UtilitiesSystem_e1f70(&fStack_178,&fStack_138,&local_var_148,uVar7,acStackX_8);
    fStack_134 = fStack_174;
    fStack_130 = fStack_170;
    fStack_138 = fStack_178;
    fStack_180 = fStack_16c;
    break;
  case 7:
    UtilitiesSystem_e2f90(&fStack_178,&fStack_138,uVar7,acStackX_8);
    fStack_134 = fStack_174;
    fStack_130 = fStack_170;
    fStack_138 = fStack_178;
    fStack_180 = fStack_16c;
    break;
  default:
    fStack_178 = 0.0;
    fStack_174 = 0.0;
    fStack_170 = 0.0;
    fStack_16c = 1.0;
    fStack_134 = fStack_174;
    fStack_130 = fStack_170;
    fStack_138 = fStack_178;
    fStack_180 = fStack_16c;
  }
  local_var_168 = CONCAT44(fStack_134,fStack_138);
  local_var_160 = CONCAT44(fStack_180,fStack_130);
  if ((bVar2) && (acStackX_8[0] == '\0')) {
    return;
  }
  if (param_4 == '\0') {
    fVar16 = *(float *)(param_1 + 0x10);
    fStack_178 = -fStack_138;
    fVar9 = *(float *)(param_1 + 0x1c);
    fVar8 = *(float *)(param_1 + 0x14);
    fVar10 = *(float *)(param_1 + 0x18);
    fVar18 = -(*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x20));
    fVar19 = fVar9 * fVar9 - 0.5;
    fVar13 = -(*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x24));
    fVar12 = -(*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x28));
    fVar11 = fVar8 * fVar13 + fVar16 * fVar18 + fVar10 * fVar12;
    fStack_158 = (fVar19 * fVar18 - (fVar8 * fVar12 - fVar10 * fVar13) * fVar9) + fVar16 * fVar11;
    fVar17 = -fStack_134;
    fStack_154 = (fVar19 * fVar13 - (fVar10 * fVar18 - fVar16 * fVar12) * fVar9) + fVar8 * fVar11;
    fVar14 = -fStack_130;
    local_var_168 = *(uint64_t *)(param_1 + 0x10) ^ 0x8000000080000000;
    local_var_160 = *(uint64_t *)(param_1 + 0x18) ^ 0x80000000;
    fStack_150 = (fVar19 * fVar12 - (fVar16 * fVar13 - fVar8 * fVar18) * fVar9) + fVar10 * fVar11;
    fStack_16c = fStack_180;
    fVar8 = (fStack_158 - fVar15) + (fStack_158 - fVar15);
    fVar16 = (fStack_154 - fStack_118) + (fStack_154 - fStack_118);
    fVar15 = fStack_180 * fStack_180 - 0.5;
    fVar10 = (fStack_150 - fStack_114) + (fStack_150 - fStack_114);
    fVar20 = fVar17 * fVar16 + fStack_178 * fVar8 + fVar14 * fVar10;
    fVar13 = (fVar17 * fVar10 - fVar14 * fVar16) * fStack_180 + fVar15 * fVar8;
    fVar9 = fVar20 * fStack_178;
    fVar12 = (fVar14 * fVar8 - fStack_178 * fVar10) * fStack_180 + fVar15 * fVar16;
    fVar11 = (fStack_178 * fVar16 - fVar17 * fVar8) * fStack_180 + fVar15 * fVar10;
    fStack_174 = fVar17;
    fStack_170 = fVar14;
    puVar5 = (uint64_t *)SystemCore_Initializer(&fStack_178,&local_var_148,&local_var_168);
    local_var_168 = *puVar5;
    local_var_160 = puVar5[1];
    fVar8 = fStack_104 * fStack_104 - 0.5;
    fVar19 = (fVar20 + fVar20) * fStack_178 + fVar13 + fVar13;
    fVar18 = (fVar20 + fVar20) * fVar17 + fVar12 + fVar12;
    fVar21 = (fVar20 + fVar20) * fVar14 + fVar11 + fVar11;
    fVar15 = fStack_10c * fVar18 + fStack_110 * fVar19 + fStack_108 * fVar21;
    fVar10 = fStack_100 +
             (fStack_10c * fVar21 - fStack_108 * fVar18) * fStack_104 + fVar8 * fVar19 +
             fStack_110 * fVar15;
    fVar16 = fStack_fc +
             (fStack_108 * fVar19 - fStack_110 * fVar21) * fStack_104 + fVar8 * fVar18 +
             fStack_10c * fVar15;
    fVar15 = fStack_f8 +
             (fStack_110 * fVar18 - fStack_10c * fVar19) * fStack_104 + fVar8 * fVar21 +
             fStack_108 * fVar15;
    fStack_158 = fVar9 + fVar13;
    fStack_154 = fVar20 * fVar17 + fVar12;
    fStack_150 = fVar20 * fVar14 + fVar11;
    puVar6 = (int32_t *)SystemCore_Initializer(&fStack_110,&fStack_178,&local_var_168);
    uVar7 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *param_2 = *puVar6;
    param_2[1] = uVar7;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = fVar10;
    param_2[5] = fVar16;
    param_2[6] = fVar15;
  }
  else {
    fStack_104 = *(float *)(param_1 + 0x38);
    fVar15 = *(float *)(param_1 + 0x2c);
    fVar16 = *(float *)(param_1 + 0x30);
    fVar9 = *(float *)(param_1 + 0x34);
    fVar10 = -(*(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x44));
    fVar18 = fStack_104 * fStack_104 - 0.5;
    fVar12 = -(*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c));
    fVar13 = -(*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40));
    fVar8 = fVar13 * fVar16 + fVar12 * fVar15 + fVar10 * fVar9;
    fStack_100 = (fVar18 * fVar12 - (fVar10 * fVar16 - fVar13 * fVar9) * fStack_104) +
                 fVar8 * fVar15;
    fStack_110 = -fVar15;
    fVar17 = fStack_100 + fStack_100;
    fStack_108 = -fVar9;
    fStack_10c = -fVar16;
    fVar11 = fStack_180 * fStack_180 - 0.5;
    fStack_f8 = (fVar18 * fVar10 - (fVar13 * fVar15 - fVar12 * fVar16) * fStack_104) + fVar8 * fVar9
    ;
    fStack_fc = (fVar18 * fVar13 - (fVar12 * fVar9 - fVar10 * fVar15) * fStack_104) + fVar8 * fVar16
    ;
    fVar9 = fStack_f8 + fStack_f8;
    fVar16 = fStack_fc + fStack_fc;
    fVar15 = fStack_134 * fVar16 + fStack_138 * fVar17 + fStack_130 * fVar9;
    fVar10 = (fStack_134 * fVar9 - fStack_130 * fVar16) * fStack_180 + fVar11 * fVar17 +
             fStack_138 * fVar15 + fStack_f0;
    fVar12 = (fStack_138 * fVar16 - fStack_134 * fVar17) * fStack_180 + fVar11 * fVar9 +
             fStack_130 * fVar15 + fStack_114;
    fVar9 = (fStack_130 * fVar17 - fStack_138 * fVar9) * fStack_180 + fVar11 * fVar16 +
            fStack_134 * fVar15 + fStack_118;
    puVar5 = (uint64_t *)SystemCore_Initializer(&local_var_168,&fStack_178,&fStack_110);
    local_var_168 = *puVar5;
    local_var_160 = puVar5[1];
    fVar11 = fVar10 + fVar10;
    fVar16 = fStack_dc * fStack_dc - 0.5;
    fVar8 = fVar9 + fVar9;
    fVar13 = fVar12 + fVar12;
    fVar15 = fStack_e4 * fVar8 + fStack_e8 * fVar11 + fStack_e0 * fVar13;
    fStack_158 = fVar10;
    fStack_154 = fVar9;
    fStack_150 = fVar12;
    puVar6 = (int32_t *)SystemCore_Initializer(&fStack_e8,&local_var_148,&local_var_168);
    uVar7 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *param_3 = *puVar6;
    param_3[1] = uVar7;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    param_3[4] = fStack_d8 +
                 (fStack_e4 * fVar13 - fStack_e0 * fVar8) * fStack_dc + fVar16 * fVar11 +
                 fStack_e8 * fVar15;
    param_3[5] = fStack_d4 +
                 (fStack_e0 * fVar11 - fStack_e8 * fVar13) * fStack_dc + fVar16 * fVar8 +
                 fStack_e4 * fVar15;
    param_3[6] = fStack_d0 +
                 (fStack_e8 * fVar8 - fStack_e4 * fVar11) * fStack_dc + fVar16 * fVar13 +
                 fStack_e0 * fVar15;
    param_2 = param_3;
  }
// WARNING: Subroutine does not return
  UtilitiesSystem_e1390(param_2);
}
// 函数: void UtilitiesSystem_d9ec3(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UtilitiesSystem_d9ec3(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  bool bVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t in_RAX;
  uint64_t *puVar5;
  int32_t *puVar6;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  char unaff_R12B;
  uint64_t unaff_R14;
  int32_t *unaff_R15;
  int32_t uVar7;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int64_t lStack0000000000000028;
  int8_t local_buffer_30;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  float local_buffer_70;
  float fStack0000000000000074;
  float local_buffer_78;
  int32_t local_var_110;
  int32_t local_var_118;
  int32_t local_var_130;
  int32_t local_var_138;
  int32_t local_var_150;
  int32_t local_var_158;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  lStack0000000000000028 = unaff_RBP + -0x70;
  local_buffer_30 = 0;
  UtilitiesSystem_dee40(param_1,param_2,param_3,param_4,unaff_RBP + -0x48);
  uVar1 = *(uint *)(unaff_RDI + 0x1c4);
  local_buffer_78 = *(float *)(unaff_RBP + -0x58);
  if ((uVar1 & 4) == 0) {
    local_buffer_78 = 0.0;
  }
  fStack0000000000000074 = *(float *)(unaff_RBP + -0x5c);
  if ((uVar1 & 2) == 0) {
    fStack0000000000000074 = 0.0;
  }
  fVar18 = 0.0;
  if ((uVar1 & 1) != 0) {
    fVar18 = *(float *)(unaff_RBP + -0x60);
  }
  fVar13 = *(float *)(unaff_RDI + 0x1d4);
  fVar15 = *(float *)(unaff_RBP + -0x60) - fVar18;
  fVar16 = *(float *)(unaff_RBP + -0x5c) - fStack0000000000000074;
  fVar17 = *(float *)(unaff_RBP + -0x58) - local_buffer_78;
  fVar9 = fVar18 * fVar18 + fStack0000000000000074 * fStack0000000000000074 +
          local_buffer_78 * local_buffer_78;
  bVar2 = fVar9 <= fVar13 * fVar13;
  if (!bVar2) {
    fVar9 = 1.0 / SQRT(fVar9);
    fStack0000000000000074 = fVar9 * fStack0000000000000074 * fVar13;
    local_buffer_78 = fVar9 * local_buffer_78 * fVar13;
    fVar18 = fVar9 * fVar18 * fVar13;
  }
  fStack0000000000000074 = fStack0000000000000074 + fVar16;
  local_buffer_78 = local_buffer_78 + fVar17;
  fVar18 = fVar18 + fVar15;
  *(float *)(unaff_RBP + -0x50) = fStack0000000000000074;
  fVar13 = *(float *)(unaff_RDI + 0x1d8);
  *(float *)(unaff_RBP + -0x28) = fVar18;
  *(float *)(unaff_RBP + -0x4c) = local_buffer_78;
  local_buffer_70 = fVar18;
  uVar7 = cosf(fVar13 * 0.5);
  *(int8_t *)(unaff_RBP + 0xd0) = 0;
  switch(uVar1 >> 3) {
  case 0:
  case 1:
  case 2:
  case 4:
    fStack0000000000000048 = *(float *)(unaff_RBP + -100);
    fVar13 = *(float *)(unaff_RBP + -0x6c);
    fStack0000000000000044 = *(float *)(unaff_RBP + -0x68);
    fVar9 = *(float *)(unaff_RBP + -0x70);
    break;
  case 3:
    *(uint64_t *)(unaff_RBP + -0x80) = 0;
    *(int32_t *)(unaff_RBP + -0x78) = 0x3f800000;
    UtilitiesSystem_e1f70(&local_buffer_00000050,unaff_RBP + -0x70,unaff_RBP + -0x80,uVar7,unaff_RBP + 0xd0);
    fVar13 = fStack0000000000000054;
    fStack0000000000000044 = fStack0000000000000058;
    fVar9 = fStack0000000000000050;
    fStack0000000000000048 = fStack000000000000005c;
    break;
  case 5:
    *(int32_t *)(unaff_RBP + -0x80) = 0;
    *(uint64_t *)(unaff_RBP + -0x7c) = 0x3f800000;
    UtilitiesSystem_e1f70(&local_buffer_00000050,unaff_RBP + -0x70,unaff_RBP + -0x80,uVar7,unaff_RBP + 0xd0);
    fVar13 = fStack0000000000000054;
    fStack0000000000000044 = fStack0000000000000058;
    fVar9 = fStack0000000000000050;
    fStack0000000000000048 = fStack000000000000005c;
    break;
  case 6:
    *(uint64_t *)(unaff_RBP + -0x80) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x78) = 0;
    UtilitiesSystem_e1f70(&local_buffer_00000050,unaff_RBP + -0x70,unaff_RBP + -0x80,uVar7,unaff_RBP + 0xd0);
    fVar13 = fStack0000000000000054;
    fStack0000000000000044 = fStack0000000000000058;
    fVar9 = fStack0000000000000050;
    fStack0000000000000048 = fStack000000000000005c;
    break;
  case 7:
    UtilitiesSystem_e2f90(&local_buffer_00000050,unaff_RBP + -0x70,uVar7,unaff_RBP + 0xd0);
    fVar13 = fStack0000000000000054;
    fStack0000000000000044 = fStack0000000000000058;
    fVar9 = fStack0000000000000050;
    fStack0000000000000048 = fStack000000000000005c;
    break;
  default:
    fStack0000000000000050 = 0.0;
    fStack0000000000000054 = 0.0;
    fStack0000000000000058 = 0.0;
    fStack000000000000005c = 1.0;
    fVar13 = fStack0000000000000054;
    fStack0000000000000044 = fStack0000000000000058;
    fVar9 = fStack0000000000000050;
    fStack0000000000000048 = fStack000000000000005c;
  }
  local_buffer_60 = CONCAT44(fVar13,fVar9);
  local_buffer_68 = CONCAT44(fStack0000000000000048,fStack0000000000000044);
  if ((bVar2) && (*(char *)(unaff_RBP + 0xd0) == '\0')) {
    return;
  }
  if (unaff_R12B == '\0') {
    fVar15 = *(float *)(unaff_RDI + 0x10);
    fStack0000000000000050 = -fVar9;
    fVar9 = *(float *)(unaff_RDI + 0x1c);
    fVar16 = *(float *)(unaff_RDI + 0x14);
    fVar17 = *(float *)(unaff_RDI + 0x18);
    fVar12 = -(*(float *)(unaff_RDI + 0x20) + *(float *)(unaff_RDI + 0x20));
    fVar14 = fVar9 * fVar9 - 0.5;
    fVar10 = -(*(float *)(unaff_RDI + 0x24) + *(float *)(unaff_RDI + 0x24));
    fVar11 = -(*(float *)(unaff_RDI + 0x28) + *(float *)(unaff_RDI + 0x28));
    fVar8 = fVar16 * fVar10 + fVar15 * fVar12 + fVar17 * fVar11;
    local_buffer_70 =
         (fVar14 * fVar12 - (fVar16 * fVar11 - fVar17 * fVar10) * fVar9) + fVar15 * fVar8;
    fVar13 = -fVar13;
    fStack0000000000000074 =
         (fVar14 * fVar10 - (fVar17 * fVar12 - fVar15 * fVar11) * fVar9) + fVar16 * fVar8;
    fStack0000000000000044 = -fStack0000000000000044;
    local_buffer_60 = *(uint64_t *)(unaff_RDI + 0x10) ^ 0x8000000080000000;
    local_buffer_68 = *(uint64_t *)(unaff_RDI + 0x18) ^ 0x80000000;
    local_buffer_78 =
         (fVar14 * fVar11 - (fVar15 * fVar10 - fVar16 * fVar12) * fVar9) + fVar17 * fVar8;
    fVar9 = fStack0000000000000074 - *(float *)(unaff_RBP + -0x50);
    fVar16 = local_buffer_78 - *(float *)(unaff_RBP + -0x4c);
    fStack000000000000005c = fStack0000000000000048;
    fVar15 = (local_buffer_70 - fVar18) + (local_buffer_70 - fVar18);
    fVar9 = fVar9 + fVar9;
    fVar18 = fStack0000000000000048 * fStack0000000000000048 - 0.5;
    fVar16 = fVar16 + fVar16;
    fVar25 = fVar13 * fVar9 + fStack0000000000000050 * fVar15 + fStack0000000000000044 * fVar16;
    fVar24 = (fVar13 * fVar16 - fStack0000000000000044 * fVar9) * fStack0000000000000048 +
             fVar18 * fVar15;
    fVar14 = fVar25 * fStack0000000000000050;
    fVar23 = (fStack0000000000000044 * fVar15 - fStack0000000000000050 * fVar16) *
             fStack0000000000000048 + fVar18 * fVar9;
    fVar10 = fVar25 * fStack0000000000000044;
    fVar22 = (fStack0000000000000050 * fVar9 - fVar13 * fVar15) * fStack0000000000000048 +
             fVar18 * fVar16;
    fStack0000000000000054 = fVar13;
    fStack0000000000000058 = fStack0000000000000044;
    puVar5 = (uint64_t *)SystemCore_Initializer(&local_buffer_00000050,unaff_RBP + -0x80,&local_buffer_00000060);
    fVar18 = *(float *)(unaff_RBP + -0x3c);
    local_buffer_60 = *puVar5;
    local_buffer_68 = puVar5[1];
    fVar20 = fVar18 * fVar18 - 0.5;
    fVar21 = (fVar25 + fVar25) * fStack0000000000000050 + fVar24 + fVar24;
    fVar19 = (fVar25 + fVar25) * fVar13 + fVar23 + fVar23;
    fVar26 = (fVar25 + fVar25) * fStack0000000000000044 + fVar22 + fVar22;
    fVar9 = *(float *)(unaff_RBP + -0x44);
    fVar15 = *(float *)(unaff_RBP + -0x40);
    fVar16 = *(float *)(unaff_RBP + -0x48);
    fVar12 = fVar9 * fVar19 + fVar16 * fVar21 + fVar15 * fVar26;
    fVar17 = *(float *)(unaff_RBP + -0x30);
    fVar8 = *(float *)(unaff_RBP + -0x34);
    fVar11 = *(float *)(unaff_RBP + -0x38);
    local_buffer_70 = fVar14 + fVar24;
    fStack0000000000000074 = fVar25 * fVar13 + fVar23;
    local_buffer_78 = fVar10 + fVar22;
    puVar6 = (int32_t *)SystemCore_Initializer(unaff_RBP + -0x48,&local_buffer_00000050,&local_buffer_00000060);
    uVar7 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *unaff_R15 = *puVar6;
    unaff_R15[1] = uVar7;
    unaff_R15[2] = uVar3;
    unaff_R15[3] = uVar4;
    unaff_R15[4] = fVar11 + (fVar9 * fVar26 - fVar15 * fVar19) * fVar18 + fVar20 * fVar21 +
                            fVar16 * fVar12;
    unaff_R15[5] = fVar8 + (fVar15 * fVar21 - fVar16 * fVar26) * fVar18 + fVar20 * fVar19 +
                           fVar9 * fVar12;
    unaff_R15[6] = fVar17 + (fVar16 * fVar19 - fVar9 * fVar21) * fVar18 + fVar20 * fVar26 +
                            fVar15 * fVar12;
  }
  else {
    fVar18 = *(float *)(unaff_RDI + 0x38);
    fVar15 = *(float *)(unaff_RDI + 0x2c);
    fVar16 = *(float *)(unaff_RDI + 0x30);
    fVar17 = *(float *)(unaff_RDI + 0x34);
    fVar8 = *(float *)(unaff_RDI + 0x3c);
    fVar11 = *(float *)(unaff_RDI + 0x40);
    fVar10 = -(*(float *)(unaff_RDI + 0x44) + *(float *)(unaff_RDI + 0x44));
    *(float *)(unaff_RBP + -0x3c) = fVar18;
    fVar22 = fVar18 * fVar18 - 0.5;
    fVar12 = -(fVar8 + fVar8);
    fVar14 = -(fVar11 + fVar11);
    fVar8 = fVar14 * fVar16 + fVar12 * fVar15 + fVar10 * fVar17;
    fVar20 = (fVar22 * fVar12 - (fVar10 * fVar16 - fVar14 * fVar17) * fVar18) + fVar8 * fVar15;
    *(float *)(unaff_RBP + -0x48) = -fVar15;
    *(float *)(unaff_RBP + -0x38) = fVar20;
    fVar20 = fVar20 + fVar20;
    *(float *)(unaff_RBP + -0x44) = -fVar16;
    *(float *)(unaff_RBP + -0x40) = -fVar17;
    fVar11 = fStack0000000000000048 * fStack0000000000000048 - 0.5;
    fVar23 = (fVar22 * fVar10 - (fVar14 * fVar15 - fVar12 * fVar16) * fVar18) + fVar8 * fVar17;
    fVar15 = (fVar22 * fVar14 - (fVar12 * fVar17 - fVar10 * fVar15) * fVar18) + fVar8 * fVar16;
    *(float *)(unaff_RBP + -0x30) = fVar23;
    fVar23 = fVar23 + fVar23;
    *(float *)(unaff_RBP + -0x34) = fVar15;
    fVar15 = fVar15 + fVar15;
    fVar18 = fVar13 * fVar15 + fVar9 * fVar20 + fStack0000000000000044 * fVar23;
    fVar22 = (fVar13 * fVar23 - fStack0000000000000044 * fVar15) * fStack0000000000000048 +
             fVar11 * fVar20 + fVar9 * fVar18 + *(float *)(unaff_RBP + -0x28);
    fVar24 = (fVar9 * fVar15 - fVar13 * fVar20) * fStack0000000000000048 + fVar11 * fVar23 +
             fStack0000000000000044 * fVar18 + *(float *)(unaff_RBP + -0x4c);
    fVar12 = (fStack0000000000000044 * fVar20 - fVar9 * fVar23) * fStack0000000000000048 +
             fVar11 * fVar15 + fVar13 * fVar18 + *(float *)(unaff_RBP + -0x50);
    puVar5 = (uint64_t *)SystemCore_Initializer(&local_buffer_00000060,&local_buffer_00000050,unaff_RBP + -0x48);
    fVar18 = *(float *)(unaff_RBP + -0x20);
    fVar13 = *(float *)(unaff_RBP + -0x14);
    fVar9 = *(float *)(unaff_RBP + -0x18);
    local_buffer_60 = *puVar5;
    local_buffer_68 = puVar5[1];
    fVar15 = *(float *)(unaff_RBP + -0x1c);
    fVar20 = fVar22 + fVar22;
    fVar10 = fVar13 * fVar13 - 0.5;
    fVar14 = fVar12 + fVar12;
    fVar23 = fVar24 + fVar24;
    fVar11 = fVar15 * fVar14 + fVar18 * fVar20 + fVar9 * fVar23;
    fVar16 = *(float *)(unaff_RBP + -8);
    fVar17 = *(float *)(unaff_RBP + -0xc);
    fVar8 = *(float *)(unaff_RBP + -0x10);
    local_buffer_70 = fVar22;
    fStack0000000000000074 = fVar12;
    local_buffer_78 = fVar24;
    puVar6 = (int32_t *)SystemCore_Initializer(unaff_RBP + -0x20,unaff_RBP + -0x80,&local_buffer_00000060);
    uVar7 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *unaff_RSI = *puVar6;
    unaff_RSI[1] = uVar7;
    unaff_RSI[2] = uVar3;
    unaff_RSI[3] = uVar4;
    unaff_RSI[4] = fVar8 + (fVar15 * fVar23 - fVar9 * fVar14) * fVar13 + fVar10 * fVar20 +
                           fVar18 * fVar11;
    unaff_RSI[5] = fVar17 + (fVar9 * fVar20 - fVar18 * fVar23) * fVar13 + fVar10 * fVar14 +
                            fVar15 * fVar11;
    unaff_RSI[6] = fVar16 + (fVar18 * fVar14 - fVar15 * fVar20) * fVar13 + fVar10 * fVar23 +
                            fVar9 * fVar11;
  }
// WARNING: Subroutine does not return
  UtilitiesSystem_e1390();
}