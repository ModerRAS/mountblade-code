#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_10_part006.c - 40 个函数
// 函数: void function_6a5cd4(void)
void function_6a5cd4(void)
{
// WARNING: Subroutine does not return
  memcpy();
}
int64_t function_6a5cfd(void)
{
  int64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  int64_t unaff_R15;
  *unaff_RBX = unaff_RSI;
  unaff_RBX[1] = (unaff_RDI & 0xffffffff) + unaff_RSI;
  unaff_RBX[2] = unaff_R14 + unaff_RSI;
  unaff_RBX[1] = unaff_RBX[1] + unaff_R15;
  return (unaff_RDI & 0xffffffff) + *unaff_RBX;
}
int64_t function_6a5d1b(void)
{
  int64_t *unaff_RBX;
  uint64_t unaff_RDI;
  int64_t unaff_R15;
  unaff_RBX[1] = unaff_RBX[1] + unaff_R15;
  return (unaff_RDI & 0xffffffff) + *unaff_RBX;
}
int8_t function_6a5d30(int64_t param_1,uint64_t param_2)
{
  int8_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *aplocal_var_88 [16];
  plVar2 = *(int64_t **)(param_1 + 0x40);
  plVar3 = (int64_t *)(**(code **)(*plVar2 + 0x18))(plVar2);
  lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,aplocal_var_88,param_2);
  uVar1 = *(int8_t *)(lVar4 + 0x70);
  aplocal_var_88[0] = &rendering_buffer_2232_ptr;
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return uVar1;
}
bool function_6a5db0(int64_t param_1,uint64_t param_2,int32_t *param_3)
{
  void *plocal_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  local_var_18 = *param_3;
  local_var_14 = param_3[1];
  local_var_10 = param_3[2];
  plocal_var_28 = &memory_allocator_3312_ptr;
  local_var_20 = param_2;
  RenderingSystem_StateManager0(local_var_10,&plocal_var_28,0x1c);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
// 函数: void function_6a5e10(int64_t param_1)
void function_6a5e10(int64_t param_1)
{
  int8_t astack_special_x_8 [8];
  if (*(int *)(param_1 + 0x30) != 0) {
    astack_special_x_8[0] = 0;
    function_6a6540(param_1 + 0x18,
                  *(int32_t *)
                   (*(int64_t *)(param_1 + 0x28) + (uint64_t)(*(int *)(param_1 + 0x30) - 1) * 4),
                  astack_special_x_8);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    if (*(int *)(param_1 + 0x20) != 0) {
      *(int8_t *)((uint64_t)(*(int *)(param_1 + 0x20) - 1) + *(int64_t *)(param_1 + 0x18)) = 0
      ;
    }
  }
  return;
}
// 函数: void function_6a5e31(uint64_t param_1,int64_t param_2)
void function_6a5e31(uint64_t param_1,int64_t param_2)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  int8_t local_var_30;
  local_var_30 = 0;
  function_6a6540(param_1,*(int32_t *)(in_RAX + param_2 * 4));
  *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + -1;
  if (*(int *)(unaff_RBX + 0x20) != 0) {
    *(int8_t *)((uint64_t)(*(int *)(unaff_RBX + 0x20) - 1) + *(int64_t *)(unaff_RBX + 0x18)) =
         0;
  }
  return;
}
// 函数: void function_6a5e5e(void)
void function_6a5e5e(void)
{
  return;
}
bool function_6a5e70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  int8_t astack_special_x_8 [8];
  void *plocal_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  uint64_t local_var_10;
  puVar1 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_8);
  local_var_18 = *puVar1;
  plocal_var_28 = &memory_allocator_3200_ptr;
  local_var_20 = param_2;
  local_var_10 = param_4;
  RenderingSystem_StateManager0(param_1,&plocal_var_28,0x10);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
// 函数: void function_6a5ee0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_6a5ee0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t astack_special_x_8 [2];
  astack_special_x_8[0] = *(int32_t *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x30) < (*(uint *)(param_1 + 0x34) & 0x7fffffff)) {
    *(int32_t *)(*(int64_t *)(param_1 + 0x28) + (uint64_t)*(uint *)(param_1 + 0x30) * 4) =
         astack_special_x_8[0];
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    function_6a5620(param_1 + 0x28,astack_special_x_8);
  }
  function_6a3de0(param_1,param_3);
  function_6a3de0(param_1,param_2);
  function_6a3de0(param_1,param_4);
  *(int8_t *)((uint64_t)(*(int *)(param_1 + 0x20) - 1) + *(int64_t *)(param_1 + 0x18)) = 0;
  return;
}
// 函数: void function_6a5f80(int64_t param_1,uint64_t param_2,int64_t param_3)
void function_6a5f80(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint uVar1;
  uint64_t uVar2;
  uint astack_special_x_8 [2];
  astack_special_x_8[0] = *(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x30) < (*(uint *)(param_1 + 0x34) & 0x7fffffff)) {
    *(uint *)(*(int64_t *)(param_1 + 0x28) + (uint64_t)*(uint *)(param_1 + 0x30) * 4) =
         astack_special_x_8[0];
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  else {
    function_6a5620(param_1 + 0x28,astack_special_x_8);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uVar1 != 0) && (param_3 != 0)) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)(param_3 + uVar2) != '\0');
    astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
    function_6a6540(param_1 + 0x18,(int)uVar2 + uVar1,astack_special_x_8);
