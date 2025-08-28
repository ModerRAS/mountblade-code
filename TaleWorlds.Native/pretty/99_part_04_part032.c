#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part032.c - 13 个函数

// 函数: void FUN_1802a2f9e(uint64_t param_1,int param_2)
void FUN_1802a2f9e(uint64_t param_1,int param_2)

{
  ushort uVar1;
  int32_t uVar2;
  int8_t *puVar3;
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
  
  lVar8 = unaff_RBP + -0x50;
  uVar9 = (uint64_t)(param_2 + 3);
  do {
    func_0x000180074f10(lVar8);
    lVar8 = lVar8 + 4;
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
  *(int32_t *)(unaff_RBP + -0x50) =
       *(int32_t *)(lVar8 + (uint64_t)(uVar11 * iVar5 + iVar10) * 4);
  *(int32_t *)(unaff_RBP + -0x4c) =
       *(int32_t *)(lVar8 + (uint64_t)((uint)uVar1 * iVar7 + iVar13) * 4);
  *(int32_t *)(unaff_RBP + -0x48) =
       *(int32_t *)(lVar8 + (uint64_t)(uVar11 * iVar4 + iVar10) * 4);
  uVar2 = *(int32_t *)(lVar8 + (uint64_t)(uVar11 * iVar12 + iVar13) * 4);
  *(int32_t *)(unaff_RBP + -0x44) = uVar2;
  fVar15 = (float)modff(uVar2,unaff_RBP + -0x60);
  fVar14 = (float)modff();
  iVar5 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x4c) - (uint)*(byte *)(unaff_RBP + -0x50)
                            ) * fVar14) + (uint)*(byte *)(unaff_RBP + -0x50);
  iVar6 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x4b) - (uint)*(byte *)(unaff_RBP + -0x4f)
                            ) * fVar14) + (uint)*(byte *)(unaff_RBP + -0x4f);
  iVar13 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x4a) -
                             (uint)*(byte *)(unaff_RBP + -0x4e)) * fVar14) +
           (uint)*(byte *)(unaff_RBP + -0x4e);
  iVar7 = (int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x49) - (uint)*(byte *)(unaff_RBP + -0x4d)
                            ) * fVar14) + (uint)*(byte *)(unaff_RBP + -0x4d);
  *(int *)(unaff_RBP + -0x50) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x44) -
                                             (uint)*(byte *)(unaff_RBP + -0x48)) * fVar14) +
                          (uint)*(byte *)(unaff_RBP + -0x48)) - iVar5) * fVar15) + iVar5;
  *(int *)(unaff_RBP + -0x4c) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x43) -
                                             (uint)*(byte *)(unaff_RBP + -0x47)) * fVar14) +
                          (uint)*(byte *)(unaff_RBP + -0x47)) - iVar6) * fVar15) + iVar6;
  *(int *)(unaff_RBP + -0x48) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x42) -
                                             (uint)*(byte *)(unaff_RBP + -0x46)) * fVar14) +
                          (uint)*(byte *)(unaff_RBP + -0x46)) - iVar13) * fVar15) + iVar13;
  puVar3 = *(int8_t **)(unaff_RBP + -0x58);
  *(int *)(unaff_RBP + -0x44) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x41) -
                                             (uint)*(byte *)(unaff_RBP + -0x45)) * fVar14) +
                          (uint)*(byte *)(unaff_RBP + -0x45)) - iVar7) * fVar15) + iVar7;
  *puVar3 = *(int8_t *)(unaff_RBP + -0x50);
  puVar3[1] = *(int8_t *)(unaff_RBP + -0x4c);
  puVar3[2] = *(int8_t *)(unaff_RBP + -0x48);
  puVar3[3] = *(int8_t *)(unaff_RBP + -0x44);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -0x40) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802a32bc(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1802a32bc(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int iVar1;
  int iVar2;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int iVar3;
  int32_t *in_R11;
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
  *in_R11 = *(int32_t *)
             (*unaff_RSI + (int64_t)(int)(iVar1 * (uint)*(ushort *)(param_3 + 0x5c) + iVar2) * 4);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -0x40) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a3340(uint64_t param_1,float *param_2,int64_t *param_3,float *param_4,int param_5)
void FUN_1802a3340(uint64_t param_1,float *param_2,int64_t *param_3,float *param_4,int param_5)

{
  ushort uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  int8_t auStack_148 [32];
  int64_t lStack_128;
  uint64_t *puStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t auStack_d8 [16];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  if (param_5 == 0) {
    puVar13 = auStack_d8;
    lVar14 = 0x10;
    do {
      func_0x00018005d390(puVar13);
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    iVar10 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    fVar16 = (float)iVar10 * param_4[1];
    if (fVar16 <= 0.0) {
      fVar16 = fVar16 - 0.9999999;
    }
    uVar1 = *(ushort *)((int64_t)param_3 + 0x5c);
    iVar9 = (int)fVar16;
    iVar15 = uVar1 - 1;
    fVar16 = (float)iVar15 * *param_4;
    if (fVar16 <= 0.0) {
      fVar16 = fVar16 - 0.9999999;
    }
    iVar6 = (int)fVar16;
    if ((iVar6 < 0) || ((int)(uint)uVar1 <= iVar6)) {
      if (iVar6 <= iVar15) {
        iVar15 = iVar6;
      }
      iVar6 = 0;
      if (-1 < iVar15) {
        iVar6 = iVar15;
      }
    }
    if ((iVar9 < 0) || ((int)(uint)*(ushort *)((int64_t)param_3 + 0x5e) <= iVar9)) {
      if (iVar9 <= iVar10) {
        iVar10 = iVar9;
      }
      iVar9 = 0;
      if (-1 < iVar10) {
        iVar9 = iVar10;
      }
    }
    uVar11 = iVar6 >> 0x1f & 3;
    uVar7 = iVar6 + uVar11;
    uVar12 = iVar9 >> 0x1f & 3;
    uVar8 = iVar9 + uVar12;
    puStack_120 = auStack_d8;
    lStack_128 = (uint64_t)((((int)uVar8 >> 2) * (uint)(uVar1 >> 2) + ((int)uVar7 >> 2)) * 0x10) +
                 *param_3;
    FUN_1802a7570(0,0,0x20);
    *(uint64_t *)param_2 =
         auStack_d8
         [(int64_t)(int)((uVar7 & 3) - uVar11) + (int64_t)(int)((uVar8 & 3) - uVar12) * 4];
  }
  else if (param_5 == 1) {
    puVar13 = &uStack_f8;
    lVar14 = 4;
    do {
      func_0x00018005d390(puVar13);
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    FUN_1802a5260(param_3,param_4);
    fVar16 = (float)modff((float)(int)(*(ushort *)((int64_t)param_3 + 0x5e) - 1) * param_4[1],
                          &uStack_118);
    fVar17 = (float)modff();
    uStack_110 = uStack_f8;
    uVar3 = uStack_110;
    uStack_118 = uStack_f0;
    uVar2 = uStack_118;
    uStack_118._0_4_ = (float)uStack_f0;
    uStack_110._0_4_ = (float)uStack_f8;
    uStack_118._4_4_ = (float)((uint64_t)uStack_f0 >> 0x20);
    uStack_110._4_4_ = (float)((uint64_t)uStack_f8 >> 0x20);
    uStack_100 = uStack_e8;
    uVar5 = uStack_100;
    uStack_108 = uStack_e0;
    uVar4 = uStack_108;
    uStack_108._0_4_ = (float)uStack_e0;
    uStack_100._0_4_ = (float)uStack_e8;
    uStack_110._0_4_ = ((float)uStack_118 - (float)uStack_110) * fVar17 + (float)uStack_110;
    uStack_110._4_4_ = (uStack_118._4_4_ - uStack_110._4_4_) * fVar17 + uStack_110._4_4_;
    uStack_108._4_4_ = (float)((uint64_t)uStack_e0 >> 0x20);
    uStack_100._4_4_ = (float)((uint64_t)uStack_e8 >> 0x20);
    *param_2 = ((((float)uStack_108 - (float)uStack_100) * fVar17 + (float)uStack_100) -
               (float)uStack_110) * fVar16 + (float)uStack_110;
    param_2[1] = (((uStack_108._4_4_ - uStack_100._4_4_) * fVar17 + uStack_100._4_4_) -
                 uStack_110._4_4_) * fVar16 + uStack_110._4_4_;
    uStack_118 = uVar2;
    uStack_110 = uVar3;
    uStack_108 = uVar4;
    uStack_100 = uVar5;
  }
  else {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_148);
}






// 函数: void FUN_1802a3389(void)
void FUN_1802a3389(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t unaff_RBP;
  float *unaff_RSI;
  int64_t lVar6;
  int64_t unaff_R14;
  float fVar7;
  float fVar8;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_000000f0;
  
  puVar5 = &stack0x00000050;
  lVar6 = 4;
  do {
    func_0x00018005d390(puVar5);
    puVar5 = puVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_1802a5260();
  fVar7 = (float)modff((float)(int)(*(ushort *)(unaff_RBP + 0x5e) - 1) * *(float *)(unaff_R14 + 4),
                       &stack0x00000030);
  fVar8 = (float)modff();
  _fStack0000000000000038 = in_stack_00000050;
  uVar2 = _fStack0000000000000038;
  _fStack0000000000000030 = in_stack_00000058;
  uVar1 = _fStack0000000000000030;
  fStack0000000000000030 = (float)in_stack_00000058;
  fStack0000000000000038 = (float)in_stack_00000050;
  fStack0000000000000034 = (float)((uint64_t)in_stack_00000058 >> 0x20);
  fStack000000000000003c = (float)((uint64_t)in_stack_00000050 >> 0x20);
  _fStack0000000000000048 = in_stack_00000060;
  uVar4 = _fStack0000000000000048;
  _fStack0000000000000040 = in_stack_00000068;
  uVar3 = _fStack0000000000000040;
  fStack0000000000000040 = (float)in_stack_00000068;
  fStack0000000000000048 = (float)in_stack_00000060;
  fStack0000000000000038 =
       (fStack0000000000000030 - fStack0000000000000038) * fVar8 + fStack0000000000000038;
  fStack000000000000003c =
       (fStack0000000000000034 - fStack000000000000003c) * fVar8 + fStack000000000000003c;
  fStack0000000000000044 = (float)((uint64_t)in_stack_00000068 >> 0x20);
  fStack000000000000004c = (float)((uint64_t)in_stack_00000060 >> 0x20);
  *unaff_RSI = (((fStack0000000000000040 - fStack0000000000000048) * fVar8 + fStack0000000000000048)
               - fStack0000000000000038) * fVar7 + fStack0000000000000038;
  unaff_RSI[1] = (((fStack0000000000000044 - fStack000000000000004c) * fVar8 +
                  fStack000000000000004c) - fStack000000000000003c) * fVar7 + fStack000000000000003c
  ;
  _fStack0000000000000030 = uVar1;
  _fStack0000000000000038 = uVar2;
  _fStack0000000000000040 = uVar3;
  _fStack0000000000000048 = uVar4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000f0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802a34bc(void)
void FUN_1802a34bc(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int8_t *puVar9;
  int64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  int64_t lVar10;
  int iVar11;
  float *unaff_R14;
  float fVar12;
  uint64_t in_stack_000000f0;
  
  puVar9 = &stack0x00000070;
  lVar10 = 0x10;
  do {
    func_0x00018005d390(puVar9);
    puVar9 = puVar9 + 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = *(ushort *)((int64_t)unaff_RBP + 0x5e) - 1;
  fVar12 = (float)iVar6 * unaff_R14[1];
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  uVar1 = *(ushort *)((int64_t)unaff_RBP + 0x5c);
  iVar5 = (int)fVar12;
  iVar11 = uVar1 - 1;
  fVar12 = (float)iVar11 * *unaff_R14;
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
  if ((iVar5 < 0) || ((int)(uint)*(ushort *)((int64_t)unaff_RBP + 0x5e) <= iVar5)) {
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
  FUN_1802a7570(0,0,0x20,(uint)(uVar1 >> 2),
                (uint64_t)((((int)uVar4 >> 2) * (uint)(uVar1 >> 2) + ((int)uVar3 >> 2)) * 0x10) +
                *unaff_RBP);
  *unaff_RSI = *(uint64_t *)
                (&stack0x00000070 +
                ((int64_t)(int)((uVar3 & 3) - uVar7) + (int64_t)(int)((uVar4 & 3) - uVar8) * 4) *
                8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000f0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a35e0(uint64_t param_1,int64_t *param_2,float *param_3,int param_4)
void FUN_1802a35e0(uint64_t param_1,int64_t *param_2,float *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int8_t auStack_c8 [32];
  int64_t lStack_a8;
  int8_t *puStack_a0;
  int8_t auStack_98 [8];
  int8_t auStack_90 [24];
  int8_t auStack_78 [64];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  if (param_4 == 0) {
    iVar4 = *(ushort *)((int64_t)param_2 + 0x5e) - 1;
    fVar6 = (float)iVar4 * param_3[1];
    if (fVar6 <= 0.0) {
      fVar6 = fVar6 - 0.9999999;
    }
    uVar1 = *(ushort *)((int64_t)param_2 + 0x5c);
    iVar3 = (int)fVar6;
    iVar5 = uVar1 - 1;
    fVar6 = (float)iVar5 * *param_3;
    if (fVar6 <= 0.0) {
      fVar6 = fVar6 - 0.9999999;
    }
    iVar2 = (int)fVar6;
    if ((iVar2 < 0) || ((int)(uint)uVar1 <= iVar2)) {
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
      iVar2 = 0;
      if (-1 < iVar5) {
        iVar2 = iVar5;
      }
    }
    if ((iVar3 < 0) || ((int)(uint)*(ushort *)((int64_t)param_2 + 0x5e) <= iVar3)) {
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      iVar3 = 0;
      if (-1 < iVar4) {
        iVar3 = iVar4;
      }
    }
    puStack_a0 = auStack_78;
    lStack_a8 = (uint64_t)
                ((((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) * (uint)(uVar1 >> 2) +
                 ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) * 8) + *param_2;
    FUN_1802a72a0(0,0,0x10);
  }
  else if (param_4 == 1) {
    FUN_1802a5540(param_2,param_3,param_3,auStack_90);
    modff((float)(int)(*(ushort *)((int64_t)param_2 + 0x5e) - 1) * param_3[1],auStack_98);
    modff();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_c8);
}






// 函数: void FUN_1802a361c(void)
void FUN_1802a361c(void)

{
  ushort uVar1;
  float *unaff_RBX;
  int64_t unaff_RSI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint64_t in_stack_00000090;
  
  FUN_1802a5540();
  uVar1 = *(ushort *)(unaff_RSI + 0x5c);
  fVar3 = *unaff_RBX;
  fVar2 = (float)modff((float)(int)(*(ushort *)(unaff_RSI + 0x5e) - 1) * unaff_RBX[1],
                       &stack0x00000030);
  fVar3 = (float)modff((float)(int)(uVar1 - 1) * fVar3,&stack0x00000030);
  fVar4 = (fStack000000000000003c - fStack0000000000000038) * fVar3 + fStack0000000000000038;
                    // WARNING: Subroutine does not return
  FUN_1808fc050((((fStack0000000000000044 - fStack0000000000000040) * fVar3 + fStack0000000000000040
                 ) - fVar4) * fVar2 + fVar4);
}






// 函数: void FUN_1802a36cb(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1802a36cb(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBX;
  int64_t *unaff_RSI;
  int iVar5;
  float fVar6;
  int8_t *puStack0000000000000028;
  uint64_t in_stack_00000090;
  
  iVar4 = *(ushort *)(param_2 + 0x5e) - 1;
  fVar6 = (float)iVar4 * *(float *)(param_3 + 4);
  if (fVar6 <= 0.0) {
    fVar6 = fVar6 - 0.9999999;
  }
  uVar1 = *(ushort *)((int64_t)unaff_RSI + 0x5c);
  iVar3 = (int)fVar6;
  iVar5 = uVar1 - 1;
  fVar6 = (float)iVar5 * *unaff_RBX;
  if (fVar6 <= 0.0) {
    fVar6 = fVar6 - 0.9999999;
  }
  iVar2 = (int)fVar6;
  if ((iVar2 < 0) || ((int)(uint)uVar1 <= iVar2)) {
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
    iVar2 = 0;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
  }
  if ((iVar3 < 0) || ((int)(uint)*(ushort *)(param_2 + 0x5e) <= iVar3)) {
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
  }
  puStack0000000000000028 = &stack0x00000050;
  FUN_1802a72a0(0,0,0x10,(uint)(uVar1 >> 2),
                (uint64_t)
                ((((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) * (uint)(uVar1 >> 2) +
                 ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) * 8) + *unaff_RSI);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802a36db(uint64_t param_1,float param_2,int64_t param_3)
void FUN_1802a36db(uint64_t param_1,float param_2,int64_t param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBX;
  int64_t *unaff_RSI;
  int iVar5;
  int in_R10D;
  float fVar6;
  float in_XMM2_Da;
  int8_t *puStack0000000000000028;
  uint64_t in_stack_00000090;
  
  iVar4 = in_R10D + -1;
  fVar6 = (float)iVar4 * *(float *)(param_3 + 4);
  if (fVar6 <= in_XMM2_Da) {
    fVar6 = fVar6 - param_2;
  }
  uVar1 = *(ushort *)((int64_t)unaff_RSI + 0x5c);
  iVar3 = (int)fVar6;
  iVar5 = uVar1 - 1;
  fVar6 = (float)iVar5 * *unaff_RBX;
  if (fVar6 <= in_XMM2_Da) {
    fVar6 = fVar6 - param_2;
  }
  iVar2 = (int)fVar6;
  if ((iVar2 < 0) || ((int)(uint)uVar1 <= iVar2)) {
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
    iVar2 = 0;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
  }
  if ((iVar3 < 0) || (in_R10D <= iVar3)) {
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
  }
  puStack0000000000000028 = &stack0x00000050;
  FUN_1802a72a0(0,0,0x10,(uint)(uVar1 >> 2),
                (uint64_t)
                ((((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) * (uint)(uVar1 >> 2) +
                 ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) * 8) + *unaff_RSI);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802a37ba(void)
void FUN_1802a37ba(void)

{
  uint64_t in_stack_00000090;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a37e0(uint64_t param_1,int32_t *param_2,int64_t *param_3,float *param_4,
void FUN_1802a37e0(uint64_t param_1,int32_t *param_2,int64_t *param_3,float *param_4,
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
    FUN_1802a6ea0(0,0,0x10,(uint64_t)
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
    FUN_1802a57e0(param_3,param_4);
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






// 函数: void FUN_1802a3824(uint64_t param_1,int param_2)
void FUN_1802a3824(uint64_t param_1,int param_2)

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
  FUN_1802a57e0();
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






// 函数: void FUN_1802a3a0c(void)
void FUN_1802a3a0c(void)

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
  FUN_1802a6ea0(0,0,0x10,(uint64_t)
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




