/* 原始函数别名定义 */
#define ResourceManager_Allocate ResourceManager_Allocate  // ResourceManager_Allocate 的语义化别名
#include "SystemDataAdvancedValidator_definition.h"
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part037.c - 7 个函数
// 函数: void DataStructure_a7bf0(int64_t param_1,int param_2,uint64_t *param_3)
void DataStructure_a7bf0(int64_t param_1,int param_2,uint64_t *param_3)
{
  int32_t uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int iVar6;
  int8_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  int local_var_38;
  int8_t stack_array_b88 [40];
  int *piStack_b60;
  int32_t local_var_b58;
  int32_t *plocal_var_b48;
  uint local_var_b40;
  int iStack_b3c;
  uint stack_array_b38 [2];
  void *plocal_var_b30;
  uint64_t local_var_b28;
  int32_t local_var_b20;
  uint64_t local_var_b18;
  int aiStack_b10 [4];
  uint64_t local_var_b00;
  int8_t stack_array_af8 [16];
  uint64_t local_var_ae8;
  int32_t local_var_ac8;
  int64_t lStack_a40;
  int64_t lStack_a38;
  int64_t lStack_a30;
  int64_t lStack_a28;
  int8_t stack_array_a18 [16];
  uint64_t local_var_a08;
  int32_t local_var_9e8;
  int64_t lStack_960;
  int64_t lStack_958;
  int64_t lStack_950;
  int64_t lStack_948;
  int8_t stack_array_938 [2304];
  uint64_t local_var_38;
  local_var_b00 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b88;
  *(int32_t *)((int64_t)param_3 + 0x62) = 0;
  puVar4 = (int32_t *)0x0;
  *(uint64_t *)((int64_t)param_3 + 0x54) = 0;
  *(int32_t *)((int64_t)param_3 + 0x5c) = 0;
  *(int16_t *)(param_3 + 0xc) = 0;
  *(int8_t *)((int64_t)param_3 + 0x66) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x14) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x1c) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x24) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x2c) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x34) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x3c) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x44) = 0;
  *(uint64_t *)((int64_t)param_3 + 0x4c) = 0;
  plocal_var_b30 = &system_data_buffer_ptr;
  local_var_b18 = 0;
  local_var_b28 = 0;
  local_var_b20 = 0;
  if (local_var_38 == 0xc) {
    local_var_ae8 = 0;
    local_var_ac8 = 0;
    lStack_a38 = param_1 + param_2;
    local_var_b58 = 0x10;
    piStack_b60 = aiStack_b10;
    lStack_a40 = param_1;
    lStack_a30 = param_1;
    lStack_a28 = lStack_a38;
    puVar3 = (int32_t *)UISystem_1e290(stack_array_af8);
    uVar12 = stack_array_b38[0];
    uVar11 = local_var_b40;
    if (puVar3 == (int32_t *)0x0) {
      plocal_var_b48 = (int32_t *)0x0;
      iVar6 = local_var_b40 * iStack_b3c * 2;
    }
    else {
      plocal_var_b48 = puVar3;
      if (aiStack_b10[0] != 0x10) {
        iVar6 = local_var_b40 * stack_array_b38[0] * iStack_b3c;
        lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(iVar6 * 2));
        if (lVar5 != 0) {
          if (0 < iVar6) {
            lVar8 = 0;
            do {
              *(ushort *)(lVar5 + lVar8 * 2) = (ushort)*(byte *)(lVar8 + (int64_t)puVar3) * 0x101;
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar6);
          }
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar3);
        }
        plocal_var_b48 = (int32_t *)0x0;
      }
      puVar4 = plocal_var_b48;
      if (system_system_data_memory != 0) {
        UISystem_1eb10(plocal_var_b48,local_var_b40,stack_array_b38[0],iStack_b3c * 2);
      }
      iVar6 = local_var_b40 * iStack_b3c * 2;
    }
  }
  else {
    local_var_a08 = 0;
    local_var_9e8 = 0;
    lStack_958 = param_1 + param_2;
    lStack_960 = param_1;
    lStack_950 = param_1;
    lStack_948 = lStack_958;
    puVar4 = (int32_t *)UISystem_1ec30(stack_array_a18,&local_var_b40,stack_array_b38,&iStack_b3c);
    iVar6 = local_var_b40 * iStack_b3c;
    uVar12 = stack_array_b38[0];
    uVar11 = local_var_b40;
    plocal_var_b48 = puVar4;
  }
  if (puVar4 != (int32_t *)0x0) {
    *(short *)((int64_t)param_3 + 0x5c) = (short)uVar11;
    *(short *)((int64_t)param_3 + 0x5e) = (short)uVar12;
    *(int32_t *)(param_3 + 0xc) = 0x10001;
    *(int16_t *)((int64_t)param_3 + 100) = 0x102;
    if (iStack_b3c == 1) {
      *(uint *)((int64_t)param_3 + 0x54) = (local_var_38 == 0xc) + 0xb;
      DataStructure_a1bc0(param_3);
      uVar2 = *param_3;
      puVar7 = stack_array_938;
      lVar5 = 0x60;
      do {
        Function_f9a79261(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      GenericFunction_1800adfe0(param_3,stack_array_938);
      puVar4 = plocal_var_b48;
      if (0 < (int)uVar12) {
// WARNING: Subroutine does not return
        memcpy(uVar2,plocal_var_b48,(int64_t)iVar6);
      }
    }
    else if (iStack_b3c == 3) {
      *(int32_t *)((int64_t)param_3 + 0x54) = 0x29;
      DataStructure_a1bc0(param_3);
      uVar2 = *param_3;
      puVar7 = stack_array_938;
      lVar5 = 0x60;
      do {
        Function_f9a79261(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      GenericFunction_1800adfe0(param_3,stack_array_938);
      puVar4 = plocal_var_b48;
      if (0 < (int)uVar12) {
// WARNING: Subroutine does not return
        memcpy(uVar2,plocal_var_b48,(int64_t)iVar6);
      }
    }
    else if (iStack_b3c == 4) {
      *(int32_t *)((int64_t)param_3 + 0x54) = 1;
      *(uint *)(param_3 + 0xb) = *(uint *)(param_3 + 0xb) | 0x8000;
      DataStructure_a1bc0(param_3);
      puVar7 = stack_array_938;
      lVar5 = 0x60;
      do {
        Function_f9a79261(puVar7);
        puVar7 = puVar7 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      GenericFunction_1800adfe0(param_3,stack_array_938);
      puVar7 = (int8_t *)*param_3;
      if (uVar11 != 0) {
        uVar10 = (uint64_t)uVar11;
        puVar3 = puVar4;
        do {
          if (uVar12 != 0) {
            uVar9 = (uint64_t)uVar12;
            do {
              uVar1 = *puVar3;
              *puVar7 = (char)((uint)uVar1 >> 0x10);
              puVar7[1] = *(int8_t *)((int64_t)puVar3 + 1);
              puVar7[2] = *(int8_t *)puVar3;
              puVar7[3] = (char)((uint)uVar1 >> 0x18);
              puVar7 = puVar7 + 4;
              puVar3 = puVar3 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
  local_var_b28 = 0;
  local_var_b18 = local_var_b18 & 0xffffffff00000000;
  plocal_var_b30 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_b88);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_a8080(int64_t param_1,int64_t *param_2,int param_3)
void DataStructure_a8080(int64_t param_1,int64_t *param_2,int param_3)
{
  int16_t uVar1;
  int16_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void *puVar7;
  int8_t stack_array_298 [32];
  int64_t lStack_278;
  int *piStack_270;
  void *plocal_var_268;
  void *plocal_var_260;
  int32_t local_var_250;
  int aiStack_248 [2];
  uint64_t local_var_240;
  int8_t stack_array_238 [512];
  uint64_t local_var_38;
  local_var_240 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  iVar3 = Function_52369ef4(*(int32_t *)((int64_t)param_2 + 0x54));
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
  if (param_3 == 1) {
    uVar5 = UtilitiesSystem_2c100(&plocal_var_268,param_1);
    ResourceManager_Allocate(uVar5,1);
    plocal_var_268 = &system_data_buffer_ptr;
    if (plocal_var_260 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_260 = (void *)0x0;
    local_var_250 = 0;
    plocal_var_268 = &system_state_ptr;
    lVar6 = *param_2;
    uVar1 = *(int16_t *)((int64_t)param_2 + 0x5e);
    uVar2 = *(int16_t *)((int64_t)param_2 + 0x5c);
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_1 + 8);
    }
    iVar4 = fopen_s(&plocal_var_268,puVar7,&processed_var_9772_ptr);
    puVar7 = plocal_var_268;
    if (iVar4 != 0) {
      puVar7 = (void *)0x0;
    }
    plocal_var_268 = &ui_system_data_1056_ptr;
    plocal_var_260 = puVar7;
    if (puVar7 == (void *)0x0) goto LAB_1802a83bc;
    lStack_278 = lVar6;
    UISystem_2da00(&plocal_var_268,uVar2,uVar1,iVar3);
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        uVar5 = UtilitiesSystem_2c100(&plocal_var_268,param_1);
        ResourceManager_Allocate(uVar5,1);
        plocal_var_268 = &system_data_buffer_ptr;
        if (plocal_var_260 != (void *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_260 = (void *)0x0;
        local_var_250 = 0;
        plocal_var_268 = &system_state_ptr;
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 8) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 8);
        }
        piStack_270 = aiStack_248;
        lStack_278 = CONCAT44(lStack_278._4_4_,iVar3);
        lVar6 = UISystem_2eee0(*param_2);
        if (lVar6 != 0) {
          iVar3 = fopen_s(&plocal_var_268,puVar7,&processed_var_9772_ptr);
          puVar7 = plocal_var_268;
          if (iVar3 != 0) {
            puVar7 = (void *)0x0;
          }
          plocal_var_268 = puVar7;
          if (puVar7 == (void *)0x0) {
            free();
          }
          else {
            fwrite(lVar6,1,(int64_t)aiStack_248[0],puVar7);
            fclose(puVar7);
            free(lVar6);
          }
        }
      }
      else if (system_data_8dac == '\0') {
// 函数: void DataStructure_a83f0(uint64_t param_1,uint64_t param_2)
void DataStructure_a83f0(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int32_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  void *puVar8;
  uint uVar9;
  uint64_t uVar10;
  int8_t stack_array_318 [32];
  int32_t local_var_2f8;
  int32_t local_var_2f4;
  int32_t local_var_2f0;
  uint64_t local_var_2e8;
  void *plocal_var_2e0;
  int64_t lStack_2d8;
  uint local_var_2d0;
  int32_t local_var_2c8;
  void *plocal_var_2c0;
  void *plocal_var_2b8;
  int32_t local_var_2a8;
  uint64_t local_var_298;
  void *aplocal_var_290 [5];
  void *aplocal_var_268 [2];
  int32_t local_var_258;
  int32_t local_var_254;
  int32_t local_var_250;
  int32_t local_var_24c;
  uint64_t local_var_248;
  uint64_t local_var_240;
  int32_t local_var_238;
  int32_t local_var_234;
  int8_t stack_array_230 [128];
  int8_t *plocal_var_1b0;
  int8_t *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int8_t *plocal_var_198;
  uint64_t local_var_48;
  local_var_298 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_318;
  uVar10 = 0;
  uVar4 = SystemCore_EncryptionEngine(aplocal_var_268,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_2c0,uVar4);
  aplocal_var_268[0] = &system_state_ptr;
  uVar4 = UtilitiesSystem_27490(aplocal_var_290,&plocal_var_2c0);
  SystemCore_EncryptionEngine0(&plocal_var_2e0,uVar4);
  aplocal_var_290[0] = &system_state_ptr;
  uVar6 = uVar10;
  uVar7 = uVar10;
  if (local_var_2d0 != 0) {
    do {
      if ((byte)(*(char *)(lStack_2d8 + uVar6) + 0xbfU) < 0x1a) {
        *(char *)(lStack_2d8 + uVar6) = *(char *)(lStack_2d8 + uVar6) + ' ';
      }
      uVar9 = (int)uVar7 + 1;
      uVar6 = uVar6 + 1;
      uVar7 = (uint64_t)uVar9;
    } while (uVar9 < local_var_2d0);
  }
  uVar6 = uVar10;
  if (local_var_2d0 == 4) {
    do {
      uVar7 = uVar6 + 1;
      if (*(char *)(lStack_2d8 + uVar6) != (&system_data_2bf0)[uVar6]) goto LAB_1802a84f9;
      uVar6 = uVar7;
    } while (uVar7 != 5);
    UISystem_1dfa0(&plocal_var_2c0,param_2);
  }
  else {
LAB_1802a84f9:
    puVar8 = &system_buffer_ptr;
    if (plocal_var_2b8 != (void *)0x0) {
      puVar8 = plocal_var_2b8;
    }
    iVar3 = fopen_s(&local_var_2e8,puVar8,&processed_var_4880_ptr);
    local_var_240 = local_var_2e8;
    if (iVar3 != 0) {
      local_var_240 = uVar10;
    }
    if (local_var_240 != 0) {
      local_var_2e8 = local_var_240;
      ftell(local_var_240);
      local_var_258 = system_system_control_memory;
      local_var_254 = uRam0000000180bf5c1c;
      local_var_250 = uRam0000000180bf5c20;
      local_var_24c = uRam0000000180bf5c24;
      local_var_248 = system_system_control_memory;
      local_var_234 = 0x80;
      local_var_238 = 1;
      plocal_var_1a0 = stack_array_230;
      iVar3 = Function_6f585197(local_var_240,stack_array_230,0x80);
      if (iVar3 == 0) {
        local_var_238 = 0;
        plocal_var_1a8 = stack_array_230 + 1;
        stack_array_230[0] = 0;
      }
      else {
        plocal_var_1a8 = stack_array_230 + iVar3;
      }
      plocal_var_1b0 = stack_array_230;
      plocal_var_198 = plocal_var_1a8;
      plVar5 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x4888,0x22);
      *plVar5 = (int64_t)aplocal_var_268;
      iVar3 = UISystem_23010(plVar5,2);
      if (iVar3 == 0) {
        lVar1 = *plVar5;
        *(uint64_t *)(lVar1 + 0xb8) = *(uint64_t *)(lVar1 + 200);
        *(uint64_t *)(lVar1 + 0xc0) = *(uint64_t *)(lVar1 + 0xd0);
      }
      else {
        puVar2 = (int32_t *)*plVar5;
        local_var_2f4 = *puVar2;
        local_var_2f0 = puVar2[1];
        local_var_2f8 = 1;
        if (2 < (int)puVar2[2]) {
          local_var_2f8 = 3;
        }
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar5);
    }
    local_var_2e8 = 0;
  }
  plocal_var_2e0 = &system_data_buffer_ptr;
  if (lStack_2d8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_2d8 = 0;
  local_var_2c8 = 0;
  plocal_var_2e0 = &system_state_ptr;
  plocal_var_2c0 = &system_data_buffer_ptr;
  if (plocal_var_2b8 == (void *)0x0) {
    plocal_var_2b8 = (void *)0x0;
    local_var_2a8 = 0;
    plocal_var_2c0 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_318);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_a8770(void)
void DataStructure_a8770(void)
{
  uint64_t uVar1;
  int8_t stack_array_98 [32];
  uint64_t *plocal_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  int8_t *plocal_var_60;
  int32_t local_var_58;
  int8_t stack_array_50 [16];
  void *plocal_var_40;
  int8_t *plocal_var_38;
  int32_t local_var_30;
  int8_t stack_array_28 [16];
  uint64_t local_var_18;
  local_var_70 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  system_system_data_memory = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *system_system_data_memory = 0;
  system_system_data_memory[1] = 0;
  system_system_data_memory[2] = 0;
  *(int32_t *)(system_system_data_memory + 3) = 3;
  plocal_var_78 = system_system_data_memory;
  system_system_data_memory = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *system_system_data_memory = 0;
  system_system_data_memory[1] = 0;
  system_system_data_memory[2] = 0;
  *(int32_t *)(system_system_data_memory + 3) = 3;
  plocal_var_68 = &system_config_ptr;
  plocal_var_60 = stack_array_50;
  stack_array_50[0] = 0;
  local_var_58 = 4;
  plocal_var_78 = system_system_data_memory;
  strcpy_s(stack_array_50,0x10,&processed_var_7056_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_68);
  }
  plocal_var_68 = &system_state_ptr;
  plocal_var_40 = &system_config_ptr;
  plocal_var_38 = stack_array_28;
  stack_array_28[0] = 0;
  local_var_30 = 4;
  strcpy_s(stack_array_28,0x10,&processed_var_7048_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_40);
  }
  plocal_var_40 = &system_state_ptr;
  plocal_var_68 = &system_config_ptr;
  plocal_var_60 = stack_array_50;
  stack_array_50[0] = 0;
  local_var_58 = 4;
  strcpy_s(stack_array_50,0x10,&system_data_2bf0);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_68);
  }
  plocal_var_68 = &system_state_ptr;
  plocal_var_40 = &system_config_ptr;
  plocal_var_38 = stack_array_28;
  stack_array_28[0] = 0;
  local_var_30 = 4;
  strcpy_s(stack_array_28,0x10,&processed_var_7040_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_40);
  }
  plocal_var_40 = &system_state_ptr;
  plocal_var_68 = &system_config_ptr;
  plocal_var_60 = stack_array_50;
  stack_array_50[0] = 0;
  local_var_58 = 4;
  strcpy_s(stack_array_50,0x10,&processed_var_7072_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_68);
  }
  plocal_var_68 = &system_state_ptr;
  plocal_var_40 = &system_config_ptr;
  plocal_var_38 = stack_array_28;
  stack_array_28[0] = 0;
  local_var_30 = 4;
  strcpy_s(stack_array_28,0x10,&system_data_3fc0);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_40);
  }
  plocal_var_40 = &system_state_ptr;
  plocal_var_68 = &system_config_ptr;
  plocal_var_60 = stack_array_50;
  stack_array_50[0] = 0;
  local_var_58 = 4;
  strcpy_s(stack_array_50,0x10,&processed_var_7140_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_68);
  }
  plocal_var_68 = &system_state_ptr;
  plocal_var_40 = &system_config_ptr;
  plocal_var_38 = stack_array_28;
  stack_array_28[0] = 0;
  local_var_30 = 4;
  strcpy_s(stack_array_28,0x10,&processed_var_7032_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_40);
  }
  plocal_var_40 = &system_state_ptr;
  plocal_var_68 = &system_config_ptr;
  plocal_var_60 = stack_array_50;
  stack_array_50[0] = 0;
  local_var_58 = 4;
  strcpy_s(stack_array_50,0x10,&memory_allocator_3148_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_68);
  }
  plocal_var_68 = &system_state_ptr;
  plocal_var_40 = &system_config_ptr;
  plocal_var_38 = stack_array_28;
  stack_array_28[0] = 0;
  local_var_30 = 6;
  strcpy_s(stack_array_28,0x10,&memory_allocator_3208_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_40);
  }
  plocal_var_40 = &system_state_ptr;
  plocal_var_68 = &system_config_ptr;
  plocal_var_60 = stack_array_50;
  stack_array_50[0] = 0;
  local_var_58 = 4;
  strcpy_s(stack_array_50,0x10,&memory_allocator_3216_ptr);
  uVar1 = system_system_data_memory[1];
  if (uVar1 < (uint64_t)system_system_data_memory[2]) {
    system_system_data_memory[1] = uVar1 + 0x28;
    GenericFunction_1801e8210(uVar1);
  }
  else {
    GenericFunction_1801e8b60(system_system_data_memory,&plocal_var_68);
  }
  plocal_var_68 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_98);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_a8cf0(int64_t param_1,uint param_2,int64_t param_3)
