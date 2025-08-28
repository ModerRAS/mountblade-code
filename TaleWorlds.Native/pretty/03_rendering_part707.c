#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part707.c - 7 个函数

// 函数: void FUN_180674aa0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_180674aa0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,short *param_7,uint64_t param_8,
                  uint param_9,int32_t param_10)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  if (((*param_7 == 0) && (param_7[1] == 0)) && (param_7[2] == 0)) {
    if (0xf < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 4);
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      do {
        func_0x00018001ed22(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 3);
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x00018001ec61(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 - param_3;
      uVar1 = (uint64_t)(param_9 >> 2);
      do {
        func_0x00018001ebb8(param_1 + param_3,param_2,param_3,param_4,param_10,param_7);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 4);
      lVar2 = param_1 + param_2 * -3;
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      param_1 = param_1 + uVar1 * 0x10;
      do {
        func_0x00018001d8f1(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 3);
      lVar2 = param_1 + param_2 * -3;
      param_1 = param_1 + uVar1 * 8;
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x00018001d6f1(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 + param_2 * -3;
      uVar1 = (uint64_t)(param_9 >> 2);
      do {
        func_0x00018001d54c(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}





// 函数: void FUN_180674d10(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_180674d10(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  short *param_5)

{
  uint64_t uVar1;
  uint in_stack_00000048;
  int32_t in_stack_00000050;
  
  if (((*param_5 == 0) && (param_5[1] == 0)) && (param_5[2] == 0)) {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x00018001ef6a(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x00018001eead(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      param_1 = param_1 - param_3;
      uVar1 = (uint64_t)(in_stack_00000048 >> 2);
      do {
        func_0x00018001ee08(param_1 + param_3,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x00018001df9c(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x00018001dd8d(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      uVar1 = (uint64_t)(in_stack_00000048 >> 2);
      do {
        func_0x00018001dbd9(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}





// 函数: void FUN_180674f40(void)
void FUN_180674f40(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_1806750b0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1806750b0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,short *param_7,uint64_t param_8,
                  uint param_9,int32_t param_10)

{
  uint64_t uVar1;
  int64_t lVar2;
  
  if (((*param_7 == 0) && (param_7[1] == 0)) && (param_7[2] == 0)) {
    if (0xf < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 4);
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      do {
        func_0x00018001eada(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 3);
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x00018001ea21(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 - param_3;
      uVar1 = (uint64_t)(param_9 >> 2);
      do {
        func_0x00018001e980(param_1 + param_3,param_2,param_3,param_4,param_10,param_7);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 4);
      lVar2 = param_1 + param_2 * -3;
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      param_1 = param_1 + uVar1 * 0x10;
      do {
        func_0x00018001d275(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (uint64_t)(param_9 >> 3);
      lVar2 = param_1 + param_2 * -3;
      param_1 = param_1 + uVar1 * 8;
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x00018001d07d(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 + param_2 * -3;
      uVar1 = (uint64_t)(param_9 >> 2);
      do {
        func_0x00018001cee0(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180675320(uint64_t *param_1,int64_t param_2,uint64_t *param_3,
void FUN_180675320(uint64_t *param_1,int64_t param_2,uint64_t *param_3,
                  int8_t (*param_4) [16])

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int8_t auVar13 [12];
  int8_t auVar14 [12];
  int8_t auVar15 [12];
  int8_t auVar16 [12];
  short sVar17;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int8_t auVar18 [16];
  short sVar25;
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  
  uVar1 = *(uint64_t *)((int64_t)param_1 + param_2);
  uVar2 = *(uint64_t *)((int64_t)param_1 + param_2 * 2);
  uVar3 = *(uint64_t *)((int64_t)param_1 + param_2 * 4);
  auVar41 = *param_4;
  uVar4 = *param_1;
  auVar45._8_4_ = 0;
  auVar45._0_8_ = uVar4;
  auVar45._12_2_ = (short)(uVar4 >> 0x30);
  auVar45._14_2_ = (short)((uint64_t)uVar1 >> 0x30);
  auVar44._12_4_ = auVar45._12_4_;
  auVar44._8_2_ = 0;
  auVar44._0_8_ = uVar4;
  auVar44._10_2_ = (short)((uint64_t)uVar1 >> 0x20);
  auVar43._10_6_ = auVar44._10_6_;
  auVar43._8_2_ = (short)(uVar4 >> 0x20);
  auVar43._0_8_ = uVar4;
  auVar13._4_8_ = auVar43._8_8_;
  auVar13._2_2_ = (short)((uint64_t)uVar1 >> 0x10);
  auVar13._0_2_ = (short)(uVar4 >> 0x10);
  auVar42._0_4_ = CONCAT22((short)uVar1,(short)uVar4);
  auVar42._4_12_ = auVar13;
  uVar1 = *(uint64_t *)((int64_t)param_1 + param_2 * 3);
  auVar30._8_4_ = 0;
  auVar30._0_8_ = uVar2;
  auVar30._12_2_ = (short)(uVar2 >> 0x30);
  auVar30._14_2_ = (short)((uint64_t)uVar1 >> 0x30);
  auVar29._12_4_ = auVar30._12_4_;
  auVar29._8_2_ = 0;
  auVar29._0_8_ = uVar2;
  auVar29._10_2_ = (short)((uint64_t)uVar1 >> 0x20);
  auVar28._10_6_ = auVar29._10_6_;
  auVar28._8_2_ = (short)(uVar2 >> 0x20);
  auVar28._0_8_ = uVar2;
  auVar14._4_8_ = auVar28._8_8_;
  auVar14._2_2_ = (short)((uint64_t)uVar1 >> 0x10);
  auVar14._0_2_ = (short)(uVar2 >> 0x10);
  auVar35._6_2_ = (short)uVar1;
  auVar35._4_2_ = (short)uVar2;
  uVar1 = *(uint64_t *)((int64_t)param_1 + param_2 * 5);
  uVar2 = *(uint64_t *)((int64_t)param_1 + param_2 * 6);
  auVar39._8_4_ = 0;
  auVar39._0_8_ = uVar3;
  auVar39._12_2_ = (short)(uVar3 >> 0x30);
  auVar39._14_2_ = (short)((uint64_t)uVar1 >> 0x30);
  auVar38._12_4_ = auVar39._12_4_;
  auVar38._8_2_ = 0;
  auVar38._0_8_ = uVar3;
  auVar38._10_2_ = (short)((uint64_t)uVar1 >> 0x20);
  auVar37._10_6_ = auVar38._10_6_;
  auVar37._8_2_ = (short)(uVar3 >> 0x20);
  auVar37._0_8_ = uVar3;
  auVar15._4_8_ = auVar37._8_8_;
  auVar15._2_2_ = (short)((uint64_t)uVar1 >> 0x10);
  auVar15._0_2_ = (short)(uVar3 >> 0x10);
  auVar36._0_4_ = CONCAT22((short)uVar1,(short)uVar3);
  auVar36._4_12_ = auVar15;
  auVar46._0_8_ = CONCAT44(auVar28._8_4_,auVar43._8_4_);
  auVar46._8_4_ = auVar44._12_4_;
  auVar46._12_4_ = auVar29._12_4_;
  auVar34._0_8_ = auVar42._0_8_;
  auVar34._8_4_ = auVar13._0_4_;
  auVar34._12_4_ = auVar14._0_4_;
  auVar35._0_4_ = auVar42._0_4_;
  uVar1 = *(uint64_t *)(param_2 * 7 + (int64_t)param_1);
  auVar18._8_4_ = 0;
  auVar18._0_8_ = uVar2;
  auVar18._12_2_ = (short)(uVar2 >> 0x30);
  auVar18._14_2_ = (short)((uint64_t)uVar1 >> 0x30);
  auVar33._12_4_ = auVar18._12_4_;
  auVar33._8_2_ = 0;
  auVar33._0_8_ = uVar2;
  auVar33._10_2_ = (short)((uint64_t)uVar1 >> 0x20);
  auVar26._10_6_ = auVar33._10_6_;
  auVar26._8_2_ = (short)(uVar2 >> 0x20);
  auVar26._0_8_ = uVar2;
  auVar16._4_8_ = auVar26._8_8_;
  auVar16._2_2_ = (short)((uint64_t)uVar1 >> 0x10);
  auVar16._0_2_ = (short)(uVar2 >> 0x10);
  auVar35._14_2_ = (short)uVar1;
  auVar35._12_2_ = (short)uVar2;
  auVar18 = pshufb(auVar41,render_system_config);
  auVar31._0_8_ = auVar36._0_8_;
  auVar31._8_4_ = auVar15._0_4_;
  auVar31._12_4_ = auVar16._0_4_;
  auVar35._8_4_ = auVar36._0_4_;
  auVar40._0_8_ = CONCAT44(auVar26._8_4_,auVar37._8_4_);
  auVar40._8_4_ = auVar38._12_4_;
  auVar40._12_4_ = auVar33._12_4_;
  auVar47._8_8_ = auVar40._8_8_;
  auVar47._0_8_ = auVar46._8_8_;
  auVar48._8_8_ = auVar40._0_8_;
  auVar48._0_8_ = auVar46._0_8_;
  auVar32._8_8_ = auVar31._8_8_;
  auVar32._0_8_ = auVar34._8_8_;
  auVar33 = pmaddubsw(auVar32,auVar18);
  auVar18 = pshufb(auVar41,render_system_config);
  auVar26 = pmaddubsw(auVar48,auVar18);
  auVar18 = pshufb(auVar41,render_system_config);
  auVar41 = pshufb(auVar41,render_system_config);
  auVar48 = pmaddubsw(auVar47,auVar18);
  auVar18 = pmaddubsw(auVar35,auVar41);
  sVar5 = auVar33._0_2_;
  sVar17 = auVar26._0_2_;
  auVar41._0_2_ = (ushort)(sVar5 < sVar17) * sVar5 | (ushort)(sVar5 >= sVar17) * sVar17;
  sVar6 = auVar33._2_2_;
  sVar19 = auVar26._2_2_;
  auVar41._2_2_ = (ushort)(sVar6 < sVar19) * sVar6 | (ushort)(sVar6 >= sVar19) * sVar19;
  sVar7 = auVar33._4_2_;
  sVar20 = auVar26._4_2_;
  auVar41._4_2_ = (ushort)(sVar7 < sVar20) * sVar7 | (ushort)(sVar7 >= sVar20) * sVar20;
  sVar8 = auVar33._6_2_;
  sVar21 = auVar26._6_2_;
  auVar41._6_2_ = (ushort)(sVar8 < sVar21) * sVar8 | (ushort)(sVar8 >= sVar21) * sVar21;
  sVar9 = auVar33._8_2_;
  sVar22 = auVar26._8_2_;
  auVar41._8_2_ = (ushort)(sVar9 < sVar22) * sVar9 | (ushort)(sVar9 >= sVar22) * sVar22;
  sVar10 = auVar33._10_2_;
  sVar23 = auVar26._10_2_;
  auVar41._10_2_ = (ushort)(sVar10 < sVar23) * sVar10 | (ushort)(sVar10 >= sVar23) * sVar23;
  sVar11 = auVar33._12_2_;
  sVar24 = auVar26._12_2_;
  sVar25 = auVar26._14_2_;
  auVar41._12_2_ = (ushort)(sVar11 < sVar24) * sVar11 | (ushort)(sVar11 >= sVar24) * sVar24;
  sVar12 = auVar33._14_2_;
  auVar41._14_2_ = (ushort)(sVar12 < sVar25) * sVar12 | (ushort)(sVar12 >= sVar25) * sVar25;
  auVar27._0_2_ = (ushort)(sVar17 < sVar5) * sVar5 | (ushort)(sVar17 >= sVar5) * sVar17;
  auVar27._2_2_ = (ushort)(sVar19 < sVar6) * sVar6 | (ushort)(sVar19 >= sVar6) * sVar19;
  auVar27._4_2_ = (ushort)(sVar20 < sVar7) * sVar7 | (ushort)(sVar20 >= sVar7) * sVar20;
  auVar27._6_2_ = (ushort)(sVar21 < sVar8) * sVar8 | (ushort)(sVar21 >= sVar8) * sVar21;
  auVar27._8_2_ = (ushort)(sVar22 < sVar9) * sVar9 | (ushort)(sVar22 >= sVar9) * sVar22;
  auVar27._10_2_ = (ushort)(sVar23 < sVar10) * sVar10 | (ushort)(sVar23 >= sVar10) * sVar23;
  auVar27._12_2_ = (ushort)(sVar24 < sVar11) * sVar11 | (ushort)(sVar24 >= sVar11) * sVar24;
  auVar27._14_2_ = (ushort)(sVar25 < sVar12) * sVar12 | (ushort)(sVar25 >= sVar12) * sVar25;
  auVar18 = paddsw(auVar48,auVar18);
  auVar41 = paddsw(auVar18,auVar41);
  auVar41 = paddsw(auVar41,auVar27);
  auVar41 = pmulhrsw(auVar41,render_system_config);
  sVar5 = auVar41._0_2_;
  sVar6 = auVar41._2_2_;
  sVar7 = auVar41._4_2_;
  sVar8 = auVar41._6_2_;
  sVar9 = auVar41._8_2_;
  sVar10 = auVar41._10_2_;
  sVar11 = auVar41._12_2_;
  sVar12 = auVar41._14_2_;
  *param_3 = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * auVar41[0xe] - (0xff < sVar12),
                      CONCAT16((0 < sVar11) * (sVar11 < 0x100) * auVar41[0xc] - (0xff < sVar11),
                               CONCAT15((0 < sVar10) * (sVar10 < 0x100) * auVar41[10] -
                                        (0xff < sVar10),
                                        CONCAT14((0 < sVar9) * (sVar9 < 0x100) * auVar41[8] -
                                                 (0xff < sVar9),
                                                 CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar41[6]
                                                          - (0xff < sVar8),
                                                          CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                   auVar41[4] - (0xff < sVar7),
                                                                   CONCAT11((0 < sVar6) *
                                                                            (sVar6 < 0x100) *
                                                                            auVar41[2] -
                                                                            (0xff < sVar6),
                                                                            (0 < sVar5) *
                                                                            (sVar5 < 0x100) *
                                                                            auVar41[0] -
                                                                            (0xff < sVar5))))))));
  return;
}





// 函数: void FUN_180675430(void)
void FUN_180675430(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180675570(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_180675570(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t param_5,uint param_6,int param_7,int param_8,int param_9)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  int8_t auVar12 [12];
  int8_t auVar13 [12];
  int16_t uVar14;
  uint8_t uVar15;
  int8_t auVar16 [12];
  uint64_t *puVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint uVar21;
  int32_t *puVar22;
  short sVar23;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  int8_t auVar24 [16];
  short sVar31;
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int16_t uVar34;
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  int8_t auVar42 [16];
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int64_t lStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)&lStack_68;
  param_1 = param_1 + -3;
  lStack_68 = param_3;
  if (0 < param_9) {
    uVar18 = (uint64_t)((param_9 - 1U >> 2) + 1);
    do {
      if (0 < (int64_t)param_8) {
        puVar22 = (int32_t *)(lStack_68 + param_4 * 2);
        lVar20 = ((int64_t)param_8 - 1U >> 2) + 1;
        uVar21 = param_6;
        do {
          lVar19 = 0;
          do {
            puVar17 = (uint64_t *)(((int64_t)(int)uVar21 >> 4) + param_1);
            if ((uVar21 & 0xf) == 0) {
              *(int8_t *)(&uStack_58 + lVar19) = *(int8_t *)((int64_t)puVar17 + 3);
              *(int8_t *)((int64_t)&uStack_58 + lVar19 * 4 + 1) =
                   *(int8_t *)((int64_t)puVar17 + param_2 + 3);
              *(int8_t *)((int64_t)&uStack_58 + lVar19 * 4 + 2) =
                   *(int8_t *)((int64_t)puVar17 + param_2 * 2 + 3);
              *(int8_t *)((int64_t)&uStack_58 + lVar19 * 4 + 3) =
                   *(int8_t *)(param_2 * 3 + 3 + (int64_t)puVar17);
            }
            else {
              uVar1 = *(uint64_t *)((int64_t)puVar17 + param_2);
              uVar2 = *puVar17;
              uVar3 = *(uint64_t *)((int64_t)puVar17 + param_2 * 2);
              auVar45._8_4_ = 0;
              auVar45._0_8_ = uVar2;
              auVar45._12_2_ = (short)(uVar2 >> 0x30);
              auVar45._14_2_ = (short)((uint64_t)uVar1 >> 0x30);
              auVar44._12_4_ = auVar45._12_4_;
              auVar44._8_2_ = 0;
              auVar44._0_8_ = uVar2;
              auVar44._10_2_ = (short)((uint64_t)uVar1 >> 0x20);
              auVar43._10_6_ = auVar44._10_6_;
              auVar43._8_2_ = (short)(uVar2 >> 0x20);
              auVar43._0_8_ = uVar2;
              auVar12._4_8_ = auVar43._8_8_;
              auVar12._2_2_ = (short)((uint64_t)uVar1 >> 0x10);
              auVar12._0_2_ = (short)(uVar2 >> 0x10);
              auVar42._0_4_ = CONCAT22((short)uVar1,(short)uVar2);
              auVar42._4_12_ = auVar12;
              uVar1 = *(uint64_t *)(param_2 * 3 + (int64_t)puVar17);
              auVar41 = *(int8_t (*) [16])(param_5 + (uint64_t)(uVar21 & 0xf) * 0x10);
              auVar24._8_4_ = 0;
              auVar24._0_8_ = uVar3;
              auVar24._12_2_ = (short)(uVar3 >> 0x30);
              auVar24._14_2_ = (short)((uint64_t)uVar1 >> 0x30);
              auVar40._12_4_ = auVar24._12_4_;
              auVar40._8_2_ = 0;
              auVar40._0_8_ = uVar3;
              auVar40._10_2_ = (short)((uint64_t)uVar1 >> 0x20);
              auVar32._10_6_ = auVar40._10_6_;
              auVar32._8_2_ = (short)(uVar3 >> 0x20);
              auVar32._0_8_ = uVar3;
              auVar13._4_8_ = auVar32._8_8_;
              auVar13._2_2_ = (short)((uint64_t)uVar1 >> 0x10);
              auVar13._0_2_ = (short)(uVar3 >> 0x10);
              auVar35._6_2_ = (short)uVar1;
              auVar35._4_2_ = (short)uVar3;
              auVar24 = pshufb(auVar41,render_system_config);
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
              auVar24 = pshufb(auVar41,render_system_config);
              auVar32 = pmaddubsw(auVar46,auVar24);
              auVar24 = pshufb(auVar41,render_system_config);
              auVar41 = pshufb(auVar41,render_system_config);
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
              auVar41._10_2_ = (ushort)(sVar9 < sVar29) * sVar9 | (ushort)(sVar9 >= sVar29) * sVar29
              ;
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
              auVar33._10_2_ = (ushort)(sVar29 < sVar9) * sVar9 | (ushort)(sVar29 >= sVar9) * sVar29
              ;
              auVar33._12_2_ =
                   (ushort)(sVar30 < sVar10) * sVar10 | (ushort)(sVar30 >= sVar10) * sVar30;
              auVar33._14_2_ =
                   (ushort)(sVar31 < sVar11) * sVar11 | (ushort)(sVar31 >= sVar11) * sVar31;
              auVar24 = paddsw(auVar47,auVar24);
              auVar41 = paddsw(auVar24,auVar41);
              auVar41 = paddsw(auVar41,auVar33);
              auVar41 = pmulhrsw(auVar41,render_system_config);
              sVar4 = auVar41._0_2_;
              sVar5 = auVar41._2_2_;
              sVar6 = auVar41._4_2_;
              sVar7 = auVar41._6_2_;
              (&uStack_58)[lVar19] =
                   CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar41[6] - (0xff < sVar7),
                            CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar41[4] - (0xff < sVar6),
                                     CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar41[2] -
                                              (0xff < sVar5),
                                              (0 < sVar4) * (sVar4 < 0x100) * auVar41[0] -
                                              (0xff < sVar4))));
            }
            uVar21 = uVar21 + param_7;
            lVar19 = lVar19 + 1;
          } while (lVar19 < 4);
          uVar14 = CONCAT11((char)((uint)uStack_54 >> 0x18),(char)((uint)uStack_58 >> 0x18));
          uVar1 = CONCAT35(CONCAT21(uVar14,(char)((uint)uStack_54 >> 0x10)),
                           CONCAT14((char)((uint)uStack_58 >> 0x10),uStack_58));
          uVar15 = CONCAT51(CONCAT41((int)((uint64_t)uVar1 >> 0x20),(char)((uint)uStack_54 >> 8)),
                            (char)((uint)uStack_58 >> 8));
          uVar34 = CONCAT11((char)uStack_54,(char)uStack_58);
          uVar2 = CONCAT62(uVar15,uVar34);
          auVar38[0xf] = (char)((uint)uStack_4c >> 0x18);
          auVar38[0xe] = (char)((uint)uStack_50 >> 0x18);
          auVar16[3] = (char)((uint)uStack_4c >> 8);
          auVar16[2] = (char)((uint)uStack_50 >> 8);
          auVar38._8_4_ = 0;
          auVar38._0_8_ = uVar2;
          auVar38._12_2_ = uVar14;
          auVar37._12_4_ = auVar38._12_4_;
          auVar37._8_2_ = 0;
          auVar37._0_8_ = uVar2;
          auVar37._10_2_ =
               (short)(CONCAT15((char)((uint)uStack_4c >> 0x10),
                                CONCAT14((char)((uint)uStack_50 >> 0x10),uStack_50)) >> 0x20);
          auVar36._10_6_ = auVar37._10_6_;
          auVar36._8_2_ = (short)((uint64_t)uVar1 >> 0x20);
          auVar36._0_8_ = uVar2;
          auVar16._4_8_ = auVar36._8_8_;
          auVar16._0_2_ = (short)uVar15;
          *(uint *)(param_4 * -2 + (int64_t)puVar22) =
               CONCAT22(CONCAT11((char)uStack_4c,(char)uStack_50),uVar34);
          *(int *)((int64_t)puVar22 - param_4) = auVar16._0_4_;
          *puVar22 = auVar36._8_4_;
          *(int32_t *)(param_4 + (int64_t)puVar22) = auVar37._12_4_;
          puVar22 = puVar22 + 1;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      param_1 = param_1 + param_2 * 4;
      lStack_68 = lStack_68 + param_4 * 4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    uStack_60 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)&lStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



