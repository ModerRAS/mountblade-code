#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part342_sub002_sub002.c - 1 个函数

// 函数: void FUN_180853fc0(longlong param_1,char param_2)
void FUN_180853fc0(longlong param_1,char param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(char *)(*(longlong *)(param_1 + 0x48) + 0x2a) = param_2;
  }
  if ((param_2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x40) + 0x74) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_18073d8a0(*(uint64_t *)(param_1 + 0x78),uVar2);
  for (puVar1 = *(uint64_t **)(param_1 + 0x50);
      (puVar1 != (uint64_t *)(param_1 + 0x50) &&
      (FUN_180853fc0(puVar1[2],uVar2), puVar1 != (uint64_t *)(param_1 + 0x50)));
      puVar1 = (uint64_t *)*puVar1) {
  }
  return;
}



uint64_t *
FUN_180854040(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = (int32_t *)FUN_18084da10();
  *(int32_t *)(param_1 + 6) = *puVar2;
  *(int32_t *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = (int32_t *)FUN_18084da10();
  *(int32_t *)(param_1 + 9) = *puVar2;
  *(int32_t *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  puVar2 = (int32_t *)FUN_18084da10();
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = *puVar2;
  puVar1 = param_1 + 0xe;
  *(uint64_t *)((longlong)param_1 + 100) = 0;
  *puVar1 = puVar1;
  param_1[0xf] = puVar1;
  puVar1 = param_1 + 0x10;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  puVar1 = param_1 + 0x23;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x20) = 0xffffffff;
  *(uint64_t *)((longlong)param_1 + 0x104) = 0;
  *(int32_t *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x22] = param_2;
  param_1[0x24] = 0;
  *puVar1 = puVar1;
  param_1[0x24] = puVar1;
  param_1[0x25] = 0;
  param_1[0x26] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x27) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = param_6;
  param_1[0x2d] = param_5;
  param_1[0x2e] = param_3;
  puVar2 = (int32_t *)FUN_18084cde0(param_1[0x22],&param_6);
  *(int32_t *)((longlong)param_1 + 0x10c) = *puVar2;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180854200(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
    iVar3 = *(int *)(param_1 + 0x34);
    lVar4 = *(longlong *)(param_1 + 0x38);
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x1c);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  }
  if (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar4,&unknown_var_2208_ptr,0x76,1);
    }
  }
  if (1 < iVar3 - 4U) {
    return 0x1c;
  }
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 8;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808542a0(longlong param_1,int *param_2,uint param_3,uint param_4,char param_5)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int32_t *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bStack_c8;
  uint64_t uStack_c0;
  longlong lStack_b8;
  uint uStack_b0;
  int iStack_ac;
  longlong lStack_a8;
  ulonglong uStack_a0;
  uint64_t uStack_98;
  uint uStack_90;
  int32_t uStack_8c;
  longlong lStack_88;
  uint uStack_80;
  uint uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  uint uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int8_t uStack_40;
  
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 0x1c;
  }
  puVar6 = (int32_t *)FUN_18084cde0(*(uint64_t *)(param_1 + 0x110),&uStack_c0);
  bVar10 = false;
  *(int32_t *)(param_1 + 0x10c) = *puVar6;
  puVar7 = (uint *)FUN_18084da10();
  uStack_c0 = 0;
  uVar12 = *puVar7;
  lStack_b8 = 0;
  puVar7 = (uint *)FUN_18084da10();
  uStack_b0 = *puVar7;
  iStack_ac = 0;
  lStack_a8 = 0;
  iVar4 = FUN_180856d20(param_1,&uStack_c0,&lStack_b8);
  if (iVar4 != 0) goto LAB_1808545a3;
  uVar2 = (uint)uStack_c0;
  if (param_3 < (uint)uStack_c0) {
LAB_180854383:
    uVar5 = 0xffffffff;
    if ((ulonglong)param_4 + (ulonglong)param_3 < 0x100000000) {
      uVar5 = param_3 + param_4;
    }
    uVar9 = (uint)uStack_c0;
    if ((uint)uStack_c0 < uVar5) {
LAB_18085439a:
      uVar12 = uVar9;
      bVar10 = true;
    }
  }
  else {
    uVar9 = param_3;
    if (param_3 < uStack_c0._4_4_) goto LAB_18085439a;
    if (param_3 < (uint)uStack_c0) goto LAB_180854383;
  }
  lVar3 = *(longlong *)(param_1 + 0x160);
  uVar8 = 0;
  bStack_c8 = false;
  if (2 < *(int *)(lVar3 + 0x2e4)) {
    bStack_c8 = bVar10;
  }
  if (((param_5 != '\0') && (bStack_c8 != false)) && (bStack_c8 = iStack_ac != 1, bStack_c8)) {
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
    if (param_3 < uStack_b0) {
      uVar8 = (ulonglong)(uStack_b0 - param_3);
      if (uVar9 != 48000) {
        uVar8 = (uVar8 * uVar9) / 48000;
      }
      uVar8 = lStack_b8 - (uVar8 & 0xffffffff);
    }
    else {
      uVar8 = (ulonglong)(param_3 - uStack_b0);
      if (uVar9 != 48000) {
        uVar8 = (uVar8 * uVar9) / 48000;
      }
      uVar8 = (uVar8 & 0xffffffff) + lStack_b8;
    }
  }
  uStack_a0 = (ulonglong)param_3 + (ulonglong)param_4;
  uStack_90 = uStack_b0;
  uStack_98 = lStack_b8;
  uVar9 = param_4 + param_3;
  if (0xffffffff < uStack_a0) {
    uVar9 = 0xffffffff;
  }
  uStack_50 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x30))(lVar3 + 8);
  uStack_68 = uStack_c0;
  uStack_78 = (int32_t)uStack_98;
  uStack_74 = uStack_98._4_4_;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_88 = param_1;
  uStack_80 = uVar12;
  uStack_7c = uVar9;
  lStack_60 = lVar3 + 0x3f8;
  lStack_58 = lVar3 + 0x378;
  iVar4 = FUN_18085ed00(*(uint64_t *)(param_1 + 0x160),param_2,&lStack_88,param_5,uVar8,bStack_c8,
                        0);
  if (iVar4 == 0) {
    uVar12 = param_4 + param_3;
    if (0xffffffff < uStack_a0) {
      uVar12 = 0xffffffff;
    }
    if (((bStack_c8 != false) && (uVar2 <= uVar12)) && (uVar12 < uStack_c0._4_4_)) {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x168) + 0x774);
      if (uVar12 < uStack_b0) {
        uVar11 = (ulonglong)(uStack_b0 - uVar12);
        if (uVar2 != 48000) {
          uVar11 = (uVar11 * uVar2) / 48000;
        }
        uVar11 = -(uVar11 & 0xffffffff);
      }
      else {
        uVar11 = (ulonglong)(uVar12 - uStack_b0);
        if (uVar2 != 48000) {
          uVar11 = (uVar11 * uVar2) / 48000;
        }
        uVar11 = uVar11 & 0xffffffff;
      }
      iVar4 = FUN_18085f790(*(uint64_t *)(param_1 + 0x160),param_2,uVar11 + lStack_b8,param_5,
                            uVar8 & 0xffffffffffffff00,0);
      if (iVar4 != 0) goto LAB_1808545a3;
    }
    iVar4 = 0;
  }
