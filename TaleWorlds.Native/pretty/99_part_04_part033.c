#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part033.c - 8 个函数

// 函数: void FUN_1802a3b30(uint64_t param_1,int32_t *param_2,int64_t *param_3,float *param_4,
void FUN_1802a3b30(uint64_t param_1,int32_t *param_2,int64_t *param_3,float *param_4,
                  int param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int8_t auStack_f8 [32];
  int32_t *puStack_d8;
  int8_t auStack_c8 [4];
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  byte bStack_b0;
  byte bStack_af;
  byte bStack_ae;
  byte bStack_ad;
  byte bStack_ac;
  byte bStack_ab;
  byte bStack_aa;
  byte bStack_a9;
  byte bStack_a8;
  byte bStack_a7;
  byte bStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  byte bStack_a3;
  byte bStack_a2;
  byte bStack_a1;
  int32_t auStack_98 [16];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  if (param_5 == 0) {
    puVar10 = auStack_98;
    lVar11 = 0x10;
    do {
      func_0x000180074f10(puVar10);
      puVar10 = puVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar6 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    fVar13 = (float)iVar6 * param_4[1];
    if (fVar13 <= 0.0) {
      fVar13 = fVar13 - 0.9999999;
    }
    uVar1 = *(ushort *)((int64_t)param_3 + 0x5c);
    iVar5 = (int)fVar13;
    iVar12 = uVar1 - 1;
    fVar13 = (float)iVar12 * *param_4;
    if (fVar13 <= 0.0) {
      fVar13 = fVar13 - 0.9999999;
    }
    iVar2 = (int)fVar13;
    if ((iVar2 < 0) || ((int)(uint)uVar1 <= iVar2)) {
      if (iVar2 <= iVar12) {
        iVar12 = iVar2;
      }
      iVar2 = 0;
      if (-1 < iVar12) {
        iVar2 = iVar12;
      }
    }
    if ((iVar5 < 0) || ((int)(uint)*(ushort *)((int64_t)param_3 + 0x5e) <= iVar5)) {
      if (iVar5 <= iVar6) {
        iVar6 = iVar5;
      }
      iVar5 = 0;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
    }
    uVar7 = iVar2 >> 0x1f & 3;
    uVar3 = iVar2 + uVar7;
    uVar8 = iVar5 >> 0x1f & 3;
    uVar4 = iVar5 + uVar8;
    puStack_d8 = auStack_98;
    FUN_1802a69d0(0,0,0x10,(uint64_t)
                           ((((int)uVar3 >> 2) + (uint)(uVar1 >> 2) * ((int)uVar4 >> 2)) * 0x10) +
                           *param_3);
    *param_2 = auStack_98
               [(int64_t)(int)((uVar3 & 3) - uVar7) + (int64_t)(int)((uVar4 & 3) - uVar8) * 4];
  }
  else if (param_5 == 1) {
    pbVar9 = &bStack_b0;
    lVar11 = 4;
    do {
      func_0x000180074f10(pbVar9);
      pbVar9 = pbVar9 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    FUN_1802a5aa0(param_3,param_4);
    fVar13 = (float)modff((float)(int)(*(ushort *)((int64_t)param_3 + 0x5e) - 1) * param_4[1],
                          auStack_c8);
    fVar14 = (float)modff();
    iStack_c4 = (int)((float)(int)((uint)bStack_ac - (uint)bStack_b0) * fVar14) + (uint)bStack_b0;
    iStack_c0 = (int)((float)(int)((uint)bStack_ab - (uint)bStack_af) * fVar14) + (uint)bStack_af;
    iStack_bc = (int)((float)(int)((uint)bStack_aa - (uint)bStack_ae) * fVar14) + (uint)bStack_ae;
    iStack_b8 = (int)((float)(int)((uint)bStack_a9 - (uint)bStack_ad) * fVar14) + (uint)bStack_ad;
    iStack_c4 = (int)((float)(int)(((int)((float)(int)((uint)bStack_a4 - (uint)bStack_a8) * fVar14)
                                   - iStack_c4) + (uint)bStack_a8) * fVar13) + iStack_c4;
    iStack_c0 = (int)((float)(int)(((int)((float)(int)((uint)bStack_a3 - (uint)bStack_a7) * fVar14)
                                   - iStack_c0) + (uint)bStack_a7) * fVar13) + iStack_c0;
    iStack_bc = (int)((float)(int)(((int)((float)(int)((uint)bStack_a2 - (uint)bStack_a6) * fVar14)
                                   - iStack_bc) + (uint)bStack_a6) * fVar13) + iStack_bc;
    iStack_b8 = (int)((float)(int)(((int)((float)(int)((uint)bStack_a1 - (uint)bStack_a5) * fVar14)
                                   - iStack_b8) + (uint)bStack_a5) * fVar13) + iStack_b8;
    *(int8_t *)param_2 = (int8_t)iStack_c4;
    *(int8_t *)((int64_t)param_2 + 1) = (int8_t)iStack_c0;
    *(int8_t *)((int64_t)param_2 + 2) = (int8_t)iStack_bc;
    *(int8_t *)((int64_t)param_2 + 3) = (int8_t)iStack_b8;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_f8);
}






// 函数: void FUN_1802a3b74(uint64_t param_1,int param_2)
void FUN_1802a3b74(uint64_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  int64_t in_R11;
  int8_t *unaff_R14;
  int64_t unaff_R15;
  float fVar7;
  float fVar8;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x30) = unaff_XMM6_Qb;
  lVar3 = unaff_RBP + -0x61;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  uVar4 = (uint64_t)(param_2 + 3);
  do {
    func_0x000180074f10(lVar3);
    lVar3 = lVar3 + 4;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  FUN_1802a5aa0();
  fVar7 = (float)modff((float)(int)(*(ushort *)(unaff_RSI + 0x5e) - 1) * *(float *)(unaff_R15 + 4),
                       unaff_RBP + -0x79);
  fVar8 = (float)modff();
  iVar6 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x5d) - (uint)*(byte *)(unaff_RBP + -0x61)
                            ) * fVar8) + (uint)*(byte *)(unaff_RBP + -0x61);
  iVar1 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x5c) - (uint)*(byte *)(unaff_RBP + -0x60)
                            ) * fVar8) + (uint)*(byte *)(unaff_RBP + -0x60);
  iVar2 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x5b) - (uint)*(byte *)(unaff_RBP + -0x5f)
                            ) * fVar8) + (uint)*(byte *)(unaff_RBP + -0x5f);
  iVar5 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x5a) - (uint)*(byte *)(unaff_RBP + -0x5e)
                            ) * fVar8) + (uint)*(byte *)(unaff_RBP + -0x5e);
  *(int *)(unaff_RBP + -0x75) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x55) -
                                             (uint)*(byte *)(unaff_RBP + -0x59)) * fVar8) - iVar6) +
                         (uint)*(byte *)(unaff_RBP + -0x59)) * fVar7) + iVar6;
  *(int *)(unaff_RBP + -0x71) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x54) -
                                             (uint)*(byte *)(unaff_RBP + -0x58)) * fVar8) - iVar1) +
                         (uint)*(byte *)(unaff_RBP + -0x58)) * fVar7) + iVar1;
  *(int *)(unaff_RBP + -0x6d) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x53) -
                                             (uint)*(byte *)(unaff_RBP + -0x57)) * fVar8) - iVar2) +
                         (uint)*(byte *)(unaff_RBP + -0x57)) * fVar7) + iVar2;
  *(int *)(unaff_RBP + -0x69) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x52) -
                                             (uint)*(byte *)(unaff_RBP + -0x56)) * fVar8) - iVar5) +
                         (uint)*(byte *)(unaff_RBP + -0x56)) * fVar7) + iVar5;
  *unaff_R14 = *(int8_t *)(unaff_RBP + -0x75);
  unaff_R14[1] = *(int8_t *)(unaff_RBP + -0x71);
  unaff_R14[2] = *(int8_t *)(unaff_RBP + -0x6d);
  unaff_R14[3] = *(int8_t *)(unaff_RBP + -0x69);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802a3d5c(void)
