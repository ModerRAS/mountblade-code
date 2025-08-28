#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part636.c - 23 个函数

// 函数: void FUN_1806224e0(void)
void FUN_1806224e0(void)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong in_R9;
  
  *(longlong *)(unaff_RBX + 8) = in_R9 + unaff_RSI * 0x18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622500(longlong *param_1,ulonglong param_2)
void FUN_180622500(longlong *param_1,ulonglong param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  puVar7 = (int32_t *)param_1[1];
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar7 >> 5)) {
    if (param_2 != 0) {
      puVar5 = puVar7 + 6;
      uVar9 = param_2;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 8;
        *(uint64_t *)(puVar5 + -5) = 0;
        *(uint64_t *)(puVar5 + -3) = 0;
        *(uint64_t *)(puVar5 + -1) = 0;
        puVar5[1] = 0;
        puVar5 = puVar5 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      puVar7 = (int32_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar7 + param_2 * 8);
    return;
  }
  puVar5 = (int32_t *)*param_1;
  lVar2 = (longlong)puVar7 - (longlong)puVar5 >> 5;
  uVar9 = lVar2 * 2;
  if (lVar2 == 0) {
    uVar9 = 1;
  }
  if (uVar9 < lVar2 + param_2) {
    uVar9 = lVar2 + param_2;
  }
  puVar3 = (int32_t *)0x0;
  if (uVar9 != 0) {
    puVar3 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,uVar9 << 5,(char)param_1[3]);
    puVar7 = (int32_t *)param_1[1];
    puVar5 = (int32_t *)*param_1;
  }
  puVar4 = puVar3;
  if (puVar5 != puVar7) {
    puVar10 = puVar3 + 5;
    do {
      puVar1 = puVar10 + 8;
      *puVar4 = *(int32_t *)((longlong)puVar5 + (-0x14 - (longlong)puVar3) + (longlong)puVar10);
      puVar4 = puVar4 + 8;
      puVar10[-4] = *(int32_t *)
                     ((longlong)puVar5 + (-0x30 - (longlong)puVar3) + (longlong)puVar1);
      puVar10[-3] = *(int32_t *)
                     ((longlong)puVar5 + (-0x2c - (longlong)puVar3) + (longlong)puVar1);
      *(int16_t *)(puVar10 + -2) =
           *(int16_t *)((longlong)puVar5 + (-0x28 - (longlong)puVar3) + (longlong)puVar1);
      *(int16_t *)((longlong)puVar10 + -6) =
           *(int16_t *)((longlong)puVar5 + (-0x26 - (longlong)puVar3) + (longlong)puVar1);
      puVar10[-1] = *(int32_t *)
                     ((longlong)puVar5 + (-0x24 - (longlong)puVar3) + (longlong)puVar1);
      *puVar10 = *(int32_t *)((longlong)puVar5 + (-0x20 - (longlong)puVar3) + (longlong)puVar1);
      puVar10[1] = *(int32_t *)((longlong)puVar5 + (-0x1c - (longlong)puVar3) + (longlong)puVar1)
      ;
      puVar10[2] = *(int32_t *)((longlong)puVar5 + (-0x18 - (longlong)puVar3) + (longlong)puVar1)
      ;
      puVar6 = (int32_t *)((longlong)puVar10 + (longlong)puVar5 + (0xc - (longlong)puVar3));
      puVar10 = puVar1;
    } while (puVar6 != puVar7);
  }
  if (param_2 != 0) {
    puVar7 = puVar4 + 6;
    uVar8 = param_2;
    do {
      *(uint64_t *)(puVar7 + -6) = 0;
      puVar7[-4] = 0;
      *(uint64_t *)(puVar7 + -3) = 0;
      *(uint64_t *)(puVar7 + -1) = 0;
      puVar7[1] = 0;
      puVar7 = puVar7 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (*param_1 == 0) {
    *param_1 = (longlong)puVar3;
    param_1[2] = (longlong)(puVar3 + uVar9 * 8);
    param_1[1] = (longlong)(puVar4 + param_2 * 8);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622536(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_180622536(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  int32_t *puVar1;
  longlong in_RAX;
  longlong lVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = in_RAX >> 5;
  uVar6 = lVar2 * 2;
  if (lVar2 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < (ulonglong)(lVar2 + unaff_RDI)) {
    uVar6 = lVar2 + unaff_RDI;
  }
  puVar3 = (int32_t *)0x0;
  if (uVar6 != 0) {
    puVar3 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,uVar6 << 5,*(int8_t *)(param_1 + 0x18));
    param_2 = unaff_RSI[1];
    param_4 = *unaff_RSI;
  }
  puVar4 = puVar3;
  if (param_4 != param_2) {
    param_4 = param_4 - (longlong)puVar3;
    puVar5 = puVar3 + 5;
    do {
      puVar1 = puVar5 + 8;
      *puVar4 = *(int32_t *)(param_4 + -0x14 + (longlong)puVar5);
      puVar4 = puVar4 + 8;
      puVar5[-4] = *(int32_t *)(param_4 + -0x30 + (longlong)puVar1);
      puVar5[-3] = *(int32_t *)(param_4 + -0x2c + (longlong)puVar1);
      *(int16_t *)(puVar5 + -2) = *(int16_t *)(param_4 + -0x28 + (longlong)puVar1);
      *(int16_t *)((longlong)puVar5 + -6) = *(int16_t *)(param_4 + -0x26 + (longlong)puVar1);
      puVar5[-1] = *(int32_t *)(param_4 + -0x24 + (longlong)puVar1);
      *puVar5 = *(int32_t *)(param_4 + -0x20 + (longlong)puVar1);
      puVar5[1] = *(int32_t *)(param_4 + -0x1c + (longlong)puVar1);
      puVar5[2] = *(int32_t *)(param_4 + -0x18 + (longlong)puVar1);
      lVar2 = (longlong)puVar5 + param_4 + 0xc;
      puVar5 = puVar1;
    } while (lVar2 != param_2);
  }
  if (unaff_RDI != 0) {
    puVar5 = puVar4 + 6;
    lVar2 = unaff_RDI;
    do {
      *(uint64_t *)(puVar5 + -6) = 0;
      puVar5[-4] = 0;
      *(uint64_t *)(puVar5 + -3) = 0;
      *(uint64_t *)(puVar5 + -1) = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = (longlong)puVar3;
    unaff_RSI[2] = (longlong)(puVar3 + uVar6 * 8);
    unaff_RSI[1] = (longlong)(puVar4 + unaff_RDI * 8);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18062267c(uint64_t param_1,int32_t *param_2)
void FUN_18062267c(uint64_t param_1,int32_t *param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
    puVar1 = param_2 + 6;
    lVar2 = unaff_RDI;
    do {
      *param_2 = 0;
      param_2 = param_2 + 8;
      *(uint64_t *)(puVar1 + -5) = 0;
      *(uint64_t *)(puVar1 + -3) = 0;
      *(uint64_t *)(puVar1 + -1) = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    param_2 = *(int32_t **)(unaff_RSI + 8);
  }
  *(int32_t **)(unaff_RSI + 8) = param_2 + unaff_RDI * 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806226d0(longlong *param_1,ulonglong param_2)
void FUN_1806226d0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar7) / 0x70)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar7,0,param_2 * 0x70);
    }
    param_1[1] = lVar7;
    return;
  }
  lVar6 = *param_1;
  lVar1 = (lVar7 - lVar6) / 0x70;
  uVar5 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < lVar1 + param_2) {
    uVar5 = lVar1 + param_2;
  }
  if (uVar5 == 0) {
    puVar2 = (int32_t *)0x0;
  }
  else {
    puVar2 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,uVar5 * 0x70,(char)param_1[3]);
    lVar7 = param_1[1];
    lVar6 = *param_1;
  }
  puVar4 = puVar2;
  if (lVar6 != lVar7) {
    puVar3 = puVar2 + 0xc;
    lVar6 = lVar6 - (longlong)puVar2;
    do {
      *puVar4 = *(int32_t *)((longlong)puVar3 + lVar6 + -0x30);
      puVar4 = puVar4 + 0x1c;
      puVar3[-0xb] = *(int32_t *)(lVar6 + -0x2c + (longlong)puVar3);
      puVar3[-10] = *(int32_t *)((longlong)puVar3 + lVar6 + -0x28);
      puVar3[-9] = *(int32_t *)((longlong)puVar3 + lVar6 + -0x24);
      puVar3[-8] = *(int32_t *)((longlong)puVar3 + lVar6 + -0x20);
      puVar3[-7] = *(int32_t *)(lVar6 + -0x1c + (longlong)puVar3);
      puVar3[-6] = *(int32_t *)(lVar6 + -0x18 + (longlong)puVar3);
      puVar3[-5] = *(int32_t *)((longlong)puVar3 + lVar6 + -0x14);
      puVar3[-4] = *(int32_t *)((longlong)puVar3 + lVar6 + -0x10);
      puVar3[-3] = *(int32_t *)(lVar6 + -0xc + (longlong)puVar3);
      puVar3[-2] = *(int32_t *)(lVar6 + -8 + (longlong)puVar3);
      puVar3[-1] = *(int32_t *)(lVar6 + -4 + (longlong)puVar3);
      *puVar3 = *(int32_t *)(lVar6 + (longlong)puVar3);
      puVar3[1] = *(int32_t *)(lVar6 + 4 + (longlong)puVar3);
      puVar3[2] = *(int32_t *)(lVar6 + 8 + (longlong)puVar3);
      puVar3[3] = *(int32_t *)(lVar6 + 0xc + (longlong)puVar3);
      puVar3[4] = *(int32_t *)(lVar6 + 0x10 + (longlong)puVar3);
      puVar3[5] = *(int32_t *)(lVar6 + 0x14 + (longlong)puVar3);
      puVar3[6] = *(int32_t *)(lVar6 + 0x18 + (longlong)puVar3);
      puVar3[7] = *(int32_t *)(lVar6 + 0x1c + (longlong)puVar3);
      puVar3[8] = *(int32_t *)(lVar6 + 0x20 + (longlong)puVar3);
      puVar3[9] = *(int32_t *)(lVar6 + 0x24 + (longlong)puVar3);
      puVar3[10] = *(int32_t *)(lVar6 + 0x28 + (longlong)puVar3);
      puVar3[0xb] = *(int32_t *)(lVar6 + 0x2c + (longlong)puVar3);
      puVar3[0xc] = *(int32_t *)(lVar6 + 0x30 + (longlong)puVar3);
      puVar3[0xd] = *(int32_t *)(lVar6 + 0x34 + (longlong)puVar3);
      puVar3[0xe] = *(int32_t *)(lVar6 + 0x38 + (longlong)puVar3);
      *(int16_t *)(puVar3 + 0xf) = *(int16_t *)(lVar6 + 0x3c + (longlong)puVar3);
      *(int16_t *)((longlong)puVar3 + 0x3e) = *(int16_t *)(lVar6 + 0x3e + (longlong)puVar3);
      puVar3 = puVar3 + 0x1c;
    } while (lVar6 + -0x30 + (longlong)puVar3 != lVar7);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(puVar4,0,param_2 * 0x70);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar5 * 0x1c);
  param_1[1] = (longlong)puVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622718(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_180622718(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  longlong in_RAX;
  int32_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  lVar3 = SUB168(SEXT816(in_RAX) * SEXT816(param_4 - param_3),8);
  lVar3 = (lVar3 >> 5) - (lVar3 >> 0x3f);
  uVar5 = lVar3 * 2;
  if (lVar3 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < (ulonglong)(lVar3 + unaff_RSI)) {
    uVar5 = lVar3 + unaff_RSI;
  }
  if (uVar5 == 0) {
    puVar1 = (int32_t *)0x0;
  }
  else {
    puVar1 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,uVar5 * 0x70,(char)unaff_RDI[3]);
    param_4 = unaff_RDI[1];
    param_3 = *unaff_RDI;
  }
  puVar4 = puVar1;
  if (param_3 != param_4) {
    puVar2 = puVar1 + 0xc;
    param_3 = param_3 - (longlong)puVar1;
    do {
      *puVar4 = *(int32_t *)((longlong)puVar2 + param_3 + -0x30);
      puVar4 = puVar4 + 0x1c;
      puVar2[-0xb] = *(int32_t *)(param_3 + -0x2c + (longlong)puVar2);
      puVar2[-10] = *(int32_t *)((longlong)puVar2 + param_3 + -0x28);
      puVar2[-9] = *(int32_t *)((longlong)puVar2 + param_3 + -0x24);
      puVar2[-8] = *(int32_t *)((longlong)puVar2 + param_3 + -0x20);
      puVar2[-7] = *(int32_t *)(param_3 + -0x1c + (longlong)puVar2);
      puVar2[-6] = *(int32_t *)(param_3 + -0x18 + (longlong)puVar2);
      puVar2[-5] = *(int32_t *)((longlong)puVar2 + param_3 + -0x14);
      puVar2[-4] = *(int32_t *)((longlong)puVar2 + param_3 + -0x10);
      puVar2[-3] = *(int32_t *)(param_3 + -0xc + (longlong)puVar2);
      puVar2[-2] = *(int32_t *)(param_3 + -8 + (longlong)puVar2);
      puVar2[-1] = *(int32_t *)(param_3 + -4 + (longlong)puVar2);
      *puVar2 = *(int32_t *)(param_3 + (longlong)puVar2);
      puVar2[1] = *(int32_t *)(param_3 + 4 + (longlong)puVar2);
      puVar2[2] = *(int32_t *)(param_3 + 8 + (longlong)puVar2);
      puVar2[3] = *(int32_t *)(param_3 + 0xc + (longlong)puVar2);
      puVar2[4] = *(int32_t *)(param_3 + 0x10 + (longlong)puVar2);
      puVar2[5] = *(int32_t *)(param_3 + 0x14 + (longlong)puVar2);
      puVar2[6] = *(int32_t *)(param_3 + 0x18 + (longlong)puVar2);
      puVar2[7] = *(int32_t *)(param_3 + 0x1c + (longlong)puVar2);
      puVar2[8] = *(int32_t *)(param_3 + 0x20 + (longlong)puVar2);
      puVar2[9] = *(int32_t *)(param_3 + 0x24 + (longlong)puVar2);
      puVar2[10] = *(int32_t *)(param_3 + 0x28 + (longlong)puVar2);
      puVar2[0xb] = *(int32_t *)(param_3 + 0x2c + (longlong)puVar2);
      puVar2[0xc] = *(int32_t *)(param_3 + 0x30 + (longlong)puVar2);
      puVar2[0xd] = *(int32_t *)(param_3 + 0x34 + (longlong)puVar2);
      puVar2[0xe] = *(int32_t *)(param_3 + 0x38 + (longlong)puVar2);
      *(int16_t *)(puVar2 + 0xf) = *(int16_t *)(param_3 + 0x3c + (longlong)puVar2);
      *(int16_t *)((longlong)puVar2 + 0x3e) = *(int16_t *)(param_3 + 0x3e + (longlong)puVar2);
      puVar2 = puVar2 + 0x1c;
    } while (param_3 + -0x30 + (longlong)puVar2 != param_4);
  }
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    memset(puVar4,0,unaff_RSI * 0x70);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = (longlong)puVar1;
  unaff_RDI[2] = (longlong)(puVar1 + uVar5 * 0x1c);
  unaff_RDI[1] = (longlong)puVar4;
  return;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1806228e4(void)
void FUN_1806228e4(void)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint64_t in_R9;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    memset(in_R9,0,unaff_RSI * 0x70);
  }
  *(uint64_t *)(unaff_RDI + 8) = in_R9;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622920(longlong *param_1,ulonglong param_2)