LAB_1808545a3:
  if (lStack_a8 != 0) {
    piVar1 = (int *)(lStack_a8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lStack_a8,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808542fa(void)

{
  int *piVar1;
  int8_t uVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t uVar5;
  int iVar6;
  uint uVar7;
  int32_t *puVar8;
  uint *puVar9;
  uint64_t uVar10;
  char cVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong lVar14;
  char cVar15;
  longlong unaff_R13;
  uint uVar16;
  longlong unaff_R14;
  ulonglong uVar17;
  uint uVar18;
  bool bVar19;
  int32_t extraout_XMM0_Da;
  
  puVar8 = (int32_t *)FUN_18084cde0();
  cVar15 = '\0';
  *(int32_t *)(unaff_R13 + 0x10c) = *puVar8;
  puVar9 = (uint *)FUN_18084da10();
  *(uint64_t *)(unaff_RBP + -0x69) = 0;
  uVar18 = *puVar9;
  *(uint64_t *)(unaff_RBP + -0x61) = 0;
  puVar8 = (int32_t *)FUN_18084da10();
  *(int32_t *)(unaff_RBP + -0x59) = *puVar8;
  *(int32_t *)(unaff_RBP + -0x55) = 0;
  *(uint64_t *)(unaff_RBP + -0x51) = 0;
  iVar6 = FUN_180856d20(extraout_XMM0_Da,unaff_RBP + -0x69,unaff_RBP + -0x61);
  if (iVar6 != 0) goto LAB_1808545a3;
  uVar3 = *(uint *)(unaff_RBP + -0x69);
  uVar16 = (uint)unaff_RBX;
  if (uVar16 < uVar3) {
LAB_180854383:
    uVar7 = 0xffffffff;
    if ((ulonglong)(unaff_R14 + unaff_RBX) < 0x100000000) {
      uVar7 = uVar16 + (int)unaff_R14;
    }
    uVar13 = uVar3;
    if (uVar3 < uVar7) {
LAB_18085439a:
      uVar18 = uVar13;
      cVar15 = '\x01';
    }
  }
  else {
    uVar13 = uVar16;
    if (uVar16 < *(uint *)(unaff_RBP + -0x65)) goto LAB_18085439a;
    if (uVar16 < uVar3) goto LAB_180854383;
  }
  lVar14 = *(longlong *)(unaff_R13 + 0x160);
  uVar13 = *(uint *)(unaff_RBP + -0x59);
  uVar12 = 0;
  lVar4 = *(longlong *)(unaff_RBP + -0x61);
  cVar11 = '\0';
  if (2 < *(int *)(lVar14 + 0x2e4)) {
    cVar11 = cVar15;
  }
  *(char *)(unaff_RBP + -0x71) = cVar11;
  if (((*(char *)(unaff_RBP + 0x7f) != '\0') &&
      (*(char *)(unaff_RBP + -0x71) = cVar11, cVar11 != '\0')) &&
     (bVar19 = *(int *)(unaff_RBP + -0x55) != 1, *(bool *)(unaff_RBP + -0x71) = bVar19, bVar19)) {
    uVar7 = *(uint *)(*(longlong *)(unaff_R13 + 0x168) + 0x774);
    if (uVar16 < uVar13) {
      uVar12 = (ulonglong)(uVar13 - uVar16);
      if (uVar7 != 48000) {
        uVar12 = (uVar12 * uVar7) / 48000;
      }
      uVar12 = lVar4 - (uVar12 & 0xffffffff);
    }
    else {
      uVar12 = (ulonglong)(uVar16 - uVar13);
      if (uVar7 != 48000) {
        uVar12 = (uVar12 * uVar7) / 48000;
      }
      uVar12 = (uVar12 & 0xffffffff) + lVar4;
    }
  }
  *(uint *)(unaff_RBP + -0x39) = uVar13;
  uVar16 = (int)unaff_R14 + uVar16;
  *(longlong *)(unaff_RBP + -0x49) = unaff_RBX + unaff_R14;
  *(longlong *)(unaff_RBP + -0x41) = lVar4;
  uVar13 = uVar16;
  if (0xffffffff < (ulonglong)(unaff_RBX + unaff_R14)) {
    uVar13 = 0xffffffff;
  }
  uVar10 = (**(code **)(*(longlong *)(lVar14 + 8) + 0x30))(lVar14 + 8);
  *(uint64_t *)(unaff_RBP + -0x31) = *(uint64_t *)(unaff_RBP + 0x5f);
  *(uint *)(unaff_RBP + -0x25) = uVar13;
  lVar4 = *(longlong *)(unaff_RBP + 0x5f);
  *(uint64_t *)(unaff_RBP + 7) = uVar10;
  *(uint *)(unaff_RBP + -0x29) = uVar18;
  uVar10 = *(uint64_t *)(unaff_RBP + 0x67);
  *(longlong *)(unaff_RBP + -9) = lVar14 + 0x3f8;
  cVar15 = *(char *)(unaff_RBP + -0x71);
  *(longlong *)(unaff_RBP + -1) = lVar14 + 0x378;
  uVar2 = *(int8_t *)(unaff_RBP + 0x7f);
  *(uint64_t *)(unaff_RBP + -0x11) = *(uint64_t *)(unaff_RBP + -0x69);
  uVar5 = *(uint64_t *)(lVar4 + 0x160);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x41);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x3d);
  *(int32_t *)(unaff_RBP + -0x19) = *(int32_t *)(unaff_RBP + -0x39);
  *(int32_t *)(unaff_RBP + -0x15) = *(int32_t *)(unaff_RBP + -0x35);
  *(uint64_t *)(unaff_RBP + 0xf) = 0;
  *(int8_t *)(unaff_RBP + 0x17) = 0;
  iVar6 = FUN_18085ed00(uVar5,uVar10,unaff_RBP + -0x31,uVar2,uVar12);
  if (iVar6 == 0) {
    if (0xffffffff < *(ulonglong *)(unaff_RBP + -0x49)) {
      uVar16 = 0xffffffff;
    }
    if (((cVar15 != '\0') && (uVar3 <= uVar16)) && (uVar16 < *(uint *)(unaff_RBP + -0x65))) {
      uVar18 = *(uint *)(unaff_RBP + -0x59);
      uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x168) + 0x774);
      if (uVar16 < uVar18) {
        uVar17 = (ulonglong)(uVar18 - uVar16);
        if (uVar3 != 48000) {
          uVar17 = (uVar17 * uVar3) / 48000;
        }
        lVar14 = *(longlong *)(unaff_RBP + -0x61) - (uVar17 & 0xffffffff);
      }
      else {
        uVar17 = (ulonglong)(uVar16 - uVar18);
        if (uVar3 != 48000) {
          uVar17 = (uVar17 * uVar3) / 48000;
        }
        lVar14 = (uVar17 & 0xffffffff) + *(longlong *)(unaff_RBP + -0x61);
      }
      iVar6 = FUN_18085f790(*(uint64_t *)(lVar4 + 0x160),uVar10,lVar14,uVar2,
                            uVar12 & 0xffffffffffffff00);
      if (iVar6 != 0) goto LAB_1808545a3;
    }
    iVar6 = 0;
  }
