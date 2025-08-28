#include "TaleWorlds.Native.Split.h"

// 03_rendering_part033.c - 3 个函数

// 函数: void FUN_180285cf0(float *param_1,float *param_2,float *param_3)
void FUN_180285cf0(float *param_1,float *param_2,float *param_3)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar10 = param_2[6];
  fVar11 = param_2[7];
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar12 = param_2[8];
  fVar13 = param_2[9];
  fVar14 = param_2[10];
  fVar15 = param_2[0xb];
  fVar16 = param_2[0xc];
  fVar17 = param_2[0xd];
  fVar18 = param_2[0xe];
  fVar19 = param_2[0xf];
  *param_1 = fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12;
  param_1[1] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  param_1[2] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  param_1[3] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  fVar1 = param_3[5];
  fVar2 = param_3[4];
  fVar3 = param_3[6];
  param_1[4] = fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12;
  param_1[5] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  param_1[6] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  param_1[7] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  fVar1 = param_3[9];
  fVar2 = param_3[8];
  fVar3 = param_3[10];
  param_1[8] = fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12;
  param_1[9] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  param_1[10] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  param_1[0xb] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  fVar1 = param_3[0xd];
  fVar2 = param_3[0xc];
  fVar3 = param_3[0xe];
  param_1[0xc] = fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12 + fVar16;
  param_1[0xd] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar17;
  param_1[0xe] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar18;
  param_1[0xf] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar19;
  return;
}



uint64_t * FUN_180285df0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_9288_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



int32_t * FUN_180285e20(int32_t *param_1)

{
  *(void **)(param_1 + 6) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *(void **)(param_1 + 6) = &unknown_var_3432_ptr;
  *(int32_t **)(param_1 + 8) = param_1 + 0xc;
  param_1[10] = 0;
  *(int8_t *)(param_1 + 0xc) = 0;
  *(void **)(param_1 + 0x2c) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(void **)(param_1 + 0x2c) = &unknown_var_3432_ptr;
  *(int32_t **)(param_1 + 0x2e) = param_1 + 0x32;
  param_1[0x30] = 0;
  *(int8_t *)(param_1 + 0x32) = 0;
  *(void **)(param_1 + 0x52) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  *(void **)(param_1 + 0x52) = &unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  *(void **)(param_1 + 0x5a) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  *(void **)(param_1 + 0x5a) = &unknown_var_3456_ptr;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  *param_1 = 0x7f7fffff;
  *(uint64_t *)(param_1 + 1) = 0;
  *(uint64_t *)(param_1 + 3) = 0;
  param_1[5] = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180286010(longlong param_1,uint64_t param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int8_t auStack_188 [16];
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  double dStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [16];
  int8_t auStack_138 [16];
  double dStack_128;
  double dStack_120;
  double dStack_118;
  uint64_t uStack_110;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  
  dVar4 = (double)*(float *)(param_1 + 0x108);
  dVar7 = (double)*(float *)(param_1 + 0x104);
  dVar5 = (double)*(float *)(param_1 + 0x118);
  dVar2 = (double)*(float *)(param_1 + 0x114);
  dVar3 = (double)*(float *)(param_1 + 0x10c);
  dVar6 = (double)*(float *)(param_1 + 0x110);
  if (*(char *)(param_1 + 0x100) == '\0') {
    uStack_110 = 0x3ff0000000000000;
    dVar1 = 1.0 / (dVar4 - dVar7);
    auStack_188._8_8_ = 0;
    auStack_188._0_8_ = dVar1 + dVar1;
    dStack_160 = 1.0 / (dVar3 - dVar6);
    dStack_160 = dStack_160 + dStack_160;
    auStack_148 = ZEXT816(0);
    dStack_120 = (dVar6 + dVar3) / (dVar6 - dVar3);
    auStack_138._0_8_ = 1.0 / (dVar2 - dVar5);
    auStack_138._8_8_ = 0;
    dStack_118 = (double)auStack_138._0_8_ * dVar2;
    dStack_128 = (dVar7 + dVar4) / (dVar7 - dVar4);
  }
  else {
    uStack_110 = 0;
    auStack_148._0_8_ = 1.0 / (dVar4 - dVar7);
    auStack_188._0_8_ = (dVar2 + dVar2) * (double)auStack_148._0_8_;
    auStack_148._0_8_ = (dVar7 + dVar4) * (double)auStack_148._0_8_;
    auStack_188._8_8_ = 0;
    auStack_138._0_8_ = 1.0 / (dVar2 - dVar5);
    dStack_118 = dVar2 * dVar5 * (double)auStack_138._0_8_;
    auStack_138._0_8_ = (double)auStack_138._0_8_ * dVar5;
    dStack_128 = 0.0;
    dStack_120 = 0.0;
    dVar7 = 1.0 / (dVar3 - dVar6);
    auStack_138._8_8_ = 0xbff0000000000000;
    dStack_160 = (dVar2 + dVar2) * dVar7;
    dVar7 = (dVar6 + dVar3) * dVar7;
    auStack_148._8_8_ = dVar7;
    if ((param_3 != '\0') && (*(int *)(_DAT_180c8a9c8 + 0xa10) != 0)) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_b0 = 0xbff0000000000000;
      uStack_a8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      auStack_188._8_8_ = 0;
      auStack_148._8_4_ = SUB84(dVar7,0);
      auStack_148._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auStack_138._8_4_ = 0;
      auStack_138._0_8_ = -1.0 - (double)auStack_138._0_8_;
      auStack_138._12_4_ = 0xbff00000;
      dStack_128 = 0.0;
      dStack_120 = 0.0;
      dStack_118 = -dStack_118;
      uStack_110 = 0;
    }
  }
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  func_0x000180645570(param_2,auStack_188);
  return param_2;
}





