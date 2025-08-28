#include "TaleWorlds.Native.Split.h"
// 99_part_02_part029.c - 1 个函数
// 函数: void function_1a0854(uint64_t param_1,code *param_2)
void function_1a0854(uint64_t param_1,code *param_2)
{
  uint uVar1;
  int64_t *plVar2;
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
  float fVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  char cVar18;
  int32_t uVar19;
  float *pfVar20;
  uint *puVar21;
  int64_t lVar22;
  int64_t *unaff_RBX;
  float *unaff_RBP;
  int iVar23;
  int unaff_ESI;
  int unaff_EDI;
  int64_t lVar24;
  float *unaff_R12;
  float *unaff_R13;
  int64_t unaff_R14;
  int64_t lVar25;
  int64_t unaff_R15;
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float unaff_XMM14_Da;
  float fVar47;
  int iStack0000000000000050;
  char cStack0000000000000055;
  int local_buffer_58;
  int64_t local_var_60;
  int64_t local_var_68;
  float fStack0000000000000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  do {
    pfVar20 = (float *)(*param_2)(unaff_RBX);
    while( true ) {
      fVar3 = *(float *)(unaff_R14 + 0x80);
      fVar4 = *(float *)(unaff_R14 + 0x84);
      fVar5 = *(float *)(unaff_R14 + 0x88);
      fVar6 = *(float *)(unaff_R14 + 0x8c);
      fVar7 = *(float *)(unaff_R14 + 0x90);
      fVar8 = *(float *)(unaff_R14 + 0x94);
      fVar9 = *(float *)(unaff_R14 + 0x98);
      fVar10 = *(float *)(unaff_R14 + 0x9c);
      fVar11 = *(float *)(unaff_R14 + 0x70);
      fVar12 = *(float *)(unaff_R14 + 0x74);
      fVar13 = *(float *)(unaff_R14 + 0x78);
      fVar14 = *(float *)(unaff_R14 + 0x7c);
      fVar32 = pfVar20[1];
      fVar27 = *pfVar20;
      fVar26 = pfVar20[2];
      fVar31 = pfVar20[5];
      fVar38 = pfVar20[9];
      fVar30 = pfVar20[0xd];
      fVar28 = pfVar20[4];
      fVar44 = fVar32 * fVar3 + fVar27 * fVar11 + fVar26 * fVar7;
      fVar45 = fVar32 * fVar4 + fVar27 * fVar12 + fVar26 * fVar8;
      fVar46 = fVar32 * fVar5 + fVar27 * fVar13 + fVar26 * fVar9;
      fVar33 = pfVar20[6];
      fVar39 = pfVar20[8];
      fVar41 = fVar31 * fVar3 + fVar28 * fVar11 + fVar33 * fVar7;
      fVar42 = fVar31 * fVar4 + fVar28 * fVar12 + fVar33 * fVar8;
      fVar43 = fVar31 * fVar5 + fVar28 * fVar13 + fVar33 * fVar9;
      fVar40 = pfVar20[10];
      fVar29 = *unaff_R12;
      fVar47 = pfVar20[0xc];
      fVar34 = fVar38 * fVar3 + fVar39 * fVar11 + fVar40 * fVar7;
      fVar35 = fVar38 * fVar4 + fVar39 * fVar12 + fVar40 * fVar8;
      fVar36 = fVar38 * fVar5 + fVar39 * fVar13 + fVar40 * fVar9;
      fVar37 = fVar38 * fVar6 + fVar39 * fVar14 + fVar40 * fVar10;
      unaff_RBP[0x80] = fVar44;
      unaff_RBP[0x81] = fVar45;
      unaff_RBP[0x82] = fVar46;
      unaff_RBP[0x83] = fVar32 * fVar6 + fVar27 * fVar14 + fVar26 * fVar10;
      fVar32 = pfVar20[0xe];
      fVar38 = *(float *)(unaff_R14 + 0xa0);
      fVar39 = *(float *)(unaff_R14 + 0xa4);
      fVar40 = *(float *)(unaff_R14 + 0xa8);
      fVar15 = *(float *)(unaff_R14 + 0xac);
      unaff_RBP[0x84] = fVar41;
      unaff_RBP[0x85] = fVar42;
      unaff_RBP[0x86] = fVar43;
      unaff_RBP[0x87] = fVar31 * fVar6 + fVar28 * fVar14 + fVar33 * fVar10;
      fVar27 = unaff_R12[2];
      fVar38 = fVar30 * fVar3 + fVar47 * fVar11 + fVar32 * fVar7 + fVar38;
      fVar39 = fVar30 * fVar4 + fVar47 * fVar12 + fVar32 * fVar8 + fVar39;
      fVar40 = fVar30 * fVar5 + fVar47 * fVar13 + fVar32 * fVar9 + fVar40;
      fVar26 = unaff_R12[1];
      unaff_RBP[0x88] = fVar34;
      unaff_RBP[0x89] = fVar35;
      unaff_RBP[0x8a] = fVar36;
      unaff_RBP[0x8b] = fVar37;
      fVar29 = fVar29 - fVar38;
      unaff_RBP[0x8c] = fVar38;
      unaff_RBP[0x8d] = fVar39;
      unaff_RBP[0x8e] = fVar40;
      unaff_RBP[0x8f] = fVar30 * fVar6 + fVar47 * fVar14 + fVar32 * fVar10 + fVar15;
      fVar26 = fVar26 - fVar39;
      fVar27 = fVar27 - fVar40;
      fVar38 = *unaff_R13 - fVar38;
      unaff_RBP[0x14] = fVar29 * fVar44 + fVar26 * fVar45 + fVar27 * fVar46;
      unaff_RBP[0x15] = fVar29 * fVar41 + fVar26 * fVar42 + fVar27 * fVar43;
      unaff_RBP[0x16] = fVar29 * fVar34 + fVar26 * fVar35 + fVar27 * fVar36;
      unaff_RBP[0x17] = fVar29 * fVar37 + fVar26 * fVar37 + fVar27 * fVar37;
      fVar39 = unaff_R13[1] - fVar39;
      lVar25 = *(int64_t *)(unaff_R14 + 0x20);
      fVar40 = unaff_R13[2] - fVar40;
      lVar22 = unaff_RBX[99];
      unaff_RBP[0x2e] = fVar39 * fVar45 + fVar38 * fVar44 + fVar40 * fVar46;
      unaff_RBP[0x2f] = fVar39 * fVar42 + fVar38 * fVar41 + fVar40 * fVar43;
      unaff_RBP[0x30] = fVar39 * fVar35 + fVar38 * fVar34 + fVar40 * fVar36;
      unaff_RBP[0x31] = fVar39 * fVar37 + fVar38 * fVar37 + fVar40 * fVar37;
      if ((int)lVar22 == -1) {
        *(int32_t *)((int64_t)unaff_RBX + 0x314) = 0x10;
        uVar19 = function_1b9a40(lVar25 + 0x51d0,0x10);
        *(int32_t *)(unaff_RBX + 99) = uVar19;
        LOCK();
        *(int32_t *)(unaff_RBX + 0x62) = 0;
        UNLOCK();
        lVar25 = *(int64_t *)(unaff_R14 + 0x20);
      }
      unaff_RBP[-0x15] = 0.25;
      fVar32 = unaff_RBP[-0x15];
      unaff_RBP[-0x18] = unaff_RBP[0x14];
      unaff_RBP[-0x17] = unaff_RBP[0x15];
      unaff_RBP[-0x16] = unaff_RBP[0x16];
      unaff_RBP[-0x15] = fVar32;
      unaff_RBP[0x3c] = unaff_RBP[0x14];
      unaff_RBP[0x3d] = unaff_RBP[0x15];
      unaff_RBP[0x3e] = unaff_RBP[0x16];
      unaff_RBP[0x3f] = fVar32;
      unaff_RBP[0x18] = unaff_RBP[0x2e];
      unaff_RBP[0x19] = unaff_RBP[0x2f];
      unaff_RBP[0x1a] = unaff_RBP[0x30];
      unaff_RBP[0x1b] = (float)unaff_EDI;
      unaff_RBP[0x40] = unaff_RBP[0x2e];
      unaff_RBP[0x41] = unaff_RBP[0x2f];
      unaff_RBP[0x42] = unaff_RBP[0x30];
      unaff_RBP[0x43] = (float)unaff_EDI;
      function_20a7b0(unaff_RBX + 0x61,lVar25 + 0x3fb8,unaff_RBP + 0x3c);
      do {
        lVar25 = *(int64_t *)(unaff_R14 + 0xf0);
        unaff_ESI = unaff_ESI + 1;
        unaff_R15 = unaff_R15 + 8;
        if ((uint64_t)(*(int64_t *)(unaff_R14 + 0xf8) - lVar25 >> 3) <=
            (uint64_t)(int64_t)unaff_ESI) {
          lVar22 = *(int64_t *)(unaff_RBP + -0x20);
          do {
            do {
              do {
                lVar25 = _fStack0000000000000070;
                fVar32 = *unaff_R12;
                fVar27 = unaff_R13[2];
                fVar26 = unaff_R12[2];
                fVar31 = unaff_R12[1];
                fVar38 = *unaff_R13;
                fVar30 = unaff_R13[1];
                unaff_RBP[-0x11] = 3.4028235e+38;
                unaff_RBP[-0xd] = 3.4028235e+38;
                fVar39 = fVar26 + fVar27 * unaff_XMM14_Da;
                unaff_RBP[0x3a] = 0.05;
                fVar28 = fVar32 - fVar38 * unaff_XMM14_Da;
                fVar26 = fVar26 - fVar27 * unaff_XMM14_Da;
                fVar32 = fVar32 + fVar38 * unaff_XMM14_Da;
                fVar33 = fVar31 + fVar30 * unaff_XMM14_Da;
                fVar31 = fVar31 - fVar30 * unaff_XMM14_Da;
                fVar27 = unaff_RBP[-0x11];
                fVar38 = unaff_RBP[-0xd];
                unaff_RBP[-0x14] = fVar28;
                unaff_RBP[-0x13] = fVar31;
                unaff_RBP[-0x12] = fVar26;
                unaff_RBP[-0x11] = fVar27;
                unaff_RBP[-0x10] = fVar32;
                unaff_RBP[-0xf] = fVar33;
                unaff_RBP[-0xe] = fVar39;
                unaff_RBP[-0xd] = fVar38;
                unaff_RBP[0x36] = fVar32;
                unaff_RBP[0x37] = fVar33;
                unaff_RBP[0x38] = fVar39;
                unaff_RBP[0x39] = fVar38;
                unaff_RBP[0x32] = fVar28;
                unaff_RBP[0x33] = fVar31;
                unaff_RBP[0x34] = fVar26;
                unaff_RBP[0x35] = fVar27;
                if ((lVar22 != 0) &&
                   (cVar18 = function_2edfe0(unaff_R14,unaff_RBP + 0x32,unaff_RBP + 0x1c,fVar31,
                                           (int64_t)&local_buffer_00000050 + 5), cVar18 != '\0')) {
                  lVar24 = (int64_t)cStack0000000000000055;
                  puVar21 = (uint *)(lVar24 * 0x100 + *(int64_t *)(lVar22 + 0x18));
                  do {
                    LOCK();
                    uVar1 = *puVar21;
                    *puVar21 = *puVar21 | 1;
                    UNLOCK();
                  } while ((uVar1 & 1) != 0);
                  uVar16 = *(uint64_t *)(puVar21 + 1);
                  uVar17 = *(uint64_t *)(puVar21 + 3);
                  fVar32 = (float)puVar21[5];
                  fVar27 = (float)puVar21[6];
                  fVar26 = (float)puVar21[7];
                  fVar31 = (float)puVar21[8];
                  *(uint64_t *)(unaff_RBP + 0xa0) = uVar16;
                  *(uint64_t *)(unaff_RBP + 0xa2) = uVar17;
                  unaff_RBP[0xa4] = fVar32;
                  unaff_RBP[0xa5] = fVar27;
                  unaff_RBP[0xa6] = fVar26;
                  unaff_RBP[0xa7] = fVar31;
                  *puVar21 = 0;
                  *(uint64_t *)(unaff_RBP + 0x44) = uVar16;
                  *(uint64_t *)(unaff_RBP + 0x46) = uVar17;
                  unaff_RBP[0x48] = fVar32;
                  unaff_RBP[0x49] = fVar27;
                  unaff_RBP[0x4a] = fVar26;
                  unaff_RBP[0x4b] = fVar31;
                  SystemSecurityManager(unaff_RBP + 0x5c,unaff_RBP + 0x44);
                  fVar38 = unaff_RBP[0x5c];
                  fVar30 = unaff_RBP[0x5d];
                  fVar28 = unaff_RBP[0x5e];
                  fVar33 = unaff_RBP[0x60];
                  fVar39 = unaff_RBP[0x61];
                  fVar40 = unaff_RBP[0x62];
                  fVar29 = *(float *)(unaff_R14 + 0x70);
                  fVar47 = *(float *)(unaff_R14 + 0x74);
                  fVar3 = *(float *)(unaff_R14 + 0x78);
                  fVar4 = *(float *)(unaff_R14 + 0x7c);
                  fVar5 = *(float *)(unaff_R14 + 0x80);
                  fVar6 = *(float *)(unaff_R14 + 0x84);
                  fVar7 = *(float *)(unaff_R14 + 0x88);
                  fVar8 = *(float *)(unaff_R14 + 0x8c);
                  fVar9 = unaff_RBP[100];
                  fVar10 = unaff_RBP[0x65];
                  fVar11 = unaff_RBP[0x66];
                  fVar12 = *(float *)(unaff_R14 + 0x90);
                  fVar13 = *(float *)(unaff_R14 + 0x94);
                  fVar14 = *(float *)(unaff_R14 + 0x98);
                  fVar15 = *(float *)(unaff_R14 + 0x9c);
                  unaff_RBP[0x90] = fVar38;
                  unaff_RBP[0x91] = fVar30;
                  unaff_RBP[0x92] = fVar28;
                  unaff_RBP[0x93] = unaff_RBP[0x5f];
                  unaff_RBP[0x94] = fVar33;
                  unaff_RBP[0x95] = fVar39;
                  unaff_RBP[0x96] = fVar40;
                  unaff_RBP[0x97] = unaff_RBP[99];
                  unaff_RBP[0x98] = fVar9;
                  unaff_RBP[0x99] = fVar10;
                  unaff_RBP[0x9a] = fVar11;
                  unaff_RBP[0x9b] = unaff_RBP[0x67];
                  unaff_RBP[0x9c] = fVar32;
                  unaff_RBP[0x9d] = fVar27;
                  unaff_RBP[0x9e] = fVar26;
                  unaff_RBP[0x9f] = fVar31;
                  fVar31 = fVar38 * fVar29 + fVar30 * fVar5 + fVar28 * fVar12;
                  fVar37 = fVar38 * fVar47 + fVar30 * fVar6 + fVar28 * fVar13;
                  fVar41 = fVar38 * fVar3 + fVar30 * fVar7 + fVar28 * fVar14;
                  unaff_RBP[-0xc] = fVar31;
                  unaff_RBP[0x68] = fVar31;
                  unaff_RBP[0x69] = fVar37;
                  unaff_RBP[0x6a] = fVar41;
                  unaff_RBP[0x6b] = fVar38 * fVar4 + fVar30 * fVar8 + fVar28 * fVar15;
                  fVar34 = fVar33 * fVar29 + fVar39 * fVar5 + fVar40 * fVar12;
                  fVar35 = fVar33 * fVar47 + fVar39 * fVar6 + fVar40 * fVar13;
                  fVar36 = fVar33 * fVar3 + fVar39 * fVar7 + fVar40 * fVar14;
                  unaff_RBP[0x6c] = fVar34;
                  unaff_RBP[0x6d] = fVar35;
                  unaff_RBP[0x6e] = fVar36;
                  unaff_RBP[0x6f] = fVar33 * fVar4 + fVar39 * fVar8 + fVar40 * fVar15;
                  fVar33 = fVar9 * fVar29 + fVar10 * fVar5 + fVar11 * fVar12;
                  fVar39 = fVar9 * fVar47 + fVar10 * fVar6 + fVar11 * fVar13;
                  fVar40 = fVar9 * fVar3 + fVar10 * fVar7 + fVar11 * fVar14;
                  unaff_RBP[0x70] = fVar33;
                  unaff_RBP[0x71] = fVar39;
                  unaff_RBP[0x72] = fVar40;
                  unaff_RBP[0x73] = fVar9 * fVar4 + fVar10 * fVar8 + fVar11 * fVar15;
                  fVar31 = *(float *)(unaff_R14 + 0xac);
                  fVar38 = fVar32 * fVar29 + fVar27 * fVar5 + fVar26 * fVar12 +
                           *(float *)(unaff_R14 + 0xa0);
                  fVar30 = fVar32 * fVar47 + fVar27 * fVar6 + fVar26 * fVar13 +
                           *(float *)(unaff_R14 + 0xa4);
                  fVar28 = fVar32 * fVar3 + fVar27 * fVar7 + fVar26 * fVar14 +
                           *(float *)(unaff_R14 + 0xa8);
                  unaff_RBP[0x74] = fVar38;
                  unaff_RBP[0x75] = fVar30;
                  unaff_RBP[0x76] = fVar28;
                  unaff_RBP[0x77] = fVar32 * fVar4 + fVar27 * fVar8 + fVar26 * fVar15 + fVar31;
                  unaff_RBP[-0xb] = fVar37;
                  unaff_RBP[-8] = fVar34;
                  unaff_RBP[-7] = fVar35;
                  unaff_RBP[-3] = fVar39;
                  unaff_RBP[-4] = fVar33;
                  *unaff_RBP = fVar38;
                  unaff_RBP[2] = fVar28;
                  unaff_RBP[-10] = fVar41;
                  unaff_RBP[-6] = fVar36;
                  unaff_RBP[-2] = fVar40;
                  unaff_RBP[1] = fVar30;
                  unaff_RBP[-9] = 0.0;
                  unaff_RBP[-5] = 0.0;
                  unaff_RBP[-1] = 0.0;
                  unaff_RBP[3] = 1.0;
                  SystemCore_PerformanceMonitor(unaff_RBP + -0xc,unaff_RBP + 4);
                  fVar32 = unaff_RBP[0x1d];
                  fVar27 = unaff_RBP[0x1e];
                  fVar26 = unaff_RBP[0x1c];
                  unaff_RBP[-0x1c] =
                       fVar26 * unaff_RBP[4] + fVar32 * unaff_RBP[8] + fVar27 * unaff_RBP[0xc] +
                       unaff_RBP[0x10];
                  unaff_RBP[-0x1b] =
                       fVar26 * unaff_RBP[5] + fVar32 * unaff_RBP[9] + fVar27 * unaff_RBP[0xd] +
                       unaff_RBP[0x11];
                  unaff_RBP[-0x1a] =
                       fVar26 * unaff_RBP[6] + fVar32 * unaff_RBP[10] + fVar27 * unaff_RBP[0xe] +
                       unaff_RBP[0x12];
                  unaff_RBP[-0x19] =
                       fVar26 * unaff_RBP[7] + fVar32 * unaff_RBP[0xb] + fVar27 * unaff_RBP[0xf] +
                       unaff_RBP[0x13];
                  function_1c1140(unaff_RBP + 0x68,unaff_RBP + 0x20);
                  lVar24 = lVar24 * 0x1b0 + *(int64_t *)(*(int64_t *)(lVar22 + 0x208) + 0x140);
                  fVar38 = *(float *)(lVar24 + 0x30);
                  fVar30 = *(float *)(lVar24 + 0x34);
                  fVar28 = *(float *)(lVar24 + 0x38);
                  fVar32 = *(float *)(lVar24 + 0x3c);
                  fVar33 = *(float *)(lVar24 + 0x40);
                  fVar39 = *(float *)(lVar24 + 0x44);
                  fVar40 = *(float *)(lVar24 + 0x48);
                  fVar29 = *(float *)(lVar24 + 0x4c);
                  unaff_RBP[0x50] = fVar38;
                  unaff_RBP[0x51] = fVar30;
                  unaff_RBP[0x52] = fVar28;
                  unaff_RBP[0x53] = fVar32;
                  unaff_RBP[0x4c] = fVar33;
                  unaff_RBP[0x4d] = fVar39;
                  unaff_RBP[0x4e] = fVar40;
                  unaff_RBP[0x4f] = fVar29;
                  pfVar20 = (float *)SystemFileHandler(unaff_RBP + 0x4c,unaff_RBP + 0x7c,
                                                   unaff_RBP + -0x1c);
                  lVar24 = local_var_60;
                  fVar32 = unaff_RBP[0x22];
                  fVar27 = unaff_RBP[0x20];
                  fVar26 = unaff_RBP[0x21];
                  fVar38 = fVar38 + *pfVar20;
                  fVar31 = pfVar20[2];
                  unaff_RBP[-0x20] = fVar30 + pfVar20[1];
                  unaff_RBP[-0x1f] = fVar30;
                  unaff_RBP[-0x1e] = fVar30;
                  unaff_RBP[-0x1d] = fVar30;
                  fVar30 = fVar32 * fVar40 - fVar26 * fVar29;
                  _fStack0000000000000070 = CONCAT44(fVar28,fVar28 + fVar31);
                  fVar30 = fVar30 + fVar30;
                  fVar47 = fVar27 * fVar29 - fVar32 * fVar39;
                  fVar31 = fVar26 * fVar39 - fVar27 * fVar40;
                  fVar47 = fVar47 + fVar47;
                  fVar31 = fVar31 + fVar31;
                  fVar27 = fVar30 * fVar33 + fVar27 + (fVar31 * fVar40 - fVar47 * fVar29);
                  fVar40 = (fVar47 * fVar39 - fVar30 * fVar40) + fVar31 * fVar33 + fVar32;
                  fVar32 = (fVar30 * fVar29 - fVar31 * fVar39) + fVar47 * fVar33 + fVar26;
                  fStack0000000000000078 = fVar28;
                  fStack000000000000007c = fVar28;
                  if (*(int *)(lVar22 + 0x170) == -1) {
                    *(int32_t *)(lVar22 + 0x16c) = 0x10;
                    uVar19 = function_1b9a40(local_var_60 + 0x51d0,0x10);
                    *(int32_t *)(lVar22 + 0x170) = uVar19;
                    LOCK();
                    *(int32_t *)(lVar22 + 0x168) = 0;
                    UNLOCK();
                  }
                  unaff_RBP[0x24] = fVar38;
                  unaff_RBP[0x25] = unaff_RBP[-0x20];
                  unaff_RBP[0x26] = fStack0000000000000070;
                  unaff_RBP[0x27] = unaff_RBP[0xf2];
                  unaff_RBP[0x54] = fVar38;
                  unaff_RBP[0x55] = unaff_RBP[-0x20];
                  unaff_RBP[0x56] = fStack0000000000000070;
                  unaff_RBP[0x57] = unaff_RBP[0xf2];
                  unaff_RBP[0x28] = fVar27;
                  unaff_RBP[0x29] = fVar32;
                  unaff_RBP[0x2a] = fVar40;
                  unaff_RBP[0x2b] = (float)unaff_EDI;
                  unaff_RBP[0x58] = fVar27;
                  unaff_RBP[0x59] = fVar32;
                  unaff_RBP[0x5a] = fVar40;
                  unaff_RBP[0x5b] = (float)unaff_EDI;
                  function_20a7b0(lVar22 + 0x160,lVar24 + 0x3fb8,unaff_RBP + 0x54);
                }
                do {
                  lVar25 = lVar25 + 8;
                  local_buffer_58 = local_buffer_58 + 1;
                  lVar22 = **(int64_t **)(unaff_RBP + 0x2c);
                  _fStack0000000000000070 = lVar25;
                  if ((uint64_t)((*(int64_t **)(unaff_RBP + 0x2c))[1] - lVar22 >> 3) <=
                      (uint64_t)(int64_t)local_buffer_58) {
// WARNING: Subroutine does not return
                    SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xa8) ^ (uint64_t)&local_buffer_00000000);
                  }
                  unaff_R14 = *(int64_t *)(lVar22 + lVar25);
                  lVar24 = *(int64_t *)(unaff_R14 + 0x20);
                  lVar22 = *(int64_t *)(unaff_R14 + 0x260);
                  *(int64_t *)(unaff_RBP + -0x20) = lVar22;
                } while (lVar24 == 0);
                unaff_EDI = iStack0000000000000050;
              } while ((lVar22 == 0) || (*(char *)(*(int64_t *)(lVar22 + 0x208) + 0x1b0) != '\x02')
                      );
              pfVar20 = *(float **)(unaff_R14 + 0x28);
              fVar32 = *unaff_R12;
            } while ((fVar32 < *pfVar20) ||
                    ((((pfVar20[4] <= fVar32 && fVar32 != pfVar20[4] ||
                       (fVar32 = unaff_R12[1], fVar32 < pfVar20[1])) ||
                      (pfVar20[5] <= fVar32 && fVar32 != pfVar20[5])) ||
                     ((fVar32 = unaff_R12[2], fVar32 < pfVar20[2] ||
                      (pfVar20[6] <= fVar32 && fVar32 != pfVar20[6]))))));
            cVar18 = '\0';
            lVar25 = local_var_60;
            if ('\0' < *(char *)(lVar22 + 0x20)) {
              do {
                lVar22 = (int64_t)cVar18 * 0x100 + *(int64_t *)(lVar22 + 0x18);
                iVar23 = 0;
                if (*(int64_t *)(lVar22 + 0xb8) - *(int64_t *)(lVar22 + 0xb0) >> 3 != 0) {
                  local_var_68 = lVar25 + 0x3fb8;
                  lVar24 = 0;
                  do {
                    plVar2 = *(int64_t **)(lVar24 + *(int64_t *)(lVar22 + 0xb0));
                    (**(code **)(*plVar2 + 0x208))(plVar2,local_var_68);
                    lVar24 = lVar24 + 8;
                    iVar23 = iVar23 + 1;
                    lVar25 = local_var_60;
                  } while ((uint64_t)(int64_t)iVar23 <
                           (uint64_t)
                           (*(int64_t *)(lVar22 + 0xb8) - *(int64_t *)(lVar22 + 0xb0) >> 3));
                }
                lVar22 = *(int64_t *)(unaff_RBP + -0x20);
                cVar18 = cVar18 + '\x01';
              } while (cVar18 < *(char *)(lVar22 + 0x20));
            }
            lVar25 = *(int64_t *)(unaff_R14 + 0xf0);
          } while (*(int64_t *)(unaff_R14 + 0xf8) - lVar25 >> 3 == 0);
          unaff_R15 = 0;
          unaff_ESI = 0;
        }
        unaff_RBX = *(int64_t **)(lVar25 + unaff_R15);
        iVar23 = (**(code **)(*unaff_RBX + 0x98))(unaff_RBX);
      } while ((iVar23 != 0) || ((int)unaff_RBX[0x42] == 0));
      param_2 = *(code **)(*unaff_RBX + 0x158);
      if (param_2 != (code *)&rendering_buffer_2528_ptr) break;
      pfVar20 = (float *)(unaff_RBX + 0x66);
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address