LAB_1808545a3:
  lVar14 = *(longlong *)(unaff_RBP + -0x51);
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar14,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808545c4(uint64_t param_1,longlong param_2)

{
  int *piVar1;
  int32_t unaff_EDI;
  
  piVar1 = (int *)(param_2 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2,&unknown_var_2208_ptr,0x76,1);
  }
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_180854610(longlong param_1,ulonglong param_2,int32_t param_3,int32_t param_4,
             int32_t param_5,int32_t param_6)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  int32_t uStack_28;
  int32_t uStack_24;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
    uVar3 = *(ulonglong *)(param_1 + 0x28);
    lVar5 = *(longlong *)(param_1 + 0x38);
  }
  else {
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  }
  if (param_2 < uVar3) {
    uVar7 = 0x1c;
  }
  else {
    puVar6 = (uint64_t *)(param_1 + 0x80);
    puVar4 = (uint64_t *)*puVar6;
    uStack_28 = (int32_t)param_2;
    uStack_24 = (int32_t)(param_2 >> 0x20);
    for (; puVar4 != puVar6; puVar4 = (uint64_t *)*puVar4) {
      if (param_2 < (ulonglong)puVar4[2]) {
        uVar7 = 0;
        puVar6 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x28,&unknown_var_1696_ptr,0xbf,0,0,
                               1);
        if (puVar6 == (uint64_t *)0x0) goto LAB_1808547b7;
        *puVar6 = puVar6;
        *(int32_t *)(puVar6 + 2) = uStack_28;
        *(int32_t *)((longlong)puVar6 + 0x14) = uStack_24;
        *(int32_t *)(puVar6 + 3) = param_3;
        *(int32_t *)((longlong)puVar6 + 0x1c) = param_4;
        puVar6[1] = puVar6;
        puVar6[4] = CONCAT44(param_6,param_5);
        puVar6[1] = puVar4[1];
        *puVar6 = puVar4;
        puVar4[1] = puVar6;
        *(uint64_t **)puVar6[1] = puVar6;
        goto LAB_1808547bc;
      }
      if (puVar4 == puVar6) break;
    }
    uVar7 = 0;
    puVar4 = (uint64_t *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x28,&unknown_var_1696_ptr,0xbf,0,0,1);
    if (puVar4 == (uint64_t *)0x0) {
LAB_1808547b7:
      uVar7 = 0x26;
    }
    else {
      *puVar4 = puVar4;
      *(int32_t *)(puVar4 + 2) = uStack_28;
      *(int32_t *)((longlong)puVar4 + 0x14) = uStack_24;
      *(int32_t *)(puVar4 + 3) = param_3;
      *(int32_t *)((longlong)puVar4 + 0x1c) = param_4;
      puVar4[1] = puVar4;
      puVar4[4] = CONCAT44(param_6,param_5);
      puVar4[1] = *(uint64_t *)(param_1 + 0x88);
      *puVar4 = puVar6;
      *(uint64_t **)(param_1 + 0x88) = puVar4;
      *(uint64_t **)puVar4[1] = puVar4;
    }
  }
