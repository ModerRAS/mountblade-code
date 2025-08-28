#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part059.c - 10 个函数

// 函数: void FUN_1806970f0(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
void FUN_1806970f0(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int8_t auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int8_t in_XMM2 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  uint *puStackX_18;
  longlong lStack_48;
  
  iVar1 = _DAT_180bf00b0;
  lStack_48 = 8;
  puStackX_18 = param_3;
  do {
    iVar6 = 0;
    iVar14 = 0;
    iVar16 = 0;
    iVar18 = 0;
    iVar20 = 0;
    lVar12 = 8;
    puVar7 = param_1;
    puVar8 = puStackX_18;
    iVar15 = iVar14;
    iVar17 = iVar16;
    iVar19 = iVar18;
    iVar21 = iVar20;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        uVar10 = 8;
        auVar22 = pmovzxbd(in_XMM2,ZEXT416(*puVar7));
        auVar13 = pmovzxbd(ZEXT416(*puVar7),ZEXT416(*puVar8));
        auVar23._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        auVar23._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        auVar23._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        auVar23._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(*puVar8),auVar23);
        iVar14 = auVar13._0_4_ + iVar14;
        iVar16 = auVar13._4_4_ + iVar16;
        iVar18 = auVar13._8_4_ + iVar18;
        iVar20 = auVar13._12_4_ + iVar20;
        auVar22 = pmovzxbd(auVar23,ZEXT416(puVar7[1]));
        auVar13 = pmovzxbd(ZEXT416(puVar7[1]),ZEXT416(puVar8[1]));
        in_XMM2._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        in_XMM2._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        in_XMM2._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        in_XMM2._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(puVar8[1]),in_XMM2);
        iVar15 = auVar13._0_4_ + iVar15;
        iVar17 = auVar13._4_4_ + iVar17;
        iVar19 = auVar13._8_4_ + iVar19;
        iVar21 = auVar13._12_4_ + iVar21;
      }
      iVar11 = 0;
      iVar5 = 0;
      if (uVar10 < 8) {
        if (1 < (longlong)(8 - uVar10)) {
          pbVar2 = (byte *)(uVar10 + (longlong)puVar8);
          lVar9 = (6 - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar9 * 2;
          do {
            uVar3 = (int)((uint)pbVar2[(longlong)puVar7 - (longlong)puVar8] - (uint)*pbVar2) >> 0x1f
            ;
            iVar11 = iVar11 + (((uint)pbVar2[(longlong)puVar7 - (longlong)puVar8] - (uint)*pbVar2 ^
                               uVar3) - uVar3);
            uVar3 = (uint)(pbVar2 + 2)[((longlong)puVar7 - (longlong)puVar8) + -1] - (uint)pbVar2[1]
            ;
            uVar4 = (int)uVar3 >> 0x1f;
            iVar5 = iVar5 + ((uVar3 ^ uVar4) - uVar4);
            lVar9 = lVar9 + -1;
            pbVar2 = pbVar2 + 2;
          } while (lVar9 != 0);
        }
        if ((longlong)uVar10 < 8) {
          uVar3 = (uint)*(byte *)(uVar10 + (longlong)puVar7) -
                  (uint)*(byte *)(uVar10 + (longlong)puVar8);
          uVar4 = (int)uVar3 >> 0x1f;
          iVar6 = iVar6 + ((uVar3 ^ uVar4) - uVar4);
        }
        iVar6 = iVar6 + iVar5 + iVar11;
      }
      puVar7 = (uint *)((longlong)puVar7 + (longlong)param_2);
      puVar8 = (uint *)((longlong)puVar8 + (longlong)param_4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_5 = iVar15 + iVar14 + iVar19 + iVar18 + iVar17 + iVar16 + iVar21 + iVar20 + iVar6;
    param_5 = param_5 + 1;
    puStackX_18 = (uint *)((longlong)puStackX_18 + 1);
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}



uint64_t
FUN_1806972a0(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4,
             int8_t (*param_5) [32])

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 8;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],*(int8_t (*) [32])(*param_3 + param_4));
    auVar4 = vpsadbw_avx2(auVar4,*(int8_t (*) [32])(*param_1 + param_2));
    param_1 = (int8_t (*) [32])(*param_1 + param_2 * 2);
    param_5 = param_5 + 2;
    param_3 = (int8_t (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



int32_t
FUN_180697340(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4)

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 8;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(*(int8_t (*) [32])(*param_3 + param_4),
                          *(int8_t (*) [32])(*param_1 + param_2));
    param_1 = (int8_t (*) [32])(*param_1 + param_2 * 2);
    param_3 = (int8_t (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



uint64_t
FUN_1806973c0(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4,
             int8_t (*param_5) [32])

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 0x10;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],*(int8_t (*) [32])(*param_3 + param_4));
    auVar4 = vpsadbw_avx2(auVar4,*(int8_t (*) [32])(*param_1 + param_2));
    param_1 = (int8_t (*) [32])(*param_1 + param_2 * 2);
    param_5 = param_5 + 2;
    param_3 = (int8_t (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



int32_t
FUN_180697460(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4)

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 0x10;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(*(int8_t (*) [32])(*param_3 + param_4),
                          *(int8_t (*) [32])(*param_1 + param_2));
    param_1 = (int8_t (*) [32])(*param_1 + param_2 * 2);
    param_3 = (int8_t (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



uint64_t
FUN_1806974e0(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4,
             int8_t (*param_5) [32])

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 0x20;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],*(int8_t (*) [32])(*param_3 + param_4));
    auVar4 = vpsadbw_avx2(auVar4,*(int8_t (*) [32])(*param_1 + param_2));
    param_1 = (int8_t (*) [32])(*param_1 + param_2 * 2);
    param_5 = param_5 + 2;
    param_3 = (int8_t (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



int32_t
FUN_180697580(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4)

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 0x20;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(*(int8_t (*) [32])(*param_3 + param_4),
                          *(int8_t (*) [32])(*param_1 + param_2));
    param_1 = (int8_t (*) [32])(*param_1 + param_2 * 2);
    param_3 = (int8_t (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



uint64_t
FUN_180697600(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4,
             int8_t (*param_5) [32])

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 0x20;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],param_3[1]);
    auVar4 = vpsadbw_avx2(auVar4,param_1[1]);
    param_1 = (int8_t (*) [32])(*param_1 + param_2);
    param_5 = param_5 + 2;
    param_3 = (int8_t (*) [32])(*param_3 + param_4);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



int32_t
FUN_180697680(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4)

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 0x20;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(param_3[1],param_1[1]);
    param_1 = (int8_t (*) [32])(*param_1 + param_2);
    param_3 = (int8_t (*) [32])(*param_3 + param_4);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



uint64_t
FUN_1806976f0(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4,
             int8_t (*param_5) [32])

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 0x40;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],param_3[1]);
    auVar4 = vpsadbw_avx2(auVar4,param_1[1]);
    param_1 = (int8_t (*) [32])(*param_1 + param_2);
    param_5 = param_5 + 2;
    param_3 = (int8_t (*) [32])(*param_3 + param_4);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



int32_t
FUN_180697770(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4)

{
  int8_t auVar1 [16];
  int8_t auVar2 [32];
  longlong lVar3;
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  
  lVar3 = 0x40;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(param_3[1],param_1[1]);
    param_1 = (int8_t (*) [32])(*param_1 + param_2);
    param_3 = (int8_t (*) [32])(*param_3 + param_4);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}





// 函数: void FUN_1806977e0(int8_t (*param_1) [32],int param_2,longlong *param_3,int param_4,
void FUN_1806977e0(int8_t (*param_1) [32],int param_2,longlong *param_3,int param_4,
                  int8_t (*param_5) [16])

{
  int8_t auVar1 [32];
  int8_t auVar2 [16];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t (*pauVar6) [32];
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  
  pauVar6 = (int8_t (*) [32])param_3[2];
  lVar10 = param_3[1] - (longlong)pauVar6;
  lVar9 = param_3[3] - (longlong)pauVar6;
  auVar12 = ZEXT832(0) << 0x40;
  lVar8 = *param_3 - (longlong)pauVar6;
  lVar7 = 0x20;
  auVar11 = auVar12;
  auVar3 = auVar12;
  auVar4 = auVar12;
  do {
    auVar1 = *param_1;
    auVar5 = vpsadbw_avx2(auVar1,*(int8_t (*) [32])(lVar8 + (longlong)pauVar6));
    auVar12 = vpaddd_avx2(auVar5,auVar12);
    auVar5 = vpsadbw_avx2(auVar1,*(int8_t (*) [32])(lVar10 + (longlong)pauVar6));
    auVar11 = vpaddd_avx2(auVar5,auVar11);
    auVar5 = vpsadbw_avx2(auVar1,*pauVar6);
    auVar3 = vpaddd_avx2(auVar5,auVar3);
    auVar1 = vpsadbw_avx2(auVar1,*(int8_t (*) [32])(lVar9 + (longlong)pauVar6));
    pauVar6 = (int8_t (*) [32])(*pauVar6 + param_4);
    param_1 = (int8_t (*) [32])(*param_1 + param_2);
    auVar4 = vpaddd_avx2(auVar1,auVar4);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar11 = vpslldq_avx2(auVar11,4);
  auVar12 = vpor_avx2(auVar11,auVar12);
  auVar11 = vpslldq_avx2(auVar4,4);
  auVar11 = vpor_avx2(auVar11,auVar3);
  auVar3 = vpunpcklqdq_avx2(auVar12,auVar11);
  auVar12 = vpunpckhqdq_avx2(auVar12,auVar11);
  auVar12 = vpaddd_avx2(auVar12,auVar3);
  auVar2 = vpaddd_avx(auVar12._16_16_,auVar12._0_16_);
  *param_5 = auVar2;
  return;
}





// 函数: void FUN_1806978b0(int8_t (*param_1) [32],int param_2,longlong *param_3,int param_4,
void FUN_1806978b0(int8_t (*param_1) [32],int param_2,longlong *param_3,int param_4,
                  int8_t (*param_5) [16])

{
  int8_t auVar1 [32];
  int8_t auVar2 [32];
  int8_t auVar3 [16];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t (*pauVar8) [32];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  
  pauVar8 = (int8_t (*) [32])param_3[2];
  lVar12 = param_3[1] - (longlong)pauVar8;
  lVar11 = param_3[3] - (longlong)pauVar8;
  auVar14 = ZEXT832(0) << 0x40;
  lVar10 = *param_3 - (longlong)pauVar8;
  lVar9 = 0x40;
  auVar13 = auVar14;
  auVar4 = auVar14;
  auVar5 = auVar14;
  do {
    auVar1 = *param_1;
    auVar2 = param_1[1];
    auVar6 = vpsadbw_avx2(auVar1,*(int8_t (*) [32])(lVar10 + (longlong)pauVar8));
    auVar7 = vpsadbw_avx2(auVar2,*(int8_t (*) [32])(lVar10 + 0x20 + (longlong)pauVar8));
    auVar14 = vpaddd_avx2(auVar6,auVar14);
    auVar6 = vpsadbw_avx2(auVar1,*(int8_t (*) [32])(lVar12 + (longlong)pauVar8));
    auVar14 = vpaddd_avx2(auVar14,auVar7);
    auVar7 = vpsadbw_avx2(auVar2,*(int8_t (*) [32])(lVar12 + 0x20 + (longlong)pauVar8));
    auVar13 = vpaddd_avx2(auVar6,auVar13);
    auVar6 = vpsadbw_avx2(auVar1,*pauVar8);
    auVar13 = vpaddd_avx2(auVar13,auVar7);
    auVar7 = vpsadbw_avx2(auVar2,pauVar8[1]);
    auVar4 = vpaddd_avx2(auVar6,auVar4);
    auVar1 = vpsadbw_avx2(auVar1,*(int8_t (*) [32])(lVar11 + (longlong)pauVar8));
    auVar4 = vpaddd_avx2(auVar4,auVar7);
    auVar2 = vpsadbw_avx2(auVar2,*(int8_t (*) [32])(lVar11 + 0x20 + (longlong)pauVar8));
    pauVar8 = (int8_t (*) [32])(*pauVar8 + param_4);
    param_1 = (int8_t (*) [32])(*param_1 + param_2);
    auVar5 = vpaddd_avx2(auVar1,auVar5);
    auVar5 = vpaddd_avx2(auVar5,auVar2);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  auVar13 = vpslldq_avx2(auVar13,4);
  auVar14 = vpor_avx2(auVar13,auVar14);
  auVar13 = vpslldq_avx2(auVar5,4);
  auVar13 = vpor_avx2(auVar13,auVar4);
  auVar4 = vpunpcklqdq_avx2(auVar14,auVar13);
  auVar14 = vpunpckhqdq_avx2(auVar14,auVar13);
  auVar14 = vpaddd_avx2(auVar14,auVar4);
  auVar3 = vpaddd_avx(auVar14._16_16_,auVar14._0_16_);
  *param_5 = auVar3;
  return;
}





// 函数: void FUN_1806979e0(void)
void FUN_1806979e0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180697ae0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180697ae0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint param_6,int param_7,int param_8,uint param_9)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  short *psVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  param_1 = param_1 + -3;
  if (0 < (int)param_9) {
    uVar6 = (ulonglong)param_9;
    do {
      lVar5 = 0;
      uVar1 = param_6;
      if (0 < (longlong)param_8) {
        do {
          psVar4 = (short *)((ulonglong)(uVar1 & 0xf) * 0x10 + param_5);
          pbVar3 = (byte *)(((longlong)(int)uVar1 >> 4) + param_1);
          iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                       (int)psVar4[7] * (uint)pbVar3[7] + (int)psVar4[6] * (uint)pbVar3[6] +
                       (int)psVar4[5] * (uint)pbVar3[5] + (int)psVar4[4] * (uint)pbVar3[4] +
                       (int)psVar4[3] * (uint)pbVar3[3] + (int)psVar4[2] * (uint)pbVar3[2] +
                       (int)psVar4[1] * (uint)pbVar3[1] + 0x40) >> 7;
          if (iVar2 < 0x100) {
            if (iVar2 < 0) {
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 0xff;
          }
          *(char *)(lVar5 + param_3) = (char)iVar2;
          lVar5 = lVar5 + 1;
          uVar1 = uVar1 + param_7;
        } while (lVar5 < param_8);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}





// 函数: void FUN_180697b09(void)
void FUN_180697b09(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte *pbVar3;
  short *psVar4;
  longlong lVar5;
  longlong unaff_R12;
  ulonglong uVar6;
  longlong unaff_R15;
  longlong in_stack_00000048;
  uint in_stack_00000050;
  int in_stack_00000058;
  
  uVar6 = (ulonglong)in_EAX;
  do {
    lVar5 = 0;
    uVar1 = in_stack_00000050;
    if (0 < unaff_RDI) {
      do {
        psVar4 = (short *)((ulonglong)(uVar1 & 0xf) * 0x10 + in_stack_00000048);
        pbVar3 = (byte *)(((longlong)(int)uVar1 >> 4) + unaff_RBP);
        iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                     (int)psVar4[7] * (uint)pbVar3[7] + (int)psVar4[6] * (uint)pbVar3[6] +
                     (int)psVar4[5] * (uint)pbVar3[5] + (int)psVar4[4] * (uint)pbVar3[4] +
                     (int)psVar4[3] * (uint)pbVar3[3] + (int)psVar4[2] * (uint)pbVar3[2] +
                     (int)psVar4[1] * (uint)pbVar3[1] + 0x40) >> 7;
        if (iVar2 < 0x100) {
          if (iVar2 < 0) {
            iVar2 = 0;
          }
        }
        else {
          iVar2 = 0xff;
        }
        *(char *)(lVar5 + unaff_RBX) = (char)iVar2;
        lVar5 = lVar5 + 1;
        uVar1 = uVar1 + in_stack_00000058;
      } while (lVar5 < unaff_RDI);
    }
    unaff_RBP = unaff_RBP + unaff_R12;
    unaff_RBX = unaff_RBX + unaff_R15;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return;
}





// 函数: void FUN_180697c23(void)
void FUN_180697c23(void)

{
  return;
}





// 函数: void FUN_180697c30(longlong param_1,longlong param_2,int8_t *param_3,longlong param_4,
void FUN_180697c30(longlong param_1,longlong param_2,int8_t *param_3,longlong param_4,
                  longlong param_5,uint param_6,int param_7,uint param_8,int param_9)

{
  int8_t uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  short *psVar5;
  int8_t *puVar6;
  uint uVar7;
  ulonglong uStackX_8;
  int8_t *puStackX_18;
  
  param_1 = param_1 + param_2 * -3;
  uStackX_8 = (ulonglong)param_8;
  puStackX_18 = param_3;
  if (0 < (int)param_8) {
    do {
      lVar3 = (longlong)param_9;
      if (0 < lVar3) {
        puVar6 = puStackX_18;
        uVar7 = param_6;
        do {
          psVar5 = (short *)((ulonglong)(uVar7 & 0xf) * 0x10 + param_5);
          pbVar4 = (byte *)(((longlong)(int)uVar7 >> 4) * param_2 + param_1);
          iVar2 = (int)((uint)*pbVar4 * (int)*psVar5 +
                       (uint)pbVar4[param_2 * 2] * (int)psVar5[2] +
                       (uint)pbVar4[param_2 * 4] * (int)psVar5[4] +
                       (uint)pbVar4[param_2 * 5] * (int)psVar5[5] +
                       (uint)pbVar4[param_2 * 6] * (int)psVar5[6] +
                       (uint)pbVar4[param_2 * 7] * (int)psVar5[7] +
                       (uint)pbVar4[param_2 * 3] * (int)psVar5[3] +
                       (uint)pbVar4[param_2] * (int)psVar5[1] + 0x40) >> 7;
          if (iVar2 < 0x100) {
            uVar1 = (int8_t)iVar2;
            if (iVar2 < 0) {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 0xff;
          }
          *puVar6 = uVar1;
          uVar7 = uVar7 + param_7;
          puVar6 = puVar6 + param_4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      puStackX_18 = puStackX_18 + 1;
      param_1 = param_1 + 1;
      uStackX_8 = uStackX_8 - 1;
    } while (uStackX_8 != 0);
  }
  return;
}





// 函数: void FUN_180697c6b(void)
void FUN_180697c6b(void)

{
  int8_t uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte *pbVar3;
  short *psVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong unaff_R13;
  longlong unaff_R14;
  int8_t *unaff_R15;
  ulonglong uStack0000000000000050;
  int8_t *in_stack_00000060;
  longlong in_stack_00000070;
  uint in_stack_00000078;
  int in_stack_00000080;
  int in_stack_00000090;
  
  uVar6 = in_RAX & 0xffffffff;
  uStack0000000000000050 = in_RAX;
  do {
    if (0 < unaff_R13) {
      uVar5 = in_stack_00000078;
      do {
        psVar4 = (short *)((ulonglong)(uVar5 & 0xf) * 0x10 + in_stack_00000070);
        pbVar3 = (byte *)(((longlong)(int)uVar5 >> 4) * unaff_RDI + unaff_R14);
        iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                     (uint)pbVar3[unaff_RDI * 2] * (int)psVar4[2] +
                     (uint)pbVar3[unaff_RDI * 4] * (int)psVar4[4] +
                     (uint)pbVar3[unaff_RDI * 5] * (int)psVar4[5] +
                     (uint)pbVar3[unaff_RDI * 6] * (int)psVar4[6] +
                     (uint)pbVar3[unaff_RDI * 7] * (int)psVar4[7] +
                     (uint)pbVar3[unaff_RDI * 3] * (int)psVar4[3] +
                     (uint)pbVar3[unaff_RDI] * (int)psVar4[1] + 0x40) >> 7;
        if (iVar2 < 0x100) {
          uVar1 = (int8_t)iVar2;
          if (iVar2 < 0) {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0xff;
        }
        *unaff_R15 = uVar1;
        uVar5 = uVar5 + in_stack_00000080;
        unaff_R15 = unaff_R15 + unaff_RBP;
        unaff_R13 = unaff_R13 + -1;
      } while (unaff_R13 != 0);
      unaff_R13 = (longlong)in_stack_00000090;
      uVar6 = uStack0000000000000050;
      unaff_R15 = in_stack_00000060;
    }
    unaff_R15 = unaff_R15 + 1;
    unaff_R14 = unaff_R14 + 1;
    uVar6 = uVar6 - 1;
    uStack0000000000000050 = uVar6;
    in_stack_00000060 = unaff_R15;
  } while (uVar6 != 0);
  return;
}





// 函数: void FUN_180697dc2(void)
void FUN_180697dc2(void)

{
  return;
}





