#include "TaleWorlds.Native.Split.h"
// 99_part_10_part002.c - 13 个函数
// 函数: void UtilitiesSystem_a35ec(void)
void UtilitiesSystem_a35ec(void)
{
  int in_EAX;
  int64_t *plVar1;
  int64_t unaff_RBX;
  if ((-1 < in_EAX) && (unaff_RBX != 0)) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
// WARNING: Could not recover jumptable at 0x0001806a3608. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}
uint64_t * UtilitiesSystem_a3620(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a3650(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a3680(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a36b0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a36e0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}
uint64_t UtilitiesSystem_a3710(uint64_t param_1,uint64_t param_2)
{
  UtilitiesSystem_a34c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a3750(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &memory_allocator_3704_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a3780(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &memory_allocator_3712_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a37b0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &memory_allocator_3376_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a37e0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &memory_allocator_3328_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a3810(uint64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  *param_1 = &memory_allocator_3888_ptr;
  param_1[1] = &processed_var_4112_ptr;
  UtilitiesSystem_a3590(param_1 + 0x3b);
  lVar1 = param_1[0x39];
  if ((((*(uint *)((int64_t)param_1 + 0x1d4) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x1d4))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[0x32];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  param_1[0x26] = &memory_allocator_3712_ptr;
  param_1[0x18] = &rendering_buffer_2232_ptr;
  UtilitiesSystem_a34c0(param_1 + 0xc);
  lVar1 = param_1[10];
  if ((((*(uint *)((int64_t)param_1 + 0x5c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x5c))) && (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  param_1[1] = &memory_allocator_3328_ptr;
  *param_1 = &memory_allocator_3376_ptr;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x1f8);
  }
  return param_1;
}
uint64_t * UtilitiesSystem_a3970(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &memory_allocator_3536_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// 函数: void RenderingSystem_StateManager0(int64_t param_1,int64_t *param_2,int8_t param_3)
void RenderingSystem_StateManager0(int64_t param_1,int64_t *param_2,int8_t param_3)
{
  int32_t astack_special_x_8 [2];
  int8_t astack_special_x_18 [8];
  void *plocal_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int32_t *plocal_var_40;
  void *plocal_var_38;
  int32_t local_var_30;
  int32_t local_var_2c;
  uint64_t local_var_28;
  uint64_t local_var_20;
  astack_special_x_8[0] = 0;
  plocal_var_48 = &processed_var_4336_ptr;
  plocal_var_40 = astack_special_x_8;
  astack_special_x_18[0] = param_3;
  SystemFunction_0001806a72f0(&plocal_var_48,astack_special_x_18);
  (**(code **)(*param_2 + 8))(param_2,&plocal_var_48);
  local_var_20 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  local_var_2c = 1;
  plocal_var_38 = &rendering_buffer_2960_ptr;
  local_var_30 = astack_special_x_8[0];
  local_var_28 = *(uint64_t *)(param_1 + 0x1c0);
  local_var_50 = (**(code **)(**(int64_t **)(param_1 + 0x1f0) + 0x20))();
  plocal_var_58 = &rendering_buffer_2680_ptr;
  SystemFunction_0001806a2e70(&plocal_var_58,&local_var_30);
  (**(code **)(plocal_var_58 + 0x40))(&plocal_var_58,&local_var_2c);
  (**(code **)(plocal_var_58 + 0x30))(&plocal_var_58,&local_var_28);
  (**(code **)(plocal_var_58 + 0x30))(&plocal_var_58,&local_var_20);
  plocal_var_40 = *(int32_t **)(param_1 + 0x1f0);
  plocal_var_48 = &rendering_buffer_2680_ptr;
  astack_special_x_18[0] = param_3;
  SystemFunction_0001806a2e30(&plocal_var_48,astack_special_x_18);
  (**(code **)(*param_2 + 8))(param_2,&plocal_var_48);
  (**(code **)(**(int64_t **)(param_1 + 0x1f0) + 0x28))();
  return;
}
// 函数: void UtilitiesSystem_a3ad0(int64_t param_1,uint64_t param_2,int32_t param_3)
void UtilitiesSystem_a3ad0(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  uint64_t *puVar1;
  uint64_t local_var_18;
  int32_t local_var_10;
  int32_t local_var_c;
  if ((*(uint *)(param_1 + 0x44) & 0x7fffffff) <= *(uint *)(param_1 + 0x40)) {
    local_var_18 = param_2;
    local_var_10 = param_3;
    UtilitiesSystem_a59b0((int64_t *)(param_1 + 0x38),&local_var_18);
    return;
  }
  puVar1 = (uint64_t *)
           (*(int64_t *)(param_1 + 0x38) + (uint64_t)*(uint *)(param_1 + 0x40) * 0x10);
  *puVar1 = param_2;
  puVar1[1] = CONCAT44(local_var_c,param_3);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}
// 函数: void UtilitiesSystem_a3b20(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void UtilitiesSystem_a3b20(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  void *plocal_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  plocal_var_28 = &memory_allocator_3280_ptr;
  local_var_20 = param_2;
  local_var_18 = param_3;
  RenderingSystem_StateManager0(param_1,&plocal_var_28,0x18);
  return;
}
// 函数: void UtilitiesSystem_a3b50(uint64_t param_1,uint64_t param_2,uint64_t param_3,int16_t param_4,
void UtilitiesSystem_a3b50(uint64_t param_1,uint64_t param_2,uint64_t param_3,int16_t param_4,
                  int8_t param_5)
{
  void *plocal_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  int16_t local_var_10;
  int8_t local_var_e;
  plocal_var_28 = &memory_allocator_3296_ptr;
  local_var_e = param_5;
  local_var_20 = param_2;
  local_var_18 = param_3;
  local_var_10 = param_4;
  RenderingSystem_StateManager0(param_1,&plocal_var_28,0x19);
  return;
}
// 函数: void UtilitiesSystem_a3b90(int64_t param_1)
void UtilitiesSystem_a3b90(int64_t param_1)
{
  if (*(int *)(param_1 + 0x50) != 0) {
    (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 8) + 0x28))();
  }
  return;
}
// 函数: void UtilitiesSystem_a3bd0(int64_t *param_1,uint64_t *param_2,int32_t param_3,int32_t param_4)
void UtilitiesSystem_a3bd0(int64_t *param_1,uint64_t *param_2,int32_t param_3,int32_t param_4)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int8_t astack_special_x_18 [16];
  uint64_t local_var_38;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uVar4 = *(int32_t *)param_2;
  uVar5 = *(int32_t *)((int64_t)param_2 + 4);
  uVar8 = *param_2;
  uVar6 = *(int32_t *)(param_2 + 1);
  uVar7 = *(int32_t *)((int64_t)param_2 + 0xc);
  uVar9 = param_2[1];
  uVar10 = (**(code **)(*param_1 + 0x28))();
  plVar2 = (int64_t *)param_1[2];
  plVar11 = (int64_t *)(**(code **)(*plVar2 + 0x18))(plVar2);
  plVar11 = (int64_t *)(**(code **)(*plVar11 + 0xc0))(plVar11);
  uVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,uVar10,astack_special_x_18);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  if (*(uint *)(param_1 + 10) < (*(uint *)((int64_t)param_1 + 0x54) & 0x7fffffff)) {
    lVar3 = param_1[9];
    lVar12 = (uint64_t)*(uint *)(param_1 + 10) * 0x20;
    puVar1 = (uint64_t *)(lVar12 + lVar3);
    *puVar1 = uVar10;
    puVar1[1] = uVar8;
    puVar1 = (uint64_t *)(lVar12 + 0x10 + lVar3);
    *puVar1 = uVar9;
    puVar1[1] = CONCAT44(param_4,param_3);
    *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  }
  else {
    local_var_38 = uVar10;
    local_var_30 = uVar4;
    local_var_2c = uVar5;
    local_var_28 = uVar6;
    local_var_24 = uVar7;
    local_var_20 = param_3;
    local_var_1c = param_4;
    UtilitiesSystem_a5af0(param_1 + 9,&local_var_38);
  }
  return;
}
int64_t UtilitiesSystem_a3ca0(int64_t param_1,uint param_2)
{
  uint uVar1;
  int64_t lVar2;
  if (0x1000 < param_2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1e8);
  if (0x1000 < uVar1 + param_2) {
    UtilitiesSystem_a5580((int64_t *)(param_1 + 0x1d8));
    uVar1 = *(uint *)(param_1 + 0x1e8);
  }
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x1d8) + (uint64_t)*(uint *)(param_1 + 0x1ec) * 8);
  *(uint *)(param_1 + 0x1e8) = uVar1 + param_2;
  return (uint64_t)uVar1 + lVar2;
}
bool UtilitiesSystem_a3d10(int64_t param_1,int *param_2)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t local_var_48;
  uint64_t local_var_40;
  int8_t stack_array_38 [16];
  void *plocal_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint64_t local_var_10;
  uVar1 = *(uint *)(param_1 + 0x108);
  iVar2 = param_2[2];
  plocal_var_28 = *(void **)(param_1 + 0x108);
  iVar3 = *param_2;
  local_var_48 = *(uint64_t *)param_2;
  local_var_20 = CONCAT44(local_var_20._4_4_,*(int32_t *)(param_1 + 0x110));
  local_var_18 = *(uint64_t *)(param_1 + 0x118);
  local_var_40 = *(uint64_t *)(param_2 + 2);
  local_var_10 = *(uint64_t *)(param_1 + 0x120);
  puVar4 = (uint64_t *)UtilitiesSystem_a4370(param_1,stack_array_38,&plocal_var_28,&local_var_48);
  local_var_10 = CONCAT44(local_var_10._4_4_,(uint)(iVar2 - iVar3) / uVar1);
  local_var_20 = *puVar4;
  *(uint64_t *)param_2 = local_var_20;
  local_var_18 = puVar4[1];
  *(uint64_t *)(param_2 + 2) = local_var_18;
  plocal_var_28 = &memory_allocator_3136_ptr;
  RenderingSystem_StateManager0(param_1,&plocal_var_28,9);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
// 函数: void UtilitiesSystem_a3de0(int64_t param_1,int64_t param_2)
void UtilitiesSystem_a3de0(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int8_t astack_special_x_10 [8];
  if (param_2 != 0) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)(uVar2 + param_2) != '\0');
    uVar1 = *(uint *)(param_1 + 0x20);
    astack_special_x_10[0] = 0;
    uVar3 = uVar1 + 1;
    if (uVar1 != 0) {
      uVar3 = uVar1;
    }
    UtilitiesSystem_a6540((int64_t *)(param_1 + 0x18),uVar3 + (int)uVar2,astack_special_x_10);
    uVar4 = (uint64_t)uVar1;
    if (uVar1 != 0) {
      uVar4 = (uint64_t)uVar1 - 1;
    }
// WARNING: Subroutine does not return
    memcpy(uVar4 + *(int64_t *)(param_1 + 0x18),param_2,uVar2 & 0xffffffff);
  }
  return;
}
// 函数: void UtilitiesSystem_a3dea(int64_t param_1,int64_t param_2)
void UtilitiesSystem_a3dea(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int8_t local_var_38;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(uVar2 + param_2) != '\0');
  uVar1 = *(uint *)(param_1 + 0x20);
  local_var_38 = 0;
  uVar3 = uVar1 + 1;
  if (uVar1 != 0) {
    uVar3 = uVar1;
  }
  UtilitiesSystem_a6540((int64_t *)(param_1 + 0x18),uVar3 + (int)uVar2,&local_buffer_00000038);
  uVar4 = (uint64_t)uVar1;
  if (uVar1 != 0) {
    uVar4 = (uint64_t)uVar1 - 1;
  }
