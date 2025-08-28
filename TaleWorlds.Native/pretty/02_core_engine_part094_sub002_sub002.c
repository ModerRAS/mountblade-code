#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part094_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801196d0(int32_t param_1)
void FUN_1801196d0(int32_t param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  lVar4 = _DAT_180c8a9b0;
  *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar2 = *(longlong *)(lVar4 + 0x1af8);
  *(int8_t *)(lVar2 + 0xb1) = 1;
  piVar1 = (int *)(lVar2 + 0x218);
  lVar3 = *(longlong *)(lVar4 + 0x1af8);
  fVar8 = *(float *)(lVar4 + 0x1684) + *(float *)(lVar3 + 0x204);
  *(float *)(lVar3 + 0x204) = fVar8;
  *(float *)(lVar3 + 0x100) = fVar8 + *(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0x20c);
  *(int *)(lVar2 + 0x13c) = *(int *)(lVar2 + 0x13c) + 1;
  iVar6 = *piVar1;
  iVar5 = *(int *)(lVar2 + 0x21c);
  if (iVar6 == iVar5) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar7 = iVar6 + 1;
    if (iVar6 + 1 < iVar5) {
      iVar7 = iVar5;
    }
    FUN_18011dbd0(piVar1,iVar7);
    iVar6 = *piVar1;
  }
  *(int32_t *)(*(longlong *)(lVar2 + 0x220) + (longlong)iVar6 * 4) = param_1;
  *piVar1 = *piVar1 + 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x000180118c7e)
// WARNING: Removing unreachable block (ram,0x000180118c85)
// WARNING: Removing unreachable block (ram,0x000180118f40)
// WARNING: Removing unreachable block (ram,0x00018011958b)
// WARNING: Removing unreachable block (ram,0x00018011913b)
// WARNING: Removing unreachable block (ram,0x00018011916e)
// WARNING: Removing unreachable block (ram,0x00018011917d)
// WARNING: Removing unreachable block (ram,0x000180119177)
// WARNING: Removing unreachable block (ram,0x00018011917f)
// WARNING: Removing unreachable block (ram,0x0001801190e0)
// WARNING: Removing unreachable block (ram,0x000180119064)
// WARNING: Removing unreachable block (ram,0x000180119019)
// WARNING: Removing unreachable block (ram,0x00018011902f)
// WARNING: Removing unreachable block (ram,0x0001801190b4)
// WARNING: Removing unreachable block (ram,0x000180119128)
// WARNING: Removing unreachable block (ram,0x000180119187)
// WARNING: Removing unreachable block (ram,0x000180119650)
// WARNING: Removing unreachable block (ram,0x000180119653)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

