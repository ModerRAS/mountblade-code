#include "TaleWorlds.Native.Split.h"

// 99_part_09_part088_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805f83e0(int *param_1,longlong *param_2,longlong *param_3)
void FUN_1805f83e0(int *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  float fVar16;
  char acStackX_18 [8];
  int8_t auStackX_20 [8];
  int8_t auStack_d8 [8];
  uint64_t uStack_d0;
  int32_t auStack_c0 [2];
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int8_t *puStack_98;
  int32_t *puStack_90;
  longlong *plStack_88;
  char *pcStack_80;
  longlong *plStack_78;
  uint64_t *puStack_70;
  int8_t *puStack_68;
  uint64_t *puStack_60;
  longlong *aplStack_58 [2];
  code *pcStack_48;
  void *puStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  auStackX_20[0] = 0;
  if (0 < (int)((param_3[1] - *param_3) / 0xd08)) {
    acStackX_18[0] = '\0';
    uStack_b8 = 0x7f7fffff7f7fffff;
    uStack_b0 = 0x7f7fffff7f7fffff;
    uStack_a8 = 0xff7fffffff7fffff;
    uStack_a0 = 0x7f7fffffff7fffff;
    auStack_c0[0] = (int32_t)(param_2[1] - *param_2 >> 3);
    auStack_d8[0] = 0;
    uStack_d0 = aplStack_58;
    puStack_98 = auStackX_20;
    puStack_90 = auStack_c0;
    pcStack_80 = acStackX_18;
    puStack_70 = &uStack_a8;
    puStack_68 = auStack_d8;
    puStack_60 = &uStack_b8;
    pcStack_48 = FUN_1805f8820;
    puStack_40 = &UNK_1805f8810;
    plStack_88 = param_2;
    plStack_78 = param_3;
    aplStack_58[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,system_allocation_flags);
    *aplStack_58[0] = (longlong)puStack_98;
    aplStack_58[0][1] = (longlong)puStack_90;
    aplStack_58[0][2] = (longlong)plStack_88;
    aplStack_58[0][3] = (longlong)pcStack_80;
    aplStack_58[0][4] = (longlong)plStack_78;
    aplStack_58[0][5] = (longlong)puStack_70;
    aplStack_58[0][6] = (longlong)puStack_68;
    aplStack_58[0][7] = (longlong)puStack_60;
    uVar1 = FUN_18015b810();
    if (acStackX_18[0] == '\0') {
      *param_1 = 0;
      iVar3 = 2;
      param_1[1] = 2;
      param_1[2] = 0;
      param_1[3] = 2;
      param_1[4] = 0;
      param_1[5] = 1;
      iVar4 = 2;
      iVar5 = 0;
      iVar9 = 0;
      iVar7 = 1;
      iVar8 = 0;
    }
    else {
      fVar16 = (float)uStack_b8 * 12.5;
      uStack_b8._4_4_ = uStack_b8._4_4_ * 12.5;
      uStack_b0._0_4_ = (float)uStack_b0 * 12.5;
      auVar10._0_4_ = (float)uStack_a8 * 12.5;
      auVar14._0_4_ = uStack_a8._4_4_ * 12.5;
      auVar12._0_4_ = (float)uStack_a0 * 12.5;
      if (fVar16 <= 0.0) {
        fVar16 = fVar16 - 0.9999999;
      }
      iVar5 = (int)fVar16;
      if (uStack_b8._4_4_ <= 0.0) {
        uStack_b8._4_4_ = uStack_b8._4_4_ - 0.9999999;
      }
      iVar9 = (int)uStack_b8._4_4_;
      if ((float)uStack_b0 <= 0.0) {
        uStack_b0._0_4_ = (float)uStack_b0 - 0.9999999;
      }
      iVar8 = (int)(float)uStack_b0;
      iVar3 = (int)auVar10._0_4_;
      if (auVar10._0_4_ <= 0.0) {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar10._0_4_)) {
          auVar11._4_4_ = auVar10._0_4_;
          auVar11._0_4_ = auVar10._0_4_;
          auVar11._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar11);
          uVar1 = uVar1 & 1 ^ 1;
          auVar10._0_4_ = (float)(int)(iVar3 + uVar1);
        }
        auVar10._0_4_ = auVar10._0_4_ - 1e-08;
      }
      else {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar10._0_4_)) {
          auVar10._4_4_ = auVar10._0_4_;
          auVar10._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar10);
          uVar1 = uVar1 & 1 ^ 1;
          auVar10._0_4_ = (float)(int)(iVar3 + uVar1);
        }
        auVar10._0_4_ = auVar10._0_4_ + 1e-08;
      }
      iVar3 = (int)auVar14._0_4_;
      if (auVar14._0_4_ <= 0.0) {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar14._0_4_)) {
          auVar15._4_4_ = auVar14._0_4_;
          auVar15._0_4_ = auVar14._0_4_;
          auVar15._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar15);
          uVar1 = uVar1 & 1 ^ 1;
          auVar14._0_4_ = (float)(int)(iVar3 + uVar1);
        }
        auVar14._0_4_ = auVar14._0_4_ - 1e-08;
      }
      else {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar14._0_4_)) {
          auVar14._4_4_ = auVar14._0_4_;
          auVar14._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar14);
          uVar1 = uVar1 & 1 ^ 1;
          auVar14._0_4_ = (float)(int)(iVar3 + uVar1);
        }
        auVar14._0_4_ = auVar14._0_4_ + 1e-08;
      }
      iVar3 = (int)auVar12._0_4_;
      if (auVar12._0_4_ <= 0.0) {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar12._0_4_)) {
          auVar13._4_4_ = auVar12._0_4_;
          auVar13._0_4_ = auVar12._0_4_;
          auVar13._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar13);
          auVar12._0_4_ = (float)(int)(iVar3 + (uVar1 & 1 ^ 1));
        }
        auVar12._0_4_ = auVar12._0_4_ - 1e-08;
      }
      else {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar12._0_4_)) {
          auVar12._4_4_ = auVar12._0_4_;
          auVar12._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar12);
          auVar12._0_4_ = (float)(int)(iVar3 + (uVar1 & 1 ^ 1));
        }
        auVar12._0_4_ = auVar12._0_4_ + 1e-08;
      }
      iVar2 = 0;
      iVar7 = 0;
      for (iVar3 = (int)auVar10._0_4_ - iVar5; iVar3 != 0; iVar3 = iVar3 >> 1) {
        iVar7 = iVar7 + 1;
      }
      iVar6 = 0;
      for (iVar3 = (int)auVar14._0_4_ - iVar9; iVar3 != 0; iVar3 = iVar3 >> 1) {
        iVar6 = iVar6 + 1;
      }
      for (iVar3 = (int)auVar12._0_4_ - iVar8; iVar3 != 0; iVar3 = iVar3 >> 1) {
        iVar2 = iVar2 + 1;
      }
      *param_1 = iVar5;
      iVar4 = 2;
      if (2 < iVar7) {
        iVar4 = iVar7;
      }
      param_1[1] = iVar4;
      param_1[2] = iVar9;
      iVar3 = 2;
      if (2 < iVar6) {
        iVar3 = iVar6;
      }
      param_1[3] = iVar3;
      param_1[4] = iVar8;
      iVar7 = 1;
      if (1 < iVar2) {
        iVar7 = iVar2;
      }
      param_1[5] = iVar7;
    }
    uStack_d0 = (longlong **)CONCAT44((1 << ((byte)iVar4 & 0x1f)) + -1 + iVar5,iVar5);
    *(longlong ***)(param_1 + 6) = uStack_d0;
    param_1[8] = iVar4;
    uStack_d0 = (longlong **)CONCAT44((1 << ((byte)iVar3 & 0x1f)) + -1 + iVar9,iVar9);
    *(longlong ***)(param_1 + 9) = uStack_d0;
    param_1[0xb] = iVar3;
    uStack_d0 = (longlong **)CONCAT44(iVar8 + -1 + (1 << ((byte)iVar7 & 0x1f)),iVar8);
    *(longlong ***)(param_1 + 0xc) = uStack_d0;
    param_1[0xe] = iVar7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805f8820(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0bc40;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805f8910(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0bc00;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



char FUN_1805f8a00(uint64_t param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  
  bVar2 = false;
  cVar1 = FUN_18055f260(param_1,param_2,&system_data_bc90);
  if ((cVar1 == '\0') || (cVar1 = FUN_18055f260(param_1,param_2 + 8,&UNK_1809fae78), cVar1 == '\0'))
  {
LAB_1805f8a6d:
    cVar1 = '\0';
  }
  else {
    auStackX_10[0] = 0;
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar2 = auStackX_10[0] != 0;
    if (cVar1 == '\0') goto LAB_1805f8a6d;
    cVar1 = '\x01';
  }
  if (bVar2 == false) {
    return cVar1;
  }
  auStackX_18[0] = 0;
  if ((cVar1 == '\0') || (cVar1 = FUN_180646500(param_1,auStackX_18,&UNK_1809fae98), cVar1 == '\0'))
  {
LAB_1805f8abe:
    cVar1 = '\0';
  }
  else {
    auStackX_10[0] = (uint)bVar2;
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar2 = auStackX_10[0] != 0;
    if (cVar1 == '\0') goto LAB_1805f8abe;
    cVar1 = '\x01';
  }
  *(ulonglong *)(param_2 + 0x20) = (ulonglong)auStackX_18[0];
  if (bVar2 == false) {
    return cVar1;
  }
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_180646700(param_1,param_2 + 0x2c,&UNK_1809fadd8), cVar1 == '\0')) {
LAB_1805f8b13:
    cVar1 = '\0';
  }
  else {
    auStackX_10[0] = 1;
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar2 = auStackX_10[0] != 0;
    if (cVar1 == '\0') goto LAB_1805f8b13;
    cVar1 = '\x01';
  }
  if (bVar2 == false) {
    return cVar1;
  }
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_180646700(param_1,param_2 + 0x30,&UNK_1809fade8), cVar1 == '\0')) {
LAB_1805f8b66:
    cVar1 = '\0';
  }
  else {
    auStackX_10[0] = 1;
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar2 = auStackX_10[0] != 0;
    if (cVar1 == '\0') goto LAB_1805f8b66;
    cVar1 = '\x01';
  }
  if (*(float *)(param_2 + 0x30) <= 0.0 && *(float *)(param_2 + 0x30) != 0.0) {
    *(int32_t *)(param_2 + 0x30) = 0xbe4ccccd;
  }
  if (bVar2 == false) {
    return cVar1;
  }
  if (cVar1 == '\0') {
LAB_1805f8bda:
    cVar1 = '\0';
  }
  else {
    auStackX_10[0] = (uint)(*(char *)(param_2 + 0x40) != '\0');
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    *(bool *)(param_2 + 0x40) = auStackX_10[0] != 0;
    if (cVar1 == '\0') goto LAB_1805f8bda;
    auStackX_10[0] = 1;
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar2 = auStackX_10[0] != 0;
    if (cVar1 == '\0') goto LAB_1805f8bda;
    cVar1 = '\x01';
  }
  if (bVar2 == false) {
    return cVar1;
  }
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_180646700(param_1,param_2 + 0x38,&UNK_1809fade8), cVar1 == '\0')) {
LAB_1805f8c28:
    cVar1 = '\0';
  }
  else {
    auStackX_10[0] = 1;
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar2 = auStackX_10[0] != 0;
    if (cVar1 == '\0') goto LAB_1805f8c28;
    cVar1 = '\x01';
  }
  if (*(float *)(param_2 + 0x38) <= 0.0 && *(float *)(param_2 + 0x38) != 0.0) {
    *(int32_t *)(param_2 + 0x38) = 0x3ecccccd;
  }
  if (bVar2 == false) {
    return cVar1;
  }
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_180646700(param_1,param_2 + 0x3c,&UNK_1809fadf8), cVar1 == '\0')) {
LAB_1805f8c83:
    cVar1 = '\0';
  }
  else {
    auStackX_10[0] = 1;
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar2 = auStackX_10[0] != 0;
    if (cVar1 == '\0') goto LAB_1805f8c83;
    cVar1 = '\x01';
  }
  if (bVar2 == false) {
    return cVar1;
  }
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_180646700(param_1,param_2 + 0x28,&UNK_1809fae08), cVar1 != '\0')) {
    auStackX_10[0] = 1;
    cVar1 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar2 = auStackX_10[0] != 0;
    if (cVar1 != '\0') {
      cVar1 = '\x01';
      goto LAB_1805f8ccf;
    }
  }
  cVar1 = '\0';
