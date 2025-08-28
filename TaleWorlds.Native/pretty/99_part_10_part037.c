#include "TaleWorlds.Native.Split.h"

// 99_part_10_part037.c - 5 个函数

// 函数: void FUN_1806be960(float *param_1,float *param_2)
void FUN_1806be960(float *param_1,float *param_2)

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
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  
  fVar5 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = param_2[3];
  fVar4 = *param_2;
  fVar7 = fVar4 + fVar4;
  fVar9 = fVar2 + fVar2;
  fStack_a8 = (fVar5 + fVar5) * fVar5;
  fStack_ac = (fVar5 + fVar5) * fVar3;
  fStack_98 = 1.0 - fVar4 * fVar7;
  fStack_b0 = fVar7 * fVar5 - fVar9 * fVar3;
  fStack_a0 = fVar9 * fVar3 + fVar7 * fVar5;
  fStack_b8 = (1.0 - fVar9 * fVar2) - fStack_a8;
  fStack_a4 = fVar9 * fVar5 + fVar7 * fVar3;
  fStack_9c = fVar9 * fVar5 - fVar7 * fVar3;
  fStack_b4 = fStack_ac + fVar7 * fVar2;
  fStack_ac = fVar7 * fVar2 - fStack_ac;
  fStack_a8 = fStack_98 - fStack_a8;
  fStack_98 = fStack_98 - fVar9 * fVar2;
  FUN_1806bce00(fStack_a8,&fStack_b8);
  fVar5 = param_2[4];
  if (((fVar5 != 0.0) || (param_2[5] != 0.0)) || (param_2[6] != 0.0)) {
    fVar2 = param_1[0xb];
    fVar9 = fVar2 + param_2[6];
    fVar3 = param_1[10];
    fVar6 = -fVar3;
    fVar4 = param_1[9];
    fVar5 = fVar4 + fVar5;
    fVar7 = fVar3 + param_2[5];
    fVar8 = -fVar4;
    fVar10 = -fVar2;
    if (((fVar5 == 0.0) && (fVar7 == 0.0)) && (fVar9 == 0.0)) {
      fVar5 = param_1[0xc];
      *param_1 = (fVar2 * fVar10 + fVar6 * fVar3) * fVar5 + *param_1;
      param_1[1] = fVar8 * fVar6 * fVar5 + param_1[1];
      param_1[2] = fVar4 * fVar2 * fVar5 + param_1[2];
      param_1[3] = fVar3 * fVar4 * fVar5 + param_1[3];
      param_1[4] = (fVar2 * fVar10 + fVar4 * fVar8) * fVar5 + param_1[4];
      param_1[5] = fVar6 * fVar10 * fVar5 + param_1[5];
      param_1[7] = fVar2 * fVar3 * fVar5 + param_1[7];
      param_1[6] = fVar10 * fVar8 * fVar5 + param_1[6];
      param_1[8] = (fVar6 * fVar3 + fVar4 * fVar8) * fVar5 + param_1[8];
    }
    else {
      fVar1 = param_1[0xc];
      *param_1 = fVar1 * ((fVar3 * fVar6 + fVar2 * fVar10) - (-(fVar9 * fVar9) + -(fVar7 * fVar7)))
                 + *param_1;
      param_1[1] = fVar1 * (fVar6 * fVar8 - fVar7 * fVar5) + param_1[1];
      param_1[2] = (fVar4 * fVar2 - fVar9 * fVar5) * fVar1 + param_1[2];
      param_1[3] = fVar1 * (fVar3 * fVar4 - fVar7 * fVar5) + param_1[3];
      param_1[4] = fVar1 * ((fVar4 * fVar8 + fVar2 * fVar10) - (-(fVar5 * fVar5) + -(fVar9 * fVar9))
                           ) + param_1[4];
      param_1[5] = (fVar10 * fVar6 - fVar7 * fVar9) * fVar1 + param_1[5];
      param_1[6] = fVar1 * (fVar8 * fVar10 - fVar5 * fVar9) + param_1[6];
      param_1[7] = fVar1 * (fVar2 * fVar3 - fVar9 * fVar7) + param_1[7];
      param_1[8] = ((fVar3 * fVar6 + fVar4 * fVar8) - (-(fVar5 * fVar5) + -(fVar7 * fVar7))) * fVar1
                   + param_1[8];
    }
    param_1[9] = param_1[9] + param_2[4];
    param_1[10] = param_2[5] + param_1[10];
    param_1[0xb] = param_2[6] + param_1[0xb];
  }
  return;
}



