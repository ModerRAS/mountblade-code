#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part096.c - 9 个函数

// 函数: void FUN_1806a1a0d(void)
void FUN_1806a1a0d(void)

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






// 函数: void FUN_1806a1a7b(void)
void FUN_1806a1a7b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806a1b30(void)

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
                       (system_system_buffer_config,0xa8,&unknown_var_2776_ptr,&unknown_var_2472_ptr,300);
    puVar10 = (uint64_t *)0x0;
    if (puVar3 != (uint64_t *)0x0) {
      puVar3[2] = 0;
      *puVar3 = &unknown_var_2320_ptr;
      puVar3[1] = &unknown_var_2448_ptr;
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
      FUN_1806a2bd0(puVar3 + 7,0x40);
      iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
      puVar7 = puVar10;
      if (iVar2 != 0) {
        plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        plVar5 = (int64_t *)PxGetFoundation();
        cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (cVar1 == '\0') {
          puVar6 = &unknown_var_1728_ptr;
        }
        else {
          puVar6 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
        }
        puVar7 = (uint64_t *)(**(code **)(*plVar4 + 8))(plVar4,iVar2,puVar6,&unknown_var_1664_ptr,0x71);
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
      uVar8 = FUN_1806b20f0(uVar8);
      puVar3[0x12] = uVar8;
      lVar9 = (**(code **)(*system_system_buffer_config + 8))
                        (system_system_buffer_config,0x40,&unknown_var_2528_ptr,&unknown_var_2472_ptr,0x5e);
      if (lVar9 != 0) {
        puVar10 = (uint64_t *)FUN_1806b6ae0(lVar9,puVar3);
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

int32_t FUN_1806a1b59(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
    *puVar3 = &unknown_var_2320_ptr;
    puVar3[1] = &unknown_var_2448_ptr;
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
    FUN_1806a2bd0(puVar3 + 7,0x40);
    iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
    puVar7 = puVar10;
    if (iVar2 != 0) {
      plVar4 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (int64_t *)PxGetFoundation();
      cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar1 == '\0') {
        puVar6 = &unknown_var_1728_ptr;
      }
      else {
        puVar6 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
      }
      puVar7 = (uint64_t *)(**(code **)(*plVar4 + 8))(plVar4,iVar2,puVar6,&unknown_var_1664_ptr,0x71);
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
    uVar8 = FUN_1806b20f0(uVar8);
    puVar3[0x12] = uVar8;
    lVar9 = (**(code **)(*system_system_buffer_config + 8))
                      (system_system_buffer_config,0x40,&unknown_var_2528_ptr,&unknown_var_2472_ptr,0x5e);
    if (lVar9 != 0) {
      puVar10 = (uint64_t *)FUN_1806b6ae0(lVar9,puVar3);
    }
    puVar3[0x13] = puVar10;
    puVar10 = puVar3;
  }
  system_system_config = puVar10;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),puVar10 != (uint64_t *)0x0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806a1b8e(uint64_t *param_1)

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
  unaff_RBX[1] = &unknown_var_2448_ptr;
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
  FUN_1806a2bd0(param_1,(int)unaff_RDI + 0x40);
  iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  uVar6 = unaff_RDI;
  if (iVar2 != 0) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (int64_t *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar5 = &unknown_var_1728_ptr;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar5,&unknown_var_1664_ptr,0x71);
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
  uVar6 = FUN_1806b20f0(uVar6);
  unaff_RBX[0x12] = uVar6;
  lVar7 = (**(code **)(*system_system_buffer_config + 8))(system_system_buffer_config,0x40,&unknown_var_2528_ptr,&unknown_var_2472_ptr,0x5e)
  ;
  if (lVar7 != 0) {
    unaff_RDI = FUN_1806b6ae0(lVar7);
  }
  unaff_RBX[0x13] = unaff_RDI;
  system_system_config = unaff_RBX;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),unaff_RBX != (uint64_t *)0x0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806a1bf0(void)

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
  uVar4 = FUN_1806b20f0(uVar4);
  *(uint64_t *)(unaff_RBX + 0x90) = uVar4;
  lVar5 = (**(code **)(*system_system_buffer_config + 8))(system_system_buffer_config,0x40,&unknown_var_2528_ptr,&unknown_var_2472_ptr,0x5e)
  ;
  if (lVar5 != 0) {
    unaff_RDI = FUN_1806b6ae0(lVar5);
  }
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RDI;
  system_system_config = unaff_RBX;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),unaff_RBX != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806a1c51(void)

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
  uVar1 = FUN_1806b20f0(uVar1);
  *(uint64_t *)(unaff_RBX + 0x90) = uVar1;
  lVar2 = (**(code **)(*system_system_buffer_config + 8))(system_system_buffer_config,0x40,&unknown_var_2528_ptr,&unknown_var_2472_ptr,0x5e)
  ;
  if (lVar2 != 0) {
    unaff_RDI = FUN_1806b6ae0(lVar2);
  }
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RDI;
  system_system_config = unaff_RBX;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),unaff_RBX != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806a1cd7(void)

