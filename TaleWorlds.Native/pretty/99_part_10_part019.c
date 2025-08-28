#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part019.c - 18 个函数

// 函数: void FUN_1806ae700(int64_t *param_1)
void FUN_1806ae700(int64_t *param_1)

{
  int64_t lVar1;
  void *puStack_78;
  void *puStack_70;
  int8_t auStack_68 [96];
  
  puStack_78 = &processed_var_4648_ptr;
  puStack_70 = &processed_var_4632_ptr;
  lVar1 = CoreEngine_ConfigLoader(0x8094ad58,&puStack_78,1);
  *(int32_t *)(lVar1 + 0x28) = 0x18;
  *(int32_t *)(lVar1 + 0x30) = 8;
  *(int32_t *)(lVar1 + 0x48) = 0x18;
  *(int32_t *)(lVar1 + 0x50) = 8;
  *(int8_t *)(lVar1 + 0x68) = 1;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4432_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x41);
  *(int32_t *)(lVar1 + 0x28) = 1;
  *(int32_t *)(lVar1 + 0x30) = 1;
  *(int32_t *)(lVar1 + 0x48) = 1;
  *(int32_t *)(lVar1 + 0x50) = 1;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 1;
  *(int32_t *)(lVar1 + 0x24) = 0x41;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &ui_system_data_1880_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x42);
  *(int32_t *)(lVar1 + 0x28) = 1;
  *(int32_t *)(lVar1 + 0x30) = 1;
  *(int32_t *)(lVar1 + 0x48) = 1;
  *(int32_t *)(lVar1 + 0x50) = 1;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 1;
  *(int32_t *)(lVar1 + 0x24) = 0x42;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4504_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x4b);
  *(int32_t *)(lVar1 + 0x28) = 1;
  *(int32_t *)(lVar1 + 0x30) = 1;
  *(int32_t *)(lVar1 + 0x48) = 1;
  *(int32_t *)(lVar1 + 0x50) = 1;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 1;
  *(int32_t *)(lVar1 + 0x24) = 0x4b;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4440_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x43);
  *(int32_t *)(lVar1 + 0x28) = 2;
  *(int32_t *)(lVar1 + 0x30) = 2;
  *(int32_t *)(lVar1 + 0x48) = 2;
  *(int32_t *)(lVar1 + 0x50) = 2;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 2;
  *(int32_t *)(lVar1 + 0x24) = 0x43;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4448_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x44);
  *(int32_t *)(lVar1 + 0x28) = 2;
  *(int32_t *)(lVar1 + 0x30) = 2;
  *(int32_t *)(lVar1 + 0x48) = 2;
  *(int32_t *)(lVar1 + 0x50) = 2;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 2;
  *(int32_t *)(lVar1 + 0x24) = 0x44;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4456_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x45);
  *(int32_t *)(lVar1 + 0x28) = 4;
  *(int32_t *)(lVar1 + 0x30) = 4;
  *(int32_t *)(lVar1 + 0x48) = 4;
  *(int32_t *)(lVar1 + 0x50) = 4;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 4;
  *(int32_t *)(lVar1 + 0x24) = 0x45;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4464_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x46);
  *(int32_t *)(lVar1 + 0x28) = 4;
  *(int32_t *)(lVar1 + 0x30) = 4;
  *(int32_t *)(lVar1 + 0x48) = 4;
  *(int32_t *)(lVar1 + 0x50) = 4;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 4;
  *(int32_t *)(lVar1 + 0x24) = 0x46;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4472_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x47);
  *(int32_t *)(lVar1 + 0x28) = 8;
  *(int32_t *)(lVar1 + 0x30) = 8;
  *(int32_t *)(lVar1 + 0x48) = 8;
  *(int32_t *)(lVar1 + 0x50) = 8;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 8;
  *(int32_t *)(lVar1 + 0x24) = 0x47;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4480_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x48);
  *(int32_t *)(lVar1 + 0x28) = 8;
  *(int32_t *)(lVar1 + 0x30) = 8;
  *(int32_t *)(lVar1 + 0x48) = 8;
  *(int32_t *)(lVar1 + 0x50) = 8;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 8;
  *(int32_t *)(lVar1 + 0x24) = 0x48;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4488_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x49);
  *(int32_t *)(lVar1 + 0x28) = 4;
  *(int32_t *)(lVar1 + 0x30) = 4;
  *(int32_t *)(lVar1 + 0x48) = 4;
  *(int32_t *)(lVar1 + 0x50) = 4;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 4;
  *(int32_t *)(lVar1 + 0x24) = 0x49;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4496_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x4a);
  *(int32_t *)(lVar1 + 0x28) = 8;
  *(int32_t *)(lVar1 + 0x30) = 8;
  *(int32_t *)(lVar1 + 0x48) = 8;
  *(int32_t *)(lVar1 + 0x50) = 8;
  *(int8_t *)(lVar1 + 0x68) = 1;
  *(int32_t *)(lVar1 + 0x20) = 8;
  *(int32_t *)(lVar1 + 0x24) = 0x4a;
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4524_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x4d);
  *(int32_t *)(lVar1 + 0x28) = 4;
  *(int32_t *)(lVar1 + 0x30) = 4;
  *(int32_t *)(lVar1 + 0x48) = 8;
  *(int32_t *)(lVar1 + 0x50) = 8;
  *(int8_t *)(lVar1 + 0x68) = 1;
  FUN_1806aa620(lVar1,2,0);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &rendering_buffer_2952_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x50);
  *(int32_t *)(lVar1 + 0x28) = 4;
  *(int32_t *)(lVar1 + 0x30) = 4;
  *(int32_t *)(lVar1 + 0x48) = 8;
  *(int32_t *)(lVar1 + 0x50) = 8;
  *(int8_t *)(lVar1 + 0x68) = 1;
  FUN_1806aa620(lVar1,1,0);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &rendering_buffer_2920_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x4e);
  *(int32_t *)(lVar1 + 0x28) = 4;
  *(int32_t *)(lVar1 + 0x30) = 4;
  *(int32_t *)(lVar1 + 0x48) = 8;
  *(int32_t *)(lVar1 + 0x50) = 8;
  *(int8_t *)(lVar1 + 0x68) = 1;
  FUN_1806aa620(lVar1,2,0);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &rendering_buffer_2936_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x4f);
  *(int32_t *)(lVar1 + 0x28) = 4;
  *(int32_t *)(lVar1 + 0x30) = 4;
  *(int32_t *)(lVar1 + 0x48) = 8;
  *(int32_t *)(lVar1 + 0x50) = 8;
  *(int8_t *)(lVar1 + 0x68) = 1;
  FUN_1806aa620(lVar1,1,0);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4512_ptr;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x4c);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_4348_ptr,&system_buffer_ptr,0x42,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_7548_ptr,&system_buffer_ptr,0x42,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_4520_ptr,&system_buffer_ptr,0x42,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&rendering_buffer_24_ptr,&system_buffer_ptr,0x42,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4532_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x51);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e2ac,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e14c,&system_buffer_ptr,0x49,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4540_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x52);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e2ac,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e14c,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e148,&system_buffer_ptr,0x49,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4548_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x53);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e2ac,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e14c,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e148,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_c7ec,&system_buffer_ptr,0x49,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4572_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x55);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e2ac,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e14c,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_e148,&system_buffer_ptr,0x49,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&system_data_c7ec,&system_buffer_ptr,0x49,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4560_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x54);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5448_ptr,&system_buffer_ptr,0x52,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5456_ptr,&system_buffer_ptr,0x52,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4584_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x56);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5464_ptr,&system_buffer_ptr,0x55,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5468_ptr,&system_buffer_ptr,0x52,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4600_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x57);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5472_ptr,&system_buffer_ptr,0x52,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5480_ptr,&system_buffer_ptr,0x52,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5488_ptr,&system_buffer_ptr,0x52,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4608_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x58);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5472_ptr,&system_buffer_ptr,0x53,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5480_ptr,&system_buffer_ptr,0x53,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5488_ptr,&system_buffer_ptr,0x53,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5496_ptr,&system_buffer_ptr,0x53,1);
  puStack_78 = &ui_system_data_1872_ptr;
  puStack_70 = &processed_var_4616_ptr;
  *(int8_t *)(lVar1 + 0x68) = 1;
  lVar1 = CoreEngine_ConfigLoader(param_1,&puStack_78,0x59);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5504_ptr,&system_buffer_ptr,0x46,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5508_ptr,&system_buffer_ptr,0x46,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5512_ptr,&system_buffer_ptr,0x46,1);
  (**(code **)(*param_1 + 0x50))
            (param_1,auStack_68,*(int32_t *)(lVar1 + 0x18),&processed_var_5516_ptr,&system_buffer_ptr,0x46,1);
  *(int8_t *)(lVar1 + 0x68) = 1;
  return;
}






