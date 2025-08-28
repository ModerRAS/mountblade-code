#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part100_sub002_sub002.c - 1 个函数

// 函数: void FUN_18011c32b(void)
void FUN_18011c32b(void)

{
  longlong unaff_R15;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  
  *(int32_t *)(unaff_R15 + 0x100) = unaff_XMM7_Da;
  *(int32_t *)(unaff_R15 + 0x104) = unaff_XMM8_Da;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18011c360(int *param_1,char *param_2,char *param_3,uint param_4,longlong param_5)

{
  uint64_t *puVar1;
  longlong *plVar2;
  float *pfVar3;
  float fVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  uint64_t uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int32_t uVar14;
  ulonglong uVar15;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  byte bVar22;
  char *pcVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fStackX_8;
  float fStackX_c;
  char *pcStackX_10;
  char *pcStackX_18;
  uint uStackX_20;
  char cStack_138;
  char cStack_137;
  int32_t uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint uStack_120;
  ulonglong uStack_118;
  int iStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int8_t uStack_d0;
  undefined7 uStack_cf;
  longlong lStack_c8;
  longlong lStack_c0;
  uint *puVar16;
  
  pcVar23 = param_3;
  pcStackX_10 = param_2;
  pcStackX_18 = param_3;
  uStackX_20 = param_4;
  if ((char)param_1[0x16] != '\0') {
    FUN_18011b260();
  }
  lVar7 = _DAT_180c8a9b0;
  uStack_118 = *(ulonglong *)(_DAT_180c8a9b0 + 0x1af8);
  if (*(char *)(uStack_118 + 0xb4) != '\0') {
    return uStack_118 & 0xffffffffffffff00;
  }
  uVar11 = FUN_18011bac0(param_1,param_2);
  if ((param_3 != (char *)0x0) && (*param_3 == '\0')) {
    *(int8_t *)(*(longlong *)(lVar7 + 0x1af8) + 0xb1) = 1;
    lVar7 = *(longlong *)(lVar7 + 0x1af8);
    puVar25 = (uint *)(lVar7 + 0x1a8);
    *puVar25 = *puVar25 | 0x18;
    FUN_18011d940(lVar7 + 0x1b8);
    fStack_130 = 3.4028235e+38;
    fStack_12c = 3.4028235e+38;
    fStack_128 = -3.4028235e+38;
    fStack_124 = -3.4028235e+38;
    FUN_180124190(&fStack_130,(ulonglong)uVar11,0);
    uVar15 = func_0x00018012d8c0();
    return uVar15 & 0xffffffffffffff00;
  }
  puVar24 = (uint *)((ulonglong)pcVar23 & 0xffffffffffffff00);
  FUN_18011ce30(&fStackX_8,param_2);
  puVar25 = (uint *)0x0;
  if ((uVar11 != 0) && (0 < *param_1)) {
    puVar24 = *(uint **)(param_1 + 2);
    puVar16 = puVar25;
    puVar20 = puVar24;
    do {
      if (*puVar20 == uVar11) {
        puVar25 = puVar24 + (longlong)(int)puVar16 * 10;
        break;
      }
      uVar12 = (int)puVar16 + 1;
      puVar16 = (uint *)(ulonglong)uVar12;
      puVar20 = puVar20 + 10;
    } while ((int)uVar12 < *param_1);
  }
  uVar15 = (ulonglong)puVar24 & 0xffffffffffffff00;
  lVar27 = lVar7;
  if (puVar25 == (uint *)0x0) {
    iVar19 = *param_1;
    iVar13 = param_1[1];
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0xffffffffffffffff;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (iVar19 == iVar13) {
      if (iVar13 == 0) {
        uVar12 = 8;
      }
      else {
        uVar12 = iVar13 / 2 + iVar13;
      }
      uVar26 = iVar19 + 1U;
      if ((int)(iVar19 + 1U) < (int)uVar12) {
        uVar26 = uVar12;
      }
      uVar15 = (ulonglong)uVar26;
      FUN_18011db30(param_1,uVar15);
      iVar19 = *param_1;
      lVar27 = _DAT_180c8a9b0;
    }
    lVar17 = (longlong)iVar19;
    uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
    lVar18 = *(longlong *)(param_1 + 2);
    puVar1 = (uint64_t *)(lVar18 + lVar17 * 0x28);
    *puVar1 = uStack_f8;
    puVar1[1] = uStack_f0;
    puVar1 = (uint64_t *)(lVar18 + 0x10 + lVar17 * 0x28);
    *puVar1 = uStack_e8;
    puVar1[1] = CONCAT44(uStack_dc,uStack_e0);
    *(ulonglong *)(lVar18 + 0x20 + lVar17 * 0x28) = CONCAT44(uStack_d4,uStack_d8);
    lVar17 = (longlong)*param_1;
    *param_1 = *param_1 + 1;
    lVar18 = *(longlong *)(param_1 + 2);
    *(float *)(lVar18 + 0x1c + lVar17 * 0x28) = fStackX_8;
    *(uint *)(lVar18 + lVar17 * 0x28) = uVar11;
    puVar25 = (uint *)(lVar18 + lVar17 * 0x28);
  }
  *(short *)((longlong)param_1 + 0x5a) =
       (short)(((longlong)puVar25 - *(longlong *)(param_1 + 2)) / 0x28);
  puVar25[8] = (uint)fStackX_8;
  iStack_110 = puVar25[4] + 1;
  uVar12 = *(uint *)(lVar7 + 0x1a90);
  iVar19 = param_1[9] + 1;
  uStack_120 = (uint)param_1[0x13] >> 0x16 & 0xffffff01;
  puVar25[4] = uVar12;
  puVar25[1] = uStackX_20;
  *(longlong *)(puVar25 + 2) = param_5;
  if (iStack_110 < (int)uVar12) {
    if ((((param_1[0x13] & 2U) != 0) && (param_1[6] == 0)) &&
       (((int)uVar12 <= iVar19 || (param_1[5] == 0)))) {
      param_1[6] = uVar11;
    }
  }
  else if ((param_1[0x13] & 1U) == 0) {
    puVar25[6] = param_1[0x10];
    param_1[0x10] = (int)(*(float *)(lVar7 + 0x1674) + (float)puVar25[7] + (float)param_1[0x10]);
  }
  bVar29 = param_1[7] == uVar11;
  uVar28 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar29);
  uStack_134 = (int32_t)uVar28;
  if (bVar29) {
    *(int8_t *)((longlong)param_1 + 0x59) = 1;
  }
  else if ((((param_1[5] == 0) && (iVar19 < (int)uVar12)) && (param_5 == 0)) && (*param_1 == 1)) {
    uVar28 = (ulonglong)bVar29;
    if ((*(byte *)(param_1 + 0x13) & 2) == 0) {
      uVar28 = 1;
    }
    uStack_134 = (int32_t)uVar28;
  }
  if ((iStack_110 < (int)uVar12) && (((int)uVar12 <= iVar19 || ((char)uVar15 != '\0')))) {
    *(int8_t *)(*(longlong *)(lVar27 + 0x1af8) + 0xb1) = 1;
    lVar7 = *(longlong *)(lVar27 + 0x1af8);
    puVar25 = (uint *)(lVar7 + 0x1a8);
    *puVar25 = *puVar25 | 0x18;
    FUN_18011d940(lVar7 + 0x1b8);
    fStack_130 = 3.4028235e+38;
    fStack_12c = 3.4028235e+38;
    fStack_128 = -3.4028235e+38;
    fStack_124 = -3.4028235e+38;
    FUN_180124190(&fStack_130,uVar11,0);
    func_0x00018012d8c0();
    return uVar28 & 0xff;
  }
  if (param_1[5] == uVar11) {
    puVar25[5] = *(uint *)(lVar7 + 0x1a90);
  }
  fVar4 = (float)param_1[0xb];
  fVar34 = (float)puVar25[7];
  fVar35 = fVar4 + fStackX_c;
  uVar5 = *(int32_t *)(uStack_118 + 0x100);
  uVar6 = *(int32_t *)(uStack_118 + 0x104);
  fVar33 = ((float)(int)(float)puVar25[6] - (float)param_1[0x11]) + (float)param_1[10];
  *(float *)(uStack_118 + 0x104) = fVar4;
  *(float *)(uStack_118 + 0x100) = fVar33;
  fVar30 = (float)param_1[10];
  fVar34 = fVar33 + fVar34;
  fStack_130 = fVar33;
  fStack_12c = fVar4;
  fStack_128 = fVar34;
  fStack_124 = fVar35;
  if ((fVar33 < fVar30) || ((float)param_1[0xc] <= fVar34)) {
    fStackX_8 = (float)param_1[0xc];
    fStack_104 = fVar4 - 1.0;
    cStack_137 = '\x01';
    fStack_108 = fVar33;
    if (fVar33 <= fVar30) {
      fStack_108 = fVar30;
    }
    fStackX_c = fVar35;
    FUN_180126d10(&fStack_108,&fStackX_8,CONCAT71((int7)(uVar15 >> 8),1));
    lVar27 = _DAT_180c8a9b0;
  }
  else {
    cStack_137 = '\0';
  }
  fStackX_8 = fVar34 - fVar33;
  fStackX_c = fVar35 - fVar4;
  func_0x000180124080(&fStackX_8,*(int32_t *)(lVar7 + 0x1660));
  cVar10 = FUN_180124190(&fStack_130,uVar11,0);
  if (cVar10 == '\0') {
    if (cStack_137 != '\0') {
      FUN_180126d80();
    }
    *(int32_t *)(uStack_118 + 0x100) = uVar5;
    *(int32_t *)(uStack_118 + 0x104) = uVar6;
    return uVar28 & 0xff;
  }
  uVar14 = 0x44;
  if (*(char *)(lVar7 + 0x1dd0) != '\0') {
    cVar10 = FUN_18010e4b0(lVar7 + 0x1de0);
    uVar14 = 0x44;
    if (cVar10 == '\0') {
      uVar14 = 0x1044;
    }
  }
  cVar10 = FUN_18010f170(&fStack_130,uVar11,&fStackX_8,&cStack_138,uVar14);
  bVar22 = fStackX_8._0_1_ | *(uint *)(lVar7 + 0x1b18) == uVar11;
  fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,bVar22);
  if ((cVar10 != '\0') || (((uStackX_20 & 2) != 0 && ((byte)uStack_134 == '\0')))) {
    param_1[6] = uVar11;
  }
  uVar26 = uStackX_20;
  if (cStack_138 == '\0') {
    func_0x0001801283b0();
  }
  fVar34 = fStack_12c;
  fVar4 = fStack_130;
  if (((((param_5 == 0) || (lVar18 = *(longlong *)(param_5 + 0x408), lVar18 == 0)) ||
       (*(longlong *)(lVar18 + 8) != 0)) ||
      (((*(byte *)(lVar18 + 0xa0) & 0x10) != 0 || (*(int *)(lVar18 + 0x20) != 1)))) ||
     (*(char *)(lVar7 + 0xc2) == '\0')) {
    bVar29 = false;
  }
  else {
    bVar29 = true;
  }
  if (cStack_138 == '\0') goto LAB_18011cbeb;
  if (((!bVar29) || (*(char *)(lVar27 + 0x120) == '\0')) ||
     (*(float *)(lVar27 + 0x474) <= 0.0 && *(float *)(lVar27 + 0x474) != 0.0)) {
    if (((iStack_110 < (int)uVar12) || (*(char *)(lVar27 + 0x120) == '\0')) ||
       (fVar30 = *(float *)(lVar27 + 0x38) * *(float *)(lVar27 + 0x38),
       *(float *)(lVar27 + 0x474) <= fVar30 && fVar30 != *(float *)(lVar27 + 0x474)))
    goto LAB_18011cbeb;
    fVar30 = 0.0;
    if (*(char *)(lVar7 + 0x1dd0) != '\0') goto LAB_18011c9d9;
    uVar12 = param_1[0x13] & 1;
    if ((uVar12 == 0) && ((uVar26 >> 0x14 & 1) == 0)) goto LAB_18011cbeb;
    if ((0.0 <= *(float *)(lVar7 + 0x3ac)) || (fStack_130 <= *(float *)(lVar7 + 0x118))) {
      if (((0.0 < *(float *)(lVar7 + 0x3ac)) && (fStack_128 < *(float *)(lVar7 + 0x118))) &&
         (fVar30 = *(float *)(lVar7 + 0x118) - fStack_128, uVar12 != 0)) {
        uVar12 = *puVar25;
        param_1[0x15] = 1;
        goto LAB_18011c9d6;
      }
    }
    else {
      fVar30 = fStack_130 - *(float *)(lVar7 + 0x118);
      if (uVar12 != 0) {
        uVar12 = *puVar25;
        param_1[0x15] = -1;
LAB_18011c9d6:
        param_1[0x14] = uVar12;
      }
    }
LAB_18011c9d9:
    if ((uVar26 >> 0x14 & 1) == 0) goto LAB_18011cbeb;
    if ((*(char *)(lVar7 + 0x1dd0) == '\0') || (*(uint *)(lVar7 + 0x1dec) != uVar11)) {
      fVar33 = *(float *)(lVar7 + 0x19f8);
      fVar35 = (ABS(*(float *)(lVar7 + 0x44c)) - (fVar33 + fVar33)) * 0.2;
      if (0.0 <= fVar35) {
        fVar32 = fVar33 * 4.0;
        if (fVar35 <= fVar33 * 4.0) {
          fVar32 = fVar35;
        }
      }
      else {
        fVar32 = 0.0;
      }
      fVar35 = fStack_12c - *(float *)(lVar7 + 0x11c);
      fVar31 = *(float *)(lVar7 + 0x11c) - fStack_124;
      if (fVar35 <= fVar31) {
        fVar35 = fVar31;
      }
      if (fVar35 < fVar33 * 1.5 + fVar32) {
        if (fVar30 <= fVar33 * 2.2) goto LAB_18011cbeb;
        if (((-1 < param_1[0x15]) ||
            (iVar19 = (int)((longlong)puVar25 - *(longlong *)(param_1 + 2) >> 0x3f),
            (int)(((longlong)puVar25 - *(longlong *)(param_1 + 2)) / 0x28) + iVar19 != iVar19)) &&
           ((param_1[0x15] < 1 ||
            ((int)(((longlong)puVar25 - *(longlong *)(param_1 + 2)) / 0x28) != *param_1 + -1))))
        goto LAB_18011cbe6;
      }
    }
    lVar18 = *(longlong *)(lVar7 + 0x2df8);
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_f0 = 0;
    lStack_c0 = 0;
    iVar19 = *(int *)(lVar18 + 0x14);
    uStack_e8 = 0;
    uStack_d0 = 0;
    iVar13 = *(int *)(lVar18 + 0x10);
    uStack_d8 = 0xffffffff;
    uStack_d4 = 0x3f000000;
    uStack_f8 = CONCAT44(uStack_f8._4_4_,2);
    lStack_c8 = param_5;
    if (iVar13 == iVar19) {
      if (iVar19 == 0) {
        iVar19 = 8;
      }
      else {
        iVar19 = iVar19 / 2 + iVar19;
      }
      iVar9 = iVar13 + 1;
      if (iVar13 + 1 < iVar19) {
        iVar9 = iVar19;
      }
      FUN_18013e6c0(lVar18 + 0x10,iVar9);
      iVar13 = *(int *)(lVar18 + 0x10);
      lVar27 = _DAT_180c8a9b0;
    }
    lVar17 = *(longlong *)(lVar18 + 0x18);
    lVar21 = (longlong)iVar13 * 0x40;
    *(uint64_t *)(lVar21 + lVar17) = uStack_f8;
    ((uint64_t *)(lVar21 + lVar17))[1] = uStack_f0;
    puVar1 = (uint64_t *)(lVar21 + 0x10 + lVar17);
    *puVar1 = uStack_e8;
    puVar1[1] = CONCAT44(uStack_dc,uStack_e0);
    puVar1 = (uint64_t *)(lVar21 + 0x20 + lVar17);
    *puVar1 = CONCAT44(uStack_d4,uStack_d8);
    puVar1[1] = CONCAT71(uStack_cf,uStack_d0);
    plVar2 = (longlong *)(lVar21 + 0x30 + lVar17);
    *plVar2 = lStack_c8;
    plVar2[1] = lStack_c0;
    *(int *)(lVar18 + 0x10) = *(int *)(lVar18 + 0x10) + 1;
    *(longlong *)(lVar7 + 0x1b78) = param_5;
    *(int32_t *)(lVar7 + 0x1b2c) = *(int32_t *)(param_5 + 0x84);
    fVar30 = *(float *)(param_5 + 0x44);
    *(float *)(lVar7 + 0x1b48) = *(float *)(lVar7 + 0x1b48) - (*(float *)(param_5 + 0x40) - fVar4);
    *(float *)(lVar7 + 0x1b4c) = *(float *)(lVar7 + 0x1b4c) - (fVar30 - fVar34);
  }
  else {
    FUN_1801248f0(param_5);
  }
