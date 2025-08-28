#include "TaleWorlds.Native.Split.h"

// 03_rendering_part315.c - 3 个函数

// 函数: void FUN_18043475a(void)
void FUN_18043475a(void)

{
  short *psVar1;
  uint *puVar2;
  uint64_t *puVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  int64_t lVar7;
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
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
  float fVar43;
  float fVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  uint64_t uVar48;
  bool bVar49;
  ushort uVar50;
  uint uVar51;
  float *pfVar52;
  byte bVar53;
  uint *puVar54;
  int64_t lVar55;
  float *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar56;
  uint *puVar57;
  float *pfVar58;
  int64_t lVar59;
  int8_t (*pauVar60) [16];
  uint *puVar61;
  int8_t (*pauVar62) [16];
  int unaff_R12D;
  char unaff_R13B;
  char unaff_R14B;
  uint64_t uVar63;
  float *unaff_R15;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  char cStackX_20;
  float fStack0000000000000030;
  float fStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  lVar55 = 2;
  do {
    lVar7 = *(int64_t *)(unaff_RDI + 0x18);
    puVar54 = (uint *)((lVar55 + -2) * 0x100 + lVar7);
    lVar59 = lVar55 * 0x100;
    puVar57 = (uint *)(lVar55 * 0x100 + lVar7);
    puVar61 = (uint *)((lVar55 + 1) * 0x100 + lVar7);
    do {
      LOCK();
      uVar51 = *puVar54;
      *puVar54 = *puVar54 | 1;
      UNLOCK();
    } while ((uVar51 & 1) != 0);
    fVar4 = (float)puVar54[1];
    fVar5 = (float)puVar54[2];
    fVar18 = (float)puVar54[3];
    fVar19 = (float)puVar54[4];
    uVar45 = *(uint64_t *)(puVar54 + 5);
    uVar46 = *(uint64_t *)(puVar54 + 7);
    unaff_RBP[0x44] = fVar4;
    unaff_RBP[0x45] = fVar5;
    unaff_RBP[0x46] = fVar18;
    unaff_RBP[0x47] = fVar19;
    *(uint64_t *)(unaff_RBP + 0x48) = uVar45;
    *(uint64_t *)(unaff_RBP + 0x4a) = uVar46;
    *puVar54 = 0;
    unaff_RBP[0x1c] = fVar4;
    unaff_RBP[0x1d] = fVar5;
    unaff_RBP[0x1e] = fVar18;
    unaff_RBP[0x1f] = fVar19;
    *(uint64_t *)(unaff_RBP + 0x20) = uVar45;
    *(uint64_t *)(unaff_RBP + 0x22) = uVar46;
    do {
      LOCK();
      puVar2 = (uint *)(lVar59 + -0x100 + lVar7);
      uVar51 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
    } while ((uVar51 & 1) != 0);
    pfVar52 = (float *)(lVar59 + -0xfc + lVar7);
    fVar20 = *pfVar52;
    fVar21 = pfVar52[1];
    fVar22 = pfVar52[2];
    fVar23 = pfVar52[3];
    puVar3 = (uint64_t *)(lVar59 + -0xec + lVar7);
    uVar45 = *puVar3;
    uVar46 = puVar3[1];
    unaff_RBP[0x4c] = fVar20;
    unaff_RBP[0x4d] = fVar21;
    unaff_RBP[0x4e] = fVar22;
    unaff_RBP[0x4f] = fVar23;
    *(uint64_t *)(unaff_RBP + 0x50) = uVar45;
    *(uint64_t *)(unaff_RBP + 0x52) = uVar46;
    *(int32_t *)(lVar59 + -0x100 + lVar7) = 0;
    unaff_RBP[0x24] = fVar20;
    unaff_RBP[0x25] = fVar21;
    unaff_RBP[0x26] = fVar22;
    unaff_RBP[0x27] = fVar23;
    *(uint64_t *)(unaff_RBP + 0x28) = uVar45;
    *(uint64_t *)(unaff_RBP + 0x2a) = uVar46;
    do {
      LOCK();
      uVar51 = *puVar57;
      *puVar57 = *puVar57 | 1;
      UNLOCK();
    } while ((uVar51 & 1) != 0);
    fVar24 = (float)puVar57[1];
    fVar25 = (float)puVar57[2];
    fVar26 = (float)puVar57[3];
    fVar27 = (float)puVar57[4];
    uVar45 = *(uint64_t *)(puVar57 + 5);
    uVar46 = *(uint64_t *)(puVar57 + 7);
    unaff_RBP[0x54] = fVar24;
    unaff_RBP[0x55] = fVar25;
    unaff_RBP[0x56] = fVar26;
    unaff_RBP[0x57] = fVar27;
    *(uint64_t *)(unaff_RBP + 0x58) = uVar45;
    *(uint64_t *)(unaff_RBP + 0x5a) = uVar46;
    *puVar57 = 0;
    unaff_RBP[0x2c] = fVar24;
    unaff_RBP[0x2d] = fVar25;
    unaff_RBP[0x2e] = fVar26;
    unaff_RBP[0x2f] = fVar27;
    *(uint64_t *)(unaff_RBP + 0x30) = uVar45;
    *(uint64_t *)(unaff_RBP + 0x32) = uVar46;
    do {
      LOCK();
      uVar51 = *puVar61;
      *puVar61 = *puVar61 | 1;
      UNLOCK();
    } while ((uVar51 & 1) != 0);
    fVar28 = (float)puVar61[1];
    fVar29 = (float)puVar61[2];
    fVar30 = (float)puVar61[3];
    fVar31 = (float)puVar61[4];
    uVar45 = *(uint64_t *)(puVar61 + 5);
    uVar46 = *(uint64_t *)(puVar61 + 7);
    unaff_RBP[0x5c] = fVar28;
    unaff_RBP[0x5d] = fVar29;
    unaff_RBP[0x5e] = fVar30;
    unaff_RBP[0x5f] = fVar31;
    *(uint64_t *)(unaff_RBP + 0x60) = uVar45;
    *(uint64_t *)(unaff_RBP + 0x62) = uVar46;
    *(uint64_t *)(unaff_RBP + 0x38) = uVar45;
    *(uint64_t *)(unaff_RBP + 0x3a) = uVar46;
    *puVar61 = 0;
    fVar32 = (float)puVar54[0x18];
    fVar33 = (float)puVar54[0x19];
    fVar34 = (float)puVar54[0x1a];
    fVar65 = (float)puVar54[0x1c];
    fVar67 = (float)puVar54[0x1d];
    fVar69 = (float)puVar54[0x1e];
    fVar71 = (float)puVar54[0x20];
    fVar35 = (float)puVar54[0x21];
    fVar36 = (float)puVar54[0x22];
    unaff_RBP[0x34] = fVar28;
    unaff_RBP[0x35] = fVar29;
    unaff_RBP[0x36] = fVar30;
    unaff_RBP[0x37] = fVar31;
    fVar64 = fVar19 + fVar19;
    fVar66 = fVar23 + fVar23;
    fVar68 = fVar27 + fVar27;
    fVar70 = fVar31 + fVar31;
    fVar87 = fVar18 + fVar18;
    fVar88 = fVar22 + fVar22;
    fVar89 = fVar26 + fVar26;
    fVar90 = fVar30 + fVar30;
    fVar80 = (fVar5 + fVar5) * fVar4;
    fVar82 = (fVar21 + fVar21) * fVar20;
    fVar84 = (fVar25 + fVar25) * fVar24;
    fVar86 = (fVar29 + fVar29) * fVar28;
    fVar76 = (fVar5 + fVar5) * fVar5;
    fVar77 = (fVar21 + fVar21) * fVar21;
    fVar78 = (fVar25 + fVar25) * fVar25;
    fVar79 = (fVar29 + fVar29) * fVar29;
    fVar72 = (float)puVar57[0x1c];
    fVar73 = (float)puVar57[0x1d];
    fVar74 = (float)puVar57[0x1e];
    fStack0000000000000070 = fVar87 * fVar5 - fVar64 * fVar4;
    fStack0000000000000074 = fVar88 * fVar21 - fVar66 * fVar20;
    fStack0000000000000078 = fVar89 * fVar25 - fVar68 * fVar24;
    fStack000000000000007c = fVar90 * fVar29 - fVar70 * fVar28;
    fVar37 = (float)puVar57[0x18];
    fVar38 = (float)puVar57[0x19];
    fVar75 = (float)puVar57[0x1a];
    unaff_RBP[-8] = 1.0 - (fVar64 * fVar19 + fVar87 * fVar18);
    unaff_RBP[-7] = 1.0 - (fVar66 * fVar23 + fVar88 * fVar22);
    unaff_RBP[-6] = 1.0 - (fVar68 * fVar27 + fVar89 * fVar26);
    unaff_RBP[-5] = 1.0 - (fVar70 * fVar31 + fVar90 * fVar30);
    pfVar52 = (float *)(lVar59 + -0x80 + lVar7);
    fVar39 = *pfVar52;
    fVar40 = pfVar52[1];
    fVar41 = pfVar52[2];
    unaff_RBP[-4] = fVar64 * fVar4 + fVar87 * fVar5;
    unaff_RBP[-3] = fVar66 * fVar20 + fVar88 * fVar21;
    unaff_RBP[-2] = fVar68 * fVar24 + fVar89 * fVar25;
    unaff_RBP[-1] = fVar70 * fVar28 + fVar90 * fVar29;
    fVar92 = (float)puVar54[0x24];
    fVar42 = (float)puVar54[0x25];
    fVar93 = (float)puVar54[0x26];
    fVar94 = (float)puVar54[0x27];
    fVar91 = (float)puVar61[0x1c];
    fVar43 = (float)puVar61[0x1d];
    fVar44 = (float)puVar61[0x1e];
    unaff_RBP[-0x18] = fVar64 * fVar5 - fVar87 * fVar4;
    unaff_RBP[-0x17] = fVar66 * fVar21 - fVar88 * fVar20;
    unaff_RBP[-0x16] = fVar68 * fVar25 - fVar89 * fVar24;
    unaff_RBP[-0x15] = fVar70 * fVar29 - fVar90 * fVar28;
    fVar81 = (float)puVar61[0x18];
    fVar83 = (float)puVar61[0x19];
    fVar85 = (float)puVar61[0x1a];
    unaff_RBP[-0x20] = fVar87 * fVar4 + fVar64 * fVar5;
    unaff_RBP[-0x1f] = fVar88 * fVar20 + fVar66 * fVar21;
    unaff_RBP[-0x1e] = fVar89 * fVar24 + fVar68 * fVar25;
    unaff_RBP[-0x1d] = fVar90 * fVar28 + fVar70 * fVar29;
    unaff_RBP[8] = 1.0 - (fVar64 * fVar19 + fVar76);
    unaff_RBP[9] = 1.0 - (fVar66 * fVar23 + fVar77);
    unaff_RBP[10] = 1.0 - (fVar68 * fVar27 + fVar78);
    unaff_RBP[0xb] = 1.0 - (fVar70 * fVar31 + fVar79);
    fVar19 = (float)puVar61[0x20];
    fVar4 = (float)puVar61[0x21];
    fVar20 = (float)puVar61[0x22];
    unaff_RBP[4] = fVar80 + fVar64 * fVar18;
    unaff_RBP[5] = fVar82 + fVar66 * fVar22;
    unaff_RBP[6] = fVar84 + fVar68 * fVar26;
    unaff_RBP[7] = fVar86 + fVar70 * fVar30;
    pfVar52 = (float *)(lVar59 + -0x90 + lVar7);
    fVar21 = *pfVar52;
    fVar23 = pfVar52[1];
    fVar24 = pfVar52[2];
    unaff_RBP[-0x1c] = fVar64 * fVar18 - fVar80;
    unaff_RBP[-0x1b] = fVar66 * fVar22 - fVar82;
    unaff_RBP[-0x1a] = fVar68 * fVar26 - fVar84;
    unaff_RBP[-0x19] = fVar70 * fVar30 - fVar86;
    fVar25 = (float)puVar57[0x20];
    fVar5 = (float)puVar57[0x21];
    fVar27 = (float)puVar57[0x22];
    unaff_RBP[-0x14] = fVar92 * -1.0;
    unaff_RBP[-0x13] = fVar42 * -1.0;
    unaff_RBP[-0x12] = fVar93 * -1.0;
    unaff_RBP[-0x11] = fVar94 * -1.0;
    pfVar52 = (float *)(lVar59 + -0x70 + lVar7);
    fVar28 = *pfVar52;
    fVar29 = pfVar52[1];
    fVar31 = pfVar52[2];
    fVar92 = pfVar52[3];
    *unaff_RBP = 1.0 - (fVar87 * fVar18 + fVar76);
    unaff_RBP[1] = 1.0 - (fVar88 * fVar22 + fVar77);
    unaff_RBP[2] = 1.0 - (fVar89 * fVar26 + fVar78);
    unaff_RBP[3] = 1.0 - (fVar90 * fVar30 + fVar79);
    pfVar52 = (float *)(lVar59 + -0xa0 + lVar7);
    fVar18 = *pfVar52;
    fVar22 = pfVar52[1];
    fVar26 = pfVar52[2];
    fVar30 = (float)puVar57[0x26];
    fVar42 = (float)puVar61[0x26];
    fVar86 = (float)puVar61[0x24] * -1.0;
    fVar87 = (float)puVar61[0x25] * -1.0;
    fVar88 = (float)puVar57[0x24] * -1.0;
    fVar89 = (float)puVar57[0x25] * -1.0;
    unaff_RBP[-0xc] = fVar28 * -1.0;
    unaff_RBP[-0xb] = fVar29 * -1.0;
    unaff_RBP[-10] = fVar31 * -1.0;
    unaff_RBP[-9] = fVar92 * -1.0;
    uVar45 = *(uint64_t *)(unaff_R15 + -8);
    uVar46 = *(uint64_t *)(unaff_R15 + -6);
    fVar28 = *unaff_R15;
    fVar29 = unaff_R15[1];
    fVar31 = unaff_RBP[-8];
    fVar92 = unaff_RBP[-7];
    fVar93 = unaff_RBP[-6];
    fVar94 = unaff_RBP[-5];
    unaff_RBP[-0x10] = fVar35;
    unaff_RBP[-0xf] = fVar40;
    unaff_RBP[-0xe] = fVar5;
    unaff_RBP[-0xd] = fVar4;
    fVar35 = unaff_RBP[-0x14];
    fVar40 = unaff_RBP[-0x13];
    fVar4 = unaff_RBP[-0xc];
    fVar5 = unaff_RBP[-0xb];
    fVar64 = unaff_R15[-4];
    fVar66 = unaff_R15[-3];
    fVar68 = unaff_RBP[8];
    fVar70 = unaff_RBP[9];
    fVar76 = unaff_RBP[10];
    fVar77 = unaff_RBP[0xb];
    unaff_RBP[-0x14] = unaff_RBP[-0x12];
    unaff_RBP[-0x13] = unaff_RBP[-10];
    unaff_RBP[-0x12] = fVar30 * -1.0;
    unaff_RBP[-0x11] = fVar42 * -1.0;
    fStack0000000000000060 = (float)uVar45;
    fStack0000000000000064 = (float)((uint64_t)uVar45 >> 0x20);
    fVar30 = unaff_R15[4];
    fVar42 = unaff_R15[5];
    unaff_RBP[-0xc] = fStack0000000000000060;
    unaff_RBP[-0xb] = fStack0000000000000064;
    unaff_RBP[-10] = fVar64;
    unaff_RBP[-9] = fVar66;
    unaff_RBP[-8] = fVar33 * fStack0000000000000070 + fVar32 * fVar31 + fVar34 * unaff_RBP[-0x20];
    unaff_RBP[-7] = fVar22 * fStack0000000000000074 + fVar18 * fVar92 + fVar26 * unaff_RBP[-0x1f];
    unaff_RBP[-6] = fVar38 * fStack0000000000000078 + fVar37 * fVar93 + fVar75 * unaff_RBP[-0x1e];
    unaff_RBP[-5] = fVar83 * fStack000000000000007c + fVar81 * fVar94 + fVar85 * unaff_RBP[-0x1d];
    fVar79 = fVar33 * fVar68 + fVar32 * unaff_RBP[-4] + fVar34 * unaff_RBP[-0x1c];
    fVar80 = fVar22 * fVar70 + fVar18 * unaff_RBP[-3] + fVar26 * unaff_RBP[-0x1b];
    fVar82 = fVar38 * fVar76 + fVar37 * unaff_RBP[-2] + fVar75 * unaff_RBP[-0x1a];
    fVar84 = fVar83 * fVar77 + fVar81 * unaff_RBP[-1] + fVar85 * unaff_RBP[-0x19];
    fVar64 = fVar33 * unaff_RBP[4] + fVar32 * unaff_RBP[-0x18] + fVar34 * *unaff_RBP;
    fVar66 = fVar22 * unaff_RBP[5] + fVar18 * unaff_RBP[-0x17] + fVar26 * unaff_RBP[1];
    fStack0000000000000030 =
         fVar38 * unaff_RBP[6] + fVar37 * unaff_RBP[-0x16] + fVar75 * unaff_RBP[2];
    fStack0000000000000034 =
         fVar83 * unaff_RBP[7] + fVar81 * unaff_RBP[-0x15] + fVar85 * unaff_RBP[3];
    fVar18 = unaff_RBP[-0xc];
    fVar22 = unaff_RBP[-0xb];
    fVar26 = unaff_RBP[-10];
    fVar32 = unaff_RBP[-9];
    fVar90 = fVar67 * fStack0000000000000070 + fVar65 * fVar31 + fVar69 * unaff_RBP[-0x20];
    fVar95 = fVar23 * fStack0000000000000074 + fVar21 * fVar92 + fVar24 * unaff_RBP[-0x1f];
    fVar96 = fVar73 * fStack0000000000000078 + fVar72 * fVar93 + fVar74 * unaff_RBP[-0x1e];
    fVar97 = fVar43 * fStack000000000000007c + fVar91 * fVar94 + fVar44 * unaff_RBP[-0x1d];
    fVar81 = fVar67 * fVar68 + fVar65 * unaff_RBP[-4] + fVar69 * unaff_RBP[-0x1c];
    fVar83 = fVar23 * fVar70 + fVar21 * unaff_RBP[-3] + fVar24 * unaff_RBP[-0x1b];
    fVar85 = fVar73 * fVar76 + fVar72 * unaff_RBP[-2] + fVar74 * unaff_RBP[-0x1a];
    fVar78 = fVar43 * fVar77 + fVar91 * unaff_RBP[-1] + fVar44 * unaff_RBP[-0x19];
    fVar33 = unaff_RBP[-0x14];
    fVar34 = unaff_RBP[-0x13];
    fVar37 = unaff_RBP[-0x12];
    fVar38 = unaff_RBP[-0x11];
    fStack0000000000000050 = fVar67 * unaff_RBP[4] + fVar65 * unaff_RBP[-0x18] + fVar69 * *unaff_RBP
    ;
    fStack0000000000000054 =
         fVar23 * unaff_RBP[5] + fVar21 * unaff_RBP[-0x17] + fVar24 * unaff_RBP[1];
    fStack0000000000000058 =
         fVar73 * unaff_RBP[6] + fVar72 * unaff_RBP[-0x16] + fVar74 * unaff_RBP[2];
    fStack000000000000005c =
         fVar43 * unaff_RBP[7] + fVar91 * unaff_RBP[-0x15] + fVar44 * unaff_RBP[3];
    fVar21 = unaff_RBP[-0x10];
    fVar23 = unaff_RBP[-0xf];
    fVar24 = unaff_RBP[-0xe];
    fVar65 = unaff_RBP[-0xd];
    fStack0000000000000068 = (float)uVar46;
    fVar91 = fVar21 * fStack0000000000000070 + fVar71 * fVar31 + fVar36 * unaff_RBP[-0x20];
    fVar92 = fVar23 * fStack0000000000000074 + fVar39 * fVar92 + fVar41 * unaff_RBP[-0x1f];
    fVar93 = fVar24 * fStack0000000000000078 + fVar25 * fVar93 + fVar27 * unaff_RBP[-0x1e];
    fVar94 = fVar65 * fStack000000000000007c + fVar19 * fVar94 + fVar20 * unaff_RBP[-0x1d];
    fVar72 = fVar21 * fVar68 + fVar71 * unaff_RBP[-4] + fVar36 * unaff_RBP[-0x1c];
    fVar73 = fVar23 * fVar70 + fVar39 * unaff_RBP[-3] + fVar41 * unaff_RBP[-0x1b];
    fVar74 = fVar24 * fVar76 + fVar25 * unaff_RBP[-2] + fVar27 * unaff_RBP[-0x1a];
    fVar75 = fVar65 * fVar77 + fVar19 * unaff_RBP[-1] + fVar20 * unaff_RBP[-0x19];
    unaff_RBP[-0x10] = fVar21 * unaff_RBP[4] + fVar71 * unaff_RBP[-0x18] + fVar36 * *unaff_RBP;
    unaff_RBP[-0xf] = fVar23 * unaff_RBP[5] + fVar39 * unaff_RBP[-0x17] + fVar41 * unaff_RBP[1];
    unaff_RBP[-0xe] = fVar24 * unaff_RBP[6] + fVar25 * unaff_RBP[-0x16] + fVar27 * unaff_RBP[2];
    unaff_RBP[-0xd] = fVar65 * unaff_RBP[7] + fVar19 * unaff_RBP[-0x15] + fVar20 * unaff_RBP[3];
    fVar19 = unaff_RBP[-8];
    fVar20 = unaff_RBP[-7];
    fVar21 = unaff_RBP[-6];
    fVar23 = unaff_RBP[-5];
    fVar24 = unaff_RBP[-0x10];
    fVar25 = unaff_RBP[-0xf];
    fVar27 = unaff_RBP[-0xe];
    fVar31 = unaff_RBP[-0xd];
    uVar56 = unaff_R13B + unaff_R12D;
    pauVar62 = (int8_t (*) [16])
               (*(int64_t *)(unaff_RSI + 8 + (uint64_t)(uVar56 >> 0xd) * 8) +
               (uint64_t)(uVar56 + (uVar56 >> 0xd) * -0x2000) * 0x40);
    uVar51 = uVar56 + 1 >> 0xd;
    fVar65 = fStack0000000000000068 + fVar24 * fVar33 +
             fStack0000000000000050 * fVar40 + fVar64 * fVar35;
    fVar67 = unaff_R15[-2] + fVar25 * fVar34 + fStack0000000000000054 * fVar5 + fVar66 * fVar4;
    fVar69 = unaff_R15[2] + fVar27 * fVar37 +
             fStack0000000000000058 * fVar89 + fStack0000000000000030 * fVar88;
    fVar71 = unaff_R15[6] + fVar31 * fVar38 +
             fStack000000000000005c * fVar87 + fStack0000000000000034 * fVar86;
    pauVar60 = (int8_t (*) [16])
               (*(int64_t *)(unaff_RSI + 8 + (uint64_t)uVar51 * 8) +
               (uint64_t)(uVar56 + 1 + uVar51 * -0x2000) * 0x40);
    _fStack0000000000000060 = CONCAT44(fVar67,fVar65);
    _fStack0000000000000068 = CONCAT44(fVar71,fVar69);
    uVar51 = uVar56 + 2 >> 0xd;
    uStack0000000000000038 = 0;
    uStack000000000000003c = 0;
    pfVar58 = (float *)(*(int64_t *)(unaff_RSI + 8 + (uint64_t)uVar51 * 8) +
                       (uint64_t)(uVar56 + 2 + uVar51 * -0x2000) * 0x40);
    uVar51 = uVar56 + 3 >> 0xd;
    pfVar52 = (float *)(*(int64_t *)(unaff_RSI + 8 + (uint64_t)uVar51 * 8) +
                       (uint64_t)(uVar56 + 3 + uVar51 * -0x2000) * 0x40);
    unaff_R13B = unaff_R13B + '\x04';
    lVar55 = lVar55 + 4;
    auVar8._4_4_ = fVar79;
    auVar8._0_4_ = fVar19;
    auVar8._8_4_ = fVar64;
    auVar8._12_4_ = 0;
    *pauVar62 = auVar8;
    unaff_R15 = unaff_R15 + 0x10;
    auVar13._4_4_ = fVar80;
    auVar13._0_4_ = fVar20;
    auVar13._8_4_ = fVar66;
    auVar13._12_4_ = 0;
    *pauVar60 = auVar13;
    *pfVar58 = fVar21;
    pfVar58[1] = fVar82;
    pfVar58[2] = fStack0000000000000030;
    pfVar58[3] = 0.0;
    *pfVar52 = fVar23;
    pfVar52[1] = fVar84;
    pfVar52[2] = fStack0000000000000034;
    pfVar52[3] = fStack0000000000000034;
    auVar9._4_4_ = fVar81;
    auVar9._0_4_ = fVar90;
    auVar9._8_4_ = fStack0000000000000050;
    auVar9._12_4_ = 0;
    pauVar62[1] = auVar9;
    auVar14._4_4_ = fVar83;
    auVar14._0_4_ = fVar95;
    auVar14._8_4_ = fStack0000000000000054;
    auVar14._12_4_ = 0;
    pauVar60[1] = auVar14;
    auVar10._4_4_ = fVar85;
    auVar10._0_4_ = fVar96;
    auVar10._8_4_ = fStack0000000000000058;
    auVar10._12_4_ = 0;
    *(int8_t (*) [16])(pfVar58 + 4) = auVar10;
    auVar17._4_4_ = fVar78;
    auVar17._0_4_ = fVar97;
    auVar17._8_4_ = fStack000000000000005c;
    auVar17._12_4_ = 0;
    *(int8_t (*) [16])(pfVar52 + 4) = auVar17;
    auVar11._4_4_ = fVar72;
    auVar11._0_4_ = fVar91;
    auVar11._8_4_ = fVar24;
    auVar11._12_4_ = 0;
    pauVar62[2] = auVar11;
    auVar15._4_4_ = fVar73;
    auVar15._0_4_ = fVar92;
    auVar15._8_4_ = fVar25;
    auVar15._12_4_ = 0;
    pauVar60[2] = auVar15;
    auVar12._4_4_ = fVar74;
    auVar12._0_4_ = fVar93;
    auVar12._8_4_ = fVar27;
    auVar12._12_4_ = 0;
    *(int8_t (*) [16])(pfVar58 + 8) = auVar12;
    auVar16._4_4_ = fVar75;
    auVar16._0_4_ = fVar94;
    auVar16._8_4_ = fVar31;
    auVar16._12_4_ = 0;
    *(int8_t (*) [16])(pfVar52 + 8) = auVar16;
    *(float *)pauVar62[3] = fVar18 + fVar91 * fVar33 + fVar90 * fVar40 + fVar19 * fVar35;
    *(float *)(pauVar62[3] + 4) = fVar22 + fVar72 * fVar33 + fVar81 * fVar40 + fVar79 * fVar35;
    *(float *)(pauVar62[3] + 8) = fVar65;
    *(int32_t *)(pauVar62[3] + 0xc) = 0x3f800000;
    *(float *)pauVar60[3] = fVar26 + fVar92 * fVar34 + fVar95 * fVar5 + fVar20 * fVar4;
    *(float *)(pauVar60[3] + 4) = fVar32 + fVar73 * fVar34 + fVar83 * fVar5 + fVar80 * fVar4;
    *(float *)(pauVar60[3] + 8) = fVar67;
    *(int32_t *)(pauVar60[3] + 0xc) = 0x3f800000;
    pfVar58[0xc] = fVar28 + fVar93 * fVar37 + fVar96 * fVar89 + fVar21 * fVar88;
    pfVar58[0xd] = fVar29 + fVar74 * fVar37 + fVar85 * fVar89 + fVar82 * fVar88;
    pfVar58[0xe] = fVar69;
    pfVar58[0xf] = 1.0;
    pfVar52[0xc] = fVar30 + fVar94 * fVar38 + fVar97 * fVar87 + fVar23 * fVar86;
    pfVar52[0xd] = fVar42 + fVar75 * fVar38 + fVar78 * fVar87 + fVar84 * fVar86;
    pfVar52[0xe] = fVar71;
    pfVar52[0xf] = 1.0;
  } while (unaff_R13B < unaff_R14B);
  if ((*(int64_t *)(unaff_RDI + 0x10) == 0) ||
     (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x10) + 0x20) == 0)) {
    bVar49 = false;
  }
  else {
    bVar49 = true;
  }
  if (unaff_R14B < cStackX_20) {
    lVar55 = (int64_t)unaff_R14B;
    pfVar52 = unaff_RBP + lVar55 * 4 + 0x16c;
    uVar63 = (uint64_t)(byte)(cStackX_20 - unaff_R14B);
    do {
      puVar54 = (uint *)(lVar55 * 0x100 + *(int64_t *)(unaff_RDI + 0x18));
      do {
        LOCK();
        uVar51 = *puVar54;
        *puVar54 = *puVar54 | 1;
        UNLOCK();
      } while ((uVar51 & 1) != 0);
      uVar45 = *(uint64_t *)(puVar54 + 1);
      uVar46 = *(uint64_t *)(puVar54 + 3);
      uVar47 = *(uint64_t *)(puVar54 + 5);
      uVar48 = *(uint64_t *)(puVar54 + 7);
      *(uint64_t *)(unaff_RBP + 100) = uVar45;
      *(uint64_t *)(unaff_RBP + 0x66) = uVar46;
      *(uint64_t *)(unaff_RBP + 0x68) = uVar47;
      *(uint64_t *)(unaff_RBP + 0x6a) = uVar48;
      *(uint64_t *)(unaff_RBP + 0x40) = uVar47;
      *(uint64_t *)(unaff_RBP + 0x42) = uVar48;
      *puVar54 = 0;
      uVar47 = *(uint64_t *)pfVar52;
      uVar48 = *(uint64_t *)(pfVar52 + 2);
      *(uint64_t *)(unaff_RBP + 0x3c) = uVar45;
      *(uint64_t *)(unaff_RBP + 0x3e) = uVar46;
      *(uint64_t *)(unaff_RBP + 0x18) = uVar47;
      *(uint64_t *)(unaff_RBP + 0x1a) = uVar48;
      *(uint64_t *)(unaff_RBP + 0x14) = uVar45;
      *(uint64_t *)(unaff_RBP + 0x16) = uVar46;
      do {
        LOCK();
        uVar51 = *puVar54;
        *puVar54 = *puVar54 | 1;
        UNLOCK();
      } while ((uVar51 & 1) != 0);
      fVar4 = unaff_RBP[0x15];
      fVar5 = unaff_RBP[0x16];
      fVar18 = unaff_RBP[0x17];
      fVar19 = unaff_RBP[0x18];
      fVar20 = unaff_RBP[0x19];
      fVar21 = unaff_RBP[0x1a];
      fVar22 = unaff_RBP[0x1b];
      puVar54[1] = (uint)unaff_RBP[0x14];
      puVar54[2] = (uint)fVar4;
      puVar54[3] = (uint)fVar5;
      puVar54[4] = (uint)fVar18;
      puVar54[5] = (uint)fVar19;
      puVar54[6] = (uint)fVar20;
      puVar54[7] = (uint)fVar21;
      puVar54[8] = (uint)fVar22;
      *puVar54 = 0;
      if (bVar49) {
        FUN_1802feba0();
      }
      lVar55 = lVar55 + 1;
      pfVar52 = pfVar52 + 4;
      uVar63 = uVar63 - 1;
    } while (uVar63 != 0);
  }
  if ((*(char *)((int64_t)unaff_RBP + 0x11f3) == '\0') &&
     (2 < (ushort)(*(short *)(unaff_RDI + 0x40) - 2U))) {
    bVar53 = 0;
  }
  else {
    bVar53 = 1;
  }
  uVar6 = *(ushort *)(unaff_RDI + 0xa8);
  if (bVar53 != ((byte)uVar6 >> 2 & 1)) {
    uVar50 = uVar6 & 0xfffb;
    if (bVar53 != 0) {
      uVar50 = uVar6 | 4;
    }
    *(ushort *)(unaff_RDI + 0xa8) = uVar50;
    lVar55 = *(int64_t *)(unaff_RDI + 0x10);
    psVar1 = (short *)(lVar55 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar55 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x480) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180434f18(void)
void FUN_180434f18(void)

{
  short *psVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  bool bVar14;
  ushort uVar15;
  byte bVar16;
  uint *puVar17;
  int64_t lVar18;
  int64_t unaff_RBP;
  uint64_t *puVar19;
  int64_t unaff_RDI;
  char unaff_R12B;
  char unaff_R14B;
  uint64_t uVar20;
  
  if ((*(int64_t *)(unaff_RDI + 0x10) == 0) ||
     (*(int64_t *)(*(int64_t *)(unaff_RDI + 0x10) + 0x20) == 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if (unaff_R14B < unaff_R12B) {
    lVar18 = (int64_t)unaff_R14B;
    puVar19 = (uint64_t *)(unaff_RBP + 0x5b0 + lVar18 * 0x10);
    uVar20 = (uint64_t)(byte)(unaff_R12B - unaff_R14B);
    do {
      puVar17 = (uint *)(lVar18 * 0x100 + *(int64_t *)(unaff_RDI + 0x18));
      do {
        LOCK();
        uVar2 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uVar10 = *(uint64_t *)(puVar17 + 1);
      uVar11 = *(uint64_t *)(puVar17 + 3);
      uVar12 = *(uint64_t *)(puVar17 + 5);
      uVar13 = *(uint64_t *)(puVar17 + 7);
      *(uint64_t *)(unaff_RBP + 400) = uVar10;
      *(uint64_t *)(unaff_RBP + 0x198) = uVar11;
      *(uint64_t *)(unaff_RBP + 0x1a0) = uVar12;
      *(uint64_t *)(unaff_RBP + 0x1a8) = uVar13;
      *(uint64_t *)(unaff_RBP + 0x100) = uVar12;
      *(uint64_t *)(unaff_RBP + 0x108) = uVar13;
      *puVar17 = 0;
      uVar12 = *puVar19;
      uVar13 = puVar19[1];
      *(uint64_t *)(unaff_RBP + 0xf0) = uVar10;
      *(uint64_t *)(unaff_RBP + 0xf8) = uVar11;
      *(uint64_t *)(unaff_RBP + 0x60) = uVar12;
      *(uint64_t *)(unaff_RBP + 0x68) = uVar13;
      *(uint64_t *)(unaff_RBP + 0x50) = uVar10;
      *(uint64_t *)(unaff_RBP + 0x58) = uVar11;
      do {
        LOCK();
        uVar2 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uVar2 = *(uint *)(unaff_RBP + 0x54);
      uVar4 = *(uint *)(unaff_RBP + 0x58);
      uVar5 = *(uint *)(unaff_RBP + 0x5c);
      uVar6 = *(uint *)(unaff_RBP + 0x60);
      uVar7 = *(uint *)(unaff_RBP + 100);
      uVar8 = *(uint *)(unaff_RBP + 0x68);
      uVar9 = *(uint *)(unaff_RBP + 0x6c);
      puVar17[1] = *(uint *)(unaff_RBP + 0x50);
      puVar17[2] = uVar2;
      puVar17[3] = uVar4;
      puVar17[4] = uVar5;
      puVar17[5] = uVar6;
      puVar17[6] = uVar7;
      puVar17[7] = uVar8;
      puVar17[8] = uVar9;
      *puVar17 = 0;
      if (bVar14) {
        FUN_1802feba0();
      }
      lVar18 = lVar18 + 1;
      puVar19 = puVar19 + 2;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if ((*(char *)(unaff_RBP + 0x11f3) == '\0') && (2 < (ushort)(*(short *)(unaff_RDI + 0x40) - 2U)))
  {
    bVar16 = 0;
  }
  else {
    bVar16 = 1;
  }
  uVar3 = *(ushort *)(unaff_RDI + 0xa8);
  if (bVar16 != ((byte)uVar3 >> 2 & 1)) {
    uVar15 = uVar3 & 0xfffb;
    if (bVar16 != 0) {
      uVar15 = uVar3 | 4;
    }
    *(ushort *)(unaff_RDI + 0xa8) = uVar15;
    lVar18 = *(int64_t *)(unaff_RDI + 0x10);
    psVar1 = (short *)(lVar18 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar18 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1200) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180434f39(void)
void FUN_180434f39(void)

{
  short *psVar1;
  uint uVar2;
  ushort uVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t in_RAX;
  ushort uVar15;
  byte bVar16;
  uint *puVar17;
  int64_t lVar18;
  int64_t unaff_RBP;
  uint64_t *puVar19;
  int64_t unaff_RDI;
  char unaff_R12B;
  char unaff_R14B;
  uint64_t uVar20;
  
  lVar4 = *(int64_t *)(in_RAX + 0x20);
  if (unaff_R14B < unaff_R12B) {
    lVar18 = (int64_t)unaff_R14B;
    puVar19 = (uint64_t *)(unaff_RBP + 0x5b0 + lVar18 * 0x10);
    uVar20 = (uint64_t)(byte)(unaff_R12B - unaff_R14B);
    do {
      puVar17 = (uint *)(lVar18 * 0x100 + *(int64_t *)(unaff_RDI + 0x18));
      do {
        LOCK();
        uVar2 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uVar11 = *(uint64_t *)(puVar17 + 1);
      uVar12 = *(uint64_t *)(puVar17 + 3);
      uVar13 = *(uint64_t *)(puVar17 + 5);
      uVar14 = *(uint64_t *)(puVar17 + 7);
      *(uint64_t *)(unaff_RBP + 400) = uVar11;
      *(uint64_t *)(unaff_RBP + 0x198) = uVar12;
      *(uint64_t *)(unaff_RBP + 0x1a0) = uVar13;
      *(uint64_t *)(unaff_RBP + 0x1a8) = uVar14;
      *(uint64_t *)(unaff_RBP + 0x100) = uVar13;
      *(uint64_t *)(unaff_RBP + 0x108) = uVar14;
      *puVar17 = 0;
      uVar13 = *puVar19;
      uVar14 = puVar19[1];
      *(uint64_t *)(unaff_RBP + 0xf0) = uVar11;
      *(uint64_t *)(unaff_RBP + 0xf8) = uVar12;
      *(uint64_t *)(unaff_RBP + 0x60) = uVar13;
      *(uint64_t *)(unaff_RBP + 0x68) = uVar14;
      *(uint64_t *)(unaff_RBP + 0x50) = uVar11;
      *(uint64_t *)(unaff_RBP + 0x58) = uVar12;
      do {
        LOCK();
        uVar2 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uVar2 = *(uint *)(unaff_RBP + 0x54);
      uVar5 = *(uint *)(unaff_RBP + 0x58);
      uVar6 = *(uint *)(unaff_RBP + 0x5c);
      uVar7 = *(uint *)(unaff_RBP + 0x60);
      uVar8 = *(uint *)(unaff_RBP + 100);
      uVar9 = *(uint *)(unaff_RBP + 0x68);
      uVar10 = *(uint *)(unaff_RBP + 0x6c);
      puVar17[1] = *(uint *)(unaff_RBP + 0x50);
      puVar17[2] = uVar2;
      puVar17[3] = uVar5;
      puVar17[4] = uVar6;
      puVar17[5] = uVar7;
      puVar17[6] = uVar8;
      puVar17[7] = uVar9;
      puVar17[8] = uVar10;
      *puVar17 = 0;
      if (lVar4 != 0) {
        FUN_1802feba0();
      }
      lVar18 = lVar18 + 1;
      puVar19 = puVar19 + 2;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if ((*(char *)(unaff_RBP + 0x11f3) == '\0') && (2 < (ushort)(*(short *)(unaff_RDI + 0x40) - 2U)))
  {
    bVar16 = 0;
  }
  else {
    bVar16 = 1;
  }
  uVar3 = *(ushort *)(unaff_RDI + 0xa8);
  if (bVar16 != ((byte)uVar3 >> 2 & 1)) {
    uVar15 = uVar3 & 0xfffb;
    if (bVar16 != 0) {
      uVar15 = uVar3 | 4;
    }
    *(ushort *)(unaff_RDI + 0xa8) = uVar15;
    lVar4 = *(int64_t *)(unaff_RDI + 0x10);
    psVar1 = (short *)(lVar4 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar4 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1200) ^ (uint64_t)&stack0x00000000);
}





