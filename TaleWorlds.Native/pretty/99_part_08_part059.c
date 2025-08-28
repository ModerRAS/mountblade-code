#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part059.c - 5 个函数

// 函数: void FUN_1805b1d30(longlong param_1,uint64_t param_2)
void FUN_1805b1d30(longlong param_1,uint64_t param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int32_t uStack_14;
  
  if ((*(char *)(param_1 + 0x50) != '\0') && (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0xd0)))
  {
    *(int32_t *)(param_1 + 0xc4) = 0;
    return;
  }
  lVar2 = func_0x0001805b23d0(param_1,*(int32_t *)(param_1 + 0xd0),param_2);
  if (lVar2 == 0) {
    *(uint64_t *)(param_1 + 0x2c) = 0;
    *(uint64_t *)(param_1 + 0x34) = 0;
    *(uint64_t *)(param_1 + 0x84) = 0;
    *(uint64_t *)(param_1 + 0x8c) = 0;
    uStack_14 = uStack_14 & 0xffffff00;
    *(uint64_t *)(param_1 + 0x3c) = 0;
    *(uint64_t *)(param_1 + 0x44) = 0;
    *(uint64_t *)(param_1 + 0x94) = 0;
    *(uint64_t *)(param_1 + 0x9c) = 0;
    *(ulonglong *)(param_1 + 0x4c) = (ulonglong)uStack_14 << 0x20;
    *(ulonglong *)(param_1 + 0xa4) = (ulonglong)uStack_14 << 0x20;
    *(int32_t *)(param_1 + 0x54) = 0xffffffff;
    *(int32_t *)(param_1 + 0xac) = 0xffffffff;
  }
  else {
    uVar1 = *(uint64_t *)(lVar2 + 0x18);
    *(uint64_t *)(param_1 + 0x2c) = *(uint64_t *)(lVar2 + 0x10);
    *(uint64_t *)(param_1 + 0x34) = uVar1;
    uVar1 = *(uint64_t *)(lVar2 + 0x28);
    *(uint64_t *)(param_1 + 0x3c) = *(uint64_t *)(lVar2 + 0x20);
    *(uint64_t *)(param_1 + 0x44) = uVar1;
    *(uint64_t *)(param_1 + 0x4c) = *(uint64_t *)(lVar2 + 0x30);
    *(int32_t *)(param_1 + 0x54) = *(int32_t *)(lVar2 + 0x38);
    uVar1 = *(uint64_t *)(lVar2 + 0x44);
    *(uint64_t *)(param_1 + 0x84) = *(uint64_t *)(lVar2 + 0x3c);
    *(uint64_t *)(param_1 + 0x8c) = uVar1;
    uVar1 = *(uint64_t *)(lVar2 + 0x54);
    *(uint64_t *)(param_1 + 0x94) = *(uint64_t *)(lVar2 + 0x4c);
    *(uint64_t *)(param_1 + 0x9c) = uVar1;
    *(uint64_t *)(param_1 + 0xa4) = *(uint64_t *)(lVar2 + 0x5c);
    *(int32_t *)(param_1 + 0xac) = *(int32_t *)(lVar2 + 100);
  }
  *(int32_t *)(param_1 + 0xc4) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1805b1e30(longlong param_1,int32_t param_2,int32_t *param_3,uint64_t param_4,
             char param_5,float param_6,float param_7,int8_t param_8)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  char cVar6;
  int32_t uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uStack_84;
  int32_t uStack_78;
  int iStack_74;
  uint64_t uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  int8_t uStack_50;
  int8_t uStack_4f;
  int16_t uStack_4e;
  int8_t uStack_4c;
  
  if (param_5 == '\0') {
    if (param_3 == (int32_t *)0x0) goto LAB_1805b1e78;
    iVar12 = param_3[0xf];
  }
  else if (param_3 == (int32_t *)0x0) {
LAB_1805b1e78:
    iVar12 = -1;
  }
  else {
    iVar12 = param_3[0xe];
  }
  if (iVar12 == -1) {
    return 0;
  }
  if (param_3[0x41] == 1) {
    fVar15 = 0.0;
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x8f8) + 0x9e8);
    if (lVar10 == 0) {
      fVar13 = 1.0;
    }
    else {
      fVar15 = 0.05;
      fVar13 = *(float *)((longlong)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x8c +
                         *(longlong *)(lVar10 + 0xd0));
      if (fVar13 < 0.05) goto LAB_1805b1f10;
    }
    fVar15 = fVar13;
    if (0.95 <= fVar13) {
      fVar15 = 0.95;
    }
  }
