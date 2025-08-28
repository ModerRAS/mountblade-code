/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part076.c - 5 个函数
// 函数: void function_241a50(int64_t *param_1,int64_t param_2,int64_t param_3)
void function_241a50(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  lVar8 = param_3 - param_2;
  lVar5 = lVar8 / 6 + (lVar8 >> 0x3f);
  uVar6 = (lVar5 >> 4) - (lVar5 >> 0x3f);
  lVar5 = *param_1;
  if ((uint64_t)((param_1[2] - lVar5) / 0x60) < uVar6) {
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 * 0x60,(char)param_1[3]);
    }
    function_241e30(param_2,param_3,lVar5);
    puVar1 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
    if (puVar4 != puVar1) {
      do {
        *puVar4 = &system_state_ptr;
        puVar4 = puVar4 + 0xc;
      } while (puVar4 != puVar1);
      puVar4 = (uint64_t *)*param_1;
    }
    if (puVar4 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
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
      function_241d70(param_2,lVar7,lVar5,lVar8,0xfffffffffffffffe);
      lVar5 = function_241e30(lVar7,param_3,param_1[1]);
      param_1[1] = lVar5;
    }
    else {
      puVar3 = (uint64_t *)function_241d70(param_2,param_3,lVar5,lVar8,0xfffffffffffffffe);
      puVar1 = (uint64_t *)param_1[1];
      for (puVar4 = puVar3; puVar4 != puVar1; puVar4 = puVar4 + 0xc) {
        *puVar4 = &system_state_ptr;
      }
      param_1[1] = (int64_t)puVar3;
    }
  }
  return;
}
int64_t function_241bf0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  void *puVar4;
  lVar1 = (param_2 - param_1) / 0x26 + (param_2 - param_1 >> 0x3f);
  lVar1 = (lVar1 >> 2) - (lVar1 >> 0x3f);
  if (0 < lVar1) {
    puVar2 = (uint64_t *)(param_1 + 8);
    lVar3 = lVar1 * 0x98;
    do {
      *(int32_t *)((param_3 - param_1) + 8 + (int64_t)puVar2) = *(int32_t *)(puVar2 + 1);
      puVar4 = &system_buffer_ptr;
      if ((void *)*puVar2 != (void *)0x0) {
        puVar4 = (void *)*puVar2;
      }
      strcpy_s(*(uint64_t *)((param_3 - param_1) + (int64_t)puVar2),0x80,puVar4);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 0x13;
    } while (0 < lVar1);
    return lVar3 + param_3;
  }
  return param_3;
}
int64_t function_241c1c(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t unaff_RDI;
  void *puVar3;
  puVar1 = (uint64_t *)(param_1 + 8);
  lVar2 = unaff_RDI * 0x98;
  do {
    *(int32_t *)((param_3 - param_1) + 8 + (int64_t)puVar1) = *(int32_t *)(puVar1 + 1);
    puVar3 = &system_buffer_ptr;
    if ((void *)*puVar1 != (void *)0x0) {
      puVar3 = (void *)*puVar1;
    }
    strcpy_s(*(uint64_t *)((param_3 - param_1) + (int64_t)puVar1),0x80,puVar3);
    unaff_RDI = unaff_RDI + -1;
    puVar1 = puVar1 + 0x13;
  } while (0 < unaff_RDI);
  return lVar2 + param_3;
}
uint64_t function_241c8e(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  return param_3;
}
uint64_t * function_241ca0(int64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4)
{
  void *puVar1;
  void *puVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    param_1 = param_1 - (int64_t)param_3;
    do {
      *param_3 = &system_state_ptr;
      param_3[1] = 0;
      *(int32_t *)(param_3 + 2) = 0;
      *param_3 = &memory_allocator_3432_ptr;
      param_3[1] = param_3 + 3;
      *(int32_t *)(param_3 + 2) = 0;
      *(int8_t *)(param_3 + 3) = 0;
      *(int32_t *)(param_3 + 2) = *(int32_t *)(param_1 + 0x10 + (int64_t)param_3);
      puVar1 = *(void **)(param_1 + 8 + (int64_t)param_3);
      puVar2 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar2 = puVar1;
      }
      strcpy_s(param_3[1],0x80,puVar2,param_4,uVar3);
      param_3 = param_3 + 0x13;
    } while (param_1 + (int64_t)param_3 != param_2);
  }
  return param_3;
}
int64_t function_241d70(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  void *puVar4;
  lVar1 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  lVar1 = (lVar1 >> 4) - (lVar1 >> 0x3f);
  if (0 < lVar1) {
    puVar2 = (uint64_t *)(param_1 + 8);
    param_1 = param_3 - param_1;
    lVar3 = lVar1 * 0x60;
    do {
      *(int32_t *)(param_1 + 8 + (int64_t)puVar2) = *(int32_t *)(puVar2 + 1);
      puVar4 = &system_buffer_ptr;
      if ((void *)*puVar2 != (void *)0x0) {
        puVar4 = (void *)*puVar2;
      }
      strcpy_s(*(uint64_t *)(param_1 + (int64_t)puVar2),0x40,puVar4);
      lVar1 = lVar1 + -1;
      *(int32_t *)(param_1 + 0x50 + (int64_t)puVar2) = *(int32_t *)(puVar2 + 10);
      *(int32_t *)(param_1 + 0x54 + (int64_t)puVar2) = *(int32_t *)((int64_t)puVar2 + 0x54);
      puVar2 = puVar2 + 0xc;
    } while (0 < lVar1);
    return lVar3 + param_3;
  }
  return param_3;
}
int64_t function_241d9c(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t unaff_RDI;
  void *puVar3;
  puVar1 = (uint64_t *)(param_1 + 8);
  param_1 = param_3 - param_1;
  lVar2 = unaff_RDI * 0x60;
  do {
    *(int32_t *)(param_1 + 8 + (int64_t)puVar1) = *(int32_t *)(puVar1 + 1);
    puVar3 = &system_buffer_ptr;
    if ((void *)*puVar1 != (void *)0x0) {
      puVar3 = (void *)*puVar1;
    }
    strcpy_s(*(uint64_t *)(param_1 + (int64_t)puVar1),0x40,puVar3);
    unaff_RDI = unaff_RDI + -1;
    *(int32_t *)(param_1 + 0x50 + (int64_t)puVar1) = *(int32_t *)(puVar1 + 10);
    *(int32_t *)(param_1 + 0x54 + (int64_t)puVar1) = *(int32_t *)((int64_t)puVar1 + 0x54);
    puVar1 = puVar1 + 0xc;
  } while (0 < unaff_RDI);
  return lVar2 + param_3;
}
uint64_t function_241e19(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  return param_3;
}
uint64_t *
function_241e30(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int8_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t uVar6;
  uVar6 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    lVar3 = (int64_t)param_3 - (int64_t)param_1;
    puVar4 = param_1 + 1;
    do {
      *param_3 = &system_state_ptr;
      *(uint64_t *)(lVar3 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar3 + 8 + (int64_t)puVar4) = 0;
      *param_3 = &memory_allocator_3480_ptr;
      puVar2 = (int8_t *)(lVar3 + 0x10 + (int64_t)puVar4);
      *(int8_t **)(lVar3 + (int64_t)puVar4) = puVar2;
      *(int32_t *)(lVar3 + 8 + (int64_t)puVar4) = 0;
      *puVar2 = 0;
      *(int32_t *)(lVar3 + 8 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 1);
      puVar5 = &system_buffer_ptr;
      if ((void *)*puVar4 != (void *)0x0) {
        puVar5 = (void *)*puVar4;
      }
      strcpy_s(*(uint64_t *)(lVar3 + (int64_t)puVar4),0x40,puVar5,param_4,uVar6);
      *(int32_t *)(lVar3 + 0x50 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 10);
      *(int32_t *)(lVar3 + 0x54 + (int64_t)puVar4) = *(int32_t *)((int64_t)puVar4 + 0x54);
      param_3 = param_3 + 0xc;
      puVar1 = puVar4 + 0xb;
      puVar4 = puVar4 + 0xc;
    } while (puVar1 != param_2);
  }
  return param_3;
}
int64_t * function_241f10(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  *param_1 = (int64_t)&system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (int64_t)&system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  param_1[8] = (int64_t)&system_state_ptr;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[8] = (int64_t)&memory_allocator_3432_ptr;
  param_1[9] = (int64_t)(param_1 + 0xb);
  *(int32_t *)(param_1 + 10) = 0;
  *(int8_t *)(param_1 + 0xb) = 0;
  plVar6 = param_1 + 0x1c;
  *plVar6 = (int64_t)&system_state_ptr;
  param_1[0x1d] = 0;
  *(int32_t *)(param_1 + 0x1e) = 0;
  *plVar6 = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x1d] = (int64_t)(param_1 + 0x1f);
  *(int32_t *)(param_1 + 0x1e) = 0;
  *(int8_t *)(param_1 + 0x1f) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(int32_t *)(param_1 + 0x32) = 3;
  plVar3 = param_1 + 0x33;
  lVar5 = 5;
  DataStructureManager(plVar3,0x98,5,function_049970,CoreSystem_MessageHandler);
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(int32_t *)(param_1 + 0x95) = 3;
  DataStructureManager(param_1 + 0x96,0x58,0x10,function_049cd0,CoreSystem_MessageHandler);
  plVar4 = param_1 + 0x146;
  lVar8 = 9;
  DataStructureManager(plVar4,0x98,9,function_049970,CoreSystem_MessageHandler);
  plVar1 = param_1 + 0x1f1;
  *plVar1 = (int64_t)&system_state_ptr;
  param_1[0x1f2] = 0;
  *(int32_t *)(param_1 + 499) = 0;
  *plVar1 = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x1f2] = (int64_t)(param_1 + 500);
  *(int32_t *)(param_1 + 499) = 0;
  *(int8_t *)(param_1 + 500) = 0;
  param_1[0x204] = (int64_t)&system_state_ptr;
  param_1[0x205] = 0;
  *(int32_t *)(param_1 + 0x206) = 0;
  param_1[0x204] = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x205] = (int64_t)(param_1 + 0x207);
  *(int32_t *)(param_1 + 0x206) = 0;
  *(int8_t *)(param_1 + 0x207) = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  *(int32_t *)(param_1 + 0x21a) = 3;
  plVar2 = param_1 + 0x21b;
  *plVar2 = (int64_t)&system_state_ptr;
  param_1[0x21c] = 0;
  *(int32_t *)(param_1 + 0x21d) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  param_1[0x21e] = 0;
  param_1[0x21c] = 0;
  *(int32_t *)(param_1 + 0x21d) = 0;
  param_1[0x220] = (int64_t)&system_state_ptr;
  param_1[0x221] = 0;
  *(int32_t *)(param_1 + 0x222) = 0;
  param_1[0x220] = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x221] = (int64_t)(param_1 + 0x223);
  *(int32_t *)(param_1 + 0x222) = 0;
  *(int8_t *)(param_1 + 0x223) = 0;
  param_1[0x233] = (int64_t)&system_state_ptr;
  param_1[0x234] = 0;
  *(int32_t *)(param_1 + 0x235) = 0;
  param_1[0x233] = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x234] = (int64_t)(param_1 + 0x236);
  *(int32_t *)(param_1 + 0x235) = 0;
  *(int8_t *)(param_1 + 0x236) = 0;
  param_1[0x246] = (int64_t)&system_state_ptr;
  param_1[0x247] = 0;
  *(int32_t *)(param_1 + 0x248) = 0;
  param_1[0x246] = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x247] = (int64_t)(param_1 + 0x249);
  *(int32_t *)(param_1 + 0x248) = 0;
  *(int8_t *)(param_1 + 0x249) = 0;
  param_1[0x259] = (int64_t)&system_state_ptr;
  param_1[0x25a] = 0;
  *(int32_t *)(param_1 + 0x25b) = 0;
  param_1[0x259] = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x25a] = (int64_t)(param_1 + 0x25c);
  *(int32_t *)(param_1 + 0x25b) = 0;
  *(int8_t *)(param_1 + 0x25c) = 0;
  param_1[0x26c] = (int64_t)&system_state_ptr;
  param_1[0x26d] = 0;
  *(int32_t *)(param_1 + 0x26e) = 0;
  param_1[0x26c] = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x26d] = (int64_t)(param_1 + 0x26f);
  *(int32_t *)(param_1 + 0x26e) = 0;
  *(int8_t *)(param_1 + 0x26f) = 0;
  param_1[0x27f] = (int64_t)&system_state_ptr;
  param_1[0x280] = 0;
  *(int32_t *)(param_1 + 0x281) = 0;
  param_1[0x27f] = (int64_t)&memory_allocator_3432_ptr;
  param_1[0x280] = (int64_t)(param_1 + 0x282);
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
  *(int32_t *)((int64_t)param_1 + 0xdc) = 0;
  return param_1;
}
uint64_t function_2423b0(uint64_t param_1,uint64_t param_2)
{
  function_2423f0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2210);
  }
  return param_1;
}
// 函数: void function_2423f0(uint64_t *param_1)
void function_2423f0(uint64_t *param_1)
{
  *param_1 = &processed_var_9168_ptr;
  param_1[0x2b7] = 0;
  if (param_1[0x43e] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  DataTransformer0();
  function_057170();
  SystemDataValidator(param_1 + 0x386,0x58,0x10,CoreSystem_MessageHandler);
  param_1[0x37b] = &system_state_ptr;
  param_1[0x370] = &system_state_ptr;
  param_1[0x365] = &system_state_ptr;
  param_1[0x35a] = &system_state_ptr;
  param_1[0x34f] = &system_state_ptr;
  param_1[0x344] = &system_state_ptr;
  param_1[0x339] = &system_state_ptr;
  param_1[0x32e] = &system_state_ptr;
  param_1[0x323] = &system_state_ptr;
  param_1[0x318] = &system_state_ptr;
  param_1[0x30d] = &system_state_ptr;
  param_1[0x302] = &system_state_ptr;
  param_1[0x2f7] = &system_state_ptr;
  param_1[0x2ec] = &system_state_ptr;
  param_1[0x2e1] = &system_state_ptr;
  param_1[0x2d6] = &system_state_ptr;
  SystemDataValidator(param_1 + 0x2cf,8,7,DataCacheManager);
  param_1[0x2c3] = &system_state_ptr;
  function_242610();
  function_170900(param_1 + 0x1d);
  DataTransformer0();
  *param_1 = &processed_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
// 函数: void function_242610(uint64_t *param_1)
void function_242610(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xc) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_242670(uint64_t *param_1)
void function_242670(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xc) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
uint64_t *
function_2426e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xf;
  strcpy_s(param_2[1],0x80,&processed_var_9280_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_242760(void)
void function_242760(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int32_t uVar7;
  int8_t stack_array_f8 [32];
  int64_t *plStack_d8;
  int32_t local_var_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  uint64_t local_var_b8;
  int64_t **pplStack_b0;
  uint64_t local_var_a8;
  uint64_t *plocal_var_a0;
  int64_t alStack_98 [2];
  int16_t local_var_88;
  int8_t local_var_86;
  uint64_t local_var_84;
  uint64_t local_var_7c;
  uint64_t local_var_74;
  uint64_t local_var_6c;
  uint64_t local_var_64;
  uint64_t local_var_5c;
  uint64_t local_var_54;
  uint64_t local_var_4c;
  uint64_t local_var_44;
  int32_t local_var_3c;
  int16_t local_var_38;
  int32_t local_var_36;
  int8_t local_var_32;
  uint64_t local_var_28;
  local_var_a8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  plVar4 = (int64_t *)SystemOptimizer();
  lVar1 = plVar4[0x65];
  if (*(int *)((int64_t)plVar4 + 0x324) == 1) {
    uVar5 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar6 = *(int64_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x1d8);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x340) =
           (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    SystemCore_MemoryManager(uVar5,0,lVar6);
    lVar6 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar6 + 0x1cd8),1);
    plocal_var_a0 = &local_var_b8;
    local_var_b8 = 0;
    pplStack_b0 = &plStack_c8;
    plStack_c8 = plVar4;
    uVar7 = (**(code **)(*plVar4 + 0x28))(plVar4);
    function_0e44b0(uVar7,&plStack_c0,&plStack_c8,&local_var_b8);
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    local_var_88 = 0;
    local_var_86 = 3;
    local_var_36 = 0;
    local_var_44 = 0;
    local_var_3c = 0;
    local_var_38 = 0;
    local_var_32 = 0;
    local_var_84 = 0;
    local_var_7c = 0;
    local_var_74 = 0;
    local_var_6c = 0;
    local_var_64 = 0;
    local_var_5c = 0;
    local_var_54 = 0;
    local_var_4c = 0;
    uVar5 = SystemCore_Scheduler(plStack_c0);
    cVar3 = function_0a5fc0(system_message_buffer,uVar5,alStack_98);
    if (cVar3 != '\0') {
      pplStack_b0 = &plStack_c8;
      plStack_c8 = plVar4;
      uVar7 = (**(code **)(*plVar4 + 0x28))(plVar4);
      function_2435e0(uVar7,&plStack_c8);
      SystemCore_NetworkHandler(plVar4,0);
      lVar6 = plVar4[0x3d];
      local_var_44 = CONCAT44(local_var_44._4_4_ | *(uint *)(plVar4 + 0x65),(int32_t)local_var_44);
      plStack_d8 = plVar4;
      local_var_d0 = (int)lVar6;
      cVar3 = function_0a5810(system_message_buffer,alStack_98,1);
      if (cVar3 == '\0') {
        uVar5 = function_0c0100();
        plStack_d8 = plVar4;
        local_var_d0 = (int)lVar6;
        function_0a5810(system_message_buffer,uVar5,1);
      }
      uVar5 = *(uint64_t *)((int64_t)plStack_c0 + 0x2ec);
      *(uint64_t *)((int64_t)plVar4 + 0x2e4) = *(uint64_t *)((int64_t)plStack_c0 + 0x2e4);
      *(uint64_t *)((int64_t)plVar4 + 0x2ec) = uVar5;
      uVar5 = *(uint64_t *)((int64_t)plStack_c0 + 0x2fc);
      *(uint64_t *)((int64_t)plVar4 + 0x2f4) = *(uint64_t *)((int64_t)plStack_c0 + 0x2f4);
      *(uint64_t *)((int64_t)plVar4 + 0x2fc) = uVar5;
      uVar5 = *(uint64_t *)((int64_t)plStack_c0 + 0x30c);
      *(uint64_t *)((int64_t)plVar4 + 0x304) = *(uint64_t *)((int64_t)plStack_c0 + 0x304);
      *(uint64_t *)((int64_t)plVar4 + 0x30c) = uVar5;
      uVar5 = *(uint64_t *)((int64_t)plStack_c0 + 0x31c);
      *(uint64_t *)((int64_t)plVar4 + 0x314) = *(uint64_t *)((int64_t)plStack_c0 + 0x314);
      *(uint64_t *)((int64_t)plVar4 + 0x31c) = uVar5;
      lVar6 = plStack_c0[0x65];
      uVar7 = *(int32_t *)((int64_t)plStack_c0 + 0x32c);
      lVar2 = plStack_c0[0x66];
      *(int32_t *)((int64_t)plVar4 + 0x324) = *(int32_t *)((int64_t)plStack_c0 + 0x324);
      *(int *)(plVar4 + 0x65) = (int)lVar6;
      *(int32_t *)((int64_t)plVar4 + 0x32c) = uVar7;
      *(int *)(plVar4 + 0x66) = (int)lVar2;
      *(uint64_t *)((int64_t)plVar4 + 0x334) = *(uint64_t *)((int64_t)plStack_c0 + 0x334);
      *(int *)(plVar4 + 0x65) = (int)lVar1;
    }
    if (local_var_88._1_1_ == '\0') {
      if (((char)local_var_88 == '\0') && (alStack_98[0] != 0)) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      alStack_98[0] = 0;
      alStack_98[1] = 0;
      local_var_88 = 0;
    }
    if (plStack_c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_c0 + 0x38))();
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_f8);
}
uint64_t *
function_242a00(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_9328_ptr;
  function_303590();
  if ((param_2 & 1) != 0) {
    free(param_1,0x8b0,param_3,param_4,uVar1);
  }
  return param_1;
}
uint64_t *
function_242a50(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0x11,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (int32_t *)param_2[1];
  *puVar1 = 0x546c6772;
  puVar1[1] = 0x656c6261;
  puVar1[2] = 0x765f7561;
  puVar1[3] = 0x3a776569;
  *(int16_t *)(puVar1 + 4) = 0x3a;
  *(int32_t *)(param_2 + 2) = 0x11;
  uVar3 = 1;
  lVar2 = *(int64_t *)(param_1 + 0x6d0);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x4e8))) {
    CoreEngineDataBufferProcessor(param_2,*(int *)(param_2 + 2) + *(int *)(lVar2 + 0x4e8));
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],*(uint64_t *)(lVar2 + 0x4e0),
           (int64_t)(*(int *)(lVar2 + 0x4e8) + 1),param_4,uVar3);
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_242b30(int64_t *param_1,uint64_t param_2)
{
  char cVar1;
  int64_t *plVar2;
  int iVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int16_t local_var_a8;
  int8_t local_var_a6;
  int32_t local_var_a4;
  int8_t local_var_a0;
  uint64_t local_var_98;
  int64_t lStack_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  int8_t stack_array_60 [56];
  local_var_68 = 0xfffffffffffffffe;
  lVar5 = 0;
  lVar6 = 0;
  function_242e60();
  if ((void *)*param_1 != &processed_var_9328_ptr) {
    (**(code **)((void *)*param_1 + 0x60))(param_1);
  }
  if (*(int *)(system_system_data_config + 4) < 1) {
    if ((int)param_1[0x112] == 3) {
      function_243550(stack_array_60,param_1 + 0x115);
      local_var_b8 = 0;
      local_var_b0 = 0;
      local_var_ac = 0xffffffff;
      local_var_a8 = 1;
      local_var_a6 = 0;
      local_var_a4 = 0xffffffff;
      local_var_a0 = 1;
      local_var_98 = 0;
      lStack_90 = 0;
      local_var_88 = 0;
      local_var_80 = 0;
      local_var_78 = 3;
      local_var_70 = 0;
      iVar3 = function_1a3620(param_1[0xda],&local_var_b8);
      cVar1 = *(char *)((int64_t)param_1 + 0x889);
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
        *(int8_t *)((int64_t)param_1 + 0x821) = 1;
        *(int8_t *)(lVar5 + 0x60b91) = 1;
        lVar5 = function_302370(param_1,param_2);
        if (((*(char *)((int64_t)param_1 + 0x889) == '\0') &&
            (*(int *)(system_system_data_config + 0x460) == 0)) &&
           (*(char *)((int64_t)param_1 + 0x88d) != '\0')) {
          *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x80000;
        }
        *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x20004000;
        *(int32_t *)(lVar5 + 0x9a2c) = 0xfffff448;
        if ((void *)*param_1 == &processed_var_9328_ptr) {
          lVar6 = param_1[0x110];
        }
        else {
          lVar6 = (**(code **)((void *)*param_1 + 0x60))(param_1);
        }
        *(uint *)(lVar6 + 0x36c) = 2 - (uint)(*(char *)((int64_t)param_1 + 0x889) != '\0');
        if (cVar1 != '\0' || 6 < iVar3) {
          bVar7 = *(char *)((int64_t)param_1 + 0x889) != '\0';
          uVar4 = 4;
          if (bVar7) {
            uVar4 = 0;
          }
          *(int32_t *)(param_1 + 0x112) = uVar4;
          if (!bVar7) {
            if (*(code **)(lVar5 + 0x9620) != (code *)0x0) {
              (**(code **)(lVar5 + 0x9620))(lVar5 + 0x9610,0,0);
            }
            *(void **)(lVar5 + 0x9620) = &processed_var_7024_ptr;
            *(void **)(lVar5 + 0x9628) = &processed_var_7008_ptr;
            *(code **)(lVar5 + 0x9610) = function_242760;
          }
          if (*(char *)((int64_t)param_1 + 0x889) == '\0') {
            *(int *)(system_system_data_config + 4) = *(int *)(system_system_data_config + 4) + 1;
          }
        }
      }
      if (lStack_90 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      function_1ec3f0(stack_array_60);
    }
    else if (((((int)param_1[0x112] == 4) && (lVar5 = lVar6, param_1[0xda] != 0)) &&
             ((char)param_1[0x111] != '\0')) && (*(char *)((int64_t)param_1 + 0x889) == '\0')) {
      function_304100(param_1,1,0,0);
      function_301f30(param_1,0);
      *(int8_t *)((int64_t)param_1 + 0xdd) = 0;
      (**(code **)(*param_1 + 0xc0))(param_1);
      lVar6 = param_1[0x110];
      if ((*(int *)(lVar6 + 0x3ac) != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))();
      }
      *(int32_t *)(lVar6 + 0x3ac) = 0;
      plVar2 = *(int64_t **)(param_1[0x110] + 0x370);
      *(uint64_t *)(param_1[0x110] + 0x370) = 0;
      if (plVar2 != (int64_t *)0x0) {
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