#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part341.c - 17 个函数

// 函数: void FUN_18044d155(int64_t param_1,int32_t *param_2,float param_3,uint64_t param_4,
void FUN_18044d155(int64_t param_1,int32_t *param_2,float param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11)

{
  float *pfVar1;
  int64_t lVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t in_RAX;
  uint uVar5;
  uint64_t unaff_RBX;
  uint64_t uVar6;
  int iVar7;
  uint64_t unaff_RSI;
  byte unaff_R14B;
  float fVar8;
  int32_t unaff_XMM6_Da;
  float fVar9;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t uStackX_20;
  int32_t uStackX_24;
  float in_stack_000000c0;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
    FUN_180467500();
    *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_1 + 0x70);
  }
  fVar9 = 0.0;
  uVar5 = 0;
  iVar7 = (int)(*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3);
  if (iVar7 != 1) {
    do {
      fVar8 = (float)FUN_180466360(param_1,uVar5);
      fVar9 = fVar9 + fVar8;
      if (param_3 < fVar9) goto LAB_18044d1c0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < iVar7 - 1U);
  }
  uVar5 = 0xffffffff;
LAB_18044d1c0:
  lVar2 = *(int64_t *)(param_1 + 0xd0);
  iVar7 = (int)(*(int64_t *)(param_1 + 0xd8) - lVar2 >> 3);
  if ((((iVar7 < 2) || ((int)uVar5 < 0)) ||
      (pfVar1 = (float *)(*(int64_t *)(lVar2 + (uint64_t)uVar5 * 8) + 0xcc),
      in_stack_000000c0 < *pfVar1 || in_stack_000000c0 == *pfVar1)) ||
     (pfVar1 = (float *)(*(int64_t *)(lVar2 + (uint64_t)(uVar5 + 1) * 8) + 0xcc),
     in_stack_000000c0 < *pfVar1 || in_stack_000000c0 == *pfVar1)) {
LAB_18044d253:
    FUN_180466700(param_1,&uStackX_20,param_3);
  }
  else {
    uVar6 = (uint64_t)uVar5;
    if (unaff_R14B != 0) {
      uVar6 = (uint64_t)(uVar5 + 1);
    }
    uVar5 = (uint)uVar6;
    do {
      uVar4 = uVar6;
      uVar5 = (uint)unaff_R14B * 2 + -1 + uVar5;
      if (((int)uVar5 < 0) || (iVar7 <= (int)uVar5)) goto LAB_18044d253;
      pfVar1 = (float *)(*(int64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)uVar5 * 8) + 0xcc)
      ;
      uVar6 = (uint64_t)uVar5;
    } while (*pfVar1 <= in_stack_000000c0 && in_stack_000000c0 != *pfVar1);
    puVar3 = *(int32_t **)(*(int64_t *)(param_1 + 0xd0) + (int64_t)(int)uVar4 * 8);
    uStackX_20 = *puVar3;
    uStackX_24 = puVar3[1];
    param_5._0_4_ = puVar3[2];
    param_5._4_4_ = puVar3[3];
    param_6._0_4_ = puVar3[4];
    param_6._4_4_ = puVar3[5];
    param_7._0_4_ = puVar3[6];
    param_7._4_4_ = puVar3[7];
    param_8._0_4_ = puVar3[8];
    param_8._4_4_ = puVar3[9];
    param_9._0_4_ = puVar3[10];
    param_9._4_4_ = puVar3[0xb];
    param_10._0_4_ = puVar3[0xc];
    param_10._4_4_ = puVar3[0xd];
    param_11._0_4_ = puVar3[0xe];
    param_11._4_4_ = puVar3[0xf];
  }
  *param_2 = uStackX_20;
  param_2[1] = uStackX_24;
  param_2[2] = (int32_t)param_5;
  param_2[3] = param_5._4_4_;
  param_2[4] = (int32_t)param_6;
  param_2[5] = param_6._4_4_;
  param_2[6] = (int32_t)param_7;
  param_2[7] = param_7._4_4_;
  param_2[8] = (int32_t)param_8;
  param_2[9] = param_8._4_4_;
  param_2[10] = (int32_t)param_9;
  param_2[0xb] = param_9._4_4_;
  param_2[0xc] = (int32_t)param_10;
  param_2[0xd] = param_10._4_4_;
  param_2[0xe] = (int32_t)param_11;
  param_2[0xf] = param_11._4_4_;
  return;
}





