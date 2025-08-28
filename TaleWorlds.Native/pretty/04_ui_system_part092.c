#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part092.c - 16 个函数
// 函数: void function_72081d(void)
void function_72081d(void)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  int64_t unaff_RBX;
  float *unaff_RSI;
  float *pfVar11;
  int64_t lVar12;
  int64_t lVar13;
  float *pfVar14;
  uint in_R11D;
  int unaff_R14D;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  lVar13 = 0;
  pfVar11 = unaff_RSI + 1;
  while( true ) {
    lVar9 = 0;
    fVar15 = unaff_XMM7_Da;
    if ((0 < (int)in_R11D) && (7 < in_R11D)) {
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      uVar10 = in_R11D & 0x80000007;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
      }
      pfVar7 = pfVar11 + -3;
      do {
        pfVar5 = (float *)(unaff_RBX + lVar9 * 4);
        pfVar14 = pfVar7 + -5;
        pfVar1 = pfVar7 + -3;
        pfVar2 = pfVar7 + -4;
        fVar19 = fVar19 + pfVar7[2] * *pfVar5;
        fVar20 = fVar20 + pfVar7[1] * pfVar5[1];
        fVar21 = fVar21 + *pfVar7 * pfVar5[2];
        fVar22 = fVar22 + pfVar7[-1] * pfVar5[3];
        pfVar5 = pfVar7 + -2;
        pfVar7 = pfVar7 + -8;
        pfVar6 = (float *)(unaff_RBX + 0x10 + lVar9 * 4);
        lVar9 = lVar9 + 8;
        fVar15 = fVar15 + *pfVar5 * *pfVar6;
        fVar16 = fVar16 + *pfVar1 * pfVar6[1];
        fVar17 = fVar17 + *pfVar2 * pfVar6[2];
        fVar18 = fVar18 + *pfVar14 * pfVar6[3];
      } while (lVar9 < (int)(in_R11D - uVar10));
      fVar15 = fVar21 + fVar17 + fVar19 + fVar15 + fVar22 + fVar18 + fVar20 + fVar16;
    }
    if (lVar9 < lVar13) {
      if (3 < lVar13 - lVar9) {
        pfVar7 = (float *)(unaff_RBX + 8 + lVar9 * 4);
        pfVar14 = unaff_RSI + (lVar13 - lVar9) + -2;
        lVar12 = ((lVar13 - lVar9) - 4U >> 2) + 1;
        lVar9 = lVar9 + lVar12 * 4;
        do {
          pfVar1 = pfVar14 + 2;
          pfVar2 = pfVar7 + -2;
          pfVar5 = pfVar14 + 1;
          pfVar6 = pfVar7 + -1;
          fVar16 = *pfVar14;
          fVar17 = *pfVar7;
          pfVar3 = pfVar14 + -1;
          pfVar4 = pfVar7 + 1;
          pfVar14 = pfVar14 + -4;
          pfVar7 = pfVar7 + 4;
          fVar15 = *pfVar1 * *pfVar2 + fVar15 + *pfVar5 * *pfVar6 + fVar16 * fVar17 +
                   *pfVar3 * *pfVar4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (lVar9 < lVar13) {
        pfVar7 = unaff_RSI + (lVar13 - lVar9);
        do {
          lVar12 = lVar9 * 4;
          lVar9 = lVar9 + 1;
          fVar16 = *pfVar7;
          pfVar7 = pfVar7 + -1;
          fVar15 = fVar15 + *(float *)(unaff_RBX + lVar12) * fVar16;
        } while (lVar9 < lVar13);
      }
    }
    lVar9 = 0;
    in_R11D = in_R11D + 1;
    lVar12 = (int64_t)(int)in_R11D >> 1;
    fVar15 = (fVar15 + *pfVar11) * (-1.0 / unaff_XMM6_Da);
    *(float *)((int64_t)pfVar11 + (unaff_RBX - (int64_t)unaff_RSI) + -4) = fVar15;
    if (3 < lVar12) {
      pfVar14 = (float *)((unaff_RBX - (int64_t)unaff_RSI) + -0xc + (int64_t)pfVar11);
      pfVar7 = (float *)(unaff_RBX + 8);
      lVar8 = (lVar12 - 4U >> 2) + 1;
      lVar9 = lVar8 * 4;
      do {
        fVar16 = pfVar14[1];
        fVar17 = pfVar7[-2];
        pfVar7[-2] = fVar16 * fVar15 + fVar17;
        fVar18 = *pfVar14;
        pfVar14[1] = fVar17 * fVar15 + fVar16;
        fVar16 = pfVar7[-1];
        pfVar7[-1] = fVar18 * fVar15 + fVar16;
        fVar17 = pfVar14[-1];
        *pfVar14 = fVar16 * fVar15 + fVar18;
        fVar16 = *pfVar7;
        *pfVar7 = fVar17 * fVar15 + fVar16;
        fVar18 = pfVar14[-2];
        pfVar14[-1] = fVar16 * fVar15 + fVar17;
        fVar16 = pfVar7[1];
        pfVar7[1] = fVar18 * fVar15 + fVar16;
        pfVar7 = pfVar7 + 4;
        pfVar14[-2] = fVar16 * fVar15 + fVar18;
        pfVar14 = pfVar14 + -4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar9 < lVar12) {
      pfVar7 = (float *)(unaff_RBX + ((lVar13 - lVar9) + -1) * 4);
      do {
        fVar16 = *pfVar7;
        fVar17 = *(float *)(unaff_RBX + lVar9 * 4);
        *(float *)(unaff_RBX + lVar9 * 4) = fVar16 * fVar15 + fVar17;
        lVar9 = lVar9 + 1;
        *pfVar7 = fVar17 * fVar15 + fVar16;
        pfVar7 = pfVar7 + -1;
      } while (lVar9 < lVar12);
    }
    unaff_XMM6_Da = unaff_XMM6_Da - fVar15 * fVar15 * unaff_XMM6_Da;
    if (unaff_XMM6_Da < *unaff_RSI * 0.001) break;
    lVar13 = lVar13 + 1;
    pfVar11 = pfVar11 + 1;
    if (unaff_R14D <= (int)in_R11D) {
      return;
    }
  }
  return;
}
// 函数: void function_720b35(void)
void function_720b35(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_720b60(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void function_720b60(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  int8_t stack_array_78 [4];
  int32_t local_var_74;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  local_var_74 = param_4;
  local_var_68 = param_1;
  local_var_60 = param_3;
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_720e10(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void function_720e10(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int param_5,uint64_t param_6)
{
  uint64_t uVar1;
  int8_t stack_array_a8 [8];
  int32_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_60;
  uint64_t local_var_50;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  uVar1 = (int64_t)param_5 * 4 + 0xf;
  local_var_98 = param_6;
  if (uVar1 <= (uint64_t)((int64_t)param_5 * 4)) {
    uVar1 = 0xffffffffffffff0;
  }
  local_var_a0 = param_4;
  local_var_90 = param_3;
  local_var_88 = param_1;
  local_var_60 = param_2;
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0(uVar1 & 0xfffffffffffffff0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7213f0(void)
void function_7213f0(void)
{
  uint64_t stack_array_38 [4];
  stack_array_38[0] = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_38;
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_721540(void)
void function_721540(void)
{
  uint64_t stack_array_28 [2];
  stack_array_28[0] = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_28;
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_721650(int64_t param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)
void function_721650(int64_t param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  uVar4 = (uint64_t)param_4;
  iVar3 = 0;
  if ((param_5 * 2 < (int)param_2) && (param_6 != 0)) {
    fVar9 = (float)(int)param_2 /
            (float)(int)(*(int *)(&rendering_buffer_2596_ptr + (int64_t)param_6 * 4) * param_5 + param_2);
    fVar9 = fVar9 * fVar9 * 0.5;
    uVar5 = cosf(fVar9 * 1.5707964);
    uVar6 = cosf((1.0 - fVar9) * 1.5707964);
    if ((int)(param_4 * 8) <= (int)param_2) {
      iVar2 = param_4 * 2;
      iVar3 = 1;
      while (((int)param_4 >> 2) + iVar2 < (int)param_2) {
        iVar2 = (iVar3 + 2) * (iVar3 + 1) * param_4;
        iVar3 = iVar3 + 1;
      }
    }
    uVar1 = param_2 / uVar4;
    if (0 < (int)param_4) {
      do {
        if (param_3 < 0) {
          if (iVar3 != 0) {
            function_721810(param_1,uVar1,iVar3,uVar6,uVar5);
          }
          uVar8 = uVar5;
          uVar7 = uVar6;
          iVar2 = 1;
LAB_1807217c9:
          function_721810(param_1,uVar1,iVar2,uVar8,uVar7);
        }
        else {
          function_721810(param_1,uVar1,1,uVar5,uVar6 ^ 0x80000000);
          if (iVar3 != 0) {
            uVar7 = uVar5 ^ 0x80000000;
            uVar8 = uVar6;
            iVar2 = iVar3;
            goto LAB_1807217c9;
          }
        }
        param_1 = param_1 + (int64_t)(int)uVar1 * 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}
// 函数: void function_721698(int64_t param_1,int param_2)
void function_721698(int64_t param_1,int param_2)
{
  uint64_t uVar1;
  int iVar2;
  int64_t in_RAX;
  int unaff_EBX;
  uint64_t unaff_RBP;
  uint unaff_ESI;
  int64_t unaff_RDI;
  int iVar3;
  int unaff_R15D;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  fVar8 = (float)(int)unaff_ESI /
          (float)(int)(*(int *)(param_1 + -4 + in_RAX * 4) * param_2 + unaff_ESI);
  fVar8 = fVar8 * fVar8 * 0.5;
  uVar4 = cosf(fVar8 * 1.5707964);
  uVar5 = cosf((1.0 - fVar8) * 1.5707964);
  iVar3 = (int)unaff_RBP;
  if (iVar3 * 8 <= (int)unaff_ESI) {
    iVar2 = iVar3 * 2;
    unaff_EBX = 1;
    while ((iVar3 >> 2) + iVar2 < (int)unaff_ESI) {
      iVar2 = (unaff_EBX + 2) * (unaff_EBX + 1) * iVar3;
      unaff_EBX = unaff_EBX + 1;
    }
  }
  uVar1 = (uint64_t)unaff_ESI / (unaff_RBP & 0xffffffff);
  if (0 < iVar3) {
    do {
      if (unaff_R15D < 0) {
        if (unaff_EBX != 0) {
          function_721810(unaff_RDI,uVar1,unaff_EBX,uVar5,uVar4);
        }
        uVar7 = uVar4;
        uVar6 = uVar5;
        iVar3 = 1;
LAB_1807217c9:
        function_721810(unaff_RDI,uVar1,iVar3,uVar7,uVar6);
      }
      else {
        function_721810(unaff_RDI,uVar1,1,uVar4,uVar5 ^ 0x80000000);
        if (unaff_EBX != 0) {
          uVar6 = uVar4 ^ 0x80000000;
          uVar7 = uVar5;
          iVar3 = unaff_EBX;
          goto LAB_1807217c9;
        }
      }
      unaff_RDI = unaff_RDI + (int64_t)(int)uVar1 * 4;
      unaff_RBP = unaff_RBP - 1;
    } while (unaff_RBP != 0);
  }
  return;
}
// 函数: void function_72174a(void)
void function_72174a(void)
{
  int unaff_EBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int iVar1;
  int unaff_R15D;
  do {
    if (unaff_R15D < 0) {
      if (unaff_EBX != 0) {
        function_721810(unaff_RDI,unaff_RSI & 0xffffffff,unaff_EBX);
      }
      iVar1 = 1;
LAB_1807217c9:
      function_721810(unaff_RDI,unaff_RSI & 0xffffffff,iVar1);
    }
    else {
      function_721810(unaff_RDI,unaff_RSI & 0xffffffff,1);
      iVar1 = unaff_EBX;
      if (unaff_EBX != 0) goto LAB_1807217c9;
    }
    unaff_RDI = unaff_RDI + unaff_RSI * 4;
    unaff_RBP = unaff_RBP + -1;
    if (unaff_RBP == 0) {
      return;
    }
  } while( true );
}
// 函数: void function_7217e4(void)
void function_7217e4(void)
{
  return;
}
// 函数: void function_7217f4(void)
void function_7217f4(void)
{
  return;
}
// 函数: void function_721810(float *param_1,int param_2,int param_3,float param_4,float param_5)
void function_721810(float *param_1,int param_2,int param_3,float param_4,float param_5)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  iVar6 = 0;
  fVar11 = -param_5;
  lVar8 = (int64_t)param_3;
  iVar10 = param_2 - param_3;
  pfVar9 = param_1;
  if (3 < iVar10) {
    pfVar5 = param_1 + lVar8;
    uVar4 = (iVar10 - 4U >> 2) + 1;
    uVar7 = (uint64_t)uVar4;
    iVar6 = uVar4 * 4;
    do {
      fVar1 = *pfVar9;
      fVar2 = *pfVar5;
      *pfVar5 = fVar2 * param_4 + fVar1 * param_5;
      fVar3 = pfVar5[1 - lVar8];
      *pfVar9 = fVar2 * fVar11 + fVar1 * param_4;
      fVar1 = pfVar5[1];
      pfVar9 = pfVar9 + 4;
      pfVar5[1] = fVar1 * param_4 + fVar3 * param_5;
      fVar2 = pfVar5[2 - lVar8];
      pfVar5[1 - lVar8] = fVar1 * fVar11 + fVar3 * param_4;
      fVar1 = pfVar5[2];
      pfVar5[2] = fVar1 * param_4 + fVar2 * param_5;
      fVar3 = pfVar5[3 - lVar8];
      pfVar5[2 - lVar8] = fVar1 * fVar11 + fVar2 * param_4;
      fVar1 = pfVar5[3];
      pfVar5[3] = fVar1 * param_4 + fVar3 * param_5;
      pfVar5[3 - lVar8] = fVar1 * fVar11 + fVar3 * param_4;
      pfVar5 = pfVar5 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (iVar6 < iVar10) {
    uVar7 = (uint64_t)(uint)(iVar10 - iVar6);
    do {
      fVar1 = *pfVar9;
      fVar2 = pfVar9[lVar8];
      pfVar9[lVar8] = fVar2 * param_4 + fVar1 * param_5;
      *pfVar9 = fVar2 * fVar11 + fVar1 * param_4;
      pfVar9 = pfVar9 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar4 = param_2 + param_3 * -2;
  iVar6 = uVar4 - 1;
  param_1 = param_1 + iVar6;
  if (-1 < iVar6) {
    if (3 < (int)uVar4) {
      uVar7 = (uint64_t)(uVar4 >> 2);
      iVar6 = iVar6 + (uVar4 >> 2) * -4;
      do {
        fVar1 = *param_1;
        fVar2 = param_1[lVar8];
        param_1[lVar8] = fVar2 * param_4 + fVar1 * param_5;
        fVar3 = param_1[-1];
        *param_1 = fVar2 * fVar11 + fVar1 * param_4;
        fVar1 = param_1[lVar8 + -1];
        param_1[lVar8 + -1] = fVar1 * param_4 + fVar3 * param_5;
        fVar2 = param_1[-2];
        param_1[-1] = fVar1 * fVar11 + fVar3 * param_4;
        fVar1 = param_1[lVar8 + -2];
        param_1[lVar8 + -2] = fVar1 * param_4 + fVar2 * param_5;
        fVar3 = param_1[-3];
        param_1[-2] = fVar1 * fVar11 + fVar2 * param_4;
        fVar1 = param_1[lVar8 + -3];
        param_1[lVar8 + -3] = fVar1 * param_4 + fVar3 * param_5;
        param_1[-3] = fVar1 * fVar11 + fVar3 * param_4;
        param_1 = param_1 + -4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    for (; -1 < iVar6; iVar6 = iVar6 + -1) {
      fVar1 = *param_1;
      fVar2 = param_1[lVar8];
      param_1[lVar8] = fVar2 * param_4 + fVar1 * param_5;
      *param_1 = fVar2 * fVar11 + fVar1 * param_4;
      param_1 = param_1 + -1;
    }
  }
  return;
}
// 函数: void function_72182d(float *param_1,int param_2,int param_3)
void function_72182d(float *param_1,int param_2,int param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  uint uVar4;
  float *pfVar5;
  uint64_t uVar6;
  int64_t lVar7;
  float *pfVar8;
  int in_R11D;
  int iVar9;
  float in_XMM5_Da;
  float fVar10;
  float unaff_XMM7_Da;
  fVar10 = -unaff_XMM7_Da;
  lVar7 = (int64_t)param_3;
  iVar9 = in_R11D - param_3;
  pfVar8 = param_1;
  if (3 < iVar9) {
    pfVar5 = param_1 + lVar7;
    uVar4 = (iVar9 - 4U >> 2) + 1;
    uVar6 = (uint64_t)uVar4;
    in_EAX = uVar4 * 4;
    do {
      fVar1 = *pfVar8;
      fVar2 = *pfVar5;
      *pfVar5 = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
      fVar3 = pfVar5[1 - lVar7];
      *pfVar8 = fVar2 * fVar10 + fVar1 * in_XMM5_Da;
      fVar1 = pfVar5[1];
      pfVar8 = pfVar8 + 4;
      pfVar5[1] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
      fVar2 = pfVar5[2 - lVar7];
      pfVar5[1 - lVar7] = fVar1 * fVar10 + fVar3 * in_XMM5_Da;
      fVar1 = pfVar5[2];
      pfVar5[2] = fVar1 * in_XMM5_Da + fVar2 * unaff_XMM7_Da;
      fVar3 = pfVar5[3 - lVar7];
      pfVar5[2 - lVar7] = fVar1 * fVar10 + fVar2 * in_XMM5_Da;
      fVar1 = pfVar5[3];
      pfVar5[3] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
      pfVar5[3 - lVar7] = fVar1 * fVar10 + fVar3 * in_XMM5_Da;
      pfVar5 = pfVar5 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (in_EAX < iVar9) {
    uVar6 = (uint64_t)(uint)(iVar9 - in_EAX);
    do {
      fVar1 = *pfVar8;
      fVar2 = pfVar8[lVar7];
      pfVar8[lVar7] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
      *pfVar8 = fVar2 * fVar10 + fVar1 * in_XMM5_Da;
      pfVar8 = pfVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar4 = param_2 + param_3 * -2;
  iVar9 = uVar4 - 1;
  param_1 = param_1 + iVar9;
  if (-1 < iVar9) {
    if (3 < (int)uVar4) {
      uVar6 = (uint64_t)(uVar4 >> 2);
      iVar9 = iVar9 + (uVar4 >> 2) * -4;
      do {
        fVar1 = *param_1;
        fVar2 = param_1[lVar7];
        param_1[lVar7] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
        fVar3 = param_1[-1];
        *param_1 = fVar2 * fVar10 + fVar1 * in_XMM5_Da;
        fVar1 = param_1[lVar7 + -1];
        param_1[lVar7 + -1] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
        fVar2 = param_1[-2];
        param_1[-1] = fVar1 * fVar10 + fVar3 * in_XMM5_Da;
        fVar1 = param_1[lVar7 + -2];
        param_1[lVar7 + -2] = fVar1 * in_XMM5_Da + fVar2 * unaff_XMM7_Da;
        fVar3 = param_1[-3];
        param_1[-2] = fVar1 * fVar10 + fVar2 * in_XMM5_Da;
        fVar1 = param_1[lVar7 + -3];
        param_1[lVar7 + -3] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
        param_1[-3] = fVar1 * fVar10 + fVar3 * in_XMM5_Da;
        param_1 = param_1 + -4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    for (; -1 < iVar9; iVar9 = iVar9 + -1) {
      fVar1 = *param_1;
      fVar2 = param_1[lVar7];
      param_1[lVar7] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
      *param_1 = fVar2 * fVar10 + fVar1 * in_XMM5_Da;
      param_1 = param_1 + -1;
    }
  }
  return;
}
// 函数: void function_721864(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void function_721864(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int64_t in_RAX;
  float *pfVar5;
  int iVar6;
  int unaff_EBX;
  uint64_t uVar7;
  int64_t unaff_RSI;
  float *in_R10;
  int in_R11D;
  int64_t unaff_R14;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  pfVar5 = (float *)(param_1 + in_RAX);
  uVar4 = (in_R11D - 4U >> 2) + 1;
  uVar7 = (uint64_t)uVar4;
  do {
    fVar1 = *in_R10;
    fVar2 = *pfVar5;
    *pfVar5 = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
    fVar3 = *(float *)((4 - in_RAX) + (int64_t)pfVar5);
    *in_R10 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
    fVar1 = pfVar5[1];
    in_R10 = in_R10 + 4;
    pfVar5[1] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
    fVar2 = pfVar5[2 - unaff_RSI];
    *(float *)((4 - in_RAX) + (int64_t)pfVar5) = fVar1 * unaff_XMM6_Da + fVar3 * in_XMM5_Da;
    fVar1 = pfVar5[2];
    pfVar5[2] = fVar1 * in_XMM5_Da + fVar2 * unaff_XMM7_Da;
    fVar3 = pfVar5[3 - unaff_RSI];
    pfVar5[2 - unaff_RSI] = fVar1 * unaff_XMM6_Da + fVar2 * in_XMM5_Da;
    fVar1 = pfVar5[3];
    pfVar5[3] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
    pfVar5[3 - unaff_RSI] = fVar1 * unaff_XMM6_Da + fVar3 * in_XMM5_Da;
    pfVar5 = pfVar5 + 4;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  if ((int)(uVar4 * 4) < in_R11D) {
    uVar7 = (uint64_t)(in_R11D + uVar4 * -4);
    do {
      fVar1 = *in_R10;
      fVar2 = in_R10[unaff_RSI];
      in_R10[unaff_RSI] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
      *in_R10 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
      in_R10 = in_R10 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar4 = unaff_EBX + (int)unaff_RSI * -2;
  iVar6 = uVar4 - 1;
  pfVar5 = (float *)(unaff_R14 + (int64_t)iVar6 * 4);
  if (-1 < iVar6) {
    if (3 < (int)uVar4) {
      uVar7 = (uint64_t)(uVar4 >> 2);
      iVar6 = iVar6 + (uVar4 >> 2) * -4;
      do {
        fVar1 = *pfVar5;
        fVar2 = pfVar5[param_4];
        pfVar5[param_4] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
        fVar3 = pfVar5[-1];
        *pfVar5 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
        fVar1 = pfVar5[param_4 + -1];
        pfVar5[param_4 + -1] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
        fVar2 = pfVar5[-2];
        pfVar5[-1] = fVar1 * unaff_XMM6_Da + fVar3 * in_XMM5_Da;
        fVar1 = pfVar5[param_4 + -2];
        pfVar5[param_4 + -2] = fVar1 * in_XMM5_Da + fVar2 * unaff_XMM7_Da;
        fVar3 = pfVar5[-3];
        pfVar5[-2] = fVar1 * unaff_XMM6_Da + fVar2 * in_XMM5_Da;
        fVar1 = pfVar5[param_4 + -3];
        pfVar5[param_4 + -3] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
        pfVar5[-3] = fVar1 * unaff_XMM6_Da + fVar3 * in_XMM5_Da;
        pfVar5 = pfVar5 + -4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    for (; -1 < iVar6; iVar6 = iVar6 + -1) {
      fVar1 = *pfVar5;
      fVar2 = pfVar5[param_4];
      pfVar5[param_4] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
      *pfVar5 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
      pfVar5 = pfVar5 + -1;
    }
  }
  return;
}
// 函数: void function_721984(void)
void function_721984(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  uint64_t uVar4;
  float *pfVar5;
  int iVar6;
  int unaff_EBX;
  uint uVar7;
  int64_t unaff_RSI;
  int64_t in_R9;
  float *in_R10;
  int in_R11D;
  int64_t unaff_R14;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  if (in_EAX < in_R11D) {
    uVar4 = (uint64_t)(uint)(in_R11D - in_EAX);
    do {
      fVar1 = *in_R10;
      fVar2 = in_R10[unaff_RSI];
      in_R10[unaff_RSI] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
      *in_R10 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
      in_R10 = in_R10 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar7 = unaff_EBX + (int)unaff_RSI * -2;
  iVar6 = uVar7 - 1;
  pfVar5 = (float *)(unaff_R14 + (int64_t)iVar6 * 4);
  if (-1 < iVar6) {
    if (3 < (int)uVar7) {
      uVar4 = (uint64_t)(uVar7 >> 2);
      iVar6 = iVar6 + (uVar7 >> 2) * -4;
      do {
        fVar1 = *pfVar5;
        fVar2 = pfVar5[in_R9];
        pfVar5[in_R9] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
        fVar3 = pfVar5[-1];
        *pfVar5 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
        fVar1 = pfVar5[in_R9 + -1];
        pfVar5[in_R9 + -1] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
        fVar2 = pfVar5[-2];
        pfVar5[-1] = fVar1 * unaff_XMM6_Da + fVar3 * in_XMM5_Da;
        fVar1 = pfVar5[in_R9 + -2];
        pfVar5[in_R9 + -2] = fVar1 * in_XMM5_Da + fVar2 * unaff_XMM7_Da;
        fVar3 = pfVar5[-3];
        pfVar5[-2] = fVar1 * unaff_XMM6_Da + fVar2 * in_XMM5_Da;
        fVar1 = pfVar5[in_R9 + -3];
        pfVar5[in_R9 + -3] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
        pfVar5[-3] = fVar1 * unaff_XMM6_Da + fVar3 * in_XMM5_Da;
        pfVar5 = pfVar5 + -4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    for (; -1 < iVar6; iVar6 = iVar6 + -1) {
      fVar1 = *pfVar5;
      fVar2 = pfVar5[in_R9];
      pfVar5[in_R9] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
      *pfVar5 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
      pfVar5 = pfVar5 + -1;
    }
  }
  return;
}
// 函数: void function_7219ee(float *param_1,int param_2,uint64_t param_3,int64_t param_4)
void function_7219ee(float *param_1,int param_2,uint64_t param_3,int64_t param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int unaff_EBX;
  uint64_t uVar5;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  if (3 < unaff_EBX) {
    uVar4 = param_2 + 1U >> 2;
    uVar5 = (uint64_t)uVar4;
    param_2 = param_2 + uVar4 * -4;
    do {
      fVar1 = *param_1;
      fVar2 = param_1[param_4];
      param_1[param_4] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
      fVar3 = param_1[-1];
      *param_1 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
      fVar1 = param_1[param_4 + -1];
      param_1[param_4 + -1] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
      fVar2 = param_1[-2];
      param_1[-1] = fVar1 * unaff_XMM6_Da + fVar3 * in_XMM5_Da;
      fVar1 = param_1[param_4 + -2];
      param_1[param_4 + -2] = fVar1 * in_XMM5_Da + fVar2 * unaff_XMM7_Da;
      fVar3 = param_1[-3];
      param_1[-2] = fVar1 * unaff_XMM6_Da + fVar2 * in_XMM5_Da;
      fVar1 = param_1[param_4 + -3];
      param_1[param_4 + -3] = fVar1 * in_XMM5_Da + fVar3 * unaff_XMM7_Da;
      param_1[-3] = fVar1 * unaff_XMM6_Da + fVar3 * in_XMM5_Da;
      param_1 = param_1 + -4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  for (; -1 < param_2; param_2 = param_2 + -1) {
    fVar1 = *param_1;
    fVar2 = param_1[param_4];
    param_1[param_4] = fVar2 * in_XMM5_Da + fVar1 * unaff_XMM7_Da;
    *param_1 = fVar2 * unaff_XMM6_Da + fVar1 * in_XMM5_Da;
    param_1 = param_1 + -1;
  }
  return;
}
uint function_721b40(int64_t param_1,uint param_2,uint param_3)
{
  uint uVar1;
  uint *puVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  if ((int)param_3 < 2) {
    return 1;
  }
  uVar1 = 0;
  iVar7 = 0;
  iVar5 = 0;
  do {
    uVar4 = 0;
    lVar3 = 0;
    puVar2 = (uint *)(param_1 + (int64_t)iVar7 * 4);
    do {
      uVar4 = uVar4 | *puVar2;
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)(param_2 / param_3));
    iVar6 = iVar5 + 1;
    iVar7 = iVar7 + param_2 / param_3;
    uVar1 = uVar1 | (uint)(uVar4 != 0) << ((byte)iVar5 & 0x1f);
    iVar5 = iVar6;
  } while (iVar6 < (int)param_3);
  return uVar1;
}