LAB_1808547bc:
  if (lVar5 != 0) {
    piVar2 = (int *)(lVar5 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar5,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18085461a(longlong param_1,ulonglong param_2,int32_t param_3,int32_t param_4)

{
  int *piVar1;
  longlong *in_RAX;
  ulonglong uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  
  if (((longlong *)*in_RAX == in_RAX) && ((longlong *)in_RAX[1] == in_RAX)) {
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    lVar4 = *(longlong *)(param_1 + 0x38);
  }
  else {
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  }
  if (param_2 < uVar2) {
    uVar6 = 0x1c;
  }
  else {
    puVar5 = (uint64_t *)(param_1 + 0x80);
    puVar3 = (uint64_t *)*puVar5;
    uStack0000000000000040 = (int32_t)param_2;
    uStack0000000000000044 = (int32_t)(param_2 >> 0x20);
    for (; puVar3 != puVar5; puVar3 = (uint64_t *)*puVar3) {
      if (param_2 < (ulonglong)puVar3[2]) {
        uVar6 = 0;
        puVar5 = (uint64_t *)
                 FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x28,&unknown_var_1696_ptr,0xbf,0);
        if (puVar5 == (uint64_t *)0x0) goto LAB_1808547b7;
        *puVar5 = puVar5;
        *(int32_t *)(puVar5 + 2) = uStack0000000000000040;
        *(int32_t *)((longlong)puVar5 + 0x14) = uStack0000000000000044;
        *(int32_t *)(puVar5 + 3) = param_3;
        *(int32_t *)((longlong)puVar5 + 0x1c) = param_4;
        puVar5[1] = puVar5;
        puVar5[4] = CONCAT44(in_stack_00000098,in_stack_00000090);
        puVar5[1] = puVar3[1];
        *puVar5 = puVar3;
        puVar3[1] = puVar5;
        *(uint64_t **)puVar5[1] = puVar5;
        goto LAB_1808547bc;
      }
      if (puVar3 == puVar5) break;
    }
    uVar6 = 0;
    puVar3 = (uint64_t *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x28,&unknown_var_1696_ptr,0xbf,0);
    if (puVar3 == (uint64_t *)0x0) {
LAB_1808547b7:
      uVar6 = 0x26;
    }
    else {
      *puVar3 = puVar3;
      *(int32_t *)(puVar3 + 2) = uStack0000000000000040;
      *(int32_t *)((longlong)puVar3 + 0x14) = uStack0000000000000044;
      *(int32_t *)(puVar3 + 3) = param_3;
      *(int32_t *)((longlong)puVar3 + 0x1c) = param_4;
      puVar3[1] = puVar3;
      puVar3[4] = CONCAT44(in_stack_00000098,in_stack_00000090);
      puVar3[1] = *(uint64_t *)(param_1 + 0x88);
      *puVar3 = puVar5;
      *(uint64_t **)(param_1 + 0x88) = puVar3;
      *(uint64_t **)puVar3[1] = puVar3;
    }
  }
LAB_1808547bc:
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar4,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808547cb(void)

{
  int *piVar1;
  longlong unaff_RBP;
  int32_t unaff_EDI;
  
  piVar1 = (int *)(unaff_RBP + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0));
  }
  return unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180854810(longlong param_1,ulonglong param_2,int32_t param_3,uint64_t *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  int32_t uVar7;
  longlong lStackX_8;
  ulonglong uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  longlong lStack_38;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
    uVar4 = *(ulonglong *)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 0x38);
  }
  else {
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
  }
  if (param_2 < uVar4) {
    iVar3 = 0x1c;
    goto LAB_180854958;
  }
  *(int8_t *)(param_1 + 0x13c) = 0;
  uVar7 = 0;
  lStackX_8 = 0;
  if (param_4 != (uint64_t *)0x0) {
    uVar7 = 5;
    iVar3 = FUN_18085c4b0(param_1,*param_4,*(int32_t *)(param_4 + 1),0,&lStackX_8);
    if (iVar3 != 0) goto LAB_180854958;
  }
  if (lStackX_8 != 0) {
    *(int *)(lStackX_8 + 0x10) = *(int *)(lStackX_8 + 0x10) + 1;
  }
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_3c = uVar7;
  lStack_38 = lStackX_8;
  if ((((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) ||
     (puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10), param_2 != *puVar5)) {
    iVar3 = FUN_180859210(plVar1,&uStack_48);
    if (iVar3 == 0) goto LAB_180854920;
  }
  else {
    FUN_1808c6d60(puVar5,&uStack_48);
LAB_180854920:
    iVar3 = 0;
  }
  if (lStack_38 != 0) {
    piVar2 = (int *)(lStack_38 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lStack_38,&unknown_var_2208_ptr,0x76,1);
    }
  }
