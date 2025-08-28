/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part318.c - 11 个函数

// 函数: void FUN_18083e14f(void)
void FUN_18083e14f(void)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemController();
}



uint64_t FUN_18083e22a(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_ESI;
  int *unaff_RDI;
  uint uVar6;
  int64_t unaff_R12;
  char unaff_R13B;
  float unaff_XMM6_Da;
  float unaff_XMM11_Da;
  
  iVar2 = (int)(unaff_ESI + (unaff_ESI >> 0x1f & 7U)) >> 3;
  if (0 < iVar2) {
                    // WARNING: Subroutine does not return
    AdvancedSystemController((unaff_XMM6_Da / unaff_XMM11_Da) * 2.0);
  }
  uVar6 = 0;
  bVar1 = unaff_R13B - 2U & 0x1f;
  if (0 < iVar2) {
    do {
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = unaff_EBX << bVar1;
      while (uVar3 != 0) {
        if ((uVar6 & uVar3) != 0) {
          uVar5 = uVar5 | 1 << (uVar4 & 0x1f);
        }
        uVar4 = uVar4 + 1;
        uVar3 = (unaff_EBX << bVar1) >> ((byte)uVar4 & 0x1f);
      }
      unaff_RDI[1] = uVar5;
      uVar6 = uVar6 + 1;
      *unaff_RDI = (~uVar5 & (unaff_EBX << (unaff_R13B - 1U & 0x1f)) - 1U) - 1;
      unaff_RDI = unaff_RDI + 2;
    } while ((int)uVar6 < iVar2);
  }
  *(float *)(unaff_R12 + 0x18) = 4.0 / unaff_XMM11_Da;
  return 0;
}



uint64_t FUN_18083e2c6(uint64_t param_1,uint64_t param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  int *unaff_RDI;
  int64_t unaff_R12;
  int unaff_R15D;
  float unaff_XMM11_Da;
  
  do {
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = unaff_EBX;
    if (unaff_EBX != 0) {
      do {
        if ((param_3 & uVar1) != 0) {
          uVar3 = uVar3 | 1 << (uVar2 & 0x1f);
        }
        uVar2 = uVar2 + 1;
        uVar1 = (int)unaff_EBX >> ((byte)uVar2 & 0x1f);
      } while (uVar1 != 0);
    }
    unaff_RDI[1] = uVar3;
    param_3 = param_3 + 1;
    *unaff_RDI = (~uVar3 & param_4) - 1;
    unaff_RDI = unaff_RDI + 2;
  } while ((int)param_3 < unaff_R15D);
  *(float *)(unaff_R12 + 0x18) = 4.0 / unaff_XMM11_Da;
  return 0;
}