void FUN_180622920(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar2) / 0x30)) {
    param_1[1] = param_2 * 0x30 + lVar2;
    return;
  }
  lVar4 = *param_1;
  lVar1 = (lVar2 - lVar4) / 0x30;
  uVar3 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  if (uVar3 < lVar1 + param_2) {
    uVar3 = lVar1 + param_2;
  }
  if (uVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar3 * 0x30,(char)param_1[3]);
    lVar4 = *param_1;
    lVar2 = param_1[1];
  }
  if (lVar4 == lVar2) {
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar1;
    param_1[2] = uVar3 * 0x30 + lVar1;
    param_1[1] = param_2 * 0x30 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar1,lVar4,lVar2 - lVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18062296b(void)
void FUN_18062296b(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong in_R9;
  
  lVar1 = SUB168(SEXT816(in_RAX) * SEXT816(unaff_RBP - in_R9),8);
  lVar1 = (lVar1 >> 3) - (lVar1 >> 0x3f);
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (ulonglong)(lVar1 + unaff_RSI)) {
    uVar2 = lVar1 + unaff_RSI;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar2 * 0x30,(char)unaff_RBX[3]);
    in_R9 = *unaff_RBX;
    unaff_RBP = unaff_RBX[1];
  }
  if (in_R9 == unaff_RBP) {
    if (in_R9 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RBX = lVar1;
    unaff_RBX[2] = uVar2 * 0x30 + lVar1;
    unaff_RBX[1] = unaff_RSI * 0x30 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar1,in_R9,unaff_RBP - in_R9);
}