void DataStructure_a8cf0(int64_t param_1,uint param_2,int64_t param_3)
{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int8_t stack_array_2f8 [32];
  void *plocal_var_2d8;
  void *plocal_var_2d0;
  uint64_t local_var_2c8;
  int64_t *plStack_2b8;
  int16_t local_var_2a8;
  int32_t local_var_2a4;
  int32_t local_var_2a0;
  int32_t local_var_29c;
  int32_t local_var_298;
  int32_t local_var_294;
  int32_t local_var_290;
  int64_t alStack_288 [3];
  int32_t local_var_270;
  uint64_t local_var_268;
  int8_t stack_array_260 [56];
  int8_t stack_array_228 [512];
  uint64_t local_var_28;
  local_var_268 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2f8;
  GenericFunction_1801ec5c0(stack_array_260,&memory_allocator_3160_ptr);
  uVar4 = Function_62b399c0(*(int32_t *)(param_3 + 0x54));
  strcpy_s(param_3 + 0x14,0x40,uVar4);
  uVar1 = *(uint *)(param_3 + 0x54);
  if (uVar1 - 0xe < 9) goto LAB_1802a912b;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 6) {
LAB_1802a8dab:
    if (1 < iVar2) {
      lVar5 = *(int64_t *)(param_1 + 8);
      lVar6 = (int64_t)(iVar2 + -2);
      if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'd')) &&
         (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
      if (1 < iVar2) {
        lVar5 = *(int64_t *)(param_1 + 8);
        lVar6 = (int64_t)(iVar2 + -2);
        if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 's')) &&
           (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
        if (1 < iVar2) {
          lVar5 = *(int64_t *)(param_1 + 8);
          lVar6 = (int64_t)(iVar2 + -2);
          if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'n')) &&
             (*(char *)(lVar5 + 2 + lVar6) == '\0')) {
            cVar3 = DataStructure_a9450(param_3);
            if (cVar3 == '\0') {
              uVar4 = Function_62b399c0(*(int32_t *)(param_3 + 0x54));
              puVar7 = &memory_allocator_3344_ptr;
              goto LAB_1802a8ef5;
            }
            goto LAB_1802a8f12;
          }
          if (1 < iVar2) {
            lVar5 = *(int64_t *)(param_1 + 8);
            lVar6 = (int64_t)(iVar2 + -2);
            if (((*(char *)(lVar5 + lVar6) == '_') && (*(char *)(lVar5 + 1 + lVar6) == 'h')) &&
               (*(char *)(lVar5 + 2 + lVar6) == '\0')) goto LAB_1802a8f12;
          }
        }
      }
    }
    if ((((uVar1 < 0xb) || ((0xc < uVar1 && (1 < uVar1 - 0x2b)))) &&
        ((*(uint *)(param_3 + 0x58) & 0x4000000) != 0)) &&
       (cVar3 = DataStructure_a9bc0(param_3), cVar3 == '\0')) {
      uVar4 = Function_62b399c0(*(int32_t *)(param_3 + 0x54));
      puVar7 = &memory_allocator_3232_ptr;
LAB_1802a8ef5:
      puVar8 = &system_buffer_ptr;
      if (*(void **)(param_1 + 8) != (void *)0x0) {
        puVar8 = *(void **)(param_1 + 8);
      }
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,puVar7,puVar8,uVar4);
    }
  }
  else {
    lVar5 = 0;
    do {
      lVar6 = lVar5 + 1;
      if (*(char *)(*(int64_t *)(param_1 + 8) + (int64_t)(iVar2 + -6) + lVar5) !=
          (&memory_allocator_3200_ptr)[lVar5]) goto LAB_1802a8dab;
      lVar5 = lVar6;
    } while (lVar6 != 7);
  }
