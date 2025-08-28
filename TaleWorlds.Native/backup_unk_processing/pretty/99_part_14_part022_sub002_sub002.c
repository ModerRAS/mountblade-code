#include "TaleWorlds.Native.Split.h"

// 99_part_14_part022_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808fd200(void)
void FUN_1808fd200(void)

{
  int8_t *in_RAX;
  int8_t *puVar1;
  int8_t *puVar2;
  int8_t auStackX_8 [32];
  
  puVar1 = auStackX_8 + -(longlong)in_RAX;
  if (auStackX_8 < in_RAX) {
    puVar1 = (int8_t *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = (int8_t *)StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((int8_t *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001808fd322)
// WARNING: Removing unreachable block (ram,0x0001808fd2a0)
// WARNING: Removing unreachable block (ram,0x0001808fd27b)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808fd254(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_XCR0;
  
  _DAT_180bf00b4 = 2;
  _DAT_180bf00b0 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180bf00b8 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      _DAT_180c827d0 = _DAT_180c827d0 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      _DAT_180c827d0 = _DAT_180c827d0 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180bf00b0 = 2;
    _DAT_180bf00b4 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      _DAT_180bf00b4 = 0xe;
      _DAT_180bf00b0 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180bf00b0 = 5;
        _DAT_180bf00b4 = 0x2e;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong thunk_FUN_1808fd8e0(uint64_t param_1,int32_t param_2)

{
  int32_t in_EAX;
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int8_t in_XMM0 [16];
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  uint uVar35;
  uint uVar39;
  double dVar36;
  int8_t auVar37 [16];
  double dVar40;
  float afStack_f8 [8];
  ulonglong uStack_d8;
  uint uStack_b8;
  uint uStack_b4;
  int8_t aauStack_38 [3] [16];
  int8_t auVar38 [16];
  
  fVar13 = in_XMM0._0_4_;
  fVar14 = in_XMM0._4_4_;
  auVar37 = in_XMM0 & _DAT_180d9f600;
  fVar20 = (float)system_data_f5d0;
  uVar35 = -(uint)(0x461c4000 < auVar37._0_4_);
  uVar39 = -(uint)(0x461c4000 < auVar37._4_4_);
  auVar38._0_8_ = CONCAT44(uVar39,uVar35);
  auVar38._8_4_ = -(uint)(0x461c4000 < auVar37._8_4_);
  auVar38._12_4_ = -(uint)(0x461c4000 < auVar37._12_4_);
  fVar29 = (float)system_data_f5c0;
  uVar1 = movmskps(in_EAX,auVar38);
  fVar15 = system_data_f5d0._4_4_;
  fVar16 = system_data_f5c0._4_4_;
  if (uVar1 == 0) {
    iVar4 = (int)(fVar13 * 0.31830987);
    iVar7 = (int)(fVar14 * 0.31830987);
    fVar5 = (float)iVar4;
    fVar8 = (float)iVar7;
    fVar20 = ((fVar13 - fVar20 * fVar5) - fVar29 * fVar5) - fVar5 * 1.5099067e-07;
    fVar15 = ((fVar14 - fVar15 * fVar8) - fVar16 * fVar8) - fVar8 * 1.5099067e-07;
    fVar13 = fVar20 - fVar5 * 5.126688e-12;
    fVar14 = fVar15 - fVar8 * 5.126688e-12;
    fVar20 = fVar20 * fVar20;
    fVar15 = fVar15 * fVar15;
    return CONCAT44((((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar14 + fVar14,
                    (((fVar20 * 2.608e-06 + -0.000198107) * fVar20 + 0.008333075) * fVar20 +
                    -0.16666658) * fVar20 * fVar13 + fVar13) ^ CONCAT44(iVar7 << 0x1f,iVar4 << 0x1f)
    ;
  }
  uStack_d8 = (ulonglong)system_data_f6d0 & in_XMM0._0_8_;
  iVar7 = (int)(fVar13 * 0.31830987);
  iVar9 = (int)(fVar14 * 0.31830987);
  iVar11 = (int)(in_XMM0._8_4_ * 0.31830987);
  iVar12 = (int)(in_XMM0._12_4_ * 0.31830987);
  auVar37 = in_XMM0 & _DAT_180d9f600;
  fVar5 = auVar37._0_4_;
  auVar34._0_4_ = -(uint)(0x4e800000 < (int)fVar5);
  fVar8 = auVar37._4_4_;
  auVar34._4_4_ = -(uint)(0x4e800000 < (int)fVar8);
  auVar34._8_4_ = -(uint)(0x4e800000 < auVar37._8_4_);
  auVar34._12_4_ = -(uint)(0x4e800000 < auVar37._12_4_);
  iVar4 = movmskps(param_2,auVar34);
  if (iVar4 == 0) {
    if (uVar1 == 0xf) {
      auVar32._0_4_ = (int)((double)fVar5 * 0.6366197723675814) + 1;
      auVar32._4_4_ = 0;
      auVar32._8_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar32._12_4_ = 0;
      auVar32 = auVar32 & _DAT_180d9f680;
      dVar36 = SUB168(_DAT_180d9f670 | auVar32,0) - 6755399441055744.0;
      dVar40 = SUB168(_DAT_180d9f670 | auVar32,8) - 6755399441055744.0;
      dVar21 = (double)fVar5 - dVar36 * 1.5707950592041016;
      dVar24 = (double)fVar8 - dVar40 * 1.5707950592041016;
      dVar22 = dVar21 - dVar36 * 1.267590960196685e-06;
      dVar25 = dVar24 - dVar40 * 1.267590960196685e-06;
      dVar23 = dVar22 - dVar36 * -1.6513982022126061e-13;
      dVar26 = dVar25 - dVar40 * -1.6513982022126061e-13;
      auVar33._0_8_ = auVar32._0_8_ << 0x3e;
      auVar33._8_8_ = auVar32._8_8_ << 0x3e;
      dVar21 = ((dVar21 - dVar22) - dVar36 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar36 * -1.6513982022126061e-13);
      dVar22 = ((dVar24 - dVar25) - dVar40 * 1.267590960196685e-06) +
               ((dVar25 - dVar26) - dVar40 * -1.6513982022126061e-13);
      dVar24 = dVar23 + dVar21;
      dVar27 = dVar26 + dVar22;
      dVar25 = dVar24 - dVar36 * -1.3350302175814904e-19;
      dVar28 = dVar27 - dVar40 * -1.3350302175814904e-19;
      fVar13 = (float)(((dVar21 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar36 * -1.3350302175814904e-19)) -
                       dVar36 * 1.6446256936324258e-26) + dVar25);
      fVar20 = (float)(((dVar22 + (dVar26 - dVar27) +
                        ((dVar27 - dVar28) - dVar40 * -1.3350302175814904e-19)) -
                       dVar40 * 1.6446256936324258e-26) + dVar28);
      fVar14 = fVar13 * fVar13;
      fVar15 = fVar20 * fVar20;
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar20 + fVar20,
                    (((fVar14 * 2.608e-06 + -0.000198107) * fVar14 + 0.008333075) * fVar14 +
                    -0.16666658) * fVar14 * fVar13 + fVar13) ^
           CONCAT44(SUB164(_DAT_180d9f610 & auVar33,0xc),SUB164(_DAT_180d9f610 & auVar33,4)) ^
           uStack_d8;
    }
    else {
      fVar6 = (float)iVar7;
      fVar10 = (float)iVar9;
      fVar13 = ((fVar13 - fVar20 * fVar6) - fVar29 * fVar6) - fVar6 * 1.5099067e-07;
      fVar14 = ((fVar14 - fVar15 * fVar10) - fVar16 * fVar10) - fVar10 * 1.5099067e-07;
      auVar30._0_4_ = (int)((double)fVar5 * 0.6366197723675814) + 1;
      auVar30._4_4_ = 0;
      auVar30._8_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar30._12_4_ = 0;
      auVar30 = auVar30 & _DAT_180d9f680;
      dVar36 = SUB168(_DAT_180d9f670 | auVar30,0) - 6755399441055744.0;
      dVar40 = SUB168(_DAT_180d9f670 | auVar30,8) - 6755399441055744.0;
      uStack_b8 = SUB164(auVar38 ^ _DAT_180d9f6b0,0);
      uStack_b4 = SUB164(auVar38 ^ _DAT_180d9f6b0,4);
      dVar21 = (double)fVar5 - dVar36 * 1.5707950592041016;
      dVar24 = (double)fVar8 - dVar40 * 1.5707950592041016;
      dVar22 = dVar21 - dVar36 * 1.267590960196685e-06;
      dVar25 = dVar24 - dVar40 * 1.267590960196685e-06;
      dVar23 = dVar22 - dVar36 * -1.6513982022126061e-13;
      dVar26 = dVar25 - dVar40 * -1.6513982022126061e-13;
      auVar31._0_8_ = auVar30._0_8_ << 0x3e;
      auVar31._8_8_ = auVar30._8_8_ << 0x3e;
      dVar21 = ((dVar21 - dVar22) - dVar36 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar36 * -1.6513982022126061e-13);
      dVar22 = ((dVar24 - dVar25) - dVar40 * 1.267590960196685e-06) +
               ((dVar25 - dVar26) - dVar40 * -1.6513982022126061e-13);
      dVar24 = dVar23 + dVar21;
      dVar27 = dVar26 + dVar22;
      dVar25 = dVar24 - dVar36 * -1.3350302175814904e-19;
      dVar28 = dVar27 - dVar40 * -1.3350302175814904e-19;
      fVar20 = (float)(((dVar21 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar36 * -1.3350302175814904e-19)) -
                       dVar36 * 1.6446256936324258e-26) + dVar25);
      fVar29 = (float)(((dVar22 + (dVar26 - dVar27) +
                        ((dVar27 - dVar28) - dVar40 * -1.3350302175814904e-19)) -
                       dVar40 * 1.6446256936324258e-26) + dVar28);
      fVar15 = (float)((uint)(fVar20 * fVar20) & uVar35 | (uint)(fVar13 * fVar13) & uStack_b8);
      fVar16 = (float)((uint)(fVar29 * fVar29) & uVar39 | (uint)(fVar14 * fVar14) & uStack_b4);
      fVar13 = (float)((uint)fVar20 & uVar35 | (uint)(fVar13 - fVar6 * 5.126688e-12) & uStack_b8);
      fVar14 = (float)((uint)fVar29 & uVar39 | (uint)(fVar14 - fVar10 * 5.126688e-12) & uStack_b4);
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + 0.008333075) * fVar16 +
                    -0.16666658) * fVar16 * fVar14 + fVar14,
                    (((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar13 + fVar13) ^
           ((CONCAT44(SUB164(_DAT_180d9f610 & auVar31,0xc),SUB164(_DAT_180d9f610 & auVar31,4)) ^
            uStack_d8) & auVar38._0_8_ |
           CONCAT44(iVar9 << 0x1f & uStack_b4,iVar7 << 0x1f & uStack_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      fVar5 = (float)iVar7;
      fVar8 = (float)iVar9;
      fVar6 = (float)iVar11;
      fVar10 = (float)iVar12;
      auVar19._0_4_ = iVar7 << 0x1f;
      auVar19._4_4_ = iVar9 << 0x1f;
      auVar19._8_4_ = iVar11 << 0x1f;
      auVar19._12_4_ = iVar12 << 0x1f;
      fVar29 = ((fVar13 - fVar20 * fVar5) - fVar29 * fVar5) - fVar5 * 1.5099067e-07;
      fVar16 = ((fVar14 - fVar15 * fVar8) - fVar16 * fVar8) - fVar8 * 1.5099067e-07;
      fVar17 = ((in_XMM0._8_4_ - system_data_f5d0._8_4_ * fVar6) - system_data_f5c0._8_4_ * fVar6) -
               fVar6 * 1.5099067e-07;
      fVar18 = ((in_XMM0._12_4_ - system_data_f5d0._12_4_ * fVar10) - system_data_f5c0._12_4_ * fVar10) -
               fVar10 * 1.5099067e-07;
      fVar13 = fVar29 - fVar5 * 5.126688e-12;
      fVar14 = fVar16 - fVar8 * 5.126688e-12;
      fVar20 = fVar17 - fVar6 * 5.126688e-12;
      fVar15 = fVar18 - fVar10 * 5.126688e-12;
      fVar29 = fVar29 * fVar29;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      auVar37._0_4_ =
           (((fVar29 * 2.608e-06 + -0.000198107) * fVar29 + (float)system_data_f580) * fVar29 +
           -0.16666658) * fVar29 * fVar13 + fVar13;
      auVar37._4_4_ =
           (((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + system_data_f580._4_4_) * fVar16 +
           -0.16666658) * fVar16 * fVar14 + fVar14;
      auVar37._8_4_ =
           (((fVar17 * 2.608e-06 + -0.000198107) * fVar17 + system_data_f580._8_4_) * fVar17 +
           -0.16666658) * fVar17 * fVar20 + fVar20;
      auVar37._12_4_ =
           (((fVar18 * 2.608e-06 + -0.000198107) * fVar18 + system_data_f580._12_4_) * fVar18 +
           -0.16666658) * fVar18 * fVar15 + fVar15;
      aauStack_38[0] = auVar37 ^ auVar19;
    }
    lVar3 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar13 = afStack_f8[lVar3];
        dVar21 = (double)fVar13;
        if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
          fVar13 = fVar13 - fVar13;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar13) >> 0x17) - 0x8e & 0xfff8);
          dVar22 = (double)(*(ulonglong *)(&UNK_180d9f410 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar21;
          dVar24 = (double)(*(ulonglong *)(&UNK_180d9f410 + uVar2 * 2) << 0x28) * dVar21;
          dVar23 = dVar22 + dVar24;
          iVar4 = SUB84(dVar23 + 6755399441055744.0,0);
          uVar35 = iVar4 * 2;
          uVar39 = (iVar4 << 0x19) >> 0x1f;
          dVar21 = dVar21 * *(double *)(&UNK_180d9f418 + uVar2 * 2) + dVar24 + (dVar22 - dVar23) +
                   (dVar23 - ((dVar23 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar35 + uVar39 ^ uVar39) & 0xfe);
          fVar13 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar21 * dVar21) *
                                    *(double *)(&UNK_180d9f008 + uVar2 * 8)) ^
                                   (ulonglong)((uVar35 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&system_data_f000 + uVar2 * 8) * dVar21 *
                          (double)((ulonglong)(9960.277636776373 - dVar21 * dVar21) ^
                                  (ulonglong)(((uVar35 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(aauStack_38[0] + lVar3 * 4) = fVar13;
      }
      lVar3 = lVar3 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar3 < 4);
  }
  return aauStack_38[0]._0_8_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808fd400(uint64_t param_1,int32_t param_2)

{
  int32_t in_EAX;
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  int iVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int8_t auVar6 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auVar16 [16];
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  uint uVar32;
  uint uVar35;
  double dVar33;
  double dVar36;
  int8_t aauStack_f8 [2] [16];
  ulonglong uStack_d8;
  uint uStack_b8;
  uint uStack_b4;
  int8_t aauStack_38 [3] [16];
  int8_t auVar34 [16];
  
  fVar5 = (float)((ulonglong)param_1 >> 0x20);
  fVar12 = (float)param_1;
  fVar13 = (float)((uint)fVar12 & (uint)system_data_b8c0);
  if (fVar13 < 0.00012207031) {
    return CONCAT44(1.0 - fVar13 * fVar13 * 0.5,fVar12);
  }
  fVar13 = fVar13 + 1.5707964;
  aauStack_f8[0]._0_8_ = CONCAT44(fVar13,fVar12);
  aauStack_f8[0]._8_4_ = fVar5;
  aauStack_f8[0]._12_4_ = 0;
  fVar17 = (float)system_data_f5d0;
  uVar32 = -(uint)(0x461c4000 < (uint)ABS(fVar12));
  uVar35 = -(uint)(0x461c4000 < (uint)ABS(fVar13));
  auVar34._0_8_ = CONCAT44(uVar35,uVar32);
  auVar34._8_4_ = -(uint)(0x461c4000 < (uint)ABS(fVar5));
  auVar34._12_4_ = 0;
  fVar26 = (float)system_data_f5c0;
  uVar1 = movmskps(in_EAX,auVar34);
  fVar14 = system_data_f5d0._4_4_;
  fVar15 = system_data_f5c0._4_4_;
  if (uVar1 == 0) {
    iVar4 = (int)(fVar12 * 0.31830987);
    iVar7 = (int)(fVar13 * 0.31830987);
    fVar5 = (float)iVar4;
    fVar8 = (float)iVar7;
    fVar17 = ((fVar12 - fVar17 * fVar5) - fVar26 * fVar5) - fVar5 * 1.5099067e-07;
    fVar13 = ((fVar13 - fVar14 * fVar8) - fVar15 * fVar8) - fVar8 * 1.5099067e-07;
    fVar12 = fVar17 - fVar5 * 5.126688e-12;
    fVar5 = fVar13 - fVar8 * 5.126688e-12;
    fVar17 = fVar17 * fVar17;
    fVar13 = fVar13 * fVar13;
    return CONCAT44((((fVar13 * 2.608e-06 + -0.000198107) * fVar13 + 0.008333075) * fVar13 +
                    -0.16666658) * fVar13 * fVar5 + fVar5,
                    (((fVar17 * 2.608e-06 + -0.000198107) * fVar17 + 0.008333075) * fVar17 +
                    -0.16666658) * fVar17 * fVar12 + fVar12) ^ CONCAT44(iVar7 << 0x1f,iVar4 << 0x1f)
    ;
  }
  uStack_d8 = (ulonglong)system_data_f6d0 & aauStack_f8[0]._0_8_;
  iVar7 = (int)(fVar12 * 0.31830987);
  iVar9 = (int)(fVar13 * 0.31830987);
  aauStack_f8[0] = aauStack_f8[0] & _DAT_180d9f600;
  fVar8 = aauStack_f8[0]._0_4_;
  auVar31._0_4_ = -(uint)(0x4e800000 < (int)fVar8);
  fVar11 = aauStack_f8[0]._4_4_;
  auVar31._4_4_ = -(uint)(0x4e800000 < (int)fVar11);
  auVar31._8_4_ = -(uint)(0x4e800000 < aauStack_f8[0]._8_4_);
  auVar31._12_4_ = -(uint)(0x4e800000 < aauStack_f8[0]._12_4_);
  iVar4 = movmskps(param_2,auVar31);
  if (iVar4 == 0) {
    if (uVar1 == 0xf) {
      auVar29._0_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar29._4_4_ = 0;
      auVar29._8_4_ = (int)((double)fVar11 * 0.6366197723675814) + 1;
      auVar29._12_4_ = 0;
      auVar29 = auVar29 & _DAT_180d9f680;
      dVar33 = SUB168(_DAT_180d9f670 | auVar29,0) - 6755399441055744.0;
      dVar36 = SUB168(_DAT_180d9f670 | auVar29,8) - 6755399441055744.0;
      dVar18 = (double)fVar8 - dVar33 * 1.5707950592041016;
      dVar21 = (double)fVar11 - dVar36 * 1.5707950592041016;
      dVar19 = dVar18 - dVar33 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar36 * 1.267590960196685e-06;
      dVar20 = dVar19 - dVar33 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar36 * -1.6513982022126061e-13;
      auVar30._0_8_ = auVar29._0_8_ << 0x3e;
      auVar30._8_8_ = auVar29._8_8_ << 0x3e;
      dVar18 = ((dVar18 - dVar19) - dVar33 * 1.267590960196685e-06) +
               ((dVar19 - dVar20) - dVar33 * -1.6513982022126061e-13);
      dVar19 = ((dVar21 - dVar22) - dVar36 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar36 * -1.6513982022126061e-13);
      dVar21 = dVar20 + dVar18;
      dVar24 = dVar23 + dVar19;
      dVar22 = dVar21 - dVar33 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar36 * -1.3350302175814904e-19;
      fVar12 = (float)(((dVar18 + (dVar20 - dVar21) +
                        ((dVar21 - dVar22) - dVar33 * -1.3350302175814904e-19)) -
                       dVar33 * 1.6446256936324258e-26) + dVar22);
      fVar13 = (float)(((dVar19 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar36 * -1.3350302175814904e-19)) -
                       dVar36 * 1.6446256936324258e-26) + dVar25);
      fVar5 = fVar12 * fVar12;
      fVar17 = fVar13 * fVar13;
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar17 * 2.608e-06 + -0.000198107) * fVar17 + 0.008333075) * fVar17 +
                    -0.16666658) * fVar17 * fVar13 + fVar13,
                    (((fVar5 * 2.608e-06 + -0.000198107) * fVar5 + 0.008333075) * fVar5 +
                    -0.16666658) * fVar5 * fVar12 + fVar12) ^
           CONCAT44(SUB164(_DAT_180d9f610 & auVar30,0xc),SUB164(_DAT_180d9f610 & auVar30,4)) ^
           uStack_d8;
    }
    else {
      fVar5 = (float)iVar7;
      fVar10 = (float)iVar9;
      fVar12 = ((fVar12 - fVar17 * fVar5) - fVar26 * fVar5) - fVar5 * 1.5099067e-07;
      fVar13 = ((fVar13 - fVar14 * fVar10) - fVar15 * fVar10) - fVar10 * 1.5099067e-07;
      auVar27._0_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar27._4_4_ = 0;
      auVar27._8_4_ = (int)((double)fVar11 * 0.6366197723675814) + 1;
      auVar27._12_4_ = 0;
      auVar27 = auVar27 & _DAT_180d9f680;
      dVar33 = SUB168(_DAT_180d9f670 | auVar27,0) - 6755399441055744.0;
      dVar36 = SUB168(_DAT_180d9f670 | auVar27,8) - 6755399441055744.0;
      uStack_b8 = SUB164(auVar34 ^ _DAT_180d9f6b0,0);
      uStack_b4 = SUB164(auVar34 ^ _DAT_180d9f6b0,4);
      dVar18 = (double)fVar8 - dVar33 * 1.5707950592041016;
      dVar21 = (double)fVar11 - dVar36 * 1.5707950592041016;
      dVar19 = dVar18 - dVar33 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar36 * 1.267590960196685e-06;
      dVar20 = dVar19 - dVar33 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar36 * -1.6513982022126061e-13;
      auVar28._0_8_ = auVar27._0_8_ << 0x3e;
      auVar28._8_8_ = auVar27._8_8_ << 0x3e;
      dVar18 = ((dVar18 - dVar19) - dVar33 * 1.267590960196685e-06) +
               ((dVar19 - dVar20) - dVar33 * -1.6513982022126061e-13);
      dVar19 = ((dVar21 - dVar22) - dVar36 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar36 * -1.6513982022126061e-13);
      dVar21 = dVar20 + dVar18;
      dVar24 = dVar23 + dVar19;
      dVar22 = dVar21 - dVar33 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar36 * -1.3350302175814904e-19;
      fVar17 = (float)(((dVar18 + (dVar20 - dVar21) +
                        ((dVar21 - dVar22) - dVar33 * -1.3350302175814904e-19)) -
                       dVar33 * 1.6446256936324258e-26) + dVar22);
      fVar26 = (float)(((dVar19 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar36 * -1.3350302175814904e-19)) -
                       dVar36 * 1.6446256936324258e-26) + dVar25);
      fVar14 = (float)((uint)(fVar17 * fVar17) & uVar32 | (uint)(fVar12 * fVar12) & uStack_b8);
      fVar15 = (float)((uint)(fVar26 * fVar26) & uVar35 | (uint)(fVar13 * fVar13) & uStack_b4);
      fVar12 = (float)((uint)fVar17 & uVar32 | (uint)(fVar12 - fVar5 * 5.126688e-12) & uStack_b8);
      fVar5 = (float)((uint)fVar26 & uVar35 | (uint)(fVar13 - fVar10 * 5.126688e-12) & uStack_b4);
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar5 + fVar5,
                    (((fVar14 * 2.608e-06 + -0.000198107) * fVar14 + 0.008333075) * fVar14 +
                    -0.16666658) * fVar14 * fVar12 + fVar12) ^
           ((CONCAT44(SUB164(_DAT_180d9f610 & auVar28,0xc),SUB164(_DAT_180d9f610 & auVar28,4)) ^
            uStack_d8) & auVar34._0_8_ |
           CONCAT44(iVar9 << 0x1f & uStack_b4,iVar7 << 0x1f & uStack_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      fVar8 = (float)iVar7;
      fVar11 = (float)iVar9;
      fVar10 = (float)(int)(fVar5 * 0.31830987);
      auVar16._0_4_ = iVar7 << 0x1f;
      auVar16._4_4_ = iVar9 << 0x1f;
      auVar16._8_4_ = (int)(fVar5 * 0.31830987) << 0x1f;
      auVar16._12_4_ = 0;
      fVar17 = ((fVar12 - fVar17 * fVar8) - fVar26 * fVar8) - fVar8 * 1.5099067e-07;
      fVar14 = ((fVar13 - fVar14 * fVar11) - fVar15 * fVar11) - fVar11 * 1.5099067e-07;
      fVar26 = ((fVar5 - system_data_f5d0._8_4_ * fVar10) - system_data_f5c0._8_4_ * fVar10) -
               fVar10 * 1.5099067e-07;
      fVar15 = ((0.0 - system_data_f5d0._12_4_ * 0.0) - system_data_f5c0._12_4_ * 0.0) - 0.0;
      fVar12 = fVar17 - fVar8 * 5.126688e-12;
      fVar5 = fVar14 - fVar11 * 5.126688e-12;
      fVar13 = fVar26 - fVar10 * 5.126688e-12;
      fVar17 = fVar17 * fVar17;
      fVar14 = fVar14 * fVar14;
      fVar26 = fVar26 * fVar26;
      fVar8 = fVar15 * fVar15;
      auVar6._0_4_ = (((fVar17 * 2.608e-06 + -0.000198107) * fVar17 + (float)system_data_f580) * fVar17
                     + -0.16666658) * fVar17 * fVar12 + fVar12;
      auVar6._4_4_ = (((fVar14 * 2.608e-06 + -0.000198107) * fVar14 + system_data_f580._4_4_) * fVar14
                     + -0.16666658) * fVar14 * fVar5 + fVar5;
      auVar6._8_4_ = (((fVar26 * 2.608e-06 + -0.000198107) * fVar26 + system_data_f580._8_4_) * fVar26
                     + -0.16666658) * fVar26 * fVar13 + fVar13;
      auVar6._12_4_ =
           (((fVar8 * 2.608e-06 + -0.000198107) * fVar8 + system_data_f580._12_4_) * fVar8 +
           -0.16666658) * fVar8 * (fVar15 - 0.0) + (fVar15 - 0.0);
      aauStack_38[0] = auVar6 ^ auVar16;
    }
    lVar3 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar12 = *(float *)(aauStack_f8[0] + lVar3 * 4);
        dVar18 = (double)fVar12;
        if (((uint)fVar12 & 0x7f800000) == 0x7f800000) {
          fVar12 = fVar12 - fVar12;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar12) >> 0x17) - 0x8e & 0xfff8);
          dVar19 = (double)(*(ulonglong *)(&UNK_180d9f410 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar18;
          dVar21 = (double)(*(ulonglong *)(&UNK_180d9f410 + uVar2 * 2) << 0x28) * dVar18;
          dVar20 = dVar19 + dVar21;
          iVar4 = SUB84(dVar20 + 6755399441055744.0,0);
          uVar32 = iVar4 * 2;
          uVar35 = (iVar4 << 0x19) >> 0x1f;
          dVar18 = dVar18 * *(double *)(&UNK_180d9f418 + uVar2 * 2) + dVar21 + (dVar19 - dVar20) +
                   (dVar20 - ((dVar20 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar32 + uVar35 ^ uVar35) & 0xfe);
          fVar12 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar18 * dVar18) *
                                    *(double *)(&UNK_180d9f008 + uVar2 * 8)) ^
                                   (ulonglong)((uVar32 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&system_data_f000 + uVar2 * 8) * dVar18 *
                          (double)((ulonglong)(9960.277636776373 - dVar18 * dVar18) ^
                                  (ulonglong)(((uVar32 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(aauStack_38[0] + lVar3 * 4) = fVar12;
      }
      lVar3 = lVar3 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar3 < 4);
  }
  return aauStack_38[0]._0_8_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong thunk_FUN_1808fe1a0(uint64_t param_1,int32_t param_2)

{
  int32_t in_EAX;
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar13;
  int8_t in_XMM0 [16];
  int8_t auVar8 [16];
  float fVar11;
  float fVar12;
  int iVar14;
  float fVar15;
  int8_t auVar9 [16];
  float fVar16;
  float fVar20;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar27;
  double dVar26;
  float fVar28;
  double dVar29;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  float fVar35;
  float fVar36;
  int8_t auVar37 [16];
  uint uVar38;
  uint uVar39;
  int8_t aauStack_d8 [2] [16];
  uint uStack_b8;
  uint uStack_b4;
  int8_t aauStack_38 [3] [16];
  
  auVar8 = in_XMM0 & _DAT_180d9fd20;
  fVar16 = auVar8._0_4_;
  fVar20 = auVar8._4_4_;
  fVar11 = auVar8._12_4_;
  fVar6 = auVar8._8_4_;
  fVar5 = (fVar16 + (float)system_data_fd10) * 0.31830987;
  fVar10 = (fVar20 + system_data_fd10._4_4_) * 0.31830987;
  fVar35 = (float)system_data_fce0;
  uVar38 = -(uint)(0x461c4000 < (int)fVar16);
  uVar39 = -(uint)(0x461c4000 < (int)fVar20);
  auVar8._0_8_ = CONCAT44(uVar39,uVar38);
  auVar8._8_4_ = -(uint)(0x461c4000 < (int)fVar6);
  auVar8._12_4_ = -(uint)(0x461c4000 < (int)fVar11);
  fVar36 = (float)system_data_fcd0;
  uVar1 = movmskps(in_EAX,auVar8);
  fVar27 = system_data_fce0._4_4_;
  fVar28 = system_data_fcd0._4_4_;
  if (uVar1 == 0) {
    fVar6 = (float)(int)fVar5 - 0.5;
    fVar11 = (float)(int)fVar10 - 0.5;
    fVar35 = ((fVar16 - fVar35 * fVar6) - fVar36 * fVar6) - fVar6 * 1.5099067e-07;
    fVar27 = ((fVar20 - fVar27 * fVar11) - fVar28 * fVar11) - fVar11 * 1.5099067e-07;
    fVar16 = fVar35 - fVar6 * 5.126688e-12;
    fVar20 = fVar27 - fVar11 * 5.126688e-12;
    fVar35 = fVar35 * fVar35;
    fVar27 = fVar27 * fVar27;
    return CONCAT44((((fVar27 * 2.608e-06 + -0.000198107) * fVar27 + 0.008333075) * fVar27 +
                    -0.16666658) * fVar27 * fVar20 + fVar20,
                    (((fVar35 * 2.608e-06 + -0.000198107) * fVar35 + 0.008333075) * fVar35 +
                    -0.16666658) * fVar35 * fVar16 + fVar16) ^
           CONCAT44((int)fVar10 << 0x1f,(int)fVar5 << 0x1f);
  }
  aauStack_d8[0] = in_XMM0 & _DAT_180d9fd20;
  fVar7 = aauStack_d8[0]._0_4_;
  auVar37._0_4_ = -(uint)(0x4e800000 < (int)fVar7);
  fVar12 = aauStack_d8[0]._4_4_;
  auVar37._4_4_ = -(uint)(0x4e800000 < (int)fVar12);
  auVar37._8_4_ = -(uint)(0x4e800000 < aauStack_d8[0]._8_4_);
  auVar37._12_4_ = -(uint)(0x4e800000 < aauStack_d8[0]._12_4_);
  iVar3 = movmskps(param_2,auVar37);
  if (iVar3 == 0) {
    if (uVar1 == 0xf) {
      auVar32._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar32._4_4_ = 0;
      auVar32._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar32._12_4_ = 0;
      auVar32 = auVar32 | _DAT_180d9fda0;
      dVar26 = SUB168(_DAT_180d9fd90 | auVar32,0) - 6755399441055744.0;
      dVar29 = SUB168(_DAT_180d9fd90 | auVar32,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar26 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar29 * 1.5707950592041016;
      dVar18 = dVar17 - dVar26 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar29 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar26 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar29 * -1.6513982022126061e-13;
      auVar33._0_8_ = auVar32._0_8_ << 0x3e;
      auVar33._8_8_ = auVar32._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar26 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar26 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar29 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar29 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar26 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar29 * -1.3350302175814904e-19;
      auVar8 = _DAT_180d9fd30 & auVar33 ^ _DAT_180d9fd30;
      fVar16 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar26 * -1.3350302175814904e-19)) -
                       dVar26 * 1.6446256936324258e-26) + dVar22);
      fVar20 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar29 * -1.3350302175814904e-19)) -
                       dVar29 * 1.6446256936324258e-26) + dVar25);
      fVar5 = fVar16 * fVar16;
      fVar10 = fVar20 * fVar20;
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar10 * 2.608e-06 + -0.000198107) * fVar10 + 0.008333075) * fVar10 +
                    -0.16666658) * fVar10 * fVar20 + fVar20,
                    (((fVar5 * 2.608e-06 + -0.000198107) * fVar5 + 0.008333075) * fVar5 +
                    -0.16666658) * fVar5 * fVar16 + fVar16) ^ CONCAT44(auVar8._12_4_,auVar8._4_4_);
    }
    else {
      fVar6 = (float)(int)fVar5 - 0.5;
      fVar11 = (float)(int)fVar10 - 0.5;
      fVar35 = ((fVar16 - fVar35 * fVar6) - fVar36 * fVar6) - fVar6 * 1.5099067e-07;
      fVar36 = ((fVar20 - fVar27 * fVar11) - fVar28 * fVar11) - fVar11 * 1.5099067e-07;
      uStack_b8 = SUB164(auVar8 ^ _DAT_180d9fdc0,0);
      uStack_b4 = SUB164(auVar8 ^ _DAT_180d9fdc0,4);
      auVar30._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar30._4_4_ = 0;
      auVar30._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar30._12_4_ = 0;
      auVar30 = auVar30 | _DAT_180d9fda0;
      dVar26 = SUB168(_DAT_180d9fd90 | auVar30,0) - 6755399441055744.0;
      dVar29 = SUB168(_DAT_180d9fd90 | auVar30,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar26 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar29 * 1.5707950592041016;
      dVar18 = dVar17 - dVar26 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar29 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar26 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar29 * -1.6513982022126061e-13;
      auVar31._0_8_ = auVar30._0_8_ << 0x3e;
      auVar31._8_8_ = auVar30._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar26 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar26 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar29 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar29 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar26 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar29 * -1.3350302175814904e-19;
      auVar37 = _DAT_180d9fd30 & auVar31 ^ _DAT_180d9fd30;
      fVar27 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar26 * -1.3350302175814904e-19)) -
                       dVar26 * 1.6446256936324258e-26) + dVar22);
      fVar28 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar29 * -1.3350302175814904e-19)) -
                       dVar29 * 1.6446256936324258e-26) + dVar25);
      fVar16 = (float)((uint)fVar27 & uVar38 | (uint)(fVar35 - fVar6 * 5.126688e-12) & uStack_b8);
      fVar20 = (float)((uint)fVar28 & uVar39 | (uint)(fVar36 - fVar11 * 5.126688e-12) & uStack_b4);
      fVar6 = (float)((uint)(fVar27 * fVar27) & uVar38 | (uint)(fVar35 * fVar35) & uStack_b8);
      fVar11 = (float)((uint)(fVar28 * fVar28) & uVar39 | (uint)(fVar36 * fVar36) & uStack_b4);
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar11 * 2.608e-06 + -0.000198107) * fVar11 + 0.008333075) * fVar11 +
                    -0.16666658) * fVar11 * fVar20 + fVar20,
                    (((fVar6 * 2.608e-06 + -0.000198107) * fVar6 + 0.008333075) * fVar6 +
                    -0.16666658) * fVar6 * fVar16 + fVar16) ^
           (CONCAT44(auVar37._12_4_,auVar37._4_4_) & auVar8._0_8_ |
           CONCAT44((int)fVar10 << 0x1f & uStack_b4,(int)fVar5 << 0x1f & uStack_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      iVar3 = (int)((fVar6 + system_data_fd10._8_4_) * 0.31830987);
      iVar14 = (int)((fVar11 + system_data_fd10._12_4_) * 0.31830987);
      fVar7 = (float)(int)fVar5 - 0.5;
      fVar12 = (float)(int)fVar10 - 0.5;
      fVar13 = (float)iVar3 - 0.5;
      fVar15 = (float)iVar14 - 0.5;
      auVar34._0_4_ = (int)fVar5 << 0x1f;
      auVar34._4_4_ = (int)fVar10 << 0x1f;
      auVar34._8_4_ = iVar3 << 0x1f;
      auVar34._12_4_ = iVar14 << 0x1f;
      fVar35 = ((fVar16 - fVar35 * fVar7) - fVar36 * fVar7) - fVar7 * 1.5099067e-07;
      fVar27 = ((fVar20 - fVar27 * fVar12) - fVar28 * fVar12) - fVar12 * 1.5099067e-07;
      fVar6 = ((fVar6 - system_data_fce0._8_4_ * fVar13) - system_data_fcd0._8_4_ * fVar13) -
              fVar13 * 1.5099067e-07;
      fVar11 = ((fVar11 - system_data_fce0._12_4_ * fVar15) - system_data_fcd0._12_4_ * fVar15) -
               fVar15 * 1.5099067e-07;
      fVar16 = fVar35 - fVar7 * 5.126688e-12;
      fVar5 = fVar27 - fVar12 * 5.126688e-12;
      fVar20 = fVar6 - fVar13 * 5.126688e-12;
      fVar10 = fVar11 - fVar15 * 5.126688e-12;
      fVar35 = fVar35 * fVar35;
      fVar27 = fVar27 * fVar27;
      fVar6 = fVar6 * fVar6;
      fVar11 = fVar11 * fVar11;
      auVar9._0_4_ = (((fVar35 * 2.608e-06 + -0.000198107) * fVar35 + (float)system_data_fc80) * fVar35
                     + -0.16666658) * fVar35 * fVar16 + fVar16;
      auVar9._4_4_ = (((fVar27 * 2.608e-06 + -0.000198107) * fVar27 + system_data_fc80._4_4_) * fVar27
                     + -0.16666658) * fVar27 * fVar5 + fVar5;
      auVar9._8_4_ = (((fVar6 * 2.608e-06 + -0.000198107) * fVar6 + system_data_fc80._8_4_) * fVar6 +
                     -0.16666658) * fVar6 * fVar20 + fVar20;
      auVar9._12_4_ =
           (((fVar11 * 2.608e-06 + -0.000198107) * fVar11 + system_data_fc80._12_4_) * fVar11 +
           -0.16666658) * fVar11 * fVar10 + fVar10;
      aauStack_38[0] = auVar9 ^ auVar34;
    }
    lVar4 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar16 = *(float *)(aauStack_d8[0] + lVar4 * 4);
        dVar17 = (double)fVar16;
        if (((uint)fVar16 & 0x7f800000) == 0x7f800000) {
          fVar16 = fVar16 - fVar16;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar16) >> 0x17) - 0x8e & 0xfff8);
          dVar18 = (double)(*(ulonglong *)(&UNK_180d9fb10 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar17;
          dVar21 = (double)(*(ulonglong *)(&UNK_180d9fb10 + uVar2 * 2) << 0x28) * dVar17;
          dVar19 = dVar18 + dVar21;
          iVar3 = SUB84(dVar19 + 6755399441055744.0,0);
          uVar38 = iVar3 * 2;
          uVar39 = (iVar3 << 0x19) >> 0x1f;
          dVar17 = dVar17 * *(double *)(&UNK_180d9fb18 + uVar2 * 2) + dVar21 + (dVar18 - dVar19) +
                   (dVar19 - ((dVar19 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar38 + uVar39 ^ uVar39) & 0xfe);
          fVar16 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar17 * dVar17) *
                                    *(double *)(&UNK_180d9f708 + uVar2 * 8)) ^
                                   (ulonglong)(((uVar38 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&UNK_180d9f700 + uVar2 * 8) * dVar17 *
                          (double)((ulonglong)(9960.277636776373 - dVar17 * dVar17) ^
                                  (ulonglong)((uVar38 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(aauStack_38[0] + lVar4 * 4) = fVar16;
      }
      lVar4 = lVar4 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar4 < 4);
  }
  return aauStack_38[0]._0_8_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_1808fea60(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int8_t auVar5 [12];
  int8_t auVar6 [12];
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar12;
  int iVar13;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  int8_t auVar11 [16];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  double dVar19;
  int8_t unaff_XMM8 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  int8_t unaff_XMM10 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  uint uVar26;
  double dVar27;
  int8_t auVar28 [16];
  double dVar30;
  double dVar31;
  int8_t auVar29 [16];
  float fVar33;
  int8_t auVar32 [16];
  double dVar34;
  int8_t auVar36 [16];
  double dVar35;
  double dVar38;
  double dVar39;
  int8_t auVar37 [16];
  float afStack_100 [16];
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  
  fVar33 = (float)((ulonglong)param_2 >> 0x20);
  afStack_100[0] = (float)param_2;
  fVar12 = (float)((ulonglong)param_1 >> 0x20);
  dVar19 = (double)(float)param_1;
  dVar4 = (double)fVar12;
  uVar8 = (uint)((ulonglong)dVar4 >> 0x20);
  uVar26 = (uint)((ulonglong)(double)in_XMM0_Dd >> 0x20);
  auVar28._0_8_ = (ulonglong)(double)in_XMM0_Dc & 0xfffffffffffff;
  auVar28._8_4_ = SUB84((double)in_XMM0_Dd,0);
  auVar28._12_4_ = uVar26 & 0xfffff;
  auVar36._0_8_ = (ulonglong)dVar19 & 0xfffffffffffff;
  auVar36._8_4_ = SUB84(dVar4,0);
  auVar36._12_4_ = uVar8 & 0xfffff;
  dVar34 = SUB168(auVar36 | _DAT_180da3280,0);
  fVar15 = (float)dVar34;
  dVar38 = SUB168(auVar36 | _DAT_180da3280,8);
  fVar16 = (float)dVar38;
  dVar27 = SUB168(auVar28 | _DAT_180da3280,0);
  fVar22 = (float)dVar27;
  dVar30 = SUB168(auVar28 | _DAT_180da3280,8);
  fVar23 = (float)dVar30;
  auVar20._4_4_ = fVar16;
  auVar20._0_4_ = fVar15;
  auVar20._8_4_ = fVar15;
  auVar20._12_4_ = fVar16;
  auVar20 = rcpps(unaff_XMM8,auVar20);
  auVar24._4_4_ = fVar23;
  auVar24._0_4_ = fVar22;
  auVar24._8_4_ = fVar22;
  auVar24._12_4_ = fVar23;
  auVar24 = rcpps(unaff_XMM10,auVar24);
  dVar4 = ((double)auVar20._0_4_ + 6755399441055744.0) - 6755399441055744.0;
  dVar1 = ((double)auVar20._4_4_ + 6755399441055744.0) - 6755399441055744.0;
  dVar2 = ((double)auVar24._0_4_ + 6755399441055744.0) - 6755399441055744.0;
  dVar3 = ((double)auVar24._4_4_ + 6755399441055744.0) - 6755399441055744.0;
  uVar7 = (uint)((ulonglong)dVar4 >> 0x28);
  dVar34 = dVar34 * dVar4 - 1.0;
  dVar38 = dVar38 * dVar1 - 1.0;
  dVar27 = dVar27 * dVar2 - 1.0;
  dVar30 = dVar30 * dVar3 - 1.0;
  auVar5._4_8_ = 0;
  auVar5._0_4_ = (uint)(-(ulonglong)(724.0 < dVar4) >> 0x20) & 0x408ff800;
  auVar25._0_12_ = auVar5 << 0x20;
  auVar25._12_4_ = (uint)(-(ulonglong)(724.0 < dVar1) >> 0x20) & 0x408ff800;
  auVar6._4_8_ = 0;
  auVar6._0_4_ = (uint)(-(ulonglong)(724.0 < dVar2) >> 0x20) & 0x408ff800;
  auVar17._0_12_ = auVar6 << 0x20;
  auVar17._12_4_ = (uint)(-(ulonglong)(724.0 < dVar3) >> 0x20) & 0x408ff800;
  auVar18._8_4_ = SUB84(dVar30,0);
  auVar18._0_8_ = dVar27;
  auVar18._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  dVar35 = (dVar34 + (dVar34 * 0.33333333333308374 + -0.49999999999988803) * dVar34 * dVar34 +
            *(double *)(&UNK_18099a180 + (int)uVar7) +
           ((double)(uint)((ulonglong)dVar19 >> 0x34) - SUB168(auVar25 | _DAT_180da34c0,0)) *
           0.6931471805599453) * (double)afStack_100[0];
  dVar39 = (dVar38 + (dVar38 * 0.33333333333308374 + -0.49999999999988803) * dVar38 * dVar38 +
            *(double *)(&UNK_18099a180 + (int)(uint)((ulonglong)dVar1 >> 0x28)) +
           ((double)(uVar8 >> 0x14) - SUB168(auVar25 | _DAT_180da34c0,8)) * 0.6931471805599453) *
           (double)fVar33;
  dVar38 = (dVar27 + (dVar27 * 0.33333333333308374 + -0.49999999999988803) * dVar27 * dVar27 +
            *(double *)(&UNK_18099a180 + (int)(uint)((ulonglong)dVar2 >> 0x28)) +
           ((double)(uint)((ulonglong)(double)in_XMM0_Dc >> 0x34) -
           SUB168(auVar17 | _DAT_180da34c0,0)) * 0.6931471805599453) * (double)in_XMM1_Dc;
  dVar31 = (dVar30 + (dVar30 * 0.33333333333308374 + -0.49999999999988803) * auVar18._8_8_ * dVar30
            + *(double *)(&UNK_18099a180 + (int)(uint)((ulonglong)dVar3 >> 0x28)) +
           ((double)(uVar26 >> 0x14) - SUB168(auVar17 | _DAT_180da34c0,8)) * 0.6931471805599453) *
           (double)in_XMM1_Dd;
  dVar30 = dVar35 * 2954.639443740597;
  dVar34 = dVar39 * 2954.639443740597;
  dVar2 = dVar38 * 2954.639443740597;
  dVar3 = dVar31 * 2954.639443740597;
  auVar21._8_4_ = SUB84(dVar34,0);
  auVar21._0_8_ = dVar30;
  auVar21._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  dVar19 = (dVar30 - 0.5) + 6755399441055744.0;
  dVar27 = (auVar21._8_8_ - 0.5) + 6755399441055744.0;
  dVar4 = (dVar2 - 0.5) + 6755399441055744.0;
  dVar1 = (dVar3 - 0.5) + 6755399441055744.0;
  iVar10 = (int)(float)param_1 + 0x7f800000;
  iVar13 = (int)fVar12 + 0x7f800000;
  fVar33 = ABS(fVar33);
  auVar14._0_4_ = -(uint)(-0x1000001 < iVar10);
  auVar14._4_4_ = -(uint)(-0x1000001 < iVar13);
  auVar14._8_4_ = -(uint)(-0x1000001 < (int)in_XMM0_Dc + 0x7f800000);
  auVar14._12_4_ = -(uint)(-0x1000001 < (int)in_XMM0_Dd + 0x7f800000);
  auVar11._0_4_ = -(uint)(iVar10 == -0x1000001);
  auVar11._4_4_ = -(uint)(iVar13 == -0x1000001);
  auVar11._8_4_ = -(uint)((int)in_XMM0_Dc + 0x7f800000 == -0x1000001);
  auVar11._12_4_ = -(uint)((int)in_XMM0_Dd + 0x7f800000 == -0x1000001);
  auVar29._0_4_ = -(uint)(0x7f800000 < (uint)ABS(afStack_100[0]));
  auVar29._4_4_ = -(uint)(0x7f800000 < (uint)fVar33);
  auVar29._8_4_ = -(uint)(0x7f800000 < (uint)ABS(in_XMM1_Dc));
  auVar29._12_4_ = -(uint)(0x7f800000 < (uint)ABS(in_XMM1_Dd));
  auVar32._0_4_ = -(uint)(ABS(afStack_100[0]) == INFINITY);
  auVar32._4_4_ = -(uint)(fVar33 == INFINITY);
  auVar32._8_4_ = -(uint)(ABS(in_XMM1_Dc) == INFINITY);
  auVar32._12_4_ = -(uint)(ABS(in_XMM1_Dd) == INFINITY);
  auVar37._0_4_ = -(uint)(0x4059fe36 < ((uint)((ulonglong)dVar35 >> 0x20) & 0x7fffffff));
  auVar37._4_4_ = -(uint)(0x4059fe36 < ((uint)((ulonglong)dVar39 >> 0x20) & 0x7fffffff));
  auVar37._8_4_ = -(uint)(0x4059fe36 < ((uint)((ulonglong)dVar38 >> 0x20) & 0x7fffffff));
  auVar37._12_4_ = -(uint)(0x4059fe36 < ((uint)((ulonglong)dVar31 >> 0x20) & 0x7fffffff));
  uVar7 = movmskps(uVar7,auVar14 | auVar11 | auVar29 | auVar32 | auVar37);
  uStack_c0 = CONCAT44((float)(double)((longlong)
                                       ((dVar34 - (dVar27 - 6755399441055744.0)) *
                                        0.00033850805268231294 *
                                        *(double *)
                                         (&UNK_180da3600 + (ulonglong)(SUB82(dVar27,0) & 0x7ff) * 8)
                                       + *(double *)
                                          (&UNK_180da3600 + (ulonglong)(SUB82(dVar27,0) & 0x7ff) * 8
                                          )) + (((ulonglong)dVar27 >> 0xb) << 0x34)),
                       (float)(double)((longlong)
                                       ((dVar30 - (dVar19 - 6755399441055744.0)) *
                                        0.00033850805268231294 *
                                        *(double *)
                                         (&UNK_180da3600 + ((SUB84(dVar19,0) & 0x7ff) << 3)) +
                                       *(double *)
                                        (&UNK_180da3600 + ((SUB84(dVar19,0) & 0x7ff) << 3))) +
                                      (((ulonglong)dVar19 >> 0xb) << 0x34)));
  uStack_b8 = CONCAT44((float)(double)((longlong)
                                       ((dVar3 - (dVar1 - 6755399441055744.0)) *
                                        0.00033850805268231294 *
                                        *(double *)
                                         (&UNK_180da3600 + (ulonglong)(SUB82(dVar1,0) & 0x7ff) * 8)
                                       + *(double *)
                                          (&UNK_180da3600 + (ulonglong)(SUB82(dVar1,0) & 0x7ff) * 8)
                                       ) + (((ulonglong)dVar1 >> 0xb) << 0x34)),
                       (float)(double)((longlong)
                                       ((dVar2 - (dVar4 - 6755399441055744.0)) *
                                        0.00033850805268231294 *
                                        *(double *)
                                         (&UNK_180da3600 + ((SUB84(dVar4,0) & 0x7ff) << 3)) +
                                       *(double *)(&UNK_180da3600 + ((SUB84(dVar4,0) & 0x7ff) << 3))
                                       ) + (((ulonglong)dVar4 >> 0xb) << 0x34)));
  if ((uVar7 != 0) && (uVar7 != 0)) {
    uVar9 = 0;
    do {
      if ((1 << ((byte)uVar9 & 0x1f) & uVar7) != 0) {
        FUN_1808fef70(afStack_100 + (uVar9 - 0x10),afStack_100 + uVar9,
                      (longlong)&uStack_c0 + uVar9 * 4);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < 0x20);
  }
  return;
}








