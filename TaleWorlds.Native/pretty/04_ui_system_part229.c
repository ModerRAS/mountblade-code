#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part229.c - 3 个函数
// 函数: void SystemCore_9c2e0(float *param_1,float *param_2,int param_3,float *param_4,float *param_5,
void SystemCore_9c2e0(float *param_1,float *param_2,int param_3,float *param_4,float *param_5,
                  float *param_6,float param_7)
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
  int64_t lVar11;
  float *pfVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStackX_18;
  float fStack_d0;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar25 = 0.0;
  fVar5 = param_4[4];
  fVar28 = 0.0;
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar6 = param_5[2];
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar9 = param_5[3];
  fVar10 = param_5[4];
  lVar11 = (int64_t)(int)param_7;
  fStackX_18 = 0.0;
  if (param_7 == 1.4013e-45) {
    param_7 = param_6[3];
    param_5._0_4_ = param_6[5];
    fVar16 = param_6[7];
    fVar24 = *param_6;
    fVar15 = param_6[1];
    fVar26 = param_6[2];
    fVar27 = param_6[4];
    fVar23 = param_6[6];
    if (param_3 != 0) {
      lVar11 = (int64_t)param_2 - (int64_t)param_1;
      fStack_d0 = fVar16;
      do {
        fVar16 = *param_1;
        fVar20 = fVar28 + fVar2;
        fVar19 = fStackX_18 + fVar5;
        fVar28 = fVar28 + fVar8;
        fVar21 = fVar30 + fVar4;
        fVar30 = fVar30 + fVar9;
        fVar22 = fVar25 + fVar1;
        fVar17 = fVar22 * fVar16 + fVar24;
        fVar24 = (fVar20 * fVar16 - fVar21 * fVar17) + fVar15;
        fVar18 = fVar29 + fVar3;
        fVar29 = fVar29 + fVar6;
        fVar15 = fVar18 * fVar16 - fVar19 * fVar17;
        fVar16 = fVar22 * fVar17 + fVar26;
        fVar26 = (fVar20 * fVar17 - fVar21 * fVar16) + param_7;
        param_7 = fVar18 * fVar17 - fVar19 * fVar16;
        fVar17 = fVar22 * fVar16 + fVar27;
        fVar23 = fVar22 * fVar17 + fVar23;
        fVar27 = (fVar20 * fVar16 - fVar21 * fVar17) + param_5._0_4_;
        param_5._0_4_ = fVar18 * fVar16 - fVar19 * fVar17;
        *(float *)(lVar11 + (int64_t)param_1) = fVar23;
        param_1 = param_1 + 1;
        fVar16 = fVar18 * fVar17 - fVar19 * fVar23;
        fVar23 = (fVar20 * fVar17 - fVar21 * fVar23) + fStack_d0;
        fStackX_18 = fStackX_18 + fVar10;
        param_3 = param_3 + -1;
        fVar25 = fVar25 + fVar7;
        fStack_d0 = fVar16;
      } while (param_3 != 0);
    }
    *param_6 = fVar24;
    param_6[1] = fVar15;
    param_6[2] = fVar26;
    param_6[3] = param_7;
    param_6[4] = fVar27;
    param_6[5] = param_5._0_4_;
    param_6[6] = fVar23;
    param_6[7] = fVar16;
  }
  else if (param_3 != 0) {
    do {
      lVar13 = 0;
      if (3 < lVar11) {
        fVar16 = fVar25 + fVar1;
        lVar14 = (lVar11 - 4U >> 2) + 1;
        pfVar12 = param_6 + 10;
        fVar24 = fVar28 + fVar2;
        fVar15 = fVar30 + fVar4;
        lVar13 = lVar14 * 4;
        fVar26 = fVar29 + fVar3;
        fVar27 = fStackX_18 + fVar5;
        do {
          fVar23 = *param_1;
          fVar17 = fVar16 * fVar23 + pfVar12[-10];
          pfVar12[-10] = (fVar24 * fVar23 - fVar15 * fVar17) + pfVar12[-9];
          pfVar12[-9] = fVar26 * fVar23 - fVar27 * fVar17;
          fVar23 = fVar16 * fVar17 + pfVar12[-8];
          pfVar12[-8] = (fVar24 * fVar17 - fVar15 * fVar23) + pfVar12[-7];
          pfVar12[-7] = fVar26 * fVar17 - fVar27 * fVar23;
          fVar17 = fVar16 * fVar23 + pfVar12[-6];
          pfVar12[-6] = (fVar24 * fVar23 - fVar15 * fVar17) + pfVar12[-5];
          pfVar12[-5] = fVar26 * fVar23 - fVar27 * fVar17;
          fVar23 = fVar16 * fVar17 + pfVar12[-4];
          pfVar12[-4] = (fVar24 * fVar17 - fVar15 * fVar23) + pfVar12[-3];
          pfVar12[-3] = fVar26 * fVar17 - fVar27 * fVar23;
          *param_2 = fVar23;
          fVar23 = param_1[1];
          fVar17 = fVar16 * fVar23 + pfVar12[-2];
          pfVar12[-2] = (fVar24 * fVar23 - fVar15 * fVar17) + pfVar12[-1];
          pfVar12[-1] = fVar26 * fVar23 - fVar27 * fVar17;
          fVar23 = fVar16 * fVar17 + *pfVar12;
          *pfVar12 = (fVar24 * fVar17 - fVar15 * fVar23) + pfVar12[1];
          pfVar12[1] = fVar26 * fVar17 - fVar27 * fVar23;
          fVar17 = fVar16 * fVar23 + pfVar12[2];
          pfVar12[2] = (fVar24 * fVar23 - fVar15 * fVar17) + pfVar12[3];
          pfVar12[3] = fVar26 * fVar23 - fVar27 * fVar17;
          fVar23 = fVar16 * fVar17 + pfVar12[4];
          pfVar12[4] = (fVar24 * fVar17 - fVar15 * fVar23) + pfVar12[5];
          pfVar12[5] = fVar26 * fVar17 - fVar27 * fVar23;
          param_2[1] = fVar23;
          fVar23 = param_1[2];
          fVar17 = fVar16 * fVar23 + pfVar12[6];
          pfVar12[6] = (fVar24 * fVar23 - fVar15 * fVar17) + pfVar12[7];
          pfVar12[7] = fVar26 * fVar23 - fVar27 * fVar17;
          fVar23 = fVar16 * fVar17 + pfVar12[8];
          pfVar12[8] = (fVar24 * fVar17 - fVar15 * fVar23) + pfVar12[9];
          pfVar12[9] = fVar26 * fVar17 - fVar27 * fVar23;
          fVar17 = fVar16 * fVar23 + pfVar12[10];
          pfVar12[10] = (fVar24 * fVar23 - fVar15 * fVar17) + pfVar12[0xb];
          pfVar12[0xb] = fVar26 * fVar23 - fVar27 * fVar17;
          fVar23 = fVar16 * fVar17 + pfVar12[0xc];
          pfVar12[0xc] = (fVar24 * fVar17 - fVar15 * fVar23) + pfVar12[0xd];
          pfVar12[0xd] = fVar26 * fVar17 - fVar27 * fVar23;
          param_2[2] = fVar23;
          fVar23 = param_1[3];
          fVar17 = fVar16 * fVar23 + pfVar12[0xe];
          pfVar12[0xe] = (fVar24 * fVar23 - fVar15 * fVar17) + pfVar12[0xf];
          pfVar12[0xf] = fVar26 * fVar23 - fVar27 * fVar17;
          fVar23 = fVar16 * fVar17 + pfVar12[0x10];
          pfVar12[0x10] = (fVar24 * fVar17 - fVar15 * fVar23) + pfVar12[0x11];
          pfVar12[0x11] = fVar26 * fVar17 - fVar27 * fVar23;
          fVar17 = fVar16 * fVar23 + pfVar12[0x12];
          pfVar12[0x12] = (fVar24 * fVar23 - fVar15 * fVar17) + pfVar12[0x13];
          param_1 = param_1 + 4;
          pfVar12[0x13] = fVar26 * fVar23 - fVar27 * fVar17;
          fVar23 = fVar16 * fVar17 + pfVar12[0x14];
          pfVar12[0x14] = (fVar24 * fVar17 - fVar15 * fVar23) + pfVar12[0x15];
          pfVar12[0x15] = fVar26 * fVar17 - fVar27 * fVar23;
          pfVar12 = pfVar12 + 0x20;
          param_2[3] = fVar23;
          param_2 = param_2 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (lVar13 < lVar11) {
        fVar27 = fStackX_18 + fVar5;
        pfVar12 = param_6 + lVar13 * 8 + 2;
        fVar16 = fVar25 + fVar1;
        fVar24 = fVar28 + fVar2;
        fVar15 = fVar30 + fVar4;
        lVar13 = lVar11 - lVar13;
        fVar26 = fVar29 + fVar3;
        do {
          fVar23 = *param_1;
          param_1 = param_1 + 1;
          fVar18 = fVar16 * fVar23 + pfVar12[-2];
          pfVar12[-2] = (fVar24 * fVar23 - fVar15 * fVar18) + pfVar12[-1];
          fVar17 = fVar16 * fVar18 + *pfVar12;
          pfVar12[-1] = fVar26 * fVar23 - fVar27 * fVar18;
          *pfVar12 = (fVar24 * fVar18 - fVar15 * fVar17) + pfVar12[1];
          fVar19 = fVar16 * fVar17 + pfVar12[2];
          pfVar12[1] = fVar26 * fVar18 - fVar27 * fVar17;
          pfVar12[2] = (fVar24 * fVar17 - fVar15 * fVar19) + pfVar12[3];
          fVar23 = fVar16 * fVar19 + pfVar12[4];
          pfVar12[3] = fVar26 * fVar17 - fVar27 * fVar19;
          pfVar12[4] = (fVar24 * fVar19 - fVar15 * fVar23) + pfVar12[5];
          pfVar12[5] = fVar26 * fVar19 - fVar27 * fVar23;
          pfVar12 = pfVar12 + 8;
          *param_2 = fVar23;
          param_2 = param_2 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      fVar25 = fVar25 + fVar7;
      fVar28 = fVar28 + fVar8;
      fStackX_18 = fStackX_18 + fVar10;
      fVar29 = fVar29 + fVar6;
      fVar30 = fVar30 + fVar9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}
// 函数: void SystemCore_9c63c(float param_1,float *param_2,float param_3,int64_t param_4)
void SystemCore_9c63c(float param_1,float *param_2,float param_3,int64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  float *pfVar3;
  float *in_R10;
  int in_R11D;
  float in_XMM1_Da;
  float fVar4;
  float in_XMM3_Da;
  float fVar5;
  float in_XMM4_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar10;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float unaff_retaddr;
  float unaff_retaddr_00;
  float fStackX_c;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float local_var_e8;
  float local_var_f0;
  float local_var_f8;
  int64_t local_var_108;
  do {
    lVar1 = 0;
    if (3 < param_4) {
      fVar6 = unaff_XMM9_Da + param_3;
      lVar2 = (param_4 - 4U >> 2) + 1;
      pfVar3 = (float *)(local_var_108 + 0x28);
      fVar7 = unaff_XMM13_Da + param_1;
      fVar8 = unaff_XMM15_Da + in_XMM3_Da;
      lVar1 = lVar2 * 4;
      fVar9 = unaff_XMM14_Da + in_XMM1_Da;
      fVar10 = in_XMM4_Da + unaff_XMM11_Da;
      do {
        fVar4 = *in_R10;
        fVar5 = fVar6 * fVar4 + pfVar3[-10];
        pfVar3[-10] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[-9];
        pfVar3[-9] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[-8];
        pfVar3[-8] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[-7];
        pfVar3[-7] = fVar9 * fVar5 - fVar10 * fVar4;
        fVar5 = fVar6 * fVar4 + pfVar3[-6];
        pfVar3[-6] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[-5];
        pfVar3[-5] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[-4];
        pfVar3[-4] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[-3];
        pfVar3[-3] = fVar9 * fVar5 - fVar10 * fVar4;
        *param_2 = fVar4;
        fVar4 = in_R10[1];
        fVar5 = fVar6 * fVar4 + pfVar3[-2];
        pfVar3[-2] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[-1];
        pfVar3[-1] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + *pfVar3;
        *pfVar3 = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[1];
        pfVar3[1] = fVar9 * fVar5 - fVar10 * fVar4;
        fVar5 = fVar6 * fVar4 + pfVar3[2];
        pfVar3[2] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[3];
        pfVar3[3] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[4];
        pfVar3[4] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[5];
        pfVar3[5] = fVar9 * fVar5 - fVar10 * fVar4;
        param_2[1] = fVar4;
        fVar4 = in_R10[2];
        fVar5 = fVar6 * fVar4 + pfVar3[6];
        pfVar3[6] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[7];
        pfVar3[7] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[8];
        pfVar3[8] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[9];
        pfVar3[9] = fVar9 * fVar5 - fVar10 * fVar4;
        fVar5 = fVar6 * fVar4 + pfVar3[10];
        pfVar3[10] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[0xb];
        pfVar3[0xb] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[0xc];
        pfVar3[0xc] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[0xd];
        pfVar3[0xd] = fVar9 * fVar5 - fVar10 * fVar4;
        param_2[2] = fVar4;
        fVar4 = in_R10[3];
        fVar5 = fVar6 * fVar4 + pfVar3[0xe];
        pfVar3[0xe] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[0xf];
        pfVar3[0xf] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[0x10];
        pfVar3[0x10] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[0x11];
        pfVar3[0x11] = fVar9 * fVar5 - fVar10 * fVar4;
        fVar5 = fVar6 * fVar4 + pfVar3[0x12];
        pfVar3[0x12] = (fVar7 * fVar4 - fVar8 * fVar5) + pfVar3[0x13];
        in_R10 = in_R10 + 4;
        pfVar3[0x13] = fVar9 * fVar4 - fVar10 * fVar5;
        fVar4 = fVar6 * fVar5 + pfVar3[0x14];
        pfVar3[0x14] = (fVar7 * fVar5 - fVar8 * fVar4) + pfVar3[0x15];
        pfVar3[0x15] = fVar9 * fVar5 - fVar10 * fVar4;
        pfVar3 = pfVar3 + 0x20;
        param_2[3] = fVar4;
        param_2 = param_2 + 4;
        lVar2 = lVar2 + -1;
        param_1 = local_var_f8;
        in_XMM1_Da = unaff_retaddr;
        param_3 = local_var_e8;
        in_XMM3_Da = unaff_retaddr_00;
        unaff_XMM10_Da = fStackX_c;
      } while (lVar2 != 0);
    }
    if (lVar1 < param_4) {
      fVar6 = local_var_f0 + unaff_XMM11_Da;
      pfVar3 = (float *)(local_var_108 + 8 + lVar1 * 0x20);
      param_3 = unaff_XMM9_Da + param_3;
      param_1 = unaff_XMM13_Da + param_1;
      in_XMM3_Da = unaff_XMM15_Da + in_XMM3_Da;
      lVar1 = param_4 - lVar1;
      in_XMM1_Da = unaff_XMM14_Da + in_XMM1_Da;
      do {
        fVar7 = *in_R10;
        in_R10 = in_R10 + 1;
        fVar9 = param_3 * fVar7 + pfVar3[-2];
        pfVar3[-2] = (param_1 * fVar7 - in_XMM3_Da * fVar9) + pfVar3[-1];
        fVar8 = param_3 * fVar9 + *pfVar3;
        pfVar3[-1] = in_XMM1_Da * fVar7 - fVar6 * fVar9;
        *pfVar3 = (param_1 * fVar9 - in_XMM3_Da * fVar8) + pfVar3[1];
        fVar10 = param_3 * fVar8 + pfVar3[2];
        pfVar3[1] = in_XMM1_Da * fVar9 - fVar6 * fVar8;
        pfVar3[2] = (param_1 * fVar8 - in_XMM3_Da * fVar10) + pfVar3[3];
        fVar7 = param_3 * fVar10 + pfVar3[4];
        pfVar3[3] = in_XMM1_Da * fVar8 - fVar6 * fVar10;
        pfVar3[4] = (param_1 * fVar10 - in_XMM3_Da * fVar7) + pfVar3[5];
        pfVar3[5] = in_XMM1_Da * fVar10 - fVar6 * fVar7;
        pfVar3 = pfVar3 + 8;
        *param_2 = fVar7;
        param_2 = param_2 + 1;
        lVar1 = lVar1 + -1;
        in_XMM4_Da = local_var_f0;
      } while (lVar1 != 0);
    }
    unaff_XMM9_Da = unaff_XMM9_Da + unaff_XMM10_Da;
    unaff_XMM13_Da = unaff_XMM13_Da + unaff_XMM12_Da;
    in_XMM4_Da = in_XMM4_Da + fStackX_18;
    unaff_XMM14_Da = unaff_XMM14_Da + fStackX_10;
    unaff_XMM15_Da = unaff_XMM15_Da + fStackX_14;
    in_R11D = in_R11D + -1;
    param_1 = local_var_f8;
    in_XMM1_Da = unaff_retaddr;
    param_3 = local_var_e8;
    in_XMM3_Da = unaff_retaddr_00;
    local_var_f0 = in_XMM4_Da;
  } while (in_R11D != 0);
  return;
}
// 函数: void SystemCore_9ccda(void)
void SystemCore_9ccda(void)
{
  return;
}
uint64_t SystemCore_9cd20(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  if (*(int64_t *)(param_1 + 8) != 0) {
    plVar1 = (int64_t *)(*(int64_t *)(param_1 + 8) + 0xb0);
    lVar2 = 5;
    do {
      if (*plVar1 != 0) {
        (**(code **)(*(int64_t *)(param_1 + 0x28) + 0x10))(*plVar1,0,&processed_var_4528_ptr);
      }
      plVar1 = plVar1 + 0xb;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*(int64_t *)(param_1 + 0x28) + 0x10))
              (*(uint64_t *)(param_1 + 8),0,&processed_var_4528_ptr);
    *(uint64_t *)(param_1 + 8) = 0;
  }
  return 0;
}
uint64_t SystemCore_9cd36(void)
{
  int64_t unaff_RBX;
  int64_t *plVar1;
  int64_t unaff_RSI;
  int64_t lVar2;
  plVar1 = (int64_t *)(unaff_RBX + 0xb0);
  lVar2 = 5;
  do {
    if (*plVar1 != 0) {
      (**(code **)(*(int64_t *)(unaff_RSI + 0x28) + 0x10))(*plVar1,0,&processed_var_4528_ptr);
    }
    plVar1 = plVar1 + 0xb;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (**(code **)(*(int64_t *)(unaff_RSI + 0x28) + 0x10))
            (*(uint64_t *)(unaff_RSI + 8),0,&processed_var_4528_ptr);
  *(uint64_t *)(unaff_RSI + 8) = 0;
  return 0;
}
uint64_t SystemCore_9cd86(void)
{
  return 0;
}