// WARNING: Subroutine does not return
  memcpy(uVar4 + *(int64_t *)(param_1 + 0x18),param_2,uVar2 & 0xffffffff);
}
// 函数: void UtilitiesSystem_a3e60(void)
void UtilitiesSystem_a3e60(void)
{
  return;
}
bool UtilitiesSystem_a3e70(int64_t param_1,uint64_t *param_2)
{
  char cVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int8_t astack_special_x_8 [8];
  int8_t astack_special_x_10 [8];
  int32_t stack_special_x_18;
  int32_t stack_special_x_1c;
  void *plocal_var_98;
  uint64_t local_var_90;
  int8_t stack_array_88 [112];
  plVar3 = *(int64_t **)(param_1 + 0x48);
  *(int32_t *)(param_1 + 0xb8) = 2;
  plVar7 = (int64_t *)(**(code **)(*plVar3 + 0x18))(plVar3);
  lVar8 = (**(code **)(*plVar7 + 0xa0))(plVar7,stack_array_88,param_2);
  uVar6 = *(uint64_t *)(lVar8 + 0x10);
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(lVar8 + 8);
  *(uint64_t *)(param_1 + 0x140) = uVar6;
  *(int32_t *)(param_1 + 0x148) = *(int32_t *)(lVar8 + 0x18);
  uVar2 = *(int32_t *)(lVar8 + 0x24);
  uVar4 = *(int32_t *)(lVar8 + 0x28);
  uVar5 = *(int32_t *)(lVar8 + 0x2c);
  *(int32_t *)(param_1 + 0x150) = *(int32_t *)(lVar8 + 0x20);
  *(int32_t *)(param_1 + 0x154) = uVar2;
  *(int32_t *)(param_1 + 0x158) = uVar4;
  *(int32_t *)(param_1 + 0x15c) = uVar5;
  *(int32_t *)(param_1 + 0x160) = *(int32_t *)(lVar8 + 0x30);
  *(uint64_t *)(param_1 + 0x168) = *(uint64_t *)(lVar8 + 0x38);
  *(uint64_t *)(param_1 + 0x170) = *(uint64_t *)(lVar8 + 0x40);
  *(int32_t *)(param_1 + 0x178) = *(int32_t *)(lVar8 + 0x48);
  *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(lVar8 + 0x50);
  *(uint64_t *)(param_1 + 0x188) = *(uint64_t *)(lVar8 + 0x58);
  puVar9 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_8,param_2[1]);
  uVar2 = *puVar9;
  puVar9 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_10,*param_2);
  stack_special_x_18 = *puVar9;
  plocal_var_98 = &rendering_buffer_2992_ptr;
  local_var_90 = CONCAT44(uVar2,stack_special_x_18);
  stack_special_x_1c = uVar2;
  RenderingSystem_StateManager0(param_1,&plocal_var_98,0xc);
  plocal_var_98 = &rendering_buffer_2008_ptr;
  cVar1 = *(char *)(param_1 + 0x1b8);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return cVar1 == '\0';
}
bool UtilitiesSystem_a3fb0(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int32_t *puVar2;
  int8_t astack_special_x_8 [8];
  void *plocal_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  uint64_t local_var_10;
  uVar1 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  puVar2 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_8,param_3);
  local_var_18 = *puVar2;
  plocal_var_28 = &memory_allocator_3200_ptr;
  local_var_20 = param_2;
  local_var_10 = uVar1;
  RenderingSystem_StateManager0(param_1,&plocal_var_28,0x12);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