// 函数: void FUN_180622a55(longlong param_1)
void FUN_180622a55(longlong param_1)

{
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(longlong *)(param_1 + 8) = unaff_RSI * 0x30 + unaff_RBP;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622a80(longlong *param_1,ulonglong param_2)
void FUN_180622a80(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  
  puVar5 = (uint64_t *)param_1[1];
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar5 >> 5)) {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        *(uint64_t *)((longlong)puVar5 + 0xc) = 0;
        *(uint64_t *)((longlong)puVar5 + 0x14) = 0;
        *(int32_t *)((longlong)puVar5 + 0x1c) = 0;
        *puVar5 = 0;
        *(int32_t *)(puVar5 + 1) = 0;
        puVar5 = puVar5 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar5 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar5 + param_2 * 4);
    return;
  }
  puVar4 = (uint64_t *)*param_1;
  lVar1 = (longlong)puVar5 - (longlong)puVar4 >> 5;
  uVar6 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar1 + param_2) {
    uVar6 = lVar1 + param_2;
  }
  lVar1 = 0;
  if (uVar6 != 0) {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 5,(char)param_1[3]);
    puVar4 = (uint64_t *)*param_1;
    puVar5 = (uint64_t *)param_1[1];
  }
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,puVar4,(longlong)puVar5 - (longlong)puVar4);
  }
  if (param_2 != 0) {
    lVar2 = lVar1 + 10;
    uVar3 = param_2;
    do {
      *(uint64_t *)(lVar2 + 2) = 0;
      *(uint64_t *)(lVar2 + 10) = 0;
      *(int32_t *)(lVar2 + 0x12) = 0;
      *(uint64_t *)(lVar2 + -10) = 0;
      *(int32_t *)(lVar2 + -2) = 0;
      lVar2 = lVar2 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*param_1 == 0) {
    *param_1 = lVar1;
    param_1[2] = uVar6 * 0x20 + lVar1;
    param_1[1] = param_2 * 0x20 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622ab4(longlong param_1,longlong param_2)
void FUN_180622ab4(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong unaff_RSI;
  longlong *unaff_R14;
  
  lVar1 = in_RAX >> 5;
  uVar4 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(lVar1 + unaff_RSI)) {
    uVar4 = lVar1 + unaff_RSI;
  }
  lVar1 = 0;
  if (uVar4 != 0) {
    lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar4 << 5,*(int8_t *)(param_1 + 0x18));
    param_2 = *unaff_R14;
    unaff_RBX = unaff_R14[1];
  }
  if (param_2 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RBX - param_2);
  }
  if (unaff_RSI != 0) {
    lVar2 = lVar1 + 10;
    lVar3 = unaff_RSI;
    do {
      *(uint64_t *)(lVar2 + 2) = 0;
      *(uint64_t *)(lVar2 + 10) = 0;
      *(int32_t *)(lVar2 + 0x12) = 0;
      *(uint64_t *)(lVar2 + -10) = 0;
      *(int32_t *)(lVar2 + -2) = 0;
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*unaff_R14 == 0) {
    *unaff_R14 = lVar1;
    unaff_R14[2] = uVar4 * 0x20 + lVar1;
    unaff_R14[1] = unaff_RSI * 0x20 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180622b9a(longlong param_1)
void FUN_180622b9a(longlong param_1)

{
  longlong lVar1;
  uint64_t *unaff_RBX;
  longlong unaff_RSI;
  
  lVar1 = unaff_RSI;
  if (unaff_RSI != 0) {
    do {
      *(uint64_t *)((longlong)unaff_RBX + 0xc) = 0;
      *(uint64_t *)((longlong)unaff_RBX + 0x14) = 0;
      *(int32_t *)((longlong)unaff_RBX + 0x1c) = 0;
      *unaff_RBX = 0;
      *(int32_t *)(unaff_RBX + 1) = 0;
      unaff_RBX = unaff_RBX + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(uint64_t **)(param_1 + 8);
  }
  *(uint64_t **)(param_1 + 8) = unaff_RBX + unaff_RSI * 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180622bf0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             char *param_5)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint64_t uVar6;
  
  plVar2 = (longlong *)*param_1;
  if ((param_4 == plVar2) || (param_4 == param_1)) {
    if (param_1[4] != 0) {
      param_4 = plVar2;
      if ((*(char *)(plVar2 + 4) < *param_5) ||
         ((*(char *)(plVar2 + 4) <= *param_5 && (*(char *)((longlong)plVar2 + 0x21) < param_5[1]))))
      goto LAB_180622c83;
    }
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(param_4);
    cVar5 = *param_5;
    if ((((char)param_4[4] < cVar5) ||
        (((char)param_4[4] <= cVar5 && (*(char *)((longlong)param_4 + 0x21) < param_5[1])))) &&
       ((cVar5 < (char)plVar2[4] ||
        ((cVar5 <= (char)plVar2[4] && (param_5[1] < *(char *)((longlong)plVar2 + 0x21))))))) {
      if (*param_4 == 0) {
LAB_180622c83:
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
        param_4 = plVar2;
      }
      if (param_4 != (longlong *)0x0) {
        FUN_180622db0(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar2 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
    do {
      plVar2 = plVar3;
      if ((*param_5 < (char)plVar2[4]) ||
         ((*param_5 <= (char)plVar2[4] && (param_5[1] < *(char *)((longlong)plVar2 + 0x21))))) {
        plVar3 = (longlong *)plVar2[1];
        bVar1 = true;
      }
      else {
        plVar3 = (longlong *)*plVar2;
        bVar1 = false;
      }
    } while (plVar3 != (longlong *)0x0);
  }
  plVar3 = plVar2;
  if (bVar1) {
    if (plVar2 == (longlong *)param_1[1]) {
      cVar5 = *param_5;
      goto FUN_180622d1c;
    }
    plVar3 = (longlong *)func_0x00018066b9a0(plVar2);
  }
  cVar5 = *param_5;
  if ((cVar5 <= (char)plVar3[4]) &&
     ((cVar5 < (char)plVar3[4] || (param_5[1] <= *(char *)((longlong)plVar3 + 0x21))))) {
    *param_2 = plVar3;
    return param_2;
  }
FUN_180622d1c:
  if (((plVar2 == param_1) || (cVar5 < (char)plVar2[4])) ||
     ((cVar5 <= (char)plVar2[4] && (param_5[1] < *(char *)((longlong)plVar2 + 0x21))))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar4 = FUN_18062b420(system_memory_pool_ptr,0x30,(char)param_1[5]);
  *(int16_t *)(lVar4 + 0x20) = *(int16_t *)param_5;
  *(uint64_t *)(lVar4 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar2,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622d1c(void)
void FUN_180622d1c(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  int16_t *unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RSI + 0x28));
  *(int16_t *)(lVar1 + 0x20) = *unaff_RDI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622d43(void)
void FUN_180622d43(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  int16_t *unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RSI + 0x28));
  *(int16_t *)(lVar1 + 0x20) = *unaff_RDI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622d48(void)
void FUN_180622d48(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  int16_t *unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RSI + 0x28));
  *(int16_t *)(lVar1 + 0x20) = *unaff_RDI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}





// 函数: void FUN_180622d8d(void)
void FUN_180622d8d(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_R15;
  
  *unaff_R15 = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180622db0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,char *param_5)
void FUN_180622db0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,char *param_5)

{
  longlong lVar1;
  uint64_t uVar2;
  
  if ((param_4 == '\0') && (param_3 != param_1)) {
    if ((*(char *)(param_3 + 0x20) <= *param_5) &&
       ((*(char *)(param_3 + 0x20) < *param_5 || (*(char *)(param_3 + 0x21) <= param_5[1])))) {
      uVar2 = 1;
      goto LAB_180622e06;
    }
  }
  uVar2 = 0;
LAB_180622e06:
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 0x28));
  *(int16_t *)(lVar1 + 0x20) = *(int16_t *)param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}





// 函数: void FUN_180622e70(char *param_1,char *param_2,longlong *param_3)
void FUN_180622e70(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != param_2) {
    for (pcVar5 = param_1 + 1; pcVar5 != param_2; pcVar5 = pcVar5 + 1) {
      cVar1 = *pcVar5;
      pcVar4 = pcVar5;
      pcVar6 = pcVar5;
      while (pcVar6 != param_1) {
        pcVar6 = pcVar6 + -1;
        iVar8 = 0;
        cVar2 = cVar1;
        while ((lVar3 = (longlong)cVar2 * 0x1b0 + *(longlong *)(*param_3 + 0x140), lVar3 != 0 &&
               (cVar2 = *(char *)(lVar3 + 0xf0), cVar2 != -1))) {
          iVar8 = iVar8 + 1;
        }
        iVar7 = 0;
        cVar2 = *pcVar6;
        while ((lVar3 = (longlong)cVar2 * 0x1b0 + *(longlong *)(*param_3 + 0x140), lVar3 != 0 &&
               (cVar2 = *(char *)(lVar3 + 0xf0), cVar2 != -1))) {
          iVar7 = iVar7 + 1;
        }
        if (iVar7 <= iVar8) break;
        *pcVar4 = *pcVar6;
        pcVar4 = pcVar4 + -1;
      }
      *pcVar4 = cVar1;
    }
  }
  return;
}