// 函数: void FUN_18044d15c(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4,
void FUN_18044d15c(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11)

{
  float *pfVar1;
  int64_t lVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t in_RAX;
  uint uVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t unaff_RSI;
  byte unaff_R14B;
  float fVar8;
  int32_t unaff_XMM6_Da;
  float fVar9;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  int32_t uStackX_20;
  int32_t uStackX_24;
  float in_stack_000000c0;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
    FUN_180467500();
    *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_1 + 0x70);
  }
  fVar9 = 0.0;
  uVar5 = 0;
  iVar7 = (int)(*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3);
  if (iVar7 != 1) {
    do {
      fVar8 = (float)FUN_180466360(param_1,uVar5);
      fVar9 = fVar9 + fVar8;
      if (unaff_XMM7_Da < fVar9) goto LAB_18044d1c0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < iVar7 - 1U);
  }
  uVar5 = 0xffffffff;
LAB_18044d1c0:
  lVar2 = *(int64_t *)(param_1 + 0xd0);
  iVar7 = (int)(*(int64_t *)(param_1 + 0xd8) - lVar2 >> 3);
  if ((((iVar7 < 2) || ((int)uVar5 < 0)) ||
      (pfVar1 = (float *)(*(int64_t *)(lVar2 + (uint64_t)uVar5 * 8) + 0xcc),
      in_stack_000000c0 < *pfVar1 || in_stack_000000c0 == *pfVar1)) ||
     (pfVar1 = (float *)(*(int64_t *)(lVar2 + (uint64_t)(uVar5 + 1) * 8) + 0xcc),
     in_stack_000000c0 < *pfVar1 || in_stack_000000c0 == *pfVar1)) {
LAB_18044d253:
    FUN_180466700(param_1,&uStackX_20);
  }
  else {
    uVar6 = (uint64_t)uVar5;
    if (unaff_R14B != 0) {
      uVar6 = (uint64_t)(uVar5 + 1);
    }
    uVar5 = (uint)uVar6;
    do {
      uVar4 = uVar6;
      uVar5 = (uint)unaff_R14B * 2 + -1 + uVar5;
      if (((int)uVar5 < 0) || (iVar7 <= (int)uVar5)) goto LAB_18044d253;
      pfVar1 = (float *)(*(int64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)uVar5 * 8) + 0xcc)
      ;
      uVar6 = (uint64_t)uVar5;
    } while (*pfVar1 <= in_stack_000000c0 && in_stack_000000c0 != *pfVar1);
    puVar3 = *(int32_t **)(*(int64_t *)(param_1 + 0xd0) + (int64_t)(int)uVar4 * 8);
    uStackX_20 = *puVar3;
    uStackX_24 = puVar3[1];
    param_5._0_4_ = puVar3[2];
    param_5._4_4_ = puVar3[3];
    param_6._0_4_ = puVar3[4];
    param_6._4_4_ = puVar3[5];
    param_7._0_4_ = puVar3[6];
    param_7._4_4_ = puVar3[7];
    param_8._0_4_ = puVar3[8];
    param_8._4_4_ = puVar3[9];
    param_9._0_4_ = puVar3[10];
    param_9._4_4_ = puVar3[0xb];
    param_10._0_4_ = puVar3[0xc];
    param_10._4_4_ = puVar3[0xd];
    param_11._0_4_ = puVar3[0xe];
    param_11._4_4_ = puVar3[0xf];
  }
  *param_2 = uStackX_20;
  param_2[1] = uStackX_24;
  param_2[2] = (int32_t)param_5;
  param_2[3] = param_5._4_4_;
  param_2[4] = (int32_t)param_6;
  param_2[5] = param_6._4_4_;
  param_2[6] = (int32_t)param_7;
  param_2[7] = param_7._4_4_;
  param_2[8] = (int32_t)param_8;
  param_2[9] = param_8._4_4_;
  param_2[10] = (int32_t)param_9;
  param_2[0xb] = param_9._4_4_;
  param_2[0xc] = (int32_t)param_10;
  param_2[0xd] = param_10._4_4_;
  param_2[0xe] = (int32_t)param_11;
  param_2[0xf] = param_11._4_4_;
  return;
}





