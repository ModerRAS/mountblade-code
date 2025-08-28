/* 原始函数别名定义 */
#define DataValidator_CheckIntegrity DataValidator_CheckIntegrity  // DataValidator_CheckIntegrity 的语义化别名
#define ResourceManager_Allocate ResourceManager_Allocate  // ResourceManager_Allocate 的语义化别名
#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* SystemCore_EventHandler - RenderingSystem_DataBlockCopier */
#define RenderingSystem_DataBlockCopier SystemCore_EventHandler
/* NetworkSystem_ProtocolParser - RenderingSystem_StringParser */
#define RenderingSystem_StringParser NetworkSystem_ProtocolParser
// 03_rendering_part638.c - 17 个函数
// 函数: void UtilitiesSystem_240a0(uint64_t *param_1)
void UtilitiesSystem_240a0(uint64_t *param_1)
{
  int iVar1;
  int16_t *puVar2;
  int8_t stack_array_3f8 [32];
  int8_t *plocal_var_3d8;
  int32_t local_var_3d0;
  uint64_t local_var_3c8;
  uint64_t local_var_3c0;
  int32_t local_var_3b8;
  void *plocal_var_3b0;
  uint64_t local_var_3a8;
  int32_t local_var_3a0;
  uint64_t local_var_398;
  uint64_t local_var_390;
  uint64_t *plocal_var_388;
  int8_t stack_array_378 [288];
  int8_t stack_array_258 [560];
  uint64_t local_var_28;
  local_var_390 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_3f8;
  local_var_3b8 = 0;
  plocal_var_388 = param_1;
  iVar1 = GetModuleFileNameW(0,stack_array_258,0x118);
  if (iVar1 == 0) {
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &rendering_buffer_2008_ptr;
    param_1[1] = param_1 + 3;
    *(int8_t *)(param_1 + 3) = 0;
    *(int32_t *)(param_1 + 2) = 0;
    strcpy_s(param_1[1],0x100,&system_buffer_ptr);
    local_var_3b8 = 1;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_3f8);
  }
  puVar2 = (int16_t *)wcsrchr(stack_array_258,0x5c);
  if (puVar2 == (int16_t *)0x0) {
    puVar2 = (int16_t *)wcsrchr(stack_array_258,0x5c);
    if (puVar2 == (int16_t *)0x0) goto LAB_180624138;
  }
  *puVar2 = 0;
LAB_180624138:
  plocal_var_3b0 = &system_data_buffer_ptr;
  local_var_398 = 0;
  local_var_3a8 = 0;
  local_var_3a0 = 0;
  local_var_3c0 = 0;
  local_var_3c8 = 0;
  local_var_3d0 = 0x118;
  plocal_var_3d8 = stack_array_378;
  iVar1 = WideCharToMultiByte(0xfde9,0,stack_array_258,0xffffffff);
  CoreEngineDataBufferProcessor(&plocal_var_3b0,iVar1);
