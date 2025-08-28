#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part285.c - 1 个函数
// 函数: void NetworkProtocol_2b45b(void)
void NetworkProtocol_2b45b(void)
{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  int64_t lVar43;
  float *pfVar44;
  int iVar45;
  uint uVar46;
  float *pfVar47;
  uint64_t uVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  uint uVar53;
  float *unaff_RDI;
  float *in_R9;
  float *in_R10;
  float *in_R11;
  int iVar54;
  uint64_t unaff_R14;
  uint64_t uVar55;
  int64_t unaff_R15;
  int64_t lVar56;
  float *local_var_68;
  uint local_var_120;
  uint local_var_128;
  uint local_var_130;
  uint local_var_138;
  uint local_var_140;
  uVar46 = (uint)unaff_R14;
  iVar8 = uVar46 * 2;
  iVar45 = (int)local_var_128 >> 2;
  iVar7 = uVar46 * 3;
  uVar55 = unaff_R14;
  if (iVar45 != 0) {
    do {
      in_R9 = in_R9 + -4;
      iVar49 = 0;
      if ((int)uVar46 >> 2 != 0) {
        iVar50 = 0x400;
        iVar52 = (int)uVar46 >> 2;
        iVar51 = iVar49;
        do {
          pfVar47 = in_R9 + (iVar50 + -0x400);
          fVar6 = *pfVar47;
          fVar3 = pfVar47[1];
          fVar4 = pfVar47[2];
          pfVar44 = in_R9 + (iVar50 + -0x200);
          fVar5 = *pfVar44;
          fVar9 = pfVar44[1];
          fVar10 = pfVar44[2];
          fVar11 = pfVar44[3];
          pfVar44 = in_R9 + iVar50;
          fVar12 = *pfVar44;
          fVar13 = pfVar44[1];
          fVar14 = pfVar44[2];
          fVar15 = pfVar44[3];
          iVar49 = iVar50 + 0x200;
          iVar50 = iVar50 + 0x800;
          pfVar44 = in_R9 + iVar49;
          fVar16 = *pfVar44;
          fVar17 = pfVar44[1];
          fVar18 = pfVar44[2];
          fVar19 = pfVar44[3];
          iVar49 = iVar51 + 4;
          pfVar44 = in_R11 + iVar51;
          *pfVar44 = pfVar47[3];
          pfVar44[1] = fVar11;
          pfVar44[2] = fVar15;
          pfVar44[3] = fVar19;
          pfVar47 = in_R11 + (int64_t)iVar51 + unaff_R14;
          *pfVar47 = fVar4;
          pfVar47[1] = fVar10;
          pfVar47[2] = fVar14;
          pfVar47[3] = fVar18;
          pfVar47 = in_R11 + (int64_t)iVar8 + (int64_t)iVar51;
          *pfVar47 = fVar3;
          pfVar47[1] = fVar9;
          pfVar47[2] = fVar13;
          pfVar47[3] = fVar17;
          pfVar47 = in_R11 + (int64_t)iVar51 + (int64_t)iVar7;
          *pfVar47 = fVar6;
          pfVar47[1] = fVar5;
          pfVar47[2] = fVar12;
          pfVar47[3] = fVar16;
          iVar52 = iVar52 + -1;
          iVar51 = iVar49;
        } while (iVar52 != 0);
      }
      if ((unaff_R14 & 3) != 0) {
        iVar52 = iVar49 << 9;
        uVar53 = uVar46 & 3;
        do {
          lVar43 = (int64_t)iVar52;
          iVar52 = iVar52 + 0x200;
          pfVar47 = in_R9 + lVar43;
          fVar6 = *pfVar47;
          fVar3 = pfVar47[1];
          fVar4 = pfVar47[2];
          in_R11[iVar49] = pfVar47[3];
          in_R11[(int64_t)iVar49 + unaff_R14] = fVar4;
          in_R11[(int64_t)iVar49 + (int64_t)iVar8] = fVar3;
          in_R11[(int64_t)iVar7 + (int64_t)iVar49] = fVar6;
          uVar53 = uVar53 - 1;
          iVar49 = iVar49 + 1;
        } while (uVar53 != 0);
      }
      in_R11 = in_R11 + (int)(uVar46 * 4);
      iVar45 = iVar45 + -1;
    } while (iVar45 != 0);
    uVar55 = (uint64_t)local_var_120;
    in_R10 = local_var_68;
  }
  uVar46 = (uint)uVar55;
  for (local_var_128 = local_var_128 & 3; local_var_128 != 0;
      local_var_128 = local_var_128 - 1) {
    in_R9 = in_R9 + -1;
    pfVar47 = in_R9;
    for (uVar53 = uVar46; uVar53 != 0; uVar53 = uVar53 - 1) {
      fVar6 = *pfVar47;
      pfVar47 = pfVar47 + 0x200;
      *in_R11 = fVar6;
      in_R11 = in_R11 + 1;
    }
  }
  iVar45 = (int)local_var_130 >> 2;
  if (iVar45 != 0) {
    do {
      fVar6 = *(float *)(unaff_R15 + -0x10);
      fVar3 = *(float *)(unaff_R15 + -0xc);
      fVar4 = *(float *)(unaff_R15 + -8);
      fVar5 = *(float *)(unaff_R15 + -4);
      unaff_R15 = unaff_R15 + -0x10;
      in_R9 = in_R9 + -4;
      fVar9 = *unaff_RDI;
      fVar10 = unaff_RDI[1];
      fVar11 = unaff_RDI[2];
      fVar12 = unaff_RDI[3];
      iVar49 = 0;
      if ((int)uVar46 >> 2 != 0) {
        iVar50 = 0x800;
        iVar54 = 0x400;
        iVar52 = iVar49;
        iVar51 = (int)uVar46 >> 2;
        do {
          pfVar47 = in_R9 + (iVar54 + -0x400);
          fVar13 = *pfVar47;
          fVar14 = pfVar47[1];
          fVar15 = pfVar47[2];
          pfVar44 = in_R9 + (iVar54 + -0x200);
          fVar16 = *pfVar44;
          fVar17 = pfVar44[1];
          fVar18 = pfVar44[2];
          fVar19 = pfVar44[3];
          pfVar44 = in_R9 + iVar54;
          fVar20 = *pfVar44;
          fVar21 = pfVar44[1];
          fVar22 = pfVar44[2];
          fVar23 = pfVar44[3];
          iVar49 = iVar54 + 0x200;
          iVar54 = iVar54 + 0x800;
          pfVar44 = in_R9 + iVar49;
          fVar24 = *pfVar44;
          fVar25 = pfVar44[1];
          fVar26 = pfVar44[2];
          fVar27 = pfVar44[3];
          pfVar44 = in_R10 + (iVar50 + -0x800);
          fVar28 = pfVar44[1];
          fVar29 = pfVar44[2];
          fVar30 = pfVar44[3];
          pfVar2 = in_R10 + (iVar50 + -0x400);
          fVar31 = *pfVar2;
          fVar32 = pfVar2[1];
          fVar33 = pfVar2[2];
          fVar34 = pfVar2[3];
          pfVar2 = in_R10 + iVar50;
          fVar35 = *pfVar2;
          fVar36 = pfVar2[1];
          fVar37 = pfVar2[2];
          fVar38 = pfVar2[3];
          iVar49 = iVar50 + 0x400;
          iVar50 = iVar50 + 0x1000;
          pfVar2 = in_R10 + iVar49;
          fVar39 = *pfVar2;
          fVar40 = pfVar2[1];
          fVar41 = pfVar2[2];
          fVar42 = pfVar2[3];
          iVar49 = iVar52 + 4;
          pfVar2 = in_R11 + iVar52;
          *pfVar2 = pfVar47[3] * fVar5 + *pfVar44 * fVar9;
          pfVar2[1] = fVar19 * fVar5 + fVar31 * fVar9;
          pfVar2[2] = fVar23 * fVar5 + fVar35 * fVar9;
          pfVar2[3] = fVar27 * fVar5 + fVar39 * fVar9;
          pfVar47 = in_R11 + (int64_t)iVar52 + unaff_R14;
          *pfVar47 = fVar15 * fVar4 + fVar28 * fVar10;
          pfVar47[1] = fVar18 * fVar4 + fVar32 * fVar10;
          pfVar47[2] = fVar22 * fVar4 + fVar36 * fVar10;
          pfVar47[3] = fVar26 * fVar4 + fVar40 * fVar10;
          pfVar47 = in_R11 + (int64_t)iVar8 + (int64_t)iVar52;
          *pfVar47 = fVar14 * fVar3 + fVar29 * fVar11;
          pfVar47[1] = fVar17 * fVar3 + fVar33 * fVar11;
          pfVar47[2] = fVar21 * fVar3 + fVar37 * fVar11;
          pfVar47[3] = fVar25 * fVar3 + fVar41 * fVar11;
          pfVar47 = in_R11 + (int64_t)iVar52 + (int64_t)iVar7;
          *pfVar47 = fVar13 * fVar6 + fVar30 * fVar12;
          pfVar47[1] = fVar16 * fVar6 + fVar34 * fVar12;
          pfVar47[2] = fVar20 * fVar6 + fVar38 * fVar12;
          pfVar47[3] = fVar24 * fVar6 + fVar42 * fVar12;
          iVar51 = iVar51 + -1;
          iVar52 = iVar49;
        } while (iVar51 != 0);
      }
      if ((uVar55 & 3) != 0) {
        iVar52 = iVar49 << 10;
        iVar51 = iVar49 << 9;
        uVar53 = uVar46 & 3;
        do {
          lVar43 = (int64_t)iVar51;
          iVar51 = iVar51 + 0x200;
          pfVar47 = in_R9 + lVar43;
          fVar13 = *pfVar47;
          fVar14 = pfVar47[1];
          fVar15 = pfVar47[2];
          lVar43 = (int64_t)iVar52;
          iVar52 = iVar52 + 0x400;
          pfVar44 = in_R10 + lVar43;
          fVar16 = pfVar44[1];
          fVar17 = pfVar44[2];
          fVar18 = pfVar44[3];
          in_R11[iVar49] = pfVar47[3] * fVar5 + *pfVar44 * fVar9;
          in_R11[(int64_t)iVar49 + unaff_R14] = fVar15 * fVar4 + fVar16 * fVar10;
          in_R11[(int64_t)iVar49 + (int64_t)iVar8] = fVar14 * fVar3 + fVar17 * fVar11;
          in_R11[(int64_t)iVar49 + (int64_t)iVar7] = fVar13 * fVar6 + fVar18 * fVar12;
          uVar53 = uVar53 - 1;
          iVar49 = iVar49 + 1;
        } while (uVar53 != 0);
      }
      in_R11 = in_R11 + (int)(uVar46 * 4);
      in_R10 = in_R10 + 4;
      unaff_RDI = unaff_RDI + 4;
      iVar45 = iVar45 + -1;
    } while (iVar45 != 0);
    uVar55 = (uint64_t)local_var_120;
  }
  uVar46 = (uint)uVar55;
  for (local_var_130 = local_var_130 & 3; local_var_130 != 0;
      local_var_130 = local_var_130 - 1) {
    fVar6 = *(float *)(unaff_R15 + -4);
    unaff_R15 = unaff_R15 + -4;
    fVar3 = *unaff_RDI;
    in_R9 = in_R9 + -1;
    pfVar47 = in_R9;
    pfVar44 = in_R10;
    for (uVar53 = uVar46; uVar53 != 0; uVar53 = uVar53 - 1) {
      fVar4 = *pfVar47;
      pfVar47 = pfVar47 + 0x200;
      fVar5 = *pfVar44;
      pfVar44 = pfVar44 + 0x400;
      *in_R11 = fVar6 * fVar4 + fVar3 * fVar5;
      in_R11 = in_R11 + 1;
    }
    in_R10 = in_R10 + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  iVar45 = (int)local_var_138 >> 2;
  if (iVar45 != 0) {
    do {
      fVar6 = *(float *)(unaff_R15 + -0x10);
      fVar3 = *(float *)(unaff_R15 + -0xc);
      fVar4 = *(float *)(unaff_R15 + -8);
      fVar5 = *(float *)(unaff_R15 + -4);
      unaff_R15 = unaff_R15 + -0x10;
      in_R10 = in_R10 + -4;
      fVar9 = *unaff_RDI;
      fVar10 = unaff_RDI[1];
      fVar11 = unaff_RDI[2];
      fVar12 = unaff_RDI[3];
      iVar49 = 0;
      if ((int)uVar46 >> 2 != 0) {
        iVar54 = 0x800;
        iVar50 = 0x400;
        iVar52 = iVar49;
        iVar51 = (int)uVar46 >> 2;
        do {
          pfVar47 = in_R9 + (iVar50 + -0x400);
          fVar13 = pfVar47[1];
          fVar14 = pfVar47[2];
          fVar15 = pfVar47[3];
          pfVar44 = in_R9 + (iVar50 + -0x200);
          fVar16 = *pfVar44;
          fVar17 = pfVar44[1];
          fVar18 = pfVar44[2];
          fVar19 = pfVar44[3];
          pfVar44 = in_R9 + iVar50;
          fVar20 = *pfVar44;
          fVar21 = pfVar44[1];
          fVar22 = pfVar44[2];
          fVar23 = pfVar44[3];
          iVar49 = iVar50 + 0x200;
          iVar50 = iVar50 + 0x800;
          pfVar44 = in_R9 + iVar49;
          fVar24 = *pfVar44;
          fVar25 = pfVar44[1];
          fVar26 = pfVar44[2];
          fVar27 = pfVar44[3];
          iVar49 = iVar54 + -0x400;
          pfVar44 = in_R10 + (iVar54 + -0x800);
          fVar28 = *pfVar44;
          fVar29 = pfVar44[1];
          fVar30 = pfVar44[2];
          pfVar2 = in_R10 + iVar54;
          fVar31 = *pfVar2;
          fVar32 = pfVar2[1];
          fVar33 = pfVar2[2];
          fVar34 = pfVar2[3];
          iVar1 = iVar54 + 0x400;
          iVar54 = iVar54 + 0x1000;
          pfVar2 = in_R10 + iVar49;
          fVar35 = *pfVar2;
          fVar36 = pfVar2[1];
          fVar37 = pfVar2[2];
          fVar38 = pfVar2[3];
          pfVar2 = in_R10 + iVar1;
          fVar39 = *pfVar2;
          fVar40 = pfVar2[1];
          fVar41 = pfVar2[2];
          fVar42 = pfVar2[3];
          iVar49 = iVar52 + 4;
          pfVar2 = in_R11 + iVar52;
          *pfVar2 = *pfVar47 * fVar5 - pfVar44[3] * fVar9;
          pfVar2[1] = fVar16 * fVar5 - fVar38 * fVar9;
          pfVar2[2] = fVar20 * fVar5 - fVar34 * fVar9;
          pfVar2[3] = fVar24 * fVar5 - fVar42 * fVar9;
          pfVar47 = in_R11 + (int64_t)iVar52 + unaff_R14;
          *pfVar47 = fVar13 * fVar4 - fVar30 * fVar10;
          pfVar47[1] = fVar17 * fVar4 - fVar37 * fVar10;
          pfVar47[2] = fVar21 * fVar4 - fVar33 * fVar10;
          pfVar47[3] = fVar25 * fVar4 - fVar41 * fVar10;
          pfVar47 = in_R11 + (int64_t)iVar52 + (int64_t)iVar8;
          *pfVar47 = fVar14 * fVar3 - fVar29 * fVar11;
          pfVar47[1] = fVar18 * fVar3 - fVar36 * fVar11;
          pfVar47[2] = fVar22 * fVar3 - fVar32 * fVar11;
          pfVar47[3] = fVar26 * fVar3 - fVar40 * fVar11;
          pfVar47 = in_R11 + (int64_t)iVar52 + (int64_t)iVar7;
          *pfVar47 = fVar15 * fVar6 - fVar28 * fVar12;
          pfVar47[1] = fVar19 * fVar6 - fVar35 * fVar12;
          pfVar47[2] = fVar23 * fVar6 - fVar31 * fVar12;
          pfVar47[3] = fVar27 * fVar6 - fVar39 * fVar12;
          iVar51 = iVar51 + -1;
          iVar52 = iVar49;
        } while (iVar51 != 0);
      }
      if ((uVar55 & 3) != 0) {
        iVar52 = iVar49 << 9;
        iVar51 = iVar49 << 10;
        uVar53 = uVar46 & 3;
        do {
          lVar43 = (int64_t)iVar51;
          iVar51 = iVar51 + 0x400;
          pfVar47 = in_R10 + lVar43;
          fVar13 = *pfVar47;
          fVar14 = pfVar47[1];
          fVar15 = pfVar47[2];
          lVar43 = (int64_t)iVar52;
          iVar52 = iVar52 + 0x200;
          pfVar44 = in_R9 + lVar43;
          fVar16 = pfVar44[1];
          fVar17 = pfVar44[2];
          fVar18 = pfVar44[3];
          in_R11[iVar49] = *pfVar44 * fVar5 - pfVar47[3] * fVar9;
          in_R11[(int64_t)iVar49 + unaff_R14] = fVar16 * fVar4 - fVar15 * fVar10;
          in_R11[(int64_t)iVar49 + (int64_t)iVar8] = fVar17 * fVar3 - fVar14 * fVar11;
          in_R11[(int64_t)iVar49 + (int64_t)iVar7] = fVar18 * fVar6 - fVar13 * fVar12;
          uVar53 = uVar53 - 1;
          iVar49 = iVar49 + 1;
        } while (uVar53 != 0);
      }
      in_R11 = in_R11 + (int)(uVar46 * 4);
      in_R9 = in_R9 + 4;
      unaff_RDI = unaff_RDI + 4;
      iVar45 = iVar45 + -1;
    } while (iVar45 != 0);
    uVar55 = (uint64_t)local_var_120;
  }
  local_var_138 = local_var_138 & 3;
  uVar46 = (uint)uVar55;
  if (local_var_138 != 0) {
    lVar56 = unaff_R15 - (int64_t)in_R10;
    lVar43 = (int64_t)in_R9 - (int64_t)unaff_RDI;
    pfVar47 = in_R10;
    do {
      fVar6 = *unaff_RDI;
      in_R10 = pfVar47 + -1;
      fVar3 = *(float *)((int64_t)pfVar47 + lVar56 + -4);
      if (uVar46 != 0) {
        pfVar47 = (float *)(lVar43 + (int64_t)unaff_RDI);
        pfVar44 = in_R10;
        uVar53 = uVar46;
        do {
          fVar4 = *pfVar47;
          pfVar47 = pfVar47 + 0x200;
          fVar5 = *pfVar44;
          pfVar44 = pfVar44 + 0x400;
          *in_R11 = fVar3 * fVar4 - fVar6 * fVar5;
          in_R11 = in_R11 + 1;
          uVar53 = uVar53 - 1;
        } while (uVar53 != 0);
      }
      unaff_RDI = unaff_RDI + 1;
      local_var_138 = local_var_138 - 1;
      pfVar47 = in_R10;
    } while (local_var_138 != 0);
  }
  iVar45 = (int)local_var_140 >> 2;
  if (iVar45 != 0) {
    do {
      in_R10 = in_R10 + -4;
      iVar49 = 0;
      if ((int)uVar46 >> 2 != 0) {
        iVar50 = 0x800;
        iVar52 = iVar49;
        iVar51 = (int)uVar46 >> 2;
        do {
          pfVar47 = in_R10 + (iVar50 + -0x800);
          fVar6 = *pfVar47;
          fVar3 = pfVar47[1];
          fVar4 = pfVar47[2];
          pfVar44 = in_R10 + (iVar50 + -0x400);
          fVar5 = *pfVar44;
          fVar9 = pfVar44[1];
          fVar10 = pfVar44[2];
          fVar11 = pfVar44[3];
          pfVar44 = in_R10 + iVar50;
          fVar12 = *pfVar44;
          fVar13 = pfVar44[1];
          fVar14 = pfVar44[2];
          fVar15 = pfVar44[3];
          iVar49 = iVar50 + 0x400;
          iVar50 = iVar50 + 0x1000;
          pfVar44 = in_R10 + iVar49;
          fVar16 = *pfVar44;
          fVar17 = pfVar44[1];
          fVar18 = pfVar44[2];
          fVar19 = pfVar44[3];
          iVar49 = iVar52 + 4;
          pfVar44 = in_R11 + iVar52;
          *pfVar44 = pfVar47[3] * -1.0;
          pfVar44[1] = fVar11 * -1.0;
          pfVar44[2] = fVar15 * -1.0;
          pfVar44[3] = fVar19 * -1.0;
          pfVar47 = in_R11 + (int64_t)iVar52 + unaff_R14;
          *pfVar47 = fVar4 * -1.0;
          pfVar47[1] = fVar10 * -1.0;
          pfVar47[2] = fVar14 * -1.0;
          pfVar47[3] = fVar18 * -1.0;
          pfVar47 = in_R11 + (int64_t)iVar8 + (int64_t)iVar52;
          *pfVar47 = fVar3 * -1.0;
          pfVar47[1] = fVar9 * -1.0;
          pfVar47[2] = fVar13 * -1.0;
          pfVar47[3] = fVar17 * -1.0;
          pfVar47 = in_R11 + (int64_t)iVar7 + (int64_t)iVar52;
          *pfVar47 = fVar6 * -1.0;
          pfVar47[1] = fVar5 * -1.0;
          pfVar47[2] = fVar12 * -1.0;
          pfVar47[3] = fVar16 * -1.0;
          iVar51 = iVar51 + -1;
          iVar52 = iVar49;
        } while (iVar51 != 0);
      }
      if ((uVar55 & 3) != 0) {
        iVar52 = iVar49 << 10;
        uVar53 = uVar46 & 3;
        do {
          lVar43 = (int64_t)iVar52;
          iVar52 = iVar52 + 0x400;
          pfVar47 = in_R10 + lVar43;
          fVar6 = *pfVar47;
          fVar3 = pfVar47[1];
          fVar4 = pfVar47[2];
          in_R11[iVar49] = pfVar47[3] * -1.0;
          in_R11[(int64_t)iVar49 + unaff_R14] = fVar4 * -1.0;
          in_R11[(int64_t)iVar8 + (int64_t)iVar49] = fVar3 * -1.0;
          in_R11[(int64_t)iVar7 + (int64_t)iVar49] = fVar6 * -1.0;
          uVar53 = uVar53 - 1;
          iVar49 = iVar49 + 1;
        } while (uVar53 != 0);
      }
      in_R11 = in_R11 + (int)(uVar46 * 4);
      iVar45 = iVar45 + -1;
    } while (iVar45 != 0);
    uVar55 = (uint64_t)local_var_120;
  }
  for (local_var_140 = local_var_140 & 3; local_var_140 != 0;
      local_var_140 = local_var_140 - 1) {
    in_R10 = in_R10 + -1;
    uVar46 = (uint)uVar55;
    uVar48 = uVar55 & 0xffffffff;
    pfVar47 = in_R10;
    while (uVar46 != 0) {
      fVar6 = *pfVar47;
      pfVar47 = pfVar47 + 0x400;
      *in_R11 = -fVar6;
      in_R11 = in_R11 + 1;
      uVar46 = (int)uVar48 - 1;
      uVar48 = (uint64_t)uVar46;
    }
  }
  return;
}