{
  uint64_t uVar1;
  int64_t unaff_RBX;
  
  uVar1 = FUN_1806b6ae0();
  *(uint64_t *)(unaff_RBX + 0x98) = uVar1;
  system_system_config = unaff_RBX;
  system_system_config = system_system_config + 1;
  return CONCAT31((int3)((uint)system_system_config >> 8),unaff_RBX != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806a1d05(void)

{
  int in_EAX;
  
  system_system_config = in_EAX + 1;
  return CONCAT31((int3)((uint)(in_EAX + 1) >> 8),system_system_config != 0);
}



uint64_t FUN_1806a1d40(int64_t param_1,uint64_t param_2,char param_3,uint64_t param_4)

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






// 函数: void FUN_1806a1dc0(int64_t param_1,uint64_t param_2,uint64_t param_3,char param_4,
void FUN_1806a1dc0(int64_t param_1,uint64_t param_2,uint64_t param_3,char param_4,
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






// 函数: void FUN_1806a1e30(int64_t param_1)
void FUN_1806a1e30(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t auStackX_8 [2];
  void *puStack_58;
  uint64_t uStack_50;
  int8_t auStack_48 [16];
  void *puStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  int64_t lStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  uStack_30 = 0x31e5e882;
  uStack_2c = 1;
  puStack_38 = &unknown_var_2024_ptr;
  plVar1 = (int64_t *)
           _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                     (auStack_48);
  lStack_28 = *plVar1 * 10;
  lVar2 = _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                    (auStack_48);
  uStack_20 = *(uint64_t *)(lVar2 + 8);
  uStack_18 = 1;
  uStack_50 = (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x20))();
  puStack_58 = &unknown_var_2680_ptr;
  func_0x0001806a2e70(&puStack_58,&uStack_30);
  (**(code **)(puStack_58 + 0x40))(&puStack_58,&uStack_2c);
  (**(code **)(puStack_58 + 0x30))(&puStack_58,&lStack_28);
  (**(code **)(puStack_58 + 0x30))(&puStack_58,&uStack_20);
  auStackX_8[0] = uStack_18;
  (**(code **)(puStack_58 + 0x40))(&puStack_58,auStackX_8);
  uStack_18 = auStackX_8[0];
  (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x28))();
  return;
}






// 函数: void FUN_1806a1f20(int64_t param_1)
void FUN_1806a1f20(int64_t param_1)

{
  int64_t *plVar1;
  void *puStack_48;
  void *puStack_40;
  void *puStack_38;
  void *puStack_30;
  void *puStack_28;
  void *puStack_20;
  
  plVar1 = (int64_t *)(param_1 + 8);
  puStack_48 = &unknown_var_1904_ptr;
  puStack_40 = &unknown_var_2040_ptr;
  (**(code **)(*(int64_t *)(param_1 + 8) + 8))(plVar1,&puStack_48);
  puStack_38 = (void *)0x0;
  puStack_30 = (void *)0x0;
  puStack_28 = &unknown_var_1872_ptr;
  puStack_20 = &unknown_var_1880_ptr;
  puStack_48 = &unknown_var_1904_ptr;
  puStack_40 = &unknown_var_2040_ptr;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&puStack_48,&unknown_var_1016_ptr,&unknown_var_2160_ptr,&puStack_28,2,&puStack_38);
  puStack_40 = &unknown_var_2056_ptr;
  puStack_48 = &unknown_var_1904_ptr;
  puStack_28 = &unknown_var_1904_ptr;
  puStack_20 = &unknown_var_2056_ptr;
  (**(code **)(*plVar1 + 8))(plVar1,&puStack_28);
  puStack_28 = (void *)0x0;
  puStack_20 = (void *)0x0;
  puStack_38 = &unknown_var_1872_ptr;
  puStack_30 = &unknown_var_1880_ptr;
  puStack_48 = &unknown_var_1904_ptr;
  puStack_40 = &unknown_var_2056_ptr;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&puStack_48,&unknown_var_1016_ptr,&unknown_var_2184_ptr,&puStack_38,2,&puStack_28);
  puStack_40 = &unknown_var_1888_ptr;
  puStack_48 = &unknown_var_1904_ptr;
  puStack_28 = &unknown_var_1904_ptr;
  puStack_20 = &unknown_var_1888_ptr;
  (**(code **)(*plVar1 + 8))(plVar1,&puStack_28);
  puStack_28 = (void *)0x0;
  puStack_20 = (void *)0x0;
  puStack_38 = &unknown_var_1872_ptr;
  puStack_30 = &unknown_var_1880_ptr;
  puStack_48 = &unknown_var_1904_ptr;
  puStack_40 = &unknown_var_1888_ptr;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&puStack_48,&unknown_var_1016_ptr,&unknown_var_2208_ptr,&puStack_38,2,&puStack_28);
  return;
}