// 函数: void FUN_18044d1eb(float param_1,int64_t param_2,int param_3,uint64_t param_4,uint64_t param_5,
void FUN_18044d1eb(float param_1,int64_t param_2,int param_3,uint64_t param_4,uint64_t param_5,
                  uint64_t param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9,
                  uint64_t param_10,uint64_t param_11)

{
  float *pfVar1;
  int32_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint unaff_EBX;
  uint64_t uVar5;
  int32_t *unaff_RBP;
  int64_t unaff_RDI;
  byte unaff_R14B;
  int32_t uStackX_20;
  int32_t uStackX_24;
  float in_stack_000000c0;
  
  if ((((int)unaff_EBX < 0) ||
      (pfVar1 = (float *)(*(int64_t *)(param_2 + (uint64_t)unaff_EBX * 8) + 0xcc),
      param_1 = in_stack_000000c0, in_stack_000000c0 < *pfVar1 || in_stack_000000c0 == *pfVar1)) ||
     (pfVar1 = (float *)(*(int64_t *)(param_2 + (uint64_t)(unaff_EBX + 1) * 8) + 0xcc),
     in_stack_000000c0 < *pfVar1 || in_stack_000000c0 == *pfVar1)) {
LAB_18044d253:
    FUN_180466700(param_1,&uStackX_20);
  }
  else {
    uVar5 = (uint64_t)unaff_EBX;
    if (unaff_R14B != 0) {
      uVar5 = (uint64_t)(unaff_EBX + 1);
    }
    uVar3 = (uint)uVar5;
    do {
      uVar4 = uVar5;
      uVar3 = (uint)unaff_R14B * 2 + -1 + uVar3;
      if (((int)uVar3 < 0) || (param_3 <= (int)uVar3)) goto LAB_18044d253;
      pfVar1 = (float *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0xd0) + (uint64_t)uVar3 * 8) +
                        0xcc);
      uVar5 = (uint64_t)uVar3;
    } while (*pfVar1 <= in_stack_000000c0 && in_stack_000000c0 != *pfVar1);
    puVar2 = *(int32_t **)(*(int64_t *)(unaff_RDI + 0xd0) + (int64_t)(int)uVar4 * 8);
    uStackX_20 = *puVar2;
    uStackX_24 = puVar2[1];
    param_5._0_4_ = puVar2[2];
    param_5._4_4_ = puVar2[3];
    param_6._0_4_ = puVar2[4];
    param_6._4_4_ = puVar2[5];
    param_7._0_4_ = puVar2[6];
    param_7._4_4_ = puVar2[7];
    param_8._0_4_ = puVar2[8];
    param_8._4_4_ = puVar2[9];
    param_9._0_4_ = puVar2[10];
    param_9._4_4_ = puVar2[0xb];
    param_10._0_4_ = puVar2[0xc];
    param_10._4_4_ = puVar2[0xd];
    param_11._0_4_ = puVar2[0xe];
    param_11._4_4_ = puVar2[0xf];
  }
  *unaff_RBP = uStackX_20;
  unaff_RBP[1] = uStackX_24;
  unaff_RBP[2] = (int32_t)param_5;
  unaff_RBP[3] = param_5._4_4_;
  unaff_RBP[4] = (int32_t)param_6;
  unaff_RBP[5] = param_6._4_4_;
  unaff_RBP[6] = (int32_t)param_7;
  unaff_RBP[7] = param_7._4_4_;
  unaff_RBP[8] = (int32_t)param_8;
  unaff_RBP[9] = param_8._4_4_;
  unaff_RBP[10] = (int32_t)param_9;
  unaff_RBP[0xb] = param_9._4_4_;
  unaff_RBP[0xc] = (int32_t)param_10;
  unaff_RBP[0xd] = param_10._4_4_;
  unaff_RBP[0xe] = (int32_t)param_11;
  unaff_RBP[0xf] = param_11._4_4_;
  return;
}