// WARNING: Subroutine does not return
    memcpy(*(int64_t *)(param_1 + 0x18) + ((uint64_t)uVar1 - 1),param_3,uVar2 & 0xffffffff);
  }
  function_6a3de0(param_1,param_2);
  *(int8_t *)((uint64_t)(*(int *)(param_1 + 0x20) - 1) + *(int64_t *)(param_1 + 0x18)) = 0;
  return;
}
// 函数: void function_6a5fd1(int64_t param_1)
void function_6a5fd1(int64_t param_1)
{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t unaff_R14;
  int8_t local_var_40;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(unaff_R14 + lVar1) != '\0');
  local_var_40 = 0;
  function_6a6540(unaff_RBP + 0x18,(int)lVar1 + (int)param_1,&local_buffer_00000040);
// WARNING: Subroutine does not return
  memcpy(*(int64_t *)(unaff_RBP + 0x18) + param_1 + -1);
}
// 函数: void function_6a6037(void)
void function_6a6037(void)
{
  int64_t unaff_RBP;
  function_6a3de0();
  *(int8_t *)((uint64_t)(*(int *)(unaff_RBP + 0x20) - 1) + *(int64_t *)(unaff_RBP + 0x18)) = 0
  ;
  return;
}
// 函数: void function_6a6060(int64_t param_1,uint64_t param_2)
void function_6a6060(int64_t param_1,uint64_t param_2)
{
  uint64_t astack_special_x_8 [4];
  if ((*(uint *)(param_1 + 0x1d4) & 0x7fffffff) <= *(uint *)(param_1 + 0x1d0)) {
    astack_special_x_8[0] = param_2;
    function_6a5880((int64_t *)(param_1 + 0x1c8),astack_special_x_8);
    return;
  }
  *(uint64_t *)(*(int64_t *)(param_1 + 0x1c8) + (uint64_t)*(uint *)(param_1 + 0x1d0) * 8) =
       param_2;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  return;
}
// 函数: void function_6a60b0(uint64_t *param_1,int param_2)
void function_6a60b0(uint64_t *param_1,int param_2)
{
  int8_t uVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *puVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int8_t *puVar9;
  puVar6 = (int8_t *)0x0;
  if (param_2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar2 == '\0') {
      puVar5 = &ui_system_data_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc318,0x180c827e0);
    }
    puVar6 = (int8_t *)(**(code **)(*plVar3 + 8))(plVar3,param_2,puVar5,&processed_var_4272_ptr,0x229);
  }
  puVar8 = (int8_t *)*param_1;
  if (puVar6 < puVar6 + *(uint *)(param_1 + 1)) {
    puVar9 = (int8_t *)(uint64_t)*(uint *)(param_1 + 1);
    if (puVar6 + *(uint *)(param_1 + 1) < puVar6) {
      puVar9 = (int8_t *)0x0;
    }
    puVar7 = puVar6;
    if (puVar9 != (int8_t *)0x0) {
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (puVar7 + -(int64_t)puVar6 < puVar9);
      puVar8 = (int8_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar8 != (int8_t *)0x0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar8);
  }
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  *param_1 = puVar6;
  return;
}
// 函数: void function_6a60c4(uint64_t *param_1,int param_2)
void function_6a60c4(uint64_t *param_1,int param_2)
{
  int8_t uVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *puVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int8_t *puVar9;
  puVar6 = (int8_t *)0x0;
  if (param_2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar2 == '\0') {
      puVar5 = &ui_system_data_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc318,0x180c827e0);
    }
    puVar6 = (int8_t *)(**(code **)(*plVar3 + 8))(plVar3,param_2,puVar5,&processed_var_4272_ptr,0x229);
  }
  puVar8 = (int8_t *)*param_1;
  if (puVar6 < puVar6 + *(uint *)(param_1 + 1)) {
    puVar9 = (int8_t *)(uint64_t)*(uint *)(param_1 + 1);
    if (puVar6 + *(uint *)(param_1 + 1) < puVar6) {
      puVar9 = (int8_t *)0x0;
    }
    puVar7 = puVar6;
    if (puVar9 != (int8_t *)0x0) {
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (puVar7 + -(int64_t)puVar6 < puVar9);
      puVar8 = (int8_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar8 != (int8_t *)0x0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar8);
  }
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  *param_1 = puVar6;
  return;
}
// 函数: void function_6a6195(void)
void function_6a6195(void)
{
  int64_t *plVar1;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  if (unaff_RBX != 0) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = unaff_EBP;
  *unaff_RSI = unaff_RDI;
  return;
}
// 函数: void function_6a61d0(uint64_t *param_1,int param_2)
void function_6a61d0(uint64_t *param_1,int param_2)
{
  int8_t uVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *puVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int8_t *puVar9;
  puVar6 = (int8_t *)0x0;
  if (param_2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar2 == '\0') {
      puVar5 = &ui_system_data_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc330,0x180c827e0);
    }
    puVar6 = (int8_t *)(**(code **)(*plVar3 + 8))(plVar3,param_2,puVar5,&processed_var_4272_ptr,0x229);
  }
  puVar8 = (int8_t *)*param_1;
  if (puVar6 < puVar6 + *(uint *)(param_1 + 1)) {
    puVar9 = (int8_t *)(uint64_t)*(uint *)(param_1 + 1);
    if (puVar6 + *(uint *)(param_1 + 1) < puVar6) {
      puVar9 = (int8_t *)0x0;
    }
    puVar7 = puVar6;
    if (puVar9 != (int8_t *)0x0) {
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (puVar7 + -(int64_t)puVar6 < puVar9);
      puVar8 = (int8_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar8 != (int8_t *)0x0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar8);
  }
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  *param_1 = puVar6;
  return;
}
// 函数: void function_6a61e4(uint64_t *param_1,int param_2)
void function_6a61e4(uint64_t *param_1,int param_2)
{
  int8_t uVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *puVar5;
  int8_t *puVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  int8_t *puVar9;
  puVar6 = (int8_t *)0x0;
  if (param_2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar2 == '\0') {
      puVar5 = &ui_system_data_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc330,0x180c827e0);
    }
    puVar6 = (int8_t *)(**(code **)(*plVar3 + 8))(plVar3,param_2,puVar5,&processed_var_4272_ptr,0x229);
  }
  puVar8 = (int8_t *)*param_1;
  if (puVar6 < puVar6 + *(uint *)(param_1 + 1)) {
    puVar9 = (int8_t *)(uint64_t)*(uint *)(param_1 + 1);
    if (puVar6 + *(uint *)(param_1 + 1) < puVar6) {
      puVar9 = (int8_t *)0x0;
    }
    puVar7 = puVar6;
    if (puVar9 != (int8_t *)0x0) {
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (puVar7 + -(int64_t)puVar6 < puVar9);
      puVar8 = (int8_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar8 != (int8_t *)0x0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar8);
  }
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  *param_1 = puVar6;
  return;
}
// 函数: void function_6a62b5(void)
void function_6a62b5(void)
{
  int64_t *plVar1;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  if (unaff_RBX != 0) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  *(int32_t *)((int64_t)unaff_RSI + 0xc) = unaff_EBP;
  *unaff_RSI = unaff_RDI;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6a62f0(uint64_t *param_1)
void function_6a62f0(uint64_t *param_1)
{
  if (param_1 != (uint64_t *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*system_system_buffer_config + 0x10))(system_system_buffer_config,param_1);
  }
  return;
}
bool function_6a6320(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  int8_t astack_special_x_8 [8];
  void *plocal_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  uint64_t local_var_10;
  puVar1 = (int32_t *)RenderingSystem_ShaderProcessor(param_1,astack_special_x_8);
  local_var_18 = *puVar1;
  plocal_var_28 = &memory_allocator_3200_ptr;
  local_var_20 = param_2;
  local_var_10 = param_4;
  RenderingSystem_StateManager0(param_1,&plocal_var_28,0x11);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
// 函数: void function_6a6390(int64_t param_1,uint64_t param_2)
void function_6a6390(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uVar4 = (uint)param_2;
  if ((uVar4 == 0) || ((uVar4 & uVar4 - 1) != 0)) {
    uVar4 = (uint)(param_2 >> 1) & 0x7fffffff | uVar4;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = (uVar4 >> 0x10 | uVar4) + 1;
  }
  iVar5 = (int)(int64_t)((float)uVar4 * *(float *)(param_1 + 0x28));
  iVar3 = uVar4 * 4 + iVar5 * 4;
  iVar5 = iVar5 * 0x10 + iVar3 + (-iVar3 & 0xfU);
  if (iVar5 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,iVar5,&ui_system_data_1832_ptr,&rendering_buffer_2848_ptr,0x174);
  }
// WARNING: Subroutine does not return
  memset(uVar2,0xffffffff,uVar4 * 4);
}
// 函数: void function_6a6540(int64_t *param_1,uint param_2,int8_t *param_3)
void function_6a6540(int64_t *param_1,uint param_2,int8_t *param_3)
{
  int8_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  uint64_t uVar6;
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    function_6a60b0();
  }
  uVar2 = 0;
  puVar4 = (int8_t *)((uint64_t)*(uint *)(param_1 + 1) + *param_1);
  uVar6 = (int64_t)((uint64_t)param_2 + *param_1) - (int64_t)puVar4;
  if ((int8_t *)((uint64_t)param_2 + *param_1) < puVar4) {
    uVar6 = uVar2;
  }
  if (uVar6 != 0) {
    puVar5 = puVar4;
    if (0xf < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar4) || (puVar4 + (uVar6 - 1) < param_3)) {
        uVar3 = uVar6 & 0xfffffffffffffff0;
        do {
          uVar2 = uVar2 + 0x10;
        } while (uVar2 < uVar3);
        puVar5 = puVar4 + uVar3;
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
      }
    }
    for (; uVar2 < uVar6; uVar2 = uVar2 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}