LAB_18011cbe6:
  bVar22 = fStackX_8._0_1_;
LAB_18011cbeb:
  uVar8 = *(uint64_t *)(uStack_118 + 0x2e8);
  if ((cStack_138 == '\0') && (bVar22 == 0)) {
    if ((byte)uStack_134 == '\0') {
      lVar18 = 0x24;
      if ((byte)uStack_120 != 0) {
        lVar18 = 0x21;
      }
    }
    else {
      lVar18 = ((ulonglong)(byte)uStack_120 ^ 1) * 2 + 0x23;
    }
  }
  else {
    lVar18 = 0x22;
  }
  pfVar3 = (float *)(lVar27 + 0x1628 + (lVar18 + 10) * 0x10);
  fStack_108 = *pfVar3;
  fStack_104 = pfVar3[1];
  fStack_100 = pfVar3[2];
  fStack_fc = pfVar3[3] * *(float *)(lVar27 + 0x1628);
  uVar14 = func_0x000180121e20(&fStack_108);
  uVar12 = uStackX_20;
  FUN_18011cf80(uVar8,&fStack_130,uStackX_20,uVar14);
  if (uVar11 == *(uint *)(_DAT_180c8a9b0 + 0x1ca0)) {
    FUN_1801230e0(&fStack_130,1,_DAT_180c8a9b0);
  }
  lVar27 = _DAT_180c8a9b0;
  cVar10 = FUN_1801242c0(8);
  uVar15 = uStack_118;
  if ((cVar10 != '\0') &&
     ((*(float *)(lVar27 + 0x428) == 0.0 || (*(char *)(lVar27 + 0x41b) != '\0')))) {
    param_1[6] = uVar11;
  }
  uVar26 = uVar12 | 4;
  if ((param_1[0x13] & 4U) == 0) {
    uVar26 = uVar12;
  }
  if (pcStackX_18 == (char *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = func_0x000180123c50(uStack_118,(ulonglong)uVar11 + 1);
  }
  cVar10 = FUN_18011d200(uVar8,&fStack_130,uVar26,pcStackX_10,uVar11,uVar14);
  if (cVar10 != '\0') {
    *pcStackX_18 = '\0';
    if (param_1[7] == *puVar25) {
      if ((puVar25[1] & 1) == 0) {
        puVar25[4] = 0xffffffff;
        param_1[5] = 0;
        param_1[6] = 0;
      }
    }
    else if ((puVar25[1] & 1) != 0) {
      param_1[6] = *puVar25;
    }
  }
  if (cStack_137 != '\0') {
    FUN_180126d80();
  }
  *(int32_t *)(uVar15 + 0x100) = uVar5;
  *(int32_t *)(uVar15 + 0x104) = uVar6;
  if ((((*(uint *)(lVar7 + 0x1b18) == uVar11) && (cStack_138 == '\0')) &&
      (0.5 < *(float *)(lVar7 + 0x1b28))) &&
     (pcVar23 = pcStackX_10, (*(byte *)(param_1 + 0x13) & 0x20) == 0)) {
    for (; ((pcVar23 != (char *)0xffffffffffffffff && (*pcVar23 != '\0')) &&
           ((*pcVar23 != '#' || (pcVar23[1] != '#')))); pcVar23 = pcVar23 + 1) {
    }
    FUN_18012ea30(&UNK_180a06410,(int)pcVar23 - (int)pcStackX_10,pcStackX_10);
  }
  return (ulonglong)(byte)uStack_134;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18011c43c(uint64_t param_1,uint64_t param_2,ulonglong param_3,uint64_t param_4,
                       uint64_t param_5,char param_6,float param_7,float param_8,uint param_9,
                       longlong param_10,int param_11,uint64_t param_12,int32_t param_13,
                       uint64_t param_14,uint64_t param_15)

{
  uint *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  float fVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int32_t uVar17;
  longlong lVar19;
  longlong lVar20;
  char *pcVar21;
  int iVar22;
  int *piVar23;
  longlong lVar24;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar25;
  ulonglong unaff_RDI;
  byte bVar26;
  int *piVar27;
  ulonglong uVar28;
  int *piVar29;
  longlong unaff_R13;
  uint64_t unaff_R14;
  ulonglong uVar30;
  bool bVar31;
  int32_t uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  char cStack0000000000000031;
  byte bStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000044;
  float fStack000000000000006c;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  int *piVar18;
  
  piVar27 = (int *)(param_3 & 0xffffffffffffff00);
  uVar32 = FUN_18011ce30(unaff_RBP + 0x70);
  piVar29 = (int *)0x0;
  iVar25 = (int)unaff_RDI;
  if ((iVar25 != 0) && (0 < *unaff_RBX)) {
    piVar27 = *(int **)(unaff_RBX + 2);
    piVar18 = piVar29;
    piVar23 = piVar27;
    do {
      if (*piVar23 == iVar25) {
        piVar29 = piVar27 + (longlong)(int)piVar18 * 10;
        break;
      }
      uVar14 = (int)piVar18 + 1;
      piVar18 = (int *)(ulonglong)uVar14;
      piVar23 = piVar23 + 10;
    } while ((int)uVar14 < *unaff_RBX);
  }
  iVar16 = *(int *)(unaff_RBP + 0x70);
  uVar28 = (ulonglong)piVar27 & 0xffffffffffffff00;
  if (piVar29 == (int *)0x0) {
    iVar22 = *unaff_RBX;
    iVar7 = unaff_RBX[1];
    param_14 = 0;
    param_15 = 0;
    *(uint64_t *)(unaff_RBP + -0x80) = 0xffffffffffffffff;
    *(uint64_t *)(unaff_RBP + -0x74) = 0;
    *(int32_t *)(unaff_RBP + -0x78) = 0;
    if (iVar22 == iVar7) {
      if (iVar7 == 0) {
        uVar14 = 8;
      }
      else {
        uVar14 = iVar7 / 2 + iVar7;
      }
      uVar15 = iVar22 + 1U;
      if ((int)(iVar22 + 1U) < (int)uVar14) {
        uVar15 = uVar14;
      }
      uVar28 = (ulonglong)uVar15;
      FUN_18011db30(uVar32,uVar28);
      iVar22 = *unaff_RBX;
      unaff_R13 = _DAT_180c8a9b0;
    }
    lVar19 = (longlong)iVar22;
    uVar28 = CONCAT71((int7)(uVar28 >> 8),1);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x80);
    uVar11 = *(uint64_t *)(unaff_RBP + -0x78);
    lVar20 = *(longlong *)(unaff_RBX + 2);
    puVar2 = (uint64_t *)(lVar20 + lVar19 * 0x28);
    *puVar2 = param_14;
    puVar2[1] = param_15;
    uVar6 = *(uint64_t *)(unaff_RBP + -0x70);
    puVar2 = (uint64_t *)(lVar20 + 0x10 + lVar19 * 0x28);
    *puVar2 = uVar10;
    puVar2[1] = uVar11;
    *(uint64_t *)(lVar20 + 0x20 + lVar19 * 0x28) = uVar6;
    lVar19 = (longlong)*unaff_RBX;
    *unaff_RBX = *unaff_RBX + 1;
    lVar20 = *(longlong *)(unaff_RBX + 2);
    *(int *)(lVar20 + 0x1c + lVar19 * 0x28) = iVar16;
    *(int *)(lVar20 + lVar19 * 0x28) = iVar25;
    piVar29 = (int *)(lVar20 + lVar19 * 0x28);
  }
  lVar20 = *(longlong *)(unaff_RBP + 0x90);
  *(short *)((longlong)unaff_RBX + 0x5a) =
       (short)(((longlong)piVar29 - *(longlong *)(unaff_RBX + 2)) / 0x28);
  piVar29[8] = iVar16;
  param_11 = piVar29[4] + 1;
  iVar16 = *(int *)(unaff_RSI + 0x1a90);
  iVar22 = unaff_RBX[9] + 1;
  param_9 = (uint)unaff_RBX[0x13] >> 0x16 & 0xffffff01;
  piVar29[4] = iVar16;
  piVar29[1] = *(int *)(unaff_RBP + 0x88);
  *(longlong *)(piVar29 + 2) = lVar20;
  if (param_11 < iVar16) {
    if ((((unaff_RBX[0x13] & 2U) != 0) && (unaff_RBX[6] == 0)) &&
       ((iVar16 <= iVar22 || (unaff_RBX[5] == 0)))) {
      unaff_RBX[6] = iVar25;
    }
  }
  else if ((unaff_RBX[0x13] & 1U) == 0) {
    piVar29[6] = unaff_RBX[0x10];
    unaff_RBX[0x10] =
         (int)(*(float *)(unaff_RSI + 0x1674) + (float)piVar29[7] + (float)unaff_RBX[0x10]);
  }
  bVar31 = unaff_RBX[7] == iVar25;
  uVar30 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),bVar31);
  _bStack0000000000000034 = (int32_t)uVar30;
  if (bVar31) {
    *(int8_t *)((longlong)unaff_RBX + 0x59) = 1;
  }
  else if ((((unaff_RBX[5] == 0) && (iVar22 < iVar16)) && (lVar20 == 0)) && (*unaff_RBX == 1)) {
    uVar30 = (ulonglong)bVar31;
    if ((*(byte *)(unaff_RBX + 0x13) & 2) == 0) {
      uVar30 = 1;
    }
    _bStack0000000000000034 = (int32_t)uVar30;
  }
  if ((param_11 < iVar16) && ((iVar16 <= iVar22 || ((char)uVar28 != '\0')))) {
    *(int8_t *)(*(longlong *)(unaff_R13 + 0x1af8) + 0xb1) = 1;
    lVar20 = *(longlong *)(unaff_R13 + 0x1af8);
    puVar1 = (uint *)(lVar20 + 0x1a8);
    *puVar1 = *puVar1 | 0x18;
    FUN_18011d940(lVar20 + 0x1b8);
    param_7 = 3.4028235e+38;
    fStack000000000000003c = 3.4028235e+38;
    param_8 = -3.4028235e+38;
    fStack0000000000000044 = -3.4028235e+38;
    FUN_180124190(&param_7,unaff_RDI & 0xffffffff,0);
    func_0x00018012d8c0();
    return uVar30 & 0xff;
  }
  if (unaff_RBX[5] == iVar25) {
    piVar29[5] = *(int *)(unaff_RSI + 0x1a90);
  }
  fVar4 = (float)unaff_RBX[0xb];
  fVar37 = (float)piVar29[7];
  fVar38 = fVar4 + *(float *)(unaff_RBP + 0x74);
  uVar32 = *(int32_t *)(param_10 + 0x100);
  uVar5 = *(int32_t *)(param_10 + 0x104);
  fVar36 = ((float)(int)(float)piVar29[6] - (float)unaff_RBX[0x11]) + (float)unaff_RBX[10];
  *(float *)(param_10 + 0x104) = fVar4;
  *(float *)(param_10 + 0x100) = fVar36;
  fVar33 = (float)unaff_RBX[10];
  fVar37 = fVar36 + fVar37;
  param_7 = fVar36;
  fStack000000000000003c = fVar4;
  param_8 = fVar37;
  fStack0000000000000044 = fVar38;
  if ((fVar36 < fVar33) || ((float)unaff_RBX[0xc] <= fVar37)) {
    *(int *)(unaff_RBP + 0x70) = unaff_RBX[0xc];
    *(float *)(unaff_RBP + 0x74) = fVar38;
    param_12._4_4_ = fVar4 - 1.0;
    cStack0000000000000031 = '\x01';
    param_12._0_4_ = fVar36;
    if (fVar36 <= fVar33) {
      param_12._0_4_ = fVar33;
    }
    FUN_180126d10(&param_12,unaff_RBP + 0x70,CONCAT71((int7)(uVar28 >> 8),1));
    unaff_R13 = _DAT_180c8a9b0;
  }
  else {
    cStack0000000000000031 = '\0';
  }
  uVar17 = *(int32_t *)(unaff_RSI + 0x1660);
  *(float *)(unaff_RBP + 0x70) = fVar37 - fVar36;
  *(float *)(unaff_RBP + 0x74) = fVar38 - fVar4;
  func_0x000180124080(unaff_RBP + 0x70,uVar17);
  cVar13 = FUN_180124190(&param_7,unaff_RDI & 0xffffffff,0);
  if (cVar13 == '\0') {
    if (cStack0000000000000031 != '\0') {
      FUN_180126d80();
    }
    *(int32_t *)(param_10 + 0x100) = uVar32;
    *(int32_t *)(param_10 + 0x104) = uVar5;
    return uVar30 & 0xff;
  }
  uVar17 = 0x44;
  if (*(char *)(unaff_RSI + 0x1dd0) != '\0') {
    cVar13 = FUN_18010e4b0(unaff_RSI + 0x1de0);
    uVar17 = 0x44;
    if (cVar13 == '\0') {
      uVar17 = 0x1044;
    }
  }
  cVar13 = FUN_18010f170(&param_7,unaff_RDI & 0xffffffff,unaff_RBP + 0x70,&param_6,uVar17);
  uVar14 = *(uint *)(unaff_RBP + 0x88);
  bVar26 = *(byte *)(unaff_RBP + 0x70) | *(int *)(unaff_RSI + 0x1b18) == iVar25;
  *(byte *)(unaff_RBP + 0x70) = bVar26;
  if ((cVar13 != '\0') || (((uVar14 & 2) != 0 && (bStack0000000000000034 == '\0')))) {
    unaff_RBX[6] = iVar25;
  }
  if (param_6 == '\0') {
    func_0x0001801283b0();
  }
  fVar37 = fStack000000000000003c;
  fVar4 = param_7;
  lVar20 = *(longlong *)(unaff_RBP + 0x90);
  if (((((lVar20 == 0) || (lVar19 = *(longlong *)(lVar20 + 0x408), lVar19 == 0)) ||
       (*(longlong *)(lVar19 + 8) != 0)) ||
      (((*(byte *)(lVar19 + 0xa0) & 0x10) != 0 || (*(int *)(lVar19 + 0x20) != 1)))) ||
     (*(char *)(unaff_RSI + 0xc2) == '\0')) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  if (param_6 == '\0') goto LAB_18011cbeb;
  if (((!bVar31) || (*(char *)(unaff_R13 + 0x120) == '\0')) ||
     (*(float *)(unaff_R13 + 0x474) <= 0.0 && *(float *)(unaff_R13 + 0x474) != 0.0)) {
    if (((param_11 < iVar16) || (*(char *)(unaff_R13 + 0x120) == '\0')) ||
       (fVar33 = *(float *)(unaff_R13 + 0x38) * *(float *)(unaff_R13 + 0x38),
       *(float *)(unaff_R13 + 0x474) <= fVar33 && fVar33 != *(float *)(unaff_R13 + 0x474)))
    goto LAB_18011cbeb;
    fVar33 = 0.0;
    if (*(char *)(unaff_RSI + 0x1dd0) != '\0') goto LAB_18011c9d9;
    uVar15 = unaff_RBX[0x13] & 1;
    if ((uVar15 == 0) && ((uVar14 >> 0x14 & 1) == 0)) goto LAB_18011cbeb;
    if ((0.0 <= *(float *)(unaff_RSI + 0x3ac)) || (param_7 <= *(float *)(unaff_RSI + 0x118))) {
      if (((0.0 < *(float *)(unaff_RSI + 0x3ac)) && (param_8 < *(float *)(unaff_RSI + 0x118))) &&
         (fVar33 = *(float *)(unaff_RSI + 0x118) - param_8, uVar15 != 0)) {
        iVar16 = *piVar29;
        unaff_RBX[0x15] = 1;
        goto LAB_18011c9d6;
      }
    }
    else {
      fVar33 = param_7 - *(float *)(unaff_RSI + 0x118);
      if (uVar15 != 0) {
        iVar16 = *piVar29;
        unaff_RBX[0x15] = -1;
LAB_18011c9d6:
        unaff_RBX[0x14] = iVar16;
      }
    }
LAB_18011c9d9:
    if ((uVar14 >> 0x14 & 1) == 0) goto LAB_18011cbeb;
    if ((*(char *)(unaff_RSI + 0x1dd0) == '\0') || (*(int *)(unaff_RSI + 0x1dec) != iVar25)) {
      fVar36 = *(float *)(unaff_RSI + 0x19f8);
      fVar38 = (ABS(*(float *)(unaff_RSI + 0x44c)) - (fVar36 + fVar36)) * 0.2;
      if (0.0 <= fVar38) {
        fVar35 = fVar36 * 4.0;
        if (fVar38 <= fVar36 * 4.0) {
          fVar35 = fVar38;
        }
      }
      else {
        fVar35 = 0.0;
      }
      fVar38 = fStack000000000000003c - *(float *)(unaff_RSI + 0x11c);
      fVar34 = *(float *)(unaff_RSI + 0x11c) - fStack0000000000000044;
      if (fVar38 <= fVar34) {
        fVar38 = fVar34;
      }
      if (fVar38 < fVar36 * 1.5 + fVar35) {
        if (fVar33 <= fVar36 * 2.2) goto LAB_18011cbeb;
        if (((-1 < unaff_RBX[0x15]) ||
            (iVar16 = (int)((longlong)piVar29 - *(longlong *)(unaff_RBX + 2) >> 0x3f),
            (int)(((longlong)piVar29 - *(longlong *)(unaff_RBX + 2)) / 0x28) + iVar16 != iVar16)) &&
           ((unaff_RBX[0x15] < 1 ||
            ((int)(((longlong)piVar29 - *(longlong *)(unaff_RBX + 2)) / 0x28) != *unaff_RBX + -1))))
        goto LAB_18011cbe6;
      }
    }
    lVar19 = *(longlong *)(unaff_RSI + 0x2df8);
    *(uint64_t *)(unaff_RBP + -0x78) = 0;
    param_15 = 0;
    *(uint64_t *)(unaff_RBP + -0x58) = 0;
    iVar16 = *(int *)(lVar19 + 0x14);
    *(uint64_t *)(unaff_RBP + -0x80) = 0;
    *(int8_t *)(unaff_RBP + -0x68) = 0;
    iVar22 = *(int *)(lVar19 + 0x10);
    *(int32_t *)(unaff_RBP + -0x70) = 0xffffffff;
    *(int32_t *)(unaff_RBP + -0x6c) = 0x3f000000;
    param_14 = CONCAT44(param_14._4_4_,2);
    *(longlong *)(unaff_RBP + -0x60) = lVar20;
    if (iVar22 == iVar16) {
      if (iVar16 == 0) {
        iVar16 = 8;
      }
      else {
        iVar16 = iVar16 / 2 + iVar16;
      }
      iVar7 = iVar22 + 1;
      if (iVar22 + 1 < iVar16) {
        iVar7 = iVar16;
      }
      FUN_18013e6c0(lVar19 + 0x10,iVar7);
      iVar22 = *(int *)(lVar19 + 0x10);
      lVar20 = *(longlong *)(unaff_RBP + 0x90);
      unaff_R13 = _DAT_180c8a9b0;
    }
    uVar6 = *(uint64_t *)(unaff_RBP + -0x80);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x78);
    lVar8 = *(longlong *)(lVar19 + 0x18);
    lVar24 = (longlong)iVar22 * 0x40;
    *(uint64_t *)(lVar24 + lVar8) = param_14;
    ((uint64_t *)(lVar24 + lVar8))[1] = param_15;
    uVar11 = *(uint64_t *)(unaff_RBP + -0x70);
    uVar12 = *(uint64_t *)(unaff_RBP + -0x68);
    puVar2 = (uint64_t *)(lVar24 + 0x10 + lVar8);
    *puVar2 = uVar6;
    puVar2[1] = uVar10;
    uVar6 = *(uint64_t *)(unaff_RBP + -0x60);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x58);
    puVar2 = (uint64_t *)(lVar24 + 0x20 + lVar8);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    puVar2 = (uint64_t *)(lVar24 + 0x30 + lVar8);
    *puVar2 = uVar6;
    puVar2[1] = uVar10;
    *(int *)(lVar19 + 0x10) = *(int *)(lVar19 + 0x10) + 1;
    *(longlong *)(unaff_RSI + 0x1b78) = lVar20;
    *(int32_t *)(unaff_RSI + 0x1b2c) = *(int32_t *)(lVar20 + 0x84);
    fVar33 = *(float *)(lVar20 + 0x44);
    *(float *)(unaff_RSI + 0x1b48) =
         *(float *)(unaff_RSI + 0x1b48) - (*(float *)(lVar20 + 0x40) - fVar4);
    *(float *)(unaff_RSI + 0x1b4c) = *(float *)(unaff_RSI + 0x1b4c) - (fVar33 - fVar37);
  }
  else {
    FUN_1801248f0(lVar20);
  }