LAB_1805b1f10:
  uVar7 = FUN_18053a410(&system_data_5f30,
                        *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x590) + 0xac)
                        ,iVar12);
  lVar9 = FUN_18058d7f0(&system_data_61e0,uVar7,fVar15);
  lVar10 = *(longlong *)(param_1 + 0xb8);
  iVar1 = param_3[0x41];
  fStack_58 = 1.0;
  fVar13 = *(float *)(lVar9 + 0x188);
  lVar2 = *(longlong *)(*(longlong *)(lVar10 + 0x8f8) + 0x9e8);
  if (lVar2 != 0) {
    lVar11 = (longlong)*(int *)(lVar2 + 0xf0) * 0xa0;
    if (iVar1 == 0) {
      iVar8 = *(int *)(lVar11 + 0x6c + *(longlong *)(lVar2 + 0xd0));
    }
    else {
      iVar8 = *(int *)(lVar11 + 0x68 + *(longlong *)(lVar2 + 0xd0));
    }
    fStack_58 = (float)iVar8 * 0.01;
  }
  if (iVar1 == 0) {
    fStack_58 = fStack_58 * *(float *)(lVar10 + 0x3a8);
  }
  else if (iVar1 == 1) {
    fStack_58 = fStack_58 * *(float *)(lVar10 + 0x3ac);
  }
  fStack_58 = fStack_58 * 0.25;
  uStack_70 = 0;
  uStack_4e = 0x100;
  uStack_50 = param_8;
  uStack_4f = 1;
  uStack_4c = 1;
  fVar14 = (1.0 - param_6) - (fStack_58 * *(float *)(lVar9 + 0x1e4) * param_7) / fVar13;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  _fStack_68 = CONCAT44(fVar15,fVar14);
  fVar15 = (1.0 - fVar14) * fVar13 * (1.0 / fStack_58);
  fVar13 = fVar15 - fVar13 * param_6 * (1.0 / fStack_58);
  _fStack_60 = CONCAT44(fVar13 * fStack_58,fStack_58);
  uStack_54 = 0x3e99999a;
  fStack_58 = ((fVar15 - fVar13) - system_system_config) * fStack_58;
  if (fStack_58 <= 0.0) {
    fStack_58 = 0.0;
  }
  uStack_78 = param_2;
  iStack_74 = iVar12;
  cVar6 = FUN_18051ec50(lVar10,&uStack_78);
  if (cVar6 == '\0') {
    return 0;
  }
  if ((system_status_flag != 1) && (system_status_flag != 4)) {
    uVar7 = FUN_1805b2220(param_1,*param_3,0);
    lVar10 = func_0x0001805b23d0(param_1,uVar7,param_4);
    if (lVar10 == 0) {
      *(uint64_t *)(param_1 + 0x2c) = 0;
      *(uint64_t *)(param_1 + 0x34) = 0;
      *(uint64_t *)(param_1 + 0x84) = 0;
      *(uint64_t *)(param_1 + 0x8c) = 0;
      *(uint64_t *)(param_1 + 0x3c) = 0;
      *(uint64_t *)(param_1 + 0x44) = 0;
      uStack_84 = uStack_84 & 0xffffff00;
      *(ulonglong *)(param_1 + 0x4c) = (ulonglong)uStack_84 << 0x20;
      *(uint64_t *)(param_1 + 0x94) = 0;
      *(uint64_t *)(param_1 + 0x9c) = 0;
      uStack_54 = uStack_54 & 0xffffff00;
      *(ulonglong *)(param_1 + 0xa4) = (ulonglong)uStack_54 << 0x20;
      *(int32_t *)(param_1 + 0xac) = 0xffffffff;
      *(float *)(param_1 + 0xb0) = fVar15;
      *(int32_t *)(param_1 + 0x54) = 0xffffffff;
      *(int32_t *)(param_1 + 0xd0) = 0xffffffff;
    }
    else {
      uVar5 = *(uint64_t *)(lVar10 + 0x18);
      *(uint64_t *)(param_1 + 0x2c) = *(uint64_t *)(lVar10 + 0x10);
      *(uint64_t *)(param_1 + 0x34) = uVar5;
      uVar5 = *(uint64_t *)(lVar10 + 0x28);
      *(uint64_t *)(param_1 + 0x3c) = *(uint64_t *)(lVar10 + 0x20);
      *(uint64_t *)(param_1 + 0x44) = uVar5;
      *(uint64_t *)(param_1 + 0x4c) = *(uint64_t *)(lVar10 + 0x30);
      *(int32_t *)(param_1 + 0x54) = *(int32_t *)(lVar10 + 0x38);
      uVar5 = *(uint64_t *)(lVar10 + 0x44);
      *(uint64_t *)(param_1 + 0x84) = *(uint64_t *)(lVar10 + 0x3c);
      *(uint64_t *)(param_1 + 0x8c) = uVar5;
      uVar7 = *(int32_t *)(lVar10 + 0x50);
      uVar3 = *(int32_t *)(lVar10 + 0x54);
      uVar4 = *(int32_t *)(lVar10 + 0x58);
      *(int32_t *)(param_1 + 0x94) = *(int32_t *)(lVar10 + 0x4c);
      *(int32_t *)(param_1 + 0x98) = uVar7;
      *(int32_t *)(param_1 + 0x9c) = uVar3;
      *(int32_t *)(param_1 + 0xa0) = uVar4;
      *(uint64_t *)(param_1 + 0xa4) = *(uint64_t *)(lVar10 + 0x5c);
      uVar7 = *(int32_t *)(lVar10 + 100);
      *(float *)(param_1 + 0xb0) = fVar15;
      *(int32_t *)(param_1 + 0xac) = uVar7;
      iVar12 = *(int *)(lVar10 + 0x38);
      *(int *)(param_1 + 0xd0) = iVar12;
      if (iVar12 != -1) {
        func_0x0001805b2480(param_1);
        *(int32_t *)(param_1 + 0xc4) = 3;
        return 1;
      }
    }
  }
  *(int32_t *)(param_1 + 0xc4) = 3;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805b1ea5(uint64_t param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  char cVar7;
  int32_t uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint64_t uVar12;
  longlong lVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t unaff_ESI;
  int32_t *unaff_RDI;
  int32_t unaff_R15D;
  bool in_ZF;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  float fVar14;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  
  if (in_ZF) {
    fVar15 = 0.0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x8f8) + 0x9e8);
    fVar14 = unaff_XMM7_Da;
    if (lVar11 != 0) {
      fVar15 = 0.05;
      fVar14 = *(float *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x8c +
                         *(longlong *)(lVar11 + 0xd0));
      if (fVar14 < 0.05) goto LAB_1805b1f10;
    }
    fVar15 = fVar14;
    if (0.95 <= fVar14) {
      fVar15 = 0.95;
    }
  }