// 函数: void FUN_18083e340(int *param_1,int64_t param_2)
void FUN_18083e340(int *param_1,int64_t param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int64_t lVar5;
  int64_t lVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar7 = (float *)(param_2 + 8);
  piVar9 = *(int **)(param_1 + 4);
  lVar5 = param_2 + ((int64_t)*param_1 >> 1) * 4;
  param_2 = param_2 - (int64_t)piVar9;
  pfVar10 = (float *)(*(int64_t *)(param_1 + 2) + (int64_t)*param_1 * 4);
  pfVar8 = (float *)(lVar5 + 0xc);
  do {
    lVar6 = (int64_t)piVar9[1];
    fVar13 = *(float *)(lVar5 + 4 + lVar6 * 4);
    fVar14 = *(float *)(lVar5 + 4 + (int64_t)*piVar9 * 4);
    fVar16 = *(float *)(lVar5 + (int64_t)*piVar9 * 4);
    fVar12 = fVar14 - fVar13;
    fVar11 = fVar16 + *(float *)(lVar5 + lVar6 * 4);
    fVar15 = (fVar13 + fVar14) * 0.5;
    fVar13 = *pfVar10 * fVar11 + pfVar10[1] * fVar12;
    fVar16 = (fVar16 - *(float *)(lVar5 + lVar6 * 4)) * 0.5;
    fVar14 = pfVar10[1] * fVar11 - *pfVar10 * fVar12;
    *(float *)(param_2 + (int64_t)piVar9) = fVar13 + fVar15;
    pfVar8[-5] = fVar15 - fVar13;
    pfVar7[-1] = fVar14 + fVar16;
    pfVar8[-4] = fVar14 - fVar16;
    lVar6 = (int64_t)piVar9[3];
    piVar1 = piVar9 + 2;
    piVar9 = piVar9 + 4;
    pfVar2 = pfVar10 + 3;
    pfVar3 = pfVar10 + 2;
    fVar13 = *(float *)(lVar5 + 4 + lVar6 * 4);
    fVar14 = *(float *)(lVar5 + 4 + (int64_t)*piVar1 * 4);
    pfVar10 = pfVar10 + 4;
    fVar16 = *(float *)(lVar5 + (int64_t)*piVar1 * 4);
    fVar12 = fVar14 - fVar13;
    fVar11 = fVar16 + *(float *)(lVar5 + lVar6 * 4);
    pfVar4 = pfVar8 + -7;
    fVar15 = *pfVar2 * fVar12 + *pfVar3 * fVar11;
    fVar14 = (fVar13 + fVar14) * 0.5;
    fVar16 = (fVar16 - *(float *)(lVar5 + lVar6 * 4)) * 0.5;
    fVar13 = *pfVar2 * fVar11 - *pfVar3 * fVar12;
    *pfVar7 = fVar15 + fVar14;
    *pfVar4 = fVar14 - fVar15;
    pfVar7[1] = fVar13 + fVar16;
    pfVar7 = pfVar7 + 4;
    pfVar8[-6] = fVar13 - fVar16;
    pfVar8 = pfVar8 + -4;
  } while ((float *)(param_2 + (int64_t)piVar9) < pfVar4);
  return;
}





// 函数: void FUN_18083e510(int64_t param_1,float *param_2,int param_3)
void FUN_18083e510(int64_t param_1,float *param_2,int param_3)