float * FUN_1806beae0(float *param_1,float *param_2,float *param_3)

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
  
  fVar7 = *param_2;
  fVar16 = param_2[1];
  fVar10 = fVar7 + fVar7;
  fVar1 = param_2[3];
  fVar2 = param_2[2];
  fVar17 = fVar16 + fVar16;
  fVar3 = (param_3[4] - param_3[1]) * 0.5;
  fVar4 = (param_3[5] - param_3[2]) * 0.5;
  fVar5 = (fVar2 + fVar2) * fVar1;
  fVar18 = (fVar2 + fVar2) * fVar2;
  fVar19 = (param_3[5] + param_3[2]) * 0.5;
  fVar13 = 1.0 - fVar7 * fVar10;
  fVar6 = (param_3[4] + param_3[1]) * 0.5;
  fVar14 = (param_3[3] + *param_3) * 0.5;
  fVar6 = fVar6 + fVar6;
  fVar19 = fVar19 + fVar19;
  fVar14 = fVar14 + fVar14;
  fVar11 = fVar1 * fVar1 - 0.5;
  fVar8 = fVar6 * fVar16 + fVar14 * fVar7 + fVar2 * fVar19;
  fVar15 = (fVar19 * fVar16 - fVar2 * fVar6) * fVar1 + fVar11 * fVar14 + fVar8 * fVar7 + param_2[4];
  fVar9 = (param_3[3] - *param_3) * 0.5;
  fVar12 = (fVar2 * fVar14 - fVar19 * fVar7) * fVar1 + fVar11 * fVar6 + fVar8 * fVar16 + param_2[5];
  fVar7 = (fVar6 * fVar7 - fVar14 * fVar16) * fVar1 + fVar11 * fVar19 + fVar2 * fVar8 + param_2[6];
  fVar6 = ABS((fVar10 * fVar16 - fVar5) * fVar3) + ABS(((1.0 - fVar17 * fVar16) - fVar18) * fVar9) +
          ABS((fVar17 * fVar1 + fVar10 * fVar2) * fVar4);
  fVar5 = ABS((fVar13 - fVar18) * fVar3) + ABS((fVar5 + fVar10 * fVar16) * fVar9) +
          ABS((fVar17 * fVar2 - fVar10 * fVar1) * fVar4);
  fVar16 = ABS((fVar17 * fVar2 + fVar10 * fVar1) * fVar3) +
           ABS((fVar10 * fVar2 - fVar17 * fVar1) * fVar9) + ABS((fVar13 - fVar17 * fVar16) * fVar4);
  *param_1 = fVar15 - fVar6;
  param_1[2] = fVar7 - fVar16;
  param_1[1] = fVar12 - fVar5;
  param_1[3] = fVar6 + fVar15;
  param_1[4] = fVar5 + fVar12;
  param_1[5] = fVar16 + fVar7;
  return param_1;
}



int8_t
FUN_1806bef10(uint64_t param_1,int64_t *param_2,int64_t param_3,int param_4,int32_t *param_5,
             int8_t param_6)

{
  char cVar1;
  uint64_t uVar2;
  void *puVar3;
  int8_t uVar4;
  uint64_t uVar5;
  int32_t auStackX_10 [2];
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  float fStack_28;
  
  auStackX_10[0] = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_74 = 0x3f800000;
  uStack_70 = 0x3f800000;
  uStack_68 = 0;
  uStack_60 = 0x3f80000000000000;
  if (param_5 == (int32_t *)0x0) {
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
  }
  else {
    uStack_84 = param_5[1];
    uStack_80 = param_5[2];
    uStack_88 = *param_5;
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    uVar5 = 0x120;
    puVar3 = &unknown_var_7504_ptr;
LAB_1806bf06b:
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar2,4,&unknown_var_7040_ptr,uVar5,puVar3,&unknown_var_7368_ptr);
  }
  else {
    fStack_28 = 0.0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    cVar1 = FUN_1806bb790(0,0,uStack_80,0,param_4,param_6,&uStack_58);
    if (cVar1 == '\0') {
      uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      uVar5 = 0x118;
      puVar3 = &unknown_var_7408_ptr;
      goto LAB_1806bf06b;
    }
    if (fStack_28 != 0.0) {
      cVar1 = FUN_1806bb2e0(&uStack_58,&uStack_78,&uStack_68,auStackX_10,&uStack_88,
                            param_5 != (int32_t *)0x0,param_2,&unknown_var_7368_ptr);
      if (cVar1 != '\0') {
        uVar4 = 1;
        goto LAB_1806bf084;
      }
    }
  }
  uVar4 = 0;