LAB_1805b1f10:
  uVar8 = FUN_18053a410(&system_data_5f30,*(int32_t *)(*(longlong *)(param_2 + 0x590) + 0xac),
                        unaff_ESI);
  lVar10 = FUN_18058d7f0(&system_data_61e0,uVar8,fVar15);
  lVar11 = *(longlong *)(unaff_RBX + 0xb8);
  iVar2 = unaff_RDI[0x41];
  auVar17._4_4_ = unaff_XMM7_Db;
  auVar17._0_4_ = unaff_XMM7_Da;
  auVar17._8_4_ = unaff_XMM7_Dc;
  auVar17._12_4_ = unaff_XMM7_Dd;
  fVar14 = *(float *)(lVar10 + 0x188);
  lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x8f8) + 0x9e8);
  if (lVar3 != 0) {
    lVar13 = (longlong)*(int *)(lVar3 + 0xf0) * 0xa0;
    if (iVar2 == 0) {
      iVar9 = *(int *)(lVar13 + 0x6c + *(longlong *)(lVar3 + 0xd0));
    }
    else {
      iVar9 = *(int *)(lVar13 + 0x68 + *(longlong *)(lVar3 + 0xd0));
    }
    auVar17 = ZEXT416((uint)((float)iVar9 * 0.01));
  }
  if (iVar2 == 0) {
    auVar17._0_4_ = auVar17._0_4_ * *(float *)(lVar11 + 0x3a8);
  }
  else if (iVar2 == 1) {
    auVar17._0_4_ = auVar17._0_4_ * *(float *)(lVar11 + 0x3ac);
  }
  fVar16 = auVar17._0_4_ * 0.25;
  fVar1 = *(float *)(lVar10 + 0x1e4);
  *(uint64_t *)(unaff_RBP + -0x31) = 0;
  *(float *)(unaff_RBP + -0x25) = fVar15;
  *(float *)(unaff_RBP + -0x21) = fVar16;
  *(int16_t *)(unaff_RBP + -0xf) = 0x100;
  *(int32_t *)(unaff_RBP + -0x39) = unaff_R15D;
  *(int32_t *)(unaff_RBP + -0x35) = unaff_ESI;
  *(int8_t *)(unaff_RBP + -0x11) = *(int8_t *)(unaff_RBP + 0x7f);
  *(int8_t *)(unaff_RBP + -0x10) = 1;
  *(int8_t *)(unaff_RBP + -0xd) = 1;
  fVar15 = (unaff_XMM7_Da - *(float *)(unaff_RBP + 0x6f)) -
           (fVar16 * fVar1 * *(float *)(unaff_RBP + 0x77)) / fVar14;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  *(float *)(unaff_RBP + -0x29) = fVar15;
  fVar15 = (unaff_XMM7_Da - fVar15) * fVar14 * (unaff_XMM7_Da / fVar16);
  fVar14 = fVar15 - fVar14 * *(float *)(unaff_RBP + 0x6f) * (unaff_XMM7_Da / fVar16);
  *(float *)(unaff_RBP + -0x1d) = fVar14 * fVar16;
  *(int32_t *)(unaff_RBP + -0x15) = 0x3e99999a;
  fVar16 = ((fVar15 - fVar14) - system_system_config) * fVar16;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  *(float *)(unaff_RBP + -0x19) = fVar16;
  cVar7 = FUN_18051ec50(lVar11,unaff_RBP + -0x39);
  if (cVar7 == '\0') {
    uVar12 = 0;
  }
  else {
    if ((system_status_flag != 1) && (system_status_flag != 4)) {
      uVar8 = FUN_1805b2220(extraout_XMM0_Da,*unaff_RDI,0);
      lVar11 = func_0x0001805b23d0(extraout_XMM0_Da_00,uVar8);
      if (lVar11 == 0) {
        *(uint64_t *)(unaff_RBX + 0x2c) = 0;
        *(uint64_t *)(unaff_RBX + 0x34) = 0;
        *(uint64_t *)(unaff_RBP + -0x59) = 0;
        *(uint64_t *)(unaff_RBP + -0x51) = 0;
        uVar12 = *(uint64_t *)(unaff_RBP + -0x59);
        uVar6 = *(uint64_t *)(unaff_RBP + -0x51);
        *(uint64_t *)(unaff_RBP + -0x29) = 0;
        *(uint64_t *)(unaff_RBX + 0x84) = 0;
        *(uint64_t *)(unaff_RBX + 0x8c) = 0;
        *(uint64_t *)(unaff_RBP + -0x21) = 0;
        *(uint64_t *)(unaff_RBX + 0x3c) = uVar12;
        *(uint64_t *)(unaff_RBX + 0x44) = uVar6;
        *(int32_t *)(unaff_RBP + -0x49) = 0;
        uVar12 = *(uint64_t *)(unaff_RBP + -0x29);
        uVar6 = *(uint64_t *)(unaff_RBP + -0x21);
        *(int8_t *)(unaff_RBP + -0x45) = 0;
        *(uint64_t *)(unaff_RBX + 0x4c) = *(uint64_t *)(unaff_RBP + -0x49);
        *(uint64_t *)(unaff_RBX + 0x94) = uVar12;
        *(uint64_t *)(unaff_RBX + 0x9c) = uVar6;
        *(int32_t *)(unaff_RBP + -0x19) = 0;
        *(int8_t *)(unaff_RBP + -0x15) = 0;
        *(uint64_t *)(unaff_RBX + 0xa4) = *(uint64_t *)(unaff_RBP + -0x19);
        *(int32_t *)(unaff_RBX + 0xac) = 0xffffffff;
        *(float *)(unaff_RBX + 0xb0) = fVar15;
        *(int32_t *)(unaff_RBX + 0x54) = 0xffffffff;
        *(int32_t *)(unaff_RBX + 0xd0) = 0xffffffff;
      }
      else {
        uVar12 = *(uint64_t *)(lVar11 + 0x18);
        *(uint64_t *)(unaff_RBX + 0x2c) = *(uint64_t *)(lVar11 + 0x10);
        *(uint64_t *)(unaff_RBX + 0x34) = uVar12;
        uVar12 = *(uint64_t *)(lVar11 + 0x28);
        *(uint64_t *)(unaff_RBX + 0x3c) = *(uint64_t *)(lVar11 + 0x20);
        *(uint64_t *)(unaff_RBX + 0x44) = uVar12;
        *(uint64_t *)(unaff_RBX + 0x4c) = *(uint64_t *)(lVar11 + 0x30);
        *(int32_t *)(unaff_RBX + 0x54) = *(int32_t *)(lVar11 + 0x38);
        uVar12 = *(uint64_t *)(lVar11 + 0x44);
        *(uint64_t *)(unaff_RBX + 0x84) = *(uint64_t *)(lVar11 + 0x3c);
        *(uint64_t *)(unaff_RBX + 0x8c) = uVar12;
        uVar8 = *(int32_t *)(lVar11 + 0x50);
        uVar4 = *(int32_t *)(lVar11 + 0x54);
        uVar5 = *(int32_t *)(lVar11 + 0x58);
        *(int32_t *)(unaff_RBX + 0x94) = *(int32_t *)(lVar11 + 0x4c);
        *(int32_t *)(unaff_RBX + 0x98) = uVar8;
        *(int32_t *)(unaff_RBX + 0x9c) = uVar4;
        *(int32_t *)(unaff_RBX + 0xa0) = uVar5;
        *(uint64_t *)(unaff_RBX + 0xa4) = *(uint64_t *)(lVar11 + 0x5c);
        uVar8 = *(int32_t *)(lVar11 + 100);
        *(float *)(unaff_RBX + 0xb0) = fVar15;
        *(int32_t *)(unaff_RBX + 0xac) = uVar8;
        iVar2 = *(int *)(lVar11 + 0x38);
        *(int *)(unaff_RBX + 0xd0) = iVar2;
        if (iVar2 != -1) {
          func_0x0001805b2480();
          *(int32_t *)(unaff_RBX + 0xc4) = 3;
          return 1;
        }
      }
    }
    *(int32_t *)(unaff_RBX + 0xc4) = 3;
    uVar12 = 1;
  }
  return uVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805b209e(int32_t param_1)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t uVar5;
  longlong lVar6;
  uint64_t uVar7;
  uint8_t uVar9;
  ulonglong uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t unaff_XMM7_Da;
  
  uVar8 = (ulonglong)system_status_flag;
  if ((system_status_flag != 1) && (system_status_flag != 4)) {
    uVar5 = FUN_1805b2220(param_1,*unaff_RDI,0);
    lVar6 = func_0x0001805b23d0(extraout_XMM0_Da,uVar5);
    if (lVar6 == 0) {
      uVar8 = 0;
      *(uint64_t *)(unaff_RBX + 0x2c) = 0;
      *(uint64_t *)(unaff_RBX + 0x34) = 0;
      *(uint64_t *)(unaff_RBP + -0x59) = 0;
      *(uint64_t *)(unaff_RBP + -0x51) = 0;
      uVar7 = *(uint64_t *)(unaff_RBP + -0x59);
      uVar4 = *(uint64_t *)(unaff_RBP + -0x51);
      *(uint64_t *)(unaff_RBP + -0x29) = 0;
      *(uint64_t *)(unaff_RBX + 0x84) = 0;
      *(uint64_t *)(unaff_RBX + 0x8c) = 0;
      *(uint64_t *)(unaff_RBP + -0x21) = 0;
      *(uint64_t *)(unaff_RBX + 0x3c) = uVar7;
      *(uint64_t *)(unaff_RBX + 0x44) = uVar4;
      *(int32_t *)(unaff_RBP + -0x49) = 0;
      uVar7 = *(uint64_t *)(unaff_RBP + -0x29);
      uVar4 = *(uint64_t *)(unaff_RBP + -0x21);
      *(int8_t *)(unaff_RBP + -0x45) = 0;
      *(uint64_t *)(unaff_RBX + 0x4c) = *(uint64_t *)(unaff_RBP + -0x49);
      *(uint64_t *)(unaff_RBX + 0x94) = uVar7;
      *(uint64_t *)(unaff_RBX + 0x9c) = uVar4;
      *(int32_t *)(unaff_RBP + -0x19) = 0;
      *(int8_t *)(unaff_RBP + -0x15) = 0;
      *(uint64_t *)(unaff_RBX + 0xa4) = *(uint64_t *)(unaff_RBP + -0x19);
      *(int32_t *)(unaff_RBX + 0xac) = 0xffffffff;
      *(int32_t *)(unaff_RBX + 0xb0) = unaff_XMM7_Da;
      *(int32_t *)(unaff_RBX + 0x54) = 0xffffffff;
      *(int32_t *)(unaff_RBX + 0xd0) = 0xffffffff;
    }
    else {
      uVar7 = *(uint64_t *)(lVar6 + 0x18);
      *(uint64_t *)(unaff_RBX + 0x2c) = *(uint64_t *)(lVar6 + 0x10);
      *(uint64_t *)(unaff_RBX + 0x34) = uVar7;
      uVar7 = *(uint64_t *)(lVar6 + 0x28);
      *(uint64_t *)(unaff_RBX + 0x3c) = *(uint64_t *)(lVar6 + 0x20);
      *(uint64_t *)(unaff_RBX + 0x44) = uVar7;
      *(uint64_t *)(unaff_RBX + 0x4c) = *(uint64_t *)(lVar6 + 0x30);
      *(int32_t *)(unaff_RBX + 0x54) = *(int32_t *)(lVar6 + 0x38);
      uVar7 = *(uint64_t *)(lVar6 + 0x44);
      *(uint64_t *)(unaff_RBX + 0x84) = *(uint64_t *)(lVar6 + 0x3c);
      *(uint64_t *)(unaff_RBX + 0x8c) = uVar7;
      uVar5 = *(int32_t *)(lVar6 + 0x50);
      uVar2 = *(int32_t *)(lVar6 + 0x54);
      uVar3 = *(int32_t *)(lVar6 + 0x58);
      *(int32_t *)(unaff_RBX + 0x94) = *(int32_t *)(lVar6 + 0x4c);
      *(int32_t *)(unaff_RBX + 0x98) = uVar5;
      *(int32_t *)(unaff_RBX + 0x9c) = uVar2;
      *(int32_t *)(unaff_RBX + 0xa0) = uVar3;
      *(uint64_t *)(unaff_RBX + 0xa4) = *(uint64_t *)(lVar6 + 0x5c);
      uVar5 = *(int32_t *)(lVar6 + 100);
      *(int32_t *)(unaff_RBX + 0xb0) = unaff_XMM7_Da;
      *(int32_t *)(unaff_RBX + 0xac) = uVar5;
      uVar1 = *(uint *)(lVar6 + 0x38);
      uVar8 = (ulonglong)uVar1;
      *(uint *)(unaff_RBX + 0xd0) = uVar1;
      if (uVar1 != 0xffffffff) {
        uVar7 = func_0x0001805b2480();
        *(int32_t *)(unaff_RBX + 0xc4) = 3;
        uVar9 = (uint8_t)((ulonglong)uVar7 >> 8);
        goto LAB_1805b21f2;
      }
    }
  }
  *(int32_t *)(unaff_RBX + 0xc4) = 3;
  uVar9 = (uint8_t)(uVar8 >> 8);
