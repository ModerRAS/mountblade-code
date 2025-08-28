#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part080.c - 14 个函数

// 函数: void FUN_180712541(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180712541(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  float *pfVar4;
  uint uVar5;
  int64_t unaff_RBP;
  int64_t lVar6;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float in_XMM0_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM7_Da;
  float fVar12;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float fVar13;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int iStack0000000000000040;
  int iStack0000000000000044;
  int in_stack_00000048;
  int64_t lStack0000000000000050;
  int64_t lStack0000000000000058;
  int64_t lStack0000000000000060;
  int64_t lStack0000000000000068;
  int64_t lStack0000000000000070;
  int64_t lStack0000000000000078;
  int64_t lStack0000000000000080;
  int64_t lStack0000000000000088;
  int64_t lStack0000000000000090;
  int64_t lStack0000000000000098;
  uint64_t uStack00000000000000a8;
  int64_t lStack00000000000000b0;
  int64_t in_stack_000001a0;
  int64_t in_stack_000001a8;
  int in_stack_000001c0;
  float in_stack_000001c8;
  float in_stack_000001d0;
  int64_t in_stack_000001e8;
  
  lVar6 = unaff_RBP - unaff_R15;
  lStack0000000000000058 = param_1 * 4 + 0xc;
  lVar1 = param_1 * 4 + 8;
  pfVar4 = (float *)(param_2 - lVar1);
  lStack0000000000000070 = (lStack0000000000000058 - in_R10) + unaff_R14;
  lStack0000000000000078 = (lStack0000000000000058 - in_R10) + in_R11;
  lStack0000000000000060 = param_1 * 4 + 0x10;
  lStack0000000000000080 = (lStack0000000000000060 - in_R10) + unaff_R14;
  lStack0000000000000088 = (lStack0000000000000060 - in_R10) + in_R11;
  lStack0000000000000068 = param_1 * 4 + 0x14;
  lStack0000000000000090 = (lStack0000000000000068 - in_R10) + unaff_R14;
  lStack0000000000000098 = (lStack0000000000000068 - in_R10) + in_R11;
  lVar1 = lVar1 - in_R10;
  lStack0000000000000050 = lVar1 + unaff_R14;
  lVar2 = (param_4 - 4U >> 2) + 1;
  uVar5 = (int)lVar2 * 4;
  uStack00000000000000a8 = (uint64_t)uVar5;
  lStack00000000000000b0 = lVar2 * 4;
  lVar3 = lVar2;
  do {
    fVar13 = pfVar4[lVar6 + 4];
    fVar8 = *(float *)((int64_t)pfVar4 + lStack0000000000000050) *
            *(float *)((int64_t)pfVar4 + lStack0000000000000050);
    in_XMM0_Da = in_XMM0_Da - fVar8;
    *(float *)((int64_t)pfVar4 + lVar1 + in_R11) =
         in_XMM0_Da * unaff_XMM14_Da * pfVar4[2] + pfVar4[param_1 + 2] +
         (pfVar4[1] + pfVar4[3]) * in_XMM0_Da * unaff_XMM15_Da +
         (*pfVar4 + pfVar4[4]) * in_XMM0_Da * in_stack_000001c8 +
         fVar8 * unaff_XMM10_Da * unaff_XMM8_Da +
         fVar8 * unaff_XMM11_Da * (unaff_XMM7_Da + unaff_XMM9_Da) +
         (fVar13 + unaff_XMM13_Da) * fVar8 * unaff_XMM12_Da;
    fVar8 = pfVar4[lVar6 + 5];
    fVar9 = *(float *)((int64_t)pfVar4 + lStack0000000000000070) *
            *(float *)((int64_t)pfVar4 + lStack0000000000000070);
    fVar7 = 1.0 - fVar9;
    *(float *)((int64_t)pfVar4 + lStack0000000000000078) =
         fVar7 * unaff_XMM14_Da * pfVar4[3] + pfVar4[param_1 + 3] +
         (pfVar4[4] + pfVar4[2]) * fVar7 * unaff_XMM15_Da +
         (pfVar4[1] + pfVar4[5]) * fVar7 * in_stack_000001c8 +
         fVar9 * unaff_XMM10_Da * unaff_XMM9_Da + fVar9 * unaff_XMM11_Da * (unaff_XMM8_Da + fVar13)
         + (fVar8 + unaff_XMM7_Da) * fVar9 * unaff_XMM12_Da;
    fVar7 = pfVar4[lVar6 + 6];
    fVar10 = *(float *)((int64_t)pfVar4 + lStack0000000000000080) *
             *(float *)((int64_t)pfVar4 + lStack0000000000000080);
    fVar9 = 1.0 - fVar10;
    *(float *)((int64_t)pfVar4 + lStack0000000000000088) =
         fVar9 * unaff_XMM14_Da * pfVar4[4] + pfVar4[param_1 + 4] +
         (pfVar4[5] + pfVar4[3]) * fVar9 * unaff_XMM15_Da +
         (pfVar4[6] + pfVar4[2]) * fVar9 * in_stack_000001c8 + fVar10 * unaff_XMM10_Da * fVar13 +
         fVar10 * unaff_XMM11_Da * (unaff_XMM9_Da + fVar8) +
         (fVar7 + unaff_XMM8_Da) * fVar10 * unaff_XMM12_Da;
    fVar9 = pfVar4[lVar6 + 7];
    fVar11 = *(float *)((int64_t)pfVar4 + lStack0000000000000090) *
             *(float *)((int64_t)pfVar4 + lStack0000000000000090);
    fVar10 = 1.0 - fVar11;
    in_XMM0_Da = 1.0;
    *(float *)((int64_t)pfVar4 + lStack0000000000000098) =
         fVar10 * unaff_XMM14_Da * pfVar4[5] + pfVar4[param_1 + 5] +
         (pfVar4[6] + pfVar4[4]) * fVar10 * unaff_XMM15_Da +
         (pfVar4[7] + pfVar4[3]) * fVar10 * in_stack_000001c8 + fVar11 * unaff_XMM10_Da * fVar8 +
         fVar11 * unaff_XMM11_Da * (fVar13 + fVar7) +
         (fVar9 + unaff_XMM9_Da) * fVar11 * unaff_XMM12_Da;
    pfVar4 = pfVar4 + 4;
    lVar3 = lVar3 + -1;
    unaff_XMM7_Da = fVar8;
    unaff_XMM8_Da = fVar7;
    unaff_XMM9_Da = fVar9;
    unaff_XMM13_Da = fVar13;
  } while (lVar3 != 0);
  lVar1 = (int64_t)iStack0000000000000040;
  if (lStack00000000000000b0 < lVar1) {
    lVar6 = (int64_t)in_stack_00000048;
    lVar2 = lVar1 + lVar2 * -4;
    pfVar4 = (float *)(in_stack_000001a8 + ((lStack00000000000000b0 - lVar6) + -1) * 4);
    lVar3 = lVar6 * 4 - in_stack_000001a8;
    uVar5 = uVar5 + (int)lVar2;
    do {
      fVar12 = fVar8;
      fVar8 = *(float *)(in_stack_000001e8 + lVar3 + 4 + (int64_t)pfVar4);
      fVar10 = pfVar4[(lVar6 - iStack0000000000000044) + 3];
      fVar8 = fVar8 * fVar8;
      fVar11 = 1.0 - fVar8;
      *(float *)(lVar3 + in_stack_000001a0 + 4 + (int64_t)pfVar4) =
           fVar11 * unaff_XMM14_Da * pfVar4[1] + pfVar4[lVar6 + 1] +
           (pfVar4[2] + *pfVar4) * fVar11 * unaff_XMM15_Da +
           (pfVar4[3] + pfVar4[-1]) * fVar11 * in_stack_000001c8 + fVar8 * unaff_XMM10_Da * fVar7 +
           fVar8 * unaff_XMM11_Da * (fVar12 + fVar9) + (fVar10 + fVar13) * fVar8 * unaff_XMM12_Da;
      pfVar4 = pfVar4 + 1;
      lVar2 = lVar2 + -1;
      fVar8 = fVar7;
      fVar7 = fVar9;
      fVar9 = fVar10;
      fVar13 = fVar12;
    } while (lVar2 != 0);
  }
  if (in_stack_000001d0 == 0.0) {
    if (in_stack_000001a8 != in_stack_000001a0) {
                    // WARNING: Subroutine does not return
      memmove(in_stack_000001a0 + lVar1 * 4,in_stack_000001a8 + lVar1 * 4,
              (int64_t)(in_stack_000001c0 - iStack0000000000000040) << 2);
    }
  }
  else {
    FUN_180707200(in_stack_000001a0 + (int64_t)(int)uVar5 * 4,
                  in_stack_000001a8 + (int64_t)(int)uVar5 * 4,(int64_t)iStack0000000000000044,
                  in_stack_000001c0 - uVar5);
  }
  return;
}