// 函数: void function_6a6600(int64_t *param_1,uint param_2,int8_t *param_3)
void function_6a6600(int64_t *param_1,uint param_2,int8_t *param_3)
{
  int8_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  uint64_t uVar6;
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    function_6a61d0();
  }
  uVar2 = 0;
  puVar4 = (int8_t *)((uint64_t)*(uint *)(param_1 + 1) + *param_1);
  uVar6 = (int64_t)((uint64_t)param_2 + *param_1) - (int64_t)puVar4;
  if ((int8_t *)((uint64_t)param_2 + *param_1) < puVar4) {
    uVar6 = uVar2;
  }
  if (uVar6 != 0) {
    puVar5 = puVar4;
    if (0xf < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar4) || (puVar4 + (uVar6 - 1) < param_3)) {
        uVar3 = uVar6 & 0xfffffffffffffff0;
        do {
          uVar2 = uVar2 + 0x10;
        } while (uVar2 < uVar3);
        puVar5 = puVar4 + uVar3;
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
      }
    }
    for (; uVar2 < uVar6; uVar2 = uVar2 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}
// 函数: void function_6a66c0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void function_6a66c0(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5)
{
  void *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  plocal_var_38 = &memory_allocator_3264_ptr;
  local_var_18 = param_5;
  local_var_30 = param_2;
  local_var_28 = param_3;
  local_var_20 = param_4;
  RenderingSystem_StateManager0(param_1,&plocal_var_38,0x1b);
  return;
}
int8_t function_6a6700(int64_t param_1,uint64_t param_2,int *param_3)
{
  uint64_t *puVar1;
  uint64_t local_var_38;
  uint64_t local_var_30;
  void *plocal_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint64_t local_var_10;
  if (*(int *)(param_1 + 0x178) != param_3[2] - *param_3) {
    return 2;
  }
  local_var_38 = *(uint64_t *)param_3;
  local_var_30 = *(uint64_t *)(param_3 + 2);
  puVar1 = (uint64_t *)function_6a41e0(param_1,&plocal_var_28,param_1 + 0x130,&local_var_38);
  local_var_18 = *puVar1;
  *(uint64_t *)param_3 = local_var_18;
  local_var_10 = puVar1[1];
  *(uint64_t *)(param_3 + 2) = local_var_10;
  plocal_var_28 = &memory_allocator_3184_ptr;
  local_var_20 = param_2;
  RenderingSystem_StateManager0(param_1,&plocal_var_28,0xd);
  return *(char *)(param_1 + 0x1b8) == '\0';
}
// 函数: void function_6a67c0(int64_t param_1,int64_t *param_2)
void function_6a67c0(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
// WARNING: Could not recover jumptable at 0x0001806a67f1. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10);
  return;
}
// 函数: void function_6a6800(int64_t param_1,int64_t *param_2)
void function_6a6800(int64_t param_1,int64_t *param_2)
{
  char acStackX_8 [8];
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x48))(param_2,param_1 + 0x18);
  acStackX_8[0] = *(char *)(param_1 + 0x1a) != '\0';
  (**(code **)(*param_2 + 0x50))(param_2,acStackX_8);
  *(bool *)(param_1 + 0x1a) = acStackX_8[0] != '\0';
  return;
}
// 函数: void function_6a6870(int64_t param_1,int64_t *param_2)
void function_6a6870(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 8);
// WARNING: Could not recover jumptable at 0x0001806a68a1. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x18);
  return;
}
// 函数: void function_6a68b0(int64_t param_1,int64_t *param_2)
void function_6a68b0(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
// WARNING: Could not recover jumptable at 0x0001806a68e1. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
  return;
}
// 函数: void function_6a68f0(int64_t param_1,int64_t *param_2)
void function_6a68f0(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
// WARNING: Could not recover jumptable at 0x0001806a692e. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x18);
  return;
}
// 函数: void function_6a6940(int64_t param_1,int64_t *param_2)
void function_6a6940(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x14);
// WARNING: Could not recover jumptable at 0x0001806a698b. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x18);
  return;
}
// 函数: void function_6a6990(int64_t param_1,int64_t *param_2)
void function_6a6990(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
// WARNING: Could not recover jumptable at 0x0001806a69d8. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x10);
  return;
}
// 函数: void function_6a69e0(int64_t param_1,int64_t *param_2)
void function_6a69e0(int64_t param_1,int64_t *param_2)
{
  byte abStackX_8 [8];
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x14);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x18);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x1c);
  abStackX_8[0] = *(byte *)(param_1 + 0x20);
  (**(code **)(*param_2 + 0x50))(param_2,abStackX_8);
  *(uint *)(param_1 + 0x20) = (uint)abStackX_8[0];
