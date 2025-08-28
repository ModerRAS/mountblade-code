#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part047.c - 10 个函数
// 函数: void SystemCore_e94c4(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4)
void SystemCore_e94c4(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t in_RAX;
  uint64_t unaff_RBX;
  float *pfVar6;
  uint64_t unaff_RSI;
  float *pfVar7;
  uint64_t unaff_RDI;
  float *pfVar8;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t uVar9;
  uint64_t unaff_R15;
  float fVar10;
  float fVar11;
  float fVar12;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar13;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float *local_buffer_e0;
  float *local_buffer_e8;
  int32_t local_buffer_f0;
  float local_buffer_f8;
  float local_var_100;
  float local_var_108;
  float local_var_110;
  float local_var_118;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  pfVar6 = (float *)(param_1 + 8);
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  pfVar7 = (float *)(param_3 + 8);
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  pfVar8 = (float *)(param_2 + 8);
  *(uint64_t *)(in_RAX + -0x10) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  fVar13 = *local_buffer_e0;
  fVar10 = *local_buffer_e8;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
  uVar9 = (uint64_t)param_4;
  do {
    fVar12 = pfVar7[-2] * pfVar7[-2] + pfVar7[-1] * pfVar7[-1] + *pfVar7 * *pfVar7 +
             pfVar7[1] * pfVar7[1] + pfVar7[2] * pfVar7[2] + pfVar7[3] * pfVar7[3];
    fVar11 = local_var_108;
    if (fVar10 < fVar12) {
      fVar11 = local_var_100;
    }
    fVar13 = fVar13 + (fVar12 - fVar13) * fVar11;
    fVar10 = (fVar13 - fVar10) * fVar11 + fVar10;
    fVar11 = local_buffer_f8;
    if (local_var_110 < fVar10) {
      fVar11 = (float)powf(fVar10 * local_var_118,local_buffer_f0);
      fVar11 = fVar11 * local_buffer_f8;
    }
    fVar2 = pfVar6[-1];
    fVar3 = *pfVar6;
    fVar4 = pfVar6[1];
    fVar5 = pfVar6[2];
    pfVar1 = pfVar6 + 3;
    fVar12 = pfVar6[-2];
    pfVar6 = pfVar6 + 6;
    pfVar8[3] = fVar11 * *pfVar1;
    pfVar8[-1] = fVar2 * fVar11;
    *pfVar8 = fVar3 * fVar11;
    pfVar8[1] = fVar4 * fVar11;
    pfVar8[2] = fVar5 * fVar11;
    pfVar8 = pfVar8 + 6;
    *(float *)((int64_t)pfVar7 + (param_2 - param_3) + -8) = fVar11 * fVar12;
    pfVar7 = pfVar7 + 6;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  *local_buffer_e8 = fVar10;
  *local_buffer_e0 = fVar13;
  return;
}
// 函数: void SystemCore_e96bc(void)
void SystemCore_e96bc(void)
{
  return;
}
// 函数: void SystemCore_e96c0(int64_t param_1,float *param_2,int64_t param_3,uint param_4,float *param_5,
void SystemCore_e96c0(int64_t param_1,float *param_2,int64_t param_3,uint param_4,float *param_5,
                  float *param_6,int32_t param_7,float param_8,float param_9,float param_10,
                  float param_11,float param_12)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int64_t lVar5;
  uint64_t uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  if (0 < (int)param_4) {
    pfVar7 = (float *)(param_3 + 8);
    fVar9 = *param_6;
    fVar11 = *param_5;
    uVar6 = (uint64_t)param_4;
    do {
      fVar10 = pfVar7[-2] * pfVar7[-2] + pfVar7[-1] * pfVar7[-1] + *pfVar7 * *pfVar7 +
               pfVar7[1] * pfVar7[1] + pfVar7[2] * pfVar7[2] + pfVar7[3] * pfVar7[3] +
               pfVar7[4] * pfVar7[4] + pfVar7[5] * pfVar7[5];
      fVar8 = param_10;
      if (fVar9 < fVar10) {
        fVar8 = param_9;
      }
      fVar11 = fVar11 + (fVar10 - fVar11) * fVar8;
      fVar9 = (fVar11 - fVar9) * fVar8 + fVar9;
      fVar8 = param_8;
      if (param_11 < fVar9) {
        fVar8 = (float)powf(fVar9 * param_12,param_7);
        fVar8 = fVar8 * param_8;
      }
      lVar5 = 2;
      pfVar4 = param_2;
      do {
        pfVar1 = (float *)((param_1 - (int64_t)param_2) + (int64_t)pfVar4);
        fVar10 = pfVar1[1];
        fVar2 = pfVar1[2];
        fVar3 = pfVar1[3];
        *pfVar4 = *pfVar1 * fVar8;
        pfVar4[1] = fVar10 * fVar8;
        pfVar4[2] = fVar2 * fVar8;
        pfVar4[3] = fVar3 * fVar8;
        lVar5 = lVar5 + -1;
        pfVar4 = pfVar4 + 4;
      } while (lVar5 != 0);
      pfVar7 = pfVar7 + 8;
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *param_6 = fVar9;
    *param_5 = fVar11;
  }
  return;
}
// 函数: void SystemCore_e96d5(int64_t param_1,float *param_2,int64_t param_3,uint param_4)
void SystemCore_e96d5(int64_t param_1,float *param_2,int64_t param_3,uint param_4)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int64_t in_RAX;
  float *pfVar4;
  int64_t lVar5;
  uint64_t unaff_RBP;
  uint64_t uVar6;
  uint64_t unaff_RDI;
  float *pfVar7;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar8;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar9;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar10;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar11;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float *local_var_100;
  float *local_var_108;
  int32_t local_var_110;
  float local_var_118;
  float local_var_120;
  float local_var_128;
  float local_var_130;
  float local_var_138;
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  pfVar7 = (float *)(param_3 + 8);
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  fVar9 = *local_var_108;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  fVar11 = *local_var_100;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM11_Dd;
  uVar6 = (uint64_t)param_4;
  do {
    fVar10 = pfVar7[-2] * pfVar7[-2] + pfVar7[-1] * pfVar7[-1] + *pfVar7 * *pfVar7 +
             pfVar7[1] * pfVar7[1] + pfVar7[2] * pfVar7[2] + pfVar7[3] * pfVar7[3] +
             pfVar7[4] * pfVar7[4] + pfVar7[5] * pfVar7[5];
    fVar8 = local_var_128;
    if (fVar9 < fVar10) {
      fVar8 = local_var_120;
    }
    fVar11 = fVar11 + (fVar10 - fVar11) * fVar8;
    fVar9 = (fVar11 - fVar9) * fVar8 + fVar9;
    fVar8 = local_var_118;
    if (local_var_130 < fVar9) {
      fVar8 = (float)powf(fVar9 * local_var_138,local_var_110);
      fVar8 = fVar8 * local_var_118;
    }
    lVar5 = 2;
    pfVar4 = param_2;
    do {
      pfVar1 = (float *)((param_1 - (int64_t)param_2) + (int64_t)pfVar4);
      fVar10 = pfVar1[1];
      fVar2 = pfVar1[2];
      fVar3 = pfVar1[3];
      *pfVar4 = *pfVar1 * fVar8;
      pfVar4[1] = fVar10 * fVar8;
      pfVar4[2] = fVar2 * fVar8;
      pfVar4[3] = fVar3 * fVar8;
      lVar5 = lVar5 + -1;
      pfVar4 = pfVar4 + 4;
    } while (lVar5 != 0);
    pfVar7 = pfVar7 + 8;
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 8;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  *local_var_108 = fVar9;
  *local_var_100 = fVar11;
  return;
}
// 函数: void SystemCore_e9904(void)
void SystemCore_e9904(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_e9910(float *param_1,float *param_2,float *param_3,int param_4,float *param_5,
void SystemCore_e9910(float *param_1,float *param_2,float *param_3,int param_4,float *param_5,
                  float *param_6,int32_t param_7,float param_8,float param_9,float param_10,
                  float param_11,float param_12)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  uint64_t uVar9;
  float fVar11;
  uint extraout_XMM0_Dc;
  float fVar12;
  uint extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  int8_t stack_array_138 [32];
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint64_t local_var_e8;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_138;
  iVar6 = 0;
  fVar14 = *param_6;
  if (3 < param_4) {
    iVar5 = 3;
    fVar8 = *param_5;
    local_var_118 = param_7;
    local_var_114 = param_7;
    local_var_110 = param_7;
    local_var_10c = param_7;
    do {
      fVar7 = *param_3 * *param_3;
      fVar10 = param_3[1] * param_3[1];
      fVar11 = param_3[2] * param_3[2];
      fVar12 = param_3[3] * param_3[3];
      fVar13 = param_10;
      if (fVar14 < fVar7) {
        fVar13 = param_9;
      }
      fVar8 = (fVar7 - fVar8) * fVar13 + fVar8;
      fVar13 = (fVar8 - fVar14) * fVar13 + fVar14;
      fVar14 = param_10;
      if (fVar13 < fVar10) {
        fVar14 = param_9;
      }
      fVar8 = fVar8 + (fVar10 - fVar8) * fVar14;
      fVar7 = (fVar8 - fVar13) * fVar14 + fVar13;
      fVar14 = param_10;
      if (fVar7 < fVar11) {
        fVar14 = param_9;
      }
      fVar8 = fVar8 + (fVar11 - fVar8) * fVar14;
      fVar10 = (fVar8 - fVar7) * fVar14 + fVar7;
      fVar14 = param_10;
      if (fVar10 < fVar12) {
        fVar14 = param_9;
      }
      fVar8 = (fVar12 - fVar8) * fVar14 + fVar8;
      *param_5 = fVar8;
      fVar14 = (fVar8 - fVar10) * fVar14 + fVar10;
      fStack_108 = fVar13 * param_12;
      fStack_104 = fVar7 * param_12;
      fStack_100 = fVar10 * param_12;
      fStack_fc = fVar14 * param_12;
      fStack_f8 = fVar13;
      fStack_f4 = fVar7;
      fStack_f0 = fVar10;
      fStack_ec = fVar14;
      uVar9 = SystemCore_eaa70(&fStack_108,&local_var_118);
      param_3 = param_3 + 4;
      fVar11 = *param_1;
      fVar12 = param_1[1];
      fVar1 = param_1[2];
      fVar2 = param_1[3];
      param_1 = param_1 + 4;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      *param_2 = (float)((uint)(uVar9 ^ 0x3f8000003f800000) & -(uint)(param_11 < fVar13) ^
                        0x3f800000) * param_8 * fVar11;
      param_2[1] = (float)((uint)((uVar9 ^ 0x3f8000003f800000) >> 0x20) & -(uint)(param_11 < fVar7)
                          ^ 0x3f800000) * param_8 * fVar12;
      param_2[2] = (float)((extraout_XMM0_Dc ^ 0x3f800000) & -(uint)(param_11 < fVar10) ^ 0x3f800000
                          ) * param_8 * fVar1;
      param_2[3] = (float)((extraout_XMM0_Dd ^ 0x3f800000) & -(uint)(param_11 < fVar14) ^ 0x3f800000
                          ) * param_8 * fVar2;
      param_2 = param_2 + 4;
    } while (iVar5 < param_4);
  }
  *param_6 = fVar14;
  if (iVar6 < param_4) {
    fVar8 = *param_5;
    lVar4 = (int64_t)param_3 - (int64_t)param_2;
    lVar3 = (int64_t)param_1 - (int64_t)param_2;
    uVar9 = (uint64_t)(uint)(param_4 - iVar6);
    do {
      fVar13 = *(float *)(lVar4 + (int64_t)param_2);
      fVar13 = fVar13 * fVar13;
      fVar7 = param_10;
      if (fVar14 < fVar13) {
        fVar7 = param_9;
      }
      fVar8 = fVar8 + (fVar13 - fVar8) * fVar7;
      fVar14 = (fVar8 - fVar14) * fVar7 + fVar14;
      fVar13 = param_8;
      if (param_11 < fVar14) {
        fVar13 = (float)powf(fVar14 * param_12,param_7);
        fVar13 = fVar13 * param_8;
      }
      *param_2 = fVar13 * *(float *)((int64_t)param_2 + lVar3);
      param_2 = param_2 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    *param_6 = fVar14;
    *param_5 = fVar8;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_138);
}
// 函数: void SystemCore_e99b7(int32_t param_1,uint64_t param_2,int32_t param_3,float param_4,
void SystemCore_e99b7(int32_t param_1,uint64_t param_2,int32_t param_3,float param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10)
{
  float fVar1;
  float fVar2;
  float *unaff_RBX;
  float *unaff_RBP;
  int64_t lVar3;
  float *unaff_RSI;
  int64_t lVar4;
  int unaff_EDI;
  int in_R9D;
  int64_t in_R11;
  int iVar5;
  uint64_t unaff_R12;
  float *unaff_R13;
  int unaff_R14D;
  float *unaff_R15;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  uint64_t uVar9;
  float fVar11;
  uint extraout_XMM0_Dc;
  float fVar12;
  uint extraout_XMM0_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float unaff_XMM15_Da;
  int32_t local_var_170;
  float local_var_190;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM13_Dd;
  fVar8 = param_4;
  if (3 < in_R9D) {
    *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
    iVar5 = unaff_R14D + 3;
    *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
    *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
    *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
    *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
    fVar7 = *unaff_R15;
    do {
      fVar6 = *unaff_RSI * *unaff_RSI;
      fVar10 = unaff_RSI[1] * unaff_RSI[1];
      fVar11 = unaff_RSI[2] * unaff_RSI[2];
      fVar12 = unaff_RSI[3] * unaff_RSI[3];
      fVar8 = unaff_XMM8_Da;
      if (unaff_XMM7_Da < fVar6) {
        fVar8 = unaff_XMM9_Da;
      }
      fVar7 = (fVar6 - fVar7) * fVar8 + fVar7;
      fVar6 = (fVar7 - unaff_XMM7_Da) * fVar8 + unaff_XMM7_Da;
      fVar8 = unaff_XMM8_Da;
      if (fVar6 < fVar10) {
        fVar8 = unaff_XMM9_Da;
      }
      fVar7 = fVar7 + (fVar10 - fVar7) * fVar8;
      fVar10 = (fVar7 - fVar6) * fVar8 + fVar6;
      fVar8 = unaff_XMM8_Da;
      if (fVar10 < fVar11) {
        fVar8 = unaff_XMM9_Da;
      }
      fVar7 = fVar7 + (fVar11 - fVar7) * fVar8;
      fVar11 = (fVar7 - fVar10) * fVar8 + fVar10;
      fVar8 = unaff_XMM8_Da;
      if (fVar11 < fVar12) {
        fVar8 = unaff_XMM9_Da;
      }
      fVar7 = (fVar12 - fVar7) * fVar8 + fVar7;
      *unaff_R15 = fVar7;
      unaff_XMM7_Da = (fVar7 - fVar11) * fVar8 + fVar11;
      param_6._0_4_ = fVar6 * unaff_XMM15_Da;
      param_6._4_4_ = fVar10 * unaff_XMM15_Da;
      param_7._0_4_ = fVar11 * unaff_XMM15_Da;
      param_7._4_4_ = unaff_XMM7_Da * unaff_XMM15_Da;
      param_8._0_4_ = fVar6;
      param_8._4_4_ = fVar10;
      param_9._0_4_ = fVar11;
      param_9._4_4_ = unaff_XMM7_Da;
      uVar9 = SystemCore_eaa70(&param_6,&local_buffer_00000020,fVar11,fVar11,param_1);
      unaff_RSI = unaff_RSI + 4;
      fVar8 = *unaff_RBP;
      fVar12 = unaff_RBP[1];
      fVar1 = unaff_RBP[2];
      fVar2 = unaff_RBP[3];
      unaff_RBP = unaff_RBP + 4;
      unaff_R14D = unaff_R14D + 4;
      iVar5 = iVar5 + 4;
      *unaff_RBX = (float)((uint)(uVar9 ^ 0x3f8000003f800000) & -(uint)(param_4 < fVar6) ^
                          0x3f800000) * unaff_XMM11_Da * fVar8;
      unaff_RBX[1] = (float)((uint)((uVar9 ^ 0x3f8000003f800000) >> 0x20) &
                             -(uint)(param_4 < fVar10) ^ 0x3f800000) * unaff_XMM11_Da * fVar12;
      unaff_RBX[2] = (float)((extraout_XMM0_Dc ^ 0x3f800000) & -(uint)(param_4 < fVar11) ^
                            0x3f800000) * unaff_XMM11_Da * fVar1;
      unaff_RBX[3] = (float)((extraout_XMM0_Dd ^ 0x3f800000) & -(uint)(param_4 < unaff_XMM7_Da) ^
                            0x3f800000) * unaff_XMM11_Da * fVar2;
      unaff_RBX = unaff_RBX + 4;
      param_3 = local_var_170;
      fVar8 = local_var_190;
    } while (iVar5 < unaff_EDI);
  }
  *unaff_R13 = unaff_XMM7_Da;
  if (unaff_R14D < unaff_EDI) {
    fVar7 = *unaff_R15;
    lVar4 = (int64_t)unaff_RSI - (int64_t)unaff_RBX;
    lVar3 = (int64_t)unaff_RBP - (int64_t)unaff_RBX;
    uVar9 = (uint64_t)(uint)(unaff_EDI - unaff_R14D);
    do {
      fVar6 = *(float *)(lVar4 + (int64_t)unaff_RBX);
      fVar6 = fVar6 * fVar6;
      fVar10 = unaff_XMM8_Da;
      if (unaff_XMM7_Da < fVar6) {
        fVar10 = unaff_XMM9_Da;
      }
      fVar7 = fVar7 + (fVar6 - fVar7) * fVar10;
      unaff_XMM7_Da = (fVar7 - unaff_XMM7_Da) * fVar10 + unaff_XMM7_Da;
      fVar6 = unaff_XMM11_Da;
      if (fVar8 < unaff_XMM7_Da) {
        fVar8 = (float)powf(unaff_XMM7_Da * unaff_XMM15_Da,param_3);
        fVar6 = fVar8 * unaff_XMM11_Da;
        fVar8 = local_var_190;
      }
      *unaff_RBX = fVar6 * *(float *)((int64_t)unaff_RBX + lVar3);
      unaff_RBX = unaff_RBX + 1;
      uVar9 = uVar9 - 1;
      param_3 = local_var_170;
    } while (uVar9 != 0);
    *unaff_R13 = unaff_XMM7_Da;
    *unaff_R15 = fVar7;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(param_10 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_e99f6(int32_t param_1)
void SystemCore_e99f6(int32_t param_1)
{
  float fVar1;
  float fVar2;
  float *unaff_RBX;
  float *unaff_RBP;
  int64_t lVar3;
  float *unaff_RSI;
  int64_t lVar4;
  int unaff_EDI;
  int64_t in_R11;
  int iVar5;
  uint64_t unaff_R12;
  float *unaff_R13;
  int unaff_R14D;
  float *unaff_R15;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  uint64_t uVar9;
  float fVar11;
  uint extraout_XMM0_Dc;
  float fVar12;
  uint extraout_XMM0_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM12_Db;
  float unaff_XMM12_Dc;
  float unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM13_Db;
  float unaff_XMM13_Dc;
  float unaff_XMM13_Dd;
  float unaff_XMM14_Da;
  float unaff_XMM14_Db;
  float unaff_XMM14_Dc;
  float unaff_XMM14_Dd;
  float unaff_XMM15_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  uint64_t local_buffer_50;
  int32_t local_var_170;
  float local_var_190;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
  iVar5 = unaff_R14D + 3;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  fVar7 = *unaff_R15;
  do {
    fVar6 = *unaff_RSI * *unaff_RSI;
    fVar10 = unaff_RSI[1] * unaff_RSI[1];
    fVar11 = unaff_RSI[2] * unaff_RSI[2];
    fVar12 = unaff_RSI[3] * unaff_RSI[3];
    fVar8 = unaff_XMM8_Da;
    if (unaff_XMM7_Da < fVar6) {
      fVar8 = unaff_XMM9_Da;
    }
    fVar7 = (fVar6 - fVar7) * fVar8 + fVar7;
    fVar6 = (fVar7 - unaff_XMM7_Da) * fVar8 + unaff_XMM7_Da;
    fVar8 = unaff_XMM8_Da;
    if (fVar6 < fVar10) {
      fVar8 = unaff_XMM9_Da;
    }
    fVar7 = fVar7 + (fVar10 - fVar7) * fVar8;
    fVar10 = (fVar7 - fVar6) * fVar8 + fVar6;
    fVar8 = unaff_XMM8_Da;
    if (fVar10 < fVar11) {
      fVar8 = unaff_XMM9_Da;
    }
    fVar7 = fVar7 + (fVar11 - fVar7) * fVar8;
    fVar11 = (fVar7 - fVar10) * fVar8 + fVar10;
    fVar8 = unaff_XMM8_Da;
    if (fVar11 < fVar12) {
      fVar8 = unaff_XMM9_Da;
    }
    fVar7 = (fVar12 - fVar7) * fVar8 + fVar7;
    *unaff_R15 = fVar7;
    unaff_XMM7_Da = (fVar7 - fVar11) * fVar8 + fVar11;
    fStack0000000000000030 = fVar6 * unaff_XMM12_Da;
    fStack0000000000000034 = fVar10 * unaff_XMM12_Db;
    fStack0000000000000038 = fVar11 * unaff_XMM12_Dc;
    fStack000000000000003c = unaff_XMM7_Da * unaff_XMM12_Dd;
    fStack0000000000000040 = fVar6;
    fStack0000000000000044 = fVar10;
    fStack0000000000000048 = fVar11;
    fStack000000000000004c = unaff_XMM7_Da;
    uVar9 = SystemCore_eaa70(&local_buffer_00000030,&local_buffer_00000020,fVar11,fVar11,param_1);
    unaff_RSI = unaff_RSI + 4;
    fVar8 = *unaff_RBP;
    fVar12 = unaff_RBP[1];
    fVar1 = unaff_RBP[2];
    fVar2 = unaff_RBP[3];
    unaff_RBP = unaff_RBP + 4;
    unaff_R14D = unaff_R14D + 4;
    iVar5 = iVar5 + 4;
    *unaff_RBX = (float)((uint)(uVar9 ^ 0x3f8000003f800000) & -(uint)(unaff_XMM13_Da < fVar6) ^
                        0x3f800000) * unaff_XMM14_Da * fVar8;
    unaff_RBX[1] = (float)((uint)((uVar9 ^ 0x3f8000003f800000) >> 0x20) &
                           -(uint)(unaff_XMM13_Db < fVar10) ^ 0x3f800000) * unaff_XMM14_Db * fVar12;
    unaff_RBX[2] = (float)((extraout_XMM0_Dc ^ 0x3f800000) & -(uint)(unaff_XMM13_Dc < fVar11) ^
                          0x3f800000) * unaff_XMM14_Dc * fVar1;
    unaff_RBX[3] = (float)((extraout_XMM0_Dd ^ 0x3f800000) & -(uint)(unaff_XMM13_Dd < unaff_XMM7_Da)
                          ^ 0x3f800000) * unaff_XMM14_Dd * fVar2;
    unaff_RBX = unaff_RBX + 4;
  } while (iVar5 < unaff_EDI);
  *unaff_R13 = unaff_XMM7_Da;
  if (unaff_R14D < unaff_EDI) {
    fVar7 = *unaff_R15;
    lVar4 = (int64_t)unaff_RSI - (int64_t)unaff_RBX;
    lVar3 = (int64_t)unaff_RBP - (int64_t)unaff_RBX;
    uVar9 = (uint64_t)(uint)(unaff_EDI - unaff_R14D);
    fVar8 = local_var_190;
    do {
      fVar6 = *(float *)(lVar4 + (int64_t)unaff_RBX);
      fVar6 = fVar6 * fVar6;
      fVar10 = unaff_XMM8_Da;
      if (unaff_XMM7_Da < fVar6) {
        fVar10 = unaff_XMM9_Da;
      }
      fVar7 = fVar7 + (fVar6 - fVar7) * fVar10;
      unaff_XMM7_Da = (fVar7 - unaff_XMM7_Da) * fVar10 + unaff_XMM7_Da;
      fVar6 = unaff_XMM11_Da;
      if (fVar8 < unaff_XMM7_Da) {
        fVar8 = (float)powf(unaff_XMM7_Da * unaff_XMM15_Da,local_var_170);
        fVar6 = fVar8 * unaff_XMM11_Da;
        fVar8 = local_var_190;
      }
      *unaff_RBX = fVar6 * *(float *)((int64_t)unaff_RBX + lVar3);
      unaff_RBX = unaff_RBX + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    *unaff_R13 = unaff_XMM7_Da;
    *unaff_R15 = fVar7;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_e9b98(uint64_t param_1,uint64_t param_2,int32_t param_3,float param_4)
void SystemCore_e9b98(uint64_t param_1,uint64_t param_2,int32_t param_3,float param_4)
{
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar1;
  int64_t unaff_RSI;
  int64_t lVar2;
  int unaff_EDI;
  uint64_t uVar3;
  float *unaff_R13;
  int unaff_R14D;
  float *unaff_R15;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM15_Da;
  uint64_t local_buffer_50;
  int32_t local_var_170;
  float local_var_190;
  *unaff_R13 = unaff_XMM7_Da;
  if (unaff_R14D < unaff_EDI) {
    fVar6 = *unaff_R15;
    lVar2 = unaff_RSI - (int64_t)unaff_RBX;
    lVar1 = unaff_RBP - (int64_t)unaff_RBX;
    uVar3 = (uint64_t)(uint)(unaff_EDI - unaff_R14D);
    do {
      fVar4 = *(float *)(lVar2 + (int64_t)unaff_RBX);
      fVar4 = fVar4 * fVar4;
      fVar5 = unaff_XMM8_Da;
      if (unaff_XMM7_Da < fVar4) {
        fVar5 = unaff_XMM9_Da;
      }
      fVar6 = fVar6 + (fVar4 - fVar6) * fVar5;
      unaff_XMM7_Da = (fVar6 - unaff_XMM7_Da) * fVar5 + unaff_XMM7_Da;
      fVar4 = unaff_XMM11_Da;
      if (param_4 < unaff_XMM7_Da) {
        fVar4 = (float)powf(unaff_XMM7_Da * unaff_XMM15_Da,param_3);
        fVar4 = fVar4 * unaff_XMM11_Da;
        param_4 = local_var_190;
      }
      *unaff_RBX = fVar4 * *(float *)((int64_t)unaff_RBX + lVar1);
      unaff_RBX = unaff_RBX + 1;
      uVar3 = uVar3 - 1;
      param_3 = local_var_170;
    } while (uVar3 != 0);
    *unaff_R13 = unaff_XMM7_Da;
    *unaff_R15 = fVar6;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_e9bbf(uint64_t param_1,uint64_t param_2,int32_t param_3,float param_4)
void SystemCore_e9bbf(uint64_t param_1,uint64_t param_2,int32_t param_3,float param_4)
{
  float *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar1;
  int64_t unaff_RSI;
  int64_t lVar2;
  int unaff_EDI;
  uint64_t uVar3;
  float *unaff_R13;
  int unaff_R14D;
  float *unaff_R15;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM15_Da;
  uint64_t local_buffer_50;
  int32_t local_var_170;
  float local_var_190;
  fVar6 = *unaff_R15;
  lVar2 = unaff_RSI - (int64_t)unaff_RBX;
  lVar1 = unaff_RBP - (int64_t)unaff_RBX;
  uVar3 = (uint64_t)(uint)(unaff_EDI - unaff_R14D);
  do {
    fVar4 = *(float *)(lVar2 + (int64_t)unaff_RBX);
    fVar4 = fVar4 * fVar4;
    fVar5 = unaff_XMM8_Da;
    if (unaff_XMM7_Da < fVar4) {
      fVar5 = unaff_XMM9_Da;
    }
    fVar6 = fVar6 + (fVar4 - fVar6) * fVar5;
    unaff_XMM7_Da = (fVar6 - unaff_XMM7_Da) * fVar5 + unaff_XMM7_Da;
    fVar4 = unaff_XMM11_Da;
    if (param_4 < unaff_XMM7_Da) {
      fVar4 = (float)powf(unaff_XMM7_Da * unaff_XMM15_Da,param_3);
      fVar4 = fVar4 * unaff_XMM11_Da;
      param_4 = local_var_190;
    }
    *unaff_RBX = fVar4 * *(float *)((int64_t)unaff_RBX + lVar1);
    unaff_RBX = unaff_RBX + 1;
    uVar3 = uVar3 - 1;
    param_3 = local_var_170;
  } while (uVar3 != 0);
  *unaff_R13 = unaff_XMM7_Da;
  *unaff_R15 = fVar6;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address