LAB_180854958:
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar6,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180854818(longlong param_1,ulonglong param_2,int32_t param_3,uint64_t *param_4,
                 uint64_t param_5,ulonglong param_6,uint64_t param_7,longlong param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong in_RAX;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  longlong lVar6;
  uint64_t unaff_RDI;
  int32_t uVar7;
  uint64_t unaff_R15;
  longlong in_stack_00000080;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RDI;
  plVar1 = (longlong *)(param_1 + 0x70);
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) {
    uVar4 = *(ulonglong *)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 0x38);
  }
  else {
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  }
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
  }
  if (param_2 < uVar4) {
    iVar3 = 0x1c;
    goto LAB_180854958;
  }
  *(int8_t *)(param_1 + 0x13c) = 0;
  uVar7 = 0;
  in_stack_00000080 = 0;
  if (param_4 != (uint64_t *)0x0) {
    uVar7 = 5;
    iVar3 = FUN_18085c4b0(param_1,*param_4,*(int32_t *)(param_4 + 1),0,&stack0x00000080);
    if (iVar3 != 0) goto LAB_180854958;
  }
  if (in_stack_00000080 != 0) {
    *(int *)(in_stack_00000080 + 0x10) = *(int *)(in_stack_00000080 + 0x10) + 1;
  }
  param_6 = param_2;
  param_7._0_4_ = param_3;
  param_7._4_4_ = uVar7;
  param_8 = in_stack_00000080;
  if ((((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x78) == plVar1)) ||
     (puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10), param_2 != *puVar5)) {
    iVar3 = FUN_180859210(plVar1,&param_6);
    if (iVar3 == 0) goto LAB_180854920;
  }
  else {
    FUN_1808c6d60(puVar5,&param_6);
LAB_180854920:
    iVar3 = 0;
  }
  if (param_8 != 0) {
    piVar2 = (int *)(param_8 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_8,&unknown_var_2208_ptr,0x76,1);
    }
  }
LAB_180854958:
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x10);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar6,&unknown_var_2208_ptr,0x76,1);
    }
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18085497c(void)

{
  int *piVar1;
  longlong unaff_RSI;
  int32_t unaff_R14D;
  
  piVar1 = (int *)(unaff_RSI + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0));
  }
  return unaff_R14D;
}