bool UtilitiesSystem_a4040(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int32_t *puVar7;
  int8_t astack_special_x_8 [8];
  int8_t astack_special_x_10 [16];
  int8_t astack_special_x_20 [8];
  void *plocal_var_c0;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  uint64_t local_var_ac;
  int8_t stack_array_a0 [120];
  plVar3 = *(int64_t **)(param_1 + 0x48);
  *(int32_t *)(param_1 + 0xb8) = 1;
  plVar5 = (int64_t *)(**(code **)(*plVar3 + 0x18))(plVar3);
  lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,stack_array_a0,param_4);
  uVar1 = *(int32_t *)(lVar6 + 0xc);
  uVar2 = *(int32_t *)(lVar6 + 0x10);
  uVar4 = *(int32_t *)(lVar6 + 0x14);
  *(int32_t *)(param_1 + 200) = *(int32_t *)(lVar6 + 8);
  *(int32_t *)(param_1 + 0xcc) = uVar1;
  *(int32_t *)(param_1 + 0xd0) = uVar2;
  *(int32_t *)(param_1 + 0xd4) = uVar4;
  *(int32_t *)(param_1 + 0xd8) = *(int32_t *)(lVar6 + 0x18);
  *(int32_t *)(param_1 + 0xdc) = *(int32_t *)(lVar6 + 0x1c);
  *(int32_t *)(param_1 + 0xe0) = *(int32_t *)(lVar6 + 0x20);
  *(int32_t *)(param_1 + 0xe4) = *(int32_t *)(lVar6 + 0x24);
  *(int32_t *)(param_1 + 0xe8) = *(int32_t *)(lVar6 + 0x28);
  *(int32_t *)(param_1 + 0xec) = *(int32_t *)(lVar6 + 0x2c);
  *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(lVar6 + 0x30);
  *(uint64_t *)(param_1 + 0xf8) = *(uint64_t *)(lVar6 + 0x38);
  *(uint64_t *)(param_1 + 0x100) = *(uint64_t *)(lVar6 + 0x40);
  *(int32_t *)(param_1 + 0x108) = *(int32_t *)(lVar6 + 0x48);
  *(int32_t *)(param_1 + 0x10c) = *(int32_t *)(lVar6 + 0x4c);
  *(int32_t *)(param_1 + 0x110) = *(int32_t *)(lVar6 + 0x50);
  *(uint64_t *)(param_1 + 0x118) = *(uint64_t *)(lVar6 + 0x58);
  *(uint64_t *)(param_1 + 0x120) = *(uint64_t *)(lVar6 + 0x60);
  *(int8_t *)(param_1 + 0x128) = *(int8_t *)(lVar6 + 0x68);
  *(int8_t *)(param_1 + 0x129) = *(int8_t *)(lVar6 + 0x69);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  puVar7 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_8,param_4[1]);
  uVar1 = *puVar7;
  puVar7 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_10,*param_4);
  uVar2 = *puVar7;
  puVar7 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_20,param_3);
  local_var_b0 = *puVar7;
  local_var_ac = CONCAT44(uVar1,uVar2);
  plocal_var_c0 = &memory_allocator_3120_ptr;
  local_var_b8 = param_2;
  RenderingSystem_StateManager0(param_1,&plocal_var_c0,8);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
