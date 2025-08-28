#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part038.c - 13 个函数
// 函数: void function_7e3300(int64_t param_1,int8_t (*param_2) [32],int param_3,int32_t *param_4,
void function_7e3300(int64_t param_1,int8_t (*param_2) [32],int param_3,int32_t *param_4,
                  uint64_t param_5,uint64_t param_6,int param_7)
{
  float *pfVar1;
  int32_t uVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  float fVar7;
  int iVar8;
  uint uVar9;
  int8_t (*pauVar10) [32];
  int64_t lVar11;
  uint64_t uVar12;
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auVar23 [32];
  uVar2 = param_4[0x21];
  auVar15._4_4_ = (float)uVar2;
  auVar15._0_4_ = (float)uVar2;
  auVar15._8_4_ = (float)uVar2;
  auVar15._12_4_ = (float)uVar2;
  auVar15._16_4_ = (float)uVar2;
  auVar15._20_4_ = (float)uVar2;
  auVar15._24_4_ = (float)uVar2;
  auVar15._28_4_ = (float)uVar2;
  uVar2 = *param_4;
  auVar13._4_4_ = uVar2;
  auVar13._0_4_ = uVar2;
  auVar13._8_4_ = uVar2;
  auVar13._12_4_ = uVar2;
  auVar13._16_4_ = uVar2;
  auVar13._20_4_ = uVar2;
  auVar13._24_4_ = uVar2;
  auVar13._28_4_ = uVar2;
  iVar8 = 0;
  auVar5 = vunpcklps_avx(auVar13,auVar15);
  fVar16 = auVar5._0_4_;
  fVar17 = auVar5._4_4_;
  fVar18 = auVar5._8_4_;
  fVar19 = auVar5._12_4_;
  fVar20 = auVar5._16_4_;
  fVar21 = auVar5._20_4_;
  fVar22 = auVar5._24_4_;
  if (param_7 == 0) {
    if (0 < param_3 + -3) {
      uVar9 = (param_3 - 4U >> 2) + 1;
      uVar12 = (uint64_t)uVar9;
      iVar8 = uVar9 * 4;
      pauVar10 = param_2;
      do {
        pfVar1 = (float *)((int64_t)pauVar10 + (param_1 - (int64_t)param_2));
        fVar7 = auVar15._28_4_;
        auVar15._0_4_ = fVar16 * *pfVar1 + *(float *)*pauVar10;
        auVar15._4_4_ = fVar17 * pfVar1[1] + *(float *)(*pauVar10 + 4);
        auVar15._8_4_ = fVar18 * pfVar1[2] + *(float *)(*pauVar10 + 8);
        auVar15._12_4_ = fVar19 * pfVar1[3] + *(float *)(*pauVar10 + 0xc);
        auVar15._16_4_ = fVar20 * pfVar1[4] + *(float *)(*pauVar10 + 0x10);
        auVar15._20_4_ = fVar21 * pfVar1[5] + *(float *)(*pauVar10 + 0x14);
        auVar15._24_4_ = fVar22 * pfVar1[6] + *(float *)(*pauVar10 + 0x18);
        auVar15._28_4_ = fVar7 + *(float *)(*pauVar10 + 0x1c);
        *pauVar10 = auVar15;
        pauVar10 = pauVar10 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_3 + -3) {
      uVar9 = (param_3 - 4U >> 2) + 1;
      uVar12 = (uint64_t)uVar9;
      iVar8 = uVar9 * 4;
      pauVar10 = param_2;
      do {
        pfVar1 = (float *)((param_1 - (int64_t)param_2) + (int64_t)pauVar10);
        auVar5._4_4_ = fVar17 * pfVar1[1];
        auVar5._0_4_ = fVar16 * *pfVar1;
        auVar5._8_4_ = fVar18 * pfVar1[2];
        auVar5._12_4_ = fVar19 * pfVar1[3];
        auVar5._16_4_ = fVar20 * pfVar1[4];
        auVar5._20_4_ = fVar21 * pfVar1[5];
        auVar5._24_4_ = fVar22 * pfVar1[6];
        auVar5._28_4_ = auVar13._28_4_;
        *pauVar10 = auVar5;
        pauVar10 = pauVar10 + 1;
        uVar12 = uVar12 - 1;
        auVar13 = auVar5;
      } while (uVar12 != 0);
    }
  }
  auVar4 = vpshufd_avx(ZEXT416((uint)(param_3 - iVar8)),0);
  auVar3 = vpcmpgtd_avx(auVar4,system_system_config);
  auVar4 = vpcmpgtd_avx(auVar4,system_system_config);
  lVar11 = (int64_t)(iVar8 * 2);
  auVar23._16_16_ = auVar3;
  auVar23._0_16_ = auVar4;
  auVar5 = vmaskmovps_avx(auVar23,*(int8_t (*) [32])(param_1 + lVar11 * 4));
  if (param_7 != 0) {
    auVar6._4_4_ = auVar5._4_4_ * fVar17;
    auVar6._0_4_ = auVar5._0_4_ * fVar16;
    auVar6._8_4_ = auVar5._8_4_ * fVar18;
    auVar6._12_4_ = auVar5._12_4_ * fVar19;
    auVar6._16_4_ = auVar5._16_4_ * fVar20;
    auVar6._20_4_ = auVar5._20_4_ * fVar21;
    auVar6._24_4_ = auVar5._24_4_ * fVar22;
    auVar6._28_4_ = 0;
    auVar5 = vmaskmovps_avx(auVar23,auVar6);
    *(int8_t (*) [32])(*param_2 + lVar11 * 4) = auVar5;
    return;
  }
  auVar13 = vmaskmovps_avx(auVar23,*(int8_t (*) [32])(*param_2 + lVar11 * 4));
  auVar14._0_4_ = auVar5._0_4_ * fVar16 + auVar13._0_4_;
  auVar14._4_4_ = auVar5._4_4_ * fVar17 + auVar13._4_4_;
  auVar14._8_4_ = auVar5._8_4_ * fVar18 + auVar13._8_4_;
  auVar14._12_4_ = auVar5._12_4_ * fVar19 + auVar13._12_4_;
  auVar14._16_4_ = auVar5._16_4_ * fVar20 + auVar13._16_4_;
  auVar14._20_4_ = auVar5._20_4_ * fVar21 + auVar13._20_4_;
  auVar14._24_4_ = auVar5._24_4_ * fVar22 + auVar13._24_4_;
  auVar14._28_4_ = auVar13._28_4_ + 0.0;
  auVar5 = vmaskmovps_avx(auVar23,auVar14);
  *(int8_t (*) [32])(*param_2 + lVar11 * 4) = auVar5;
  return;
}
// 函数: void function_7e3740(int64_t *param_1,int64_t param_2)
void function_7e3740(int64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  if ((*(byte *)(param_2 + 0x18) & 0x40) == 0) {
    return;
  }
  lVar4 = *(int64_t *)(param_2 + 0x30);
  if (lVar4 == 0) {
    lVar4 = *(int64_t *)(param_2 + 0x48);
    *param_1 = lVar4;
    if (lVar4 != 0) {
      *(uint64_t *)(lVar4 + 0x30) = 0;
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffffef;
    }
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xffffffa0;
    *(uint64_t *)(param_2 + 0x48) = 0;
    return;
  }
  lVar5 = 0;
  uVar1 = *(uint64_t *)(param_2 + 0x48);
  if (*(int64_t *)(lVar4 + 0x48) == param_2) {
    *(uint64_t *)(lVar4 + 0x48) = uVar1;
    lVar5 = 0;
    if (*(int64_t *)(param_2 + 0x48) != 0) {
      *(uint64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = *(uint64_t *)(param_2 + 0x30);
    }
  }
  else {
    if (*(int64_t *)(lVar4 + 0x38) == param_2) {
      *(uint64_t *)(lVar4 + 0x38) = uVar1;
      lVar4 = *(int64_t *)(param_2 + 0x48);
      if (lVar4 == 0) {
        lVar5 = *(int64_t *)(*(int64_t *)(param_2 + 0x30) + 0x40);
        goto LAB_1807e3801;
      }
    }
    else {
      *(uint64_t *)(lVar4 + 0x40) = uVar1;
      lVar4 = *(int64_t *)(param_2 + 0x48);
      if (lVar4 == 0) {
        lVar5 = *(int64_t *)(*(int64_t *)(param_2 + 0x30) + 0x38);
        goto LAB_1807e3801;
      }
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) & 0xffffffef;
    *(uint64_t *)(*(int64_t *)(param_2 + 0x48) + 0x30) = *(uint64_t *)(param_2 + 0x30);
  }
LAB_1807e3801:
  lVar4 = *(int64_t *)(param_2 + 0x30);
  if (lVar5 == 0) {
    if ((*(byte *)(lVar4 + 0x18) & 4) == 0) {
      Function_6a0cfb94(param_1,lVar4);
    }
  }
  else {
    lVar2 = *(int64_t *)(lVar4 + 0x30);
    lVar3 = *(int64_t *)(lVar4 + 0x48);
    if (lVar2 == 0) {
      *param_1 = lVar5;
      *(uint64_t *)(lVar5 + 0x30) = 0;
      lVar5 = *param_1;
    }
    else {
      if (*(int64_t *)(lVar2 + 0x38) == lVar4) {
        *(int64_t *)(lVar2 + 0x38) = lVar5;
      }
      else {
        *(int64_t *)(lVar2 + 0x40) = lVar5;
      }
      *(uint64_t *)(lVar5 + 0x30) = *(uint64_t *)(lVar4 + 0x30);
      lVar5 = *(int64_t *)(lVar4 + 0x30);
    }
    while (lVar3 != 0) {
      lVar2 = *(int64_t *)(lVar3 + 0x48);
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xffffffef;
      *(uint64_t *)(lVar3 + 0x48) = 0;
      *(uint64_t *)(lVar3 + 0x30) = 0;
      function_7e39f0(param_1,lVar5);
      lVar3 = lVar2;
    }
    if (*(int64_t *)(lVar4 + 0x30) != 0) {
      Function_6a0cfb94(param_1);
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) & 0xfffffff4;
    *(uint64_t *)(lVar4 + 0x48) = 0;
    *(uint64_t *)(lVar4 + 0x30) = 0;
    *(uint64_t *)(lVar4 + 0x38) = 0;
    *(uint64_t *)(lVar4 + 0x40) = 0;
    *(int64_t *)(lVar4 + 0x48) = param_1[3];
    param_1[3] = lVar4;
    if (*(int64_t *)(lVar4 + 0x48) != 0) {
      *(int64_t *)(*(int64_t *)(lVar4 + 0x48) + 0x30) = lVar4;
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 0x20;
    *(uint64_t *)(lVar4 + 0x30) = 0;
  }
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xffffffa0;
  *(uint64_t *)(param_2 + 0x30) = 0;
  *(uint64_t *)(param_2 + 0x48) = 0;
  return;
}
// 函数: void function_7e375c(int64_t param_1,int64_t param_2)
void function_7e375c(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  if (param_1 == 0) {
    lVar5 = *(int64_t *)(param_2 + 0x48);
    *unaff_R14 = lVar5;
    if (lVar5 != 0) {
      *(uint64_t *)(lVar5 + 0x30) = 0;
      *(uint *)(*unaff_R14 + 0x18) = *(uint *)(*unaff_R14 + 0x18) & 0xffffffef;
    }
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xffffffa0;
    *(uint64_t *)(param_2 + 0x48) = 0;
    return;
  }
  lVar5 = 0;
  uVar1 = *(uint64_t *)(unaff_RDI + 0x48);
  if (*(int64_t *)(param_1 + 0x48) == unaff_RDI) {
    *(uint64_t *)(param_1 + 0x48) = uVar1;
    lVar5 = 0;
    if (*(int64_t *)(unaff_RDI + 0x48) != 0) {
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x30) = *(uint64_t *)(unaff_RDI + 0x30);
    }
  }
  else {
    if (*(int64_t *)(param_1 + 0x38) == unaff_RDI) {
      *(uint64_t *)(param_1 + 0x38) = uVar1;
      lVar4 = *(int64_t *)(unaff_RDI + 0x48);
      if (lVar4 == 0) {
        lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x30) + 0x40);
        goto LAB_1807e3801;
      }
    }
    else {
      *(uint64_t *)(param_1 + 0x40) = uVar1;
      lVar4 = *(int64_t *)(unaff_RDI + 0x48);
      if (lVar4 == 0) {
        lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x30) + 0x38);
        goto LAB_1807e3801;
      }
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) & 0xffffffef;
    *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x30) = *(uint64_t *)(unaff_RDI + 0x30);
  }
