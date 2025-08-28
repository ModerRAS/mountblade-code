#include "TaleWorlds.Native.Split.h"

// 03_rendering_part107.c - 6 个函数

// 函数: void FUN_180330ab0(longlong param_1,longlong param_2,undefined8 param_3)
void FUN_180330ab0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_138 [32];
  undefined1 uStack_118;
  int aiStack_108 [2];
  undefined *puStack_100;
  undefined2 *puStack_f8;
  undefined4 uStack_f0;
  ulonglong uStack_e8;
  undefined4 uStack_e0;
  undefined *puStack_d8;
  undefined4 *puStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  char *pcStack_b0;
  uint uStack_a8;
  undefined4 uStack_a0;
  undefined4 *puStack_90;
  longlong lStack_88;
  undefined8 uStack_70;
  char acStack_50 [16];
  ulonglong uStack_40;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  lVar10 = 0;
  aiStack_108[0] = 0;
  fread(aiStack_108,4,1,*(undefined8 *)(param_2 + 8));
  if (aiStack_108[0] < 1) {
LAB_1803310be:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_138);
  }
  if (aiStack_108[0] == 0) {
    puStack_90 = (undefined4 *)0x0;
  }
  else {
    puStack_90 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,(longlong)aiStack_108[0] * 4,3);
  }
  puVar6 = puStack_90;
  fread(puStack_90,4,(longlong)aiStack_108[0],*(undefined8 *)(param_2 + 8));
  FUN_1806279c0(&puStack_b8,param_3);
  cVar1 = *pcStack_b0;
  while (cVar1 != '\0') {
    lVar4 = strchr(&DAT_1809fcfb8,(int)pcStack_b0[lVar10]);
    if (lVar4 != 0) {
      pcStack_b0[lVar10] = '/';
    }
    lVar10 = lVar10 + 1;
    cVar1 = pcStack_b0[lVar10];
  }
  uVar9 = uStack_a8 + 0x11;
  FUN_1806277c0(&puStack_b8,uVar9);
  builtin_strncpy(pcStack_b0 + uStack_a8,"/tableau_textures",0x12);
  uStack_e0 = 0;
  uStack_a8 = uVar9;
  if (aiStack_108[0] < 1) {
    if (puVar6 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
    puStack_b8 = &UNK_180a3c3e0;
    if (pcStack_b0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pcStack_b0 = (char *)0x0;
    uStack_a0 = 0;
    puStack_b8 = &UNK_18098bcb0;
    goto LAB_1803310be;
  }
  lStack_88 = param_1 + 0xae8;
  puVar7 = (undefined2 *)0x0;
  puStack_d8 = &UNK_180a3c3e0;
  uStack_c0 = 0;
  puStack_d0 = (undefined4 *)0x0;
  uStack_c8 = 0;
  FUN_180060680(acStack_50,&UNK_1809fd0a0,*puVar6);
  lVar10 = -1;
  do {
    lVar4 = lVar10;
    lVar10 = lVar4 + 1;
  } while (acStack_50[lVar4 + 1] != '\0');
  if (0 < (int)(lVar4 + 1)) {
    iVar11 = (int)lVar4 + 2;
    iVar3 = iVar11;
    if (iVar11 < 0x10) {
      iVar3 = 0x10;
    }
    puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puVar5 = 0;
    puStack_d0 = (undefined4 *)puVar5;
    uVar2 = FUN_18064e990(puVar5);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar2);
                    // WARNING: Subroutine does not return
    memcpy(puVar5,acStack_50,(longlong)iVar11);
  }
  puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar6 = 0;
  puStack_d0 = puVar6;
  uVar2 = FUN_18064e990(puVar6);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar2);
  *puVar6 = 0x7364642e;
  *(undefined1 *)(puVar6 + 1) = 0;
  uStack_c8 = 4;
  puStack_100 = &UNK_180a3c3e0;
  uStack_e8 = 0;
  puStack_f8 = (undefined2 *)0x0;
  uStack_f0 = 0;
  puVar8 = puVar7;
  if (uStack_a8 != 0) {
    iVar3 = uStack_a8 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar7 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *(undefined1 *)puVar7 = 0;
    puStack_f8 = puVar7;
    puVar8 = (undefined2 *)FUN_18064e990(puVar7);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)puVar8);
    if (uStack_a8 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar7,pcStack_b0,uStack_a8 + 1);
    }
  }
  uVar9 = (uint)puVar8;
  if (pcStack_b0 != (char *)0x0) {
    uStack_f0 = 0;
    if (puVar7 != (undefined2 *)0x0) {
      *(undefined1 *)puVar7 = 0;
    }
    uStack_e8 = uStack_e8 & 0xffffffff;
  }
  if (puVar7 == (undefined2 *)0x0) {
    puVar7 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar7 = 0;
LAB_180330e61:
    puStack_f8 = puVar7;
    uVar9 = FUN_18064e990(puVar7);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar9);
  }
  else if (uVar9 < 2) {
    uStack_118 = 0x13;
    puVar7 = (undefined2 *)FUN_18062b8b0(_DAT_180c8ed18,puVar7,2,0x10);
    goto LAB_180330e61;
  }
  *puVar7 = 0x2f;
  uStack_f0 = 1;
  if (puVar7 == (undefined2 *)0x0) {
    puVar7 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar7 = 0;
  }
  else {
    if (5 < uVar9) goto LAB_180330f00;
    uStack_118 = 0x13;
    puVar7 = (undefined2 *)FUN_18062b8b0(_DAT_180c8ed18,puVar7,6,0x10);
  }
  puStack_f8 = puVar7;
  uVar2 = FUN_18064e990(puVar7);
  uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar2);
