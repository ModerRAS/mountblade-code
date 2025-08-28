#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part024.c - 30 个函数

// 函数: void FUN_180058210(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058210(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_180058210(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((longlong *)param_2[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0x17] + 0x38))();
    }
    param_2[4] = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}





// 函数: void FUN_1800582b0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800582b0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_1800582b0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_180058db0(param_2 + 8);
  param_2[4] = &unknown_var_3456_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_180058370(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058370(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180058370(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[4] = &unknown_var_3456_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_180058420(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058420(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180058420(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[4] = &unknown_var_3456_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800584e0(uint64_t *param_1,longlong param_2)
void FUN_1800584e0(uint64_t *param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t *puVar7;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar5 = ((longlong)puVar7 - (longlong)puVar4) / 0x28;
  puVar2 = (uint64_t *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_18005856a;
  }
  puVar2 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar5 * 0x28,*(int8_t *)(param_1 + 3),puVar4,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_18005856a:
  puVar3 = puVar2;
  if (puVar4 != puVar7) {
    lVar6 = (longlong)puVar2 - (longlong)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar3 = &unknown_var_720_ptr;
      *(uint64_t *)(lVar6 + (longlong)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (longlong)puVar4) = 0;
      *puVar3 = &unknown_var_3456_ptr;
      *(uint64_t *)(lVar6 + 0x10 + (longlong)puVar4) = 0;
      *(uint64_t *)(lVar6 + (longlong)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (longlong)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (longlong)puVar4) = *(int32_t *)(puVar4 + 1);
      *(uint64_t *)(lVar6 + (longlong)puVar4) = *puVar4;
      *(int32_t *)(lVar6 + 0x14 + (longlong)puVar4) = *(int32_t *)((longlong)puVar4 + 0x14);
      *(int32_t *)(lVar6 + 0x10 + (longlong)puVar4) = *(int32_t *)(puVar4 + 2);
      *(int32_t *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      puVar4[2] = 0;
      *(int32_t *)(lVar6 + 0x18 + (longlong)puVar4) = *(int32_t *)(puVar4 + 3);
      puVar3 = puVar3 + 5;
      puVar1 = puVar4 + 4;
      puVar4 = puVar4 + 5;
    } while (puVar1 != puVar7);
  }
  *puVar3 = &unknown_var_720_ptr;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *puVar3 = &unknown_var_3456_ptr;
  puVar3[3] = 0;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *(int32_t *)(puVar3 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar3[1] = *(uint64_t *)(param_2 + 8);
  *(int32_t *)((longlong)puVar3 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(puVar3 + 3) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(puVar3 + 4) = *(int32_t *)(param_2 + 0x20);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar7) {
    do {
      *puVar4 = &unknown_var_3456_ptr;
      if (puVar4[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 3) = 0;
      *puVar4 = &unknown_var_720_ptr;
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar7);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar3 + 5;
    param_1[2] = puVar2 + lVar5 * 5;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}





// 函数: void FUN_1800586e0(longlong param_1)
void FUN_1800586e0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  return;
}





// 函数: void FUN_180058710(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058710(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_180058710(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[4] = &unknown_var_3456_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_1800587d0(uint64_t param_1,uint64_t *param_2)
void FUN_1800587d0(uint64_t param_1,uint64_t *param_2)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_1800587d0(param_1,*param_2);
    FUN_18005cb60(param_2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}





// 函数: void FUN_1800587e2(uint64_t param_1)
void FUN_1800587e2(uint64_t param_1)

{
  uint64_t *unaff_RBX;
  
  FUN_1800587d0(param_1,*unaff_RBX);
  FUN_18005cb60();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180058826(void)
void FUN_180058826(void)

{
  return;
}





// 函数: void FUN_180058830(uint64_t param_1,longlong param_2)
void FUN_180058830(uint64_t param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_2 + 0x20) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_2 + 0x28) = 0;
  *(int32_t *)(param_2 + 0x38) = 0;
  *(uint64_t *)(param_2 + 0x20) = &unknown_var_720_ptr;
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800588c0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_1800588c0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = param_3 - param_2 >> 5;
  if ((ulonglong)(param_1[2] - *param_1 >> 5) < uVar6) {
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,uVar6 << 5,(char)param_1[3]);
    }
    if (param_2 != param_3) {
      lVar7 = lVar2 - param_2;
      do {
        FUN_180627ae0(lVar7 + param_2,param_2);
        param_2 = param_2 + 0x20;
      } while (param_2 != param_3);
    }
    puVar1 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
    if (puVar4 != puVar1) {
      do {
        (**(code **)*puVar4)(puVar4,0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar1);
      puVar4 = (uint64_t *)*param_1;
    }
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    *param_1 = lVar2;
    lVar2 = uVar6 * 0x20 + lVar2;
    param_1[2] = lVar2;
    param_1[1] = lVar2;
  }
  else {
    uVar5 = param_1[1] - *param_1 >> 5;
    if (uVar5 < uVar6) {
      lVar2 = uVar5 * 0x20 + param_2;
      FUN_180059250(param_2,lVar2);
      lVar2 = FUN_180059300(lVar2,param_3,param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      puVar3 = (uint64_t *)FUN_180059250(param_2,param_3);
      puVar1 = (uint64_t *)param_1[1];
      for (puVar4 = puVar3; puVar4 != puVar1; puVar4 = puVar4 + 4) {
        (**(code **)*puVar4)(puVar4,0);
      }
      param_1[1] = (longlong)puVar3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800588fc(longlong param_1)
void FUN_1800588fc(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  uint64_t *puVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong unaff_R15;
  
  if (unaff_RSI == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_RSI << 5,*(int8_t *)(param_1 + 0x18));
  }
  if (unaff_RBX != unaff_R15) {
    lVar4 = lVar2 - unaff_RBX;
    do {
      FUN_180627ae0(lVar4 + unaff_RBX,unaff_RBX);
      unaff_RBX = unaff_RBX + 0x20;
    } while (unaff_RBX != unaff_R15);
  }
  puVar1 = (uint64_t *)unaff_RDI[1];
  puVar3 = (uint64_t *)*unaff_RDI;
  if (puVar3 != puVar1) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
    puVar3 = (uint64_t *)*unaff_RDI;
  }
  if (puVar3 == (uint64_t *)0x0) {
    *unaff_RDI = lVar2;
    lVar2 = unaff_RSI * 0x20 + lVar2;
    unaff_RDI[2] = lVar2;
    unaff_RDI[1] = lVar2;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}





// 函数: void FUN_18005892b(void)
void FUN_18005892b(void)

{
  uint64_t *puVar1;
  longlong unaff_RBX;
  uint64_t *puVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R12;
  longlong lVar3;
  longlong unaff_R15;
  
  lVar3 = unaff_R12 - unaff_RBX;
  do {
    FUN_180627ae0(lVar3 + unaff_RBX,unaff_RBX);
    unaff_RBX = unaff_RBX + 0x20;
  } while (unaff_RBX != unaff_R15);
  puVar1 = (uint64_t *)unaff_RDI[1];
  puVar2 = (uint64_t *)*unaff_RDI;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    puVar2 = (uint64_t *)*unaff_RDI;
  }
  if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  *unaff_RDI = unaff_R12;
  lVar3 = unaff_RSI * 0x20 + unaff_R12;
  unaff_RDI[2] = lVar3;
  unaff_RDI[1] = lVar3;
  return;
}





// 函数: void FUN_18005895a(void)
void FUN_18005895a(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R12;
  
  puVar2 = (uint64_t *)unaff_RDI[1];
  puVar3 = (uint64_t *)*unaff_RDI;
  if (puVar3 != puVar2) {
    do {
      (**(code **)*puVar3)(puVar3,0);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2);
    puVar3 = (uint64_t *)*unaff_RDI;
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  *unaff_RDI = unaff_R12;
  lVar1 = unaff_RSI * 0x20 + unaff_R12;
  unaff_RDI[2] = lVar1;
  unaff_RDI[1] = lVar1;
  return;
}





// 函数: void FUN_1800589a3(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_1800589a3(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  longlong unaff_RBX;
  uint64_t *puVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  
  uVar5 = *(longlong *)(param_1 + 8) - param_3 >> 5;
  if (uVar5 < unaff_RSI) {
    FUN_180059250();
    uVar3 = FUN_180059300(uVar5 * 0x20 + unaff_RBX);
    *(uint64_t *)(unaff_RDI + 8) = uVar3;
  }
  else {
    puVar2 = (uint64_t *)FUN_180059250();
    puVar1 = *(uint64_t **)(unaff_RDI + 8);
    for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(puVar4,0);
    }
    *(uint64_t **)(unaff_RDI + 8) = puVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180058a20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180058a20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 == param_4) {
    return;
  }
  lVar2 = param_1[1];
  uVar5 = param_4 - param_3 >> 3;
  if ((ulonglong)(param_1[2] - lVar2 >> 3) < uVar5) {
    lVar3 = *param_1;
    lVar2 = lVar2 - lVar3 >> 3;
    uVar4 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= lVar2 + uVar5) {
      uVar4 = lVar2 + uVar5;
    }
    if (uVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)param_1[3]);
      lVar3 = *param_1;
    }
    if (lVar3 != param_2) {
                    // WARNING: Subroutine does not return
      memmove(uVar1,lVar3,param_2 - lVar3);
    }
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_3,param_4 - param_3);
  }
  uVar4 = lVar2 - param_2 >> 3;
  if (uVar5 < uVar4) {
    lVar3 = lVar2 + uVar5 * -8;
    if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar3,uVar5 * 8);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar2 - ((lVar2 + uVar5 * -8) - param_2 & 0xfffffffffffffff8),param_2);
  }
  lVar3 = param_3 + uVar4 * 8;
  if (lVar3 != param_4) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar3,param_4 - lVar3);
  }
  if (param_2 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar2 + (uVar5 - uVar4) * 8,param_2,lVar2 - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(param_2 + (uVar4 - (lVar3 - param_3 >> 3)) * 8,param_3,lVar3 - param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180058a31(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180058a31(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  uVar5 = param_4 - param_3 >> 3;
  if ((ulonglong)(param_1[2] - lVar2 >> 3) < uVar5) {
    lVar3 = *param_1;
    lVar2 = lVar2 - lVar3 >> 3;
    uVar4 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 <= lVar2 + uVar5) {
      uVar4 = lVar2 + uVar5;
    }
    if (uVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)param_1[3]);
      lVar3 = *param_1;
    }
    if (lVar3 != param_2) {
                    // WARNING: Subroutine does not return
      memmove(uVar1,lVar3,param_2 - lVar3);
    }
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_3,param_4 - param_3);
  }
  uVar4 = lVar2 - param_2 >> 3;
  if (uVar5 < uVar4) {
    lVar3 = lVar2 + uVar5 * -8;
    if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar3,uVar5 * 8);
    }
                    // WARNING: Subroutine does not return
    memmove(lVar2 - ((lVar2 + uVar5 * -8) - param_2 & 0xfffffffffffffff8),param_2);
  }
  lVar3 = param_3 + uVar4 * 8;
  if (lVar3 != param_4) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar3,param_4 - lVar3);
  }
  if (param_2 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar2 + (uVar5 - uVar4) * 8,param_2,lVar2 - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(param_2 + (uVar4 - (lVar3 - param_3 >> 3)) * 8,param_3,lVar3 - param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180058b3e(longlong param_1,longlong param_2)
void FUN_180058b3e(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar2;
  
  param_1 = param_1 >> 3;
  uVar2 = param_1 * 2;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 <= (ulonglong)(param_1 + unaff_RBP)) {
    uVar2 = param_1 + unaff_RBP;
  }
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 8,(char)unaff_RDI[3]);
    param_2 = *unaff_RDI;
  }
  if (param_2 != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(uVar1,param_2,unaff_RSI - param_2);
  }
                    // WARNING: Subroutine does not return
  memmove(uVar1);
}





