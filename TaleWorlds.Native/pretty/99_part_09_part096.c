#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part096.c - 9 个函数
// 函数: void function_6a1a0d(void)
void function_6a1a0d(void)
{
  uint uVar1;
  int64_t unaff_RBX;
  uint uVar3;
  uint64_t unaff_RDI;
  uint64_t *puVar4;
  int64_t *unaff_R14;
  uint64_t uVar2;
  do {
    if (unaff_R14 == *(int64_t **)(unaff_RDI * 8 + *(int64_t *)(unaff_RBX + 0x18))) {
      (**(code **)(*unaff_R14 + 0x20))();
      uVar1 = (int)unaff_RDI + 1;
      uVar3 = *(uint *)(unaff_RBX + 0x20);
      puVar4 = (uint64_t *)(*(int64_t *)(unaff_RBX + 0x18) + unaff_RDI * 8);
      if (uVar1 < uVar3) {
        do {
          uVar2 = (uint64_t)uVar1;
          uVar1 = uVar1 + 1;
          *puVar4 = *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x18) + uVar2 * 8);
          uVar3 = *(uint *)(unaff_RBX + 0x20);
          puVar4 = puVar4 + 1;
        } while (uVar1 < uVar3);
      }
      *(uint *)(unaff_RBX + 0x20) = uVar3 - 1;
    }
    uVar3 = (int)unaff_RDI + 1;
    unaff_RDI = (uint64_t)uVar3;
  } while (uVar3 < *(uint *)(unaff_RBX + 0x20));
  return;
}
// 函数: void function_6a1a7b(void)
void function_6a1a7b(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_6a1b30(void)
{
  char cVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  puVar10 = system_system_config;
  if (system_system_config == 0) {
    puVar3 = (uint64_t *)
             (**(code **)(*system_system_buffer_config + 8))
                       (system_system_buffer_config,0xa8,&rendering_buffer_2776_ptr,&rendering_buffer_2472_ptr,300);
    puVar10 = (uint64_t *)0x0;
    if (puVar3 != (uint64_t *)0x0) {
      puVar3[2] = 0;
      *puVar3 = &rendering_buffer_2320_ptr;
      puVar3[1] = &rendering_buffer_2448_ptr;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = &system_callback1_ptr;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *(int32_t *)(puVar3 + 0xc) = 0x3f400000;
      *(int32_t *)((int64_t)puVar3 + 100) = 0xffffffff;
      puVar3[0xd] = 0;
      function_6a2bd0(puVar3 + 7,0x40);
      iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
      puVar7 = puVar10;
      if (iVar2 != 0) {
        plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        plVar5 = (int64_t *)PxGetFoundation();
        cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (cVar1 == '\0') {
          puVar6 = &ui_system_data_1728_ptr;
        }
        else {
          puVar6 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
        }
        puVar7 = (uint64_t *)(**(code **)(*plVar4 + 8))(plVar4,iVar2,puVar6,&ui_system_data_1664_ptr,0x71);
      }
      puVar3[0xe] = puVar7;
      __0MutexImpl_shdfnd_physx__QEAA_XZ(puVar7);
      puVar3[0xf] = 0;
      *(int16_t *)(puVar3 + 0x10) = 0;
      *(int8_t *)((int64_t)puVar3 + 0x82) = 1;
      *(int32_t *)((int64_t)puVar3 + 0x84) = 0;
      puVar3[0x11] = 1;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      uVar8 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      uVar8 = function_6b20f0(uVar8);
      puVar3[0x12] = uVar8;
      lVar9 = (**(code **)(*system_system_buffer_config + 8))
                        (system_system_buffer_config,0x40,&rendering_buffer_2528_ptr,&rendering_buffer_2472_ptr,0x5e);
      if (lVar9 != 0) {
        puVar10 = (uint64_t *)function_6b6ae0(lVar9,puVar3);
      }
      puVar3[0x13] = puVar10;
      puVar10 = puVar3;
    }
  }
  system_system_config = puVar10;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),system_system_config != (uint64_t *)0x0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_6a1b59(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  puVar3 = (uint64_t *)(**(code **)(*param_1 + 8))(param_1,0xa8,param_3,param_4,300);
  puVar10 = (uint64_t *)0x0;
  if (puVar3 != (uint64_t *)0x0) {
    puVar3[2] = 0;
    *puVar3 = &rendering_buffer_2320_ptr;
    puVar3[1] = &rendering_buffer_2448_ptr;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = &system_callback1_ptr;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(int32_t *)(puVar3 + 0xc) = 0x3f400000;
    *(int32_t *)((int64_t)puVar3 + 100) = 0xffffffff;
    puVar3[0xd] = 0;
    function_6a2bd0(puVar3 + 7,0x40);
    iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
    puVar7 = puVar10;
    if (iVar2 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (int64_t *)PxGetFoundation();
      cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar1 == '\0') {
        puVar6 = &ui_system_data_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
      }
      puVar7 = (uint64_t *)(**(code **)(*plVar4 + 8))(plVar4,iVar2,puVar6,&ui_system_data_1664_ptr,0x71);
    }
    puVar3[0xe] = puVar7;
    __0MutexImpl_shdfnd_physx__QEAA_XZ(puVar7);
    puVar3[0xf] = 0;
    *(int16_t *)(puVar3 + 0x10) = 0;
    *(int8_t *)((int64_t)puVar3 + 0x82) = 1;
    *(int32_t *)((int64_t)puVar3 + 0x84) = 0;
    puVar3[0x11] = 1;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    uVar8 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar8 = function_6b20f0(uVar8);
    puVar3[0x12] = uVar8;
    lVar9 = (**(code **)(*system_system_buffer_config + 8))
                      (system_system_buffer_config,0x40,&rendering_buffer_2528_ptr,&rendering_buffer_2472_ptr,0x5e);
    if (lVar9 != 0) {
      puVar10 = (uint64_t *)function_6b6ae0(lVar9,puVar3);
    }
    puVar3[0x13] = puVar10;
    puVar10 = puVar3;
  }
  system_system_config = puVar10;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),puVar10 != (uint64_t *)0x0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_6a1b8e(uint64_t *param_1)
{
  char cVar1;
  int iVar2;
  uint64_t in_RAX;
  int64_t *plVar3;
  int64_t *plVar4;
  void *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *unaff_RBX;
  uint64_t unaff_RDI;
  *unaff_RBX = in_RAX;
  unaff_RBX[1] = &rendering_buffer_2448_ptr;
  unaff_RBX[3] = unaff_RDI;
  unaff_RBX[4] = unaff_RDI;
  unaff_RBX[5] = unaff_RDI;
  unaff_RBX[6] = &system_callback1_ptr;
  *param_1 = unaff_RDI;
  param_1[1] = unaff_RDI;
  param_1[2] = unaff_RDI;
  param_1[3] = unaff_RDI;
  param_1[4] = unaff_RDI;
  *(int32_t *)(param_1 + 5) = 0x3f400000;
  *(int32_t *)((int64_t)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = unaff_RDI;
  function_6a2bd0(param_1,(int)unaff_RDI + 0x40);
  iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  uVar6 = unaff_RDI;
  if (iVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar5 = &ui_system_data_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar5,&ui_system_data_1664_ptr,0x71);
  }
  unaff_RBX[0xe] = uVar6;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar6);
  unaff_RBX[0xf] = unaff_RDI;
  *(short *)(unaff_RBX + 0x10) = (short)unaff_RDI;
  *(int8_t *)((int64_t)unaff_RBX + 0x82) = 1;
  *(int *)((int64_t)unaff_RBX + 0x84) = (int)unaff_RDI;
  unaff_RBX[0x11] = 1;
  unaff_RBX[0x13] = unaff_RDI;
  unaff_RBX[0x14] = unaff_RDI;
  uVar6 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar6 = function_6b20f0(uVar6);
  unaff_RBX[0x12] = uVar6;
  lVar7 = (**(code **)(*system_system_buffer_config + 8))(system_system_buffer_config,0x40,&rendering_buffer_2528_ptr,&rendering_buffer_2472_ptr,0x5e)
  ;
  if (lVar7 != 0) {
    unaff_RDI = function_6b6ae0(lVar7);
  }
  unaff_RBX[0x13] = unaff_RDI;
  system_system_config = unaff_RBX;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),unaff_RBX != (uint64_t *)0x0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_6a1bf0(void)
{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t unaff_RBX;
  uint64_t unaff_RDI;
  plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (int64_t *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 != '\0') {
    __std_type_info_name(0x180bfc198,0x180c827e0);
  }
  uVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  *(uint64_t *)(unaff_RBX + 0x70) = uVar4;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar4);
  *(uint64_t *)(unaff_RBX + 0x78) = unaff_RDI;
  *(short *)(unaff_RBX + 0x80) = (short)unaff_RDI;
  *(int8_t *)(unaff_RBX + 0x82) = 1;
  *(int *)(unaff_RBX + 0x84) = (int)unaff_RDI;
  *(uint64_t *)(unaff_RBX + 0x88) = 1;
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RDI;
  *(uint64_t *)(unaff_RBX + 0xa0) = unaff_RDI;
  uVar4 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar4 = function_6b20f0(uVar4);
  *(uint64_t *)(unaff_RBX + 0x90) = uVar4;
  lVar5 = (**(code **)(*system_system_buffer_config + 8))(system_system_buffer_config,0x40,&rendering_buffer_2528_ptr,&rendering_buffer_2472_ptr,0x5e)
  ;
  if (lVar5 != 0) {
    unaff_RDI = function_6b6ae0(lVar5);
  }
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RDI;
  system_system_config = unaff_RBX;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),unaff_RBX != 0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_6a1c51(void)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  uint64_t unaff_RDI;
  *(uint64_t *)(unaff_RBX + 0x70) = unaff_RDI;
  __0MutexImpl_shdfnd_physx__QEAA_XZ();
  *(uint64_t *)(unaff_RBX + 0x78) = unaff_RDI;
  *(short *)(unaff_RBX + 0x80) = (short)unaff_RDI;
  *(int8_t *)(unaff_RBX + 0x82) = 1;
  *(int *)(unaff_RBX + 0x84) = (int)unaff_RDI;
  *(uint64_t *)(unaff_RBX + 0x88) = 1;
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RDI;
  *(uint64_t *)(unaff_RBX + 0xa0) = unaff_RDI;
  uVar1 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar1 = function_6b20f0(uVar1);
  *(uint64_t *)(unaff_RBX + 0x90) = uVar1;
  lVar2 = (**(code **)(*system_system_buffer_config + 8))(system_system_buffer_config,0x40,&rendering_buffer_2528_ptr,&rendering_buffer_2472_ptr,0x5e)
  ;
  if (lVar2 != 0) {
    unaff_RDI = function_6b6ae0(lVar2);
  }
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RDI;
  system_system_config = unaff_RBX;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),unaff_RBX != 0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_6a1cd7(void)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  uVar1 = function_6b6ae0();
  *(uint64_t *)(unaff_RBX + 0x98) = uVar1;
  system_system_config = unaff_RBX;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),unaff_RBX != 0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_6a1d05(void)
{
  int in_EAX;
  system_system_config = in_EAX + 1;
  return CONCAT31((int3)((uint)(in_EAX + 1) >> 8),system_system_config != 0);
}
uint64_t function_6a1d40(int64_t param_1,uint64_t param_2,char param_3,uint64_t param_4)
{
  int64_t lVar1;
  int16_t uVar2;
  int64_t *plVar3;
  if (*(int64_t **)(param_1 + 0xa0) != (int64_t *)0x0) {
    uVar2 = (**(code **)(**(int64_t **)(param_1 + 0xa0) + 0x40))();
    plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0xa0) + 0x10);
    lVar1 = *plVar3;
    if (param_3 != '\0') {
      (**(code **)(lVar1 + 8))();
      return 0;
    }
    (**(code **)(lVar1 + 0x10))(plVar3,uVar2,param_4);
  }
  return 0;
}
// 函数: void function_6a1dc0(int64_t param_1,uint64_t param_2,uint64_t param_3,char param_4,
void function_6a1dc0(int64_t param_1,uint64_t param_2,uint64_t param_3,char param_4,
                  uint64_t param_5)
{
  int64_t lVar1;
  int16_t uVar2;
  int64_t *plVar3;
  plVar3 = *(int64_t **)(param_1 + 0xa0);
  if (plVar3 != (int64_t *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_3);
    plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0xa0) + 0x10);
    lVar1 = *plVar3;
    if (param_4 != '\0') {
// WARNING: Could not recover jumptable at 0x0001806a1e11. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(lVar1 + 0x18))();
      return;
    }
    (**(code **)(lVar1 + 0x20))(plVar3,uVar2,param_5);
  }
  return;
}
// 函数: void function_6a1e30(int64_t param_1)
void function_6a1e30(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t astack_special_x_8 [2];
  void *plocal_var_58;
  uint64_t local_var_50;
  int8_t stack_array_48 [16];
  void *plocal_var_38;
  int32_t local_var_30;
  int32_t local_var_2c;
  int64_t lStack_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  local_var_30 = 0x31e5e882;
  local_var_2c = 1;
  plocal_var_38 = &rendering_buffer_2024_ptr;
  plVar1 = (int64_t *)
           _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                     (stack_array_48);
  lStack_28 = *plVar1 * 10;
  lVar2 = _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                    (stack_array_48);
  local_var_20 = *(uint64_t *)(lVar2 + 8);
  local_var_18 = 1;
  local_var_50 = (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x20))();
  plocal_var_58 = &rendering_buffer_2680_ptr;
  SystemFunction_0001806a2e70(&plocal_var_58,&local_var_30);
  (**(code **)(plocal_var_58 + 0x40))(&plocal_var_58,&local_var_2c);
  (**(code **)(plocal_var_58 + 0x30))(&plocal_var_58,&lStack_28);
  (**(code **)(plocal_var_58 + 0x30))(&plocal_var_58,&local_var_20);
  astack_special_x_8[0] = local_var_18;
  (**(code **)(plocal_var_58 + 0x40))(&plocal_var_58,astack_special_x_8);
  local_var_18 = astack_special_x_8[0];
  (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x28))();
  return;
}
// 函数: void function_6a1f20(int64_t param_1)
void function_6a1f20(int64_t param_1)
{
  int64_t *plVar1;
  void *plocal_var_48;
  void *plocal_var_40;
  void *plocal_var_38;
  void *plocal_var_30;
  void *plocal_var_28;
  void *plocal_var_20;
  plVar1 = (int64_t *)(param_1 + 8);
  plocal_var_48 = &ui_system_data_1904_ptr;
  plocal_var_40 = &rendering_buffer_2040_ptr;
  (**(code **)(*(int64_t *)(param_1 + 8) + 8))(plVar1,&plocal_var_48);
  plocal_var_38 = (void *)0x0;
  plocal_var_30 = (void *)0x0;
  plocal_var_28 = &ui_system_data_1872_ptr;
  plocal_var_20 = &ui_system_data_1880_ptr;
  plocal_var_48 = &ui_system_data_1904_ptr;
  plocal_var_40 = &rendering_buffer_2040_ptr;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&plocal_var_48,&ui_system_data_1016_ptr,&rendering_buffer_2160_ptr,&plocal_var_28,2,&plocal_var_38);
  plocal_var_40 = &rendering_buffer_2056_ptr;
  plocal_var_48 = &ui_system_data_1904_ptr;
  plocal_var_28 = &ui_system_data_1904_ptr;
  plocal_var_20 = &rendering_buffer_2056_ptr;
  (**(code **)(*plVar1 + 8))(plVar1,&plocal_var_28);
  plocal_var_28 = (void *)0x0;
  plocal_var_20 = (void *)0x0;
  plocal_var_38 = &ui_system_data_1872_ptr;
  plocal_var_30 = &ui_system_data_1880_ptr;
  plocal_var_48 = &ui_system_data_1904_ptr;
  plocal_var_40 = &rendering_buffer_2056_ptr;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&plocal_var_48,&ui_system_data_1016_ptr,&rendering_buffer_2184_ptr,&plocal_var_38,2,&plocal_var_28);
  plocal_var_40 = &ui_system_data_1888_ptr;
  plocal_var_48 = &ui_system_data_1904_ptr;
  plocal_var_28 = &ui_system_data_1904_ptr;
  plocal_var_20 = &ui_system_data_1888_ptr;
  (**(code **)(*plVar1 + 8))(plVar1,&plocal_var_28);
  plocal_var_28 = (void *)0x0;
  plocal_var_20 = (void *)0x0;
  plocal_var_38 = &ui_system_data_1872_ptr;
  plocal_var_30 = &ui_system_data_1880_ptr;
  plocal_var_48 = &ui_system_data_1904_ptr;
  plocal_var_40 = &ui_system_data_1888_ptr;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&plocal_var_48,&ui_system_data_1016_ptr,&rendering_buffer_2208_ptr,&plocal_var_38,2,&plocal_var_28);
  return;
}
// 函数: void function_6a2100(uint64_t *param_1)
void function_6a2100(uint64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  *param_1 = &system_callback1_ptr;
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[8]);
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return;
}
uint64_t * function_6a2170(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1920_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}
uint64_t * function_6a21a0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1848_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * function_6a21d0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2232_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}
uint64_t * function_6a2200(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * function_6a2230(uint64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  *param_1 = &rendering_buffer_2248_ptr;
  (**(code **)(*(int64_t *)param_1[1] + 0xd8))();
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[2]);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  *param_1 = &rendering_buffer_2088_ptr;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x58);
  }
  return param_1;
}
uint64_t function_6a2300(uint64_t param_1,uint64_t param_2)
{
  function_6a2100();
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}
uint64_t * function_6a2340(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1920_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
int64_t function_6a2370(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  function_6a0f40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0xa8);
    }
  }
  return param_1;
}
uint64_t * function_6a23d0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * function_6a2400(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1808_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * function_6a2430(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &rendering_buffer_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}
// 函数: void function_6a2460(int64_t param_1)
void function_6a2460(int64_t param_1)
{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  return;
}
int64_t function_6a2490(int64_t param_1,int64_t *param_2,int8_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = *param_2;
    uVar2 = ~(lVar1 << 0x20) + lVar1;
    uVar2 = uVar2 ^ uVar2 >> 0x16;
    uVar2 = uVar2 + ~(uVar2 << 0xd);
    uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar2 = uVar2 + ~(uVar2 << 0x1b);
    uVar2 = (uint64_t)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & *(int *)(param_1 + 0x24) - 1U);
    uVar3 = *(uint *)(*(int64_t *)(param_1 + 0x18) + uVar2 * 4);
    bVar5 = uVar3 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(int64_t *)(*(int64_t *)(param_1 + 8) + (uint64_t)uVar3 * 0x10) == lVar1) break;
        uVar3 = *(uint *)(*(int64_t *)(param_1 + 0x10) + (uint64_t)uVar3 * 4);
      } while (uVar3 != 0xffffffff);
      bVar5 = uVar3 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (uint64_t)uVar3 * 0x10 + *(int64_t *)(param_1 + 8);
    }
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x20)) goto LAB_1806a25ea;
  uVar3 = *(uint *)(param_1 + 0x24);
  if (uVar3 == 0) {
    uVar4 = 0x10;
LAB_1806a2581:
    function_6a2bd0(param_1,uVar4);
    uVar3 = *(uint *)(param_1 + 0x24);
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar3 < uVar4) goto LAB_1806a2581;
  }
  uVar2 = *param_2 + ~(*param_2 << 0x20);
  uVar2 = uVar2 ^ uVar2 >> 0x16;
  uVar2 = uVar2 + ~(uVar2 << 0xd);
  uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
  uVar2 = uVar2 ^ uVar2 >> 0xf;
  uVar2 = uVar2 + ~(uVar2 << 0x1b);
  uVar2 = (uint64_t)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & uVar3 - 1);