LAB_180330f00:
                    // WARNING: Subroutine does not return
  memcpy((undefined1 *)((longlong)puVar7 + 1),puVar6,5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803310f0(undefined8 param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,
void FUN_1803310f0(undefined8 param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_168 [32];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float afStack_d8 [8];
  ulonglong uStack_b8;
  
  uStack_b8 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  uVar2 = param_3[1];
  *(undefined8 *)param_2 = *param_3;
  *(undefined8 *)(param_2 + 2) = uVar2;
  uVar2 = param_3[3];
  *(undefined8 *)(param_2 + 4) = param_3[2];
  *(undefined8 *)(param_2 + 6) = uVar2;
  fVar22 = *(float *)((longlong)param_3 + 0x24);
  fVar23 = *(float *)(param_3 + 5);
  fVar24 = *(float *)((longlong)param_3 + 0x2c);
  param_2[8] = *(float *)(param_3 + 4);
  param_2[9] = fVar22;
  param_2[10] = fVar23;
  param_2[0xb] = fVar24;
  fVar22 = *(float *)((longlong)param_3 + 0x34);
  fVar23 = *(float *)(param_3 + 7);
  fVar24 = *(float *)((longlong)param_3 + 0x3c);
  param_2[0xc] = *(float *)(param_3 + 6);
  param_2[0xd] = fVar22;
  param_2[0xe] = fVar23;
  param_2[0xf] = fVar24;
  puVar8 = param_4;
  pfVar5 = (float *)FUN_180085020(param_4,afStack_d8);
  pfVar6 = (float *)FUN_180085020(param_2,&fStack_148);
  uStack_138 = *param_3;
  uStack_130 = param_3[1];
  uStack_128 = *(undefined4 *)(param_3 + 2);
  uStack_124 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_120 = *(undefined4 *)(param_3 + 3);
  uStack_11c = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_118 = *(undefined4 *)(param_3 + 4);
  uStack_114 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_110 = *(undefined4 *)(param_3 + 5);
  uStack_10c = *(undefined4 *)((longlong)param_3 + 0x2c);
  fVar22 = (*pfVar5 - *pfVar6) * param_5 + *pfVar6;
  fVar23 = (pfVar5[1] - pfVar6[1]) * param_5 + pfVar6[1];
  fVar24 = (pfVar5[2] - pfVar6[2]) * param_5 + pfVar6[2];
  FUN_1802bfc90(&uStack_138,afStack_d8);
  uStack_108 = *puVar8;
  uStack_100 = puVar8[1];
  uStack_f8 = *(undefined4 *)(puVar8 + 2);
  uStack_f4 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uStack_f0 = *(undefined4 *)(puVar8 + 3);
  uStack_ec = *(undefined4 *)((longlong)puVar8 + 0x1c);
  uStack_e8 = *(undefined4 *)(puVar8 + 4);
  uStack_e4 = *(undefined4 *)((longlong)puVar8 + 0x24);
  uStack_e0 = *(undefined4 *)(puVar8 + 5);
  uStack_dc = *(undefined4 *)((longlong)puVar8 + 0x2c);
  FUN_1802bfc90(&uStack_108,afStack_d8);
  FUN_18063b470(afStack_d8,&uStack_108);
  uVar3 = FUN_18063b470(&fStack_148,&uStack_138);
  if (0.001 <= param_5) {
    fVar21 = afStack_d8[0];
    fVar12 = afStack_d8[1];
    fVar13 = afStack_d8[2];
    fVar16 = afStack_d8[3];
    if (param_5 <= 0.999) {
      afStack_d8[2] = afStack_d8[2] * fStack_140;
      afStack_d8[3] = afStack_d8[3] * fStack_13c;
      afStack_d8[4] = -1.0;
      afStack_d8[5] = -1.0;
      afStack_d8[6] = -1.0;
      afStack_d8[7] = -1.0;
      auVar15._0_4_ = afStack_d8[2] + afStack_d8[0] * fStack_148;
      auVar15._4_4_ = afStack_d8[3] + afStack_d8[1] * fStack_144;
      auVar15._8_4_ = afStack_d8[2] + afStack_d8[2];
      auVar15._12_4_ = afStack_d8[3] + afStack_d8[3];
      auVar14._4_12_ = auVar15._4_12_;
      auVar14._0_4_ = auVar15._0_4_ + auVar15._4_4_;
      afStack_d8[0] = 1.0;
      afStack_d8[1] = 1.0;
      afStack_d8[2] = 1.0;
      afStack_d8[3] = 1.0;
      uVar4 = movmskps(uVar3,auVar14);
      uVar7 = (ulonglong)(uVar4 & 1);
      fVar17 = afStack_d8[uVar7 * 4];
      fVar18 = afStack_d8[uVar7 * 4 + 1];
      fVar19 = afStack_d8[uVar7 * 4 + 2];
      fVar20 = afStack_d8[uVar7 * 4 + 3];
      if (0.9995 < ABS(auVar14._0_4_)) {
        fVar9 = 1.0 - param_5;
        fStack_148 = fVar9 * fStack_148 + param_5 * fVar17 * fVar21;
        fStack_144 = fVar9 * fStack_144 + param_5 * fVar18 * fVar12;
        fStack_140 = fVar9 * fStack_140 + param_5 * fVar19 * fVar13;
        fStack_13c = fVar9 * fStack_13c + param_5 * fVar20 * fVar16;
        fVar21 = fStack_13c * fStack_13c + fStack_148 * fStack_148;
        fVar12 = fStack_140 * fStack_140 + fStack_144 * fStack_144;
        fVar19 = fVar21 + fStack_144 * fStack_144 + fStack_140 * fStack_140;
        fVar20 = fVar12 + fStack_148 * fStack_148 + fStack_13c * fStack_13c;
        auVar1._4_4_ = fVar21 + fVar12 + 1.1754944e-38;
        auVar1._0_4_ = fVar12 + fVar21 + 1.1754944e-38;
        auVar1._8_4_ = fVar19 + 1.1754944e-38;
        auVar1._12_4_ = fVar20 + 1.1754944e-38;
        auVar15 = rsqrtps(auVar14,auVar1);
        fVar13 = auVar15._0_4_;
        fVar16 = auVar15._4_4_;
        fVar17 = auVar15._8_4_;
        fVar18 = auVar15._12_4_;
        fStack_148 = fStack_148 * (3.0 - fVar13 * fVar13 * (fVar12 + fVar21)) * fVar13 * 0.5;
        fStack_144 = fStack_144 * (3.0 - fVar16 * fVar16 * (fVar21 + fVar12)) * fVar16 * 0.5;
        fStack_140 = fStack_140 * (3.0 - fVar17 * fVar17 * fVar19) * fVar17 * 0.5;
        fStack_13c = fStack_13c * (3.0 - fVar18 * fVar18 * fVar20) * fVar18 * 0.5;
      }
      else {
        fVar9 = (float)acosf();
        fVar10 = (float)sinf();
        fVar11 = (float)sinf(fVar9 - fVar9 * param_5);
        fVar11 = fVar11 * (1.0 / fVar10);
        fVar9 = (float)sinf(fVar9 * param_5);
        fVar9 = fVar9 * (1.0 / fVar10);
        fStack_148 = fVar11 * fStack_148 + fVar9 * fVar17 * fVar21;
        fStack_144 = fVar11 * fStack_144 + fVar9 * fVar18 * fVar12;
        fStack_140 = fVar11 * fStack_140 + fVar9 * fVar19 * fVar13;
        fStack_13c = fVar11 * fStack_13c + fVar9 * fVar20 * fVar16;
      }
    }
    else {
      fStack_148 = afStack_d8[0];
      fStack_144 = afStack_d8[1];
      fStack_140 = afStack_d8[2];
      fStack_13c = afStack_d8[3];
    }
  }
  FUN_18063b5f0(&uStack_138,&fStack_148);
  *(undefined8 *)param_2 = uStack_138;
  *(undefined8 *)(param_2 + 2) = uStack_130;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_124,uStack_128);
  *(ulonglong *)(param_2 + 6) = CONCAT44(uStack_11c,uStack_120);
  *(ulonglong *)(param_2 + 8) = CONCAT44(uStack_114,uStack_118);
  *(ulonglong *)(param_2 + 10) = CONCAT44(uStack_10c,uStack_110);
  fVar21 = 1.0 - param_5;
  param_2[1] = fVar22 * param_2[1];
  *param_2 = fVar22 * *param_2;
  param_2[2] = fVar22 * param_2[2];
  param_2[4] = fVar23 * param_2[4];
  param_2[5] = fVar23 * param_2[5];
  param_2[6] = fVar23 * param_2[6];
  param_2[8] = fVar24 * param_2[8];
  param_2[9] = fVar24 * param_2[9];
  param_2[10] = fVar24 * param_2[10];
  fVar22 = *(float *)(param_4 + 7);
  fVar23 = param_5 * *(float *)((longlong)param_4 + 0x34) + fVar21 * param_2[0xd];
  param_2[0xc] = param_5 * *(float *)(param_4 + 6) + fVar21 * param_2[0xc];
  param_2[0xd] = fVar23;
  param_2[0xe] = param_5 * fVar22 + fVar21 * param_2[0xe];
  param_2[0xf] = 3.4028235e+38;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_168,fVar23);
}





