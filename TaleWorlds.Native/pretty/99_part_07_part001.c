#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part001.c - 6 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_07.c - 500 个函数


// 函数: void FUN_1803f94b0(int64_t param_1,int64_t param_2)
void FUN_1803f94b0(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  void *puVar5;
  int8_t auStack_258 [32];
  int64_t *plStack_238;
  int64_t *plStack_230;
  void *puStack_228;
  uint64_t *puStack_220;
  int32_t uStack_218;
  uint64_t uStack_210;
  void *puStack_208;
  uint64_t *puStack_200;
  int32_t uStack_1f8;
  uint64_t uStack_1f0;
  void *puStack_1e8;
  uint64_t *puStack_1e0;
  int32_t uStack_1d8;
  uint64_t uStack_1d0;
  int iStack_1c8;
  int iStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  uint64_t uStack_1b4;
  uint64_t uStack_1ac;
  int8_t uStack_1a4;
  uint64_t uStack_1a3;
  int32_t uStack_198;
  int8_t uStack_194;
  uint64_t uStack_190;
  void *puStack_188;
  int8_t *puStack_180;
  int32_t uStack_178;
  int8_t auStack_170 [136];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_190 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_258;
  FUN_1801f9270();
  uStack_1c0 = 1;
  uStack_1bc = 1;
  uStack_1b4 = 0;
  uStack_1ac = 0x3f80000000000000;
  uStack_1a3 = 1;
  uStack_1a4 = 0;
  uStack_194 = 0;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    iVar4 = (int)((float)*(double *)(param_1 + 0x58) * (float)*(int *)(param_2 + 0x3590));
    iStack_1c8 = 4;
    if (4 < iVar4) {
      iStack_1c8 = iVar4;
    }
    iVar4 = (int)((float)*(double *)(param_1 + 0x60) * (float)*(int *)(param_2 + 0x3594));
    iStack_1c4 = 4;
    if (4 < iVar4) {
      iStack_1c4 = iVar4;
    }
    uStack_1b8 = 0x1f;
    puStack_1e8 = &system_data_buffer_ptr;
    uStack_1d0 = 0;
    puStack_1e0 = (uint64_t *)0x0;
    uStack_1d8 = 0;
    uStack_198 = *(int32_t *)(param_2 + 0x1bd4);
    puStack_1e0 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puStack_1e0 = 0;
    uVar2 = CoreEngineSystemCleanup(puStack_1e0);
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar2);
    *puStack_1e0 = 0x7365725f666c6168;
    *(int32_t *)(puStack_1e0 + 1) = 0x7065645f;
    *(int16_t *)((int64_t)puStack_1e0 + 0xc) = 0x6874;
    *(int8_t *)((int64_t)puStack_1e0 + 0xe) = 0;
    uStack_1d8 = 0xe;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 0x3528);
    }
    System_DataHandler(&puStack_1e8,&unknown_var_5464_ptr,puVar5);
    puStack_188 = &unknown_var_3432_ptr;
    puStack_180 = auStack_170;
    auStack_170[0] = 0;
    uStack_178 = uStack_1d8;
    puVar3 = (uint64_t *)&system_buffer_ptr;
    if (puStack_1e0 != (uint64_t *)0x0) {
      puVar3 = puStack_1e0;
    }
    strcpy_s(auStack_170,0x80,puVar3);
    puVar3 = (uint64_t *)FUN_1800b1230(system_resource_state,&plStack_238,&puStack_188,&iStack_1c8);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_230 = *(int64_t **)(param_1 + 0x428);
    *(uint64_t *)(param_1 + 0x428) = uVar1;
    if (plStack_230 != (int64_t *)0x0) {
      (**(code **)(*plStack_230 + 0x38))();
    }
    if (plStack_238 != (int64_t *)0x0) {
      (**(code **)(*plStack_238 + 0x38))();
    }
    puStack_188 = &system_state_ptr;
    uStack_1b8 = 4;
    puStack_208 = &system_data_buffer_ptr;
    uStack_1f0 = 0;
    puStack_200 = (uint64_t *)0x0;
    uStack_1f8 = 0;
    puStack_200 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
    *(int8_t *)puStack_200 = 0;
    uVar2 = CoreEngineSystemCleanup(puStack_200);
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar2);
    *puStack_200 = 0x7365725f666c6168;
    puStack_200[1] = 0x7469636f6c65765f;
    *(int16_t *)(puStack_200 + 2) = 0x79;
    uStack_1f8 = 0x11;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 0x3528);
    }
    System_DataHandler(&puStack_208,&unknown_var_5464_ptr,puVar5);
    puStack_e8 = &unknown_var_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = uStack_1f8;
    puVar3 = (uint64_t *)&system_buffer_ptr;
    if (puStack_200 != (uint64_t *)0x0) {
      puVar3 = puStack_200;
    }
    strcpy_s(auStack_d0,0x80,puVar3);
    puVar3 = (uint64_t *)FUN_1800b1230(system_resource_state,&plStack_238,&puStack_e8,&iStack_1c8);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_230 = *(int64_t **)(param_1 + 0x430);
    *(uint64_t *)(param_1 + 0x430) = uVar1;
    if (plStack_230 != (int64_t *)0x0) {
      (**(code **)(*plStack_230 + 0x38))();
    }
    if (plStack_238 != (int64_t *)0x0) {
      (**(code **)(*plStack_238 + 0x38))();
    }
    puStack_e8 = &system_state_ptr;
    uStack_1b8 = 0x31;
    puStack_228 = &system_data_buffer_ptr;
    uStack_210 = 0;
    puStack_220 = (uint64_t *)0x0;
    uStack_218 = 0;
    puStack_220 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1f,0x13);
    *(int8_t *)puStack_220 = 0;
    uVar2 = CoreEngineSystemCleanup(puStack_220);
    uStack_210 = CONCAT44(uStack_210._4_4_,uVar2);
    *puStack_220 = 0x7365725f666c6168;
    puStack_220[1] = 0x5f64656b6361705f;
    puStack_220[2] = 0x65765f6874706564;
    *(int32_t *)(puStack_220 + 3) = 0x69636f6c;
    *(int16_t *)((int64_t)puStack_220 + 0x1c) = 0x7974;
    *(int8_t *)((int64_t)puStack_220 + 0x1e) = 0;
    uStack_218 = 0x1e;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
      puVar5 = *(void **)(param_2 + 0x3528);
    }
    System_DataHandler(&puStack_228,&unknown_var_5464_ptr,puVar5);
    puStack_188 = &unknown_var_3432_ptr;
    puStack_180 = auStack_170;
    auStack_170[0] = 0;
    uStack_178 = uStack_218;
    puVar3 = (uint64_t *)&system_buffer_ptr;
    if (puStack_220 != (uint64_t *)0x0) {
      puVar3 = puStack_220;
    }
    strcpy_s(auStack_170,0x80,puVar3);
    puVar3 = (uint64_t *)FUN_1800b1230(system_resource_state,&plStack_238,&puStack_188,&iStack_1c8);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_230 = *(int64_t **)(param_1 + 0x438);
    *(uint64_t *)(param_1 + 0x438) = uVar1;
    if (plStack_230 != (int64_t *)0x0) {
      (**(code **)(*plStack_230 + 0x38))();
    }
    if (plStack_238 != (int64_t *)0x0) {
      (**(code **)(*plStack_238 + 0x38))();
    }
    puStack_188 = &system_state_ptr;
    puStack_228 = &system_data_buffer_ptr;
    if (puStack_220 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_220 = (uint64_t *)0x0;
    uStack_210 = uStack_210 & 0xffffffff00000000;
    puStack_228 = &system_state_ptr;
    puStack_208 = &system_data_buffer_ptr;
    if (puStack_200 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_200 = (uint64_t *)0x0;
    uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
    puStack_208 = &system_state_ptr;
    puStack_1e8 = &system_data_buffer_ptr;
    if (puStack_1e0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_1e0 = (uint64_t *)0x0;
    uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
    puStack_1e8 = &system_state_ptr;
  }
  plStack_238 = *(int64_t **)(param_1 + 0x448);
  *(uint64_t *)(param_1 + 0x448) = 0;
  if (plStack_238 != (int64_t *)0x0) {
    (**(code **)(*plStack_238 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f9a40(uint64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void FUN_1803f9a40(uint64_t *param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void *puVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  int8_t auStack_2a8 [32];
  int32_t uStack_288;
  char acStack_278 [8];
  int32_t auStack_270 [2];
  void *puStack_268;
  void **ppuStack_260;
  uint64_t uStack_258;
  int32_t uStack_250;
  int64_t *plStack_248;
  void *puStack_240;
  int64_t lStack_238;
  int32_t uStack_230;
  uint64_t uStack_228;
  uint64_t uStack_220;
  uint64_t uStack_218;
  int64_t *plStack_210;
  uint64_t uStack_208;
  void *puStack_200;
  void **ppuStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  uint64_t uStack_1e0;
  int8_t auStack_1d8 [32];
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  int64_t *plStack_1a8;
  void **ppuStack_1a0;
  int iStack_198;
  int iStack_194;
  uint64_t uStack_190;
  float fStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [72];
  void *puStack_118;
  void *puStack_110;
  uint uStack_108;
  uint8_t auStack_100 [136];
  uint64_t uStack_78;
  
  uStack_208 = 0xfffffffffffffffe;
  uStack_78 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2a8;
  puStack_118 = &unknown_var_3432_ptr;
  puStack_110 = auStack_100;
  auStack_100[0] = 0;
  uStack_108 = 0xc;
  auStack_270[0] = param_4;
  strcpy_s(auStack_100,0x80,&system_data_eb68);
  puVar6 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar6 = (void *)param_1[3];
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (puVar6[lVar3] != '\0');
  iVar14 = (int)lVar3;
  if ((0 < iVar14) && (uStack_108 + iVar14 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_110 + uStack_108,puVar6,(int64_t)(iVar14 + 1));
  }
  plVar8 = (int64_t *)0x0;
  puVar6 = &system_buffer_ptr;
  if (puStack_110 != (void *)0x0) {
    puVar6 = puStack_110;
  }
  FUN_1802c22a0(acStack_278,puVar6);
  puVar6 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar6 = (void *)param_1[3];
  }
  ppuStack_1a0 = &puStack_178;
  puStack_178 = &unknown_var_3480_ptr;
  puStack_170 = auStack_160;
  uStack_168 = 0;
  auStack_160[0] = 0;
  if (puVar6 != (void *)0x0) {
    FUN_180049bf0(&puStack_178);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_178);
  }
  lVar3 = system_main_module_state;
  if (*(int *)(param_1 + 9) < 1) {
    lVar5 = param_1[0x85];
    plVar12 = plVar8;
    if (((lVar5 != 0) && (plVar13 = *(int64_t **)(lVar5 + 0x1d8), plVar13 != (int64_t *)0x0)) &&
       (plVar12 = plVar13, system_main_module_state != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    lVar5 = param_1[0x86];
    plVar13 = plVar8;
    if (((lVar5 != 0) && (plVar9 = *(int64_t **)(lVar5 + 0x1d8), plVar9 != (int64_t *)0x0)) &&
       (plVar13 = plVar9, lVar3 != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    lVar5 = param_1[0x87];
    plVar9 = plVar8;
    if (((lVar5 != 0) && (plVar10 = *(int64_t **)(lVar5 + 0x1d8), plVar10 != (int64_t *)0x0)) &&
       (plVar9 = plVar10, lVar3 != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    lVar5 = param_1[0x88];
    plVar10 = plVar8;
    if (((lVar5 != 0) && (plVar1 = *(int64_t **)(lVar5 + 0x1d8), plVar1 != (int64_t *)0x0)) &&
       (plVar10 = plVar1, lVar3 != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    lVar5 = param_1[0x89];
    if (((lVar5 != 0) && (plVar8 = *(int64_t **)(lVar5 + 0x1e0), plVar8 != (int64_t *)0x0)) &&
       (lVar3 != 0)) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),0,plVar12);
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),1,plVar13);
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),2,plVar9);
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),3,plVar10);
    plVar12 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
      (**(code **)(*plVar12 + 0x70))(plVar12,*plVar8,2);
    }
    lVar3 = system_message_buffer;
    plVar12[0x107e] = (int64_t)plVar8;
    FUN_18029de40(*(uint64_t *)(lVar3 + 0x1cd8),4);
    if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
      dVar15 = (double)param_1[0xb];
      dVar16 = (double)param_1[0xc];
    }
    else {
      dVar15 = (double)*(int *)(param_3 + 0x3590) * (double)param_1[0xb];
      dVar16 = (double)*(int *)(param_3 + 0x3594) * (double)param_1[0xc];
    }
    fStack_188 = (float)dVar15;
    uStack_184 = (float)dVar16;
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    uStack_190 = (void **)
                 CONCAT44((float)(int)*(float *)(param_3 + 0x11c1c),
                          (float)(int)*(float *)(param_3 + 0x11c18));
    uStack_180 = 0;
    uStack_17c = 0x3f800000;
    plVar8 = *(int64_t **)(lVar3 + 0x8400);
    (**(code **)(*plVar8 + 0x160))(plVar8,1,&uStack_190);
    iVar14 = 0;
    ppuStack_1a0 = (void **)0x0;
    plVar8 = *(int64_t **)(lVar3 + 0x8400);
    iStack_198 = (int)dVar15;
    iStack_194 = (int)dVar16;
    (**(code **)(*plVar8 + 0x168))(plVar8,1,&ppuStack_1a0);
    lVar5 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) =
         *(uint64_t *)(param_3 + 0x35a8);
    *(uint64_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
    *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1be0) = 0.5 / (float)dVar15;
    *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1be4) = 0.5 / (float)dVar16;
    plVar8 = param_1 + 0x27;
    lVar3 = *plVar8;
    if (lVar3 == 0) {
      *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
      *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
    }
    else {
      *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar3 + 0x32c);
      *(float *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar3 + 0x32e);
    }
    lVar3 = system_parameter_buffer;
    if (*(char *)(system_parameter_buffer + 0x12f8) == '\x01') {
      *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c78) =
           *(int32_t *)(system_parameter_buffer + 0x1304);
      *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c7c) = *(int32_t *)(lVar3 + 0x12fc);
      *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1c74) = *(int32_t *)(lVar3 + 0x1300);
      *(int32_t *)(*(int64_t *)(lVar5 + 0x1cd8) + 0x1bfc) = *(int32_t *)(lVar3 + 0x1308);
    }
    FUN_18029fc10(*(int64_t *)(lVar5 + 0x1cd8),*(uint64_t *)(lVar5 + 0x1c88),
                  *(int64_t *)(lVar5 + 0x1cd8) + 0x1be0,0x230);
    ppuStack_1a0 = (void **)0x0;
    uStack_288 = param_5;
    FUN_1801f7d20(param_1,param_3,auStack_270,&ppuStack_1a0);
    uStack_190 = ppuStack_1a0;
    fStack_188 = (float)auStack_270[0];
    uStack_184._0_2_ = 4;
    puStack_268 = (void *)param_1[6];
    plStack_248 = (int64_t *)0x0;
    puStack_240 = &system_data_buffer_ptr;
    uStack_228 = 0;
    lStack_238 = 0;
    uStack_230 = 0;
    plStack_210 = (int64_t *)0x0;
    uStack_258 = CONCAT26(uStack_184._2_2_,CONCAT24(4,auStack_270[0]));
    ppuStack_260 = ppuStack_1a0;
    uStack_250 = 2;
    uStack_220 = 0;
    uStack_218 = 0;
    uVar4 = *(uint64_t *)(param_1[6] + 0x15b8);
    ppuStack_1f8 = ppuStack_1a0;
    uStack_1e8 = 2;
    uStack_1e0 = 0;
    puStack_200 = puStack_268;
    uStack_1f0 = uStack_258;
    ppuStack_1a0 = &puStack_200;
    CoreEngineDataTransformer(auStack_1d8,&puStack_240);
    uStack_1b8 = uStack_220;
    uStack_1b0 = uStack_218;
    plStack_1a8 = plStack_210;
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x28))();
    }
    uVar4 = FUN_180299eb0(uVar4,param_3,&puStack_200,acStack_278);
    if (acStack_278[0] == '\0') {
      param_1[0x1f] = uVar4;
      *(int32_t *)((int64_t)param_1 + 0x134) = 3;
      *(int32_t *)((int64_t)param_1 + 0x114) = *(int32_t *)(param_1[0x85] + 0x324);
      *(int32_t *)(param_1 + 0x23) = *(int32_t *)(param_1[0x86] + 0x324);
      *(int32_t *)((int64_t)param_1 + 0x11c) = *(int32_t *)(param_1[0x87] + 0x324);
      iVar7 = iVar14;
      do {
        if (*plVar8 != 0) {
          uStack_288 = 0xffffffff;
          FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),iVar7,*plVar8,0x10);
        }
        iVar7 = iVar7 + 1;
        plVar8 = plVar8 + 1;
      } while (iVar7 < 0x10);
      FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
      FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0x1f);
      lVar3 = system_message_buffer;
      puVar6 = &system_buffer_ptr;
      if (puStack_110 != (void *)0x0) {
        puVar6 = puStack_110;
      }
      if (puVar6 != (void *)0x0) {
        lVar5 = strnlen(puVar6,0x3f);
        strncpy(lVar3 + 0x1ce0,puVar6,lVar5);
        *(int8_t *)(lVar5 + 0x1ce0 + lVar3) = 0;
      }
      FUN_18029e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
      if ((void *)*param_1 != &unknown_var_3224_ptr) {
        (**(code **)((void *)*param_1 + 0x28))(param_1);
      }
      lVar11 = 0x8a38;
      lVar5 = 0x8438;
      lVar3 = system_message_buffer;
      do {
        if ((*(int64_t *)((int64_t)param_1 + lVar5 + -0x8300) != 0) &&
           (((lVar2 = *(int64_t *)(lVar3 + 0x1cd8), *(int64_t *)(lVar2 + lVar5) != 0 ||
             (*(int *)(lVar11 + -0x200 + lVar2) != -1)) || (*(int *)(lVar2 + lVar11) != 0x10)))) {
          ppuStack_1a0 = (void **)0x0;
          (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar2 + 0x8400),iVar14,1,&ppuStack_1a0);
          *(uint64_t *)(lVar2 + lVar5) = 0;
          *(int32_t *)(lVar11 + -0x200 + lVar2) = 0xffffffff;
          *(int32_t *)(lVar2 + lVar11) = 0x10;
          *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
          lVar3 = system_message_buffer;
        }
        iVar14 = iVar14 + 1;
        lVar5 = lVar5 + 8;
        lVar11 = lVar11 + 4;
      } while (iVar14 < 0x10);
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83b8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83c0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83c8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83d0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x83f0) = 0;
      FUN_18029de40(*(uint64_t *)(lVar3 + 0x1cd8),4);
    }
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    ppuStack_1a0 = &puStack_240;
    puStack_240 = &system_data_buffer_ptr;
    if (lStack_238 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_238 = 0;
    uStack_228 = uStack_228 & 0xffffffff00000000;
    puStack_240 = &system_state_ptr;
    if (plStack_248 != (int64_t *)0x0) {
      (**(code **)(*plStack_248 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  FUN_1802c2ac0(&puStack_178);
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  puStack_118 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_78 ^ (uint64_t)auStack_2a8);
}






// 函数: void FUN_1803fa430(int64_t param_1)
void FUN_1803fa430(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  *(int32_t *)(param_1 + 0x74 + (int64_t)*(int *)(param_1 + 0x47c) * 4) = 0xffffffe8;
  lVar1 = param_1 + (int64_t)*(int *)(param_1 + 0x47c) * 8;
  plVar2 = *(int64_t **)(param_1 + (int64_t)*(int *)(param_1 + 0x478) * 8 + 0x450);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(lVar1 + 0x138);
  *(int64_t **)(lVar1 + 0x138) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar2 = *(int64_t **)(param_1 + 0x450 + (int64_t)(1 - *(int *)(param_1 + 0x478)) * 8);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x428);
  *(int64_t **)(param_1 + 0x428) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int *)(param_1 + 0x478) = 1 - *(int *)(param_1 + 0x478);
  return;
}



