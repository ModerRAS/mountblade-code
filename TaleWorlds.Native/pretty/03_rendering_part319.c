#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part319.c - 16 个函数
// 函数: void function_436fd0(int64_t param_1,float param_2,float param_3,float param_4,int32_t param_5)
void function_436fd0(int64_t param_1,float param_2,float param_3,float param_4,int32_t param_5)
{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  fVar6 = (float)tanf(param_2 * 0.5);
  fVar6 = (float)atanf(fVar6 * param_3);
  *(float *)(param_1 + 300) = fVar6 + fVar6;
  *(int8_t *)(param_1 + 0x110) = 1;
  *(int32_t *)(param_1 + 0x128) = param_5;
  *(float *)(param_1 + 0x124) = param_4;
  *(float *)(param_1 + 0x130) = param_3;
  fVar6 = (float)tanf((fVar6 + fVar6) * 0.5);
  fVar6 = fVar6 * param_4;
  *(float *)(param_1 + 0x118) = fVar6;
  *(float *)(param_1 + 0x114) = -fVar6;
  *(float *)(param_1 + 0x11c) = fVar6 / param_3;
  *(float *)(param_1 + 0x120) = -(fVar6 / param_3);
  if (*(char *)(param_1 + 0x110) == '\0') {
    fVar6 = *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0x90) = fVar6 * *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0x94) = fVar6 * *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0x98) = fVar6 * *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0x108);
    *(int32_t *)(param_1 + 0x9c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x120);
    *(float *)(param_1 + 0xb0) = fVar6 * *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0xb4) = fVar6 * *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0xb8) = fVar6 * *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0x108);
    *(int32_t *)(param_1 + 0xbc) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x118);
    *(float *)(param_1 + 0x70) = fVar6 * *(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0x74) = fVar6 * *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0x78) = fVar6 * *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0x108);
    *(int32_t *)(param_1 + 0x7c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x114);
    *(float *)(param_1 + 0x50) = fVar6 * *(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0x100);
    *(float *)(param_1 + 0x54) = fVar6 * *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0x58) = fVar6 * *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0x108);
    *(int32_t *)(param_1 + 0x5c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x128);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x100) - fVar6 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x104) - fVar6 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x108) - fVar6 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x3c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x100) - fVar6 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x104) - fVar6 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x108) - fVar6 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x1c) = 0x7f7fffff;
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xe0) ^ 0x80000000;
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xe4) ^ 0x80000000;
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xe8) ^ 0x80000000;
    *(int32_t *)(param_1 + 0xac) = 0x7f7fffff;
    *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xe0);
    *(uint64_t *)(param_1 + 200) = *(uint64_t *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0xd0) ^ 0x80000000;
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0xd4) ^ 0x80000000;
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0xd8) ^ 0x80000000;
    *(int32_t *)(param_1 + 0x8c) = 0x7f7fffff;
    *(uint64_t *)(param_1 + 0x60) = *(uint64_t *)(param_1 + 0xd0);
    *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0xd8);
    *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_1 + 0xf0);
    *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_1 + 0xf8);
    uVar3 = *(uint *)(param_1 + 0xf0);
    uVar4 = *(uint *)(param_1 + 0xf4);
    uVar5 = *(uint *)(param_1 + 0xf8);
  }
  else {
    *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 0x98) = *(uint64_t *)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0xb0) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 0x78) = *(uint64_t *)(param_1 + 0x108);
    *(uint64_t *)(param_1 + 0x50) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_1 + 0x108);
    fVar6 = *(float *)(param_1 + 0x124);
    fVar1 = *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0xa0) =
         -(fVar6 * *(float *)(param_1 + 0xe0)) - fVar1 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0xa4) =
         -(fVar6 * *(float *)(param_1 + 0xe4)) - fVar1 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0xa8) =
         -(fVar6 * *(float *)(param_1 + 0xe8)) - fVar1 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0xac) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    fVar1 = *(float *)(param_1 + 0x120);
    *(float *)(param_1 + 0xc0) =
         fVar1 * *(float *)(param_1 + 0xf0) + fVar6 * *(float *)(param_1 + 0xe0);
    *(float *)(param_1 + 0xc4) =
         fVar1 * *(float *)(param_1 + 0xf4) + fVar6 * *(float *)(param_1 + 0xe4);
    *(float *)(param_1 + 200) =
         fVar1 * *(float *)(param_1 + 0xf8) + fVar6 * *(float *)(param_1 + 0xe8);
    *(int32_t *)(param_1 + 0xcc) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    fVar1 = *(float *)(param_1 + 0x118);
    *(float *)(param_1 + 0x80) =
         -(fVar6 * *(float *)(param_1 + 0xd0)) - fVar1 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x84) =
         -(fVar6 * *(float *)(param_1 + 0xd4)) - fVar1 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x88) =
         -(fVar6 * *(float *)(param_1 + 0xd8)) - fVar1 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x8c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    fVar1 = *(float *)(param_1 + 0x114);
    *(float *)(param_1 + 0x60) =
         fVar1 * *(float *)(param_1 + 0xf0) + fVar6 * *(float *)(param_1 + 0xd0);
    *(float *)(param_1 + 100) =
         fVar6 * *(float *)(param_1 + 0xd4) + fVar1 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x68) =
         fVar1 * *(float *)(param_1 + 0xf8) + fVar6 * *(float *)(param_1 + 0xd8);
    *(int32_t *)(param_1 + 0x6c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0xa4);
    fVar1 = *(float *)(param_1 + 0xa0);
    fVar2 = *(float *)(param_1 + 0xa8);
    fVar7 = fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
    *(float *)(param_1 + 0xa0) = fVar1 * fVar7;
    *(float *)(param_1 + 0xa4) = fVar6 * fVar7;
    *(float *)(param_1 + 0xa8) = fVar2 * fVar7;
    fVar6 = *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xc0);
    fVar2 = *(float *)(param_1 + 200);
    fVar7 = fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
    *(float *)(param_1 + 0xc0) = fVar1 * fVar7;
    *(float *)(param_1 + 0xc4) = fVar6 * fVar7;
    *(float *)(param_1 + 200) = fVar2 * fVar7;
    fVar6 = *(float *)(param_1 + 0x84);
    fVar1 = *(float *)(param_1 + 0x80);
    fVar2 = *(float *)(param_1 + 0x88);
    fVar7 = fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
    *(float *)(param_1 + 0x80) = fVar1 * fVar7;
    *(float *)(param_1 + 0x84) = fVar6 * fVar7;
    *(float *)(param_1 + 0x88) = fVar2 * fVar7;
    fVar6 = *(float *)(param_1 + 100);
    fVar1 = *(float *)(param_1 + 0x60);
    fVar2 = *(float *)(param_1 + 0x68);
    fVar7 = fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    fVar7 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
    *(float *)(param_1 + 0x60) = fVar1 * fVar7;
    *(float *)(param_1 + 100) = fVar6 * fVar7;
    *(float *)(param_1 + 0x68) = fVar2 * fVar7;
    fVar6 = *(float *)(param_1 + 0x128);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x100) - fVar6 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x104) - fVar6 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x108) - fVar6 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x3c) = 0x7f7fffff;
    fVar6 = *(float *)(param_1 + 0x124);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x100) - fVar6 * *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x104) - fVar6 * *(float *)(param_1 + 0xf4);
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x108) - fVar6 * *(float *)(param_1 + 0xf8);
    *(int32_t *)(param_1 + 0x1c) = 0x7f7fffff;
    *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(param_1 + 0xf0);
    *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_1 + 0xf8);
    uVar3 = *(uint *)(param_1 + 0xf0);
    uVar4 = *(uint *)(param_1 + 0xf4);
    uVar5 = *(uint *)(param_1 + 0xf8);
  }
  *(uint *)(param_1 + 0x20) = uVar3 ^ 0x80000000;
  *(uint *)(param_1 + 0x24) = uVar4 ^ 0x80000000;
  *(uint *)(param_1 + 0x28) = uVar5 ^ 0x80000000;
  *(int32_t *)(param_1 + 0x2c) = 0x7f7fffff;
  return;
}
float function_437050(int64_t param_1)
{
  float fVar1;
  fVar1 = (float)tanf(*(float *)(param_1 + 300) * 0.5);
  fVar1 = (float)atanf(fVar1 / *(float *)(param_1 + 0x130));
  return fVar1 + fVar1;
}
// 函数: void function_437110(int64_t param_1)
void function_437110(int64_t param_1)
{
  int8_t stack_array_88 [16];
  int8_t stack_array_78 [16];
  int8_t stack_array_68 [16];
  int8_t stack_array_58 [16];
  int8_t stack_array_48 [16];
  int8_t stack_array_38 [16];
  int8_t stack_array_28 [16];
  int8_t stack_array_18 [16];
  function_6506a0(stack_array_88,param_1 + 0x10,param_1 + 0x90,param_1 + 0x70);
  function_6506a0(stack_array_18);
  function_6506a0(stack_array_68);
  function_6506a0(stack_array_58);
  function_6506a0(stack_array_48,param_1 + 0x30,param_1 + 0x90,param_1 + 0x70);
  function_6506a0(stack_array_38);
  function_6506a0(stack_array_28);
  function_6506a0(stack_array_78);
  return;
}
// 函数: void function_437290(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)
void function_437290(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)
{
  int32_t astack_special_x_8 [2];
  int32_t stack_special_x_10;
  int32_t stack_special_x_14;
  stack_special_x_10 = *param_4;
  astack_special_x_8[0] = 0xbf800000;
  stack_special_x_14 = param_4[1];
  function_2874c0(param_1 + 0x10,stack_special_x_10,param_3,&stack_special_x_10,astack_special_x_8);
  return;
}
uint64_t * function_4372e0(uint64_t *param_1,int64_t param_2,int32_t *param_3)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int8_t stack_array_18 [24];
  local_var_28 = *param_3;
  local_var_24 = param_3[1];
  local_var_20 = param_3[2];
  local_var_1c = param_3[3];
  puVar2 = (uint64_t *)function_287320(param_2 + 0x10,stack_array_18,&local_var_28);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}
