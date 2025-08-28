#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part093.c - 3 个函数

// 函数: void FUN_180118a80(void)
void FUN_180118a80(void)

{
  FUN_180118aa0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180118aa0(uint64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  uVar6 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar6 + 0xb1) = 1;
  lVar2 = *(int64_t *)(lVar3 + 0x1af8);
  if (*(char *)(lVar2 + 0xb4) == '\0') {
    lVar1 = lVar3 + 0x3054;
    iVar4 = FUN_18004b9b0(lVar1,0xc01);
    if (lVar1 != 0) {
      if ((iVar4 == -1) || (0xc00 < iVar4)) {
        iVar4 = 0xc00;
      }
      *(int8_t *)(iVar4 + lVar1) = 0;
    }
    iVar5 = FUN_180121250(param_1,0,
                          *(int32_t *)
                           (*(int64_t *)(lVar2 + 0x220) + -4 +
                           (int64_t)*(int *)(lVar2 + 0x218) * 4));
    lVar2 = SYSTEM_DATA_MANAGER_A;
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar5) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar5;
    }
    if (*(int *)(lVar2 + 0x1b30) == iVar5) {
      *(int8_t *)(lVar2 + 0x1b3f) = 1;
    }
    uVar6 = FUN_180118ba0(iVar5,param_2,lVar1,lVar3 + iVar4 + 0x3054);
  }
  else {
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180118ae6(void)
void FUN_180118ae6(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  
  lVar1 = unaff_RDI + 0x3054;
  iVar3 = FUN_18004b9b0(lVar1,0xc01);
  if (lVar1 != 0) {
    if ((iVar3 == -1) || (0xc00 < iVar3)) {
      iVar3 = 0xc00;
    }
    *(int8_t *)(iVar3 + lVar1) = 0;
  }
  iVar4 = FUN_180121250();
  lVar2 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar4) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar4;
  }
  if (*(int *)(lVar2 + 0x1b30) == iVar4) {
    *(int8_t *)(lVar2 + 0x1b3f) = 1;
  }
  FUN_180118ba0(iVar4,unaff_EBP,lVar1,unaff_RDI + iVar3 + 0x3054);
  return;
}





