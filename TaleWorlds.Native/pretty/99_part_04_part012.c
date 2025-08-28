#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part012.c - 10 个函数

// 函数: void FUN_180261c20(longlong *param_1,ulonglong param_2)
void FUN_180261c20(longlong *param_1,ulonglong param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint64_t *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  puVar5 = (uint64_t *)param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - (longlong)puVar5) / 0x30)) {
    uVar11 = param_2;
    if (param_2 != 0) {
      do {
        *(uint64_t *)((longlong)puVar5 + 0x1c) = 0;
        *(uint64_t *)((longlong)puVar5 + 0x24) = 0;
        *(int32_t *)((longlong)puVar5 + 0x2c) = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(int32_t *)(puVar5 + 3) = 6;
        puVar5 = puVar5 + 6;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      puVar5 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar5 + param_2 * 6);
    return;
  }
  puVar9 = (uint64_t *)*param_1;
  lVar10 = ((longlong)puVar5 - (longlong)puVar9) / 0x30;
  uVar11 = lVar10 * 2;
  if (lVar10 == 0) {
    uVar11 = 1;
  }
  if (uVar11 < lVar10 + param_2) {
    uVar11 = lVar10 + param_2;
  }
  puVar4 = (uint64_t *)0x0;
  if (uVar11 != 0) {
    puVar4 = (uint64_t *)
             FUN_18062b420(system_memory_pool_ptr,uVar11 * 0x30,(char)param_1[3],puVar5,0xfffffffffffffffe);
    puVar5 = (uint64_t *)param_1[1];
    puVar9 = (uint64_t *)*param_1;
  }
  puVar6 = puVar4;
  if (puVar9 != puVar5) {
    lVar10 = (longlong)puVar4 - (longlong)puVar9;
    puVar9 = puVar9 + 3;
    do {
      *puVar6 = 0;
      *(uint64_t *)(lVar10 + -0x10 + (longlong)puVar9) = 0;
      *(uint64_t *)(lVar10 + -8 + (longlong)puVar9) = 0;
      *(int32_t *)(lVar10 + (longlong)puVar9) = *(int32_t *)puVar9;
      uVar3 = *puVar6;
      *puVar6 = puVar9[-3];
      puVar9[-3] = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -0x10 + (longlong)puVar9);
      *(uint64_t *)(lVar10 + -0x10 + (longlong)puVar9) = puVar9[-2];
      puVar9[-2] = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -8 + (longlong)puVar9);
      *(uint64_t *)(lVar10 + -8 + (longlong)puVar9) = puVar9[-1];
      puVar9[-1] = uVar3;
      uVar2 = *(int32_t *)(lVar10 + (longlong)puVar9);
      *(int32_t *)(lVar10 + (longlong)puVar9) = *(int32_t *)puVar9;
      *(int32_t *)puVar9 = uVar2;
      *(int32_t *)(lVar10 + 8 + (longlong)puVar9) = *(int32_t *)(puVar9 + 1);
      *(int32_t *)(lVar10 + 0xc + (longlong)puVar9) = *(int32_t *)((longlong)puVar9 + 0xc);
      *(int32_t *)(lVar10 + 0x10 + (longlong)puVar9) = *(int32_t *)(puVar9 + 2);
      puVar6 = puVar6 + 6;
      puVar1 = puVar9 + 3;
      puVar9 = puVar9 + 6;
    } while (puVar1 != puVar5);
  }
  puVar5 = puVar6;
  uVar7 = param_2;
  if (param_2 != 0) {
    do {
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(int32_t *)(puVar5 + 3) = 6;
      puVar5 = puVar5 + 6;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar10 = param_1[1];
  lVar8 = *param_1;
  if (lVar8 != lVar10) {
    do {
      FUN_18005d580(lVar8);
      lVar8 = lVar8 + 0x30;
    } while (lVar8 != lVar10);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)(puVar6 + param_2 * 6);
    param_1[2] = (longlong)(puVar4 + uVar11 * 6);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180261ea0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_180261ea0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = param_3 - param_2;
  lVar2 = lVar4 / 0x12 + (lVar4 >> 0x3f);
  uVar5 = (lVar2 >> 2) - (lVar2 >> 0x3f);
  lVar2 = *param_1;
  if ((ulonglong)((param_1[2] - lVar2) / 0x48) < uVar5) {
    lVar2 = 0;
    if (uVar5 != 0) {
      lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar5 * 0x48,(char)param_1[3]);
    }
    FUN_180262560(param_2,param_3,lVar2);
    lVar4 = param_1[1];
    lVar3 = *param_1;
    if (lVar3 != lVar4) {
      do {
        *(uint64_t *)(lVar3 + 0x28) = &system_data_buffer_ptr;
        if (*(longlong *)(lVar3 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar3 + 0x30) = 0;
        *(int32_t *)(lVar3 + 0x40) = 0;
        *(uint64_t *)(lVar3 + 0x28) = &system_state_ptr;
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != lVar4);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *param_1 = lVar2;
    lVar2 = lVar2 + uVar5 * 0x48;
    param_1[1] = lVar2;
    param_1[2] = lVar2;
  }
  else {
    uVar1 = (param_1[1] - lVar2) / 0x48;
    if (uVar1 < uVar5) {
      lVar3 = param_2 + uVar1 * 0x48;
      FUN_180262470(param_2,lVar3,lVar2,lVar4,0xfffffffffffffffe);
      lVar2 = FUN_180262560(lVar3,param_3,param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      lVar3 = FUN_180262470(param_2,param_3,lVar2,lVar4,0xfffffffffffffffe);
      lVar2 = param_1[1];
      for (lVar4 = lVar3; lVar4 != lVar2; lVar4 = lVar4 + 0x48) {
        *(uint64_t *)(lVar4 + 0x28) = &system_data_buffer_ptr;
        if (*(longlong *)(lVar4 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar4 + 0x30) = 0;
        *(int32_t *)(lVar4 + 0x40) = 0;
        *(uint64_t *)(lVar4 + 0x28) = &system_state_ptr;
      }
      param_1[1] = lVar3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802620c0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_1802620c0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_3 - param_2;
  uVar2 = lVar5 / 0x38;
  lVar3 = *param_1;
  if ((ulonglong)((param_1[2] - lVar3) / 0x38) < uVar2) {
    lVar3 = 0;
    if (uVar2 != 0) {
      lVar3 = FUN_18062b420(system_memory_pool_ptr,uVar2 * 0x38,(char)param_1[3]);
    }
    FUN_1802626f0(param_2,param_3,lVar3);
    lVar5 = param_1[1];
    lVar4 = *param_1;
    if (lVar4 != lVar5) {
      do {
        *(uint64_t *)(lVar4 + 0x18) = &system_data_buffer_ptr;
        if (*(longlong *)(lVar4 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar4 + 0x20) = 0;
        *(int32_t *)(lVar4 + 0x30) = 0;
        *(uint64_t *)(lVar4 + 0x18) = &system_state_ptr;
        lVar4 = lVar4 + 0x38;
      } while (lVar4 != lVar5);
      lVar4 = *param_1;
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *param_1 = lVar3;
    lVar3 = uVar2 * 0x38 + lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar3;
  }
  else {
    uVar1 = (param_1[1] - lVar3) / 0x38;
    if (uVar1 < uVar2) {
      lVar4 = uVar1 * 0x38 + param_2;
      FUN_180262600(param_2,lVar4,lVar3,lVar5,0xfffffffffffffffe);
      lVar3 = FUN_1802626f0(lVar4,param_3,param_1[1]);
      param_1[1] = lVar3;
    }
    else {
      lVar4 = FUN_180262600(param_2,param_3,lVar3,lVar5,0xfffffffffffffffe);
      lVar3 = param_1[1];
      for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x38) {
        *(uint64_t *)(lVar5 + 0x18) = &system_data_buffer_ptr;
        if (*(longlong *)(lVar5 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar5 + 0x20) = 0;
        *(int32_t *)(lVar5 + 0x30) = 0;
        *(uint64_t *)(lVar5 + 0x18) = &system_state_ptr;
      }
      param_1[1] = lVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802622c0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_1802622c0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_3 - param_2;
  lVar2 = lVar5 / 6 + (lVar5 >> 0x3f);
  uVar4 = (lVar2 >> 3) - (lVar2 >> 0x3f);
  lVar2 = *param_1;
  if ((ulonglong)((param_1[2] - lVar2) / 0x30) < uVar4) {
    if (uVar4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar4 * 0x30,(char)param_1[3]);
    }
    FUN_180262830(param_2,param_3,lVar2);
    lVar5 = param_1[1];
    lVar3 = *param_1;
    if (lVar3 != lVar5) {
      do {
        FUN_18005d580(lVar3);
        lVar3 = lVar3 + 0x30;
      } while (lVar3 != lVar5);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *param_1 = lVar2;
    lVar2 = uVar4 * 0x30 + lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2;
  }
  else {
    uVar1 = (param_1[1] - lVar2) / 0x30;
    if (uVar1 < uVar4) {
      lVar3 = uVar1 * 0x30 + param_2;
      FUN_180262790(param_2,lVar3,lVar2,lVar5,0xfffffffffffffffe);
      lVar2 = FUN_180262830(lVar3,param_3,param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      lVar3 = FUN_180262790(param_2,param_3,lVar2,lVar5,0xfffffffffffffffe);
      lVar2 = param_1[1];
      for (lVar5 = lVar3; lVar5 != lVar2; lVar5 = lVar5 + 0x30) {
        FUN_18005d580(lVar5);
      }
      param_1[1] = lVar3;
    }
  }
  return;
}



int32_t * FUN_180262470(longlong param_1,longlong param_2,int32_t *param_3)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  lVar8 = (param_2 - param_1) / 0x12 + (param_2 - param_1 >> 0x3f);
  lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  if (0 < lVar8) {
    param_1 = param_1 - (longlong)param_3;
    plVar9 = (longlong *)(param_3 + 0xc);
    do {
      *param_3 = *(int32_t *)(param_1 + -0x30 + (longlong)plVar9);
      puVar1 = (uint64_t *)(param_1 + -0x2c + (longlong)plVar9);
      uVar7 = puVar1[1];
      *(uint64_t *)((longlong)plVar9 + -0x2c) = *puVar1;
      *(uint64_t *)((longlong)plVar9 + -0x24) = uVar7;
      puVar2 = (int32_t *)(param_1 + -0x1c + (longlong)plVar9);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *(int32_t *)((longlong)plVar9 + -0x1c) = *puVar2;
      *(int32_t *)(plVar9 + -3) = uVar4;
      *(int32_t *)((longlong)plVar9 + -0x14) = uVar5;
      *(int32_t *)(plVar9 + -2) = uVar6;
      *(int32_t *)((longlong)plVar9 + -0xc) = *(int32_t *)(param_1 + -0xc + (longlong)plVar9);
      uVar3 = *(uint *)(param_1 + 8 + (longlong)plVar9);
      uVar10 = (ulonglong)uVar3;
      if (*(longlong *)(param_1 + (longlong)plVar9) != 0) {
        FUN_1806277c0(plVar9 + -1,uVar10);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*plVar9,*(uint64_t *)(param_1 + (longlong)plVar9),uVar10);
      }
      *(int32_t *)(plVar9 + 1) = 0;
      if (*plVar9 != 0) {
        *(int8_t *)(uVar10 + *plVar9) = 0;
      }
      lVar8 = lVar8 + -1;
      *(int32_t *)((longlong)plVar9 + 0x14) = *(int32_t *)(param_1 + 0x14 + (longlong)plVar9);
      param_3 = param_3 + 0x12;
      plVar9 = plVar9 + 9;
    } while (0 < lVar8);
  }
  return param_3;
}



int32_t * FUN_1802624b0(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  longlong *plVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar9;
  ulonglong uVar10;
  int32_t *unaff_R14;
  
  lVar9 = unaff_RSI - param_3;
  plVar8 = (longlong *)(param_3 + 0x30);
  do {
    *unaff_R14 = *(int32_t *)(lVar9 + -0x30 + (longlong)plVar8);
    puVar1 = (uint64_t *)(lVar9 + -0x2c + (longlong)plVar8);
    uVar7 = puVar1[1];
    *(uint64_t *)((longlong)plVar8 + -0x2c) = *puVar1;
    *(uint64_t *)((longlong)plVar8 + -0x24) = uVar7;
    puVar2 = (int32_t *)(lVar9 + -0x1c + (longlong)plVar8);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(int32_t *)((longlong)plVar8 + -0x1c) = *puVar2;
    *(int32_t *)(plVar8 + -3) = uVar4;
    *(int32_t *)((longlong)plVar8 + -0x14) = uVar5;
    *(int32_t *)(plVar8 + -2) = uVar6;
    *(int32_t *)((longlong)plVar8 + -0xc) = *(int32_t *)(lVar9 + -0xc + (longlong)plVar8);
    uVar3 = *(uint *)(lVar9 + 8 + (longlong)plVar8);
    uVar10 = (ulonglong)uVar3;
    if (*(longlong *)(lVar9 + (longlong)plVar8) != 0) {
      FUN_1806277c0(plVar8 + -1,uVar10);
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*plVar8,*(uint64_t *)(lVar9 + (longlong)plVar8),uVar10);
    }
    *(int32_t *)(plVar8 + 1) = 0;
    if (*plVar8 != 0) {
      *(int8_t *)(uVar10 + *plVar8) = 0;
    }
    unaff_RBP = unaff_RBP + -1;
    *(int32_t *)((longlong)plVar8 + 0x14) = *(int32_t *)(lVar9 + 0x14 + (longlong)plVar8);
    unaff_R14 = unaff_R14 + 0x12;
    plVar8 = plVar8 + 9;
  } while (0 < unaff_RBP);
  return unaff_R14;
}






// 函数: void FUN_180262549(void)
void FUN_180262549(void)

{
  return;
}



int32_t * FUN_180262560(int32_t *param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  longlong lVar7;
  int32_t *puVar8;
  
  if (param_1 != param_2) {
    lVar7 = (longlong)param_3 - (longlong)param_1;
    puVar8 = param_1 + 5;
    do {
      *param_3 = puVar8[-5];
      uVar6 = *(uint64_t *)(puVar8 + -2);
      puVar2 = (uint64_t *)(lVar7 + -0x10 + (longlong)puVar8);
      *puVar2 = *(uint64_t *)(puVar8 + -4);
      puVar2[1] = uVar6;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar1 = (int32_t *)(lVar7 + (longlong)puVar8);
      *puVar1 = *puVar8;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(int32_t *)(lVar7 + 0x10 + (longlong)puVar8) = puVar8[4];
      FUN_180627ae0(lVar7 + 0x14 + (longlong)puVar8,puVar8 + 5);
      param_3 = param_3 + 0x12;
      puVar1 = puVar8 + 0xd;
      puVar8 = puVar8 + 0x12;
    } while (puVar1 != param_2);
  }
  return param_3;
}



int32_t * FUN_180262600(longlong param_1,longlong param_2,int32_t *param_3)

{
  int32_t *puVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = (param_2 - param_1) / 0x38;
  if (0 < lVar7) {
    param_1 = param_1 - (longlong)param_3;
    plVar6 = (longlong *)(param_3 + 8);
    do {
      *param_3 = *(int32_t *)(param_1 + -0x20 + (longlong)plVar6);
      puVar1 = (int32_t *)(param_1 + -0x1c + (longlong)plVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(int32_t *)((longlong)plVar6 + -0x1c) = *puVar1;
      *(int32_t *)(plVar6 + -3) = uVar3;
      *(int32_t *)((longlong)plVar6 + -0x14) = uVar4;
      *(int32_t *)(plVar6 + -2) = uVar5;
      *(int32_t *)((longlong)plVar6 + -0xc) = *(int32_t *)(param_1 + -0xc + (longlong)plVar6);
      uVar2 = *(uint *)(param_1 + 8 + (longlong)plVar6);
      uVar8 = (ulonglong)uVar2;
      if (*(longlong *)(param_1 + (longlong)plVar6) != 0) {
        FUN_1806277c0(plVar6 + -1,uVar8);
      }
      if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*plVar6,*(uint64_t *)(param_1 + (longlong)plVar6),uVar8);
      }
      *(int32_t *)(plVar6 + 1) = 0;
      if (*plVar6 != 0) {
        *(int8_t *)(uVar8 + *plVar6) = 0;
      }
      lVar7 = lVar7 + -1;
      *(int32_t *)((longlong)plVar6 + 0x14) = *(int32_t *)(param_1 + 0x14 + (longlong)plVar6);
      param_3 = param_3 + 0xe;
      plVar6 = plVar6 + 7;
    } while (0 < lVar7);
  }
  return param_3;
}



int32_t * FUN_180262640(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int32_t *puVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong *plVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar7;
  ulonglong uVar8;
  int32_t *unaff_R14;
  
  lVar7 = unaff_RSI - param_3;
  plVar6 = (longlong *)(param_3 + 0x20);
  do {
    *unaff_R14 = *(int32_t *)(lVar7 + -0x20 + (longlong)plVar6);
    puVar1 = (int32_t *)(lVar7 + -0x1c + (longlong)plVar6);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *(int32_t *)((longlong)plVar6 + -0x1c) = *puVar1;
    *(int32_t *)(plVar6 + -3) = uVar3;
    *(int32_t *)((longlong)plVar6 + -0x14) = uVar4;
    *(int32_t *)(plVar6 + -2) = uVar5;
    *(int32_t *)((longlong)plVar6 + -0xc) = *(int32_t *)(lVar7 + -0xc + (longlong)plVar6);
    uVar2 = *(uint *)(lVar7 + 8 + (longlong)plVar6);
    uVar8 = (ulonglong)uVar2;
    if (*(longlong *)(lVar7 + (longlong)plVar6) != 0) {
      FUN_1806277c0(plVar6 + -1,uVar8);
    }
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*plVar6,*(uint64_t *)(lVar7 + (longlong)plVar6),uVar8);
    }
    *(int32_t *)(plVar6 + 1) = 0;
    if (*plVar6 != 0) {
      *(int8_t *)(uVar8 + *plVar6) = 0;
    }
    unaff_RBP = unaff_RBP + -1;
    *(int32_t *)((longlong)plVar6 + 0x14) = *(int32_t *)(lVar7 + 0x14 + (longlong)plVar6);
    unaff_R14 = unaff_R14 + 0xe;
    plVar6 = plVar6 + 7;
  } while (0 < unaff_RBP);
  return unaff_R14;
}






// 函数: void FUN_1802626d0(void)
void FUN_1802626d0(void)

{
  return;
}



int32_t * FUN_1802626f0(int32_t *param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  int32_t *puVar6;
  
  if (param_1 != param_2) {
    lVar5 = (longlong)param_3 - (longlong)param_1;
    puVar6 = param_1 + 5;
    do {
      *param_3 = puVar6[-5];
      uVar2 = puVar6[-3];
      uVar3 = puVar6[-2];
      uVar4 = puVar6[-1];
      puVar1 = (int32_t *)(lVar5 + -0x10 + (longlong)puVar6);
      *puVar1 = puVar6[-4];
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(int32_t *)(lVar5 + (longlong)puVar6) = *puVar6;
      FUN_180627ae0(lVar5 + 4 + (longlong)puVar6,puVar6 + 1);
      param_3 = param_3 + 0xe;
      puVar1 = puVar6 + 9;
      puVar6 = puVar6 + 0xe;
    } while (puVar1 != param_2);
  }
  return param_3;
}



uint64_t * FUN_180262790(longlong param_1,longlong param_2,uint64_t *param_3)

{
  longlong lVar1;
  int32_t *puVar2;
  
  lVar1 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  lVar1 = (lVar1 >> 3) - (lVar1 >> 0x3f);
  if (0 < lVar1) {
    puVar2 = (int32_t *)(param_1 + 0x20);
    param_1 = (longlong)param_3 - param_1;
    do {
      if (param_3 != (uint64_t *)(puVar2 + -8)) {
        FUN_1800588c0(param_3,*(uint64_t *)(puVar2 + -8),*(uint64_t *)(puVar2 + -6));
      }
      lVar1 = lVar1 + -1;
      *(int32_t *)((longlong)puVar2 + param_1) = *puVar2;
      param_3 = param_3 + 6;
      *(int32_t *)((longlong)puVar2 + param_1 + 4) = puVar2[1];
      *(int32_t *)((longlong)puVar2 + param_1 + 8) = puVar2[2];
      puVar2 = puVar2 + 0xc;
    } while (0 < lVar1);
  }
  return param_3;
}



uint64_t * FUN_1802627c3(longlong param_1,uint64_t param_2,longlong param_3)

{
  int32_t *puVar1;
  longlong unaff_RSI;
  uint64_t *unaff_RDI;
  
  puVar1 = (int32_t *)(param_1 + 0x20);
  param_3 = param_3 - param_1;
  do {
    if (unaff_RDI != (uint64_t *)(puVar1 + -8)) {
      FUN_1800588c0(unaff_RDI,*(uint64_t *)(puVar1 + -8),*(uint64_t *)(puVar1 + -6));
    }
    unaff_RSI = unaff_RSI + -1;
    *(int32_t *)((longlong)puVar1 + param_3) = *puVar1;
    unaff_RDI = unaff_RDI + 6;
    *(int32_t *)((longlong)puVar1 + param_3 + 4) = puVar1[1];
    *(int32_t *)((longlong)puVar1 + param_3 + 8) = puVar1[2];
    puVar1 = puVar1 + 0xc;
  } while (0 < unaff_RSI);
  return unaff_RDI;
}






// 函数: void FUN_18026281c(void)
void FUN_18026281c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180262830(longlong *param_1,longlong *param_2,longlong *param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    lVar7 = (longlong)param_3 - (longlong)param_1;
    plVar6 = param_1 + 1;
    do {
      lVar4 = *plVar6 - plVar6[-1] >> 5;
      uVar2 = *(uint *)(plVar6 + 2);
      *(uint *)(lVar7 + 0x10 + (longlong)plVar6) = uVar2;
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_18062b420(system_memory_pool_ptr,lVar4 << 5,uVar2 & 0xff,param_4,uVar8);
      }
      *param_3 = lVar3;
      *(longlong *)(lVar7 + (longlong)plVar6) = lVar3;
      *(longlong *)(lVar7 + 8 + (longlong)plVar6) = lVar4 * 0x20 + lVar3;
      lVar4 = *param_3;
      lVar3 = *plVar6;
      for (lVar5 = plVar6[-1]; lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
        FUN_180627ae0(lVar4,lVar5);
        lVar4 = lVar4 + 0x20;
      }
      *(longlong *)(lVar7 + (longlong)plVar6) = lVar4;
      *(int *)(lVar7 + 0x18 + (longlong)plVar6) = (int)plVar6[3];
      *(int32_t *)(lVar7 + 0x1c + (longlong)plVar6) = *(int32_t *)((longlong)plVar6 + 0x1c);
      *(int *)(lVar7 + 0x20 + (longlong)plVar6) = (int)plVar6[4];
      param_3 = param_3 + 6;
      plVar1 = plVar6 + 5;
      plVar6 = plVar6 + 6;
    } while (plVar1 != param_2);
  }
  return param_3;
}



uint64_t *
FUN_180262940(uint64_t *param_1,int32_t *param_2,int32_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar6 = param_2 + 0x16;
    do {
      puVar4 = (uint64_t *)*param_1;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(int32_t *)(puVar4 + 3) = puVar6[-0x10];
      uVar5 = *puVar4;
      *puVar4 = *(uint64_t *)(puVar6 + -0x16);
      *(uint64_t *)(puVar6 + -0x16) = uVar5;
      uVar5 = puVar4[1];
      puVar4[1] = *(uint64_t *)(puVar6 + -0x14);
      *(uint64_t *)(puVar6 + -0x14) = uVar5;
      uVar5 = puVar4[2];
      puVar4[2] = *(uint64_t *)(puVar6 + -0x12);
      *(uint64_t *)(puVar6 + -0x12) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 3);
      *(int32_t *)(puVar4 + 3) = puVar6[-0x10];
      puVar6[-0x10] = uVar3;
      puVar1 = puVar4 + 4;
      *puVar1 = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(int32_t *)(puVar4 + 7) = puVar6[-8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -0xe);
      *(uint64_t *)(puVar6 + -0xe) = uVar5;
      uVar5 = puVar4[5];
      puVar4[5] = *(uint64_t *)(puVar6 + -0xc);
      *(uint64_t *)(puVar6 + -0xc) = uVar5;
      uVar5 = puVar4[6];
      puVar4[6] = *(uint64_t *)(puVar6 + -10);
      *(uint64_t *)(puVar6 + -10) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 7);
      *(int32_t *)(puVar4 + 7) = puVar6[-8];
      puVar6[-8] = uVar3;
      puVar1 = puVar4 + 8;
      *puVar1 = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      *(int32_t *)(puVar4 + 0xb) = *puVar6;
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -6);
      *(uint64_t *)(puVar6 + -6) = uVar5;
      uVar5 = puVar4[9];
      puVar4[9] = *(uint64_t *)(puVar6 + -4);
      *(uint64_t *)(puVar6 + -4) = uVar5;
      uVar5 = puVar4[10];
      puVar4[10] = *(uint64_t *)(puVar6 + -2);
      *(uint64_t *)(puVar6 + -2) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 0xb);
      *(int32_t *)(puVar4 + 0xb) = *puVar6;
      *puVar6 = uVar3;
      *param_1 = puVar4 + 0xc;
      puVar2 = puVar6 + 2;
      puVar6 = puVar6 + 0x18;
    } while (puVar2 != param_3);
  }
  return param_1;
}






// 函数: void FUN_180262aa0(longlong *param_1)
void FUN_180262aa0(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 8) {
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_180262ac0(longlong param_1)
void FUN_180262ac0(longlong param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  FUN_18016ce50();
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  for (puVar2 = *(uint64_t **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 8) {
    *puVar2 = &system_data_buffer_ptr;
    if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar2[1] = 0;
    *(int32_t *)(puVar2 + 3) = 0;
    *puVar2 = &system_state_ptr;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_180262b00(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180262b00(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uStack_58;
  int16_t uStack_54;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 3;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  uStack_58 = 0x1010101;
  uStack_54 = 0x101;
  FUN_180263040(&uStack_58,param_1,param_2,param_4,0xfffffffffffffffe,&uStack_30);
  FUN_180262bc0(&uStack_58,param_3);
  FUN_18016ce50(&uStack_30);
  FUN_1802638b0(&uStack_50);
  return;
}






