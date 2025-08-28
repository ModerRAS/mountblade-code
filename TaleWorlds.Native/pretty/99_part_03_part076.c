#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part076.c - 5 个函数

// 函数: void FUN_180241a50(longlong *param_1,longlong param_2,longlong param_3)
void FUN_180241a50(longlong *param_1,longlong param_2,longlong param_3)

{
  uint64_t *puVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = param_3 - param_2;
  lVar5 = lVar8 / 6 + (lVar8 >> 0x3f);
  uVar6 = (lVar5 >> 4) - (lVar5 >> 0x3f);
  lVar5 = *param_1;
  if ((ulonglong)((param_1[2] - lVar5) / 0x60) < uVar6) {
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 0x60,(char)param_1[3]);
    }
    FUN_180241e30(param_2,param_3,lVar5);
    puVar1 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
    if (puVar4 != puVar1) {
      do {
        *puVar4 = &unknown_var_720_ptr;
        puVar4 = puVar4 + 0xc;
      } while (puVar4 != puVar1);
      puVar4 = (uint64_t *)*param_1;
    }
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar5;
    lVar5 = uVar6 * 0x60 + lVar5;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
  }
  else {
    uVar2 = (param_1[1] - lVar5) / 0x60;
    if (uVar2 < uVar6) {
      lVar7 = uVar2 * 0x60 + param_2;
      FUN_180241d70(param_2,lVar7,lVar5,lVar8,0xfffffffffffffffe);
      lVar5 = FUN_180241e30(lVar7,param_3,param_1[1]);
      param_1[1] = lVar5;
    }
    else {
      puVar3 = (uint64_t *)FUN_180241d70(param_2,param_3,lVar5,lVar8,0xfffffffffffffffe);
      puVar1 = (uint64_t *)param_1[1];
      for (puVar4 = puVar3; puVar4 != puVar1; puVar4 = puVar4 + 0xc) {
        *puVar4 = &unknown_var_720_ptr;
      }
      param_1[1] = (longlong)puVar3;
    }
  }
  return;
}



longlong FUN_180241bf0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong lVar3;
  void *puVar4;
  
  lVar1 = (param_2 - param_1) / 0x26 + (param_2 - param_1 >> 0x3f);
  lVar1 = (lVar1 >> 2) - (lVar1 >> 0x3f);
  if (0 < lVar1) {
    puVar2 = (uint64_t *)(param_1 + 8);
    lVar3 = lVar1 * 0x98;
    do {
      *(int32_t *)((param_3 - param_1) + 8 + (longlong)puVar2) = *(int32_t *)(puVar2 + 1);
      puVar4 = &system_buffer_ptr;
      if ((void *)*puVar2 != (void *)0x0) {
        puVar4 = (void *)*puVar2;
      }
      strcpy_s(*(uint64_t *)((param_3 - param_1) + (longlong)puVar2),0x80,puVar4);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 0x13;
    } while (0 < lVar1);
    return lVar3 + param_3;
  }
  return param_3;
}



longlong FUN_180241c1c(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong unaff_RDI;
  void *puVar3;
  
  puVar1 = (uint64_t *)(param_1 + 8);
  lVar2 = unaff_RDI * 0x98;
  do {
    *(int32_t *)((param_3 - param_1) + 8 + (longlong)puVar1) = *(int32_t *)(puVar1 + 1);
    puVar3 = &system_buffer_ptr;
    if ((void *)*puVar1 != (void *)0x0) {
      puVar3 = (void *)*puVar1;
    }
    strcpy_s(*(uint64_t *)((param_3 - param_1) + (longlong)puVar1),0x80,puVar3);
    unaff_RDI = unaff_RDI + -1;
    puVar1 = puVar1 + 0x13;
  } while (0 < unaff_RDI);
  return lVar2 + param_3;
}



uint64_t FUN_180241c8e(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  return param_3;
}



uint64_t * FUN_180241ca0(longlong param_1,longlong param_2,uint64_t *param_3,uint64_t param_4)