// 函数: void FUN_1806aff00(uint64_t *param_1,int32_t param_2)
void FUN_1806aff00(uint64_t *param_1,int32_t param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  
  puVar2 = (int32_t *)FUN_1806aa790();
  puVar6 = (int32_t *)*param_1;
  if (puVar2 < puVar2 + *(uint *)(param_1 + 1)) {
    uVar4 = 0;
    uVar5 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar2 + *(uint *)(param_1 + 1) < puVar2) {
      uVar5 = uVar4;
    }
    puVar7 = puVar2;
    if (uVar5 != 0) {
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        uVar4 = uVar4 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (uVar4 < uVar5);
      puVar6 = (int32_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar6 != (int32_t *)0x0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar6);
  }
  *param_1 = puVar2;
  *(int32_t *)((int64_t)param_1 + 0xc) = param_2;
  return;
}






// 函数: void FUN_1806affc0(uint64_t *param_1,int32_t param_2)
void FUN_1806affc0(uint64_t *param_1,int32_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar1 = (uint64_t *)FUN_1806aa830();
  puVar5 = (uint64_t *)*param_1;
  if (puVar1 < puVar1 + *(uint *)(param_1 + 1)) {
    uVar3 = 0;
    uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar1 + *(uint *)(param_1 + 1) < puVar1) {
      uVar4 = uVar3;
    }
    puVar6 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 < uVar4);
      puVar5 = (uint64_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar5 != (uint64_t *)0x0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar5);
  }
  *param_1 = puVar1;
  *(int32_t *)((int64_t)param_1 + 0xc) = param_2;
  return;
}