// 函数: void FUN_180118b7d(void)
void FUN_180118b7d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180118ba0(uint param_1,uint param_2,char *param_3,char *param_4)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  int8_t uVar6;
  int iVar7;
  int32_t uVar8;
  float *pfVar9;
  int64_t lVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  char cVar14;
  uint64_t uVar15;
  char *pcVar16;
  byte bVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint64_t in_stack_fffffffffffffec8;
  uint64_t in_stack_fffffffffffffed0;
  int32_t uVar29;
  float fStack_118;
  float fStack_114;
  char cStack_110;
  char acStack_10f [7];
  uint64_t uStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint64_t uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  uVar29 = (int32_t)((uint64_t)in_stack_fffffffffffffed0 >> 0x20);
  uVar8 = (int32_t)((uint64_t)in_stack_fffffffffffffec8 >> 0x20);
  uVar18 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar18 + 0xb1) = 1;
  uStack_e0 = *(int64_t *)(lVar3 + 0x1af8);
  if (*(char *)(uStack_e0 + 0xb4) != '\0') {
    return uVar18 & 0xffffffffffffff00;
  }
  uStack_100 = param_2 >> 1 & 0x7fffff01;
  if (((param_2 >> 1 & 1) == 0) && ((param_2 >> 10 & 1) == 0)) {
    pfVar9 = &fStack_e8;
    fStack_e8 = *(float *)(lVar3 + 0x165c);
    fStack_e4 = 0.0;
  }
  else {
    pfVar9 = (float *)&uStack_108;
    uStack_108 = *(int64_t *)(lVar3 + 0x165c);
  }
  fVar1 = *pfVar9;
  fVar25 = pfVar9[1];
  if ((param_4 == (char *)0x0) && (param_4 = param_3, param_3 != (char *)0xffffffffffffffff)) {
    while (*param_4 != '\0') {
      if (((*param_4 == '#') && (param_4[1] == '#')) ||
         (param_4 = param_4 + 1, param_4 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar9 = *(float **)(lVar3 + 0x19f0);
  fVar24 = *(float *)(lVar3 + 0x19f8);
  if (param_3 == param_4) {
    fStack_e8 = 0.0;
    fStack_114 = fVar24;
  }
  else {
    uVar13 = CONCAT44(uVar8,0xbf800000);
    pcVar16 = param_3;
    FUN_180297340(pfVar9,&fStack_118,fVar24,uStack_e0,uVar13,param_3,param_4,0);
    uVar29 = (int32_t)((uint64_t)pcVar16 >> 0x20);
    uVar8 = (int32_t)((uint64_t)uVar13 >> 0x20);
    if (0.0 < fStack_118) {
      fStack_118 = fStack_118 - fVar24 / *pfVar9;
    }
    fVar24 = *(float *)(lVar3 + 0x19f8);
    fStack_e8 = (float)(int)(fStack_118 + 0.95);
  }
  uVar18 = (uint64_t)param_1;
  cVar14 = (char)uStack_100;
  lVar10 = *(int64_t *)(lVar3 + 0x1af8);
  fVar28 = *(float *)(uStack_e0 + 0x128);
  if (*(float *)(uStack_e0 + 0x128) <= fVar25) {
    fVar28 = fVar25;
  }
  lVar19 = *(int64_t *)(lVar10 + 0x210);
  fVar23 = *(float *)(lVar3 + 0x1660) + *(float *)(lVar3 + 0x1660) + fVar24;
  fVar27 = *(float *)(lVar10 + 0x278) - *(float *)(lVar10 + 0x40);
  fVar25 = fVar25 + fVar25 + fStack_114;
  if (*(float *)(uStack_e0 + 0x124) <= fVar23) {
    fVar23 = *(float *)(uStack_e0 + 0x124);
  }
  if (fVar23 <= fVar25) {
    fVar23 = fVar25;
  }
  fVar25 = fVar23 + *(float *)(uStack_e0 + 0x104);
  if (lVar19 != 0) {
    iVar7 = *(int *)(lVar19 + 0xc) + 1;
    iVar11 = *(int *)(lVar19 + 0xc);
    if (-1 < iVar7) {
      iVar11 = iVar7;
    }
    fVar27 = ((*(float *)(lVar19 + 0x18) - *(float *)(lVar19 + 0x14)) *
              *(float *)((int64_t)iVar11 * 0x1c + *(int64_t *)(lVar19 + 0x38)) +
             *(float *)(lVar19 + 0x14)) - *(float *)(lVar10 + 0x70);
  }
  fVar26 = *(float *)(uStack_e0 + 0x100);
  fVar2 = *(float *)(uStack_e0 + 0x104);
  fVar27 = fVar27 + *(float *)(uStack_e0 + 0x40);
  fVar21 = fVar1 + fVar1;
  if (cVar14 != '\0') {
    fVar21 = (float)(int)(*(float *)(uStack_e0 + 0x70) * 0.5) - 1.0;
    fVar26 = fVar26 - fVar21;
    fVar27 = fVar21 + fVar27;
    fVar21 = fVar1 * 3.0;
  }
  fVar21 = fVar24 + fVar21;
  if (fStack_e8 <= 0.0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = fVar1 + fVar1 + fStack_e8;
  }
  fVar24 = fVar24 + fVar22;
  lVar10 = uStack_e0;
  fStack_118 = fVar24;
  fStack_e4 = fStack_114;
  fStack_114 = fVar23;
  fStack_d8 = fVar26;
  fStack_d4 = fVar2;
  fStack_d0 = fVar27;
  fStack_cc = fVar25;
  func_0x000180124080(&fStack_118);
  fStack_f0 = fVar27;
  if (cVar14 == '\0') {
    fStack_f0 = *(float *)(lVar3 + 0x166c) + *(float *)(lVar3 + 0x166c) + fVar26 + fVar24;
  }
  lVar19 = lVar3;
  fStack_f8 = fVar26;
  fStack_f4 = fVar2;
  fStack_ec = fVar25;
  if ((param_2 >> 8 & 1) == 0) {
    uStack_108 = *(int64_t *)(lVar3 + 0x1af8);
    uVar13 = *(uint64_t *)(uStack_108 + 0x198);
    if (*(uint *)(lVar3 + 0x1c64) == 0) {
      iVar7 = FUN_180121f20(uVar13,uVar18 & 0xffffffff,param_2 >> 5 & 1);
      uVar15 = (uint64_t)(iVar7 != 0);
    }
    else if ((*(uint *)(lVar3 + 0x1c64) & 1) == 0) {
      iVar11 = -1;
      iVar7 = FUN_180121f20(uVar13,uVar18 & 0xffffffff);
      if (iVar7 == iVar11) {
        uVar15 = (uint64_t)*(byte *)(lVar3 + 0x1c60);
        FUN_1801220b0(uVar13,param_1,*(byte *)(lVar3 + 0x1c60));
        lVar19 = SYSTEM_DATA_MANAGER_A;
        *(int32_t *)(lVar3 + 0x1c64) = 0;
      }
      else {
        *(int32_t *)(lVar3 + 0x1c64) = 0;
        uVar15 = (uint64_t)(iVar7 != 0);
      }
    }
    else {
      uVar15 = (uint64_t)*(byte *)(lVar3 + 0x1c60);
      FUN_1801220b0(uVar13,uVar18 & 0xffffffff,*(byte *)(lVar3 + 0x1c60));
      lVar19 = SYSTEM_DATA_MANAGER_A;
      *(int32_t *)(lVar3 + 0x1c64) = 0;
    }
    lVar10 = uStack_e0;
    if (((*(char *)(lVar3 + 0x2e38) != '\0') && ((param_2 & 0x10) == 0)) &&
       (*(int *)(uStack_108 + 0x13c) < *(int *)(lVar3 + 0x2e5c))) {
      uVar15 = 1;
    }
  }
  else {
    uVar15 = 1;
  }
  uVar20 = param_2 >> 8 & 0xffff01;
  cVar14 = (char)uVar15;
  if (((cVar14 != '\0') && (*(char *)(lVar3 + 0x1d04) == '\0')) && ((param_2 & 0x2008) == 0x2000)) {
    *(uint *)(lVar10 + 0x140) =
         *(uint *)(lVar10 + 0x140) | 1 << ((byte)*(int32_t *)(lVar10 + 0x13c) & 0x1f);
  }
  uStack_fc = uVar20;
  cVar4 = FUN_180124190(&fStack_f8,param_1,0);
  *(uint *)(uStack_e0 + 0x148) = *(uint *)(uStack_e0 + 0x148) | 2;
  *(float *)(uStack_e0 + 0x15c) = fStack_d8;
  *(float *)(uStack_e0 + 0x160) = fStack_d4;
  *(float *)(uStack_e0 + 0x164) = fStack_d0;
  *(float *)(uStack_e0 + 0x168) = fStack_cc;
  if (cVar4 == '\0') goto joined_r0x000180119648;
  fStack_118 = (float)(param_2 & 4);
  uVar12 = ((uint)fStack_118 | 0x40) << 4;
  if ((char)uVar20 == '\0') {
    uVar12 = uVar12 | 0x1000;
  }
  if ((param_2 & 0x40) != 0) {
    uVar12 = uVar12 | (param_2 & 0x80 | 0x400) >> 6;
  }
  uVar13 = CONCAT44(uVar8,uVar12);
  cVar4 = FUN_18010f170(&fStack_f8,param_1,&cStack_110,acStack_10f,uVar13);
  uVar20 = (uint)((uint64_t)uVar13 >> 0x20);
  if ((char)uStack_fc == '\0') {
    bVar17 = 0;
    if (cVar4 != '\0') {
      if (((param_2 & 0xc0) == 0) || (*(uint *)(lVar3 + 0x1ca4) == param_1)) {
        bVar17 = 1;
      }
      if ((char)param_2 < '\0') {
        bVar5 = 1;
        uStack_108 = CONCAT44(fStack_ec,fStack_f8 + fVar21);
        cVar4 = FUN_180128040(&fStack_f8,&uStack_108);
        if ((cVar4 == '\0') || (*(char *)(lVar3 + 0x1d07) != '\0')) {
          bVar5 = 0;
        }
        bVar17 = bVar17 | bVar5;
      }
      if ((param_2 & 0x40) != 0) {
        bVar17 = bVar17 | *(byte *)(lVar3 + 0x415);
      }
      if ((*(char *)(lVar3 + 0x1dd0) != '\0') && (cVar14 != '\0')) {
        bVar17 = 0;
      }
    }
    uVar12 = *(uint *)(lVar3 + 0x1ca0);
    if ((((uVar12 == param_1) && (*(char *)(lVar3 + 0x1d21) != '\0')) &&
        (*(int *)(lVar3 + 0x1d2c) == 0)) && (cVar14 != '\0')) {
      *(int8_t *)(lVar19 + 0x1d21) = 0;
      bVar17 = 1;
      if ((*(char *)(lVar19 + 0x1d21) == '\0') && (*(char *)(lVar19 + 0x1d09) == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(int8_t *)(lVar19 + 0x1d08) = uVar6;
      uVar12 = *(uint *)(lVar3 + 0x1ca0);
    }
    if (((uVar12 == param_1) && (*(char *)(lVar3 + 0x1d21) != '\0')) &&
       ((*(int *)(lVar3 + 0x1d2c) == 1 && (cVar14 == '\0')))) {
      *(int8_t *)(lVar19 + 0x1d21) = 0;
      if (*(char *)(lVar19 + 0x1d09) == '\0') {
        *(int8_t *)(lVar19 + 0x1d08) = 0;
      }
      else {
        *(int8_t *)(lVar19 + 0x1d08) = 1;
      }
    }
    else if (bVar17 == 0) goto LAB_180119279;
    uVar15 = (uint64_t)(cVar14 == '\0');
    FUN_1801220b0(*(uint64_t *)(uStack_e0 + 0x198),param_1,cVar14 == '\0');
    lVar19 = SYSTEM_DATA_MANAGER_A;
  }
LAB_180119279:
  if (fStack_118 != 0.0) {
    func_0x0001801283b0();
  }
  if ((acStack_10f[0] == '\0') || (cStack_110 == '\0')) {
    lVar10 = (uint64_t)(cStack_110 != '\0') + 0x18;
  }
  else {
    lVar10 = 0x1a;
  }
  pfVar9 = (float *)(lVar19 + 0x1628 + (lVar10 + 10) * 0x10);
  fStack_f8 = *pfVar9;
  fStack_f4 = pfVar9[1];
  fStack_f0 = pfVar9[2];
  fStack_ec = pfVar9[3] * *(float *)(lVar19 + 0x1628);
  uVar8 = func_0x000180121e20(&fStack_f8);
  fStack_118 = fVar21 + fVar26;
  fVar24 = fVar2 + fVar28;
  cVar14 = (char)uVar15;
  fStack_114 = fVar24;
  if ((char)uStack_100 == '\0') {
    if ((cStack_110 != '\0') || ((param_2 & 1) != 0)) {
      uStack_108 = CONCAT44(fVar25,fVar27);
      uStack_e0 = CONCAT44(fVar2,fVar26);
      FUN_180293f50(*(uint64_t *)(*(int64_t *)(lVar19 + 0x1af8) + 0x2e8),&uStack_e0,&uStack_108,
                    uVar8,(uint64_t)uVar20 << 0x20,CONCAT44(uVar29,0xf));
      if (param_1 == *(uint *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) {
        FUN_1801230e0(&fStack_d8,2);
      }
    }
    if ((param_2 >> 9 & 1) == 0) {
      if ((char)uStack_fc == '\0') {
        uVar13 = 1;
        if (cVar14 != '\0') {
          uVar13 = 3;
        }
        FUN_180122c80(CONCAT44(*(float *)(lVar3 + 0x19f8) * 0.15 + fVar28 + fVar2,fVar1 + fVar26),
                      uVar13,0x3f333333);
      }
    }
    else {
      FUN_180122e80(CONCAT44(*(float *)(lVar3 + 0x19f8) * 0.5 + fVar28 + fVar2,fVar21 * 0.5 + fVar26
                            ));
    }
    if (*(char *)(lVar3 + 0x2e38) != '\0') {
      FUN_18013c800(&fStack_118,&unknown_var_2252_ptr,0);
    }
    FUN_180122320(CONCAT44(fStack_114,fStack_118),param_3,param_4,0);
  }
  else {
    FUN_180122960(CONCAT44(fStack_d4,fStack_d8),CONCAT44(fStack_cc,fStack_d0),uVar8,1,
                  CONCAT44(uVar20,*(int32_t *)(lVar3 + 0x1664)));
    if (param_1 == *(uint *)(SYSTEM_DATA_MANAGER_A + 0x1ca0)) {
      FUN_1801230e0(&fStack_d8,2);
    }
    uVar13 = 1;
    if (cVar14 != '\0') {
      uVar13 = 3;
    }
    FUN_180122c80(CONCAT44(fVar24,fVar1 + fVar26),uVar13,0x3f800000);
    lVar10 = SYSTEM_DATA_MANAGER_A;
    if (*(char *)(lVar3 + 0x2e38) == '\0') {
      uStack_108 = 0;
      if (param_4 == (char *)0x0) {
        param_4 = (char *)0xffffffffffffffff;
      }
      pcVar16 = param_3;
      if (param_3 < param_4) {
        while (*pcVar16 != '\0') {
          if (((*pcVar16 == '#') && (pcVar16[1] == '#')) ||
             (pcVar16 = pcVar16 + 1, param_4 <= pcVar16)) break;
        }
      }
      if (((int)pcVar16 != (int)param_3) &&
         (FUN_1801224c0(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),&fStack_118,
                        &fStack_d0,param_3,pcVar16,&fStack_e8,&uStack_108,0),
         *(char *)(lVar10 + 0x2e38) != '\0')) {
        FUN_18013c800(&fStack_118,param_3,pcVar16);
      }
    }
    else {
      uStack_100 = CONCAT13(uStack_100._3_1_,0x2323);
      uStack_fc = 0x23230a;
      FUN_18013c800(&fStack_118,&uStack_fc,(int64_t)&uStack_fc + 3);
      lVar3 = SYSTEM_DATA_MANAGER_A;
      uStack_108 = 0;
      if (param_4 == (char *)0x0) {
        param_4 = (char *)0xffffffffffffffff;
      }
      pcVar16 = param_3;
      if (param_3 < param_4) {
        do {
          if ((*pcVar16 == '\0') || ((*pcVar16 == '#' && (pcVar16[1] == '#')))) break;
          pcVar16 = pcVar16 + 1;
        } while (pcVar16 < param_4);
      }
      if (((int)pcVar16 != (int)param_3) &&
         (FUN_1801224c0(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),&fStack_118,
                        &fStack_d0,param_3,pcVar16,&fStack_e8,&uStack_108,0),
         *(char *)(lVar3 + 0x2e38) != '\0')) {
        FUN_18013c800(&fStack_118,param_3,pcVar16);
      }
      FUN_18013c800(&fStack_118,(int64_t)&uStack_100 + 1,(int64_t)&uStack_100 + 3);
    }
  }
joined_r0x000180119648:
  if ((cVar14 != '\0') && ((param_2 & 8) == 0)) {
    FUN_1801196d0(param_1);
  }
  return uVar15;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