{
  void *puVar1;
  void *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    param_1 = param_1 - (longlong)param_3;
    do {
      *param_3 = &unknown_var_720_ptr;
      param_3[1] = 0;
      *(int32_t *)(param_3 + 2) = 0;
      *param_3 = &unknown_var_3432_ptr;
      param_3[1] = param_3 + 3;
      *(int32_t *)(param_3 + 2) = 0;
      *(int8_t *)(param_3 + 3) = 0;
      *(int32_t *)(param_3 + 2) = *(int32_t *)(param_1 + 0x10 + (longlong)param_3);
      puVar1 = *(void **)(param_1 + 8 + (longlong)param_3);
      puVar2 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar2 = puVar1;
      }
      strcpy_s(param_3[1],0x80,puVar2,param_4,uVar3);
      param_3 = param_3 + 0x13;
    } while (param_1 + (longlong)param_3 != param_2);
  }
  return param_3;
}



longlong FUN_180241d70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong lVar3;
  void *puVar4;
  
  lVar1 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  lVar1 = (lVar1 >> 4) - (lVar1 >> 0x3f);
  if (0 < lVar1) {
    puVar2 = (uint64_t *)(param_1 + 8);
    param_1 = param_3 - param_1;
    lVar3 = lVar1 * 0x60;
    do {
      *(int32_t *)(param_1 + 8 + (longlong)puVar2) = *(int32_t *)(puVar2 + 1);
      puVar4 = &system_buffer_ptr;
      if ((void *)*puVar2 != (void *)0x0) {
        puVar4 = (void *)*puVar2;
      }
      strcpy_s(*(uint64_t *)(param_1 + (longlong)puVar2),0x40,puVar4);
      lVar1 = lVar1 + -1;
      *(int32_t *)(param_1 + 0x50 + (longlong)puVar2) = *(int32_t *)(puVar2 + 10);
      *(int32_t *)(param_1 + 0x54 + (longlong)puVar2) = *(int32_t *)((longlong)puVar2 + 0x54);
      puVar2 = puVar2 + 0xc;
    } while (0 < lVar1);
    return lVar3 + param_3;
  }
  return param_3;
}



longlong FUN_180241d9c(longlong param_1,uint64_t param_2,longlong param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong unaff_RDI;
  void *puVar3;
  
  puVar1 = (uint64_t *)(param_1 + 8);
  param_1 = param_3 - param_1;
  lVar2 = unaff_RDI * 0x60;
  do {
    *(int32_t *)(param_1 + 8 + (longlong)puVar1) = *(int32_t *)(puVar1 + 1);
    puVar3 = &system_buffer_ptr;
    if ((void *)*puVar1 != (void *)0x0) {
      puVar3 = (void *)*puVar1;
    }
    strcpy_s(*(uint64_t *)(param_1 + (longlong)puVar1),0x40,puVar3);
    unaff_RDI = unaff_RDI + -1;
    *(int32_t *)(param_1 + 0x50 + (longlong)puVar1) = *(int32_t *)(puVar1 + 10);
    *(int32_t *)(param_1 + 0x54 + (longlong)puVar1) = *(int32_t *)((longlong)puVar1 + 0x54);
    puVar1 = puVar1 + 0xc;
  } while (0 < unaff_RDI);
  return lVar2 + param_3;
}



uint64_t FUN_180241e19(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  return param_3;
}



uint64_t *
FUN_180241e30(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int8_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    lVar3 = (longlong)param_3 - (longlong)param_1;
    puVar4 = param_1 + 1;
    do {
      *param_3 = &unknown_var_720_ptr;
      *(uint64_t *)(lVar3 + (longlong)puVar4) = 0;
      *(int32_t *)(lVar3 + 8 + (longlong)puVar4) = 0;
      *param_3 = &unknown_var_3480_ptr;
      puVar2 = (int8_t *)(lVar3 + 0x10 + (longlong)puVar4);
      *(int8_t **)(lVar3 + (longlong)puVar4) = puVar2;
      *(int32_t *)(lVar3 + 8 + (longlong)puVar4) = 0;
      *puVar2 = 0;
      *(int32_t *)(lVar3 + 8 + (longlong)puVar4) = *(int32_t *)(puVar4 + 1);
      puVar5 = &system_buffer_ptr;
      if ((void *)*puVar4 != (void *)0x0) {
        puVar5 = (void *)*puVar4;
      }
      strcpy_s(*(uint64_t *)(lVar3 + (longlong)puVar4),0x40,puVar5,param_4,uVar6);
      *(int32_t *)(lVar3 + 0x50 + (longlong)puVar4) = *(int32_t *)(puVar4 + 10);
      *(int32_t *)(lVar3 + 0x54 + (longlong)puVar4) = *(int32_t *)((longlong)puVar4 + 0x54);
      param_3 = param_3 + 0xc;
      puVar1 = puVar4 + 0xb;
      puVar4 = puVar4 + 0xc;
    } while (puVar1 != param_2);
  }
  return param_3;
}