// 函数: void FUN_1806b0080(uint64_t *param_1,int32_t param_2)
void FUN_1806b0080(uint64_t *param_1,int32_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar1 = (uint64_t *)FUN_1806aa8d0();
  puVar5 = (uint64_t *)*param_1;
  if (puVar1 < puVar1 + *(uint *)(param_1 + 1)) {
    uVar3 = 0;
    uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar1 + *(uint *)(param_1 + 1) < puVar1) {
      uVar4 = uVar3;
    }
    puVar6 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 < uVar4);
      puVar5 = (uint64_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar5 != (uint64_t *)0x0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar5);
  }
  *param_1 = puVar1;
  *(int32_t *)((int64_t)param_1 + 0xc) = param_2;
  return;
}






// 函数: void FUN_1806b0140(uint64_t *param_1,int32_t param_2)
void FUN_1806b0140(uint64_t *param_1,int32_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar1 = (uint64_t *)FUN_1806aa970();
  puVar5 = (uint64_t *)*param_1;
  if (puVar1 < puVar1 + *(uint *)(param_1 + 1)) {
    uVar3 = 0;
    uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar1 + *(uint *)(param_1 + 1) < puVar1) {
      uVar4 = uVar3;
    }
    puVar6 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 < uVar4);
      puVar5 = (uint64_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar5 != (uint64_t *)0x0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar5);
  }
  *param_1 = puVar1;
  *(int32_t *)((int64_t)param_1 + 0xc) = param_2;
  return;
}






// 函数: void FUN_1806b0200(uint64_t *param_1,uint param_2)
void FUN_1806b0200(uint64_t *param_1,uint param_2)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  void *puVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  
  if ((param_2 == 0) || ((uint64_t)param_2 == 0)) {
    puVar10 = (int32_t *)0x0;
  }
  else {
    plVar7 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar8 = (int64_t *)PxGetFoundation();
    cVar6 = (**(code **)(*plVar8 + 0x28))(plVar8);
    if (cVar6 == '\0') {
      puVar9 = &ui_system_data_1728_ptr;
    }
    else {
      puVar9 = (void *)__std_type_info_name(0x180bfc2d0,0x180c827e0);
    }
    puVar10 = (int32_t *)
              (**(code **)(*plVar7 + 8))(plVar7,(uint64_t)param_2 << 4,puVar9,&processed_var_4272_ptr,0x229)
    ;
  }
  uVar1 = *(uint *)(param_1 + 1);
  puVar12 = (int32_t *)*param_1;
  puVar11 = puVar10;
  if (puVar10 < puVar10 + (uint64_t)uVar1 * 4) {
    do {
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      puVar12 = puVar12 + 4;
      *puVar11 = uVar2;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11 = puVar11 + 4;
    } while (puVar11 < puVar10 + (uint64_t)uVar1 * 4);
    puVar12 = (int32_t *)*param_1;
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar12 != (int32_t *)0x0)) {
    plVar7 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar7 + 0x10))(plVar7,puVar12);
  }
  *param_1 = puVar10;
  *(uint *)((int64_t)param_1 + 0xc) = param_2;
  return;
}






