/* FUN_函数别名定义 */
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

// 函数: void FUN_1806240a0(uint64_t *param_1)
void FUN_1806240a0(uint64_t *param_1)

{
  int iVar1;
  int16_t *puVar2;
  int8_t auStack_3f8 [32];
  int8_t *puStack_3d8;
  int32_t uStack_3d0;
  uint64_t uStack_3c8;
  uint64_t uStack_3c0;
  int32_t uStack_3b8;
  void *puStack_3b0;
  uint64_t uStack_3a8;
  int32_t uStack_3a0;
  uint64_t uStack_398;
  uint64_t uStack_390;
  uint64_t *puStack_388;
  int8_t auStack_378 [288];
  int8_t auStack_258 [560];
  uint64_t uStack_28;
  
  uStack_390 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3f8;
  uStack_3b8 = 0;
  puStack_388 = param_1;
  iVar1 = GetModuleFileNameW(0,auStack_258,0x118);
  if (iVar1 == 0) {
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &rendering_buffer_2008_ptr;
    param_1[1] = param_1 + 3;
    *(int8_t *)(param_1 + 3) = 0;
    *(int32_t *)(param_1 + 2) = 0;
    strcpy_s(param_1[1],0x100,&system_buffer_ptr);
    uStack_3b8 = 1;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_3f8);
  }
  puVar2 = (int16_t *)wcsrchr(auStack_258,0x5c);
  if (puVar2 == (int16_t *)0x0) {
    puVar2 = (int16_t *)wcsrchr(auStack_258,0x5c);
    if (puVar2 == (int16_t *)0x0) goto LAB_180624138;
  }
  *puVar2 = 0;