// 函数: void FUN_180331284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180331284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  uint uVar3;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float fVar9;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Dc;
  float unaff_XMM9_Da;
  float fVar10;
  float fVar11;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000148;
  
  *(int *)(unaff_RBP + -0x60) = (int)param_2;
  *(int *)(unaff_RBP + -0x5c) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(unaff_RBP + -0x58) = in_XMM1_Dc;
  *(undefined4 *)(unaff_RBP + -0x54) = in_XMM1_Dd;
  auVar8._0_4_ = in_XMM0_Dc + (float)param_1;
  auVar8._4_4_ = in_XMM0_Dd + (float)((ulonglong)param_1 >> 0x20);
  auVar8._8_4_ = in_XMM0_Dc + in_XMM0_Dc;
  auVar8._12_4_ = in_XMM0_Dd + in_XMM0_Dd;
  auVar7._4_12_ = auVar8._4_12_;
  auVar7._0_4_ = auVar8._0_4_ + auVar8._4_4_;
  *(undefined8 *)(unaff_RBP + -0x70) = 0x3f8000003f800000;
  *(undefined8 *)(unaff_RBP + -0x68) = 0x3f8000003f800000;
  uVar3 = movmskps(in_EAX,auVar7);
  pfVar1 = (float *)(unaff_RBP + -0x70 + (ulonglong)(uVar3 & 1) * 0x10);
  fVar10 = *pfVar1 * (float)param_4;
  fVar11 = pfVar1[1] * (float)((ulonglong)param_4 >> 0x20);
  if (0.9995 < ABS(auVar7._0_4_)) {
    fVar4 = unaff_XMM11_Da - unaff_XMM9_Da;
    fVar6 = fVar4 * fStackX_20 + unaff_XMM9_Da * fVar10;
    fVar9 = fVar4 * fStackX_24 + unaff_XMM9_Da * fVar11;
    fVar10 = fVar4 * (float)param_5 + unaff_XMM9_Da * pfVar1[2] * in_XMM3_Dc;
    fVar11 = fVar4 * param_5._4_4_ + unaff_XMM9_Da * pfVar1[3] * in_XMM3_Dd;
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    fVar4 = fVar11 + fVar6 * fVar6;
    fVar5 = fVar10 + fVar9 * fVar9;
    auVar2._4_4_ = fVar4 + fVar5 + 1.1754944e-38;
    auVar2._0_4_ = fVar5 + fVar4 + 1.1754944e-38;
    auVar2._8_4_ = fVar4 + fVar9 * fVar9 + fVar10 + 1.1754944e-38;
    auVar2._12_4_ = fVar5 + fVar6 * fVar6 + fVar11 + 1.1754944e-38;
    auVar8 = rsqrtps(auVar7,auVar2);
    fVar10 = auVar8._0_4_;
    fVar11 = auVar8._4_4_;
    fStackX_20 = fVar6 * (3.0 - fVar10 * fVar10 * (fVar5 + fVar4)) * fVar10 * 0.5;
    fStackX_24 = fVar9 * (3.0 - fVar11 * fVar11 * (fVar4 + fVar5)) * fVar11 * 0.5;
  }
  else {
    in_stack_00000120 = unaff_XMM8_Da;
    in_stack_00000128 = unaff_XMM8_Dc;
    in_stack_00000130 = unaff_XMM7_Da;
    in_stack_00000138 = unaff_XMM7_Dc;
    in_stack_00000140 = unaff_XMM6_Da;
    in_stack_00000148 = unaff_XMM6_Dc;
    fVar4 = (float)acosf();
    fVar5 = (float)sinf();
    fVar6 = (float)sinf(fVar4 - fVar4 * unaff_XMM9_Da);
    fVar6 = fVar6 * (unaff_XMM11_Da / fVar5);
    fVar4 = (float)sinf(fVar4 * unaff_XMM9_Da);
    fVar4 = fVar4 * (unaff_XMM11_Da / fVar5);
    fStackX_20 = fVar6 * fStackX_20 + fVar4 * fVar10;
    fStackX_24 = fVar6 * fStackX_24 + fVar4 * fVar11;
  }
  FUN_18063b5f0(&param_6,&fStackX_20);
  *(undefined8 *)unaff_RBX = param_6;
  *(undefined8 *)(unaff_RBX + 2) = param_7;
  *(undefined8 *)(unaff_RBX + 4) = param_8;
  *(undefined8 *)(unaff_RBX + 6) = param_9;
  *(undefined8 *)(unaff_RBX + 8) = param_10;
  *(undefined8 *)(unaff_RBX + 10) = param_11;
  fVar4 = unaff_XMM11_Da - unaff_XMM9_Da;
  unaff_RBX[1] = unaff_XMM13_Da * unaff_RBX[1];
  *unaff_RBX = unaff_XMM13_Da * *unaff_RBX;
  unaff_RBX[2] = unaff_XMM13_Da * unaff_RBX[2];
  unaff_RBX[4] = unaff_XMM14_Da * unaff_RBX[4];
  unaff_RBX[5] = unaff_XMM14_Da * unaff_RBX[5];
  unaff_RBX[6] = unaff_XMM14_Da * unaff_RBX[6];
  unaff_RBX[8] = unaff_XMM15_Da * unaff_RBX[8];
  unaff_RBX[9] = unaff_XMM15_Da * unaff_RBX[9];
  unaff_RBX[10] = unaff_XMM15_Da * unaff_RBX[10];
  fVar10 = *(float *)(unaff_RDI + 0x38);
  fVar11 = unaff_XMM9_Da * *(float *)(unaff_RDI + 0x34) + fVar4 * unaff_RBX[0xd];
  unaff_RBX[0xc] = unaff_XMM9_Da * *(float *)(unaff_RDI + 0x30) + fVar4 * unaff_RBX[0xc];
  unaff_RBX[0xd] = fVar11;
  unaff_RBX[0xe] = unaff_XMM9_Da * fVar10 + fVar4 * unaff_RBX[0xe];
  unaff_RBX[0xf] = 3.4028235e+38;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x50) ^ (ulonglong)&stack0x00000000,fVar11);
}