LAB_1805b21f2:
  return CONCAT71(uVar9,1);
}



uint FUN_1805b2220(longlong param_1,int param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if ((((*(uint *)(lVar2 + 0x56c) & 0x800) == 0) ||
      ((*(byte *)(*(longlong *)(lVar2 + 0x590) + 0x3424) & 0x10) == 0)) &&
     (*(int *)(lVar2 + 0x564) < 0)) {
    if (param_2 == 8) {
      return *(uint *)(param_1 + 0xd0);
    }
    uVar6 = 0xffffffff;
    uVar5 = 0xffffffff;
    iVar7 = -1;
    uVar8 = 3;
    switch(param_2) {
    case 0:
      uVar5 = (uint)param_3;
      iVar7 = param_3 + 4;
      break;
    case 1:
      uVar5 = param_3 ^ 1;
      iVar7 = uVar5 + 4;
      break;
    case 2:
      uVar5 = param_3 + 2;
      iVar7 = param_3 + 6;
      break;
    case 3:
      uVar5 = (param_3 ^ 1) + 2;
      iVar7 = (param_3 ^ 1) + 6;
      break;
    case 4:
      uVar5 = 0;
      iVar7 = 4;
      break;
    case 5:
      uVar5 = 1;
      iVar7 = 5;
      break;
    case 6:
      uVar5 = 2;
      iVar7 = 6;
      break;
    case 7:
      uVar5 = 3;
      iVar7 = 7;
      break;
    case 9:
      uVar5 = 9;
    }
    puVar3 = (uint *)FUN_1805a0610(lVar2 + 0x28,uVar5);
    bVar9 = false;
    if (puVar3 != (uint *)0x0) {
      uVar6 = *puVar3;
      bVar9 = uVar6 == uVar5;
    }
    uVar5 = *(uint *)(param_1 + 0xd0);
    if (((bVar9) ||
        (piVar4 = (int *)FUN_1805a0610(*(longlong *)(param_1 + 0xb8) + 0x28,iVar7),
        piVar4 == (int *)0x0)) || ((iVar1 = *piVar4, iVar1 != iVar7 && (puVar3 != (uint *)0x0)))) {
      uVar8 = uVar5;
      if ((puVar3 != (uint *)0x0) && (uVar8 = uVar6, uVar6 == 9)) {
        uVar8 = 3;
      }
    }
    else if (iVar1 != 8) {
      uVar8 = iVar1 - 4;
    }
    return uVar8;
  }
  return 0xffffffff;
}



