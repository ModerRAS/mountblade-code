#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part019.c - 21 个函数

// 函数: void FUN_180059620(longlong *param_1)
void FUN_180059620(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1800596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180059640(longlong *param_1)
void FUN_180059640(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1800596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1800596a0(uint64_t *param_1)
void FUN_1800596a0(uint64_t *param_1)

{
  param_1[4] = &UNK_180a3c3e0;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  param_1[4] = &UNK_18098bcb0;
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180059730(longlong param_1)
void FUN_180059730(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  return;
}



uint64_t * FUN_180059780(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = (longlong)param_3 - (longlong)param_1;
    puVar2 = param_1 + 1;
    do {
      *param_3 = &UNK_18098bcb0;
      *(uint64_t *)(lVar3 + (longlong)puVar2) = 0;
      *(int32_t *)(lVar3 + 8 + (longlong)puVar2) = 0;
      *param_3 = &UNK_180a3c3e0;
      *(uint64_t *)(lVar3 + 0x10 + (longlong)puVar2) = 0;
      *(uint64_t *)(lVar3 + (longlong)puVar2) = 0;
      *(int32_t *)(lVar3 + 8 + (longlong)puVar2) = 0;
      *(int32_t *)(lVar3 + 8 + (longlong)puVar2) = *(int32_t *)(puVar2 + 1);
      *(uint64_t *)(lVar3 + (longlong)puVar2) = *puVar2;
      *(int32_t *)(lVar3 + 0x14 + (longlong)puVar2) = *(int32_t *)((longlong)puVar2 + 0x14);
      *(int32_t *)(lVar3 + 0x10 + (longlong)puVar2) = *(int32_t *)(puVar2 + 2);
      *(int32_t *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      puVar2[2] = 0;
      param_3 = param_3 + 4;
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 4;
    } while (puVar1 != param_2);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180059820(longlong *param_1,uint64_t param_2)
void FUN_180059820(longlong *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  lVar6 = lVar3 - lVar4 >> 5;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      lVar2 = 0;
      goto LAB_180059885;
    }
  }
  lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar6 << 5,(char)param_1[3]);
  lVar3 = param_1[1];
  lVar4 = *param_1;
LAB_180059885:
  lVar3 = FUN_180059780(lVar4,lVar3,lVar2);
  FUN_180627ae0(lVar3,param_2);
  puVar1 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = lVar2;
    param_1[2] = lVar6 * 0x20 + lVar2;
    param_1[1] = lVar3 + 0x20;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



uint64_t *
FUN_180059900(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





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
  FUN_180626f80(&UNK_18098bc48,0x10,param_2);
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
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_70 = &UNK_1809fdc18;
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
  puStack_70 = &UNK_18098bcb0;
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
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x1ae8,10);
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





// 函数: void FUN_180060200(uint64_t *param_1)
void FUN_180060200(uint64_t *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  *param_1 = &UNK_1809fe1f0;
  if (param_1[8] != 0) {
    lVar11 = 0;
    if ((param_1[5] & 0x1f) != 0) {
      uVar10 = param_1[0xe] - param_1[0xc];
      uVar5 = param_1[0xd] - 1;
      while( true ) {
        uVar10 = uVar10 & uVar5;
        if ((ulonglong)((*(longlong *)(param_1[0xf] + uVar10 * 0x10) + 0x20) - param_1[5]) <
            0x8000000000000001) break;
        uVar5 = uVar10 + 1;
        uVar10 = param_1[0xd] - 1;
      }
      lVar11 = *(longlong *)(param_1[0xf] + 8 + uVar10 * 0x10);
    }
    lVar9 = param_1[8];
LAB_1800602a0:
    lVar9 = *(longlong *)(lVar9 + 0x100);
    uVar5 = 0;
    do {
      if (*(char *)(lVar9 + 0x110 + uVar5) == '\0') {
        uVar5 = 0;
        if (lVar9 == lVar11) {
          uVar5 = (ulonglong)((uint)param_1[5] & 0x1f);
        }
        if ((param_1[4] & 0x1f) == 0) {
          uVar10 = 0x20;
        }
        else {
          uVar10 = (ulonglong)((uint)param_1[4] & 0x1f);
        }
        goto LAB_1800602f0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    goto LAB_18006031a;
  }
LAB_18006039b:
  if (param_1[0x10] == 0) {
    *param_1 = &UNK_1809fe210;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
  while( true ) {
    uVar4 = (uint)uVar5;
    uVar5 = uVar5 + 1;
    plVar1 = *(longlong **)(lVar9 + (ulonglong)(uVar4 & 0x1f) * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (uVar5 == 0x20) break;
LAB_1800602f0:
    if ((lVar9 == param_1[8]) && (uVar5 == uVar10)) break;
  }
LAB_18006031a:
  lVar7 = param_1[8];
  if (lVar9 == lVar7) goto code_r0x000180060327;
  goto LAB_1800602a0;
code_r0x000180060327:
  if (lVar7 != 0) {
    do {
      lVar11 = *(longlong *)(lVar7 + 0x100);
      if (*(char *)(lVar7 + 0x141) != '\0') {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar9 = param_1[10];
      LOCK();
      piVar2 = (int *)(lVar7 + 0x130);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -0x80000000;
      UNLOCK();
      if (iVar3 == 0) {
        lVar8 = *(longlong *)(lVar9 + 0x28);
        do {
          *(longlong *)(lVar7 + 0x138) = lVar8;
          *(int32_t *)(lVar7 + 0x130) = 1;
          plVar1 = (longlong *)(lVar9 + 0x28);
          LOCK();
          lVar6 = *plVar1;
          bVar12 = lVar8 == lVar6;
          if (bVar12) {
            *plVar1 = lVar7;
            lVar6 = lVar8;
          }
          UNLOCK();
          if (bVar12) break;
          LOCK();
          piVar2 = (int *)(lVar7 + 0x130);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + 0x7fffffff;
          UNLOCK();
          lVar8 = lVar6;
        } while (iVar3 == 1);
      }
      lVar7 = lVar11;
    } while (lVar11 != param_1[8]);
  }
  goto LAB_18006039b;
}



uint64_t FUN_1800603e0(uint64_t param_1,ulonglong param_2)

{
  FUN_180060420();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}





// 函数: void FUN_180060420(uint64_t *param_1)
void FUN_180060420(uint64_t *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  *param_1 = &UNK_1809fe200;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          do {
            *(longlong *)(lVar9 + 0x138) = lVar8;
            *(int32_t *)(lVar9 + 0x130) = 1;
            plVar5 = (longlong *)(lVar6 + 0x28);
            LOCK();
            lVar7 = *plVar5;
            bVar11 = lVar8 == lVar7;
            if (bVar11) {
              *plVar5 = lVar9;
              lVar7 = lVar8;
            }
            UNLOCK();
            if (bVar11) break;
            LOCK();
            piVar1 = (int *)(lVar9 + 0x130);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_1800604d1:
      plVar5 = (longlong *)param_1[0xc];
      lVar9 = *(longlong *)
               (*(longlong *)
                 (plVar5[3] +
                 (((uVar10 & 0xffffffffffffffe0) - **(longlong **)(plVar5[3] + plVar5[1] * 8) >> 5)
                  + plVar5[1] & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_1800604d1;
    plVar5 = *(longlong **)(lVar9 + (ulonglong)((uint)uVar10 & 0x1f) * 8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
    }
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x130);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(longlong *)(lVar6 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x138) = lVar8;
        *(int32_t *)(lVar9 + 0x130) = 1;
        plVar5 = (longlong *)(lVar6 + 0x28);
        LOCK();
        lVar7 = *plVar5;
        bVar11 = lVar8 == lVar7;
        if (bVar11) {
          *plVar5 = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (iVar2 == 1);
    }
  }
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_1809fe210;
  return;
}



uint64_t * FUN_1800605d0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_1809fe210;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}





// 函数: void FUN_180060610(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180060610(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a10098;
  cVar1 = FUN_18020eba0(param_1,1,param_3,param_4,0xfffffffffffffffe);
  while (cVar1 != '\0') {
    cVar1 = FUN_18020eba0(param_1,1,param_3,param_4,uVar2);
  }
  if (param_1[1] == 0) {
    param_1[1] = 0;
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(param_1 + 0x2a);
    _Mtx_destroy_in_situ();
    FUN_18020f530();
    if (param_1[0xe] != 0) {
      *(uint64_t *)(param_1[0xe] + 0x10) = 0;
      *(int8_t *)(param_1[0xe] + 8) = 1;
    }
    param_1[2] = &UNK_18098bcb0;
    return;
  }
  if (*(int *)(param_1[1] + 8) == 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  terminate();
}



uint64_t FUN_180060630(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_18020e6c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x208,param_3,param_4,uVar1);
  }
  return param_1;
}



int FUN_180060680(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  ulonglong *puVar2;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar2 = (ulonglong *)func_0x00018004b9a0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&uStackX_18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