// 函数: void FUN_1803312da(void)
void FUN_1803312da(void)

{
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  fVar1 = (float)acosf();
  fVar2 = (float)sinf();
  fVar3 = (float)sinf(fVar1 - fVar1 * unaff_XMM9_Da);
  fVar3 = fVar3 * (unaff_XMM11_Da / fVar2);
  fVar1 = (float)sinf(fVar1 * unaff_XMM9_Da);
  fVar1 = fVar1 * (unaff_XMM11_Da / fVar2);
  fStackX_20 = fVar3 * fStackX_20 + fVar1 * unaff_XMM10_Da;
  fStackX_24 = fVar3 * fStackX_24 + fVar1 * unaff_XMM10_Db;
  FUN_18063b5f0(&stack0x00000030,&fStackX_20);
  *(undefined8 *)unaff_RBX = in_stack_00000030;
  *(undefined8 *)(unaff_RBX + 2) = in_stack_00000038;
  *(undefined8 *)(unaff_RBX + 4) = in_stack_00000040;
  *(undefined8 *)(unaff_RBX + 6) = in_stack_00000048;
  *(undefined8 *)(unaff_RBX + 8) = in_stack_00000050;
  *(undefined8 *)(unaff_RBX + 10) = in_stack_00000058;
  fVar3 = unaff_XMM11_Da - unaff_XMM9_Da;
  unaff_RBX[1] = unaff_XMM13_Da * unaff_RBX[1];
  *unaff_RBX = unaff_XMM13_Da * *unaff_RBX;
  unaff_RBX[2] = unaff_XMM13_Da * unaff_RBX[2];
  unaff_RBX[4] = unaff_XMM14_Da * unaff_RBX[4];
  unaff_RBX[5] = unaff_XMM14_Da * unaff_RBX[5];
  unaff_RBX[6] = unaff_XMM14_Da * unaff_RBX[6];
  unaff_RBX[8] = unaff_XMM15_Da * unaff_RBX[8];
  unaff_RBX[9] = unaff_XMM15_Da * unaff_RBX[9];
  unaff_RBX[10] = unaff_XMM15_Da * unaff_RBX[10];
  fVar1 = *(float *)(unaff_RDI + 0x34);
  fVar2 = *(float *)(unaff_RDI + 0x38);
  unaff_RBX[0xc] = unaff_XMM9_Da * *(float *)(unaff_RDI + 0x30) + fVar3 * unaff_RBX[0xc];
  unaff_RBX[0xd] = unaff_XMM9_Da * fVar1 + fVar3 * unaff_RBX[0xd];
  unaff_RBX[0xe] = unaff_XMM9_Da * fVar2 + fVar3 * unaff_RBX[0xe];
  unaff_RBX[0xf] = 3.4028235e+38;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x50) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180331369(void)