LAB_1802a8f12:
  if (((param_2 & 1) != 0) && ((*(uint *)(param_3 + 0x58) & 0x1c000001) == 0)) {
    plStack_2b8 = alStack_288;
    alStack_288[0] = 0;
    alStack_288[1] = 0;
    alStack_288[2] = 0;
    local_var_270 = 3;
    local_var_2a8 = 0;
    local_var_2a4 = 0;
    local_var_2a0 = 0;
    local_var_29c = 0;
    local_var_298 = 0;
    local_var_294 = 0;
    local_var_290 = 0;
    cVar3 = DataStructure_a9170(param_3);
    if (cVar3 == '\0') {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 8) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 8);
      }
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&memory_allocator_3384_ptr,puVar7);
    }
    plStack_2b8 = alStack_288;
    if (alStack_288[0] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  if (((param_2 & 2) != 0) && ((*(uint *)(param_3 + 0x58) & 0x10000020) == 0)) {
    local_var_2c8 = Function_62b399c0(*(int32_t *)(param_3 + 0x54));
    plocal_var_2d0 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      plocal_var_2d0 = *(void **)(param_1 + 8);
    }
    plocal_var_2d8 = &memory_allocator_3280_ptr;
    SystemConfigurationManager(system_message_context,0,0x10000000000,8);
    uVar1 = *(uint *)(param_3 + 0x54);
    if ((uVar1 < 0xe) || ((0x12 < uVar1 && (2 < uVar1 - 0x14)))) {
      if (system_data_8daa == '\0') {
// 函数: void DataStructure_a9170(int64_t param_1)
void DataStructure_a9170(int64_t param_1)
{
  int8_t stack_array_248 [32];
  int32_t local_var_228;
  int8_t stack_array_218 [512];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  if (*(char *)(param_1 + 100) == '\x02') {
    if (system_data_8dab == '\0') {
// 函数: void DataStructure_aa270(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_aa270(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t *puVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  int8_t astack_special_x_8 [8];
  uint64_t stack_special_x_18;
  stack_special_x_18 = param_3;
  uVar4 = NetworkProtocol_f8e50(0x5f8ba57,param_4,param_2,0,0x13);
  bVar6 = (uVar4 & 0xfff00000) != 0xbad00000;
  *(bool *)(param_1 + 0xd8) = bVar6;
  if (!bVar6) {
    *(int8_t *)(param_1 + 0xd9) = 0;
    return;
  }
  uVar4 = NVSDK_NGX_D3D11_GetParameters(param_1 + 0xe0);
  if (((uVar4 & 0xfff00000) == 0xbad00000) &&
     (*(int8_t *)(param_1 + 0xd9) = 0, *(char *)(param_1 + 0xd8) != '\0')) {
    DataStructure_aa4b0(param_1);
    if (*(int64_t *)(param_1 + 0xe8) != 0) {
      SystemDataInitializer(&memory_allocator_3648_ptr);
      if (*(char *)(param_1 + 0xd8) != '\0') {
        DataStructure_aa4b0(param_1);
        if (*(int64_t *)(param_1 + 0xe8) != 0) {
          NVSDK_NGX_D3D11_ReleaseFeature();
        }
        *(uint64_t *)(param_1 + 0xe8) = 0;
      }
    }
    NVSDK_NGX_D3D11_Shutdown();
    *(int8_t *)(param_1 + 0xd8) = 0;
  }
  lVar3 = SYSTEM_STATE_MANAGER;
  *(int8_t *)(param_1 + 0xd9) = 1;
  iVar1 = *(int *)(lVar3 + 0x1d50);
  iVar2 = *(int *)(lVar3 + 0x1dc0);
  stack_special_x_18 = CONCAT44(iVar2,iVar1);
  puVar5 = (uint64_t *)DataStructure_aa800(param_1,astack_special_x_8,&stack_special_x_18,0);
  *(uint64_t *)(param_1 + 0x48) = *puVar5;
  puVar5 = (uint64_t *)DataStructure_aa800(param_1,astack_special_x_8,&stack_special_x_18,1);
  *(uint64_t *)(param_1 + 0x50) = *puVar5;
  puVar5 = (uint64_t *)DataStructure_aa800(param_1,astack_special_x_8,&stack_special_x_18,2);
  *(uint64_t *)(param_1 + 0x58) = *puVar5;
  puVar5 = (uint64_t *)DataStructure_aa800(param_1,astack_special_x_8,&stack_special_x_18,3);
  dVar7 = (double)iVar1;
  *(uint64_t *)(param_1 + 0x60) = *puVar5;
  dVar8 = (double)iVar2;
  *(double *)(param_1 + 8) = dVar7 / (double)*(int *)(param_1 + 0x48);
  *(double *)(param_1 + 0x10) = dVar8 / (double)*(int *)(param_1 + 0x4c);
  *(double *)(param_1 + 0x18) = dVar7 / (double)*(int *)(param_1 + 0x50);
  *(double *)(param_1 + 0x20) = dVar8 / (double)*(int *)(param_1 + 0x54);
  *(double *)(param_1 + 0x28) = dVar7 / (double)*(int *)(param_1 + 0x58);
  *(double *)(param_1 + 0x30) = dVar8 / (double)*(int *)(param_1 + 0x5c);
  *(double *)(param_1 + 0x38) = dVar7 / (double)*(int *)(param_1 + 0x60);
  *(double *)(param_1 + 0x40) = dVar8 / (double)*(int *)(param_1 + 100);
  return;
}