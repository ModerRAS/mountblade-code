#include "TaleWorlds.Native.Split.h"

// 99_part_04_part031.c - 10 个函数

// 函数: void FUN_1802a26b0(uint64_t param_1,uint64_t *param_2,longlong *param_3,float *param_4,
void FUN_1802a26b0(uint64_t param_1,uint64_t *param_2,longlong *param_3,float *param_4,
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
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_a8 [32];
  int8_t auStack_88 [8];
  uint64_t *puStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_80 = param_2;
  if (param_5 == 0) {
    iVar5 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    iVar6 = *(ushort *)((longlong)param_3 + 0x5c) - 1;
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
                (longlong)(int)(iVar7 * (uint)*(ushort *)((longlong)param_3 + 0x5c) + iVar5) * 8);
  }
  else if (param_5 == 1) {
    puVar8 = &uStack_78;
    lVar9 = 4;
    do {
      func_0x000180074f10(puVar8);
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    iVar6 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    fVar15 = (float)iVar6 * param_4[1];
    if (fVar15 <= 0.0) {
      fVar15 = fVar15 - 0.9999999;
    }
    uVar1 = *(ushort *)((longlong)param_3 + 0x5c);
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
    uStack_78 = *(uint64_t *)(lVar9 + (ulonglong)(uVar11 * iVar5 + iVar10) * 8);
    uStack_70 = *(uint64_t *)(lVar9 + (ulonglong)((uint)uVar1 * iVar7 + iVar13) * 8);
    uStack_68 = *(uint64_t *)(lVar9 + (ulonglong)(uVar11 * iVar4 + iVar10) * 8);
    uStack_60 = *(uint64_t *)(lVar9 + (ulonglong)(uVar11 * iVar12 + iVar13) * 8);
    fVar15 = (float)modff(uStack_60,auStack_88);
    fVar14 = (float)modff();
    iVar5 = (int)((float)(int)((uint)uStack_70._4_2_ - (uint)uStack_78._4_2_) * fVar14) +
            (uint)uStack_78._4_2_;
    iVar7 = (int)((float)(int)((uint)uStack_70._2_2_ - (uint)uStack_78._2_2_) * fVar14) +
            (uint)uStack_78._2_2_;
    iVar13 = (int)((float)(int)((uint)(ushort)uStack_70 - (uint)(ushort)uStack_78) * fVar14) +
             (uint)(ushort)uStack_78;
    iVar6 = (int)((float)(int)((uint)uStack_70._6_2_ - (uint)uStack_78._6_2_) * fVar14) +
            (uint)uStack_78._6_2_;
    iVar5 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._4_2_ - (uint)uStack_68._4_2_) *
                                     fVar14) + (uint)uStack_68._4_2_) - iVar5) * fVar15) + iVar5;
    iVar7 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._2_2_ - (uint)uStack_68._2_2_) *
                                     fVar14) + (uint)uStack_68._2_2_) - iVar7) * fVar15) + iVar7;
    uStack_78 = CONCAT44(iVar7,iVar5);
    uVar2 = uStack_78;
    iVar13 = (int)((float)(int)(((int)((float)(int)((uint)(ushort)uStack_60 -
                                                   (uint)(ushort)uStack_68) * fVar14) +
                                (uint)(ushort)uStack_68) - iVar13) * fVar15) + iVar13;
    iVar6 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._6_2_ - (uint)uStack_68._6_2_) *
                                     fVar14) + (uint)uStack_68._6_2_) - iVar6) * fVar15) + iVar6;
    uStack_70 = CONCAT44(iVar6,iVar13);
    uVar3 = uStack_70;
    uStack_70._0_2_ = (ushort)iVar13;
    *(ushort *)puStack_80 = (ushort)uStack_70;
    uStack_78._4_2_ = (ushort)iVar7;
    *(ushort *)((longlong)puStack_80 + 2) = uStack_78._4_2_;
    uStack_78._0_2_ = (ushort)iVar5;
    *(ushort *)((longlong)puStack_80 + 4) = (ushort)uStack_78;
    uStack_70._4_2_ = (ushort)iVar6;
    *(ushort *)((longlong)puStack_80 + 6) = uStack_70._4_2_;
    uStack_78 = uVar2;
    uStack_70 = uVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_a8);
}