ulonglong FUN_1801198c0(char *param_1)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  longlong lVar4;
  float fVar5;
  char cVar6;
  int8_t uVar7;
  int iVar8;
  int32_t uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint64_t uVar14;
  char *pcVar15;
  char cVar16;
  ulonglong uVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  uint64_t in_stack_fffffffffffffec8;
  int32_t uVar30;
  uint64_t in_stack_fffffffffffffed0;
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
  
  lVar4 = _DAT_180c8a9b0;
  uVar30 = (int32_t)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  uVar9 = (int32_t)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  uVar19 = *(ulonglong *)(lVar4 + 0x1af8);
  if (*(char *)(uVar19 + 0xb4) != '\0') {
    return uVar19 & 0xffffffffffffff00;
  }
  uVar10 = FUN_180121250(param_1,0,
                         *(int32_t *)
                          (*(longlong *)(uVar19 + 0x220) + -4 +
                          (longlong)*(int *)(uVar19 + 0x218) * 4));
  if (*(uint *)(lVar4 + 0x1b2c) == uVar10) {
    *(uint *)(lVar4 + 0x1b34) = uVar10;
  }
  if (*(uint *)(lVar4 + 0x1b30) == uVar10) {
    *(int8_t *)(lVar4 + 0x1b3f) = 1;
  }
  lVar4 = _DAT_180c8a9b0;
  uVar19 = *(ulonglong *)(_DAT_180c8a9b0 + 0x1af8);
  *(int8_t *)(uVar19 + 0xb1) = 1;
  uStack_e0 = *(longlong *)(lVar4 + 0x1af8);
  if (*(char *)(uStack_e0 + 0xb4) != '\0') {
    return uVar19 & 0xffffffffffffff00;
  }
  cVar6 = '\x01';
  uStack_100 = 1;
  uVar14 = *(uint64_t *)(lVar4 + 0x165c);
  uStack_108._0_4_ = (float)uVar14;
  fVar5 = (float)uStack_108;
  uStack_108._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
  fVar25 = uStack_108._4_4_;
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      if (((*pcVar15 == '#') && (pcVar15[1] == '#')) ||
         (pcVar15 = pcVar15 + 1, pcVar15 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar2 = *(float **)(lVar4 + 0x19f0);
  fVar24 = *(float *)(lVar4 + 0x19f8);
  uStack_108 = uVar14;
  if (param_1 == pcVar15) {
    fStack_e8 = 0.0;
    fStack_114 = fVar24;
  }
  else {
    uVar14 = CONCAT44(uVar9,0xbf800000);
    pcVar18 = param_1;
    FUN_180297340(pfVar2,&fStack_118,fVar24,uStack_e0,uVar14,param_1,pcVar15,0);
    uVar30 = (int32_t)((ulonglong)pcVar18 >> 0x20);
    uVar9 = (int32_t)((ulonglong)uVar14 >> 0x20);
    if (0.0 < fStack_118) {
      fStack_118 = fStack_118 - fVar24 / *pfVar2;
    }
    fVar24 = *(float *)(lVar4 + 0x19f8);
    cVar6 = (char)uStack_100;
    fStack_e8 = (float)(int)(fStack_118 + 0.95);
  }
  uVar19 = (ulonglong)uVar10;
  lVar20 = *(longlong *)(lVar4 + 0x1af8);
  fVar28 = *(float *)(uStack_e0 + 0x128);
  if (*(float *)(uStack_e0 + 0x128) <= fVar25) {
    fVar28 = fVar25;
  }
  lVar11 = *(longlong *)(lVar20 + 0x210);
  fVar23 = *(float *)(lVar4 + 0x1660) + *(float *)(lVar4 + 0x1660) + fVar24;
  fVar27 = *(float *)(lVar20 + 0x278) - *(float *)(lVar20 + 0x40);
  fVar25 = fVar25 + fVar25 + fStack_114;
  if (*(float *)(uStack_e0 + 0x124) <= fVar23) {
    fVar23 = *(float *)(uStack_e0 + 0x124);
  }
  if (fVar23 <= fVar25) {
    fVar23 = fVar25;
  }
  fVar25 = fVar23 + *(float *)(uStack_e0 + 0x104);
  if (lVar11 != 0) {
    iVar8 = *(int *)(lVar11 + 0xc) + 1;
    iVar12 = *(int *)(lVar11 + 0xc);
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    fVar27 = ((*(float *)(lVar11 + 0x18) - *(float *)(lVar11 + 0x14)) *
              *(float *)((longlong)iVar12 * 0x1c + *(longlong *)(lVar11 + 0x38)) +
             *(float *)(lVar11 + 0x14)) - *(float *)(lVar20 + 0x70);
  }
  fVar26 = *(float *)(uStack_e0 + 0x100);
  fVar1 = *(float *)(uStack_e0 + 0x104);
  fVar27 = fVar27 + *(float *)(uStack_e0 + 0x40);
  fVar21 = fVar5 + fVar5;
  if (cVar6 != '\0') {
    fVar21 = (float)(int)(*(float *)(uStack_e0 + 0x70) * 0.5) - 1.0;
    fVar26 = fVar26 - fVar21;
    fVar27 = fVar21 + fVar27;
    fVar21 = fVar5 * 3.0;
  }
  if (fStack_e8 <= 0.0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = fVar5 + fVar5 + fStack_e8;
  }
  fVar22 = fVar24 + fVar22;
  fStack_118 = fVar22;
  fStack_e4 = fStack_114;
  fStack_114 = fVar23;
  fStack_d8 = fVar26;
  fStack_d4 = fVar1;
  fStack_d0 = fVar27;
  fStack_cc = fVar25;
  func_0x000180124080(&fStack_118);
  fStack_f0 = fVar27;
  if (cVar6 == '\0') {
    fStack_f0 = *(float *)(lVar4 + 0x166c) + *(float *)(lVar4 + 0x166c) + fVar26 + fVar22;
  }
  uStack_108 = *(longlong *)(lVar4 + 0x1af8);
  uVar14 = *(uint64_t *)(uStack_108 + 0x198);
  lVar20 = lVar4;
  fStack_f8 = fVar26;
  fStack_f4 = fVar1;
  fStack_ec = fVar25;
  if (*(uint *)(lVar4 + 0x1c64) == 0) {
    iVar8 = FUN_180121f20(uVar14,uVar19 & 0xffffffff,0);
    uVar17 = (ulonglong)(iVar8 != 0);
  }
  else if ((*(uint *)(lVar4 + 0x1c64) & 1) == 0) {
    iVar12 = -1;
    iVar8 = FUN_180121f20(uVar14,uVar19 & 0xffffffff);
    if (iVar8 == iVar12) {
      uVar17 = (ulonglong)*(byte *)(lVar4 + 0x1c60);
      FUN_1801220b0(uVar14,uVar10,*(byte *)(lVar4 + 0x1c60));
      lVar20 = _DAT_180c8a9b0;
      *(int32_t *)(lVar4 + 0x1c64) = 0;
    }
    else {
      *(int32_t *)(lVar4 + 0x1c64) = 0;
      uVar17 = (ulonglong)(iVar8 != 0);
    }
  }
  else {
    uVar17 = (ulonglong)*(byte *)(lVar4 + 0x1c60);
    FUN_1801220b0(uVar14,uVar19 & 0xffffffff,*(byte *)(lVar4 + 0x1c60));
    lVar20 = _DAT_180c8a9b0;
    *(int32_t *)(lVar4 + 0x1c64) = 0;
  }
  uStack_fc = 0;
  cVar16 = (char)uVar17;
  cVar6 = FUN_180124190(&fStack_f8,uVar10,0);
  *(uint *)(uStack_e0 + 0x148) = *(uint *)(uStack_e0 + 0x148) | 2;
  *(float *)(uStack_e0 + 0x15c) = fStack_d8;
  *(float *)(uStack_e0 + 0x160) = fStack_d4;
  *(float *)(uStack_e0 + 0x164) = fStack_d0;
  *(float *)(uStack_e0 + 0x168) = fStack_cc;
  if (cVar6 == '\0') {
    return uVar17;
  }
  fStack_118 = 0.0;
  uVar14 = CONCAT44(uVar9,0x1400);
  cVar6 = FUN_18010f170(&fStack_f8,uVar10,&cStack_110,acStack_10f,uVar14);
  uVar29 = (uint)((ulonglong)uVar14 >> 0x20);
  if ((char)uStack_fc == '\0') {
    bVar3 = false;
    if (((cVar6 != '\0') && (bVar3 = true, *(char *)(lVar4 + 0x1dd0) != '\0')) && (cVar16 != '\0'))
    {
      bVar3 = false;
    }
    uVar13 = *(uint *)(lVar4 + 0x1ca0);
    if (((uVar13 == uVar10) && (*(char *)(lVar4 + 0x1d21) != '\0')) &&
       ((*(int *)(lVar4 + 0x1d2c) == 0 && (cVar16 != '\0')))) {
      *(int8_t *)(lVar20 + 0x1d21) = 0;
      bVar3 = true;
      if ((*(char *)(lVar20 + 0x1d21) == '\0') && (*(char *)(lVar20 + 0x1d09) == '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(int8_t *)(lVar20 + 0x1d08) = uVar7;
      uVar13 = *(uint *)(lVar4 + 0x1ca0);
    }
    if ((((uVar13 == uVar10) && (*(char *)(lVar4 + 0x1d21) != '\0')) &&
        (*(int *)(lVar4 + 0x1d2c) == 1)) && (cVar16 == '\0')) {
      *(int8_t *)(lVar20 + 0x1d21) = 0;
      if (*(char *)(lVar20 + 0x1d09) == '\0') {
        *(int8_t *)(lVar20 + 0x1d08) = 0;
      }
      else {
        *(int8_t *)(lVar20 + 0x1d08) = 1;
      }
    }
    else if (!bVar3) goto LAB_180119279;
    uVar17 = (ulonglong)(cVar16 == '\0');
    FUN_1801220b0(*(uint64_t *)(uStack_e0 + 0x198),uVar10,cVar16 == '\0');
    lVar20 = _DAT_180c8a9b0;
  }
LAB_180119279:
  if (fStack_118 != 0.0) {
    func_0x0001801283b0();
  }
  if ((acStack_10f[0] == '\0') || (cStack_110 == '\0')) {
    lVar11 = (ulonglong)(cStack_110 != '\0') + 0x18;
  }
  else {
    lVar11 = 0x1a;
  }
  pfVar2 = (float *)(lVar20 + 0x1628 + (lVar11 + 10) * 0x10);
  fStack_f8 = *pfVar2;
  fStack_f4 = pfVar2[1];
  fStack_f0 = pfVar2[2];
  fStack_ec = pfVar2[3] * *(float *)(lVar20 + 0x1628);
  uVar9 = func_0x000180121e20(&fStack_f8);
  fStack_118 = fVar24 + fVar21 + fVar26;
  fVar24 = fVar1 + fVar28;
  fStack_114 = fVar24;
  if ((char)uStack_100 == '\0') {
    if (cStack_110 != '\0') {
      uStack_108 = CONCAT44(fVar25,fVar27);
      uStack_e0 = CONCAT44(fVar1,fVar26);
      FUN_180293f50(*(uint64_t *)(*(longlong *)(lVar20 + 0x1af8) + 0x2e8),&uStack_e0,&uStack_108,
                    uVar9,(ulonglong)uVar29 << 0x20,CONCAT44(uVar30,0xf));
      if (uVar10 == *(uint *)(_DAT_180c8a9b0 + 0x1ca0)) {
        FUN_1801230e0(&fStack_d8,2);
      }
    }
    if ((char)uStack_fc == '\0') {
      uVar14 = 1;
      if ((char)uVar17 != '\0') {
        uVar14 = 3;
      }
      FUN_180122c80(CONCAT44(*(float *)(lVar4 + 0x19f8) * 0.15 + fVar28 + fVar1,fVar5 + fVar26),
                    uVar14,0x3f333333);
    }
    if (*(char *)(lVar4 + 0x2e38) != '\0') {
      FUN_18013c800(&fStack_118,&UNK_180a063cc,0);
    }
    FUN_180122320(CONCAT44(fStack_114,fStack_118),param_1,pcVar15,0);
  }
  else {
    FUN_180122960(CONCAT44(fStack_d4,fStack_d8),CONCAT44(fStack_cc,fStack_d0),uVar9,1,
                  CONCAT44(uVar29,*(int32_t *)(lVar4 + 0x1664)));
    if (uVar10 == *(uint *)(_DAT_180c8a9b0 + 0x1ca0)) {
      FUN_1801230e0(&fStack_d8,2);
    }
    uVar14 = 1;
    if ((char)uVar17 != '\0') {
      uVar14 = 3;
    }
    FUN_180122c80(CONCAT44(fVar24,fVar5 + fVar26),uVar14,0x3f800000);
    lVar20 = _DAT_180c8a9b0;
    if (*(char *)(lVar4 + 0x2e38) == '\0') {
      uStack_108 = 0;
      if (pcVar15 == (char *)0x0) {
        pcVar15 = (char *)0xffffffffffffffff;
      }
      pcVar18 = param_1;
      if (param_1 < pcVar15) {
        do {
          if ((*pcVar18 == '\0') || ((*pcVar18 == '#' && (pcVar18[1] == '#')))) break;
          pcVar18 = pcVar18 + 1;
        } while (pcVar18 < pcVar15);
      }
      if (((int)pcVar18 != (int)param_1) &&
         (FUN_1801224c0(*(uint64_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8),&fStack_118,
                        &fStack_d0,param_1,pcVar18,&fStack_e8,&uStack_108,0),
         *(char *)(lVar20 + 0x2e38) != '\0')) {
        FUN_18013c800(&fStack_118,param_1,pcVar18);
      }
    }
    else {
      uStack_100 = CONCAT13(uStack_100._3_1_,0x2323);
      uStack_fc = 0x23230a;
      FUN_18013c800(&fStack_118,&uStack_fc,(longlong)&uStack_fc + 3);
      lVar4 = _DAT_180c8a9b0;
      uStack_108 = 0;
      if (pcVar15 == (char *)0x0) {
        pcVar15 = (char *)0xffffffffffffffff;
      }
      pcVar18 = param_1;
      if (param_1 < pcVar15) {
        while (*pcVar18 != '\0') {
          if (((*pcVar18 == '#') && (pcVar18[1] == '#')) ||
             (pcVar18 = pcVar18 + 1, pcVar15 <= pcVar18)) break;
        }
      }
      if (((int)pcVar18 != (int)param_1) &&
         (FUN_1801224c0(*(uint64_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8),&fStack_118,
                        &fStack_d0,param_1,pcVar18,&fStack_e8,&uStack_108,0),
         *(char *)(lVar4 + 0x2e38) != '\0')) {
        FUN_18013c800(&fStack_118,param_1,pcVar18);
      }
      FUN_18013c800(&fStack_118,(longlong)&uStack_100 + 1,(longlong)&uStack_100 + 3);
    }
  }
  return uVar17;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180119960(char *param_1,char param_2,uint param_3,float *param_4)

{
  uint *puVar1;
  int32_t *puVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int32_t uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint64_t in_stack_fffffffffffffee8;
  uint64_t in_stack_fffffffffffffef0;
  int32_t uVar26;
  char cStack_f8;
  char acStack_f7 [7];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint64_t uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  float fStack_a4;
  
  lVar17 = _DAT_180c8a9b0;
  uVar26 = (int32_t)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  uVar8 = (int32_t)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  uVar9 = *(ulonglong *)(_DAT_180c8a9b0 + 0x1af8);
  *(int8_t *)(uVar9 + 0xb1) = 1;
  lVar16 = *(longlong *)(lVar17 + 0x1af8);
  if (*(char *)(lVar16 + 0xb4) != '\0') {
LAB_180119d01:
    return uVar9 & 0xffffffffffffff00;
  }
  lVar19 = lVar17;
  if (((param_3 & 2) != 0) && (*(longlong *)(lVar16 + 0x210) != 0)) {
    FUN_180126d80();
    lVar19 = _DAT_180c8a9b0;
  }
  iVar7 = FUN_180121250(param_1,0,
                        *(int32_t *)
                         (*(longlong *)(lVar16 + 0x220) + -4 +
                         (longlong)*(int *)(lVar16 + 0x218) * 4));
  if (*(int *)(lVar19 + 0x1b2c) == iVar7) {
    *(int *)(lVar19 + 0x1b34) = iVar7;
  }
  if (*(int *)(lVar19 + 0x1b30) == iVar7) {
    *(int8_t *)(lVar19 + 0x1b3f) = 1;
  }
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      if (((*pcVar15 == '#') && (pcVar15[1] == '#')) ||
         (pcVar15 = pcVar15 + 1, pcVar15 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar11 = *(float **)(lVar19 + 0x19f0);
  fVar21 = *(float *)(lVar19 + 0x19f8);
  if (param_1 == pcVar15) {
    fVar23 = 0.0;
    fStack_ec = fVar21;
  }
  else {
    pcVar15 = param_1;
    FUN_180297340(pfVar11,&fStack_f0);
    uVar26 = (int32_t)((ulonglong)pcVar15 >> 0x20);
    if (0.0 < fStack_f0) {
      fStack_f0 = fStack_f0 - fVar21 / *pfVar11;
    }
    fVar23 = (float)(int)(fStack_f0 + 0.95);
  }
  fVar21 = param_4[1];
  if (param_4[1] == 0.0) {
    fVar21 = fStack_ec;
  }
  fStack_b8 = *param_4;
  if (*param_4 == 0.0) {
    fStack_b8 = fVar23;
  }
  fVar3 = *(float *)(lVar16 + 0x100);
  fVar25 = *(float *)(lVar16 + 0x104) + *(float *)(lVar16 + 0x128);
  fStack_b8 = fVar3 + fStack_b8;
  fStack_b4 = fVar25 + fVar21;
  fStack_f0 = fStack_b8 - fVar3;
  fStack_cc = fStack_ec;
  fStack_ec = fStack_b4 - fVar25;
  fStack_d0 = fVar23;
  fStack_c0 = fVar3;
  fStack_bc = fVar25;
  func_0x000180124080(&fStack_f0,0);
  if ((param_3 & 2) == 0) {
    lVar10 = *(longlong *)(lVar19 + 0x1af8);
    lVar20 = *(longlong *)(lVar10 + 0x210);
    fVar24 = *(float *)(lVar10 + 0x278) - *(float *)(lVar10 + 0x40);
    if (lVar20 != 0) {
      iVar4 = *(int *)(lVar20 + 0xc) + 1;
      iVar13 = *(int *)(lVar20 + 0xc);
      if (-1 < iVar4) {
        iVar13 = iVar4;
      }
      fVar24 = ((*(float *)(lVar20 + 0x18) - *(float *)(lVar20 + 0x14)) *
                *(float *)((longlong)iVar13 * 0x1c + *(longlong *)(lVar20 + 0x38)) +
               *(float *)(lVar20 + 0x14)) - *(float *)(lVar10 + 0x70);
    }
  }
  else {
    fVar24 = *(float *)(*(longlong *)(lVar19 + 0x1af8) + 0x278) -
             *(float *)(*(longlong *)(lVar19 + 0x1af8) + 0x40);
  }
  fStack_e0 = ((fVar24 + *(float *)(lVar16 + 0x40)) - *(float *)(lVar16 + 0x70)) -
              *(float *)(lVar16 + 0x100);
  if (fStack_e0 <= fVar23) {
    fStack_e0 = fVar23;
  }
  fVar23 = param_4[1];
  if (param_4[1] == 0.0) {
    fVar23 = fVar21;
  }
  fVar21 = *param_4;
  if ((fVar21 != 0.0) && ((param_3 & 0x2000) == 0)) {
    fStack_e0 = fVar21;
  }
  fStack_e0 = fVar3 + fStack_e0;
  if ((fVar21 == 0.0) || ((param_3 & 0x2000) != 0)) {
    fStack_e0 = *(float *)(lVar16 + 0x70) + fStack_e0;
  }
  fVar22 = (float)(int)(*(float *)(lVar17 + 0x166c) * 0.5);
  fStack_e8 = fVar3 - fVar22;
  fVar21 = (float)(int)(*(float *)(lVar17 + 0x1670) * 0.5);
  fStack_e0 = fStack_e0 + (*(float *)(lVar17 + 0x166c) - fVar22);
  fStack_e4 = fVar25 - fVar21;
  fStack_dc = (*(float *)(lVar17 + 0x1670) - fVar21) + fVar25 + fVar23;
  uVar9 = FUN_180124190(&fStack_e8,iVar7,0);
  if ((char)uVar9 == '\0') {
    if (((param_3 & 2) != 0) && (*(longlong *)(lVar16 + 0x210) != 0)) {
      uVar9 = FUN_180134400();
    }
    goto LAB_180119d01;
  }
  uVar14 = (param_3 & 0x400) * 2;
  uVar5 = uVar14 | 4;
  if ((param_3 & 0x800) == 0) {
    uVar5 = uVar14;
  }
  uVar14 = uVar5 | 8;
  if ((param_3 & 0x1000) == 0) {
    uVar14 = uVar5;
  }
  fStack_f0 = (float)(param_3 & 8);
  uVar5 = uVar14 | 0x100;
  if ((param_3 & 8) == 0) {
    uVar5 = uVar14;
  }
  uVar14 = uVar5 | 0x12;
  if ((param_3 & 4) == 0) {
    uVar14 = uVar5;
  }
  uVar9 = CONCAT44(uVar8,uVar14);
  bVar6 = FUN_18010f170(&fStack_e8,iVar7,&cStack_f8,acStack_f7,uVar9);
  fVar21 = fStack_e0;
  cVar18 = '\0';
  if (fStack_f0 == 0.0) {
    cVar18 = param_2;
  }
  if ((bVar6 == 0) && (cStack_f8 == '\0')) {
LAB_180119e1f:
    if (cVar18 == '\0') goto LAB_180119eed;
  }
  else {
    if ((*(char *)(lVar17 + 0x1d07) == '\0') &&
       ((*(longlong *)(lVar17 + 0x1c98) == lVar16 &&
        (*(int *)(lVar17 + 0x1cfc) == *(int *)(lVar16 + 0x16c))))) {
      *(int8_t *)(lVar17 + 0x1d06) = 1;
      iVar4 = *(int *)(lVar16 + 0x16c);
      *(int *)(lVar19 + 0x1ca0) = iVar7;
      *(int *)(*(longlong *)(lVar19 + 0x1c98) + 0x3c8 + (longlong)iVar4 * 4) = iVar7;
    }
    if (bVar6 != 0) {
      *(int8_t *)(lVar19 + 0x1b3e) = 1;
      puVar1 = (uint *)(*(longlong *)(lVar19 + 0x1af8) + 0x148);
      *puVar1 = *puVar1 | 4;
    }
    if (cStack_f8 == '\0') goto LAB_180119e1f;
  }
  if ((acStack_f7[0] == '\0') || (cStack_f8 == '\0')) {
    lVar10 = (ulonglong)(cStack_f8 != '\0') + 0x18;
  }
  else {
    lVar10 = 0x1a;
  }
  lVar20 = *(longlong *)(lVar19 + 0x1af8);
  fStack_c8 = fStack_e0;
  puVar2 = (int32_t *)(lVar19 + 0x1628 + (lVar10 + 10) * 0x10);
  uStack_b0 = *puVar2;
  uStack_ac = puVar2[1];
  uStack_a8 = puVar2[2];
  fStack_a4 = (float)puVar2[3] * *(float *)(lVar19 + 0x1628);
  fStack_c4 = fStack_dc;
  uStack_d8 = CONCAT44(fStack_e4,fStack_e8);
  uVar8 = func_0x000180121e20(&uStack_b0);
  FUN_180293f50(*(uint64_t *)(lVar20 + 0x2e8),&uStack_d8,&fStack_c8,uVar8,
                uVar9 & 0xffffffff00000000,CONCAT44(uVar26,0xf));
  lVar19 = _DAT_180c8a9b0;
  if (iVar7 == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
    FUN_1801230e0(&fStack_e8,10,_DAT_180c8a9b0);
    lVar19 = _DAT_180c8a9b0;
  }
LAB_180119eed:
  if (((param_3 & 2) != 0) && (*(longlong *)(lVar16 + 0x210) != 0)) {
    FUN_180134400();
    pfVar11 = (float *)func_0x00018012df00(&fStack_c8);
    fStack_e0 = fVar21 - (*pfVar11 - fVar24);
    lVar19 = _DAT_180c8a9b0;
  }
  fVar21 = fStack_f0;
  if (fStack_f0 != 0.0) {
    FUN_18012d910(0,lVar17 + 0x16d8);
    lVar19 = _DAT_180c8a9b0;
  }
  uStack_d8 = 0;
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      if (((*pcVar15 == '#') && (pcVar15[1] == '#')) ||
         (pcVar15 = pcVar15 + 1, pcVar15 == (char *)0xffffffffffffffff)) break;
    }
  }
  lVar17 = lVar19;
  if (((int)pcVar15 != (int)param_1) &&
     (FUN_1801224c0(*(uint64_t *)(*(longlong *)(lVar19 + 0x1af8) + 0x2e8),&fStack_c0,&fStack_e0,
                    param_1,pcVar15,&fStack_d0,&uStack_d8,0), lVar17 = _DAT_180c8a9b0,
     *(char *)(lVar19 + 0x2e38) != '\0')) {
    FUN_18013c800(&fStack_c0,param_1,pcVar15);
    lVar17 = _DAT_180c8a9b0;
  }
  if (fVar21 != 0.0) {
    func_0x00018012d970(1);
  }
  if (((bVar6 != 0) && ((*(uint *)(lVar16 + 0xc) & 0x4000000) != 0)) &&
     (((param_3 & 1) == 0 &&
      ((((*(byte *)(lVar16 + 0x1a8) & 0x20) == 0 &&
        (iVar7 = *(int *)(lVar17 + 0x1bc0) + -1, -1 < iVar7)) && (iVar7 < *(int *)(lVar17 + 0x1bb0))
       ))))) {
    lVar16 = (longlong)iVar7;
    lVar19 = lVar16 * 0x30;
    if (*(int *)(lVar19 + *(longlong *)(lVar17 + 0x1bc8)) ==
        *(int *)(*(longlong *)(lVar17 + 0x1bb8) + lVar19)) {
      if (0 < iVar7) {
        plVar12 = (longlong *)(lVar19 + 8 + *(longlong *)(lVar17 + 0x1bb8));
        do {
          if ((*plVar12 == 0) || ((*(uint *)(*plVar12 + 0xc) & 0x10000000) == 0)) break;
          iVar7 = iVar7 + -1;
          lVar16 = lVar16 + -1;
          plVar12 = plVar12 + -6;
        } while (0 < lVar16);
      }
      FUN_18012ee20(iVar7,CONCAT71((int7)((ulonglong)lVar16 >> 8),1));
      if (*(longlong *)(lVar17 + 0x1c98) != 0) {
        *(int8_t *)(*(longlong *)(lVar17 + 0x1c98) + 0x17c) = 1;
      }
    }
  }
  return (ulonglong)bVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1801199c7(int32_t param_1,uint64_t param_2,ulonglong param_3)

{
  uint *puVar1;
  int32_t *puVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int32_t uVar7;
  byte bVar8;
  int iVar9;
  int32_t uVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  longlong lVar18;
  longlong unaff_RBX;
  char *pcVar19;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char cVar20;
  longlong lVar21;
  longlong in_R11;
  char *unaff_R14;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int32_t unaff_XMM9_Da;
  float fVar26;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  uint64_t in_stack_00000020;
  char cStack0000000000000040;
  char cStack0000000000000041;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  uVar10 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  if (((param_3 & 2) != 0) && (*(longlong *)(unaff_RSI + 0x210) != 0)) {
    param_1 = FUN_180126d80();
    unaff_RDI = _DAT_180c8a9b0;
  }
  iVar9 = FUN_180121250(param_1,0,
                        *(int32_t *)
                         (*(longlong *)(unaff_RSI + 0x220) + -4 +
                         (longlong)*(int *)(unaff_RSI + 0x218) * 4));
  if (*(int *)(unaff_RDI + 0x1b2c) == iVar9) {
    *(int *)(unaff_RDI + 0x1b34) = iVar9;
  }
  if (*(int *)(unaff_RDI + 0x1b30) == iVar9) {
    *(int8_t *)(unaff_RDI + 0x1b3f) = 1;
  }
  pcVar17 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    while (*pcVar17 != '\0') {
      if (((*pcVar17 == '#') && (pcVar17[1] == '#')) ||
         (pcVar17 = pcVar17 + 1, pcVar17 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar13 = *(float **)(unaff_RDI + 0x19f0);
  fVar22 = *(float *)(unaff_RDI + 0x19f8);
  if (unaff_R14 == pcVar17) {
    fVar24 = 0.0;
    fStack000000000000004c = fVar22;
  }
  else {
    FUN_180297340(pfVar13,&stack0x00000048);
    if (0.0 < fStack0000000000000048) {
      fStack0000000000000048 = fStack0000000000000048 - fVar22 / *pfVar13;
    }
    fVar24 = (float)(int)(fStack0000000000000048 + 0.95);
  }
  pfVar13 = *(float **)(unaff_RBP + 0x7f);
  *(float *)(unaff_RBP + -0x6d) = fStack000000000000004c;
  *(float *)(unaff_RBP + -0x71) = fVar24;
  fVar22 = pfVar13[1];
  if (pfVar13[1] == 0.0) {
    fVar22 = fStack000000000000004c;
  }
  fVar25 = *pfVar13;
  if (*pfVar13 == 0.0) {
    fVar25 = fVar24;
  }
  fVar3 = *(float *)(unaff_RSI + 0x100);
  fVar26 = *(float *)(unaff_RSI + 0x104) + *(float *)(unaff_RSI + 0x128);
  *(float *)(unaff_RBP + -0x61) = fVar3;
  *(float *)(unaff_RBP + -0x5d) = fVar26;
  *(float *)(unaff_RBP + -0x59) = fVar3 + fVar25;
  fStack0000000000000048 = (fVar3 + fVar25) - fVar3;
  *(float *)(unaff_RBP + -0x55) = fVar26 + fVar22;
  fStack000000000000004c = (fVar26 + fVar22) - fVar26;
  func_0x000180124080(&stack0x00000048,0);
  if ((param_3 & 2) == 0) {
    lVar12 = *(longlong *)(unaff_RDI + 0x1af8);
    lVar18 = *(longlong *)(lVar12 + 0x210);
    fVar25 = *(float *)(lVar12 + 0x278) - *(float *)(lVar12 + 0x40);
    if (lVar18 != 0) {
      iVar5 = *(int *)(lVar18 + 0xc) + 1;
      iVar15 = *(int *)(lVar18 + 0xc);
      if (-1 < iVar5) {
        iVar15 = iVar5;
      }
      fVar25 = ((*(float *)(lVar18 + 0x18) - *(float *)(lVar18 + 0x14)) *
                *(float *)((longlong)iVar15 * 0x1c + *(longlong *)(lVar18 + 0x38)) +
               *(float *)(lVar18 + 0x14)) - *(float *)(lVar12 + 0x70);
    }
  }
  else {
    fVar25 = *(float *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x278) -
             *(float *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x40);
  }
  in_stack_00000058 =
       ((fVar25 + *(float *)(unaff_RSI + 0x40)) - *(float *)(unaff_RSI + 0x70)) -
       *(float *)(unaff_RSI + 0x100);
  if (in_stack_00000058 <= fVar24) {
    in_stack_00000058 = fVar24;
  }
  fVar24 = pfVar13[1];
  if (pfVar13[1] == 0.0) {
    fVar24 = fVar22;
  }
  uVar4 = *(uint *)(unaff_RBP + 0x77);
  fVar22 = *pfVar13;
  if ((fVar22 != 0.0) && ((uVar4 & 0x2000) == 0)) {
    in_stack_00000058 = fVar22;
  }
  in_stack_00000058 = fVar3 + in_stack_00000058;
  if ((fVar22 == 0.0) || ((uVar4 & 0x2000) != 0)) {
    in_stack_00000058 = *(float *)(unaff_RSI + 0x70) + in_stack_00000058;
  }
  fVar23 = (float)(int)(*(float *)(unaff_RBX + 0x166c) * 0.5);
  in_stack_00000050 = fVar3 - fVar23;
  fVar22 = (float)(int)(*(float *)(unaff_RBX + 0x1670) * 0.5);
  in_stack_00000058 = in_stack_00000058 + (*(float *)(unaff_RBX + 0x166c) - fVar23);
  fStack0000000000000054 = fVar26 - fVar22;
  *(float *)(unaff_RBP + -0x7d) = (*(float *)(unaff_RBX + 0x1670) - fVar22) + fVar26 + fVar24;
  uVar11 = FUN_180124190(&stack0x00000050,iVar9,0);
  if ((char)uVar11 == '\0') {
    if (((param_3 & 2) != 0) && (*(longlong *)(unaff_RSI + 0x210) != 0)) {
      uVar11 = FUN_180134400();
    }
    return uVar11 & 0xffffffffffffff00;
  }
  uVar16 = (uVar4 & 0x400) * 2;
  uVar6 = uVar16 | 4;
  if ((uVar4 & 0x800) == 0) {
    uVar6 = uVar16;
  }
  uVar16 = uVar6 | 8;
  if ((uVar4 & 0x1000) == 0) {
    uVar16 = uVar6;
  }
  fStack0000000000000048 = (float)(uVar4 & 8);
  uVar6 = uVar16 | 0x100;
  if (fStack0000000000000048 == 0.0) {
    uVar6 = uVar16;
  }
  uVar16 = uVar6 | 0x12;
  if ((uVar4 & 4) == 0) {
    uVar16 = uVar6;
  }
  pcVar17 = (char *)CONCAT44(uVar10,uVar16);
  bVar8 = FUN_18010f170(&stack0x00000050,iVar9,&stack0x00000040,(longlong)&stack0x00000040 + 1,
                        pcVar17);
  fVar22 = in_stack_00000058;
  cVar20 = '\0';
  if (fStack0000000000000048 == 0.0) {
    cVar20 = *(char *)(unaff_RBP + 0x6f);
  }
  if ((bVar8 == 0) && (cStack0000000000000040 == '\0')) {
LAB_180119e1f:
    if (cVar20 == '\0') goto LAB_180119eed;
  }
  else {
    if ((*(char *)(unaff_RBX + 0x1d07) == '\0') &&
       ((*(longlong *)(unaff_RBX + 0x1c98) == unaff_RSI &&
        (*(int *)(unaff_RBX + 0x1cfc) == *(int *)(unaff_RSI + 0x16c))))) {
      *(int8_t *)(unaff_RBX + 0x1d06) = 1;
      iVar5 = *(int *)(unaff_RSI + 0x16c);
      *(int *)(unaff_RDI + 0x1ca0) = iVar9;
      *(int *)(*(longlong *)(unaff_RDI + 0x1c98) + 0x3c8 + (longlong)iVar5 * 4) = iVar9;
    }
    if (bVar8 != 0) {
      *(int8_t *)(unaff_RDI + 0x1b3e) = 1;
      puVar1 = (uint *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x148);
      *puVar1 = *puVar1 | 4;
    }
    if (cStack0000000000000040 == '\0') goto LAB_180119e1f;
  }
  if ((cStack0000000000000041 == '\0') || (cStack0000000000000040 == '\0')) {
    lVar12 = (ulonglong)(cStack0000000000000040 != '\0') + 0x18;
  }
  else {
    lVar12 = 0x1a;
  }
  lVar18 = *(longlong *)(unaff_RDI + 0x1af8);
  *(float *)(unaff_RBP + -0x69) = in_stack_00000058;
  *(float *)(unaff_RBP + -0x79) = in_stack_00000050;
  puVar2 = (int32_t *)(unaff_RDI + 0x1628 + (lVar12 + 10) * 0x10);
  uVar10 = puVar2[1];
  uVar7 = puVar2[2];
  fVar24 = (float)puVar2[3];
  *(int32_t *)(unaff_RBP + -0x51) = *puVar2;
  *(int32_t *)(unaff_RBP + -0x4d) = uVar10;
  *(int32_t *)(unaff_RBP + -0x49) = uVar7;
  *(float *)(unaff_RBP + -0x45) = fVar24;
  *(float *)(unaff_RBP + -0x45) = fVar24 * *(float *)(unaff_RDI + 0x1628);
  *(int32_t *)(unaff_RBP + -0x65) = *(int32_t *)(unaff_RBP + -0x7d);
  *(float *)(unaff_RBP + -0x75) = fStack0000000000000054;
  uVar10 = func_0x000180121e20(unaff_RBP + -0x51);
  pcVar17 = (char *)((ulonglong)pcVar17 & 0xffffffff00000000);
  FUN_180293f50(*(uint64_t *)(lVar18 + 0x2e8),unaff_RBP + -0x79,unaff_RBP + -0x69,uVar10,pcVar17);
  unaff_RDI = _DAT_180c8a9b0;
  if (iVar9 == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
    FUN_1801230e0(&stack0x00000050,10,_DAT_180c8a9b0);
    unaff_RDI = _DAT_180c8a9b0;
  }
LAB_180119eed:
  if (((param_3 & 2) != 0) && (*(longlong *)(unaff_RSI + 0x210) != 0)) {
    FUN_180134400();
    pfVar13 = (float *)func_0x00018012df00(unaff_RBP + -0x69);
    in_stack_00000058 = fVar22 - (*pfVar13 - fVar25);
    unaff_RDI = _DAT_180c8a9b0;
  }
  uVar4 = (uint)fStack0000000000000048;
  if (fStack0000000000000048 != 0.0) {
    FUN_18012d910(0,unaff_RBX + 0x16d8);
    unaff_RDI = _DAT_180c8a9b0;
  }
  *(uint64_t *)(unaff_RBP + -0x79) = 0;
  pcVar19 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    while (*pcVar19 != '\0') {
      if (((*pcVar19 == '#') && (pcVar19[1] == '#')) ||
         (pcVar19 = pcVar19 + 1, pcVar19 == (char *)0xffffffffffffffff)) break;
    }
  }
  lVar12 = unaff_RDI;
  if (((int)pcVar19 != (int)unaff_R14) &&
     (FUN_1801224c0(*(uint64_t *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x2e8),unaff_RBP + -0x61,
                    &stack0x00000058), lVar12 = _DAT_180c8a9b0, pcVar17 = pcVar19,
     *(char *)(unaff_RDI + 0x2e38) != '\0')) {
    FUN_18013c800(unaff_RBP + -0x61);
    lVar12 = _DAT_180c8a9b0;
    pcVar17 = pcVar19;
  }
  if (uVar4 != 0) {
    func_0x00018012d970(1);
  }
  if (((bVar8 != 0) && ((*(uint *)(unaff_RSI + 0xc) & 0x4000000) != 0)) &&
     (((*(uint *)(unaff_RBP + 0x77) & 1) == 0 &&
      ((((*(byte *)(unaff_RSI + 0x1a8) & 0x20) == 0 &&
        (iVar9 = *(int *)(lVar12 + 0x1bc0) + -1, -1 < iVar9)) && (iVar9 < *(int *)(lVar12 + 0x1bb0))
       ))))) {
    lVar18 = (longlong)iVar9;
    lVar21 = lVar18 * 0x30;
    if (*(int *)(lVar21 + *(longlong *)(lVar12 + 0x1bc8)) ==
        *(int *)(*(longlong *)(lVar12 + 0x1bb8) + lVar21)) {
      if (0 < iVar9) {
        plVar14 = (longlong *)(lVar21 + 8 + *(longlong *)(lVar12 + 0x1bb8));
        do {
          if ((*plVar14 == 0) || ((*(uint *)(*plVar14 + 0xc) & 0x10000000) == 0)) break;
          iVar9 = iVar9 + -1;
          lVar18 = lVar18 + -1;
          plVar14 = plVar14 + -6;
        } while (0 < lVar18);
      }
      FUN_18012ee20(iVar9,CONCAT71((int7)((ulonglong)lVar18 >> 8),1),iVar9,lVar21,pcVar17);
      if (*(longlong *)(lVar12 + 0x1c98) != 0) {
        *(int8_t *)(*(longlong *)(lVar12 + 0x1c98) + 0x17c) = 1;
      }
    }
  }
  return (ulonglong)bVar8;
}



int8_t FUN_180119ced(void)

{
  longlong unaff_RSI;
  int unaff_R13D;
  
  if ((unaff_R13D != 0) && (*(longlong *)(unaff_RSI + 0x210) != 0)) {
    FUN_180134400();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