uint FUN_1805b2276(uint64_t param_1,int32_t param_2,byte param_3,longlong param_4)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  longlong unaff_RBP;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar5 = 0xffffffff;
  uVar4 = 0xffffffff;
  iVar6 = -1;
  uVar7 = 3;
  switch(param_2) {
  case 0:
    uVar4 = (uint)param_3;
    iVar6 = param_3 + 4;
    break;
  case 1:
    uVar4 = param_3 ^ 1;
    iVar6 = uVar4 + 4;
    break;
  case 2:
    uVar4 = param_3 + 2;
    iVar6 = param_3 + 6;
    break;
  case 3:
    uVar4 = (param_3 ^ 1) + 2;
    iVar6 = (param_3 ^ 1) + 6;
    break;
  case 4:
    uVar4 = 0;
    iVar6 = 4;
    break;
  case 5:
    uVar4 = 1;
    iVar6 = 5;
    break;
  case 6:
    uVar4 = 2;
    iVar6 = 6;
    break;
  case 7:
    uVar4 = 3;
    iVar6 = 7;
    break;
  case 9:
    uVar4 = 9;
  }
  puVar2 = (uint *)FUN_1805a0610(param_4 + 0x28,uVar4);
  bVar8 = false;
  if (puVar2 != (uint *)0x0) {
    uVar5 = *puVar2;
    bVar8 = uVar5 == uVar4;
  }
  uVar4 = *(uint *)(unaff_RBP + 0xd0);
  if (((bVar8) ||
      (piVar3 = (int *)FUN_1805a0610(*(longlong *)(unaff_RBP + 0xb8) + 0x28,iVar6),
      piVar3 == (int *)0x0)) || ((iVar1 = *piVar3, iVar1 != iVar6 && (puVar2 != (uint *)0x0)))) {
    uVar7 = uVar4;
    if ((puVar2 != (uint *)0x0) && (uVar7 = uVar5, uVar5 == 9)) {
      uVar7 = 3;
    }
  }
  else if (iVar1 != 8) {
    uVar7 = iVar1 - 4;
  }
  return uVar7;
}






