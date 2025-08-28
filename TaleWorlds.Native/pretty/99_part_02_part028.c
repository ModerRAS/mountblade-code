#include "TaleWorlds.Native.Split.h"

// 99_part_02_part028.c - 2 个函数

// 函数: void FUN_1801a082f(void)
void FUN_1801a082f(void)

{
  int64_t *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  char cVar17;
  int32_t uVar18;
  float *pfVar19;
  uint *puVar20;
  int64_t lVar21;
  float *unaff_RBP;
  int iVar22;
  uint uVar23;
  int64_t unaff_RSI;
  int64_t lVar25;
  int64_t lVar26;
  float *unaff_R12;
  float *unaff_R13;
  int64_t unaff_R14;
  uint64_t uVar27;
  int64_t unaff_R15;
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float unaff_XMM14_Da;
  float fVar49;
  int iStack0000000000000050;
  char cStack0000000000000055;
  int in_stack_00000058;
  int64_t in_stack_00000060;
  int64_t in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  uint64_t uVar24;
  
  do {
    fVar35 = *unaff_R12;
    fVar48 = unaff_R13[2];
    fVar34 = unaff_R12[2];
    fVar32 = unaff_R12[1];
    fVar30 = *unaff_R13;
    fVar31 = unaff_R13[1];
    unaff_RBP[-0x11] = 3.4028235e+38;
    unaff_RBP[-0xd] = 3.4028235e+38;
    fVar37 = fVar34 + fVar48 * unaff_XMM14_Da;
    unaff_RBP[0x3a] = 0.05;
    fVar28 = fVar35 - fVar30 * unaff_XMM14_Da;
    fVar34 = fVar34 - fVar48 * unaff_XMM14_Da;
    fVar35 = fVar35 + fVar30 * unaff_XMM14_Da;
    fVar36 = fVar32 + fVar31 * unaff_XMM14_Da;
    fVar32 = fVar32 - fVar31 * unaff_XMM14_Da;
    fVar48 = unaff_RBP[-0x11];
    fVar30 = unaff_RBP[-0xd];
    unaff_RBP[-0x14] = fVar28;
    unaff_RBP[-0x13] = fVar32;
    unaff_RBP[-0x12] = fVar34;
    unaff_RBP[-0x11] = fVar48;
    unaff_RBP[-0x10] = fVar35;
    unaff_RBP[-0xf] = fVar36;
    unaff_RBP[-0xe] = fVar37;
    unaff_RBP[-0xd] = fVar30;
    unaff_RBP[0x36] = fVar35;
    unaff_RBP[0x37] = fVar36;
    unaff_RBP[0x38] = fVar37;
    unaff_RBP[0x39] = fVar30;
    unaff_RBP[0x32] = fVar28;
    unaff_RBP[0x33] = fVar32;
    unaff_RBP[0x34] = fVar34;
    unaff_RBP[0x35] = fVar48;
    if ((unaff_RSI != 0) &&
       (cVar17 = FUN_1802edfe0(unaff_R14,unaff_RBP + 0x32,unaff_RBP + 0x1c,fVar32,
                               (int64_t)&stack0x00000050 + 5), cVar17 != '\0')) {
      lVar26 = (int64_t)cStack0000000000000055;
      puVar20 = (uint *)(lVar26 * 0x100 + *(int64_t *)(unaff_RSI + 0x18));
      do {
        LOCK();
        uVar23 = *puVar20;
        *puVar20 = *puVar20 | 1;
        UNLOCK();
      } while ((uVar23 & 1) != 0);
      uVar15 = *(uint64_t *)(puVar20 + 1);
      uVar16 = *(uint64_t *)(puVar20 + 3);
      fVar35 = (float)puVar20[5];
      fVar48 = (float)puVar20[6];
      fVar34 = (float)puVar20[7];
      fVar32 = (float)puVar20[8];
      *(uint64_t *)(unaff_RBP + 0xa0) = uVar15;
      *(uint64_t *)(unaff_RBP + 0xa2) = uVar16;
      unaff_RBP[0xa4] = fVar35;
      unaff_RBP[0xa5] = fVar48;
      unaff_RBP[0xa6] = fVar34;
      unaff_RBP[0xa7] = fVar32;
      *puVar20 = 0;
      *(uint64_t *)(unaff_RBP + 0x44) = uVar15;
      *(uint64_t *)(unaff_RBP + 0x46) = uVar16;
      unaff_RBP[0x48] = fVar35;
      unaff_RBP[0x49] = fVar48;
      unaff_RBP[0x4a] = fVar34;
      unaff_RBP[0x4b] = fVar32;
      FUN_18063b5f0(unaff_RBP + 0x5c,unaff_RBP + 0x44);
      fVar30 = unaff_RBP[0x5c];
      fVar31 = unaff_RBP[0x5d];
      fVar28 = unaff_RBP[0x5e];
      fVar36 = unaff_RBP[0x60];
      fVar37 = unaff_RBP[0x61];
      fVar33 = unaff_RBP[0x62];
      fVar29 = *(float *)(unaff_R14 + 0x70);
      fVar49 = *(float *)(unaff_R14 + 0x74);
      fVar2 = *(float *)(unaff_R14 + 0x78);
      fVar3 = *(float *)(unaff_R14 + 0x7c);
      fVar4 = *(float *)(unaff_R14 + 0x80);
      fVar5 = *(float *)(unaff_R14 + 0x84);
      fVar6 = *(float *)(unaff_R14 + 0x88);
      fVar7 = *(float *)(unaff_R14 + 0x8c);
      fVar8 = unaff_RBP[100];
      fVar9 = unaff_RBP[0x65];
      fVar10 = unaff_RBP[0x66];
      fVar11 = *(float *)(unaff_R14 + 0x90);
      fVar12 = *(float *)(unaff_R14 + 0x94);
      fVar13 = *(float *)(unaff_R14 + 0x98);
      fVar14 = *(float *)(unaff_R14 + 0x9c);
      unaff_RBP[0x90] = fVar30;
      unaff_RBP[0x91] = fVar31;
      unaff_RBP[0x92] = fVar28;
      unaff_RBP[0x93] = unaff_RBP[0x5f];
      unaff_RBP[0x94] = fVar36;
      unaff_RBP[0x95] = fVar37;
      unaff_RBP[0x96] = fVar33;
      unaff_RBP[0x97] = unaff_RBP[99];
      unaff_RBP[0x98] = fVar8;
      unaff_RBP[0x99] = fVar9;
      unaff_RBP[0x9a] = fVar10;
      unaff_RBP[0x9b] = unaff_RBP[0x67];
      unaff_RBP[0x9c] = fVar35;
      unaff_RBP[0x9d] = fVar48;
      unaff_RBP[0x9e] = fVar34;
      unaff_RBP[0x9f] = fVar32;
      fVar32 = fVar30 * fVar29 + fVar31 * fVar4 + fVar28 * fVar11;
      fVar41 = fVar30 * fVar49 + fVar31 * fVar5 + fVar28 * fVar12;
      fVar42 = fVar30 * fVar2 + fVar31 * fVar6 + fVar28 * fVar13;
      unaff_RBP[-0xc] = fVar32;
      unaff_RBP[0x68] = fVar32;
      unaff_RBP[0x69] = fVar41;
      unaff_RBP[0x6a] = fVar42;
      unaff_RBP[0x6b] = fVar30 * fVar3 + fVar31 * fVar7 + fVar28 * fVar14;
      fVar38 = fVar36 * fVar29 + fVar37 * fVar4 + fVar33 * fVar11;
      fVar39 = fVar36 * fVar49 + fVar37 * fVar5 + fVar33 * fVar12;
      fVar40 = fVar36 * fVar2 + fVar37 * fVar6 + fVar33 * fVar13;
      unaff_RBP[0x6c] = fVar38;
      unaff_RBP[0x6d] = fVar39;
      unaff_RBP[0x6e] = fVar40;
      unaff_RBP[0x6f] = fVar36 * fVar3 + fVar37 * fVar7 + fVar33 * fVar14;
      fVar36 = fVar8 * fVar29 + fVar9 * fVar4 + fVar10 * fVar11;
      fVar37 = fVar8 * fVar49 + fVar9 * fVar5 + fVar10 * fVar12;
      fVar33 = fVar8 * fVar2 + fVar9 * fVar6 + fVar10 * fVar13;
      unaff_RBP[0x70] = fVar36;
      unaff_RBP[0x71] = fVar37;
      unaff_RBP[0x72] = fVar33;
      unaff_RBP[0x73] = fVar8 * fVar3 + fVar9 * fVar7 + fVar10 * fVar14;
      fVar32 = *(float *)(unaff_R14 + 0xac);
      fVar30 = fVar35 * fVar29 + fVar48 * fVar4 + fVar34 * fVar11 + *(float *)(unaff_R14 + 0xa0);
      fVar31 = fVar35 * fVar49 + fVar48 * fVar5 + fVar34 * fVar12 + *(float *)(unaff_R14 + 0xa4);
      fVar28 = fVar35 * fVar2 + fVar48 * fVar6 + fVar34 * fVar13 + *(float *)(unaff_R14 + 0xa8);
      unaff_RBP[0x74] = fVar30;
      unaff_RBP[0x75] = fVar31;
      unaff_RBP[0x76] = fVar28;
      unaff_RBP[0x77] = fVar35 * fVar3 + fVar48 * fVar7 + fVar34 * fVar14 + fVar32;
      unaff_RBP[-0xb] = fVar41;
      unaff_RBP[-8] = fVar38;
      unaff_RBP[-7] = fVar39;
      unaff_RBP[-3] = fVar37;
      unaff_RBP[-4] = fVar36;
      *unaff_RBP = fVar30;
      unaff_RBP[2] = fVar28;
      unaff_RBP[-10] = fVar42;
      unaff_RBP[-6] = fVar40;
      unaff_RBP[-2] = fVar33;
      unaff_RBP[1] = fVar31;
      unaff_RBP[-9] = 0.0;
      unaff_RBP[-5] = 0.0;
      unaff_RBP[-1] = 0.0;
      unaff_RBP[3] = 1.0;
      FUN_180084760(unaff_RBP + -0xc,unaff_RBP + 4);
      fVar35 = unaff_RBP[0x1d];
      fVar48 = unaff_RBP[0x1e];
      fVar34 = unaff_RBP[0x1c];
      unaff_RBP[-0x1c] =
           fVar34 * unaff_RBP[4] + fVar35 * unaff_RBP[8] + fVar48 * unaff_RBP[0xc] + unaff_RBP[0x10]
      ;
      unaff_RBP[-0x1b] =
           fVar34 * unaff_RBP[5] + fVar35 * unaff_RBP[9] + fVar48 * unaff_RBP[0xd] + unaff_RBP[0x11]
      ;
      unaff_RBP[-0x1a] =
           fVar34 * unaff_RBP[6] + fVar35 * unaff_RBP[10] + fVar48 * unaff_RBP[0xe] +
           unaff_RBP[0x12];
      unaff_RBP[-0x19] =
           fVar34 * unaff_RBP[7] + fVar35 * unaff_RBP[0xb] + fVar48 * unaff_RBP[0xf] +
           unaff_RBP[0x13];
      FUN_1801c1140(unaff_RBP + 0x68,unaff_RBP + 0x20);
      lVar26 = lVar26 * 0x1b0 + *(int64_t *)(*(int64_t *)(unaff_RSI + 0x208) + 0x140);
      fVar30 = *(float *)(lVar26 + 0x30);
      fVar31 = *(float *)(lVar26 + 0x34);
      fVar28 = *(float *)(lVar26 + 0x38);
      fVar35 = *(float *)(lVar26 + 0x3c);
      fVar36 = *(float *)(lVar26 + 0x40);
      fVar37 = *(float *)(lVar26 + 0x44);
      fVar33 = *(float *)(lVar26 + 0x48);
      fVar29 = *(float *)(lVar26 + 0x4c);
      unaff_RBP[0x50] = fVar30;
      unaff_RBP[0x51] = fVar31;
      unaff_RBP[0x52] = fVar28;
      unaff_RBP[0x53] = fVar35;
      unaff_RBP[0x4c] = fVar36;
      unaff_RBP[0x4d] = fVar37;
      unaff_RBP[0x4e] = fVar33;
      unaff_RBP[0x4f] = fVar29;
      pfVar19 = (float *)FUN_1801c0fb0(unaff_RBP + 0x4c,unaff_RBP + 0x7c,unaff_RBP + -0x1c);
      lVar26 = in_stack_00000060;
      fVar35 = unaff_RBP[0x22];
      fVar48 = unaff_RBP[0x20];
      fVar34 = unaff_RBP[0x21];
      fVar30 = fVar30 + *pfVar19;
      fVar32 = pfVar19[2];
      unaff_RBP[-0x20] = fVar31 + pfVar19[1];
      unaff_RBP[-0x1f] = fVar31;
      unaff_RBP[-0x1e] = fVar31;
      unaff_RBP[-0x1d] = fVar31;
      fVar31 = fVar35 * fVar33 - fVar34 * fVar29;
      _fStack0000000000000070 = CONCAT44(fVar28,fVar28 + fVar32);
      fVar31 = fVar31 + fVar31;
      fVar49 = fVar48 * fVar29 - fVar35 * fVar37;
      fVar32 = fVar34 * fVar37 - fVar48 * fVar33;
      fVar49 = fVar49 + fVar49;
      fVar32 = fVar32 + fVar32;
      fVar48 = fVar31 * fVar36 + fVar48 + (fVar32 * fVar33 - fVar49 * fVar29);
      fVar33 = (fVar49 * fVar37 - fVar31 * fVar33) + fVar32 * fVar36 + fVar35;
      fVar35 = (fVar31 * fVar29 - fVar32 * fVar37) + fVar49 * fVar36 + fVar34;
      fStack0000000000000078 = fVar28;
      fStack000000000000007c = fVar28;
      if (*(int *)(unaff_RSI + 0x170) == -1) {
        *(int32_t *)(unaff_RSI + 0x16c) = 0x10;
        uVar18 = FUN_1801b9a40(in_stack_00000060 + 0x51d0,0x10);
        *(int32_t *)(unaff_RSI + 0x170) = uVar18;
        LOCK();
        *(int32_t *)(unaff_RSI + 0x168) = 0;
        UNLOCK();
      }
      unaff_RBP[0x24] = fVar30;
      unaff_RBP[0x25] = unaff_RBP[-0x20];
      unaff_RBP[0x26] = fStack0000000000000070;
      unaff_RBP[0x27] = unaff_RBP[0xf2];
      unaff_RBP[0x54] = fVar30;
      unaff_RBP[0x55] = unaff_RBP[-0x20];
      unaff_RBP[0x56] = fStack0000000000000070;
      unaff_RBP[0x57] = unaff_RBP[0xf2];
      unaff_RBP[0x28] = fVar48;
      unaff_RBP[0x29] = fVar35;
      unaff_RBP[0x2a] = fVar33;
      unaff_RBP[0x2b] = (float)iStack0000000000000050;
      unaff_RBP[0x58] = fVar48;
      unaff_RBP[0x59] = fVar35;
      unaff_RBP[0x5a] = fVar33;
      unaff_RBP[0x5b] = (float)iStack0000000000000050;
      FUN_18020a7b0(unaff_RSI + 0x160,lVar26 + 0x3fb8,unaff_RBP + 0x54);
    }
    do {
      unaff_R15 = unaff_R15 + 8;
      in_stack_00000058 = in_stack_00000058 + 1;
      lVar26 = **(int64_t **)(unaff_RBP + 0x2c);
      _fStack0000000000000070 = unaff_R15;
      if ((uint64_t)((*(int64_t **)(unaff_RBP + 0x2c))[1] - lVar26 >> 3) <=
          (uint64_t)(int64_t)in_stack_00000058) {
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xa8) ^ (uint64_t)&stack0x00000000);
      }
      unaff_R14 = *(int64_t *)(lVar26 + unaff_R15);
      lVar26 = *(int64_t *)(unaff_R14 + 0x20);
      unaff_RSI = *(int64_t *)(unaff_R14 + 0x260);
      *(int64_t *)(unaff_RBP + -0x20) = unaff_RSI;
    } while (lVar26 == 0);
    if ((unaff_RSI != 0) && (*(char *)(*(int64_t *)(unaff_RSI + 0x208) + 0x1b0) == '\x02')) {
      pfVar19 = *(float **)(unaff_R14 + 0x28);
      fVar35 = *unaff_R12;
      if ((*pfVar19 <= fVar35) &&
         ((((fVar35 < pfVar19[4] || fVar35 == pfVar19[4] &&
            (fVar35 = unaff_R12[1], pfVar19[1] <= fVar35)) &&
           (fVar35 < pfVar19[5] || fVar35 == pfVar19[5])) &&
          ((fVar35 = unaff_R12[2], pfVar19[2] <= fVar35 &&
           (fVar35 < pfVar19[6] || fVar35 == pfVar19[6])))))) {
        cVar17 = '\0';
        lVar26 = in_stack_00000060;
        if ('\0' < *(char *)(unaff_RSI + 0x20)) {
          do {
            lVar21 = (int64_t)cVar17 * 0x100 + *(int64_t *)(unaff_RSI + 0x18);
            iVar22 = 0;
            if (*(int64_t *)(lVar21 + 0xb8) - *(int64_t *)(lVar21 + 0xb0) >> 3 != 0) {
              in_stack_00000068 = lVar26 + 0x3fb8;
              lVar25 = 0;
              do {
                plVar1 = *(int64_t **)(lVar25 + *(int64_t *)(lVar21 + 0xb0));
                (**(code **)(*plVar1 + 0x208))(plVar1,in_stack_00000068);
                lVar25 = lVar25 + 8;
                iVar22 = iVar22 + 1;
                lVar26 = in_stack_00000060;
              } while ((uint64_t)(int64_t)iVar22 <
                       (uint64_t)(*(int64_t *)(lVar21 + 0xb8) - *(int64_t *)(lVar21 + 0xb0) >> 3)
                      );
            }
            unaff_RSI = *(int64_t *)(unaff_RBP + -0x20);
            cVar17 = cVar17 + '\x01';
          } while (cVar17 < *(char *)(unaff_RSI + 0x20));
        }
        lVar26 = *(int64_t *)(unaff_R14 + 0xf0);
        unaff_R15 = _fStack0000000000000070;
        if (*(int64_t *)(unaff_R14 + 0xf8) - lVar26 >> 3 != 0) {
          uVar24 = 0;
          uVar27 = uVar24;
          do {
            plVar1 = *(int64_t **)(lVar26 + uVar27);
            iVar22 = (**(code **)(*plVar1 + 0x98))(plVar1);
            if ((iVar22 == 0) && ((int)plVar1[0x42] != 0)) {
              if (*(code **)(*plVar1 + 0x158) == (code *)&unknown_var_2528_ptr) {
                pfVar19 = (float *)(plVar1 + 0x66);
              }
              else {
                pfVar19 = (float *)(**(code **)(*plVar1 + 0x158))(plVar1);
              }
              fVar2 = *(float *)(unaff_R14 + 0x80);
              fVar3 = *(float *)(unaff_R14 + 0x84);
              fVar4 = *(float *)(unaff_R14 + 0x88);
              fVar5 = *(float *)(unaff_R14 + 0x8c);
              fVar6 = *(float *)(unaff_R14 + 0x90);
              fVar7 = *(float *)(unaff_R14 + 0x94);
              fVar8 = *(float *)(unaff_R14 + 0x98);
              fVar9 = *(float *)(unaff_R14 + 0x9c);
              fVar10 = *(float *)(unaff_R14 + 0x70);
              fVar11 = *(float *)(unaff_R14 + 0x74);
              fVar12 = *(float *)(unaff_R14 + 0x78);
              fVar13 = *(float *)(unaff_R14 + 0x7c);
              fVar35 = pfVar19[1];
              fVar48 = *pfVar19;
              fVar34 = pfVar19[2];
              fVar32 = pfVar19[5];
              fVar30 = pfVar19[9];
              fVar31 = pfVar19[0xd];
              fVar28 = pfVar19[4];
              fVar45 = fVar35 * fVar2 + fVar48 * fVar10 + fVar34 * fVar6;
              fVar46 = fVar35 * fVar3 + fVar48 * fVar11 + fVar34 * fVar7;
              fVar47 = fVar35 * fVar4 + fVar48 * fVar12 + fVar34 * fVar8;
              fVar36 = pfVar19[6];
              fVar37 = pfVar19[8];
              fVar42 = fVar32 * fVar2 + fVar28 * fVar10 + fVar36 * fVar6;
              fVar43 = fVar32 * fVar3 + fVar28 * fVar11 + fVar36 * fVar7;
              fVar44 = fVar32 * fVar4 + fVar28 * fVar12 + fVar36 * fVar8;
              fVar33 = pfVar19[10];
              fVar29 = *unaff_R12;
              fVar49 = pfVar19[0xc];
              fVar38 = fVar30 * fVar2 + fVar37 * fVar10 + fVar33 * fVar6;
              fVar39 = fVar30 * fVar3 + fVar37 * fVar11 + fVar33 * fVar7;
              fVar40 = fVar30 * fVar4 + fVar37 * fVar12 + fVar33 * fVar8;
              fVar41 = fVar30 * fVar5 + fVar37 * fVar13 + fVar33 * fVar9;
              unaff_RBP[0x80] = fVar45;
              unaff_RBP[0x81] = fVar46;
              unaff_RBP[0x82] = fVar47;
              unaff_RBP[0x83] = fVar35 * fVar5 + fVar48 * fVar13 + fVar34 * fVar9;
              fVar35 = pfVar19[0xe];
              fVar30 = *(float *)(unaff_R14 + 0xa0);
              fVar37 = *(float *)(unaff_R14 + 0xa4);
              fVar33 = *(float *)(unaff_R14 + 0xa8);
              fVar14 = *(float *)(unaff_R14 + 0xac);
              unaff_RBP[0x84] = fVar42;
              unaff_RBP[0x85] = fVar43;
              unaff_RBP[0x86] = fVar44;
              unaff_RBP[0x87] = fVar32 * fVar5 + fVar28 * fVar13 + fVar36 * fVar9;
              fVar48 = unaff_R12[2];
              fVar30 = fVar31 * fVar2 + fVar49 * fVar10 + fVar35 * fVar6 + fVar30;
              fVar37 = fVar31 * fVar3 + fVar49 * fVar11 + fVar35 * fVar7 + fVar37;
              fVar33 = fVar31 * fVar4 + fVar49 * fVar12 + fVar35 * fVar8 + fVar33;
              fVar34 = unaff_R12[1];
              unaff_RBP[0x88] = fVar38;
              unaff_RBP[0x89] = fVar39;
              unaff_RBP[0x8a] = fVar40;
              unaff_RBP[0x8b] = fVar41;
              fVar29 = fVar29 - fVar30;
              unaff_RBP[0x8c] = fVar30;
              unaff_RBP[0x8d] = fVar37;
              unaff_RBP[0x8e] = fVar33;
              unaff_RBP[0x8f] = fVar31 * fVar5 + fVar49 * fVar13 + fVar35 * fVar9 + fVar14;
              fVar34 = fVar34 - fVar37;
              fVar48 = fVar48 - fVar33;
              fVar30 = *unaff_R13 - fVar30;
              unaff_RBP[0x14] = fVar29 * fVar45 + fVar34 * fVar46 + fVar48 * fVar47;
              unaff_RBP[0x15] = fVar29 * fVar42 + fVar34 * fVar43 + fVar48 * fVar44;
              unaff_RBP[0x16] = fVar29 * fVar38 + fVar34 * fVar39 + fVar48 * fVar40;
              unaff_RBP[0x17] = fVar29 * fVar41 + fVar34 * fVar41 + fVar48 * fVar41;
              fVar37 = unaff_R13[1] - fVar37;
              lVar26 = *(int64_t *)(unaff_R14 + 0x20);
              fVar33 = unaff_R13[2] - fVar33;
              lVar21 = plVar1[99];
              unaff_RBP[0x2e] = fVar37 * fVar46 + fVar30 * fVar45 + fVar33 * fVar47;
              unaff_RBP[0x2f] = fVar37 * fVar43 + fVar30 * fVar42 + fVar33 * fVar44;
              unaff_RBP[0x30] = fVar37 * fVar39 + fVar30 * fVar38 + fVar33 * fVar40;
              unaff_RBP[0x31] = fVar37 * fVar41 + fVar30 * fVar41 + fVar33 * fVar41;
              if ((int)lVar21 == -1) {
                *(int32_t *)((int64_t)plVar1 + 0x314) = 0x10;
                uVar18 = FUN_1801b9a40(lVar26 + 0x51d0,0x10);
                *(int32_t *)(plVar1 + 99) = uVar18;
                LOCK();
                *(int32_t *)(plVar1 + 0x62) = 0;
                UNLOCK();
                lVar26 = *(int64_t *)(unaff_R14 + 0x20);
              }
              unaff_RBP[-0x15] = 0.25;
              fVar35 = unaff_RBP[-0x15];
              unaff_RBP[-0x18] = unaff_RBP[0x14];
              unaff_RBP[-0x17] = unaff_RBP[0x15];
              unaff_RBP[-0x16] = unaff_RBP[0x16];
              unaff_RBP[-0x15] = fVar35;
              unaff_RBP[0x3c] = unaff_RBP[0x14];
              unaff_RBP[0x3d] = unaff_RBP[0x15];
              unaff_RBP[0x3e] = unaff_RBP[0x16];
              unaff_RBP[0x3f] = fVar35;
              unaff_RBP[0x18] = unaff_RBP[0x2e];
              unaff_RBP[0x19] = unaff_RBP[0x2f];
              unaff_RBP[0x1a] = unaff_RBP[0x30];
              unaff_RBP[0x1b] = (float)iStack0000000000000050;
              unaff_RBP[0x40] = unaff_RBP[0x2e];
              unaff_RBP[0x41] = unaff_RBP[0x2f];
              unaff_RBP[0x42] = unaff_RBP[0x30];
              unaff_RBP[0x43] = (float)iStack0000000000000050;
              FUN_18020a7b0(plVar1 + 0x61,lVar26 + 0x3fb8,unaff_RBP + 0x3c);
            }
            lVar26 = *(int64_t *)(unaff_R14 + 0xf0);
            uVar23 = (int)uVar24 + 1;
            uVar24 = (uint64_t)uVar23;
            uVar27 = uVar27 + 8;
          } while ((uint64_t)(int64_t)(int)uVar23 <
                   (uint64_t)(*(int64_t *)(unaff_R14 + 0xf8) - lVar26 >> 3));
          unaff_RSI = *(int64_t *)(unaff_RBP + -0x20);
          unaff_R15 = _fStack0000000000000070;
        }
      }
    }
  } while( true );
}






// 函数: void FUN_1801a0838(void)
void FUN_1801a0838(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x2a0) ^ (uint64_t)&stack0x00000000);
}






