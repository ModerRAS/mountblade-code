#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part026.c - 25 个函数

// 函数: void FUN_180059940(longlong param_1,longlong param_2)
void FUN_180059940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x10) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180059977. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x10);
    return;
  }
  FUN_180626f80(&unknown_var_616_ptr,0x10,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_1800599c0(longlong param_1,uint64_t param_2,int param_3)
void FUN_1800599c0(longlong param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x10) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_1800599df(void)
void FUN_1800599df(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180059a04(int8_t *param_1)
void FUN_180059a04(int8_t *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180059a20(longlong param_1,longlong param_2,longlong param_3)
void FUN_180059a20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  puStack_70 = &system_config_ptr;
  puStack_68 = auStack_58;
  uStack_60 = 0;
  auStack_58[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_68,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_70 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_98);
}





// 函数: void FUN_180059ba0(uint64_t *param_1)
void FUN_180059ba0(uint64_t *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 == (uint64_t *)0x0) {
    return;
  }
  uVar3 = (ulonglong)param_1 & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)param_1 - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *param_1 = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = param_1;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList),
                          param_1,uVar3,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180059bc0(void)
void FUN_180059bc0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x1ae8,10);
  if (lVar1 == 0) {
    return;
  }
  *(uint64_t *)(lVar1 + 0x100) = 0;
  *(uint64_t *)(lVar1 + 0x108) = 0;
  *(int32_t *)(lVar1 + 0x130) = 0;
  *(uint64_t *)(lVar1 + 0x138) = 0;
  *(int16_t *)(lVar1 + 0x140) = 0x100;
  *(uint64_t *)(lVar1 + 0x248) = 0;
  *(uint64_t *)(lVar1 + 0x250) = 0;
  *(int32_t *)(lVar1 + 0x278) = 0;
  *(uint64_t *)(lVar1 + 0x280) = 0;
  *(int16_t *)(lVar1 + 0x288) = 0x100;
  *(uint64_t *)(lVar1 + 0x390) = 0;
  *(uint64_t *)(lVar1 + 0x398) = 0;
  *(int32_t *)(lVar1 + 0x3c0) = 0;
  *(uint64_t *)(lVar1 + 0x3c8) = 0;
  *(int16_t *)(lVar1 + 0x3d0) = 0x100;
  *(uint64_t *)(lVar1 + 0x4d8) = 0;
  *(uint64_t *)(lVar1 + 0x4e0) = 0;
  *(int32_t *)(lVar1 + 0x508) = 0;
  *(uint64_t *)(lVar1 + 0x510) = 0;
  *(int16_t *)(lVar1 + 0x518) = 0x100;
  *(uint64_t *)(lVar1 + 0x620) = 0;
  *(uint64_t *)(lVar1 + 0x628) = 0;
  *(int32_t *)(lVar1 + 0x650) = 0;
  *(uint64_t *)(lVar1 + 0x658) = 0;
  *(int16_t *)(lVar1 + 0x660) = 0x100;
  *(uint64_t *)(lVar1 + 0x768) = 0;
  *(uint64_t *)(lVar1 + 0x770) = 0;
  *(int32_t *)(lVar1 + 0x798) = 0;
  *(uint64_t *)(lVar1 + 0x7a0) = 0;
  *(int16_t *)(lVar1 + 0x7a8) = 0x100;
  *(uint64_t *)(lVar1 + 0x8b0) = 0;
  *(uint64_t *)(lVar1 + 0x8b8) = 0;
  *(int32_t *)(lVar1 + 0x8e0) = 0;
  *(uint64_t *)(lVar1 + 0x8e8) = 0;
  *(int16_t *)(lVar1 + 0x8f0) = 0x100;
  *(uint64_t *)(lVar1 + 0x9f8) = 0;
  *(uint64_t *)(lVar1 + 0xa00) = 0;
  *(int32_t *)(lVar1 + 0xa28) = 0;
  *(uint64_t *)(lVar1 + 0xa30) = 0;
  *(int16_t *)(lVar1 + 0xa38) = 0x100;
  *(uint64_t *)(lVar1 + 0xb40) = 0;
  *(uint64_t *)(lVar1 + 0xb48) = 0;
  *(int32_t *)(lVar1 + 0xb70) = 0;
  *(uint64_t *)(lVar1 + 0xb78) = 0;
  *(int16_t *)(lVar1 + 0xb80) = 0x100;
  *(uint64_t *)(lVar1 + 0xc88) = 0;
  *(uint64_t *)(lVar1 + 0xc90) = 0;
  *(int32_t *)(lVar1 + 0xcb8) = 0;
  *(uint64_t *)(lVar1 + 0xcc0) = 0;
  *(int16_t *)(lVar1 + 0xcc8) = 0x100;
  *(uint64_t *)(lVar1 + 0xdd0) = 0;
  *(uint64_t *)(lVar1 + 0xdd8) = 0;
  *(int32_t *)(lVar1 + 0xe00) = 0;
  *(uint64_t *)(lVar1 + 0xe08) = 0;
  *(int16_t *)(lVar1 + 0xe10) = 0x100;
  *(uint64_t *)(lVar1 + 0xf18) = 0;
  *(uint64_t *)(lVar1 + 0xf20) = 0;
  *(int32_t *)(lVar1 + 0xf48) = 0;
  *(uint64_t *)(lVar1 + 0xf50) = 0;
  *(int16_t *)(lVar1 + 0xf58) = 0x100;
  *(uint64_t *)(lVar1 + 0x1060) = 0;
  *(uint64_t *)(lVar1 + 0x1068) = 0;
  *(int32_t *)(lVar1 + 0x1090) = 0;
  *(uint64_t *)(lVar1 + 0x1098) = 0;
  *(int16_t *)(lVar1 + 0x10a0) = 0x100;
  *(uint64_t *)(lVar1 + 0x11a8) = 0;
  *(uint64_t *)(lVar1 + 0x11b0) = 0;
  *(int32_t *)(lVar1 + 0x11d8) = 0;
  *(uint64_t *)(lVar1 + 0x11e0) = 0;
  *(int16_t *)(lVar1 + 0x11e8) = 0x100;
  *(uint64_t *)(lVar1 + 0x12f0) = 0;
  *(uint64_t *)(lVar1 + 0x12f8) = 0;
  *(int32_t *)(lVar1 + 0x1320) = 0;
  *(uint64_t *)(lVar1 + 0x1328) = 0;
  *(int16_t *)(lVar1 + 0x1330) = 0x100;
  *(uint64_t *)(lVar1 + 0x1438) = 0;
  *(uint64_t *)(lVar1 + 0x1440) = 0;
  *(int32_t *)(lVar1 + 0x1468) = 0;
  *(uint64_t *)(lVar1 + 0x1470) = 0;
  *(int16_t *)(lVar1 + 0x1478) = 0x100;
  *(uint64_t *)(lVar1 + 0x1580) = 0;
  *(uint64_t *)(lVar1 + 0x1588) = 0;
  *(int32_t *)(lVar1 + 0x15b0) = 0;
  *(uint64_t *)(lVar1 + 0x15b8) = 0;
  *(int16_t *)(lVar1 + 0x15c0) = 0x100;
  *(uint64_t *)(lVar1 + 0x16c8) = 0;
  *(uint64_t *)(lVar1 + 0x16d0) = 0;
  *(int32_t *)(lVar1 + 0x16f8) = 0;
  *(uint64_t *)(lVar1 + 0x1700) = 0;
  *(int16_t *)(lVar1 + 0x1708) = 0x100;
  *(uint64_t *)(lVar1 + 0x1810) = 0;
  *(uint64_t *)(lVar1 + 0x1818) = 0;
  *(int32_t *)(lVar1 + 0x1840) = 0;
  *(uint64_t *)(lVar1 + 0x1848) = 0;
  *(int16_t *)(lVar1 + 0x1850) = 0x100;
  *(uint64_t *)(lVar1 + 0x1958) = 0;
  *(uint64_t *)(lVar1 + 0x1960) = 0;
  *(int32_t *)(lVar1 + 0x1988) = 0;
  *(uint64_t *)(lVar1 + 0x1990) = 0;
  *(int16_t *)(lVar1 + 0x1998) = 0x100;
  *(uint64_t *)(lVar1 + 0x1aa0) = 0;
  *(uint64_t *)(lVar1 + 0x1aa8) = 0;
  *(int32_t *)(lVar1 + 0x1ad0) = 0;
  *(uint64_t *)(lVar1 + 0x1ad8) = 0;
  *(int16_t *)(lVar1 + 0x1ae0) = 0x100;
  return;
}





