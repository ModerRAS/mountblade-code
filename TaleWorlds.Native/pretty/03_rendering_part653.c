#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part653.c - 13 个函数

// 函数: void FUN_18063aca0(longlong param_1,longlong *param_2)
void FUN_18063aca0(longlong param_1,longlong *param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  
  FUN_180639f50(param_2,param_1);
  FUN_180639f50(param_2,param_1 + 0x10);
  FUN_180639f50(param_2,param_1 + 0x20);
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x30);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2,(longlong)puVar2 + (4 - *param_2));
    *(int32_t *)param_2[1] = uVar1;
  }
  else {
    *puVar2 = uVar1;
  }
  param_2[1] = param_2[1] + 4;
  return;
}



uint64_t FUN_18063ad30(int8_t (*param_1) [16],float *param_2,float *param_3)

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
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  float *pfVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int8_t auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  int8_t auVar44 [16];
  float fVar46;
  float fVar48;
  float fVar45;
  int8_t auVar47 [16];
  
  fVar31 = param_2[5];
  fVar17 = *param_2;
  fVar32 = param_2[4];
  fVar30 = param_3[4];
  fVar34 = param_3[8];
  fVar1 = param_3[6];
  fVar33 = param_3[0xd];
  fVar2 = param_3[9];
  fVar36 = param_3[0xe];
  fVar3 = param_3[10];
  fVar4 = param_2[1];
  fVar5 = param_3[5];
  fVar6 = param_2[6];
  fVar7 = param_2[2];
  fVar43 = param_3[0xc];
  fVar35 = *param_3;
  fVar8 = param_3[1];
  fVar18 = fVar30 * fVar31 + fVar35 * fVar32 + fVar34 * fVar7 + fVar43;
  fVar21 = fVar30 * fVar31 + fVar35 * fVar17 + fVar34 * fVar7 + fVar43;
  fVar22 = fVar30 * fVar31 + fVar35 * fVar32 + fVar34 * fVar6 + fVar43;
  fVar23 = fVar30 * fVar4 + fVar35 * fVar17 + fVar34 * fVar7 + fVar43;
  fVar9 = param_3[2];
  fVar46 = fVar5 * fVar31 + fVar8 * fVar32 + fVar2 * fVar7 + fVar33;
  fVar48 = fVar5 * fVar31 + fVar8 * fVar17 + fVar2 * fVar7 + fVar33;
  auVar47._0_8_ = CONCAT44(fVar48,fVar46);
  auVar47._8_4_ = fVar5 * fVar31 + fVar8 * fVar32 + fVar2 * fVar6 + fVar33;
  auVar47._12_4_ = fVar5 * fVar4 + fVar8 * fVar17 + fVar2 * fVar7 + fVar33;
  *(float *)(param_1[6] + 4) = fVar46;
  fVar46 = fVar1 * fVar31 + fVar9 * fVar32 + fVar3 * fVar7 + fVar36;
  fVar45 = fVar1 * fVar31 + fVar9 * fVar17 + fVar3 * fVar7 + fVar36;
  auVar44._0_8_ = CONCAT44(fVar45,fVar46);
  auVar44._8_4_ = fVar1 * fVar31 + fVar9 * fVar32 + fVar3 * fVar6 + fVar36;
  auVar44._12_4_ = fVar1 * fVar4 + fVar9 * fVar17 + fVar3 * fVar7 + fVar36;
  *(float *)(param_1[6] + 8) = fVar46;
  fVar40 = fVar30 * fVar4 + fVar35 * fVar32 + fVar34 * fVar7 + fVar43;
  fVar41 = fVar30 * fVar31 + fVar35 * fVar17 + fVar34 * fVar6 + fVar43;
  fVar42 = fVar30 * fVar4 + fVar35 * fVar32 + fVar34 * fVar6 + fVar43;
  fVar43 = fVar30 * fVar4 + fVar35 * fVar17 + fVar34 * fVar6 + fVar43;
  *(float *)param_1[10] = fVar40;
  fVar34 = fVar1 * fVar4 + fVar9 * fVar32 + fVar3 * fVar7 + fVar36;
  fVar35 = fVar1 * fVar31 + fVar9 * fVar17 + fVar3 * fVar6 + fVar36;
  fVar46 = fVar1 * fVar4 + fVar9 * fVar32 + fVar3 * fVar6 + fVar36;
  fVar36 = fVar1 * fVar4 + fVar9 * fVar17 + fVar3 * fVar6 + fVar36;
  fVar30 = fVar5 * fVar4 + fVar8 * fVar32 + fVar2 * fVar7 + fVar33;
  fVar31 = fVar5 * fVar31 + fVar8 * fVar17 + fVar2 * fVar6 + fVar33;
  fVar32 = fVar5 * fVar4 + fVar8 * fVar32 + fVar2 * fVar6 + fVar33;
  fVar33 = fVar5 * fVar4 + fVar8 * fVar17 + fVar2 * fVar6 + fVar33;
  auVar15._4_4_ = fVar21;
  auVar15._0_4_ = fVar18;
  auVar15._8_4_ = fVar22;
  auVar15._12_4_ = fVar23;
  *(float *)param_1[6] = fVar18;
  *(float *)param_1[3] = fVar23;
  *(float *)param_1[5] = fVar21;
  *(float *)param_1[7] = fVar43;
  *(float *)param_1[9] = fVar41;
  *(float *)(param_1[3] + 4) = auVar47._12_4_;
  *(float *)(param_1[5] + 4) = fVar48;
  *(float *)param_1[4] = fVar22;
  *(float *)(param_1[7] + 4) = fVar33;
  *(float *)param_1[8] = fVar42;
  *(float *)(param_1[9] + 4) = fVar31;
  *(float *)(param_1[4] + 4) = auVar47._8_4_;
  *(float *)(param_1[3] + 8) = auVar44._12_4_;
  *(float *)(param_1[8] + 4) = fVar32;
  *(float *)(param_1[5] + 8) = fVar45;
  *(float *)(param_1[10] + 4) = fVar30;
  *(float *)(param_1[4] + 8) = auVar44._8_4_;
  *(float *)(param_1[10] + 8) = fVar34;
  auVar37._4_4_ = fVar41;
  auVar37._0_4_ = fVar40;
  auVar37._8_4_ = fVar42;
  auVar37._12_4_ = fVar43;
  auVar26 = minps(auVar15,auVar37);
  auVar14._4_4_ = fVar41;
  auVar14._0_4_ = fVar40;
  auVar14._8_4_ = fVar42;
  auVar14._12_4_ = fVar43;
  auVar37 = maxps(auVar15,auVar14);
  auVar24._8_4_ = auVar44._8_4_;
  auVar24._0_8_ = auVar44._0_8_;
  auVar24._12_4_ = auVar44._12_4_;
  *(float *)(param_1[7] + 8) = fVar36;
  *(float *)(param_1[8] + 8) = fVar46;
  auVar19._8_4_ = auVar47._8_4_;
  auVar19._0_8_ = auVar47._0_8_;
  auVar19._12_4_ = auVar47._12_4_;
  *(float *)(param_1[9] + 8) = fVar35;
  *(int32_t *)(param_1[3] + 0xc) = 0x3f800000;
  *(int32_t *)(param_1[4] + 0xc) = 0x3f800000;
  *(int32_t *)(param_1[5] + 0xc) = 0x3f800000;
  *(int32_t *)(param_1[6] + 0xc) = 0x3f800000;
  *(int32_t *)(param_1[7] + 0xc) = 0x3f800000;
  *(int32_t *)(param_1[8] + 0xc) = 0x3f800000;
  *(int32_t *)(param_1[9] + 0xc) = 0x3f800000;
  *(int32_t *)(param_1[10] + 0xc) = 0x3f800000;
  auVar25._4_4_ = fVar31;
  auVar25._0_4_ = fVar30;
  auVar25._8_4_ = fVar32;
  auVar25._12_4_ = fVar33;
  auVar20 = minps(auVar19,auVar25);
  auVar12._4_4_ = fVar35;
  auVar12._0_4_ = fVar34;
  auVar12._8_4_ = fVar46;
  auVar12._12_4_ = fVar36;
  auVar25 = minps(auVar24,auVar12);
  auVar27._0_8_ = auVar26._0_8_;
  auVar27._8_4_ = auVar20._0_4_;
  auVar27._12_4_ = auVar20._4_4_;
  auVar28._8_4_ = auVar20._8_4_;
  auVar28._0_8_ = auVar26._8_8_;
  auVar28._12_4_ = auVar20._12_4_;
  auVar28 = minps(auVar27,auVar28);
  auVar26._4_4_ = fVar31;
  auVar26._0_4_ = fVar30;
  auVar26._8_4_ = fVar32;
  auVar26._12_4_ = fVar33;
  auVar26 = maxps(auVar47,auVar26);
  auVar29._0_4_ = auVar28._0_4_;
  auVar29._4_4_ = auVar28._8_4_;
  auVar29._8_4_ = auVar25._0_4_;
  auVar29._12_4_ = auVar25._4_4_;
  auVar20._4_4_ = auVar28._12_4_;
  auVar20._0_4_ = auVar28._4_4_;
  auVar20._8_4_ = auVar25._8_4_;
  auVar20._12_4_ = auVar25._12_4_;
  auVar28 = minps(auVar29,auVar20);
  auVar13._4_4_ = fVar35;
  auVar13._0_4_ = fVar34;
  auVar13._8_4_ = fVar46;
  auVar13._12_4_ = fVar36;
  auVar20 = maxps(auVar44,auVar13);
  *param_1 = auVar28;
  fVar31 = auVar28._8_4_;
  if (auVar28._12_4_ <= auVar28._8_4_) {
    fVar31 = auVar28._12_4_;
  }
  auVar38._0_8_ = auVar37._0_8_;
  auVar38._8_4_ = auVar26._0_4_;
  auVar38._12_4_ = auVar26._4_4_;
  auVar10._8_4_ = auVar26._8_4_;
  auVar10._0_8_ = auVar37._8_8_;
  auVar10._12_4_ = auVar26._12_4_;
  auVar28 = maxps(auVar38,auVar10);
  auVar39._0_4_ = auVar28._0_4_;
  auVar39._4_4_ = auVar28._8_4_;
  auVar39._8_4_ = auVar20._0_4_;
  auVar39._12_4_ = auVar20._4_4_;
  auVar11._4_4_ = auVar28._12_4_;
  auVar11._0_4_ = auVar28._4_4_;
  auVar11._8_4_ = auVar20._8_4_;
  auVar11._12_4_ = auVar20._12_4_;
  auVar28 = maxps(auVar39,auVar11);
  param_1[1] = auVar28;
  *(int32_t *)(param_1[1] + 0xc) = 0x3f800000;
  *(float *)(*param_1 + 8) = fVar31;
  *(int32_t *)(*param_1 + 0xc) = 0x3f800000;
  fVar17 = auVar28._8_4_;
  if (auVar28._8_4_ <= auVar28._12_4_) {
    fVar17 = auVar28._12_4_;
  }
  *(float *)(param_1[1] + 8) = fVar17;
  pfVar16 = (float *)func_0x000180285a90(param_3,param_2,auVar25._0_8_);
  pfVar16[0x2c] = extraout_XMM0_Da;
  pfVar16[8] = (pfVar16[4] + *pfVar16) * 0.5;
  pfVar16[9] = (pfVar16[5] + pfVar16[1]) * 0.5;
  pfVar16[10] = (fVar31 + pfVar16[6]) * 0.5;
  pfVar16[0xb] = 3.4028235e+38;
  return 0x3f000000;
}