LAB_1807e3801:
  lVar4 = *(int64_t *)(unaff_RDI + 0x30);
  if (lVar5 == 0) {
    if ((*(byte *)(lVar4 + 0x18) & 4) == 0) {
      Function_6a0cfb94();
    }
  }
  else {
    lVar2 = *(int64_t *)(lVar4 + 0x30);
    lVar3 = *(int64_t *)(lVar4 + 0x48);
    if (lVar2 == 0) {
      *unaff_R14 = lVar5;
      *(uint64_t *)(lVar5 + 0x30) = 0;
    }
    else {
      if (*(int64_t *)(lVar2 + 0x38) == lVar4) {
        *(int64_t *)(lVar2 + 0x38) = lVar5;
      }
      else {
        *(int64_t *)(lVar2 + 0x40) = lVar5;
      }
      *(uint64_t *)(lVar5 + 0x30) = *(uint64_t *)(lVar4 + 0x30);
    }
    while (lVar3 != 0) {
      lVar5 = *(int64_t *)(lVar3 + 0x48);
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xffffffef;
      *(uint64_t *)(lVar3 + 0x48) = 0;
      *(uint64_t *)(lVar3 + 0x30) = 0;
      function_7e39f0();
      lVar3 = lVar5;
    }
    if (*(int64_t *)(lVar4 + 0x30) != 0) {
      Function_6a0cfb94();
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) & 0xfffffff4;
    *(uint64_t *)(lVar4 + 0x48) = 0;
    *(uint64_t *)(lVar4 + 0x30) = 0;
    *(uint64_t *)(lVar4 + 0x38) = 0;
    *(uint64_t *)(lVar4 + 0x40) = 0;
    *(int64_t *)(lVar4 + 0x48) = unaff_R14[3];
    unaff_R14[3] = lVar4;
    if (*(int64_t *)(lVar4 + 0x48) != 0) {
      *(int64_t *)(*(int64_t *)(lVar4 + 0x48) + 0x30) = lVar4;
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 0x20;
    *(uint64_t *)(lVar4 + 0x30) = 0;
  }
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) & 0xffffffa0;
  *(uint64_t *)(unaff_RDI + 0x30) = 0;
  *(uint64_t *)(unaff_RDI + 0x48) = 0;
  return;
}
// 函数: void function_7e3794(int64_t param_1)
void function_7e3794(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  uVar1 = *(uint64_t *)(unaff_RDI + 0x48);
  lVar5 = unaff_RBP;
  if (*(int64_t *)(param_1 + 0x48) == unaff_RDI) {
    *(uint64_t *)(param_1 + 0x48) = uVar1;
    if (*(int64_t *)(unaff_RDI + 0x48) != 0) {
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x30) = *(uint64_t *)(unaff_RDI + 0x30);
    }
  }
  else {
    if (*(int64_t *)(param_1 + 0x38) == unaff_RDI) {
      *(uint64_t *)(param_1 + 0x38) = uVar1;
      lVar4 = *(int64_t *)(unaff_RDI + 0x48);
      if (lVar4 == 0) {
        lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x30) + 0x40);
        goto LAB_1807e3801;
      }
    }
    else {
      *(uint64_t *)(param_1 + 0x40) = uVar1;
      lVar4 = *(int64_t *)(unaff_RDI + 0x48);
      if (lVar4 == 0) {
        lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x30) + 0x38);
        goto LAB_1807e3801;
      }
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) & 0xffffffef;
    *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x48) + 0x30) = *(uint64_t *)(unaff_RDI + 0x30);
  }