void FUN_1802a3d5c(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t lVar10;
  int iVar11;
  int32_t *unaff_R14;
  float *unaff_R15;
  float fVar12;
  
  lVar9 = unaff_RBP + -0x49;
  lVar10 = 0x10;
  do {
    func_0x000180074f10(lVar9);
    lVar9 = lVar9 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = *(ushort *)((int64_t)unaff_RSI + 0x5e) - 1;
  fVar12 = (float)iVar6 * unaff_R15[1];
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  uVar1 = *(ushort *)((int64_t)unaff_RSI + 0x5c);
  iVar5 = (int)fVar12;
  iVar11 = uVar1 - 1;
  fVar12 = (float)iVar11 * *unaff_R15;
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  iVar2 = (int)fVar12;
  if ((iVar2 < 0) || ((int)(uint)uVar1 <= iVar2)) {
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
    iVar2 = 0;
    if (-1 < iVar11) {
      iVar2 = iVar11;
    }
  }
  if ((iVar5 < 0) || ((int)(uint)*(ushort *)((int64_t)unaff_RSI + 0x5e) <= iVar5)) {
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
    iVar5 = 0;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
  }
  uVar7 = iVar2 >> 0x1f & 3;
  uVar3 = iVar2 + uVar7;
  uVar8 = iVar5 >> 0x1f & 3;
  uVar4 = iVar5 + uVar8;
  FUN_1802a69d0(0,0,0x10,(uint64_t)
                         ((((int)uVar3 >> 2) + (uint)(uVar1 >> 2) * ((int)uVar4 >> 2)) * 0x10) +
                         *unaff_RSI,unaff_RBP + -0x49);
  *unaff_R14 = *(int32_t *)
                (unaff_RBP + -0x49 +
                ((int64_t)(int)((uVar3 & 3) - uVar7) + (int64_t)(int)((uVar4 & 3) - uVar8) * 4) *
                4);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a3e80(uint64_t param_1,int32_t *param_2,int64_t *param_3,float *param_4,
void FUN_1802a3e80(uint64_t param_1,int32_t *param_2,int64_t *param_3,float *param_4,
                  int param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint64_t *puVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int8_t auStack_e8 [32];
  int8_t auStack_c8 [4];
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int32_t auStack_a8 [16];
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  if (param_5 == 0) {
    puVar10 = auStack_a8;
    lVar11 = 0x10;
    do {
      func_0x000180074f10(puVar10);
      puVar10 = puVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar6 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    fVar13 = (float)iVar6 * param_4[1];
    if (fVar13 <= 0.0) {
      fVar13 = fVar13 - 0.9999999;
    }
    uVar1 = *(ushort *)((int64_t)param_3 + 0x5c);
    iVar5 = (int)fVar13;
    iVar12 = uVar1 - 1;
    fVar13 = (float)iVar12 * *param_4;
    if (fVar13 <= 0.0) {
      fVar13 = fVar13 - 0.9999999;
    }
    iVar2 = (int)fVar13;
    if ((iVar2 < 0) || ((int)(uint)uVar1 <= iVar2)) {
      if (iVar2 <= iVar12) {
        iVar12 = iVar2;
      }
      iVar2 = 0;
      if (-1 < iVar12) {
        iVar2 = iVar12;
      }
    }
    if ((iVar5 < 0) || ((int)(uint)*(ushort *)((int64_t)param_3 + 0x5e) <= iVar5)) {
      if (iVar5 <= iVar6) {
        iVar6 = iVar5;
      }
      iVar5 = 0;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
    }
    uVar7 = iVar2 >> 0x1f & 3;
    uStack_68 = 0xffffffffffffffff;
    uVar3 = iVar2 + uVar7;
    uStack_60 = 0xffffffffffffffff;
    uVar8 = iVar5 >> 0x1f & 3;
    uVar4 = iVar5 + uVar8;
    FUN_1802a6630((uint64_t)((((int)uVar4 >> 2) * (uint)(uVar1 >> 2) + ((int)uVar3 >> 2)) * 8) +
                  *param_3,auStack_a8,0x10,&uStack_68);
    *param_2 = auStack_a8
               [(int64_t)(int)((uVar3 & 3) - uVar7) + (int64_t)(int)((uVar4 & 3) - uVar8) * 4];
  }
  else if (param_5 == 1) {
    puVar9 = &uStack_68;
    lVar11 = 4;
    do {
      func_0x000180074f10(puVar9);
      puVar9 = (uint64_t *)((int64_t)puVar9 + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    FUN_1802a5d60(param_3,param_4);
    fVar13 = (float)modff((float)(int)(*(ushort *)((int64_t)param_3 + 0x5e) - 1) * param_4[1],
                          auStack_c8);
    fVar14 = (float)modff();
    iStack_c4 = (int)((float)(int)((uint)uStack_68._4_1_ - (uint)(byte)uStack_68) * fVar14) +
                (uint)(byte)uStack_68;
    iStack_c0 = (int)((float)(int)((uint)uStack_68._5_1_ - (uint)uStack_68._1_1_) * fVar14) +
                (uint)uStack_68._1_1_;
    iStack_bc = (int)((float)(int)((uint)uStack_68._6_1_ - (uint)uStack_68._2_1_) * fVar14) +
                (uint)uStack_68._2_1_;
    iStack_b8 = (int)((float)(int)((uint)uStack_68._7_1_ - (uint)uStack_68._3_1_) * fVar14) +
                (uint)uStack_68._3_1_;
    iStack_c4 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._4_1_ - (uint)(byte)uStack_60
                                                      ) * fVar14) - iStack_c4) +
                                  (uint)(byte)uStack_60) * fVar13) + iStack_c4;
    iStack_c0 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._5_1_ - (uint)uStack_60._1_1_
                                                      ) * fVar14) - iStack_c0) +
                                  (uint)uStack_60._1_1_) * fVar13) + iStack_c0;
    iStack_bc = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._6_1_ - (uint)uStack_60._2_1_
                                                      ) * fVar14) - iStack_bc) +
                                  (uint)uStack_60._2_1_) * fVar13) + iStack_bc;
    iStack_b8 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._7_1_ - (uint)uStack_60._3_1_
                                                      ) * fVar14) - iStack_b8) +
                                  (uint)uStack_60._3_1_) * fVar13) + iStack_b8;
    *(int8_t *)param_2 = (int8_t)iStack_c4;
    *(int8_t *)((int64_t)param_2 + 1) = (int8_t)iStack_c0;
    *(int8_t *)((int64_t)param_2 + 2) = (int8_t)iStack_bc;
    *(int8_t *)((int64_t)param_2 + 3) = (int8_t)iStack_b8;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_e8);
}