// WARNING: Possible PIC construction at 0x00018063b365: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018063b36a)

float FUN_18063b1d0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  int8_t auVar5 [16];
  float fVar8;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar8 = param_2[2] - param_1[2];
  *param_3 = fVar1;
  param_3[1] = fVar2;
  param_3[2] = fVar8;
  param_3[3] = 3.4028235e+38;
  fVar3 = fVar1 * fVar1 + fVar2 * fVar2 + fVar8 * fVar8;
  auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
  fVar4 = auVar5._0_4_;
  fVar6 = 0.0;
  fVar7 = 1.0;
  fVar3 = fVar4 * 0.5 * (3.0 - fVar3 * fVar4 * fVar4);
  param_3[2] = fVar8 * fVar3;
  *param_3 = fVar1 * fVar3;
  param_3[1] = fVar2 * fVar3;
  if (0.95 < ABS(fVar8 * fVar3)) {
    fVar6 = 1.0;
    fVar7 = 0.0;
  }
  *param_4 = 0.0;
  param_4[1] = fVar6;
  param_4[2] = fVar7;
  param_4[3] = 3.4028235e+38;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar1 = *param_4;
  fVar2 = *param_3;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar8 = param_3[2];
  *param_5 = fVar6 * param_3[2] - fVar7 * param_3[1];
  param_5[1] = fVar7 * fVar2 - fVar1 * fVar8;
  param_5[2] = fVar1 * fVar4 - fVar6 * fVar3;
  param_5[3] = 3.4028235e+38;
  fVar6 = param_5[1];
  fVar7 = *param_5;
  fVar1 = param_5[2];
  fVar2 = fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1;
  if (1e-09 < fVar2) {
    fVar2 = SQRT(fVar2);
    fVar3 = 1.0 / fVar2;
    *param_5 = fVar7 * fVar3;
    param_5[1] = fVar6 * fVar3;
    param_5[2] = fVar1 * fVar3;
    return fVar2;
  }
  param_5[1] = 1.0;
  param_5[2] = 0.0;
  *param_5 = 0.0;
  return 0.0;
}



