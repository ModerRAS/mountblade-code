#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part197.c - 15 个函数

// 函数: void FUN_18017b28d(void)
void FUN_18017b28d(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (unaff_RDI == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RDI << 6,(char)unaff_RBX[3]);
  }
  if (unaff_RBP != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = lVar1;
  lVar1 = unaff_RDI * 0x40 + lVar1;
  unaff_RBX[2] = lVar1;
  unaff_RBX[1] = lVar1;
  return;
}





// 函数: void FUN_18017b2ed(int64_t param_1)
void FUN_18017b2ed(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar3;
  
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 6;
  if (uVar3 < unaff_RDI) {
    lVar1 = uVar3 * 0x40 + unaff_RBP;
    if (unaff_RBP != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RSI - lVar1);
    }
    *(int64_t *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RBP != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(unaff_RBX + 8) = param_1;
  }
  return;
}





// 函数: void FUN_18017b36c(void)
void FUN_18017b36c(void)

{
  return;
}





// 函数: void FUN_18017b380(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18017b380(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18017b400(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_18017b3a0(int64_t *param_1)
void FUN_18017b3a0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_18017a9c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_18017b400(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18017b400(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != (uint64_t *)0x0) {
    FUN_18017b400(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((int64_t *)param_2[4] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_2[4] + 0x38))();
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017b480(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_18017b480(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  
  uVar7 = (int64_t)param_3 - (int64_t)param_2 >> 3;
  if ((uint64_t)(param_1[2] - *param_1 >> 3) < uVar7) {
    if (uVar7 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 8,(char)param_1[3]);
    }
    if (param_2 != param_3) {
      lVar6 = lVar2 - (int64_t)param_2;
      do {
        plVar1 = (int64_t *)*param_2;
        *(int64_t **)(lVar6 + (int64_t)param_2) = plVar1;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x28))();
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    plVar1 = (int64_t *)param_1[1];
    plVar5 = (int64_t *)*param_1;
    if (plVar5 != plVar1) {
      do {
        if ((int64_t *)*plVar5 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar5 + 0x38))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
      plVar5 = (int64_t *)*param_1;
    }
    if (plVar5 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar5);
    }
    lVar6 = lVar2 + uVar7 * 8;
    *param_1 = lVar2;
    param_1[2] = lVar6;
    param_1[1] = lVar6;
  }
  else {
    uVar3 = param_1[1] - *param_1 >> 3;
    if (uVar3 < uVar7) {
      FUN_18017b5e0(param_2,param_2 + uVar3);
      lVar2 = FUN_18017b680(param_2 + uVar3,param_3,param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      plVar4 = (int64_t *)FUN_18017b5e0(param_2,param_3);
      plVar1 = (int64_t *)param_1[1];
      for (plVar5 = plVar4; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if ((int64_t *)*plVar5 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar5 + 0x38))();
        }
      }
      param_1[1] = (int64_t)plVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017b4bc(int64_t param_1)
void FUN_18017b4bc(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *unaff_RBX;
  int64_t *plVar3;
  int64_t *unaff_RBP;
  int64_t *unaff_RSI;
  int64_t lVar4;
  int64_t unaff_R14;
  
  if (unaff_R14 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_R14 * 8,*(int8_t *)(param_1 + 0x18));
  }
  if (unaff_RBX != unaff_RBP) {
    lVar4 = lVar2 - (int64_t)unaff_RBX;
    do {
      plVar1 = (int64_t *)*unaff_RBX;
      *(int64_t **)(lVar4 + (int64_t)unaff_RBX) = plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      unaff_RBX = unaff_RBX + 1;
    } while (unaff_RBX != unaff_RBP);
  }
  plVar1 = (int64_t *)unaff_RSI[1];
  plVar3 = (int64_t *)*unaff_RSI;
  if (plVar3 != plVar1) {
    do {
      if ((int64_t *)*plVar3 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = (int64_t *)*unaff_RSI;
  }
  if (plVar3 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar3);
  }
  lVar4 = lVar2 + unaff_R14 * 8;
  *unaff_RSI = lVar2;
  unaff_RSI[2] = lVar4;
  unaff_RSI[1] = lVar4;
  return;
}





// 函数: void FUN_18017b55d(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_18017b55d(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t unaff_RSI;
  uint64_t unaff_R14;
  
  uVar2 = *(int64_t *)(param_1 + 8) - param_3 >> 3;
  if (uVar2 < unaff_R14) {
    FUN_18017b5e0();
    uVar4 = FUN_18017b680(param_2 + uVar2 * 8);
    *(uint64_t *)(unaff_RSI + 8) = uVar4;
  }
  else {
    plVar3 = (int64_t *)FUN_18017b5e0();
    plVar1 = *(int64_t **)(unaff_RSI + 8);
    for (plVar5 = plVar3; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if ((int64_t *)*plVar5 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar5 + 0x38))();
      }
    }
    *(int64_t **)(unaff_RSI + 8) = plVar3;
  }
  return;
}



