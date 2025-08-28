#include "TaleWorlds.Native.Split.h"

// 03_rendering_part090.c - 6 个函数

// 函数: void FUN_18031ce00(code *param_1,code *param_2)
void FUN_18031ce00(code *param_1,code *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  code **ppcVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_268 [32];
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined4 uStack_210;
  undefined1 auStack_208 [8];
  code **ppcStack_200;
  code **ppcStack_1f8;
  code *pcStack_1f0;
  code *pcStack_1e8;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined2 uStack_1da;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  code *apcStack_1c8 [2];
  undefined *puStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  longlong *plStack_198;
  undefined *puStack_190;
  longlong lStack_188;
  undefined4 uStack_180;
  ulonglong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  undefined8 uStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint auStack_130 [2];
  undefined8 uStack_128;
  undefined1 auStack_120 [32];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong *plStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  ppcVar8 = (code **)0x0;
  FUN_1802c22a0(auStack_208,&UNK_180a1adf0);
  puStack_148 = &UNK_1809fcc58;
  pcStack_140 = (code *)auStack_130;
  auStack_130[0] = auStack_130[0] & 0xffffff00;
  uStack_138 = 0x13;
  uVar10 = strcpy_s(auStack_130,0x40,&UNK_180a1add8);
  uStack_210 = 1;
  uStack_218 = 1;
  uStack_220 = 0;
  uStack_228 = 6;
  uStack_230 = 0x10;
  uStack_238 = 0x21;
  uStack_240 = 0;
  uStack_248 = CONCAT44(uStack_248._4_4_,4);
  FUN_1800b0a10(uVar10,&pcStack_1f0,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xa0),
                &puStack_148);
  puStack_148 = &UNK_18098bcb0;
  lVar9 = *(longlong *)(param_1 + 0x88);
  if ((*(char *)(*(longlong *)(lVar9 + 0x60c48) + 0x331d) == '\0') &&
     (*(int *)(lVar9 + 0x60c40) != -1)) {
    lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x60c20) + (longlong)*(int *)(lVar9 + 0x60c40) * 8);
    if (*(longlong *)(lVar9 + 0x40) == 0) {
      lVar9 = *(longlong *)(lVar9 + 0x128);
    }
    else {
      lVar9 = *(longlong *)(lVar9 + 0x28);
    }
    if (lVar9 != 0) {
      pcStack_1e8 = (code *)0x0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      puStack_e8 = &UNK_1809fcc28;
      puStack_e0 = auStack_d0;
      auStack_d0[0] = 0;
      uStack_d8 = 0x18;
      strcpy_s(auStack_d0,0x80,&UNK_180a0db08);
      plVar6 = (longlong *)FUN_1800b31f0(_DAT_180c86930,&ppcStack_1f8,&puStack_e8,1);
      puStack_1b8 = (undefined *)*plVar6;
      if (ppcStack_1f8 != (code **)0x0) {
        (**(code **)(*ppcStack_1f8 + 0x38))();
      }
      puStack_e8 = &UNK_18098bcb0;
      plStack_198 = (longlong *)0x0;
      puStack_190 = &UNK_180a3c3e0;
      uStack_178 = 0;
      lStack_188 = 0;
      uStack_180 = 0;
      plStack_160 = (longlong *)0x0;
      uVar5 = CONCAT26(uStack_1da,CONCAT24(uStack_1dc,uStack_1e0));
      pcStack_1b0 = pcStack_1e8;
      uStack_1a0 = 2;
      uStack_170 = 0;
      uStack_168 = 0;
      uVar2 = *(undefined8 *)(puStack_1b8 + 0x15b8);
      ppcStack_200 = (code **)&puStack_148;
      uStack_1a8._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      pcStack_140 = pcStack_1e8;
      uStack_138 = uStack_1e0;
      uStack_134 = uStack_1a8._4_4_;
      auStack_130[0] = 2;
      uStack_128 = 0;
      uStack_1a8 = uVar5;
      puStack_148 = puStack_1b8;
      FUN_180627ae0(auStack_120,&puStack_190);
      uStack_100 = (undefined4)uStack_170;
      uStack_fc = uStack_170._4_4_;
      uStack_f8 = (undefined4)uStack_168;
      uStack_f4 = uStack_168._4_4_;
      plStack_f0 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        (**(code **)(*plStack_160 + 0x28))();
      }
      lVar7 = FUN_180299eb0(uVar2,0,&puStack_148,auStack_208);
      lVar3 = _DAT_180c86938;
      *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1d88) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x30b0);
      uVar10 = powf(0x40000000,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x320c));
      *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1d58) = uVar10;
      FUN_18029fc10(*(longlong *)(lVar3 + 0x1cd8),*(undefined8 *)(lVar3 + 0x1c88),
                    *(longlong *)(lVar3 + 0x1cd8) + 0x1be0,0x230);
      lVar3 = *(longlong *)(_DAT_180c86938 + 0x1c88);
      plVar6 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      pcVar4 = *(code **)(*plVar6 + 0x238);
      *(undefined4 *)(lVar3 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
      (*pcVar4)(plVar6,2,1,lVar3 + 0x10);
      lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if ((lVar7 != 0) && (*(longlong *)(lVar3 + 0x82a0) != (longlong)**(int **)(lVar7 + 0x10))) {
        (**(code **)(**(longlong **)(lVar3 + 0x8400) + 0x228))
                  (*(longlong **)(lVar3 + 0x8400),*(undefined8 *)(*(int **)(lVar7 + 0x10) + 6),0,0);
        *(longlong *)(lVar3 + 0x82a0) = (longlong)**(int **)(lVar7 + 0x10);
      }
      uStack_248 = CONCAT44(uStack_248._4_4_,0xffffffff);
      FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,lVar9,0x20);
      lVar9 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      if (pcStack_1f0 != (code *)0x0) {
        *(undefined4 *)(pcStack_1f0 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
        ppcVar8 = *(code ***)(pcStack_1f0 + 0x20);
      }
      plVar6 = *(longlong **)(lVar9 + 0x8400);
      uStack_248 = 0;
      ppcStack_1f8 = ppcVar8;
      (**(code **)(*plVar6 + 0x220))(plVar6,1,1,&ppcStack_1f8);
      plVar6 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
      (**(code **)(*plVar6 + 0x148))(plVar6,1,1,1);
      puStack_148 = &UNK_1809fcc58;
      pcStack_140 = (code *)auStack_130;
      auStack_130[0] = auStack_130[0] & 0xffffff00;
      uStack_138 = 0x1b;
      uVar10 = strcpy_s(auStack_130,0x40,&UNK_180a1adb8);
      uStack_210 = 1;
      uStack_218 = 1;
      uStack_220 = 0;
      uStack_228 = 6;
      uStack_230 = 0x10;
      uStack_238 = 0x21;
      uStack_240 = 2;
      uStack_248 = CONCAT44(uStack_248._4_4_,0x10);
      FUN_1800b0a10(uVar10,apcStack_1c8,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xa0),
                    &puStack_148);
      puStack_148 = &UNK_18098bcb0;
      ppcVar8 = (code **)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3);
      pcVar4 = apcStack_1c8[0];
      ppcVar8[1] = (code *)0x0;
      ppcVar8[2] = (code *)0x0;
      ppcVar8[3] = (code *)0x0;
      ppcVar8[4] = (code *)0x0;
      ppcVar8[5] = (code *)0x0;
      ppcVar8[6] = (code *)0x0;
      ppcVar8[7] = (code *)0x0;
      ppcVar8[8] = (code *)0x0;
      *ppcVar8 = (code *)0x0;
      ppcVar8[1] = (code *)0x0;
      ppcVar8[2] = (code *)0x0;
      ppcStack_200 = (code **)apcStack_1c8[0];
      ppcStack_1f8 = ppcVar8;
      if (apcStack_1c8[0] != (code *)0x0) {
        (**(code **)(*(longlong *)apcStack_1c8[0] + 0x28))(apcStack_1c8[0]);
      }
      ppcStack_200 = (code **)*ppcVar8;
      *ppcVar8 = pcVar4;
      if (ppcStack_200 != (code **)0x0) {
        (**(code **)((longlong)*ppcStack_200 + 0x38))();
      }
      pcVar4 = pcStack_1f0;
      ppcStack_200 = (code **)pcStack_1f0;
      if (pcStack_1f0 != (code *)0x0) {
        (**(code **)(*(longlong *)pcStack_1f0 + 0x28))(pcStack_1f0);
      }
      ppcStack_200 = (code **)ppcVar8[1];
      ppcVar8[1] = pcVar4;
      if (ppcStack_200 != (code **)0x0) {
        (**(code **)((longlong)*ppcStack_200 + 0x38))();
      }
      if (param_1 != (code *)0x0) {
        ppcStack_200 = (code **)param_1;
        (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      }
      ppcStack_200 = (code **)ppcVar8[2];
      ppcVar8[2] = param_1;
      if (ppcStack_200 != (code **)0x0) {
        (**(code **)((longlong)*ppcStack_200 + 0x38))();
      }
      *(undefined4 *)(ppcVar8 + 4) = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x30cc);
      ppcVar8[3] = param_2;
      ppcStack_200 = &pcStack_1e8;
      pcStack_1d8 = (code *)&UNK_1802e4bc0;
      puStack_1d0 = &UNK_1800ee4c0;
      pcStack_1e8 = FUN_18031ccb0;
      ppcStack_1f8 = &pcStack_1e8;
      (*(code *)&UNK_1800ee4c0)(ppcVar8,&pcStack_1e8);
      if (pcStack_1d8 != (code *)0x0) {
        (*pcStack_1d8)(&pcStack_1e8,0,0);
      }
      if (apcStack_1c8[0] != (code *)0x0) {
        (**(code **)(*(longlong *)apcStack_1c8[0] + 0x38))();
      }
      if (plStack_160 != (longlong *)0x0) {
        (**(code **)(*plStack_160 + 0x38))();
      }
      ppcStack_200 = (code **)&puStack_190;
      puStack_190 = &UNK_180a3c3e0;
      if (lStack_188 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_188 = 0;
      uStack_178 = uStack_178 & 0xffffffff00000000;
      puStack_190 = &UNK_18098bcb0;
      if (plStack_198 != (longlong *)0x0) {
        (**(code **)(*plStack_198 + 0x38))();
      }
      goto LAB_18031d4d2;
    }
  }
  iVar1 = *(int *)(param_2 + 0x4c);
  *(int *)(param_2 + 0x4c) = iVar1 + 1;
  if (iVar1 + 1 == 0x18) {
    *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
  }