// 函数: void FUN_180286300(float *param_1,uint param_2,float *param_3,uint64_t param_4,float param_5,
void FUN_180286300(float *param_1,uint param_2,float *param_3,uint64_t param_4,float param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uVar8;
  int8_t auVar7 [16];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar3 = *param_3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar4 = param_3[3];
  if (param_2 < 6) {
    if (param_6 == '\0') {
      switch(param_2) {
      case 0:
        fStack_38 = 0.0;
        fStack_34 = 1.0;
        fStack_30 = 0.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = -1.0;
        fStack_24 = 0.0;
        fStack_20 = 0.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0;
        uVar8 = 0x7f7fffffbf800000;
        break;
      case 1:
        fStack_38 = 0.0;
        fStack_34 = 1.0;
        fStack_30 = 0.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 1.0;
        fStack_24 = 0.0;
        fStack_20 = 0.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0;
        uVar8 = 0x7f7fffff3f800000;
        break;
      case 2:
        fStack_38 = 0.0;
        fStack_34 = 0.0;
        fStack_30 = -1.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 0.0;
        fStack_24 = -1.0;
        fStack_20 = 0.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0x3f800000;
        uVar8 = 0x7f7fffff00000000;
        break;
      case 3:
        fStack_38 = 0.0;
        fStack_34 = 0.0;
        fStack_30 = 1.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 0.0;
        fStack_24 = 1.0;
        fStack_20 = 0.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0x3f800000;
        uVar8 = 0x7f7fffff00000000;
        break;
      case 4:
        fStack_38 = 0.0;
        fStack_34 = 1.0;
        fStack_30 = 0.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 0.0;
        fStack_24 = 0.0;
        fStack_20 = -1.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0x3f800000;
        uVar8 = 0x7f7fffff00000000;
        break;
      case 5:
        fStack_38 = 0.0;
        fStack_34 = 1.0;
        fStack_30 = 0.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 0.0;
        fStack_24 = 0.0;
        fStack_20 = 1.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0xbf800000;
        uVar8 = 0x7f7fffff00000000;
      }
    }
    else {
      switch(param_2) {
      case 0:
        fStack_38 = 0.0;
        fStack_34 = 0.0;
        fStack_30 = 1.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = -1.0;
        fStack_24 = 0.0;
        fStack_20 = 0.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0xbf80000000000000;
        uVar8 = 0x7f7fffff00000000;
        break;
      case 1:
        fStack_38 = 0.0;
        fStack_34 = 0.0;
        fStack_30 = 1.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 1.0;
        fStack_24 = 0.0;
        fStack_20 = 0.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0x3f80000000000000;
        uVar8 = 0x7f7fffff00000000;
        break;
      case 2:
        fStack_38 = 0.0;
        fStack_34 = -1.0;
        fStack_30 = 0.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 0.0;
        fStack_24 = 0.0;
        fStack_20 = -1.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0x3f800000;
        uVar8 = 0x7f7fffff00000000;
        break;
      case 3:
        fStack_38 = 0.0;
        fStack_34 = 1.0;
        fStack_30 = 0.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 0.0;
        fStack_24 = 0.0;
        fStack_20 = 1.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0x3f800000;
        uVar8 = 0x7f7fffff00000000;
        break;
      case 4:
        fStack_38 = 0.0;
        fStack_34 = 0.0;
        fStack_30 = 1.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 0.0;
        fStack_24 = -1.0;
        fStack_20 = 0.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0x3f800000;
        uVar8 = 0x7f7fffff00000000;
        break;
      case 5:
        fStack_38 = 0.0;
        fStack_34 = 0.0;
        fStack_30 = 1.0;
        fStack_2c = 3.4028235e+38;
        fStack_28 = 0.0;
        fStack_24 = 1.0;
        fStack_20 = 0.0;
        fStack_1c = 3.4028235e+38;
        uVar6 = 0xbf800000;
        uVar8 = 0x7f7fffff00000000;
      }
    }
  }
  else {
    uVar6 = CONCAT44(uStack_44,uStack_48);
    uVar8 = CONCAT44(uStack_3c,uStack_40);
  }
  *(uint64_t *)(param_1 + 0x30) = uVar6;
  *(uint64_t *)(param_1 + 0x32) = uVar8;
  param_1[0x34] = fStack_38;
  param_1[0x35] = fStack_34;
  param_1[0x36] = fStack_30;
  param_1[0x37] = fStack_2c;
  param_1[0x38] = fStack_28;
  param_1[0x39] = fStack_24;
  param_1[0x3a] = fStack_20;
  param_1[0x3b] = fStack_1c;
  param_1[0x3c] = fVar3;
  param_1[0x3d] = fVar1;
  param_1[0x3e] = fVar2;
  param_1[0x3f] = fVar4;
  FUN_1802864f0();
  param_1[0x47] = 1.5707964;
  *(int8_t *)(param_1 + 0x40) = 1;
  param_1[0x46] = param_5;
  param_1[0x45] = 0.09;
  param_1[0x48] = 1.0;
  fVar3 = (float)tanf(0x3f490fdb);
  fVar3 = fVar3 * 0.09;
  param_1[0x42] = fVar3;
  param_1[0x41] = -fVar3;
  param_1[0x43] = fVar3 / 1.0;
  param_1[0x44] = -(fVar3 / 1.0);
  if (*(char *)(param_1 + 0x40) == '\0') {
    fVar3 = param_1[0x43];
    param_1[0x20] = fVar3 * param_1[0x34] + param_1[0x3c];
    param_1[0x21] = fVar3 * param_1[0x35] + param_1[0x3d];
    param_1[0x22] = fVar3 * param_1[0x36] + param_1[0x3e];
    param_1[0x23] = 3.4028235e+38;
    fVar3 = param_1[0x44];
    param_1[0x28] = fVar3 * param_1[0x34] + param_1[0x3c];
    param_1[0x29] = fVar3 * param_1[0x35] + param_1[0x3d];
    param_1[0x2a] = fVar3 * param_1[0x36] + param_1[0x3e];
    param_1[0x2b] = 3.4028235e+38;
    fVar3 = param_1[0x42];
    param_1[0x18] = fVar3 * param_1[0x30] + param_1[0x3c];
    param_1[0x19] = fVar3 * param_1[0x31] + param_1[0x3d];
    param_1[0x1a] = fVar3 * param_1[0x32] + param_1[0x3e];
    param_1[0x1b] = 3.4028235e+38;
    fVar3 = param_1[0x41];
    param_1[0x10] = fVar3 * param_1[0x30] + param_1[0x3c];
    param_1[0x11] = fVar3 * param_1[0x31] + param_1[0x3d];
    param_1[0x12] = fVar3 * param_1[0x32] + param_1[0x3e];
    param_1[0x13] = 3.4028235e+38;
    fVar3 = param_1[0x46];
    param_1[8] = param_1[0x3c] - fVar3 * param_1[0x38];
    param_1[9] = param_1[0x3d] - fVar3 * param_1[0x39];
    param_1[10] = param_1[0x3e] - fVar3 * param_1[0x3a];
    param_1[0xb] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    *param_1 = param_1[0x3c] - fVar3 * param_1[0x38];
    param_1[1] = param_1[0x3d] - fVar3 * param_1[0x39];
    param_1[2] = param_1[0x3e] - fVar3 * param_1[0x3a];
    param_1[3] = 3.4028235e+38;
    param_1[0x24] = -param_1[0x34];
    param_1[0x25] = -param_1[0x35];
    param_1[0x26] = -param_1[0x36];
    param_1[0x27] = 3.4028235e+38;
    *(uint64_t *)(param_1 + 0x2c) = *(uint64_t *)(param_1 + 0x34);
    *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x36);
    param_1[0x1c] = -param_1[0x30];
    param_1[0x1d] = -param_1[0x31];
    param_1[0x1e] = -param_1[0x32];
    param_1[0x1f] = 3.4028235e+38;
    *(uint64_t *)(param_1 + 0x14) = *(uint64_t *)(param_1 + 0x30);
    *(uint64_t *)(param_1 + 0x16) = *(uint64_t *)(param_1 + 0x32);
    *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_1 + 0x38);
    *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_1 + 0x3a);
    fVar2 = param_1[0x38];
    fVar1 = param_1[0x39];
    fVar3 = param_1[0x3a];
  }
  else {
    *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_1 + 0x3c);
    *(uint64_t *)(param_1 + 0x22) = *(uint64_t *)(param_1 + 0x3e);
    *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(param_1 + 0x3c);
    *(uint64_t *)(param_1 + 0x2a) = *(uint64_t *)(param_1 + 0x3e);
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_1 + 0x3c);
    *(uint64_t *)(param_1 + 0x1a) = *(uint64_t *)(param_1 + 0x3e);
    *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(param_1 + 0x3c);
    *(uint64_t *)(param_1 + 0x12) = *(uint64_t *)(param_1 + 0x3e);
    fVar3 = param_1[0x45];
    fVar1 = param_1[0x43];
    param_1[0x24] = -(fVar3 * param_1[0x34]) - fVar1 * param_1[0x38];
    param_1[0x25] = -(fVar3 * param_1[0x35]) - fVar1 * param_1[0x39];
    param_1[0x26] = -(fVar3 * param_1[0x36]) - fVar1 * param_1[0x3a];
    param_1[0x27] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    fVar1 = param_1[0x44];
    param_1[0x2c] = fVar1 * param_1[0x38] + fVar3 * param_1[0x34];
    param_1[0x2d] = fVar1 * param_1[0x39] + fVar3 * param_1[0x35];
    param_1[0x2e] = fVar1 * param_1[0x3a] + fVar3 * param_1[0x36];
    param_1[0x2f] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    fVar1 = param_1[0x42];
    param_1[0x1c] = -(fVar3 * param_1[0x30]) - fVar1 * param_1[0x38];
    param_1[0x1d] = -(fVar3 * param_1[0x31]) - fVar1 * param_1[0x39];
    param_1[0x1e] = -(fVar3 * param_1[0x32]) - fVar1 * param_1[0x3a];
    param_1[0x1f] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    fVar1 = param_1[0x41];
    param_1[0x14] = fVar1 * param_1[0x38] + fVar3 * param_1[0x30];
    param_1[0x15] = fVar3 * param_1[0x31] + fVar1 * param_1[0x39];
    param_1[0x16] = fVar1 * param_1[0x3a] + fVar3 * param_1[0x32];
    param_1[0x17] = 3.4028235e+38;
    fVar3 = param_1[0x25];
    fVar1 = param_1[0x24];
    fVar2 = param_1[0x26];
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar7._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x24] = fVar1 * fVar4;
    param_1[0x25] = fVar3 * fVar4;
    param_1[0x26] = fVar2 * fVar4;
    fVar3 = param_1[0x2d];
    fVar1 = param_1[0x2c];
    fVar2 = param_1[0x2e];
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar7._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x2c] = fVar1 * fVar4;
    param_1[0x2d] = fVar3 * fVar4;
    param_1[0x2e] = fVar2 * fVar4;
    fVar3 = param_1[0x1d];
    fVar1 = param_1[0x1c];
    fVar2 = param_1[0x1e];
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar7._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x1c] = fVar1 * fVar4;
    param_1[0x1d] = fVar3 * fVar4;
    param_1[0x1e] = fVar2 * fVar4;
    fVar3 = param_1[0x15];
    fVar1 = param_1[0x14];
    fVar2 = param_1[0x16];
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar7._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x14] = fVar1 * fVar4;
    param_1[0x15] = fVar3 * fVar4;
    param_1[0x16] = fVar2 * fVar4;
    fVar3 = param_1[0x46];
    param_1[8] = param_1[0x3c] - fVar3 * param_1[0x38];
    param_1[9] = param_1[0x3d] - fVar3 * param_1[0x39];
    param_1[10] = param_1[0x3e] - fVar3 * param_1[0x3a];
    param_1[0xb] = 3.4028235e+38;
    fVar3 = param_1[0x45];
    *param_1 = param_1[0x3c] - fVar3 * param_1[0x38];
    param_1[1] = param_1[0x3d] - fVar3 * param_1[0x39];
    param_1[2] = param_1[0x3e] - fVar3 * param_1[0x3a];
    param_1[3] = 3.4028235e+38;
    *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_1 + 0x38);
    *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_1 + 0x3a);
    fVar2 = param_1[0x38];
    fVar1 = param_1[0x39];
    fVar3 = param_1[0x3a];
  }
  param_1[4] = -fVar2;
  param_1[5] = -fVar1;
  param_1[6] = -fVar3;
  param_1[7] = 3.4028235e+38;
  return;
}





