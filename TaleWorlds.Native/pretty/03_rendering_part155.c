/* SystemCore_Initializer - SystemCore_Initializer */
#define SystemCore_Initializer SystemCore_Initializer
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part155.c - 5 个函数
// 函数: void function_363e30(int64_t param_1)
void function_363e30(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  SystemFunction_000180365340();
  if (*(char *)(param_1 + 0x178) == '\0') {
    return;
  }
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
  plVar2 = (int64_t *)0x0;
  plVar4 = *(int64_t **)(lVar1 + 0x540);
  uVar8 = *(int64_t *)(lVar1 + 0x548) - (int64_t)plVar4 >> 3;
  plVar3 = plVar4;
  plVar7 = plVar2;
  if (uVar8 != 0) {
    do {
      if (*plVar3 == param_1) {
        if ((int)plVar7 != -1) {
          return;
        }
        break;
      }
      uVar6 = (int)plVar7 + 1;
      plVar3 = plVar3 + 1;
      plVar7 = (int64_t *)(uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 < uVar8);
  }
  plVar3 = *(int64_t **)(lVar1 + 0x548);
  if (plVar3 < *(int64_t **)(lVar1 + 0x550)) {
    *(int64_t **)(lVar1 + 0x548) = plVar3 + 1;
    *plVar3 = param_1;
    return;
  }
  if (uVar8 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = uVar8 * 2;
    if (lVar5 == 0) goto LAB_1803660ff;
  }
  plVar2 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,*(int8_t *)(lVar1 + 0x558));
  plVar4 = *(int64_t **)(lVar1 + 0x540);
  plVar3 = *(int64_t **)(lVar1 + 0x548);
LAB_1803660ff:
  if (plVar4 != plVar3) {
// WARNING: Subroutine does not return
    memmove(plVar2,plVar4,(int64_t)plVar3 - (int64_t)plVar4);
  }
  *plVar2 = param_1;
  if (*(int64_t *)(lVar1 + 0x540) == 0) {
    *(int64_t **)(lVar1 + 0x540) = plVar2;
    *(int64_t **)(lVar1 + 0x550) = plVar2 + lVar5;
    *(int64_t **)(lVar1 + 0x548) = plVar2 + 1;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_363e70(int64_t param_1)
void function_363e70(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  SystemFunction_000180365340();
  function_362e30(param_1);
  if (*(char *)(param_1 + 0x178) == '\0') {
    return;
  }
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
  plVar2 = (int64_t *)0x0;
  plVar4 = *(int64_t **)(lVar1 + 0x540);
  uVar8 = *(int64_t *)(lVar1 + 0x548) - (int64_t)plVar4 >> 3;
  plVar3 = plVar4;
  plVar7 = plVar2;
  if (uVar8 != 0) {
    do {
      if (*plVar3 == param_1) {
        if ((int)plVar7 != -1) {
          return;
        }
        break;
      }
      uVar6 = (int)plVar7 + 1;
      plVar3 = plVar3 + 1;
      plVar7 = (int64_t *)(uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 < uVar8);
  }
  plVar3 = *(int64_t **)(lVar1 + 0x548);
  if (plVar3 < *(int64_t **)(lVar1 + 0x550)) {
    *(int64_t **)(lVar1 + 0x548) = plVar3 + 1;
    *plVar3 = param_1;
    return;
  }
  if (uVar8 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = uVar8 * 2;
    if (lVar5 == 0) goto LAB_1803660ff;
  }
  plVar2 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,*(int8_t *)(lVar1 + 0x558));
  plVar4 = *(int64_t **)(lVar1 + 0x540);
  plVar3 = *(int64_t **)(lVar1 + 0x548);
LAB_1803660ff:
  if (plVar4 != plVar3) {
// WARNING: Subroutine does not return
    memmove(plVar2,plVar4,(int64_t)plVar3 - (int64_t)plVar4);
  }
  *plVar2 = param_1;
  if (*(int64_t *)(lVar1 + 0x540) == 0) {
    *(int64_t **)(lVar1 + 0x540) = plVar2;
    *(int64_t **)(lVar1 + 0x550) = plVar2 + lVar5;
    *(int64_t **)(lVar1 + 0x548) = plVar2 + 1;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Removing unreachable block (ram,0x00018036403a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_363eb0(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  void *puVar3;
  uint uVar4;
  uint uVar5;
  int32_t uVar6;
  void *puVar7;
  void *plocal_var_50;
  int32_t *plocal_var_48;
  uint local_var_40;
  uint64_t local_var_38;
  if (param_2 != 0) goto LAB_1803640e8;
  lVar2 = *(int64_t *)(param_1 + 0x18);
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  plocal_var_48 = (int32_t *)0x0;
  local_var_40 = 0;
  plocal_var_48 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x22,0x13);
  *(int8_t *)plocal_var_48 = 0;
  uVar4 = CoreEngineSystemCleanup(plocal_var_48);
  local_var_38 = CONCAT44(local_var_38._4_4_,uVar4);
  *plocal_var_48 = 0x69626d41;
  plocal_var_48[1] = 0x20746e65;
  plocal_var_48[2] = 0x6e756f73;
  plocal_var_48[3] = 0x6d652064;
  plocal_var_48[4] = 0x65747469;
  plocal_var_48[5] = 0x69772072;
  plocal_var_48[6] = 0x6e206874;
  plocal_var_48[7] = 0x20656d61;
  *(int16_t *)(plocal_var_48 + 8) = 0x22;
  local_var_40 = 0x21;
  iVar1 = *(int *)(param_1 + 0xa0);
  if (0 < iVar1) {
    if (iVar1 != -0x21) {
      uVar5 = iVar1 + 0x22;
      if (plocal_var_48 == (int32_t *)0x0) {
        if ((int)uVar5 < 0x10) {
          uVar5 = 0x10;
        }
        plocal_var_48 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar5,0x13);
        *(int8_t *)plocal_var_48 = 0;
      }
      else {
        if (uVar5 <= uVar4) goto LAB_180363fdd;
        plocal_var_48 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_48,uVar5,0x10,0x13);
      }
      uVar6 = CoreEngineSystemCleanup(plocal_var_48);
      local_var_38 = CONCAT44(local_var_38._4_4_,uVar6);
    }
LAB_180363fdd:
// WARNING: Subroutine does not return
    memcpy((int8_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48),
           *(uint64_t *)(param_1 + 0x98),(int64_t)(*(int *)(param_1 + 0xa0) + 1));
  }
  if (plocal_var_48 == (int32_t *)0x0) {
    plocal_var_48 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x24,0x13);
    *(int8_t *)plocal_var_48 = 0;
LAB_18036405b:
    uVar6 = CoreEngineSystemCleanup(plocal_var_48);
    local_var_38 = CONCAT44(local_var_38._4_4_,uVar6);
  }
  else if (uVar4 < 0x24) {
    plocal_var_48 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_48,0x24,0x10,0x13);
    goto LAB_18036405b;
  }
  *(int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) = 0x2022;
  *(int8_t *)((int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) + 1) = 0;
  local_var_40 = 0x23;
  if (lVar2 != 0) {
    puVar3 = *(void **)(lVar2 + 0x290);
    puVar7 = &system_buffer_ptr;
    if (puVar3 != (void *)0x0) {
      puVar7 = puVar3;
    }
    System_DataHandler(&plocal_var_50,&processed_var_8280_ptr,puVar7);
  }
  System_DataHandler(&plocal_var_50,&processed_var_8240_ptr,&system_data_ff70);
  plocal_var_50 = &system_data_buffer_ptr;
  if (plocal_var_48 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
LAB_1803640e8:
  return param_2 != 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_364110(int64_t *param_1,int64_t param_2)
void function_364110(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t unaff_RBX;
  int64_t lVar8;
  int iVar9;
  uint uVar10;
  uint64_t uVar11;
  iVar9 = *(int *)(param_2 + 0x10);
  if ((iVar9 != 0xc) || (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_0198), iVar3 != 0)) {
    if ((iVar9 == 10) && (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_ff70), iVar3 == 0))
    {
      if ((char)param_1[0x2f] != '\0') {
        *(int8_t *)((int64_t)param_1 + 0x1a4) = 0;
        return;
      }
    }
    else {
      if ((((iVar9 != 0x16) ||
           (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_8408_ptr), iVar3 != 0)) &&
          ((iVar9 != 0x17 ||
           (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_8384_ptr), iVar3 != 0)))) &&
         ((iVar9 != 0x13 ||
          (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_8360_ptr), iVar3 != 0)))) {
        if (iVar9 != 0xd) {
          return;
        }
        iVar9 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_0238);
        if (iVar9 != 0) {
          return;
        }
        SystemFunction_000180365340(param_1);
      }
      if (((int64_t *)param_1[0x24] != (int64_t *)0x0) &&
         (cVar2 = (**(code **)(*(int64_t *)param_1[0x24] + 0x80))(), cVar2 != '\0')) {
        if ((void *)*param_1 == &processed_var_8440_ptr) {
          function_3638c0();
        }
        else {
          (**(code **)((void *)*param_1 + 0x178))(param_1);
        }
        (**(code **)(*param_1 + 0x170))(param_1);
      }
    }
    return;
  }
  lVar1 = *(int64_t *)(param_1[3] + 0x20);
  if ((char)param_1[0x2f] == '\0') {
    puVar7 = *(uint64_t **)(lVar1 + 0x548);
    puVar5 = *(uint64_t **)(lVar1 + 0x540);
    iVar9 = 0;
    uVar11 = (int64_t)puVar7 - (int64_t)puVar5 >> 3;
    puVar6 = puVar5;
    if (uVar11 != 0) {
      while ((int64_t *)*puVar6 != param_1) {
        iVar9 = iVar9 + 1;
        puVar6 = puVar6 + 1;
        if (uVar11 <= (uint64_t)(int64_t)iVar9) {
          return;
        }
      }
      if (iVar9 != -1) {
        puVar6 = puVar5 + iVar9 + 1;
        if (puVar6 < puVar7) {
// WARNING: Subroutine does not return
          memmove(puVar5 + iVar9,puVar6,(int64_t)puVar7 - (int64_t)puVar6,uVar11,unaff_RBX);
        }
        *(uint64_t **)(lVar1 + 0x548) = puVar7 + -1;
      }
    }
    return;
  }
  puVar4 = (uint64_t *)0x0;
  puVar7 = *(uint64_t **)(lVar1 + 0x540);
  uVar11 = *(int64_t *)(lVar1 + 0x548) - (int64_t)puVar7 >> 3;
  puVar5 = puVar7;
  puVar6 = puVar4;
  if (uVar11 != 0) {
    do {
      if ((int64_t *)*puVar5 == param_1) {
        if ((int)puVar6 != -1) {
          return;
        }
        break;
      }
      uVar10 = (int)puVar6 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = (uint64_t *)(uint64_t)uVar10;
    } while ((uint64_t)(int64_t)(int)uVar10 < uVar11);
  }
  puVar5 = *(uint64_t **)(lVar1 + 0x548);
  if (puVar5 < *(uint64_t **)(lVar1 + 0x550)) {
    *(uint64_t **)(lVar1 + 0x548) = puVar5 + 1;
    *puVar5 = param_1;
    return;
  }
  if (uVar11 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = uVar11 * 2;
    if (lVar8 == 0) goto LAB_1803660ff;
  }
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,*(int8_t *)(lVar1 + 0x558));
  puVar7 = *(uint64_t **)(lVar1 + 0x540);
  puVar5 = *(uint64_t **)(lVar1 + 0x548);
