#include "TaleWorlds.Native.Split.h"

// 99_part_07_part063.c - 3 个函数

// 函数: void FUN_1804d6698(void)
void FUN_1804d6698(void)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
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
  longlong lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  longlong in_RAX;
  longlong lVar39;
  longlong lVar40;
  longlong unaff_RBX;
  float *unaff_RBP;
  int iVar41;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong in_R11;
  longlong lVar46;
  longlong lVar47;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  longlong lVar48;
  undefined8 unaff_R14;
  longlong lVar49;
  undefined8 unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  longlong lStack0000000000000030;
  longlong lStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  *(undefined8 *)(in_R11 + 0x18) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x20) = unaff_RDI;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x30) = unaff_R14;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R15;
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  lVar48 = in_RAX * 0x18;
  lStack0000000000000038 = unaff_RBX - in_RAX;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  do {
    lVar43 = unaff_R12[1];
    iVar41 = 0;
    uVar2 = *(uint *)(*(longlong *)*unaff_R12 + 0x10 + lVar48);
    lVar31 = *(longlong *)(*(longlong *)*unaff_R12 + lVar48);
    lVar49 = (longlong)(int)(*(uint *)(lVar43 + 0x2c88) & uVar2) * 0x68;
    lVar44 = *(longlong *)(*(longlong *)(lVar43 + 0x2c68) + (longlong)((int)uVar2 >> 10) * 8);
    uVar2 = *(uint *)(lVar44 + 0x14 + lVar49);
    lVar42 = (longlong)(int)(*(uint *)(lVar43 + 0x2b18) & uVar2) * 0xd8;
    lVar47 = *(longlong *)(*(longlong *)(lVar43 + 11000) + (longlong)((int)uVar2 >> 10) * 8);
    lVar40 = *(longlong *)(lVar44 + 0x20 + lVar49);
    if (*(longlong *)(lVar44 + 0x28 + lVar49) - lVar40 >> 2 != 0) {
      lVar43 = 0;
      do {
        lVar3 = unaff_R12[1];
        lVar46 = (longlong)(int)(*(uint *)(lVar3 + 0x2b18) & *(uint *)(lVar40 + lVar43)) * 0xd8;
        lVar40 = *(longlong *)
                  (*(longlong *)(lVar3 + 11000) +
                  (longlong)((int)*(uint *)(lVar40 + lVar43) >> 10) * 8);
        lVar4 = *(longlong *)(lVar40 + 8 + lVar46);
        if (lVar4 != 0) {
          uVar32 = *(undefined8 *)(lVar4 + 0x78);
          uVar2 = *(uint *)(lVar40 + 0x18 + lVar46);
          uVar33 = *(undefined8 *)(lVar4 + 0x80);
          uVar34 = *(undefined8 *)(lVar4 + 0x88);
          uVar35 = *(undefined8 *)(lVar4 + 0x90);
          uVar36 = *(undefined8 *)(lVar4 + 0x98);
          uVar37 = *(undefined8 *)(lVar4 + 0xa0);
          uVar38 = *(undefined8 *)(lVar4 + 0xa8);
          lVar39 = (longlong)(int)(*(uint *)(lVar3 + 0x4a8) & uVar2);
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x488) + (longlong)((int)uVar2 >> 10) * 8);
          puVar1 = (undefined8 *)(lVar3 + 8 + lVar39 * 0x48);
          *puVar1 = *(undefined8 *)(lVar4 + 0x70);
          puVar1[1] = uVar32;
          puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar39 * 0x48);
          *puVar1 = uVar33;
          puVar1[1] = uVar34;
          puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar39 * 0x48);
          *puVar1 = uVar35;
          puVar1[1] = uVar36;
          puVar1 = (undefined8 *)(lVar3 + 0x38 + lVar39 * 0x48);
          *puVar1 = uVar37;
          puVar1[1] = uVar38;
          *(bool *)(lVar40 + 0x10 + lVar46) =
               (*(byte *)(*(longlong *)(lVar40 + 8 + lVar46) + 0x2e8) & 0xb) == 0xb;
        }
        lVar40 = *(longlong *)(lVar44 + 0x20 + lVar49);
        iVar41 = iVar41 + 1;
        lVar43 = lVar43 + 4;
      } while ((ulonglong)(longlong)iVar41 <
               (ulonglong)(*(longlong *)(lVar44 + 0x28 + lVar49) - lVar40 >> 2));
      lVar43 = unaff_R12[1];
    }
    uVar2 = *(uint *)(lVar47 + 0x18 + lVar42);
    lVar44 = *(longlong *)(lVar31 + 0x8a8);
    uVar32 = *(undefined8 *)(lVar44 + 0x78);
    uVar33 = *(undefined8 *)(lVar44 + 0x80);
    uVar34 = *(undefined8 *)(lVar44 + 0x88);
    uVar35 = *(undefined8 *)(lVar44 + 0x90);
    uVar36 = *(undefined8 *)(lVar44 + 0x98);
    uVar37 = *(undefined8 *)(lVar44 + 0xa0);
    uVar38 = *(undefined8 *)(lVar44 + 0xa8);
    lVar40 = (longlong)(int)(*(uint *)(lVar43 + 0x4a8) & uVar2);
    lVar43 = *(longlong *)(*(longlong *)(lVar43 + 0x488) + (longlong)((int)uVar2 >> 10) * 8);
    puVar1 = (undefined8 *)(lVar43 + 8 + lVar40 * 0x48);
    *puVar1 = *(undefined8 *)(lVar44 + 0x70);
    puVar1[1] = uVar32;
    puVar1 = (undefined8 *)(lVar43 + 0x18 + lVar40 * 0x48);
    *puVar1 = uVar33;
    puVar1[1] = uVar34;
    puVar1 = (undefined8 *)(lVar43 + 0x28 + lVar40 * 0x48);
    *puVar1 = uVar35;
    puVar1[1] = uVar36;
    puVar1 = (undefined8 *)(lVar43 + 0x38 + lVar40 * 0x48);
    *puVar1 = uVar37;
    puVar1[1] = uVar38;
    fStack0000000000000064 = *(float *)(lVar47 + 0x94 + lVar42);
    lVar43 = *(longlong *)(*(longlong *)(lVar31 + 0x8a8) + 0x260);
    uStack000000000000002c = *(undefined4 *)(lVar43 + 0x234);
    puVar5 = *(uint **)(lVar43 + 0x18);
    uStack0000000000000040 = *(undefined8 *)(lVar43 + 0x218);
    uStack000000000000005c = *(undefined4 *)(lVar43 + 0x224);
    uStack0000000000000048 = *(undefined8 *)(lVar43 + 0x220);
    fStack0000000000000060 = *(float *)(lVar43 + 0x228) + fStack0000000000000064;
    fStack0000000000000028 = *(float *)(lVar43 + 0x230) + fStack0000000000000064;
    fStack0000000000000050 = *(float *)(lVar43 + 0x218) - fStack0000000000000064;
    fStack0000000000000054 = *(float *)(lVar43 + 0x21c) - fStack0000000000000064;
    fStack0000000000000058 = *(float *)(lVar43 + 0x220) - fStack0000000000000064;
    fStack0000000000000064 = *(float *)(lVar43 + 0x22c) + fStack0000000000000064;
    do {
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    uVar32 = *(undefined8 *)(puVar5 + 1);
    uVar33 = *(undefined8 *)(puVar5 + 3);
    fVar6 = (float)puVar5[5];
    fVar7 = (float)puVar5[6];
    fVar8 = (float)puVar5[7];
    fVar9 = (float)puVar5[8];
    *(undefined8 *)(unaff_RBP + 0x18) = uVar32;
    *(undefined8 *)(unaff_RBP + 0x1a) = uVar33;
    unaff_RBP[0x1c] = fVar6;
    unaff_RBP[0x1d] = fVar7;
    unaff_RBP[0x1e] = fVar8;
    unaff_RBP[0x1f] = fVar9;
    *puVar5 = 0;
    *(undefined8 *)(unaff_RBP + -0x1c) = uVar32;
    *(undefined8 *)(unaff_RBP + -0x1a) = uVar33;
    unaff_RBP[-0x18] = fVar6;
    unaff_RBP[-0x17] = fVar7;
    unaff_RBP[-0x16] = fVar8;
    unaff_RBP[-0x15] = fVar9;
    lStack0000000000000030 = lVar47;
    fStack0000000000000068 = fStack0000000000000028;
    uStack000000000000006c = uStack000000000000002c;
    FUN_1800b9f60(&stack0x00000050);
    lVar43 = unaff_R12[1];
    uVar45 = (ulonglong)*(int *)(lVar47 + 0x20 + lVar42);
    lVar44 = *(longlong *)(lVar31 + 0x8a8);
    FUN_18063b5f0(unaff_RBP + -0x14,unaff_RBP + -0x1c);
    fVar10 = unaff_RBP[-0x14];
    fVar11 = unaff_RBP[-0x13];
    fVar12 = unaff_RBP[-0x12];
    fVar13 = unaff_RBP[-0x10];
    fVar14 = unaff_RBP[-0xf];
    fVar15 = unaff_RBP[-0xe];
    fVar16 = *(float *)(lVar44 + 0x70);
    fVar17 = *(float *)(lVar44 + 0x74);
    fVar18 = *(float *)(lVar44 + 0x78);
    fVar19 = *(float *)(lVar44 + 0x7c);
    fVar20 = *(float *)(lVar44 + 0x80);
    fVar21 = *(float *)(lVar44 + 0x84);
    fVar22 = *(float *)(lVar44 + 0x88);
    fVar23 = *(float *)(lVar44 + 0x8c);
    fVar24 = unaff_RBP[-0xc];
    fVar25 = unaff_RBP[-0xb];
    fVar26 = unaff_RBP[-10];
    fVar27 = *(float *)(lVar44 + 0x90);
    fVar28 = *(float *)(lVar44 + 0x94);
    fVar29 = *(float *)(lVar44 + 0x98);
    fVar30 = *(float *)(lVar44 + 0x9c);
    unaff_RBP[8] = fVar10;
    unaff_RBP[9] = fVar11;
    unaff_RBP[10] = fVar12;
    unaff_RBP[0xb] = unaff_RBP[-0x11];
    unaff_RBP[0xc] = fVar13;
    unaff_RBP[0xd] = fVar14;
    unaff_RBP[0xe] = fVar15;
    unaff_RBP[0xf] = unaff_RBP[-0xd];
    unaff_RBP[0x10] = fVar24;
    unaff_RBP[0x11] = fVar25;
    unaff_RBP[0x12] = fVar26;
    unaff_RBP[0x13] = unaff_RBP[-9];
    unaff_RBP[0x14] = fVar6;
    unaff_RBP[0x15] = fVar7;
    unaff_RBP[0x16] = fVar8;
    unaff_RBP[0x17] = fVar9;
    unaff_RBP[-8] = fVar11 * fVar20 + fVar10 * fVar16 + fVar12 * fVar27;
    unaff_RBP[-7] = fVar11 * fVar21 + fVar10 * fVar17 + fVar12 * fVar28;
    unaff_RBP[-6] = fVar11 * fVar22 + fVar10 * fVar18 + fVar12 * fVar29;
    unaff_RBP[-5] = fVar11 * fVar23 + fVar10 * fVar19 + fVar12 * fVar30;
    unaff_RBP[-4] = fVar14 * fVar20 + fVar13 * fVar16 + fVar15 * fVar27;
    unaff_RBP[-3] = fVar14 * fVar21 + fVar13 * fVar17 + fVar15 * fVar28;
    unaff_RBP[-2] = fVar14 * fVar22 + fVar13 * fVar18 + fVar15 * fVar29;
    unaff_RBP[-1] = fVar14 * fVar23 + fVar13 * fVar19 + fVar15 * fVar30;
    *unaff_RBP = fVar25 * fVar20 + fVar24 * fVar16 + fVar26 * fVar27;
    unaff_RBP[1] = fVar25 * fVar21 + fVar24 * fVar17 + fVar26 * fVar28;
    unaff_RBP[2] = fVar25 * fVar22 + fVar24 * fVar18 + fVar26 * fVar29;
    unaff_RBP[3] = fVar25 * fVar23 + fVar24 * fVar19 + fVar26 * fVar30;
    iVar41 = *(int *)(lVar43 + 0x500);
    fVar9 = *(float *)(lVar44 + 0xa4);
    fVar10 = *(float *)(lVar44 + 0xa8);
    fVar11 = *(float *)(lVar44 + 0xac);
    lVar43 = *(longlong *)(*(longlong *)(lVar43 + 0x4e0) + (longlong)((int)uVar45 >> 10) * 8);
    unaff_RBP[4] = fVar7 * fVar20 + fVar6 * fVar16 + fVar8 * fVar27 + *(float *)(lVar44 + 0xa0);
    unaff_RBP[5] = fVar7 * fVar21 + fVar6 * fVar17 + fVar8 * fVar28 + fVar9;
    unaff_RBP[6] = fVar7 * fVar22 + fVar6 * fVar18 + fVar8 * fVar29 + fVar10;
    unaff_RBP[7] = fVar7 * fVar23 + fVar6 * fVar19 + fVar8 * fVar30 + fVar11;
    FUN_18063ad30(((longlong)iVar41 & uVar45) * 0xc0 + lVar43 + 8,&stack0x00000050,unaff_RBP + -8);
    lVar48 = lVar48 + 0x18;
    lStack0000000000000038 = lStack0000000000000038 + -1;
    *(bool *)(lStack0000000000000030 + 0x10 + lVar42) =
         (*(byte *)(*(longlong *)(lVar31 + 0x8a8) + 0x2e8) & 0xb) == 0xb;
  } while (lStack0000000000000038 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x20) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1804d6b40(void)