LAB_180624138:
  puStack_3b0 = &system_data_buffer_ptr;
  uStack_398 = 0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0x118;
  puStack_3d8 = auStack_378;
  iVar1 = WideCharToMultiByte(0xfde9,0,auStack_258,0xffffffff);
  CoreEngineDataBufferProcessor(&puStack_3b0,iVar1);
                    // WARNING: Subroutine does not return
  memcpy(uStack_3a8,auStack_378,(int64_t)iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806242f0(uint64_t *param_1)
void FUN_1806242f0(uint64_t *param_1)

{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int8_t auStack_298 [32];
  int8_t *puStack_278;
  int32_t uStack_268;
  uint64_t uStack_260;
  uint64_t *puStack_258;
  int8_t auStack_248 [560];
  uint64_t uStack_18;
  
  uStack_260 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_298;
  uStack_268 = 0;
  puStack_278 = auStack_248;
  puStack_258 = param_1;
  SHGetFolderPathW(0,0x23,0,0);
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  uStack_268 = 1;
  FUN_180628e80(param_1,auStack_248);
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
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void SystemCore_EncryptionEngine(uint64_t param_1)
void SystemCore_EncryptionEngine(uint64_t param_1)

{
  int8_t auStack_2f8 [32];
  int32_t uStack_2d8;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  void *puStack_2b8;
  int8_t *puStack_2b0;
  int32_t uStack_2a8;
  int8_t auStack_2a0 [312];
  int8_t auStack_168 [288];
  uint64_t uStack_48;
  
  uStack_2d0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2f8;
  uStack_2d8 = 0;
  puStack_2b8 = &system_config_ptr;
  puStack_2b0 = auStack_2a0;
  auStack_2a0[0] = 0;
  uStack_2a8 = 6;
  uStack_2c8 = param_1;
  strcpy_s(auStack_2a0,0x10,&rendering_buffer_2588_ptr);
  uStack_2d8 = 0;
  puStack_2b8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  memset(auStack_168,0,0x118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624730(int64_t param_1)
void FUN_180624730(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  int8_t auStack_d08 [32];
  void **ppuStack_ce8;
  int32_t uStack_ce0;
  uint64_t uStack_cd8;
  uint64_t uStack_cd0;
  void *puStack_cc8;
  uint64_t uStack_cc0;
  int32_t uStack_cb8;
  uint64_t uStack_cb0;
  int32_t uStack_ca8;
  uint64_t uStack_ca0;
  int64_t lStack_c98;
  void *apuStack_c88 [68];
  int8_t auStack_a68 [560];
  int8_t auStack_838 [2048];
  uint64_t uStack_38;
  
  uStack_ca0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d08;
  uStack_ca8 = 0;
  lStack_c98 = param_1;
  uVar2 = SystemCore_EncryptionEngine(apuStack_c88);
  FUN_180068ff0(param_1,uVar2);
  uStack_ca8 = 1;
  apuStack_c88[0] = &system_state_ptr;
  uStack_ce0 = 0x118;
  ppuStack_ce8 = (void **)auStack_a68;
  MultiByteToWideChar(0xfde9,0,*(uint64_t *)(param_1 + 8),0xffffffff);
  GetFullPathNameW(auStack_a68,0x400,auStack_838,0);
  puStack_cc8 = &system_data_buffer_ptr;
  uStack_cb0 = 0;
  uStack_cc0 = 0;
  uStack_cb8 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_ce0 = 0x118;
  ppuStack_ce8 = apuStack_c88;
  iVar1 = WideCharToMultiByte(0xfde9,0,auStack_838,0xffffffff);
  CoreEngineDataBufferProcessor(&puStack_cc8,iVar1);
                    // WARNING: Subroutine does not return
  memcpy(uStack_cc0,apuStack_c88,(int64_t)iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void SystemManager_Processor(uint64_t param_1)
void SystemManager_Processor(uint64_t param_1)

{
  uint64_t uVar1;
  int8_t auStack_4c8 [32];
  int8_t *puStack_4a8;
  int32_t uStack_4a0;
  void *puStack_498;
  int64_t lStack_490;
  int32_t uStack_480;
  uint64_t uStack_478;
  void *apuStack_468 [68];
  int8_t auStack_248 [560];
  uint64_t uStack_18;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4c8;
  uVar1 = SystemCore_EncryptionEngine(apuStack_468,param_1);
  SystemCore_EncryptionEngine0(&puStack_498,uVar1);
  apuStack_468[0] = &system_state_ptr;
  uStack_4a0 = 0x118;
  puStack_4a8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  CreateDirectoryW(auStack_248,0);
  puStack_498 = &system_data_buffer_ptr;
  if (lStack_490 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_490 = 0;
  uStack_480 = 0;
  puStack_498 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_4c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void UltraHighFreq_LogManager1(uint64_t param_1)
void UltraHighFreq_LogManager1(uint64_t param_1)

{
  uint64_t uVar1;
  int8_t auStack_4c8 [32];
  int8_t *puStack_4a8;
  int32_t uStack_4a0;
  void *puStack_498;
  int64_t lStack_490;
  int32_t uStack_480;
  uint64_t uStack_478;
  void *apuStack_468 [68];
  int8_t auStack_248 [560];
  uint64_t uStack_18;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4c8;
  uVar1 = SystemCore_EncryptionEngine(apuStack_468,param_1);
  SystemCore_EncryptionEngine0(&puStack_498,uVar1);
  apuStack_468[0] = &system_state_ptr;
  uStack_4a0 = 0x118;
  puStack_4a8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  GetFileAttributesW(auStack_248);
  puStack_498 = &system_data_buffer_ptr;
  if (lStack_490 == 0) {
    lStack_490 = 0;
    uStack_480 = 0;
    puStack_498 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_4c8);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void RenderingSystem_RenderQueue(uint64_t param_1)
void RenderingSystem_RenderQueue(uint64_t param_1)

{
  uint64_t uVar1;
  int8_t auStack_4c8 [32];
  int8_t *puStack_4a8;
  int32_t uStack_4a0;
  void *puStack_498;
  int64_t lStack_490;
  int32_t uStack_480;
  uint64_t uStack_478;
  void *apuStack_468 [68];
  int8_t auStack_248 [560];
  uint64_t uStack_18;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4c8;
  uVar1 = SystemCore_EncryptionEngine(apuStack_468,param_1);
  SystemCore_EncryptionEngine0(&puStack_498,uVar1);
  apuStack_468[0] = &system_state_ptr;
  uStack_4a0 = 0x118;
  puStack_4a8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  GetFileAttributesW(auStack_248);
  puStack_498 = &system_data_buffer_ptr;
  if (lStack_490 == 0) {
    lStack_490 = 0;
    uStack_480 = 0;
    puStack_498 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_4c8);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624be0(int64_t *param_1)
void FUN_180624be0(int64_t *param_1)

{
  code *pcVar1;
  int iVar2;
  int8_t auStack_48 [32];
  uint auStack_28 [2];
  int8_t auStack_20 [16];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  auStack_28[0] = 0x10;
  iVar2 = GetComputerNameA(auStack_20,auStack_28);
  if (iVar2 == 0) {
    FUN_180627160(&rendering_buffer_2736_ptr);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
  }
  if ((uint64_t)auStack_28[0] < 0x10) {
    auStack_20[auStack_28[0]] = 0;
    (**(code **)(*param_1 + 0x10))(param_1,auStack_20);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
  }
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624c70(uint64_t param_1,int64_t param_2)
void FUN_180624c70(uint64_t param_1,int64_t param_2)

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
  int8_t auStack_258 [32];
  int32_t uStack_238;
  uint64_t uStack_230;
  uint64_t uStack_228;
  void *puStack_218;
  int8_t *puStack_210;
  uint uStack_208;
  int8_t auStack_200 [72];
  void *puStack_1b8;
  uint *puStack_1b0;
  uint uStack_1a8;
  uint auStack_1a0 [6];
  void *puStack_188;
  void *puStack_180;
  uint uStack_178;
  uint8_t auStack_170 [136];
  void *puStack_e8;
  void *puStack_e0;
  int32_t uStack_d8;
  uint8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_230 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_258;
  uVar7 = 0;
  uStack_238 = 0;
  uStack_228 = param_1;
  if (*(int *)(param_2 + 0x10) == 0) {
    CoreEngineDataTransformer();
  }
  else {
    puStack_1b8 = &system_config_ptr;
    puStack_1b0 = auStack_1a0;
    auStack_1a0[0] = auStack_1a0[0] & 0xffffff00;
    uStack_1a8 = 6;
    strcpy_s(auStack_1a0,0x10,&rendering_buffer_2588_ptr);
    if (*(uint *)(param_2 + 0x10) < uStack_1a8) {
LAB_180624d38:
      bVar1 = false;
    }
    else {
      if (uStack_1a8 != 0) {
        pcVar6 = *(char **)(param_2 + 8);
        lVar3 = (int64_t)puStack_1b0 - (int64_t)pcVar6;
        do {
          if (*pcVar6 != pcVar6[lVar3]) goto LAB_180624d38;
          uVar7 = uVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (uVar7 < uStack_1a8);
      }
      bVar1 = true;
    }
    uStack_238 = 0;
    puStack_1b8 = &system_state_ptr;
    if (bVar1) {
      CoreEngineDataTransformer(param_1,param_2);
    }
    else {
      puStack_218 = &memory_allocator_3480_ptr;
      puStack_210 = auStack_200;
      auStack_200[0] = 0;
      uStack_208 = 6;
      strcpy_s(auStack_200,0x40,&rendering_buffer_2768_ptr);
      iVar2 = DataValidator_CheckIntegrity(param_2,&puStack_218);
      if (iVar2 < 0) {
        (**(code **)(puStack_218 + 0x10))(&puStack_218,&rendering_buffer_2696_ptr);
        iVar2 = DataValidator_CheckIntegrity(param_2,&puStack_218);
        if (iVar2 < 0) {
          puStack_188 = &memory_allocator_3480_ptr;
          puStack_180 = auStack_170;
          auStack_170[0] = 0;
          uStack_178 = 8;
          strcpy_s(auStack_170,0x40,&rendering_buffer_2680_ptr);
          uStack_208 = uStack_178;
          puVar8 = &system_buffer_ptr;
          if (puStack_180 != (void *)0x0) {
            puVar8 = puStack_180;
          }
          strcpy_s(puStack_210,0x40,puVar8);
          puStack_188 = &system_state_ptr;
          iVar2 = DataValidator_CheckIntegrity(param_2,&puStack_218);
          if (iVar2 < 0) {
            CoreEngineDataTransformer(param_1,param_2);
          }
          else {
            lVar3 = RenderingSystem_StringParser(param_2,&puStack_1b8,uStack_208 + iVar2,
                                  *(int32_t *)(param_2 + 0x10));
            puStack_e8 = &memory_allocator_3432_ptr;
            puStack_e0 = auStack_d0;
            auStack_d0[0] = 0;
            uStack_d8 = *(int32_t *)(lVar3 + 0x10);
            puVar8 = &system_buffer_ptr;
            if (*(void **)(lVar3 + 8) != (void *)0x0) {
              puVar8 = *(void **)(lVar3 + 8);
            }
            strcpy_s(auStack_d0,0x80,puVar8);
            puStack_1b8 = &system_data_buffer_ptr;
            if (puStack_1b0 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            puStack_1b0 = (uint *)0x0;
            auStack_1a0[0] = 0;
            puStack_1b8 = &system_state_ptr;
            uVar4 = FUN_180624030(&puStack_1b8);
            RenderingSystem_DataBlockCopier(&puStack_188,uVar4);
            puStack_1b8 = &system_state_ptr;
            puVar8 = &system_buffer_ptr;
            if (puStack_e0 != (void *)0x0) {
              puVar8 = puStack_e0;
            }
            lVar3 = -1;
            do {
              lVar5 = lVar3;
              lVar3 = lVar5 + 1;
            } while (puVar8[lVar3] != '\0');
            if ((0 < (int)lVar3) && (uStack_178 + (int)lVar3 < 0x7f)) {
                    // WARNING: Subroutine does not return
              memcpy(puStack_180 + uStack_178,puVar8,(int64_t)((int)lVar5 + 2));
            }
            SystemCore_EncryptionEngine0(param_1,&puStack_188);
            puStack_188 = &system_state_ptr;
            puStack_e8 = &system_state_ptr;
          }
        }
        else {
          lVar3 = RenderingSystem_StringParser(param_2,&puStack_1b8,uStack_208 + iVar2,
                                *(int32_t *)(param_2 + 0x10));
          puStack_e8 = &memory_allocator_3432_ptr;
          puStack_e0 = auStack_d0;
          auStack_d0[0] = 0;
          uStack_d8 = *(int32_t *)(lVar3 + 0x10);
          puVar8 = &system_buffer_ptr;
          if (*(void **)(lVar3 + 8) != (void *)0x0) {
            puVar8 = *(void **)(lVar3 + 8);
          }
          strcpy_s(auStack_d0,0x80,puVar8);
          puStack_1b8 = &system_data_buffer_ptr;
          if (puStack_1b0 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_1b0 = (uint *)0x0;
          auStack_1a0[0] = 0;
          puStack_1b8 = &system_state_ptr;
          uVar4 = FUN_180624030(&puStack_1b8);
          RenderingSystem_DataBlockCopier(&puStack_188,uVar4);
          puStack_1b8 = &system_state_ptr;
          puVar8 = &system_buffer_ptr;
          if (puStack_e0 != (void *)0x0) {
            puVar8 = puStack_e0;
          }
          lVar3 = -1;
          do {
            lVar5 = lVar3;
            lVar3 = lVar5 + 1;
          } while (puVar8[lVar3] != '\0');
          if ((0 < (int)lVar3) && (uStack_178 + (int)lVar3 < 0x7f)) {
                    // WARNING: Subroutine does not return
            memcpy(puStack_180 + uStack_178,puVar8,(int64_t)((int)lVar5 + 2));
          }
          SystemCore_EncryptionEngine0(param_1,&puStack_188);
          puStack_188 = &system_state_ptr;
          puStack_e8 = &system_state_ptr;
        }
      }
      else {
        lVar3 = RenderingSystem_StringParser(param_2,&puStack_1b8,uStack_208 + iVar2,
                              *(int32_t *)(param_2 + 0x10));
        puStack_e8 = &memory_allocator_3432_ptr;
        puStack_e0 = auStack_d0;
        auStack_d0[0] = 0;
        uStack_d8 = *(int32_t *)(lVar3 + 0x10);
        puVar8 = &system_buffer_ptr;
        if (*(void **)(lVar3 + 8) != (void *)0x0) {
          puVar8 = *(void **)(lVar3 + 8);
        }
        strcpy_s(auStack_d0,0x80,puVar8);
        puStack_1b8 = &system_data_buffer_ptr;
        if (puStack_1b0 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puStack_1b8 = &system_config_ptr;
        puStack_1b0 = auStack_1a0;
        auStack_1a0[0] = 0;
        uStack_1a8 = 6;
        strcpy_s(auStack_1a0,0x10,&rendering_buffer_2588_ptr);
        uStack_238 = 4;
        puStack_188 = &memory_allocator_3432_ptr;
        puStack_180 = auStack_170;
        auStack_170[0] = 0;
        uStack_178 = uStack_1a8;
        puVar9 = (uint *)&system_buffer_ptr;
        if (puStack_1b0 != (uint *)0x0) {
          puVar9 = puStack_1b0;
        }
        strcpy_s(auStack_170,0x80,puVar9);
        uStack_238 = 0;
        puStack_1b8 = &system_state_ptr;
        puVar8 = &system_buffer_ptr;
        if (puStack_e0 != (void *)0x0) {
          puVar8 = puStack_e0;
        }
        lVar3 = -1;
        do {
          lVar5 = lVar3;
          lVar3 = lVar5 + 1;
        } while (puVar8[lVar3] != '\0');
        if ((0 < (int)lVar3) && (uStack_178 + (int)lVar3 < 0x7f)) {
                    // WARNING: Subroutine does not return
          memcpy(puStack_180 + uStack_178,puVar8,(int64_t)((int)lVar5 + 2));
        }
        SystemCore_EncryptionEngine0(param_1,&puStack_188);
        puStack_188 = &system_state_ptr;
        puStack_e8 = &system_state_ptr;
      }
      puStack_218 = &system_state_ptr;
    }
  }
  uStack_238 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806252c0(int32_t *param_1)
void FUN_1806252c0(int32_t *param_1)

{
  int8_t auStack_cf8 [224];
  int8_t auStack_c18 [3072];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_cf8;
  *param_1 = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(auStack_c18,0,0x400);
}





// 函数: void FUN_180625330(uint64_t param_1,int64_t param_2)
void FUN_180625330(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t unaff_RBX;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = RenderingEngine_BufferManager(&stack0x000004e0 + iVar2,&rendering_buffer_2728_ptr,param_2);
      param_2 = *(int64_t *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      iVar2 = iVar2 + iVar1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  memset(&stack0x000008e0,0,0x400);
}





// 函数: void FUN_180625374(void)
void FUN_180625374(void)

{
                    // WARNING: Subroutine does not return
  memset(&stack0x000008e0,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180625470(int64_t param_1,int64_t param_2)

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
  uint64_t in_stack_ffffffffffffff78;
  uint64_t in_stack_ffffffffffffff80;
  int32_t uVar11;
  int32_t uStack_60;
  int64_t lStack_5c;
  int32_t uStack_54;
  void *puStack_50;
  void *puStack_48;
  uint uStack_40;
  uint64_t uStack_38;
  
  uVar8 = (int32_t)((uint64_t)in_stack_ffffffffffffff78 >> 0x20);
  uVar11 = (int32_t)((uint64_t)in_stack_ffffffffffffff80 >> 0x20);
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (void *)0x0;
  uStack_40 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    CoreEngineDataBufferProcessor(&puStack_50,*(int *)(param_1 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_48 + uStack_40,*(uint64_t *)(param_1 + 8),
           (int64_t)(*(int *)(param_1 + 0x10) + 1));
  }
  CoreEngineDataBufferProcessor(&puStack_50,9);
  *(uint64_t *)(puStack_48 + uStack_40) = 0x6d642e706d75642f;
  *(int16_t *)((int64_t)(puStack_48 + uStack_40) + 8) = 0x70;
  uStack_40 = 9;
  if (param_2 != 0) {
    uVar1 = GetCurrentThreadId();
    uVar2 = GetCurrentProcessId();
    uVar5 = OpenProcess(0x450,0,uVar2);
    puVar7 = &system_buffer_ptr;
    if (puStack_48 != (void *)0x0) {
      puVar7 = puStack_48;
    }
    lVar6 = CreateFileA(puVar7,0xc0000000,0,0,CONCAT44(uVar8,2),CONCAT44(uVar11,0x80),0);
    if (lVar6 - 1U < 0xfffffffffffffffe) {
      uStack_54 = 0;
      uVar8 = 0xe9975;
      if (system_data_ecec != '\0') {
        uVar8 = 0xe9977;
      }
      lVar9 = system_heap_base + 8;
      uStack_60 = uVar1;
      lStack_5c = param_2;
      iVar3 = _Mtx_lock(lVar9);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      iVar3 = MiniDumpWriteDump(uVar5,uVar2,lVar6,uVar8,&uStack_60,0,0);
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
  puStack_50 = &system_data_buffer_ptr;
  if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return bVar10;
}





// 函数: void FUN_180625690(void)
void FUN_180625690(void)

{
  RaiseException(0xdeadface,0,0,0);
  Sleep(1000);
  return;
}



uint64_t * FUN_1806256c0(uint64_t *param_1,int64_t param_2,int param_3,uint64_t param_4)

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



// 函数: void FUN_1806257b0(uint64_t *param_1)
void FUN_1806257b0(uint64_t *param_1)

{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int32_t *puVar5;
  void *puVar6;
  int8_t auStack_4e8 [32];
  void *puStack_4c8;
  int32_t *puStack_4c0;
  void *puStack_4b8;
  int32_t *puStack_4b0;
  int32_t uStack_4a8;
  uint64_t uStack_4a0;
  int8_t auStack_498 [8];
  void *puStack_490;
  void *puStack_488;
  int32_t uStack_478;
  uint64_t uStack_470;
  int32_t *puStack_468;
  int8_t *puStack_460;
  uint64_t uStack_458;
  int32_t uStack_450;
  int32_t uStack_44c;
  int32_t uStack_448;
  int32_t uStack_444;
  int32_t uStack_440;
  int16_t uStack_43c;
  int8_t auStack_438 [1024];
  uint64_t uStack_38;
  
  cVar1 = system_exception_handler;
  uStack_470 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4e8;
  *param_1 = &memory_allocator_3080_ptr;
  *(int8_t *)(param_1 + 1) = 0;
  uVar2 = GetCurrentProcessId();
  puStack_4b8 = &system_data_buffer_ptr;
  uStack_4a0 = 0;
  puStack_4b0 = (int32_t *)0x0;
  uStack_4a8 = 0;
  puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_4b0 = puVar5;
  uVar3 = CoreEngineSystemCleanup(puVar5);
  uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar3);
  *puVar5 = 0x2e5c2e2e;
  puVar5[1] = 0x2e2e5c2e;
  puVar5[2] = 0x6f6f545c;
  puVar5[3] = 0x435c736c;
  *(int16_t *)(puVar5 + 4) = 0x4244;
  *(int8_t *)((int64_t)puVar5 + 0x12) = 0;
  uStack_4a8 = 0x12;
  FUN_1806242f0(&puStack_490);
  puVar6 = &rendering_buffer_2832_ptr;
  if (cVar1 == '\0') {
    puVar6 = &rendering_buffer_2960_ptr;
  }
  puStack_4c8 = &system_buffer_ptr;
  if (puStack_488 != (void *)0x0) {
    puStack_4c8 = puStack_488;
  }
  puStack_4c0 = puVar5;
  FUN_180626a10(auStack_438,puVar6,uVar2);
  uStack_450 = 0x63746157;
  uStack_44c = 0x676f6468;
  uStack_448 = 0x7461575c;
  uStack_444 = 0x6f646863;
  uStack_440 = 0x78652e67;
  uStack_43c = 0x65;
  puStack_468 = &uStack_450;
  puStack_460 = auStack_438;
  uStack_458 = 0;
  puStack_4c0 = (int32_t *)((uint64_t)puStack_4c0 & 0xffffffffffffff00);
  iVar4 = FUN_1806252c0(auStack_498);
  if (0 < iVar4) {
    *(int8_t *)(param_1 + 1) = 1;
  }
  puStack_490 = &system_data_buffer_ptr;
  if (puStack_488 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_488 = (void *)0x0;
  uStack_478 = 0;
  puStack_490 = &system_state_ptr;
  puStack_4b8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806259b0(int64_t param_1,int32_t param_2)
void FUN_1806259b0(int64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  void *puVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int8_t auStack_88 [32];
  void *puStack_68;
  void *puStack_60;
  uint uStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  char acStack_40 [32];
  uint64_t uStack_20;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  CoreMemoryPoolValidator(&puStack_68,&system_data_c230);
  uVar3 = uStack_58 + 3;
  CoreEngineDataBufferProcessor(&puStack_68,uVar3);
  *(int32_t *)(puStack_60 + uStack_58) = 0x64742d;
  uStack_58 = uVar3;
  SystemCore_CacheManager(acStack_40,0x20,&memory_allocator_3388_ptr,param_2);
  lVar1 = -1;
  do {
    lVar5 = lVar1;
    lVar1 = lVar5 + 1;
  } while (acStack_40[lVar5 + 1] != '\0');
  iVar4 = (int)(lVar5 + 1);
  if (0 < iVar4) {
    CoreEngineDataBufferProcessor(&puStack_68,uStack_58 + iVar4);
                    // WARNING: Subroutine does not return
    memcpy(puStack_60 + uStack_58,acStack_40,(int64_t)((int)lVar5 + 2));
  }
  uVar3 = uStack_58 + 2;
  CoreEngineDataBufferProcessor(&puStack_68,uVar3);
  *(int16_t *)(puStack_60 + uStack_58) = 0x2d2d;
  *(int8_t *)((int64_t)(puStack_60 + uStack_58) + 2) = 0;
  uStack_58 = uVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    CoreEngineDataBufferProcessor(&puStack_68,*(int *)(param_1 + 0x10) + uVar3);
                    // WARNING: Subroutine does not return
    memcpy(puStack_60 + uStack_58,*(uint64_t *)(param_1 + 8),
           (int64_t)(*(int *)(param_1 + 0x10) + 1));
  }
  puVar2 = &system_buffer_ptr;
  if (puStack_60 != (void *)0x0) {
    puVar2 = puStack_60;
  }
  OutputDebugStringA(puVar2);
  puStack_68 = &system_data_buffer_ptr;
  if (puStack_60 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_60 = (void *)0x0;
  uStack_50 = 0;
  puStack_68 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_88);
}





// 函数: void FUN_180625b30(uint64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_180625b30(uint64_t param_1,uint64_t param_2,int32_t param_3)

{
  void *puStack_30;
  int64_t lStack_28;
  
  SystemCore_EncryptionEngine0(&puStack_30);
  FUN_1806259b0(&puStack_30,param_3);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_180625ba0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_180625ba0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  void *puVar1;
  uint uVar2;
  uint uVar3;
  void *puStack_30;
  void *puStack_28;
  uint uStack_20;
  
  CoreMemoryPoolValidator(&puStack_30,&system_data_c230,param_3,param_4,0xfffffffffffffffe);
  uVar3 = uStack_20;
  uVar2 = uStack_20 + 3;
  CoreEngineDataBufferProcessor(&puStack_30,uVar2);
  *(int32_t *)(puStack_28 + uStack_20) = 0x72672d;
  uStack_20 = uVar2;
  if (0 < *(int *)(param_2 + 0x10)) {
    CoreEngineDataBufferProcessor(&puStack_30,uVar2 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_28 + uStack_20,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  uVar3 = uVar3 + 7;
  CoreEngineDataBufferProcessor(&puStack_30,uVar3);
  *(int32_t *)(puStack_28 + uStack_20) = 0x23575423;
  *(int8_t *)((int64_t)(puStack_28 + uStack_20) + 4) = 0;
  uStack_20 = uVar3;
  if (0 < *(int *)(param_3 + 0x10)) {
    CoreEngineDataBufferProcessor(&puStack_30,uVar3 + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_28 + uStack_20,*(uint64_t *)(param_3 + 8),
           (int64_t)(*(int *)(param_3 + 0x10) + 1));
  }
  puVar1 = &system_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
    puVar1 = puStack_28;
  }
  OutputDebugStringA(puVar1);
  puStack_30 = &system_data_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



