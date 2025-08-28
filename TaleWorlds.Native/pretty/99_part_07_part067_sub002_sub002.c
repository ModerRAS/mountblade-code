#include "TaleWorlds.Native.Split.h"

// 99_part_07_part067_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804d77b2(uint64_t param_1,int param_2,int param_3,uint64_t param_4)
void FUN_1804d77b2(uint64_t param_1,int param_2,int param_3,uint64_t param_4)

{
  float *pfVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int32_t uVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  int64_t lVar8;
  int iVar9;
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
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int64_t in_RAX;
  float *pfVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int iVar34;
  uint64_t unaff_RBX;
  int64_t lVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  int32_t *unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar38;
  int64_t in_R10;
  int64_t lVar39;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint uVar40;
  uint64_t unaff_R14;
  int64_t lVar41;
  uint64_t unaff_R15;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int64_t lStack0000000000000030;
  int64_t lStack0000000000000038;
  int64_t lStack0000000000000040;
  int64_t lStack0000000000000048;
  uint64_t in_stack_00000050;
  int32_t uStack0000000000000058;
  int16_t uStack000000000000005c;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  int32_t uStack0000000000000070;
  int8_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  int32_t uStack0000000000000080;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  iVar34 = *(int *)(unaff_RSI + 0xa8);
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM9_Dd;
  *(uint64_t *)(unaff_RBP + 0x12) = 0xffffffffffffffff;
  lVar39 = *(int64_t *)(in_R10 + (int64_t)(param_2 >> 10) * 8);
  unaff_RBP[0x14] = 0xffffffff;
  lVar38 = ((int64_t)param_3 + 2) * 0x58;
  lVar39 = lVar39 + (param_4 & (int64_t)param_2) * 0xd8;
  *(int8_t *)(unaff_RBP + 0x15) = 0xff;
  unaff_RBP[0x16] = 0xffffffff;
  *(int16_t *)(unaff_RBP + 0x19) = 0x400;
  uVar40 = *(uint *)(lVar39 + 0x2c + (int64_t)param_3 * 4);
  lVar41 = (int64_t)(int)(*(uint *)(lVar38 + 0x50 + unaff_RSI) & uVar40) * 0x68;
  lVar38 = *(int64_t *)(lVar38 + 0x30 + unaff_RSI);
  lVar8 = *(int64_t *)(unaff_RSI + 0x3a0);
  *(int64_t *)(unaff_RBP + 0xaa) = lVar41;
  lVar38 = *(int64_t *)(lVar38 + (int64_t)((int)uVar40 >> 10) * 8);
  param_3 = param_3 - iVar34;
  if (param_3 < 0) {
    param_3 = 0;
  }
  lVar31 = ((int64_t)param_3 + 2) * 0x58;
  uVar7 = *(uint *)(lVar39 + 0x24);
  lVar35 = 0;
  lStack0000000000000040 = (int64_t)(int)(*(uint *)(lVar31 + 0x50 + unaff_RSI) & uVar40) * 0x68;
  lVar39 = *(int64_t *)(lVar31 + 0x30 + unaff_RSI);
  lVar32 = (int64_t)(int)(*(uint *)(unaff_RSI + 0x3c0) & uVar7);
  *(uint64_t *)(unaff_RBP + 0xc) = 0;
  lStack0000000000000048 = *(int64_t *)(lVar39 + (int64_t)((int)uVar40 >> 10) * 8);
  lVar39 = *(int64_t *)(lVar41 + 0x30 + lVar38);
  lVar31 = *(int64_t *)(lVar41 + 0x28 + lVar38);
  lVar8 = *(int64_t *)(lVar8 + (int64_t)((int)uVar7 >> 10) * 8);
  *(int8_t *)(unaff_RBP + 0xf) = 0;
  *(uint64_t *)(unaff_RBP + 0x10) = 0;
  iVar9 = (int)((lVar39 - lVar31) / 0x68);
  *(uint64_t *)(unaff_RBP + 0x17) = 0;
  *(uint64_t *)(unaff_RBP + 0x1a) = 0;
  unaff_RBP[0x1c] = 0;
  *(uint64_t *)(unaff_RBP + 0x1e) = 0;
  *(int8_t *)(unaff_RBP + 0x21) = 0;
  *(uint64_t *)(unaff_RBP + 0x26) = 0;
  lStack0000000000000030 = (int64_t)iVar9;
  lStack0000000000000038 = lVar38;
  if (0 < iVar9) {
    do {
      lVar39 = *(int64_t *)(lVar41 + 0x28 + lVar38);
      lVar41 = *(int64_t *)(unaff_RSI + 0x698);
      uVar40 = *(uint *)(*(int64_t *)
                          (*(int64_t *)(unaff_RSI + 11000) +
                          (int64_t)((int)*(uint *)(lVar35 + lVar39) >> 10) * 8) + 0x1c +
                        (int64_t)(int)(*(uint *)(unaff_RSI + 0x2b18) & *(uint *)(lVar35 + lVar39))
                        * 0xd8);
      unaff_RBP[0xe] = unaff_RBP[0xa8];
      iVar34 = *(int *)(lVar35 + 0x18 + lVar39);
      uVar4 = *(int32_t *)
               (*(int64_t *)(lVar41 + (int64_t)((int)uVar40 >> 10) * 8) + 0x28 +
               (int64_t)(int)(uVar40 & *(uint *)(unaff_RSI + 0x6b8)) * 0x30);
      *(int8_t *)((int64_t)unaff_RBP + 0x3d) = *(int8_t *)(lVar35 + 5 + lVar39);
      unaff_RBP[0x20] = uVar4;
      if (iVar34 == 0) {
        lVar41 = *(int64_t *)(lVar35 + 0x10 + lVar39);
        *(int64_t *)(unaff_RBP + 0x10) = lVar41;
        unaff_RBP[0x17] = *(int32_t *)(lVar41 + 0x310);
        unaff_RBP[0x16] = *(int32_t *)(*(int64_t *)(unaff_RBP + 0x10) + 0x318);
      }
      pfVar30 = (float *)(**(code **)(**(int64_t **)(lVar35 + 0x10 + lVar39) + 0x158))();
      pfVar1 = (float *)(lVar35 + 0x1c + lVar39);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      lVar31 = *(int64_t *)(unaff_RSI + 8);
      uVar37 = 0;
      pfVar1 = (float *)(lVar35 + 0x2c + lVar39);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      fVar43 = pfVar30[1];
      fVar45 = *pfVar30;
      pfVar1 = (float *)(lVar35 + 0x3c + lVar39);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      fVar42 = pfVar30[2];
      fVar44 = pfVar30[5];
      fVar47 = pfVar30[4];
      fVar46 = pfVar30[6];
      fVar5 = pfVar30[8];
      unaff_RBP[100] = fVar43 * fVar14 + fVar45 * fVar10 + fVar42 * fVar18;
      unaff_RBP[0x65] = fVar43 * fVar15 + fVar45 * fVar11 + fVar42 * fVar19;
      unaff_RBP[0x66] = fVar43 * fVar16 + fVar45 * fVar12 + fVar42 * fVar20;
      unaff_RBP[0x67] = fVar43 * fVar17 + fVar45 * fVar13 + fVar42 * fVar21;
      fVar43 = pfVar30[9];
      fVar45 = pfVar30[10];
      unaff_RBP[0x68] = fVar44 * fVar14 + fVar47 * fVar10 + fVar46 * fVar18;
      unaff_RBP[0x69] = fVar44 * fVar15 + fVar47 * fVar11 + fVar46 * fVar19;
      unaff_RBP[0x6a] = fVar44 * fVar16 + fVar47 * fVar12 + fVar46 * fVar20;
      unaff_RBP[0x6b] = fVar44 * fVar17 + fVar47 * fVar13 + fVar46 * fVar21;
      fVar42 = pfVar30[0xd];
      fVar44 = pfVar30[0xc];
      fVar47 = pfVar30[0xe];
      lVar41 = *(int64_t *)(unaff_RSI + 0x10);
      pfVar1 = (float *)(lVar35 + 0x4c + lVar39);
      fVar46 = *pfVar1;
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar24 = pfVar1[3];
      unaff_RBP[0x6c] = fVar43 * fVar14 + fVar5 * fVar10 + fVar45 * fVar18;
      unaff_RBP[0x6d] = fVar43 * fVar15 + fVar5 * fVar11 + fVar45 * fVar19;
      unaff_RBP[0x6e] = fVar43 * fVar16 + fVar5 * fVar12 + fVar45 * fVar20;
      unaff_RBP[0x6f] = fVar43 * fVar17 + fVar5 * fVar13 + fVar45 * fVar21;
      unaff_RBP[0x70] = fVar42 * fVar14 + fVar44 * fVar10 + fVar47 * fVar18 + fVar46;
      unaff_RBP[0x71] = fVar42 * fVar15 + fVar44 * fVar11 + fVar47 * fVar19 + fVar22;
      unaff_RBP[0x72] = fVar42 * fVar16 + fVar44 * fVar12 + fVar47 * fVar20 + fVar23;
      unaff_RBP[0x73] = fVar42 * fVar17 + fVar44 * fVar13 + fVar47 * fVar21 + fVar24;
      uVar36 = uVar37;
      if (lVar41 - lVar31 >> 3 != 0) {
        do {
          lVar38 = *(int64_t *)(lVar31 + uVar36);
          if (((((*(int *)(lVar38 + 0x178) < 2) && ((*(uint *)(lVar38 + 4) & 0x1000000) == 0)) &&
               ((*(int64_t *)(unaff_RBP + 0x10) == 0 ||
                (((lVar41 = *(int64_t *)(lVar38 + 0x28), lVar41 == 0 ||
                  (fVar43 = *(float *)(lVar35 + 0x5c + lVar39), fVar43 == 3.4028235e+38)) ||
                 (fVar47 = (float)unaff_RBP[0x71] - *(float *)(lVar41 + 0x124),
                 fVar42 = (float)unaff_RBP[0x70] - *(float *)(lVar41 + 0x120),
                 fVar44 = (float)unaff_RBP[0x72] - *(float *)(lVar41 + 0x128),
                 fVar45 = *(float *)(lVar35 + 0x60 + lVar39),
                 (fVar47 * fVar47 + fVar42 * fVar42 + fVar44 * fVar44) - fVar45 * fVar45 <=
                 fVar43 * fVar43)))))) &&
              ((*(ushort *)(lVar8 + 8 + lVar32 * 0xc) & 1 << ((byte)uVar37 & 0x1f)) != 0)) &&
             ((fVar43 = *(float *)(lVar38 + 0x174) * 0.2, fVar43 <= 0.0 ||
              (pfVar1 = (float *)(lVar35 + 100 + lVar39), fVar43 < *pfVar1 || fVar43 == *pfVar1))))
          {
            SystemHealthMonitor(*(uint64_t *)(lVar35 + 8 + lVar39),lVar38,unaff_RBP + 100,0,
                          unaff_RBP + 0xc);
          }
          lVar31 = *(int64_t *)(unaff_RSI + 8);
          uVar40 = (int)uVar37 + 1;
          uVar37 = (uint64_t)uVar40;
          lVar38 = lStack0000000000000038;
          uVar36 = uVar36 + 8;
        } while ((uint64_t)(int64_t)(int)uVar40 <
                 (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar31 >> 3));
      }
      lVar41 = *(int64_t *)(unaff_RBP + 0xaa);
      lVar35 = lVar35 + 0x68;
      lStack0000000000000030 = lStack0000000000000030 + -1;
    } while (lStack0000000000000030 != 0);
    iVar34 = *(int *)(unaff_RSI + 0xa8);
  }
  lVar39 = 0;
  if (iVar34 == 1) {
    in_stack_00000050 = 0;
    iVar34 = (int)((*(int64_t *)(lStack0000000000000040 + 0x10 + lStack0000000000000048) -
                   *(int64_t *)(lStack0000000000000040 + 8 + lStack0000000000000048)) / 0x68);
    uStack0000000000000058 = 0xffffffff;
    uStack000000000000005c = 0xff00;
    lStack0000000000000030 = (int64_t)iVar34;
    in_stack_00000060 = 0;
    in_stack_00000068 = 0xffffffffffffffff;
    uStack0000000000000070 = 0xffffffff;
    uStack0000000000000074 = 0xff;
    uStack0000000000000078 = 0xffffffff;
    _uStack000000000000007c = 0;
    *(int16_t *)(unaff_RBP + -0x1f) = 0x400;
    *(uint64_t *)(unaff_RBP + -0x1e) = 0;
    unaff_RBP[-0x1c] = 0;
    *(uint64_t *)(unaff_RBP + -0x1a) = 0;
    unaff_RBP[-0x18] = 0;
    *(int8_t *)(unaff_RBP + -0x17) = 0;
    *(uint64_t *)(unaff_RBP + -0x12) = 0;
    lVar38 = lStack0000000000000040;
    lVar41 = lStack0000000000000048;
    if (0 < iVar34) {
      do {
        lVar31 = *(int64_t *)(lVar38 + 8 + lVar41);
        if (*(char *)(*(int64_t *)(lVar39 + 0x48 + lVar31) + 0xf5) != '\0') {
          uVar40 = *(uint *)(lVar39 + 0x60 + lVar31);
          lVar41 = (int64_t)(int)(*(uint *)(unaff_RSI + 0x2b18) & uVar40) * 0xd8;
          lVar38 = *(int64_t *)
                    (*(int64_t *)(unaff_RSI + 11000) + (int64_t)((int)uVar40 >> 10) * 8);
          uVar40 = *(uint *)(lVar38 + 0x1c + lVar41);
          lVar35 = (int64_t)(int)(*(uint *)(unaff_RSI + 0x6b8) & uVar40);
          uVar7 = *(uint *)(lVar38 + 0x18 + lVar41);
          uVar36 = 0;
          lVar33 = (int64_t)(int)(*(uint *)(unaff_RSI + 0x4a8) & uVar7);
          in_stack_00000050 = in_stack_00000050 & 0xffffffff00000000;
          lVar38 = *(int64_t *)
                    (*(int64_t *)(unaff_RSI + 0x698) + (int64_t)((int)uVar40 >> 10) * 8);
          lVar41 = *(int64_t *)
                    (*(int64_t *)(unaff_RSI + 0x488) + (int64_t)((int)uVar7 >> 10) * 8);
          in_stack_00000068 =
               CONCAT44(*(int32_t *)(lVar38 + 0x18 + lVar35 * 0x30),
                        *(int32_t *)(lVar38 + 0x1c + lVar35 * 0x30));
          uStack0000000000000070 = *(int32_t *)(lVar38 + 0x14 + lVar35 * 0x30);
          uStack0000000000000074 = *(int8_t *)(lVar38 + 0x10 + lVar35 * 0x30);
          uStack000000000000007c = *(int32_t *)(lVar38 + 0x20 + lVar35 * 0x30);
          uStack0000000000000078 = *(int32_t *)(lVar38 + 0x24 + lVar35 * 0x30);
          uStack0000000000000058 = unaff_RBP[0xa8];
          cVar6 = *(char *)(lVar39 + 0x50 + lVar31);
          unaff_RBP[-0x18] = *(int32_t *)(lVar38 + 0x28 + lVar35 * 0x30);
          uStack000000000000005c = CONCAT11(cVar6,1);
          if (cVar6 == -1) {
            in_stack_00000060 = 0;
          }
          else {
            in_stack_00000060 = *(uint64_t *)(lVar39 + 0x40 + lVar31);
          }
          if (*(char *)(lVar39 + 100 + lVar31) == '\0') {
            pfVar1 = (float *)(lVar41 + 8 + lVar33 * 0x48);
            fVar10 = *pfVar1;
            fVar11 = pfVar1[1];
            fVar12 = pfVar1[2];
            fVar13 = pfVar1[3];
            pfVar1 = (float *)(lVar41 + 0x18 + lVar33 * 0x48);
            fVar14 = *pfVar1;
            fVar15 = pfVar1[1];
            fVar16 = pfVar1[2];
            fVar17 = pfVar1[3];
            pfVar1 = (float *)(lVar41 + 0x28 + lVar33 * 0x48);
            fVar18 = *pfVar1;
            fVar19 = pfVar1[1];
            fVar20 = pfVar1[2];
            fVar21 = pfVar1[3];
            fVar43 = *(float *)(lVar39 + 4 + lVar31);
            fVar45 = *(float *)(lVar39 + lVar31);
            fVar42 = *(float *)(lVar39 + 8 + lVar31);
            fVar44 = *(float *)(lVar39 + 0x14 + lVar31);
            fVar47 = *(float *)(lVar39 + 0x10 + lVar31);
            fVar46 = *(float *)(lVar39 + 0x18 + lVar31);
            fVar5 = *(float *)(lVar39 + 0x20 + lVar31);
            unaff_RBP[0x44] = fVar43 * fVar14 + fVar45 * fVar10 + fVar42 * fVar18;
            unaff_RBP[0x45] = fVar43 * fVar15 + fVar45 * fVar11 + fVar42 * fVar19;
            unaff_RBP[0x46] = fVar43 * fVar16 + fVar45 * fVar12 + fVar42 * fVar20;
            unaff_RBP[0x47] = fVar43 * fVar17 + fVar45 * fVar13 + fVar42 * fVar21;
            fVar43 = *(float *)(lVar39 + 0x24 + lVar31);
            fVar45 = *(float *)(lVar39 + 0x28 + lVar31);
            unaff_RBP[0x48] = fVar44 * fVar14 + fVar47 * fVar10 + fVar46 * fVar18;
            unaff_RBP[0x49] = fVar44 * fVar15 + fVar47 * fVar11 + fVar46 * fVar19;
            unaff_RBP[0x4a] = fVar44 * fVar16 + fVar47 * fVar12 + fVar46 * fVar20;
            unaff_RBP[0x4b] = fVar44 * fVar17 + fVar47 * fVar13 + fVar46 * fVar21;
            fVar42 = *(float *)(lVar39 + 0x34 + lVar31);
            fVar44 = *(float *)(lVar39 + 0x30 + lVar31);
            fVar47 = *(float *)(lVar39 + 0x38 + lVar31);
            pfVar1 = (float *)(lVar41 + 0x38 + lVar33 * 0x48);
            fVar46 = *pfVar1;
            fVar22 = pfVar1[1];
            fVar23 = pfVar1[2];
            fVar24 = pfVar1[3];
            unaff_RBP[0x4c] = fVar43 * fVar14 + fVar5 * fVar10 + fVar45 * fVar18;
            unaff_RBP[0x4d] = fVar43 * fVar15 + fVar5 * fVar11 + fVar45 * fVar19;
            unaff_RBP[0x4e] = fVar43 * fVar16 + fVar5 * fVar12 + fVar45 * fVar20;
            unaff_RBP[0x4f] = fVar43 * fVar17 + fVar5 * fVar13 + fVar45 * fVar21;
            unaff_RBP[0x50] = fVar42 * fVar14 + fVar44 * fVar10 + fVar47 * fVar18 + fVar46;
            unaff_RBP[0x51] = fVar42 * fVar15 + fVar44 * fVar11 + fVar47 * fVar19 + fVar22;
            unaff_RBP[0x52] = fVar42 * fVar16 + fVar44 * fVar12 + fVar47 * fVar20 + fVar23;
            unaff_RBP[0x53] = fVar42 * fVar17 + fVar44 * fVar13 + fVar47 * fVar21 + fVar24;
          }
          else {
            puVar2 = (uint64_t *)(lVar41 + 8 + lVar33 * 0x48);
            uVar26 = puVar2[1];
            puVar3 = (uint64_t *)(lVar41 + 0x18 + lVar33 * 0x48);
            uVar27 = *puVar3;
            uVar28 = puVar3[1];
            *(uint64_t *)(unaff_RBP + 0x44) = *puVar2;
            *(uint64_t *)(unaff_RBP + 0x46) = uVar26;
            puVar2 = (uint64_t *)(lVar41 + 0x28 + lVar33 * 0x48);
            uVar26 = *puVar2;
            uVar29 = puVar2[1];
            *(uint64_t *)(unaff_RBP + 0x48) = uVar27;
            *(uint64_t *)(unaff_RBP + 0x4a) = uVar28;
            puVar2 = (uint64_t *)(lVar41 + 0x38 + lVar33 * 0x48);
            uVar27 = *puVar2;
            uVar28 = puVar2[1];
            *(uint64_t *)(unaff_RBP + 0x4c) = uVar26;
            *(uint64_t *)(unaff_RBP + 0x4e) = uVar29;
            *(uint64_t *)(unaff_RBP + 0x50) = uVar27;
            *(uint64_t *)(unaff_RBP + 0x52) = uVar28;
          }
          fVar43 = *(float *)(lVar41 + 0xc + lVar33 * 0x48);
          fVar45 = *(float *)(lVar41 + 0x10 + lVar33 * 0x48);
          fVar42 = *(float *)(lVar41 + 8 + lVar33 * 0x48);
          fVar44 = *(float *)(lVar41 + 0x18 + lVar33 * 0x48);
          fVar47 = *(float *)(lVar41 + 0x28 + lVar33 * 0x48);
          fVar46 = *(float *)(lVar41 + 0x1c + lVar33 * 0x48);
          fVar42 = fVar42 * fVar42 + fVar43 * fVar43 + fVar45 * fVar45;
          fVar43 = *(float *)(lVar41 + 0x20 + lVar33 * 0x48);
          fVar45 = *(float *)(lVar41 + 0x2c + lVar33 * 0x48);
          fVar44 = fVar44 * fVar44 + fVar46 * fVar46 + fVar43 * fVar43;
          fVar43 = *(float *)(lVar41 + 0x30 + lVar33 * 0x48);
          fVar43 = fVar47 * fVar47 + fVar45 * fVar45 + fVar43 * fVar43;
          if (fVar42 <= fVar44) {
            if (fVar43 <= fVar44) {
              fVar43 = fVar44;
            }
          }
          else if (fVar43 <= fVar42) {
            fVar43 = fVar42;
          }
          lVar35 = *(int64_t *)(unaff_RSI + 8);
          uVar37 = uVar36;
          lVar38 = lStack0000000000000040;
          lVar41 = lStack0000000000000048;
          if (*(int64_t *)(unaff_RSI + 0x10) - lVar35 >> 3 != 0) {
            do {
              lVar38 = *(int64_t *)(lVar35 + uVar37);
              if (((*(int *)(lVar38 + 0x178) < 2) &&
                  (((lVar41 = *(int64_t *)(lVar38 + 0x28), lVar41 == 0 ||
                    (fVar45 = *(float *)(lVar39 + 0x54 + lVar31), fVar45 == 3.4028235e+38)) ||
                   (fVar47 = (float)unaff_RBP[0x51] - *(float *)(lVar41 + 0x124),
                   fVar46 = (float)unaff_RBP[0x50] - *(float *)(lVar41 + 0x120),
                   fVar44 = (float)unaff_RBP[0x52] - *(float *)(lVar41 + 0x128),
                   fVar42 = *(float *)(lVar39 + 0x58 + lVar31),
                   (fVar46 * fVar46 + fVar47 * fVar47 + fVar44 * fVar44) - fVar42 * fVar42 <=
                   fVar45 * fVar45)))) &&
                 (((*(ushort *)(lVar8 + 8 + lVar32 * 0xc) & 1 << ((byte)uVar36 & 0x1f)) != 0 &&
                  ((fVar45 = *(float *)(lVar38 + 0x174) * 0.2, fVar45 <= 0.0 ||
                   (fVar45 <= fVar43 * *(float *)(lVar39 + 0x5c + lVar31))))))) {
                SystemHealthMonitor(*(uint64_t *)(lVar39 + 0x48 + lVar31),lVar38,unaff_RBP + 0x44,0,
                              &stack0x00000050);
              }
              lVar35 = *(int64_t *)(unaff_RSI + 8);
              uVar40 = (int)uVar36 + 1;
              uVar36 = (uint64_t)uVar40;
              uVar37 = uVar37 + 8;
              lVar38 = lStack0000000000000040;
              lVar41 = lStack0000000000000048;
            } while ((uint64_t)(int64_t)(int)uVar40 <
                     (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar35 >> 3));
          }
        }
        lVar39 = lVar39 + 0x68;
        lStack0000000000000030 = lStack0000000000000030 + -1;
      } while (lStack0000000000000030 != 0);
    }
  }
  lVar31 = 0;
  lVar41 = *(int64_t *)(unaff_RBP + 0xaa);
  *(uint64_t *)(unaff_RBP + -0x10) = 0;
  unaff_RBP[-0xe] = 0xffffffff;
  *(int16_t *)(unaff_RBP + -0xd) = 0xff00;
  lVar39 = *(int64_t *)(lVar41 + 0x10 + lStack0000000000000038);
  lVar38 = *(int64_t *)(lVar41 + 8 + lStack0000000000000038);
  *(uint64_t *)(unaff_RBP + -0xc) = 0;
  iVar34 = (int)((lVar39 - lVar38) / 0x68);
  *(uint64_t *)(unaff_RBP + -10) = 0xffffffffffffffff;
  unaff_RBP[-8] = 0xffffffff;
  lStack0000000000000030 = (int64_t)iVar34;
  *(int8_t *)(unaff_RBP + -7) = 0xff;
  unaff_RBP[-6] = 0xffffffff;
  *(uint64_t *)(unaff_RBP + -5) = 0;
  *(int16_t *)(unaff_RBP + -3) = 0x400;
  *(uint64_t *)(unaff_RBP + -2) = 0;
  *unaff_RBP = 0;
  *(uint64_t *)(unaff_RBP + 2) = 0;
  unaff_RBP[4] = 0;
  *(int8_t *)(unaff_RBP + 5) = 0;
  *(uint64_t *)(unaff_RBP + 10) = 0;
  lVar39 = lStack0000000000000038;
  if (0 < iVar34) {
    do {
      lVar38 = *(int64_t *)(lVar41 + 8 + lVar39);
      if ((*(int *)(unaff_RSI + 0xa8) != 1) ||
         (*(char *)(*(int64_t *)(lVar31 + 0x48 + lVar38) + 0xf5) != -1)) {
        uVar40 = *(uint *)(lVar31 + 0x60 + lVar38);
        lVar39 = *(int64_t *)(unaff_RSI + 11000);
        uVar7 = *(uint *)(unaff_RSI + 0x2b18);
        *(int8_t *)(unaff_RBP + -0xd) = 1;
        lVar33 = (int64_t)(int)(uVar40 & uVar7) * 0xd8;
        lVar39 = *(int64_t *)(lVar39 + (int64_t)((int)uVar40 >> 10) * 8);
        lVar41 = *(int64_t *)(unaff_RSI + 0x698);
        uVar40 = *(uint *)(lVar39 + 0x1c + lVar33);
        lVar35 = (int64_t)(int)(*(uint *)(unaff_RSI + 0x6b8) & uVar40);
        uVar7 = *(uint *)(lVar39 + 0x18 + lVar33);
        uVar36 = 0;
        lVar33 = (int64_t)(int)(*(uint *)(unaff_RSI + 0x4a8) & uVar7);
        unaff_RBP[-0x10] = 0;
        lVar39 = *(int64_t *)(lVar41 + (int64_t)((int)uVar40 >> 10) * 8);
        uVar4 = *(int32_t *)(lVar39 + 0x28 + lVar35 * 0x30);
        lVar41 = *(int64_t *)(*(int64_t *)(unaff_RSI + 0x488) + (int64_t)((int)uVar7 >> 10) * 8);
        unaff_RBP[-10] = *(int32_t *)(lVar39 + 0x1c + lVar35 * 0x30);
        unaff_RBP[-9] = *(int32_t *)(lVar39 + 0x18 + lVar35 * 0x30);
        unaff_RBP[-8] = *(int32_t *)(lVar39 + 0x14 + lVar35 * 0x30);
        *(int8_t *)(unaff_RBP + -7) = *(int8_t *)(lVar39 + 0x10 + lVar35 * 0x30);
        unaff_RBP[-5] = *(int32_t *)(lVar39 + 0x20 + lVar35 * 0x30);
        unaff_RBP[-6] = *(int32_t *)(lVar39 + 0x24 + lVar35 * 0x30);
        unaff_RBP[-0xe] = unaff_RBP[0xa8];
        cVar6 = *(char *)(lVar31 + 0x50 + lVar38);
        unaff_RBP[4] = uVar4;
        *(char *)((int64_t)unaff_RBP + -0x33) = cVar6;
        if (cVar6 == -1) {
          *(uint64_t *)(unaff_RBP + -0xc) = 0;
        }
        else {
          *(uint64_t *)(unaff_RBP + -0xc) = *(uint64_t *)(lVar31 + 0x40 + lVar38);
        }
        if (*(char *)(lVar31 + 100 + lVar38) == '\0') {
          pfVar1 = (float *)(lVar41 + 8 + lVar33 * 0x48);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar13 = pfVar1[3];
          pfVar1 = (float *)(lVar41 + 0x18 + lVar33 * 0x48);
          fVar14 = *pfVar1;
          fVar15 = pfVar1[1];
          fVar16 = pfVar1[2];
          fVar17 = pfVar1[3];
          pfVar1 = (float *)(lVar41 + 0x28 + lVar33 * 0x48);
          fVar18 = *pfVar1;
          fVar19 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar21 = pfVar1[3];
          fVar43 = *(float *)(lVar31 + 4 + lVar38);
          fVar45 = *(float *)(lVar31 + lVar38);
          fVar42 = *(float *)(lVar31 + 8 + lVar38);
          fVar44 = *(float *)(lVar31 + 0x14 + lVar38);
          fVar47 = *(float *)(lVar31 + 0x10 + lVar38);
          fVar46 = *(float *)(lVar31 + 0x18 + lVar38);
          fVar5 = *(float *)(lVar31 + 0x20 + lVar38);
          unaff_RBP[0x54] = fVar43 * fVar14 + fVar45 * fVar10 + fVar42 * fVar18;
          unaff_RBP[0x55] = fVar43 * fVar15 + fVar45 * fVar11 + fVar42 * fVar19;
          unaff_RBP[0x56] = fVar43 * fVar16 + fVar45 * fVar12 + fVar42 * fVar20;
          unaff_RBP[0x57] = fVar43 * fVar17 + fVar45 * fVar13 + fVar42 * fVar21;
          fVar43 = *(float *)(lVar31 + 0x24 + lVar38);
          fVar45 = *(float *)(lVar31 + 0x28 + lVar38);
          unaff_RBP[0x58] = fVar44 * fVar14 + fVar47 * fVar10 + fVar46 * fVar18;
          unaff_RBP[0x59] = fVar44 * fVar15 + fVar47 * fVar11 + fVar46 * fVar19;
          unaff_RBP[0x5a] = fVar44 * fVar16 + fVar47 * fVar12 + fVar46 * fVar20;
          unaff_RBP[0x5b] = fVar44 * fVar17 + fVar47 * fVar13 + fVar46 * fVar21;
          fVar42 = *(float *)(lVar31 + 0x34 + lVar38);
          fVar44 = *(float *)(lVar31 + 0x30 + lVar38);
          fVar47 = *(float *)(lVar31 + 0x38 + lVar38);
          pfVar1 = (float *)(lVar41 + 0x38 + lVar33 * 0x48);
          fVar46 = *pfVar1;
          fVar22 = pfVar1[1];
          fVar23 = pfVar1[2];
          fVar24 = pfVar1[3];
          unaff_RBP[0x5c] = fVar43 * fVar14 + fVar5 * fVar10 + fVar45 * fVar18;
          unaff_RBP[0x5d] = fVar43 * fVar15 + fVar5 * fVar11 + fVar45 * fVar19;
          unaff_RBP[0x5e] = fVar43 * fVar16 + fVar5 * fVar12 + fVar45 * fVar20;
          unaff_RBP[0x5f] = fVar43 * fVar17 + fVar5 * fVar13 + fVar45 * fVar21;
          unaff_RBP[0x60] = fVar42 * fVar14 + fVar44 * fVar10 + fVar47 * fVar18 + fVar46;
          unaff_RBP[0x61] = fVar42 * fVar15 + fVar44 * fVar11 + fVar47 * fVar19 + fVar22;
          unaff_RBP[0x62] = fVar42 * fVar16 + fVar44 * fVar12 + fVar47 * fVar20 + fVar23;
          unaff_RBP[99] = fVar42 * fVar17 + fVar44 * fVar13 + fVar47 * fVar21 + fVar24;
        }
        else {
          puVar2 = (uint64_t *)(lVar41 + 8 + lVar33 * 0x48);
          uVar26 = puVar2[1];
          puVar3 = (uint64_t *)(lVar41 + 0x18 + lVar33 * 0x48);
          uVar27 = *puVar3;
          uVar28 = puVar3[1];
          *(uint64_t *)(unaff_RBP + 0x54) = *puVar2;
          *(uint64_t *)(unaff_RBP + 0x56) = uVar26;
          puVar2 = (uint64_t *)(lVar41 + 0x28 + lVar33 * 0x48);
          uVar26 = *puVar2;
          uVar29 = puVar2[1];
          *(uint64_t *)(unaff_RBP + 0x58) = uVar27;
          *(uint64_t *)(unaff_RBP + 0x5a) = uVar28;
          puVar2 = (uint64_t *)(lVar41 + 0x38 + lVar33 * 0x48);
          uVar27 = *puVar2;
          uVar28 = puVar2[1];
          *(uint64_t *)(unaff_RBP + 0x5c) = uVar26;
          *(uint64_t *)(unaff_RBP + 0x5e) = uVar29;
          *(uint64_t *)(unaff_RBP + 0x60) = uVar27;
          *(uint64_t *)(unaff_RBP + 0x62) = uVar28;
        }
        fVar43 = *(float *)(lVar41 + 0xc + lVar33 * 0x48);
        fVar45 = *(float *)(lVar41 + 0x10 + lVar33 * 0x48);
        fVar42 = *(float *)(lVar41 + 8 + lVar33 * 0x48);
        fVar44 = *(float *)(lVar41 + 0x18 + lVar33 * 0x48);
        fVar47 = *(float *)(lVar41 + 0x28 + lVar33 * 0x48);
        fVar46 = *(float *)(lVar41 + 0x1c + lVar33 * 0x48);
        fVar42 = fVar42 * fVar42 + fVar43 * fVar43 + fVar45 * fVar45;
        fVar43 = *(float *)(lVar41 + 0x20 + lVar33 * 0x48);
        fVar45 = *(float *)(lVar41 + 0x2c + lVar33 * 0x48);
        fVar44 = fVar44 * fVar44 + fVar46 * fVar46 + fVar43 * fVar43;
        fVar43 = *(float *)(lVar41 + 0x30 + lVar33 * 0x48);
        fVar43 = fVar47 * fVar47 + fVar45 * fVar45 + fVar43 * fVar43;
        if (fVar42 <= fVar44) {
          if (fVar43 <= fVar44) {
            fVar43 = fVar44;
          }
        }
        else if (fVar43 <= fVar42) {
          fVar43 = fVar42;
        }
        lVar39 = *(int64_t *)(unaff_RSI + 8);
        uVar37 = uVar36;
        if (*(int64_t *)(unaff_RSI + 0x10) - lVar39 >> 3 != 0) {
          do {
            lVar39 = *(int64_t *)(lVar39 + uVar37);
            if (((*(int *)(lVar39 + 0x178) < 2) &&
                ((((lVar41 = *(int64_t *)(lVar39 + 0x28), lVar41 == 0 ||
                   (fVar45 = *(float *)(lVar31 + 0x54 + lVar38), fVar45 == 3.4028235e+38)) ||
                  (fVar47 = (float)unaff_RBP[0x61] - *(float *)(lVar41 + 0x124),
                  fVar46 = (float)unaff_RBP[0x60] - *(float *)(lVar41 + 0x120),
                  fVar44 = (float)unaff_RBP[0x62] - *(float *)(lVar41 + 0x128),
                  fVar42 = *(float *)(lVar31 + 0x58 + lVar38),
                  (fVar46 * fVar46 + fVar47 * fVar47 + fVar44 * fVar44) - fVar42 * fVar42 <=
                  fVar45 * fVar45)) &&
                 ((*(ushort *)(lVar8 + 8 + lVar32 * 0xc) & 1 << ((byte)uVar36 & 0x1f)) != 0)))) &&
               ((fVar45 = *(float *)(lVar39 + 0x174) * 0.2, fVar45 <= 0.0 ||
                (fVar45 <= fVar43 * *(float *)(lVar31 + 0x5c + lVar38))))) {
              SystemHealthMonitor(*(uint64_t *)(lVar31 + 0x48 + lVar38),lVar39,unaff_RBP + 0x54,0,
                            unaff_RBP + -0x10);
            }
            lVar39 = *(int64_t *)(unaff_RSI + 8);
            uVar40 = (int)uVar36 + 1;
            uVar36 = (uint64_t)uVar40;
            uVar37 = uVar37 + 8;
          } while ((uint64_t)(int64_t)(int)uVar40 <
                   (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar39 >> 3));
        }
        lVar41 = *(int64_t *)(unaff_RBP + 0xaa);
        lVar39 = lStack0000000000000038;
      }
      lVar31 = lVar31 + 0x68;
      lStack0000000000000030 = lStack0000000000000030 + -1;
    } while (lStack0000000000000030 != 0);
  }
  lVar35 = 0;
  lVar38 = *(int64_t *)(lVar41 + 0x50 + lVar39);
  lVar31 = *(int64_t *)(lVar41 + 0x48 + lVar39);
  unaff_RBP[0x29] = 0;
  iVar34 = (int)((lVar38 - lVar31) / 0x30);
  *(int8_t *)((int64_t)unaff_RBP + 0xad) = 0xff;
  *(uint64_t *)(unaff_RBP + 0x2c) = 0;
  lStack0000000000000030 = (int64_t)iVar34;
  *(uint64_t *)(unaff_RBP + 0x2e) = 0xffffffffffffffff;
  unaff_RBP[0x30] = 0xffffffff;
  *(int8_t *)(unaff_RBP + 0x31) = 0xff;
  unaff_RBP[0x34] = 0;
  *(int16_t *)(unaff_RBP + 0x35) = 0x400;
  *(uint64_t *)(unaff_RBP + 0x36) = 0;
  unaff_RBP[0x38] = 0;
  *(uint64_t *)(unaff_RBP + 0x3a) = 0;
  unaff_RBP[0x3c] = 0;
  *(int8_t *)(unaff_RBP + 0x3d) = 0;
  *(uint64_t *)(unaff_RBP + 0x42) = 0;
  if (0 < iVar34) {
    do {
      lVar39 = *(int64_t *)(lVar41 + 0x48 + lVar39);
      lVar38 = *(int64_t *)(unaff_RSI + 11000);
      uVar40 = *(uint *)(unaff_RSI + 0x2b18);
      *(int8_t *)(unaff_RBP + 0x2b) = 0;
      lVar41 = *(int64_t *)(unaff_RSI + 0x488);
      uVar40 = *(uint *)(*(int64_t *)
                          (lVar38 + (int64_t)((int)*(uint *)(lVar35 + lVar39) >> 10) * 8) + 0x18 +
                        (int64_t)(int)(uVar40 & *(uint *)(lVar35 + lVar39)) * 0xd8);
      lVar31 = (int64_t)(int)(*(uint *)(unaff_RSI + 0x4a8) & uVar40);
      unaff_RBP[0x2a] = unaff_RBP[0xa8];
      lVar38 = *(int64_t *)(lVar35 + 8 + lVar39);
      lVar41 = *(int64_t *)(lVar41 + (int64_t)((int)uVar40 >> 10) * 8);
      *(int64_t *)(unaff_RBP + 0x2c) = lVar38;
      unaff_RBP[0x33] = *(int32_t *)(lVar38 + 0x310);
      unaff_RBP[0x28] = 0;
      unaff_RBP[0x32] = *(int32_t *)(*(int64_t *)(unaff_RBP + 0x2c) + 0x318);
      pfVar30 = (float *)(**(code **)(**(int64_t **)(lVar35 + 0x10 + lVar39) + 0x158))();
      pfVar1 = (float *)(lVar41 + 0x28 + lVar31 * 0x48);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar1 = (float *)(lVar41 + 8 + lVar31 * 0x48);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar1 = (float *)(lVar41 + 0x18 + lVar31 * 0x48);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      fVar43 = pfVar30[1];
      fVar45 = *pfVar30;
      fVar42 = pfVar30[2];
      fVar44 = pfVar30[5];
      fVar47 = pfVar30[4];
      fVar46 = pfVar30[6];
      fVar5 = pfVar30[8];
      unaff_RBP[0x74] = fVar43 * fVar18 + fVar45 * fVar14 + fVar42 * fVar10;
      unaff_RBP[0x75] = fVar43 * fVar19 + fVar45 * fVar15 + fVar42 * fVar11;
      unaff_RBP[0x76] = fVar43 * fVar20 + fVar45 * fVar16 + fVar42 * fVar12;
      unaff_RBP[0x77] = fVar43 * fVar21 + fVar45 * fVar17 + fVar42 * fVar13;
      fVar43 = pfVar30[9];
      fVar45 = pfVar30[10];
      unaff_RBP[0x78] = fVar44 * fVar18 + fVar47 * fVar14 + fVar46 * fVar10;
      unaff_RBP[0x79] = fVar44 * fVar19 + fVar47 * fVar15 + fVar46 * fVar11;
      unaff_RBP[0x7a] = fVar44 * fVar20 + fVar47 * fVar16 + fVar46 * fVar12;
      unaff_RBP[0x7b] = fVar44 * fVar21 + fVar47 * fVar17 + fVar46 * fVar13;
      fVar42 = pfVar30[0xd];
      fVar44 = pfVar30[0xc];
      fVar47 = pfVar30[0xe];
      pfVar1 = (float *)(lVar41 + 0x38 + lVar31 * 0x48);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
      fVar25 = pfVar1[3];
      fVar46 = *(float *)(lVar41 + 0x28 + lVar31 * 0x48);
      unaff_RBP[0x7c] = fVar43 * fVar18 + fVar5 * fVar14 + fVar45 * fVar10;
      unaff_RBP[0x7d] = fVar43 * fVar19 + fVar5 * fVar15 + fVar45 * fVar11;
      unaff_RBP[0x7e] = fVar43 * fVar20 + fVar5 * fVar16 + fVar45 * fVar12;
      unaff_RBP[0x7f] = fVar43 * fVar21 + fVar5 * fVar17 + fVar45 * fVar13;
      fVar43 = *(float *)(lVar41 + 0x10 + lVar31 * 0x48);
      fVar45 = *(float *)(lVar41 + 8 + lVar31 * 0x48);
      fVar5 = *(float *)(lVar41 + 0xc + lVar31 * 0x48);
      unaff_RBP[0x80] = fVar42 * fVar18 + fVar44 * fVar14 + fVar47 * fVar10 + fVar22;
      unaff_RBP[0x81] = fVar42 * fVar19 + fVar44 * fVar15 + fVar47 * fVar11 + fVar23;
      unaff_RBP[0x82] = fVar42 * fVar20 + fVar44 * fVar16 + fVar47 * fVar12 + fVar24;
      unaff_RBP[0x83] = fVar42 * fVar21 + fVar44 * fVar17 + fVar47 * fVar13 + fVar25;
      fVar42 = *(float *)(lVar41 + 0x18 + lVar31 * 0x48);
      fVar44 = *(float *)(lVar41 + 0x1c + lVar31 * 0x48);
      fVar47 = fVar45 * fVar45 + fVar5 * fVar5 + fVar43 * fVar43;
      fVar43 = *(float *)(lVar41 + 0x20 + lVar31 * 0x48);
      fVar45 = *(float *)(lVar41 + 0x2c + lVar31 * 0x48);
      fVar42 = fVar42 * fVar42 + fVar44 * fVar44 + fVar43 * fVar43;
      fVar43 = *(float *)(lVar41 + 0x30 + lVar31 * 0x48);
      fVar43 = fVar46 * fVar46 + fVar45 * fVar45 + fVar43 * fVar43;
      if (fVar47 <= fVar42) {
        if (fVar43 <= fVar42) {
          fVar43 = fVar42;
        }
      }
      else if (fVar43 <= fVar47) {
        fVar43 = fVar47;
      }
      lVar38 = *(int64_t *)(unaff_RSI + 8);
      uVar37 = 0;
      uVar36 = uVar37;
      if (*(int64_t *)(unaff_RSI + 0x10) - lVar38 >> 3 != 0) {
        do {
          lVar38 = *(int64_t *)(lVar38 + uVar36);
          if (((*(int *)(lVar38 + 0x178) < 2) &&
              (((lVar41 = *(int64_t *)(lVar38 + 0x28), lVar41 == 0 ||
                (fVar45 = *(float *)(lVar35 + 0x20 + lVar39), fVar45 == 3.4028235e+38)) ||
               (fVar47 = (float)unaff_RBP[0x81] - *(float *)(lVar41 + 0x124),
               fVar46 = (float)unaff_RBP[0x80] - *(float *)(lVar41 + 0x120),
               fVar44 = (float)unaff_RBP[0x82] - *(float *)(lVar41 + 0x128),
               fVar42 = *(float *)(lVar35 + 0x24 + lVar39),
               (fVar46 * fVar46 + fVar47 * fVar47 + fVar44 * fVar44) - fVar42 * fVar42 <=
               fVar45 * fVar45)))) &&
             (((*(ushort *)(lVar8 + 8 + lVar32 * 0xc) & 1 << ((byte)uVar37 & 0x1f)) != 0 &&
              ((fVar45 = *(float *)(lVar38 + 0x174) * 0.2, fVar45 <= 0.0 ||
               (fVar45 <= fVar43 * *(float *)(lVar35 + 0x28 + lVar39))))))) {
            SystemHealthMonitor(*(uint64_t *)(lVar35 + 0x18 + lVar39),lVar38,unaff_RBP + 0x74,0,
                          unaff_RBP + 0x28);
          }
          lVar38 = *(int64_t *)(unaff_RSI + 8);
          uVar40 = (int)uVar37 + 1;
          uVar37 = (uint64_t)uVar40;
          uVar36 = uVar36 + 8;
        } while ((uint64_t)(int64_t)(int)uVar40 <
                 (uint64_t)(*(int64_t *)(unaff_RSI + 0x10) - lVar38 >> 3));
      }
      lVar41 = *(int64_t *)(unaff_RBP + 0xaa);
      lVar35 = lVar35 + 0x30;
      lStack0000000000000030 = lStack0000000000000030 + -1;
      lVar39 = lStack0000000000000038;
    } while (lStack0000000000000030 != 0);
  }
  return;
}