longlong * FUN_180241f10(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  *param_1 = (longlong)&unknown_var_720_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (longlong)&unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  param_1[8] = (longlong)&unknown_var_720_ptr;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[8] = (longlong)&unknown_var_3432_ptr;
  param_1[9] = (longlong)(param_1 + 0xb);
  *(int32_t *)(param_1 + 10) = 0;
  *(int8_t *)(param_1 + 0xb) = 0;
  plVar6 = param_1 + 0x1c;
  *plVar6 = (longlong)&unknown_var_720_ptr;
  param_1[0x1d] = 0;
  *(int32_t *)(param_1 + 0x1e) = 0;
  *plVar6 = (longlong)&unknown_var_3432_ptr;
  param_1[0x1d] = (longlong)(param_1 + 0x1f);
  *(int32_t *)(param_1 + 0x1e) = 0;
  *(int8_t *)(param_1 + 0x1f) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(int32_t *)(param_1 + 0x32) = 3;
  plVar3 = param_1 + 0x33;
  lVar5 = 5;
  FUN_1808fc838(plVar3,0x98,5,FUN_180049970,FUN_180044a30);
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(int32_t *)(param_1 + 0x95) = 3;
  FUN_1808fc838(param_1 + 0x96,0x58,0x10,FUN_180049cd0,FUN_180044a30);
  plVar4 = param_1 + 0x146;
  lVar8 = 9;
  FUN_1808fc838(plVar4,0x98,9,FUN_180049970,FUN_180044a30);
  plVar1 = param_1 + 0x1f1;
  *plVar1 = (longlong)&unknown_var_720_ptr;
  param_1[0x1f2] = 0;
  *(int32_t *)(param_1 + 499) = 0;
  *plVar1 = (longlong)&unknown_var_3432_ptr;
  param_1[0x1f2] = (longlong)(param_1 + 500);
  *(int32_t *)(param_1 + 499) = 0;
  *(int8_t *)(param_1 + 500) = 0;
  param_1[0x204] = (longlong)&unknown_var_720_ptr;
  param_1[0x205] = 0;
  *(int32_t *)(param_1 + 0x206) = 0;
  param_1[0x204] = (longlong)&unknown_var_3432_ptr;
  param_1[0x205] = (longlong)(param_1 + 0x207);
  *(int32_t *)(param_1 + 0x206) = 0;
  *(int8_t *)(param_1 + 0x207) = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  *(int32_t *)(param_1 + 0x21a) = 3;
  plVar2 = param_1 + 0x21b;
  *plVar2 = (longlong)&unknown_var_720_ptr;
  param_1[0x21c] = 0;
  *(int32_t *)(param_1 + 0x21d) = 0;
  *plVar2 = (longlong)&unknown_var_3456_ptr;
  param_1[0x21e] = 0;
  param_1[0x21c] = 0;
  *(int32_t *)(param_1 + 0x21d) = 0;
  param_1[0x220] = (longlong)&unknown_var_720_ptr;
  param_1[0x221] = 0;
  *(int32_t *)(param_1 + 0x222) = 0;
  param_1[0x220] = (longlong)&unknown_var_3432_ptr;
  param_1[0x221] = (longlong)(param_1 + 0x223);
  *(int32_t *)(param_1 + 0x222) = 0;
  *(int8_t *)(param_1 + 0x223) = 0;
  param_1[0x233] = (longlong)&unknown_var_720_ptr;
  param_1[0x234] = 0;
  *(int32_t *)(param_1 + 0x235) = 0;
  param_1[0x233] = (longlong)&unknown_var_3432_ptr;
  param_1[0x234] = (longlong)(param_1 + 0x236);
  *(int32_t *)(param_1 + 0x235) = 0;
  *(int8_t *)(param_1 + 0x236) = 0;
  param_1[0x246] = (longlong)&unknown_var_720_ptr;
  param_1[0x247] = 0;
  *(int32_t *)(param_1 + 0x248) = 0;
  param_1[0x246] = (longlong)&unknown_var_3432_ptr;
  param_1[0x247] = (longlong)(param_1 + 0x249);
  *(int32_t *)(param_1 + 0x248) = 0;
  *(int8_t *)(param_1 + 0x249) = 0;
  param_1[0x259] = (longlong)&unknown_var_720_ptr;
  param_1[0x25a] = 0;
  *(int32_t *)(param_1 + 0x25b) = 0;
  param_1[0x259] = (longlong)&unknown_var_3432_ptr;
  param_1[0x25a] = (longlong)(param_1 + 0x25c);
  *(int32_t *)(param_1 + 0x25b) = 0;
  *(int8_t *)(param_1 + 0x25c) = 0;
  param_1[0x26c] = (longlong)&unknown_var_720_ptr;
  param_1[0x26d] = 0;
  *(int32_t *)(param_1 + 0x26e) = 0;
  param_1[0x26c] = (longlong)&unknown_var_3432_ptr;
  param_1[0x26d] = (longlong)(param_1 + 0x26f);
  *(int32_t *)(param_1 + 0x26e) = 0;
  *(int8_t *)(param_1 + 0x26f) = 0;
  param_1[0x27f] = (longlong)&unknown_var_720_ptr;
  param_1[0x280] = 0;
  *(int32_t *)(param_1 + 0x281) = 0;
  param_1[0x27f] = (longlong)&unknown_var_3432_ptr;
  param_1[0x280] = (longlong)(param_1 + 0x282);
  *(int32_t *)(param_1 + 0x281) = 0;
  *(int8_t *)(param_1 + 0x282) = 0;
  (**(code **)(*plVar6 + 0x10))(plVar6,&system_buffer_ptr);
  (**(code **)(*param_1 + 0x10))(param_1,&system_buffer_ptr);
  plVar6 = plVar3;
  do {
    (**(code **)(*plVar6 + 0x10))(plVar3,&system_buffer_ptr);
    plVar3 = plVar3 + 0x13;
    plVar6 = plVar6 + 0x13;
    lVar5 = lVar5 + -1;
    plVar7 = plVar4;
  } while (lVar5 != 0);
  do {
    (**(code **)(*plVar7 + 0x10))(plVar4,&system_buffer_ptr);
    plVar4 = plVar4 + 0x13;
    lVar8 = lVar8 + -1;
    plVar7 = plVar7 + 0x13;
  } while (lVar8 != 0);
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(param_1[0x204] + 0x10))(param_1 + 0x204,&system_buffer_ptr);
  (**(code **)(param_1[0x220] + 0x10))(param_1 + 0x220,&system_buffer_ptr);
  (**(code **)(param_1[0x233] + 0x10))(param_1 + 0x233,&system_buffer_ptr);
  (**(code **)(param_1[0x246] + 0x10))(param_1 + 0x246,&system_buffer_ptr);
  (**(code **)(param_1[0x259] + 0x10))(param_1 + 0x259,&system_buffer_ptr);
  (**(code **)(param_1[0x26c] + 0x10))(param_1 + 0x26c,&system_buffer_ptr);
  (**(code **)(param_1[0x27f] + 0x10))(param_1 + 0x27f,&system_buffer_ptr);
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  *(int32_t *)((longlong)param_1 + 0xdc) = 0;
  return param_1;
}