int64_t * FUN_18017b5e0(int64_t param_1,int64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  if (0 < lVar3) {
    param_1 = param_1 - (int64_t)param_3;
    do {
      plVar1 = *(int64_t **)(param_1 + (int64_t)param_3);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = (int64_t *)*param_3;
      *param_3 = (int64_t)plVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar3 = lVar3 + -1;
      param_3 = param_3 + 1;
    } while (0 < lVar3);
  }
  return param_3;
}



int64_t * FUN_18017b680(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (int64_t *)*param_1;
      *param_3 = (int64_t)plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_1 != param_2);
  }
  return param_3;
}



int64_t * FUN_18017b6e0(int64_t *param_1,int32_t *param_2,int32_t *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar6 = param_2 + 0x10;
    do {
      puVar4 = (uint64_t *)*param_1;
      *puVar4 = *(uint64_t *)(puVar6 + -0x10);
      *(uint64_t *)(puVar6 + -0x10) = 0;
      puVar1 = puVar4 + 1;
      *puVar1 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(int32_t *)(puVar4 + 4) = puVar6[-8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -0xe);
      *(uint64_t *)(puVar6 + -0xe) = uVar5;
      uVar5 = puVar4[2];
      puVar4[2] = *(uint64_t *)(puVar6 + -0xc);
      *(uint64_t *)(puVar6 + -0xc) = uVar5;
      uVar5 = puVar4[3];
      puVar4[3] = *(uint64_t *)(puVar6 + -10);
      *(uint64_t *)(puVar6 + -10) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 4);
      *(int32_t *)(puVar4 + 4) = puVar6[-8];
      puVar6[-8] = uVar3;
      puVar1 = puVar4 + 5;
      *puVar1 = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(int32_t *)(puVar4 + 8) = *puVar6;
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -6);
      *(uint64_t *)(puVar6 + -6) = uVar5;
      uVar5 = puVar4[6];
      puVar4[6] = *(uint64_t *)(puVar6 + -4);
      *(uint64_t *)(puVar6 + -4) = uVar5;
      uVar5 = puVar4[7];
      puVar4[7] = *(uint64_t *)(puVar6 + -2);
      *(uint64_t *)(puVar6 + -2) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 8);
      *(int32_t *)(puVar4 + 8) = *puVar6;
      *puVar6 = uVar3;
      puVar1 = puVar4 + 9;
      *puVar1 = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(int32_t *)(puVar4 + 0xc) = puVar6[8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + 2);
      *(uint64_t *)(puVar6 + 2) = uVar5;
      uVar5 = puVar4[10];
      puVar4[10] = *(uint64_t *)(puVar6 + 4);
      *(uint64_t *)(puVar6 + 4) = uVar5;
      uVar5 = puVar4[0xb];
      puVar4[0xb] = *(uint64_t *)(puVar6 + 6);
      *(uint64_t *)(puVar6 + 6) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 0xc);
      *(int32_t *)(puVar4 + 0xc) = puVar6[8];
      puVar6[8] = uVar3;
      *param_1 = (int64_t)(puVar4 + 0xd);
      puVar2 = puVar6 + 10;
      puVar6 = puVar6 + 0x1a;
    } while (puVar2 != param_3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017b850(int64_t param_1)
void FUN_18017b850(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void *puVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void *puVar11;
  
  FUN_18010d9f0(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x8c0));
  FUN_18010da70(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x850));
  FUN_18010d970(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x930));
  FUN_18010d1f0(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0xf50));
  FUN_18010d070(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x10a0));
  FUN_18010d8f0(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x9a0));
  FUN_18010d270(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0xee0));
  FUN_18010d170(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0xfc0));
  FUN_18010d870(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0xa10));
  FUN_18010d0f0(SYSTEM_STATE_MANAGER,*(int32_t *)(core_system_data_memory + 0xe00));
  plVar9 = system_message_buffer;
  FUN_18021fbb0(system_message_buffer);
  FUN_180220fe0(plVar9);
  FUN_18021f910(plVar9);
  if ((void *)*plVar9 == &unknown_var_6752_ptr) {
    FUN_1800ad2a0();
    FUN_1800acb60(plVar9);
    FUN_1800ac700(plVar9);
    FUN_1800ac530(plVar9);
    FUN_1801c93c0();
    FUN_1800ab6f0(plVar9);
    FUN_1800a3880(plVar9,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x1d50),
                  *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1dc0),0);
  }
  else {
    (**(code **)((void *)*plVar9 + 0xa8))(plVar9);
  }
  if ((void *)*plVar9 != &unknown_var_6752_ptr) {
    (**(code **)((void *)*plVar9 + 0x80))(plVar9);
  }
  FUN_18029c9d0(plVar9[0x39b]);
  FUN_18029ae20(plVar9[0x39b]);
  plVar10 = (int64_t *)plVar9[0x39b];
  lVar4 = (**(code **)(*plVar9 + 0x118))(plVar9,0xffffffff);
  plVar8 = *(int64_t **)(lVar4 + 0x1d8);
  if (plVar8 == (int64_t *)0x0) {
    plVar8 = (int64_t *)0x0;
  }
  else {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    if (*plVar8 != 0) {
      (**(code **)(*plVar10 + 0x70))(plVar10,*plVar8,1);
    }
  }
  plVar10[0x1077] = (int64_t)plVar8;
  *(uint64_t *)(plVar9[0x39b] + 0x83f0) = 0;
  FUN_18029de40(plVar9[0x39b],1);
  FUN_18029c8a0(plVar9[0x39b],3,0xff0000ff,0x3f800000,0x8a,0);
  lVar4 = system_resource_state;
  plVar9 = *(int64_t **)(system_resource_state + 0x138);
  if (plVar9 != *(int64_t **)(system_resource_state + 0x140)) {
    do {
      lVar1 = *plVar9;
      if ((*(int64_t *)(lVar1 + 0x15b8) == 0) && (*(int *)(lVar1 + 0x16c0) != 0)) {
        lVar5 = FUN_1802aaef0(lVar4 + 0xac0,lVar1 + 0x16b0);
        if (lVar5 == 0) {
          uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x50,0x10,3);
          lVar5 = FUN_1800ba230(uVar6,lVar1 + 0x16b0);
          FUN_1802ab0c0(lVar4 + 0xac0,lVar5);
        }
        *(int64_t *)(lVar1 + 0x15b8) = lVar5;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != *(int64_t **)(lVar4 + 0x140));
  }
  FUN_1800b3cc0(lVar4);
  FUN_1800d7810();
  FUN_1800f08a0();
  FUN_1800c1a80();
  FUN_180092820();
  FUN_1800d7810();
  lVar4 = system_resource_state;
  plVar9 = *(int64_t **)(system_resource_state + 0x138);
  if (plVar9 != *(int64_t **)(system_resource_state + 0x140)) {
    do {
      lVar1 = *plVar9;
      lVar5 = 7;
      plVar10 = (int64_t *)(lVar1 + 0x1678);
      do {
        lVar2 = *plVar10;
        if ((lVar2 != 0) && (cVar3 = FUN_180240670(lVar1,lVar2), cVar3 == '\0')) {
          puVar11 = &system_buffer_ptr;
          if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
            puVar11 = *(void **)(lVar2 + 0x18);
          }
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x18);
          }
          SystemDataInitializer(&unknown_var_7664_ptr,puVar7,puVar11);
        }
        plVar10 = plVar10 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      plVar9 = plVar9 + 1;
    } while (plVar9 != *(int64_t **)(lVar4 + 0x140));
  }
  *(int8_t *)(param_1 + 0x1fc) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017bc20(uint64_t param_1)