LAB_18031d4d2:
  if (pcStack_1f0 != (code *)0x0) {
    (**(code **)(*(longlong *)pcStack_1f0 + 0x38))();
  }
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031d520(longlong *param_1)
void FUN_18031d520(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  float fVar18;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float afStack_88 [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_60 [10];
  ulonglong uStack_38;
  ulonglong uVar17;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1cd8) + 0x198))
            (*(longlong **)(_DAT_180c86938 + 0x1cd8),*param_1,param_1[1]);
  lVar15 = *param_1;
  uVar13 = 0;
  lVar3 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  *(undefined4 *)(lVar15 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  plVar4 = *(longlong **)(lVar3 + 0x8400);
  puStack_b0 = &uStack_a8;
  uStack_b8 = 0;
  iVar12 = (**(code **)(*plVar4 + 0x70))(plVar4,*(undefined8 *)(lVar15 + 0x10),0,1);
  if (iVar12 < 0) {
    FUN_180220810(iVar12,&UNK_180a17358);
  }
  lVar15 = param_1[2];
  uVar11 = uStack_a8[1];
  *(undefined8 *)(lVar15 + 0x2a8) = *uStack_a8;
  *(undefined8 *)(lVar15 + 0x2b0) = uVar11;
  uVar11 = uStack_a8[3];
  *(undefined8 *)(lVar15 + 0x2b8) = uStack_a8[2];
  *(undefined8 *)(lVar15 + 0x2c0) = uVar11;
  uVar6 = *(undefined4 *)((longlong)uStack_a8 + 0x24);
  uVar7 = *(undefined4 *)(uStack_a8 + 5);
  uVar8 = *(undefined4 *)((longlong)uStack_a8 + 0x2c);
  *(undefined4 *)(lVar15 + 0x2c8) = *(undefined4 *)(uStack_a8 + 4);
  *(undefined4 *)(lVar15 + 0x2cc) = uVar6;
  *(undefined4 *)(lVar15 + 0x2d0) = uVar7;
  *(undefined4 *)(lVar15 + 0x2d4) = uVar8;
  lVar3 = _DAT_180c86938;
  uVar6 = *(undefined4 *)((longlong)uStack_a8 + 0x34);
  uVar7 = *(undefined4 *)(uStack_a8 + 7);
  uVar8 = *(undefined4 *)((longlong)uStack_a8 + 0x3c);
  *(undefined4 *)(lVar15 + 0x2d8) = *(undefined4 *)(uStack_a8 + 6);
  *(undefined4 *)(lVar15 + 0x2dc) = uVar6;
  *(undefined4 *)(lVar15 + 0x2e0) = uVar7;
  *(undefined4 *)(lVar15 + 0x2e4) = uVar8;
  lVar15 = *param_1;
  plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x1cd8) + 0x8400);
  pcVar5 = *(code **)(*plVar4 + 0x78);
  *(undefined4 *)(lVar15 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  (*pcVar5)(plVar4,*(undefined8 *)(lVar15 + 0x10),0);
  fVar2 = *(float *)((longlong)param_1 + 0x24);
  fVar9 = *(float *)(param_1 + 5);
  fVar10 = *(float *)((longlong)param_1 + 0x2c);
  lVar15 = param_1[2];
  uVar11 = *(undefined8 *)((longlong)param_1 + 0x34);
  uStack_a0 = *(undefined8 *)((longlong)param_1 + 0x3c);
  afStack_88[0] = 0.2820948;
  afStack_88[1] = fVar9 * -0.48860252;
  afStack_88[2] = fVar10 * 0.48860252;
  fStack_78 = fVar9 * 1.0925485 * fVar2;
  afStack_88[3] = fVar2 * -0.48860252;
  fStack_74 = fVar9 * -1.0925485 * fVar10;
  fStack_6c = fVar2 * -1.0925485 * fVar10;
  fVar18 = 0.94391274;
  fStack_70 = (fVar10 * 3.0 * fVar10 - 1.0) * 0.31539157;
  afStack_60[0] = 0.94391274;
  afStack_60[1] = 0.94391274;
  afStack_60[2] = 0.94391274;
  afStack_60[3] = 0.94391274;
  afStack_60[4] = 0.94391274;
  afStack_60[5] = 0.94391274;
  afStack_60[6] = 0.94391274;
  afStack_60[7] = 0.94391274;
  afStack_60[8] = 0.94391274;
  fStack_68 = (fVar2 * fVar2 - fVar9 * fVar9) * 0.31539157;
  if (0 < *(int *)(lVar15 + 0x78)) {
    uStack_a8._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
    uStack_a8._0_4_ = (float)uVar11;
    uStack_8c = 0x7f7fffff;
    uVar14 = uVar13;
    uVar17 = uVar13;
    do {
      fVar2 = *(float *)((longlong)afStack_88 + uVar13);
      fVar18 = *(float *)((longlong)afStack_60 + uVar13);
      uVar13 = uVar13 + 4;
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      fStack_98 = (float)uStack_a8 * fVar2 * fVar18;
      fStack_94 = uStack_a8._4_4_ * fVar2 * fVar18;
      fStack_90 = (float)uStack_a0 * fVar2 * fVar18;
      pfVar1 = (float *)(uVar14 + 0x338 + lVar15);
      *pfVar1 = fStack_98;
      pfVar1[1] = fStack_94;
      pfVar1[2] = fStack_90;
      pfVar1[3] = 3.4028235e+38;
      lVar15 = param_1[2];
      uVar14 = uVar14 + 0x10;
    } while ((int)uVar16 < *(int *)(lVar15 + 0x78));
  }
  lVar15 = param_1[3];
  *(int *)(lVar15 + 0x4c) = *(int *)(lVar15 + 0x4c) + 1;
  if (*(int *)(lVar15 + 0x4c) == 0x18) {
    *(undefined4 *)(lVar15 + 0x5c) = 0xffffffff;
  }
  uStack_a8 = (undefined8 *)uVar11;
  FUN_18031ef50(param_1,fVar18);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031d54b(void)
void FUN_18031d54b(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  longlong in_RAX;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  longlong in_R11;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  ulonglong uVar20;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  *(undefined4 *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  (**(code **)(**(longlong **)(in_RAX + 0x1cd8) + 0x198))
            (*(longlong **)(in_RAX + 0x1cd8),*unaff_RDI,unaff_RDI[1]);
  lVar18 = *unaff_RDI;
  uVar16 = 0;
  lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  *(undefined4 *)(lVar18 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  plVar6 = *(longlong **)(lVar5 + 0x8400);
  iVar15 = (**(code **)(*plVar6 + 0x70))(plVar6,*(undefined8 *)(lVar18 + 0x10),0,1,0);
  if (iVar15 < 0) {
    FUN_180220810(iVar15,&UNK_180a17358);
  }
  lVar18 = unaff_RDI[2];
  puVar7 = *(undefined8 **)(unaff_RBP + -0x49);
  uVar13 = puVar7[1];
  *(undefined8 *)(lVar18 + 0x2a8) = *puVar7;
  *(undefined8 *)(lVar18 + 0x2b0) = uVar13;
  uVar13 = puVar7[3];
  *(undefined8 *)(lVar18 + 0x2b8) = puVar7[2];
  *(undefined8 *)(lVar18 + 0x2c0) = uVar13;
  uVar9 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uVar10 = *(undefined4 *)(puVar7 + 5);
  uVar11 = *(undefined4 *)((longlong)puVar7 + 0x2c);
  *(undefined4 *)(lVar18 + 0x2c8) = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)(lVar18 + 0x2cc) = uVar9;
  *(undefined4 *)(lVar18 + 0x2d0) = uVar10;
  *(undefined4 *)(lVar18 + 0x2d4) = uVar11;
  lVar5 = _DAT_180c86938;
  uVar9 = *(undefined4 *)((longlong)puVar7 + 0x34);
  uVar10 = *(undefined4 *)(puVar7 + 7);
  uVar11 = *(undefined4 *)((longlong)puVar7 + 0x3c);
  *(undefined4 *)(lVar18 + 0x2d8) = *(undefined4 *)(puVar7 + 6);
  *(undefined4 *)(lVar18 + 0x2dc) = uVar9;
  *(undefined4 *)(lVar18 + 0x2e0) = uVar10;
  *(undefined4 *)(lVar18 + 0x2e4) = uVar11;
  lVar18 = *unaff_RDI;
  plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x1cd8) + 0x8400);
  pcVar8 = *(code **)(*plVar6 + 0x78);
  *(undefined4 *)(lVar18 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  (*pcVar8)(plVar6,*(undefined8 *)(lVar18 + 0x10),0);
  fVar2 = *(float *)((longlong)unaff_RDI + 0x24);
  fVar3 = *(float *)(unaff_RDI + 5);
  fVar21 = *(float *)((longlong)unaff_RDI + 0x2c);
  lVar18 = unaff_RDI[2];
  uVar13 = *(undefined8 *)((longlong)unaff_RDI + 0x34);
  uVar14 = *(undefined8 *)((longlong)unaff_RDI + 0x3c);
  *(undefined4 *)(unaff_RBP + -0x29) = 0x3e906ebb;
  *(undefined8 *)(unaff_RBP + -0x49) = uVar13;
  *(undefined8 *)(unaff_RBP + -0x41) = uVar14;
  *(float *)(unaff_RBP + -0x25) = fVar3 * -0.48860252;
  *(float *)(unaff_RBP + -0x21) = fVar21 * 0.48860252;
  *(float *)(unaff_RBP + -0x19) = fVar3 * 1.0925485 * fVar2;
  *(float *)(unaff_RBP + -0x1d) = fVar2 * -0.48860252;
  *(float *)(unaff_RBP + -0x15) = fVar3 * -1.0925485 * fVar21;
  *(float *)(unaff_RBP + -0xd) = fVar2 * -1.0925485 * fVar21;
  fVar22 = 0.94391274;
  *(float *)(unaff_RBP + -0x11) = (fVar21 * 3.0 * fVar21 - 1.0) * 0.31539157;
  *(undefined4 *)(unaff_RBP + -1) = 0x3f71a444;
  *(undefined4 *)(unaff_RBP + 3) = 0x3f71a444;
  *(undefined4 *)(unaff_RBP + 7) = 0x3f71a444;
  *(undefined4 *)(unaff_RBP + 0xb) = 0x3f71a444;
  *(undefined4 *)(unaff_RBP + 0xf) = 0x3f71a444;
  *(undefined4 *)(unaff_RBP + 0x13) = 0x3f71a444;
  *(undefined4 *)(unaff_RBP + 0x17) = 0x3f71a444;
  *(undefined4 *)(unaff_RBP + 0x1b) = 0x3f71a444;
  fVar21 = 0.94391274;
  *(undefined4 *)(unaff_RBP + 0x1f) = 0x3f71a444;
  *(float *)(unaff_RBP + -9) = (fVar2 * fVar2 - fVar3 * fVar3) * 0.31539157;
  if (0 < *(int *)(lVar18 + 0x78)) {
    fVar2 = *(float *)(unaff_RBP + -0x41);
    fVar3 = *(float *)(unaff_RBP + -0x45);
    fVar4 = *(float *)(unaff_RBP + -0x49);
    *(undefined4 *)(unaff_RBP + -0x2d) = 0x7f7fffff;
    uVar17 = uVar16;
    uVar20 = uVar16;
    do {
      fVar24 = *(float *)(unaff_RBP + -0x29 + uVar16);
      fVar22 = *(float *)(unaff_RBP + -1 + uVar16);
      uVar16 = uVar16 + 4;
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      fVar12 = *(float *)(unaff_RBP + -0x2d);
      fVar21 = fVar4 * fVar24 * fVar22;
      fVar23 = fVar3 * fVar24 * fVar22;
      fVar24 = fVar2 * fVar24 * fVar22;
      pfVar1 = (float *)(uVar17 + 0x338 + lVar18);
      *pfVar1 = fVar21;
      pfVar1[1] = fVar23;
      pfVar1[2] = fVar24;
      pfVar1[3] = fVar12;
      lVar18 = unaff_RDI[2];
      *(float *)(unaff_RBP + -0x39) = fVar21;
      *(float *)(unaff_RBP + -0x35) = fVar23;
      *(float *)(unaff_RBP + -0x31) = fVar24;
      *(float *)(unaff_RBP + -0x2d) = fVar12;
      uVar17 = uVar17 + 0x10;
    } while ((int)uVar19 < *(int *)(lVar18 + 0x78));
  }
  lVar18 = unaff_RDI[3];
  *(int *)(lVar18 + 0x4c) = *(int *)(lVar18 + 0x4c) + 1;
  if (*(int *)(lVar18 + 0x4c) == 0x18) {
    *(undefined4 *)(lVar18 + 0x5c) = 0xffffffff;
  }
  FUN_18031ef50(fVar21,fVar22);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18031d74f(longlong param_1,longlong param_2)
void FUN_18031d74f(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  longlong in_RAX;
  int unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined4 in_XMM0_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  
  fVar2 = *(float *)(unaff_RBP + -0x49);
  *(undefined4 *)(unaff_RBP + -0x2d) = in_XMM0_Da;
  do {
    fVar3 = *(float *)(unaff_RBP + -0x29 + in_RAX);
    fVar7 = *(float *)(unaff_RBP + -1 + in_RAX);
    in_RAX = in_RAX + 4;
    unaff_EBX = unaff_EBX + 1;
    fVar5 = *(float *)(unaff_RBP + -0x2d);
    fVar8 = fVar2 * fVar3 * fVar7;
    fVar6 = unaff_XMM6_Da * fVar3 * fVar7;
    fVar7 = in_XMM5_Da * fVar3 * fVar7;
    pfVar1 = (float *)(param_1 + 0x338 + param_2);
    *pfVar1 = fVar8;
    pfVar1[1] = fVar6;
    pfVar1[2] = fVar7;
    pfVar1[3] = fVar5;
    param_2 = *(longlong *)(unaff_RDI + 0x10);
    *(float *)(unaff_RBP + -0x39) = fVar8;
    *(float *)(unaff_RBP + -0x35) = fVar6;
    *(float *)(unaff_RBP + -0x31) = fVar7;
    *(float *)(unaff_RBP + -0x2d) = fVar5;
    param_1 = param_1 + 0x10;
  } while (unaff_EBX < *(int *)(param_2 + 0x78));
  lVar4 = *(longlong *)(unaff_RDI + 0x18);
  *(int *)(lVar4 + 0x4c) = *(int *)(lVar4 + 0x4c) + 1;
  if (*(int *)(lVar4 + 0x4c) == 0x18) {
    *(undefined4 *)(lVar4 + 0x5c) = 0xffffffff;
  }
  FUN_18031ef50();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18031d7d1(void)
void FUN_18031d7d1(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + 1;
  if (*(int *)(lVar1 + 0x4c) == 0x18) {
    *(undefined4 *)(lVar1 + 0x5c) = 0xffffffff;
  }
  FUN_18031ef50();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18031d7ee(void)
void FUN_18031d7ee(void)

{
  longlong in_RAX;
  longlong unaff_RBP;
  
  *(undefined4 *)(in_RAX + 0x5c) = 0xffffffff;
  FUN_18031ef50();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