// 函数: void FUN_1806a2100(uint64_t *param_1)
void FUN_1806a2100(uint64_t *param_1)

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



uint64_t * FUN_1806a2170(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_1920_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}



uint64_t * FUN_1806a21a0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_1848_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806a21d0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_2232_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}



uint64_t * FUN_1806a2200(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806a2230(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  *param_1 = &unknown_var_2248_ptr;
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
  *param_1 = &unknown_var_2088_ptr;
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



uint64_t FUN_1806a2300(uint64_t param_1,uint64_t param_2)

{
  FUN_1806a2100();
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}



uint64_t * FUN_1806a2340(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_1920_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



int64_t FUN_1806a2370(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  FUN_1806a0f40();
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



uint64_t * FUN_1806a23d0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_2088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806a2400(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_1808_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806a2430(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_2008_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}






// 函数: void FUN_1806a2460(int64_t param_1)
void FUN_1806a2460(int64_t param_1)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  return;
}



int64_t FUN_1806a2490(int64_t param_1,int64_t *param_2,int8_t *param_3)

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
    FUN_1806a2bd0(param_1,uVar4);
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






// 函数: void FUN_1806a2630(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1806a2630(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  char acStackX_8 [8];
  uint64_t uStackX_20;
  void *apuStack_88 [3];
  int32_t uStack_70;
  char cStack_18;
  
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  (**(code **)(**(int64_t **)(param_1 + 8) + 0x18))
            (*(int64_t **)(param_1 + 8),apuStack_88,param_2);
  if ((cStack_18 != '\0') &&
     (uStackX_20 = param_3,
     puVar1 = (uint64_t *)FUN_1806a2490(param_1 + 0x20,&uStackX_20,acStackX_8),
     acStackX_8[0] == '\0')) {
    *puVar1 = param_3;
    *(int32_t *)(puVar1 + 1) = uStack_70;
  }
  apuStack_88[0] = &unknown_var_2232_ptr;
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
}






// 函数: void FUN_1806a26e0(int64_t param_1,uint64_t param_2)
void FUN_1806a26e0(int64_t param_1,uint64_t param_2)

{
  uint64_t auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  func_0x0001806a2720(param_1 + 0x20,auStackX_10);
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x10));
  return;
}






