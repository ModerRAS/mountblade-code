#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part112_sub002_sub002.c - 1 个函数

// 函数: void FUN_180734f59(void)
void FUN_180734f59(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
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
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  float *pfVar44;
  longlong lVar45;
  longlong lVar46;
  double *pdVar47;
  uint64_t *puVar48;
  float *pfVar49;
  uint uVar50;
  ulonglong uVar51;
  double *pdVar52;
  int unaff_EBX;
  longlong lVar53;
  longlong unaff_RBP;
  ulonglong uVar54;
  uint uVar55;
  int iVar56;
  ulonglong in_R10;
  uint uVar57;
  ulonglong uVar58;
  uint unaff_R12D;
  uint unaff_R14D;
  longlong unaff_R15;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  float unaff_XMM6_Da;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  double unaff_XMM12_Qa;
  double unaff_XMM13_Qa;
  double unaff_XMM14_Qa;
  int iStackX_20;
  int8_t *in_stack_00000028;
  longlong lStack0000000000000030;
  int iStack0000000000000038;
  int iStack000000000000003c;
  longlong in_stack_00000040;
  
  uVar54 = in_R10 & 0xffffffff;
  dVar59 = (double)unaff_XMM6_Da;
  lStack0000000000000030 = (longlong)unaff_EBX;
  iStack0000000000000038 = 1;
  while( true ) {
    if (0 < (int)unaff_R12D) {
      uVar58 = (ulonglong)*(uint *)(unaff_RBP + 0x440);
      lVar53 = lStack0000000000000030 - uVar54;
      lVar46 = lVar53 * 4 + -4;
      do {
        fVar14 = *(float *)(unaff_R15 + uVar54 * 4);
        lVar45 = unaff_R15 + uVar54 * 4;
        dVar67 = (double)fVar14;
        dVar60 = (double)*(float *)(lVar45 + -4 + lVar53 * 4 + uVar54 * -4);
        uVar51 = in_R10;
        if (3 < (longlong)uVar54) {
          fVar15 = *(float *)(lVar45 + lVar46 + uVar54 * -4);
          pfVar49 = (float *)(unaff_R15 + (lVar53 + 2) * 4);
          pfVar44 = (float *)(unaff_R15 + (uVar54 - 2) * 4);
          do {
            fVar16 = pfVar44[1];
            fVar17 = pfVar49[-2];
            dVar64 = *(double *)(&stack0x00000050 + uVar51 * 8);
            *(double *)(unaff_RBP + 0x1b0 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x1b0 + uVar51 * 8) - (double)(fVar14 * fVar16);
            fVar18 = *pfVar44;
            *(double *)(unaff_RBP + 0x270 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x270 + uVar51 * 8) - (double)(fVar17 * fVar15);
            fVar19 = pfVar49[-1];
            dVar61 = *(double *)(&stack0x00000058 + uVar51 * 8);
            *(double *)(unaff_RBP + 0x1b8 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x1b8 + uVar51 * 8) - (double)(fVar14 * fVar18);
            fVar20 = pfVar44[-1];
            *(double *)(unaff_RBP + 0x278 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x278 + uVar51 * 8) - (double)(fVar19 * fVar15);
            fVar21 = *pfVar49;
            dVar66 = *(double *)(&stack0x00000060 + uVar51 * 8);
            *(double *)(unaff_RBP + 0x1c0 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x1c0 + uVar51 * 8) - (double)(fVar14 * fVar20);
            fVar22 = pfVar44[-2];
            *(double *)(unaff_RBP + 0x280 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x280 + uVar51 * 8) - (double)(fVar21 * fVar15);
            fVar23 = pfVar49[1];
            *(double *)(unaff_RBP + 0x1c8 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x1c8 + uVar51 * 8) - (double)(fVar14 * fVar22);
            *(double *)(unaff_RBP + 0x288 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x288 + uVar51 * 8) - (double)(fVar23 * fVar15);
            lVar45 = uVar51 * 8;
            pfVar49 = pfVar49 + 4;
            uVar51 = uVar51 + 4;
            pfVar44 = pfVar44 + -4;
            dVar67 = dVar67 + (double)fVar16 * dVar64 + (double)fVar18 * dVar61 +
                     (double)fVar20 * dVar66 +
                     (double)fVar22 * *(double *)(&stack0x00000068 + lVar45);
            dVar60 = dVar60 + (double)fVar17 * dVar64 + (double)fVar19 * dVar61 +
                     (double)fVar21 * dVar66 +
                     (double)fVar23 * *(double *)(&stack0x00000068 + lVar45);
          } while ((longlong)uVar51 < (longlong)(uVar54 - 3));
        }
        if ((longlong)uVar51 < (longlong)uVar54) {
          fVar15 = *(float *)(unaff_R15 + lVar46);
          pfVar49 = (float *)(unaff_R15 + ((uVar51 - uVar54) + lStack0000000000000030) * 4);
          pfVar44 = (float *)(unaff_R15 + ((uVar54 - uVar51) + -1) * 4);
          do {
            fVar16 = *pfVar44;
            fVar17 = *pfVar49;
            pfVar44 = pfVar44 + -1;
            dVar64 = *(double *)(&stack0x00000050 + uVar51 * 8);
            pfVar49 = pfVar49 + 1;
            *(double *)(unaff_RBP + 0x1b0 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x1b0 + uVar51 * 8) - (double)(fVar14 * fVar16);
            *(double *)(unaff_RBP + 0x270 + uVar51 * 8) =
                 *(double *)(unaff_RBP + 0x270 + uVar51 * 8) - (double)(fVar15 * fVar17);
            uVar51 = uVar51 + 1;
            dVar60 = dVar60 + (double)fVar17 * dVar64;
            dVar67 = dVar67 + (double)fVar16 * dVar64;
          } while ((longlong)uVar51 < (longlong)uVar54);
        }
        if (-1 < (longlong)uVar54) {
          uVar51 = in_R10;
          if (3 < (longlong)(uVar54 + 1)) {
            pfVar44 = (float *)(lVar53 * 4 + 4 + unaff_R15);
            pfVar49 = (float *)(unaff_R15 + (uVar54 - 2) * 4);
            do {
              fVar14 = pfVar44[-2];
              *(double *)(unaff_RBP + 0x10 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0x10 + uVar51 * 8) - (double)pfVar49[2] * dVar67;
              fVar15 = pfVar49[1];
              *(double *)(unaff_RBP + 0xe0 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0xe0 + uVar51 * 8) - (double)fVar14 * dVar60;
              fVar14 = pfVar44[-1];
              *(double *)(unaff_RBP + 0x18 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0x18 + uVar51 * 8) - (double)fVar15 * dVar67;
              fVar15 = *pfVar49;
              *(double *)(unaff_RBP + 0xe8 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0xe8 + uVar51 * 8) - (double)fVar14 * dVar60;
              fVar14 = *pfVar44;
              *(double *)(unaff_RBP + 0x20 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0x20 + uVar51 * 8) - (double)fVar15 * dVar67;
              fVar15 = pfVar49[-1];
              pfVar49 = pfVar49 + -4;
              *(double *)(unaff_RBP + 0xf0 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0xf0 + uVar51 * 8) - (double)fVar14 * dVar60;
              fVar14 = pfVar44[1];
              pfVar44 = pfVar44 + 4;
              *(double *)(unaff_RBP + 0x28 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0x28 + uVar51 * 8) - (double)fVar15 * dVar67;
              *(double *)(unaff_RBP + 0xf8 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0xf8 + uVar51 * 8) - (double)fVar14 * dVar60;
              uVar51 = uVar51 + 4;
            } while ((longlong)uVar51 <= (longlong)(uVar54 - 3));
          }
          if ((longlong)uVar51 <= (longlong)uVar54) {
            pfVar49 = (float *)(unaff_R15 + (uVar54 - uVar51) * 4);
            pfVar44 = (float *)(unaff_R15 + ((uVar51 - uVar54) + -1 + lStack0000000000000030) * 4);
            do {
              fVar14 = *pfVar49;
              pfVar49 = pfVar49 + -1;
              fVar15 = *pfVar44;
              pfVar44 = pfVar44 + 1;
              *(double *)(unaff_RBP + 0x10 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0x10 + uVar51 * 8) - (double)fVar14 * dVar67;
              *(double *)(unaff_RBP + 0xe0 + uVar51 * 8) =
                   *(double *)(unaff_RBP + 0xe0 + uVar51 * 8) - (double)fVar15 * dVar60;
              uVar51 = uVar51 + 1;
            } while ((longlong)uVar51 <= (longlong)uVar54);
          }
        }
        unaff_R15 = unaff_R15 + lStack0000000000000030 * 4;
        uVar58 = uVar58 - 1;
      } while (uVar58 != 0);
      unaff_R14D = *(uint *)(unaff_RBP + 0x448);
      unaff_R12D = *(uint *)(unaff_RBP + 0x440);
    }
    dVar60 = *(double *)(unaff_RBP + 0x1b0 + uVar54 * 8);
    uVar57 = iStack0000000000000038 - 1;
    dVar67 = *(double *)(unaff_RBP + 0x270 + uVar54 * 8);
    uVar58 = in_R10;
    if ((0 < (int)uVar57) && (3 < iStack0000000000000038 - 1U)) {
      dVar63 = 0.0;
      dVar65 = 0.0;
      dVar64 = 0.0;
      dVar61 = 0.0;
      dVar66 = 0.0;
      dVar62 = 0.0;
      uVar50 = uVar57 & 0x80000003;
      if ((int)uVar50 < 0) {
        uVar50 = (uVar50 - 1 | 0xfffffffc) + 1;
      }
      iVar56 = iStack0000000000000038 + -3;
      dVar68 = 0.0;
      dVar70 = 0.0;
      do {
        lVar46 = uVar58 * 8;
        iVar40 = iVar56 + 1;
        lVar45 = (longlong)iVar56;
        dVar63 = dVar63 + *(double *)(unaff_RBP + 0x270 + (longlong)iVar40 * 8) *
                          *(double *)(&stack0x00000050 + lVar46);
        dVar65 = dVar65 + *(double *)(unaff_RBP + 0x270 + lVar45 * 8) *
                          *(double *)(&stack0x00000058 + lVar46);
        iVar41 = iVar56 + -1;
        iVar42 = iVar56 + -2;
        iVar56 = iVar56 + -4;
        lVar53 = uVar58 * 8;
        uVar58 = uVar58 + 4;
        dVar68 = dVar68 + *(double *)(unaff_RBP + 0x1b0 + (longlong)iVar40 * 8) *
                          *(double *)(&stack0x00000050 + lVar46);
        dVar70 = dVar70 + *(double *)(unaff_RBP + 0x1b0 + lVar45 * 8) *
                          *(double *)(&stack0x00000058 + lVar46);
        dVar64 = dVar64 + *(double *)(unaff_RBP + 0x270 + (longlong)iVar41 * 8) *
                          *(double *)(&stack0x00000060 + lVar53);
        dVar61 = dVar61 + *(double *)(unaff_RBP + 0x270 + (longlong)iVar42 * 8) *
                          *(double *)(&stack0x00000068 + lVar53);
        dVar66 = dVar66 + *(double *)(unaff_RBP + 0x1b0 + (longlong)iVar41 * 8) *
                          *(double *)(&stack0x00000060 + lVar53);
        dVar62 = dVar62 + *(double *)(unaff_RBP + 0x1b0 + (longlong)iVar42 * 8) *
                          *(double *)(&stack0x00000068 + lVar53);
      } while ((longlong)uVar58 < (longlong)(int)(uVar57 - uVar50));
      dVar67 = dVar67 + dVar68 + dVar66 + dVar70 + dVar62;
      dVar60 = dVar60 + dVar63 + dVar64 + dVar65 + dVar61;
    }
    if ((longlong)uVar58 < (longlong)uVar54) {
      if (3 < (longlong)(uVar54 - uVar58)) {
        lVar46 = (uVar54 - uVar58) * 8 + -8;
        do {
          lVar53 = uVar58 * 8;
          lVar45 = uVar58 * 8;
          pdVar47 = (double *)(unaff_RBP + 0x270 + lVar46);
          pdVar52 = (double *)(unaff_RBP + 0x1b0 + lVar46);
          pdVar8 = (double *)(unaff_RBP + 0x268 + lVar46);
          pdVar9 = (double *)(unaff_RBP + 0x1a8 + lVar46);
          lVar2 = uVar58 * 8;
          pdVar10 = (double *)(unaff_RBP + 0x260 + lVar46);
          pdVar11 = (double *)(unaff_RBP + 0x1a0 + lVar46);
          lVar3 = uVar58 * 8;
          uVar58 = uVar58 + 4;
          pdVar12 = (double *)(unaff_RBP + 600 + lVar46);
          pdVar13 = (double *)(unaff_RBP + 0x198 + lVar46);
          lVar46 = lVar46 + -0x20;
          dVar60 = dVar60 + *(double *)(&stack0x00000050 + lVar53) * *pdVar47 +
                   *(double *)(&stack0x00000058 + lVar45) * *pdVar8 +
                   *(double *)(&stack0x00000060 + lVar2) * *pdVar10 +
                   *(double *)(&stack0x00000068 + lVar3) * *pdVar12;
          dVar67 = dVar67 + *(double *)(&stack0x00000050 + lVar53) * *pdVar52 +
                   *(double *)(&stack0x00000058 + lVar45) * *pdVar9 +
                   *(double *)(&stack0x00000060 + lVar2) * *pdVar11 +
                   *(double *)(&stack0x00000068 + lVar3) * *pdVar13;
        } while ((longlong)uVar58 < (longlong)(uVar54 - 3));
      }
      if ((longlong)uVar58 < (longlong)uVar54) {
        lVar46 = (uVar54 - uVar58) * 8;
        do {
          lVar46 = lVar46 + -8;
          lVar53 = uVar58 * 8;
          uVar58 = uVar58 + 1;
          dVar67 = dVar67 + *(double *)(&stack0x00000050 + lVar53) *
                            *(double *)(unaff_RBP + 0x1b0 + lVar46);
          dVar60 = dVar60 + *(double *)(&stack0x00000050 + lVar53) *
                            *(double *)(unaff_RBP + 0x270 + lVar46);
        } while ((longlong)uVar58 < (longlong)uVar54);
      }
    }
    *(double *)(unaff_RBP + 0x18 + uVar54 * 8) = dVar60;
    dVar60 = *(double *)(unaff_RBP + 0x10);
    *(double *)(unaff_RBP + 0xe8 + uVar54 * 8) = dVar67;
    dVar64 = *(double *)(unaff_RBP + 0xe0);
    uVar58 = in_R10;
    if ((0 < (int)uVar57) && (3 < iStack0000000000000038 - 1U)) {
      dVar68 = 0.0;
      dVar70 = 0.0;
      dVar61 = 0.0;
      dVar66 = 0.0;
      dVar62 = 0.0;
      dVar63 = 0.0;
      dVar60 = 0.0;
      dVar65 = 0.0;
      uVar50 = uVar57 & 0x80000003;
      if ((int)uVar50 < 0) {
        uVar50 = (uVar50 - 1 | 0xfffffffc) + 1;
      }
      iVar56 = iStack0000000000000038 + -3;
      dVar29 = 0.0;
      dVar30 = 0.0;
      dVar69 = 0.0;
      dVar71 = 0.0;
      do {
        dVar31 = *(double *)(&stack0x00000050 + uVar58 * 8);
        dVar32 = *(double *)(&stack0x00000058 + uVar58 * 8);
        pdVar47 = (double *)(unaff_RBP + 0xe8 + uVar58 * 8);
        dVar29 = dVar29 + *pdVar47 * dVar31;
        dVar30 = dVar30 + pdVar47[1] * dVar32;
        lVar46 = (longlong)iVar56;
        pdVar47 = (double *)(unaff_RBP + 0x18 + uVar58 * 8);
        dVar33 = *(double *)(&stack0x00000060 + uVar58 * 8);
        dVar34 = *(double *)(&stack0x00000068 + uVar58 * 8);
        dVar69 = dVar69 + *pdVar47 * dVar31;
        dVar71 = dVar71 + pdVar47[1] * dVar32;
        pdVar47 = (double *)(unaff_RBP + 0xf8 + uVar58 * 8);
        dVar68 = dVar68 + *(double *)(unaff_RBP + 0xe0 + (longlong)(iVar56 + 2) * 8) * dVar31;
        dVar70 = dVar70 + *(double *)(unaff_RBP + 0xe0 + (longlong)(iVar56 + 1) * 8) * dVar32;
        iVar40 = iVar56 + -1;
        iVar56 = iVar56 + -4;
        dVar62 = dVar62 + *pdVar47 * dVar33;
        dVar63 = dVar63 + pdVar47[1] * dVar34;
        pdVar47 = (double *)(unaff_RBP + 0x28 + uVar58 * 8);
        uVar58 = uVar58 + 4;
        dVar61 = dVar61 + *(double *)(unaff_RBP + 0xe0 + lVar46 * 8) * dVar33;
        dVar66 = dVar66 + *(double *)(unaff_RBP + 0xe0 + (longlong)iVar40 * 8) * dVar34;
        dVar60 = dVar60 + *pdVar47 * dVar33;
        dVar65 = dVar65 + pdVar47[1] * dVar34;
      } while ((longlong)uVar58 < (longlong)(int)(uVar57 - uVar50));
      dVar60 = dVar69 + dVar60 + dVar71 + dVar65 + *(double *)(unaff_RBP + 0x10);
      dVar64 = dVar29 + dVar62 + dVar30 + dVar63 + dVar64;
      dVar67 = dVar68 + dVar61 + dVar70 + dVar66 + dVar67;
    }
    if ((longlong)uVar58 < (longlong)uVar54) {
      if (3 < (longlong)(uVar54 - uVar58)) {
        pdVar47 = (double *)(unaff_RBP + 0xd0 + (uVar54 - uVar58) * 8);
        do {
          dVar61 = *(double *)(&stack0x00000050 + uVar58 * 8);
          dVar66 = *(double *)(&stack0x00000058 + uVar58 * 8);
          pdVar52 = pdVar47 + 2;
          lVar3 = uVar58 * 8;
          lVar46 = uVar58 * 8;
          pdVar8 = pdVar47 + 1;
          lVar53 = uVar58 * 8;
          lVar5 = uVar58 * 8;
          dVar62 = *(double *)(&stack0x00000060 + uVar58 * 8);
          dVar63 = *pdVar47;
          lVar6 = uVar58 * 8;
          dVar65 = *(double *)(&stack0x00000068 + uVar58 * 8);
          lVar45 = uVar58 * 8;
          pdVar9 = pdVar47 + -1;
          pdVar47 = pdVar47 + -4;
          lVar2 = uVar58 * 8;
          lVar7 = uVar58 * 8;
          uVar58 = uVar58 + 4;
          dVar67 = dVar67 + dVar61 * *pdVar52 + dVar66 * *pdVar8 + dVar62 * dVar63 +
                   dVar65 * *pdVar9;
          dVar64 = dVar64 + dVar61 * *(double *)(unaff_RBP + 0xe8 + lVar3) +
                   dVar66 * *(double *)(unaff_RBP + 0xf0 + lVar5) +
                   dVar62 * *(double *)(unaff_RBP + 0xf8 + lVar6) +
                   dVar65 * *(double *)(unaff_RBP + 0x100 + lVar7);
          dVar60 = dVar60 + dVar61 * *(double *)(unaff_RBP + 0x18 + lVar46) +
                   dVar66 * *(double *)(unaff_RBP + 0x20 + lVar53) +
                   dVar62 * *(double *)(unaff_RBP + 0x28 + lVar45) +
                   dVar65 * *(double *)(unaff_RBP + 0x30 + lVar2);
        } while ((longlong)uVar58 < (longlong)(uVar54 - 3));
      }
      if ((longlong)uVar58 < (longlong)uVar54) {
        pdVar47 = (double *)(unaff_RBP + 0xe0 + (uVar54 - uVar58) * 8);
        do {
          dVar61 = *(double *)(&stack0x00000050 + uVar58 * 8);
          dVar66 = *pdVar47;
          pdVar47 = pdVar47 + -1;
          lVar53 = uVar58 * 8;
          lVar46 = uVar58 * 8;
          uVar58 = uVar58 + 1;
          dVar67 = dVar67 + dVar61 * dVar66;
          dVar64 = dVar64 + dVar61 * *(double *)(unaff_RBP + 0xe8 + lVar53);
          dVar60 = dVar60 + dVar61 * *(double *)(unaff_RBP + 0x18 + lVar46);
        } while ((longlong)uVar58 < (longlong)uVar54);
      }
    }
    dVar64 = (-2.0 / (dVar60 + dVar64)) * dVar67;
    dVar60 = (unaff_XMM12_Qa - dVar64 * dVar64) * unaff_XMM13_Qa;
    if (dVar60 <= dVar59) {
      dVar64 = SQRT(unaff_XMM12_Qa - dVar59 / unaff_XMM13_Qa);
      if (0.0 < dVar67) {
        dVar64 = (double)CONCAT44((uint)((ulonglong)dVar64 >> 0x20) ^ unaff_XMM11_Db,
                                  SUB84(dVar64,0) ^ unaff_XMM11_Da);
      }
      iStackX_20 = 1;
      dVar60 = dVar59;
    }
    lVar46 = (longlong)(iStack0000000000000038 >> 1);
    uVar58 = in_R10;
    if (3 < lVar46) {
      pdVar47 = (double *)(&stack0x00000040 + uVar54);
      do {
        dVar67 = pdVar47[1];
        dVar61 = *(double *)(&stack0x00000050 + uVar58 * 8);
        *(double *)(&stack0x00000050 + uVar58 * 8) = dVar64 * dVar67 + dVar61;
        dVar66 = *pdVar47;
        pdVar47[1] = dVar64 * dVar61 + dVar67;
        dVar67 = *(double *)(&stack0x00000058 + uVar58 * 8);
        *(double *)(&stack0x00000058 + uVar58 * 8) = dVar64 * dVar66 + dVar67;
        dVar61 = pdVar47[-1];
        *pdVar47 = dVar64 * dVar67 + dVar66;
        dVar67 = *(double *)(&stack0x00000060 + uVar58 * 8);
        *(double *)(&stack0x00000060 + uVar58 * 8) = dVar64 * dVar61 + dVar67;
        dVar66 = pdVar47[-2];
        pdVar47[-1] = dVar64 * dVar67 + dVar61;
        dVar67 = *(double *)(&stack0x00000068 + uVar58 * 8);
        *(double *)(&stack0x00000068 + uVar58 * 8) = dVar64 * dVar66 + dVar67;
        uVar58 = uVar58 + 4;
        pdVar47[-2] = dVar64 * dVar67 + dVar66;
        pdVar47 = pdVar47 + -4;
      } while ((longlong)uVar58 < lVar46 + -3);
    }
    if ((longlong)uVar58 < lVar46) {
      pdVar47 = (double *)(&stack0x00000048 + (uVar54 - uVar58) * 8);
      do {
        dVar67 = *pdVar47;
        dVar61 = *(double *)(&stack0x00000050 + uVar58 * 8);
        *(double *)(&stack0x00000050 + uVar58 * 8) = dVar64 * dVar67 + dVar61;
        uVar58 = uVar58 + 1;
        *pdVar47 = dVar64 * dVar61 + dVar67;
        pdVar47 = pdVar47 + -1;
      } while ((longlong)uVar58 < lVar46);
    }
    *(double *)(&stack0x00000050 + uVar54 * 8) = dVar64;
    uVar50 = (uint)in_R10;
    if (iStackX_20 != 0) break;
    uVar58 = in_R10 & 0xffffffff;
    if (-1 < iStack0000000000000038) {
      uVar1 = iStack0000000000000038 + 1;
      uVar51 = in_R10;
      uVar55 = uVar50;
      if (1 < uVar1) {
        uVar43 = uVar1 & 0x80000001;
        if ((int)uVar43 < 0) {
          uVar43 = (uVar43 - 1 | 0xfffffffe) + 1;
        }
        do {
          pdVar47 = (double *)(unaff_RBP + 0x10 + uVar51 * 8);
          dVar62 = *pdVar47;
          dVar63 = pdVar47[1];
          iVar56 = uVar57 + 1;
          uVar55 = (int)uVar58 + 2;
          uVar58 = (ulonglong)uVar55;
          lVar46 = (longlong)(int)uVar57;
          uVar57 = uVar57 - 2;
          dVar67 = *(double *)(unaff_RBP + 0xe0 + (longlong)iVar56 * 8);
          dVar61 = *(double *)(unaff_RBP + 0xe0 + lVar46 * 8);
          *(double *)(unaff_RBP + 0xe0 + (longlong)iVar56 * 8) = dVar64 * dVar62 + dVar67;
          dVar66 = dVar64 * dVar61 + dVar63;
          *(double *)(unaff_RBP + 0xe0 + lVar46 * 8) = dVar64 * dVar63 + dVar61;
          auVar27._8_4_ = SUB84(dVar66,0);
          auVar27._0_8_ = dVar64 * dVar67 + dVar62;
          auVar27._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
          *(int8_t (*) [16])(unaff_RBP + 0x10 + uVar51 * 8) = auVar27;
          uVar51 = uVar51 + 2;
        } while ((int)uVar55 <= (int)(iStack0000000000000038 - uVar43));
      }
      if ((int)uVar55 <= iStack0000000000000038) {
        if (3 < (int)((iStack0000000000000038 - uVar55) + 1)) {
          uVar57 = ((uVar1 - uVar55) - 4 >> 2) + 1;
          uVar58 = (ulonglong)uVar57;
          pdVar47 = (double *)(unaff_RBP + 0xd0 + (uVar54 - uVar51) * 8);
          uVar55 = uVar55 + uVar57 * 4;
          do {
            dVar67 = *(double *)(unaff_RBP + 0x10 + uVar51 * 8);
            dVar61 = *(double *)(unaff_RBP + 0x18 + uVar51 * 8);
            dVar66 = pdVar47[3];
            *(double *)(unaff_RBP + 0x10 + uVar51 * 8) = pdVar47[3] * dVar64 + dVar67;
            pdVar47[3] = dVar67 * dVar64 + dVar66;
            dVar67 = *(double *)(unaff_RBP + 0x20 + uVar51 * 8);
            dVar66 = pdVar47[2];
            *(double *)(unaff_RBP + 0x18 + uVar51 * 8) = pdVar47[2] * dVar64 + dVar61;
            pdVar47[2] = dVar61 * dVar64 + dVar66;
            dVar61 = pdVar47[1];
            *(double *)(unaff_RBP + 0x20 + uVar51 * 8) = pdVar47[1] * dVar64 + dVar67;
            pdVar47[1] = dVar67 * dVar64 + dVar61;
            dVar67 = *(double *)(unaff_RBP + 0x28 + uVar51 * 8);
            dVar61 = *pdVar47;
            *(double *)(unaff_RBP + 0x28 + uVar51 * 8) = *pdVar47 * dVar64 + dVar67;
            uVar51 = uVar51 + 4;
            *pdVar47 = dVar67 * dVar64 + dVar61;
            pdVar47 = pdVar47 + -4;
            uVar58 = uVar58 - 1;
          } while (uVar58 != 0);
        }
        if ((int)uVar55 <= iStack0000000000000038) {
          pdVar47 = (double *)(unaff_RBP + 0x10 + uVar51 * 8);
          pdVar52 = (double *)(unaff_RBP + 0xe8 + (uVar54 - uVar51) * 8);
          lVar46 = (longlong)(int)((iStack0000000000000038 - uVar55) + 1);
          do {
            dVar67 = *pdVar47;
            dVar61 = *pdVar52;
            *pdVar47 = *pdVar52 * dVar64 + dVar67;
            pdVar47 = pdVar47 + 1;
            *pdVar52 = dVar67 * dVar64 + dVar61;
            pdVar52 = pdVar52 + -1;
            lVar46 = lVar46 + -1;
          } while (lVar46 != 0);
        }
      }
    }
    iStack0000000000000038 = iStack0000000000000038 + 1;
    uVar54 = uVar54 + 1;
    unaff_R15 = in_stack_00000040;
    unaff_XMM13_Qa = dVar60;
    if ((int)unaff_R14D < iStack0000000000000038) {
LAB_180735ce2:
      lVar46 = (longlong)(int)unaff_R14D;
      if (iStackX_20 == 0) {
        dVar60 = *(double *)(unaff_RBP + 0x10);
        uVar54 = in_R10 & 0xffffffff;
        if ((0 < (int)unaff_R14D) && (3 < unaff_R14D)) {
          if ((((int8_t *)(unaff_RBP + 0x10 + lVar46 * 8) < in_stack_00000028) ||
              (in_stack_00000028 + (longlong)(int)(unaff_R14D - 1) * 4 <
               (int8_t *)(unaff_RBP + 0x18U))) &&
             ((&stack0x00000050 + (longlong)(int)(unaff_R14D - 1) * 8 < in_stack_00000028 ||
              (in_stack_00000028 + (longlong)(int)(unaff_R14D - 1) * 4 < &stack0x00000050)))) {
            dVar59 = 0.0;
            dVar67 = 0.0;
            dVar64 = 0.0;
            dVar61 = 0.0;
            dVar60 = 0.0;
            dVar66 = 0.0;
            uVar57 = unaff_R14D & 0x80000003;
            if ((int)uVar57 < 0) {
              uVar57 = (uVar57 - 1 | 0xfffffffc) + 1;
            }
            dVar62 = 0.0;
            dVar63 = 0.0;
            do {
              auVar27 = *(int8_t (*) [16])(&stack0x00000050 + in_R10 * 8);
              dVar65 = auVar27._0_8_;
              dVar68 = auVar27._8_8_;
              uVar50 = (int)uVar54 + 4;
              uVar54 = (ulonglong)uVar50;
              pdVar47 = (double *)(unaff_RBP + 0x18 + in_R10 * 8);
              dVar62 = dVar62 + *pdVar47 * dVar65;
              dVar63 = dVar63 + pdVar47[1] * dVar68;
              dVar59 = dVar59 + dVar65 * dVar65;
              dVar67 = dVar67 + dVar68 * dVar68;
              auVar28 = *(int8_t (*) [16])(&stack0x00000060 + in_R10 * 8);
              dVar65 = auVar28._0_8_;
              dVar68 = auVar28._8_8_;
              *(ulonglong *)(in_stack_00000028 + in_R10 * 4) =
                   CONCAT44((float)(double)CONCAT44(auVar27._12_4_ ^ unaff_XMM11_Dd,
                                                    auVar27._8_4_ ^ unaff_XMM11_Dc),
                            (float)(double)CONCAT44(auVar27._4_4_ ^ unaff_XMM11_Db,
                                                    auVar27._0_4_ ^ unaff_XMM11_Da));
              pdVar47 = (double *)(unaff_RBP + 0x28 + in_R10 * 8);
              dVar60 = dVar60 + *pdVar47 * dVar65;
              dVar66 = dVar66 + pdVar47[1] * dVar68;
              dVar64 = dVar64 + dVar65 * dVar65;
              dVar61 = dVar61 + dVar68 * dVar68;
              *(ulonglong *)(in_stack_00000028 + in_R10 * 4 + 8) =
                   CONCAT44((float)(double)CONCAT44(auVar28._12_4_ ^ unaff_XMM11_Dd,
                                                    auVar28._8_4_ ^ unaff_XMM11_Dc),
                            (float)(double)CONCAT44(auVar28._4_4_ ^ unaff_XMM11_Db,
                                                    auVar28._0_4_ ^ unaff_XMM11_Da));
              in_R10 = in_R10 + 4;
            } while ((longlong)in_R10 < (longlong)(int)(unaff_R14D - uVar57));
            dVar60 = dVar62 + dVar60 + dVar63 + dVar66 + *(double *)(unaff_RBP + 0x10);
            unaff_XMM12_Qa = dVar59 + dVar64 + dVar67 + dVar61 + unaff_XMM12_Qa;
          }
        }
        lVar53 = (longlong)(int)uVar50;
        if (lVar53 < lVar46) {
          if (3 < lVar46 - lVar53) {
            pfVar49 = (float *)(in_stack_00000028 + (lVar53 + 2) * 4);
            do {
              dVar59 = *(double *)(&stack0x00000050 + lVar53 * 8);
              dVar67 = *(double *)(&stack0x00000058 + lVar53 * 8);
              dVar64 = *(double *)(unaff_RBP + 0x18 + lVar53 * 8);
              dVar61 = *(double *)(&stack0x00000060 + lVar53 * 8);
              pfVar49[-2] = (float)(double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) ^
                                                    unaff_XMM11_Db,SUB84(dVar59,0) ^ unaff_XMM11_Da)
              ;
              dVar66 = *(double *)(unaff_RBP + 0x20 + lVar53 * 8);
              dVar62 = *(double *)(unaff_RBP + 0x28 + lVar53 * 8);
              dVar63 = *(double *)(&stack0x00000068 + lVar53 * 8);
              pfVar49[-1] = (float)(double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) ^
                                                    unaff_XMM11_Db,SUB84(dVar67,0) ^ unaff_XMM11_Da)
              ;
              lVar45 = lVar53 * 8;
              lVar53 = lVar53 + 4;
              dVar60 = dVar60 + dVar59 * dVar64 + dVar67 * dVar66 + dVar61 * dVar62 +
                       dVar63 * *(double *)(unaff_RBP + 0x30 + lVar45);
              *pfVar49 = (float)(double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) ^ unaff_XMM11_Db,
                                                 SUB84(dVar61,0) ^ unaff_XMM11_Da);
              unaff_XMM12_Qa =
                   unaff_XMM12_Qa + dVar59 * dVar59 + dVar67 * dVar67 + dVar61 * dVar61 +
                   dVar63 * dVar63;
              pfVar49[1] = (float)(double)CONCAT44((uint)((ulonglong)dVar63 >> 0x20) ^
                                                   unaff_XMM11_Db,SUB84(dVar63,0) ^ unaff_XMM11_Da);
              pfVar49 = pfVar49 + 4;
            } while (lVar53 < lVar46 + -3);
          }
          for (; lVar53 < lVar46; lVar53 = lVar53 + 1) {
            dVar59 = *(double *)(&stack0x00000050 + lVar53 * 8);
            dVar60 = dVar60 + dVar59 * *(double *)(unaff_RBP + 0x18 + lVar53 * 8);
            unaff_XMM12_Qa = unaff_XMM12_Qa + dVar59 * dVar59;
            *(float *)(in_stack_00000028 + lVar53 * 4) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) ^ unaff_XMM11_Db,
                                         SUB84(dVar59,0) ^ unaff_XMM11_Da);
          }
        }
        dVar60 = dVar60 + unaff_XMM14_Qa * -9.999999747378752e-06 * unaff_XMM12_Qa;
      }
      else {
        uVar54 = in_R10 & 0xffffffff;
        if (((0 < (int)unaff_R14D) && (7 < unaff_R14D)) &&
           ((&stack0x00000050 + (longlong)(int)(unaff_R14D - 1) * 8 < in_stack_00000028 ||
            (in_stack_00000028 + (longlong)(int)(unaff_R14D - 1) * 4 < &stack0x00000050)))) {
          uVar57 = unaff_R14D & 0x80000007;
          if ((int)uVar57 < 0) {
            uVar57 = (uVar57 - 1 | 0xfffffff8) + 1;
          }
          puVar48 = (uint64_t *)(in_stack_00000028 + 0x10);
          do {
            lVar53 = in_R10 * 8;
            uVar50 = (int)uVar54 + 8;
            uVar54 = (ulonglong)uVar50;
            lVar45 = in_R10 * 8;
            uVar1 = *(uint *)(&stack0x00000060 + lVar45);
            uVar55 = *(uint *)(&stack0x00000064 + lVar45);
            uVar43 = *(uint *)(&stack0x00000068 + lVar45);
            uVar35 = *(uint *)(&stack0x0000006c + lVar45);
            puVar48[-2] = CONCAT44((float)(double)CONCAT44(*(uint *)(&stack0x0000005c + lVar53) ^
                                                           unaff_XMM11_Dd,
                                                           *(uint *)(&stack0x00000058 + lVar53) ^
                                                           unaff_XMM11_Dc),
                                   (float)(double)CONCAT44(*(uint *)(&stack0x00000054 + lVar53) ^
                                                           unaff_XMM11_Db,
                                                           *(uint *)(&stack0x00000050 + lVar53) ^
                                                           unaff_XMM11_Da));
            lVar53 = in_R10 * 8;
            uVar36 = *(uint *)(&stack0x00000070 + lVar53);
            uVar37 = *(uint *)(&stack0x00000074 + lVar53);
            uVar38 = *(uint *)(&stack0x00000078 + lVar53);
            uVar39 = *(uint *)(&stack0x0000007c + lVar53);
            puVar48[-1] = CONCAT44((float)(double)CONCAT44(uVar35 ^ unaff_XMM11_Dd,
                                                           uVar43 ^ unaff_XMM11_Dc),
                                   (float)(double)CONCAT44(uVar55 ^ unaff_XMM11_Db,
                                                           uVar1 ^ unaff_XMM11_Da));
            puVar4 = (uint *)(unaff_RBP + -0x80 + in_R10 * 8);
            uVar1 = *puVar4;
            uVar55 = puVar4[1];
            uVar43 = puVar4[2];
            uVar35 = puVar4[3];
            in_R10 = in_R10 + 8;
            *puVar48 = CONCAT44((float)(double)CONCAT44(uVar39 ^ unaff_XMM11_Dd,
                                                        uVar38 ^ unaff_XMM11_Dc),
                                (float)(double)CONCAT44(uVar37 ^ unaff_XMM11_Db,
                                                        uVar36 ^ unaff_XMM11_Da));
            puVar48[1] = CONCAT44((float)(double)CONCAT44(uVar35 ^ unaff_XMM11_Dd,
                                                          uVar43 ^ unaff_XMM11_Dc),
                                  (float)(double)CONCAT44(uVar55 ^ unaff_XMM11_Db,
                                                          uVar1 ^ unaff_XMM11_Da));
            puVar48 = puVar48 + 4;
          } while ((longlong)in_R10 < (longlong)(int)(unaff_R14D - uVar57));
        }
        lVar53 = (longlong)(int)uVar50;
        if (lVar53 < lVar46) {
          if (3 < lVar46 - lVar53) {
            pfVar49 = (float *)(in_stack_00000028 + (lVar53 + 2) * 4);
            do {
              uVar24 = *(uint64_t *)(&stack0x00000058 + lVar53 * 8);
              uVar25 = *(uint64_t *)(&stack0x00000060 + lVar53 * 8);
              pfVar49[-2] = (float)(double)CONCAT44((uint)((ulonglong)
                                                           *(uint64_t *)
                                                            (&stack0x00000050 + lVar53 * 8) >> 0x20)
                                                    ^ unaff_XMM11_Db,
                                                    (uint)*(uint64_t *)
                                                           (&stack0x00000050 + lVar53 * 8) ^
                                                    unaff_XMM11_Da);
              uVar26 = *(uint64_t *)(&stack0x00000068 + lVar53 * 8);
              lVar53 = lVar53 + 4;
              pfVar49[-1] = (float)(double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) ^
                                                    unaff_XMM11_Db,(uint)uVar24 ^ unaff_XMM11_Da);
              *pfVar49 = (float)(double)CONCAT44((uint)((ulonglong)uVar25 >> 0x20) ^ unaff_XMM11_Db,
                                                 (uint)uVar25 ^ unaff_XMM11_Da);
              pfVar49[1] = (float)(double)CONCAT44((uint)((ulonglong)uVar26 >> 0x20) ^
                                                   unaff_XMM11_Db,(uint)uVar26 ^ unaff_XMM11_Da);
              pfVar49 = pfVar49 + 4;
            } while (lVar53 < lVar46 + -3);
          }
          for (; lVar53 < lVar46; lVar53 = lVar53 + 1) {
            *(float *)(in_stack_00000028 + lVar53 * 4) =
                 (float)(double)CONCAT44((uint)((ulonglong)
                                                *(uint64_t *)(&stack0x00000050 + lVar53 * 8) >>
                                               0x20) ^ unaff_XMM11_Db,
                                         (uint)*(uint64_t *)(&stack0x00000050 + lVar53 * 8) ^
                                         unaff_XMM11_Da);
          }
        }
        if (0 < (int)unaff_R12D) {
          uVar54 = (ulonglong)unaff_R12D;
          lVar46 = in_stack_00000040;
          do {
            dVar59 = (double)FUN_18072b3a0(lVar46,unaff_R14D);
            lVar46 = lVar46 + (longlong)iStack000000000000003c * 4;
            unaff_XMM14_Qa = unaff_XMM14_Qa - dVar59;
            uVar54 = uVar54 - 1;
          } while (uVar54 != 0);
        }
        dVar60 = dVar60 * unaff_XMM14_Qa;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050((float)dVar60);
    }
  }
  if (iStack0000000000000038 < (int)unaff_R14D) {
    puVar48 = (uint64_t *)(&stack0x00000050 + (longlong)iStack0000000000000038 * 8);
    for (lVar46 = (longlong)(int)(unaff_R14D - iStack0000000000000038); lVar46 != 0;
        lVar46 = lVar46 + -1) {
      *puVar48 = 0;
      puVar48 = puVar48 + 1;
    }
  }
  goto LAB_180735ce2;
}