// WARNING: Could not recover jumptable at 0x0001806a6a7a. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x28);
  return;
}
// 函数: void function_6a6a80(int64_t param_1,int64_t *param_2)
void function_6a6a80(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x14);
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x18);
// WARNING: Could not recover jumptable at 0x0001806a6aef. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x28);
  return;
}
// 函数: void function_6a6b00(int64_t param_1,int64_t *param_2)
void function_6a6b00(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
// WARNING: Could not recover jumptable at 0x0001806a6b55. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x14);
  return;
}
// 函数: void function_6a6b80(int64_t param_1,int64_t *param_2)
void function_6a6b80(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
// WARNING: Could not recover jumptable at 0x0001806a6bcb. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x20);
  return;
}
// 函数: void function_6a6bd0(int64_t param_1,int64_t *param_2)
void function_6a6bd0(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x10);
// WARNING: Could not recover jumptable at 0x0001806a6c1b. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x18);
  return;
}
// 函数: void function_6a6c20(int64_t param_1,int64_t *param_2)
void function_6a6c20(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
// WARNING: Could not recover jumptable at 0x0001806a6c51. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
  return;
}
// 函数: void function_6a6c60(int64_t param_1,int64_t *param_2)
void function_6a6c60(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x14);
// WARNING: Could not recover jumptable at 0x0001806a6cab. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x18);
  return;
}
// 函数: void function_6a6cb0(int64_t param_1,int64_t *param_2)
void function_6a6cb0(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
// WARNING: Could not recover jumptable at 0x0001806a6ce1. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x10);
  return;
}
// 函数: void function_6a6cf0(int64_t param_1,int64_t *param_2)
void function_6a6cf0(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x14);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x18);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x1c);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x20);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x24);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x28);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x2c);
// WARNING: Could not recover jumptable at 0x0001806a6d93. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x30);
  return;
}
// 函数: void function_6a6da0(int64_t param_1,int64_t *param_2)
void function_6a6da0(int64_t param_1,int64_t *param_2)
{
  char acStackX_8 [8];
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
  acStackX_8[0] = *(char *)(param_1 + 0x10) != '\0';
  (**(code **)(*param_2 + 0x50))(param_2,acStackX_8);
  *(bool *)(param_1 + 0x10) = acStackX_8[0] != '\0';
  return;
}
// 函数: void function_6a6df0(int64_t param_1,int64_t *param_2)
void function_6a6df0(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x14);
// WARNING: Could not recover jumptable at 0x0001806a6e45. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  return;
}
// 函数: void function_6a6e50(int64_t param_1,int64_t *param_2)
void function_6a6e50(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x28);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x2c);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x30);
// WARNING: Could not recover jumptable at 0x0001806a6ebf. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  return;
}
// 函数: void function_6a6ed0(int64_t param_1,int64_t *param_2)
void function_6a6ed0(int64_t param_1,int64_t *param_2)
{
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0xc);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x14);
// WARNING: Could not recover jumptable at 0x0001806a6f32. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x18);
  return;
}