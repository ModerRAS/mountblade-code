#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part275.c - 12 个函数
// 函数: void NetworkProtocol_232ed(uint64_t param_1,int param_2)
void NetworkProtocol_232ed(uint64_t param_1,int param_2)
{
  uint uVar1;
  uint64_t uVar2;
  float *unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_R14;
  int unaff_R15D;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t *local_var_100;
  int64_t *local_var_108;
  if (param_2 != 0) {
    if (unaff_ESI == 1) {
      do {
        uVar1 = *(uint *)((int64_t)local_var_100 + 4);
        uVar2 = (uint64_t)uVar1;
        fVar7 = (float)(int)*(short *)(unaff_RDI + -4 + uVar2 * 2) * 3.0517578e-05;
        fVar10 = (float)(int)*(short *)(unaff_RDI + uVar2 * 2) * 3.0517578e-05;
        fVar8 = (float)(int)*(short *)(unaff_RDI + (uint64_t)(uVar1 + 1) * 2) * 3.0517578e-05;
        fVar6 = (float)(int)*(short *)(unaff_RDI + (uint64_t)(uVar1 + 2) * 2) * 3.0517578e-05;
        fVar9 = (float)(int)*(short *)(unaff_RDI + -2 + uVar2 * 2) * 3.0517578e-05;
        fVar5 = (float)(int)*(short *)(unaff_RDI + (uint64_t)(uVar1 + 3) * 2) * 3.0517578e-05;
        fVar11 = (float)(uint)*local_var_100 * 2.3283064e-10;
        *unaff_RBP = ((((((((fVar10 * 126.0 - fVar8 * 124.0) + fVar6 * 61.0) - fVar9 * 64.0) -
                         fVar5 * 12.0) + fVar7 * 13.0 +
                        ((fVar9 - fVar6) * 25.0 + (fVar8 - fVar10) * 50.0 + (fVar5 - fVar7) * 5.0) *
                        fVar11) * fVar11 +
                       ((((fVar8 * 66.0 - fVar10 * 70.0) - fVar6 * 33.0) + fVar9 * 39.0 +
                        fVar5 * 7.0) - fVar7 * 9.0)) * fVar11 +
                      ((((fVar8 + fVar9) * 16.0 - fVar7) - fVar10 * 30.0) - fVar6)) * fVar11 +
                     (fVar8 - fVar9) * 16.0 + (fVar7 - fVar6) + (fVar7 - fVar6)) * fVar11 *
                     0.041666668 + fVar10;
        unaff_RBP = unaff_RBP + 1;
        *local_var_100 = *local_var_100 + *local_var_108;
        unaff_R15D = unaff_R15D + -1;
      } while (unaff_R15D != 0);
    }
    else {
      uVar2 = (uint64_t)(uint)*local_var_100;
      do {
        iVar3 = 0;
        lVar4 = 0;
        fVar5 = (float)(uVar2 & 0xffffffff) * 2.3283064e-10;
        if (0 < unaff_ESI) {
          do {
            uVar1 = *(uint *)((int64_t)local_var_100 + 4);
            fVar9 = (float)(int)*(short *)(unaff_RDI +
                                          (((uint64_t)uVar1 - 2) * unaff_R14 + lVar4) * 2) *
                    3.0517578e-05;
            fVar10 = (float)(int)*(short *)(unaff_RDI +
                                           (((uint64_t)uVar1 - 1) * unaff_R14 + lVar4) * 2) *
                     3.0517578e-05;
            fVar11 = (float)(int)*(short *)(unaff_RDI + (uint64_t)(uVar1 * unaff_ESI + iVar3) * 2)
                     * 3.0517578e-05;
            fVar8 = (float)(int)*(short *)(unaff_RDI +
                                          (uint64_t)((uVar1 + 1) * unaff_ESI + iVar3) * 2) *
                    3.0517578e-05;
            fVar7 = (float)(int)*(short *)(unaff_RDI +
                                          (uint64_t)((uVar1 + 2) * unaff_ESI + iVar3) * 2) *
                    3.0517578e-05;
            fVar6 = (float)(int)*(short *)(unaff_RDI +
                                          (uint64_t)((uVar1 + 3) * unaff_ESI + iVar3) * 2) *
                    3.0517578e-05;
            iVar3 = iVar3 + 1;
            lVar4 = lVar4 + 1;
            *unaff_RBP = ((((((((fVar11 * 126.0 - fVar8 * 124.0) + fVar7 * 61.0) - fVar10 * 64.0) -
                             fVar6 * 12.0) + fVar9 * 13.0 +
                            ((fVar10 - fVar7) * 25.0 + (fVar8 - fVar11) * 50.0 +
                            (fVar6 - fVar9) * 5.0) * fVar5) * fVar5 +
                           ((((fVar8 * 66.0 - fVar11 * 70.0) - fVar7 * 33.0) + fVar10 * 39.0 +
                            fVar6 * 7.0) - fVar9 * 9.0)) * fVar5 +
                          ((((fVar8 + fVar10) * 16.0 - fVar9) - fVar11 * 30.0) - fVar7)) * fVar5 +
                         (fVar8 - fVar10) * 16.0 + (fVar9 - fVar7) + (fVar9 - fVar7)) * fVar5 *
                         0.041666668 + fVar11;
            unaff_RBP = unaff_RBP + 1;
          } while (lVar4 < unaff_R14);
        }
        *local_var_100 = *local_var_100 + *local_var_108;
        uVar2 = *local_var_100;
        unaff_R15D = unaff_R15D + -1;
      } while (unaff_R15D != 0);
    }
  }
  return;
}
// 函数: void NetworkProtocol_23cd0(int16_t *param_1,float *param_2,uint param_3,int param_4,int param_5,
void NetworkProtocol_23cd0(int16_t *param_1,float *param_2,uint param_3,int param_4,int param_5,
                  float param_6)
{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int16_t local_var_40;
  int16_t local_var_3c;
  uVar2 = param_3 >> 2;
  if (param_3 >> 2 != 0) {
    lVar3 = (int64_t)param_4;
    do {
      iVar4 = (int)(param_6 * *param_2);
      iVar1 = (int)(param_6 * param_2[param_5]);
      iVar5 = (int)(param_6 * param_2[param_5 * 2]);
      iVar6 = (int)(param_6 * param_2[param_5 * 3]);
      if (iVar4 < -0x8000) {
        iVar4 = 0x8000;
      }
      else if (0x7fff < iVar4) {
        iVar4 = 0x7fff;
      }
      *param_1 = (short)iVar4;
      local_var_3c = 0x7fff;
      if (iVar1 < -0x8000) {
        iVar1 = 0x8000;
      }
      else if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      param_1[lVar3] = (short)iVar1;
      if (iVar5 < -0x8000) {
        local_var_40 = 0x8000;
      }
      else {
        local_var_40 = local_var_3c;
        if (iVar5 < 0x8000) {
          local_var_40 = (int16_t)iVar5;
        }
      }
      param_1[lVar3 * 2] = local_var_40;
      if (iVar6 < -0x8000) {
        local_var_3c = 0x8000;
      }
      else if (iVar6 < 0x8000) {
        local_var_3c = (int16_t)iVar6;
      }
      param_1[lVar3 * 3] = local_var_3c;
      param_2 = param_2 + param_5 * 4;
      param_1 = param_1 + param_4 * 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    do {
      iVar1 = (int)(param_6 * *param_2);
      if (iVar1 < -0x8000) {
        iVar1 = 0x8000;
      }
      else if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      *param_1 = (short)iVar1;
      param_2 = param_2 + param_5;
      param_1 = param_1 + param_4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}
// 函数: void NetworkProtocol_23cf5(int16_t *param_1,float *param_2,float param_3,int param_4)
void NetworkProtocol_23cf5(int16_t *param_1,float *param_2,float param_3,int param_4)
{
  int iVar1;
  int iVar2;
  int64_t in_RAX;
  uint uVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint unaff_EDI;
  int64_t lVar4;
  uint in_R8D;
  uint uVar5;
  int iVar6;
  uint in_R10D;
  int iVar7;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int16_t stack_special_x_8;
  int16_t stack_special_x_c;
  uint local_var_60;
  int local_var_68;
  uint local_var_70;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  uVar3 = in_R8D >> 2;
  if (in_R8D >> 2 != 0) {
    *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
    *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
    *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
    *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
    *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
    iVar1 = (int)unaff_R15;
    lVar4 = (int64_t)param_4;
    do {
      uVar5 = (uint)(param_3 * *param_2);
      iVar2 = (int)(param_3 * param_2[unaff_R15]);
      iVar6 = (int)(param_3 * param_2[iVar1 * 2]);
      iVar7 = (int)(param_3 * param_2[iVar1 * 3]);
      if ((int)uVar5 < -0x8000) {
        uVar5 = 0x8000;
      }
      else if (0x7fff < (int)uVar5) {
        uVar5 = unaff_EDI & 0xffff;
      }
      *param_1 = (short)uVar5;
      stack_special_x_c = 0x7fff;
      if (iVar2 < -0x8000) {
        iVar2 = 0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      param_1[lVar4] = (short)iVar2;
      if (iVar6 < -0x8000) {
        stack_special_x_8 = 0x8000;
      }
      else {
        stack_special_x_8 = stack_special_x_c;
        if (iVar6 < 0x8000) {
          stack_special_x_8 = (int16_t)iVar6;
        }
      }
      param_1[lVar4 * 2] = stack_special_x_8;
      if (iVar7 < -0x8000) {
        stack_special_x_c = 0x8000;
      }
      else if (iVar7 < 0x8000) {
        stack_special_x_c = (int16_t)iVar7;
      }
      param_1[lVar4 * 3] = stack_special_x_c;
      param_2 = param_2 + iVar1 * 4;
      param_1 = param_1 + param_4 * 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    unaff_EDI = 0x7fff;
    unaff_R15 = (uint64_t)local_var_70;
    param_4 = local_var_68;
    in_R10D = local_var_60;
  }
  uVar3 = in_R10D & 3;
  if (uVar3 != 0) {
    do {
      uVar5 = (uint)(param_3 * *param_2);
      if ((int)uVar5 < -0x8000) {
        uVar5 = 0x8000;
      }
      else if ((int)unaff_EDI < (int)uVar5) {
        uVar5 = unaff_EDI & 0xffff;
      }
      *param_1 = (short)uVar5;
      param_2 = param_2 + (int)unaff_R15;
      param_1 = param_1 + param_4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}
// 函数: void NetworkProtocol_23d11(int16_t *param_1,float *param_2,float param_3,int param_4)
void NetworkProtocol_23d11(int16_t *param_1,float *param_2,float param_3,int param_4)
{
  uint uVar1;
  int iVar2;
  int64_t in_RAX;
  int unaff_EBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint in_R11D;
  int iVar6;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  int16_t stack_special_x_8;
  int16_t stack_special_x_c;
  ushort local_buffer_50;
  uint local_var_60;
  int local_var_68;
  int local_var_70;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  iVar2 = (int)unaff_R15;
  lVar3 = (int64_t)param_4;
  do {
    uVar4 = (uint)(param_3 * *param_2);
    uVar1 = (uint)(param_3 * param_2[unaff_R15]);
    iVar5 = (int)(param_3 * param_2[iVar2 * 2]);
    iVar6 = (int)(param_3 * param_2[iVar2 * 3]);
    if ((int)uVar4 < (int)in_R11D) {
      uVar4 = in_R11D & 0xffff;
    }
    else if (0x7fff < (int)uVar4) {
      uVar4 = (uint)local_buffer_50;
    }
    *param_1 = (short)uVar4;
    if ((int)uVar1 < (int)in_R11D) {
      uVar1 = in_R11D & 0xffff;
    }
    else if (0x7fff < (int)uVar1) {
      uVar1 = 0x7fff;
    }
    param_1[lVar3] = (short)uVar1;
    stack_special_x_c = (int16_t)in_R11D;
    stack_special_x_8 = stack_special_x_c;
    if (((int)in_R11D <= iVar5) && (stack_special_x_8 = 0x7fff, iVar5 < 0x8000)) {
      stack_special_x_8 = (int16_t)iVar5;
    }
    param_1[lVar3 * 2] = stack_special_x_8;
    if (((int)in_R11D <= iVar6) && (stack_special_x_c = 0x7fff, iVar6 < 0x8000)) {
      stack_special_x_c = (int16_t)iVar6;
    }
    param_1[lVar3 * 3] = stack_special_x_c;
    param_2 = param_2 + iVar2 * 4;
    param_1 = param_1 + param_4 * 4;
    unaff_EBX = unaff_EBX + -1;
  } while (unaff_EBX != 0);
  local_var_60 = local_var_60 & 3;
  if (local_var_60 != 0) {
    do {
      iVar2 = (int)(param_3 * *param_2);
      if (iVar2 < -0x8000) {
        iVar2 = 0x8000;
      }
      else if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      *param_1 = (short)iVar2;
      param_2 = param_2 + local_var_70;
      param_1 = param_1 + local_var_68;
      local_var_60 = local_var_60 - 1;
    } while (local_var_60 != 0);
  }
  return;
}
// 函数: void NetworkProtocol_23e52(int16_t *param_1,float *param_2,float param_3,int param_4)
void NetworkProtocol_23e52(int16_t *param_1,float *param_2,float param_3,int param_4)
{
  uint uVar1;
  uint unaff_EDI;
  uint in_R10D;
  uint uVar2;
  uint in_R11D;
  int unaff_R15D;
  uVar2 = in_R10D & 3;
  if (uVar2 != 0) {
    do {
      uVar1 = (uint)(param_3 * *param_2);
      if ((int)uVar1 < (int)in_R11D) {
        uVar1 = in_R11D & 0xffff;
      }
      else if ((int)unaff_EDI < (int)uVar1) {
        uVar1 = unaff_EDI & 0xffff;
      }
      *param_1 = (short)uVar1;
      param_2 = param_2 + unaff_R15D;
      param_1 = param_1 + param_4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}
// 函数: void NetworkProtocol_23e5d(int16_t *param_1,float *param_2,float param_3,int param_4)
void NetworkProtocol_23e5d(int16_t *param_1,float *param_2,float param_3,int param_4)
{
  uint uVar1;
  uint unaff_EDI;
  int in_R10D;
  uint in_R11D;
  int unaff_R15D;
  do {
    uVar1 = (uint)(param_3 * *param_2);
    if ((int)uVar1 < (int)in_R11D) {
      uVar1 = in_R11D & 0xffff;
    }
    else if ((int)unaff_EDI < (int)uVar1) {
      uVar1 = unaff_EDI & 0xffff;
    }
    *param_1 = (short)uVar1;
    param_2 = param_2 + unaff_R15D;
    param_1 = param_1 + param_4;
    in_R10D = in_R10D + -1;
  } while (in_R10D != 0);
  return;
}
// 函数: void NetworkProtocol_23eb0(int16_t *param_1,float *param_2,int param_3,int param_4,int param_5,
void NetworkProtocol_23eb0(int16_t *param_1,float *param_2,int param_3,int param_4,int param_5,
                  float param_6)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  int iVar8;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  iVar8 = 0;
  if (0 < param_3 + -3) {
    uVar4 = (param_3 - 4U >> 2) + 1;
    lVar5 = (int64_t)param_4;
    uVar6 = (uint64_t)uVar4;
    iVar8 = uVar4 * 4;
    do {
      pfVar1 = param_2 + param_5;
      fVar13 = *param_2;
      pfVar2 = param_2 + param_5 * 2;
      pfVar3 = param_2 + param_5 * 3;
      param_2 = param_2 + param_5 * 4;
      auVar9._0_4_ = (int)(fVar13 * param_6);
      auVar9._4_4_ = (int)(*pfVar1 * param_6);
      auVar9._8_4_ = (int)(*pfVar2 * param_6);
      auVar9._12_4_ = (int)(*pfVar3 * param_6);
      auVar9 = packssdw(auVar9,auVar9);
      *param_1 = auVar9._0_2_;
      param_1[lVar5] = auVar9._2_2_;
      param_1[lVar5 * 2] = auVar9._4_2_;
      param_1[lVar5 * 3] = auVar9._6_2_;
      param_1 = param_1 + param_4 * 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar7 = param_3 - iVar8;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  if (param_3 == iVar8) {
    return;
  }
  if (iVar7 != 1) {
    if (iVar7 != 2) {
      if (iVar7 != 3) goto LAB_180823ff8;
      fVar13 = param_2[param_5 * 2];
    }
    fVar12 = param_2[param_5];
  }
  fVar11 = *param_2;
LAB_180823ff8:
  auVar10._0_4_ = (int)(fVar11 * param_6);
  auVar10._4_4_ = (int)(fVar12 * param_6);
  auVar10._8_4_ = (int)(fVar13 * param_6);
  auVar10._12_4_ = (int)(param_6 * 0.0);
  auVar9 = packssdw(auVar10,auVar10);
  if (iVar7 != 1) {
    if (iVar7 != 2) {
      if (iVar7 != 3) {
        return;
      }
      param_1[param_4 * 2] = auVar9._4_2_;
    }
    param_1[param_4] = auVar9._2_2_;
  }
  *param_1 = auVar9._0_2_;
  return;
}
// 函数: void NetworkProtocol_23ec8(uint64_t param_1,float *param_2,int param_3,int param_4)
void NetworkProtocol_23ec8(uint64_t param_1,float *param_2,int param_3,int param_4)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int64_t lVar5;
  int unaff_EDI;
  uint64_t uVar6;
  int iVar7;
  int16_t *in_R10;
  int iVar8;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float in_XMM4_Da;
  int local_var_40;
  int local_buffer_50;
  iVar8 = 0;
  if (0 < unaff_EDI) {
    uVar4 = (unaff_EDI - 1U >> 2) + 1;
    lVar5 = (int64_t)param_4;
    uVar6 = (uint64_t)uVar4;
    iVar8 = uVar4 * 4;
    do {
      pfVar1 = param_2 + local_buffer_50;
      fVar13 = *param_2;
      pfVar2 = param_2 + local_buffer_50 * 2;
      pfVar3 = param_2 + local_buffer_50 * 3;
      param_2 = param_2 + local_buffer_50 * 4;
      auVar9._0_4_ = (int)(fVar13 * in_XMM4_Da);
      auVar9._4_4_ = (int)(*pfVar1 * in_XMM4_Da);
      auVar9._8_4_ = (int)(*pfVar2 * in_XMM4_Da);
      auVar9._12_4_ = (int)(*pfVar3 * in_XMM4_Da);
      auVar9 = packssdw(auVar9,auVar9);
      *in_R10 = auVar9._0_2_;
      in_R10[lVar5] = auVar9._2_2_;
      in_R10[lVar5 * 2] = auVar9._4_2_;
      in_R10[lVar5 * 3] = auVar9._6_2_;
      in_R10 = in_R10 + param_4 * 4;
      uVar6 = uVar6 - 1;
      param_3 = local_var_40;
    } while (uVar6 != 0);
  }
  iVar7 = param_3 - iVar8;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  if (param_3 == iVar8) {
    return;
  }
  if (iVar7 != 1) {
    if (iVar7 != 2) {
      if (iVar7 != 3) goto LAB_180823ff8;
      fVar13 = param_2[local_buffer_50 * 2];
    }
    fVar12 = param_2[local_buffer_50];
  }
  fVar11 = *param_2;
LAB_180823ff8:
  auVar10._0_4_ = (int)(fVar11 * in_XMM4_Da);
  auVar10._4_4_ = (int)(fVar12 * in_XMM4_Da);
  auVar10._8_4_ = (int)(fVar13 * in_XMM4_Da);
  auVar10._12_4_ = (int)(in_XMM4_Da * 0.0);
  auVar9 = packssdw(auVar10,auVar10);
  if (iVar7 != 1) {
    if (iVar7 != 2) {
      if (iVar7 != 3) {
        return;
      }
      in_R10[param_4 * 2] = auVar9._4_2_;
    }
    in_R10[param_4] = auVar9._2_2_;
  }
  *in_R10 = auVar9._0_2_;
  return;
}
// 函数: void NetworkProtocol_23ee6(int param_1,float *param_2,uint64_t param_3,int param_4)
void NetworkProtocol_23ee6(int param_1,float *param_2,uint64_t param_3,int param_4)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int unaff_EBX;
  int64_t lVar5;
  int unaff_EDI;
  uint64_t uVar6;
  int16_t *in_R10;
  int64_t in_R11;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  int local_var_40;
  uVar4 = (unaff_EDI - 1U >> 2) + 1;
  lVar5 = (int64_t)param_4;
  uVar6 = (uint64_t)uVar4;
  do {
    pfVar1 = param_2 + in_R11;
    fVar11 = *param_2;
    pfVar2 = param_2 + unaff_EBX;
    pfVar3 = param_2 + param_1 * 3;
    param_2 = param_2 + param_1 * 4;
    auVar7._0_4_ = (int)(fVar11 * in_XMM4_Da);
    auVar7._4_4_ = (int)(*pfVar1 * in_XMM4_Db);
    auVar7._8_4_ = (int)(*pfVar2 * in_XMM4_Dc);
    auVar7._12_4_ = (int)(*pfVar3 * in_XMM4_Dd);
    auVar7 = packssdw(auVar7,auVar7);
    *in_R10 = auVar7._0_2_;
    in_R10[lVar5] = auVar7._2_2_;
    in_R10[lVar5 * 2] = auVar7._4_2_;
    in_R10[lVar5 * 3] = auVar7._6_2_;
    in_R10 = in_R10 + param_4 * 4;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  local_var_40 = local_var_40 + uVar4 * -4;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  if (local_var_40 == 0) {
    return;
  }
  if (local_var_40 != 1) {
    if (local_var_40 != 2) {
      if (local_var_40 != 3) goto LAB_180823ff8;
      fVar11 = param_2[unaff_EBX];
    }
    fVar10 = param_2[in_R11];
  }
  fVar9 = *param_2;
LAB_180823ff8:
  auVar8._0_4_ = (int)(fVar9 * in_XMM4_Da);
  auVar8._4_4_ = (int)(fVar10 * in_XMM4_Db);
  auVar8._8_4_ = (int)(fVar11 * in_XMM4_Dc);
  auVar8._12_4_ = (int)(in_XMM4_Dd * 0.0);
  auVar7 = packssdw(auVar8,auVar8);
  if (local_var_40 != 1) {
    if (local_var_40 != 2) {
      if (local_var_40 != 3) {
        return;
      }
      in_R10[param_4 * 2] = auVar7._4_2_;
    }
    in_R10[param_4] = auVar7._2_2_;
  }
  *in_R10 = auVar7._0_2_;
  return;
}
// 函数: void NetworkProtocol_23fbf(uint64_t param_1,float *param_2,int param_3,int param_4)
void NetworkProtocol_23fbf(uint64_t param_1,float *param_2,int param_3,int param_4)
{
  int unaff_EBX;
  int iVar1;
  int16_t *in_R10;
  int64_t in_R11;
  int unaff_R15D;
  int8_t auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  iVar1 = param_3 - unaff_R15D;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (param_3 == unaff_R15D) {
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_180823ff8;
      fVar5 = param_2[unaff_EBX];
    }
    fVar4 = param_2[in_R11];
  }
  fVar3 = *param_2;
LAB_180823ff8:
  auVar2._0_4_ = (int)(fVar3 * in_XMM4_Da);
  auVar2._4_4_ = (int)(fVar4 * in_XMM4_Db);
  auVar2._8_4_ = (int)(fVar5 * in_XMM4_Dc);
  auVar2._12_4_ = (int)(in_XMM4_Dd * 0.0);
  auVar2 = packssdw(auVar2,auVar2);
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      in_R10[param_4 * 2] = auVar2._4_2_;
    }
    in_R10[param_4] = auVar2._2_2_;
  }
  *in_R10 = auVar2._0_2_;
  return;
}
// 函数: void NetworkProtocol_23fd7(int param_1,float param_2,float param_3,uint64_t param_4)
void NetworkProtocol_23fd7(int param_1,float param_2,float param_3,uint64_t param_4)
{
  float *in_RDX;
  int unaff_EBX;
  int64_t unaff_RDI;
  int in_R8D;
  int in_R9D;
  int16_t *in_R10;
  int64_t in_R11;
  int8_t auVar1 [16];
  float fVar2;
  float fVar3;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  fVar3 = (float)((uint64_t)param_4 >> 0x20);
  fVar2 = (float)param_4;
  if (param_1 != 1) {
    if (param_1 != 2) {
      if (param_1 != 3) goto LAB_180823ff8;
      fVar2 = in_RDX[unaff_EBX];
      fVar3 = 0.0;
    }
    param_3 = in_RDX[in_R11];
  }
  param_2 = *in_RDX;
LAB_180823ff8:
  auVar1._0_4_ = (int)(param_2 * in_XMM4_Da);
  auVar1._4_4_ = (int)(param_3 * in_XMM4_Db);
  auVar1._8_4_ = (int)(fVar2 * in_XMM4_Dc);
  auVar1._12_4_ = (int)(fVar3 * in_XMM4_Dd);
  auVar1 = packssdw(auVar1,auVar1);
  if (in_R8D != 1) {
    if (in_R8D != 2) {
      if (in_R8D != 3) {
        return;
      }
      in_R10[in_R9D * 2] = auVar1._4_2_;
    }
    in_R10[unaff_RDI] = auVar1._2_2_;
  }
  *in_R10 = auVar1._0_2_;
  return;
}
// WARNING: Removing unreachable block (ram,0x0001808241f0)
// WARNING: Removing unreachable block (ram,0x00018082436c)
// 函数: void NetworkProtocol_24050(int16_t *param_1,uint *param_2,int param_3,int param_4,int param_5,
void NetworkProtocol_24050(int16_t *param_1,uint *param_2,int param_3,int param_4,int param_5,
                  float param_6)
{
  int8_t auVar1 [16];
  int8_t auVar2 [16];
  int8_t auVar3 [32];
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [32];
  int8_t auVar11 [32];
  int8_t auVar12 [32];
  int8_t auVar13 [32];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t in_ZMM0 [64];
  int8_t auVar16 [64];
  int8_t auVar18 [28];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  int8_t auVar24 [32];
  int8_t auVar25 [32];
  int8_t auVar17 [36];
  auVar17 = in_ZMM0._28_36_;
  iVar5 = 0;
  if (0 < param_3 + -7) {
    lVar6 = (int64_t)param_4;
    uVar4 = (param_3 - 8U >> 3) + 1;
    uVar7 = (uint64_t)uVar4;
    iVar5 = uVar4 * 8;
    do {
      uVar4 = param_2[param_5 * 2];
      auVar20._4_4_ = uVar4;
      auVar20._0_4_ = uVar4;
      auVar20._8_4_ = uVar4;
      auVar20._12_4_ = uVar4;
      auVar20._16_4_ = uVar4;
      auVar20._20_4_ = uVar4;
      auVar20._24_4_ = uVar4;
      auVar20._28_4_ = uVar4;
      uVar4 = *param_2;
      auVar8._4_4_ = uVar4;
      auVar8._0_4_ = uVar4;
      auVar8._8_4_ = uVar4;
      auVar8._12_4_ = uVar4;
      auVar8._16_4_ = uVar4;
      auVar8._20_4_ = uVar4;
      auVar8._24_4_ = uVar4;
      auVar8._28_4_ = uVar4;
      uVar4 = param_2[param_5 * 3];
      auVar21._4_4_ = uVar4;
      auVar21._0_4_ = uVar4;
      auVar21._8_4_ = uVar4;
      auVar21._12_4_ = uVar4;
      auVar21._16_4_ = uVar4;
      auVar21._20_4_ = uVar4;
      auVar21._24_4_ = uVar4;
      auVar21._28_4_ = uVar4;
      uVar4 = param_2[param_5 * 4];
      auVar22._4_4_ = uVar4;
      auVar22._0_4_ = uVar4;
      auVar22._8_4_ = uVar4;
      auVar22._12_4_ = uVar4;
      auVar22._16_4_ = uVar4;
      auVar22._20_4_ = uVar4;
      auVar22._24_4_ = uVar4;
      auVar22._28_4_ = uVar4;
      uVar4 = param_2[param_5 * 5];
      auVar23._4_4_ = uVar4;
      auVar23._0_4_ = uVar4;
      auVar23._8_4_ = uVar4;
      auVar23._12_4_ = uVar4;
      auVar23._16_4_ = uVar4;
      auVar23._20_4_ = uVar4;
      auVar23._24_4_ = uVar4;
      auVar23._28_4_ = uVar4;
      uVar4 = param_2[param_5 * 6];
      auVar24._4_4_ = uVar4;
      auVar24._0_4_ = uVar4;
      auVar24._8_4_ = uVar4;
      auVar24._12_4_ = uVar4;
      auVar24._16_4_ = uVar4;
      auVar24._20_4_ = uVar4;
      auVar24._24_4_ = uVar4;
      auVar24._28_4_ = uVar4;
      uVar4 = param_2[param_5 * 7];
      auVar25._4_4_ = uVar4;
      auVar25._0_4_ = uVar4;
      auVar25._8_4_ = uVar4;
      auVar25._12_4_ = uVar4;
      auVar25._16_4_ = uVar4;
      auVar25._20_4_ = uVar4;
      auVar25._24_4_ = uVar4;
      auVar25._28_4_ = uVar4;
      auVar8 = vblendps_avx(ZEXT1632(ZEXT816(0) << 0x40),auVar8,1);
      uVar4 = param_2[param_5];
      auVar19._4_4_ = uVar4;
      auVar19._0_4_ = uVar4;
      auVar19._8_4_ = uVar4;
      auVar19._12_4_ = uVar4;
      auVar19._16_4_ = uVar4;
      auVar19._20_4_ = uVar4;
      auVar19._24_4_ = uVar4;
      auVar19._28_4_ = uVar4;
      auVar8 = vblendps_avx(auVar8,auVar19,2);
      auVar8 = vblendps_avx(auVar8,auVar20,4);
      auVar8 = vblendps_avx(auVar8,auVar21,8);
      auVar8 = vblendps_avx(auVar8,auVar22,0x10);
      auVar19 = vblendps_avx(auVar8,auVar23,0x20);
      auVar19 = vblendps_avx(auVar19,auVar24,0x40);
      auVar19 = vblendps_avx(auVar19,auVar25,0x80);
      auVar3._4_4_ = auVar19._4_4_ * param_6;
      auVar3._0_4_ = auVar19._0_4_ * param_6;
      auVar3._8_4_ = auVar19._8_4_ * param_6;
      auVar3._12_4_ = auVar19._12_4_ * param_6;
      auVar3._16_4_ = auVar19._16_4_ * param_6;
      auVar3._20_4_ = auVar19._20_4_ * param_6;
      auVar3._24_4_ = auVar19._24_4_ * param_6;
      auVar3._28_4_ = auVar8._28_4_;
      auVar8 = vcvtps2dq_avx(auVar3);
      auVar1 = vpackssdw_avx(auVar8._0_16_,auVar8._0_16_);
      auVar17 = (int8_t  [36])0x0;
      *param_1 = auVar1._0_2_;
      param_2 = param_2 + param_5 * 8;
      param_1[lVar6] = auVar1._2_2_;
      param_1[lVar6 * 2] = auVar1._4_2_;
      param_1[lVar6 * 3] = auVar1._6_2_;
      auVar1 = vpackssdw_avx(auVar8._16_16_,auVar8._16_16_);
      param_1[lVar6 * 4] = auVar1._0_2_;
      param_1[lVar6 * 5] = auVar1._2_2_;
      param_1[lVar6 * 6] = auVar1._4_2_;
      param_1[lVar6 * 7] = auVar1._6_2_;
      param_1 = param_1 + param_4 * 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_3 - iVar5 != 0) {
    iVar5 = (param_3 - iVar5) + -1;
    auVar18 = ZEXT828(0) << 0x40;
    auVar8 = ZEXT832(0) << 0x40;
    switch(iVar5) {
    case 6:
      uVar4 = param_2[param_5 * 6];
      auVar9._4_4_ = uVar4;
      auVar9._0_4_ = uVar4;
      auVar9._8_4_ = uVar4;
      auVar9._12_4_ = uVar4;
      auVar9._16_4_ = uVar4;
      auVar9._20_4_ = uVar4;
      auVar9._24_4_ = uVar4;
      auVar9._28_4_ = uVar4;
      auVar8 = vblendps_avx(ZEXT1632(ZEXT816(0) << 0x40),auVar9,0x40);
    case 5:
      uVar4 = param_2[param_5 * 5];
      auVar10._4_4_ = uVar4;
      auVar10._0_4_ = uVar4;
      auVar10._8_4_ = uVar4;
      auVar10._12_4_ = uVar4;
      auVar10._16_4_ = uVar4;
      auVar10._20_4_ = uVar4;
      auVar10._24_4_ = uVar4;
      auVar10._28_4_ = uVar4;
      auVar8 = vblendps_avx(auVar8,auVar10,0x20);
    case 4:
      uVar4 = param_2[param_5 * 4];
      auVar11._4_4_ = uVar4;
      auVar11._0_4_ = uVar4;
      auVar11._8_4_ = uVar4;
      auVar11._12_4_ = uVar4;
      auVar11._16_4_ = uVar4;
      auVar11._20_4_ = uVar4;
      auVar11._24_4_ = uVar4;
      auVar11._28_4_ = uVar4;
      auVar8 = vblendps_avx(auVar8,auVar11,0x10);
    case 3:
      uVar4 = param_2[param_5 * 3];
      auVar12._4_4_ = uVar4;
      auVar12._0_4_ = uVar4;
      auVar12._8_4_ = uVar4;
      auVar12._12_4_ = uVar4;
      auVar12._16_4_ = uVar4;
      auVar12._20_4_ = uVar4;
      auVar12._24_4_ = uVar4;
      auVar12._28_4_ = uVar4;
      auVar8 = vblendps_avx(auVar8,auVar12,8);
    case 2:
      uVar4 = param_2[param_5 * 2];
      auVar13._4_4_ = uVar4;
      auVar13._0_4_ = uVar4;
      auVar13._8_4_ = uVar4;
      auVar13._12_4_ = uVar4;
      auVar13._16_4_ = uVar4;
      auVar13._20_4_ = uVar4;
      auVar13._24_4_ = uVar4;
      auVar13._28_4_ = uVar4;
      auVar8 = vblendps_avx(auVar8,auVar13,4);
    case 1:
      uVar4 = param_2[param_5];
      auVar14._4_4_ = uVar4;
      auVar14._0_4_ = uVar4;
      auVar14._8_4_ = uVar4;
      auVar14._12_4_ = uVar4;
      auVar14._16_4_ = uVar4;
      auVar14._20_4_ = uVar4;
      auVar14._24_4_ = uVar4;
      auVar14._28_4_ = uVar4;
      auVar8 = vblendps_avx(auVar8,auVar14,2);
    case 0:
      uVar4 = *param_2;
      auVar15._4_4_ = uVar4;
      auVar15._0_4_ = uVar4;
      auVar15._8_4_ = uVar4;
      auVar15._12_4_ = uVar4;
      auVar15._16_4_ = uVar4;
      auVar15._20_4_ = uVar4;
      auVar15._24_4_ = uVar4;
      auVar15._28_4_ = uVar4;
      auVar17 = ZEXT436(uVar4);
      auVar8 = vblendps_avx(auVar8,auVar15,1);
      auVar18 = auVar8._0_28_;
    }
    auVar16._0_4_ = auVar18._0_4_ * param_6;
    auVar16._4_4_ = auVar18._4_4_ * param_6;
    auVar16._8_4_ = auVar18._8_4_ * param_6;
    auVar16._12_4_ = auVar18._12_4_ * param_6;
    auVar16._16_4_ = auVar18._16_4_ * param_6;
    auVar16._20_4_ = auVar18._20_4_ * param_6;
    auVar16._24_4_ = auVar18._24_4_ * param_6;
    auVar16._28_36_ = auVar17;
    auVar8 = vcvtps2dq_avx(auVar16._0_32_);
    auVar1 = vpackssdw_avx(auVar8._0_16_,auVar8._0_16_);
    auVar2 = vpackssdw_avx(auVar8._16_16_,auVar8._16_16_);
    switch(iVar5) {
    case 6:
      param_1[param_4 * 6] = auVar2._4_2_;
    case 5:
      param_1[param_4 * 5] = auVar2._2_2_;
    case 4:
      param_1[param_4 * 4] = auVar2._0_2_;
    case 3:
      param_1[param_4 * 3] = auVar1._6_2_;
    case 2:
      param_1[param_4 * 2] = auVar1._4_2_;
    case 1:
      param_1[param_4] = auVar1._2_2_;
    case 0:
      *param_1 = auVar1._0_2_;
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001808241f0)
// WARNING: Removing unreachable block (ram,0x00018082436c)