#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part520.c - 30 个函数
// 函数: void function_54a310(int64_t param_1,uint64_t param_2)
void function_54a310(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  *(uint64_t *)(param_1 + 0x28) = param_2;
  iVar2 = (int)(*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xe0) + lVar3 * 8);
      (**(code **)(*plVar1 + 0x1e0))(plVar1,param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  lVar3 = *(int64_t *)(param_1 + 0x1a0);
  if (lVar3 != 0) {
    plVar1 = *(int64_t **)(lVar3 + 0x48);
    *(uint64_t *)(lVar3 + 0x28) = param_2;
    if (plVar1 != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x1e0))(plVar1,param_2);
      return;
    }
  }
  return;
}
// 函数: void function_54a32f(int64_t param_1)
void function_54a32f(int64_t param_1)
{
  int in_EAX;
  int64_t lVar1;
  uint64_t unaff_RSI;
  if (0 < in_EAX) {
    lVar1 = 0;
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0xe0) + lVar1 * 8) + 0x1e0))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < in_EAX);
  }
  lVar1 = *(int64_t *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    *(uint64_t *)(lVar1 + 0x28) = unaff_RSI;
    if (*(int64_t **)(lVar1 + 0x48) != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(**(int64_t **)(lVar1 + 0x48) + 0x1e0))();
      return;
    }
  }
  return;
}
// 函数: void function_54a343(void)
void function_54a343(void)
{
  int64_t lVar1;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = 0;
  do {
    (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0xe0) + lVar1 * 8) + 0x1e0))();
    lVar1 = lVar1 + 1;
  } while (lVar1 < unaff_RBP);
  lVar1 = *(int64_t *)(unaff_RDI + 0x1a0);
  if (lVar1 != 0) {
    *(uint64_t *)(lVar1 + 0x28) = unaff_RSI;
    if (*(int64_t **)(lVar1 + 0x48) != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(**(int64_t **)(lVar1 + 0x48) + 0x1e0))();
      return;
    }
  }
  return;
}
// 函数: void function_54a374(void)
void function_54a374(void)
{
  int64_t lVar1;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  lVar1 = *(int64_t *)(unaff_RDI + 0x1a0);
  if (lVar1 != 0) {
    *(uint64_t *)(lVar1 + 0x28) = unaff_RSI;
    if (*(int64_t **)(lVar1 + 0x48) != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(**(int64_t **)(lVar1 + 0x48) + 0x1e0))();
      return;
    }
  }
  return;
}
// 函数: void function_54a38a(void)
void function_54a38a(void)
{
  int64_t in_RAX;
  uint64_t unaff_RSI;
  *(uint64_t *)(in_RAX + 0x28) = unaff_RSI;
  if (*(int64_t **)(in_RAX + 0x48) != (int64_t *)0x0) {
// WARNING: Could not recover jumptable at 0x00018054a3a2. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(**(int64_t **)(in_RAX + 0x48) + 0x1e0))();
    return;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_54a3b0(int64_t param_1,uint64_t param_2,int32_t param_3)
void function_54a3b0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint astack_special_x_8 [2];
  int32_t astack_special_x_18 [2];
  int8_t astack_special_x_20 [8];
  lVar1 = *(int64_t *)(param_1 + 0x188);
  astack_special_x_18[0] = param_3;
  astack_special_x_8[0] = SystemFunction_0001804bb950(lVar1);
  puVar3 = (uint64_t *)0x180c95e98;
  puVar2 = render_system_config;
  while (puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < astack_special_x_8[0]) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (astack_special_x_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)PhysicsSystem_IntegrationProcessor(0x180c95e98,astack_special_x_20,0,puVar3,astack_special_x_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  function_4b2300(puVar3[5],param_2,lVar1 + 0x3c,astack_special_x_18);
  return;
}
// 函数: void function_54a450(int64_t param_1)
void function_54a450(int64_t param_1)
{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    if (*(int64_t *)(param_1 + 0x198) == 0) {
      *(int8_t *)(param_1 + 0xd0) = 0;
      return;
    }
    *(int8_t *)(*(int64_t *)(param_1 + 0x198) + 0xc0) = 0;
    if (*(char *)(*(int64_t *)(param_1 + 0x198) + 0xc1) == '\x01') {
      function_046190(param_1 + 0x30);
      *(int8_t *)(param_1 + 0xd0) = 0;
    }
  }
  return;
}
// 函数: void SystemCore_ResourceManager(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemCore_ResourceManager(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  uVar1 = param_1[1] - *param_1 >> 3;
  if (0 < (int)uVar1) {
    lVar2 = 0;
    uVar1 = uVar1 & 0xffffffff;
    do {
      (**(code **)(param_2 + 0x18))(*param_1 + lVar2,param_2);
      lVar2 = lVar2 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2,0,0,param_4,uVar3);
  }
  return;
}
// 函数: void function_54a540(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54a540(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x1b0))
            (plStackX_8,*(int32_t *)*param_2,*(code **)(*plStackX_8 + 0x1b0),param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54a5f0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54a5f0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int *piVar1;
  int iVar2;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*plStackX_8 + 0x1a8))(plStackX_8,param_2[1],param_3,param_4,uVar3);
  *piVar1 = *piVar1 + iVar2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54a6a0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54a6a0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x1a0))
            (plStackX_8,*(int8_t *)*param_2,*(code **)(*plStackX_8 + 0x1a0),param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54a750(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54a750(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 400))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54a800(int64_t *param_1,uint64_t *param_2)
void function_54a800(int64_t *param_1,uint64_t *param_2)
{
  int iVar1;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  iVar1 = (**(code **)(*plStackX_8 + 0x180))();
  *(int *)*param_2 = *(int *)*param_2 + iVar1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54a8b0(int64_t *param_1,uint64_t *param_2)
void function_54a8b0(int64_t *param_1,uint64_t *param_2)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x170))
            (plStackX_8,*param_2,*(int32_t *)param_2[1],*(code **)(*plStackX_8 + 0x170),uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54a960(int64_t *param_1,int64_t *param_2)
void function_54a960(int64_t *param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)*param_2;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x168))(plStackX_8,*puVar1,puVar1[1],puVar1[2],uVar2);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_54a9d0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  iVar4 = (int)param_3;
  if (iVar4 == 3) {
    return 0x180c0ad10;
  }
  if (iVar4 == 4) {
    return *param_1;
  }
  if (iVar4 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(*param_1,param_2,param_3,param_4,0xfffffffffffffffe);
    }
  }
  else {
    if (iVar4 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (iVar4 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// 函数: void function_54aab0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54aab0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  float *pfVar2;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  if (*(code **)(*plStackX_8 + 0x160) == (code *)&processed_var_6368_ptr) {
    SystemCore_UpdateState(plStackX_8,(int64_t)plStackX_8 + 0x214,0,param_4,uVar3);
  }
  else {
    (**(code **)(*plStackX_8 + 0x160))();
  }
  lVar1 = *param_2;
  if (*(code **)(*plStackX_8 + 0x198) == (code *)&rendering_buffer_2544_ptr) {
    pfVar2 = (float *)((int64_t)plStackX_8 + 0x214);
  }
  else {
    pfVar2 = (float *)(**(code **)(*plStackX_8 + 0x198))();
  }
  if (*pfVar2 <= pfVar2[4]) {
    SystemFunction_00018063a1e0(lVar1 + 0x120,pfVar2);
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54abc0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54abc0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x148))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54ac70(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54ac70(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x128))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54ad20(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54ad20(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x120))
            (plStackX_8,*(int32_t *)*param_2,*(code **)(*plStackX_8 + 0x120),param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54add0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54add0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x118))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54ae80(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54ae80(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x110))(plStackX_8,*(int32_t *)*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54af30(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54af30(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x108))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54afe0(int64_t *param_1,uint64_t *param_2)
void function_54afe0(int64_t *param_1,uint64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  uVar2 = 0;
  uVar3 = uVar2;
  if (plStackX_8[8] - plStackX_8[7] >> 4 != 0) {
    do {
      *(int8_t *)(*(int64_t *)(uVar3 + plStackX_8[7]) + 0xf5) = *(int8_t *)*param_2;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
      uVar3 = uVar3 + 0x10;
    } while ((uint64_t)(int64_t)(int)uVar1 < (uint64_t)(plStackX_8[8] - plStackX_8[7] >> 4));
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54b0d0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54b0d0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0x100))
            (plStackX_8,*(int8_t *)*param_2,*(code **)(*plStackX_8 + 0x100),param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54b180(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54b180(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0xf8))(plStackX_8,*param_2,param_3,param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54b230(int64_t *param_1)
void function_54b230(int64_t *param_1)
{
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  plStackX_10 = (int64_t *)*param_1;
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  pplStackX_18 = &plStackX_10;
  (**(code **)(*plStackX_10 + 0xd8))();
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  return;
}
// 函数: void function_54b2b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_54b2b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  plStackX_10 = (int64_t *)*param_1;
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x28))();
  }
  pplStackX_18 = &plStackX_10;
  (**(code **)(*plStackX_10 + 0x1e0))(plStackX_10,0,param_3,param_4,uVar1);
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  return;
}
// 函数: void function_54b330(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_54b330(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  (**(code **)(*plStackX_8 + 0xd0))
            (plStackX_8,*(int8_t *)*param_2,*(code **)(*plStackX_8 + 0xd0),param_4,uVar1);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54b3e0(int64_t *param_1,uint64_t *param_2)
