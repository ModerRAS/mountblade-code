#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part314.c - 5 个函数

// 函数: void FUN_18083b202(uint64_t param_1,int8_t (*param_2) [32],int param_3,int param_4)
void FUN_18083b202(uint64_t param_1,int8_t (*param_2) [32],int param_3,int param_4)

{
  int8_t auVar1 [32];
  int8_t auVar2 [16];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [32];
  longlong in_RAX;
  longlong lVar14;
  int8_t (*pauVar15) [32];
  int8_t (*pauVar16) [32];
  longlong lVar17;
  longlong lVar18;
  uint64_t unaff_RSI;
  uint uVar19;
  uint64_t unaff_RDI;
  int8_t (*pauVar20) [32];
  ulonglong uVar21;
  uint64_t unaff_R13;
  int iVar22;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int8_t in_ZMM0 [64];
  float in_register_0000125c;
  int8_t auVar23 [32];
  int8_t auVar24 [32];
  int8_t in_ZMM4 [64];
  int8_t in_ZMM6 [64];
  uint uStack0000000000000080;
  int8_t (*in_stack_00000088) [32];
  int iStack0000000000000090;
  int in_stack_00000098;
  
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  iStack0000000000000090 = param_3 + -1;
  uStack0000000000000080 = 0;
  if (0 < iStack0000000000000090) {
    *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
    uVar19 = 1;
    *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
    *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
    *(int8_t (*) [16])(in_RAX + -0x48) = in_ZMM6._0_16_;
    pauVar16 = param_2;
    do {
      auVar13 = _DAT_1809815e0;
      param_2 = pauVar16;
      if (0 < (int)uVar19) {
        iVar22 = 4 << (uStack0000000000000080 & 0x1f);
        lVar17 = (longlong)param_4 >> ((longlong)(int)uStack0000000000000080 & 0x3fU);
        auVar2 = vpinsrd_avx((int8_t  [16])0x0,iVar22 * 3,0);
        auVar2 = vpinsrd_avx(auVar2,iVar22 * 2,1);
        lVar14 = (longlong)param_4;
        lVar18 = lVar17 >> 1;
        vpinsrd_avx(auVar2,iVar22,2);
        uVar21 = (ulonglong)uVar19;
        do {
          pauVar15 = (int8_t (*) [32])(pauVar16[-1] + lVar18 * 4);
          pauVar20 = (int8_t (*) [32])((longlong)pauVar15 + (lVar17 - lVar18) * 4);
          do {
            auVar1 = *pauVar20;
            auVar4 = vsubps_avx(auVar1,*pauVar15);
            auVar5 = vpcmpeqb_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
            auVar24 = vgatherdpd(in_ZMM4._0_32_,auVar5);
            in_ZMM4 = ZEXT3264(auVar24);
            fVar6 = *(float *)(*pauVar15 + 4);
            fVar7 = *(float *)(*pauVar15 + 8);
            fVar8 = *(float *)(*pauVar15 + 0xc);
            fVar9 = *(float *)(*pauVar15 + 0x10);
            fVar10 = *(float *)(*pauVar15 + 0x14);
            fVar11 = *(float *)(*pauVar15 + 0x18);
            fVar12 = *(float *)(*pauVar15 + 0x1c);
            *(float *)*pauVar20 = auVar1._0_4_ + *(float *)*pauVar15;
            *(float *)(*pauVar20 + 4) = auVar1._4_4_ + fVar6;
            *(float *)(*pauVar20 + 8) = auVar1._8_4_ + fVar7;
            *(float *)(*pauVar20 + 0xc) = auVar1._12_4_ + fVar8;
            *(float *)(*pauVar20 + 0x10) = auVar1._16_4_ + fVar9;
            *(float *)(*pauVar20 + 0x14) = auVar1._20_4_ + fVar10;
            *(float *)(*pauVar20 + 0x18) = auVar1._24_4_ + fVar11;
            *(float *)(*pauVar20 + 0x1c) = auVar1._28_4_ + fVar12;
            auVar5 = vshufps_avx(auVar4,auVar4,0xa0);
            auVar3 = vshufps_avx(auVar24,auVar24,0xb1);
            in_ZMM0 = ZEXT3264(auVar3);
            auVar4 = vshufps_avx(auVar4,auVar4,0xf5);
            auVar23._0_4_ =
                 auVar5._0_4_ * auVar24._0_4_ * auVar13._0_4_ + auVar4._0_4_ * auVar3._0_4_;
            auVar23._4_4_ =
                 auVar5._4_4_ * auVar24._4_4_ * auVar13._4_4_ + auVar4._4_4_ * auVar3._4_4_;
            auVar23._8_4_ =
                 auVar5._8_4_ * auVar24._8_4_ * auVar13._8_4_ + auVar4._8_4_ * auVar3._8_4_;
            auVar23._12_4_ =
                 auVar5._12_4_ * auVar24._12_4_ * auVar13._12_4_ + auVar4._12_4_ * auVar3._12_4_;
            auVar23._16_4_ =
                 auVar5._16_4_ * auVar24._16_4_ * auVar13._16_4_ + auVar4._16_4_ * auVar3._16_4_;
            auVar23._20_4_ =
                 auVar5._20_4_ * auVar24._20_4_ * auVar13._20_4_ + auVar4._20_4_ * auVar3._20_4_;
            auVar23._24_4_ =
                 auVar5._24_4_ * auVar24._24_4_ * auVar13._24_4_ + auVar4._24_4_ * auVar3._24_4_;
            auVar23._28_4_ = auVar1._28_4_ + in_register_0000125c;
            *pauVar15 = auVar23;
            pauVar15 = pauVar15 + -1;
            pauVar20 = pauVar20 + -1;
          } while (pauVar16 <= pauVar15);
          pauVar16 = (int8_t (*) [32])
                     (*pauVar16 + (lVar14 >> ((longlong)(int)uStack0000000000000080 & 0x3fU)) * 4);
          uVar21 = uVar21 - 1;
          param_2 = in_stack_00000088;
          param_4 = in_stack_00000098;
        } while (uVar21 != 0);
      }
      uStack0000000000000080 = uStack0000000000000080 + 1;
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      iStack0000000000000090 = iStack0000000000000090 + -1;
      pauVar16 = param_2;
    } while (0 < iStack0000000000000090);
  }
  if (0 < param_4) {
    uVar21 = (ulonglong)((param_4 - 1U >> 5) + 1);
    do {
      FUN_18083b4a0(param_2);
      param_2 = param_2 + 4;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18083b22e(uint64_t param_1,uint param_2,uint64_t param_3,int param_4)

{
  int8_t auVar1 [32];
  int8_t auVar2 [16];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auVar13 [32];
  longlong in_RAX;
  int8_t (*pauVar14) [32];
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint64_t unaff_RDI;
  int8_t (*pauVar19) [32];
  ulonglong uVar20;
  int8_t (*unaff_R12) [32];
  int unaff_R13D;
  int iVar21;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int8_t in_ZMM0 [64];
  float in_register_0000125c;
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  int8_t in_ZMM4 [64];
  int8_t in_ZMM6 [64];
  uint in_stack_00000080;
  int8_t (*in_stack_00000088) [32];
  int in_stack_00000090;
  int in_stack_00000098;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  uVar18 = 1;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int8_t (*) [16])(in_RAX + -0x48) = in_ZMM6._0_16_;
  uVar20 = (ulonglong)(param_2 + 4);
  do {
    auVar13 = _DAT_1809815e0;
    if (0 < (int)uVar18) {
      iVar21 = (int)uVar20 << (param_2 & 0x1f);
      lVar15 = (longlong)param_4 >> ((longlong)(int)param_2 & 0x3fU);
      auVar2 = vpinsrd_avx((int8_t  [16])0x0,iVar21 * 3,0);
      auVar2 = vpinsrd_avx(auVar2,iVar21 * 2,1);
      lVar16 = lVar15 >> 1;
      vpinsrd_avx(auVar2,iVar21,2);
      uVar20 = (ulonglong)uVar18;
      do {
        pauVar14 = (int8_t (*) [32])(unaff_R12[-1] + lVar16 * 4);
        pauVar19 = (int8_t (*) [32])((longlong)pauVar14 + (lVar15 - lVar16) * 4);
        do {
          auVar1 = *pauVar19;
          auVar4 = vsubps_avx(auVar1,*pauVar14);
          auVar5 = vpcmpeqb_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
          auVar23 = vgatherdpd(in_ZMM4._0_32_,auVar5);
          in_ZMM4 = ZEXT3264(auVar23);
          fVar6 = *(float *)(*pauVar14 + 4);
          fVar7 = *(float *)(*pauVar14 + 8);
          fVar8 = *(float *)(*pauVar14 + 0xc);
          fVar9 = *(float *)(*pauVar14 + 0x10);
          fVar10 = *(float *)(*pauVar14 + 0x14);
          fVar11 = *(float *)(*pauVar14 + 0x18);
          fVar12 = *(float *)(*pauVar14 + 0x1c);
          *(float *)*pauVar19 = auVar1._0_4_ + *(float *)*pauVar14;
          *(float *)(*pauVar19 + 4) = auVar1._4_4_ + fVar6;
          *(float *)(*pauVar19 + 8) = auVar1._8_4_ + fVar7;
          *(float *)(*pauVar19 + 0xc) = auVar1._12_4_ + fVar8;
          *(float *)(*pauVar19 + 0x10) = auVar1._16_4_ + fVar9;
          *(float *)(*pauVar19 + 0x14) = auVar1._20_4_ + fVar10;
          *(float *)(*pauVar19 + 0x18) = auVar1._24_4_ + fVar11;
          *(float *)(*pauVar19 + 0x1c) = auVar1._28_4_ + fVar12;
          auVar5 = vshufps_avx(auVar4,auVar4,0xa0);
          auVar3 = vshufps_avx(auVar23,auVar23,0xb1);
          in_ZMM0 = ZEXT3264(auVar3);
          auVar4 = vshufps_avx(auVar4,auVar4,0xf5);
          auVar22._0_4_ = auVar5._0_4_ * auVar23._0_4_ * auVar13._0_4_ + auVar4._0_4_ * auVar3._0_4_
          ;
          auVar22._4_4_ = auVar5._4_4_ * auVar23._4_4_ * auVar13._4_4_ + auVar4._4_4_ * auVar3._4_4_
          ;
          auVar22._8_4_ = auVar5._8_4_ * auVar23._8_4_ * auVar13._8_4_ + auVar4._8_4_ * auVar3._8_4_
          ;
          auVar22._12_4_ =
               auVar5._12_4_ * auVar23._12_4_ * auVar13._12_4_ + auVar4._12_4_ * auVar3._12_4_;
          auVar22._16_4_ =
               auVar5._16_4_ * auVar23._16_4_ * auVar13._16_4_ + auVar4._16_4_ * auVar3._16_4_;
          auVar22._20_4_ =
               auVar5._20_4_ * auVar23._20_4_ * auVar13._20_4_ + auVar4._20_4_ * auVar3._20_4_;
          auVar22._24_4_ =
               auVar5._24_4_ * auVar23._24_4_ * auVar13._24_4_ + auVar4._24_4_ * auVar3._24_4_;
          auVar22._28_4_ = auVar1._28_4_ + in_register_0000125c;
          *pauVar14 = auVar22;
          pauVar14 = pauVar14 + -1;
          pauVar19 = pauVar19 + -1;
        } while (unaff_R12 <= pauVar14);
        unaff_R12 = (int8_t (*) [32])
                    (*unaff_R12 + ((longlong)param_4 >> ((longlong)(int)param_2 & 0x3fU)) * 4);
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      uVar20 = 4;
      unaff_R12 = in_stack_00000088;
      param_2 = in_stack_00000080;
      param_4 = in_stack_00000098;
      unaff_R13D = in_stack_00000090;
    }
    param_2 = param_2 + 1;
    uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
    unaff_R13D = unaff_R13D + -1;
    in_stack_00000080 = param_2;
    in_stack_00000090 = unaff_R13D;
  } while (0 < unaff_R13D);
  if (0 < param_4) {
    uVar17 = (ulonglong)((param_4 - 1U >> 5) + 1);
    do {
      uVar20 = FUN_18083b4a0(unaff_R12);
      unaff_R12 = unaff_R12 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return uVar20;
}





// 函数: void FUN_18083b393(void)
void FUN_18083b393(void)

{
  ulonglong uVar1;
  int in_R9D;
  longlong unaff_R12;
  
  if (0 < in_R9D) {
    uVar1 = (ulonglong)((in_R9D - 1U >> 5) + 1);
    do {
      FUN_18083b4a0(unaff_R12);
      unaff_R12 = unaff_R12 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}





// 函数: void FUN_18083b3a2(void)
void FUN_18083b3a2(void)

{
  ulonglong uVar1;
  int in_R9D;
  longlong unaff_R12;
  
  uVar1 = (ulonglong)((in_R9D - 1U >> 5) + 1);
  do {
    FUN_18083b4a0(unaff_R12);
    unaff_R12 = unaff_R12 + 0x80;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083b3d0(int8_t (*param_1) [32])
void FUN_18083b3d0(int8_t (*param_1) [32])

{
  int8_t auVar1 [32];
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  float fVar4;
  int8_t auVar5 [32];
  int8_t in_ZMM4 [64];
  int8_t auVar6 [64];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  
  auVar1 = param_1[1];
  auVar2 = *param_1;
  auVar3 = vsubps_avx(auVar1,auVar2);
  auVar6._0_4_ = auVar3._0_4_ * 1.0;
  auVar6._4_4_ = auVar3._4_4_ * -1.0;
  auVar6._8_4_ = auVar3._8_4_ * 0.0;
  auVar6._12_4_ = auVar3._12_4_ * 0.0;
  auVar6._16_4_ = auVar3._16_4_ * 1.0;
  auVar6._20_4_ = auVar3._20_4_ * -1.0;
  auVar6._28_36_ = in_ZMM4._28_36_;
  auVar6._24_4_ = auVar3._24_4_ * 0.0;
  auVar3 = vblendps_avx(auVar2,auVar1,0xf);
  auVar5 = vblendps_avx(auVar2,auVar1,0xf0);
  auVar3 = vsubps_avx(auVar5,auVar3);
  auVar7._0_4_ = auVar1._0_4_ + auVar2._0_4_;
  auVar7._4_4_ = auVar1._4_4_ + auVar2._4_4_;
  auVar7._8_4_ = auVar1._8_4_ + auVar2._8_4_;
  auVar7._12_4_ = auVar1._12_4_ + auVar2._12_4_;
  auVar7._16_4_ = auVar1._16_4_ + auVar2._16_4_;
  auVar7._20_4_ = auVar1._20_4_ + auVar2._20_4_;
  auVar7._24_4_ = auVar1._24_4_ + auVar2._24_4_;
  auVar7._28_4_ = auVar1._28_4_ + auVar2._28_4_;
  auVar1 = vshufps_avx(auVar6._0_32_,auVar6._0_32_,0xe1);
  auVar2._4_4_ = (auVar3._4_4_ + auVar1._4_4_) * 0.70710677;
  auVar2._0_4_ = (auVar3._0_4_ + auVar1._0_4_) * 0.70710677;
  auVar2._8_4_ = (auVar3._8_4_ + auVar1._8_4_) * -1.0;
  auVar2._12_4_ = (auVar3._12_4_ + auVar1._12_4_) * 1.0;
  auVar2._16_4_ = (auVar3._16_4_ + auVar1._16_4_) * 0.70710677;
  auVar2._20_4_ = (auVar3._20_4_ + auVar1._20_4_) * 0.70710677;
  fVar4 = auVar5._28_4_;
  auVar2._24_4_ = (auVar3._24_4_ + auVar1._24_4_) * 1.0;
  auVar2._28_4_ = fVar4;
  auVar1 = vshufps_avx(auVar2,auVar2,0xb4);
  auVar1 = vblendps_avx(auVar1,auVar2,0xf0);
  auVar2 = vperm2f128_avx(auVar1,auVar1,0);
  auVar1 = vperm2f128_avx(auVar1,auVar1,0x11);
  auVar5._0_4_ = auVar2._0_4_ * -1.0 + auVar1._0_4_;
  auVar5._4_4_ = auVar2._4_4_ * -1.0 + auVar1._4_4_;
  auVar5._8_4_ = auVar2._8_4_ * -1.0 + auVar1._8_4_;
  auVar5._12_4_ = auVar2._12_4_ * -1.0 + auVar1._12_4_;
  auVar5._16_4_ = auVar2._16_4_ * 1.0 + auVar1._16_4_;
  auVar5._20_4_ = auVar2._20_4_ * 1.0 + auVar1._20_4_;
  auVar5._24_4_ = auVar2._24_4_ * 1.0 + auVar1._24_4_;
  auVar5._28_4_ = fVar4 + auVar1._28_4_;
  auVar1 = vperm2f128_avx(auVar7,auVar7,0);
  auVar3 = vpermilps_avx(auVar5,_DAT_180981440);
  auVar2 = vperm2f128_avx(auVar7,auVar7,0x11);
  auVar8._0_4_ = auVar1._0_4_ * -1.0 + auVar2._0_4_;
  auVar8._4_4_ = auVar1._4_4_ * -1.0 + auVar2._4_4_;
  auVar8._8_4_ = auVar1._8_4_ * -1.0 + auVar2._8_4_;
  auVar8._12_4_ = auVar1._12_4_ * -1.0 + auVar2._12_4_;
  auVar8._16_4_ = auVar1._16_4_ * 1.0 + auVar2._16_4_;
  auVar8._20_4_ = auVar1._20_4_ * 1.0 + auVar2._20_4_;
  auVar8._24_4_ = auVar1._24_4_ * 1.0 + auVar2._24_4_;
  auVar8._28_4_ = fVar4 + auVar2._28_4_;
  auVar2 = vpermilps_avx(auVar8,_DAT_180981440);
  auVar1 = vshufps_avx(auVar5,auVar5,0xee);
  *(float *)*param_1 = auVar3._0_4_ * 1.0 + auVar1._0_4_;
  *(float *)(*param_1 + 4) = auVar3._4_4_ * -1.0 + auVar1._4_4_;
  *(float *)(*param_1 + 8) = auVar3._8_4_ * -1.0 + auVar1._8_4_;
  *(float *)(*param_1 + 0xc) = auVar3._12_4_ * 1.0 + auVar1._12_4_;
  *(float *)(*param_1 + 0x10) = auVar3._16_4_ * -1.0 + auVar1._16_4_;
  *(float *)(*param_1 + 0x14) = auVar3._20_4_ * -1.0 + auVar1._20_4_;
  *(float *)(*param_1 + 0x18) = auVar3._24_4_ * 1.0 + auVar1._24_4_;
  *(float *)(*param_1 + 0x1c) = fVar4 + auVar1._28_4_;
  auVar1 = vshufps_avx(auVar8,auVar8,0xee);
  *(float *)param_1[1] = auVar2._0_4_ * 1.0 + auVar1._0_4_;
  *(float *)(param_1[1] + 4) = auVar2._4_4_ * -1.0 + auVar1._4_4_;
  *(float *)(param_1[1] + 8) = auVar2._8_4_ * -1.0 + auVar1._8_4_;
  *(float *)(param_1[1] + 0xc) = auVar2._12_4_ * 1.0 + auVar1._12_4_;
  *(float *)(param_1[1] + 0x10) = auVar2._16_4_ * -1.0 + auVar1._16_4_;
  *(float *)(param_1[1] + 0x14) = auVar2._20_4_ * -1.0 + auVar1._20_4_;
  *(float *)(param_1[1] + 0x18) = auVar2._24_4_ * 1.0 + auVar1._24_4_;
  *(float *)(param_1[1] + 0x1c) = fVar4 + auVar1._28_4_;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18083b4a0(int8_t (*param_1) [32])
void FUN_18083b4a0(int8_t (*param_1) [32])

{
  int8_t (*pauVar1) [32];
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  float fVar8;
  float in_register_0000125c;
  int8_t auVar9 [32];
  float in_register_0000131c;
  int8_t auVar10 [64];
  int8_t auVar11 [36];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  
  pauVar1 = param_1 + 2;
  auVar2 = param_1[3];
  auVar3 = *pauVar1;
  auVar4 = param_1[1];
  auVar5 = vsubps_avx(auVar4,auVar2);
  auVar7 = vpermilps_avx(auVar5,_DAT_1809813c0);
  auVar9 = *param_1;
  auVar6 = vsubps_avx(auVar9,auVar3);
  auVar12 = vshufps_avx(auVar6,auVar6,0xb5);
  auVar13 = vshufps_avx(auVar6,auVar6,0);
  *(float *)*param_1 = (auVar6._0_4_ * 0.0 + auVar12._0_4_) * 0.38268343 + auVar13._0_4_ * 0.9238795
  ;
  *(float *)(*param_1 + 4) =
       (auVar6._4_4_ * 0.0 + auVar12._4_4_) * 0.9238795 + auVar13._4_4_ * -0.38268343;
  *(float *)(*param_1 + 8) = (auVar6._8_4_ * 1.0 + auVar12._8_4_) * 0.70710677 + auVar13._8_4_ * 0.0
  ;
  *(float *)(*param_1 + 0xc) =
       (auVar6._12_4_ * -1.0 + auVar12._12_4_) * -0.70710677 + auVar13._12_4_ * 0.0;
  *(float *)(*param_1 + 0x10) =
       (auVar6._16_4_ * 0.0 + auVar12._16_4_) * 0.9238795 + auVar13._16_4_ * 0.38268343;
  *(float *)(*param_1 + 0x14) =
       (auVar6._20_4_ * 0.0 + auVar12._20_4_) * 0.38268343 + auVar13._20_4_ * -0.9238795;
  *(float *)(*param_1 + 0x18) = (auVar6._24_4_ * 0.0 + auVar12._24_4_) * 1.0 + auVar13._24_4_ * 0.0;
  *(float *)(*param_1 + 0x1c) = in_register_0000131c + in_register_0000125c;
  auVar12 = vblendps_avx(ZEXT832(0) << 0x20,auVar5,0xf);
  auVar13 = vpermilps_avx(auVar5,_DAT_1809814a0);
  *(float *)param_1[1] =
       (auVar7._0_4_ * 0.0 + auVar12._0_4_) * -0.38268343 + auVar13._0_4_ * 0.9238795;
  *(float *)(param_1[1] + 4) =
       (auVar7._4_4_ * 0.0 + auVar12._4_4_) * -0.38268343 + auVar13._4_4_ * -0.9238795;
  *(float *)(param_1[1] + 8) =
       (auVar7._8_4_ * -1.0 + auVar12._8_4_) * -0.70710677 + auVar13._8_4_ * 0.0;
  *(float *)(param_1[1] + 0xc) =
       (auVar7._12_4_ * 1.0 + auVar12._12_4_) * -0.70710677 + auVar13._12_4_ * 0.0;
  *(float *)(param_1[1] + 0x10) =
       (auVar7._16_4_ * 0.38268343 + auVar12._16_4_) * 1.0 + auVar13._16_4_ * -0.9238795;
  *(float *)(param_1[1] + 0x14) =
       (auVar7._20_4_ * -0.9238795 + auVar12._20_4_) * 1.0 + auVar13._20_4_ * -0.38268343;
  *(float *)(param_1[1] + 0x18) =
       (auVar7._24_4_ * 0.0 + auVar12._24_4_) * 1.0 + auVar13._24_4_ * -1.0;
  *(float *)(param_1[1] + 0x1c) = auVar6._28_4_ + auVar13._28_4_;
  *(float *)*pauVar1 = auVar9._0_4_ + auVar3._0_4_;
  *(float *)(param_1[2] + 4) = auVar9._4_4_ + auVar3._4_4_;
  *(float *)(param_1[2] + 8) = auVar9._8_4_ + auVar3._8_4_;
  *(float *)(param_1[2] + 0xc) = auVar9._12_4_ + auVar3._12_4_;
  *(float *)(param_1[2] + 0x10) = auVar9._16_4_ + auVar3._16_4_;
  *(float *)(param_1[2] + 0x14) = auVar9._20_4_ + auVar3._20_4_;
  *(float *)(param_1[2] + 0x18) = auVar9._24_4_ + auVar3._24_4_;
  *(float *)(param_1[2] + 0x1c) = auVar9._28_4_ + auVar3._28_4_;
  *(float *)param_1[3] = auVar4._0_4_ + auVar2._0_4_;
  *(float *)(param_1[3] + 4) = auVar4._4_4_ + auVar2._4_4_;
  *(float *)(param_1[3] + 8) = auVar4._8_4_ + auVar2._8_4_;
  *(float *)(param_1[3] + 0xc) = auVar4._12_4_ + auVar2._12_4_;
  *(float *)(param_1[3] + 0x10) = auVar4._16_4_ + auVar2._16_4_;
  *(float *)(param_1[3] + 0x14) = auVar4._20_4_ + auVar2._20_4_;
  *(float *)(param_1[3] + 0x18) = auVar4._24_4_ + auVar2._24_4_;
  *(float *)(param_1[3] + 0x1c) = auVar4._28_4_ + auVar2._28_4_;
  auVar11 = (int8_t  [36])0x0;
  FUN_18083b3d0();
  auVar2 = param_1[3];
  auVar3 = *pauVar1;
  auVar4 = vsubps_avx(auVar2,auVar3);
  auVar10._0_4_ = auVar4._0_4_ * 1.0;
  auVar10._4_4_ = auVar4._4_4_ * -1.0;
  auVar10._8_4_ = auVar4._8_4_ * 0.0;
  auVar10._12_4_ = auVar4._12_4_ * 0.0;
  auVar10._16_4_ = auVar4._16_4_ * 1.0;
  auVar10._20_4_ = auVar4._20_4_ * -1.0;
  auVar10._24_4_ = auVar4._24_4_ * 0.0;
  auVar10._28_36_ = auVar11;
  auVar4 = vblendps_avx(auVar3,auVar2,0xf);
  auVar9 = vblendps_avx(auVar3,auVar2,0xf0);
  auVar4 = vsubps_avx(auVar9,auVar4);
  auVar12._0_4_ = auVar2._0_4_ + auVar3._0_4_;
  auVar12._4_4_ = auVar2._4_4_ + auVar3._4_4_;
  auVar12._8_4_ = auVar2._8_4_ + auVar3._8_4_;
  auVar12._12_4_ = auVar2._12_4_ + auVar3._12_4_;
  auVar12._16_4_ = auVar2._16_4_ + auVar3._16_4_;
  auVar12._20_4_ = auVar2._20_4_ + auVar3._20_4_;
  auVar12._24_4_ = auVar2._24_4_ + auVar3._24_4_;
  auVar12._28_4_ = auVar2._28_4_ + auVar3._28_4_;
  auVar2 = vshufps_avx(auVar10._0_32_,auVar10._0_32_,0xe1);
  auVar3._4_4_ = (auVar4._4_4_ + auVar2._4_4_) * 0.70710677;
  auVar3._0_4_ = (auVar4._0_4_ + auVar2._0_4_) * 0.70710677;
  auVar3._8_4_ = (auVar4._8_4_ + auVar2._8_4_) * -1.0;
  auVar3._12_4_ = (auVar4._12_4_ + auVar2._12_4_) * 1.0;
  auVar3._16_4_ = (auVar4._16_4_ + auVar2._16_4_) * 0.70710677;
  auVar3._20_4_ = (auVar4._20_4_ + auVar2._20_4_) * 0.70710677;
  fVar8 = auVar9._28_4_;
  auVar3._24_4_ = (auVar4._24_4_ + auVar2._24_4_) * 1.0;
  auVar3._28_4_ = fVar8;
  auVar2 = vshufps_avx(auVar3,auVar3,0xb4);
  auVar2 = vblendps_avx(auVar2,auVar3,0xf0);
  auVar3 = vperm2f128_avx(auVar2,auVar2,0);
  auVar2 = vperm2f128_avx(auVar2,auVar2,0x11);
  auVar9._0_4_ = auVar3._0_4_ * -1.0 + auVar2._0_4_;
  auVar9._4_4_ = auVar3._4_4_ * -1.0 + auVar2._4_4_;
  auVar9._8_4_ = auVar3._8_4_ * -1.0 + auVar2._8_4_;
  auVar9._12_4_ = auVar3._12_4_ * -1.0 + auVar2._12_4_;
  auVar9._16_4_ = auVar3._16_4_ * 1.0 + auVar2._16_4_;
  auVar9._20_4_ = auVar3._20_4_ * 1.0 + auVar2._20_4_;
  auVar9._24_4_ = auVar3._24_4_ * 1.0 + auVar2._24_4_;
  auVar9._28_4_ = fVar8 + auVar2._28_4_;
  auVar2 = vperm2f128_avx(auVar12,auVar12,0);
  auVar4 = vpermilps_avx(auVar9,_DAT_180981440);
  auVar3 = vperm2f128_avx(auVar12,auVar12,0x11);
  auVar13._0_4_ = auVar2._0_4_ * -1.0 + auVar3._0_4_;
  auVar13._4_4_ = auVar2._4_4_ * -1.0 + auVar3._4_4_;
  auVar13._8_4_ = auVar2._8_4_ * -1.0 + auVar3._8_4_;
  auVar13._12_4_ = auVar2._12_4_ * -1.0 + auVar3._12_4_;
  auVar13._16_4_ = auVar2._16_4_ * 1.0 + auVar3._16_4_;
  auVar13._20_4_ = auVar2._20_4_ * 1.0 + auVar3._20_4_;
  auVar13._24_4_ = auVar2._24_4_ * 1.0 + auVar3._24_4_;
  auVar13._28_4_ = fVar8 + auVar3._28_4_;
  auVar3 = vpermilps_avx(auVar13,_DAT_180981440);
  auVar2 = vshufps_avx(auVar9,auVar9,0xee);
  *(float *)*pauVar1 = auVar4._0_4_ * 1.0 + auVar2._0_4_;
  *(float *)(param_1[2] + 4) = auVar4._4_4_ * -1.0 + auVar2._4_4_;
  *(float *)(param_1[2] + 8) = auVar4._8_4_ * -1.0 + auVar2._8_4_;
  *(float *)(param_1[2] + 0xc) = auVar4._12_4_ * 1.0 + auVar2._12_4_;
  *(float *)(param_1[2] + 0x10) = auVar4._16_4_ * -1.0 + auVar2._16_4_;
  *(float *)(param_1[2] + 0x14) = auVar4._20_4_ * -1.0 + auVar2._20_4_;
  *(float *)(param_1[2] + 0x18) = auVar4._24_4_ * 1.0 + auVar2._24_4_;
  *(float *)(param_1[2] + 0x1c) = fVar8 + auVar2._28_4_;
  auVar2 = vshufps_avx(auVar13,auVar13,0xee);
  *(float *)param_1[3] = auVar3._0_4_ * 1.0 + auVar2._0_4_;
  *(float *)(param_1[3] + 4) = auVar3._4_4_ * -1.0 + auVar2._4_4_;
  *(float *)(param_1[3] + 8) = auVar3._8_4_ * -1.0 + auVar2._8_4_;
  *(float *)(param_1[3] + 0xc) = auVar3._12_4_ * 1.0 + auVar2._12_4_;
  *(float *)(param_1[3] + 0x10) = auVar3._16_4_ * -1.0 + auVar2._16_4_;
  *(float *)(param_1[3] + 0x14) = auVar3._20_4_ * -1.0 + auVar2._20_4_;
  *(float *)(param_1[3] + 0x18) = auVar3._24_4_ * 1.0 + auVar2._24_4_;
  *(float *)(param_1[3] + 0x1c) = fVar8 + auVar2._28_4_;
  return;
}