LAB_1807e3801:
  lVar4 = *(int64_t *)(unaff_RDI + 0x30);
  if (lVar5 == 0) {
    if ((*(byte *)(lVar4 + 0x18) & 4) == 0) {
      Function_6a0cfb94();
    }
  }
  else {
    lVar2 = *(int64_t *)(lVar4 + 0x30);
    lVar3 = *(int64_t *)(lVar4 + 0x48);
    if (lVar2 == 0) {
      *unaff_R14 = lVar5;
      *(int64_t *)(lVar5 + 0x30) = unaff_RBP;
    }
    else {
      if (*(int64_t *)(lVar2 + 0x38) == lVar4) {
        *(int64_t *)(lVar2 + 0x38) = lVar5;
      }
      else {
        *(int64_t *)(lVar2 + 0x40) = lVar5;
      }
      *(uint64_t *)(lVar5 + 0x30) = *(uint64_t *)(lVar4 + 0x30);
    }
    while (lVar3 != 0) {
      lVar5 = *(int64_t *)(lVar3 + 0x48);
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xffffffef;
      *(int64_t *)(lVar3 + 0x48) = unaff_RBP;
      *(int64_t *)(lVar3 + 0x30) = unaff_RBP;
      function_7e39f0();
      lVar3 = lVar5;
    }
    if (*(int64_t *)(lVar4 + 0x30) != 0) {
      Function_6a0cfb94();
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) & 0xfffffff4;
    *(int64_t *)(lVar4 + 0x48) = unaff_RBP;
    *(int64_t *)(lVar4 + 0x30) = unaff_RBP;
    *(int64_t *)(lVar4 + 0x38) = unaff_RBP;
    *(int64_t *)(lVar4 + 0x40) = unaff_RBP;
    *(int64_t *)(lVar4 + 0x48) = unaff_R14[3];
    unaff_R14[3] = lVar4;
    if (*(int64_t *)(lVar4 + 0x48) != 0) {
      *(int64_t *)(*(int64_t *)(lVar4 + 0x48) + 0x30) = lVar4;
    }
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 0x20;
    *(int64_t *)(lVar4 + 0x30) = unaff_RBP;
  }
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) & 0xffffffa0;
  *(int64_t *)(unaff_RDI + 0x30) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 0x48) = unaff_RBP;
  return;
}
// 函数: void function_7e3816(uint64_t param_1,int64_t param_2,int64_t param_3)
void function_7e3816(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t in_RAX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  if (in_RAX == 0) {
    *unaff_R14 = param_2;
    *(uint64_t *)(param_2 + 0x30) = unaff_RBP;
  }
  else {
    if (*(int64_t *)(in_RAX + 0x38) == unaff_RSI) {
      *(int64_t *)(in_RAX + 0x38) = param_2;
    }
    else {
      *(int64_t *)(in_RAX + 0x40) = param_2;
    }
    *(uint64_t *)(param_2 + 0x30) = *(uint64_t *)(unaff_RSI + 0x30);
  }
  if (param_3 != 0) {
    do {
      lVar1 = *(int64_t *)(param_3 + 0x48);
      *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) & 0xffffffef;
      *(uint64_t *)(param_3 + 0x48) = unaff_RBP;
      *(uint64_t *)(param_3 + 0x30) = unaff_RBP;
      function_7e39f0();
      param_3 = lVar1;
    } while (lVar1 != 0);
  }
  if (*(int64_t *)(unaff_RSI + 0x30) != 0) {
    Function_6a0cfb94();
  }
  *(uint *)(unaff_RSI + 0x18) = *(uint *)(unaff_RSI + 0x18) & 0xfffffff4;
  *(uint64_t *)(unaff_RSI + 0x48) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x38) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x40) = unaff_RBP;
  *(int64_t *)(unaff_RSI + 0x48) = unaff_R14[3];
  unaff_R14[3] = unaff_RSI;
  if (*(int64_t *)(unaff_RSI + 0x48) != 0) {
    *(int64_t *)(*(int64_t *)(unaff_RSI + 0x48) + 0x30) = unaff_RSI;
  }
  *(uint *)(unaff_RSI + 0x18) = *(uint *)(unaff_RSI + 0x18) | 0x20;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_RBP;
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) & 0xffffffa0;
  *(uint64_t *)(unaff_RDI + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RDI + 0x48) = unaff_RBP;
  return;
}
// 函数: void function_7e384d(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_7e384d(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  do {
    lVar1 = *(int64_t *)(param_3 + 0x48);
    *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) & 0xffffffef;
    *(uint64_t *)(param_3 + 0x48) = unaff_RBP;
    *(uint64_t *)(param_3 + 0x30) = unaff_RBP;
    function_7e39f0();
    param_3 = lVar1;
  } while (lVar1 != 0);
  if (*(int64_t *)(unaff_RSI + 0x30) != 0) {
    Function_6a0cfb94();
  }
  *(uint *)(unaff_RSI + 0x18) = *(uint *)(unaff_RSI + 0x18) & 0xfffffff4;
  *(uint64_t *)(unaff_RSI + 0x48) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x38) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x40) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x48) = *(uint64_t *)(unaff_R14 + 0x18);
  *(int64_t *)(unaff_R14 + 0x18) = unaff_RSI;
  if (*(int64_t *)(unaff_RSI + 0x48) != 0) {
    *(int64_t *)(*(int64_t *)(unaff_RSI + 0x48) + 0x30) = unaff_RSI;
  }
  *(uint *)(unaff_RSI + 0x18) = *(uint *)(unaff_RSI + 0x18) | 0x20;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_RBP;
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) & 0xffffffa0;
  *(uint64_t *)(unaff_RDI + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RDI + 0x48) = unaff_RBP;
  return;
}
// 函数: void function_7e3889(void)
void function_7e3889(void)
{
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  if (*(int64_t *)(unaff_RSI + 0x30) != 0) {
    Function_6a0cfb94();
  }
  *(uint *)(unaff_RSI + 0x18) = *(uint *)(unaff_RSI + 0x18) & 0xfffffff4;
  *(uint64_t *)(unaff_RSI + 0x48) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x38) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x40) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x48) = *(uint64_t *)(unaff_R14 + 0x18);
  *(int64_t *)(unaff_R14 + 0x18) = unaff_RSI;
  if (*(int64_t *)(unaff_RSI + 0x48) != 0) {
    *(int64_t *)(*(int64_t *)(unaff_RSI + 0x48) + 0x30) = unaff_RSI;
  }
  *(uint *)(unaff_RSI + 0x18) = *(uint *)(unaff_RSI + 0x18) | 0x20;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_RBP;
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) & 0xffffffa0;
  *(uint64_t *)(unaff_RDI + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RDI + 0x48) = unaff_RBP;
  return;
}
// 函数: void function_7e3897(void)
void function_7e3897(void)
{
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  Function_6a0cfb94();
  *(uint *)(unaff_RSI + 0x18) = *(uint *)(unaff_RSI + 0x18) & 0xfffffff4;
  *(uint64_t *)(unaff_RSI + 0x48) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x38) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x40) = unaff_RBP;
  *(uint64_t *)(unaff_RSI + 0x48) = *(uint64_t *)(unaff_R14 + 0x18);
  *(int64_t *)(unaff_R14 + 0x18) = unaff_RSI;
  if (*(int64_t *)(unaff_RSI + 0x48) != 0) {
    *(int64_t *)(*(int64_t *)(unaff_RSI + 0x48) + 0x30) = unaff_RSI;
  }
  *(uint *)(unaff_RSI + 0x18) = *(uint *)(unaff_RSI + 0x18) | 0x20;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_RBP;
  *(uint *)(unaff_RDI + 0x18) = *(uint *)(unaff_RDI + 0x18) & 0xffffffa0;
  *(uint64_t *)(unaff_RDI + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RDI + 0x48) = unaff_RBP;
  return;
}
// 函数: void function_7e38fd(void)
void function_7e38fd(void)
{
  return;
}
// 函数: void function_7e3910(int64_t *param_1,float *param_2)
void function_7e3910(int64_t *param_1,float *param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  puVar1 = (uint64_t *)*param_1;
  if (puVar1 == (uint64_t *)0x0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
  }
  else {
    uVar2 = puVar1[1];
    *(uint64_t *)param_2 = *puVar1;
    *(uint64_t *)(param_2 + 2) = uVar2;
    *(uint64_t *)(param_2 + 4) = puVar1[2];
    pfVar3 = *(float **)(*param_1 + 0x48);
    if (pfVar3 != (float *)0x0) {
      fVar6 = param_2[1];
      fVar8 = param_2[3];
      fVar10 = param_2[5];
      fVar7 = param_2[2];
      fVar9 = param_2[4];
      do {
        fVar4 = *pfVar3;
        if (*param_2 <= *pfVar3) {
          fVar4 = *param_2;
        }
        *param_2 = fVar4;
        fVar4 = pfVar3[1];
        if (pfVar3[1] <= fVar6) {
          fVar4 = fVar6;
        }
        fVar6 = fVar4;
        param_2[1] = fVar6;
        fVar4 = pfVar3[2];
        if (fVar7 <= pfVar3[2]) {
          fVar4 = fVar7;
        }
        param_2[2] = fVar4;
        fVar7 = pfVar3[3];
        if (pfVar3[3] <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar7;
        param_2[3] = fVar8;
        fVar5 = pfVar3[4];
        if (fVar9 <= pfVar3[4]) {
          fVar5 = fVar9;
        }
        param_2[4] = fVar5;
        fVar7 = pfVar3[5];
        if (pfVar3[5] <= fVar10) {
          fVar7 = fVar10;
        }
        fVar10 = fVar7;
        param_2[5] = fVar10;
        pfVar3 = *(float **)(pfVar3 + 0x12);
        fVar7 = fVar4;
        fVar9 = fVar5;
      } while (pfVar3 != (float *)0x0);
      return;
    }
  }
  return;
}
// 函数: void function_7e3954(float *param_1,float *param_2,float param_3,float param_4)
void function_7e3954(float *param_1,float *param_2,float param_3,float param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar6;
  fVar6 = param_2[5];
  do {
    fVar1 = *param_1;
    if (*param_2 <= *param_1) {
      fVar1 = *param_2;
    }
    *param_2 = fVar1;
    fVar1 = param_1[1];
    if (param_1[1] <= param_3) {
      fVar1 = param_3;
    }
    param_2[1] = fVar1;
    fVar2 = param_1[2];
    if (param_4 <= param_1[2]) {
      fVar2 = param_4;
    }
    param_2[2] = fVar2;
    fVar4 = param_1[3];
    if (param_1[3] <= in_XMM4_Da) {
      fVar4 = in_XMM4_Da;
    }
    param_2[3] = fVar4;
    fVar3 = param_1[4];
    if (in_XMM5_Da <= param_1[4]) {
      fVar3 = in_XMM5_Da;
    }
    param_2[4] = fVar3;
    fVar5 = param_1[5];
    if (param_1[5] <= fVar6) {
      fVar5 = fVar6;
    }
    param_2[5] = fVar5;
    param_1 = *(float **)(param_1 + 0x12);
    param_3 = fVar1;
    param_4 = fVar2;
    in_XMM4_Da = fVar4;
    in_XMM5_Da = fVar3;
    fVar6 = fVar5;
  } while (param_1 != (float *)0x0);
  return;
}
// 函数: void function_7e39d3(uint64_t param_1,uint64_t *param_2)
void function_7e39d3(uint64_t param_1,uint64_t *param_2)
{
  uint64_t in_RAX;
  *param_2 = in_RAX;
  param_2[1] = in_RAX;
  param_2[2] = in_RAX;
  return;
}
// 函数: void function_7e39f0(int64_t *param_1,int64_t param_2,int64_t param_3)
void function_7e39f0(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int64_t lVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  do {
    uVar8 = *(uint *)(param_2 + 0x18);
    uVar7 = 0;
    uVar14 = 0;
    uVar13 = 0;
    if ((uVar8 & 4) == 0) {
      uVar6 = *(uint *)(param_2 + 0x1c);
      uVar10 = ~(uVar6 - 1);
      uVar11 = (*(uint *)(param_2 + 0x20) ^ *(uint *)(param_3 + 0x20)) & uVar10;
      uVar9 = uVar11 >> 1 | uVar11 >> 2;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar11 = uVar11 & ~(uVar9 >> 0x10 | uVar9);
      if (((uVar11 != 0) && (uVar13 = uVar7, *(uint *)(param_3 + 0x1c) < uVar11)) &&
         ((uVar6 < uVar11 || ((uVar11 == uVar6 && ((uVar8 & 3) != 0)))))) {
        uVar13 = uVar11;
      }
      uVar11 = 0;
      uVar9 = (*(uint *)(param_2 + 0x24) ^ *(uint *)(param_3 + 0x24)) & uVar10;
      uVar7 = uVar9 >> 1 | uVar9 >> 2;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar9 = uVar9 & ~(uVar7 >> 0x10 | uVar7);
      if (((uVar13 < uVar9) && (uVar14 = uVar11, *(uint *)(param_3 + 0x1c) < uVar9)) &&
         ((uVar6 < uVar9 || ((uVar9 == uVar6 && (1 < ((byte)uVar8 & 3))))))) {
        uVar14 = 1;
        uVar13 = uVar9;
      }
      uVar10 = (*(uint *)(param_2 + 0x28) ^ *(uint *)(param_3 + 0x28)) & uVar10;
      uVar7 = uVar10 >> 1 | uVar10 >> 2;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar10 = uVar10 & ~(uVar7 >> 0x10 | uVar7);
      if ((uVar13 < uVar10) && (*(uint *)(param_3 + 0x1c) < uVar10)) {
        if (uVar6 < uVar10) goto LAB_1807e3bf8;
        if (uVar10 == uVar6) {
          bVar4 = (byte)uVar8 & 3;
          bVar15 = bVar4 < 2;
          bVar16 = bVar4 == 2;
          goto LAB_1807e3bf6;
        }
      }
    }
    else {
      uVar9 = *(uint *)(param_2 + 0x20) ^ *(uint *)(param_3 + 0x20);
      uVar6 = uVar9 >> 1 | uVar9 >> 2;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar9 = uVar9 & ~(uVar6 >> 0x10 | uVar6);
      if (((uVar9 != 0) && (uVar13 = uVar7, *(uint *)(param_3 + 0x1c) < uVar9)) &&
         (uVar13 = 0, *(uint *)(param_2 + 0x1c) < uVar9)) {
        uVar13 = uVar9;
      }
      uVar6 = *(uint *)(param_2 + 0x24) ^ *(uint *)(param_3 + 0x24);
      uVar7 = uVar6 >> 1 | uVar6 >> 2;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar6 = uVar6 & ~(uVar7 >> 0x10 | uVar7);
      if (((uVar13 < uVar6) && (uVar14 = 0, *(uint *)(param_3 + 0x1c) < uVar6)) &&
         (*(uint *)(param_2 + 0x1c) < uVar6)) {
        uVar14 = 1;
        uVar13 = uVar6;
      }
      uVar10 = *(uint *)(param_2 + 0x28) ^ *(uint *)(param_3 + 0x28);
      uVar7 = uVar10 >> 1 | uVar10 >> 2;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar10 = uVar10 & ~(uVar7 >> 0x10 | uVar7);
      if ((uVar13 < uVar10) && (*(uint *)(param_3 + 0x1c) < uVar10)) {
        bVar15 = uVar10 < *(uint *)(param_2 + 0x1c);
        bVar16 = uVar10 == *(uint *)(param_2 + 0x1c);
LAB_1807e3bf6:
        if (!bVar15 && !bVar16) {
LAB_1807e3bf8:
          uVar14 = 2;
          uVar13 = uVar10;
        }
      }
    }
    if (uVar13 != 0) {
      lVar2 = param_1[3];
      lVar3 = *(int64_t *)(lVar2 + 0x48);
      param_1[3] = lVar3;
      if (lVar3 != 0) {
        *(uint64_t *)(lVar3 + 0x30) = 0;
      }
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) & 0xffffffdf;
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | uVar14;
      *(uint64_t *)(lVar2 + 0x48) = 0;
      *(uint *)(lVar2 + 0x1c) = uVar13;
      lVar5 = param_2;
      lVar3 = param_3;
      if ((*(uint *)(param_3 + 0x20 + (uint64_t)uVar14 * 4) & uVar13) == 0) {
        lVar5 = param_3;
        lVar3 = param_2;
      }
      *(int64_t *)(lVar2 + 0x40) = lVar5;
      *(int64_t *)(lVar2 + 0x38) = lVar3;
      *(uint64_t *)(lVar2 + 0x30) = *(uint64_t *)(param_2 + 0x30);
      *(int64_t *)(lVar3 + 0x30) = lVar2;
      *(int64_t *)(*(int64_t *)(lVar2 + 0x40) + 0x30) = lVar2;
      lVar3 = *(int64_t *)(lVar2 + 0x30);
      if (lVar3 == 0) {
        *param_1 = lVar2;
      }
      else if (*(int64_t *)(lVar3 + 0x40) == param_2) {
        *(int64_t *)(lVar3 + 0x40) = lVar2;
      }
      else {
        *(int64_t *)(lVar3 + 0x38) = lVar2;
      }
      uVar8 = *(uint *)(lVar2 + 0x1c);
      if (uVar14 == 0) {
        *(uint *)(lVar2 + 0x20) = -uVar8 & *(uint *)(param_3 + 0x20) | uVar8;
        *(uint *)(lVar2 + 0x24) = -uVar8 & *(uint *)(param_3 + 0x24) | uVar8;
      }
      else {
        *(uint *)(lVar2 + 0x20) = -(uVar8 >> 1) & *(uint *)(param_3 + 0x20) | uVar8 >> 1;
        uVar8 = *(uint *)(lVar2 + 0x1c);
        if (uVar14 == 1) {
          *(uint *)(lVar2 + 0x24) = -uVar8 & *(uint *)(param_3 + 0x24) | uVar8;
          uVar8 = -uVar8 & *(uint *)(param_3 + 0x28) | uVar8;
          goto LAB_1807e3d57;
        }
        *(uint *)(lVar2 + 0x24) = -(uVar8 >> 1) & *(uint *)(param_3 + 0x24) | uVar8 >> 1;
      }
      uVar8 = -*(int *)(lVar2 + 0x1c) & *(uint *)(param_3 + 0x28) | *(uint *)(lVar2 + 0x1c);
LAB_1807e3d57:
      *(uint *)(lVar2 + 0x28) = uVar8;
      lVar3 = *(int64_t *)(param_2 + 0x48);
      *(uint64_t *)(param_2 + 0x48) = 0;
      Function_6a0cfb94(param_1,lVar2);
      while (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xffffffef;
        lVar5 = *(int64_t *)(lVar3 + 0x48);
        *(uint64_t *)(lVar3 + 0x48) = 0;
        *(uint64_t *)(lVar3 + 0x30) = 0;
        lVar12 = *(int64_t *)(lVar2 + 0x30);
        if (lVar12 == 0) {
          lVar12 = *param_1;
        }
        function_7e39f0(param_1,lVar12,lVar3);
        lVar3 = lVar5;
      }
      return;
    }
    if (*(uint *)(param_2 + 0x1c) <= *(uint *)(param_3 + 0x1c)) {
      Function_39493256(param_1,param_2);
      Function_6a0cfb94(param_1,param_2);
      return;
    }
    if ((uVar8 & 4) != 0) {
      uVar1 = *(uint64_t *)(param_2 + 0x30);
      Function_39493256(param_1,param_2);
      Function_6a0cfb94(param_1,uVar1);
      return;
    }
    if (*(uint *)(param_3 + 0x20 + (uint64_t)(uVar8 & 3) * 4) <
        *(uint *)(param_2 + 0x20 + (uint64_t)(uVar8 & 3) * 4)) {
      param_2 = *(int64_t *)(param_2 + 0x40);
    }
    else {
      param_2 = *(int64_t *)(param_2 + 0x38);
    }
  } while( true );
}