// 函数: void FUN_18044d2a9(void)
void FUN_18044d2a9(void)

{
  return;
}





// 函数: void FUN_18044d2aa(void)
void FUN_18044d2aa(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int unaff_EBX;
  uint64_t *unaff_RBP;
  int64_t in_R9;
  
  puVar1 = *(uint64_t **)(in_R9 + (int64_t)unaff_EBX * 8);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar5 = puVar1[4];
  uVar6 = puVar1[5];
  uVar7 = puVar1[6];
  uVar8 = puVar1[7];
  *unaff_RBP = *puVar1;
  unaff_RBP[1] = uVar2;
  unaff_RBP[2] = uVar3;
  unaff_RBP[3] = uVar4;
  unaff_RBP[4] = uVar5;
  unaff_RBP[5] = uVar6;
  unaff_RBP[6] = uVar7;
  unaff_RBP[7] = uVar8;
  return;
}





// 函数: void FUN_18044d2d0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4)
void FUN_18044d2d0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4)

{
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  if (param_1 != 0) {
    FUN_180466700(param_1,&uStack_58,param_4);
    *param_2 = uStack_58;
    param_2[1] = uStack_50;
    param_2[2] = uStack_48;
    param_2[3] = uStack_40;
    param_2[4] = uStack_38;
    param_2[5] = uStack_30;
    param_2[6] = uStack_28;
    param_2[7] = uStack_20;
    *param_3 = uStack_18;
    param_3[1] = uStack_10;
  }
  return;
}