// 函数: void FUN_1805b23a0(longlong param_1)
void FUN_1805b23a0(longlong param_1)

{
  code *pcVar1;
  char in_AL;
  uint8_t in_register_00000001;
  int *piVar2;
  byte *pbStackX_18;
  int8_t auStackX_20 [8];
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  if (param_1 != 0) {
    piVar2 = (int *)CONCAT71((int7)((ulonglong)pbStackX_18 >> 8),(byte)pbStackX_18 & *pbStackX_18);
    *piVar2 = *piVar2 + (int)auStackX_20;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}






// 函数: void FUN_1805b2510(void)
void FUN_1805b2510(void)

{
  float fVar1;
  longlong in_R9;
  float fVar2;
  float fVar3;
  longlong in_stack_00000028;
  
  if ((*(float *)(in_stack_00000028 + 0x10) * *(float *)(in_R9 + 0x10) < 0.0) &&
     (fVar1 = *(float *)(in_R9 + 0x14),
     3.1415927 < ABS(fVar1 - *(float *)(in_stack_00000028 + 0x14)))) {
    fVar2 = *(float *)(in_stack_00000028 + 0x20) * *(float *)(in_stack_00000028 + 0x1c) -
            *(float *)(in_R9 + 0x20) * *(float *)(in_R9 + 0x1c);
    fVar3 = *(float *)(in_stack_00000028 + 0x20) * *(float *)(in_stack_00000028 + 0x18) -
            *(float *)(in_R9 + 0x20) * *(float *)(in_R9 + 0x18);
    if (fVar3 * fVar3 + fVar2 * fVar2 < 0.36) {
      if (0.0 <= fVar1) {
        fVar2 = -6.2831855;
      }
      else {
        fVar2 = 6.2831855;
      }
      *(float *)(in_R9 + 0x14) = fVar1 + fVar2;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(float *)(in_stack_00000028 + 0x14) * 0.0 + *(float *)(in_R9 + 0x14) * 1.0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_1805b2900(longlong param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  iVar3 = FUN_18053a410(&system_data_5f30,
                        *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x590) + 0xac)
                       );
  iVar3 = *(int *)(system_system_config + (longlong)iVar3 * 4);
  if (iVar3 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(system_system_config + (longlong)iVar3 * 8);
  }
  lVar1 = *(longlong *)(param_1 + 0xb8);
  iVar3 = *(int *)(param_3 + 0x104);
  fVar8 = 1.0;
  lVar7 = (longlong)*(short *)(lVar6 + 0x7e) * 0x68 + system_system_config;
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x8f8) + 0x9e8);
  if (lVar2 != 0) {
    lVar5 = (longlong)*(int *)(lVar2 + 0xf0) * 0xa0;
    if (iVar3 == 0) {
      iVar4 = *(int *)(lVar5 + 0x6c + *(longlong *)(lVar2 + 0xd0));
    }
    else {
      iVar4 = *(int *)(lVar5 + 0x68 + *(longlong *)(lVar2 + 0xd0));
    }
    fVar8 = (float)iVar4 * 0.01;
  }
  if (iVar3 == 0) {
    fVar8 = fVar8 * *(float *)(lVar1 + 0x3a8);
  }
  else if (iVar3 == 1) {
    fVar8 = fVar8 * *(float *)(lVar1 + 0x3ac);
  }
  fVar8 = system_system_config * fVar8;
  if (*(char *)(param_3 + 5) != '\0') {
    fVar8 = fVar8 * system_system_config;
  }
  fVar8 = *(float *)(lVar6 + 0x188) / fVar8;
  param_2[2] = *(float *)(lVar7 + 0x24);
  param_2[3] = *(float *)(lVar7 + 0x28);
  param_2[1] = fVar8;
  *param_2 = fVar8 * 0.4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1805b2a50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x34);
  }
  iVar2 = FUN_18053a410(&system_data_5f30,
                        *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x590) + 0xac)
                        ,iVar4);
  iVar2 = *(int *)(system_system_config + (longlong)iVar2 * 4);
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(system_system_config + (longlong)iVar2 * 8);
  }
  fVar6 = *(float *)(lVar3 + 0x1d8);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x590);
  if ((int)plVar1[0x493] == iVar4) {
    fVar5 = (float)(**(code **)(*plVar1 + 0x90))(plVar1,1);
    fVar6 = fVar6 - fVar5;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
  }
  return fVar6 * *(float *)(lVar3 + 0x188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805b2b20(uint64_t *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t uVar5;
  float fVar6;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  int32_t uStack_10;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0xc) == -1)) {
    return 0xbf800000;
  }
  fVar6 = system_system_config;
  if (*(char *)(param_2 + 5) == '\0') {
    fVar6 = system_system_config * system_system_config;
  }
  lVar1 = param_1[0x17];
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x8f8) + 0x9f0);
  if ((lVar2 != 0) &&
     ((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >>
       0x1c & 1) != 0)) {
    uStack_38 = param_1[0xb];
    uStack_30 = param_1[0xc];
    uStack_10 = *(int32_t *)(param_1 + 0x10);
    uStack_28 = param_1[0xd];
    uStack_20 = param_1[0xe];
    uVar5 = *(int32_t *)(lVar2 + 0x4c);
    uStack_18 = param_1[0xf];
    uVar3 = func_0x00018050f0d0(lVar1);
    uVar4 = FUN_1805b2510(uVar3,uVar3,fVar6,&uStack_38,param_2 + 0xac,uVar5,0x3e4ccccd);
    return uVar4;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x8f8) + 0x9e8);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int32_t *)(lVar2 + 0x4c);
  }
  uVar3 = func_0x00018050f0d0(lVar1);
  uStack_38 = *param_1;
  uStack_30 = param_1[1];
  uStack_10 = *(int32_t *)(param_1 + 5);
  uStack_28 = param_1[2];
  uStack_20 = param_1[3];
  uStack_18 = param_1[4];
  uVar4 = FUN_1805b2510(uVar3,uVar3,fVar6,&uStack_38,param_2 + 0x54,uVar5,0x3e4ccccd);
  return uVar4;
}