int64_t * UtilitiesSystem_a41e0(int64_t param_1,int64_t *param_2,int64_t param_3,int64_t *param_4)
{
  int64_t *plVar1;
  void *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  if ((int)(*(int64_t *)(param_3 + 0x58) - *(int64_t *)(param_3 + 0x50) >> 2) == 0) {
    lVar5 = *param_4;
    lVar7 = param_4[1];
  }
  else {
    plVar1 = (int64_t *)(param_1 + 400);
    *(int64_t *)(param_1 + 0x198) = *plVar1;
    UtilitiesSystem_a3210(plVar1,*param_4,(int)param_4[1] - (int)*param_4);
    lVar5 = *(int64_t *)(param_3 + 0x50);
    uVar10 = 0;
    if ((int)(*(int64_t *)(param_3 + 0x58) - lVar5 >> 2) != 0) {
      do {
        lVar7 = -1;
        puVar2 = *(void **)((uint64_t)*(uint *)(lVar5 + uVar10 * 4) + *param_4);
        puVar8 = &system_buffer_ptr;
        if (puVar2 != (void *)0x0) {
          puVar8 = puVar2;
        }
        puVar2 = &system_buffer_ptr;
        if (puVar8 != (void *)0x0) {
          puVar2 = puVar8;
        }
        do {
          lVar7 = lVar7 + 1;
        } while (puVar2[lVar7] != '\0');
        uVar6 = (int)lVar7 + 1;
        if (puVar8 == (void *)0x0) {
          uVar9 = (uint64_t)uVar6;
          if ((uVar6 != 0) && (uVar6 != 0)) {
            do {
              puVar4 = (int32_t *)UtilitiesSystem_a5c40(plVar1,4);
              *puVar4 = 0;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        else if (uVar6 != 0) {
          uVar3 = UtilitiesSystem_a5c40(plVar1,uVar6);
// WARNING: Subroutine does not return
          memcpy(uVar3,puVar8,uVar6);
        }
        lVar5 = *(int64_t *)(param_3 + 0x50);
        uVar6 = (int)uVar10 + 1;
        uVar10 = (uint64_t)uVar6;
      } while (uVar6 < (uint)(*(int64_t *)(param_3 + 0x58) - lVar5 >> 2));
    }
    lVar5 = *plVar1;
    lVar7 = *(int64_t *)(param_1 + 0x198);
    param_4[1] = lVar7;
    *param_4 = lVar5;
  }
  *param_2 = lVar5;
  param_2[1] = lVar7;
  return param_2;
}
// 函数: void UtilitiesSystem_a420c(int64_t param_1,uint64_t param_2,uint64_t param_3,int *param_4)
void UtilitiesSystem_a420c(int64_t param_1,uint64_t param_2,uint64_t param_3,int *param_4)
{
  int64_t *plVar1;
  void *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t uVar9;
  int64_t *unaff_R12;
  int64_t *unaff_R13;
  uint64_t uVar10;
  int64_t unaff_R15;
  int64_t local_buffer_60;
  plVar1 = (int64_t *)(param_1 + 400);
  *(int64_t *)(param_1 + 0x198) = *plVar1;
  UtilitiesSystem_a3210(plVar1,*(uint64_t *)param_4,param_4[2] - *param_4);
  lVar5 = *(int64_t *)(unaff_R15 + 0x50);
  uVar10 = 0;
  if ((int)(*(int64_t *)(unaff_R15 + 0x58) - lVar5 >> 2) != 0) {
    do {
      lVar7 = -1;
      puVar2 = *(void **)((uint64_t)*(uint *)(lVar5 + uVar10 * 4) + *unaff_R12);
      puVar8 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar8 = puVar2;
      }
      puVar2 = &system_buffer_ptr;
      if (puVar8 != (void *)0x0) {
        puVar2 = puVar8;
      }
      do {
        lVar7 = lVar7 + 1;
      } while (puVar2[lVar7] != '\0');
      uVar6 = (int)lVar7 + 1;
      if (puVar8 == (void *)0x0) {
        uVar9 = (uint64_t)uVar6;
        if ((uVar6 != 0) && (uVar6 != 0)) {
          do {
            puVar4 = (int32_t *)UtilitiesSystem_a5c40(plVar1,4);
            *puVar4 = 0;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else if (uVar6 != 0) {
        uVar3 = UtilitiesSystem_a5c40(plVar1,uVar6);
// WARNING: Subroutine does not return
        memcpy(uVar3,puVar8,uVar6);
      }
      lVar5 = *(int64_t *)(unaff_R15 + 0x50);
      uVar6 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar6;
    } while (uVar6 < (uint)(*(int64_t *)(unaff_R15 + 0x58) - lVar5 >> 2));
  }
  lVar5 = *plVar1;
  lVar7 = *(int64_t *)(local_buffer_60 + 0x198);
  unaff_R12[1] = lVar7;
  *unaff_R12 = lVar5;
  *unaff_R13 = lVar5;
  unaff_R13[1] = lVar7;
  return;
}
// 函数: void UtilitiesSystem_a4250(int64_t param_1)
void UtilitiesSystem_a4250(int64_t param_1)
{
  int64_t lVar1;
  void *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint uVar5;
  int64_t lVar6;
  void *puVar7;
  int64_t *unaff_RSI;
  uint64_t uVar8;
  int64_t *unaff_R12;
  int64_t *unaff_R13;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  void *puVar9;
  void *extraout_XMM0_Qa;
  int64_t local_buffer_60;
  void *plocal_buffer_68;
  do {
    lVar6 = -1;
    puVar9 = *(void **)((uint64_t)*(uint *)(param_1 + unaff_R14 * 4) + *unaff_R12);
    puVar7 = &system_buffer_ptr;
    if (puVar9 != (void *)0x0) {
      puVar7 = puVar9;
    }
    puVar2 = &system_buffer_ptr;
    if (puVar7 != (void *)0x0) {
      puVar2 = puVar7;
    }
    do {
      lVar6 = lVar6 + 1;
    } while (puVar2[lVar6] != '\0');
    uVar5 = (int)lVar6 + 1;
    if (puVar7 == (void *)0x0) {
      uVar8 = (uint64_t)uVar5;
      if ((uVar5 != 0) && (plocal_buffer_68 = (void *)0x0, uVar5 != 0)) {
        do {
          puVar4 = (int32_t *)UtilitiesSystem_a5c40(puVar9,4);
          *puVar4 = 0;
          uVar8 = uVar8 - 1;
          puVar9 = extraout_XMM0_Qa;
        } while (uVar8 != 0);
      }
    }
    else if (uVar5 != 0) {
      plocal_buffer_68 = puVar7;
      uVar3 = UtilitiesSystem_a5c40(puVar9,uVar5);
// WARNING: Subroutine does not return
      memcpy(uVar3,puVar7,uVar5);
    }
    param_1 = *(int64_t *)(unaff_R15 + 0x50);
    uVar5 = (int)unaff_R14 + 1;
    unaff_R14 = (uint64_t)uVar5;
  } while (uVar5 < (uint)(*(int64_t *)(unaff_R15 + 0x58) - param_1 >> 2));
  lVar6 = *unaff_RSI;
  lVar1 = *(int64_t *)(local_buffer_60 + 0x198);
  unaff_R12[1] = lVar1;
  *unaff_R12 = lVar6;
  *unaff_R13 = lVar6;
  unaff_R13[1] = lVar1;
  return;
}
// 函数: void UtilitiesSystem_a4323(void)
void UtilitiesSystem_a4323(void)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RSI;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  int64_t local_buffer_60;
  uVar1 = *unaff_RSI;
  uVar2 = *(uint64_t *)(local_buffer_60 + 0x198);
  unaff_R12[1] = uVar2;
  *unaff_R12 = uVar1;
  *unaff_R13 = uVar1;
  unaff_R13[1] = uVar2;
  return;
}