// 函数: void FUN_1802a3ec4(uint64_t param_1,int param_2)
void FUN_1802a3ec4(uint64_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  int64_t in_R11;
  int8_t *unaff_R14;
  int64_t unaff_R15;
  float fVar7;
  float fVar8;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x30) = unaff_XMM6_Qb;
  lVar3 = unaff_RBP + -0x19;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  uVar4 = (uint64_t)(param_2 + 3);
  do {
    func_0x000180074f10(lVar3);
    lVar3 = lVar3 + 4;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  FUN_1802a5d60();
  fVar7 = (float)modff((float)(int)(*(ushort *)(unaff_RSI + 0x5e) - 1) * *(float *)(unaff_R15 + 4),
                       unaff_RBP + -0x79);
  fVar8 = (float)modff();
  iVar6 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x15) - (uint)*(byte *)(unaff_RBP + -0x19)
                            ) * fVar8) + (uint)*(byte *)(unaff_RBP + -0x19);
  iVar1 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x14) - (uint)*(byte *)(unaff_RBP + -0x18)
                            ) * fVar8) + (uint)*(byte *)(unaff_RBP + -0x18);
  iVar2 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x13) - (uint)*(byte *)(unaff_RBP + -0x17)
                            ) * fVar8) + (uint)*(byte *)(unaff_RBP + -0x17);
  iVar5 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x12) - (uint)*(byte *)(unaff_RBP + -0x16)
                            ) * fVar8) + (uint)*(byte *)(unaff_RBP + -0x16);
  *(int *)(unaff_RBP + -0x75) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0xd) -
                                             (uint)*(byte *)(unaff_RBP + -0x11)) * fVar8) - iVar6) +
                         (uint)*(byte *)(unaff_RBP + -0x11)) * fVar7) + iVar6;
  *(int *)(unaff_RBP + -0x71) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0xc) -
                                             (uint)*(byte *)(unaff_RBP + -0x10)) * fVar8) - iVar1) +
                         (uint)*(byte *)(unaff_RBP + -0x10)) * fVar7) + iVar1;
  *(int *)(unaff_RBP + -0x6d) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0xb) -
                                             (uint)*(byte *)(unaff_RBP + -0xf)) * fVar8) - iVar2) +
                         (uint)*(byte *)(unaff_RBP + -0xf)) * fVar7) + iVar2;
  *(int *)(unaff_RBP + -0x69) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -10) -
                                             (uint)*(byte *)(unaff_RBP + -0xe)) * fVar8) - iVar5) +
                         (uint)*(byte *)(unaff_RBP + -0xe)) * fVar7) + iVar5;
  *unaff_R14 = *(int8_t *)(unaff_RBP + -0x75);
  unaff_R14[1] = *(int8_t *)(unaff_RBP + -0x71);
  unaff_R14[2] = *(int8_t *)(unaff_RBP + -0x6d);
  unaff_R14[3] = *(int8_t *)(unaff_RBP + -0x69);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802a40ac(void)
