#include "TaleWorlds.Native.Split.h"

// 99_part_04_part032.c - 13 个函数

// 函数: void FUN_1802a2f9e(undefined8 param_1,int param_2)
void FUN_1802a2f9e(undefined8 param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
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
  
  lVar8 = unaff_RBP + -0x50;
  uVar9 = (ulonglong)(param_2 + 3);
  do {
    func_0x000180074f10(lVar8);
    lVar8 = lVar8 + 4;
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
  *(undefined4 *)(unaff_RBP + -0x50) =
       *(undefined4 *)(lVar8 + (ulonglong)(uVar11 * iVar5 + iVar10) * 4);
  *(undefined4 *)(unaff_RBP + -0x4c) =
       *(undefined4 *)(lVar8 + (ulonglong)((uint)uVar1 * iVar7 + iVar13) * 4);
  *(undefined4 *)(unaff_RBP + -0x48) =
       *(undefined4 *)(lVar8 + (ulonglong)(uVar11 * iVar4 + iVar10) * 4);
  uVar2 = *(undefined4 *)(lVar8 + (ulonglong)(uVar11 * iVar12 + iVar13) * 4);
  *(undefined4 *)(unaff_RBP + -0x44) = uVar2;
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
  puVar3 = *(undefined1 **)(unaff_RBP + -0x58);
  *(int *)(unaff_RBP + -0x44) =
       (int)((float)(int)(((int)((float)(int)((uint)*(byte *)(unaff_RBP + -0x41) -
                                             (uint)*(byte *)(unaff_RBP + -0x45)) * fVar14) +
                          (uint)*(byte *)(unaff_RBP + -0x45)) - iVar7) * fVar15) + iVar7;
  *puVar3 = *(undefined1 *)(unaff_RBP + -0x50);
  puVar3[1] = *(undefined1 *)(unaff_RBP + -0x4c);
  puVar3[2] = *(undefined1 *)(unaff_RBP + -0x48);
  puVar3[3] = *(undefined1 *)(unaff_RBP + -0x44);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802a32bc(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1802a32bc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int iVar3;
  undefined4 *in_R11;
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
  *in_R11 = *(undefined4 *)
             (*unaff_RSI + (longlong)(int)(iVar1 * (uint)*(ushort *)(param_3 + 0x5c) + iVar2) * 4);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x40) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a3340(undefined8 param_1,float *param_2,longlong *param_3,float *param_4,int param_5)
void FUN_1802a3340(undefined8 param_1,float *param_2,longlong *param_3,float *param_4,int param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_148 [32];
  longlong lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [16];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  if (param_5 == 0) {
    puVar13 = auStack_d8;
    lVar14 = 0x10;
    do {
      func_0x00018005d390(puVar13);
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    iVar10 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    fVar16 = (float)iVar10 * param_4[1];
    if (fVar16 <= 0.0) {
      fVar16 = fVar16 - 0.9999999;
    }
    uVar1 = *(ushort *)((longlong)param_3 + 0x5c);
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
    if ((iVar9 < 0) || ((int)(uint)*(ushort *)((longlong)param_3 + 0x5e) <= iVar9)) {
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
    lStack_128 = (ulonglong)((((int)uVar8 >> 2) * (uint)(uVar1 >> 2) + ((int)uVar7 >> 2)) * 0x10) +
                 *param_3;
    FUN_1802a7570(0,0,0x20);
    *(undefined8 *)param_2 =
         auStack_d8
         [(longlong)(int)((uVar7 & 3) - uVar11) + (longlong)(int)((uVar8 & 3) - uVar12) * 4];
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
    fVar16 = (float)modff((float)(int)(*(ushort *)((longlong)param_3 + 0x5e) - 1) * param_4[1],
                          &uStack_118);
    fVar17 = (float)modff();
    uStack_110 = uStack_f8;
    uVar3 = uStack_110;
    uStack_118 = uStack_f0;
    uVar2 = uStack_118;
    uStack_118._0_4_ = (float)uStack_f0;
    uStack_110._0_4_ = (float)uStack_f8;
    uStack_118._4_4_ = (float)((ulonglong)uStack_f0 >> 0x20);
    uStack_110._4_4_ = (float)((ulonglong)uStack_f8 >> 0x20);
    uStack_100 = uStack_e8;
    uVar5 = uStack_100;
    uStack_108 = uStack_e0;
    uVar4 = uStack_108;
    uStack_108._0_4_ = (float)uStack_e0;
    uStack_100._0_4_ = (float)uStack_e8;
    uStack_110._0_4_ = ((float)uStack_118 - (float)uStack_110) * fVar17 + (float)uStack_110;
    uStack_110._4_4_ = (uStack_118._4_4_ - uStack_110._4_4_) * fVar17 + uStack_110._4_4_;
    uStack_108._4_4_ = (float)((ulonglong)uStack_e0 >> 0x20);
    uStack_100._4_4_ = (float)((ulonglong)uStack_e8 >> 0x20);
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
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_148);
}






// 函数: void FUN_1802a3389(void)
void FUN_1802a3389(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong lVar6;
  longlong unaff_R14;
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
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulonglong in_stack_000000f0;
  
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
  fStack0000000000000034 = (float)((ulonglong)in_stack_00000058 >> 0x20);
  fStack000000000000003c = (float)((ulonglong)in_stack_00000050 >> 0x20);
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
  fStack0000000000000044 = (float)((ulonglong)in_stack_00000068 >> 0x20);
  fStack000000000000004c = (float)((ulonglong)in_stack_00000060 >> 0x20);
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
  FUN_1808fc050(in_stack_000000f0 ^ (ulonglong)&stack0x00000000);
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
  undefined1 *puVar9;
  longlong *unaff_RBP;
  undefined8 *unaff_RSI;
  longlong lVar10;
  int iVar11;
  float *unaff_R14;
  float fVar12;
  ulonglong in_stack_000000f0;
  
  puVar9 = &stack0x00000070;
  lVar10 = 0x10;
  do {
    func_0x00018005d390(puVar9);
    puVar9 = puVar9 + 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = *(ushort *)((longlong)unaff_RBP + 0x5e) - 1;
  fVar12 = (float)iVar6 * unaff_R14[1];
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  uVar1 = *(ushort *)((longlong)unaff_RBP + 0x5c);
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
  if ((iVar5 < 0) || ((int)(uint)*(ushort *)((longlong)unaff_RBP + 0x5e) <= iVar5)) {
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
                (ulonglong)((((int)uVar4 >> 2) * (uint)(uVar1 >> 2) + ((int)uVar3 >> 2)) * 0x10) +
                *unaff_RBP);
  *unaff_RSI = *(undefined8 *)
                (&stack0x00000070 +
                ((longlong)(int)((uVar3 & 3) - uVar7) + (longlong)(int)((uVar4 & 3) - uVar8) * 4) *
                8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000f0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a35e0(undefined8 param_1,longlong *param_2,float *param_3,int param_4)
void FUN_1802a35e0(undefined8 param_1,longlong *param_2,float *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  longlong lStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [64];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  if (param_4 == 0) {
    iVar4 = *(ushort *)((longlong)param_2 + 0x5e) - 1;
    fVar6 = (float)iVar4 * param_3[1];
    if (fVar6 <= 0.0) {
      fVar6 = fVar6 - 0.9999999;
    }
    uVar1 = *(ushort *)((longlong)param_2 + 0x5c);
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
    if ((iVar3 < 0) || ((int)(uint)*(ushort *)((longlong)param_2 + 0x5e) <= iVar3)) {
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      iVar3 = 0;
      if (-1 < iVar4) {
        iVar3 = iVar4;
      }
    }
    puStack_a0 = auStack_78;
    lStack_a8 = (ulonglong)
                ((((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) * (uint)(uVar1 >> 2) +
                 ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) * 8) + *param_2;
    FUN_1802a72a0(0,0,0x10);
  }
  else if (param_4 == 1) {
    FUN_1802a5540(param_2,param_3,param_3,auStack_90);
    modff((float)(int)(*(ushort *)((longlong)param_2 + 0x5e) - 1) * param_3[1],auStack_98);
    modff();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_c8);
}






// 函数: void FUN_1802a361c(void)
void FUN_1802a361c(void)

{
  ushort uVar1;
  float *unaff_RBX;
  longlong unaff_RSI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined8 in_stack_00000090;
  
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






// 函数: void FUN_1802a36cb(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_1802a36cb(undefined8 param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBX;
  longlong *unaff_RSI;
  int iVar5;
  float fVar6;
  undefined1 *puStack0000000000000028;
  ulonglong in_stack_00000090;
  
  iVar4 = *(ushort *)(param_2 + 0x5e) - 1;
  fVar6 = (float)iVar4 * *(float *)(param_3 + 4);
  if (fVar6 <= 0.0) {
    fVar6 = fVar6 - 0.9999999;
  }
  uVar1 = *(ushort *)((longlong)unaff_RSI + 0x5c);
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
                (ulonglong)
                ((((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) * (uint)(uVar1 >> 2) +
                 ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) * 8) + *unaff_RSI);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802a36db(undefined8 param_1,float param_2,longlong param_3)
void FUN_1802a36db(undefined8 param_1,float param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBX;
  longlong *unaff_RSI;
  int iVar5;
  int in_R10D;
  float fVar6;
  float in_XMM2_Da;
  undefined1 *puStack0000000000000028;
  ulonglong in_stack_00000090;
  
  iVar4 = in_R10D + -1;
  fVar6 = (float)iVar4 * *(float *)(param_3 + 4);
  if (fVar6 <= in_XMM2_Da) {
    fVar6 = fVar6 - param_2;
  }
  uVar1 = *(ushort *)((longlong)unaff_RSI + 0x5c);
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
                (ulonglong)
                ((((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) * (uint)(uVar1 >> 2) +
                 ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) * 8) + *unaff_RSI);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802a37ba(void)
void FUN_1802a37ba(void)

{
  ulonglong in_stack_00000090;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802a37e0(undefined8 param_1,undefined4 *param_2,longlong *param_3,float *param_4,
void FUN_1802a37e0(undefined8 param_1,undefined4 *param_2,longlong *param_3,float *param_4,
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
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_f8 [32];
  undefined4 *puStack_d8;
  undefined1 auStack_c8 [4];
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
  undefined4 auStack_98 [16];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  if (param_5 == 0) {
    puVar10 = auStack_98;
    lVar11 = 0x10;
    do {
      func_0x000180074f10(puVar10);
      puVar10 = puVar10 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar6 = *(ushort *)((longlong)param_3 + 0x5e) - 1;
    fVar13 = (float)iVar6 * param_4[1];
    if (fVar13 <= 0.0) {
      fVar13 = fVar13 - 0.9999999;
    }
    uVar1 = *(ushort *)((longlong)param_3 + 0x5c);
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
    if ((iVar5 < 0) || ((int)(uint)*(ushort *)((longlong)param_3 + 0x5e) <= iVar5)) {
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
    FUN_1802a6ea0(0,0,0x10,(ulonglong)
                           ((((int)uVar3 >> 2) + (uint)(uVar1 >> 2) * ((int)uVar4 >> 2)) * 0x10) +
                           *param_3);
    *param_2 = auStack_98
               [(longlong)(int)((uVar3 & 3) - uVar7) + (longlong)(int)((uVar4 & 3) - uVar8) * 4];
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
    fVar13 = (float)modff((float)(int)(*(ushort *)((longlong)param_3 + 0x5e) - 1) * param_4[1],
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
    *(undefined1 *)param_2 = (undefined1)iStack_c4;
    *(undefined1 *)((longlong)param_2 + 1) = (undefined1)iStack_c0;
    *(undefined1 *)((longlong)param_2 + 2) = (undefined1)iStack_bc;
    *(undefined1 *)((longlong)param_2 + 3) = (undefined1)iStack_b8;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_f8);
}






// 函数: void FUN_1802a3824(undefined8 param_1,int param_2)
void FUN_1802a3824(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong in_R11;
  undefined1 *unaff_R14;
  longlong unaff_R15;
  float fVar7;
  float fVar8;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  
  *(undefined8 *)(in_R11 + -0x38) = unaff_XMM6_Qa;
  *(undefined8 *)(in_R11 + -0x30) = unaff_XMM6_Qb;
  lVar3 = unaff_RBP + -0x61;
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  uVar4 = (ulonglong)(param_2 + 3);
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
  *unaff_R14 = *(undefined1 *)(unaff_RBP + -0x75);
  unaff_R14[1] = *(undefined1 *)(unaff_RBP + -0x71);
  unaff_R14[2] = *(undefined1 *)(unaff_RBP + -0x6d);
  unaff_R14[3] = *(undefined1 *)(unaff_RBP + -0x69);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -9) ^ (ulonglong)&stack0x00000000);
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
  longlong lVar9;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong lVar10;
  int iVar11;
  undefined4 *unaff_R14;
  float *unaff_R15;
  float fVar12;
  
  lVar9 = unaff_RBP + -0x49;
  lVar10 = 0x10;
  do {
    func_0x000180074f10(lVar9);
    lVar9 = lVar9 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = *(ushort *)((longlong)unaff_RSI + 0x5e) - 1;
  fVar12 = (float)iVar6 * unaff_R15[1];
  if (fVar12 <= 0.0) {
    fVar12 = fVar12 - 0.9999999;
  }
  uVar1 = *(ushort *)((longlong)unaff_RSI + 0x5c);
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
  if ((iVar5 < 0) || ((int)(uint)*(ushort *)((longlong)unaff_RSI + 0x5e) <= iVar5)) {
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
  FUN_1802a6ea0(0,0,0x10,(ulonglong)
                         ((((int)uVar3 >> 2) + (uint)(uVar1 >> 2) * ((int)uVar4 >> 2)) * 0x10) +
                         *unaff_RSI,unaff_RBP + -0x49);
  *unaff_R14 = *(undefined4 *)
                (unaff_RBP + -0x49 +
                ((longlong)(int)((uVar3 & 3) - uVar7) + (longlong)(int)((uVar4 & 3) - uVar8) * 4) *
                4);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -9) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