void FUN_1804d6b40(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x80) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d6b60(longlong *param_1,int param_2,int param_3)
void FUN_1804d6b60(longlong *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  uint uVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  int iVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_228 [32];
  int iStack_208;
  longlong *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  ulonglong uStack_88;
  
  uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  uVar25 = (ulonglong)param_2;
  uVar28 = uVar25;
  iStack_208 = param_3;
  plStack_200 = param_1;
  if (param_2 < param_3) {
    do {
      lVar7 = *param_1;
      iVar24 = (int)uVar25;
      if (iVar24 < *(int *)(lVar7 + 0x5bc)) {
        uVar25 = (longlong)*(int *)(lVar7 + 0x608) & uVar28;
        lVar21 = *(longlong *)(*(longlong *)(lVar7 + 0x5e8) + (longlong)(iVar24 >> 10) * 8);
        param_3 = iStack_208;
        if (*(int *)(lVar21 + uVar25 * 0x28) == -1) goto LAB_1804d6c16;
        puVar23 = (uint *)(lVar21 + (uVar25 * 5 + 1) * 8);
      }
      else {
LAB_1804d6c16:
        puVar23 = (uint *)0x0;
      }
      if (puVar23 != (uint *)0x0) {
        lVar27 = (longlong)(int)(*(uint *)(lVar7 + 0x2b18) & *puVar23) * 0xd8;
        lVar21 = *(longlong *)(*(longlong *)(lVar7 + 11000) + (longlong)((int)*puVar23 >> 10) * 8);
        uVar6 = *(uint *)(lVar21 + 0x18 + lVar27);
        lVar22 = (longlong)(int)(*(uint *)(lVar7 + 0x4a8) & uVar6);
        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x488) + (longlong)((int)uVar6 >> 10) * 8);
        if ((char)puVar23[1] == -1) {
          if (*(longlong **)(puVar23 + 2) == (longlong *)0x0) {
            puVar1 = (undefined8 *)(lVar8 + 8 + lVar22 * 0x48);
            uStack_1f8 = *puVar1;
            uStack_1f0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar22 * 0x48);
            uStack_1e8 = *puVar1;
            uStack_1e0 = puVar1[1];
            pfVar19 = (float *)(lVar8 + 0x28 + lVar22 * 0x48);
            fStack_1d8 = *pfVar19;
            fStack_1d4 = pfVar19[1];
            fStack_1d0 = pfVar19[2];
            fStack_1cc = pfVar19[3];
            puVar1 = (undefined8 *)(lVar8 + 0x38 + lVar22 * 0x48);
            uStack_1c8 = *puVar1;
            uStack_1c0 = puVar1[1];
          }
          else {
            pfVar20 = (float *)(**(code **)(**(longlong **)(puVar23 + 2) + 0x158))();
            pfVar19 = (float *)(lVar8 + 8 + lVar22 * 0x48);
            fVar32 = *pfVar19;
            fVar34 = pfVar19[1];
            fVar35 = pfVar19[2];
            fVar36 = pfVar19[3];
            pfVar19 = (float *)(lVar8 + 0x18 + lVar22 * 0x48);
            fVar9 = *pfVar19;
            fVar10 = pfVar19[1];
            fVar11 = pfVar19[2];
            fVar12 = pfVar19[3];
            pfVar19 = (float *)(lVar8 + 0x28 + lVar22 * 0x48);
            fVar13 = *pfVar19;
            fVar14 = pfVar19[1];
            fVar15 = pfVar19[2];
            fVar16 = pfVar19[3];
            fVar3 = pfVar20[1];
            fVar4 = *pfVar20;
            fVar33 = pfVar20[2];
            fVar30 = pfVar20[5];
            fVar5 = pfVar20[9];
            fVar37 = pfVar20[0xd];
            fVar31 = pfVar20[4];
            fStack_e8 = fVar3 * fVar9 + fVar4 * fVar32 + fVar33 * fVar13;
            fStack_e4 = fVar3 * fVar10 + fVar4 * fVar34 + fVar33 * fVar14;
            fStack_e0 = fVar3 * fVar11 + fVar4 * fVar35 + fVar33 * fVar15;
            fStack_dc = fVar3 * fVar12 + fVar4 * fVar36 + fVar33 * fVar16;
            fVar3 = pfVar20[6];
            fVar4 = pfVar20[8];
            fStack_d8 = fVar30 * fVar9 + fVar31 * fVar32 + fVar3 * fVar13;
            fStack_d4 = fVar30 * fVar10 + fVar31 * fVar34 + fVar3 * fVar14;
            fStack_d0 = fVar30 * fVar11 + fVar31 * fVar35 + fVar3 * fVar15;
            fStack_cc = fVar30 * fVar12 + fVar31 * fVar36 + fVar3 * fVar16;
            fVar3 = pfVar20[10];
            fVar33 = pfVar20[0xc];
            fStack_1d8 = fVar5 * fVar9 + fVar4 * fVar32 + fVar3 * fVar13;
            fStack_1d4 = fVar5 * fVar10 + fVar4 * fVar34 + fVar3 * fVar14;
            fStack_1d0 = fVar5 * fVar11 + fVar4 * fVar35 + fVar3 * fVar15;
            fStack_1cc = fVar5 * fVar12 + fVar4 * fVar36 + fVar3 * fVar16;
            fVar3 = pfVar20[0xe];
            pfVar19 = (float *)(lVar8 + 0x38 + lVar22 * 0x48);
            uStack_1f8 = CONCAT44(fStack_e4,fStack_e8);
            uStack_1f0 = CONCAT44(fStack_dc,fStack_e0);
            uStack_1e8 = CONCAT44(fStack_d4,fStack_d8);
            uStack_1e0 = CONCAT44(fStack_cc,fStack_d0);
            fStack_b8 = fVar37 * fVar9 + fVar33 * fVar32 + fVar3 * fVar13 + *pfVar19;
            fStack_b4 = fVar37 * fVar10 + fVar33 * fVar34 + fVar3 * fVar14 + pfVar19[1];
            fStack_b0 = fVar37 * fVar11 + fVar33 * fVar35 + fVar3 * fVar15 + pfVar19[2];
            fStack_ac = fVar37 * fVar12 + fVar33 * fVar36 + fVar3 * fVar16 + pfVar19[3];
            uStack_1c8 = CONCAT44(fStack_b4,fStack_b8);
            uStack_1c0 = CONCAT44(fStack_ac,fStack_b0);
            fStack_c8 = fStack_1d8;
            fStack_c4 = fStack_1d4;
            fStack_c0 = fStack_1d0;
            fStack_bc = fStack_1cc;
          }
        }
        else {
          uVar6 = *(uint *)(lVar21 + 0x1c + lVar27);
          puVar26 = (uint *)((longlong)(char)puVar23[1] * 0x100 +
                            *(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(lVar7 + 0x698) + (longlong)((int)uVar6 >> 10) * 8) +
                                8 + (longlong)(int)(*(uint *)(lVar7 + 0x6b8) & uVar6) * 0x30) + 0x18
                             ));
          do {
            LOCK();
            uVar6 = *puVar26;
            *puVar26 = *puVar26 | 1;
            UNLOCK();
          } while ((uVar6 & 1) != 0);
          uStack_188 = puVar26[1];
          uStack_184 = puVar26[2];
          uStack_180 = puVar26[3];
          uStack_17c = puVar26[4];
          fVar3 = (float)puVar26[5];
          fVar4 = (float)puVar26[6];
          fVar33 = (float)puVar26[7];
          uStack_16c = puVar26[8];
          *puVar26 = 0;
          fStack_178 = fVar3;
          fStack_174 = fVar4;
          fStack_170 = fVar33;
          uStack_a8 = uStack_188;
          uStack_a4 = uStack_184;
          uStack_a0 = uStack_180;
          uStack_9c = uStack_17c;
          fStack_98 = fVar3;
          fStack_94 = fVar4;
          fStack_90 = fVar33;
          uStack_8c = uStack_16c;
          FUN_18063b5f0(&fStack_1b8,&uStack_188);
          pfVar19 = (float *)(lVar8 + 8 + lVar22 * 0x48);
          fVar30 = *pfVar19;
          fVar5 = pfVar19[1];
          fVar37 = pfVar19[2];
          fVar31 = pfVar19[3];
          pfVar19 = (float *)(lVar8 + 0x18 + lVar22 * 0x48);
          fVar32 = *pfVar19;
          fVar34 = pfVar19[1];
          fVar35 = pfVar19[2];
          fVar36 = pfVar19[3];
          pfVar19 = (float *)(lVar8 + 0x28 + lVar22 * 0x48);
          fVar9 = *pfVar19;
          fVar10 = pfVar19[1];
          fVar11 = pfVar19[2];
          fVar12 = pfVar19[3];
          fStack_168 = fStack_1b8 * fVar30 + fStack_1b4 * fVar32 + fStack_1b0 * fVar9;
          fStack_164 = fStack_1b8 * fVar5 + fStack_1b4 * fVar34 + fStack_1b0 * fVar10;
          fStack_160 = fStack_1b8 * fVar37 + fStack_1b4 * fVar35 + fStack_1b0 * fVar11;
          fStack_15c = fStack_1b8 * fVar31 + fStack_1b4 * fVar36 + fStack_1b0 * fVar12;
          fStack_158 = fStack_1a8 * fVar30 + fStack_1a4 * fVar32 + fStack_1a0 * fVar9;
          fStack_154 = fStack_1a8 * fVar5 + fStack_1a4 * fVar34 + fStack_1a0 * fVar10;
          fStack_150 = fStack_1a8 * fVar37 + fStack_1a4 * fVar35 + fStack_1a0 * fVar11;
          fStack_14c = fStack_1a8 * fVar31 + fStack_1a4 * fVar36 + fStack_1a0 * fVar12;
          fStack_1d8 = fStack_198 * fVar30 + fStack_194 * fVar32 + fStack_190 * fVar9;
          fStack_1d4 = fStack_198 * fVar5 + fStack_194 * fVar34 + fStack_190 * fVar10;
          fStack_1d0 = fStack_198 * fVar37 + fStack_194 * fVar35 + fStack_190 * fVar11;
          fStack_1cc = fStack_198 * fVar31 + fStack_194 * fVar36 + fStack_190 * fVar12;
          pfVar19 = (float *)(lVar8 + 0x38 + lVar22 * 0x48);
          uStack_1f8 = CONCAT44(fStack_164,fStack_168);
          uStack_1f0 = CONCAT44(fStack_15c,fStack_160);
          uStack_1e8 = CONCAT44(fStack_154,fStack_158);
          uStack_1e0 = CONCAT44(fStack_14c,fStack_150);
          fStack_138 = fVar3 * fVar30 + fVar4 * fVar32 + fVar33 * fVar9 + *pfVar19;
          fStack_134 = fVar3 * fVar5 + fVar4 * fVar34 + fVar33 * fVar10 + pfVar19[1];
          fStack_130 = fVar3 * fVar37 + fVar4 * fVar35 + fVar33 * fVar11 + pfVar19[2];
          fStack_12c = fVar3 * fVar31 + fVar4 * fVar36 + fVar33 * fVar12 + pfVar19[3];
          uStack_1c8 = CONCAT44(fStack_134,fStack_138);
          uStack_1c0 = CONCAT44(fStack_12c,fStack_130);
          fStack_148 = fStack_1d8;
          fStack_144 = fStack_1d4;
          fStack_140 = fStack_1d0;
          fStack_13c = fStack_1cc;
          if (*(longlong **)(puVar23 + 2) != (longlong *)0x0) {
            pfVar19 = (float *)(**(code **)(**(longlong **)(puVar23 + 2) + 0x158))();
            fVar3 = pfVar19[1];
            fVar4 = *pfVar19;
            fVar33 = pfVar19[2];
            fVar30 = pfVar19[5];
            fVar5 = pfVar19[9];
            fVar37 = pfVar19[0xd];
            fVar34 = fVar37 * (float)uStack_1e8;
            fVar35 = fVar37 * uStack_1e8._4_4_;
            fVar36 = fVar37 * (float)uStack_1e0;
            fVar37 = fVar37 * uStack_1e0._4_4_;
            fVar31 = pfVar19[4];
            fStack_128 = fVar3 * (float)uStack_1e8 + fVar4 * (float)uStack_1f8 + fVar33 * fStack_1d8
            ;
            fStack_124 = fVar3 * uStack_1e8._4_4_ + fVar4 * uStack_1f8._4_4_ + fVar33 * fStack_1d4;
            fStack_120 = fVar3 * (float)uStack_1e0 + fVar4 * (float)uStack_1f0 + fVar33 * fStack_1d0
            ;
            fStack_11c = fVar3 * uStack_1e0._4_4_ + fVar4 * uStack_1f0._4_4_ + fVar33 * fStack_1cc;
            fVar3 = pfVar19[6];
            fVar4 = pfVar19[8];
            fStack_118 = fVar30 * (float)uStack_1e8 + fVar31 * (float)uStack_1f8 +
                         fVar3 * fStack_1d8;
            fStack_114 = fVar30 * uStack_1e8._4_4_ + fVar31 * uStack_1f8._4_4_ + fVar3 * fStack_1d4;
            fStack_110 = fVar30 * (float)uStack_1e0 + fVar31 * (float)uStack_1f0 +
                         fVar3 * fStack_1d0;
            fStack_10c = fVar30 * uStack_1e0._4_4_ + fVar31 * uStack_1f0._4_4_ + fVar3 * fStack_1cc;
            fVar3 = pfVar19[10];
            fVar33 = pfVar19[0xc];
            fVar30 = fVar33 * (float)uStack_1f8;
            fVar31 = fVar33 * uStack_1f8._4_4_;
            fVar32 = fVar33 * (float)uStack_1f0;
            fVar33 = fVar33 * uStack_1f0._4_4_;
            fStack_108 = fVar5 * (float)uStack_1e8 + fVar4 * (float)uStack_1f8 + fVar3 * fStack_1d8;
            fStack_104 = fVar5 * uStack_1e8._4_4_ + fVar4 * uStack_1f8._4_4_ + fVar3 * fStack_1d4;
            fStack_100 = fVar5 * (float)uStack_1e0 + fVar4 * (float)uStack_1f0 + fVar3 * fStack_1d0;
            fStack_fc = fVar5 * uStack_1e0._4_4_ + fVar4 * uStack_1f0._4_4_ + fVar3 * fStack_1cc;
            fVar3 = pfVar19[0xe];
            uStack_1f8 = CONCAT44(fStack_124,fStack_128);
            uStack_1f0 = CONCAT44(fStack_11c,fStack_120);
            uStack_1e8 = CONCAT44(fStack_114,fStack_118);
            uStack_1e0 = CONCAT44(fStack_10c,fStack_110);
            fStack_f8 = fVar34 + fVar30 + fVar3 * fStack_1d8 + (float)uStack_1c8;
            fStack_f4 = fVar35 + fVar31 + fVar3 * fStack_1d4 + uStack_1c8._4_4_;
            fStack_f0 = fVar36 + fVar32 + fVar3 * fStack_1d0 + (float)uStack_1c0;
            fStack_ec = fVar37 + fVar33 + fVar3 * fStack_1cc + uStack_1c0._4_4_;
            uStack_1c8 = CONCAT44(fStack_f4,fStack_f8);
            uStack_1c0 = CONCAT44(fStack_ec,fStack_f0);
            fStack_1d8 = fStack_108;
            fStack_1d4 = fStack_104;
            fStack_1d0 = fStack_100;
            fStack_1cc = fStack_fc;
          }
        }
        param_1 = plStack_200;
        (**(code **)(**(longlong **)(puVar23 + 4) + 0x1b8))
                  (*(longlong **)(puVar23 + 4),*(undefined4 *)plStack_200[1],&uStack_1f8);
        cVar17 = (**(code **)(**(longlong **)(puVar23 + 4) + 0x138))();
        param_3 = iStack_208;
        if (cVar17 != '\0') {
          lVar7 = *param_1;
          puVar23 = (uint *)(lVar7 + 0x6c0);
          LOCK();
          uVar6 = *puVar23;
          *puVar23 = *puVar23 + 1;
          UNLOCK();
          uVar18 = uVar6 >> 6;
          if (*(longlong *)(lVar7 + 0x6c8 + (ulonglong)uVar18 * 8) == 0) {
            lVar21 = FUN_18062b420(_DAT_180c8ed18,0x100,0x17);
            plVar2 = (longlong *)(lVar7 + 0x6c8 + (ulonglong)uVar18 * 8);
            LOCK();
            bVar29 = *plVar2 == 0;
            if (bVar29) {
              *plVar2 = lVar21;
            }
            UNLOCK();
            if ((!bVar29) && (lVar21 != 0)) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
          }
          *(int *)(*(longlong *)(lVar7 + 0x6c8 + (ulonglong)uVar18 * 8) +
                  (ulonglong)(uVar6 + uVar18 * -0x40) * 4) = iVar24;
          param_1 = plStack_200;
          param_3 = iStack_208;
        }
      }
      uVar25 = (ulonglong)(iVar24 + 1U);
      uVar28 = uVar28 + 1;
    } while ((int)(iVar24 + 1U) < param_3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