int16_t FUN_18063b400(int32_t *param_1)

{
  short sVar1;
  int32_t auStackX_8 [8];
  
  auStackX_8[0] = *param_1;
  sVar1 = _fdtest(auStackX_8);
  if (sVar1 != 2) {
    auStackX_8[0] = param_1[1];
    sVar1 = _fdtest(auStackX_8);
    if (sVar1 != 2) {
      auStackX_8[0] = param_1[2];
      sVar1 = _fdtest(auStackX_8);
      if (sVar1 != 2) {
        return 1;
      }
    }
  }
  return 0;
}





// 函数: void FUN_18063b470(float *param_1,float *param_2)
void FUN_18063b470(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_2[10];
  if (0.0 <= fVar2) {
    fVar3 = param_2[5];
    fVar1 = *param_2;
    if (-fVar3 <= fVar1) {
      fVar4 = param_2[6] - param_2[9];
      fVar5 = param_2[8] - param_2[2];
      fVar6 = param_2[1] - param_2[4];
      fVar2 = fVar1 + 1.0 + fVar3 + fVar2;
      fVar3 = fVar2;
    }
    else {
      fVar4 = param_2[8] + param_2[2];
      fVar5 = param_2[9] + param_2[6];
      fVar2 = ((1.0 - fVar1) - fVar3) + fVar2;
      fVar3 = param_2[1] - param_2[4];
      fVar6 = fVar2;
    }
  }
  else {
    fVar3 = *param_2;
    fVar1 = param_2[5];
    if (fVar3 <= fVar1) {
      fVar4 = param_2[4] + param_2[1];
      fVar2 = ((1.0 - fVar3) + fVar1) - fVar2;
      fVar3 = param_2[8] - param_2[2];
      fVar5 = fVar2;
      fVar6 = param_2[9] + param_2[6];
    }
    else {
      fVar2 = ((fVar3 + 1.0) - fVar1) - fVar2;
      fVar3 = param_2[6] - param_2[9];
      fVar4 = fVar2;
      fVar5 = param_2[4] + param_2[1];
      fVar6 = param_2[8] + param_2[2];
    }
  }
  fVar2 = 0.5 / SQRT(fVar2);
  *param_1 = fVar3 * fVar2;
  param_1[1] = fVar4 * fVar2;
  param_1[2] = fVar5 * fVar2;
  param_1[3] = fVar6 * fVar2;
  return;
}