// 函数: void FUN_1806b0310(int64_t *param_1,int32_t param_2)
void FUN_1806b0310(int64_t *param_1,int32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  lVar2 = FUN_1806aaa10();
  func_0x0001806aac60(lVar2,(uint64_t)*(uint *)(param_1 + 1) * 0x78 + lVar2,*param_1);
  puVar4 = (uint64_t *)*param_1;
  puVar5 = puVar4 + (uint64_t)*(uint *)(param_1 + 1) * 0xf;
  for (; puVar4 < puVar5; puVar4 = puVar4 + 0xf) {
    *puVar4 = &memory_allocator_3704_ptr;
  }
  if (-1 < *(int *)((int64_t)param_1 + 0xc)) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
    }
    *param_1 = lVar2;
    *(int32_t *)((int64_t)param_1 + 0xc) = param_2;
    return;
  }
  *(int32_t *)((int64_t)param_1 + 0xc) = param_2;
  *param_1 = lVar2;
  return;
}






// 函数: void FUN_1806b0372(void)
void FUN_1806b0372(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *unaff_RBX;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  
  lVar1 = *unaff_RBX;
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  *unaff_RBX = unaff_RDI;
  *(int32_t *)((int64_t)unaff_RBX + 0xc) = unaff_ESI;
  return;
}






// 函数: void FUN_1806b03ac(void)
void FUN_1806b03ac(void)

{
  uint64_t *unaff_RBX;
  int32_t unaff_ESI;
  uint64_t unaff_RDI;
  
  *(int32_t *)((int64_t)unaff_RBX + 0xc) = unaff_ESI;
  *unaff_RBX = unaff_RDI;
  return;
}






// 函数: void FUN_1806b03d0(uint64_t *param_1,int32_t param_2)
void FUN_1806b03d0(uint64_t *param_1,int32_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar1 = (uint64_t *)FUN_1806aaab0();
  puVar5 = (uint64_t *)*param_1;
  if (puVar1 < puVar1 + *(uint *)(param_1 + 1)) {
    uVar3 = 0;
    uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar1 + *(uint *)(param_1 + 1) < puVar1) {
      uVar4 = uVar3;
    }
    puVar6 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 < uVar4);
      puVar5 = (uint64_t *)*param_1;
    }
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (puVar5 != (uint64_t *)0x0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar5);
  }
  *param_1 = puVar1;
  *(int32_t *)((int64_t)param_1 + 0xc) = param_2;
  return;
}



void * FUN_1806b0490(int64_t param_1,char *param_2,char *param_3)

{
  void *puVar1;
  char *pcVar2;
  
  *param_3 = '\0';
  pcVar2 = "";
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  if (*pcVar2 < '\x01') {
    return &system_buffer_ptr;
  }
  puVar1 = (void *)FUN_1806ac2c0();
  if (*param_3 != '\0') {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    FUN_1806aa710(param_1,puVar1);
  }
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806b0510(uint64_t *param_1)
void FUN_1806b0510(uint64_t *param_1)

{
  int iVar1;
  
  if ((*(int *)((int64_t)param_1 + 0xec) != 0) &&
     (iVar1 = *(int *)((int64_t)param_1 + 0xec) + -1, *(int *)((int64_t)param_1 + 0xec) = iVar1,
     iVar1 != 0)) {
    return;
  }
  (**(code **)*param_1)(param_1,0);
                    // WARNING: Could not recover jumptable at 0x0001806b0548. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*system_system_buffer_config + 0x10))(system_system_buffer_config,param_1);
  return;
}






// 函数: void FUN_1806b0560(int64_t param_1,uint64_t param_2)
void FUN_1806b0560(int64_t param_1,uint64_t param_2)

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
  uVar2 = 0;
  iVar5 = (int)(int64_t)((float)uVar4 * *(float *)(param_1 + 0x28));
  iVar3 = uVar4 * 4 + iVar5 * 4;
  iVar3 = iVar5 * 0x10 + iVar3 + (-iVar3 & 0xfU);
  if (iVar3 != 0) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,iVar3,&ui_system_data_1832_ptr,&rendering_buffer_2848_ptr,0x174);
  }
                    // WARNING: Subroutine does not return
  memset(uVar2,0xffffffff,uVar4 * 4);
}






