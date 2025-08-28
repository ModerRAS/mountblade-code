#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part315.c - 8 个函数

// 函数: void FUN_18083b5a0(int8_t (*param_1) [64],int8_t (*param_2) [64],int param_3)
void FUN_18083b5a0(int8_t (*param_1) [64],int8_t (*param_2) [64],int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  int8_t auVar24 [64];
  int8_t auVar25 [64];
  int8_t auVar26 [64];
  int8_t auVar27 [64];
  int8_t auVar28 [64];
  int8_t auVar23 [64];
  
  auVar28 = ZEXT1664(ZEXT816(0) << 0x40);
  for (param_3 = param_3 >> 4; param_3 != 0; param_3 = param_3 + -1) {
    auVar27 = *param_2;
    auVar26 = *param_1;
    uVar16 = vcmpps_avx512f(auVar26,auVar28,0xe);
    uVar17 = vcmpps_avx512f(auVar26,auVar28,2);
    uVar18 = vcmpps_avx512f(auVar27,auVar28,0xe);
    uVar19 = vcmpps_avx512f(auVar27,auVar28,2);
    uVar20 = (ushort)uVar19 & (ushort)uVar16;
    auVar23 = vaddps_avx512f(auVar26,auVar27);
    bVar1 = (bool)((byte)uVar20 & 1);
    auVar24._0_4_ = (uint)bVar1 * auVar23._0_4_ | (uint)!bVar1 * auVar26._0_4_;
    bVar1 = (bool)((byte)(uVar20 >> 1) & 1);
    auVar24._4_4_ = (uint)bVar1 * auVar23._4_4_ | (uint)!bVar1 * auVar26._4_4_;
    bVar1 = (bool)((byte)(uVar20 >> 2) & 1);
    auVar24._8_4_ = (uint)bVar1 * auVar23._8_4_ | (uint)!bVar1 * auVar26._8_4_;
    bVar1 = (bool)((byte)(uVar20 >> 3) & 1);
    auVar24._12_4_ = (uint)bVar1 * auVar23._12_4_ | (uint)!bVar1 * auVar26._12_4_;
    bVar1 = (bool)((byte)(uVar20 >> 4) & 1);
    auVar24._16_4_ = (uint)bVar1 * auVar23._16_4_ | (uint)!bVar1 * auVar26._16_4_;
    bVar1 = (bool)((byte)(uVar20 >> 5) & 1);
    auVar24._20_4_ = (uint)bVar1 * auVar23._20_4_ | (uint)!bVar1 * auVar26._20_4_;
    bVar1 = (bool)((byte)(uVar20 >> 6) & 1);
    auVar24._24_4_ = (uint)bVar1 * auVar23._24_4_ | (uint)!bVar1 * auVar26._24_4_;
    bVar1 = (bool)((byte)(uVar20 >> 7) & 1);
    auVar24._28_4_ = (uint)bVar1 * auVar23._28_4_ | (uint)!bVar1 * auVar26._28_4_;
    bVar9 = (byte)(uVar20 >> 8);
    auVar24._32_4_ = (uint)(bVar9 & 1) * auVar23._32_4_ | (uint)!(bool)(bVar9 & 1) * auVar26._32_4_;
    bVar1 = (bool)(bVar9 >> 1 & 1);
    auVar24._36_4_ = (uint)bVar1 * auVar23._36_4_ | (uint)!bVar1 * auVar26._36_4_;
    bVar1 = (bool)(bVar9 >> 2 & 1);
    auVar24._40_4_ = (uint)bVar1 * auVar23._40_4_ | (uint)!bVar1 * auVar26._40_4_;
    bVar1 = (bool)(bVar9 >> 3 & 1);
    auVar24._44_4_ = (uint)bVar1 * auVar23._44_4_ | (uint)!bVar1 * auVar26._44_4_;
    bVar1 = (bool)(bVar9 >> 4 & 1);
    auVar24._48_4_ = (uint)bVar1 * auVar23._48_4_ | (uint)!bVar1 * auVar26._48_4_;
    bVar1 = (bool)(bVar9 >> 5 & 1);
    auVar24._52_4_ = (uint)bVar1 * auVar23._52_4_ | (uint)!bVar1 * auVar26._52_4_;
    bVar1 = (bool)(bVar9 >> 6 & 1);
    auVar24._56_4_ = (uint)bVar1 * auVar23._56_4_ | (uint)!bVar1 * auVar26._56_4_;
    auVar24._60_4_ =
         (uint)(bVar9 >> 7) * auVar23._60_4_ | (uint)!(bool)(bVar9 >> 7) * auVar26._60_4_;
    uVar21 = (ushort)uVar16 & (ushort)uVar18;
    uVar20 = (ushort)uVar17 & (ushort)uVar18;
    uVar22 = (ushort)uVar17 & (ushort)uVar19;
    auVar23 = vaddps_avx512f(auVar26,auVar27);
    bVar1 = (bool)((byte)uVar20 & 1);
    auVar25._0_4_ = (uint)bVar1 * auVar23._0_4_ | (uint)!bVar1 * auVar26._0_4_;
    bVar1 = (bool)((byte)(uVar20 >> 1) & 1);
    auVar25._4_4_ = (uint)bVar1 * auVar23._4_4_ | (uint)!bVar1 * auVar26._4_4_;
    bVar1 = (bool)((byte)(uVar20 >> 2) & 1);
    auVar25._8_4_ = (uint)bVar1 * auVar23._8_4_ | (uint)!bVar1 * auVar26._8_4_;
    bVar1 = (bool)((byte)(uVar20 >> 3) & 1);
    auVar25._12_4_ = (uint)bVar1 * auVar23._12_4_ | (uint)!bVar1 * auVar26._12_4_;
    bVar1 = (bool)((byte)(uVar20 >> 4) & 1);
    auVar25._16_4_ = (uint)bVar1 * auVar23._16_4_ | (uint)!bVar1 * auVar26._16_4_;
    bVar1 = (bool)((byte)(uVar20 >> 5) & 1);
    auVar25._20_4_ = (uint)bVar1 * auVar23._20_4_ | (uint)!bVar1 * auVar26._20_4_;
    bVar1 = (bool)((byte)(uVar20 >> 6) & 1);
    auVar25._24_4_ = (uint)bVar1 * auVar23._24_4_ | (uint)!bVar1 * auVar26._24_4_;
    bVar1 = (bool)((byte)(uVar20 >> 7) & 1);
    auVar25._28_4_ = (uint)bVar1 * auVar23._28_4_ | (uint)!bVar1 * auVar26._28_4_;
    bVar9 = (byte)(uVar20 >> 8);
    auVar25._32_4_ = (uint)(bVar9 & 1) * auVar23._32_4_ | (uint)!(bool)(bVar9 & 1) * auVar26._32_4_;
    bVar1 = (bool)(bVar9 >> 1 & 1);
    auVar25._36_4_ = (uint)bVar1 * auVar23._36_4_ | (uint)!bVar1 * auVar26._36_4_;
    bVar1 = (bool)(bVar9 >> 2 & 1);
    auVar25._40_4_ = (uint)bVar1 * auVar23._40_4_ | (uint)!bVar1 * auVar26._40_4_;
    bVar1 = (bool)(bVar9 >> 3 & 1);
    auVar25._44_4_ = (uint)bVar1 * auVar23._44_4_ | (uint)!bVar1 * auVar26._44_4_;
    bVar1 = (bool)(bVar9 >> 4 & 1);
    auVar25._48_4_ = (uint)bVar1 * auVar23._48_4_ | (uint)!bVar1 * auVar26._48_4_;
    bVar1 = (bool)(bVar9 >> 5 & 1);
    auVar25._52_4_ = (uint)bVar1 * auVar23._52_4_ | (uint)!bVar1 * auVar26._52_4_;
    bVar1 = (bool)(bVar9 >> 6 & 1);
    auVar25._56_4_ = (uint)bVar1 * auVar23._56_4_ | (uint)!bVar1 * auVar26._56_4_;
    auVar25._60_4_ =
         (uint)(bVar9 >> 7) * auVar23._60_4_ | (uint)!(bool)(bVar9 >> 7) * auVar26._60_4_;
    auVar26 = vsubps_avx512f(auVar25,auVar27);
    bVar1 = (bool)((byte)uVar21 & 1);
    bVar2 = (bool)((byte)(uVar21 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar21 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar21 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar21 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar21 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar21 >> 6) & 1);
    bVar8 = (bool)((byte)(uVar21 >> 7) & 1);
    bVar9 = (byte)(uVar21 >> 8);
    bVar10 = (bool)(bVar9 >> 1 & 1);
    bVar11 = (bool)(bVar9 >> 2 & 1);
    bVar12 = (bool)(bVar9 >> 3 & 1);
    bVar13 = (bool)(bVar9 >> 4 & 1);
    bVar14 = (bool)(bVar9 >> 5 & 1);
    bVar15 = (bool)(bVar9 >> 6 & 1);
    *(uint *)*param_2 = (uint)bVar1 * auVar26._0_4_ | !bVar1 * auVar25._0_4_;
    *(uint *)(*param_2 + 4) = (uint)bVar2 * auVar26._4_4_ | !bVar2 * auVar25._4_4_;
    *(uint *)(*param_2 + 8) = (uint)bVar3 * auVar26._8_4_ | !bVar3 * auVar25._8_4_;
    *(uint *)(*param_2 + 0xc) = (uint)bVar4 * auVar26._12_4_ | !bVar4 * auVar25._12_4_;
    *(uint *)(*param_2 + 0x10) = (uint)bVar5 * auVar26._16_4_ | !bVar5 * auVar25._16_4_;
    *(uint *)(*param_2 + 0x14) = (uint)bVar6 * auVar26._20_4_ | !bVar6 * auVar25._20_4_;
    *(uint *)(*param_2 + 0x18) = (uint)bVar7 * auVar26._24_4_ | !bVar7 * auVar25._24_4_;
    *(uint *)(*param_2 + 0x1c) = (uint)bVar8 * auVar26._28_4_ | !bVar8 * auVar25._28_4_;
    *(uint *)(*param_2 + 0x20) =
         (uint)(bVar9 & 1) * auVar26._32_4_ | !(bool)(bVar9 & 1) * auVar25._32_4_;
    *(uint *)(*param_2 + 0x24) = (uint)bVar10 * auVar26._36_4_ | !bVar10 * auVar25._36_4_;
    *(uint *)(*param_2 + 0x28) = (uint)bVar11 * auVar26._40_4_ | !bVar11 * auVar25._40_4_;
    *(uint *)(*param_2 + 0x2c) = (uint)bVar12 * auVar26._44_4_ | !bVar12 * auVar25._44_4_;
    *(uint *)(*param_2 + 0x30) = (uint)bVar13 * auVar26._48_4_ | !bVar13 * auVar25._48_4_;
    *(uint *)(*param_2 + 0x34) = (uint)bVar14 * auVar26._52_4_ | !bVar14 * auVar25._52_4_;
    *(uint *)(*param_2 + 0x38) = (uint)bVar15 * auVar26._56_4_ | !bVar15 * auVar25._56_4_;
    *(uint *)(*param_2 + 0x3c) =
         (uint)(bVar9 >> 7) * auVar26._60_4_ | !(bool)(bVar9 >> 7) * auVar25._60_4_;
    auVar27 = vsubps_avx512f(auVar24,auVar27);
    bVar1 = (bool)((byte)uVar22 & 1);
    bVar2 = (bool)((byte)(uVar22 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar22 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar22 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar22 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar22 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar22 >> 6) & 1);
    bVar8 = (bool)((byte)(uVar22 >> 7) & 1);
    bVar9 = (byte)(uVar22 >> 8);
    bVar10 = (bool)(bVar9 >> 1 & 1);
    bVar11 = (bool)(bVar9 >> 2 & 1);
    bVar12 = (bool)(bVar9 >> 3 & 1);
    bVar13 = (bool)(bVar9 >> 4 & 1);
    bVar14 = (bool)(bVar9 >> 5 & 1);
    bVar15 = (bool)(bVar9 >> 6 & 1);
    *(uint *)*param_1 = (uint)bVar1 * auVar27._0_4_ | !bVar1 * auVar24._0_4_;
    *(uint *)(*param_1 + 4) = (uint)bVar2 * auVar27._4_4_ | !bVar2 * auVar24._4_4_;
    *(uint *)(*param_1 + 8) = (uint)bVar3 * auVar27._8_4_ | !bVar3 * auVar24._8_4_;
    *(uint *)(*param_1 + 0xc) = (uint)bVar4 * auVar27._12_4_ | !bVar4 * auVar24._12_4_;
    *(uint *)(*param_1 + 0x10) = (uint)bVar5 * auVar27._16_4_ | !bVar5 * auVar24._16_4_;
    *(uint *)(*param_1 + 0x14) = (uint)bVar6 * auVar27._20_4_ | !bVar6 * auVar24._20_4_;
    *(uint *)(*param_1 + 0x18) = (uint)bVar7 * auVar27._24_4_ | !bVar7 * auVar24._24_4_;
    *(uint *)(*param_1 + 0x1c) = (uint)bVar8 * auVar27._28_4_ | !bVar8 * auVar24._28_4_;
    *(uint *)(*param_1 + 0x20) =
         (uint)(bVar9 & 1) * auVar27._32_4_ | !(bool)(bVar9 & 1) * auVar24._32_4_;
    *(uint *)(*param_1 + 0x24) = (uint)bVar10 * auVar27._36_4_ | !bVar10 * auVar24._36_4_;
    *(uint *)(*param_1 + 0x28) = (uint)bVar11 * auVar27._40_4_ | !bVar11 * auVar24._40_4_;
    *(uint *)(*param_1 + 0x2c) = (uint)bVar12 * auVar27._44_4_ | !bVar12 * auVar24._44_4_;
    *(uint *)(*param_1 + 0x30) = (uint)bVar13 * auVar27._48_4_ | !bVar13 * auVar24._48_4_;
    *(uint *)(*param_1 + 0x34) = (uint)bVar14 * auVar27._52_4_ | !bVar14 * auVar24._52_4_;
    *(uint *)(*param_1 + 0x38) = (uint)bVar15 * auVar27._56_4_ | !bVar15 * auVar24._56_4_;
    *(uint *)(*param_1 + 0x3c) =
         (uint)(bVar9 >> 7) * auVar27._60_4_ | !(bool)(bVar9 >> 7) * auVar24._60_4_;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}





// 函数: void FUN_18083b670(uint64_t param_1,int64_t param_2)
void FUN_18083b670(uint64_t param_1,int64_t param_2)

{
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,0x460);
  }
  return;
}