uint64_t * FUN_1803fa510(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  FUN_1801fa180();
  *param_1 = &unknown_var_3600_ptr;
  FUN_1808fc838(param_1 + 0x8a,8,2,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(param_1 + 0x8c,8,3,&SUB_18005d5f0,FUN_180045af0);
  *(int32_t *)(param_1 + 0x8f) = 0;
  *(int32_t *)((int64_t)param_1 + 0x47c) = 4;
  plVar1 = (int64_t *)param_1[0x8b];
  param_1[0x8b] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x8b];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0x8a];
  param_1[0x8a] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x90) = 0;
  return param_1;
}



uint64_t * FUN_1803fa610(uint64_t *param_1,uint param_2)

{
  *param_1 = &unknown_var_3600_ptr;
  FUN_1808fc8a8(param_1 + 0x8c,8,3,FUN_180045af0,0xfffffffffffffffe);
  FUN_1808fc8a8(param_1 + 0x8a,8,2,FUN_180045af0);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x488);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1803fa6a0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x488,8,3,0xfffffffffffffffe);
  lVar4 = FUN_1803fa510(uVar3);
  FUN_1801f8ea0(lVar4,param_1);
  plVar6 = (int64_t *)(lVar4 + 0x450);
  lVar5 = 2;
  do {
    plVar1 = *(int64_t **)((param_1 - lVar4) + (int64_t)plVar6);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar6;
    *plVar6 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar6 = (int64_t *)(lVar4 + 0x460);
  lVar5 = 3;
  do {
    plVar1 = *(int64_t **)((int64_t)plVar6 + (param_1 - lVar4));
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar6;
    *plVar6 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int32_t *)(lVar4 + 0x478) = *(int32_t *)(param_1 + 0x478);
  *(int32_t *)(lVar4 + 0x47c) = *(int32_t *)(param_1 + 0x47c);
  *(int32_t *)(lVar4 + 0x480) = *(int32_t *)(param_1 + 0x480);
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fa7e0(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
void FUN_1803fa7e0(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  lVar3 = system_message_buffer;
  *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1c88) = (float)*(int *)(param_1 + 0x480);
  if (*(int64_t *)(param_3 + 0x11ee0) != 0) {
    *(float *)(*(int64_t *)(lVar3 + 0x1cd8) + 0x1d80) =
         (float)*(ushort *)(*(int64_t *)(param_3 + 0x11ee0) + 0x32c);
  }
  plVar1 = *(int64_t **)(param_1 + 0x468);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x470);
  *(int64_t **)(param_1 + 0x470) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x460);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x468);
  *(int64_t **)(param_1 + 0x468) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x148);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x460);
  *(int64_t **)(param_1 + 0x460) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x9c) = 0xffffffe8;
  plVar1 = *(int64_t **)(param_1 + 0x468);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x188);
  *(int64_t **)(param_1 + 0x188) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  FUN_1801f6650(param_1,param_2,param_3,param_4,param_5);
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fa980(int64_t *param_1,int64_t param_2)
void FUN_1803fa980(int64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int8_t auStack_1e8 [32];
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  uint64_t uStack_19c;
  uint64_t uStack_194;
  int8_t uStack_18c;
  uint64_t uStack_18b;
  int32_t uStack_180;
  int8_t uStack_17c;
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [136];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  uint64_t uStack_28;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  FUN_1801f9270();
  uStack_19c = 0;
  uStack_194 = 0x3f80000000000000;
  uStack_18b = 1;
  uStack_18c = 0;
  uStack_17c = 0;
  uStack_1a8 = 1;
  uStack_1a0 = (int32_t)param_1[0xe];
  uStack_1a4 = 1;
  uStack_180 = *(int32_t *)(param_2 + 0x1bd4);
  if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
    uStack_1b0 = (int32_t)(int64_t)(double)param_1[0xb];
    uStack_1ac = (int32_t)(int64_t)(double)param_1[0xc];
    if (param_1[0x8a] == 0) {
      puStack_c8 = &unknown_var_3432_ptr;
      puStack_c0 = auStack_b0;
      auStack_b0[0] = 0;
      uStack_b8 = 0xe;
      strcpy_s(auStack_b0,0x80,&unknown_var_2976_ptr);
      plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1b8,&puStack_c8,&uStack_1b0);
      lVar1 = *plVar2;
      *plVar2 = 0;
      plStack_1c8 = (int64_t *)param_1[0x8a];
      param_1[0x8a] = lVar1;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1b8 + 0x38))();
      }
      puStack_c8 = &system_state_ptr;
    }
    if (param_1[0x8b] == 0) {
      puStack_168 = &unknown_var_3432_ptr;
      puStack_160 = auStack_150;
      auStack_150[0] = 0;
      uStack_158 = 0xe;
      strcpy_s(auStack_150,0x80,&unknown_var_2992_ptr);
      plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1c0,&puStack_168,&uStack_1b0);
      lVar1 = *plVar2;
      *plVar2 = 0;
      plStack_1c8 = (int64_t *)param_1[0x8b];
      param_1[0x8b] = lVar1;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1c0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c0 + 0x38))();
      }
      puStack_168 = &system_state_ptr;
    }
  }
  else {
    uStack_1b0 = (int32_t)(int64_t)((double)*(int *)(param_2 + 0x3590) * (double)param_1[0xb]);
    uStack_1ac = (int32_t)(int64_t)((double)*(int *)(param_2 + 0x3594) * (double)param_1[0xc]);
    puStack_168 = &unknown_var_3432_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    uStack_158 = 0xe;
    strcpy_s(auStack_150,0x80,&unknown_var_2976_ptr);
    plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1b8,&puStack_168,&uStack_1b0);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_1c0 = (int64_t *)param_1[0x8a];
    param_1[0x8a] = lVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    puStack_168 = &system_state_ptr;
    puStack_c8 = &unknown_var_3432_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 0xe;
    strcpy_s(auStack_b0,0x80,&unknown_var_2992_ptr);
    plVar2 = (int64_t *)FUN_1800b1230(system_resource_state,&plStack_1c8,&puStack_c8,&uStack_1b0);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plStack_1c0 = (int64_t *)param_1[0x8b];
    param_1[0x8b] = lVar1;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    puStack_c8 = &system_state_ptr;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0,0);
  plStack_1c8 = (int64_t *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_1c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_1c8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