// 函数: void FUN_18063b5f0(float *param_1,float *param_2)
void FUN_18063b5f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[3];
  fVar5 = fVar2 + fVar2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar6 = fVar4 + fVar4;
  fVar7 = fVar1 * (fVar3 + fVar3);
  fVar8 = fVar3 * (fVar3 + fVar3);
  *param_1 = 1.0 - (fVar2 * fVar5 + fVar4 * fVar6);
  param_1[1] = fVar1 * fVar5 + fVar3 * fVar6;
  param_1[4] = fVar3 * fVar6 - fVar1 * fVar5;
  param_1[2] = fVar3 * fVar5 - fVar1 * fVar6;
  param_1[8] = fVar1 * fVar6 + fVar3 * fVar5;
  param_1[9] = fVar4 * fVar5 - fVar7;
  param_1[5] = 1.0 - (fVar2 * fVar5 + fVar8);
  param_1[6] = fVar7 + fVar4 * fVar5;
  param_1[10] = 1.0 - (fVar4 * fVar6 + fVar8);
  return;
}





// 函数: void FUN_18063b720(float *param_1,float *param_2,float *param_3)
void FUN_18063b720(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_3;
  if ((0.99999 <= fVar1) || (fVar1 <= -0.99999)) {
    fVar7 = 1.0;
    fVar1 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar7 = param_3[1];
    *param_1 = fVar7;
    fVar6 = param_3[2];
    param_1[1] = fVar6;
    fVar5 = param_3[3];
    param_1[2] = fVar5;
    fVar2 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar2 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
    fVar1 = (float)acosf(fVar1);
    fVar5 = fVar5 * fVar2;
    fVar1 = fVar1 + fVar1;
    fVar6 = fVar6 * fVar2;
    fVar7 = fVar7 * fVar2;
  }
  *param_1 = fVar7;
  param_1[1] = fVar6;
  param_1[2] = fVar5;
  *param_2 = fVar1;
  return;
}





// 函数: void FUN_18063b792(float param_1,uint64_t param_2,uint64_t param_3)
void FUN_18063b792(float param_1,uint64_t param_2,uint64_t param_3)