// 函数: void FUN_180712943(float param_1,uint64_t param_2,float param_3,int64_t param_4)
void FUN_180712943(float param_1,uint64_t param_2,float param_3,int64_t param_4)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  float *pfVar5;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  int64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar6;
  float fVar7;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int in_stack_000001c0;
  float in_stack_000001d0;
  
  if (unaff_R12 < param_4) {
    lVar3 = (int64_t)unaff_EDI;
    lVar4 = param_4 - unaff_R12;
    pfVar5 = (float *)(in_R10 + ((unaff_R12 - lVar3) + -1) * 4);
    lVar2 = lVar3 * 4 - in_R10;
    unaff_EBX = unaff_EBX + (int)lVar4;
    do {
      fVar8 = unaff_XMM7_Da;
      fVar7 = *(float *)(unaff_R14 + lVar2 + 4 + (int64_t)pfVar5);
      fVar1 = pfVar5[(lVar3 - unaff_R15) + 3];
      fVar7 = fVar7 * fVar7;
      fVar6 = param_1 - fVar7;
      param_3 = fVar6 * unaff_XMM6_Da;
      param_1 = 1.0;
      *(float *)(lVar2 + in_R11 + 4 + (int64_t)pfVar5) =
           fVar6 * unaff_XMM14_Da * pfVar5[1] + pfVar5[lVar3 + 1] +
           (pfVar5[2] + *pfVar5) * fVar6 * unaff_XMM15_Da + (pfVar5[3] + pfVar5[-1]) * param_3 +
           fVar7 * unaff_XMM10_Da * unaff_XMM8_Da + fVar7 * unaff_XMM11_Da * (fVar8 + unaff_XMM9_Da)
           + (fVar1 + unaff_XMM13_Da) * fVar7 * unaff_XMM12_Da;
      pfVar5 = pfVar5 + 1;
      lVar4 = lVar4 + -1;
      unaff_XMM7_Da = unaff_XMM8_Da;
      unaff_XMM8_Da = unaff_XMM9_Da;
      unaff_XMM9_Da = fVar1;
      unaff_XMM13_Da = fVar8;
    } while (lVar4 != 0);
  }
  if (in_stack_000001d0 == 0.0) {
    if (in_R10 != in_R11) {
                    // WARNING: Subroutine does not return
      memmove(in_R11 + param_4 * 4,in_R10 + param_4 * 4,
              (int64_t)(in_stack_000001c0 - unaff_ESI) << 2);
    }
  }
  else {
    FUN_180707200(in_R11 + (int64_t)unaff_EBX * 4,in_R10 + (int64_t)unaff_EBX * 4,param_3,
                  in_stack_000001c0 - unaff_EBX);
  }
  return;
}