// 函数: void FUN_180622e80(char *param_1,char *param_2,longlong *param_3)
void FUN_180622e80(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  pcVar5 = param_1 + 1;
  do {
    if (pcVar5 == param_2) {
      return;
    }
    cVar1 = *pcVar5;
    pcVar4 = pcVar5;
    pcVar6 = pcVar5;
    while (pcVar6 != param_1) {
      pcVar6 = pcVar6 + -1;
      iVar8 = 0;
      cVar2 = cVar1;
      while ((lVar3 = (longlong)cVar2 * 0x1b0 + *(longlong *)(*param_3 + 0x140), lVar3 != 0 &&
             (cVar2 = *(char *)(lVar3 + 0xf0), cVar2 != -1))) {
        iVar8 = iVar8 + 1;
      }
      iVar7 = 0;
      cVar2 = *pcVar6;
      while ((lVar3 = (longlong)cVar2 * 0x1b0 + *(longlong *)(*param_3 + 0x140), lVar3 != 0 &&
             (cVar2 = *(char *)(lVar3 + 0xf0), cVar2 != -1))) {
        iVar7 = iVar7 + 1;
      }
      if (iVar7 <= iVar8) break;
      *pcVar4 = *pcVar6;
      pcVar4 = pcVar4 + -1;
    }
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
  } while( true );
}





