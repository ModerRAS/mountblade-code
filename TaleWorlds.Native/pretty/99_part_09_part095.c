#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part095.c - 10 个函数
// 函数: void UtilitiesSystem_a0f40(int64_t *param_1)
void UtilitiesSystem_a0f40(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint uVar4;
  *param_1 = (int64_t)&rendering_buffer_2320_ptr;
  param_1[1] = (int64_t)&rendering_buffer_2448_ptr;
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    PxSetProfilerCallback(0);
  }
  uVar3 = 0;
  if (param_1[0x14] != 0) {
    (**(code **)(*(int64_t *)param_1[0x12] + 0x28))((int64_t *)param_1[0x12],param_1[0x13] + 8);
    (**(code **)(*(int64_t *)param_1[0x12] + 0x18))((int64_t *)param_1[0x12],param_1[0x14]);
    (**(code **)(*(int64_t *)param_1[0x14] + 0x28))();
    param_1[0x14] = 0;
    (**(code **)(*param_1 + 0x50))(param_1,param_1[0x13]);
  }
  if (*(char *)((int64_t)param_1 + 0x81) == '\0') {
    if ((int64_t *)param_1[0x12] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[0x12] + 0x38))();
      param_1[0x12] = 0;
    }
    plVar2 = (int64_t *)param_1[0x13];
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,0);
      (**(code **)(*system_system_buffer_config + 0x10))(system_system_buffer_config,plVar2);
    }
    param_1[0x13] = 0;
    UtilitiesSystem_a2100(param_1 + 6);
    lVar1 = param_1[3];
    if ((((*(uint *)((int64_t)param_1 + 0x24) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((int64_t)param_1 + 0x24))) && (lVar1 != 0)) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[1] = (int64_t)&ui_system_data_1848_ptr;
    *param_1 = (int64_t)&ui_system_data_1808_ptr;
    return;
  }
  if ((int)param_1[4] != 0) {
    do {
      (**(code **)(**(int64_t **)(param_1[3] + uVar3 * 8) + 0x20))();
      uVar4 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 4));
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*param_1 + 0x50))(param_1);
    plVar2 = (int64_t *)param_1[0xf];
    param_1[0xf] = 0;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,0);
      (**(code **)(*system_system_buffer_config + 0x10))(system_system_buffer_config,plVar2);
    }
  }
  (**(code **)(*(int64_t *)param_1[5] + 0x10))();
  (**(code **)(*(int64_t *)param_1[2] + 8))();
