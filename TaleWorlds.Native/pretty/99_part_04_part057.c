#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part057.c - 3 个函数

// 函数: void FUN_1802b880c(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_1802b880c(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9)

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
  float *pfVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int32_t *unaff_RBP;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar20;
  int in_R10D;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  int32_t uVar21;
  int32_t in_XMM4_Da;
  int32_t unaff_XMM11_Da;
  
  unaff_RBP[-0xc] = param_1;
  pfVar17 = (float *)(unaff_RBP + -6);
  unaff_RBP[-4] = param_1;
  lVar18 = 4;
  unaff_RBP[4] = param_1;
  unaff_RBP[0xc] = param_1;
  *(uint64_t *)(unaff_RDI + 0x10) = 0x4cbebc204cbebc20;
  *(uint64_t *)(unaff_RDI + 0x18) = 0x7f7fffff4cbebc20;
  *(int32_t *)(unaff_RDI + 0x40) = unaff_ESI;
  unaff_RBP[-0xb] = param_2;
  unaff_RBP[5] = param_2;
  unaff_RBP[9] = param_2;
  unaff_RBP[0x11] = param_2;
  *(uint64_t *)(unaff_RDI + 0x30) = 0;
  *(uint64_t *)(unaff_RDI + 0x38) = 0x7f7fffff00000000;
  unaff_RBP[-10] = param_3;
  unaff_RBP[-8] = param_4;
  unaff_RBP[-7] = in_XMM4_Da;
  unaff_RBP[-6] = unaff_XMM11_Da;
  unaff_RBP[-3] = in_XMM4_Da;
  unaff_RBP[-2] = param_3;
  *unaff_RBP = param_4;
  unaff_RBP[1] = in_XMM4_Da;
  unaff_RBP[2] = param_3;
  unaff_RBP[6] = unaff_XMM11_Da;
  unaff_RBP[8] = param_4;
  unaff_RBP[10] = unaff_XMM11_Da;
  unaff_RBP[0xd] = in_XMM4_Da;
  unaff_RBP[0xe] = unaff_XMM11_Da;
  unaff_RBP[0x10] = param_4;
  unaff_RBP[0x12] = param_3;
  *(uint64_t *)(unaff_RDI + 0x20) = 0xccbebc20ccbebc20;
  *(uint64_t *)(unaff_RDI + 0x28) = 0x7f7fffffccbebc20;
  do {
    fVar1 = pfVar17[-6];
    fVar5 = *(float *)(unaff_RDI + 0xb4);
    fVar6 = *(float *)(unaff_RDI + 0xb8);
    fVar7 = *(float *)(unaff_RDI + 0xbc);
    fVar8 = *(float *)(unaff_RDI + 0xc4);
    fVar9 = *(float *)(unaff_RDI + 200);
    fVar10 = *(float *)(unaff_RDI + 0xcc);
    fVar2 = pfVar17[-5];
    fVar3 = pfVar17[-4];
    fVar11 = *(float *)(unaff_RDI + 0xd4);
    fVar12 = *(float *)(unaff_RDI + 0xd8);
    fVar13 = *(float *)(unaff_RDI + 0xdc);
    fVar14 = *(float *)(unaff_RDI + 0xe4);
    fVar15 = *(float *)(unaff_RDI + 0xe8);
    fVar16 = *(float *)(unaff_RDI + 0xec);
    param_5._0_4_ =
         *(float *)(unaff_RDI + 0xb0) * fVar1 + *(float *)(unaff_RDI + 0xc0) * fVar2 +
         *(float *)(unaff_RDI + 0xd0) * fVar3 + *(float *)(unaff_RDI + 0xe0);
    fVar4 = *(float *)(unaff_RDI + 0x20);
    pfVar17[-6] = (float)param_5;
    pfVar17[-5] = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    pfVar17[-4] = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    pfVar17[-3] = fVar7 * fVar1 + fVar10 * fVar2 + fVar13 * fVar3 + fVar16;
    param_8._0_4_ = (float)param_5;
    if ((float)param_5 < fVar4) {
      param_8._0_4_ = fVar4;
    }
    param_5._4_4_ = pfVar17[-5];
    param_8._4_4_ = param_5._4_4_;
    if (param_5._4_4_ < *(float *)(unaff_RDI + 0x24)) {
      param_8._4_4_ = *(float *)(unaff_RDI + 0x24);
    }
    param_6._0_4_ = pfVar17[-4];
    param_9._0_4_ = (float)param_6;
    if ((float)param_6 < *(float *)(unaff_RDI + 0x28)) {
      param_9._0_4_ = *(float *)(unaff_RDI + 0x28);
    }
    *(uint64_t *)(unaff_RDI + 0x20) = CONCAT44(param_8._4_4_,(float)param_8);
    *(uint64_t *)(unaff_RDI + 0x28) = CONCAT44(param_9._4_4_,(float)param_9);
    if (*(float *)(unaff_RDI + 0x10) < (float)param_5) {
      param_5._0_4_ = *(float *)(unaff_RDI + 0x10);
    }
    if (*(float *)(unaff_RDI + 0x14) < param_5._4_4_) {
      param_5._4_4_ = *(float *)(unaff_RDI + 0x14);
    }
    if (*(float *)(unaff_RDI + 0x18) < (float)param_6) {
      param_6._0_4_ = *(float *)(unaff_RDI + 0x18);
    }
    *(uint64_t *)(unaff_RDI + 0x10) = CONCAT44(param_5._4_4_,(float)param_5);
    *(uint64_t *)(unaff_RDI + 0x18) = CONCAT44(param_6._4_4_,(float)param_6);
    fVar1 = pfVar17[-2];
    fVar5 = *(float *)(unaff_RDI + 0xb4);
    fVar6 = *(float *)(unaff_RDI + 0xb8);
    fVar7 = *(float *)(unaff_RDI + 0xbc);
    fVar8 = *(float *)(unaff_RDI + 0xc4);
    fVar9 = *(float *)(unaff_RDI + 200);
    fVar10 = *(float *)(unaff_RDI + 0xcc);
    fVar2 = pfVar17[-1];
    fVar3 = *pfVar17;
    fVar11 = *(float *)(unaff_RDI + 0xd4);
    fVar12 = *(float *)(unaff_RDI + 0xd8);
    fVar13 = *(float *)(unaff_RDI + 0xdc);
    fVar14 = *(float *)(unaff_RDI + 0xe4);
    fVar15 = *(float *)(unaff_RDI + 0xe8);
    fVar16 = *(float *)(unaff_RDI + 0xec);
    param_5._0_4_ =
         *(float *)(unaff_RDI + 0xb0) * fVar1 + *(float *)(unaff_RDI + 0xc0) * fVar2 +
         *(float *)(unaff_RDI + 0xd0) * fVar3 + *(float *)(unaff_RDI + 0xe0);
    fVar4 = *(float *)(unaff_RDI + 0x20);
    pfVar17[-2] = (float)param_5;
    pfVar17[-1] = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    *pfVar17 = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    pfVar17[1] = fVar7 * fVar1 + fVar10 * fVar2 + fVar13 * fVar3 + fVar16;
    param_8._0_4_ = (float)param_5;
    if ((float)param_5 < fVar4) {
      param_8._0_4_ = fVar4;
    }
    param_5._4_4_ = pfVar17[-1];
    param_8._4_4_ = param_5._4_4_;
    if (param_5._4_4_ < *(float *)(unaff_RDI + 0x24)) {
      param_8._4_4_ = *(float *)(unaff_RDI + 0x24);
    }
    param_6._0_4_ = *pfVar17;
    param_9._0_4_ = (float)param_6;
    if ((float)param_6 < *(float *)(unaff_RDI + 0x28)) {
      param_9._0_4_ = *(float *)(unaff_RDI + 0x28);
    }
    *(uint64_t *)(unaff_RDI + 0x20) = CONCAT44(param_8._4_4_,(float)param_8);
    *(uint64_t *)(unaff_RDI + 0x28) = CONCAT44(param_9._4_4_,(float)param_9);
    if (*(float *)(unaff_RDI + 0x10) < (float)param_5) {
      param_5._0_4_ = *(float *)(unaff_RDI + 0x10);
    }
    if (*(float *)(unaff_RDI + 0x14) < param_5._4_4_) {
      param_5._4_4_ = *(float *)(unaff_RDI + 0x14);
    }
    if (*(float *)(unaff_RDI + 0x18) < (float)param_6) {
      param_6._0_4_ = *(float *)(unaff_RDI + 0x18);
    }
    pfVar17 = pfVar17 + 8;
    *(float *)(unaff_RDI + 0x10) = (float)param_5;
    *(float *)(unaff_RDI + 0x14) = param_5._4_4_;
    *(float *)(unaff_RDI + 0x18) = (float)param_6;
    *(int32_t *)(unaff_RDI + 0x1c) = param_6._4_4_;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  uVar21 = FUN_1800b9f60(unaff_RDI + 0x10);
  lVar18 = SUB168(SEXT816(unaff_R13) * SEXT816(unaff_R15[1] - *unaff_R15),8);
  uVar20 = (uint64_t)in_R10D;
  uVar19 = (lVar18 >> 5) - (lVar18 >> 0x3f);
  if (uVar19 < uVar20) {
    FUN_1802beaf0(uVar21,uVar20 - uVar19);
  }
  else {
    unaff_R15[1] = uVar20 * 0x70 + *unaff_R15;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x14) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802b8b16(void)
void FUN_1802b8b16(void)

{
  int64_t unaff_RBP;
  
  FUN_1802beaf0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x50) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b8b50(uint64_t *param_1)
void FUN_1802b8b50(uint64_t *param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  
  puVar8 = (uint64_t *)param_1[1];
  if (puVar8 < (uint64_t *)param_1[2]) {
                    // WARNING: Subroutine does not return
    memset(puVar8,0,0x70);
  }
  puVar6 = (uint64_t *)*param_1;
  lVar7 = ((int64_t)puVar8 - (int64_t)puVar6) / 0x70;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) {
      puVar5 = (uint64_t *)0x0;
      goto joined_r0x0001802b8c01;
    }
  }
  puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar7 * 0x70,(char)param_1[3]);
  puVar6 = (uint64_t *)*param_1;
  puVar8 = (uint64_t *)param_1[1];
joined_r0x0001802b8c01:
  for (; puVar6 != puVar8; puVar6 = puVar6 + 0xe) {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    uVar4 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar4;
    uVar4 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar4;
    uVar4 = puVar6[7];
    puVar5[6] = puVar6[6];
    puVar5[7] = uVar4;
    uVar4 = puVar6[9];
    puVar5[8] = puVar6[8];
    puVar5[9] = uVar4;
    uVar4 = puVar6[0xb];
    puVar5[10] = puVar6[10];
    puVar5[0xb] = uVar4;
    uVar1 = *(int32_t *)((int64_t)puVar6 + 100);
    uVar2 = *(int32_t *)(puVar6 + 0xd);
    uVar3 = *(int32_t *)((int64_t)puVar6 + 0x6c);
    *(int32_t *)(puVar5 + 0xc) = *(int32_t *)(puVar6 + 0xc);
    *(int32_t *)((int64_t)puVar5 + 100) = uVar1;
    *(int32_t *)(puVar5 + 0xd) = uVar2;
    *(int32_t *)((int64_t)puVar5 + 0x6c) = uVar3;
    puVar5 = puVar5 + 0xe;
  }
                    // WARNING: Subroutine does not return
  memset(puVar5,0,0x70);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