uint64_t FUN_1808549c0(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  if ((*param_3 == -1) ||
     (iVar2 = *(int *)(param_1[2] + 0x10 + (longlong)*param_3 * 0x18), *param_3 = iVar2, iVar2 == -1
     )) {
    iVar2 = 0;
    if (*param_2 != -1) {
      iVar2 = *param_2 + 1;
    }
    if (iVar2 != (int)param_1[1]) {
      lVar1 = (longlong)iVar2;
      piVar3 = (int *)(*param_1 + lVar1 * 4);
      do {
        if (*piVar3 != -1) {
          *param_2 = iVar2;
          *param_3 = *(int *)(*param_1 + (longlong)iVar2 * 4);
          return 0;
        }
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (lVar1 != (int)param_1[1]);
    }
    *param_2 = -1;
    *param_3 = -1;
  }
  return 0;
}



uint64_t
FUN_180854af0(uint64_t param_1,longlong *param_2,longlong param_3,longlong param_4,
             longlong param_5,ulonglong param_6,ulonglong param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int32_t uVar9;
  
  lVar2 = *param_2;
  plVar5 = (longlong *)(*(longlong *)(param_3 + 8) + -0x20);
  if (*(longlong *)(param_3 + 8) == 0) {
    plVar5 = (longlong *)0x0;
  }
  plVar8 = plVar5 + 4;
  if (plVar5 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  do {
    if (plVar8 == (longlong *)(param_3 + 8)) {
      return 0;
    }
    plVar5 = plVar8 + -4;
    if (plVar8 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if ((*(byte *)((longlong)plVar5 + 0x4c) & 1) == 0) {
      if ((*(byte *)((longlong)plVar5 + 0x4c) & 7) == 0) goto LAB_180854c5f;
    }
    else {
      if (((ulonglong)plVar5[8] < param_6) || (param_7 <= (ulonglong)plVar5[8])) {
LAB_180854c5f:
        if (((ulonglong)plVar5[6] < param_6) || (param_7 <= (ulonglong)plVar5[6]))
        goto LAB_180854bfc;
        lVar3 = (**(code **)*plVar5)(plVar5);
        plVar1 = (longlong *)(lVar2 + 0xc0);
        lVar7 = 0;
        plVar6 = (longlong *)*plVar1;
        if (plVar6 != plVar1) {
          while ((plVar6[2] != *(longlong *)(lVar3 + 0x40) ||
                 (plVar6[3] != *(longlong *)(lVar3 + 0x48)))) {
            lVar7 = lVar7 + 1;
            if ((plVar6 == plVar1) || (plVar6 = (longlong *)*plVar6, plVar6 == plVar1))
            goto LAB_180854bea;
          }
          if (-1 < lVar7) {
            uVar9 = *(int32_t *)(param_5 + lVar7 * 4);
            goto LAB_180854bed;
          }
        }
      }
      else {
        lVar3 = (**(code **)*plVar5)(plVar5);
        plVar1 = (longlong *)(lVar2 + 0xb0);
        lVar7 = 0;
        plVar6 = (longlong *)*plVar1;
        if (plVar6 != plVar1) {
          while ((plVar6[2] != *(longlong *)(lVar3 + 0x40) ||
                 (plVar6[3] != *(longlong *)(lVar3 + 0x48)))) {
            lVar7 = lVar7 + 1;
            if ((plVar6 == plVar1) || (plVar6 = (longlong *)*plVar6, plVar6 == plVar1))
            goto LAB_180854bea;
          }
          if (-1 < lVar7) {
            uVar9 = *(int32_t *)(param_4 + lVar7 * 4);
            goto LAB_180854bed;
          }
        }
      }
LAB_180854bea:
      uVar9 = 0x3f800000;
LAB_180854bed:
      uVar4 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar9);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
LAB_180854bfc:
    if (plVar8 == (longlong *)(param_3 + 8)) {
      return 0;
    }
    lVar3 = *plVar8 + -0x20;
    if (*plVar8 == 0) {
      lVar3 = 0;
    }
    plVar8 = (longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      plVar8 = (longlong *)0x0;
    }
  } while( true );
}



uint64_t
FUN_180854ce0(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint *param_5)

{
  int8_t auVar1 [16];
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  double dStackX_10;
  double adStack_38 [4];
  
  if ((*(uint *)(param_2 + 0x38) >> 4 & 1) == 0) {
    puVar10 = (uint *)(param_2 + 0x30);
LAB_180854d65:
    if (puVar10 != (uint *)0x0) {
      lVar8 = *(longlong *)(param_1 + 0x110);
      if (*(int *)(lVar8 + 0x90) == 0) {
        param_4 = param_4 - *puVar10;
        *param_5 = param_4;
        uVar4 = *(uint *)(param_3 + 0x24);
        if (uVar4 != 0) {
          uVar9 = param_4 % uVar4;
          uVar3 = *(uint *)(param_2 + 0x38) >> 3;
          if (uVar9 == 0) {
            if ((uVar3 & 1) != 0) {
              uVar4 = uVar4 - 1;
              if (param_4 != 0) {
                uVar4 = 0;
              }
              *param_5 = uVar4;
              return 0;
            }
            if (param_4 != 0) {
              *param_5 = uVar4 - 1;
              return 0;
            }
          }
          else if ((uVar3 & 1) != 0) {
            uVar9 = uVar4 - uVar9;
          }
          *param_5 = uVar9;
        }
      }
      else {
        dStackX_10 = 0.0;
        FUN_18084d840(lVar8,*puVar10,param_4 - *puVar10,&dStackX_10);
        FUN_180847820();
        FUN_18084da10();
        if (0 < *(int *)(lVar8 + 0x90)) {
          lVar7 = 0;
          puVar5 = (uint *)(*(longlong *)(lVar8 + 0x88) + 0x18);
          do {
            if ((*puVar5 < *puVar10) && (*puVar5 <= param_4)) break;
            lVar7 = lVar7 + 1;
            puVar5 = puVar5 + 8;
          } while (lVar7 < *(int *)(lVar8 + 0x90));
        }
        if (*(int *)(param_3 + 0x24) != 0) {
          adStack_38[0] = 0.0;
          FUN_18084d840(*(uint64_t *)(param_1 + 0x110),*(int32_t *)(param_3 + 0x20),
                        *(int32_t *)(param_3 + 0x24),adStack_38);
          dVar2 = dStackX_10 / adStack_38[0];
          lVar8 = (longlong)dVar2;
          if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar2)) {
            auVar1._8_4_ = SUB84(dVar2,0);
            auVar1._0_8_ = dVar2;
            auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
            uVar4 = movmskpd(0,auVar1);
            dVar2 = (double)(longlong)(lVar8 - (ulonglong)(uVar4 & 1));
          }
          dStackX_10 = dStackX_10 - dVar2 * adStack_38[0];
          if ((dStackX_10 < 1.1920928955078125e-07) && (1.1920928955078125e-07 < dVar2)) {
            dStackX_10 = adStack_38[0];
          }
          if ((*(uint *)(param_2 + 0x38) >> 3 & 1) != 0) {
            dStackX_10 = adStack_38[0] - dStackX_10;
          }
        }
        uVar6 = FUN_18084cbf0(*(uint64_t *)(param_1 + 0x110),*(int32_t *)(param_3 + 0x20),
                              dStackX_10,param_5);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar4 = *(uint *)(param_3 + 0x24);
        if ((*param_5 == uVar4) && (uVar4 != 0)) {
          *param_5 = uVar4 - 1;
        }
      }
      return 0;
    }
  }
  else {
    puVar5 = *(uint **)(*(longlong *)(param_1 + 0x110) + 0x78);
    for (puVar10 = puVar5 + 8;
        (puVar5 <= puVar10 + -8 &&
        (puVar10 + -8 < puVar5 + (longlong)*(int *)(*(longlong *)(param_1 + 0x110) + 0x80) * 10));
        puVar10 = puVar10 + 10) {
      uVar4 = *puVar10;
      if (uVar4 <= param_4) {
        uVar3 = 0xffffffff;
        if ((ulonglong)puVar10[1] + (ulonglong)uVar4 < 0x100000000) {
          uVar3 = puVar10[1] + uVar4;
        }
        if (param_4 < uVar3) goto LAB_180854d65;
      }
    }
  }
  *param_5 = 0;
  return 0;
}



uint64_t FUN_180854d7d(void)

{
  int8_t auVar1 [16];
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint unaff_EBX;
  uint uVar10;
  longlong unaff_RBP;
  uint *unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  double dStackX_20;
  double dStack0000000000000068;
  uint *in_stack_00000080;
  
  lVar8 = *(longlong *)(unaff_R15 + 0x110);
  if (*(int *)(lVar8 + 0x90) == 0) {
    uVar10 = unaff_EBX - *unaff_RDI;
    *in_stack_00000080 = uVar10;
    uVar4 = *(uint *)(unaff_RBP + 0x24);
    if (uVar4 != 0) {
      uVar9 = uVar10 % uVar4;
      uVar3 = *(uint *)(unaff_R14 + 0x38) >> 3;
      if (uVar9 == 0) {
        if ((uVar3 & 1) != 0) {
          uVar4 = uVar4 - 1;
          if (uVar10 != 0) {
            uVar4 = 0;
          }
          *in_stack_00000080 = uVar4;
          return 0;
        }
        if (uVar10 != 0) {
          *in_stack_00000080 = uVar4 - 1;
          return 0;
        }
      }
      else if ((uVar3 & 1) != 0) {
        uVar9 = uVar4 - uVar9;
      }
      *in_stack_00000080 = uVar9;
    }
  }
  else {
    dStack0000000000000068 = 0.0;
    FUN_18084d840(lVar8,*unaff_RDI,unaff_EBX - *unaff_RDI,&stack0x00000068);
    FUN_180847820();
    FUN_18084da10();
    if (0 < *(int *)(lVar8 + 0x90)) {
      lVar7 = 0;
      puVar5 = (uint *)(*(longlong *)(lVar8 + 0x88) + 0x18);
      do {
        if ((*puVar5 < *unaff_RDI) && (*puVar5 <= unaff_EBX)) break;
        lVar7 = lVar7 + 1;
        puVar5 = puVar5 + 8;
      } while (lVar7 < *(int *)(lVar8 + 0x90));
    }
    if (*(int *)(unaff_RBP + 0x24) != 0) {
      dStackX_20 = 0.0;
      FUN_18084d840(*(uint64_t *)(unaff_R15 + 0x110),*(int32_t *)(unaff_RBP + 0x20),
                    *(int32_t *)(unaff_RBP + 0x24),&dStackX_20);
      dVar2 = dStack0000000000000068 / dStackX_20;
      lVar8 = (longlong)dVar2;
      if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar2)) {
        auVar1._8_4_ = SUB84(dVar2,0);
        auVar1._0_8_ = dVar2;
        auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uVar4 = movmskpd(0,auVar1);
        dVar2 = (double)(longlong)(lVar8 - (ulonglong)(uVar4 & 1));
      }
      dStack0000000000000068 = dStack0000000000000068 - dVar2 * dStackX_20;
      if ((dStack0000000000000068 < 1.1920928955078125e-07) && (1.1920928955078125e-07 < dVar2)) {
        dStack0000000000000068 = dStackX_20;
      }
      if ((*(uint *)(unaff_R14 + 0x38) >> 3 & 1) != 0) {
        dStack0000000000000068 = dStackX_20 - dStack0000000000000068;
      }
    }
    puVar5 = in_stack_00000080;
    uVar6 = FUN_18084cbf0(*(uint64_t *)(unaff_R15 + 0x110),*(int32_t *)(unaff_RBP + 0x20),
                          dStack0000000000000068,in_stack_00000080);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar4 = *(uint *)(unaff_RBP + 0x24);
    if ((*puVar5 == uVar4) && (uVar4 != 0)) {
      *puVar5 = uVar4 - 1;
    }
  }
  return 0;
}