void FUN_180331369(void)

{
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar1;
  float fVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float in_stack_00000020;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  fVar4 = unaff_XMM11_Da - unaff_XMM9_Da;
  fVar5 = fVar4 * in_stack_00000020 + unaff_XMM9_Da * unaff_XMM10_Da;
  fVar6 = fVar4 * fStackX_24 + unaff_XMM9_Da * unaff_XMM10_Db;
  fVar7 = fVar4 * fStack0000000000000028 + unaff_XMM9_Da * unaff_XMM10_Dc;
  fVar4 = fVar4 * fStack000000000000002c + unaff_XMM9_Da * unaff_XMM10_Dd;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar4 = fVar4 * fVar4;
  fVar1 = fVar4 + fVar5 * fVar5;
  fVar2 = fVar7 + fVar6;
  auVar3._4_4_ = fVar1 + fVar2 + 1.1754944e-38;
  auVar3._0_4_ = fVar2 + fVar1 + 1.1754944e-38;
  auVar3._8_4_ = fVar1 + fVar6 + fVar7 + 1.1754944e-38;
  auVar3._12_4_ = fVar2 + fVar5 * fVar5 + fVar4 + 1.1754944e-38;
  auVar3 = rsqrtps(in_XMM2,auVar3);
  fVar6 = auVar3._0_4_;
  fVar6 = (3.0 - fVar6 * fVar6 * (fVar2 + fVar1)) * fVar6 * 0.5;
  FUN_18063b5f0(&stack0x00000030,&stack0x00000020,auVar3._0_8_,fVar6,fVar5 * fVar6);
  *(undefined8 *)unaff_RBX = in_stack_00000030;
  *(undefined8 *)(unaff_RBX + 2) = in_stack_00000038;
  *(undefined8 *)(unaff_RBX + 4) = in_stack_00000040;
  *(undefined8 *)(unaff_RBX + 6) = in_stack_00000048;
  *(undefined8 *)(unaff_RBX + 8) = in_stack_00000050;
  *(undefined8 *)(unaff_RBX + 10) = in_stack_00000058;
  fVar4 = unaff_XMM11_Da - unaff_XMM9_Da;
  unaff_RBX[1] = unaff_XMM13_Da * unaff_RBX[1];
  *unaff_RBX = unaff_XMM13_Da * *unaff_RBX;
  unaff_RBX[2] = unaff_XMM13_Da * unaff_RBX[2];
  unaff_RBX[4] = unaff_XMM14_Da * unaff_RBX[4];
  unaff_RBX[5] = unaff_XMM14_Da * unaff_RBX[5];
  unaff_RBX[6] = unaff_XMM14_Da * unaff_RBX[6];
  unaff_RBX[8] = unaff_XMM15_Da * unaff_RBX[8];
  unaff_RBX[9] = unaff_XMM15_Da * unaff_RBX[9];
  unaff_RBX[10] = unaff_XMM15_Da * unaff_RBX[10];
  fVar6 = *(float *)(unaff_RDI + 0x38);
  fVar7 = unaff_XMM9_Da * *(float *)(unaff_RDI + 0x34) + fVar4 * unaff_RBX[0xd];
  unaff_RBX[0xc] = unaff_XMM9_Da * *(float *)(unaff_RDI + 0x30) + fVar4 * unaff_RBX[0xc];
  unaff_RBX[0xd] = fVar7;
  unaff_RBX[0xe] = unaff_XMM9_Da * fVar6 + fVar4 * unaff_RBX[0xe];
  unaff_RBX[0xf] = 3.4028235e+38;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x50) ^ (ulonglong)&stack0x00000000,fVar7);
}