{
  int64_t lVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  float *pfVar10;
  float *pfVar11;
  uint64_t uVar12;
  byte bVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  
  pfVar2 = *(float **)(param_1 + 8);
  iVar14 = *(int *)(param_1 + 4);
  if (0 < iVar14 + -6) {
    func_0x00018083ed00(pfVar2);
  }
  iVar14 = iVar14 + -7;
  bVar13 = 1;
  if (0 < iVar14) {
    uVar7 = 2;
    do {
      if (0 < (int)uVar7) {
        lVar9 = (int64_t)param_3 >> (bVar13 & 0x3f);
        iVar3 = 4 << (bVar13 & 0x1f);
        lVar8 = lVar9 >> 1;
        lVar1 = lVar8 + -8;
        uVar12 = (uint64_t)uVar7;
        pfVar11 = param_2;
        do {
          pfVar6 = pfVar11 + lVar1;
          pfVar10 = pfVar11 + (lVar9 - lVar8) + 7 + lVar1;
          pfVar4 = pfVar2;
          do {
            fVar16 = pfVar10[-1] - pfVar6[6];
            fVar15 = *pfVar10 - pfVar6[7];
            pfVar10[-1] = pfVar6[6] + pfVar10[-1];
            *pfVar10 = *pfVar10 + pfVar6[7];
            pfVar6[6] = fVar15 * pfVar4[1] + fVar16 * *pfVar4;
            pfVar5 = pfVar4 + iVar3;
            pfVar6[7] = fVar15 * *pfVar4 - fVar16 * pfVar4[1];
            fVar16 = pfVar10[-3] - pfVar6[4];
            fVar15 = pfVar10[-2] - pfVar6[5];
            pfVar10[-3] = pfVar6[4] + pfVar10[-3];
            pfVar10[-2] = pfVar10[-2] + pfVar6[5];
            pfVar6[4] = fVar15 * pfVar5[1] + fVar16 * *pfVar5;
            pfVar4 = pfVar5 + iVar3;
            pfVar6[5] = fVar15 * *pfVar5 - fVar16 * pfVar5[1];
            fVar16 = pfVar10[-5] - pfVar6[2];
            fVar15 = pfVar10[-4] - pfVar6[3];
            pfVar10[-5] = pfVar6[2] + pfVar10[-5];
            pfVar10[-4] = pfVar10[-4] + pfVar6[3];
            pfVar6[2] = fVar15 * pfVar4[1] + fVar16 * *pfVar4;
            pfVar5 = pfVar4 + iVar3;
            pfVar6[3] = fVar15 * *pfVar4 - fVar16 * pfVar4[1];
            fVar16 = pfVar10[-7] - *pfVar6;
            fVar15 = pfVar10[-6] - pfVar6[1];
            pfVar10[-7] = *pfVar6 + pfVar10[-7];
            pfVar10[-6] = pfVar10[-6] + pfVar6[1];
            pfVar10 = pfVar10 + -8;
            *pfVar6 = fVar15 * pfVar5[1] + fVar16 * *pfVar5;
            pfVar4 = pfVar5 + iVar3;
            pfVar6[1] = fVar15 * *pfVar5 - fVar16 * pfVar5[1];
            pfVar6 = pfVar6 + -8;
          } while (pfVar11 <= pfVar6);
          pfVar11 = pfVar11 + ((int64_t)param_3 >> (bVar13 & 0x3f));
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      bVar13 = bVar13 + 1;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      iVar14 = iVar14 + -1;
    } while (0 < iVar14);
  }
  if (0 < param_3) {
    uVar12 = (uint64_t)((param_3 - 1U >> 5) + 1);
    do {
      FUN_18083e930(param_2);
      param_2 = param_2 + 0x20;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}





// 函数: void FUN_18083e528(int64_t param_1,float *param_2)
void FUN_18083e528(int64_t param_1,float *param_2)

{
  int64_t lVar1;
  int iVar2;
  float *in_RAX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int unaff_EBX;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  float *pfVar10;
  float *pfVar11;
  uint64_t uVar12;
  byte bVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float *pfStack0000000000000060;
  float *in_stack_00000068;
  int in_stack_00000070;
  
  iVar14 = *(int *)(param_1 + 4);
  pfStack0000000000000060 = in_RAX;
  if (0 < iVar14 + -6) {
    func_0x00018083ed00();
  }
  iVar14 = iVar14 + -7;
  bVar13 = 1;
  if (0 < iVar14) {
    uVar7 = 2;
    pfVar11 = param_2;
    do {
      param_2 = pfVar11;
      if (0 < (int)uVar7) {
        lVar9 = (int64_t)unaff_EBX >> (bVar13 & 0x3f);
        iVar2 = 4 << (bVar13 & 0x1f);
        lVar8 = lVar9 >> 1;
        lVar6 = (int64_t)unaff_EBX;
        lVar1 = lVar8 + -8;
        uVar12 = (uint64_t)uVar7;
        do {
          pfVar5 = pfVar11 + lVar1;
          pfVar10 = pfVar11 + (lVar9 - lVar8) + 7 + lVar1;
          pfVar3 = pfStack0000000000000060;
          do {
            fVar16 = pfVar10[-1] - pfVar5[6];
            fVar15 = *pfVar10 - pfVar5[7];
            pfVar10[-1] = pfVar5[6] + pfVar10[-1];
            *pfVar10 = *pfVar10 + pfVar5[7];
            pfVar5[6] = fVar15 * pfVar3[1] + fVar16 * *pfVar3;
            pfVar4 = pfVar3 + iVar2;
            pfVar5[7] = fVar15 * *pfVar3 - fVar16 * pfVar3[1];
            fVar16 = pfVar10[-3] - pfVar5[4];
            fVar15 = pfVar10[-2] - pfVar5[5];
            pfVar10[-3] = pfVar5[4] + pfVar10[-3];
            pfVar10[-2] = pfVar10[-2] + pfVar5[5];
            pfVar5[4] = fVar15 * pfVar4[1] + fVar16 * *pfVar4;
            pfVar3 = pfVar4 + iVar2;
            pfVar5[5] = fVar15 * *pfVar4 - fVar16 * pfVar4[1];
            fVar16 = pfVar10[-5] - pfVar5[2];
            fVar15 = pfVar10[-4] - pfVar5[3];
            pfVar10[-5] = pfVar5[2] + pfVar10[-5];
            pfVar10[-4] = pfVar10[-4] + pfVar5[3];
            pfVar5[2] = fVar15 * pfVar3[1] + fVar16 * *pfVar3;
            pfVar4 = pfVar3 + iVar2;
            pfVar5[3] = fVar15 * *pfVar3 - fVar16 * pfVar3[1];
            fVar16 = pfVar10[-7] - *pfVar5;
            fVar15 = pfVar10[-6] - pfVar5[1];
            pfVar10[-7] = *pfVar5 + pfVar10[-7];
            pfVar10[-6] = pfVar10[-6] + pfVar5[1];
            pfVar10 = pfVar10 + -8;
            *pfVar5 = fVar15 * pfVar4[1] + fVar16 * *pfVar4;
            pfVar3 = pfVar4 + iVar2;
            pfVar5[1] = fVar15 * *pfVar4 - fVar16 * pfVar4[1];
            pfVar5 = pfVar5 + -8;
          } while (pfVar11 <= pfVar5);
          pfVar11 = pfVar11 + (lVar6 >> (bVar13 & 0x3f));
          uVar12 = uVar12 - 1;
          param_2 = in_stack_00000068;
          unaff_EBX = in_stack_00000070;
        } while (uVar12 != 0);
      }
      bVar13 = bVar13 + 1;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      iVar14 = iVar14 + -1;
      pfVar11 = param_2;
    } while (0 < iVar14);
  }
  if (0 < unaff_EBX) {
    uVar12 = (uint64_t)((unaff_EBX - 1U >> 5) + 1);
    do {
      FUN_18083e930(param_2);
      param_2 = param_2 + 0x20;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}





// 函数: void FUN_18083e561(void)
void FUN_18083e561(void)

{
  int64_t lVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int unaff_EBX;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  float *pfVar10;
  uint64_t uVar11;
  byte unaff_R12B;
  float *unaff_R13;
  int unaff_R15D;
  float fVar12;
  float fVar13;
  float *in_stack_00000060;
  float *in_stack_00000068;
  int in_stack_00000070;
  
  uVar7 = 2;
  do {
    pfVar5 = unaff_R13;
    if (0 < (int)uVar7) {
      lVar9 = (int64_t)unaff_EBX >> (unaff_R12B & 0x3f);
      iVar2 = 4 << (unaff_R12B & 0x1f);
      lVar8 = lVar9 >> 1;
      lVar6 = (int64_t)unaff_EBX;
      lVar1 = lVar8 + -8;
      uVar11 = (uint64_t)uVar7;
      do {
        pfVar5 = unaff_R13 + lVar1;
        pfVar10 = unaff_R13 + (lVar9 - lVar8) + 7 + lVar1;
        pfVar3 = in_stack_00000060;
        do {
          fVar13 = pfVar10[-1] - pfVar5[6];
          fVar12 = *pfVar10 - pfVar5[7];
          pfVar10[-1] = pfVar5[6] + pfVar10[-1];
          *pfVar10 = *pfVar10 + pfVar5[7];
          pfVar5[6] = fVar12 * pfVar3[1] + fVar13 * *pfVar3;
          pfVar4 = pfVar3 + iVar2;
          pfVar5[7] = fVar12 * *pfVar3 - fVar13 * pfVar3[1];
          fVar13 = pfVar10[-3] - pfVar5[4];
          fVar12 = pfVar10[-2] - pfVar5[5];
          pfVar10[-3] = pfVar5[4] + pfVar10[-3];
          pfVar10[-2] = pfVar10[-2] + pfVar5[5];
          pfVar5[4] = fVar12 * pfVar4[1] + fVar13 * *pfVar4;
          pfVar3 = pfVar4 + iVar2;
          pfVar5[5] = fVar12 * *pfVar4 - fVar13 * pfVar4[1];
          fVar13 = pfVar10[-5] - pfVar5[2];
          fVar12 = pfVar10[-4] - pfVar5[3];
          pfVar10[-5] = pfVar5[2] + pfVar10[-5];
          pfVar10[-4] = pfVar10[-4] + pfVar5[3];
          pfVar5[2] = fVar12 * pfVar3[1] + fVar13 * *pfVar3;
          pfVar4 = pfVar3 + iVar2;
          pfVar5[3] = fVar12 * *pfVar3 - fVar13 * pfVar3[1];
          fVar13 = pfVar10[-7] - *pfVar5;
          fVar12 = pfVar10[-6] - pfVar5[1];
          pfVar10[-7] = *pfVar5 + pfVar10[-7];
          pfVar10[-6] = pfVar10[-6] + pfVar5[1];
          pfVar10 = pfVar10 + -8;
          *pfVar5 = fVar12 * pfVar4[1] + fVar13 * *pfVar4;
          pfVar3 = pfVar4 + iVar2;
          pfVar5[1] = fVar12 * *pfVar4 - fVar13 * pfVar4[1];
          pfVar5 = pfVar5 + -8;
        } while (unaff_R13 <= pfVar5);
        unaff_R13 = unaff_R13 + (lVar6 >> (unaff_R12B & 0x3f));
        uVar11 = uVar11 - 1;
        pfVar5 = in_stack_00000068;
        unaff_EBX = in_stack_00000070;
      } while (uVar11 != 0);
    }
    unaff_R12B = unaff_R12B + 1;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    unaff_R15D = unaff_R15D + -1;
    unaff_R13 = pfVar5;
  } while (0 < unaff_R15D);
  if (0 < unaff_EBX) {
    uVar11 = (uint64_t)((unaff_EBX - 1U >> 5) + 1);
    do {
      FUN_18083e930(pfVar5);
      pfVar5 = pfVar5 + 0x20;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}





// 函数: void FUN_18083e7b0(void)
void FUN_18083e7b0(void)

{
  uint64_t uVar1;
  int unaff_EBX;
  int64_t unaff_R13;
  
  if (0 < unaff_EBX) {
    uVar1 = (uint64_t)((unaff_EBX - 1U >> 5) + 1);
    do {
      FUN_18083e930(unaff_R13);
      unaff_R13 = unaff_R13 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}





// 函数: void FUN_18083e7be(void)
void FUN_18083e7be(void)

{
  uint64_t uVar1;
  int unaff_EBX;
  int64_t unaff_R13;
  
  uVar1 = (uint64_t)((unaff_EBX - 1U >> 5) + 1);
  do {
    FUN_18083e930(unaff_R13);
    unaff_R13 = unaff_R13 + 0x80;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}





// 函数: void FUN_18083e7e0(float *param_1)
void FUN_18083e7e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1 - param_1[8];
  fVar3 = param_1[1] - param_1[9];
  param_1[8] = param_1[8] + *param_1;
  param_1[9] = param_1[9] + param_1[1];
  fVar6 = param_1[0xb];
  fVar2 = param_1[10];
  *param_1 = (fVar1 + fVar3) * 0.70710677;
  param_1[1] = (fVar3 - fVar1) * 0.70710677;
  fVar1 = param_1[3];
  param_1[10] = param_1[2] + fVar2;
  param_1[3] = fVar2 - param_1[2];
  param_1[0xb] = fVar6 + fVar1;
  fVar2 = param_1[0xd] - param_1[5];
  param_1[2] = fVar1 - fVar6;
  fVar1 = param_1[0xc] - param_1[4];
  param_1[0xd] = param_1[5] + param_1[0xd];
  param_1[0xc] = param_1[4] + param_1[0xc];
  fVar6 = param_1[0xe];
  param_1[4] = (fVar1 - fVar2) * 0.70710677;
  param_1[5] = (fVar2 + fVar1) * 0.70710677;
  fVar2 = param_1[0xf];
  param_1[0xe] = param_1[6] + fVar6;
  param_1[6] = fVar6 - param_1[6];
  param_1[0xf] = param_1[7] + fVar2;
  param_1[7] = fVar2 - param_1[7];
  FUN_18083ec20();
  fVar3 = param_1[10] + param_1[0xe];
  fVar5 = param_1[0xe] - param_1[10];
  fVar6 = param_1[8];
  fVar2 = fVar6 + param_1[0xc];
  fVar6 = param_1[0xc] - fVar6;
  fVar1 = param_1[0xd] - param_1[9];
  fVar4 = param_1[9] + param_1[0xd];
  param_1[0xe] = fVar2 + fVar3;
  param_1[0xc] = fVar3 - fVar2;
  fVar2 = param_1[0xf] - param_1[0xb];
  fVar3 = param_1[0xb] + param_1[0xf];
  param_1[8] = fVar5 + fVar1;
  param_1[10] = fVar5 - fVar1;
  param_1[0xb] = fVar6 + fVar2;
  param_1[9] = fVar2 - fVar6;
  param_1[0xf] = fVar3 + fVar4;
  param_1[0xd] = fVar3 - fVar4;
  return;
}





// 函数: void FUN_18083e930(float *param_1)
void FUN_18083e930(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = param_1[0x1e];
  fVar2 = param_1[0x1f];
  param_1[0x1e] = param_1[0xe] + fVar3;
  param_1[0x1f] = param_1[0xf] + fVar2;
  param_1[0xf] = fVar2 - param_1[0xf];
  fVar2 = param_1[0x1d] - param_1[0xd];
  param_1[0xe] = fVar3 - param_1[0xe];
  fVar3 = param_1[0x1c] - param_1[0xc];
  param_1[0x1d] = param_1[0xd] + param_1[0x1d];
  param_1[0x1c] = param_1[0xc] + param_1[0x1c];
  fVar4 = param_1[0x1a] - param_1[10];
  param_1[0xc] = fVar3 * 0.9238795 - fVar2 * 0.38268343;
  param_1[0xd] = fVar2 * 0.9238795 + fVar3 * 0.38268343;
  fVar3 = param_1[0x1b] - param_1[0xb];
  param_1[0x1a] = param_1[10] + param_1[0x1a];
  param_1[0x1b] = param_1[0xb] + param_1[0x1b];
  fVar5 = param_1[0x18] - param_1[8];
  param_1[10] = (fVar4 - fVar3) * 0.70710677;
  param_1[0xb] = (fVar3 + fVar4) * 0.70710677;
  fVar4 = param_1[0x19] - param_1[9];
  param_1[0x18] = param_1[8] + param_1[0x18];
  param_1[0x19] = param_1[9] + param_1[0x19];
  param_1[8] = fVar5 * 0.38268343 - fVar4 * 0.9238795;
  fVar3 = param_1[0x17];
  fVar2 = param_1[6];
  param_1[9] = fVar5 * 0.9238795 + fVar4 * 0.38268343;
  fVar4 = param_1[0x16];
  param_1[0x17] = fVar3 + param_1[7];
  param_1[6] = param_1[7] - fVar3;
  param_1[0x16] = fVar2 + fVar4;
  param_1[7] = fVar4 - fVar2;
  fVar3 = param_1[5] - param_1[0x15];
  fVar2 = param_1[4] - param_1[0x14];
  param_1[0x15] = param_1[0x15] + param_1[5];
  param_1[0x14] = param_1[0x14] + param_1[4];
  fVar4 = param_1[2] - param_1[0x12];
  param_1[4] = fVar3 * 0.9238795 + fVar2 * 0.38268343;
  param_1[5] = fVar3 * 0.38268343 - fVar2 * 0.9238795;
  fVar2 = param_1[3] - param_1[0x13];
  param_1[0x12] = param_1[0x12] + param_1[2];
  fVar3 = param_1[0x10];
  param_1[0x13] = param_1[0x13] + param_1[3];
  fVar5 = *param_1 - fVar3;
  param_1[3] = (fVar2 - fVar4) * 0.70710677;
  param_1[0x10] = fVar3 + *param_1;
  param_1[2] = (fVar2 + fVar4) * 0.70710677;
  fVar3 = param_1[1] - param_1[0x11];
  param_1[0x11] = param_1[0x11] + param_1[1];
  *param_1 = fVar5 * 0.9238795 + fVar3 * 0.38268343;
  param_1[1] = fVar3 * 0.9238795 - fVar5 * 0.38268343;
  pfVar1 = (float *)FUN_18083e7e0();
  fVar4 = *pfVar1 - pfVar1[8];
  fVar5 = pfVar1[1] - pfVar1[9];
  pfVar1[8] = pfVar1[8] + *pfVar1;
  pfVar1[9] = pfVar1[9] + pfVar1[1];
  fVar3 = pfVar1[0xb];
  fVar2 = pfVar1[10];
  *pfVar1 = (fVar4 + fVar5) * 0.70710677;
  pfVar1[1] = (fVar5 - fVar4) * 0.70710677;
  fVar4 = pfVar1[3];
  pfVar1[10] = pfVar1[2] + fVar2;
  pfVar1[3] = fVar2 - pfVar1[2];
  pfVar1[0xb] = fVar3 + fVar4;
  fVar2 = pfVar1[0xd] - pfVar1[5];
  pfVar1[2] = fVar4 - fVar3;
  fVar4 = pfVar1[0xc] - pfVar1[4];
  pfVar1[0xd] = pfVar1[5] + pfVar1[0xd];
  pfVar1[0xc] = pfVar1[4] + pfVar1[0xc];
  fVar3 = pfVar1[0xe];
  pfVar1[4] = (fVar4 - fVar2) * 0.70710677;
  pfVar1[5] = (fVar2 + fVar4) * 0.70710677;
  fVar2 = pfVar1[0xf];
  pfVar1[0xe] = pfVar1[6] + fVar3;
  pfVar1[6] = fVar3 - pfVar1[6];
  pfVar1[0xf] = pfVar1[7] + fVar2;
  pfVar1[7] = fVar2 - pfVar1[7];
  FUN_18083ec20();
  fVar5 = pfVar1[10] + pfVar1[0xe];
  fVar7 = pfVar1[0xe] - pfVar1[10];
  fVar3 = pfVar1[8];
  fVar2 = fVar3 + pfVar1[0xc];
  fVar3 = pfVar1[0xc] - fVar3;
  fVar4 = pfVar1[0xd] - pfVar1[9];
  fVar6 = pfVar1[9] + pfVar1[0xd];
  pfVar1[0xe] = fVar2 + fVar5;
  pfVar1[0xc] = fVar5 - fVar2;
  fVar2 = pfVar1[0xf] - pfVar1[0xb];
  fVar5 = pfVar1[0xb] + pfVar1[0xf];
  pfVar1[8] = fVar7 + fVar4;
  pfVar1[10] = fVar7 - fVar4;
  pfVar1[0xb] = fVar3 + fVar2;
  pfVar1[9] = fVar2 - fVar3;
  pfVar1[0xf] = fVar5 + fVar6;
  pfVar1[0xd] = fVar5 - fVar6;
  return;
}





// 函数: void FUN_18083ec20(float *param_1)
void FUN_18083ec20(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_1[2] + param_1[6];
  fVar5 = param_1[6] - param_1[2];
  fVar1 = *param_1 + param_1[4];
  fVar6 = param_1[4] - *param_1;
  fVar2 = param_1[5] - param_1[1];
  fVar4 = param_1[1] + param_1[5];
  param_1[6] = fVar1 + fVar3;
  param_1[4] = fVar3 - fVar1;
  fVar1 = param_1[7] - param_1[3];
  fVar3 = param_1[3] + param_1[7];
  *param_1 = fVar5 + fVar2;
  param_1[2] = fVar5 - fVar2;
  param_1[3] = fVar6 + fVar1;
  param_1[1] = fVar1 - fVar6;
  param_1[7] = fVar3 + fVar4;
  param_1[5] = fVar3 - fVar4;
  return;
}



uint64_t * FUN_18083eec0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_9416_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}



uint64_t * FUN_18083ef10(uint64_t param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  int32_t *puVar6;
  uint uVar7;
  uint64_t uVar8;
  
  *(int8_t *)(param_2 + 1) = 0;
  *(int32_t *)(param_2 + 4) = 0xffffffff;
  uVar8 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  param_2[6] = param_2 + 8;
  param_2[7] = param_2 + 0xe;
  *param_2 = &unknown_var_9632_ptr;
  param_2[8] = &system_string1_ptr;
  *(int8_t *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  puVar6 = (int32_t *)SystemDataFlowProcessor();
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(int32_t *)(param_2 + 0xc) = *puVar6;
  *(int32_t *)((int64_t)param_2 + 100) = uVar1;
  *(int32_t *)(param_2 + 0xd) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0x6c) = uVar3;
  *(int8_t *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = &unknown_var_9592_ptr;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  iVar4 = func_0x000180242600();
  if (iVar4 != 0) {
    do {
      if (*(int64_t *)(uVar8 * 8 + 0x180bef750) == 0x180bef740) {
        *(int *)(param_2 + 4) = (int)uVar8;
        return param_2;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar5 = func_0x000180242600();
    } while (uVar7 < uVar5);
  }
  *(int32_t *)(param_2 + 4) = 0xffffffff;
  return param_2;
}



uint64_t * FUN_18083eff0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_1808_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_18083f030(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  uVar4 = 0;
  *(int8_t *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  *(int32_t *)(param_2 + 4) = 0xffffffff;
  param_2[6] = param_2 + 7;
  *param_2 = &unknown_var_9736_ptr;
  param_2[7] = &unknown_var_9696_ptr;
  *(int8_t *)(param_2 + 8) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  iVar1 = func_0x000180242600();
  if (iVar1 != 0) {
    do {
      if (*(int64_t *)(uVar4 * 8 + 0x180bef750) == 0x180bef748) {
        *(int *)(param_2 + 4) = (int)uVar4;
        return param_2;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar2 = func_0x000180242600();
    } while (uVar3 < uVar2);
  }
  *(int32_t *)(param_2 + 4) = 0xffffffff;
  return param_2;
}



uint64_t * FUN_18083f0e0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_9496_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}





// 函数: void FUN_18083f120(int64_t param_1,uint64_t param_2)
void FUN_18083f120(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  
  puVar3 = (uint64_t *)(param_1 + 0x30);
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(*(int64_t *)*puVar3 + 0x10))((int64_t *)*puVar3,param_2);
    if (iVar1 != 0) {
      return;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 == 0);
  return;
}



int FUN_18083f170(int64_t *param_1)

{
  int iVar1;
  void *puStack_28;
  uint64_t uStack_20;
  void *puStack_18;
  void **ppuStack_10;
  
  uStack_20 = 0;
  puStack_28 = &unknown_var_9424_ptr;
  puStack_18 = &unknown_var_9416_ptr;
  ppuStack_10 = &puStack_28;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&puStack_18);
  if (iVar1 != 0) {
    uStack_20._0_4_ = iVar1;
  }
  return (int)uStack_20;
}



uint64_t FUN_18083f1c0(int64_t param_1)

{
  char cVar1;
  int iVar2;
  uint64_t *puVar3;
  
  iVar2 = 0;
  puVar3 = (uint64_t *)(param_1 + 0x30);
  do {
    cVar1 = (**(code **)(*(int64_t *)*puVar3 + 8))();
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 == 0);
  return 1;
}



uint64_t FUN_18083f210(int64_t param_1,uint64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  uint64_t uVar6;
  uint auStackX_18 [2];
  
  plVar4 = (int64_t *)(param_1 + 0x30);
  *param_3 = 0;
  iVar5 = 0;
  do {
    plVar1 = (int64_t *)*plVar4;
    auStackX_18[0] = 0;
    uVar2 = func_0x00018076a7d0(*param_2,auStackX_18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar6 = (uint64_t)auStackX_18[0];
    plVar1[3] = 0;
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,plVar1 + 3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = plVar1[3];
    if (lVar3 == 0) {
      *(int8_t *)(plVar1 + 1) = 1;
      auStackX_18[0] = 0;
      uVar2 = func_0x00018076a7d0(*param_2,auStackX_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      plVar1[2] = auStackX_18[0] - uVar6;
      lVar3 = plVar1[3];
    }
    *param_3 = *param_3 + lVar3;
    iVar5 = iVar5 + 1;
    plVar4 = plVar4 + 1;
  } while (iVar5 == 0);
  return 0;
}



uint64_t FUN_18083f2f0(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int iVar5;
  
  plVar4 = (int64_t *)(param_1 + 0x30);
  iVar5 = 0;
  do {
    plVar1 = (int64_t *)*plVar4;
    if ((char)plVar1[1] == '\0') {
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
LAB_18083f348:
      if ((int)uVar3 != 0) goto LAB_18083f34c;
    }
    else {
      if (*param_2 != 0) {
        uVar3 = FUN_18076a440(*param_2,(int)plVar1[2],1);
        goto LAB_18083f348;
      }
      uVar3 = 0x1c;
LAB_18083f34c:
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    lVar2 = *plVar4;
    iVar5 = iVar5 + 1;
    plVar4 = plVar4 + 1;
    param_3 = param_3 + *(int64_t *)(lVar2 + 0x18);
    if (iVar5 != 0) {
      return 0;
    }
  } while( true );
}





