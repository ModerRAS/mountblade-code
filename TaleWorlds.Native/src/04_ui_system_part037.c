#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part037.c - 3 个函数

// 函数: void FUN_1806755af(longlong param_1,longlong param_2)
void FUN_1806755af(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined2 uVar14;
  undefined6 uVar15;
  undefined1 auVar16 [12];
  int in_EAX;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong unaff_RBX;
  longlong lVar20;
  uint uVar21;
  longlong in_R10;
  longlong in_R11;
  undefined4 *puVar22;
  longlong unaff_R12;
  short sVar23;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  undefined1 auVar24 [16];
  short sVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined2 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  longlong unaff_retaddr;
  undefined4 uStackX_10;
  undefined4 uStackX_14;
  undefined4 uStackX_18;
  undefined4 uStackX_1c;
  ulonglong uStackX_20;
  longlong in_stack_00000090;
  uint in_stack_00000098;
  int in_stack_000000a0;
  int in_stack_000000a8;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  param_2 = param_2 * 4;
  uVar18 = (ulonglong)((in_EAX - 1U >> 2) + 1);
  do {
    if (0 < param_1) {
      puVar22 = (undefined4 *)(in_R11 + unaff_R12 * 2);
      lVar20 = (param_1 - 1U >> 2) + 1;
      uVar21 = in_stack_00000098;
      do {
        lVar19 = 0;
        do {
          puVar17 = (ulonglong *)(((longlong)(int)uVar21 >> 4) + unaff_RBX);
          if ((uVar21 & 0xf) == 0) {
            *(undefined1 *)(&uStackX_10 + lVar19) = *(undefined1 *)((longlong)puVar17 + 3);
            *(undefined1 *)((longlong)&uStackX_10 + lVar19 * 4 + 1) =
                 *(undefined1 *)((longlong)puVar17 + in_R10 + 3);
            *(undefined1 *)((longlong)&uStackX_10 + lVar19 * 4 + 2) =
                 *(undefined1 *)((longlong)puVar17 + in_R10 * 2 + 3);
            *(undefined1 *)((longlong)&uStackX_10 + lVar19 * 4 + 3) =
                 *(undefined1 *)(in_R10 * 3 + 3 + (longlong)puVar17);
          }
          else {
            uVar1 = *(undefined8 *)((longlong)puVar17 + in_R10);
            uVar2 = *puVar17;
            uVar3 = *(ulonglong *)((longlong)puVar17 + in_R10 * 2);
            auVar45._8_4_ = 0;
            auVar45._0_8_ = uVar2;
            auVar45._12_2_ = (short)(uVar2 >> 0x30);
            auVar45._14_2_ = (short)((ulonglong)uVar1 >> 0x30);
            auVar44._12_4_ = auVar45._12_4_;
            auVar44._8_2_ = 0;
            auVar44._0_8_ = uVar2;
            auVar44._10_2_ = (short)((ulonglong)uVar1 >> 0x20);
            auVar43._10_6_ = auVar44._10_6_;
            auVar43._8_2_ = (short)(uVar2 >> 0x20);
            auVar43._0_8_ = uVar2;
            auVar12._4_8_ = auVar43._8_8_;
            auVar12._2_2_ = (short)((ulonglong)uVar1 >> 0x10);
            auVar12._0_2_ = (short)(uVar2 >> 0x10);
            auVar42._0_4_ = CONCAT22((short)uVar1,(short)uVar2);
            auVar42._4_12_ = auVar12;
            uVar1 = *(undefined8 *)(in_R10 * 3 + (longlong)puVar17);
            auVar41 = *(undefined1 (*) [16])(in_stack_00000090 + (ulonglong)(uVar21 & 0xf) * 0x10);
            auVar24._8_4_ = 0;
            auVar24._0_8_ = uVar3;
            auVar24._12_2_ = (short)(uVar3 >> 0x30);
            auVar24._14_2_ = (short)((ulonglong)uVar1 >> 0x30);
            auVar40._12_4_ = auVar24._12_4_;
            auVar40._8_2_ = 0;
            auVar40._0_8_ = uVar3;
            auVar40._10_2_ = (short)((ulonglong)uVar1 >> 0x20);
            auVar32._10_6_ = auVar40._10_6_;
            auVar32._8_2_ = (short)(uVar3 >> 0x20);
            auVar32._0_8_ = uVar3;
            auVar13._4_8_ = auVar32._8_8_;
            auVar13._2_2_ = (short)((ulonglong)uVar1 >> 0x10);
            auVar13._0_2_ = (short)(uVar3 >> 0x10);
            auVar35._6_2_ = (short)uVar1;
            auVar35._4_2_ = (short)uVar3;
            auVar24 = pshufb(auVar41,_DAT_180946f70);
            auVar46._4_4_ = auVar32._8_4_;
            auVar46._0_4_ = auVar43._8_4_;
            auVar46._8_4_ = auVar44._12_4_;
            auVar46._12_4_ = auVar40._12_4_;
            auVar47._0_8_ = auVar42._0_8_;
            auVar47._8_4_ = auVar12._0_4_;
            auVar47._12_4_ = auVar13._0_4_;
            auVar35._8_8_ = auVar47._8_8_;
            auVar35._0_4_ = auVar42._0_4_;
            auVar39._8_8_ = 0;
            auVar39._0_8_ = auVar35._8_8_;
            auVar40 = pmaddubsw(auVar39,auVar24);
            auVar24 = pshufb(auVar41,_DAT_180946f90);
            auVar32 = pmaddubsw(auVar46,auVar24);
            auVar24 = pshufb(auVar41,_DAT_180946fa0);
            auVar41 = pshufb(auVar41,_DAT_180946f40);
            auVar47 = pmaddubsw(auVar46 >> 0x40,auVar24);
            auVar24 = pmaddubsw(auVar35,auVar41);
            sVar4 = auVar40._0_2_;
            sVar23 = auVar32._0_2_;
            auVar41._0_2_ = (ushort)(sVar4 < sVar23) * sVar4 | (ushort)(sVar4 >= sVar23) * sVar23;
            sVar5 = auVar40._2_2_;
            sVar25 = auVar32._2_2_;
            auVar41._2_2_ = (ushort)(sVar5 < sVar25) * sVar5 | (ushort)(sVar5 >= sVar25) * sVar25;
            sVar6 = auVar40._4_2_;
            sVar26 = auVar32._4_2_;
            auVar41._4_2_ = (ushort)(sVar6 < sVar26) * sVar6 | (ushort)(sVar6 >= sVar26) * sVar26;
            sVar7 = auVar40._6_2_;
            sVar27 = auVar32._6_2_;
            auVar41._6_2_ = (ushort)(sVar7 < sVar27) * sVar7 | (ushort)(sVar7 >= sVar27) * sVar27;
            sVar8 = auVar40._8_2_;
            sVar28 = auVar32._8_2_;
            auVar41._8_2_ = (ushort)(sVar8 < sVar28) * sVar8 | (ushort)(sVar8 >= sVar28) * sVar28;
            sVar9 = auVar40._10_2_;
            sVar29 = auVar32._10_2_;
            auVar41._10_2_ = (ushort)(sVar9 < sVar29) * sVar9 | (ushort)(sVar9 >= sVar29) * sVar29;
            sVar10 = auVar40._12_2_;
            sVar30 = auVar32._12_2_;
            sVar31 = auVar32._14_2_;
            auVar41._12_2_ =
                 (ushort)(sVar10 < sVar30) * sVar10 | (ushort)(sVar10 >= sVar30) * sVar30;
            sVar11 = auVar40._14_2_;
            auVar41._14_2_ =
                 (ushort)(sVar11 < sVar31) * sVar11 | (ushort)(sVar11 >= sVar31) * sVar31;
            auVar33._0_2_ = (ushort)(sVar23 < sVar4) * sVar4 | (ushort)(sVar23 >= sVar4) * sVar23;
            auVar33._2_2_ = (ushort)(sVar25 < sVar5) * sVar5 | (ushort)(sVar25 >= sVar5) * sVar25;
            auVar33._4_2_ = (ushort)(sVar26 < sVar6) * sVar6 | (ushort)(sVar26 >= sVar6) * sVar26;
            auVar33._6_2_ = (ushort)(sVar27 < sVar7) * sVar7 | (ushort)(sVar27 >= sVar7) * sVar27;
            auVar33._8_2_ = (ushort)(sVar28 < sVar8) * sVar8 | (ushort)(sVar28 >= sVar8) * sVar28;
            auVar33._10_2_ = (ushort)(sVar29 < sVar9) * sVar9 | (ushort)(sVar29 >= sVar9) * sVar29;
            auVar33._12_2_ =
                 (ushort)(sVar30 < sVar10) * sVar10 | (ushort)(sVar30 >= sVar10) * sVar30;
            auVar33._14_2_ =
                 (ushort)(sVar31 < sVar11) * sVar11 | (ushort)(sVar31 >= sVar11) * sVar31;
            auVar24 = paddsw(auVar47,auVar24);
            auVar41 = paddsw(auVar24,auVar41);
            auVar41 = paddsw(auVar41,auVar33);
            auVar41 = pmulhrsw(auVar41,_DAT_180946f30);
            sVar4 = auVar41._0_2_;
            sVar5 = auVar41._2_2_;
            sVar6 = auVar41._4_2_;
            sVar7 = auVar41._6_2_;
            (&uStackX_10)[lVar19] =
                 CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar41[6] - (0xff < sVar7),
                          CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar41[4] - (0xff < sVar6),
                                   CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar41[2] -
                                            (0xff < sVar5),
                                            (0 < sVar4) * (sVar4 < 0x100) * auVar41[0] -
                                            (0xff < sVar4))));
          }
          uVar21 = uVar21 + in_stack_000000a0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < 4);
        uVar14 = CONCAT11((char)((uint)uStackX_14 >> 0x18),(char)((uint)uStackX_10 >> 0x18));
        uVar1 = CONCAT35(CONCAT21(uVar14,(char)((uint)uStackX_14 >> 0x10)),
                         CONCAT14((char)((uint)uStackX_10 >> 0x10),uStackX_10));
        uVar15 = CONCAT51(CONCAT41((int)((ulonglong)uVar1 >> 0x20),(char)((uint)uStackX_14 >> 8)),
                          (char)((uint)uStackX_10 >> 8));
        uVar34 = CONCAT11((char)uStackX_14,(char)uStackX_10);
        uVar2 = CONCAT62(uVar15,uVar34);
        auVar38[0xf] = (char)((uint)uStackX_1c >> 0x18);
        auVar38[0xe] = (char)((uint)uStackX_18 >> 0x18);
        auVar16[3] = (char)((uint)uStackX_1c >> 8);
        auVar16[2] = (char)((uint)uStackX_18 >> 8);
        auVar38._8_4_ = 0;
        auVar38._0_8_ = uVar2;
        auVar38._12_2_ = uVar14;
        auVar37._12_4_ = auVar38._12_4_;
        auVar37._8_2_ = 0;
        auVar37._0_8_ = uVar2;
        auVar37._10_2_ =
             (short)(CONCAT15((char)((uint)uStackX_1c >> 0x10),
                              CONCAT14((char)((uint)uStackX_18 >> 0x10),uStackX_18)) >> 0x20);
        auVar36._10_6_ = auVar37._10_6_;
        auVar36._8_2_ = (short)((ulonglong)uVar1 >> 0x20);
        auVar36._0_8_ = uVar2;
        auVar16._4_8_ = auVar36._8_8_;
        auVar16._0_2_ = (short)uVar15;
        *(uint *)(unaff_R12 * -2 + (longlong)puVar22) =
             CONCAT22(CONCAT11((char)uStackX_1c,(char)uStackX_18),uVar34);
        *(int *)((longlong)puVar22 - unaff_R12) = auVar16._0_4_;
        *puVar22 = auVar36._8_4_;
        *(undefined4 *)(unaff_R12 + (longlong)puVar22) = auVar37._12_4_;
        puVar22 = puVar22 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      param_2 = in_R10 * 4;
      param_1 = (longlong)in_stack_000000a8;
      in_R11 = unaff_retaddr;
    }
    unaff_RBX = unaff_RBX + param_2;
    in_R11 = in_R11 + unaff_R12 * 4;
    uVar18 = uVar18 - 1;
    unaff_retaddr = in_R11;
  } while (uVar18 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStackX_20 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1806757f1(void)
void FUN_1806757f1(void)

{
  undefined8 uStackX_20;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStackX_20 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180675810(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180675810(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint param_6,int param_7,int param_8,uint param_9)

{
  undefined1 uVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [12];
  unkbyte10 Var7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [12];
  unkbyte10 Var10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined1 auVar43 [16];
  undefined1 auVar52 [16];
  undefined4 uVar56;
  undefined1 auVar58 [16];
  undefined1 auStack_108 [32];
  undefined4 *puStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar42 [12];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar57 [12];
  undefined1 auVar66 [16];
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  param_1 = param_1 + -3;
  lVar17 = param_2 * 8;
  iVar16 = (param_9 - (param_9 & 7)) + 8;
  lStack_a0 = param_4 * 8;
  lVar19 = param_4 * 8;
  lStack_d8 = param_3;
  lStack_a8 = param_4;
  do {
    if (0 < param_8) {
      puStack_e8 = (undefined4 *)(param_4 * 2 + lStack_d8);
      lStack_c0 = param_4 * 2;
      lStack_b8 = param_4 * 3;
      lStack_b0 = param_4 * 5;
      uStack_e0 = (ulonglong)((param_8 - 1U >> 3) + 1);
      uVar18 = param_6;
      lStack_d0 = -param_4;
      lStack_c8 = param_4;
      do {
        puVar21 = (undefined1 *)((longlong)&uStack_98 + 1);
        lVar19 = 8;
        puVar20 = &uStack_98;
        do {
          lVar17 = ((longlong)(int)uVar18 >> 4) + param_1;
          if ((uVar18 & 0xf) == 0) {
            puVar21[-1] = *(undefined1 *)(lVar17 + 3);
            *puVar21 = *(undefined1 *)(param_2 + 3 + lVar17);
            puVar21[1] = *(undefined1 *)(lVar17 + 3 + param_2 * 2);
            uVar1 = *(undefined1 *)(param_2 * 3 + 3 + lVar17);
            puVar21[3] = *(undefined1 *)(lVar17 + 3 + param_2 * 4);
            puVar21[2] = uVar1;
            puVar21[4] = *(undefined1 *)(param_2 * 5 + 3 + lVar17);
            puVar21[5] = *(undefined1 *)(lVar17 + 3 + param_2 * 6);
            puVar21[6] = *(undefined1 *)(param_2 * 7 + 3 + lVar17);
          }
          else {
            FUN_180675320(lVar17,param_2,puVar20,(ulonglong)(uVar18 & 0xf) * 0x10 + param_5);
          }
          uVar18 = uVar18 + param_7;
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        auVar65._8_6_ = 0;
        auVar65._0_8_ = uStack_98;
        auVar65[0xe] = (char)(uStack_98 >> 0x38);
        auVar65[0xf] = (char)((ulonglong)uStack_90 >> 0x38);
        auVar64._14_2_ = auVar65._14_2_;
        auVar64._8_5_ = 0;
        auVar64._0_8_ = uStack_98;
        auVar64[0xd] = (char)((ulonglong)uStack_90 >> 0x30);
        auVar63._13_3_ = auVar64._13_3_;
        auVar63._8_4_ = 0;
        auVar63._0_8_ = uStack_98;
        auVar63[0xc] = (char)(uStack_98 >> 0x30);
        auVar62._12_4_ = auVar63._12_4_;
        auVar62._8_3_ = 0;
        auVar62._0_8_ = uStack_98;
        auVar62[0xb] = (char)((ulonglong)uStack_90 >> 0x28);
        auVar61._11_5_ = auVar62._11_5_;
        auVar61._8_2_ = 0;
        auVar61._0_8_ = uStack_98;
        auVar61[10] = (char)(uStack_98 >> 0x28);
        auVar60._10_6_ = auVar61._10_6_;
        auVar60[8] = 0;
        auVar60._0_8_ = uStack_98;
        auVar60[9] = (char)((ulonglong)uStack_90 >> 0x20);
        auVar59._9_7_ = auVar60._9_7_;
        auVar59[8] = (char)(uStack_98 >> 0x20);
        auVar59._0_8_ = uStack_98;
        Var4 = CONCAT91(CONCAT81(auVar59._8_8_,(char)((ulonglong)uStack_90 >> 0x18)),
                        (char)(uStack_98 >> 0x18));
        auVar3._2_10_ = Var4;
        auVar3[1] = (char)((ulonglong)uStack_90 >> 0x10);
        auVar3[0] = (char)(uStack_98 >> 0x10);
        auVar2._2_12_ = auVar3;
        auVar2[1] = (char)((ulonglong)uStack_90 >> 8);
        auVar2[0] = (char)(uStack_98 >> 8);
        auVar58._0_2_ = CONCAT11((char)uStack_90,(char)uStack_98);
        auVar58._2_14_ = auVar2;
        auVar39._8_6_ = 0;
        auVar39._0_8_ = uStack_88;
        auVar39[0xe] = (char)(uStack_88 >> 0x38);
        auVar39[0xf] = (char)((ulonglong)uStack_80 >> 0x38);
        auVar38._14_2_ = auVar39._14_2_;
        auVar38._8_5_ = 0;
        auVar38._0_8_ = uStack_88;
        auVar38[0xd] = (char)((ulonglong)uStack_80 >> 0x30);
        auVar37._13_3_ = auVar38._13_3_;
        auVar37._8_4_ = 0;
        auVar37._0_8_ = uStack_88;
        auVar37[0xc] = (char)(uStack_88 >> 0x30);
        auVar36._12_4_ = auVar37._12_4_;
        auVar36._8_3_ = 0;
        auVar36._0_8_ = uStack_88;
        auVar36[0xb] = (char)((ulonglong)uStack_80 >> 0x28);
        auVar35._11_5_ = auVar36._11_5_;
        auVar35._8_2_ = 0;
        auVar35._0_8_ = uStack_88;
        auVar35[10] = (char)(uStack_88 >> 0x28);
        auVar34._10_6_ = auVar35._10_6_;
        auVar34[8] = 0;
        auVar34._0_8_ = uStack_88;
        auVar34[9] = (char)((ulonglong)uStack_80 >> 0x20);
        auVar33._9_7_ = auVar34._9_7_;
        auVar33[8] = (char)(uStack_88 >> 0x20);
        auVar33._0_8_ = uStack_88;
        Var7 = CONCAT91(CONCAT81(auVar33._8_8_,(char)((ulonglong)uStack_80 >> 0x18)),
                        (char)(uStack_88 >> 0x18));
        auVar6._2_10_ = Var7;
        auVar6[1] = (char)((ulonglong)uStack_80 >> 0x10);
        auVar6[0] = (char)(uStack_88 >> 0x10);
        auVar5._2_12_ = auVar6;
        auVar5[1] = (char)((ulonglong)uStack_80 >> 8);
        auVar5[0] = (char)(uStack_88 >> 8);
        auVar50._8_6_ = 0;
        auVar50._0_8_ = uStack_78;
        auVar50[0xe] = (char)(uStack_78 >> 0x38);
        auVar50[0xf] = (char)((ulonglong)uStack_70 >> 0x38);
        auVar49._14_2_ = auVar50._14_2_;
        auVar49._8_5_ = 0;
        auVar49._0_8_ = uStack_78;
        auVar49[0xd] = (char)((ulonglong)uStack_70 >> 0x30);
        auVar48._13_3_ = auVar49._13_3_;
        auVar48._8_4_ = 0;
        auVar48._0_8_ = uStack_78;
        auVar48[0xc] = (char)(uStack_78 >> 0x30);
        auVar47._12_4_ = auVar48._12_4_;
        auVar47._8_3_ = 0;
        auVar47._0_8_ = uStack_78;
        auVar47[0xb] = (char)((ulonglong)uStack_70 >> 0x28);
        auVar46._11_5_ = auVar47._11_5_;
        auVar46._8_2_ = 0;
        auVar46._0_8_ = uStack_78;
        auVar46[10] = (char)(uStack_78 >> 0x28);
        auVar45._10_6_ = auVar46._10_6_;
        auVar45[8] = 0;
        auVar45._0_8_ = uStack_78;
        auVar45[9] = (char)((ulonglong)uStack_70 >> 0x20);
        auVar44._9_7_ = auVar45._9_7_;
        auVar44[8] = (char)(uStack_78 >> 0x20);
        auVar44._0_8_ = uStack_78;
        Var10 = CONCAT91(CONCAT81(auVar44._8_8_,(char)((ulonglong)uStack_70 >> 0x18)),
                         (char)(uStack_78 >> 0x18));
        auVar9._2_10_ = Var10;
        auVar9[1] = (char)((ulonglong)uStack_70 >> 0x10);
        auVar9[0] = (char)(uStack_78 >> 0x10);
        auVar8._2_12_ = auVar9;
        auVar8[1] = (char)((ulonglong)uStack_70 >> 8);
        auVar8[0] = (char)(uStack_78 >> 8);
        auVar43._0_2_ = CONCAT11((char)uStack_70,(char)uStack_78);
        auVar43._2_14_ = auVar8;
        auVar31._8_6_ = 0;
        auVar31._0_8_ = uStack_68;
        auVar31[0xe] = (char)(uStack_68 >> 0x38);
        auVar31[0xf] = (char)((ulonglong)uStack_60 >> 0x38);
        auVar30._14_2_ = auVar31._14_2_;
        auVar30._8_5_ = 0;
        auVar30._0_8_ = uStack_68;
        auVar30[0xd] = (char)((ulonglong)uStack_60 >> 0x30);
        auVar29._13_3_ = auVar30._13_3_;
        auVar29._8_4_ = 0;
        auVar29._0_8_ = uStack_68;
        auVar29[0xc] = (char)(uStack_68 >> 0x30);
        auVar28._12_4_ = auVar29._12_4_;
        auVar28._8_3_ = 0;
        auVar28._0_8_ = uStack_68;
        auVar28[0xb] = (char)((ulonglong)uStack_60 >> 0x28);
        auVar27._11_5_ = auVar28._11_5_;
        auVar27._8_2_ = 0;
        auVar27._0_8_ = uStack_68;
        auVar27[10] = (char)(uStack_68 >> 0x28);
        auVar26._10_6_ = auVar27._10_6_;
        auVar26[8] = 0;
        auVar26._0_8_ = uStack_68;
        auVar26[9] = (char)((ulonglong)uStack_60 >> 0x20);
        auVar25._9_7_ = auVar26._9_7_;
        auVar25[8] = (char)(uStack_68 >> 0x20);
        auVar25._0_8_ = uStack_68;
        Var13 = CONCAT91(CONCAT81(auVar25._8_8_,(char)((ulonglong)uStack_60 >> 0x18)),
                         (char)(uStack_68 >> 0x18));
        auVar12._2_10_ = Var13;
        auVar12[1] = (char)((ulonglong)uStack_60 >> 0x10);
        auVar12[0] = (char)(uStack_68 >> 0x10);
        auVar11._2_12_ = auVar12;
        auVar11[1] = (char)((ulonglong)uStack_60 >> 8);
        auVar11[0] = (char)(uStack_68 >> 8);
        auVar24._0_12_ = auVar43._0_12_;
        auVar24._12_2_ = (short)Var10;
        auVar24._14_2_ = (short)Var13;
        auVar23._12_4_ = auVar24._12_4_;
        auVar23._0_10_ = auVar43._0_10_;
        auVar23._10_2_ = auVar12._0_2_;
        auVar22._10_6_ = auVar23._10_6_;
        auVar22._0_8_ = auVar43._0_8_;
        auVar22._8_2_ = auVar9._0_2_;
        auVar14._4_8_ = auVar22._8_8_;
        auVar14._2_2_ = auVar11._0_2_;
        auVar14._0_2_ = auVar8._0_2_;
        auVar55._0_12_ = auVar58._0_12_;
        auVar55._12_2_ = (short)Var4;
        auVar55._14_2_ = (short)Var7;
        auVar54._12_4_ = auVar55._12_4_;
        auVar54._0_10_ = auVar58._0_10_;
        auVar54._10_2_ = auVar6._0_2_;
        auVar53._10_6_ = auVar54._10_6_;
        auVar53._0_8_ = auVar58._0_8_;
        auVar53._8_2_ = auVar3._0_2_;
        auVar15._4_8_ = auVar53._8_8_;
        auVar15._2_2_ = auVar5._0_2_;
        auVar15._0_2_ = auVar2._0_2_;
        auVar52._0_4_ = CONCAT22(CONCAT11((char)uStack_80,(char)uStack_88),auVar58._0_2_);
        auVar52._4_12_ = auVar15;
        uVar41 = CONCAT22(auVar25._8_2_,auVar44._8_2_);
        auVar42._0_8_ = CONCAT26(auVar27._10_2_,CONCAT24(auVar46._10_2_,uVar41));
        auVar42._8_2_ = auVar48._12_2_;
        auVar42._10_2_ = auVar29._12_2_;
        auVar51._12_2_ = auVar49._14_2_;
        auVar51._0_12_ = auVar42;
        auVar51._14_2_ = auVar30._14_2_;
        auVar32._0_8_ = auVar52._0_8_;
        auVar32._8_4_ = auVar15._0_4_;
        auVar32._12_4_ = auVar14._0_4_;
        *(ulonglong *)((longlong)puStack_e8 + param_4 * -2) =
             CONCAT44(CONCAT22(CONCAT11((char)uStack_60,(char)uStack_68),auVar43._0_2_),
                      auVar52._0_4_);
        uVar56 = CONCAT22(auVar33._8_2_,auVar59._8_2_);
        auVar57._0_8_ = CONCAT26(auVar35._10_2_,CONCAT24(auVar61._10_2_,uVar56));
        auVar57._8_2_ = auVar63._12_2_;
        auVar57._10_2_ = auVar37._12_2_;
        auVar66._12_2_ = auVar64._14_2_;
        auVar66._0_12_ = auVar57;
        auVar66._14_2_ = auVar38._14_2_;
        *(longlong *)(-param_4 + (longlong)puStack_e8) = auVar32._8_8_;
        *puStack_e8 = auVar53._8_4_;
        puStack_e8[1] = auVar22._8_4_;
        auVar40._8_4_ = (int)((ulonglong)auVar57._0_8_ >> 0x20);
        auVar40._0_8_ = auVar57._0_8_;
        auVar40._12_4_ = (int)((ulonglong)auVar42._0_8_ >> 0x20);
        *(undefined4 *)((longlong)puStack_e8 + lStack_c8 + 8) = auVar54._12_4_;
        *(undefined4 *)((longlong)puStack_e8 + lStack_c8 + 0xc) = auVar23._12_4_;
        *(ulonglong *)(lStack_c0 + (longlong)puStack_e8) = CONCAT44(uVar41,uVar56);
        *(longlong *)(lStack_b8 + (longlong)puStack_e8) = auVar40._8_8_;
        puStack_e8[param_4] = auVar57._8_4_;
        (puStack_e8 + param_4)[1] = auVar42._8_4_;
        *(int *)((longlong)puStack_e8 + lStack_b0 + 8) = auVar66._12_4_;
        *(int *)((longlong)puStack_e8 + lStack_b0 + 0xc) = auVar51._12_4_;
        puStack_e8 = puStack_e8 + 2;
        uStack_e0 = uStack_e0 - 1;
      } while (uStack_e0 != 0);
      lVar17 = param_2 * 8;
      uStack_e0 = 0;
      lVar19 = lStack_a0;
      param_4 = lStack_a8;
    }
    lStack_d8 = lStack_d8 + lVar19;
    param_1 = param_1 + lVar17;
    iVar16 = iVar16 + -8;
  } while (iVar16 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