// 函数: void FUN_180058bfa(void)
void FUN_180058bfa(void)

{
  return;
}





// 函数: void FUN_180058c16(void)
void FUN_180058c16(void)

{
  return;
}





// 函数: void FUN_180058c20(longlong param_1)
void FUN_180058c20(longlong param_1)

{
  FUN_1800591c0();
  *(uint64_t *)(param_1 + 8) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &unknown_var_720_ptr;
  return;
}





// 函数: void FUN_180058c80(uint64_t *param_1)
void FUN_180058c80(uint64_t *param_1)

{
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x38))();
  }
  *param_1 = &unknown_var_720_ptr;
  return;
}





// 函数: void FUN_180058cc0(uint64_t *param_1)
void FUN_180058cc0(uint64_t *param_1)

{
  FUN_180058db0(param_1 + 4);
  *param_1 = &unknown_var_3456_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &unknown_var_720_ptr;
  return;
}





// 函数: void FUN_180058d20(uint64_t *param_1)
void FUN_180058d20(uint64_t *param_1)

{
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_3456_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &unknown_var_720_ptr;
  return;
}





// 函数: void FUN_180058d90(longlong *param_1)
void FUN_180058d90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x548) {
    FUN_1800594b0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180058db0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058db0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _Mtx_destroy_in_situ();
  FUN_180058370(param_1 + 0xf0,*(uint64_t *)(param_1 + 0x100),param_3,param_4,uVar1);
  FUN_180058370(param_1 + 0xc0,*(uint64_t *)(param_1 + 0xd0));
  FUN_180058370(param_1 + 0x90,*(uint64_t *)(param_1 + 0xa0));
  FUN_1800593f0(param_1 + 0x60,*(uint64_t *)(param_1 + 0x70));
  FUN_180058710(param_1 + 0x30,*(uint64_t *)(param_1 + 0x40));
  FUN_1800593f0(param_1,*(uint64_t *)(param_1 + 0x10));
  return;
}





