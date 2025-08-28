#include "TaleWorlds.Native.Split.h"

// 03_rendering_part426.c - 1 个函数

// 函数: void FUN_18049c310(longlong param_1)
void FUN_18049c310(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  uint uVar20;
  float fVar27;
  uint uVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar33;
  float fVar34;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar48;
  float fVar49;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  int iVar51;
  uint uVar52;
  float fVar55;
  int iVar56;
  uint uVar57;
  float fVar58;
  int iVar59;
  uint uVar60;
  float fVar61;
  int iVar62;
  uint uVar63;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar64;
  uint uVar65;
  int iVar66;
  uint uVar67;
  int iVar68;
  uint uVar69;
  float fVar70;
  int iVar71;
  uint uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar76;
  int iVar77;
  float fVar78;
  int iVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar89 [16];
  int iVar94;
  int iVar97;
  undefined1 auVar96 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  uint in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  char in_stack_00000048;
  uint in_stack_00000050;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined8 uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  longlong lStack_1b8;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined1 auStack_198 [16];
  longlong lStack_188;
  int aiStack_178 [4];
  uint auStack_168 [4];
  int aiStack_158 [4];
  uint auStack_148 [4];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  float afStack_108 [4];
  float afStack_f8 [4];
  float afStack_e8 [4];
  ulonglong uStack_d8;
  float fVar8;
  float fVar32;
  undefined1 auVar35 [16];
  undefined1 auVar75 [16];
  undefined1 auVar90 [16];
  undefined1 auVar95 [16];
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)&uStack_208;
  uStack_1f8 = 4;
  uVar15 = 0xf;
  uStack_200 = in_stack_00000030 + 1;
  lStack_1b8 = in_stack_00000040;
  uStack_204 = 0xf;
  uVar20 = 0;
  do {
    uStack_1f4 = uVar20 + 4;
    if (in_stack_00000030 < uStack_1f4) {
      uVar15 = (1 << ((byte)uStack_200 & 0x1f)) - 1;
      uStack_204 = uVar15;
    }
    lVar18 = *(longlong *)(param_1 + 0x28 + (ulonglong)in_stack_00000050 * 8);
    uVar28 = uStack_200;
    if (uStack_1f4 <= in_stack_00000030) {
      uVar28 = uStack_1f8;
    }
    uStack_1f8 = uVar28;
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
    uVar10 = (ulonglong)*(uint *)(lVar16 + (ulonglong)(uVar20 * 3) * 4);
    lVar16 = lVar16 + (ulonglong)(uVar20 * 3) * 4;
    if (in_stack_00000048 == '\0') {
      lVar17 = 0;
      if (1 < uStack_1f8) {
        lVar17 = 0xc;
      }
      lVar11 = 0;
      if (2 < uStack_1f8) {
        lVar11 = 0x18;
      }
      lVar12 = 0;
      if (3 < uStack_1f8) {
        lVar12 = 0x24;
      }
      pfVar1 = (float *)(lVar18 + uVar10 * 0x10);
      fVar76 = *pfVar1;
      fVar7 = pfVar1[1];
      afStack_108[0] = pfVar1[2];
      pfVar2 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar17 + lVar16) * 0x10);
      fVar78 = *pfVar2;
      fVar70 = pfVar2[1];
      afStack_108[1] = pfVar2[2];
      pfVar3 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar11 + lVar16) * 0x10);
      fVar80 = *pfVar3;
      fVar8 = pfVar3[1];
      fStack_1a0 = pfVar3[2];
      fStack_1e0 = pfVar3[3];
      pfVar3 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar12 + lVar16) * 0x10);
      fVar81 = *pfVar3;
      fVar31 = pfVar3[1];
      lVar4 = lVar18 + (ulonglong)*(uint *)(lVar12 + lVar16) * 0x10;
      fStack_1dc = *(float *)(lVar4 + 4);
      fStack_19c = *(float *)(lVar4 + 8);
      uStack_1e8 = CONCAT44(pfVar2[3],pfVar1[3]);
      pfVar1 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar16 + 4) * 0x10);
      fVar88 = *pfVar1;
      fVar82 = pfVar1[1];
      fVar34 = pfVar1[2];
      uStack_1a8 = CONCAT44(afStack_108[1],afStack_108[0]);
      pfVar2 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar17 + 4 + lVar16) * 0x10);
      fVar91 = *pfVar2;
      fVar83 = pfVar2[1];
      fVar39 = pfVar2[2];
      pfVar3 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar11 + 4 + lVar16) * 0x10);
      fVar92 = *pfVar3;
      fVar84 = pfVar3[1];
      fVar40 = pfVar3[2];
      fStack_1c0 = pfVar3[3];
      uVar10 = (ulonglong)*(uint *)(lVar12 + 4 + lVar16);
      pfVar3 = (float *)(lVar18 + uVar10 * 0x10);
      fVar93 = *pfVar3;
      fVar85 = pfVar3[1];
      lVar4 = lVar18 + uVar10 * 0x10;
      fStack_1bc = *(float *)(lVar4 + 4);
      fVar41 = *(float *)(lVar4 + 8);
      uStack_1c8 = CONCAT44(pfVar2[3],pfVar1[3]);
      pfVar1 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar16 + 8) * 0x10);
      fVar50 = *pfVar1;
      fVar55 = pfVar1[1];
      fVar58 = pfVar1[2];
      fVar61 = pfVar1[3];
      pfVar1 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar17 + 8 + lVar16) * 0x10);
      fVar19 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar29 = pfVar1[2];
      fVar32 = pfVar1[3];
      pfVar1 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar11 + 8 + lVar16) * 0x10);
      fVar42 = *pfVar1;
      fVar48 = pfVar1[1];
      fVar49 = pfVar1[2];
      fStack_1d0 = pfVar1[3];
      uVar20 = *(uint *)(lVar12 + 8 + lVar16);
    }
    else {
      lVar17 = 0;
      if (1 < uStack_1f8) {
        lVar17 = 0xc;
      }
      lVar11 = 0;
      if (2 < uStack_1f8) {
        lVar11 = 0x18;
      }
      lVar12 = 0;
      if (3 < uStack_1f8) {
        lVar12 = 0x24;
      }
      pfVar1 = (float *)(lVar18 + uVar10 * 0x10);
      fVar76 = *pfVar1;
      fVar7 = pfVar1[1];
      afStack_108[0] = pfVar1[2];
      pfVar2 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar17 + lVar16) * 0x10);
      fVar78 = *pfVar2;
      fVar70 = pfVar2[1];
      afStack_108[1] = pfVar2[2];
      pfVar3 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar11 + lVar16) * 0x10);
      fVar80 = *pfVar3;
      fVar8 = pfVar3[1];
      fStack_1a0 = pfVar3[2];
      fStack_1e0 = pfVar3[3];
      pfVar3 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar12 + lVar16) * 0x10);
      fVar81 = *pfVar3;
      fVar31 = pfVar3[1];
      lVar4 = lVar18 + (ulonglong)*(uint *)(lVar12 + lVar16) * 0x10;
      fStack_1dc = *(float *)(lVar4 + 4);
      fStack_19c = *(float *)(lVar4 + 8);
      uStack_1e8 = CONCAT44(pfVar2[3],pfVar1[3]);
      pfVar1 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar16 + 8) * 0x10);
      fVar88 = *pfVar1;
      fVar82 = pfVar1[1];
      fVar34 = pfVar1[2];
      uStack_1a8 = CONCAT44(afStack_108[1],afStack_108[0]);
      pfVar2 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar17 + 8 + lVar16) * 0x10);
      fVar91 = *pfVar2;
      fVar83 = pfVar2[1];
      fVar39 = pfVar2[2];
      pfVar3 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar11 + 8 + lVar16) * 0x10);
      fVar92 = *pfVar3;
      fVar84 = pfVar3[1];
      fVar40 = pfVar3[2];
      fStack_1c0 = pfVar3[3];
      uVar10 = (ulonglong)*(uint *)(lVar12 + 8 + lVar16);
      pfVar3 = (float *)(lVar18 + uVar10 * 0x10);
      fVar93 = *pfVar3;
      fVar85 = pfVar3[1];
      lVar4 = lVar18 + uVar10 * 0x10;
      fStack_1bc = *(float *)(lVar4 + 4);
      fVar41 = *(float *)(lVar4 + 8);
      uStack_1c8 = CONCAT44(pfVar2[3],pfVar1[3]);
      pfVar1 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar16 + 4) * 0x10);
      fVar50 = *pfVar1;
      fVar55 = pfVar1[1];
      fVar58 = pfVar1[2];
      fVar61 = pfVar1[3];
      pfVar1 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar17 + 4 + lVar16) * 0x10);
      fVar19 = *pfVar1;
      fVar27 = pfVar1[1];
      fVar29 = pfVar1[2];
      fVar32 = pfVar1[3];
      pfVar1 = (float *)(lVar18 + (ulonglong)*(uint *)(lVar11 + 4 + lVar16) * 0x10);
      fVar42 = *pfVar1;
      fVar48 = pfVar1[1];
      fVar49 = pfVar1[2];
      fStack_1d0 = pfVar1[3];
      uVar20 = *(uint *)(lVar12 + 4 + lVar16);
    }
    afStack_108[2] = fStack_1a0;
    afStack_108[3] = fStack_19c;
    iVar64 = (int)fVar7;
    iVar66 = (int)fVar70;
    iVar68 = (int)fVar8;
    iVar71 = (int)fVar31;
    pfVar1 = (float *)(lVar18 + (ulonglong)uVar20 * 0x10);
    lVar18 = lVar18 + (ulonglong)uVar20 * 0x10;
    fStack_1cc = *(float *)(lVar18 + 4);
    uVar5 = *(undefined4 *)(lVar18 + 8);
    auStack_198._0_8_ = CONCAT44(fVar29,fVar58);
    auStack_198._8_4_ = fVar49;
    auStack_198._12_4_ = uVar5;
    auVar98._0_4_ = (int)fVar55;
    auVar98._4_4_ = (int)fVar27;
    auVar98._8_4_ = (int)fVar48;
    auVar98._12_4_ = (int)pfVar1[1];
    iVar94 = (int)fVar50;
    iVar97 = (int)fVar19;
    auVar95._0_8_ = CONCAT44(iVar97,iVar94);
    auVar95._8_4_ = (int)fVar42;
    auVar95._12_4_ = (int)*pfVar1;
    auVar99._0_4_ = (int)fVar82;
    auVar99._4_4_ = (int)fVar83;
    auVar99._8_4_ = (int)fVar84;
    auVar99._12_4_ = (int)fVar85;
    uStack_1d8 = (int *)CONCAT44(fVar32,fVar61);
    auVar87._8_4_ = fVar49;
    auVar87._0_8_ = auStack_198._0_8_;
    auVar87._12_4_ = uVar5;
    iVar51 = (int)fVar76;
    iVar56 = (int)fVar78;
    auVar36._4_4_ = iVar56;
    auVar36._0_4_ = iVar51;
    iVar59 = (int)fVar80;
    iVar62 = (int)fVar81;
    iVar77 = (int)fVar88;
    iVar79 = (int)fVar91;
    auVar96._0_8_ = CONCAT44(iVar79,iVar77);
    auVar96._8_4_ = (int)fVar92;
    auVar96._12_4_ = (int)fVar93;
    auVar36._8_4_ = iVar56;
    auVar36._12_4_ = iVar66;
    auVar35._8_8_ = auVar36._8_8_;
    auVar35._4_4_ = iVar64;
    auVar35._0_4_ = iVar51;
    auVar22._4_4_ = iVar68;
    auVar22._0_4_ = iVar59;
    auVar22._8_4_ = iVar62;
    auVar22._12_4_ = iVar71;
    auStack_138 = packssdw(auVar35,auVar22);
    auVar44._4_4_ = auVar99._8_4_;
    auVar44._0_4_ = auVar96._8_4_;
    auVar44._8_4_ = auVar96._12_4_;
    auVar44._12_4_ = auVar99._12_4_;
    auVar43._0_4_ = iVar77 - iVar51;
    auVar43._4_4_ = iVar79 - iVar56;
    auVar43._8_4_ = auVar96._8_4_ - iVar59;
    auVar43._12_4_ = auVar96._12_4_ - iVar62;
    auVar90._8_4_ = iVar79;
    auVar90._0_8_ = auVar96._0_8_;
    auVar90._12_4_ = auVar99._4_4_;
    auVar89._8_8_ = auVar90._8_8_;
    auVar89._4_4_ = auVar99._0_4_;
    auVar89._0_4_ = iVar77;
    auStack_128 = packssdw(auVar89,auVar44);
    auVar75._8_4_ = iVar97;
    auVar75._0_8_ = auVar95._0_8_;
    auVar75._12_4_ = auVar98._4_4_;
    auVar74._8_8_ = auVar75._8_8_;
    auVar74._4_4_ = auVar98._0_4_;
    auVar74._0_4_ = iVar94;
    auVar38._4_4_ = auVar98._8_4_;
    auVar38._0_4_ = auVar95._8_4_;
    auVar38._8_4_ = auVar95._12_4_;
    auVar38._12_4_ = auVar98._12_4_;
    auVar37._0_4_ = iVar64 - auVar99._0_4_;
    auVar37._4_4_ = iVar66 - auVar99._4_4_;
    auVar37._8_4_ = iVar68 - auVar99._8_4_;
    auVar37._12_4_ = iVar71 - auVar99._12_4_;
    auStack_118 = packssdw(auVar74,auVar38);
    auVar46._0_4_ = auVar98._0_4_ - iVar64;
    auVar46._4_4_ = auVar98._4_4_ - iVar66;
    auVar46._8_4_ = auVar98._8_4_ - iVar68;
    auVar46._12_4_ = auVar98._12_4_ - iVar71;
    auVar44 = pmulld(auVar43,auVar46);
    auVar21._0_4_ = iVar51 - iVar94;
    auVar21._4_4_ = iVar56 - iVar97;
    auVar21._8_4_ = iVar59 - auVar95._8_4_;
    auVar21._12_4_ = iVar62 - auVar95._12_4_;
    auVar22 = pmulld(auVar21,auVar37);
    iVar77 = auVar44._0_4_ - auVar22._0_4_;
    iVar79 = auVar44._4_4_ - auVar22._4_4_;
    iVar94 = auVar44._8_4_ - auVar22._8_4_;
    iVar97 = auVar44._12_4_ - auVar22._12_4_;
    auVar73._0_4_ = -(uint)(0 < iVar77);
    auVar73._4_4_ = -(uint)(0 < iVar79);
    auVar73._8_4_ = -(uint)(0 < iVar94);
    auVar73._12_4_ = -(uint)(0 < iVar97);
    auVar22 = auVar95;
    auVar44 = auVar98;
    if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
      auVar22 = pblendvb(auVar96,auVar95,auVar73);
      auVar96 = pblendvb(auVar95,auVar96,auVar73);
      auVar86._4_4_ = fVar39;
      auVar86._0_4_ = fVar34;
      auVar86._8_4_ = fVar40;
      auVar86._12_4_ = fVar41;
      auVar44 = pblendvb(auVar99,auVar98,auVar73);
      auVar99 = pblendvb(auVar98,auVar99,auVar73);
      auVar38 = pblendvb(auStack_128,auStack_118,auVar73);
      auStack_128 = pblendvb(auStack_118,auStack_128,auVar73);
      auVar23._0_4_ = (float)auVar73._0_4_;
      auVar23._4_4_ = (float)auVar73._4_4_;
      auVar23._8_4_ = (float)auVar73._8_4_;
      auVar23._12_4_ = (float)auVar73._12_4_;
      auStack_118 = auVar38;
      auVar45._0_4_ = auVar96._0_4_ - iVar51;
      auVar45._4_4_ = auVar96._4_4_ - iVar56;
      auVar45._8_4_ = auVar96._8_4_ - iVar59;
      auVar45._12_4_ = auVar96._12_4_ - iVar62;
      auVar87 = blendvps(auVar86,auStack_198,auVar23);
      auVar9._4_4_ = fVar39;
      auVar9._0_4_ = fVar34;
      auVar9._8_4_ = fVar40;
      auVar9._12_4_ = fVar41;
      auVar38 = blendvps(auStack_198,auVar9,auVar23);
      fVar34 = auVar38._0_4_;
      fVar39 = auVar38._4_4_;
      fVar40 = auVar38._8_4_;
      fVar41 = auVar38._12_4_;
      auVar24._0_4_ = auVar44._0_4_ - iVar64;
      auVar24._4_4_ = auVar44._4_4_ - iVar66;
      auVar24._8_4_ = auVar44._8_4_ - iVar68;
      auVar24._12_4_ = auVar44._12_4_ - iVar71;
      auVar37._0_4_ = iVar64 - auVar99._0_4_;
      auVar37._4_4_ = iVar66 - auVar99._4_4_;
      auVar37._8_4_ = iVar68 - auVar99._8_4_;
      auVar37._12_4_ = iVar71 - auVar99._12_4_;
      auVar46 = pmulld(auVar45,auVar24);
      auVar25._0_4_ = iVar51 - auVar22._0_4_;
      auVar25._4_4_ = iVar56 - auVar22._4_4_;
      auVar25._8_4_ = iVar59 - auVar22._8_4_;
      auVar25._12_4_ = iVar62 - auVar22._12_4_;
      auVar38 = pmulld(auVar25,auVar37);
      iVar77 = auVar46._0_4_ - auVar38._0_4_;
      iVar79 = auVar46._4_4_ - auVar38._4_4_;
      iVar94 = auVar46._8_4_ - auVar38._8_4_;
      iVar97 = auVar46._12_4_ - auVar38._12_4_;
      auVar73._0_4_ = -(uint)(0 < iVar77);
      auVar73._4_4_ = -(uint)(0 < iVar79);
      auVar73._8_4_ = -(uint)(0 < iVar94);
      auVar73._12_4_ = -(uint)(0 < iVar97);
    }
    auVar26._0_4_ = (float)iVar77;
    auVar26._4_4_ = (float)iVar79;
    auVar26._8_4_ = (float)iVar94;
    auVar26._12_4_ = (float)iVar97;
    auVar38 = rcpps(auVar37,auVar26);
    iVar77 = auVar99._0_4_;
    uVar65 = (uint)(iVar64 < iVar77) * iVar77 | (uint)(iVar64 >= iVar77) * iVar64;
    iVar79 = auVar99._4_4_;
    uVar67 = (uint)(iVar66 < iVar79) * iVar79 | (uint)(iVar66 >= iVar79) * iVar66;
    iVar94 = auVar99._8_4_;
    uVar69 = (uint)(iVar68 < iVar94) * iVar94 | (uint)(iVar68 >= iVar94) * iVar68;
    iVar97 = auVar99._12_4_;
    uVar72 = (uint)(iVar71 < iVar97) * iVar97 | (uint)(iVar71 >= iVar97) * iVar71;
    uVar20 = (uint)(iVar77 < iVar64) * iVar77 | (uint)(iVar77 >= iVar64) * iVar64;
    uVar28 = (uint)(iVar79 < iVar66) * iVar79 | (uint)(iVar79 >= iVar66) * iVar66;
    uVar30 = (uint)(iVar94 < iVar68) * iVar94 | (uint)(iVar94 >= iVar68) * iVar68;
    uVar33 = (uint)(iVar97 < iVar71) * iVar97 | (uint)(iVar97 >= iVar71) * iVar71;
    iVar77 = auVar44._0_4_;
    uVar20 = (uint)(iVar77 < (int)uVar20) * iVar77 | (iVar77 >= (int)uVar20) * uVar20;
    iVar79 = auVar44._4_4_;
    uVar28 = (uint)(iVar79 < (int)uVar28) * iVar79 | (iVar79 >= (int)uVar28) * uVar28;
    iVar94 = auVar44._8_4_;
    uVar30 = (uint)(iVar94 < (int)uVar30) * iVar94 | (iVar94 >= (int)uVar30) * uVar30;
    iVar97 = auVar44._12_4_;
    uVar33 = (uint)(iVar97 < (int)uVar33) * iVar97 | (iVar97 >= (int)uVar33) * uVar33;
    aiStack_158[0] = (-1 < (int)uVar20) * uVar20;
    aiStack_158[1] = (-1 < (int)uVar28) * uVar28;
    aiStack_158[2] = (-1 < (int)uVar30) * uVar30;
    aiStack_158[3] = (-1 < (int)uVar33) * uVar33;
    iVar64 = auVar96._0_4_;
    uVar52 = (uint)(iVar51 < iVar64) * iVar64 | (uint)(iVar51 >= iVar64) * iVar51;
    iVar66 = auVar96._4_4_;
    uVar57 = (uint)(iVar56 < iVar66) * iVar66 | (uint)(iVar56 >= iVar66) * iVar56;
    iVar68 = auVar96._8_4_;
    uVar60 = (uint)(iVar59 < iVar68) * iVar68 | (uint)(iVar59 >= iVar68) * iVar59;
    iVar71 = auVar96._12_4_;
    uVar63 = (uint)(iVar62 < iVar71) * iVar71 | (uint)(iVar62 >= iVar71) * iVar62;
    uVar20 = (uint)(iVar64 < iVar51) * iVar64 | (uint)(iVar64 >= iVar51) * iVar51;
    uVar28 = (uint)(iVar66 < iVar56) * iVar66 | (uint)(iVar66 >= iVar56) * iVar56;
    uVar30 = (uint)(iVar68 < iVar59) * iVar68 | (uint)(iVar68 >= iVar59) * iVar59;
    uVar33 = (uint)(iVar71 < iVar62) * iVar71 | (uint)(iVar71 >= iVar62) * iVar62;
    afStack_f8[0] = (fVar34 - (float)uStack_1a8) * auVar38._0_4_;
    afStack_f8[1] = (fVar39 - uStack_1a8._4_4_) * auVar38._4_4_;
    afStack_f8[2] = (fVar40 - fStack_1a0) * auVar38._8_4_;
    afStack_f8[3] = (fVar41 - fStack_19c) * auVar38._12_4_;
    iVar51 = auVar22._0_4_;
    uVar52 = (uint)((int)uVar52 < iVar51) * iVar51 | ((int)uVar52 >= iVar51) * uVar52;
    iVar56 = auVar22._4_4_;
    uVar57 = (uint)((int)uVar57 < iVar56) * iVar56 | ((int)uVar57 >= iVar56) * uVar57;
    iVar59 = auVar22._8_4_;
    uVar60 = (uint)((int)uVar60 < iVar59) * iVar59 | ((int)uVar60 >= iVar59) * uVar60;
    iVar62 = auVar22._12_4_;
    uVar63 = (uint)((int)uVar63 < iVar62) * iVar62 | ((int)uVar63 >= iVar62) * uVar63;
    afStack_e8[0] = (auVar87._0_4_ - (float)uStack_1a8) * auVar38._0_4_;
    afStack_e8[1] = (auVar87._4_4_ - uStack_1a8._4_4_) * auVar38._4_4_;
    afStack_e8[2] = (auVar87._8_4_ - fStack_1a0) * auVar38._8_4_;
    afStack_e8[3] = (auVar87._12_4_ - fStack_19c) * auVar38._12_4_;
    auStack_168[0] = (uint)(0x27f < (int)uVar52) * 0x27f | (0x27f >= (int)uVar52) * uVar52;
    auStack_168[1] = (uint)(0x27f < (int)uVar57) * 0x27f | (0x27f >= (int)uVar57) * uVar57;
    auStack_168[2] = (uint)(0x27f < (int)uVar60) * 0x27f | (0x27f >= (int)uVar60) * uVar60;
    auStack_168[3] = (uint)(0x27f < (int)uVar63) * 0x27f | (0x27f >= (int)uVar63) * uVar63;
    uVar20 = (uint)(iVar51 < (int)uVar20) * iVar51 | (iVar51 >= (int)uVar20) * uVar20;
    uVar28 = (uint)(iVar56 < (int)uVar28) * iVar56 | (iVar56 >= (int)uVar28) * uVar28;
    uVar30 = (uint)(iVar59 < (int)uVar30) * iVar59 | (iVar59 >= (int)uVar30) * uVar30;
    uVar33 = (uint)(iVar62 < (int)uVar33) * iVar62 | (iVar62 >= (int)uVar33) * uVar33;
    aiStack_178[0] = (-1 < (int)uVar20) * uVar20;
    aiStack_178[1] = (-1 < (int)uVar28) * uVar28;
    aiStack_178[2] = (-1 < (int)uVar30) * uVar30;
    aiStack_178[3] = (-1 < (int)uVar33) * uVar33;
    auVar53._0_4_ = -(uint)(aiStack_178[0] < (int)auStack_168[0]);
    auVar53._4_4_ = -(uint)(aiStack_178[1] < (int)auStack_168[1]);
    auVar53._8_4_ = -(uint)(aiStack_178[2] < (int)auStack_168[2]);
    auVar53._12_4_ = -(uint)(aiStack_178[3] < (int)auStack_168[3]);
    uVar20 = (uint)((int)uVar65 < iVar77) * iVar77 | ((int)uVar65 >= iVar77) * uVar65;
    uVar28 = (uint)((int)uVar67 < iVar79) * iVar79 | ((int)uVar67 >= iVar79) * uVar67;
    uVar30 = (uint)((int)uVar69 < iVar94) * iVar94 | ((int)uVar69 >= iVar94) * uVar69;
    uVar33 = (uint)((int)uVar72 < iVar97) * iVar97 | ((int)uVar72 >= iVar97) * uVar72;
    auStack_148[0] = (uint)(0x167 < (int)uVar20) * 0x167 | (0x167 >= (int)uVar20) * uVar20;
    auStack_148[1] = (uint)(0x167 < (int)uVar28) * 0x167 | (0x167 >= (int)uVar28) * uVar28;
    auStack_148[2] = (uint)(0x167 < (int)uVar30) * 0x167 | (0x167 >= (int)uVar30) * uVar30;
    auStack_148[3] = (uint)(0x167 < (int)uVar33) * 0x167 | (0x167 >= (int)uVar33) * uVar33;
    auVar54._4_4_ = -(uint)(aiStack_158[1] < (int)auStack_148[1]);
    auVar54._0_4_ = -(uint)(aiStack_158[0] < (int)auStack_148[0]);
    auVar54._8_4_ = -(uint)(aiStack_158[2] < (int)auStack_148[2]);
    auVar54._12_4_ = -(uint)(aiStack_158[3] < (int)auStack_148[3]);
    auVar54 = auVar53 & auVar73 & auVar54;
    auVar47._0_4_ =
         -(uint)(0.0 < (float)uStack_1c8 && 0.0 < fVar61) &
         -(uint)(0.0 < (float)uStack_1e8) & auVar54._0_4_;
    auVar47._4_4_ =
         -(uint)(0.0 < uStack_1c8._4_4_ && 0.0 < fVar32) &
         -(uint)(0.0 < uStack_1e8._4_4_) & auVar54._4_4_;
    auVar47._8_4_ =
         -(uint)(0.0 < fStack_1c0 && 0.0 < fStack_1d0) & -(uint)(0.0 < fStack_1e0) & auVar54._8_4_;
    auVar47._12_4_ =
         -(uint)(0.0 < fStack_1bc && 0.0 < fStack_1cc) & -(uint)(0.0 < fStack_1dc) & auVar54._12_4_;
    uVar20 = movmskps((int)lVar11,auVar47);
    uVar20 = uVar20 & uVar15;
    if (uVar20 != 0) {
      do {
        iVar77 = 0;
        if (uVar20 != 0) {
          for (; (uVar20 >> iVar77 & 1) == 0; iVar77 = iVar77 + 1) {
          }
        }
        uVar20 = uVar20 & uVar20 - 1;
        lVar18 = (longlong)iVar77;
        uStack_208 = 0;
        if (0 < aiStack_178[lVar18] / 0x50) {
          uStack_208 = aiStack_178[lVar18] / 0x50;
        }
        iVar77 = 0;
        if (0 < aiStack_158[lVar18] / 0x60) {
          iVar77 = aiStack_158[lVar18] / 0x60;
        }
        uStack_1c8 = (longlong)iVar77;
        iVar79 = 7;
        if ((int)auStack_168[lVar18] / 0x50 < 7) {
          iVar79 = (int)auStack_168[lVar18] / 0x50;
        }
        lVar16 = (longlong)iVar79;
        auStack_198._0_8_ = lVar16;
        iVar79 = 3;
        if ((int)auStack_148[lVar18] / 0x60 < 3) {
          iVar79 = (int)auStack_148[lVar18] / 0x60;
        }
        uStack_1e8 = (longlong)iVar79;
        if (uStack_1c8 <= uStack_1e8) {
          uVar13 = (ulonglong)(int)uStack_208;
          iVar77 = iVar77 << 0x11;
          uStack_1d8 = (int *)(in_stack_00000040 + (uVar13 + 2 + uStack_1c8 * 8) * 4);
          uVar10 = uVar13;
          do {
            iVar79 = (int)uVar10;
            if ((longlong)uVar13 <= lVar16) {
              uVar10 = uVar13;
              if (3 < (longlong)((lVar16 - uVar13) + 1)) {
                uVar5 = *(undefined4 *)(auStack_138 + lVar18 * 4);
                uVar6 = *(undefined4 *)(auStack_128 + lVar18 * 4);
                fVar85 = afStack_108[lVar18 + -4];
                fVar81 = afStack_108[lVar18];
                fVar93 = afStack_f8[lVar18];
                fVar31 = afStack_e8[lVar18];
                lVar17 = ((lVar16 - uVar13) - 3 >> 2) + 1;
                iVar94 = iVar79 << 0xe;
                uVar10 = lVar17 * 4 + uVar13;
                iVar79 = iVar79 + (int)lVar17 * 4;
                piVar14 = uStack_1d8;
                do {
                  iVar97 = iVar94 + 0xc000;
                  lVar11 = (longlong)(iVar94 + iVar77 + piVar14[-2]);
                  *(undefined4 *)(in_stack_00000038 + lVar11 * 0x18) = uVar5;
                  *(undefined4 *)(in_stack_00000038 + 4 + lVar11 * 0x18) = uVar6;
                  *(float *)(in_stack_00000038 + 8 + lVar11 * 0x18) = fVar85;
                  *(float *)(in_stack_00000038 + 0xc + lVar11 * 0x18) = fVar81;
                  *(float *)(in_stack_00000038 + 0x10 + lVar11 * 0x18) = fVar93;
                  *(float *)(in_stack_00000038 + 0x14 + lVar11 * 0x18) = fVar31;
                  piVar14[-2] = piVar14[-2] + 1;
                  iVar51 = piVar14[-1] + iVar94;
                  iVar94 = iVar94 + 0x10000;
                  lVar11 = (longlong)(iVar51 + iVar77) + 0x4000;
                  *(undefined4 *)(in_stack_00000038 + lVar11 * 0x18) = uVar5;
                  *(undefined4 *)(in_stack_00000038 + 4 + lVar11 * 0x18) = uVar6;
                  *(float *)(in_stack_00000038 + 8 + lVar11 * 0x18) = fVar85;
                  *(float *)(in_stack_00000038 + 0xc + lVar11 * 0x18) = fVar81;
                  *(float *)(in_stack_00000038 + 0x10 + lVar11 * 0x18) = fVar93;
                  *(float *)(in_stack_00000038 + 0x14 + lVar11 * 0x18) = fVar31;
                  piVar14[-1] = piVar14[-1] + 1;
                  lVar11 = (longlong)(*piVar14 + iVar97 + iVar77) + -0x4000;
                  *(undefined4 *)(in_stack_00000038 + lVar11 * 0x18) = uVar5;
                  *(undefined4 *)(in_stack_00000038 + 4 + lVar11 * 0x18) = uVar6;
                  *(float *)(in_stack_00000038 + 8 + lVar11 * 0x18) = fVar85;
                  *(float *)(in_stack_00000038 + 0xc + lVar11 * 0x18) = fVar81;
                  *(float *)(in_stack_00000038 + 0x10 + lVar11 * 0x18) = fVar93;
                  *(float *)(in_stack_00000038 + 0x14 + lVar11 * 0x18) = fVar31;
                  *piVar14 = *piVar14 + 1;
                  lVar11 = (longlong)(piVar14[1] + iVar97 + iVar77);
                  *(undefined4 *)(in_stack_00000038 + lVar11 * 0x18) = uVar5;
                  *(undefined4 *)(in_stack_00000038 + 4 + lVar11 * 0x18) = uVar6;
                  *(float *)(in_stack_00000038 + 8 + lVar11 * 0x18) = fVar85;
                  *(float *)(in_stack_00000038 + 0xc + lVar11 * 0x18) = fVar81;
                  *(float *)(in_stack_00000038 + 0x10 + lVar11 * 0x18) = fVar93;
                  *(float *)(in_stack_00000038 + 0x14 + lVar11 * 0x18) = fVar31;
                  piVar14[1] = piVar14[1] + 1;
                  lVar17 = lVar17 + -1;
                  piVar14 = piVar14 + 4;
                  uStack_1a8 = uVar10;
                } while (lVar17 != 0);
              }
              if ((longlong)uVar10 <= lVar16) {
                uVar5 = *(undefined4 *)(auStack_138 + lVar18 * 4);
                uVar6 = *(undefined4 *)(auStack_128 + lVar18 * 4);
                fVar85 = afStack_108[lVar18 + -4];
                fVar81 = afStack_108[lVar18];
                fVar93 = afStack_f8[lVar18];
                fVar31 = afStack_e8[lVar18];
                iVar79 = iVar79 << 0xe;
                lVar17 = (lVar16 - uVar10) + 1;
                piVar14 = (int *)(in_stack_00000040 + (uVar10 + uStack_1c8 * 8) * 4);
                do {
                  iVar94 = *piVar14 + iVar79;
                  iVar79 = iVar79 + 0x4000;
                  lVar11 = (longlong)(iVar94 + iVar77);
                  *(float *)(in_stack_00000038 + 0xc + lVar11 * 0x18) = fVar81;
                  *(float *)(in_stack_00000038 + 0x10 + lVar11 * 0x18) = fVar93;
                  *(float *)(in_stack_00000038 + 0x14 + lVar11 * 0x18) = fVar31;
                  *(undefined4 *)(in_stack_00000038 + lVar11 * 0x18) = uVar5;
                  *(undefined4 *)(in_stack_00000038 + 4 + lVar11 * 0x18) = uVar6;
                  *(float *)(in_stack_00000038 + 8 + lVar11 * 0x18) = fVar85;
                  *piVar14 = *piVar14 + 1;
                  lVar17 = lVar17 + -1;
                  piVar14 = piVar14 + 1;
                } while (lVar17 != 0);
              }
            }
            uVar10 = (ulonglong)uStack_208;
            uStack_1c8 = uStack_1c8 + 1;
            uStack_1d8 = uStack_1d8 + 8;
            iVar77 = iVar77 + 0x20000;
          } while (uStack_1c8 <= uStack_1e8);
        }
      } while (uVar20 != 0);
      uStack_1fc = 0;
      uVar15 = uStack_204;
    }
    uStack_200 = uStack_200 - 4;
    uVar20 = uStack_1f4;
  } while (uStack_1f4 <= in_stack_00000030);
  lStack_188 = param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)&uStack_208);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