// 函数: void function_437320(int64_t param_1,uint64_t *param_2)
void function_437320(int64_t param_1,uint64_t *param_2)
{
  bool bVar1;
  float *pfVar2;
  int64_t lVar3;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  lVar3 = 0;
  bVar1 = true;
  pfVar2 = (float *)(param_1 + 0x28);
  fStack_20 = (float)param_2[1];
  fStack_24 = (float)((uint64_t)*param_2 >> 0x20);
  fStack_28 = (float)*param_2;
  do {
    if (!bVar1) {
      return;
    }
    bVar1 = 0.0 <= (fStack_24 - pfVar2[-5]) * pfVar2[-1] + (fStack_28 - pfVar2[-6]) * pfVar2[-2] +
                   (fStack_20 - pfVar2[-4]) * *pfVar2;
    lVar3 = lVar3 + 1;
    pfVar2 = pfVar2 + 8;
  } while (lVar3 < 6);
  return;
}
// 函数: void function_4373a0(int32_t *param_1,int32_t param_2,int32_t param_3,uint64_t *param_4)
void function_4373a0(int32_t *param_1,int32_t param_2,int32_t param_3,uint64_t *param_4)
{
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  local_var_58 = 0x3f80000000000000;
  local_var_50 = 0;
  local_var_38 = *param_1;
  local_var_34 = param_1[1];
  local_var_30 = param_1[2];
  local_var_2c = param_1[3];
  local_var_68 = 0x3f800000;
  local_var_60 = 0;
  local_var_48 = 0;
  local_var_44 = 0;
  local_var_40 = 0x3f800000;
  local_var_3c = 0;
  function_085970(&local_var_68,0x3fc90fdb);
  function_085ac0(&local_var_68,param_3);
  function_085970(&local_var_68,param_2);
  *param_4 = local_var_68;
  param_4[1] = local_var_60;
  param_4[2] = local_var_58;
  param_4[3] = local_var_50;
  param_4[4] = CONCAT44(local_var_44,local_var_48);
  param_4[5] = CONCAT44(local_var_3c,local_var_40);
  param_4[6] = CONCAT44(local_var_34,local_var_38);
  param_4[7] = CONCAT44(local_var_2c,local_var_30);
  return;
}
// 函数: void function_437460(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_437460(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int64_t *plStackX_8;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  pcVar1 = *(code **)(*param_1 + 0x118);
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  (*pcVar1)(param_1,&plStackX_8,param_3,param_4,uVar2);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_4374c0(int32_t *param_1)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xf0,8,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)function_39dda0(uVar2);
  if (plVar3 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  local_var_20 = SUB84(plVar3,0);
  local_var_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar1;
  param_1[3] = local_var_14;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}
