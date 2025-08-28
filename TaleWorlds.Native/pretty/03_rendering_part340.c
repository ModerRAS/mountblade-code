#include "ultra_high_freq_fun_definitions.h"
/* UtilitiesSystem_272a0 - RenderingSystem_ResourceRegistrar */
#define RenderingSystem_ResourceRegistrar UtilitiesSystem_272a0
#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part340.c - 13 个函数
// 函数: void UISystem_4baf0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_4baf0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t uVar2;
  void *puVar3;
  void *puVar4;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  if ((param_1 != 0) && (param_2 != 0)) {
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x3c8) + 0x18);
    if (plVar1 == (int64_t *)0x0) {
      plVar1 = *(int64_t **)(*(int64_t *)(param_2 + 0x3c8) + 0x18);
      plStackX_8 = plVar1;
      if (plVar1 == (int64_t *)0x0) {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_2 + 0x1f8) != (void *)0x0) {
          puVar4 = *(void **)(param_2 + 0x1f8);
        }
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1f8) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x1f8);
        }
        RenderingSystem_ResourceRegistrar(&memory_allocator_32_ptr,puVar3,puVar4,param_4,0,0xfffffffffffffffe);
      }
      else {
        (**(code **)(*plVar1 + 0x28))(plVar1);
        (**(code **)(*plVar1 + 0x38))(plVar1);
        pplStackX_10 = &plStackX_8;
        uVar2 = GenericFunction_1800f8fc0(*(uint64_t *)(param_2 + 0x3c8),&plStackX_8);
        DataStructure_829c0(param_1,uVar2);
      }
    }
    else {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_4bc50(uint64_t param_1,int64_t param_2,int param_3,uint64_t param_4)
void UISystem_4bc50(uint64_t param_1,int64_t param_2,int param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int8_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t *plocal_var_78;
  uint64_t *plocal_var_70;
  uint64_t *plocal_var_68;
  int32_t local_var_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int32_t local_var_40;
  uVar12 = 0xfffffffffffffffe;
  plocal_var_78 = (uint64_t *)0x0;
  plocal_var_70 = (uint64_t *)0x0;
  lVar10 = 0;
  plocal_var_68 = (uint64_t *)0x0;
  local_var_60 = 3;
  lVar5 = (int64_t)param_3;
  lVar11 = lVar5;
  CoreEngine_0E8140(&plocal_var_78,lVar5);
  puVar4 = plocal_var_68;
  puVar7 = plocal_var_78;
  puVar3 = plocal_var_78;
  uVar8 = (int8_t)local_var_60;
  if (0 < lVar5) {
    do {
      puVar2 = plocal_var_70;
      puVar3 = (uint64_t *)0x0;
      uVar1 = *(uint64_t *)(param_2 + lVar10 * 8);
      if (plocal_var_70 < puVar4) {
        *plocal_var_70 = uVar1;
        puVar3 = puVar7;
      }
      else {
        lVar9 = (int64_t)plocal_var_70 - (int64_t)puVar7;
        lVar5 = lVar9 >> 3;
        if (lVar5 == 0) {
          lVar5 = 1;
LAB_18044bd13:
          puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,uVar8,param_4,lVar11,uVar12)
          ;
        }
        else {
          lVar5 = lVar5 * 2;
          if (lVar5 != 0) goto LAB_18044bd13;
        }
        if (puVar7 != puVar2) {
// WARNING: Subroutine does not return
          memmove(puVar3,puVar7,lVar9);
        }
        *puVar3 = uVar1;
        if (puVar7 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar7);
        }
        puVar4 = puVar3 + lVar5;
        plocal_var_78 = puVar3;
        plocal_var_68 = puVar4;
        uVar8 = (int8_t)local_var_60;
        plocal_var_70 = puVar3;
      }
      plocal_var_70 = plocal_var_70 + 1;
      lVar10 = lVar10 + 1;
      puVar7 = puVar3;
    } while (lVar10 < lVar11);
  }
  puVar4 = plocal_var_70;
  uVar6 = (int64_t)plocal_var_70 - (int64_t)puVar3;
  local_var_40 = local_var_60;
  if (uVar6 < 8) {
    lStack_58 = 0;
  }
  else {
    lStack_58 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,((int64_t)uVar6 >> 3) * 8,uVar8,param_4,lVar11,uVar12)
    ;
  }
  lStack_48 = lStack_58 + ((int64_t)uVar6 >> 3) * 8;
  lStack_50 = lStack_58;
  if (puVar3 != puVar4) {
// WARNING: Subroutine does not return
    memmove(lStack_58,puVar3,uVar6);
  }
  DataStructure_7f510(param_1,&lStack_58);
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Removing unreachable block (ram,0x00018044becb)
// WARNING: Removing unreachable block (ram,0x00018044bf0a)
// 函数: void UISystem_4be30(int64_t param_1)
void UISystem_4be30(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *plStack_70;
  int8_t stack_array_68 [8];
  int64_t *plStack_60;
  int32_t local_var_58;
  int64_t *plStack_50;
  int16_t local_var_48;
  char cStack_46;
  uVar4 = 0;
  lVar3 = *(int64_t *)(param_1 + 0x38);
  uVar6 = uVar4;
  if (*(int64_t *)(param_1 + 0x40) - lVar3 >> 4 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar4 + lVar3);
      if (plVar1[0x42] == 0) {
        plVar1[0x3f] = 0;
        plVar1[0x40] = 0;
        *(int32_t *)(plVar1 + 0x41) = 0;
        SystemInitializer(plVar1);
      }
      else {
        (**(code **)(*plVar1 + 0x28))();
        plStack_50 = (int64_t *)0x0;
        plStack_60 = (int64_t *)0x0;
        stack_array_68[0] = 0;
        (**(code **)(*plVar1 + 0x28))(plVar1);
        local_var_58 = 0;
        plStack_60 = plVar1;
        CoreEngine_07F4C0(stack_array_68);
        plVar2 = plStack_50;
        if (plStack_50 != (int64_t *)0x0) {
          (**(code **)(*plStack_50 + 0x28))(plStack_50);
        }
        plStack_70 = plVar2;
        local_var_48 = 0;
        cStack_46 = '\0';
        (**(code **)(*plVar1 + 0x38))(plVar1);
        *(int32_t *)(plVar2 + 2) = 0;
        *(int32_t *)(plVar2 + 7) = 0;
        *(int32_t *)(plVar2 + 0x11) = 0;
        *(int32_t *)(plVar2 + 0xc) = 0;
        *(int16_t *)(plVar2 + 0x18) = 0;
        if (plVar2[0x17] != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plVar2[0x17] = 0;
        GenericFunction_180085530(plVar2[0x16]);
        plVar2[0x16] = 0;
        *(int32_t *)(plVar2 + 0x19) = 0;
        local_var_48 = 0x101;
        if ((plVar1 != (int64_t *)0x0) && (plVar2 != (int64_t *)0x0)) {
          if (cStack_46 != '\0') {
            SystemConfig_Manager();
          }
          SystemSecurityManager(stack_array_68);
          if ((char)local_var_48 != '\0') {
            SystemInitializer(plVar1);
          }
          if (local_var_48._1_1_ != '\0') {
            SystemInitializer(plVar1);
          }
          plStack_70 = (int64_t *)0x0;
          if (plVar2 != (int64_t *)0x0) {
            (**(code **)(*plVar2 + 0x38))();
          }
        }
        SystemSecurityManager(stack_array_68);
        if (plStack_50 != (int64_t *)0x0) {
          (**(code **)(*plStack_50 + 0x38))();
        }
        if (plStack_70 != (int64_t *)0x0) {
          (**(code **)(*plStack_70 + 0x38))();
        }
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x10;
      lVar3 = *(int64_t *)(param_1 + 0x38);
      uVar6 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(param_1 + 0x40) - lVar3 >> 4));
  }
  return;
}
// 函数: void UISystem_4c0d0(int64_t param_1,uint param_2)
void UISystem_4c0d0(int64_t param_1,uint param_2)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  iVar2 = 0;
  if (*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) >> 4 != 0) {
    lVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x38));
      *(uint64_t *)(lVar1 + 0x1a0) =
           CONCAT44((float)(param_2 >> 8 & 0xff) * 0.003921569,
                    (float)(param_2 >> 0x10 & 0xff) * 0.003921569);
      *(uint64_t *)(lVar1 + 0x1a8) =
           CONCAT44((float)(param_2 >> 0x18) * 0.003921569,(float)(param_2 & 0xff) * 0.003921569);
      lVar3 = lVar3 + 0x10;
    } while ((uint64_t)(int64_t)iVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) >> 4));
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018044c324)
// WARNING: Removing unreachable block (ram,0x00018044c32d)
// WARNING: Removing unreachable block (ram,0x00018044c2c7)
// WARNING: Removing unreachable block (ram,0x00018044c2cd)
// WARNING: Removing unreachable block (ram,0x00018044c2d0)
// WARNING: Removing unreachable block (ram,0x00018044c2fe)
// WARNING: Removing unreachable block (ram,0x00018044c308)
// WARNING: Removing unreachable block (ram,0x00018044c30c)
// WARNING: Removing unreachable block (ram,0x00018044c37a)
// WARNING: Removing unreachable block (ram,0x00018044c353)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_4c190(int64_t param_1,int64_t *param_2,int64_t param_3)
void UISystem_4c190(int64_t param_1,int64_t *param_2,int64_t param_3)
{
  char cVar1;
  int iVar2;
  int32_t uVar3;
  int8_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar8;
  int iStackX_10;
  int64_t lStackX_20;
  int64_t *plStack_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  int8_t *plocal_var_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  int64_t lVar7;
  local_var_80 = 0xfffffffffffffffe;
  iStackX_10 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x38);
  if (*(int64_t *)(param_1 + 0x40) - lVar5 >> 4 != 0) {
    lStackX_20 = 0;
    do {
      lVar5 = *(int64_t *)(lStackX_20 + lVar5);
      plocal_var_58 = &system_data_buffer_ptr;
      local_var_40 = 0;
      plocal_var_50 = (int8_t *)0x0;
      local_var_48 = 0;
      if (param_3 != 0) {
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (*(char *)(param_3 + lVar6) != '\0');
        if ((int)lVar6 != 0) {
          iVar8 = (int)lVar7 + 2;
          iVar2 = iVar8;
          if (iVar8 < 0x10) {
            iVar2 = 0x10;
          }
          puVar4 = (int8_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar2,
                                 CONCAT71((int7)((uint64_t)lStackX_20 >> 8),0x13));
          *puVar4 = 0;
          plocal_var_50 = puVar4;
          uVar3 = CoreEngineSystemCleanup(puVar4);
          local_var_40 = CONCAT44(local_var_40._4_4_,uVar3);
// WARNING: Subroutine does not return
          memcpy(puVar4,param_3,iVar8);
        }
      }
      local_var_48 = 0;
      plocal_var_78 = &system_data_buffer_ptr;
      local_var_60 = 0;
      local_var_70 = 0;
      local_var_68 = 0;
      cVar1 = GenericFunction_180063510(lVar5 + 0x218,&plocal_var_78);
      local_var_70 = 0;
      local_var_60 = local_var_60 & 0xffffffff00000000;
      plocal_var_78 = &system_state_ptr;
      plocal_var_50 = (int8_t *)0x0;
      local_var_40 = local_var_40 & 0xffffffff00000000;
      plocal_var_58 = &system_state_ptr;
      if (cVar1 != '\0') {
        plStack_88 = param_2;
        if (param_2 != (int64_t *)0x0) {
          (**(code **)(*param_2 + 0x28))(param_2);
        }
        UltraHighFreq_SecurityValidator1(lVar5,&plStack_88);
        if (param_2 != (int64_t *)0x0) {
          (**(code **)(*param_2 + 0x38))(param_2);
        }
      }
      iStackX_10 = iStackX_10 + 1;
      lStackX_20 = lStackX_20 + 0x10;
      lVar5 = *(int64_t *)(param_1 + 0x38);
    } while ((uint64_t)(int64_t)iStackX_10 <
             (uint64_t)(*(int64_t *)(param_1 + 0x40) - lVar5 >> 4));
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018044c5c3)
// WARNING: Removing unreachable block (ram,0x00018044c5cc)
// WARNING: Removing unreachable block (ram,0x00018044c566)
// WARNING: Removing unreachable block (ram,0x00018044c56c)
// WARNING: Removing unreachable block (ram,0x00018044c56f)
// WARNING: Removing unreachable block (ram,0x00018044c59d)
// WARNING: Removing unreachable block (ram,0x00018044c5a7)
// WARNING: Removing unreachable block (ram,0x00018044c5ab)
// WARNING: Removing unreachable block (ram,0x00018044c619)
// WARNING: Removing unreachable block (ram,0x00018044c5f2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_4c420(int64_t param_1,uint param_2,int64_t param_3)
void UISystem_4c420(int64_t param_1,uint param_2,int64_t param_3)
{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  int8_t *puVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  void *plocal_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  void *plocal_var_70;
  int8_t *plocal_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  int64_t lVar8;
  uVar13 = 0xfffffffffffffffe;
  uVar10 = 0;
  lVar9 = *(int64_t *)(param_1 + 0x38);
  uVar12 = uVar10;
  if (*(int64_t *)(param_1 + 0x40) - lVar9 >> 4 != 0) {
    do {
      lVar1 = *(int64_t *)(uVar10 + lVar9);
      plocal_var_70 = &system_data_buffer_ptr;
      local_var_58 = 0;
      plocal_var_68 = (int8_t *)0x0;
      local_var_60 = 0;
      if (param_3 != 0) {
        lVar7 = -1;
        do {
          lVar8 = lVar7;
          lVar7 = lVar8 + 1;
        } while (*(char *)(param_3 + lVar7) != '\0');
        if ((int)lVar7 != 0) {
          iVar6 = (int)lVar8 + 2;
          iVar3 = iVar6;
          if (iVar6 < 0x10) {
            iVar3 = 0x10;
          }
          puVar5 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13,lVar9,uVar13);
          *puVar5 = 0;
          plocal_var_68 = puVar5;
          uVar4 = CoreEngineSystemCleanup(puVar5);
          local_var_58 = CONCAT44(local_var_58._4_4_,uVar4);
// WARNING: Subroutine does not return
          memcpy(puVar5,param_3,iVar6);
        }
      }
      local_var_60 = 0;
      plocal_var_90 = &system_data_buffer_ptr;
      local_var_78 = 0;
      local_var_88 = 0;
      local_var_80 = 0;
      cVar2 = GenericFunction_180063510(lVar1 + 0x218,&plocal_var_90);
      local_var_88 = 0;
      local_var_78 = local_var_78 & 0xffffffff00000000;
      plocal_var_90 = &system_state_ptr;
      if (cVar2 != '\0') {
        *(float *)(lVar1 + 0x238) = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(lVar1 + 0x23c) = (float)(param_2 >> 8 & 0xff) * 0.003921569;
        *(float *)(lVar1 + 0x240) = (float)(param_2 & 0xff) * 0.003921569;
        *(float *)(lVar1 + 0x244) = (float)(param_2 >> 0x18) * 0.003921569;
      }
      uVar11 = (int)uVar12 + 1;
      uVar10 = uVar10 + 0x10;
      lVar9 = *(int64_t *)(param_1 + 0x38);
      uVar12 = (uint64_t)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 <
             (uint64_t)(*(int64_t *)(param_1 + 0x40) - lVar9 >> 4));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_4c840(int32_t param_1,int64_t param_2)
void UISystem_4c840(int32_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  code *pcVar3;
  int64_t *plVar4;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  int64_t *plStackX_20;
  lVar1 = *(int64_t *)(system_main_module_state + 8);
  plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar4 = (int64_t)&system_handler1_ptr;
  *plVar4 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar4 + 1) = 0;
  *plVar4 = (int64_t)&ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(plVar4 + 2) = 0;
  UNLOCK();
  plVar4[3] = -1;
  *plVar4 = (int64_t)&rendering_buffer_2640_ptr;
  *(int32_t *)(plVar4 + 5) = 0xb;
  plVar4[4] = lVar1;
  pplStackX_18 = (int64_t **)plVar4;
  plStackX_20 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  *(int32_t *)(plVar4 + 6) = param_1;
  plVar4[7] = param_2;
  puVar2 = *(uint64_t **)(lVar1 + 0x140);
  pcVar3 = *(code **)*puVar2;
  pplStackX_18 = &plStackX_10;
  plStackX_10 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  (*pcVar3)(puVar2,&plStackX_10);
  CoreEngine_SystemInitializer(*(uint64_t *)(lVar1 + 0x140));
// WARNING: Could not recover jumptable at 0x00018044c92e. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x38))(plVar4);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_4c9c0(float param_1,float param_2)
void UISystem_4c9c0(float param_1,float param_2)
{
  char *pcVar1;
  int iVar2;
  int iVar3;
  pcVar1 = *(char **)(render_system_data_memory + 0x2010);
  iVar2 = (int)(param_2 * *(float *)(system_operation_state + 0x17f0));
  iVar3 = (int)(param_1 * *(float *)(system_operation_state + 0x17ec));
  if (*pcVar1 == '\0') {
    *(int *)(pcVar1 + 4) = iVar3;
    *(int *)(pcVar1 + 8) = iVar2;
    *pcVar1 = '\x01';
    return;
  }
  if ((*(int *)(pcVar1 + 4) == iVar3) && (*(int *)(pcVar1 + 8) == iVar2)) {
    return;
  }
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_9840_ptr,*(int *)(pcVar1 + 4),*(int32_t *)(pcVar1 + 8),iVar3
                ,iVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_4cb80(int64_t param_1)
void UISystem_4cb80(int64_t param_1)
{
  int64_t lVar1;
  int8_t stack_array_a8 [32];
  uint64_t local_var_88;
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [72];
  uint64_t local_var_18;
  local_var_88 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  plocal_var_78 = &memory_allocator_3480_ptr;
  plocal_var_70 = stack_array_60;
  local_var_68 = 0;
  stack_array_60[0] = 0;
  if (param_1 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_1 + lVar1) != '\0');
    local_var_68 = (int32_t)lVar1;
    strcpy_s(stack_array_60,0x40,param_1);
  }
  GenericFunction_1800c17c0();
  plocal_var_78 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_a8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
UISystem_4cc30(uint64_t *param_1,int32_t param_2,uint64_t param_3,int8_t param_4)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  GenericFunction_1800c1750(param_1,&plStackX_18,param_2,param_4,0);
  if (plStackX_18 == (int64_t *)0x0) {
    SystemCore_Allocator(&memory_allocator_336_ptr,param_2);
    *param_1 = 0;
  }
  else {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3);
    plVar2 = (int64_t *)DataStructure_ac390(uVar1);
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStackX_20 = plStackX_18;
    if (plStackX_18 != (int64_t *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))();
    }
    DataStructure_adab0(plVar2,&plStackX_20);
    *param_1 = plVar2;
  }
  if (plStackX_18 != (int64_t *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  return param_1;
}
uint64_t *
UISystem_4cd30(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             int64_t *param_5)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plStackX_8;
  int64_t *plStack_20;
  int32_t local_var_18;
  int32_t local_var_14;
  UISystem_4cc30(&plStackX_8,param_2,param_3,param_4,0xfffffffffffffffe);
  if (plStackX_8 == (int64_t *)0x0) {
    plStack_20 = plStackX_8;
    local_var_18 = 0xffffffff;
  }
  else {
    lVar3 = param_5[1];
    plStackX_8[10] = *param_5;
    plStackX_8[0xb] = lVar3;
    lVar3 = param_5[3];
    plStackX_8[0xc] = param_5[2];
    plStackX_8[0xd] = lVar3;
    uVar1 = *(int32_t *)((int64_t)param_5 + 0x24);
    lVar3 = param_5[5];
    uVar2 = *(int32_t *)((int64_t)param_5 + 0x2c);
    *(int *)(plStackX_8 + 0xe) = (int)param_5[4];
    *(int32_t *)((int64_t)plStackX_8 + 0x74) = uVar1;
    *(int *)(plStackX_8 + 0xf) = (int)lVar3;
    *(int32_t *)((int64_t)plStackX_8 + 0x7c) = uVar2;
    uVar1 = *(int32_t *)((int64_t)param_5 + 0x34);
    lVar3 = param_5[7];
    uVar2 = *(int32_t *)((int64_t)param_5 + 0x3c);
    *(int *)(plStackX_8 + 0x10) = (int)param_5[6];
    *(int32_t *)((int64_t)plStackX_8 + 0x84) = uVar1;
    *(int *)(plStackX_8 + 0x11) = (int)lVar3;
    *(int32_t *)((int64_t)plStackX_8 + 0x8c) = uVar2;
    DataStructure_fbf30(param_3,param_4 & 0xff,plStackX_8);
    plStack_20 = plStackX_8;
    if (plStackX_8 == (int64_t *)0x0) {
      local_var_18 = 0xffffffff;
    }
    else {
      local_var_18 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    }
    if (plStack_20 != (int64_t *)0x0) {
      (**(code **)(*plStack_20 + 0x28))(plStack_20);
    }
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *param_1 = plStack_20;
  param_1[1] = CONCAT44(local_var_14,local_var_18);
  return param_1;
}
uint64_t *
UISystem_4ce10(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plStackX_8;
  int64_t *plStack_28;
  uint64_t local_var_20;
  int64_t **pplStack_18;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_20 = 0xfffffffffffffffe;
  UISystem_4cc30(&plStackX_8);
  if (plStackX_8 == (int64_t *)0x0) {
    pplStack_18 = (int64_t **)plStackX_8;
    local_var_10 = 0xffffffff;
  }
  else {
    lVar3 = param_4[1];
    plStackX_8[10] = *param_4;
    plStackX_8[0xb] = lVar3;
    lVar3 = param_4[3];
    plStackX_8[0xc] = param_4[2];
    plStackX_8[0xd] = lVar3;
    uVar1 = *(int32_t *)((int64_t)param_4 + 0x24);
    lVar3 = param_4[5];
    uVar2 = *(int32_t *)((int64_t)param_4 + 0x2c);
    *(int *)(plStackX_8 + 0xe) = (int)param_4[4];
    *(int32_t *)((int64_t)plStackX_8 + 0x74) = uVar1;
    *(int *)(plStackX_8 + 0xf) = (int)lVar3;
    *(int32_t *)((int64_t)plStackX_8 + 0x7c) = uVar2;
    uVar1 = *(int32_t *)((int64_t)param_4 + 0x34);
    lVar3 = param_4[7];
    uVar2 = *(int32_t *)((int64_t)param_4 + 0x3c);
    *(int *)(plStackX_8 + 0x10) = (int)param_4[6];
    *(int32_t *)((int64_t)plStackX_8 + 0x84) = uVar1;
    *(int *)(plStackX_8 + 0x11) = (int)lVar3;
    *(int32_t *)((int64_t)plStackX_8 + 0x8c) = uVar2;
    plStack_28 = plStackX_8;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    pplStack_18 = &plStack_28;
    PhysicsSystem_TerrainCollider(param_3,plStack_28,1);
    if (plStack_28 != (int64_t *)0x0) {
      (**(code **)(*plStack_28 + 0x38))();
    }
    plVar4 = plStackX_8;
    if (plStackX_8 == (int64_t *)0x0) {
      local_var_10 = 0xffffffff;
    }
    else {
      local_var_10 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    }
    pplStack_18 = (int64_t **)plVar4;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *param_1 = pplStack_18;
  param_1[1] = CONCAT44(local_var_c,local_var_10);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_4cf20(uint64_t param_1,int64_t param_2)
void UISystem_4cf20(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int8_t stack_array_b8 [32];
  int64_t *plStack_98;
  int64_t *plStack_90;
  uint64_t local_var_88;
  int64_t **pplStack_80;
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [72];
  uint64_t local_var_18;
  local_var_88 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  plocal_var_78 = &memory_allocator_3480_ptr;
  plocal_var_70 = stack_array_60;
  local_var_68 = 0;
  stack_array_60[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    local_var_68 = (int32_t)lVar1;
    strcpy_s(stack_array_60,0x40,param_2);
  }
  GenericFunction_1800c1520(render_system_data_memory,&plStack_90,&plocal_var_78);
  plocal_var_78 = &system_state_ptr;
  pplStack_80 = &plStack_98;
  plStack_98 = plStack_90;
  if (plStack_90 != (int64_t *)0x0) {
    (**(code **)(*plStack_90 + 0x28))();
  }
  DataStructure_adab0(param_1,&plStack_98);
  if (plStack_90 != (int64_t *)0x0) {
    (**(code **)(*plStack_90 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_b8);
}
// 函数: void UISystem_4d0b0(int64_t param_1,uint64_t *param_2)
void UISystem_4d0b0(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_58 [80];
  if (param_1 != 0) {
    puVar2 = (uint64_t *)UISystem_66610(param_1,stack_array_58);
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    uVar1 = puVar2[3];
    param_2[2] = puVar2[2];
    param_2[3] = uVar1;
    uVar1 = puVar2[5];
    param_2[4] = puVar2[4];
    param_2[5] = uVar1;
    uVar1 = puVar2[7];
    param_2[6] = puVar2[6];
    param_2[7] = uVar1;
  }
  return;
}
// 函数: void UISystem_4d0f0(int64_t param_1,uint64_t *param_2)
void UISystem_4d0f0(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_58 [80];
  if (param_1 != 0) {
    puVar2 = (uint64_t *)UISystem_66700(param_1,stack_array_58);
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    uVar1 = puVar2[3];
    param_2[2] = puVar2[2];
    param_2[3] = uVar1;
    uVar1 = puVar2[5];
    param_2[4] = puVar2[4];
    param_2[5] = uVar1;
    uVar1 = puVar2[7];
    param_2[6] = puVar2[6];
    param_2[7] = uVar1;
  }
  return;
}
// 函数: void UISystem_4d130(int64_t param_1,int32_t *param_2,float param_3,byte param_4,float param_5)
void UISystem_4d130(int64_t param_1,int32_t *param_2,float param_3,byte param_4,float param_5)
{
  float *pfVar1;
  int64_t lVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0xf0)) {
      UISystem_67500();
      *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_1 + 0x70);
    }
    fVar9 = 0.0;
    uVar5 = 0;
    iVar7 = (int)(*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 0xd0) >> 3);
    if (iVar7 != 1) {
      do {
        fVar8 = (float)UISystem_66360(param_1,uVar5);
        fVar9 = fVar9 + fVar8;
        if (param_3 < fVar9) goto LAB_18044d1c0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < iVar7 - 1U);
    }
    uVar5 = 0xffffffff;
LAB_18044d1c0:
    lVar2 = *(int64_t *)(param_1 + 0xd0);
    iVar7 = (int)(*(int64_t *)(param_1 + 0xd8) - lVar2 >> 3);
    if ((((iVar7 < 2) || ((int)uVar5 < 0)) ||
        (pfVar1 = (float *)(*(int64_t *)(lVar2 + (uint64_t)uVar5 * 8) + 0xcc),
        param_5 < *pfVar1 || param_5 == *pfVar1)) ||
       (pfVar1 = (float *)(*(int64_t *)(lVar2 + (uint64_t)(uVar5 + 1) * 8) + 0xcc),
       param_5 < *pfVar1 || param_5 == *pfVar1)) {
LAB_18044d253:
      UISystem_66700(param_1,&local_var_78,param_3);
    }
    else {
      uVar6 = (uint64_t)uVar5;
      if (param_4 != 0) {
        uVar6 = (uint64_t)(uVar5 + 1);
      }
      uVar5 = (uint)uVar6;
      do {
        uVar4 = uVar6;
        uVar5 = (uint)param_4 * 2 + -1 + uVar5;
        if (((int)uVar5 < 0) || (iVar7 <= (int)uVar5)) goto LAB_18044d253;
        pfVar1 = (float *)(*(int64_t *)(*(int64_t *)(param_1 + 0xd0) + (uint64_t)uVar5 * 8) +
                          0xcc);
        uVar6 = (uint64_t)uVar5;
      } while (*pfVar1 <= param_5 && param_5 != *pfVar1);
      puVar3 = *(int32_t **)(*(int64_t *)(param_1 + 0xd0) + (int64_t)(int)uVar4 * 8);
      local_var_78 = *puVar3;
      local_var_74 = puVar3[1];
      local_var_70 = puVar3[2];
      local_var_6c = puVar3[3];
      local_var_68 = puVar3[4];
      local_var_64 = puVar3[5];
      local_var_60 = puVar3[6];
      local_var_5c = puVar3[7];
      local_var_58 = puVar3[8];
      local_var_54 = puVar3[9];
      local_var_50 = puVar3[10];
      local_var_4c = puVar3[0xb];
      local_var_48 = puVar3[0xc];
      local_var_44 = puVar3[0xd];
      local_var_40 = puVar3[0xe];
      local_var_3c = puVar3[0xf];
    }
    *param_2 = local_var_78;
    param_2[1] = local_var_74;
    param_2[2] = local_var_70;
    param_2[3] = local_var_6c;
    param_2[4] = local_var_68;
    param_2[5] = local_var_64;
    param_2[6] = local_var_60;
    param_2[7] = local_var_5c;
    param_2[8] = local_var_58;
    param_2[9] = local_var_54;
    param_2[10] = local_var_50;
    param_2[0xb] = local_var_4c;
    param_2[0xc] = local_var_48;
    param_2[0xd] = local_var_44;
    param_2[0xe] = local_var_40;
    param_2[0xf] = local_var_3c;
  }
  return;
}