LAB_1805f8ccf:
  if (bVar2 != false) {
    if ((cVar1 == '\0') ||
       (cVar1 = FUN_180646700(param_1,param_2 + 0x34,&UNK_1809fade8), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    if (*(float *)(param_2 + 0x34) <= 0.0 && *(float *)(param_2 + 0x34) != 0.0) {
      *(int32_t *)(param_2 + 0x34) = 0xbe4ccccd;
    }
  }
  return cVar1;
}



char FUN_1805f8b1d(char param_1)

{
  char cVar1;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint64_t unaff_R14;
  
  if ((param_1 == '\0') || (cVar1 = FUN_180646700(), cVar1 == '\0')) {
LAB_1805f8b66:
    cVar1 = '\0';
  }
  else {
    *(int32_t *)(unaff_RBP + 0x28) = 1;
    cVar1 = FUN_18055f260();
    unaff_BL = *(int *)(unaff_RBP + 0x28) != (int)unaff_R14;
    if (cVar1 == '\0') goto LAB_1805f8b66;
    cVar1 = '\x01';
  }
  if (*(float *)(unaff_RDI + 0x30) <= 0.0 && *(float *)(unaff_RDI + 0x30) != 0.0) {
    *(int32_t *)(unaff_RDI + 0x30) = 0xbe4ccccd;
  }
  if (unaff_BL == '\0') {
    return cVar1;
  }
  if (cVar1 == '\0') {
LAB_1805f8bda:
    cVar1 = '\0';
  }
  else {
    *(int *)(unaff_RBP + 0x28) =
         (int)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),
                       *(char *)(unaff_RDI + 0x40) != (char)unaff_R14);
    cVar1 = FUN_18055f260();
    *(bool *)(unaff_RDI + 0x40) = *(int *)(unaff_RBP + 0x28) != 0;
    if (cVar1 == '\0') goto LAB_1805f8bda;
    *(int32_t *)(unaff_RBP + 0x28) = 1;
    cVar1 = FUN_18055f260();
    unaff_BL = *(int *)(unaff_RBP + 0x28) != 0;
    if (cVar1 == '\0') goto LAB_1805f8bda;
    cVar1 = '\x01';
  }
  if (unaff_BL == '\0') {
    return cVar1;
  }
  if ((cVar1 == '\0') || (cVar1 = FUN_180646700(), cVar1 == '\0')) {
LAB_1805f8c28:
    cVar1 = '\0';
  }
  else {
    *(int32_t *)(unaff_RBP + 0x28) = 1;
    cVar1 = FUN_18055f260();
    unaff_BL = *(int *)(unaff_RBP + 0x28) != 0;
    if (cVar1 == '\0') goto LAB_1805f8c28;
    cVar1 = '\x01';
  }
  if (*(float *)(unaff_RDI + 0x38) <= 0.0 && *(float *)(unaff_RDI + 0x38) != 0.0) {
    *(int32_t *)(unaff_RDI + 0x38) = 0x3ecccccd;
  }
  if (unaff_BL == '\0') {
    return cVar1;
  }
  if ((cVar1 == '\0') || (cVar1 = FUN_180646700(), cVar1 == '\0')) {
LAB_1805f8c83:
    cVar1 = '\0';
  }
  else {
    *(int32_t *)(unaff_RBP + 0x28) = 1;
    cVar1 = FUN_18055f260();
    unaff_BL = *(int *)(unaff_RBP + 0x28) != 0;
    if (cVar1 == '\0') goto LAB_1805f8c83;
    cVar1 = '\x01';
  }
  if (unaff_BL == '\0') {
    return cVar1;
  }
  if ((cVar1 != '\0') && (cVar1 = FUN_180646700(), cVar1 != '\0')) {
    *(int32_t *)(unaff_RBP + 0x28) = 1;
    cVar1 = FUN_18055f260();
    unaff_BL = *(int *)(unaff_RBP + 0x28) != 0;
    if (cVar1 != '\0') {
      cVar1 = '\x01';
      goto LAB_1805f8ccf;
    }
  }
  cVar1 = '\0';
