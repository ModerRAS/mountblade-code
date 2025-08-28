#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part073.c - 6 个函数

// 函数: void FUN_180707a74(void)
void FUN_180707a74(void)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  float *pfVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t unaff_RBP;
  int iVar12;
  int iVar13;
  uint64_t uVar14;
  uint uVar15;
  int unaff_R12D;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t *in_stack_000000d8;
  uint64_t uVar16;
  
  *(int32_t *)in_stack_000000d8 = 0;
  iVar9 = *(int *)(unaff_RBP + 0x2054);
  iVar5 = *(int *)(unaff_RBP + 0x2050);
  iVar4 = iVar5 - iVar9;
  iVar12 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar12 = iVar4;
  }
  uVar14 = 0;
  iVar4 = 0;
  if (((*(int *)(unaff_RBP + 8) / 0x32 < unaff_R12D) && (iVar9 != iVar5)) &&
     (iVar9 = iVar9 + 1, iVar9 == 100)) {
    iVar9 = 0;
  }
  iVar11 = 1;
  iVar13 = iVar9 + -1;
  if (iVar9 != iVar5) {
    iVar13 = iVar9;
  }
  if (iVar13 < 0) {
    iVar13 = 99;
  }
  uVar10 = (uint64_t)iVar13;
  lVar6 = uVar10 * 0x38;
  puVar2 = (uint64_t *)(lVar6 + 0x206c + unaff_RBP);
  uVar3 = puVar2[1];
  *in_stack_000000d8 = *puVar2;
  in_stack_000000d8[1] = uVar3;
  puVar2 = (uint64_t *)(lVar6 + 0x207c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[2] = *puVar2;
  in_stack_000000d8[3] = uVar3;
  puVar2 = (uint64_t *)(lVar6 + 0x208c + unaff_RBP);
  uVar3 = puVar2[1];
  in_stack_000000d8[4] = *puVar2;
  in_stack_000000d8[5] = uVar3;
  in_stack_000000d8[6] = *(uint64_t *)(lVar6 + 0x209c + unaff_RBP);
  fVar20 = *(float *)((int64_t)in_stack_000000d8 + 4);
  uVar16 = uVar14;
  fVar18 = fVar20;
  do {
    bVar17 = uVar10 != 99;
    uVar1 = uVar10 + 1;
    uVar10 = uVar14;
    if (bVar17) {
      uVar10 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar10 == (int64_t)*(int *)(unaff_RBP + 0x2050)) break;
    iVar11 = iVar11 + 1;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (uint64_t)uVar15;
    fVar19 = *(float *)(uVar10 * 0x38 + 0x2070 + unaff_RBP);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar15 < 3);
  fVar18 = fVar20 / (float)iVar11;
  if (fVar20 / (float)iVar11 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((int64_t)in_stack_000000d8 + 4) = fVar18;
  *(int *)(unaff_RBP + 0x2058) =
       *(int *)(unaff_RBP + 0x2058) + unaff_R12D / (*(int *)(unaff_RBP + 8) / 400);
  iVar9 = *(int *)(unaff_RBP + 0x2058);
  iVar5 = *(int *)(unaff_RBP + 0x2054);
  if (7 < iVar9) {
    do {
      iVar9 = iVar9 + -8;
      iVar5 = iVar5 + 1;
    } while (7 < iVar9);
    *(int *)(unaff_RBP + 0x2054) = iVar5;
    *(int *)(unaff_RBP + 0x2058) = iVar9;
  }
  if (99 < iVar5) {
    *(int *)(unaff_RBP + 0x2054) = iVar5 + -100;
  }
  fVar20 = 0.0;
  iVar9 = iVar12 + -1;
  if (iVar12 + -1 < 1) {
    iVar9 = iVar4;
  }
  lVar6 = (int64_t)(100 - iVar9);
  if (3 < lVar6) {
    pfVar8 = (float *)(unaff_RBP + 0x1eb4);
    lVar7 = (lVar6 - 4U >> 2) + 1;
    iVar4 = (int)lVar7 * 4;
    uVar14 = lVar7 * 4;
    do {
      fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
      pfVar8 = pfVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((int64_t)uVar14 < lVar6) {
    lVar6 = lVar6 - uVar14;
    pfVar8 = (float *)(unaff_RBP + 0x1eb0 + uVar14 * 4);
    iVar4 = iVar4 + (int)lVar6;
    do {
      fVar20 = fVar20 + *pfVar8;
      pfVar8 = pfVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = (int64_t)iVar4;
  if (lVar6 < 100) {
    if (3 < 100 - lVar6) {
      pfVar8 = (float *)(unaff_RBP + 0x1d24 + lVar6 * 4);
      lVar7 = (0x60U - lVar6 >> 2) + 1;
      lVar6 = lVar6 + lVar7 * 4;
      do {
        fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
        pfVar8 = pfVar8 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 < 100) {
      lVar7 = 100 - lVar6;
      pfVar8 = (float *)(unaff_RBP + 0x1d20 + lVar6 * 4);
      do {
        fVar20 = fVar20 + *pfVar8;
        pfVar8 = pfVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  *(float *)((int64_t)in_stack_000000d8 + 0x14) =
       (1.0 - fVar20) * *(float *)(unaff_RBP + 0x2040) + fVar20 * *(float *)(unaff_RBP + 0x2044);
  return;
}



float FUN_180707aa0(float *param_1,int64_t param_2,int64_t param_3,int param_4)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  float *pfVar4;
  int64_t lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = 0.0;
  lVar5 = (int64_t)(param_4 / 2);
  lVar2 = 0;
  if (3 < lVar5) {
    pfVar4 = (float *)(param_2 + 8);
    lVar3 = (lVar5 - 4U >> 2) + 1;
    pfVar6 = (float *)(param_3 + 8);
    lVar2 = lVar3 * 4;
    do {
      fVar1 = param_1[1];
      fVar7 = (pfVar6[-2] - *param_1) * 0.6074371;
      fVar11 = *param_1 + fVar7;
      *param_1 = fVar7 + pfVar6[-2];
      fVar7 = pfVar6[-1];
      fVar8 = (fVar7 - fVar1) * 0.15063;
      fVar9 = (-fVar7 - param_1[2]) * 0.15063;
      fVar10 = param_1[2] + fVar11 + fVar9;
      param_1[1] = fVar8 + fVar7;
      param_1[2] = fVar9 - fVar7;
      pfVar4[-2] = (fVar1 + fVar11 + fVar8) * 0.5;
      fVar1 = param_1[1];
      fVar7 = (*pfVar6 - *param_1) * 0.6074371;
      fVar12 = *param_1 + fVar7;
      *param_1 = fVar7 + *pfVar6;
      fVar7 = pfVar6[1];
      fVar8 = (fVar7 - fVar1) * 0.15063;
      fVar9 = (-fVar7 - param_1[2]) * 0.15063;
      fVar11 = param_1[2] + fVar12 + fVar9;
      param_1[1] = fVar8 + fVar7;
      param_1[2] = fVar9 - fVar7;
      pfVar4[-1] = (fVar1 + fVar12 + fVar8) * 0.5;
      fVar1 = param_1[1];
      fVar7 = (pfVar6[2] - *param_1) * 0.6074371;
      fVar13 = *param_1 + fVar7;
      *param_1 = fVar7 + pfVar6[2];
      fVar7 = pfVar6[3];
      fVar8 = (fVar7 - fVar1) * 0.15063;
      param_1[1] = fVar8 + fVar7;
      fVar9 = (-fVar7 - param_1[2]) * 0.15063;
      fVar12 = param_1[2] + fVar13 + fVar9;
      param_1[2] = fVar9 - fVar7;
      *pfVar4 = (fVar1 + fVar13 + fVar8) * 0.5;
      fVar1 = param_1[1];
      fVar7 = (pfVar6[4] - *param_1) * 0.6074371;
      fVar14 = *param_1 + fVar7;
      *param_1 = fVar7 + pfVar6[4];
      fVar7 = pfVar6[5];
      pfVar6 = pfVar6 + 8;
      fVar8 = (fVar7 - fVar1) * 0.15063;
      fVar9 = (-fVar7 - param_1[2]) * 0.15063;
      fVar13 = param_1[2] + fVar14 + fVar9;
      param_1[1] = fVar8 + fVar7;
      param_1[2] = fVar9 - fVar7;
      pfVar4[1] = (fVar1 + fVar14 + fVar8) * 0.5;
      pfVar4 = pfVar4 + 4;
      fVar15 = fVar15 + fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  for (; lVar2 < lVar5; lVar2 = lVar2 + 1) {
    fVar1 = *(float *)(param_3 + lVar2 * 8);
    fVar7 = param_1[1];
    fVar8 = (fVar1 - *param_1) * 0.6074371;
    fVar11 = *param_1 + fVar8;
    *param_1 = fVar8 + fVar1;
    fVar1 = *(float *)(param_3 + 4 + lVar2 * 8);
    fVar8 = (fVar1 - fVar7) * 0.15063;
    fVar9 = (-fVar1 - param_1[2]) * 0.15063;
    fVar10 = param_1[2] + fVar11 + fVar9;
    param_1[1] = fVar8 + fVar1;
    param_1[2] = fVar9 - fVar1;
    *(float *)(param_2 + lVar2 * 4) = (fVar7 + fVar11 + fVar8) * 0.5;
    fVar15 = fVar15 + fVar10 * fVar10;
  }
  return fVar15;
}



float FUN_180707b03(float *param_1,uint64_t param_2,int64_t param_3,int64_t param_4)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  float *pfVar4;
  int64_t in_R10;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  pfVar4 = (float *)(in_R10 + 8);
  lVar3 = (param_2 >> 2) + 1;
  pfVar5 = (float *)(param_3 + 8);
  lVar2 = lVar3 * 4;
  do {
    fVar1 = param_1[1];
    fVar6 = (pfVar5[-2] - *param_1) * unaff_XMM9_Da;
    fVar10 = *param_1 + fVar6;
    *param_1 = fVar6 + pfVar5[-2];
    fVar6 = pfVar5[-1];
    fVar7 = (fVar6 - fVar1) * unaff_XMM7_Da;
    fVar8 = ((float)((uint)fVar6 ^ unaff_XMM8_Da) - param_1[2]) * unaff_XMM7_Da;
    fVar9 = param_1[2] + fVar10 + fVar8;
    param_1[1] = fVar7 + fVar6;
    param_1[2] = fVar8 - fVar6;
    pfVar4[-2] = (fVar1 + fVar10 + fVar7) * unaff_XMM10_Da;
    fVar1 = param_1[1];
    fVar6 = (*pfVar5 - *param_1) * unaff_XMM9_Da;
    fVar11 = *param_1 + fVar6;
    *param_1 = fVar6 + *pfVar5;
    fVar6 = pfVar5[1];
    fVar7 = (fVar6 - fVar1) * unaff_XMM7_Da;
    fVar8 = ((float)((uint)fVar6 ^ unaff_XMM8_Da) - param_1[2]) * unaff_XMM7_Da;
    fVar10 = param_1[2] + fVar11 + fVar8;
    param_1[1] = fVar7 + fVar6;
    param_1[2] = fVar8 - fVar6;
    pfVar4[-1] = (fVar1 + fVar11 + fVar7) * unaff_XMM10_Da;
    fVar1 = param_1[1];
    fVar6 = (pfVar5[2] - *param_1) * unaff_XMM9_Da;
    fVar12 = *param_1 + fVar6;
    *param_1 = fVar6 + pfVar5[2];
    fVar6 = pfVar5[3];
    fVar7 = (fVar6 - fVar1) * unaff_XMM7_Da;
    param_1[1] = fVar7 + fVar6;
    fVar8 = ((float)((uint)fVar6 ^ unaff_XMM8_Da) - param_1[2]) * unaff_XMM7_Da;
    fVar11 = param_1[2] + fVar12 + fVar8;
    param_1[2] = fVar8 - fVar6;
    *pfVar4 = (fVar1 + fVar12 + fVar7) * unaff_XMM10_Da;
    fVar1 = param_1[1];
    fVar6 = (pfVar5[4] - *param_1) * unaff_XMM9_Da;
    fVar13 = *param_1 + fVar6;
    *param_1 = fVar6 + pfVar5[4];
    fVar6 = pfVar5[5];
    pfVar5 = pfVar5 + 8;
    fVar7 = (fVar6 - fVar1) * unaff_XMM7_Da;
    fVar8 = ((float)((uint)fVar6 ^ unaff_XMM8_Da) - param_1[2]) * unaff_XMM7_Da;
    fVar12 = param_1[2] + fVar13 + fVar8;
    param_1[1] = fVar7 + fVar6;
    param_1[2] = fVar8 - fVar6;
    pfVar4[1] = (fVar1 + fVar13 + fVar7) * unaff_XMM10_Da;
    pfVar4 = pfVar4 + 4;
    unaff_XMM6_Da =
         unaff_XMM6_Da + fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  for (; lVar2 < param_4; lVar2 = lVar2 + 1) {
    fVar1 = *(float *)(param_3 + lVar2 * 8);
    fVar6 = param_1[1];
    fVar7 = (fVar1 - *param_1) * unaff_XMM9_Da;
    fVar10 = *param_1 + fVar7;
    *param_1 = fVar7 + fVar1;
    fVar1 = *(float *)(param_3 + 4 + lVar2 * 8);
    fVar7 = (fVar1 - fVar6) * unaff_XMM7_Da;
    fVar8 = ((float)((uint)fVar1 ^ unaff_XMM8_Da) - param_1[2]) * unaff_XMM7_Da;
    fVar9 = param_1[2] + fVar10 + fVar8;
    param_1[1] = fVar7 + fVar1;
    param_1[2] = fVar8 - fVar1;
    *(float *)(in_R10 + lVar2 * 4) = (fVar6 + fVar10 + fVar7) * unaff_XMM10_Da;
    unaff_XMM6_Da = unaff_XMM6_Da + fVar9 * fVar9;
  }
  return unaff_XMM6_Da;
}



float FUN_180707d35(float *param_1,uint64_t param_2,int64_t param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  int64_t in_RAX;
  int64_t in_R10;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  if (in_RAX < param_4) {
    do {
      fVar1 = *(float *)(param_3 + in_RAX * 8);
      fVar2 = param_1[1];
      fVar3 = (fVar1 - *param_1) * unaff_XMM9_Da;
      fVar6 = *param_1 + fVar3;
      *param_1 = fVar3 + fVar1;
      fVar1 = *(float *)(param_3 + 4 + in_RAX * 8);
      fVar3 = (fVar1 - fVar2) * unaff_XMM7_Da;
      fVar4 = ((float)((uint)fVar1 ^ unaff_XMM8_Da) - param_1[2]) * unaff_XMM7_Da;
      fVar5 = param_1[2] + fVar6 + fVar4;
      param_1[1] = fVar3 + fVar1;
      param_1[2] = fVar4 - fVar1;
      *(float *)(in_R10 + in_RAX * 4) = (fVar2 + fVar6 + fVar3) * unaff_XMM10_Da;
      in_RAX = in_RAX + 1;
      unaff_XMM6_Da = unaff_XMM6_Da + fVar5 * fVar5;
    } while (in_RAX < param_4);
  }
  return unaff_XMM6_Da;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180707df0(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4,int param_5,
void FUN_180707df0(int64_t param_1,int64_t param_2,uint64_t param_3,int param_4,int param_5,
                  int32_t param_6,int32_t param_7,int32_t param_8,uint64_t param_9,
                  uint64_t param_10)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int64_t lVar13;
  int64_t lVar14;
  int8_t auStack_2cc8 [960];
  int8_t auStack_2908 [960];
  int8_t auStack_2548 [3840];
  int8_t auStack_1648 [8];
  float afStack_1640 [936];
  uint64_t uStack_7a0;
  int iStack_778;
  int iStack_770;
  int32_t uStack_768;
  int32_t uStack_760;
  int32_t uStack_758;
  int iStack_750;
  float fStack_74c;
  int iStack_748;
  int iStack_744;
  int32_t uStack_740;
  uint64_t uStack_738;
  float fStack_730;
  float fStack_72c;
  float fStack_728;
  int64_t lStack_718;
  int64_t lStack_710;
  int64_t lStack_708;
  int64_t lStack_700;
  int64_t lStack_6f8;
  float fStack_6f0;
  int64_t lStack_6e8;
  int64_t lStack_6e0;
  int8_t *puStack_6d8;
  int8_t *puStack_6d0;
  uint64_t uStack_6c8;
  int8_t *puStack_6c0;
  uint64_t uStack_6b8;
  int8_t *puStack_6b0;
  uint64_t uStack_f8;
  
  uStack_f8 = GET_SECURITY_COOKIE() ^ (uint64_t)&iStack_748;
  uStack_740 = 0;
  uStack_6b8 = param_10;
  iVar10 = *(int *)(param_1 + 0x1d18);
  iStack_750 = *(int *)(param_1 + 8);
  iVar8 = iVar10 + 1;
  iVar5 = iVar8;
  if (10 < iVar8) {
    iVar5 = 10;
  }
  iVar6 = iVar8;
  if (0x19 < iVar8) {
    iVar6 = 0x19;
  }
  fStack_6f0 = 1.0 / (float)iVar5;
  if (500 < iVar8) {
    iVar8 = 500;
  }
  fStack_728 = 1.0 / (float)iVar6;
  fStack_730 = 1.0 / (float)iVar8;
  if (iStack_750 == 48000) {
    iStack_744 = param_4 / 2;
    param_5 = param_5 / 2;
  }
  else {
    iStack_744 = param_4;
    if (iStack_750 == 16000) {
      iStack_744 = (param_4 * 3) / 2;
      param_5 = (param_5 * 3) / 2;
    }
  }
  iVar8 = iStack_744;
  if (iVar10 < 4) {
    if (*(int *)(param_1 + 4) == 0x800) {
      *(int32_t *)(param_1 + 0x1d00) = 0x3dcccccd;
    }
    else {
      *(int32_t *)(param_1 + 0x1d00) = 0x3f200000;
    }
  }
  uStack_6c8 = *(uint64_t *)(param_2 + 0x58);
  if (iVar10 == 0) {
    *(int32_t *)(param_1 + 0x168c) = 0xf0;
    iVar10 = 0xf0;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x168c);
  }
  iStack_778 = iStack_744;
  if (0x2d0 - iVar10 <= iStack_744) {
    iStack_778 = 0x2d0 - iVar10;
  }
  uStack_758 = param_8;
  uStack_760 = param_7;
  uStack_768 = param_6;
  uStack_7a0 = 0x18070800e;
  iStack_770 = param_5;
  iStack_748 = param_5;
  uStack_738 = param_3;
  lStack_718 = param_1;
  fStack_72c = (float)FUN_1807075c0(param_10,param_3,param_1 + ((int64_t)iVar10 + 0x2d3) * 4,
                                    param_1 + 0x2060);
  fStack_72c = fStack_72c + *(float *)(param_1 + 0x205c);
  iVar8 = *(int *)(param_1 + 0x168c) + iVar8;
  *(float *)(param_1 + 0x205c) = fStack_72c;
  if (0x2cf < iVar8) {
    iVar8 = *(int *)(param_1 + 0x2050);
    lStack_700 = (int64_t)iVar8 * 0x38;
    *(int *)(param_1 + 0x2050) = iVar8 + 1;
    if (99 < iVar8 + 1) {
      *(int *)(param_1 + 0x2050) = iVar8 + -99;
    }
    puStack_6d0 = auStack_1648;
    puStack_6b0 = auStack_2548;
    puStack_6c0 = auStack_2908;
    puStack_6d8 = auStack_2cc8;
    lVar13 = (int64_t)&unknown_var_2100_ptr - param_1;
    lStack_6e0 = (int64_t)&unknown_var_2104_ptr + -param_1;
    lStack_6e8 = (int64_t)&unknown_var_2108_ptr + -param_1;
    lStack_708 = (int64_t)&unknown_var_2112_ptr + -param_1;
    lStack_710 = (int64_t)&unknown_var_2116_ptr - param_1;
    lVar14 = 0x18;
    pfVar7 = (float *)(param_1 + 0xf0c);
    pfVar9 = afStack_1640;
    pfVar11 = &fStack_74c;
    pfVar12 = (float *)(param_1 + 0x1688);
    lStack_6f8 = lVar13;
    do {
      fVar2 = *(float *)((int64_t)pfVar7 + ((int64_t)&unknown_var_8228_ptr - param_1));
      fVar3 = *(float *)((int64_t)pfVar7 + ((int64_t)&unknown_var_8232_ptr - param_1));
      pfVar9[-2] = fVar2 * pfVar7[-0xf0];
      pfVar9[-1] = fVar2 * *pfVar7;
      pfVar11[-1] = fVar2 * pfVar12[-0xf0];
      *pfVar11 = fVar2 * *pfVar12;
      fVar2 = *(float *)((int64_t)pfVar7 + ((int64_t)&unknown_var_8236_ptr - param_1));
      *pfVar9 = fVar3 * pfVar7[-0xef];
      pfVar9[1] = fVar3 * pfVar7[1];
      pfVar11[-3] = fVar3 * pfVar12[-0xf1];
      pfVar11[-2] = fVar3 * pfVar12[-1];
      fVar3 = *(float *)((int64_t)pfVar7 + ((int64_t)&unknown_var_8240_ptr - param_1));
      pfVar9[2] = fVar2 * pfVar7[-0xee];
      pfVar9[3] = fVar2 * pfVar7[2];
      pfVar11[-5] = fVar2 * pfVar12[-0xf2];
      pfVar11[-4] = fVar2 * pfVar12[-2];
      fVar2 = *(float *)(((int64_t)&unknown_var_8244_ptr - param_1) + (int64_t)pfVar7);
      pfVar9[4] = fVar3 * pfVar7[-0xed];
      pfVar9[5] = fVar3 * pfVar7[3];
      pfVar11[-7] = fVar3 * pfVar12[-0xf3];
      pfVar11[-6] = fVar3 * pfVar12[-3];
      fVar3 = *(float *)(lVar13 + -0xf0c + (int64_t)pfVar7);
      pfVar9[6] = fVar2 * pfVar7[-0xec];
      pfVar9[7] = fVar2 * pfVar7[4];
      pfVar11[-9] = fVar2 * pfVar12[-0xf4];
      pfVar11[-8] = fVar2 * pfVar12[-4];
      fVar2 = *(float *)((int64_t)&unknown_var_8252_ptr + -param_1 + (int64_t)pfVar7);
      pfVar9[8] = fVar3 * pfVar7[-0xeb];
      pfVar9[9] = fVar3 * pfVar7[5];
      pfVar11[-0xb] = fVar3 * pfVar12[-0xf5];
      pfVar11[-10] = fVar3 * pfVar12[-5];
      pfVar9[10] = fVar2 * pfVar7[-0xea];
      pfVar9[0xb] = fVar2 * pfVar7[6];
      lVar4 = lStack_710;
      fVar3 = *(float *)((int64_t)&unknown_var_8256_ptr + -param_1 + (int64_t)pfVar7);
      pfVar1 = pfVar7 + 10;
      pfVar11[-0xd] = fVar2 * pfVar12[-0xf6];
      pfVar11[-0xc] = fVar2 * pfVar12[-6];
      fVar2 = *(float *)((int64_t)&unknown_var_8220_ptr + -param_1 + (int64_t)pfVar1);
      pfVar9[0xc] = fVar3 * pfVar7[-0xe9];
      pfVar9[0xd] = fVar3 * pfVar7[7];
      lVar13 = lStack_6f8;
      pfVar11[-0xf] = fVar3 * pfVar12[-0xf7];
      pfVar11[-0xe] = fVar3 * pfVar12[-7];
      fVar3 = *(float *)(lVar4 + -0xf34 + (int64_t)pfVar1);
      pfVar9[0xe] = fVar2 * pfVar7[-0xe8];
      pfVar9[0xf] = fVar2 * pfVar7[8];
      pfVar11[-0x11] = fVar2 * pfVar12[-0xf8];
      pfVar11[-0x10] = fVar2 * pfVar12[-8];
      pfVar9[0x10] = fVar3 * pfVar7[-0xe7];
      pfVar9[0x11] = fVar3 * pfVar7[9];
      pfVar11[-0x13] = fVar3 * pfVar12[-0xf9];
      pfVar11[-0x12] = fVar3 * pfVar12[-9];
      lVar14 = lVar14 + -1;
      pfVar7 = pfVar1;
      pfVar9 = pfVar9 + 0x14;
      pfVar11 = pfVar11 + -0x14;
      pfVar12 = pfVar12 + -10;
    } while (lVar14 != 0);
                    // WARNING: Subroutine does not return
    memmove(lStack_718 + 0xb4c,lStack_718 + 0x12cc,0x3c0);
  }
  *(int *)(param_1 + 0x168c) = iVar8;
                    // WARNING: Subroutine does not return
  uStack_7a0 = 0x18070b5ad;
  SystemSecurityChecker(uStack_f8 ^ (uint64_t)&iStack_748);
}





// 函数: void FUN_18070b610(int32_t *param_1,int32_t param_2)
void FUN_18070b610(int32_t *param_1,int32_t param_2)

{
  int32_t uVar1;
  
  uVar1 = FUN_1807058d0();
  *param_1 = uVar1;
  param_1[2] = param_2;
                    // WARNING: Subroutine does not return
  memset(param_1 + 3,0,(int64_t)param_1 + (0x364c - (int64_t)(param_1 + 3)));
}





// 函数: void FUN_18070b660(int64_t param_1)
void FUN_18070b660(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1 + 0xc,0,(param_1 - (param_1 + 0xc)) + 0x364c);
}





// 函数: void FUN_18070b6a0(int64_t param_1,uint64_t *param_2,int param_3)
void FUN_18070b6a0(int64_t param_1,uint64_t *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  float *pfVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint64_t uVar14;
  uint uVar15;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t uVar16;
  
  iVar9 = *(int *)(param_1 + 0x2054);
  iVar5 = *(int *)(param_1 + 0x2050);
  iVar4 = iVar5 - iVar9;
  iVar12 = iVar4 + 100;
  if (-1 < iVar4) {
    iVar12 = iVar4;
  }
  uVar14 = 0;
  iVar4 = 0;
  if (((*(int *)(param_1 + 8) / 0x32 < param_3) && (iVar9 != iVar5)) &&
     (iVar9 = iVar9 + 1, iVar9 == 100)) {
    iVar9 = 0;
  }
  iVar11 = 1;
  iVar13 = iVar9 + -1;
  if (iVar9 != iVar5) {
    iVar13 = iVar9;
  }
  if (iVar13 < 0) {
    iVar13 = 99;
  }
  uVar10 = (uint64_t)iVar13;
  lVar6 = uVar10 * 0x38;
  puVar2 = (uint64_t *)(lVar6 + 0x206c + param_1);
  uVar3 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar3;
  puVar2 = (uint64_t *)(lVar6 + 0x207c + param_1);
  uVar3 = puVar2[1];
  param_2[2] = *puVar2;
  param_2[3] = uVar3;
  puVar2 = (uint64_t *)(lVar6 + 0x208c + param_1);
  uVar3 = puVar2[1];
  param_2[4] = *puVar2;
  param_2[5] = uVar3;
  param_2[6] = *(uint64_t *)(lVar6 + 0x209c + param_1);
  fVar20 = *(float *)((int64_t)param_2 + 4);
  uVar16 = uVar14;
  fVar18 = fVar20;
  do {
    bVar17 = uVar10 != 99;
    uVar1 = uVar10 + 1;
    uVar10 = uVar14;
    if (bVar17) {
      uVar10 = uVar1;
    }
    fVar19 = fVar18;
    if (uVar10 == (int64_t)*(int *)(param_1 + 0x2050)) break;
    iVar11 = iVar11 + 1;
    uVar15 = (int)uVar16 + 1;
    uVar16 = (uint64_t)uVar15;
    fVar19 = *(float *)(uVar10 * 0x38 + 0x2070 + param_1);
    fVar20 = fVar20 + fVar19;
    if (fVar19 <= fVar18) {
      fVar19 = fVar18;
    }
    fVar18 = fVar19;
  } while ((int)uVar15 < 3);
  fVar18 = fVar20 / (float)iVar11;
  if (fVar20 / (float)iVar11 <= fVar19 - 0.2) {
    fVar18 = fVar19 - 0.2;
  }
  *(float *)((int64_t)param_2 + 4) = fVar18;
  *(int *)(param_1 + 0x2058) = *(int *)(param_1 + 0x2058) + param_3 / (*(int *)(param_1 + 8) / 400);
  iVar9 = *(int *)(param_1 + 0x2058);
  iVar5 = *(int *)(param_1 + 0x2054);
  if (7 < iVar9) {
    do {
      iVar9 = iVar9 + -8;
      iVar5 = iVar5 + 1;
    } while (7 < iVar9);
    *(int *)(param_1 + 0x2054) = iVar5;
    *(int *)(param_1 + 0x2058) = iVar9;
  }
  if (99 < iVar5) {
    *(int *)(param_1 + 0x2054) = iVar5 + -100;
  }
  fVar20 = 0.0;
  iVar9 = iVar12 + -1;
  if (iVar12 + -1 < 1) {
    iVar9 = iVar4;
  }
  lVar6 = (int64_t)(100 - iVar9);
  if (3 < lVar6) {
    pfVar8 = (float *)(param_1 + 0x1eb4);
    lVar7 = (lVar6 - 4U >> 2) + 1;
    iVar4 = (int)lVar7 * 4;
    uVar14 = lVar7 * 4;
    do {
      fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
      pfVar8 = pfVar8 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((int64_t)uVar14 < lVar6) {
    lVar6 = lVar6 - uVar14;
    pfVar8 = (float *)(param_1 + 0x1eb0 + uVar14 * 4);
    iVar4 = iVar4 + (int)lVar6;
    do {
      fVar20 = fVar20 + *pfVar8;
      pfVar8 = pfVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar6 = (int64_t)iVar4;
  if (lVar6 < 100) {
    if (3 < 100 - lVar6) {
      pfVar8 = (float *)(param_1 + 0x1d24 + lVar6 * 4);
      lVar7 = (0x60U - lVar6 >> 2) + 1;
      lVar6 = lVar6 + lVar7 * 4;
      do {
        fVar20 = fVar20 + pfVar8[-1] + *pfVar8 + pfVar8[1] + pfVar8[2];
        pfVar8 = pfVar8 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 < 100) {
      lVar7 = 100 - lVar6;
      pfVar8 = (float *)(param_1 + 0x1d20 + lVar6 * 4);
      do {
        fVar20 = fVar20 + *pfVar8;
        pfVar8 = pfVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  *(float *)((int64_t)param_2 + 0x14) =
       (1.0 - fVar20) * *(float *)(param_1 + 0x2040) + fVar20 * *(float *)(param_1 + 0x2044);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18070ba50(int64_t *param_1,int param_2,int32_t param_3)
void FUN_18070ba50(int64_t *param_1,int param_2,int32_t param_3)

{
  int iVar1;
  int32_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int32_t uStack_278;
  int iStack_274;
  int64_t *plStack_270;
  int iStack_268;
  int iStack_264;
  int32_t uStack_260;
  int iStack_258;
  int iStack_250;
  int64_t lStack_248;
  int64_t lStack_240;
  uint64_t uStack_238;
  int64_t lStack_230;
  int64_t lStack_228;
  int64_t lStack_220;
  int64_t lStack_218;
  int64_t alStack_178 [4];
  int64_t lStack_158;
  int64_t alStack_140 [17];
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_278;
  lStack_228 = *param_1;
  iStack_250 = *(int *)((int64_t)param_1 + 0xc);
  lStack_218 = (int64_t)iStack_250;
  lVar5 = 0;
  iStack_268 = *(int *)(lStack_228 + 4);
  uStack_238 = *(uint64_t *)(lStack_228 + 0x20);
  uStack_278 = *(int32_t *)(lStack_228 + 8);
  lStack_220 = (int64_t)param_2 * 4;
  lVar7 = (int64_t)param_2 * -4 + 0x2000;
  iVar6 = 0;
  lStack_158 = lVar7;
  do {
    lVar4 = (int64_t)iVar6;
    iVar6 = iVar6 + iStack_268 + 0x800;
    lVar4 = (int64_t)param_1 + (lVar4 + 0x18) * 4;
    alStack_140[lVar5] = lVar4;
    alStack_178[lVar5] = lVar4 + lVar7;
    lVar5 = lVar5 + 1;
  } while (lVar5 < lStack_218);
  lStack_240 = (int64_t)param_1 + (int64_t)((iStack_268 + 0x800) * iStack_250) * 4 + 0x60;
  lStack_230 = lStack_240 + (int64_t)(iStack_250 * 0x18) * 4;
  iStack_264 = (int)param_1[7];
  iStack_258 = (int)param_1[3];
  lStack_248 = CONCAT44(lStack_248._4_4_,iStack_258);
  iStack_274 = param_2;
  plStack_270 = param_1;
  uStack_260 = param_3;
  if (((iStack_264 < 5) && (iStack_258 == 0)) && (*(int *)((int64_t)param_1 + 0x3c) == 0)) {
    if (iStack_264 == 0) {
      uVar2 = FUN_18070e250(alStack_140,iStack_250,(int)param_1[5]);
      *(int32_t *)((int64_t)param_1 + 0x34) = uVar2;
    }
    else {
      uVar2 = *(int32_t *)((int64_t)param_1 + 0x34);
    }
    lStack_248 = (int64_t)iStack_268;
                    // WARNING: Subroutine does not return
    FUN_1808fd200(uVar2);
  }
  iVar6 = *(int *)((int64_t)param_1 + 0x1c);
  iVar1 = *(int *)(lStack_228 + 0xc);
  iVar3 = iVar6;
  if (iVar1 <= iVar6) {
    iVar3 = iVar1;
  }
  if ((iStack_258 <= iVar3) && (iStack_258 = iVar1, iVar6 < iVar1)) {
    iStack_258 = iVar6;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