{
  float fVar1;
  longlong in_RAX;
  float *unaff_RBX;
  float *unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  longlong in_R8;
  float fVar2;
  int32_t uVar3;
  int32_t in_XMM2_Dc;
  int32_t in_XMM2_Dd;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int32_t unaff_XMM6_Da;
  float fVar6;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  uVar3 = (int32_t)((ulonglong)param_3 >> 0x20);
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *unaff_RSI = unaff_XMM8_Da;
  fVar1 = *(float *)(in_R8 + 0xc);
  *unaff_RDI = fVar1;
  fVar2 = (float)param_3 + param_1 + fVar1 * fVar1;
  auVar4._4_4_ = uVar3;
  auVar4._0_4_ = fVar2;
  auVar4._8_4_ = in_XMM2_Dc;
  auVar4._12_4_ = in_XMM2_Dd;
  auVar5._4_4_ = uVar3;
  auVar5._0_4_ = fVar2;
  auVar5._8_4_ = in_XMM2_Dc;
  auVar5._12_4_ = in_XMM2_Dd;
  auVar5 = rsqrtss(auVar4,auVar5);
  fVar6 = auVar5._0_4_;
  fVar6 = fVar6 * 0.5 * (3.0 - fVar2 * fVar6 * fVar6);
  fVar2 = (float)acosf();
  *unaff_RBX = unaff_XMM9_Da * fVar6;
  *unaff_RSI = unaff_XMM8_Da * fVar6;
  *unaff_RDI = fVar1 * fVar6;
  *unaff_RBP = fVar2 + fVar2;
  return;
}





// 函数: void FUN_18063b804(longlong param_1)
void FUN_18063b804(longlong param_1)

{
  int32_t *unaff_RBX;
  int32_t *unaff_RBP;
  
  *unaff_RBX = 0x3f800000;
  *(int32_t *)(param_1 + 4) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *unaff_RBP = 0;
  return;
}





// 函数: void FUN_18063b860(uint64_t param_1,uint64_t param_2,float param_3)
void FUN_18063b860(uint64_t param_1,uint64_t param_2,float param_3)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_3 * 0.5);
}





// 函数: void FUN_18063b8c0(uint64_t param_1,uint *param_2)
void FUN_18063b8c0(uint64_t param_1,uint *param_2)