// 函数: void FUN_180058e60(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058e60(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800593f0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180058e90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180058e90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1800593f0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180058f00(uint64_t param_1,uint64_t *param_2)
void FUN_180058f00(uint64_t param_1,uint64_t *param_2)

{
  (*(code *)*param_2)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00018017747d)
// WARNING: Removing unreachable block (ram,0x000180177a18)
// WARNING: Removing unreachable block (ram,0x000180177a22)
// WARNING: Removing unreachable block (ram,0x000180177a2e)
// WARNING: Removing unreachable block (ram,0x000180177a35)
// WARNING: Removing unreachable block (ram,0x000180177581)
// WARNING: Removing unreachable block (ram,0x000180177590)
// WARNING: Removing unreachable block (ram,0x00018017759c)
// WARNING: Removing unreachable block (ram,0x0001801775a3)
// WARNING: Removing unreachable block (ram,0x0001801775b3)
// WARNING: Removing unreachable block (ram,0x0001801775c0)
// WARNING: Removing unreachable block (ram,0x0001801775cc)
// WARNING: Removing unreachable block (ram,0x0001801775d3)
// WARNING: Removing unreachable block (ram,0x000180177263)
// WARNING: Removing unreachable block (ram,0x000180177296)
// WARNING: Removing unreachable block (ram,0x00018017726a)
// WARNING: Removing unreachable block (ram,0x000180177274)
// WARNING: Removing unreachable block (ram,0x000180177280)
// WARNING: Removing unreachable block (ram,0x000180177287)
// WARNING: Removing unreachable block (ram,0x000180177290)
// WARNING: Removing unreachable block (ram,0x000180177298)
// WARNING: Removing unreachable block (ram,0x00018017753a)
// WARNING: Removing unreachable block (ram,0x000180177540)
// WARNING: Removing unreachable block (ram,0x000180177550)
// WARNING: Removing unreachable block (ram,0x00018017755c)
// WARNING: Removing unreachable block (ram,0x000180177563)
// WARNING: Removing unreachable block (ram,0x0001801772c2)
// WARNING: Removing unreachable block (ram,0x0001801772d0)
// WARNING: Removing unreachable block (ram,0x0001801772dc)
// WARNING: Removing unreachable block (ram,0x0001801772e3)
// WARNING: Removing unreachable block (ram,0x00018017764c)
// WARNING: Removing unreachable block (ram,0x00018017749a)
// WARNING: Removing unreachable block (ram,0x0001801774a8)
// WARNING: Removing unreachable block (ram,0x0001801774aa)
// WARNING: Removing unreachable block (ram,0x000180176fc3)
// WARNING: Removing unreachable block (ram,0x000180177722)
// WARNING: Removing unreachable block (ram,0x00018017729d)
// WARNING: Removing unreachable block (ram,0x00018017766b)
// WARNING: Removing unreachable block (ram,0x000180177677)
// WARNING: Removing unreachable block (ram,0x000180177679)
// WARNING: Removing unreachable block (ram,0x00018017739f)
// WARNING: Removing unreachable block (ram,0x0001801773a6)
// WARNING: Removing unreachable block (ram,0x0001801773b0)
// WARNING: Removing unreachable block (ram,0x0001801773bc)
// WARNING: Removing unreachable block (ram,0x0001801773c3)
// WARNING: Removing unreachable block (ram,0x00018017731b)
// WARNING: Removing unreachable block (ram,0x000180177321)
// WARNING: Removing unreachable block (ram,0x000180177330)
// WARNING: Removing unreachable block (ram,0x00018017733c)
// WARNING: Removing unreachable block (ram,0x000180177343)
// WARNING: Removing unreachable block (ram,0x00018017734b)
// WARNING: Removing unreachable block (ram,0x000180177356)
// WARNING: Removing unreachable block (ram,0x000180177360)
// WARNING: Removing unreachable block (ram,0x00018017736c)
// WARNING: Removing unreachable block (ram,0x000180177373)
// WARNING: Removing unreachable block (ram,0x00018017737b)
// WARNING: Removing unreachable block (ram,0x000180177385)
// WARNING: Removing unreachable block (ram,0x0001801773cb)
// WARNING: Removing unreachable block (ram,0x000180177381)
// WARNING: Removing unreachable block (ram,0x0001801773cd)
// WARNING: Removing unreachable block (ram,0x0001801773d6)
// WARNING: Removing unreachable block (ram,0x0001801773da)
// WARNING: Removing unreachable block (ram,0x0001801773e4)
// WARNING: Removing unreachable block (ram,0x0001801773eb)
// WARNING: Removing unreachable block (ram,0x000180177400)
// WARNING: Removing unreachable block (ram,0x00018017740c)
// WARNING: Removing unreachable block (ram,0x000180177413)
// WARNING: Removing unreachable block (ram,0x00018017741e)
// WARNING: Removing unreachable block (ram,0x000180177417)
// WARNING: Removing unreachable block (ram,0x000180177420)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



