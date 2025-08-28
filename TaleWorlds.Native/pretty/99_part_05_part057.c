#include "TaleWorlds.Native.Split.h"

// 99_part_05_part057.c - 3 个函数

// 函数: void FUN_1802fcdd8(void)
void FUN_1802fcdd8(void)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
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
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float *pfVar26;
  longlong lVar27;
  uint *puVar28;
  int iVar29;
  uint *puVar30;
  uint *unaff_RBP;
  longlong unaff_RDI;
  char unaff_R14B;
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
  float fVar49;
  float fVar50;
  float fVar51;
  float unaff_XMM11_Da;
  float unaff_XMM11_Db;
  float unaff_XMM11_Dc;
  float unaff_XMM11_Dd;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  do {
    puVar30 = (uint *)((longlong)unaff_R14B * 0x100 + *(longlong *)(unaff_RDI + 0x18));
    cVar3 = (char)puVar30[0x28];
    fVar5 = (float)puVar30[0xc];
    fVar6 = (float)puVar30[0xd];
    fVar7 = (float)puVar30[0xe];
    fVar8 = (float)puVar30[0xf];
    iVar29 = (int)puVar30;
    if (*(undefined8 **)(puVar30 + 0x3c) == (undefined8 *)0x0) {
      lVar27 = (longlong)unaff_R14B * 0x1b0 +
               *(longlong *)(*(longlong *)(unaff_RDI + 0x208) + 0x140);
      uVar2 = *(uint *)(lVar27 + 0x90);
      uVar15 = *(uint *)(lVar27 + 0x94);
      uVar16 = *(uint *)(lVar27 + 0x98);
      uVar17 = *(uint *)(lVar27 + 0x9c);
      uVar18 = *(uint *)(lVar27 + 0x80);
      uVar19 = *(uint *)(lVar27 + 0x84);
      uVar20 = *(uint *)(lVar27 + 0x88);
      uVar21 = *(uint *)(lVar27 + 0x8c);
      puVar30[0xc] = uVar2;
      puVar30[0xd] = uVar15;
      puVar30[0xe] = uVar16;
      puVar30[0xf] = uVar17;
      puVar30[0x10] = uVar18;
      puVar30[0x11] = uVar19;
      puVar30[0x12] = uVar20;
      puVar30[0x13] = uVar21;
      if (cVar3 == -1) {
        *unaff_RBP = uVar2;
        unaff_RBP[1] = uVar15;
        unaff_RBP[2] = uVar16;
        unaff_RBP[3] = uVar17;
        unaff_RBP[4] = uVar18;
        unaff_RBP[5] = uVar19;
        unaff_RBP[6] = uVar20;
        unaff_RBP[7] = uVar21;
        do {
          LOCK();
          uVar2 = *puVar30;
          *puVar30 = *puVar30 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        uVar2 = *unaff_RBP;
        uVar15 = unaff_RBP[1];
        uVar16 = unaff_RBP[2];
        uVar17 = unaff_RBP[3];
        uVar18 = unaff_RBP[4];
        uVar19 = unaff_RBP[5];
        uVar20 = unaff_RBP[6];
        uVar21 = unaff_RBP[7];
        puVar30[1] = uVar2;
        puVar30[2] = uVar15;
        puVar30[3] = uVar16;
        puVar30[4] = uVar17;
        puVar30[5] = uVar18;
        puVar30[6] = uVar19;
        puVar30[7] = uVar20;
        puVar30[8] = uVar21;
        *puVar30 = 0;
        FUN_1802feba0(uVar2,(longlong)(ulonglong)(uint)(iVar29 - *(int *)(unaff_RDI + 0x18)) >> 8);
        uVar22 = *(undefined8 *)(puVar30 + 0x12);
        *(undefined8 *)(unaff_RDI + 0x1e8) = *(undefined8 *)(puVar30 + 0x10);
        *(undefined8 *)(unaff_RDI + 0x1f0) = uVar22;
      }
      else {
        puVar28 = (uint *)((longlong)cVar3 * 0x100 + *(longlong *)(unaff_RDI + 0x18));
        do {
          LOCK();
          uVar2 = *puVar28;
          *puVar28 = *puVar28 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        fVar37 = (float)puVar28[1];
        fVar45 = (float)puVar28[2];
        fVar50 = (float)puVar28[3];
        fVar1 = (float)puVar28[4];
        fVar46 = (float)puVar28[5];
        fVar9 = (float)puVar28[6];
        fVar31 = (float)puVar28[7];
        uVar2 = puVar28[8];
        unaff_RBP[0x6c] = (uint)fVar37;
        unaff_RBP[0x6d] = (uint)fVar45;
        unaff_RBP[0x6e] = (uint)fVar50;
        unaff_RBP[0x6f] = (uint)fVar1;
        unaff_RBP[0x70] = (uint)fVar46;
        unaff_RBP[0x71] = (uint)fVar9;
        unaff_RBP[0x72] = (uint)fVar31;
        unaff_RBP[0x73] = uVar2;
        *puVar28 = 0;
        unaff_RBP[0x18] = (uint)fVar37;
        unaff_RBP[0x19] = (uint)fVar45;
        unaff_RBP[0x1a] = (uint)fVar50;
        unaff_RBP[0x1b] = (uint)fVar1;
        unaff_RBP[0x1c] = (uint)fVar46;
        unaff_RBP[0x1d] = (uint)fVar9;
        unaff_RBP[0x1e] = (uint)fVar31;
        unaff_RBP[0x1f] = uVar2;
        pfVar26 = (float *)FUN_1801c0fb0(unaff_RBP + 0x18,unaff_RBP + 0x34,puVar30 + 0x10);
        fVar32 = (float)puVar30[0xc];
        fVar33 = (float)puVar30[0xd];
        fVar10 = (float)puVar30[0xe];
        fVar11 = (float)puVar30[0xf];
        fVar51 = pfVar26[1];
        fVar49 = pfVar26[2];
        fVar34 = fVar11 * fVar50 * 1.0 + fVar33 * fVar37 * 1.0 + (fVar32 * fVar45 - fVar10 * fVar1);
        fVar35 = fVar33 * fVar1 * 1.0 + fVar10 * fVar37 * 1.0 + (fVar32 * fVar50 - fVar11 * fVar45);
        fVar36 = fVar10 * fVar45 * 1.0 + fVar11 * fVar37 * 1.0 + (fVar32 * fVar1 - fVar33 * fVar50);
        fVar37 = fVar11 * fVar1 * -1.0 + fVar10 * fVar50 * -1.0 +
                 (fVar32 * fVar37 - fVar33 * fVar45);
        unaff_RBP[0xc] = (uint)(fVar46 + *pfVar26);
        unaff_RBP[0xd] = (uint)(fVar9 + fVar51);
        unaff_RBP[0xe] = (uint)(fVar31 + fVar49);
        unaff_RBP[0xf] = 0x7f7fffff;
        unaff_RBP[0x38] = (uint)fVar37;
        unaff_RBP[0x39] = (uint)fVar34;
        unaff_RBP[0x3a] = (uint)fVar35;
        unaff_RBP[0x3b] = (uint)fVar36;
        unaff_RBP[8] = (uint)fVar37;
        unaff_RBP[9] = (uint)fVar34;
        unaff_RBP[10] = (uint)fVar35;
        unaff_RBP[0xb] = (uint)fVar36;
        do {
          LOCK();
          uVar2 = *puVar30;
          *puVar30 = *puVar30 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        uVar2 = unaff_RBP[8];
        uVar15 = unaff_RBP[9];
        uVar16 = unaff_RBP[10];
        uVar17 = unaff_RBP[0xb];
        uVar18 = unaff_RBP[0xc];
        uVar19 = unaff_RBP[0xd];
        uVar20 = unaff_RBP[0xe];
        uVar21 = unaff_RBP[0xf];
        puVar30[1] = uVar2;
        puVar30[2] = uVar15;
        puVar30[3] = uVar16;
        puVar30[4] = uVar17;
        puVar30[5] = uVar18;
        puVar30[6] = uVar19;
        puVar30[7] = uVar20;
        puVar30[8] = uVar21;
        *puVar30 = 0;
        FUN_1802feba0(uVar2,(longlong)(ulonglong)(uint)(iVar29 - *(int *)(unaff_RDI + 0x18)) >> 8);
      }
    }
    else {
      plVar4 = (longlong *)**(undefined8 **)(puVar30 + 0x3c);
      (**(code **)(*plVar4 + 200))(plVar4,unaff_RBP + -0x20);
      lVar27 = *(longlong *)(puVar30 + 0x3c);
      fVar9 = (float)unaff_RBP[-0x20];
      fVar31 = (float)unaff_RBP[-0x1f];
      fVar32 = (float)unaff_RBP[-0x1e];
      fVar33 = (float)unaff_RBP[-0x1d];
      fVar10 = (float)unaff_RBP[-0x18];
      fVar11 = (float)unaff_RBP[-0x17];
      fVar34 = (float)unaff_RBP[-0x16];
      fVar35 = (float)unaff_RBP[-0x15];
      fVar36 = (float)unaff_RBP[-0x1c];
      fVar12 = (float)unaff_RBP[-0x1b];
      fVar13 = (float)unaff_RBP[-0x1a];
      fVar14 = (float)unaff_RBP[-0x19];
      unaff_RBP[-0x14] = (uint)((float)unaff_RBP[-0x14] * unaff_XMM13_Da);
      unaff_RBP[-0x13] = (uint)((float)unaff_RBP[-0x13] * unaff_XMM13_Da);
      unaff_RBP[-0x12] = (uint)((float)unaff_RBP[-0x12] * unaff_XMM13_Da);
      fVar51 = *(float *)(lVar27 + 0x4c);
      fVar49 = *(float *)(lVar27 + 0x48);
      fVar37 = *(float *)(lVar27 + 0x50);
      fVar45 = *(float *)(lVar27 + 0x5c);
      fVar50 = *(float *)(lVar27 + 0x6c);
      fVar1 = *(float *)(lVar27 + 0x7c);
      fVar46 = *(float *)(lVar27 + 0x58);
      fVar38 = fVar51 * fVar36 + fVar49 * fVar9 + fVar37 * fVar10;
      fVar39 = fVar51 * fVar12 + fVar49 * fVar31 + fVar37 * fVar11;
      fVar40 = fVar51 * fVar13 + fVar49 * fVar32 + fVar37 * fVar34;
      fVar41 = fVar51 * fVar14 + fVar49 * fVar33 + fVar37 * fVar35;
      fVar51 = *(float *)(lVar27 + 0x60);
      fVar49 = *(float *)(lVar27 + 0x68);
      unaff_RBP[0x44] = (uint)fVar38;
      unaff_RBP[0x45] = (uint)fVar39;
      unaff_RBP[0x46] = (uint)fVar40;
      unaff_RBP[0x47] = (uint)fVar41;
      fVar42 = fVar45 * fVar36 + fVar46 * fVar9 + fVar51 * fVar10;
      fVar43 = fVar45 * fVar12 + fVar46 * fVar31 + fVar51 * fVar11;
      fVar44 = fVar45 * fVar13 + fVar46 * fVar32 + fVar51 * fVar34;
      fVar45 = fVar45 * fVar14 + fVar46 * fVar33 + fVar51 * fVar35;
      fVar51 = *(float *)(lVar27 + 0x70);
      fVar37 = *(float *)(lVar27 + 0x78);
      fVar46 = fVar50 * fVar36 + fVar49 * fVar9 + fVar51 * fVar10;
      fVar47 = fVar50 * fVar12 + fVar49 * fVar31 + fVar51 * fVar11;
      fVar48 = fVar50 * fVar13 + fVar49 * fVar32 + fVar51 * fVar34;
      fVar49 = fVar50 * fVar14 + fVar49 * fVar33 + fVar51 * fVar35;
      fVar51 = *(float *)(lVar27 + 0x80);
      unaff_RBP[-0x20] = (uint)fVar38;
      unaff_RBP[-0x1f] = (uint)fVar39;
      unaff_RBP[-0x1e] = (uint)fVar40;
      unaff_RBP[-0x1d] = (uint)fVar41;
      unaff_RBP[-0x1c] = (uint)fVar42;
      unaff_RBP[-0x1b] = (uint)fVar43;
      unaff_RBP[-0x1a] = (uint)fVar44;
      unaff_RBP[-0x19] = (uint)fVar45;
      unaff_RBP[0x48] = (uint)fVar42;
      unaff_RBP[0x49] = (uint)fVar43;
      unaff_RBP[0x4a] = (uint)fVar44;
      unaff_RBP[0x4b] = (uint)fVar45;
      unaff_RBP[0x4c] = (uint)fVar46;
      unaff_RBP[0x4d] = (uint)fVar47;
      unaff_RBP[0x4e] = (uint)fVar48;
      unaff_RBP[0x4f] = (uint)fVar49;
      unaff_RBP[-0x18] = (uint)fVar46;
      unaff_RBP[-0x17] = (uint)fVar47;
      unaff_RBP[-0x16] = (uint)fVar48;
      unaff_RBP[-0x15] = (uint)fVar49;
      fVar49 = fVar1 * fVar36 + fVar37 * fVar9 + fVar51 * fVar10 + (float)unaff_RBP[-0x14];
      fVar45 = fVar1 * fVar12 + fVar37 * fVar31 + fVar51 * fVar11 + (float)unaff_RBP[-0x13];
      fVar50 = fVar1 * fVar13 + fVar37 * fVar32 + fVar51 * fVar34 + (float)unaff_RBP[-0x12];
      fVar51 = fVar1 * fVar14 + fVar37 * fVar33 + fVar51 * fVar35 + (float)unaff_RBP[-0x11];
      unaff_RBP[0x50] = (uint)fVar49;
      unaff_RBP[0x51] = (uint)fVar45;
      unaff_RBP[0x52] = (uint)fVar50;
      unaff_RBP[0x53] = (uint)fVar51;
      unaff_RBP[-0x14] = (uint)fVar49;
      unaff_RBP[-0x13] = (uint)fVar45;
      unaff_RBP[-0x12] = (uint)fVar50;
      unaff_RBP[-0x11] = (uint)fVar51;
      unaff_RBP[0x20] =
           (uint)(fVar39 * fStack0000000000000034 + fVar38 * fStack0000000000000030 +
                 fVar40 * in_stack_00000038);
      unaff_RBP[0x21] =
           (uint)(fVar39 * unaff_XMM12_Db + fVar38 * unaff_XMM12_Da + fVar40 * unaff_XMM12_Dc);
      unaff_RBP[0x22] =
           (uint)(fVar39 * unaff_XMM11_Db + fVar38 * unaff_XMM11_Da + fVar40 * unaff_XMM11_Dc);
      unaff_RBP[0x23] =
           (uint)(fVar39 * unaff_XMM11_Dd + fVar38 * unaff_XMM11_Dd + fVar40 * unaff_XMM11_Dd);
      unaff_RBP[0x24] =
           (uint)(fVar43 * fStack0000000000000034 + fVar42 * fStack0000000000000030 +
                 fVar44 * in_stack_00000038);
      unaff_RBP[0x25] =
           (uint)(fVar43 * unaff_XMM12_Db + fVar42 * unaff_XMM12_Da + fVar44 * unaff_XMM12_Dc);
      unaff_RBP[0x26] =
           (uint)(fVar43 * unaff_XMM11_Db + fVar42 * unaff_XMM11_Da + fVar44 * unaff_XMM11_Dc);
      unaff_RBP[0x27] =
           (uint)(fVar43 * unaff_XMM11_Dd + fVar42 * unaff_XMM11_Dd + fVar44 * unaff_XMM11_Dd);
      fVar49 = fVar49 - unaff_XMM15_Da;
      unaff_RBP[0x28] =
           (uint)(fVar46 * fStack0000000000000030 + fVar47 * fStack0000000000000034 +
                 fVar48 * in_stack_00000038);
      unaff_RBP[0x29] =
           (uint)(fVar46 * unaff_XMM12_Da + fVar47 * unaff_XMM12_Db + fVar48 * unaff_XMM12_Dc);
      unaff_RBP[0x2a] =
           (uint)(fVar46 * unaff_XMM11_Da + fVar47 * unaff_XMM11_Db + fVar48 * unaff_XMM11_Dc);
      unaff_RBP[0x2b] =
           (uint)(fVar46 * unaff_XMM11_Dd + fVar47 * unaff_XMM11_Dd + fVar48 * unaff_XMM11_Dd);
      fVar45 = fVar45 - fStack0000000000000064;
      fVar50 = fVar50 - in_stack_00000068;
      unaff_RBP[0x2c] =
           (uint)(fVar45 * fStack0000000000000034 + fVar49 * fStack0000000000000030 +
                 fVar50 * in_stack_00000038);
      unaff_RBP[0x2d] =
           (uint)(fVar45 * unaff_XMM12_Db + fVar49 * unaff_XMM12_Da + fVar50 * unaff_XMM12_Dc);
      unaff_RBP[0x2e] =
           (uint)(fVar45 * unaff_XMM11_Db + fVar49 * unaff_XMM11_Da + fVar50 * unaff_XMM11_Dc);
      unaff_RBP[0x2f] =
           (uint)(fVar45 * unaff_XMM11_Dd + fVar49 * unaff_XMM11_Dd + fVar50 * unaff_XMM11_Dd);
      FUN_18063b470(unaff_RBP + -0x10,unaff_RBP + 0x20);
      *(undefined8 *)(unaff_RBP + -4) = *(undefined8 *)(unaff_RBP + 0x2c);
      *(undefined8 *)(unaff_RBP + -2) = *(undefined8 *)(unaff_RBP + 0x2e);
      *(undefined8 *)(unaff_RBP + -8) = *(undefined8 *)(unaff_RBP + -0x10);
      *(undefined8 *)(unaff_RBP + -6) = *(undefined8 *)(unaff_RBP + -0xe);
      do {
        LOCK();
        uVar2 = *puVar30;
        *puVar30 = *puVar30 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      uVar2 = unaff_RBP[-8];
      uVar15 = unaff_RBP[-7];
      uVar16 = unaff_RBP[-6];
      uVar17 = unaff_RBP[-5];
      uVar18 = unaff_RBP[-4];
      uVar19 = unaff_RBP[-3];
      uVar20 = unaff_RBP[-2];
      uVar21 = unaff_RBP[-1];
      puVar30[1] = uVar2;
      puVar30[2] = uVar15;
      puVar30[3] = uVar16;
      puVar30[4] = uVar17;
      puVar30[5] = uVar18;
      puVar30[6] = uVar19;
      puVar30[7] = uVar20;
      puVar30[8] = uVar21;
      *puVar30 = 0;
      FUN_1802feba0(uVar2,(longlong)(ulonglong)(uint)(iVar29 - *(int *)(unaff_RDI + 0x18)) >> 8);
      if (cVar3 == -1) {
        do {
          LOCK();
          uVar2 = *puVar30;
          *puVar30 = *puVar30 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        uVar22 = *(undefined8 *)(puVar30 + 1);
        uVar23 = *(undefined8 *)(puVar30 + 3);
        uVar24 = *(undefined8 *)(puVar30 + 5);
        uVar25 = *(undefined8 *)(puVar30 + 7);
        *(undefined8 *)(unaff_RBP + 0x5c) = uVar22;
        *(undefined8 *)(unaff_RBP + 0x5e) = uVar23;
        *(undefined8 *)(unaff_RBP + 0x60) = uVar24;
        *(undefined8 *)(unaff_RBP + 0x62) = uVar25;
        *puVar30 = 0;
        *(undefined8 *)(puVar30 + 0xc) = uVar22;
        *(undefined8 *)(puVar30 + 0xe) = uVar23;
        *(undefined8 *)(puVar30 + 0x10) = uVar24;
        *(undefined8 *)(puVar30 + 0x12) = uVar25;
        *(undefined8 *)(unaff_RDI + 0x1e8) = uVar24;
        *(undefined8 *)(unaff_RDI + 0x1f0) = uVar25;
      }
      else {
        puVar28 = (uint *)((longlong)cVar3 * 0x100 + *(longlong *)(unaff_RDI + 0x18));
        do {
          LOCK();
          uVar2 = *puVar28;
          *puVar28 = *puVar28 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        uVar22 = *(undefined8 *)(puVar28 + 1);
        uVar23 = *(undefined8 *)(puVar28 + 3);
        uVar24 = *(undefined8 *)(puVar28 + 5);
        uVar25 = *(undefined8 *)(puVar28 + 7);
        *(undefined8 *)(unaff_RBP + 0x54) = uVar22;
        *(undefined8 *)(unaff_RBP + 0x56) = uVar23;
        *(undefined8 *)(unaff_RBP + 0x58) = uVar24;
        *(undefined8 *)(unaff_RBP + 0x5a) = uVar25;
        *puVar28 = 0;
        *(undefined8 *)(unaff_RBP + 0x10) = uVar22;
        *(undefined8 *)(unaff_RBP + 0x12) = uVar23;
        *(undefined8 *)(unaff_RBP + 0x14) = uVar24;
        *(undefined8 *)(unaff_RBP + 0x16) = uVar25;
        do {
          LOCK();
          uVar2 = *puVar30;
          *puVar30 = *puVar30 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        fVar51 = (float)puVar30[1];
        fVar49 = (float)puVar30[2];
        fVar37 = (float)puVar30[3];
        fVar45 = (float)puVar30[4];
        fStackX_20 = (float)puVar30[5];
        fStackX_24 = (float)puVar30[6];
        uVar2 = puVar30[7];
        uVar15 = puVar30[8];
        unaff_RBP[100] = (uint)fVar51;
        unaff_RBP[0x65] = (uint)fVar49;
        unaff_RBP[0x66] = (uint)fVar37;
        unaff_RBP[0x67] = (uint)fVar45;
        unaff_RBP[0x68] = (uint)fStackX_20;
        unaff_RBP[0x69] = (uint)fStackX_24;
        unaff_RBP[0x6a] = uVar2;
        unaff_RBP[0x6b] = uVar15;
        unaff_RBP[0x40] = (uint)fStackX_20;
        unaff_RBP[0x41] = (uint)fStackX_24;
        unaff_RBP[0x42] = uVar2;
        unaff_RBP[0x43] = uVar15;
        fStackX_24 = fStackX_24 - (float)unaff_RBP[0x59];
        *puVar30 = 0;
        fStackX_20 = fStackX_20 - (float)unaff_RBP[0x58];
        unaff_RBP[0x3c] = (uint)fVar51;
        unaff_RBP[0x3d] = (uint)fVar49;
        unaff_RBP[0x3e] = (uint)fVar37;
        unaff_RBP[0x3f] = (uint)fVar45;
        FUN_180285b40(unaff_RBP + 0x10,unaff_RBP + -0xc,&fStackX_20);
        fVar50 = (float)unaff_RBP[0x54];
        fVar1 = (float)unaff_RBP[0x55];
        fVar46 = (float)unaff_RBP[0x56];
        fVar9 = (float)unaff_RBP[0x57];
        uVar22 = *(undefined8 *)(unaff_RBP + -0xc);
        uVar23 = *(undefined8 *)(unaff_RBP + -10);
        fVar31 = fVar46 * fVar45 * -1.0 + fVar51 * fVar1 * -1.0 + fVar50 * fVar49 + fVar9 * fVar37;
        fVar32 = fVar9 * fVar49 * -1.0 + fVar51 * fVar46 * -1.0 + fVar50 * fVar37 + fVar1 * fVar45;
        fVar33 = fVar1 * fVar37 * -1.0 + fVar51 * fVar9 * -1.0 + fVar50 * fVar45 + fVar46 * fVar49;
        fVar51 = fVar9 * fVar45 * 1.0 + fVar51 * fVar50 * 1.0 + fVar46 * fVar37 + fVar1 * fVar49;
        puVar30[0xc] = (uint)fVar51;
        puVar30[0xd] = (uint)fVar31;
        puVar30[0xe] = (uint)fVar32;
        puVar30[0xf] = (uint)fVar33;
        *(undefined8 *)(puVar30 + 0x10) = uVar22;
        *(undefined8 *)(puVar30 + 0x12) = uVar23;
        unaff_RBP[0x30] = (uint)fVar51;
        unaff_RBP[0x31] = (uint)fVar31;
        unaff_RBP[0x32] = (uint)fVar32;
        unaff_RBP[0x33] = (uint)fVar33;
      }
    }
    fVar51 = (float)puVar30[0xc];
    fVar49 = (float)puVar30[0xd];
    fVar37 = (float)puVar30[0xe];
    fVar45 = (float)puVar30[0xf];
    unaff_R14B = unaff_R14B + '\x01';
    puVar30[0x14] =
         (uint)(fVar8 * fVar45 * 1.0 + fVar51 * fVar5 * 1.0 + fVar7 * fVar37 + fVar6 * fVar49);
    puVar30[0x15] =
         (uint)(fVar7 * fVar45 * -1.0 + fVar51 * fVar6 * -1.0 + fVar5 * fVar49 + fVar8 * fVar37);
    puVar30[0x16] =
         (uint)(fVar8 * fVar49 * -1.0 + fVar51 * fVar7 * -1.0 + fVar5 * fVar37 + fVar6 * fVar45);
    puVar30[0x17] =
         (uint)(fVar6 * fVar37 * -1.0 + fVar51 * fVar8 * -1.0 + fVar5 * fVar45 + fVar7 * fVar49);
    unaff_XMM11_Da = fStack0000000000000050;
    unaff_XMM11_Db = fStack0000000000000054;
    unaff_XMM11_Dc = fStack0000000000000058;
    unaff_XMM11_Dd = fStack000000000000005c;
    unaff_XMM12_Da = fStack0000000000000040;
    unaff_XMM12_Db = fStack0000000000000044;
    unaff_XMM12_Dc = in_stack_00000048;
    unaff_XMM15_Da = fStack0000000000000060;
  } while (unaff_R14B < *(char *)(unaff_RDI + 0x20));
  (**(code **)(**(longlong **)(unaff_RDI + 0x210) + 0xd8))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x74) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802fd4d8(void)
void FUN_1802fd4d8(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x210) + 0xd8))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fd530(longlong param_1,longlong param_2,float *param_3)
void FUN_1802fd530(longlong param_1,longlong param_2,float *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  char cVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint *puVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_608 [32];
  float fStack_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  longlong lStack_5d0;
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  undefined4 uStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  undefined4 uStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  undefined8 uStack_558;
  undefined8 uStack_550;
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  float afStack_4e8 [2];
  undefined8 uStack_4e0;
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_608;
  lVar21 = *(longlong *)(param_1 + 0x10);
  uStack_558 = *(undefined8 *)(lVar21 + 0x70);
  uStack_550 = *(undefined8 *)(lVar21 + 0x78);
  fStack_548 = *(float *)(lVar21 + 0x80);
  fStack_544 = *(float *)(lVar21 + 0x84);
  fStack_540 = *(float *)(lVar21 + 0x88);
  fStack_53c = *(float *)(lVar21 + 0x8c);
  fStack_538 = *(float *)(lVar21 + 0x90);
  fStack_534 = *(float *)(lVar21 + 0x94);
  fStack_530 = *(float *)(lVar21 + 0x98);
  fStack_52c = *(float *)(lVar21 + 0x9c);
  lStack_5d0 = param_2;
  FUN_180084ae0(&uStack_558);
  lVar21 = *(longlong *)(param_1 + 0x10);
  pfVar19 = afStack_4e8;
  fVar23 = *(float *)(param_1 + 0x38);
  lVar20 = 0x40;
  if (fVar23 <= 1e-07) {
    fVar23 = 1e-07;
  }
  lVar12 = *(longlong *)(lVar21 + 0x28);
  fVar4 = *(float *)(lVar21 + 0xa0);
  fVar5 = *(float *)(lVar21 + 0xa4);
  fVar6 = *(float *)(lVar21 + 0xa8);
  fVar7 = *(float *)(lVar12 + 0xe8);
  fVar8 = *(float *)(lVar12 + 0xec);
  fVar9 = *(float *)(lVar12 + 0xf0);
  fVar23 = 1.0 / fVar23;
  fVar24 = (*(float *)(param_1 + 0x1ec) - *(float *)(param_1 + 0x1fc)) * fVar23;
  fVar26 = (*(float *)(param_1 + 0x1f0) - *(float *)(param_1 + 0x200)) * fVar23;
  fVar29 = (*(float *)(param_1 + 0x1e8) - *(float *)(param_1 + 0x1f8)) * fVar23;
  fStack_5dc = fVar24;
  fStack_5d8 = fVar26;
  do {
    func_0x000180074f10(pfVar19);
    pfVar19 = pfVar19 + 4;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  iVar22 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar20 = lStack_5d0 - (longlong)param_3;
    fStack_588 = fStack_548;
    fStack_584 = fStack_544;
    fStack_580 = fStack_540;
    fStack_57c = fStack_53c;
    fStack_578 = (float)uStack_558;
    fStack_574 = uStack_558._4_4_;
    fStack_570 = (float)uStack_550;
    fStack_56c = uStack_550._4_4_;
    fStack_568 = fStack_538;
    fStack_564 = fStack_534;
    fStack_560 = fStack_530;
    fStack_55c = fStack_52c;
    fStack_59c = 3.4028235e+38;
    lVar21 = 0;
    pfVar19 = param_3;
    do {
      lVar12 = *(longlong *)(param_1 + 0x18);
      cVar11 = *(char *)(lVar12 + 0xa0 + lVar21);
      if (cVar11 < '\0') {
        puVar3 = (undefined8 *)(lVar12 + 0x50 + lVar21);
        uVar16 = puVar3[1];
        puVar1 = (undefined8 *)(((longlong)afStack_4e8 - (longlong)param_3) + (longlong)pfVar19);
        *puVar1 = *puVar3;
        puVar1[1] = uVar16;
        fStack_518 = fVar29 * fStack_578 + fVar24 * fStack_588 + fVar26 * fStack_568;
        fStack_514 = fVar29 * fStack_574 + fVar24 * fStack_584 + fVar26 * fStack_564;
        fStack_510 = fVar29 * fStack_570 + fVar24 * fStack_580 + fVar26 * fStack_560;
        fStack_50c = fVar29 * fStack_56c + fVar24 * fStack_57c + fVar26 * fStack_55c;
        fVar27 = (fVar4 - fVar7) * fVar23 + fStack_518;
        fVar28 = (fVar5 - fVar8) * fVar23 + fStack_514;
        fVar25 = (fVar6 - fVar9) * fVar23 + fStack_510;
        uStack_5ac = 0x7f7fffff;
        fStack_5b8 = fVar27;
        fStack_5b4 = fVar28;
        fStack_5b0 = fVar25;
      }
      else {
        pfVar2 = (float *)(lVar12 + 0x50 + lVar21);
        fVar24 = *pfVar2;
        fVar26 = pfVar2[1];
        fVar25 = pfVar2[2];
        fVar27 = pfVar2[3];
        lVar17 = (longlong)cVar11;
        puVar18 = (uint *)(lVar17 * 0x100 + lVar12);
        fVar28 = afStack_4e8[lVar17 * 4];
        fVar13 = afStack_4e8[lVar17 * 4 + 1];
        fVar14 = *(float *)(&uStack_4e0 + lVar17 * 2);
        fVar15 = *(float *)((longlong)&uStack_4e0 + lVar17 * 0x10 + 4);
        pfVar2 = (float *)(((longlong)afStack_4e8 - (longlong)param_3) + (longlong)pfVar19);
        *pfVar2 = fVar15 * fVar27 * -1.0 + fVar14 * fVar25 * -1.0 +
                  (fVar24 * fVar28 - fVar13 * fVar26);
        pfVar2[1] = fVar14 * fVar27 * 1.0 + fVar28 * fVar26 * 1.0 +
                    (fVar24 * fVar13 - fVar15 * fVar25);
        pfVar2[2] = fVar15 * fVar26 * 1.0 + fVar28 * fVar25 * 1.0 +
                    (fVar24 * fVar14 - fVar13 * fVar27);
        pfVar2[3] = fVar13 * fVar25 * 1.0 + fVar28 * fVar27 * 1.0 +
                    (fVar24 * fVar15 - fVar14 * fVar26);
        fVar24 = *(float *)(lStack_5d0 + 4 + lVar17 * 0x10);
        fVar26 = *(float *)(lStack_5d0 + 8 + lVar17 * 0x10);
        fVar25 = *(float *)(lStack_5d0 + lVar17 * 0x10);
        fStack_5e4 = fVar24 * *(float *)(lVar12 + 0x48 + lVar21) -
                     fVar26 * *(float *)(lVar12 + 0x44 + lVar21);
        fStack_5e0 = fVar25 * *(float *)(lVar12 + 0x44 + lVar21) -
                     fVar24 * *(float *)(lVar12 + 0x40 + lVar21);
        fStack_5e8 = fVar26 * *(float *)(lVar12 + 0x40 + lVar21) -
                     fVar25 * *(float *)(lVar12 + 0x48 + lVar21);
        do {
          LOCK();
          uVar10 = *puVar18;
          *puVar18 = *puVar18 | 1;
          UNLOCK();
        } while ((uVar10 & 1) != 0);
        fStack_508 = (float)puVar18[1];
        fStack_504 = (float)puVar18[2];
        fStack_500 = (float)puVar18[3];
        fStack_4fc = (float)puVar18[4];
        uStack_4f8 = *(undefined8 *)(puVar18 + 5);
        uStack_4f0 = *(undefined8 *)(puVar18 + 7);
        *puVar18 = 0;
        fVar27 = fStack_500 * fStack_5e0 - fStack_4fc * fStack_5e8;
        fVar28 = fStack_4fc * fStack_5e4 - fStack_504 * fStack_5e0;
        fVar27 = fVar27 + fVar27;
        fVar25 = fStack_504 * fStack_5e8 - fStack_500 * fStack_5e4;
        fVar28 = fVar28 + fVar28;
        fVar25 = fVar25 + fVar25;
        fVar26 = (fVar25 * fStack_500 - fVar28 * fStack_4fc) + fVar27 * fStack_508 + fStack_5e4;
        fVar24 = fVar28 * fStack_508 + fStack_5e8 + (fVar27 * fStack_4fc - fVar25 * fStack_504);
        fVar25 = (fVar28 * fStack_504 - fVar27 * fStack_500) + fVar25 * fStack_508 + fStack_5e0;
        fStack_528 = fVar26 * fStack_578 + fVar24 * fStack_588 + fVar25 * fStack_568;
        fStack_524 = fVar26 * fStack_574 + fVar24 * fStack_584 + fVar25 * fStack_564;
        fStack_520 = fVar26 * fStack_570 + fVar24 * fStack_580 + fVar25 * fStack_560;
        fStack_51c = fVar26 * fStack_56c + fVar24 * fStack_57c + fVar25 * fStack_55c;
        fVar27 = fStack_528 + param_3[lVar17 * 4];
        fVar28 = fStack_524 + param_3[lVar17 * 4 + 1];
        fVar25 = fStack_520 + param_3[lVar17 * 4 + 2];
        uStack_5bc = 0x7f7fffff;
        fVar24 = fStack_5dc;
        fVar26 = fStack_5d8;
        fStack_5c8 = fVar27;
        fStack_5c4 = fVar28;
        fStack_5c0 = fVar25;
      }
      *pfVar19 = fVar27;
      pfVar19[1] = fVar28;
      pfVar19[2] = fVar25;
      pfVar19[3] = 3.4028235e+38;
      FUN_18063b720(&fStack_598,&fStack_5d4,afStack_4e8 + (longlong)iVar22 * 4);
      iVar22 = iVar22 + 1;
      lVar21 = lVar21 + 0x100;
      fStack_5a0 = fStack_5d4 * fVar23;
      fStack_5a8 = fStack_598 * fStack_5a0;
      fStack_5a4 = fStack_594 * fStack_5a0;
      fStack_5a0 = fStack_590 * fStack_5a0;
      pfVar2 = (float *)(lVar20 + (longlong)pfVar19);
      *pfVar2 = fStack_5a8;
      pfVar2[1] = fStack_5a4;
      pfVar2[2] = fStack_5a0;
      pfVar2[3] = fStack_59c;
      pfVar19 = pfVar19 + 4;
    } while (iVar22 < *(char *)(param_1 + 0x20));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_608);
}