LAB_18011cbe6:
  bVar26 = *(byte *)(unaff_RBP + 0x70);
LAB_18011cbeb:
  uVar6 = *(uint64_t *)(param_10 + 0x2e8);
  if ((param_6 == '\0') && (bVar26 == 0)) {
    if (bStack0000000000000034 == '\0') {
      lVar20 = 0x24;
      if ((byte)param_9 != 0) {
        lVar20 = 0x21;
      }
    }
    else {
      lVar20 = ((ulonglong)(byte)param_9 ^ 1) * 2 + 0x23;
    }
  }
  else {
    lVar20 = 0x22;
  }
  puVar3 = (int32_t *)(unaff_R13 + 0x1628 + (lVar20 + 10) * 0x10);
  param_12._0_4_ = (float)*puVar3;
  param_12._4_4_ = (float)puVar3[1];
  param_13 = puVar3[2];
  fStack000000000000006c = (float)puVar3[3] * *(float *)(unaff_R13 + 0x1628);
  uVar17 = func_0x000180121e20(&param_12);
  uVar14 = *(uint *)(unaff_RBP + 0x88);
  FUN_18011cf80(uVar6,&param_7,uVar14,uVar17);
  if (iVar25 == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
    FUN_1801230e0(&param_7,1,_DAT_180c8a9b0);
  }
  lVar19 = _DAT_180c8a9b0;
  cVar13 = FUN_1801242c0(8);
  lVar20 = param_10;
  if ((cVar13 != '\0') &&
     ((*(float *)(lVar19 + 0x428) == 0.0 || (*(char *)(lVar19 + 0x41b) != '\0')))) {
    unaff_RBX[6] = iVar25;
  }
  uVar15 = uVar14 | 4;
  if ((unaff_RBX[0x13] & 4U) == 0) {
    uVar15 = uVar14;
  }
  if (*(longlong *)(unaff_RBP + 0x80) != 0) {
    func_0x000180123c50(param_10,unaff_RDI + 1);
  }
  cVar13 = FUN_18011d200(uVar6,&param_7,uVar15,*(uint64_t *)(unaff_RBP + 0x78));
  if (cVar13 != '\0') {
    **(int8_t **)(unaff_RBP + 0x80) = 0;
    if (unaff_RBX[7] == *piVar29) {
      if ((piVar29[1] & 1U) == 0) {
        piVar29[4] = -1;
        unaff_RBX[5] = 0;
        unaff_RBX[6] = 0;
      }
    }
    else if ((piVar29[1] & 1U) != 0) {
      unaff_RBX[6] = *piVar29;
    }
  }
  if (cStack0000000000000031 != '\0') {
    FUN_180126d80();
  }
  *(int32_t *)(lVar20 + 0x100) = uVar32;
  *(int32_t *)(lVar20 + 0x104) = uVar5;
  if ((((*(int *)(unaff_RSI + 0x1b18) == iVar25) && (param_6 == '\0')) &&
      (0.5 < *(float *)(unaff_RSI + 0x1b28))) && ((*(byte *)(unaff_RBX + 0x13) & 0x20) == 0)) {
    pcVar9 = *(char **)(unaff_RBP + 0x78);
    for (pcVar21 = pcVar9;
        ((pcVar21 != (char *)0xffffffffffffffff && (*pcVar21 != '\0')) &&
        ((*pcVar21 != '#' || (pcVar21[1] != '#')))); pcVar21 = pcVar21 + 1) {
    }
    FUN_18012ea30(&UNK_180a06410,(int)pcVar21 - (int)pcVar9,pcVar9);
  }
  return (ulonglong)bStack0000000000000034;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_18011c69f(void)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong lVar6;
  uint64_t uVar7;
  char *pcVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int32_t uVar18;
  longlong lVar19;
  char *pcVar20;
  longlong lVar21;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar22;
  ulonglong unaff_RDI;
  byte bVar23;
  uint uVar24;
  longlong lVar25;
  int unaff_R12D;
  longlong unaff_R13;
  char unaff_R14B;
  int *unaff_R15;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_XMM10_Da;
  char cStack0000000000000030;
  char cStack0000000000000031;
  char cStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  byte in_stack_00000048;
  longlong in_stack_00000050;
  int in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  int32_t in_stack_00000068;
  float fStack000000000000006c;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  uint64_t in_stack_00000078;
  
  iVar22 = (int)unaff_RDI;
  if (unaff_RBX[5] == iVar22) {
    unaff_R15[5] = *(int *)(unaff_RSI + 0x1a90);
  }
  fVar3 = (float)unaff_RBX[0xb];
  fVar30 = (float)unaff_R15[7];
  fVar31 = fVar3 + *(float *)(unaff_RBP + 0x74);
  uVar4 = *(int32_t *)(in_stack_00000050 + 0x100);
  uVar5 = *(int32_t *)(in_stack_00000050 + 0x104);
  fVar29 = ((float)(int)(float)unaff_R15[6] - (float)unaff_RBX[0x11]) + (float)unaff_RBX[10];
  *(float *)(in_stack_00000050 + 0x104) = fVar3;
  *(float *)(in_stack_00000050 + 0x100) = fVar29;
  fVar26 = (float)unaff_RBX[10];
  fVar30 = fVar29 + fVar30;
  fStack0000000000000038 = fVar29;
  fStack000000000000003c = fVar3;
  fStack0000000000000040 = fVar30;
  fStack0000000000000044 = fVar31;
  if ((fVar29 < fVar26) || ((float)unaff_RBX[0xc] <= fVar30)) {
    *(int *)(unaff_RBP + 0x70) = unaff_RBX[0xc];
    *(float *)(unaff_RBP + 0x74) = fVar31;
    fStack0000000000000064 = fVar3 - 1.0;
    cStack0000000000000031 = '\x01';
    fStack0000000000000060 = fVar29;
    if (fVar29 <= fVar26) {
      fStack0000000000000060 = fVar26;
    }
    FUN_180126d10(&stack0x00000060,unaff_RBP + 0x70,1);
    unaff_R13 = _DAT_180c8a9b0;
  }
  else {
    cStack0000000000000031 = '\0';
  }
  uVar18 = *(int32_t *)(unaff_RSI + 0x1660);
  *(float *)(unaff_RBP + 0x70) = fVar30 - fVar29;
  *(float *)(unaff_RBP + 0x74) = fVar31 - fVar3;
  func_0x000180124080(unaff_RBP + 0x70,uVar18);
  cVar14 = FUN_180124190(&stack0x00000038,unaff_RDI & 0xffffffff,0);
  if (cVar14 == '\0') {
    if (cStack0000000000000031 != '\0') {
      FUN_180126d80();
    }
    *(int32_t *)(in_stack_00000050 + 0x100) = uVar4;
    *(int32_t *)(in_stack_00000050 + 0x104) = uVar5;
    return unaff_R14B;
  }
  uVar18 = 0x44;
  if (*(char *)(unaff_RSI + 0x1dd0) != '\0') {
    cVar14 = FUN_18010e4b0(unaff_RSI + 0x1de0);
    uVar18 = 0x44;
    if (cVar14 == '\0') {
      uVar18 = 0x1044;
    }
  }
  cVar14 = FUN_18010f170(&stack0x00000038,unaff_RDI & 0xffffffff,unaff_RBP + 0x70,&stack0x00000030,
                         uVar18);
  uVar24 = *(uint *)(unaff_RBP + 0x88);
  bVar23 = *(byte *)(unaff_RBP + 0x70) | *(int *)(unaff_RSI + 0x1b18) == iVar22;
  *(byte *)(unaff_RBP + 0x70) = bVar23;
  if ((cVar14 != '\0') || (((uVar24 & 2) != 0 && (cStack0000000000000034 == '\0')))) {
    unaff_RBX[6] = iVar22;
  }
  if (cStack0000000000000030 == '\0') {
    func_0x0001801283b0();
  }
  fVar30 = fStack000000000000003c;
  fVar3 = fStack0000000000000038;
  lVar19 = *(longlong *)(unaff_RBP + 0x90);
  if ((((lVar19 == 0) || (lVar25 = *(longlong *)(lVar19 + 0x408), lVar25 == 0)) ||
      (*(longlong *)(lVar25 + 8) != 0)) ||
     ((((*(byte *)(lVar25 + 0xa0) & 0x10) != 0 || (*(int *)(lVar25 + 0x20) != 1)) ||
      (*(char *)(unaff_RSI + 0xc2) == '\0')))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (cStack0000000000000030 == '\0') goto LAB_18011cbeb;
  if (((!bVar13) || (*(char *)(unaff_R13 + 0x120) == '\0')) ||
     (*(float *)(unaff_R13 + 0x474) <= unaff_XMM10_Da &&
      unaff_XMM10_Da != *(float *)(unaff_R13 + 0x474))) {
    if (((in_stack_00000058 < unaff_R12D) || (*(char *)(unaff_R13 + 0x120) == '\0')) ||
       (fVar26 = *(float *)(unaff_R13 + 0x38) * *(float *)(unaff_R13 + 0x38),
       *(float *)(unaff_R13 + 0x474) <= fVar26 && fVar26 != *(float *)(unaff_R13 + 0x474)))
    goto LAB_18011cbeb;
    fVar26 = 0.0;
    if (*(char *)(unaff_RSI + 0x1dd0) != '\0') goto LAB_18011c9d9;
    uVar15 = unaff_RBX[0x13] & 1;
    if ((uVar15 == 0) && ((uVar24 >> 0x14 & 1) == 0)) goto LAB_18011cbeb;
    if ((unaff_XMM10_Da <= *(float *)(unaff_RSI + 0x3ac)) ||
       (fStack0000000000000038 <= *(float *)(unaff_RSI + 0x118))) {
      if (((unaff_XMM10_Da < *(float *)(unaff_RSI + 0x3ac)) &&
          (fStack0000000000000040 < *(float *)(unaff_RSI + 0x118))) &&
         (fVar26 = *(float *)(unaff_RSI + 0x118) - fStack0000000000000040, uVar15 != 0)) {
        iVar16 = *unaff_R15;
        unaff_RBX[0x15] = 1;
        goto LAB_18011c9d6;
      }
    }
    else {
      fVar26 = fStack0000000000000038 - *(float *)(unaff_RSI + 0x118);
      if (uVar15 != 0) {
        iVar16 = *unaff_R15;
        unaff_RBX[0x15] = -1;
LAB_18011c9d6:
        unaff_RBX[0x14] = iVar16;
      }
    }
LAB_18011c9d9:
    if ((uVar24 >> 0x14 & 1) == 0) goto LAB_18011cbeb;
    if ((*(char *)(unaff_RSI + 0x1dd0) == '\0') || (*(int *)(unaff_RSI + 0x1dec) != iVar22)) {
      fVar29 = *(float *)(unaff_RSI + 0x19f8);
      fVar31 = (ABS(*(float *)(unaff_RSI + 0x44c)) - (fVar29 + fVar29)) * 0.2;
      if (unaff_XMM10_Da <= fVar31) {
        fVar28 = fVar29 * 4.0;
        if (fVar31 <= fVar29 * 4.0) {
          fVar28 = fVar31;
        }
      }
      else {
        fVar28 = 0.0;
      }
      fVar31 = fStack000000000000003c - *(float *)(unaff_RSI + 0x11c);
      fVar27 = *(float *)(unaff_RSI + 0x11c) - fStack0000000000000044;
      if (fVar31 <= fVar27) {
        fVar31 = fVar27;
      }
      if (fVar31 < fVar29 * 1.5 + fVar28) {
        if (fVar26 <= fVar29 * 2.2) goto LAB_18011cbeb;
        if (((-1 < unaff_RBX[0x15]) ||
            (iVar16 = (int)((longlong)unaff_R15 - *(longlong *)(unaff_RBX + 2) >> 0x3f),
            (int)(((longlong)unaff_R15 - *(longlong *)(unaff_RBX + 2)) / 0x28) + iVar16 != iVar16))
           && ((unaff_RBX[0x15] < 1 ||
               ((int)(((longlong)unaff_R15 - *(longlong *)(unaff_RBX + 2)) / 0x28) !=
                *unaff_RBX + -1)))) goto LAB_18011cbe6;
      }
    }
    lVar25 = *(longlong *)(unaff_RSI + 0x2df8);
    *(uint64_t *)(unaff_RBP + -0x78) = 0;
    in_stack_00000078 = 0;
    *(uint64_t *)(unaff_RBP + -0x58) = 0;
    iVar16 = *(int *)(lVar25 + 0x14);
    *(uint64_t *)(unaff_RBP + -0x80) = 0;
    *(int8_t *)(unaff_RBP + -0x68) = 0;
    iVar17 = *(int *)(lVar25 + 0x10);
    *(int32_t *)(unaff_RBP + -0x70) = 0xffffffff;
    *(int32_t *)(unaff_RBP + -0x6c) = 0x3f000000;
    uStack0000000000000070 = 2;
    *(longlong *)(unaff_RBP + -0x60) = lVar19;
    if (iVar17 == iVar16) {
      if (iVar16 == 0) {
        iVar16 = 8;
      }
      else {
        iVar16 = iVar16 / 2 + iVar16;
      }
      iVar9 = iVar17 + 1;
      if (iVar17 + 1 < iVar16) {
        iVar9 = iVar16;
      }
      FUN_18013e6c0(lVar25 + 0x10,iVar9);
      iVar17 = *(int *)(lVar25 + 0x10);
      lVar19 = *(longlong *)(unaff_RBP + 0x90);
      unaff_R13 = _DAT_180c8a9b0;
    }
    uVar7 = *(uint64_t *)(unaff_RBP + -0x80);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x78);
    lVar6 = *(longlong *)(lVar25 + 0x18);
    lVar21 = (longlong)iVar17 * 0x40;
    *(uint64_t *)(lVar21 + lVar6) = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    ((uint64_t *)(lVar21 + lVar6))[1] = in_stack_00000078;
    uVar11 = *(uint64_t *)(unaff_RBP + -0x70);
    uVar12 = *(uint64_t *)(unaff_RBP + -0x68);
    puVar1 = (uint64_t *)(lVar21 + 0x10 + lVar6);
    *puVar1 = uVar7;
    puVar1[1] = uVar10;
    uVar7 = *(uint64_t *)(unaff_RBP + -0x60);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x58);
    puVar1 = (uint64_t *)(lVar21 + 0x20 + lVar6);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1 = (uint64_t *)(lVar21 + 0x30 + lVar6);
    *puVar1 = uVar7;
    puVar1[1] = uVar10;
    *(int *)(lVar25 + 0x10) = *(int *)(lVar25 + 0x10) + 1;
    *(longlong *)(unaff_RSI + 0x1b78) = lVar19;
    *(int32_t *)(unaff_RSI + 0x1b2c) = *(int32_t *)(lVar19 + 0x84);
    fVar26 = *(float *)(lVar19 + 0x44);
    *(float *)(unaff_RSI + 0x1b48) =
         *(float *)(unaff_RSI + 0x1b48) - (*(float *)(lVar19 + 0x40) - fVar3);
    *(float *)(unaff_RSI + 0x1b4c) = *(float *)(unaff_RSI + 0x1b4c) - (fVar26 - fVar30);
  }
  else {
    FUN_1801248f0(lVar19);
  }