int32_t *
function_437560(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  function_39e0a0(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  local_var_20 = SUB84(plVar1,0);
  local_var_1c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar2;
  param_1[3] = local_var_14;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4375f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_4375f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_18;
  uVar1 = CoreMemoryPoolValidator(&plocal_var_30,param_3,param_3,param_4,0xfffffffffffffffe);
  uVar1 = function_20bef0(render_system_data_config,uVar1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_28 = 0;
  local_var_18 = 0;
  plocal_var_30 = &system_state_ptr;
  function_39eda0(param_1,param_2,uVar1);
  return;
}
uint function_437680(int64_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  if (param_1 != 0) {
    lVar4 = function_39dfa0();
    fVar1 = *(float *)(lVar4 + 0x23c);
    fVar2 = *(float *)(lVar4 + 0x240);
    fVar3 = *(float *)(lVar4 + 0x244);
    dVar10 = (double)pow((double)*(float *)(lVar4 + 0x238),0x3fdd1745d1745d17);
    dVar11 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
    dVar12 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
    uVar7 = (uint)(int64_t)(fVar3 * 256.0);
    uVar9 = 0xff;
    if (uVar7 < 0xff) {
      uVar9 = uVar7;
    }
    uVar8 = (uint)(int64_t)((float)dVar10 * 256.0);
    uVar7 = 0xff;
    if (uVar8 < 0xff) {
      uVar7 = uVar8;
    }
    uVar6 = (uint)(int64_t)((float)dVar11 * 256.0);
    uVar8 = 0xff;
    if (uVar6 < 0xff) {
      uVar8 = uVar6;
    }
    uVar5 = (uint)(int64_t)((float)dVar12 * 256.0);
    uVar6 = 0xff;
    if (uVar5 < 0xff) {
      uVar6 = uVar5;
    }
    return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
  }
  return 0;
}
uint function_43768d(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  lVar4 = function_39dfa0();
  fVar1 = *(float *)(lVar4 + 0x23c);
  fVar2 = *(float *)(lVar4 + 0x240);
  fVar3 = *(float *)(lVar4 + 0x244);
  dVar10 = (double)pow((double)*(float *)(lVar4 + 0x238),0x3fdd1745d1745d17);
  dVar11 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar12 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar7 = (uint)(int64_t)(fVar3 * 256.0);
  uVar9 = 0xff;
  if (uVar7 < 0xff) {
    uVar9 = uVar7;
  }
  uVar8 = (uint)(int64_t)((float)dVar10 * 256.0);
  uVar7 = 0xff;
  if (uVar8 < 0xff) {
    uVar7 = uVar8;
  }
  uVar6 = (uint)(int64_t)((float)dVar11 * 256.0);
  uVar8 = 0xff;
  if (uVar6 < 0xff) {
    uVar8 = uVar6;
  }
  uVar5 = (uint)(int64_t)((float)dVar12 * 256.0);
  uVar6 = 0xff;
  if (uVar5 < 0xff) {
    uVar6 = uVar5;
  }
  return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
}
uint64_t function_4377a1(void)
{
  return 0;
}
uint function_4377b0(int64_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  if (param_1 != 0) {
    lVar4 = function_39dfa0();
    fVar1 = *(float *)(lVar4 + 0x24c);
    fVar2 = *(float *)(lVar4 + 0x250);
    fVar3 = *(float *)(lVar4 + 0x254);
    dVar10 = (double)pow((double)*(float *)(lVar4 + 0x248),0x3fdd1745d1745d17);
    dVar11 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
    dVar12 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
    uVar7 = (uint)(int64_t)(fVar3 * 256.0);
    uVar9 = 0xff;
    if (uVar7 < 0xff) {
      uVar9 = uVar7;
    }
    uVar8 = (uint)(int64_t)((float)dVar10 * 256.0);
    uVar7 = 0xff;
    if (uVar8 < 0xff) {
      uVar7 = uVar8;
    }
    uVar6 = (uint)(int64_t)((float)dVar11 * 256.0);
    uVar8 = 0xff;
    if (uVar6 < 0xff) {
      uVar8 = uVar6;
    }
    uVar5 = (uint)(int64_t)((float)dVar12 * 256.0);
    uVar6 = 0xff;
    if (uVar5 < 0xff) {
      uVar6 = uVar5;
    }
    return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
  }
  return 0;
}
uint function_4377bd(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  lVar4 = function_39dfa0();
  fVar1 = *(float *)(lVar4 + 0x24c);
  fVar2 = *(float *)(lVar4 + 0x250);
  fVar3 = *(float *)(lVar4 + 0x254);
  dVar10 = (double)pow((double)*(float *)(lVar4 + 0x248),0x3fdd1745d1745d17);
  dVar11 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar12 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar7 = (uint)(int64_t)(fVar3 * 256.0);
  uVar9 = 0xff;
  if (uVar7 < 0xff) {
    uVar9 = uVar7;
  }
  uVar8 = (uint)(int64_t)((float)dVar10 * 256.0);
  uVar7 = 0xff;
  if (uVar8 < 0xff) {
    uVar7 = uVar8;
  }
  uVar6 = (uint)(int64_t)((float)dVar11 * 256.0);
  uVar8 = 0xff;
  if (uVar6 < 0xff) {
    uVar8 = uVar6;
  }
  uVar5 = (uint)(int64_t)((float)dVar12 * 256.0);
  uVar6 = 0xff;
  if (uVar5 < 0xff) {
    uVar6 = uVar5;
  }
  return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
}
uint64_t function_4378d1(void)
{
  return 0;
}
// 函数: void function_4378e0(int64_t *param_1,uint64_t param_2)
void function_4378e0(int64_t *param_1,uint64_t param_2)
{
  double dVar1;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  if (param_1 != (int64_t *)0x0) {
    dVar1 = (double)pow((double)((param_2 & 0xffffffff) >> 0x10 & 0xff) * 0.00392156862745098,
                        0x400199999999999a);
    fStack_28 = (float)dVar1;
    dVar1 = (double)pow((double)(param_2 >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
    fStack_24 = (float)dVar1;
    dVar1 = (double)pow((double)(param_2 & 0xff) * 0.00392156862745098,0x400199999999999a);
    fStack_20 = (float)dVar1;
    fStack_1c = (float)((double)(param_2 >> 0x18 & 0xff) * 0.00392156862745098);
    (**(code **)(*param_1 + 0x108))(param_1,&fStack_28);
  }
  return;
}
// 函数: void function_437905(void)
void function_437905(void)
{
  uint in_EAX;
  int64_t *unaff_RBX;
  uint unaff_EDI;
  double dVar1;
  float fVar2;
  uint64_t in_XMM3_Qa;
  float fStack000000000000002c;
  dVar1 = (double)pow((double)(in_EAX >> 0x10 & 0xff) * 0.00392156862745098);
  fVar2 = (float)dVar1;
  dVar1 = (double)pow((double)(unaff_EDI >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
  pow((double)(unaff_EDI & 0xff) * 0.00392156862745098,0x400199999999999a,(float)dVar1,in_XMM3_Qa,
      fVar2);
  fStack000000000000002c = (float)((double)(unaff_EDI >> 0x18) * 0.00392156862745098);
  (**(code **)(*unaff_RBX + 0x108))(fStack000000000000002c,&local_buffer_00000020);
  return;
}
// 函数: void function_4379c6(void)
void function_4379c6(void)
{
  return;
}
// 函数: void function_4379d0(int64_t param_1,uint64_t param_2)
void function_4379d0(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  uint64_t uVar7;
  if (param_1 != 0) {
    dVar8 = (double)pow((double)((param_2 & 0xffffffff) >> 0x10 & 0xff) * 0.00392156862745098,
                        0x400199999999999a);
    dVar9 = (double)pow((double)(param_2 >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
    dVar10 = (double)pow((double)(param_2 & 0xff) * 0.00392156862745098,0x400199999999999a);
    lVar4 = *(int64_t *)(param_1 + 0x30);
    uVar5 = 0;
    if (*(int64_t *)(param_1 + 0x38) - lVar4 >> 3 != 0) {
      uVar7 = uVar5;
      do {
        iVar2 = (**(code **)(**(int64_t **)(uVar5 + lVar4) + 0x98))();
        if (iVar2 == 0) {
          lVar4 = *(int64_t *)(uVar5 + *(int64_t *)(param_1 + 0x30));
          plVar3 = *(int64_t **)(lVar4 + 0x38);
          if (plVar3 < *(int64_t **)(lVar4 + 0x40)) {
            do {
              lVar1 = *plVar3;
              plVar3 = plVar3 + 2;
              *(uint64_t *)(lVar1 + 0x248) = CONCAT44((float)dVar9,(float)dVar8);
              *(uint64_t *)(lVar1 + 0x250) =
                   CONCAT44((float)((double)(param_2 >> 0x18 & 0xff) * 0.00392156862745098),
                            (float)dVar10);
            } while (plVar3 < *(int64_t **)(lVar4 + 0x40));
          }
        }
        lVar4 = *(int64_t *)(param_1 + 0x30);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (uint64_t)uVar6;
        uVar5 = uVar5 + 8;
      } while ((uint64_t)(int64_t)(int)uVar6 <
               (uint64_t)(*(int64_t *)(param_1 + 0x38) - lVar4 >> 3));
    }
  }
  return;
}
// 函数: void function_4379ee(int64_t param_1,uint64_t param_2)
void function_4379ee(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack000000000000002c;
  uint64_t uVar8;
  dVar9 = (double)pow((double)((param_2 & 0xffffffff) >> 0x10 & 0xff) * 0.00392156862745098);
  dVar10 = (double)pow((double)(param_2 >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
  dVar11 = (double)pow((double)(param_2 & 0xff) * 0.00392156862745098,0x400199999999999a);
  lVar5 = *(int64_t *)(param_1 + 0x30);
  uVar6 = 0;
  fStack000000000000002c = (float)((double)(param_2 >> 0x18 & 0xff) * 0.00392156862745098);
  if (*(int64_t *)(param_1 + 0x38) - lVar5 >> 3 != 0) {
    uVar2 = CONCAT44(fStack000000000000002c,(float)dVar11);
    uVar8 = uVar6;
    do {
      iVar3 = (**(code **)(**(int64_t **)(uVar6 + lVar5) + 0x98))();
      if (iVar3 == 0) {
        lVar5 = *(int64_t *)(uVar6 + *(int64_t *)(param_1 + 0x30));
        plVar4 = *(int64_t **)(lVar5 + 0x38);
        if (plVar4 < *(int64_t **)(lVar5 + 0x40)) {
          do {
            lVar1 = *plVar4;
            plVar4 = plVar4 + 2;
            *(uint64_t *)(lVar1 + 0x248) = CONCAT44((float)dVar10,(float)dVar9);
            *(uint64_t *)(lVar1 + 0x250) = uVar2;
          } while (plVar4 < *(int64_t **)(lVar5 + 0x40));
        }
      }
      lVar5 = *(int64_t *)(param_1 + 0x30);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0x38) - lVar5 >> 3));
  }
  return;
}
// 函数: void function_437a05(void)
void function_437a05(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t *plVar4;
  int64_t lVar5;
  uint unaff_EBX;
  uint64_t uVar6;
  uint uVar7;
  int64_t unaff_RDI;
  double dVar9;
  double dVar10;
  double dVar11;
  float fStack000000000000002c;
  uint64_t uVar8;
  dVar9 = (double)pow((double)in_RAX * 0.00392156862745098);
  dVar10 = (double)pow((double)(unaff_EBX >> 8 & 0xff) * 0.00392156862745098,0x400199999999999a);
  dVar11 = (double)pow((double)(unaff_EBX & 0xff) * 0.00392156862745098,0x400199999999999a);
  lVar5 = *(int64_t *)(unaff_RDI + 0x30);
  uVar6 = 0;
  fStack000000000000002c = (float)((double)(unaff_EBX >> 0x18) * 0.00392156862745098);
  if (*(int64_t *)(unaff_RDI + 0x38) - lVar5 >> 3 != 0) {
    uVar2 = CONCAT44(fStack000000000000002c,(float)dVar11);
    uVar8 = uVar6;
    do {
      iVar3 = (**(code **)(**(int64_t **)(uVar6 + lVar5) + 0x98))();
      if (iVar3 == 0) {
        lVar5 = *(int64_t *)(uVar6 + *(int64_t *)(unaff_RDI + 0x30));
        plVar4 = *(int64_t **)(lVar5 + 0x38);
        if (plVar4 < *(int64_t **)(lVar5 + 0x40)) {
          do {
            lVar1 = *plVar4;
            plVar4 = plVar4 + 2;
            *(uint64_t *)(lVar1 + 0x248) = CONCAT44((float)dVar10,(float)dVar9);
            *(uint64_t *)(lVar1 + 0x250) = uVar2;
          } while (plVar4 < *(int64_t **)(lVar5 + 0x40));
        }
      }
      lVar5 = *(int64_t *)(unaff_RDI + 0x30);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x38) - lVar5 >> 3));
  }
  return;
}
// 函数: void function_437ad0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void function_437ad0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint unaff_ESI;
  int64_t unaff_RDI;
  uint64_t stack_special_x_20;
  uVar5 = (uint64_t)unaff_ESI;
  do {
    iVar3 = (**(code **)(**(int64_t **)(uVar5 + param_2) + 0x98))();
    if (iVar3 == 0) {
      lVar1 = *(int64_t *)(uVar5 + *(int64_t *)(unaff_RDI + 0x30));
      plVar4 = *(int64_t **)(lVar1 + 0x38);
      if (plVar4 < *(int64_t **)(lVar1 + 0x40)) {
        do {
          lVar2 = *plVar4;
          plVar4 = plVar4 + 2;
          *(uint64_t *)(lVar2 + 0x248) = stack_special_x_20;
          *(uint64_t *)(lVar2 + 0x250) = param_5;
        } while (plVar4 < *(int64_t **)(lVar1 + 0x40));
      }
    }
    param_2 = *(int64_t *)(unaff_RDI + 0x30);
    unaff_ESI = unaff_ESI + 1;
    uVar5 = uVar5 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_ESI <
           (uint64_t)(*(int64_t *)(unaff_RDI + 0x38) - param_2 >> 3));
  return;
}
// 函数: void function_437b55(void)
void function_437b55(void)
{
  return;
}
// 函数: void function_437b60(int64_t *param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void function_437b60(int64_t *param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  if (param_1 != (int64_t *)0x0) {
    local_var_c = param_5;
    local_var_18 = param_2;
    local_var_14 = param_3;
    local_var_10 = param_4;
    (**(code **)(*param_1 + 400))(param_5,&local_var_18);
  }
  return;
}