// 函数: void FUN_1802864f0(float *param_1)
void FUN_1802864f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    fVar1 = param_1[0x43];
    param_1[0x20] = fVar1 * param_1[0x34] + param_1[0x3c];
    param_1[0x21] = fVar1 * param_1[0x35] + param_1[0x3d];
    param_1[0x22] = fVar1 * param_1[0x36] + param_1[0x3e];
    param_1[0x23] = 3.4028235e+38;
    fVar1 = param_1[0x44];
    param_1[0x28] = fVar1 * param_1[0x34] + param_1[0x3c];
    param_1[0x29] = fVar1 * param_1[0x35] + param_1[0x3d];
    param_1[0x2a] = fVar1 * param_1[0x36] + param_1[0x3e];
    param_1[0x2b] = 3.4028235e+38;
    fVar1 = param_1[0x42];
    param_1[0x18] = fVar1 * param_1[0x30] + param_1[0x3c];
    param_1[0x19] = fVar1 * param_1[0x31] + param_1[0x3d];
    param_1[0x1a] = fVar1 * param_1[0x32] + param_1[0x3e];
    param_1[0x1b] = 3.4028235e+38;
    fVar1 = param_1[0x41];
    param_1[0x10] = fVar1 * param_1[0x30] + param_1[0x3c];
    param_1[0x11] = fVar1 * param_1[0x31] + param_1[0x3d];
    param_1[0x12] = fVar1 * param_1[0x32] + param_1[0x3e];
    param_1[0x13] = 3.4028235e+38;
    fVar1 = param_1[0x46];
    param_1[8] = param_1[0x3c] - fVar1 * param_1[0x38];
    param_1[9] = param_1[0x3d] - fVar1 * param_1[0x39];
    param_1[10] = param_1[0x3e] - fVar1 * param_1[0x3a];
    param_1[0xb] = 3.4028235e+38;
    fVar1 = param_1[0x45];
    *param_1 = param_1[0x3c] - fVar1 * param_1[0x38];
    param_1[1] = param_1[0x3d] - fVar1 * param_1[0x39];
    param_1[2] = param_1[0x3e] - fVar1 * param_1[0x3a];
    param_1[3] = 3.4028235e+38;
    param_1[0x24] = -param_1[0x34];
    param_1[0x25] = -param_1[0x35];
    param_1[0x26] = -param_1[0x36];
    param_1[0x27] = 3.4028235e+38;
    *(uint64_t *)(param_1 + 0x2c) = *(uint64_t *)(param_1 + 0x34);
    *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x36);
    param_1[0x1c] = -param_1[0x30];
    param_1[0x1d] = -param_1[0x31];
    param_1[0x1e] = -param_1[0x32];
    param_1[0x1f] = 3.4028235e+38;
    *(uint64_t *)(param_1 + 0x14) = *(uint64_t *)(param_1 + 0x30);
    *(uint64_t *)(param_1 + 0x16) = *(uint64_t *)(param_1 + 0x32);
    *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_1 + 0x38);
    *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_1 + 0x3a);
    fVar3 = param_1[0x38];
    fVar2 = param_1[0x39];
    fVar1 = param_1[0x3a];
  }
  else {
    *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_1 + 0x3c);
    *(uint64_t *)(param_1 + 0x22) = *(uint64_t *)(param_1 + 0x3e);
    *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(param_1 + 0x3c);
    *(uint64_t *)(param_1 + 0x2a) = *(uint64_t *)(param_1 + 0x3e);
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_1 + 0x3c);
    *(uint64_t *)(param_1 + 0x1a) = *(uint64_t *)(param_1 + 0x3e);
    *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(param_1 + 0x3c);
    *(uint64_t *)(param_1 + 0x12) = *(uint64_t *)(param_1 + 0x3e);
    fVar1 = param_1[0x45];
    fVar2 = param_1[0x43];
    param_1[0x24] = -(fVar1 * param_1[0x34]) - fVar2 * param_1[0x38];
    param_1[0x25] = -(fVar1 * param_1[0x35]) - fVar2 * param_1[0x39];
    param_1[0x26] = -(fVar1 * param_1[0x36]) - fVar2 * param_1[0x3a];
    param_1[0x27] = 3.4028235e+38;
    fVar1 = param_1[0x45];
    fVar2 = param_1[0x44];
    param_1[0x2c] = fVar2 * param_1[0x38] + fVar1 * param_1[0x34];
    param_1[0x2d] = fVar2 * param_1[0x39] + fVar1 * param_1[0x35];
    param_1[0x2e] = fVar2 * param_1[0x3a] + fVar1 * param_1[0x36];
    param_1[0x2f] = 3.4028235e+38;
    fVar1 = param_1[0x45];
    fVar2 = param_1[0x42];
    param_1[0x1c] = -(fVar1 * param_1[0x30]) - fVar2 * param_1[0x38];
    param_1[0x1d] = -(fVar1 * param_1[0x31]) - fVar2 * param_1[0x39];
    param_1[0x1e] = -(fVar1 * param_1[0x32]) - fVar2 * param_1[0x3a];
    param_1[0x1f] = 3.4028235e+38;
    fVar1 = param_1[0x45];
    fVar2 = param_1[0x41];
    param_1[0x14] = fVar2 * param_1[0x38] + fVar1 * param_1[0x30];
    param_1[0x15] = fVar1 * param_1[0x31] + fVar2 * param_1[0x39];
    param_1[0x16] = fVar2 * param_1[0x3a] + fVar1 * param_1[0x32];
    param_1[0x17] = 3.4028235e+38;
    fVar1 = param_1[0x25];
    fVar2 = param_1[0x24];
    fVar3 = param_1[0x26];
    fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x24] = fVar2 * fVar4;
    param_1[0x25] = fVar1 * fVar4;
    param_1[0x26] = fVar3 * fVar4;
    fVar1 = param_1[0x2d];
    fVar2 = param_1[0x2c];
    fVar3 = param_1[0x2e];
    fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x2c] = fVar2 * fVar4;
    param_1[0x2d] = fVar1 * fVar4;
    param_1[0x2e] = fVar3 * fVar4;
    fVar1 = param_1[0x1d];
    fVar2 = param_1[0x1c];
    fVar3 = param_1[0x1e];
    fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x1c] = fVar2 * fVar4;
    param_1[0x1d] = fVar1 * fVar4;
    param_1[0x1e] = fVar3 * fVar4;
    fVar1 = param_1[0x15];
    fVar2 = param_1[0x14];
    fVar3 = param_1[0x16];
    fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
    param_1[0x14] = fVar2 * fVar4;
    param_1[0x15] = fVar1 * fVar4;
    param_1[0x16] = fVar3 * fVar4;
    fVar1 = param_1[0x46];
    param_1[8] = param_1[0x3c] - fVar1 * param_1[0x38];
    param_1[9] = param_1[0x3d] - fVar1 * param_1[0x39];
    param_1[10] = param_1[0x3e] - fVar1 * param_1[0x3a];
    param_1[0xb] = 3.4028235e+38;
    fVar1 = param_1[0x45];
    *param_1 = param_1[0x3c] - fVar1 * param_1[0x38];
    param_1[1] = param_1[0x3d] - fVar1 * param_1[0x39];
    param_1[2] = param_1[0x3e] - fVar1 * param_1[0x3a];
    param_1[3] = 3.4028235e+38;
    *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_1 + 0x38);
    *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_1 + 0x3a);
    fVar3 = param_1[0x38];
    fVar2 = param_1[0x39];
    fVar1 = param_1[0x3a];
  }
  param_1[4] = -fVar3;
  param_1[5] = -fVar2;
  param_1[6] = -fVar1;
  param_1[7] = 3.4028235e+38;
  return;
}





