#include "TaleWorlds.Native.Split.h"
// 99_part_10_part032_sub002_sub002.c - 1 个函数
// 函数: void function_6b79e0(int64_t *param_1,float *param_2,float *param_3,int32_t param_4,
void function_6b79e0(int64_t *param_1,float *param_2,float *param_3,int32_t param_4,
                  int8_t param_5)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  (**(code **)(*param_1 + 0x90))(param_1,&fStack_98);
  fVar5 = *param_3 + *param_3;
  fVar3 = param_3[1] + param_3[1];
  fVar4 = param_3[2] + param_3[2];
  fVar7 = fStack_8c * fStack_8c - 0.5;
  fVar1 = fStack_94 * fVar3 + fStack_98 * fVar5 + fStack_90 * fVar4;
  fStack_b8 = (fStack_94 * fVar4 - fStack_90 * fVar3) * fStack_8c + fVar7 * fVar5 +
              fStack_98 * fVar1 + fStack_88;
  fVar6 = *param_2 + *param_2;
  fStack_b4 = (fStack_90 * fVar5 - fStack_98 * fVar4) * fStack_8c + fVar7 * fVar3 +
              fStack_94 * fVar1 + fStack_84;
  fVar2 = param_2[1] + param_2[1];
  fStack_b0 = (fStack_98 * fVar3 - fStack_94 * fVar5) * fStack_8c + fVar7 * fVar4 +
              fStack_90 * fVar1 + fStack_80;
  fVar3 = param_2[2] + param_2[2];
  fVar1 = fStack_94 * fVar2 + fStack_98 * fVar6 + fStack_90 * fVar3;
  fStack_a8 = (fStack_94 * fVar3 - fStack_90 * fVar2) * fStack_8c + fVar7 * fVar6 +
              fStack_98 * fVar1;
  fStack_a4 = (fStack_90 * fVar6 - fStack_98 * fVar3) * fStack_8c + fVar7 * fVar2 +
              fStack_94 * fVar1;
  fStack_a0 = (fStack_98 * fVar2 - fStack_94 * fVar6) * fStack_8c + fVar7 * fVar3 +
              fStack_90 * fVar1;
  function_6badd0(param_1,&fStack_a8,&fStack_b8,param_4,param_5);
  return;
}
uint64_t function_6b7c90(uint64_t param_1,int64_t *param_2,float *param_3)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int8_t stack_array_98 [144];
  (**(code **)(*param_2 + 0x90))(param_2,&fStack_b8);
  lVar1 = (**(code **)(*param_2 + 0xd8))(param_2,stack_array_98);
  fVar6 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
  fVar3 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar5 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
  fVar4 = fStack_ac * fStack_ac - 0.5;
  fVar2 = fStack_b4 * fVar3 + fStack_b8 * fVar6 + fStack_b0 * fVar5;
  fStack_c8 = *param_3 -
              ((fStack_b4 * fVar5 - fStack_b0 * fVar3) * fStack_ac + fVar4 * fVar6 +
               fStack_b8 * fVar2 + fStack_a8);
  fStack_c4 = param_3[1] -
              ((fStack_b0 * fVar6 - fStack_b8 * fVar5) * fStack_ac + fVar4 * fVar3 +
               fStack_b4 * fVar2 + fStack_a4);
  fStack_c0 = param_3[2] -
              ((fStack_b8 * fVar3 - fStack_b4 * fVar6) * fStack_ac + fVar4 * fVar5 +
               fStack_b0 * fVar2 + fStack_a0);
  function_6bc800(param_1,param_2,&fStack_c8);
  return param_1;
}
uint64_t function_6b7e80(uint64_t param_1,int64_t *param_2,float *param_3)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  int8_t stack_array_c8 [192];
  (**(code **)(*param_2 + 0x90))(param_2,&fStack_e8);
  lVar1 = (**(code **)(*param_2 + 0xd8))(param_2,stack_array_c8);
  fVar2 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
  fVar9 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar7 = *param_3 + *param_3;
  fVar4 = param_3[1] + param_3[1];
  fVar6 = param_3[2] + param_3[2];
  fVar3 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
  fVar10 = fStack_dc * fStack_dc - 0.5;
  fVar8 = fStack_e4 * fVar9 + fStack_e8 * fVar2 + fStack_e0 * fVar3;
  fVar5 = fStack_e4 * fVar4 + fStack_e8 * fVar7 + fStack_e0 * fVar6;
  fStack_f8 = ((fStack_e4 * fVar6 - fStack_e0 * fVar4) * fStack_dc + fVar10 * fVar7 +
              fStack_e8 * fVar5) -
              ((fStack_e4 * fVar3 - fStack_e0 * fVar9) * fStack_dc + fVar10 * fVar2 +
              fStack_e8 * fVar8);
  fStack_f4 = ((fStack_e0 * fVar7 - fStack_e8 * fVar6) * fStack_dc + fVar10 * fVar4 +
              fStack_e4 * fVar5) -
              ((fStack_e0 * fVar2 - fStack_e8 * fVar3) * fStack_dc + fVar10 * fVar9 +
              fStack_e4 * fVar8);
  fStack_f0 = ((fStack_e8 * fVar4 - fStack_e4 * fVar7) * fStack_dc + fVar10 * fVar6 +
              fStack_e0 * fVar5) -
              ((fStack_e8 * fVar9 - fStack_e4 * fVar2) * fStack_dc + fVar10 * fVar3 +
              fStack_e0 * fVar8);
  function_6bc800(param_1,param_2,&fStack_f8);
  return param_1;
}
uint64_t function_6b8180(uint64_t param_1,int64_t *param_2,float *param_3)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int8_t stack_array_98 [144];
  (**(code **)(*param_2 + 0x90))(param_2,&fStack_b8);
  lVar1 = (**(code **)(*param_2 + 0xd8))(param_2,stack_array_98);
  fVar6 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x10);
  fVar3 = *(float *)(lVar1 + 0x14) + *(float *)(lVar1 + 0x14);
  fVar5 = *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0x18);
  fVar4 = fStack_ac * fStack_ac - 0.5;
  fVar2 = fStack_b4 * fVar3 + fStack_b8 * fVar6 + fStack_b0 * fVar5;
  fStack_c8 = *param_3 -
              ((fStack_b4 * fVar5 - fStack_b0 * fVar3) * fStack_ac + fVar4 * fVar6 +
              fStack_b8 * fVar2);
  fStack_c4 = param_3[1] -
              ((fStack_b0 * fVar6 - fStack_b8 * fVar5) * fStack_ac + fVar4 * fVar3 +
              fStack_b4 * fVar2);
  fStack_c0 = param_3[2] -
              ((fStack_b8 * fVar3 - fStack_b4 * fVar6) * fStack_ac + fVar4 * fVar5 +
              fStack_b0 * fVar2);
  function_6bc800(param_1,param_2,&fStack_c8);
  return param_1;
}
bool function_6b8360(int64_t *param_1,int64_t *param_2,uint64_t param_3,float param_4,
                  int16_t *param_5,uint64_t *param_6,uint *param_7,int *param_8,
                  uint64_t param_9,uint64_t param_10,int32_t param_11)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint *puVar8;
  int32_t uVar9;
  uint uVar10;
  int64_t lVar11;
  float *pfVar12;
  int32_t *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int16_t astack_special_x_20 [4];
  uint64_t local_var_218;
  uint64_t local_var_210;
  int16_t local_var_208;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int32_t local_var_1f0;
  int32_t local_var_1ec;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  void *plocal_var_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int16_t local_var_1a8;
  uint64_t local_var_1a4;
  int32_t local_var_19c;
  int32_t local_var_198;
  int32_t local_var_194;
  int32_t local_var_190;
  float fStack_18c;
  int32_t local_var_188;
  char cStack_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int8_t stack_array_168 [16];
  int8_t stack_array_158 [16];
  int8_t stack_array_148 [48];
  int8_t stack_array_118 [28];
  int8_t stack_array_fc [196];
  puVar8 = param_7;
  *param_7 = 0xffffffff;
  uVar10 = (**(code **)(*param_1 + 0xb0))();
  uVar9 = param_11;
  uVar16 = 0;
  fVar22 = param_4;
  if (uVar10 != 0) {
    do {
      param_7 = (uint *)0x0;
      (**(code **)(*param_1 + 0xb8))(param_1,&param_7,1,uVar16);
      lVar11 = (**(code **)(*(int64_t *)param_7 + 0x98))(param_7,stack_array_118);
      pfVar12 = (float *)(**(code **)(*param_1 + 0x90))(param_1,stack_array_fc);
      fVar21 = *(float *)(lVar11 + 0x10) + *(float *)(lVar11 + 0x10);
      fVar18 = *(float *)(lVar11 + 0x14) + *(float *)(lVar11 + 0x14);
      fVar1 = pfVar12[3];
      fVar20 = *(float *)(lVar11 + 0x18) + *(float *)(lVar11 + 0x18);
      fVar2 = pfVar12[1];
      fVar3 = *pfVar12;
      fVar4 = pfVar12[2];
      fVar19 = fVar1 * fVar1 - 0.5;
      fVar17 = fVar3 * fVar21 + fVar2 * fVar18 + fVar4 * fVar20;
      fVar5 = pfVar12[4];
      fVar6 = pfVar12[6];
      fVar7 = pfVar12[5];
      puVar13 = (int32_t *)SystemCore_Initializer(pfVar12,stack_array_168,lVar11);
      local_var_1f0 = *puVar13;
      local_var_1ec = puVar13[1];
      local_var_1e8 = puVar13[2];
      local_var_1e4 = puVar13[3];
      local_var_208 = (int16_t)param_8[4];
      iVar15 = *param_8;
      fStack_1e0 = (fVar2 * fVar20 - fVar4 * fVar18) * fVar1 + fVar19 * fVar21 + fVar3 * fVar17 +
                   fVar5;
      fStack_1dc = (fVar4 * fVar21 - fVar3 * fVar20) * fVar1 + fVar19 * fVar18 + fVar2 * fVar17 +
                   fVar7;
      fStack_1d8 = (fVar3 * fVar18 - fVar2 * fVar21) * fVar1 + fVar19 * fVar20 + fVar4 * fVar17 +
                   fVar6;
      local_var_210 = 0;
      local_var_218 = 0;
      if (((iVar15 == 0 && param_8[1] == 0) && param_8[2] == 0) && param_8[3] == 0) {
        piVar14 = (int *)(**(code **)(*(int64_t *)param_7 + 0xb8))(param_7,stack_array_158);
        iVar15 = *piVar14;
      }
      else {
        piVar14 = &iStack_200;
        iStack_1fc = param_8[1];
        iStack_1f8 = param_8[2];
        iStack_1f4 = param_8[3];
        iStack_200 = iVar15;
      }
      local_var_218 = CONCAT44(piVar14[1],iVar15);
      local_var_210 = *(uint64_t *)(piVar14 + 2);
      (**(code **)(*(int64_t *)param_7 + 0x48))(param_7,stack_array_148);
      plocal_var_1c8 = &memory_allocator_3312_ptr;
      local_var_1c0 = 0;
      astack_special_x_20[0] = *param_5;
      local_var_1b8 = 0;
      local_var_1b0 = 0xffffffff;
      local_var_1a8 = 0;
      local_var_1a4 = 0;
      local_var_19c = 0;
      local_var_198 = 0;
      local_var_194 = 0;
      local_var_190 = 0;
      fStack_18c = 3.4028235e+38;
      cStack_180 = '\0';
      local_var_178 = 0;
      local_var_170 = 0;
      (**(code **)(*param_2 + 0x2b8))
                (param_2,stack_array_148,&local_var_1f0,param_3,param_4,&plocal_var_1c8,astack_special_x_20,
                 &local_var_218,param_9,param_10,uVar9);
      if ((cStack_180 != '\0') && (fStack_18c < fVar22)) {
        *param_6 = local_var_1c0;
        param_6[1] = local_var_1b8;
        param_6[2] = CONCAT44(local_var_1ac,local_var_1b0);
        *(int16_t *)(param_6 + 3) = local_var_1a8;
        *(uint64_t *)((int64_t)param_6 + 0x1c) = local_var_1a4;
        *(uint64_t *)((int64_t)param_6 + 0x24) = CONCAT44(local_var_198,local_var_19c);
        *(int32_t *)((int64_t)param_6 + 0x2c) = local_var_194;
        *(int32_t *)(param_6 + 6) = local_var_190;
        *(float *)((int64_t)param_6 + 0x34) = fStack_18c;
        *(int32_t *)(param_6 + 7) = local_var_188;
        *puVar8 = uVar16;
        fVar22 = fStack_18c;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar10);
  }
  return *puVar8 != 0xffffffff;
}
bool function_6b83c5(int32_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int16_t uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int32_t uVar15;
  uint64_t *puVar16;
  int *piVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t lVar20;
  float *pfVar21;
  int32_t *puVar22;
  uint64_t unaff_RBX;
  uint64_t *unaff_RBP;
  uint unaff_ESI;
  uint unaff_R12D;
  int64_t *unaff_R13;
  int64_t *unaff_R14;
  uint *unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_XMM13_Da;
  puVar16 = (uint64_t *)unaff_RBP[0x35];
  do {
    lVar20 = *unaff_R13;
    unaff_RBP[0x36] = unaff_RBX;
    (**(code **)(lVar20 + 0xb8))(param_1,unaff_RBP + 0x36,1,unaff_ESI);
    lVar20 = (**(code **)(*(int64_t *)unaff_RBP[0x36] + 0x98))
                       ((int64_t *)unaff_RBP[0x36],unaff_RBP + 0xc);
    pfVar21 = (float *)(**(code **)(*unaff_R13 + 0x90))(extraout_XMM0_Da,(int64_t)unaff_RBP + 0x7c)
    ;
    fVar27 = *(float *)(lVar20 + 0x10) + *(float *)(lVar20 + 0x10);
    fVar24 = *(float *)(lVar20 + 0x14) + *(float *)(lVar20 + 0x14);
    fVar1 = pfVar21[3];
    fVar26 = *(float *)(lVar20 + 0x18) + *(float *)(lVar20 + 0x18);
    fVar2 = pfVar21[1];
    fVar3 = *pfVar21;
    fVar4 = pfVar21[2];
    fVar25 = fVar1 * fVar1 - 0.5;
    fVar23 = fVar3 * fVar27 + fVar2 * fVar24 + fVar4 * fVar26;
    fVar5 = pfVar21[4];
    fVar6 = pfVar21[6];
    fVar7 = pfVar21[5];
    puVar22 = (int32_t *)SystemCore_Initializer(pfVar21,unaff_RBP + 2,lVar20);
    *(int32_t *)(unaff_RBP + -0xf) = *puVar22;
    *(int32_t *)((int64_t)unaff_RBP + -0x74) = puVar22[1];
    piVar17 = (int *)unaff_RBP[0x37];
    unaff_RBX = 0;
    *(int32_t *)(unaff_RBP + -0xe) = puVar22[2];
    *(int32_t *)((int64_t)unaff_RBP + -0x6c) = puVar22[3];
    iVar11 = piVar17[3];
    iVar12 = piVar17[2];
    iVar13 = piVar17[1];
    iVar14 = *piVar17;
    *(float *)(unaff_RBP + -0xd) =
         (fVar2 * fVar26 - fVar4 * fVar24) * fVar1 + fVar25 * fVar27 + fVar3 * fVar23 + fVar5;
    *(float *)((int64_t)unaff_RBP + -100) =
         (fVar4 * fVar27 - fVar3 * fVar26) * fVar1 + fVar25 * fVar24 + fVar2 * fVar23 + fVar7;
    *(float *)(unaff_RBP + -0xc) =
         (fVar3 * fVar24 - fVar2 * fVar27) * fVar1 + fVar25 * fVar26 + fVar4 * fVar23 + fVar6;
    if (((iVar14 == 0 && iVar13 == 0) && iVar12 == 0) && iVar11 == 0) {
      (**(code **)(*(int64_t *)unaff_RBP[0x36] + 0xb8))((int64_t *)unaff_RBP[0x36],unaff_RBP + 4);
    }
    else {
      *(int *)(unaff_RBP + -0x10) = iVar12;
      *(int *)((int64_t)unaff_RBP + -0x7c) = iVar11;
    }
    (**(code **)(*(int64_t *)unaff_RBP[0x36] + 0x48))((int64_t *)unaff_RBP[0x36],unaff_RBP + 6);
    unaff_RBP[-10] = &memory_allocator_3312_ptr;
    unaff_RBP[-9] = 0;
    *(int16_t *)(unaff_RBP + 0x33) = *(int16_t *)unaff_RBP[0x34];
    lVar20 = *unaff_R14;
    unaff_RBP[-8] = 0;
    *(int32_t *)(unaff_RBP + -7) = 0xffffffff;
    *(int16_t *)(unaff_RBP + -6) = 0;
    *(uint64_t *)((int64_t)unaff_RBP + -0x2c) = 0;
    *(int32_t *)((int64_t)unaff_RBP + -0x24) = 0;
    *(int32_t *)(unaff_RBP + -4) = 0;
    *(int32_t *)((int64_t)unaff_RBP + -0x1c) = 0;
    *(int32_t *)(unaff_RBP + -3) = 0;
    *(int32_t *)((int64_t)unaff_RBP + -0x14) = 0x7f7fffff;
    *(int8_t *)(unaff_RBP + -1) = 0;
    *unaff_RBP = 0;
    unaff_RBP[1] = 0;
    (**(code **)(lVar20 + 0x2b8))(0,unaff_RBP + 6,unaff_RBP + -0xf,unaff_RBP[0x32]);
    param_1 = extraout_XMM0_Da_00;
    if ((*(char *)(unaff_RBP + -1) != '\0') &&
       (fVar1 = *(float *)((int64_t)unaff_RBP + -0x14), fVar1 < unaff_XMM13_Da)) {
      uVar18 = unaff_RBP[-8];
      uVar10 = *(int16_t *)(unaff_RBP + -6);
      uVar9 = unaff_RBP[-7];
      *puVar16 = unaff_RBP[-9];
      puVar16[1] = uVar18;
      uVar18 = *(uint64_t *)((int64_t)unaff_RBP + -0x2c);
      uVar19 = *(uint64_t *)((int64_t)unaff_RBP + -0x24);
      puVar16[2] = uVar9;
      uVar8 = *(int32_t *)(unaff_RBP + -3);
      *(int16_t *)(puVar16 + 3) = uVar10;
      uVar15 = *(int32_t *)(unaff_RBP + -2);
      *(uint64_t *)((int64_t)puVar16 + 0x1c) = uVar18;
      *(uint64_t *)((int64_t)puVar16 + 0x24) = uVar19;
      param_1 = *(int32_t *)((int64_t)unaff_RBP + -0x1c);
      *(int32_t *)((int64_t)puVar16 + 0x2c) = param_1;
      *(int32_t *)(puVar16 + 6) = uVar8;
      *(float *)((int64_t)puVar16 + 0x34) = fVar1;
      *(int32_t *)(puVar16 + 7) = uVar15;
      *unaff_R15 = unaff_ESI;
      unaff_XMM13_Da = fVar1;
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < unaff_R12D);
  return *unaff_R15 != 0xffffffff;
}
bool function_6b87ae(void)
{
  int *unaff_R15;
  return *unaff_R15 != -1;
}
uint64_t function_6b87e0(int64_t *param_1,int64_t *param_2,uint64_t param_3,int32_t param_4,
                       int16_t *param_5,int64_t param_6,int32_t *param_7,uint param_8,
                       uint64_t *param_9,uint *param_10,byte *param_11,int *param_12,
                       uint64_t param_13,uint64_t param_14,int32_t param_15)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int64_t lVar12;
  float *pfVar13;
  int32_t *puVar14;
  int *piVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int32_t *puVar18;
  int64_t lVar19;
  uint uVar20;
  int32_t *puVar21;
  uint uVar22;
  int64_t lVar23;
  int iVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int16_t astack_special_x_20 [4];
  uint local_var_278;
  int64_t *plStack_270;
  uint local_var_268;
  uint64_t local_var_260;
  uint64_t local_var_258;
  int16_t local_var_250;
  void *plocal_var_248;
  uint64_t local_var_240;
  uint64_t local_var_238;
  int32_t local_var_230;
  int32_t local_var_22c;
  int16_t local_var_228;
  uint64_t local_var_224;
  int32_t local_var_21c;
  int32_t local_var_218;
  int32_t local_var_214;
  int32_t local_var_210;
  float fStack_20c;
  int32_t local_var_208;
  char cStack_200;
  uint64_t *plocal_var_1f8;
  uint local_var_1f0;
  uint local_var_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int32_t local_var_1d8;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  int32_t local_var_1a8;
  int16_t local_var_1a0;
  int32_t local_var_19c;
  uint64_t local_var_198;
  uint64_t local_var_190;
  int32_t local_var_188;
  int32_t local_var_184;
  int8_t stack_array_178 [16];
  int8_t stack_array_168 [16];
  int8_t stack_array_158 [48];
  int8_t stack_array_128 [28];
  int8_t stack_array_10c [204];
  *param_11 = 0;
  *param_10 = 0xffffffff;
  if (param_8 != 0) {
    puVar14 = param_7;
    for (uVar16 = (uint64_t)param_8; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
  }
  uVar17 = 0;
  local_var_268 = (**(code **)(*param_1 + 0xb0))(param_1);
  local_var_278 = 0;
  uVar16 = uVar17;
  if (local_var_268 != 0) {
    do {
      uVar25 = (uint)uVar16;
      plStack_270 = (int64_t *)0x0;
      (**(code **)(*param_1 + 0xb8))(param_1,&plStack_270,1,uVar16);
      lVar12 = (**(code **)(*plStack_270 + 0x98))(plStack_270,stack_array_128);
      pfVar13 = (float *)(**(code **)(*param_1 + 0x90))(param_1,stack_array_10c);
      fVar30 = *(float *)(lVar12 + 0x10) + *(float *)(lVar12 + 0x10);
      fVar27 = *(float *)(lVar12 + 0x14) + *(float *)(lVar12 + 0x14);
      fVar2 = pfVar13[3];
      fVar29 = *(float *)(lVar12 + 0x18) + *(float *)(lVar12 + 0x18);
      fVar3 = pfVar13[1];
      fVar4 = *pfVar13;
      fVar5 = pfVar13[2];
      fVar28 = fVar2 * fVar2 - 0.5;
      fVar26 = fVar4 * fVar30 + fVar3 * fVar27 + fVar5 * fVar29;
      fVar6 = pfVar13[4];
      fVar7 = pfVar13[6];
      fVar8 = pfVar13[5];
      puVar14 = (int32_t *)SystemCore_Initializer(pfVar13,stack_array_178,lVar12);
      local_var_1d8 = *puVar14;
      local_var_1d4 = puVar14[1];
      local_var_1d0 = puVar14[2];
      local_var_258 = 0;
      local_var_260 = 0;
      local_var_250 = (int16_t)param_12[4];
      iVar24 = *param_12;
      local_var_1cc = puVar14[3];
      fStack_1c8 = (fVar3 * fVar29 - fVar5 * fVar27) * fVar2 + fVar28 * fVar30 + fVar4 * fVar26 +
                   fVar6;
      fStack_1c4 = (fVar5 * fVar30 - fVar4 * fVar29) * fVar2 + fVar28 * fVar27 + fVar3 * fVar26 +
                   fVar8;
      fStack_1c0 = (fVar4 * fVar27 - fVar3 * fVar30) * fVar2 + fVar28 * fVar29 + fVar5 * fVar26 +
                   fVar7;
      if (((iVar24 == 0 && param_12[1] == 0) && param_12[2] == 0) && param_12[3] == 0) {
        piVar15 = (int *)(**(code **)(*plStack_270 + 0xb8))(plStack_270,stack_array_168);
        iVar24 = *piVar15;
      }
      else {
        piVar15 = &iStack_1e8;
        iStack_1e4 = param_12[1];
        iStack_1e0 = param_12[2];
        iStack_1dc = param_12[3];
        iStack_1e8 = iVar24;
      }
      local_var_260 = CONCAT44(piVar15[1],iVar24);
      local_var_258 = *(uint64_t *)(piVar15 + 2);
      (**(code **)(*plStack_270 + 0x48))();
      local_var_1a0 = 0;
      local_var_1b8 = 0;
      local_var_1b0 = 0;
      local_var_19c = 0;
      local_var_1a8 = 0xffffffff;
      local_var_198 = 0;
      local_var_190 = 0;
      local_var_188 = 0;
      local_var_184 = 0x7f7fffff;
      iVar24 = (int)uVar17;
      uVar20 = param_8 - iVar24;
      if (uVar20 == 0) {
        plocal_var_1f8 = &local_var_1b8;
        local_var_1f0 = 1;
      }
      else {
        plocal_var_1f8 = (uint64_t *)((int64_t)iVar24 * 0x40 + param_6);
        local_var_1f0 = uVar20;
      }
      local_var_240 = 0;
      local_var_238 = 0;
      local_var_228 = 0;
      local_var_224 = 0;
      local_var_21c = 0;
      cStack_200 = '\0';
      local_var_1ec = 0;
      plocal_var_248 = &memory_allocator_3312_ptr;
      astack_special_x_20[0] = *param_5;
      local_var_230 = 0xffffffff;
      local_var_218 = 0;
      local_var_214 = 0;
      local_var_210 = 0;
      fStack_20c = 3.4028235e+38;
      (**(code **)(*param_2 + 0x2b8))
                (param_2,stack_array_158,&local_var_1d8,param_3,param_4,&plocal_var_248,astack_special_x_20,
                 &local_var_260,param_13,param_14,param_15);
      *param_11 = *param_11 | uVar20 <= local_var_1ec;
      uVar22 = 0;
      if (uVar20 != 0) {
        uVar22 = local_var_1ec;
      }
      if (uVar22 != 0) {
        uVar16 = (uint64_t)uVar22;
        do {
          if ((uint)uVar17 < param_8) {
            param_7[uVar17] = uVar25;
          }
          uVar17 = (uint64_t)((uint)uVar17 + 1);
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (cStack_200 != '\0') {
        if ((*param_10 == 0xffffffff) || (fStack_20c < *(float *)((int64_t)param_9 + 0x34))) {
          *param_10 = uVar25;
          *param_9 = local_var_240;
          param_9[1] = local_var_238;
          param_9[2] = CONCAT44(local_var_22c,local_var_230);
          *(int16_t *)(param_9 + 3) = local_var_228;
          *(uint64_t *)((int64_t)param_9 + 0x1c) = local_var_224;
          *(uint64_t *)((int64_t)param_9 + 0x24) = CONCAT44(local_var_218,local_var_21c);
          *(int32_t *)((int64_t)param_9 + 0x2c) = local_var_214;
          *(int32_t *)(param_9 + 6) = local_var_210;
          *(float *)((int64_t)param_9 + 0x34) = fStack_20c;
          *(int32_t *)(param_9 + 7) = local_var_208;
        }
        lVar12 = (int64_t)(iVar24 + -1);
        if (-1 < iVar24 + -1) {
          if (2 < lVar12) {
            lVar19 = (int64_t)iVar24;
            uVar16 = lVar12 + 1U >> 2;
            lVar23 = (int64_t)(int)uVar22;
            puVar21 = (int32_t *)(param_6 + -0x1c + lVar12 * 0x40);
            puVar14 = param_7 + lVar12 + -2;
            lVar12 = lVar12 + uVar16 * -4;
            do {
              if (fStack_20c < (float)puVar21[0x14]) {
                lVar1 = lVar23 + lVar19;
                uVar22 = uVar22 - 1;
                puVar18 = (int32_t *)((lVar1 + -1) * 0x40 + param_6);
                lVar23 = lVar23 + -1;
                uVar9 = puVar18[1];
                uVar10 = puVar18[2];
                uVar11 = puVar18[3];
                puVar21[7] = *puVar18;
                puVar21[8] = uVar9;
                puVar21[9] = uVar10;
                puVar21[10] = uVar11;
                *(uint64_t *)(puVar21 + 0xb) = *(uint64_t *)(puVar18 + 4);
                *(int16_t *)(puVar21 + 0xd) = *(int16_t *)(puVar18 + 6);
                puVar21[0xe] = puVar18[7];
                puVar21[0xf] = puVar18[8];
                puVar21[0x10] = puVar18[9];
                puVar21[0x11] = puVar18[10];
                puVar21[0x12] = puVar18[0xb];
                puVar21[0x13] = puVar18[0xc];
                puVar21[0x14] = puVar18[0xd];
                puVar21[0x15] = puVar18[0xe];
                puVar14[2] = param_7[lVar1 + -1];
              }
              if (fStack_20c < (float)puVar21[4]) {
                lVar1 = lVar23 + lVar19;
                uVar22 = uVar22 - 1;
                puVar18 = (int32_t *)((lVar1 + -1) * 0x40 + param_6);
                lVar23 = lVar23 + -1;
                uVar9 = puVar18[1];
                uVar10 = puVar18[2];
                uVar11 = puVar18[3];
                puVar21[-9] = *puVar18;
                puVar21[-8] = uVar9;
                puVar21[-7] = uVar10;
                puVar21[-6] = uVar11;
                *(uint64_t *)(puVar21 + -5) = *(uint64_t *)(puVar18 + 4);
                *(int16_t *)(puVar21 + -3) = *(int16_t *)(puVar18 + 6);
                puVar21[-2] = puVar18[7];
                puVar21[-1] = puVar18[8];
                *puVar21 = puVar18[9];
                puVar21[1] = puVar18[10];
                puVar21[2] = puVar18[0xb];
                puVar21[3] = puVar18[0xc];
                puVar21[4] = puVar18[0xd];
                puVar21[5] = puVar18[0xe];
                puVar14[1] = param_7[lVar1 + -1];
              }
              if (fStack_20c < (float)puVar21[-0xc]) {
                lVar1 = lVar23 + lVar19;
                uVar22 = uVar22 - 1;
                puVar18 = (int32_t *)((lVar1 + -1) * 0x40 + param_6);
                lVar23 = lVar23 + -1;
                uVar9 = puVar18[1];
                uVar10 = puVar18[2];
                uVar11 = puVar18[3];
                puVar21[-0x19] = *puVar18;
                puVar21[-0x18] = uVar9;
                puVar21[-0x17] = uVar10;
                puVar21[-0x16] = uVar11;
                *(uint64_t *)(puVar21 + -0x15) = *(uint64_t *)(puVar18 + 4);
                *(int16_t *)(puVar21 + -0x13) = *(int16_t *)(puVar18 + 6);
                puVar21[-0x12] = puVar18[7];
                puVar21[-0x11] = puVar18[8];
                puVar21[-0x10] = puVar18[9];
                puVar21[-0xf] = puVar18[10];
                puVar21[-0xe] = puVar18[0xb];
                puVar21[-0xd] = puVar18[0xc];
                puVar21[-0xc] = puVar18[0xd];
                puVar21[-0xb] = puVar18[0xe];
                *puVar14 = param_7[lVar1 + -1];
              }
              if (fStack_20c < (float)puVar21[-0x1c]) {
                lVar1 = lVar23 + lVar19;
                uVar22 = uVar22 - 1;
                puVar18 = (int32_t *)((lVar1 + -1) * 0x40 + param_6);
                lVar23 = lVar23 + -1;
                uVar9 = puVar18[1];
                uVar10 = puVar18[2];
                uVar11 = puVar18[3];
                puVar21[-0x29] = *puVar18;
                puVar21[-0x28] = uVar9;
                puVar21[-0x27] = uVar10;
                puVar21[-0x26] = uVar11;
                *(uint64_t *)(puVar21 + -0x25) = *(uint64_t *)(puVar18 + 4);
                *(int16_t *)(puVar21 + -0x23) = *(int16_t *)(puVar18 + 6);
                puVar21[-0x22] = puVar18[7];
                puVar21[-0x21] = puVar18[8];
                puVar21[-0x20] = puVar18[9];
                puVar21[-0x1f] = puVar18[10];
                puVar21[-0x1e] = puVar18[0xb];
                puVar21[-0x1d] = puVar18[0xc];
                puVar21[-0x1c] = puVar18[0xd];
                puVar21[-0x1b] = puVar18[0xe];
                puVar14[-1] = param_7[lVar1 + -1];
              }
              puVar14 = puVar14 + -4;
              puVar21 = puVar21 + -0x40;
              uVar16 = uVar16 - 1;
              uVar25 = local_var_278;
            } while (uVar16 != 0);
          }
          if (-1 < lVar12) {
            puVar14 = (int32_t *)(param_6 + 0x24 + lVar12 * 0x40);
            lVar19 = (int64_t)(int)uVar22;
            do {
              if (fStack_20c < (float)puVar14[4]) {
                lVar23 = lVar19 + iVar24;
                uVar22 = uVar22 - 1;
                puVar21 = (int32_t *)((lVar23 + -1) * 0x40 + param_6);
                lVar19 = lVar19 + -1;
                uVar9 = puVar21[1];
                uVar10 = puVar21[2];
                uVar11 = puVar21[3];
                puVar14[-9] = *puVar21;
                puVar14[-8] = uVar9;
                puVar14[-7] = uVar10;
                puVar14[-6] = uVar11;
                *(uint64_t *)(puVar14 + -5) = *(uint64_t *)(puVar21 + 4);
                *(int16_t *)(puVar14 + -3) = *(int16_t *)(puVar21 + 6);
                puVar14[-2] = puVar21[7];
                puVar14[-1] = puVar21[8];
                *puVar14 = puVar21[9];
                puVar14[1] = puVar21[10];
                puVar14[2] = puVar21[0xb];
                puVar14[3] = puVar21[0xc];
                puVar14[4] = puVar21[0xd];
                puVar14[5] = puVar21[0xe];
                param_7[lVar12] = param_7[lVar23 + -1];
              }
              puVar14 = puVar14 + -0x10;
              lVar12 = lVar12 + -1;
            } while (-1 < lVar12);
          }
        }
      }
      local_var_278 = uVar25 + 1;
      uVar17 = (uint64_t)(iVar24 + uVar22);
      uVar16 = (uint64_t)local_var_278;
    } while (local_var_278 < local_var_268);
  }
  return uVar17;
}
uint function_6b8877(void)
{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int16_t uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int32_t uVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  int32_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  float *pfVar22;
  int32_t *puVar23;
  int *piVar24;
  int iVar25;
  int32_t *puVar26;
  uint64_t uVar27;
  int64_t *unaff_RBX;
  int64_t lVar28;
  int32_t *unaff_RBP;
  int64_t unaff_RSI;
  uint uVar29;
  int64_t *unaff_RDI;
  int32_t *puVar30;
  uint uVar31;
  int64_t lVar32;
  uint unaff_R12D;
  uint unaff_R15D;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint local_buffer_60;
  int64_t *plStack0000000000000068;
  uint local_buffer_70;
  uint64_t local_buffer_78;
  puVar16 = *(uint64_t **)(unaff_RBP + 0x88);
  lVar17 = *(int64_t *)(unaff_RBP + 0x82);
  do {
    plStack0000000000000068 = unaff_RBX;
    (**(code **)(*unaff_RDI + 0xb8))(unaff_RDI,&local_buffer_00000068,1,unaff_R15D);
    lVar21 = (**(code **)(*plStack0000000000000068 + 0x98))
                       (plStack0000000000000068,unaff_RBP + 0x2c);
    pfVar22 = (float *)(**(code **)(*unaff_RDI + 0x90))
                                 (*(uint64_t *)(unaff_RBP + 0x78),unaff_RBP + 0x33);
    fVar38 = *(float *)(lVar21 + 0x10) + *(float *)(lVar21 + 0x10);
    fVar35 = *(float *)(lVar21 + 0x14) + *(float *)(lVar21 + 0x14);
    fVar33 = pfVar22[3];
    fVar37 = *(float *)(lVar21 + 0x18) + *(float *)(lVar21 + 0x18);
    fVar2 = pfVar22[1];
    fVar3 = *pfVar22;
    fVar4 = pfVar22[2];
    fVar36 = fVar33 * fVar33 - 0.5;
    fVar34 = fVar3 * fVar38 + fVar2 * fVar35 + fVar4 * fVar37;
    fVar5 = pfVar22[4];
    fVar6 = pfVar22[6];
    fVar7 = pfVar22[5];
    puVar23 = (int32_t *)SystemCore_Initializer(pfVar22,unaff_RBP + 0x18,lVar21);
    *unaff_RBP = *puVar23;
    unaff_RBP[1] = puVar23[1];
    piVar24 = *(int **)(unaff_RBP + 0x8e);
    unaff_RBP[2] = puVar23[2];
    uVar8 = puVar23[3];
    *(uint64_t *)(unaff_RBP + -0x20) = 0;
    iVar11 = piVar24[3];
    iVar12 = piVar24[2];
    iVar13 = piVar24[1];
    local_buffer_78 = 0;
    iVar25 = *piVar24;
    *(short *)(unaff_RBP + -0x1e) = (short)piVar24[4];
    unaff_RBP[3] = uVar8;
    unaff_RBP[4] = (fVar2 * fVar37 - fVar4 * fVar35) * fVar33 + fVar36 * fVar38 + fVar3 * fVar34 +
                   fVar5;
    unaff_RBP[5] = (fVar4 * fVar38 - fVar3 * fVar37) * fVar33 + fVar36 * fVar35 + fVar2 * fVar34 +
                   fVar7;
    unaff_RBP[6] = (fVar3 * fVar35 - fVar2 * fVar38) * fVar33 + fVar36 * fVar37 + fVar4 * fVar34 +
                   fVar6;
    if (((iVar25 == 0 && iVar13 == 0) && iVar12 == 0) && iVar11 == 0) {
      piVar24 = (int *)(**(code **)(*plStack0000000000000068 + 0xb8))
                                 (plStack0000000000000068,unaff_RBP + 0x1c);
      iVar25 = *piVar24;
    }
    else {
      unaff_RBP[-4] = iVar25;
      piVar24 = unaff_RBP + -4;
      unaff_RBP[-3] = iVar13;
      unaff_RBP[-2] = iVar12;
      unaff_RBP[-1] = iVar11;
    }
    local_buffer_78 = CONCAT44(piVar24[1],iVar25);
    unaff_RBP[-0x20] = piVar24[2];
    unaff_RBP[-0x1f] = piVar24[3];
    (**(code **)(*plStack0000000000000068 + 0x48))();
    uVar14 = unaff_RBP[0x86];
    *(int16_t *)(unaff_RBP + 0xe) = 0;
    *(uint64_t *)(unaff_RBP + 8) = 0;
    *(uint64_t *)(unaff_RBP + 10) = 0;
    unaff_RBP[0xf] = 0;
    unaff_RBP[0xc] = 0xffffffff;
    *(uint64_t *)(unaff_RBP + 0x10) = 0;
    *(uint64_t *)(unaff_RBP + 0x12) = 0;
    unaff_RBP[0x14] = 0;
    unaff_RBP[0x15] = 0x7f7fffff;
    uVar29 = uVar14 - unaff_R12D;
    if (uVar29 == 0) {
      puVar23 = unaff_RBP + 8;
      uVar31 = 1;
    }
    else {
      puVar23 = (int32_t *)((int64_t)(int)unaff_R12D * 0x40 + lVar17);
      uVar31 = uVar29;
    }
    *(uint64_t *)(unaff_RBP + -0x1a) = 0;
    *(uint64_t *)(unaff_RBP + -0x18) = 0;
    *(int16_t *)(unaff_RBP + -0x14) = 0;
    *(uint64_t *)(unaff_RBP + -0x13) = 0;
    unaff_RBP[-0x11] = 0;
    *(int8_t *)(unaff_RBP + -10) = 0;
    unaff_RBP[-5] = 0;
    *(int32_t **)(unaff_RBP + -8) = puVar23;
    *(void **)(unaff_RBP + -0x1c) = &memory_allocator_3312_ptr;
    unaff_RBP[-6] = uVar31;
    *(int16_t *)(unaff_RBP + 0x7e) = **(int16_t **)(unaff_RBP + 0x80);
    unaff_RBP[-0x16] = 0xffffffff;
    lVar21 = **(int64_t **)(unaff_RBP + 0x7a);
    unaff_RBP[-0x10] = 0;
    unaff_RBP[-0xf] = 0;
    unaff_RBP[-0xe] = 0;
    unaff_RBP[-0xd] = 0x7f7fffff;
    (**(code **)(lVar21 + 0x2b8))(*(int64_t **)(unaff_RBP + 0x7a),unaff_RBP + 0x20);
    **(byte **)(unaff_RBP + 0x8c) = **(byte **)(unaff_RBP + 0x8c) | uVar29 <= (uint)unaff_RBP[-5];
    uVar31 = 0;
    if (uVar29 != 0) {
      uVar31 = unaff_RBP[-5];
    }
    if (uVar31 != 0) {
      uVar27 = (uint64_t)uVar31;
      uVar29 = unaff_R12D;
      do {
        if (uVar29 < uVar14) {
          *(uint *)(unaff_RSI + (uint64_t)uVar29 * 4) = unaff_R15D;
        }
        uVar29 = uVar29 + 1;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    if (*(char *)(unaff_RBP + -10) != '\0') {
      fVar33 = (float)unaff_RBP[-0xd];
      if ((**(uint **)(unaff_RBP + 0x8a) == 0xffffffff) ||
         (fVar33 < *(float *)((int64_t)puVar16 + 0x34))) {
        uVar19 = *(uint64_t *)(unaff_RBP + -0x1a);
        uVar20 = *(uint64_t *)(unaff_RBP + -0x18);
        **(uint **)(unaff_RBP + 0x8a) = unaff_R15D;
        uVar9 = *(uint64_t *)(unaff_RBP + -0x16);
        uVar10 = *(int16_t *)(unaff_RBP + -0x14);
        *puVar16 = uVar19;
        puVar16[1] = uVar20;
        uVar19 = *(uint64_t *)(unaff_RBP + -0x13);
        uVar20 = *(uint64_t *)(unaff_RBP + -0x11);
        puVar16[2] = uVar9;
        uVar8 = unaff_RBP[-0xe];
        *(int16_t *)(puVar16 + 3) = uVar10;
        uVar15 = unaff_RBP[-0xc];
        *(uint64_t *)((int64_t)puVar16 + 0x1c) = uVar19;
        *(uint64_t *)((int64_t)puVar16 + 0x24) = uVar20;
        *(int32_t *)((int64_t)puVar16 + 0x2c) = unaff_RBP[-0xf];
        *(int32_t *)(puVar16 + 6) = uVar8;
        *(float *)((int64_t)puVar16 + 0x34) = fVar33;
        *(int32_t *)(puVar16 + 7) = uVar15;
      }
      lVar21 = (int64_t)(int)(unaff_R12D - 1);
      if (-1 < (int)(unaff_R12D - 1)) {
        if (2 < lVar21) {
          lVar28 = (int64_t)(int)unaff_R12D;
          uVar27 = lVar21 + 1U >> 2;
          lVar32 = (int64_t)(int)uVar31;
          puVar30 = (int32_t *)(lVar17 + -0x1c + lVar21 * 0x40);
          puVar23 = (int32_t *)(unaff_RSI + -8 + lVar21 * 4);
          lVar21 = lVar21 + uVar27 * -4;
          do {
            if (fVar33 < (float)puVar30[0x14]) {
              lVar1 = lVar32 + lVar28;
              uVar31 = uVar31 - 1;
              puVar26 = (int32_t *)((lVar1 + -1) * 0x40 + lVar17);
              lVar32 = lVar32 + -1;
              uVar8 = puVar26[1];
              uVar15 = puVar26[2];
              uVar18 = puVar26[3];
              puVar30[7] = *puVar26;
              puVar30[8] = uVar8;
              puVar30[9] = uVar15;
              puVar30[10] = uVar18;
              *(uint64_t *)(puVar30 + 0xb) = *(uint64_t *)(puVar26 + 4);
              *(int16_t *)(puVar30 + 0xd) = *(int16_t *)(puVar26 + 6);
              puVar30[0xe] = puVar26[7];
              puVar30[0xf] = puVar26[8];
              puVar30[0x10] = puVar26[9];
              puVar30[0x11] = puVar26[10];
              puVar30[0x12] = puVar26[0xb];
              puVar30[0x13] = puVar26[0xc];
              puVar30[0x14] = puVar26[0xd];
              puVar30[0x15] = puVar26[0xe];
              fVar33 = (float)unaff_RBP[-0xd];
              puVar23[2] = *(int32_t *)(unaff_RSI + -4 + lVar1 * 4);
            }
            if (fVar33 < (float)puVar30[4]) {
              lVar1 = lVar32 + lVar28;
              uVar31 = uVar31 - 1;
              puVar26 = (int32_t *)((lVar1 + -1) * 0x40 + lVar17);
              lVar32 = lVar32 + -1;
              uVar8 = puVar26[1];
              uVar15 = puVar26[2];
              uVar18 = puVar26[3];
              puVar30[-9] = *puVar26;
              puVar30[-8] = uVar8;
              puVar30[-7] = uVar15;
              puVar30[-6] = uVar18;
              *(uint64_t *)(puVar30 + -5) = *(uint64_t *)(puVar26 + 4);
              *(int16_t *)(puVar30 + -3) = *(int16_t *)(puVar26 + 6);
              puVar30[-2] = puVar26[7];
              puVar30[-1] = puVar26[8];
              *puVar30 = puVar26[9];
              puVar30[1] = puVar26[10];
              puVar30[2] = puVar26[0xb];
              puVar30[3] = puVar26[0xc];
              puVar30[4] = puVar26[0xd];
              puVar30[5] = puVar26[0xe];
              fVar33 = (float)unaff_RBP[-0xd];
              puVar23[1] = *(int32_t *)(unaff_RSI + -4 + lVar1 * 4);
            }
            if (fVar33 < (float)puVar30[-0xc]) {
              lVar1 = lVar32 + lVar28;
              uVar31 = uVar31 - 1;
              puVar26 = (int32_t *)((lVar1 + -1) * 0x40 + lVar17);
              lVar32 = lVar32 + -1;
              uVar8 = puVar26[1];
              uVar15 = puVar26[2];
              uVar18 = puVar26[3];
              puVar30[-0x19] = *puVar26;
              puVar30[-0x18] = uVar8;
              puVar30[-0x17] = uVar15;
              puVar30[-0x16] = uVar18;
              *(uint64_t *)(puVar30 + -0x15) = *(uint64_t *)(puVar26 + 4);
              *(int16_t *)(puVar30 + -0x13) = *(int16_t *)(puVar26 + 6);
              puVar30[-0x12] = puVar26[7];
              puVar30[-0x11] = puVar26[8];
              puVar30[-0x10] = puVar26[9];
              puVar30[-0xf] = puVar26[10];
              puVar30[-0xe] = puVar26[0xb];
              puVar30[-0xd] = puVar26[0xc];
              puVar30[-0xc] = puVar26[0xd];
              puVar30[-0xb] = puVar26[0xe];
              fVar33 = (float)unaff_RBP[-0xd];
              *puVar23 = *(int32_t *)(unaff_RSI + -4 + lVar1 * 4);
            }
            if (fVar33 < (float)puVar30[-0x1c]) {
              lVar1 = lVar32 + lVar28;
              uVar31 = uVar31 - 1;
              puVar26 = (int32_t *)((lVar1 + -1) * 0x40 + lVar17);
              lVar32 = lVar32 + -1;
              uVar8 = puVar26[1];
              uVar15 = puVar26[2];
              uVar18 = puVar26[3];
              puVar30[-0x29] = *puVar26;
              puVar30[-0x28] = uVar8;
              puVar30[-0x27] = uVar15;
              puVar30[-0x26] = uVar18;
              *(uint64_t *)(puVar30 + -0x25) = *(uint64_t *)(puVar26 + 4);
              *(int16_t *)(puVar30 + -0x23) = *(int16_t *)(puVar26 + 6);
              puVar30[-0x22] = puVar26[7];
              puVar30[-0x21] = puVar26[8];
              puVar30[-0x20] = puVar26[9];
              puVar30[-0x1f] = puVar26[10];
              puVar30[-0x1e] = puVar26[0xb];
              puVar30[-0x1d] = puVar26[0xc];
              puVar30[-0x1c] = puVar26[0xd];
              puVar30[-0x1b] = puVar26[0xe];
              fVar33 = (float)unaff_RBP[-0xd];
              puVar23[-1] = *(int32_t *)(unaff_RSI + -4 + lVar1 * 4);
            }
            puVar23 = puVar23 + -4;
            puVar30 = puVar30 + -0x40;
            uVar27 = uVar27 - 1;
            unaff_R15D = local_buffer_60;
          } while (uVar27 != 0);
        }
        if (-1 < lVar21) {
          puVar23 = (int32_t *)(lVar17 + 0x24 + lVar21 * 0x40);
          lVar28 = (int64_t)(int)uVar31;
          do {
            if (fVar33 < (float)puVar23[4]) {
              lVar32 = lVar28 + (int)unaff_R12D;
              uVar31 = uVar31 - 1;
              puVar30 = (int32_t *)((lVar32 + -1) * 0x40 + lVar17);
              lVar28 = lVar28 + -1;
              uVar8 = puVar30[1];
              uVar15 = puVar30[2];
              uVar18 = puVar30[3];
              puVar23[-9] = *puVar30;
              puVar23[-8] = uVar8;
              puVar23[-7] = uVar15;
              puVar23[-6] = uVar18;
              *(uint64_t *)(puVar23 + -5) = *(uint64_t *)(puVar30 + 4);
              *(int16_t *)(puVar23 + -3) = *(int16_t *)(puVar30 + 6);
              puVar23[-2] = puVar30[7];
              puVar23[-1] = puVar30[8];
              *puVar23 = puVar30[9];
              puVar23[1] = puVar30[10];
              puVar23[2] = puVar30[0xb];
              puVar23[3] = puVar30[0xc];
              puVar23[4] = puVar30[0xd];
              puVar23[5] = puVar30[0xe];
              fVar33 = (float)unaff_RBP[-0xd];
              *(int32_t *)(unaff_RSI + lVar21 * 4) = *(int32_t *)(unaff_RSI + -4 + lVar32 * 4)
              ;
            }
            puVar23 = puVar23 + -0x10;
            lVar21 = lVar21 + -1;
          } while (-1 < lVar21);
        }
      }
    }
    unaff_RDI = *(int64_t **)(unaff_RBP + 0x78);
    local_buffer_60 = unaff_R15D + 1;
    unaff_R12D = unaff_R12D + uVar31;
    unaff_RBX = (int64_t *)0x0;
    unaff_R15D = local_buffer_60;
  } while (local_buffer_60 < local_buffer_70);
  return unaff_R12D;
}
int32_t function_6b9003(void)
{
  int32_t unaff_R12D;
  return unaff_R12D;
}