uint64_t FUN_1805b2d20(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  
  if ((((((char)param_1[0x12] == (char)param_2[0x12]) &&
        ((((param_3 == '\0' || (param_1[0x22] == param_2[0x22])) && (*param_1 == *param_2)) &&
         ((param_1[2] == param_2[2] && (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)))))
        )) && ((float)param_2[0xb] == (float)param_1[0xb])) &&
      ((((float)param_2[10] == (float)param_1[10] && ((float)param_2[0xc] == (float)param_1[0xc]))
       && (((float)param_2[0xd] == (float)param_1[0xd] &&
           ((((char)param_1[0x10] == (char)param_2[0x10] &&
             ((float)param_2[0xe] == (float)param_1[0xe])) &&
            ((float)param_2[0xf] == (float)param_1[0xf])))))))) &&
     (((param_1[0x13] == param_2[0x13] && (param_1[0x14] == param_2[0x14])) &&
      ((param_1[0x1f] == param_2[0x1f] &&
       ((((char)param_1[0x20] == (char)param_2[0x20] &&
         ((float)param_2[0x21] == (float)param_1[0x21])) &&
        ((param_1[0x1d] == param_2[0x1d] && (param_1[0x1e] == param_2[0x1e])))))))))) {
    cVar1 = func_0x00018022a7c0(param_1 + 0x15,param_2 + 0x15);
    if (cVar1 != '\0') {
      cVar1 = func_0x00018022a7c0(param_1 + 0x19,param_2 + 0x19);
      if ((cVar1 != '\0') && ((float)param_2[0x23] == (float)param_1[0x23])) {
        return 1;
      }
    }
  }
  return 0;
}