uint64_t FUN_180854df5(uint64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  int8_t auVar2 [16];
  double dVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint64_t uVar7;
  longlong lVar8;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  double dStackX_20;
  double dStack0000000000000068;
  int *in_stack_00000080;
  
  dStack0000000000000068 = 0.0;
  FUN_18084d840(param_1,*unaff_RDI,param_3 - *unaff_RDI,&stack0x00000068);
  FUN_180847820();
  FUN_18084da10();
  if (0 < *(int *)(unaff_RSI + 0x90)) {
    lVar8 = 0;
    puVar6 = (uint *)(*(longlong *)(unaff_RSI + 0x88) + 0x18);
    do {
      if ((*puVar6 < *unaff_RDI) && (*puVar6 <= unaff_EBX)) break;
      lVar8 = lVar8 + 1;
      puVar6 = puVar6 + 8;
    } while (lVar8 < *(int *)(unaff_RSI + 0x90));
  }
  if (*(int *)(unaff_RBP + 0x24) != 0) {
    dStackX_20 = 0.0;
    FUN_18084d840(*(uint64_t *)(unaff_R15 + 0x110),*(int32_t *)(unaff_RBP + 0x20),
                  *(int32_t *)(unaff_RBP + 0x24),&dStackX_20);
    dVar3 = dStack0000000000000068 / dStackX_20;
    lVar8 = (longlong)dVar3;
    if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar3)) {
      auVar2._8_4_ = SUB84(dVar3,0);
      auVar2._0_8_ = dVar3;
      auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uVar5 = movmskpd(0,auVar2);
      dVar3 = (double)(longlong)(lVar8 - (ulonglong)(uVar5 & 1));
    }
    dStack0000000000000068 = dStack0000000000000068 - dVar3 * dStackX_20;
    if ((dStack0000000000000068 < 1.1920928955078125e-07) && (1.1920928955078125e-07 < dVar3)) {
      dStack0000000000000068 = dStackX_20;
    }
    if ((*(uint *)(unaff_R14 + 0x38) >> 3 & 1) != 0) {
      dStack0000000000000068 = dStackX_20 - dStack0000000000000068;
    }
  }
  piVar4 = in_stack_00000080;
  uVar7 = FUN_18084cbf0(*(uint64_t *)(unaff_R15 + 0x110),*(int32_t *)(unaff_RBP + 0x20),
                        dStack0000000000000068,in_stack_00000080);
  if ((int)uVar7 == 0) {
    iVar1 = *(int *)(unaff_RBP + 0x24);
    if ((*piVar4 == iVar1) && (iVar1 != 0)) {
      *piVar4 = iVar1 + -1;
    }
    uVar7 = 0;
  }
  return uVar7;
}



uint64_t FUN_180854f3f(void)

{
  int iVar1;
  int *unaff_RBX;
  longlong unaff_RBP;
  
  iVar1 = *(int *)(unaff_RBP + 0x24);
  if ((*unaff_RBX == iVar1) && (iVar1 != 0)) {
    *unaff_RBX = iVar1 + -1;
  }
  return 0;
}