// WARNING: Subroutine does not return
  UtilitiesSystem_b1a80(param_1 + 6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_a1110(void)
void UtilitiesSystem_a1110(void)
{
  uint64_t *puVar1;
  puVar1 = system_system_config;
  if ((system_system_config != 0) && (system_system_config = system_system_config + -1, system_system_config == 0)) {
    if (system_system_config != (uint64_t *)0x0) {
      (**(code **)*system_system_config)(system_system_config,0);
      (**(code **)(*system_system_buffer_config + 0x10))(system_system_buffer_config,puVar1);
    }
    system_system_config = (uint64_t *)0x0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_a1129(void)
void UtilitiesSystem_a1129(void)
{
  uint64_t *puVar1;
  puVar1 = system_system_config;
  if (system_system_config != (uint64_t *)0x0) {
    (**(code **)*system_system_config)(system_system_config,0);
    (**(code **)(*system_system_buffer_config + 0x10))(system_system_buffer_config,puVar1);
  }
  system_system_config = (uint64_t *)0x0;
  return;
}
// 函数: void UtilitiesSystem_a1164(void)
void UtilitiesSystem_a1164(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UtilitiesSystem_a1170(int64_t param_1,uint64_t *param_2,int8_t *param_3)
{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t stack_special_x_8;
  uint64_t local_var_ffffffffffffff58;
  int32_t uVar13;
  void **ppuVar12;
  void *plocal_var_88;
  void *plocal_var_80;
  void *plocal_var_78;
  void *plocal_var_70;
  void *plocal_var_68;
  void *plocal_var_60;
  void *plocal_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  int64_t lStack_48;
  uint64_t local_var_40;
  int32_t local_var_38;
  uVar13 = (int32_t)((uint64_t)local_var_ffffffffffffff58 >> 0x20);
  if (*(char *)(param_1 + 0x81) == '\0') {
    *(int8_t *)(param_1 + 0x80) = *param_3;
    *(uint64_t **)(param_1 + 0x10) = param_2;
    cVar1 = (**(code **)*param_2)(param_2);
    *(char *)(param_1 + 0x81) = cVar1;
    if (cVar1 != '\0') {
      uVar3 = CONCAT44(uVar13,0x83);
      puVar5 = (uint64_t *)
               (**(code **)(*system_system_buffer_config + 8))
                         (system_system_buffer_config,0x58,&rendering_buffer_2640_ptr,&rendering_buffer_2472_ptr,uVar3);
      uVar13 = (int32_t)((uint64_t)uVar3 >> 0x20);
      if (puVar5 == (uint64_t *)0x0) {
        puVar5 = (uint64_t *)0x0;
      }
      else {
        *puVar5 = &rendering_buffer_2248_ptr;
        uVar3 = UtilitiesSystem_a7780();
        puVar5[1] = uVar3;
        iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
        uVar3 = 0;
        if (iVar2 != 0) {
          plVar6 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
          plVar7 = (int64_t *)PxGetFoundation();
          cVar1 = (**(code **)(*plVar7 + 0x28))(plVar7);
          if (cVar1 == '\0') {
            puVar8 = &ui_system_data_1728_ptr;
          }
          else {
            puVar8 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
          }
          uVar3 = (**(code **)(*plVar6 + 8))
                            (plVar6,iVar2,puVar8,&rendering_config_var_ptr,CONCAT44(uVar13,0x71));
        }
        puVar5[2] = uVar3;
        __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar3);
        *(int32_t *)(puVar5 + 3) = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        *(int32_t *)(puVar5 + 9) = 0x3f400000;
        *(int32_t *)((int64_t)puVar5 + 0x4c) = 0xffffffff;
        puVar5[10] = 0;
        UtilitiesSystem_a2bd0(puVar5 + 4,0x40);
        (**(code **)(*(int64_t *)puVar5[1] + 0xd0))();
      }
      uVar4 = 0;
      *(uint64_t **)(param_1 + 0x28) = puVar5;
      plocal_var_58 = &rendering_buffer_2024_ptr;
      local_var_50 = 0x31e5e882;
      local_var_4c = 1;
      plVar6 = (int64_t *)
               _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                         (&plocal_var_68);
      lStack_48 = *plVar6 * 10;
      lVar9 = _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                        (&plocal_var_68);
      local_var_40 = *(uint64_t *)(lVar9 + 8);
      local_var_38 = 1;
      plocal_var_80 = (void *)(**(code **)(**(int64_t **)(param_1 + 0x10) + 0x20))();
      plocal_var_88 = &rendering_buffer_2680_ptr;
      SystemFunction_0001806a2e70(&plocal_var_88,&local_var_50);
      (**(code **)(plocal_var_88 + 0x40))(&plocal_var_88,&local_var_4c);
      (**(code **)(plocal_var_88 + 0x30))(&plocal_var_88,&lStack_48);
      (**(code **)(plocal_var_88 + 0x30))(&plocal_var_88,&local_var_40);
      stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,local_var_38);
      (**(code **)(plocal_var_88 + 0x40))(&plocal_var_88,&stack_special_x_8);
      local_var_38 = (int32_t)stack_special_x_8;
      (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x28))();
      plVar6 = (int64_t *)UtilitiesSystem_a3140(param_1);
      plocal_var_88 = &ui_system_data_1904_ptr;
      plocal_var_80 = &rendering_buffer_2040_ptr;
      (**(code **)(plVar6[1] + 8))(plVar6 + 1,&plocal_var_88);
      plocal_var_78 = (void *)0x0;
      plocal_var_70 = (void *)0x0;
      plocal_var_68 = &ui_system_data_1872_ptr;
      plocal_var_60 = &ui_system_data_1880_ptr;
      plocal_var_88 = &ui_system_data_1904_ptr;
      plocal_var_80 = &rendering_buffer_2040_ptr;
      (**(code **)(plVar6[1] + 0x20))
                (plVar6 + 1,&plocal_var_88,&ui_system_data_1016_ptr,&rendering_buffer_2160_ptr,&plocal_var_68,2,&plocal_var_78);
      plocal_var_88 = &ui_system_data_1904_ptr;
      plocal_var_80 = &rendering_buffer_2056_ptr;
      plocal_var_68 = &ui_system_data_1904_ptr;
      plocal_var_60 = &rendering_buffer_2056_ptr;
      (**(code **)(plVar6[1] + 8))(plVar6 + 1,&plocal_var_68);
      plocal_var_68 = (void *)0x0;
      plocal_var_60 = (void *)0x0;
      plocal_var_78 = &ui_system_data_1872_ptr;
      plocal_var_70 = &ui_system_data_1880_ptr;
      plocal_var_88 = &ui_system_data_1904_ptr;
      plocal_var_80 = &rendering_buffer_2056_ptr;
      (**(code **)(plVar6[1] + 0x20))
                (plVar6 + 1,&plocal_var_88,&ui_system_data_1016_ptr,&rendering_buffer_2184_ptr,&plocal_var_78,2,&plocal_var_68);
      plocal_var_88 = &ui_system_data_1904_ptr;
      plocal_var_80 = &ui_system_data_1888_ptr;
      plocal_var_68 = &ui_system_data_1904_ptr;
      plocal_var_60 = &ui_system_data_1888_ptr;
      (**(code **)(plVar6[1] + 8))(plVar6 + 1,&plocal_var_68);
      plocal_var_68 = (void *)0x0;
      plocal_var_60 = (void *)0x0;
      ppuVar12 = &plocal_var_78;
      plocal_var_78 = &ui_system_data_1872_ptr;
      plocal_var_70 = &ui_system_data_1880_ptr;
      plocal_var_88 = &ui_system_data_1904_ptr;
      plocal_var_80 = &ui_system_data_1888_ptr;
      (**(code **)(plVar6[1] + 0x20))
                (plVar6 + 1,&plocal_var_88,&ui_system_data_1016_ptr,&rendering_buffer_2208_ptr,ppuVar12,2,&plocal_var_68);
      uVar13 = (int32_t)((uint64_t)ppuVar12 >> 0x20);
      (**(code **)(*plVar6 + 0xa0))(plVar6);
      if ((*(byte *)(param_1 + 0x80) & 4) != 0) {
        lVar9 = (**(code **)(*system_system_buffer_config + 8))
                          (system_system_buffer_config,0x38,&rendering_buffer_2664_ptr,&rendering_buffer_2472_ptr,CONCAT44(uVar13,0x8c));
        uVar10 = uVar4;
        if (lVar9 != 0) {
          uVar10 = UtilitiesSystem_b1b20(lVar9,param_1);
        }
        *(uint64_t *)(param_1 + 0x78) = uVar10;
        stack_special_x_8 = uVar10;
        if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
          *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)*(uint *)(param_1 + 0x20) * 8) =
               uVar10;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        }
        else {
          UtilitiesSystem_a29d0(param_1 + 0x18,&stack_special_x_8);
        }
      }
      if (((*(byte *)(param_1 + 0x80) & 2) != 0) && (*(int64_t *)(param_1 + 0x90) != 0)) {
        stack_special_x_8 = *(uint64_t *)(param_1 + 0x98);
        if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
          *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)*(uint *)(param_1 + 0x20) * 8) =
               stack_special_x_8;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        }
        else {
          UtilitiesSystem_a29d0(param_1 + 0x18,&stack_special_x_8);
        }
        plocal_var_68 = plocal_var_88;
        plocal_var_80 = (void *)0x0;
        plocal_var_88 = (void *)((uint64_t)plocal_var_88 & 0xffffffff00000000);
        plocal_var_68 = (void *)((uint64_t)plocal_var_68 & 0xffffffff00000000);
        plocal_var_60 = (void *)0x0;
        uVar3 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        uVar3 = UtilitiesSystem_b2060(uVar3,system_system_buffer_config,&plocal_var_68,0x10000);
        *(uint64_t *)(param_1 + 0xa0) = uVar3;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        do {
          (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x18) + uVar4 * 8) + 0x18))();
          uVar11 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0x20));
      }
      if (*(int64_t *)(param_1 + 0xa0) != 0) {
        (**(code **)(**(int64_t **)(param_1 + 0x90) + 0x20))
                  (*(int64_t **)(param_1 + 0x90),*(int64_t *)(param_1 + 0x98) + 8);
        (**(code **)(**(int64_t **)(param_1 + 0x90) + 0x10))
                  (*(int64_t **)(param_1 + 0x90),*(uint64_t *)(param_1 + 0xa0));
      }
      if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
        PxSetProfilerCallback(param_1);
      }
    }
    return (uint64_t)*(byte *)(param_1 + 0x81);
  }
  uVar3 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
  uVar4 = _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                    (uVar3,4,&rendering_buffer_2472_ptr,0x78,&rendering_buffer_2560_ptr);
  return uVar4 & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t UtilitiesSystem_a11f6(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  void *puVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t unaff_RBP;
  uint uVar13;
  int64_t unaff_R14;
  uint64_t local_var_20;
  int32_t uVar15;
  uint64_t uVar14;
  uVar7 = CONCAT44((int)((uint64_t)local_var_20 >> 0x20),0x83);
  puVar6 = (uint64_t *)(**(code **)(*param_1 + 8))(param_1,0x58,&rendering_buffer_2640_ptr,param_4,uVar7);
  uVar15 = (int32_t)((uint64_t)uVar7 >> 0x20);
  if (puVar6 == (uint64_t *)0x0) {
    puVar6 = (uint64_t *)0x0;
  }
  else {
    *puVar6 = &rendering_buffer_2248_ptr;
    uVar7 = UtilitiesSystem_a7780();
    puVar6[1] = uVar7;
    iVar5 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
    uVar7 = 0;
    if (iVar5 != 0) {
      plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar9 = (int64_t *)PxGetFoundation();
      cVar4 = (**(code **)(*plVar9 + 0x28))(plVar9);
      if (cVar4 == '\0') {
        puVar10 = &ui_system_data_1728_ptr;
      }
      else {
        puVar10 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
      }
      uVar7 = (**(code **)(*plVar8 + 8))(plVar8,iVar5,puVar10,&rendering_config_var_ptr,CONCAT44(uVar15,0x71));
    }
    puVar6[2] = uVar7;
    __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar7);
    *(int32_t *)(puVar6 + 3) = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *(int32_t *)(puVar6 + 9) = 0x3f400000;
    *(int32_t *)((int64_t)puVar6 + 0x4c) = 0xffffffff;
    puVar6[10] = 0;
    UtilitiesSystem_a2bd0(puVar6 + 4,0x40);
    (**(code **)(*(int64_t *)puVar6[1] + 0xd0))();
  }
  uVar14 = 0;
  *(uint64_t **)(unaff_R14 + 0x28) = puVar6;
  *(void **)(unaff_RBP + 7) = &rendering_buffer_2024_ptr;
  *(int32_t *)(unaff_RBP + 0xf) = 0x31e5e882;
  *(int32_t *)(unaff_RBP + 0x13) = 1;
  plVar8 = (int64_t *)
           _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                     (unaff_RBP + -9);
  *(int64_t *)(unaff_RBP + 0x17) = *plVar8 * 10;
  lVar11 = _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                     (unaff_RBP + -9);
  *(uint64_t *)(unaff_RBP + 0x1f) = *(uint64_t *)(lVar11 + 8);
  plVar8 = *(int64_t **)(unaff_R14 + 0x10);
  *(int32_t *)(unaff_RBP + 0x27) = 1;
  uVar7 = (**(code **)(*plVar8 + 0x20))();
  *(uint64_t *)(unaff_RBP + -0x21) = uVar7;
  *(void **)(unaff_RBP + -0x29) = &rendering_buffer_2680_ptr;
  SystemFunction_0001806a2e70(unaff_RBP + -0x29,unaff_RBP + 0xf);
  (**(code **)(*(int64_t *)(unaff_RBP + -0x29) + 0x40))(unaff_RBP + -0x29,unaff_RBP + 0x13);
  (**(code **)(*(int64_t *)(unaff_RBP + -0x29) + 0x30))(unaff_RBP + -0x29,unaff_RBP + 0x17);
  (**(code **)(*(int64_t *)(unaff_RBP + -0x29) + 0x30))(unaff_RBP + -0x29,unaff_RBP + 0x1f);
  *(int32_t *)(unaff_RBP + 0x67) = *(int32_t *)(unaff_RBP + 0x27);
  (**(code **)(*(int64_t *)(unaff_RBP + -0x29) + 0x40))(unaff_RBP + -0x29,unaff_RBP + 0x67);
  plVar8 = *(int64_t **)(unaff_R14 + 0x10);
  *(int32_t *)(unaff_RBP + 0x27) = *(int32_t *)(unaff_RBP + 0x67);
  (**(code **)(*plVar8 + 0x28))();
  plVar8 = (int64_t *)UtilitiesSystem_a3140();
  *(void **)(unaff_RBP + -0x21) = &rendering_buffer_2040_ptr;
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1904_ptr;
  lVar11 = plVar8[1];
  *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 8))(plVar8 + 1,unaff_RBP + -0x29);
  *(uint64_t *)(unaff_RBP + -0x19) = 0;
  *(uint64_t *)(unaff_RBP + -0x11) = 0;
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1872_ptr;
  *(void **)(unaff_RBP + -0x21) = &ui_system_data_1880_ptr;
  uVar7 = *(uint64_t *)(unaff_RBP + -0x29);
  uVar3 = *(uint64_t *)(unaff_RBP + -0x21);
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1904_ptr;
  lVar11 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &rendering_buffer_2040_ptr;
  *(uint64_t *)(unaff_RBP + -9) = uVar7;
  *(uint64_t *)(unaff_RBP + -1) = uVar3;
  *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 0x20))
            (plVar8 + 1,unaff_RBP + -0x29,&ui_system_data_1016_ptr,&rendering_buffer_2160_ptr,unaff_RBP + -9);
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1904_ptr;
  lVar11 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &rendering_buffer_2056_ptr;
  *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -5) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + 3) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 8))(plVar8 + 1,unaff_RBP + -9);
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1872_ptr;
  *(void **)(unaff_RBP + -0x21) = &ui_system_data_1880_ptr;
  *(uint64_t *)(unaff_RBP + -9) = 0;
  *(uint64_t *)(unaff_RBP + -1) = 0;
  uVar7 = *(uint64_t *)(unaff_RBP + -0x29);
  uVar3 = *(uint64_t *)(unaff_RBP + -0x21);
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1904_ptr;
  lVar11 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &rendering_buffer_2056_ptr;
  *(uint64_t *)(unaff_RBP + -0x19) = uVar7;
  *(uint64_t *)(unaff_RBP + -0x11) = uVar3;
  *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 0x20))
            (plVar8 + 1,unaff_RBP + -0x29,&ui_system_data_1016_ptr,&rendering_buffer_2184_ptr,unaff_RBP + -0x19);
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1904_ptr;
  lVar11 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &ui_system_data_1888_ptr;
  *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -5) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + 3) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 8))(plVar8 + 1,unaff_RBP + -9);
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1872_ptr;
  *(void **)(unaff_RBP + -0x21) = &ui_system_data_1880_ptr;
  *(uint64_t *)(unaff_RBP + -9) = 0;
  *(uint64_t *)(unaff_RBP + -1) = 0;
  lVar11 = unaff_RBP + -0x19;
  uVar7 = *(uint64_t *)(unaff_RBP + -0x29);
  uVar3 = *(uint64_t *)(unaff_RBP + -0x21);
  *(void **)(unaff_RBP + -0x29) = &ui_system_data_1904_ptr;
  lVar2 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &ui_system_data_1888_ptr;
  *(uint64_t *)(unaff_RBP + -0x19) = uVar7;
  *(uint64_t *)(unaff_RBP + -0x11) = uVar3;
  *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar2 + 0x20))(plVar8 + 1,unaff_RBP + -0x29,&ui_system_data_1016_ptr,&rendering_buffer_2208_ptr,lVar11);
  uVar15 = (int32_t)((uint64_t)lVar11 >> 0x20);
  (**(code **)(*plVar8 + 0xa0))(plVar8);
  if ((*(byte *)(unaff_R14 + 0x80) & 4) != 0) {
    lVar11 = (**(code **)(*system_system_buffer_config + 8))
                       (system_system_buffer_config,0x38,&rendering_buffer_2664_ptr,&rendering_buffer_2472_ptr,CONCAT44(uVar15,0x8c));
    uVar12 = uVar14;
    if (lVar11 != 0) {
      uVar12 = UtilitiesSystem_b1b20(lVar11);
    }
    *(uint64_t *)(unaff_R14 + 0x78) = uVar12;
    uVar13 = *(uint *)(unaff_R14 + 0x24);
    uVar1 = *(uint *)(unaff_R14 + 0x20);
    *(uint64_t *)(unaff_RBP + 0x67) = uVar12;
    if (uVar1 < (uVar13 & 0x7fffffff)) {
      *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x18) + (uint64_t)uVar1 * 8) = uVar12;
      *(int *)(unaff_R14 + 0x20) = *(int *)(unaff_R14 + 0x20) + 1;
    }
    else {
      UtilitiesSystem_a29d0(unaff_R14 + 0x18,unaff_RBP + 0x67);
    }
  }
  if (((*(byte *)(unaff_R14 + 0x80) & 2) != 0) && (*(int64_t *)(unaff_R14 + 0x90) != 0)) {
    uVar13 = *(uint *)(unaff_R14 + 0x24);
    uVar1 = *(uint *)(unaff_R14 + 0x20);
    uVar7 = *(uint64_t *)(unaff_R14 + 0x98);
    *(uint64_t *)(unaff_RBP + 0x67) = uVar7;
    if (uVar1 < (uVar13 & 0x7fffffff)) {
      *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x18) + (uint64_t)uVar1 * 8) = uVar7;
      *(int *)(unaff_R14 + 0x20) = *(int *)(unaff_R14 + 0x20) + 1;
    }
    else {
      UtilitiesSystem_a29d0(unaff_R14 + 0x18,unaff_RBP + 0x67);
    }
    *(uint64_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x29) = 0;
    *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(unaff_RBP + -0x29);
    *(int32_t *)(unaff_RBP + -5) = *(int32_t *)(unaff_RBP + -0x25);
    *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + -0x21);
    *(int32_t *)(unaff_RBP + 3) = *(int32_t *)(unaff_RBP + -0x1d);
    uVar7 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar7 = UtilitiesSystem_b2060(uVar7,system_system_buffer_config,unaff_RBP + -9,0x10000);
    *(uint64_t *)(unaff_R14 + 0xa0) = uVar7;
  }
  if (*(int *)(unaff_R14 + 0x20) != 0) {
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R14 + 0x18) + uVar14 * 8) + 0x18))();
      uVar13 = (int)uVar14 + 1;
      uVar14 = (uint64_t)uVar13;
    } while (uVar13 < *(uint *)(unaff_R14 + 0x20));
  }
  if (*(int64_t *)(unaff_R14 + 0xa0) != 0) {
    (**(code **)(**(int64_t **)(unaff_R14 + 0x90) + 0x20))
              (*(int64_t **)(unaff_R14 + 0x90),*(int64_t *)(unaff_R14 + 0x98) + 8);
    (**(code **)(**(int64_t **)(unaff_R14 + 0x90) + 0x10))
              (*(int64_t **)(unaff_R14 + 0x90),*(uint64_t *)(unaff_R14 + 0xa0));
  }
  if ((*(byte *)(unaff_R14 + 0x80) & 2) != 0) {
    PxSetProfilerCallback();
  }
  return *(int8_t *)(unaff_R14 + 0x81);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t UtilitiesSystem_a15f9(void)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t unaff_RBP;
  uint uVar5;
  uint64_t unaff_RSI;
  int64_t unaff_R14;
  lVar2 = (**(code **)(*system_system_buffer_config + 8))(system_system_buffer_config,0x38,&rendering_buffer_2664_ptr,&rendering_buffer_2472_ptr,0x8c)
  ;
  uVar3 = unaff_RSI;
  if (lVar2 != 0) {
    uVar3 = UtilitiesSystem_b1b20(lVar2);
  }
  *(uint64_t *)(unaff_R14 + 0x78) = uVar3;
  uVar5 = *(uint *)(unaff_R14 + 0x24);
  uVar1 = *(uint *)(unaff_R14 + 0x20);
  *(uint64_t *)(unaff_RBP + 0x67) = uVar3;
  if (uVar1 < (uVar5 & 0x7fffffff)) {
    *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x18) + (uint64_t)uVar1 * 8) = uVar3;
    *(int *)(unaff_R14 + 0x20) = *(int *)(unaff_R14 + 0x20) + 1;
  }
  else {
    UtilitiesSystem_a29d0(unaff_R14 + 0x18,unaff_RBP + 0x67);
  }
  if (((*(byte *)(unaff_R14 + 0x80) & 2) != 0) && (*(int64_t *)(unaff_R14 + 0x90) != 0)) {
    uVar5 = *(uint *)(unaff_R14 + 0x24);
    uVar1 = *(uint *)(unaff_R14 + 0x20);
    uVar4 = *(uint64_t *)(unaff_R14 + 0x98);
    *(uint64_t *)(unaff_RBP + 0x67) = uVar4;
    if (uVar1 < (uVar5 & 0x7fffffff)) {
      *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x18) + (uint64_t)uVar1 * 8) = uVar4;
      *(int *)(unaff_R14 + 0x20) = *(int *)(unaff_R14 + 0x20) + 1;
    }
    else {
      UtilitiesSystem_a29d0(unaff_R14 + 0x18,unaff_RBP + 0x67);
    }
    *(uint64_t *)(unaff_RBP + -0x21) = unaff_RSI;
    *(int *)(unaff_RBP + -0x29) = (int)unaff_RSI;
    *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(unaff_RBP + -0x29);
    *(int32_t *)(unaff_RBP + -5) = *(int32_t *)(unaff_RBP + -0x25);
    *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + -0x21);
    *(int32_t *)(unaff_RBP + 3) = *(int32_t *)(unaff_RBP + -0x1d);
    uVar4 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar4 = UtilitiesSystem_b2060(uVar4,system_system_buffer_config,unaff_RBP + -9,0x10000);
    *(uint64_t *)(unaff_R14 + 0xa0) = uVar4;
  }
  if (*(int *)(unaff_R14 + 0x20) != 0) {
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R14 + 0x18) + (unaff_RSI & 0xffffffff) * 8) +
                  0x18))();
      uVar5 = (int)unaff_RSI + 1;
      unaff_RSI = (uint64_t)uVar5;
    } while (uVar5 < *(uint *)(unaff_R14 + 0x20));
  }
  if (*(int64_t *)(unaff_R14 + 0xa0) != 0) {
    (**(code **)(**(int64_t **)(unaff_R14 + 0x90) + 0x20))
              (*(int64_t **)(unaff_R14 + 0x90),*(int64_t *)(unaff_R14 + 0x98) + 8);
    (**(code **)(**(int64_t **)(unaff_R14 + 0x90) + 0x10))
              (*(int64_t **)(unaff_R14 + 0x90),*(uint64_t *)(unaff_R14 + 0xa0));
  }
  if ((*(byte *)(unaff_R14 + 0x80) & 2) != 0) {
    PxSetProfilerCallback();
  }
  return *(int8_t *)(unaff_R14 + 0x81);
}
int8_t UtilitiesSystem_a172a(void)
{
  int64_t unaff_R14;
  (**(code **)(**(int64_t **)(unaff_R14 + 0x90) + 0x20))
            (*(int64_t **)(unaff_R14 + 0x90),*(int64_t *)(unaff_R14 + 0x98) + 8);
  (**(code **)(**(int64_t **)(unaff_R14 + 0x90) + 0x10))
            (*(int64_t **)(unaff_R14 + 0x90),*(uint64_t *)(unaff_R14 + 0xa0));
  if ((*(byte *)(unaff_R14 + 0x80) & 2) != 0) {
    PxSetProfilerCallback();
  }
  return *(int8_t *)(unaff_R14 + 0x81);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_a1790(int64_t *param_1)
void UtilitiesSystem_a1790(int64_t *param_1)
{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar3;
  if (param_1[0x14] != 0) {
    (**(code **)(*(int64_t *)param_1[0x12] + 0x28))((int64_t *)param_1[0x12],param_1[0x13] + 8);
    (**(code **)(*(int64_t *)param_1[0x12] + 0x18))((int64_t *)param_1[0x12],param_1[0x14]);
    (**(code **)(*(int64_t *)param_1[0x14] + 0x28))();
    param_1[0x14] = 0;
    (**(code **)(*param_1 + 0x50))(param_1,param_1[0x13]);
  }
  if (*(char *)((int64_t)param_1 + 0x81) != '\0') {
    uVar3 = 0;
    if ((int)param_1[4] != 0) {
      do {
        (**(code **)(**(int64_t **)(param_1[3] + uVar3 * 8) + 0x20))();
        uVar2 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 4));
    }
    if (param_1[0xf] != 0) {
      (**(code **)(*param_1 + 0x50))(param_1);
      plVar1 = (int64_t *)param_1[0xf];
      param_1[0xf] = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,0);
        (**(code **)(*system_system_buffer_config + 0x10))(system_system_buffer_config,plVar1);
      }
    }
    (**(code **)(*(int64_t *)param_1[5] + 0x10))();
    (**(code **)(*(int64_t *)param_1[2] + 8))();