LAB_1806a25ea:
  uVar3 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar3 + 1;
  *(int32_t *)(*(int64_t *)(param_1 + 0x10) + (uint64_t)uVar3 * 4) =
       *(int32_t *)(*(int64_t *)(param_1 + 0x18) + uVar2 * 4);
  *(uint *)(*(int64_t *)(param_1 + 0x18) + uVar2 * 4) = uVar3;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return (uint64_t)uVar3 * 0x10 + *(int64_t *)(param_1 + 8);
}
// 函数: void function_6a2630(int64_t param_1,uint64_t param_2,uint64_t param_3)
void function_6a2630(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t *puVar1;
  char acStackX_8 [8];
  uint64_t stack_special_x_20;
  void *aplocal_var_88 [3];
  int32_t local_var_70;
  char cStack_18;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))
            (*(int64_t **)(param_1 + 8),aplocal_var_88,param_2);
  if ((cStack_18 != '\0') &&
     (stack_special_x_20 = param_3,
     puVar1 = (uint64_t *)function_6a2490(param_1 + 0x20,&stack_special_x_20,acStackX_8),
     acStackX_8[0] == '\0')) {
    *puVar1 = param_3;
    *(int32_t *)(puVar1 + 1) = local_var_70;
  }
  aplocal_var_88[0] = &rendering_buffer_2232_ptr;
// WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
}
// 函数: void function_6a26e0(int64_t param_1,uint64_t param_2)
void function_6a26e0(int64_t param_1,uint64_t param_2)
{
  uint64_t astack_special_x_10 [3];
  astack_special_x_10[0] = param_2;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  SystemFunction_0001806a2720(param_1 + 0x20,astack_special_x_10);
// WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  return;
}