// 函数: void FUN_1802a26f0(uint64_t param_1,int param_2)
void FUN_1802a26f0(uint64_t param_1,int param_2)

{
  ushort uVar1;
  uint64_t uVar2;
  int16_t *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float *unaff_R14;
  int iVar13;
  float fVar14;
  float fVar15;
  
  lVar8 = unaff_RBP + -0x29;
  uVar9 = (ulonglong)(param_2 + 3);
  do {
    func_0x000180074f10(lVar8);
    lVar8 = lVar8 + 8;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  iVar6 = *(ushort *)((longlong)unaff_RSI + 0x5e) - 1;
  fVar15 = (float)iVar6 * unaff_R14[1];
  if (fVar15 <= 0.0) {
    fVar15 = fVar15 - 0.9999999;
  }
  uVar1 = *(ushort *)((longlong)unaff_RSI + 0x5c);
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
       *(uint64_t *)(lVar8 + (ulonglong)(uVar11 * iVar5 + iVar10) * 8);
  *(uint64_t *)(unaff_RBP + -0x21) =
       *(uint64_t *)(lVar8 + (ulonglong)((uint)uVar1 * iVar7 + iVar13) * 8);
  *(uint64_t *)(unaff_RBP + -0x19) =
       *(uint64_t *)(lVar8 + (ulonglong)(uVar11 * iVar4 + iVar10) * 8);
  uVar2 = *(uint64_t *)(lVar8 + (ulonglong)(uVar11 * iVar12 + iVar13) * 8);
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
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -9) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802a2a2a(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1802a2a2a(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int iVar3;
  uint64_t *in_R11;
  float *unaff_R14;
  
  iVar2 = *(ushort *)((longlong)unaff_RSI + 0x5e) - 1;
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
             (*unaff_RSI + (longlong)(int)(iVar1 * (uint)*(ushort *)(param_3 + 0x5c) + iVar2) * 8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -9) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a2ab0(uint64_t param_1,short *param_2,longlong *param_3,float *param_4,int param_5)
void FUN_1802a2ab0(uint64_t param_1,short *param_2,longlong *param_3,float *param_4,int param_5)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_98 [32];
  int8_t auStack_78 [8];
  ushort uStack_70;
  ushort uStack_6e;
  ushort uStack_6c;
  ushort uStack_6a;
  ushort uStack_68;
  ushort uStack_66;
  ushort uStack_64;
  ushort uStack_62;
  ushort uStack_60;
  ushort uStack_5e;
  ushort uStack_5c;
  ushort uStack_5a;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  if (param_5 == 0) {
    iVar4 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    iVar3 = *(ushort *)((longlong)param_3 + 0x5c) - 1;
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
    lVar2 = (longlong)(int)(iVar4 + iVar7 * (uint)*(ushort *)((longlong)param_3 + 0x5c));
    *(int32_t *)param_2 = *(int32_t *)(lVar6 + lVar2 * 6);
    sVar1 = *(short *)(lVar6 + 4 + lVar2 * 6);
  }
  else {
    if (param_5 != 1) goto LAB_1802a2ced;
    puVar5 = &uStack_70;
    lVar6 = 4;
    do {
      func_0x000180074f10(puVar5);
      puVar5 = puVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    FUN_1802a4fa0(param_3,param_4);
    fVar8 = (float)modff((float)(int)(*(ushort *)((longlong)param_3 + 0x5e) - 1) * param_4[1],
                         auStack_78);
    fVar9 = (float)modff();
    iVar4 = (int)((float)(int)((uint)uStack_66 - (uint)uStack_6c) * fVar9) + (uint)uStack_6c;
    iVar7 = (int)((float)(int)((uint)uStack_68 - (uint)uStack_6e) * fVar9) + (uint)uStack_6e;
    iVar3 = (int)((float)(int)((uint)uStack_6a - (uint)uStack_70) * fVar9) + (uint)uStack_70;
    *param_2 = (short)(int)((float)(int)(((int)((float)(int)((uint)uStack_5e - (uint)uStack_64) *
                                               fVar9) - iVar3) + (uint)uStack_64) * fVar8) +
               (short)iVar3;
    param_2[1] = (short)(int)((float)(int)(((int)((float)(int)((uint)uStack_5c - (uint)uStack_62) *
                                                 fVar9) - iVar7) + (uint)uStack_62) * fVar8) +
                 (short)iVar7;
    sVar1 = (short)(int)((float)(int)(((int)((float)(int)((uint)uStack_5a - (uint)uStack_60) * fVar9
                                            ) - iVar4) + (uint)uStack_60) * fVar8) + (short)iVar4;
  }
  param_2[2] = sVar1;
LAB_1802a2ced:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_98);
}






// 函数: void FUN_1802a2aec(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
void FUN_1802a2aec(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,ulonglong param_8)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong unaff_RBP;
  short *unaff_RSI;
  ulonglong uVar4;
  int iVar5;
  longlong unaff_R14;
  float fVar6;
  float fVar7;
  int8_t auStackX_20 [8];
  
  puVar3 = &param_5;
  uVar4 = (ulonglong)(param_2 + 3);
  do {
    func_0x000180074f10(puVar3);
    puVar3 = (uint64_t *)((longlong)puVar3 + 6);
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  FUN_1802a4fa0();
  fVar6 = (float)modff((float)(int)(*(ushort *)(unaff_R14 + 0x5e) - 1) * *(float *)(unaff_RBP + 4),
                       auStackX_20);
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
  FUN_1808fc050(param_8 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802a2c83(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1802a2c83(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBP;
  int32_t *unaff_RSI;
  int iVar5;
  longlong *unaff_R14;
  ulonglong in_stack_00000040;
  
  iVar4 = *(ushort *)((longlong)unaff_R14 + 0x5e) - 1;
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
  lVar2 = (longlong)(int)(iVar4 + iVar3 * (uint)*(ushort *)(param_3 + 0x5c));
  *unaff_RSI = *(int32_t *)(lVar1 + lVar2 * 6);
  *(int16_t *)(unaff_RSI + 1) = *(int16_t *)(lVar1 + 4 + lVar2 * 6);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a2d10(uint64_t param_1,char *param_2,longlong *param_3,float *param_4,int param_5)
void FUN_1802a2d10(uint64_t param_1,char *param_2,longlong *param_3,float *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int16_t *puVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_88 [32];
  int8_t auStack_68 [8];
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
  ulonglong uStack_50;
  
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  if (param_5 == 0) {
    iVar4 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    iVar2 = *(ushort *)((longlong)param_3 + 0x5c) - 1;
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
             ((longlong)(int)(iVar4 + iVar7 * (uint)*(ushort *)((longlong)param_3 + 0x5c)) * 3 +
             *param_3);
    *(int16_t *)param_2 = *puVar3;
    cVar1 = *(char *)(puVar3 + 1);
  }
  else {
    if (param_5 != 1) goto LAB_1802a2f44;
    pbVar5 = &bStack_60;
    lVar6 = 4;
    do {
      func_0x000180074f10(pbVar5);
      pbVar5 = pbVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    FUN_1802a5100(param_3,param_4);
    fVar8 = (float)modff((float)(int)(*(ushort *)((longlong)param_3 + 0x5e) - 1) * param_4[1],
                         auStack_68);
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
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_88);
}






// 函数: void FUN_1802a2d49(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
void FUN_1802a2d49(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,ulonglong param_7)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong unaff_RBP;
  char *unaff_RSI;
  ulonglong uVar4;
  int iVar5;
  longlong unaff_R14;
  float fVar6;
  float fVar7;
  int8_t auStackX_20 [8];
  
  puVar3 = &param_5;
  uVar4 = (ulonglong)(param_2 + 3);
  do {
    func_0x000180074f10(puVar3);
    puVar3 = (uint64_t *)((longlong)puVar3 + 3);
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  FUN_1802a5100();
  fVar6 = (float)modff((float)(int)(*(ushort *)(unaff_RBP + 0x5e) - 1) * *(float *)(unaff_R14 + 4),
                       auStackX_20);
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
  FUN_1808fc050(param_7 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802a2eda(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_1802a2eda(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  int16_t *puVar2;
  int iVar3;
  longlong *unaff_RBP;
  int16_t *unaff_RSI;
  int iVar4;
  float *unaff_R14;
  ulonglong in_stack_00000038;
  
  iVar3 = *(ushort *)((longlong)unaff_RBP + 0x5e) - 1;
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
           ((longlong)(int)(iVar3 + iVar1 * (uint)*(ushort *)(param_3 + 0x5c)) * 3 + *unaff_RBP);
  *unaff_RSI = *puVar2;
  *(int8_t *)(unaff_RSI + 1) = *(int8_t *)(puVar2 + 1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a2f60(uint64_t param_1,int32_t *param_2,longlong *param_3,float *param_4,
void FUN_1802a2f60(uint64_t param_1,int32_t *param_2,longlong *param_3,float *param_4,
                  int param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_98 [32];
  int8_t auStack_78 [8];
  int32_t *puStack_70;
  uint uStack_68;
  uint uStack_64;
  int32_t uStack_60;
  uint uStack_5c;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_70 = param_2;
  if (param_5 == 0) {
    iVar3 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    iVar4 = *(ushort *)((longlong)param_3 + 0x5c) - 1;
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
                (longlong)(int)(iVar6 * (uint)*(ushort *)((longlong)param_3 + 0x5c) + iVar3) * 4);
  }
  else if (param_5 == 1) {
    puVar7 = &uStack_68;
    lVar8 = 4;
    do {
      func_0x000180074f10(puVar7);
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar4 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    fVar15 = (float)iVar4 * param_4[1];
    if (fVar15 <= 0.0) {
      fVar15 = fVar15 - 0.9999999;
    }
    uVar1 = *(ushort *)((longlong)param_3 + 0x5c);
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
    uStack_68 = *(uint *)(lVar8 + (ulonglong)(uVar5 * iVar3 + iVar9) * 4);
    uStack_64 = *(uint *)(lVar8 + (ulonglong)((uint)uVar1 * iVar6 + iVar13) * 4);
    uStack_60 = *(uint *)(lVar8 + (ulonglong)(uVar5 * iVar2 + iVar9) * 4);
    uStack_5c = *(uint *)(lVar8 + (ulonglong)(uVar5 * iVar12 + iVar13) * 4);
    fVar15 = (float)modff(uStack_5c,auStack_78);
    fVar14 = (float)modff();
    uVar11 = (uint)uStack_60._3_1_;
    uVar5 = uStack_68 >> 8 & 0xff;
    iVar3 = (int)((float)(int)((uStack_64 & 0xff) - (uStack_68 & 0xff)) * fVar14) +
            (uStack_68 & 0xff);
    uVar10 = uStack_68 >> 0x10 & 0xff;
    iVar4 = (int)((float)(int)((uStack_64 >> 8 & 0xff) - uVar5) * fVar14) + uVar5;
    iVar13 = (int)((float)(int)((uStack_64 >> 0x10 & 0xff) - uVar10) * fVar14) + uVar10;
    iVar6 = (int)((float)(int)((uStack_64 >> 0x18) - (uStack_68 >> 0x18)) * fVar14) +
            (uStack_68 >> 0x18);
    uVar5 = (uint)uStack_60._3_1_;
    uStack_68 = (int)((float)(int)(((int)((float)(int)((uStack_5c & 0xff) - (uStack_60 & 0xff)) *
                                         fVar14) + (uStack_60 & 0xff)) - iVar3) * fVar15) + iVar3;
    uStack_64 = (int)((float)(int)(((int)((float)(int)((uStack_5c >> 8 & 0xff) -
                                                      (uint)uStack_60._1_1_) * fVar14) +
                                   (uint)uStack_60._1_1_) - iVar4) * fVar15) + iVar4;
    uStack_60 = (int)((float)(int)(((int)((float)(int)((uStack_5c >> 0x10 & 0xff) -
                                                      (uint)uStack_60._2_1_) * fVar14) +
                                   (uint)uStack_60._2_1_) - iVar13) * fVar15) + iVar13;
    uStack_5c = (int)((float)(int)(((int)((float)(int)((uStack_5c >> 0x18) - uVar5) * fVar14) +
                                   uVar11) - iVar6) * fVar15) + iVar6;
    *(int8_t *)puStack_70 = (int8_t)uStack_68;
    *(int8_t *)((longlong)puStack_70 + 1) = (int8_t)uStack_64;
    *(int8_t *)((longlong)puStack_70 + 2) = (int8_t)uStack_60;
    *(int8_t *)((longlong)puStack_70 + 3) = (int8_t)uStack_5c;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_98);
}






