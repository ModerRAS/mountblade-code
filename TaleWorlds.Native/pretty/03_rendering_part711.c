#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part711.c - 3 个函数

// 函数: void FUN_180675e28(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_180675e28(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  uint in_EAX;
  int32_t *puVar13;
  uint unaff_EBX;
  ulonglong uVar14;
  int32_t *unaff_RSI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  short sVar15;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  int8_t auVar16 [16];
  short sVar23;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  longlong in_stack_00000070;
  int in_stack_00000080;
  int in_stack_00000088;
  
  uVar14 = (ulonglong)in_EAX;
  do {
    puVar13 = (int32_t *)(((longlong)(int)unaff_EBX >> 4) * unaff_R14 + unaff_R12);
    if ((unaff_EBX & 0xf) == 0) {
                    // WARNING: Subroutine does not return
      memcpy(param_3,(longlong)puVar13 + unaff_R13,(longlong)in_stack_00000088);
    }
    uVar1 = *(int32_t *)((longlong)puVar13 + unaff_R13);
    uVar2 = *(int32_t *)((longlong)puVar13 + unaff_R14 * 2);
    uVar3 = puVar13[unaff_R14];
    uVar4 = *puVar13;
    auVar27._4_4_ =
         (int)(CONCAT35(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18),(char)((uint)uVar2 >> 0x18)),
                                 (char)((uint)uVar1 >> 0x10)),
                        CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20);
    auVar27[3] = (char)((uint)uVar1 >> 8);
    auVar27[2] = (char)((uint)uVar2 >> 8);
    auVar27[0] = (int8_t)uVar2;
    auVar27[1] = (char)uVar1;
    auVar27._8_8_ = 0;
    auVar25 = *(int8_t (*) [16])((ulonglong)(unaff_EBX & 0xf) * 0x10 + in_stack_00000070);
    auVar16 = pshufb(auVar25,_DAT_180946f70);
    auVar28 = pmaddubsw(auVar27,auVar16);
    uVar1 = *(int32_t *)((longlong)puVar13 + unaff_R14 * 5);
    uVar2 = *(int32_t *)((longlong)puVar13 + unaff_R14 * 6);
    auVar26._4_4_ =
         (int)(CONCAT35(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18),(char)((uint)uVar3 >> 0x18)),
                                 (char)((uint)uVar1 >> 0x10)),
                        CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >> 0x20);
    auVar26[3] = (char)((uint)uVar1 >> 8);
    auVar26[2] = (char)((uint)uVar3 >> 8);
    auVar26[0] = (int8_t)uVar3;
    auVar26[1] = (char)uVar1;
    auVar26._8_8_ = 0;
    auVar16 = pshufb(auVar25,_DAT_180946f90);
    auVar26 = pmaddubsw(auVar26,auVar16);
    uVar1 = *(int32_t *)(unaff_R14 * 7 + (longlong)puVar13);
    auVar24._4_4_ =
         (int)(CONCAT35(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18),(char)((uint)uVar2 >> 0x18)),
                                 (char)((uint)uVar1 >> 0x10)),
                        CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >> 0x20);
    auVar24[3] = (char)((uint)uVar1 >> 8);
    auVar24[2] = (char)((uint)uVar2 >> 8);
    auVar24[0] = (int8_t)uVar2;
    auVar24[1] = (char)uVar1;
    auVar24._8_8_ = 0;
    auVar16 = pshufb(auVar25,_DAT_180946fa0);
    auVar25 = pshufb(auVar25,_DAT_180946f40);
    auVar24 = pmaddubsw(auVar24,auVar16);
    uVar1 = *(int32_t *)((longlong)puVar13 + unaff_R14);
    auVar16._4_4_ =
         (int)(CONCAT35(CONCAT21(CONCAT11((char)((uint)uVar1 >> 0x18),(char)((uint)uVar4 >> 0x18)),
                                 (char)((uint)uVar1 >> 0x10)),
                        CONCAT14((char)((uint)uVar4 >> 0x10),uVar4)) >> 0x20);
    auVar16[3] = (char)((uint)uVar1 >> 8);
    auVar16[2] = (char)((uint)uVar4 >> 8);
    auVar16[0] = (int8_t)uVar4;
    auVar16[1] = (char)uVar1;
    auVar16._8_8_ = 0;
    auVar16 = pmaddubsw(auVar16,auVar25);
    sVar5 = auVar28._0_2_;
    sVar15 = auVar26._0_2_;
    auVar25._0_2_ = (ushort)(sVar5 < sVar15) * sVar5 | (ushort)(sVar5 >= sVar15) * sVar15;
    sVar6 = auVar28._2_2_;
    sVar17 = auVar26._2_2_;
    auVar25._2_2_ = (ushort)(sVar6 < sVar17) * sVar6 | (ushort)(sVar6 >= sVar17) * sVar17;
    sVar7 = auVar28._4_2_;
    sVar18 = auVar26._4_2_;
    auVar25._4_2_ = (ushort)(sVar7 < sVar18) * sVar7 | (ushort)(sVar7 >= sVar18) * sVar18;
    sVar8 = auVar28._6_2_;
    sVar19 = auVar26._6_2_;
    auVar25._6_2_ = (ushort)(sVar8 < sVar19) * sVar8 | (ushort)(sVar8 >= sVar19) * sVar19;
    sVar9 = auVar28._8_2_;
    sVar20 = auVar26._8_2_;
    auVar25._8_2_ = (ushort)(sVar9 < sVar20) * sVar9 | (ushort)(sVar9 >= sVar20) * sVar20;
    sVar10 = auVar28._10_2_;
    sVar21 = auVar26._10_2_;
    auVar25._10_2_ = (ushort)(sVar10 < sVar21) * sVar10 | (ushort)(sVar10 >= sVar21) * sVar21;
    sVar11 = auVar28._12_2_;
    sVar22 = auVar26._12_2_;
    sVar23 = auVar26._14_2_;
    auVar25._12_2_ = (ushort)(sVar11 < sVar22) * sVar11 | (ushort)(sVar11 >= sVar22) * sVar22;
    sVar12 = auVar28._14_2_;
    auVar25._14_2_ = (ushort)(sVar12 < sVar23) * sVar12 | (ushort)(sVar12 >= sVar23) * sVar23;
    auVar28._0_2_ = (ushort)(sVar15 < sVar5) * sVar5 | (ushort)(sVar15 >= sVar5) * sVar15;
    auVar28._2_2_ = (ushort)(sVar17 < sVar6) * sVar6 | (ushort)(sVar17 >= sVar6) * sVar17;
    auVar28._4_2_ = (ushort)(sVar18 < sVar7) * sVar7 | (ushort)(sVar18 >= sVar7) * sVar18;
    auVar28._6_2_ = (ushort)(sVar19 < sVar8) * sVar8 | (ushort)(sVar19 >= sVar8) * sVar19;
    auVar28._8_2_ = (ushort)(sVar20 < sVar9) * sVar9 | (ushort)(sVar20 >= sVar9) * sVar20;
    auVar28._10_2_ = (ushort)(sVar21 < sVar10) * sVar10 | (ushort)(sVar21 >= sVar10) * sVar21;
    auVar28._12_2_ = (ushort)(sVar22 < sVar11) * sVar11 | (ushort)(sVar22 >= sVar11) * sVar22;
    auVar28._14_2_ = (ushort)(sVar23 < sVar12) * sVar12 | (ushort)(sVar23 >= sVar12) * sVar23;
    auVar16 = paddsw(auVar24,auVar16);
    auVar25 = paddsw(auVar16,auVar25);
    auVar25 = paddsw(auVar25,auVar28);
    auVar25 = pmulhrsw(auVar25,_DAT_180946f30);
    sVar5 = auVar25._0_2_;
    sVar6 = auVar25._2_2_;
    sVar7 = auVar25._4_2_;
    sVar8 = auVar25._6_2_;
    *unaff_RSI = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar25[6] - (0xff < sVar8),
                          CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar25[4] - (0xff < sVar7),
                                   CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar25[2] -
                                            (0xff < sVar6),
                                            (0 < sVar5) * (sVar5 < 0x100) * auVar25[0] -
                                            (0xff < sVar5))));
    unaff_EBX = unaff_EBX + in_stack_00000080;
    param_3 = param_3 + unaff_R15;
    unaff_RSI = (int32_t *)((longlong)unaff_RSI + unaff_R15);
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  return;
}





