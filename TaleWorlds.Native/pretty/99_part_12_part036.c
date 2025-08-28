#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part036.c - 4 个函数
// 函数: void function_7e2851(void)
void function_7e2851(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x0001807e29b1)
// WARNING: Removing unreachable block (ram,0x0001807e29c5)
// WARNING: Removing unreachable block (ram,0x0001807e2a91)
// WARNING: Removing unreachable block (ram,0x0001807e2aa5)
// 函数: void function_7e28b0(int64_t param_1,int64_t param_2,uint param_3,int8_t (*param_4) [32],
void function_7e28b0(int64_t param_1,int64_t param_2,uint param_3,int8_t (*param_4) [32],
                  uint64_t param_5,uint64_t param_6,int param_7)
{
  float *pfVar1;
  float *pfVar2;
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  uint64_t uVar23;
  uVar22 = 0;
  auVar3 = *param_4;
  auVar4 = param_4[4];
  auVar5 = param_4[8];
  auVar6 = param_4[0xc];
  auVar7 = param_4[0x10];
  auVar8 = param_4[0x14];
  auVar9 = param_4[0x18];
  auVar10 = param_4[0x1c];
  if (param_7 == 0) {
    if (param_3 != 0) {
      do {
        uVar23 = (uint64_t)(uVar22 * 8);
        uVar22 = uVar22 + 1;
        auVar11 = *(int8_t (*) [32])(param_1 + uVar23 * 4);
        auVar12 = vdpps_avx(auVar11,auVar9,0xf8);
        auVar13 = vdpps_avx(auVar11,auVar7,0xf4);
        auVar14 = vorps_avx(auVar12,auVar13);
        auVar12 = vdpps_avx(auVar11,auVar3,0xf1);
        auVar13 = vdpps_avx(auVar11,auVar5,0xf2);
        auVar12 = vorps_avx(auVar13,auVar12);
        auVar14 = vorps_avx(auVar14,auVar12);
        auVar12 = vdpps_avx(auVar11,auVar8,0xf4);
        auVar13 = vdpps_avx(auVar11,auVar10,0xf8);
        auVar13 = vorps_avx(auVar13,auVar12);
        auVar12 = vdpps_avx(auVar11,auVar4,0xf1);
        auVar11 = vdpps_avx(auVar11,auVar6,0xf2);
        auVar11 = vorps_avx(auVar11,auVar12);
        auVar11 = vorps_avx(auVar13,auVar11);
        auVar12 = vunpckhps_avx(auVar14,auVar11);
        pfVar1 = (float *)(param_2 + 0x10 + uVar23 * 4);
        fVar15 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar17 = pfVar1[2];
        fVar18 = pfVar1[3];
        auVar11 = vunpcklps_avx(auVar14,auVar11);
        pfVar1 = (float *)(param_2 + uVar23 * 4);
        fVar19 = pfVar1[1];
        fVar20 = pfVar1[2];
        fVar21 = pfVar1[3];
        pfVar2 = (float *)(param_2 + uVar23 * 4);
        *pfVar2 = auVar11._16_4_ + auVar11._0_4_ + *pfVar1;
        pfVar2[1] = auVar11._20_4_ + auVar11._4_4_ + fVar19;
        pfVar2[2] = auVar11._24_4_ + auVar11._8_4_ + fVar20;
        pfVar2[3] = auVar11._28_4_ + auVar11._12_4_ + fVar21;
        pfVar1 = (float *)(param_2 + 0x10 + uVar23 * 4);
        *pfVar1 = auVar12._16_4_ + auVar12._0_4_ + fVar15;
        pfVar1[1] = auVar12._20_4_ + auVar12._4_4_ + fVar16;
        pfVar1[2] = auVar12._24_4_ + auVar12._8_4_ + fVar17;
        pfVar1[3] = auVar12._28_4_ + auVar12._12_4_ + fVar18;
      } while (uVar22 < param_3);
    }
  }
  else if (param_3 != 0) {
    do {
      uVar23 = (uint64_t)(uVar22 * 8);
      uVar22 = uVar22 + 1;
      auVar11 = *(int8_t (*) [32])(param_1 + uVar23 * 4);
      auVar12 = vdpps_avx(auVar11,auVar9,0xf8);
      auVar13 = vdpps_avx(auVar11,auVar7,0xf4);
      auVar14 = vorps_avx(auVar12,auVar13);
      auVar12 = vdpps_avx(auVar11,auVar3,0xf1);
      auVar13 = vdpps_avx(auVar11,auVar5,0xf2);
      auVar12 = vorps_avx(auVar13,auVar12);
      auVar14 = vorps_avx(auVar14,auVar12);
      auVar12 = vdpps_avx(auVar11,auVar8,0xf4);
      auVar13 = vdpps_avx(auVar11,auVar10,0xf8);
      auVar13 = vorps_avx(auVar13,auVar12);
      auVar12 = vdpps_avx(auVar11,auVar4,0xf1);
      auVar11 = vdpps_avx(auVar11,auVar6,0xf2);
      auVar11 = vorps_avx(auVar11,auVar12);
      auVar11 = vorps_avx(auVar13,auVar11);
      auVar12 = vunpcklps_avx(auVar14,auVar11);
      auVar11 = vunpckhps_avx(auVar14,auVar11);
      pfVar1 = (float *)(param_2 + uVar23 * 4);
      *pfVar1 = auVar12._16_4_ + auVar12._0_4_;
      pfVar1[1] = auVar12._20_4_ + auVar12._4_4_;
      pfVar1[2] = auVar12._24_4_ + auVar12._8_4_;
      pfVar1[3] = auVar12._28_4_ + auVar12._12_4_;
      pfVar1 = (float *)(param_2 + 0x10 + uVar23 * 4);
      *pfVar1 = auVar11._16_4_ + auVar11._0_4_;
      pfVar1[1] = auVar11._20_4_ + auVar11._4_4_;
      pfVar1[2] = auVar11._24_4_ + auVar11._8_4_;
      pfVar1[3] = auVar11._28_4_ + auVar11._12_4_;
    } while (uVar22 < param_3);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001807e2a91)
// WARNING: Removing unreachable block (ram,0x0001807e2aa5)
// 函数: void function_7e2a22(uint64_t param_1,int64_t param_2,uint param_3)
void function_7e2a22(uint64_t param_1,int64_t param_2,uint param_3)
{
  float *pfVar1;
  float *pfVar2;
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint in_EAX;
  uint64_t uVar14;
  int64_t in_R11;
  int8_t in_ZMM7 [64];
  int8_t in_ZMM8 [64];
  int8_t in_ZMM9 [64];
  int8_t in_ZMM10 [64];
  int8_t in_ZMM11 [64];
  int8_t in_ZMM12 [64];
  int8_t in_ZMM13 [64];
  int8_t in_ZMM14 [64];
  do {
    uVar14 = (uint64_t)(in_EAX * 8);
    in_EAX = in_EAX + 1;
    auVar3 = *(int8_t (*) [32])(in_R11 + uVar14 * 4);
    auVar4 = vdpps_avx(auVar3,in_ZMM13._0_32_,0xf8);
    auVar5 = vdpps_avx(auVar3,in_ZMM11._0_32_,0xf4);
    auVar6 = vorps_avx(auVar4,auVar5);
    auVar4 = vdpps_avx(auVar3,in_ZMM7._0_32_,0xf1);
    auVar5 = vdpps_avx(auVar3,in_ZMM9._0_32_,0xf2);
    auVar4 = vorps_avx(auVar5,auVar4);
    auVar6 = vorps_avx(auVar6,auVar4);
    auVar4 = vdpps_avx(auVar3,in_ZMM12._0_32_,0xf4);
    auVar5 = vdpps_avx(auVar3,in_ZMM14._0_32_,0xf8);
    auVar5 = vorps_avx(auVar5,auVar4);
    auVar4 = vdpps_avx(auVar3,in_ZMM8._0_32_,0xf1);
    auVar3 = vdpps_avx(auVar3,in_ZMM10._0_32_,0xf2);
    auVar3 = vorps_avx(auVar3,auVar4);
    auVar3 = vorps_avx(auVar5,auVar3);
    auVar4 = vunpckhps_avx(auVar6,auVar3);
    pfVar2 = (float *)(param_2 + 0x10 + uVar14 * 4);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    fVar10 = pfVar2[3];
    auVar3 = vunpcklps_avx(auVar6,auVar3);
    pfVar2 = (float *)(param_2 + uVar14 * 4);
    fVar11 = pfVar2[1];
    fVar12 = pfVar2[2];
    fVar13 = pfVar2[3];
    pfVar1 = (float *)(param_2 + uVar14 * 4);
    *pfVar1 = auVar3._16_4_ + auVar3._0_4_ + *pfVar2;
    pfVar1[1] = auVar3._20_4_ + auVar3._4_4_ + fVar11;
    pfVar1[2] = auVar3._24_4_ + auVar3._8_4_ + fVar12;
    pfVar1[3] = auVar3._28_4_ + auVar3._12_4_ + fVar13;
    pfVar2 = (float *)(param_2 + 0x10 + uVar14 * 4);
    *pfVar2 = auVar4._16_4_ + auVar4._0_4_ + fVar7;
    pfVar2[1] = auVar4._20_4_ + auVar4._4_4_ + fVar8;
    pfVar2[2] = auVar4._24_4_ + auVar4._8_4_ + fVar9;
    pfVar2[3] = auVar4._28_4_ + auVar4._12_4_ + fVar10;
  } while (in_EAX < param_3);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7e2ae0(float *param_1,int8_t (*param_2) [32],int param_3,int64_t param_4,
void function_7e2ae0(float *param_1,int8_t (*param_2) [32],int param_3,int64_t param_4,
                  int32_t param_5,int param_6,int param_7)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  float fVar21;
  uint uVar22;
  float *pfVar23;
  float *pfVar24;
  int8_t (*pauVar25) [32];
  int8_t *puVar26;
  int64_t lVar27;
  uint64_t uVar28;
  int8_t (*pauVar29) [32];
  int iVar30;
  uint64_t uVar31;
  int8_t auVar32 [32];
  int8_t auVar33 [32];
  int8_t in_ZMM2 [64];
  int8_t auVar35 [36];
  int8_t auVar34 [64];
  int8_t stack_array_108 [72];
  float afStack_c0 [8];
  int8_t stack_array_a0 [48];
  uint64_t local_var_70;
  int8_t stack_array_68 [32];
  int32_t local_var_48;
  int iStack_40;
  int iStack_38;
  uint64_t stack_array_28 [2];
  stack_array_28[0] = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_28;
  uVar31 = (uint64_t)param_6;
  bVar20 = true;
  if (param_6 == 2) {
    iStack_38 = param_7;
    iStack_40 = param_6;
    local_var_48 = param_5;
    local_var_70 = 0x1807e2b3d;
    function_7e3300(param_1,param_2,param_3);
    puVar26 = stack_array_68;
  }
  else if ((uVar31 & 7) == 0) {
    iVar30 = 0;
    if (3 < param_6) {
      pfVar24 = (float *)(param_4 + 0x108);
      uVar22 = (param_6 - 4U >> 2) + 1;
      pfVar23 = afStack_c0 + 2;
      uVar28 = (uint64_t)uVar22;
      iVar30 = uVar22 * 4;
      do {
        fVar1 = pfVar24[-0x42];
        pfVar23[-2] = fVar1;
        if (fVar1 != 1.0) {
          bVar20 = false;
        }
        fVar1 = pfVar24[-0x21];
        pfVar23[-1] = fVar1;
        if (fVar1 != 1.0) {
          bVar20 = false;
        }
        fVar1 = *pfVar24;
        *pfVar23 = fVar1;
        if (fVar1 != 1.0) {
          bVar20 = false;
        }
        fVar1 = pfVar24[0x21];
        pfVar23[1] = fVar1;
        if (fVar1 != 1.0) {
          bVar20 = false;
        }
        pfVar24 = pfVar24 + 0x84;
        pfVar23 = pfVar23 + 4;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    if (iVar30 < param_6) {
      pfVar23 = (float *)(*(int8_t (*) [32])afStack_c0 + (int64_t)iVar30 * 4);
      pfVar24 = (float *)((int64_t)iVar30 * 0x84 + param_4);
      uVar28 = (uint64_t)(uint)(param_6 - iVar30);
      do {
        fVar1 = *pfVar24;
        *pfVar23 = fVar1;
        if (fVar1 != 1.0) {
          bVar20 = false;
        }
        pfVar24 = pfVar24 + 0x21;
        pfVar23 = pfVar23 + 1;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    if (param_7 != 0) {
      if (!bVar20) {
// WARNING: Subroutine does not return
        memset(param_2,0,(uint64_t)(uint)(param_3 * param_6) << 2);
      }
// WARNING: Subroutine does not return
      memcpy(param_2,param_1);
    }
    param_6 = param_6 >> 3;
    if (bVar20) {
      puVar26 = stack_array_108;
      if (param_3 != 0) {
        lVar27 = (int64_t)param_1 - (int64_t)param_2;
        do {
          pfVar23 = (float *)(lVar27 + (int64_t)param_2);
          pauVar25 = param_2;
          if (param_6 == 1) {
LAB_1807e2ded:
            auVar33._0_4_ = *pfVar23 + *(float *)*pauVar25;
            auVar33._4_4_ = pfVar23[1] + *(float *)(*pauVar25 + 4);
            auVar33._8_4_ = pfVar23[2] + *(float *)(*pauVar25 + 8);
            auVar33._12_4_ = pfVar23[3] + *(float *)(*pauVar25 + 0xc);
            auVar33._16_4_ = pfVar23[4] + *(float *)(*pauVar25 + 0x10);
            auVar33._20_4_ = pfVar23[5] + *(float *)(*pauVar25 + 0x14);
            auVar33._24_4_ = pfVar23[6] + *(float *)(*pauVar25 + 0x18);
            auVar33._28_4_ = pfVar23[7] + *(float *)(*pauVar25 + 0x1c);
            *pauVar25 = auVar33;
          }
          else {
            if (param_6 == 2) {
LAB_1807e2dd8:
              fVar1 = pfVar23[1];
              fVar2 = pfVar23[2];
              fVar3 = pfVar23[3];
              fVar4 = pfVar23[4];
              fVar5 = pfVar23[5];
              fVar6 = pfVar23[6];
              fVar7 = pfVar23[7];
              fVar8 = *(float *)(*pauVar25 + 4);
              fVar9 = *(float *)(*pauVar25 + 8);
              fVar10 = *(float *)(*pauVar25 + 0xc);
              fVar11 = *(float *)(*pauVar25 + 0x10);
              fVar12 = *(float *)(*pauVar25 + 0x14);
              fVar13 = *(float *)(*pauVar25 + 0x18);
              fVar14 = *(float *)(*pauVar25 + 0x1c);
              *(float *)*pauVar25 = *pfVar23 + *(float *)*pauVar25;
              *(float *)(*pauVar25 + 4) = fVar1 + fVar8;
              *(float *)(*pauVar25 + 8) = fVar2 + fVar9;
              *(float *)(*pauVar25 + 0xc) = fVar3 + fVar10;
              *(float *)(*pauVar25 + 0x10) = fVar4 + fVar11;
              *(float *)(*pauVar25 + 0x14) = fVar5 + fVar12;
              *(float *)(*pauVar25 + 0x18) = fVar6 + fVar13;
              *(float *)(*pauVar25 + 0x1c) = fVar7 + fVar14;
              pauVar25 = pauVar25 + 1;
              pfVar23 = pfVar23 + 8;
              goto LAB_1807e2ded;
            }
            if (param_6 == 3) {
LAB_1807e2dc3:
              fVar1 = pfVar23[1];
              fVar2 = pfVar23[2];
              fVar3 = pfVar23[3];
              fVar4 = pfVar23[4];
              fVar5 = pfVar23[5];
              fVar6 = pfVar23[6];
              fVar7 = pfVar23[7];
              fVar8 = *(float *)(*pauVar25 + 4);
              fVar9 = *(float *)(*pauVar25 + 8);
              fVar10 = *(float *)(*pauVar25 + 0xc);
              fVar11 = *(float *)(*pauVar25 + 0x10);
              fVar12 = *(float *)(*pauVar25 + 0x14);
              fVar13 = *(float *)(*pauVar25 + 0x18);
              fVar14 = *(float *)(*pauVar25 + 0x1c);
              *(float *)*pauVar25 = *pfVar23 + *(float *)*pauVar25;
              *(float *)(*pauVar25 + 4) = fVar1 + fVar8;
              *(float *)(*pauVar25 + 8) = fVar2 + fVar9;
              *(float *)(*pauVar25 + 0xc) = fVar3 + fVar10;
              *(float *)(*pauVar25 + 0x10) = fVar4 + fVar11;
              *(float *)(*pauVar25 + 0x14) = fVar5 + fVar12;
              *(float *)(*pauVar25 + 0x18) = fVar6 + fVar13;
              *(float *)(*pauVar25 + 0x1c) = fVar7 + fVar14;
              pauVar25 = pauVar25 + 1;
              pfVar23 = pfVar23 + 8;
              goto LAB_1807e2dd8;
            }
            if (param_6 == 4) {
              fVar1 = pfVar23[1];
              fVar2 = pfVar23[2];
              fVar3 = pfVar23[3];
              fVar4 = pfVar23[4];
              fVar5 = pfVar23[5];
              fVar6 = pfVar23[6];
              fVar7 = pfVar23[7];
              fVar8 = *(float *)(*param_2 + 4);
              fVar9 = *(float *)(*param_2 + 8);
              fVar10 = *(float *)(*param_2 + 0xc);
              fVar11 = *(float *)(*param_2 + 0x10);
              fVar12 = *(float *)(*param_2 + 0x14);
              fVar13 = *(float *)(*param_2 + 0x18);
              fVar14 = *(float *)(*param_2 + 0x1c);
              *(float *)*param_2 = *pfVar23 + *(float *)*param_2;
              *(float *)(*param_2 + 4) = fVar1 + fVar8;
              *(float *)(*param_2 + 8) = fVar2 + fVar9;
              *(float *)(*param_2 + 0xc) = fVar3 + fVar10;
              *(float *)(*param_2 + 0x10) = fVar4 + fVar11;
              *(float *)(*param_2 + 0x14) = fVar5 + fVar12;
              *(float *)(*param_2 + 0x18) = fVar6 + fVar13;
              *(float *)(*param_2 + 0x1c) = fVar7 + fVar14;
              pauVar25 = param_2 + 1;
              pfVar23 = pfVar23 + 8;
              goto LAB_1807e2dc3;
            }
          }
          param_2 = (int8_t (*) [32])(*param_2 + uVar31 * 4);
          param_3 = param_3 + -1;
          puVar26 = stack_array_108;
        } while (param_3 != 0);
      }
    }
    else {
      puVar26 = stack_array_108;
      if (param_3 != 0) {
        do {
          auVar35 = in_ZMM2._28_36_;
          pauVar25 = param_2;
          pfVar23 = param_1;
          pauVar29 = (int8_t (*) [32])afStack_c0;
          if (param_6 == 1) {
LAB_1807e2d29:
            auVar32 = *pauVar29;
            auVar34._0_4_ = auVar32._0_4_ * *pfVar23;
            auVar34._4_4_ = auVar32._4_4_ * pfVar23[1];
            auVar34._8_4_ = auVar32._8_4_ * pfVar23[2];
            auVar34._12_4_ = auVar32._12_4_ * pfVar23[3];
            auVar34._16_4_ = auVar32._16_4_ * pfVar23[4];
            auVar34._20_4_ = auVar32._20_4_ * pfVar23[5];
            auVar34._24_4_ = auVar32._24_4_ * pfVar23[6];
            auVar34._28_36_ = auVar35;
            in_ZMM2 = ZEXT3264(auVar34._0_32_);
            auVar32._0_4_ = auVar34._0_4_ + *(float *)*pauVar25;
            auVar32._4_4_ = auVar34._4_4_ + *(float *)(*pauVar25 + 4);
            auVar32._8_4_ = auVar34._8_4_ + *(float *)(*pauVar25 + 8);
            auVar32._12_4_ = auVar34._12_4_ + *(float *)(*pauVar25 + 0xc);
            auVar32._16_4_ = auVar34._16_4_ + *(float *)(*pauVar25 + 0x10);
            auVar32._20_4_ = auVar34._20_4_ + *(float *)(*pauVar25 + 0x14);
            auVar32._24_4_ = auVar34._24_4_ + *(float *)(*pauVar25 + 0x18);
            auVar32._28_4_ = auVar35._0_4_ + *(float *)(*pauVar25 + 0x1c);
            *pauVar25 = auVar32;
          }
          else {
            if (param_6 == 2) {
LAB_1807e2d0b:
              fVar1 = *(float *)(*pauVar29 + 4);
              fVar2 = *(float *)(*pauVar29 + 8);
              fVar3 = *(float *)(*pauVar29 + 0xc);
              fVar4 = *(float *)(*pauVar29 + 0x10);
              fVar5 = *(float *)(*pauVar29 + 0x14);
              fVar6 = *(float *)(*pauVar29 + 0x18);
              fVar7 = pfVar23[1];
              fVar8 = pfVar23[2];
              fVar9 = pfVar23[3];
              fVar10 = pfVar23[4];
              fVar11 = pfVar23[5];
              fVar12 = pfVar23[6];
              fVar21 = auVar35._0_4_;
              auVar35 = ZEXT436((uint)fVar21);
              fVar13 = *(float *)(*pauVar25 + 4);
              fVar14 = *(float *)(*pauVar25 + 8);
              fVar15 = *(float *)(*pauVar25 + 0xc);
              fVar16 = *(float *)(*pauVar25 + 0x10);
              fVar17 = *(float *)(*pauVar25 + 0x14);
              fVar18 = *(float *)(*pauVar25 + 0x18);
              fVar19 = *(float *)(*pauVar25 + 0x1c);
              *(float *)*pauVar25 = *(float *)*pauVar29 * *pfVar23 + *(float *)*pauVar25;
              *(float *)(*pauVar25 + 4) = fVar1 * fVar7 + fVar13;
              *(float *)(*pauVar25 + 8) = fVar2 * fVar8 + fVar14;
              *(float *)(*pauVar25 + 0xc) = fVar3 * fVar9 + fVar15;
              *(float *)(*pauVar25 + 0x10) = fVar4 * fVar10 + fVar16;
              *(float *)(*pauVar25 + 0x14) = fVar5 * fVar11 + fVar17;
              *(float *)(*pauVar25 + 0x18) = fVar6 * fVar12 + fVar18;
              *(float *)(*pauVar25 + 0x1c) = fVar21 + fVar19;
              pauVar25 = pauVar25 + 1;
              pfVar23 = pfVar23 + 8;
              pauVar29 = pauVar29 + 1;
              goto LAB_1807e2d29;
            }
            if (param_6 == 3) {
LAB_1807e2ced:
              fVar1 = *(float *)(*pauVar29 + 4);
              fVar2 = *(float *)(*pauVar29 + 8);
              fVar3 = *(float *)(*pauVar29 + 0xc);
              fVar4 = *(float *)(*pauVar29 + 0x10);
              fVar5 = *(float *)(*pauVar29 + 0x14);
              fVar6 = *(float *)(*pauVar29 + 0x18);
              fVar7 = pfVar23[1];
              fVar8 = pfVar23[2];
              fVar9 = pfVar23[3];
              fVar10 = pfVar23[4];
              fVar11 = pfVar23[5];
              fVar12 = pfVar23[6];
              fVar21 = auVar35._0_4_;
              auVar35 = ZEXT436((uint)fVar21);
              fVar13 = *(float *)(*pauVar25 + 4);
              fVar14 = *(float *)(*pauVar25 + 8);
              fVar15 = *(float *)(*pauVar25 + 0xc);
              fVar16 = *(float *)(*pauVar25 + 0x10);
              fVar17 = *(float *)(*pauVar25 + 0x14);
              fVar18 = *(float *)(*pauVar25 + 0x18);
              fVar19 = *(float *)(*pauVar25 + 0x1c);
              *(float *)*pauVar25 = *(float *)*pauVar29 * *pfVar23 + *(float *)*pauVar25;
              *(float *)(*pauVar25 + 4) = fVar1 * fVar7 + fVar13;
              *(float *)(*pauVar25 + 8) = fVar2 * fVar8 + fVar14;
              *(float *)(*pauVar25 + 0xc) = fVar3 * fVar9 + fVar15;
              *(float *)(*pauVar25 + 0x10) = fVar4 * fVar10 + fVar16;
              *(float *)(*pauVar25 + 0x14) = fVar5 * fVar11 + fVar17;
              *(float *)(*pauVar25 + 0x18) = fVar6 * fVar12 + fVar18;
              *(float *)(*pauVar25 + 0x1c) = fVar21 + fVar19;
              pauVar25 = pauVar25 + 1;
              pfVar23 = pfVar23 + 8;
              pauVar29 = pauVar29 + 1;
              goto LAB_1807e2d0b;
            }
            if (param_6 == 4) {
              fVar1 = param_1[1];
              fVar2 = param_1[2];
              fVar3 = param_1[3];
              fVar4 = param_1[4];
              fVar5 = param_1[5];
              fVar6 = param_1[6];
              auVar35 = ZEXT436((uint)in_ZMM2._28_4_);
              fVar7 = *(float *)(*param_2 + 4);
              fVar8 = *(float *)(*param_2 + 8);
              fVar9 = *(float *)(*param_2 + 0xc);
              fVar10 = *(float *)(*param_2 + 0x10);
              fVar11 = *(float *)(*param_2 + 0x14);
              fVar12 = *(float *)(*param_2 + 0x18);
              fVar13 = *(float *)(*param_2 + 0x1c);
              *(float *)*param_2 = afStack_c0[0] * *param_1 + *(float *)*param_2;
              *(float *)(*param_2 + 4) = afStack_c0[1] * fVar1 + fVar7;
              *(float *)(*param_2 + 8) = afStack_c0[2] * fVar2 + fVar8;
              *(float *)(*param_2 + 0xc) = afStack_c0[3] * fVar3 + fVar9;
              *(float *)(*param_2 + 0x10) = afStack_c0[4] * fVar4 + fVar10;
              *(float *)(*param_2 + 0x14) = afStack_c0[5] * fVar5 + fVar11;
              *(float *)(*param_2 + 0x18) = afStack_c0[6] * fVar6 + fVar12;
              *(float *)(*param_2 + 0x1c) = in_ZMM2._28_4_ + fVar13;
              pauVar25 = param_2 + 1;
              pfVar23 = param_1 + 8;
              pauVar29 = (int8_t (*) [32])stack_array_a0;
              goto LAB_1807e2ced;
            }
          }
          param_1 = param_1 + uVar31;
          param_2 = (int8_t (*) [32])(*param_2 + uVar31 * 4);
          param_3 = param_3 + -1;
          puVar26 = stack_array_108;
        } while (param_3 != 0);
      }
    }
  }
  else {
    iStack_38 = param_7;
    iStack_40 = param_6;
    local_var_48 = param_5;
    local_var_70 = 0x1807e2b63;
    function_7dff00(param_1,param_2,param_3);
    puVar26 = stack_array_68;
  }
// WARNING: Subroutine does not return
  *(uint64_t *)(puVar26 + -8) = 0x1807e2d59;
  SystemSecurityChecker(stack_array_28[0] ^ (uint64_t)stack_array_28);
}