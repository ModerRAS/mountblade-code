#include "TaleWorlds.Native.Split.h"

// 99_part_03_part061_sub002_sub002.c - 1 个函数

// 函数: void FUN_180235cee(undefined8 param_1,double param_2,undefined1 (*param_3) [16],byte param_4,
void FUN_180235cee(undefined8 param_1,double param_2,undefined1 (*param_3) [16],byte param_4,
                  undefined1 param_5 [16],double param_6,double param_7,uint param_8,
                  undefined8 param_9,longlong param_10,int param_11,longlong param_12,
                  double *param_13,longlong *param_14)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  char cVar13;
  undefined1 (*pauVar14) [16];
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auVar31 [12];
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  double dVar37;
  longlong lVar38;
  double dVar39;
  longlong *plVar40;
  double *pdVar41;
  float *pfVar42;
  uint uVar43;
  undefined *puVar44;
  byte unaff_BL;
  uint uVar45;
  int *piVar46;
  double *unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar47;
  uint uVar48;
  uint uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong in_R11;
  uint uVar52;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong uVar53;
  ulonglong uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  double dVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  double dVar74;
  undefined1 auVar75 [16];
  undefined4 unaff_XMM6_Da;
  float fVar76;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  byte bStackX_20;
  
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  unaff_RBP[6] = param_2;
  lVar38 = unaff_R13;
  if ((unaff_BL & 0x20) == 0) {
    param_2 = (double)func_0x000180085de0(*(undefined8 *)((longlong)param_2 + 0x1b0));
    lVar38 = func_0x000180085de0(*(undefined8 *)(unaff_R13 + 0x1b0));
  }
  lVar36 = unaff_R13;
  if ((((unaff_R14 & 0x40) == 0) || (*(longlong *)(unaff_R13 + 0x210) == 0)) &&
     (*(longlong *)(unaff_R13 + 0x1b0) != 0)) {
    lVar36 = FUN_180085900();
  }
  uVar52 = 0;
  param_13 = (double *)0x0;
  param_14 = (longlong *)0x0;
  dVar37 = *(double *)(_DAT_180c86870 + 0x98);
  unaff_RBP[7] = dVar37;
  unaff_RBP[-0x10] = 0.0;
  param_12 = lVar36;
  if (dVar37 == 0.0) {
    param_13 = (double *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
    *param_13 = param_2;
    *(undefined4 *)(param_13 + 1) = 0;
    FUN_18007f770(param_13);
    param_14 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
    *param_14 = lVar38;
    *(undefined4 *)(param_14 + 1) = 0;
    FUN_18007f770(param_14);
    plVar40 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
    unaff_RBP[-0x10] = (double)plVar40;
    *plVar40 = lVar36;
    *(undefined4 *)(plVar40 + 1) = 0;
    FUN_18007f770(plVar40);
    dVar37 = param_13[2];
    lVar38 = param_14[2];
    dVar39 = *(double *)((longlong)unaff_RBP[-0x10] + 0x10);
    param_10 = lVar38;
  }
  else {
    dVar37 = (double)FUN_18022f240(dVar37,param_2);
    lVar38 = FUN_18022f240(*(undefined8 *)(_DAT_180c86870 + 0x98),lVar38);
    param_10 = lVar38;
    dVar39 = (double)FUN_18022f240(*(undefined8 *)(_DAT_180c86870 + 0x98),lVar36);
  }
  lVar36 = *unaff_RSI;
  unaff_RBP[-0xf] = dVar39;
  param_9._0_4_ = *(int *)(unaff_RSI[1] + 0x10);
  iVar34 = *(int *)(unaff_RSI[1] + 0x60);
  if (*(char *)(lVar36 + 0xf6) < *(char *)(unaff_R13 + 0xf6)) {
    *(char *)(lVar36 + 0xf6) = *(char *)(unaff_R13 + 0xf6);
    lVar36 = *unaff_RSI;
  }
  if ((int)*(char *)(lVar36 + 0xf6) < (char)param_4 + 1) {
    *(byte *)(lVar36 + 0xf6) = param_4 + 1;
  }
  lVar36 = unaff_RSI[1];
  iVar32 = *(int *)((longlong)dVar37 + 0x10) + *(int *)(lVar36 + 0x10);
  iVar35 = *(int *)(lVar36 + 0x14);
  param_11 = iVar34;
  if (iVar35 < iVar32) {
    if (iVar32 == 0) {
      if (iVar35 < 2) {
        iVar32 = 8;
      }
      else {
        iVar32 = (iVar35 >> 1) + iVar35;
      }
    }
    *(int *)(lVar36 + 0x14) = iVar32;
    FUN_1800846d0();
  }
  lVar36 = unaff_RSI[1];
  iVar32 = *(int *)((longlong)dVar37 + 0x60) + *(int *)(lVar36 + 0x60);
  iVar35 = *(int *)(lVar36 + 100);
  if (iVar35 < iVar32) {
    if (iVar32 == 0) {
      if (iVar35 < 2) {
        iVar32 = 8;
      }
      else {
        iVar32 = (iVar35 >> 1) + iVar35;
      }
    }
    *(int *)(lVar36 + 100) = iVar32;
    FUN_180086010();
  }
  lVar36 = unaff_RSI[1];
  iVar32 = *(int *)(lVar38 + 0x88) + *(int *)(lVar36 + 0x88);
  iVar35 = *(int *)(lVar36 + 0x8c);
  if (iVar35 < iVar32) {
    if (iVar32 == 0) {
      if (iVar35 < 2) {
        iVar32 = 8;
      }
      else {
        iVar32 = (iVar35 >> 1) + iVar35;
      }
    }
    *(int *)(lVar36 + 0x8c) = iVar32;
    FUN_180085f20();
  }
  pfVar42 = (float *)(unaff_R13 + 0x120);
  if (*(char *)(unaff_RBP + 0x4e) == '\0') {
    fVar76 = *(float *)(unaff_R13 + 0x124);
    auVar75 = *param_3;
    fVar61 = auVar75._0_4_;
    fVar64 = auVar75._4_4_;
    fVar65 = auVar75._8_4_;
    fVar66 = auVar75._12_4_;
    auVar75 = param_3[1];
    fVar62 = auVar75._0_4_;
    fVar59 = auVar75._4_4_;
    fVar57 = auVar75._8_4_;
    fVar60 = auVar75._12_4_;
    auVar75 = param_3[2];
    fVar67 = auVar75._0_4_;
    fVar70 = auVar75._4_4_;
    fVar71 = auVar75._8_4_;
    fVar72 = auVar75._12_4_;
    fVar63 = *pfVar42;
    fVar56 = *(float *)(unaff_R13 + 0x128);
    fVar55 = *(float *)(unaff_R13 + 0x134);
    fVar68 = *(float *)(unaff_R13 + 0x144);
    fVar73 = *(float *)(unaff_R13 + 0x154);
    fVar82 = *(float *)(unaff_R13 + 0x130);
    auVar75._0_4_ = fVar76 * fVar62 + fVar63 * fVar61 + fVar56 * fVar67;
    auVar75._4_4_ = fVar76 * fVar59 + fVar63 * fVar64 + fVar56 * fVar70;
    auVar75._8_4_ = fVar76 * fVar57 + fVar63 * fVar65 + fVar56 * fVar71;
    auVar75._12_4_ = fVar76 * fVar60 + fVar63 * fVar66 + fVar56 * fVar72;
    fVar76 = *(float *)(unaff_R13 + 0x138);
    fVar63 = *(float *)(unaff_R13 + 0x140);
    fVar77 = fVar55 * fVar62 + fVar82 * fVar61 + fVar76 * fVar67;
    fVar78 = fVar55 * fVar59 + fVar82 * fVar64 + fVar76 * fVar70;
    fVar79 = fVar55 * fVar57 + fVar82 * fVar65 + fVar76 * fVar71;
    fVar80 = fVar55 * fVar60 + fVar82 * fVar66 + fVar76 * fVar72;
    fVar76 = *(float *)(unaff_R13 + 0x148);
    fVar56 = *(float *)(unaff_R13 + 0x150);
    *(undefined1 (*) [16])(unaff_RBP + -0xc) = auVar75;
    fVar81 = fVar68 * fVar62 + fVar63 * fVar61 + fVar76 * fVar67;
    fVar83 = fVar68 * fVar59 + fVar63 * fVar64 + fVar76 * fVar70;
    fVar84 = fVar68 * fVar57 + fVar63 * fVar65 + fVar76 * fVar71;
    fVar85 = fVar68 * fVar60 + fVar63 * fVar66 + fVar76 * fVar72;
    fVar76 = *(float *)(unaff_R13 + 0x158);
    fVar63 = *(float *)param_3[3];
    fVar55 = *(float *)(param_3[3] + 4);
    fVar68 = *(float *)(param_3[3] + 8);
    fVar82 = *(float *)(param_3[3] + 0xc);
    *(float *)(unaff_RBP + -0xe) = fVar77;
    *(float *)((longlong)unaff_RBP + -0x6c) = fVar78;
    *(float *)(unaff_RBP + -0xd) = fVar79;
    *(float *)((longlong)unaff_RBP + -100) = fVar80;
    param_6 = (double)CONCAT44(fVar83,fVar81);
    param_7 = (double)CONCAT44(fVar85,fVar84);
    *(undefined1 (*) [16])(unaff_RBP + -10) = auVar75;
    *(float *)(unaff_RBP + -8) = fVar77;
    *(float *)((longlong)unaff_RBP + -0x3c) = fVar78;
    *(float *)(unaff_RBP + -7) = fVar79;
    *(float *)((longlong)unaff_RBP + -0x34) = fVar80;
    *(float *)(unaff_RBP + -6) = fVar81;
    *(float *)((longlong)unaff_RBP + -0x2c) = fVar83;
    *(float *)(unaff_RBP + -5) = fVar84;
    *(float *)((longlong)unaff_RBP + -0x24) = fVar85;
    uVar45 = uVar52;
    if (*(int *)((longlong)dVar37 + 0x10) != 0) {
      do {
        pfVar42 = (float *)(*(longlong *)((longlong)dVar37 + 0x18) + (longlong)(int)uVar45 * 0x10);
        fVar20 = *pfVar42;
        fVar21 = pfVar42[1];
        fVar22 = pfVar42[2];
        param_5._0_4_ =
             fVar20 * auVar75._0_4_ + fVar21 * fVar77 + fVar22 * fVar81 +
             fVar73 * fVar62 + fVar56 * fVar61 + fVar76 * fVar67 + fVar63;
        param_5._4_4_ =
             fVar20 * auVar75._4_4_ + fVar21 * fVar78 + fVar22 * fVar83 +
             fVar73 * fVar59 + fVar56 * fVar64 + fVar76 * fVar70 + fVar55;
        param_5._8_4_ =
             fVar20 * auVar75._8_4_ + fVar21 * fVar79 + fVar22 * fVar84 +
             fVar73 * fVar57 + fVar56 * fVar65 + fVar76 * fVar71 + fVar68;
        param_5._12_4_ =
             fVar20 * auVar75._12_4_ + fVar21 * fVar80 + fVar22 * fVar85 +
             fVar73 * fVar60 + fVar56 * fVar66 + fVar76 * fVar72 + fVar82;
        FUN_180235000(fVar22 * fVar81,param_5);
        auVar75 = *(undefined1 (*) [16])(unaff_RBP + -0xc);
        uVar45 = uVar45 + 1;
      } while (uVar45 < *(uint *)((longlong)dVar37 + 0x10));
    }
  }
  else {
    func_0x000180239f10(unaff_RBP + -10,param_3);
    func_0x000180239f10(unaff_RBP + 8,pfVar42);
    pdVar41 = (double *)FUN_180239c40(unaff_RBP + -10,unaff_RBP + 0x18,unaff_RBP + 8);
    dVar39 = pdVar41[1];
    dVar4 = pdVar41[2];
    dVar5 = pdVar41[3];
    unaff_RBP[-10] = *pdVar41;
    unaff_RBP[-9] = dVar39;
    dVar39 = pdVar41[4];
    dVar6 = pdVar41[5];
    unaff_RBP[-8] = dVar4;
    unaff_RBP[-7] = dVar5;
    dVar4 = pdVar41[6];
    dVar5 = pdVar41[7];
    unaff_RBP[-6] = dVar39;
    unaff_RBP[-5] = dVar6;
    dVar39 = pdVar41[8];
    dVar6 = pdVar41[9];
    unaff_RBP[-4] = dVar4;
    unaff_RBP[-3] = dVar5;
    dVar4 = pdVar41[10];
    dVar5 = pdVar41[0xb];
    unaff_RBP[-2] = dVar39;
    unaff_RBP[-1] = dVar6;
    uVar16 = *(undefined4 *)(pdVar41 + 0xc);
    uVar17 = *(undefined4 *)((longlong)pdVar41 + 100);
    uVar18 = *(undefined4 *)(pdVar41 + 0xd);
    uVar19 = *(undefined4 *)((longlong)pdVar41 + 0x6c);
    *unaff_RBP = dVar4;
    unaff_RBP[1] = dVar5;
    dVar39 = pdVar41[0xe];
    dVar4 = pdVar41[0xf];
    *(undefined4 *)(unaff_RBP + 2) = uVar16;
    *(undefined4 *)((longlong)unaff_RBP + 0x14) = uVar17;
    *(undefined4 *)(unaff_RBP + 3) = uVar18;
    *(undefined4 *)((longlong)unaff_RBP + 0x1c) = uVar19;
    unaff_RBP[4] = dVar39;
    unaff_RBP[5] = dVar4;
    if (*(int *)((longlong)dVar37 + 0x10) != 0) {
      dVar39 = unaff_RBP[4];
      dVar4 = unaff_RBP[3];
      dVar5 = unaff_RBP[2];
      dVar6 = *unaff_RBP;
      dVar7 = unaff_RBP[-1];
      dVar8 = unaff_RBP[-2];
      dVar9 = unaff_RBP[-4];
      dVar10 = unaff_RBP[-5];
      dVar11 = unaff_RBP[-6];
      param_5._12_4_ = 0x3f800000;
      uVar45 = uVar52;
      do {
        auVar75 = param_5;
        pfVar42 = (float *)((longlong)(int)uVar45 * 0x10 + *(longlong *)((longlong)dVar37 + 0x18));
        dVar74 = (double)*pfVar42;
        dVar69 = (double)pfVar42[1];
        dVar15 = (double)pfVar42[2];
        param_5._4_4_ = (float)(dVar10 * dVar69 + dVar74 * unaff_RBP[-9] + dVar15 * dVar7 + dVar4);
        param_5._0_4_ = (float)(dVar69 * dVar11 + dVar74 * unaff_RBP[-10] + dVar15 * dVar8 + dVar5);
        param_5._8_4_ =
             (undefined4)(dVar9 * dVar69 + unaff_RBP[-8] * dVar74 + dVar6 * dVar15 + dVar39);
        param_5._12_4_ = auVar75._12_4_;
        FUN_180235000(param_5._8_4_,param_5);
        uVar45 = uVar45 + 1;
      } while (uVar45 < *(uint *)((longlong)dVar37 + 0x10));
    }
    pdVar41 = (double *)func_0x000180645570(unaff_RBP + 8,unaff_RBP + -10);
    dVar39 = pdVar41[2];
    dVar4 = pdVar41[3];
    dVar5 = *pdVar41;
    dVar6 = pdVar41[1];
    unaff_RBP[-0xe] = dVar39;
    unaff_RBP[-0xd] = dVar4;
    unaff_RBP[-8] = dVar39;
    unaff_RBP[-7] = dVar4;
    param_6 = pdVar41[4];
    param_7 = pdVar41[5];
    unaff_RBP[-0xc] = dVar5;
    unaff_RBP[-0xb] = dVar6;
    unaff_RBP[-6] = param_6;
    unaff_RBP[-5] = param_7;
    unaff_RBP[-10] = dVar5;
    unaff_RBP[-9] = dVar6;
  }
  iVar32 = (int)param_9;
  iVar35 = *(int *)((longlong)dVar37 + 0x60);
  lVar38 = (longlong)iVar35;
  cVar12 = *(char *)(unaff_RBP + 0x4b);
  fVar76 = 0.0;
  fVar63 = 0.0;
  if ((0 < iVar35) && (*(char *)(unaff_RBP + 0x4c) != '\0')) {
    piVar46 = *(int **)((longlong)dVar37 + 0x68);
    lVar36 = *(longlong *)((longlong)dVar37 + 0x18);
    fVar76 = *(float *)(lVar36 + 8 + (longlong)*piVar46 * 0x10);
    fVar63 = fVar76;
    if (1 < lVar38) {
      lVar51 = 1;
      if (4 < lVar38) {
        pfVar42 = (float *)(piVar46 + 0x26);
        lVar50 = (lVar38 - 5U >> 2) + 1;
        lVar51 = lVar50 * 4 + 1;
        do {
          fVar56 = (float)((uint)pfVar42[6] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(undefined1 (*) [16])(lVar36 + (longlong)(int)pfVar42[-0xf] * 0x10),8);
          if ((cVar12 == '\0') && (fVar56 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar56 * *pfVar42;
          }
          fVar56 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar63) {
            fVar56 = fVar63;
          }
          fVar63 = (float)param_5._8_4_;
          if (fVar76 <= (float)param_5._8_4_) {
            fVar63 = fVar76;
          }
          fVar76 = (float)((uint)pfVar42[0x1d] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(undefined1 (*) [16])(lVar36 + (longlong)(int)pfVar42[8] * 0x10),8);
          if ((cVar12 == '\0') && (fVar76 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar76 * pfVar42[0x17];
          }
          fVar76 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar56) {
            fVar76 = fVar56;
          }
          fVar56 = (float)param_5._8_4_;
          if (fVar63 <= (float)param_5._8_4_) {
            fVar56 = fVar63;
          }
          fVar63 = (float)((uint)pfVar42[0x34] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(undefined1 (*) [16])(lVar36 + (longlong)(int)pfVar42[0x1f] * 0x10),8);
          if ((cVar12 == '\0') && (fVar63 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar63 * pfVar42[0x2e];
          }
          fVar55 = (float)param_5._8_4_;
          if (fVar56 <= (float)param_5._8_4_) {
            fVar55 = fVar56;
          }
          fVar56 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar76) {
            fVar56 = fVar76;
          }
          fVar76 = (float)((uint)pfVar42[0x4b] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(undefined1 (*) [16])(lVar36 + (longlong)(int)pfVar42[0x36] * 0x10),8);
          if ((cVar12 == '\0') && (fVar76 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar76 * pfVar42[0x45];
          }
          pfVar42 = pfVar42 + 0x5c;
          fVar63 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar56) {
            fVar63 = fVar56;
          }
          fVar76 = (float)param_5._8_4_;
          if (fVar55 <= (float)param_5._8_4_) {
            fVar76 = fVar55;
          }
          lVar50 = lVar50 + -1;
        } while (lVar50 != 0);
      }
      if (lVar51 < lVar38) {
        pfVar42 = (float *)(piVar46 + lVar51 * 0x17 + 0xf);
        lVar38 = lVar38 - lVar51;
        fVar56 = fVar76;
        fVar55 = fVar63;
        do {
          fVar76 = (float)((uint)pfVar42[6] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(undefined1 (*) [16])(lVar36 + (longlong)(int)pfVar42[-0xf] * 0x10),8);
          if ((cVar12 == '\0') && (fVar76 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar76 * *pfVar42;
          }
          pfVar42 = pfVar42 + 0x17;
          fVar63 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar55) {
            fVar63 = fVar55;
          }
          fVar76 = (float)param_5._8_4_;
          if (fVar56 <= (float)param_5._8_4_) {
            fVar76 = fVar56;
          }
          lVar38 = lVar38 + -1;
          fVar56 = fVar76;
          fVar55 = fVar63;
        } while (lVar38 != 0);
      }
    }
  }
  pauVar14 = (undefined1 (*) [16])unaff_RBP[0x4a];
  auVar31 = *(undefined1 (*) [12])*pauVar14;
  fVar56 = *(float *)(*pauVar14 + 0xc);
  param_5 = *pauVar14;
  if (iVar35 != 0) {
    param_5._0_4_ = auVar31._0_4_;
    param_5._8_4_ = auVar31._8_4_;
    uVar17 = param_5._8_4_;
    param_5._4_4_ = auVar31._4_4_;
    uVar16 = param_5._4_4_;
    cVar13 = *(char *)(unaff_RBP + 0x4c);
    param_9._4_4_ = (float)param_5._0_4_;
    auVar75 = *pauVar14;
    fVar55 = (float)param_5._0_4_;
    do {
      param_5 = auVar75;
      lVar38 = *(longlong *)((longlong)dVar37 + 0x68);
      lVar36 = (longlong)(int)uVar52 * 0x5c;
      pdVar41 = (double *)(lVar36 + 0x10 + lVar38);
      dVar39 = pdVar41[1];
      param_9._0_4_ = *(int *)(lVar36 + 0x58 + lVar38);
      auVar75 = *(undefined1 (*) [16])(lVar36 + lVar38);
      pdVar1 = (double *)(lVar36 + 0x20 + lVar38);
      dVar4 = *pdVar1;
      dVar5 = pdVar1[1];
      unaff_RBP[10] = *pdVar41;
      unaff_RBP[0xb] = dVar39;
      pdVar41 = (double *)(lVar36 + 0x30 + lVar38);
      dVar39 = pdVar41[1];
      unaff_RBP[0xe] = *pdVar41;
      unaff_RBP[0xf] = dVar39;
      unaff_RBP[0x12] = *(double *)(lVar36 + 0x50 + lVar38);
      *(undefined1 (*) [16])(unaff_RBP + 8) = auVar75;
      *(int *)(unaff_RBP + 8) = auVar75._0_4_ + iVar32;
      uVar45 = *(uint *)((longlong)unaff_RBP + 0x94);
      unaff_RBP[0xc] = dVar4;
      unaff_RBP[0xd] = dVar5;
      pdVar41 = (double *)(lVar36 + 0x40 + lVar38);
      dVar39 = pdVar41[1];
      unaff_RBP[0x10] = *pdVar41;
      unaff_RBP[0x11] = dVar39;
      fVar73 = (float)*(byte *)((longlong)unaff_RBP + 0x94) * 0.003921569;
      fVar82 = (float)(uVar45 >> 8 & 0xff) * 0.003921569;
      fVar68 = (float)(uVar45 >> 0x18) * 0.003921569;
      if ((cVar12 != '\0') || (0.0 < fVar73)) {
        fVar55 = *(float *)(lVar36 + 8 + lVar38);
        fVar62 = *(float *)(lVar36 + 0xc + lVar38);
        fVar59 = *(float *)(lVar36 + 4 + lVar38);
        fVar57 = fVar55 * *(float *)(unaff_RBP + -0xe) + fVar59 * *(float *)(unaff_RBP + -0xc) +
                 fVar62 * param_6._0_4_;
        fVar60 = fVar55 * *(float *)((longlong)unaff_RBP + -0x6c) +
                 fVar59 * *(float *)((longlong)unaff_RBP + -0x5c) + fVar62 * param_6._4_4_;
        fVar61 = fVar55 * *(float *)(unaff_RBP + -0xd) + fVar59 * *(float *)(unaff_RBP + -0xb) +
                 fVar62 * param_7._0_4_;
        fVar62 = fVar55 * *(float *)((longlong)unaff_RBP + -100) +
                 fVar59 * *(float *)((longlong)unaff_RBP + -0x54) + fVar62 * param_7._4_4_;
        fVar55 = *(float *)(lVar36 + 0x1c + lVar38);
        *(float *)((longlong)unaff_RBP + 0x44) = fVar57;
        *(float *)(unaff_RBP + 9) = fVar60;
        *(float *)((longlong)unaff_RBP + 0x4c) = fVar61;
        *(float *)(unaff_RBP + 10) = fVar62;
        *(float *)((longlong)unaff_RBP + 0x74) = fVar57;
        *(float *)(unaff_RBP + 0xf) = fVar60;
        *(float *)((longlong)unaff_RBP + 0x7c) = fVar61;
        *(float *)(unaff_RBP + 0x10) = fVar62;
        fVar62 = *(float *)(lVar36 + 0x18 + lVar38);
        fVar59 = *(float *)(lVar36 + 0x14 + lVar38);
        fVar57 = *(float *)(lVar36 + 0x28 + lVar38);
        auVar58._0_4_ =
             fVar62 * *(float *)(unaff_RBP + -0xe) + fVar59 * *(float *)(unaff_RBP + -0xc) +
             fVar55 * param_6._0_4_;
        auVar58._4_4_ =
             fVar62 * *(float *)((longlong)unaff_RBP + -0x6c) +
             fVar59 * *(float *)((longlong)unaff_RBP + -0x5c) + fVar55 * param_6._4_4_;
        auVar58._8_4_ =
             fVar62 * *(float *)(unaff_RBP + -0xd) + fVar59 * *(float *)(unaff_RBP + -0xb) +
             fVar55 * param_7._0_4_;
        auVar58._12_4_ =
             fVar62 * *(float *)((longlong)unaff_RBP + -100) +
             fVar59 * *(float *)((longlong)unaff_RBP + -0x54) + fVar55 * param_7._4_4_;
        fVar55 = *(float *)(lVar36 + 0x24 + lVar38);
        fVar62 = *(float *)(lVar36 + 0x2c + lVar38);
        *(undefined1 (*) [16])((longlong)unaff_RBP + 0x54) = auVar58;
        *(float *)((longlong)unaff_RBP + 100) =
             fVar57 * *(float *)(unaff_RBP + -0xe) + fVar55 * *(float *)(unaff_RBP + -0xc) +
             fVar62 * param_6._0_4_;
        *(float *)(unaff_RBP + 0xd) =
             fVar57 * *(float *)((longlong)unaff_RBP + -0x6c) +
             fVar55 * *(float *)((longlong)unaff_RBP + -0x5c) + fVar62 * param_6._4_4_;
        *(float *)((longlong)unaff_RBP + 0x6c) =
             fVar57 * *(float *)(unaff_RBP + -0xd) + fVar55 * *(float *)(unaff_RBP + -0xb) +
             fVar62 * param_7._0_4_;
        *(float *)(unaff_RBP + 0xe) =
             fVar57 * *(float *)((longlong)unaff_RBP + -100) +
             fVar55 * *(float *)((longlong)unaff_RBP + -0x54) + fVar62 * param_7._4_4_;
        fVar55 = param_9._4_4_;
      }
      else {
        puVar2 = (undefined8 *)(lVar36 + 4 + lVar38);
        uVar25 = *puVar2;
        uVar26 = puVar2[1];
        puVar2 = (undefined8 *)(lVar36 + 0x24 + lVar38);
        uVar27 = *puVar2;
        uVar28 = puVar2[1];
        *(undefined8 *)((longlong)unaff_RBP + 0x44) = uVar25;
        *(undefined8 *)((longlong)unaff_RBP + 0x4c) = uVar26;
        *(undefined8 *)((longlong)unaff_RBP + 0x74) = uVar25;
        *(undefined8 *)((longlong)unaff_RBP + 0x7c) = uVar26;
        puVar2 = (undefined8 *)(lVar36 + 0x14 + lVar38);
        uVar25 = *puVar2;
        uVar26 = puVar2[1];
        *(undefined8 *)((longlong)unaff_RBP + 100) = uVar27;
        *(undefined8 *)((longlong)unaff_RBP + 0x6c) = uVar28;
        *(undefined8 *)((longlong)unaff_RBP + 0x54) = uVar25;
        *(undefined8 *)((longlong)unaff_RBP + 0x5c) = uVar26;
      }
      if (cVar13 != '\0') {
        auVar75 = *(undefined1 (*) [16])
                   (*(longlong *)((longlong)dVar37 + 0x18) +
                   (longlong)*(int *)(lVar36 + lVar38) * 0x10);
        param_5._8_4_ = auVar75._8_4_;
        if ((cVar12 == '\0') && (fVar73 <= 0.0)) {
          param_5._8_4_ = (float)param_5._8_4_ + fVar82 * *(float *)(lVar36 + 0x3c + lVar38);
        }
        fVar68 = ((float)param_5._8_4_ - fVar76) / (fVar63 - fVar76);
        param_5 = auVar75;
        if (0.0 <= fVar68) {
          if (1.0 <= fVar68) {
            fVar68 = 1.0;
          }
        }
        else {
          fVar68 = 0.0;
        }
      }
      lVar38 = unaff_RSI[1];
      uVar33 = (uint)(longlong)(fVar56 * fVar68 * 256.0);
      uVar49 = 0xff;
      if (uVar33 < 0xff) {
        uVar49 = uVar33;
      }
      uVar33 = (uint)(longlong)((float)(uVar45 >> 0x10 & 0xff) * 0.003921569 * fVar55 * 256.0);
      uVar45 = 0xff;
      if (uVar33 < 0xff) {
        uVar45 = uVar33;
      }
      iVar34 = *(int *)(lVar38 + 100);
      uVar43 = (uint)(longlong)((float)uVar16 * fVar82 * 256.0);
      uVar33 = 0xff;
      if (uVar43 < 0xff) {
        uVar33 = uVar43;
      }
      uVar48 = (uint)(longlong)((float)uVar17 * fVar73 * 256.0);
      uVar43 = 0xff;
      if (uVar48 < 0xff) {
        uVar43 = uVar48;
      }
      iVar35 = *(int *)(lVar38 + 0x60);
      *(uint *)((longlong)unaff_RBP + 0x94) = ((uVar49 << 8 | uVar45) << 8 | uVar33) << 8 | uVar43;
      if (iVar34 <= iVar35) {
        if (iVar34 < 2) {
          iVar34 = 8;
        }
        else {
          iVar34 = (iVar34 >> 1) + iVar34;
        }
        *(int *)(lVar38 + 100) = iVar34;
        FUN_180086010(lVar38 + 0x60);
        iVar35 = *(int *)(lVar38 + 0x60);
        fVar55 = param_9._4_4_;
      }
      dVar39 = unaff_RBP[9];
      uVar52 = uVar52 + 1;
      dVar4 = unaff_RBP[10];
      dVar5 = unaff_RBP[0xb];
      lVar51 = (longlong)iVar35 * 0x5c;
      lVar36 = *(longlong *)(lVar38 + 0x68);
      *(double *)(lVar51 + lVar36) = unaff_RBP[8];
      ((double *)(lVar51 + lVar36))[1] = dVar39;
      dVar39 = unaff_RBP[0xc];
      dVar6 = unaff_RBP[0xd];
      pdVar41 = (double *)(lVar51 + 0x10 + lVar36);
      *pdVar41 = dVar4;
      pdVar41[1] = dVar5;
      dVar4 = unaff_RBP[0xe];
      dVar5 = unaff_RBP[0xf];
      pdVar41 = (double *)(lVar51 + 0x20 + lVar36);
      *pdVar41 = dVar39;
      pdVar41[1] = dVar6;
      uVar18 = *(undefined4 *)(unaff_RBP + 0x10);
      uVar19 = *(undefined4 *)((longlong)unaff_RBP + 0x84);
      uVar23 = *(undefined4 *)(unaff_RBP + 0x11);
      uVar24 = *(undefined4 *)((longlong)unaff_RBP + 0x8c);
      pdVar41 = (double *)(lVar51 + 0x30 + lVar36);
      *pdVar41 = dVar4;
      pdVar41[1] = dVar5;
      dVar39 = unaff_RBP[0x12];
      puVar3 = (undefined4 *)(lVar51 + 0x40 + lVar36);
      *puVar3 = uVar18;
      puVar3[1] = uVar19;
      puVar3[2] = uVar23;
      puVar3[3] = uVar24;
      *(double *)(lVar51 + 0x50 + lVar36) = dVar39;
      *(int *)(lVar51 + 0x58 + lVar36) = (int)param_9;
      *(int *)(lVar38 + 0x60) = *(int *)(lVar38 + 0x60) + 1;
      iVar34 = param_11;
      auVar75 = param_5;
    } while (uVar52 < *(uint *)((longlong)dVar37 + 0x60));
  }
  uVar53 = 0;
  if (*(char *)(unaff_RBP + 0x4d) != '\0') {
    dVar39 = unaff_RBP[-0xf];
    if (*(int *)((longlong)dVar37 + 0x10) == *(int *)((longlong)dVar39 + 200)) {
      uVar47 = uVar53;
      uVar54 = uVar53;
      if (0 < *(int *)((longlong)dVar39 + 200)) {
        do {
          lVar38 = *(longlong *)((longlong)dVar39 + 0xd0);
          lVar36 = unaff_RSI[1];
          piVar46 = (int *)(lVar36 + 200);
          param_6 = *(double *)(uVar47 + lVar38);
          param_7 = ((double *)(uVar47 + lVar38))[1];
          iVar35 = *piVar46;
          iVar32 = *(int *)(lVar36 + 0xcc);
          param_8 = CONCAT13(*(undefined1 *)(uVar47 + 0x13 + lVar38),
                             CONCAT12(*(undefined1 *)(uVar47 + 0x12 + lVar38),
                                      CONCAT11(*(undefined1 *)(uVar47 + 0x11 + lVar38),
                                               *(undefined1 *)(uVar47 + 0x10 + lVar38))));
          if (iVar32 <= iVar35) {
            if (iVar32 < 2) {
              iVar32 = 8;
            }
            else {
              iVar32 = (iVar32 >> 1) + iVar32;
            }
            *(int *)(lVar36 + 0xcc) = iVar32;
            FUN_180085e30(piVar46);
            iVar35 = *piVar46;
          }
          lVar38 = *(longlong *)(lVar36 + 0xd0);
          uVar52 = (int)uVar54 + 1;
          pdVar41 = (double *)(lVar38 + (longlong)iVar35 * 0x14);
          *pdVar41 = param_6;
          pdVar41[1] = param_7;
          *(uint *)(lVar38 + 0x10 + (longlong)iVar35 * 0x14) = param_8;
          *piVar46 = *piVar46 + 1;
          uVar47 = uVar47 + 0x14;
          uVar54 = (ulonglong)uVar52;
        } while ((int)uVar52 < *(int *)((longlong)dVar39 + 200));
      }
    }
    else {
      bStackX_20 = param_4;
      if (param_4 == 0xff) {
        if (*(longlong *)(param_12 + 0x1b0) == 0) {
          lVar38 = param_12 + 0x10;
        }
        else {
          lVar38 = func_0x000180079240();
        }
        puVar44 = &DAT_18098bc73;
        if (*(undefined **)(lVar38 + 8) != (undefined *)0x0) {
          puVar44 = *(undefined **)(lVar38 + 8);
        }
        FUN_180627020(&UNK_180a13d90,puVar44);
        bStackX_20 = 0;
      }
      if ((int)*(char *)(*unaff_RSI + 0xf6) < (char)bStackX_20 + 1) {
        *(byte *)(*unaff_RSI + 0xf6) = bStackX_20 + 1;
      }
      uVar47 = uVar53;
      if (0 < *(int *)((longlong)dVar37 + 0x10)) {
        do {
          lVar38 = unaff_RSI[1];
          piVar46 = (int *)(lVar38 + 200);
          param_6 = 5.26354424712089e-315;
          param_7 = 0.0;
          iVar35 = *(int *)(lVar38 + 0xcc);
          iVar32 = *piVar46;
          param_8 = (uint)bStackX_20;
          if (iVar35 <= iVar32) {
            if (iVar35 < 2) {
              iVar35 = 8;
            }
            else {
              iVar35 = (iVar35 >> 1) + iVar35;
            }
            *(int *)(lVar38 + 0xcc) = iVar35;
            FUN_180085e30(piVar46);
            iVar32 = *piVar46;
          }
          lVar38 = *(longlong *)(lVar38 + 0xd0);
          uVar52 = (int)uVar47 + 1;
          puVar3 = (undefined4 *)(lVar38 + (longlong)iVar32 * 0x14);
          *puVar3 = param_6._0_4_;
          puVar3[1] = param_6._4_4_;
          puVar3[2] = param_7._0_4_;
          puVar3[3] = param_7._4_4_;
          *(uint *)(lVar38 + 0x10 + (longlong)iVar32 * 0x14) = param_8;
          *piVar46 = *piVar46 + 1;
          uVar47 = (ulonglong)uVar52;
        } while ((int)uVar52 < *(int *)((longlong)dVar37 + 0x10));
      }
    }
  }
  bVar29 = false;
  bVar30 = false;
  fVar76 = *(float *)(unaff_RBP + -10) * *(float *)(unaff_RBP + -7);
  if ((*(char *)(*unaff_RSI + 0xff) == '\0') || (*(char *)((longlong)unaff_RBP[6] + 0xff) != '\0'))
  {
    if (0.0 <= (*(float *)(unaff_RBP + -8) * *(float *)(unaff_RBP + -9) - fVar76) *
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
  lVar38 = param_10;
  if (*(int *)(param_10 + 0x88) != 0) {
    do {
      lVar36 = *(longlong *)(lVar38 + 0x90);
      lVar51 = (longlong)(int)uVar53;
      if (bVar29) {
        fVar76 = (float)FUN_180235410(fVar76,*(int *)(lVar36 + lVar51 * 0xc) + iVar34,
                                      *(int *)(lVar36 + 4 + lVar51 * 0xc) + iVar34,
                                      *(int *)(lVar36 + 8 + lVar51 * 0xc) + iVar34);
        lVar38 = param_10;
      }
      if (bVar30) {
        fVar76 = (float)FUN_180235410(fVar76,*(int *)(lVar36 + lVar51 * 0xc) + iVar34,
                                      *(int *)(lVar36 + 8 + lVar51 * 0xc) + iVar34,
                                      *(int *)(lVar36 + 4 + lVar51 * 0xc) + iVar34);
        lVar38 = param_10;
      }
      uVar52 = (int)uVar53 + 1;
      uVar53 = (ulonglong)uVar52;
    } while (uVar52 < *(uint *)(lVar38 + 0x88));
  }
  plVar40 = param_14;
  pdVar41 = param_13;
  dVar37 = unaff_RBP[7];
  *(undefined2 *)(unaff_RSI + 6) = 0x101;
  *(undefined1 *)((longlong)unaff_RSI + 0x32) = 1;
  if (dVar37 == 0.0) {
    if (param_13 != (double *)0x0) {
      FUN_18007f840(param_13);
                    // WARNING: Subroutine does not return
      FUN_18064e900(pdVar41);
    }
    if (param_14 != (longlong *)0x0) {
      FUN_18007f840(param_14);
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar40);
    }
    dVar37 = unaff_RBP[-0x10];
    if (dVar37 != 0.0) {
      FUN_18007f840(dVar37);
                    // WARNING: Subroutine does not return
      FUN_18064e900(dVar37);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050((ulonglong)unaff_RBP[0x28] ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