// 函数: void FUN_180712aba(void)
void FUN_180712aba(void)

{
  int unaff_ESI;
  int64_t in_R9;
  int64_t in_R10;
  int64_t in_R11;
  int in_stack_000001c0;
  
  if (in_R10 != in_R11) {
                    // WARNING: Subroutine does not return
    memmove(in_R11 + in_R9 * 4,in_R10 + in_R9 * 4,(int64_t)(in_stack_000001c0 - unaff_ESI) << 2);
  }
  return;
}





// 函数: void FUN_180712b39(void)
void FUN_180712b39(void)

{
  return;
}





// 函数: void FUN_180712b50(int64_t param_1,int *param_2,int param_3,int param_4)
void FUN_180712b50(int64_t param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    uVar5 = uVar2;
    do {
      uVar2 = uVar2 + 2;
      iVar3 = (int)uVar5;
      uVar4 = iVar3 + 1;
      uVar5 = (uint64_t)uVar4;
      *param_2 = (int)((*(byte *)((int64_t)((param_4 + param_3 * 2 + -1) * iVar1 + iVar3) +
                                 *(int64_t *)(param_1 + 0x98)) + 0x40) *
                       ((int)*(short *)(*(int64_t *)(param_1 + 0x20) + uVar2) -
                        (int)*(short *)(*(int64_t *)(param_1 + 0x20) + -2 + uVar2) <<
                       ((byte)param_3 & 0x1f)) * param_4) >> 2;
      iVar1 = *(int *)(param_1 + 8);
      param_2 = param_2 + 1;
    } while ((int)uVar4 < iVar1);
  }
  return;
}





