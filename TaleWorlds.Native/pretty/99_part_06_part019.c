/* 原始函数别名定义 */
#define ResourceManager_Allocate ResourceManager_Allocate  // ResourceManager_Allocate 的语义化别名
#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part019.c - 10 个函数
// 函数: void function_3b6b70(int64_t *param_1,int param_2,int param_3)
void function_3b6b70(int64_t *param_1,int param_2,int param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  int *piVar8;
  int **ppiVar9;
  int64_t lVar10;
  int iVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int *piStack_88;
  uint64_t *plocal_var_80;
  int *piStack_78;
  uint64_t *plocal_var_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  char cStack_50;
  int8_t local_var_4f;
  int8_t local_var_4e;
  if (param_2 < param_3) {
    uVar13 = 0xfffffffffffffffe;
    do {
      plVar12 = (int64_t *)0x0;
      lVar10 = *param_1;
      uVar6 = (int64_t)param_2 / (int64_t)*(int *)(lVar10 + 0x18);
      iVar11 = param_2 % *(int *)(lVar10 + 0x18);
      iVar7 = (int)uVar6;
      lVar2 = *(int64_t *)(lVar10 + 0x40);
      puVar1 = (uint64_t *)
               (lVar2 + ((uint64_t)(int64_t)(iVar7 * 1000 + iVar11) %
                        (uint64_t)*(uint *)(lVar10 + 0x48)) * 8);
      for (piVar8 = (int *)*puVar1; piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
        if ((iVar7 == *piVar8) && (iVar11 == piVar8[1])) {
          piStack_88 = piVar8;
          plocal_var_80 = puVar1;
          ppiVar9 = &piStack_88;
          lVar10 = *(int64_t *)(lVar10 + 0x48);
          goto LAB_1803b6c22;
        }
      }
      lVar10 = *(int64_t *)(lVar10 + 0x48);
      plocal_var_70 = (uint64_t *)(lVar2 + lVar10 * 8);
      piStack_78 = (int *)*plocal_var_70;
      ppiVar9 = &piStack_78;
LAB_1803b6c22:
      if (*ppiVar9 != *(int **)(lVar2 + lVar10 * 8)) {
        plVar12 = *(int64_t **)(*ppiVar9 + 2);
      }
      if (plVar12 != (int64_t *)0x0) {
        local_var_4e = 3;
        plVar3 = (int64_t *)param_1[1];
        lStack_68 = *plVar3;
        lStack_60 = plVar3[1];
        lStack_58 = plVar3[2];
        _cStack_50 = CONCAT11(*(int8_t *)((int64_t)plVar3 + 0x19),1);
        lVar10 = (int64_t)iVar7 * 0x10 + (int64_t)iVar11;
        uVar4 = *(uint64_t *)(param_1[2] + lVar10 * 8);
        if ((uint64_t)((lStack_58 - lStack_60) + lStack_68) <= uVar4) {
          System_BufferManager(&lStack_68,(lStack_60 - lStack_68) + uVar4);
        }
        lStack_60 = lStack_60 + uVar4;
        lVar2 = *param_1 + 0x80;
        lVar5 = *(int64_t *)(*(int64_t *)(*param_1 + 0x68) + 0x60b40);
        if (lVar5 == 0) {
          uVar13 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x6c00,4,3);
// WARNING: Subroutine does not return
          memset(uVar13,0,0x6c00);
        }
        (**(code **)(*plVar12 + 0x18))
                  (plVar12,param_1[3],lVar10 * 0x6c + lVar5,uVar6 & 0xffffffff,iVar11,lVar2,
                   &lStack_68,*(int32_t *)param_1[4],lVar2,lVar10,*(code **)(*plVar12 + 0x18),
                   uVar13);
        if (*(char *)(*(int64_t *)(*param_1 + 0x68) + 0x2963) == '\0') {
          if (plVar12[0x10f] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          plVar12[0x10f] = 0;
        }
        if ((cStack_50 == '\0') && (lStack_68 != 0)) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}
int32_t function_3b6df0(int64_t param_1)
{
  int32_t uVar1;
  function_3e2360(param_1 + 0x1c60,param_1);
  if ((*(char *)(*(int64_t *)(param_1 + 0x68) + 0x2965) != '\0') && (system_data_2847 == '\0')) {
    if (*(int64_t *)(param_1 + 0x1c8) == 0) {
      function_3e67b0(param_1 + 0x1c60);
    }
    else {
      function_3e6590();
    }
  }
  *(int8_t *)(param_1 + 0x170) = 1;
  LOCK();
  uVar1 = *(int32_t *)(param_1 + 0x10);
  *(int32_t *)(param_1 + 0x10) = 0;
  UNLOCK();
  return uVar1;
}
// 函数: void function_3b6f20(int64_t param_1)
void function_3b6f20(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  plVar1 = *(int64_t **)(param_1 + 0x40);
  lVar4 = *plVar1;
  plVar3 = plVar1;
  if (lVar4 == 0) {
    lVar4 = plVar1[1];
    while (plVar3 = plVar3 + 1, lVar4 == 0) {
      lVar4 = plVar3[1];
    }
  }
  lVar2 = plVar1[*(int64_t *)(param_1 + 0x48)];
  while (lVar4 != lVar2) {
    *(uint64_t *)(*(int64_t *)(lVar4 + 8) + 0x658) = *(uint64_t *)(param_1 + 0x70);
    lVar4 = *(int64_t *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar1 = plVar3 + 1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar1;
    }
  }
  function_3b7060(param_1);
  function_1c4730();
  if (system_data_2847 == '\0') {
    plVar1 = *(int64_t **)(param_1 + 0x40);
    lVar4 = *plVar1;
    plVar3 = plVar1;
    if (lVar4 == 0) {
      lVar4 = plVar1[1];
      while (plVar3 = plVar3 + 1, lVar4 == 0) {
        lVar4 = plVar3[1];
      }
    }
    lVar2 = plVar1[*(int64_t *)(param_1 + 0x48)];
    while (lVar4 != lVar2) {
      function_3d3f10(*(int64_t *)(lVar4 + 8) + 0x80,*(uint64_t *)(param_1 + 0x70));
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      while (lVar4 == 0) {
        plVar1 = plVar3 + 1;
        plVar3 = plVar3 + 1;
        lVar4 = *plVar1;
      }
    }
  }
  return;
}
// 函数: void function_3b6fc0(void)
void function_3b6fc0(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t unaff_RBP;
  int64_t lVar4;
  plVar1 = *(int64_t **)(unaff_RBP + 0x40);
  lVar4 = *plVar1;
  plVar3 = plVar1;
  if (lVar4 == 0) {
    lVar4 = plVar1[1];
    while (plVar3 = plVar3 + 1, lVar4 == 0) {
      lVar4 = plVar3[1];
    }
  }
  lVar2 = plVar1[*(int64_t *)(unaff_RBP + 0x48)];
  while (lVar4 != lVar2) {
    function_3d3f10(*(int64_t *)(lVar4 + 8) + 0x80,*(uint64_t *)(unaff_RBP + 0x70));
    lVar4 = *(int64_t *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar1 = plVar3 + 1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar1;
    }
  }
  return;
}
// 函数: void function_3b7051(void)
void function_3b7051(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b7060(int64_t param_1)
void function_3b7060(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  void *puVar8;
  uint64_t uVar9;
  int32_t extraout_XMM0_Da;
  int32_t uVar10;
  int8_t stack_array_178 [32];
  void *plocal_var_158;
  void *plocal_var_150;
  uint local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int16_t local_var_120;
  int8_t local_var_11e;
  void *plocal_var_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  void *plocal_var_f8;
  int64_t lStack_f0;
  int32_t local_var_e0;
  uint64_t local_var_d8;
  void *plocal_var_d0;
  int8_t *plocal_var_c8;
  int32_t local_var_c0;
  int8_t stack_array_b8 [16];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [16];
  void *plocal_var_80;
  int8_t *plocal_var_78;
  int32_t local_var_70;
  int8_t stack_array_68 [16];
  void *plocal_var_58;
  int8_t *plocal_var_50;
  int32_t local_var_48;
  int8_t stack_array_40 [16];
  uint64_t local_var_30;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  CoreEngineDataTransformer(&plocal_var_f8,*(int64_t *)(param_1 + 0x70) + 0x2d0);
  cVar3 = UltraHighFreq_LogManager1(&plocal_var_f8);
  uVar10 = extraout_XMM0_Da;
  if (cVar3 == '\0') {
    uVar10 = SystemManager_Processor(&plocal_var_f8);
  }
  function_1c2d00(uVar10,*(uint64_t *)(param_1 + 0x70));
  uVar7 = 0;
  plocal_var_158 = &system_data_buffer_ptr;
  local_var_140 = 0;
  plocal_var_150 = (void *)0x0;
  local_var_148 = 0;
  lVar2 = *(int64_t *)(param_1 + 0x70);
  uVar1 = *(uint *)(lVar2 + 0x2e0);
  uVar9 = (uint64_t)uVar1;
  if (*(int64_t *)(lVar2 + 0x2d8) != 0) {
    CoreEngineDataBufferProcessor(&plocal_var_158,uVar9);
  }
  if (uVar1 != 0) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_150,*(uint64_t *)(lVar2 + 0x2d8),uVar9);
  }
  if (plocal_var_150 != (void *)0x0) {
    plocal_var_150[uVar9] = 0;
  }
  local_var_148 = uVar1;
  local_var_140._4_4_ = *(uint *)(lVar2 + 0x2ec);
  CoreEngineDataBufferProcessor(&plocal_var_158,0x1f);
  puVar5 = (int32_t *)(plocal_var_150 + local_var_148);
  *puVar5 = 0x72726574;
  puVar5[1] = 0x5f6e6961;
  puVar5[2] = 0x64616873;
  puVar5[3] = 0x5f737265;
  puVar5[4] = 0x64616568;
  puVar5[5] = 0x645f7265;
  puVar5[6] = 0x2e617461;
  puVar5[7] = 0x6e6962;
  plocal_var_118 = &system_data_buffer_ptr;
  local_var_100 = 0;
  local_var_110 = 0;
  local_var_108 = 0;
  local_var_148 = 0x1f;
  cVar3 = RenderingSystem_RenderQueue(&plocal_var_158);
  if (cVar3 != '\0') {
    local_var_138 = 0;
    local_var_130 = 0;
    local_var_128 = 0;
    local_var_120 = 0;
    local_var_11e = 3;
    function_39d7b0(*(int64_t *)(param_1 + 0x68) + 0x608f0,&local_var_138,param_1 + 0x188);
    puVar6 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    puVar8 = &system_buffer_ptr;
    if (plocal_var_150 != (void *)0x0) {
      puVar8 = plocal_var_150;
    }
    *puVar6 = 0;
    *(int8_t *)(puVar6 + 2) = 0;
    SystemCore_Validator(puVar6,puVar8,&processed_var_4880_ptr);
    iVar4 = function_62e090(puVar6);
    if (iVar4 != 0) {
      uVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar4,3);
    }
    fread(uVar7,(int64_t)iVar4,1,puVar6[1]);
    if (puVar6[1] != 0) {
      fclose();
      puVar6[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      if (puVar6[1] != 0) {
        fclose();
        puVar6[1] = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar6);
  }
  function_6272a0(&processed_var_872_ptr);
  plocal_var_d0 = &system_config_ptr;
  plocal_var_c8 = stack_array_b8;
  stack_array_b8[0] = 0;
  local_var_c0 = 5;
  strcpy_s(stack_array_b8,0x10,&system_data_be28);
  UISystem_EventDispatcher(&plocal_var_f8,&plocal_var_d0);
  plocal_var_d0 = &system_state_ptr;
  plocal_var_a8 = &system_config_ptr;
  plocal_var_a0 = stack_array_90;
  stack_array_90[0] = 0;
  local_var_98 = 4;
  strcpy_s(stack_array_90,0x10,&system_data_d8ac);
  UISystem_EventDispatcher(&plocal_var_f8,&plocal_var_a8);
  plocal_var_a8 = &system_state_ptr;
  plocal_var_80 = &system_config_ptr;
  plocal_var_78 = stack_array_68;
  stack_array_68[0] = 0;
  local_var_70 = 5;
  strcpy_s(stack_array_68,0x10,&system_data_be54);
  UISystem_EventDispatcher(&plocal_var_f8,&plocal_var_80);
  plocal_var_80 = &system_state_ptr;
  plocal_var_58 = &system_config_ptr;
  plocal_var_50 = stack_array_40;
  stack_array_40[0] = 0;
  local_var_48 = 4;
  strcpy_s(stack_array_40,0x10,&system_data_b88c);
  UISystem_EventDispatcher(&plocal_var_f8,&plocal_var_58);
  plocal_var_58 = &system_state_ptr;
  uVar10 = function_3b7530(param_1);
  function_1c5450(uVar10,*(uint64_t *)(param_1 + 0x70));
  local_var_110 = 0;
  local_var_100 = local_var_100 & 0xffffffff00000000;
  plocal_var_118 = &system_state_ptr;
  plocal_var_158 = &system_data_buffer_ptr;
  if (plocal_var_150 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_150 = (void *)0x0;
  local_var_140 = (uint64_t)local_var_140._4_4_ << 0x20;
  plocal_var_158 = &system_state_ptr;
  plocal_var_f8 = &system_data_buffer_ptr;
  if (lStack_f0 == 0) {
    lStack_f0 = 0;
    local_var_e0 = 0;
    plocal_var_f8 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_178);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b7530(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3b7530(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  uint64_t *puVar2;
  void *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  void *plocal_var_60;
  void *plocal_var_58;
  uint local_var_50;
  uint64_t local_var_48;
  int64_t lStack_40;
  int64_t lStack_38;
  uint64_t local_var_30;
  int16_t local_var_28;
  int8_t local_var_26;
  plocal_var_60 = &system_data_buffer_ptr;
  local_var_48 = 0;
  plocal_var_58 = (void *)0x0;
  local_var_50 = 0;
  lVar4 = *(int64_t *)(param_1 + 0x70);
  uVar1 = *(uint *)(lVar4 + 0x2e0);
  uVar5 = (uint64_t)uVar1;
  if (*(int64_t *)(lVar4 + 0x2d8) != 0) {
    CoreEngineDataBufferProcessor(&plocal_var_60,uVar5,param_3,param_4,0xfffffffffffffffe);
  }
  if (uVar1 != 0) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_58,*(uint64_t *)(lVar4 + 0x2d8),uVar5);
  }
  if (plocal_var_58 != (void *)0x0) {
    plocal_var_58[uVar5] = 0;
  }
  local_var_48 = CONCAT44(*(int32_t *)(lVar4 + 0x2ec),(int32_t)local_var_48);
  local_var_50 = uVar1;
  CoreEngineDataBufferProcessor(&plocal_var_60,0x1f);
  puVar2 = (uint64_t *)(plocal_var_58 + local_var_50);
  *puVar2 = 0x5f6e696172726574;
  puVar2[1] = 0x5f73726564616873;
  *(int32_t *)(puVar2 + 2) = 0x64616568;
  *(int32_t *)((int64_t)puVar2 + 0x14) = 0x645f7265;
  *(int32_t *)(puVar2 + 3) = 0x2e617461;
  *(int32_t *)((int64_t)puVar2 + 0x1c) = 0x6e6962;
  lStack_40 = 0;
  lStack_38 = 0;
  local_var_30 = 0;
  local_var_28 = 0;
  local_var_26 = 3;
  local_var_50 = 0x1f;
  function_39d7b0(*(int64_t *)(param_1 + 0x68) + 0x608f0,&lStack_40,param_1 + 0x188);
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
  puVar3 = &system_buffer_ptr;
  if (plocal_var_58 != (void *)0x0) {
    puVar3 = plocal_var_58;
  }
  *puVar2 = 0;
  *(int8_t *)(puVar2 + 2) = 0;
  SystemCore_Validator(puVar2,puVar3,&processed_var_9772_ptr);
  if (puVar2[1] != 0) {
    lVar4 = lStack_38 - lStack_40;
    if (lStack_40 == 0) {
      lVar4 = 0;
    }
    fwrite(lStack_40,lVar4,1,puVar2[1]);
    if (puVar2[1] != 0) {
      fclose();
      puVar2[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      if (puVar2[1] != 0) {
        fclose();
        puVar2[1] = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
    }
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b7760(int64_t param_1,uint64_t param_2)
void function_3b7760(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  void *plocal_var_70;
  int64_t lStack_68;
  uint local_var_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  int64_t lStack_48;
  uint local_var_40;
  uint64_t local_var_38;
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x398,8,3,0xfffffffffffffffe);
  plVar5 = (int64_t *)function_1ecc70(uVar4);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(int64_t **)(param_1 + 0x70);
  *(int64_t **)(param_1 + 0x70) = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  lStack_68 = 0;
  local_var_60 = 0;
  function_3b7950(&plocal_var_70,param_2);
  uVar3 = local_var_60;
  lVar2 = *(int64_t *)(param_1 + 0x70);
  uVar6 = (uint64_t)local_var_60;
  if (lStack_68 != 0) {
    CoreEngineDataBufferProcessor(lVar2 + 0x2d0,uVar6);
  }
  if (uVar3 != 0) {
// WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(lVar2 + 0x2d8),lStack_68,uVar6);
  }
  *(int32_t *)(lVar2 + 0x2e0) = 0;
  if (*(int64_t *)(lVar2 + 0x2d8) != 0) {
    *(int8_t *)(uVar6 + *(int64_t *)(lVar2 + 0x2d8)) = 0;
  }
  *(int32_t *)(lVar2 + 0x2ec) = local_var_58._4_4_;
  ResourceManager_Allocate(&plocal_var_70,1);
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  lStack_48 = 0;
  local_var_40 = 0;
  function_3b7ae0(&plocal_var_50,param_2);
  uVar3 = local_var_40;
  lVar2 = *(int64_t *)(param_1 + 0x70);
  uVar6 = (uint64_t)local_var_40;
  if (lStack_48 != 0) {
    CoreEngineDataBufferProcessor(lVar2 + 0x2b0,uVar6);
  }
  if (uVar3 != 0) {
// WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(lVar2 + 0x2b8),lStack_48,uVar6);
  }
  *(int32_t *)(lVar2 + 0x2c0) = 0;
  if (*(int64_t *)(lVar2 + 0x2b8) != 0) {
    *(int8_t *)(uVar6 + *(int64_t *)(lVar2 + 0x2b8)) = 0;
  }
  *(uint *)(lVar2 + 0x2cc) = local_var_38._4_4_;
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lStack_48,lStack_48);
  }
  lStack_48 = 0;
  local_var_38 = (uint64_t)local_var_38._4_4_ << 0x20;
  plocal_var_50 = &system_state_ptr;
  plocal_var_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lStack_68,0);
  }
  return;
}
// 函数: void function_3b7950(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3b7950(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int iVar5;
  void *plocal_var_28;
  int64_t lStack_20;
  int32_t local_var_10;
  uVar2 = CoreEngineDataTransformer(&plocal_var_28,param_2 + 0x27c8,param_3,param_4,0,0xfffffffffffffffe);
  SystemScheduler(param_1,uVar2);
  plocal_var_28 = &system_data_buffer_ptr;
  if (lStack_20 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_20 = 0;
  local_var_10 = 0;
  plocal_var_28 = &system_state_ptr;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = iVar1 + 9;
  CoreEngineDataBufferProcessor(param_1,iVar5);
  puVar3 = (uint64_t *)((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8));
  *puVar3 = 0x6a624f656e656353;
  *(int16_t *)(puVar3 + 1) = 0x2f;
  *(int *)(param_1 + 0x10) = iVar5;
  if (0 < *(int *)(param_2 + 0x4e8)) {
    CoreEngineDataBufferProcessor(param_1,iVar5 + *(int *)(param_2 + 0x4e8));
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),
           *(uint64_t *)(param_2 + 0x4e0),(int64_t)(*(int *)(param_2 + 0x4e8) + 1));
  }
  CoreEngineDataBufferProcessor(param_1,iVar1 + 10);
  *(int16_t *)((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8)) = 0x2f;
  *(int *)(param_1 + 0x10) = iVar1 + 10;
  CoreEngineDataBufferProcessor(param_1,iVar1 + 0x16);
  puVar3 = (uint64_t *)((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8));
  *puVar3 = 0x6143726564616853;
  *(int32_t *)(puVar3 + 1) = 0x2f656863;
  *(int8_t *)((int64_t)puVar3 + 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar1 + 0x16;
  CoreEngineDataBufferProcessor(param_1,iVar1 + 0x1c);
  puVar4 = (int32_t *)((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8));
  *puVar4 = 0x31443344;
  *(int16_t *)(puVar4 + 1) = 0x2f31;
  *(int8_t *)((int64_t)puVar4 + 6) = 0;
  *(int *)(param_1 + 0x10) = iVar1 + 0x1c;
  return;
}
// WARNING: Removing unreachable block (ram,0x0001803b7e17)
// WARNING: Removing unreachable block (ram,0x0001803b7e25)
// WARNING: Removing unreachable block (ram,0x0001803b7e2d)
// WARNING: Removing unreachable block (ram,0x0001803b7e3b)
// WARNING: Removing unreachable block (ram,0x0001803b7e67)
// WARNING: Removing unreachable block (ram,0x0001803b7e9f)
// WARNING: Removing unreachable block (ram,0x0001803b7eb0)
// WARNING: Removing unreachable block (ram,0x0001803b7ec1)
// WARNING: Removing unreachable block (ram,0x0001803b7ecf)
// WARNING: Removing unreachable block (ram,0x0001803b7ed7)
// WARNING: Removing unreachable block (ram,0x0001803b7f50)
// WARNING: Removing unreachable block (ram,0x0001803b7f5b)
// WARNING: Removing unreachable block (ram,0x0001803b7f5f)
// WARNING: Removing unreachable block (ram,0x0001803b7f6f)
// WARNING: Removing unreachable block (ram,0x0001803b7f7b)
// WARNING: Removing unreachable block (ram,0x0001803b7f82)
// WARNING: Removing unreachable block (ram,0x0001803b7fca)
// WARNING: Removing unreachable block (ram,0x0001803b7fcf)
// WARNING: Removing unreachable block (ram,0x0001803b7fe8)
// WARNING: Removing unreachable block (ram,0x0001803b7fed)
// WARNING: Removing unreachable block (ram,0x0001803b800f)
// WARNING: Removing unreachable block (ram,0x0001803b8014)
// WARNING: Removing unreachable block (ram,0x0001803b8039)
// WARNING: Removing unreachable block (ram,0x0001803b803e)
// WARNING: Removing unreachable block (ram,0x0001803b8063)
// WARNING: Removing unreachable block (ram,0x0001803b8068)
// WARNING: Removing unreachable block (ram,0x0001803b8083)
// WARNING: Removing unreachable block (ram,0x0001803b8088)
// WARNING: Removing unreachable block (ram,0x0001803b80df)
// WARNING: Removing unreachable block (ram,0x0001803b80e4)
// WARNING: Removing unreachable block (ram,0x0001803b7eb4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b7ae0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3b7ae0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  int32_t uVar10;
  void *plocal_var_110;
  int64_t lStack_108;
  uint64_t local_var_f8;
  void *plocal_var_f0;
  uint64_t local_var_e8;
  int32_t local_var_e0;
  uint64_t local_var_d8;
  void *plocal_var_d0;
  int64_t lStack_c8;
  uint local_var_c0;
  uint64_t local_var_b8;
  int8_t stack_array_90 [8];
  int64_t lStack_88;
  int iStack_80;
  uint64_t local_var_78;
  int8_t stack_array_50 [32];
  uint64_t local_var_30;
  local_var_30 = 0xfffffffffffffffe;
  uVar2 = CoreEngineDataTransformer(&plocal_var_110,param_2 + 0x27c8,param_3,param_4,0);
  SystemScheduler(param_1,uVar2);
  plocal_var_110 = &system_data_buffer_ptr;
  if (lStack_108 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_108 = 0;
  local_var_f8._0_4_ = 0;
  plocal_var_110 = &system_state_ptr;
  function_141820(*system_main_module_state,param_1);
  CoreEngineDataTransformer(stack_array_90,param_2 + 0x27c8);
  uVar10 = 2;
  lVar3 = NetworkSystem_ProtocolParser(stack_array_90,&plocal_var_110,0,iStack_80 + -1,2);
  iVar7 = *(int *)(lVar3 + 0x10) + -1;
  if (-1 < iVar7) {
    lVar4 = (int64_t)iVar7;
    do {
      if (*(char *)(lVar4 + *(int64_t *)(lVar3 + 8)) == '/') goto LAB_1803b7bdb;
      iVar7 = iVar7 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  iVar7 = -1;
LAB_1803b7bdb:
  plocal_var_110 = &system_data_buffer_ptr;
  if (lStack_108 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_108 = 0;
  local_var_f8._0_4_ = 0;
  plocal_var_110 = &system_state_ptr;
  lVar3 = NetworkSystem_ProtocolParser(stack_array_90,&plocal_var_110,iVar7 + 1,iStack_80 + -1,uVar10);
  if (lStack_88 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  iStack_80 = *(int32_t *)(lVar3 + 0x10);
  lStack_88 = *(uint64_t *)(lVar3 + 8);
  local_var_78 = *(uint64_t *)(lVar3 + 0x18);
  *(int32_t *)(lVar3 + 0x10) = 0;
  *(uint64_t *)(lVar3 + 8) = 0;
  *(uint64_t *)(lVar3 + 0x18) = 0;
  plocal_var_110 = &system_data_buffer_ptr;
  if (lStack_108 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_108 = 0;
  local_var_f8 = (uint64_t)local_var_f8._4_4_ << 0x20;
  plocal_var_110 = &system_state_ptr;
  iVar7 = *(int *)(param_1 + 0x10);
  iVar8 = iVar7 + 9;
  CoreEngineDataBufferProcessor(param_1,iVar8);
  puVar6 = (uint64_t *)((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8));
  *puVar6 = 0x6a624f656e656353;
  *(int16_t *)(puVar6 + 1) = 0x2f;
  *(int *)(param_1 + 0x10) = iVar8;
  if (*(int *)(param_2 + 0x4e8) < 1) {
    iVar7 = iVar7 + 10;
    CoreEngineDataBufferProcessor(param_1,iVar7);
    *(int16_t *)((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8)) = 0x2f;
    *(int *)(param_1 + 0x10) = iVar7;
    lVar3 = function_0baa80(stack_array_50);
    plocal_var_d0 = &system_data_buffer_ptr;
    local_var_b8 = 0;
    lStack_c8 = 0;
    local_var_c0 = 0;
    uVar1 = *(uint *)(lVar3 + 0x10);
    uVar9 = (uint64_t)uVar1;
    if (*(int64_t *)(lVar3 + 8) != 0) {
      CoreEngineDataBufferProcessor(&plocal_var_d0,uVar9);
    }
    if (uVar1 == 0) {
      if (lStack_c8 != 0) {
        *(int8_t *)(uVar9 + lStack_c8) = 0;
      }
      local_var_b8 = CONCAT44(*(int32_t *)(lVar3 + 0x1c),(int32_t)local_var_b8);
      local_var_c0 = uVar1;
      CoreEngineDataBufferProcessor(&plocal_var_d0,0xf);
      puVar5 = (int32_t *)((uint64_t)local_var_c0 + lStack_c8);
      *puVar5 = 0x72726554;
      puVar5[1] = 0x536e6961;
      puVar5[2] = 0x65646168;
      puVar5[3] = 0x2f7372;
      plocal_var_f0 = &system_data_buffer_ptr;
      local_var_d8 = 0;
      local_var_e8 = 0;
      local_var_e0 = 0;
      local_var_c0 = 0xf;
      if (lStack_c8 != 0) {
        CoreEngineDataBufferProcessor(&plocal_var_f0,0xf);
      }
// WARNING: Subroutine does not return
      memcpy(local_var_e8,lStack_c8,0xf);
    }
// WARNING: Subroutine does not return
    memcpy(lStack_c8,*(uint64_t *)(lVar3 + 8),uVar9);
  }
  CoreEngineDataBufferProcessor(param_1,iVar8 + *(int *)(param_2 + 0x4e8));
// WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),
         *(uint64_t *)(param_2 + 0x4e0),(int64_t)(*(int *)(param_2 + 0x4e8) + 1));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b8120(int64_t param_1,int param_2)
void function_3b8120(int64_t param_1,int param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int8_t stack_array_168 [32];
  void *plocal_var_148;
  int32_t *plocal_var_140;
  int32_t local_var_138;
  uint64_t local_var_130;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int8_t local_var_104;
  uint64_t local_var_103;
  int32_t local_var_f8;
  int8_t local_var_f4;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  lVar5 = (int64_t)param_2;
  uVar3 = 0x400;
  if (*(char *)(*(int64_t *)(param_1 + 0x68) + 0x2964) != '\0') {
    uVar3 = 0x1000;
  }
  if (system_data_ec7a != '\0') {
    uVar3 = 0x2000;
  }
  if (((*(int64_t *)(param_1 + 0x1a8) == 0) && (*(int64_t *)(param_1 + 0x198) == 0)) &&
     ((*(int64_t *)(param_1 + 0x138 + lVar5 * 8) == 0 ||
      ((lVar1 = *(int64_t *)(param_1 + 0x120 + lVar5 * 8), lVar1 == 0 ||
       (*(int *)(lVar1 + 0x324) != 1)))))) {
    local_var_120 = 1;
    local_var_11c = 1;
    local_var_114 = 0;
    local_var_110 = 0;
    local_var_10c = 0;
    local_var_108 = 0x3f800000;
    local_var_103 = 1;
    local_var_104 = 0;
    local_var_f4 = 0;
    local_var_118 = 1;
    plocal_var_148 = &system_data_buffer_ptr;
    local_var_130 = 0;
    plocal_var_140 = (int32_t *)0x0;
    local_var_138 = 0;
    local_var_128 = uVar3;
    local_var_124 = uVar3;
    plocal_var_140 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x14,0x13);
    *(int8_t *)plocal_var_140 = 0;
    uVar3 = CoreEngineSystemCleanup(plocal_var_140);
    local_var_130 = CONCAT44(local_var_130._4_4_,uVar3);
    *plocal_var_140 = 0x6f6c6f63;
    plocal_var_140[1] = 0x70616d72;
    plocal_var_140[2] = 0x626c615f;
    plocal_var_140[3] = 0x5f6f6465;
    plocal_var_140[4] = 0x5f7472;
    local_var_138 = 0x13;
    RenderingSystem_CameraController(&plocal_var_148,param_2);
    local_var_f8 = *(int32_t *)(*(int64_t *)(param_1 + 0x68) + 0xa4);
    plocal_var_d8 = &memory_allocator_3432_ptr;
    plocal_var_d0 = stack_array_c0;
    stack_array_c0[0] = 0;
    local_var_c8 = local_var_138;
    puVar6 = (int32_t *)&system_buffer_ptr;
    if (plocal_var_140 != (int32_t *)0x0) {
      puVar6 = plocal_var_140;
    }
    strcpy_s(stack_array_c0,0x80,puVar6);
    puVar4 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_e8,&plocal_var_d8,&local_var_128);
    uVar2 = *puVar4;
    *puVar4 = 0;
    plStack_f0 = *(int64_t **)(param_1 + 0x138 + lVar5 * 8);
    *(uint64_t *)(param_1 + 0x138 + lVar5 * 8) = uVar2;
    if (plStack_f0 != (int64_t *)0x0) {
      (**(code **)(*plStack_f0 + 0x38))();
    }
    if (plStack_e8 != (int64_t *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    plocal_var_d8 = &system_state_ptr;
    plocal_var_148 = &system_data_buffer_ptr;
    if (plocal_var_140 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_140 = (int32_t *)0x0;
    local_var_130 = local_var_130 & 0xffffffff00000000;
    plocal_var_148 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address