// 函数: void FUN_1806b0720(int64_t param_1,uint64_t param_2)
void FUN_1806b0720(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)param_2;
  if ((uVar5 == 0) || ((uVar5 & uVar5 - 1) != 0)) {
    uVar5 = (uint)(param_2 >> 1) & 0x7fffffff | uVar5;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = (uVar5 >> 0x10 | uVar5) + 1;
  }
  iVar1 = (int)(int64_t)((float)uVar5 * *(float *)(param_1 + 0x28));
  iVar4 = uVar5 * 4 + iVar1 * 4;
  iVar1 = iVar1 * 0x20 + iVar4 + (-iVar4 & 0xfU);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2,iVar1,&ui_system_data_1832_ptr,&rendering_buffer_2848_ptr,0x174);
  }
                    // WARNING: Subroutine does not return
  memset(uVar3,0xffffffff,uVar5 * 4);
}






// 函数: void FUN_1806b0950(int64_t param_1,uint64_t param_2)
void FUN_1806b0950(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)param_2;
  if ((uVar5 == 0) || ((uVar5 & uVar5 - 1) != 0)) {
    uVar5 = (uint)(param_2 >> 1) & 0x7fffffff | uVar5;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = (uVar5 >> 0x10 | uVar5) + 1;
  }
  iVar1 = (int)(int64_t)((float)uVar5 * *(float *)(param_1 + 0x28));
  iVar4 = uVar5 * 4 + iVar1 * 4;
  iVar1 = iVar4 + (-iVar4 & 0xfU) + iVar1 * 0x18;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2,iVar1,&ui_system_data_1832_ptr,&rendering_buffer_2848_ptr,0x174);
  }
                    // WARNING: Subroutine does not return
  memset(uVar3,0xffffffff,uVar5 * 4);
}






// 函数: void FUN_1806b0b40(int64_t param_1,uint64_t param_2)
void FUN_1806b0b40(int64_t param_1,uint64_t param_2)

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






// 函数: void FUN_1806b0cf0(int64_t *param_1,uint param_2,int32_t *param_3)
void FUN_1806b0cf0(int64_t *param_1,uint param_2,int32_t *param_3)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_1806aff00();
  }
  uVar3 = 0;
  puVar4 = (int32_t *)(*param_1 + (uint64_t)param_2 * 4);
  puVar5 = (int32_t *)(*param_1 + (uint64_t)*(uint *)(param_1 + 1) * 4);
  uVar6 = (uint64_t)((int64_t)puVar4 + (3 - (int64_t)puVar5)) >> 2;
  if (puVar4 < puVar5) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    if (3 < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar5) || (puVar5 + (uVar6 - 1) < param_3)) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 < (uVar6 & 0xfffffffffffffffc));
        puVar4 = puVar5;
        for (uVar2 = uVar6 & 0x3ffffffffffffffc; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar5 + (uVar6 & 0xfffffffffffffffc);
      }
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}






// 函数: void FUN_1806b0dd0(int64_t *param_1,uint param_2,uint64_t *param_3)
void FUN_1806b0dd0(int64_t *param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_1806affc0();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*param_1 + (uint64_t)param_2 * 8);
  puVar5 = (uint64_t *)(*param_1 + (uint64_t)*(uint *)(param_1 + 1) * 8);
  uVar6 = (uint64_t)((int64_t)puVar4 + (7 - (int64_t)puVar5)) >> 3;
  if (puVar4 < puVar5) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    if (1 < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar5) || (puVar5 + (uVar6 - 1) < param_3)) {
        do {
          uVar3 = uVar3 + 2;
        } while (uVar3 < (uVar6 & 0xfffffffffffffffe));
        puVar4 = puVar5;
        for (uVar2 = uVar6 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar5 + (uVar6 & 0xfffffffffffffffe);
      }
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}






// 函数: void FUN_1806b0eb0(int64_t *param_1,uint param_2,uint64_t *param_3)
void FUN_1806b0eb0(int64_t *param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  if ((*(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_1806b0080();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*param_1 + (uint64_t)param_2 * 8);
  puVar5 = (uint64_t *)(*param_1 + (uint64_t)*(uint *)(param_1 + 1) * 8);
  uVar6 = (uint64_t)((int64_t)puVar4 + (7 - (int64_t)puVar5)) >> 3;
  if (puVar4 < puVar5) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    if (1 < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar5) || (puVar5 + (uVar6 - 1) < param_3)) {
        do {
          uVar3 = uVar3 + 2;
        } while (uVar3 < (uVar6 & 0xfffffffffffffffe));
        puVar4 = puVar5;
        for (uVar2 = uVar6 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar5 + (uVar6 & 0xfffffffffffffffe);
      }
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return;
}