{
  float fVar1;
  
  fVar1 = (float)atan2f(*param_2 ^ 0x80000000,param_2[1]);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(fVar1 * 0.5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063b9c0(longlong *param_1)
void FUN_18063b9c0(longlong *param_1)

{
  if (*param_1 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(*param_1);
    *param_1 = -1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063ba00(longlong *param_1,longlong param_2,uint param_3,uint param_4)
void FUN_18063ba00(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  void *puVar7;
  int8_t auStack_728 [32];
  int8_t *puStack_708;
  uint uStack_700;
  uint64_t uStack_6f8;
  uint64_t uStack_6e8;
  void *puStack_6d8;
  int8_t *puStack_6d0;
  int32_t uStack_6c8;
  int8_t auStack_6c0 [264];
  void *puStack_5b8;
  int8_t *puStack_5b0;
  int32_t uStack_5a8;
  int8_t auStack_5a0 [264];
  void *apuStack_498 [68];
  int8_t auStack_278 [560];
  ulonglong uStack_48;
  
  uStack_6e8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_728;
  puStack_6d8 = &unknown_var_2008_ptr;
  puStack_6d0 = auStack_6c0;
  uStack_6c8 = 0;
  auStack_6c0[0] = 0;
  if (param_2 != 0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(param_2 + lVar4) != '\0');
    uStack_6c8 = (int32_t)lVar4;
    strcpy_s(auStack_6c0,0x100,param_2);
  }
  lVar4 = FUN_180624440(apuStack_498,&puStack_6d8);
  puStack_5b8 = &unknown_var_2008_ptr;
  puStack_5b0 = auStack_5a0;
  auStack_5a0[0] = 0;
  uStack_5a8 = *(int32_t *)(lVar4 + 0x10);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(lVar4 + 8) != (void *)0x0) {
    puVar7 = *(void **)(lVar4 + 8);
  }
  strcpy_s(auStack_5a0,0x100,puVar7);
  apuStack_498[0] = &system_state_ptr;
  puStack_6d8 = &system_state_ptr;
  uVar1 = param_3 << 0x1f | 0x40000000;
  if ((param_3 & 2) == 0) {
    uVar1 = param_3 << 0x1f;
  }
  uVar3 = param_3 >> 2 & 1;
  uVar2 = uVar3 | 2;
  if ((param_3 & 8) == 0) {
    uVar2 = uVar3;
  }
  uVar5 = -(uint)((param_4 & 4) != 0) & 3;
  uVar3 = uVar5 | 2;
  if ((param_4 & 8) == 0) {
    uVar3 = uVar5;
  }
  uVar5 = uVar3 | 1;
  if ((param_4 & 0x10) == 0) {
    uVar5 = uVar3;
  }
  uVar6 = (param_4 & 1) << 0x1b;
  uVar3 = uVar6 | 0x2000000;
  if ((param_4 & 0x20) == 0) {
    uVar3 = uVar6;
  }
  if ((param_4 >> 8 & 1) == 0) {
    uVar6 = uVar3 | 0x100;
    if ((param_4 & 2) == 0) {
      uVar6 = uVar3;
    }
    uVar3 = uVar6 | 0x20;
    if ((param_4 & 0x40) == 0) {
      uVar3 = uVar6;
    }
    uVar6 = uVar3 | 4;
    if ((param_4 & 0x80) == 0) {
      uVar6 = uVar3;
    }
    if ((param_4 >> 10 & 1) != 0) {
      uVar6 = uVar6 | 1;
    }
  }
  else {
    uVar6 = 0x80;
  }
  uStack_700 = 0x118;
  puStack_708 = auStack_278;
  MultiByteToWideChar(0xfde9,0,puStack_5b0,0xffffffff);
  uStack_6f8 = 0;
  puStack_708 = (int8_t *)CONCAT44(puStack_708._4_4_,uVar5);
  uStack_700 = uVar6;
  lVar4 = CreateFileW(auStack_278,uVar1,uVar2,0);
  *param_1 = lVar4;
  if (lVar4 == -1) {
    GetLastError();
  }
  else {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + 1;
    UNLOCK();
  }
  puStack_5b8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_728);
}



ulonglong FUN_18063bc80(uint64_t *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint auStackX_18 [4];
  
  uVar2 = 0;
  if (param_3 != 0) {
    while( true ) {
      auStackX_18[0] = 0;
      uVar3 = 0x1000000;
      if (param_3 - uVar2 < 0x1000000) {
        uVar3 = param_3 - uVar2 & 0xffffffff;
      }
      iVar1 = ReadFile(*param_1,uVar2 + param_2,uVar3,auStackX_18,0);
      if (iVar1 == 0) break;
      if (auStackX_18[0] == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + auStackX_18[0];
      if (param_3 <= uVar2) {
        return uVar2;
      }
    }
  }
  return 0;
}



longlong FUN_18063bd10(uint64_t *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint auStackX_18 [2];
  
  lVar1 = 0;
  if (param_3 != 0) {
    do {
      uVar2 = 0xffffffff;
      auStackX_18[0] = 0;
      if (param_3 < 0xffffffff) {
        uVar2 = param_3 & 0xffffffff;
      }
      WriteFile(*param_1,lVar1 + param_2,uVar2,auStackX_18,0);
      lVar1 = lVar1 + (ulonglong)auStackX_18[0];
      param_3 = param_3 - auStackX_18[0];
    } while (param_3 != 0);
  }
  return lVar1;
}



longlong FUN_18063bd34(void)

{
  longlong unaff_RBX;
  uint unaff_EBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar1;
  uint64_t *unaff_R14;
  uint uStack0000000000000060;
  
  do {
    uVar1 = 0xffffffff;
    if (unaff_RDI < 0xffffffff) {
      uVar1 = unaff_RDI & 0xffffffff;
    }
    uStack0000000000000060 = unaff_EBP;
    WriteFile(*unaff_R14,unaff_RBX + unaff_RSI,uVar1,&stack0x00000060);
    unaff_RBX = unaff_RBX + (ulonglong)uStack0000000000000060;
    unaff_RDI = unaff_RDI - uStack0000000000000060;
  } while (unaff_RDI != 0);
  return unaff_RBX;
}





// 函数: void FUN_18063bd76(void)
void FUN_18063bd76(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18063bd90(longlong param_1,longlong param_2,float *param_3)
void FUN_18063bd90(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t auStack_178 [32];
  float afStack_158 [8];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  ulonglong uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  fVar14 = *(float *)(param_2 + 0x24);
  fVar9 = *(float *)(param_2 + 0x20);
  fVar11 = *(float *)(param_2 + 0x28);
  fVar1 = *(float *)(param_2 + 0x30);
  fVar10 = fVar14 * param_3[4] + fVar9 * *param_3 + fVar11 * param_3[8] + param_3[0xc];
  fVar12 = fVar14 * param_3[5] + fVar9 * param_3[1] + fVar11 * param_3[9] + param_3[0xd];
  fVar13 = fVar14 * param_3[6] + fVar9 * param_3[2] + fVar11 * param_3[10] + param_3[0xe];
  afStack_158[3] = fVar14 * param_3[7] + fVar9 * param_3[3] + fVar11 * param_3[0xb] + param_3[0xf];
  fVar9 = ABS(fVar1 * param_3[1] + fVar1 * param_3[5] + fVar1 * param_3[9]);
  fVar11 = ABS(fVar1 * *param_3 + fVar1 * param_3[4] + fVar1 * param_3[8]);
  fVar14 = ABS(fVar1 * param_3[2] + fVar1 * param_3[6] + fVar1 * param_3[10]);
  if (fVar11 <= fVar9) {
    if (fVar14 <= fVar9) {
      fVar14 = fVar9;
    }
  }
  else if (fVar14 <= fVar11) {
    fVar14 = fVar11;
  }
  pfVar8 = (float *)(param_1 + 0x18);
  lVar7 = 0;
  bVar2 = true;
  pfVar4 = pfVar8;
  lVar6 = lVar7;
  afStack_158[0] = fVar10;
  afStack_158[1] = fVar12;
  afStack_158[2] = fVar13;
  do {
    fVar9 = (fVar12 - pfVar4[-5]) * pfVar4[-1] + (fVar10 - pfVar4[-6]) * pfVar4[-2] +
            (fVar13 - pfVar4[-4]) * *pfVar4;
    cVar5 = '\0';
    if (-fVar14 <= fVar9) {
      cVar5 = (fVar9 < fVar14) + '\x01';
    }
    afStack_158[lVar6] = 0.0;
    if (cVar5 == '\0') goto LAB_18063c1bb;
    if (cVar5 == '\x02') {
      bVar2 = false;
      afStack_158[lVar6] = 1.4013e-45;
    }
    lVar6 = lVar6 + 1;
    pfVar4 = pfVar4 + 8;
  } while (lVar6 < 6);
  if (!bVar2) {
    FUN_18063a560(param_2,&fStack_138,param_3);
    do {
      if (afStack_158[lVar7] != 0.0) {
        fVar14 = pfVar8[-6];
        fVar9 = pfVar8[-5];
        fVar11 = pfVar8[-2];
        fVar1 = pfVar8[-4];
        fVar10 = pfVar8[-1];
        fVar12 = *pfVar8;
        bVar2 = 0.0 <= (fStack_138 - fVar14) * fVar11 + (fStack_134 - fVar9) * fVar10 +
                       (fStack_130 - fVar1) * fVar12;
        cVar5 = bVar2 + '\x01';
        if ((fStack_128 - fVar14) * fVar11 + (fStack_124 - fVar9) * fVar10 +
            (fStack_120 - fVar1) * fVar12 < 0.0) {
          cVar5 = bVar2;
        }
        cVar3 = cVar5 + '\x01';
        if ((fStack_118 - fVar14) * fVar11 + (fStack_114 - fVar9) * fVar10 +
            (fStack_110 - fVar1) * fVar12 < 0.0) {
          cVar3 = cVar5;
        }
        cVar5 = cVar3 + '\x01';
        if ((fStack_108 - fVar14) * fVar11 + (fStack_104 - fVar9) * fVar10 +
            (fStack_100 - fVar1) * fVar12 < 0.0) {
          cVar5 = cVar3;
        }
        cVar3 = cVar5 + '\x01';
        if ((fStack_f8 - fVar14) * fVar11 + (fStack_f4 - fVar9) * fVar10 +
            (fStack_f0 - fVar1) * fVar12 < 0.0) {
          cVar3 = cVar5;
        }
        cVar5 = cVar3 + '\x01';
        if ((fStack_e8 - fVar14) * fVar11 + (fStack_e4 - fVar9) * fVar10 +
            (fStack_e0 - fVar1) * fVar12 < 0.0) {
          cVar5 = cVar3;
        }
        cVar3 = cVar5 + '\x01';
        if ((fStack_d8 - fVar14) * fVar11 + (fStack_d4 - fVar9) * fVar10 +
            (fStack_d0 - fVar1) * fVar12 < 0.0) {
          cVar3 = cVar5;
        }
        cVar5 = cVar3 + '\x01';
        if ((fStack_c8 - fVar14) * fVar11 + (fStack_c4 - fVar9) * fVar10 +
            (fStack_c0 - fVar1) * fVar12 < 0.0) {
          cVar5 = cVar3;
        }
        if (cVar5 == '\0') break;
      }
      lVar7 = lVar7 + 1;
      pfVar8 = pfVar8 + 8;
    } while (lVar7 < 6);
  }
LAB_18063c1bb:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_178);
}





// 函数: void FUN_18063be90(uint64_t param_1,longlong param_2,char param_3,float param_4)
void FUN_18063be90(uint64_t param_1,longlong param_2,char param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint32_t uVar6;
  float *in_RAX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float *unaff_RBX;
  longlong unaff_RBP;
  int unaff_EDI;
  int32_t unaff_0000003c;
  uint64_t in_R9;
  float fVar10;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int aiStackX_20 [2];
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  do {
    fVar10 = (unaff_XMM6_Da - in_RAX[-5]) * in_RAX[-1] + (unaff_XMM7_Da - in_RAX[-6]) * in_RAX[-2] +
             (in_XMM5_Da - in_RAX[-4]) * *in_RAX;
    uVar6 = (uint32_t)((uint)unaff_EDI >> 8);
    iVar7 = unaff_EDI;
    if (in_XMM4_Da <= fVar10) {
      iVar7 = CONCAT31(uVar6,fVar10 < param_4) + 1;
    }
    aiStackX_20[param_2] = unaff_EDI;
    if (iVar7 == 0) goto LAB_18063c1bb;
    if (iVar7 == 2) {
      param_3 = '\0';
      aiStackX_20[param_2] = 1;
    }
    param_2 = param_2 + 1;
    in_RAX = in_RAX + 8;
  } while (param_2 < 6);
  if (param_3 == '\0') {
    FUN_18063a560(in_R9,&stack0x00000040);
    lVar9 = CONCAT44(unaff_0000003c,unaff_EDI);
    do {
      if (aiStackX_20[lVar9] != unaff_EDI) {
        fVar10 = unaff_RBX[-6];
        fVar1 = unaff_RBX[-5];
        fVar2 = unaff_RBX[-2];
        fVar3 = unaff_RBX[-4];
        fVar4 = unaff_RBX[-1];
        fVar5 = *unaff_RBX;
        iVar7 = CONCAT31(uVar6,0.0 <= (fStack0000000000000040 - fVar10) * fVar2 +
                                      (fStack0000000000000044 - fVar1) * fVar4 +
                                      (in_stack_00000048 - fVar3) * fVar5);
        iVar8 = iVar7 + 1;
        if ((fStack0000000000000050 - fVar10) * fVar2 + (fStack0000000000000054 - fVar1) * fVar4 +
            (in_stack_00000058 - fVar3) * fVar5 < 0.0) {
          iVar8 = iVar7;
        }
        iVar7 = iVar8 + 1;
        if ((fStack0000000000000060 - fVar10) * fVar2 + (fStack0000000000000064 - fVar1) * fVar4 +
            (in_stack_00000068 - fVar3) * fVar5 < 0.0) {
          iVar7 = iVar8;
        }
        iVar8 = iVar7 + 1;
        if ((fStack0000000000000070 - fVar10) * fVar2 + (fStack0000000000000074 - fVar1) * fVar4 +
            (in_stack_00000078 - fVar3) * fVar5 < 0.0) {
          iVar8 = iVar7;
        }
        iVar7 = iVar8 + 1;
        if ((*(float *)(unaff_RBP + -0x80) - fVar10) * fVar2 +
            (*(float *)(unaff_RBP + -0x7c) - fVar1) * fVar4 +
            (*(float *)(unaff_RBP + -0x78) - fVar3) * fVar5 < 0.0) {
          iVar7 = iVar8;
        }
        iVar8 = iVar7 + 1;
        if ((*(float *)(unaff_RBP + -0x70) - fVar10) * fVar2 +
            (*(float *)(unaff_RBP + -0x6c) - fVar1) * fVar4 +
            (*(float *)(unaff_RBP + -0x68) - fVar3) * fVar5 < 0.0) {
          iVar8 = iVar7;
        }
        iVar7 = iVar8 + 1;
        if ((*(float *)(unaff_RBP + -0x60) - fVar10) * fVar2 +
            (*(float *)(unaff_RBP + -0x5c) - fVar1) * fVar4 +
            (*(float *)(unaff_RBP + -0x58) - fVar3) * fVar5 < 0.0) {
          iVar7 = iVar8;
        }
        iVar8 = iVar7 + 1;
        if ((*(float *)(unaff_RBP + -0x50) - fVar10) * fVar2 +
            (*(float *)(unaff_RBP + -0x4c) - fVar1) * fVar4 +
            (*(float *)(unaff_RBP + -0x48) - fVar3) * fVar5 < 0.0) {
          iVar8 = iVar7;
        }
        if (iVar8 == 0) break;
      }
      lVar9 = lVar9 + 1;
      unaff_RBX = unaff_RBX + 8;
    } while (lVar9 < 6);
  }
LAB_18063c1bb:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