// 函数: void FUN_180059ee0(longlong *param_1)
void FUN_180059ee0(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar3[3] != (uint64_t *)0x0) {
      *(uint64_t *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x141);
    lVar4 = *(longlong *)(lVar4 + 0x138);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (uint64_t *)param_1[3];
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180059ee4(longlong *param_1)
void FUN_180059ee4(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar3[3] != (uint64_t *)0x0) {
      *(uint64_t *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x141);
    lVar4 = *(longlong *)(lVar4 + 0x138);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (uint64_t *)param_1[3];
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180059ef9(void)
void FUN_180059ef9(void)

{
  uint64_t *unaff_RBX;
  
  if ((uint64_t *)unaff_RBX[3] != (uint64_t *)0x0) {
    *(uint64_t *)unaff_RBX[3] = 0;
  }
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180059f4f(void)
void FUN_180059f4f(void)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  ulonglong uVar5;
  
  if ((*(longlong *)(unaff_RSI + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RSI + 0x30) + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = *(longlong *)(unaff_RSI + 0x28);
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x141);
    lVar4 = *(longlong *)(lVar4 + 0x138);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = *(uint64_t **)(unaff_RSI + 0x18);
  if (puVar3 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar3,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180059fb0(uint64_t *param_1)
void FUN_180059fb0(uint64_t *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1 & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)param_1 - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *param_1 = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = param_1;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList),
                          param_1,uVar3,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180059fc0(longlong *param_1)
void FUN_180059fc0(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar3[3] != (uint64_t *)0x0) {
      *(uint64_t *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x141);
    lVar4 = *(longlong *)(lVar4 + 0x138);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (uint64_t *)param_1[3];
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_18005a010(longlong param_1)
void FUN_18005a010(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(param_1 + 0x18);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_18005a050(longlong param_1)
void FUN_18005a050(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar3 = *(longlong *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}





// 函数: void FUN_18005a100(longlong param_1)
void FUN_18005a100(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18005a050();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18005a130(longlong param_1)
void FUN_18005a130(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18005a050();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18005a170(longlong param_1)
void FUN_18005a170(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18005a050();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



uint64_t FUN_18005a1b0(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xc0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005a200(uint64_t *param_1)
void FUN_18005a200(uint64_t *param_1)

{
  ulonglong uVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  longlong lVar6;
  uint64_t *puVar7;
  longlong lVar8;
  
  uVar3 = 0;
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  puVar5 = param_1 + 0xb;
  lVar8 = 0x20;
  lVar6 = 0x20;
  puVar7 = puVar5;
  do {
    func_0x000180059bb0(puVar7);
    puVar7 = puVar7 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(uint64_t *)((longlong)param_1 + 0x25c) = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  param_1[7] = 0;
  param_1[8] = 0x20;
  param_1[9] = puVar5;
  do {
    *(int32_t *)puVar5 = 0;
    puVar5 = puVar5 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_1[10] = 0;
  param_1[6] = param_1 + 8;
  param_1[4] = 0x15;
  lVar6 = FUN_180059bc0();
  param_1[3] = lVar6;
  if (lVar6 == 0) {
    param_1[4] = 0;
    uVar1 = uVar3;
  }
  else {
    uVar1 = param_1[4];
  }
  uVar4 = uVar3;
  if (uVar1 != 0) {
    do {
      *(int8_t *)(uVar4 + 0x141 + param_1[3]) = 0;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0x148;
    } while (uVar3 < (ulonglong)param_1[4]);
  }
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(param_1 + 0x56,2);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(int32_t *)(param_1 + 99) = 3;
  param_1[0x65] = 0;
  *(int32_t *)(param_1 + 0x6a) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x354) = 0x40000000;
  *(int32_t *)((longlong)param_1 + 0x35c) = 3;
  param_1[0x68] = 1;
  param_1[0x67] = &system_data_0000;
  param_1[0x69] = 0;
  *(int32_t *)(param_1 + 0x6b) = 0;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0xc0,8,4);
                    // WARNING: Subroutine does not return
  memset(uVar2,0,0xc0);
}



uint64_t * FUN_18005a420(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_7864_ptr;
  FUN_18005b7c0(param_1 + 0xa4);
  FUN_18005b960(param_1 + 0x8c);
  FUN_18005b7c0(param_1 + 0x7e);
  FUN_18005b7c0(param_1 + 0x70);
  FUN_18005b7c0(param_1 + 0x62);
  FUN_18005b7c0(param_1 + 0x54);
  FUN_18005b7c0(param_1 + 0x46);
  FUN_18005b7c0(param_1 + 0x38);
  FUN_18005b7c0(param_1 + 0x2a);
  FUN_18005b7c0(param_1 + 0x1c);
  FUN_1800ae640(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x590);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005a500(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005a500(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puStack_50;
  uint64_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13,param_4,0xfffffffffffffffe);
  *(int8_t *)puVar2 = 0;
  puStack_48 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar2 = 0x6320726f74696445;
  *(int32_t *)(puVar2 + 1) = 0x69666e6f;
  *(int16_t *)((longlong)puVar2 + 0xc) = 0x67;
  uStack_40 = 0xd;
  FUN_1800ae520(param_1,&puStack_50);
  puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



uint64_t FUN_18005a960(uint64_t param_1,ulonglong param_2)

{
  FUN_18005a9a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xa90);
  }
  return param_1;
}





// 函数: void FUN_18005a9a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005a9a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_7944_ptr;
  FUN_18005ab50(param_1 + 0x143);
  FUN_18005ab50(param_1 + 0x134);
  FUN_18005b7c0(param_1 + 0x126);
  FUN_18005b7c0(param_1 + 0x118);
  FUN_18005b7c0(param_1 + 0x10a);
  FUN_18005b7c0(param_1 + 0xfc);
  FUN_18005b7c0(param_1 + 0xee);
  FUN_18005b7c0(param_1 + 0xe0);
  FUN_18005b7c0(param_1 + 0xd2);
  FUN_18005b7c0(param_1 + 0xc4);
  FUN_18005b7c0(param_1 + 0xb6);
  FUN_18005b7c0(param_1 + 0xa8);
  FUN_18005b7c0(param_1 + 0x9a);
  FUN_18005b7c0(param_1 + 0x8c);
  FUN_18005b7c0(param_1 + 0x7e);
  FUN_18005b7c0(param_1 + 0x70);
  FUN_18005b7c0(param_1 + 0x62);
  FUN_18005b7c0(param_1 + 0x54);
  FUN_18005b7c0(param_1 + 0x46);
  FUN_18005b7c0(param_1 + 0x38);
  FUN_18005b7c0(param_1 + 0x2a);
  FUN_18005b7c0(param_1 + 0x1c);
  *param_1 = &unknown_var_7304_ptr;
  param_1[0x18] = &system_data_buffer_ptr;
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &system_state_ptr;
  FUN_18005d260(param_1 + 0x12,param_1[0x14],param_3,param_4,0xfffffffffffffffe);
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18005aaf0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005aaf0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_1,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}





// 函数: void FUN_18005ab20(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005ab20(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_1,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}





// 函数: void FUN_18005ab50(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005ab50(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    (**(code **)(param_1 + 0x68))(param_1 + 0x58,0,0,param_4,0xfffffffffffffffe);
  }
  *(uint64_t *)(param_1 + 0x30) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x38) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x30) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x10) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x10) = &system_state_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005ac00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18005ac00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t *puVar2;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (int32_t *)0x0;
  uStack_40 = 0;
  puVar2 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x13,0x13,param_4,0xfffffffffffffffe);
  *(int8_t *)puVar2 = 0;
  puStack_48 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar2 = 0x65766544;
  puVar2[1] = 0x6d706f6c;
  puVar2[2] = 0x20746e65;
  puVar2[3] = 0x666e6f63;
  *(int16_t *)(puVar2 + 4) = 0x6769;
  *(int8_t *)((longlong)puVar2 + 0x12) = 0;
  uStack_40 = 0x12;
  FUN_1800ae520(param_1,&puStack_50);
  puStack_50 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



uint64_t FUN_18005b520(uint64_t param_1,ulonglong param_2)

{
  FUN_18005b560();
  if ((param_2 & 1) != 0) {
    free(param_1,0x13c0);
  }
  return param_1;
}