LAB_1806bf084:
  (**(code **)(*param_2 + 0xe0))(param_2,auStackX_10[0]);
  (**(code **)(*param_2 + 0xf8))(param_2,&uStack_78);
  uStack_58 = uStack_68;
  uStack_50 = uStack_60;
  uStack_40 = CONCAT44(uStack_40._4_4_,uStack_80);
  uStack_48 = CONCAT44(uStack_84,uStack_88);
  (**(code **)(*param_2 + 0xd0))(param_2,&uStack_58);
  return uVar4;
}



int8_t FUN_1806bf100(void)

{
  _incRefCount_Foundation_shdfnd_physx__SAXXZ();
  return 1;
}






// 函数: void FUN_1806bf130(int64_t *param_1)
void FUN_1806bf130(int64_t *param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x8b);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_9624_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,8,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x8c);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_9680_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,7,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x8d);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_9736_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,3,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x8e);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_9792_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,4,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x8f);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_9848_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,1,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x90);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_9904_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,2,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x91);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_9960_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,6,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x92);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_16_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,5,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x93);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_72_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xb,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x94);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_128_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xc,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x95);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_184_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,10,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x97);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_352_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x103,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x98);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_296_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x104,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x99);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_240_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x105,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x9a);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_408_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x102,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x9b);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_464_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x101,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1080_ptr,&unknown_var_1008_ptr,0x9c);
  if (puVar2 == (uint64_t *)0x0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    plVar1 = (int64_t *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &unknown_var_520_ptr;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x100,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1104_ptr,&unknown_var_1008_ptr,0x9f);
  *puVar2 = &unknown_var_576_ptr;
  puVar2[1] = &unknown_var_1136_ptr;
  (**(code **)*param_1)(param_1,0x103,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1104_ptr,&unknown_var_1008_ptr,0xa0);
  *puVar2 = &unknown_var_648_ptr;
  puVar2[1] = &unknown_var_1152_ptr;
  (**(code **)*param_1)(param_1,0x104,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1104_ptr,&unknown_var_1008_ptr,0xa1);
  *puVar2 = &system_state_ptr;
  puVar2[1] = &unknown_var_1168_ptr;
  (**(code **)*param_1)(param_1,0x105,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1104_ptr,&unknown_var_1008_ptr,0xa2);
  *puVar2 = &unknown_var_792_ptr;
  puVar2[1] = &unknown_var_1176_ptr;
  (**(code **)*param_1)(param_1,0x102,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1104_ptr,&unknown_var_1008_ptr,0xa3);
  *puVar2 = &unknown_var_864_ptr;
  puVar2[1] = &unknown_var_1192_ptr;
  (**(code **)*param_1)(param_1,0x101,puVar2);
  plVar1 = (int64_t *)PxGetFoundation();
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (uint64_t *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&unknown_var_1104_ptr,&unknown_var_1008_ptr,0xa4);
  *puVar2 = &unknown_var_936_ptr;
  puVar2[1] = &unknown_var_1208_ptr;
                    // WARNING: Could not recover jumptable at 0x0001806bfaaf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*param_1)(param_1,0x100,puVar2);
  return;
}