LAB_18011cbe6:
  bVar23 = *(byte *)(unaff_RBP + 0x70);
LAB_18011cbeb:
  uVar7 = *(uint64_t *)(in_stack_00000050 + 0x2e8);
  if ((cStack0000000000000030 == '\0') && (bVar23 == 0)) {
    if (cStack0000000000000034 == '\0') {
      lVar19 = 0x24;
      if (in_stack_00000048 != 0) {
        lVar19 = 0x21;
      }
    }
    else {
      lVar19 = ((ulonglong)in_stack_00000048 ^ 1) * 2 + 0x23;
    }
  }
  else {
    lVar19 = 0x22;
  }
  puVar2 = (int32_t *)(unaff_R13 + 0x1628 + (lVar19 + 10) * 0x10);
  fStack0000000000000060 = (float)*puVar2;
  fStack0000000000000064 = (float)puVar2[1];
  in_stack_00000068 = puVar2[2];
  fStack000000000000006c = (float)puVar2[3] * *(float *)(unaff_R13 + 0x1628);
  uVar18 = func_0x000180121e20(&stack0x00000060);
  uVar24 = *(uint *)(unaff_RBP + 0x88);
  FUN_18011cf80(uVar7,&stack0x00000038,uVar24,uVar18);
  if (iVar22 == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
    FUN_1801230e0(&stack0x00000038,1,_DAT_180c8a9b0);
  }
  lVar25 = _DAT_180c8a9b0;
  cVar14 = FUN_1801242c0(8);
  lVar19 = in_stack_00000050;
  if ((cVar14 != '\0') &&
     ((*(float *)(lVar25 + 0x428) == unaff_XMM10_Da || (*(char *)(lVar25 + 0x41b) != '\0')))) {
    unaff_RBX[6] = iVar22;
  }
  uVar15 = uVar24 | 4;
  if ((unaff_RBX[0x13] & 4U) == 0) {
    uVar15 = uVar24;
  }
  if (*(longlong *)(unaff_RBP + 0x80) != 0) {
    func_0x000180123c50(in_stack_00000050,unaff_RDI + 1);
  }
  cVar14 = FUN_18011d200(uVar7,&stack0x00000038,uVar15,*(uint64_t *)(unaff_RBP + 0x78));
  if (cVar14 != '\0') {
    **(int8_t **)(unaff_RBP + 0x80) = 0;
    if (unaff_RBX[7] == *unaff_R15) {
      if ((unaff_R15[1] & 1U) == 0) {
        unaff_R15[4] = -1;
        unaff_RBX[5] = 0;
        unaff_RBX[6] = 0;
      }
    }
    else if ((unaff_R15[1] & 1U) != 0) {
      unaff_RBX[6] = *unaff_R15;
    }
  }
  if (cStack0000000000000031 != '\0') {
    FUN_180126d80();
  }
  *(int32_t *)(lVar19 + 0x100) = uVar4;
  *(int32_t *)(lVar19 + 0x104) = uVar5;
  if ((((*(int *)(unaff_RSI + 0x1b18) == iVar22) && (cStack0000000000000030 == '\0')) &&
      (0.5 < *(float *)(unaff_RSI + 0x1b28))) && ((*(byte *)(unaff_RBX + 0x13) & 0x20) == 0)) {
    pcVar8 = *(char **)(unaff_RBP + 0x78);
    for (pcVar20 = pcVar8;
        ((pcVar20 != (char *)0xffffffffffffffff && (*pcVar20 != '\0')) &&
        ((*pcVar20 != '#' || (pcVar20[1] != '#')))); pcVar20 = pcVar20 + 1) {
    }
    FUN_18012ea30(&UNK_180a06410,(int)pcVar20 - (int)pcVar8,pcVar8);
  }
  return cStack0000000000000034;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_18011c6b0(void)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong lVar6;
  uint64_t uVar7;
  char *pcVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int32_t uVar18;
  longlong lVar19;
  char *pcVar20;
  longlong lVar21;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar22;
  ulonglong unaff_RDI;
  byte bVar23;
  uint uVar24;
  longlong lVar25;
  int unaff_R12D;
  longlong unaff_R13;
  char unaff_R14B;
  int *unaff_R15;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_XMM10_Da;
  char cStack0000000000000030;
  char cStack0000000000000031;
  char cStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  byte in_stack_00000048;
  longlong in_stack_00000050;
  int in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  int32_t in_stack_00000068;
  float fStack000000000000006c;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  uint64_t in_stack_00000078;
  
  iVar22 = (int)unaff_RDI;
  if (unaff_RBX[5] == iVar22) {
    unaff_R15[5] = *(int *)(unaff_RSI + 0x1a90);
  }
  fVar3 = (float)unaff_RBX[0xb];
  fVar30 = (float)unaff_R15[7];
  fVar31 = fVar3 + *(float *)(unaff_RBP + 0x74);
  uVar4 = *(int32_t *)(in_stack_00000050 + 0x100);
  uVar5 = *(int32_t *)(in_stack_00000050 + 0x104);
  fVar29 = ((float)(int)(float)unaff_R15[6] - (float)unaff_RBX[0x11]) + (float)unaff_RBX[10];
  *(float *)(in_stack_00000050 + 0x104) = fVar3;
  *(float *)(in_stack_00000050 + 0x100) = fVar29;
  fVar26 = (float)unaff_RBX[10];
  fVar30 = fVar29 + fVar30;
  fStack0000000000000038 = fVar29;
  fStack000000000000003c = fVar3;
  fStack0000000000000040 = fVar30;
  fStack0000000000000044 = fVar31;
  if ((fVar29 < fVar26) || ((float)unaff_RBX[0xc] <= fVar30)) {
    *(int *)(unaff_RBP + 0x70) = unaff_RBX[0xc];
    *(float *)(unaff_RBP + 0x74) = fVar31;
    fStack0000000000000064 = fVar3 - 1.0;
    cStack0000000000000031 = '\x01';
    fStack0000000000000060 = fVar29;
    if (fVar29 <= fVar26) {
      fStack0000000000000060 = fVar26;
    }
    FUN_180126d10(&stack0x00000060,unaff_RBP + 0x70,1);
    unaff_R13 = _DAT_180c8a9b0;
  }
  else {
    cStack0000000000000031 = '\0';
  }
  uVar18 = *(int32_t *)(unaff_RSI + 0x1660);
  *(float *)(unaff_RBP + 0x70) = fVar30 - fVar29;
  *(float *)(unaff_RBP + 0x74) = fVar31 - fVar3;
  func_0x000180124080(unaff_RBP + 0x70,uVar18);
  cVar14 = FUN_180124190(&stack0x00000038,unaff_RDI & 0xffffffff,0);
  if (cVar14 == '\0') {
    if (cStack0000000000000031 != '\0') {
      FUN_180126d80();
    }
    *(int32_t *)(in_stack_00000050 + 0x100) = uVar4;
    *(int32_t *)(in_stack_00000050 + 0x104) = uVar5;
    return unaff_R14B;
  }
  uVar18 = 0x44;
  if (*(char *)(unaff_RSI + 0x1dd0) != '\0') {
    cVar14 = FUN_18010e4b0(unaff_RSI + 0x1de0);
    uVar18 = 0x44;
    if (cVar14 == '\0') {
      uVar18 = 0x1044;
    }
  }
  cVar14 = FUN_18010f170(&stack0x00000038,unaff_RDI & 0xffffffff,unaff_RBP + 0x70,&stack0x00000030,
                         uVar18);
  uVar24 = *(uint *)(unaff_RBP + 0x88);
  bVar23 = *(byte *)(unaff_RBP + 0x70) | *(int *)(unaff_RSI + 0x1b18) == iVar22;
  *(byte *)(unaff_RBP + 0x70) = bVar23;
  if ((cVar14 != '\0') || (((uVar24 & 2) != 0 && (cStack0000000000000034 == '\0')))) {
    unaff_RBX[6] = iVar22;
  }
  if (cStack0000000000000030 == '\0') {
    func_0x0001801283b0();
  }
  fVar30 = fStack000000000000003c;
  fVar3 = fStack0000000000000038;
  lVar19 = *(longlong *)(unaff_RBP + 0x90);
  if ((((lVar19 == 0) || (lVar25 = *(longlong *)(lVar19 + 0x408), lVar25 == 0)) ||
      (*(longlong *)(lVar25 + 8) != 0)) ||
     ((((*(byte *)(lVar25 + 0xa0) & 0x10) != 0 || (*(int *)(lVar25 + 0x20) != 1)) ||
      (*(char *)(unaff_RSI + 0xc2) == '\0')))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (cStack0000000000000030 == '\0') goto LAB_18011cbeb;
  if (((!bVar13) || (*(char *)(unaff_R13 + 0x120) == '\0')) ||
     (*(float *)(unaff_R13 + 0x474) <= unaff_XMM10_Da &&
      unaff_XMM10_Da != *(float *)(unaff_R13 + 0x474))) {
    if (((in_stack_00000058 < unaff_R12D) || (*(char *)(unaff_R13 + 0x120) == '\0')) ||
       (fVar26 = *(float *)(unaff_R13 + 0x38) * *(float *)(unaff_R13 + 0x38),
       *(float *)(unaff_R13 + 0x474) <= fVar26 && fVar26 != *(float *)(unaff_R13 + 0x474)))
    goto LAB_18011cbeb;
    fVar26 = 0.0;
    if (*(char *)(unaff_RSI + 0x1dd0) != '\0') goto LAB_18011c9d9;
    uVar15 = unaff_RBX[0x13] & 1;
    if ((uVar15 == 0) && ((uVar24 >> 0x14 & 1) == 0)) goto LAB_18011cbeb;
    if ((unaff_XMM10_Da <= *(float *)(unaff_RSI + 0x3ac)) ||
       (fStack0000000000000038 <= *(float *)(unaff_RSI + 0x118))) {
      if (((unaff_XMM10_Da < *(float *)(unaff_RSI + 0x3ac)) &&
          (fStack0000000000000040 < *(float *)(unaff_RSI + 0x118))) &&
         (fVar26 = *(float *)(unaff_RSI + 0x118) - fStack0000000000000040, uVar15 != 0)) {
        iVar16 = *unaff_R15;
        unaff_RBX[0x15] = 1;
        goto LAB_18011c9d6;
      }
    }
    else {
      fVar26 = fStack0000000000000038 - *(float *)(unaff_RSI + 0x118);
      if (uVar15 != 0) {
        iVar16 = *unaff_R15;
        unaff_RBX[0x15] = -1;
LAB_18011c9d6:
        unaff_RBX[0x14] = iVar16;
      }
    }
LAB_18011c9d9:
    if ((uVar24 >> 0x14 & 1) == 0) goto LAB_18011cbeb;
    if ((*(char *)(unaff_RSI + 0x1dd0) == '\0') || (*(int *)(unaff_RSI + 0x1dec) != iVar22)) {
      fVar29 = *(float *)(unaff_RSI + 0x19f8);
      fVar31 = (ABS(*(float *)(unaff_RSI + 0x44c)) - (fVar29 + fVar29)) * 0.2;
      if (unaff_XMM10_Da <= fVar31) {
        fVar28 = fVar29 * 4.0;
        if (fVar31 <= fVar29 * 4.0) {
          fVar28 = fVar31;
        }
      }
      else {
        fVar28 = 0.0;
      }
      fVar31 = fStack000000000000003c - *(float *)(unaff_RSI + 0x11c);
      fVar27 = *(float *)(unaff_RSI + 0x11c) - fStack0000000000000044;
      if (fVar31 <= fVar27) {
        fVar31 = fVar27;
      }
      if (fVar31 < fVar29 * 1.5 + fVar28) {
        if (fVar26 <= fVar29 * 2.2) goto LAB_18011cbeb;
        if (((-1 < unaff_RBX[0x15]) ||
            (iVar16 = (int)((longlong)unaff_R15 - *(longlong *)(unaff_RBX + 2) >> 0x3f),
            (int)(((longlong)unaff_R15 - *(longlong *)(unaff_RBX + 2)) / 0x28) + iVar16 != iVar16))
           && ((unaff_RBX[0x15] < 1 ||
               ((int)(((longlong)unaff_R15 - *(longlong *)(unaff_RBX + 2)) / 0x28) !=
                *unaff_RBX + -1)))) goto LAB_18011cbe6;
      }
    }
    lVar25 = *(longlong *)(unaff_RSI + 0x2df8);
    *(uint64_t *)(unaff_RBP + -0x78) = 0;
    in_stack_00000078 = 0;
    *(uint64_t *)(unaff_RBP + -0x58) = 0;
    iVar16 = *(int *)(lVar25 + 0x14);
    *(uint64_t *)(unaff_RBP + -0x80) = 0;
    *(int8_t *)(unaff_RBP + -0x68) = 0;
    iVar17 = *(int *)(lVar25 + 0x10);
    *(int32_t *)(unaff_RBP + -0x70) = 0xffffffff;
    *(int32_t *)(unaff_RBP + -0x6c) = 0x3f000000;
    uStack0000000000000070 = 2;
    *(longlong *)(unaff_RBP + -0x60) = lVar19;
    if (iVar17 == iVar16) {
      if (iVar16 == 0) {
        iVar16 = 8;
      }
      else {
        iVar16 = iVar16 / 2 + iVar16;
      }
      iVar9 = iVar17 + 1;
      if (iVar17 + 1 < iVar16) {
        iVar9 = iVar16;
      }
      FUN_18013e6c0(lVar25 + 0x10,iVar9);
      iVar17 = *(int *)(lVar25 + 0x10);
      lVar19 = *(longlong *)(unaff_RBP + 0x90);
      unaff_R13 = _DAT_180c8a9b0;
    }
    uVar7 = *(uint64_t *)(unaff_RBP + -0x80);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x78);
    lVar6 = *(longlong *)(lVar25 + 0x18);
    lVar21 = (longlong)iVar17 * 0x40;
    *(uint64_t *)(lVar21 + lVar6) = CONCAT44(uStack0000000000000074,uStack0000000000000070);
    ((uint64_t *)(lVar21 + lVar6))[1] = in_stack_00000078;
    uVar11 = *(uint64_t *)(unaff_RBP + -0x70);
    uVar12 = *(uint64_t *)(unaff_RBP + -0x68);
    puVar1 = (uint64_t *)(lVar21 + 0x10 + lVar6);
    *puVar1 = uVar7;
    puVar1[1] = uVar10;
    uVar7 = *(uint64_t *)(unaff_RBP + -0x60);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x58);
    puVar1 = (uint64_t *)(lVar21 + 0x20 + lVar6);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1 = (uint64_t *)(lVar21 + 0x30 + lVar6);
    *puVar1 = uVar7;
    puVar1[1] = uVar10;
    *(int *)(lVar25 + 0x10) = *(int *)(lVar25 + 0x10) + 1;
    *(longlong *)(unaff_RSI + 0x1b78) = lVar19;
    *(int32_t *)(unaff_RSI + 0x1b2c) = *(int32_t *)(lVar19 + 0x84);
    fVar26 = *(float *)(lVar19 + 0x44);
    *(float *)(unaff_RSI + 0x1b48) =
         *(float *)(unaff_RSI + 0x1b48) - (*(float *)(lVar19 + 0x40) - fVar3);
    *(float *)(unaff_RSI + 0x1b4c) = *(float *)(unaff_RSI + 0x1b4c) - (fVar26 - fVar30);
  }
  else {
    FUN_1801248f0(lVar19);
  }