// 函数: void FUN_180622e98(uint64_t param_1,uint64_t param_2,longlong *param_3)
void FUN_180622e98(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  char *unaff_RBP;
  char *unaff_RSI;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *unaff_R12;
  
  do {
    cVar1 = *unaff_RSI;
    pcVar5 = unaff_RSI;
    pcVar4 = unaff_RSI;
    while (pcVar5 != unaff_RBP) {
      pcVar5 = pcVar5 + -1;
      iVar7 = 0;
      cVar2 = cVar1;
      while ((lVar3 = (longlong)cVar2 * 0x1b0 + *(longlong *)(*param_3 + 0x140), lVar3 != 0 &&
             (cVar2 = *(char *)(lVar3 + 0xf0), cVar2 != -1))) {
        iVar7 = iVar7 + 1;
      }
      iVar6 = 0;
      cVar2 = *pcVar5;
      while ((lVar3 = (longlong)cVar2 * 0x1b0 + *(longlong *)(*param_3 + 0x140), lVar3 != 0 &&
             (cVar2 = *(char *)(lVar3 + 0xf0), cVar2 != -1))) {
        iVar6 = iVar6 + 1;
      }
      if (iVar6 <= iVar7) break;
      *pcVar4 = *pcVar5;
      pcVar4 = pcVar4 + -1;
    }
    unaff_RSI = unaff_RSI + 1;
    *pcVar4 = cVar1;
    if (unaff_RSI == unaff_R12) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180622f79(void)
void FUN_180622f79(void)

{
  return;
}





// 函数: void FUN_180622f85(void)
void FUN_180622f85(void)

{
  return;
}