// 函数: void FUN_180712b71(int param_1,uint64_t param_2,int param_3,int param_4)
void FUN_180712b71(int param_1,uint64_t param_2,int param_3,int param_4)

{
  int iVar1;
  uint64_t uVar2;
  byte unaff_BPL;
  int unaff_ESI;
  int *unaff_RDI;
  uint in_R10D;
  int64_t in_R11;
  
  uVar2 = (uint64_t)in_R10D;
  do {
    uVar2 = uVar2 + 2;
    iVar1 = (param_4 + param_3 * 2 + -1) * param_1 + in_R10D;
    in_R10D = in_R10D + 1;
    *unaff_RDI = (int)((*(byte *)((int64_t)iVar1 + *(int64_t *)(in_R11 + 0x98)) + 0x40) *
                       ((int)*(short *)(*(int64_t *)(in_R11 + 0x20) + uVar2) -
                        (int)*(short *)(*(int64_t *)(in_R11 + 0x20) + -2 + uVar2) <<
                       (unaff_BPL & 0x1f)) * unaff_ESI) >> 2;
    param_1 = *(int *)(in_R11 + 8);
    unaff_RDI = unaff_RDI + 1;
  } while ((int)in_R10D < param_1);
  return;
}





// 函数: void FUN_180712bf0(void)
void FUN_180712bf0(void)

{
  return;
}





// 函数: void FUN_180712c50(int64_t param_1,float *param_2,int64_t param_3,int param_4,float *param_5)
void FUN_180712c50(int64_t param_1,float *param_2,int64_t param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar10 = 0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar19 = *param_5;
  fVar18 = param_5[1];
  fVar14 = param_5[2];
  fVar16 = param_5[3];
  fVar12 = param_5[4];
  if (3 < param_4) {
    lVar8 = param_1 - param_3;
    pfVar9 = (float *)(param_3 + 4);
    uVar6 = (param_4 - 4U >> 2) + 1;
    uVar7 = (uint64_t)uVar6;
    iVar10 = uVar6 * 4;
    fVar11 = fVar12;
    fVar13 = fVar14;
    fVar15 = fVar16;
    fVar17 = fVar18;
    do {
      fVar12 = fVar19;
      fVar16 = *(float *)(lVar8 + -4 + (int64_t)pfVar9);
      pfVar9[-1] = fVar12 * fVar1 + fVar16 + fVar17 * fVar2 + fVar13 * fVar3 + fVar15 * fVar4 +
                   fVar11 * fVar5;
      fVar14 = *(float *)(lVar8 + (int64_t)pfVar9);
      *pfVar9 = fVar16 * fVar1 + fVar14 + fVar12 * fVar2 + fVar17 * fVar3 + fVar13 * fVar4 +
                fVar15 * fVar5;
      fVar18 = *(float *)(lVar8 + 4 + (int64_t)pfVar9);
      pfVar9[1] = fVar14 * fVar1 + fVar18 + fVar16 * fVar2 + fVar12 * fVar3 + fVar17 * fVar4 +
                  fVar13 * fVar5;
      fVar19 = *(float *)(lVar8 + 8 + (int64_t)pfVar9);
      pfVar9[2] = fVar18 * fVar1 + fVar19 + fVar14 * fVar2 + fVar16 * fVar3 + fVar12 * fVar4 +
                  fVar17 * fVar5;
      pfVar9 = pfVar9 + 4;
      uVar7 = uVar7 - 1;
      fVar11 = fVar12;
      fVar13 = fVar14;
      fVar15 = fVar16;
      fVar17 = fVar18;
    } while (uVar7 != 0);
  }
  if (iVar10 < param_4) {
    pfVar9 = (float *)(param_3 + (int64_t)iVar10 * 4);
    uVar7 = (uint64_t)(uint)(param_4 - iVar10);
    fVar11 = fVar12;
    fVar13 = fVar14;
    fVar15 = fVar18;
    do {
      fVar18 = fVar19;
      fVar14 = fVar15;
      fVar12 = fVar16;
      fVar16 = fVar13;
      fVar19 = *(float *)((int64_t)pfVar9 + (param_1 - param_3));
      *pfVar9 = fVar18 * fVar1 + fVar19 + fVar14 * fVar2 + fVar16 * fVar3 + fVar12 * fVar4 +
                fVar11 * fVar5;
      pfVar9 = pfVar9 + 1;
      uVar7 = uVar7 - 1;
      fVar11 = fVar12;
      fVar13 = fVar14;
      fVar15 = fVar18;
    } while (uVar7 != 0);
  }
  *param_5 = fVar19;
  param_5[1] = fVar18;
  param_5[2] = fVar14;
  param_5[3] = fVar16;
  param_5[4] = fVar12;
  return;
}