// 函数: void FUN_1806bfac0(int64_t *param_1)
void FUN_1806bfac0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  plVar1 = (int64_t *)(**(code **)(*param_1 + 8))(param_1,0x103);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (int64_t *)PxGetFoundation();
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (int64_t *)(**(code **)(*param_1 + 8))(param_1,0x104);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (int64_t *)PxGetFoundation();
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (int64_t *)(**(code **)(*param_1 + 8))(param_1,0x105);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (int64_t *)PxGetFoundation();
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (int64_t *)(**(code **)(*param_1 + 8))(param_1,0x102);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (int64_t *)PxGetFoundation();
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (int64_t *)(**(code **)(*param_1 + 8))(param_1,0x101);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (int64_t *)PxGetFoundation();
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (int64_t *)(**(code **)(*param_1 + 8))(param_1,0x100);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (int64_t *)PxGetFoundation();
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,8);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,7);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,3);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,4);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,1);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,2);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,6);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,5);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xb);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xc);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,10);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x103);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x104);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x105);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x102);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x101);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x100);
  if (lVar3 != 0) {
    plVar1 = (int64_t *)PxGetFoundation();
    plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  return;
}






// 函数: void FUN_1806bffb0(int64_t *param_1,uint64_t *param_2)
void FUN_1806bffb0(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  int *piVar3;
  void *puVar4;
  void *puVar5;
  int iStackX_8;
  int32_t uStackX_c;
  uint64_t uStackX_10;
  int8_t auStackX_20 [8];
  
  iStackX_8 = 0x15b;
  piVar3 = &iStackX_8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar3 = (int *)param_1[5];
  }
  FUN_1806d7170(param_1,*param_2);
  FUN_1806d7170(param_1,param_2[2]);
  (*(code *)param_2[5])(param_1[2],&uStackX_10,auStackX_20);
  puVar4 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar5 = &unknown_var_1920_ptr;
  }
  else {
    puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d83a0(param_1[1],param_1[4],param_1[3],puVar5,uStackX_10);
  *piVar3 = *piVar3 + 1;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar2 + 8) + 8 + (uint64_t)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar2 = *param_1;
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  FUN_1806d7170(param_1,param_2[3]);
  (*(code *)param_2[5])(param_1[2],&uStackX_10,&iStackX_8);
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 != 0) {
    puVar4 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d83a0(param_1[1],param_1[4],param_1[3],puVar4,CONCAT44(uStackX_c,iStackX_8));
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar2 + 8) + 8 + (uint64_t)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar2 = *param_1;
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar2 + 8) + 8 + (uint64_t)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar2 = *param_1;
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c0130(int64_t *param_1,uint64_t *param_2)
void FUN_1806c0130(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  char cVar2;
  uint64_t uVar3;
  int8_t uVar4;
  void *puVar5;
  void *puVar6;
  int64_t lVar7;
  char **ppcVar8;
  int32_t uVar9;
  char *pcStackX_8;
  char *apcStackX_10 [2];
  int8_t auStackX_20 [8];
  
  ppcVar8 = &pcStackX_8;
  if ((char **)param_1[0xb] != (char **)0x0) {
    ppcVar8 = (char **)param_1[0xb];
  }
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,0x160);
  FUN_1806d7000(param_1,*param_2);
  FUN_1806d7000(param_1,param_2[2]);
  puVar6 = &unknown_var_1920_ptr;
  apcStackX_10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &unknown_var_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar5);
    if (((cVar2 != '\0') && (apcStackX_10[0] != (char *)0x0)) && (*apcStackX_10[0] != '\0')) {
      uVar9 = FUN_1806d80c0(apcStackX_10[0],auStackX_20);
      lVar7 = param_1[6];
      (*(code *)param_2[5])(lVar7,auStackX_20);
      (*(code *)param_2[4])(lVar7,uVar9,apcStackX_10[0]._0_4_);
    }
  }
  *(int *)ppcVar8 = *(int *)ppcVar8 + 1;
  FUN_1806d6f60(param_1);
  FUN_1806d7000(param_1,param_2[3]);
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 != 0) {
      puVar6 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar6);
    if (((cVar2 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar9 = FUN_1806d80c0(pcStackX_8,apcStackX_10);
      lVar7 = param_1[6];
      (*(code *)param_2[5])(lVar7,&pcStackX_8);
      (*(code *)param_2[4])(lVar7,pcStackX_8._0_4_,uVar9);
    }
  }
  FUN_1806d6f60(param_1);
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar4;
  }
  return;
}