uint64_t FUN_1802423b0(uint64_t param_1,ulonglong param_2)

{
  FUN_1802423f0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2210);
  }
  return param_1;
}






// 函数: void FUN_1802423f0(uint64_t *param_1)
void FUN_1802423f0(uint64_t *param_1)

{
  *param_1 = &unknown_var_9168_ptr;
  param_1[0x2b7] = 0;
  if (param_1[0x43e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180057830();
  FUN_180057170();
  FUN_1808fc8a8(param_1 + 0x386,0x58,0x10,FUN_180044a30);
  param_1[0x37b] = &unknown_var_720_ptr;
  param_1[0x370] = &unknown_var_720_ptr;
  param_1[0x365] = &unknown_var_720_ptr;
  param_1[0x35a] = &unknown_var_720_ptr;
  param_1[0x34f] = &unknown_var_720_ptr;
  param_1[0x344] = &unknown_var_720_ptr;
  param_1[0x339] = &unknown_var_720_ptr;
  param_1[0x32e] = &unknown_var_720_ptr;
  param_1[0x323] = &unknown_var_720_ptr;
  param_1[0x318] = &unknown_var_720_ptr;
  param_1[0x30d] = &unknown_var_720_ptr;
  param_1[0x302] = &unknown_var_720_ptr;
  param_1[0x2f7] = &unknown_var_720_ptr;
  param_1[0x2ec] = &unknown_var_720_ptr;
  param_1[0x2e1] = &unknown_var_720_ptr;
  param_1[0x2d6] = &unknown_var_720_ptr;
  FUN_1808fc8a8(param_1 + 0x2cf,8,7,FUN_180045af0);
  param_1[0x2c3] = &unknown_var_720_ptr;
  FUN_180242610();
  FUN_180170900(param_1 + 0x1d);
  FUN_180057830();
  *param_1 = &unknown_var_8584_ptr;
  param_1[2] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}






// 函数: void FUN_180242610(ulonglong *param_1)
void FUN_180242610(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xc) {
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_180242670(ulonglong *param_1)
void FUN_180242670(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xc) {
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
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
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



uint64_t *
FUN_1802426e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xf;
  strcpy_s(param_2[1],0x80,&unknown_var_9280_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180242760(void)
void FUN_180242760(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong lVar6;
  int32_t uVar7;
  int8_t auStack_f8 [32];
  longlong *plStack_d8;
  int32_t uStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  uint64_t uStack_b8;
  longlong **pplStack_b0;
  uint64_t uStack_a8;
  uint64_t *puStack_a0;
  longlong alStack_98 [2];
  int16_t uStack_88;
  int8_t uStack_86;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  uint64_t uStack_44;
  int32_t uStack_3c;
  int16_t uStack_38;
  int32_t uStack_36;
  int8_t uStack_32;
  ulonglong uStack_28;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
  plVar4 = (longlong *)FUN_180244ff0();
  lVar1 = plVar4[0x65];
  if (*(int *)((longlong)plVar4 + 0x324) == 1) {
    uVar5 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
    lVar6 = *(longlong *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x1d8);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    FUN_18029ad30(uVar5,0,lVar6);
    lVar6 = _DAT_180c86938;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar6 + 0x1cd8),1);
    puStack_a0 = &uStack_b8;
    uStack_b8 = 0;
    pplStack_b0 = &plStack_c8;
    plStack_c8 = plVar4;
    uVar7 = (**(code **)(*plVar4 + 0x28))(plVar4);
    FUN_1800e44b0(uVar7,&plStack_c0,&plStack_c8,&uStack_b8);
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    uStack_88 = 0;
    uStack_86 = 3;
    uStack_36 = 0;
    uStack_44 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_32 = 0;
    uStack_84 = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    uStack_64 = 0;
    uStack_5c = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uVar5 = FUN_18023a940(plStack_c0);
    cVar3 = FUN_1800a5fc0(_DAT_180c86938,uVar5,alStack_98);
    if (cVar3 != '\0') {
      pplStack_b0 = &plStack_c8;
      plStack_c8 = plVar4;
      uVar7 = (**(code **)(*plVar4 + 0x28))(plVar4);
      FUN_1802435e0(uVar7,&plStack_c8);
      FUN_18023b050(plVar4,0);
      lVar6 = plVar4[0x3d];
      uStack_44 = CONCAT44(uStack_44._4_4_ | *(uint *)(plVar4 + 0x65),(int32_t)uStack_44);
      plStack_d8 = plVar4;
      uStack_d0 = (int)lVar6;
      cVar3 = FUN_1800a5810(_DAT_180c86938,alStack_98,1);
      if (cVar3 == '\0') {
        uVar5 = FUN_1800c0100();
        plStack_d8 = plVar4;
        uStack_d0 = (int)lVar6;
        FUN_1800a5810(_DAT_180c86938,uVar5,1);
      }
      uVar5 = *(uint64_t *)((longlong)plStack_c0 + 0x2ec);
      *(uint64_t *)((longlong)plVar4 + 0x2e4) = *(uint64_t *)((longlong)plStack_c0 + 0x2e4);
      *(uint64_t *)((longlong)plVar4 + 0x2ec) = uVar5;
      uVar5 = *(uint64_t *)((longlong)plStack_c0 + 0x2fc);
      *(uint64_t *)((longlong)plVar4 + 0x2f4) = *(uint64_t *)((longlong)plStack_c0 + 0x2f4);
      *(uint64_t *)((longlong)plVar4 + 0x2fc) = uVar5;
      uVar5 = *(uint64_t *)((longlong)plStack_c0 + 0x30c);
      *(uint64_t *)((longlong)plVar4 + 0x304) = *(uint64_t *)((longlong)plStack_c0 + 0x304);
      *(uint64_t *)((longlong)plVar4 + 0x30c) = uVar5;
      uVar5 = *(uint64_t *)((longlong)plStack_c0 + 0x31c);
      *(uint64_t *)((longlong)plVar4 + 0x314) = *(uint64_t *)((longlong)plStack_c0 + 0x314);
      *(uint64_t *)((longlong)plVar4 + 0x31c) = uVar5;
      lVar6 = plStack_c0[0x65];
      uVar7 = *(int32_t *)((longlong)plStack_c0 + 0x32c);
      lVar2 = plStack_c0[0x66];
      *(int32_t *)((longlong)plVar4 + 0x324) = *(int32_t *)((longlong)plStack_c0 + 0x324);
      *(int *)(plVar4 + 0x65) = (int)lVar6;
      *(int32_t *)((longlong)plVar4 + 0x32c) = uVar7;
      *(int *)(plVar4 + 0x66) = (int)lVar2;
      *(uint64_t *)((longlong)plVar4 + 0x334) = *(uint64_t *)((longlong)plStack_c0 + 0x334);
      *(int *)(plVar4 + 0x65) = (int)lVar1;
    }
    if (uStack_88._1_1_ == '\0') {
      if (((char)uStack_88 == '\0') && (alStack_98[0] != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      alStack_98[0] = 0;
      alStack_98[1] = 0;
      uStack_88 = 0;
    }
    if (plStack_c0 != (longlong *)0x0) {
      (**(code **)(*plStack_c0 + 0x38))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_f8);
}



uint64_t *
FUN_180242a00(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_9328_ptr;
  FUN_180303590();
  if ((param_2 & 1) != 0) {
    free(param_1,0x8b0,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t *
FUN_180242a50(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  longlong lVar2;
  int32_t uVar3;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x11,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (int32_t *)param_2[1];
  *puVar1 = 0x546c6772;
  puVar1[1] = 0x656c6261;
  puVar1[2] = 0x765f7561;
  puVar1[3] = 0x3a776569;
  *(int16_t *)(puVar1 + 4) = 0x3a;
  *(int32_t *)(param_2 + 2) = 0x11;
  uVar3 = 1;
  lVar2 = *(longlong *)(param_1 + 0x6d0);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x4e8))) {
    FUN_1806277c0(param_2,*(int *)(param_2 + 2) + *(int *)(lVar2 + 0x4e8));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],*(uint64_t *)(lVar2 + 0x4e0),
           (longlong)(*(int *)(lVar2 + 0x4e8) + 1),param_4,uVar3);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180242b30(longlong *param_1,uint64_t param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int16_t uStack_a8;
  int8_t uStack_a6;
  int32_t uStack_a4;
  int8_t uStack_a0;
  uint64_t uStack_98;
  longlong lStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int8_t auStack_60 [56];
  
  uStack_68 = 0xfffffffffffffffe;
  lVar5 = 0;
  lVar6 = 0;
  FUN_180242e60();
  if ((void *)*param_1 != &unknown_var_9328_ptr) {
    (**(code **)((void *)*param_1 + 0x60))(param_1);
  }
  if (*(int *)(_DAT_180c86910 + 4) < 1) {
    if ((int)param_1[0x112] == 3) {
      FUN_180243550(auStack_60,param_1 + 0x115);
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0xffffffff;
      uStack_a8 = 1;
      uStack_a6 = 0;
      uStack_a4 = 0xffffffff;
      uStack_a0 = 1;
      uStack_98 = 0;
      lStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 3;
      uStack_70 = 0;
      iVar3 = FUN_1801a3620(param_1[0xda],&uStack_b8);
      cVar1 = *(char *)((longlong)param_1 + 0x889);
      if ((cVar1 == '\0') && (iVar3 != 0)) {
        *(int32_t *)(param_1 + 0x112) = 2;
      }
      else {
        lVar5 = param_1[0xda];
        iVar3 = *(int *)(lVar5 + 0x27c0);
        if (cVar1 != '\0') {
          *(int32_t *)(lVar5 + 0x27c0) = 7;
          lVar5 = param_1[0xda];
        }
        *(int8_t *)((longlong)param_1 + 0x821) = 1;
        *(int8_t *)(lVar5 + 0x60b91) = 1;
        lVar5 = FUN_180302370(param_1,param_2);
        if (((*(char *)((longlong)param_1 + 0x889) == '\0') &&
            (*(int *)(_DAT_180c8a9c8 + 0x460) == 0)) &&
           (*(char *)((longlong)param_1 + 0x88d) != '\0')) {
          *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x80000;
        }
        *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x20004000;
        *(int32_t *)(lVar5 + 0x9a2c) = 0xfffff448;
        if ((void *)*param_1 == &unknown_var_9328_ptr) {
          lVar6 = param_1[0x110];
        }
        else {
          lVar6 = (**(code **)((void *)*param_1 + 0x60))(param_1);
        }
        *(uint *)(lVar6 + 0x36c) = 2 - (uint)(*(char *)((longlong)param_1 + 0x889) != '\0');
        if (cVar1 != '\0' || 6 < iVar3) {
          bVar7 = *(char *)((longlong)param_1 + 0x889) != '\0';
          uVar4 = 4;
          if (bVar7) {
            uVar4 = 0;
          }
          *(int32_t *)(param_1 + 0x112) = uVar4;
          if (!bVar7) {
            if (*(code **)(lVar5 + 0x9620) != (code *)0x0) {
              (**(code **)(lVar5 + 0x9620))(lVar5 + 0x9610,0,0);
            }
            *(void **)(lVar5 + 0x9620) = &unknown_var_7024_ptr;
            *(void **)(lVar5 + 0x9628) = &unknown_var_7008_ptr;
            *(code **)(lVar5 + 0x9610) = FUN_180242760;
          }
          if (*(char *)((longlong)param_1 + 0x889) == '\0') {
            *(int *)(_DAT_180c86910 + 4) = *(int *)(_DAT_180c86910 + 4) + 1;
          }
        }
      }
      if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      FUN_1801ec3f0(auStack_60);
    }
    else if (((((int)param_1[0x112] == 4) && (lVar5 = lVar6, param_1[0xda] != 0)) &&
             ((char)param_1[0x111] != '\0')) && (*(char *)((longlong)param_1 + 0x889) == '\0')) {
      FUN_180304100(param_1,1,0,0);
      FUN_180301f30(param_1,0);
      *(int8_t *)((longlong)param_1 + 0xdd) = 0;
      (**(code **)(*param_1 + 0xc0))(param_1);
      lVar6 = param_1[0x110];
      if ((*(int *)(lVar6 + 0x3ac) != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))();
      }
      *(int32_t *)(lVar6 + 0x3ac) = 0;
      plVar2 = *(longlong **)(param_1[0x110] + 0x370);
      *(uint64_t *)(param_1[0x110] + 0x370) = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
    }
    param_1[0xa3] = 0;
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




