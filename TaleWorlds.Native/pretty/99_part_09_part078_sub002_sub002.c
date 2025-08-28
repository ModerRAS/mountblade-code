#include "TaleWorlds.Native.Split.h"

// 99_part_09_part078_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805f0696(void)
void FUN_1805f0696(void)

{
  float *pfVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong in_RAX;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  float *pfVar19;
  float *pfVar20;
  int32_t *puVar21;
  longlong lVar22;
  uint uVar23;
  uint *puVar24;
  float *unaff_RBP;
  longlong unaff_RSI;
  longlong lVar25;
  uint64_t *puVar26;
  longlong lVar27;
  code *pcVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong in_R11;
  longlong lVar31;
  float *pfVar32;
  ulonglong uVar33;
  longlong unaff_R12;
  uint64_t unaff_R13;
  longlong unaff_R14;
  uint64_t unaff_R15;
  uint64_t *puVar34;
  float fVar35;
  float extraout_XMM0_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  int8_t auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  char cStackX_20;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  fVar43 = *(float *)(unaff_R12 + 0x2c0);
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM13_Dd;
  if ((fVar43 != 0.0) || (0.06666667 < *(float *)(*(longlong *)(in_RAX + 0x20) + 0x60))) {
    cStackX_20 = '\0';
  }
  else {
    cStackX_20 = '\x01';
  }
  uVar16 = *(uint64_t *)(unaff_R12 + 0x78);
  lVar29 = *(longlong *)(unaff_R12 + 0x260);
  uVar10 = *(uint64_t *)(unaff_R12 + 0x80);
  uVar11 = *(uint64_t *)(unaff_R12 + 0x88);
  lVar25 = *(longlong *)(lVar29 + 0x210);
  *(uint64_t *)(unaff_RBP + 0x28) = *(uint64_t *)(unaff_R12 + 0x70);
  *(uint64_t *)(unaff_RBP + 0x2a) = uVar16;
  fVar43 = *(float *)(unaff_R12 + 0x90);
  fVar36 = *(float *)(unaff_R12 + 0x94);
  fVar40 = *(float *)(unaff_R12 + 0x98);
  fVar48 = *(float *)(unaff_R12 + 0x9c);
  *(longlong *)(unaff_RBP + 0x3e) = lVar25;
  *(uint64_t *)(unaff_RBP + 0x2c) = uVar10;
  *(uint64_t *)(unaff_RBP + 0x2e) = uVar11;
  fVar52 = *(float *)(unaff_R12 + 0xa0);
  fVar49 = *(float *)(unaff_R12 + 0xa4);
  fVar53 = *(float *)(unaff_R12 + 0xa8);
  fVar47 = *(float *)(unaff_R12 + 0xac);
  unaff_RBP[0x30] = fVar43;
  unaff_RBP[0x31] = fVar36;
  unaff_RBP[0x32] = fVar40;
  unaff_RBP[0x33] = fVar48;
  unaff_RBP[0x34] = fVar52;
  unaff_RBP[0x35] = fVar49;
  unaff_RBP[0x36] = fVar53;
  unaff_RBP[0x37] = fVar47;
  cVar13 = cStackX_20;
  FUN_180084ae0(unaff_RBP + 0x28);
  FUN_18063b470(unaff_RBP + 0x10,unaff_RBP + 0x28);
  puVar18 = (uint64_t *)0x0;
  fVar43 = unaff_RBP[0x10];
  fVar36 = unaff_RBP[0x11];
  fVar40 = unaff_RBP[0x12];
  fVar48 = unaff_RBP[0x13];
  unaff_RBP[0x48] = unaff_RBP[0x34];
  unaff_RBP[0x49] = unaff_RBP[0x35];
  unaff_RBP[0x4a] = unaff_RBP[0x36];
  unaff_RBP[0x4b] = unaff_RBP[0x37];
  unaff_RBP[0x44] = fVar43;
  unaff_RBP[0x45] = fVar36;
  unaff_RBP[0x46] = fVar40;
  unaff_RBP[0x47] = fVar48;
  if (*(char *)(unaff_RSI + 0xd0) == '\0') {
    puVar24 = (uint *)((longlong)*(char *)(lVar25 + 0x2582) * 0x100 + *(longlong *)(lVar29 + 0x18));
    do {
      LOCK();
      uVar14 = *puVar24;
      *puVar24 = *puVar24 | 1;
      UNLOCK();
    } while ((uVar14 & 1) != 0);
    fVar43 = (float)puVar24[1];
    fVar36 = (float)puVar24[2];
    fVar40 = (float)puVar24[3];
    fVar48 = (float)puVar24[4];
    fVar46 = (float)puVar24[5];
    fVar39 = (float)puVar24[6];
    fVar50 = (float)puVar24[7];
    fVar41 = (float)puVar24[8];
    unaff_RBP[-0x1c] = fVar43;
    unaff_RBP[-0x1b] = fVar36;
    unaff_RBP[-0x1a] = fVar40;
    unaff_RBP[-0x19] = fVar48;
    unaff_RBP[0x1f0] = fVar43;
    unaff_RBP[0x1f1] = fVar36;
    unaff_RBP[0x1f2] = fVar40;
    unaff_RBP[499] = fVar48;
    unaff_RBP[500] = fVar46;
    unaff_RBP[0x1f5] = fVar39;
    unaff_RBP[0x1f6] = fVar50;
    unaff_RBP[0x1f7] = fVar41;
    *puVar24 = 0;
    unaff_RBP[0x154] = fVar43;
    unaff_RBP[0x155] = fVar36;
    unaff_RBP[0x156] = fVar40;
    unaff_RBP[0x157] = fVar48;
    unaff_RBP[0x158] = fVar46;
    unaff_RBP[0x159] = fVar39;
    unaff_RBP[0x15a] = fVar50;
    unaff_RBP[0x15b] = fVar41;
    unaff_RBP[0xd0] = fVar43;
    unaff_RBP[0xd1] = fVar36;
    unaff_RBP[0xd2] = fVar40;
    unaff_RBP[0xd3] = fVar48;
    unaff_RBP[0xd4] = fVar46;
    unaff_RBP[0xd5] = fVar39;
    unaff_RBP[0xd6] = fVar50;
    unaff_RBP[0xd7] = fVar41;
    puVar17 = (uint64_t *)FUN_18063b5f0(unaff_RBP + 0x4c,unaff_RBP + 0xd0);
    fVar43 = *(float *)(lVar25 + 0x255c);
    fVar36 = *(float *)(lVar25 + 0x2560);
    fVar40 = *(float *)(lVar25 + 0x2558);
    fVar52 = *(float *)(lVar25 + 0x256c);
    fVar47 = fVar40 * unaff_RBP[0x4c] + fVar46 + fVar43 * unaff_RBP[0x50] + fVar36 * unaff_RBP[0x54]
    ;
    fVar37 = fVar40 * unaff_RBP[0x4d] + fVar39 + fVar43 * unaff_RBP[0x51] + fVar36 * unaff_RBP[0x55]
    ;
    fVar49 = *(float *)(lVar25 + 0x2568);
    fVar53 = *(float *)(lVar25 + 0x2570);
    fVar38 = fVar40 * unaff_RBP[0x4e] + fVar50 + fVar43 * unaff_RBP[0x52] + fVar36 * unaff_RBP[0x56]
    ;
    auVar44 = ZEXT416((uint)(fVar52 * unaff_RBP[0x52]));
    in_stack_00000070 = *(uint64_t *)(unaff_RBP + -0x1c);
    in_stack_00000078 = *(uint64_t *)(unaff_RBP + -0x1a);
    unaff_RBP[-0x18] = unaff_RBP[-0x1c];
    unaff_RBP[-0x17] = unaff_RBP[-0x1b];
    unaff_RBP[-0x16] = unaff_RBP[-0x1a];
    unaff_RBP[-0x15] = unaff_RBP[-0x19];
    fVar43 = unaff_RBP[0x10];
    fVar36 = unaff_RBP[0x11];
    fVar40 = unaff_RBP[0x12];
    fVar48 = unaff_RBP[0x13];
    unaff_RBP[-0x14] =
         fVar49 * unaff_RBP[0x4c] + fVar46 + fVar52 * unaff_RBP[0x50] + fVar53 * unaff_RBP[0x54];
    unaff_RBP[-0x13] =
         fVar49 * unaff_RBP[0x4d] + fVar39 + fVar52 * unaff_RBP[0x51] + fVar53 * unaff_RBP[0x55];
    unaff_RBP[-0x12] =
         fVar49 * unaff_RBP[0x4e] + fVar50 + fVar52 * unaff_RBP[0x52] + fVar53 * unaff_RBP[0x56];
    unaff_RBP[-0x11] = fVar41;
  }
  else {
    FUN_1801c13c0(unaff_R12 + 0x70,unaff_RBP + 0xb0,unaff_RSI + 0x80);
    uVar16 = FUN_180535610(unaff_R12 + 0x70,unaff_RBP + 0x1e4,
                           SQRT(*(float *)(unaff_R12 + 0x70) * *(float *)(unaff_R12 + 0x70) +
                                *(float *)(unaff_R12 + 0x74) * *(float *)(unaff_R12 + 0x74) +
                                *(float *)(unaff_R12 + 0x78) * *(float *)(unaff_R12 + 0x78)));
    puVar17 = (uint64_t *)FUN_18063b470(unaff_RBP + 0xcc,uVar16);
    fVar52 = *(float *)(unaff_RSI + 0x70);
    fVar49 = *(float *)(unaff_RSI + 0x74);
    fVar53 = *(float *)(unaff_RSI + 0x78);
    fVar46 = *(float *)(unaff_RSI + 0x7c);
    puVar18 = (uint64_t *)0x0;
    fVar39 = unaff_RBP[0xcc];
    fVar50 = unaff_RBP[0xcd];
    fVar56 = unaff_RBP[0xce];
    fVar35 = unaff_RBP[0xcf];
    fVar47 = unaff_RBP[0xb0];
    fVar37 = unaff_RBP[0xb1];
    fVar38 = unaff_RBP[0xb2];
    fVar41 = unaff_RBP[0xb3];
    auVar44._0_4_ = fVar35 * fVar53;
    auVar44._4_4_ = fVar50 * fVar46;
    auVar44._8_4_ = fVar56 * fVar49;
    auVar44._12_4_ = fVar50 * fVar49;
    unaff_RBP[-0x14] = fVar47;
    unaff_RBP[-0x13] = fVar37;
    unaff_RBP[-0x12] = fVar38;
    unaff_RBP[-0x11] = fVar41;
    fVar45 = fVar56 * fVar46 * -1.0 + fVar52 * fVar50 * -1.0 + fVar39 * fVar49 + auVar44._0_4_;
    fVar49 = fVar35 * fVar49 * -1.0 + fVar52 * fVar56 * -1.0 + fVar39 * fVar53 + auVar44._4_4_;
    fVar50 = fVar50 * fVar53 * -1.0 + fVar52 * fVar35 * -1.0 + fVar39 * fVar46 + auVar44._8_4_;
    fVar52 = fVar35 * fVar46 * 1.0 + fVar52 * fVar39 * 1.0 + fVar56 * fVar53 + auVar44._12_4_;
    in_stack_00000070 = CONCAT44(fVar45,fVar52);
    in_stack_00000078 = CONCAT44(fVar50,fVar49);
    unaff_RBP[-0x18] = fVar52;
    unaff_RBP[-0x17] = fVar45;
    unaff_RBP[-0x16] = fVar49;
    unaff_RBP[-0x15] = fVar50;
  }
  bVar12 = false;
  unaff_RBP[-0x20] = fVar47;
  unaff_RBP[-0x1f] = fVar37;
  unaff_RBP[-0x1e] = fVar38;
  unaff_RBP[-0x1d] = fVar41;
  if ((cVar13 != '\0') && (0.2 < *(float *)(unaff_RSI + 0x1e0))) {
    bVar12 = true;
    *(int16_t *)(unaff_RSI + 0xd1) = 0x101;
    *(int *)(unaff_RSI + 0x1e0) = (int)puVar18;
    cStackX_20 = '\0';
  }
  puVar26 = puVar18;
  if (*(char *)(unaff_RSI + 0xd3) != '\0') {
    puVar4 = *(uint64_t **)(unaff_RSI + 0xd8);
    if ((void *)*puVar4 == &UNK_180a3beb8) {
      puVar34 = (uint64_t *)((ulonglong)puVar18 & 0xffffffff);
      puVar17 = (uint64_t *)((longlong)(puVar4[10] - puVar4[9]) >> 3);
      if (puVar17 != (uint64_t *)0x0) {
        do {
          plVar30 = *(longlong **)(puVar4[9] + (longlong)puVar18 * 8);
          lVar25 = *plVar30;
          unaff_RBP[-0xe] = 0.0;
          unaff_RBP[-0xd] = 0.0;
          unaff_RBP[-0xc] = 0.0;
          (**(code **)(lVar25 + 0x148))(plVar30,unaff_RBP + -0xe,1);
          plVar30 = *(longlong **)(puVar4[9] + (longlong)puVar18 * 8);
          lVar25 = *plVar30;
          unaff_RBP[-0xb] = 0.0;
          unaff_RBP[-10] = 0.0;
          unaff_RBP[-9] = 0.0;
          (**(code **)(lVar25 + 0x138))(plVar30,unaff_RBP + -0xb,1);
          lVar25 = puVar4[5];
          lVar22 = (longlong)puVar18 * 0x60;
          puVar26 = (uint64_t *)0x0;
          puVar18 = (uint64_t *)(ulonglong)((int)puVar34 + 1);
          *(uint64_t *)(lVar22 + lVar25) = 0;
          *(int32_t *)(lVar22 + 8 + lVar25) = 0;
          *(uint64_t *)(lVar22 + 0x10 + lVar25) = 0;
          *(int32_t *)(lVar22 + 0x18 + lVar25) = 0;
          puVar17 = (uint64_t *)((longlong)(puVar4[10] - puVar4[9]) >> 3);
          puVar34 = puVar18;
        } while (puVar18 < puVar17);
      }
    }
    else {
      puVar17 = (uint64_t *)(**(code **)((void *)*puVar4 + 0x68))(puVar4);
      puVar26 = (uint64_t *)0x0;
    }
    cStackX_20 = '\0';
    bVar12 = true;
    *(int8_t *)(unaff_RSI + 0xd3) = 0;
  }
  if (*(char *)(unaff_RSI + 0xd1) != '\0') {
    if (*(char *)(unaff_RSI + 0xd2) != '\0') {
      puVar24 = (uint *)((longlong)*(char *)(unaff_RSI + 0x68) * 0x100 +
                        *(longlong *)(unaff_R14 + 0x18));
      do {
        LOCK();
        uVar14 = *puVar24;
        *puVar24 = *puVar24 | 1;
        UNLOCK();
      } while ((uVar14 & 1) != 0);
      fVar43 = (float)puVar24[1];
      fVar36 = (float)puVar24[2];
      fVar40 = (float)puVar24[3];
      fVar48 = (float)puVar24[4];
      fVar52 = (float)puVar24[5];
      fVar49 = (float)puVar24[6];
      fVar53 = (float)puVar24[7];
      fVar47 = (float)puVar24[8];
      unaff_RBP[0x218] = fVar43;
      unaff_RBP[0x219] = fVar36;
      unaff_RBP[0x21a] = fVar40;
      unaff_RBP[0x21b] = fVar48;
      unaff_RBP[0x21c] = fVar52;
      unaff_RBP[0x21d] = fVar49;
      unaff_RBP[0x21e] = fVar53;
      unaff_RBP[0x21f] = fVar47;
      *puVar24 = (uint)puVar26;
      unaff_RBP[0x160] = fVar43;
      unaff_RBP[0x161] = fVar36;
      unaff_RBP[0x162] = fVar40;
      unaff_RBP[0x163] = fVar48;
      unaff_RBP[0x164] = fVar52;
      unaff_RBP[0x165] = fVar49;
      unaff_RBP[0x166] = fVar53;
      unaff_RBP[0x167] = fVar47;
      unaff_RBP[0xd8] = fVar43;
      unaff_RBP[0xd9] = fVar36;
      unaff_RBP[0xda] = fVar40;
      unaff_RBP[0xdb] = fVar48;
      unaff_RBP[0xdc] = fVar52;
      unaff_RBP[0xdd] = fVar49;
      unaff_RBP[0xde] = fVar53;
      unaff_RBP[0xdf] = fVar47;
      uVar16 = FUN_180300bf0(unaff_RBP + 0xd8,unaff_RBP + 0x19c,unaff_RSI + 0x90);
      puVar18 = (uint64_t *)FUN_180300b10(&stack0x00000070,unaff_RBP + 0x1a4,uVar16);
      uVar16 = puVar18[1];
      *(uint64_t *)(unaff_RSI + 0x90) = *puVar18;
      *(uint64_t *)(unaff_RSI + 0x98) = uVar16;
      uVar16 = puVar18[3];
      *(uint64_t *)(unaff_RSI + 0xa0) = puVar18[2];
      *(uint64_t *)(unaff_RSI + 0xa8) = uVar16;
      puVar24 = (uint *)((longlong)*(char *)(unaff_RSI + 100) * 0x100 +
                        *(longlong *)(unaff_R14 + 0x18));
      do {
        LOCK();
        uVar14 = *puVar24;
        *puVar24 = *puVar24 | 1;
        UNLOCK();
      } while ((uVar14 & 1) != 0);
      fVar43 = (float)puVar24[1];
      fVar36 = (float)puVar24[2];
      fVar40 = (float)puVar24[3];
      fVar48 = (float)puVar24[4];
      fVar52 = (float)puVar24[5];
      fVar49 = (float)puVar24[6];
      fVar53 = (float)puVar24[7];
      fVar47 = (float)puVar24[8];
      unaff_RBP[0x1f8] = fVar43;
      unaff_RBP[0x1f9] = fVar36;
      unaff_RBP[0x1fa] = fVar40;
      unaff_RBP[0x1fb] = fVar48;
      unaff_RBP[0x1fc] = fVar52;
      unaff_RBP[0x1fd] = fVar49;
      unaff_RBP[0x1fe] = fVar53;
      unaff_RBP[0x1ff] = fVar47;
      *puVar24 = 0;
      unaff_RBP[0x168] = fVar43;
      unaff_RBP[0x169] = fVar36;
      unaff_RBP[0x16a] = fVar40;
      unaff_RBP[0x16b] = fVar48;
      unaff_RBP[0x16c] = fVar52;
      unaff_RBP[0x16d] = fVar49;
      unaff_RBP[0x16e] = fVar53;
      unaff_RBP[0x16f] = fVar47;
      unaff_RBP[0xe0] = fVar43;
      unaff_RBP[0xe1] = fVar36;
      unaff_RBP[0xe2] = fVar40;
      unaff_RBP[0xe3] = fVar48;
      unaff_RBP[0xe4] = fVar52;
      unaff_RBP[0xe5] = fVar49;
      unaff_RBP[0xe6] = fVar53;
      unaff_RBP[0xe7] = fVar47;
      uVar16 = FUN_180300bf0(unaff_RBP + 0xe0,unaff_RBP + 0x1ac,unaff_RSI + 0xb0);
      puVar17 = (uint64_t *)FUN_180300b10(&stack0x00000070,unaff_RBP + 0x1b4,uVar16);
      fVar43 = unaff_RBP[0x10];
      fVar36 = unaff_RBP[0x11];
      fVar40 = unaff_RBP[0x12];
      fVar48 = unaff_RBP[0x13];
      uVar16 = puVar17[1];
      *(uint64_t *)(unaff_RSI + 0xb0) = *puVar17;
      *(uint64_t *)(unaff_RSI + 0xb8) = uVar16;
      uVar16 = puVar17[3];
      *(uint64_t *)(unaff_RSI + 0xc0) = puVar17[2];
      *(uint64_t *)(unaff_RSI + 200) = uVar16;
      *(int8_t *)(unaff_RSI + 0xd2) = 0;
    }
    pfVar20 = (float *)(unaff_RSI + 0x90);
    *(float *)(unaff_RSI + 0xa0) = *(float *)(unaff_RSI + 0xa0) * 0.9;
    *(float *)(unaff_RSI + 0xa8) = *(float *)(unaff_RSI + 0xa8) * 0.9;
    *(float *)(unaff_RSI + 0xa4) = *(float *)(unaff_RSI + 0xa4) * 0.9;
    *(float *)(unaff_RSI + 0xc0) = *(float *)(unaff_RSI + 0xc0) * 0.9;
    *(float *)(unaff_RSI + 0xc4) = *(float *)(unaff_RSI + 0xc4) * 0.9;
    *(float *)(unaff_RSI + 200) = *(float *)(unaff_RSI + 200) * 0.9;
    fVar52 = *pfVar20;
    fVar49 = *(float *)(unaff_RSI + 0x94);
    fVar53 = *(float *)(unaff_RSI + 0x98);
    fVar47 = *(float *)(unaff_RSI + 0x9c);
    fVar37 = fVar53 * 0.0;
    fVar38 = fVar47 * 0.0;
    fVar41 = fVar38 + fVar49 * 0.0;
    fVar39 = fVar37 + fVar52 * 1.0 + fVar41;
    unaff_RBP[0x228] = 1.0;
    unaff_RBP[0x229] = 1.0;
    unaff_RBP[0x22a] = 1.0;
    unaff_RBP[0x22b] = 1.0;
    unaff_RBP[0x22c] = -1.0;
    unaff_RBP[0x22d] = -1.0;
    unaff_RBP[0x22e] = -1.0;
    unaff_RBP[0x22f] = -1.0;
    auVar7._4_4_ = fVar41;
    auVar7._0_4_ = fVar39;
    auVar7._8_4_ = fVar37 + fVar37;
    auVar7._12_4_ = fVar38 + fVar38;
    uVar14 = movmskps((int)puVar17,auVar7);
    iVar15 = (uVar14 & 1) * 2;
    pfVar19 = unaff_RBP + (ulonglong)(uVar14 & 1) * 4 + 0x228;
    fVar37 = *pfVar19;
    fVar38 = pfVar19[1];
    fVar41 = pfVar19[2];
    fVar46 = pfVar19[3];
    if (0.9995 < ABS(fVar39)) {
      fVar39 = fVar37 * 1.0 * 0.9 + fVar52 * 0.100000024;
      fVar50 = fVar38 * 0.0 * 0.9 + fVar49 * 0.100000024;
      fVar56 = fVar41 * 0.0 * 0.9 + fVar53 * 0.100000024;
      fVar35 = fVar46 * 0.0 * 0.9 + fVar47 * 0.100000024;
      fVar52 = fVar35 * fVar35 + fVar39 * fVar39;
      fVar49 = fVar56 * fVar56 + fVar50 * fVar50;
      fVar41 = fVar52 + fVar50 * fVar50 + fVar56 * fVar56;
      fVar46 = fVar49 + fVar39 * fVar39 + fVar35 * fVar35;
      auVar6._4_4_ = fVar52 + fVar49 + 1.1754944e-38;
      auVar6._0_4_ = fVar49 + fVar52 + 1.1754944e-38;
      auVar6._8_4_ = fVar41 + 1.1754944e-38;
      auVar6._12_4_ = fVar46 + 1.1754944e-38;
      auVar44 = rsqrtps(auVar44,auVar6);
      fVar53 = auVar44._0_4_;
      fVar47 = auVar44._4_4_;
      fVar37 = auVar44._8_4_;
      fVar38 = auVar44._12_4_;
      fVar39 = fVar39 * (3.0 - fVar53 * fVar53 * (fVar49 + fVar52)) * fVar53 * 0.5;
      fVar50 = fVar50 * (3.0 - fVar47 * fVar47 * (fVar52 + fVar49)) * fVar47 * 0.5;
      fVar56 = fVar56 * (3.0 - fVar37 * fVar37 * fVar41) * fVar37 * 0.5;
      fVar35 = fVar35 * (3.0 - fVar38 * fVar38 * fVar46) * fVar38 * 0.5;
    }
    else {
      fVar39 = (float)acosf();
      fVar50 = (float)sinf();
      fVar35 = (float)sinf(fVar39 - fVar39 * 0.9);
      fVar35 = fVar35 * (1.0 / fVar50);
      iVar15 = sinf(fVar39 * 0.9);
      fVar45 = extraout_XMM0_Da * (1.0 / fVar50);
      fVar39 = fVar35 * fVar52 + fVar45 * fVar37 * 1.0;
      fVar50 = fVar35 * fVar49 + fVar45 * fVar38 * 0.0;
      fVar56 = fVar35 * fVar53 + fVar45 * fVar41 * 0.0;
      fVar35 = fVar35 * fVar47 + fVar45 * fVar46 * 0.0;
    }
    pfVar19 = (float *)(unaff_RSI + 0xb0);
    *pfVar20 = fVar39;
    *(float *)(unaff_RSI + 0x94) = fVar50;
    *(float *)(unaff_RSI + 0x98) = fVar56;
    *(float *)(unaff_RSI + 0x9c) = fVar35;
    fVar52 = *pfVar19;
    fVar49 = *(float *)(unaff_RSI + 0xb4);
    fVar53 = *(float *)(unaff_RSI + 0xb8);
    fVar47 = *(float *)(unaff_RSI + 0xbc);
    unaff_RBP[0x220] = 1.0;
    unaff_RBP[0x221] = 1.0;
    unaff_RBP[0x222] = 1.0;
    unaff_RBP[0x223] = 1.0;
    fVar37 = fVar53 * 0.0;
    fVar38 = fVar47 * 0.0;
    unaff_RBP[0x194] = fVar39;
    unaff_RBP[0x195] = fVar50;
    unaff_RBP[0x196] = fVar56;
    unaff_RBP[0x197] = fVar35;
    fVar41 = fVar38 + fVar49 * 0.0;
    fVar39 = fVar37 + fVar52 * 1.0 + fVar41;
    unaff_RBP[0x224] = -1.0;
    unaff_RBP[0x225] = -1.0;
    unaff_RBP[0x226] = -1.0;
    unaff_RBP[0x227] = -1.0;
    auVar8._4_4_ = fVar41;
    auVar8._0_4_ = fVar39;
    auVar8._8_4_ = fVar37 + fVar37;
    auVar8._12_4_ = fVar38 + fVar38;
    uVar14 = movmskps(iVar15,auVar8);
    pfVar32 = unaff_RBP + (ulonglong)(uVar14 & 1) * 4 + 0x220;
    fVar37 = *pfVar32;
    fVar38 = pfVar32[1];
    fVar41 = pfVar32[2];
    fVar46 = pfVar32[3];
    if (0.9995 < ABS(fVar39)) {
      fVar39 = fVar37 * 1.0 * 0.9 + fVar52 * 0.100000024;
      fVar50 = fVar38 * 0.0 * 0.9 + fVar49 * 0.100000024;
      fVar56 = fVar41 * 0.0 * 0.9 + fVar53 * 0.100000024;
      fVar35 = fVar46 * 0.0 * 0.9 + fVar47 * 0.100000024;
      fVar52 = fVar35 * fVar35 + fVar39 * fVar39;
      fVar49 = fVar56 * fVar56 + fVar50 * fVar50;
      fVar41 = fVar52 + fVar50 * fVar50 + fVar56 * fVar56;
      fVar46 = fVar49 + fVar39 * fVar39 + fVar35 * fVar35;
      auVar5._4_4_ = fVar52 + fVar49 + 1.1754944e-38;
      auVar5._0_4_ = fVar49 + fVar52 + 1.1754944e-38;
      auVar5._8_4_ = fVar41 + 1.1754944e-38;
      auVar5._12_4_ = fVar46 + 1.1754944e-38;
      auVar44 = rsqrtps(auVar44,auVar5);
      fVar53 = auVar44._0_4_;
      fVar47 = auVar44._4_4_;
      fVar37 = auVar44._8_4_;
      fVar38 = auVar44._12_4_;
      fVar39 = fVar39 * (3.0 - fVar53 * fVar53 * (fVar49 + fVar52)) * fVar53 * 0.5;
      fVar50 = fVar50 * (3.0 - fVar47 * fVar47 * (fVar52 + fVar49)) * fVar47 * 0.5;
      fVar56 = fVar56 * (3.0 - fVar37 * fVar37 * fVar41) * fVar37 * 0.5;
      fVar35 = fVar35 * (3.0 - fVar38 * fVar38 * fVar46) * fVar38 * 0.5;
    }
    else {
      fVar39 = (float)acosf();
      fVar50 = (float)sinf();
      fVar35 = (float)sinf(fVar39 - fVar39 * 0.9);
      fVar35 = fVar35 * (1.0 / fVar50);
      fVar45 = (float)sinf(fVar39 * 0.9);
      fVar45 = fVar45 * (1.0 / fVar50);
      fVar39 = fVar35 * fVar52 + fVar45 * fVar37 * 1.0;
      fVar50 = fVar35 * fVar49 + fVar45 * fVar38 * 0.0;
      fVar56 = fVar35 * fVar53 + fVar45 * fVar41 * 0.0;
      fVar35 = fVar35 * fVar47 + fVar45 * fVar46 * 0.0;
    }
    unaff_RBP[0x198] = fVar39;
    unaff_RBP[0x199] = fVar50;
    unaff_RBP[0x19a] = fVar56;
    unaff_RBP[0x19b] = fVar35;
    *pfVar19 = fVar39;
    *(float *)(unaff_RSI + 0xb4) = fVar50;
    *(float *)(unaff_RSI + 0xb8) = fVar56;
    *(float *)(unaff_RSI + 0xbc) = fVar35;
    puVar18 = (uint64_t *)FUN_180300bf0(&stack0x00000070,unaff_RBP + 0x1bc,pfVar20);
    in_stack_00000070 = *puVar18;
    in_stack_00000078 = puVar18[1];
    fVar52 = *(float *)((longlong)puVar18 + 0x14);
    fVar49 = *(float *)(puVar18 + 3);
    fVar53 = *(float *)((longlong)puVar18 + 0x1c);
    unaff_RBP[-0x20] = *(float *)(puVar18 + 2);
    unaff_RBP[-0x1f] = fVar52;
    unaff_RBP[-0x1e] = fVar49;
    unaff_RBP[-0x1d] = fVar53;
    puVar18 = (uint64_t *)FUN_180300bf0(unaff_RBP + -0x18,unaff_RBP + 0x1c4,pfVar19);
    uVar16 = puVar18[1];
    *(uint64_t *)(unaff_RBP + -0x18) = *puVar18;
    *(uint64_t *)(unaff_RBP + -0x16) = uVar16;
    uVar16 = puVar18[3];
    fVar52 = *(float *)(unaff_RSI + 0xa0);
    *(uint64_t *)(unaff_RBP + -0x14) = puVar18[2];
    *(uint64_t *)(unaff_RBP + -0x12) = uVar16;
    if (((((ABS(fVar52) < 0.001) && (ABS(*(float *)(unaff_RSI + 0xa4)) < 0.001)) &&
         (ABS(*(float *)(unaff_RSI + 0xa8)) < 0.001)) &&
        ((ABS(*(float *)(unaff_RSI + 0xc0)) < 0.001 && (ABS(*(float *)(unaff_RSI + 0xc4)) < 0.001)))
        ) && ((ABS(*(float *)(unaff_RSI + 200)) < 0.001 &&
              ((cVar13 = FUN_1805f26d0(pfVar20,&DAT_180a13a10), cVar13 != '\0' &&
               (cVar13 = FUN_1805f26d0(pfVar19,&DAT_180a13a10), cVar13 != '\0')))))) {
      *(int8_t *)(unaff_RSI + 0xd1) = 0;
      pfVar20[0] = 1.0;
      pfVar20[1] = 0.0;
      *(uint64_t *)(unaff_RSI + 0x98) = 0;
      *(uint64_t *)(unaff_RSI + 0xa0) = 0;
      *(uint64_t *)(unaff_RSI + 0xa8) = 0x3f80000000000000;
      *pfVar19 = 1.0;
      *(int32_t *)(unaff_RSI + 0xb4) = 0;
      *(int32_t *)(unaff_RSI + 0xb8) = 0;
      *(int32_t *)(unaff_RSI + 0xbc) = 0;
      *(uint64_t *)(unaff_RSI + 0xc0) = 0;
      *(uint64_t *)(unaff_RSI + 200) = 0x3f80000000000000;
    }
  }
  if (bVar12) {
    lVar25 = *(longlong *)(unaff_R14 + 0x208);
    cVar13 = '\0';
    if ('\0' < *(char *)(lVar25 + 0x148)) {
      unaff_RBP[-0x1c] = fVar43;
      unaff_RBP[-0x1b] = fVar43;
      unaff_RBP[-0x1a] = fVar43;
      unaff_RBP[-0x19] = fVar40;
      fVar52 = unaff_RBP[-0x1c];
      fVar49 = unaff_RBP[-0x1b];
      fVar53 = unaff_RBP[-0x1a];
      fVar47 = unaff_RBP[-0x19];
      do {
        lVar31 = (longlong)cVar13;
        lVar22 = lVar31 * 0x30;
        puVar24 = (uint *)((longlong)*(char *)(lVar22 + *(longlong *)(unaff_RSI + 0x1e8)) * 0x100 +
                          *(longlong *)(lVar29 + 0x18));
        do {
          LOCK();
          uVar14 = *puVar24;
          *puVar24 = *puVar24 | 1;
          UNLOCK();
        } while ((uVar14 & 1) != 0);
        fVar37 = (float)puVar24[1];
        fVar38 = (float)puVar24[2];
        fVar41 = (float)puVar24[3];
        fVar46 = (float)puVar24[4];
        fVar39 = (float)puVar24[5];
        fVar50 = (float)puVar24[6];
        fVar56 = (float)puVar24[7];
        fVar35 = (float)puVar24[8];
        unaff_RBP[0x208] = fVar37;
        unaff_RBP[0x209] = fVar38;
        unaff_RBP[0x20a] = fVar41;
        unaff_RBP[0x20b] = fVar46;
        unaff_RBP[0x20c] = fVar39;
        unaff_RBP[0x20d] = fVar50;
        unaff_RBP[0x20e] = fVar56;
        unaff_RBP[0x20f] = fVar35;
        *puVar24 = 0;
        lVar27 = *(longlong *)(unaff_RSI + 0x1e8);
        unaff_RBP[0x170] = fVar37;
        unaff_RBP[0x171] = fVar38;
        unaff_RBP[0x172] = fVar41;
        unaff_RBP[0x173] = fVar46;
        unaff_RBP[0x174] = fVar39;
        unaff_RBP[0x175] = fVar50;
        unaff_RBP[0x176] = fVar56;
        unaff_RBP[0x177] = fVar35;
        unaff_RBP[0xe8] = fVar37;
        unaff_RBP[0xe9] = fVar38;
        unaff_RBP[0xea] = fVar41;
        unaff_RBP[0xeb] = fVar46;
        unaff_RBP[0xec] = fVar39;
        unaff_RBP[0xed] = fVar50;
        unaff_RBP[0xee] = fVar56;
        unaff_RBP[0xef] = fVar35;
        pfVar19 = (float *)FUN_1801c0fb0(unaff_RBP + 0xe8,unaff_RBP + 0x110,lVar27 + 0x20 + lVar22);
        pfVar20 = (float *)(lVar22 + 0x10 + lVar27);
        fVar35 = *pfVar20;
        fVar45 = pfVar20[1];
        fVar42 = pfVar20[2];
        fVar51 = pfVar20[3];
        fVar39 = fVar39 + *pfVar19;
        unaff_RBP[-1] = 3.4028235e+38;
        fVar50 = fVar50 + pfVar19[1];
        pfVar32 = (float *)(lVar31 * 0x40 + *(longlong *)(unaff_RSI + 0x108));
        fVar56 = fVar56 + pfVar19[2];
        fVar58 = fVar41 * fVar51 * 1.0 + fVar37 * fVar45 * 1.0 + (fVar35 * fVar38 - fVar46 * fVar42)
        ;
        fVar59 = fVar46 * fVar45 * 1.0 + fVar37 * fVar42 * 1.0 + (fVar35 * fVar41 - fVar38 * fVar51)
        ;
        fVar60 = fVar38 * fVar42 * 1.0 + fVar37 * fVar51 * 1.0 + (fVar35 * fVar46 - fVar41 * fVar45)
        ;
        fVar61 = fVar46 * fVar51 * -1.0 + fVar41 * fVar42 * -1.0 +
                 (fVar35 * fVar37 - fVar38 * fVar45);
        unaff_RBP[0x10c] = fVar39;
        unaff_RBP[0x10d] = fVar50;
        unaff_RBP[0x10e] = fVar56;
        unaff_RBP[0x10f] = unaff_RBP[-1];
        unaff_RBP[-4] = fVar39;
        unaff_RBP[-3] = fVar50;
        unaff_RBP[-2] = fVar56;
        unaff_RBP[-1] = unaff_RBP[-1];
        unaff_RBP[0x114] = fVar61;
        unaff_RBP[0x115] = fVar58;
        unaff_RBP[0x116] = fVar59;
        unaff_RBP[0x117] = fVar60;
        unaff_RBP[0x108] = fVar61;
        unaff_RBP[0x109] = fVar58;
        unaff_RBP[0x10a] = fVar59;
        unaff_RBP[0x10b] = fVar60;
        pfVar20 = (float *)FUN_1801c0fb0(unaff_RBP + 0x108,unaff_RBP + 0x118,pfVar32 + 4);
        fVar46 = *pfVar32;
        fVar35 = pfVar32[1];
        fVar45 = pfVar32[2];
        fVar42 = pfVar32[3];
        fVar37 = *pfVar20;
        fVar38 = pfVar20[1];
        fVar41 = pfVar20[2];
        unaff_RBP[-5] = 3.4028235e+38;
        fVar51 = unaff_RBP[-5];
        fVar54 = fVar59 * fVar42 * 1.0 + fVar61 * fVar35 * 1.0 + (fVar46 * fVar58 - fVar60 * fVar45)
        ;
        fVar55 = fVar60 * fVar35 * 1.0 + fVar61 * fVar45 * 1.0 + (fVar46 * fVar59 - fVar58 * fVar42)
        ;
        fVar57 = fVar58 * fVar45 * 1.0 + fVar61 * fVar42 * 1.0 + (fVar46 * fVar60 - fVar59 * fVar35)
        ;
        fVar35 = fVar60 * fVar42 * -1.0 + fVar59 * fVar45 * -1.0 +
                 (fVar46 * fVar61 - fVar58 * fVar35);
        unaff_RBP[-8] = fVar39 + fVar37;
        unaff_RBP[-7] = fVar50 + fVar38;
        unaff_RBP[-6] = fVar56 + fVar41;
        unaff_RBP[-5] = fVar51;
        unaff_RBP[0x5c] = fVar39 + fVar37;
        unaff_RBP[0x5d] = fVar50 + fVar38;
        unaff_RBP[0x5e] = fVar56 + fVar41;
        unaff_RBP[0x5f] = fVar51;
        unaff_RBP[0x14c] = fVar35;
        unaff_RBP[0x14d] = fVar54;
        unaff_RBP[0x14e] = fVar55;
        unaff_RBP[0x14f] = fVar57;
        unaff_RBP[0x58] = fVar35;
        unaff_RBP[0x59] = fVar54;
        unaff_RBP[0x5a] = fVar55;
        unaff_RBP[0x5b] = fVar57;
        pfVar20 = (float *)FUN_1801c0fb0(unaff_RBP + 0x44,unaff_RBP + 0x11c,unaff_RBP + 0x5c);
        plVar30 = *(longlong **)(unaff_RSI + 0xd8);
        fVar37 = *pfVar20;
        fVar38 = pfVar20[1];
        fVar41 = pfVar20[2];
        unaff_RBP[3] = 3.4028235e+38;
        fVar46 = fVar54 * fVar52 * 1.0 + fVar57 * fVar40 * 1.0 + (fVar35 * fVar36 - fVar55 * fVar48)
        ;
        fVar39 = fVar55 * fVar49 * 1.0 + fVar54 * fVar48 * 1.0 + (fVar35 * fVar40 - fVar57 * fVar36)
        ;
        fVar50 = fVar57 * fVar53 * 1.0 + fVar55 * fVar36 * 1.0 + (fVar35 * fVar48 - fVar54 * fVar40)
        ;
        fVar56 = fVar55 * fVar47 * -1.0 + fVar57 * fVar48 * -1.0 +
                 (fVar35 * fVar43 - fVar54 * fVar36);
        unaff_RBP[0x5c] = unaff_RBP[0x34] + fVar37;
        unaff_RBP[0x5d] = unaff_RBP[0x35] + fVar38;
        unaff_RBP[0x5e] = unaff_RBP[0x36] + fVar41;
        unaff_RBP[0x5f] = unaff_RBP[3];
        *unaff_RBP = unaff_RBP[0x34] + fVar37;
        unaff_RBP[1] = unaff_RBP[0x35] + fVar38;
        unaff_RBP[2] = unaff_RBP[0x36] + fVar41;
        unaff_RBP[3] = unaff_RBP[3];
        unaff_RBP[0x58] = fVar56;
        unaff_RBP[0x59] = fVar46;
        unaff_RBP[0x5a] = fVar39;
        unaff_RBP[0x5b] = fVar50;
        lVar22 = *plVar30;
        unaff_RBP[0x120] = fVar56;
        unaff_RBP[0x121] = fVar46;
        unaff_RBP[0x122] = fVar39;
        unaff_RBP[0x123] = fVar50;
        pcVar28 = *(code **)(lVar22 + 0x58);
        puVar21 = (int32_t *)(**(code **)(lVar22 + 0x10))(plVar30,unaff_RBP + 0x41,(int)cVar13);
        (*pcVar28)(plVar30,*puVar21,unaff_RBP + 0x58);
        cVar13 = cVar13 + '\x01';
      } while (cVar13 < *(char *)(lVar25 + 0x148));
      unaff_R14 = *(longlong *)(unaff_RBP + -0x10);
    }
  }
  if (cStackX_20 == '\0') {
    if (*(char *)(unaff_RSI + 0x218) == '\0') {
      *(int8_t *)(unaff_RSI + 0x218) = 1;
      cVar13 = '\0';
      lVar25 = *(longlong *)(unaff_R14 + 0x208);
      if ('\0' < *(char *)(lVar25 + 0x148)) {
        do {
          lVar22 = (longlong)cVar13;
          lVar31 = lVar22 * 0x30;
          puVar24 = (uint *)((longlong)*(char *)(lVar31 + *(longlong *)(unaff_RSI + 0x1e8)) * 0x100
                            + *(longlong *)(lVar29 + 0x18));
          do {
            LOCK();
            uVar14 = *puVar24;
            *puVar24 = *puVar24 | 1;
            UNLOCK();
          } while ((uVar14 & 1) != 0);
          fVar48 = (float)puVar24[1];
          fVar52 = (float)puVar24[2];
          fVar49 = (float)puVar24[3];
          fVar53 = (float)puVar24[4];
          fVar47 = (float)puVar24[5];
          fVar37 = (float)puVar24[6];
          fVar38 = (float)puVar24[7];
          fVar43 = (float)puVar24[8];
          unaff_RBP[0x200] = fVar48;
          unaff_RBP[0x201] = fVar52;
          unaff_RBP[0x202] = fVar49;
          unaff_RBP[0x203] = fVar53;
          unaff_RBP[0x204] = fVar47;
          unaff_RBP[0x205] = fVar37;
          unaff_RBP[0x206] = fVar38;
          unaff_RBP[0x207] = fVar43;
          *puVar24 = 0;
          lVar27 = *(longlong *)(unaff_RSI + 0x1e8);
          unaff_RBP[0x188] = fVar48;
          unaff_RBP[0x189] = fVar52;
          unaff_RBP[0x18a] = fVar49;
          unaff_RBP[0x18b] = fVar53;
          unaff_RBP[0x18c] = fVar47;
          unaff_RBP[0x18d] = fVar37;
          unaff_RBP[0x18e] = fVar38;
          unaff_RBP[399] = fVar43;
          unaff_RBP[0x100] = fVar48;
          unaff_RBP[0x101] = fVar52;
          unaff_RBP[0x102] = fVar49;
          unaff_RBP[0x103] = fVar53;
          unaff_RBP[0x104] = fVar47;
          unaff_RBP[0x105] = fVar37;
          unaff_RBP[0x106] = fVar38;
          unaff_RBP[0x107] = fVar43;
          pfVar19 = (float *)FUN_1801c0fb0(unaff_RBP + 0x100,unaff_RBP + 0x15c,
                                           lVar27 + 0x20 + lVar31);
          pfVar20 = (float *)(lVar31 + 0x10 + lVar27);
          fVar41 = *pfVar20;
          fVar46 = pfVar20[1];
          fVar39 = pfVar20[2];
          fVar50 = pfVar20[3];
          fVar43 = *pfVar19;
          unaff_RBP[0x1f] = 3.4028235e+38;
          puVar24 = (uint *)(lVar22 * 0x100 + *(longlong *)(unaff_R14 + 0x18));
          fVar56 = unaff_RBP[0x1f];
          fVar36 = pfVar19[1];
          fVar40 = pfVar19[2];
          fVar35 = fVar50 * fVar49 * 1.0 + fVar46 * fVar48 * 1.0 +
                   (fVar41 * fVar52 - fVar39 * fVar53);
          fVar45 = fVar46 * fVar53 * 1.0 + fVar39 * fVar48 * 1.0 +
                   (fVar41 * fVar49 - fVar50 * fVar52);
          fVar42 = fVar39 * fVar52 * 1.0 + fVar50 * fVar48 * 1.0 +
                   (fVar41 * fVar53 - fVar46 * fVar49);
          fVar48 = fVar50 * fVar53 * -1.0 + fVar39 * fVar49 * -1.0 +
                   (fVar41 * fVar48 - fVar46 * fVar52);
          unaff_RBP[0x1c] = fVar47 + fVar43;
          unaff_RBP[0x1d] = fVar37 + fVar36;
          unaff_RBP[0x1e] = fVar38 + fVar40;
          unaff_RBP[0x1f] = fVar56;
          unaff_RBP[200] = fVar47 + fVar43;
          unaff_RBP[0xc9] = fVar37 + fVar36;
          unaff_RBP[0xca] = fVar38 + fVar40;
          unaff_RBP[0xcb] = fVar56;
          unaff_RBP[400] = fVar48;
          unaff_RBP[0x191] = fVar35;
          unaff_RBP[0x192] = fVar45;
          unaff_RBP[0x193] = fVar42;
          unaff_RBP[0xc4] = fVar48;
          unaff_RBP[0xc5] = fVar35;
          unaff_RBP[0xc6] = fVar45;
          unaff_RBP[199] = fVar42;
          do {
            LOCK();
            uVar14 = *puVar24;
            *puVar24 = *puVar24 | 1;
            UNLOCK();
          } while ((uVar14 & 1) != 0);
          fVar43 = unaff_RBP[0xc5];
          fVar36 = unaff_RBP[0xc6];
          fVar40 = unaff_RBP[199];
          fVar48 = unaff_RBP[200];
          fVar52 = unaff_RBP[0xc9];
          fVar49 = unaff_RBP[0xca];
          fVar53 = unaff_RBP[0xcb];
          puVar24[1] = (uint)unaff_RBP[0xc4];
          puVar24[2] = (uint)fVar43;
          puVar24[3] = (uint)fVar36;
          puVar24[4] = (uint)fVar40;
          puVar24[5] = (uint)fVar48;
          puVar24[6] = (uint)fVar52;
          puVar24[7] = (uint)fVar49;
          puVar24[8] = (uint)fVar53;
          *puVar24 = 0;
          FUN_1802feba0(unaff_R14,
                        (longlong)(ulonglong)(uint)((int)puVar24 - *(int *)(unaff_R14 + 0x18)) >> 8)
          ;
          cVar13 = cVar13 + '\x01';
        } while (cVar13 < *(char *)(lVar25 + 0x148));
      }
    }
  }
  else {
    *(int8_t *)(unaff_RSI + 0x218) = 0;
    if (*(longlong *)(unaff_RSI + 0x100) != 0) {
      uVar16 = *(uint64_t *)(unaff_R12 + 0x78);
      uVar10 = *(uint64_t *)(unaff_R12 + 0x80);
      uVar11 = *(uint64_t *)(unaff_R12 + 0x88);
      *(uint64_t *)(unaff_RBP + 0x98) = *(uint64_t *)(unaff_R12 + 0x70);
      *(uint64_t *)(unaff_RBP + 0x9a) = uVar16;
      fVar43 = *(float *)(unaff_R12 + 0x90);
      fVar36 = *(float *)(unaff_R12 + 0x94);
      fVar40 = *(float *)(unaff_R12 + 0x98);
      fVar48 = *(float *)(unaff_R12 + 0x9c);
      *(uint64_t *)(unaff_RBP + 0x9c) = uVar10;
      *(uint64_t *)(unaff_RBP + 0x9e) = uVar11;
      fVar52 = *(float *)(unaff_R12 + 0xa0);
      fVar49 = *(float *)(unaff_R12 + 0xa4);
      fVar53 = *(float *)(unaff_R12 + 0xa8);
      fVar47 = *(float *)(unaff_R12 + 0xac);
      unaff_RBP[0xa0] = fVar43;
      unaff_RBP[0xa1] = fVar36;
      unaff_RBP[0xa2] = fVar40;
      unaff_RBP[0xa3] = fVar48;
      unaff_RBP[0xa4] = fVar52;
      unaff_RBP[0xa5] = fVar49;
      unaff_RBP[0xa6] = fVar53;
      unaff_RBP[0xa7] = fVar47;
      FUN_180084ae0(unaff_RBP + 0x98);
      iVar15 = *(int *)(lVar29 + 0x44);
      lVar25 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
      iVar9 = (int)((*(longlong *)(*(longlong *)(unaff_RSI + 0x100) + 0x20) -
                    *(longlong *)(*(longlong *)(unaff_RSI + 0x100) + 0x18)) / 0x128);
      if (0 < iVar9) {
        fVar43 = unaff_RBP[0x9c];
        fVar36 = unaff_RBP[0x9d];
        fVar40 = unaff_RBP[0x9e];
        fVar48 = unaff_RBP[0x9f];
        lVar31 = 0;
        unaff_RBP[7] = 3.4028235e+38;
        fVar52 = unaff_RBP[0x98];
        fVar49 = unaff_RBP[0x99];
        fVar53 = unaff_RBP[0x9a];
        fVar47 = unaff_RBP[0x9b];
        unaff_RBP[0xb] = 3.4028235e+38;
        lVar22 = 0;
        unaff_RBP[0xf] = 3.4028235e+38;
        unaff_RBP[0x20] = fVar43;
        unaff_RBP[0x21] = fVar36;
        unaff_RBP[0x22] = fVar40;
        unaff_RBP[0x23] = fVar48;
        unaff_RBP[-0x1c] = fVar52;
        unaff_RBP[-0x1b] = fVar49;
        unaff_RBP[-0x1a] = fVar53;
        unaff_RBP[-0x19] = fVar47;
        *(uint64_t *)(unaff_RBP + 0xb4) = *(uint64_t *)(unaff_RBP + 0xa0);
        *(uint64_t *)(unaff_RBP + 0xb6) = *(uint64_t *)(unaff_RBP + 0xa2);
        *(uint64_t *)(unaff_RBP + 0xa8) = *(uint64_t *)(unaff_RBP + 0xa4);
        *(uint64_t *)(unaff_RBP + 0xaa) = *(uint64_t *)(unaff_RBP + 0xa6);
        do {
          fVar51 = 0.0;
          lVar27 = *(longlong *)(*(longlong *)(unaff_RSI + 0x100) + 0x18);
          fVar37 = *(float *)(lVar22 + 0xb4 + lVar27);
          pfVar20 = (float *)(lVar22 + 0xf4 + lVar27);
          fVar38 = *(float *)(lVar22 + 0xb8 + lVar27);
          pfVar19 = (float *)(lVar22 + 0xd4 + lVar27);
          pfVar32 = (float *)(lVar22 + 0xe4 + lVar27);
          fVar41 = *(float *)(lVar22 + 0xbc + lVar27);
          pfVar1 = (float *)(lVar22 + 0xc4 + lVar27);
          fVar46 = fVar37 + *(float *)(lVar22 + 0xb0 + lVar27);
          fVar39 = *pfVar1 * fVar37 + *pfVar19 * fVar38 + *pfVar32 * fVar41 + *pfVar20;
          fVar56 = pfVar1[1] * fVar37 + pfVar19[1] * fVar38 + pfVar32[1] * fVar41 + pfVar20[1];
          fVar45 = pfVar1[2] * fVar37 + pfVar19[2] * fVar38 + pfVar32[2] * fVar41 + pfVar20[2];
          pfVar1 = (float *)(lVar22 + 0xc4 + lVar27);
          fVar50 = *pfVar1 * fVar46 + *pfVar19 * fVar38 + *pfVar32 * fVar41 + *pfVar20;
          fVar35 = pfVar1[1] * fVar46 + pfVar19[1] * fVar38 + pfVar32[1] * fVar41 + pfVar20[1];
          fVar42 = pfVar1[2] * fVar46 + pfVar19[2] * fVar38 + pfVar32[2] * fVar41 + pfVar20[2];
          fVar38 = fVar51;
          fVar41 = fVar51;
          fVar37 = fVar51;
          fVar46 = fVar51;
          if (*(int *)(lVar22 + lVar27) != -1) {
            fVar37 = *(float *)(lVar22 + 8 + lVar27);
            uVar23 = iVar15 + *(int *)(lVar22 + lVar27);
            uVar14 = uVar23 >> 0xd;
            pfVar20 = (float *)(*(longlong *)(lVar25 + 8 + (ulonglong)uVar14 * 8) +
                               (ulonglong)(uVar23 + uVar14 * -0x2000) * 0x40);
            fVar54 = pfVar20[7];
            fVar55 = pfVar20[3];
            fVar57 = pfVar20[0xb];
            fVar58 = pfVar20[0xf];
            fVar46 = pfVar20[4] * fVar56 + *pfVar20 * fVar39 + pfVar20[8] * fVar45 + pfVar20[0xc];
            fVar41 = pfVar20[5] * fVar56 + pfVar20[1] * fVar39 + pfVar20[9] * fVar45 + pfVar20[0xd];
            fVar38 = pfVar20[6] * fVar56 + pfVar20[2] * fVar39 + pfVar20[10] * fVar45 + pfVar20[0xe]
            ;
            unaff_RBP[0x124] = fVar46;
            unaff_RBP[0x125] = fVar41;
            unaff_RBP[0x126] = fVar38;
            unaff_RBP[0x127] = fVar54 * fVar56 + fVar55 * fVar39 + fVar57 * fVar45 + fVar58;
            fVar38 = fVar38 * fVar37;
            fVar46 = fVar46 * fVar37;
            fVar41 = fVar41 * fVar37;
          }
          iVar2 = *(int *)(lVar22 + 4 + lVar27);
          if (iVar2 != -1) {
            uVar23 = iVar15 + iVar2;
            fVar37 = 1.0 - fVar37;
            uVar14 = uVar23 >> 0xd;
            pfVar20 = (float *)(*(longlong *)(lVar25 + 8 + (ulonglong)uVar14 * 8) +
                               (ulonglong)(uVar23 + uVar14 * -0x2000) * 0x40);
            fVar54 = pfVar20[7];
            fVar55 = pfVar20[3];
            fVar57 = pfVar20[0xb];
            fVar58 = pfVar20[0xf];
            fVar59 = pfVar20[4] * fVar56 + *pfVar20 * fVar39 + pfVar20[8] * fVar45 + pfVar20[0xc];
            fVar60 = pfVar20[5] * fVar56 + pfVar20[1] * fVar39 + pfVar20[9] * fVar45 + pfVar20[0xd];
            fVar61 = pfVar20[6] * fVar56 + pfVar20[2] * fVar39 + pfVar20[10] * fVar45 + pfVar20[0xe]
            ;
            unaff_RBP[300] = fVar59;
            unaff_RBP[0x12d] = fVar60;
            unaff_RBP[0x12e] = fVar61;
            unaff_RBP[0x12f] = fVar54 * fVar56 + fVar55 * fVar39 + fVar57 * fVar45 + fVar58;
            fVar38 = fVar38 + fVar61 * fVar37;
            fVar46 = fVar46 + fVar59 * fVar37;
            fVar41 = fVar41 + fVar60 * fVar37;
          }
          iVar2 = *(int *)(lVar22 + 0x58 + lVar27);
          fVar39 = fVar51;
          fVar56 = fVar51;
          fVar37 = fVar51;
          if (iVar2 != -1) {
            fVar37 = *(float *)(lVar22 + 0x60 + lVar27);
            uVar23 = iVar15 + iVar2;
            uVar14 = uVar23 >> 0xd;
            pfVar20 = (float *)(*(longlong *)(lVar25 + 8 + (ulonglong)uVar14 * 8) +
                               (ulonglong)(uVar23 + uVar14 * -0x2000) * 0x40);
            fVar45 = pfVar20[7];
            fVar54 = pfVar20[3];
            fVar55 = pfVar20[0xb];
            fVar57 = pfVar20[0xf];
            fVar56 = pfVar20[4] * fVar35 + *pfVar20 * fVar50 + pfVar20[8] * fVar42 + pfVar20[0xc];
            fVar39 = pfVar20[5] * fVar35 + pfVar20[1] * fVar50 + pfVar20[9] * fVar42 + pfVar20[0xd];
            fVar51 = pfVar20[6] * fVar35 + pfVar20[2] * fVar50 + pfVar20[10] * fVar42 + pfVar20[0xe]
            ;
            unaff_RBP[0x130] = fVar56;
            unaff_RBP[0x131] = fVar39;
            unaff_RBP[0x132] = fVar51;
            unaff_RBP[0x133] = fVar45 * fVar35 + fVar54 * fVar50 + fVar55 * fVar42 + fVar57;
            fVar51 = fVar51 * fVar37;
            fVar56 = fVar56 * fVar37;
            fVar39 = fVar39 * fVar37;
          }
          iVar2 = *(int *)(lVar22 + 0x5c + lVar27);
          if (iVar2 != -1) {
            uVar23 = iVar2 + iVar15;
            fVar37 = 1.0 - fVar37;
            uVar14 = uVar23 >> 0xd;
            pfVar20 = (float *)(*(longlong *)(lVar25 + 8 + (ulonglong)uVar14 * 8) +
                               (ulonglong)(uVar23 + uVar14 * -0x2000) * 0x40);
            fVar45 = pfVar20[7];
            fVar54 = pfVar20[3];
            fVar55 = pfVar20[0xb];
            fVar57 = pfVar20[0xf];
            fVar58 = pfVar20[4] * fVar35 + *pfVar20 * fVar50 + pfVar20[8] * fVar42 + pfVar20[0xc];
            fVar59 = pfVar20[5] * fVar35 + pfVar20[1] * fVar50 + pfVar20[9] * fVar42 + pfVar20[0xd];
            fVar60 = pfVar20[6] * fVar35 + pfVar20[2] * fVar50 + pfVar20[10] * fVar42 + pfVar20[0xe]
            ;
            unaff_RBP[0x134] = fVar58;
            unaff_RBP[0x135] = fVar59;
            unaff_RBP[0x136] = fVar60;
            unaff_RBP[0x137] = fVar45 * fVar35 + fVar54 * fVar50 + fVar55 * fVar42 + fVar57;
            fVar56 = fVar56 + fVar37 * fVar58;
            fVar51 = fVar51 + fVar37 * fVar60;
            fVar39 = fVar39 + fVar37 * fVar59;
          }
          fVar37 = unaff_RBP[7];
          fVar42 = fVar46 * fVar52 + fVar41 * fVar43 + fVar38 * unaff_RBP[0xb4] + unaff_RBP[0xa8];
          fVar54 = fVar46 * fVar49 + fVar41 * fVar36 + fVar38 * unaff_RBP[0xb5] + unaff_RBP[0xa9];
          fVar55 = fVar46 * fVar53 + fVar41 * fVar40 + fVar38 * unaff_RBP[0xb6] + unaff_RBP[0xaa];
          fVar50 = fVar56 * unaff_RBP[-0x1c] + fVar39 * fVar43 + fVar51 * unaff_RBP[0xb4] +
                   unaff_RBP[0xa8];
          fVar35 = fVar56 * unaff_RBP[-0x1b] + fVar39 * fVar36 + fVar51 * unaff_RBP[0xb5] +
                   unaff_RBP[0xa9];
          fVar45 = fVar56 * unaff_RBP[-0x1a] + fVar39 * fVar40 + fVar51 * unaff_RBP[0xb6] +
                   unaff_RBP[0xaa];
          unaff_RBP[0x138] = fVar42;
          unaff_RBP[0x139] = fVar54;
          unaff_RBP[0x13a] = fVar55;
          unaff_RBP[0x13b] =
               fVar46 * fVar47 + fVar41 * fVar48 + fVar38 * unaff_RBP[0xb7] + unaff_RBP[0xab];
          fVar49 = fVar50 - fVar42;
          fVar52 = fVar35 - fVar54;
          fVar40 = fVar45 - fVar55;
          unaff_RBP[4] = fVar49;
          unaff_RBP[5] = fVar52;
          unaff_RBP[6] = fVar40;
          unaff_RBP[7] = fVar37;
          unaff_RBP[0x13c] = fVar50;
          unaff_RBP[0x13d] = fVar35;
          unaff_RBP[0x13e] = fVar45;
          unaff_RBP[0x13f] =
               fVar56 * unaff_RBP[-0x19] + fVar39 * fVar48 + fVar51 * unaff_RBP[0xb7] +
               unaff_RBP[0xab];
          fVar43 = fVar52 * fVar52 + fVar49 * fVar49 + fVar40 * fVar40;
          auVar44 = rsqrtss(ZEXT416((uint)fVar43),ZEXT416((uint)fVar43));
          fVar36 = auVar44._0_4_;
          fVar38 = fVar36 * 0.5 * (3.0 - fVar43 * fVar36 * fVar36);
          fVar52 = fVar38 * fVar52;
          fVar40 = fVar38 * fVar40;
          fVar38 = fVar38 * fVar49;
          fVar43 = unaff_RBP[0xb];
          unaff_RBP[0x88] = fVar38;
          unaff_RBP[0x89] = fVar52;
          unaff_RBP[0x8a] = fVar40;
          unaff_RBP[0x8b] = fVar37;
          fVar53 = fVar40 * 0.0 - fVar52 * 1.0;
          fVar49 = fVar38 * 1.0 - fVar40 * 0.0;
          fVar47 = fVar52 * 0.0 - fVar38 * 0.0;
          unaff_RBP[8] = fVar53;
          unaff_RBP[9] = fVar49;
          unaff_RBP[10] = fVar47;
          unaff_RBP[0xb] = fVar43;
          fVar36 = fVar53 * fVar53 + fVar49 * fVar49 + fVar47 * fVar47;
          auVar44 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
          fVar48 = auVar44._0_4_;
          fVar48 = fVar48 * 0.5 * (3.0 - fVar36 * fVar48 * fVar48);
          fVar49 = fVar48 * fVar49;
          fVar53 = fVar48 * fVar53;
          fVar48 = fVar48 * fVar47;
          fVar47 = fVar48 * fVar52 - fVar49 * fVar40;
          fVar36 = unaff_RBP[0xf];
          fVar40 = fVar53 * fVar40 - fVar38 * fVar48;
          unaff_RBP[0x8c] = fVar53;
          unaff_RBP[0x8d] = fVar49;
          unaff_RBP[0x8e] = fVar48;
          unaff_RBP[0x8f] = fVar43;
          fVar52 = fVar38 * fVar49 - fVar53 * fVar52;
          plVar30 = *(longlong **)(unaff_RSI + 0xd8);
          unaff_RBP[0x8b] = 0.0;
          lVar27 = *plVar30;
          unaff_RBP[0xc] = fVar47;
          unaff_RBP[0xd] = fVar40;
          unaff_RBP[0xe] = fVar52;
          unaff_RBP[0xf] = fVar36;
          unaff_RBP[0x8f] = 0.0;
          pcVar28 = *(code **)(lVar27 + 0x20);
          fVar43 = fVar40 * fVar40 + fVar47 * fVar47 + fVar52 * fVar52;
          auVar44 = rsqrtss(ZEXT416((uint)fVar43),ZEXT416((uint)fVar43));
          fVar48 = auVar44._0_4_;
          fVar43 = fVar48 * 0.5 * (3.0 - fVar43 * fVar48 * fVar48);
          unaff_RBP[0x90] = fVar47 * fVar43;
          unaff_RBP[0x91] = fVar40 * fVar43;
          unaff_RBP[0x92] = fVar52 * fVar43;
          unaff_RBP[0x93] = fVar36;
          unaff_RBP[0x94] = (fVar42 + fVar50) * 0.5;
          unaff_RBP[0x95] = (fVar54 + fVar35) * 0.5;
          unaff_RBP[0x96] = (fVar55 + fVar45) * 0.5;
          unaff_RBP[0x97] = 3.4028235e+38;
          unaff_RBP[0x93] = 0.0;
          unaff_RBP[0x97] = 1.0;
          FUN_18063b470(unaff_RBP + 0xb8,unaff_RBP + 0x88);
          lVar27 = *(longlong *)(unaff_RSI + 0xe0);
          unaff_RBP[0xf0] = unaff_RBP[0xb8];
          unaff_RBP[0xf1] = unaff_RBP[0xb9];
          unaff_RBP[0xf2] = unaff_RBP[0xba];
          unaff_RBP[0xf3] = unaff_RBP[0xbb];
          unaff_RBP[0xf4] = unaff_RBP[0x94];
          unaff_RBP[0xf5] = unaff_RBP[0x95];
          unaff_RBP[0xf6] = unaff_RBP[0x96];
          unaff_RBP[0xf7] = unaff_RBP[0x97];
          (*pcVar28)(plVar30,*(int32_t *)(lVar27 + lVar31 * 4),unaff_RBP + 0xf0);
          lVar31 = lVar31 + 1;
          fVar43 = unaff_RBP[0x20];
          fVar36 = unaff_RBP[0x21];
          fVar40 = unaff_RBP[0x22];
          fVar48 = unaff_RBP[0x23];
          lVar22 = lVar22 + 0x128;
          fVar52 = unaff_RBP[-0x1c];
          fVar49 = unaff_RBP[-0x1b];
          fVar53 = unaff_RBP[-0x1a];
          fVar47 = unaff_RBP[-0x19];
        } while (lVar31 < iVar9);
        unaff_R14 = *(longlong *)(unaff_RBP + -0x10);
      }
    }
    puVar24 = (uint *)((longlong)*(char *)(*(longlong *)(unaff_RBP + 0x3e) + 0xde) * 0x100 +
                      *(longlong *)(lVar29 + 0x18));
    do {
      LOCK();
      uVar14 = *puVar24;
      *puVar24 = *puVar24 | 1;
      UNLOCK();
    } while ((uVar14 & 1) != 0);
    fVar43 = (float)puVar24[1];
    fVar36 = (float)puVar24[2];
    fVar40 = (float)puVar24[3];
    fVar48 = (float)puVar24[4];
    fVar52 = (float)puVar24[5];
    fVar49 = (float)puVar24[6];
    fVar53 = (float)puVar24[7];
    fVar47 = (float)puVar24[8];
    unaff_RBP[0x210] = fVar43;
    unaff_RBP[0x211] = fVar36;
    unaff_RBP[0x212] = fVar40;
    unaff_RBP[0x213] = fVar48;
    unaff_RBP[0x214] = fVar52;
    unaff_RBP[0x215] = fVar49;
    unaff_RBP[0x216] = fVar53;
    unaff_RBP[0x217] = fVar47;
    unaff_RBP[0x178] = fVar43;
    unaff_RBP[0x179] = fVar36;
    unaff_RBP[0x17a] = fVar40;
    unaff_RBP[0x17b] = fVar48;
    *puVar24 = 0;
    unaff_RBP[0x17c] = fVar52;
    unaff_RBP[0x17d] = fVar49;
    unaff_RBP[0x17e] = fVar53;
    unaff_RBP[0x17f] = fVar47;
    unaff_RBP[0x68] = fVar43;
    unaff_RBP[0x69] = fVar36;
    unaff_RBP[0x6a] = fVar40;
    unaff_RBP[0x6b] = fVar48;
    unaff_RBP[0x6c] = fVar52;
    unaff_RBP[0x6d] = fVar49;
    unaff_RBP[0x6e] = fVar53;
    unaff_RBP[0x6f] = fVar47;
    FUN_180300bf0(unaff_RBP + 0x68,unaff_RBP + 0x180,unaff_RSI + 0x1b0);
    FUN_180300bf0(unaff_RBP + 0x68,unaff_RBP + 0x78,unaff_RSI + 0x170);
    pfVar20 = (float *)FUN_180300bf0(unaff_RBP + 0x44,unaff_RBP + 0x1cc,unaff_RBP + 0x78);
    fVar43 = pfVar20[1];
    fVar36 = pfVar20[2];
    fVar40 = pfVar20[3];
    unaff_RBP[0x78] = *pfVar20;
    unaff_RBP[0x79] = fVar43;
    unaff_RBP[0x7a] = fVar36;
    unaff_RBP[0x7b] = fVar40;
    fVar43 = pfVar20[5];
    fVar36 = pfVar20[6];
    fVar40 = pfVar20[7];
    unaff_RBP[0x7c] = pfVar20[4];
    unaff_RBP[0x7d] = fVar43;
    unaff_RBP[0x7e] = fVar36;
    unaff_RBP[0x7f] = fVar40;
    FUN_180300bf0(unaff_RBP + 0x68,unaff_RBP + 0x80,unaff_RSI + 400);
    pfVar20 = (float *)FUN_180300bf0(unaff_RBP + 0x44,unaff_RBP + 0x1d4,unaff_RBP + 0x80);
    uVar33 = (ulonglong)*(int *)(unaff_RSI + 0x58);
    fVar43 = pfVar20[1];
    fVar36 = pfVar20[2];
    fVar40 = pfVar20[3];
    lVar29 = *(longlong *)(unaff_RSI + 0x108);
    unaff_RBP[0x80] = *pfVar20;
    unaff_RBP[0x81] = fVar43;
    unaff_RBP[0x82] = fVar36;
    unaff_RBP[0x83] = fVar40;
    fVar43 = pfVar20[5];
    fVar36 = pfVar20[6];
    fVar40 = pfVar20[7];
    unaff_RBP[0x84] = pfVar20[4];
    unaff_RBP[0x85] = fVar43;
    unaff_RBP[0x86] = fVar36;
    unaff_RBP[0x87] = fVar40;
    FUN_180300bf0(unaff_RBP + 0x180,unaff_RBP + 0x70,uVar33 * 0x40 + lVar29);
    pfVar20 = (float *)FUN_180300bf0(unaff_RBP + 0x44,unaff_RBP + 0x1dc,unaff_RBP + 0x70);
    plVar30 = *(longlong **)(unaff_RSI + 0xd8);
    fVar43 = pfVar20[1];
    fVar36 = pfVar20[2];
    fVar40 = pfVar20[3];
    unaff_RBP[0x70] = *pfVar20;
    unaff_RBP[0x71] = fVar43;
    unaff_RBP[0x72] = fVar36;
    unaff_RBP[0x73] = fVar40;
    fVar43 = pfVar20[5];
    fVar36 = pfVar20[6];
    fVar40 = pfVar20[7];
    unaff_RBP[0x74] = pfVar20[4];
    unaff_RBP[0x75] = fVar43;
    unaff_RBP[0x76] = fVar36;
    unaff_RBP[0x77] = fVar40;
    pcVar28 = *(code **)(*plVar30 + 0x20);
    puVar21 = (int32_t *)
              (**(code **)(*plVar30 + 0x10))(plVar30,unaff_RBP + 0x38,uVar33 & 0xffffffff);
    (*pcVar28)(plVar30,*puVar21,unaff_RBP + 0x70);
    plVar30 = *(longlong **)(unaff_RSI + 0xd8);
    pcVar28 = *(code **)(*plVar30 + 0x20);
    puVar21 = (int32_t *)
              (**(code **)(*plVar30 + 0x10))
                        (plVar30,unaff_RBP + 0x39,*(int32_t *)(unaff_RSI + 0x5c));
    (*pcVar28)(plVar30,*puVar21,unaff_RBP + 0x78);
    plVar30 = *(longlong **)(unaff_RSI + 0xd8);
    pcVar28 = *(code **)(*plVar30 + 0x20);
    puVar21 = (int32_t *)
              (**(code **)(*plVar30 + 0x10))
                        (plVar30,unaff_RBP + 0x3a,*(int32_t *)(unaff_RSI + 0x60));
    (*pcVar28)(plVar30,*puVar21,unaff_RBP + 0x80);
    fVar43 = unaff_RBP[-0x20];
    fVar36 = unaff_RBP[-0x1f];
    fVar40 = unaff_RBP[-0x1e];
    plVar30 = *(longlong **)(unaff_RSI + 0xd8);
    uVar3 = *(int32_t *)(unaff_RSI + 0x68);
    in_stack_00000070 = 0x3f800000;
    in_stack_00000078 = 0;
    fVar48 = unaff_RBP[-0x13];
    unaff_RBP[-0x18] = 1.0;
    unaff_RBP[-0x17] = 0.0;
    unaff_RBP[-0x16] = 0.0;
    unaff_RBP[-0x15] = 0.0;
    fVar52 = unaff_RBP[-0x12];
    fVar49 = fVar43 * unaff_RBP[0x28] + fVar36 * unaff_RBP[0x2c] + fVar40 * unaff_RBP[0x30] +
             unaff_RBP[0x34];
    fVar53 = fVar43 * unaff_RBP[0x29] + fVar36 * unaff_RBP[0x2d] + fVar40 * unaff_RBP[0x31] +
             unaff_RBP[0x35];
    fVar47 = fVar43 * unaff_RBP[0x2a] + fVar36 * unaff_RBP[0x2e] + fVar40 * unaff_RBP[0x32] +
             unaff_RBP[0x36];
    fVar43 = fVar43 * unaff_RBP[0x2b] + fVar36 * unaff_RBP[0x2f] + fVar40 * unaff_RBP[0x33] +
             unaff_RBP[0x37];
    unaff_RBP[-0x20] = fVar49;
    unaff_RBP[-0x1f] = fVar53;
    unaff_RBP[-0x1e] = fVar47;
    unaff_RBP[-0x1d] = fVar43;
    unaff_RBP[0x140] = fVar49;
    unaff_RBP[0x141] = fVar53;
    unaff_RBP[0x142] = fVar47;
    unaff_RBP[0x143] = fVar43;
    fVar43 = unaff_RBP[-0x14];
    fVar36 = fVar43 * unaff_RBP[0x28] + fVar48 * unaff_RBP[0x2c] + fVar52 * unaff_RBP[0x30] +
             unaff_RBP[0x34];
    fVar40 = fVar43 * unaff_RBP[0x29] + fVar48 * unaff_RBP[0x2d] + fVar52 * unaff_RBP[0x31] +
             unaff_RBP[0x35];
    fVar49 = fVar43 * unaff_RBP[0x2a] + fVar48 * unaff_RBP[0x2e] + fVar52 * unaff_RBP[0x32] +
             unaff_RBP[0x36];
    fVar43 = fVar43 * unaff_RBP[0x2b] + fVar48 * unaff_RBP[0x2f] + fVar52 * unaff_RBP[0x33] +
             unaff_RBP[0x37];
    unaff_RBP[-0x14] = fVar36;
    unaff_RBP[-0x13] = fVar40;
    unaff_RBP[-0x12] = fVar49;
    unaff_RBP[-0x11] = fVar43;
    lVar29 = *plVar30;
    unaff_RBP[0x144] = fVar36;
    unaff_RBP[0x145] = fVar40;
    unaff_RBP[0x146] = fVar49;
    unaff_RBP[0x147] = fVar43;
    pcVar28 = *(code **)(lVar29 + 0x20);
    puVar21 = (int32_t *)(**(code **)(lVar29 + 0x10))(plVar30,unaff_RBP + 0x3b,uVar3);
    (*pcVar28)(plVar30,*puVar21,&stack0x00000070);
    plVar30 = *(longlong **)(unaff_RSI + 0xd8);
    pcVar28 = *(code **)(*plVar30 + 0x20);
    puVar21 = (int32_t *)
              (**(code **)(*plVar30 + 0x10))
                        (plVar30,unaff_RBP + 0x3c,*(int32_t *)(unaff_RSI + 100));
    (*pcVar28)(plVar30,*puVar21,unaff_RBP + -0x18);
    (**(code **)(**(longlong **)(unaff_RSI + 0xd8) + 0x60))
              (*(longlong **)(unaff_RSI + 0xd8),*(int32_t *)(unaff_RSI + 0x1e0));
    lVar29 = _DAT_180c86870;
    cVar13 = '\0';
    *(int32_t *)(unaff_RSI + 0x1e0) = 0;
    *(int32_t *)(unaff_RSI + 0x1e4) = *(int32_t *)(lVar29 + 0x224);
    if ('\0' < *(char *)(unaff_R14 + 0x20)) {
      fVar43 = unaff_RBP[0x10];
      fVar36 = unaff_RBP[0x11];
      fVar40 = unaff_RBP[0x12];
      fVar48 = unaff_RBP[0x13];
      unaff_RBP[0x17] = 3.4028235e+38;
      unaff_RBP[0x1b] = 3.4028235e+38;
      do {
        plVar30 = *(longlong **)(unaff_RSI + 0xd8);
        pcVar28 = *(code **)(*plVar30 + 0x28);
        puVar21 = (int32_t *)(**(code **)(*plVar30 + 0x10))(plVar30,unaff_RBP + 0x40,(int)cVar13)
        ;
        (*pcVar28)(plVar30,*puVar21,unaff_RBP + 0x60);
        unaff_RBP[0x14] = unaff_RBP[100] - unaff_RBP[0x34];
        unaff_RBP[0x15] = unaff_RBP[0x65] - unaff_RBP[0x35];
        unaff_RBP[0x16] = unaff_RBP[0x66] - unaff_RBP[0x36];
        FUN_180285b40(unaff_RBP + 0x44,unaff_RBP + 0xac,unaff_RBP + 0x14);
        fVar52 = unaff_RBP[0x60];
        fVar49 = unaff_RBP[0x61];
        fVar53 = unaff_RBP[0x62];
        fVar47 = unaff_RBP[99];
        lVar29 = *(longlong *)(unaff_RSI + 0x108);
        fVar37 = unaff_RBP[0xac];
        fVar38 = unaff_RBP[0xad];
        fVar41 = unaff_RBP[0xae];
        lVar22 = (longlong)cVar13;
        lVar25 = lVar22 * 0x40;
        unaff_RBP[0xfc] = fVar37;
        unaff_RBP[0xfd] = fVar38;
        unaff_RBP[0xfe] = fVar41;
        unaff_RBP[0xff] = unaff_RBP[0xaf];
        fVar39 = fVar47 * fVar40 * -1.0 + fVar52 * fVar36 * -1.0 + fVar53 * fVar48 + fVar49 * fVar43
        ;
        fVar50 = fVar49 * fVar48 * -1.0 + fVar52 * fVar40 * -1.0 + fVar47 * fVar36 + fVar53 * fVar43
        ;
        fVar56 = fVar53 * fVar36 * -1.0 + fVar52 * fVar48 * -1.0 + fVar49 * fVar40 + fVar47 * fVar43
        ;
        fVar35 = fVar47 * fVar48 * 1.0 + fVar52 * fVar43 * 1.0 + fVar49 * fVar36 + fVar53 * fVar40;
        unaff_RBP[0x148] = fVar35;
        unaff_RBP[0x149] = fVar39;
        unaff_RBP[0x14a] = fVar50;
        unaff_RBP[0x14b] = fVar56;
        unaff_RBP[0xf8] = fVar35;
        unaff_RBP[0xf9] = fVar39;
        unaff_RBP[0xfa] = fVar50;
        unaff_RBP[0xfb] = fVar56;
        pfVar19 = (float *)FUN_1801c0fb0(unaff_RBP + 0xf8,unaff_RBP + 0x128,lVar29 + 0x30 + lVar25);
        pfVar20 = (float *)(lVar25 + 0x20 + lVar29);
        fVar52 = *pfVar20;
        fVar49 = pfVar20[1];
        fVar53 = pfVar20[2];
        fVar47 = pfVar20[3];
        fVar37 = fVar37 + *pfVar19;
        fVar38 = fVar38 + pfVar19[1];
        fVar41 = fVar41 + pfVar19[2];
        puVar24 = (uint *)(lVar22 * 0x100 + *(longlong *)(unaff_R14 + 0x18));
        fVar46 = unaff_RBP[0x1b];
        unaff_RBP[0x18] = fVar37;
        unaff_RBP[0x19] = fVar38;
        unaff_RBP[0x1a] = fVar41;
        unaff_RBP[0x1b] = fVar46;
        unaff_RBP[0xc0] = fVar37;
        unaff_RBP[0xc1] = fVar38;
        unaff_RBP[0xc2] = fVar41;
        unaff_RBP[0xc3] = fVar46;
        fVar37 = fVar50 * fVar47 * 1.0 + fVar35 * fVar49 * 1.0 + (fVar52 * fVar39 - fVar56 * fVar53)
        ;
        fVar38 = fVar56 * fVar49 * 1.0 + fVar35 * fVar53 * 1.0 + (fVar52 * fVar50 - fVar39 * fVar47)
        ;
        fVar41 = fVar39 * fVar53 * 1.0 + fVar35 * fVar47 * 1.0 + (fVar52 * fVar56 - fVar50 * fVar49)
        ;
        fVar52 = fVar56 * fVar47 * -1.0 + fVar50 * fVar53 * -1.0 +
                 (fVar52 * fVar35 - fVar39 * fVar49);
        unaff_RBP[0x150] = fVar52;
        unaff_RBP[0x151] = fVar37;
        unaff_RBP[0x152] = fVar38;
        unaff_RBP[0x153] = fVar41;
        unaff_RBP[0xbc] = fVar52;
        unaff_RBP[0xbd] = fVar37;
        unaff_RBP[0xbe] = fVar38;
        unaff_RBP[0xbf] = fVar41;
        do {
          LOCK();
          uVar14 = *puVar24;
          *puVar24 = *puVar24 | 1;
          UNLOCK();
        } while ((uVar14 & 1) != 0);
        fVar52 = unaff_RBP[0xbd];
        fVar49 = unaff_RBP[0xbe];
        fVar53 = unaff_RBP[0xbf];
        fVar47 = unaff_RBP[0xc0];
        fVar37 = unaff_RBP[0xc1];
        fVar38 = unaff_RBP[0xc2];
        fVar41 = unaff_RBP[0xc3];
        puVar24[1] = (uint)unaff_RBP[0xbc];
        puVar24[2] = (uint)fVar52;
        puVar24[3] = (uint)fVar49;
        puVar24[4] = (uint)fVar53;
        puVar24[5] = (uint)fVar47;
        puVar24[6] = (uint)fVar37;
        puVar24[7] = (uint)fVar38;
        puVar24[8] = (uint)fVar41;
        *puVar24 = 0;
        FUN_1802feba0(unaff_R14,
                      (longlong)(ulonglong)(uint)((int)puVar24 - *(int *)(unaff_R14 + 0x18)) >> 8);
        cVar13 = cVar13 + '\x01';
      } while (cVar13 < *(char *)(unaff_R14 + 0x20));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x230) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