// 函数: void FUN_18083b6b0(uint64_t param_1,int64_t param_2)
void FUN_18083b6b0(uint64_t param_1,int64_t param_2)

{
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,0x428);
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083b6f0(uint64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_18083b6f0(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint64_t *puVar7;
  int8_t (*pauVar8) [16];
  int *piVar9;
  int iVar10;
  int *piVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t in_XMM2 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auStack_2a8 [32];
  uint uStack_288;
  uint uStack_284;
  int iStack_280;
  int *piStack_278;
  uint64_t auStack_270 [3];
  int8_t auStack_258 [512];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2a8;
  lVar16 = *(int64_t *)(param_2 + 0x20);
  uVar15 = 0;
  lVar13 = 1;
  uStack_284 = 0;
  iVar10 = -1;
  auStack_270[0] = param_1;
  piVar6 = (int *)FUN_1807c4170(param_1,1,0x460);
  if (piVar6 != (int *)0x0) {
    iVar4 = FUN_18082d7f0(param_3,5);
    *piVar6 = iVar4;
    uVar12 = uVar15;
    piVar9 = piVar6;
    if (0 < iVar4) {
      do {
        iVar4 = FUN_18082d7f0(param_3,4);
        piVar9[1] = iVar4;
        if (iVar4 < 0) goto LAB_18083bb2d;
        if (iVar4 <= iVar10) {
          iVar4 = iVar10;
        }
        iVar10 = iVar4;
        uVar17 = (int)uVar12 + 1;
        uVar12 = (uint64_t)uVar17;
        piVar9 = piVar9 + 1;
      } while ((int)uVar17 < *piVar6);
    }
    iStack_280 = iVar10 + 1;
    uStack_288 = 0;
    if (0 < iStack_280) {
      piVar9 = piVar6 + 0x50;
      piVar18 = piVar6 + 0x30;
      do {
        piStack_278 = piVar9;
        iVar10 = FUN_18082d7f0(param_3,3);
        piVar18[-0x10] = iVar10 + 1;
        iVar10 = FUN_18082d7f0(param_3,2);
        *piVar18 = iVar10;
        if (iVar10 < 0) goto LAB_18083bb2d;
        if (iVar10 != 0) {
          iVar10 = FUN_18082d7f0(param_3,8);
          piVar18[0x10] = iVar10;
        }
        if ((piVar18[0x10] < 0) || (*(int *)(lVar16 + 0x18) <= piVar18[0x10])) goto LAB_18083bb2d;
        piVar11 = piVar9;
        uVar12 = uVar15;
        if (0 < 1 << ((byte)*piVar18 & 0x1f)) {
          do {
            iVar10 = FUN_18082d7f0(param_3,8);
            iVar10 = iVar10 + -1;
            *piVar9 = iVar10;
            if ((iVar10 < -1) || (*(int *)(lVar16 + 0x18) <= iVar10)) goto LAB_18083bb2d;
            uVar17 = (int)uVar12 + 1;
            uVar12 = (uint64_t)uVar17;
            piVar9 = piVar9 + 1;
            piVar11 = piStack_278;
          } while ((int)uVar17 < 1 << ((byte)*piVar18 & 0x1f));
        }
        piVar9 = piVar11 + 8;
        uStack_288 = uStack_288 + 1;
        piVar18 = piVar18 + 1;
        piStack_278 = piVar9;
      } while ((int)uStack_288 < iStack_280);
    }
    iVar10 = FUN_18082d7f0(param_3,2);
    piVar6[0xd0] = iVar10 + 1;
    iStack_280 = FUN_18082d7f0(param_3,4);
    if (iStack_280 < 0) {
LAB_18083bb2d:
                    // WARNING: Subroutine does not return
      memset(piVar6,0,0x460);
    }
    uStack_288 = 0;
    iVar10 = iStack_280;
    if (0 < *piVar6) {
      piStack_278 = piVar6 + 1;
      uVar12 = uVar15;
      uVar14 = uVar15;
      do {
        uStack_284 = (int)uVar14 + piVar6[(int64_t)*piStack_278 + 0x20];
        lVar16 = (int64_t)(int)uStack_284;
        uVar17 = (uint)uVar15;
        if ((int64_t)uVar12 < lVar16) {
          bVar3 = (byte)iVar10 & 0x1f;
          piVar9 = piVar6 + uVar12 + 0xd3;
          do {
            iVar10 = FUN_18082d7f0(param_3,iVar10);
            *piVar9 = iVar10;
            if ((iVar10 < 0) || ((int)(1 << bVar3 | 1U >> 0x20 - bVar3) <= iVar10))
            goto LAB_18083bb2d;
            uVar12 = uVar12 + 1;
            piVar9 = piVar9 + 1;
            uVar17 = uStack_288;
            iVar10 = iStack_280;
          } while ((int64_t)uVar12 < lVar16);
        }
        uVar14 = (uint64_t)uStack_284;
        uStack_288 = uVar17 + 1;
        uVar15 = (uint64_t)uStack_288;
        piStack_278 = piStack_278 + 1;
      } while ((int)uStack_288 < *piVar6);
    }
    uVar17 = uStack_284 + 2;
    iVar4 = 0;
    piVar6[0xd1] = 0;
    piVar6[0xd2] = 1 << ((byte)iVar10 & 0x1f);
    if (0 < (int)uVar17) {
      if ((7 < uVar17) && (1 < ui_system_control_ui)) {
        uVar5 = uVar17 & 0x80000007;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
        }
        pauVar8 = (int8_t (*) [16])auStack_258;
        iVar10 = 4;
        iVar4 = 0;
        do {
          iVar1 = iVar10 + -2;
          iVar19 = (int)system_data_f750;
          auVar24._0_4_ = iVar4 + iVar19;
          iVar20 = system_data_f750._4_4_;
          auVar24._4_4_ = iVar4 + iVar20;
          auVar24._8_4_ = iVar4;
          auVar24._12_4_ = iVar4;
          auVar24 = pmovsxdq(in_XMM2,auVar24);
          iVar2 = iVar10 + 2;
          auVar25._0_8_ = piVar6 + auVar24._0_8_ + 0xd1;
          auVar25._8_8_ = auVar24._8_8_ + 0xd1 + (int64_t)piVar6;
          auVar21._0_4_ = iVar1 + iVar19;
          auVar21._4_4_ = iVar1 + iVar20;
          auVar21._8_4_ = iVar1;
          auVar21._12_4_ = iVar1;
          pauVar8[-1] = auVar25;
          iVar4 = iVar4 + 8;
          auVar24 = pmovsxdq(auVar25,auVar21);
          auVar26._0_8_ = piVar6 + auVar24._0_8_ + 0xd1;
          auVar26._8_8_ = auVar24._8_8_ + 0xd1 + (int64_t)piVar6;
          auVar22._0_4_ = iVar10 + iVar19;
          auVar22._4_4_ = iVar10 + iVar20;
          auVar22._8_4_ = iVar10;
          auVar22._12_4_ = iVar10;
          *pauVar8 = auVar26;
          auVar24 = pmovsxdq(auVar26,auVar22);
          auVar23._0_4_ = iVar2 + iVar19;
          auVar23._4_4_ = iVar2 + iVar20;
          auVar23._8_4_ = iVar2;
          auVar23._12_4_ = iVar2;
          auVar27._0_8_ = piVar6 + auVar24._0_8_ + 0xd1;
          auVar27._8_8_ = auVar24._8_8_ + 0xd1 + (int64_t)piVar6;
          pauVar8[1] = auVar27;
          auVar24 = pmovsxdq(auVar27,auVar23);
          in_XMM2._0_8_ = piVar6 + auVar24._0_8_ + 0xd1;
          in_XMM2._8_8_ = auVar24._8_8_ + 0xd1 + (int64_t)piVar6;
          pauVar8[2] = in_XMM2;
          pauVar8 = pauVar8 + 4;
          iVar10 = iVar10 + 8;
        } while (iVar4 < (int)(uVar17 - uVar5));
      }
      if (iVar4 < (int)uVar17) {
        uVar15 = (uint64_t)(uVar17 - iVar4);
        puVar7 = auStack_270 + (int64_t)iVar4 + 1;
        piVar9 = piVar6 + (int64_t)iVar4 + 0xd1;
        do {
          *puVar7 = piVar9;
          puVar7 = puVar7 + 1;
          piVar9 = piVar9 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    qsort(auStack_270 + 1,(int64_t)(int)uVar17,8,&unknown_var_6576_ptr);
    if (1 < (int64_t)(int)uVar17) {
      do {
        if (*(int *)auStack_270[lVar13] == *(int *)auStack_270[lVar13 + 1]) goto LAB_18083bb2d;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)uVar17);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_2a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083bb80(uint64_t param_1,uint64_t param_2,int *param_3)
void FUN_18083bb80(uint64_t param_1,uint64_t param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int *piVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t (*pauVar8) [16];
  int *piVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int64_t lVar17;
  int iVar18;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t in_XMM2 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auStack_278 [32];
  int64_t alStack_258 [2];
  int8_t auStack_248 [512];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_278;
  lVar3 = FUN_1807c4170(param_1,1);
  iVar14 = 0;
  if (lVar3 != 0) {
    iVar12 = 0;
    iVar16 = 0;
    *(int **)(lVar3 + 0x410) = param_3;
    lVar17 = 0;
    *(int *)(lVar3 + 0x404) = param_3[0xd2];
    lVar11 = (int64_t)*param_3;
    if (1 < lVar11) {
      lVar7 = (lVar11 - 2U >> 1) + 1;
      lVar17 = lVar7 * 2;
      piVar5 = param_3 + 2;
      do {
        iVar12 = iVar12 + param_3[(int64_t)piVar5[-1] + 0x20];
        iVar16 = iVar16 + param_3[(int64_t)*piVar5 + 0x20];
        lVar7 = lVar7 + -1;
        piVar5 = piVar5 + 2;
      } while (lVar7 != 0);
    }
    if (lVar17 < lVar11) {
      iVar14 = param_3[(int64_t)param_3[lVar17 + 1] + 0x20];
    }
    iVar13 = 0;
    iVar14 = iVar14 + iVar16 + iVar12;
    lVar17 = (int64_t)iVar14;
    uVar15 = iVar14 + 2;
    *(uint *)(lVar3 + 0x400) = uVar15;
    iVar12 = 2;
    iVar16 = iVar13;
    if (((0 < (int)uVar15) && (7 < uVar15)) && (iVar16 = 0, 1 < ui_system_control_ui)) {
      uVar1 = uVar15 & 0x80000007;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
      }
      pauVar8 = (int8_t (*) [16])auStack_248;
      iVar16 = iVar13;
      iVar13 = 4;
      do {
        iVar2 = iVar13 + -2;
        iVar4 = (int)system_data_f750;
        auVar22._0_4_ = iVar16 + iVar4;
        iVar18 = system_data_f750._4_4_;
        auVar22._4_4_ = iVar16 + iVar18;
        auVar22._8_4_ = iVar16;
        auVar22._12_4_ = iVar16;
        auVar22 = pmovsxdq(in_XMM2,auVar22);
        iVar10 = iVar13 + 2;
        auVar23._0_8_ = param_3 + auVar22._0_8_ + 0xd1;
        auVar23._8_8_ = auVar22._8_8_ + 0xd1 + (int64_t)param_3;
        auVar19._0_4_ = iVar2 + iVar4;
        auVar19._4_4_ = iVar2 + iVar18;
        auVar19._8_4_ = iVar2;
        auVar19._12_4_ = iVar2;
        pauVar8[-1] = auVar23;
        iVar16 = iVar16 + 8;
        auVar22 = pmovsxdq(auVar23,auVar19);
        auVar24._0_8_ = param_3 + auVar22._0_8_ + 0xd1;
        auVar24._8_8_ = auVar22._8_8_ + 0xd1 + (int64_t)param_3;
        auVar20._0_4_ = iVar13 + iVar4;
        auVar20._4_4_ = iVar13 + iVar18;
        auVar20._8_4_ = iVar13;
        auVar20._12_4_ = iVar13;
        *pauVar8 = auVar24;
        auVar22 = pmovsxdq(auVar24,auVar20);
        auVar21._0_4_ = iVar10 + iVar4;
        auVar21._4_4_ = iVar10 + iVar18;
        auVar21._8_4_ = iVar10;
        auVar21._12_4_ = iVar10;
        auVar25._0_8_ = param_3 + auVar22._0_8_ + 0xd1;
        auVar25._8_8_ = auVar22._8_8_ + 0xd1 + (int64_t)param_3;
        pauVar8[1] = auVar25;
        auVar22 = pmovsxdq(auVar25,auVar21);
        in_XMM2._0_8_ = param_3 + auVar22._0_8_ + 0xd1;
        in_XMM2._8_8_ = auVar22._8_8_ + 0xd1 + (int64_t)param_3;
        pauVar8[2] = in_XMM2;
        pauVar8 = pauVar8 + 4;
        iVar13 = iVar13 + 8;
      } while (iVar16 < (int)(uVar15 - uVar1));
    }
    lVar7 = (int64_t)(int)uVar15;
    for (lVar11 = (int64_t)iVar16; lVar11 < lVar7; lVar11 = lVar11 + 1) {
      lVar6 = (int64_t)iVar16;
      iVar16 = iVar16 + 1;
      alStack_258[lVar11] = (int64_t)(param_3 + lVar6 + 0xd1);
    }
    qsort(alStack_258,lVar7,8,&unknown_var_6576_ptr);
    if (0 < lVar7) {
      lVar11 = 0;
      do {
        *(int *)(lVar3 + lVar11 * 4) =
             (int)((alStack_258[lVar11] - (int64_t)param_3) + -0x344 >> 2);
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar7);
    }
    iVar16 = 0;
    if (0 < lVar7) {
      lVar11 = 0;
      do {
        lVar6 = lVar11 * 4;
        lVar11 = lVar11 + 1;
        *(int *)(lVar3 + 0x104 + (int64_t)*(int *)(lVar3 + lVar6) * 4) = iVar16;
        iVar16 = iVar16 + 1;
      } while (lVar11 < lVar7);
    }
    iVar16 = param_3[0xd0];
    if (iVar16 == 1) {
      *(int32_t *)(lVar3 + 0x408) = 0x100;
    }
    else if (iVar16 == 2) {
      *(int32_t *)(lVar3 + 0x408) = 0x80;
    }
    else if (iVar16 == 3) {
      *(int32_t *)(lVar3 + 0x408) = 0x56;
    }
    else if (iVar16 == 4) {
      *(int32_t *)(lVar3 + 0x408) = 0x40;
    }
    if (0 < iVar14) {
      piVar5 = (int *)(lVar3 + 0x304);
      do {
        iVar14 = *(int *)(lVar3 + 0x404);
        iVar16 = *(int *)((int64_t)param_3 + (0x48 - lVar3) + (int64_t)piVar5);
        iVar2 = 0;
        iVar4 = 0;
        iVar13 = 0;
        iVar10 = 1;
        if (0 < iVar12) {
          piVar9 = param_3 + 0xd1;
          iVar13 = 0;
          do {
            iVar18 = *piVar9;
            if ((iVar2 < iVar18) && (iVar18 < iVar16)) {
              iVar2 = iVar18;
              iVar13 = iVar4;
            }
            if ((iVar18 < iVar14) && (iVar16 < iVar18)) {
              iVar14 = iVar18;
              iVar10 = iVar4;
            }
            iVar4 = iVar4 + 1;
            piVar9 = piVar9 + 1;
          } while (iVar4 < iVar12);
        }
        *piVar5 = iVar13;
        iVar12 = iVar12 + 1;
        piVar5[-0x3f] = iVar10;
        piVar5 = piVar5 + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_278);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083bbcf(void)
void FUN_18083bbcf(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int64_t in_RAX;
  int iVar4;
  int *piVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t (*pauVar8) [16];
  int *piVar9;
  int *unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int in_R9D;
  uint uVar14;
  int iVar15;
  int iVar16;
  int64_t lVar17;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t in_XMM2 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int64_t unaff_XMM6_Qa;
  int64_t unaff_XMM6_Qb;
  int64_t lStackX_20;
  uint64_t in_stack_00000230;
  
  iVar11 = 0;
  iVar15 = 0;
  *(int **)(in_RAX + 0x410) = unaff_RBX;
  lVar17 = 0;
  *(int *)(unaff_RSI + 0x404) = unaff_RBX[0xd2];
  lVar10 = (int64_t)*unaff_RBX;
  if (1 < lVar10) {
    lVar7 = (lVar10 - 2U >> 1) + 1;
    lVar17 = lVar7 * 2;
    piVar5 = unaff_RBX + 2;
    do {
      iVar11 = iVar11 + unaff_RBX[(int64_t)piVar5[-1] + 0x20];
      iVar15 = iVar15 + unaff_RBX[(int64_t)*piVar5 + 0x20];
      lVar7 = lVar7 + -1;
      piVar5 = piVar5 + 2;
    } while (lVar7 != 0);
  }
  if (lVar17 < lVar10) {
    in_R9D = unaff_RBX[(int64_t)unaff_RBX[lVar17 + 1] + 0x20];
  }
  iVar12 = 0;
  in_R9D = in_R9D + iVar15 + iVar11;
  lVar17 = (int64_t)in_R9D;
  uVar14 = in_R9D + 2;
  *(uint *)(unaff_RSI + 0x400) = uVar14;
  iVar11 = 2;
  iVar15 = iVar12;
  if (((0 < (int)uVar14) && (7 < uVar14)) && (iVar15 = 0, 1 < ui_system_control_ui)) {
    uVar2 = uVar14 & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    pauVar8 = (int8_t (*) [16])&stack0x00000030;
    iVar15 = iVar12;
    iVar12 = 4;
    do {
      iVar3 = iVar12 + -2;
      auVar21._4_4_ = iVar15 + 1;
      auVar21._0_4_ = iVar15;
      auVar21._8_4_ = iVar15;
      auVar21._12_4_ = iVar15;
      auVar21 = pmovsxdq(in_XMM2,auVar21);
      iVar16 = iVar12 + 2;
      auVar22._0_8_ = (auVar21._0_8_ + 0xd1) * 4 + unaff_XMM6_Qa;
      auVar22._8_8_ = auVar21._8_8_ + 0xd1 + unaff_XMM6_Qb;
      auVar18._4_4_ = iVar12 + -1;
      auVar18._0_4_ = iVar3;
      auVar18._8_4_ = iVar3;
      auVar18._12_4_ = iVar3;
      pauVar8[-1] = auVar22;
      iVar15 = iVar15 + 8;
      auVar21 = pmovsxdq(auVar22,auVar18);
      auVar23._0_8_ = (auVar21._0_8_ + 0xd1) * 4 + unaff_XMM6_Qa;
      auVar23._8_8_ = auVar21._8_8_ + 0xd1 + unaff_XMM6_Qb;
      auVar19._4_4_ = iVar12 + 1;
      auVar19._0_4_ = iVar12;
      auVar19._8_4_ = iVar12;
      auVar19._12_4_ = iVar12;
      *pauVar8 = auVar23;
      auVar21 = pmovsxdq(auVar23,auVar19);
      auVar20._4_4_ = iVar12 + 3;
      auVar20._0_4_ = iVar16;
      auVar20._8_4_ = iVar16;
      auVar20._12_4_ = iVar16;
      auVar24._0_8_ = (auVar21._0_8_ + 0xd1) * 4 + unaff_XMM6_Qa;
      auVar24._8_8_ = auVar21._8_8_ + 0xd1 + unaff_XMM6_Qb;
      pauVar8[1] = auVar24;
      auVar21 = pmovsxdq(auVar24,auVar20);
      in_XMM2._0_8_ = (auVar21._0_8_ + 0xd1) * 4 + unaff_XMM6_Qa;
      in_XMM2._8_8_ = auVar21._8_8_ + 0xd1 + unaff_XMM6_Qb;
      pauVar8[2] = in_XMM2;
      pauVar8 = pauVar8 + 4;
      iVar12 = iVar12 + 8;
    } while (iVar15 < (int)(uVar14 - uVar2));
  }
  lVar7 = (int64_t)(int)uVar14;
  for (lVar10 = (int64_t)iVar15; lVar10 < lVar7; lVar10 = lVar10 + 1) {
    lVar6 = (int64_t)iVar15;
    iVar15 = iVar15 + 1;
    (&lStackX_20)[lVar10] = (int64_t)(unaff_RBX + lVar6 + 0xd1);
  }
  qsort(&lStackX_20,lVar7,8,&unknown_var_6576_ptr);
  if (0 < lVar7) {
    lVar10 = 0;
    do {
      *(int *)(unaff_RSI + lVar10 * 4) =
           (int)(((&lStackX_20)[lVar10] - (int64_t)unaff_RBX) + -0x344 >> 2);
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar7);
  }
  iVar15 = 0;
  if (0 < lVar7) {
    lVar10 = 0;
    do {
      lVar6 = lVar10 * 4;
      lVar10 = lVar10 + 1;
      *(int *)(unaff_RSI + 0x104 + (int64_t)*(int *)(unaff_RSI + lVar6) * 4) = iVar15;
      iVar15 = iVar15 + 1;
    } while (lVar10 < lVar7);
  }
  iVar15 = unaff_RBX[0xd0];
  if (iVar15 == 1) {
    *(int32_t *)(unaff_RSI + 0x408) = 0x100;
  }
  else if (iVar15 == 2) {
    *(int32_t *)(unaff_RSI + 0x408) = 0x80;
  }
  else if (iVar15 == 3) {
    *(int32_t *)(unaff_RSI + 0x408) = 0x56;
  }
  else if (iVar15 == 4) {
    *(int32_t *)(unaff_RSI + 0x408) = 0x40;
  }
  if (0 < in_R9D) {
    piVar5 = (int *)(unaff_RSI + 0x304);
    do {
      iVar15 = *(int *)(unaff_RSI + 0x404);
      iVar12 = *(int *)((int64_t)unaff_RBX + (0x48 - unaff_RSI) + (int64_t)piVar5);
      iVar13 = 0;
      iVar4 = 0;
      iVar16 = 0;
      iVar3 = 1;
      if (0 < iVar11) {
        piVar9 = unaff_RBX + 0xd1;
        iVar16 = 0;
        do {
          iVar1 = *piVar9;
          if ((iVar13 < iVar1) && (iVar1 < iVar12)) {
            iVar13 = iVar1;
            iVar16 = iVar4;
          }
          if ((iVar1 < iVar15) && (iVar12 < iVar1)) {
            iVar15 = iVar1;
            iVar3 = iVar4;
          }
          iVar4 = iVar4 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar4 < iVar11);
      }
      *piVar5 = iVar16;
      iVar11 = iVar11 + 1;
      piVar5[-0x3f] = iVar3;
      piVar5 = piVar5 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000230 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18083be79(void)
void FUN_18083be79(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int64_t unaff_RBX;
  int iVar5;
  int64_t unaff_RSI;
  int unaff_EDI;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int64_t unaff_R15;
  uint64_t in_stack_00000230;
  
  piVar9 = (int *)(unaff_RSI + 0x304);
  do {
    iVar7 = *(int *)(unaff_RSI + 0x404);
    iVar8 = 0;
    iVar1 = *(int *)((unaff_RBX - unaff_RSI) + 0x48 + (int64_t)piVar9);
    iVar6 = 0;
    iVar3 = 0;
    iVar5 = 1;
    if (0 < unaff_EDI) {
      piVar4 = (int *)(unaff_RBX + 0x344);
      do {
        iVar2 = *piVar4;
        if ((iVar6 < iVar2) && (iVar2 < iVar1)) {
          iVar8 = iVar3;
          iVar6 = iVar2;
        }
        if ((iVar2 < iVar7) && (iVar1 < iVar2)) {
          iVar5 = iVar3;
          iVar7 = iVar2;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < unaff_EDI);
    }
    *piVar9 = iVar8;
    unaff_EDI = unaff_EDI + 1;
    piVar9[-0x3f] = iVar5;
    piVar9 = piVar9 + 1;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000230 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18083befc(void)
void FUN_18083befc(void)

{
  uint64_t in_stack_00000230;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000230 ^ (uint64_t)&stack0x00000000);
}





