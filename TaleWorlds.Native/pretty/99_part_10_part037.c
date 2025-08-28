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



undefined1
FUN_1806bef10(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,undefined4 *param_5,
             undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined4 auStackX_10 [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  float fStack_28;
  
  auStackX_10[0] = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_74 = 0x3f800000;
  uStack_70 = 0x3f800000;
  uStack_68 = 0;
  uStack_60 = 0x3f80000000000000;
  if (param_5 == (undefined4 *)0x0) {
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
    puVar3 = &UNK_18094b880;
LAB_1806bf06b:
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar2,4,&UNK_18094b6b0,uVar5,puVar3,&UNK_18094b7f8);
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
      puVar3 = &UNK_18094b820;
      goto LAB_1806bf06b;
    }
    if (fStack_28 != 0.0) {
      cVar1 = FUN_1806bb2e0(&uStack_58,&uStack_78,&uStack_68,auStackX_10,&uStack_88,
                            param_5 != (undefined4 *)0x0,param_2,&UNK_18094b7f8);
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



undefined1 FUN_1806bf100(void)

{
  _incRefCount_Foundation_shdfnd_physx__SAXXZ();
  return 1;
}






// 函数: void FUN_1806bf130(longlong *param_1)
void FUN_1806bf130(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x8b);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c0c8;
  }
  (**(code **)(*param_1 + 0x20))(param_1,8,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x8c);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c100;
  }
  (**(code **)(*param_1 + 0x20))(param_1,7,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x8d);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c138;
  }
  (**(code **)(*param_1 + 0x20))(param_1,3,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x8e);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c170;
  }
  (**(code **)(*param_1 + 0x20))(param_1,4,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x8f);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c1a8;
  }
  (**(code **)(*param_1 + 0x20))(param_1,1,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x90);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c1e0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,2,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x91);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c218;
  }
  (**(code **)(*param_1 + 0x20))(param_1,6,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x92);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c250;
  }
  (**(code **)(*param_1 + 0x20))(param_1,5,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x93);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c288;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xb,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x94);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c2c0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xc,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x95);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c2f8;
  }
  (**(code **)(*param_1 + 0x20))(param_1,10,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x97);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c3a0;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x103,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x98);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c368;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x104,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x99);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c330;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x105,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x9a);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c3d8;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x102,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x9b);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c410;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x101,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c678,&UNK_18094c630,0x9c);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)PxGetFoundation();
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar2[1] = uVar3;
    *puVar2 = &UNK_18094c448;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0x100,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c690,&UNK_18094c630,0x9f);
  *puVar2 = &UNK_18094c480;
  puVar2[1] = &UNK_18094c6b0;
  (**(code **)*param_1)(param_1,0x103,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c690,&UNK_18094c630,0xa0);
  *puVar2 = &UNK_18094c4c8;
  puVar2[1] = &UNK_18094c6c0;
  (**(code **)*param_1)(param_1,0x104,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c690,&UNK_18094c630,0xa1);
  *puVar2 = &UNK_18094c510;
  puVar2[1] = &UNK_18094c6d0;
  (**(code **)*param_1)(param_1,0x105,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c690,&UNK_18094c630,0xa2);
  *puVar2 = &UNK_18094c558;
  puVar2[1] = &UNK_18094c6d8;
  (**(code **)*param_1)(param_1,0x102,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c690,&UNK_18094c630,0xa3);
  *puVar2 = &UNK_18094c5a0;
  puVar2[1] = &UNK_18094c6e8;
  (**(code **)*param_1)(param_1,0x101,puVar2);
  plVar1 = (longlong *)PxGetFoundation();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,0x10,&UNK_18094c690,&UNK_18094c630,0xa4);
  *puVar2 = &UNK_18094c5e8;
  puVar2[1] = &UNK_18094c6f8;
                    // WARNING: Could not recover jumptable at 0x0001806bfaaf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)*param_1)(param_1,0x100,puVar2);
  return;
}






// 函数: void FUN_1806bfac0(longlong *param_1)
void FUN_1806bfac0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x103);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x104);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x105);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x102);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x101);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,0x100);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    plVar2 = (longlong *)PxGetFoundation();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2,plVar1);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,8);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,7);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,3);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,4);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,1);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,2);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,6);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,5);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xb);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xc);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,10);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x103);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x104);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x105);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x102);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x101);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0x100);
  if (lVar3 != 0) {
    plVar1 = (longlong *)PxGetFoundation();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar3);
  }
  return;
}






// 函数: void FUN_1806bffb0(longlong *param_1,undefined8 *param_2)
void FUN_1806bffb0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iStackX_8;
  undefined4 uStackX_c;
  undefined8 uStackX_10;
  undefined1 auStackX_20 [8];
  
  iStackX_8 = 0x15b;
  piVar3 = &iStackX_8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar3 = (int *)param_1[5];
  }
  FUN_1806d7170(param_1,*param_2);
  FUN_1806d7170(param_1,param_2[2]);
  (*(code *)param_2[5])(param_1[2],&uStackX_10,auStackX_20);
  puVar4 = &UNK_18094c9c0;
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar5 = &UNK_18094c9c0;
  }
  else {
    puVar5 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  FUN_1806d83a0(param_1[1],param_1[4],param_1[3],puVar5,uStackX_10);
  *piVar3 = *piVar3 + 1;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar2 = *param_1;
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  FUN_1806d7170(param_1,param_2[3]);
  (*(code *)param_2[5])(param_1[2],&uStackX_10,&iStackX_8);
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 != 0) {
    puVar4 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  FUN_1806d83a0(param_1[1],param_1[4],param_1[3],puVar4,CONCAT44(uStackX_c,iStackX_8));
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar2 = *param_1;
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar2 + 8) + 8 + (ulonglong)(*(int *)(lVar2 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar2 = *param_1;
    }
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c0130(longlong *param_1,undefined8 *param_2)
void FUN_1806c0130(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  char **ppcVar8;
  undefined4 uVar9;
  char *pcStackX_8;
  char *apcStackX_10 [2];
  undefined1 auStackX_20 [8];
  
  ppcVar8 = &pcStackX_8;
  if ((char **)param_1[0xb] != (char **)0x0) {
    ppcVar8 = (char **)param_1[0xb];
  }
  pcStackX_8 = (char *)CONCAT44(pcStackX_8._4_4_,0x160);
  FUN_1806d7000(param_1,*param_2);
  FUN_1806d7000(param_1,param_2[2]);
  puVar6 = &UNK_18094c9c0;
  apcStackX_10[0] = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],puVar5);
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
      puVar6 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
    }
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],puVar6);
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
    uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *param_1;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (undefined1)param_1[9];
    if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar4;
  }
  return;
}