// 函数: void FUN_180712cdf(int64_t param_1,float *param_2,uint64_t param_3,int param_4)
void FUN_180712cdf(int64_t param_1,float *param_2,uint64_t param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  float *pfVar5;
  uint64_t unaff_RBX;
  int64_t in_R10;
  int64_t in_R11;
  float unaff_XMM6_Da;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float fVar9;
  float unaff_XMM9_Da;
  float fVar10;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
  *(uint64_t *)(in_RAX + -8) = unaff_RBX;
  param_1 = param_1 - in_R11;
  pfVar5 = (float *)(in_R11 + 4);
  uVar3 = (param_4 - 4U >> 2) + 1;
  uVar4 = (uint64_t)uVar3;
  do {
    fVar7 = unaff_XMM10_Da;
    fVar9 = *(float *)(param_1 + -4 + (int64_t)pfVar5);
    pfVar5[-1] = fVar7 * unaff_XMM11_Da + fVar9 + unaff_XMM9_Da * unaff_XMM12_Da +
                 unaff_XMM7_Da * unaff_XMM13_Da + unaff_XMM8_Da * unaff_XMM14_Da +
                 unaff_XMM6_Da * unaff_XMM15_Da;
    fVar8 = *(float *)(param_1 + (int64_t)pfVar5);
    *pfVar5 = fVar9 * unaff_XMM11_Da + fVar8 + fVar7 * unaff_XMM12_Da +
              unaff_XMM9_Da * unaff_XMM13_Da + unaff_XMM7_Da * unaff_XMM14_Da +
              unaff_XMM8_Da * unaff_XMM15_Da;
    fVar10 = *(float *)(param_1 + 4 + (int64_t)pfVar5);
    pfVar5[1] = fVar8 * unaff_XMM11_Da + fVar10 + fVar9 * unaff_XMM12_Da + fVar7 * unaff_XMM13_Da +
                unaff_XMM9_Da * unaff_XMM14_Da + unaff_XMM7_Da * unaff_XMM15_Da;
    unaff_XMM10_Da = *(float *)(param_1 + 8 + (int64_t)pfVar5);
    pfVar5[2] = fVar10 * unaff_XMM11_Da + unaff_XMM10_Da + fVar8 * unaff_XMM12_Da +
                fVar9 * unaff_XMM13_Da + fVar7 * unaff_XMM14_Da + unaff_XMM9_Da * unaff_XMM15_Da;
    pfVar5 = pfVar5 + 4;
    uVar4 = uVar4 - 1;
    unaff_XMM6_Da = fVar7;
    unaff_XMM7_Da = fVar8;
    unaff_XMM8_Da = fVar9;
    unaff_XMM9_Da = fVar10;
  } while (uVar4 != 0);
  if ((int)(uVar3 * 4) < param_4) {
    pfVar5 = (float *)(in_R11 + (int64_t)(int)(uVar3 * 4) * 4);
    uVar4 = (uint64_t)(param_4 + uVar3 * -4);
    fVar6 = fVar7;
    fVar1 = fVar8;
    fVar2 = fVar10;
    do {
      fVar10 = unaff_XMM10_Da;
      fVar8 = fVar2;
      fVar7 = fVar9;
      fVar9 = fVar1;
      unaff_XMM10_Da = *(float *)((int64_t)pfVar5 + (in_R10 - in_R11));
      *pfVar5 = fVar10 * unaff_XMM11_Da + unaff_XMM10_Da + fVar8 * unaff_XMM12_Da +
                fVar9 * unaff_XMM13_Da + fVar7 * unaff_XMM14_Da + fVar6 * unaff_XMM15_Da;
      pfVar5 = pfVar5 + 1;
      uVar4 = uVar4 - 1;
      fVar6 = fVar7;
      fVar1 = fVar8;
      fVar2 = fVar10;
    } while (uVar4 != 0);
  }
  *param_2 = unaff_XMM10_Da;
  param_2[1] = fVar10;
  param_2[2] = fVar8;
  param_2[3] = fVar9;
  param_2[4] = fVar7;
  return;
}