// 函数: void FUN_18044d340(int64_t param_1,uint64_t *param_2)
void FUN_18044d340(int64_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  float fVar6;
  
  if (param_1 != 0) {
    iVar4 = 0;
    iVar3 = (int)(*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3);
    lVar5 = (int64_t)iVar3;
    if (0 < iVar3) {
      do {
        fVar6 = (float)iVar4;
        if (9.223372e+18 <= fVar6) {
          fVar6 = fVar6 - 9.223372e+18;
        }
        iVar4 = iVar4 + 1;
        puVar1 = *(uint64_t **)(*(int64_t *)(param_1 + 0xd0) + (int64_t)fVar6 * 8);
        uVar2 = puVar1[1];
        *param_2 = *puVar1;
        param_2[1] = uVar2;
        uVar2 = puVar1[3];
        param_2[2] = puVar1[2];
        param_2[3] = uVar2;
        uVar2 = puVar1[5];
        param_2[4] = puVar1[4];
        param_2[5] = uVar2;
        uVar2 = puVar1[7];
        param_2[6] = puVar1[6];
        param_2[7] = uVar2;
        param_2 = param_2 + 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}





// 函数: void FUN_18044d37b(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int param_4)
void FUN_18044d37b(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t in_R10;
  int64_t in_R11;
  float fVar3;
  float in_XMM2_Da;
  
  do {
    fVar3 = (float)param_4;
    if (in_XMM2_Da <= fVar3) {
      fVar3 = fVar3 - in_XMM2_Da;
    }
    param_4 = param_4 + 1;
    puVar1 = *(uint64_t **)(*(int64_t *)(in_R10 + 0xd0) + (int64_t)fVar3 * 8);
    uVar2 = puVar1[1];
    *param_3 = *puVar1;
    param_3[1] = uVar2;
    uVar2 = puVar1[3];
    param_3[2] = puVar1[2];
    param_3[3] = uVar2;
    uVar2 = puVar1[5];
    param_3[4] = puVar1[4];
    param_3[5] = uVar2;
    uVar2 = puVar1[7];
    param_3[6] = puVar1[6];
    param_3[7] = uVar2;
    param_3 = param_3 + 8;
    in_R11 = in_R11 + -1;
  } while (in_R11 != 0);
  return;
}





// 函数: void FUN_18044d3f1(void)
void FUN_18044d3f1(void)

{
  return;
}





// 函数: void FUN_18044d450(int64_t param_1,int param_2,int param_3,int32_t *param_4)
void FUN_18044d450(int64_t param_1,int param_2,int param_3,int32_t *param_4)

{
  float fVar1;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_1 != 0) {
    uStack_48 = 0x3f800000;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_20 = 0x3f800000;
    fVar1 = (float)param_2;
    uStack_38 = 0x3f80000000000000;
    uStack_30 = 0;
    uStack_18 = *param_4;
    uStack_14 = param_4[1];
    uStack_10 = param_4[2];
    uStack_c = param_4[3];
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    if (9.223372e+18 <= fVar1) {
      fVar1 = fVar1 - 9.223372e+18;
    }
    FUN_180464e90(*(uint64_t *)(*(int64_t *)(param_1 + 0xd0) + (int64_t)fVar1 * 8),&uStack_48,
                  (int)(float)(param_3 + 1));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18044d4f0(int64_t param_1,uint param_2)

{
  uint64_t uVar1;
  uint64_t uStackX_8;
  
  if (param_1 != 0) {
    uVar1 = FUN_18062b1e0(system_memory_pool_ptr,0xd8,8,3);
    uStackX_8 = func_0x000180464d70(uVar1,&system_data_0300,0);
    FUN_180469480((int64_t *)(param_1 + 0xd0),
                  *(int64_t *)(param_1 + 0xd0) + (uint64_t)param_2 * 8,&uStackX_8);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    return (uint64_t)param_2;
  }
  return 0xffffffff;
}





// 函数: void FUN_18044d570(int64_t param_1,uint64_t param_2)
void FUN_18044d570(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  if (param_1 != 0) {
    lVar4 = (param_2 & 0xffffffff) * 8;
    lVar2 = *(int64_t *)(lVar4 + *(int64_t *)(param_1 + 0xd0));
    if (lVar2 != 0) {
      if (*(int64_t *)(lVar2 + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      *(uint64_t *)(lVar2 + 0xd0) = 0;
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar2);
    }
    *(uint64_t *)(lVar4 + *(int64_t *)(param_1 + 0xd0)) = 0;
    uVar3 = *(uint64_t *)(param_1 + 0xd8);
    lVar4 = *(int64_t *)(param_1 + 0xd0) + lVar4;
    uVar1 = lVar4 + 8;
    if (uVar1 < uVar3) {
                    // WARNING: Subroutine does not return
      memmove(lVar4,uVar1,uVar3 - uVar1);
    }
    *(uint64_t *)(param_1 + 0xd8) = uVar3 - 8;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  return;
}





// 函数: void FUN_18044d583(int64_t param_1)
void FUN_18044d583(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t in_RAX;
  int64_t lVar4;
  int64_t unaff_RBX;
  
  lVar4 = in_RAX * 8;
  lVar2 = *(int64_t *)(lVar4 + *(int64_t *)(param_1 + 0xd0));
  if (lVar2 == 0) {
    *(uint64_t *)(lVar4 + *(int64_t *)(unaff_RBX + 0xd0)) = 0;
    uVar3 = *(uint64_t *)(unaff_RBX + 0xd8);
    lVar4 = *(int64_t *)(unaff_RBX + 0xd0) + lVar4;
    uVar1 = lVar4 + 8;
    if (uVar1 < uVar3) {
                    // WARNING: Subroutine does not return
      memmove(lVar4,uVar1,uVar3 - uVar1);
    }
    *(uint64_t *)(unaff_RBX + 0xd8) = uVar3 - 8;
    *(int *)(unaff_RBX + 0x70) = *(int *)(unaff_RBX + 0x70) + 1;
    return;
  }
  if (*(int64_t *)(lVar2 + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(uint64_t *)(lVar2 + 0xd0) = 0;
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(lVar2);
}





// 函数: void FUN_18044d5fc(uint64_t param_1,int64_t param_2)
void FUN_18044d5fc(uint64_t param_1,int64_t param_2)

{
  int64_t in_RAX;
  
                    // WARNING: Subroutine does not return
  memmove(param_1,param_2,in_RAX - param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18044d680(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_180191c00(render_system_data_config,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044d7d0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18044d7d0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar6 = *(uint64_t **)(param_1 + 0x18);
  puVar2 = (uint64_t *)0x0;
  if (puVar6 < *(uint64_t **)(param_1 + 0x20)) {
    *(uint64_t **)(param_1 + 0x18) = puVar6 + 1;
    *puVar6 = param_2;
    return;
  }
  puVar3 = *(uint64_t **)(param_1 + 0x10);
  lVar4 = (int64_t)puVar6 - (int64_t)puVar3 >> 3;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    puVar7 = puVar2;
    if (lVar4 == 0) goto joined_r0x00018044d87d;
  }
  puVar2 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(param_1 + 0x28),param_4,uVar8);
  puVar6 = *(uint64_t **)(param_1 + 0x18);
  puVar3 = *(uint64_t **)(param_1 + 0x10);
  puVar7 = puVar2;
joined_r0x00018044d87d:
  for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
    *puVar2 = *puVar3;
    *puVar3 = 0;
    puVar2 = puVar2 + 1;
  }
  *puVar2 = param_2;
  plVar1 = *(int64_t **)(param_1 + 0x18);
  plVar5 = *(int64_t **)(param_1 + 0x10);
  if (plVar5 != plVar1) {
    do {
      if ((int64_t *)*plVar5 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar5 + 0x38))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    plVar5 = *(int64_t **)(param_1 + 0x10);
  }
  if (plVar5 == (int64_t *)0x0) {
    *(uint64_t **)(param_1 + 0x10) = puVar7;
    *(uint64_t **)(param_1 + 0x18) = puVar2 + 1;
    *(uint64_t **)(param_1 + 0x20) = puVar7 + lVar4;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(plVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t *
FUN_18044d910(int32_t *param_1,char param_2,uint64_t param_3,int32_t param_4,
             uint64_t param_5)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_5c;
  void *puStack_58;
  int64_t lStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int8_t uStack_30;
  int32_t uStack_2c;
  
  puStack_58 = &system_data_buffer_ptr;
  uStack_40 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_34 = 0x100;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_180627c50(&puStack_58,param_5,param_3,param_4,0xfffffffffffffffe);
  uStack_38 = 0;
  uStack_34._0_2_ = CONCAT11((char)param_3,1);
  uStack_2c = param_4;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x60d30,0x10,0x1f);
  plVar3 = (int64_t *)FUN_1801954d0(uVar2,&puStack_58);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  if (param_2 != '\0') {
    FUN_1801af550(plVar3,plVar3[0xc16d],plVar3[0xc16e]);
  }
  if (plVar3 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_68 = SUB84(plVar3,0);
  uStack_64 = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_68;
  param_1[1] = uStack_64;
  param_1[2] = uVar1;
  param_1[3] = uStack_5c;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  puStack_58 = &system_data_buffer_ptr;
  if (lStack_50 == 0) {
    return param_1;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}



int32_t *
FUN_18044da90(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_34;
  void *puStack_30;
  int64_t lStack_28;
  
  FUN_180627910(&puStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
  FUN_180198e30(param_2,&plStackX_8,&puStack_30,param_4 & 0xff);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_40 = SUB84(plVar1,0);
  uStack_3c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  param_1[2] = uVar2;
  param_1[3] = uStack_34;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 == 0) {
    return param_1;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}





// 函数: void FUN_18044db70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18044db70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int16_t auStackX_8 [16];
  uint64_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180627910(&puStack_30);
  auStackX_8[0] = 0x24;
  if (lStack_28 != 0) {
    FUN_180057980(&puStack_30,param_1 + 0x60710,auStackX_8,param_4,uVar1);
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}





// 函数: void FUN_18044dc10(int64_t param_1,uint64_t param_2)
void FUN_18044dc10(int64_t param_1,uint64_t param_2)

{
  int64_t *aplStackX_8 [4];
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  code *pcStack_20;
  void *puStack_18;
  
  aplStackX_8[0] = *(int64_t **)(*(int64_t *)(param_1 + 0x60b80) + 0x1c48);
  if (aplStackX_8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x28))();
  }
  if (aplStackX_8[0] != (int64_t *)0x0) {
    uStack_30 = aplStackX_8;
    pcStack_20 = (code *)&unknown_var_7200_ptr;
    puStack_18 = &unknown_var_7184_ptr;
    uStack_38 = (int32_t)param_2;
    uStack_34 = (int32_t)((uint64_t)param_2 >> 0x20);
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    (**(code **)(**(int64_t **)(aplStackX_8[0][0x15] + 0x88) + 0x60))
              (*(int64_t **)(aplStackX_8[0][0x15] + 0x88),&system_data_1050,aplStackX_8[0][0x15] + 0xc
               ,0,&uStack_30);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&uStack_30,0,0);
    }
  }
  if (aplStackX_8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044dd10(uint64_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_18044dd10(uint64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar7;
  int64_t lStack_d8;
  uint64_t uStack_d0;
  int16_t uStack_c8;
  int8_t uStack_c6;
  uint64_t uStack_c4;
  uint64_t uStack_bc;
  uint64_t uStack_b4;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  uint64_t uStack_9c;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  int32_t uStack_7c;
  int16_t uStack_78;
  int16_t uStack_76;
  int16_t uStack_74;
  char cStack_72;
  uint8_t uStack_71;
  float fStack_68;
  float fStack_64;
  uint64_t uStack_58;
  uint64_t uVar6;
  
  uStack_58 = 0xfffffffffffffffe;
  uVar7 = 0;
  uStack_c6 = 3;
  lVar1 = *(int64_t *)*param_1;
  uStack_c4 = *(uint64_t *)(lVar1 + 0x2e4);
  uStack_bc = *(uint64_t *)(lVar1 + 0x2ec);
  uStack_b4 = *(uint64_t *)(lVar1 + 0x2f4);
  uStack_ac = *(uint64_t *)(lVar1 + 0x2fc);
  uStack_a4 = *(uint64_t *)(lVar1 + 0x304);
  uStack_9c = *(uint64_t *)(lVar1 + 0x30c);
  uStack_94 = *(uint64_t *)(lVar1 + 0x314);
  uStack_8c = *(uint64_t *)(lVar1 + 0x31c);
  uStack_84 = *(uint64_t *)(lVar1 + 0x324);
  uVar2 = *(uint64_t *)(lVar1 + 0x32c);
  uStack_7c = (int32_t)uVar2;
  uStack_78 = (int16_t)((uint64_t)uVar2 >> 0x20);
  uStack_76 = (int16_t)((uint64_t)uVar2 >> 0x30);
  uVar2 = *(uint64_t *)(lVar1 + 0x334);
  uStack_74 = (int16_t)uVar2;
  cStack_72 = (char)((uint64_t)uVar2 >> 0x10);
  uStack_71 = (uint8_t)((uint64_t)uVar2 >> 0x18);
  lVar1 = *(int64_t *)(param_2 + 8);
  uStack_c8 = 1;
  uVar3 = uVar7;
  uVar4 = uVar7;
  lStack_d8 = lVar1;
  uStack_d0 = param_3;
  if (cStack_72 == '\0') {
    uVar2 = FUN_18062b420(system_memory_pool_ptr,param_3,3);
                    // WARNING: Subroutine does not return
    memcpy(uVar2,lVar1,param_3);
  }
  do {
    uVar6 = uVar7;
    do {
      FUN_1802a11e0(&lStack_d8,&fStack_68,
                    CONCAT44(1.0 - (float)(int)uVar4 * 0.0009765625,(float)(int)uVar6 * 0.0009765625
                            ),1);
      *(char *)(uVar3 + *(int64_t *)param_1[1]) = (char)(int64_t)(fStack_68 * 255.0);
      *(char *)(*(int64_t *)param_1[1] + 1 + uVar3) = (char)(int64_t)(fStack_64 * 255.0);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      uVar3 = uVar3 + 2;
    } while ((int)uVar5 < 0x400);
    uVar5 = (int)uVar4 + 1;
    uVar4 = (uint64_t)uVar5;
  } while ((int)uVar5 < 0x400);
  if (((uStack_c8._1_1_ == '\0') && ((char)uStack_c8 == '\0')) && (lStack_d8 != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}