// 函数: void FUN_1805b2f90(float *param_1,float param_2,float *param_3,float param_4)
void FUN_1805b2f90(float *param_1,float param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  param_4 = 1.0 / param_4;
  fVar1 = param_3[1];
  *param_1 = (*param_3 - *param_1) * param_2 * param_4 + *param_1;
  fVar2 = param_3[2];
  param_1[1] = (fVar1 - param_1[1]) * param_2 * param_4 + param_1[1];
  fVar1 = param_3[5];
  param_1[2] = (fVar2 - param_1[2]) * param_2 * param_4 + param_1[2];
  param_1[4] = (param_3[4] - param_1[4]) * param_2 * param_4 + param_1[4];
  fVar2 = param_3[6];
  param_1[5] = (fVar1 - param_1[5]) * param_2 * param_4 + param_1[5];
  fVar1 = param_3[7];
  param_1[6] = (fVar2 - param_1[6]) * param_2 * param_4 + param_1[6];
  param_1[7] = (fVar1 - param_1[7]) * param_2 * param_4 + param_1[7];
  param_1[8] = (param_3[8] - param_1[8]) * param_2 * param_4 + param_1[8];
  return;
}






// 函数: void FUN_1805b30a0(longlong *param_1,int param_2)
void FUN_1805b30a0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    lVar2 = *param_1;
    FUN_1805b3190();
    if (lVar2 != 0) {
      iVar3 = 0;
      if (0 < iVar1) {
        uVar6 = 0;
        do {
          if (iVar3 < iVar1) {
            iVar4 = iVar3;
            uVar5 = uVar6;
            do {
              FUN_1805b31e0(param_1,iVar3,iVar4,
                            ((&unknown_var_8808_ptr)[uVar5 & 7] &
                            *(byte *)(((iVar4 >> 3) + (iVar1 >> 3) * iVar3) + lVar2)) != 0);
              iVar4 = iVar4 + 1;
              uVar5 = uVar5 + 1;
            } while (iVar4 < iVar1);
          }
          uVar6 = uVar6 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
  }
  return;
}