// WARNING: Subroutine does not return
  memcpy(local_var_3a8,stack_array_378,(int64_t)iVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_242f0(uint64_t *param_1)
void UtilitiesSystem_242f0(uint64_t *param_1)
{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int8_t stack_array_298 [32];
  int8_t *plocal_var_278;
  int32_t local_var_268;
  uint64_t local_var_260;
  uint64_t *plocal_var_258;
  int8_t stack_array_248 [560];
  uint64_t local_var_18;
  local_var_260 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  local_var_268 = 0;
  plocal_var_278 = stack_array_248;
  plocal_var_258 = param_1;
  SHGetFolderPathW(0,0x23,0,0);
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  local_var_268 = 1;
  UtilitiesSystem_28e80(param_1,stack_array_248);
  iVar1 = *(int *)(param_1 + 2);
  CoreEngineDataBufferProcessor(param_1,iVar1 + 1);
  *(int16_t *)((uint64_t)*(uint *)(param_1 + 2) + param_1[1]) = 0x2f;
  *(int *)(param_1 + 2) = iVar1 + 1;
  CoreEngineDataBufferProcessor(param_1,iVar1 + 0x1e);
  puVar4 = (int32_t *)((uint64_t)*(uint *)(param_1 + 2) + param_1[1]);
  *puVar4 = 0x6e756f4d;
  puVar4[1] = 0x6e612074;
  puVar4[2] = 0x6c422064;
  puVar4[3] = 0x20656461;
  *(uint64_t *)(puVar4 + 4) = 0x656e6e6142204949;
  puVar4[6] = 0x726f6c72;
  *(int16_t *)(puVar4 + 7) = 100;
  *(int *)(param_1 + 2) = iVar1 + 0x1e;
  CoreEngineDataBufferProcessor(param_1,iVar1 + 0x1f);
  uVar2 = *(uint *)(param_1 + 2);
  lVar3 = param_1[1];
  *(int16_t *)((uint64_t)uVar2 + lVar3) = 0x2f;
  *(int *)(param_1 + 2) = iVar1 + 0x1f;
  ResourceManager_Allocate(param_1,CONCAT71((int7)((uint64_t)uVar2 + lVar3 >> 8),1));
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_298);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_EncryptionEngine(uint64_t param_1)
void SystemCore_EncryptionEngine(uint64_t param_1)
{
  int8_t stack_array_2f8 [32];
  int32_t local_var_2d8;
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  void *plocal_var_2b8;
  int8_t *plocal_var_2b0;
  int32_t local_var_2a8;
  int8_t stack_array_2a0 [312];
  int8_t stack_array_168 [288];
  uint64_t local_var_48;
  local_var_2d0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2f8;
  local_var_2d8 = 0;
  plocal_var_2b8 = &system_config_ptr;
  plocal_var_2b0 = stack_array_2a0;
  stack_array_2a0[0] = 0;
  local_var_2a8 = 6;
  local_var_2c8 = param_1;
  strcpy_s(stack_array_2a0,0x10,&rendering_buffer_2588_ptr);
  local_var_2d8 = 0;
  plocal_var_2b8 = &system_state_ptr;
// WARNING: Subroutine does not return
  memset(stack_array_168,0,0x118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_24730(int64_t param_1)
void UtilitiesSystem_24730(int64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  int8_t stack_array_d08 [32];
  void **pplocal_var_ce8;
  int32_t local_var_ce0;
  uint64_t local_var_cd8;
  uint64_t local_var_cd0;
  void *plocal_var_cc8;
  uint64_t local_var_cc0;
  int32_t local_var_cb8;
  uint64_t local_var_cb0;
  int32_t local_var_ca8;
  uint64_t local_var_ca0;
  int64_t lStack_c98;
  void *aplocal_var_c88 [68];
  int8_t stack_array_a68 [560];
  int8_t stack_array_838 [2048];
  uint64_t local_var_38;
  local_var_ca0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d08;
  local_var_ca8 = 0;
  lStack_c98 = param_1;
  uVar2 = SystemCore_EncryptionEngine(aplocal_var_c88);
  GenericFunction_180068ff0(param_1,uVar2);
  local_var_ca8 = 1;
  aplocal_var_c88[0] = &system_state_ptr;
  local_var_ce0 = 0x118;
  pplocal_var_ce8 = (void **)stack_array_a68;
  MultiByteToWideChar(0xfde9,0,*(uint64_t *)(param_1 + 8),0xffffffff);
  GetFullPathNameW(stack_array_a68,0x400,stack_array_838,0);
  plocal_var_cc8 = &system_data_buffer_ptr;
  local_var_cb0 = 0;
  local_var_cc0 = 0;
  local_var_cb8 = 0;
  local_var_cd0 = 0;
  local_var_cd8 = 0;
  local_var_ce0 = 0x118;
  pplocal_var_ce8 = aplocal_var_c88;
  iVar1 = WideCharToMultiByte(0xfde9,0,stack_array_838,0xffffffff);
  CoreEngineDataBufferProcessor(&plocal_var_cc8,iVar1);
// WARNING: Subroutine does not return
  memcpy(local_var_cc0,aplocal_var_c88,(int64_t)iVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemManager_Processor(uint64_t param_1)
void SystemManager_Processor(uint64_t param_1)
{
  uint64_t uVar1;
  int8_t stack_array_4c8 [32];
  int8_t *plocal_var_4a8;
  int32_t local_var_4a0;
  void *plocal_var_498;
  int64_t lStack_490;
  int32_t local_var_480;
  uint64_t local_var_478;
  void *aplocal_var_468 [68];
  int8_t stack_array_248 [560];
  uint64_t local_var_18;
  local_var_478 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4c8;
  uVar1 = SystemCore_EncryptionEngine(aplocal_var_468,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_498,uVar1);
  aplocal_var_468[0] = &system_state_ptr;
  local_var_4a0 = 0x118;
  plocal_var_4a8 = stack_array_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  CreateDirectoryW(stack_array_248,0);
  plocal_var_498 = &system_data_buffer_ptr;
  if (lStack_490 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_490 = 0;
  local_var_480 = 0;
  plocal_var_498 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_4c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UltraHighFreq_LogManager1(uint64_t param_1)
void UltraHighFreq_LogManager1(uint64_t param_1)
{
  uint64_t uVar1;
  int8_t stack_array_4c8 [32];
  int8_t *plocal_var_4a8;
  int32_t local_var_4a0;
  void *plocal_var_498;
  int64_t lStack_490;
  int32_t local_var_480;
  uint64_t local_var_478;
  void *aplocal_var_468 [68];
  int8_t stack_array_248 [560];
  uint64_t local_var_18;
  local_var_478 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4c8;
  uVar1 = SystemCore_EncryptionEngine(aplocal_var_468,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_498,uVar1);
  aplocal_var_468[0] = &system_state_ptr;
  local_var_4a0 = 0x118;
  plocal_var_4a8 = stack_array_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  GetFileAttributesW(stack_array_248);
  plocal_var_498 = &system_data_buffer_ptr;
  if (lStack_490 == 0) {
    lStack_490 = 0;
    local_var_480 = 0;
    plocal_var_498 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_4c8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_RenderQueue(uint64_t param_1)
void RenderingSystem_RenderQueue(uint64_t param_1)
{
  uint64_t uVar1;
  int8_t stack_array_4c8 [32];
  int8_t *plocal_var_4a8;
  int32_t local_var_4a0;
  void *plocal_var_498;
  int64_t lStack_490;
  int32_t local_var_480;
  uint64_t local_var_478;
  void *aplocal_var_468 [68];
  int8_t stack_array_248 [560];
  uint64_t local_var_18;
  local_var_478 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4c8;
  uVar1 = SystemCore_EncryptionEngine(aplocal_var_468,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_498,uVar1);
  aplocal_var_468[0] = &system_state_ptr;
  local_var_4a0 = 0x118;
  plocal_var_4a8 = stack_array_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  GetFileAttributesW(stack_array_248);
  plocal_var_498 = &system_data_buffer_ptr;
  if (lStack_490 == 0) {
    lStack_490 = 0;
    local_var_480 = 0;
    plocal_var_498 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_4c8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_24be0(int64_t *param_1)
void UtilitiesSystem_24be0(int64_t *param_1)
{
  code *pcVar1;
  int iVar2;
  int8_t stack_array_48 [32];
  uint stack_array_28 [2];
  int8_t stack_array_20 [16];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_48;
  stack_array_28[0] = 0x10;
  iVar2 = GetComputerNameA(stack_array_20,stack_array_28);
  if (iVar2 == 0) {
    UtilitiesSystem_27160(&rendering_buffer_2736_ptr);
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_48);
  }
  if ((uint64_t)stack_array_28[0] < 0x10) {
    stack_array_20[stack_array_28[0]] = 0;
    (**(code **)(*param_1 + 0x10))(param_1,stack_array_20);
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_48);
  }
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_24c70(uint64_t param_1,int64_t param_2)
void UtilitiesSystem_24c70(uint64_t param_1,int64_t param_2)
{
  bool bVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char *pcVar6;
  uint uVar7;
  void *puVar8;
  uint *puVar9;
  int8_t stack_array_258 [32];
  int32_t local_var_238;
  uint64_t local_var_230;
  uint64_t local_var_228;
  void *plocal_var_218;
  int8_t *plocal_var_210;
  uint local_var_208;
  int8_t stack_array_200 [72];
  void *plocal_var_1b8;
  uint *plocal_var_1b0;
  uint local_var_1a8;
  uint stack_array_1a0 [6];
  void *plocal_var_188;
  void *plocal_var_180;
  uint local_var_178;
  uint8_t stack_array_170 [136];
  void *plocal_var_e8;
  void *plocal_var_e0;
  int32_t local_var_d8;
  uint8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_230 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_258;
  uVar7 = 0;
  local_var_238 = 0;
  local_var_228 = param_1;
  if (*(int *)(param_2 + 0x10) == 0) {
    CoreEngineDataTransformer();
  }
  else {
    plocal_var_1b8 = &system_config_ptr;
    plocal_var_1b0 = stack_array_1a0;
    stack_array_1a0[0] = stack_array_1a0[0] & 0xffffff00;
    local_var_1a8 = 6;
    strcpy_s(stack_array_1a0,0x10,&rendering_buffer_2588_ptr);
    if (*(uint *)(param_2 + 0x10) < local_var_1a8) {
LAB_180624d38:
      bVar1 = false;
    }
    else {
      if (local_var_1a8 != 0) {
        pcVar6 = *(char **)(param_2 + 8);
        lVar3 = (int64_t)plocal_var_1b0 - (int64_t)pcVar6;
        do {
          if (*pcVar6 != pcVar6[lVar3]) goto LAB_180624d38;
          uVar7 = uVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (uVar7 < local_var_1a8);
      }
      bVar1 = true;
    }
    local_var_238 = 0;
    plocal_var_1b8 = &system_state_ptr;
    if (bVar1) {
      CoreEngineDataTransformer(param_1,param_2);
    }
    else {
      plocal_var_218 = &memory_allocator_3480_ptr;
      plocal_var_210 = stack_array_200;
      stack_array_200[0] = 0;
      local_var_208 = 6;
      strcpy_s(stack_array_200,0x40,&rendering_buffer_2768_ptr);
      iVar2 = DataValidator_CheckIntegrity(param_2,&plocal_var_218);
      if (iVar2 < 0) {
        (**(code **)(plocal_var_218 + 0x10))(&plocal_var_218,&rendering_buffer_2696_ptr);
        iVar2 = DataValidator_CheckIntegrity(param_2,&plocal_var_218);
        if (iVar2 < 0) {
          plocal_var_188 = &memory_allocator_3480_ptr;
          plocal_var_180 = stack_array_170;
          stack_array_170[0] = 0;
          local_var_178 = 8;
          strcpy_s(stack_array_170,0x40,&rendering_buffer_2680_ptr);
          local_var_208 = local_var_178;
          puVar8 = &system_buffer_ptr;
          if (plocal_var_180 != (void *)0x0) {
            puVar8 = plocal_var_180;
          }
          strcpy_s(plocal_var_210,0x40,puVar8);
          plocal_var_188 = &system_state_ptr;
          iVar2 = DataValidator_CheckIntegrity(param_2,&plocal_var_218);
          if (iVar2 < 0) {
            CoreEngineDataTransformer(param_1,param_2);
          }
          else {
            lVar3 = RenderingSystem_StringParser(param_2,&plocal_var_1b8,local_var_208 + iVar2,
                                  *(int32_t *)(param_2 + 0x10));
            plocal_var_e8 = &memory_allocator_3432_ptr;
            plocal_var_e0 = stack_array_d0;
            stack_array_d0[0] = 0;
            local_var_d8 = *(int32_t *)(lVar3 + 0x10);
            puVar8 = &system_buffer_ptr;
            if (*(void **)(lVar3 + 8) != (void *)0x0) {
              puVar8 = *(void **)(lVar3 + 8);
            }
            strcpy_s(stack_array_d0,0x80,puVar8);
            plocal_var_1b8 = &system_data_buffer_ptr;
            if (plocal_var_1b0 != (uint *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            plocal_var_1b0 = (uint *)0x0;
            stack_array_1a0[0] = 0;
            plocal_var_1b8 = &system_state_ptr;
            uVar4 = UtilitiesSystem_24030(&plocal_var_1b8);
            RenderingSystem_DataBlockCopier(&plocal_var_188,uVar4);
            plocal_var_1b8 = &system_state_ptr;
            puVar8 = &system_buffer_ptr;
            if (plocal_var_e0 != (void *)0x0) {
              puVar8 = plocal_var_e0;
            }
            lVar3 = -1;
            do {
              lVar5 = lVar3;
              lVar3 = lVar5 + 1;
            } while (puVar8[lVar3] != '\0');
            if ((0 < (int)lVar3) && (local_var_178 + (int)lVar3 < 0x7f)) {
// WARNING: Subroutine does not return
              memcpy(plocal_var_180 + local_var_178,puVar8,(int64_t)((int)lVar5 + 2));
            }
            SystemCore_EncryptionEngine0(param_1,&plocal_var_188);
            plocal_var_188 = &system_state_ptr;
            plocal_var_e8 = &system_state_ptr;
          }
        }
        else {
          lVar3 = RenderingSystem_StringParser(param_2,&plocal_var_1b8,local_var_208 + iVar2,
                                *(int32_t *)(param_2 + 0x10));
          plocal_var_e8 = &memory_allocator_3432_ptr;
          plocal_var_e0 = stack_array_d0;
          stack_array_d0[0] = 0;
          local_var_d8 = *(int32_t *)(lVar3 + 0x10);
          puVar8 = &system_buffer_ptr;
          if (*(void **)(lVar3 + 8) != (void *)0x0) {
            puVar8 = *(void **)(lVar3 + 8);
          }
          strcpy_s(stack_array_d0,0x80,puVar8);
          plocal_var_1b8 = &system_data_buffer_ptr;
          if (plocal_var_1b0 != (uint *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          plocal_var_1b0 = (uint *)0x0;
          stack_array_1a0[0] = 0;
          plocal_var_1b8 = &system_state_ptr;
          uVar4 = UtilitiesSystem_24030(&plocal_var_1b8);
          RenderingSystem_DataBlockCopier(&plocal_var_188,uVar4);
          plocal_var_1b8 = &system_state_ptr;
          puVar8 = &system_buffer_ptr;
          if (plocal_var_e0 != (void *)0x0) {
            puVar8 = plocal_var_e0;
          }
          lVar3 = -1;
          do {
            lVar5 = lVar3;
            lVar3 = lVar5 + 1;
          } while (puVar8[lVar3] != '\0');
          if ((0 < (int)lVar3) && (local_var_178 + (int)lVar3 < 0x7f)) {
// WARNING: Subroutine does not return
            memcpy(plocal_var_180 + local_var_178,puVar8,(int64_t)((int)lVar5 + 2));
          }
          SystemCore_EncryptionEngine0(param_1,&plocal_var_188);
          plocal_var_188 = &system_state_ptr;
          plocal_var_e8 = &system_state_ptr;
        }
      }
      else {
        lVar3 = RenderingSystem_StringParser(param_2,&plocal_var_1b8,local_var_208 + iVar2,
                              *(int32_t *)(param_2 + 0x10));
        plocal_var_e8 = &memory_allocator_3432_ptr;
        plocal_var_e0 = stack_array_d0;
        stack_array_d0[0] = 0;
        local_var_d8 = *(int32_t *)(lVar3 + 0x10);
        puVar8 = &system_buffer_ptr;
        if (*(void **)(lVar3 + 8) != (void *)0x0) {
          puVar8 = *(void **)(lVar3 + 8);
        }
        strcpy_s(stack_array_d0,0x80,puVar8);
        plocal_var_1b8 = &system_data_buffer_ptr;
        if (plocal_var_1b0 != (uint *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_1b8 = &system_config_ptr;
        plocal_var_1b0 = stack_array_1a0;
        stack_array_1a0[0] = 0;
        local_var_1a8 = 6;
        strcpy_s(stack_array_1a0,0x10,&rendering_buffer_2588_ptr);
        local_var_238 = 4;
        plocal_var_188 = &memory_allocator_3432_ptr;
        plocal_var_180 = stack_array_170;
        stack_array_170[0] = 0;
        local_var_178 = local_var_1a8;
        puVar9 = (uint *)&system_buffer_ptr;
        if (plocal_var_1b0 != (uint *)0x0) {
          puVar9 = plocal_var_1b0;
        }
        strcpy_s(stack_array_170,0x80,puVar9);
        local_var_238 = 0;
        plocal_var_1b8 = &system_state_ptr;
        puVar8 = &system_buffer_ptr;
        if (plocal_var_e0 != (void *)0x0) {
          puVar8 = plocal_var_e0;
        }
        lVar3 = -1;
        do {
          lVar5 = lVar3;
          lVar3 = lVar5 + 1;
        } while (puVar8[lVar3] != '\0');
        if ((0 < (int)lVar3) && (local_var_178 + (int)lVar3 < 0x7f)) {
// WARNING: Subroutine does not return
          memcpy(plocal_var_180 + local_var_178,puVar8,(int64_t)((int)lVar5 + 2));
        }
        SystemCore_EncryptionEngine0(param_1,&plocal_var_188);
        plocal_var_188 = &system_state_ptr;
        plocal_var_e8 = &system_state_ptr;
      }
      plocal_var_218 = &system_state_ptr;
    }
  }
  local_var_238 = 1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_258);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_252c0(int32_t *param_1)
void UtilitiesSystem_252c0(int32_t *param_1)
{
  int8_t stack_array_cf8 [224];
  int8_t stack_array_c18 [3072];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_cf8;
  *param_1 = 0xffffffff;
// WARNING: Subroutine does not return
  memset(stack_array_c18,0,0x400);
}
// 函数: void UtilitiesSystem_25330(uint64_t param_1,int64_t param_2)
void UtilitiesSystem_25330(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t unaff_RBX;
  int iVar2;
  iVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = RenderingEngine_BufferManager(&local_buffer_000004e0 + iVar2,&rendering_buffer_2728_ptr,param_2);
      param_2 = *(int64_t *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      iVar2 = iVar2 + iVar1;
    } while (param_2 != 0);
  }
// WARNING: Subroutine does not return
  memset(&local_buffer_000008e0,0,0x400);
}
// 函数: void UtilitiesSystem_25374(void)
void UtilitiesSystem_25374(void)
{
// WARNING: Subroutine does not return
  memset(&local_buffer_000008e0,0,0x400);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool UtilitiesSystem_25470(int64_t param_1,int64_t param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  void *puVar7;
  int32_t uVar8;
  int64_t lVar9;
  bool bVar10;
  uint64_t local_var_f78;
  uint64_t local_var_f80;
  int32_t uVar11;
  int32_t local_var_60;
  int64_t lStack_5c;
  int32_t local_var_54;
  void *plocal_var_50;
  void *plocal_var_48;
  uint local_var_40;
  uint64_t local_var_38;
  uVar8 = (int32_t)((uint64_t)local_var_f78 >> 0x20);
  uVar11 = (int32_t)((uint64_t)local_var_f80 >> 0x20);
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  plocal_var_48 = (void *)0x0;
  local_var_40 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    CoreEngineDataBufferProcessor(&plocal_var_50,*(int *)(param_1 + 0x10));
// WARNING: Subroutine does not return
    memcpy(plocal_var_48 + local_var_40,*(uint64_t *)(param_1 + 8),
           (int64_t)(*(int *)(param_1 + 0x10) + 1));
  }
  CoreEngineDataBufferProcessor(&plocal_var_50,9);
  *(uint64_t *)(plocal_var_48 + local_var_40) = 0x6d642e706d75642f;
  *(int16_t *)((int64_t)(plocal_var_48 + local_var_40) + 8) = 0x70;
  local_var_40 = 9;
  if (param_2 != 0) {
    uVar1 = GetCurrentThreadId();
    uVar2 = GetCurrentProcessId();
    uVar5 = OpenProcess(0x450,0,uVar2);
    puVar7 = &system_buffer_ptr;
    if (plocal_var_48 != (void *)0x0) {
      puVar7 = plocal_var_48;
    }
    lVar6 = CreateFileA(puVar7,0xc0000000,0,0,CONCAT44(uVar8,2),CONCAT44(uVar11,0x80),0);
    if (lVar6 - 1U < 0xfffffffffffffffe) {
      local_var_54 = 0;
      uVar8 = 0xe9975;
      if (system_data_ecec != '\0') {
        uVar8 = 0xe9977;
      }
      lVar9 = system_heap_base + 8;
      local_var_60 = uVar1;
      lStack_5c = param_2;
      iVar3 = _Mtx_lock(lVar9);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      iVar3 = MiniDumpWriteDump(uVar5,uVar2,lVar6,uVar8,&local_var_60,0,0);
      iVar4 = _Mtx_unlock(lVar9);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      CloseHandle(uVar5);
      CloseHandle(lVar6);
      bVar10 = iVar3 == 1;
      goto LAB_180625640;
    }
  }
  bVar10 = false;
LAB_180625640:
  plocal_var_50 = &system_data_buffer_ptr;
  if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return bVar10;
}
// 函数: void UtilitiesSystem_25690(void)
void UtilitiesSystem_25690(void)
{
  RaiseException(0xdeadface,0,0,0);
  Sleep(1000);
  return;
}
uint64_t * UtilitiesSystem_256c0(uint64_t *param_1,int64_t param_2,int param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  int *piVar3;
  int64_t lVar4;
  int iVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uVar7 = 0xfffffffffffffffe;
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  uVar6 = 1;
  lVar4 = (int64_t)param_3;
  if (0 < param_3) {
    piVar3 = (int *)(param_2 + 0x10);
    do {
      iVar5 = *(int *)(param_1 + 2) + 4;
      CoreEngineDataBufferProcessor(param_1,iVar5);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(int32_t *)((uint64_t)uVar1 + lVar2) = 0x23575423;
      *(int8_t *)((int32_t *)((uint64_t)uVar1 + lVar2) + 1) = 0;
      *(int *)(param_1 + 2) = iVar5;
      if (0 < *piVar3) {
        CoreEngineDataBufferProcessor(param_1,iVar5 + *piVar3);
// WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_1 + 2) + param_1[1],*(uint64_t *)(piVar3 + -2),
               (int64_t)(*piVar3 + 1),param_4,uVar6,uVar7);
      }
      piVar3 = piVar3 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_257b0(uint64_t *param_1)
void UtilitiesSystem_257b0(uint64_t *param_1)
{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int32_t *puVar5;
  void *puVar6;
  int8_t stack_array_4e8 [32];
  void *plocal_var_4c8;
  int32_t *plocal_var_4c0;
  void *plocal_var_4b8;
  int32_t *plocal_var_4b0;
  int32_t local_var_4a8;
  uint64_t local_var_4a0;
  int8_t stack_array_498 [8];
  void *plocal_var_490;
  void *plocal_var_488;
  int32_t local_var_478;
  uint64_t local_var_470;
  int32_t *plocal_var_468;
  int8_t *plocal_var_460;
  uint64_t local_var_458;
  int32_t local_var_450;
  int32_t local_var_44c;
  int32_t local_var_448;
  int32_t local_var_444;
  int32_t local_var_440;
  int16_t local_var_43c;
  int8_t stack_array_438 [1024];
  uint64_t local_var_38;
  cVar1 = system_exception_handler;
  local_var_470 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4e8;
  *param_1 = &memory_allocator_3080_ptr;
  *(int8_t *)(param_1 + 1) = 0;
  uVar2 = GetCurrentProcessId();
  plocal_var_4b8 = &system_data_buffer_ptr;
  local_var_4a0 = 0;
  plocal_var_4b0 = (int32_t *)0x0;
  local_var_4a8 = 0;
  puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_4b0 = puVar5;
  uVar3 = CoreEngineSystemCleanup(puVar5);
  local_var_4a0 = CONCAT44(local_var_4a0._4_4_,uVar3);
  *puVar5 = 0x2e5c2e2e;
  puVar5[1] = 0x2e2e5c2e;
  puVar5[2] = 0x6f6f545c;
  puVar5[3] = 0x435c736c;
  *(int16_t *)(puVar5 + 4) = 0x4244;
  *(int8_t *)((int64_t)puVar5 + 0x12) = 0;
  local_var_4a8 = 0x12;
  UtilitiesSystem_242f0(&plocal_var_490);
  puVar6 = &rendering_buffer_2832_ptr;
  if (cVar1 == '\0') {
    puVar6 = &rendering_buffer_2960_ptr;
  }
  plocal_var_4c8 = &system_buffer_ptr;
  if (plocal_var_488 != (void *)0x0) {
    plocal_var_4c8 = plocal_var_488;
  }
  plocal_var_4c0 = puVar5;
  UtilitiesSystem_26a10(stack_array_438,puVar6,uVar2);
  local_var_450 = 0x63746157;
  local_var_44c = 0x676f6468;
  local_var_448 = 0x7461575c;
  local_var_444 = 0x6f646863;
  local_var_440 = 0x78652e67;
  local_var_43c = 0x65;
  plocal_var_468 = &local_var_450;
  plocal_var_460 = stack_array_438;
  local_var_458 = 0;
  plocal_var_4c0 = (int32_t *)((uint64_t)plocal_var_4c0 & 0xffffffffffffff00);
  iVar4 = UtilitiesSystem_252c0(stack_array_498);
  if (0 < iVar4) {
    *(int8_t *)(param_1 + 1) = 1;
  }
  plocal_var_490 = &system_data_buffer_ptr;
  if (plocal_var_488 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_488 = (void *)0x0;
  local_var_478 = 0;
  plocal_var_490 = &system_state_ptr;
  plocal_var_4b8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_259b0(int64_t param_1,int32_t param_2)
void UtilitiesSystem_259b0(int64_t param_1,int32_t param_2)
{
  int64_t lVar1;
  void *puVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int8_t stack_array_88 [32];
  void *plocal_var_68;
  void *plocal_var_60;
  uint local_var_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  char acStack_40 [32];
  uint64_t local_var_20;
  local_var_48 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  CoreMemoryPoolValidator(&plocal_var_68,&system_data_c230);
  uVar3 = local_var_58 + 3;
  CoreEngineDataBufferProcessor(&plocal_var_68,uVar3);
  *(int32_t *)(plocal_var_60 + local_var_58) = 0x64742d;
  local_var_58 = uVar3;
  SystemCore_CacheManager(acStack_40,0x20,&memory_allocator_3388_ptr,param_2);
  lVar1 = -1;
  do {
    lVar5 = lVar1;
    lVar1 = lVar5 + 1;
  } while (acStack_40[lVar5 + 1] != '\0');
  iVar4 = (int)(lVar5 + 1);
  if (0 < iVar4) {
    CoreEngineDataBufferProcessor(&plocal_var_68,local_var_58 + iVar4);
// WARNING: Subroutine does not return
    memcpy(plocal_var_60 + local_var_58,acStack_40,(int64_t)((int)lVar5 + 2));
  }
  uVar3 = local_var_58 + 2;
  CoreEngineDataBufferProcessor(&plocal_var_68,uVar3);
  *(int16_t *)(plocal_var_60 + local_var_58) = 0x2d2d;
  *(int8_t *)((int64_t)(plocal_var_60 + local_var_58) + 2) = 0;
  local_var_58 = uVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    CoreEngineDataBufferProcessor(&plocal_var_68,*(int *)(param_1 + 0x10) + uVar3);
// WARNING: Subroutine does not return
    memcpy(plocal_var_60 + local_var_58,*(uint64_t *)(param_1 + 8),
           (int64_t)(*(int *)(param_1 + 0x10) + 1));
  }
  puVar2 = &system_buffer_ptr;
  if (plocal_var_60 != (void *)0x0) {
    puVar2 = plocal_var_60;
  }
  OutputDebugStringA(puVar2);
  plocal_var_68 = &system_data_buffer_ptr;
  if (plocal_var_60 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_60 = (void *)0x0;
  local_var_50 = 0;
  plocal_var_68 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_88);
}
// 函数: void UtilitiesSystem_25b30(uint64_t param_1,uint64_t param_2,int32_t param_3)
void UtilitiesSystem_25b30(uint64_t param_1,uint64_t param_2,int32_t param_3)
{
  void *plocal_var_30;
  int64_t lStack_28;
  SystemCore_EncryptionEngine0(&plocal_var_30);
  UtilitiesSystem_259b0(&plocal_var_30,param_3);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void UtilitiesSystem_25ba0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void UtilitiesSystem_25ba0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
{
  void *puVar1;
  uint uVar2;
  uint uVar3;
  void *plocal_var_30;
  void *plocal_var_28;
  uint local_var_20;
  CoreMemoryPoolValidator(&plocal_var_30,&system_data_c230,param_3,param_4,0xfffffffffffffffe);
  uVar3 = local_var_20;
  uVar2 = local_var_20 + 3;
  CoreEngineDataBufferProcessor(&plocal_var_30,uVar2);
  *(int32_t *)(plocal_var_28 + local_var_20) = 0x72672d;
  local_var_20 = uVar2;
  if (0 < *(int *)(param_2 + 0x10)) {
    CoreEngineDataBufferProcessor(&plocal_var_30,uVar2 + *(int *)(param_2 + 0x10));
// WARNING: Subroutine does not return
    memcpy(plocal_var_28 + local_var_20,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  uVar3 = uVar3 + 7;
  CoreEngineDataBufferProcessor(&plocal_var_30,uVar3);
  *(int32_t *)(plocal_var_28 + local_var_20) = 0x23575423;
  *(int8_t *)((int64_t)(plocal_var_28 + local_var_20) + 4) = 0;
  local_var_20 = uVar3;
  if (0 < *(int *)(param_3 + 0x10)) {
    CoreEngineDataBufferProcessor(&plocal_var_30,uVar3 + *(int *)(param_3 + 0x10));
// WARNING: Subroutine does not return
    memcpy(plocal_var_28 + local_var_20,*(uint64_t *)(param_3 + 8),
           (int64_t)(*(int *)(param_3 + 0x10) + 1));
  }
  puVar1 = &system_buffer_ptr;
  if (plocal_var_28 != (void *)0x0) {
    puVar1 = plocal_var_28;
  }
  OutputDebugStringA(puVar1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (plocal_var_28 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address