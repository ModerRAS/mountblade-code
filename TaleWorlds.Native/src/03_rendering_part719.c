#include "TaleWorlds.Native.Split.h"

// 03_rendering_part719.c - 1 个函数

// 函数: void FUN_1806905c0(undefined1 (*param_1) [16],int param_2,undefined1 (*param_3) [16],int param_4,
void FUN_1806905c0(undefined1 (*param_1) [16],int param_2,undefined1 (*param_3) [16],int param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auStack_60 [16];
  
  auVar13 = ZEXT832(0) << 0x40;
  lVar7 = 8;
  auVar3 = auVar13;
  auVar4 = auVar13;
  do {
    auVar12._0_16_ = ZEXT116(0) * *(undefined1 (*) [16])(*param_1 + param_2) + ZEXT116(1) * *param_1
    ;
    auVar12._16_16_ = ZEXT116(1) * *(undefined1 (*) [16])(*param_1 + param_2);
    auVar11._0_16_ = ZEXT116(0) * *(undefined1 (*) [16])(*param_3 + param_4) + ZEXT116(1) * *param_3
    ;
    auVar11._16_16_ = ZEXT116(1) * *(undefined1 (*) [16])(*param_3 + param_4);
    auVar5 = vpunpcklbw_avx2(auVar12,auVar13);
    auVar6 = vpunpcklbw_avx2(auVar11,auVar13);
    auVar6 = vpsubw_avx2(auVar5,auVar6);
    auVar5 = vpunpckhbw_avx2(auVar12,auVar13);
    auVar11 = vpunpckhbw_avx2(auVar11,auVar13);
    auVar11 = vpsubw_avx2(auVar5,auVar11);
    auVar5 = vpaddw_avx2(auVar11,auVar6);
    auVar6 = vpmaddwd_avx2(auVar6,auVar6);
    auVar11 = vpmaddwd_avx2(auVar11,auVar11);
    auVar3 = vpaddw_avx2(auVar5,auVar3);
    param_1 = (undefined1 (*) [16])(*param_1 + (uint)(param_2 * 2));
    param_3 = (undefined1 (*) [16])(*param_3 + (uint)(param_4 * 2));
    auVar5 = vpaddd_avx2(auVar11,auVar6);
    auVar4 = vpaddd_avx2(auVar5,auVar4);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auStack_60 = auVar13._0_16_;
  auVar1 = vpaddw_avx(auVar3._16_16_,auVar3._0_16_);
  auVar8 = vpunpckhwd_avx(auStack_60,auVar1);
  auVar10 = vpsrad_avx(auVar8,0x10);
  auVar8 = vpunpcklwd_avx(auStack_60,auVar1);
  auVar1 = vpaddd_avx(auVar4._16_16_,auVar4._0_16_);
  auVar9 = vpsrad_avx(auVar8,0x10);
  auVar8 = vpunpckhdq_avx(auVar1,auStack_60);
  auVar2 = vpunpckldq_avx(auVar1,auStack_60);
  auVar1 = vpaddd_avx(auVar10,auVar9);
  auVar8 = vpaddd_avx(auVar8,auVar2);
  auVar2 = vpunpckldq_avx(auVar1,auStack_60);
  auVar9 = vpsrldq_avx(auVar8,8);
  auVar1 = vpunpckhdq_avx(auVar1,auStack_60);
  auVar1 = vpaddd_avx(auVar1,auVar2);
  auVar8 = vpaddd_avx(auVar9,auVar8);
  *param_5 = auVar8._0_4_;
  auVar8 = vpsrldq_avx(auVar1,8);
  auVar1 = vpaddd_avx(auVar8,auVar1);
  *param_6 = auVar1._0_4_;
  return;
}