LAB_1805f8ccf:
  if (unaff_BL != '\0') {
    if ((cVar1 == '\0') || (cVar1 = FUN_180646700(), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    if (*(float *)(unaff_RDI + 0x34) <= 0.0 && *(float *)(unaff_RDI + 0x34) != 0.0) {
      *(int32_t *)(unaff_RDI + 0x34) = 0xbe4ccccd;
    }
    return cVar1;
  }
  return cVar1;
}



int8_t FUN_1805f8d06(int8_t param_1)

{
  return param_1;
}



uint64_t FUN_1805f8d20(longlong param_1,int32_t *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  int32_t uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  cVar5 = FUN_180645c10(param_1,*param_2,&system_data_bc90);
  if ((cVar5 == '\0') || (cVar5 = FUN_180645c10(param_1,param_2[2],&UNK_1809fae78), cVar5 == '\0'))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((float)param_2[0xd] == -0.2) {
    if ((float)param_2[10] == 0.0) {
      if ((float)param_2[0xf] == 0.0) {
        if ((float)param_2[0xe] == 0.4) {
          if (*(char *)(param_2 + 0x10) == '\0') {
            if ((float)param_2[0xc] == -0.2) {
              if ((float)param_2[0xb] == 1.0) {
                if (*(longlong *)(param_2 + 8) == 0) goto LAB_1805f917f;
                uVar8 = 1;
              }
              else {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 3;
            }
          }
          else {
            uVar8 = 4;
          }
        }
        else {
          uVar8 = 5;
        }
      }
      else {
        uVar8 = 6;
      }
    }
    else {
      uVar8 = 7;
    }
  }
  else {
    uVar8 = 8;
  }
  uVar3 = param_2[8];
  if (((bVar4) && (cVar5 = FUN_180645c10(param_1,1,&UNK_1809fae88), cVar5 != '\0')) &&
     (cVar5 = FUN_180645ce0(param_1,uVar3,&UNK_1809fae98), cVar5 != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (1 < uVar8) {
    if ((bVar4) && (cVar5 = FUN_180645c10(param_1,1,&UNK_1809fae88), cVar5 != '\0')) {
      uVar6 = FUN_18055f6f0(&UNK_1809fadd8,param_2[0xb]);
      uVar9 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
      iVar7 = *(int *)(param_1 + 0x5c4) + uVar9;
      bVar4 = true;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar6 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 10;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 10;
    }
    else {
      bVar4 = false;
    }
  }
  if (2 < uVar8) {
    if ((bVar4) && (cVar5 = FUN_180645c10(param_1,1,&UNK_1809fae88), cVar5 != '\0')) {
      uVar6 = FUN_18055f6f0(&UNK_1809fade8,param_2[0xc]);
      uVar9 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
      iVar7 = *(int *)(param_1 + 0x5c4) + uVar9;
      bVar4 = true;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar6 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 6;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 6;
    }
    else {
      bVar4 = false;
    }
  }
  if (3 < uVar8) {
    if (((bVar4) && (cVar5 = FUN_180645c10(param_1,1,&UNK_1809fae88), cVar5 != '\0')) &&
       (cVar5 = FUN_180645c10(param_1,*(int8_t *)(param_2 + 0x10),&UNK_1809fae88), cVar5 != '\0'
       )) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  if (4 < uVar8) {
    if ((bVar4) && (cVar5 = FUN_180645c10(param_1,1,&UNK_1809fae88), cVar5 != '\0')) {
      uVar6 = FUN_18055f6f0(&UNK_1809fade8,param_2[0xe]);
      uVar9 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
      iVar7 = *(int *)(param_1 + 0x5c4) + uVar9;
      bVar4 = true;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar6 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 6;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 6;
    }
    else {
      bVar4 = false;
    }
  }
  if (5 < uVar8) {
    fVar2 = (float)param_2[0xf];
    fVar10 = 0.0;
    if ((0.0 <= fVar2) && (fVar10 = fVar2, 1.0 <= fVar2)) {
      fVar10 = 1.0;
    }
    if ((bVar4) && (cVar5 = FUN_180645c10(param_1,1,&UNK_1809fae88), cVar5 != '\0')) {
      uVar6 = FUN_18055f6f0(&UNK_1809fadf8,fVar10);
      uVar9 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
      iVar7 = *(int *)(param_1 + 0x5c4) + uVar9;
      bVar4 = true;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar6 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 6;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 6;
    }
    else {
      bVar4 = false;
    }
  }
  if (6 < uVar8) {
    fVar2 = (float)param_2[10];
    fVar10 = 0.0;
    if ((0.0 <= fVar2) && (fVar10 = fVar2, 1.0 <= fVar2)) {
      fVar10 = 1.0;
    }
    if ((bVar4) && (cVar5 = FUN_180645c10(param_1,1,&UNK_1809fae88), cVar5 != '\0')) {
      uVar6 = FUN_18055f6f0(&UNK_1809fae08,fVar10);
      uVar9 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
      iVar7 = *(int *)(param_1 + 0x5c4) + uVar9;
      bVar4 = true;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar6 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 7;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 7;
    }
    else {
      bVar4 = false;
    }
  }
  if (7 < uVar8) {
    if (!bVar4) {
      return 0;
    }
    cVar5 = FUN_180645c10(param_1,1,&UNK_1809fae88);
    if (cVar5 == '\0') {
      return 0;
    }
    uVar8 = FUN_18055f6f0(&UNK_1809fade8,param_2[0xd]);
    uVar6 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
    iVar7 = *(int *)(param_1 + 0x5c4) + uVar6;
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | (ulonglong)uVar8 << (((byte)iVar7 & 0x1f) - (char)uVar6 & 0x3f);
    *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 6;
    *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 6;
    return 1;
  }
LAB_1805f917f:
  if ((bVar4) && (cVar5 = FUN_180645c10(param_1,0,&UNK_1809fae88), cVar5 != '\0')) {
    return 1;
  }
  return 0;
}



uint64_t FUN_1805f8de9(float param_1)

{
  ulonglong *puVar1;
  int32_t uVar2;
  bool bVar3;
  char in_AL;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong unaff_RBX;
  uint unaff_ESI;
  longlong unaff_RDI;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float fVar8;
  
  uVar2 = *(int32_t *)(unaff_RDI + 0x20);
  if (in_AL == '\0') {
LAB_1805f8e26:
    bVar3 = false;
  }
  else {
    cVar4 = FUN_180645c10(param_1,1,&UNK_1809fae88);
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_1805f8e26;
    cVar4 = FUN_180645ce0(extraout_XMM0_Da,uVar2,&UNK_1809fae98);
    param_1 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_1805f8e26;
    bVar3 = true;
  }
  if (1 < unaff_ESI) {
    if (bVar3) {
      cVar4 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_01;
      if (cVar4 != '\0') {
        uVar5 = FUN_18055f6f0(&UNK_1809fadd8,*(int32_t *)(unaff_RDI + 0x2c));
        uVar7 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar6 = *(int *)(unaff_RBX + 0x5c4) + uVar7;
        bVar3 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar5 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 10;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 10;
        param_1 = extraout_XMM0_Da_02;
        goto LAB_1805f8ea2;
      }
    }
    bVar3 = false;
  }
LAB_1805f8ea2:
  if (2 < unaff_ESI) {
    if (bVar3) {
      cVar4 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_03;
      if (cVar4 != '\0') {
        uVar5 = FUN_18055f6f0(&UNK_1809fade8,*(int32_t *)(unaff_RDI + 0x30));
        uVar7 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar6 = *(int *)(unaff_RBX + 0x5c4) + uVar7;
        bVar3 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar5 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
        param_1 = extraout_XMM0_Da_04;
        goto LAB_1805f8f17;
      }
    }
    bVar3 = false;
  }
LAB_1805f8f17:
  if (3 < unaff_ESI) {
    if (bVar3) {
      cVar4 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_05;
      if (cVar4 != '\0') {
        cVar4 = FUN_180645c10(extraout_XMM0_Da_05,*(int8_t *)(unaff_RDI + 0x40),&UNK_1809fae88);
        param_1 = extraout_XMM0_Da_06;
        if (cVar4 != '\0') {
          bVar3 = true;
          goto LAB_1805f8f55;
        }
      }
    }
    bVar3 = false;
  }
LAB_1805f8f55:
  if (4 < unaff_ESI) {
    if (bVar3) {
      cVar4 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_07;
      if (cVar4 != '\0') {
        uVar5 = FUN_18055f6f0(&UNK_1809fade8,*(int32_t *)(unaff_RDI + 0x38));
        uVar7 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar6 = *(int *)(unaff_RBX + 0x5c4) + uVar7;
        bVar3 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar5 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
        param_1 = extraout_XMM0_Da_08;
        goto FUN_1805f8fca;
      }
    }
    bVar3 = false;
  }
FUN_1805f8fca:
  if (5 < unaff_ESI) {
    param_1 = *(float *)(unaff_RDI + 0x3c);
    fVar8 = 0.0;
    if ((0.0 <= param_1) && (fVar8 = param_1, 1.0 <= param_1)) {
      fVar8 = 1.0;
    }
    if (bVar3) {
      cVar4 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_09;
      if (cVar4 != '\0') {
        uVar5 = FUN_18055f6f0(&UNK_1809fadf8,fVar8);
        uVar7 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar6 = *(int *)(unaff_RBX + 0x5c4) + uVar7;
        bVar3 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar5 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
        param_1 = extraout_XMM0_Da_10;
        goto LAB_1805f905e;
      }
    }
    bVar3 = false;
  }
LAB_1805f905e:
  if (6 < unaff_ESI) {
    param_1 = *(float *)(unaff_RDI + 0x28);
    fVar8 = 0.0;
    if ((0.0 <= param_1) && (fVar8 = param_1, 1.0 <= param_1)) {
      fVar8 = 1.0;
    }
    if (bVar3) {
      cVar4 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_11;
      if (cVar4 != '\0') {
        uVar5 = FUN_18055f6f0(&UNK_1809fae08,fVar8);
        uVar7 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar6 = *(int *)(unaff_RBX + 0x5c4) + uVar7;
        bVar3 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar5 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 7;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 7;
        param_1 = extraout_XMM0_Da_12;
        goto LAB_1805f90ed;
      }
    }
    bVar3 = false;
  }
LAB_1805f90ed:
  if (unaff_ESI < 8) {
    if (bVar3) {
      cVar4 = FUN_180645c10(param_1,0,&UNK_1809fae88);
      if (cVar4 != '\0') {
        return 1;
      }
    }
  }
  else if (bVar3) {
    cVar4 = FUN_180645c10(param_1,1,&UNK_1809fae88);
    if (cVar4 != '\0') {
      uVar5 = FUN_18055f6f0(&UNK_1809fade8,*(int32_t *)(unaff_RDI + 0x34));
      uVar7 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
      iVar6 = *(int *)(unaff_RBX + 0x5c4) + uVar7;
      puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar5 << (((byte)iVar6 & 0x1f) - (char)uVar7 & 0x3f);
      *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
      *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
      return 1;
    }
  }
  return 0;
}



uint64_t FUN_1805f8e32(float param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  char in_AL;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong unaff_RBX;
  uint unaff_ESI;
  longlong unaff_RDI;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float fVar7;
  
  if (in_AL == '\0') {
LAB_1805f8ea0:
    bVar2 = false;
  }
  else {
    cVar3 = FUN_180645c10(param_1,1,&UNK_1809fae88);
    param_1 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_1805f8ea0;
    uVar4 = FUN_18055f6f0(&UNK_1809fadd8,*(int32_t *)(unaff_RDI + 0x2c));
    uVar6 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
    iVar5 = *(int *)(unaff_RBX + 0x5c4) + uVar6;
    bVar2 = true;
    puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 | (ulonglong)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
    *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 10;
    *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 10;
    param_1 = extraout_XMM0_Da_00;
  }
  if (2 < unaff_ESI) {
    if (bVar2) {
      cVar3 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_01;
      if (cVar3 != '\0') {
        uVar4 = FUN_18055f6f0(&UNK_1809fade8,*(int32_t *)(unaff_RDI + 0x30));
        uVar6 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar5 = *(int *)(unaff_RBX + 0x5c4) + uVar6;
        bVar2 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
        param_1 = extraout_XMM0_Da_02;
        goto LAB_1805f8f17;
      }
    }
    bVar2 = false;
  }
LAB_1805f8f17:
  if (3 < unaff_ESI) {
    if (bVar2) {
      cVar3 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_03;
      if (cVar3 != '\0') {
        cVar3 = FUN_180645c10(extraout_XMM0_Da_03,*(int8_t *)(unaff_RDI + 0x40),&UNK_1809fae88);
        param_1 = extraout_XMM0_Da_04;
        if (cVar3 != '\0') {
          bVar2 = true;
          goto LAB_1805f8f55;
        }
      }
    }
    bVar2 = false;
  }
LAB_1805f8f55:
  if (4 < unaff_ESI) {
    if (bVar2) {
      cVar3 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_05;
      if (cVar3 != '\0') {
        uVar4 = FUN_18055f6f0(&UNK_1809fade8,*(int32_t *)(unaff_RDI + 0x38));
        uVar6 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar5 = *(int *)(unaff_RBX + 0x5c4) + uVar6;
        bVar2 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
        param_1 = extraout_XMM0_Da_06;
        goto FUN_1805f8fca;
      }
    }
    bVar2 = false;
  }
FUN_1805f8fca:
  if (5 < unaff_ESI) {
    param_1 = *(float *)(unaff_RDI + 0x3c);
    fVar7 = 0.0;
    if ((0.0 <= param_1) && (fVar7 = param_1, 1.0 <= param_1)) {
      fVar7 = 1.0;
    }
    if (bVar2) {
      cVar3 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_07;
      if (cVar3 != '\0') {
        uVar4 = FUN_18055f6f0(&UNK_1809fadf8,fVar7);
        uVar6 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar5 = *(int *)(unaff_RBX + 0x5c4) + uVar6;
        bVar2 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
        param_1 = extraout_XMM0_Da_08;
        goto LAB_1805f905e;
      }
    }
    bVar2 = false;
  }
LAB_1805f905e:
  if (6 < unaff_ESI) {
    param_1 = *(float *)(unaff_RDI + 0x28);
    fVar7 = 0.0;
    if ((0.0 <= param_1) && (fVar7 = param_1, 1.0 <= param_1)) {
      fVar7 = 1.0;
    }
    if (bVar2) {
      cVar3 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_09;
      if (cVar3 != '\0') {
        uVar4 = FUN_18055f6f0(&UNK_1809fae08,fVar7);
        uVar6 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar5 = *(int *)(unaff_RBX + 0x5c4) + uVar6;
        bVar2 = true;
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 7;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 7;
        param_1 = extraout_XMM0_Da_10;
        goto LAB_1805f90ed;
      }
    }
    bVar2 = false;
  }
LAB_1805f90ed:
  if (unaff_ESI < 8) {
    if (bVar2) {
      cVar3 = FUN_180645c10(param_1,0,&UNK_1809fae88);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  else if (bVar2) {
    cVar3 = FUN_180645c10(param_1,1,&UNK_1809fae88);
    if (cVar3 != '\0') {
      uVar4 = FUN_18055f6f0(&UNK_1809fade8,*(int32_t *)(unaff_RDI + 0x34));
      uVar6 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
      iVar5 = *(int *)(unaff_RBX + 0x5c4) + uVar6;
      puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
      *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
      *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
      return 1;
    }
  }
  return 0;
}



uint64_t FUN_1805f8fca(float param_1)

{
  ulonglong *puVar1;
  char in_AL;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong unaff_RBX;
  uint unaff_ESI;
  longlong unaff_RDI;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar6;
  
  if (5 < unaff_ESI) {
    param_1 = *(float *)(unaff_RDI + 0x3c);
    fVar6 = 0.0;
    if ((0.0 <= param_1) && (fVar6 = param_1, 1.0 <= param_1)) {
      fVar6 = 1.0;
    }
    if (in_AL != '\0') {
      cVar2 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da;
      if (cVar2 != '\0') {
        uVar3 = FUN_18055f6f0(&UNK_1809fadf8,fVar6);
        uVar5 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar4 = *(int *)(unaff_RBX + 0x5c4) + uVar5;
        in_AL = '\x01';
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar3 << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
        param_1 = extraout_XMM0_Da_00;
        goto LAB_1805f905e;
      }
    }
    in_AL = '\0';
  }
LAB_1805f905e:
  if (6 < unaff_ESI) {
    param_1 = *(float *)(unaff_RDI + 0x28);
    fVar6 = 0.0;
    if ((0.0 <= param_1) && (fVar6 = param_1, 1.0 <= param_1)) {
      fVar6 = 1.0;
    }
    if (in_AL != '\0') {
      cVar2 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      param_1 = extraout_XMM0_Da_01;
      if (cVar2 != '\0') {
        uVar3 = FUN_18055f6f0(&UNK_1809fae08,fVar6);
        uVar5 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
        iVar4 = *(int *)(unaff_RBX + 0x5c4) + uVar5;
        in_AL = '\x01';
        puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar4 >> 5) * 4);
        *puVar1 = *puVar1 | (ulonglong)uVar3 << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 7;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 7;
        param_1 = extraout_XMM0_Da_02;
        goto LAB_1805f90ed;
      }
    }
    in_AL = '\0';
  }
LAB_1805f90ed:
  if (unaff_ESI < 8) {
    if (in_AL != '\0') {
      cVar2 = FUN_180645c10(param_1,0,&UNK_1809fae88);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  else if (in_AL != '\0') {
    cVar2 = FUN_180645c10(param_1,1,&UNK_1809fae88);
    if (cVar2 != '\0') {
      uVar3 = FUN_18055f6f0(&UNK_1809fade8,*(int32_t *)(unaff_RDI + 0x34));
      uVar5 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
      iVar4 = *(int *)(unaff_RBX + 0x5c4) + uVar5;
      puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)(iVar4 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar3 << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f);
      *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
      *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
      return 1;
    }
  }
  return 0;
}



ulonglong FUN_1805f90fb(void)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_RAX;
  uint uVar5;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  if ((char)in_RAX != '\0') {
    in_RAX = FUN_180645c10();
    if ((char)in_RAX != '\0') {
      uVar2 = FUN_18055f6f0(&UNK_1809fade8,*(int32_t *)(unaff_RDI + 0x34));
      uVar5 = *(int *)(unaff_RBX + 0x5c4) >> 0x1f & 0x1f;
      uVar3 = *(int *)(unaff_RBX + 0x5c4) + uVar5;
      iVar4 = (uVar3 & 0x1f) - uVar5;
      puVar1 = (ulonglong *)(*(longlong *)(unaff_RBX + 0x598) + (longlong)((int)uVar3 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar2 << ((byte)iVar4 & 0x3f);
      *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 6;
      *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 6;
      return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



char FUN_1805f91c0(uint64_t param_1,uint64_t *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint auStackX_10 [2];
  
  *param_2 = 0xffffffffffffffff;
  *(int32_t *)((longlong)param_2 + 0x2c) = 0x3f800000;
  bVar4 = false;
  *(int32_t *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(int32_t *)(param_2 + 5) = 0;
  *(int32_t *)(param_2 + 6) = 0xbe4ccccd;
  *(int32_t *)((longlong)param_2 + 0x34) = 0xbe4ccccd;
  param_2[7] = 0x3ecccccd;
  *(int16_t *)(param_2 + 8) = 0x100;
  *(int8_t *)(param_2 + 9) = 1;
  *(uint64_t *)((longlong)param_2 + 0x4c) = 0xffffffffffffffff;
  param_2[0xf] = 0xffffffffffffffff;
  *(int8_t *)(param_2 + 0x10) = 0xff;
  *(int32_t *)((longlong)param_2 + 0x84) = 0;
  *(int32_t *)((longlong)param_2 + 0x74) = 0xffffffff;
  *(uint64_t *)((longlong)param_2 + 0x54) = 0;
  *(uint64_t *)((longlong)param_2 + 0x5c) = 0;
  *(uint64_t *)((longlong)param_2 + 100) = 0;
  *(uint64_t *)((longlong)param_2 + 0x6c) = 0;
  *(int32_t *)((longlong)param_2 + 0x8c) = 0x3f800000;
  *(int32_t *)(param_2 + 0x11) = 0;
  cVar2 = FUN_18055f260(param_1,param_2 + 0x11,&UNK_1809fae78);
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_2 + 9);
LAB_1805f92b4:
    bVar1 = false;
  }
  else {
    auStackX_10[0] = (uint)(*(char *)(param_2 + 9) != '\0');
    cVar3 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    cVar2 = auStackX_10[0] != 0;
    *(char *)(param_2 + 9) = cVar2;
    if (cVar3 == '\0') goto LAB_1805f92b4;
    bVar1 = true;
  }
  if (cVar2 != '\0') {
    if ((bVar1) && (cVar2 = FUN_1805f8a00(param_1,param_2), cVar2 != '\0')) {
      return '\x01';
    }
    return '\0';
  }
  if (((bVar1) &&
      (cVar2 = FUN_18055f260(param_1,(longlong)param_2 + 0x4c,&UNK_1809fad98), cVar2 != '\0')) &&
     (cVar2 = FUN_18055f260(param_1,param_2 + 10,&UNK_1809fada8), cVar2 != '\0')) {
    auStackX_10[0] = 0;
    cVar2 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    bVar4 = auStackX_10[0] != 0;
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_1805f933c;
    }
  }
  cVar2 = '\0';
LAB_1805f933c:
  if (bVar4) {
    auStackX_10[0] = 0xffffffff;
    if ((((cVar2 == '\0') ||
         (cVar2 = FUN_18055f260(param_1,(longlong)param_2 + 0x7c,&UNK_1809fadb8), cVar2 == '\0')) ||
        ((cVar2 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fadc8), cVar2 == '\0' ||
         ((cVar2 = FUN_180646700(param_1,(longlong)param_2 + 0x84,&UNK_1809fae18), cVar2 == '\0' ||
          (cVar2 = FUN_180646700(param_1,(longlong)param_2 + 0x54,&UNK_1809fae28), cVar2 == '\0'))))
        )) || ((cVar2 = FUN_180646700(param_1,param_2 + 0xb,&UNK_1809fae28), cVar2 == '\0' ||
               (((((cVar2 = FUN_180646700(param_1,(longlong)param_2 + 0x5c,&UNK_1809fae38),
                   cVar2 == '\0' ||
                   (cVar2 = FUN_180646700(param_1,(longlong)param_2 + 100,&UNK_1809fae28),
                   cVar2 == '\0')) ||
                  (cVar2 = FUN_180646700(param_1,param_2 + 0xd,&UNK_1809fae28), cVar2 == '\0')) ||
                 ((cVar2 = FUN_180646700(param_1,(longlong)param_2 + 0x6c,&UNK_1809fae38),
                  cVar2 == '\0' ||
                  (cVar2 = FUN_18055f260(param_1,(longlong)param_2 + 0x74,&system_data_bc90),
                  cVar2 == '\0')))) ||
                (cVar2 = FUN_18055f260(param_1,param_2 + 0xf,&system_data_bc90), cVar2 == '\0')))))) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    *(int8_t *)(param_2 + 0x10) = (int8_t)auStackX_10[0];
    return cVar2;
  }
  return cVar2;
}



uint64_t FUN_1805f94a0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int32_t uVar7;
  void *puVar8;
  
  cVar3 = FUN_180645c10(param_1,*(int32_t *)(param_2 + 0x88),&UNK_1809fae78);
  if ((cVar3 == '\0') ||
     (cVar3 = FUN_180645c10(param_1,*(int8_t *)(param_2 + 0x48),&UNK_1809fae88), cVar3 == '\0'))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (*(char *)(param_2 + 0x48) == '\0') {
    if (((bVar2) &&
        (cVar3 = FUN_180645c10(param_1,*(int32_t *)(param_2 + 0x4c),&UNK_1809fad98),
        cVar3 != '\0')) &&
       (cVar3 = FUN_180645c10(param_1,*(int32_t *)(param_2 + 0x50),&UNK_1809fada8), cVar3 != '\0'
       )) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((((*(int *)(param_2 + 0x7c) == -1) && (*(char *)(param_2 + 0x80) == -1)) &&
        ((*(float *)(param_2 + 0x84) == 0.0 &&
         ((*(float *)(param_2 + 0x54) == 0.0 && (*(float *)(param_2 + 0x58) == 0.0)))))) &&
       ((*(float *)(param_2 + 0x5c) == 0.0 &&
        ((((*(float *)(param_2 + 100) == 0.0 && (*(float *)(param_2 + 0x68) == 0.0)) &&
          (*(float *)(param_2 + 0x6c) == 0.0)) && (*(int *)(param_2 + 0x74) == -1)))))) {
      if (!bVar2) {
        return 0;
      }
      puVar8 = &UNK_1809fae88;
      uVar7 = 0;
    }
    else {
      if (!bVar2) {
        return 0;
      }
      cVar3 = FUN_180645c10(param_1,1,&UNK_1809fae88);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = FUN_180645c10(param_1,*(int32_t *)(param_2 + 0x7c),&UNK_1809fadb8);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = FUN_180645c10(param_1,(int)*(char *)(param_2 + 0x80),&UNK_1809fadc8);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar4 = FUN_18055f6f0(&UNK_1809fae18,*(int32_t *)(param_2 + 0x84));
      uVar6 = *(int *)(param_1 + 0x5c4) >> 0x1f & 0x1f;
      iVar5 = *(int *)(param_1 + 0x5c4) + uVar6;
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
      *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 8;
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 8;
      cVar3 = FUN_18056eb00(param_1,param_2 + 0x54,&UNK_1809fae28);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = FUN_18056eb00(param_1,param_2 + 100,&UNK_1809fae28);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = FUN_180645c10(param_1,*(int32_t *)(param_2 + 0x74),&system_data_bc90);
      if (cVar3 == '\0') {
        return 0;
      }
      uVar7 = *(int32_t *)(param_2 + 0x78);
      puVar8 = &system_data_bc90;
    }
    cVar3 = FUN_180645c10(param_1,uVar7,puVar8);
  }
  else {
    if (!bVar2) {
      return 0;
    }
    cVar3 = FUN_1805f8d20(param_1,param_2);
  }
  if (cVar3 == '\0') {
    return 0;
  }
  return 1;
}



char FUN_1805f96c0(uint64_t param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint auStackX_10 [2];
  
  param_2[0] = -1;
  param_2[1] = -1;
  *(int16_t *)(param_2 + 10) = 0xff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xb] = 0;
  cVar2 = FUN_18055f260(param_1,param_2 + 0xb,&UNK_1809fae78);
  if ((cVar2 == '\0') || (cVar2 = FUN_18055f260(param_1,param_2,&UNK_1809fad98), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  iVar1 = *param_2;
  if (iVar1 == 0) {
    if (cVar2 == '\0') {
      return '\0';
    }
    cVar2 = FUN_18055f260(param_1,param_2 + 1,&UNK_1809fada8);
  }
  else if (iVar1 == 1) {
    if (cVar2 == '\0') {
      return '\0';
    }
    auStackX_10[0] = (uint)(*(char *)((longlong)param_2 + 0x29) != '\0');
    cVar2 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae88);
    *(bool *)((longlong)param_2 + 0x29) = auStackX_10[0] != 0;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return cVar2;
      }
      auStackX_10[0] = 0;
      if (((((cVar2 != '\0') &&
            (cVar2 = FUN_18055f260(param_1,auStackX_10,&UNK_1809fae48), cVar2 != '\0')) &&
           (cVar2 = FUN_180646700(param_1,param_2 + 2,&UNK_1809fae28), cVar2 != '\0')) &&
          ((cVar2 = FUN_180646700(param_1,param_2 + 3,&UNK_1809fae28), cVar2 != '\0' &&
           (cVar2 = FUN_180646700(param_1,param_2 + 4,&UNK_1809fae38), cVar2 != '\0')))) &&
         ((cVar2 = FUN_180646700(param_1,param_2 + 6,&UNK_1809fae28), cVar2 != '\0' &&
          ((cVar2 = FUN_180646700(param_1,param_2 + 7,&UNK_1809fae28), cVar2 != '\0' &&
           (cVar2 = FUN_180646700(param_1,param_2 + 8,&UNK_1809fae38), cVar2 != '\0')))))) {
        *(int8_t *)(param_2 + 10) = (int8_t)auStackX_10[0];
        return '\x01';
      }
      *(int8_t *)(param_2 + 10) = (int8_t)auStackX_10[0];
      return '\0';
    }
    if (cVar2 == '\0') {
      return '\0';
    }
    cVar2 = FUN_180646700(param_1,param_2 + 2,&UNK_1809fae28);
    if (cVar2 == '\0') {
      return '\0';
    }
    cVar2 = FUN_180646700(param_1,param_2 + 3,&UNK_1809fae28);
    if (cVar2 == '\0') {
      return '\0';
    }
    cVar2 = FUN_180646700(param_1,param_2 + 4,&UNK_1809fae38);
    if (cVar2 == '\0') {
      return '\0';
    }
    cVar2 = FUN_180646700(param_1,param_2 + 6,&UNK_1809fae28);
    if (cVar2 == '\0') {
      return '\0';
    }
    cVar2 = FUN_180646700(param_1,param_2 + 7,&UNK_1809fae28);
    if (cVar2 == '\0') {
      return '\0';
    }
    cVar2 = FUN_180646700(param_1,param_2 + 8,&UNK_1809fae38);
  }
  if (cVar2 == '\0') {
    return '\0';
  }
  return '\x01';
}



char FUN_1805f9940(uint64_t param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  void *puVar4;
  
  cVar3 = FUN_180645c10(param_1,param_2[0xb],&UNK_1809fae78);
  if ((cVar3 == '\0') || (cVar3 = FUN_180645c10(param_1,*param_2,&UNK_1809fad98), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  iVar1 = *param_2;
  if (iVar1 == 0) {
    if (cVar3 == '\0') {
      return '\0';
    }
    uVar2 = param_2[1];
    puVar4 = &UNK_1809fada8;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        if (cVar3 == '\0') {
          return '\0';
        }
        cVar3 = FUN_180645fa0(param_1,param_2[2],&UNK_1809fae28);
        if (cVar3 == '\0') {
          return '\0';
        }
        cVar3 = FUN_180645fa0(param_1,param_2[3],&UNK_1809fae28);
        if (cVar3 == '\0') {
          return '\0';
        }
        cVar3 = FUN_180645fa0(param_1,param_2[4],&UNK_1809fae38);
      }
      else {
        if (iVar1 != 3) {
          return cVar3;
        }
        if (cVar3 == '\0') {
          return '\0';
        }
        cVar3 = FUN_180645c10(param_1,(int)(char)param_2[10],&UNK_1809fae48);
        if (cVar3 == '\0') {
          return '\0';
        }
        cVar3 = FUN_18056eb00(param_1,param_2 + 2,&UNK_1809fae28);
      }
      if (cVar3 == '\0') {
        return '\0';
      }
      cVar3 = FUN_18056eb00(param_1,param_2 + 6,&UNK_1809fae28);
      goto LAB_1805f9a6b;
    }
    if (cVar3 == '\0') {
      return '\0';
    }
    puVar4 = &UNK_1809fae88;
    uVar2 = (uint)(*(char *)((longlong)param_2 + 0x29) != '\0');
  }
  cVar3 = FUN_180645c10(param_1,uVar2,puVar4);
LAB_1805f9a6b:
  if (cVar3 == '\0') {
    return '\0';
  }
  return '\x01';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






