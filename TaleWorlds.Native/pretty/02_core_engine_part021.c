#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part021.c - 8 个函数
// 函数: void function_062920(int *param_1)
void function_062920(int *param_1)
{
  char cVar1;
  char cVar2;
  int32_t uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  char *pcVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t uVar9;
  int8_t stack_array_1f8 [64];
  int16_t stack_array_1b8 [4];
  void *plocal_var_1b0;
  int32_t *plocal_var_1a8;
  int32_t local_var_1a0;
  uint64_t local_var_198;
  int32_t local_var_190;
  void *plocal_var_188;
  int64_t lStack_180;
  int32_t local_var_170;
  int64_t lStack_168;
  int64_t lStack_160;
  uint64_t local_var_158;
  int32_t local_var_150;
  uint64_t local_var_148;
  uint64_t local_var_38;
  local_var_148 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1f8;
  iVar8 = 0;
  local_var_190 = 0;
  *param_1 = *param_1 + 1;
  if ((*(int64_t *)(param_1 + 4) != 0) && (*(int64_t *)(param_1 + 2) != 0)) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1f8);
  }
  lStack_168 = 0;
  lStack_160 = 0;
  local_var_158 = 0;
  local_var_150 = 3;
  lVar4 = SystemCore_NetworkHandler0(&plocal_var_188,system_main_module_state + 0x2c0);
  local_var_190 = 1;
  stack_array_1b8[0] = 0x20;
  if (*(int64_t *)(lVar4 + 8) != 0) {
    CoreSystem_DataCollector(lVar4,&lStack_168,stack_array_1b8);
  }
  local_var_190 = 0;
  plocal_var_188 = &system_data_buffer_ptr;
  if (lStack_180 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_180 = 0;
  local_var_170 = 0;
  plocal_var_188 = &system_state_ptr;
  plocal_var_1b0 = &system_data_buffer_ptr;
  local_var_198 = 0;
  plocal_var_1a8 = (int32_t *)0x0;
  local_var_1a0 = 0;
  puVar5 = (int32_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_1a8 = puVar5;
  uVar3 = CoreMemoryPoolCleaner(puVar5);
  local_var_198 = CONCAT44(local_var_198._4_4_,uVar3);
  *puVar5 = 0x5f657375;
  puVar5[1] = 0x65726170;
  puVar5[2] = 0x635f746e;
  puVar5[3] = 0x6f736e6f;
  *(int16_t *)(puVar5 + 4) = 0x656c;
  *(int8_t *)((int64_t)puVar5 + 0x12) = 0;
  local_var_1a0 = 0x12;
  uVar9 = lStack_160 - lStack_168 >> 5;
  if (uVar9 != 0) {
    puVar7 = (uint64_t *)(lStack_168 + 8);
    do {
      if (*(int *)(puVar7 + 1) == 0x12) {
        pcVar6 = (char *)*puVar7;
        lVar4 = (int64_t)puVar5 - (int64_t)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar4];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) break;
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 4;
    } while ((uint64_t)(int64_t)iVar8 < uVar9);
  }
  plocal_var_1b0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_062ee0(uint64_t param_1,int32_t param_2)
{
  int16_t uVar1;
  int iVar2;
  switch(param_2) {
  case 0:
    uVar1 = 4;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 0xc;
    break;
  case 4:
    uVar1 = 10;
    break;
  case 5:
    uVar1 = 9;
    break;
  case 6:
    uVar1 = 3;
    break;
  case 7:
    uVar1 = 0xb;
    break;
  case 8:
    uVar1 = 6;
    break;
  case 9:
    uVar1 = 0xe;
    break;
  case 10:
    uVar1 = 5;
    break;
  case 0xb:
    uVar1 = 0xd;
    break;
  case 0xc:
    uVar1 = 7;
    break;
  default:
    uVar1 = 0xf;
  }
  iVar2 = SetConsoleTextAttribute(core_system_data_buffer,uVar1);
  if (iVar2 == 0) {
    function_05d3a0(&processed_var_9952_ptr);
    return 0;
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_062fd0(int64_t param_1)
void function_062fd0(int64_t param_1)
{
  uint uVar1;
  uint uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  void *puVar9;
  void *puVar10;
  uint astack_special_x_8 [4];
  int8_t astack_special_x_18 [8];
  uint astack_special_x_20 [2];
  void *plocal_var_70;
  uint64_t *plocal_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 < 9) {
    switch(uVar1) {
    case 1:
      astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x38) != (void *)0x0) {
        puVar9 = *(void **)(param_1 + 0x38);
      }
      function_6391a0(*(int64_t *)(param_1 + 0x20) + 0x20,puVar9,astack_special_x_8);
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x108))(plVar7,1);
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x70))(plVar7,&processed_var_9984_ptr);
      plocal_var_70 = &system_data_buffer_ptr;
      local_var_58 = 0;
      plocal_var_68 = (uint64_t *)0x0;
      local_var_60 = 0;
      puVar5 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar5 = 0;
      plocal_var_68 = puVar5;
      uVar3 = CoreMemoryPoolCleaner(puVar5);
      local_var_58 = CONCAT44(local_var_58._4_4_,uVar3);
      *puVar5 = 0x73726f7272655f;
      local_var_60 = 7;
      iVar8 = *(int *)(param_1 + 0x40) + -1;
      if (-1 < iVar8) {
        lVar6 = (int64_t)iVar8;
        do {
          if (*(char *)(lVar6 + *(int64_t *)(param_1 + 0x38)) == '_') goto code_r0x0001800630e9;
          iVar8 = iVar8 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      iVar8 = -1;
code_r0x0001800630e9:
      function_6288c0(param_1 + 0x30,iVar8,&plocal_var_70);
      plocal_var_70 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar5);
    case 2:
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&memory_allocator_32_ptr);
      function_639250(*(int64_t *)(param_1 + 0x20) + 0xd8);
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x70))(plVar7,&memory_allocator_32_ptr);
      function_639250(*(int64_t *)(param_1 + 0x20) + 0x20);
      if (((*(byte *)(*(int64_t *)(param_1 + 0x20) + 8) & 2) != 0) &&
         (iRam0000000180c912e0 = iRam0000000180c912e0 + -1, iRam0000000180c912e0 == 0)) {
        core_system_data_buffer = 0;
        lRam0000000180c912e8 = 0;
        LOCK();
        core_system_config_memory = 0;
        UNLOCK();
        FreeConsole();
      }
      *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 8) = 0xe;
      *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x10) = 0xffffffff00000000;
      *(int8_t *)(*(int64_t *)(param_1 + 0x20) + 0x18) = 0;
      **(uint64_t **)(param_1 + 0x20) = 0;
      break;
    case 3:
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&memory_allocator_32_ptr);
      function_639250(*(int64_t *)(param_1 + 0x20) + 0xd8);
      function_62da70(*(int64_t *)(param_1 + 0x20) + 0xe0);
      break;
    case 4:
      astack_special_x_18[0] = 0;
      puVar9 = *(void **)(*(int64_t *)(param_1 + 0x20) + 0xe8);
      puVar10 = &system_buffer_ptr;
      if (puVar9 != (void *)0x0) {
        puVar10 = puVar9;
      }
      function_6391a0(*(int64_t *)(param_1 + 0x20) + 0xd8,puVar10,astack_special_x_18);
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x108))(plVar7,1);
      plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7,&processed_var_9984_ptr);
      break;
    case 5:
      iVar8 = *(int *)(param_1 + 0x58);
      if ((*(int *)(core_system_data_memory + 0x150) <= iVar8) &&
         (puVar5 = *(uint64_t **)(param_1 + 0x20),
         (*(uint64_t *)(param_1 + 0x60) & puVar5[2]) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x40);
        puVar9 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x38) != (void *)0x0) {
          puVar9 = *(void **)(param_1 + 0x38);
        }
        if ((*(byte *)(puVar5 + 1) & 2) != 0) {
          function_062ee0((uint64_t)*(uint *)(&system_buffer_3480 + (int64_t)(int)uVar1 * 4) +
                        0x180000000,*(int32_t *)(param_1 + 0x50));
          iVar4 = WriteConsoleA(core_system_data_buffer,puVar9,uVar2,astack_special_x_20,0);
          if ((iVar4 == 0) || (astack_special_x_20[0] < uVar2)) {
            function_05d3a0(&processed_var_92_ptr,puVar9);
          }
          iVar4 = SetConsoleTextAttribute(core_system_data_buffer,0xf);
          if (iVar4 == 0) {
            function_05d3a0(&processed_var_9952_ptr);
          }
        }
        if ((*(byte *)(puVar5 + 1) & 8) != 0) {
          (**(code **)(puVar5[4] + 0x70))(puVar5 + 4,puVar9);
          if (1 < iVar8) {
            (**(code **)(puVar5[0x1b] + 0x70))(puVar5 + 0x1b,puVar9);
          }
        }
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(puVar9);
        }
      }
      break;
    case 6:
      if ((*(byte *)(*(int64_t *)(param_1 + 0x20) + 8) & 8) != 0) {
        (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x20) + 0x118))();
        (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xd8) + 0x118))();
      }
      break;
    case 7:
      *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x10) = *(uint64_t *)(param_1 + 0x60);
      break;
    case 8:
      if ((core_system_data_buffer != 0) && (lRam0000000180c912e8 != 0)) {
        astack_special_x_8[0] = *(uint *)(param_1 + 0x68);
        SetConsoleScreenBufferSize(core_system_data_buffer,astack_special_x_8[0]);
      }
    }
  }
  else {
    SystemOptimizationProcessor(&processed_var_56_ptr);
  }
  return;
}
int function_0634b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  uint64_t *puVar2;
  uint64_t stack_special_x_20;
  stack_special_x_20 = param_4;
  puVar2 = (uint64_t *)Function_6d5908f9();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,&stack_special_x_20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}