// 函数: void FUN_180675f56(void)
void FUN_180675f56(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180675f70(longlong param_1,longlong param_2,uint64_t *param_3,longlong param_4,
void FUN_180675f70(longlong param_1,longlong param_2,uint64_t *param_3,longlong param_4,
                  longlong param_5,uint param_6,int param_7,int param_8,uint param_9)

{
  uint64_t uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  short sVar15;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  int8_t auVar16 [16];
  short sVar23;
  int8_t auVar24 [16];
  int8_t auVar31 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t auVar56 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  int8_t auVar53 [16];
  int8_t auVar54 [16];
  int8_t auVar55 [16];
  
  if (0 < (int)param_9) {
    uVar14 = (ulonglong)param_9;
    do {
      puVar13 = (ulonglong *)(((longlong)(int)param_6 >> 4) * param_2 + param_1 + param_2 * -3);
      if ((param_6 & 0xf) == 0) {
                    // WARNING: Subroutine does not return
        memcpy(param_3,param_2 * 3 + (longlong)puVar13,(longlong)param_8);
      }
      uVar1 = *(uint64_t *)(param_2 * 3 + (longlong)puVar13);
      uVar2 = *(ulonglong *)((longlong)puVar13 + param_2 * 2);
      uVar3 = *(ulonglong *)((longlong)puVar13 + param_2 * 4);
      uVar4 = *puVar13;
      auVar55._8_6_ = 0;
      auVar55._0_8_ = uVar2;
      auVar55[0xe] = (char)(uVar2 >> 0x38);
      auVar55[0xf] = (char)((ulonglong)uVar1 >> 0x38);
      auVar54._14_2_ = auVar55._14_2_;
      auVar54._8_5_ = 0;
      auVar54._0_8_ = uVar2;
      auVar54[0xd] = (char)((ulonglong)uVar1 >> 0x30);
      auVar53._13_3_ = auVar54._13_3_;
      auVar53._8_4_ = 0;
      auVar53._0_8_ = uVar2;
      auVar53[0xc] = (char)(uVar2 >> 0x30);
      auVar52._12_4_ = auVar53._12_4_;
      auVar52._8_3_ = 0;
      auVar52._0_8_ = uVar2;
      auVar52[0xb] = (char)((ulonglong)uVar1 >> 0x28);
      auVar51._11_5_ = auVar52._11_5_;
      auVar51._8_2_ = 0;
      auVar51._0_8_ = uVar2;
      auVar51[10] = (char)(uVar2 >> 0x28);
      auVar50._10_6_ = auVar51._10_6_;
      auVar50[8] = 0;
      auVar50._0_8_ = uVar2;
      auVar50[9] = (char)((ulonglong)uVar1 >> 0x20);
      auVar49._9_7_ = auVar50._9_7_;
      auVar49[8] = (char)(uVar2 >> 0x20);
      auVar49._0_8_ = uVar2;
      auVar48._8_8_ = auVar49._8_8_;
      auVar48[7] = (char)((ulonglong)uVar1 >> 0x18);
      auVar48[6] = (char)(uVar2 >> 0x18);
      auVar48[5] = (char)((ulonglong)uVar1 >> 0x10);
      auVar48[4] = (char)(uVar2 >> 0x10);
      auVar48[3] = (char)((ulonglong)uVar1 >> 8);
      auVar48[2] = (char)(uVar2 >> 8);
      auVar48[0] = (int8_t)uVar2;
      auVar48[1] = (char)uVar1;
      auVar47 = *(int8_t (*) [16])((ulonglong)(param_6 & 0xf) * 0x10 + param_5);
      auVar16 = pshufb(auVar47,_DAT_180946f70);
      auVar56 = pmaddubsw(auVar48,auVar16);
      uVar1 = *(uint64_t *)((longlong)puVar13 + param_2 * 5);
      uVar2 = *(ulonglong *)((longlong)puVar13 + param_2 * 6);
      auVar45._8_6_ = 0;
      auVar45._0_8_ = uVar3;
      auVar45[0xe] = (char)(uVar3 >> 0x38);
      auVar45[0xf] = (char)((ulonglong)uVar1 >> 0x38);
      auVar44._14_2_ = auVar45._14_2_;
      auVar44._8_5_ = 0;
      auVar44._0_8_ = uVar3;
      auVar44[0xd] = (char)((ulonglong)uVar1 >> 0x30);
      auVar43._13_3_ = auVar44._13_3_;
      auVar43._8_4_ = 0;
      auVar43._0_8_ = uVar3;
      auVar43[0xc] = (char)(uVar3 >> 0x30);
      auVar42._12_4_ = auVar43._12_4_;
      auVar42._8_3_ = 0;
      auVar42._0_8_ = uVar3;
      auVar42[0xb] = (char)((ulonglong)uVar1 >> 0x28);
      auVar41._11_5_ = auVar42._11_5_;
      auVar41._8_2_ = 0;
      auVar41._0_8_ = uVar3;
      auVar41[10] = (char)(uVar3 >> 0x28);
      auVar40._10_6_ = auVar41._10_6_;
      auVar40[8] = 0;
      auVar40._0_8_ = uVar3;
      auVar40[9] = (char)((ulonglong)uVar1 >> 0x20);
      auVar39._9_7_ = auVar40._9_7_;
      auVar39[8] = (char)(uVar3 >> 0x20);
      auVar39._0_8_ = uVar3;
      auVar46._8_8_ = auVar39._8_8_;
      auVar46[7] = (char)((ulonglong)uVar1 >> 0x18);
      auVar46[6] = (char)(uVar3 >> 0x18);
      auVar46[5] = (char)((ulonglong)uVar1 >> 0x10);
      auVar46[4] = (char)(uVar3 >> 0x10);
      auVar46[3] = (char)((ulonglong)uVar1 >> 8);
      auVar46[2] = (char)(uVar3 >> 8);
      auVar46[0] = (int8_t)uVar3;
      auVar46[1] = (char)uVar1;
      auVar16 = pshufb(auVar47,_DAT_180946f90);
      auVar46 = pmaddubsw(auVar46,auVar16);
      uVar1 = *(uint64_t *)(param_2 * 7 + (longlong)puVar13);
      auVar37._8_6_ = 0;
      auVar37._0_8_ = uVar2;
      auVar37[0xe] = (char)(uVar2 >> 0x38);
      auVar37[0xf] = (char)((ulonglong)uVar1 >> 0x38);
      auVar36._14_2_ = auVar37._14_2_;
      auVar36._8_5_ = 0;
      auVar36._0_8_ = uVar2;
      auVar36[0xd] = (char)((ulonglong)uVar1 >> 0x30);
      auVar35._13_3_ = auVar36._13_3_;
      auVar35._8_4_ = 0;
      auVar35._0_8_ = uVar2;
      auVar35[0xc] = (char)(uVar2 >> 0x30);
      auVar34._12_4_ = auVar35._12_4_;
      auVar34._8_3_ = 0;
      auVar34._0_8_ = uVar2;
      auVar34[0xb] = (char)((ulonglong)uVar1 >> 0x28);
      auVar33._11_5_ = auVar34._11_5_;
      auVar33._8_2_ = 0;
      auVar33._0_8_ = uVar2;
      auVar33[10] = (char)(uVar2 >> 0x28);
      auVar32._10_6_ = auVar33._10_6_;
      auVar32[8] = 0;
      auVar32._0_8_ = uVar2;
      auVar32[9] = (char)((ulonglong)uVar1 >> 0x20);
      auVar31._9_7_ = auVar32._9_7_;
      auVar31[8] = (char)(uVar2 >> 0x20);
      auVar31._0_8_ = uVar2;
      auVar38._8_8_ = auVar31._8_8_;
      auVar38[7] = (char)((ulonglong)uVar1 >> 0x18);
      auVar38[6] = (char)(uVar2 >> 0x18);
      auVar38[5] = (char)((ulonglong)uVar1 >> 0x10);
      auVar38[4] = (char)(uVar2 >> 0x10);
      auVar38[3] = (char)((ulonglong)uVar1 >> 8);
      auVar38[2] = (char)(uVar2 >> 8);
      auVar38[0] = (int8_t)uVar2;
      auVar38[1] = (char)uVar1;
      auVar16 = pshufb(auVar47,_DAT_180946fa0);
      auVar47 = pshufb(auVar47,_DAT_180946f40);
      auVar38 = pmaddubsw(auVar38,auVar16);
      uVar1 = *(uint64_t *)((longlong)puVar13 + param_2);
      auVar30._8_6_ = 0;
      auVar30._0_8_ = uVar4;
      auVar30[0xe] = (char)(uVar4 >> 0x38);
      auVar30[0xf] = (char)((ulonglong)uVar1 >> 0x38);
      auVar29._14_2_ = auVar30._14_2_;
      auVar29._8_5_ = 0;
      auVar29._0_8_ = uVar4;
      auVar29[0xd] = (char)((ulonglong)uVar1 >> 0x30);
      auVar28._13_3_ = auVar29._13_3_;
      auVar28._8_4_ = 0;
      auVar28._0_8_ = uVar4;
      auVar28[0xc] = (char)(uVar4 >> 0x30);
      auVar27._12_4_ = auVar28._12_4_;
      auVar27._8_3_ = 0;
      auVar27._0_8_ = uVar4;
      auVar27[0xb] = (char)((ulonglong)uVar1 >> 0x28);
      auVar26._11_5_ = auVar27._11_5_;
      auVar26._8_2_ = 0;
      auVar26._0_8_ = uVar4;
      auVar26[10] = (char)(uVar4 >> 0x28);
      auVar25._10_6_ = auVar26._10_6_;
      auVar25[8] = 0;
      auVar25._0_8_ = uVar4;
      auVar25[9] = (char)((ulonglong)uVar1 >> 0x20);
      auVar24._9_7_ = auVar25._9_7_;
      auVar24[8] = (char)(uVar4 >> 0x20);
      auVar24._0_8_ = uVar4;
      auVar16._8_8_ = auVar24._8_8_;
      auVar16[7] = (char)((ulonglong)uVar1 >> 0x18);
      auVar16[6] = (char)(uVar4 >> 0x18);
      auVar16[5] = (char)((ulonglong)uVar1 >> 0x10);
      auVar16[4] = (char)(uVar4 >> 0x10);
      auVar16[3] = (char)((ulonglong)uVar1 >> 8);
      auVar16[2] = (char)(uVar4 >> 8);
      auVar16[0] = (int8_t)uVar4;
      auVar16[1] = (char)uVar1;
      auVar16 = pmaddubsw(auVar16,auVar47);
      sVar5 = auVar56._0_2_;
      sVar15 = auVar46._0_2_;
      auVar47._0_2_ = (ushort)(sVar5 < sVar15) * sVar5 | (ushort)(sVar5 >= sVar15) * sVar15;
      sVar6 = auVar56._2_2_;
      sVar17 = auVar46._2_2_;
      auVar47._2_2_ = (ushort)(sVar6 < sVar17) * sVar6 | (ushort)(sVar6 >= sVar17) * sVar17;
      sVar7 = auVar56._4_2_;
      sVar18 = auVar46._4_2_;
      auVar47._4_2_ = (ushort)(sVar7 < sVar18) * sVar7 | (ushort)(sVar7 >= sVar18) * sVar18;
      sVar8 = auVar56._6_2_;
      sVar19 = auVar46._6_2_;
      auVar47._6_2_ = (ushort)(sVar8 < sVar19) * sVar8 | (ushort)(sVar8 >= sVar19) * sVar19;
      sVar9 = auVar56._8_2_;
      sVar20 = auVar46._8_2_;
      auVar47._8_2_ = (ushort)(sVar9 < sVar20) * sVar9 | (ushort)(sVar9 >= sVar20) * sVar20;
      sVar10 = auVar56._10_2_;
      sVar21 = auVar46._10_2_;
      auVar47._10_2_ = (ushort)(sVar10 < sVar21) * sVar10 | (ushort)(sVar10 >= sVar21) * sVar21;
      sVar11 = auVar56._12_2_;
      sVar22 = auVar46._12_2_;
      sVar23 = auVar46._14_2_;
      auVar47._12_2_ = (ushort)(sVar11 < sVar22) * sVar11 | (ushort)(sVar11 >= sVar22) * sVar22;
      sVar12 = auVar56._14_2_;
      auVar47._14_2_ = (ushort)(sVar12 < sVar23) * sVar12 | (ushort)(sVar12 >= sVar23) * sVar23;
      auVar56._0_2_ = (ushort)(sVar15 < sVar5) * sVar5 | (ushort)(sVar15 >= sVar5) * sVar15;
      auVar56._2_2_ = (ushort)(sVar17 < sVar6) * sVar6 | (ushort)(sVar17 >= sVar6) * sVar17;
      auVar56._4_2_ = (ushort)(sVar18 < sVar7) * sVar7 | (ushort)(sVar18 >= sVar7) * sVar18;
      auVar56._6_2_ = (ushort)(sVar19 < sVar8) * sVar8 | (ushort)(sVar19 >= sVar8) * sVar19;
      auVar56._8_2_ = (ushort)(sVar20 < sVar9) * sVar9 | (ushort)(sVar20 >= sVar9) * sVar20;
      auVar56._10_2_ = (ushort)(sVar21 < sVar10) * sVar10 | (ushort)(sVar21 >= sVar10) * sVar21;
      auVar56._12_2_ = (ushort)(sVar22 < sVar11) * sVar11 | (ushort)(sVar22 >= sVar11) * sVar22;
      auVar56._14_2_ = (ushort)(sVar23 < sVar12) * sVar12 | (ushort)(sVar23 >= sVar12) * sVar23;
      auVar16 = paddsw(auVar38,auVar16);
      auVar47 = paddsw(auVar16,auVar47);
      auVar47 = paddsw(auVar47,auVar56);
      auVar47 = pmulhrsw(auVar47,_DAT_180946f30);
      sVar5 = auVar47._0_2_;
      sVar6 = auVar47._2_2_;
      sVar7 = auVar47._4_2_;
      sVar8 = auVar47._6_2_;
      sVar9 = auVar47._8_2_;
      sVar10 = auVar47._10_2_;
      sVar11 = auVar47._12_2_;
      sVar12 = auVar47._14_2_;
      *param_3 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * auVar47[0xe] - (0xff < sVar12),
                          CONCAT16((0 < sVar11) * (sVar11 < 0x100) * auVar47[0xc] - (0xff < sVar11),
                                   CONCAT15((0 < sVar10) * (sVar10 < 0x100) * auVar47[10] -
                                            (0xff < sVar10),
                                            CONCAT14((0 < sVar9) * (sVar9 < 0x100) * auVar47[8] -
                                                     (0xff < sVar9),
                                                     CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                              auVar47[6] - (0xff < sVar8),
                                                              CONCAT12((0 < sVar7) * (sVar7 < 0x100)
                                                                       * auVar47[4] - (0xff < sVar7)
                                                                       ,CONCAT11((0 < sVar6) *
                                                                                 (sVar6 < 0x100) *
                                                                                 auVar47[2] -
                                                                                 (0xff < sVar6),
                                                                                 (0 < sVar5) *
                                                                                 (sVar5 < 0x100) *
                                                                                 auVar47[0] -
                                                                                 (0xff < sVar5))))))
                                  ));
      param_6 = param_6 + param_7;
      param_3 = (uint64_t *)((longlong)param_3 + param_4);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



