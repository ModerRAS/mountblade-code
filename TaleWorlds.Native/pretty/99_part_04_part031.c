#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part031.c - 10 个函数
// 函数: void function_2a26b0(uint64_t param_1,uint64_t *param_2,int64_t *param_3,float *param_4,
void function_2a26b0(uint64_t param_1,uint64_t *param_2,int64_t *param_3,float *param_4,
                  int param_5)
{
  ushort uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int8_t stack_array_a8 [32];
  int8_t stack_array_88 [8];
  uint64_t *plocal_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  plocal_var_80 = param_2;
  if (param_5 == 0) {
    iVar5 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    iVar6 = *(ushort *)((int64_t)param_3 + 0x5c) - 1;
    if ((int)((float)iVar6 * *param_4) <= iVar6) {
      iVar6 = (int)((float)iVar6 * *param_4);
    }
    if ((int)((float)iVar5 * param_4[1]) <= iVar5) {
      iVar5 = (int)((float)iVar5 * param_4[1]);
    }
    iVar7 = 0;
    if (-1 < iVar5) {
      iVar7 = iVar5;
    }
    iVar5 = 0;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    *param_2 = *(uint64_t *)
                (*param_3 +
                (int64_t)(int)(iVar7 * (uint)*(ushort *)((int64_t)param_3 + 0x5c) + iVar5) * 8);
  }
  else if (param_5 == 1) {
    puVar8 = &local_var_78;
    lVar9 = 4;
    do {
      SystemFunction_000180074f10(puVar8);
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    iVar6 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    fVar15 = (float)iVar6 * param_4[1];
    if (fVar15 <= 0.0) {
      fVar15 = fVar15 - 0.9999999;
    }
    uVar1 = *(ushort *)((int64_t)param_3 + 0x5c);
    uVar11 = (uint)uVar1;
    iVar7 = (int)fVar15;
    iVar5 = uVar1 - 1;
    fVar15 = (float)iVar5 * *param_4;
    if (fVar15 <= 0.0) {
      fVar15 = fVar15 - 0.9999999;
    }
    iVar10 = (int)fVar15;
    iVar13 = iVar10 + 1;
    if ((iVar10 < 0) || (iVar5 <= iVar10)) {
      iVar4 = iVar5;
      if (iVar10 <= iVar5) {
        iVar4 = iVar10;
      }
      iVar10 = 0;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
      if (iVar13 <= iVar5) {
        iVar5 = iVar13;
      }
      iVar13 = 0;
      if (-1 < iVar5) {
        iVar13 = iVar5;
      }
    }
    if ((iVar7 < 0) || (iVar5 = iVar7, iVar4 = iVar7 + 1, iVar12 = iVar7 + 1, iVar6 <= iVar7)) {
      iVar4 = iVar6;
      if (iVar7 <= iVar6) {
        iVar4 = iVar7;
      }
      iVar5 = 0;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      if (iVar7 <= iVar6) {
        iVar6 = iVar7;
      }
      iVar7 = 0;
      iVar4 = iVar5;
      iVar12 = 0;
      if (-1 < iVar6) {
        iVar7 = iVar6;
        iVar12 = iVar6;
      }
    }
    lVar9 = *param_3;
    local_var_78 = *(uint64_t *)(lVar9 + (uint64_t)(uVar11 * iVar5 + iVar10) * 8);
    local_var_70 = *(uint64_t *)(lVar9 + (uint64_t)((uint)uVar1 * iVar7 + iVar13) * 8);
    local_var_68 = *(uint64_t *)(lVar9 + (uint64_t)(uVar11 * iVar4 + iVar10) * 8);
    local_var_60 = *(uint64_t *)(lVar9 + (uint64_t)(uVar11 * iVar12 + iVar13) * 8);
    fVar15 = (float)modff(local_var_60,stack_array_88);
    fVar14 = (float)modff();
    iVar5 = (int)((float)(int)((uint)local_var_70._4_2_ - (uint)local_var_78._4_2_) * fVar14) +
            (uint)local_var_78._4_2_;
    iVar7 = (int)((float)(int)((uint)local_var_70._2_2_ - (uint)local_var_78._2_2_) * fVar14) +
            (uint)local_var_78._2_2_;
    iVar13 = (int)((float)(int)((uint)(ushort)local_var_70 - (uint)(ushort)local_var_78) * fVar14) +
             (uint)(ushort)local_var_78;
    iVar6 = (int)((float)(int)((uint)local_var_70._6_2_ - (uint)local_var_78._6_2_) * fVar14) +
            (uint)local_var_78._6_2_;
    iVar5 = (int)((float)(int)(((int)((float)(int)((uint)local_var_60._4_2_ - (uint)local_var_68._4_2_) *
                                     fVar14) + (uint)local_var_68._4_2_) - iVar5) * fVar15) + iVar5;
    iVar7 = (int)((float)(int)(((int)((float)(int)((uint)local_var_60._2_2_ - (uint)local_var_68._2_2_) *
                                     fVar14) + (uint)local_var_68._2_2_) - iVar7) * fVar15) + iVar7;
    local_var_78 = CONCAT44(iVar7,iVar5);
    uVar2 = local_var_78;
    iVar13 = (int)((float)(int)(((int)((float)(int)((uint)(ushort)local_var_60 -
                                                   (uint)(ushort)local_var_68) * fVar14) +
                                (uint)(ushort)local_var_68) - iVar13) * fVar15) + iVar13;
    iVar6 = (int)((float)(int)(((int)((float)(int)((uint)local_var_60._6_2_ - (uint)local_var_68._6_2_) *
                                     fVar14) + (uint)local_var_68._6_2_) - iVar6) * fVar15) + iVar6;
    local_var_70 = CONCAT44(iVar6,iVar13);
    uVar3 = local_var_70;
    local_var_70._0_2_ = (ushort)iVar13;
    *(ushort *)plocal_var_80 = (ushort)local_var_70;
    local_var_78._4_2_ = (ushort)iVar7;
    *(ushort *)((int64_t)plocal_var_80 + 2) = local_var_78._4_2_;
    local_var_78._0_2_ = (ushort)iVar5;
    *(ushort *)((int64_t)plocal_var_80 + 4) = (ushort)local_var_78;
    local_var_70._4_2_ = (ushort)iVar6;
    *(ushort *)((int64_t)plocal_var_80 + 6) = local_var_70._4_2_;
    local_var_78 = uVar2;
    local_var_70 = uVar3;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_a8);
}
// 函数: void function_2a26f0(uint64_t param_1,int param_2)
void function_2a26f0(uint64_t param_1,int param_2)
{
  ushort uVar1;
  uint64_t uVar2;
  int16_t *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  uint64_t uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float *unaff_R14;
  int iVar13;
  float fVar14;
  float fVar15;
  lVar8 = unaff_RBP + -0x29;
  uVar9 = (uint64_t)(param_2 + 3);
  do {
    SystemFunction_000180074f10(lVar8);
    lVar8 = lVar8 + 8;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  iVar6 = *(ushort *)((int64_t)unaff_RSI + 0x5e) - 1;
  fVar15 = (float)iVar6 * unaff_R14[1];
  if (fVar15 <= 0.0) {
    fVar15 = fVar15 - 0.9999999;
  }
  uVar1 = *(ushort *)((int64_t)unaff_RSI + 0x5c);
  uVar11 = (uint)uVar1;
  iVar7 = (int)fVar15;
  iVar5 = uVar1 - 1;
  fVar15 = (float)iVar5 * *unaff_R14;
  if (fVar15 <= 0.0) {
    fVar15 = fVar15 - 0.9999999;
  }
  iVar10 = (int)fVar15;
  iVar13 = iVar10 + 1;
  if ((iVar10 < 0) || (iVar5 <= iVar10)) {
    iVar4 = iVar5;
    if (iVar10 <= iVar5) {
      iVar4 = iVar10;
    }
    iVar10 = 0;
    if (-1 < iVar4) {
      iVar10 = iVar4;
    }
    if (iVar13 <= iVar5) {
      iVar5 = iVar13;
    }
    iVar13 = 0;
    if (-1 < iVar5) {
      iVar13 = iVar5;
    }
  }
  if ((iVar7 < 0) || (iVar5 = iVar7, iVar4 = iVar7 + 1, iVar12 = iVar7 + 1, iVar6 <= iVar7)) {
    iVar4 = iVar6;
    if (iVar7 <= iVar6) {
      iVar4 = iVar7;
    }
    iVar5 = 0;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar7 <= iVar6) {
      iVar6 = iVar7;
    }
    iVar7 = 0;
    iVar4 = iVar5;
    iVar12 = 0;
    if (-1 < iVar6) {
      iVar7 = iVar6;
      iVar12 = iVar6;
    }
  }
  lVar8 = *unaff_RSI;
  *(uint64_t *)(unaff_RBP + -0x29) =
       *(uint64_t *)(lVar8 + (uint64_t)(uVar11 * iVar5 + iVar10) * 8);
  *(uint64_t *)(unaff_RBP + -0x21) =
       *(uint64_t *)(lVar8 + (uint64_t)((uint)uVar1 * iVar7 + iVar13) * 8);
  *(uint64_t *)(unaff_RBP + -0x19) =
       *(uint64_t *)(lVar8 + (uint64_t)(uVar11 * iVar4 + iVar10) * 8);
  uVar2 = *(uint64_t *)(lVar8 + (uint64_t)(uVar11 * iVar12 + iVar13) * 8);
  *(uint64_t *)(unaff_RBP + -0x11) = uVar2;
  fVar15 = (float)modff(uVar2,unaff_RBP + -0x39);
  fVar14 = (float)modff();
  iVar5 = (int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x1d) -
                            (uint)*(ushort *)(unaff_RBP + -0x25)) * fVar14) +
          (uint)*(ushort *)(unaff_RBP + -0x25);
  iVar6 = (int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x1f) -
                            (uint)*(ushort *)(unaff_RBP + -0x27)) * fVar14) +
          (uint)*(ushort *)(unaff_RBP + -0x27);
  iVar13 = (int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x21) -
                             (uint)*(ushort *)(unaff_RBP + -0x29)) * fVar14) +
           (uint)*(ushort *)(unaff_RBP + -0x29);
  iVar7 = (int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x1b) -
                            (uint)*(ushort *)(unaff_RBP + -0x23)) * fVar14) +
          (uint)*(ushort *)(unaff_RBP + -0x23);
  *(int *)(unaff_RBP + -0x29) =
       (int)((float)(int)(((int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0xd) -
                                             (uint)*(ushort *)(unaff_RBP + -0x15)) * fVar14) +
                          (uint)*(ushort *)(unaff_RBP + -0x15)) - iVar5) * fVar15) + iVar5;
  *(int *)(unaff_RBP + -0x25) =
       (int)((float)(int)(((int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0xf) -
                                             (uint)*(ushort *)(unaff_RBP + -0x17)) * fVar14) +
                          (uint)*(ushort *)(unaff_RBP + -0x17)) - iVar6) * fVar15) + iVar6;
  *(int *)(unaff_RBP + -0x21) =
       (int)((float)(int)(((int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x11) -
                                             (uint)*(ushort *)(unaff_RBP + -0x19)) * fVar14) +
                          (uint)*(ushort *)(unaff_RBP + -0x19)) - iVar13) * fVar15) + iVar13;
  puVar3 = *(int16_t **)(unaff_RBP + -0x31);
  *(int *)(unaff_RBP + -0x1d) =
       (int)((float)(int)(((int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0xb) -
                                             (uint)*(ushort *)(unaff_RBP + -0x13)) * fVar14) +
                          (uint)*(ushort *)(unaff_RBP + -0x13)) - iVar7) * fVar15) + iVar7;
  *puVar3 = *(int16_t *)(unaff_RBP + -0x21);
  puVar3[1] = *(int16_t *)(unaff_RBP + -0x25);
  puVar3[2] = *(int16_t *)(unaff_RBP + -0x29);
  puVar3[3] = *(int16_t *)(unaff_RBP + -0x1d);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_2a2a2a(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_2a2a2a(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  int iVar2;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int iVar3;
  uint64_t *in_R11;
  float *unaff_R14;
  iVar2 = *(ushort *)((int64_t)unaff_RSI + 0x5e) - 1;
  iVar3 = *(ushort *)(param_3 + 0x5c) - 1;
  if ((int)((float)iVar3 * *unaff_R14) <= iVar3) {
    iVar3 = (int)((float)iVar3 * *unaff_R14);
  }
  if ((int)((float)iVar2 * unaff_R14[1]) <= iVar2) {
    iVar2 = (int)((float)iVar2 * unaff_R14[1]);
  }
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  *in_R11 = *(uint64_t *)
             (*unaff_RSI + (int64_t)(int)(iVar1 * (uint)*(ushort *)(param_3 + 0x5c) + iVar2) * 8);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a2ab0(uint64_t param_1,short *param_2,int64_t *param_3,float *param_4,int param_5)
void function_2a2ab0(uint64_t param_1,short *param_2,int64_t *param_3,float *param_4,int param_5)
{
  short sVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int64_t lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int8_t stack_array_98 [32];
  int8_t stack_array_78 [8];
  ushort local_var_70;
  ushort local_var_6e;
  ushort local_var_6c;
  ushort local_var_6a;
  ushort local_var_68;
  ushort local_var_66;
  ushort local_var_64;
  ushort local_var_62;
  ushort local_var_60;
  ushort local_var_5e;
  ushort local_var_5c;
  ushort local_var_5a;
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  if (param_5 == 0) {
    iVar4 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    iVar3 = *(ushort *)((int64_t)param_3 + 0x5c) - 1;
    if ((int)((float)iVar3 * *param_4) <= iVar3) {
      iVar3 = (int)((float)iVar3 * *param_4);
    }
    if ((int)((float)iVar4 * param_4[1]) <= iVar4) {
      iVar4 = (int)((float)iVar4 * param_4[1]);
    }
    iVar7 = 0;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    iVar4 = 0;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    lVar6 = *param_3;
    lVar2 = (int64_t)(int)(iVar4 + iVar7 * (uint)*(ushort *)((int64_t)param_3 + 0x5c));
    *(int32_t *)param_2 = *(int32_t *)(lVar6 + lVar2 * 6);
    sVar1 = *(short *)(lVar6 + 4 + lVar2 * 6);
  }
  else {
    if (param_5 != 1) goto LAB_1802a2ced;
    puVar5 = &local_var_70;
    lVar6 = 4;
    do {
      SystemFunction_000180074f10(puVar5);
      puVar5 = puVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    function_2a4fa0(param_3,param_4);
    fVar8 = (float)modff((float)(int)(*(ushort *)((int64_t)param_3 + 0x5e) - 1) * param_4[1],
                         stack_array_78);
    fVar9 = (float)modff();
    iVar4 = (int)((float)(int)((uint)local_var_66 - (uint)local_var_6c) * fVar9) + (uint)local_var_6c;
    iVar7 = (int)((float)(int)((uint)local_var_68 - (uint)local_var_6e) * fVar9) + (uint)local_var_6e;
    iVar3 = (int)((float)(int)((uint)local_var_6a - (uint)local_var_70) * fVar9) + (uint)local_var_70;
    *param_2 = (short)(int)((float)(int)(((int)((float)(int)((uint)local_var_5e - (uint)local_var_64) *
                                               fVar9) - iVar3) + (uint)local_var_64) * fVar8) +
               (short)iVar3;
    param_2[1] = (short)(int)((float)(int)(((int)((float)(int)((uint)local_var_5c - (uint)local_var_62) *
                                                 fVar9) - iVar7) + (uint)local_var_62) * fVar8) +
                 (short)iVar7;
    sVar1 = (short)(int)((float)(int)(((int)((float)(int)((uint)local_var_5a - (uint)local_var_60) * fVar9
                                            ) - iVar4) + (uint)local_var_60) * fVar8) + (short)iVar4;
  }
  param_2[2] = sVar1;
LAB_1802a2ced:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_98);
}
// 函数: void function_2a2aec(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
void function_2a2aec(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8)
{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t unaff_RBP;
  short *unaff_RSI;
  uint64_t uVar4;
  int iVar5;
  int64_t unaff_R14;
  float fVar6;
  float fVar7;
  int8_t astack_special_x_20 [8];
  puVar3 = &param_5;
  uVar4 = (uint64_t)(param_2 + 3);
  do {
    SystemFunction_000180074f10(puVar3);
    puVar3 = (uint64_t *)((int64_t)puVar3 + 6);
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  function_2a4fa0();
  fVar6 = (float)modff((float)(int)(*(ushort *)(unaff_R14 + 0x5e) - 1) * *(float *)(unaff_RBP + 4),
                       astack_special_x_20);
  fVar7 = (float)modff();
  iVar2 = (int)((float)(int)((uint)param_6._2_2_ - (uint)param_5._4_2_) * fVar7) +
          (uint)param_5._4_2_;
  iVar5 = (int)((float)(int)((uint)(ushort)param_6 - (uint)param_5._2_2_) * fVar7) +
          (uint)param_5._2_2_;
  iVar1 = (int)((float)(int)((uint)param_5._6_2_ - (uint)(ushort)param_5) * fVar7) +
          (uint)(ushort)param_5;
  *unaff_RSI = (short)(int)((float)(int)(((int)((float)(int)((uint)param_7._2_2_ -
                                                            (uint)param_6._4_2_) * fVar7) - iVar1) +
                                        (uint)param_6._4_2_) * fVar6) + (short)iVar1;
  unaff_RSI[1] = (short)(int)((float)(int)(((int)((float)(int)((uint)param_7._4_2_ -
                                                              (uint)param_6._6_2_) * fVar7) - iVar5)
                                          + (uint)param_6._6_2_) * fVar6) + (short)iVar5;
  unaff_RSI[2] = (short)(int)((float)(int)(((int)((float)(int)((uint)param_7._6_2_ -
                                                              (uint)(ushort)param_7) * fVar7) -
                                           iVar2) + (uint)(ushort)param_7) * fVar6) + (short)iVar2;
// WARNING: Subroutine does not return
  SystemSecurityChecker(param_8 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_2a2c83(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_2a2c83(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBP;
  int32_t *unaff_RSI;
  int iVar5;
  int64_t *unaff_R14;
  uint64_t local_var_40;
  iVar4 = *(ushort *)((int64_t)unaff_R14 + 0x5e) - 1;
  iVar5 = *(ushort *)(param_3 + 0x5c) - 1;
  if ((int)((float)iVar5 * *unaff_RBP) <= iVar5) {
    iVar5 = (int)((float)iVar5 * *unaff_RBP);
  }
  if ((int)((float)iVar4 * unaff_RBP[1]) <= iVar4) {
    iVar4 = (int)((float)iVar4 * unaff_RBP[1]);
  }
  iVar3 = 0;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = 0;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  lVar1 = *unaff_R14;
  lVar2 = (int64_t)(int)(iVar4 + iVar3 * (uint)*(ushort *)(param_3 + 0x5c));
  *unaff_RSI = *(int32_t *)(lVar1 + lVar2 * 6);
  *(int16_t *)(unaff_RSI + 1) = *(int16_t *)(lVar1 + 4 + lVar2 * 6);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a2d10(uint64_t param_1,char *param_2,int64_t *param_3,float *param_4,int param_5)
void function_2a2d10(uint64_t param_1,char *param_2,int64_t *param_3,float *param_4,int param_5)
{
  char cVar1;
  int iVar2;
  int16_t *puVar3;
  int iVar4;
  byte *pbVar5;
  int64_t lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int8_t stack_array_88 [32];
  int8_t stack_array_68 [8];
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  uint64_t local_var_50;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  if (param_5 == 0) {
    iVar4 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    iVar2 = *(ushort *)((int64_t)param_3 + 0x5c) - 1;
    if ((int)((float)iVar2 * *param_4) <= iVar2) {
      iVar2 = (int)((float)iVar2 * *param_4);
    }
    if ((int)((float)iVar4 * param_4[1]) <= iVar4) {
      iVar4 = (int)((float)iVar4 * param_4[1]);
    }
    iVar7 = 0;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    iVar4 = 0;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    puVar3 = (int16_t *)
             ((int64_t)(int)(iVar4 + iVar7 * (uint)*(ushort *)((int64_t)param_3 + 0x5c)) * 3 +
             *param_3);
    *(int16_t *)param_2 = *puVar3;
    cVar1 = *(char *)(puVar3 + 1);
  }
  else {
    if (param_5 != 1) goto LAB_1802a2f44;
    pbVar5 = &bStack_60;
    lVar6 = 4;
    do {
      SystemFunction_000180074f10(pbVar5);
      pbVar5 = pbVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    function_2a5100(param_3,param_4);
    fVar8 = (float)modff((float)(int)(*(ushort *)((int64_t)param_3 + 0x5e) - 1) * param_4[1],
                         stack_array_68);
    fVar9 = (float)modff();
    iVar4 = (int)((float)(int)((uint)bStack_5b - (uint)bStack_5e) * fVar9) + (uint)bStack_5e;
    iVar7 = (int)((float)(int)((uint)bStack_5c - (uint)bStack_5f) * fVar9) + (uint)bStack_5f;
    iVar2 = (int)((float)(int)((uint)bStack_5d - (uint)bStack_60) * fVar9) + (uint)bStack_60;
    *param_2 = (char)(int)((float)(int)(((int)((float)(int)((uint)bStack_57 - (uint)bStack_5a) *
                                              fVar9) - iVar2) + (uint)bStack_5a) * fVar8) +
               (char)iVar2;
    param_2[1] = (char)(int)((float)(int)(((int)((float)(int)((uint)bStack_56 - (uint)bStack_59) *
                                                fVar9) - iVar7) + (uint)bStack_59) * fVar8) +
                 (char)iVar7;
    cVar1 = (char)(int)((float)(int)(((int)((float)(int)((uint)bStack_55 - (uint)bStack_58) * fVar9)
                                     - iVar4) + (uint)bStack_58) * fVar8) + (char)iVar4;
  }
  param_2[2] = cVar1;
LAB_1802a2f44:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_88);
}
// 函数: void function_2a2d49(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
void function_2a2d49(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)
{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t unaff_RBP;
  char *unaff_RSI;
  uint64_t uVar4;
  int iVar5;
  int64_t unaff_R14;
  float fVar6;
  float fVar7;
  int8_t astack_special_x_20 [8];
  puVar3 = &param_5;
  uVar4 = (uint64_t)(param_2 + 3);
  do {
    SystemFunction_000180074f10(puVar3);
    puVar3 = (uint64_t *)((int64_t)puVar3 + 3);
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  function_2a5100();
  fVar6 = (float)modff((float)(int)(*(ushort *)(unaff_RBP + 0x5e) - 1) * *(float *)(unaff_R14 + 4),
                       astack_special_x_20);
  fVar7 = (float)modff();
  iVar2 = (int)((float)(int)((uint)param_5._5_1_ - (uint)param_5._2_1_) * fVar7) +
          (uint)param_5._2_1_;
  iVar5 = (int)((float)(int)((uint)param_5._4_1_ - (uint)param_5._1_1_) * fVar7) +
          (uint)param_5._1_1_;
  iVar1 = (int)((float)(int)((uint)param_5._3_1_ - (uint)(byte)param_5) * fVar7) +
          (uint)(byte)param_5;
  *unaff_RSI = (char)(int)((float)(int)(((int)((float)(int)((uint)param_6._1_1_ -
                                                           (uint)param_5._6_1_) * fVar7) - iVar1) +
                                       (uint)param_5._6_1_) * fVar6) + (char)iVar1;
  unaff_RSI[1] = (char)(int)((float)(int)(((int)((float)(int)((uint)param_6._2_1_ -
                                                             (uint)param_5._7_1_) * fVar7) - iVar5)
                                         + (uint)param_5._7_1_) * fVar6) + (char)iVar5;
  unaff_RSI[2] = (char)(int)((float)(int)(((int)((float)(int)((uint)param_6._3_1_ -
                                                             (uint)(byte)param_6) * fVar7) - iVar2)
                                         + (uint)(byte)param_6) * fVar6) + (char)iVar2;
// WARNING: Subroutine does not return
  SystemSecurityChecker(param_7 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_2a2eda(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_2a2eda(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  int16_t *puVar2;
  int iVar3;
  int64_t *unaff_RBP;
  int16_t *unaff_RSI;
  int iVar4;
  float *unaff_R14;
  uint64_t local_var_38;
  iVar3 = *(ushort *)((int64_t)unaff_RBP + 0x5e) - 1;
  iVar4 = *(ushort *)(param_3 + 0x5c) - 1;
  if ((int)((float)iVar4 * *unaff_R14) <= iVar4) {
    iVar4 = (int)((float)iVar4 * *unaff_R14);
  }
  if ((int)((float)iVar3 * unaff_R14[1]) <= iVar3) {
    iVar3 = (int)((float)iVar3 * unaff_R14[1]);
  }
  iVar1 = 0;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = 0;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  puVar2 = (int16_t *)
           ((int64_t)(int)(iVar3 + iVar1 * (uint)*(ushort *)(param_3 + 0x5c)) * 3 + *unaff_RBP);
  *unaff_RSI = *puVar2;
  *(int8_t *)(unaff_RSI + 1) = *(int8_t *)(puVar2 + 1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a2f60(uint64_t param_1,int32_t *param_2,int64_t *param_3,float *param_4,
void function_2a2f60(uint64_t param_1,int32_t *param_2,int64_t *param_3,float *param_4,
                  int param_5)
{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int64_t lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int8_t stack_array_98 [32];
  int8_t stack_array_78 [8];
  int32_t *plocal_var_70;
  uint local_var_68;
  uint local_var_64;
  int32_t local_var_60;
  uint local_var_5c;
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plocal_var_70 = param_2;
  if (param_5 == 0) {
    iVar3 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    iVar4 = *(ushort *)((int64_t)param_3 + 0x5c) - 1;
    if ((int)((float)iVar4 * *param_4) <= iVar4) {
      iVar4 = (int)((float)iVar4 * *param_4);
    }
    if ((int)((float)iVar3 * param_4[1]) <= iVar3) {
      iVar3 = (int)((float)iVar3 * param_4[1]);
    }
    iVar6 = 0;
    if (-1 < iVar3) {
      iVar6 = iVar3;
    }
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    *param_2 = *(int32_t *)
                (*param_3 +
                (int64_t)(int)(iVar6 * (uint)*(ushort *)((int64_t)param_3 + 0x5c) + iVar3) * 4);
  }
  else if (param_5 == 1) {
    puVar7 = &local_var_68;
    lVar8 = 4;
    do {
      SystemFunction_000180074f10(puVar7);
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar4 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    fVar15 = (float)iVar4 * param_4[1];
    if (fVar15 <= 0.0) {
      fVar15 = fVar15 - 0.9999999;
    }
    uVar1 = *(ushort *)((int64_t)param_3 + 0x5c);
    uVar5 = (uint)uVar1;
    iVar6 = (int)fVar15;
    iVar3 = uVar1 - 1;
    fVar15 = (float)iVar3 * *param_4;
    if (fVar15 <= 0.0) {
      fVar15 = fVar15 - 0.9999999;
    }
    iVar9 = (int)fVar15;
    iVar13 = iVar9 + 1;
    if ((iVar9 < 0) || (iVar3 <= iVar9)) {
      iVar2 = iVar3;
      if (iVar9 <= iVar3) {
        iVar2 = iVar9;
      }
      iVar9 = 0;
      if (-1 < iVar2) {
        iVar9 = iVar2;
      }
      if (iVar13 <= iVar3) {
        iVar3 = iVar13;
      }
      iVar13 = 0;
      if (-1 < iVar3) {
        iVar13 = iVar3;
      }
    }
    if ((iVar6 < 0) || (iVar3 = iVar6, iVar2 = iVar6 + 1, iVar12 = iVar6 + 1, iVar4 <= iVar6)) {
      iVar2 = iVar4;
      if (iVar6 <= iVar4) {
        iVar2 = iVar6;
      }
      iVar3 = 0;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      if (iVar6 <= iVar4) {
        iVar4 = iVar6;
      }
      iVar6 = 0;
      iVar2 = iVar3;
      iVar12 = 0;
      if (-1 < iVar4) {
        iVar6 = iVar4;
        iVar12 = iVar4;
      }
    }
    lVar8 = *param_3;
    local_var_68 = *(uint *)(lVar8 + (uint64_t)(uVar5 * iVar3 + iVar9) * 4);
    local_var_64 = *(uint *)(lVar8 + (uint64_t)((uint)uVar1 * iVar6 + iVar13) * 4);
    local_var_60 = *(uint *)(lVar8 + (uint64_t)(uVar5 * iVar2 + iVar9) * 4);
    local_var_5c = *(uint *)(lVar8 + (uint64_t)(uVar5 * iVar12 + iVar13) * 4);
    fVar15 = (float)modff(local_var_5c,stack_array_78);
    fVar14 = (float)modff();
    uVar11 = (uint)local_var_60._3_1_;
    uVar5 = local_var_68 >> 8 & 0xff;
    iVar3 = (int)((float)(int)((local_var_64 & 0xff) - (local_var_68 & 0xff)) * fVar14) +
            (local_var_68 & 0xff);
    uVar10 = local_var_68 >> 0x10 & 0xff;
    iVar4 = (int)((float)(int)((local_var_64 >> 8 & 0xff) - uVar5) * fVar14) + uVar5;
    iVar13 = (int)((float)(int)((local_var_64 >> 0x10 & 0xff) - uVar10) * fVar14) + uVar10;
    iVar6 = (int)((float)(int)((local_var_64 >> 0x18) - (local_var_68 >> 0x18)) * fVar14) +
            (local_var_68 >> 0x18);
    uVar5 = (uint)local_var_60._3_1_;
    local_var_68 = (int)((float)(int)(((int)((float)(int)((local_var_5c & 0xff) - (local_var_60 & 0xff)) *
                                         fVar14) + (local_var_60 & 0xff)) - iVar3) * fVar15) + iVar3;
    local_var_64 = (int)((float)(int)(((int)((float)(int)((local_var_5c >> 8 & 0xff) -
                                                      (uint)local_var_60._1_1_) * fVar14) +
                                   (uint)local_var_60._1_1_) - iVar4) * fVar15) + iVar4;
    local_var_60 = (int)((float)(int)(((int)((float)(int)((local_var_5c >> 0x10 & 0xff) -
                                                      (uint)local_var_60._2_1_) * fVar14) +
                                   (uint)local_var_60._2_1_) - iVar13) * fVar15) + iVar13;
    local_var_5c = (int)((float)(int)(((int)((float)(int)((local_var_5c >> 0x18) - uVar5) * fVar14) +
                                   uVar11) - iVar6) * fVar15) + iVar6;
    *(int8_t *)plocal_var_70 = (int8_t)local_var_68;
    *(int8_t *)((int64_t)plocal_var_70 + 1) = (int8_t)local_var_64;
    *(int8_t *)((int64_t)plocal_var_70 + 2) = (int8_t)local_var_60;
    *(int8_t *)((int64_t)plocal_var_70 + 3) = (int8_t)local_var_5c;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_98);
}