void FUN_18017bc20(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  uint64_t uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &unknown_var_3480_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xc;
  strcpy_s(auStack_c0,0x40,&system_data_96c8);
  SystemCommunicationProcessor(apuStack_78,&puStack_d8);
  uStack_20 = 9;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &system_state_ptr;
  puStack_d8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017bd30(uint64_t param_1)
void FUN_18017bd30(uint64_t param_1)

{
  int8_t auStack_668 [32];
  int32_t uStack_648;
  void **appuStack_640 [2];
  uint64_t uStack_630;
  void *apuStack_628 [11];
  int32_t uStack_5d0;
  void *puStack_5c8;
  int8_t *puStack_5c0;
  int32_t uStack_5b8;
  int8_t auStack_5b0 [72];
  void *puStack_568;
  int8_t *puStack_560;
  int32_t uStack_558;
  int8_t auStack_550 [72];
  void *puStack_508;
  int8_t *puStack_500;
  int32_t uStack_4f8;
  int8_t auStack_4f0 [72];
  void *puStack_4a8;
  int8_t *puStack_4a0;
  int32_t uStack_498;
  int8_t auStack_490 [72];
  void *puStack_448;
  int8_t *puStack_440;
  int32_t uStack_438;
  int8_t auStack_430 [72];
  void *puStack_3e8;
  int8_t *puStack_3e0;
  int32_t uStack_3d8;
  int8_t auStack_3d0 [72];
  void *puStack_388;
  int8_t *puStack_380;
  int32_t uStack_378;
  int8_t auStack_370 [72];
  void *puStack_328;
  int8_t *puStack_320;
  int32_t uStack_318;
  int8_t auStack_310 [72];
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  int8_t auStack_2b0 [72];
  void *puStack_268;
  int8_t *puStack_260;
  int32_t uStack_258;
  int8_t auStack_250 [72];
  void *puStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [72];
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_630 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_668;
  uStack_648 = 0;
  puStack_5c8 = &unknown_var_3480_ptr;
  puStack_5c0 = auStack_5b0;
  auStack_5b0[0] = 0;
  uStack_5b8 = 4;
  strcpy_s(auStack_5b0,0x40,&system_data_96e0);
  SystemCommunicationProcessor(apuStack_628,&puStack_5c8);
  uStack_5d0 = 2;
  uStack_648 = 1;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_5c8 = &system_state_ptr;
  puStack_568 = &unknown_var_3480_ptr;
  puStack_560 = auStack_550;
  auStack_550[0] = 0;
  uStack_558 = 7;
  strcpy_s(auStack_550,0x40,&system_data_96d8);
  SystemCommunicationProcessor(apuStack_628,&puStack_568);
  uStack_5d0 = 10;
  uStack_648 = 2;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_568 = &system_state_ptr;
  puStack_508 = &unknown_var_3480_ptr;
  puStack_500 = auStack_4f0;
  auStack_4f0[0] = 0;
  uStack_4f8 = 7;
  strcpy_s(auStack_4f0,0x40,&system_data_96f0);
  SystemCommunicationProcessor(apuStack_628,&puStack_508);
  uStack_5d0 = 10;
  uStack_648 = 4;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_508 = &system_state_ptr;
  puStack_4a8 = &unknown_var_3480_ptr;
  puStack_4a0 = auStack_490;
  auStack_490[0] = 0;
  uStack_498 = 7;
  strcpy_s(auStack_490,0x40,&system_data_96e8);
  SystemCommunicationProcessor(apuStack_628,&puStack_4a8);
  uStack_5d0 = 10;
  uStack_648 = 8;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_4a8 = &system_state_ptr;
  puStack_448 = &unknown_var_3480_ptr;
  puStack_440 = auStack_430;
  auStack_430[0] = 0;
  uStack_438 = 7;
  strcpy_s(auStack_430,0x40,&system_data_9710);
  SystemCommunicationProcessor(apuStack_628,&puStack_448);
  uStack_5d0 = 10;
  uStack_648 = 0x10;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_448 = &system_state_ptr;
  puStack_3e8 = &unknown_var_3480_ptr;
  puStack_3e0 = auStack_3d0;
  auStack_3d0[0] = 0;
  uStack_3d8 = 0x11;
  strcpy_s(auStack_3d0,0x40,&system_data_96f8);
  SystemCommunicationProcessor(apuStack_628,&puStack_3e8);
  uStack_5d0 = 7;
  uStack_648 = 0x20;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_3e8 = &system_state_ptr;
  puStack_388 = &unknown_var_3480_ptr;
  puStack_380 = auStack_370;
  auStack_370[0] = 0;
  uStack_378 = 0x22;
  strcpy_s(auStack_370,0x40,&system_data_9728);
  SystemCommunicationProcessor(apuStack_628,&puStack_388);
  uStack_5d0 = 0;
  uStack_648 = 0x40;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_388 = &system_state_ptr;
  puStack_328 = &unknown_var_3480_ptr;
  puStack_320 = auStack_310;
  auStack_310[0] = 0;
  uStack_318 = 0xb;
  strcpy_s(auStack_310,0x40,&system_data_9718);
  SystemCommunicationProcessor(apuStack_628,&puStack_328);
  uStack_5d0 = 4;
  uStack_648 = 0x80;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_328 = &system_state_ptr;
  puStack_2c8 = &unknown_var_3480_ptr;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0x12;
  strcpy_s(auStack_2b0,0x40,&system_data_9768);
  SystemCommunicationProcessor(apuStack_628,&puStack_2c8);
  uStack_5d0 = 2;
  uStack_648 = 0x100;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_2c8 = &system_state_ptr;
  puStack_268 = &unknown_var_3480_ptr;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0x12;
  strcpy_s(auStack_250,0x40,&system_data_9750);
  SystemCommunicationProcessor(apuStack_628,&puStack_268);
  uStack_5d0 = 2;
  uStack_648 = 0x200;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_268 = &system_state_ptr;
  puStack_208 = &unknown_var_3480_ptr;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0x1e;
  strcpy_s(auStack_1f0,0x40,&system_data_97a0);
  SystemCommunicationProcessor(apuStack_628,&puStack_208);
  uStack_5d0 = 2;
  uStack_648 = 0x400;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_208 = &system_state_ptr;
  puStack_1a8 = &unknown_var_3480_ptr;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0x1b;
  strcpy_s(auStack_190,0x40,&system_data_9780);
  SystemCommunicationProcessor(apuStack_628,&puStack_1a8);
  uStack_5d0 = 2;
  uStack_648 = 0x800;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_1a8 = &system_state_ptr;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0x1b;
  strcpy_s(auStack_130,0x40,&system_data_97e0);
  SystemCommunicationProcessor(apuStack_628,&puStack_148);
  uStack_5d0 = 2;
  uStack_648 = 0x1000;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &unknown_var_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x18;
  strcpy_s(auStack_d0,0x40,&system_data_97c0);
  SystemCommunicationProcessor(apuStack_628,&puStack_e8);
  uStack_5d0 = 0xb;
  uStack_648 = 0x2000;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xc;
  strcpy_s(auStack_70,0x40,&system_data_9818);
  SystemCommunicationProcessor(apuStack_628,&puStack_88);
  uStack_5d0 = 0xb;
  uStack_648 = 0x4000;
  FUN_180180730(param_1,appuStack_640,apuStack_628);
  uStack_648 = 0;
  appuStack_640[0] = apuStack_628;
  apuStack_628[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_668);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017c750(uint64_t param_1,uint64_t param_2)
void FUN_18017c750(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_80;
  uint64_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &unknown_var_5664_ptr;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(int32_t *)(puVar3 + 0x14) = 3;
  puVar3[0xf] = 0x4024000000000000;
  puVar3[0xe] = 0x3fe0000000000000;
  *(int8_t *)((int64_t)puVar3 + 0x81) = 0;
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  puStack_78 = (uint64_t *)0x0;
  uStack_70 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_78 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puVar3 = 0x6f6d4120646e6542;
  *(int32_t *)(puVar3 + 1) = 0x746e75;
  uStack_70 = 0xb;
  FUN_1803460a0(puVar2,&puStack_80,puVar2 + 0xf,1,uVar4);
  puStack_80 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017c7a0(uint64_t param_1,uint64_t param_2)
void FUN_18017c7a0(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_90;
  uint64_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_30;
  
  uStack_30 = 0x18017c7c8;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x80,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &unknown_var_6048_ptr;
  puVar3[0xe] = 0;
  *(int32_t *)(puVar3 + 0xf) = 0x3f800000;
  puStack_90 = &system_data_buffer_ptr;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_88 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar3 = 0x6c6169726574614d;
  *(int8_t *)(puVar3 + 1) = 0;
  uStack_80 = 8;
  FUN_1803460a0(puVar2,&puStack_90,puVar2 + 0xe,10,uVar4);
  puStack_90 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017c7e0(uint64_t param_1,int64_t param_2)
void FUN_18017c7e0(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int8_t auStack_168 [32];
  uint64_t uStack_148;
  uint64_t *puStack_140;
  void *puStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [16];
  void *puStack_110;
  int8_t *puStack_108;
  int32_t uStack_100;
  int8_t auStack_f8 [32];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [32];
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [32];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  uStack_30 = 0x18017c80a;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
  uStack_148 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  puVar2 = puVar1;
  puStack_140 = puVar1;
  FUN_1803456e0(puVar1,param_2,param_1);
  *puVar2 = &unknown_var_6496_ptr;
  *(int16_t *)(puVar2 + 0x12) = 0;
  *(int8_t *)((int64_t)puVar2 + 0x92) = 0;
  *(bool *)((int64_t)puVar2 + 0x93) = *(char *)(param_2 + 0x2e5) == '\0';
  *(int32_t *)(puVar2 + 0x13) = 0;
  *(int8_t *)((int64_t)puVar2 + 0x94) = 0;
  *(int32_t *)((int64_t)puVar2 + 0x8c) = 0x3f800000;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(int32_t *)(puVar2 + 0x11) = 0x41a00000;
  puStack_138 = &system_config_ptr;
  puStack_130 = auStack_120;
  auStack_120[0] = 0;
  uStack_128 = 8;
  strcpy_s(auStack_120,0x10,&unknown_var_8280_ptr);
  FUN_1803460a0(puVar1,&puStack_138,puVar1 + 0x12,3);
  puStack_138 = &system_state_ptr;
  puStack_110 = &unknown_var_672_ptr;
  puStack_108 = auStack_f8;
  auStack_f8[0] = 0;
  uStack_100 = 0x13;
  strcpy_s(auStack_f8,0x20,&unknown_var_6464_ptr);
  FUN_1803460a0(puVar1,&puStack_110,(int64_t)puVar1 + 0x92,3);
  puStack_110 = &system_state_ptr;
  puStack_d8 = &unknown_var_672_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0x11;
  strcpy_s(auStack_c0,0x20,&unknown_var_6440_ptr);
  FUN_1803460a0(puVar1,&puStack_d8,(int64_t)puVar1 + 0x8c,2);
  puStack_d8 = &system_state_ptr;
  puStack_a0 = &unknown_var_672_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xf;
  strcpy_s(auStack_88,0x20,&unknown_var_6424_ptr);
  FUN_1803460a0(puVar1,&puStack_a0,puVar1 + 0x11,2);
  puStack_a0 = &system_state_ptr;
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 9;
  strcpy_s(auStack_50,0x20,&unknown_var_6408_ptr);
  FUN_1803460a0(puVar1,&puStack_68,puVar1 + 0xf,5);
  puStack_68 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



