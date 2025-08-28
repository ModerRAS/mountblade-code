#include "TaleWorlds.Native.Split.h"

// 03_rendering_part576.c - 1 个函数

// 函数: void FUN_180582ab0(longlong param_1,float param_2)
void FUN_180582ab0(longlong param_1,float param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_2a8 [32];
  code *pcStack_288;
  undefined4 uStack_280;
  undefined4 uStack_278;
  undefined1 *puStack_270;
  longlong lStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  float fStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined1 uStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_20c;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined2 uStack_1da;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b0;
  undefined1 auStack_1a8 [192];
  undefined4 uStack_e8;
  ulonglong uStack_d8;
  
  uStack_1d8 = 0xfffffffffffffffe;
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
  uStack_248 = 0;
  fVar16 = *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x9c) +
           *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0) +
           *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xa4);
  fVar20 = param_2 * param_2 * 0.0001;
  fVar24 = 1.0;
  fVar18 = param_2 * 4.0;
  if (fVar16 <= fVar20) {
    *(undefined8 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  else {
    fVar16 = SQRT(fVar16);
    fVar12 = 1.0 / fVar16;
    fVar15 = (fVar18 + *(float *)(param_1 + 0xac)) * fVar12;
    if (fVar18 <= fVar15) {
      fVar15 = fVar18;
    }
    fVar12 = fVar12 * param_2 * 0.01;
    if (fVar15 <= fVar12) {
      fVar15 = fVar12;
    }
    *(float *)(param_1 + 0xac) = fVar15 * fVar16;
    fVar15 = 1.0 - fVar15;
    fVar12 = fVar15 * *(float *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x9c) = fVar12;
    fVar16 = fVar15 * *(float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0xa0) = fVar16;
    fVar15 = fVar15 * *(float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xa4) = fVar15;
    *(float *)(param_1 + 0x78) = fVar12 * param_2 + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x7c) = fVar16 * param_2 + *(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x80) = fVar15 * param_2 + *(float *)(param_1 + 0x80);
  }
  fVar16 = *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78) +
           *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x7c) +
           *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80);
  if (fVar16 <= fVar20) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  else {
    fVar16 = SQRT(fVar16);
    fVar20 = 1.0 / fVar16;
    fVar15 = (fVar18 + *(float *)(param_1 + 0x88)) * fVar20;
    if (fVar15 <= fVar18) {
      fVar18 = fVar15;
    }
    fVar20 = fVar20 * param_2 * 0.01;
    if (fVar20 <= fVar18) {
      fVar20 = fVar18;
    }
    *(float *)(param_1 + 0x88) = fVar20 * fVar16;
    fVar20 = 1.0 - fVar20;
    *(float *)(param_1 + 0x78) = fVar20 * *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x7c) = fVar20 * *(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x80) = fVar20 * *(float *)(param_1 + 0x80);
  }
  if (param_2 <= 0.0) goto LAB_180583b10;
  if (((*(float *)(param_1 + 0x18) != *(float *)(param_1 + 0x58)) ||
      (*(float *)(param_1 + 0x1c) != *(float *)(param_1 + 0x5c))) ||
     (*(float *)(param_1 + 0x20) != *(float *)(param_1 + 0x60))) {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    fVar20 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x298) * 8) -
                    *(longlong *)(param_1 + 0x290)) * 1e-05;
    fVar18 = (float)fmodf(&DAT_180c8ed30,0x3ca3d70a);
    fVar16 = ((fVar20 - param_2) + 0.02) - fVar18;
    fVar18 = fVar20 - param_2;
    while (fVar15 = fVar16, fVar18 < fVar20) {
      fVar16 = fVar15;
      if (fVar20 < fVar15) {
        fVar16 = fVar20;
      }
      fVar16 = fVar16 - fVar18;
      *(float *)(param_1 + 0x58) = fVar16 * *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x58);
      *(float *)(param_1 + 0x5c) = fVar16 * *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x5c);
      *(float *)(param_1 + 0x60) = fVar16 * *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x60);
      if (fVar20 < fVar15) break;
      fVar18 = *(float *)(param_1 + 0x8c);
      fVar16 = *(float *)(param_1 + 0x90);
      fVar19 = *(float *)(param_1 + 0x94) - 0.19612;
      fVar13 = fVar16 * fVar16 + fVar18 * fVar18 + fVar19 * fVar19;
      auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar12 = auVar17._0_4_;
      fVar12 = fVar12 * 0.5 * (3.0 - fVar13 * fVar12 * fVar12);
      fVar18 = fVar18 * fVar12;
      *(float *)(param_1 + 0x8c) = fVar18;
      fVar16 = fVar12 * fVar16;
      *(float *)(param_1 + 0x90) = fVar16;
      fVar19 = fVar12 * fVar19;
      *(float *)(param_1 + 0x94) = fVar19;
      fVar12 = fVar12 * fVar13;
      fVar12 = fVar12 - fVar12 * fVar12 * *(float *)(*(longlong *)(param_1 + 0xf0) + 0xa4) * 0.02;
      if (0.9999 <= fVar18 * *(float *)(param_1 + 0xb0) + fVar16 * *(float *)(param_1 + 0xb4) +
                    fVar19 * *(float *)(param_1 + 0xb8)) {
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x8c);
        *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x94);
      }
      else {
        fVar25 = 1.0 / (fVar12 * 0.002 + 1.0);
        fVar13 = 1.0 - fVar25;
        fStack_238 = fVar19 * fVar13 + *(float *)(param_1 + 0xb8) * fVar25;
        fStack_23c = fVar16 * fVar13 + *(float *)(param_1 + 0xb4) * fVar25;
        fStack_240 = fVar18 * fVar13 + *(float *)(param_1 + 0xb0) * fVar25;
        uStack_234 = 0x7f7fffff;
        *(float *)(param_1 + 0xb0) = fStack_240;
        *(float *)(param_1 + 0xb4) = fStack_23c;
        *(float *)(param_1 + 0xb8) = fStack_238;
        *(undefined4 *)(param_1 + 0xbc) = 0x7f7fffff;
        fVar18 = *(float *)(param_1 + 0xb4);
        fVar16 = *(float *)(param_1 + 0xb0);
        fVar19 = *(float *)(param_1 + 0xb8);
        fVar13 = fVar19 * fVar19 + fVar16 * fVar16 + fVar18 * fVar18;
        auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar25 = auVar17._0_4_;
        fVar13 = fVar25 * 0.5 * (3.0 - fVar13 * fVar25 * fVar25);
        *(float *)(param_1 + 0xb0) = fVar13 * fVar16;
        *(float *)(param_1 + 0xb4) = fVar13 * fVar18;
        *(float *)(param_1 + 0xb8) = fVar13 * fVar19;
      }
      *(float *)(param_1 + 0x8c) = fVar12 * *(float *)(param_1 + 0x8c);
      *(float *)(param_1 + 0x90) = fVar12 * *(float *)(param_1 + 0x90);
      *(float *)(param_1 + 0x94) = fVar12 * *(float *)(param_1 + 0x94);
      fVar16 = fVar15 + 0.02;
      fVar18 = fVar15;
    }
  }
  else {
    FUN_180585590();
  }
  FUN_180588680(param_1,&fStack_240);
  fVar20 = fStack_238;
  fVar16 = fStack_23c;
  fVar18 = fStack_240;
  if ((*(char *)(param_1 + 200) == '\0') && (*(char *)(param_1 + 0x3d0) == '\x01')) {
    lVar11 = *(longlong *)(param_1 + 0x10);
    fVar19 = *(float *)(lVar11 + 0x98d984) -
             (fStack_238 * 0.23 + *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x60));
    fVar15 = *(float *)(lVar11 + 0x98d980) -
             (fStack_23c * 0.23 + *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x5c));
    fVar12 = *(float *)(lVar11 + 0x98d97c) -
             (*(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78) + fStack_240 * 0.23);
    if ((fVar15 * fStack_23c + fVar12 * fStack_240 + fVar19 * fStack_238 < 0.0) &&
       ((*(undefined1 *)(param_1 + 0x3d0) = 2,
        fVar15 * fVar15 + fVar12 * fVar12 + fVar19 * fVar19 < 400.0 &&
        (iVar5 = *(int *)(*(longlong *)(param_1 + 0xf0) + 0xc4), iVar5 != -1)))) {
      fStack_1d0 = (float)((uint)fStack_1d0 & 0xffffff00);
      fStack_1b0 = 0.0;
      (**(code **)(_DAT_180c8ece0 + 0x210))
                (*(undefined4 *)(lVar11 + 0x98d928),*(undefined4 *)(param_1 + 0xc),&fStack_1d0);
      pcStack_288 = FUN_18004a130;
      FUN_1808fc838(auStack_1a8,0x30,4,FUN_1801c2890);
      uStack_e8 = 0;
      puStack_270 = (undefined1 *)0x0;
      if (0.0 < fStack_1b0) {
        FUN_1801594d0(auStack_1a8,&fStack_1d0);
        puStack_270 = auStack_1a8;
      }
      uStack_280 = *(undefined4 *)(param_1 + 0x2a0);
      fStack_250 = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x60);
      uStack_258 = (longlong *)
                   CONCAT44(*(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x5c),
                            *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78));
      uStack_24c = 0x7f7fffff;
      lStack_268 = param_1 + 0xd0;
      uStack_260 = 0;
      uStack_278 = 0xffffffff;
      pcStack_288 = (code *)((ulonglong)pcStack_288 & 0xffffffffffffff00);
      FUN_1804f83f0(*(undefined8 *)(param_1 + 0x10),iVar5,&uStack_258,1);
      FUN_1808fc8a8(auStack_1a8,0x30,4,FUN_18004a130);
    }
  }
  if ((*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) &&
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xd8))(), cVar8 != '\0')) {
    fStack_250 = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x60);
    uStack_258 = (longlong *)
                 CONCAT44(*(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x5c),
                          *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x58));
    uStack_24c = 0x7f7fffff;
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xa8))
              (*(longlong **)(param_1 + 0xd0),&uStack_258);
  }
  if ((*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) &&
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0xd8))(), cVar8 != '\0')) {
    fStack_250 = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x60);
    uStack_258 = (longlong *)
                 CONCAT44(*(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x5c),
                          *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78));
    uStack_24c = 0x7f7fffff;
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0xa8))
              (*(longlong **)(param_1 + 0xd8),&uStack_258);
    plVar6 = *(longlong **)(param_1 + 0xd8);
    pcVar7 = *(code **)(*plVar6 + 0xe8);
    if (*(char *)(param_1 + 0x3d2) == '\0') {
      uStack_230 = *(undefined8 *)(param_1 + 0x8c);
      uStack_228 = *(undefined8 *)(param_1 + 0x94);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0xa0))
                (*(longlong **)(param_1 + 0xe8),&uStack_230);
    }
    (*pcVar7)(plVar6,&uStack_230);
  }
  plVar6 = *(longlong **)(param_1 + 0x100);
  uStack_258 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  uStack_248 = 0;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  if ((*(byte *)(plVar6 + 0x5d) & 0xb) != 0xb) {
    fVar12 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x5c);
    fVar19 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x58);
    fVar15 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x60);
    if (-1 < *(int *)(param_1 + 0x2a0)) {
      fVar24 = *(float *)(*(longlong *)
                           ((longlong)*(int *)(param_1 + 0x2a0) * 0xa60 + 0x30c0 +
                           *(longlong *)(param_1 + 0x10)) + 0x1d0) * 3.0;
    }
    lVar11 = *(longlong *)(param_1 + 0xf0);
    if (*(int *)(lVar11 + 0x30) < 1) {
LAB_1805834b2:
      fVar13 = 1.6;
    }
    else {
      if (((*(uint *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar11 + 0xd0)
                     ) >> 9 & 1) != 0) && (*(short *)(lVar11 + 8) < 1)) goto LAB_1805834b2;
      fVar13 = (*(float *)(lVar11 + 0x48) + *(float *)(lVar11 + 0x48)) *
               *(float *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x88 +
                         *(longlong *)(lVar11 + 0xd0));
    }
    if ((fVar24 + fVar13) * (fVar24 + fVar13) <= fVar19 * fVar19 + fVar12 * fVar12 + fVar15 * fVar15
       ) {
      FUN_1802ee720(plVar6,1);
    }
  }
  FUN_1805815f0(param_1,&uStack_230,param_1 + 0x58);
  fVar24 = fStack_240;
  fVar15 = (float)uStack_228;
  if (*(int *)(param_1 + 0x2a4) != -1) {
    fVar25 = (float)uStack_230 - *(float *)(param_1 + 0x58);
    fVar13 = uStack_230._4_4_ - *(float *)(param_1 + 0x5c);
    fVar19 = (float)uStack_228 - *(float *)(param_1 + 0x60);
    fVar12 = fVar13 * fVar16 + fVar25 * fVar18 + fVar19 * fVar20;
    fVar26 = (fVar25 - fVar12 * fVar18) + *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x78);
    fVar23 = (fVar13 - fVar12 * fVar16) + *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x7c);
    fVar22 = (fVar19 - fVar12 * fVar20) + *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x80);
    lVar11 = *(longlong *)(param_1 + 0x10);
    fVar19 = *(float *)(lVar11 + 0x98d97c) - fVar26;
    fVar25 = *(float *)(lVar11 + 0x98d980) - fVar23;
    fVar13 = *(float *)(lVar11 + 0x98d984) - fVar22;
    fVar18 = fVar25 * fVar25 + fVar19 * fVar19 + fVar13 * fVar13;
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar12 = auVar17._0_4_;
    fVar18 = fVar12 * 0.5 * (3.0 - fVar18 * fVar12 * fVar12);
    fVar21 = fVar18 * fVar13 * fVar16 - fVar18 * fVar25 * fVar20;
    fVar13 = fVar18 * fVar19 * fVar20 - fVar18 * fVar13 * fStack_240;
    fVar19 = fVar18 * fVar25 * fStack_240 - fVar18 * fVar19 * fVar16;
    fVar18 = fVar13 * fVar13 + fVar21 * fVar21 + fVar19 * fVar19;
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar12 = auVar17._0_4_;
    fVar18 = fVar12 * 0.5 * (3.0 - fVar18 * fVar12 * fVar12);
    fStack_240 = fVar18 * fVar21 * 0.04;
    fStack_23c = fVar18 * fVar13 * 0.04;
    fStack_238 = fVar18 * fVar19 * 0.04;
    uStack_258 = (longlong *)CONCAT44(fVar23 - fStack_23c,fVar26 - fStack_240);
    fStack_250 = fVar22 - fStack_238;
    uStack_24c = 0x7f7fffff;
    fStack_240 = fVar26 + fStack_240;
    fStack_23c = fStack_23c + fVar23;
    fStack_238 = fStack_238 + fVar22;
    uStack_234 = 0x7f7fffff;
    pfVar1 = (float *)(*(longlong *)(lVar11 + 0x18) + 0x8250);
    if (0.01 < *pfVar1 || *pfVar1 == 0.01) {
      FUN_1802e5ad0(*(longlong *)(lVar11 + 0x18) + 0x8228,*(int *)(param_1 + 0x2a4),&uStack_258,
                    &fStack_240);
    }
  }
  if ((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) {
    if ((-100.0 < fVar15) && (fVar15 < 2521.0)) {
      uVar9 = FUN_1801b4cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
      cVar8 = FUN_18063e7e0(uVar9,&uStack_230);
      if (cVar8 != '\0') {
        FUN_1805817b0(param_1,&fStack_1d0);
        lVar11 = param_1 + 0x3d4;
        uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
        uVar4 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x87b3b0);
        fVar18 = (float)FUN_1801a5620(uVar9,param_1 + 0x58,uVar4);
        if (fVar18 <= -100.0) {
          fVar18 = -100.0;
        }
        fVar15 = *(float *)(param_1 + 0x60);
        auVar17._0_8_ = FUN_1801a5620(uVar9,param_1 + 0x68,uVar4);
        auVar17._8_8_ = extraout_XMM0_Qb;
        if (fVar15 <= fVar18) {
          if ((float)auVar17._0_8_ <= -100.0) {
            auVar14._4_12_ = auVar17._4_12_;
            auVar14._0_4_ = 0xc2c80000;
            auVar17._0_8_ = auVar14._0_8_;
          }
          if ((float)auVar17._0_8_ < *(float *)(param_1 + 0x70) ||
              (float)auVar17._0_8_ == *(float *)(param_1 + 0x70)) {
            fVar18 = (fVar18 - *(float *)(param_1 + 0x60)) / fVar20;
            fVar24 = fVar18 * fVar24 + *(float *)(param_1 + 0x58);
            fVar16 = fVar18 * fVar16 + *(float *)(param_1 + 0x5c);
            uStack_230 = CONCAT44(fVar16,fVar24);
            uStack_228 = CONCAT44(0x7f7fffff,fVar18 * fVar20 + *(float *)(param_1 + 0x60));
            fVar18 = (float)FUN_1801a5620(uVar9,&uStack_230,uVar4);
            if (fVar18 <= -100.0) {
              fVar18 = -100.0;
            }
            uStack_1e4 = 0xffffffff;
            uStack_1e0 = 0xffffffff;
            uStack_1dc = 0xff;
            uStack_1f0 = 2;
            uStack_20c = 0x7f7fffff;
            uStack_1e8 = *(undefined4 *)(*(longlong *)(_DAT_180c8aa00 + 0x20) + 100);
            uStack_1f8 = 0;
            lVar10 = (longlong)*(int *)(param_1 + 0xbd4) * 0x40;
            pfVar1 = (float *)(lVar10 + lVar11);
            *pfVar1 = fVar24;
            pfVar1[1] = fVar16;
            pfVar1[2] = fVar18;
            pfVar1[3] = 3.4028235e+38;
            puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar11);
            *puVar2 = 0;
            puVar2[1] = 0x3f800000;
            puVar3 = (undefined4 *)(lVar10 + 0x20 + lVar11);
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 2;
            puVar3[3] = 0x7149f2ca;
            puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar11);
            *puVar2 = CONCAT44(0xffffffff,uStack_1e8);
            puVar2[1] = CONCAT26(uStack_1da,0xffffffffff);
            *(int *)(param_1 + 0xbd4) = *(int *)(param_1 + 0xbd4) + 1;
          }
        }
        FUN_18057f420(param_1,&fStack_1d0,lVar11);
        if (-1 < *(int *)(param_1 + 0x2a0)) {
          fVar12 = fStack_1c0 - *(float *)(param_1 + 0x18);
          fVar18 = fStack_1bc - *(float *)(param_1 + 0x1c);
          fVar19 = fStack_1b8 - *(float *)(param_1 + 0x20);
          fVar20 = fStack_1c0 - fStack_1d0;
          fVar24 = fStack_1bc - fStack_1cc;
          fVar15 = fStack_1b8 - fStack_1c8;
          fVar16 = fVar24 * fVar24 + fVar20 * fVar20 + fVar15 * fVar15;
          if (fVar18 * fVar18 + fVar12 * fVar12 + fVar19 * fVar19 < fVar16) {
            auVar17 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
            fVar13 = auVar17._0_4_;
            fVar13 = fVar13 * 0.5 * (3.0 - fVar16 * fVar13 * fVar13);
            fVar18 = fVar18 * fVar24 * fVar13 + fVar12 * fVar20 * fVar13 + fVar19 * fVar15 * fVar13;
            if (fVar18 < fVar16 * fVar13) {
              fStack_1d0 = fStack_1c0 - fVar20 * fVar13 * fVar18;
              fStack_1cc = fStack_1bc - fVar24 * fVar13 * fVar18;
              fStack_1c8 = fStack_1b8 - fVar15 * fVar13 * fVar18;
              uStack_1c4 = 0x7f7fffff;
            }
          }
        }
        FUN_1805800a0(param_1,&fStack_1d0,lVar11);
        lVar10 = (longlong)*(int *)(param_1 + 0xbd4) * 0x40;
        FUN_180587800(lVar11,lVar10 + lVar11,lVar10 >> 6,uStack_244);
        goto LAB_180583b10;
      }
    }
    uStack_1f8 = 0;
    uStack_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xff;
    uStack_1f0 = 7;
    lVar11 = (longlong)*(int *)(param_1 + 0xbd4) * 0x40;
    puVar2 = (undefined8 *)(lVar11 + 0x3d4 + param_1);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar11 + 0x3e4 + param_1);
    *puVar2 = 0;
    puVar2[1] = 0x3f800000;
    puVar3 = (undefined4 *)(lVar11 + 0x3f4 + param_1);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 7;
    puVar3[3] = 0x7149f2ca;
    puVar2 = (undefined8 *)(lVar11 + 0x404 + param_1);
    *puVar2 = 0xffffffffffffffff;
    puVar2[1] = CONCAT26(uStack_1da,0xffffffffff);
    *(int *)(param_1 + 0xbd4) = *(int *)(param_1 + 0xbd4) + 1;
  }
LAB_180583b10:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_2a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



