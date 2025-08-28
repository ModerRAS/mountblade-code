#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part068.c - 3 个函数

// 函数: void FUN_1802c6190(uint64_t *param_1)
void FUN_1802c6190(uint64_t *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  code *pcVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int32_t uVar15;
  int8_t auStack_1e8 [32];
  int32_t uStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  int64_t **pplStack_1a8;
  int64_t **pplStack_1a0;
  uint64_t uStack_198;
  void **ppuStack_190;
  uint64_t uStack_188;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [128];
  int32_t uStack_e0;
  uint64_t uStack_d8;
  int64_t *plStack_d0;
  int iStack_c8;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  uVar12 = 0;
  uStack_1c8 = 0;
  iVar13 = 0xff;
  if (*(int *)(param_1 + 0x20c) < 0xff) {
    iVar13 = *(int *)(param_1 + 0x20c);
  }
  if (iVar13 != 0) {
    FUN_1802c70b0(param_1 + 0xc,param_1 + ((int64_t)iVar13 + 6) * 2,
                  (int64_t)(param_1 + ((int64_t)iVar13 + 6) * 2) - (int64_t)(param_1 + 0xc) >> 4,
                  param_1);
    iVar14 = 0x18;
    if (iVar13 < 0x18) {
      iVar14 = iVar13;
    }
    *(int *)(param_1 + 10) = iVar14;
    uVar10 = system_system_data_memory;
    uStack_198 = 0;
    iVar14 = iVar14 << 4;
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x1c;
    uVar15 = strcpy_s(auStack_80,0x40,&system_data_fc60);
    FUN_1802037e0(uVar15,iVar14,&puStack_98);
    puStack_98 = &system_state_ptr;
    lVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,iVar14,0x10,3);
    FUN_1802c7ae0(uVar10,&plStack_1c0);
    plVar7 = plStack_1c0;
    plStack_1c0[2] = lVar8;
    *(int *)(plStack_1c0 + 3) = iVar14;
    *(int *)((int64_t)plStack_1c0 + 0x1c) = iVar14;
    *(int8_t *)(plStack_1c0 + 4) = 0;
    pplStack_1a8 = (int64_t **)0x0;
    plStack_1c0 = (int64_t *)0x0;
    uStack_1c8 = 0;
    puVar2 = (int32_t *)plVar7[2];
    if (*(int *)(param_1 + 10) != 0) {
      puVar9 = puVar2;
      do {
        puVar1 = (int32_t *)((int64_t)param_1 + (0x60 - (int64_t)puVar2) + (int64_t)puVar9);
        uVar15 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar9 = *puVar1;
        puVar9[1] = uVar15;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        uVar12 = uVar12 + 1;
        puVar9 = puVar9 + 4;
      } while (uVar12 < *(uint *)(param_1 + 10));
    }
    pplStack_1a0 = (int64_t **)&puStack_178;
    puStack_178 = &unknown_var_3432_ptr;
    puStack_170 = auStack_160;
    uStack_168 = 0;
    auStack_160[0] = 0;
    uStack_e0 = 9;
    uStack_d8 = *param_1;
    plStack_d0 = plVar7;
    iStack_c8 = *(int *)(param_1 + 10) << 4;
    if (*(code **)(*plVar7 + 0x28) == (code *)&unknown_var_3248_ptr) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    plVar11 = (int64_t *)FUN_18005ce30(uVar10,&puStack_178);
    ppuStack_190 = (void **)plVar11;
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    lVar8 = system_context_ptr;
    pplStack_1a0 = &plStack_1b8;
    plStack_1b8 = plVar11;
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    pplStack_1a8 = &plStack_1b8;
    puVar3 = *(uint64_t **)(*(int64_t *)(lVar8 + 8) + 8);
    pcVar4 = *(code **)*puVar3;
    pplStack_1a0 = &plStack_1b0;
    plStack_1b0 = plStack_1b8;
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x28))();
    }
    (*pcVar4)(puVar3,&plStack_1b0);
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11);
    }
    ppuStack_190 = &puStack_178;
    puStack_178 = &system_state_ptr;
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c64d0(int64_t *param_1,uint64_t param_2)
void FUN_1802c64d0(int64_t *param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void **ppuVar8;
  bool bVar9;
  int8_t auStack_2e8 [32];
  int32_t uStack_2c8;
  int8_t uStack_2c0;
  int8_t auStack_2b8 [8];
  void **ppuStack_2b0;
  void **ppuStack_2a8;
  int32_t uStack_2a0;
  int16_t uStack_29c;
  ushort uStack_29a;
  void *puStack_298;
  void **ppuStack_290;
  uint64_t uStack_288;
  int32_t uStack_280;
  int64_t *plStack_278;
  void *puStack_270;
  int64_t lStack_268;
  int32_t uStack_260;
  uint64_t uStack_258;
  int32_t uStack_250;
  int32_t uStack_24c;
  int32_t uStack_248;
  int32_t uStack_244;
  int64_t *plStack_240;
  int64_t lStack_238;
  uint64_t uStack_230;
  uint64_t uStack_228;
  int32_t uStack_220;
  int64_t *plStack_218;
  void *puStack_210;
  int64_t lStack_208;
  int32_t uStack_200;
  uint64_t uStack_1f8;
  int32_t uStack_1f0;
  int32_t uStack_1ec;
  int32_t uStack_1e8;
  int32_t uStack_1e4;
  int64_t *plStack_1e0;
  uint64_t uStack_1d8;
  void *puStack_1d0;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  uint64_t uStack_1b0;
  int8_t auStack_1a8 [32];
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int64_t *plStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [72];
  void *puStack_108;
  void **ppuStack_100;
  int32_t uStack_f8;
  int32_t uStack_f4;
  uint auStack_f0 [2];
  uint64_t uStack_e8;
  int8_t auStack_e0 [32];
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int64_t *plStack_b0;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  
  uStack_1d8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2e8;
  ppuStack_2b0 = &puStack_a8;
  puStack_a8 = &unknown_var_3480_ptr;
  puStack_a0 = auStack_90;
  uStack_98 = 0;
  auStack_90[0] = 0;
  FUN_180049bf0(&puStack_a8,&unknown_var_8408_ptr);
  FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_a8);
  auStack_2b8[0] = 0;
  lVar6 = param_1[4];
  puStack_168 = &unknown_var_672_ptr;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xe;
  strcpy_s(auStack_150,0x20,&unknown_var_3032_ptr);
  ppuStack_2a8 = (void **)SystemCore_LoggingSystem0(lVar6,&puStack_168,1);
  puStack_168 = &system_state_ptr;
  uStack_2a0 = 0;
  uStack_29c = 0;
  lStack_238 = param_1[4];
  plStack_218 = (int64_t *)0x0;
  puStack_210 = &system_data_buffer_ptr;
  uStack_1f8 = 0;
  lStack_208 = 0;
  uStack_200 = 0;
  plStack_1e0 = (int64_t *)0x0;
  uStack_220 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e4 = 0;
  uVar1 = *(uint64_t *)(param_1[4] + 0x15b8);
  ppuStack_2b0 = &puStack_1d0;
  uStack_230._0_4_ = SUB84(ppuStack_2a8,0);
  uStack_230._4_4_ = (int32_t)((uint64_t)ppuStack_2a8 >> 0x20);
  uStack_228._4_4_ = (int32_t)(((uint64_t)uStack_29a << 0x30) >> 0x20);
  uStack_1c8 = (int32_t)uStack_230;
  uStack_1c4 = uStack_230._4_4_;
  uStack_1c0 = 0;
  uStack_1bc = uStack_228._4_4_;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_230 = ppuStack_2a8;
  uStack_228 = (uint64_t)uStack_29a << 0x30;
  puStack_1d0 = (void *)lStack_238;
  CoreEngineDataTransformer(auStack_1a8,&puStack_210);
  uStack_188 = uStack_1f0;
  uStack_184 = uStack_1ec;
  uStack_180 = uStack_1e8;
  uStack_17c = uStack_1e4;
  plStack_178 = plStack_1e0;
  if (plStack_1e0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1e0 + 0x28))();
  }
  lVar5 = FUN_180299eb0(uVar1,0,&puStack_1d0,auStack_2b8);
  lVar6 = param_1[4];
  puStack_168 = &unknown_var_672_ptr;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xc;
  strcpy_s(auStack_150,0x20,&unknown_var_3152_ptr);
  ppuStack_2a8 = (void **)SystemCore_LoggingSystem0(lVar6,&puStack_168,1);
  puStack_168 = &system_state_ptr;
  uStack_2a0 = 0;
  uStack_29c = 0;
  puStack_298 = (void *)param_1[4];
  plStack_278 = (int64_t *)0x0;
  puStack_270 = &system_data_buffer_ptr;
  uStack_258 = 0;
  lStack_268 = 0;
  uStack_260 = 0;
  plStack_240 = (int64_t *)0x0;
  uStack_280 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uVar1 = *(uint64_t *)(param_1[4] + 0x15b8);
  ppuStack_2b0 = &puStack_108;
  uStack_288._4_4_ = (int32_t)(((uint64_t)uStack_29a << 0x30) >> 0x20);
  uStack_f8 = 0;
  uStack_f4 = uStack_288._4_4_;
  auStack_f0[0] = 0;
  uStack_e8 = 0;
  ppuStack_290 = ppuStack_2a8;
  uStack_288 = (uint64_t)uStack_29a << 0x30;
  puStack_108 = puStack_298;
  ppuStack_100 = ppuStack_2a8;
  CoreEngineDataTransformer(auStack_e0,&puStack_270);
  uStack_c0 = uStack_250;
  uStack_bc = uStack_24c;
  uStack_b8 = uStack_248;
  uStack_b4 = uStack_244;
  plStack_b0 = plStack_240;
  if (plStack_240 != (int64_t *)0x0) {
    (**(code **)(*plStack_240 + 0x28))();
  }
  lVar6 = FUN_180299eb0(uVar1,0,&puStack_108,auStack_2b8);
  if ((lVar6 != 0) && (lVar5 != 0)) {
    uVar1 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar2 = param_1[1];
    FUN_18029fc10(uVar1,lVar2,param_2,0x30);
    FUN_18029dca0(uVar1,0xb,0x20,lVar2);
    bVar9 = (char)param_1[5] == '\0';
    plVar7 = param_1 + 2;
    if (bVar9) {
      plVar7 = param_1 + 3;
    }
    lVar2 = *plVar7;
    plVar7 = param_1 + 3;
    if (bVar9) {
      plVar7 = param_1 + 2;
    }
    lVar3 = *plVar7;
    lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar4 + 0x85d8) != 0) || (*(int *)(lVar4 + 0x8908) != -1)) ||
       (*(int *)(lVar4 + 0x8b08) != 0x11)) {
      ppuStack_2b0 = (void **)0x0;
      (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 200))
                (*(int64_t **)(lVar4 + 0x8400),0x34,1,&ppuStack_2b0);
      (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
                (*(int64_t **)(lVar4 + 0x8400),0x34,1,&ppuStack_2b0);
      *(uint64_t *)(lVar4 + 0x85d8) = 0;
      *(int32_t *)(lVar4 + 0x8908) = 0xffffffff;
      *(int32_t *)(lVar4 + 0x8b08) = 0x11;
      *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
    }
    ppuStack_2a8 = &puStack_168;
    puStack_168 = &unknown_var_3480_ptr;
    puStack_160 = auStack_150;
    uStack_158 = 0;
    auStack_150[0] = 0;
    FUN_180049bf0(&puStack_168,&unknown_var_8336_ptr);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_168);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1,lVar3);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1,lVar2);
    lVar3 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (*(int64_t *)(lVar3 + 0x82a0) != (int64_t)**(int **)(lVar6 + 0x10)) {
      (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x228))
                (*(int64_t **)(lVar3 + 0x8400),*(uint64_t *)(*(int **)(lVar6 + 0x10) + 6),0,0);
      *(int64_t *)(lVar3 + 0x82a0) = (int64_t)**(int **)(lVar6 + 0x10);
    }
    plVar7 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x148))(plVar7,0x10,0x10,1);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),2,1);
    FUN_1802c2ac0(&puStack_168);
    ppuStack_2a8 = &puStack_108;
    ppuVar8 = (void **)0x0;
    puStack_108 = &unknown_var_3480_ptr;
    ppuStack_100 = (void **)auStack_f0;
    uStack_f8 = 0;
    auStack_f0[0] = auStack_f0[0] & 0xffffff00;
    FUN_180049bf0(&puStack_108,&unknown_var_8352_ptr);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_108);
    lVar4 = system_main_module_state;
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar3 = *param_1;
    if ((lVar3 != 0) &&
       (*(int32_t *)(lVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224), lVar3 != -0x10)) {
      *(int32_t *)(lVar3 + 0x16c) = *(int32_t *)(lVar4 + 0x224);
      ppuVar8 = *(void ***)(lVar3 + 0x18);
    }
    plVar7 = *(int64_t **)(lVar6 + 0x8400);
    ppuStack_2b0 = ppuVar8;
    (**(code **)(*plVar7 + 0x218))(plVar7,0,1,&ppuStack_2b0);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1,lVar2);
    lVar6 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (*(int64_t *)(lVar6 + 0x82a0) != (int64_t)**(int **)(lVar5 + 0x10)) {
      (**(code **)(**(int64_t **)(lVar6 + 0x8400) + 0x228))
                (*(int64_t **)(lVar6 + 0x8400),*(uint64_t *)(*(int **)(lVar5 + 0x10) + 6),0,0);
      *(int64_t *)(lVar6 + 0x82a0) = (int64_t)**(int **)(lVar5 + 0x10);
    }
    plVar7 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x148))(plVar7,0x10,0x10,1);
    ppuStack_2b0 = (void **)0x0;
    plVar7 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar7 + 0x218))(plVar7,0,1,&ppuStack_2b0);
    uStack_2c0 = 1;
    uStack_2c8 = 0xffffffff;
    FUN_18029d760(*(uint64_t *)(system_message_buffer + 0x1cd8),1,1);
    FUN_1802c2ac0(&puStack_108);
  }
  if (plStack_240 != (int64_t *)0x0) {
    (**(code **)(*plStack_240 + 0x38))();
  }
  ppuStack_2a8 = &puStack_270;
  puStack_270 = &system_data_buffer_ptr;
  if (lStack_268 == 0) {
    lStack_268 = 0;
    uStack_258 = uStack_258 & 0xffffffff00000000;
    puStack_270 = &system_state_ptr;
    if (plStack_278 != (int64_t *)0x0) {
      (**(code **)(*plStack_278 + 0x38))();
    }
    if (plStack_1e0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    ppuStack_2a8 = &puStack_210;
    puStack_210 = &system_data_buffer_ptr;
    if (lStack_208 == 0) {
      lStack_208 = 0;
      uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
      puStack_210 = &system_state_ptr;
      if (plStack_218 != (int64_t *)0x0) {
        (**(code **)(*plStack_218 + 0x38))();
      }
      FUN_1802c2ac0(&puStack_a8);
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_2e8);
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



uint64_t *
FUN_1802c6e20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_8440_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1802c6e70(uint64_t *param_1)
void FUN_1802c6e70(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0x22) {
    puVar4[0x16] = &system_state_ptr;
    puVar4[0xb] = &system_state_ptr;
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1802c6ef0(int64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  uVar6 = param_1[1];
  if (uVar6 < (uint64_t)param_1[2]) {
    FUN_1802c7040(uVar6);
    param_1[1] = param_1[1] + 0x110;
    return param_1[1] + -0x110;
  }
  lVar3 = *param_1;
  lVar5 = (int64_t)(uVar6 - lVar3) / 0x110;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) {
      lVar2 = 0;
      goto LAB_1802c6f93;
    }
  }
  lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x110,(char)param_1[3],uVar6,0xfffffffffffffffe);
  uVar6 = param_1[1];
  lVar3 = *param_1;
LAB_1802c6f93:
  lVar3 = FUN_1802c7c60(lVar3,uVar6,lVar2);
  FUN_1802c7040(lVar3,param_2);
  puVar1 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar1) {
    do {
      puVar4[0x16] = &system_state_ptr;
      puVar4[0xb] = &system_state_ptr;
      *puVar4 = &system_state_ptr;
      puVar4 = puVar4 + 0x22;
    } while (puVar4 != puVar1);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = lVar2;
    param_1[1] = lVar3 + 0x110;
    param_1[2] = lVar5 * 0x110 + lVar2;
    return lVar3;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



int64_t FUN_1802c7040(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1800b8300();
  FUN_1800b8300(param_1 + 0x58,param_2 + 0x58,param_3,param_4,uVar1);
  FUN_1800b8300(param_1 + 0xb0,param_2 + 0xb0);
  *(int8_t *)(param_1 + 0x108) = *(int8_t *)(param_2 + 0x108);
  return param_1;
}