// 函数: void FUN_1803313e2(void)
void FUN_1803313e2(void)

{
  float fVar1;
  float fVar2;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float fVar3;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  undefined1 auStackX_20 [8];
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_18063b5f0(&stack0x00000030,auStackX_20);
  *(undefined8 *)unaff_RBX = in_stack_00000030;
  *(undefined8 *)(unaff_RBX + 2) = in_stack_00000038;
  *(undefined8 *)(unaff_RBX + 4) = in_stack_00000040;
  *(undefined8 *)(unaff_RBX + 6) = in_stack_00000048;
  *(undefined8 *)(unaff_RBX + 8) = in_stack_00000050;
  *(undefined8 *)(unaff_RBX + 10) = in_stack_00000058;
  fVar3 = unaff_XMM11_Da - unaff_XMM9_Da;
  unaff_RBX[1] = unaff_XMM13_Da * unaff_RBX[1];
  *unaff_RBX = unaff_XMM13_Da * *unaff_RBX;
  unaff_RBX[2] = unaff_XMM13_Da * unaff_RBX[2];
  unaff_RBX[4] = unaff_XMM14_Da * unaff_RBX[4];
  unaff_RBX[5] = unaff_XMM14_Da * unaff_RBX[5];
  unaff_RBX[6] = unaff_XMM14_Da * unaff_RBX[6];
  unaff_RBX[8] = unaff_XMM15_Da * unaff_RBX[8];
  unaff_RBX[9] = unaff_XMM15_Da * unaff_RBX[9];
  unaff_RBX[10] = unaff_XMM15_Da * unaff_RBX[10];
  fVar1 = *(float *)(unaff_RDI + 0x34);
  fVar2 = *(float *)(unaff_RDI + 0x38);
  unaff_RBX[0xc] = unaff_XMM9_Da * *(float *)(unaff_RDI + 0x30) + fVar3 * unaff_RBX[0xc];
  unaff_RBX[0xd] = unaff_XMM9_Da * fVar1 + fVar3 * unaff_RBX[0xd];
  unaff_RBX[0xe] = unaff_XMM9_Da * fVar2 + fVar3 * unaff_RBX[0xe];
  unaff_RBX[0xf] = 3.4028235e+38;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x50) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