LAB_1803660ff:
  if (puVar7 != puVar5) {
// WARNING: Subroutine does not return
    memmove(puVar4,puVar7,(int64_t)puVar5 - (int64_t)puVar7);
  }
  *puVar4 = param_1;
  if (*(int64_t *)(lVar1 + 0x540) == 0) {
    *(uint64_t **)(lVar1 + 0x540) = puVar4;
    *(uint64_t **)(lVar1 + 0x550) = puVar4 + lVar8;
    *(uint64_t **)(lVar1 + 0x548) = puVar4 + 1;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_364280(int64_t param_1,int64_t param_2,int64_t *param_3)
void function_364280(int64_t param_1,int64_t param_2,int64_t *param_3)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  int32_t uVar5;
  int iVar6;
  int32_t *puVar7;
  int8_t *puVar8;
  int64_t *plVar9;
  void *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  int8_t stack_array_178 [32];
  void *plocal_var_158;
  int32_t *plocal_var_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  int64_t *plStack_138;
  int64_t *plStack_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  uint64_t *plocal_var_118;
  uint64_t *plocal_var_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  uint64_t local_var_f8;
  uint64_t *plocal_var_f0;
  void *plocal_var_e8;
  void *plocal_var_e0;
  int iStack_d8;
  uint8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  iVar6 = *(int *)(param_2 + 0x10);
  if ((iVar6 == 0xd) && (iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_0238), iVar4 == 0)) {
    plocal_var_158 = &system_data_buffer_ptr;
    local_var_140 = 0;
    plocal_var_150 = (int32_t *)0x0;
    local_var_148 = 0;
    puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar7 = 0;
    plocal_var_150 = puVar7;
    uVar5 = CoreEngineSystemCleanup(puVar7);
    *puVar7 = 0x65687053;
    *(int16_t *)(puVar7 + 1) = 0x6572;
    *(int8_t *)((int64_t)puVar7 + 6) = 0;
    local_var_148 = 6;
    local_var_140._0_4_ = uVar5;
    DataEncryptionHandler0(param_3,&plocal_var_158);
    plocal_var_158 = &system_data_buffer_ptr;
    if (plocal_var_150 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_150 = (int32_t *)0x0;
    local_var_140 = (uint64_t)local_var_140._4_4_ << 0x20;
    plocal_var_158 = &system_state_ptr;
    plStack_138 = (int64_t *)&system_data_buffer_ptr;
    local_var_120 = 0;
    plStack_130 = (int64_t *)0x0;
    local_var_128 = 0;
    puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar7 = 0;
    plStack_130 = (int64_t *)puVar7;
    uVar5 = CoreEngineSystemCleanup(puVar7);
    *puVar7 = 0x786f42;
    local_var_128 = 3;
    local_var_120._0_4_ = uVar5;
    DataEncryptionHandler0(param_3,&plStack_138);
    plStack_138 = (int64_t *)&system_data_buffer_ptr;
    if (plStack_130 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plStack_130 = (int64_t *)0x0;
    local_var_120 = (uint64_t)local_var_120._4_4_ << 0x20;
    plStack_138 = (int64_t *)&system_state_ptr;
  }
  else if ((iVar6 == 10) &&
          (iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_ff70), iVar4 == 0)) {
    (**(code **)(*render_system_data_memory + 0x1e8))(render_system_data_memory,&plStack_138);
    plStack_100 = plStack_130;
    plVar2 = plStack_138;
    plVar3 = plStack_130;
    if (plStack_138 != plStack_130) {
      plVar9 = plStack_138 + 1;
      do {
        uVar5 = 0;
        plocal_var_e8 = &memory_allocator_3432_ptr;
        plocal_var_e0 = stack_array_d0;
        stack_array_d0[0] = 0;
        iStack_d8 = (int)plVar9[1];
        puVar10 = &system_buffer_ptr;
        if ((void *)*plVar9 != (void *)0x0) {
          puVar10 = (void *)*plVar9;
        }
        plStack_108 = plVar9;
        strcpy_s(stack_array_d0,0x80,puVar10);
        plocal_var_158 = &system_data_buffer_ptr;
        plocal_var_118 = (uint64_t *)0x0;
        plocal_var_150 = (int32_t *)0x0;
        local_var_148 = 0;
        local_var_140 = 0;
        puVar8 = (int8_t *)0x0;
        if (iStack_d8 != 0) {
          iVar6 = iStack_d8 + 1;
          if (iVar6 < 0x10) {
            iVar6 = 0x10;
          }
          puVar8 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar6,0x13);
          *puVar8 = 0;
          plocal_var_150 = (int32_t *)puVar8;
          plocal_var_118 = (uint64_t *)CoreEngineSystemCleanup(puVar8);
          uVar5 = SUB84(plocal_var_118,0);
          local_var_140 = CONCAT44(local_var_140._4_4_,uVar5);
          if (0 < iStack_d8) {
            puVar10 = &system_buffer_ptr;
            if (plocal_var_e0 != (void *)0x0) {
              puVar10 = plocal_var_e0;
            }
// WARNING: Subroutine does not return
            memcpy(puVar8,puVar10,(int64_t)(iStack_d8 + 1));
          }
        }
        if ((plocal_var_e0 != (void *)0x0) && (local_var_148 = 0, puVar8 != (int8_t *)0x0)) {
          *puVar8 = 0;
        }
        puVar11 = (uint64_t *)param_3[1];
        if (puVar11 < (uint64_t *)param_3[2]) {
          param_3[1] = (int64_t)(puVar11 + 4);
          *puVar11 = &system_state_ptr;
          puVar11[1] = 0;
          *(int32_t *)(puVar11 + 2) = 0;
          *puVar11 = &system_data_buffer_ptr;
          *(int32_t *)(puVar11 + 2) = 0;
          puVar11[1] = puVar8;
          *(int32_t *)((int64_t)puVar11 + 0x1c) = 0;
          *(int32_t *)(puVar11 + 3) = uVar5;
          local_var_148 = 0;
          local_var_140 = 0;
          plocal_var_110 = puVar11;
        }
        else {
          lVar14 = *param_3;
          lVar13 = (int64_t)puVar11 - lVar14 >> 5;
          if (lVar13 == 0) {
            lVar13 = 1;
LAB_18036460e:
            plocal_var_110 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar13 << 5,(char)param_3[3]);
            puVar11 = (uint64_t *)param_3[1];
            lVar14 = *param_3;
          }
          else {
            lVar13 = lVar13 * 2;
            if (lVar13 != 0) goto LAB_18036460e;
            plocal_var_110 = (uint64_t *)0x0;
          }
          plocal_var_f0 = (uint64_t *)SystemCore_Initializer(lVar14,puVar11,plocal_var_110);
          *plocal_var_f0 = &system_state_ptr;
          plocal_var_f0[1] = 0;
          *(int32_t *)(plocal_var_f0 + 2) = 0;
          *plocal_var_f0 = &system_data_buffer_ptr;
          *(int32_t *)(plocal_var_f0 + 2) = 0;
          plocal_var_f0[1] = puVar8;
          *(int32_t *)((int64_t)plocal_var_f0 + 0x1c) = 0;
          *(int *)(plocal_var_f0 + 3) = (int)plocal_var_118;
          local_var_148 = 0;
          plocal_var_150 = (int32_t *)0x0;
          local_var_140 = 0;
          plocal_var_118 = plocal_var_f0 + 4;
          puVar11 = (uint64_t *)param_3[1];
          puVar12 = (uint64_t *)*param_3;
          if (puVar12 != puVar11) {
            do {
              (**(code **)*puVar12)(puVar12,0);
              puVar12 = puVar12 + 4;
            } while (puVar12 != puVar11);
            puVar12 = (uint64_t *)*param_3;
          }
          if (puVar12 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar12);
          }
          *param_3 = (int64_t)plocal_var_110;
          param_3[1] = (int64_t)plocal_var_118;
          param_3[2] = (int64_t)(plocal_var_110 + lVar13 * 4);
        }
        plocal_var_150 = (int32_t *)0x0;
        local_var_140 = local_var_140 & 0xffffffff00000000;
        plocal_var_158 = &system_state_ptr;
        plocal_var_e8 = &system_state_ptr;
        plVar9 = plStack_108 + 0x13;
        plVar1 = plStack_108 + 0x12;
        plVar2 = plStack_138;
        plVar3 = plStack_130;
        plStack_108 = plVar9;
      } while (plVar1 != plStack_100);
    }
    for (; plVar9 = plStack_130, plVar2 != plStack_130; plVar2 = plVar2 + 0x13) {
      plStack_130 = plVar3;
      (**(code **)*plVar2)(plVar2,0);
      plVar3 = plStack_130;
      plStack_130 = plVar9;
    }
    plStack_130 = plVar3;
    if (plStack_138 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else if ((iVar6 == 0xc) &&
          (iVar6 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_ffe8), iVar6 == 0)) {
    puVar11 = (uint64_t *)(param_1 + 0x100);
    lVar14 = 4;
    do {
      CoreMemoryPoolValidator(&plStack_138,*puVar11);
      if ((uint64_t)param_3[1] < (uint64_t)param_3[2]) {
        param_3[1] = param_3[1] + 0x20;
        CoreEngineDataTransformer();
      }
      else {
        SystemCore_BackupSystem(param_3,&plStack_138);
      }
      plStack_138 = (int64_t *)&system_data_buffer_ptr;
      if (plStack_130 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plStack_130 = (int64_t *)0x0;
      local_var_120 = local_var_120 & 0xffffffff00000000;
      plStack_138 = (int64_t *)&system_state_ptr;
      puVar11 = puVar11 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_364810(int64_t *param_1)
void function_364810(int64_t *param_1)
{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_30;
  if ((char)param_1[0x2f] == '\0') {
    if (*(char *)(render_system_data_memory + 0x210) != '\0') {
      return;
    }
    plVar2 = (int64_t *)param_1[0x24];
    if (plVar2 == (int64_t *)0x0) {
      local_var_30 = 0x180364854;
      (**(code **)(*param_1 + 0x168))(param_1);
      plVar2 = (int64_t *)param_1[0x24];
      if (plVar2 == (int64_t *)0x0) {
        return;
      }
    }
// WARNING: Could not recover jumptable at 0x000180364868. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x60))();
    return;
  }
  if (((int64_t *)param_1[0x24] == (int64_t *)0x0) ||
     (cVar1 = (**(code **)(*(int64_t *)param_1[0x24] + 0xd8))(), cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x168))(param_1);
  }
  plVar2 = (int64_t *)param_1[0x24];
  if (plVar2 == (int64_t *)0x0) {
    return;
  }
  cVar1 = '\0';
  lVar3 = param_1[3];
  fStack_d8 = (float)*(uint64_t *)(render_system_data_memory + 0x1b8);
  fStack_d4 = (float)((uint64_t)*(uint64_t *)(render_system_data_memory + 0x1b8) >> 0x20);
  fStack_d0 = (float)*(uint64_t *)(render_system_data_memory + 0x1c0);
  if ((int)param_1[0x34] == 0) {
    fStack_d4 = *(float *)(lVar3 + 0xa4) - fStack_d4;
    fVar5 = SQRT(*(float *)(lVar3 + 0x30) * *(float *)(lVar3 + 0x30) +
                 *(float *)(lVar3 + 0x34) * *(float *)(lVar3 + 0x34) +
                 *(float *)(lVar3 + 0x38) * *(float *)(lVar3 + 0x38));
    fStack_d8 = *(float *)(lVar3 + 0xa0) - fStack_d8;
    fVar4 = SQRT(*(float *)(lVar3 + 0x40) * *(float *)(lVar3 + 0x40) +
                 *(float *)(lVar3 + 0x44) * *(float *)(lVar3 + 0x44) +
                 *(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x48));
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar4 = SQRT(*(float *)(lVar3 + 0x50) * *(float *)(lVar3 + 0x50) +
                 *(float *)(lVar3 + 0x54) * *(float *)(lVar3 + 0x54) +
                 *(float *)(lVar3 + 0x58) * *(float *)(lVar3 + 0x58));
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    fStack_d0 = *(float *)(lVar3 + 0xa8) - fStack_d0;
    cVar1 = fVar5 * fVar5 < fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0;
    if (!(bool)cVar1) goto LAB_1803652ed;
  }
  else {
    if ((int)param_1[0x34] != 1) {
      return;
    }
    local_var_88 = *(uint64_t *)(lVar3 + 0x70);
    local_var_78 = *(uint64_t *)(lVar3 + 0x80);
    local_var_68 = *(int32_t *)(lVar3 + 0x90);
    local_var_64 = *(int32_t *)(lVar3 + 0x94);
    local_var_60 = *(int32_t *)(lVar3 + 0x98);
    local_var_80 = *(uint64_t *)(lVar3 + 0x78) & 0xffffffff;
    local_var_58 = *(int32_t *)(lVar3 + 0xa0);
    local_var_54 = *(int32_t *)(lVar3 + 0xa4);
    local_var_50 = *(int32_t *)(lVar3 + 0xa8);
    local_var_70 = *(uint64_t *)(lVar3 + 0x88) & 0xffffffff;
    local_var_5c = 0;
    local_var_4c = 0x3f800000;
    SystemCore_PerformanceMonitor(&local_var_88,&fStack_c8);
    fStack_98 = fStack_c8 * fStack_d8 + fStack_b8 * fStack_d4 + fStack_a8 * fStack_d0 + fStack_98;
    fStack_94 = fStack_c4 * fStack_d8 + fStack_b4 * fStack_d4 + fStack_a4 * fStack_d0 + fStack_94;
    fStack_90 = fStack_c0 * fStack_d8 + fStack_b0 * fStack_d4 + fStack_a0 * fStack_d0 + fStack_90;
    if ((((fStack_98 < -1.0) || (1.0 < fStack_98)) || (fStack_94 < -1.0)) ||
       (((1.0 < fStack_94 || (fStack_90 < -1.0)) || (1.0 < fStack_90)))) goto LAB_180365176;
LAB_1803652ed:
    if (*(char *)((int64_t)param_1 + 0x1a4) == '\0') {
      plVar2[0xb] = *(int64_t *)(lVar3 + 0x20);
      (**(code **)(*(int64_t *)param_1[0x24] + 0xa8))((int64_t *)param_1[0x24],lVar3 + 0xa0);
      (**(code **)(*(int64_t *)param_1[0x24] + 0x60))();
      *(int8_t *)((int64_t)param_1 + 0x1a4) = 1;
      return;
    }
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_180365176:
  if (*(char *)((int64_t)param_1 + 0x1a4) != '\0') {
    (**(code **)(*plVar2 + 0x68))(plVar2);
    *(int8_t *)((int64_t)param_1 + 0x1a4) = 0;
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180364afe)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address