uint64_t function_063510(int64_t *param_1,int64_t param_2)
{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t in_RAX;
  byte *pbVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  lVar4 = *param_1;
  iVar9 = 0;
  uVar7 = param_1[1] - lVar4 >> 5;
  if (uVar7 != 0) {
    uVar2 = *(uint *)(param_2 + 0x10);
    lVar10 = 0;
    do {
      uVar3 = *(uint *)(lVar10 + 0x10 + lVar4);
      pbVar5 = (byte *)(uint64_t)uVar3;
      uVar6 = uVar2;
      if (uVar3 == uVar2) {
        if (uVar3 != 0) {
          pbVar5 = *(byte **)(lVar10 + 8 + lVar4);
          lVar8 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar8;
            uVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (uVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18006357e:
        if (uVar6 == 0) {
          return CONCAT71((int7)((uint64_t)pbVar5 >> 8),1);
        }
      }
      else if (uVar3 == 0) goto LAB_18006357e;
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 0x20;
      in_RAX = (uint64_t)iVar9;
    } while (in_RAX < uVar7);
  }
  return in_RAX & 0xffffffffffffff00;
}
// 函数: void function_0635c0(void)
void function_0635c0(void)
{
  function_0635e0();
  return;
}
int function_0635e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  uint64_t *puVar2;
  puVar2 = (uint64_t *)Function_6d5908f9();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}
uint64_t *
function_063650(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  param_1[6] = &system_data_buffer_ptr;
  if (param_1[7] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[7] = 0;
  *(int32_t *)(param_1 + 9) = 0;
  param_1[6] = &system_state_ptr;
  *param_1 = &ui_system_data_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t *
function_0636f0(uint64_t *param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &ui_system_data_1000_ptr;
  LOCK();
  *(int8_t *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &ui_system_data_128_ptr;
  plVar1 = param_1 + 6;
  *plVar1 = (int64_t)&system_state_ptr;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  param_1[9] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 5) = param_2;
  param_1[4] = param_3;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr,param_3,param_4,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 10) = 0xd;
  *(uint64_t *)((int64_t)param_1 + 0x54) = 0xe;
  param_1[0xc] = 0xffffffff00000000;
  *(int32_t *)(param_1 + 0xd) = 0;
  return param_1;
}
int64_t function_0637c0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(code **)(param_1 + 0x18) = function_066dd0;
  return param_1;
}
int64_t function_0637f0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(code **)(param_1 + 0x18) = _guard_check_icall;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_063820(uint64_t param_1)
void function_063820(uint64_t param_1)
{
  int8_t stack_array_2e8 [96];
  int8_t stack_array_288 [64];
  uint64_t local_var_248;
  uint64_t local_var_240;
  int8_t stack_array_238 [512];
  uint64_t local_var_38;
  local_var_248 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2e8;
  local_var_240 = param_1;
  SystemCore_NetworkHandler0(stack_array_288,system_message_context + 0x28);
// WARNING: Subroutine does not return
  memset(stack_array_238,0,0x200);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_063b30(uint64_t param_1,int64_t param_2)
void function_063b30(uint64_t param_1,int64_t param_2)
{
  char *pcVar1;
  void *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t local_var_48;
  int64_t lStack_40;
  void *plocal_var_30;
  void *plocal_var_28;
  int32_t local_var_18;
  local_var_48 = 0;
  lStack_40 = 0;
  UtilitiesSystem_CacheManager(param_1,&plocal_var_30,&processed_var_560_ptr);
  puVar2 = &system_buffer_ptr;
  if (plocal_var_28 != (void *)0x0) {
    puVar2 = plocal_var_28;
  }
  SystemCore_Validator(&local_var_48,puVar2,&processed_var_572_ptr);
  lVar6 = lStack_40;
  lVar5 = -1;
  lVar3 = lVar5;
  lVar4 = lVar5;
  if (param_2 != 0) {
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    if (lVar3 != 0) {
      fwrite(param_2,lVar3,1,lStack_40);
    }
  }
  do {
    lVar3 = lVar4 + 1;
    pcVar1 = (char *)(lVar4 + 0x180c84871);
    lVar4 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 != 0) {
    fwrite(&system_buffer_e810,0x30,1,lVar6);
    fwrite(&system_buffer_4870,lVar3,1,lVar6);
// 函数: void function_063cf0(void)
void function_063cf0(void)
{
  void *puVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  void *puVar9;
  uint uVar10;
  uint64_t *puVar12;
  uint64_t uVar13;
  int iVar14;
  int64_t lVar15;
  uint uVar16;
  int8_t stack_array_2f8 [32];
  uint64_t *plocal_var_2d8;
  uint64_t *plocal_var_2d0;
  uint64_t local_var_2c8;
  int32_t local_var_2c0;
  uint64_t *plocal_var_2b0;
  uint64_t *plocal_var_2a8;
  uint64_t local_var_2a0;
  int32_t local_var_298;
  void *plocal_var_290;
  int64_t lStack_288;
  int32_t local_var_278;
  uint64_t local_var_270;
  int8_t stack_array_268 [32];
  int64_t lStack_248;
  int8_t stack_array_238 [512];
  uint64_t local_var_38;
  uint64_t uVar11;
  local_var_270 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2f8;
  uVar11 = 0;
  function_0ba980(&plocal_var_290);
  plocal_var_2d8 = (uint64_t *)0x0;
  plocal_var_2d0 = (uint64_t *)0x0;
  local_var_2c8 = 0;
  local_var_2c0 = 3;
  plocal_var_2b0 = (uint64_t *)0x0;
  plocal_var_2a8 = (uint64_t *)0x0;
  local_var_2a0 = 0;
  local_var_298 = 3;
  function_62d3b0(&plocal_var_290,&plocal_var_2d8,&plocal_var_2b0);
  iVar14 = -1;
  lVar15 = -0x8000000000000000;
  uVar16 = (uint)((int64_t)plocal_var_2d0 - (int64_t)plocal_var_2d8 >> 5);
  uVar13 = uVar11;
  puVar3 = plocal_var_2d0;
  puVar12 = plocal_var_2b0;
  puVar4 = plocal_var_2a8;
  if (uVar16 != 0) {
    do {
      iVar6 = *(int *)((int64_t)plocal_var_2d8 + uVar13 + 0x10);
      if (iVar6 < 4) {
LAB_180063de9:
        bVar2 = false;
      }
      else {
        lVar7 = 0;
        do {
          lVar8 = lVar7 + 1;
          if (*(char *)(*(int64_t *)((int64_t)plocal_var_2d8 + uVar13 + 8) + (int64_t)(iVar6 + -4) +
                       lVar7) != (&processed_var_652_ptr)[lVar7]) goto LAB_180063de9;
          lVar7 = lVar8;
        } while (lVar8 != 5);
        bVar2 = true;
      }
      if (bVar2) {
        puVar1 = *(void **)((int64_t)plocal_var_2d8 + uVar13 + 8);
        puVar9 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar9 = puVar1;
        }
        iVar6 = _stat64i32(puVar9,stack_array_268);
        if ((iVar6 != -1) && (lVar15 < lStack_248)) {
          lVar15 = lStack_248;
          iVar14 = (int)uVar11;
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
      uVar13 = uVar13 + 0x20;
    } while (uVar10 < uVar16);
    puVar3 = plocal_var_2d0;
    puVar12 = plocal_var_2b0;
    puVar4 = plocal_var_2a8;
    if (-1 < iVar14) {
// WARNING: Subroutine does not return
      memset(stack_array_238,0,0x200);
    }
  }
  for (; puVar5 = plocal_var_2a8, plocal_var_2d0 = puVar3, puVar12 != plocal_var_2a8; puVar12 = puVar12 + 4)
  {
    plocal_var_2a8 = puVar4;
    (**(code **)*puVar12)(puVar12,0);
    puVar3 = plocal_var_2d0;
    puVar4 = plocal_var_2a8;
    plocal_var_2a8 = puVar5;
  }
  if (plocal_var_2b0 == (uint64_t *)0x0) {
    plocal_var_2b0 = (uint64_t *)0x0;
    plocal_var_2a8 = puVar4;
    for (puVar12 = plocal_var_2d8; puVar12 != puVar3; puVar12 = puVar12 + 4) {
      (**(code **)*puVar12)(puVar12,0);
    }
    if (plocal_var_2d8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    plocal_var_290 = &system_data_buffer_ptr;
    if (lStack_288 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_288 = 0;
    local_var_278 = 0;
    plocal_var_290 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2f8);
  }
  plocal_var_2a8 = puVar4;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_064010(uint64_t param_1)
void function_064010(uint64_t param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  void *puVar3;
  uint64_t *puVar4;
  int8_t stack_array_358 [64];
  uint64_t *plocal_var_318;
  uint64_t *plocal_var_310;
  uint64_t local_var_308;
  int32_t local_var_300;
  uint64_t local_var_2f8;
  int64_t lStack_2f0;
  uint64_t local_var_2e0;
  int64_t lStack_2d8;
  uint64_t *plocal_var_2c0;
  uint64_t *plocal_var_2b8;
  uint64_t local_var_2b0;
  int32_t local_var_2a8;
  void *plocal_var_2a0;
  int64_t lStack_298;
  int32_t local_var_288;
  void *plocal_var_280;
  void *plocal_var_278;
  int32_t local_var_268;
  void *plocal_var_260;
  void *plocal_var_258;
  int32_t local_var_248;
  uint64_t local_var_240;
  int8_t stack_array_238 [512];
  uint64_t local_var_38;
  local_var_240 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_358;
  function_0ba940(&plocal_var_2a0);
  plocal_var_318 = (uint64_t *)0x0;
  plocal_var_310 = (uint64_t *)0x0;
  local_var_308 = 0;
  local_var_300 = 3;
  plocal_var_2c0 = (uint64_t *)0x0;
  plocal_var_2b8 = (uint64_t *)0x0;
  local_var_2b0 = 0;
  local_var_2a8 = 3;
  function_62d3b0(&plocal_var_2a0,&plocal_var_318,&plocal_var_2c0);
  puVar2 = plocal_var_2b8;
  puVar1 = plocal_var_310;
  puVar4 = plocal_var_2c0;
  if ((int)((int64_t)plocal_var_310 - (int64_t)plocal_var_318 >> 5) != 0) {
// WARNING: Subroutine does not return
    memset(stack_array_238,0,0x200);
  }
  for (; plocal_var_310 = puVar1, puVar4 != puVar2; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4,0);
    puVar1 = plocal_var_310;
  }
  if (plocal_var_2c0 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_2c0 = (uint64_t *)0x0;
  for (puVar4 = plocal_var_318; puVar4 != puVar1; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4,0);
  }
  if (plocal_var_318 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_2a0 = &system_data_buffer_ptr;
  if (lStack_298 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_298 = 0;
  local_var_288 = 0;
  plocal_var_2a0 = &system_state_ptr;
  local_var_2f8 = 0;
  lStack_2f0 = 0;
  UtilitiesSystem_CacheManager(param_1,&plocal_var_280,&processed_var_664_ptr);
  puVar3 = &system_buffer_ptr;
  if (plocal_var_278 != (void *)0x0) {
    puVar3 = plocal_var_278;
  }
  SystemCore_Validator(&local_var_2f8,puVar3,&processed_var_572_ptr);
  function_0ae730(SYSTEM_STATE_MANAGER,&local_var_2f8);
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  plocal_var_280 = &system_data_buffer_ptr;
  if (plocal_var_278 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_278 = (void *)0x0;
  local_var_268 = 0;
  plocal_var_280 = &system_state_ptr;
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  local_var_2e0 = 0;
  lStack_2d8 = 0;
  UtilitiesSystem_CacheManager(param_1,&plocal_var_260,&processed_var_688_ptr);
  puVar3 = &system_buffer_ptr;
  if (plocal_var_258 != (void *)0x0) {
    puVar3 = plocal_var_258;
  }
  SystemCore_Validator(&local_var_2e0,puVar3,&processed_var_572_ptr);
  function_0ae730(core_system_data_memory,&local_var_2e0);
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  plocal_var_260 = &system_data_buffer_ptr;
  if (plocal_var_258 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_258 = (void *)0x0;
  local_var_248 = 0;
  plocal_var_260 = &system_state_ptr;
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_358);
}
// 函数: void function_064400(void)
void function_064400(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_0649d0(uint64_t param_1)
{
  char cVar1;
  uint64_t uVar2;
  void *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  void *plocal_var_b8;
  int64_t lStack_b0;
  int iStack_a8;
  uint64_t local_var_a0;
  uint64_t *plocal_var_98;
  uint64_t *plocal_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  int64_t lStack_70;
  void *plocal_var_58;
  void *plocal_var_50;
  int32_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  plocal_var_98 = (uint64_t *)0x0;
  plocal_var_90 = (uint64_t *)0x0;
  local_var_88 = 0;
  local_var_80 = 3;
  cVar1 = function_064400(&plocal_var_98);
  puVar7 = plocal_var_90;
  puVar6 = plocal_var_98;
  if ((cVar1 == '\0') || (plocal_var_98 == plocal_var_90)) {
    SystemManager_DataHandler(system_message_context,5,3,&processed_var_736_ptr);
    uVar2 = function_0623e0();
    puVar4 = puVar6;
  }
  else {
    local_var_78 = 0;
    lStack_70 = 0;
    UtilitiesSystem_CacheManager(param_1,&plocal_var_58,&processed_var_712_ptr);
    puVar3 = &system_buffer_ptr;
    if (plocal_var_50 != (void *)0x0) {
      puVar3 = plocal_var_50;
    }
    SystemCore_Validator(&local_var_78,puVar3,&processed_var_572_ptr);
    uVar2 = (int64_t)puVar7 - (int64_t)puVar6 >> 5;
    plocal_var_b8 = &system_data_buffer_ptr;
    local_var_a0 = 0;
    lStack_b0 = 0;
    iStack_a8 = 0;
    if ((int)uVar2 != 0) {
      puVar4 = puVar6 + 1;
      uVar2 = uVar2 & 0xffffffff;
      do {
        puVar3 = &system_buffer_ptr;
        if ((void *)*puVar4 != (void *)0x0) {
          puVar3 = (void *)*puVar4;
        }
        System_DataHandler(&plocal_var_b8,&processed_var_92_ptr,puVar3);
        puVar4 = puVar4 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar5 = lStack_70;
    uVar2 = fwrite(lStack_b0,1,(int64_t)iStack_a8,lStack_70);
    if (lVar5 != 0) {
      fclose(lVar5);
      lStack_70 = 0;
      LOCK();
      uVar2 = (uint64_t)SYSTEM_FILE_COUNTER_ADDR;
      UNLOCK();
      lVar5 = 0;
      puVar6 = plocal_var_98;
      puVar7 = plocal_var_90;
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR - 1;
    }
    plocal_var_b8 = &system_data_buffer_ptr;
    if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_b0 = 0;
    local_var_a0 = local_var_a0 & 0xffffffff00000000;
    plocal_var_b8 = &system_state_ptr;
    plocal_var_58 = &system_data_buffer_ptr;
    if (plocal_var_50 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    plocal_var_50 = (void *)0x0;
    local_var_40 = 0;
    plocal_var_58 = &system_state_ptr;
    puVar4 = puVar6;
    if (lVar5 != 0) {
      uVar2 = fclose(lVar5);
      lStack_70 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR - 1;
      UNLOCK();
      puVar6 = plocal_var_98;
      puVar7 = plocal_var_90;
      puVar4 = plocal_var_98;
    }
  }
  for (; puVar6 != puVar7; puVar6 = puVar6 + 4) {
    uVar2 = (**(code **)*puVar6)(puVar6,0);
  }
  if (puVar4 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar4);
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address