LAB_18011cbe6:
  bVar23 = *(byte *)(unaff_RBP + 0x70);
LAB_18011cbeb:
  uVar7 = *(uint64_t *)(in_stack_00000050 + 0x2e8);
  if ((cStack0000000000000030 == '\0') && (bVar23 == 0)) {
    if (cStack0000000000000034 == '\0') {
      lVar19 = 0x24;
      if (in_stack_00000048 != 0) {
        lVar19 = 0x21;
      }
    }
    else {
      lVar19 = ((ulonglong)in_stack_00000048 ^ 1) * 2 + 0x23;
    }
  }
  else {
    lVar19 = 0x22;
  }
  puVar2 = (int32_t *)(unaff_R13 + 0x1628 + (lVar19 + 10) * 0x10);
  fStack0000000000000060 = (float)*puVar2;
  fStack0000000000000064 = (float)puVar2[1];
  in_stack_00000068 = puVar2[2];
  fStack000000000000006c = (float)puVar2[3] * *(float *)(unaff_R13 + 0x1628);
  uVar18 = func_0x000180121e20(&stack0x00000060);
  uVar24 = *(uint *)(unaff_RBP + 0x88);
  FUN_18011cf80(uVar7,&stack0x00000038,uVar24,uVar18);
  if (iVar22 == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
    FUN_1801230e0(&stack0x00000038,1,_DAT_180c8a9b0);
  }
  lVar25 = _DAT_180c8a9b0;
  cVar14 = FUN_1801242c0(8);
  lVar19 = in_stack_00000050;
  if ((cVar14 != '\0') &&
     ((*(float *)(lVar25 + 0x428) == unaff_XMM10_Da || (*(char *)(lVar25 + 0x41b) != '\0')))) {
    unaff_RBX[6] = iVar22;
  }
  uVar15 = uVar24 | 4;
  if ((unaff_RBX[0x13] & 4U) == 0) {
    uVar15 = uVar24;
  }
  if (*(longlong *)(unaff_RBP + 0x80) != 0) {
    func_0x000180123c50(in_stack_00000050,unaff_RDI + 1);
  }
  cVar14 = FUN_18011d200(uVar7,&stack0x00000038,uVar15,*(uint64_t *)(unaff_RBP + 0x78));
  if (cVar14 != '\0') {
    **(int8_t **)(unaff_RBP + 0x80) = 0;
    if (unaff_RBX[7] == *unaff_R15) {
      if ((unaff_R15[1] & 1U) == 0) {
        unaff_R15[4] = -1;
        unaff_RBX[5] = 0;
        unaff_RBX[6] = 0;
      }
    }
    else if ((unaff_R15[1] & 1U) != 0) {
      unaff_RBX[6] = *unaff_R15;
    }
  }
  if (cStack0000000000000031 != '\0') {
    FUN_180126d80();
  }
  *(int32_t *)(lVar19 + 0x100) = uVar4;
  *(int32_t *)(lVar19 + 0x104) = uVar5;
  if ((((*(int *)(unaff_RSI + 0x1b18) == iVar22) && (cStack0000000000000030 == '\0')) &&
      (0.5 < *(float *)(unaff_RSI + 0x1b28))) && ((*(byte *)(unaff_RBX + 0x13) & 0x20) == 0)) {
    pcVar8 = *(char **)(unaff_RBP + 0x78);
    for (pcVar20 = pcVar8;
        ((pcVar20 != (char *)0xffffffffffffffff && (*pcVar20 != '\0')) &&
        ((*pcVar20 != '#' || (pcVar20[1] != '#')))); pcVar20 = pcVar20 + 1) {
    }
    FUN_18012ea30(&UNK_180a06410,(int)pcVar20 - (int)pcVar8,pcVar8);
  }
  return cStack0000000000000034;
}



int8_t FUN_18011c7f4(void)

{
  char in_AL;
  int8_t unaff_R14B;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM12_Da;
  uint64_t in_stack_00000030;
  longlong in_stack_00000050;
  
  if (in_stack_00000030._1_1_ != in_AL) {
    FUN_180126d80();
  }
  *(int32_t *)(in_stack_00000050 + 0x100) = unaff_XMM11_Da;
  *(int32_t *)(in_stack_00000050 + 0x104) = unaff_XMM12_Da;
  return unaff_R14B;
}







