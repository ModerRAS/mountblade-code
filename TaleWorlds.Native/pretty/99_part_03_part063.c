#include "TaleWorlds.Native.Split.h"

// 99_part_03_part063.c - 1 个函数

// 函数: void FUN_180235f71(void)
void FUN_180235f71(void)

{
  double *pdVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  char cVar14;
  int8_t (*pauVar15) [16];
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int32_t uVar23;
  int32_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  bool bVar29;
  bool bVar30;
  int8_t auVar31 [12];
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  double *pdVar36;
  float *pfVar37;
  uint uVar38;
  longlong lVar39;
  void *puVar40;
  uint uVar41;
  ulonglong uVar42;
  longlong lVar43;
  int *piVar44;
  double *unaff_RBP;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  float *in_R11;
  int unaff_R12D;
  ulonglong unaff_R14;
  int8_t (*unaff_R15) [16];
  ulonglong uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int8_t auVar53 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  double dVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  double dVar70;
  int8_t auVar71 [16];
  double dVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  byte bStackX_20;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint in_stack_00000048;
  int iStack0000000000000050;
  float fStack0000000000000054;
  longlong in_stack_00000058;
  int in_stack_00000060;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  
  if (*(char *)(unaff_RBP + 0x4e) == (char)unaff_R14) {
    uVar42 = unaff_R14 & 0xffffffff;
    fVar59 = in_R11[1];
    auVar71 = *unaff_R15;
    fVar56 = auVar71._0_4_;
    fVar60 = auVar71._4_4_;
    fVar61 = auVar71._8_4_;
    fVar62 = auVar71._12_4_;
    auVar71 = unaff_R15[1];
    fVar57 = auVar71._0_4_;
    fVar54 = auVar71._4_4_;
    fVar52 = auVar71._8_4_;
    fVar55 = auVar71._12_4_;
    auVar71 = unaff_R15[2];
    fVar63 = auVar71._0_4_;
    fVar66 = auVar71._4_4_;
    fVar67 = auVar71._8_4_;
    fVar68 = auVar71._12_4_;
    fVar58 = *in_R11;
    fVar51 = in_R11[2];
    fVar50 = in_R11[5];
    fVar64 = in_R11[9];
    fVar69 = in_R11[0xd];
    fVar78 = in_R11[4];
    auVar71._0_4_ = fVar59 * fVar57 + fVar58 * fVar56 + fVar51 * fVar63;
    auVar71._4_4_ = fVar59 * fVar54 + fVar58 * fVar60 + fVar51 * fVar66;
    auVar71._8_4_ = fVar59 * fVar52 + fVar58 * fVar61 + fVar51 * fVar67;
    auVar71._12_4_ = fVar59 * fVar55 + fVar58 * fVar62 + fVar51 * fVar68;
    fVar59 = in_R11[6];
    fVar58 = in_R11[8];
    fVar73 = fVar50 * fVar57 + fVar78 * fVar56 + fVar59 * fVar63;
    fVar74 = fVar50 * fVar54 + fVar78 * fVar60 + fVar59 * fVar66;
    fVar75 = fVar50 * fVar52 + fVar78 * fVar61 + fVar59 * fVar67;
    fVar76 = fVar50 * fVar55 + fVar78 * fVar62 + fVar59 * fVar68;
    fVar59 = in_R11[10];
    fVar51 = in_R11[0xc];
    *(int8_t (*) [16])(unaff_RBP + -0xc) = auVar71;
    fVar77 = fVar64 * fVar57 + fVar58 * fVar56 + fVar59 * fVar63;
    fVar79 = fVar64 * fVar54 + fVar58 * fVar60 + fVar59 * fVar66;
    fVar80 = fVar64 * fVar52 + fVar58 * fVar61 + fVar59 * fVar67;
    fVar81 = fVar64 * fVar55 + fVar58 * fVar62 + fVar59 * fVar68;
    fVar59 = in_R11[0xe];
    fVar58 = *(float *)unaff_R15[3];
    fVar50 = *(float *)(unaff_R15[3] + 4);
    fVar64 = *(float *)(unaff_R15[3] + 8);
    fVar78 = *(float *)(unaff_R15[3] + 0xc);
    *(float *)(unaff_RBP + -0xe) = fVar73;
    *(float *)((longlong)unaff_RBP + -0x6c) = fVar74;
    *(float *)(unaff_RBP + -0xd) = fVar75;
    *(float *)((longlong)unaff_RBP + -100) = fVar76;
    _fStack0000000000000038 = (double)CONCAT44(fVar79,fVar77);
    _fStack0000000000000040 = (double)CONCAT44(fVar81,fVar80);
    *(int8_t (*) [16])(unaff_RBP + -10) = auVar71;
    *(float *)(unaff_RBP + -8) = fVar73;
    *(float *)((longlong)unaff_RBP + -0x3c) = fVar74;
    *(float *)(unaff_RBP + -7) = fVar75;
    *(float *)((longlong)unaff_RBP + -0x34) = fVar76;
    *(float *)(unaff_RBP + -6) = fVar77;
    *(float *)((longlong)unaff_RBP + -0x2c) = fVar79;
    *(float *)(unaff_RBP + -5) = fVar80;
    *(float *)((longlong)unaff_RBP + -0x24) = fVar81;
    if ((uint)unaff_R14 < *(uint *)(unaff_RDI + 0x10)) {
      do {
        pfVar37 = (float *)(*(longlong *)(unaff_RDI + 0x18) + (longlong)(int)uVar42 * 0x10);
        fVar20 = *pfVar37;
        fVar21 = pfVar37[1];
        fVar22 = pfVar37[2];
        fStack0000000000000028 =
             fVar20 * auVar71._0_4_ + fVar21 * fVar73 + fVar22 * fVar77 +
             fVar69 * fVar57 + fVar51 * fVar56 + fVar59 * fVar63 + fVar58;
        fStack000000000000002c =
             fVar20 * auVar71._4_4_ + fVar21 * fVar74 + fVar22 * fVar79 +
             fVar69 * fVar54 + fVar51 * fVar60 + fVar59 * fVar66 + fVar50;
        fStack0000000000000030 =
             fVar20 * auVar71._8_4_ + fVar21 * fVar75 + fVar22 * fVar80 +
             fVar69 * fVar52 + fVar51 * fVar61 + fVar59 * fVar67 + fVar64;
        fStack0000000000000034 =
             fVar20 * auVar71._12_4_ + fVar21 * fVar76 + fVar22 * fVar81 +
             fVar69 * fVar55 + fVar51 * fVar62 + fVar59 * fVar68 + fVar78;
        FUN_180235000(fVar22 * fVar77,&stack0x00000028);
        auVar71 = *(int8_t (*) [16])(unaff_RBP + -0xc);
        uVar41 = (int)uVar42 + 1;
        uVar42 = (ulonglong)uVar41;
      } while (uVar41 < *(uint *)(unaff_RDI + 0x10));
    }
  }
  else {
    func_0x000180239f10(unaff_RBP + -10);
    func_0x000180239f10(unaff_RBP + 8,in_R11);
    pdVar36 = (double *)FUN_180239c40(unaff_RBP + -10,unaff_RBP + 0x18,unaff_RBP + 8);
    uVar42 = unaff_R14 & 0xffffffff;
    dVar4 = pdVar36[1];
    dVar5 = pdVar36[2];
    dVar6 = pdVar36[3];
    unaff_RBP[-10] = *pdVar36;
    unaff_RBP[-9] = dVar4;
    dVar4 = pdVar36[4];
    dVar7 = pdVar36[5];
    unaff_RBP[-8] = dVar5;
    unaff_RBP[-7] = dVar6;
    dVar5 = pdVar36[6];
    dVar6 = pdVar36[7];
    unaff_RBP[-6] = dVar4;
    unaff_RBP[-5] = dVar7;
    dVar4 = pdVar36[8];
    dVar7 = pdVar36[9];
    unaff_RBP[-4] = dVar5;
    unaff_RBP[-3] = dVar6;
    dVar5 = pdVar36[10];
    dVar6 = pdVar36[0xb];
    unaff_RBP[-2] = dVar4;
    unaff_RBP[-1] = dVar7;
    uVar16 = *(int32_t *)(pdVar36 + 0xc);
    uVar17 = *(int32_t *)((longlong)pdVar36 + 100);
    uVar18 = *(int32_t *)(pdVar36 + 0xd);
    uVar19 = *(int32_t *)((longlong)pdVar36 + 0x6c);
    *unaff_RBP = dVar5;
    unaff_RBP[1] = dVar6;
    dVar4 = pdVar36[0xe];
    dVar5 = pdVar36[0xf];
    *(int32_t *)(unaff_RBP + 2) = uVar16;
    *(int32_t *)((longlong)unaff_RBP + 0x14) = uVar17;
    *(int32_t *)(unaff_RBP + 3) = uVar18;
    *(int32_t *)((longlong)unaff_RBP + 0x1c) = uVar19;
    unaff_RBP[4] = dVar4;
    unaff_RBP[5] = dVar5;
    if ((uint)unaff_R14 < *(uint *)(unaff_RDI + 0x10)) {
      dVar4 = unaff_RBP[4];
      dVar5 = unaff_RBP[3];
      dVar6 = unaff_RBP[2];
      dVar7 = *unaff_RBP;
      dVar8 = unaff_RBP[-1];
      dVar9 = unaff_RBP[-2];
      dVar10 = unaff_RBP[-4];
      dVar11 = unaff_RBP[-5];
      dVar12 = unaff_RBP[-6];
      fStack0000000000000034 = 1.0;
      do {
        auVar71 = _fStack0000000000000028;
        pfVar37 = (float *)((longlong)(int)uVar42 * 0x10 + *(longlong *)(unaff_RDI + 0x18));
        dVar70 = (double)*pfVar37;
        dVar65 = (double)pfVar37[1];
        dVar72 = (double)pfVar37[2];
        fStack000000000000002c =
             (float)(dVar11 * dVar65 + dVar70 * unaff_RBP[-9] + dVar72 * dVar8 + dVar5);
        fStack0000000000000028 =
             (float)(dVar65 * dVar12 + dVar70 * unaff_RBP[-10] + dVar72 * dVar9 + dVar6);
        fStack0000000000000030 =
             (float)(dVar10 * dVar65 + unaff_RBP[-8] * dVar70 + dVar7 * dVar72 + dVar4);
        fStack0000000000000034 = auVar71._12_4_;
        FUN_180235000(fStack0000000000000030,&stack0x00000028);
        uVar41 = (int)uVar42 + 1;
        uVar42 = (ulonglong)uVar41;
      } while (uVar41 < *(uint *)(unaff_RDI + 0x10));
    }
    pdVar36 = (double *)func_0x000180645570(unaff_RBP + 8,unaff_RBP + -10);
    dVar4 = pdVar36[2];
    dVar5 = pdVar36[3];
    dVar6 = *pdVar36;
    dVar7 = pdVar36[1];
    unaff_RBP[-0xe] = dVar4;
    unaff_RBP[-0xd] = dVar5;
    unaff_RBP[-8] = dVar4;
    unaff_RBP[-7] = dVar5;
    _fStack0000000000000038 = pdVar36[4];
    _fStack0000000000000040 = pdVar36[5];
    unaff_RBP[-0xc] = dVar6;
    unaff_RBP[-0xb] = dVar7;
    unaff_RBP[-6] = _fStack0000000000000038;
    unaff_RBP[-5] = _fStack0000000000000040;
    unaff_RBP[-10] = dVar6;
    unaff_RBP[-9] = dVar7;
  }
  iVar35 = iStack0000000000000050;
  iVar33 = *(int *)(unaff_RDI + 0x60);
  lVar43 = (longlong)iVar33;
  cVar13 = *(char *)(unaff_RBP + 0x4b);
  fVar59 = 0.0;
  fVar58 = 0.0;
  if ((0 < iVar33) && (fVar59 = 0.0, fVar58 = 0.0, *(char *)(unaff_RBP + 0x4c) != '\0')) {
    piVar44 = *(int **)(unaff_RDI + 0x68);
    lVar39 = *(longlong *)(unaff_RDI + 0x18);
    fVar59 = *(float *)(lVar39 + 8 + (longlong)*piVar44 * 0x10);
    fVar58 = fVar59;
    if (1 < lVar43) {
      lVar48 = 1;
      if (4 < lVar43) {
        pfVar37 = (float *)(piVar44 + 0x26);
        lVar47 = (lVar43 - 5U >> 2) + 1;
        lVar48 = lVar47 * 4 + 1;
        do {
          fVar51 = (float)((uint)pfVar37[6] >> 8 & 0xff) * 0.003921569;
          fStack0000000000000030 =
               SUB164(*(int8_t (*) [16])(lVar39 + (longlong)(int)pfVar37[-0xf] * 0x10),8);
          if ((cVar13 == '\0') && (fVar51 <= 0.0)) {
            fStack0000000000000030 = fStack0000000000000030 + fVar51 * *pfVar37;
          }
          fVar51 = fStack0000000000000030;
          if (fStack0000000000000030 <= fVar59) {
            fVar51 = fVar59;
          }
          fVar59 = fStack0000000000000030;
          if (fVar58 <= fStack0000000000000030) {
            fVar59 = fVar58;
          }
          fVar58 = (float)((uint)pfVar37[0x1d] >> 8 & 0xff) * 0.003921569;
          fStack0000000000000030 =
               SUB164(*(int8_t (*) [16])(lVar39 + (longlong)(int)pfVar37[8] * 0x10),8);
          if ((cVar13 == '\0') && (fVar58 <= 0.0)) {
            fStack0000000000000030 = fStack0000000000000030 + fVar58 * pfVar37[0x17];
          }
          fVar58 = fStack0000000000000030;
          if (fStack0000000000000030 <= fVar51) {
            fVar58 = fVar51;
          }
          fVar51 = fStack0000000000000030;
          if (fVar59 <= fStack0000000000000030) {
            fVar51 = fVar59;
          }
          fVar59 = (float)((uint)pfVar37[0x34] >> 8 & 0xff) * 0.003921569;
          fStack0000000000000030 =
               SUB164(*(int8_t (*) [16])(lVar39 + (longlong)(int)pfVar37[0x1f] * 0x10),8);
          if ((cVar13 == '\0') && (fVar59 <= 0.0)) {
            fStack0000000000000030 = fStack0000000000000030 + fVar59 * pfVar37[0x2e];
          }
          fVar50 = fStack0000000000000030;
          if (fVar51 <= fStack0000000000000030) {
            fVar50 = fVar51;
          }
          fVar51 = fStack0000000000000030;
          if (fStack0000000000000030 <= fVar58) {
            fVar51 = fVar58;
          }
          fVar59 = (float)((uint)pfVar37[0x4b] >> 8 & 0xff) * 0.003921569;
          fStack0000000000000030 =
               SUB164(*(int8_t (*) [16])(lVar39 + (longlong)(int)pfVar37[0x36] * 0x10),8);
          if ((cVar13 == '\0') && (fVar59 <= 0.0)) {
            fStack0000000000000030 = fStack0000000000000030 + fVar59 * pfVar37[0x45];
          }
          pfVar37 = pfVar37 + 0x5c;
          fVar59 = fStack0000000000000030;
          if (fStack0000000000000030 <= fVar51) {
            fVar59 = fVar51;
          }
          fVar58 = fStack0000000000000030;
          if (fVar50 <= fStack0000000000000030) {
            fVar58 = fVar50;
          }
          lVar47 = lVar47 + -1;
        } while (lVar47 != 0);
      }
      if (lVar48 < lVar43) {
        pfVar37 = (float *)(piVar44 + lVar48 * 0x17 + 0xf);
        lVar43 = lVar43 - lVar48;
        fVar51 = fVar59;
        fVar50 = fVar58;
        do {
          fVar59 = (float)((uint)pfVar37[6] >> 8 & 0xff) * 0.003921569;
          fStack0000000000000030 =
               SUB164(*(int8_t (*) [16])(lVar39 + (longlong)(int)pfVar37[-0xf] * 0x10),8);
          if ((cVar13 == '\0') && (fVar59 <= 0.0)) {
            fStack0000000000000030 = fStack0000000000000030 + fVar59 * *pfVar37;
          }
          pfVar37 = pfVar37 + 0x17;
          fVar59 = fStack0000000000000030;
          if (fStack0000000000000030 <= fVar51) {
            fVar59 = fVar51;
          }
          fVar58 = fStack0000000000000030;
          if (fVar50 <= fStack0000000000000030) {
            fVar58 = fVar50;
          }
          lVar43 = lVar43 + -1;
          fVar51 = fVar59;
          fVar50 = fVar58;
        } while (lVar43 != 0);
      }
    }
  }
  pauVar15 = (int8_t (*) [16])unaff_RBP[0x4a];
  uVar42 = unaff_R14 & 0xffffffff;
  auVar31 = *(int8_t (*) [12])*pauVar15;
  fVar51 = *(float *)(*pauVar15 + 0xc);
  _fStack0000000000000028 = *pauVar15;
  if (iVar33 != 0) {
    fStack0000000000000028 = auVar31._0_4_;
    fStack0000000000000030 = auVar31._8_4_;
    uVar17 = fStack0000000000000030;
    fStack000000000000002c = auVar31._4_4_;
    uVar16 = fStack000000000000002c;
    cVar14 = *(char *)(unaff_RBP + 0x4c);
    fStack0000000000000054 = fStack0000000000000028;
    auVar71 = *pauVar15;
    fVar50 = fStack0000000000000028;
    do {
      _fStack0000000000000028 = auVar71;
      lVar43 = *(longlong *)(unaff_RDI + 0x68);
      lVar39 = (longlong)(int)uVar42 * 0x5c;
      pdVar36 = (double *)(lVar39 + 0x10 + lVar43);
      dVar4 = pdVar36[1];
      iStack0000000000000050 = *(int *)(lVar39 + 0x58 + lVar43);
      auVar71 = *(int8_t (*) [16])(lVar39 + lVar43);
      pdVar1 = (double *)(lVar39 + 0x20 + lVar43);
      dVar5 = *pdVar1;
      dVar6 = pdVar1[1];
      unaff_RBP[10] = *pdVar36;
      unaff_RBP[0xb] = dVar4;
      pdVar36 = (double *)(lVar39 + 0x30 + lVar43);
      dVar4 = pdVar36[1];
      unaff_RBP[0xe] = *pdVar36;
      unaff_RBP[0xf] = dVar4;
      unaff_RBP[0x12] = *(double *)(lVar39 + 0x50 + lVar43);
      *(int8_t (*) [16])(unaff_RBP + 8) = auVar71;
      *(int *)(unaff_RBP + 8) = auVar71._0_4_ + iVar35;
      uVar41 = *(uint *)((longlong)unaff_RBP + 0x94);
      unaff_RBP[0xc] = dVar5;
      unaff_RBP[0xd] = dVar6;
      pdVar36 = (double *)(lVar39 + 0x40 + lVar43);
      dVar4 = pdVar36[1];
      unaff_RBP[0x10] = *pdVar36;
      unaff_RBP[0x11] = dVar4;
      fVar69 = (float)*(byte *)((longlong)unaff_RBP + 0x94) * 0.003921569;
      fVar78 = (float)(uVar41 >> 8 & 0xff) * 0.003921569;
      fVar64 = (float)(uVar41 >> 0x18) * 0.003921569;
      if ((cVar13 != '\0') || (0.0 < fVar69)) {
        fVar50 = *(float *)(lVar39 + 8 + lVar43);
        fVar57 = *(float *)(lVar39 + 0xc + lVar43);
        fVar54 = *(float *)(lVar39 + 4 + lVar43);
        fVar52 = fVar50 * *(float *)(unaff_RBP + -0xe) + fVar54 * *(float *)(unaff_RBP + -0xc) +
                 fVar57 * fStack0000000000000038;
        fVar55 = fVar50 * *(float *)((longlong)unaff_RBP + -0x6c) +
                 fVar54 * *(float *)((longlong)unaff_RBP + -0x5c) + fVar57 * fStack000000000000003c;
        fVar56 = fVar50 * *(float *)(unaff_RBP + -0xd) + fVar54 * *(float *)(unaff_RBP + -0xb) +
                 fVar57 * fStack0000000000000040;
        fVar57 = fVar50 * *(float *)((longlong)unaff_RBP + -100) +
                 fVar54 * *(float *)((longlong)unaff_RBP + -0x54) + fVar57 * fStack0000000000000044;
        fVar50 = *(float *)(lVar39 + 0x1c + lVar43);
        *(float *)((longlong)unaff_RBP + 0x44) = fVar52;
        *(float *)(unaff_RBP + 9) = fVar55;
        *(float *)((longlong)unaff_RBP + 0x4c) = fVar56;
        *(float *)(unaff_RBP + 10) = fVar57;
        *(float *)((longlong)unaff_RBP + 0x74) = fVar52;
        *(float *)(unaff_RBP + 0xf) = fVar55;
        *(float *)((longlong)unaff_RBP + 0x7c) = fVar56;
        *(float *)(unaff_RBP + 0x10) = fVar57;
        fVar57 = *(float *)(lVar39 + 0x18 + lVar43);
        fVar54 = *(float *)(lVar39 + 0x14 + lVar43);
        fVar52 = *(float *)(lVar39 + 0x28 + lVar43);
        auVar53._0_4_ =
             fVar57 * *(float *)(unaff_RBP + -0xe) + fVar54 * *(float *)(unaff_RBP + -0xc) +
             fVar50 * fStack0000000000000038;
        auVar53._4_4_ =
             fVar57 * *(float *)((longlong)unaff_RBP + -0x6c) +
             fVar54 * *(float *)((longlong)unaff_RBP + -0x5c) + fVar50 * fStack000000000000003c;
        auVar53._8_4_ =
             fVar57 * *(float *)(unaff_RBP + -0xd) + fVar54 * *(float *)(unaff_RBP + -0xb) +
             fVar50 * fStack0000000000000040;
        auVar53._12_4_ =
             fVar57 * *(float *)((longlong)unaff_RBP + -100) +
             fVar54 * *(float *)((longlong)unaff_RBP + -0x54) + fVar50 * fStack0000000000000044;
        fVar50 = *(float *)(lVar39 + 0x24 + lVar43);
        fVar57 = *(float *)(lVar39 + 0x2c + lVar43);
        *(int8_t (*) [16])((longlong)unaff_RBP + 0x54) = auVar53;
        *(float *)((longlong)unaff_RBP + 100) =
             fVar52 * *(float *)(unaff_RBP + -0xe) + fVar50 * *(float *)(unaff_RBP + -0xc) +
             fVar57 * fStack0000000000000038;
        *(float *)(unaff_RBP + 0xd) =
             fVar52 * *(float *)((longlong)unaff_RBP + -0x6c) +
             fVar50 * *(float *)((longlong)unaff_RBP + -0x5c) + fVar57 * fStack000000000000003c;
        *(float *)((longlong)unaff_RBP + 0x6c) =
             fVar52 * *(float *)(unaff_RBP + -0xd) + fVar50 * *(float *)(unaff_RBP + -0xb) +
             fVar57 * fStack0000000000000040;
        *(float *)(unaff_RBP + 0xe) =
             fVar52 * *(float *)((longlong)unaff_RBP + -100) +
             fVar50 * *(float *)((longlong)unaff_RBP + -0x54) + fVar57 * fStack0000000000000044;
        fVar50 = fStack0000000000000054;
      }
      else {
        puVar2 = (uint64_t *)(lVar39 + 4 + lVar43);
        uVar25 = *puVar2;
        uVar26 = puVar2[1];
        puVar2 = (uint64_t *)(lVar39 + 0x24 + lVar43);
        uVar27 = *puVar2;
        uVar28 = puVar2[1];
        *(uint64_t *)((longlong)unaff_RBP + 0x44) = uVar25;
        *(uint64_t *)((longlong)unaff_RBP + 0x4c) = uVar26;
        *(uint64_t *)((longlong)unaff_RBP + 0x74) = uVar25;
        *(uint64_t *)((longlong)unaff_RBP + 0x7c) = uVar26;
        puVar2 = (uint64_t *)(lVar39 + 0x14 + lVar43);
        uVar25 = *puVar2;
        uVar26 = puVar2[1];
        *(uint64_t *)((longlong)unaff_RBP + 100) = uVar27;
        *(uint64_t *)((longlong)unaff_RBP + 0x6c) = uVar28;
        *(uint64_t *)((longlong)unaff_RBP + 0x54) = uVar25;
        *(uint64_t *)((longlong)unaff_RBP + 0x5c) = uVar26;
      }
      if (cVar14 != '\0') {
        auVar71 = *(int8_t (*) [16])
                   (*(longlong *)(unaff_RDI + 0x18) + (longlong)*(int *)(lVar39 + lVar43) * 0x10);
        fStack0000000000000030 = auVar71._8_4_;
        if ((cVar13 == '\0') && (fVar69 <= 0.0)) {
          fStack0000000000000030 =
               fStack0000000000000030 + fVar78 * *(float *)(lVar39 + 0x3c + lVar43);
        }
        fVar64 = (fStack0000000000000030 - fVar58) / (fVar59 - fVar58);
        _fStack0000000000000028 = auVar71;
        if (0.0 <= fVar64) {
          if (1.0 <= fVar64) {
            fVar64 = 1.0;
          }
        }
        else {
          fVar64 = 0.0;
        }
      }
      lVar43 = unaff_RSI[1];
      uVar32 = (uint)(longlong)(fVar51 * fVar64 * 256.0);
      uVar46 = 0xff;
      if (uVar32 < 0xff) {
        uVar46 = uVar32;
      }
      uVar32 = (uint)(longlong)((float)(uVar41 >> 0x10 & 0xff) * 0.003921569 * fVar50 * 256.0);
      uVar41 = 0xff;
      if (uVar32 < 0xff) {
        uVar41 = uVar32;
      }
      iVar33 = *(int *)(lVar43 + 100);
      uVar38 = (uint)(longlong)((float)uVar16 * fVar78 * 256.0);
      uVar32 = 0xff;
      if (uVar38 < 0xff) {
        uVar32 = uVar38;
      }
      uVar45 = (uint)(longlong)((float)uVar17 * fVar69 * 256.0);
      uVar38 = 0xff;
      if (uVar45 < 0xff) {
        uVar38 = uVar45;
      }
      iVar34 = *(int *)(lVar43 + 0x60);
      *(uint *)((longlong)unaff_RBP + 0x94) = ((uVar46 << 8 | uVar41) << 8 | uVar32) << 8 | uVar38;
      if (iVar33 <= iVar34) {
        if (iVar33 < 2) {
          iVar33 = 8;
        }
        else {
          iVar33 = (iVar33 >> 1) + iVar33;
        }
        *(int *)(lVar43 + 100) = iVar33;
        FUN_180086010(lVar43 + 0x60);
        iVar34 = *(int *)(lVar43 + 0x60);
        fVar50 = fStack0000000000000054;
      }
      dVar4 = unaff_RBP[9];
      uVar41 = (int)uVar42 + 1;
      uVar42 = (ulonglong)uVar41;
      dVar5 = unaff_RBP[10];
      dVar6 = unaff_RBP[0xb];
      lVar48 = (longlong)iVar34 * 0x5c;
      lVar39 = *(longlong *)(lVar43 + 0x68);
      *(double *)(lVar48 + lVar39) = unaff_RBP[8];
      ((double *)(lVar48 + lVar39))[1] = dVar4;
      dVar4 = unaff_RBP[0xc];
      dVar7 = unaff_RBP[0xd];
      pdVar36 = (double *)(lVar48 + 0x10 + lVar39);
      *pdVar36 = dVar5;
      pdVar36[1] = dVar6;
      dVar5 = unaff_RBP[0xe];
      dVar6 = unaff_RBP[0xf];
      pdVar36 = (double *)(lVar48 + 0x20 + lVar39);
      *pdVar36 = dVar4;
      pdVar36[1] = dVar7;
      uVar18 = *(int32_t *)(unaff_RBP + 0x10);
      uVar19 = *(int32_t *)((longlong)unaff_RBP + 0x84);
      uVar23 = *(int32_t *)(unaff_RBP + 0x11);
      uVar24 = *(int32_t *)((longlong)unaff_RBP + 0x8c);
      pdVar36 = (double *)(lVar48 + 0x30 + lVar39);
      *pdVar36 = dVar5;
      pdVar36[1] = dVar6;
      dVar4 = unaff_RBP[0x12];
      puVar3 = (int32_t *)(lVar48 + 0x40 + lVar39);
      *puVar3 = uVar18;
      puVar3[1] = uVar19;
      puVar3[2] = uVar23;
      puVar3[3] = uVar24;
      *(double *)(lVar48 + 0x50 + lVar39) = dVar4;
      *(int *)(lVar48 + 0x58 + lVar39) = iStack0000000000000050;
      *(int *)(lVar43 + 0x60) = *(int *)(lVar43 + 0x60) + 1;
      auVar71 = _fStack0000000000000028;
    } while (uVar41 < *(uint *)(unaff_RDI + 0x60));
    unaff_R14 = 0;
    unaff_R12D = in_stack_00000060;
  }
  if (*(char *)(unaff_RBP + 0x4d) != '\0') {
    dVar4 = unaff_RBP[-0xf];
    if (*(int *)(unaff_RDI + 0x10) == *(int *)((longlong)dVar4 + 200)) {
      uVar49 = unaff_R14 & 0xffffffff;
      uVar42 = unaff_R14;
      if (0 < *(int *)((longlong)dVar4 + 200)) {
        do {
          lVar43 = *(longlong *)((longlong)dVar4 + 0xd0);
          lVar39 = unaff_RSI[1];
          piVar44 = (int *)(lVar39 + 200);
          _fStack0000000000000038 = *(double *)(uVar42 + lVar43);
          _fStack0000000000000040 = ((double *)(uVar42 + lVar43))[1];
          iVar33 = *piVar44;
          iVar35 = *(int *)(lVar39 + 0xcc);
          in_stack_00000048 =
               CONCAT13(*(int8_t *)(uVar42 + 0x13 + lVar43),
                        CONCAT12(*(int8_t *)(uVar42 + 0x12 + lVar43),
                                 CONCAT11(*(int8_t *)(uVar42 + 0x11 + lVar43),
                                          *(int8_t *)(uVar42 + 0x10 + lVar43))));
          if (iVar35 <= iVar33) {
            if (iVar35 < 2) {
              iVar35 = 8;
            }
            else {
              iVar35 = (iVar35 >> 1) + iVar35;
            }
            *(int *)(lVar39 + 0xcc) = iVar35;
            FUN_180085e30(piVar44);
            iVar33 = *piVar44;
          }
          lVar43 = *(longlong *)(lVar39 + 0xd0);
          uVar41 = (int)uVar49 + 1;
          uVar49 = (ulonglong)uVar41;
          pdVar36 = (double *)(lVar43 + (longlong)iVar33 * 0x14);
          *pdVar36 = _fStack0000000000000038;
          pdVar36[1] = _fStack0000000000000040;
          *(uint *)(lVar43 + 0x10 + (longlong)iVar33 * 0x14) = in_stack_00000048;
          *piVar44 = *piVar44 + 1;
          uVar42 = uVar42 + 0x14;
        } while ((int)uVar41 < *(int *)((longlong)dVar4 + 200));
      }
    }
    else {
      if (bStackX_20 == 0xff) {
        if (*(longlong *)(in_stack_00000068 + 0x1b0) == 0) {
          lVar43 = in_stack_00000068 + 0x10;
        }
        else {
          lVar43 = func_0x000180079240();
        }
        puVar40 = &system_buffer_ptr;
        if (*(void **)(lVar43 + 8) != (void *)0x0) {
          puVar40 = *(void **)(lVar43 + 8);
        }
        FUN_180627020(&unknown_var_8000_ptr,puVar40);
        bStackX_20 = 0;
      }
      if ((int)*(char *)(*unaff_RSI + 0xf6) < (char)bStackX_20 + 1) {
        *(byte *)(*unaff_RSI + 0xf6) = bStackX_20 + 1;
      }
      uVar42 = unaff_R14 & 0xffffffff;
      if (0 < *(int *)(unaff_RDI + 0x10)) {
        do {
          lVar43 = unaff_RSI[1];
          piVar44 = (int *)(lVar43 + 200);
          _fStack0000000000000038 = 5.26354424712089e-315;
          _fStack0000000000000040 = 0.0;
          iVar33 = *(int *)(lVar43 + 0xcc);
          iVar35 = *piVar44;
          in_stack_00000048 = (uint)bStackX_20;
          if (iVar33 <= iVar35) {
            if (iVar33 < 2) {
              iVar33 = 8;
            }
            else {
              iVar33 = (iVar33 >> 1) + iVar33;
            }
            *(int *)(lVar43 + 0xcc) = iVar33;
            FUN_180085e30(piVar44);
            iVar35 = *piVar44;
          }
          lVar43 = *(longlong *)(lVar43 + 0xd0);
          uVar41 = (int)uVar42 + 1;
          uVar42 = (ulonglong)uVar41;
          puVar3 = (int32_t *)(lVar43 + (longlong)iVar35 * 0x14);
          *puVar3 = fStack0000000000000038;
          puVar3[1] = fStack000000000000003c;
          puVar3[2] = fStack0000000000000040;
          puVar3[3] = fStack0000000000000044;
          *(uint *)(lVar43 + 0x10 + (longlong)iVar35 * 0x14) = in_stack_00000048;
          *piVar44 = *piVar44 + 1;
        } while ((int)uVar41 < *(int *)(unaff_RDI + 0x10));
      }
    }
  }
  bVar29 = false;
  bVar30 = false;
  fVar59 = *(float *)(unaff_RBP + -10) * *(float *)(unaff_RBP + -7);
  if ((*(char *)(*unaff_RSI + 0xff) == '\0') || (*(char *)((longlong)unaff_RBP[6] + 0xff) != '\0'))
  {
    if (0.0 <= (*(float *)(unaff_RBP + -8) * *(float *)(unaff_RBP + -9) - fVar59) *
               *(float *)((longlong)unaff_RBP + -0x2c) +
               (*(float *)((longlong)unaff_RBP + -0x4c) * *(float *)(unaff_RBP + -7) -
               *(float *)(unaff_RBP + -9) * *(float *)((longlong)unaff_RBP + -0x3c)) *
               *(float *)(unaff_RBP + -6) +
               (*(float *)(unaff_RBP + -10) * *(float *)((longlong)unaff_RBP + -0x3c) -
               *(float *)(unaff_RBP + -8) * *(float *)((longlong)unaff_RBP + -0x4c)) *
               *(float *)(unaff_RBP + -5)) {
      bVar29 = true;
    }
    else {
      bVar30 = true;
    }
  }
  else {
    bVar30 = true;
    bVar29 = true;
  }
  lVar43 = in_stack_00000058;
  if (*(int *)(in_stack_00000058 + 0x88) != 0) {
    do {
      lVar39 = *(longlong *)(lVar43 + 0x90);
      lVar48 = (longlong)(int)unaff_R14;
      if (bVar29) {
        fVar59 = (float)FUN_180235410(fVar59,*(int *)(lVar39 + lVar48 * 0xc) + unaff_R12D,
                                      *(int *)(lVar39 + 4 + lVar48 * 0xc) + unaff_R12D,
                                      *(int *)(lVar39 + 8 + lVar48 * 0xc) + unaff_R12D);
        lVar43 = in_stack_00000058;
      }
      if (bVar30) {
        fVar59 = (float)FUN_180235410(fVar59,*(int *)(lVar39 + lVar48 * 0xc) + unaff_R12D,
                                      *(int *)(lVar39 + 8 + lVar48 * 0xc) + unaff_R12D,
                                      *(int *)(lVar39 + 4 + lVar48 * 0xc) + unaff_R12D);
        lVar43 = in_stack_00000058;
      }
      uVar41 = (int)unaff_R14 + 1;
      unaff_R14 = (ulonglong)uVar41;
    } while (uVar41 < *(uint *)(lVar43 + 0x88));
  }
  lVar39 = in_stack_00000078;
  lVar43 = in_stack_00000070;
  dVar4 = unaff_RBP[7];
  *(int16_t *)(unaff_RSI + 6) = 0x101;
  *(int8_t *)((longlong)unaff_RSI + 0x32) = 1;
  if (dVar4 == 0.0) {
    if (in_stack_00000070 != 0) {
      FUN_18007f840(in_stack_00000070);
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar43);
    }
    if (in_stack_00000078 != 0) {
      FUN_18007f840(in_stack_00000078);
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar39);
    }
    dVar4 = unaff_RBP[-0x10];
    if (dVar4 != 0.0) {
      FUN_18007f840(dVar4);
                    // WARNING: Subroutine does not return
      FUN_18064e900(dVar4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050((ulonglong)unaff_RBP[0x28] ^ (ulonglong)&stack0x00000000);
}