void FUN_1802a40ac(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t lVar10;
  int iVar11;
  int32_t *unaff_R14;
  float *unaff_R15;
  float fVar12;
  
  lVar9 = unaff_RBP + -0x59;
  lVar10 = 0x10;
  do {
    func_0x000180074f10(lVar9);
    lVar9 = lVar9 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = *(ushort *)((int64_t)unaff_RSI + 0x5e) - 1;
  fVar12 = (float)iVar6 * unaff_R15[1];
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  uVar1 = *(ushort *)((int64_t)unaff_RSI + 0x5c);
  iVar5 = (int)fVar12;
  iVar11 = uVar1 - 1;
  fVar12 = (float)iVar11 * *unaff_R15;
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  iVar2 = (int)fVar12;
  if ((iVar2 < 0) || ((int)(uint)uVar1 <= iVar2)) {
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
    iVar2 = 0;
    if (-1 < iVar11) {
      iVar2 = iVar11;
    }
  }
  if ((iVar5 < 0) || ((int)(uint)*(ushort *)((int64_t)unaff_RSI + 0x5e) <= iVar5)) {
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
    iVar5 = 0;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
  }
  uVar7 = iVar2 >> 0x1f & 3;
  *(uint64_t *)(unaff_RBP + -0x19) = 0xffffffffffffffff;
  uVar3 = iVar2 + uVar7;
  *(uint64_t *)(unaff_RBP + -0x11) = 0xffffffffffffffff;
  uVar8 = iVar5 >> 0x1f & 3;
  uVar4 = iVar5 + uVar8;
  FUN_1802a6630((uint64_t)((((int)uVar4 >> 2) * (uint)(uVar1 >> 2) + ((int)uVar3 >> 2)) * 8) +
                *unaff_RSI,unaff_RBP + -0x59,0x10,unaff_RBP + -0x19);
  *unaff_R14 = *(int32_t *)
                (unaff_RBP + -0x59 +
                ((int64_t)(int)((uVar3 & 3) - uVar7) + (int64_t)(int)((uVar4 & 3) - uVar8) * 4) *
                4);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -9) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a41e0(uint64_t param_1,int8_t *param_2,int64_t *param_3,float *param_4,
void FUN_1802a41e0(uint64_t param_1,int8_t *param_2,int64_t *param_3,float *param_4,
                  int param_5)

{
  ushort uVar1;
  int8_t uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int64_t lVar11;
  int iVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auStack_2c8 [32];
  int8_t auStack_2a8 [4];
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int8_t auStack_290 [40];
  byte bStack_268;
  byte bStack_267;
  byte bStack_266;
  byte bStack_265;
  byte bStack_264;
  byte bStack_263;
  byte bStack_262;
  byte bStack_261;
  byte bStack_260;
  byte bStack_25f;
  byte bStack_25e;
  byte bStack_25d;
  byte bStack_25c;
  byte bStack_25b;
  byte bStack_25a;
  byte bStack_259;
  double adStack_258 [64];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2c8;
  if (param_5 == 0) {
    uVar1 = *(ushort *)((int64_t)param_3 + 0x5c);
    iVar12 = uVar1 - 1;
    auVar13._0_4_ = (float)iVar12 * *param_4;
    iVar5 = (int)auVar13._0_4_;
    uVar3 = 0;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != auVar13._0_4_)) {
      auVar13._4_4_ = auVar13._0_4_;
      auVar13._8_8_ = 0;
      uVar3 = movmskps(0,auVar13);
      uVar3 = uVar3 & 1;
      auVar13._0_4_ = (float)(int)(iVar5 - uVar3);
    }
    iVar7 = (int)auVar13._0_4_;
    iVar5 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    auVar14._0_4_ = (float)iVar5 * param_4[1];
    iVar6 = (int)auVar14._0_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar14._0_4_)) {
      auVar14._4_4_ = auVar14._0_4_;
      auVar14._8_8_ = 0;
      uVar3 = movmskps(uVar3,auVar14);
      auVar14._0_4_ = (float)(int)(iVar6 - (uVar3 & 1));
    }
    iVar6 = (int)auVar14._0_4_;
    if ((iVar7 < 0) || ((int)(uint)uVar1 <= iVar7)) {
      if (iVar7 <= iVar12) {
        iVar12 = iVar7;
      }
      iVar7 = 0;
      if (-1 < iVar12) {
        iVar7 = iVar12;
      }
    }
    if ((iVar6 < 0) || ((int)(uint)*(ushort *)((int64_t)param_3 + 0x5e) <= iVar6)) {
      if (iVar6 <= iVar5) {
        iVar5 = iVar6;
      }
      iVar6 = 0;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
    }
    uVar8 = iVar7 >> 0x1f & 3;
    uVar3 = iVar7 + uVar8;
    uVar9 = iVar6 >> 0x1f & 3;
    uVar4 = iVar6 + uVar9;
    FUN_18041c5b0(auStack_290,adStack_258,
                  (uint64_t)((((int)uVar3 >> 2) + (uint)(uVar1 >> 2) * ((int)uVar4 >> 2)) * 0x10) +
                  *param_3);
    lVar11 = (int64_t)(int)(((uVar3 & 3) - uVar8) + ((uVar4 & 3) - uVar9) * 4);
    param_2[2] = (char)(int)adStack_258[lVar11 * 4];
    param_2[1] = (char)(int)adStack_258[lVar11 * 4 + 1];
    *param_2 = (char)(int)adStack_258[lVar11 * 4 + 2];
    uVar2 = (int8_t)(int)adStack_258[lVar11 * 4 + 3];
  }
  else {
    if (param_5 != 1) goto LAB_1802a4565;
    pbVar10 = &bStack_268;
    lVar11 = 4;
    do {
      func_0x000180074f10(pbVar10);
      pbVar10 = pbVar10 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    FUN_1802a6040(param_3,param_4);
    auVar13._0_4_ =
         (float)modff((float)(int)(*(ushort *)((int64_t)param_3 + 0x5e) - 1) * param_4[1],
                      auStack_2a8);
    auVar14._0_4_ = (float)modff();
    iStack_2a4 = (int)((float)(int)((uint)bStack_264 - (uint)bStack_268) * auVar14._0_4_) +
                 (uint)bStack_268;
    iStack_2a0 = (int)((float)(int)((uint)bStack_263 - (uint)bStack_267) * auVar14._0_4_) +
                 (uint)bStack_267;
    iStack_29c = (int)((float)(int)((uint)bStack_262 - (uint)bStack_266) * auVar14._0_4_) +
                 (uint)bStack_266;
    iStack_298 = (int)((float)(int)((uint)bStack_261 - (uint)bStack_265) * auVar14._0_4_) +
                 (uint)bStack_265;
    iStack_2a4 = (int)((float)(int)(((int)((float)(int)((uint)bStack_25c - (uint)bStack_260) *
                                          auVar14._0_4_) - iStack_2a4) + (uint)bStack_260) *
                      auVar13._0_4_) + iStack_2a4;
    iStack_2a0 = (int)((float)(int)(((int)((float)(int)((uint)bStack_25b - (uint)bStack_25f) *
                                          auVar14._0_4_) - iStack_2a0) + (uint)bStack_25f) *
                      auVar13._0_4_) + iStack_2a0;
    iStack_29c = (int)((float)(int)(((int)((float)(int)((uint)bStack_25a - (uint)bStack_25e) *
                                          auVar14._0_4_) - iStack_29c) + (uint)bStack_25e) *
                      auVar13._0_4_) + iStack_29c;
    iStack_298 = (int)((float)(int)(((int)((float)(int)((uint)bStack_259 - (uint)bStack_25d) *
                                          auVar14._0_4_) - iStack_298) + (uint)bStack_25d) *
                      auVar13._0_4_) + iStack_298;
    *param_2 = (int8_t)iStack_2a4;
    param_2[1] = (int8_t)iStack_2a0;
    param_2[2] = (int8_t)iStack_29c;
    uVar2 = (int8_t)iStack_298;
  }
  param_2[3] = uVar2;
LAB_1802a4565:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_2c8);
}