// 函数: void FUN_180712e3f(uint64_t param_1,float *param_2,int param_3,int param_4)
void FUN_180712e3f(uint64_t param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  float *pfVar4;
  int64_t in_R10;
  int64_t in_R11;
  float unaff_XMM6_Da;
  float fVar5;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
  if (param_3 < param_4) {
    pfVar4 = (float *)(in_R11 + (int64_t)param_3 * 4);
    uVar3 = (uint64_t)(uint)(param_4 - param_3);
    fVar5 = unaff_XMM6_Da;
    fVar1 = unaff_XMM7_Da;
    fVar2 = unaff_XMM9_Da;
    do {
      unaff_XMM9_Da = unaff_XMM10_Da;
      unaff_XMM7_Da = fVar2;
      unaff_XMM6_Da = unaff_XMM8_Da;
      unaff_XMM8_Da = fVar1;
      unaff_XMM10_Da = *(float *)((int64_t)pfVar4 + (in_R10 - in_R11));
      *pfVar4 = unaff_XMM9_Da * unaff_XMM11_Da + unaff_XMM10_Da + unaff_XMM7_Da * unaff_XMM12_Da +
                unaff_XMM8_Da * unaff_XMM13_Da + unaff_XMM6_Da * unaff_XMM14_Da +
                fVar5 * unaff_XMM15_Da;
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 - 1;
      fVar5 = unaff_XMM6_Da;
      fVar1 = unaff_XMM7_Da;
      fVar2 = unaff_XMM9_Da;
    } while (uVar3 != 0);
  }
  *param_2 = unaff_XMM10_Da;
  param_2[1] = unaff_XMM9_Da;
  param_2[2] = unaff_XMM7_Da;
  param_2[3] = unaff_XMM8_Da;
  param_2[4] = unaff_XMM6_Da;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180712f20(uint64_t param_1,int64_t param_2,int64_t param_3,int32_t param_4,
void FUN_180712f20(uint64_t param_1,int64_t param_2,int64_t param_3,int32_t param_4,
                  int param_5)

{
  uint uVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t uVar6;
  int8_t auStack_88 [32];
  int64_t lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  iVar4 = 0;
  lStack_68 = param_3;
  if (0 < param_5 + -3) {
    uVar1 = (param_5 - 4U >> 2) + 1;
    uVar5 = (uint64_t)uVar1;
    iVar4 = uVar1 * 4;
    puVar2 = (int32_t *)(param_3 + 8);
    lVar3 = param_2;
    do {
      uStack_60 = 0;
      uStack_58 = 0;
      FUN_1807074b0(param_1,lVar3,&uStack_60,param_4);
      lVar3 = lVar3 + 0x10;
      puVar2[-2] = (int32_t)uStack_60;
      puVar2[-1] = uStack_60._4_4_;
      *puVar2 = (int32_t)uStack_58;
      puVar2[1] = uStack_58._4_4_;
      uVar5 = uVar5 - 1;
      puVar2 = puVar2 + 4;
    } while (uVar5 != 0);
  }
  if (iVar4 < param_5) {
    param_2 = (int64_t)iVar4 * 4 + param_2;
    puVar2 = (int32_t *)(lStack_68 + (int64_t)iVar4 * 4);
    uVar5 = (uint64_t)(uint)(param_5 - iVar4);
    do {
      uVar6 = FUN_1807070a0(param_1,param_2,param_4);
      param_2 = param_2 + 4;
      *puVar2 = uVar6;
      puVar2 = puVar2 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_50 ^ (uint64_t)auStack_88);
}





// 函数: void FUN_180712f5f(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180712f5f(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int32_t *puVar3;
  int unaff_ESI;
  int64_t lVar4;
  int64_t unaff_R13;
  int32_t unaff_R14D;
  uint64_t uVar5;
  int32_t uVar6;
  int64_t lStackX_20;
  int32_t uStack0000000000000028;
  int32_t uStack000000000000002c;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  uint64_t in_stack_00000038;
  
  uVar2 = (in_EAX >> 2) + 1;
  uVar5 = (uint64_t)uVar2;
  iVar1 = uVar2 * 4;
  puVar3 = (int32_t *)(param_3 + 8);
  do {
    _uStack0000000000000028 = 0;
    _uStack0000000000000030 = 0;
    FUN_1807074b0(0,param_2,&stack0x00000028,unaff_R14D);
    param_2 = param_2 + 0x10;
    puVar3[-2] = uStack0000000000000028;
    puVar3[-1] = uStack000000000000002c;
    *puVar3 = uStack0000000000000030;
    puVar3[1] = uStack0000000000000034;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 4;
  } while (uVar5 != 0);
  if (iVar1 < unaff_ESI) {
    lVar4 = (int64_t)iVar1 * 4 + unaff_R13;
    puVar3 = (int32_t *)(lStackX_20 + (int64_t)iVar1 * 4);
    uVar5 = (uint64_t)(unaff_ESI + uVar2 * -4);
    uVar6 = uStack0000000000000028;
    do {
      uVar6 = FUN_1807070a0(uVar6,lVar4,unaff_R14D);
      lVar4 = lVar4 + 4;
      *puVar3 = uVar6;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000038 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180712fbc(int32_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180712fbc(int32_t param_1,uint64_t param_2,int64_t param_3)

{
  int32_t *puVar1;
  int unaff_ESI;
  uint64_t uVar2;
  int64_t lVar3;
  int unaff_R12D;
  int64_t unaff_R13;
  int32_t unaff_R14D;
  uint64_t in_stack_00000038;
  
  if (unaff_R12D < unaff_ESI) {
    lVar3 = (int64_t)unaff_R12D * 4 + unaff_R13;
    puVar1 = (int32_t *)(param_3 + (int64_t)unaff_R12D * 4);
    uVar2 = (uint64_t)(uint)(unaff_ESI - unaff_R12D);
    do {
      param_1 = FUN_1807070a0(param_1,lVar3,unaff_R14D);
      lVar3 = lVar3 + 4;
      *puVar1 = param_1;
      puVar1 = puVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000038 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180713020(int64_t param_1,int64_t param_2,int param_3,int param_4,int *param_5)
void FUN_180713020(int64_t param_1,int64_t param_2,int param_3,int param_4,int *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar11 = 0;
  fVar17 = -1.0;
  fVar15 = -1.0;
  lVar8 = (int64_t)param_3;
  fVar18 = 0.0;
  fVar16 = 0.0;
  iVar10 = 0;
  *param_5 = 0;
  fVar13 = 1.0;
  param_5[1] = 1;
  if (3 < param_3) {
    pfVar6 = (float *)(param_2 + 8);
    uVar5 = (param_3 - 4U >> 2) + 1;
    uVar7 = (uint64_t)uVar5;
    iVar10 = uVar5 * 4;
    do {
      pfVar1 = pfVar6 + -2;
      pfVar2 = pfVar6 + -1;
      fVar14 = *pfVar6;
      pfVar3 = pfVar6 + 1;
      pfVar6 = pfVar6 + 4;
      fVar13 = fVar13 + *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2 + fVar14 * fVar14 + *pfVar3 * *pfVar3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (iVar10 < param_3) {
    uVar7 = (uint64_t)(uint)(param_3 - iVar10);
    pfVar6 = (float *)(param_2 + (int64_t)iVar10 * 4);
    do {
      fVar14 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar13 = fVar13 + fVar14 * fVar14;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (3 < param_4) {
    pfVar6 = (float *)(param_1 + 4);
    lVar9 = (lVar8 * 4 - param_1) + param_2;
    lVar12 = param_2 - param_1;
    iVar10 = 2;
    do {
      fVar14 = pfVar6[-1];
      if ((0.0 < fVar14) && (fVar14 = fVar14 * fVar14 * 1e-24, fVar15 * fVar13 < fVar16 * fVar14)) {
        if (fVar18 * fVar14 <= fVar17 * fVar13) {
          param_5[1] = iVar11;
          fVar15 = fVar14;
          fVar16 = fVar13;
        }
        else {
          param_5[1] = *param_5;
          *param_5 = iVar11;
          fVar15 = fVar17;
          fVar16 = fVar18;
          fVar17 = fVar14;
          fVar18 = fVar13;
        }
      }
      fVar14 = *(float *)((int64_t)pfVar6 + lVar9 + -4);
      fVar4 = *(float *)((int64_t)pfVar6 + lVar12 + -4);
      fVar13 = (fVar14 * fVar14 - fVar4 * fVar4) + fVar13;
      fVar14 = *pfVar6;
      if (fVar13 <= 1.0) {
        fVar13 = 1.0;
      }
      if ((0.0 < fVar14) && (fVar14 = fVar14 * fVar14 * 1e-24, fVar15 * fVar13 < fVar14 * fVar16)) {
        if (fVar14 * fVar18 <= fVar17 * fVar13) {
          param_5[1] = iVar10 + -1;
          fVar15 = fVar14;
          fVar16 = fVar13;
        }
        else {
          param_5[1] = *param_5;
          *param_5 = iVar10 + -1;
          fVar15 = fVar17;
          fVar16 = fVar18;
          fVar17 = fVar14;
          fVar18 = fVar13;
        }
      }
      fVar13 = (*(float *)((int64_t)pfVar6 + lVar9) * *(float *)((int64_t)pfVar6 + lVar9) -
               *(float *)((int64_t)pfVar6 + lVar12) * *(float *)((int64_t)pfVar6 + lVar12)) +
               fVar13;
      fVar14 = pfVar6[1];
      if (fVar13 <= 1.0) {
        fVar13 = 1.0;
      }
      if ((0.0 < fVar14) && (fVar14 = fVar14 * fVar14 * 1e-24, fVar15 * fVar13 < fVar16 * fVar14)) {
        if (fVar18 * fVar14 <= fVar17 * fVar13) {
          param_5[1] = iVar10;
          fVar15 = fVar14;
          fVar16 = fVar13;
        }
        else {
          param_5[1] = *param_5;
          *param_5 = iVar10;
          fVar15 = fVar17;
          fVar16 = fVar18;
          fVar17 = fVar14;
          fVar18 = fVar13;
        }
      }
      fVar14 = *(float *)((int64_t)pfVar6 + lVar9 + 4);
      fVar4 = *(float *)((int64_t)pfVar6 + lVar12 + 4);
      fVar13 = (fVar14 * fVar14 - fVar4 * fVar4) + fVar13;
      fVar14 = pfVar6[2];
      if (fVar13 <= 1.0) {
        fVar13 = 1.0;
      }
      if ((0.0 < fVar14) && (fVar14 = fVar14 * fVar14 * 1e-24, fVar15 * fVar13 < fVar14 * fVar16)) {
        if (fVar14 * fVar18 <= fVar17 * fVar13) {
          param_5[1] = iVar10 + 1;
          fVar15 = fVar14;
          fVar16 = fVar13;
        }
        else {
          param_5[1] = *param_5;
          *param_5 = iVar10 + 1;
          fVar15 = fVar17;
          fVar16 = fVar18;
          fVar17 = fVar14;
          fVar18 = fVar13;
        }
      }
      fVar14 = *(float *)((int64_t)pfVar6 + ((lVar8 * 4 + 8) - param_1) + param_2);
      iVar11 = iVar11 + 4;
      fVar4 = *(float *)((int64_t)pfVar6 + lVar12 + 8);
      iVar10 = iVar10 + 4;
      pfVar6 = pfVar6 + 4;
      fVar13 = (fVar14 * fVar14 - fVar4 * fVar4) + fVar13;
      if (fVar13 <= 1.0) {
        fVar13 = 1.0;
      }
    } while (iVar11 < param_4 + -3);
  }
  if (iVar11 < param_4) {
    pfVar6 = (float *)(param_1 + (int64_t)iVar11 * 4);
    do {
      fVar14 = *pfVar6;
      if ((0.0 < fVar14) && (fVar14 = fVar14 * fVar14 * 1e-24, fVar15 * fVar13 < fVar14 * fVar16)) {
        if (fVar14 * fVar18 <= fVar17 * fVar13) {
          param_5[1] = iVar11;
          fVar15 = fVar14;
          fVar16 = fVar13;
        }
        else {
          param_5[1] = *param_5;
          *param_5 = iVar11;
          fVar15 = fVar17;
          fVar16 = fVar18;
          fVar17 = fVar14;
          fVar18 = fVar13;
        }
      }
      fVar14 = *(float *)((int64_t)pfVar6 + (lVar8 * 4 - param_1) + param_2);
      iVar11 = iVar11 + 1;
      fVar4 = *(float *)((int64_t)pfVar6 + (param_2 - param_1));
      pfVar6 = pfVar6 + 1;
      fVar13 = (fVar14 * fVar14 - fVar4 * fVar4) + fVar13;
      if (fVar13 <= 1.0) {
        fVar13 = 1.0;
      }
    } while (iVar11 < param_4);
  }
  return;
}