void function_54b3e0(int64_t *param_1,uint64_t *param_2)
{
  char cVar1;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  if (*(code **)(*plStackX_8 + 0xc0) == (code *)&processed_var_9120_ptr) {
    cVar1 = (plStackX_8[8] - plStackX_8[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    cVar1 = (**(code **)(*plStackX_8 + 0xc0))();
  }
  if (cVar1 == '\0') {
    *(int8_t *)*param_2 = 0;
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// 函数: void function_54b4b0(int64_t *param_1,uint64_t *param_2)
void function_54b4b0(int64_t *param_1,uint64_t *param_2)
{
  int *piVar1;
  int iVar2;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  param_2 = (uint64_t *)*param_2;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStackX_18 = &plStackX_8;
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*plStackX_8 + 0xb8))
                    (plStackX_8,*(int32_t *)param_2[1],param_2[2],*(code **)(*plStackX_8 + 0xb8),
                     uVar3);
  *piVar1 = *piVar1 + iVar2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_54b530(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c0a9f0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
uint64_t *
function_54b610(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 9;
  strcpy_s(param_2[1],0x80,&system_data_4210,param_4,0,0xfffffffffffffffe);
  return param_2;
}
uint64_t * function_54b690(uint64_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  *param_1 = &processed_var_784_ptr;
  puVar1 = (uint64_t *)param_1[0xd5];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  param_1[0xd5] = 0;
  puVar1 = (uint64_t *)param_1[0xd6];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  param_1[0xd6] = 0;
  puVar1 = (uint64_t *)param_1[0xd7];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  param_1[0xd7] = 0;
  puVar1 = (uint64_t *)param_1[0xd8];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  param_1[0xd8] = 0;
  *param_1 = &processed_var_8496_ptr;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)((int64_t)param_1 + 0x8c) = 8;
  function_284720(param_1 + 0x12);
  function_33aa70(param_1 + 0x12);
  if ((param_2 & 1) != 0) {
    free(param_1,0x6d0);
  }
  return param_1;
}
uint64_t * function_54b820(uint64_t *param_1,int8_t param_2)
{
  function_320470();
  *param_1 = &processed_var_784_ptr;
  *(int32_t *)((int64_t)param_1 + 0x124) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xf4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xfc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x104) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x10c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x114) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x11c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x694) = 0x41c64e6d;
  *(int8_t *)(param_1 + 0xd3) = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(int32_t *)((int64_t)param_1 + 0x8c) = 6;
  *(int8_t *)(param_1 + 0xd9) = param_2;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address