// 函数: void FUN_1802a422d(void)
void FUN_1802a422d(void)

{
  int in_EAX;
  int iVar1;
  uint64_t *puVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar3;
  int iVar4;
  int64_t in_R11;
  int8_t *unaff_R14;
  int64_t unaff_R15;
  float fVar5;
  float fVar6;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int8_t auStackX_20 [4];
  int iStackX_24;
  char cStack0000000000000028;
  int8_t uStack000000000000002c;
  char cStack0000000000000030;
  byte bStack0000000000000060;
  byte bStack0000000000000061;
  byte bStack0000000000000062;
  byte bStack0000000000000063;
  byte bStack0000000000000064;
  byte bStack0000000000000065;
  byte bStack0000000000000066;
  byte bStack0000000000000067;
  byte bStack0000000000000068;
  byte bStack0000000000000069;
  byte bStack000000000000006a;
  byte bStack000000000000006b;
  byte bStack000000000000006c;
  byte bStack000000000000006d;
  byte bStack000000000000006e;
  byte bStack000000000000006f;
  
  *(uint64_t *)(in_R11 + -0x38) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x30) = unaff_XMM6_Qb;
  puVar2 = (uint64_t *)&stack0x00000060;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  uVar3 = (uint64_t)(in_EAX + 3);
  do {
    func_0x000180074f10(puVar2);
    puVar2 = (uint64_t *)((int64_t)puVar2 + 4);
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  FUN_1802a6040();
  fVar5 = (float)modff((float)(int)(*(ushort *)(unaff_RSI + 0x5e) - 1) * *(float *)(unaff_R15 + 4),
                       auStackX_20);
  fVar6 = (float)modff();
  iStackX_24 = (int)((float)(int)((uint)bStack0000000000000064 - (uint)bStack0000000000000060) *
                    fVar6) + (uint)bStack0000000000000060;
  iVar1 = (int)((float)(int)((uint)bStack0000000000000065 - (uint)bStack0000000000000061) * fVar6) +
          (uint)bStack0000000000000061;
  _uStack000000000000002c =
       (int)((float)(int)((uint)bStack0000000000000066 - (uint)bStack0000000000000062) * fVar6) +
       (uint)bStack0000000000000062;
  iVar4 = (int)((float)(int)((uint)bStack0000000000000067 - (uint)bStack0000000000000063) * fVar6) +
          (uint)bStack0000000000000063;
  iStackX_24 = (int)((float)(int)(((int)((float)(int)((uint)bStack000000000000006c -
                                                     (uint)bStack0000000000000068) * fVar6) -
                                  iStackX_24) + (uint)bStack0000000000000068) * fVar5) + iStackX_24;
  cStack0000000000000028 =
       (char)(int)((float)(int)(((int)((float)(int)((uint)bStack000000000000006d -
                                                   (uint)bStack0000000000000069) * fVar6) - iVar1) +
                               (uint)bStack0000000000000069) * fVar5) + (char)iVar1;
  _uStack000000000000002c =
       (int)((float)(int)(((int)((float)(int)((uint)bStack000000000000006e -
                                             (uint)bStack000000000000006a) * fVar6) -
                          _uStack000000000000002c) + (uint)bStack000000000000006a) * fVar5) +
       _uStack000000000000002c;
  cStack0000000000000030 =
       (char)(int)((float)(int)(((int)((float)(int)((uint)bStack000000000000006f -
                                                   (uint)bStack000000000000006b) * fVar6) - iVar4) +
                               (uint)bStack000000000000006b) * fVar5) + (char)iVar4;
  *unaff_R14 = (int8_t)iStackX_24;
  unaff_R14[1] = cStack0000000000000028;
  unaff_R14[2] = uStack000000000000002c;
  unaff_R14[3] = cStack0000000000000030;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x170) ^ (uint64_t)&stack0x00000000);
}