// WARNING: Subroutine does not return
    UtilitiesSystem_b1a80(param_1 + 6);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_a1804(void)
void UtilitiesSystem_a1804(void)
{
  int64_t *plVar1;
  int64_t *unaff_RBX;
  uint uVar2;
  uint64_t uVar3;
  uVar3 = 0;
  if ((int)unaff_RBX[4] != 0) {
    do {
      (**(code **)(**(int64_t **)(unaff_RBX[3] + uVar3 * 8) + 0x20))();
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while (uVar2 < *(uint *)(unaff_RBX + 4));
  }
  if (unaff_RBX[0xf] != 0) {
    (**(code **)(*unaff_RBX + 0x50))();
    plVar1 = (int64_t *)unaff_RBX[0xf];
    unaff_RBX[0xf] = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,0);
      (**(code **)(*system_system_buffer_config + 0x10))(system_system_buffer_config,plVar1);
    }
  }
  (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))();
  (**(code **)(*(int64_t *)unaff_RBX[2] + 8))();
// WARNING: Subroutine does not return
  UtilitiesSystem_b1a80(unaff_RBX + 6);
}
// 函数: void UtilitiesSystem_a188c(void)
void UtilitiesSystem_a188c(void)
{
  return;
}
// 函数: void UtilitiesSystem_a18d0(int64_t param_1)
void UtilitiesSystem_a18d0(int64_t param_1)
{
  uint uVar1;
  uint64_t uVar2;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x18) + uVar2 * 8) + 0x28))();
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  if (*(int64_t **)(param_1 + 0xa0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xa0) + 0x48))();
    (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0xa0) + 0x18) + 8))();
  }
  return;
}
// 函数: void UtilitiesSystem_a1970(int64_t param_1,int64_t *param_2)
void UtilitiesSystem_a1970(int64_t param_1,int64_t *param_2)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t *aplStackX_10 [3];
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    do {
      if (param_2 == *(int64_t **)(*(int64_t *)(param_1 + 0x18) + uVar2 * 8)) {
        return;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  aplStackX_10[0] = param_2;
  if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
    *(int64_t **)(*(int64_t *)(param_1 + 0x18) + (uint64_t)*(uint *)(param_1 + 0x20) * 8) =
         param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  else {
    UtilitiesSystem_a29d0(param_1 + 0x18,aplStackX_10);
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  return;
}
// 函数: void UtilitiesSystem_a19f0(int64_t param_1,int64_t *param_2)
void UtilitiesSystem_a19f0(int64_t param_1,int64_t *param_2)
{
  uint uVar1;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar2;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      if (param_2 == *(int64_t **)(uVar4 * 8 + *(int64_t *)(param_1 + 0x18))) {
        (**(code **)(*param_2 + 0x20))(param_2);
        uVar1 = (int)uVar4 + 1;
        uVar3 = *(uint *)(param_1 + 0x20);
        puVar5 = (uint64_t *)(*(int64_t *)(param_1 + 0x18) + uVar4 * 8);
        if (uVar1 < uVar3) {
          do {
            uVar2 = (uint64_t)uVar1;
            uVar1 = uVar1 + 1;
            *puVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + uVar2 * 8);
            uVar3 = *(uint *)(param_1 + 0x20);
            puVar5 = puVar5 + 1;
          } while (uVar1 < uVar3);
        }
        *(uint *)(param_1 + 0x20) = uVar3 - 1;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  return;
}